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
    msg.setTimeStamp(0.49260611609525995);
    msg.setSource(52836U);
    msg.setSourceEntity(205U);
    msg.setDestination(32160U);
    msg.setDestinationEntity(188U);
    msg.state = 183U;
    msg.flags = 190U;
    msg.description.assign("ALCQHJRPFCNYKCXLMZYFUVEYUXFOYDNJBMQGCEENFOJCSYQWGHBPGQVZXEDLNSVFLBIRUVYLMTQCCMPGAEOOHYONPLVZIIBPXHHQSNPGKTGPZFJHKJWIMANIBGHLWUHDDAENOGQRMX");

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
    msg.setTimeStamp(0.0462970294411964);
    msg.setSource(5219U);
    msg.setSourceEntity(96U);
    msg.setDestination(33154U);
    msg.setDestinationEntity(10U);
    msg.state = 224U;
    msg.flags = 10U;
    msg.description.assign("BEJMGWZIZBKFDSQLUMPJUFPKNJRBKGOTLXJTPJYIFIYAAEEUEQWZVRAROIZFCYDKQBUWXLBOKIAOJCBTTPCJDCGKZXQONIXOCWPYPFTC");

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
    msg.setTimeStamp(0.2968408146372832);
    msg.setSource(46593U);
    msg.setSourceEntity(42U);
    msg.setDestination(42874U);
    msg.setDestinationEntity(198U);
    msg.state = 238U;
    msg.flags = 205U;
    msg.description.assign("GCOPIIULQMMIRXAPITKXUTGYFPNQQPQSQFMXRBXFJEHPAYZVOTTNXRSMQYOVWWRYBFBVSCTLSCTKBRHMUEAFWJMDQYOTGZSBJWZNMVDRVETNSHKWAJTCFCUGKBMQLVBVIEHJOEOLQODWMDUJLSRXGIEFPKNWWZOXCJYHGGKBZYXXYHLPOAPEQKRKTUHDZINFLLRREWHJAYOZDCSIDAJSMDUJPDFCYHIULFEWZADPHVGNCLNUBAZGNUCZVKVK");

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
    msg.setTimeStamp(0.6795975347912917);
    msg.setSource(21723U);
    msg.setSourceEntity(22U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.7020605549322125);
    msg.setSource(58409U);
    msg.setSourceEntity(225U);
    msg.setDestination(19408U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.31932304763331265);
    msg.setSource(13921U);
    msg.setSourceEntity(133U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.3430565975651082);
    msg.setSource(40381U);
    msg.setSourceEntity(4U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(203U);
    msg.id = 64U;
    msg.label.assign("BVRFOZQVDIAYHNTBSRAPXMKIUGMNPULXUECTDAFVJDZGXWTRLFISLWRZKRQLPAKMDUQICXWMTYVAJDIHDONTGAHUEJWXOKZELPBUFJKWODGGIRZBOFYSYSWSKZR");
    msg.component.assign("KFZCUSADSHIOKIBFEGVHNFARLJTXNZDRTEJWCYPLVMHRUAOZNOYPKLJJNKEQFWMIAJMPOTWPHMXESDBYFQWYFIZKUFQRJQCNIZMKXOVSMTNLXPGTTHHVVTYDALBCISOPWZSCOWNEDVDUIVICJLUUPOAEXKZBIYQJDTUQBMMGPYGVALHNYCTR");
    msg.act_time = 36764U;
    msg.deact_time = 44133U;

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
    msg.setTimeStamp(0.06717181650192594);
    msg.setSource(31207U);
    msg.setSourceEntity(45U);
    msg.setDestination(26445U);
    msg.setDestinationEntity(47U);
    msg.id = 25U;
    msg.label.assign("MKJNTUXSMBKNKDNCGCWOVMMKZOWSTMVVLSZKVCUNEPHZWYVGNTNAIIKTRDWSTRPQVCGXZRVAQFNUXFERXYWXVIGLQDKHAQDULUEYYKDEFIIMOCDOSPHJLQNKUPRMFJBGQFUIAMHHDO");
    msg.component.assign("JOLWVXUIXEDYPSBODBIHZYSXDXEKALMDFTXBMLGWL");
    msg.act_time = 39430U;
    msg.deact_time = 47905U;

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
    msg.setTimeStamp(0.3574970022618468);
    msg.setSource(7930U);
    msg.setSourceEntity(93U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(208U);
    msg.id = 34U;
    msg.label.assign("OJLRXWYDEIYEXHNJGHTOBDDTCSCPRBDUKBTYBPSTNTFXRPWTMCSPQAYIZZNWHJREKWOGUQTEUXAHIZNSWOWAKDVQNFDNQYGJUMBVPDVJIHDSKWVCI");
    msg.component.assign("KOPSFRPKMLCMRTFSDWMSCKGOIDJWZEQVBCWSFYMFRRPBTVPVWWIOCFXSKPCNZIGUJDUAZVERINFKYOEJVHEHAJYMBDEVHZPTRHLAZIUCDWEGDSAQXNYHVKFJZQQOPKLJFDU");
    msg.act_time = 692U;
    msg.deact_time = 34509U;

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
    msg.setTimeStamp(0.5156371305197858);
    msg.setSource(51979U);
    msg.setSourceEntity(169U);
    msg.setDestination(14767U);
    msg.setDestinationEntity(15U);
    msg.id = 16U;

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
    msg.setTimeStamp(0.6199431005335051);
    msg.setSource(62209U);
    msg.setSourceEntity(130U);
    msg.setDestination(20895U);
    msg.setDestinationEntity(69U);
    msg.id = 68U;

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
    msg.setTimeStamp(0.7511103590707777);
    msg.setSource(36343U);
    msg.setSourceEntity(213U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(88U);
    msg.id = 202U;

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
    msg.setTimeStamp(0.4070043915133671);
    msg.setSource(7791U);
    msg.setSourceEntity(197U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(197U);
    msg.op = 234U;
    msg.list.assign("MERCHDASVZAFHUIIAXEGIZCSLQYRDQNEHUARCNWBYOGLWWADXHNZGGOSVGFITECGJNRSSKHNQUVSWACRDQPGATTQNCFPMIJKXOSKALKBJELCGYYILXOFIWOVGUCJWFYPBLWHLQKXWKMBMGERUYZUJXJMCITZZIYDMHZVFVKSDEZQTOSK");

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
    msg.setTimeStamp(0.06288912321255935);
    msg.setSource(54254U);
    msg.setSourceEntity(61U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(89U);
    msg.op = 76U;
    msg.list.assign("TDBOXICFJMUPEDNLQAGNWREHVJEAFPOSJXOXMNYNAJAXOQSA");

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
    msg.setTimeStamp(0.696913827189839);
    msg.setSource(51292U);
    msg.setSourceEntity(1U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(72U);
    msg.op = 176U;
    msg.list.assign("QXBWVJMIJVACCYNGODPLZVHWBAVRSKTTSB");

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
    msg.setTimeStamp(0.5026696219459893);
    msg.setSource(64987U);
    msg.setSourceEntity(120U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(136U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.8630519385513017);
    msg.setSource(36359U);
    msg.setSourceEntity(252U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(158U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.7871120316462048);
    msg.setSource(3401U);
    msg.setSourceEntity(82U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(148U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.15022622616364822);
    msg.setSource(56335U);
    msg.setSourceEntity(228U);
    msg.setDestination(42896U);
    msg.setDestinationEntity(71U);
    msg.value = 121U;

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
    msg.setTimeStamp(0.40791511661594393);
    msg.setSource(57125U);
    msg.setSourceEntity(15U);
    msg.setDestination(21197U);
    msg.setDestinationEntity(234U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.3488270620813241);
    msg.setSource(23683U);
    msg.setSourceEntity(116U);
    msg.setDestination(43968U);
    msg.setDestinationEntity(221U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.3826979336373352);
    msg.setSource(33564U);
    msg.setSourceEntity(105U);
    msg.setDestination(23343U);
    msg.setDestinationEntity(246U);
    msg.consumer.assign("KCLPFAKKVHKMRLBWKOZNQZBULOIYMGNMCTUZHHIKVJF");
    msg.message_id = 36046U;

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
    msg.setTimeStamp(0.20314203889482796);
    msg.setSource(47989U);
    msg.setSourceEntity(193U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(112U);
    msg.consumer.assign("KIOBNGWPRTYCTYLIKFRHUHCCNKLRDOKCQCMZXXNKROAJNRUZSMSNBEPGLOULDEUQDFUSWGSGKYHQHPCCQVKLYLDIVEUSBVJZIIDFVFJKATJMNNQTRBRZWHDGQVXPBWBOYJAGVDSBOLOOLNESYYETMDZUMEKAEXEAMUITMXQLVYFSRXSMMHZWOSJAGZXHXNFGLQYOFPHZBFYGPJPBFHK");
    msg.message_id = 54023U;

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
    msg.setTimeStamp(0.5149819254165915);
    msg.setSource(4892U);
    msg.setSourceEntity(179U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(44U);
    msg.consumer.assign("OIQDXLAZVRVBLMEXFFGFNPAHXNHDDRWEEUIBOQLLTAASQOQABHVMUXGYCPKELGOEGWERYINFNOXMUXEVQQNGXOACAFTIJBPTBPDBUKULAOTDJHIDTKRXQJCWFHHOUSGNKYGHWUVMKOJUGYYPCYZSQMPWL");
    msg.message_id = 12452U;

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
    msg.setTimeStamp(0.48569171989146753);
    msg.setSource(45568U);
    msg.setSourceEntity(219U);
    msg.setDestination(24488U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.20623462610594956);
    msg.setSource(49309U);
    msg.setSourceEntity(11U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.017853489543178114);
    msg.setSource(59881U);
    msg.setSourceEntity(134U);
    msg.setDestination(55762U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.19355545517433537);
    msg.setSource(4089U);
    msg.setSourceEntity(104U);
    msg.setDestination(23180U);
    msg.setDestinationEntity(31U);
    msg.section.assign("VIPSSZKDCOMCRNSHKISYEGXQQHIOOLXUNBFXEWHZILGPSRGBTAVMOTCUTRXC");
    msg.param.assign("PGYRBOCPAABWCIBFUUQXOBINVJUSTRFCRHKOMWBAVVWSPKBETELRQVMUVSDVGBZURTRLQJSXGRCXKLWHGLWUQPLESMOMDJRDPCEDXDZSSQPYGDGWRH");
    msg.value.assign("YZCRONOQPYNRFKYOHMYAWQPSXLXIULNVFVDSSAUCNXFEDHGJPVOHMXRZAHXIOTIPFEKNWBOFZUTCMTKSHJVKCCEDZVSCISBVIGZDEJKGJRODBKVGAWKYAMPJSGZGOHQPTROUTBUVCUKKUVEJXFUFWHRXBRFABZEBNIPLLNQIJWZDMQDRDILJQMBQQPGEGMA");

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
    msg.setTimeStamp(0.41693815435589554);
    msg.setSource(29198U);
    msg.setSourceEntity(145U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(10U);
    msg.section.assign("LKAWMIHTXMEJSNQVZCQQTIJIJHNWUSZFAFIQHOSGXKKYSDVNEPROVCXQPHYGISGYFTXTYTEPBBWMQXLZHPMCYFRGITWJAZXNJUEKGVADUJBOMFLRPUZXDTPUYAXLTKRIKNWOLDOLGQZRTZXLAGJBDWOKICHMRLTVCCNENZYSBVYURVCKMSLCPKOJAZBWESQQHBDNJJQXWNHDSGYHFZBMAOBUECPMUIREVFKYCSEOD");
    msg.param.assign("ZMRTPGZADUYJNRKOIDJQIKIJXFGCVCGFSBEHMHJPIGZPYEITSBOVWMUWKPRLZOLJECCAVWJONLJNYQFWAYLJGCCIYDBRVOORGKVHAXMQJUMFRLHQKLTFMQYPNTATFSNDJYEONHDPXOFHL");
    msg.value.assign("XFILYWZHSQQHUACCEMJKIRYUGFNWLSBQEXDOPNTZIBZRDNETFMFXBQWFDODTYBFHSTOM");

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
    msg.setTimeStamp(0.607420727177443);
    msg.setSource(51540U);
    msg.setSourceEntity(83U);
    msg.setDestination(23006U);
    msg.setDestinationEntity(167U);
    msg.section.assign("IZCEWRJBOJIJUSQANOVBZPM");
    msg.param.assign("QMUFGXTTELWUMAJQLJTILARXHCETKABLVHXWXXKUYQDBMAZLFGIVVCDZAXDBSQSTWQKZ");
    msg.value.assign("WOYREWABFQRNOWTCASRLPFSDCQOKFVUGHASITIBWGXXSQXBZVKUCVUMXMFJONTMLRWVLNKWKOKLYBMWNQTJJCOQOPIDCJDFQADQZHDDGMPDOIUHZPPLNIFZTEAEWKDAYIRCTXETIEJORYHQJGBHASHBXYNSBWLUUHCKZJYKFFRCRETPIQTZXYEMZUBSIXOQSLNGGASNAMYRILACNBJHJVLZGG");

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
    msg.setTimeStamp(0.7006010548330023);
    msg.setSource(23855U);
    msg.setSourceEntity(156U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(27U);
    msg.op = 125U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MIDDUVRYJJOAGYNNVDWCENEMGPDMFRLGIUKYZXCOXBFYSAIBIAAUBZZNUJQNWJZFINAYXSFTKTEXEFNO");
    tmp_msg_0.param.assign("XPWADODLAPPSCPYLQULWQVBGRJHACNDYBHMNNCOSVTLPEJRSELHEPJNGHNMABZIWQRKTLLDHGIQDLWVFSEUJBZXTXAQBFOBFUAYVRIICJPUYSPMOHHEKQWGBLYTUMYAFJQYJZFMEOXRHKISGQPVVOZTGNAFIYFMUGWCCQVKXJSBPCWDUUSRCJGKKGAXTYXSMMYZIFJSLRDQOABZERXGDUWCKKN");
    tmp_msg_0.value.assign("AUGAXHDWZLATKHZIGSUVHBWXPLMWSJMYUZCGBCUHSLFRDNPYBDUKDOZZFFDLTNCFPHGIHMNAQVKBJFZXSBXGBGUIVQPKSLQOXTISCVJRYMOMDARNAXJCRJBWGWPRRYZQZMQEICTROKKSEVZXSTAQJUTRMUEIQLGVZOFWDREYNMPQHQCOOEFEPCTWXVNFEHKYXIIALKDJINUWBJCEVPCJMWYYJSNGKYYEHSHITTLBN");
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
    msg.setTimeStamp(0.8023071191311474);
    msg.setSource(23003U);
    msg.setSourceEntity(196U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(94U);
    msg.op = 79U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("GSZVBFBXVDNBFZTCYLBRECDKSGZXECRKCCPTOMKOLKRVAEXNYWACGJCNSNPTLJPKHJBYFSDWTTZKUMNORAFXTIK");
    tmp_msg_0.param.assign("PGCXRYAHNLYZVLWQOKMGOKWHGLKSNRCPNADEUATISSQFFDVIOSDXDJVIZHIUQALPZKNPLCYCTXJXIBURRTYCTVEDI");
    tmp_msg_0.value.assign("WIKHCDVWITHXVBWOAJDVEURFOHMRAXPYOINUMRKWUECZLBGPIWPNMCYUZPUNTWHRMQNGVDFFZCGQZEELXOBHPETPDSRYIZMZMXKKHFXNWYAQOLKFLGEBDFNQQSLEQJNMUTAJNP");
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
    msg.setTimeStamp(0.5448709213567948);
    msg.setSource(20021U);
    msg.setSourceEntity(55U);
    msg.setDestination(48327U);
    msg.setDestinationEntity(157U);
    msg.op = 77U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IZCLEMSYYQ");
    tmp_msg_0.param.assign("QYHGDOLOHJOTEYNFTVKRGKDBLNKMNZ");
    tmp_msg_0.value.assign("QZTBJPGNDPDCSMKQTISXIGWAGBMRRSZMTYGZCKLTLRSLITEYKLNWAKKSLVHEKLBAWBSLAVUFVYBAYUQMFCFIJEBQHYCYFDZHMKTPNTFEZXODVDBRUWCCJLDUIHFGEYIOUEFQSCXNNMBEVARNVHVRMLMMNDOJEROPXGJQNHAGYUBTTRPAHDISPOEFBKNUGWXGPVAAXZJQHJWXYJPITZCJSCKPYDUUPJZXQCHQIWONOOKHREVWISFRD");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7394866838198964);
    msg.setSource(53484U);
    msg.setSourceEntity(108U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(76U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.6971006755099972);
    msg.setSource(14340U);
    msg.setSourceEntity(197U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(64U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.992066549778826);
    msg.setSource(54016U);
    msg.setSourceEntity(159U);
    msg.setDestination(62733U);
    msg.setDestinationEntity(237U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.32580989991205334);
    msg.setSource(39925U);
    msg.setSourceEntity(102U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 200U;
    msg.step_number = 232U;
    msg.step.assign("NOFRPILSDFRFMRYLAVPSPHNOOYSDQTENVKXAWGUNGUUDWXVPIXTUWKCVF");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.9055031674563153);
    msg.setSource(17662U);
    msg.setSourceEntity(239U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 45U;
    msg.step_number = 221U;
    msg.step.assign("OTUOCPXCMLKDOSIDWAJHYABEZVZYJJYVRXBVYVKLBDPIKRGGLZUBWXESIWGKBDQQWAJZDHHOKFRICQGQHNCIXPNFVKIWATSFBKMHNJJVTLMERACRDXI");
    msg.flags = 54U;

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
    msg.setTimeStamp(0.3869780447884166);
    msg.setSource(21186U);
    msg.setSourceEntity(140U);
    msg.setDestination(7443U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 147U;
    msg.step_number = 36U;
    msg.step.assign("BOQWOUDAXPFZZRXDHMRHFIRGATOSGSFWQNXVSMYYCIGXOASTXZPNTKVFURQJVHPVADPOOPZPEBLBWFCPIODSKNAXMBGEMQSUKXCPKXQZYNEYFYJLYILTMEGSBKDDUAPGKCTUCJRJDTAWRUFECUJNYFLEOTEWLPBCADHBALIJVZOMTVLQZVDWNKNHQKVNGIUCRMYS");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.7612277162104961);
    msg.setSource(43239U);
    msg.setSourceEntity(109U);
    msg.setDestination(42221U);
    msg.setDestinationEntity(27U);
    msg.state = 12U;
    msg.error.assign("UMJIXCOCYLGUDFNBIMLSJQHZKGQQ");

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
    msg.setTimeStamp(0.1064543862205578);
    msg.setSource(4696U);
    msg.setSourceEntity(99U);
    msg.setDestination(14627U);
    msg.setDestinationEntity(218U);
    msg.state = 81U;
    msg.error.assign("RKFLDECMTZLSFRSTOZJLBJGIWZIBJTQVOOAVIPJIELOJTMBUDQBKGCKMUKHEVCHOSBPMDZQSKMKIJHIFVAAZKHDTUAJCTQPAQXGBIKYXAPDWCXQYNUWNQAWPPMJBWPLNYTY");

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
    msg.setTimeStamp(0.8669340253250578);
    msg.setSource(24588U);
    msg.setSourceEntity(171U);
    msg.setDestination(26712U);
    msg.setDestinationEntity(151U);
    msg.state = 43U;
    msg.error.assign("LURNHLIHOFVXJPRBNSPJTVWECXYFUAGDZXDIMYWDYBDYEOSHSTSKKZCQTXLLTSIJTXURPTAUVRUCJQX");

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
    msg.setTimeStamp(0.12967185257092417);
    msg.setSource(446U);
    msg.setSourceEntity(16U);
    msg.setDestination(9405U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.5046179675625865);
    msg.setSource(60038U);
    msg.setSourceEntity(168U);
    msg.setDestination(40322U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.3246274472058618);
    msg.setSource(17151U);
    msg.setSourceEntity(53U);
    msg.setDestination(34244U);
    msg.setDestinationEntity(204U);

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.12218796870394932);
    msg.setSource(58323U);
    msg.setSourceEntity(153U);
    msg.setDestination(44545U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.6847758495680811;
    msg.lon = 0.24594568194103905;
    msg.height = 0.1668055995233908;
    msg.x = 0.34794813253591594;
    msg.y = 0.49547772545997915;
    msg.z = 0.41029948392407145;
    msg.phi = 0.5194951444224561;
    msg.theta = 0.6804724295878872;
    msg.psi = 0.5380891844710812;
    msg.u = 0.3855671425405174;
    msg.v = 0.19658194755971148;
    msg.w = 0.2505917325697975;
    msg.p = 0.43830012852576306;
    msg.q = 0.3956674428752931;
    msg.r = 0.28079951875292897;
    msg.svx = 0.4862623516410718;
    msg.svy = 0.10246843027914954;
    msg.svz = 0.0633953703810266;

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
    msg.setTimeStamp(0.009361545947161876);
    msg.setSource(17671U);
    msg.setSourceEntity(140U);
    msg.setDestination(20060U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.5843859419112367;
    msg.lon = 0.296861616455518;
    msg.height = 0.899221726879915;
    msg.x = 0.809457110821012;
    msg.y = 0.37618929206664964;
    msg.z = 0.2287454538268826;
    msg.phi = 0.8080971039791268;
    msg.theta = 0.054270822109105166;
    msg.psi = 0.6378333356672613;
    msg.u = 0.9159951722110559;
    msg.v = 0.8074960558919294;
    msg.w = 0.5769012634104684;
    msg.p = 0.7779170431092839;
    msg.q = 0.9154789806098561;
    msg.r = 0.11266705376560837;
    msg.svx = 0.1640186667057133;
    msg.svy = 0.050937737284516116;
    msg.svz = 0.9482948174617815;

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
    msg.setTimeStamp(0.9444004524889452);
    msg.setSource(6736U);
    msg.setSourceEntity(63U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.7096883755584515;
    msg.lon = 0.053365243403034834;
    msg.height = 0.09673112096532754;
    msg.x = 0.31693119164663963;
    msg.y = 0.22340321878262182;
    msg.z = 0.25534168763910003;
    msg.phi = 0.7474280015127274;
    msg.theta = 0.34934231122687587;
    msg.psi = 0.5380509313199303;
    msg.u = 0.6661769291331596;
    msg.v = 0.7277878038493706;
    msg.w = 0.344427106893483;
    msg.p = 0.390157715343026;
    msg.q = 0.05764818528376903;
    msg.r = 0.9039161752779288;
    msg.svx = 0.8996898511647416;
    msg.svy = 0.4778500440767144;
    msg.svz = 0.6259806795608444;

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
    msg.setTimeStamp(0.21865903693332367);
    msg.setSource(42671U);
    msg.setSourceEntity(140U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(10U);
    msg.op = 24U;
    msg.entities.assign("VRVFJSDKQBMLYEYVIFEZOECBOJSRMKHRPLXVDFGWPHCLXWZYLVQHNTZIGEOUQNPCQOCLXVSEQSJUBHAAJIKFOCTYWCTIYMKPMYAGKFURUKXMRPIAKDWXHPJVGRXO");

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
    msg.setTimeStamp(0.6042083762077275);
    msg.setSource(33704U);
    msg.setSourceEntity(166U);
    msg.setDestination(40610U);
    msg.setDestinationEntity(198U);
    msg.op = 175U;
    msg.entities.assign("YPKEVQEXQAQLWJLODXOJOBLWDBKAZSKZXCATIMGZKENKNAVICFWURIHSCVQJQDDSKXJPVLHPRLUHMMOFOE");

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
    msg.setTimeStamp(0.27390570676020753);
    msg.setSource(178U);
    msg.setSourceEntity(199U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(162U);
    msg.op = 149U;
    msg.entities.assign("JXVOAQLYSTBCTJXEGNRPFXFRRZBDQVPNEFAAGUCTSIACTIEPYBJFKRBEGARKTWYBHBJGVUYMGPKYMJZBACVXNTLZRLRHVXKTWKJSVNGGTGDHD");

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
    msg.setTimeStamp(0.2785258761493644);
    msg.setSource(36335U);
    msg.setSourceEntity(229U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(224U);
    msg.type = 101U;
    msg.speed = 24052U;
    const char tmp_msg_0[] = {78, -90, 72, 77, -128, 5, 114, -5, 46, 116, 100, 47, -86, 0, 87, -26, 34, 99, -67, 69, -28, -5, 77, -108, 38, -30, 51, 71, 106, 42, 10, -20, -40, -6, -123, 49, 47, 6, 77, 104, 56, -111, -61, 85, 45, 106, 115, 6, -6, -59, 6, 74, -115, 37, 40, 66, -85, 89, -67, 89, -71, 10, -107, -60, 4, 28, -59, 65, -71, 92, 112, -87, -21, -49, 123, 101, 83, 24, 65, -66, 109, 125, 32, 67, 51, -19, -115, 49, 101, 119, 21, -104, 38, 101, -31, -92, 60, -104, -84, -29, -80, 73, -35, -47, 2, 42, 120, 42, -15, 60, 77, -53, 20, 45, 6, -106, 119, -10, 90, 57, -6, -53, -91, 109, -125, 4, 34, 68, -61, -8, -92, 126, -73, 4, -13, -64, -102, -102, 111, 1, -47, -40, -45};
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
    msg.setTimeStamp(0.9146614813647228);
    msg.setSource(28618U);
    msg.setSourceEntity(17U);
    msg.setDestination(53480U);
    msg.setDestinationEntity(29U);
    msg.type = 0U;
    msg.speed = 1394U;
    const char tmp_msg_0[] = {-30, -57, -119, -75, 36, -58, -105, 78, 121, 37, 61, 102, -70, -98, -87, -12, -55, 15, -10, -77, -39, 52, -44, 43, -47, 42, 24, 72, -39, -20, -121, 12, 27, -66, 65, 5, 42, 23, 23, 22, 56, -122, -35, -38, 47, 9, 97, -87, -78, 100, -39, 43, -114, -119, 13, -40, 94, 107, -111, -59, -2, 62, -60, -86, -63, 89, -12, 20, -86, -117, -3, 67, -128, 15, 74, -2, 18, 75, -33, -37, -12, 4, -81, -125, 106, 12, -77, 97, -72, 65, 56, 42, 37, 115, -90, 6, 125, -95, -120, 87, -10, 78, 40, 102, 65, 93, -65, -102, 0, -58, 101, 125, -36, -15, 58, 5, -8, -95, -14, -73, -127, 78, 53, -67, 37, -91, 66, -97, -1, -79, 123, 7, 86, -21, -88, -89, 119, 40, -57, 62, 51, -124, -17, 14, 125, 91, 18, -34, -71, 59, 120, 123, 93, -99, -50, 119, 53, -17, 45, 83, -41, -128, 101, -20, -83, 23, 64, 38, 0, 120, -9, 110, 14, -76, 102, -11, 16, 83, 102, -93, 11, -44, 95, -108, 7, -12, 60, -103, -123, -18, 9, 14, -24, 24, 43, -52, 122, -102, 90, 25, -99, -34, -119, -84, 23, 24, 52, 91, 107, -58, 107, 14, -30, 29, -34};
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
    msg.setTimeStamp(0.07365183961788535);
    msg.setSource(46861U);
    msg.setSourceEntity(249U);
    msg.setDestination(50596U);
    msg.setDestinationEntity(182U);
    msg.type = 130U;
    msg.speed = 41346U;
    const char tmp_msg_0[] = {42, -105, -121, 8, -115, 77, -43, 124, -114, -75, -56, -75, 66, -106, -93, -22, 48, -99, -63, -108, -75, 19, 1, 126, 93, -86, 126, -105, -120, -67, -46, 89, -81, 29, 36, -17, 2, -99, 51, 31, -33, -29, 71, -83, -6, 64, -34, -41, 101, -127, 23, -116, 44, 118, -18, -107, 96, -24, -55, -10, 106, 109, -17, 103, 89, -105, 68, -4, 98, 58, -84, -85, 83, -74, -124, -34, 59, 33, -71, -16, 52, 124, 105, 24, 62, -23, -35, 20, 24, 109, 99, -70, 62, -94, 8, -115, 107, 76, 68, 82, 59, 21, 68, -69, 86, 28, -41, 9, 88, 107, -53, 109, 29, 100, -55, -56, 17, 4, 98, -101, 102, -105, 80, 120, 91, -116, -56, -86, 19, -15, -36, 73, -49, 34, 90, 116, -16, 8};
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
    msg.setTimeStamp(0.17167365511205357);
    msg.setSource(2002U);
    msg.setSourceEntity(99U);
    msg.setDestination(36552U);
    msg.setDestinationEntity(71U);
    msg.available = 3567789500U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.4931511083323825);
    msg.setSource(3435U);
    msg.setSourceEntity(1U);
    msg.setDestination(15614U);
    msg.setDestinationEntity(89U);
    msg.available = 4207170324U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.40475385516509255);
    msg.setSource(41361U);
    msg.setSourceEntity(32U);
    msg.setDestination(22516U);
    msg.setDestinationEntity(205U);
    msg.available = 3004935707U;
    msg.value = 185U;

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
    msg.setTimeStamp(0.580740787863424);
    msg.setSource(44060U);
    msg.setSourceEntity(78U);
    msg.setDestination(55609U);
    msg.setDestinationEntity(44U);
    msg.op = 209U;
    msg.snapshot.assign("IXFMUZZAIKQDNHHOJMNOUDFUOPWVMKPNKWLTERGRIAVLQLFXSCNTOANFGHBMRQQTMAKSSOJCLKQYWGHBNSIKWFWVZUYXSHGALWEPUZPDEWBITGDHPJABVPLSMCCDCUERNECQSBDQRIRFFQUAEYVDKZJZMVUGPZTBDXTXPSTGVCNVJEUZLIGHRTOUKXYEHBIYNYYIFOVPPVAQMHGKCZIBTZARMJ");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 5U;
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
    msg.setTimeStamp(0.13522861417213017);
    msg.setSource(20573U);
    msg.setSourceEntity(6U);
    msg.setDestination(16270U);
    msg.setDestinationEntity(71U);
    msg.op = 226U;
    msg.snapshot.assign("EEUSMPTBMUJBYKXIENVDTFIZXDLAMGECPEHXKTHQWNFLAANCGUCGLXADAFOTQERFAOCFHSVOKQMUAPJIFOOGBLLNBYYNMHTJIUGZPJYLHRCCXYZGHRYQYSWMSV");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 9837U;
    tmp_msg_0.name.assign("CLTBRGQLHDYXLZINMGVTGFKZVRAXJSPUMFTSMQSWDZAXRRMEJBIHXWLLTOZNSBQOWECJEMIVKYFCYSOBAQYNFXAPQPPXRGXUVNACAEXZFBOUWRGDJOOWSEHVDTJFIZGFOKKYFRLSJQUUHBKTOTZMLIQAIGNHKHMNGDZTWCERUVBYRDKNWUXCPUJEDQCYPPLYCBEYHIFJHNINVHLPKQWIEK");
    tmp_msg_0.custom.assign("VDKYEGRJBSFLIIVNCNICDJKTNPIPQQLBYFOZIQGCYBXKRKTTJQWLGOMEYEJJYCSUNEFYHANXWLHATDPFEZRERDFGJZVATMGDOQNKXRBWYUBSOVWNMVEALKVGPTMXDXWMVUFAVSMLTUCLOWMA");
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
    msg.setTimeStamp(0.13553403091925764);
    msg.setSource(45562U);
    msg.setSourceEntity(165U);
    msg.setDestination(150U);
    msg.setDestinationEntity(27U);
    msg.op = 2U;
    msg.snapshot.assign("WRBLGCAZUUCQADAPKOMHZRMDFFBKNYYSFUUCNVKPOGHCEZQTFE");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 236U;
    tmp_msg_0.plan_id.assign("LPKFJZXSMEXFLXPUPAWAVVMLVIMPGJKRQHQCIOCREIUOTZPDTMVFFNSYKOQHTCDJLUIAQWOWXGNJWNBHLSRIXLRIFDPDOOSSAIBOUUKZDFSBVNNWVHRBFSAWCPBLQMMERKEZHVYNGAUEFSTAKYIOMLVXBLTK");
    tmp_msg_0.comm_level = 40U;
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
    msg.setTimeStamp(0.6170473076613289);
    msg.setSource(29142U);
    msg.setSourceEntity(25U);
    msg.setDestination(48757U);
    msg.setDestinationEntity(125U);
    msg.op = 45U;
    msg.name.assign("QBFHMALHPGPKCMQBZTJZKJXXLCOZSIILQDHKHYYCTTJULDPNXHKBFJXMORPWXPINWTADACMCXOQTKIRYPKEBZJWVTVRFTNBJRSAKTBGOOQOJIEWRMLEITAPGNMUXSLEUEYVOAZWSFPFFDMRHLDCBNVQOGGWFAWUAGBPZRMBWKSVEFEBCDLYZHQIDUJVICYJLQKZSRSQWVVUNGWAEHRKDLJGSVZUXYM");

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
    msg.setTimeStamp(0.5727706259586582);
    msg.setSource(56398U);
    msg.setSourceEntity(155U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(163U);
    msg.op = 16U;
    msg.name.assign("PVYSCFFCMNPDHAOPSPSRBNNDYPTXVBQNSYQZSNRQOLKYUEAZPDLDKCGAERYYGTWQIUNHLXRVCMAPWMELCIZAIAKBPSDGWTOEJTKSMOAKIO");

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
    msg.setTimeStamp(0.05381972264085633);
    msg.setSource(56167U);
    msg.setSourceEntity(63U);
    msg.setDestination(35154U);
    msg.setDestinationEntity(224U);
    msg.op = 215U;
    msg.name.assign("CFZKYRBMNHLRPSYKDHBJYSBWVAUWUSHJXPZPGJHAPIIHPLAGBUWZBDMEQGSQFIVLTELOVGXVQGERFTOLLOXZNBOXMKDZLWEJADMNAGKSFHDICVYMQYYKFFPXWRUDFTSQAKVGXROYEGNBMT");

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
    msg.setTimeStamp(0.6523063666452202);
    msg.setSource(10927U);
    msg.setSourceEntity(211U);
    msg.setDestination(19965U);
    msg.setDestinationEntity(54U);
    msg.type = 203U;
    msg.htime = 0.22490498377968104;
    msg.context.assign("MEKEOZJVASGYPOVAREWDJTIGSJZUHHAFCPHLHEIDSZTYUMBKXQMCATPXYXNURKMNXGESFLZKIXPWGQQKEGJMEYJWDSIVZNMWKWFSRBHOLDQTHCQVZUNDPFXWTAFFIGIWGYJLDNJPRBIRINNGNFOXOQCYIBQWRIBXDJTNEGCEQOUCJLFRXMSRYUGDWVDTNASAFAXQCKLRUEHMKCCOUBYODOBSYLBVV");
    msg.text.assign("CJTVTSFILDTJJMCLPCMSJGGQYPUVISYVSAAEHNYXOUXQCOFUBMHVSVIRDAIRGHTWTHAYZINRHMMBBJRFCLUJLLGVOLXKBPZLOFRAQRBHKSCUIZQFPGYPEBPNOXBHIMWEYQ");

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
    msg.setTimeStamp(0.5033979260416935);
    msg.setSource(41382U);
    msg.setSourceEntity(102U);
    msg.setDestination(38000U);
    msg.setDestinationEntity(4U);
    msg.type = 80U;
    msg.htime = 0.25910365106478284;
    msg.context.assign("CJXCMEFCRQVDWYH");
    msg.text.assign("NSQRWOKJNBJGDTAXAJFDREMGCWKLMSYPWJTIBVMPGQNLVKCVVOLRVBYIXZGENHZCKNQQBFECXVERBHFYXACLKUQSIFNDHFJNLMLSMYGIJRSMVIBDOWGGULEDMZUSNTQGUGUPZFHWEBKTAYZLAQZVHEMAVXKDUIIXOODCXSDLCNZJPHRNEXMWQKJFSUGFIQZVOOPCKBBFJXKPYTAHZHHXD");

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
    msg.setTimeStamp(0.4993954264745397);
    msg.setSource(39174U);
    msg.setSourceEntity(10U);
    msg.setDestination(40811U);
    msg.setDestinationEntity(179U);
    msg.type = 197U;
    msg.htime = 0.14154496464229527;
    msg.context.assign("MZWZCYTBENDWNRXZLQSHTTYUDZFMMGYUADQHHKMVKIWJPMOKRYTFXPIJIUMFUBCBHTXDAZDROPASRVAILWYCAGHCKUYQDSJKIQGLBOJSCTBOGRPEXPGHQSCNRRNHFSXYUGZAEBDYAVKFFIOFLPLJQEQIEAGNTVSVD");
    msg.text.assign("RLEQGTXJORWNBWNUBDUDFCFKKRFLVWKCQKEYPGAINTJEEYWKZYMZOHGTTFXHXIYSTXJHPWCWQJUYUGZUWATPCNLIRJKEROPFQYXVMVRAJOERJKGLCJLUHZVKDSNPFDZNIDOEGMXLFBCH");

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
    msg.setTimeStamp(0.037152566732401415);
    msg.setSource(51075U);
    msg.setSourceEntity(195U);
    msg.setDestination(12350U);
    msg.setDestinationEntity(35U);
    msg.command = 253U;
    msg.htime = 0.9900872510254378;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 10U;
    tmp_msg_0.htime = 0.274728436242867;
    tmp_msg_0.context.assign("FGLJJMDPANTBRTJKEORANBDGKNMZUZSCCAOJRPZSSQUODTCKZQSNEUIHXEDOOEXTKBQSWXFCTXWZUTLYWXUQZQBDYADJSMOHNPHYBIKHWIIIVMCOFUDQPZVNWVSQVLYWBIFXHVJTRMFKXVQXRYRAZGTPYBRXGTHBOWEAZWFGMRNSJLOVDGXIEYJYHFCLVUGHWJAHFUPEAEAJCFIPNRCLEIWLMKUEYKHTSNLDCLRIBM");
    tmp_msg_0.text.assign("FTQVXGUJCDGMISXTXWZLNEKNNKOABBRUYUIAIMSCMJETADQFYWGJOSTCTJKBOQMLUOLXAPKMZOUYVTGYGHIJBFLHEPWGBGHQRLNGHWQRFIBPZFVSSPJZWZZLUKNXAMHYNDDCKMKDCQFFARYYEBXYEHCSDDCFWVVQNWTMOZRUXZGTLGHIJOH");
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
    msg.setTimeStamp(0.4770367766071859);
    msg.setSource(49267U);
    msg.setSourceEntity(127U);
    msg.setDestination(37730U);
    msg.setDestinationEntity(145U);
    msg.command = 0U;
    msg.htime = 0.22748987658148123;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 125U;
    tmp_msg_0.htime = 0.4730717091194496;
    tmp_msg_0.context.assign("SNYQYIFXXZOXZNHKFNVUUSMFBQBDJOFULVDGJPTFMCKAHPQJCEZCPVOMTCALYDIBUJPOIGASQFRQNTRCACJEUGAZIWYJVIEXUHNBRVTHPXLCZNGPJVMRSWXNFJLGDOMIPDLDMOALEKDVKTZKNBYOVCATUAUPWYQVAEBGSSSKNGIEFFMKHSDEHJYLTXBFTIOMHBYXXWCNOOZTWGHPMGRER");
    tmp_msg_0.text.assign("DRHOFQRZBTIROCZCTAJQSYIJKUHRYBBNAGDJUWSBKFVAGYNOWFEAQIMDCWCJRU");
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
    msg.setTimeStamp(0.9199393662917246);
    msg.setSource(52432U);
    msg.setSourceEntity(206U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(146U);
    msg.command = 47U;
    msg.htime = 0.8623660341265601;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 254U;
    tmp_msg_0.htime = 0.6178779359880159;
    tmp_msg_0.context.assign("UNJQHXDKHUVPFGSXFTTCNZEHPCMFFWFGRWNBGBDTNTPZDOBAXTTNQICEINGXJXFUAYHIRGNTVZKJMVIASLZXWPAIYQLLCCJYCBJPRLAVGPECKZHQCVIZKGOVERHHNGUKECBLRYWXQIZSNEJQOIUDMZQDDMMNUAOSAKOZEFHOKAXYGORSYHECSGQMWOTWISYZ");
    tmp_msg_0.text.assign("RXVPKNUIGDHDMENAMYSWUOQNBKRVIJKKDDSFMCVTELSAQUOVPBSUNITGROYXQDHWABXZRWWRRGSSKA");
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
    msg.setTimeStamp(0.4960653319601245);
    msg.setSource(12564U);
    msg.setSourceEntity(163U);
    msg.setDestination(93U);
    msg.setDestinationEntity(76U);
    msg.op = 236U;
    msg.file.assign("JYJVISMRDDSLUNVNJRIWJBJVBWZGXXHRXPCFVFGOKDJUOAPHTBDQDIHTAQNZYRCTSAXIILYKHFDWHSTHLVCWNMDYJQKOVM");

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
    msg.setTimeStamp(0.4336348313630449);
    msg.setSource(27756U);
    msg.setSourceEntity(193U);
    msg.setDestination(8757U);
    msg.setDestinationEntity(195U);
    msg.op = 30U;
    msg.file.assign("EHZUEFCKVMDWKABYHIMGQCEAFGGVBRAWBRVJQETJMFCYHTSOIDYCZFNHFWQXPKNMXUPOKFXPESBQGLRCHTDZJIDVHRDZZIOUXSATFBUVQQZAPTHPUNYPJHIDAQOMLBYVHBOQTDLPGZALRPUJQLSYXUEJOWUXLFWIJTKNVTUPKMLZGOWKWIMYAEYMJUNCRNLBSCXRZKSDEXNNERVISKBOIBPAVVSLSACGZDIXOQJSNWDCRYNGMY");

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
    msg.setTimeStamp(0.9484266213502979);
    msg.setSource(10785U);
    msg.setSourceEntity(54U);
    msg.setDestination(36686U);
    msg.setDestinationEntity(74U);
    msg.op = 84U;
    msg.file.assign("WZWKSGBBZSBZQUAEWEVCSJBQLUDXVJCBGAMKAFPIJAZRNKJSZMYTGCADOYWCKMQNNCEALRXHCYTDBFQHWQAYKTQZTYTOO");

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
    msg.setTimeStamp(0.8195409962628408);
    msg.setSource(61908U);
    msg.setSourceEntity(134U);
    msg.setDestination(44659U);
    msg.setDestinationEntity(110U);
    msg.op = 241U;
    msg.clock = 0.6285316979028353;
    msg.tz = 79;

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
    msg.setTimeStamp(0.9484425337116831);
    msg.setSource(38226U);
    msg.setSourceEntity(98U);
    msg.setDestination(42191U);
    msg.setDestinationEntity(192U);
    msg.op = 238U;
    msg.clock = 0.2555608273833868;
    msg.tz = -91;

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
    msg.setTimeStamp(0.1987446994784855);
    msg.setSource(25639U);
    msg.setSourceEntity(179U);
    msg.setDestination(37947U);
    msg.setDestinationEntity(142U);
    msg.op = 106U;
    msg.clock = 0.1559429813337253;
    msg.tz = 43;

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
    msg.setTimeStamp(0.06970432330090248);
    msg.setSource(58721U);
    msg.setSourceEntity(125U);
    msg.setDestination(4988U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.8516705127682032);
    msg.setSource(45268U);
    msg.setSourceEntity(24U);
    msg.setDestination(3424U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.17296523892413218);
    msg.setSource(23085U);
    msg.setSourceEntity(173U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.414113594190052);
    msg.setSource(48603U);
    msg.setSourceEntity(98U);
    msg.setDestination(20773U);
    msg.setDestinationEntity(39U);
    msg.sys_name.assign("PTLOPXXGZQHVJRMHTJOWSWLATGGOOBYCMFEIIMNHRXYCRMJUFBKGGMRMYDIZDNDGGFBJVRFEROBBXDQQJTKDJAZCDWPUPMSYCTINDCYIAUUXESVYZSNHKUETHLZHZEWBCKEAAIPLZSYLQTMYPWBHUICLDTXUIHUMVRBKCLTPVQLQNJNXEQKPYNZCEJVNFJVKRNEFVERHZIRXNALXKCDFSBATYUHSLWVWFVJGAKOWUBFAGSW");
    msg.sys_type = 39U;
    msg.owner = 6683U;
    msg.lat = 0.6266385113764475;
    msg.lon = 0.1422801429832783;
    msg.height = 0.7974528367594302;
    msg.services.assign("GBIESGMPPKSHXOMIHGPYUSZUUYNGTSDPHZTWYMLLXBYKSCAVYVWBSIOZALFCINLUOMGSVWQWCMWEJTWHSTDUDRXRQFEADFEVXZCQARRKJJOYEMKZBRNWEQOPFZQZFFDAXCAQVXHWWLGDOXDYYBUKMQJPVTJGSRTBJZMMCKTGTCJNVENJKOBIEKTPYGOIZRNNHBUPKEXXVFPLNRLQCSIFAKRVMBLHJIATHUQGYA");

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
    msg.setTimeStamp(0.05601227397978836);
    msg.setSource(54509U);
    msg.setSourceEntity(118U);
    msg.setDestination(22115U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("ZCFYNAGEASQLOUXMQBVWBRZOXENHQBFTBPFMYECDAJVDMCRPROBZFGRIGMRLIAEPLYJNUVABMZLYDRAUWPUYXPLHSJWBYVBWQGZZQZOMCXKIRSKOAGHPDIOMCJDNFDAJHXJPVFDSPXIITXORKCNQUZNQCKNVKJTROITYHVTUSLVHIGWCKXOPIGYUMEFWZLNQKFDSSHJMHFXLAKWDBQUUEJTHCIYNQETLVTFDC");
    msg.sys_type = 254U;
    msg.owner = 57997U;
    msg.lat = 0.3103381801622007;
    msg.lon = 0.4926580996799246;
    msg.height = 0.8866582031871383;
    msg.services.assign("XGPDFAHCONODUEUZUGGHBAMKVPGSFOWFSQJQMRMDAJGIRFOHCCOXJPVARKTEHI");

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
    msg.setTimeStamp(0.12006023788699294);
    msg.setSource(21799U);
    msg.setSourceEntity(178U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("KYQPOSZSHILIDLYWOQFNVISDCUZHPYBMUBAHWJLYKFELDXTPROBTAXHCJVFQVFKXLEVACBJGFXGWYRPRAFHXSMONTBQZZEOIEWSFHMVCSAVTVTCKXCYGBDGKRDLHHOBOLWGZSMMSZVGHMTICJUIIZAKNAWUJJFJSGIMTUYLSXWRCQBYRDJQAOTNOWRXTGVNMDYCUEFEICGXPJJAQ");
    msg.sys_type = 222U;
    msg.owner = 6629U;
    msg.lat = 0.7469449182865339;
    msg.lon = 0.34472567061441295;
    msg.height = 0.2910523472252128;
    msg.services.assign("PNYTDYLLVAZFMDEHWVSCEDOJRTICJWAEUAJBXEOSFVWGZWGVKBENFMJCKSVP");

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
    msg.setTimeStamp(0.8646305335380516);
    msg.setSource(60799U);
    msg.setSourceEntity(197U);
    msg.setDestination(43675U);
    msg.setDestinationEntity(242U);
    msg.service.assign("QTBXESRUSUIDQQAXKYETULSNABJAOPHZDFPKPYKISFLIGQDLDYIOBBPFXURPISWWOHVGYAJU");
    msg.service_type = 68U;

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
    msg.setTimeStamp(0.6866001093358145);
    msg.setSource(42197U);
    msg.setSourceEntity(92U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(150U);
    msg.service.assign("MNCPJOJELFLNXLWKUDAVRZBMWVLIQ");
    msg.service_type = 209U;

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
    msg.setTimeStamp(0.6305700362869651);
    msg.setSource(52550U);
    msg.setSourceEntity(89U);
    msg.setDestination(56459U);
    msg.setDestinationEntity(252U);
    msg.service.assign("HVILYDKVIBMAXGAWQMEMYGCAXOWVTUCWGSAPXZMZSVHMEFOJENJCPBMYSQTJLPLYDUXOIIODJACHUKJRHIKVVNYEFRWNXEFTBUOXZNZPTISZSKRPHVLUYWTUXLBFYWINWUKSKVZQLQCTCBGFGPABZBCSFIFYGHRTRLGYDLIQOGDOMPTJRQCGNADZODHUHMVPCRJRJQEMLEUXFJBDFYXEXSJHAORAWKQCQHPSNPTKOMDTNNEZEUD");
    msg.service_type = 78U;

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
    msg.setTimeStamp(0.9107770885053222);
    msg.setSource(45624U);
    msg.setSourceEntity(236U);
    msg.setDestination(47455U);
    msg.setDestinationEntity(233U);
    msg.value = 0.7221462821906705;

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
    msg.setTimeStamp(0.528804918546486);
    msg.setSource(35506U);
    msg.setSourceEntity(146U);
    msg.setDestination(62245U);
    msg.setDestinationEntity(145U);
    msg.value = 0.36787336580694463;

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
    msg.setTimeStamp(0.6401910872331609);
    msg.setSource(11024U);
    msg.setSourceEntity(226U);
    msg.setDestination(11716U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6728653040295364;

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
    msg.setTimeStamp(0.2497588593336887);
    msg.setSource(45049U);
    msg.setSourceEntity(61U);
    msg.setDestination(22098U);
    msg.setDestinationEntity(211U);
    msg.value = 0.6707525976577029;

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
    msg.setTimeStamp(0.41506344503865755);
    msg.setSource(26687U);
    msg.setSourceEntity(250U);
    msg.setDestination(63360U);
    msg.setDestinationEntity(118U);
    msg.value = 0.37636082711211005;

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
    msg.setTimeStamp(0.25946312171510666);
    msg.setSource(39617U);
    msg.setSourceEntity(14U);
    msg.setDestination(18617U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9420894918732958;

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
    msg.setTimeStamp(0.6885671537013344);
    msg.setSource(62211U);
    msg.setSourceEntity(80U);
    msg.setDestination(57090U);
    msg.setDestinationEntity(106U);
    msg.value = 0.03555113584438829;

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
    msg.setTimeStamp(0.6723762329233202);
    msg.setSource(29210U);
    msg.setSourceEntity(138U);
    msg.setDestination(26655U);
    msg.setDestinationEntity(114U);
    msg.value = 0.4498635649506252;

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
    msg.setTimeStamp(0.05709383775999255);
    msg.setSource(35111U);
    msg.setSourceEntity(76U);
    msg.setDestination(60905U);
    msg.setDestinationEntity(254U);
    msg.value = 0.659924100641764;

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
    msg.setTimeStamp(0.4814210238720794);
    msg.setSource(20572U);
    msg.setSourceEntity(179U);
    msg.setDestination(52094U);
    msg.setDestinationEntity(108U);
    msg.number.assign("MPTFHCWDAZBRQBUMVAOEJFPSAYUCJUUJCSOSO");
    msg.timeout = 60882U;
    msg.contents.assign("OKHZHWOIEJMXKBOFLWUMFBETQ");

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
    msg.setTimeStamp(0.9104110850379119);
    msg.setSource(7857U);
    msg.setSourceEntity(79U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(191U);
    msg.number.assign("AWNKJHNVKIYJBEUVAUNRLFSREUZYPTAXYKFWYTECSPFPWJXQTDSHLMZXHLQJSPNCCMEWISZRTXHBTRJSDFGUBQWCBPVBYOXJXQHNPQQGIVSDFJQPZSGOBCXOYIHDYTOPEQMOESWINMQYWFODGZXOLMRCIUWPJOPELXHDUKBTVZWXAHIALVIRFBFJFAVHYLRCVVUMBMKITSZRTNEDNMLGGZNLKCELZ");
    msg.timeout = 35892U;
    msg.contents.assign("KFECPZEJNZZVBQMHDBRHGSOYSAJGLYVSXKCNDCVBKPNOQMFTQLKXDEFBGANHMSRWVSGYKCNALPTRIJKHGTWIOUYOSIASTNOXKKXXMTGOFXJAZHHUVLVCREQEYNFWVDPUFEFNZLBBPIRQFOHRJPSWKEWWZZUURBFTTOEIHCLJZDVDAMGCIVVJDULBMECYSACWAMJUPFQYRDXAYDRUO");

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
    msg.setTimeStamp(0.5379289920675799);
    msg.setSource(2863U);
    msg.setSourceEntity(44U);
    msg.setDestination(5991U);
    msg.setDestinationEntity(51U);
    msg.number.assign("KOXHAITELPRCQEIRUVAEIXWQZTJDBFMOCDRGFHLSKIATVMQHWSYWNSKZRQVDJURNTQEFUAIPJODCZHUKVZJXOCCZUOJQJPDMEDTVYJYWPNMRXLKGFLJSLTIFTKUEXAUUNXRLFBDYWVWLKTYGCPGPWMPMBGMIRVPCZLYOAWHTGMSXOHXAKNZEGGDJGRDOHBKLLISDRZQJHVTKZGES");
    msg.timeout = 23550U;
    msg.contents.assign("AYBLIDZJSPMSQTYVAJAPIXRMMDTUSBPIWPGZKPCGCEQUEUHSCCFZELOQNMPVLXENCOVNQBNBMTFYTCWMKECIWXUJSBQIOCHVPKUKOYVWKNBFMKJHGNQYSRWALGBDJVJFLCEAAHJNTUFXBDFSGBLXOIQGHGRUZMTWDHTEOWFRSZHEPRVDEAYGYQNLIWURYXOGIWLTMCXPHDDDYVOPFNQRFBHJIYAJMWZGTSKXIKAKRS");

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
    msg.setTimeStamp(0.8686354298715891);
    msg.setSource(12548U);
    msg.setSourceEntity(45U);
    msg.setDestination(21242U);
    msg.setDestinationEntity(235U);
    msg.seq = 4035803920U;
    msg.destination.assign("QNTVGQWYAWHHNFAMKSPEXICXOCWDCIEPDLWJLBTKRNMKOJZFYOCNQGPSHWZXMTEWNVLVUUKNROBBSFONMKGPCBVRKLRFAIJHXCPYYJGYUSHVACHWQIAOEAAGBTDOBMFRXGLVBIXFVGBUDGJDTXHXFFTILIYDBEMGIQZRTWIRLTAPUHEEDDDBQHLUAKPVOSMEMZXKRXSJZJLCYJTOY");
    msg.timeout = 3020U;
    const char tmp_msg_0[] = {103, 88, -41, -64, -3, -68, 73, 117, 25, -2, 63, 11, 74, -72, -29, -12, 51, -34, 84, -71, 92, 55, 47, -69, -106, 109, 43, 39, -103, 11, -88, -82, 30, 74, -124, -84, 106, -98, -126, 22, 19, -7, -32, 24, 88, -53, 105, 65, -79, -1, 71, -104, -37, -97, -99, 115, 119, 80, -7, 4, -51, 124, -115, 36, 83, -73, -11, 44, 13, 14, -47, 109, -113, 17, -112, 75, 101, -84, -109, 72, 98, -79, -53, 126, 61, 56, -54, -25, 121, 29, 80, -5, 98, -97, -3, 37, 42, 117, 37, 55, 115, -32, -41, 100, -98, -124, 84, -26, -34, -93, -28, 126, -120, 7, 0, -59, -126, -37, -98, -79, 95, 22, -105, 110, -80, -91, -117, -19, 48, 124, -120, 72, 4, -4, -15, -21, -34, -78, 99, 111, -11, 27, -40, 50, 84, 28, -81, 75, 16, 55, -6, 4, -72, -78, 32, 95, 53, 38, -112, -18, 100, -27, -127, 119, 103, -71, -107, 100, 88, 121, -114, -115, -104, 79, 63, -10, -46, 34, -13, 91, -80, -33, -82, -75, -49, 114, -25, -106, -106, 114, 82, -89, -29, 11, -61, 59, -40, 36, 25, -20, -23, -96, 107, -98, -55, 119, -43, 12, 76, -3, 25, 46, 27, -47, -127, 99, -127, 40, -103, -34, 62, 47, 117, -29, -14, 96, -25, 64, -27, 117, 115};
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
    msg.setTimeStamp(0.9687622172326052);
    msg.setSource(55004U);
    msg.setSourceEntity(36U);
    msg.setDestination(40312U);
    msg.setDestinationEntity(96U);
    msg.seq = 3706342416U;
    msg.destination.assign("FZBQABLSHPZYAAWFOKXIOFVYLJVICARWNVZCQJPKXCVMEHACHHARUDJBSPQBUMTTGFZIFEFGOENSKFXODXCVECQRZIDDCMAAYXFYIMKUCPPPNNDQSBOBEWLEYIRPKBOVWXLKLSGYWJUMDRGYDVTGDJNJNSLHTXETMOZLDBVTKMXSSGUG");
    msg.timeout = 7693U;
    const char tmp_msg_0[] = {-13, 79, 7, -32, -5, -98, 96, 96, 75, -96, 108, 102, 35, -66, 65, 23, 19, -26, -68, -94, 111, -1, 10, -42, 123, -33};
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
    msg.setTimeStamp(0.5377486981109533);
    msg.setSource(39836U);
    msg.setSourceEntity(121U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(3U);
    msg.seq = 2615708329U;
    msg.destination.assign("DYPJPPYWCTCZGPMKUJIHVIQSTPVJKEUVZZFWWRNFKWLVYCOOCVFXUHTNSGLPLGXOQYELAMIXNAZSOIVCCULEONZIRLJTXKUCAHQJNIEIODRKQAUHIXNUAEDUWCUDRJYBAOTITXWKTOZQDBWANKTWSWVCXBASRUMPRNGXNFWZMEBMZKQKQLYFGEGHKGEGLJBHDDGSVRVFFYMHBCTSDBSIPLHFRSEJDMGMQQZEXPYR");
    msg.timeout = 61888U;
    const char tmp_msg_0[] = {-10, 125, -128, -74, -64, 23, 74, -34, 99, 37, -99, 101, -37, -48, -117, 103, -56, 67, 36, 47};
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
    msg.setTimeStamp(0.4400416426615984);
    msg.setSource(38177U);
    msg.setSourceEntity(72U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(66U);
    msg.source.assign("PAAUWBVOLGVSJMUUZXKADROXKDBYEILVBGURRBUINOFONQUZAKDUTZVHYHNLEJMRKCFYLDZPNGVDQPZSMCZUJWGFEEKJCTLBSIWQEPYMWJBGAQIYRFJNCXLXHFVQRXTCOMDSSFBIXUFYTLOXENBTOCEWR");
    const char tmp_msg_0[] = {103, 4, 60, -12, -44, -37, -72, -28, -83, -83};
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
    msg.setTimeStamp(0.7177529499640686);
    msg.setSource(21051U);
    msg.setSourceEntity(170U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(241U);
    msg.source.assign("IGWQGZOJCXSFNNEFMXHBXUWBTRMQSDGWALVLFCPBVNIEXXJCMGTZDFBQTBDVTNFREKIKOUFNKSJAKOUYKLMJJMTJGLDWVJHRIVJMSIQNFKDIICUKVQASVUDTNYMZJEHWFLYOWTYPWRCDWDBNVLYRHZCRUPSYTDEUSKRARUYIVJICCQMEGKRUZZXRUBNGPPZVAHXCZHOPEZAFHAQG");
    const char tmp_msg_0[] = {-114, 37, 34, -31, -21, -10, 90, -122, 104, 109, 105, 63, -20, -93, 67, 16, 48, 29, 22, -99, 80, 95, -33, 2, 126, -26, 82, -125, -101, 108, 93, 123, 106, -14, -26, 25, 119, -31, -68, -108, 23, 50, 71, 28, -1, -43, -21, -28, 92, 50, -34, -28, -82, -87, -95, 33, 79, 80, -43, 111, 86, 101, 28, 110, -25, -123, -30, -18, -120, -64};
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
    msg.setTimeStamp(0.43309251006828886);
    msg.setSource(25419U);
    msg.setSourceEntity(152U);
    msg.setDestination(55681U);
    msg.setDestinationEntity(51U);
    msg.source.assign("IMELOJLENVRLOFFKLTJGXCXABMBZAZIMPGYUTISFCOENJUBOUTLWXKPRMXPEYRUZWDXOLWDVEBMSWGIPTYDVNVGKIQRAKVPBEEXMUYSDSWCEQNHJCQHFPGQUDLABYRQCFQHJWQPSVMSHTJXGCJZYBANAKDZWRGAKRYHZNYCHKIFTXWZFZOCWIBSQJHSTKZMIRVGCKOUEVOILHOHMPAQYTNBVJ");
    const char tmp_msg_0[] = {91, 123, 63, 58, 36, 82, -109, -57, -115, -37, 109, 34, -27, -117, 49, -33};
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
    msg.setTimeStamp(0.6379236169773617);
    msg.setSource(10634U);
    msg.setSourceEntity(141U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(18U);
    msg.seq = 2645423658U;
    msg.state = 237U;
    msg.error.assign("KSJZQOQKNTOEFPHIYYVRXFDIKIGHMBABCCZURTKCYU");

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
    msg.setTimeStamp(0.14300962817540264);
    msg.setSource(58616U);
    msg.setSourceEntity(147U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(129U);
    msg.seq = 3287397546U;
    msg.state = 144U;
    msg.error.assign("CXXULMGCUWZDAXRONDJCMJTBRNIQISNVRMOPKEATIHCNFRSTYIMYVFOYAGQWSHJZBHZHHBBMNDKFLNKQZTARTOZGYOFBANRPVJQLODNIVWUEGKEYQGKSBPYYBZPYMMVBLTNLKDYABHDMIOFQSHWJJTZWXAFURMIHFLAGCKWZLXFXIURDJKDBPWWXTHUVEPFPQETGGACJEOCGGLVTNPYRVSLCXUPVVZWIXPSIEKOOLUXWE");

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
    msg.setTimeStamp(0.4278948124998502);
    msg.setSource(41598U);
    msg.setSourceEntity(252U);
    msg.setDestination(57161U);
    msg.setDestinationEntity(174U);
    msg.seq = 135727960U;
    msg.state = 194U;
    msg.error.assign("WFTMIWMYCOMTCLSFVIAKYUKZDWDPGDQJSEMQFHBXHZQZGGAFAWFSMOCQNVMVOTRRZJKBGWLUYXEOFOAZOVIPIILTVYJFPUVUHVHLSJIFKOJCYQQHDWAKXECHBYUXRMRADIYLBNBAGXRBNEQEBRGBRKWIEUAHWPYLYNNPYACDOXFGWNTKT");

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
    msg.setTimeStamp(0.3636407065641314);
    msg.setSource(64510U);
    msg.setSourceEntity(22U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("UTPRPSWMDDJVWOPVUDLJUWODYANBSTATZYQNBKICIXLVILEGEWFPBSHOOFAFDOXNOCSLBEMYVQICFIJHHWUUQDNTWGKVLPRIECGBQOAMXGJGZARPNWUKKVDXFDZGAILDYMHCNPIKQRQLSQNWKJYMOEBKQFCBCJTFHEACDIHFULZGJZZSHEJONUOYPKNHEXXCFPAPBUHSIZGWMLYTKWVZZMBRJMRTRLXSGSXYSTEZVJQTNYA");
    msg.text.assign("XUMQHOYBEYBUTHCTLZOJFENXOZZHLPNDOJSEALVZPEBWMXKDRUMUCSYQXCXJTNIJKOSBKRUVJQPCVYINVVOOZUFLVJ");

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
    msg.setTimeStamp(0.8914004369493264);
    msg.setSource(18290U);
    msg.setSourceEntity(36U);
    msg.setDestination(944U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("EQCFQSZQFPHKBXDGGNWFKBPPUYDMNHECVZULNZKTVOZYETPZNOSMHDSYJRUMBDFTLCIIYGOITKLEUMMWIDVIPOMMNKYJNNQTSHSWZQYWH");
    msg.text.assign("ZZWZPBKFBHFQVKHHGQONXSWBRPZDJKQYLEKXQALRTCOXMMRUXYCBPCTSDIUELIJKVHEHGDVSBMYWQDZFNAAPMOPTKWPKMKXALOUPJTJLHRUVJHEORIBWSWTCZNNCHLAQFOIDQUOIQCMYNNUXGVBJNMCGEVYGCEPNEBUDDNFAXLJEHEIAW");

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
    msg.setTimeStamp(0.972908090387352);
    msg.setSource(13249U);
    msg.setSourceEntity(77U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("XCCMCFSZFYNPCPWRTNTBBJMNWUIGACCTJBUZOFGIPR");
    msg.text.assign("BAEFEQRPCZHFMNEETGUTSIQRFXVQHXKYJ");

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
    msg.setTimeStamp(0.785842052429618);
    msg.setSource(19789U);
    msg.setSourceEntity(133U);
    msg.setDestination(63044U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("UXBHRTWMTQQKIZIWXEHMPSQCFTUUWUZKUBRADUPOXZBNYMHTJNORWPBTZYZYVFCKHCGGGNELIDJEMAVXTIAAJJFQMBLGWKGXRYRSCDZHAEOVJSHXOYMUFRNINBMZLSSMDCFHVEVPYNQLSGKQBZSNDALTLPDOYVELUHCJCIFZZXPOF");
    msg.htime = 0.5000727266022669;
    msg.lat = 0.5560052219923235;
    msg.lon = 0.03952126926274224;
    const char tmp_msg_0[] = {-101, 47, 66, 36, -87, -76, -23, 58, 61, -62, 112, 60, 123, 18, 31, 19, 63, 101, -41, -123, -7, 59, 106, -95, -125, 123, 53, -58, -15, 18, -33, -64, 107, 33, -65, 99, -117, 41, 20, -73, -86, 23, 19, 90};
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
    msg.setTimeStamp(0.06761944656213092);
    msg.setSource(16764U);
    msg.setSourceEntity(190U);
    msg.setDestination(29946U);
    msg.setDestinationEntity(155U);
    msg.origin.assign("ZJZOPUFPUWHINTFRKBXOLZHZKNJIEHYXUDBQYVQOPNSXKVORGGMALRBFQBGGUNFWHYCTQMTSZGGTYNAWHOPQFUXSEWBACMRJECVPAMUVEXWJSCLJLBPXNOWEXWLVKLOUPCAQHVFBETRMHCWNZSIJEORXBFMPTKIYAOHHPSVKSYEIPDJMWIRSKEXBNXRMADFFWYKFZTJUDDGTNQVVLYYCKLINAIZVGDRQCKSGDURZDZHUJJTSALLQDIC");
    msg.htime = 0.3099313083622096;
    msg.lat = 0.49821681400294693;
    msg.lon = 0.2352808272720055;
    const char tmp_msg_0[] = {-41, -39, -36, 119, -11, 96, 111, 85, 101, -77, 38, -108, 122, 27, -80, 77, 11, -11, -81, -113, 10, 115, 13, -16, -122, 101, -77, -33, 101, -85, -65, 61, -110, -104, -96, -74, -102, -62, -42, 73, 92, 27, 31, 15, 28, 44, -12, -123, 57, -49, -2, 100, 3, -1, -60, 105, 94, -78, 64, -55, -92, 78, -109, 53, -52, -42, -78, 91, -81, 84, 68, 8, 15, -25, -82, 17, -112, 68, 24, 109, -70, 53, -83, 32, -91, 100, -95, -74, -58, 91, 56, -28, 36, -100, -69, 32, -12, 6, -71, 35, 41, 58, -87, -30, -67, -92, -94, 70, -16, -26, 67, -93, 104, 93, 84, -90, -118, -9, 62, -118, -92, 121, 26, 54, 68, 112, -35, 105, 37, -79, -38, -57, -121, -51, -78, 42, 119, 45, 98, -14, 35, 34, -116, 75, 75, 107, 119, 50, -75, -16, -51, 83, 114, -68, 91, -47, -33, -119, -67, 120, 72, -48, -32, 12, 82, -105, -60, -62, -102, 67, 112, -39, -79, -127, 69, -60, -55, 98, 119, -75, 20, 5, -128, -73, -86, 14, -23, -13, 65, -54, 33, -19, -8};
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
    msg.setTimeStamp(0.5119156078509686);
    msg.setSource(6657U);
    msg.setSourceEntity(213U);
    msg.setDestination(10787U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("XYVEHMRHHUMVJXWRUPVNKPDGVHVFLYYQAFKCIRCKWPGLJFTGLFOQNAUKLOILSNYOGBAK");
    msg.htime = 0.19554124259112426;
    msg.lat = 0.31839358687931385;
    msg.lon = 0.8942691753494237;
    const char tmp_msg_0[] = {-23, 69, 74, -62, -30, 73, 21, -121, 55, -18, 33, 68, -109, 9, -80, -43, -118, 56, -105, -11, 72, -5, -108, 110, 6, 76, 119, 70, -117, 35, -104, 84, -14, 2, 102, 80, 119, -19, -79, -54, -89, -62, 94, -95, 53, 69, -62, -84, 115, 7, -60, -23, -120, 111, 21, -18, 43, -93, 35, -80, 119, 0, 40, -15, -119, 17, 31, 6, 45, 19, -33, -32, -62, -121, -60, 58, -4, 40, 41, 88, -41, 118, 77, 63, -39, -24, 95, -99, 70, 30, 126, 57, -60, 30, -54, -105, -44, 87, -98, -91, -58, -88, 66, 16, 56, -21, -50, -41, 22, 66, 86, -43, -43, -48, -65, 62, 124, -7, 1, -91, -2, 5, -67, 72};
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
    msg.setTimeStamp(0.7282911291562368);
    msg.setSource(43301U);
    msg.setSourceEntity(13U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(254U);
    msg.req_id = 18966U;
    msg.ttl = 17346U;
    msg.destination.assign("IPXCITEVQESWEDBXPZNIGQGXJSXWAZULCEXOPYLQNPDRBFNKZVM");
    const char tmp_msg_0[] = {-18, -97, -81, -57, 54, -8, 105, -22, 84, -104, -108, 64, -36, -124, 92, -20, 25, 107, 6, 2, -111, -75, 42, -84, -105, -108, 24, 95, 75, -53, 65, 27, 119, -26, -48, 42, 39, 27, 74, 89, 117, -122, -15, 99, 94, -110, 13, 80, -54, 72, 58, -30, -15, 125, -100, 84, 111, 119, 125, 91, -93, -82, -5, -31, -20, -82, 34, 103, -81, -32, 49, 4, 40, 36, -14, 23, 117, -77, -99, -15, -1, 29, 13, 63, -59, 54, -18, -60, -42, -112, -75, 17, -103, -88, -10, 14, 67, -102, 63, -74, -83, 93, -63, -67, -93, 63, 96, -66, -14, -51, 54, -120, 83, -33, -53, 118, 78, 71, 71, 42, 5, -101, -65, 98, -90, 38, -81, 122, -108, 37};
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
    msg.setTimeStamp(0.7235435341328544);
    msg.setSource(64585U);
    msg.setSourceEntity(7U);
    msg.setDestination(64198U);
    msg.setDestinationEntity(98U);
    msg.req_id = 17149U;
    msg.ttl = 49179U;
    msg.destination.assign("RBOJSRYXIGCWHYZUGNDNXJOQPWZKRCQUKQLONPITDQMKEESFMKHYJIVRQZHSBWWFMSISXRGHQAJCUUENZLSQCOCDMDOSWVVPXBZANNGERWKYEAAHJDLXPYBZSPJNLZYSDXKVZVWBAMTVVCDFRAACAYMLIVQDRGBTBHCATXEWUCMLTJIMUJ");
    const char tmp_msg_0[] = {6, -54, 74, -14, -107, 117, 57, -101, -38, 94, 0, 99, 84, -62, 58, 44, -102, 76, 57, 97, -41, -64, 6, 71, 69, 12, -13, 78, 95, -85, 114, 78, 29, 33, -89, 13, 73, 52, 80, 15, 32, -18, -4, -128, -76, 84, -57, 24, 40, -32, -87, 118, -58, 91, 115, -33, -23, 1, -53, -106, -12, 46, 118, -26, 115, 25, -45, 37, -102, 93, -103, 15, 126, -68, -56, 126, 70, -117, -98, -41, 98, 49, -14, -115, -117, 54, 97, 23, 126, 3, -59, -51, 20, -116, -128, -100, -35, -23, 69, 118, -98, -44, -47, -127, 14, 22, -63, 111, -23, -33, 68, -29, -63, -111, 49, 65, -102, -50, 57, 125, 109, -48, 45, -101, 99, 124, -121, 29, -92, 0, 114, 61, 58, -127, 110, 70, -88, -72, -6, 76, 105, 69, 70, 113, 83, -31, -18, -53, 69, -107, 104, -91, 41, 0, -73, 9, 40, -52, -43, -51, 120, 74, -50, 115, 39, 105, 77, -66, -2, -77, -69, -43, -33, -104, 73, -114, -34, 94, 41, -25, 25, 31, -103, -85, 108, -50, 47, -106, -112, 85, -64, 90, -27, 81, -98, -38, -107, -33, 97, -52, -97};
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
    msg.setTimeStamp(0.12473173245713043);
    msg.setSource(24985U);
    msg.setSourceEntity(122U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(129U);
    msg.req_id = 51020U;
    msg.ttl = 61681U;
    msg.destination.assign("WPOJEAHGWAFJXRQSGQHRUNDAHCQSCUGSKYEBQBYWQGHICSKPYRZVGXCINELLWAZIDWDVTMLURHBAMSNFKXJBIAQFXCRPBKSOZFTHEFNZEDBYYRMXOOIDMBUZZFSFTDDNTPBYMIYDOETUSNQHOBLNAAWVLVNSKXGGCTAIVOOSJFUMLMUMZXRJYTHQECFRKZYXWEJUIRJUZVXOCLZJPBFPJVVWGILYDPIUWOCDMKKHEALQCEHVPJWGQM");
    const char tmp_msg_0[] = {-98, 20, -113, 96, -60, 72, -125, -67, 69, -35, -126, 25, -36, -11, -33, -124, 17, 48, -61, -84, -97, -44, 30, -55, -116, -28, 110, 104, 126, 85, -17, 16, 7, -51, -38, 67, -19, -60, 8, 61, 98, -4, 9, -31, -121, 47, 44, 100, 40, -121, -60, 84, 57, 51, 50, 101, -6, 6, 54, 57, -56, 48, -115, 34, -42, 125, -77, 4, -74, -86, 107, -82, 12, 120, 124, 1, 14, -81, 44, -8, -102, 25, -69, -113, 29, 13, -75, -65, 105, 119, 123, -51, 123, 6, -8, -77, -37, -89, 0, 49, 0, 11, -13, 7, -126, 110, -60, -97, -47, -64, -83, 96, 31, 80, -118, 49, 30, -101, 107, 22, -69, -4, -110, 48, 56, -51, 22, 106, 23, -97, -97, 12, -44, 118, -101, 93, 34, -86, -8, -42, 51, -81, -109, -88, 66, 58, 9, 89, 26, -83, 106, -94, -10, -10, 16, -14, -60, 52, 68, -89, 118, 106, 28, 108, -38, -114, -54, -16, 4, 126, 101, 110, 40, -16, -127, -37, 101, 61, 12, -77, -12, -76, -31, 29, 48, 20, -2, -17, -52, -21, 11, 125, -19, 30, 10, -11, -126, -78, -107, 67, -43, 117, 116, 11, 31, 33, -61, -57, 44, 115, 116, -107, -29, -2, 111, -40, 123, -8, -110, -114, -70, -41, -13, 7, -82, -80, 94};
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
    msg.setTimeStamp(0.7843560558439162);
    msg.setSource(30055U);
    msg.setSourceEntity(133U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(47U);
    msg.req_id = 39026U;
    msg.status = 250U;
    msg.text.assign("XDBIPUGHGMAGCDXJECAJTXLLKKKPNOUZZKHWRBBNGBXONHDBBAMMLXEHYVDQBUML");

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
    msg.setTimeStamp(0.1252594072220934);
    msg.setSource(47680U);
    msg.setSourceEntity(194U);
    msg.setDestination(183U);
    msg.setDestinationEntity(111U);
    msg.req_id = 50967U;
    msg.status = 49U;
    msg.text.assign("AUOYUQHIWHTKYDMYCKSGRCSRPEQVBNYLSJZEUNXUFORJEKSKHCTGCGIBRDLLNKAAAFUQEJTPKDSAHUBOMJWAZSOHKPVYQMBSTQTUBZJZAEEVHMGONZAOXVDMNWBXCHYSCGRPVYCPJXNWCIDBWWPXBFEUMIIDYWWLGCXTIXOOETGIJDGCZFYFKULXVMNINQFMYBTIVLNPAWZSDRWITADFDLSMZLRMJXQKQERQ");

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
    msg.setTimeStamp(0.635184222514413);
    msg.setSource(39979U);
    msg.setSourceEntity(110U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(157U);
    msg.req_id = 36016U;
    msg.status = 127U;
    msg.text.assign("XMIBRWRNPRFICIKQR");

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
    msg.setTimeStamp(0.345242613909269);
    msg.setSource(65525U);
    msg.setSourceEntity(220U);
    msg.setDestination(16748U);
    msg.setDestinationEntity(224U);
    msg.id = 242U;
    msg.range = 0.5305974709047955;

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
    msg.setTimeStamp(0.22762605499738042);
    msg.setSource(18195U);
    msg.setSourceEntity(76U);
    msg.setDestination(35302U);
    msg.setDestinationEntity(18U);
    msg.id = 135U;
    msg.range = 0.8600955102428495;

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
    msg.setTimeStamp(0.35090529139393245);
    msg.setSource(43994U);
    msg.setSourceEntity(37U);
    msg.setDestination(31541U);
    msg.setDestinationEntity(1U);
    msg.id = 230U;
    msg.range = 0.16756013380301704;

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
    msg.setTimeStamp(0.07668936145152239);
    msg.setSource(17797U);
    msg.setSourceEntity(141U);
    msg.setDestination(51129U);
    msg.setDestinationEntity(187U);
    msg.tx = 150U;
    msg.channel = 194U;
    msg.timer = 49603U;

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
    msg.setTimeStamp(0.032446474256732416);
    msg.setSource(13025U);
    msg.setSourceEntity(16U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(223U);
    msg.tx = 77U;
    msg.channel = 7U;
    msg.timer = 30375U;

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
    msg.setTimeStamp(0.05899437423700726);
    msg.setSource(26683U);
    msg.setSourceEntity(69U);
    msg.setDestination(64013U);
    msg.setDestinationEntity(117U);
    msg.tx = 254U;
    msg.channel = 108U;
    msg.timer = 63815U;

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
    msg.setTimeStamp(0.35843042655080815);
    msg.setSource(55U);
    msg.setSourceEntity(65U);
    msg.setDestination(53531U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("PPZGKLGOHEYVQMYPYVHRFSWPFXDGUJQKIEOYDTUUAMDRJJMNHRAHYATMLEIQMCNNOZXDJSACPTDVCKOSFRITBZWKZAWIOWUXBQGZOFHIBNKXYUQMDBTYBXJVRNLUXFRNLDPSFWYVUOOULTDWRRHXWNDBCEZ");
    msg.lat = 0.5791938424117864;
    msg.lon = 0.14436383368573957;
    msg.depth = 0.6269916687263745;
    msg.query_channel = 103U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 4U;

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
    msg.setTimeStamp(0.6231562383877011);
    msg.setSource(52258U);
    msg.setSourceEntity(122U);
    msg.setDestination(55173U);
    msg.setDestinationEntity(154U);
    msg.beacon.assign("LCSNFVSCLEVEBAIVLCWCPRNMVIHJEXNXUYDQPGUVOLSOFNTPYLTQESVAJOLDTDBZFZBAPO");
    msg.lat = 0.29719924565059186;
    msg.lon = 0.15034726584482938;
    msg.depth = 0.9083235361416527;
    msg.query_channel = 26U;
    msg.reply_channel = 198U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.7543055021104232);
    msg.setSource(58765U);
    msg.setSourceEntity(53U);
    msg.setDestination(48947U);
    msg.setDestinationEntity(188U);
    msg.beacon.assign("NHHJNWEZMBSFICAPQVWDOGTKPFVTLWALNWIMPUARFNCEYYUWKNGFSRLGXUVNJIYHCCXFCEYDTKBQJTUOSCSXTPVEVJDHFSJHWTXILXQLLSIGZORQHHPKMGHZAFKUEAOLZZQNBGDQCFMXMCQXSACBLUYRBWLFVSPZGTOYTPLPDEZOJMRKAKBJHQVEEIKBDPWOWKZMKMRYW");
    msg.lat = 0.46816883598253156;
    msg.lon = 0.7707828526355797;
    msg.depth = 0.26222344675983156;
    msg.query_channel = 231U;
    msg.reply_channel = 24U;
    msg.transponder_delay = 216U;

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
    msg.setTimeStamp(0.742213468675358);
    msg.setSource(21397U);
    msg.setSourceEntity(150U);
    msg.setDestination(8195U);
    msg.setDestinationEntity(20U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.5686092489587404);
    msg.setSource(11199U);
    msg.setSourceEntity(199U);
    msg.setDestination(38243U);
    msg.setDestinationEntity(6U);
    msg.op = 175U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HTYATTKGFWZAXPAJFIVB");
    tmp_msg_0.lat = 0.029030804203188487;
    tmp_msg_0.lon = 0.2520471013730434;
    tmp_msg_0.depth = 0.80860743065214;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 23U;
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
    msg.setTimeStamp(0.8019697730598632);
    msg.setSource(15130U);
    msg.setSourceEntity(100U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(128U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.12172359065843574);
    msg.setSource(35425U);
    msg.setSourceEntity(55U);
    msg.setDestination(39087U);
    msg.setDestinationEntity(44U);
    msg.address = 141U;

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
    msg.setTimeStamp(0.6914462340971186);
    msg.setSource(16476U);
    msg.setSourceEntity(85U);
    msg.setDestination(38975U);
    msg.setDestinationEntity(122U);
    msg.address = 176U;

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
    msg.setTimeStamp(0.10994571897241778);
    msg.setSource(51168U);
    msg.setSourceEntity(188U);
    msg.setDestination(32246U);
    msg.setDestinationEntity(226U);
    msg.address = 73U;

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
    msg.setTimeStamp(0.8694365433729604);
    msg.setSource(63106U);
    msg.setSourceEntity(133U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(51U);
    msg.address = 75U;
    msg.status = 118U;
    msg.range = 0.983916682886993;

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
    msg.setTimeStamp(0.6007225665117326);
    msg.setSource(41049U);
    msg.setSourceEntity(211U);
    msg.setDestination(43965U);
    msg.setDestinationEntity(21U);
    msg.address = 171U;
    msg.status = 50U;
    msg.range = 0.7143899602262098;

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
    msg.setTimeStamp(0.048803854441169414);
    msg.setSource(52848U);
    msg.setSourceEntity(96U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(116U);
    msg.address = 206U;
    msg.status = 118U;
    msg.range = 0.5196617844572221;

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
    msg.setTimeStamp(0.32923451745687593);
    msg.setSource(41982U);
    msg.setSourceEntity(171U);
    msg.setDestination(29614U);
    msg.setDestinationEntity(191U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.op = 47U;
    tmp_msg_0.request_id = 7496U;
    tmp_msg_0.plan_id.assign("ZZANYGTLBMEGQNSQUDMDHNYQEBLWLQRVQFYABMODJIOCROXBYWAXJVJEAYZPOBUARSGKPZXGAQTYKFKFIDSWCPMSHIUHDWEETFOJIZUCKBEXLMLIRGAZHGZBHOTPLLTFHWNOJAXCPBSQPSNWOKXFOVRVMPICLEEKRFTVZHRCGVJZNVGXRDIURYJCBFVKKQNZPCLVBCSINMOPHJDMWSEPULFYCEHNQIGJWMTXTUG");
    IMC::FollowRefState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 39302U;
    tmp_tmp_msg_0_0.control_ent = 210U;
    IMC::Reference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.flags = 176U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.3443210937064676;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 113U;
    tmp_tmp_tmp_msg_0_0_0.speed.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.value = 0.41301234929446384;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.z_units = 200U;
    tmp_tmp_tmp_msg_0_0_0.z.set(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.lat = 0.08972809764913314;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3224060049439059;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9319161013849665;
    tmp_tmp_msg_0_0.reference.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.state = 163U;
    tmp_tmp_msg_0_0.proximity = 228U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FNZMHHCPKGBHSGAKZDTAJVOBGSCNKMCGQQDFJZNNIPWJHPYWTWAFCHSAUUUIRMDMHTLIXSMGCIWLSCLFFXYGATZUSFJVRDJCTNBEI");
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
    msg.setTimeStamp(0.8358134838022532);
    msg.setSource(8579U);
    msg.setSourceEntity(107U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(130U);
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 168U;
    tmp_msg_0.snapshot.assign("WFZHQSWNIXEDJHABEIBSOGRVNJMIBEHFSBLKTTRRKCGRWUQQGQEELHZNNLVDAXRCKGABVVMGTUITUPUKCLKMPICZJPMAJVXXWFNBZJLUDTLLWPTQNZCGOCAEAPQDRQEFLFGOGIFYWJGDKKXMHIXXCHLPWLNEYOOPBRDRUTBIYNAHNEFPTJYXKOUJDWVRYNFZKWSXOSCKPJASDWUASOHRUYZVBQDIOZPCIGMXCQHODYFZSE");
    IMC::UamRxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 45287U;
    tmp_tmp_msg_0_0.sys.assign("GGTRKKCQQABMDKLJQEWKSFWCCUBEEBZXTVBJKCAOPFWADOIVGQHMJPNWDZJMFWZHPMPNUTSWUJNMQEOAQLVCYTFSE");
    tmp_tmp_msg_0_0.value = 0.38205664704680886;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7342541424741877);
    msg.setSource(35117U);
    msg.setSourceEntity(172U);
    msg.setDestination(64956U);
    msg.setDestinationEntity(9U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("CTAMKQBUKDMOXMLFZEJYAXUCDYBAFQGAUHUCTVZYQBFBSDJWVPXOXBBSCCRJZSQNILJIMQGHWLTAPHPGJHJCZ");
    tmp_tmp_msg_0_0.lat = 0.17366596467296092;
    tmp_tmp_msg_0_0.lon = 0.32709138251891967;
    tmp_tmp_msg_0_0.depth = 0.5673667503258923;
    tmp_tmp_msg_0_0.query_channel = 52U;
    tmp_tmp_msg_0_0.reply_channel = 154U;
    tmp_tmp_msg_0_0.transponder_delay = 142U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.37533691231582;
    tmp_msg_0.y = 0.16481383882384204;
    tmp_msg_0.var_x = 0.5318766497910641;
    tmp_msg_0.var_y = 0.37346728959089925;
    tmp_msg_0.distance = 0.23622955258122957;
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
    msg.setTimeStamp(0.2423933524449291);
    msg.setSource(31101U);
    msg.setSourceEntity(2U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(31U);
    msg.enable = 119U;

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
    msg.setTimeStamp(0.22339839642503245);
    msg.setSource(24617U);
    msg.setSourceEntity(175U);
    msg.setDestination(56333U);
    msg.setDestinationEntity(76U);
    msg.enable = 147U;

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
    msg.setTimeStamp(0.7376907087385495);
    msg.setSource(29905U);
    msg.setSourceEntity(70U);
    msg.setDestination(61395U);
    msg.setDestinationEntity(250U);
    msg.enable = 1U;

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
    msg.setTimeStamp(0.9102071022338426);
    msg.setSource(4707U);
    msg.setSourceEntity(158U);
    msg.setDestination(41233U);
    msg.setDestinationEntity(54U);
    msg.summary = 35U;
    msg.level = 43U;

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
    msg.setTimeStamp(0.3484149743142101);
    msg.setSource(61135U);
    msg.setSourceEntity(73U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(66U);
    msg.summary = 195U;
    msg.level = 119U;

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
    msg.setTimeStamp(0.30033849399998036);
    msg.setSource(46204U);
    msg.setSourceEntity(80U);
    msg.setDestination(54721U);
    msg.setDestinationEntity(79U);
    msg.summary = 73U;
    msg.level = 25U;

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
    msg.setTimeStamp(0.18832258071256447);
    msg.setSource(38304U);
    msg.setSourceEntity(229U);
    msg.setDestination(18575U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.7376629764141178);
    msg.setSource(57996U);
    msg.setSourceEntity(106U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.9547295207449196);
    msg.setSource(20884U);
    msg.setSourceEntity(99U);
    msg.setDestination(28433U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6951474114046635);
    msg.setSource(21006U);
    msg.setSourceEntity(38U);
    msg.setDestination(53754U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.06306947106812999);
    msg.setSource(9198U);
    msg.setSourceEntity(160U);
    msg.setDestination(9548U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.1697566500936014);
    msg.setSource(35055U);
    msg.setSourceEntity(234U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.17441399554304715);
    msg.setSource(13315U);
    msg.setSourceEntity(86U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(164U);
    msg.op = 192U;
    msg.system.assign("OPSBCKDOCZIRSYJYQUUYLZELEMNTVHQPGBHTRIYVDOKVTSFHNYIISHJOEPQYQJKRLWAZZVXVSKPTTMWHXNIFMSEUDUUIPTUMNFNOXGQPMSBMNLUKVLASJLYAHADJFKPCJPXKYTLGNQWEAWURFXUCKG");
    msg.range = 0.28780016984873;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 37749U;
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
    msg.setTimeStamp(0.157300762943119);
    msg.setSource(10115U);
    msg.setSourceEntity(211U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(161U);
    msg.op = 33U;
    msg.system.assign("BFYQLRWVGAEZZAQZIWTKWITLENQGWPQJMTUQWHRUODJZKJPMYLMBXHDILKQWPZRCMAPXLUHDYBCGRLXKUCMAWSKFHDFAPSHNSQAMYOXGCTKAVRWMUNEOTKZLTWT");
    msg.range = 0.5875371920195384;
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 36U;
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
    msg.setTimeStamp(0.359923715985635);
    msg.setSource(9505U);
    msg.setSourceEntity(80U);
    msg.setDestination(55224U);
    msg.setDestinationEntity(98U);
    msg.op = 244U;
    msg.system.assign("UHGUTFOVUBZPXYZWSZGEQYVJCFHYKPYPOVCBIPLEHDORNMSCTYWLALJBP");
    msg.range = 0.5929628387964209;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 38600U;
    tmp_msg_0.name.assign("PRWXZANSRDKTQTJZVSJSKKGBHBCLNORBFNAJYXZACDRKECNOTCXZHLFTYWRRJWPHFJNZSYKBQMKZECHPNDCQTUWVBTFXHRDSXMWOZXGIRYONGWUHCZQFBUEQCZPMATVIJIOPMFMGLOHJSUBGSPEFUKQOF");
    tmp_msg_0.custom.assign("YWVOTWPFOJYOZYBXDCQDPHZBAKDEPGSYDNTEKFZNGLWNEYBSFMRJWLDPOUUYVHIRTTVAZBLISMMGEVGSIRQXOVMABDEFKERUEGOJFYCRUBXCSQJXVMXUUDVOFMSYIRWBCKUFHCANQBIMMTAGVSLCIIWRJCBNQXWRAHLWTQKXTXAXARDCQZGIGUHQKJLNOELNHGTWJFQMUWPRS");
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
    msg.setTimeStamp(0.6401919784719586);
    msg.setSource(31671U);
    msg.setSourceEntity(113U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.8984538203857745);
    msg.setSource(12632U);
    msg.setSourceEntity(114U);
    msg.setDestination(45549U);
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
    msg.setTimeStamp(0.5182957743908192);
    msg.setSource(25368U);
    msg.setSourceEntity(101U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.8294916956057834);
    msg.setSource(4019U);
    msg.setSourceEntity(177U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(252U);
    msg.list.assign("WQKMJKVUPSCNZTTLBLITKQXBYKTPNSBRBIABIVQBHRYVVEAESRFMYJSIPFNDWVKSWQRNRHFJEOYYCYODVGOOLZPKJYTVKVLAADYNIEHUPFTMLGWEGWCKTNXWXLWMDQUGJHHEOCBTMOIDBZFUUQXUZZDMXSJONXTHAMPLVGGJIOAQEGLELUDYFZRSYFPXXUQNQDMFXCIAAPWPGBMJQSGWARUHUCCH");

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
    msg.setTimeStamp(0.861534914773566);
    msg.setSource(38275U);
    msg.setSourceEntity(185U);
    msg.setDestination(53270U);
    msg.setDestinationEntity(16U);
    msg.list.assign("ZNJTBCLOAVOYDKHTZCFDYMSTAZEAALECWHDOHVKUQKWENLOGQGGJQGPKOXXIBFCRDFRBRLVFKQYEEFJSPGULDVAFJNAGWMTDURPUVTOXPXKLHMSZHJLQRECQNCEBBWVNKMLKDNGDCBJXXLYHAYWIIXTEMVYTVEIIKXZSRHTIHFWPTBSNMOPGZBUAVOCNLTXZURJURIWUPYPMZCZGJIYJAFPNSSIUYDMWROSVBSPQFHMCYSEGNBQXDUJZQMKQ");

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
    msg.setTimeStamp(0.47142676266448724);
    msg.setSource(52967U);
    msg.setSourceEntity(120U);
    msg.setDestination(14194U);
    msg.setDestinationEntity(56U);
    msg.list.assign("SISWTVNDLSMTEPXIYGKXFOPFOZRMFJLUHIOXGTWEIXMFIQOBJIEYCMLCZBZWRVNSZMKNWCYPCKYLLG");

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
    msg.setTimeStamp(0.12847549116841805);
    msg.setSource(63223U);
    msg.setSourceEntity(58U);
    msg.setDestination(45717U);
    msg.setDestinationEntity(92U);
    msg.value = -6951;

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
    msg.setTimeStamp(0.6612654960531725);
    msg.setSource(2927U);
    msg.setSourceEntity(88U);
    msg.setDestination(38265U);
    msg.setDestinationEntity(176U);
    msg.value = -18429;

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
    msg.setTimeStamp(0.5358930920401429);
    msg.setSource(53771U);
    msg.setSourceEntity(2U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(248U);
    msg.value = 15268;

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
    msg.setTimeStamp(0.7031763950252826);
    msg.setSource(25391U);
    msg.setSourceEntity(244U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7187791927062412;

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
    msg.setTimeStamp(0.8362226591491955);
    msg.setSource(5863U);
    msg.setSourceEntity(228U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7580863146569411;

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
    msg.setTimeStamp(0.5696819453008285);
    msg.setSource(61925U);
    msg.setSourceEntity(38U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(37U);
    msg.value = 0.1331951863067179;

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
    msg.setTimeStamp(0.6469726861998267);
    msg.setSource(21957U);
    msg.setSourceEntity(121U);
    msg.setDestination(43655U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5817301670171622;

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
    msg.setTimeStamp(0.1199724559550831);
    msg.setSource(4857U);
    msg.setSourceEntity(6U);
    msg.setDestination(16078U);
    msg.setDestinationEntity(202U);
    msg.value = 0.463609305152054;

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
    msg.setTimeStamp(0.7162725897325776);
    msg.setSource(6809U);
    msg.setSourceEntity(179U);
    msg.setDestination(65457U);
    msg.setDestinationEntity(192U);
    msg.value = 0.33249434423584956;

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
    msg.setTimeStamp(0.3187712440624244);
    msg.setSource(48000U);
    msg.setSourceEntity(235U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(170U);
    msg.validity = 47377U;
    msg.type = 142U;
    msg.utc_year = 58838U;
    msg.utc_month = 19U;
    msg.utc_day = 136U;
    msg.utc_time = 0.29417312403860174;
    msg.lat = 0.6957668115811098;
    msg.lon = 0.2716353624661896;
    msg.height = 0.05766231102837094;
    msg.satellites = 176U;
    msg.cog = 0.7640303098530994;
    msg.sog = 0.2844568544238859;
    msg.hdop = 0.7741220083258724;
    msg.vdop = 0.48804208665534143;
    msg.hacc = 0.9318685512277329;
    msg.vacc = 0.3453364073255578;

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
    msg.setTimeStamp(0.2610020080524572);
    msg.setSource(17008U);
    msg.setSourceEntity(236U);
    msg.setDestination(45848U);
    msg.setDestinationEntity(104U);
    msg.validity = 43316U;
    msg.type = 110U;
    msg.utc_year = 52900U;
    msg.utc_month = 87U;
    msg.utc_day = 111U;
    msg.utc_time = 0.46330930079333743;
    msg.lat = 0.09005839875712929;
    msg.lon = 0.9940336206964245;
    msg.height = 0.9092323639899715;
    msg.satellites = 12U;
    msg.cog = 0.13456157420907822;
    msg.sog = 0.17851411236237102;
    msg.hdop = 0.550862678649853;
    msg.vdop = 0.2556209772902557;
    msg.hacc = 0.9125473401558006;
    msg.vacc = 0.9810441253374679;

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
    msg.setTimeStamp(0.8883640983700132);
    msg.setSource(28192U);
    msg.setSourceEntity(19U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(207U);
    msg.validity = 59512U;
    msg.type = 51U;
    msg.utc_year = 44501U;
    msg.utc_month = 165U;
    msg.utc_day = 204U;
    msg.utc_time = 0.9545234893515069;
    msg.lat = 0.056489629703712296;
    msg.lon = 0.8934891469959466;
    msg.height = 0.9275838726892482;
    msg.satellites = 187U;
    msg.cog = 0.7895043899877494;
    msg.sog = 0.4876049061764516;
    msg.hdop = 0.17060020895539196;
    msg.vdop = 0.8515316987921524;
    msg.hacc = 0.90009190957086;
    msg.vacc = 0.7489679100905182;

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
    msg.setTimeStamp(0.07604068989429014);
    msg.setSource(20682U);
    msg.setSourceEntity(194U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(221U);
    msg.time = 0.4307638492323874;
    msg.phi = 0.38608294984721514;
    msg.theta = 0.7185542811023472;
    msg.psi = 0.09159839336165299;
    msg.psi_magnetic = 0.9310434027778328;

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
    msg.setTimeStamp(0.7471534613688681);
    msg.setSource(42288U);
    msg.setSourceEntity(117U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(98U);
    msg.time = 0.3249970626941786;
    msg.phi = 0.5504562136454157;
    msg.theta = 0.3680969906898087;
    msg.psi = 0.3542251975669076;
    msg.psi_magnetic = 0.9717796666189122;

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
    msg.setTimeStamp(0.9696501941459087);
    msg.setSource(11034U);
    msg.setSourceEntity(157U);
    msg.setDestination(25245U);
    msg.setDestinationEntity(131U);
    msg.time = 0.027247997520621903;
    msg.phi = 0.7894575178717548;
    msg.theta = 0.6631524113620992;
    msg.psi = 0.25976898203898613;
    msg.psi_magnetic = 0.08127512803495618;

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
    msg.setTimeStamp(0.7332148812087323);
    msg.setSource(10473U);
    msg.setSourceEntity(158U);
    msg.setDestination(52781U);
    msg.setDestinationEntity(229U);
    msg.time = 0.23281073025283527;
    msg.x = 0.6068509200708033;
    msg.y = 0.16797705134606356;
    msg.z = 0.10336068257284281;
    msg.timestep = 0.996651743956042;

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
    msg.setTimeStamp(0.6246033839263574);
    msg.setSource(34002U);
    msg.setSourceEntity(180U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(100U);
    msg.time = 0.6377281694839689;
    msg.x = 0.6825208478603197;
    msg.y = 0.9138652938473619;
    msg.z = 0.38932994043382707;
    msg.timestep = 0.9931829030059457;

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
    msg.setTimeStamp(0.8521846835954047);
    msg.setSource(8778U);
    msg.setSourceEntity(33U);
    msg.setDestination(27712U);
    msg.setDestinationEntity(84U);
    msg.time = 0.09604722429521384;
    msg.x = 0.4873992259358705;
    msg.y = 0.30119971303055315;
    msg.z = 0.6242549784529668;
    msg.timestep = 0.9388564719100342;

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
    msg.setTimeStamp(0.6468395804996809);
    msg.setSource(58022U);
    msg.setSourceEntity(72U);
    msg.setDestination(48778U);
    msg.setDestinationEntity(7U);
    msg.time = 0.8091511972805786;
    msg.x = 0.7837113163554131;
    msg.y = 0.8968266507077564;
    msg.z = 0.6771233394861994;

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
    msg.setTimeStamp(0.05682165292471664);
    msg.setSource(65058U);
    msg.setSourceEntity(137U);
    msg.setDestination(33892U);
    msg.setDestinationEntity(4U);
    msg.time = 0.04009269682449912;
    msg.x = 0.4510003201666184;
    msg.y = 0.10219786524939545;
    msg.z = 0.2895201088408962;

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
    msg.setTimeStamp(0.1394616148706278);
    msg.setSource(4418U);
    msg.setSourceEntity(3U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(180U);
    msg.time = 0.39418983245084627;
    msg.x = 0.5083563486139758;
    msg.y = 0.619264815119691;
    msg.z = 0.9894409478665076;

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
    msg.setTimeStamp(0.6940383273606675);
    msg.setSource(53839U);
    msg.setSourceEntity(140U);
    msg.setDestination(6146U);
    msg.setDestinationEntity(155U);
    msg.time = 0.37550648297755485;
    msg.x = 0.17988799154028923;
    msg.y = 0.013068824019457859;
    msg.z = 0.9020407284618612;

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
    msg.setTimeStamp(0.6523539220297518);
    msg.setSource(40401U);
    msg.setSourceEntity(214U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(232U);
    msg.time = 0.7530150947607547;
    msg.x = 0.4588524683353553;
    msg.y = 0.9646025140510937;
    msg.z = 0.5796148020552757;

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
    msg.setTimeStamp(0.009268300019034559);
    msg.setSource(9175U);
    msg.setSourceEntity(251U);
    msg.setDestination(63822U);
    msg.setDestinationEntity(185U);
    msg.time = 0.377131920052559;
    msg.x = 0.7756266222793758;
    msg.y = 0.288636340741128;
    msg.z = 0.1886047672221446;

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
    msg.setTimeStamp(0.8809260834060931);
    msg.setSource(2331U);
    msg.setSourceEntity(49U);
    msg.setDestination(21124U);
    msg.setDestinationEntity(9U);
    msg.time = 0.45836603245157703;
    msg.x = 0.8818568902107652;
    msg.y = 0.8010035881113359;
    msg.z = 0.7127879400577255;

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
    msg.setTimeStamp(0.429360868286943);
    msg.setSource(36360U);
    msg.setSourceEntity(224U);
    msg.setDestination(60693U);
    msg.setDestinationEntity(136U);
    msg.time = 0.5734726321090325;
    msg.x = 0.10401538216800543;
    msg.y = 0.6670742745587146;
    msg.z = 0.36075569335361746;

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
    msg.setTimeStamp(0.034952345242270755);
    msg.setSource(10136U);
    msg.setSourceEntity(130U);
    msg.setDestination(50297U);
    msg.setDestinationEntity(102U);
    msg.time = 0.44049383534776054;
    msg.x = 0.20283431756476078;
    msg.y = 0.43482859601428747;
    msg.z = 0.8219394121827769;

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
    msg.setTimeStamp(0.6814119714059944);
    msg.setSource(60042U);
    msg.setSourceEntity(111U);
    msg.setDestination(49593U);
    msg.setDestinationEntity(194U);
    msg.validity = 116U;
    msg.x = 0.6743151762668206;
    msg.y = 0.9305652447708965;
    msg.z = 0.777986643705637;

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
    msg.setTimeStamp(0.8258480255915446);
    msg.setSource(8566U);
    msg.setSourceEntity(124U);
    msg.setDestination(63743U);
    msg.setDestinationEntity(96U);
    msg.validity = 111U;
    msg.x = 0.031221004027010446;
    msg.y = 0.8040028027206949;
    msg.z = 0.9585417180546827;

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
    msg.setTimeStamp(0.6452748450215129);
    msg.setSource(26850U);
    msg.setSourceEntity(7U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(194U);
    msg.validity = 105U;
    msg.x = 0.8022216107015944;
    msg.y = 0.9795456108791362;
    msg.z = 0.2378751786506741;

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
    msg.setTimeStamp(0.6646021920665485);
    msg.setSource(5744U);
    msg.setSourceEntity(203U);
    msg.setDestination(10908U);
    msg.setDestinationEntity(114U);
    msg.validity = 4U;
    msg.x = 0.33321832264634266;
    msg.y = 0.8661696566637893;
    msg.z = 0.9523018298375171;

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
    msg.setTimeStamp(0.9329877121990962);
    msg.setSource(37735U);
    msg.setSourceEntity(227U);
    msg.setDestination(6170U);
    msg.setDestinationEntity(237U);
    msg.validity = 208U;
    msg.x = 0.729689956267508;
    msg.y = 0.4907152362823567;
    msg.z = 0.8147578500862508;

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
    msg.setTimeStamp(0.4719916357993541);
    msg.setSource(13750U);
    msg.setSourceEntity(179U);
    msg.setDestination(24007U);
    msg.setDestinationEntity(12U);
    msg.validity = 64U;
    msg.x = 0.3438826947360659;
    msg.y = 0.2798196609032627;
    msg.z = 0.5696679720489223;

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
    msg.setTimeStamp(0.018189053200671212);
    msg.setSource(16254U);
    msg.setSourceEntity(226U);
    msg.setDestination(40060U);
    msg.setDestinationEntity(210U);
    msg.time = 0.7901014423307958;
    msg.x = 0.9387029517473021;
    msg.y = 0.6345101449552707;
    msg.z = 0.7096390544042268;

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
    msg.setTimeStamp(0.17359218129342513);
    msg.setSource(19306U);
    msg.setSourceEntity(122U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(103U);
    msg.time = 0.5097080579537951;
    msg.x = 0.8423251970463466;
    msg.y = 0.2459453804210563;
    msg.z = 0.7580390814340228;

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
    msg.setTimeStamp(0.13844986020539585);
    msg.setSource(18709U);
    msg.setSourceEntity(227U);
    msg.setDestination(44182U);
    msg.setDestinationEntity(83U);
    msg.time = 0.9805013407337658;
    msg.x = 0.8524547896401267;
    msg.y = 0.07500380088394132;
    msg.z = 0.7658438934018504;

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
    msg.setTimeStamp(0.3563211731499999);
    msg.setSource(13920U);
    msg.setSourceEntity(18U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(168U);
    msg.validity = 52U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6263975138935362;
    tmp_msg_0.y = 0.385993136701142;
    tmp_msg_0.z = 0.14933527287334902;
    tmp_msg_0.phi = 0.49180810246120976;
    tmp_msg_0.theta = 0.13005154468929203;
    tmp_msg_0.psi = 0.003698494934477381;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8720819258852244;

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
    msg.setTimeStamp(0.6021181541789776);
    msg.setSource(40218U);
    msg.setSourceEntity(112U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(166U);
    msg.validity = 124U;
    msg.value = 0.6988161470282226;

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
    msg.setTimeStamp(0.35557045822438627);
    msg.setSource(34998U);
    msg.setSourceEntity(34U);
    msg.setDestination(53961U);
    msg.setDestinationEntity(29U);
    msg.validity = 185U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4448943866358043;
    tmp_msg_0.y = 0.057866197040258194;
    tmp_msg_0.z = 0.7741367803976338;
    tmp_msg_0.phi = 0.5275289210460555;
    tmp_msg_0.theta = 0.9866862287778441;
    tmp_msg_0.psi = 0.5723419449148296;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.49567453821768026;

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
    msg.setTimeStamp(0.9293243809399454);
    msg.setSource(1010U);
    msg.setSourceEntity(2U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(81U);
    msg.value = 0.72285199311099;

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
    msg.setTimeStamp(0.9407724460772752);
    msg.setSource(5711U);
    msg.setSourceEntity(87U);
    msg.setDestination(43670U);
    msg.setDestinationEntity(201U);
    msg.value = 0.19449764657049695;

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
    msg.setTimeStamp(0.6298799952269328);
    msg.setSource(3111U);
    msg.setSourceEntity(76U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(41U);
    msg.value = 0.9050713735343642;

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
    msg.setTimeStamp(0.7362570454007776);
    msg.setSource(10441U);
    msg.setSourceEntity(198U);
    msg.setDestination(2934U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6829828565513811;

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
    msg.setTimeStamp(0.19798056638181993);
    msg.setSource(19885U);
    msg.setSourceEntity(137U);
    msg.setDestination(29704U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4507964935218778;

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
    msg.setTimeStamp(0.8616163585821259);
    msg.setSource(17138U);
    msg.setSourceEntity(151U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6342278334849851;

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
    msg.setTimeStamp(0.297247696693437);
    msg.setSource(4854U);
    msg.setSourceEntity(46U);
    msg.setDestination(62839U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5356608233848882;

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
    msg.setTimeStamp(0.3810439376575928);
    msg.setSource(36785U);
    msg.setSourceEntity(195U);
    msg.setDestination(56389U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7079918206928835;

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
    msg.setTimeStamp(0.5198135332109539);
    msg.setSource(31231U);
    msg.setSourceEntity(168U);
    msg.setDestination(24769U);
    msg.setDestinationEntity(201U);
    msg.value = 0.908887354960634;

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
    msg.setTimeStamp(0.5888440909510616);
    msg.setSource(12516U);
    msg.setSourceEntity(99U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(85U);
    msg.value = 0.19658666514692713;

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
    msg.setTimeStamp(0.708092680728117);
    msg.setSource(43480U);
    msg.setSourceEntity(163U);
    msg.setDestination(56206U);
    msg.setDestinationEntity(56U);
    msg.value = 0.5804760238015937;

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
    msg.setTimeStamp(0.11611683909614101);
    msg.setSource(58274U);
    msg.setSourceEntity(167U);
    msg.setDestination(52291U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5712065892462729;

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
    msg.setTimeStamp(0.11399898707591694);
    msg.setSource(24199U);
    msg.setSourceEntity(96U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5170806328922062;

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
    msg.setTimeStamp(0.9302107094494801);
    msg.setSource(21358U);
    msg.setSourceEntity(5U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3455087134970837;

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
    msg.setTimeStamp(0.21538777685472144);
    msg.setSource(60368U);
    msg.setSourceEntity(130U);
    msg.setDestination(31942U);
    msg.setDestinationEntity(5U);
    msg.value = 0.3439831657915494;

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
    msg.setTimeStamp(0.990553108680937);
    msg.setSource(37528U);
    msg.setSourceEntity(92U);
    msg.setDestination(32047U);
    msg.setDestinationEntity(226U);
    msg.value = 0.1664821878716397;

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
    msg.setTimeStamp(0.17264599523483204);
    msg.setSource(44518U);
    msg.setSourceEntity(163U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(164U);
    msg.value = 0.960231661077934;

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
    msg.setTimeStamp(0.10244410234716772);
    msg.setSource(4551U);
    msg.setSourceEntity(211U);
    msg.setDestination(29358U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8155979366476875;

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
    msg.setTimeStamp(0.44149664339646766);
    msg.setSource(63488U);
    msg.setSourceEntity(198U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(232U);
    msg.value = 0.5745260118702221;

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
    msg.setTimeStamp(0.4281014800913199);
    msg.setSource(8812U);
    msg.setSourceEntity(106U);
    msg.setDestination(18296U);
    msg.setDestinationEntity(223U);
    msg.value = 0.14036341082912962;

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
    msg.setTimeStamp(0.47050649491172847);
    msg.setSource(18731U);
    msg.setSourceEntity(133U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(132U);
    msg.value = 0.18652732939885974;

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
    msg.setTimeStamp(0.742499160136208);
    msg.setSource(40929U);
    msg.setSourceEntity(83U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(205U);
    msg.value = 0.560789171491616;

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
    msg.setTimeStamp(0.9704922975747633);
    msg.setSource(42439U);
    msg.setSourceEntity(219U);
    msg.setDestination(59865U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9070700909600549;

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
    msg.setTimeStamp(0.4510813676482589);
    msg.setSource(9372U);
    msg.setSourceEntity(240U);
    msg.setDestination(46644U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6484647676802623;

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
    msg.setTimeStamp(0.9068811716692524);
    msg.setSource(62453U);
    msg.setSourceEntity(160U);
    msg.setDestination(1605U);
    msg.setDestinationEntity(39U);
    msg.direction = 0.5215538496388701;
    msg.speed = 0.8584869987103403;

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
    msg.setTimeStamp(0.9967575426784253);
    msg.setSource(9148U);
    msg.setSourceEntity(229U);
    msg.setDestination(53152U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.09137404432380358;
    msg.speed = 0.27349736200124075;

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
    msg.setTimeStamp(0.46392144832576077);
    msg.setSource(42597U);
    msg.setSourceEntity(98U);
    msg.setDestination(18773U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.6733441085950822;
    msg.speed = 0.6586848468252962;

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
    msg.setTimeStamp(0.09912627841852695);
    msg.setSource(22126U);
    msg.setSourceEntity(40U);
    msg.setDestination(6910U);
    msg.setDestinationEntity(196U);
    msg.value = 0.2500457577276589;

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
    msg.setTimeStamp(0.25512651936841113);
    msg.setSource(6247U);
    msg.setSourceEntity(94U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0670633025084777;

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
    msg.setTimeStamp(0.15476903633301908);
    msg.setSource(23406U);
    msg.setSourceEntity(35U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6707210775795163;

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
    msg.setTimeStamp(0.2767008347817228);
    msg.setSource(10860U);
    msg.setSourceEntity(4U);
    msg.setDestination(46171U);
    msg.setDestinationEntity(183U);
    msg.value.assign("OGJQXOMEVQFZSLXITWJVRUMWLDWLHVJXGNJAPSLXXHXDTGCZADITBEFQKDGUSKSLTRYKKPLKNMZVRAKQOCMAHUPNUUWZ");

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
    msg.setTimeStamp(0.6841593089613237);
    msg.setSource(51304U);
    msg.setSourceEntity(80U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(253U);
    msg.value.assign("UPYQDWNIVCMQIZSGYFISBZENZAIBADGCLWGZKQRXLSQDJQAFTBMJTUVFCXGNIMKDLIYCOZTJUVOHXTBNAKCEHTXIMFHHAWBKRYUBXZUFQPWCXKGWZBPEMGMPSOGYRQLZMGLEFCIKUNOCXWFJLDAPMVRTKPQHWRYAEECXIRBZDCDWROJBFNRVUT");

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
    msg.setTimeStamp(0.9655502180397346);
    msg.setSource(12091U);
    msg.setSourceEntity(18U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(191U);
    msg.value.assign("SVYGZAXYPPVSFURWPNBQYOLWEUNEHGYAKGTRADLJBIMQYCAGXFSCCOTQPWSFDZKMWYEOCLBQTAEGOPFHXZRFZHZHNXNIGUKXMSYN");

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
    msg.setTimeStamp(0.9833198567551139);
    msg.setSource(21235U);
    msg.setSourceEntity(19U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(178U);
    const char tmp_msg_0[] = {126, 21, -72, -65, -19, -74, 63, -83, 44, 74, -125, -68, -93, -100, 111, -113, -51, 78, 45, 77, -45, -2, -52, 19, 38, 93, 50, -120, -106, -106, 24, -7, 105, 38, 84, 15, -50, 91, 48, 46, 99, -1, -23, -94, 78, 97, -50, -57, 78, -10, -86, -91, 57, -50, -76, 80, -128, -91, 124, -98, -13, 29, 24, -101, -47, -46, 91, -32, 120, 30, 104, -13, -97, -64, -50, 105, 74, 111, 122, 102, -115, -36, 14, -62, 103, -3, -100, -54, 21, -99, -35, -114, -38, -48, -31, 43, -24, -10, 2, -112, -84, 55, 96, -105, -97, 60, -94, -11, 81, -105, -33, 96, 59, 77, 102, -38, -74, -110, -34, 113, -121, 112, 46, -108, 84, -6, -16, 84, 95, -94, 74, 99, 21, -78, -12, -9, -56, 24, -16, 105, 70, -104, 80, -29, -67, -127, -116, -126, -28, -72, -118, -112, 63, 94, -37, 74, 25, -36, 90, 111, -96, -40, -58, 122, 3, 50, -45, 73, -48, -100, -23, 116, 117, -8, 96, -19, -128, 42, 83, -86, 123, 49, -72, 120, -23, 92, -14, -15, 13, 69, -96, 65, -39, -125, 49, 23, 114, -2, -77, 89, -93, -91, -106, 66, 66, -78, 90};
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
    msg.setTimeStamp(0.937889558852134);
    msg.setSource(18351U);
    msg.setSourceEntity(105U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {-56, 68, -6, -28, -100, 65, 65, 64, -123, 57, -104, -99, 58, 114, -89, 111, 60, 93, 52, 118, 104, -62, 11, 55, 45, 114, -95, 112, 84, -28, -48, -75, 30, -86, 33, 73, -58, -51, -59, 18, 57, 82, 116, -84, 110, -26, 105, -40, 116, -59, 23, -84, 58, -87, -97, 56, -30, -106, 62, -58, -114, -107, -82, 112, 96, 16, -25, 42, -69, -89, -9, 52, -71, 64, 8, 79, -60, 76, 113, 62, 21, 91, -18, 92, -74, -34, -24, -16, 54, -122, 111, 64, -94, -114, 65, -18, 104};
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
    msg.setTimeStamp(0.17623112310911637);
    msg.setSource(59584U);
    msg.setSourceEntity(12U);
    msg.setDestination(53237U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {-114, 21, 70, 54, -82, 27, 109, -128, 5, -56, 121, 15, -102, 68, -95, -46, -54, -60, 29, 120, 39, -128, -4, 7, 61, -50, 29, 42, -108, -89, -5, -68, 72, -25, 108, 85, 125, 90, -13, -56, 82, 119, -22, -54, 44, 2, 80, 41, -99, 116, 87, -96, 13, -106, -89, -31, -110, -81, -73, -1, -25, 67, -13, -119, -105, 45, 11, -109, -8, 32, -75, 12, 102, -21, -38, 76, -21, 70, 92, -54, -50, -20, -83, 29, 99, 50, 58, -62, -121, 107, -22, -83, -121, -69, -39, 32, -77, -28, -54, -125, -104, 49, 89, -96, -45, 15, 66, 117, 104, 34, 5, -15, 119, -113, -46, 104, -123, -17, -124, 48, -13, 33, -39, 92, 81, 118, -58, -51, -99, 108, -112, -113, 118, -19, -57, -46, 101, 57, -115, -119, -94, -77, -9, 86, 51};
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
    msg.setTimeStamp(0.7193805099058611);
    msg.setSource(20766U);
    msg.setSourceEntity(35U);
    msg.setDestination(10556U);
    msg.setDestinationEntity(126U);
    msg.frequency = 4268682776U;
    msg.min_range = 59430U;
    msg.max_range = 35740U;

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
    msg.setTimeStamp(0.7921247635110016);
    msg.setSource(49197U);
    msg.setSourceEntity(144U);
    msg.setDestination(37896U);
    msg.setDestinationEntity(78U);
    msg.frequency = 1183157994U;
    msg.min_range = 4680U;
    msg.max_range = 34967U;

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
    msg.setTimeStamp(0.7016455025954768);
    msg.setSource(57607U);
    msg.setSourceEntity(89U);
    msg.setDestination(48423U);
    msg.setDestinationEntity(124U);
    msg.frequency = 302918352U;
    msg.min_range = 8788U;
    msg.max_range = 53950U;

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
    msg.setTimeStamp(0.5026543867416271);
    msg.setSource(23084U);
    msg.setSourceEntity(161U);
    msg.setDestination(19836U);
    msg.setDestinationEntity(183U);
    msg.type = 222U;
    msg.frequency = 1127395667U;
    msg.min_range = 61660U;
    msg.max_range = 19095U;
    msg.bits_per_point = 95U;
    msg.scale_factor = 0.6138388732856681;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.09808616317347629;
    tmp_msg_0.beam_height = 0.5269962498723603;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {81, -77, -40, 90, 26, 77, 18, -67, 62, 10, -75, -72, -115, 53, 70, -62, 79, -77, -53, 36, -12, 35, 45, -50, -115, 75, -9, 94, 42, 59, -128, -40, -26, 45, 88, 22, -80, 114, -34, 88, -12, -44, 89, 123, 13, 117, 31, -3, 63, 101, 94, -61, -85, -35, 31, -59, 13, 106, -88, -27, 69, -92, 110, -19, 69, -20, 21, -66, -59, -77, -59, -12, 103, 19, 105, -33, -10, -8, 80, -38, 54, -94, 53, 33, -19, 53, -14, -86, 121, 109, -24, 126, -98, -66, -83, 45, 70, -4, 101, 85, 3, -26, 20, 67, -84, -127, -3, 118, -49, 80, 13, 30, 99, 63, -64, -85, -45, -124, 116, 34, -104, 8, -14, -110, -61, 10, -6, -70, -58, -107, 88, 50, -15, 50, 37, 94, -65};
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
    msg.setTimeStamp(0.09038269083763328);
    msg.setSource(11326U);
    msg.setSourceEntity(41U);
    msg.setDestination(19285U);
    msg.setDestinationEntity(13U);
    msg.type = 43U;
    msg.frequency = 1674689098U;
    msg.min_range = 47064U;
    msg.max_range = 59856U;
    msg.bits_per_point = 27U;
    msg.scale_factor = 0.6125376059391097;
    const char tmp_msg_0[] = {-17, 55, 60, -9, 31, -112, -31, -17, -75, 63, -115, 114, 78, -111, -119, -76, 72, -124, -66, 11, -104, -22, -126, -112, -123, 96, 0, 17, -111, 104, -36, 102, -80, -5, -124, -115, 72, 78, 8, -55, -6, 71, -47, -107, -46, 79, -25, -4, -95, 60, -6, 67, 117, -56, -42, -37, 70, 107, -116, -65, -106, 69, -125, -82, -7, 88, -128, -18, 23, -14, -95, 5, 119, 94, 37, -14, -14, -90, 12, -64, -57, 56, 41, 73, 64, -8, 119, -128, 107, 122, -24, -73, 23, 50, -35, 111, 38, -82, -72, -81, 10, 94, 33, -6, 101, 23, -59, -113, -22, -56, -80, -99, 8, -15, 66, -3, -7, 45, 109, -85, -115, -59, 42, 116, 108, 113, 62, -59, 81, -109, -108, 63, 113, -8, -2, -83, 20, 53, -120, 42, -46, -78, 2, 124, -76, -108, 86, 54, -47, 86, 122, 71, -87, -61, 56, 77, 113, -16, -37, -29, -44, 27, -66, 88, 48, 89, -117, 73, 107, -19};
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
    msg.setTimeStamp(0.21532424545712636);
    msg.setSource(2696U);
    msg.setSourceEntity(119U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(170U);
    msg.type = 106U;
    msg.frequency = 704613814U;
    msg.min_range = 44064U;
    msg.max_range = 58914U;
    msg.bits_per_point = 92U;
    msg.scale_factor = 0.9922759901135226;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2513842883276636;
    tmp_msg_0.beam_height = 0.3009580737530779;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-126, 71, -72, 54, 25, -17, 32, -18, 40, 90, -49, 95, -50, 60, 34, -54, -86, 18, -107, 105, 25, 120, -58, -125, -93, -18, 117, -37, -16, 59, 78, 62, -15, -98, 59, 36, -90, 43, -2, -16, -42, -71, -80, 48, 108, -105, -64, -115, 26, 40, 89, -110, 112, -22, 80, 123, 122, 62, 109, 115, -37, -102, 26, 89, 114, 73, 37, 89, 62, 24, 27, 0, 59, 92, 27, 12, 18, 61, -118, 92, -26, -94, 83, 96, -116, -111, 11, -121, -4, 97, 106, 31, 48, -12, 90, -73, 9, -3, 64, -96};
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
    msg.setTimeStamp(0.53870815281996);
    msg.setSource(43861U);
    msg.setSourceEntity(119U);
    msg.setDestination(34246U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.035598961540452945);
    msg.setSource(3906U);
    msg.setSourceEntity(120U);
    msg.setDestination(28011U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.5089483979386329);
    msg.setSource(2495U);
    msg.setSourceEntity(8U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.15164143627714066);
    msg.setSource(20666U);
    msg.setSourceEntity(113U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(246U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.5429210169245096);
    msg.setSource(40744U);
    msg.setSourceEntity(214U);
    msg.setDestination(5398U);
    msg.setDestinationEntity(121U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.04544713116317234);
    msg.setSource(43767U);
    msg.setSourceEntity(30U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(114U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.8849100047310167);
    msg.setSource(4487U);
    msg.setSourceEntity(212U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9415789892073904;
    msg.confidence = 0.45074190608974896;
    msg.opmodes.assign("SAQZYFQTLNDTPMNGCWKPXWMO");

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
    msg.setTimeStamp(0.4943835305139431);
    msg.setSource(48559U);
    msg.setSourceEntity(84U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(155U);
    msg.value = 0.48094181806712544;
    msg.confidence = 0.7710013318979793;
    msg.opmodes.assign("NQHJSLCUTLYDWZDMZHXGEYFIHSQPZEDCINZZVCYPRNPPSUTHGBZJUJBJJYXVAQVYQIKCTLA");

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
    msg.setTimeStamp(0.33910958921208056);
    msg.setSource(22415U);
    msg.setSourceEntity(204U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4142087770156758;
    msg.confidence = 0.3998269532532587;
    msg.opmodes.assign("KZKGHGRWDQNIYEINVZSDSYWKIXXTTYXPIOCANLHJVBUWBQCKZQVMPHLSZFCDWSOYPINWWJAZGNJRSLIEQUTKBSRQPCECLNPWMPTPOEFSUGDXUVOLJOBRVEHBDKAWXEZGRARIPHEMNLBDPCVXNFUAQJHYBUZGDCAHJECBHJGCORYMAMUZFUOSFLQZTFJXFDUNXHHBTYROIQTMLUKYAAOMGLWFLJIYWXTBQQKKRYMMKSR");

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
    msg.setTimeStamp(0.6919389164512684);
    msg.setSource(417U);
    msg.setSourceEntity(158U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(234U);
    msg.itow = 2967499643U;
    msg.lat = 0.22454419726002162;
    msg.lon = 0.34648736457670126;
    msg.height_ell = 0.4563779332252831;
    msg.height_sea = 0.30340549445877163;
    msg.hacc = 0.09203414238298802;
    msg.vacc = 0.978256730493679;
    msg.vel_n = 0.7315443289233824;
    msg.vel_e = 0.5914404856397052;
    msg.vel_d = 0.9648763536674758;
    msg.speed = 0.4172179634543096;
    msg.gspeed = 0.6079054693634283;
    msg.heading = 0.42233174064833945;
    msg.sacc = 0.8594132114075286;
    msg.cacc = 0.09093097047476761;

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
    msg.setTimeStamp(0.7081823992554022);
    msg.setSource(61561U);
    msg.setSourceEntity(248U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(243U);
    msg.itow = 1169213124U;
    msg.lat = 0.7243992676005419;
    msg.lon = 0.16784090299457688;
    msg.height_ell = 0.4649228579434791;
    msg.height_sea = 0.6048447805082658;
    msg.hacc = 0.06357804827067093;
    msg.vacc = 0.3601900142527862;
    msg.vel_n = 0.3376182887176208;
    msg.vel_e = 0.04674506382294297;
    msg.vel_d = 0.7202235368001997;
    msg.speed = 0.10030220501951426;
    msg.gspeed = 0.5078989964066628;
    msg.heading = 0.2985593052563872;
    msg.sacc = 0.9317366030032572;
    msg.cacc = 0.15226349476111356;

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
    msg.setTimeStamp(0.19540840138166193);
    msg.setSource(55131U);
    msg.setSourceEntity(79U);
    msg.setDestination(65365U);
    msg.setDestinationEntity(251U);
    msg.itow = 2334635790U;
    msg.lat = 0.29491947651316697;
    msg.lon = 0.7851769171941841;
    msg.height_ell = 0.1717478286529852;
    msg.height_sea = 0.9437978901424442;
    msg.hacc = 0.5934023080542518;
    msg.vacc = 0.8874788531533803;
    msg.vel_n = 0.6072477450870429;
    msg.vel_e = 0.9633702268384973;
    msg.vel_d = 0.37138315344151496;
    msg.speed = 0.07805426198425192;
    msg.gspeed = 0.05415996932930012;
    msg.heading = 0.5222687710366491;
    msg.sacc = 0.21880758944248424;
    msg.cacc = 0.003334647871297891;

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
    msg.setTimeStamp(0.46725211737409145);
    msg.setSource(52213U);
    msg.setSourceEntity(55U);
    msg.setDestination(73U);
    msg.setDestinationEntity(2U);
    msg.id = 110U;
    msg.value = 0.37175720837081194;

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
    msg.setTimeStamp(0.6601078936387293);
    msg.setSource(42734U);
    msg.setSourceEntity(192U);
    msg.setDestination(52607U);
    msg.setDestinationEntity(148U);
    msg.id = 66U;
    msg.value = 0.08260334403711866;

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
    msg.setTimeStamp(0.9079550020416676);
    msg.setSource(55742U);
    msg.setSourceEntity(37U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(65U);
    msg.id = 90U;
    msg.value = 0.23097694900775034;

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
    msg.setTimeStamp(0.09360617999972509);
    msg.setSource(41196U);
    msg.setSourceEntity(207U);
    msg.setDestination(59578U);
    msg.setDestinationEntity(93U);
    msg.x = 0.1867837925159238;
    msg.y = 0.6695699656772487;
    msg.z = 0.289452198976618;
    msg.phi = 0.2570982286040461;
    msg.theta = 0.30937439133749356;
    msg.psi = 0.6417004817136861;

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
    msg.setTimeStamp(0.6658509970928549);
    msg.setSource(2311U);
    msg.setSourceEntity(214U);
    msg.setDestination(54840U);
    msg.setDestinationEntity(177U);
    msg.x = 0.4821382861465874;
    msg.y = 0.8781073036201201;
    msg.z = 0.46482701935016657;
    msg.phi = 0.5608758274067476;
    msg.theta = 0.42799842507507746;
    msg.psi = 0.46601388492548257;

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
    msg.setTimeStamp(0.09833137819747184);
    msg.setSource(18298U);
    msg.setSourceEntity(72U);
    msg.setDestination(43582U);
    msg.setDestinationEntity(28U);
    msg.x = 0.14392065227842388;
    msg.y = 0.21953570128074418;
    msg.z = 0.5469940560825234;
    msg.phi = 0.6871536761169518;
    msg.theta = 0.8026811387972738;
    msg.psi = 0.5137689973437362;

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
    msg.setTimeStamp(0.13994817496478362);
    msg.setSource(64344U);
    msg.setSourceEntity(164U);
    msg.setDestination(32647U);
    msg.setDestinationEntity(162U);
    msg.beam_width = 0.25300158990623245;
    msg.beam_height = 0.6462550668524036;

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
    msg.setTimeStamp(0.6662381746291591);
    msg.setSource(2659U);
    msg.setSourceEntity(155U);
    msg.setDestination(42840U);
    msg.setDestinationEntity(252U);
    msg.beam_width = 0.9029311074548539;
    msg.beam_height = 0.6281474883065501;

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
    msg.setTimeStamp(0.41988481199187755);
    msg.setSource(34521U);
    msg.setSourceEntity(227U);
    msg.setDestination(43377U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.9592328816203249;
    msg.beam_height = 0.952585376216116;

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
    msg.setTimeStamp(0.2665446086995831);
    msg.setSource(19636U);
    msg.setSourceEntity(229U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(195U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.023124399988374122);
    msg.setSource(29802U);
    msg.setSourceEntity(25U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(122U);
    msg.sane = 1U;

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
    msg.setTimeStamp(0.22639383593837836);
    msg.setSource(27417U);
    msg.setSourceEntity(169U);
    msg.setDestination(27476U);
    msg.setDestinationEntity(214U);
    msg.sane = 126U;

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
    msg.setTimeStamp(0.9706651096465967);
    msg.setSource(6707U);
    msg.setSourceEntity(130U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(45U);
    msg.id = 254U;
    msg.zoom = 28U;
    msg.action = 107U;

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
    msg.setTimeStamp(0.031906834459561995);
    msg.setSource(55569U);
    msg.setSourceEntity(56U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(204U);
    msg.id = 0U;
    msg.zoom = 89U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.5956968518894437);
    msg.setSource(22743U);
    msg.setSourceEntity(25U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(197U);
    msg.id = 0U;
    msg.zoom = 229U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.8117243408263871);
    msg.setSource(47672U);
    msg.setSourceEntity(237U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(200U);
    msg.id = 204U;
    msg.value = 0.3997348603307247;

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
    msg.setTimeStamp(0.9468538823540237);
    msg.setSource(57527U);
    msg.setSourceEntity(133U);
    msg.setDestination(28130U);
    msg.setDestinationEntity(248U);
    msg.id = 154U;
    msg.value = 0.21482587919890983;

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
    msg.setTimeStamp(0.8760850814652391);
    msg.setSource(23395U);
    msg.setSourceEntity(239U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(248U);
    msg.id = 86U;
    msg.value = 0.1285484910435193;

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
    msg.setTimeStamp(0.6345318302639759);
    msg.setSource(3805U);
    msg.setSourceEntity(184U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(45U);
    msg.id = 36U;
    msg.value = 0.31425674899191824;

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
    msg.setTimeStamp(0.23595780494014484);
    msg.setSource(58505U);
    msg.setSourceEntity(243U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(225U);
    msg.id = 26U;
    msg.value = 0.47379088606682984;

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
    msg.setTimeStamp(0.18428911105786006);
    msg.setSource(59589U);
    msg.setSourceEntity(126U);
    msg.setDestination(740U);
    msg.setDestinationEntity(36U);
    msg.id = 96U;
    msg.value = 0.7663134470443262;

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
    msg.setTimeStamp(0.7696136451033068);
    msg.setSource(1815U);
    msg.setSourceEntity(99U);
    msg.setDestination(13562U);
    msg.setDestinationEntity(231U);
    msg.id = 60U;
    msg.angle = 0.3179021219205763;

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
    msg.setTimeStamp(0.22828765491675418);
    msg.setSource(2879U);
    msg.setSourceEntity(57U);
    msg.setDestination(1494U);
    msg.setDestinationEntity(107U);
    msg.id = 163U;
    msg.angle = 0.05516549912777369;

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
    msg.setTimeStamp(0.5998747426866613);
    msg.setSource(55432U);
    msg.setSourceEntity(249U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(111U);
    msg.id = 27U;
    msg.angle = 0.32271984638846885;

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
    msg.setTimeStamp(0.2868172402950818);
    msg.setSource(21088U);
    msg.setSourceEntity(95U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(110U);
    msg.op = 16U;
    msg.actions.assign("ZWHATASDZIHIQLHOWNLYIFBVHKOXMXXEUYGWEGGELLFLZQNZROTTYRNOKFRCDFPYTTNMPZTBMJCFDCDSDXWGKUDTIQTRECGXAKUBJYHPEWSLRBMZUBJPJYOIEXCQKGSSVHCPALHMRMCCYMFNDCOFGIEEXUJM");

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
    msg.setTimeStamp(0.0386188043370691);
    msg.setSource(24354U);
    msg.setSourceEntity(90U);
    msg.setDestination(28498U);
    msg.setDestinationEntity(111U);
    msg.op = 191U;
    msg.actions.assign("VIMJFONNOYOLGSCVIPHLJTIRTPQTQYLGZBQGRFXKLPQXGWCHGPZMXNEAKKNVKJJEFMDYCMPQQZZAJEZRDXLKFUBFFUQRJC");

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
    msg.setTimeStamp(0.0028352686429505836);
    msg.setSource(49266U);
    msg.setSourceEntity(159U);
    msg.setDestination(44088U);
    msg.setDestinationEntity(6U);
    msg.op = 0U;
    msg.actions.assign("MPDWRXUGUCZSTJGVAOEWTLJQWGGLJEEYJFAOVXYLUCGOMHLNLNAROESNXBBWXADQLTKAIQTFBCHSFJBZLVHSAIRPVXAIPFTKOTIOLBWNNNMPWDFDEZUECCSRGCQDVECYQHXOTZCBA");

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
    msg.setTimeStamp(0.7466299016060763);
    msg.setSource(36781U);
    msg.setSourceEntity(174U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(89U);
    msg.actions.assign("BDGDAVCWFTJHUOSMUYCVPVXFJIIVBGPSWQCJAZABEWQOFEQCWAXRTGOSPGYYMRIZEECYKAOWMYUC");

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
    msg.setTimeStamp(0.23455136317631275);
    msg.setSource(63846U);
    msg.setSourceEntity(173U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(103U);
    msg.actions.assign("CXRBYTMMPBLZMUIKSADJRILHPTYACHXQMJPMFUOUEBDOBIGDNTTN");

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
    msg.setTimeStamp(0.7632417772563066);
    msg.setSource(44500U);
    msg.setSourceEntity(230U);
    msg.setDestination(25098U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("HIWRONVVFQVPKMSCDZJLEJUBPYUNMIPHBTXGZKOUXLHSSESMWGTBQXUTPEVHZOWJGFNZGIGECSHKMAKLADKNQOROQTNBDCFYSMEJLZFCYCKKOLFMAXFYPFRLY");

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
    msg.setTimeStamp(0.5460415450165639);
    msg.setSource(9178U);
    msg.setSourceEntity(168U);
    msg.setDestination(18904U);
    msg.setDestinationEntity(38U);
    msg.button = 244U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.5477123031990526);
    msg.setSource(17413U);
    msg.setSourceEntity(186U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(69U);
    msg.button = 37U;
    msg.value = 247U;

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
    msg.setTimeStamp(0.4903807676619585);
    msg.setSource(64776U);
    msg.setSourceEntity(117U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(222U);
    msg.button = 30U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.4811660501046383);
    msg.setSource(12505U);
    msg.setSourceEntity(91U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(179U);
    msg.op = 57U;
    msg.text.assign("AJAREXMUSAGOLRXFRGFSSWSCFIBHKUKQROTOHIGULJAEBKNIKDUPQPHYOJKHOEOSHSPTFDUULTECKVWVBZMGSZOIGNLQJBIAFVBTZYGCZQTLQIHYPXANJTRTWHJFOGCJDQGCXLLRPYDBFEEMRETIZZVMQXOVBBWJCMJWYAPDNJZRCSBUKWWPNGXICNEXUVMNSMR");

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
    msg.setTimeStamp(0.9044155477289197);
    msg.setSource(37546U);
    msg.setSourceEntity(37U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(54U);
    msg.op = 144U;
    msg.text.assign("TCOVNEFBMRGPWZRGLWYDLWTJAXVVBJQMSHBJWVYEPKGNUVCOBCNMUSBURZDCTKL");

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
    msg.setTimeStamp(0.09091960229850571);
    msg.setSource(63726U);
    msg.setSourceEntity(199U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(33U);
    msg.op = 94U;
    msg.text.assign("CDEIFYGIZQFYEJMPKHSDCGUJZOMOEHECZZRSBFZISCJBKDUTUQGCNTNIMABREVMLQJMPDFW");

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
    msg.setTimeStamp(0.627414127594056);
    msg.setSource(43874U);
    msg.setSourceEntity(175U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(91U);
    msg.op = 87U;
    msg.time_remain = 0.6272583959773765;
    msg.sched_time = 0.053840643412015;

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
    msg.setTimeStamp(0.3647549135806888);
    msg.setSource(33815U);
    msg.setSourceEntity(198U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(246U);
    msg.op = 186U;
    msg.time_remain = 0.5181414729307203;
    msg.sched_time = 0.039965474413535595;

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
    msg.setTimeStamp(0.18136587582352892);
    msg.setSource(20936U);
    msg.setSourceEntity(30U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(170U);
    msg.op = 130U;
    msg.time_remain = 0.25985776347782163;
    msg.sched_time = 0.9069587552749535;

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
    msg.setTimeStamp(0.008219116637938173);
    msg.setSource(20850U);
    msg.setSourceEntity(186U);
    msg.setDestination(19826U);
    msg.setDestinationEntity(194U);
    msg.name.assign("TIXRWBERSMVYSUIIDCQENXSRTBZDLHROFKKKFBLKYRPRBTFMMBLOMGCIYKJSNHFUAGHOJBNZBZXXXEEEATBNLIU");
    msg.op = 15U;
    msg.sched_time = 0.45799099804130605;

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
    msg.setTimeStamp(0.5672279328800177);
    msg.setSource(40522U);
    msg.setSourceEntity(228U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FHWCMRXOMUPKXZNBXDBTIGTGLFFNIAVQPIJJAQPINCPWXIKJARKOGSVLQZWILYPYZFJBYKNLWEMCRBIISCROFJJKQMFVKLLKWZZHSENAETPUYCHFPNYEJHFQSHTVNRXCUBEOUZVXDRYZIVZKNBKTTOGQOARYAFMARMTHPGYSFEWGGDVGVNEIWNCWYEMXLBMLH");
    msg.op = 4U;
    msg.sched_time = 0.5030804034598269;

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
    msg.setTimeStamp(0.2898819234491379);
    msg.setSource(39731U);
    msg.setSourceEntity(231U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(170U);
    msg.name.assign("KEIFCVYNTTODBFXHUDSJAQWYXRBZCWPHVBYPSIMDMZQCHWQZFGYJKFMGLORUNCUKWFXECZIYSGOJVDNXJKVMENIYUGFFUQMOSNYPPWNOERLLPULPTXINSZJVZOXJZSGHBEITHCQVQFNRWWEWCOAYXBRAPJBFSTMEHBKMKM");
    msg.op = 15U;
    msg.sched_time = 0.5873748421368016;

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
    msg.setTimeStamp(0.13471687227192175);
    msg.setSource(17854U);
    msg.setSourceEntity(109U);
    msg.setDestination(5173U);
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
    msg.setTimeStamp(0.1863981438836957);
    msg.setSource(48423U);
    msg.setSourceEntity(155U);
    msg.setDestination(1746U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.8379246117510792);
    msg.setSource(39372U);
    msg.setSourceEntity(185U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.3715412034718115);
    msg.setSource(28521U);
    msg.setSourceEntity(37U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(216U);
    msg.name.assign("CNLRMIZRGTVRBDNAYIRPIHUEOPAFGASYIAYSALBVQDTUYHCEBELFORVWAOR");
    msg.state = 157U;

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
    msg.setTimeStamp(0.1198821907230555);
    msg.setSource(25200U);
    msg.setSourceEntity(29U);
    msg.setDestination(19422U);
    msg.setDestinationEntity(231U);
    msg.name.assign("PLOINDCJYRKANZXCPFIEFVBHOKPZEHRWGFXEXHXKGAGAHRKPUAXLSFJZFYACRPDUJPBHCNHQEJSUQVLMODOCTQWAFMUBEIRMNWXVKDVTSTYYTNWZMUTWDCBCIUXLCQVCCHJWFRADVAQXNYGQBPOYBRSXYQSOUNBK");
    msg.state = 91U;

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
    msg.setTimeStamp(0.9993551149666698);
    msg.setSource(15496U);
    msg.setSourceEntity(6U);
    msg.setDestination(18105U);
    msg.setDestinationEntity(213U);
    msg.name.assign("UIKAIFTPLQXUSUZBCDHIPWAQUDZWRWRPJJDAELICQNGUSGSHYADULEYIRVJXKAXXFCELRBBREXGYTDRAMLSVTALHVPOAFZOGBIBNXIPHMQCSOGFPQDOPVUH");
    msg.state = 166U;

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
    msg.setTimeStamp(0.5697995856182445);
    msg.setSource(1858U);
    msg.setSourceEntity(199U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(171U);
    msg.name.assign("YZUHGSTSYQZRFMXALKCIDRCZBHKXDGBPMTAGMILGYPRIONCFIWVLJSQCZTBQGZDPPWZBCGJZBKEEDUGRXZTBNNYMJUXOFULLEKSAYPRXUQSZXEAMOBNAJJIJLAFVJIKEVAVFGWWRXDGOLHFWHDIPSMQOJNEIQEOHVFDXQKUNTHQCOYUWQSJOEXGNCRYUTMSUTFVNHWORYFHDMYKKLPACITWLNXKYVRUEQPWTJBAKVDMPSNILCCPVOFZ");
    msg.value = 96U;

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
    msg.setTimeStamp(0.9938814323456936);
    msg.setSource(50239U);
    msg.setSourceEntity(192U);
    msg.setDestination(59498U);
    msg.setDestinationEntity(100U);
    msg.name.assign("CYABEQIDYVCJMQECESNNVRHWMQKXGMOIKEMKBXMXBXVUTUTUCRSFRYRLVHPJMWWIZPVKHEFNLZVMZFFMDHLKJIIGXCSIDMADLTKFXIXTCOUKWRYNLECADNFHQGBANIQGSLXUYTSDM");
    msg.value = 121U;

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
    msg.setTimeStamp(0.6364314416891802);
    msg.setSource(15994U);
    msg.setSourceEntity(59U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(245U);
    msg.name.assign("TQZWCMSAFDKOKBQYNDYXZOAHFWMDPUUIOQVJPGVUFXHXQNORGVJAPLFJYYPLVFGTKGUCSOEXUWKRHINXGRGWRMLLFOOQZENUCBTCIJPYPYXVSRMHYISFSCZECRJAVALZZKZMNBPCIMTNHYZPMZJEDIYGDGCGJFJWKCIJBHAJFEWXWHKUSOQKETWDMMBRU");
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
    msg.setTimeStamp(0.6680705546210562);
    msg.setSource(2638U);
    msg.setSourceEntity(19U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(109U);
    msg.name.assign("BHMFEDEZDBPWIHMAJRNBAHQCKSUJSGXNYLDCOLUCYZURAYSLTADGJBKEIWBPALZOQEXYZKTNTPVWYVHEYDCFNUOWAGHMYCVYTVNCWVSH");

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
    msg.setTimeStamp(0.3299842349125317);
    msg.setSource(20019U);
    msg.setSourceEntity(67U);
    msg.setDestination(41024U);
    msg.setDestinationEntity(183U);
    msg.name.assign("JJGKEFQGXFXNTLKCPUZPTDE");

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
    msg.setTimeStamp(0.46268719036963635);
    msg.setSource(12080U);
    msg.setSourceEntity(247U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(57U);
    msg.name.assign("JSLZXVZJTDPXUKOPTXNRESHERVQZTSCWAKDQQLIVMKNNQW");

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
    msg.setTimeStamp(0.280158127640891);
    msg.setSource(27858U);
    msg.setSourceEntity(117U);
    msg.setDestination(7266U);
    msg.setDestinationEntity(5U);
    msg.name.assign("XFBSGVKCQDIOTRRVAXZRPHAGTLDICQLAAMCNTPWOZQMFMWHIULUXXJODKSQCUIWBWFXMERJJEDCOLYKUGQLOJBFRNMERSVSOUZBXBESFKPDSHPWOQSAPBHHCXSGGCEINEENNKVLCFAUYURZMXBWPYDNPQPJMNQKTEWENDWVZTOGFCOTAHFVPLY");
    msg.value = 85U;

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
    msg.setTimeStamp(0.47301437436326255);
    msg.setSource(11396U);
    msg.setSourceEntity(212U);
    msg.setDestination(40140U);
    msg.setDestinationEntity(159U);
    msg.name.assign("YXZCTLUSWMRONNMLLSPQGETBNLNQOWPCUSXOSFDCDWVYXXQGUPWBJLGFAJGZTJTTOXKFMYPJHKIHANUFHSBPRXUNIGSJQUHKFHQWYXKFDFSURKDLNTDSJTQXGVJAWOOBTZZEQIHGYCKNVEETMXPDOZILEMOVDBFVUQZPIJRRCMKEIEFAUEJRAKRURYVHPZZCLMYK");
    msg.value = 44U;

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
    msg.setTimeStamp(0.7526823887643883);
    msg.setSource(47370U);
    msg.setSourceEntity(132U);
    msg.setDestination(12262U);
    msg.setDestinationEntity(39U);
    msg.name.assign("BZUFPXMYYYBQAFHNJJAUYLLSOYHKDJUHDUMGPILMNUNVMIWKVQSJPSFCPOICOMSZSZSXRLJVAKEMGNDFAGXZLSRXXYESHDGWRFFT");
    msg.value = 49U;

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
    msg.setTimeStamp(0.007402642155129313);
    msg.setSource(50405U);
    msg.setSourceEntity(62U);
    msg.setDestination(6635U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.581910269608469;
    msg.lon = 0.26919120847173283;
    msg.height = 0.9537552838322888;
    msg.x = 0.8426393148343038;
    msg.y = 0.1296758398797888;
    msg.z = 0.1195836009632405;
    msg.phi = 0.5919885099636572;
    msg.theta = 0.8257656092301474;
    msg.psi = 0.7594435885669519;
    msg.u = 0.9061884216068122;
    msg.v = 0.7457341980979659;
    msg.w = 0.6248263284995582;
    msg.vx = 0.6686086125269722;
    msg.vy = 0.6402997446728621;
    msg.vz = 0.010669863336408514;
    msg.p = 0.4410555596015785;
    msg.q = 0.6852174951844677;
    msg.r = 0.5247310144646151;
    msg.depth = 0.4010359505040547;
    msg.alt = 0.042888539137351134;

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
    msg.setTimeStamp(0.06141705322048596);
    msg.setSource(46265U);
    msg.setSourceEntity(5U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.5627392561512532;
    msg.lon = 0.5867143245225999;
    msg.height = 0.53560928590066;
    msg.x = 0.3008186993425158;
    msg.y = 0.5211984321911999;
    msg.z = 0.42245831536580913;
    msg.phi = 0.7705562039820432;
    msg.theta = 0.5459468767885989;
    msg.psi = 0.828992135444939;
    msg.u = 0.7058348568489505;
    msg.v = 0.8894163219429836;
    msg.w = 0.5851214951766298;
    msg.vx = 0.7109302778771409;
    msg.vy = 0.5528693427545368;
    msg.vz = 0.037721461519340194;
    msg.p = 0.26921329196046373;
    msg.q = 0.639504756459806;
    msg.r = 0.7610465622460281;
    msg.depth = 0.5338513147012542;
    msg.alt = 0.014445848411305695;

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
    msg.setTimeStamp(0.09345313199948846);
    msg.setSource(3480U);
    msg.setSourceEntity(204U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.9290606620409152;
    msg.lon = 0.9212852485541609;
    msg.height = 0.1424364177355707;
    msg.x = 0.44384581050505945;
    msg.y = 0.36341756717191775;
    msg.z = 0.024504434484129534;
    msg.phi = 0.7791613404508904;
    msg.theta = 0.7923871527392643;
    msg.psi = 0.7341424255208153;
    msg.u = 0.0925243547298833;
    msg.v = 0.4196986721356375;
    msg.w = 0.01640036451506477;
    msg.vx = 0.17297616933465376;
    msg.vy = 0.7239104128538364;
    msg.vz = 0.03604385899851803;
    msg.p = 0.9814488060000961;
    msg.q = 0.35679739350789563;
    msg.r = 0.9159328274401464;
    msg.depth = 0.0002738208601208436;
    msg.alt = 0.42235323301934236;

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
    msg.setTimeStamp(0.7869629818967412);
    msg.setSource(58881U);
    msg.setSourceEntity(19U);
    msg.setDestination(56137U);
    msg.setDestinationEntity(210U);
    msg.x = 0.2350888778162531;
    msg.y = 0.7389153497942311;
    msg.z = 0.9951340728312229;

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
    msg.setTimeStamp(0.9593744887329507);
    msg.setSource(49996U);
    msg.setSourceEntity(41U);
    msg.setDestination(30883U);
    msg.setDestinationEntity(20U);
    msg.x = 0.570353732653765;
    msg.y = 0.9963780425656492;
    msg.z = 0.9845475834547325;

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
    msg.setTimeStamp(0.3522347099703532);
    msg.setSource(30475U);
    msg.setSourceEntity(196U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(192U);
    msg.x = 0.6412289413290057;
    msg.y = 0.08002870851009558;
    msg.z = 0.6742180895415749;

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
    msg.setTimeStamp(0.5103748473423044);
    msg.setSource(7592U);
    msg.setSourceEntity(191U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(130U);
    msg.value = 0.691105965807701;

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
    msg.setTimeStamp(0.7484512773492139);
    msg.setSource(55248U);
    msg.setSourceEntity(12U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(150U);
    msg.value = 0.6975268946399125;

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
    msg.setTimeStamp(0.2782689884444125);
    msg.setSource(32681U);
    msg.setSourceEntity(159U);
    msg.setDestination(29974U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4251543436646794;

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
    msg.setTimeStamp(0.23527641310193093);
    msg.setSource(22214U);
    msg.setSourceEntity(191U);
    msg.setDestination(17650U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3229892460646363;

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
    msg.setTimeStamp(0.23645617855223477);
    msg.setSource(63237U);
    msg.setSourceEntity(147U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9590044662161543;

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
    msg.setTimeStamp(0.8197919181160002);
    msg.setSource(9863U);
    msg.setSourceEntity(77U);
    msg.setDestination(12073U);
    msg.setDestinationEntity(48U);
    msg.value = 0.23002641714230831;

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
    msg.setTimeStamp(0.8674138348783216);
    msg.setSource(13620U);
    msg.setSourceEntity(0U);
    msg.setDestination(33708U);
    msg.setDestinationEntity(233U);
    msg.x = 0.550195733311056;
    msg.y = 0.2520243803428549;
    msg.z = 0.6693455821206676;
    msg.phi = 0.30642005820958773;
    msg.theta = 0.39043256156237094;
    msg.psi = 0.8051735551361949;
    msg.p = 0.8218275913471434;
    msg.q = 0.6369937332905076;
    msg.r = 0.6543057029269542;
    msg.u = 0.5915294476724645;
    msg.v = 0.5954491812264395;
    msg.w = 0.5556271326228004;
    msg.bias_psi = 0.935584585740052;
    msg.bias_r = 0.9311979588591471;

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
    msg.setTimeStamp(0.4407171839085444);
    msg.setSource(47335U);
    msg.setSourceEntity(179U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(181U);
    msg.x = 0.9032218706075501;
    msg.y = 0.4838441481442275;
    msg.z = 0.8269410206729485;
    msg.phi = 0.3093636891659092;
    msg.theta = 0.7554154515273995;
    msg.psi = 0.4024656472634801;
    msg.p = 0.6979467990697195;
    msg.q = 0.8356857712536991;
    msg.r = 0.004260544597350258;
    msg.u = 0.4374150999310503;
    msg.v = 0.8852886025441117;
    msg.w = 0.11419769440890026;
    msg.bias_psi = 0.7752632882645901;
    msg.bias_r = 0.2408714234445647;

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
    msg.setTimeStamp(0.1318057645334999);
    msg.setSource(49744U);
    msg.setSourceEntity(113U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(88U);
    msg.x = 0.3773167400812546;
    msg.y = 0.9787584242481434;
    msg.z = 0.8802145893202549;
    msg.phi = 0.24307239687407112;
    msg.theta = 0.2956221189082274;
    msg.psi = 0.2562465175357368;
    msg.p = 0.8430427032191833;
    msg.q = 0.17784500012047333;
    msg.r = 0.37978515000832647;
    msg.u = 0.4572388064186905;
    msg.v = 0.8796458179026782;
    msg.w = 0.5859235900392734;
    msg.bias_psi = 0.8172563590362758;
    msg.bias_r = 0.8293549372329482;

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
    msg.setTimeStamp(0.7527761388908649);
    msg.setSource(28080U);
    msg.setSourceEntity(112U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(217U);
    msg.bias_psi = 0.7180257689498243;
    msg.bias_r = 0.803469098939222;
    msg.cog = 0.24865310250196226;
    msg.cyaw = 0.41345233760306555;
    msg.lbl_rej_level = 0.685573213286728;
    msg.gps_rej_level = 0.1886567171243626;
    msg.custom_x = 0.30813947900627736;
    msg.custom_y = 0.8532098066172377;
    msg.custom_z = 0.846460906689523;

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
    msg.setTimeStamp(0.08913218118446209);
    msg.setSource(11703U);
    msg.setSourceEntity(195U);
    msg.setDestination(28379U);
    msg.setDestinationEntity(38U);
    msg.bias_psi = 0.37842363960032743;
    msg.bias_r = 0.2532889543465182;
    msg.cog = 0.14146951897128268;
    msg.cyaw = 0.3590837853717165;
    msg.lbl_rej_level = 0.036503095704707667;
    msg.gps_rej_level = 0.7822027437782948;
    msg.custom_x = 0.3384546215862573;
    msg.custom_y = 0.31435815631415465;
    msg.custom_z = 0.6721573832626352;

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
    msg.setTimeStamp(0.5884709903496459);
    msg.setSource(18703U);
    msg.setSourceEntity(116U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.7518838972901238;
    msg.bias_r = 0.5083778137939527;
    msg.cog = 0.578142752977686;
    msg.cyaw = 0.7485960194704653;
    msg.lbl_rej_level = 0.8262191324626343;
    msg.gps_rej_level = 0.6055615830782487;
    msg.custom_x = 0.4712711576599957;
    msg.custom_y = 0.08020782975576157;
    msg.custom_z = 0.2100293643438118;

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
    msg.setTimeStamp(0.8869888546890397);
    msg.setSource(41549U);
    msg.setSourceEntity(214U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(28U);
    msg.utc_time = 0.30184377984361255;
    msg.reason = 182U;

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
    msg.setTimeStamp(0.2901765674063499);
    msg.setSource(29747U);
    msg.setSourceEntity(253U);
    msg.setDestination(19687U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.701088589267087;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.5342729392786744);
    msg.setSource(13975U);
    msg.setSourceEntity(245U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(227U);
    msg.utc_time = 0.5964188968549228;
    msg.reason = 66U;

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
    msg.setTimeStamp(0.16250633452905838);
    msg.setSource(5107U);
    msg.setSourceEntity(13U);
    msg.setDestination(32072U);
    msg.setDestinationEntity(171U);
    msg.id = 89U;
    msg.range = 0.28305139233072685;
    msg.acceptance = 183U;

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
    msg.setTimeStamp(0.3826621150878692);
    msg.setSource(43776U);
    msg.setSourceEntity(223U);
    msg.setDestination(41161U);
    msg.setDestinationEntity(218U);
    msg.id = 247U;
    msg.range = 0.627698004124088;
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
    msg.setTimeStamp(0.29415110439847814);
    msg.setSource(53560U);
    msg.setSourceEntity(146U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(110U);
    msg.id = 135U;
    msg.range = 0.4317366020165244;
    msg.acceptance = 127U;

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
    msg.setTimeStamp(0.4470159943446136);
    msg.setSource(8790U);
    msg.setSourceEntity(11U);
    msg.setDestination(46368U);
    msg.setDestinationEntity(101U);
    msg.type = 0U;
    msg.reason = 178U;
    msg.value = 0.11583771494643047;
    msg.timestep = 0.35189867060029767;

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
    msg.setTimeStamp(0.8589040992591622);
    msg.setSource(3638U);
    msg.setSourceEntity(100U);
    msg.setDestination(48415U);
    msg.setDestinationEntity(127U);
    msg.type = 150U;
    msg.reason = 53U;
    msg.value = 0.9277714055671699;
    msg.timestep = 0.42411256192084434;

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
    msg.setTimeStamp(0.4611100720181005);
    msg.setSource(22090U);
    msg.setSourceEntity(249U);
    msg.setDestination(50025U);
    msg.setDestinationEntity(228U);
    msg.type = 92U;
    msg.reason = 186U;
    msg.value = 0.5487759920351776;
    msg.timestep = 0.3310471417289572;

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
    msg.setTimeStamp(0.12688428082308234);
    msg.setSource(20991U);
    msg.setSourceEntity(198U);
    msg.setDestination(9489U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.3166714733923851);
    msg.setSource(15731U);
    msg.setSourceEntity(195U);
    msg.setDestination(29181U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.5074235494250431);
    msg.setSource(51695U);
    msg.setSourceEntity(100U);
    msg.setDestination(43268U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.07989147870972824);
    msg.setSource(32024U);
    msg.setSourceEntity(222U);
    msg.setDestination(19322U);
    msg.setDestinationEntity(64U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IXUZNYWMQITRWZEGYOEGKWAXOGXLHWNXCVJRMRYMDDPEKPBZKFQINREDSNIPQKVSALMJ");
    tmp_msg_0.lat = 0.33840497398544434;
    tmp_msg_0.lon = 0.9357510627867694;
    tmp_msg_0.depth = 0.9893281143417737;
    tmp_msg_0.query_channel = 182U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 59U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5933532455124961;
    msg.y = 0.2036382865177918;
    msg.var_x = 0.8316352098717207;
    msg.var_y = 0.7187633671941694;
    msg.distance = 0.43776158147738675;

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
    msg.setTimeStamp(0.9249942505500537);
    msg.setSource(41378U);
    msg.setSourceEntity(127U);
    msg.setDestination(16951U);
    msg.setDestinationEntity(155U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HNYKUMVDAAEKGYGSSECOTUQRGRHITJNJYJLDAJOCVULVVCQZMPNCUWNBFGMZBYVQDWKQFBIMEAXJDSHHSUIUTXEFBWZUFHJBWPXEQPGBWOVMFKGDYDRPDSOBIYWOLEYHHLXXDQCCQPAHVRQTMEIJKXASFJZITFPOOWBBXASBIKATRYZCGOTZUFFLNNKNMULFZVZRTXEROIOTLMKLKWUQNWXEVGVPKNZPL");
    tmp_msg_0.lat = 0.13329807203064137;
    tmp_msg_0.lon = 0.5598396174239804;
    tmp_msg_0.depth = 0.3851327444239995;
    tmp_msg_0.query_channel = 71U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 36U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.43622681373224714;
    msg.y = 0.3982413061569957;
    msg.var_x = 0.20880902358814113;
    msg.var_y = 0.0677567666923431;
    msg.distance = 0.13543870770272892;

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
    msg.setTimeStamp(0.31434278648017844);
    msg.setSource(7214U);
    msg.setSourceEntity(253U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(149U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GKSSBQVKEVBRURVNKXPAAZMRQSIXPHTUXAEVPLSMZVAIDTCBJECYWSIAXMIIBPUBWRVZWAXZNGRBXWHGTMLFNEAGYXLVKLLMFBEMGGCJWPXHKDTGPOUJIFTJCCBNCOTY");
    tmp_msg_0.lat = 0.13834157948905013;
    tmp_msg_0.lon = 0.6508104847988183;
    tmp_msg_0.depth = 0.7187880490172005;
    tmp_msg_0.query_channel = 169U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.04194536653416048;
    msg.y = 0.924125493033916;
    msg.var_x = 0.9374817337434473;
    msg.var_y = 0.1337146870460999;
    msg.distance = 0.5250351038472469;

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
    msg.setTimeStamp(0.4238324801011608);
    msg.setSource(34072U);
    msg.setSourceEntity(86U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(198U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.040134683318260866);
    msg.setSource(45011U);
    msg.setSourceEntity(27U);
    msg.setDestination(53776U);
    msg.setDestinationEntity(127U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.9815704294462984);
    msg.setSource(28159U);
    msg.setSourceEntity(102U);
    msg.setDestination(57435U);
    msg.setDestinationEntity(119U);
    msg.state = 117U;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.2993269004291891);
    msg.setSource(14599U);
    msg.setSourceEntity(17U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5663277278280764;

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
    msg.setTimeStamp(0.2241409963549622);
    msg.setSource(60183U);
    msg.setSourceEntity(229U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(62U);
    msg.value = 0.23757598666334978;

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
    msg.setTimeStamp(0.4202884019697093);
    msg.setSource(7865U);
    msg.setSourceEntity(125U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(20U);
    msg.value = 0.12155210814452744;

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
    msg.setTimeStamp(0.3553660481570573);
    msg.setSource(517U);
    msg.setSourceEntity(146U);
    msg.setDestination(40639U);
    msg.setDestinationEntity(27U);
    msg.value = 0.14098071387613964;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.7079429367510974);
    msg.setSource(61444U);
    msg.setSourceEntity(226U);
    msg.setDestination(23281U);
    msg.setDestinationEntity(110U);
    msg.value = 0.381610072577632;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.5967612546470573);
    msg.setSource(18559U);
    msg.setSourceEntity(142U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8702058408595235;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.08326409209298435);
    msg.setSource(28883U);
    msg.setSourceEntity(196U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(183U);
    msg.value = 0.3146810925947847;
    msg.speed_units = 237U;

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
    msg.setTimeStamp(0.3647511887479341);
    msg.setSource(41767U);
    msg.setSourceEntity(240U);
    msg.setDestination(42484U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7459707583900184;
    msg.speed_units = 129U;

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
    msg.setTimeStamp(0.08162206601582067);
    msg.setSource(54329U);
    msg.setSourceEntity(226U);
    msg.setDestination(60724U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7845510826321098;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.11628847937506837);
    msg.setSource(55394U);
    msg.setSourceEntity(206U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(149U);
    msg.value = 0.47447308376265096;

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
    msg.setTimeStamp(0.027173716718267293);
    msg.setSource(44267U);
    msg.setSourceEntity(205U);
    msg.setDestination(36010U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4472896752933301;

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
    msg.setTimeStamp(0.552101876441046);
    msg.setSource(41924U);
    msg.setSourceEntity(197U);
    msg.setDestination(43077U);
    msg.setDestinationEntity(14U);
    msg.value = 0.5705016347930778;

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
    msg.setTimeStamp(0.5793708188689763);
    msg.setSource(4677U);
    msg.setSourceEntity(118U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(83U);
    msg.value = 0.08683282186595731;

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
    msg.setTimeStamp(0.32537277568706635);
    msg.setSource(51917U);
    msg.setSourceEntity(52U);
    msg.setDestination(5369U);
    msg.setDestinationEntity(226U);
    msg.value = 0.8856809351783912;

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
    msg.setTimeStamp(0.05022939823074901);
    msg.setSource(57201U);
    msg.setSourceEntity(20U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(129U);
    msg.value = 0.562695127259736;

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
    msg.setTimeStamp(0.1005326016748691);
    msg.setSource(43383U);
    msg.setSourceEntity(149U);
    msg.setDestination(16895U);
    msg.setDestinationEntity(107U);
    msg.value = 0.23729699047395247;

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
    msg.setTimeStamp(0.8295343089213989);
    msg.setSource(12948U);
    msg.setSourceEntity(14U);
    msg.setDestination(38811U);
    msg.setDestinationEntity(226U);
    msg.value = 0.41422717437186785;

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
    msg.setTimeStamp(0.3063932801549357);
    msg.setSource(50098U);
    msg.setSourceEntity(17U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8287122227165344;

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
    msg.setTimeStamp(0.1431817766645137);
    msg.setSource(57929U);
    msg.setSourceEntity(164U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(197U);
    msg.start_lat = 0.4691519464998256;
    msg.start_lon = 0.4723461392207199;
    msg.start_z = 0.3334451211704813;
    msg.start_z_units = 170U;
    msg.end_lat = 0.6686156156364482;
    msg.end_lon = 0.43653140077237906;
    msg.end_z = 0.1643251984076891;
    msg.end_z_units = 177U;
    msg.speed = 0.8435568848910113;
    msg.speed_units = 95U;
    msg.lradius = 0.7658051565742492;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.4953218600827217);
    msg.setSource(28091U);
    msg.setSourceEntity(222U);
    msg.setDestination(44100U);
    msg.setDestinationEntity(16U);
    msg.start_lat = 0.5508606735986804;
    msg.start_lon = 0.8360128691829128;
    msg.start_z = 0.8184179308713163;
    msg.start_z_units = 233U;
    msg.end_lat = 0.26580070013598867;
    msg.end_lon = 0.22206907761945605;
    msg.end_z = 0.0156585181533887;
    msg.end_z_units = 17U;
    msg.speed = 0.9830742347654635;
    msg.speed_units = 41U;
    msg.lradius = 0.6184289911307326;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.15022963536456202);
    msg.setSource(26298U);
    msg.setSourceEntity(14U);
    msg.setDestination(32185U);
    msg.setDestinationEntity(70U);
    msg.start_lat = 0.6718572237613762;
    msg.start_lon = 0.7516154504997642;
    msg.start_z = 0.1931783629976983;
    msg.start_z_units = 190U;
    msg.end_lat = 0.8137796283381167;
    msg.end_lon = 0.030554351240746458;
    msg.end_z = 0.944879060104622;
    msg.end_z_units = 246U;
    msg.speed = 0.4700540404351392;
    msg.speed_units = 68U;
    msg.lradius = 0.5708332238714061;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.9255516452423833);
    msg.setSource(43730U);
    msg.setSourceEntity(25U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(59U);
    msg.x = 0.4117615227896595;
    msg.y = 0.6072855963213633;
    msg.z = 0.5939104785913755;
    msg.k = 0.5027470765396449;
    msg.m = 0.2546974079007651;
    msg.n = 0.22775343485274402;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.018362635335530175);
    msg.setSource(21387U);
    msg.setSourceEntity(119U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(33U);
    msg.x = 0.8846407640964209;
    msg.y = 0.287960038420638;
    msg.z = 0.2350477540934649;
    msg.k = 0.28116017703611373;
    msg.m = 0.7967073454232522;
    msg.n = 0.7537412885622472;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.6736683871911139);
    msg.setSource(37432U);
    msg.setSourceEntity(64U);
    msg.setDestination(25091U);
    msg.setDestinationEntity(40U);
    msg.x = 0.04591455408638623;
    msg.y = 0.21471982981005;
    msg.z = 0.0835486880690508;
    msg.k = 0.7525989383174153;
    msg.m = 0.0809819164941562;
    msg.n = 0.04402041732256112;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.3426773941639334);
    msg.setSource(54098U);
    msg.setSourceEntity(59U);
    msg.setDestination(20937U);
    msg.setDestinationEntity(161U);
    msg.value = 0.6410834263994121;

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
    msg.setTimeStamp(0.6169075784280758);
    msg.setSource(12557U);
    msg.setSourceEntity(73U);
    msg.setDestination(17545U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8723765223366741;

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
    msg.setTimeStamp(0.6308939931947063);
    msg.setSource(62614U);
    msg.setSourceEntity(108U);
    msg.setDestination(3039U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7643512391338683;

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
    msg.setTimeStamp(0.1085437551015751);
    msg.setSource(535U);
    msg.setSourceEntity(50U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(193U);
    msg.u = 0.08299908152552027;
    msg.v = 0.5071632188409337;
    msg.w = 0.011817294430577552;
    msg.p = 0.9628883070486766;
    msg.q = 0.5071628166098521;
    msg.r = 0.11821355486576834;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.10327811532714559);
    msg.setSource(35712U);
    msg.setSourceEntity(100U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(112U);
    msg.u = 0.5623842423068133;
    msg.v = 0.5643821463113955;
    msg.w = 0.520760620400058;
    msg.p = 0.09988483436274131;
    msg.q = 0.27422440142845284;
    msg.r = 0.8819417096856427;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.7146455836604734);
    msg.setSource(57996U);
    msg.setSourceEntity(16U);
    msg.setDestination(6711U);
    msg.setDestinationEntity(8U);
    msg.u = 0.6651745320635629;
    msg.v = 0.8179015646750537;
    msg.w = 0.36681891803082856;
    msg.p = 0.3086285706488153;
    msg.q = 0.5313058753118247;
    msg.r = 0.8776597579172228;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.3578202062997845);
    msg.setSource(31521U);
    msg.setSourceEntity(219U);
    msg.setDestination(19113U);
    msg.setDestinationEntity(126U);
    msg.start_lat = 0.6561564297544096;
    msg.start_lon = 0.6555230828385864;
    msg.start_z = 0.8668736676795034;
    msg.start_z_units = 205U;
    msg.end_lat = 0.13239488538338517;
    msg.end_lon = 0.0362984102796966;
    msg.end_z = 0.4805039169879345;
    msg.end_z_units = 243U;
    msg.lradius = 0.22532958101819744;
    msg.flags = 58U;
    msg.x = 0.0799245888622534;
    msg.y = 0.51827634522299;
    msg.z = 0.7843594018517062;
    msg.vx = 0.7406796578584877;
    msg.vy = 0.06542995127328466;
    msg.vz = 0.5876471603756239;
    msg.course_error = 0.7346645109431194;
    msg.eta = 56500U;

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
    msg.setTimeStamp(0.9308797260551983);
    msg.setSource(499U);
    msg.setSourceEntity(55U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(58U);
    msg.start_lat = 0.9816703383791072;
    msg.start_lon = 0.08734849032847192;
    msg.start_z = 0.08625606582155088;
    msg.start_z_units = 130U;
    msg.end_lat = 0.23928555442274357;
    msg.end_lon = 0.6900078816791816;
    msg.end_z = 0.36878227927287777;
    msg.end_z_units = 201U;
    msg.lradius = 0.09295635690748272;
    msg.flags = 1U;
    msg.x = 0.03434255000993691;
    msg.y = 0.6121490085375675;
    msg.z = 0.13528568444622702;
    msg.vx = 0.3810163352647419;
    msg.vy = 0.5445401155124807;
    msg.vz = 0.26709310568615696;
    msg.course_error = 0.18297109070809237;
    msg.eta = 48766U;

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
    msg.setTimeStamp(0.9169165583887788);
    msg.setSource(35743U);
    msg.setSourceEntity(144U);
    msg.setDestination(46560U);
    msg.setDestinationEntity(184U);
    msg.start_lat = 0.7639456620787086;
    msg.start_lon = 0.33084403093638226;
    msg.start_z = 0.3072041240552029;
    msg.start_z_units = 159U;
    msg.end_lat = 0.12185138762267689;
    msg.end_lon = 0.5961383324534136;
    msg.end_z = 0.6764586603564028;
    msg.end_z_units = 79U;
    msg.lradius = 0.2657380830127247;
    msg.flags = 18U;
    msg.x = 0.9490617760137414;
    msg.y = 0.5731324823866558;
    msg.z = 0.5916476793808542;
    msg.vx = 0.8742128459144108;
    msg.vy = 0.9195582138184943;
    msg.vz = 0.5364125237842694;
    msg.course_error = 0.4861697351897336;
    msg.eta = 14517U;

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
    msg.setTimeStamp(0.3295435865452512);
    msg.setSource(24110U);
    msg.setSourceEntity(201U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(230U);
    msg.k = 0.04506540920657898;
    msg.m = 0.9839675801150901;
    msg.n = 0.5494476455534335;

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
    msg.setTimeStamp(0.5432364340468298);
    msg.setSource(34511U);
    msg.setSourceEntity(28U);
    msg.setDestination(14946U);
    msg.setDestinationEntity(92U);
    msg.k = 0.5102057908115635;
    msg.m = 0.3286512593203964;
    msg.n = 0.5317146726394055;

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
    msg.setTimeStamp(0.6299508819227746);
    msg.setSource(25429U);
    msg.setSourceEntity(105U);
    msg.setDestination(28504U);
    msg.setDestinationEntity(252U);
    msg.k = 0.500084669846758;
    msg.m = 0.9490795792283367;
    msg.n = 0.9175400293564411;

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
    msg.setTimeStamp(0.258355947130921);
    msg.setSource(34602U);
    msg.setSourceEntity(245U);
    msg.setDestination(59385U);
    msg.setDestinationEntity(58U);
    msg.p = 0.968279342506636;
    msg.i = 0.16300111420716556;
    msg.d = 0.6073670286367738;
    msg.a = 0.4632438997324767;

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
    msg.setTimeStamp(0.20357626463580525);
    msg.setSource(59261U);
    msg.setSourceEntity(11U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(105U);
    msg.p = 0.27423101419978646;
    msg.i = 0.03916396282195578;
    msg.d = 0.681187935974426;
    msg.a = 0.18679942089166224;

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
    msg.setTimeStamp(0.6192974546433607);
    msg.setSource(42547U);
    msg.setSourceEntity(89U);
    msg.setDestination(56037U);
    msg.setDestinationEntity(17U);
    msg.p = 0.0773586962462266;
    msg.i = 0.31937563587332773;
    msg.d = 0.7314056591909007;
    msg.a = 0.49794918187059223;

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
    msg.setTimeStamp(0.033647307480739186);
    msg.setSource(52417U);
    msg.setSourceEntity(34U);
    msg.setDestination(9197U);
    msg.setDestinationEntity(244U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.12477310390130236);
    msg.setSource(34880U);
    msg.setSourceEntity(94U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(110U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.83130608874211);
    msg.setSource(63176U);
    msg.setSourceEntity(242U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(199U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.8237423007261657);
    msg.setSource(3929U);
    msg.setSourceEntity(52U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(153U);
    msg.timeout = 51863U;
    msg.lat = 0.4974968983543627;
    msg.lon = 0.9028761262174838;
    msg.z = 0.08190790354950839;
    msg.z_units = 127U;
    msg.speed = 0.7508245182384811;
    msg.speed_units = 196U;
    msg.roll = 0.9826255414746476;
    msg.pitch = 0.812962241654027;
    msg.yaw = 0.7793637072703304;
    msg.custom.assign("IRNWDDXRPCEBHSFTLLRFASBULWXASWHPZGVZXPAHPRZXLYWOPNEYKZUQTBOGYKVTDKOKOZEEPSLNUBZFUQDODUFAKLLJQFXKBQAOIINRHUDVJIMBRCH");

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
    msg.setTimeStamp(0.20884551843690224);
    msg.setSource(57986U);
    msg.setSourceEntity(119U);
    msg.setDestination(40105U);
    msg.setDestinationEntity(197U);
    msg.timeout = 35227U;
    msg.lat = 0.47502524841673854;
    msg.lon = 0.46057572224521637;
    msg.z = 0.8342324329621672;
    msg.z_units = 4U;
    msg.speed = 0.9870369360528269;
    msg.speed_units = 188U;
    msg.roll = 0.0252526051164077;
    msg.pitch = 0.8269369567085896;
    msg.yaw = 0.3283512635409095;
    msg.custom.assign("WTGQZNUVDTJVGJYEMQFFEWKT");

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
    msg.setTimeStamp(0.6276492948998802);
    msg.setSource(61215U);
    msg.setSourceEntity(76U);
    msg.setDestination(1811U);
    msg.setDestinationEntity(31U);
    msg.timeout = 54202U;
    msg.lat = 0.8170768265449373;
    msg.lon = 0.5811602947721033;
    msg.z = 0.866028203610062;
    msg.z_units = 175U;
    msg.speed = 0.10284123578134952;
    msg.speed_units = 183U;
    msg.roll = 0.5805434334196368;
    msg.pitch = 0.8012030623883384;
    msg.yaw = 0.873287777065334;
    msg.custom.assign("AQUUQFPRAOMAFMHFNJTZDBDNLLIBHRABYEESUXHQTGDOIVRERKDFPZTNUAHMHXFIAXJIRPKIVQHITTLWSOEVFLNUYDZXWYCSCKEXLRWLRGPKVWOTPYZGQOFNLBCMTEXVFKRIOZPWQXCTPYMXBOERKEMLFDJUGNSVATHKSUYUJGZQYCANNSWIGJJUVSHOKRDCBBQCZVMAWJKOIC");

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
    msg.setTimeStamp(0.6833188404269949);
    msg.setSource(35226U);
    msg.setSourceEntity(176U);
    msg.setDestination(60035U);
    msg.setDestinationEntity(154U);
    msg.timeout = 48255U;
    msg.lat = 0.24374507265132384;
    msg.lon = 0.8934945143733308;
    msg.z = 0.21039891156287527;
    msg.z_units = 82U;
    msg.speed = 0.007743651951735986;
    msg.speed_units = 28U;
    msg.duration = 22618U;
    msg.radius = 0.12558603019179326;
    msg.flags = 43U;
    msg.custom.assign("UTFFACHOBIPLXUUVOEMFBSHDEMYTHSHYETDZZSJIGFVBXFUMPOEBYRYUTADJJXGIQDKWNOOQVCFEGBQCKPHOWTNWQJHTSLKPMWWZYLXJBNSHZJAAXLVDSXEVIACJYKUBRYGQQHEKXFELRSJWPLMCLZRLKEGAIBDYHP");

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
    msg.setTimeStamp(0.3181945489014316);
    msg.setSource(35037U);
    msg.setSourceEntity(1U);
    msg.setDestination(54718U);
    msg.setDestinationEntity(40U);
    msg.timeout = 23515U;
    msg.lat = 0.055521640411577367;
    msg.lon = 0.2976490050985149;
    msg.z = 0.00546194536822131;
    msg.z_units = 126U;
    msg.speed = 0.6321924078000423;
    msg.speed_units = 157U;
    msg.duration = 3365U;
    msg.radius = 0.2373216091780035;
    msg.flags = 166U;
    msg.custom.assign("SEFPNWLSJFNYGEROPZDQAUZIFTWBGDAZVGSAURMSVAGLEROGEBTXJWABDCIQKDJXKDAGMSCSNZHQIAINVRVXZVDTPHKFEHIMQARTYXKGSHMQJSHPCKYNXYQOZHTMBSACYGKQMRZVMIOIYUXJEUICTHLOVDWVKGYYFOTUUBNJRBHKDXMVWNWXLCACPCBXTOPNIOHTLZOLDLFZGJODVLLWEFQURYQPTWZF");

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
    msg.setTimeStamp(0.23521679757185687);
    msg.setSource(43629U);
    msg.setSourceEntity(124U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(216U);
    msg.timeout = 31129U;
    msg.lat = 0.9140042190159307;
    msg.lon = 0.6954414713456755;
    msg.z = 0.24370742446615545;
    msg.z_units = 8U;
    msg.speed = 0.6911865877035408;
    msg.speed_units = 53U;
    msg.duration = 26540U;
    msg.radius = 0.1323259810563978;
    msg.flags = 30U;
    msg.custom.assign("KQHGZQRYZWLJJGTDXCZDAPVJNVMVPNFEGEANDWLEMVXCCUQYYHJJZAKFLMOEXDMXIUGFUNHKUKWZXBWWISUPPHMFYEJODNNYOZQSLFAZPIOSVBNUUGTEFUVODIDXYJWGLHASTJLBSCORGOEBYRHSIDMWGLCPNVBFUAERCIPWTRVPKYQQXGHNDTQEVUJYXWKCEQSTPBRGQKKZMRHRNJBCACFATBSMFKALWQSLRBCIHDMATFHXMOZKBPZLX");

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
    msg.setTimeStamp(0.8287492947558568);
    msg.setSource(14597U);
    msg.setSourceEntity(202U);
    msg.setDestination(51076U);
    msg.setDestinationEntity(151U);
    msg.custom.assign("NENNCPXGQLBEQDINTRCOVYGHMQCFZTTGDGOEGUAYSYKSQMPUEVTGBZEOCELZAIMIPVFPRDXRSXANBDYTRQFRQGVCHCYAULYIUVEOIWBZWXUKFSNDJTASRHXUDKNBLDLIEPMWPXWPLBFS");

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
    msg.setTimeStamp(0.09388120646663767);
    msg.setSource(53708U);
    msg.setSourceEntity(59U);
    msg.setDestination(60698U);
    msg.setDestinationEntity(18U);
    msg.custom.assign("NNMAWFXMPQXRWHTEOZIUZYLSEZCHSNXAZCQRCLCCUPZLPEIGRVMZFDKLNVAKPAMIYZJVQOLIWWFPSFRNIDPVMVRBSZSGIKIEKEKDHFREIKAWQXLGGUDUQLEIYRUGGAHKCAMABWWREVOBLASXVFGMMBNUITTUFDJBVHQOYATEPYJGQDJTFO");

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
    msg.setTimeStamp(0.5782402306968998);
    msg.setSource(42349U);
    msg.setSourceEntity(33U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(169U);
    msg.custom.assign("ZJWCQWSTBJWUBQKTFHVNPBUTQKGIXZOPBTECIDKXYRESMHRYLPPXDRRAZGBXZWLKHTJAPQQAJJUKDGWHWBLERHASLBARLNQNMMGHNJEKVHSIOUWXQBTMWSFQOVDSCEXOIAFPNCNYQVVCQEZUUEZDWDZGXL");

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
    msg.setTimeStamp(0.665981328820785);
    msg.setSource(52553U);
    msg.setSourceEntity(168U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(30U);
    msg.timeout = 9639U;
    msg.lat = 0.8252987469550639;
    msg.lon = 0.7525293515577935;
    msg.z = 0.6687812968435745;
    msg.z_units = 138U;
    msg.duration = 55959U;
    msg.speed = 0.4580793409192463;
    msg.speed_units = 3U;
    msg.type = 136U;
    msg.radius = 0.9841740040884391;
    msg.length = 0.6960395266398633;
    msg.bearing = 0.3474948277456571;
    msg.direction = 195U;
    msg.custom.assign("IBLLTKRGYLADUXMZZYTZVKJWRSQSYMMATBTSYBFGKUJBDZOYOOAVQCJEZITSKKIHHXRM");

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
    msg.setTimeStamp(0.1221198894294937);
    msg.setSource(36075U);
    msg.setSourceEntity(174U);
    msg.setDestination(49371U);
    msg.setDestinationEntity(145U);
    msg.timeout = 19230U;
    msg.lat = 0.6270745607006577;
    msg.lon = 0.8278063526940299;
    msg.z = 0.7641690666744448;
    msg.z_units = 212U;
    msg.duration = 64662U;
    msg.speed = 0.7763319046551594;
    msg.speed_units = 45U;
    msg.type = 183U;
    msg.radius = 0.04867685762385454;
    msg.length = 0.31905794355472894;
    msg.bearing = 0.36657991831377534;
    msg.direction = 74U;
    msg.custom.assign("GLYQSGCTYEMDECYNXBFKRNYEHPMFIQOXVQGRDBLDRHLCUGTXNATVTBLSARIEGPUSPJAIAVXOLQSWLVTZNRILZXAIBZQHOMOVIDEINSWFJASPHJSVJRHEUOWQQIDPUGNZJUUHWUOOGRRGYKBDKVAJOPZPMBLTCDNWPGYWZWCNHXSQMJWAFXTSYVGHFPQCMSBTZEFTHJXEWNUYRLCXCFKBDH");

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
    msg.setTimeStamp(0.9529806525698862);
    msg.setSource(26133U);
    msg.setSourceEntity(118U);
    msg.setDestination(29657U);
    msg.setDestinationEntity(14U);
    msg.timeout = 41365U;
    msg.lat = 0.1370005949509272;
    msg.lon = 0.9278583291967982;
    msg.z = 0.7223839836132545;
    msg.z_units = 210U;
    msg.duration = 9454U;
    msg.speed = 0.2120553659267621;
    msg.speed_units = 2U;
    msg.type = 203U;
    msg.radius = 0.8041924231112854;
    msg.length = 0.9760960880953136;
    msg.bearing = 0.8637476509821866;
    msg.direction = 63U;
    msg.custom.assign("EPIZKSXEYFQUGNUHFAQLWTZAFGTDWDAYRHUVASQQSIZQFGEDTFAYSPCYAFFTXIODYYVHODCKWUZVVQILKIXBXRHGCJGOMQEFRKJXXYGXLWTWEBIYGCMLLUHPLNHRVDTTNXUNWLFCTPZMPDUGVXIBEZRQBRHNARUWBIMMCISWKSCJOMBOVPPNXTEKHOEPRSBVVONMWEKLPMDYDTZJCLJKYGZNDN");

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
    msg.setTimeStamp(0.900074739276562);
    msg.setSource(40174U);
    msg.setSourceEntity(199U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(128U);
    msg.duration = 16717U;
    msg.custom.assign("FZBBBVAUMYXAMDXRIVRUFYNKEIANSJTOORVVRLLVRFBBZNWLJHWDOYGHJEQHVWIMWPDECZAINEGXPFTP");

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
    msg.setTimeStamp(0.36510715636175706);
    msg.setSource(58571U);
    msg.setSourceEntity(67U);
    msg.setDestination(57516U);
    msg.setDestinationEntity(30U);
    msg.duration = 38026U;
    msg.custom.assign("LBQAKZIUDOCXUVBDEKLSKNNIMCBADBGNISASWTDJGOCQHELWUEDLPLALZOSCKXUTMVHMHKRKQTXHXFAZIECUCBFWYKJOUUTPDPQRBTMNYZMJURVSAGLQJSPXCYSNZROGP");

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
    msg.setTimeStamp(0.7398287381807931);
    msg.setSource(15014U);
    msg.setSourceEntity(191U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(40U);
    msg.duration = 63812U;
    msg.custom.assign("EXTAJEKUMDDWNKWSEBMAJTGYALEMZFQHZFMINPJKPJBYDBIDRIVVOZXLZQRUUEZSLKSIARLEJPRHVKO");

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
    msg.setTimeStamp(0.15055390533876756);
    msg.setSource(50657U);
    msg.setSourceEntity(45U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(57U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.12367863245986788;
    msg.control.set(tmp_msg_0);
    msg.duration = 4582U;
    msg.custom.assign("NDIJKQFMEPAGRVUCANFWHXUSAFYARXOHSLKZENKIXTKKFBBQVHTSMUTTFRGUDFRECWLNDAGVPYKQSMHOTWIJGEPFRUZBPSLVBJJNKFSPLCP");

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
    msg.setTimeStamp(0.9558926515160961);
    msg.setSource(32868U);
    msg.setSourceEntity(161U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(249U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.43238667468224523;
    tmp_msg_0.z_units = 25U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45291U;
    msg.custom.assign("KAVWWDMBQIXDDXPZEWRYDZCFGQJQRUYPKKUDTWVAIAMGYJDKOWSATIMSZBXIQQPAEVRIWYTFYECHYKZULWNYFJPSTPFHSCMLLQCGGVXFOOROWZTTQUBXDUARLCFLCRUAAYNQJIXFJGGLUNAREGZOXSFIOHCIJTIUDBKXZMQEEMUBNOZPSEHJLUBWFQEGAJJRHBXBYHGNMMYSNKNLVEVWOPPVTLCCRPDBMFZSMZHLIONCHVVXVJTHHPKBN");

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
    msg.setTimeStamp(0.8184579131369827);
    msg.setSource(52684U);
    msg.setSourceEntity(60U);
    msg.setDestination(13068U);
    msg.setDestinationEntity(69U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46439877934635665;
    tmp_msg_0.speed_units = 237U;
    msg.control.set(tmp_msg_0);
    msg.duration = 37442U;
    msg.custom.assign("LXVAAEKPJRPDGSLSFOOYNQRDJQBIJWKBUVDXWJNFUIKCEMSYCRHOJMIUOSAWCRCJRRLGBGUGKZLNQYEMWQVDDILOVUOEDZIYVUNLJIQQRZXBFGYCESMLYDMKDCKUNHIWWPVGCNSNZIEIZSAYWHEVHZHQAHNPUNXKVMETTAXCJPBHOTYRNPWLXFOUTXZTMDEPPUVHXLYPIFRQBKMHVRGZKQMSQSBTOTBTBPJGGAD");

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
    msg.setTimeStamp(0.2520302440822162);
    msg.setSource(46303U);
    msg.setSourceEntity(3U);
    msg.setDestination(27560U);
    msg.setDestinationEntity(110U);
    msg.timeout = 32877U;
    msg.lat = 0.7595883408070174;
    msg.lon = 0.45701993318117273;
    msg.z = 0.5496188261752168;
    msg.z_units = 243U;
    msg.speed = 0.09740136421808054;
    msg.speed_units = 41U;
    msg.bearing = 0.3060633542848379;
    msg.cross_angle = 0.12840956170995899;
    msg.width = 0.3126488205779182;
    msg.length = 0.1897708846137015;
    msg.hstep = 0.5839731848874732;
    msg.coff = 159U;
    msg.alternation = 121U;
    msg.flags = 14U;
    msg.custom.assign("IAYRHKKBHXXSCBGFLMGCQYKUHSZCEAJIWADGSVTXYXETIKRBFLKLCIYQWOSVKTLLFZKQICMBLKHJZDSOOFRZYVROMMHNHPDNJUZPDBIQOREUPEOHRCPYGMIUPSZFQNSWE");

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
    msg.setTimeStamp(0.1346865851373873);
    msg.setSource(44055U);
    msg.setSourceEntity(98U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(26U);
    msg.timeout = 947U;
    msg.lat = 0.2884943406548194;
    msg.lon = 0.23166806157086783;
    msg.z = 0.2293368312209081;
    msg.z_units = 194U;
    msg.speed = 0.09569071522374395;
    msg.speed_units = 132U;
    msg.bearing = 0.441629958978786;
    msg.cross_angle = 0.19931681842010862;
    msg.width = 0.03525072921888195;
    msg.length = 0.27548887641391273;
    msg.hstep = 0.06404720422349308;
    msg.coff = 23U;
    msg.alternation = 85U;
    msg.flags = 143U;
    msg.custom.assign("MRSVBINVZKYOJKDOAUYDTPTDWZSNHCKPDRWXDDTFJMDMAPWNLMABJEGIWKFHPOHOKOXYNYEZQGXLIAGRCBJNZCMQPVFEAPCTGCTNSVWTVLP");

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
    msg.setTimeStamp(0.8391526071404498);
    msg.setSource(10824U);
    msg.setSourceEntity(123U);
    msg.setDestination(53807U);
    msg.setDestinationEntity(235U);
    msg.timeout = 47895U;
    msg.lat = 0.8253990059423046;
    msg.lon = 0.47236304202651036;
    msg.z = 0.7064416535904231;
    msg.z_units = 191U;
    msg.speed = 0.7847656116526583;
    msg.speed_units = 115U;
    msg.bearing = 0.6448778730161842;
    msg.cross_angle = 0.6205290168268404;
    msg.width = 0.6926519298875604;
    msg.length = 0.6575076467195131;
    msg.hstep = 0.11629837630675566;
    msg.coff = 179U;
    msg.alternation = 254U;
    msg.flags = 139U;
    msg.custom.assign("JXVNINCTRUMNUDACXMXCCBZRAZUBDLXWPITAXBQRBEZUBIMYFTOIPXEVLVWXSDIQBSKMEYZ");

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
    msg.setTimeStamp(0.9958147733908923);
    msg.setSource(12492U);
    msg.setSourceEntity(117U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(229U);
    msg.timeout = 65029U;
    msg.lat = 0.5149301556423963;
    msg.lon = 0.8452151975729191;
    msg.z = 0.04333127160443895;
    msg.z_units = 217U;
    msg.speed = 0.35592923931390186;
    msg.speed_units = 124U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7384262863465253;
    tmp_msg_0.y = 0.9026559118460172;
    tmp_msg_0.z = 0.08697807594061102;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PRCXNMOHLLPOEASULDBKXXIBAFWCZMYYGNSDGLNBKVHGDOPFTKPEZAVVTROWVVDDZWNZQCFCLAYJVZEGOSTHNYVRARRRXWUIUQFUSNHJZLYUTIOYQOXAFBFJVQABZJEQMQLGQICJUXOFZEECMSFVTUOWKNREEEXDZATUPUOSCMRINGQHBGWHTBAAGPISIHYTPXRTKJIDRBXKJMPKQPJFLBDGNLVCLTBMHXJWZHK");

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
    msg.setTimeStamp(0.3059548605577773);
    msg.setSource(57466U);
    msg.setSourceEntity(177U);
    msg.setDestination(49491U);
    msg.setDestinationEntity(166U);
    msg.timeout = 37200U;
    msg.lat = 0.9507002981931065;
    msg.lon = 0.5632199427900182;
    msg.z = 0.03815207615681959;
    msg.z_units = 216U;
    msg.speed = 0.12320084254207775;
    msg.speed_units = 233U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9236526508356837;
    tmp_msg_0.y = 0.6956124275028511;
    tmp_msg_0.z = 0.10802814107076775;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JUZLMHXBOMRQRHOFFPEXWGQDJPRXPIBCNTAWOIQZESVXKUXLJEZQMKSYLJJDFQDUTBUCSSJOELQBDMEITDDXPECWLAUYGLFBUZQMBALFAKWVHVVYNSPGZKMZYRXHCZFZSPDFTCYPRGIRPYHMHEKINNRFBCMGVCXOGQIAUDNCYJHSVPOITSQSGVMOZDWBHNRVTAENFGYWTUKNLVBIZYBCIFQXMANKEJUWJWDJHEXOHWIAVSTAWGOYUPTGLLNR");

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
    msg.setTimeStamp(0.5543032810023435);
    msg.setSource(13938U);
    msg.setSourceEntity(203U);
    msg.setDestination(54471U);
    msg.setDestinationEntity(238U);
    msg.timeout = 34823U;
    msg.lat = 0.7013207110734464;
    msg.lon = 0.47305856531048096;
    msg.z = 0.2729947996034058;
    msg.z_units = 253U;
    msg.speed = 0.7888170294965217;
    msg.speed_units = 178U;
    msg.custom.assign("SWJDSUMWTKCSYZOIOOUIIAFFOKNMBESWVVTKYIEDDYVTCAVALPDYDMACGYQWSVTCGIKLTAZVQKTPSHHNOZLBIFLWHPTCJHZJHVGPCMVQEUMLFFFTHBCDJRBXJUCCSKOAPABHBCYZHOKWNRVJGKHODUQZILYIJQRIMRXPNGWWSWFFYDWERXRZDPZDGXUVLEQEEELBLJFGME");

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
    msg.setTimeStamp(0.256011481559166);
    msg.setSource(37006U);
    msg.setSourceEntity(67U);
    msg.setDestination(13274U);
    msg.setDestinationEntity(245U);
    msg.x = 0.5455711448586326;
    msg.y = 0.5629485650788505;
    msg.z = 0.8665863001601444;

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
    msg.setTimeStamp(0.6667460569698189);
    msg.setSource(13878U);
    msg.setSourceEntity(200U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(186U);
    msg.x = 0.4759035915332398;
    msg.y = 0.11817694445406501;
    msg.z = 0.37897436164921505;

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
    msg.setTimeStamp(0.7276406286873446);
    msg.setSource(63579U);
    msg.setSourceEntity(216U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(237U);
    msg.x = 0.9289870687116321;
    msg.y = 0.4689907587176456;
    msg.z = 0.7514782712507854;

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
    msg.setTimeStamp(0.6621247016430041);
    msg.setSource(44489U);
    msg.setSourceEntity(247U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(12U);
    msg.timeout = 47793U;
    msg.lat = 0.6214715423953615;
    msg.lon = 0.0271357046683538;
    msg.z = 0.6911098536472698;
    msg.z_units = 179U;
    msg.amplitude = 0.8783008794926782;
    msg.pitch = 0.33555375916925545;
    msg.speed = 0.6847314338128502;
    msg.speed_units = 41U;
    msg.custom.assign("KFGQZVZWQBGQGWSOAXPYORPTURKTNIQRHGZVDWGXMZNLXJYXPWZVMXFXDWRVCMUIDMKPLQFSHGRCRAPLTGUBONSULNOTJQKKUACLYHSHNENRSCOAIEJOGEEKYMVAURDXENEPPIFPHNSDGSZOBJCACXMZKTYJVEHFJJTHFKWLTBAYBSQ");

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
    msg.setTimeStamp(0.8893529009243016);
    msg.setSource(40092U);
    msg.setSourceEntity(60U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(248U);
    msg.timeout = 64798U;
    msg.lat = 0.6210611785519486;
    msg.lon = 0.916358486604016;
    msg.z = 0.4120269412076146;
    msg.z_units = 233U;
    msg.amplitude = 0.18459580144118615;
    msg.pitch = 0.026177967007820824;
    msg.speed = 0.6572045068257617;
    msg.speed_units = 30U;
    msg.custom.assign("GACXPTPCSDDKQWACCW");

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
    msg.setTimeStamp(0.16770704111280088);
    msg.setSource(65174U);
    msg.setSourceEntity(5U);
    msg.setDestination(26560U);
    msg.setDestinationEntity(3U);
    msg.timeout = 57082U;
    msg.lat = 0.7812964515410512;
    msg.lon = 0.30467132039140177;
    msg.z = 0.6803088008679585;
    msg.z_units = 154U;
    msg.amplitude = 0.7768492208638255;
    msg.pitch = 0.4476522726851525;
    msg.speed = 0.4851152185573784;
    msg.speed_units = 244U;
    msg.custom.assign("URBONGCKPKOSCKTBGUXMVZXKDBHKIGIKTXEDJTAMFPPVVMCABRDXXOLWCXHFVHCGMDOJEYQJAQYLNURSPAHBUTGPIZEGCRQDYBVJKZCMITDNWXBQE");

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
    msg.setTimeStamp(0.9382357108725343);
    msg.setSource(9634U);
    msg.setSourceEntity(174U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.2468717954346018);
    msg.setSource(34203U);
    msg.setSourceEntity(1U);
    msg.setDestination(58099U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.8144663201527015);
    msg.setSource(10767U);
    msg.setSourceEntity(231U);
    msg.setDestination(17670U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.47969022267599004);
    msg.setSource(43438U);
    msg.setSourceEntity(228U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.4988242773232031;
    msg.lon = 0.7171693844251331;
    msg.z = 0.19908696296720796;
    msg.z_units = 55U;
    msg.radius = 0.31621014302840544;
    msg.duration = 2879U;
    msg.speed = 0.1334690788867695;
    msg.speed_units = 112U;
    msg.custom.assign("XGCHTTMZZUHGJAVNLKJQNXDPYWQYEAJSVAJXBTEPSSHRRZRQEJULYNSWTSOQWZWLDPSKPDKPFHZZCRHTBJFOVARKWJGOSDBOKCQXIUMKATUUPXNYCGUCODRMLSDXHUPMFTYUGHLROYYHKSVGCZFIBETCPIBKOFNLXZTIAVKLWYJIRQMVJEWCSCPGBMNOAEYICMEBQAQEFUNH");

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
    msg.setTimeStamp(0.48337162946634193);
    msg.setSource(18158U);
    msg.setSourceEntity(245U);
    msg.setDestination(3663U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.5050107803913463;
    msg.lon = 0.33688243320757016;
    msg.z = 0.9960880602046887;
    msg.z_units = 126U;
    msg.radius = 0.06011057866347691;
    msg.duration = 3831U;
    msg.speed = 0.5142073813248514;
    msg.speed_units = 75U;
    msg.custom.assign("MEYQQQTLQIFVOOHNBNDQJHJVAITLFOLVMCRWNNHCQKYOFXVPMSLFEYMISZFRNDAJBUGGAZPJDUDYWBEXOSIGVKKBOYQCJAKVBFIBOGBGIZRHXNRCSTWTRJOAIKFOLAXAMJXEXTRJCRSHDUAGXHKULCRKJYVSKZZETEYWN");

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
    msg.setTimeStamp(0.5342879196288499);
    msg.setSource(13325U);
    msg.setSourceEntity(30U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.5765346283519983;
    msg.lon = 0.04235586820034987;
    msg.z = 0.8348204865013581;
    msg.z_units = 22U;
    msg.radius = 0.5637137987105122;
    msg.duration = 43291U;
    msg.speed = 0.9261284704917303;
    msg.speed_units = 38U;
    msg.custom.assign("VRBVHYPTSOPXRINTMLTJMRGIAFHAKXGUEEFVJWRQPQOUMMETSLDZIUEBCLFLWIQHHKUEZGWPUNEUKKJPJVDBDVWVVXLAJXWCZMAGGLOQRJNNATASGZBQXNZFSINXOZOMZDAPQCSYHYA");

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
    msg.setTimeStamp(0.6277107079128318);
    msg.setSource(61251U);
    msg.setSourceEntity(186U);
    msg.setDestination(3034U);
    msg.setDestinationEntity(60U);
    msg.timeout = 15823U;
    msg.flags = 75U;
    msg.lat = 0.20587149193736864;
    msg.lon = 0.5228201108179183;
    msg.start_z = 0.5782068467483323;
    msg.start_z_units = 132U;
    msg.end_z = 0.23768459152622756;
    msg.end_z_units = 115U;
    msg.radius = 0.8745316194092794;
    msg.speed = 0.21022848613845135;
    msg.speed_units = 179U;
    msg.custom.assign("WSGFBKJBTUIKCNTCBEQQTZCZFHSREVURDN");

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
    msg.setTimeStamp(0.10421551300287035);
    msg.setSource(18444U);
    msg.setSourceEntity(187U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(199U);
    msg.timeout = 55565U;
    msg.flags = 125U;
    msg.lat = 0.9575435178533975;
    msg.lon = 0.505519049948937;
    msg.start_z = 0.16170255882607487;
    msg.start_z_units = 111U;
    msg.end_z = 0.14080519435187755;
    msg.end_z_units = 171U;
    msg.radius = 0.6535967311059598;
    msg.speed = 0.6887125737090469;
    msg.speed_units = 131U;
    msg.custom.assign("TKTIHBANYSLJWQNZGDKAPDPVYBZYZIGDWWEIAKQVAPLZRMGCWENSEBFPEERMMXBMTH");

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
    msg.setTimeStamp(0.8011547926006742);
    msg.setSource(4U);
    msg.setSourceEntity(212U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(136U);
    msg.timeout = 56982U;
    msg.flags = 67U;
    msg.lat = 0.9703718398901624;
    msg.lon = 0.625094563218546;
    msg.start_z = 0.290573764976772;
    msg.start_z_units = 26U;
    msg.end_z = 0.92164961850102;
    msg.end_z_units = 159U;
    msg.radius = 0.47427750005784064;
    msg.speed = 0.4620219407827293;
    msg.speed_units = 120U;
    msg.custom.assign("GFIQUABOQASAQRGVXEIKNCHBXDXU");

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
    msg.setTimeStamp(0.8241086370846296);
    msg.setSource(48554U);
    msg.setSourceEntity(88U);
    msg.setDestination(58431U);
    msg.setDestinationEntity(77U);
    msg.timeout = 64641U;
    msg.lat = 0.5555514085060727;
    msg.lon = 0.9202841779159903;
    msg.z = 0.5816213464539762;
    msg.z_units = 52U;
    msg.speed = 0.9028810210126521;
    msg.speed_units = 109U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4357212104703082;
    tmp_msg_0.y = 0.8094977650588393;
    tmp_msg_0.z = 0.4418834034416561;
    tmp_msg_0.t = 0.4323111290268823;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BVPRILHDYFXGFIQYAPIWNKYEWVLBLIBILLCUNNZAJTWLMQSCPVXEESQRXZJRVCFLOCASFIHXDMDSJCKZNDJGFWSBBRTEZKTINNDXZNYFUZFLQZBEKDOHZTJHRGVGUSWQNQMGQOWPEEAGMTODJMJCCADKSXYYJFMWBCOXEAPSLIMPUKNRYBPQWMEV");

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
    msg.setTimeStamp(0.13158098353791348);
    msg.setSource(33412U);
    msg.setSourceEntity(172U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(11U);
    msg.timeout = 32232U;
    msg.lat = 0.10030469158080557;
    msg.lon = 0.09005251805688919;
    msg.z = 0.7429688422611432;
    msg.z_units = 147U;
    msg.speed = 0.6073239802365138;
    msg.speed_units = 26U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5128167665159056;
    tmp_msg_0.y = 0.4882900741393259;
    tmp_msg_0.z = 0.11676861901612368;
    tmp_msg_0.t = 0.6165783316090785;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TTXLHEWYQUSHNMNRVFONAPYDDWMSTTIDWMQPLRSWZNHBIUHQQCGBGBPMOEXREUEUIWLPFKBZBAVWUGGSJRNQEARWSPIAQTXEAEGFUMRZIKCXHWJRTIQOFTBUYVWRAZIGRHBXYTVTEDGKLJPOJZHKHMXWFZXDAVJCISFCVINPJMNXOYDLMMVUODKCKBYCYBEACYJOJDDLFGGNQLQSXFFYAPLTHSLJDCVOONZOHUPGBLRZKIYVZSV");

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
    msg.setTimeStamp(0.8565091740116867);
    msg.setSource(51234U);
    msg.setSourceEntity(217U);
    msg.setDestination(16543U);
    msg.setDestinationEntity(234U);
    msg.timeout = 8295U;
    msg.lat = 0.38929953340426104;
    msg.lon = 0.7838342469762548;
    msg.z = 0.5735079792448854;
    msg.z_units = 48U;
    msg.speed = 0.19454368604540373;
    msg.speed_units = 186U;
    msg.custom.assign("SAZADEKISCNZTMBBJPKBURAJQWFPXDYEUJKHWXJIWPTCXDIYOFRHXJWJGEFCARDNVLNYBZFBSLRKMNSZTCOLSLQCJGGMYLZVPCZWLRPWEGNUUVLFXWGHVMDSUYHOQJLVPQSXHGK");

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
    msg.setTimeStamp(0.9356316649816616);
    msg.setSource(28500U);
    msg.setSourceEntity(39U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(134U);
    msg.x = 0.510213727717934;
    msg.y = 0.24641699573487508;
    msg.z = 0.37230639100289586;
    msg.t = 0.15460716080531278;

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
    msg.setTimeStamp(0.5355717102112425);
    msg.setSource(39906U);
    msg.setSourceEntity(134U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(19U);
    msg.x = 0.6406037612499388;
    msg.y = 0.23113271423336434;
    msg.z = 0.68943247302297;
    msg.t = 0.64745879194305;

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
    msg.setTimeStamp(0.10355390594397507);
    msg.setSource(38221U);
    msg.setSourceEntity(25U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(46U);
    msg.x = 0.31306677646942105;
    msg.y = 0.8860216645200728;
    msg.z = 0.5889543162779304;
    msg.t = 0.5619641893994438;

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
    msg.setTimeStamp(0.034868881795638296);
    msg.setSource(36831U);
    msg.setSourceEntity(172U);
    msg.setDestination(24907U);
    msg.setDestinationEntity(101U);
    msg.timeout = 58821U;
    msg.name.assign("GHMPKEUMUNPCSTZPSOZSXVYBJQGPQBEINQVVBTRYCIIOHFASGCOKGXWIYJRRGJWRKIKBKVUTTUFWHCAAZDTPWDEAUMHWUXIPMMYJBZQJXADYKIXKRAQETRXEXPSKOZJAMTLFZZ");
    msg.custom.assign("ZYEIFQONSOKPETTRHAVJPVACDPIJZMXESNNBGBJKWMCJZUBQYOMOYSSHYJQVXFWUEBNXRSWVDSCBIPCNZTFADZLWLIJBKRDEDVVFVSCWQFJAEWRDCGXVODUHLTYZLFITDHSFKVRQLQZCLRZFGPHJPGQBHYPKKULAUF");

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
    msg.setTimeStamp(0.2442321702617377);
    msg.setSource(19274U);
    msg.setSourceEntity(92U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(39U);
    msg.timeout = 32751U;
    msg.name.assign("VBKSLJHORZAPWNPXBRTWJPWPTIRRJBSKNYJGFOSJYSYEHKJOADEKWCYBPJFHLNLPXQBOOSDEKBDNQGNFVCZZDUMUMTZXWICXLAMCFWEGAALQIGKWXNRVXDVQLZZIIXMXFLIYMGNKGQCZCSFSMCVZYBKJHXBUHYYDZQUNLHRFDHGEOHSTELFGQCHPEGRAUWWPIXDBHDTQ");
    msg.custom.assign("FPITMIFXNQRWTPKPOHODMXQLQRYYSUAUUDXVNRSHPEKZVHDNFVZRVZSHTIAEYXHJZVEVYOHBODTEBINSZIEGANQKJBGFPXJYGURRLUOJECKYLUBJGATHVTTCYDXX");

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
    msg.setTimeStamp(0.22089882177350473);
    msg.setSource(43137U);
    msg.setSourceEntity(135U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(127U);
    msg.timeout = 23015U;
    msg.name.assign("WNGOUOSMQTFWSKRXDVNGNSXUVOCQTTVFUIIAEXCDODCFAEWFBWCLQKWHQTQQSFRHUQZGODZPXGUEESLRXUZAVBKPTNMABDOPJQXHMWVNPVZISEXPGKFJZKTYJLOIBXZBVINZPJKZIHYRYMTMMHICFCYNTUAAJBLYDRLYSDLBJASSYHVEPPOGMCQZEMRRFUPJDIHIDCBESWDGXPNQGLKRGGHRLHNCJJMLZTKFKCYBWNWTHFR");
    msg.custom.assign("MMCPQREYFWXXUIAUM");

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
    msg.setTimeStamp(0.7137911491847663);
    msg.setSource(45144U);
    msg.setSourceEntity(32U);
    msg.setDestination(50662U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.9722261866863021;
    msg.lon = 0.04349875734834363;
    msg.z = 0.7013969431759709;
    msg.z_units = 148U;
    msg.speed = 0.2820615625171635;
    msg.speed_units = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45695U;
    tmp_msg_0.off_x = 0.6646156216020745;
    tmp_msg_0.off_y = 0.531474738616078;
    tmp_msg_0.off_z = 0.765480356738579;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.2374463598490496;
    msg.custom.assign("RRIGGFZQRIUMREJEVPHLOWESXYFQFJHYQKLMBJJEYEJPJXZVUXDFFUUWSNSNNCAKNIJEUELWOAQVCSLZHAPMPVOMAIQTPMROKQDYVRHFSWTYZRICGXCWBDVNYWBZIZLHJLBFIVMYLPNXCBKQSKDOTKBTIKOUHTWQHSSETGQTTMJWXGGENGKCKBRZUUAADWCATHVPZPPWDFOBXPUDVYGLBMHXXASNGNOETGHUCLBQC");

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
    msg.setTimeStamp(0.46816985248846565);
    msg.setSource(27444U);
    msg.setSourceEntity(2U);
    msg.setDestination(58780U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.9939873646019851;
    msg.lon = 0.13211470367751155;
    msg.z = 0.6898516576819524;
    msg.z_units = 195U;
    msg.speed = 0.12122415162282207;
    msg.speed_units = 51U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44516U;
    tmp_msg_0.off_x = 0.6852456890478228;
    tmp_msg_0.off_y = 0.32611570377767773;
    tmp_msg_0.off_z = 0.5709356652561861;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6766646941755708;
    msg.custom.assign("VJUQLWZVOAEQSDFWMVZJJPEMHARGTCAXMPWLYRJEQEVVXFWBOUNATFVRQZPAXQFBIHSAJJGCBGAOBMDINGXGVNQYJQWUMUOKSKSUXITPGDIFOXTRWNOCTBESGILMYRODKWVYWMDBQCMFYRLZYZSHRAKIPKHLHNTVKLUIP");

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
    msg.setTimeStamp(0.8956580404026562);
    msg.setSource(47987U);
    msg.setSourceEntity(111U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.9176350241623861;
    msg.lon = 0.39672237516992637;
    msg.z = 0.5588906933822083;
    msg.z_units = 125U;
    msg.speed = 0.9240765828165303;
    msg.speed_units = 216U;
    msg.start_time = 0.09865510528769605;
    msg.custom.assign("JREYWAPDCEOHOBJEHLUHGUYADCBPSUSSPGXVVGURKFUECWDCLMOPNMSPEPCZXQQYZJLOTCJOPVWCXMZBBQLQZYDSHFXVUOKFULTYXEKRFVFTAFGOITMKKWUPQMAHJGQNJRTEMSQDNMRMIZWIHBBHYQWTVJZYUTKIJFNBOAOEQRBTN");

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
    msg.setTimeStamp(0.8048045815597136);
    msg.setSource(7528U);
    msg.setSourceEntity(167U);
    msg.setDestination(64824U);
    msg.setDestinationEntity(40U);
    msg.vid = 30918U;
    msg.off_x = 0.5808864631331714;
    msg.off_y = 0.1351150964367165;
    msg.off_z = 0.6936098277884172;

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
    msg.setTimeStamp(0.07367529916704485);
    msg.setSource(54752U);
    msg.setSourceEntity(137U);
    msg.setDestination(34823U);
    msg.setDestinationEntity(238U);
    msg.vid = 33465U;
    msg.off_x = 0.33287711350838256;
    msg.off_y = 0.8721979571062244;
    msg.off_z = 0.5917455861812696;

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
    msg.setTimeStamp(0.17672699609008846);
    msg.setSource(51472U);
    msg.setSourceEntity(58U);
    msg.setDestination(55196U);
    msg.setDestinationEntity(209U);
    msg.vid = 2713U;
    msg.off_x = 0.7021104800597828;
    msg.off_y = 0.12598563251540484;
    msg.off_z = 0.28943260040540286;

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
    msg.setTimeStamp(0.443780652977792);
    msg.setSource(39875U);
    msg.setSourceEntity(174U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.6232478512401302);
    msg.setSource(9275U);
    msg.setSourceEntity(93U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.3520495131656042);
    msg.setSource(64384U);
    msg.setSourceEntity(101U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.3529889652325735);
    msg.setSource(38232U);
    msg.setSourceEntity(28U);
    msg.setDestination(17155U);
    msg.setDestinationEntity(176U);
    msg.mid = 10606U;

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
    msg.setTimeStamp(0.9070723971879672);
    msg.setSource(64818U);
    msg.setSourceEntity(207U);
    msg.setDestination(48524U);
    msg.setDestinationEntity(13U);
    msg.mid = 33077U;

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
    msg.setTimeStamp(0.2664792502554524);
    msg.setSource(62205U);
    msg.setSourceEntity(54U);
    msg.setDestination(5379U);
    msg.setDestinationEntity(173U);
    msg.mid = 6969U;

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
    msg.setTimeStamp(0.026084806063269017);
    msg.setSource(47695U);
    msg.setSourceEntity(218U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(22U);
    msg.state = 207U;
    msg.eta = 51272U;
    msg.info.assign("MNLXCFTVTIGJOWZHKURCNBJTUAMKRELWHBKUOFJEMUEFQDITCZRXLCIUAFVTDNZJDSTFVHOQXPNEUMSAXMRKHYGOIYPSMOUNBDTDEIVGVBLPXOCYKPIPGXDSBWQHZCTFYNRYPZKOYSFPSUKQQPMGEKLOFGTHRPBKQWWCASJEHFQRLMOVYQBRCOWZQMZIJWIBDBLZNVNDRGLIUXAAGQAFDVJUEVTDLJHGZWKCAJVHHEAMEX");

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
    msg.setTimeStamp(0.42239855819911676);
    msg.setSource(44995U);
    msg.setSourceEntity(252U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(101U);
    msg.state = 15U;
    msg.eta = 41448U;
    msg.info.assign("MFRRVKEFMIOTSRJILOKPKAOSLWRCCEPATDDQCXITMKRZUUGGUTYOPNPRYKVLGHWRZGSTBIEFJCAZFBVYSHSPPWKDNUNHBLIYWSNZLUEQQOJDILZRPZYBXCOHWGTMAAAWLGDYWABTYXNJHKDVAVVTCQVTMJSXYUZQODNFMWLBOMGEVKCQ");

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
    msg.setTimeStamp(0.379765586873136);
    msg.setSource(13379U);
    msg.setSourceEntity(11U);
    msg.setDestination(61397U);
    msg.setDestinationEntity(183U);
    msg.state = 21U;
    msg.eta = 47220U;
    msg.info.assign("SGDGOEAJGLNANLFQNKKVS");

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
    msg.setTimeStamp(0.37914254818400717);
    msg.setSource(47611U);
    msg.setSourceEntity(59U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(80U);
    msg.system = 20138U;
    msg.duration = 52990U;
    msg.speed = 0.05872058124534352;
    msg.speed_units = 116U;
    msg.x = 0.043634658861147146;
    msg.y = 0.19506978431354405;
    msg.z = 0.6342425218225043;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.2226486435490299);
    msg.setSource(38156U);
    msg.setSourceEntity(164U);
    msg.setDestination(42485U);
    msg.setDestinationEntity(131U);
    msg.system = 30955U;
    msg.duration = 27156U;
    msg.speed = 0.5272896850497516;
    msg.speed_units = 78U;
    msg.x = 0.6127344286070379;
    msg.y = 0.4822533477336053;
    msg.z = 0.9315622601801852;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.4835943695272269);
    msg.setSource(14618U);
    msg.setSourceEntity(138U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(113U);
    msg.system = 34989U;
    msg.duration = 4566U;
    msg.speed = 0.32442503499429276;
    msg.speed_units = 141U;
    msg.x = 0.3610220232717092;
    msg.y = 0.17656056541370235;
    msg.z = 0.4406460181828704;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.5697357967529774);
    msg.setSource(28204U);
    msg.setSourceEntity(178U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.9919437584328417;
    msg.lon = 0.924106331780859;
    msg.speed = 0.9125722132768683;
    msg.speed_units = 74U;
    msg.duration = 47513U;
    msg.sys_a = 41774U;
    msg.sys_b = 60442U;
    msg.move_threshold = 0.5653834917280881;

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
    msg.setTimeStamp(0.11677997047306676);
    msg.setSource(27371U);
    msg.setSourceEntity(242U);
    msg.setDestination(26280U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.8089236743773075;
    msg.lon = 0.5375008302919763;
    msg.speed = 0.8957302519540051;
    msg.speed_units = 152U;
    msg.duration = 21899U;
    msg.sys_a = 22878U;
    msg.sys_b = 63867U;
    msg.move_threshold = 0.09888426802913286;

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
    msg.setTimeStamp(0.2538411148016215);
    msg.setSource(32582U);
    msg.setSourceEntity(222U);
    msg.setDestination(16563U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.525155054969111;
    msg.lon = 0.6016011492655376;
    msg.speed = 0.8085440248569356;
    msg.speed_units = 156U;
    msg.duration = 40176U;
    msg.sys_a = 49529U;
    msg.sys_b = 42830U;
    msg.move_threshold = 0.3961514641503311;

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
    msg.setTimeStamp(0.870239825262573);
    msg.setSource(2045U);
    msg.setSourceEntity(173U);
    msg.setDestination(13151U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.3121749827871433;
    msg.lon = 0.3206718849317236;
    msg.z = 0.021512723149830326;
    msg.z_units = 88U;
    msg.speed = 0.060502957089212384;
    msg.speed_units = 72U;
    msg.custom.assign("LSRNDIVFIDAJFHVMSYXWNHKDEHGEEWXIZYRUOBNQTDSYGPKDORAVJCLLQMFUNSEHHKXGUKVFLORFZNRYPFGUYGVVWNLZJHUM");

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
    msg.setTimeStamp(0.8658573617682558);
    msg.setSource(21463U);
    msg.setSourceEntity(167U);
    msg.setDestination(31455U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.9702352595966078;
    msg.lon = 0.5795815933868939;
    msg.z = 0.9460243243577757;
    msg.z_units = 227U;
    msg.speed = 0.5935861308147584;
    msg.speed_units = 192U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6039750143917806;
    tmp_msg_0.lon = 0.7443036116703275;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CYLDOXMLKNYGOVGALJQYWHKYRFHJPDZVUPZTSODAHPVMCWMYMJKJRTXJWDBGHNRGBATWFLORHFEKFOOARPPBHEEKEJPIQMFVVKWZGZEIZJUUCWUIEUCTXTYSFHQBNCEXSTUSYXHFZSRNHVEXVCYYKILOLSNDREBGSNMSBAWFTP");

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
    msg.setTimeStamp(0.4569131550017438);
    msg.setSource(35676U);
    msg.setSourceEntity(92U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9545141637137498;
    msg.lon = 0.2815567955762269;
    msg.z = 0.9901168324183856;
    msg.z_units = 149U;
    msg.speed = 0.22172260982529723;
    msg.speed_units = 47U;
    msg.custom.assign("QFJYTCTAUUTPUGLYUHNRWEOTDNEMNVIXPFLBALYQTVPDLNKPZDKWWZCJURILDYIDVSOVJYIVEUBCQGRKZXAOP");

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
    msg.setTimeStamp(0.9723870547194444);
    msg.setSource(56842U);
    msg.setSourceEntity(65U);
    msg.setDestination(15074U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.0824679456098476;
    msg.lon = 0.8816359112052853;

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
    msg.setTimeStamp(0.3466911497440437);
    msg.setSource(1228U);
    msg.setSourceEntity(210U);
    msg.setDestination(59545U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.8562929145052501;
    msg.lon = 0.118075055159095;

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
    msg.setTimeStamp(0.31265840062180794);
    msg.setSource(38963U);
    msg.setSourceEntity(17U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.9856927156240486;
    msg.lon = 0.20130558080584815;

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
    msg.setTimeStamp(0.681494538684574);
    msg.setSource(11069U);
    msg.setSourceEntity(189U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(3U);
    msg.timeout = 36059U;
    msg.lat = 0.2809453807747372;
    msg.lon = 0.7821528305581018;
    msg.z = 0.353192948962186;
    msg.z_units = 160U;
    msg.pitch = 0.2198270199696526;
    msg.amplitude = 0.3424096123176579;
    msg.duration = 12614U;
    msg.speed = 0.5803061416944534;
    msg.speed_units = 4U;
    msg.radius = 0.4035351901300146;
    msg.direction = 196U;
    msg.custom.assign("PMUHLUTPELPYXDRLUOAXXBZEXCGTWJVDEYTYLFZPOESPDNQWIDFIVVUWLFBJZVOHATUIORIQPIMNAJRSDZRTNFENCKYRQKXLBQKCXWRBWAUCAXETJDQNCKGQQZIKPMRGQSFTOZZUHWRYMDIJIDGWOCSJGEHHSDUHYLPGLHG");

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
    msg.setTimeStamp(0.5337036535154671);
    msg.setSource(2932U);
    msg.setSourceEntity(228U);
    msg.setDestination(25365U);
    msg.setDestinationEntity(100U);
    msg.timeout = 48694U;
    msg.lat = 0.24453560454864887;
    msg.lon = 0.9201432707546079;
    msg.z = 0.8747344598279371;
    msg.z_units = 35U;
    msg.pitch = 0.8311978640324641;
    msg.amplitude = 0.2217459645225277;
    msg.duration = 16449U;
    msg.speed = 0.4137384636623661;
    msg.speed_units = 16U;
    msg.radius = 0.6157314434344359;
    msg.direction = 248U;
    msg.custom.assign("LBUPBTQNKRWEFXDGFEVNRRAJODGVOZUPWYNJIDBTRGEIXMJDDYKBIPHCCBMOQZLQQDACXCRWTOJQJUONQGCSFXFOHWPESYAZIRLHBNSUBVJWIPJHLBEMLGPUEIAHCXOKN");

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
    msg.setTimeStamp(0.4067157960958795);
    msg.setSource(26278U);
    msg.setSourceEntity(213U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(229U);
    msg.timeout = 38122U;
    msg.lat = 0.7865365203382471;
    msg.lon = 0.28648677209053697;
    msg.z = 0.2951861434280383;
    msg.z_units = 43U;
    msg.pitch = 0.8462516914258162;
    msg.amplitude = 0.22850764897519116;
    msg.duration = 61684U;
    msg.speed = 0.6823628074294451;
    msg.speed_units = 62U;
    msg.radius = 0.7030673275257263;
    msg.direction = 116U;
    msg.custom.assign("DGTUBJNCZHENBINKEEYJEAOHMPWLTMUTGEHSHESZLGACAFJNFIZ");

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
    msg.setTimeStamp(0.13554198309875454);
    msg.setSource(58556U);
    msg.setSourceEntity(123U);
    msg.setDestination(44597U);
    msg.setDestinationEntity(76U);
    msg.control_src = 46004U;
    msg.control_ent = 206U;
    msg.timeout = 0.5255955670650475;
    msg.loiter_radius = 0.2661004977488408;
    msg.altitude_interval = 0.8580878618997746;

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
    msg.setTimeStamp(0.9190047968077383);
    msg.setSource(44785U);
    msg.setSourceEntity(163U);
    msg.setDestination(49939U);
    msg.setDestinationEntity(113U);
    msg.control_src = 43235U;
    msg.control_ent = 233U;
    msg.timeout = 0.4023342686228437;
    msg.loiter_radius = 0.5536240033406123;
    msg.altitude_interval = 0.37021257820968123;

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
    msg.setTimeStamp(0.8252533570462705);
    msg.setSource(8721U);
    msg.setSourceEntity(163U);
    msg.setDestination(60611U);
    msg.setDestinationEntity(244U);
    msg.control_src = 42233U;
    msg.control_ent = 174U;
    msg.timeout = 0.5624468298340357;
    msg.loiter_radius = 0.36486789080891757;
    msg.altitude_interval = 0.7182243395983181;

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
    msg.setTimeStamp(0.35902557149448944);
    msg.setSource(55271U);
    msg.setSourceEntity(129U);
    msg.setDestination(22053U);
    msg.setDestinationEntity(233U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9545124232504962;
    tmp_msg_0.speed_units = 61U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5279635920957247;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8560407345794488;
    msg.lon = 0.8035105472634816;
    msg.radius = 0.44199562469956566;

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
    msg.setTimeStamp(0.3495856079697467);
    msg.setSource(3009U);
    msg.setSourceEntity(159U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(55U);
    msg.flags = 93U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1919196244988658;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.808016518759107;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6268871723718552;
    msg.lon = 0.45733834961294073;
    msg.radius = 0.3665538205490326;

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
    msg.setTimeStamp(0.7379893182080828);
    msg.setSource(53319U);
    msg.setSourceEntity(226U);
    msg.setDestination(22992U);
    msg.setDestinationEntity(26U);
    msg.flags = 121U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.11920525555623618;
    tmp_msg_0.speed_units = 211U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.05148535790339037;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.41820590826894455;
    msg.lon = 0.9392993907767033;
    msg.radius = 0.6669956986066202;

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
    msg.setTimeStamp(0.18811389594039918);
    msg.setSource(59567U);
    msg.setSourceEntity(205U);
    msg.setDestination(65513U);
    msg.setDestinationEntity(246U);
    msg.control_src = 772U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 149U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13875543873930174;
    tmp_tmp_msg_0_0.speed_units = 73U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2448778077589432;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.036748628161511365;
    tmp_msg_0.lon = 0.23911010016870204;
    tmp_msg_0.radius = 0.8523918004221549;
    msg.reference.set(tmp_msg_0);
    msg.state = 168U;
    msg.proximity = 227U;

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
    msg.setTimeStamp(0.21494765651487135);
    msg.setSource(9971U);
    msg.setSourceEntity(164U);
    msg.setDestination(64367U);
    msg.setDestinationEntity(115U);
    msg.control_src = 6933U;
    msg.control_ent = 224U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 101U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.48685628711138595;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8308729204820733;
    tmp_tmp_msg_0_1.z_units = 140U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.22055338318352835;
    tmp_msg_0.lon = 0.672181512782725;
    tmp_msg_0.radius = 0.7241224231873348;
    msg.reference.set(tmp_msg_0);
    msg.state = 138U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.9374509850817105);
    msg.setSource(43761U);
    msg.setSourceEntity(229U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(91U);
    msg.control_src = 31688U;
    msg.control_ent = 23U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 189U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49374131980729286;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7117652296469196;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7872589509073566;
    tmp_msg_0.lon = 0.10645052746447081;
    tmp_msg_0.radius = 0.2596562918876655;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 58U;

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
    msg.setTimeStamp(0.1239222882414287);
    msg.setSource(719U);
    msg.setSourceEntity(214U);
    msg.setDestination(8771U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 196U;
    msg.error_count = 178U;
    msg.error_ents.assign("HSRERWQRUBTTAKVCKBTJSHEDNIBILYEJAZZFCLZTEDUVIAUXOBCKIHLDYMAOQHLIWMAKJPCHVGMSTBUMNAQNDYMFZRGVEODXLFIWGNGXSEXLJBJQAKFJXRGLOHZCUMQPJNTTZRJBKOHCFSYTMVYNJRQHDDPUQPOYMGZSPUBANQGWOYYVWDHLOCFKDFZRBVK");
    msg.maneuver_type = 24061U;
    msg.maneuver_stime = 0.10533101986905757;
    msg.maneuver_eta = 6306U;
    msg.control_loops = 2300666977U;
    msg.flags = 179U;
    msg.last_error.assign("SPZPGCHQZHNICFYPPLYNSEWEVBCIZOCFUNJAGVCJVMFKGMYTXCHAZJMHRHDQASLYGI");
    msg.last_error_time = 0.49639681712622097;

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
    msg.setTimeStamp(0.6372824333952951);
    msg.setSource(53515U);
    msg.setSourceEntity(241U);
    msg.setDestination(35788U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 16U;
    msg.error_count = 218U;
    msg.error_ents.assign("OZJLYLXHXNBOBBIJXEPTYZUCRFLRZPOSHVNDJWTUMSTCQRGNPXUUGWSQDPWEFFRXZZJLYALHYEMAVWZPMEBKSUFTWSTQYMFAVLEINEXCKUYOGEPKATGRJGAMBSDZUMNOCVOONDQKXWHABWNDIBIGKHIIHNUKSCVWOXKCKRALPGWPQUUYVTCIHSAVMGEQTEL");
    msg.maneuver_type = 13834U;
    msg.maneuver_stime = 0.8180993535389196;
    msg.maneuver_eta = 50105U;
    msg.control_loops = 259462396U;
    msg.flags = 191U;
    msg.last_error.assign("ESJEAGYURVDLNPSFHTFTQFORZVAPWZYRRXJPEOUUCZGHTCBOLDAVVOZEQSQLHYUWUGNLXHZNHXZKBGOGCHVNVCNQVISMOBNYAABXADDKHEMZTEMUQYOJGXWPFFPTIGJTTWYLTVWBMFMLJMGIBQCWYXDPUEGDFLMGUIJCRLPNISQFBOMCYZJABSYFDISTKXSKWKXORLRUNEKKZAJJPDWQNDCKBAERHSAVSPMIPCBKWHIJVXXMNCQLURDIHKRYQO");
    msg.last_error_time = 0.5441044210257622;

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
    msg.setTimeStamp(0.48946290884544497);
    msg.setSource(50679U);
    msg.setSourceEntity(243U);
    msg.setDestination(6422U);
    msg.setDestinationEntity(231U);
    msg.op_mode = 148U;
    msg.error_count = 222U;
    msg.error_ents.assign("AQDYBXKRUTYEYTMOXZFCCYUZYPKNNKEFRFXVNLKXYCEDEPGSGBPQHVWBANITZJJUEHGTONABSGRREMFGBGXCDUGOWVTQLAUVYNIWIOGVAQZLFEVPHIPRGFMCMASICDPCQRQAEFSXZOWJCMUQQHQNIHMUMMLHWTZDUISKVLSIPYUZDJIODHMJXLXBXLJWZAWET");
    msg.maneuver_type = 50179U;
    msg.maneuver_stime = 0.5093066602901586;
    msg.maneuver_eta = 18828U;
    msg.control_loops = 2282526882U;
    msg.flags = 87U;
    msg.last_error.assign("OJTCVTVCDZRIOKPRRTJISTMYJVAJHADZVALFOWGLRBQRRQFETDIWLCHASJZMEEMPCZVFKDGYZLHWSGBRHJMNSPYXQEMXUTRHOAQVGKWUTCNTGVZEGNKAYHMDVBIPSUUEPBPYOFALXCWFIAQKXOHXPUYQCAYSSJIFZDFOBCKKBCRWNIZMLELSAFUJBLBDGZINQIUGQNSOJNGWYRKMVHPUZXLBWMXWQHHCNYVKT");
    msg.last_error_time = 0.032053639259953526;

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
    msg.setTimeStamp(0.9053898676864859);
    msg.setSource(3510U);
    msg.setSourceEntity(131U);
    msg.setDestination(55085U);
    msg.setDestinationEntity(122U);
    msg.type = 133U;
    msg.request_id = 21777U;
    msg.command = 0U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 56489U;
    tmp_msg_0.lat = 0.42873103708605387;
    tmp_msg_0.lon = 0.5860238547265584;
    tmp_msg_0.z = 0.9856577889913133;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.duration = 58659U;
    tmp_msg_0.speed = 0.3862960719819003;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.type = 186U;
    tmp_msg_0.radius = 0.20188717837863723;
    tmp_msg_0.length = 0.49712575243214696;
    tmp_msg_0.bearing = 0.8639159677497265;
    tmp_msg_0.direction = 79U;
    tmp_msg_0.custom.assign("YCORIIYEFTHXQQUSAYROJSDRNOVYNXIZUPZEUMVEWYNFNPOASMKJUSPSXVNPAGZVINZRXCHPTLDJFAXGQSYFPWRTLHPBBFKNEBOXJBETVUTYGUBGLKEDKZQDHSPVSIWKEVADAFKCLXJCRAQUDTHWJBYBIJADWQOTAHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3292U;
    msg.info.assign("HKXNDKCXFVKYJUMGWGQEKLSPCXEFZHKMPDPMTUNRYRYHNWDDQZIKGJJBGJIMIPGZROUAVDLUTUMCGXHCHDDNYIZFQINVEDBZKUCTXOBOAWNWLSVYFWLOPTABILSZZHBJVEKAMOT");

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
    msg.setTimeStamp(0.9117981047464693);
    msg.setSource(35949U);
    msg.setSourceEntity(224U);
    msg.setDestination(49535U);
    msg.setDestinationEntity(222U);
    msg.type = 166U;
    msg.request_id = 19895U;
    msg.command = 80U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 36141U;
    tmp_msg_0.control_ent = 252U;
    tmp_msg_0.timeout = 0.21343049613619447;
    tmp_msg_0.loiter_radius = 0.9307899571089002;
    tmp_msg_0.altitude_interval = 0.12249269781203198;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46697U;
    msg.info.assign("NVTJIWZAOWSH");

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
    msg.setTimeStamp(0.2934576970154449);
    msg.setSource(11126U);
    msg.setSourceEntity(106U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(223U);
    msg.type = 100U;
    msg.request_id = 46782U;
    msg.command = 143U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 45075U;
    tmp_msg_0.custom.assign("VHFFVWYGJZZAZDQSSHLSAIJPNKQPOKVCGXNVYELBLIJBUZASIVWVEKTWYKMHDFYUZSMYYADMONGKXMDDBBLDEWWFCCNKUKIMRBPWWPTJEZNJHYRNRXNPXUEUAUOMQHDCXWIFOXTLZMCFOJGFXYXQJYTLJTMBUGLYVBBBGGOKMXUNHTGHZICIDCRWRFLQGRLWQEZLPPQGATFVITERARUSBDXKCQSPHJTZQP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15901U;
    msg.info.assign("FQJSSFIXZBZTBLARQHBYZUMQOFVMHUPEYHRDEPQIJFHDFIMNGBCVXEELYKUUGUBNJQNGEFCAPBSVCJPUHKNTXSDZVHCLBIKWWCXFOCIWYTUPIQRIZSYOBMTSEA");

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
    msg.setTimeStamp(0.41540478668440395);
    msg.setSource(35149U);
    msg.setSourceEntity(71U);
    msg.setDestination(37501U);
    msg.setDestinationEntity(214U);
    msg.command = 251U;
    msg.entities.assign("CZUYJJUGQTIKTQZTJSMPDLDHSMHDEGIRXAZEVKKTDKOOJKBFFJRDUWXBLDQRMUGLJTYUAEOHHNCEXOMTTYNOVSOGBBFJLIXLVNJFZVNCXPAVQAIIJGSPFWHVOCRQCMPFFLCWTYRLAUBYHLEZSXIBYGUGLJBKUXMZQEKCDTSDLKRVPNUHABNPRNAMWZZWATDQZMHYSGGVFENIAQVVYYBNWMPSXIFFOPRMSORIXCCAWWOYEEDIHGPUWSRQWHECZQ");

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
    msg.setTimeStamp(0.7171582625299747);
    msg.setSource(33719U);
    msg.setSourceEntity(71U);
    msg.setDestination(2851U);
    msg.setDestinationEntity(2U);
    msg.command = 96U;
    msg.entities.assign("QLPIZYSVZCUHJNTJXGEDTL");

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
    msg.setTimeStamp(0.8609099445049607);
    msg.setSource(58303U);
    msg.setSourceEntity(238U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(152U);
    msg.command = 87U;
    msg.entities.assign("NVPVJBQVAGIDCSSPVFUOHYRDKCJ");

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
    msg.setTimeStamp(0.4618872266959203);
    msg.setSource(36565U);
    msg.setSourceEntity(44U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(208U);
    msg.mcount = 57U;
    msg.mnames.assign("EIRWDLHTVQHKVAGFBQCXSNUEWXJYQVMXHVPVOBQKRISYPFCPKCGIRYCMLQJWBFELKSENPEASFDUTLVIZMDOPEZM");
    msg.ecount = 164U;
    msg.enames.assign("JXHGVEMRIGZBGDCMLNAOQZPQOOTUWSCCSVBGHRDMMQVKAZBTKEENVDHTUMTDTLPBBADPTUGMIFXQJKSHAJFKHVBALFOXLGEXRRMYIQEEKMCANSLWTWWBBLUAFPKWQPRWTFBWHIJOCONDOJXSPTNXLIKNZYRSJDNNHLHGOPVYZYAKFJIFIASBVWEWGOQIUEXSUZYYNRZRHDYQQKPVGRMEVJJYEVKNLHYTOICCZ");
    msg.ccount = 127U;
    msg.cnames.assign("ESVMVZYYAZHHNZFKBLSIMDVJGYTYXPANSDEALGVWHDHPCUEUQIVQLORTAWQBYWPSJOYYF");
    msg.last_error.assign("XPLVUKMCGJCJKJIDSCEAQVWNFDZYCAXPUOUDI");
    msg.last_error_time = 0.6850400717515611;

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
    msg.setTimeStamp(0.9589111496705209);
    msg.setSource(22319U);
    msg.setSourceEntity(3U);
    msg.setDestination(19366U);
    msg.setDestinationEntity(165U);
    msg.mcount = 47U;
    msg.mnames.assign("DGPHSULKBOVRWHXVEIVNYDXWTROOEIHYLNNHUJQPLEXAIFYAGVCIUAUOTLVZVRLIBPAKZYDJMAKTUDFCNKHFYLQCWECOOHAWJJQHOSHVXJSMRNSQKJNYGWFVUBKXGRJFRNYZJHIMEABIDQRKUCGZSAKQWQXCMBPJLZW");
    msg.ecount = 69U;
    msg.enames.assign("NCBMUBLZIAOKQEUWUMXWXOLPKORWDMIQWJWGVRHDVGXSCQGPUYFKHJKOXXYHISPDFKJDCVNVGOGRJPOTZOKLLOATPLAWWXKMZFPAFYUJMBRTBTRJMYDVXZPGECVRSJHBXFEQQNLUAWGATKHTCJBCQVYTSIBKBUZTWDENRIBMMLSSSAAEGLZJJRCQYXQKTU");
    msg.ccount = 199U;
    msg.cnames.assign("IEQVYUHSKERFMJNDBSGUDMBTFZDQFNLWRXBFFCCZINDJFGRAVHPSBWJKZJXTLBZAQIYWGCYJQVGUBKLESTUDHQEMHYJKQZWVVTRPUQMNPZLSZNGVHORKOXVXCONUCDYMQRACLAYHUEDTPENPUTWKPZTERTQWCIFWAGKBISOOK");
    msg.last_error.assign("WYRQZJYKRCEYXUFSAKAFQMARMBLUJAUGBTLWSAXNATWRFHBXSABFDGMSJJBJCHMWJEITBUCKTMHRGIVVLVGYPCQOOVPNMTYVZQLBYQTHDZEZUIZEILOYXUCODUBGNCWEUSIOOJUKDYHSQB");
    msg.last_error_time = 0.28489290159422354;

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
    msg.setTimeStamp(0.536041277858525);
    msg.setSource(8176U);
    msg.setSourceEntity(25U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(79U);
    msg.mcount = 123U;
    msg.mnames.assign("HHZJMJOXPSFCJZPEOUBRNGADYVKWQUKNCWJTWILIKZUTNDWMXHLMIWXAOKIFEWSVMDAZAMJABROQRILFVHGESFVIZFXNGYNLWBLYQEMZIEFWZGRHVTCIQLYZWGBOHFCNOAKPEMTAEYIFPRVQKJRSUCPDTHREGBXBCDJXDQSVPXDJJQORWVFVGDCRYPTQZHNUYVCGJZALSTHO");
    msg.ecount = 242U;
    msg.enames.assign("KFIDIGWPODUUVCHNEVYWAZQRJAPYSHMURDWPAMZHTKFAEBPKFM");
    msg.ccount = 184U;
    msg.cnames.assign("CDREABVWRYVUEAABKEOHAUWXIBPNFVBXSJPKKRNDQMQMTWELGANHGXTLUOXFNLZKGNLRJEUERPXEYIISHRSMSCRWAUAFUVQTHFKKOWYOZHZDBBQPVXDTMTHVYOUZYVDBNRQQYGJDMJBPCCOXD");
    msg.last_error.assign("BZEEWXZPKLRYGLYCWAIUHKDOBWPXROKFUYACPOAHKJAQHREIBQJCRQQVPU");
    msg.last_error_time = 0.07699360197833482;

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
    msg.setTimeStamp(0.2101405996922998);
    msg.setSource(60356U);
    msg.setSourceEntity(100U);
    msg.setDestination(38225U);
    msg.setDestinationEntity(243U);
    msg.mask = 237U;
    msg.max_depth = 0.9428945074351792;
    msg.min_altitude = 0.554579964404487;
    msg.max_altitude = 0.4387295874478603;
    msg.min_speed = 0.8444702719383198;
    msg.max_speed = 0.47098743529948195;
    msg.max_vrate = 0.8514348105779646;
    msg.lat = 0.12920549561382677;
    msg.lon = 0.11617606487310694;
    msg.orientation = 0.6486279602049326;
    msg.width = 0.7347348894872211;
    msg.length = 0.6952483602097569;

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
    msg.setTimeStamp(0.3130229969482956);
    msg.setSource(20218U);
    msg.setSourceEntity(217U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(133U);
    msg.mask = 108U;
    msg.max_depth = 0.1913359514820584;
    msg.min_altitude = 0.29264804948219947;
    msg.max_altitude = 0.042134874674534695;
    msg.min_speed = 0.2937376958124913;
    msg.max_speed = 0.3839025091854117;
    msg.max_vrate = 0.5213170311995361;
    msg.lat = 0.2934960558014277;
    msg.lon = 0.07935255349187986;
    msg.orientation = 0.8408533287002153;
    msg.width = 0.375766815882436;
    msg.length = 0.6696879756743527;

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
    msg.setTimeStamp(0.15125550241838515);
    msg.setSource(104U);
    msg.setSourceEntity(183U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(16U);
    msg.mask = 218U;
    msg.max_depth = 0.6633204217471094;
    msg.min_altitude = 0.7210635093697949;
    msg.max_altitude = 0.173230995404538;
    msg.min_speed = 0.5670458246080654;
    msg.max_speed = 0.7301561876724688;
    msg.max_vrate = 0.762973496032841;
    msg.lat = 0.45334927218904497;
    msg.lon = 0.05505461100905584;
    msg.orientation = 0.4575079786739442;
    msg.width = 0.8386853431702926;
    msg.length = 0.47386730493659357;

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
    msg.setTimeStamp(0.9871360268498606);
    msg.setSource(37261U);
    msg.setSourceEntity(204U);
    msg.setDestination(28693U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.6323739621982823);
    msg.setSource(19372U);
    msg.setSourceEntity(94U);
    msg.setDestination(5649U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.2889273977674566);
    msg.setSource(28341U);
    msg.setSourceEntity(156U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.648395601502893);
    msg.setSource(35967U);
    msg.setSourceEntity(245U);
    msg.setDestination(59477U);
    msg.setDestinationEntity(49U);
    msg.duration = 55133U;

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
    msg.setTimeStamp(0.01038691482379539);
    msg.setSource(24805U);
    msg.setSourceEntity(136U);
    msg.setDestination(23413U);
    msg.setDestinationEntity(244U);
    msg.duration = 52255U;

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
    msg.setTimeStamp(0.21397101184218315);
    msg.setSource(52355U);
    msg.setSourceEntity(249U);
    msg.setDestination(32059U);
    msg.setDestinationEntity(123U);
    msg.duration = 8560U;

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
    msg.setTimeStamp(0.6219023020886824);
    msg.setSource(61721U);
    msg.setSourceEntity(189U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(76U);
    msg.enable = 2U;
    msg.mask = 3150889832U;
    msg.scope_ref = 0.8981356667044273;

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
    msg.setTimeStamp(0.9011905704346952);
    msg.setSource(50324U);
    msg.setSourceEntity(123U);
    msg.setDestination(55436U);
    msg.setDestinationEntity(217U);
    msg.enable = 19U;
    msg.mask = 3202192502U;
    msg.scope_ref = 0.14436759367653307;

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
    msg.setTimeStamp(0.058420773422702243);
    msg.setSource(42865U);
    msg.setSourceEntity(186U);
    msg.setDestination(61313U);
    msg.setDestinationEntity(192U);
    msg.enable = 172U;
    msg.mask = 135489138U;
    msg.scope_ref = 0.020829816076901375;

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
    msg.setTimeStamp(0.1085891468815372);
    msg.setSource(41901U);
    msg.setSourceEntity(53U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(118U);
    msg.medium = 235U;

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
    msg.setTimeStamp(0.6358336133649343);
    msg.setSource(9566U);
    msg.setSourceEntity(202U);
    msg.setDestination(3789U);
    msg.setDestinationEntity(145U);
    msg.medium = 161U;

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
    msg.setTimeStamp(0.8512554515975677);
    msg.setSource(2138U);
    msg.setSourceEntity(251U);
    msg.setDestination(17334U);
    msg.setDestinationEntity(249U);
    msg.medium = 168U;

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
    msg.setTimeStamp(0.4759289976255512);
    msg.setSource(14143U);
    msg.setSourceEntity(33U);
    msg.setDestination(26209U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4118894710986475;
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
    msg.setTimeStamp(0.717689308764711);
    msg.setSource(60103U);
    msg.setSourceEntity(214U);
    msg.setDestination(35735U);
    msg.setDestinationEntity(186U);
    msg.value = 0.2368480895228674;
    msg.type = 35U;

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
    msg.setTimeStamp(0.5120721377307398);
    msg.setSource(8790U);
    msg.setSourceEntity(167U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0007731092263193462;
    msg.type = 39U;

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
    msg.setTimeStamp(0.8875179726327045);
    msg.setSource(30991U);
    msg.setSourceEntity(1U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.9105875857840269);
    msg.setSource(47017U);
    msg.setSourceEntity(57U);
    msg.setDestination(31490U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.1546961661640962);
    msg.setSource(44929U);
    msg.setSourceEntity(197U);
    msg.setDestination(12314U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.573628645064092);
    msg.setSource(14009U);
    msg.setSourceEntity(18U);
    msg.setDestination(59212U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("UIMGQWEJNUTGCIQQJFYSKTRRPLBKCMSPQXUTDOGETGTOFCDUORTFZIBWMSCXLWWKPODZMHAUHHULFVONZPWGFXRMHNXCVFNSEVUYCTXCVGAVYNFJYHWWNNTSXZDGSNWXEDOOOQYXJVIZVBCBAPRKBFLJMDDHLMBGXJYXKTEKFVEDLAPYUDZHMCQIEPSLZAHMYAZRQUNRSWLIPNRPKZVQSSQRJEIJIGJDBFROBEVWZAKMJKI");
    msg.description.assign("OZDTWCPHUGWFYWNDTSPRYBTXVIZAVTPVGMHOBZFXAWHP");
    msg.vnamespace.assign("ZYTWEUHXKMXFGWDGOKZAKXWRBDBIUGVTAZBHTVNESQJKQKHNHWMAJWHOTGLNOJXFQDFIIJHORMQTXIGRZFXCFZITRPBCMSYJNJMNAVVODBAMCAWDUMFQOZYZCHUBEGQYEUYROIMIBSLIVTNDFQYIPPGSCOARVLVBYJEXEXLESRVYICLDQHNWCCJNLSEVPLRHKXKDADJHLP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XGKEIFLBRYSQFPDPPOBNLTVGHYFRXWKITVTNQTWDUGXPZUUUPRUDOVGJMUUVCWNMTKCMBWDSM");
    tmp_msg_0.value.assign("EYRLOXOUNITCYKLGPXHXIDVZFHQSCUDSRXWST");
    tmp_msg_0.type = 127U;
    tmp_msg_0.access = 50U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OBSGJYOCUXWQDDJGFFCTYIHMVMMHNMQTDZVUONIQJTZRAZVGPVQNBBHUTCALANKIRDRSPRCVIYGKSLPTSLNXBFCEIEOLHXYURLJTOXMISGKXYQLPZAMWWITDLLGVLCDEFUUESIUTCUHPHFNFHYYBAWYMSDARQPRIZBIBXCZOPQPDJJXFJSZAXVRZWWDOFKSEKLNBTWPVBGJWXKWZEMKEUGVFQCNONMXYPMOBJJTQFK");

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
    msg.setTimeStamp(0.6134699975300079);
    msg.setSource(47174U);
    msg.setSourceEntity(247U);
    msg.setDestination(50590U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("PCJQISZUXYRWWHYCAGFRGYQXRVHJLOZFWUZVPPWEIDSMCELZVYQFMIRQQLQDDQNNHBKXTEGKSRYBJUGDMSARFWMJUKFNVDENNFKIIKYBFMCJASXHRZTPZJATADRMBHVAABXDZEQXCLSLONTUIIKWUCEGSFYNGPLLFBVRJHVXGVOVOPKTORFUJBBUSTMYUSPJGEOTLPNEWXLBCZTZZAMHPNHYQWOOPSDWMLT");
    msg.description.assign("AGPZPRPFOKAQAESYZWJUHLUHCJWIFIQWXHIBDTAJBXMYKGYTGRDJBVSQCYZTCFIWLTGWFIEUJUHRXNYOOWHZBCQMVNE");
    msg.vnamespace.assign("EILNFRHYQIHZIQGEWFLGCNKDQKHPFGFXYZPOQTXIZOWOSDSYUQBBSURAOYAIOKERNJEEJXSKBLRTWHSHSVCWIYMBLSIZUGFBAZATWNRUMHGDCNZZWIITAUGJCOYURRJQHVXFYDPLTOGJOYCDARHUMNELQAPLNOLVBABCMJXGHLKZBFUMYVXXT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EGPUUMUHFIBPBCESZKTPPGLWLXFWSTJBEZZYQIEBGHZTMMVJCEYCXHDAQYJWYPOFRHODYLUHCZJORFAGEODYQWOWJQRKQGCRILBBJSYJTZOKPKXJAYFMHSWIXSFIZVSPDNPTMOKXAAGLCPQOLRDIHXZNRFHZWVZKVIMEQADMGQRKUWTBNQXNSU");
    tmp_msg_0.value.assign("BYLTVTPVXPKFRNAQQJWNFYIRPRFDJCWD");
    tmp_msg_0.type = 76U;
    tmp_msg_0.access = 208U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OPUXYNDMHUSINHEVXGPFSHCWWZUNBTAUCCQZNQTQTWDPITPMNBHSALOFOZFFKIXNTEQKJLKSYVGVVMDJONTLJELAFCEO");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("GFXVLHROVXMMURDGTIJJQUUDFIAUTRGIKRJNVRMNRAHSCBUJWNMCTVCHJOEUZWNFTKJFPNPOMBIHOEDRZNVKVDTTQMAYMEMBHPIANFHGLRWKIUDUZGYX");
    tmp_msg_1.dest_man.assign("MVXOUXMFKVBFVXAANHIPGMMGOCHIDETZMWVTCOGDKQSCTNNLHENELJRUPBPZYWQZGJMLRTFFDAARNJTSSRZXKHLCYSYJHWNICFGOPWIGLUWBQJZPZZVNBIWUKMDUIOSWKYPOMTNUJAREKQAFVWPGACGQHFSIKIEODY");
    tmp_msg_1.conditions.assign("NHRUYPTFBONMESIBFJGPAPXHEGHEWJNGBLJDVVMVPVCOWIGMDLOFIDOXTEYLFPJJFCSHMIXKDKVQZIJRPYZKZRODXHBBAQCUFTLHNUZCYRTRGKHQZFSYOFDZSCOBEPDQLZWKINLEQAONIATALRQOQLSGCRZJAUYHABTQWDEWCBJWMHBZUSXKWEQUTLGM");
    IMC::SmsState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.seq = 1533387566U;
    tmp_tmp_msg_1_0.state = 197U;
    tmp_tmp_msg_1_0.error.assign("TSCUUVHDJPU");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::EulerAnglesDelta tmp_msg_2;
    tmp_msg_2.time = 0.22547329552650408;
    tmp_msg_2.x = 0.6045193747426705;
    tmp_msg_2.y = 0.6130610501275466;
    tmp_msg_2.z = 0.9593805333944999;
    tmp_msg_2.timestep = 0.5160204132596744;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.13334868106305564);
    msg.setSource(23017U);
    msg.setSourceEntity(83U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("NYSHRUUTFBDLHCQTDESCMPHPKYOJJCKBLSRQSVZJGVAEDXYMEGODUITIMOACQRFLCQZCKZKEYWRXOKEYOZXFXVSXBPUHCWIFORBHXGQIVDGUCGNKVXBPVMGBAWMZFSJTJOSAUXYUDLMAFDNGQAAIOMXYNJR");
    msg.description.assign("QAUSMIKCBFYBMDIZZQTHSOQLWWAUVNUZQIDCVIKIPFFXJAWBJTDMSVXFXWQXAFOKERINUSEOYXTKXJJRBAZCVRBBGYQYXPJJDMIQZZMTWLGYVWBBTMRPSNPESTGCEMUOLENALPLNEXGDHKONVUIWVNKYSYV");
    msg.vnamespace.assign("ZGPNMHQVFLBKJCQFYMQJTXREZIPCSOQOZLNSVHNZLLHTQVHUWMGKOVOBEWYTMTBTX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CMEYDVDHRGSWHUTDAFZTFCJIKFCHYRMEGYAPIJHIQSALQUVZGEIEYZZPYWFRZUSGOCQNACKCKTOHLLJE");
    tmp_msg_0.value.assign("GVEQONJURICWGARVCKREZAVIWWROD");
    tmp_msg_0.type = 136U;
    tmp_msg_0.access = 33U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PPYWGHUJOEQUMRNEXYZLYCFUEPFXUXVACHXDUUIVTRJKWWFYKAHTSAHMJEBSLLBRL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SGRUTJURXMACVTKJGQPMJTAGVZQBSFBJEEWZYYNKOKNCYWPGONGXUVDNBFMAQOYIBUMLDHBRQDXRECDQVHIZSRYTIAPMGEIBTALXWUXKOMXUVXWYQCWGFVHKAUIMOFVXNPLZKNOSMDBJRQQEOPXMUIRIWALGPDHLYBJENKRHZVKFWNAZKQNJIFWUPZSWPCLTZPLTCSAAUJVIQYBOJLYFXTSNITDZFSCREOOP");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.45733366589234203;
    tmp_tmp_msg_1_0.lon = 0.5367738993688;
    tmp_tmp_msg_1_0.z = 0.653947952200948;
    tmp_tmp_msg_1_0.z_units = 126U;
    tmp_tmp_msg_1_0.speed = 0.8370342213172622;
    tmp_tmp_msg_1_0.speed_units = 152U;
    tmp_tmp_msg_1_0.start_time = 0.3592827627815339;
    tmp_tmp_msg_1_0.custom.assign("TJUNUVYLNGIPDWYQJMNWGRAXGVCNCUEEDEDFKZEHLPIPOMTVSFQUQKORXSYJMCPJRJQBAGCIVKBZWMIOZCIMWVNFOHKOQQMCPIRYKYDMSYHAILDBZVOHXWTUPNLSFKZUIKUJGKHSANVSJAAL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 163U;
    tmp_tmp_msg_1_1.label.assign("TRUSEKVHPCBDALQHNWI");
    tmp_tmp_msg_1_1.component.assign("XEXMGUWPVSEKTQVDSMYUHYGLGOIJJTMRJYPLNUUBKZACLIVMCMAROAGNHAPAKJGYNYWDQBUHNLPIBWKZXFGNZXCOAREFNLQJFHIPFMSPCVDNGVRHPVBERFUJR");
    tmp_tmp_msg_1_1.act_time = 58491U;
    tmp_tmp_msg_1_1.deact_time = 21128U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DYUHEATBNWHJMTZTFPWCDRDLJXISDRSHEFIBXYLKJCAKQOLCAOANGIUCDFSKGEWDYKJFKUDZXSPVSF");
    tmp_msg_2.dest_man.assign("UNCMPUHKIPOKKHSFYDTAAOKNRZSRTVIMLSCBEXGSA");
    tmp_msg_2.conditions.assign("FMNJHDOVLJFGGXYCIKANDMHENLEQLZOCNPUZBRXRDUEJZQMFUTZHHKITHGLZXEMOYYFWLKDYMHUSKSQCMTINRICXKTWVYFXKAKZBPNGRYXINEIWPWEZVHQWLJAODYNRBCFQDQLWMVWBUVXDOJSYQVUIGKGUEODFVSXHRFAVSESDMPWMHBCQSSOUUZOJVFLPGZHLIJCPLTARGRQZXTPAGRERO");
    msg.transitions.push_back(tmp_msg_2);
    IMC::RelativeHumidity tmp_msg_3;
    tmp_msg_3.value = 0.22046281898563547;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::DesiredSpeed tmp_msg_4;
    tmp_msg_4.value = 0.668338344665796;
    tmp_msg_4.speed_units = 210U;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.3192512503049826);
    msg.setSource(8794U);
    msg.setSourceEntity(162U);
    msg.setDestination(30588U);
    msg.setDestinationEntity(4U);
    msg.maneuver_id.assign("JMCFYNYZTYILHEDPGGXZCJPLXTRZANJZSHBEXSMCWUCTTQPAWOITOZLTBJLANXPBBIFHRQIAK");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 38229U;
    tmp_msg_0.lat = 0.8313790676883892;
    tmp_msg_0.lon = 0.2870158190744352;
    tmp_msg_0.z = 0.9938757576604549;
    tmp_msg_0.z_units = 2U;
    tmp_msg_0.speed = 0.7605516659077298;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.duration = 14562U;
    tmp_msg_0.radius = 0.05829474593334105;
    tmp_msg_0.flags = 93U;
    tmp_msg_0.custom.assign("QTHBATLJRSLXDIXKWQLDCMQZMXW");
    msg.data.set(tmp_msg_0);
    IMC::DepthOffset tmp_msg_1;
    tmp_msg_1.value = 0.7593126198006614;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SaveEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("NVQYEXFPXALARLBJXGISBLAEVXBVGKOVSJZHXDXESNESUAIRWCJBMSGHPCYPGTZZQFLQVYRRWHCVTDNNAYRTDQIPMIAOPXUKQTRXDUZZYUINNTAZFCPNIAKVOTBLUHWHGVCILNXSMLOWHDJOJYJPUEPREMKEJFSKGBIWIOQKSUSDDWGRRKKKRLAOFEFCIJWYXTGWPQHEYFYLYAFZQHJMCSBGDLBUNCQD");
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
    msg.setTimeStamp(0.33218978048953796);
    msg.setSource(12020U);
    msg.setSourceEntity(129U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(2U);
    msg.maneuver_id.assign("QXYLKDPWETKRLBJNUKGNYKYADQWUHPOPHBUYNJVRHCRFNEPHQVIADLPJUIODLILOPGOEJRZZQJCAWYCOSPPJDHMUPAMHIFJVIZLZEYKZDBXACULRAMHKRTGC");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 4396U;
    tmp_msg_0.lat = 0.5399970325950415;
    tmp_msg_0.lon = 0.8816153400973514;
    tmp_msg_0.z = 0.1954849073697943;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.6606181174476738;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.duration = 14247U;
    tmp_msg_0.radius = 0.2841467362749187;
    tmp_msg_0.flags = 127U;
    tmp_msg_0.custom.assign("TBBPCGCPYPGMXVO");
    msg.data.set(tmp_msg_0);
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MFCFNUKZNVVDKMBFUAYKLEWTLSAZRVPDXOZSZOT");
    tmp_msg_1.plan_size = 11080U;
    tmp_msg_1.change_time = 0.026966155698927907;
    tmp_msg_1.change_sid = 47311U;
    tmp_msg_1.change_sname.assign("LHMKTUUFQSLNWIAWUKIPNWKXAKRSAQEFTNARXELVAEDAXKQXOECFWGTDNDMNARQQHNJGPEOYFFDSGVMZXQMQRTFOZJOUNRBZLKYGFH");
    const char tmp_tmp_msg_1_0[] = {60, 20, 81, 3, -9, -126, 99, -16, 95, -102, 21, 47, 8, -91, -127, -65, 69, 31, 110, 98, 71, -55, -84, 39, -29, 77, 60, 83, -117, -45, 41, 21, -99, -34, -84, 28, -87, -4, -66, 43, -41, 63, -62, 18, 18, -34, 62, -64, 43, -112, -111, 92, -111, 50, 67, 2, 122, -47, -112, 2, 123, -60, -120, -5, -116, 93, -120, 0, -44, -23, 78, -109, -86};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionKeepAlive tmp_msg_2;
    tmp_msg_2.sessid = 2789703319U;
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
    msg.setTimeStamp(0.8410504740568603);
    msg.setSource(38682U);
    msg.setSourceEntity(50U);
    msg.setDestination(34156U);
    msg.setDestinationEntity(26U);
    msg.maneuver_id.assign("RJGRFVFHKVZAGBCGNUITTMCDFOCNEWKKWIXNJMYSOJFGHVCRKXYRRWMOLIAILWATXCIELPNHLRTESVBKSUKCZKHFDXBMRMUYDOPCMO");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 46038U;
    tmp_msg_0.lat = 0.2317976939429942;
    tmp_msg_0.lon = 0.6855423189217555;
    tmp_msg_0.z = 0.9870969697215048;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.6728008923505849;
    tmp_msg_0.speed_units = 69U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5327149599936057;
    tmp_tmp_msg_0_0.y = 0.5554874964079236;
    tmp_tmp_msg_0_0.z = 0.9192220514038915;
    tmp_tmp_msg_0_0.t = 0.14269361522630541;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CTPIDUJAIXTFUQSXEMBCJYVFCAJHEGYKUXXXBHOZYBSKBVGWLONQFOYSTYLDRACQONUIIZJKRFJMKBHYNJOWLRNBPWHRFMYALVVKLFRMXGMHWDMQOEUGLDKJYPRSUUKWESGRKLHDETXALEHADPINONCVNPTMDBTQRQTHXKCOQEVXCUJVTSLQCPZCXFBJDINTMGWTPZBQPGCISSWIZWRVGDIVNZNYDUKAPSHSPWVEZZW");
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
    msg.setTimeStamp(0.08753513080419306);
    msg.setSource(41699U);
    msg.setSourceEntity(199U);
    msg.setDestination(23807U);
    msg.setDestinationEntity(162U);
    msg.source_man.assign("RMAKYKQHXJLRBOAMVTBKPYHXQBJDSXOLLUSSGPFUKPWJJJGGNDYYCEIIWFKGFKBNYVYAVLNBARXGAUSATICHMGEPIHOJBTEDLIOEFNJDLWVQQZEVYUSJZXJYCCRUDTZQZUFBKWRFVHKBLWHISZTCRCUNRTHMCEQDOTROOPYHFPAAVOZTXFXWAXGWIIMNDR");
    msg.dest_man.assign("NCRXJTOAQSVS");
    msg.conditions.assign("XXKCYBYFCYUZQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NPEXUXJNSTLVMLDQKCBJUFCGICOZGJURUXANHWOGUOWQWQTPCDVYNAVVVTEFROCNLKZMMVMTGEZXDXXPIOPNIHXCAXRZBEDXSABFN");
    tmp_msg_0.feature_type = 231U;
    tmp_msg_0.rgb_red = 128U;
    tmp_msg_0.rgb_green = 159U;
    tmp_msg_0.rgb_blue = 191U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7326037492218125;
    tmp_tmp_msg_0_0.lon = 0.7101077946561903;
    tmp_tmp_msg_0_0.alt = 0.45631896655678417;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5945728219625943);
    msg.setSource(65007U);
    msg.setSourceEntity(132U);
    msg.setDestination(41192U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("MXOEGYUSCVLDVVTONCDZKTSACTBSVXWBVOINFLUAAC");
    msg.dest_man.assign("RLROTJWJPEGRZPBUCYIZPWGQARANBFOESAPWECNQUOKJFMONYEYLSSIRYRVQBJXXSIGFWKFTOBHILKIXTAZBDTUIHVLLJPKDBYFNOPTDDDUMWAUHQRQJTGANYAXTMUNAEMGZNNZSKCGMPCSFOKZFJTVOEODPIGKWPTCIBZJQCRLXWXCHSA");
    msg.conditions.assign("GPIPFAUKDTBUQTYJRKHLOQWHSOYBZUWVNJUQWSZLFYXMEQLXPIWGUAQDVVJFNDGFTZPGDFEMCAWCRSKCWMKFNBJLWHDGXIZEYZMHSXYWDWQPSXXDNULILMGZENOXJFPMBDUSZVCQAZCYTRSFEXIHRAVIETYUYPAPODJMRCONBLSHDTOCLEQRAKBLTFAHUNEJEZMHG");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5268779221448777;
    tmp_msg_0.lon = 0.7580834446112669;
    tmp_msg_0.alt = 0.2985250989563848;
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
    msg.setTimeStamp(0.7938500830161321);
    msg.setSource(21879U);
    msg.setSourceEntity(11U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(78U);
    msg.source_man.assign("XACDSHGGJUAUHZXKFPSSKJWALCLCVCJKQJXMLVOAHYIDGZUNMZ");
    msg.dest_man.assign("LFLHOGBBCHPLOPTCH");
    msg.conditions.assign("ZAAIEDXXINRAIFVOWOELTUCXNNCZBHRVHDJDPXVODMLVK");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6921786207296329;
    tmp_msg_0.y = 0.2767753555040535;
    tmp_msg_0.z = 0.11219246460467902;
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
    msg.setTimeStamp(0.28050221233475925);
    msg.setSource(7352U);
    msg.setSourceEntity(82U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(48U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YACXSLPAXXHQIPGKZOE");
    tmp_msg_0.description.assign("VAYOEWPZRWFRADVWUZYSZYJWWDFVDOFXNDKDHRMLZDTOGECNGLSZNNCIMUIGQCWBMTMEKWCGQLZUBQLSLIKGKFKA");
    tmp_msg_0.vnamespace.assign("IYNOXQNGFDUNWNLADVBLZCPWMQVDLZBUPFJKXBVQZHFPWKCGPXPAYHWTHGDXSHOWDOESGWKXNOVTSYQLVLWCUIPPOZBJLPAVURTYJAQCFJZRGTZBREKRDRHNIDLXAKIPFGEFFUMMTTAHRFZEMTJGJKOEKAVJZIEPFZXMRDXQAIYUWLVFSSHYMNBWBUCCLYHSDASXEMGBNVORN");
    tmp_msg_0.start_man_id.assign("GWOOACLEHZHEXPYGDCZXQXKCMZMASWHBQDJWVTTHNDWLLPBQGRPYZSSTRCZMVEUEE");
    IMC::RemoteSensorInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("TRZQCYIMSBGYIIOPOXMILQCVLQWFLZNXBYCHJIDZYRMJOXFEAXMWPVEAFAZVNRPWWKDFCHYPTFNEURRBADKJEQDFVGKPCSDSFLLQMGVWUXSSKPTTECIHTUBDUQAEEJIGQHLWTOXK");
    tmp_tmp_msg_0_0.sensor_class.assign("HBAGQNNWPCHXHNNTWYVVWJKJLRCXZMPHDLZNSCIVSYQYSBWOJRGBIAMFKASZZDMCYQD");
    tmp_tmp_msg_0_0.lat = 0.05701028999133495;
    tmp_tmp_msg_0_0.lon = 0.3600455662607671;
    tmp_tmp_msg_0_0.alt = 0.6912402278464359;
    tmp_tmp_msg_0_0.heading = 0.298802366679235;
    tmp_tmp_msg_0_0.data.assign("WFBYUFQATDCDHHYFQIGZTSHQALSRRUXGIMXZPPSCQPHGPBKALIDALRWCENM");
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
    msg.setTimeStamp(0.555601778528469);
    msg.setSource(46399U);
    msg.setSourceEntity(142U);
    msg.setDestination(61687U);
    msg.setDestinationEntity(198U);
    msg.command = 224U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CQDLYAGJXYNBAXPJKIYBLLMWRAOKNOKXOPVYIGEGZQFQQFGCBCZBLHWWQJLRBHZZGJWIPEMGXLATERRIODKNAWBQLXXNEVULNJMPXKOZNEAUEZ");
    tmp_msg_0.description.assign("YJUGVUOZXSNQKDHFZWSZXLSNATBJNZZOMXEHMWXIGFPBDSIATAWIPHDCRSCEURJGKAVYBWMGLIELYRHBXBENMJFQUFZFCMTKBVPYEPWHCZQCEACTVJXMCAKIWPSPYLYZEGUWPYQJFUCGEOVDWAIUBMMFVTPHABBNOAZELTFKOUWRXXHXKODJNLPMITRZDNKGROJ");
    tmp_msg_0.vnamespace.assign("IZJIXNPCRPFYFAWJVAKGWRCCLWWNFZCAYSVCJFOXTEPUOMGXQYLVUMWDEKPGYSVGQFGILDSLYXAOXBTQHMWPJFZRDKXQPEMUHZKHCISTMBTOCHBDMXRJVQOMGSVDUKGMARLNBFKJIYYLJZBRBOTTOUNCMRHSOZNSEHIETEWIGREPQLEYAPRFCLUAOVZSXCQHHQB");
    tmp_msg_0.start_man_id.assign("OECMEWQXYXQNDFPXWXDYHCZKDAUOLTNOGFBYGURXBIWEJIJUZUTY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FWAEDQZSZQVHNZCOUGWMPPAWBTMENFZCVSHVHNNQFHQTQJZEGDAPZBKFECJZPBBUWJLMEOT");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 45080U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZJATSZDAHNDPYBXOQPJFPXTGIMJRENWDTQPSKOTRKVVNHKCHAKBOUBRVFDZAEPAUOTWEEOSQIPGEYZZDYLYQRWU");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OLWXFSAFKUHOEHPYQIFPJSBQDRYFYKMHLBJXJYRJEGZNRYMPHLUYLTMYGBVWPITQJFCNHAJCAWQDIXWZRIXBELPIKJMNGDVIMTWSMBMZCVDGNXUSLMVVFGNSKAZHDCOPTLGPKRHSASFNZCAOQRQDWIKZMRNVUYUDJZDQOHWGRSAEUTQRYAXPTUQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CloseSession tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sessid = 3066833963U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.20858046641144457;
    tmp_tmp_msg_0_1.x = 0.9135385990894407;
    tmp_tmp_msg_0_1.y = 0.4078217192107906;
    tmp_tmp_msg_0_1.z = 0.2347487548678947;
    tmp_tmp_msg_0_1.timestep = 0.7575362621856345;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.9929734673067153;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 14458U;
    tmp_tmp_msg_0_2.custom.assign("JKXBDYPEKGDJEHAFDHCHBNVSTUOCRMYQUIJYHJXMCCJBQQLFPRPWQEMULMTYDUGTNDPNLOVJTCWXYTFBUINMAMXINNIROXXIDMIWYHBGEJZFKXWWVMVOCGGWUUPMCHARHZIHTPVVJKEAIRKSPAQSEGGKHHDFEORXYPILKSCTGAEZQWLELPABOOPORTYRFLXQLVA");
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
    msg.setTimeStamp(0.42456382894459577);
    msg.setSource(62864U);
    msg.setSourceEntity(203U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(124U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NHWAVDVUJUHPNHSNGRZZDYAXYAKSSFVWMSIHTNLAYGOTGKRQEZNDKIBFCWJGMH");
    tmp_msg_0.description.assign("KSHSGFHZSZMZAMKRHLBQAGAAYWCNMLFFAKTIQEPWAFPRTLDESZAJQEDBTUMILBHECPJZTWKIRMVBKZEIEUIRLVHZIPJRVXVVOWJUBNNXDTDHIRGWMEPMIXOEAWKOEIGYYBXTSMFNSDPWFCDNJXXVRNXVVQYHLLWFFYOOQRPYSNOTWJGAMJRUYJCKYUDAOWRDVGXPQGUOIHPJBUQLNOLGYLBDSKKUQZ");
    tmp_msg_0.vnamespace.assign("COMSVHJWCUJIGVWTYXSLOSYECDLVWPXOBXH");
    tmp_msg_0.start_man_id.assign("BSBICTRLWUGVHPYXTDRCLHIWPGYDJJDQTZXQRXYYDZFZFGFYVEOJOYLONISHGQJZYPJB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EPFYOAOXPXFCVAYKT");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 62350U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SYAKGGCSVWCHKTQTWBYVLPGCDRQZUHZQXWVVXGNQHSSWMWPMKFBDRCXVHDJEGDF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9067447424712015);
    msg.setSource(64325U);
    msg.setSourceEntity(131U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(149U);
    msg.state = 17U;
    msg.plan_id.assign("ODEEMIEZKMCIXHVCPXJNGKHPECJYLNDBFUIMNRAFWUSSHRZUUPCMBNXZAWFXWYQAXQEKFAKGRMJMITLWGBRBOMBHDWXVLJUQYCWYFJNZOOZZVSPYSHOEPGZFUUPAZBOECKTKHPNJIZQUAAMSNVGSTQIQVBJWFPFNOYYAGLVGMTTRCTWTMEGZLFXHIOSRYDSDDORAHVNRLIFLLGSDBDCQTVTQDU");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.41519791161122444);
    msg.setSource(13457U);
    msg.setSourceEntity(169U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(124U);
    msg.state = 128U;
    msg.plan_id.assign("ARYIRBPWSYBZLPPLPJTVXRMIBCPNFWRIWDNBINIFAZROQPSNFGYHQDRAJLPXDZUEQJXZZXIPIMHSCBUGAXXJSHGIYMVMEOCTYLZLJRPGQLXYEFETVPSGAAOTKKOIBKMAUSNJTOKWTKODEFZXZVECHMODWXSVRFNVVKWSWNAVCLWULQDNFEQUOMQUXDYHWZHFCGCZGUAUCBHEJRUHCFGOGKWBKYYNHROMKFSUBBLVEQTDLIJQEM");
    msg.comm_level = 119U;

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
    msg.setTimeStamp(0.7999873599874934);
    msg.setSource(43118U);
    msg.setSourceEntity(182U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(154U);
    msg.state = 151U;
    msg.plan_id.assign("TVSLPYVGFGXMNLSLBJLEEIHCJIUKCILUM");
    msg.comm_level = 172U;

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
    msg.setTimeStamp(0.9015642956114728);
    msg.setSource(36964U);
    msg.setSourceEntity(44U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(151U);
    msg.type = 209U;
    msg.op = 104U;
    msg.request_id = 63602U;
    msg.plan_id.assign("EPVWHSRQSBAUKFEZHRJBGVBRUSFYZDTFESQWLDCJNLADIGAJXOOURKPMGYMXNOHSRVIXZINTTQXIONWYOVVXYDSVIHMAGCZDPYORZBNDSGOPJWGUXIPTZJZKVTPRWAHFXOYGVBPMLTEAORJKWFMWHKWQKGOBKUQEMDIQCMVBNGFLLEIMSGEMXQUUNQKYRBPCLWPESHHZJNLHMYTFQQHLTBAKIFTUDNBSCIYLCDNUFJX");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48681U;
    tmp_msg_0.off_x = 0.6665912927167554;
    tmp_msg_0.off_y = 0.6550532276057702;
    tmp_msg_0.off_z = 0.3754000738965724;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONVDQUZUJMGYXKSZOEROMPYXKONFYBUQTXJNBEEJKZKEYSVURCBMIPRDHYQYLZFGFMKSQOODHPUIPSMXATHCJARRFHFVAWOAFWCKLRSGCKHJTTFVVNHLZJCIAJGAFZEEPQWDZWRUVMTPQJLSHYDKPBPHXUYWJVMATJXCMDDBWONBTCNWTBCKUREXZNGLYTLUMABPMXUXVH");

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
    msg.setTimeStamp(0.08293616623692435);
    msg.setSource(30290U);
    msg.setSourceEntity(21U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(254U);
    msg.type = 192U;
    msg.op = 5U;
    msg.request_id = 5199U;
    msg.plan_id.assign("ZSCEQRYAFPCSTUTYJSMCHAVWBFXDJOHWBXNHNDHQKRMBOGPOZECONKDLENWPABFR");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("EZWQWVCOSUCTFTRMBNKUDJKIOBJBUBQCGYATPIKYJKYDWKVEZDGMHRPEHSIKHULJUXOSPBRA");
    tmp_msg_0.predicate.assign("HGYVYGKQTYZOCJODAXRNMUCZZXCEQCAVRWSPRUFWGDAIRCPLSYTZHBHOAMNZUZGFVUEQRKYPNAVJXDVDPHJCTJYTQSIWWIWJEGSHIVDWQERSXJTVJXPXBGXI");
    tmp_msg_0.attributes.assign("MZMMZKOLNCMGXMUZHFQWHYSKMZIEEVGBDCXPJITXVFWLPQPPQIWMJRHYHGPXSSARDG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BLTOMDJOFXEMLUGOKAEHDTPXFDHWBNOODNUCQIESSAPLPYODMJZRBSNXGTZZPXTUKVHKBVRLFOMYOESVCLVSGJYHTWBIPFKDVEAICHGAHRLLJPCZAKJWKEMJJPVWDUQWFLFGWTBSENYZREQXZTSIJLX");

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
    msg.setTimeStamp(0.24532995193894613);
    msg.setSource(35063U);
    msg.setSourceEntity(173U);
    msg.setDestination(33879U);
    msg.setDestinationEntity(169U);
    msg.type = 241U;
    msg.op = 215U;
    msg.request_id = 8548U;
    msg.plan_id.assign("SKTUDELSJLNAWWPNGTVTEBMBYMRXCXVIBKNETGINUPOLCHPXCEGEXDKQXMQBHJZQRVSLKPIHLXUBBEFSDUNHYOTLIAGNZPAPMFDTAWUSBFJOVDVQUOGIYNXMCQQTRTLSZKIXBQRCFDEYFGZJTHQIHMM");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 3795U;
    tmp_msg_0.control_ent = 114U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 65U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.758252886628337;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 224U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.5188704561148445;
    tmp_tmp_tmp_msg_0_0_1.z_units = 65U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.567891944303285;
    tmp_tmp_msg_0_0.lon = 0.9722927845849335;
    tmp_tmp_msg_0_0.radius = 0.9460208474197046;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 237U;
    tmp_msg_0.proximity = 117U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXXQKZPEJMSTVHAUISMCVRUOXVEUVUZHFMRFBLPHRTIRBGTYRWSEZBSZKGRPBWMRBIQLCPBFYGGNICHVGEGYLXCONQKTMMUSZNHNXPNDOMMKEOUCRVLJDSWDQTDIOCHJWLA");

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
    msg.setTimeStamp(0.7050967024534708);
    msg.setSource(19042U);
    msg.setSourceEntity(46U);
    msg.setDestination(18921U);
    msg.setDestinationEntity(193U);
    msg.plan_count = 6730U;
    msg.plan_size = 4045902254U;
    msg.change_time = 0.1776357384193068;
    msg.change_sid = 16891U;
    msg.change_sname.assign("MUYPSNYZBLBGRPLIEDSATHTNJVECSOCLQIWKURXWPNMOUNUCXDMVGVWIVTG");
    const char tmp_msg_0[] = {74, 75, 107, -77, -125, -103, -24, -67, 102, -69, -122, 49, -33, 31, -2, 61, 27, -106, -93, 124, -12, 74, 118, -3, 9, -121, -98, -92, 24, 105, 97, 78, -85, -18, 8, -43, -120, -77, 76, -32, -102, 17, -2, 98, 4, 41, 82, -80, -102, -69, -42, 101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HIBVSMWQEYUKARBQJRIZSYGXUSLOHISOSVGWNXSCQALDFYKAWLRXDMG");
    tmp_msg_1.plan_size = 16767U;
    tmp_msg_1.change_time = 0.19081761301277855;
    tmp_msg_1.change_sid = 65450U;
    tmp_msg_1.change_sname.assign("XGHDIVFZWTNPCNBSNRKCITUHJSZPYDQHPXBITEXIAQSXDFNPQMHKSCZXDBLDUCQFDMYYUZEJCTOAULXYJWBRKWWMZUURPOJBWGSMMOOKGOGJLHQ");
    const char tmp_tmp_msg_1_0[] = {-97, -76, 76, 64, 71, 14, 96, 95, 108, 116, 118, -124, -58, 0, 63, -98, -123, 110, 83, 53, -28, -38, 100, -10, 59, -47, 49, 35, -15, 82, -65, 31, -5, 4, -51, -122, -119, 41, -93, -13, 12, 64, -75, -6, -119, -39, 122, -119, 34, 105, -53, -37, -120, 64, 36, 117, -4, 54, -28, 2, 27, 1, -16, -13, 89, 111, 16, -99, -122, 45, -69, -46, -87, -101, 87, -35, -21, 32, 2, 42, -48, -87, 84, -20, -73, -1, 7, 13, -96, -65, -42, -81, -33, -105, 31, 88};
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
    msg.setTimeStamp(0.9023818819376455);
    msg.setSource(63611U);
    msg.setSourceEntity(213U);
    msg.setDestination(36675U);
    msg.setDestinationEntity(115U);
    msg.plan_count = 20054U;
    msg.plan_size = 285791913U;
    msg.change_time = 0.6748247200343085;
    msg.change_sid = 59426U;
    msg.change_sname.assign("ZPCVCTQLMCFKMXMPYRBCSNTLOELGXZTKUQAAS");
    const char tmp_msg_0[] = {108, -24, -28, 74, -96, 52, -119, -18, 59, -27, 110, -46, 12, -46, 35, 102, -35, 124, 24, 103, -82, -83, 86, 36, -5, -28, -18, -19, 28, 13, 80, -31, 123, 97, 107, -58, 23, -50, -93, -105, -94, 108, -95, 73, 53, -38, 31, 74, -113, -107, 10, 114, 0, -95, -33, 108, -70, 92, 89, -107, -67, -65, -98, -117, 37, 121, -116, -43, 103, -101, 37, 7, 113, -76, -121, 28, 106, -73, 14, 18, 80, 96, -122, -115, 90, 7, 121, -63, -71, 78, -30, -84, 123, -26, 70, 92, 45, 58, 112, 25, 48, -49, 48, -56, -75, -1, -11, -94, 101, -12, 18, 36, 99, 54, 91, -26, -127, -16, -57, 19, -65, -44, 104, -62, -62, -35, -122, -108, 45, -1, 99, 12, 2, -8, 1, 126, -20, -33, -42, 75, -30, 9, -127, 101, -32, -106, 36, -108, -28, -115, 46, 122, -11, -8, -124, -115, -66, -42, -85, -103, -90, -89, 36, -88, -89, -36, -15, 121, 93, -117, -98, -69, -126, 100, -126, 98, 115, 66, -23, -9, 101, 54, -48, -17, 75, -94, 10, -49, 52, -61, -96, -11, 96, -50, 6, -63, -57, -90, -103, 103, -92, 71, -54, 61, -103, 86, 2, -100, -22, -44, -8, -25, -32, 1, -94, 60};
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
    msg.setTimeStamp(0.9729457257970304);
    msg.setSource(14601U);
    msg.setSourceEntity(141U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(153U);
    msg.plan_count = 14842U;
    msg.plan_size = 86635295U;
    msg.change_time = 0.08609594429771628;
    msg.change_sid = 60210U;
    msg.change_sname.assign("OFCHCPHGBFIKBWBRJQPBNYBHLDWLSXQZPJSLUQGGGYOIPQPBWYLGOMAXZQWRSUUEAIOREJQZKIGXVIBORNFRFTJPFIRAMFKACXFFDNVENSDMDAMOJVPHTMTWYGKEAZLJRKCRIGEKQSLHTVEWMTZUXIQWZSIAIBUYDLERUOSVYNNWVM");
    const char tmp_msg_0[] = {117, 23, 74, -91, 66, 59, -40, 116, -18, -121, 52, 60, 18, -49, -99, 5, 62, -17, 39, 24, 47, 82, -26, 86, 109, 119, 18, -76, -90, 40, 84, 89, -117, -22, 72, 54, 98, 101, 72, -117, -63, 79, 106, -23, 110, -107, -38, 20, 17, -81, 84, -10, 91, -56, -76, -113, -47, -123, -103, 101, 3, 78, -91, -28, 0, 42, -5, -45, -108, -18, -120, -93, -8, -20, -25, 64, 78, -48, -78, -88, 123, -46, 101, -43, 118};
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
    msg.setTimeStamp(0.44904083365996716);
    msg.setSource(13516U);
    msg.setSourceEntity(98U);
    msg.setDestination(63992U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("VRXMQNXEWKPDPMJETWQYZNQSCGZAGYBVGWKWDLLEDRGJXFTUBAGLDMTMBOKKAISGLMKFCQMPWBPC");
    msg.plan_size = 7842U;
    msg.change_time = 0.683213449955143;
    msg.change_sid = 39804U;
    msg.change_sname.assign("NLCQXTBHKQOMOKQVTYDTPIXIIALMJWBEGUPURGUBJNSABZDLXYLHXKATXIYTICHWJFWWAVDUROBVYXLZQEZHRZQJVGDF");
    const char tmp_msg_0[] = {125, -37, -27, -40, -101, -78, 2, -58, 7, -77, 99, -112, -43, 18, -37, -85, -88, 80, -72, -17, -118, 52, -84, -60, 35, 51, -128, -57, 59, 65, 108, 52, 111, -95, -52, 22, -4, 123, 12, -64, 20, -104, -56, -78, -48, -95, 63, 52, 9, 57, 96, -109, 120, -128, 36, -83, -10, -24, 75, -56, 38, 47, -99, 74, -117, -5, -42, 17, 24, 17, 18, -58, 62, -7, 74, 64, 18, -43, 52, -29, -75, 103, -114, -98, 87, 59, -9, -112, 40, 40, -52, 25, -15, 26, 96, -1, 102, 96, -29, 49, -76, -49, 68, 111, -12, 125, -34, 102, 4, -61, 35, -37, 104, 76, 36, 6, -101, 117, 80, 103, -95, 55, -55, 77, -106, 37, 110, -41, -108, -103, 57, -16, -48, 37, 49, -81, 73, 109, -66, 88, 82, -42, 19, 57, 42, 7, -127, -76, 10, 63, -48, 36, 31, 70, 119, -3, -72, -75, 83, -53, -19, -114, 105, 95, 113, -10, -12, 42, -8, -60, -103, 16, -74, -46, -68, -108, -66, -96, -9, -75, 28, -33, -2, -120, 49, -57, 87, 60, 5, -39, 44, 75, 44, 78, -40, -110, -18, -93, -19, 92, 90, 47, -19, -16, -127, 28, -2, 83, -93, 16, -74, 71, -117, 7, -18, -121, -4, 125, -105, -1, -91, 51, 99, -101, 66, 88, -56, 103, 47, 35, 30, 125, -69, 54, 93};
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
    msg.setTimeStamp(0.6120290190267873);
    msg.setSource(2123U);
    msg.setSourceEntity(160U);
    msg.setDestination(54891U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("MMBBNDXCVHNKLHTAJJJIPHPGUHAUPRUESDGZRVBLAQJDTOZFXVONSCZGJALXIEGNTLZGMGBPMYTXBPZACFCDVKUGCEIUMPFTPUVRTYFYWGASLDRFORZSVQFFSJSWQHQKKVOWEYMAWOHLEMUXNEC");
    msg.plan_size = 38576U;
    msg.change_time = 0.40308403265557113;
    msg.change_sid = 28640U;
    msg.change_sname.assign("GVRUKPXNGQCZDVVRQJBBAQSBWONOXEDSEBZIFZDIYESJHHAUFJQNVMCNPRMYHDAWWZUWWWVKKSPTOVZIYDGGIBSULMGEHDYRKOKCNSNXLQYKOLSTQCATLLFQFGVMIHFNECCCDLYJXIKJLRNLPTRHJCVADYBTKPTFXUPVPWBGYKEWMMGXFZLDAAZC");
    const char tmp_msg_0[] = {44, 62, -72, 14, -82, -6, -12, -118, -70, -118, 115, 14, -86, -6, -110, -38, 37, 39, -60, 42, 111, -12, -124, 16, -94, -104, 92, 62, 45, -62, -14, 105, -78, -10, 59, -13, -80, 21, 55, 74, 109, 30, 56, 22, 6, 98, -52, -102, -92, 119, 105, -23, 121, 34, 5, -43, -88, -40, 41, -15, -2, -27, -82, -10, 64, -48, 104, 103, -53, 101, 37, 122, -91, -116, 38, 33, 29, 105, 74, -74, -65, 113, -79, 39, -123, 103, 58, -31, 62, 65, -35, -62, -9, -78, 32, -35, -2, -24, 24, 55, 126, 46, 43, -58, -124, 66, 62, -70, -112, -72, 50, 105, -96, 61, -67, 10, -36, 67, 32, -20, -57, 116, -48, -115, -127, -3, 34, 50, -107, 52, -19, -2, -12, 105, 104, -114, -62, 33, -118, -127, -89, -83, 33, 68, -36, -127, -25, 3, 116, 67, 30, 126, 91, 55, 52, 115, -121, -96, -61, 110, -84, -26, 17, 105, -7, -42, -128, -17, -125, -101, 73, -39, -53, -10, 65, 80, 35, -55, 19, -10, -7, 72, 60, 14, 18, -36, -48, -25, -13, 93, 57, 45, 125, -94, 12, -76, 91, -119, -19, -97, -87, -97, 62, -61, 126, 112, -29, 92, -47, 101, 75, -77, -116, -65, 83, 1, -45, 99, -82, 47, -63, 123, -127, -62};
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
    msg.setTimeStamp(0.47764612963053277);
    msg.setSource(56190U);
    msg.setSourceEntity(116U);
    msg.setDestination(18557U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("ZIPDWXQXDADXOZZVVIGJQKDRBJZECAEXTJKONGCWJMMKBELLAVDNUIGJQAESNAABCTVRNOQLHCOVKCTPJPZKD");
    msg.plan_size = 3121U;
    msg.change_time = 0.6537491114412277;
    msg.change_sid = 20042U;
    msg.change_sname.assign("IQRGHJPSMA");
    const char tmp_msg_0[] = {50, 77, 7, 115, -77, 69, -47, 70, 24, -28, 22, 106, 70, 81, -96, -112, 63, 80, 17, -64, -68, 76, -74, 118, -55, -46, -105, 1, -107, 58, 41, 29, 88, 56, 37, 44, 92, -58, 114, 90, -19, 124, 14, -61, -17, -37, -123, 65, 93, -35, 98, -103, 90, -49, -112, -63, -72, -111, -124, 101, 81, -104, 111, -46, 7, -84, -90, 23, -126, -108, -17, 107, 16, -111, -101, -66, -56, -92, -102, 124, 113, -109, 107, -109, 10, -13, -24, 80, -16, 55, -101, -123, 72, 73, 42, -30, 45, -44, 89, 106, 70, -38, 78, -82, -48, 87, -127, 55, 104, -124, 14, -56, 25, 29, 23, 55, 75, 77, 31, -124, 107, 59, 114, 88, 90, 52, 102, 106, 41, 14, 76, 73, 66, 111, 103, 32, 1, -30, 1, -65, -33, -90, 89, -70, 77, -36, -110, 71, 70, -37, 57, -128, 69, 19, -15, 71, 123, -53, -20, -126, 18, 70, 41, -83, 90, 125, -42, 17, 120, 76, -124, -62, -56, -97, -73, 82, -50, 26, 15, 104, -44, 8, -51, 62, -52, -30, -9, 105, 47, -74, -27, -7, 104, 65, 126, -5, 80, 0, 18, -18, 47, 87, 83, -28, -120, 49, -82, -54, 43, 44, 25, -104, 112, -47, -80, -117, 22, -94, 73, 19, 13, -123, 9, -6, -44, -95, -20, 70, 125, -52, -54, 64, -46, 95, -116, 123, -107, 94, 34, -67, 65, -48, 51, 10, 96, 24, 66, -79, 32, 90, 58};
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
    msg.setTimeStamp(0.13906070352309585);
    msg.setSource(41989U);
    msg.setSourceEntity(111U);
    msg.setDestination(7834U);
    msg.setDestinationEntity(153U);
    msg.type = 173U;
    msg.op = 24U;
    msg.request_id = 36095U;
    msg.plan_id.assign("UQKZMSPNMOZIKNMBQGNDISHJIDFZJXLSUCWHTEUDRRXAVIJVAJDXOMLEVAXXOXVPUKHCYJVCHHFLDRYGMCKINDKWLCGZQGEOJHBNQOYFRATQWJKOAFKVFRALMKQELDPGDOFZWPGBCFCIMPGEYXJZBOJUWPYCTBMEHAZLEZIWHGQFSJTAXVRNNBXSVLSNKEMFHDSYTPEXYBRDLFMWUYPISZLSTCYVWHITOUGQCTEAGIKPQBYWTNBUWQBA");
    msg.flags = 40051U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 45436U;
    tmp_msg_0.lat = 0.6484645011862077;
    tmp_msg_0.lon = 0.23748049435368002;
    tmp_msg_0.z = 0.8240972130994734;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.6443069069671131;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.custom.assign("HUPWFHBEXZHSGKQEQARIZLRZPNXDGKSTLNARHYJPYKYWLGYMTTEWVEFYDPHGZDIDWVZYMABWTOEYPE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RMBOBAOTMPIZLLRWCEUIMKTRSOZHNYGSIZYIVJZSGHXILDEHHPZPNSIKPXEPUXJQJY");

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
    msg.setTimeStamp(0.330397163974388);
    msg.setSource(37101U);
    msg.setSourceEntity(164U);
    msg.setDestination(16862U);
    msg.setDestinationEntity(79U);
    msg.type = 64U;
    msg.op = 54U;
    msg.request_id = 36612U;
    msg.plan_id.assign("GTISHHESTGNFZSJBXOVCILPYIRYVENOXKDHGPFXREDWAFXNYQMURWTQLVJUUYPSUXFEGMVMWPDFEZWBKNVWRBOYZZEHIUAPKKAKLRAGVIPMNEIGWIQCTHZOJBSTAMQWDTYJLIBPQMRLXXCOQLLEAJRDKWVDCCUZVHTUNJRFMHSLIUCKPOSFFGIMHCRZWJQCZUYOGEWXBBUZYYDXJM");
    msg.flags = 24756U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.7020482795189047;
    tmp_msg_0.x = 0.9824252417482964;
    tmp_msg_0.y = 0.657188896796447;
    tmp_msg_0.z = 0.08206889178128673;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVXPQMSAEFDWOGAMGDLRZNOSUFDXMQREUIZPWPHQEFUABTQYPUVRCTXAKFJYJJIXRESRBIEBCEEMYBGBGPFRJOQIYVBLQFMNRXRUYDOPDXVHDZHSSPFMHSG");

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
    msg.setTimeStamp(0.7428610205923175);
    msg.setSource(60671U);
    msg.setSourceEntity(229U);
    msg.setDestination(46159U);
    msg.setDestinationEntity(81U);
    msg.type = 162U;
    msg.op = 53U;
    msg.request_id = 4658U;
    msg.plan_id.assign("SJMNTJUXQSGDIEEZSARFGADHSYEIZDYFONIXQCTTHRVOUQNACJLYYWHHNPTOUHZXBJAEPGCVDXPRZVFZGLQQNXUJPHHOSAIXBXPJMJJUBLCFVBCEFKHPYBMKKFAGNVTKWGEZRKJTXZTEPCBMKKWSOOOPFSBTJASLCCNUYYLYVIWXPLEZRRCLDIURNDFBSKVTQXBUGVOLTFIVMK");
    msg.flags = 53375U;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 51U;
    tmp_msg_0.angle = 0.8629393136965112;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDLNCIUKIEFRDTOFVKRKWTGAZGNAYXBPMKMSKWQLWXSNCHVJBYVQTGMPTVXUIDUFMUVWIJASYMCHEQKCAUDOEPERJPDJDZLCJUNWQLHIEMQHZYZNZWMRGIUPYIOBTPFIENHMRBSMSUOFQTWXWEOXYFHPBOWRPSSSLCQAZGVJNVZNHOGEUALQXBGKSNTFQBGKXDECDNCAPASJTIJBYAGRZZVWLUPKQOYRDYRYOFHL");

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
    msg.setTimeStamp(0.693357513475655);
    msg.setSource(4228U);
    msg.setSourceEntity(146U);
    msg.setDestination(38146U);
    msg.setDestinationEntity(147U);
    msg.state = 114U;
    msg.plan_id.assign("GIZLMQCHMKVVFZMFPONDGIIXUFDEOVVYGFLDJYLRCUXGUMMHNGGJQUSHT");
    msg.plan_eta = -202252;
    msg.plan_progress = 0.8840290523669535;
    msg.man_id.assign("IAGFCATCQHPLNLGUCSXJKPHZKECOWPFECXLVWWMBMVZHMMIEIKWAKFKZJSFEMRMQDRHHRKPNEDOGXWYORDMBYVQLELDIGSSZTFYVFCANRTZTJCZYTLXPDZGBAUUBNYRYT");
    msg.man_type = 52779U;
    msg.man_eta = -175393240;
    msg.last_outcome = 120U;

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
    msg.setTimeStamp(0.5882837371872232);
    msg.setSource(35589U);
    msg.setSourceEntity(78U);
    msg.setDestination(11656U);
    msg.setDestinationEntity(71U);
    msg.state = 54U;
    msg.plan_id.assign("SUWDKLFNTSHGPEAAYNHWPAMWAYTURSEFKYVFQVKEULOIYAQAJXWCIWDLFLJLZHDWSTR");
    msg.plan_eta = -1053046536;
    msg.plan_progress = 0.06581562536042884;
    msg.man_id.assign("TZULAQHYGHUCUBMWRANZQDMJBXRMWBVNCESPYIDBBMPXZQEGBTJKNRSZSXCXSRCPVIKJAWDVXBASQROCJVITLUQINNHDROPTIFNIKPTQYKEEASRRCBLYTXEDPIHMJXVKKTAODQSOUUAFKFEGCSEWHYXMAZHPTYWLLEJPJFIUSKRWE");
    msg.man_type = 60743U;
    msg.man_eta = -483441954;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.9207131059700454);
    msg.setSource(57283U);
    msg.setSourceEntity(218U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(83U);
    msg.state = 190U;
    msg.plan_id.assign("JRRQWHBLCHZMBDJSZAJHLNKYGEJUHQWPPQVEEPQHBFYIDGBCRJWYVJSDHKMIVMHMCRTFKOEEZAOSXVAEVTMWKOCBJTNDINHBOXJYCGGYXZZXESALSXCWWSDZBUUFNOPRCIORFMZTSLSQK");
    msg.plan_eta = 1815899070;
    msg.plan_progress = 0.7081844463112379;
    msg.man_id.assign("BLWXLMSRGUPCJGKCEYYNIFBCAAXVHHFXUTQMXYVDTHJXVRMCCNXBOKOJPZHEUGCVLTKBVAFQSGINMGENOSPWSQMJWIXZXITELVHNQZHQWUZQDYGJDOQOSRWQYZMZNHQHDUKETFCAVKPJNBAHKJRKIXKEGIJYALYMIMYFDOVGOSBAFDDALNPUFIKIGEQCOMVMTTULUEGWNFTFSODSLPWZTKRCYPYZUDEBNWDBWPROBZUPAJSASLET");
    msg.man_type = 62835U;
    msg.man_eta = 2048453641;
    msg.last_outcome = 215U;

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
    msg.setTimeStamp(0.8468925464961476);
    msg.setSource(12730U);
    msg.setSourceEntity(137U);
    msg.setDestination(56729U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NPYOAQVZPBBLWPCFVYTBONTXOMGGTCCVHDALRGZQFBVMSWJCUMQANZFYCCKPUXVJODKRWYGIYTHVEMLGLRSWOIZLHAFDICEESJQNEVPKHUKGMIFUZMKIKUGBOEZTFSUCXYZQKFXIOHQTJNUTQNBBEMDDJWMIYMSOCPRKXXOTKNFBJPWGEFRDWLHJWIJURPTRGDHAVWZFISMSQHRPAAYGHBRJBJLVHXSYQNDSSZDOXZARNXV");
    msg.value.assign("HYDGSHAQTRPPAIMJVYTWZKEUCVMZFMGVRO");
    msg.type = 2U;
    msg.access = 202U;

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
    msg.setTimeStamp(0.34560430469265757);
    msg.setSource(30854U);
    msg.setSourceEntity(243U);
    msg.setDestination(34248U);
    msg.setDestinationEntity(240U);
    msg.name.assign("UGEHGCCOQORUGCYMPQENTJAFAREXGXXFQIZDHNZWUEHTTBFTSWOVCLBBJHQCJE");
    msg.value.assign("KDJDTLXGRNCBZFCRKVMMUGAANYKBUXIEFMTRJCUNLOVIRANQSWBRTJXRHOUQJIHTHYPHMCAYBGLHLHSPIZAQBTKSIJRCNPLXDVBOEWNZGUAPHBMYLVNZPSFVYMFLGPQKGPYWCNEHUKZPKZYBQRIOAVPJSQICMSMFFDJULSWFNTEADMQIVVHFLDYBUEEZEXZPTAEKQEGJIDFWDDVSUXMGYNDVGZCXWXWBUAQGRHOTCWCTOOJOSXYQZKO");
    msg.type = 156U;
    msg.access = 117U;

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
    msg.setTimeStamp(0.4672607366195547);
    msg.setSource(47227U);
    msg.setSourceEntity(1U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(71U);
    msg.name.assign("WWOMTCVZUGVVIIDMFCZOZDGSZROHYGNIFVGTBEXFXJRXKNCVCNNSSTHQAJLQPGSUHQTRIKMEDSELXSQGOCPWOKAHIYHUZEPKKARHWRQXOLYQNIUWEFBATADAETELSKYSMDLBWQCPULNLFSLRYWBGPCDXBOXBMXNZOUNINEZYACCASPFWMRPJRODKZMWJ");
    msg.value.assign("VMVFJQFVXPWK");
    msg.type = 117U;
    msg.access = 26U;

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
    msg.setTimeStamp(0.8273274318516677);
    msg.setSource(31129U);
    msg.setSourceEntity(200U);
    msg.setDestination(16925U);
    msg.setDestinationEntity(91U);
    msg.cmd = 194U;
    msg.op = 240U;
    msg.plan_id.assign("YNEPUCIKWQGJCTGUHWOSLYCJADUAMXRJDPXQOXBNATSUKGNTSLFINEYAGVSGWROZXKOPZJXIBSZJBIOFOAUTE");
    msg.params.assign("RFCBGXUFXBHDSGRMLVXDNJXMVBAQQKHNENHHQOBDUVPKOURBACXCELYFLCUKWPFKHTTMGUHJQAPQNPNWPZ");

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
    msg.setTimeStamp(0.7267584705325344);
    msg.setSource(30475U);
    msg.setSourceEntity(199U);
    msg.setDestination(3157U);
    msg.setDestinationEntity(250U);
    msg.cmd = 115U;
    msg.op = 1U;
    msg.plan_id.assign("AILJDGWSAYXLCCTZFDEKIYPQQGUWOBWCCAWBDKFRCCFTTAVZKATJVFLMENHVNPMXKBSRXMNQTPGNBIXAESURUNCZNDZQUNWKCRWWZJPLGKFONRRWOFKWVUBDJOBYKGLUJHXMYDZXDE");
    msg.params.assign("ZAZBUBNOAGZQSYEJDPKBFDPGIWWVPNIESOFOXKYAIIKKKIZDNZDORLGEKYRQUPYSEMIHFJGWOUEJITMXDCVJTTCDTJLGWMUJLXEEMUCRCAMPRINKOWDVGCXSOULRMJJXMAWFSLGHYHCRWHYFNZKTJGQBQBPPKLTBYFDYHNEHXTZFKNSMXOQDLBWRTDOSOERPQQAXNPFRVUZCPTWVGQHV");

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
    msg.setTimeStamp(0.07588865840391745);
    msg.setSource(60929U);
    msg.setSourceEntity(220U);
    msg.setDestination(11131U);
    msg.setDestinationEntity(151U);
    msg.cmd = 191U;
    msg.op = 51U;
    msg.plan_id.assign("VKUTWVDVTACJHEANKKBPOOHDBQLCYXOFDZEDNQSZIUODNMPQZGGORMJFSJSMGWJDEEKJUEFBULIVCXTXAHSGIXWONBRPDIAYTDRXKRQTAUBGWHFLWNLRFWUKVNFAGMVTPCZSHGDKHJBMVVTZCKIHSTSBYJZRFILZYXGQUFFXREMVIIOYJVMUMBLNQRRPWDACW");
    msg.params.assign("JFZJVLILUXWDOWCWGGMEYWVXVKRASVCRDCYNQSLCLXNVZTOMQDEOSHZRUMTSHHMZ");

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
    msg.setTimeStamp(0.557962330737776);
    msg.setSource(45072U);
    msg.setSourceEntity(233U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.8081057398586076;
    msg.lon = 0.7162450764141428;
    msg.depth = 0.018902032935806612;
    msg.roll = 0.6018332080042157;
    msg.pitch = 0.9191402943162859;
    msg.yaw = 0.7678017080640186;
    msg.rcp_time = 0.766939123971637;
    msg.sid.assign("HFNTAWIDVETQQSFWDRMKAARJLCHZGGETKVQIQCGLMLOFXWXIHZQIREHQYBBRAPZLJOPYBCECINWNIEESHARUBSPFEKLDPHDFOTFMCDJCNPZZNTCYTPCHKNFJTOUDSKNWZMUDHDKIKKXDVOZGTYGBLWXTJAEMUUWQRJVVKOVMSBV");
    msg.s_type = 169U;

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
    msg.setTimeStamp(0.3316652991899727);
    msg.setSource(45892U);
    msg.setSourceEntity(152U);
    msg.setDestination(46730U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.055785972683512375;
    msg.lon = 0.43239225807782844;
    msg.depth = 0.32942078053418;
    msg.roll = 0.5842167029583324;
    msg.pitch = 0.5884160068111655;
    msg.yaw = 0.6263608068069698;
    msg.rcp_time = 0.44360407980825656;
    msg.sid.assign("IQIYBHXSNMRVONVYPUWECHZRUAQKAIDTFDELKZHNNTBZKZSFGCEXUYJHLHXXWVPEKVWNPOGTXUOEKKACSGZQTXSXCAQMIIOPYEOESCZFKWYGASXVRNWBLJTUDLIBPRFDYGBWRMQHJCVNRBJVLPUTSNAKMCOXZFYZMWHPFJRJJZZWTTTLUCJQRHFDYM");
    msg.s_type = 62U;

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
    msg.setTimeStamp(0.16260845713496908);
    msg.setSource(48447U);
    msg.setSourceEntity(77U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.6480372883651038;
    msg.lon = 0.45197884113057896;
    msg.depth = 0.7824429451308118;
    msg.roll = 0.518968038208961;
    msg.pitch = 0.6828121860290952;
    msg.yaw = 0.6009311603462656;
    msg.rcp_time = 0.5298071405734573;
    msg.sid.assign("SVIXCXBLZLYIDGRSFZOWPCAMAHCOSFTUBFCQPNAKTFKCYGPJEZXLHKOUSNCELELKNSWKBJBOPIOSCNQEJQZMTBFGVANITIZRTCPVXUODYPZYYKAJQTJICBWFPWUZJIFIPQSMFAOIRNR");
    msg.s_type = 29U;

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
    msg.setTimeStamp(0.09342484756528258);
    msg.setSource(55848U);
    msg.setSourceEntity(100U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(95U);
    msg.id.assign("FCKDSGCTJIJHFRGXYMZWHUKIZDERYYHRIGLWQWIVXQAOBDAPQJYMVPLKCYHPSZZBAVXYBFHORELHISNNVVHTOAVDMZSQFFCQNGXJNHEPIEABNJUOTFYYXGNEJWSLWRRCTVSWSEQKWCIHDLINGTXFTMKPUMSUWABFGTW");
    msg.sensor_class.assign("RZBQYLZHABMSISCIWKYCQTTAIOXTDSWPOPDSQKPJAHFERBJNQBOHGMFETPIJGDTFXMGBGVSSYUVIDXMXLRUCBXFZGCJOAEPIGWWOOAYVHYFCZGMNEWKPDVUWJVFWKLZWOTXSDTLJIQBOEMNRQTNNQKALEBHIHSHBY");
    msg.lat = 0.6151057981680107;
    msg.lon = 0.6526803861874363;
    msg.alt = 0.7611844583322405;
    msg.heading = 0.31528891455104924;
    msg.data.assign("XWKTOMLPZTJKESFMVHOKRVTAYLLRRIIPANMDGJFJYRRUEBCHZCKGVMJOPKKGFNDZDJVILVEGOGQHZIQAHYMFHTWUFQWVAEBUUJZYBF");

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
    msg.setTimeStamp(0.3468969556308057);
    msg.setSource(58367U);
    msg.setSourceEntity(111U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(25U);
    msg.id.assign("UVZLEYDLKHHKJFVLDWJHWOKVBNUWQRGYBQNCZPTGCTTFUTVQTXJKRORMTNXMQXMWLEGAQXRQXQSNPHRTCLLCOOUZCNAFDEVSJMKBHNVDAZBGDOSADFHXEWAOMBEDPHOPYIAPJHUMROIJSFIGPZYPUKMHNFCKTWAGCYETXEREUVFKEAWIBVVVXPMIDYCZQFZLSKGJSPPMGDLTWBQAENNBSJYYBCODCFYZSIRXJIYBSGRIAM");
    msg.sensor_class.assign("NIJWTJWYTFTTGHLXAXCVODGUHPFBWVFQLHNDSKCOUIWYVABDNUOIHLPSBYKHEJQGRVOIFEUTJKNFJUFQLIBEJNMKYUKVQRDHAVDBZCDSGXMARZZRQPVTRKHXZIAKMTACJWSWQESALBZYJDOZCNOBYFTWUBDPMRPPIRIMCEFGSPCZ");
    msg.lat = 0.28175125949271274;
    msg.lon = 0.23501205825917237;
    msg.alt = 0.04397272772923111;
    msg.heading = 0.3491300147749712;
    msg.data.assign("YBZVBKBSRGNJMLUPFXPMCZRQSBXHJGZKAXNNMBHQACNIDCLXMBVBMPHIZTJGGOPGSMDCWPSHEPSWINULNVAOCZJXOFXYFVTURZWSXXOWDEFLFXREQAYLQDU");

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
    msg.setTimeStamp(0.27051627559718516);
    msg.setSource(12736U);
    msg.setSourceEntity(99U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(100U);
    msg.id.assign("IMMKSNRHFHCCXTKIEPQOEMNUAFXYVILRGVRPYHANYGULGLZCXFPZMALRDGHBTWXPADOSQBCHKGXCKDJZGFEDTEFMXAPRGXVPISKJLVTWYTXAJZYPQELULAJMOJUMIWQSFT");
    msg.sensor_class.assign("BXREXBJRULVYLORKHFDKIFKATSMFQQEEKBDVWIHGAEGWHOWCRZIAXLNLNYJKVZ");
    msg.lat = 0.771228679696825;
    msg.lon = 0.7353157920430217;
    msg.alt = 0.27066719644421877;
    msg.heading = 0.9405491353557083;
    msg.data.assign("YPPFAUSNAMPNSWHMNCHEQNXOVQMYRCKDKOXNALDIOVAEYBRWUAD");

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
    msg.setTimeStamp(0.07398155975278253);
    msg.setSource(7879U);
    msg.setSourceEntity(61U);
    msg.setDestination(29231U);
    msg.setDestinationEntity(7U);
    msg.id.assign("UZYZBVKQTNYXGA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SYNUOXFGIFHPLQYSCCFGQSXEGXJTOLCSZRPNZGPZSBRXTBHQUCIJAZRGAPVAMXBQINNDOEKMOOZDTMEXVHVQOK");
    tmp_msg_0.feature_type = 121U;
    tmp_msg_0.rgb_red = 42U;
    tmp_msg_0.rgb_green = 212U;
    tmp_msg_0.rgb_blue = 242U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7672072093229209;
    tmp_tmp_msg_0_0.lon = 0.3385600969012006;
    tmp_tmp_msg_0_0.alt = 0.34813413518681724;
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
    msg.setTimeStamp(0.03602118776366825);
    msg.setSource(44350U);
    msg.setSourceEntity(70U);
    msg.setDestination(30479U);
    msg.setDestinationEntity(35U);
    msg.id.assign("NEEGRRVFFCYEXCYQXIWSZMJCEVFVOTDXQLUKKKNMEDFWSBKVWBZKIZZOUOIQOXFZMYVZSMGDLLCCXQUUWEWDAARJPEDMCVOYMBGAPSSKQBJHETYPOSJVLUDNCQMFURHJMONYFUE");

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
    msg.setTimeStamp(0.5775418054662436);
    msg.setSource(22723U);
    msg.setSourceEntity(3U);
    msg.setDestination(36847U);
    msg.setDestinationEntity(151U);
    msg.id.assign("CTIXJKLYUPFPWFUMCWGNMVCHPRTIPKRRVCPQTNRYXESJUAJQGNOADQHAOHVQLTIJEBSVEWXAQURCDQRQODGWIBIMBASCDJYYSDIZGMBWOORUIZLLKUPCLGDBWZFMCDSV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NZRVBTKLLJHSWVPYJRJEOFTMGWLGSKIUUZNFJHESSRVSTPIVRZIVJBTCLBMXXCMDSDGBVDQOMYUTLAEUDMH");
    tmp_msg_0.feature_type = 85U;
    tmp_msg_0.rgb_red = 239U;
    tmp_msg_0.rgb_green = 167U;
    tmp_msg_0.rgb_blue = 224U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7653114396222345;
    tmp_tmp_msg_0_0.lon = 0.1736866119188275;
    tmp_tmp_msg_0_0.alt = 0.13046736903066158;
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
    msg.setTimeStamp(0.20571038604557257);
    msg.setSource(14843U);
    msg.setSourceEntity(144U);
    msg.setDestination(17116U);
    msg.setDestinationEntity(234U);
    msg.id.assign("PPICDUJSNIJWNNLUVPBTMZCHHMZYAVNRSUCHZIWXKTWRRAEJRVADUCGOIHTKXSBEPTNVFVFUNVRWAQSJWAZNEKSKGIDTYXKZQKKKVCIFFOP");
    msg.feature_type = 14U;
    msg.rgb_red = 115U;
    msg.rgb_green = 70U;
    msg.rgb_blue = 113U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9417388976375725;
    tmp_msg_0.lon = 0.8305244363820604;
    tmp_msg_0.alt = 0.6823834935725984;
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
    msg.setTimeStamp(0.9667769033315959);
    msg.setSource(39551U);
    msg.setSourceEntity(113U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(172U);
    msg.id.assign("VAWTTBFVDFHIAFEITZXUSQUPHBUVSCXDBUABGGEJJREMKEKYEJEOKWWMLKBGYKQTYKLZBQYDNYXABITMTACTFCIYUCFLGVZPSMVFQGCYQIFOJJBPGLHXNPYHTVDNZRRHUILVORKDVBHZESDONPOJXOWPOYNTQVDAODYOJCKCMEZLUZRGANCDXUFGWXLBHGAQSMXAPHQRSNECDPOJNZFZSSIZQHMIKRLMLQTXSWRNRU");
    msg.feature_type = 156U;
    msg.rgb_red = 53U;
    msg.rgb_green = 237U;
    msg.rgb_blue = 251U;

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
    msg.setTimeStamp(0.5178795307792395);
    msg.setSource(33757U);
    msg.setSourceEntity(2U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(83U);
    msg.id.assign("IJNZNHTTWGXRJVVVOWISYUUGQLQMZIYAROXCWTFDDENUUVNVMBRKQEIXFPTVYJOUJKAXHYVJEBWPOLHWVUYDCZRWJDXGOQSQRCSBWPCEGPDACBIQKMFHFEBE");
    msg.feature_type = 167U;
    msg.rgb_red = 149U;
    msg.rgb_green = 119U;
    msg.rgb_blue = 117U;

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
    msg.setTimeStamp(0.6804827672280584);
    msg.setSource(30515U);
    msg.setSourceEntity(114U);
    msg.setDestination(5738U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.1333840435217729;
    msg.lon = 0.49956175607277;
    msg.alt = 0.43873774159126655;

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
    msg.setTimeStamp(0.634893903368833);
    msg.setSource(20279U);
    msg.setSourceEntity(67U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.4069137935893583;
    msg.lon = 0.33338580573551757;
    msg.alt = 0.7142748048250797;

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
    msg.setTimeStamp(0.7847807324173854);
    msg.setSource(48961U);
    msg.setSourceEntity(231U);
    msg.setDestination(37747U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.44987532881513526;
    msg.lon = 0.6040703749391697;
    msg.alt = 0.5268342876557537;

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
    msg.setTimeStamp(0.6024526074190472);
    msg.setSource(13758U);
    msg.setSourceEntity(106U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(128U);
    msg.type = 67U;
    msg.id.assign("XHAEMNQSHHCQLESSRALDJWNQQEDGJLLADHOMTLKXDYZMUNPERWGBRXCNKVRTHSNMT");
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 5U;
    tmp_msg_0.status = 0U;
    tmp_msg_0.range = 0.3779529727464591;
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
    msg.setTimeStamp(0.5328132431709923);
    msg.setSource(63013U);
    msg.setSourceEntity(38U);
    msg.setDestination(15280U);
    msg.setDestinationEntity(56U);
    msg.type = 115U;
    msg.id.assign("IYPKJGYUNEODUWNZRMPORCTHWUFLBKNQVIPARMHXSTCKLOZFFGVDRTEUDNKQMLBGCFFAINFLBJFPXZNODFEBJGKDVEDUWXLAJFIHVXMDSWICCJEROEBJLSTISJKXGDWNQ");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.806253216171981);
    msg.setSource(4080U);
    msg.setSourceEntity(77U);
    msg.setDestination(9319U);
    msg.setDestinationEntity(192U);
    msg.type = 23U;
    msg.id.assign("AWEBGDQCEJLBQCLUTGEYUKQZKVAKPYJOT");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3048648946U;
    tmp_msg_0.state = 189U;
    tmp_msg_0.error.assign("IAWUXJLLTHWCIWJQPHRRHZUAINBPILLIOQQXGAIALZEOPDKFNUVUBPVOHVTUSDBPQOGNBFEJZWGYQOUCNVOLCCGFEYKVMBCTDDZLCNIUGSFZQXTCRRBXGRMRYWGBRXIVIAZNKDYWHSYVSUUJXEJKFKDWAWTGFXXSNPQTKESZQCOMDJMOSFABHZFSP");
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
    msg.setTimeStamp(0.9424326096994633);
    msg.setSource(27743U);
    msg.setSourceEntity(10U);
    msg.setDestination(1351U);
    msg.setDestinationEntity(45U);
    msg.localname.assign("CQSDNQDGLXXSBOLNWVLZNAFKJBBWOMAJJLLUHVAPNSPAPCTAOFYYHIZOELDGPDHTHDRIFPTANMIEHZJEJZPSTCYIIPGUKABTEDDGYEXVZXKRITVHCKPMGSOCJZRVEQPCVJMWDVWCXGCWSBUYTIVBFHBQKUHRZKKWEQFRWFOLURKYRJLTXXKUNMEEBBMPMGQNAFOFWHRFCHESOYNYAJKOMGALQOUMCIRWYUXZ");

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
    msg.setTimeStamp(0.28212527923456787);
    msg.setSource(52989U);
    msg.setSourceEntity(66U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(72U);
    msg.localname.assign("DFIAFNSQNOISPFENQFGOHLXKPWHKUJBGCIDIZYUWSYNGBGNKXJLGKZSMUWAGIRWZLNXWWJYMJCIUBOSLDJPEXDAHLLKGYZOTZTPFRWHCRQDYRSXBTKZZJIOYXSYMDWMKUOBEEXPBOMVJOBFGRPNTDT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OBXOCOSIJWHJPIRNLVMNBMDZTHLKTTDAUZJSHMWUDGTWMAIMDKFRNUGYHKGGYPYLEGRRTYLVUCPZKEKBVHQDMRKICUNLSQGPDBKIEZTTDSCZAJSRVYFIWADFFUHPAXQNBEPSKMBMGROSDGVJNDVOXLYXYLJQOOBPUSGICPFQBFJCZUZWJHCFXGQIWPCVWZEXKUXOQFECANAZIBSIQBWAMFYXXHCRJRV");
    tmp_msg_0.sys_type = 11U;
    tmp_msg_0.owner = 48241U;
    tmp_msg_0.lat = 0.8850617604687012;
    tmp_msg_0.lon = 0.969600433520773;
    tmp_msg_0.height = 0.5542698114539408;
    tmp_msg_0.services.assign("FXANFWSJECFCZPGFIJBNARKPRNXSDAPRMMHEXLBQVOOLSFGXHKDOGSRSWDZZTEZBTPAOIJNDEHPCGMUTLQCLARNKTMJIBDZXYACVRFMUXQLENACJYVMMVVPOQKBRAMWOWHUKWFZUUSCUVKODDYBEJVRCOUZLXISJQ");
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
    msg.setTimeStamp(0.03972474364284473);
    msg.setSource(51936U);
    msg.setSourceEntity(216U);
    msg.setDestination(1689U);
    msg.setDestinationEntity(12U);
    msg.localname.assign("QTCDVSDTYHDJEGFLCOKABIPOQRLERJJBJCCLIMFGPMADIZXUJMSKQODBNVXIMKTBGUOIEOPPMTGKKLGXSQFWYSDGYHPRHRTYYUCBADCSJFNRPJPYWNLXTILBZRYNXKXIZFRQWPRASSONTLCRWYEMBUKIMQHLMDHEVZUZ");

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
    msg.setTimeStamp(0.924982797335674);
    msg.setSource(58783U);
    msg.setSourceEntity(29U);
    msg.setDestination(22212U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("JJNMRINIXNCFTHDBPKDVZYJXJFYHIUCSQJKRGBKSDPEWOKXTGYZAWWQCLRRNUOQVLTSMKMBWOPLTJMQFBBZLNZQDOZYVLZSIIAZIJLGAPNEQUUCHDCWNWYSNYDSGWCKMXQTKFVSRUSUTFFIAUGBPQPDJPNHQEDHZMOYXKUGTPRCQPCXMOLRBEECM");
    msg.predicate.assign("XRGTESKERJEBFXZYXRSJTUTAIWACSHPNUFJCMWGGPOFGVSPDBQKLMVRUESGFNQTHOQATPHOWPVHLEOGVKDCVENDBPBGBFDMYNQDHJULDANPFYJDALKPYJICYZBSTZGFMFMCBIGCJCWRDVXBMTQBNNYXST");
    msg.attributes.assign("OMWXETLIVPNQLCLRPGOKF");

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
    msg.setTimeStamp(0.7544249281122497);
    msg.setSource(57583U);
    msg.setSourceEntity(48U);
    msg.setDestination(63081U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("VAEDDOVSQSAHXXTENTUSIDRJSFWROZELGUYGTXRDZKCMIHHXYZEBLZICUBUHBVYWDNGPBEZSUPFGBLWPLIJVSQOJHDWXUJUYIRQDALTXDHMTFFCZERLCYFKZQAF");
    msg.predicate.assign("QFBENJPUNMKBKRBTPRXXZRKAJKQXMSJTGGCDYFACHNGEIJRGFJPJEYDUIALIPGWYPKBCDHVMLTWKZWEGBQDAEXHBIMIFHGRASLUYOYDQVNQJCVUSAKHFULEAIBYLUYN");
    msg.attributes.assign("LSHYRUTNVOOGCGCFQVUTORLLVKXNUFABNFVLIGURRORNFZBYWHVBQWGMTAXQAHCHXDGEJURTGERKCBODDEYWPJJELGPLPQFVYPMZOYSMINYHLSCSJAMMCZWYEBAIPMJXIOUXIARRCWQOXCKYFKFXLLWKAIULMVAMZDQDGTEFJBQQPPHNCZDXJZBSYNEGATZESRWSTSTPKDWDINKUAZJHETSFH");

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
    msg.setTimeStamp(0.27351108499049304);
    msg.setSource(47224U);
    msg.setSourceEntity(47U);
    msg.setDestination(36859U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("UNGKXINCFFEBOBESGWLBKGKVHUNTPVWTQREDTWWPVSIZHPWRRMJ");
    msg.predicate.assign("NOMELRWBEGWLDQEJVVMXEPFLSHUJRKPGBQVRZPFJYSYROQNKNUDAVO");
    msg.attributes.assign("WSZLVMAPBHVKLLJDFPJOUZJHXHKYCHQZDREYKKXWWGOJKEOSSEKGR");

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
    msg.setTimeStamp(0.6104113767538264);
    msg.setSource(5595U);
    msg.setSourceEntity(185U);
    msg.setDestination(6444U);
    msg.setDestinationEntity(6U);
    msg.command = 196U;
    msg.goal_id.assign("IBHBSYAJLXIGBYIFUNRMMTNINAMGFWIGSXVKNNRXUXSMENGLCVZWWUMRUBWOYAIROJCBEHUWCMTEKSJULHEEOYKFYSPVZLSVWZLVBZRTEAYZ");
    msg.goal_xml.assign("TXHTDSMRVIAYPKJATJHGMYWHCECMZRORRCMFIZKQFBVMPUNIAWBZTNLCISORKTHNSYQBERQVNAXFRVEOGBRUDNKSWHEQNJUKYAXWFYLDUHDSRQWACLQVLOEVYKMFNPJUISGBJFJVCGWXJVIJJASPUXLNUCOGCHMSVKNKDLNOIYUSWDET");

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
    msg.setTimeStamp(0.7147326042919018);
    msg.setSource(14515U);
    msg.setSourceEntity(39U);
    msg.setDestination(35688U);
    msg.setDestinationEntity(57U);
    msg.command = 9U;
    msg.goal_id.assign("NVETXCUBOXBGBMSZZYAECTVQJLKKXVAPIVYPGGTMLWLWUPDULHVUFFYSZDWNHWURAZJIAARSKYBRPDZTOQMUICIZEFVCENNLBEYHOMPFJYSWTSUDQQEFPPTSPFVLWKEVMJGEGHRTLWROKKIKKSL");
    msg.goal_xml.assign("WVFVCWPDPOAELZIFVHCLEFKFLNZGVNFSUSWHTECWUPPGTEPOMIORZIBKUIAIAINHSMIOLBNACALYAPYKXZPTJOJVANQRITDVJVMMWRIXSWTEOESYYAWMNDDOWUHTMMYRUKGWVRCBGHZQXYGBXJBLXKJNXENUDSHFYKDXZLEQTTUORJJNODYABBCJPQYCVHRHREBFSDNUKLPYFZUVKKQBMDOFLMXGLGMXFTBGGCICEQJQHSRDRGQ");

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
    msg.setTimeStamp(0.2986968422184295);
    msg.setSource(63885U);
    msg.setSourceEntity(21U);
    msg.setDestination(28615U);
    msg.setDestinationEntity(185U);
    msg.command = 224U;
    msg.goal_id.assign("DBQWHQYHTQBUDSTXWTWLLKLHIVISUHEMFUJKNMNPWBWBNGNIOVUKRJEJQEECSUTRJYYUYGMYSOQAHPFLFUWAJTFOTVGYHZWNCGGLTKGPTVZFJCPURAKHZACCBEAQWFADYVKRACRJNYZDMCMIIEZRKGIVEFERMEAIPOVXULBNZKJHDEIXBTZKSXDDDWMUIM");
    msg.goal_xml.assign("DWCEOVLVQNNLZQIWDOWMUKJNFDZRJXVAXGXMGZNKLWLUNBORPMJCYYEIABXJWWFNQVNIOEAMXQDESPXFRLRIFFCDVQZPJGLTPWCHEMJTNPA");

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
    msg.setTimeStamp(0.35378837027839427);
    msg.setSource(31036U);
    msg.setSourceEntity(26U);
    msg.setDestination(1751U);
    msg.setDestinationEntity(9U);
    msg.op = 144U;
    msg.goal_id.assign("OWMUJEJDHGXPSJWTOWQSHHNFILFTDMCSSJVCBBLWZILSOKDOHDB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SNIQAIYJJMCMAOYBLEUKL");
    tmp_msg_0.predicate.assign("UWECKCCDMQEWNPMGARGQGPZJAQHLXTVVJXNEALFNBZQCWPIROQHKXHESDTUEVUZMHUGICFXWGVNOSYZBLWBNIZDCUSDYOGOAKDYXK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EZKHTXHVANXHTEMZRFJEPSRVMQLVUGCNAFHEZNXPZD");
    tmp_tmp_msg_0_0.attr_type = 114U;
    tmp_tmp_msg_0_0.min.assign("ZWVFMRKWJCBNDQYVENZZHIDDXMLTSDCEFXHPEPVPCNXRAHZCSYQCQMPXMTKVKVLUITQAGAIRUDBTXSQXHEKFCTAXBSMZUXPSODPBTO");
    tmp_tmp_msg_0_0.max.assign("AXZAJQHZAZOJTUKKQCOGWVMYYFSQEYUNXIFQSPKZVOH");
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
    msg.setTimeStamp(0.23102674217741237);
    msg.setSource(11042U);
    msg.setSourceEntity(194U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(66U);
    msg.op = 247U;
    msg.goal_id.assign("HDXOSVSEZBISFGAFGJJTNNIQBURMBOHTOVZYCFDZOHJRVFWQVCYBRFEHIVOQITJKAKXGAQWCWMNTLQYTMLEPXHQNLQHCDNHAKLXWLFKBPMMPYDUELGWASOKEHDOHTZGIIJDFDWDEXXNYYSRVJSKCUMPUPRAAUCLZXUTCRXIGKZNWLREDBHPMVRQZRGVZFPPGJCSBCLPSQMOOGK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XQVNYAWUUXCOORLWLFBTZXISMRETEIJFCCLGJBPAVVDKFMECIYKLYZKOXQKDLZPXZTJGBHZRNAYHGPLOHWTIJXPGZZQZABXMESHBVJCBYVNHRYWJIQLAYDEDHELQOWRJMFVVNJWPPSSGDBGSCOGVLDA");
    tmp_msg_0.predicate.assign("RSOQCXFUUWSLZPKIXHHJYJRWHITXLSWWYZBLUSFYZPVEAIPGDRKDIOBEKOJOMXROIBEXVHSYUPQACZUMDTEFYMDDIMYDYQAECPEUNKGXTMGTFSNSAKGIINWALU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MWVPXGJQOLEMKMBZSMKBYBVZDUTGDQORPIIESNKIOTWKXR");
    tmp_tmp_msg_0_0.attr_type = 120U;
    tmp_tmp_msg_0_0.min.assign("OCYGMBKHDLNRSUYTQDHYFHPDECEEWYXJOPQAUHFJGAQGLXFWPAQLZZVXBXUTTBMNGCXZMVYZAJWKWTGILRUJVIACGLOOTZNFZNGWVJNSWJRPLOYFFRQSYDVMTXHUOXBHMSYMEOINWE");
    tmp_tmp_msg_0_0.max.assign("GNDVBAZBUQWNIGLJHFGSLCCVHWJYMMKECXGVSOLAVKUAMUTHLNTBOUCUSASFPZNUDNGZIWNPVONJQYEKRHMJUOKQQDLZCSWIKFRURJVYNAKHDTHGATSBALDFWFXPPEFOTRIRHELSMRTIQBWRXYPPZNOJYSZJZPUVPYVDCCXQLIFIMXHQJFEMDRKETYOXXBVBDGBJOXWOSQYURZWKCZETZEFCJAKLWYBMTIICVAOGHXYQE");
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
    msg.setTimeStamp(0.7649593745472684);
    msg.setSource(9549U);
    msg.setSourceEntity(35U);
    msg.setDestination(43742U);
    msg.setDestinationEntity(199U);
    msg.op = 222U;
    msg.goal_id.assign("KUGXKCDGTSBOQJYGZXN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OCEZYBJHTEZLPCVVUJVMYFDQNZOLIGKQDXQSGYYXMSIERGGOHJUDIGWQLHLNMFQHAPBOROCXSPWJSPATXWKJMGSHCACBRPSHYLZNBYJTZFYMAREALUWYFILFWFCSHJNFXKIJOE");
    tmp_msg_0.predicate.assign("DETLKFZONAEVUBZIKJHZYTRELEBJOJQRLSILAWJ");
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
    msg.setTimeStamp(0.27449802788530253);
    msg.setSource(10180U);
    msg.setSourceEntity(108U);
    msg.setDestination(25743U);
    msg.setDestinationEntity(163U);
    msg.name.assign("VWBGMIGCBWTNLXCTNQHXGVORNMRUAPHBVMNBUSVUIZKUHJJJJVOYETZJYXIUVTFARFYZLOSMQYWBZCFAXDAPGMKQPWUJXTGDWLDQOAOUYTDXKKMEMLCXEIEWINTLHGFPNHPDHVIOIOHTKEXFYDWDQSZYSOIVHJFSHRCLTUSKQGYPMNLZBSNWELMJQCRMLZDEXFKYPRGZKEZBBATGJNEQZBSSUAICRLQVYEOFPAFCKXJ");
    msg.attr_type = 112U;
    msg.min.assign("XRMIUMLQYQPZEIWEFDEKYNGUTGWUJQTOPAFHFTTQGLRQYUFSIDJHDRYJTPVDRSLQSQSFFKMQNXXMNHHJVZESXUWEAPGDORKYHEBZUHMVONPVQEBPWEGPRCCIYDBZBIKSKFNHTCSNOAIORFNASHLUUG");
    msg.max.assign("CMRWEPUYBQLCMFPPCIGYOHRVDHITAEEMSLJRSSPZVZLZTJXOYPIOGZTBALLTVSCTVRBBAIIHBENNUZUHXKLXXWYOI");

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
    msg.setTimeStamp(0.8973031836050661);
    msg.setSource(4521U);
    msg.setSourceEntity(143U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(234U);
    msg.name.assign("MRFWCFDXXBKHAOVXKTGGBBLWKLSMTVABYPISWJCLZIOVQPSPLRSSDYWNSJRWVWHKTJBNETRNYCAQZQIMYPXZJBLMSIQLPITKRDPWUHVBNFONNYKSZVLQAGJQTEPUAZPLJYYERIUUJOUYDDWRUMEC");
    msg.attr_type = 137U;
    msg.min.assign("XULZIJVOVRFPQRWNQGMICCYUHFYKGWJFKNFKRGOZVLQNUBHGTKYHTKJRILWKKBXZQRAFHVUCLUDISHBIQXCLZPTBSEOILCJKEGPXPTXRXGQD");
    msg.max.assign("KFFUUMDRQXUEWMQLKTHBXEAKVONRQJEVIGOVIOGYSMDETWRPSFBKHQLUTPXUNSXCXGNOFYBBLPHPMLMKLPHTJIAHR");

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
    msg.setTimeStamp(0.2786795669543096);
    msg.setSource(49867U);
    msg.setSourceEntity(98U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(165U);
    msg.name.assign("QAJJGEHHBOSIPXCYXTOCACYGGGAAMAAFEKOYZVOSNZTDLKTDRNWTBN");
    msg.attr_type = 198U;
    msg.min.assign("ZDISNPDBKDDTEZPWNWLKCEVROTIXALZEIFFYRASZCXYHNZQGEPJDJURLTDYWCYKWNVNERDBPLDRQYPRSKHUGFVVMTXGABWEWCFSLTHJFOSURYJBIXQSWFKBPTGVTUFQQAHLGQSHKUZGZGXDMOBCFHCPJZMVRLOJJEATEOJHRLLCBMYZNXIUVJDTZOUPIFVWMSMEQAMIKMYFXOGOHUWOPCCWAKKTIUIBSPAUAMRLVHGBGYNNAQS");
    msg.max.assign("NPUHMXFOVFTVAJ");

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
    msg.setTimeStamp(0.4021471925737512);
    msg.setSource(33406U);
    msg.setSourceEntity(125U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("ETLYXXCRCWFVQGLUBGYWYGTKLQAEZDZARRYRANUPMTHNQAVNLXYIGMGHQYTSOWEUDVJBRKEUTIZONZTRBPXNMQHIMFODIDHICDSXKJSTCHVICFMJFQJWCKSROFTFRRUIVKWHVAHBDKUBHCBAHUKEPJSGPADKANXLSOCOTCZEZPQMWOYWRNVAXUDWFOZYIPVNKMJJTZUMSEEJCFEQJLBLWUQWZONFDGVOQGBSXAGKLMSFPVIPEYSPJBBXXLYH");
    msg.predicate.assign("JZBFUTTNQZVO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CHTXGPYKVCGIRXVQGBJWDAGPLRMPCLWPLWJUITMZMLEKKYPQSGKRLUJUOHHCJFKNEDJHKTPOSUMXSCRNFFZKMZGHRXYLOAIEYZWSPSIVLDVNSOHEIXAFVXTSHRSUDVSEEHDMPFRMQUJWDLCVGFSYWDQEYWIWMJPCXBZJIYOURIZYFQEXBCGYWYCNCEBTBZQHAZBOOTTBFOKQORIFTBJRT");
    tmp_msg_0.attr_type = 169U;
    tmp_msg_0.min.assign("QCCWLYZORHOGLWPOYNGUMLFJFFOIOPPKQXXHXWIMNUUSQSLASMJNQGXTNTKVFENBZEXMJDJIJHUABGBZDIHJWEUYVYIYXBKABICEDTAQNXEBGLFAJTRGQJLXBYHHKAIBCTTZWCAVMBUPWRYHRIDOTZUCPDRFAGKRMGHDDPQ");
    tmp_msg_0.max.assign("FMMNTRLCZUPKGSONGKLSTBDOBLFPYZOGOIBKQHAVQWDQGIBVCIVBRTZLIQIPERWYPSLENOKHXAPQDIHZVENAHHKPRDSEDSUMHWUTRBMFBDKBQBCCLSIJXRYGAYBHXFSPRPVETG");
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
    msg.setTimeStamp(0.8555831311470975);
    msg.setSource(29978U);
    msg.setSourceEntity(107U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("URSIHFTAKNENBV");
    msg.predicate.assign("KLJEDNAZOXTNLLFJNEHGDJBXZYNNREGWHWXHGPDAQJRTUMQXITNUILRKEUGGWPPYYCQHTZOJSVIAXMIMPTWDKZVMAMOLCRCLTTQGEOQFEAAESOHKDQYUYKEASPQVGVVIBVIPCHNBLZXROWBSWFYJWXI");

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
    msg.setTimeStamp(0.34347494327925043);
    msg.setSource(49950U);
    msg.setSourceEntity(213U);
    msg.setDestination(17709U);
    msg.setDestinationEntity(62U);
    msg.timeline.assign("ZLMTXYYHIGMZPYAHBFUFVLBFQXCZQMDRZOAMYBJNGQZOJARVJHZRHHOAW");
    msg.predicate.assign("PNSCHQXWQOOZSKIEQNZBDSBSDPXKLFAXIWOFLKWXUVRPRMVEVPGBMSJAKNGRMKFBIZPBTKANWQJVPKAVYQDCJFPEOGNCBAQZFMCXSADCUE");

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
    msg.setTimeStamp(0.3751988879749729);
    msg.setSource(14682U);
    msg.setSourceEntity(61U);
    msg.setDestination(7807U);
    msg.setDestinationEntity(44U);
    msg.reactor.assign("PDBSVHLUOHKCZHCLEZZIDTVMRJADXGAUICRCVGEYSEIEXBLSRNKQGYZZEVYLWDWCBINNFKBAWXJOEFZEMXSOJTATJMPQHWVXUKSQYFPFTXIZGRGUWKBSOUWVSFCNQBHCPQRXZLTQQWQOWUPMYUOMLNDRPGOCEVQTAIZAPGNDJPWKXSVRKHPILGMCTJSHYUKILAYSAFYTBHMEOUGUKWBADNJCHNFJFOVMTAFMXDFJNIVGZHYBPEDMRI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XGMEKEPSHBMRIVQCBIHPARWBZRQAGEDJWOUOSZZMJSOGSOPQCKFNWTFVEZEPILMGJSHWVCUZLLDGAUXZFUURQTGRYVELJXBMKTPQJIMILDFZPWTHYYAVPZ");
    tmp_msg_0.predicate.assign("MMYBZDLVTCKUEQQIQQOZYAROHLLYIWAJBTXCSISGPFXSMPGSMDGXFOXHKHNFVGEJABOORXEJHTKRJIUCTVNTBYOJYYEWPNUONMACSIIHOFTQXTMVPPKXEUSDTNKDEKLVYHZRFBHVEFJOBEXKSZCQLVHWZCEIMXQDGBZKIHJKLCWWVPTQLFGNFWANVSCMORGRNPYXZYLWNGWFVUDBRWGZCAIFAP");
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
    msg.setTimeStamp(0.408704920884962);
    msg.setSource(21705U);
    msg.setSourceEntity(15U);
    msg.setDestination(16373U);
    msg.setDestinationEntity(143U);
    msg.reactor.assign("HUYVOEXWJNIXCKMMKIMQDHNDQPPKSTCXFIIXLDBOOYHDIMKJEEUCRSCCWZPSMINSJBXQJTARHFDZLEIOATKYQKAZOTNSCGGCBNGVKCZYRLVJUTFDABVGUYPDWUCTEYZWZOOQYFOYZHSIAKPSRSUBJZAIPXFERPXFZBWJJFFMNQEQHNBRWNHVEXPNRWHMKPAVVTSDAPEVRMUJGWWWFBHUKTLNLCEXFOG");

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
    msg.setTimeStamp(0.09687023416482665);
    msg.setSource(26819U);
    msg.setSourceEntity(21U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("CTSXTGMOJPKJEBNDRQFRPAADHAPFIMUFOWXYVQVFWUVZKJCXYXBLPIYLGGQKWDQXLUQJKPEASEXFSUZGXPMCEMMBTSVPZMFFLYSSBXHNOHO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YYTXESDRKDHKKGQPCWSBVRAWSPIZHHIMVEBQUZMCDLFZLHUQRDNXBHTTJTBPSIRILAZGGJKNPHJFXAFATRVHMQBQIKSZFXTPJRULCDKOXHGMTPNAGBFPHFQKZKCFWESNOMHYFDUDOOEAODDCYRCNYLMMQEMNJYLWEWVVXDGUWXOJGONARZBNAOXRSCFZQSLYSWJTYVNEAQICCUXPPVLUJT");
    tmp_msg_0.predicate.assign("YTVNAYYDEOSHXLDVYJBVMWOYJJEPKAYTBOWDTAKWZRUPXOGROJMRVWJIUOGUMYXIQPGSCAUERBZJLJRCJHKLBBRBNZVQWOFFMFXVYIECHLIFCMTXUTDKOBJTSNTSKG");
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
    msg.setTimeStamp(0.23215272506777018);
    msg.setSource(37984U);
    msg.setSourceEntity(64U);
    msg.setDestination(8390U);
    msg.setDestinationEntity(122U);
    msg.id = 175U;
    msg.width = 39339U;
    msg.height = 46081U;
    msg.widthstep = 20572U;
    msg.channels = 158U;
    msg.depth = 159U;
    msg.finaldata = 155U;
    const char tmp_msg_0[] = {-9, 84, 123, 101, 31, 86, 42, 32, 17, -27, 33, -5, 9, 26, -43, -38, 6, -115, 7, 90, 101, 117, -107, 88, 0, -76, 48, 41, -10, -49, -68, 93, 59, -18, 107, -109, 80, 66, 70, 52, 18, -77, -128, 88, 48, -64, -86, -49, -37, 19, 80, -80, 111, 67, 111, -6, -49, 82, -39, 102, 112, -63, 126, -75, 125, 66, -68, -121, -88, 123, -6, 72, 93, 48, -48, 123, -67, 30, -41, -110, 19, 91, -37, 9, 39, 30, -95, 20, -63, -69, -1, -46, -13, -120, 97, 106, -115, -33, 20, -106, -34, -80, 16, -34, -81};
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
    msg.setTimeStamp(0.23702306378538496);
    msg.setSource(36008U);
    msg.setSourceEntity(57U);
    msg.setDestination(34385U);
    msg.setDestinationEntity(167U);
    msg.id = 226U;
    msg.width = 34075U;
    msg.height = 60151U;
    msg.widthstep = 48059U;
    msg.channels = 100U;
    msg.depth = 117U;
    msg.finaldata = 178U;
    const char tmp_msg_0[] = {4, 51, -44, 54, 17, -88, -88, -43, -126, 54, -118, 4, 6, 102, 61, -30, 75, 11, -81, -34, 44, -18, -114, 35, 4, -7, -6, -112, -67, -42, 88, 120, -101, 106, -81, 126, -71, -51, -116, -1, 85, 12, -59, -6, -53, 11, 125, 25, -66, 60, 17, 82, 59, 98, -33, 67, 36, 78, -32, -25, -7, 18, -126, 90, 51, -56, -66, 22, -64, 31, 118, 34, -31, -95, -29, -75, 83, 77, 59, 91, -16, 36, -50, -66, 66, -31, 118, -78, -102, -117, -82, -66, 18, -44, 73, -16, -64, -56, 31, -106, 28, -127, 42, 40, -4, 37, 41, -48, 102, 101, -92, -15, -103, -85, 47, -89, -23, -23, -104, -95, 48, -15, -43, -6, -126, -117, -36, -66, -4, 85, -42, 19, -33, -10, 85, -78, 27, 57, 115, 14, -95, -120, 93, -8, 85, -121, 45, -44, 44, -15, -90, -47, 124, -95, 20, 49, 27, 12, 88, -68, 69, -72, -74, 47, -63, 64, -112, -95};
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
    msg.setTimeStamp(0.5824421343857046);
    msg.setSource(15938U);
    msg.setSourceEntity(4U);
    msg.setDestination(50702U);
    msg.setDestinationEntity(237U);
    msg.id = 70U;
    msg.width = 3707U;
    msg.height = 4896U;
    msg.widthstep = 51008U;
    msg.channels = 9U;
    msg.depth = 26U;
    msg.finaldata = 107U;
    const char tmp_msg_0[] = {57, -67, -53, -57, 54, -120, 107, -96, 11, 4, -75, 39, -54, 73, 37, 12, -39, -14, 72, -79, -86, -76, 35, -15, 98, -50, -23, 51, 113, 50, 57, 8, -124, 3, -92, -93, 70, 66, 46, 115, -15, 32, 35, 125, 98, 100, -115, -51, 20, -70, -74, 23, 113, -103, -45, 99, 108, -69, -68, -117, 104, -8, 41, -54, 56, -103, -53};
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
    msg.setTimeStamp(0.6364619743701679);
    msg.setSource(19060U);
    msg.setSourceEntity(254U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(132U);
    msg.width = 62779U;
    msg.height = 51175U;
    msg.channels = 132U;
    msg.depth = 218U;
    const char tmp_msg_0[] = {53, -82, 98, -121, -114, -38, 27, -8, 55, 96, 35, 72, 64, -55, 111, 71, -114, -43, -31, -54, -121, -85, 21, 13, -14, -20, -113, -77, 61, 91, -32, 96, 26, -45, 19, -64, 82, 27, 35, 40, 21, 60, 52, 126, 74, -3, 106, -52, 56, 5, -68, 108, 18, 100, -30, -98, 3, -111, 58, -56, -4, -30, -120, 103, -88, -12, -7, -104, -121, -50, 39, -120, -102, 14, 41, -66, 70, 36, 108, -34, 107, -114, -98, -126, -90, 115, -107, 16, 113, -25, 98, 50, -14, 106, -21, -126, 82, 76, 126, 112, -39, -85, 1, 10, -9, 117, -99, 42, -120, 16, -66, 8, -35, -41, 79, 48, -79, -82, 3, 52, -2, -97, -57, 34, -116, -1, -51, 1, 86, 120, -121, -93, 67, 95, 30, -96, 46, 125, 66, -46, 112, -36, 103, -90, 57, 66, -38, 11, 41, -71, -35, 30, -8, 104, -50, 121, -97, 74, -99, 20, 84, -7, 35, 0, 50, 84, 48, -16, 5, 33, -31, 32, -126, -64, 90, -71};
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
    msg.setTimeStamp(0.7370119516851803);
    msg.setSource(3730U);
    msg.setSourceEntity(159U);
    msg.setDestination(45178U);
    msg.setDestinationEntity(164U);
    msg.width = 48028U;
    msg.height = 24572U;
    msg.channels = 237U;
    msg.depth = 12U;
    const char tmp_msg_0[] = {-13, 58, 96, -24, 35, 113, 40, 72, -32, -80, 80, -94, 25, -62, -125, 77, 47, 2, 25, -110, -14, 22, -22, -30, 30, 13, 8, -84, -106, -122, -106, 50, 90, -13, -99, -84, -16, -15, -18, 96, 116, 26, -14, -31, -100, -57, 89, -74, -19, 72, 65, -35, -115, 52, -33, -126, -51, 31, -45, 12, -84, 61, 28, -96, 92, -98, -74, -32, 28, 78, 27, 20, 126, -64, 103, 100, 84, -108, -102, -15, 6, -108, -114, 26};
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
    msg.setTimeStamp(0.3303971853980586);
    msg.setSource(47259U);
    msg.setSourceEntity(64U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(179U);
    msg.width = 54144U;
    msg.height = 62127U;
    msg.channels = 165U;
    msg.depth = 77U;
    const char tmp_msg_0[] = {-77, 109, 100, 108, 100, 30, -11, 114, 59, -110, 19, -79, -86, -120, -9, -98, 4, 53, 48, -9, 75, -66, -120, -52, 59, 43, -115, -121, -8, -13, 118, -127, 67, 110, 83, -57, -4, 77, 66, -102, -106, -5, 73, 113, 6, -118, 38, -5, -8, 118, -55, 45, -86, 104, 12, 87, 58, 90, -67, 111, 105, 64, 87, 63, -111, 61, 99, -75, 35, -63, -96, 12, -89, -20, -87, -71, -121, -95, 16, 69};
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
    msg.setTimeStamp(0.06947140586514233);
    msg.setSource(8298U);
    msg.setSourceEntity(205U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(173U);
    msg.frameid = 73U;
    const char tmp_msg_0[] = {78, -119, 115, 103, -26, 79, 69, 96, -4, -113, -124, -114, -62, 40, 10, 6, -8, -12, 16, 78, 50, 84, -62, 99, 65, 93, 1, -48, 56, -86, -52, -77, -116, -84, -124, -106, 4, -100, 35, -34, 90, -121, 106, -28, -110, 34, 61, 82, 25, -122, 82, -17, -31, -96, 2, -49, -25, 68, 55, 36, -22, -15, 31, -114, -53, -38, 12, 40, 74, -22, -4, 111, 125, -96, 58, 100, 95, -76, 104, -87, 21, -41, -84, 70, -60, 74, -42, 10, 23, 69, 99, 84, -79, 112, -3, 3, 67, -52, 43, -94, -45, 119, 90, -42, -62, 93, 28, 9, -32, -29, -91, -23, -61, 115, 57, 96, -49, -37, -44, 123, 0, -30, 0, -86, -65, 26, 78, 7, -20, -17, -3, -93, 31, -108, -111, 98, -73, 94, 107, 31, 10, 50, 88, 53, 50, 95, -49, 12, -64, -91, -117, 108, 125, -57, -113, -15, -110, -21, -29, -18, -12, -73, 32, -19, 45, -82, 57, 55, -29, 48, 41, -44, 57, 41, 62, -81, -87, 76, 7, 2, -65, -63, 74, -93, -31, 120, 122, 43, 19, 26, 46, 13, 100, -16, 116, -6, 102, 84, -31, -37, -117, 62, 76, 118, -39, -35, 49, -35, 0, 21, 96, 76, -105, -63, -70, -113, -110, -70, 80, -22, 45, 121};
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
    msg.setTimeStamp(0.1906094944207588);
    msg.setSource(19982U);
    msg.setSourceEntity(183U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(239U);
    msg.frameid = 114U;
    const char tmp_msg_0[] = {22, -109, -14, 85, -37, 123, -111, 30, 47, 102, -31, -73, -29, 1, 27, -57, -39, -45, 84, -105, -55, 1, 6, -89, 63, 126, 55, 44, 89, 59, -18, 63, -63, -72, 76, 74, 121, -90, -95, -36, -73, 16, -49, -5, 57, 102, -86, 124, 69, 13, 67, -98, 115, -123, -99, -32, -26, 54, 117, -19, 10, -110, 11, -34, -21, -25, 43, 38, 45, 25, -63, 115, -83, 88, 26, -121, 115, -75, -76, -35, 46, -21, -35, 78, 18, 101, -59, 33, -95, -44, -6, -85, -53, 118, -5, -12, -20, 5, 68, 30, 34, -93, 50, -34, 94, -91, -39, -85, 52, -105, -98, -34, -3, -82, -9, -31, -82, -89, 90, -107, 77, -64, 24, 19, 34, -121, -107, 83, -105, 98, 84, 68, -6, -105, 81, 57, -71, -14, 111, 66, -59, 89, -77, -89, -11, -110, -20, -110, -116, -37, -23, -118, -29, 125, 88, -37, -122, -33, -33, -91, -121, 64, -6, 65, 8};
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
    msg.setTimeStamp(0.9468049299413767);
    msg.setSource(494U);
    msg.setSourceEntity(119U);
    msg.setDestination(62669U);
    msg.setDestinationEntity(158U);
    msg.frameid = 155U;
    const char tmp_msg_0[] = {71, 56, -124, 76, -74, -24, 120, -91, -74, -87, 46, 75, 122, -94, 98, -115, -47, -61, 109, 76, -93, 94, -116, 13, 72, -84, -1, -113, 76, 21, 106, -1, -36, -57, 25, 113, 13, -106, -28, -22, -11, 20, 104, -34, -97, 12, -124, -9, -101, 6, 84, -75, 74, 21, 6, 50, -24, 57, 110, 93, 80, 46, -96, -29, -40, -49, -124, -53, -64, -114, 24, -14, -70, 81, 43, -7, -13, -123, -94, 80, -81, -78, 106, 46, 19, 40, -2, -89, 21, -99, 15, 83, -56, 92, -92, -63, -73, 54, 24, 76, -11, -109, 30, 105, -45, 8, -113, 34, -1, 99, -37, -73, -125, -81, -25, 125, 108, -39, 46, -42, -88, -85, -86, 66, 98, -72, 6, 42, -83, -16, 35, 95, 85, 32, -25, -5, -107, 69, -24, 105, 38, -85, -88, -18, 64, -92, 113, -47, -13, -52, -114};
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
    msg.setTimeStamp(0.7053527198126175);
    msg.setSource(7668U);
    msg.setSourceEntity(209U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(64U);
    msg.fps = 189U;
    msg.quality = 192U;
    msg.reps = 37U;
    msg.tsize = 191U;

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
    msg.setTimeStamp(0.49580540793112426);
    msg.setSource(9469U);
    msg.setSourceEntity(20U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(100U);
    msg.fps = 193U;
    msg.quality = 11U;
    msg.reps = 226U;
    msg.tsize = 231U;

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
    msg.setTimeStamp(0.7129091966360552);
    msg.setSource(61709U);
    msg.setSourceEntity(162U);
    msg.setDestination(26951U);
    msg.setDestinationEntity(245U);
    msg.fps = 187U;
    msg.quality = 88U;
    msg.reps = 26U;
    msg.tsize = 143U;

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
    msg.setTimeStamp(0.06845194934953736);
    msg.setSource(11030U);
    msg.setSourceEntity(60U);
    msg.setDestination(20601U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.2560732530056897;
    msg.lon = 0.23825650435823031;
    msg.depth = 60U;
    msg.speed = 0.15307842212173473;
    msg.psi = 0.9964198489385149;

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
    msg.setTimeStamp(0.8409738539874384);
    msg.setSource(62398U);
    msg.setSourceEntity(113U);
    msg.setDestination(53581U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.8670415269501691;
    msg.lon = 0.14850577580267788;
    msg.depth = 227U;
    msg.speed = 0.7169265350851122;
    msg.psi = 0.7643166879921033;

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
    msg.setTimeStamp(0.9468636632052096);
    msg.setSource(24755U);
    msg.setSourceEntity(190U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.9389909873312346;
    msg.lon = 0.2404766217777905;
    msg.depth = 166U;
    msg.speed = 0.44074689456586347;
    msg.psi = 0.7752629082153542;

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
    msg.setTimeStamp(0.715792390018422);
    msg.setSource(61576U);
    msg.setSourceEntity(89U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(173U);
    msg.label.assign("XRASLPBRDLHMQUAVBLXVDEISNKFSDJULBNKJIZPQGQMDUEQYOJXHCDQPAWYTGGKKNQ");
    msg.lat = 0.12730833289210275;
    msg.lon = 0.13389358963128584;
    msg.z = 0.5158596639502067;
    msg.z_units = 251U;
    msg.cog = 0.37811900899341866;
    msg.sog = 0.33434678240361726;

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
    msg.setTimeStamp(0.4668664776032171);
    msg.setSource(51335U);
    msg.setSourceEntity(199U);
    msg.setDestination(47427U);
    msg.setDestinationEntity(85U);
    msg.label.assign("TAUPSHHSJPNYEXGGYXKNQYQXZOIQAHBPAVDVTGOOOCBTJYMRAWXRQENGUWCNCLCL");
    msg.lat = 0.08391543030374149;
    msg.lon = 0.419421932487705;
    msg.z = 0.6461598219839104;
    msg.z_units = 178U;
    msg.cog = 0.9357022613475073;
    msg.sog = 0.02338414272861966;

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
    msg.setTimeStamp(0.4269379700425222);
    msg.setSource(59920U);
    msg.setSourceEntity(95U);
    msg.setDestination(6868U);
    msg.setDestinationEntity(136U);
    msg.label.assign("BWDEGUYQPFWLTYYZXHJZINFDHGSCPIVJALIZPUMJBMTKXVFI");
    msg.lat = 0.6696800064319741;
    msg.lon = 0.9266534846334531;
    msg.z = 0.9947297471341356;
    msg.z_units = 62U;
    msg.cog = 0.5443117132483181;
    msg.sog = 0.44194537663156575;

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
    msg.setTimeStamp(0.36326875962695804);
    msg.setSource(2967U);
    msg.setSourceEntity(210U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OXMKKELNNIDHFMKEFIOPGWRSAOUGMXYWMVSYYWTSHZQCNDZZJYCWENOTJNEUQVJCKVYTDGLRIPXRWNCBL");
    msg.value.assign("GKPTFVLUBVEHBAGEUVPPUVSTXHAA");

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
    msg.setTimeStamp(0.29153316567643406);
    msg.setSource(42865U);
    msg.setSourceEntity(150U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(66U);
    msg.name.assign("ZTFTXIWEBLXBFBOXGHAKKHWWENODBQLUNCKLACWXBICOYQDFGFVMOUYXAGHKPJZFMFWVR");
    msg.value.assign("KFTTTWZFVISGRGQLNXCDAWHTYPGBMFZINDAUCHYMWVKTFLVIPUESLOZOYQAQASIKZJPJUUVYGYAMQACOUOAHJXBHIFEAZV");

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
    msg.setTimeStamp(0.42618813283398516);
    msg.setSource(60928U);
    msg.setSourceEntity(92U);
    msg.setDestination(43505U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ARAMWMGNPPALZPDZWIXTHXHTPTSTULDSQXNVGQAMLILHEOIBWSJZLOTMCWXWXJGKETOIBQVIRSFUSCRNRLVXDMARSIWRBOAIUZJEQLDNLUVFAOYCUGMKTPVUCLIJAEMHHJUXMYKJVGUZFXKVZMPIHUSWCFGKHASQVYNANTPUDEZBNJPNQPBYMGJKBCKKZFGFVFEWDRXOWDCSYOB");
    msg.value.assign("HWHLRCMKJAQOSUPLUPDDXSZILOIFKKONSXEPNMGONLXWUIYAMNGOGRQHFGWWSSTZQMGEEACYIWHRHSERQUDPDQTXAFRZTYWDJSDIUEBJVXLQOBGLHDBROHGSJATQJUFATKTBVDQJFNPVWOCMVPZVUOWNIBRCCWFKUKNVYGLYPZKXBZPUIKGRXXHYESN");

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
    msg.setTimeStamp(0.15619698673772198);
    msg.setSource(60618U);
    msg.setSourceEntity(44U);
    msg.setDestination(43045U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NQVONMAIVADZDOGZMFEPK");

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
    msg.setTimeStamp(0.1946725974296375);
    msg.setSource(29055U);
    msg.setSourceEntity(121U);
    msg.setDestination(40646U);
    msg.setDestinationEntity(9U);
    msg.name.assign("OXMNQFFJHPALNYEOHSUPRIEPDYDQOFYGSEWGMYNLWQEGKTVDBRZNCDWMLSATXSQUKYELJBHTUMTKZZCURGIVEVPJHOFQRIXKGBWXTPTAWWDOVQBIPVAIKVHCVUPEWZSJFFYVKHBSZCADUZURHBDLJPPAXLIXZMEAESOTINQMNXYJX");

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
    msg.setTimeStamp(0.5781078707296348);
    msg.setSource(40852U);
    msg.setSourceEntity(105U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(175U);
    msg.name.assign("UPAZYCIDOEEVUPFXXCGPZFFKOWZDQTVSLKLIKYBZFQOQVNCJMUDPYLGYTOJYRRPJUIGRZGHWNCPNDKXFDLRCLPTBJTBJTFAJJWDUNEQWZWBIRPNSEZVOLUYGECSWUYXRVADMNCSOWCGMYSDOHKTFSEIJMJHCVTWGJSPEEODRYCFTOMMFZABXSRSXQKKBAXUESBGDHLVXHBANOXHIAP");

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
    msg.setTimeStamp(0.9837976145776526);
    msg.setSource(9031U);
    msg.setSourceEntity(160U);
    msg.setDestination(14881U);
    msg.setDestinationEntity(110U);
    msg.name.assign("JGYXFDVHLKUONKPETXIBEJSAPBRDKBCULOXCHWZMMUYVIAHGCXXHLGRYLSQZSZQIKVGUELTQQRZKNCEEBPYU");
    msg.visibility.assign("VQJIGPZUHCXBMSTGFZJVEZNDTDRYOIBFQLMKCXGRREXSCJJCYGXCUPTYDAKUPGJVOWZDPJSRIRQBWFNECCXQZPLFLAOKVKIQTIBELHJYYVJPOGEADBXMSTXZDAILSAKRKKLLIRCABWIZUFOMHPUFXMQDGFEVUJMLNXDPKUT");
    msg.scope.assign("UTKINZYAEXOQSWNIUKBFNIVJSAQGFTVJQIGQOVPXWRYODXEHIR");

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
    msg.setTimeStamp(0.6334802668375565);
    msg.setSource(53377U);
    msg.setSourceEntity(57U);
    msg.setDestination(59916U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LIQIYYPOAXYEETGFPSDXQZRUSVQMRCZFKDQMASFJGGUCQVVHTPHHBTJCFVZLRKTNXPN");
    msg.visibility.assign("BPDQAWUKBWQETHKHKIPDMYXOCHNJNZBBLJHSIZTPOKDIEXZSGFWDCTDMSLIYXTGYPIEYVHVTOWKPJJOQZHBZWMSVYXERIFJACXZMUKXEHNOBFAXSGFVD");
    msg.scope.assign("DYOLVPEAHLQSGXBOZDVJHNGRYRQAKGKWQOAEGVIFWJACKWKYIXZQPYLREEZUPNZRBSETXLMNQZFTGKASPMBPUSSPYBEOLUUHVJILSKCDSRZJJFAHFVDRYDCRDCBJWNOYXSWWILZSTXIAEULUXALTVGCPZIXHWYMYBQIJKFNWHRGMTTPDJFVQBECONMAHM");

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
    msg.setTimeStamp(0.7190661809005685);
    msg.setSource(45020U);
    msg.setSourceEntity(214U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LEROWXXHWUXHLFSELFRNRXNVMURIKPIVR");
    msg.visibility.assign("IQAPPDXYGNNUEKIZYTKFSCYHPSNMCDBYZSNFOCQSVHUVMKTIUBVBKSKVIYPCMNTUUCWLLQTHIMQIWRYJUASEIXMHZNFXESFPOQNARICPRXBGLWHAOKFZKJUHAGZWENLB");
    msg.scope.assign("CRBYFWDJLTXUHBPNPDHRRWPRJPSGUSENSVWENWUOAOZSDYWPFKGKFOBLUKBWMMOXSZUJZTXMVHTJKPLHBOUFLIZLWLATDJAJMPXRYFTCSWRQDDBYQDCRKVNZIEQAVGGVUVFJB");

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
    msg.setTimeStamp(0.9676920339904562);
    msg.setSource(2823U);
    msg.setSourceEntity(10U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(88U);
    msg.name.assign("HAKQAMEEEQBTSUPJRFAKZMGFZSYOQXEMLGZLJPAVJZEWYAMVUNLRHZVAWOZVOTGVMROKQUGEOEZRDDTHTWNTDGPKCIQHCXYBWINBDNTAYCSVTMKCLBFWNIIXCUJQDLYRUNQIBSGID");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MEISKHRZRZWDHPIJAAESEIKNMGTDJEPFQJGMCTUBSURBTJXKGXCPSFDOYYWWFRCQPSEFUOPLOUPXSXBZDQFOMNVVOIAPXSHASVMWOTWBQLTJYSKYFMEZKEZAGDHQHUOVYUZZUXDPABHXCVTNJCLJROMRRCJAZCMGIRXKKFQZMTHBMBQCWVQEPNQCSIWXO");
    tmp_msg_0.value.assign("OPTFWDLJROWBKTMAHRMOUVQRRGYBKLJUKFJGOLJUMGVEDMYVDQZCRVDNMEXBYJYSPUHDNQULEBIRAPAOIGTGUDPDXTFXQFFWFWIZAVVLOTQPHLYUEEVZVRWZSJQWRTCBFYSXJSLHSQMUXKPGOTDIATKUZEWHWGLBYXPKIKKKHFQVNSIGCFAHSACFEEGSHCNYYERJBXNDICCIAWZLLJMPPHHZXZTOWRAOCCPNGMIQBMBKTZS");
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
    msg.setTimeStamp(0.46978201035757816);
    msg.setSource(11184U);
    msg.setSourceEntity(132U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(117U);
    msg.name.assign("DPTZCBFZMAFKHZPPJKHPWVTIYZSFLCYROAKIMMMICYOWCWBOMGNHQZHCFVSJXXIZJTPFDOUBVOVTYSMEBJSRDNMBEMUAEUEPKESVUXBQPHLFTALVLGEHGTKQACFVOEUAHZGRRUYDUWKQLXZUGSYBEQSJGNDUOEFRXHKALZBDNEIX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VKUBXJNBOLTZGMCXRGXIYDCXXYRSURZYVZCUDJEDFPHZSLCYHJJGWSYPEROJWFIQYHDDUXQJUGNSHQVFEEUSUQIHEKEFPSMPLHGYFRTKNBNEVTZFXLMDEOZHXAIIAMDTTXAYOKZAVMJWZHTBB");
    tmp_msg_0.value.assign("HKBFDFQGNTDUWPJPHVCONVIZSSGXNSAXVZGTTMCIYHTYMJVZDWLELAOOHUEPZXILBSIUWFQTDXJFLVRGQWJYVQGDMSJUQTVKRBCXLBMJCKLHQEKADCFZKKP");
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
    msg.setTimeStamp(0.712263949561673);
    msg.setSource(1627U);
    msg.setSourceEntity(135U);
    msg.setDestination(41165U);
    msg.setDestinationEntity(34U);
    msg.name.assign("PJVEKBVNMVODZAKLGPYOAXZPVVYXDDTBYUWNUKICKUKBUVCPGVLLVFQUKCIELPYBGOYZWPKLMSJOFTHERGYMBLVZHORSETZRTHMWWQHCASICNQXQXFUQIREHWCTDYNEAFNLXPFFCQLJOWFESAPUSFITISBGG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QLXIWXMWZGPNHVNYRONHDOIJ");
    tmp_msg_0.value.assign("VLTPCIYUKEOFHJHHUONKMBXTLCIHIAGUSTAXCIPVGANSLEGFOYFPGOXQCM");
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
    msg.setTimeStamp(0.8813685262431561);
    msg.setSource(57320U);
    msg.setSourceEntity(211U);
    msg.setDestination(17133U);
    msg.setDestinationEntity(98U);
    msg.name.assign("VUPLKCARWZMSEQOYSVJNAGNQDNTRMRUUQMXKHEJEBHMBCWPFTAICUXQYQVYXPLOALSDIJEYFHOIKYOWBPLVGDLCEPISHAYWSQ");

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
    msg.setTimeStamp(0.2728727955676239);
    msg.setSource(33289U);
    msg.setSourceEntity(4U);
    msg.setDestination(2370U);
    msg.setDestinationEntity(217U);
    msg.name.assign("PNHYCWSRQVBDRBYKEZXMSRETYBTLERKQZJBNIJKDERHKHFGJE");

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
    msg.setTimeStamp(0.7060032245093112);
    msg.setSource(7761U);
    msg.setSourceEntity(221U);
    msg.setDestination(29617U);
    msg.setDestinationEntity(136U);
    msg.name.assign("EITGRVIFZGHCFLEIUWBUXAWBNXM");

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
    msg.setTimeStamp(0.3204719702928668);
    msg.setSource(54336U);
    msg.setSourceEntity(150U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(8U);
    msg.timeout = 2960505633U;

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
    msg.setTimeStamp(0.45879344094804053);
    msg.setSource(22791U);
    msg.setSourceEntity(50U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(122U);
    msg.timeout = 1135683167U;

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
    msg.setTimeStamp(0.15942435090472706);
    msg.setSource(55781U);
    msg.setSourceEntity(208U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(80U);
    msg.timeout = 4197751740U;

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
    msg.setTimeStamp(0.8358577134122231);
    msg.setSource(24284U);
    msg.setSourceEntity(11U);
    msg.setDestination(9466U);
    msg.setDestinationEntity(133U);
    msg.sessid = 3513274481U;

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
    msg.setTimeStamp(0.06853475955165345);
    msg.setSource(61406U);
    msg.setSourceEntity(88U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(102U);
    msg.sessid = 2755831503U;

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
    msg.setTimeStamp(0.5057525748906885);
    msg.setSource(48143U);
    msg.setSourceEntity(98U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(17U);
    msg.sessid = 189065109U;

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
    msg.setTimeStamp(0.9026933797459665);
    msg.setSource(43960U);
    msg.setSourceEntity(133U);
    msg.setDestination(42066U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1278524457U;
    msg.messages.assign("GZNZVTQCTVHKCWWGFBETGUAOMSKUBEDFLVHPCIEADQUAQESHDYTMMUMYKEMSPCNNYJDJRGZPARPWHYORKPUWQFAZZVBAUKZERYUYXNRSQVXWNFQIQNPXCZIXDUKCMFYYTPR");

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
    msg.setTimeStamp(0.7030347308076456);
    msg.setSource(65168U);
    msg.setSourceEntity(216U);
    msg.setDestination(3255U);
    msg.setDestinationEntity(133U);
    msg.sessid = 4134302860U;
    msg.messages.assign("APXIOZSFYXKJJUMOZGSQCDDYCSRTRBBGDRPDJYZCBJUOEVZNFMDTLMIPOPJZHRCQRHUKLDJRIYEZZLMGZJIXQLFQSVVONYQFMUMW");

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
    msg.setTimeStamp(0.8510370053519986);
    msg.setSource(39190U);
    msg.setSourceEntity(190U);
    msg.setDestination(1288U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1792151790U;
    msg.messages.assign("NFODNVODRICDUUSFWYEIWQVMQYAGMCIZ");

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
    msg.setTimeStamp(0.8738875722062378);
    msg.setSource(36645U);
    msg.setSourceEntity(208U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(231U);
    msg.sessid = 3585387127U;

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
    msg.setTimeStamp(0.37799651864821227);
    msg.setSource(13333U);
    msg.setSourceEntity(113U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(241U);
    msg.sessid = 3917234450U;

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
    msg.setTimeStamp(0.875651069853142);
    msg.setSource(31985U);
    msg.setSourceEntity(175U);
    msg.setDestination(25541U);
    msg.setDestinationEntity(250U);
    msg.sessid = 511775834U;

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
    msg.setTimeStamp(0.26772332709311086);
    msg.setSource(49219U);
    msg.setSourceEntity(220U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(25U);
    msg.sessid = 3177663458U;
    msg.status = 163U;

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
    msg.setTimeStamp(0.4488911470871323);
    msg.setSource(53128U);
    msg.setSourceEntity(38U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(79U);
    msg.sessid = 1105296685U;
    msg.status = 1U;

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
    msg.setTimeStamp(0.41722718413063375);
    msg.setSource(53380U);
    msg.setSourceEntity(69U);
    msg.setDestination(50297U);
    msg.setDestinationEntity(38U);
    msg.sessid = 275470167U;
    msg.status = 76U;

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
    msg.setTimeStamp(0.5538062430549422);
    msg.setSource(7815U);
    msg.setSourceEntity(23U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(67U);
    msg.name.assign("ZLXEBWDGEBQUYBSZWPQBZNZKVBNFTILYGZIDTXDKISZRLUIPCOEPKMNNVXYPKOMBPYPZIJCONJXMKFQOORMGHRPNJWIZ");

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
    msg.setTimeStamp(0.09924939508653408);
    msg.setSource(41243U);
    msg.setSourceEntity(107U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(156U);
    msg.name.assign("UZPLUVHEXZXVQJFRWDSGVENZZTOADPEWAIAMSALSEKVMMRRDYCRRVKJTMREIQQMSFWSRKWBZGRCFNHYHJJMUKYOGFGPIWTOEXQXTBENEFNNNHDWGYKJCUXFZTQVDLPUMAMLHBSDHGAYTZNOASPKEDNGJSHEBAOBINBDZPVIZKBGOHXUWFZVUHFAWBLXRCONKTSWYXDRLOIGUCXKOYYIBYLJUQWJOLDTQUJHCVLVCPPCCB");

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
    msg.setTimeStamp(0.2983263198310586);
    msg.setSource(53325U);
    msg.setSourceEntity(28U);
    msg.setDestination(49705U);
    msg.setDestinationEntity(163U);
    msg.name.assign("SPBPZBDSYRGPCVNWPIQQWYQOJICHSKLSCUPDYEDXBAUXSKABMTMLHCJPNDAVPSLUADIUHXIGDBZJZLFTKGJOSHYAEERHFYZJGVGZHMNMWQNCGRIENGDKTIWUNIULRNWTJHOTDXGAUBERLYIUWEMSYZOXYCXUCLOFQWXXBAVMEVWTOZVETBJAKRGQFTHIZJPQAXXPCHZFWYCDVMVJCFIFSOVLKONNJVRRKANFQGRPBUQFLKZK");

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
    msg.setTimeStamp(0.2793143638371537);
    msg.setSource(8942U);
    msg.setSourceEntity(146U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(104U);
    msg.name.assign("CUIWIHQKKLMXHFBDTDSFOUIMTUKVQHHJILTPXSLPZONEWPMKBYROGIUGMOGZJGTWBVQRCUCKUJOIIQXNYVNOAISVJMWPQKLRWJQJAYMVDZFWNCQPQUBDEUDXLNZWXCBWRRPFCNCDLEWVEYMYTWHAEUSBOZYNP");

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
    msg.setTimeStamp(0.0008016999263420477);
    msg.setSource(40514U);
    msg.setSourceEntity(207U);
    msg.setDestination(4770U);
    msg.setDestinationEntity(24U);
    msg.name.assign("OBYLUVNGNJDLFXDFFUDLHZTAZURLOYUXQLRKERQCVQDKRLAUFEJSCAOBEOYXBAYMSQUFXWXULGTXPRTVYDCNAPETJZRIGLBKAVKDGNTTCAKDHHIRTIZWJBKLMISVOIWMSRFJOQMHPZZRMEYBWQUJLXXZWNVKIPHBT");

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
    msg.setTimeStamp(0.14024260697099955);
    msg.setSource(21806U);
    msg.setSourceEntity(33U);
    msg.setDestination(56682U);
    msg.setDestinationEntity(56U);
    msg.name.assign("RVQEMNMHODPPBTFRWXFZMQQXLKKBFNLXPKBRQPLCHWGINWVMSIVSLPIKSUHOCSNSHJIJOGWAMAUGGQIDBYFDRGIRJKYNOGYWQBPHBXWKVHABPATMSVJJTCOWXAZMJUVXRRZDXYRRDAOFDEEJTLVIZGVGJTUICQDZSTINHMCEFDAYPQCULHXEFFNUCSEYAUQ");

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
    msg.setTimeStamp(0.42826023612575526);
    msg.setSource(40607U);
    msg.setSourceEntity(81U);
    msg.setDestination(62282U);
    msg.setDestinationEntity(5U);
    msg.type = 80U;
    msg.error.assign("HBRHFJLUYCYANACAMNPCTGYMPJRTYMAOYPAIDRPEFEXQWQKHBKVOQZMMZRASGHEZPUFBGIXUXQKGEPHJZTNZSGZGHXRRGUWCDJJLZMLXVKPCJPWUDIIFLORXJYCYBFDOWQNLIIWGXFVAFJZONUMWKYUWVYXGYDOPALOVSSURSIETTIVDDVLNBBIUQK");

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
    msg.setTimeStamp(0.3883301971224853);
    msg.setSource(23392U);
    msg.setSourceEntity(10U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(48U);
    msg.type = 113U;
    msg.error.assign("YKFUKLVPJQDBYOPDNPLFHXCBHTSOBGAECOESSICAQGOQWWRUDYOYLUVZQUTIRDNHLIQRHNP");

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
    msg.setTimeStamp(0.2819311033417947);
    msg.setSource(41318U);
    msg.setSourceEntity(103U);
    msg.setDestination(52134U);
    msg.setDestinationEntity(197U);
    msg.type = 50U;
    msg.error.assign("WVRAZACDNNMBCXQQYZFZZEFJGDYYAVKXFKBUGUTJKITSFVNULHHSIIJALDHISHNYEEIJXCPUKJGYOADVXC");

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
    msg.setTimeStamp(0.8824106565826416);
    msg.setSource(5561U);
    msg.setSourceEntity(242U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(119U);
    msg.seq = 43407U;
    msg.sys_dst.assign("IBKOFPVYFXJQWMYFZHXAJMRIQBWWGUEYLSDBMUILJUYSHMUWAOLNEDULRQAKZKJUSPWVKZVVHJOBGCJTRRACDGPQPCNYDTDOWIEIIWNXOZVQHNZEKCHTPWQIZNLVIKNQJNVJPQGGZOGBKWAOSBWBZRCZSXDLNSBBHHOVIUDAMMEPVCCLFOREQTLLXTXYPFZHCFHEUEXQDYVTPCTRSBGGTXARYESFJPAYMMT");
    msg.flags = 73U;
    const char tmp_msg_0[] = {21, 62, -116, -104, 93, -99, 89, -90, 25, -125, 8, -103, -108, 52, -7, -87, -5, -108, -126, 35, -102, -127, -125, 55, -57, -9, -31, 47, 3, 99, -91, -4, -49, 20, -48, -108, -27, -26, 57, -49, -48, 61, 1, 86, 95, 1, 67, -52, 95, -59, 63, -88, -112, -84, -44, -69, 15, -122, -94, 116, -64, -62, -62, 25, 90, -126, 40, -28, -13, -126, 50, 43, -65, -6, -91, -41, -44, 6, -100, -125, -90, 45, 25, 79, -46, -19, -55, -36, 69, 121, 111, -4, -84, -19, 66, -81, 0, -28, -120, -67, 17, 44, 48, -13, 17, -38, -45, 77, -51, -15, 122, 14, 55, -42, 87, -84, -8, -76, 59, 96, 103, 72, -102, -67, 29, -104, -124, 41, -113, 100, -31, -121, 62, -25, -80, 13, -43, -21, -52, -25, 42, 97, -81, 94, -83, 95, 16, 95, -126, -66, -75, -62, 75, 1, 35, 74, -91, 78, -92, -54, -29, 12, 68, -95, 33, -88, -17, 1, -75, -71, -86, -4, -97, -92, -87, -109, -78, 53, -117, 47, 70, 17, 57, -31, -74, -67, -44, 32, -13, -27, -52, 90, -57, 66, -19, 42, -52, 32, 121, 80, 126, -62, 10, -85, 11, -70, -39, 40, -50, 52, 40, -94, -49, -117, -53, 114, -76, -102, -20, -77, -106, 99, 70, 120, -122, 20, 47, 65};
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
    msg.setTimeStamp(0.969973488306946);
    msg.setSource(63629U);
    msg.setSourceEntity(214U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(247U);
    msg.seq = 29133U;
    msg.sys_dst.assign("ALGOCKGPILNKHDUFVLFQBYHHNKZPJEPWOCWTYIEEBUJUGYZTFEQADVFDGGQYMZZOVDYCJOFRGZEAQWYGPCGCZJURILIQYLSQGRNEBWZROBNSOSXLINIIJRVWYDAZTRKTBLQNIZERTDKNWMXPOVSVCCDOLURJIVFZHJFBCMXAHPUJFFBPHWEVWXMMUKMKD");
    msg.flags = 10U;
    const char tmp_msg_0[] = {-122, 106, 14, 51, 4, -34, 84, 40, 114, 32, -27, 8, 24, -29, -51, 93, -10, 64, -87, 85, 104, -89, 125, 115, 108, -103, 21, 106, -110, 69, 87, -17, -63, 97, -126, -31, -6, -113, -100, -78, -2, -10, 42, -18, -49, -31, -117, -28, -101, 94, 41, 20, 5, -90, -68, 51, -122, 94, 45, -40, 16, 62, -29, 7, 33, 27, -94, 126, 123, 23, 47, -88, 17, -12, -9, -79, -123, -104, 85, 32, 121, -45, -34, 119, -8, -107, 65, -60, -118, 0, -121, 83, -25, -8, 111, 42, -121, 100, 13, -62, 66, 54, 57, -34, 70, -80, 121, -53, -22, -115, 81, 30, -22, -115, -116, 120, -110, 21, 62, 28, -117, -5, 6, -79, 85, 20, 83, 102, -30, -102, 36, -55, 47, -86, -9, 109, -83, 24, 2, -126, -81, 123, 4, -11, 24, -119, 70, -30, 20, 86, -15, 97, -102, 44, -111, 56, 25, -19, -88, -33};
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
    msg.setTimeStamp(0.498212152821914);
    msg.setSource(54492U);
    msg.setSourceEntity(212U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(214U);
    msg.seq = 12565U;
    msg.sys_dst.assign("OVXNECQCFYYFBPQDZHYOULZNUCBDQGVYOBOFWCJFMMSPSKFSZAGSFXCLGADRRTTLCKDGIMKVXKBAVUNODQWTWXQBIAHTTYELQIVUOVHWUPCNCYTTEEKDNWMHBUCAAPKFNJQHBSRMGRKUOAPQUZ");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-53, 78, 49, 27, 72, 24, -115, 90, -65, -122, -127, -12, 114, 109, -100, 110, -90, -97, -102, 18, -83, 87, 63, 21, 12, -60, 102, 17, 125, -126, 108, 77, 2, -114, 15, 54, 101, -40, 41, 85, 7, 3, -56, 10, 98, -126, -107, 110, 60, -9, 9, 100, -26, -8, -55, 108, -93, -73, -34, -65, -87, 105, 108, 94, 45, -117, -22, -119, -86, -47, -59, -44, 10, -65, -71, 79, 12, 44, 7, 99, 125, 61, 48, -119, -108, 18, -89, 11, 126, -99, 18, -106, -105, 31, -16, -25, -68, 83, 83, -124, 118, -113, 13, 63, 0, 94, -23, -86, -35, -106, -127, 50, 24, -35, -42, -14, -60, 72, -26, -113, -53, -13, -99, 1, -57, 123, 1, 95, 88, 95, 7, -93, 26, 118, -15, 74, 90, -127, -71, 24, 91, 104, 116, -13, -120, 101, 93, 116, 108, -19, 112, 56, -53, 31, -98, -38, 24, -102, -54, 120, -54};
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
    msg.setTimeStamp(0.022103743382745233);
    msg.setSource(38555U);
    msg.setSourceEntity(7U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("KOESXJBQQEKMVAFEWROFKOBLEULOIHJNHTOJKKTZRNRGFYIBZDDZFJDUWNWGCHHKTVPIBZMWWMEVKCOPJA");
    msg.sys_dst.assign("WLHFSDAOBUEIMQUWQDFOLBSFFSTVYYQDEVIFYDBUQGII");
    msg.flags = 254U;
    const char tmp_msg_0[] = {-61, -14, 116, -83, 76, 41, 15, 10, 123, -128, -34, -106, 30, 44, 114, 96, -33, -102, -42, -72, 67, -41, 11, -123, -33, 99, 66, 107, -63, -97, -16, -22, 17, -27, 116, 118, -67, 8, -70, -126, 1, -124, 2, -116, 66, 82, -52, -87, 48, -3, -44, 16, 115, 65, -89, 126, -37, -49, 30, 61, -68, 39, 87, -119, -88, 20, -21, -66, 29, 39, 70, -43, -27, -86, 118, -34, 27, -125, 12, -121, -63, 83, 27, -25, -126, 105, -93, 52, -70, -87, 87, -49};
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
    msg.setTimeStamp(0.43241182576258097);
    msg.setSource(23292U);
    msg.setSourceEntity(6U);
    msg.setDestination(35958U);
    msg.setDestinationEntity(252U);
    msg.sys_src.assign("XVHLBHNIZFCBKKENPIFWJWJULXIAQUTOVOYAFQZYYRPNWLRMSXAZFTERNCGGSJJOURWQCDNBYTOGCHRPRZZIJDURZ");
    msg.sys_dst.assign("UCYWOWMHKUIHHGPABEVHEHSEUPQTXTMZFZYPYCKETMNYZHIXV");
    msg.flags = 28U;
    const char tmp_msg_0[] = {-82, -37, 31, -126, -66, 32, 14, 119, -36, 53, -41, -79, 41, 77, 58, -111, 57, 2, -92, 110, -14, 93, 92, 98, -110, 63, 19, -101, 110, -41, 44, -57, -32, -15, 82, 38, -90, -104, 75, -69, -21, -93, 28, -31, 57, -44, -88, -14, 124, 39, 6, -56, -103, 16, -123, -100, 93, 67, -5, 83, 51, -91, 30, 119, 39, -69, -11, -113, -110, -35, -63, 99, 99, -43, 98, -9, -126, 68, 102, 99, 6, 8, 66, 69, 105, 99, 126, 123, -68, -14, -61, -15, -10, -100, -86, 41, 42, 8, 105, 93, 38, 113, 49, -77, 84, 47, 8, -53, -127, -83, -124, -109, 61, 45, -24, 96, 17, -117, -124, 37, -78, 39, 29, -98, -111, -55, 58, 80, -113, 49, -11, -89, -127, -106, 84, -25, 89, -108, 72, 56, -23, 47, 43, 31, 82, 100, -98, 91, -83, -37, 58, 107, -52, -50, -18, 126, 1, 69, 18, -113, -92, 100, -113, 109, -100, -128, -70, 36, -83, 42, -77, 116, 109, -12, 39, 59, 10, -63, 66, 37, -1, -85, -70, 120, 108, 107, -42, 121, 79, -10, 77, -116, 64, 24, 106, -123, 14, 77, 14, 88, 12, 124, 68, -81, -103, -104, -53, -63, -52, -95, -6, 102, -64, -91, 115, 81, -87, -54, 102, 109, -38, -99, 110, -112, 88, 105, 4, -31, 103, -78, -123, 75, 112, 103, -9, -128, 4, 11, 82, 48, 83, -28, 49};
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
    msg.setTimeStamp(0.15142469433760575);
    msg.setSource(50306U);
    msg.setSourceEntity(104U);
    msg.setDestination(31632U);
    msg.setDestinationEntity(37U);
    msg.sys_src.assign("RLCJXYUIHHKQLSDJUGDGEATVNKZHUITTGFWPB");
    msg.sys_dst.assign("FQJQCNFJQVNDCRGKXXMGFVQWEFUTTPMLRPFCUPJIVILXDVZBMHGPONHQUMSIBTFNBYLTTOVKRQDHEJKMTSDEIGJAOPXDSFBOEXPZQWUJSCXMNMIZUXB");
    msg.flags = 209U;
    const char tmp_msg_0[] = {125, -101, 40, 51, -11, -85, -105, 99, -93, 121, 97, 110, 17, -16, -63, 100, -98, 72, -79, 52, 24, 92, 60, -68, 87, 114, 17, 90, -44, 61, 84, -59, 18, 91, 34, -33, 102, 21, -13, -82, 44, 85, -61, -46, -53, -89, -119, -117, 51, -41, -128, -54, -115, 4, 104, -104, 77, 20, -72, -22};
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
    msg.setTimeStamp(0.8607351320832534);
    msg.setSource(48864U);
    msg.setSourceEntity(82U);
    msg.setDestination(31653U);
    msg.setDestinationEntity(78U);
    msg.seq = 7545U;
    msg.value = 191U;
    msg.error.assign("YWUYRCXCFYRHZLSBMSPXEOFOJNFTKOQPZVAKCMETTU");

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
    msg.setTimeStamp(0.1948512780382876);
    msg.setSource(21436U);
    msg.setSourceEntity(111U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(239U);
    msg.seq = 45253U;
    msg.value = 75U;
    msg.error.assign("HTSYRELTUOQKDXZGAVQANTWMIPQTWDRJOUJRMQJRXJSHYLIQPTIEMLCYODCBBAAFFSLPMEYCWSDYVQSDNKGVZSRTNJRWCOGXSNYVCGROXFJMAAWMFWIKVQNLBGBPFALVIZGWCRZGQUUPLXINJYZBXNHDEHUDIGEVLIIOPWUKBCQCMSJYTHSZJTZRK");

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
    msg.setTimeStamp(0.9294844896174026);
    msg.setSource(57211U);
    msg.setSourceEntity(216U);
    msg.setDestination(22079U);
    msg.setDestinationEntity(171U);
    msg.seq = 29985U;
    msg.value = 172U;
    msg.error.assign("OYERBRBNFHGWQZRBUHHCATOCPPGCZMECIGIBOYJPIRBZTIVYNZOUPNFSTKFEGXXSFYGQIMYECJVVSYRTPAHRUJAAXDNESDWHDNVXSOHRVJUQAWRPLBWXVAFEF");

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
    msg.setTimeStamp(0.9485107923168753);
    msg.setSource(19217U);
    msg.setSourceEntity(237U);
    msg.setDestination(5550U);
    msg.setDestinationEntity(36U);
    msg.seq = 18623U;
    msg.sys.assign("CXIIFBEWLIQZOTSFKACWQKRJSVUBQNAMDMDOFNFGTGPNPAWUVFQWXQAYCNQDIXMTSWHUWMGYKJPVNZEVDTSCLXGSQHZKHOCSEHOFEUWGYXRBNBGVDHZPFNBLUALBCMXUPQHONZMEAGEBJHJLOYZETO");
    msg.value = 0.8031990720372244;

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
    msg.setTimeStamp(0.6447408827731664);
    msg.setSource(58467U);
    msg.setSourceEntity(37U);
    msg.setDestination(22326U);
    msg.setDestinationEntity(233U);
    msg.seq = 59464U;
    msg.sys.assign("FINATYEHCSGLRYOAQXCZSVXSBLOLMGWHJNTCTTCJGAAAGJFXMGMRYZWUDHVUWDOWKCRNIAMVSEOPDBNWXYSUQAUNCIEUWQFMQRTHPBWDDFTOLPPWGOTOSMGQFSDXWQPXERDELVENJLAKZZBKJOPHJSYZUFZVABKQUGXVHROPJRJNUGBQZSIFPVLKLNRLJZDKDJTKHOKZW");
    msg.value = 0.3916200386853692;

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
    msg.setTimeStamp(0.5937076109274736);
    msg.setSource(25185U);
    msg.setSourceEntity(118U);
    msg.setDestination(7003U);
    msg.setDestinationEntity(168U);
    msg.seq = 41955U;
    msg.sys.assign("CZDIJPHVFYWOMKRGGHLIIOSBWYLTFKCICZCUFZAADHWJMRXXRUGTQNZGABNE");
    msg.value = 0.4537871235703749;

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

  return test.getReturnValue();
}
