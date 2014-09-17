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
// IMC XML MD5: fea3a402c4ef5e48fc13b4b5b9dcca6d                            *
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
    msg.setTimeStamp(0.05289561734589099);
    msg.setSource(59268U);
    msg.setSourceEntity(164U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(35U);
    msg.state = 177U;
    msg.flags = 179U;
    msg.description.assign("BXZBCMFNSLVKOJZECDYUSBGLAPSJSYVIHMAYQFRDFOIBHUWUZWTATRYEIVKFDCHWQBPDQODTXHQCATLNSJEDPRHQNAYKIHNGPKBLSOPCJZSTQNXEVTQODJTMLWFWIGHJXQVUWKZIRLOPMKQUTBHVYMIUXRIEYKXQEKHCUCNDJAPZEUGOIENMFMPJLGRLMRZYEVWFLXSROYFRZGADJYGRHEVDAXWNOABSZBNMCKGVSTXO");

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
    msg.setTimeStamp(0.7103121666515902);
    msg.setSource(509U);
    msg.setSourceEntity(6U);
    msg.setDestination(51781U);
    msg.setDestinationEntity(223U);
    msg.state = 10U;
    msg.flags = 26U;
    msg.description.assign("PKGFCMQAVSXJLPNADQYWWABEXBPRHODKMGZJUPSHBZSBMCIYQKFCFXUOFYLQNNRMVDTQLVXSVEPDSYPUFCZIKADNJSILMAZGUIBBJWMCGZJWZFLEWZIHPBYLZSTXGXHZNDJUNEDNPERIPOJNWFRJRBOUMSKYRTPLAWVXCHQKIZOEUDTIGHYHVBRNOCVXCH");

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
    msg.setTimeStamp(0.19915071855108124);
    msg.setSource(23327U);
    msg.setSourceEntity(187U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(219U);
    msg.state = 229U;
    msg.flags = 25U;
    msg.description.assign("KEQPPNMHJAJBYEXULTGBVOYEDGSPPQXZAMXNAFEZZZPIZWUNKFUOJHSTECJXIOUZZKMFTYXVLN");

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
    msg.setTimeStamp(0.8133786088382705);
    msg.setSource(61830U);
    msg.setSourceEntity(208U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.8262820311240556);
    msg.setSource(35173U);
    msg.setSourceEntity(82U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.6791099668940609);
    msg.setSource(3530U);
    msg.setSourceEntity(229U);
    msg.setDestination(25514U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.4606979466992055);
    msg.setSource(38745U);
    msg.setSourceEntity(36U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(76U);
    msg.id = 17U;
    msg.label.assign("RXIIGWYOERWSQOAIAKOXGTEQWWPEUHPVJHNRRFEZFTJAKXTRTHNFBBALNYIVQJEZFLKIMMQPFKSDMMUFEOPTNJBCIWRCFJHSOIYVTGANHBFAGLIVOIXCPXCLDYLGUTZTXUSTBHZDGFHRDNBSYPUYMCNDYXDJEIQRHOVGRQRXQAUMEUVVDKS");
    msg.component.assign("EPBLCBDMJZZNWRGJEJJFAFPEGYDOZYXKPCHDFCLJQNDFFTNHAIHONBCOTBPTJRJCUSXWLOKOWZZSKRQUELULZMDIDPIKQDATEPWFPGXXTIOJMVBHDSVZPZOKFGYSRMHATTMKAAYIDIISSVZQVMGAHKNHIFGWBRUSRLRUVBSYDOPYQMUYTMCGPXFLQKGCOKEUWEWUGEXAQTKNATBVRIXSSNQUUWEXJWHLVM");
    msg.act_time = 42051U;
    msg.deact_time = 9172U;

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
    msg.setTimeStamp(0.8014137481950747);
    msg.setSource(27954U);
    msg.setSourceEntity(183U);
    msg.setDestination(25056U);
    msg.setDestinationEntity(216U);
    msg.id = 182U;
    msg.label.assign("VPAUHDSZCVEVAHONEMNFQHXLDKUXGALRNXCAHXHIRTGUTOAAPGZSUNQODPEQDISLPIHIFZLZBCJAYNR");
    msg.component.assign("TMIYLTYKEJMTCDVQSHABZKGYHRKPHWPIXBOQIOCERRDNNCCQBDQBQRDRKRUYJWQSGWGPYFLAVSPHPTHMBXEENRTYUAYJUGFFUSXNEAZUJZMXCMRIJOUPLFEWHIZNLQCGVSGAOQTCIQDDXEVGSULJAWKGBPFZBDVXNXIJWUKOFVZJPMOYVXBFWNVGCLKXZAHRIWIQZKOELEJZO");
    msg.act_time = 65373U;
    msg.deact_time = 15590U;

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
    msg.setTimeStamp(0.8574994191172887);
    msg.setSource(3808U);
    msg.setSourceEntity(227U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(83U);
    msg.id = 142U;
    msg.label.assign("PMVUJJVYOUQNJLKKGKGUQJAZPMORJNMXQVYDXUPOSNTPIETGAXICBPHTTCDPYBHTBPWZGKBRZHQVSZBIKKXJSGVCLFEJIXHQLICKFFMXWPAGLLWUUWIEVLLHRYFEYWYOPIZWJDBLOFRGNEOYTMBZFZZWATAHREXFMUASSOONEGSYEJCDD");
    msg.component.assign("QKGIPZJUWMHBOESCICLYCSDHTODBERZMPTKDQBAHHEAISJWHUXLZCATDLVZZHNX");
    msg.act_time = 16660U;
    msg.deact_time = 13852U;

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
    msg.setTimeStamp(0.5396909116862534);
    msg.setSource(31302U);
    msg.setSourceEntity(224U);
    msg.setDestination(47699U);
    msg.setDestinationEntity(201U);
    msg.id = 25U;

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
    msg.setTimeStamp(0.3273286120413098);
    msg.setSource(39192U);
    msg.setSourceEntity(95U);
    msg.setDestination(12773U);
    msg.setDestinationEntity(8U);
    msg.id = 178U;

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
    msg.setTimeStamp(0.8021215588870623);
    msg.setSource(39028U);
    msg.setSourceEntity(152U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(183U);
    msg.id = 175U;

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
    msg.setTimeStamp(0.9119915091975372);
    msg.setSource(61872U);
    msg.setSourceEntity(19U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(235U);
    msg.op = 101U;
    msg.list.assign("VJNMCEALSDJZPIUXKFBJGNXVBZOXSYOSLUYLFZHLNNKRKMVSGEDZKTMGCOGSIWUGWMKRGQFYOGCKDSMUWXJXJW");

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
    msg.setTimeStamp(0.736985418115217);
    msg.setSource(4947U);
    msg.setSourceEntity(140U);
    msg.setDestination(10092U);
    msg.setDestinationEntity(210U);
    msg.op = 87U;
    msg.list.assign("YRRWTUTBBVAFMIHVYRKGEYJPHNSZJTGRNLYHGZZWSXJAIYPPMUQDXXUKGGSMCQLFKZDROUEYOFNLNLPDGNWAVEAVWHOOFMJEJMPQLQNJCDRNWAEKWUIGYDKCBTTCKXFINJLQSABKSKYDQUVFTUZRSBSFUROOZMVOTZXOMCCPPWCLQKEAQLWSWIKXPDEXSZCBIXHDBABIMFWJJAHLMZXMFTQ");

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
    msg.setTimeStamp(0.21034425146757096);
    msg.setSource(33665U);
    msg.setSourceEntity(33U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(179U);
    msg.op = 6U;
    msg.list.assign("GRSTFUBRUPDRKWNKMUOXKHEFAYYSJTRZBBGYYQCHXRJP");

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
    msg.setTimeStamp(0.30544040200849454);
    msg.setSource(12272U);
    msg.setSourceEntity(17U);
    msg.setDestination(9696U);
    msg.setDestinationEntity(166U);
    msg.value = 60U;

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
    msg.setTimeStamp(0.22915128202000012);
    msg.setSource(8901U);
    msg.setSourceEntity(187U);
    msg.setDestination(31001U);
    msg.setDestinationEntity(42U);
    msg.value = 129U;

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
    msg.setTimeStamp(0.4147864731911185);
    msg.setSource(2071U);
    msg.setSourceEntity(132U);
    msg.setDestination(59174U);
    msg.setDestinationEntity(205U);
    msg.value = 168U;

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
    msg.setTimeStamp(0.4334132474098673);
    msg.setSource(49197U);
    msg.setSourceEntity(247U);
    msg.setDestination(9800U);
    msg.setDestinationEntity(36U);
    msg.consumer.assign("SJXLKYQFFCKBZEVIYUKPCDVQSHZIGKFTMHMDMMAXHCIIOEIJJYMYYUSBUQWNPSSZGRXFNBRXZWLTODSEAKCRBNZQOHFXGLISUJVVEWXTFQHETFJOKEOXBODNTDNRWYRTBDRLJZBINPKPTDNPLRGCTRKWGGBNNYYPQEIOQZMKJPKIVLJUS");
    msg.message_id = 23858U;

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
    msg.setTimeStamp(0.7975635428888888);
    msg.setSource(11127U);
    msg.setSourceEntity(85U);
    msg.setDestination(42410U);
    msg.setDestinationEntity(184U);
    msg.consumer.assign("NYJZZDLYYGUYKCXFPBMDWZTA");
    msg.message_id = 9054U;

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
    msg.setTimeStamp(0.9023987635891018);
    msg.setSource(54345U);
    msg.setSourceEntity(245U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(253U);
    msg.consumer.assign("SZXPQGQRIFFNKXJKZOTYCFYWDQVVLBFIOTEZVPAIWBIPPNBXUQQSUYHWDGZMHAGNEYHQXDAKMYVNJCPETHNKAVCGGIOLOVPTPZIJXYUOLXECUXZPVSMRBNVSCSCWRYHDICCORMDQIRUROJGJKXUWIZLTJLAXNVHQCFDETYZEKLFNKMRDKBWPGUWBDTGHMSVFBJISXMWMNOHBDLWEUTTSBEZUDZAQQBKMAMOLSAJFHASYKGWGARTNOPJHRFFJ");
    msg.message_id = 26398U;

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
    msg.setTimeStamp(0.6717730429311934);
    msg.setSource(10250U);
    msg.setSourceEntity(118U);
    msg.setDestination(44028U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.21530116430037183);
    msg.setSource(20845U);
    msg.setSourceEntity(51U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.7706758482131134);
    msg.setSource(42909U);
    msg.setSourceEntity(64U);
    msg.setDestination(65081U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.3590580052890372);
    msg.setSource(5914U);
    msg.setSourceEntity(54U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(25U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.8594255900949966);
    msg.setSource(30099U);
    msg.setSourceEntity(83U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(161U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.5201734176080081);
    msg.setSource(15376U);
    msg.setSourceEntity(122U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(246U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.5133035691928829);
    msg.setSource(29592U);
    msg.setSourceEntity(115U);
    msg.setDestination(36547U);
    msg.setDestinationEntity(51U);
    msg.total_steps = 24U;
    msg.step_number = 204U;
    msg.step.assign("LKYUFHRWMGWFRUEHGIOEKTVVCLHKRSBLJVMIMETBXPPDTBIKTRRZCHJJYEXGHCT");
    msg.flags = 129U;

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
    msg.setTimeStamp(0.6927770729562931);
    msg.setSource(53938U);
    msg.setSourceEntity(171U);
    msg.setDestination(36321U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 119U;
    msg.step_number = 22U;
    msg.step.assign("TPGFFEUPAJXMRQLRYBJAOEQDYKOZBFJHUQVTIPZPXZLFUBCWNKNFFZXHUVZCGEUSRQDAPOGOYQIASBVDAGBWLTRTDWSENBQSCMSFGMQSJJPEKYVHXYNYRKO");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.5262648209582521);
    msg.setSource(6451U);
    msg.setSourceEntity(22U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 46U;
    msg.step_number = 69U;
    msg.step.assign("UIBBZIZUBFAJTKRWDVEBCGGXYNCE");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.5210290923886303);
    msg.setSource(34669U);
    msg.setSourceEntity(107U);
    msg.setDestination(22120U);
    msg.setDestinationEntity(231U);
    msg.state = 244U;
    msg.error.assign("OQXASQTMNFHLLHHMTPUAOTGODKZXECDERXKRUAGYICLQPNYBFDXQMVCTIBWUTQVBSFNOFXVHIRGHNWPCSXVWDSLSIBCDVMBSXVFLDNTOKEDZYUEOCPKYLJNJUOICBESOMGBSAWKMRIPHALYUUTPZCMEGYJLWWKPPYKJFZJVXFLQEMWFQUBESHRRIJQINFBJJMAHCFVMTEGVPZNONDSZWQGDUZAQKAXOGDKEXRIJJTW");

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
    msg.setTimeStamp(0.2908294899774183);
    msg.setSource(30192U);
    msg.setSourceEntity(115U);
    msg.setDestination(20399U);
    msg.setDestinationEntity(10U);
    msg.state = 240U;
    msg.error.assign("CXEXWMTVVDAIJGXAZCVMJBCGQMLDVCUURBKKQJWPUPZNFAWMAZNGIUFSHHZPGRUOSGXFIYLOATVERRVMCMDGIQWITKDYADOLBXUPYGEFTJWUJNAQRTXREPPEKTZSPGMJRFSXELGKXYVAFJNMHAWDYUHWYIKZVQQREFFTPMQDB");

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
    msg.setTimeStamp(0.8491206427128497);
    msg.setSource(12389U);
    msg.setSourceEntity(181U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(106U);
    msg.state = 176U;
    msg.error.assign("UGNHYEXWAPJJCWSZGTQBOGZOATUMLFNUJDAPSHYAMNBREFKDQZWKPSSFNQEWTMMPRZHXIEHTCJUYVJNBZBKKLBBEOGMHBNFZEZQPVSGXCTJDCXMTQRWJMPLNKMHIDULBAQLVRATKHEDWWXMXSGUAIQBEICEFAKSYJOLQGBRWVVGEXWLV");

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
    msg.setTimeStamp(0.33763407602782314);
    msg.setSource(2677U);
    msg.setSourceEntity(180U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.6091297993875633);
    msg.setSource(59249U);
    msg.setSourceEntity(112U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.5103563540794137);
    msg.setSource(7224U);
    msg.setSourceEntity(251U);
    msg.setDestination(35837U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.29778643048999254);
    msg.setSource(61241U);
    msg.setSourceEntity(164U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(244U);
    msg.op = 95U;
    msg.speed_min = 0.6004363741083276;
    msg.speed_max = 0.5951602483370781;
    msg.long_accel = 0.2677017384228104;
    msg.alt_max_msl = 0.2785893070172779;
    msg.dive_fraction_max = 0.783151161879878;
    msg.climb_fraction_max = 0.037927012227547574;
    msg.bank_max = 0.10989127607409888;
    msg.p_max = 0.46434442975923174;
    msg.pitch_min = 0.5162306826971308;
    msg.pitch_max = 0.17355813618204297;
    msg.q_max = 0.7149854750317461;
    msg.g_min = 0.3548815605737954;
    msg.g_max = 0.35054323998688774;
    msg.g_lat_max = 0.382680819659708;
    msg.rpm_min = 0.7559452398058147;
    msg.rpm_max = 0.9101102339900455;
    msg.rpm_rate_max = 0.6605117494951832;

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
    msg.setTimeStamp(0.07065173204062714);
    msg.setSource(51837U);
    msg.setSourceEntity(26U);
    msg.setDestination(27889U);
    msg.setDestinationEntity(58U);
    msg.op = 209U;
    msg.speed_min = 0.08106517390093981;
    msg.speed_max = 0.15916284736380015;
    msg.long_accel = 0.17428025318747564;
    msg.alt_max_msl = 0.026715322472444347;
    msg.dive_fraction_max = 0.7022881590327259;
    msg.climb_fraction_max = 0.07920837198122122;
    msg.bank_max = 0.5848157511153039;
    msg.p_max = 0.9033360390143964;
    msg.pitch_min = 0.8723940969121755;
    msg.pitch_max = 0.5165947042997645;
    msg.q_max = 0.591089825182843;
    msg.g_min = 0.17527731701056293;
    msg.g_max = 0.8018287936872751;
    msg.g_lat_max = 0.8598151481393022;
    msg.rpm_min = 0.8084868889713372;
    msg.rpm_max = 0.10167107276833953;
    msg.rpm_rate_max = 0.04249140019530495;

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
    msg.setTimeStamp(0.18423017295162636);
    msg.setSource(29646U);
    msg.setSourceEntity(102U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(126U);
    msg.op = 85U;
    msg.speed_min = 0.3792283226559603;
    msg.speed_max = 0.9838768463214247;
    msg.long_accel = 0.8063336428806301;
    msg.alt_max_msl = 0.9524098580336033;
    msg.dive_fraction_max = 0.7464389581785077;
    msg.climb_fraction_max = 0.9802979615104926;
    msg.bank_max = 0.5570168831095089;
    msg.p_max = 0.5831555851745153;
    msg.pitch_min = 0.8427728876430378;
    msg.pitch_max = 0.5178454504578714;
    msg.q_max = 0.5662735778938628;
    msg.g_min = 0.9430855601986975;
    msg.g_max = 0.721072334515724;
    msg.g_lat_max = 0.031163215475316308;
    msg.rpm_min = 0.838355713317373;
    msg.rpm_max = 0.1399261596703788;
    msg.rpm_rate_max = 0.13132889060215225;

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
    msg.setTimeStamp(0.11772062646773684);
    msg.setSource(43732U);
    msg.setSourceEntity(21U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(184U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("CHJXPNNGMJPOPFDKBTGMYTUIWWIBIAFEAYHGOXWGKRVONXGXHAHGTCMJUSLZRALDLPCPWPWMKWSQBDMJEFCQMFDSHNORYRZXAKBJCIPQRMFJJFVYCATTVNHNEBUWHERLGASLETDCUHDBLWOLTSKNSDIWVQVYUTRSEIVNIHCUPRBFZZ");
    tmp_msg_0.value = 47U;
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
    msg.setTimeStamp(0.3032162771896916);
    msg.setSource(14006U);
    msg.setSourceEntity(83U);
    msg.setDestination(35014U);
    msg.setDestinationEntity(135U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 49U;
    tmp_msg_0.op = 150U;
    tmp_msg_0.request_id = 35817U;
    tmp_msg_0.plan_id.assign("GZDKPXMBOOGAQRD");
    IMC::LoggingControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 1U;
    tmp_tmp_msg_0_0.name.assign("PDRCYTUUKUXLIDAQEEJJHAYWMWXVIBHCXAIMNVMGOKMCMOVPKLGQCAWZHZGSSYQKEIOVICUHXIZLQPMUBHQYIPFLNKOCTNNXPTWOVONSTJMPJZZSDQKQBWVUOYCDZNCVTSAXBQYECMQFUDHTETEGYSNGCOETQWRHYJBIKPRBSWUVNIAENRU");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IUMSBZBSASQCTOGLOLGPQIFKZXOIPYPCLFAWKJMLYQQPXFRMHQTRAGXZZXCUJUYMPHXBVDWTBVNLTUVLDYHHHITJNEVERUHXGZFBOJVEMSRCKSFUSCGAZDNMNBEESWOXMQ");
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
    msg.setTimeStamp(0.2709871355041761);
    msg.setSource(28409U);
    msg.setSourceEntity(208U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0040678262504192375);
    msg.setSource(29150U);
    msg.setSourceEntity(136U);
    msg.setDestination(27134U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.8709199376040562;
    msg.lon = 0.5871736797329389;
    msg.height = 0.3063620905231109;
    msg.x = 0.2805589324278105;
    msg.y = 0.3349465579169578;
    msg.z = 0.36726340263024704;
    msg.phi = 0.172825038840421;
    msg.theta = 0.4705010700512541;
    msg.psi = 0.2587925021562387;
    msg.u = 0.7859978941368534;
    msg.v = 0.4281285697474305;
    msg.w = 0.09223753903856369;
    msg.p = 0.43787260160543595;
    msg.q = 0.8127926570139812;
    msg.r = 0.03021961413401142;
    msg.svx = 0.051120847154119575;
    msg.svy = 0.3035572021651203;
    msg.svz = 0.5831342242114534;

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
    msg.setTimeStamp(0.3603669086294027);
    msg.setSource(47628U);
    msg.setSourceEntity(58U);
    msg.setDestination(30433U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.5311588398022282;
    msg.lon = 0.014298022918344366;
    msg.height = 0.6698579586193982;
    msg.x = 0.19445163372671181;
    msg.y = 0.07391751518958234;
    msg.z = 0.3329592091379556;
    msg.phi = 0.9202485381793191;
    msg.theta = 0.7031722619260731;
    msg.psi = 0.7385438696216818;
    msg.u = 0.5905531479190409;
    msg.v = 0.659543571437374;
    msg.w = 0.883102833517828;
    msg.p = 0.655108095370797;
    msg.q = 0.6881179039930029;
    msg.r = 0.0569641802715688;
    msg.svx = 0.6794477312246957;
    msg.svy = 0.1439497944081788;
    msg.svz = 0.8677027391682888;

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
    msg.setTimeStamp(0.11266253886960076);
    msg.setSource(40986U);
    msg.setSourceEntity(225U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.7948049104717192;
    msg.lon = 0.5121372643593034;
    msg.height = 0.05202499628759327;
    msg.x = 0.34195498742810304;
    msg.y = 0.5502474051827105;
    msg.z = 0.334042664784336;
    msg.phi = 0.9217408977799074;
    msg.theta = 0.7192475728887694;
    msg.psi = 0.9486501312733739;
    msg.u = 0.8433236837624442;
    msg.v = 0.14512947848141944;
    msg.w = 0.9396953481050652;
    msg.p = 0.5140468495913613;
    msg.q = 0.42478623559126205;
    msg.r = 0.40436595285385435;
    msg.svx = 0.8904762468423976;
    msg.svy = 0.3330301467743272;
    msg.svz = 0.8563951297632223;

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
    msg.setTimeStamp(0.4215234391700464);
    msg.setSource(29107U);
    msg.setSourceEntity(82U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(75U);
    msg.op = 142U;
    msg.entities.assign("ZGVSNAUHSEIBTRAMIJWUTLOVXHLYROMDYRVTWBUIGKYLAFWIPEWUPEYHQNEDXQEJTCSDKKSREZFHPRXJTSGQKCBDEMOOZOSZKDEACJEVDOJXMYLIQYJTFZYBWBHIFOSYXCOAVAPX");

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
    msg.setTimeStamp(0.24967212184144216);
    msg.setSource(39419U);
    msg.setSourceEntity(93U);
    msg.setDestination(14936U);
    msg.setDestinationEntity(35U);
    msg.op = 130U;
    msg.entities.assign("QANXAFERSBRCBFQLKIFFMSRMFVZHKDYSOYBTFHALOKGPG");

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
    msg.setTimeStamp(0.8801766508793529);
    msg.setSource(39564U);
    msg.setSourceEntity(42U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(55U);
    msg.op = 124U;
    msg.entities.assign("HXXCGIKYHEINNDNIQMYQZVYXFRPLZEQHDQJJPKUUMJURBJHAGFGFKIIDBGLCRASHUMZKGNNO");

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
    msg.setTimeStamp(0.3992297876092039);
    msg.setSource(39625U);
    msg.setSourceEntity(62U);
    msg.setDestination(19985U);
    msg.setDestinationEntity(227U);
    msg.type = 49U;
    msg.speed = 28025U;
    const char tmp_msg_0[] = {-61, 118, 14, 73, -21, 91, -122, -66, 13, 17, -13, 100, 67, 44, -77, -88, 122, 86, 5, -52, -8, 124, -39, -33, -45, -71, 20, 51, -64, -43, 33, -46, 87, -45, -105, -4, -33, -18, 79, 40, 31, 103, 10, 26, 88, 116, -116, -61, -102, 76, -75, 86, 66, -39, 59, -63, -94, -47, 44, -31, -123, 97, 86, 104, 27, 19, 93, 67, 73, 39, -21, 53, 6, -77, 116, 101, -26, -108, 12, 120, -95, -15, 29, 48, 65, -3, 32, -49, 75, 61, 103, 104, -81, -40, -107, 9, 111, 15, -25, -51, 20, 6, -46, 27, -20, 109, 28, 0, 91, 34, 20, 47, 115, -26, -118, -85, -28, -51, -57, 4, -87, 113, -103, 4, -6, -20, 33, -48, -113, -53, -71, 5, -63, 122, 53, -117, 21, -63, 34, 49, -6, 26, -118, 89, -56};
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
    msg.setTimeStamp(0.4334339521835563);
    msg.setSource(22878U);
    msg.setSourceEntity(23U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(197U);
    msg.type = 228U;
    msg.speed = 5735U;
    const char tmp_msg_0[] = {32, 71, 124, 81, 90, -12, -49, 31, -126, 26, -57, -67, -120, -14, -91, -19, 5, 30, 9, -34, -98, -116, 71, -92, 39, 40, -52, -29, -28, -44, -109, -98, 61, -19, 116, -113, 88, -27, 123, 11, -54, -53, -17, 58};
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
    msg.setTimeStamp(0.3073833044964127);
    msg.setSource(38031U);
    msg.setSourceEntity(25U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(212U);
    msg.type = 249U;
    msg.speed = 39478U;
    const char tmp_msg_0[] = {-11, 97, -101, 116, 106, -39, 86, -54, 111, -7, 4, -11, 99, -41, -126, -90, 37, 93, -88, -31, -87, -12, 29, 20, -58, 104, -79, -91, -98, 89, -44, -8, -127, 118, -109, 111, 65, -98, 18, 109, -103, -113, 45, -39, -115, 21, -35, 118, 21, -6, 30, -99, 3, 33, -80, 13, -84, -22, 94, -114, 67, -13, 25, -100, 71, 48, 47, 94, -38, 114, -122, 8, 42, -55, 87, -96, -55, 97, -63, -76, -95, -7, 8, -39, 14, -36, 20, 75, 52, 59, 71, -52, -12, -24, -76, 30, -44, -13, 119, 10, -41, 17, 64, 53, 100, 99, -114, -99, -87, 91, 106, -30, -86, -82, -53, 8, 60, -128, -6, 112, -69, 28, 65, 117, -107, -102, 27, 119, -26, 62, -43};
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
    msg.setTimeStamp(0.4379972263053872);
    msg.setSource(47324U);
    msg.setSourceEntity(152U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(91U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.07381780970608298;
    msg.bank2p_pgain = 0.5375703955438471;

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
    msg.setTimeStamp(0.5515252986134479);
    msg.setSource(18433U);
    msg.setSourceEntity(181U);
    msg.setDestination(25996U);
    msg.setDestinationEntity(81U);
    msg.op = 172U;
    msg.tas2acc_pgain = 0.2785087191962756;
    msg.bank2p_pgain = 0.7503490168227646;

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
    msg.setTimeStamp(0.653423589251809);
    msg.setSource(25590U);
    msg.setSourceEntity(228U);
    msg.setDestination(13256U);
    msg.setDestinationEntity(37U);
    msg.op = 107U;
    msg.tas2acc_pgain = 0.8273748355285446;
    msg.bank2p_pgain = 0.6948230796696591;

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
    msg.setTimeStamp(0.4653935288322558);
    msg.setSource(32637U);
    msg.setSourceEntity(73U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(225U);
    msg.available = 3055860125U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.34974068814229153);
    msg.setSource(6534U);
    msg.setSourceEntity(210U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(213U);
    msg.available = 651177321U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.834334871613849);
    msg.setSource(54331U);
    msg.setSourceEntity(25U);
    msg.setDestination(30142U);
    msg.setDestinationEntity(19U);
    msg.available = 697688613U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.8077344656118577);
    msg.setSource(42827U);
    msg.setSourceEntity(124U);
    msg.setDestination(7923U);
    msg.setDestinationEntity(249U);
    msg.op = 145U;
    msg.snapshot.assign("BCCELCMJFHZTRPWGQFYIJNCAJPDQJJTCBDQYNCTGOIZSXTMJKUVGAXASGMVSIZZUPMZNLH");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("GYJIFTNSNMZXWRLQJDDWWXNCKKZGJBAWNBIRVLSEJLS");
    tmp_msg_0.text.assign("UPUKMUTOAGLPFYEZSCORCQSVPESPYLAQEFOJIUMWYJMRZYIRZQIJHHQBYEXESWXAYSSFRWEDDQCKMQVVIJFICDBEGBKLHNAGOWXVKMDDBVXPVTZPUFHCBNPXQYBLYVJWJRSGMKSEHOFMUXLNVCXAEUOARJSNQZVTO");
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
    msg.setTimeStamp(0.797167419178004);
    msg.setSource(26045U);
    msg.setSourceEntity(75U);
    msg.setDestination(17711U);
    msg.setDestinationEntity(241U);
    msg.op = 245U;
    msg.snapshot.assign("MJJDJTCOWYSSIKXBRPFIBNNHURGPUSQCOUILUQPJGHZMHDAQLMCWWCBLSMEMWSNZHDRWAHHRFQJCYKJAUOKOKXJFQSP");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("VEQHRJHNNWYYTWBWBIVESMVAOFHPWJWWPBFOYJPISUWDODKNJOZQQBMFYDHKZLTSSKHOPCFLFWRDOLWHFMAUZTTMAMSPWRTEAZMSLNUADJLJVUIQNSJIPEDIJXBRKYGXGTTXCGBIRIYMKIXLHNXGAKOCCSSYGRRCPPNUTRELK");
    tmp_msg_0.sensor_class.assign("EBXUFCVOFYNGRIETQL");
    tmp_msg_0.lat = 0.2761918842998723;
    tmp_msg_0.lon = 0.8639522254120827;
    tmp_msg_0.alt = 0.98818062126018;
    tmp_msg_0.heading = 0.6639406671500361;
    tmp_msg_0.data.assign("UVTNDZTSHQXLBRCATZWAFODOQSMXWPLBGXEXBECUCQYRSSMPASWLZDLJOSKPXCRMUTAQDOGYGNIXDPNJGGVVDROBLYOYTWLKTDKIEZH");
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
    msg.setTimeStamp(0.62081342269317);
    msg.setSource(45876U);
    msg.setSourceEntity(164U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(158U);
    msg.op = 80U;
    msg.snapshot.assign("UGXMZIIAGNSIJSAOGDFHSAZATRJEGSSDDYMQWNTHANHIQVGCXKSIVUUEXKVBYXLCLJTQJQYNFHVKOYWCFGGSMNLOAOXIPREEHCYNBBAIENQXOCMPCFZPPLEZDFWFQTSFDDLAAULXXEYFABITQZMBFXUMJPHEYGMZSCBKYWRJWVVBQQLWORYP");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 13047U;
    tmp_msg_0.control_ent = 166U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 207U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7653843403916689;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 238U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.4001918133497918;
    tmp_tmp_tmp_msg_0_0_1.z_units = 133U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.3083582646671501;
    tmp_tmp_msg_0_0.lon = 0.01808712115587663;
    tmp_tmp_msg_0_0.radius = 0.8963419915386851;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 186U;
    tmp_msg_0.proximity = 109U;
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
    msg.setTimeStamp(0.05699877547473409);
    msg.setSource(3193U);
    msg.setSourceEntity(95U);
    msg.setDestination(11686U);
    msg.setDestinationEntity(134U);
    msg.op = 39U;
    msg.name.assign("HMJSWJYDHATOUGPQVGFDFTVGSUTWULXCXEBNKWIBHEDTUGNGCHZQLQWMVEFDMDUJAKWEVIJXPBAZKJUMOBYMIQCSWBVBVUPUBGGPJFKPDSJOTAVXYKJMKIQIFSOKCMCTOXFGXAHIHPRTRPQOEQSRNTYRVAZFYZRVONFJQULZWINHZXBDVYELKXXBLNQOKNDOIZTFMYKHCHJN");

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
    msg.setTimeStamp(0.3031193826992654);
    msg.setSource(19786U);
    msg.setSourceEntity(24U);
    msg.setDestination(60868U);
    msg.setDestinationEntity(239U);
    msg.op = 245U;
    msg.name.assign("LMSNKQYMXVBBPTKYAVZHDWOQQSDOPJMEXLEZXMIIBCZTUZRUFJOIBCJKPSUCATAHCGXZYDVDVCRQIMCIIYYYNEENFWD");

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
    msg.setTimeStamp(0.11130068338976595);
    msg.setSource(58245U);
    msg.setSourceEntity(214U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(110U);
    msg.op = 249U;
    msg.name.assign("XMBLOPSPDNUZIPOYUAYZKYGOVGWWBDXFKPMHDQMLFTFJNZPDSVNQBSWLKMKSTBDPYFLPEUIANHJGKETAONPWRIUXNEMQLXZSCIXNECVWTOGRDVYGJFQDBVROOPACJKNATYKZPWQFIREZZRBEOVVQRRUYCAYXGXJTQJGSMACVEHSGUXCLLKZJKEHJSBGJFAOHUHSYMTCSQRAHFEULRKIHUUYBNBMWWTTWDCELMVHFI");

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
    msg.setTimeStamp(0.07441980016436756);
    msg.setSource(19432U);
    msg.setSourceEntity(38U);
    msg.setDestination(29943U);
    msg.setDestinationEntity(48U);
    msg.type = 57U;
    msg.htime = 0.44614438356282304;
    msg.context.assign("QWCMEAZAVKGSRSYIGGETXXFCLWESDAFFFRWNAVUPYMTOPYUEJOSGLTLDKJMRPSDJKVMNHUDSDMNWSXZTFQWVHLUZL");
    msg.text.assign("JUQKWACQPHVTADMYBYGXDXHKKACFDKTXLPZGNWWBFUSYERRDAFKSNFDXQTQSIWYVVFJLKBELOBLJVNMTTOIJEOZBELLXNHSPPDNWISTEHOBBIQKCVHITHELTLMZRGVNCUOPFAGUQNQSCFHEVSTGJDZOWILXYJCWGRUMROIJQWUVGVYZ");

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
    msg.setTimeStamp(0.621503027427763);
    msg.setSource(65407U);
    msg.setSourceEntity(200U);
    msg.setDestination(34851U);
    msg.setDestinationEntity(229U);
    msg.type = 233U;
    msg.htime = 0.8413344613551256;
    msg.context.assign("TTZXSGZGLPQABDKPXHRIYZCFIYVHATHCEUFRUEVERTFRIGCGDBLFWULKUWOKRNZPYBZGHARLUYWCDEDMENQFNCJOXOJKEKBXGANWLGWSNTEVCYTSJOJLGLCNZHMAWPDVYKASNNYDEPSDBDTBHWIRISGKRXPQOVQNWJQOJJTMOYFZXUSMIPDQSXMAPCGVHSMOIAOSIBZXBXRODYLWLUVVEEBNQAMJKXCHVMIQVY");
    msg.text.assign("JVIQNGMZGBWPNHWQOVNTOTMC");

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
    msg.setTimeStamp(0.7648298051588182);
    msg.setSource(32990U);
    msg.setSourceEntity(173U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(76U);
    msg.type = 113U;
    msg.htime = 0.4887369163540243;
    msg.context.assign("VYRROPGOKKKBWBATYNQRNVEYLOWFLPCGXNHKILPONCJYSTZUKJCSGKSVPQKWYXAIBDOWJOLXENUTXRYWSVHGZLDUBVNMJYEBUIAVCJZZVDUPMWXRRYLJOBBLGGXGFSTZHZTKMPHCTMUBPFEUQFQSBPXMDFTQHAQCSFVHTOWQIVFULCRFIUDYEFTRS");
    msg.text.assign("AQGWVPKKTLZOULDQFDFXAAPNRYSPQVPWBTCEAOIUICEFTIQUJNEZRZXTBNBPGILZRAHMWCSWHGUNXMMODRSGRYVQLNSPANWRFUEIVMJJP");

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
    msg.setTimeStamp(0.01202561267309843);
    msg.setSource(29423U);
    msg.setSourceEntity(99U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(155U);
    msg.command = 131U;
    msg.htime = 0.04938221857850722;

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
    msg.setTimeStamp(0.735456386085193);
    msg.setSource(26076U);
    msg.setSourceEntity(4U);
    msg.setDestination(9538U);
    msg.setDestinationEntity(233U);
    msg.command = 193U;
    msg.htime = 0.20859784605920606;

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
    msg.setTimeStamp(0.2072882969465869);
    msg.setSource(60237U);
    msg.setSourceEntity(105U);
    msg.setDestination(35047U);
    msg.setDestinationEntity(229U);
    msg.command = 93U;
    msg.htime = 0.8531594755651737;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.htime = 0.8525807505706858;
    tmp_msg_0.context.assign("RXCXWOWBUKHUTZKQWLJANPRIFNOMBAGCYEOVDKUBNJJJXVSILCHVHEHTNMMJQZEPRFZWFNYZVUSFAKXBQPQNVFGJYTEWEQFGRZGPERPOBWSKDLQBZABZIEBLHGHJMMADCMOVRFHUAOIIGLOXNULUWTIMVULMCDWCZVUISBKQMWFTDQHPCDFDKYXQESPQSTAAFHBSKYXJRTRWNLCJNGZIJPYSPOYMRXATOTPDZGLVSUESDYLGRXYTHC");
    tmp_msg_0.text.assign("XPXMDMDSRABBVODRAYWVNESHJSMRETJMOKJXNVJGPVHAOPJNAQLGXCXUFTCAEXPFTAOCTKGIKZGGRPNWKVNTPYYIEFZDPWITSLZQFVWCSUSKQAJZVNYLEWVQHSMJRQLCBATBCOKDQCZZAUJFJTQXIZLRUZUYIWXUYLEOCGQBSKWHFFIOYRUFSGHGIDXBPIWPMINQ");
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
    msg.setTimeStamp(0.9421408423335798);
    msg.setSource(45641U);
    msg.setSourceEntity(125U);
    msg.setDestination(41919U);
    msg.setDestinationEntity(210U);
    msg.op = 69U;
    msg.file.assign("EUWZDGWKUFAXOUXOBZFTCHSAWQSROUCPAMGJBJQJHCQYVEBIEQBQAKFDDINGSJXZBRIZGXQZKXGWDYPPZQVXPUDPFMGGZLHKORNIXAQBUEM");

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
    msg.setTimeStamp(0.316590172592373);
    msg.setSource(57974U);
    msg.setSourceEntity(71U);
    msg.setDestination(34389U);
    msg.setDestinationEntity(193U);
    msg.op = 75U;
    msg.file.assign("CIJNXKAWNHETJOPKAHRIZMMNFXMDJHNSPUKGRIOLGZOLPDTXSRYVVSPYYFLTGVWQEABWLVHYUQOTBWRVBHSQKGCCMCMURDYDJJWTRQCVDIXOMQAVBFRZVPFYEJZOQTDEQUFNAFVUEBZKUMFDPGCICFWIXTNKLIRXXEBXJHWTPDJCGPKMZTJDSVZSQANNEUMGRYNOBGUAXSYPTEJIOLYHXLQYWCEHFIZNGURIOBBFPKLSWE");

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
    msg.setTimeStamp(0.5226904027344476);
    msg.setSource(45344U);
    msg.setSourceEntity(60U);
    msg.setDestination(28567U);
    msg.setDestinationEntity(217U);
    msg.op = 174U;
    msg.file.assign("OEVEONQLWUIIFKEDUZWWEJRAPJYNJARTPCGKJHEVCBZBTCGNQBEVHWIWURASFZMK");

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
    msg.setTimeStamp(0.5086768951743376);
    msg.setSource(58863U);
    msg.setSourceEntity(73U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(117U);
    msg.op = 239U;
    msg.clock = 0.6757729329640431;
    msg.tz = -44;

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
    msg.setTimeStamp(0.7543896416993041);
    msg.setSource(16027U);
    msg.setSourceEntity(16U);
    msg.setDestination(13109U);
    msg.setDestinationEntity(92U);
    msg.op = 203U;
    msg.clock = 0.7221691048616028;
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
    msg.setTimeStamp(0.054818796873848274);
    msg.setSource(5082U);
    msg.setSourceEntity(153U);
    msg.setDestination(31662U);
    msg.setDestinationEntity(54U);
    msg.op = 28U;
    msg.clock = 0.6301552836058593;
    msg.tz = 118;

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
    msg.setTimeStamp(0.646541330105125);
    msg.setSource(30173U);
    msg.setSourceEntity(144U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9378739269895153);
    msg.setSource(64776U);
    msg.setSourceEntity(83U);
    msg.setDestination(13461U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.02613672202637274);
    msg.setSource(53787U);
    msg.setSourceEntity(6U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.5342941780402537);
    msg.setSource(42U);
    msg.setSourceEntity(217U);
    msg.setDestination(24773U);
    msg.setDestinationEntity(239U);
    msg.sys_name.assign("VHLCSQNPTUVUKEQDTGPBQOGZSZXIVFNVSOASMFHMHPRGTCJKLBCRLRFTYJQXLYRQKDFWH");
    msg.sys_type = 216U;
    msg.owner = 4456U;
    msg.lat = 0.7241800219040977;
    msg.lon = 0.735875041947856;
    msg.height = 0.53996758513983;
    msg.services.assign("QNYUCRROIDWLSQESUMTROPURHNBWXFSEAOJUGOPZLVJGRGQESLKYHZCTLQOEWQXOJQPI");

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
    msg.setTimeStamp(0.8053881481240815);
    msg.setSource(38412U);
    msg.setSourceEntity(13U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(202U);
    msg.sys_name.assign("SXGFQCTBMLADJEFPLQJTBTYECMXAEETJLAFMNKUJIVDAUXGSWCVWWHFDIVUEIFDMAYZBNHOUSHSIAPKDXMOBNDFRNPXIVLTONPNWWMZVKZHRNHBRYUDLNZGRTYGAFQQPXZEHGYCCOOCQROLUSCRTXLOSGQHKNSWWCVAIKTBGYJBDVVMXZOHWEHKLYSBUDVQFKIEOGCFKXZRJXMLWQKPWQGJMZDSZCUBTRQPJYHLRIAUMBPZYNTEKUPEVJ");
    msg.sys_type = 23U;
    msg.owner = 21355U;
    msg.lat = 0.3339891300631883;
    msg.lon = 0.48607927782923877;
    msg.height = 0.5505234037336216;
    msg.services.assign("PNZKVCRDJRVIINLJBRQVRRGULDAWLDOPUTUHEGAFSVGNFLOLLSRMMEHSTKWVWWNIPXOPIWQSOMXCDTGFDALEEOKBBZQHTPXQWMFWSVTCQNYCQJFBRDCTAPHANUQEQZOZWKJEKRNPUSXYAPGOXGZDBDYZFCBTOLAEJI");

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
    msg.setTimeStamp(0.9497647633647613);
    msg.setSource(309U);
    msg.setSourceEntity(16U);
    msg.setDestination(4246U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("WBUJIKIWYPNFYLHPCOGHPMQGMCIBGXLQWQZWULNSCNPILMMHPDTZDBTDBGCYSKOTSEURKRYNIQTQWWEBUFVCXOTOQWRNQSXXXMFEHGIXFSLWXVIJDPKRSDVUPJAUVJCUSYDJHXRHSMACAGOTFAUHAAZRMEAVIAVCSZY");
    msg.sys_type = 39U;
    msg.owner = 61879U;
    msg.lat = 0.8254000865014346;
    msg.lon = 0.7994333561394532;
    msg.height = 0.23757058227924843;
    msg.services.assign("WWCYCAJFGURFIIVRNQZLUGBEKUDFMSJJRGKXFCFLQIWKJOSCXHHMUJYTAZAYVLGKEDYCODHXZBBPNRBSVALJSHFWGLUZDZTAKDXCLSJXIOLVFEXTQYXQBWCHINGAPMWPRNEKDPUSBMVMEZIGTKRXBVKVDPKIHHPAMRCAVZTSTBUOEEQSXFTSYQPRGRIONYAWFUNZOLRPEXKUDWDLQPQCVJMYNB");

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
    msg.setTimeStamp(0.017080635186773163);
    msg.setSource(24054U);
    msg.setSourceEntity(165U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(48U);
    msg.service.assign("LMQCQBKYWYNKCISXQADCVD");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.2854265564051003);
    msg.setSource(52954U);
    msg.setSourceEntity(73U);
    msg.setDestination(35771U);
    msg.setDestinationEntity(114U);
    msg.service.assign("CASOJGYGRDAWBDAITQLNZSOOPQGUOGZJTHFDHWNFPMZJUVXMUXCEBDCBHYAZYMBLAULALHGCFHFQBEPTRUSUMKORSELMYEGKTVYYALNQQZDTSUAYAHXFIJJPEDKJVEOBMQQJVHJLMWWCRNQPNIFEIKUPPCYMFXWWCGQWUKPPRXSVS");
    msg.service_type = 33U;

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
    msg.setTimeStamp(0.01805294398498669);
    msg.setSource(56858U);
    msg.setSourceEntity(128U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(224U);
    msg.service.assign("NARXKUHYNQEJFDUWCYAEHPZXYJXSKXIGYYOUMGKKELONUZHGOXNSCWWZBAJHJOBBFEQLASQQMWVCINRSGVVCVTWGDDSULNEGKWDSBVKUTSTTUJQZVOZKYDVUCZTMRMFINTIRYZYJPQAVMQSAHLPPWPURUJMORHXEBCCVARHFEZEGLOMXTELNNAXCLOJLDSCQWFWGJFOPVYZBRWKIBIRT");
    msg.service_type = 105U;

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
    msg.setTimeStamp(0.18439926275689333);
    msg.setSource(49917U);
    msg.setSourceEntity(38U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(34U);
    msg.value = 0.4011481957790859;

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
    msg.setTimeStamp(0.3017245582181981);
    msg.setSource(55901U);
    msg.setSourceEntity(137U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4482020210952732;

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
    msg.setTimeStamp(0.2462334199763655);
    msg.setSource(35780U);
    msg.setSourceEntity(180U);
    msg.setDestination(42847U);
    msg.setDestinationEntity(106U);
    msg.value = 0.786885315113718;

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
    msg.setTimeStamp(0.34157105721976655);
    msg.setSource(10731U);
    msg.setSourceEntity(203U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(53U);
    msg.value = 0.925938640549275;

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
    msg.setTimeStamp(0.6185265390211393);
    msg.setSource(48638U);
    msg.setSourceEntity(125U);
    msg.setDestination(64914U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9285670268512666;

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
    msg.setTimeStamp(0.8321499786726012);
    msg.setSource(40382U);
    msg.setSourceEntity(80U);
    msg.setDestination(45106U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7607246817010056;

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
    msg.setTimeStamp(0.271331577668506);
    msg.setSource(49696U);
    msg.setSourceEntity(53U);
    msg.setDestination(46291U);
    msg.setDestinationEntity(55U);
    msg.value = 0.684981095472309;

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
    msg.setTimeStamp(0.08096415889337583);
    msg.setSource(22622U);
    msg.setSourceEntity(139U);
    msg.setDestination(41219U);
    msg.setDestinationEntity(111U);
    msg.value = 0.3380794661799258;

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
    msg.setTimeStamp(0.40638256512665816);
    msg.setSource(43794U);
    msg.setSourceEntity(24U);
    msg.setDestination(5750U);
    msg.setDestinationEntity(113U);
    msg.value = 0.7428940429698514;

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
    msg.setTimeStamp(0.5306460168926163);
    msg.setSource(14516U);
    msg.setSourceEntity(87U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(224U);
    msg.number.assign("TWSVMSIJERJKGMBMFGPWOTNCULODQKMAHHWVRINBVZXKRBUIYFSIDKSZLYXEBFURKPHRYXZUHXDHCSDUTDHAPSOTJCONOGGCWKUSNPBCZMBZUMZXLDILLLYUQGKRSANNWQMTYTDHWZCNNLUQZPBALEEUYBHAFKVDJHSIOFJVMOPFVJOZ");
    msg.timeout = 40551U;
    msg.contents.assign("ANKIZRQYOJPGDXQUKTHASJRBWZGYPNZANRBRGTREOWCEXAVDTORVSTYQPFDPZBROMGVSHFYJLOMWWXEACSZJXXZB");

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
    msg.setTimeStamp(0.5445626722929972);
    msg.setSource(53472U);
    msg.setSourceEntity(94U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(129U);
    msg.number.assign("GGUKEDFDAG");
    msg.timeout = 61870U;
    msg.contents.assign("ISUGRHXOJAWSGDKWXTKFYDMSCMBLWBMZTUEVLBFBBQUIHSRHIVLMNBKATUERADKGYFQCJWSTRHXWEKPWZUDHJQYIWPCYCXGYONRHJFXSYQJMOOVJZPOFVVEUDEVHIGCCERJPXNMPVZ");

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
    msg.setTimeStamp(0.0733337219556024);
    msg.setSource(25491U);
    msg.setSourceEntity(40U);
    msg.setDestination(47644U);
    msg.setDestinationEntity(5U);
    msg.number.assign("EXWIXBFFUUEYIPJAPXRUGHFMGANGMINNSTPZHWVEBCLEWXKTHOCVMNULBQDFWCWLYTTZEOWIYYCTIOQZDSQOGAXXQUMTINMLYEZQSUCZCPCDIHFQDMSSVRLJBOASPYJGTZZGFQWFXUDBUJVJBFPJZIIKJYUQQHNXVDHPPLQABNRPDAGNAMVJUVPYHEDORKGOIVOTETWVBHKRS");
    msg.timeout = 13360U;
    msg.contents.assign("RKDXCVFGBUOZRAEWMGSRJCACAOFOLTYYBWALJMLQSKXXFYHDIJNTKSNPEROFVUSDASOXMQHZGPNQZPYIQGXIEDLUIJKLNBKYAMBROHKNWJETHPEVUHTSEKVMDDQBEITFPFOYWAGNRMAMAVQSTXLMG");

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
    msg.setTimeStamp(0.6827359782696394);
    msg.setSource(15914U);
    msg.setSourceEntity(93U);
    msg.setDestination(37573U);
    msg.setDestinationEntity(70U);
    msg.seq = 2167714606U;
    msg.destination.assign("QTVHLSCXVUYINQNKJJXVYKGIXIEIBMHUAKHAVGHUPRSWIFKBNRUMWRYKNDOTVMMTEOXXEELSGCWZERRQOTPBRKTIJEXAJPOZOQORPFTAFHHJU");
    msg.timeout = 5771U;
    const char tmp_msg_0[] = {-126, -18, 97, -25, 105, 37, -48, -4, -106, -13, -77, 33, 121, 87, 89, -124, -37, 54, 46, -55, -18, 20, -77, 101, -106, 103, -64, 41, -104, 37, -24, 74, 91, 122, -122, -6, -35, -88, -79, -71, 124, 7, -86, -82, 69, -94, -88, 107, 88};
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
    msg.setTimeStamp(0.015059780177377857);
    msg.setSource(37999U);
    msg.setSourceEntity(141U);
    msg.setDestination(32710U);
    msg.setDestinationEntity(19U);
    msg.seq = 824683739U;
    msg.destination.assign("WAMXXUOQDCHSYTONNDWTQGTHZBQGRKFVPTRFJTVUKAOIARXIPJYARYCKZKQXQEUOLXVUXBMFHPOYTVLJFLMXBXUQFZNODVQOPTXEBMNEEZEYSRUKIDCCWLQLSPLPKAUJAGKIRWJIPUWEPNZWWSAROPBWYJHILJMZCFHRG");
    msg.timeout = 40435U;
    const char tmp_msg_0[] = {114, -91, -105, -105, 61, 84, -110, -55, 88, 69, 71, -44, 60, -26, -87, 103, 113, -127, -1, -18, 33, 103, -97, 116, 1, 17, 89, 2, 42, -50, 121, 94, -12, 14, 116, 0, -36, 56, 65, 73, -7, -127, -110, -28, -107, -46, -111, -7, 103, -46, -97, -112, 109, -21, -33, 119, 54};
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
    msg.setTimeStamp(0.19515016181354583);
    msg.setSource(53979U);
    msg.setSourceEntity(156U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(67U);
    msg.seq = 191218386U;
    msg.destination.assign("DCPWEFFUIRCFEPUSIPFWXKVOKMEBRYXIOAUQAABXCATMZCDWBXNKREIDZRJYBZEDYRVSIAFROGLLOFVGNKHDJZEWCJGORJOPQWMTJXXLJDSSWLGXCWKGVCASNHIBIHAERCHWNIHJ");
    msg.timeout = 40028U;
    const char tmp_msg_0[] = {-76, 23, -70, 53, -29, 116, 88, -93, 33, 22, 106, -39, 24, 80, 54, 43, -91, 49, 22, -112, 119, -113, 22, 78, -71, -26, -87, -57, 77, -26, 2, 120, -22, -46, -85, 49, -76, -120, 35, -5, 54, 103, 8, 12, -8, 123, 56, -20, -112, 59, 80, 26, 46, -96, 121, 39, 30, -95, 19, 119, 79, -14, 111, 25, 7, 114, -58, -6, 73, -13, 36, -99, -83, -115, -90, 44, -88, -47, 30, 110, -87, -60, -31, 62, 47, 0, -43, -28, -45, 95, 74};
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
    msg.setTimeStamp(0.2475099854520565);
    msg.setSource(51823U);
    msg.setSourceEntity(86U);
    msg.setDestination(32546U);
    msg.setDestinationEntity(160U);
    msg.source.assign("OTUNPAZTDBPXKKTLAMNDNEIFMMBBYEQWLKYMDKBCFLJXVHSQFJYHVSABZNFXPIOHODMJ");
    const char tmp_msg_0[] = {-111, -100, 22, -13, -62, -124, -27, 47, 21, -50, -38, -11, -46, 123, -66, 95, 70, -113, 43};
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
    msg.setTimeStamp(0.8058169606210309);
    msg.setSource(33993U);
    msg.setSourceEntity(49U);
    msg.setDestination(26099U);
    msg.setDestinationEntity(70U);
    msg.source.assign("OVEDSKJDGJWXIBLQBYVBIALCODQYQAGFLPFVOONSUUPKHXNSYHTBORNHKUAWUDMFELBQNGOPHCPFXGQTJLNEWWEJUBKSUJOQITJVBMWSZJTCXRRKOUMZTPTZAUQYRHENCKRFCWSQKGDXPIZKFEUPXRSAEWOGWJHIMZAIZQTRHRMTTWXYLURFAAEYKLISMFNDBVHBTGMVHVXJLCAYSXQLEIYEMGOYHPCYCMPJ");
    const char tmp_msg_0[] = {32, 31, 69, -114, 63, 111, 112, 102, -41, -111, 112, 61, 25, -95, -119, -76, 45, 116, -60, 106, 97, 103, -34, 32, 30, -42, 73, 121, 25, 9, -42, -39, 103, 41, -7, -82, -120, 81, 93, 1, 22, -24, -23, 56};
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
    msg.setTimeStamp(0.8889411953259415);
    msg.setSource(39449U);
    msg.setSourceEntity(231U);
    msg.setDestination(5331U);
    msg.setDestinationEntity(243U);
    msg.source.assign("JHWYVCKXHRDSEPLOASACJCTQQXINATSRENFWUUYUYPTVILXJRFJBPWOVWAZYMKWUJVSCSGWGFM");
    const char tmp_msg_0[] = {123, 8, -49, 47, 117, -27, 15, 78, 44, -100, -30, 3, -108, -127, 17, -53, 107, -60, -61, -94, 86, 111, -66, -34, -47, -98, 122, -78, 43, 39, -97, 118, -22, -98, -94, 57, -38, -113, 40, 26, 85, 66, -121, -30, 115, 42, 59, -124, 31, 115, 0, 66, 79, -14, -68, 55, -87, 45, -92, -20, -62, -39, 54, -127, -95, -44, -22, 87, -79, 34, 115, 101, -67, 16, 2, -128, -89, 107, -30, 46, -18, -96, -119, 19, -75, 65, 78, -11, -102, 73, 35, -12, 79, 2, -21, 50, -100, -60, 114, 47, -18, 111, 34, -48, -80, -62, -78, 38, 44, 30, -100, -47, 113, -120, 6, -105, 27, 65, -43, 123, -2, -110, 41, -71, 84, 97, 99, 21, -70, -36, 30, -31, -109, -104, 78, 99, -75, 23, -34, 108, -121, 18, -15, 36, -83, -76, -62, -68, 76, 105, -95, 66, -19, -69, -14, -11, -70, 37, -10, 65, -62, -54, 93, 52, 68, 10, -18, 122, -39, -42, 70, -70, -75, -126, 44, 91, 74, -90, -64, -23, -88, 124, -80, 20, -1, 78, -123, -31, -67, 96, 7, 53, 64, 18, -16, 25, 34, -40, 102, 23, 39, -25, 80, -26, 33, -64, -82, 61, 38, 73, -50, 97, -57, 44, -101, 53, -14, 31, -124, -79, 62, 112, 40, -112, -73, -24, 11, 34, 88, -69, -52, 12, -128, 25, 36, -92, 91, -75, -128, -105, 57, 58, 33, -67, 47, -41, -45};
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
    msg.setTimeStamp(0.3617525574131252);
    msg.setSource(50673U);
    msg.setSourceEntity(195U);
    msg.setDestination(10657U);
    msg.setDestinationEntity(150U);
    msg.seq = 2420612001U;
    msg.state = 183U;
    msg.error.assign("LFMGNKPRXOMHDCIZJPGCYCYEGSCDAFRFBOWJMVSFCQWTVIUHIXPXWQASMDTFLRYWLBPTAPVEYZLWVMKKXLYAEKYJNUEVOUHNFGDAMOBBLYEQOPUWTYQF");

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
    msg.setTimeStamp(0.2773557458751017);
    msg.setSource(38885U);
    msg.setSourceEntity(125U);
    msg.setDestination(29844U);
    msg.setDestinationEntity(147U);
    msg.seq = 3540248744U;
    msg.state = 204U;
    msg.error.assign("XRXDULIXJVSNYVAVPKUWVIGEZFBXEZGZWLJWHQXVPGWZOTJFXWGNICFCZUCUUQAJIFMGNSERPSYYVLIUFAMDRKVOWCJTLIBEEUKFRRMRDWKYSAJMELCVLIYBDRIFILJSQRBAQVTGXKOOHGEJFKMXPWODNSMGMHEKMTHUPNBEQDNAXQQ");

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
    msg.setTimeStamp(0.5803905818410249);
    msg.setSource(17647U);
    msg.setSourceEntity(129U);
    msg.setDestination(9104U);
    msg.setDestinationEntity(247U);
    msg.seq = 2975493210U;
    msg.state = 221U;
    msg.error.assign("GORLDKGCIWMCOJOJKEJPREPRJVNHOMUCUXXQLKIZN");

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
    msg.setTimeStamp(0.9873923679286319);
    msg.setSource(13287U);
    msg.setSourceEntity(34U);
    msg.setDestination(54529U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("JXIARJTEGCFYNKOYTLCMWAGPRQJFXXBYHNFSKVDNVQHLWOOPYUYGZEZEBXNSJGQPOADMVHIYIRKTQIVPVDRVBXFQFCLISLIDQOUTGZJTUEZLSXXPQUZPBHNFWAYELUMHGGQGFLNPAAWSGDENEVXJQWOBHVBIKJUCSOIQDAMWBKESASRCKTZRZMGRDUMYVDSKDCHPXBCNAKTOPM");
    msg.text.assign("MASHRVCPJIECOBRUXYHOQEHAPEDOBIBZSOQLPIQCKHAWGTRGLARBZWWSDYQTMKMAYXVLSAYLBMCQGEWNCXWFKVOFTVSWVGIPMZBPZKPXJUNPDUNVKXSDHDFLRIUZXEOCTTDCQBNIJQGYNHUHNGHFROBORUZTKLAGYVPEOPYKDMGQARGLNSQWVFLDZREMMHNJTIJBWKOVEBMKWFFZEFJRCIX");

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
    msg.setTimeStamp(0.7952054471682423);
    msg.setSource(25091U);
    msg.setSourceEntity(44U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("KQTLSTEAJBTMBQGFICKSDGHWADJVINJMYLNYURSQVVUQBTIQGDVNPGFPJINPFOUGJACYWMABKALPWTGWHAP");
    msg.text.assign("DVAYUWZWZCUUSBAXNGMNPXHKPLQGXGYLRUSOAPGTBOTDSKVRHTNFCWMHSKIUTWBVKSTHQMXXDSFJRQICPREZLDFWDOJNUBRKYEMALAFMPVW");

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
    msg.setTimeStamp(0.2506229053172535);
    msg.setSource(49263U);
    msg.setSourceEntity(245U);
    msg.setDestination(61420U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("NRAWDJUDBUDLSAFOJUTYQBXPPTTZHTZCFGNGUCWUFMDVGDBWHBVVQWZQGETVNJVSMAECOWPFIWCAEXZRXFKGSWJQZCRFKHHKEVSOXSEQSAXRJW");
    msg.text.assign("WAQESKQZXNTDAYJVKYJVGCWHAPTKLRBQQXTDWXVQTBDYZKKTOOZGENUQUHVURUOZWEUIOCKYBFLRKEUFMLHIDSEFMVXEHYIQPPAPDOLHWVXECHFARKLNZQLSRYCXUGROOTDCJZYLZJMRNMMNIGGVZSVMLGECGCJJUKNIDSLQSBNWTGPDBFORPHUAPBGYZKWNPXBPTEFXBAWBVRYIMFEHNSXXWCHGOWUYFITMIFBIJAPVCA");

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
    msg.setTimeStamp(0.39699410446919026);
    msg.setSource(40762U);
    msg.setSourceEntity(149U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("TIVUCXHOWPQDTCZFEPLSGINOHEPQQEJRBOCBMRMWMYFQEAXYOSTKDUJKJVNYFARULESGMKFTBBYSEJXVUBBCYJW");
    msg.htime = 0.3237863212785025;
    msg.lat = 0.7143796420781754;
    msg.lon = 0.9450986144639015;
    const char tmp_msg_0[] = {2, 100, 41, -69, -62, -1, -70, -48, 19, 84, -36, -86, 48, -67, -66, -59, -24, -34, 110, -112, -102, -4, -51, -23, 46, 70, 90, 28, 68, 35, -43, -82, -87, 113, 61, 88, -42, 36, 12, 87, 102, -105, -17, 86, 80, 32, -83, -11, -71, 94, 94, -84, 45, 65, -50, -56, -99, -45, 31, 97, -119, -32, 20, 85, 98, 10, 124, -39, 54, -105, -47, 17, 72, 100, -122, 99, -88, -31, 15, 27, -28, 98, 99, -78, -22, 25, 96, -110, -110, 4, 26, 59, -93, -72, 100, -120, 23, -85, 114, -90};
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
    msg.setTimeStamp(0.8041348256055435);
    msg.setSource(62112U);
    msg.setSourceEntity(65U);
    msg.setDestination(16277U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("WOXGPCVMTOZRXBDOLUMFTLGWWBFATCIBYJZEZXSLRRYWTYQMSJCDYXROKJUKRKKTQMXYXQDHSSDZERDSWTZPCKEZCVLTCOWHFFAFMLIDSAHPGFJCNAFSUWYVDNUVRYPSNJIIOPMTVOFYBEIQHZKCUENCOIVMGXULD");
    msg.htime = 0.12086236810052198;
    msg.lat = 0.2811985387945314;
    msg.lon = 0.0855347914151735;
    const char tmp_msg_0[] = {-106, 15, -56, -43, -114, -34, 25, -10, -56, 40, 115};
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
    msg.setTimeStamp(0.8908948564324282);
    msg.setSource(15226U);
    msg.setSourceEntity(32U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("RWRQPKOOTMNEOJYHRYCOUKPBPGIHXPHCKKJZBIWWBMMCCTXBNUJZXQSJEOVNKMUZPDTBTIZJGVGBXWGSSCBHLCWDBGOFANAFLHDRKMGTHAMJVXQGLTOYGEQLHWFPIYAJVBRKJVVQQBLWRNRZUUEEEVOADLSJSCPRZLCVVUQYITIETGDSNEQFSZAAEYRFNIOPXDMNHVNAXTFLMQIFLZAWIKJXTLCFSWRUXUOHKFUMXADESIKWD");
    msg.htime = 0.8169038569943741;
    msg.lat = 0.3914787169838825;
    msg.lon = 0.9241992206792402;
    const char tmp_msg_0[] = {-88, 68, -44, -70, -29, -39, 0, 59, -87, -28};
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
    msg.setTimeStamp(0.2683978553232357);
    msg.setSource(64343U);
    msg.setSourceEntity(20U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(215U);
    msg.req_id = 62508U;
    msg.ttl = 24977U;
    msg.destination.assign("YYARFIPOWKHMWJONXNIIEXAGMRXTDGMHRIDBPSSNAUURNZSQOV");
    const char tmp_msg_0[] = {32, 28, 66, 2, -19, 25, 88, -13, -12, -22, 27, 88, -113, 100, 93, 22, -57, 50, 34, 114, -120, 3, -1, 36, 69, -11, 32, 44, 30, -125, 19, -8, -81, -15, 5, -120, 1, -14, -70, -121, -103, -114, 64, -54, 92, -125, -89, -10, -30, 74, 46, -35, -79, -64, -106, 101, 119, -3, 62, 28, -70, 59, 47, -127, 14, -45, 80, -78, -80, 9, -110};
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
    msg.setTimeStamp(0.6437303109651077);
    msg.setSource(64531U);
    msg.setSourceEntity(185U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(241U);
    msg.req_id = 9896U;
    msg.ttl = 44681U;
    msg.destination.assign("ZYLPOJGCJDIZYGHWGRNDLOVPNWKYFGITFPIELXNTUJDHKBZWIKQALMQBTEMDODCXDUFYTUICCMWHHUQSXLBNQIUVVGUWZLCFKVJMNCQUOPPUTMNHOFYDUWQV");
    const char tmp_msg_0[] = {105, -93, -91, 14, 51, 44, 93, 33, -95, -12, 5, 96, 35, 51, -10, 28, 70, 115, -37, -23, -80, -97, -103, -20, -113, 36, -120, 66, 40, 37, -17, -116, -114, 20, -52, 83, -47, -57, 1, 85, -127, -92, 36, 29, 30, 53, 99, -105, -21, 86, -28, -91, 91, -91, -77, 78, -93, 67, 63, -51, 42, 60, -75, -38, 95, 63, -5, 3, 85, 37, -85, 66, -10, -114, -20, 70, 56, -112, 118, -64, 85, -18, 86, -80, 28, -88, 93, -78, -13, -70, 97, 94, 41, -26, 36, -57, 87, 42, 45, -26, -46, 35, -26, -63, -92, -24, -128, 110, -51, 27, -105, 111, 115, 54, 72, -4, 108, 3, -91, -95, -110, -31, -4, -87, -41, -60, -62, -17, 124, 56, -55, 101, -100, -27, -80, 112, 46, 4, 35, -55, -40, 124, -14, -60, 68, -43, 59, -124, -115, 79, 44, -40, -78, 39, -4, 111, 9, -33, -123, 58, 35, 67, 77, -116, -42, 123, -38, 10, 118, -64, -109, -113, -83, -1, 94, -51, -65, -119, -59, 34, -77, -49, -81, -93, -29, -90, 91, -10, -2, 4, 110, 20, 15, -11, -96, 112, 21, -124, 64, -83, 26, 27, 42, -105, -114, -74, 34, 13, 123, 122, 94, 37, -124, -74, 27, -97};
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
    msg.setTimeStamp(0.006640102644903667);
    msg.setSource(16532U);
    msg.setSourceEntity(115U);
    msg.setDestination(20366U);
    msg.setDestinationEntity(143U);
    msg.req_id = 52383U;
    msg.ttl = 728U;
    msg.destination.assign("KPDSIRVTJUHJISMDLATPNWDYFBTSLOTBJDMMAGKVBIPQHGEHDVCXGROQBJGRNYDUEZYHRNHDNJVOMHORTPLSUSQFEVSBFNLRECIYXXCHEKMNEHAXMYODWRPELQQGYIKMSGZQRFGZXZKBFLQTMHZTOCJLANSAUCUEQOWLZNFGRAVUCLACESQCJUOXZWWFKKFKPBIUAZJIYKPMXWO");
    const char tmp_msg_0[] = {2, 54, 46, 54, -51, 88, 2, 65, -99, -15, -35, 9, 56, -38, 108, 43, -13, 74, 31, 97, -37, 16, 89, -65, -123, -17, 36, 65, -89, -93, 48, 107, -46, 76, -81, 119, -26, 45, -109, -86, -21, 28, 7, -93, 54, -11, 57, -11, 58, 78, -15, -88, 106, -91, 48, -115};
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
    msg.setTimeStamp(0.8025195996613191);
    msg.setSource(4453U);
    msg.setSourceEntity(38U);
    msg.setDestination(23401U);
    msg.setDestinationEntity(236U);
    msg.req_id = 25879U;
    msg.status = 236U;
    msg.text.assign("MMVWJSYYANZARSIZQSGSYJULOQJFTLBGJLNHQVNATMWMWLBBHHDKVSPQYPCFTREXXPHRAFJPWWRXVASIHIHVOGXEGSVEHCRCVKIVMKCUABQWCDTXKXTETLUPPUSUOEIKFPNEDZDJWLPRDWIMMMFGTHAGXHBRAYXSUYWOOLJYOCTPFDNBBPZQQBEQWNEQTOFMNXIKZVIIODYOVKCHKACFULULJCZKJFEMUBDGNDZKRBQFO");

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
    msg.setTimeStamp(0.32471842109661553);
    msg.setSource(33212U);
    msg.setSourceEntity(63U);
    msg.setDestination(43540U);
    msg.setDestinationEntity(50U);
    msg.req_id = 45869U;
    msg.status = 145U;
    msg.text.assign("ZGDPXDNMXSPLUHSJGEMHLAXYZAKJABNAGQWMPDHYIOAYMTAFQLUNJGFVEBWCBSITSEJUUUUIKPKLHIRNTYXPPVVMWXLUQVTZVFTEWAMWQPFOQFVSOTKRBCDNHUKJRQXKALWBFBYBCBQEKYWQDIOXYHJJNNLEFGSXDYCBICRIOCJCZDRSZIOGKDNGPCQFFSMMUVBRWOVCTOYOMIQTDTFDJXZMKVORHHRNSEHZU");

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
    msg.setTimeStamp(0.19352296604562713);
    msg.setSource(48777U);
    msg.setSourceEntity(141U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(54U);
    msg.req_id = 44048U;
    msg.status = 147U;
    msg.text.assign("AMIQAXSLWXHQPBLDACYEUPQSFUDNRIJXDUVOFIMIYTXHOYYOZSPBWYHZOTAPNGKTWNCVMOOYMMQGEVLGQUZDPKYCOTCLQRMOKGRBIKSECSATUGECEEDFOGZRNNWLJWLPRUXGIGKVRJZIPITSUQDQHGJXAYFXUWFKG");

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
    msg.setTimeStamp(0.12919380602420294);
    msg.setSource(37583U);
    msg.setSourceEntity(201U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("UAUFXQKEJLPTFLBIEJJIIWOEMDTKANEMJRYDZYBBDMUOUTNDHIZZLWDETLVZCESMHAYKIJIZLOEQPHPNXTSVBRDWLHZOVCMPA");
    msg.links = 145067653U;

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
    msg.setTimeStamp(0.45038333640466666);
    msg.setSource(44799U);
    msg.setSourceEntity(233U);
    msg.setDestination(17959U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("YHWRBBFIFHPVDQVZTZAMMPMAHULNIFBPJUMJCIQLJYWRUGN");
    msg.links = 3570215346U;

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
    msg.setTimeStamp(0.9761776910048481);
    msg.setSource(15726U);
    msg.setSourceEntity(216U);
    msg.setDestination(4898U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("CMYJNLTYXXSFHOCMESRQLZFIYUNVMUBONBKFBUWPLRVRTCQEXAJQLBDQOIRCSBFNZWOVZIHOQSYDEWNKASCJZMCHFVLWMKQZHTMJHNATAOELUGREIXHZJQKARSYPVPVSGRBQLAPWSTLYFTLBFUIRFVCGQTJINFZWDTNNCOUOXXMOJEMBDMMPAXASRGFPXJWVRIDCEPZAPHWYYDGKVGTGGCHEKEBWYIPDYJUKKQHNKUTEXXPWLS");
    msg.links = 1584731438U;

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
    msg.setTimeStamp(0.2700357675975009);
    msg.setSource(35923U);
    msg.setSourceEntity(110U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("OFJVMXWXDWNFOVZPVZMNKYQPMOEHZIIOGYVLYBBVCZEBHBGQTEYTMWBQLSDXIQUAVOZHGJAPTCRBEMKQXALGFZSJOLNRPKXDFXJKEMMDGFGLOHFLHCZIKWRJEPSL");
    msg.action = 215U;
    msg.grouplist.assign("AJQHSLIYJRERKGERLPVTUDBAVPMTDDFACJPFVHPGRWBLIPIXZYROICDOCKGTXWUSFJSZOKQGETCWVENTINHNAGCWQMLTVOKCMNBKLOEMZSUFSPOUZVVQJBXZETAGIHEAXDRKMYBQUCHLFJKAJPFKLVQPBJBRXOUSWXZSEOLFHYRDAGIKGYEBDHIFQDJHPNIVANSLOUTUFCMNQT");

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
    msg.setTimeStamp(0.44125410680007016);
    msg.setSource(30675U);
    msg.setSourceEntity(143U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(218U);
    msg.groupname.assign("SPJIXGEPNICMAKPVNSJZZVXYALSHBKHPBKVCAQULBZRPHSRCYBEFDDSQABKDHJEHHODJITTNIAMZIVXTMMVGANRIPDEISYUVGLRXSYYJLHRAYXULLQFQXBRMPNKBGQBSKXDFOTSDRYEWUQAHOFLBGACGWFJAJWPMIQVFFFUCPUOXVEKWCUKGWUZLFETOTXQWRCHJINQMWGSECWLUYNYMCPHOMT");
    msg.action = 146U;
    msg.grouplist.assign("KVIIERQUASHYAGGQSAXQHHNFFZRYBDVVSOMHNDRXGZCQPXEVUVOBCEPWZYAJBXZSFCKBBIZYREIECRTOIZZFSKLAGUCYFCDXTUPYUWHZLJXJUCKMRJJBSPSJPUAMABAGGWAOLTWKOOESQNUWYBNRWBEPPXRRJEJIWHLVIKMNZYVIWJETQGOESUMYYOGCLRDLFCVFMLUXHFGDIKKZLXPQKHTLTBDADOTQVNMPHDCNSHJVMXNQGTPMDQNFMNTTID");

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
    msg.setTimeStamp(0.47081602755454044);
    msg.setSource(898U);
    msg.setSourceEntity(69U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(79U);
    msg.groupname.assign("VJZVIHFCUOTQCNRPYSMLEKNVPGYDIBUEZCVDJUDQYLZISHSBMALXWRQUKLNJGTADMDFMOCETCKYZNPLTIGWFOFXZTBNKGSSAFGVPEG");
    msg.action = 28U;
    msg.grouplist.assign("NWQUSHAUSKRLAPCNLMIBAWSPASNUODTPFCBMOVGYYYCUUVHLLEEYLGDLCOMXNNPVFYMHEXKYOOCKRBQTVMIHNDWFGGJOZGRQQVRKWXEUTVKAJQOLZNQJNXIVRRUVBDFBATJEXSMBSGJDPCQAMAYITWDFJUTCJWEQXVUPEPTZQSFHHJFZUGZBQSCOSZOOIHCRDZFBHPJWHWIDXZR");

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
    msg.setTimeStamp(0.9625716961295563);
    msg.setSource(20306U);
    msg.setSourceEntity(149U);
    msg.setDestination(8182U);
    msg.setDestinationEntity(146U);
    msg.id = 134U;
    msg.range = 0.9248810397665352;

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
    msg.setTimeStamp(0.45087239350011843);
    msg.setSource(31417U);
    msg.setSourceEntity(110U);
    msg.setDestination(1683U);
    msg.setDestinationEntity(216U);
    msg.id = 6U;
    msg.range = 0.31471884845348475;

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
    msg.setTimeStamp(0.780658937996539);
    msg.setSource(59789U);
    msg.setSourceEntity(113U);
    msg.setDestination(38325U);
    msg.setDestinationEntity(125U);
    msg.id = 61U;
    msg.range = 0.33014680376042715;

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
    msg.setTimeStamp(0.18162498221507006);
    msg.setSource(61608U);
    msg.setSourceEntity(94U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(220U);
    msg.beacon.assign("QTPSUDZFAYZMHZQGXJUVUYXQICXLYEHJINLKZIBMBBVRGKBPZCQBVBUKJEMEFTD");
    msg.lat = 0.5885971726547514;
    msg.lon = 0.2906471074472122;
    msg.depth = 0.7134165206065675;
    msg.query_channel = 67U;
    msg.reply_channel = 37U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.5095129366054572);
    msg.setSource(32453U);
    msg.setSourceEntity(244U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("BKULWOUGRGHRDFTWOTAEBVAFKGMUWNMICFQWIUFPWOPVOKOZFJEKTAVPHHHNVPDKVZDIFQIXAZDDL");
    msg.lat = 0.056740419194098335;
    msg.lon = 0.20538792845731202;
    msg.depth = 0.48558080450097285;
    msg.query_channel = 89U;
    msg.reply_channel = 236U;
    msg.transponder_delay = 41U;

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
    msg.setTimeStamp(0.48704632900997913);
    msg.setSource(51205U);
    msg.setSourceEntity(109U);
    msg.setDestination(44135U);
    msg.setDestinationEntity(110U);
    msg.beacon.assign("HKBIVEAAAOBVOGHWDLDQARZTFHOUBWGCSENKDVTOBPLDLFPJYBYQJYGLBYTVXSMKDOJRWNKPBVZCBWHTNHKKKYFJIDEECWFNUSUZLSIWMVFVGFPWIKPNLUSCGPHIQTEEAMYKHTCRAUERDXPJRRZQWMHCZPNSXEMTLLUXJAQIDMQTEQMWIXWQFSPRUHJYPOXNTGAMNIJKUVJRSUAIGUSCZGCDSMVFCMNFRBIGA");
    msg.lat = 0.4950340095190837;
    msg.lon = 0.38756298247151133;
    msg.depth = 0.3270896498867636;
    msg.query_channel = 77U;
    msg.reply_channel = 48U;
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
    msg.setTimeStamp(0.4207289934212194);
    msg.setSource(49777U);
    msg.setSourceEntity(104U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(218U);
    msg.op = 217U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HBXFQORNBJTGEDDXHFKJJXJAUZGOUYVFJFESNUNKTPOENXIPOBGILVAZRNIKWIVDYGERVTNLEWBCORRRQOAFXVBMGRHLSYGWALUNLPGORTAHKTVTJUMEUBNADNJWKYXWSIVDXQSMMPCKYZCCMSYZWZDSPLGEPWZMOF");
    tmp_msg_0.lat = 0.491559566526632;
    tmp_msg_0.lon = 0.8998874106630385;
    tmp_msg_0.depth = 0.9742733435458323;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 111U;
    tmp_msg_0.transponder_delay = 159U;
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
    msg.setTimeStamp(0.7345261927643759);
    msg.setSource(9591U);
    msg.setSourceEntity(219U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(240U);
    msg.op = 206U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XTLMVAOTQJDAMQVOBPMFYCLFDNTEERJBPGHPAEORAUTSDZAIUWINRFMKHJGFESQDRYGCZCHHWLMOIQWXPWBWZJXXCMAEELUGVXFKXKFRBETJIKQPN");
    tmp_msg_0.lat = 0.9204102801904556;
    tmp_msg_0.lon = 0.22141973665428305;
    tmp_msg_0.depth = 0.6908360364483773;
    tmp_msg_0.query_channel = 246U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 29U;
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
    msg.setTimeStamp(0.025944041206355406);
    msg.setSource(64734U);
    msg.setSourceEntity(163U);
    msg.setDestination(14829U);
    msg.setDestinationEntity(120U);
    msg.op = 168U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RUCNMDEEAZWBDOZOKUVCGGGNBLSAONMZXTCIBDXLVACLVWDOZSWFEETHGQYNBSCDIEGBWXXEBOWVBPHQAWJFPQXQFNKXXAPHPPEHSUPZYJZDQJWMVMMAHWATCYIYKOUGPNLHMWXVJOEOLGDJLANURYRURFJFTYDIKFTXAEYFKKPUPUSRJTRSISQSWCMTLRDTIGUFBMOCJSYLZGNAQJEH");
    tmp_msg_0.lat = 0.15403873114653233;
    tmp_msg_0.lon = 0.563429175164945;
    tmp_msg_0.depth = 0.40558543649832535;
    tmp_msg_0.query_channel = 106U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 61U;
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
    msg.setTimeStamp(0.3899131815078254);
    msg.setSource(64107U);
    msg.setSourceEntity(155U);
    msg.setDestination(52596U);
    msg.setDestinationEntity(164U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 3457148773U;
    tmp_msg_0.id.assign("MLFDNVGAZPXULSPNODAXKGWLMGHCTIPQARAVNXWRKZHGCZLTQIXIUACBGJHJSGOCUDZTBUSZJSINFEVFOHQVOGUQAWEPYIPLKHVISMXEFZWUNENMHHGVXFGQFRQKNXIDDTMPUSXCYXYFZJJCTNWQMLBKLFWROYBTNAVQYOBDJERGUKHIEEBFMWDRPSKMOBJYYAMANUKQVQOHZHZBJJYTMWSEYDYSKIWCFCLTPTDI");
    tmp_msg_0.memento.assign("FCUIYRFILXEDBZKRUZKVTPMJOZXQHSTHYYNKGCCMJFJEPMNRTMKBYWGIXZNRFVBPNPCWNQEBMKRSROPKONGOVOSQPFELWMWOZNHXAWUCBBKXFIFHKGQDCZUAEGTGZ");
    tmp_msg_0.timeout = 5760U;
    tmp_msg_0.name.assign("RWVSXZWBXQLAWRWDNLCMITOEBENYLPFYTUNZKXJMMSADNNJEESXHHALXSUONNWBZACZMQJDVHFYZTSYFOEOREOFUTDTBPYGKJDQMVNMWUPEGZROBWQBQMHJGKYXSQOIKHVKYRPZLJZLUHJHMCIXRTMQSXTFJFTRDTFCLPGIGPDCLPID");
    tmp_msg_0.custom.assign("HOKZOLOYPLFIJCKHWIYQQUBGVSXWKTBBHXPHOGYGNNHGMVAULBMVGQVEURIMQWGMLAAEKWNKRFASSYMNTTLDVJCEWTHNJAZEQFSOVFYIRGFJFQFCCZDRPEXSXPUBCWTDJNCGJVEWBTOLDQPXRZFZABTCMLWPPIDJANESSRUYKXKGBQTYWMRPITNNXIZJFDDDHZAUGBSAK");
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
    msg.setTimeStamp(0.6378891346522337);
    msg.setSource(8827U);
    msg.setSourceEntity(86U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(224U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YAAQIPRWDWTLQGFAEMGYIPVWERYSKGRMMNMVSSJDZVIWOBGNLKWYNHLVSPIUGDHRDZBKTCSWCZPKEONGOFKQOAIXYNXZNCNZCGNXKQQXGETIMIJSJKGNOQOQJRRETHOEUHWLTLAKVYVATAPRYVLRZOFJBWJSHIANXRTHXMMIPPFODE");
    tmp_msg_0.description.assign("VXLLPTZWQBZQQCNNGOBQVJGTNVVEHPECNCNDRAHJMIAGGLAMFMMLRUFAYTQWIUZTOSGJCWLOGIUUONBRPJWROAMOCPMMBQONFKKWXXTUDIHOCYHAKDFNELEHSECWPXSZPUDNDVQEIBJSE");
    tmp_msg_0.vnamespace.assign("AYEMMCOSTRRHSCXTXZPQYDTDYIZHIFSUCWDNXKYLCPQFNNPNVTHCACHSVSYGKJYOQJXWSZJROIIWKVMVURGRNSYPDXKGFAEBSIEQGZWPIUAKKQFIZOFFVMQBLJXUOLFITNXYMJBXUPJATEJLVOMAIVDGNRZUFRSQOBNDJECWTHXCSPLGGOMVQTJMVZIQZVETGHRHABNAYCBLUDLQERCBLKKGPXUWKBWJOWLW");
    tmp_msg_0.start_man_id.assign("WVRJSCGBOPXNRFXJHVMABBICMCIJNJBOGCNGIDTTZGFICOLMSZXZNEYNKUDHLXXKQGVGRFWUEADFEPQSRVIMESFBJIEGEAYDCFQTJAAQWDNIUSMLWCZNWUPUZRSLBIIABHSHOMBQPKZHEPZYCEEVSSQVUKRYZZFYJVDTPTDYYHTQXOMLVDHLNMGBYKWL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("HOTCIWCQXCEHBOPJAVCFRNZMNGHKLEFHFFEICZDVEMEPXSQVNAYTCEGTUXOXMTQJKLJFPWKJOMFSJXCAYZFHPHVVOLTSITIBSGQYRMKUOHBVSFRUASIKBBOVVXVGGLNEKSOSDWMHKHWXGDRGCUTIUPRLIRQBSIGPDVUYLAZNNDALGBRJATRRJWXZZNLDCONNYMXDUEQZWAUBYQLURTMAQJTP");
    tmp_tmp_msg_0_0.dest_man.assign("SHFICZEBAVCFUOMTVLSWLPGDYQQCOSGYDCRWSIMZJJZGHGUWWDBAQBCNYVXRUCBGOAFEVTUEIPNPXEJHELNWKZPOAVBDODXRVCYHAFFQVSJXAENSLGIYGBXKTVUEMNYRCMTNYBZMQAIDUVIYRBJFHIHDKJ");
    tmp_tmp_msg_0_0.conditions.assign("JXPKMMQYIWRXJNMNQWBWYDOPZUAVJSYUMEHXGGFIFXFVMSXRLLMPTELRIDRFHHJVPGBOPDESKOWACNCDDUICVXTN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::FollowTrajectory tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_ref = 1475391966U;
    tmp_tmp_msg_0_1.id.assign("MSKZEDXLMHXMTKRQBICJFVOBGANYNVQJUXHPFSFESLNQBHZAZCPMBCOLMWDVTMCWWIXWGRCEJOPJLYWMFDRZJOCBGZVKXLOFEKREHAFNFYZUNKYKUCUDZODTXSJLAXIQHPKQXUBHALLTORINSAVJRZDQYARHVMSGBUSUTKCNTPGELCSQBMAVZWTIHYDJQUTTVPOGONIVIYRXETJVADWIRNBFIFPWWEIUEYNQLPBZYJDPRKGUMKWFCXSHOPGYG");
    tmp_tmp_msg_0_1.memento.assign("JFSIFRRGQQQXBDWNCNMDLUXZRDSFONSZFMQFGXGGJDBZCDFPMWZZEKHOLBVTYXFKBMWANPYKBGLDCDQIWPVAEPGYZUJRZTLPGLJUHSWWLNYMECJIA");
    tmp_tmp_msg_0_1.timeout = 16132U;
    tmp_tmp_msg_0_1.lat = 0.9082859209336861;
    tmp_tmp_msg_0_1.lon = 0.6117401805463718;
    tmp_tmp_msg_0_1.z = 0.4996561034019631;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_tmp_msg_0_1.speed = 0.4038087905090886;
    tmp_tmp_msg_0_1.speed_units = 45U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.10651012168756024;
    tmp_tmp_tmp_msg_0_1_0.y = 0.5908457904374204;
    tmp_tmp_tmp_msg_0_1_0.z = 0.11886806692997076;
    tmp_tmp_tmp_msg_0_1_0.t = 0.02792733129034719;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.custom.assign("SBOIFZQIKUPDCLRDAWNCHBVAKJFUZKBJCMTRMHOKTCBWRWYUBYYREDRKWOVUEEPYLTVMRYHIXENOQJJIPSMYTOFEMQBVGPXFJWXOCYXGWMIGXSNSFCWSAFMODRQBIZPNFTMSZHEBTAWHAVQLJJVZUGLGJINXUBTNZYTPJVRSZLAUEYJEYL");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.10166712900264674);
    msg.setSource(41515U);
    msg.setSourceEntity(118U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(197U);
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 180U;
    tmp_msg_0.value = 0.8171437558624473;
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
    msg.setTimeStamp(0.7356433359064466);
    msg.setSource(4525U);
    msg.setSourceEntity(53U);
    msg.setDestination(57941U);
    msg.setDestinationEntity(78U);
    msg.op = 214U;
    msg.system.assign("CXEGJTIBYGKPQWIEJMNXLFXNWFHXFAUHOTKQEQTUQZNESIVBAPZRUYZBIAMXIOIKJAMCHEBPWYDGLFGPSVMMSGTJUJAOLGMZXVXNZPYIQMHNADKYQWBRTCVJLTCORNKCWWZKHBHTAGHCBJIOFNUYRIQDCWWZCVUFBODQLWUXLZSRERZM");
    msg.range = 0.17221507009722203;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 40048U;
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
    msg.setTimeStamp(0.6889459845293427);
    msg.setSource(43301U);
    msg.setSourceEntity(37U);
    msg.setDestination(18357U);
    msg.setDestinationEntity(167U);
    msg.op = 114U;
    msg.system.assign("JGICUOIDDWUGEWWUOFCQBXYSAAQCOAMBMWDTOAFPQHDHPKJIOEWBXGJFUFAXUSEWMXZIYCIVNENLNBLRDGSYBVXTNTKPRMCB");
    msg.range = 0.0276209437737458;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("MGGJPGTDBPSWIXCKPFVAZULTMAKKTXVUBGWLHDAWSDQDEVZLIOJHKOIMKEOUWEFBTQQNICDSZFBCLFQUYUWIGSGLOIRTDRJEZXYCUIBTZNRYNPHPOFJXJAQZADCKJMFAVSEXWEGRVGWOUSQIDKQBFGQRYFUXAMTRXCUWHALAPYSBHALIKYHURNJCTOTVDQVZVENKVM");
    tmp_msg_0.value = 206U;
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
    msg.setTimeStamp(0.0682250546487726);
    msg.setSource(62464U);
    msg.setSourceEntity(214U);
    msg.setDestination(37822U);
    msg.setDestinationEntity(208U);
    msg.op = 196U;
    msg.system.assign("DWOVTZAWAITOMXSHSKAAZQZGQVMUZEGMXZOMMNDEFHBPJQILSZOVJGHMRRIMFVTKSTJGOJBRXQKYONSILYWJFLYCWEEAHCVDOWJLAEUPAYWHDSCNVUFINIMCDXVRHUPFPXOEWXPPRFHEPDCRNBEWUTNGUUDENSJIPBMYTIUZFKACDXQLQIRZFGROXJYWTQRZLBHZPFBSQIABJKBTHVJLKCWSVBOXQFNG");
    msg.range = 0.13411311787237334;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7561999224895936;
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
    msg.setTimeStamp(0.17320988652757274);
    msg.setSource(34100U);
    msg.setSourceEntity(171U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.4753936937558413);
    msg.setSource(8680U);
    msg.setSourceEntity(215U);
    msg.setDestination(33244U);
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
    msg.setTimeStamp(0.48381064094575266);
    msg.setSource(6629U);
    msg.setSourceEntity(155U);
    msg.setDestination(34089U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.7796875048135024);
    msg.setSource(56072U);
    msg.setSourceEntity(242U);
    msg.setDestination(1659U);
    msg.setDestinationEntity(74U);
    msg.list.assign("JIQSXRJAQYGGFXLKGNXJUBWHPHDGHZOALMGAZNLNIENWCHQCGTSNKPFKQIZVKHQGXWSRKEXHLECCSDWFIRDTUEQOWOULYHPVYSAFOJFUDKKUTHEORDTGWREVZDEBITKHSUIYMBMYALAVJRLDNRNZAU");

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
    msg.setTimeStamp(0.8162206197237701);
    msg.setSource(46737U);
    msg.setSourceEntity(7U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(6U);
    msg.list.assign("SGAQJGJCQZLP");

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
    msg.setTimeStamp(0.7618438949150897);
    msg.setSource(18678U);
    msg.setSourceEntity(130U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(207U);
    msg.list.assign("JLLVYMLHWRYSZZVNSAADPSKRWORI");

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
    msg.setTimeStamp(0.276227285911679);
    msg.setSource(19971U);
    msg.setSourceEntity(19U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(224U);
    msg.value = -19436;

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
    msg.setTimeStamp(0.04226613291905745);
    msg.setSource(65135U);
    msg.setSourceEntity(127U);
    msg.setDestination(50725U);
    msg.setDestinationEntity(80U);
    msg.value = 2035;

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
    msg.setTimeStamp(0.6086527781666006);
    msg.setSource(60460U);
    msg.setSourceEntity(241U);
    msg.setDestination(36360U);
    msg.setDestinationEntity(106U);
    msg.value = -11694;

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
    msg.setTimeStamp(0.2620768269692396);
    msg.setSource(5194U);
    msg.setSourceEntity(32U);
    msg.setDestination(23711U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7994377568033261;

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
    msg.setTimeStamp(0.7120210171011095);
    msg.setSource(51305U);
    msg.setSourceEntity(96U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(163U);
    msg.value = 0.9753434127266838;

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
    msg.setTimeStamp(0.7252862834892263);
    msg.setSource(7947U);
    msg.setSourceEntity(243U);
    msg.setDestination(29323U);
    msg.setDestinationEntity(135U);
    msg.value = 0.8890478376013289;

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
    msg.setTimeStamp(0.7904985390395451);
    msg.setSource(58908U);
    msg.setSourceEntity(78U);
    msg.setDestination(41473U);
    msg.setDestinationEntity(218U);
    msg.value = 0.7698761062706606;

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
    msg.setTimeStamp(0.7643316958379379);
    msg.setSource(42390U);
    msg.setSourceEntity(76U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(193U);
    msg.value = 0.2518688259977172;

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
    msg.setTimeStamp(0.40592475028040853);
    msg.setSource(54460U);
    msg.setSourceEntity(63U);
    msg.setDestination(10048U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9138095699769693;

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
    msg.setTimeStamp(0.47981530190818034);
    msg.setSource(64034U);
    msg.setSourceEntity(188U);
    msg.setDestination(20040U);
    msg.setDestinationEntity(244U);
    msg.validity = 59372U;
    msg.type = 233U;
    msg.utc_year = 52914U;
    msg.utc_month = 59U;
    msg.utc_day = 120U;
    msg.utc_time = 0.39703027795064527;
    msg.lat = 0.9048967288598426;
    msg.lon = 0.8102894569327649;
    msg.height = 0.47003699751978734;
    msg.satellites = 148U;
    msg.cog = 0.9244308857398841;
    msg.sog = 0.8043673446447701;
    msg.hdop = 0.08909691053178759;
    msg.vdop = 0.3757491259415626;
    msg.hacc = 0.8247132796782527;
    msg.vacc = 0.10173946655843502;

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
    msg.setTimeStamp(0.45024657824388115);
    msg.setSource(56928U);
    msg.setSourceEntity(240U);
    msg.setDestination(27654U);
    msg.setDestinationEntity(187U);
    msg.validity = 27317U;
    msg.type = 207U;
    msg.utc_year = 59231U;
    msg.utc_month = 111U;
    msg.utc_day = 157U;
    msg.utc_time = 0.6387895114448472;
    msg.lat = 0.08426056385644298;
    msg.lon = 0.8196157701572065;
    msg.height = 0.8805372058516422;
    msg.satellites = 18U;
    msg.cog = 0.8550034449404242;
    msg.sog = 0.09772655849640388;
    msg.hdop = 0.21625794979824797;
    msg.vdop = 0.03895943047218564;
    msg.hacc = 0.8470430422341709;
    msg.vacc = 0.6448751811656879;

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
    msg.setTimeStamp(0.9089928457560125);
    msg.setSource(7423U);
    msg.setSourceEntity(0U);
    msg.setDestination(63609U);
    msg.setDestinationEntity(110U);
    msg.validity = 61468U;
    msg.type = 209U;
    msg.utc_year = 11220U;
    msg.utc_month = 31U;
    msg.utc_day = 218U;
    msg.utc_time = 0.6713388824078151;
    msg.lat = 0.2301523871904535;
    msg.lon = 0.8052046620430094;
    msg.height = 0.6495038027669164;
    msg.satellites = 103U;
    msg.cog = 0.16562286611631882;
    msg.sog = 0.801546484205735;
    msg.hdop = 0.5107314260874317;
    msg.vdop = 0.6990892814776962;
    msg.hacc = 0.22606763693756649;
    msg.vacc = 0.8023448787848467;

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
    msg.setTimeStamp(0.6439455816109995);
    msg.setSource(29277U);
    msg.setSourceEntity(237U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(124U);
    msg.time = 0.657237999085061;
    msg.phi = 0.6483442778184461;
    msg.theta = 0.45060134446990896;
    msg.psi = 0.08258016135955104;
    msg.psi_magnetic = 0.3085145815862814;

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
    msg.setTimeStamp(0.7629411170757034);
    msg.setSource(14525U);
    msg.setSourceEntity(182U);
    msg.setDestination(54934U);
    msg.setDestinationEntity(90U);
    msg.time = 0.014824663490886625;
    msg.phi = 0.328344836551397;
    msg.theta = 0.8410606828824381;
    msg.psi = 0.28833224579743455;
    msg.psi_magnetic = 0.3115656434455437;

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
    msg.setTimeStamp(0.11175585677182653);
    msg.setSource(52964U);
    msg.setSourceEntity(160U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(205U);
    msg.time = 0.6903936384193555;
    msg.phi = 0.3691155810532799;
    msg.theta = 0.11435117261436034;
    msg.psi = 0.4884128169278211;
    msg.psi_magnetic = 0.19851750055916184;

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
    msg.setTimeStamp(0.858348296762877);
    msg.setSource(9889U);
    msg.setSourceEntity(14U);
    msg.setDestination(9921U);
    msg.setDestinationEntity(86U);
    msg.time = 0.7464224472461152;
    msg.x = 0.6618363070924446;
    msg.y = 0.6149582298325011;
    msg.z = 0.5890099182934847;
    msg.timestep = 0.6541295698672444;

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
    msg.setTimeStamp(0.2705039499357432);
    msg.setSource(13398U);
    msg.setSourceEntity(104U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(88U);
    msg.time = 0.7010355267172428;
    msg.x = 0.4333460239114689;
    msg.y = 0.4950743402581035;
    msg.z = 0.8811411528486437;
    msg.timestep = 0.08041443893408273;

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
    msg.setTimeStamp(0.6223252880706057);
    msg.setSource(65073U);
    msg.setSourceEntity(183U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(145U);
    msg.time = 0.2044033973048699;
    msg.x = 0.5604565093146262;
    msg.y = 0.3008945339564293;
    msg.z = 0.7382923849470393;
    msg.timestep = 0.3600184224498053;

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
    msg.setTimeStamp(0.2556304702736999);
    msg.setSource(61487U);
    msg.setSourceEntity(55U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(142U);
    msg.time = 0.7902629939489911;
    msg.x = 0.3597310555869838;
    msg.y = 0.0039881234239287355;
    msg.z = 0.796761068709001;

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
    msg.setTimeStamp(0.3040406943251315);
    msg.setSource(44547U);
    msg.setSourceEntity(204U);
    msg.setDestination(14032U);
    msg.setDestinationEntity(28U);
    msg.time = 0.46535744217650765;
    msg.x = 0.4140919756613787;
    msg.y = 0.11865581604086772;
    msg.z = 0.6344662867643837;

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
    msg.setTimeStamp(0.662964983489961);
    msg.setSource(2460U);
    msg.setSourceEntity(196U);
    msg.setDestination(7526U);
    msg.setDestinationEntity(135U);
    msg.time = 0.24625516595579422;
    msg.x = 0.3544567214681963;
    msg.y = 0.48577540400642105;
    msg.z = 0.5188149926562484;

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
    msg.setTimeStamp(0.05885219586448409);
    msg.setSource(8521U);
    msg.setSourceEntity(65U);
    msg.setDestination(10605U);
    msg.setDestinationEntity(174U);
    msg.time = 0.015918601451817116;
    msg.x = 0.39209163673025704;
    msg.y = 0.7487348154242316;
    msg.z = 0.681927536082332;

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
    msg.setTimeStamp(0.3582340203538349);
    msg.setSource(64686U);
    msg.setSourceEntity(85U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(164U);
    msg.time = 0.34836296807398903;
    msg.x = 0.7722148201856935;
    msg.y = 0.2370643811424874;
    msg.z = 0.26100587215510096;

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
    msg.setTimeStamp(0.2956055908706955);
    msg.setSource(13482U);
    msg.setSourceEntity(109U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(247U);
    msg.time = 0.07482460848712702;
    msg.x = 0.74900305070921;
    msg.y = 0.9859684099360448;
    msg.z = 0.3783148249764847;

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
    msg.setTimeStamp(0.9504645668556557);
    msg.setSource(59065U);
    msg.setSourceEntity(214U);
    msg.setDestination(45739U);
    msg.setDestinationEntity(25U);
    msg.time = 0.03922362286430636;
    msg.x = 0.36576096638414524;
    msg.y = 0.45322739284723523;
    msg.z = 0.8528570105232509;

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
    msg.setTimeStamp(0.022440041828825752);
    msg.setSource(63768U);
    msg.setSourceEntity(174U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(111U);
    msg.time = 0.49437109341891183;
    msg.x = 0.7443483386888688;
    msg.y = 0.4279831983817398;
    msg.z = 0.40989256676328345;

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
    msg.setTimeStamp(0.19194809725555995);
    msg.setSource(12264U);
    msg.setSourceEntity(2U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(131U);
    msg.time = 0.3844626991578718;
    msg.x = 0.9889951527602912;
    msg.y = 0.08666123663767744;
    msg.z = 0.7010932162595773;

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
    msg.setTimeStamp(0.04039294044361297);
    msg.setSource(9628U);
    msg.setSourceEntity(193U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(36U);
    msg.validity = 75U;
    msg.x = 0.11030361872676975;
    msg.y = 0.6857844667475727;
    msg.z = 0.051796344526240934;

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
    msg.setTimeStamp(0.3770711603267044);
    msg.setSource(1498U);
    msg.setSourceEntity(162U);
    msg.setDestination(26247U);
    msg.setDestinationEntity(63U);
    msg.validity = 252U;
    msg.x = 0.899715029306263;
    msg.y = 0.2649843265099229;
    msg.z = 0.6608433270352901;

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
    msg.setTimeStamp(0.7366171437390715);
    msg.setSource(12379U);
    msg.setSourceEntity(204U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(23U);
    msg.validity = 245U;
    msg.x = 0.6267926547017111;
    msg.y = 0.2505021832486576;
    msg.z = 0.24049436656258016;

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
    msg.setTimeStamp(0.1089881681392838);
    msg.setSource(27785U);
    msg.setSourceEntity(201U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(67U);
    msg.validity = 157U;
    msg.x = 0.9518994805632495;
    msg.y = 0.06884132855527714;
    msg.z = 0.25013026418293116;

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
    msg.setTimeStamp(0.7112511479337039);
    msg.setSource(45081U);
    msg.setSourceEntity(252U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(113U);
    msg.validity = 7U;
    msg.x = 0.8331683560146321;
    msg.y = 0.9623892123729193;
    msg.z = 0.7616137566916383;

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
    msg.setTimeStamp(0.7559858008992765);
    msg.setSource(22895U);
    msg.setSourceEntity(228U);
    msg.setDestination(55329U);
    msg.setDestinationEntity(66U);
    msg.validity = 75U;
    msg.x = 0.5469395952813497;
    msg.y = 0.9616225067733383;
    msg.z = 0.9379483498336091;

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
    msg.setTimeStamp(0.4758157365689397);
    msg.setSource(60328U);
    msg.setSourceEntity(150U);
    msg.setDestination(7030U);
    msg.setDestinationEntity(173U);
    msg.time = 0.7788439700116682;
    msg.x = 0.8184031049803489;
    msg.y = 0.2961583894330969;
    msg.z = 0.7366376104710914;

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
    msg.setTimeStamp(0.8184504221290452);
    msg.setSource(59367U);
    msg.setSourceEntity(14U);
    msg.setDestination(32998U);
    msg.setDestinationEntity(119U);
    msg.time = 0.10149722023733887;
    msg.x = 0.5789724688994823;
    msg.y = 0.44043162010963977;
    msg.z = 0.41310980676440223;

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
    msg.setTimeStamp(0.9552737893973496);
    msg.setSource(6404U);
    msg.setSourceEntity(120U);
    msg.setDestination(4092U);
    msg.setDestinationEntity(61U);
    msg.time = 0.14870980622299101;
    msg.x = 0.6778202400978821;
    msg.y = 0.5789943246280134;
    msg.z = 0.29367828599249535;

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
    msg.setTimeStamp(0.44227252092760827);
    msg.setSource(12818U);
    msg.setSourceEntity(157U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(10U);
    msg.validity = 121U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.08586329864457687;
    tmp_msg_0.y = 0.3300825420343736;
    tmp_msg_0.z = 0.6526463576122016;
    tmp_msg_0.phi = 0.14398266737728516;
    tmp_msg_0.theta = 0.524829579013622;
    tmp_msg_0.psi = 0.305092077889086;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1886655660795895;
    tmp_msg_1.beam_height = 0.5934704117053169;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.42153968163141287;

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
    msg.setTimeStamp(0.8426652400900311);
    msg.setSource(9564U);
    msg.setSourceEntity(18U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(134U);
    msg.validity = 44U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15839352158124242;
    tmp_msg_0.beam_height = 0.09201872758714547;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6055690856718806;

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
    msg.setTimeStamp(0.13948493120809102);
    msg.setSource(24274U);
    msg.setSourceEntity(59U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(169U);
    msg.validity = 20U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1377322676282483;
    tmp_msg_0.y = 0.5969585434278216;
    tmp_msg_0.z = 0.5277554279145505;
    tmp_msg_0.phi = 0.7396483030398804;
    tmp_msg_0.theta = 0.21728411072991116;
    tmp_msg_0.psi = 0.03719887944377753;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.013495222820493757;
    tmp_msg_1.beam_height = 0.7984740786690029;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.35444256823528775;

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
    msg.setTimeStamp(0.6688396807589746);
    msg.setSource(46410U);
    msg.setSourceEntity(138U);
    msg.setDestination(7930U);
    msg.setDestinationEntity(84U);
    msg.value = 0.3395636710969737;

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
    msg.setTimeStamp(0.3539851398021172);
    msg.setSource(47224U);
    msg.setSourceEntity(90U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(52U);
    msg.value = 0.16417905076414563;

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
    msg.setTimeStamp(0.13366206439091033);
    msg.setSource(44148U);
    msg.setSourceEntity(248U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3178872458988372;

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
    msg.setTimeStamp(0.8833708801991627);
    msg.setSource(62383U);
    msg.setSourceEntity(16U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(58U);
    msg.value = 0.09494605901614939;

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
    msg.setTimeStamp(0.3415662536658276);
    msg.setSource(45925U);
    msg.setSourceEntity(223U);
    msg.setDestination(10742U);
    msg.setDestinationEntity(51U);
    msg.value = 0.49223355368376576;

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
    msg.setTimeStamp(0.35534240670927386);
    msg.setSource(13140U);
    msg.setSourceEntity(24U);
    msg.setDestination(26671U);
    msg.setDestinationEntity(51U);
    msg.value = 0.1459454060526275;

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
    msg.setTimeStamp(0.3952398729567983);
    msg.setSource(62982U);
    msg.setSourceEntity(81U);
    msg.setDestination(29918U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5270494932649459;

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
    msg.setTimeStamp(0.5571283490417251);
    msg.setSource(833U);
    msg.setSourceEntity(49U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9246363902235;

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
    msg.setTimeStamp(0.4388007260026734);
    msg.setSource(7007U);
    msg.setSourceEntity(122U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(228U);
    msg.value = 0.23374900095398987;

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
    msg.setTimeStamp(0.49597797485586226);
    msg.setSource(11516U);
    msg.setSourceEntity(206U);
    msg.setDestination(20362U);
    msg.setDestinationEntity(150U);
    msg.value = 0.3336241408890175;

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
    msg.setTimeStamp(0.6660392001127138);
    msg.setSource(19677U);
    msg.setSourceEntity(47U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(71U);
    msg.value = 0.05962690314715924;

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
    msg.setTimeStamp(0.6384778739482408);
    msg.setSource(49659U);
    msg.setSourceEntity(35U);
    msg.setDestination(24954U);
    msg.setDestinationEntity(197U);
    msg.value = 0.3796216712121946;

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
    msg.setTimeStamp(9.227017229940238e-06);
    msg.setSource(31085U);
    msg.setSourceEntity(228U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7373690163572907;

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
    msg.setTimeStamp(0.9399798122415726);
    msg.setSource(31703U);
    msg.setSourceEntity(243U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(95U);
    msg.value = 0.20532769501341908;

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
    msg.setTimeStamp(0.7688689964077502);
    msg.setSource(20157U);
    msg.setSourceEntity(122U);
    msg.setDestination(16534U);
    msg.setDestinationEntity(230U);
    msg.value = 0.03338260228899148;

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
    msg.setTimeStamp(0.2034344738475049);
    msg.setSource(29875U);
    msg.setSourceEntity(110U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6951326049686757;

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
    msg.setTimeStamp(0.727084015528689);
    msg.setSource(46041U);
    msg.setSourceEntity(14U);
    msg.setDestination(31689U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8967994009503589;

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
    msg.setTimeStamp(0.24922426426936273);
    msg.setSource(64795U);
    msg.setSourceEntity(221U);
    msg.setDestination(28186U);
    msg.setDestinationEntity(66U);
    msg.value = 0.3885790867637088;

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
    msg.setTimeStamp(0.06365178084343415);
    msg.setSource(44435U);
    msg.setSourceEntity(176U);
    msg.setDestination(2657U);
    msg.setDestinationEntity(77U);
    msg.value = 0.7379749891960808;

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
    msg.setTimeStamp(0.011641963792955567);
    msg.setSource(54285U);
    msg.setSourceEntity(160U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9655174794078395;

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
    msg.setTimeStamp(0.38644388930792306);
    msg.setSource(33739U);
    msg.setSourceEntity(96U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(198U);
    msg.value = 0.32327780747610124;

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
    msg.setTimeStamp(0.3942246221275142);
    msg.setSource(57434U);
    msg.setSourceEntity(155U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9227863064837929;

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
    msg.setTimeStamp(0.9636578607154581);
    msg.setSource(10592U);
    msg.setSourceEntity(146U);
    msg.setDestination(54058U);
    msg.setDestinationEntity(28U);
    msg.value = 0.3148429504400182;

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
    msg.setTimeStamp(0.4904425523319136);
    msg.setSource(4664U);
    msg.setSourceEntity(124U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8654781131762423;

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
    msg.setTimeStamp(0.17635815921439424);
    msg.setSource(48600U);
    msg.setSourceEntity(211U);
    msg.setDestination(32977U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.39946063967798806;
    msg.speed = 0.5505821093113136;
    msg.turbulence = 0.7621459842299245;

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
    msg.setTimeStamp(0.37575591772330486);
    msg.setSource(22172U);
    msg.setSourceEntity(233U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.47538126157346794;
    msg.speed = 0.3657494933494634;
    msg.turbulence = 0.3630630425884478;

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
    msg.setTimeStamp(0.009079724856153604);
    msg.setSource(63391U);
    msg.setSourceEntity(164U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.32307285166988464;
    msg.speed = 0.5746095863938575;
    msg.turbulence = 0.6819447656686224;

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
    msg.setTimeStamp(0.022859786198395127);
    msg.setSource(60392U);
    msg.setSourceEntity(119U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(99U);
    msg.value = 0.06164234524862888;

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
    msg.setTimeStamp(0.13182980210262596);
    msg.setSource(47989U);
    msg.setSourceEntity(34U);
    msg.setDestination(53636U);
    msg.setDestinationEntity(150U);
    msg.value = 0.08411368650151418;

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
    msg.setTimeStamp(0.7284767428654149);
    msg.setSource(7071U);
    msg.setSourceEntity(139U);
    msg.setDestination(10080U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8255102313558406;

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
    msg.setTimeStamp(0.5613971590298732);
    msg.setSource(35979U);
    msg.setSourceEntity(246U);
    msg.setDestination(54340U);
    msg.setDestinationEntity(35U);
    msg.value.assign("CZGNZMAJBSXDGBTEFMKXKVPLJZFRGUJOV");

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
    msg.setTimeStamp(0.9126092535868084);
    msg.setSource(8743U);
    msg.setSourceEntity(29U);
    msg.setDestination(50805U);
    msg.setDestinationEntity(248U);
    msg.value.assign("WVYZAIGCNRFMIRVLRXFTQRITQMUHTKJORSYWDVKWKH");

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
    msg.setTimeStamp(0.8012599681763914);
    msg.setSource(16582U);
    msg.setSourceEntity(185U);
    msg.setDestination(62120U);
    msg.setDestinationEntity(107U);
    msg.value.assign("SCVGKELYSPAJHAQSZKIYYYZCHJNTCMRGHEPTXTSOVQHLVURJHAAIYIGOTFHUFQLLJGFUBRIADKDQLNYAZJKGZZUENJXONRVZGEPIPZWEVOTIKWJBCEPFBRGYIMYPDFDMKSNGNAAHGNDEWVDIBKHLCDORCVLNTBSNUKMRBOKBLUGAWSRMBZDFUBCSQPF");

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
    msg.setTimeStamp(0.28258098634916484);
    msg.setSource(51650U);
    msg.setSourceEntity(96U);
    msg.setDestination(6155U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {81, 77, 84, 0, 89, 108, 92, 18, 81, -11, -106, -101, 28, -23, -46, 47, 57, -23, 106, -122, -47, 65, 47, 109, -19, 26, -9, -111, 51, -70, -127, -117, -88, -70, -101, -15, -50, 53, 30, 65, -61, 45, 98, -26, 3, -51, 7, -124, -31, 90, -59, 5, -87, -111, -76, -17, 39, 124, 114};
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
    msg.setTimeStamp(0.8264336777236041);
    msg.setSource(35471U);
    msg.setSourceEntity(141U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(99U);
    const char tmp_msg_0[] = {-27, 90, -116, 25, 123, 98, 105, -11, 56, -32, 106, 106, 100, 90, -116, -101, 84, 36, 22, -8, 110, 96, 125, 110, -97, -123, -24, -79, -73, 87, 49, -7, 124, -111, -109, -21, -56, -59, 24, 126, 50, -58, -39, 78, 36, -74, 126, -112, 94, 109, 115, -112, -25, -108, 62, 4, -101, 70, -17, 43, 105, 83, -125, 103, 89, 67, -123, 45, -71, 95, 41, -49, -8, 125};
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
    msg.setTimeStamp(0.06994856465541743);
    msg.setSource(45032U);
    msg.setSourceEntity(141U);
    msg.setDestination(63429U);
    msg.setDestinationEntity(2U);
    const char tmp_msg_0[] = {1, 43, -7, 104, -21, 78, -101, 48, 80, 34, 120, -52, 7, 63, -98, 107, 60, -66, 112, -20, -60, 119, 117, 3, 32, 79, 12, 105, 55, -12, -42, 2, 124, -67, 82, -70, 24, 66, -94, -12, -96, 0, -76, 124, 47, -118, 90, 8, -87, -20, 45, 120, 99, 100, 52, -18, -2, 45, 112, 32, 89, -95, 110, 16, -15, -69, -5, 50, -65, 117, 72, 100, 96};
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
    msg.setTimeStamp(0.23008527711030913);
    msg.setSource(5907U);
    msg.setSourceEntity(41U);
    msg.setDestination(4272U);
    msg.setDestinationEntity(139U);
    msg.type = 219U;
    msg.frequency = 1462567908U;
    msg.min_range = 8656U;
    msg.max_range = 47893U;
    msg.bits_per_point = 254U;
    msg.scale_factor = 0.9458512484710939;
    const char tmp_msg_0[] = {-111, 64, -75, 67, -42, -81, -123, -20, 107, 66, -66, -60, 8, -99, 52, 89, 35, -40, -119, -93, -64, 123, 22, -117, 26, -114, 27, -46, -113, -11, 17, -116, 13, 106, -86, -69, 46, -29, 77, -38, -14, -38, -109, 53, 16, 47, -53, 28, 96, -16, -97, 45, -84, -34, 53, 4, 89, -72, 45, -51, -95, 80};
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
    msg.setTimeStamp(0.10159964108126607);
    msg.setSource(60036U);
    msg.setSourceEntity(43U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(66U);
    msg.type = 121U;
    msg.frequency = 3471269916U;
    msg.min_range = 60845U;
    msg.max_range = 28190U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.22519346022464526;
    const char tmp_msg_0[] = {-67, -88, -81, 23, 38, 33, 16, -68, 24, -97, -43, -84, 83, -126, -99, -80, -112, 55, -39, -115, -83, -73, 61, -2, -44, -87, 77, 115, -103, 29, 62, -11, -111, -24, -98, 62, 98, -128, -96, 122, -123, -43, -108, -11, 81, -34, -32, 88, -34, -123, -128, 28, 9, 71, 80, 12, -39, 47, -34, 72, 24, -15, -94, -47, -1, -6, -128, 37, -102, -85, 5, 99, 54, 53, -103, -23, -75, -101, 4, -61, -35, -45, -25, -16, 90, 91};
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
    msg.setTimeStamp(0.5414082089064831);
    msg.setSource(47296U);
    msg.setSourceEntity(232U);
    msg.setDestination(33505U);
    msg.setDestinationEntity(216U);
    msg.type = 141U;
    msg.frequency = 765181752U;
    msg.min_range = 12100U;
    msg.max_range = 31599U;
    msg.bits_per_point = 198U;
    msg.scale_factor = 0.7177302014934395;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5108844408179206;
    tmp_msg_0.beam_height = 0.21368277536252356;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {100, -115, 15, 83, -8, -113, 94, -2, -13, -67, 67, 40, 119, 35, 4, -93, -93, 15, -11, 13, 25, 16, 28, -127, -37, -80, 34, -13, 117, 46, -63, -58, 46, 16, 83, -91, -119, -4, 15, 58, 55, 95, 88, 46, 27, 118, 23, 38, -37, 51, 90, -36, -24, 7, 69, 77, -125, 100, 57, -117, 32, -102, -109, 49, 109, -13, -52, 66, 126, -1, 96, 35, 31, 125, 96, 73, -91, -30, -89, 5, -3, -106, 70, -50, -5, -1, -24, -92, 3, 89, 31, -33, 117, 24, -76, -104, 121, 113, 100, 16, 41, -32, 24, -43, 118, 116, 96, -55, 86, 20, 30, 9, 41, 77, 93, 7, -76, -3, -83, -3, -15, -42};
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
    msg.setTimeStamp(0.23994663059285126);
    msg.setSource(21585U);
    msg.setSourceEntity(223U);
    msg.setDestination(25383U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.8790251130394336);
    msg.setSource(9852U);
    msg.setSourceEntity(227U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.6511005495885984);
    msg.setSource(20973U);
    msg.setSourceEntity(199U);
    msg.setDestination(25895U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.6799709948638374);
    msg.setSource(15599U);
    msg.setSourceEntity(132U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(147U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.23141318608477812);
    msg.setSource(4491U);
    msg.setSourceEntity(15U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(77U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.8604478332334268);
    msg.setSource(32041U);
    msg.setSourceEntity(224U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(6U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.1035347563833604);
    msg.setSource(19756U);
    msg.setSourceEntity(83U);
    msg.setDestination(21915U);
    msg.setDestinationEntity(5U);
    msg.value = 0.2712762559702062;
    msg.confidence = 0.10298920362148811;
    msg.opmodes.assign("YWJWKUSOXSIWPYETUMTSPPDLWCUIJKHNOPOZGBMDAEHADQFVTJ");

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
    msg.setTimeStamp(0.9895264796007812);
    msg.setSource(60776U);
    msg.setSourceEntity(174U);
    msg.setDestination(54980U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9927429700166553;
    msg.confidence = 0.7056293702812795;
    msg.opmodes.assign("LFHOOGBAERGBMOZAZVGRWSQQPBOISACDHXDQPIUWZVAJYACZYOGMPVT");

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
    msg.setTimeStamp(0.20518021531663866);
    msg.setSource(30132U);
    msg.setSourceEntity(64U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5928220328337016;
    msg.confidence = 0.42307922535869713;
    msg.opmodes.assign("NJKJFYDIHDMNTLFUDYQVQBBZOYHMHNUOXDPHVALZLQGVJHITJGOFZSNWORRMZSRRAGRLBPHPVUGLBCSIMAAOVMXXEJYY");

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
    msg.setTimeStamp(0.7122694366095556);
    msg.setSource(9791U);
    msg.setSourceEntity(253U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(135U);
    msg.itow = 2465862009U;
    msg.lat = 0.6561118688199317;
    msg.lon = 0.728113404277111;
    msg.height_ell = 0.6899241353327165;
    msg.height_sea = 0.2831217794985552;
    msg.hacc = 0.5806758117486681;
    msg.vacc = 0.8697394783383487;
    msg.vel_n = 0.5498292207165184;
    msg.vel_e = 0.19543808102405313;
    msg.vel_d = 0.3731430194965123;
    msg.speed = 0.3441887767812073;
    msg.gspeed = 0.5936102459546578;
    msg.heading = 0.7170231718762589;
    msg.sacc = 0.9172628125225065;
    msg.cacc = 0.9965573661970284;

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
    msg.setTimeStamp(0.741271352653101);
    msg.setSource(3538U);
    msg.setSourceEntity(121U);
    msg.setDestination(13292U);
    msg.setDestinationEntity(129U);
    msg.itow = 3296167749U;
    msg.lat = 0.7661300937515149;
    msg.lon = 0.07676520134013243;
    msg.height_ell = 0.28319625070938215;
    msg.height_sea = 0.402333449159209;
    msg.hacc = 0.525736012344945;
    msg.vacc = 0.7090649203423159;
    msg.vel_n = 0.25672832446631055;
    msg.vel_e = 0.520026219743412;
    msg.vel_d = 0.12672767310348798;
    msg.speed = 0.30459610593283926;
    msg.gspeed = 0.44512194010570505;
    msg.heading = 0.7944424317488324;
    msg.sacc = 0.9173321178424815;
    msg.cacc = 0.9829746947942758;

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
    msg.setTimeStamp(0.5279514429225739);
    msg.setSource(48524U);
    msg.setSourceEntity(84U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(71U);
    msg.itow = 3233150101U;
    msg.lat = 0.3646744402337082;
    msg.lon = 0.6865644114878724;
    msg.height_ell = 0.1818791831708606;
    msg.height_sea = 0.11426927412472054;
    msg.hacc = 0.5151422068654373;
    msg.vacc = 0.16133353797745764;
    msg.vel_n = 0.09862250637551384;
    msg.vel_e = 0.3458746018584212;
    msg.vel_d = 0.641404482207171;
    msg.speed = 0.8985845917404129;
    msg.gspeed = 0.3618978965752365;
    msg.heading = 0.28080199008399687;
    msg.sacc = 0.48336509826864293;
    msg.cacc = 0.4468021310360899;

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
    msg.setTimeStamp(0.41559183715969283);
    msg.setSource(37556U);
    msg.setSourceEntity(76U);
    msg.setDestination(6622U);
    msg.setDestinationEntity(90U);
    msg.id = 210U;
    msg.value = 0.3736566879694436;

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
    msg.setTimeStamp(0.4409190727875538);
    msg.setSource(60681U);
    msg.setSourceEntity(241U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(13U);
    msg.id = 19U;
    msg.value = 0.16703056609695655;

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
    msg.setTimeStamp(0.2092185620672189);
    msg.setSource(61410U);
    msg.setSourceEntity(157U);
    msg.setDestination(55333U);
    msg.setDestinationEntity(54U);
    msg.id = 16U;
    msg.value = 0.7568734739788485;

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
    msg.setTimeStamp(0.7432252176173518);
    msg.setSource(10706U);
    msg.setSourceEntity(114U);
    msg.setDestination(31086U);
    msg.setDestinationEntity(18U);
    msg.x = 0.2133181844162878;
    msg.y = 0.6954421045417543;
    msg.z = 0.5484861131591984;
    msg.phi = 0.2894402671329427;
    msg.theta = 0.34337797679635906;
    msg.psi = 0.04887105123336766;

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
    msg.setTimeStamp(0.016348332203119043);
    msg.setSource(3479U);
    msg.setSourceEntity(121U);
    msg.setDestination(20613U);
    msg.setDestinationEntity(74U);
    msg.x = 0.6939057076597969;
    msg.y = 0.08890708234715372;
    msg.z = 0.9410523254628157;
    msg.phi = 0.8851469283755365;
    msg.theta = 0.3040816415242086;
    msg.psi = 0.02387956822697468;

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
    msg.setTimeStamp(0.9729124175410211);
    msg.setSource(36840U);
    msg.setSourceEntity(243U);
    msg.setDestination(23659U);
    msg.setDestinationEntity(134U);
    msg.x = 0.47381341062727955;
    msg.y = 0.9443378873787831;
    msg.z = 0.2768547323611318;
    msg.phi = 0.6433530329615275;
    msg.theta = 0.6204778136833194;
    msg.psi = 0.7400667904890764;

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
    msg.setTimeStamp(0.8564602437365932);
    msg.setSource(39526U);
    msg.setSourceEntity(196U);
    msg.setDestination(58862U);
    msg.setDestinationEntity(156U);
    msg.beam_width = 0.7606045938545273;
    msg.beam_height = 0.782355374180816;

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
    msg.setTimeStamp(0.8835776623275491);
    msg.setSource(3145U);
    msg.setSourceEntity(78U);
    msg.setDestination(28466U);
    msg.setDestinationEntity(7U);
    msg.beam_width = 0.46711417108930897;
    msg.beam_height = 0.581736403564287;

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
    msg.setTimeStamp(0.2724597907920956);
    msg.setSource(47794U);
    msg.setSourceEntity(168U);
    msg.setDestination(3404U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.7917028248384393;
    msg.beam_height = 0.3523325075837602;

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
    msg.setTimeStamp(0.7084675131052234);
    msg.setSource(33192U);
    msg.setSourceEntity(77U);
    msg.setDestination(59723U);
    msg.setDestinationEntity(158U);
    msg.sane = 198U;

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
    msg.setTimeStamp(0.34113559193120446);
    msg.setSource(25490U);
    msg.setSourceEntity(179U);
    msg.setDestination(44531U);
    msg.setDestinationEntity(235U);
    msg.sane = 81U;

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
    msg.setTimeStamp(0.22222911877263163);
    msg.setSource(59121U);
    msg.setSourceEntity(27U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(127U);
    msg.sane = 54U;

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
    msg.setTimeStamp(0.8329050632134677);
    msg.setSource(750U);
    msg.setSourceEntity(66U);
    msg.setDestination(39460U);
    msg.setDestinationEntity(126U);
    msg.id = 107U;
    msg.zoom = 98U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.6026895665230564);
    msg.setSource(18831U);
    msg.setSourceEntity(229U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(5U);
    msg.id = 79U;
    msg.zoom = 133U;
    msg.action = 252U;

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
    msg.setTimeStamp(0.2709136369372753);
    msg.setSource(59413U);
    msg.setSourceEntity(221U);
    msg.setDestination(56992U);
    msg.setDestinationEntity(28U);
    msg.id = 55U;
    msg.zoom = 140U;
    msg.action = 106U;

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
    msg.setTimeStamp(0.741378265917736);
    msg.setSource(62913U);
    msg.setSourceEntity(138U);
    msg.setDestination(52210U);
    msg.setDestinationEntity(52U);
    msg.id = 31U;
    msg.value = 0.04581941576778181;

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
    msg.setTimeStamp(0.21498087369850594);
    msg.setSource(63295U);
    msg.setSourceEntity(140U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(63U);
    msg.id = 109U;
    msg.value = 0.032606424591529404;

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
    msg.setTimeStamp(0.7347500215512636);
    msg.setSource(48319U);
    msg.setSourceEntity(138U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(47U);
    msg.id = 100U;
    msg.value = 0.6678041748881887;

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
    msg.setTimeStamp(0.040568533746704216);
    msg.setSource(62258U);
    msg.setSourceEntity(169U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(116U);
    msg.id = 137U;
    msg.value = 0.13105998156209808;

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
    msg.setTimeStamp(0.45263442968178036);
    msg.setSource(27503U);
    msg.setSourceEntity(105U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(171U);
    msg.id = 94U;
    msg.value = 0.09086549685523737;

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
    msg.setTimeStamp(0.9678263583038264);
    msg.setSource(23301U);
    msg.setSourceEntity(17U);
    msg.setDestination(34854U);
    msg.setDestinationEntity(78U);
    msg.id = 155U;
    msg.value = 0.5079398911944734;

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
    msg.setTimeStamp(0.003473503098090691);
    msg.setSource(53217U);
    msg.setSourceEntity(249U);
    msg.setDestination(33143U);
    msg.setDestinationEntity(203U);
    msg.id = 17U;
    msg.angle = 0.8957554834470607;

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
    msg.setTimeStamp(0.11939081158415299);
    msg.setSource(39540U);
    msg.setSourceEntity(127U);
    msg.setDestination(30978U);
    msg.setDestinationEntity(253U);
    msg.id = 86U;
    msg.angle = 0.4664224751118137;

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
    msg.setTimeStamp(0.4232413014422173);
    msg.setSource(44527U);
    msg.setSourceEntity(237U);
    msg.setDestination(4967U);
    msg.setDestinationEntity(13U);
    msg.id = 95U;
    msg.angle = 0.5412674988157428;

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
    msg.setTimeStamp(0.6432120304844391);
    msg.setSource(65109U);
    msg.setSourceEntity(183U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(245U);
    msg.op = 176U;
    msg.actions.assign("KDWCSLVOHCZNAGOEOEADHUXMGZCWZGPJYAZYFCRPXIFGNYLOUKONSZYISBHDIPLDEYJITRRESSKEKHPYFMMXFIYOMBLRXVJBQQAPRLNBDUXPKBCCIMNYLQWJRSVEJOOWIFBVUZFJXQKMSAETRNENFLMAWLHXIQJXAPJUNZAOGGPRKYDQEVUASCMTOHWHTSHMGWMSCPVEWYG");

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
    msg.setTimeStamp(0.5228199230116669);
    msg.setSource(29858U);
    msg.setSourceEntity(44U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(143U);
    msg.op = 233U;
    msg.actions.assign("VKISGLGNYTHPBBBZJRGPRQJOWMQCRFBCZGGJIPHEENWBISXPAWHAMINUYRWXTDOPJAFJCNAVTXRNMXYEPWFRPCLTMFSRDUYJEXFFSIDCEBSFNBGBKOUAWQRELIXOXUVSQGAOTYZIOLLUCLQQSDCEQIEMQVOVKOZAKK");

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
    msg.setTimeStamp(0.308610426522994);
    msg.setSource(43055U);
    msg.setSourceEntity(159U);
    msg.setDestination(50824U);
    msg.setDestinationEntity(197U);
    msg.op = 17U;
    msg.actions.assign("ZFWDANTFNTKGBPDHTEAMLZPCVUBUMFLKXOCEPXLGDUPHLXVWTJSKJAOFYLRPSCGABVUQCKQRXNDOISFZQKAXFTCJWDJZWIHGLLIWYODJOLBQSXVIRDCRUOOROQINAUMTEQIRFZEENYCPSKXTYSVSRTEWARBYCFHHEELQBHMENQMTGJBHWWKNYOJCFBKNAFWVGWI");

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
    msg.setTimeStamp(0.3809271384884816);
    msg.setSource(8268U);
    msg.setSourceEntity(46U);
    msg.setDestination(30028U);
    msg.setDestinationEntity(153U);
    msg.actions.assign("UNKLSHLHZLAWLMOXGIWRBGXIMDYGXPYPKHMFFEQFZPJUIOTOFGVPCZVQEXBQXCTYQJCRUUDVUBJAHEBDSCXYDZREFAPVIJUHDQPDGMTJKHRAYOWSRWBCVNYWSZFIIITZNZRPZHLJDFDEAELCI");

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
    msg.setTimeStamp(0.5028602593249037);
    msg.setSource(38047U);
    msg.setSourceEntity(49U);
    msg.setDestination(12093U);
    msg.setDestinationEntity(29U);
    msg.actions.assign("QIKJGTIYQGYMUSGOUYCNBZLRCYPPMUPDWVQOYTQECQIBLTJMJXGEKACMKZMNXNVHDDQFRCBJUXFFHJHBTPMUBISVUGUUIIOAZRORHPAIXWGDNWVXKYBSPOLDGADASKZYUEULXFECNETLNDWNXFWYLOBAVXMSTTOXIKESFASVHPHBNZIJFVRJZGTDYTWCDTNGCEMZZARRKFXSICKEZSDCRGZSVWVOQMJFQP");

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
    msg.setTimeStamp(0.010002073632808695);
    msg.setSource(17973U);
    msg.setSourceEntity(188U);
    msg.setDestination(37926U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("IUEGHHXGBOSLOFCPXKKOQJZYTDTUGIIYPKNXNKVTAWXXSUOEIGFIYEQVFPNBSDUDJGGNCEZZYHFVDJZPBDCRJMHTYRRDGZLTPOEQWVVOKTJXHMNYDJGLTJBGSJRBARLFQSHWVZJQFWKQOAKICLZKDCONPNWKMALEVRSNLX");

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
    msg.setTimeStamp(0.014320006927356244);
    msg.setSource(18532U);
    msg.setSourceEntity(248U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(184U);
    msg.button = 102U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.33512005979312054);
    msg.setSource(51626U);
    msg.setSourceEntity(190U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(106U);
    msg.button = 253U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.5403121873293172);
    msg.setSource(41940U);
    msg.setSourceEntity(113U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(30U);
    msg.button = 128U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.4965580131091222);
    msg.setSource(7747U);
    msg.setSourceEntity(123U);
    msg.setDestination(19802U);
    msg.setDestinationEntity(227U);
    msg.op = 194U;
    msg.text.assign("VIXXDXTUAGYXIMCFGMNLWYKXNEBOTMKCYYAJBQONJJPQLGKDVJNQCHTDVCBWZBCSURZLAZOMONRAUAAYUVMNRSMJPZPIPDBDBNPDRCSHFG");

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
    msg.setTimeStamp(0.05425712893660117);
    msg.setSource(49242U);
    msg.setSourceEntity(50U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(203U);
    msg.op = 221U;
    msg.text.assign("GPSRUILLNZZJGEPWWKJDBF");

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
    msg.setTimeStamp(0.27934154309816384);
    msg.setSource(63846U);
    msg.setSourceEntity(249U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(37U);
    msg.op = 48U;
    msg.text.assign("ELXMNBYHXJOMLTO");

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
    msg.setTimeStamp(0.012496092659869729);
    msg.setSource(35310U);
    msg.setSourceEntity(165U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(139U);
    msg.op = 32U;
    msg.time_remain = 0.206463454506554;
    msg.sched_time = 0.9198147650634528;

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
    msg.setTimeStamp(0.7391667988951974);
    msg.setSource(20110U);
    msg.setSourceEntity(116U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(96U);
    msg.op = 233U;
    msg.time_remain = 0.5494469869275748;
    msg.sched_time = 0.5209651103241515;

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
    msg.setTimeStamp(0.6791713839265756);
    msg.setSource(27485U);
    msg.setSourceEntity(59U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(242U);
    msg.op = 164U;
    msg.time_remain = 0.13831649025789772;
    msg.sched_time = 0.5945208622779987;

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
    msg.setTimeStamp(0.6312574008812601);
    msg.setSource(20666U);
    msg.setSourceEntity(247U);
    msg.setDestination(41869U);
    msg.setDestinationEntity(34U);
    msg.name.assign("NVGRHHWTMUAGJOLTUSHMYATYZTHHCFUPZDZHBTLWUVATTGRCWKRYVZNLURBYZRNAMFTHHOBMVEFZBBXQXLQUPFIGVCZEMFE");
    msg.op = 80U;
    msg.sched_time = 0.6473355741598346;

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
    msg.setTimeStamp(0.6308450264297493);
    msg.setSource(50898U);
    msg.setSourceEntity(234U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(132U);
    msg.name.assign("NGFRAMCSNDHXWIVAXRLUANKHGRANYHJJSZDUULXFFPYEYZBZBZSWPTVENJLCMMJTEYGOWZMLTHTI");
    msg.op = 142U;
    msg.sched_time = 0.5921138437305986;

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
    msg.setTimeStamp(0.6576020050784459);
    msg.setSource(64195U);
    msg.setSourceEntity(54U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(231U);
    msg.name.assign("CUCASMMSRFWMKBLVFYRBNDGZEBITFMMYGKKQHRDXZEQDUANAUDPSZXFVIAZXGXGIYNBYEEKNBRZTHCDUIQOVNQFOJHSIOGKOKIOULENSFUAWBQVWMPTVJXFWXZJYLYDSMXCCWVJTWXJCCWGHDJVKMHNBSKTNARAJVPOJOZCGBLERUFGJLRQSZSYFDAZPRHKCRYI");
    msg.op = 172U;
    msg.sched_time = 0.1931881564179262;

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
    msg.setTimeStamp(0.10899543679245383);
    msg.setSource(32162U);
    msg.setSourceEntity(110U);
    msg.setDestination(7589U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.2371444592470675);
    msg.setSource(29350U);
    msg.setSourceEntity(231U);
    msg.setDestination(38935U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.6079783858572778);
    msg.setSource(30269U);
    msg.setSourceEntity(121U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.8200289635112047);
    msg.setSource(53427U);
    msg.setSourceEntity(230U);
    msg.setDestination(58590U);
    msg.setDestinationEntity(234U);
    msg.name.assign("KSVXCUIUWTTDPYZTDTUPZKVDITLJMEFEHIJFZFIIFXWEAWNXTHYOKGGDYJUJQOWZRRPMJYGCQDWKVCDNHOMRIVSVVFPUQANCAFDWAZXDBXIQSNOHPIRGUCZMKLINV");
    msg.state = 65U;

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
    msg.setTimeStamp(0.30600705431777586);
    msg.setSource(42336U);
    msg.setSourceEntity(116U);
    msg.setDestination(28539U);
    msg.setDestinationEntity(241U);
    msg.name.assign("BAUTAEHOKVKFTLXBAPKMLEMAIYCJGZFRWYOKNZXOVNWGGDMNJMYFBKXYFXIDHYISJGJPPZWIELXCSTJADTRIBOYMCZCQWOKPLXLCHCHSMCJUH");
    msg.state = 251U;

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
    msg.setTimeStamp(0.5052381750649204);
    msg.setSource(16552U);
    msg.setSourceEntity(199U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(39U);
    msg.name.assign("MVDUVXSHIGTNCKWXPDXZDXFGHEKZFZYTHTOUVAQYIYYKBRBJOELQHOVSSNOGCRHLTWXTHHEJSQDLREKKXPQPUXGXWJCYUWBAOPJRMQBUPZLFPHZZDKAQOEAJETDIFKRJHPYIDLBAURFVSPBXMIHLJVUCSMGEFZUUVECMBECKQNFWRTSBCAAGVVWINNZWLCGZWGDJKZMDATCYTODGFPBG");
    msg.state = 111U;

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
    msg.setTimeStamp(0.9215310863315316);
    msg.setSource(49096U);
    msg.setSourceEntity(160U);
    msg.setDestination(36207U);
    msg.setDestinationEntity(243U);
    msg.name.assign("PKCIVUHFUPKXBDFNQLGFBBZFNCADAWMISWYYHXUZRMJHQEKSDAUUGZDNMQDHZHJEEIPFQIBHGNLZQSQLPRUOVRGCHMA");
    msg.value = 159U;

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
    msg.setTimeStamp(0.5592190681715492);
    msg.setSource(41293U);
    msg.setSourceEntity(200U);
    msg.setDestination(2542U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YZAPCTKKBXAQIUSYEIGVCPBMHVLKDQPNOLYGSMPFUDRRKRLZVABEDBOGIZEMWVVCRBGEKNQIU");
    msg.value = 163U;

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
    msg.setTimeStamp(0.2846745857904197);
    msg.setSource(2593U);
    msg.setSourceEntity(158U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(27U);
    msg.name.assign("BMVALOISGNTPITRXWQCHYVHYNDLNTIJPOSCKVGQNDEQWWGNUDIQAJMIFBJKBECLFJTTMZHQAYHQYOAWWIUEXLKQBIFDLCGX");
    msg.value = 76U;

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
    msg.setTimeStamp(0.6525796340002218);
    msg.setSource(31962U);
    msg.setSourceEntity(124U);
    msg.setDestination(11721U);
    msg.setDestinationEntity(78U);
    msg.name.assign("ZPLZWLAMBBXJGPCGCLQCUNFZXBNVTVQGERMVYELWYKHSRVPVGHSHTIXQDEWZGOKUNJFNTYHLARYXRBPTUSADKSTIXXHZSUGOIDUMIHJTEHBNDUYGQHONRORJVNIGZMNKFFMVLBCKJXDVMBYFWTCCMODUWEEODGFOSZUOIWRWCSPQEIQWMPJSNMAHHJPTONUMKYPLDESVFII");

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
    msg.setTimeStamp(0.3482888404201201);
    msg.setSource(31972U);
    msg.setSourceEntity(54U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(46U);
    msg.name.assign("TGTDASDBXRUAFHDETFOYGBCCRLKXLYZMJYHQUHDZQMFNEXRJUWLVWICSGHFWJTWWEYXECOGDVPCZLZXXVJOQIGPRCAMLBIELQ");

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
    msg.setTimeStamp(0.7746633009159823);
    msg.setSource(25619U);
    msg.setSourceEntity(177U);
    msg.setDestination(19291U);
    msg.setDestinationEntity(118U);
    msg.name.assign("CDTBQCSVJLDCFIQWSWRRSUCFH");

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
    msg.setTimeStamp(0.1576455157360107);
    msg.setSource(62233U);
    msg.setSourceEntity(253U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(157U);
    msg.name.assign("NJBQTSSCRBNQYWSTVQXPCPPYYCHKOBNFNCGHPVEFWHSMUOYWUMQTUMVEHIHSSLAEKYKZTIB");
    msg.value = 0U;

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
    msg.setTimeStamp(0.1135065652496059);
    msg.setSource(62019U);
    msg.setSourceEntity(55U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(49U);
    msg.name.assign("NMGHJVHTVOYCZTOLBOFQVBFLTGXKIXHOTVONHRKPSQUAYLAUKCYTHAEJISKGYCGSPPARLKPBHJKUMFJBRHYMMEZSGJSUESPXL");
    msg.value = 82U;

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
    msg.setTimeStamp(0.3416897431487357);
    msg.setSource(56628U);
    msg.setSourceEntity(6U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(157U);
    msg.name.assign("JXFWUOHSEQOKRSUXGDEMGNPLRHGJZWHFGWNLKZLDJKBRPGHCTMNHYRAEAIFTFXCLFYCBUWYAAQCLXUEUYDAKSMJNPTAMXYRVIEMIZFHJKHKPNTIJKBVYSQJONGWIPVJFQLUTE");
    msg.value = 191U;

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
    msg.setTimeStamp(0.6980051021199267);
    msg.setSource(4741U);
    msg.setSourceEntity(126U);
    msg.setDestination(32544U);
    msg.setDestinationEntity(191U);
    msg.id = 116U;
    msg.period = 1202666427U;
    msg.duty_cycle = 2284589357U;

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
    msg.setTimeStamp(0.5135754575537652);
    msg.setSource(34320U);
    msg.setSourceEntity(130U);
    msg.setDestination(59288U);
    msg.setDestinationEntity(95U);
    msg.id = 88U;
    msg.period = 2659149102U;
    msg.duty_cycle = 316920923U;

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
    msg.setTimeStamp(0.6670986434868966);
    msg.setSource(26467U);
    msg.setSourceEntity(161U);
    msg.setDestination(4407U);
    msg.setDestinationEntity(247U);
    msg.id = 243U;
    msg.period = 2097773129U;
    msg.duty_cycle = 855106655U;

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
    msg.setTimeStamp(0.04655482881661965);
    msg.setSource(4624U);
    msg.setSourceEntity(254U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(124U);
    msg.id = 128U;
    msg.period = 2101107524U;
    msg.duty_cycle = 2288448872U;

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
    msg.setTimeStamp(0.19875810118593884);
    msg.setSource(55099U);
    msg.setSourceEntity(252U);
    msg.setDestination(44674U);
    msg.setDestinationEntity(14U);
    msg.id = 18U;
    msg.period = 2438099417U;
    msg.duty_cycle = 1423125032U;

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
    msg.setTimeStamp(0.36543999665084925);
    msg.setSource(5413U);
    msg.setSourceEntity(249U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(29U);
    msg.id = 180U;
    msg.period = 3456735700U;
    msg.duty_cycle = 3463424696U;

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
    msg.setTimeStamp(0.8240547529245895);
    msg.setSource(62721U);
    msg.setSourceEntity(60U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.0759265011897251;
    msg.lon = 0.8967266905710873;
    msg.height = 0.3675285147236943;
    msg.x = 0.2550453661574219;
    msg.y = 0.23597385758490275;
    msg.z = 0.0691306148036599;
    msg.phi = 0.27539527037943656;
    msg.theta = 0.6898804584256083;
    msg.psi = 0.7218379082472465;
    msg.u = 0.6464551415265037;
    msg.v = 0.6295484690312589;
    msg.w = 0.339873279026913;
    msg.vx = 0.8908938757673489;
    msg.vy = 0.5317713261593708;
    msg.vz = 0.4557564655492611;
    msg.p = 0.7319833930992353;
    msg.q = 0.24100912158914212;
    msg.r = 0.9832389408343294;
    msg.depth = 0.819414647968013;
    msg.alt = 0.5613237732031862;

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
    msg.setTimeStamp(0.8963121536199485);
    msg.setSource(41868U);
    msg.setSourceEntity(187U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.08406452535104347;
    msg.lon = 0.7013875298678859;
    msg.height = 0.10574297359986917;
    msg.x = 0.8060416958480339;
    msg.y = 0.45316725137859837;
    msg.z = 0.08085466843818834;
    msg.phi = 0.9820274556687074;
    msg.theta = 0.23921072769338714;
    msg.psi = 0.830472275038209;
    msg.u = 0.7519964062583192;
    msg.v = 0.7781880430516958;
    msg.w = 0.8228317993962149;
    msg.vx = 0.3738910517787244;
    msg.vy = 0.02602272935962735;
    msg.vz = 0.7679893464069218;
    msg.p = 0.8764435771407173;
    msg.q = 0.8995893921028285;
    msg.r = 0.6126800705846881;
    msg.depth = 0.45253370595054354;
    msg.alt = 0.01717898720944455;

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
    msg.setTimeStamp(0.27933880358660435);
    msg.setSource(44161U);
    msg.setSourceEntity(13U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.10626813749936981;
    msg.lon = 0.2199150504345725;
    msg.height = 0.42020792663161577;
    msg.x = 0.6516610901922208;
    msg.y = 0.4190190476455169;
    msg.z = 0.2979264992067153;
    msg.phi = 0.20501564304185604;
    msg.theta = 0.5992362744834426;
    msg.psi = 0.5504601901436755;
    msg.u = 0.0960913837640538;
    msg.v = 0.29515535268089443;
    msg.w = 0.9168551796577644;
    msg.vx = 0.24490662189906542;
    msg.vy = 0.896554581345092;
    msg.vz = 0.29780954017822703;
    msg.p = 0.5711936815930494;
    msg.q = 0.22700488467687407;
    msg.r = 0.39268044340308705;
    msg.depth = 0.4858459419120019;
    msg.alt = 0.9674369155774536;

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
    msg.setTimeStamp(0.8968915514943018);
    msg.setSource(37595U);
    msg.setSourceEntity(65U);
    msg.setDestination(45583U);
    msg.setDestinationEntity(59U);
    msg.x = 0.8501618329116144;
    msg.y = 0.12919690131738315;
    msg.z = 0.44677728568063724;

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
    msg.setTimeStamp(0.6654040753421742);
    msg.setSource(39454U);
    msg.setSourceEntity(132U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(191U);
    msg.x = 0.6370535960732449;
    msg.y = 0.5594946273231922;
    msg.z = 0.6091032238812073;

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
    msg.setTimeStamp(0.5407729944449102);
    msg.setSource(3726U);
    msg.setSourceEntity(51U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(136U);
    msg.x = 0.5479565317209927;
    msg.y = 0.9817938257115008;
    msg.z = 0.5175566948739442;

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
    msg.setTimeStamp(0.4087211696525198);
    msg.setSource(6670U);
    msg.setSourceEntity(92U);
    msg.setDestination(23492U);
    msg.setDestinationEntity(223U);
    msg.value = 0.255304469268663;

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
    msg.setTimeStamp(0.2653917681240229);
    msg.setSource(32786U);
    msg.setSourceEntity(175U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4885427196085752;

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
    msg.setTimeStamp(0.019754946847664545);
    msg.setSource(29546U);
    msg.setSourceEntity(114U);
    msg.setDestination(54243U);
    msg.setDestinationEntity(62U);
    msg.value = 0.3818579286899917;

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
    msg.setTimeStamp(0.25560298505335555);
    msg.setSource(53571U);
    msg.setSourceEntity(184U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(158U);
    msg.value = 0.952861977560383;

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
    msg.setTimeStamp(0.762683348242024);
    msg.setSource(41144U);
    msg.setSourceEntity(162U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(186U);
    msg.value = 0.792346595240775;

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
    msg.setTimeStamp(0.5421381646034125);
    msg.setSource(10180U);
    msg.setSourceEntity(21U);
    msg.setDestination(31879U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8569695800632318;

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
    msg.setTimeStamp(0.8436569535152834);
    msg.setSource(52570U);
    msg.setSourceEntity(40U);
    msg.setDestination(60326U);
    msg.setDestinationEntity(70U);
    msg.x = 0.7780415725010079;
    msg.y = 0.02980467793147812;
    msg.z = 0.02276599226968634;
    msg.phi = 0.7146635246027938;
    msg.theta = 0.7362263385396562;
    msg.psi = 0.28625253291902586;
    msg.p = 0.4693761473077107;
    msg.q = 0.32218305390648616;
    msg.r = 0.5679361552027214;
    msg.u = 0.6386913561283725;
    msg.v = 0.566277010718112;
    msg.w = 0.598882208042372;
    msg.bias_psi = 0.6977086239509397;
    msg.bias_r = 0.6940067976374271;

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
    msg.setTimeStamp(0.60783767952375);
    msg.setSource(10484U);
    msg.setSourceEntity(55U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(157U);
    msg.x = 0.8051671338039837;
    msg.y = 0.17968067076986827;
    msg.z = 0.6824282435703453;
    msg.phi = 0.33040596532912314;
    msg.theta = 0.97420221905416;
    msg.psi = 0.17362255699764118;
    msg.p = 0.04511275867327169;
    msg.q = 0.5143941983709316;
    msg.r = 0.6395312223167164;
    msg.u = 0.01660044515656156;
    msg.v = 0.8093168521979727;
    msg.w = 0.8692082159597894;
    msg.bias_psi = 0.9292641052122336;
    msg.bias_r = 0.5542363630237487;

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
    msg.setTimeStamp(0.5547196536095303);
    msg.setSource(60386U);
    msg.setSourceEntity(242U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(21U);
    msg.x = 0.6546126592330704;
    msg.y = 0.21322126454268064;
    msg.z = 0.26149431955354097;
    msg.phi = 0.020339273527966273;
    msg.theta = 0.8112825042772288;
    msg.psi = 0.141331816416703;
    msg.p = 0.6823654098026902;
    msg.q = 0.24027849895107245;
    msg.r = 0.7811882759268497;
    msg.u = 0.5023516327731924;
    msg.v = 0.6152295493736407;
    msg.w = 0.2335206966544856;
    msg.bias_psi = 0.8214174504808095;
    msg.bias_r = 0.760140855522403;

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
    msg.setTimeStamp(0.6954199130294391);
    msg.setSource(37836U);
    msg.setSourceEntity(237U);
    msg.setDestination(53309U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.3101929710204764;
    msg.bias_r = 0.13524392498325932;
    msg.cog = 0.8705474550085062;
    msg.cyaw = 0.5962568128973518;
    msg.lbl_rej_level = 0.8866425329751358;
    msg.gps_rej_level = 0.10668947432073927;
    msg.custom_x = 0.13854573571732443;
    msg.custom_y = 0.23331991526099571;
    msg.custom_z = 0.24426412053625202;

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
    msg.setTimeStamp(0.026131657830650856);
    msg.setSource(8810U);
    msg.setSourceEntity(160U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.5515115360786036;
    msg.bias_r = 0.03067281288101742;
    msg.cog = 0.2998552701742243;
    msg.cyaw = 0.392810535591794;
    msg.lbl_rej_level = 0.9872909344479018;
    msg.gps_rej_level = 0.4759808931255539;
    msg.custom_x = 0.4186883658140237;
    msg.custom_y = 0.6785948584385654;
    msg.custom_z = 0.7235150489041573;

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
    msg.setTimeStamp(0.9672835485870441);
    msg.setSource(10928U);
    msg.setSourceEntity(200U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(110U);
    msg.bias_psi = 0.6421351599338971;
    msg.bias_r = 0.42424196271335746;
    msg.cog = 0.15412982980323842;
    msg.cyaw = 0.9261772504599737;
    msg.lbl_rej_level = 0.7300763964523198;
    msg.gps_rej_level = 0.2728758363884406;
    msg.custom_x = 0.627957735620687;
    msg.custom_y = 0.9330886162558921;
    msg.custom_z = 0.05342530464062134;

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
    msg.setTimeStamp(0.34932301129779175);
    msg.setSource(15638U);
    msg.setSourceEntity(82U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.7682086892206414;
    msg.reason = 149U;

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
    msg.setTimeStamp(0.9582685063892521);
    msg.setSource(42986U);
    msg.setSourceEntity(55U);
    msg.setDestination(49324U);
    msg.setDestinationEntity(135U);
    msg.utc_time = 0.25712626299332797;
    msg.reason = 0U;

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
    msg.setTimeStamp(0.39336993671352816);
    msg.setSource(58179U);
    msg.setSourceEntity(235U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(241U);
    msg.utc_time = 0.4161494159427407;
    msg.reason = 143U;

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
    msg.setTimeStamp(0.20517869051972826);
    msg.setSource(62411U);
    msg.setSourceEntity(91U);
    msg.setDestination(24202U);
    msg.setDestinationEntity(71U);
    msg.id = 159U;
    msg.range = 0.22285161406428078;
    msg.acceptance = 225U;

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
    msg.setTimeStamp(0.6405487545777256);
    msg.setSource(26869U);
    msg.setSourceEntity(231U);
    msg.setDestination(31832U);
    msg.setDestinationEntity(254U);
    msg.id = 45U;
    msg.range = 0.10112540458735475;
    msg.acceptance = 151U;

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
    msg.setTimeStamp(0.1848257268661454);
    msg.setSource(13678U);
    msg.setSourceEntity(223U);
    msg.setDestination(47749U);
    msg.setDestinationEntity(213U);
    msg.id = 180U;
    msg.range = 0.12728150172970454;
    msg.acceptance = 207U;

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
    msg.setTimeStamp(0.9438736997875941);
    msg.setSource(1468U);
    msg.setSourceEntity(116U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(185U);
    msg.type = 115U;
    msg.reason = 175U;
    msg.value = 0.5986588944268529;
    msg.timestep = 0.5439993231608024;

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
    msg.setTimeStamp(0.07982621556227987);
    msg.setSource(63712U);
    msg.setSourceEntity(156U);
    msg.setDestination(38534U);
    msg.setDestinationEntity(43U);
    msg.type = 192U;
    msg.reason = 5U;
    msg.value = 0.7365388254109239;
    msg.timestep = 0.10024969489883095;

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
    msg.setTimeStamp(0.6462628659224399);
    msg.setSource(47850U);
    msg.setSourceEntity(33U);
    msg.setDestination(57401U);
    msg.setDestinationEntity(21U);
    msg.type = 240U;
    msg.reason = 7U;
    msg.value = 0.8110830059362598;
    msg.timestep = 0.9455041731165379;

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
    msg.setTimeStamp(0.08864126488639579);
    msg.setSource(37407U);
    msg.setSourceEntity(85U);
    msg.setDestination(7740U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.48158932446571545);
    msg.setSource(37327U);
    msg.setSourceEntity(168U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.3371941497226032);
    msg.setSource(19121U);
    msg.setSourceEntity(203U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.23469654559089226);
    msg.setSource(17126U);
    msg.setSourceEntity(158U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JWQBIJVSLOACCIVNOITSEFUHYWYBNFVUIRNIPWJUKVXGTOQFZLPPAKMHGELADNYFICAX");
    tmp_msg_0.lat = 0.05537250672012828;
    tmp_msg_0.lon = 0.7974278123181607;
    tmp_msg_0.depth = 0.09319783647287572;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 218U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6261139841550366;
    msg.y = 0.23455549552778343;
    msg.var_x = 0.49154344986134446;
    msg.var_y = 0.40625997505113076;
    msg.distance = 0.4589521266472717;

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
    msg.setTimeStamp(0.7327189694078324);
    msg.setSource(52641U);
    msg.setSourceEntity(156U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KWFIIXRFOEIBFQUMFJGBNLAYSDVDRSCOFWYYKKBVUULDEORUKMUGPZTGLRHPSRBEIPJOGCEILVETTHREOZVCNSBBGYWNWPAZGMWNHOJFTXHLDPZNVMMGZNJSVDOJVWKXNNARYRBPQWHLOIKLAIDXIGCOXVJVTHXFQYHEHLJ");
    tmp_msg_0.lat = 0.6520186587140673;
    tmp_msg_0.lon = 0.1279830884330787;
    tmp_msg_0.depth = 0.5473635742676897;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 228U;
    tmp_msg_0.transponder_delay = 96U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.08263713201940859;
    msg.y = 0.20206866895627285;
    msg.var_x = 0.2698720984140617;
    msg.var_y = 0.8460064833008032;
    msg.distance = 0.6896022941493121;

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
    msg.setTimeStamp(0.2533578928422461);
    msg.setSource(39793U);
    msg.setSourceEntity(152U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(63U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XJCMTQRHBXOKMMKLJLCXQEKESZATFSKVTBKJQOTSNIJHATGMRKLRBYEVKEZDDLNWQBYXYPVTBZGPGZNBGENZAFSUWLPXSRAPDEIVJUSUAGZUFTIQTWTPKOWIZFNHRRXJFFHAVEIJZWZCSSQORWNAXBCLRHSMDDHBYINLLSFJNEYDOHGOFAVOBWMLRFURUDVVQIFJTNUG");
    tmp_msg_0.lat = 0.8170914151477154;
    tmp_msg_0.lon = 0.21330584404996777;
    tmp_msg_0.depth = 0.3645113347973782;
    tmp_msg_0.query_channel = 173U;
    tmp_msg_0.reply_channel = 183U;
    tmp_msg_0.transponder_delay = 81U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7643636737521194;
    msg.y = 0.12253109762202385;
    msg.var_x = 0.7263864612973343;
    msg.var_y = 0.4469359443310793;
    msg.distance = 0.888496225082975;

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
    msg.setTimeStamp(0.8429615660429169);
    msg.setSource(56776U);
    msg.setSourceEntity(207U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(39U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.2360256461734298);
    msg.setSource(31137U);
    msg.setSourceEntity(9U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(216U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.9835019285141053);
    msg.setSource(10322U);
    msg.setSourceEntity(116U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(29U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.25979858249018917);
    msg.setSource(33629U);
    msg.setSourceEntity(95U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(138U);
    msg.x = 0.9597749000240609;
    msg.y = 0.8966040037640838;
    msg.z = 0.620345608475725;

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
    msg.setTimeStamp(0.44114528490758687);
    msg.setSource(39886U);
    msg.setSourceEntity(36U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(132U);
    msg.x = 0.20802992153957633;
    msg.y = 0.8504893946691479;
    msg.z = 0.9867756516992375;

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
    msg.setTimeStamp(0.5737664265990668);
    msg.setSource(41762U);
    msg.setSourceEntity(144U);
    msg.setDestination(91U);
    msg.setDestinationEntity(223U);
    msg.x = 0.5342690958999463;
    msg.y = 0.20807209896630807;
    msg.z = 0.9318364363725911;

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
    msg.setTimeStamp(0.3005678825518828);
    msg.setSource(39866U);
    msg.setSourceEntity(238U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7509982560856904;

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
    msg.setTimeStamp(0.9580876390898736);
    msg.setSource(19192U);
    msg.setSourceEntity(237U);
    msg.setDestination(19767U);
    msg.setDestinationEntity(168U);
    msg.value = 0.06582771912258356;

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
    msg.setTimeStamp(0.3809433004737499);
    msg.setSource(21048U);
    msg.setSourceEntity(217U);
    msg.setDestination(42962U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8260681828458885;

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
    msg.setTimeStamp(0.09597213827541906);
    msg.setSource(62857U);
    msg.setSourceEntity(245U);
    msg.setDestination(33224U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5864435590969835;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.06658958555125716);
    msg.setSource(24188U);
    msg.setSourceEntity(26U);
    msg.setDestination(4694U);
    msg.setDestinationEntity(186U);
    msg.value = 0.52579046312647;
    msg.z_units = 36U;

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
    msg.setTimeStamp(0.6916313469889471);
    msg.setSource(55279U);
    msg.setSourceEntity(135U);
    msg.setDestination(21248U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7956649126975036;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.923195844910847);
    msg.setSource(4096U);
    msg.setSourceEntity(2U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(199U);
    msg.value = 0.14481340659342368;
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
    msg.setTimeStamp(0.9853016643467593);
    msg.setSource(51599U);
    msg.setSourceEntity(76U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(52U);
    msg.value = 0.039195404261153755;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.9800648303408888);
    msg.setSource(22421U);
    msg.setSourceEntity(122U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(138U);
    msg.value = 0.21632269351462208;
    msg.speed_units = 184U;

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
    msg.setTimeStamp(0.4166989483778927);
    msg.setSource(39641U);
    msg.setSourceEntity(193U);
    msg.setDestination(31720U);
    msg.setDestinationEntity(27U);
    msg.value = 0.817582380859734;

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
    msg.setTimeStamp(0.5129734882064767);
    msg.setSource(13518U);
    msg.setSourceEntity(116U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(10U);
    msg.value = 0.12497400818616666;

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
    msg.setTimeStamp(0.1121102240989923);
    msg.setSource(61297U);
    msg.setSourceEntity(238U);
    msg.setDestination(29552U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7473220173800219;

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
    msg.setTimeStamp(0.5574092631619384);
    msg.setSource(59484U);
    msg.setSourceEntity(49U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(111U);
    msg.value = 0.338109163536644;

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
    msg.setTimeStamp(0.6580378267961401);
    msg.setSource(37762U);
    msg.setSourceEntity(97U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(178U);
    msg.value = 0.789550109556977;

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
    msg.setTimeStamp(0.08836680198022495);
    msg.setSource(23787U);
    msg.setSourceEntity(237U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5226972517834158;

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
    msg.setTimeStamp(0.4662190961718192);
    msg.setSource(36109U);
    msg.setSourceEntity(203U);
    msg.setDestination(24068U);
    msg.setDestinationEntity(27U);
    msg.value = 0.30498767574423247;

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
    msg.setTimeStamp(0.5451058957304673);
    msg.setSource(26621U);
    msg.setSourceEntity(186U);
    msg.setDestination(38655U);
    msg.setDestinationEntity(232U);
    msg.value = 0.034691334574465826;

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
    msg.setTimeStamp(0.7756048933924441);
    msg.setSource(63926U);
    msg.setSourceEntity(51U);
    msg.setDestination(23366U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8382980931013925;

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
    msg.setTimeStamp(0.32381876469831994);
    msg.setSource(26534U);
    msg.setSourceEntity(47U);
    msg.setDestination(59015U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 2638456641U;
    msg.start_lat = 0.5380502273167213;
    msg.start_lon = 0.9573849841556732;
    msg.start_z = 0.09510575230993024;
    msg.start_z_units = 37U;
    msg.end_lat = 0.5991986228124402;
    msg.end_lon = 0.4543936626231959;
    msg.end_z = 0.32177415520288166;
    msg.end_z_units = 74U;
    msg.speed = 0.6287526638933446;
    msg.speed_units = 161U;
    msg.lradius = 0.15322893096254875;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.27496266919009127);
    msg.setSource(62556U);
    msg.setSourceEntity(82U);
    msg.setDestination(17180U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 4229783307U;
    msg.start_lat = 0.46014878197983133;
    msg.start_lon = 0.3465805181409928;
    msg.start_z = 0.9968461998015771;
    msg.start_z_units = 192U;
    msg.end_lat = 0.6288994786607711;
    msg.end_lon = 0.20139643650865358;
    msg.end_z = 0.10282073028124561;
    msg.end_z_units = 200U;
    msg.speed = 0.9172485729751533;
    msg.speed_units = 72U;
    msg.lradius = 0.7269885088487883;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.6830727059348969);
    msg.setSource(34120U);
    msg.setSourceEntity(8U);
    msg.setDestination(35996U);
    msg.setDestinationEntity(96U);
    msg.path_ref = 461534500U;
    msg.start_lat = 0.1605897065863452;
    msg.start_lon = 0.6545700611546813;
    msg.start_z = 0.858533004640049;
    msg.start_z_units = 151U;
    msg.end_lat = 0.24874345915481844;
    msg.end_lon = 0.8168921698965924;
    msg.end_z = 0.46352847271914743;
    msg.end_z_units = 167U;
    msg.speed = 0.4016854710224874;
    msg.speed_units = 46U;
    msg.lradius = 0.22244762031593324;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.5434520868339942);
    msg.setSource(32058U);
    msg.setSourceEntity(91U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(244U);
    msg.x = 0.3728324033908249;
    msg.y = 0.9899710109281517;
    msg.z = 0.3955476649638576;
    msg.k = 0.5487911277850048;
    msg.m = 0.5667191195249953;
    msg.n = 0.03196255294833572;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.370214737171622);
    msg.setSource(38802U);
    msg.setSourceEntity(188U);
    msg.setDestination(40362U);
    msg.setDestinationEntity(210U);
    msg.x = 0.4491165653068704;
    msg.y = 0.606628632584551;
    msg.z = 0.3132566170358895;
    msg.k = 0.8754604270765427;
    msg.m = 0.2310258931532203;
    msg.n = 0.8992737189633019;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.852900049140579);
    msg.setSource(47391U);
    msg.setSourceEntity(246U);
    msg.setDestination(32713U);
    msg.setDestinationEntity(85U);
    msg.x = 0.3640234051149448;
    msg.y = 0.3712414270247455;
    msg.z = 0.3444952786819391;
    msg.k = 0.30232461282871614;
    msg.m = 0.7210331806283907;
    msg.n = 0.6320366555399812;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.34985737946321227);
    msg.setSource(33504U);
    msg.setSourceEntity(235U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5717260770263812;

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
    msg.setTimeStamp(0.32663352512897803);
    msg.setSource(28498U);
    msg.setSourceEntity(103U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(3U);
    msg.value = 0.2528286525478922;

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
    msg.setTimeStamp(0.3860627575234251);
    msg.setSource(20776U);
    msg.setSourceEntity(175U);
    msg.setDestination(21016U);
    msg.setDestinationEntity(10U);
    msg.value = 0.24204385870235068;

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
    msg.setTimeStamp(0.43768763853671233);
    msg.setSource(65494U);
    msg.setSourceEntity(190U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(49U);
    msg.u = 0.0458703598543333;
    msg.v = 0.05793505219688855;
    msg.w = 0.06536080009443579;
    msg.p = 0.3199743209018825;
    msg.q = 0.4566852900683448;
    msg.r = 0.8712157473950872;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.4050562227085803);
    msg.setSource(15695U);
    msg.setSourceEntity(50U);
    msg.setDestination(54251U);
    msg.setDestinationEntity(27U);
    msg.u = 0.37151952954037903;
    msg.v = 0.04434001605593341;
    msg.w = 0.22103182017850476;
    msg.p = 0.7357730615282149;
    msg.q = 0.3523250813960759;
    msg.r = 0.14961831029417505;
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
    msg.setTimeStamp(0.6347282617835898);
    msg.setSource(43164U);
    msg.setSourceEntity(84U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(101U);
    msg.u = 0.6174314285341457;
    msg.v = 0.03557870630916504;
    msg.w = 0.11676409410548638;
    msg.p = 0.34746035640541617;
    msg.q = 0.5572789204761183;
    msg.r = 0.7733383351843884;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.6427130399700528);
    msg.setSource(48559U);
    msg.setSourceEntity(46U);
    msg.setDestination(29986U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 379262325U;
    msg.start_lat = 0.8604543084806944;
    msg.start_lon = 0.09457148102197133;
    msg.start_z = 0.10750418261813077;
    msg.start_z_units = 183U;
    msg.end_lat = 0.7571210224367533;
    msg.end_lon = 0.08379883565254387;
    msg.end_z = 0.39549555540976555;
    msg.end_z_units = 191U;
    msg.lradius = 0.4477064084271001;
    msg.flags = 94U;
    msg.x = 0.8162761154040589;
    msg.y = 0.30097463551801706;
    msg.z = 0.8528432843840883;
    msg.vx = 0.6730782774218318;
    msg.vy = 0.06931878066722319;
    msg.vz = 0.09999499839718606;
    msg.course_error = 0.9470717423935563;
    msg.eta = 62046U;

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
    msg.setTimeStamp(0.236121470666795);
    msg.setSource(62549U);
    msg.setSourceEntity(253U);
    msg.setDestination(51900U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 487869675U;
    msg.start_lat = 0.8665458779926323;
    msg.start_lon = 0.45864019572116466;
    msg.start_z = 0.0027487259169283185;
    msg.start_z_units = 170U;
    msg.end_lat = 0.009515760690721686;
    msg.end_lon = 0.15118065508136735;
    msg.end_z = 0.15415988051445495;
    msg.end_z_units = 220U;
    msg.lradius = 0.5461176251375666;
    msg.flags = 36U;
    msg.x = 0.7924449712696375;
    msg.y = 0.7513280105407697;
    msg.z = 0.3947756758455745;
    msg.vx = 0.33560879844435443;
    msg.vy = 0.41044216762674435;
    msg.vz = 0.7698537652955708;
    msg.course_error = 0.9984733009009731;
    msg.eta = 19781U;

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
    msg.setTimeStamp(0.1230607523785393);
    msg.setSource(15470U);
    msg.setSourceEntity(13U);
    msg.setDestination(22643U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 2637600289U;
    msg.start_lat = 0.096448413356224;
    msg.start_lon = 0.6734123512408218;
    msg.start_z = 0.5537767386387314;
    msg.start_z_units = 11U;
    msg.end_lat = 0.792049880457069;
    msg.end_lon = 0.6716466277354477;
    msg.end_z = 0.3457445331722565;
    msg.end_z_units = 19U;
    msg.lradius = 0.24177644267562115;
    msg.flags = 3U;
    msg.x = 0.3256435526231739;
    msg.y = 0.061225559309817656;
    msg.z = 0.49544689926571694;
    msg.vx = 0.006116690189083451;
    msg.vy = 0.9846848595956535;
    msg.vz = 0.7911410171262669;
    msg.course_error = 0.4672046938624117;
    msg.eta = 26833U;

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
    msg.setTimeStamp(0.2375134635777686);
    msg.setSource(9607U);
    msg.setSourceEntity(45U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(242U);
    msg.k = 0.37174630497234584;
    msg.m = 0.7884147555299224;
    msg.n = 0.4285538140539379;

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
    msg.setTimeStamp(0.7803058150709734);
    msg.setSource(76U);
    msg.setSourceEntity(68U);
    msg.setDestination(40529U);
    msg.setDestinationEntity(212U);
    msg.k = 0.01605573593142484;
    msg.m = 0.8202907407943386;
    msg.n = 0.9126444599570217;

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
    msg.setTimeStamp(0.7062935332319588);
    msg.setSource(51933U);
    msg.setSourceEntity(161U);
    msg.setDestination(60816U);
    msg.setDestinationEntity(249U);
    msg.k = 0.3459356347438345;
    msg.m = 0.7984675009163258;
    msg.n = 0.4736672818573828;

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
    msg.setTimeStamp(0.9854462655146894);
    msg.setSource(8332U);
    msg.setSourceEntity(158U);
    msg.setDestination(27125U);
    msg.setDestinationEntity(87U);
    msg.p = 0.2468415430857117;
    msg.i = 0.360634361979542;
    msg.d = 0.6997995137193133;
    msg.a = 0.8014599304043921;

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
    msg.setTimeStamp(0.19406851457287455);
    msg.setSource(44288U);
    msg.setSourceEntity(116U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(27U);
    msg.p = 0.4991761198449418;
    msg.i = 0.9436415326033831;
    msg.d = 0.40867488743590696;
    msg.a = 0.5426388263302251;

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
    msg.setTimeStamp(0.4151427437556723);
    msg.setSource(57491U);
    msg.setSourceEntity(139U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(73U);
    msg.p = 0.8049967656909558;
    msg.i = 0.15044545250817265;
    msg.d = 0.1978535927785432;
    msg.a = 0.5575185040235346;

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
    msg.setTimeStamp(0.41007824228589695);
    msg.setSource(47297U);
    msg.setSourceEntity(252U);
    msg.setDestination(11089U);
    msg.setDestinationEntity(95U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.1551395459634074);
    msg.setSource(4762U);
    msg.setSourceEntity(59U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(55U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.5801842618449667);
    msg.setSource(13862U);
    msg.setSourceEntity(175U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(193U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.7880429062435975);
    msg.setSource(1781U);
    msg.setSourceEntity(214U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(154U);
    msg.plan_ref = 1066788063U;
    msg.id.assign("IILLSZSRUOSBQPYKKYOSGJMGDDLEWLQJHQXUWTJCNMDKBQHYTBGVEYNSNDJBFDNFMKVLKUJOOPAVRYREKHJTKARSCGGVSDXISCHIWEZMVCMHDHUGBHTQNXWUORPTKOXUAQCRHNEFPQNDCAFEUAFIWNGRVGTNQYJWICABHLAZTPGFBOUYFXKZWLB");
    msg.memento.assign("TVCJUAWEFTNDLSPUCRYRZKRLDTTYUWFCLPGECQPWBDX");
    msg.timeout = 30316U;
    msg.lat = 0.9802503607008103;
    msg.lon = 0.7626955538430453;
    msg.z = 0.26463567636571894;
    msg.z_units = 252U;
    msg.speed = 0.7177635873360957;
    msg.speed_units = 115U;
    msg.roll = 0.24445913714660705;
    msg.pitch = 0.7345442874683924;
    msg.yaw = 0.43234009427498776;
    msg.custom.assign("VXEKPNBLULAPFZLBIZYRJFIIUMCTAQWTIAQWOXYCDGAPKXPQAGTXYUDCIONHDBESQFLTKFNJMQAUWWSVOZBQKZVHAFUZVRROPRRLLVZSNLJHTEWZCGGRJJQGNYNPCETNRMLWGWTAMEDJIHXUKCMXHZNGTVTBVGSSHLSDYSDWASQMOXWBYIZOCHXYJYKXHFOICFFNQRWOFHEJDVYKOIKUBDEVEFDHSAKQUGJPRNUMBO");

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
    msg.setTimeStamp(0.3861416923109);
    msg.setSource(7919U);
    msg.setSourceEntity(80U);
    msg.setDestination(14144U);
    msg.setDestinationEntity(210U);
    msg.plan_ref = 1224063822U;
    msg.id.assign("NQBLFWZARJQEHMDTKBSYJOZFORERIHWSWPTCRSFHEDYWUWJPMMEYEWBISAQTOMVIUMCJYJZMJQXJBFYLOITBFUSZCGSFXLSILKJARLXHVDTAQVCUPIRKIHBUPDMYXYLXEXBSIYVZQFVSMUJECNXWEEUTDKHHDNGNNNZAZTQEIMDUOOTUPXGXAOGWKCCBGJKDZKBVGZVFAVCGRSLTPBDFANALPNO");
    msg.memento.assign("NEQAPSRJKKVMTLYQCAKNVHJHFVQYONKZWHWMTIRFDCDXDFPSCZBERSXHIBEGWZTRWORAWFJVTGYHRQTVKGJIGGRJEPESPLXECFOLYCXVNTQQVHVDESILIGYRIDWUXMAXABJFPEAUSOWUVDYMCYLUGFNKNMIDVQHJUSFUJALKOPWXDMKMDKWMQZLIABBBDCOALZAOQCHZWHPNTNRUPOTIRSNZFXMBGT");
    msg.timeout = 45165U;
    msg.lat = 0.7355685414991485;
    msg.lon = 0.7874767653330843;
    msg.z = 0.8041135533819868;
    msg.z_units = 59U;
    msg.speed = 0.4402596801833959;
    msg.speed_units = 148U;
    msg.roll = 0.3880821136226571;
    msg.pitch = 0.930831039389197;
    msg.yaw = 0.906586449896568;
    msg.custom.assign("MGZOKEYSEBLPOKJNZOGPRDFVTFKMKADHBEQUOMSJUGSTYEAWEQPWXUQDBPTXAFJDYPNQQMQRECRIYSCYDDWUHHRFRMNWZAVEVAXRIQSNBJTVGPEHNMRMRWFDNJVWJRZCSLLGMNMRHGDCUUANXWBLAGJBVXBNPZAWYOTLKTBDFLSKVPDVCFYOZYBICWGPHQFPOYUXCIKXIHUHZMIZFKBHECGOWIQVCXEHFXLXZIT");

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
    msg.setTimeStamp(0.8013362775529925);
    msg.setSource(47379U);
    msg.setSourceEntity(152U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(10U);
    msg.plan_ref = 3620468812U;
    msg.id.assign("TGOPXZMWMOLJAFSPGJDNVAKHQTLZEUSTOASBBORYPSTQMYTICNZTCKVBUDDJYBYCRFUUSWQHMCIFUULQZSGPRPEBLMVGIAHWRQXBQPAHWVKFJXCZXDGYDENXYNNRLTMWHVIVTKQCLXODMWIJKRTOLZI");
    msg.memento.assign("WRSMJCKREGMUFOAQANLISGTWXBSOQANBIAZOWDCFAGXKJJVJMHEFFEMNOVALJGUEQSOUPMOUSKJJCHKECVBWFRWBMXBLDWHQDZMRTBILUWVRNIFTHKQPTXNIQQLUDRPNEEPTNYHZCYUVZYO");
    msg.timeout = 2814U;
    msg.lat = 0.58119842373017;
    msg.lon = 0.7246870006654704;
    msg.z = 0.03767195491719155;
    msg.z_units = 244U;
    msg.speed = 0.5956328270553517;
    msg.speed_units = 207U;
    msg.roll = 0.8831902397061601;
    msg.pitch = 0.7296090085635262;
    msg.yaw = 0.7602938870326327;
    msg.custom.assign("VMWCFNUDPNILJAHNRDLIAVDSQJDZFHXQNIMSFXWTOQGNCDTFXCGVYQUVEHHGZSRZKIPIMQXTAWCYEOVOPCTYTCYMTBVGJEMSIJPPICROVJRSEDULQDRLFQIBUWZJXKLESXXPZNXYLTWOXMAGEAFKURKYZXGJDMWFBNRNVDQYYHOHVSLUWLBRHPEYBUHBJTANCESGLEUZRKTKGBWWNOHLAAAOOUCKZS");

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
    msg.setTimeStamp(0.23464000018610887);
    msg.setSource(40892U);
    msg.setSourceEntity(128U);
    msg.setDestination(33122U);
    msg.setDestinationEntity(67U);
    msg.plan_ref = 2239909930U;
    msg.id.assign("AUEOPUDGAICPXHJNSERIFVIRQZOVLAHBNSDGMDJGJESLVKMRQOXMHXHXCFLNGZRWTXIWDEQQLNYHRTTW");
    msg.memento.assign("SHPIJGCDWJOVIQOSQAWPUBASCOBTOKVUCAZIATUPGQFAFXKYJGHHMCZOFRYLYIEOTFO");
    msg.timeout = 44238U;
    msg.lat = 0.4129917504551227;
    msg.lon = 0.7543520067512806;
    msg.z = 0.5563312253626926;
    msg.z_units = 102U;
    msg.speed = 0.9342657187765646;
    msg.speed_units = 178U;
    msg.duration = 34980U;
    msg.radius = 0.25866472695201737;
    msg.flags = 227U;
    msg.custom.assign("NDXTUENDFHWVRHVFDKBRMOBLDGJGPCPYRYIWORQFWDZOBUTVHKOBCAMFEPWKSJHBPACIBJAYTZYUKVZJNQNTVZBZDZHGSSZMIMVQHWIVDWSSWCMAWDRYCNOEQPSGGKJAQUCHIKSUTUTUOLLBMUGFMHJACSXELIAPETXLYGZQAYVLNNIQFVP");

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
    msg.setTimeStamp(0.7263789554959184);
    msg.setSource(45513U);
    msg.setSourceEntity(99U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 3106904600U;
    msg.id.assign("TLRMPBNQYNM");
    msg.memento.assign("KNNKIFZGYMFAMGXFIVPFFZMVIERVHUVAQCSOPCWPQZOLGZDHJSEMQQOQAIWQEJYTDDYTTXLBGGIBIETJDMWVHJHPAOUPBHJNGCFLANSUXVPIFZNHEZKLKRUGWYYWCMDXWIKETLHJVCXOAYGKSXUMARVTXQDGCLTKMLRVUWOCSBIQNPUBNNIUTYJZFWEOSZOLVKCKMQSRHRBLFAYYKRPRSOEWOBZDHPJ");
    msg.timeout = 19870U;
    msg.lat = 0.1630403915312053;
    msg.lon = 0.3943479747683808;
    msg.z = 0.5272826349775027;
    msg.z_units = 201U;
    msg.speed = 0.9664683751727539;
    msg.speed_units = 36U;
    msg.duration = 3971U;
    msg.radius = 0.6496066233198657;
    msg.flags = 50U;
    msg.custom.assign("QJLXJIUZDWGKGNQIFU");

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
    msg.setTimeStamp(0.3246978826670973);
    msg.setSource(38484U);
    msg.setSourceEntity(16U);
    msg.setDestination(4859U);
    msg.setDestinationEntity(168U);
    msg.plan_ref = 1356430080U;
    msg.id.assign("YIHCQXPFMIEMMVLSNEVAHJUGEQMCKSNOLSGZ");
    msg.memento.assign("KOLFUUNSNOJHKVPEHUNRSBEOTBAKHLCAEJFIFDYXBOPIQYZRQEEECIZUAIXUWBMMUGHXKCNCFPTVZSYAQPRFEFSQNXLOTUKRKNVZEHMXDNHARYURDTRIPAZQAZBYJSXWDDWPBVOM");
    msg.timeout = 38323U;
    msg.lat = 0.14703752064900166;
    msg.lon = 0.927631941616611;
    msg.z = 0.446581104192312;
    msg.z_units = 134U;
    msg.speed = 0.9321678234301747;
    msg.speed_units = 108U;
    msg.duration = 55990U;
    msg.radius = 0.9152880475149462;
    msg.flags = 18U;
    msg.custom.assign("XKWPCGHVNRWMNDHVJNPITWNXISEXXVGDUPSSZCQFYKYLTKAPCVXHBMELCVBDBTPCHIJTSRPRQYSBGPFMZTYLWDUPLBANJTXEIYMQSJUQITKY");

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
    msg.setTimeStamp(0.12031016556657992);
    msg.setSource(57296U);
    msg.setSourceEntity(226U);
    msg.setDestination(8991U);
    msg.setDestinationEntity(197U);
    msg.plan_ref = 3723838016U;
    msg.id.assign("NYYOYRGIUQUXWYVHKQWTHLMBLCBCMDIFBHCOZJESLJZKEBETNRDXJOITTAPHHDRQXVRYMFYOEXVNDOHGKZEIFKVGDIEZCOFRGWLEFZFHYUOJTASGDZQDDTLBWJDMVATIJXNMMSSXEVRXLBNUBPALMMKKRAMHTVLFSQEXIGVVDBCJOPWKPBUGCWKYPAXOIZINUQQYUBGQWLWJNYKSJKCIZCTVRJPZCATWSQNMPZUFSPXROH");
    msg.memento.assign("ODSQZVMQFTHEEDVOEEBIWBWEJJRYPUEWOMGIPSBCJSGPMPGGDZOSAWCNVRNYQBXNITFIITACRKZDKQGJLJEMFAMCUHSRBHZMYHMUDFFYRYKFTXWKBHBDYGNLCSAGKZVCJWPVHLDXELFQIIWTGKJGXMQZQLXYTXEQARLYUHATBLLNGIJAUPHTLZPXNOSDCPFSUXOUX");
    msg.custom.assign("LCKALMAKGGFNIKVYXRCMZNSNKVBVFWPJLQHCNQQYTEWKAKITYZPFYOVXSLORAISVWSJPLELWFTOMQM");

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
    msg.setTimeStamp(0.9314205897550611);
    msg.setSource(7911U);
    msg.setSourceEntity(2U);
    msg.setDestination(19199U);
    msg.setDestinationEntity(110U);
    msg.plan_ref = 1087406800U;
    msg.id.assign("PXJTLDZFOMMSALGSDTJNODMUBTHHQCFRFRMBLIVIOWNCERWCFQBGPWERCTRZKWEGRYNVTSZZSQYQISHERCBGLXDUQVFFPSDVXJMZYZIDNAKICDHEBWVOGFJLXMVPZTAPTBZOKYQYYFTPHEHBDAUNNKOVPJOHAEHYFCJMNHXXLKQWGPWNZLUJJQOBICGKVSAHKGFSDXQXOSNWRRURLJEMIAOBLQVPUKGZI");
    msg.memento.assign("MLXQYDVFDKEBFPIJDZTWOMBWXHCGI");
    msg.custom.assign("HFYFMIYZOPKWIHBAELXJTGAYTSHIUOESZFBAEECDBSQEDKUP");

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
    msg.setTimeStamp(0.5567064382158251);
    msg.setSource(34091U);
    msg.setSourceEntity(219U);
    msg.setDestination(55521U);
    msg.setDestinationEntity(18U);
    msg.plan_ref = 4250108235U;
    msg.id.assign("LUKDUYBYTBPXGISLOQEVLBYUXCSUAICYKDSUEVXFCEQQLHZMHDDWKIMBTSISLANIDHGVFMFENLADOEATJKATPMRFMZJXWEOZFPWHWLLCZZEJRBRMGPAFJFPYTAKBUFJQQWPKZTVRWECHOGHDSXGWNUPJQRVRSLZJDYXJNONXMCIJQWHXMBIODOQETHZHTOVHINJCPFYIGPAOPGTVRNASUQRMYBNNYUWGXCKSNWTKRARBDIGZK");
    msg.memento.assign("VQSGDEOYAKQAXPGTOILOIEKUWRGHFAYHFQGKVNTCSNIWVAHQDQKCOHJLJKCZJHPJZDZYP");
    msg.custom.assign("GGUEVDGMQGRHTUOLATFEYCJFWBSVBOWWLSAZZMABXZHQSXLRLGLNHVYHSNQNTYXWSPPVFJUIKEUCCVCTGRYDPCNOMBRBIEOLGJIBFNZQZDLTDHMKEFNPZKAHGYMXDWUQJJMITUZNRDEOXKNFKWZYSVLJNPOIHKDIRABYCJAWRIMTOMQKEAAXQISARTKNJEUKJCPSMPQI");

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
    msg.setTimeStamp(0.033717886904558236);
    msg.setSource(12488U);
    msg.setSourceEntity(77U);
    msg.setDestination(4162U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 39839957U;
    msg.id.assign("ZUXNDOHCQYJIVGXJBRVVZQJGILBTXZAFANPAKKQGAOOKWSMETEQLJKVOTEHYTPFBUANCHWWCSNLMGFMRAPITSLUMAYPSPAZATULXHJLCHSECVEGSSJONWHSRFQDBVRGNDKBDMHTUJOKCCCZIMGITGDEYQMLLQFXUFNBQXEABHRDRSCVBXVUDNJGEGYTXDIWFPXDNBIKFMRFMZIYDYUOYZVEBZWLYOFNYQPC");
    msg.memento.assign("UFWYEIHZGRMGYNPOIVVDJDQBBRIYKYRXXQKRVISEGNYDSZSKEBOCROCSCMKDSZXLYFRMFULBUVGSRFWOKFKUFXIZVZEHGTZWOUHFMPTUXQLAJAAWXZCAIHCPSCDLVMEGHVPJNHPDPQQNJOHHCLWMDJNKOEGANXQULAIWAPTYIJSOLXMZYENIWJMZOWNFAMQKHQIUO");
    msg.timeout = 10213U;
    msg.lat = 0.7968142541784374;
    msg.lon = 0.19212672046493506;
    msg.z = 0.6734213116191611;
    msg.z_units = 131U;
    msg.duration = 41200U;
    msg.speed = 0.12983931876117305;
    msg.speed_units = 31U;
    msg.type = 213U;
    msg.radius = 0.7109007066801143;
    msg.length = 0.7963789352760994;
    msg.bearing = 0.9089274498548011;
    msg.direction = 86U;
    msg.custom.assign("FCIYWZXJLZLEJPCYPUBDNZCHPRPROOSNEKZPWJKWBQHCMMRMAHHWVXKQTUEFLQNMMAUMDQTRRWIDBSXHAEFGTIZEVXKURYKBFBVNWLKQSCDZXZRSJSMMWBGQCAAULNDLXAY");

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
    msg.setTimeStamp(0.8076136844423898);
    msg.setSource(33556U);
    msg.setSourceEntity(108U);
    msg.setDestination(311U);
    msg.setDestinationEntity(48U);
    msg.plan_ref = 2877311981U;
    msg.id.assign("RSECOVLESWDKRDGDEJIILGLAQJFBYGQBFPNJELHWWPIDXCTDSTVRARAQHAYPIVKOOJNAPXPUNHECYVIQYUXDHHZJLMH");
    msg.memento.assign("QUFZHCIAJLJUD");
    msg.timeout = 38805U;
    msg.lat = 0.2655265382445655;
    msg.lon = 0.6357405787487199;
    msg.z = 0.1974574339914742;
    msg.z_units = 162U;
    msg.duration = 36108U;
    msg.speed = 0.036893104507021546;
    msg.speed_units = 124U;
    msg.type = 178U;
    msg.radius = 0.9747901862340641;
    msg.length = 0.9095021586510567;
    msg.bearing = 0.943971963217467;
    msg.direction = 215U;
    msg.custom.assign("FEYXIAFKGJEIHIVWNQTBVGNFHMKWJNGALERVLTVXQSVDONVS");

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
    msg.setTimeStamp(0.5754180275209007);
    msg.setSource(51474U);
    msg.setSourceEntity(89U);
    msg.setDestination(25061U);
    msg.setDestinationEntity(203U);
    msg.plan_ref = 3221024134U;
    msg.id.assign("CRIKBCYYVBMKQV");
    msg.memento.assign("TUUDXTKEYLOFZCZJGNKYRSRKUTLRROLWRVHZFHILNYDLEQTHVQANCWYCUQTBNYQYDXPOFNWWPSXAKLWAGQJSRJCBSZNRIXBYDZEQCKFABDKOIEMPUESEDUMGZXHUWOEOVPGSJMTQOSRVJDZEJGVDEQAMWLPMNLICPLGUKPIYTXXEPYFZXAGYIHSBABIHSKFFJ");
    msg.timeout = 18676U;
    msg.lat = 0.5846785376466601;
    msg.lon = 0.17220208372133705;
    msg.z = 0.23588795043904187;
    msg.z_units = 199U;
    msg.duration = 26407U;
    msg.speed = 0.678449910649832;
    msg.speed_units = 180U;
    msg.type = 121U;
    msg.radius = 0.2392545203267883;
    msg.length = 0.8187515630843348;
    msg.bearing = 0.6083325009028232;
    msg.direction = 23U;
    msg.custom.assign("LJWAIIZPSQDJTBTOOPQHTIYCJDRHLNCIOIFVPYGJEANGFBOZZFUJEEVUSVUJOGSNUSMKZZBAOIKJCEWQRLPXKFNPYQNPSBHNWWEOHMBEUMZYCJFCUKJSWLCWGSOGKEAZLAVWUWRPNGYHDVMACVAPCIQZAGRXRIXBXLWRNMPJFFQNDRGKSTFUYDXVDHGQDUKHHFDMXDYCHQUKLFMLVLBTNZK");

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
    msg.setTimeStamp(0.6406971694726956);
    msg.setSource(14828U);
    msg.setSourceEntity(238U);
    msg.setDestination(59938U);
    msg.setDestinationEntity(84U);
    msg.plan_ref = 3783859664U;
    msg.id.assign("QHEODOQPWBLYFGDZJFLIJFOAGBJWVIXRAVXOP");
    msg.memento.assign("YBRMMVATUARIBKOMYNDORYNLKCPLPJHWHGTQTEEYI");
    msg.duration = 31568U;
    msg.custom.assign("HRBXDXQJMPCNZNBTRSSXQNQMFUVWJZEALVCDHUTYBGVUSHAHVQHHOOANPXGUQRFMUYFOWNLVYBLQAOCEYZBVZDOBWSQYLCEVBMFCBTDRXJZWKPZIFSLKGFJINXRKVEGEIKRJLCELXFGTTMWTQYAMYILKSNOKJGLDKWSWDPXDJRMCYIDZPUGOEPPICFHTAQSKFSAUCIGICRWHIPWBWSRYYAHDZDLEMNMUJTGXJVXZKEURNTEIAGFBVPOHKU");

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
    msg.setTimeStamp(0.19068112568519824);
    msg.setSource(42233U);
    msg.setSourceEntity(227U);
    msg.setDestination(51329U);
    msg.setDestinationEntity(250U);
    msg.plan_ref = 377650901U;
    msg.id.assign("KMQHQRBBMHGHIILYCXMNQLIYWFSNWUUCDHSXGKKZYSSLZZAWMQZVJXUREEXKIPMRTZKQWRDTPTKVCLYQKXHZDYKLYZWJWXSUQTTXPMSFH");
    msg.memento.assign("CKYXHXGYIOKOZRBLXILORHWKQENXSCLJJGXNVCSPOUWDSEIIBMAEDPWHGYDFPAGSTAQWMKWANTEMMVLVIAJZWDPBFILPPUCNUXCKVRMLVYANGNRBJBTJVKNQUBM");
    msg.duration = 44810U;
    msg.custom.assign("FOKKXMRJKMGSHMHVLEWNUPHCBTNMNYFXIAGCBIRBWCGJWWNUVSASHIHIDBWCDFLXQDRZTKPFQEUECZEAJTPHCOXKUUQZMPVOMYYHQSXZIRWDNVTAKIYGTVZLBPEBPCFDBXDZRQNTTFBAOEFVLROGQJZZASOPMVSVMFFZACGETODHLIKLCLJLSWKQADMJXZGDIBQVBYJWOLYOGKW");

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
    msg.setTimeStamp(0.7858873974122154);
    msg.setSource(7200U);
    msg.setSourceEntity(191U);
    msg.setDestination(15360U);
    msg.setDestinationEntity(167U);
    msg.plan_ref = 2882969357U;
    msg.id.assign("FDEXVREDISMQZFFTPMGHXKWRRBDCUDNITUOPKVWDRVIZYETQOAUOLIRIYEFXBXRHRONTAYJYZXWDPAIHQHJZWGJHUBSZYABHAWJBOLQUTCKNNGZTQKPVSVLVYPQBFMQEGDXZCGPJENSMRFOCLEFNOQIIGCLWUESLVXMMLTSKFYKAANKGJVIVKKSBUCZLQ");
    msg.memento.assign("WMXHGZTSAYHXBLNZPLRWFFUCMOIZJMVYEJJFDHKUKIWICZRZTOFSGRLVBPMDMCVSHKSYJBEKERTWOUBVDRBUFBVCTRQASHPGSPNTXPQWDZDKGEZGUQKJITLPKIPGUOLDWKVTBACIEEXNRLQYCHYJNOHMFOQLVOXHJEMSQMFZANXFYJVQYNLJHAIVUHTRCKFCKGRVN");
    msg.duration = 27975U;
    msg.custom.assign("MXRWKMTYTAYWCNPAWUIJEJMLRRUFXHHYTWJOOFQDTPRGLDNYQSDDWIDAEOFJBZVZSLZAWXAJVKOFRUWVNFTDGVKJPSKNPSBMSBUXCBWGALBKIGCQSYHCGRCNRGEBXQSUUOCKCDUWZHMTDOIEZDIZIHHRESMPIKLOLYVQEJVSGZOXYXCGUMKUHFJPYPI");

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
    msg.setTimeStamp(0.9038437653191417);
    msg.setSource(25439U);
    msg.setSourceEntity(64U);
    msg.setDestination(14241U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 2256669024U;
    msg.id.assign("ZTBQAKQTQUKSAOXMYAEWMPTDANDSXINZTXAFOKGCFBNVYRNGYCYDJHYZOEQJSPZJLXMLYMRZIQGBFJTJWVGWFWBKPOFNGRLPFXVDHSJZCRHUMSTSCKRDXINISTGWMWFEPCUGYRHLKJBHIVADEBWZSAKBJLUHQUMPVHIRKMQEKVLLCIUEOFBCNADGCHWRHIPWOSUUDFTNQVCEOCOLTLXVEKGIZMASOUVRXPODWPJLQP");
    msg.memento.assign("VNDUXHRNZRHXEEBFCSTPQSDUSRWHECAANIIPCOBLUNIJWQZMTTXCAZBTWACJYAIFDKREEBJUOGXFNSWGMNBRIAGKNIMYFOVVMLKVDBZKLBCRXMITLTOFHYLOEAJRVEKRFGKMCXIZUBGCYHZVCUKAYWJVZKQQLLJSGVPYPXZXLEF");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.11005078822263348;
    msg.control.set(tmp_msg_0);
    msg.duration = 27585U;
    msg.custom.assign("FCIDTBUAEUPKXWZZDRQPVSUHOGNLPVVXTQIXKQRUGJPRIQJNLRDKFPMZBGQEIDJFWUJRFTUBJTAWZDJWPZTKANENOOKBFVHGLBC");

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
    msg.setTimeStamp(0.9621218649974406);
    msg.setSource(23918U);
    msg.setSourceEntity(143U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 3920622262U;
    msg.id.assign("KLTUZCIVBYNXDYUNVHYEPMYHRVJPHSRSCAGZYUVGTWJAUTQNJQDDPSSGBODKQLHVFRVPIOJCZRRHERGXXTXDIXXOYYFWWMEBZQWULLZLLFFNHRJGAETFNLE");
    msg.memento.assign("WCJMKPMABWZPHQWDWQNJZYTSZZRXFYEYPNYJXLJOVORIZSMNDDUGCXTHWNDUAJTPFZRQYKKRHSUIRZGEKCOFJGPRVANWEQPMQAWBLTVATVRBGQDRCLOLAKXZFBPQXEIGSCXOBYSIOELSCMNJFHMFFHKTKWIAHIDEBUZNRXIUPYIGCQCBLDWXYTHEMZUKSAKEFTGOOVGFERLSXLQHEXVINOYUWIBDAOLYSHJSBKMDVPCLJVNNGMDJHVUAFBTUGU");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 301949267U;
    tmp_msg_0.start_lat = 0.1374218174684172;
    tmp_msg_0.start_lon = 0.9902787500789613;
    tmp_msg_0.start_z = 0.860248945819755;
    tmp_msg_0.start_z_units = 155U;
    tmp_msg_0.end_lat = 0.26294845905042596;
    tmp_msg_0.end_lon = 0.5006439211033712;
    tmp_msg_0.end_z = 0.8443213514784299;
    tmp_msg_0.end_z_units = 174U;
    tmp_msg_0.speed = 0.8518791003464713;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.lradius = 0.9130980001536955;
    tmp_msg_0.flags = 118U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47295U;
    msg.custom.assign("CTYBVPWWDNWQSEEZLXEUANKXOYLVUPTPUXSIDCBAQXHDBBSUTBCADROJEFBFYGGKHMGYMVQPHQSETBJWJHOPAGJOAUVINHP");

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
    msg.setTimeStamp(0.4976711184509197);
    msg.setSource(48865U);
    msg.setSourceEntity(45U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(187U);
    msg.plan_ref = 3563667097U;
    msg.id.assign("QLEAWHCGGQXMRHSEXXTIDJLEUVWAXVNPFBINEFNWTOUYGVQZUNFHYRZTDYUNRIKLSHRJIBUEWBVBMAOMDKGGWJDPXRKNMHHCFSJQDGRBAAOQOPKDHQTJILXZPBSGFZKIPOYBJQMEPDMAUPSK");
    msg.memento.assign("BDEKFYQEBQWOLYSOCKLVVTWQVINZJOXHIAJFGSAZBFSYRDDFJPLQARTIRFYBDNWAWVMKFKUSVQUOZ");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.19674611600654457;
    tmp_msg_0.speed_units = 181U;
    msg.control.set(tmp_msg_0);
    msg.duration = 41723U;
    msg.custom.assign("OXLXSJZVAKPKGGQWYQIBOLIGCDITVZXFMUBGQGOFKTCSZRGVYCSWAHMJKPEFOEMNVYIOIUYWPXOPINMXVDJNNHUCYPEADOWFSTOJHQJZHDUMRSCLXZQTBVILMIBSUWFNECPILQOYKPYBRWCHGXJUUTGWXFZDEELJARDKWPZRTKBMGNLEAB");

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
    msg.setTimeStamp(0.22324586682879155);
    msg.setSource(9642U);
    msg.setSourceEntity(98U);
    msg.setDestination(54351U);
    msg.setDestinationEntity(74U);
    msg.plan_ref = 2283961212U;
    msg.id.assign("VHIHDQJLWUQJHMFTNEOPEWKSBEVMIYSRFSCHTYZGKIYJLOKXLRPWCDRACCPCAQXPIHOTRMMTDMBIJOAVYXZTKGPDRMNLVYOWGPDGYKWBYSEIQRA");
    msg.memento.assign("PBVUUVSJKQCHQOBQAUARYEIJYVGYOAGDPFSUNNKSZEQHGECJLWHCRLWTENTBYSNXDJULV");
    msg.timeout = 55757U;
    msg.lat = 0.03940482734174422;
    msg.lon = 0.6490750293467622;
    msg.z = 0.9127109715388048;
    msg.z_units = 12U;
    msg.speed = 0.3753136070088434;
    msg.speed_units = 254U;
    msg.bearing = 0.3758502891318555;
    msg.cross_angle = 0.13863224304624167;
    msg.width = 0.9868547858679718;
    msg.length = 0.6562444281535713;
    msg.hstep = 0.9640319672688213;
    msg.coff = 63U;
    msg.alternation = 39U;
    msg.flags = 90U;
    msg.custom.assign("JGMTJEWMNQLRAWSGKNFCRKTNJVHYFBXFTAAPSPYOISUULVDMCMNKIFNKDPHNTHEGIUBOQSLXDUPJQOVBQIERLSKPNYBCXCCTUEDBYZOQMUGBCHVRDESHZMYRTCTIMLEVZOHETYEXZBYYRPSZKLNAIJAFMPXWJWILRGXLTJJHFZBQQAVADKWYGNEHJWURAKPQMZMGXSODEKVTCOSLKUSBJOFGWHDOCZVHZAWBWIGIQOLUXNFIVCRXPYUG");

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
    msg.setTimeStamp(0.2051848349459956);
    msg.setSource(39282U);
    msg.setSourceEntity(48U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(157U);
    msg.plan_ref = 610002267U;
    msg.id.assign("OZJFQAEWOVVHXDUGZZGAPREVIARCSRLALGBAJNZFFELTCRTBWRLEFLUEXGNIJUISSTMCLELLXMPVQKBCQEGGAKPTHEMBIKTFBORRCMKKPXFJVACNNJAYYEWDNIUDSDQQPIOXPCHXHPGXVNKSUZQSXIODBDWYKLQJZUZOWU");
    msg.memento.assign("QFFFPAOLKCDQGEFVMKNXSHPDDXGCLXHMRKNFCNNWSBTEJNAQOBUPVGGHDWREZFUFZEHIRRLTFMOWJJTUKDNOCNYGACJVDHSLCLIZCZTULNTMMPPIWOIBLSTGKSUVRWQIKJXEWH");
    msg.timeout = 28603U;
    msg.lat = 0.6120512334812138;
    msg.lon = 0.35225694110702477;
    msg.z = 0.40643270539967746;
    msg.z_units = 180U;
    msg.speed = 0.9221023105523742;
    msg.speed_units = 216U;
    msg.bearing = 0.005301570408076883;
    msg.cross_angle = 0.39953489811501164;
    msg.width = 0.8651410569378492;
    msg.length = 0.49209361862707934;
    msg.hstep = 0.8942886786095833;
    msg.coff = 73U;
    msg.alternation = 214U;
    msg.flags = 183U;
    msg.custom.assign("NBAHWYWKBMRVCHRCNUHHRSQDFQWZZZXAYMLBPSXCDOEOYGWDPQPOJLXZWRVHOSVBFGZGGUILJFMPTAFKUOULBKVPNKXYYDEAYJDZSMNKVCPL");

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
    msg.setTimeStamp(0.8996508244322622);
    msg.setSource(5353U);
    msg.setSourceEntity(55U);
    msg.setDestination(9451U);
    msg.setDestinationEntity(208U);
    msg.plan_ref = 2420817492U;
    msg.id.assign("LPZDZITJMUYGBYQZEDMKLXGPMHBVTATOLEOWCVEXNTMVCAYWQSCFLWCOGXSQPDJNWORBFDNXZOLOHXXJOVWSRCRDLMZUIPEAMNAWSZAIKFTMIUVFOBVGUEKVAMADYOVPNYXLDWSHYFXFERYQJNRQASXFDCI");
    msg.memento.assign("OUFZHNSDEKZODOMUJCXWXUUGEGWWDVWMDRTZNKUBEEPLWRBCRWBTXIQXTMGPVTNYYASICYCAHFKMXRXKVHSCPM");
    msg.timeout = 51179U;
    msg.lat = 0.6044830753629857;
    msg.lon = 0.2173712424943005;
    msg.z = 0.4919533869409789;
    msg.z_units = 127U;
    msg.speed = 0.4597095439656954;
    msg.speed_units = 60U;
    msg.bearing = 0.7233812084077631;
    msg.cross_angle = 0.03343829049011071;
    msg.width = 0.17014650903044115;
    msg.length = 0.7701027840516994;
    msg.hstep = 0.14978006945047861;
    msg.coff = 145U;
    msg.alternation = 36U;
    msg.flags = 23U;
    msg.custom.assign("FEUCCIINGZLLAVLRZVPPGWAHHQFYIMWAQJPWEABZAOYCNZMTUZCBBYDDDSGKZJKDPUINONRDIYJVCNOMAVTDEAJMXGRKIGZBGCQHEVLLCLASIKTTQHESTDMYHRFBKTVBMGNDKOXJAGYQTWQROIFIUEUNDMHWUWRJWXBGVUVKYSPZW");

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
    msg.setTimeStamp(0.8463165753206305);
    msg.setSource(6571U);
    msg.setSourceEntity(250U);
    msg.setDestination(62325U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 3520302698U;
    msg.id.assign("OYOIEDYTKJKPJQGAXVNVWENHDZMQAHRSOMYBCOMQCNOKWULWYKIUPJQZWUCIKEFBRPAJZOIBSXLVTAG");
    msg.memento.assign("SDYJLXGJWXFBRRMFQDBWZHQJU");
    msg.timeout = 22062U;
    msg.lat = 0.3602624174602871;
    msg.lon = 0.861879095873248;
    msg.z = 0.6390846627443374;
    msg.z_units = 119U;
    msg.speed = 0.017316504990732895;
    msg.speed_units = 75U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.49876371358496374;
    tmp_msg_0.y = 0.6612061698909921;
    tmp_msg_0.z = 0.0623673687554791;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RDSPBEYOHQMKKYJAUMPGHLWXGAKSBLIWKHSXJJXOUWLXMOUWNPGETVWWDAEVADTEPJLJXVCIYBVHNUMGSLKWNXUMZVRZSTQTFFJPTVYHESEFCSRWRQBZINCLNAKHIKHZTORYBEQHXFYGNYGOBUDB");

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
    msg.setTimeStamp(0.10461254821162635);
    msg.setSource(9446U);
    msg.setSourceEntity(250U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(232U);
    msg.plan_ref = 1269557152U;
    msg.id.assign("LZRBOQMSUTJWEDOKLYLNKCIUKPRXZMSRGJRUDPKEATNSLXSGCKPVAXSVCFUBQAKERZXFSWDVPIPFAWXUJVBEHHAIKHDKBYUQEWYWQRMJVXQKYMIJFAAQVJUGZTZSYBJTPWFFAEYZNTAHTVEJJKFJCUIXNZDCROHCTWB");
    msg.memento.assign("OSXVPWSZPYXBBSGPNFCBXKCMXLTONPIDVRARLDWGAAGSVDQOZWEQHUJVAFEUNYFZVECWEVSPEXTUXRLZNJQNBDBUHJHPNCIGHCROBUSM");
    msg.timeout = 50U;
    msg.lat = 0.5178866219754439;
    msg.lon = 0.5380603921693049;
    msg.z = 0.3852006300582982;
    msg.z_units = 189U;
    msg.speed = 0.6496053293514916;
    msg.speed_units = 14U;
    msg.custom.assign("KWJZEPMLYHLSGKPBUNWRCIPEKGWHDXLSKJLSIXNTAHNYGYNNNCEOIDGRICMFSZOQWYIGQZLFDBDQGHBUPSFRBFMTJQHTRVATOPMATVORLMYPJURGHSDZXAAIDVLLVNQCXEAJCMOHBYEUWZECFBUJGVFROAYXWANNTUCIKZYIKWDQHZUVDZFHAYTRVKFQNGO");

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
    msg.setTimeStamp(0.46620397527266233);
    msg.setSource(15169U);
    msg.setSourceEntity(174U);
    msg.setDestination(44276U);
    msg.setDestinationEntity(119U);
    msg.plan_ref = 3338494213U;
    msg.id.assign("PSDOCJYPSPQXA");
    msg.memento.assign("QEQXUJYFOVYLOSMBWBLMJFOEHXPILMUTXPRVQYKGOTXEBMTAWHRZTZPDOZYDARCNAIRHBYCESRRABCPJQRMSQWVQQZQBCFFECRJWNLLTAGVIGPWURPSGSONFIOLHKHJVWXYCTPXKHLKBZTTSWANDFSVVIHPCUVUJZXGBFZLFMQDURDHJYACHSLZDUNCIAAOEDNPGVXNNDIYOUEGEMVMHWDNTZYBKFGOKLBWYUJK");
    msg.timeout = 55093U;
    msg.lat = 0.57902572320112;
    msg.lon = 0.7635381737220814;
    msg.z = 0.30477958972930463;
    msg.z_units = 38U;
    msg.speed = 0.6835977016341936;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7207509277884673;
    tmp_msg_0.y = 0.08646799378709957;
    tmp_msg_0.z = 0.04183794572639232;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BTQYXKTUFEFPNDPGUJNUQHBLTFYWQKSTQACRXBZSYNFQUUGVYSDRKNMJZCDRJMASYZMOHNEMOXKFWHZQXBSETAREYOVIDBEWDRXYVXIHPIQEPGWFVYPAORGFJDGSTPBGWUUXZO");

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
    msg.setTimeStamp(0.2694638047767559);
    msg.setSource(49182U);
    msg.setSourceEntity(216U);
    msg.setDestination(15748U);
    msg.setDestinationEntity(208U);
    msg.x = 0.6434843634854979;
    msg.y = 0.2540436927959573;
    msg.z = 0.13508975673658785;

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
    msg.setTimeStamp(0.6455459853717757);
    msg.setSource(52123U);
    msg.setSourceEntity(25U);
    msg.setDestination(2781U);
    msg.setDestinationEntity(56U);
    msg.x = 0.3960728758051839;
    msg.y = 0.8851723060812011;
    msg.z = 0.24067140631134265;

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
    msg.setTimeStamp(0.9881118586229442);
    msg.setSource(33264U);
    msg.setSourceEntity(72U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(178U);
    msg.x = 0.10352313272485525;
    msg.y = 0.6868831654841229;
    msg.z = 0.41886640822700016;

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
    msg.setTimeStamp(0.43624385897074713);
    msg.setSource(10396U);
    msg.setSourceEntity(106U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 1484610216U;
    msg.id.assign("DYOEACULMVRYMTTOSBVUPOGSSYDSMVERKCYHGKCHWOCMARSUACLNPNBXOFLHGORGKWSJHKQFQAVINBYLMOVJNUAYTQNACJXX");
    msg.memento.assign("ECIGFYNGVOTRPXZKKCHORFXLGNAYWKOCAXSGCXCNQJNWBQFBJLJHHTJYPCRESKUTPFSEUQVBEHPPIUAMJXNTWLTDSWZFYLVZYBINNVMZLUGMDEMLEDDALUWATEDZILPRVQKOCNYUWXJCYESXDOJGTNFKPAOWNRUSTQAPIAVAMHIELBORKFDRJYTWMQZHGBRZBUZJEICQGBPFOZJVIRSIHIBQYBSUOXFKRG");
    msg.timeout = 26653U;
    msg.lat = 0.8911574679965002;
    msg.lon = 0.4037856272375854;
    msg.z = 0.43035582646265247;
    msg.z_units = 188U;
    msg.amplitude = 0.5390969086011206;
    msg.pitch = 0.786893110312488;
    msg.speed = 0.5829112940511343;
    msg.speed_units = 249U;
    msg.custom.assign("CJQOSLIRAJWLPYJDHABXNRKYMCNIZANDAZQLCZJIXNAGVNIFPXOHZOWMMPGCMYKTSVWMDUQMGFCELZUFXIVKVFGHOKOTRXAWEUHKQUDBOAUUBDLWFNSROVOSHBLUBTPNRQF");

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
    msg.setTimeStamp(0.5929165395528406);
    msg.setSource(48169U);
    msg.setSourceEntity(76U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 611281374U;
    msg.id.assign("MHYVAGMGBETATUNJWLAUICMANTWLOLLHBVYFWJKNBKFFPTWZKQNPW");
    msg.memento.assign("LVZUIEADTPMEOTHHUWEGYNMMNPCDNPHJUFSOSXLAZOMAGGNWHEUCIBABFXPTULBDQLDMVCVBAYBIQIBJAQVREQXFLSCTFILMIOCPMPKZDNFEXVLHPHPSAPGAGLYDEWBTJKHVLVS");
    msg.timeout = 19995U;
    msg.lat = 0.9267749595955996;
    msg.lon = 0.08432015004042459;
    msg.z = 0.1753513986423706;
    msg.z_units = 250U;
    msg.amplitude = 0.9581177802070113;
    msg.pitch = 0.38838329316440734;
    msg.speed = 0.2385460153841501;
    msg.speed_units = 61U;
    msg.custom.assign("OVPLUCXOLRIYKSUMVNCJ");

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
    msg.setTimeStamp(0.07129221965763954);
    msg.setSource(19132U);
    msg.setSourceEntity(245U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 2624886669U;
    msg.id.assign("GCOYRBRQGAQMVXGBJAWVURIIUZCVTOZZVNJWFCPDLJTNHAMIRIVDPZYMKHZXXYJLMUMSIXCPREHLZKGSUKJZDSXTVEWGSNECPZFHWLQDYPJMAZTAEGKLEUAJIAXGUOGDLFEPOETNIRSEFJGHJLXUMCFYBQLOIAKUJOGAUQBPYKHB");
    msg.memento.assign("JJMJMIOITAGMXKVNEPRU");
    msg.timeout = 44115U;
    msg.lat = 0.5853302604942052;
    msg.lon = 0.5237184416153607;
    msg.z = 0.7128759987902014;
    msg.z_units = 98U;
    msg.amplitude = 0.29539026791511847;
    msg.pitch = 0.3580029295210172;
    msg.speed = 0.8122284988280128;
    msg.speed_units = 66U;
    msg.custom.assign("SKEYKYQTBJMEJLM");

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
    msg.setTimeStamp(0.7232784786297287);
    msg.setSource(15044U);
    msg.setSourceEntity(148U);
    msg.setDestination(53808U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.44581219852401);
    msg.setSource(35886U);
    msg.setSourceEntity(25U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.16097467112262198);
    msg.setSource(59531U);
    msg.setSourceEntity(135U);
    msg.setDestination(47657U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.6533641183266947);
    msg.setSource(42903U);
    msg.setSourceEntity(57U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(32U);
    msg.plan_ref = 2650618175U;
    msg.id.assign("ZVWLNDQCVSRCVHTJSEUPEPRUBPHBTZWRYRROPRJITJVUXCOBRFFUSQOFZOBXNKFQSLDXOZPBXNJXLZKLKYDHMMTOWYWJHVGABACACYFRRPHSTCNNQZGVMSXIUGVIQTMFCAPEMSQWAJIFCGNIEGHYGIPZQSMRUULBAJBIHWNTGCQYUDKNEYEMUMSINKDEYOOKLKLVMAFPJWXPADTUKWSQVGYWZ");
    msg.memento.assign("DLRYVJUTRQFRGQFHTGITMRJBPCQZRPRNNNUVKMPPCJNHWMWJOIEESCEKWODXZFTTCYOKKPIXYNDFJCXIVGMWYZSYJVDXKBZBIVIZGMNJHOE");
    msg.lat = 0.6052330137667238;
    msg.lon = 0.2243531257165987;
    msg.z = 0.3447485800721921;
    msg.z_units = 123U;
    msg.radius = 0.662177539001524;
    msg.duration = 1214U;
    msg.speed = 0.004263957704064514;
    msg.speed_units = 75U;
    msg.custom.assign("XVVTIOMQPIVNFRTPWTBYWEZOIHOYGJQFTFDWSBNSUPIHNSLGQRSHLFATFRJQZKOOWCWEGLYEUMUAKHHJBPRUYZDGDMUCJVVFIGPLEPJUIGWFZIYAJAQXRFCRMFLKXTWNMZUQPWANWXHMHDXBSCJPVJSDQEZIIBMLSCKPYCOZQYOHSRBXTCAPE");

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
    msg.setTimeStamp(0.7773776087836973);
    msg.setSource(19643U);
    msg.setSourceEntity(143U);
    msg.setDestination(50655U);
    msg.setDestinationEntity(40U);
    msg.plan_ref = 1226688413U;
    msg.id.assign("WWSKPRYEPRRWIBLLPKTGLPOLEVXFAQQBWJFKCQAHOQRDUNOGIZTTOEKAVIKVYFJWORPDZLSMPJYORNCSCSURAJIXJZIWUUP");
    msg.memento.assign("FGKMEQJACENWTGFIANOQOMBWZUWZXBSWXXJCFINMVDYIKWEEKVQEZNHUXUDFLQRASNOHIITIMFRWRIAYKPWCOGUTMZZBPTIMWPHZGVGLTDLOMAZHUBJVHPHJQQHUVBKYMRDBAWFXCFBOPGDLCLQVSKXLQDTSXGUYARLSVNOAEDYUFKGPQYNTAIDEOOPABJKRGCVCTPOSZXEX");
    msg.lat = 0.35551435600970205;
    msg.lon = 0.6990399053428022;
    msg.z = 0.0523082252340229;
    msg.z_units = 110U;
    msg.radius = 0.3670561315608104;
    msg.duration = 46118U;
    msg.speed = 0.6426761653950228;
    msg.speed_units = 171U;
    msg.custom.assign("LUIFOIIBONAPNDLVVKKHIGLSCDMCJTFEPWDXLMKNSLTOFQCPXYQWVYVDJCIASIXKTKSJRRQVXPYANKTOHGBVTUHYZXXZTUJRHBKOEXYZQQCEQNQLDEIGFVBNPNPXQMSHPXTGYZIZAFEWORMNSJBJEFWLYOYAOSXRVIGUHPJPFMEWRYLUEGCWATSVWBDHOURHDHUCVWZNJKGLABAMTQFECDUOMRKFUNZCWTHUAZBPRBCMMJDFKDEZGLYJSZGAMQ");

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
    msg.setTimeStamp(0.22655018355653056);
    msg.setSource(44466U);
    msg.setSourceEntity(130U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 3610777052U;
    msg.id.assign("IYHUONUUBSFJRRTBSIRJWIIOZPVMPFNIGLNYJMQAFMDYOCZJUTGWHXUDKDMPCNBEFNCVXWKSLDGEUCJPTESVOEP");
    msg.memento.assign("VOGUHOXCDLCPLTKUEBVQGWQNGDJKNZSPMBEDULEKFUDWTJVICFIWFTUHCYEZISPCKVAZRQIPGFASKHZJXZEKYTLZMWPPRYAUWVSRPTWQRXQLGYNTNREEGHXOKLECRKMAMDBFUJWBWNJNLTASGUDZMCYZKNLSFVJGEPLBHOXPBUDOZOBFBBTJEHPXNBOMCADAQTMMZCQXFJFRSIHYN");
    msg.lat = 0.9426483860552226;
    msg.lon = 0.06560802811201027;
    msg.z = 0.8449365761007406;
    msg.z_units = 38U;
    msg.radius = 0.7182890119887059;
    msg.duration = 36590U;
    msg.speed = 0.9817515694783945;
    msg.speed_units = 76U;
    msg.custom.assign("JZSTIWUOUJHNKLIVOMGDJBWQLXWAPXMALGDFFCRFJELWIINPSEHPOBKULSSLXQOSURZDKWCBSMVNIVQXFCOAWZYZNCFLOHNBCNEGUQXIFUHAQDRMPZCVDURZXKRCQKTWSPJDMTEYYOJOXTFJDVTPWGMURFKZKGYMYPQJXVTDIAFNS");

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
    msg.setTimeStamp(0.6583300545034079);
    msg.setSource(35145U);
    msg.setSourceEntity(193U);
    msg.setDestination(47238U);
    msg.setDestinationEntity(39U);
    msg.plan_ref = 4097482122U;
    msg.id.assign("WQQDZHEKPCYFBDPGJKXSPFQEZPNYGJUPJMIKTBLQHGKTZYDTCZYFNRURZLFHLDAXYUQSMACWIDOFKCLHUVUVQGGUXKUJVWMNCYYEXHQEZGMALVLFBKAFNALJWVXIHEPDOCMTOSRINGMAHIWNOVVMVMTDTONIPRBBZ");
    msg.memento.assign("EJMLDKUAZELVXNDSZYCXGXZSFDZEUZNJWQFAEHVPERNATDBXHPMARUGMPZXTPPGVADEXEREWVGIQPNNQVDZRTVTYYTQENOSYINPPPWCMQNDYMTOBUWCKGUMWYLBZSX");
    msg.timeout = 54205U;
    msg.flags = 192U;
    msg.lat = 0.777543598499216;
    msg.lon = 0.665976868398199;
    msg.start_z = 0.41915672910110824;
    msg.start_z_units = 201U;
    msg.end_z = 0.12173608700729721;
    msg.end_z_units = 50U;
    msg.radius = 0.7270612827437851;
    msg.speed = 0.2494696774956474;
    msg.speed_units = 179U;
    msg.custom.assign("QEATZZHFNNCFCYDCGRTMGREFPSLZSBUALTQMVO");

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
    msg.setTimeStamp(0.6634131429500718);
    msg.setSource(57364U);
    msg.setSourceEntity(138U);
    msg.setDestination(30516U);
    msg.setDestinationEntity(96U);
    msg.plan_ref = 96073247U;
    msg.id.assign("YOHUZEESENHVCMKHBIRTXCHRQQVAZWOFRJPLFJDLSKFBUCSRHGQPABIOTVIQMZPYCMBGCBIRUZOBQRHDOHLPAUXUNYFXWWTUTWZJVENJGDIMMGAUXGHVBPQSAWCULH");
    msg.memento.assign("WGAIITNJVEKRYCVDWIFULXIXMREHADKZGYLGOOTDNPWEOWCHSPQYUYKQJUIMYQDAFKLTUBFOZREOOBPIXTCGTGSJWRRSVTFFRSJEHFZGCHMRTSXDMAFWPSMIVHMPQCMFHQXJQHVBHOBYARNDEUKZSUCFRMZGEVXQXVUMPJKPQCOJZLKJPYWBZDEYGCQBMUZNOTAPNVNQHADTZNWVWTBXYSAWEY");
    msg.timeout = 4256U;
    msg.flags = 165U;
    msg.lat = 0.2728848492204573;
    msg.lon = 0.03773388104013897;
    msg.start_z = 0.5619096811631453;
    msg.start_z_units = 212U;
    msg.end_z = 0.10383373903504667;
    msg.end_z_units = 2U;
    msg.radius = 0.7208271547934173;
    msg.speed = 0.6878930943166827;
    msg.speed_units = 169U;
    msg.custom.assign("CGWFHTANNEYFNHGQOXBTUDMOKYSZRZRNWRWZYHVBUPFOPPMKZCVUDYHEAGVEXJAZYMWNJRTPXEIPCVEOVUKXVCSLGIQJWJGXIZHYKALBTJYVLGXBVJXBBSDPMAWCDGWDPNTURSGIPLLNNAEJXLMQREZOKOSVMKYRBKFQPCPOIXQDUFCTOQNDDUHLBGKLLSDUKCABZMFMQMSHADA");

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
    msg.setTimeStamp(0.9077659921081389);
    msg.setSource(2026U);
    msg.setSourceEntity(57U);
    msg.setDestination(63790U);
    msg.setDestinationEntity(166U);
    msg.plan_ref = 686903563U;
    msg.id.assign("PMAPXRGKLKLLKQEVJFOEIABZWNRDHXCHEDJYDOPIIGFAACFJLOXNZHQJNYGKAXVNQIYHLPQSMCGTQMTHBWFIOBWCVDKIVHCBVAUTBDPBENPNGRYUJFLJDIXTDEHFAGQLXDZZTNRYYTMFMPVFEEQUNEHWLPOAGCIJHYUUKMBSSVJAOQLUWZQGWZCOOPUVSPGXITFBAKCUNVYMTNVRRZXCIUTB");
    msg.memento.assign("NPTJUPBYPZAJJCYNIOOXRSE");
    msg.timeout = 46825U;
    msg.flags = 198U;
    msg.lat = 0.654048925136178;
    msg.lon = 0.09993752635751219;
    msg.start_z = 0.9971827918112236;
    msg.start_z_units = 179U;
    msg.end_z = 0.6549978148638338;
    msg.end_z_units = 165U;
    msg.radius = 0.37943047630940385;
    msg.speed = 0.8709078304576967;
    msg.speed_units = 237U;
    msg.custom.assign("GFSDTQDUMRTIWDKQPBRWHFNGPLXMOPJLFRQVFSBHKSCEBWOYLTUILAIOYDTXMZUAIYKQ");

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
    msg.setTimeStamp(0.7945763377186105);
    msg.setSource(8063U);
    msg.setSourceEntity(178U);
    msg.setDestination(13064U);
    msg.setDestinationEntity(152U);
    msg.plan_ref = 2352954429U;
    msg.id.assign("DCPEAXMDPCXYINMBUPYFGPLERLRNQSIQTJODGEHHLMSJAKCWONKOZQRJXTHWUVGKQNAWFFMOCLGKFXNNPJSPKRXXKFDRTJAIXJIWUYWDNTYU");
    msg.memento.assign("OPTMKIYEUMEOF");
    msg.timeout = 60312U;
    msg.lat = 0.21809130463316095;
    msg.lon = 0.4802668623191878;
    msg.z = 0.05397999406267351;
    msg.z_units = 220U;
    msg.speed = 0.9539569546562198;
    msg.speed_units = 112U;
    msg.custom.assign("PTRRBTSOAYMVPIVHABCLHEEMDIFYHZQOSNRDVGMQFJZPGPUKXLUHFNMPFNDVVUFIIDEWUCRDQKEMJOWWXWQRJZBCSJAUDYOAQRTTBEEOCJALPGZJSNVAWGCYSMLSQEAFBHCQIBYXUMQNNMNKRWAZWXJFDAKRZTILHJEFMHWTCVLTYUHNCEYZOYSCBKRNQOJXAOFGUIUPSXVXLSQKKDGBUPOYVFSPTXBWXOCILNBPXGGZDIHVEKID");

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
    msg.setTimeStamp(0.1026095426628566);
    msg.setSource(30624U);
    msg.setSourceEntity(192U);
    msg.setDestination(18022U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 1137231615U;
    msg.id.assign("BNOXBUNWTADMNIBSCXLXZJMSXNQTUTITLHUSZLLBJN");
    msg.memento.assign("TJXHKFDJCZIWYXSMHPJXAQGQGPSIOEDJTVHMRSHQIGYZAGNSTTRMRAFOUVULNYGCRUEJBULOSCXYBQXPOKKZACJBWXQZIXURFQRTNWWNKPKJKRDWYDGYJPDRHAZCZQQFLMFBGHEVWHAGMYCNKIIYVTYNSNBZHIPSLSKWAJMX");
    msg.timeout = 21126U;
    msg.lat = 0.13328521973577478;
    msg.lon = 0.45612377553086647;
    msg.z = 0.8056641559422882;
    msg.z_units = 21U;
    msg.speed = 0.04192215580173875;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6033455365378567;
    tmp_msg_0.y = 0.917543413583729;
    tmp_msg_0.z = 0.5375361525497878;
    tmp_msg_0.t = 0.05516835638334816;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VCYROEIAAGPKYUAHIGNMNLSHUCIHXNRZYJQGOOUUOBSVWPXNGQBQWVXEMPSLAZAILYEYDZQNWBDPOISMHHKAJMLRKZLHVCKXFULXDEELJCZEDFXPRBGHSDCGANAQIFRYNDBDJ");

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
    msg.setTimeStamp(0.9041270722709791);
    msg.setSource(3847U);
    msg.setSourceEntity(45U);
    msg.setDestination(26522U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 2248036967U;
    msg.id.assign("ACSQOLUWEZVADKPHDJZLQYHKZGOTQIUIXLIPEBROCMRZBIGSTBTQZDMFJONBARETHSDHTSSXQUAYFAMBCXUGHUFECMJXCIBVJQLNFRGEPFKHACOJELKIMHXGZWPZGNGJRIHSTWNZOVPYDNDMGREKIYQNNSDRDVVEWGSPIDZMXNPTRKOYSVQLNWOELFFSKAVLPWYLBTYMCKFKWKAHQLWGXIJUBFXV");
    msg.memento.assign("EOKBCOHUMIDASCVJSJWLZGGAFSSLRSZGBZXMBZIDEGUNMLCWSCHEDJHPPQAPNNUEREGATSTTWULBSUGWKMNPOIOIPDVLXTHIKWAJAAGBIFOYBZQOBYLMKXOTZXPNVMWJJPJTFUGRB");
    msg.timeout = 18778U;
    msg.lat = 0.14335751742826341;
    msg.lon = 0.21968573782917633;
    msg.z = 0.7165702904212667;
    msg.z_units = 161U;
    msg.speed = 0.9680182467386644;
    msg.speed_units = 232U;
    msg.custom.assign("ETUUDYAAKPEPLVUYOLTECLSHWVVTSEOXQQMJV");

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
    msg.setTimeStamp(0.7777944160820369);
    msg.setSource(11482U);
    msg.setSourceEntity(140U);
    msg.setDestination(63738U);
    msg.setDestinationEntity(164U);
    msg.x = 0.14305055092807106;
    msg.y = 0.10641902894583499;
    msg.z = 0.31242893684177164;
    msg.t = 0.08056439214338329;

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
    msg.setTimeStamp(0.49476399153717554);
    msg.setSource(11684U);
    msg.setSourceEntity(7U);
    msg.setDestination(33249U);
    msg.setDestinationEntity(106U);
    msg.x = 0.3927543621568941;
    msg.y = 0.24287640721817183;
    msg.z = 0.5177034122962215;
    msg.t = 0.1161127369063546;

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
    msg.setTimeStamp(0.5585178002298484);
    msg.setSource(27612U);
    msg.setSourceEntity(64U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(232U);
    msg.x = 0.33649969447214556;
    msg.y = 0.7784527353364791;
    msg.z = 0.206418053476347;
    msg.t = 0.16495492496729192;

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
    msg.setTimeStamp(0.6397220101043292);
    msg.setSource(55449U);
    msg.setSourceEntity(109U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 2154465763U;
    msg.id.assign("OGPIAQYOBBGVGLCOMYTTCVZCFTMKTSDCHTNVIOMIPQAEZLZUIEBAWTGLFMYNMUXFOXDOGKUMCFTYYMEWCXPUUXFKCHVJZPWVH");
    msg.memento.assign("DDQJQNTTCGOTHHZHQHLYFAFCPKDMIXXNSAPRZSKTZFQMTCENZBWLBVMEJGWDWRYNSVBQJZFECGFYALBKALCTFNXOPZADXCKJIFPJAYERGSPBURRVBYQYUYZONDOPKEGKRCGLEAVESAWROEXIJFZETIIHFDUQLNTAXSJUGXQGHJRBUHXNQDYEYXHBJVLOOVUPUIVBVVQJSKDIWUYUCSTKPIMZCIMOORZLWGVRXGKNSSCDMWFPWUIMTWOHK");
    msg.timeout = 15792U;
    msg.name.assign("EOKYYOUAQACHAELMTEFXLGQXLNNFAYHBWOMAJDEZOCYCAKSQDJHKHHCLKMBZGVEBE");
    msg.custom.assign("JRKKVZCFTPMLDRQSZIGPSUUHKOGPMYOVCYBWXQENNSIWJHNPWOIWGKXUSKRYNDKNBUETWAZAJUTBIBLUHCDAXGIGQXOYVMRR");

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
    msg.setTimeStamp(0.07170434316420427);
    msg.setSource(51814U);
    msg.setSourceEntity(202U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(112U);
    msg.plan_ref = 4292840823U;
    msg.id.assign("PIIMEYMEGXUCWYKXMSDXEIQJFKRNYFOJHWNVKFVMJAWZNUXJHLLHRFCESQJVMQWBBNZTSDYARAYRMYGGVUBFRGLOFCCPAKHGQFBDVPBUMDAIXDKJJPRANWOPZPZKXUDOIAFWTNJHHLPUOIVKELEQTQVODHOSECLUOHVTDCMEBJNCRTMVTZSBZIQIZTSMCXYNHTYSYDHRQTEGAKAGIFWKWBULLXWOUFLEUCDGKZSGSTVA");
    msg.memento.assign("TVDVLTNQITJPBTEWFBAFAUZCDNUFQCPWKSGFQIPBIWQNMEWAPFPSXMBRYGRQBSYGLJFIIIRLMBZCKLVWUUEXQHHLCXDCQGAKKIVAVOCMALGYUQJPEXFXEHWAEMZHTJGOQSUKFNUZQHRMVIFEYCACSOTPRPRSNBZNOJEXKSHNMLGYUEDAWJUCZKLBGRXT");
    msg.timeout = 49106U;
    msg.name.assign("CIOXXMHUKLCUNQNFRDZXNVLJWXRCWESBZOZQKHKZLQUFIBEZQYCGAVEMOHVKJLYROELCFWZHAUKOVBYEJTVIMLJPXRYKREAJCDVZAXFISTXTBHRJUKRSGTXJDCGSQI");
    msg.custom.assign("MPRJVUXXEWQSUWQWSORKBBQTGAGMCHIDVHIRXSINZUKYTDDGYFHMUFBZECVHEYEPVHNFUSCCLLXEZQLMPOZXRNDNAJQVWQOIFKKXUBKZTKBRQKHGLYLMILVJUJPJFMNLHIFQAWXIAPRVJFWITTVWGVTDYZZTCNAOUSAOCLVPEUDUAPSBAPZRGJECHWYNYFJZCKYMEXARDPWASXGGOCZMNGY");

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
    msg.setTimeStamp(0.11300287533371733);
    msg.setSource(33640U);
    msg.setSourceEntity(119U);
    msg.setDestination(51519U);
    msg.setDestinationEntity(28U);
    msg.plan_ref = 3899576746U;
    msg.id.assign("HXQTIMEZVFVKNOS");
    msg.memento.assign("GJLCHAFCGBFYVZWNRPGJTACTENMSRFKGSOZPLPJCOWLFHLQKUBDZTSVGQUQQEZAORHEBVUYNPXAFUFAMWMRFOOIAQGMTJUPVKRZJLEPDLVJTCWRNUVGELMBEDHXKSSOJWSOBNCGCNMFOHNXZARDOEEDGSNX");
    msg.timeout = 24648U;
    msg.name.assign("VNQYKVESIPFFRTORTOKOFMWXBZNIATLDE");
    msg.custom.assign("OLDONIWXZLXCNDDCWRHYRFMXQILASVYKIHYZHIHZUQAFTJEWMYHSTDJOPGQCY");

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
    msg.setTimeStamp(0.056753751609407765);
    msg.setSource(54694U);
    msg.setSourceEntity(210U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 3413083380U;
    msg.id.assign("AAUHBHTUYHAANDCXMHYQJFCKDBTWOMLQHENPPZFVHGVNOHKBDBUWMRMRZQFEDC");
    msg.memento.assign("YWQNHYBIKORPMTMXRMTFMFALQFMQXOULCTKSTPGLRYZHJMJGRGXCBDSJEAFZIDSLONBTCSSQPTDLPGRYNMRUANXRHGUBFWGPESKSZNAUWZPRIZVXCMUUXCIKHPHKAHZXXLDFCWQOEVGVEIQQHDJTYAFKBCALKTNKUQPJWOURBEOYCMSWAXELVEZTVNNEWKYGDFBPYUCJYLVIULQCJVWHDQDJNJOOHOJOMVWYBKIGZWGSASRFIFDIBDVENBAZZE");
    msg.lat = 0.030128695825391016;
    msg.lon = 0.5433807911479379;
    msg.z = 0.7550218404187833;
    msg.z_units = 109U;
    msg.speed = 0.011785513725922958;
    msg.speed_units = 200U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2704692120761174;
    tmp_msg_0.y = 0.1451491275722242;
    tmp_msg_0.z = 0.40025499776435536;
    tmp_msg_0.t = 0.21341638704195942;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 14973U;
    tmp_msg_1.off_x = 0.6459104622546162;
    tmp_msg_1.off_y = 0.9225956853592848;
    tmp_msg_1.off_z = 0.11243151425404208;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7844741116078224;
    msg.custom.assign("GKPGVSMBKOKCPGJYOQDRINKJSNWTFMWUGBLANMHPLCLONBJSUDIEAWEGODQIMHYVCPZWIHOCJPDSTUQXMDDFQRQHOYBLSZWJMOEGSQBRCNRAZPCPHIJVHPZVYMNEPRWNCZFVGKTFOLQBJZXHLVNXZHIYGLUHBUWMKFSXVTODQMFLGCDEEQJBYGPELLJARCNVRXTUNAEJWDYFCYAAIDHWKRIAUFRRSEFWXKBTEZQZOUXKYUTTS");

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
    msg.setTimeStamp(0.4739982328344311);
    msg.setSource(25156U);
    msg.setSourceEntity(83U);
    msg.setDestination(12864U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 3317634282U;
    msg.id.assign("FXZQDHTOVWLUSUSPFGRNDUKSICJZVMDQDTCBYPYDCJFSLBNQGUOENAUJCNNNNDWSOYSWAWXRECHTXRZZLCOMUMAFTRZFJRETTXYGHAQCOPKKKPXEJGVWEWIOWMFTWSLAETQBLKHLZNLTCTDPOYXAGIBCYFJYAFVPBGCJQHIIHMIKWMHDHMEQGXILSDBMUKLFVPZJUHRGGYIPRONQORVNEWJJDXVEVMSMBSIPAUIQUYZOXYFHZRZKLPB");
    msg.memento.assign("BRRSNJQBZVQTBAKDOIHCFXVXWFVIQZVAAMMLUANGKXZWEKABRIUUTXYLSKUEJSMVRHLPLGLECCATWIHGKZOACVDVLYCABWMUSOELEVIXLNNPPHMUREOOWSWMDTUCBQMPBTBKYQLYYSYJPPQDFAGVROZXOXKK");
    msg.lat = 0.5575709252238886;
    msg.lon = 0.9856058712942288;
    msg.z = 0.5647642043907533;
    msg.z_units = 49U;
    msg.speed = 0.6781412362894131;
    msg.speed_units = 182U;
    msg.start_time = 0.9854400339759392;
    msg.custom.assign("QALYNSJMPUMXEFBDFARCDEXBTEJPUCHXATOYZHEIUXGVVWMIRJDYSNCVAEXMTWRXAPRZJIJBHRGOVDZBNBBNFZLJLDKUUNPSWSWCAPGLSQKGNLXQPHDUFGSGQHITOEHQZMJBEWOXCXWQNTKYTDTNKUEOIYLQVEIOGWSFVDYOIVKCVDMFAIPCYG");

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
    msg.setTimeStamp(0.5194757732485908);
    msg.setSource(65085U);
    msg.setSourceEntity(132U);
    msg.setDestination(9995U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 3431625016U;
    msg.id.assign("EGZJLRKRNTVXKAPSYWUXBLTOJLLZHWUKDUVHQWZFKXQWOAXHZ");
    msg.memento.assign("PLFQWZFRKFYIMRWOHTDXURYPCDZTJAEJTFSUABXCYFHVXINMQVAXHSDPDLGEAYWXOUVSBHKOVJUFKQASJCAAOMWKEBNLTSMWINFGWJUQORANABYEWGPNXPOMTBGXIDCWSMELJZCZVNYJJXOBZVRWOKVYLEDHOQURSPGCQFNACUETYLUUYTJHPMLDQRKJMUDELPFQVDWBNG");
    msg.lat = 0.5687448189122327;
    msg.lon = 0.8098866700466085;
    msg.z = 0.6157793605156973;
    msg.z_units = 161U;
    msg.speed = 0.6298617319856024;
    msg.speed_units = 127U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63498U;
    tmp_msg_0.off_x = 0.8956102495975594;
    tmp_msg_0.off_y = 0.8104868351354605;
    tmp_msg_0.off_z = 0.08277179088783704;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.014180543932169498;
    msg.custom.assign("FYLDHURGTLCKRMCYXBEGIVJXAXHTNPCBVLJXAFJZEKBULEHQWQIYQXKAMFYMCJGRXTLTZLUQUNXIUGOQEDUOVTVNADDNFDRSZUPMGJPPHAYJSFOSWMOZCNRWJCHRKFGOOGRVDCTKYNSURBWDUPVIZAMIEKSJLJJVGQHQFHWCKVXVZ");

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
    msg.setTimeStamp(0.7425992391104598);
    msg.setSource(56243U);
    msg.setSourceEntity(114U);
    msg.setDestination(15506U);
    msg.setDestinationEntity(50U);
    msg.vid = 40414U;
    msg.off_x = 0.3184284402119244;
    msg.off_y = 0.26545860254809794;
    msg.off_z = 0.4762417086890892;

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
    msg.setTimeStamp(0.24308945302933516);
    msg.setSource(17053U);
    msg.setSourceEntity(80U);
    msg.setDestination(20215U);
    msg.setDestinationEntity(182U);
    msg.vid = 35906U;
    msg.off_x = 0.7244914669585747;
    msg.off_y = 0.7674268060383567;
    msg.off_z = 0.7781947151966393;

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
    msg.setTimeStamp(0.407213159683947);
    msg.setSource(14756U);
    msg.setSourceEntity(28U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(109U);
    msg.vid = 64880U;
    msg.off_x = 0.1508323853641137;
    msg.off_y = 0.12662991716106942;
    msg.off_z = 0.21095503216764866;

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
    msg.setTimeStamp(0.6594726083928318);
    msg.setSource(37639U);
    msg.setSourceEntity(92U);
    msg.setDestination(46646U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.5411834892742514);
    msg.setSource(12843U);
    msg.setSourceEntity(131U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.10957949355201213);
    msg.setSource(1351U);
    msg.setSourceEntity(21U);
    msg.setDestination(14810U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.1152034298422836);
    msg.setSource(45750U);
    msg.setSourceEntity(101U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(20U);
    msg.mid = 5024U;

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
    msg.setTimeStamp(0.4570104534661421);
    msg.setSource(27121U);
    msg.setSourceEntity(27U);
    msg.setDestination(64546U);
    msg.setDestinationEntity(19U);
    msg.mid = 53939U;

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
    msg.setTimeStamp(0.001987320638627166);
    msg.setSource(528U);
    msg.setSourceEntity(163U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(246U);
    msg.mid = 56625U;

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
    msg.setTimeStamp(0.7612379850571643);
    msg.setSource(42762U);
    msg.setSourceEntity(123U);
    msg.setDestination(53418U);
    msg.setDestinationEntity(246U);
    msg.state = 100U;
    msg.eta = 53587U;
    msg.info.assign("LQNCTCGNOZAYUDEXINOPPWBIQREMPSPJAVUAZJWOAUVXPSIYGTPLJAGDDDDMFBDAIIEASSQJGLNOJVHKQLSOGDURKLBWLYUYDHHASWMXJCREUGRNOZCBBKPMYFTRPDDQVCBVGKWHQWZCMMPQINRLEKTZHXTKQJCTLFMISIBEIRYVXZEFAVBWYJXHKOLFYGCHSBUHNHEGTVCZWFHTUFQRVFZUWUCXBKRFTXOMNSNX");

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
    msg.setTimeStamp(0.8500610114731163);
    msg.setSource(35847U);
    msg.setSourceEntity(233U);
    msg.setDestination(3691U);
    msg.setDestinationEntity(234U);
    msg.state = 158U;
    msg.eta = 56795U;
    msg.info.assign("ZGSVUTYRULEJQFVHSMMEWQYVLXFRTJOSBKROMFRQDZZOWTJQWACRACNBMIJETJYSIUGEBRFNKXUNALFIE");

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
    msg.setTimeStamp(0.3558102551660062);
    msg.setSource(48065U);
    msg.setSourceEntity(200U);
    msg.setDestination(36839U);
    msg.setDestinationEntity(161U);
    msg.state = 125U;
    msg.eta = 48617U;
    msg.info.assign("VRYTSFXFLUPQOYNWSAXTESVSOALHIGFNHPKDXBVXTPHUZIYCDLZHZXXJCHIFJLEBSFEBUFMUWTBRKCJWTQQTADRKGGABNVKGEAYZCROWKPXRSVGJUMMMSOWTDCSGYYRBKICLUFQEIQULYFCPDODWJUHIYNSNLVAODAKTAHWOJIPTHWTFJAGZPZMRBQZKHVFLUQPZZQGWOQVVPMCGSDOMXKNGQCBR");

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
    msg.setTimeStamp(0.82065885940865);
    msg.setSource(44402U);
    msg.setSourceEntity(112U);
    msg.setDestination(54582U);
    msg.setDestinationEntity(13U);
    msg.plan_ref = 2244457717U;
    msg.id.assign("MAJHLQYQQXANIBFRRSQOOUAEHZQSRFAUWZTBHVPLKWPXGBEJKLVG");
    msg.memento.assign("EZOUODLGYTQXHUVSHIQQIJZPLLZEPRXDXRFYCZUNAYFBULCAQSQHKWJCYGMYIELFDUJMIVQTJJRBNDMVWMNWEVGWYUORAYSEIRGCMEOYZNTFHJLCUYEIZRHBVBCLVAOPWYRNSELITPRLAHTMODKGSPGXJKUSTPPFSBFKBKQHKXXFSTRMZDVFZCOMUJACFTKOZJWGCEBVQNCBNJFPBVNOAIILQQAMRSDEINPWTGKHSXKAHMO");
    msg.system = 59272U;
    msg.duration = 7693U;
    msg.speed = 0.6146574336766591;
    msg.speed_units = 216U;
    msg.x = 0.6730682358497113;
    msg.y = 0.3303831991452846;
    msg.z = 0.6599951298950156;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.1507210506505633);
    msg.setSource(30029U);
    msg.setSourceEntity(11U);
    msg.setDestination(50672U);
    msg.setDestinationEntity(209U);
    msg.plan_ref = 1569541779U;
    msg.id.assign("IWYGBAKITQMBRLAVRCRTUPRMSYGSJJUSUFLBITQOXHBWYSKHJMKZNILEJDWSQXFGXYIQGRFZLMLTTAZQUOEPWCOGRGQXFVDHLIHYQBAVITUNZNZTLDYGKDDZKDOBVPTCAKYDGNIVJPCOAAMUMPRXDCEWVQFHEFCTNGDHVKFVMWECHOHCOLIWMTNWMBNAPKEQYOEXJDZSH");
    msg.memento.assign("QQWXFIAYIJCPVLWWTNGTKST");
    msg.system = 47372U;
    msg.duration = 25595U;
    msg.speed = 0.4895009305985668;
    msg.speed_units = 167U;
    msg.x = 0.6235563945430507;
    msg.y = 0.506047184537657;
    msg.z = 0.4894905833391371;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.5940685890999274);
    msg.setSource(23671U);
    msg.setSourceEntity(98U);
    msg.setDestination(6798U);
    msg.setDestinationEntity(216U);
    msg.plan_ref = 3848335808U;
    msg.id.assign("BTZZHIJOUQGRMAQNGCCLFVTUKYJRRUJDBYYWDMNASSWTUCPQAOQHOFGHLGRLAHQKNVKXRELQCMEVBIYRJSZWNUGPBNJTDAPRZBHGEUZXYBKFZKPOHZUMFQKXEPZKZEPLOSWAXWCPXVFLCBDWDIOVQJYHGLHJSYMNIBCSIJNWT");
    msg.memento.assign("LEWAULMXGMDPYCNFMNZEBLRCOHIUUQJZDGTUFMLGSJHQRPMXYKKJJLXHKVAUMICNPZEXVVFUDIQHKBXNCGQZBOPOZLTTIMFBSIRRSAVFQNJSHESSOTBBNGUDOCYKHLWGRJPDFYDJXOJQPTXVHAGYDISHAWNGKOBQVPMEQYVPDVRWIAWQTWWERWBZBENBVIFOGCUZLUXCTME");
    msg.system = 12077U;
    msg.duration = 64136U;
    msg.speed = 0.6245395886134587;
    msg.speed_units = 238U;
    msg.x = 0.259413340483467;
    msg.y = 0.23109054256168526;
    msg.z = 0.9557528800780192;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.31265447484195696);
    msg.setSource(7612U);
    msg.setSourceEntity(150U);
    msg.setDestination(56045U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 4092464159U;
    msg.id.assign("YJQFAKQSOBVUPETOGNAZFBETICXTJPUCMIXVDLPPVGZQIEZKLKGPZXGNFDKBDGQZECHFRNMXAWHQOUMWAULNMRDENYYLBIOTLJOEJDBYSCMLACESVPMKSIDGQGTNLIIKJFVYDAHBVRBDFRYTTURKWMHHPXNSXMWXEGDJCJURWALQKYZDUZSWUJWLCRAMKPVSQTFISPRQVGSRWQJIBBHZTEATWHZUFCYYWCOGHVAJHYESPRNNMFOXLICHOOXKF");
    msg.memento.assign("VILZBSEGEPXBWNDGLSLKQJHHPNX");
    msg.lat = 0.6653237104225084;
    msg.lon = 0.8928059096345338;
    msg.speed = 0.399231738741625;
    msg.speed_units = 132U;
    msg.duration = 56807U;
    msg.sys_a = 41106U;
    msg.sys_b = 14993U;
    msg.move_threshold = 0.5281988260850164;

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
    msg.setTimeStamp(0.5879387076872653);
    msg.setSource(11954U);
    msg.setSourceEntity(85U);
    msg.setDestination(3766U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 638261167U;
    msg.id.assign("UMRWVHCLEDSNVLMJCWCASKJDNUPUYPGGWZZQBSEUOISKUYMMRTBUFMOKQXAOIGVWNBOHZULMFAISTIHCBAYGALBXFGEYOZXWGFNBSFATXXCLRDKSPVPZHFRLYQPEGZHQTOHNWBYPCW");
    msg.memento.assign("RBVTRFQRHHHYYUBBSHJQTJDVPFYJNYXFWBICTMIDOWLGUQBISUURPDUYDDXDSLFVQMSNEMHCXWGEAJSUYKIOXRMMOOMLQPCGIYRAWBFTAEISWKKPZVFQVVGRYAEERNVLIOQKIZTUPCVGXPDESDCUFLOBKPBOTMWOHZEOWAGSRCCNZNFCKAHTHJMSLMZHXJAJKDZOBTTRUNK");
    msg.lat = 0.4324429111496737;
    msg.lon = 0.4809631817021125;
    msg.speed = 0.5631802405082401;
    msg.speed_units = 204U;
    msg.duration = 62445U;
    msg.sys_a = 9251U;
    msg.sys_b = 28352U;
    msg.move_threshold = 0.3767341258966349;

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
    msg.setTimeStamp(0.43552964619423773);
    msg.setSource(30195U);
    msg.setSourceEntity(199U);
    msg.setDestination(21121U);
    msg.setDestinationEntity(226U);
    msg.plan_ref = 844017318U;
    msg.id.assign("ZWTHHMUJAGQCJPLVQSGOVZNPHHHIPDYQWOEDPYXDQDECXTWXNCJXXLYVGMTVWKHHURUSKUPLEYBMEDVJGPXKLUNYBOBAXCVRPGVIBSYKPOZQJJI");
    msg.memento.assign("GEUXOJOLPOFNKBBBIFACXPVRHSAPKPRCGWMXGLEMPESQYYJOVIJATKRZTEWSXWGFFCH");
    msg.lat = 0.5248043398790336;
    msg.lon = 0.7581382063585375;
    msg.speed = 0.3289172952679693;
    msg.speed_units = 117U;
    msg.duration = 27192U;
    msg.sys_a = 49844U;
    msg.sys_b = 32763U;
    msg.move_threshold = 0.588353795769788;

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
    msg.setTimeStamp(0.14238838139773435);
    msg.setSource(33987U);
    msg.setSourceEntity(252U);
    msg.setDestination(4629U);
    msg.setDestinationEntity(96U);
    msg.plan_ref = 3325536257U;
    msg.id.assign("JSMNXCTGZUDYMILWUOSYMIKNGKCPRXDJKDZULLOQDYZOYTIETHLBLJAJJXDIUSJZIAPBBVRPSWAYWYSNVCQPUHOUNVEAGNMZSKGFSMTAHBGTUSBDFHJBUADYYDFQKORTLAPFGZFFWQKELVHQRDFV");
    msg.memento.assign("APQOMWVMYMFMPFCOGZSGZLSMISOMQCIRNJKKAYRXGIBNGWDVLRTZBJVANUCFULVQPHLCIQVOEYQIDXRNNDRJXNXCFHZZBBEFEGMUPTTAEPPCJXPR");
    msg.lat = 0.5051775364103699;
    msg.lon = 0.3232694181229364;
    msg.z = 0.32705554735015196;
    msg.z_units = 51U;
    msg.speed = 0.2972834546994376;
    msg.speed_units = 160U;
    msg.custom.assign("VXDEAJXPWRQXSQBGLRTSKOPHUETAUOZHFNCIEVJLYWDPCZRMZMCEZBYGRJFDHBZQICOYBNNTUWVGXRTDDNKGHJUUUIOXIQSPSSXTFKHWHMVBAXVMGNDGLKABZQSKVUBIFYZXVWOHPKOQCPOCONJZPOYIYWJNWWYCYPLLRKRJMRCMVIUFPFTTUPALCZFNTOEAXDIQIRHJBSHXNKGGVAIWQLSQKJAWEMYGSDUE");

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
    msg.setTimeStamp(0.2998079967350462);
    msg.setSource(40136U);
    msg.setSourceEntity(131U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(31U);
    msg.plan_ref = 1703422453U;
    msg.id.assign("HPPAAIKSMGAYIHHWVRRJHGJAFOPEXRJLNTNMYCRRMBNUSBBWTRLWNLZQCPCZPVFENTJDQOCEUBKWQXTLYXYGUUDMREGEPHWMOUVWOJFKGBVSHWJDLDQKXSZSUGLMTFCITODAVAIXGNASXBYGOVYOICIOHQCNJNZQOQIDLAVKIEKSVFZTZKDFFZHQDPYLUMEJPAUMXINMQJFSYXWYBKQC");
    msg.memento.assign("QFJKPQOMEVFLVBAWCHEFZMRPTRBBSFQRMQJHHTEQEUIWFAXUFVSYWMBXJKTCSROGYAHGBBZLVGFPKJHS");
    msg.lat = 0.13220259239677867;
    msg.lon = 0.7611090491293915;
    msg.z = 0.5450738019404326;
    msg.z_units = 89U;
    msg.speed = 0.8940239390690726;
    msg.speed_units = 151U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38761112699694966;
    tmp_msg_0.lon = 0.9479576982259014;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RGDOGNXLFQURSBMRWQZKRQFSGZLO");

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
    msg.setTimeStamp(0.24176342756036306);
    msg.setSource(37626U);
    msg.setSourceEntity(238U);
    msg.setDestination(48470U);
    msg.setDestinationEntity(4U);
    msg.plan_ref = 1114236798U;
    msg.id.assign("ALOLRPBZYLUPCETKYQCECPZOZSHZDPLRNPIITFRJIJBGDT");
    msg.memento.assign("IDIENVWPOFWAHJNBXKANKKCDDAGFZTZGNUIGOHOIXYWBOLALMMJFMFGSJFXQIOAEHSPGSYEOVUNLFXBNCPEXWULAGLKJEVKJCVNYLRDPOGKUZWHYHQBPTRQ");
    msg.lat = 0.40554450260940933;
    msg.lon = 0.5204107607762264;
    msg.z = 0.5572536935764513;
    msg.z_units = 217U;
    msg.speed = 0.5854271830669918;
    msg.speed_units = 155U;
    msg.custom.assign("VBHLYYOWUAWQHFNAEJOUYYJMVNNICQCZUSXQJPARQISVQVBNKBLMPPXIGYSYPXBAOFDFKBVFSZTOANHQGZSETOHGJMFKCKEUROGXEQICPBMKGKTWNAOWATXDESCGOCDZIDDRZLHJDDENGDWTWKGQHKRJRAQQLRRKBJU");

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
    msg.setTimeStamp(0.926829144324682);
    msg.setSource(1062U);
    msg.setSourceEntity(166U);
    msg.setDestination(56329U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.6024557935626129;
    msg.lon = 0.1510523087438067;

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
    msg.setTimeStamp(0.021737163114642022);
    msg.setSource(25472U);
    msg.setSourceEntity(87U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.17877308946205062;
    msg.lon = 0.5648128996834736;

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
    msg.setTimeStamp(0.6198741773910333);
    msg.setSource(53197U);
    msg.setSourceEntity(176U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.2951110530054961;
    msg.lon = 0.6018704139247126;

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
    msg.setTimeStamp(0.8294693033408562);
    msg.setSource(50731U);
    msg.setSourceEntity(44U);
    msg.setDestination(51850U);
    msg.setDestinationEntity(141U);
    msg.plan_ref = 1543229636U;
    msg.id.assign("MJGZIZMTQKWFAYHDRUMRJJUFZPTXSWKHQTZLNVSUDBZWUSSOQEHVNUAPKNCNWLVHAZGJRDQVYYOTQGJNFGLFQWXOQCNYHNPDIPXOIJOEYYIPVRHOISIBUGCGRSAOMJCDNEFMXMTZHFDWTAMVBR");
    msg.memento.assign("QUEMWXBAIKBESNREWQWOCPCVICHNHXFFCYWFKJQDLZQJXHULNTJRSAPVZDHQIKSKBBBRMWXGRFNTEGWLPRYVLZFHGMJNTHZOIZUJVEUSGVIS");
    msg.timeout = 47291U;
    msg.lat = 0.1377461485335294;
    msg.lon = 0.5298816851435164;
    msg.z = 0.3223438621472924;
    msg.z_units = 78U;
    msg.pitch = 0.9117359815035982;
    msg.amplitude = 0.9291859465833795;
    msg.duration = 45673U;
    msg.speed = 0.7748286043541993;
    msg.speed_units = 20U;
    msg.radius = 0.8827943289226421;
    msg.direction = 248U;
    msg.custom.assign("BOAPGPQLDADOXNYKZRGGDXVBADRXPSOEDVIXKUXYEEGHPXBESRHSCCAYEWOJSEIPLAPUNHMKJSOZUAVFYJPKGBQMSTTGLJHKCNEZIJCSNMUXRMPLMHJFAQWWZLCFGNANRCIAHLKFWBTKNBUVIFIIUR");

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
    msg.setTimeStamp(0.31246411510541217);
    msg.setSource(63771U);
    msg.setSourceEntity(13U);
    msg.setDestination(58795U);
    msg.setDestinationEntity(93U);
    msg.plan_ref = 986624261U;
    msg.id.assign("QDHGYAEUFWJRQXBXNVIZFPNHMJAWSJWURXPUDOSSQQPVGWHGYCSKORHQYYTTNTQDV");
    msg.memento.assign("PMEADBLNJRVCOCKLNXFANZJWERHPEUHBHTLRICOLFGLYPDJWUDGLSMQYWPIKGLCOFCVOZOKPJUFPVNXUJDZIIHBZBZKMEEDUCQKBHSGTNXVRQNYRSMGRZFEDUYIJATIADGWRQNOZRNMM");
    msg.timeout = 2750U;
    msg.lat = 0.9533243814718861;
    msg.lon = 0.7876775546203617;
    msg.z = 0.8226841560336956;
    msg.z_units = 200U;
    msg.pitch = 0.361011016654599;
    msg.amplitude = 0.2798080112655632;
    msg.duration = 22073U;
    msg.speed = 0.6542640752367029;
    msg.speed_units = 120U;
    msg.radius = 0.910779203893019;
    msg.direction = 173U;
    msg.custom.assign("DPLAGBHGAGJWKAYLIUCHKORCOREEKMLILTZWDCOFTUOTLKXBYMPXMPTXBVUCZSPXUUNIOSGSUBWTRAGWJXFOMAYKMCCJNNQLUYYNWOYOHABIUNESZQWNRACXIDVFYSFEFEHFFZNBOGMBIXLSEJLHVDPYLXKRASISTPTJYETWODHQJ");

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
    msg.setTimeStamp(0.40394512329748);
    msg.setSource(37544U);
    msg.setSourceEntity(52U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(128U);
    msg.plan_ref = 106892424U;
    msg.id.assign("NJBUEEGRXZYMWAAKSYLIUBHNTFQCPNFZVPBCVGVJOWGIGISHMXPPKRDDKYQJFZJIQTCUMSPOTLVJXKUAXVOZSFHUYCTWHKYFFXXMZAEOODNNBUTPCNBTDCWBMMUAAQLBXJLRRLENGHRFROIJORLDOCFJEDDTMFGLXDIPEEJHLAWYVKXLYAVGYZRFPQUESSQNKEXORMACSHIBKHISKDGTWVMHOGZHUYIQLPVCSWBWQQVUNRWPKBZIAWZNGM");
    msg.memento.assign("ZSEYIOATRBURJGBO");
    msg.timeout = 25517U;
    msg.lat = 0.5267145894971558;
    msg.lon = 0.46586596971738203;
    msg.z = 0.981382236013197;
    msg.z_units = 162U;
    msg.pitch = 0.07988081729166374;
    msg.amplitude = 0.5120125666418793;
    msg.duration = 1834U;
    msg.speed = 0.0462620022087179;
    msg.speed_units = 21U;
    msg.radius = 0.3583607206372361;
    msg.direction = 224U;
    msg.custom.assign("WVXSMXUBNQCKAIKZXQBIIVBZNREDUASNGEXCZARPVWB");

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
    msg.setTimeStamp(0.8637752064598956);
    msg.setSource(56693U);
    msg.setSourceEntity(29U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("KXUGPQTTEDYUIYIVMBTMFIIGOLWSNAHDOLYPVISMYJCOKRAKFKJOTHSPDKXWEPFOOFXXGCGXZDHGOP");
    msg.reference_frame = 15U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16654U;
    tmp_msg_0.off_x = 0.12745877394226546;
    tmp_msg_0.off_y = 0.7663549474165104;
    tmp_msg_0.off_z = 0.7128147298552706;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ANLQOILEYFACQSHUXGGORCGDHTLGWQDTZYJRQWJJRGSTKWXJUXMVVAMSCCEIUAJVCOBGDDYYEITUMLAPKYZDNJHXZIYMCZAJHKUKOPMKLWFPIFUFBFUTEXRVEATPVCKIJLBSTNINBYYLQOSQTZFOIFBRGMKCONSDESDZWDQFFIBXNXAKVWVMYIVPQHNNRBNXOEOEQHQYBNPJ");

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
    msg.setTimeStamp(0.8747287975528644);
    msg.setSource(16232U);
    msg.setSourceEntity(145U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("QUPOIGBMBFFIYFJZWFDYMBCSGKVLONPOARTGNKAKMFZZVVCRWHQCSQCTNXMRATYSURIKVRJDGOHELVAZBSPSOHZUKALXPKMUXERMCIADXJZGUYLYXVTBUIBMDNBQHVQTHESPJOKQDEPLEMCEIIGAXBXLNXIHRNADTHMUYUWLFSQHLTRWVIKCMKPAGVCEBOKUHYPFZSYOJUHFOLLNVWEEGPZTJ");
    msg.reference_frame = 81U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50124U;
    tmp_msg_0.off_x = 0.08820043883605244;
    tmp_msg_0.off_y = 0.19262685982223593;
    tmp_msg_0.off_z = 0.355862256390853;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QQJOMKQYLCPGAWHKAINCHNLHIKXRIZJGPVPGTNVNWUKJDCRTVFJBMDDYUZKPRJIZYEGHVXSOGZBBAZDMQIAXNXGQSUBYMLYGDRSCOKSYUQHWUEYABPBZFVKVPWXAWOPEFSCEHJOUKGTIQCSALMULANCPFERNVXDDPOLYLTIFGXFBTUAFVWEMFSXSTVMJBNOODOZIRZHTQFEOCBHCTHLKWBYMUJDEFRMUZSEHXZQGVJT");

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
    msg.setTimeStamp(0.6619392855596586);
    msg.setSource(13003U);
    msg.setSourceEntity(112U);
    msg.setDestination(36028U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("AHGTSVTBHTSPHEJDRWPLBXDHYVIQLOHP");
    msg.reference_frame = 230U;
    msg.custom.assign("SGTJORXNCEZCMGJSSRNTK");

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
    msg.setTimeStamp(0.18119935483900507);
    msg.setSource(12747U);
    msg.setSourceEntity(234U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(99U);
    msg.plan_ref = 3346901294U;
    msg.id.assign("JCIZUUSKBSF");
    msg.memento.assign("SNCYWSVAMYCNGZTLVZRVMOCFWIGEXLUBMCFRFZRFMQQMWFGLNZDVXTHTUHQAFUFKXIQWYXRKEMSHBWRPPZKTRLXTCKOAOPFEOWJUQPVLBLZMYXCLLHFURJDUKVUQTPGCFONISEBBEQJHCPCKNJTBOJPROSBOCBWYHPEDWIHZNUXMGIDJXVTVDAHEKXAYEITI");
    msg.group_name.assign("AUQQDAOHSJYERWSDPRNYMYMJOXVJSDPTZPIQBYKCNVNOIGGZBSLWAWZKRNOBGFSCRZQPUEHIX");
    msg.formation_name.assign("QSHNVOJAKVZXBQAFOIYHEXIQYAANRFNPYWGUORDVNFYPCHQTTM");
    msg.plan_id.assign("RFRYYNDXPMGFPLDVYMJZOEPTIKCTSMXLDGHZLFJW");
    msg.description.assign("ICTABRFPFVULBBSMKRDEVHTWMOHGIKYTCVUCMFSACYYQPUSIVPVYEIBMWLIWTQYXELUOVAZMNYJEERAIUJWJRTIDFLZKNTQZVBFGYAJJJDGWPRCDQJBZGKNCTXDPUJZAGFODSPMLPDMYSWUXHNOOANFXVUBWFULKLZAORXIZBKNQHODELTAZ");
    msg.leader_speed = 0.9543145892416879;
    msg.leader_bank_lim = 0.8299366437150315;
    msg.pos_sim_err_lim = 0.46605211643939604;
    msg.pos_sim_err_wrn = 0.34725653165497294;
    msg.pos_sim_err_timeout = 62094U;
    msg.converg_max = 0.8546613268137522;
    msg.converg_timeout = 48267U;
    msg.comms_timeout = 27931U;
    msg.turb_lim = 0.6574368345350231;
    msg.custom.assign("OEXQUFQQHBBDUVWLVLGTXIDQJENJNEFBKVOWRRPZVMGTVOZLKEFOIARNTPPJPJBXMCCOCITLHCLDIFNIHIMPTOVDSKARWSRRROUTANGHSTBMCQZBMNIXWLIFQXIPWUKFJZCFYYTWWZGXMVEHZQANPSQVZJVRUGZUKEYUCBUSLQYOPXYHLAJMQKGYCKAZKDDFIAXJDRLHGNCSHVDF");

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
    msg.setTimeStamp(0.4834793278746886);
    msg.setSource(14855U);
    msg.setSourceEntity(249U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 3274061415U;
    msg.id.assign("REXINXDHHAHJPTBAIHWVMHOKWXLMSBBLRFOPEOUSUMNYXIIBIXLOZMWLJCIYRAQRKVUQOYNPCNSBUSJMARHWDTMLVGXDGJVAE");
    msg.memento.assign("FMWJALNIQTWWNNNCYPIMEAWLPABUTPVJFZOKBFJRIZXLKTXAQVXQNHEIPATCMBCDLRUCVJKVKGEFORPBDAZXFEIRLGPGTORCQWKDDTWWJYHNJZMLHJFCIENMTQPJMXCWDHYXQGXSWMGKBKKBOEXYFUZVBOGKRYHPXGPKBOBPMLDNQSYYGJSFDHOACSYZDRYUIOULTVONG");
    msg.group_name.assign("KAILKFPNVJRWIPWVBPQBIIHLKGYOFQTJJCSICCDBUCSOVLAARJMNURMLBWZBEEEARCZVWRDHODDBMYJMVTZBEXPTXAWTGTJYPTLAURHWHKWMSGXLKNRGVPMSLFNJZCYIXKQUSNLGYXDSGAQYWMASQBBIP");
    msg.formation_name.assign("HTIQQYRVFAGPKDYADGBVOFNLRJMQJKOGEIWIHEMHGDLTLKXYUJNWNCLMUOEHVLMVNNPDYNTMIXEXTYAFYBINYUMZPPLCXJSFBRQFDNETQIDGASGVQSOMSCUVKSMKSRUTPSZXQDAZZMTOCRXKRMXFAJEFPCIAGQIEUOZDKKBURAETNGVSKJCLZCAEUHECBQXXJVHHJBUQLVRUWGZYDROWOLIFYZHSRVXGOWCC");
    msg.plan_id.assign("MSUQFSRHGMYIFUJDIOGKOCNBKNEINGUUMGXNRPVTDZSQAHOXUJIAGYVZLHJUBGWYYOQFSRXRDTPQBKMSPEJUTAFELDJKPDAHAUQEWIPSXLOTPOAARWCBYJEZRWFHNVMFNWLTMPHMYEFKBRIYZYJTUEGHWFTFICOBPPVUWBBXIEWXCCGQLXLSZXJIVBRVTSCIQCZLZZASQMXLCVDYCELZMANWLSPOJDTNG");
    msg.description.assign("ZWVTZQKCGPCGHAJNQJVRHAMPIUCTPPALZVUEZNBVJJSHWVSTDVGKEHQVXFDYXODIXHDULMPZGHFJOIYHXSTDKFSUFGSUAMNXUOWKREPYPYOCMBWUWMHNFLOCYQIQBCBAHZJRECMJJBMETFKCLATQVQVNCLTLDHNYBWZNFEIWDQIKYXYEENTRAOLFDGXIXRRTOFQSDNLURAOVKLI");
    msg.leader_speed = 0.8683303878912842;
    msg.leader_bank_lim = 0.1697667609297071;
    msg.pos_sim_err_lim = 0.9265991711356942;
    msg.pos_sim_err_wrn = 0.31722818658418916;
    msg.pos_sim_err_timeout = 59683U;
    msg.converg_max = 0.7081425060646246;
    msg.converg_timeout = 30849U;
    msg.comms_timeout = 1103U;
    msg.turb_lim = 0.47791506309830156;
    msg.custom.assign("HXUVOBMSXXPLFHCBFEWAAVUZKXPXTSZZOOPRJIUBAHJBKTGBXHWNEBTVLWPVAERRWYTOSNTFSMGVXIDACRHQMDSGJKNYXDYWGWDIUNPQIIBYLNDJSZRHKIIQUYJEVCTVMDMNPUIOMSJQWKZ");

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
    msg.setTimeStamp(0.9459907732416191);
    msg.setSource(23943U);
    msg.setSourceEntity(179U);
    msg.setDestination(49825U);
    msg.setDestinationEntity(34U);
    msg.plan_ref = 3675021212U;
    msg.id.assign("YIWMBLXSHRNWSNU");
    msg.memento.assign("VUQUBBNZXHIRZASEKZQCQOALERTPPCWSVZYNURPHJIMIRHLQCZNTHWJFFTGTGJFZUFQNARDCKQLLZWNYFXAYTPGLDKHONM");
    msg.group_name.assign("CDFEUHPHPUPQGAYFPNQKDOMAVLJSWRCOQUKHIKNBWORMFLJKWUPOMNUGLQDETESIYPGXOWVYURWZLDQBEHRAWVJPJXSHDNXVPSQMGDUBIXZKAIARKANPTMGMPGYUAZWMWKIMSFFZNSZSYCECYDXNCIBNVLETBDTXRVDJUFBLXSTXXFVEYKKZQJQCREZRCVHCWKBJ");
    msg.formation_name.assign("YNXHVWRDMAPSAHPQWITBJNTHOSAOBAHXINYTCFOMKVOFJJGWCCAGQTZDEWIJWWHRYPLKTTYZUGODKKTKHYNKXDQILRRZUVDIFCZENBIGEMIEYLTQEUFMFEGMWZMQNNXBCVTUQVUSSQOMRFFWXKWZYILPUBDDITUGYAPFOI");
    msg.plan_id.assign("EFVYKXHNISZHALDYSGOQEAZFJSNMHEDAYJCFDLZBXMXYRGECJXXCFOIIQKULWWLXZQXBVCDJCHITTRTUZWJBVBSMHVXPHLNNYPBHIPCMMWJBQYVILSODYAMHSKFTOWTHQVERISEBETUBLFNQLWGRWOGTJYVZPVZWJBPPGPPDOHTUAIKLAKFZQNRZCXLDUMGROWGSEKORDOWPCTNRMFNUDXEKQVAYIJCYDAUFATGKPQU");
    msg.description.assign("HITMGPCDNAWRIAHJRDZVIJNUAWKMELYJKHEOT");
    msg.leader_speed = 0.024820557363420592;
    msg.leader_bank_lim = 0.0667586600159884;
    msg.pos_sim_err_lim = 0.6284515912227541;
    msg.pos_sim_err_wrn = 0.9103159677563735;
    msg.pos_sim_err_timeout = 17544U;
    msg.converg_max = 0.999216548651094;
    msg.converg_timeout = 27535U;
    msg.comms_timeout = 15527U;
    msg.turb_lim = 0.15535242764158452;
    msg.custom.assign("ZRURRHYDKTRUYLJHJLSWKNLNYKWIADXMWRPUNRSNPKLZZXEWPCUXQKFXJOGSNALAIYUBRZMIMHCREBLSFXOVDOCYFDGRQPMOTKTHETYHDPCIYQGIEBXAWCNSTGYEANVEAIBVDQJWXATEIHEVFBVXWEFVO");

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
    msg.setTimeStamp(0.04024129325815007);
    msg.setSource(52163U);
    msg.setSourceEntity(172U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(202U);
    msg.plan_ref = 2322274932U;
    msg.id.assign("VEUJNPOMGZRSWAHTFRKXJTEHAVODFWJBJJHIVFAKRHMRXOPZWXPBNFFXYOBCDLVCRZQWOZQUIAZXQVSFBTBICIDKLETTESNMBQXGIOLPIPGGWHWHYPZMFTPSJQMG");
    msg.memento.assign("DCXAOKHTASXKMLUHKBVFMOXQAMVWHVIJNEYXBRKCXODTRFCEHTBIGCIYUZFTMBGSEIDFKORPMEKZSHZZHVSOPRKRDPAQXHLGJTNEARLDCIWECZUXBGWQGZJBDNKMTULFQXDMJFNPQISLZMYUOUTHOPEQYYYGCWRPAGQRVSJNNJPGVOIPJULBQFQPEUCOXWYLLRBDSYSKGSIUWWITZLEWMYHDJFVNTFSVNNM");
    msg.control_src = 6223U;
    msg.control_ent = 125U;
    msg.timeout = 0.3381923070772467;
    msg.loiter_radius = 0.2335883892379036;
    msg.altitude_interval = 0.6849385489099267;

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
    msg.setTimeStamp(0.5499300409537434);
    msg.setSource(19730U);
    msg.setSourceEntity(12U);
    msg.setDestination(54313U);
    msg.setDestinationEntity(141U);
    msg.plan_ref = 966573404U;
    msg.id.assign("UEFNTDHLCATLXFHALYQVJWJRFBCAVDBCBZMGTPIVPPESJXGTLIGKRGUNZMHQPTQZXKQFUWXFXBSMYDGMKWNGUCSJRRPMADKILZPVLIMCJTIZNOORNUFBVZWVFORVTXCW");
    msg.memento.assign("SBIODEVYQOHVLNOEXYFWWBGTQBYKEZKNYTRVMUAGWSTXLKLOYYZFLXTIBJJBHHEWVQSSZQFMAHIQNLWFECWAJATZOSURBSXMWGSHNRVKCIZEGTBAULCBPJHKMPJQMNGSPNQPRRPCLJAUZRNFIEDDDIVWCRJHAZUDKUCHRDKXWWJVMXNXHHCOSMXZAPSGURZQEIVFTMYJGKRUFNNPKOYCPDTVQ");
    msg.control_src = 34739U;
    msg.control_ent = 251U;
    msg.timeout = 0.6538995473348392;
    msg.loiter_radius = 0.9411348354815886;
    msg.altitude_interval = 0.9941466349624826;

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
    msg.setTimeStamp(0.6657368637614656);
    msg.setSource(4582U);
    msg.setSourceEntity(143U);
    msg.setDestination(63254U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 4113978977U;
    msg.id.assign("WEYJZVJUJHLVZHSCLOIPNTUHIWBAYQFDXDDQNXCPXSEOGSFKULRQRVUFKQHHNPBSOSANWGKYYQRKWEXEHGIAOOVTTSQLRCRJMZJHKWXDHOZCTIAPTCBEMAPNZSOHHVEVFCNYXBFDMTDPLKXXZMSYWMYUJFCBZKJNIATMQYBEUUCMFJBRGIQBDRGBZOVFCULMNTYLSKVWPDLN");
    msg.memento.assign("ZCZOXRCUPIJEBLFOPCCCTZASKKSDZOSRIJWVBGWSZWPQASORFIMRVLHRNWPNXHJDJMZAAWDQOQUFXGBQIGFTXRMEIIXPJNANUBPCKVYMNMYEBDOLBNLPKSYQNEXHMLWQHUCECRTFHKZUWTVJLLAPEHWKLYOFZMYDOVQXCGXSZYKGUXTLYMKJGFBOGYTANUEVEDIRWTYVWKTRALHVNSPCEAIVDENDMXPUQGD");
    msg.control_src = 28954U;
    msg.control_ent = 220U;
    msg.timeout = 0.9716174696575148;
    msg.loiter_radius = 0.9595947017134898;
    msg.altitude_interval = 0.07098656234964973;

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
    msg.setTimeStamp(0.4000978387022025);
    msg.setSource(32033U);
    msg.setSourceEntity(82U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(100U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9231684300663913;
    tmp_msg_0.speed_units = 94U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9809715259532463;
    tmp_msg_1.z_units = 184U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10643416065904221;
    msg.lon = 0.5017907233207509;
    msg.radius = 0.9839848002072322;

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
    msg.setTimeStamp(0.7033060699102759);
    msg.setSource(34516U);
    msg.setSourceEntity(246U);
    msg.setDestination(19956U);
    msg.setDestinationEntity(23U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5843202243136623;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.42831658772224523;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.24626750983283918;
    msg.lon = 0.7254978856735931;
    msg.radius = 0.7893122900571227;

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
    msg.setTimeStamp(0.1248253415472671);
    msg.setSource(46657U);
    msg.setSourceEntity(201U);
    msg.setDestination(28429U);
    msg.setDestinationEntity(179U);
    msg.flags = 247U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8297996065679487;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8196686876947971;
    tmp_msg_1.z_units = 55U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.23819246348565004;
    msg.lon = 0.6284703301602053;
    msg.radius = 0.0037381469048556326;

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
    msg.setTimeStamp(0.3851297480216702);
    msg.setSource(44407U);
    msg.setSourceEntity(141U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(166U);
    msg.control_src = 59560U;
    msg.control_ent = 105U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 109U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9395492400883441;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3714523781265884;
    tmp_tmp_msg_0_1.z_units = 36U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7246543636558277;
    tmp_msg_0.lon = 0.14528962996269323;
    tmp_msg_0.radius = 0.8200750834310757;
    msg.reference.set(tmp_msg_0);
    msg.state = 193U;
    msg.proximity = 53U;

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
    msg.setTimeStamp(0.5833975873264283);
    msg.setSource(30075U);
    msg.setSourceEntity(217U);
    msg.setDestination(27970U);
    msg.setDestinationEntity(226U);
    msg.control_src = 41788U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 45U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1038397485026642;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7807292948926665;
    tmp_tmp_msg_0_1.z_units = 218U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5156470908319241;
    tmp_msg_0.lon = 0.8896632263098372;
    tmp_msg_0.radius = 0.41640479975853495;
    msg.reference.set(tmp_msg_0);
    msg.state = 168U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.5779587614113502);
    msg.setSource(27913U);
    msg.setSourceEntity(137U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(37U);
    msg.control_src = 24237U;
    msg.control_ent = 168U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 210U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.08028952654601362;
    tmp_tmp_msg_0_0.speed_units = 108U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9536250475872456;
    tmp_tmp_msg_0_1.z_units = 197U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.35846699579659;
    tmp_msg_0.lon = 0.5776836751959528;
    tmp_msg_0.radius = 0.24896263607959623;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 135U;

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
    msg.setTimeStamp(0.40905007784180025);
    msg.setSource(32660U);
    msg.setSourceEntity(91U);
    msg.setDestination(9263U);
    msg.setDestinationEntity(149U);
    msg.ax_cmd = 0.3951876282003274;
    msg.ay_cmd = 0.9821112000633384;
    msg.az_cmd = 0.27739674950927673;
    msg.ax_des = 0.282911701445257;
    msg.ay_des = 0.5828599313180269;
    msg.az_des = 0.4741801482902692;
    msg.virt_err_x = 0.1844913306484246;
    msg.virt_err_y = 0.5284402400681524;
    msg.virt_err_z = 0.6200315252867649;
    msg.surf_fdbk_x = 0.4433466722101791;
    msg.surf_fdbk_y = 0.10432164174377556;
    msg.surf_fdbk_z = 0.5692565754147125;
    msg.surf_unkn_x = 0.5647117321661699;
    msg.surf_unkn_y = 0.3956392155149221;
    msg.surf_unkn_z = 0.5181462502315328;
    msg.ss_x = 0.7916215109796888;
    msg.ss_y = 0.018408731252068766;
    msg.ss_z = 0.6792737693258367;

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
    msg.setTimeStamp(0.9823547070548015);
    msg.setSource(30481U);
    msg.setSourceEntity(16U);
    msg.setDestination(18111U);
    msg.setDestinationEntity(121U);
    msg.ax_cmd = 0.41587633283879855;
    msg.ay_cmd = 0.9258546875907501;
    msg.az_cmd = 0.6504948918253557;
    msg.ax_des = 0.06462639250719027;
    msg.ay_des = 0.6258358926575895;
    msg.az_des = 0.003988288273160001;
    msg.virt_err_x = 0.6079403615683521;
    msg.virt_err_y = 0.0476062720872632;
    msg.virt_err_z = 0.7440032622423637;
    msg.surf_fdbk_x = 0.43384302764307536;
    msg.surf_fdbk_y = 0.7257924142138183;
    msg.surf_fdbk_z = 0.564214871119377;
    msg.surf_unkn_x = 0.8348246952501445;
    msg.surf_unkn_y = 0.8408711620567908;
    msg.surf_unkn_z = 0.03061863564181011;
    msg.ss_x = 0.007087139606011816;
    msg.ss_y = 0.797278295973179;
    msg.ss_z = 0.38706362904376435;

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
    msg.setTimeStamp(0.10279291915542355);
    msg.setSource(48638U);
    msg.setSourceEntity(247U);
    msg.setDestination(55900U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.5054153993220228;
    msg.ay_cmd = 0.27607706944384036;
    msg.az_cmd = 0.5200097799642952;
    msg.ax_des = 0.8333334771754293;
    msg.ay_des = 0.3807839342925574;
    msg.az_des = 0.9103953810869378;
    msg.virt_err_x = 0.24101445291139545;
    msg.virt_err_y = 0.5950425892245849;
    msg.virt_err_z = 0.18150136486836999;
    msg.surf_fdbk_x = 0.5867356584821147;
    msg.surf_fdbk_y = 0.5824332444890404;
    msg.surf_fdbk_z = 0.4547841142479826;
    msg.surf_unkn_x = 0.12406762284107009;
    msg.surf_unkn_y = 0.5934937802200337;
    msg.surf_unkn_z = 0.394589940782508;
    msg.ss_x = 0.878468608664341;
    msg.ss_y = 0.3767950834152731;
    msg.ss_z = 0.32172432955090524;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WFMPZHZDMSKYLTCWXXRVPUVZSGZSLJHJBUCARDEOMHSNPDTSHECZFECWUNOWQYLQQKPRSMTLXVFGLUTJMUUEQPCKGMNFJCVTPCTQGSHFPQGJQLPEAPVBJWOGBOYRGADDNIGMPANNZAKRWUYXDBCBLAQNAJISKICJEGOAWRR");
    tmp_msg_0.dist = 0.3270588805761333;
    tmp_msg_0.err = 0.6245898533507972;
    tmp_msg_0.ctrl_imp = 0.9105264812489938;
    tmp_msg_0.rel_dir_x = 0.11402605402776089;
    tmp_msg_0.rel_dir_y = 0.20164064759679767;
    tmp_msg_0.rel_dir_z = 0.5044158325748875;
    tmp_msg_0.err_x = 0.1453338588232752;
    tmp_msg_0.err_y = 0.8781998644633074;
    tmp_msg_0.err_z = 0.001538194523644676;
    tmp_msg_0.rf_err_x = 0.030880648206795924;
    tmp_msg_0.rf_err_y = 0.5692690085557762;
    tmp_msg_0.rf_err_z = 0.7822741801531905;
    tmp_msg_0.rf_err_vx = 0.7739236532170289;
    tmp_msg_0.rf_err_vy = 0.4579723304348492;
    tmp_msg_0.rf_err_vz = 0.08726714198078367;
    tmp_msg_0.ss_x = 0.03570606767982909;
    tmp_msg_0.ss_y = 0.6873868617317401;
    tmp_msg_0.ss_z = 0.3094237634476207;
    tmp_msg_0.virt_err_x = 0.9957775430314993;
    tmp_msg_0.virt_err_y = 0.6638862322484698;
    tmp_msg_0.virt_err_z = 0.539497409054323;
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
    msg.setTimeStamp(0.9360525124079093);
    msg.setSource(39257U);
    msg.setSourceEntity(56U);
    msg.setDestination(41552U);
    msg.setDestinationEntity(84U);
    msg.s_id.assign("XHKOUPOAFBSIGCWPJSQPQUSTKNSEOFGBNDIJQXCMQVAYZYVUXHFLZUIQTTZNNUCRRFFIEVAHITKYOVDDCSMVBGYFMJUIRFPFJGHPCNAWZZLBJYQWPTXBOZHRESRUDKCMMAPVKEVXPYHZDNERSLLTEUCRWWGWWPOOKEOCKNTNWKLDEZGVJTJEMBTSLBVHRALMQMQXBEKGHUJYMBZISMYWINLAF");
    msg.dist = 0.47420678355963886;
    msg.err = 0.7721587769785545;
    msg.ctrl_imp = 0.1362773244004396;
    msg.rel_dir_x = 0.835972757768079;
    msg.rel_dir_y = 0.08930514333546768;
    msg.rel_dir_z = 0.18791494414131815;
    msg.err_x = 0.6996432779115698;
    msg.err_y = 0.05765557138953348;
    msg.err_z = 0.8050630164303332;
    msg.rf_err_x = 0.6237817287813477;
    msg.rf_err_y = 0.22961645370625483;
    msg.rf_err_z = 0.9162831136180298;
    msg.rf_err_vx = 0.6386851288457636;
    msg.rf_err_vy = 0.721868800721701;
    msg.rf_err_vz = 0.6459430641767949;
    msg.ss_x = 0.35744711556257625;
    msg.ss_y = 0.22796831212659108;
    msg.ss_z = 0.8383216206672901;
    msg.virt_err_x = 0.4603000843130286;
    msg.virt_err_y = 0.47210709079897617;
    msg.virt_err_z = 0.8843977871066862;

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
    msg.setTimeStamp(0.633685719702688);
    msg.setSource(43006U);
    msg.setSourceEntity(88U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(217U);
    msg.s_id.assign("HKCHBQJZGVCHPBNEBVGXQPXTVNIHPYGPDXKDPTJOLDPNSEAVNHQQWNWFLFCWTGRAOYLZKUIKXRAOEELRQVUEXHSMALDWKMFOMMKKGWTTPMRGPKYVYGBOZJLIXWBOMIQBJQAOBEUEEGFVHZZJVFJBSKUZFYDJGYLAYONCWQPHATYZRDRTVTJZUCUIXDNMCIWJKWGXNYHJZQEOFDSIBSWUFMSUFLXITTEUFNXRAMR");
    msg.dist = 0.0923053471879659;
    msg.err = 0.21774255221595396;
    msg.ctrl_imp = 0.7756331244679938;
    msg.rel_dir_x = 0.2523620418199183;
    msg.rel_dir_y = 0.07230105469859227;
    msg.rel_dir_z = 0.3441426102760209;
    msg.err_x = 0.44387033229612805;
    msg.err_y = 0.8235893576501527;
    msg.err_z = 0.6335608949950912;
    msg.rf_err_x = 0.5074902700699765;
    msg.rf_err_y = 0.6817123188050849;
    msg.rf_err_z = 0.025222342204433312;
    msg.rf_err_vx = 0.9512331444708797;
    msg.rf_err_vy = 0.025374156724819574;
    msg.rf_err_vz = 0.9133465411635429;
    msg.ss_x = 0.293188655426888;
    msg.ss_y = 0.30044654550094574;
    msg.ss_z = 0.7019853195608319;
    msg.virt_err_x = 0.8920123776616802;
    msg.virt_err_y = 0.8559342680054747;
    msg.virt_err_z = 0.7613044766979332;

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
    msg.setTimeStamp(0.39562587883709843);
    msg.setSource(23617U);
    msg.setSourceEntity(92U);
    msg.setDestination(29234U);
    msg.setDestinationEntity(205U);
    msg.s_id.assign("HVDVAOUHSPRXSSSAPLGKECGWUYBBRMWDUPGMWHEIEBXGKZPTQBTOUHXGQGRWWMXLMSSFKMYXQUJRROHAPPKKCWDALKXNRZGSFNDNXJBZWELQBTMVAFEOTINLCGRFYCWZTQQJTKJOHSHEQYNOMVJLIRDCUFVLNDFMIECIVZTEFUCYAVDYMJPHCZKOUZIIOAIASEBYPAPHXEMTLNVNRZBOQTHCJLRQYJVFXGSKBK");
    msg.dist = 0.1505094866461103;
    msg.err = 0.7995885112319632;
    msg.ctrl_imp = 0.9576298117486345;
    msg.rel_dir_x = 0.8343536226917789;
    msg.rel_dir_y = 0.062255665169428154;
    msg.rel_dir_z = 0.054643245318378386;
    msg.err_x = 0.8002816982937051;
    msg.err_y = 0.37660264844627567;
    msg.err_z = 0.5122339304786718;
    msg.rf_err_x = 0.5826767473660407;
    msg.rf_err_y = 0.3374676823755307;
    msg.rf_err_z = 0.39605861777462237;
    msg.rf_err_vx = 0.20467343083339196;
    msg.rf_err_vy = 0.09746876257433323;
    msg.rf_err_vz = 0.10580027491503485;
    msg.ss_x = 0.9621891509750007;
    msg.ss_y = 0.7768899003676561;
    msg.ss_z = 0.17400785763968807;
    msg.virt_err_x = 0.47211146371896173;
    msg.virt_err_y = 0.42132326056255986;
    msg.virt_err_z = 0.7236239017255479;

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
    msg.setTimeStamp(0.40373304624642636);
    msg.setSource(35235U);
    msg.setSourceEntity(83U);
    msg.setDestination(6088U);
    msg.setDestinationEntity(22U);
    msg.plan_ref = 1235555144U;
    msg.id.assign("AJJDWAZCOULQSJUFRRPJSPUAOTFETNHHGRYNYHLSQGLENLGUPMNBLKPPCQZQTWWFMNNOALBCNITRDMUANZGCBSWDHXDUCHLJZMEERFBEMGKTBECOGHTOVECSGXIKSRDGKRMFOUYUONJXJKIDFVYIIAIWPFFOIAUNTVYFMGXWRIYIYZLXDCRZQMYHDSAHED");
    msg.memento.assign("TCMWHJQCPUISBEMIRBRNCTCTLOXZAKSVURQBFFAMMUTLVVENFLEJXDJYPYXCMIGYDHZGOQXHVLDTKZUEWIQSDGLCUQXRBNOVWEEVICHPZXZLWCWBOZJRPHNNOAYYEJFGDGDKFDGFUKROJRGBDTTELYGONIAMAVXMPQWGFQMAIWYKSCNISHIYVAQSHAHBTOZCUTPFDMNSKXJHBSJXJBOEJZSMF");
    msg.timeout = 30096U;
    msg.rpm = 0.15782629676415472;
    msg.direction = 243U;
    msg.custom.assign("DVYALTPKDPN");

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
    msg.setTimeStamp(0.1594205463477235);
    msg.setSource(18406U);
    msg.setSourceEntity(25U);
    msg.setDestination(11192U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 3573048580U;
    msg.id.assign("MXMQVIZTQRSXEHIYQABSUEHXWQCTWGZTWJLOTBTGJNNYLZMLKLSVCTOWWVPPJHDJZIURYBVJNCKFEABMIYHNSGUADIRRFOTZQJVFEJDDBAKMXEANHAKXBJFC");
    msg.memento.assign("GYLEMTHCOCMORFOMLTOMGSRBPZDEAYEFIDKHOXITYAHQTUZWZ");
    msg.timeout = 6319U;
    msg.rpm = 0.700474408782008;
    msg.direction = 89U;
    msg.custom.assign("YQLMGEVKWUDAHVHCOWNJUXGEFPYZEGQPXWKZVDNASRAXWZGSEBQMFOOJFBVBKFRFEOMRUJJSSSBCICOWJZHIACNFTZSNUAEOLJKCBNMJLQDEGHUBNQYHTAUDCQFMDKTFHOGIDNKMZKYWGHKTHTJGUIKYRPAVMTPWXXORCZUDYMLGXTSVSIQBWRXVJBVZ");

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
    msg.setTimeStamp(0.8615092044283781);
    msg.setSource(32183U);
    msg.setSourceEntity(76U);
    msg.setDestination(3470U);
    msg.setDestinationEntity(24U);
    msg.plan_ref = 2517215035U;
    msg.id.assign("EYZUDXEQABJWJCMHQLUEAGHUJRNSLBMJOSRDZJPKPQQNRTXHNKTGWVROWVJFDHVQGTIPECXOCNWGOJSHYWFDNLMBIPAWGWLBKRJPUNOMYJP");
    msg.memento.assign("EJMKYSJVGFXUPUDPBENQFHPWKJDLOTJAAMQHFGIZXWVYACESTUWROYRRLONFIIJDLRMTLRNVFDLMAYS");
    msg.timeout = 14117U;
    msg.rpm = 0.08051832558026628;
    msg.direction = 65U;
    msg.custom.assign("GAEDLNYTINECUNLDBVKULQXSBUSKJRASKOTNODQDOQWDJRMOFWPSSRARZBKRKBDZPPAJIMMVUHQFEMCIKOLMJQCRTXIBPCJVWYHTBLVFWZLVXGBGYAAUTMGGIFEHXEWQPZZDCBZTBIXCFXVNZKCVNHEYIFTLAYOQZUGHWYXHGCNJLIXJQDHYWCPUZPFVSQTHBZNDVOJMLRGWXKKERHYPFELUYXSPNMANMSIQFHAGEPRCWAMOVY");

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
    msg.setTimeStamp(0.02486346787000082);
    msg.setSource(23144U);
    msg.setSourceEntity(161U);
    msg.setDestination(26923U);
    msg.setDestinationEntity(112U);
    msg.op_mode = 194U;
    msg.error_count = 206U;
    msg.error_ents.assign("LRLTIUQKANZISTMRMZNJHLKBPJRLCZFWO");
    msg.maneuver_type = 45419U;
    msg.maneuver_stime = 0.4425258198830453;
    msg.maneuver_eta = 27163U;
    msg.control_loops = 475321505U;
    msg.flags = 245U;
    msg.last_error.assign("ORSXCXFCRVGZJOMSHNNQGDUCWPJNPVATSNBUBYQMLPZAZZ");
    msg.last_error_time = 0.6331059437593252;

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
    msg.setTimeStamp(0.680428425713468);
    msg.setSource(36642U);
    msg.setSourceEntity(78U);
    msg.setDestination(18465U);
    msg.setDestinationEntity(128U);
    msg.op_mode = 159U;
    msg.error_count = 36U;
    msg.error_ents.assign("IYHEMVBEYFQBODLQDRJBZJLXJWTPLUMSNWFRZYXLLRGPPAWNKVWMSTGINBHFSOWQNJQVWIWKDWPHEPMVYIJLTNOXESPZZBMGSCCRZQCRGMPRDRQDNOLYTHDTDHOHYVEVCQVUSGKFOMZGYZHCFBMTATBRASGXKJTXEIBMEWPIAICXZEAN");
    msg.maneuver_type = 2535U;
    msg.maneuver_stime = 0.7354939444206952;
    msg.maneuver_eta = 15572U;
    msg.control_loops = 975587716U;
    msg.flags = 71U;
    msg.last_error.assign("YPJGSAVLNBLYIELXQTHGSKGDVELAJLFTYUCUFQPQCSZFDGBBFQUIMCWIQPLJVN");
    msg.last_error_time = 0.2611151219780987;

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
    msg.setTimeStamp(0.6673817441196532);
    msg.setSource(42235U);
    msg.setSourceEntity(100U);
    msg.setDestination(30408U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 9U;
    msg.error_count = 241U;
    msg.error_ents.assign("OBOFSRBKHPGFSVVVZJHUNFISGJTAOAVFCLKLXQYJTQLNSZUMMW");
    msg.maneuver_type = 36039U;
    msg.maneuver_stime = 0.5792229670098645;
    msg.maneuver_eta = 19303U;
    msg.control_loops = 2681752148U;
    msg.flags = 156U;
    msg.last_error.assign("YELPELFJMDLIINXVVBEZYHSZGVBPSURIWDFQGQCEURMZDQ");
    msg.last_error_time = 0.1633633153609958;

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
    msg.setTimeStamp(0.7443040230092626);
    msg.setSource(58741U);
    msg.setSourceEntity(26U);
    msg.setDestination(43182U);
    msg.setDestinationEntity(229U);
    msg.type = 158U;
    msg.request_id = 60367U;
    msg.command = 24U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 4053403195U;
    tmp_msg_0.id.assign("QUOHHJIMCUWPQFGRASTXIJJUZSUCBYEPUMBVGMKERZAOXNKILWCWDUXZXSJCORCPHDWGWWAKRRHDEITPUTRZZFZPDCPLATOULZBUKYTBIVOKMTVZGFOGLSLEVLGREFQJSOLHGBAOKGYVMBQNLQXHDIJYKQQXQASCKUKYMDADAFYEFINFVXFWMNMWHMBFVDLFPRYBOJVQANYCBJRXND");
    tmp_msg_0.memento.assign("RVIEJRJRMIVTGREWUIOADKOGAQVXLLMSIFERHFJSBYPRGUZTJHIXEMWXPHVXCQNEEVFZPJONSGBVDTMCWWNGBBBGLMTKQ");
    tmp_msg_0.group_name.assign("PDDZPTWRTPFUWYJIVWHQYUNQEPIIOHJQDDHRCR");
    tmp_msg_0.formation_name.assign("UESJPURKBEZXHIXBSKYAFQMGCYFAFMCYVGGPNBQIQWHNICOTN");
    tmp_msg_0.plan_id.assign("XIQUSSUZRHLLTISBYDVTYU");
    tmp_msg_0.description.assign("ZJTELXOUGZRKQOJZKVEYBCDRXZOAEOITDDSPCPHNKRKZTYGIGARAEKAHOZCEFCAGFLUQOIJMRBITWRBCQSSXPTUHPPSYOFYQULPMKVHW");
    tmp_msg_0.leader_speed = 0.4124481576119039;
    tmp_msg_0.leader_bank_lim = 0.3361420536526226;
    tmp_msg_0.pos_sim_err_lim = 0.7633853150245994;
    tmp_msg_0.pos_sim_err_wrn = 0.5466643769593053;
    tmp_msg_0.pos_sim_err_timeout = 16786U;
    tmp_msg_0.converg_max = 0.623722747208152;
    tmp_msg_0.converg_timeout = 35212U;
    tmp_msg_0.comms_timeout = 3280U;
    tmp_msg_0.turb_lim = 0.6937191336531908;
    tmp_msg_0.custom.assign("ETGNTGWQXVUSZLDIBRAUNLZBEMIJEWQILBNSXMUOPRTOPZXTKATPKPHDSAPUHWPRGMZWWHSFZMYUYJDJVYCAISVJVBNUF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29577U;
    msg.info.assign("ZGFBEFAPVUBDFKUZFOZLAUEKKVQEIQZZVTJDUWYIKFKCBJMLNLSWDWBGUMEXJZULOOCHKHJODSKTXLMJXXOAHZUQRMZLSWJRQCMWVFONOQVUYAMHGTFPXVIGQTCNUBZRAADMKSGFLLXNGBUBOCFWTHSPXYQRGHIHIBDSHKEYPYZCVYQPSBTEQDCDYIAN");

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
    msg.setTimeStamp(0.45311210292734294);
    msg.setSource(51884U);
    msg.setSourceEntity(89U);
    msg.setDestination(21491U);
    msg.setDestinationEntity(205U);
    msg.type = 237U;
    msg.request_id = 25848U;
    msg.command = 167U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 1711531758U;
    tmp_msg_0.id.assign("ZFNZYWPAWRZKPLQJVIUGMRMFUIILPPDXDMPWGIHBQRLBWCVOPLYJHLBDAOACKXYFYTSEVXAEUEVCEAHYJMBJDALDAJCQUINKIVHNRPEOCSFVINDGMVWOSXUVCCMBSQGRKQKTZMRFGMSHQDCDPBTWKOKROFXTFANZQBTXNXJIHVGYAXO");
    tmp_msg_0.memento.assign("BPNELYVJWSXFKPXRZWYRAWYOTBJZUWHGHUANPLTCLLEEYNFKFVQJZZRCYCXSNTXRENLZUNOKTFEJGCITQBWQMUSXSDMIDIBKIGYWPNCTMXDDZEFDDHQMD");
    tmp_msg_0.timeout = 43492U;
    tmp_msg_0.lat = 0.6352725437732774;
    tmp_msg_0.lon = 0.6370919502984164;
    tmp_msg_0.z = 0.38880968491842216;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.duration = 19263U;
    tmp_msg_0.speed = 0.30106656277320476;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.type = 253U;
    tmp_msg_0.radius = 0.3902159356907515;
    tmp_msg_0.length = 0.5882234877396783;
    tmp_msg_0.bearing = 0.22455811869652353;
    tmp_msg_0.direction = 112U;
    tmp_msg_0.custom.assign("KFCRKCRVADXNZRDIYXLSSONFTSEYHYLCRLH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10597U;
    msg.info.assign("GLPOMHVAQAFKCJMJFXAYQEFZPMYLJQXAKBWZTGYEMRMHGVAYILAVNSGUUGPPUEISVSPUWICNXONLGVJLWNUOUQROLIYVOKTCSOBRPHTZACIFLFBAVITJRBKNYDDRIZSNWRFYFNHXMIVZEZIKHPPBXKZMBSCKWKDTNFEMXTOQPHBSZGEUWBMBUEJEDDHLXAKCGE");

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
    msg.setTimeStamp(0.1414925640376411);
    msg.setSource(21157U);
    msg.setSourceEntity(129U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(99U);
    msg.type = 172U;
    msg.request_id = 38833U;
    msg.command = 36U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.plan_ref = 2799000736U;
    tmp_msg_0.id.assign("NGDMIKDLRGTRLSTQIOIRPJOMZMXZNHOIUBTDNVPYPCS");
    tmp_msg_0.memento.assign("LQBGOBNHVLZDZPAXKPJZETYDBECKJJAQFVQXUEFQOSZGMLMVZVJGDUIQUJXDHCXHGZCUTWFNSGUWTVTFSTWPOEBCEWQRISLGNKANINSZFDWOFFBSTHTNQXHPXZNPYCRXRKDKNHCSBVLBICWJAOFECPKGMRWHDEOMYUSTZIAYGDYUWIBLAOAPEMFMFJIZSLRRPTYRHMOAYAXWQCYUEK");
    tmp_msg_0.timeout = 43020U;
    tmp_msg_0.lat = 0.32856221886573345;
    tmp_msg_0.lon = 0.6934818907290721;
    tmp_msg_0.z = 0.4878068224547384;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.21841769063625094;
    tmp_msg_0.speed_units = 2U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9024182140586445;
    tmp_tmp_msg_0_0.y = 0.5865873741608967;
    tmp_tmp_msg_0_0.z = 0.4086419667116713;
    tmp_tmp_msg_0_0.t = 0.5394008646890034;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JGIHTBQARFREGKLTFXYIRJSVTVJEINBQAZUKQEYYBMCABEDOIHPSDCRSXMTL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40771U;
    msg.info.assign("DFVCHXREFWQTGRRTEVIYCJVJZRRYBGLAADHHBKWCKWLUQCDNATRWXIRFFHXMUXHBOPLIVZLMUSOIWTBGNPPPXMXCNEMWYTHQZEAITOQKVAKFBDQUQGMJJSBUNUNRTOCKLXVDZSLKACANDQLOULBJFBZGDJGYRZYVTVOEQKPCKNRAUKQYIHASOCWFSZZICWNOELVGWTGFLJBZNPUPPYXXSUIJAEDFMEMPYZSEPWXFESIMOKJNQBVHHGTDYIM");

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
    msg.setTimeStamp(0.587929280684551);
    msg.setSource(20169U);
    msg.setSourceEntity(105U);
    msg.setDestination(35587U);
    msg.setDestinationEntity(193U);
    msg.command = 214U;
    msg.entities.assign("BFVFEDVERPWASMFMQUZRQUBSHJZNLMQNRXORHRQWTQZCYLVKYIUISOBUWXHLXJOQSBXQKFUOOCKXBUEJWZVMUGYWBEPDFNNOZGMYBXILQIECLTEFAVMAVPVYMSWTLDYCKUCKPXCDTPBMRXNPTVSDFGZWDGPAJZNCFELIHCLSWIFJBROWYEZUENWGMJIHYOOSNSEGSDKAANXQLCDHHANKJJKODITJVPIHAAHIAG");

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
    msg.setTimeStamp(0.1851951571538356);
    msg.setSource(43841U);
    msg.setSourceEntity(205U);
    msg.setDestination(34772U);
    msg.setDestinationEntity(48U);
    msg.command = 97U;
    msg.entities.assign("NUUHJKTUMYBLDFUVOOLROPHQSOVNLLXWTVHEPNERFNCAFAXOCAOOJIGLSDRTVYGZMSQMKPHEVXKXNMPQXWWHZSQQFQZFBQEWXTHEACFYZBFURJDCTIGOMKFIISGOCYVCEKD");

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
    msg.setTimeStamp(0.13903038994910877);
    msg.setSource(38185U);
    msg.setSourceEntity(10U);
    msg.setDestination(32853U);
    msg.setDestinationEntity(110U);
    msg.command = 237U;
    msg.entities.assign("OMZJDKIZNTMDBKFKPKYDPQ");

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
    msg.setTimeStamp(0.9924307388155804);
    msg.setSource(43153U);
    msg.setSourceEntity(158U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(176U);
    msg.mcount = 171U;
    msg.mnames.assign("EYYNSLDTKDQVAPQTWQZDHGAITZDYYVCTRURROAEJINHGSMXJJHVPPOAWVQMHZMMEBEUAFPVYBDTAVICODAEGGRBDSVBWNLIQNTFFWPHUCFPAPETOXGWLRBIFMIKNZYUNXRZEFFCJCXBQDINVNLEXFYPLQCM");
    msg.ecount = 93U;
    msg.enames.assign("YMPLRYGZXNQCLLVWJOIDDZODIVAQMQIKJEJHFYJGDDURAXYCLMZWKWVOLI");
    msg.ccount = 51U;
    msg.cnames.assign("PNVQFUVXQEXHCHKZYDZZSFVEMPSBWPKXAKRKRIMIERFVTWBJGDEPGZDCLUJMGIGHWLUMEYEDNCTSGOQKSWBOFAEGYLWOFUATYFVIKUJOCPQUMBTXNJXNAEXBIJSKIANBCYQGPDYDYLUHUHJAMHSNBPWRWYSPRGCCGROWHOQOHCBSYBQZRNRKBALTPVJIMFTHLCEFTI");
    msg.last_error.assign("AAFQZGCDJLPOVDG");
    msg.last_error_time = 0.3458980526453961;

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
    msg.setTimeStamp(0.46152269313995664);
    msg.setSource(6185U);
    msg.setSourceEntity(246U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(5U);
    msg.mcount = 173U;
    msg.mnames.assign("DHWHQJTBIVEQBVFCQVCKRERHUXNWPKRXKQZU");
    msg.ecount = 183U;
    msg.enames.assign("ZUMBHVQKBJCOSAMJFCNGYUBORTOZCYRQVHYSQPSIFARNWZDYDHBKFJCKQTJXVBRJKMEELXYWBSHADVAONMEEZTQEDUPSEKHXSUCMDKFWNPOXQILUPIXRZMCCNVLZMYGJJWUOMBZIOIFQRDRV");
    msg.ccount = 125U;
    msg.cnames.assign("NQGLJVAWXBKAEXHLPVNQUVOQRBXTFMYYUYLNBWDWGSSEHZSVG");
    msg.last_error.assign("QDJWZCXBRDLZHUZICUENARDNMXCRVBRFCGPNVWMHHEROJAYPPNEMANNECMNIXQOSVWJUALCTRVZYHITOGUZTHXGSWUFLQBJKXEOJHSSJNKKIPEQKPFLAMLOMTVHXSZFFRSDGISBG");
    msg.last_error_time = 0.36869917345188563;

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
    msg.setTimeStamp(0.031913664391923);
    msg.setSource(18303U);
    msg.setSourceEntity(121U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(241U);
    msg.mcount = 145U;
    msg.mnames.assign("BSCMMRHWPIEKBKPZUUVFIXREYEMZSYWBQQROGODSTZLLLSDFUJMDWJOFWAVUORGMJFOFRBIBTTEXIADICWNRXCTZQTZSUMUWXOIWGKVTACGKRFNHAMHYEHFUNJEVVHTCQPEXGOYPTBFONBJWQCNCHPSGQEEMQMLSVYKFILQZUJXUHZQVARNPIWYXKSTJALDGZSCWPIPHBTOCOMYNNNAEHCJXXJADQZKGYU");
    msg.ecount = 173U;
    msg.enames.assign("CYMVKKXFEXNJJIAYZQOWTTUABIUMGGAZFIJDCGWFEOSVQTXHLYUNJXHHGLFIZIGFMGBOEAHNZQPOZBCBYVISNSZQIXWNPREUCYSCPLTSKMVFDOFSHQUVVEMNPAAXKDJWTBMEARXIWJTSCCRKLOBHUPQTZKNLEYQGZHPBTSKWJVUWWIQUCFTXGSRLJAKPOAPDRJYPHKYQBNVVDO");
    msg.ccount = 8U;
    msg.cnames.assign("BEVNZLSDQEKWFCRJSYGYJYXNKTXSDMYSEKDYHTZAEMTGXETXFUBNUCROUNJXQWOZMCNMDABZGJOMAMRKIBCQWPAWFRFCLYRIK");
    msg.last_error.assign("DHZDPZRTKMZSBISBPOHRSVVDLJUVOCROIWCKABYXZTBNWCFRTZVXXWSUKITAYOIGETXETEDFNPYFUPDAELTHQLUIAMDQVDLRWIZJQGMQMYHYSCDJOSOHKUKFRZUHEGQKLMXJENQDQB");
    msg.last_error_time = 0.32343945065616675;

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
    msg.setTimeStamp(0.2611556349303952);
    msg.setSource(12499U);
    msg.setSourceEntity(233U);
    msg.setDestination(18177U);
    msg.setDestinationEntity(146U);
    msg.mask = 208U;
    msg.max_depth = 0.9573453150993164;
    msg.min_altitude = 0.22331771388239052;
    msg.max_altitude = 0.8374321228062162;
    msg.min_speed = 0.428725775497938;
    msg.max_speed = 0.3022903086304457;
    msg.max_vrate = 0.8805647179005515;
    msg.lat = 0.9447082252327328;
    msg.lon = 0.3949036631669425;
    msg.orientation = 0.1105634414297636;
    msg.width = 0.4888397977805933;
    msg.length = 0.22623505409986733;

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
    msg.setTimeStamp(0.053670168708975785);
    msg.setSource(53984U);
    msg.setSourceEntity(4U);
    msg.setDestination(31092U);
    msg.setDestinationEntity(227U);
    msg.mask = 94U;
    msg.max_depth = 0.5997554130502578;
    msg.min_altitude = 0.05502241906127203;
    msg.max_altitude = 0.6190930848807465;
    msg.min_speed = 0.1968427652509287;
    msg.max_speed = 0.5566558294587791;
    msg.max_vrate = 0.6055637522653263;
    msg.lat = 0.6049077217779993;
    msg.lon = 0.11868059206812154;
    msg.orientation = 0.5285443010677665;
    msg.width = 0.5930622164015523;
    msg.length = 0.6174073720116716;

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
    msg.setTimeStamp(0.203738763300232);
    msg.setSource(2738U);
    msg.setSourceEntity(64U);
    msg.setDestination(39412U);
    msg.setDestinationEntity(95U);
    msg.mask = 20U;
    msg.max_depth = 0.48176087921662203;
    msg.min_altitude = 0.20513075540164394;
    msg.max_altitude = 0.06631840190566063;
    msg.min_speed = 0.8737906828647257;
    msg.max_speed = 0.7880783499071143;
    msg.max_vrate = 0.3134577492014964;
    msg.lat = 0.4924337974087146;
    msg.lon = 0.8513988734290007;
    msg.orientation = 0.11757668067624705;
    msg.width = 0.8442231440543533;
    msg.length = 0.4513360071926801;

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
    msg.setTimeStamp(0.6237948077442194);
    msg.setSource(22761U);
    msg.setSourceEntity(179U);
    msg.setDestination(64854U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.43718349037931936);
    msg.setSource(11511U);
    msg.setSourceEntity(147U);
    msg.setDestination(52098U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7042027826340825);
    msg.setSource(37774U);
    msg.setSourceEntity(199U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.5900833559058348);
    msg.setSource(41191U);
    msg.setSourceEntity(237U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(90U);
    msg.duration = 49493U;

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
    msg.setTimeStamp(0.3233581486752479);
    msg.setSource(62017U);
    msg.setSourceEntity(103U);
    msg.setDestination(11809U);
    msg.setDestinationEntity(3U);
    msg.duration = 29455U;

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
    msg.setTimeStamp(0.9588637470142427);
    msg.setSource(54433U);
    msg.setSourceEntity(172U);
    msg.setDestination(17412U);
    msg.setDestinationEntity(118U);
    msg.duration = 2768U;

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
    msg.setTimeStamp(0.9094223458624696);
    msg.setSource(56688U);
    msg.setSourceEntity(207U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(11U);
    msg.enable = 57U;
    msg.mask = 1199457306U;
    msg.scope_ref = 1949271309U;

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
    msg.setTimeStamp(0.07747647149601755);
    msg.setSource(39286U);
    msg.setSourceEntity(62U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(250U);
    msg.enable = 56U;
    msg.mask = 3266508450U;
    msg.scope_ref = 660755356U;

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
    msg.setTimeStamp(0.7635407976175211);
    msg.setSource(57719U);
    msg.setSourceEntity(72U);
    msg.setDestination(40985U);
    msg.setDestinationEntity(175U);
    msg.enable = 146U;
    msg.mask = 2383922549U;
    msg.scope_ref = 3561280392U;

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
    msg.setTimeStamp(0.8034816568495198);
    msg.setSource(30285U);
    msg.setSourceEntity(13U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(48U);
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
    msg.setTimeStamp(0.444110984478262);
    msg.setSource(37943U);
    msg.setSourceEntity(233U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(201U);
    msg.medium = 70U;

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
    msg.setTimeStamp(0.8426342129879656);
    msg.setSource(47081U);
    msg.setSourceEntity(10U);
    msg.setDestination(7610U);
    msg.setDestinationEntity(30U);
    msg.medium = 51U;

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
    msg.setTimeStamp(0.4161248696609463);
    msg.setSource(34181U);
    msg.setSourceEntity(204U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(173U);
    msg.value = 0.48520718333536117;
    msg.type = 216U;

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
    msg.setTimeStamp(0.6578225405063605);
    msg.setSource(25304U);
    msg.setSourceEntity(146U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(100U);
    msg.value = 0.021221135551391268;
    msg.type = 200U;

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
    msg.setTimeStamp(0.19201099238192498);
    msg.setSource(44359U);
    msg.setSourceEntity(27U);
    msg.setDestination(49600U);
    msg.setDestinationEntity(29U);
    msg.value = 0.433732159620247;
    msg.type = 8U;

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
    msg.setTimeStamp(0.8954954366910052);
    msg.setSource(35908U);
    msg.setSourceEntity(235U);
    msg.setDestination(39881U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.46877302211415817;
    msg.converg = 0.4920138067177219;
    msg.turbulence = 0.9676680615637171;
    msg.possimmon = 73U;
    msg.commmon = 243U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.1409301507208457);
    msg.setSource(61587U);
    msg.setSourceEntity(177U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(160U);
    msg.possimerr = 0.27975159834611973;
    msg.converg = 0.9565007440310546;
    msg.turbulence = 0.15650559706130873;
    msg.possimmon = 199U;
    msg.commmon = 142U;
    msg.convergmon = 61U;

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
    msg.setTimeStamp(0.197467926824191);
    msg.setSource(31917U);
    msg.setSourceEntity(203U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(142U);
    msg.possimerr = 0.4934596870037564;
    msg.converg = 0.0580744099163808;
    msg.turbulence = 0.9215562713458837;
    msg.possimmon = 82U;
    msg.commmon = 179U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.8203045406452764);
    msg.setSource(49962U);
    msg.setSourceEntity(79U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(58U);
    msg.autonomy = 59U;
    msg.mode.assign("RIVCZIOERBUTQSRAFBMIPJZZFGR");

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
    msg.setTimeStamp(0.3938279768758307);
    msg.setSource(64931U);
    msg.setSourceEntity(182U);
    msg.setDestination(55118U);
    msg.setDestinationEntity(86U);
    msg.autonomy = 31U;
    msg.mode.assign("KREISNFIOXQGYMEWRZDSEEAJNMMBQAPVDSWBRFROFZPMKQALABXPXAKMLXLCYVTUKIHRZOUVHXNNKRFCSSBFXOYRICMQDFGRZNTPBIXKOSUYIZLXJAVGDWLPNEYDSWIHJWEVGPJNUDATIEZVPBKJGTZVMSXOTTLFAUHQRGOKYRUGVHPHFHBITEWPGKJYEDJ");

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
    msg.setTimeStamp(0.7491636193930724);
    msg.setSource(63349U);
    msg.setSourceEntity(102U);
    msg.setDestination(20860U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 39U;
    msg.mode.assign("IRAABAAHKFIXQJCNFYRHNIBEGLCIJVATULXMRDTNFEUIGWZXZJFSPYLTTM");

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
    msg.setTimeStamp(0.17047112935311093);
    msg.setSource(25390U);
    msg.setSourceEntity(245U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.5798244383680368);
    msg.setSource(17477U);
    msg.setSourceEntity(236U);
    msg.setDestination(4070U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.6278317842893724);
    msg.setSource(51556U);
    msg.setSourceEntity(20U);
    msg.setDestination(46342U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.9435495601339938);
    msg.setSource(14278U);
    msg.setSourceEntity(206U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("BODEAXJCKZLMXJYKVFMMBJGJDGRIQGZTFTRLNXGJZSTNUSVFQMTYPSIVQAFWHGLDHEEREYXUBDCQGHHXLLISECDUANMHDFPONRBXSJKKOOFOFQGRWRGIEILWFPISMGAUUCXCZUVBQBWAEDSJZCOJXRYRPQWGISIKVEMPZANPWKVYQNFPBWJYKKAPHDVUQNINQALZI");
    msg.description.assign("GRIMXYEKVENWQ");
    msg.vnamespace.assign("FKSBFXPPIJKGHROAOEPBVXHGYSPFYTSGGJONNDLCLKKXUBZGUBPUOEGRDUNHIWIRQEKTEZIMOLBHYNKWELWOQIMOWFAQNCVLTCBAZLXKBMTONOERLTFPPUMJVMXPSXVSANCHECNTQLXWURQNRYQGZJYZMDHXJVFZFWRIDNTBXBMEWMEWJZYAUCSCHXZDDSKJAVGQTPILJVPJWODYDYSUC");
    msg.start_man_id.assign("QTVUZIAMKSWVYURPBKNTEPDRKIOIEIQHGLVLZUKRVCVXQGFHURMJPRTGLQXAZKGDNHEPDTSRMHCXJC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WZJGIRQTJISCZGFOGDCGFJBGBLOPJCQXVQPJIZQVPZFJYOHAWPFEKWGSDNZBAYXUXHALSFODGEAMCXELLLNKPRHXZJVHAYVHXBLODDSTSWYVOKGHCCLMAVOENJEVLNKVWZFGHOEIEEEUSRNKOUSRRZQMBKWTTHSOCNUKIQDTUQZCTRFXFDUNBKMAYLMQEWCQDNYXIPPMHXVIUUAYTNYBWJTJBVRYBATHMWAMDPPUFUKRNRQWFXZLRMBMTI");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 96507101U;
    tmp_tmp_msg_0_0.id.assign("COSUEPWYDEWJBHPHBDHKFCOP");
    tmp_tmp_msg_0_0.memento.assign("YEMHANOFWKAQVIHLKLQQFCTSSJPCLFSVWUQROQUEBUILJWNFFYSYJMABVNXTDDKBWEGPISNVNSKJOPWKMRYZEWMPKZUYZDLRTKDFRPULWOOGGYIUBXJTGL");
    tmp_tmp_msg_0_0.timeout = 58769U;
    tmp_tmp_msg_0_0.name.assign("ZBPQHYJOFALNEOKKRBPBWWDXUJPGRZRKYGEJVNXDNQQNXVOMQTZYBRXQMHAYZGCBFSGVQLVFXAZIWTPIEPOHPMELWWEBSIZNWFXDISATHKEDGFYOQDDCPUFMILVXGQCUTCRYAESUYITVANROBKJZHG");
    tmp_tmp_msg_0_0.custom.assign("ILLCXRFOMLX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PolygonVertex tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.6645699185334951;
    tmp_tmp_msg_0_1.lon = 0.0781102957154477;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanGeneration tmp_msg_1;
    tmp_msg_1.cmd = 91U;
    tmp_msg_1.op = 194U;
    tmp_msg_1.plan_id.assign("ZNQVFOIUOLHAMYOHIJPXFKIPPDCRDYGUHKOBOSAVVRUOPZCSRWHDEABWDASMVLQFIKKBKNLJEY");
    tmp_msg_1.params.assign("XYJFFZAHUDYDUOCRBKZACSWAWFHCPPNTRKZZEVLQIPDWOYEXDMSJZUCUJBJAZPUIXFEPKWMGBURXSDEGKVIVEEFFHOBVVQBGAGRTWGYVNGJHAXKORQYTNWFLFWQVLKIVKJCZGTQYQYXBPGQHOIJRAOAFLMEQMIISNLTBMSNYSLRKYBWHZHSRSCIJNHBWIOJLRVDMOMLDGXYKUHLZNXVCDTTUNHTKFOCBMNNXMWZITEELXQMPPA");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryEntityInfo tmp_msg_2;
    tmp_msg_2.id = 178U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.24717639080046538);
    msg.setSource(48017U);
    msg.setSourceEntity(28U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("JHBOCRAFVOQBIIXNXJDRL");
    msg.description.assign("DPACSSTPUZXDSGVXTKPUFFSAKNSQJVSPNEHZWCORECKTGGIIIXWXNWXQSDMGAZRBQRMWAUVBEOHQBVZIRCBEEPNBTVZICWPBOGVYQTYZDDJLJFFIWPYVNONTWIWGMLIYDDYRLUDJMZUXKXATHAQTUMKKQUGFZREPYNKAPVHMCFMJHHJUBHOLXVLYQHOYWDEGFNHMTVQRRKFEBLULMKNOCMWSFAJSBXRLAZ");
    msg.vnamespace.assign("ILJNIIPMNYS");
    msg.start_man_id.assign("NRWIBGDUUVOQCLMANNZSAZKDZSTAJIEKRQFOGRPODBYPHYXIBOHDPLJJVROSMAEOFSZMSMADBPYCWVQNMFVIVECMJQTKPIEQGFYGNTFOVWCSMJLXXTELAVQIVTHAENHZNFSRUGMZCGUUJIHYPHROLZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UVQWFCHETVVGBILWPKLNHPPMXOOCAQTDUPFPWYZSYYXEAXYGUG");
    tmp_msg_0.dest_man.assign("KNGBBLUKXATRXWJWCSDALYTQRKNZNEVPSLXGKNYMOYIUICPRAZDZIIHGKMOTRKTQQFFFVORZHDYMXLZUSVISOFYECHUTMPXJUKMPOHQLHJRJCUJMXXHCZOPFGJWBRDCWP");
    tmp_msg_0.conditions.assign("XJZMXTRMATQHPGLFIASYHWRIBFWNNFZJIGRWADYAZYPTNDCYBFOWTWCEBNTXLQXWIMPHGPTOTSVHVKTQESGVSJOMMIACJIAQJXBORQVFRLXMTHKXIPHFQHWZLSGUBTYYKZSRKSDUINGEDSDBEEIOLROLBLHIMGVAWEFKWNVRDHNSALPO");
    IMC::AcousticSystemsQuery tmp_tmp_msg_0_0;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::GroupStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.2949037583310832;
    tmp_msg_1.y = 0.36898772114982237;
    tmp_msg_1.z = 0.3669678658276353;
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
    msg.setTimeStamp(0.21553481141359754);
    msg.setSource(64933U);
    msg.setSourceEntity(249U);
    msg.setDestination(60445U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("SXUHABBPANQOQISOGKWZRBDDTPYYGQICTKLYASTGOJLMYWUXVSVRG");
    msg.description.assign("BCHNPGMQNQONYOKKFJDJFBKBWHDOTMQQEWZEWNZECMSCZMXJUNWBAZKSHXFDDOIYPRUDFSRHBHZNXBIIKFSZFOMUCUOPOYQLGGGHDHTMAE");
    msg.vnamespace.assign("FCEKCTORKXOYJQKTJTPOBBMPCPMMQPAVADRUJMPWVWFHKQUUHDAEVNTHMBSKQGDCOUGCOFKTAQASIWGFILYIXEGUUZAOYPZRFVEJHNOQVRSMNDVLCPRZBNIDCSHAXWFZNYELNJMCUI");
    msg.start_man_id.assign("WCASRBENOIRNMSEAXXFEVIPYGAGHKAVAUFZQDMVSFRSUZRFJOSJARPBWLDGKVHAATDGGAFDZNUBTZTFDNPQMQISQXYTNYPUCDQKUQJWHDESLOYBWEKDDJMEMPCTWHBLYNPFQKOXQYZKPZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YZCZRSUDACTLLYZSLIGBEVTLEJTDBIQNPHZWNBVLTZTHFGXNAYPNMZQTRYLRXMKEAOCOINIEDOGNREXLZMQTQKQEFGFKVMSDVTVHQZNKJBQIUDPMVUGX");
    tmp_msg_0.dest_man.assign("UQVLLAHQCVTGXLPTXERTISUCPQXZZNNGDRJDZTNPCUHUGPUEZYHJIQILDOJDVEJVMCTVMKBCDZYQZHLWEASSAYENPZTUCQILSQIVRFCDMZCOHGKJGANFANSOIXNYLXIGJFOPRHOAHKJYJMVPZEJEBAIRUYATBHDUBRWTBNALNMZBKFYAEVGQWORFEFKOSPNRRBKXPGMFTSOFWUTCHXQUMWSFDSOM");
    tmp_msg_0.conditions.assign("XNSCTJUYMNHKQMWULUCMJPHBMWFEOQPPCJXM");
    IMC::DynamicsSimParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 165U;
    tmp_tmp_msg_0_0.tas2acc_pgain = 0.35699321636124115;
    tmp_tmp_msg_0_0.bank2p_pgain = 0.7118404547187341;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.9489220718731165;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.35219672618414066);
    msg.setSource(15622U);
    msg.setSourceEntity(28U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(57U);
    msg.maneuver_id.assign("JYNEMMQQFSVHCTNVUDMJSMWAGXLRJKKYRZXDQBZXHEZRMKYRSBJHZPSEJFUWOYQNRVPQLAVFMBPYSHDMTHBEPMBLIBANWIDLOFSZIUDKZGALTHYWQXWCBWIXX");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 4171372564U;
    tmp_msg_0.id.assign("QEPTRSLXIYAHXGFYXXWPBOWOUPFRAQDYYKHBFEZGPVVJDCMXJZQPMSNJPMYPZHUABELJFHEACFTIXAIYIJNHMMKOMEIKRYSUVXDGYKOHTVIQAZVOSGVTKSRCOKVTCKPXUUSBLZBDAXHRNFLNRIYGNDRFBGSLWSLTRJQNHAZUHUJNDTCQHDFDLNKQCMFREOEKCRLLEXGUTNWGWSOLVZDMZUIMYPQGCWOQWBCIKDBIQVTEZFASNAWZTCEJ");
    tmp_msg_0.memento.assign("ZSMXCFGNPQALNKTGVUPFRQWBHMCGHCONLAVAKOYNCEIVUYZIGNIYMLLVPOCBERAWQJLIDCSUDZKSCQWUXRUKDXUSKQSFVSUXYEWURNILYYBMNHBWTMHTWGJWDBJLDZRSQZRVKITHYCJBIIZEJXUSOEDAUOFDJ");
    tmp_msg_0.control_src = 57176U;
    tmp_msg_0.control_ent = 46U;
    tmp_msg_0.timeout = 0.8277260359991002;
    tmp_msg_0.loiter_radius = 0.00892949546884525;
    tmp_msg_0.altitude_interval = 0.9088458249117062;
    msg.data.set(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.42012268788106033;
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
    msg.setTimeStamp(0.003217466593069207);
    msg.setSource(1017U);
    msg.setSourceEntity(116U);
    msg.setDestination(11057U);
    msg.setDestinationEntity(116U);
    msg.maneuver_id.assign("PCSUVBXASTZVCWUCQULZJELRRPDZEHJJUKTMDTJQMHAWGOCYOEUHYUTDXEBBTVCXVMSZDHQBVNOXIWAFKDYOPAUAISWQISPMXMITUHLROOKHNFECXTFISLNVXOITEWZLJQACSHFRQMBAJNYAJYDLKJPSRSKRGNVIIKHBVRDRELMMYCFJBGWDZVBDMWWIQGZPGZPOJLBXBWFKCQYZT");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 3153602838U;
    tmp_msg_0.id.assign("GVMYHEQJAQGACJZHJUZBMYKJWTTHNHBBSRTYMJIDVZJYPPKDBUVIORVWOEVMKTQCKLAFOFJYOLQVQFFCERXAUZZBLYPRAIJURGADSDDIIGBDGUXNQUTCBASCQPCSELEITSEEWNZLVRJAGCLIOFYNFPNGNTWMXSAFGPTVORMDVWOFY");
    tmp_msg_0.memento.assign("TLEYJPTKIQPFNFNSELOZFZALZEOUHWSBHCWTMCGSKBOTPWTADENKLKRIJORVENMN");
    tmp_msg_0.duration = 21015U;
    tmp_msg_0.custom.assign("LJRDPGPMYNKAGFWPALXEFXRCNVBZUSBJQIHDECJEECCBHIKDEUPKZLTALRIBSFAVZZRNWEVTTLXFHRWLKQSOXQUMSOAYMARKNBUVASZOHQOIXCPYNQWMJGDUGIKJLSELSZXEBJEHOGJQXDFQVSTCFPTMNSKYSAFLOWJWMJDBFNGQPZHVTGLVCRIUNWMCXUWIUFPYMY");
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
    msg.setTimeStamp(0.21218515645795932);
    msg.setSource(11222U);
    msg.setSourceEntity(200U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("REPQYOJLRZXGWPWTMINGQJAXOZXSFKTYTSBZXIMTQYJHVEKYWAEDTSLTEHXUYPZGNXUCFJJNRWSNVCMROBPUKILMPIWCUPKYBICUQRGXFSFOAGSZITUGSLTHCEDKZIMXARNBBUFPXOWGWOJWFWETPBNKXABOEHSR");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 4082857134U;
    tmp_msg_0.id.assign("MBONHMUZYKKGZDRJRKNALDTIDYNCFXKZASMKLLAZUZVIWMHXAXHRTVSUMUTSLJWWWFAGYQIPAHBFTJASILWDIUHISRABGYLDUEGIQXAIYQXOSYDNYVFPVUBDBYTEZEFDOQLGLVQWPWEVPVTTCCGEJFUKOHBJSELJQCETJCNGYNHPFIMPSHSPCCMFMVDPNNXGCKOWIQOEZNOGTQCOHPJROGPBVABDYERSRNKOMJEFXZFBZHXTXJVUXRWKKCQU");
    tmp_msg_0.memento.assign("OXMLLWETUEMIYHMAWVMTQCQYYYFUEJXOBNEUVRJZBSPRGUNKKSXYHBUCUDSWRXZPGPCZVKSJDNGRZJMDJATBBZJEDIUGYANWZYNBLYHKCS");
    tmp_msg_0.timeout = 10001U;
    tmp_msg_0.lat = 0.982434560925796;
    tmp_msg_0.lon = 0.7995429889851855;
    tmp_msg_0.z = 0.6342785072218351;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.4052018260090948;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.bearing = 0.9814249811387861;
    tmp_msg_0.cross_angle = 0.7925971828490694;
    tmp_msg_0.width = 0.35034982704575224;
    tmp_msg_0.length = 0.19310119114464364;
    tmp_msg_0.hstep = 0.749983003499035;
    tmp_msg_0.coff = 248U;
    tmp_msg_0.alternation = 156U;
    tmp_msg_0.flags = 90U;
    tmp_msg_0.custom.assign("ZUTFTWWXOCOUFYVUELPIJVHUBDBEXEZBOEQSWMDEMRFEOBRNSQIRKMRTHKJITAAZXEZMDKBOWOJIUQWPMSPMLQOBTJXHRDXCWIXEDSJSYAZGTZWLNAROFQJQURTVHK");
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
    msg.setTimeStamp(0.41212827016453857);
    msg.setSource(28233U);
    msg.setSourceEntity(75U);
    msg.setDestination(3531U);
    msg.setDestinationEntity(198U);
    msg.source_man.assign("IQMJWDSHLCZN");
    msg.dest_man.assign("IJHAGIAQNPDURSRNUZGVCKAUGEHOGQXSDYE");
    msg.conditions.assign("DSTYOZZELPUFXVKCCWONDJBDJNIUYBQHGEKGAQUBEJTVEPMETIBGRTWLMNVEMFKOXYQESSLWPQWGWSQVMTFSGAHPOUYGSYRZGATASQHICMLRFGCRAXRIBOHQZPRXFBULVIFEOZSBTIHTFKARCBPFKKDJHKITJPTNVIDJRRPNKMXWVLVCYHXNGVDBMZWKXJQZSMLPCUUDHOLENJWOQHYWWEIM");

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
    msg.setTimeStamp(0.861462361994227);
    msg.setSource(65146U);
    msg.setSourceEntity(100U);
    msg.setDestination(20090U);
    msg.setDestinationEntity(185U);
    msg.source_man.assign("DLNCGOQVORQCMJCAJMPFFHYAKHMOKASGJIPWNBUAWUIZQNRHOVLVFTOXGSREKMZPBDNEOVKQUUBMBNCNAWIQMAWCDLFBLDVRXBGLCEVCXXPHYSTZLIWZDMUNDUJYNATSDZGICRJUQQDPVOUUASYSZHERBLTROXZSHHRYZWZFYFJMMHQUIBTVPXEQROELPXSHXEVYIFMNONSGZQKAJGWLGEBSFJIKJXGTYYCKIBDTCKETVXIKP");
    msg.dest_man.assign("PAPNHILNUYACUNPVLZMVAGPZAFQGARJAXBPYFTEMCNGKCWJHNIFWVEGR");
    msg.conditions.assign("XZUNCIJHMJNYZHQAVCKPPSVUQSIWULMRYZOASFRMVWLJRBGVLEQORZPAXVLTIKBRALGDKQWSSAUUOQZHNMDCANMIHXYGJPIYHKFDOLLNXJQFXMMBWKUORDAKZNEAXTBROGEGIUPJTXWDTYGHZEHNCSPCN");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 20137U;
    tmp_msg_0.value = 96U;
    tmp_msg_0.error.assign("BWMQWLKIHTFOHQVQHNCSGYKNHHLCLKQOWDKKLRGZSFOSTMUMAPRUAQMFUJXDECAHXGTMUTRWTHYSFTMADBWPPOOVTSOAGXINFICCJUJMXKJPGHEIDSEQOQOBIRQWZCXGGJNLNVMUEUWQSEYLHREJVMUBNAWZCFXBJIPALSKSLW");
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
    msg.setTimeStamp(0.5017045077259903);
    msg.setSource(25934U);
    msg.setSourceEntity(144U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(84U);
    msg.source_man.assign("ABBIURIHVTXIOZQOOXVLYSDZSTSZZJGUMBNVWFPWWPMERWRLEMQFFBLADIVTWSMYHZYLSQMPHVRXDVEJGYRKVPJIGOFNAUKARRPBUQGZQIQFTEDDFTLXQZRYGPTYNOKBEBCJCUNKAJXLHSQYUMNGNVKKNIWAVOCKLFQEHC");
    msg.dest_man.assign("CNHBQKYKAMMUQJOE");
    msg.conditions.assign("CFPYQUXITCGVNHMZFZFWVPZYSYAURNSLAOUYKIZTRTZXXPENQQNHVMQUEATCBLWCBTVRHCVDGBOAUTGOOYEFWQBDZHLMCKSDDYRFV");

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
    msg.setTimeStamp(0.8176985792799343);
    msg.setSource(24094U);
    msg.setSourceEntity(147U);
    msg.setDestination(4274U);
    msg.setDestinationEntity(210U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FXDAYSHOCAUVP");
    tmp_msg_0.description.assign("TIHTDAMBFCHQOYDJDGVFATCFFSNBOSQYGOLCWDSQBKFKOIUVCRKZIFWWRUTAKJULF");
    tmp_msg_0.vnamespace.assign("DJMKKIEPPIVQSXUJHREUMBSDRGRSMNKXVWSAKXFUMEYPWJIHTUVGADLQZOKNXOCADFVMCNFWEBYAEQZMIBPOECZYVRIMLANJTOESTZCCXDTIBGPFDHJHSXKPDBQSXTLOVWGYVIITZXGWYCNFKYUFVEDZGPKYOOGIKWNRDGZEHJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CPKHTWBMAXZDYBQWAHWYPEPWHVTJONTNRYZKXBVFUQQWTMWLZASHLIUNCHEZICQPKEUGRDIKLJNBH");
    tmp_tmp_msg_0_0.value.assign("HEKSIICEORXYPEBFMEELMQLEDBALHRSBUIZWCSFOXBJFRHADBZLAMGJWTKZHTSGYHKKOJWJGTAVMVALGDIQCQVNHLVRWZGOBADQOPTRVKWHUBKMQYGCPJWNIOXIJYRRPFIXQXYVRJUZIPLILXYZQTLLYEXFNMGSPPFZPGWNTHCMCOAWUKDXDDSYCXDTPUAKINVEGATQUUVCJYFT");
    tmp_tmp_msg_0_0.type = 106U;
    tmp_tmp_msg_0_0.access = 85U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZWBFQNWKKXVVBIDYHIMFRDADRJMYJDVKBMIUNOSEKUNTZXUUNIZHGBNZTCJTBFKAUPHTFSHZVEEIGOZMOROOPFOFKMQISNJUQYUZAKZLBBHWVCFSGIWAACEWCUBLTRJJYOPLNKEOILMXSZWPGJSXDQLPCRXQHIVPMHJQLVFPCVWTNQEXEQCPXGMJYMEIDXCRLCYOKYQXFGCRUSATHFZMDSDAAGBPRLVPATRSTNUAEHNORG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TTRATLOFQQABUTONZDLNJSHAZTUPCXWFYZHHVKEKYBMFMTBNKNMFBGNIGNHXHUKKPUIJMGNKOORVCHEFQHEAFHYYWLRMPVTDBQEPZDOEHAXSIRCXBOKGWLADXDVWGFMCSRVRVZKJDGWQRPJKMMXGCDPBPIZXLDSSPRWJXZMYLAWUYCGPUJCTERRIVWWOFYWUZODLESKMYCINGQOUVNXJQSBXEGLUZQIBLBEINCIYZTJUYJHPSFLIDSSTACEV");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 3558490162U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("JRTIXEAOAKEAEXZQPUDQCNNTHNBSITZGWXOGRVBYUSNBGQFDELAMOGVDXLQSIJGYTZIGTRFOZDVDCKYFMMBLMHEDWLXJIDLTGCHBSREVOQEHKHCYGVPUOFIWPMSBHKXIAFWEVWJAAWIJOYLMCQOHZVKMHCZHBDPEALWPPEZSFJSKJUUIFUKRQTASWZXNLSNK");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("QITWGYJZBHXQJFZQYTTGMEISNOCAHURFGDIOVQGREXXDZOTLYRHSQIWHOEURKWZFGJQUPHTLBBXJCPKPDWNUHZYEBGOXYDRQRAPYQAZKTSTFUKMJPJFSLRTDXKOLMD");
    tmp_tmp_tmp_msg_0_1_0.timeout = 46435U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6439912624576043;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.29492104951392495;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5933286140677235;
    tmp_tmp_tmp_msg_0_1_0.z_units = 16U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.5978726071575917;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 13U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.0680323035276339;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.7817082271581974;
    tmp_tmp_tmp_msg_0_1_0.width = 0.8542383770258737;
    tmp_tmp_tmp_msg_0_1_0.length = 0.2776165673768166;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.8716713775341692;
    tmp_tmp_tmp_msg_0_1_0.coff = 44U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 75U;
    tmp_tmp_tmp_msg_0_1_0.flags = 77U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WUUBTPQWFAVQQYDGSNCTFTGFKO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("EHGASIPQDDXHFYZGMKIBEGBNRLNPFQDQEKYTUQKWKTWYUPSVMGKUFALGNMKBPCDCULNDTPKBEITVXACOZAJVZNLSAIWOYAKFZHXALVBTZCWMILSSVBGPUWRHIYRCDRFZQFDSBQSABHYOYEURDWITEXZEIXGOZOXQUNOBSGUENAHCTQEAJUOPPUHSXJIRFRXWRGVCFMOJOXJNQJHFYWWBPMGZKZVMCMHYJFDELJQNKCTVLOIRRJVDCWTMLJS");
    tmp_tmp_msg_0_2.dest_man.assign("KVKUEQTFZYQXCGHLOKAOTSFKEHECXFVUNPNZCEQHRNWLJJQQT");
    tmp_tmp_msg_0_2.conditions.assign("AEKHZFHTEGAMJCDXQQTEIZFODWGSVCSVTQGLDKHRFFNAGJLZNQJUUAUNCRVMBDSGHKRWTOITLWENVGBJSPWXBXKABMXXMVZYAKOZWZHLEYJAIZWNIUTJFKRNTJWXIPSEJCUVRLOBBYFXMSYPDRIEPKAKZWQZLMOTFGFHCN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PathPoint tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.x = 0.6027804660838311;
    tmp_tmp_msg_0_3.y = 0.9487375703989804;
    tmp_tmp_msg_0_3.z = 0.6488400756155248;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PathPoint tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.x = 0.4863852990530839;
    tmp_tmp_msg_0_4.y = 0.8921856888589219;
    tmp_tmp_msg_0_4.z = 0.41297632620470237;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.850173625193918);
    msg.setSource(5237U);
    msg.setSourceEntity(164U);
    msg.setDestination(9674U);
    msg.setDestinationEntity(46U);
    msg.command = 254U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XNGCITWFDLWWNANAOTRLKMAMIFIZHOSEFCYBIUXKIKZVBKXKSJLXVAWBGTCPOCLRYOVTPYSEDCPXHFKVZFBQLNWONUDUSUHFWEEAVSPZVDABSNJITSTWMCIPQXFGGQHWYBDRPQJKZAZXJMWJEGSNMYAEOQMUZHGJHXVRLFJUPKRUJKDKRULQBSBUPDHCYJRQQD");
    tmp_msg_0.description.assign("ONLGKOQRABBZUZSVNNITKZKOYWLGTEBDUAJWTKKKRSEAOCXPPLLBIMWHTAYL");
    tmp_msg_0.vnamespace.assign("SOPMOHQTVIUPCRAVHILQJIHUBXXHAKKSJFRAIFNEUFLCLELJPUSYMDYVBOXNAUBHOGFZKFMPTPSXUFTXZSYBQNQKWWBVMWRQHYZUM");
    tmp_msg_0.start_man_id.assign("TRYVHNYDDPFUZYRWCGSVIHBRJGONFGNLRRNJBRGNZPLRZJGXOKEWSBFKSAHANQTZPVEUXSCLLEVIMQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NDERBBZDQHXSLHOSASCCPBMVZIIGUNBTFSBNIMMULPOHEAQKNNKIFWHNRZZLYWWEHXMRUQNFUTMKGDTODLPIZOJEVVRZCFUROFRUDUBNUTHIKVMXFBYXGBYICJISUYETAYTCHDWXWSQXHXCRSGRJEYYCPAWJBNFDHMQTQZPAUZTLAMXGPOOKWQDJIVANSLPOJLLPEBGVEKKXCEDKWOEKYFSGYCQFZJQGIZAGGDYVJL");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 487428210U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("LTCJVLUBQNOBPASCPYZSIKICXMWROSOHQPARKUQOPGDLXAMX");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("PVCCXKEZJHJQFTYOTSIHLTPCYKQWMMUVGOJSCARPGENHEFRZTVZDXRUBKJLLIFMPNDPTMJWXDHREEVNISKZCCQNPCYLMWKUOQUBGNMDGHLZXHQXKASPLJQTA");
    tmp_tmp_tmp_msg_0_0_0.timeout = 49364U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.24702878400850548;
    tmp_tmp_tmp_msg_0_0_0.direction = 30U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BVZPNXOKLCOHEWWFRNSWZMEGQNPIRHQSCGBIYIADJHUCZCPWVXKPCRNQROLVDYSHMUPXLAYRBWMMFZVUATDDQRDDCMKGZYGFFHBCBXPRSZHNS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleMedium tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.medium = 254U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterDensity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.1576956511694373;
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
    msg.setTimeStamp(0.6025736748886309);
    msg.setSource(33324U);
    msg.setSourceEntity(194U);
    msg.setDestination(4873U);
    msg.setDestinationEntity(163U);
    msg.command = 110U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZAVQJUHGHEJJJWQVSNGFIGVGTKALHHAQBZTJIZAFWKPVPFYTRFLOZUMXHYZWQWYXTDGPMIZBDOIHCSBCKMEFDBPIEONXDXLNKTQZXBKFDLCTOGNRTRMAUNAQIUNCVFJQYGSMEFRHZXLEMPRJCAPTOIBHICEYX");
    tmp_msg_0.description.assign("MVLJOEINCJFBRKCSFBNTEOSXKUECOHJZYMTCDELFILHEAIFXOLXFJAPGZOYBLBNWILXDMFQMPVTGXPUUAEVQBRXLWBPAZLHURJPCFGTHSUQOTRUMSAHKSZZMNJWYYNYZSJLKFPBQBTPIKWGGWRHNTQSWAVREORGQKYAWSVVXWITMOXFMYJKJVCADPNQDWD");
    tmp_msg_0.vnamespace.assign("XTYKENWRWAWWQZZMGPHHWNIAKJMDIJNEMEULFOSLWXUUDLFIYCLNSXEYWBSYSOOZNIFLHJRHJSRFHQZVJFDGORRVJCBITLAAKITFCMHFBEPTPPZAAPGVEVBGDLWOSIICXCINBJULMHTPTPUYKTKAOHGNBVJXXWMQPBEBSQDJYMCXEAKECNUOERX");
    tmp_msg_0.start_man_id.assign("SLHKPTFBGOLUXDCNJVBEHJUYSHNSFEYEKSMXIOBWMDTTEBVLTSHXKRRGNRQZJXVIYFRAXSAWKIUWQEWDONIBIYVXJNPZDUQDVPNXAQRGYMMDCMQQLCTYCRZQKWTOMBAAHLONDBPDSWBHSGYVOWSIUXGFCFPTNRUFBHRXUFZUQAAGKHVEPGOTSZKHFXMCCLKAIKFBZQGOLMCDEJAMUZLJZKWGIGRLRVMFVVAN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GHOZFDVKRCFUTPRYLQPCFZDKDZIQYGMSFQVRDRIKKIUAJNAPFLQYKACBFHYXCPAIWPEMICLOLVKNIQWQHVULARIAHHAIXBYX");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 929841178U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("VRGPMMXAZOPOYXDYOYLXTNPZVIQCAACRRBWDYRRLLNGBKGTYKULICJWYLXXKDGAASUWDIMVEOEMRLNSXNLFAGCBOFXWGFEFAZINZUHDFQLHVSHZRISDAE");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("MZQGXPIEXLKXURYJGZYIERPHQNTYLJFHJGCUIWW");
    tmp_tmp_tmp_msg_0_0_0.timeout = 44300U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.32529513077550676;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8755155676667358;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7648044335942236;
    tmp_tmp_tmp_msg_0_0_0.z_units = 240U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8961953454085057;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 165U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OHQNUTJQEFZIEIYDKBALSYZPURYRVXOAXLFUTNEKTBNGTVUICMQHLYGBTMWVCWAIGYSMCYFCHNXFBITKBCGCQQDWYBYGHMJMXONEKXWHUZLXZRSGRZKAAMFUTMVMHEZOPTQOIAJLLMFPNOJJFYJBOGDQRVJKDZVUHFZWEBHUDNKPRQPMAVLDSURDSSFPAVEXRAWBILJSN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FormState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.possimerr = 0.8456973372949208;
    tmp_tmp_msg_0_1.converg = 0.8839738127937057;
    tmp_tmp_msg_0_1.turbulence = 0.8483885778746131;
    tmp_tmp_msg_0_1.possimmon = 163U;
    tmp_tmp_msg_0_1.commmon = 150U;
    tmp_tmp_msg_0_1.convergmon = 110U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CreateSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 1073246924U;
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
    msg.setTimeStamp(0.7434570128894089);
    msg.setSource(57379U);
    msg.setSourceEntity(120U);
    msg.setDestination(55579U);
    msg.setDestinationEntity(199U);
    msg.state = 95U;
    msg.plan_id.assign("UIUWLIMTJGORWRTRCWOQJSLFMKASIBLFVBXPD");
    msg.comm_level = 2U;

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
    msg.setTimeStamp(0.05937383554669784);
    msg.setSource(6648U);
    msg.setSourceEntity(162U);
    msg.setDestination(63681U);
    msg.setDestinationEntity(226U);
    msg.state = 153U;
    msg.plan_id.assign("PDSBEZTMGXXWISLLFRUQBYCAYQMIPQWSQOCFZYFXJXWRDTFBBNSBJSFSLTXGNPFQUGSMNUZOKNZDZOGRWAQWPVXRKQLOXLQOAUTLNPKCMVMAHFOGKIIVHWXMPCWDMFJHQHUVBSVPDVZNVCILPZUZLKAHJSGAVYHJNBMTFHCEIOOROZRCDIGJCWAYYCK");
    msg.comm_level = 126U;

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
    msg.setTimeStamp(0.41659033204992957);
    msg.setSource(5131U);
    msg.setSourceEntity(88U);
    msg.setDestination(2960U);
    msg.setDestinationEntity(138U);
    msg.state = 116U;
    msg.plan_id.assign("OEEZMJCTHXURKRSQOKFYAZHNFEIJHCQLNFOSFLIIKNNZGUTVXQYBOMSKKKDSVGTPJKZHIWRZDMRCZRMWYPQXGNOSBAJDSMJPWVRFCLBYKDPROMENSAWLFXXGXEOATIZYCQUG");
    msg.comm_level = 196U;

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
    msg.setTimeStamp(0.30695477425765916);
    msg.setSource(11732U);
    msg.setSourceEntity(80U);
    msg.setDestination(25579U);
    msg.setDestinationEntity(182U);
    msg.type = 91U;
    msg.op = 50U;
    msg.request_id = 2738U;
    msg.plan_id.assign("FZNCNEDTCIXPAHJXBNMYLGESFITYAXKWOMZPMSHXOIIUTAQMHROZLUHDEVYNDPVONGPSLFXWCCBHTXEKATJCRRXIFIPSNIZMIEFBGDXLGQKLEOOSRQMWHWHWKALFAAZETEHOYPRGQUSDRJEDQSRNCWZJDIABYLKAPQCZRFPYULTHBRYGUFCDMZQWDGHVSQZNJYBUFJWOSVKSBYUPKYDMRJGCKJQXNUOWEIQJ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 2716225378U;
    tmp_msg_0.id.assign("EDIOPGFPAYLNUXQXBRWBHXBEQHQMZNFJZSMIFOXNZDDKGCNZRPXPEOKLIUGEDMTRTVSNDAJIMABRUIFUTJTVNYLTWUKQNPAZOGBOOMGDPLSOKCFVABCSFCARJFWAVLCMCUJJTWISVJASTIYEJYGWQZEJYFALTDBYVKUVKJGBWMRHSAOQRQUMPDWREHQTI");
    tmp_msg_0.memento.assign("DYHZKJOAFDJUJXUZMTGYQZTDQNHROWSRKQNVVYUGDFQSHCBTTGLANXMIKDPGSPZOISNNCWELRHYMIFQOEWXXPVMJVQSCEJDAADNPYKEGUMJFTXNLBAZHFWOESEIUTCRFOMWIHBZYNVGCCPZLVGJLBLWTLFKPUKNEIPERFCO");
    tmp_msg_0.timeout = 24401U;
    tmp_msg_0.lat = 0.13551696151232884;
    tmp_msg_0.lon = 0.49086449552475375;
    tmp_msg_0.z = 0.7503421556264415;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.duration = 19865U;
    tmp_msg_0.speed = 0.20083597917538043;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.type = 160U;
    tmp_msg_0.radius = 0.8086755367266583;
    tmp_msg_0.length = 0.5303015600593757;
    tmp_msg_0.bearing = 0.5791652781437905;
    tmp_msg_0.direction = 123U;
    tmp_msg_0.custom.assign("NFSMBDERDNLHLPDNYUGIRUBNCJYAASMPCUZCNKCBDLIFCQEX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CSNKQMUQHXRITSRXXHPGONJZMUGBZVTYW");

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
    msg.setTimeStamp(0.2230971260844945);
    msg.setSource(43761U);
    msg.setSourceEntity(52U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(58U);
    msg.type = 35U;
    msg.op = 223U;
    msg.request_id = 19178U;
    msg.plan_id.assign("SNCYTAGGJYHNLYAJLSOX");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YLHZRKAQMBXSYROTGIHWIVLYUDCSVWQYXUZBAGUQYHUPRMSZQOYOKTEKXNCZMLSXADVEIGLRWTPUNKAVHONPGZIJBGNSBCOUKELXJPDEBDQMUTRIJZTDJIYQNWXOCLBLFTPYHTXHOAPKRUIBEKRFHAFODEFCRZKLDJXWEIXMFEFMASYHSBCPBFVIAWMONMZBGVCATWVJUGDDPCYKLSQVPQFJKSXENJSWMGNJCUGWRQEQVPIM");

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
    msg.setTimeStamp(0.5378641599613545);
    msg.setSource(24699U);
    msg.setSourceEntity(157U);
    msg.setDestination(50076U);
    msg.setDestinationEntity(80U);
    msg.type = 64U;
    msg.op = 252U;
    msg.request_id = 3319U;
    msg.plan_id.assign("DJOHLIYKPSFVMZMEWJTNWKQNWDXMUUUAOYLOEUHZJJBECCIHYJLHESBFXLOAWDVWCBVSKYDYWRQZSQGVIWXJBPBRSOIZXGYYPYUONEJFREZWAXQMKRZCKOGHRDVVHJGULYQOFLUCCPSRAWGGDKVCFQFWMKPQQBIREUXAKMHSYTFJMPVTLPILLDREVMS");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 20026U;
    tmp_msg_0.control_ent = 243U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5000173843689778;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 93U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.3049507084369023;
    tmp_tmp_tmp_msg_0_0_1.z_units = 63U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.16945154357792025;
    tmp_tmp_msg_0_0.lon = 0.7066362151475157;
    tmp_tmp_msg_0_0.radius = 0.9772373178502636;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 84U;
    tmp_msg_0.proximity = 238U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PYKTWWLBTGEMAVGVGHGEWZMLYIJAJRWZPJMURKCMKDMXDXDPRQHQTNJBWUFSOQXYHEYDRDCWMRFIVLQXXZVVFWTPNCGEDOFFNRCUPRUGEWFJLNPPNIYHOZSHTIOSCJKLMHTLDESHFTBLJBCFZLMRIQHAQKYDEHOEGWQSVOZUJYEAANNDIWBZGBAGYEIZVACSHYGFBASNIRXKVSAMXTPKVTUXJSLODUKLXBOQICTFPVZOOBXRAUCMUQPCN");

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
    msg.setTimeStamp(0.7494173343637351);
    msg.setSource(18874U);
    msg.setSourceEntity(69U);
    msg.setDestination(40969U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 65077U;
    msg.plan_size = 659230114U;
    msg.change_time = 0.8401314679374595;
    msg.change_sid = 53817U;
    msg.change_sname.assign("OTEVBQACLMHLGLESUUSYUOBVFVRTDFYTMROCFXBEIBSVTHPUANBDFBIXAQMGUHTKYWJWFETIZFJIZJXWNZOEULNEGIWYGVZLXKAPYQYOQQJBIGSHKRNLDYGNAJSMCQPAIFZKRSQPUPWDNZOHMKHNZXCCNRGDYGCSUOWQPEYDPQGUWFHKWCAXFFWJTRXXNADNJBDVTAMLSVAKCSKOJZHPDILVXRXP");
    const char tmp_msg_0[] = {-113, -90, -64, -18, -72, -100, -75, 126, 8, -101, 55, 1, 88, -84, -70, -85, -7, 13, -124, 101, 33, -126, 5, 11, 112, 41, -90, -12, 43, -8, -63, 22, 3, 50, 21, -46, -17, -26, -25, -102, -27, -18, 6, 101, -111, 90, -125, 67, 117, 19, -2, 116, 47, -15, 33, -32, 70, -99};
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
    msg.setTimeStamp(0.6323975730591661);
    msg.setSource(45604U);
    msg.setSourceEntity(128U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 59059U;
    msg.plan_size = 1307378426U;
    msg.change_time = 0.12647789749492033;
    msg.change_sid = 30353U;
    msg.change_sname.assign("LNJEECWPMVSODVRXEADMQCMTJDLHWCHNWHBRRUGVKNFDRIGXJIUAKWYZZTLEUGCWKWAUUPTAWYOXOQTONEHQZJOKXWHPBUUPZUKXTZJCAJXFQOIXOBKPMZ");
    const char tmp_msg_0[] = {10, -71, -107, -117, 10, 43, -54, -8, 39, -54, -123, -36, 32, -46, 39, -77, -12, -70, -118, -30, 12, -61, 41, -102, -90, 80, -114, -82, 80, -35, -25, 89, -28, -51, -22, -87, 86, -4, 45, -55, 36, -55, -26, -78, -23, 93, -23, -73, 104, 94, 80, 28, 61, -27, 36, 69, -91, 0, 79, -43, -124, -3, 61, -42, 66, -28, 81, -80, -126, -6, -38, -68, -63, 112, -15, 11, -101, 23, -44, 45, -92, -114, 42};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VJYEIZJCCFPPYMECGNEATXOAWLBKBJGWMLJXMNNTZQJUZPKOMAXFPTGHQANCMWUMJYUFV");
    tmp_msg_1.plan_size = 64294U;
    tmp_msg_1.change_time = 0.10685280598126401;
    tmp_msg_1.change_sid = 16966U;
    tmp_msg_1.change_sname.assign("GECIPGLIXXXVAZQICSFHRINSYARXBQKWOZREMKKIKYDXDGFSTAFVMMRWEJMMLJDJQSYQRFLMTZDXYPDKNIRBIFOUVUFMCGOPRWEZVUTKNMONUPQPTCPXFLENOR");
    const char tmp_tmp_msg_1_0[] = {21, -14, 41, -55, 80, -13, -86, 115, 92, 82, 78, -58, -81, -77, 58, -14, -83, 39, -104, -78, 65, -67, 126, -42, 0, -52, 60, 103, 46, 91, 120, 61, 40, -45, -97, 20, 22, -20, -88, 102, 117, -5, -74, 112, 81, -86, 13, 56, 81, -8, -117, 76, 90, -49, 23, -100, 75, 107, 63, -66, -104, 93, 126, 68, -4, 91, -116, -78, 61, -25, -22, 50, -86, -33, -33, 114, -84, -96, 111, 68, 29, -121, 94, 85, 2, -111, -113, -58};
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
    msg.setTimeStamp(0.4027895157486481);
    msg.setSource(5908U);
    msg.setSourceEntity(244U);
    msg.setDestination(34804U);
    msg.setDestinationEntity(229U);
    msg.plan_count = 63958U;
    msg.plan_size = 4100473800U;
    msg.change_time = 0.22571810453588226;
    msg.change_sid = 20721U;
    msg.change_sname.assign("LXYLYFYHGBPKUVMONRHMGKZDYDGOQFXKXJLYBUTDMTIRIOWWPQGCJLGNFPHOQFPARFCJTCSWBXXSTTMDGSZWSPHMVWEFMQYDAVNKRVZXPPQNJGAOHELBRLHZMEYUAGPSZOOJSWWIKKW");
    const char tmp_msg_0[] = {102, -26, -19, -126, 9, 31, -103, -5, -123, -100, 38, -82, 59, 22, -115, 52, 125, -60, -127, 111, 89, 114, 80, -38, -117, -84, 78, -28, 27, 35, -5, -19, 75, -109, -53, -125, 2, -118};
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
    msg.setTimeStamp(0.5618013703045459);
    msg.setSource(38551U);
    msg.setSourceEntity(246U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("XKHIRTYNWZYURMSATXXYAUSOFIEDOZRVRTEMHMZQCEFENILCKICAQUZKTOHVFTYDURFPOOWTSWQFUJBNDSEBIPFDOLLHPU");
    msg.plan_size = 55421U;
    msg.change_time = 0.6163247601454406;
    msg.change_sid = 37615U;
    msg.change_sname.assign("AESVKAPOYUJLQRPFUDHRLTTMCQXJJYHOQCNAUKJSJFIHZDSZUHLSSWGYECIMISMNDBGTAENOKBGAYZLXXSEZQBTUBSIFOAURJDTTMWNKQD");
    const char tmp_msg_0[] = {64, -121, -114, 16, 117, -36, -91, 81, 39, 30, -34, 117, 118, 37, -121, 62, 49, -80, 50, 53, -37, 111, -64, -31, 52, 47, 44, -31, 113, 55, 7, -111, -76, 96, 31, -29, 3, -5, 108, 124, 17, 50, 74, -7, 38, -65, 88, -80, -84, -79, -122, -59, 60, 45, 49, -14, 1, -118, 52, -19, 84, 9, 25, 123, -10, 26, 27, 92, -121, -23, -28, -89, 1, 16, 110, 57, -25, 116, 52, 56, 114, 31, 8, -72, 83, 116, -7, 5, 3, -2, 122, 80, -79, -116, -25, -122, 24, -44, -104, 60, -87, -111, -111, -109, 116, 97, 58, -123, 33, -101, -57, -12, 116, -19, -54, 15, -61, 30, -115, 35, -66, -85, 35, 61, 15, -42, 14, -85, -95, 89, 57, -25, 30, -55, -79, 110, -94, -119, -80, -3, -87, 5, -71, 100, -62, -109, 41, -56, -76, -28, 21, -41, 53, 39, 78, 94, -45, 107, 54, 102, 87, -108, 99, -20, -34, 28};
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
    msg.setTimeStamp(0.31934119105097514);
    msg.setSource(24803U);
    msg.setSourceEntity(109U);
    msg.setDestination(30424U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("PWGEKWMOPLGMNHHLYHOVKNIAVZRKZUYRGDRQHFBSDQTBMIJGYEDGJONHVMWNBMKXJWKWOIKDJWNRTQMVHXDOPRJLAJHQQDUPMMBVESOZZFPSXIPHNAXFTCAJFLVANWXBAYVFC");
    msg.plan_size = 14433U;
    msg.change_time = 0.008886543444922457;
    msg.change_sid = 20445U;
    msg.change_sname.assign("TEXAAPULYNDKMISMCABQVAOYRTCHKNDFWTTWIJOLRMKOAWYHNMVCRFKRFOPEGHFWHTGPUKERDIUESURBOPSKZVJBANRQGHNJBUWDISQVDLUGUHFYATMIZXJBDDQQCAYTEBLXJXDYBQZGQDSECBAYKPFZWJFHALZNXVCR");
    const char tmp_msg_0[] = {-49, -5, -49, -105, 84, 77, -126, 107, 109, -72, 66, 65, 113, -76, 50, 112, 71, 71, -121, 60, -7, -39, -126, 81, 103, 83, 111, 65, 38, 118, -4, 28, 62, 5, 107, 61, 32, -2, -79, 45, -65, -110, 28, 87, -39, 10, -74, 94, 75, -108, 17, -93, 72, -113, -2, -5, -121, 9, -76, -123, 80, 126, -13, -125, 85, 101, -4, 36, 73, -12, -63, -112, 44, -109, 27, 17, 49, -102, -37, 119, -26, 89, -107, 120, -2, -115, -107, -30, 82, 73, 7, 114, -3, -77, 24, 72, -1, -123, 34, 53, -128, -93, 11, 81, 66, -55, 56, 31, -111, -65, 46, -74, 82, 85, -97, 68, 84, -84, 67, -23, 43, -3, 91, -114, 106, -14, 114, 28, -106, 121, 52, -122, 5, -99, 84};
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
    msg.setTimeStamp(0.4513249411258645);
    msg.setSource(38916U);
    msg.setSourceEntity(22U);
    msg.setDestination(53610U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("BFJVMYHBYDAQNVKVMIILFQAIYGKMGCZQJTUCSUDQTFSCBLGQXHJHRWAWEVRPDDFNQZWXPYKJOGUUSINKZLCABRYGURARZNFLCKCOIUEYNZRMFLAEMQWEUNBRCAPZOMRLTTITHDLOLSNAEMTDK");
    msg.plan_size = 27789U;
    msg.change_time = 0.18529742093804802;
    msg.change_sid = 43926U;
    msg.change_sname.assign("CGOLQOZDJXEGGQGWMMOHQLCWTCCIUFDFHFUWTZYKISHBSFWQRWKUNFKMQXHJKTQXSFYJMVARUAVXIDDTNZPKRUOYKTDJEIZMCBEHYONMBNYJAXVULLWLEEAHMEDUIPVDFSQROHIYOVRZPRAPAPOCVMAFUGGODBVQYKABPWLUHCTWJRKQXEYILVPPWBSJPBGIXRSGJRIJZLATYFQZNTSNLCRW");
    const char tmp_msg_0[] = {-53, 79, -110, -32, -117, -121, 75, 114, -30, -34, -54, -40, 16, -87, -79, -81, -20, -102, -41, -47, -82, 99, -59, 18, -18, 85, 113, 40, -25, -8, -4, -34, -65, 120, 62, 57, 69, 47, -16, -15, 80, 30, -57, -107, 80, -120, 103, -44, -55, -122, 56, -10, 94, -83, 52, -14, -62, 116, 70, 0, -107, -7, -62, 41, 101, -24, 103, 43, 45, -37, 90, -72, -64, -76, 89, -76, -37, -21, 29, 98, -69, 90, -56, 93, -50, 63, -127, -125, 74, -110, -107, 96, -7, 117, 111, 89, 101, -22, -19, 109, 50, -106, -62, -119, -37, -66, 15, 99, 17, 98, -94, 89, 49, -56, 64, 49, -81, -118, 23, 105, -96, 120, -23, -14, 18, -35, -108, 33, -25, 7, -73, 37, -13, -21, -33, 106, -81, -80, 86, 120, 91, -116, -50, 54, 66, -73, 52, 79, 9};
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
    msg.setTimeStamp(0.46158231978210984);
    msg.setSource(11241U);
    msg.setSourceEntity(220U);
    msg.setDestination(56986U);
    msg.setDestinationEntity(114U);
    msg.type = 30U;
    msg.op = 109U;
    msg.request_id = 44467U;
    msg.plan_id.assign("GMSVWYWFSBLIWYTEVKLJSQIMZZLYIAKCSBQBEPPYJEDCHHBBTDRFOOCTOLQUQXQI");
    msg.flags = 12154U;
    IMC::Aborted tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XXPXKTMGWHQCYAFYGZDHWYTLPWLTXCSTISABEMOBCWEXGBVEFRHHTWQUVVBDRPMQKDIZYZDOPBZFJREBPONYHOTNFNALJIGZUGHLPLYCUPLFWRLFBGHOJQJTIMPECUNVSQSPCATMURCJMQXSHSNIYBLAKZAKGFDNCYRFDKUJQWIFXXTKGMICYESZIOALWPJRRGUEKZV");

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
    msg.setTimeStamp(0.31147317035695377);
    msg.setSource(22688U);
    msg.setSourceEntity(228U);
    msg.setDestination(7146U);
    msg.setDestinationEntity(178U);
    msg.type = 69U;
    msg.op = 109U;
    msg.request_id = 20249U;
    msg.plan_id.assign("YZLGZCIKDHFSFYOUWPZZCKXBWUNWDVNTLURCFAWTQIUHPPCHQIISYRTVITDJEZVFWLAWYYHGPYQDBVXOETPJPKWQKOWWMVOAOGWAFMGSRPRBAKLCUIFUNNMMLUB");
    msg.flags = 26133U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2155902436U;
    tmp_msg_0.messages.assign("QKKGPSRAYUBEWRCNVMWUVCQCIVVTBSDLGVSASLJMILQHMWVLKHNDLBYWOPPSFFZDQZWLFJTYHEPOTKEQQVTQWHYANORWAUROOBPLTQTZOYZYWCHTXODXUPBZZMVHJRIPUGEGKCRXMMGBKDDUJOSWCGBBZSETHNYXXWGEIUCFUALNKKGJJSFLAECAAICSMQYRDNTDTDIKUXYMYAFBQJOEUKJMJHLZHZVNIVZOFIPXIFNJHXGXNEPFRSG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWGFKNIOUJZRFTKEKXRRWNFBJANLGFIXTWLGRVMOQIZLIMARJVHXEIFTUHINVBFLBNVUMZBAJQRDCMHOMMDYTIDAWXJUPHXBOPQHAVTXJWEWROYCLZCOKTVLBYDGPSQUZIMRBPNDDMSGFVGETFNATKSCYWXGRHQQUJSAVUTQJWHSEYHYLYKNSPOGDGPPGYCCKQZCNVZPQOMMKAPDXQXDRIZEBXKOHCTNCDUFBEYAOEELVALZUFS");

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
    msg.setTimeStamp(0.9724835313213658);
    msg.setSource(53348U);
    msg.setSourceEntity(179U);
    msg.setDestination(5054U);
    msg.setDestinationEntity(118U);
    msg.type = 81U;
    msg.op = 209U;
    msg.request_id = 64772U;
    msg.plan_id.assign("MBZWZFSNKFHTJULGDZIJXNAQULYLVICIVJSKOGORZEBHUMGSWGOQFNKAXBTCBHYZMJTNWVSEKEXUIARTPWXQFPSEILDFBULOXJYBPVUCKHTMAMCWEVHQSSRDINUJWHURFPDQLZUQGPARGPPZFRQJNXOGAEIDEKBWYICAVTCQPBGYGLKMEYCIHOPEXPGYDMDVSZAKYKRLHRNNDABVVYDCTYFTT");
    msg.flags = 1414U;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 198U;
    tmp_msg_0.value = 0.27791226378661904;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDTQPMPGNHJFDMEWZMDBDVRARCCKZUDSXKLJWQFVSYGXGIIBNAZSHUQKTIIAXOYORHJKEAEKMBLLTCUUMVMHWWYBPSVGBKPSYZXQMNDNIPFTPTVZCFFWZLBVIVLEGCRTMRJJFDGDONYCKVDWMAJOOULKFGRKNQOZEUZRUTCISZBQRGECUJTJLRAQWBKHDSBLOFMNYNEZNXOXWCIEQLHYAFYJTPHPPFGXCVLIYETRAOQIYWUJPBHQWHXSUX");

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
    msg.setTimeStamp(0.10184448570543803);
    msg.setSource(37555U);
    msg.setSourceEntity(127U);
    msg.setDestination(42902U);
    msg.setDestinationEntity(70U);
    msg.state = 94U;
    msg.plan_id.assign("ZONAMMFTSOYBICABFXHVHRLCCJOJPKJMRUAZOZGBHIEUKPEDUNZLCTIYWQVNRNEXZKBSXLEASQKZFWIKRTZFFJGYWOWTTAWTIMGNVJIYPCCXUAEGCXKXEMTOQXYDMRSONPUJUPPMIQVGIXGDQBVRUQPZEDSHZODLSQHUXYYYQFWG");
    msg.plan_eta = 2121555158;
    msg.plan_progress = 0.13327460025419868;
    msg.man_id.assign("WUCBLGCNMKYXARUGKHCML");
    msg.man_type = 54342U;
    msg.man_eta = 1976799790;
    msg.last_outcome = 248U;

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
    msg.setTimeStamp(0.4144896397115856);
    msg.setSource(6843U);
    msg.setSourceEntity(126U);
    msg.setDestination(33641U);
    msg.setDestinationEntity(1U);
    msg.state = 40U;
    msg.plan_id.assign("VFTJLTWEJZMTCKSPQKJUBHVYYJMCOSHSIDLIOVFNDARIXWSRZXHEKXLUQWRQLNADPYHZFAUMMDOORDRZEIPFXQSUNSKZDECEJZNZCCXQVKELDTRJHYYWMABPWKQALFPUIPWGYNCBLXJAGFNSCOLSBYGNTTYVBBMYPXGFCBPEALXIGOQVZQHMYMTAGRHGIPNWKHSDAWNOKWNJMQXGHVBIJZXCADGULRVIBUUUFTOKOEOHTGFQREBT");
    msg.plan_eta = -1078395652;
    msg.plan_progress = 0.3121596126654096;
    msg.man_id.assign("NPNGRYUKMGNBQYVVIBVTKOJBPONTZIELEUQSUSOUXZZXANTSO");
    msg.man_type = 55983U;
    msg.man_eta = 1745227920;
    msg.last_outcome = 241U;

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
    msg.setTimeStamp(0.4344661480547388);
    msg.setSource(52627U);
    msg.setSourceEntity(43U);
    msg.setDestination(27235U);
    msg.setDestinationEntity(198U);
    msg.state = 57U;
    msg.plan_id.assign("EOAXODYLBXJNYEFEJDVPPGPDSCCWLBYHTAVIGKTMLRDS");
    msg.plan_eta = -582359486;
    msg.plan_progress = 0.11166807551284297;
    msg.man_id.assign("ZLSOSLWGQGWKKRVNOZKFXFMYISMELZDONTRIUSBIDRHVEZHJHMZXMZMAIFACYKCPRVKWHXYFQZLGFL");
    msg.man_type = 33827U;
    msg.man_eta = 40333493;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.8220373581804152);
    msg.setSource(4503U);
    msg.setSourceEntity(141U);
    msg.setDestination(27390U);
    msg.setDestinationEntity(111U);
    msg.name.assign("KYZDISMSBDAGNTQXLMZPBRCAWOVCFSYPXXDSVJFMMAJ");
    msg.value.assign("OWSCWJRNELLHGRIYIFNTKAFKQBZAKPMSIYZCIMUYVBOEALCXDGFTXIEDOJRHGMUCVVUZWILZQODFPBGKRMHLCKRMPOYIDYOPPWLCSWSRUTCNWNTJBZRXBYETGTBEBCJLQLQPDAZRGBESOAYSK");
    msg.type = 48U;
    msg.access = 60U;

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
    msg.setTimeStamp(0.28881365732292796);
    msg.setSource(63262U);
    msg.setSourceEntity(147U);
    msg.setDestination(32462U);
    msg.setDestinationEntity(148U);
    msg.name.assign("SPPPTOZNFDPHUWZYRSOQHGFKQBJVLAUALPAXYYCZNRYBVRFZJSJDGOROAMEWODXNREMBVTXENHDBSFARZYXQTQTHBQWNCHZKUJTPATWSOGWMDUTSUOKCVGYQTANHLWQDRYISJIWKVXJLGCMGMWCLXSSGKEDJZCGNKRMHLLUTZBIKYHIKRZDUXVRINFFIEWGYNHVKPCFOEWLODUZCEQMIVK");
    msg.value.assign("EZHRNMDAXSLRQZXLGAYIAHIUZSCMJCKEXBWDZWNDUYTEJGVUQKPJUEPUPTOSGQABSCJHZVOYIXWKCHJAFAKZORBAXYIQLJMQIHVWVDPTFYZPRXKZPDMJWQFISQZXYTDCMNGUMOIBYVEFBADLHNULLEFFGABTLJXNVEHWZAFHXC");
    msg.type = 47U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.652177383357105);
    msg.setSource(707U);
    msg.setSourceEntity(192U);
    msg.setDestination(60539U);
    msg.setDestinationEntity(237U);
    msg.name.assign("IKSRTIVQIMDWYEMJHKLEIQBQBAQQIXFQGXDHOKWFVAETAXPBDYPANADFGZRADHUJYBYUETLRJTSQHNKQAGCOOSWKCUDYXTRRMJYOPHYEBLZLZRZUSRVWNKVAOJXXTKPNWFOOXMJWMVZLCLHNQLFTFJGE");
    msg.value.assign("MSKUKTVTEBQWOIGTCYUCWZJPYKSKJEBWMNZAFFJJUJNTLFAEVOO");
    msg.type = 38U;
    msg.access = 16U;

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
    msg.setTimeStamp(0.5602039128376567);
    msg.setSource(9134U);
    msg.setSourceEntity(183U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(167U);
    msg.cmd = 111U;
    msg.op = 228U;
    msg.plan_id.assign("IHCOYZVGPTXUJPPBTVJOCBDLWQCNBZDAHJDJKTCURAORLQTSYYMVOHPYHPWYKYGDIFBKHELWBKABZJKWRWEQCWXRHTAKQBMGIYZQ");
    msg.params.assign("TREQTYICIJUPSOIRPANAYPKPHLLNVTLYUMHKJAXZKWJTXPGHMNANCJQHUOZXUXPVSCUZARTAWBFOBTVXJZCDDXXHQAGNPWOOJJIKICHSUVZXZLEMVISXFLRGDRGGEEINTREFPYLCKWJMVPRNSNKQVSAEFYMDSBVYOKGBWEKKZLDUVVTEARYWFNRHYQGDBOODTBQSSZGOKHWCFLMWMUQFQYMIXWCISGLEIRFBAMYUDQCTBHLBQUDG");

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
    msg.setTimeStamp(0.49720540709631234);
    msg.setSource(42515U);
    msg.setSourceEntity(104U);
    msg.setDestination(41091U);
    msg.setDestinationEntity(69U);
    msg.cmd = 4U;
    msg.op = 178U;
    msg.plan_id.assign("APQNBHGEUDQFECNJEZTOSZNIHGIXDGZNFSWFMVPVW");
    msg.params.assign("OYQKIKMFYCIHRDHSSUWOOSGQNCYMDIZVGSSUNLFNYYVGMNSJLLMRHTTJXEQQPZGEYVHBTARXAVVEMEMWBHDYPBUWJUUJXEPJMFLWHLRZBDCWLYEVBJQGSWENDDZVPOMQFRBKDGXZOUVLVOTJHBDTOKINFFRFAVCHPZYUALIGAW");

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
    msg.setTimeStamp(0.050885898191453505);
    msg.setSource(12245U);
    msg.setSourceEntity(75U);
    msg.setDestination(38790U);
    msg.setDestinationEntity(100U);
    msg.cmd = 27U;
    msg.op = 93U;
    msg.plan_id.assign("SMQJWTXAHNRSHETVPLLJCOYIUTKPTEMDZCVOUXEFRRBHSBZCJJCWQLHMHRHVEITQNSLZZGEIYLIUBBGXOXRYVRJJWMBOPVYIURFZFUFXSJFARINAELPRBUGCQBNLGCKDGOTSMITCWEQKVUDYTXZVLISCOQEKHEAPMURKGSVATGKHDMXFBBPQKAWYDDDWYVLQMMUYGYXJKGAOZFBPDSGAVOJ");
    msg.params.assign("IREJDQWNKYMENATQDGDEINCPYYRQNCTWAXMUODEMCJZBKNAWUPSZBHYXOBMTRQPZF");

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
    msg.setTimeStamp(0.4356778396084834);
    msg.setSource(6441U);
    msg.setSourceEntity(235U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("ZLCGYZVWSIQQCZWYJSBNFLDEIMYCUQCXJBPANCTBZPJBAHNNBVVQDLKIRLHHIGOKMXUJDMGHTJBEZITWODAMERFDYVQJUKRGMEOGHEOARLXYKEXPKNBRUQUOKDKOHVRFNRIFPTGFOWHFASZJSJYTPAZYMAXDQAFDQLJZJNSXGKTAMFBDMUIEGISTOLWSGGXPOWNEALXZTTRETMKWVVCRYVFUCLLCBCENBCYKVSWXUWPSPQMUUNOFSID");
    msg.op = 210U;
    msg.lat = 0.5409757509977068;
    msg.lon = 0.5303638563271103;
    msg.height = 0.2721599578345436;
    msg.x = 0.9082482178167638;
    msg.y = 0.8506760660059642;
    msg.z = 0.7616004766069011;
    msg.phi = 0.3612924560709557;
    msg.theta = 0.1250422845771021;
    msg.psi = 0.15299914710901485;
    msg.vx = 0.49943480784607597;
    msg.vy = 0.5307769850085486;
    msg.vz = 0.038803217560492764;
    msg.p = 0.4231820461269544;
    msg.q = 0.27384264255390656;
    msg.r = 0.7901368260404145;
    msg.svx = 0.5756759341921185;
    msg.svy = 0.5146507068500528;
    msg.svz = 0.7503937288039223;

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
    msg.setTimeStamp(0.7719444656202545);
    msg.setSource(32816U);
    msg.setSourceEntity(40U);
    msg.setDestination(19386U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("QECOQXBNNYFMVARXANRCIYCAPODUBDAXHFJJPQIVKEVSZDPUHRAKBRLYZKTJHVSADXQZXKLPHWLFMJFWUPEJOWDKULZROVLWCOZYBYRHCHJCTOZQQIOBINXSMFMPOMIFGGMBJMIVITUTCCNFQDHWGELHWUBCQZFAPDEYVVGJRTTTWYZKKKTNLILFMYYOUIZPGBRIGSBUYDRXXSWHAE");
    msg.op = 126U;
    msg.lat = 0.9087377648665341;
    msg.lon = 0.3866179740409619;
    msg.height = 0.29346879313522856;
    msg.x = 0.9642688997424023;
    msg.y = 0.997694395930484;
    msg.z = 0.5080012116886025;
    msg.phi = 0.7741256480167141;
    msg.theta = 0.9887311828983893;
    msg.psi = 0.2600326463846008;
    msg.vx = 0.5855366650806905;
    msg.vy = 0.14950813936269103;
    msg.vz = 0.007336972895416016;
    msg.p = 0.6670370777032383;
    msg.q = 0.4937456142824982;
    msg.r = 0.010344850593993371;
    msg.svx = 0.924947573144599;
    msg.svy = 0.795965236108088;
    msg.svz = 0.6051349115562525;

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
    msg.setTimeStamp(0.18598113139844652);
    msg.setSource(45271U);
    msg.setSourceEntity(50U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("QJGNFWPQPLXISFRRXWIMPYDORLLEPTSQHONEOI");
    msg.op = 156U;
    msg.lat = 0.8754722742876492;
    msg.lon = 0.014235053058477276;
    msg.height = 0.06101177378275935;
    msg.x = 0.12816542372818207;
    msg.y = 0.01285325685433425;
    msg.z = 0.6335854058065601;
    msg.phi = 0.44625174522819633;
    msg.theta = 0.5582733355587973;
    msg.psi = 0.8047134793399964;
    msg.vx = 0.03600262352852379;
    msg.vy = 0.2540808449833243;
    msg.vz = 0.3665168130349382;
    msg.p = 0.03297244944575595;
    msg.q = 0.655698905214189;
    msg.r = 0.4281963625383861;
    msg.svx = 0.904480783926376;
    msg.svy = 0.44079917340935526;
    msg.svz = 0.9289483237655368;

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
    msg.setTimeStamp(0.6026043640002051);
    msg.setSource(11918U);
    msg.setSourceEntity(197U);
    msg.setDestination(41784U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("RVNRJKRDYBVQSDVZXHMKWUGXMXTEXGIQLGYDFYVZGGFHHYNHZMZTKGSUADWNJHTBLUMWNBNTJECASRIWWJFSNIVKMLQUPFZIAPQCOVEZITHOBLYMJWVDSXAPNBKCZQERIOTVNAOCDJUZGLIDIWFUTMYEFDPNOXESARYJOXCWJTLHVPCYUTFFBLPHMXPALAHROKHPKVEZBQUSOPQGWKKCFSMLIDNQRTCBXRYJALQAECZSUOWIBFEQGD");
    msg.type = 116U;
    msg.properties = 247U;
    msg.durations.assign("TDPIUWCEFHDBOEUMAHVTQGBGUUAPNOGKZLLUVRHNPRWFNPMLOWYQHXUZMZVXPNCQFJKFTVKDJRMREYWEXRUJWUBGSEXYJXCFPXOSLQDRRRXSMCL");
    msg.distances.assign("WZCFPXLVYIILUCYEUPHOVSPNUNIZAPQXCRNEZEVT");
    msg.actions.assign("OTHSJQSAGNQMCUNEFPNDXGNVQTCBDCHMFCIGJLNJFOEEMOVMZNUSSWJOWYRQAMGIXTBGYYTYWGAKVWCWENTRKELPICTIZJYMMGZHWXHDFGRZXOSXIULLRJFYBTGUURZQBHCVDRIFUUQKPRQDVJPHOICTNAOLDVPGIDIRASLSAXFKXTXZZOYVWOCAAKMYQSYCDRNPAWYQUSFLUHKSXRZJPJXDMHBNAFQKPVEMLFKZJEUKBBPDBLWEEHZIB");
    msg.fuel.assign("THXKEPFZZYYONHVEMGTUWVTPWHLYHBBWWEIVJSLALXAJWXJXMQRDNQJXLUSUOKFRNQIVWGOCCEYWAXKANCDBDPWLNQDYCFMKZFRPOSIDEEHMTZIRZDTZLKBKJGSKIMSCPUHNTHSSQUVHRSSORDIFMJEPCYBGQZRNLCNAIBAXVJAOFGXQHXLBMVEDCD");

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
    msg.setTimeStamp(0.9987880277466296);
    msg.setSource(46365U);
    msg.setSourceEntity(78U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("GUMLIRQOMQBRDLXGWDRQNSYFOSOBKYTZCCFPMSCVYUWJXIUNNBKGRQGMAZTIJZDDEEQFTVLZTWHZSDFAWWHCIMTTAHRBNKMIRVOKKAMRHVAWJUNQYQUHPFOTLWBGWHXJCCYIIEOK");
    msg.type = 56U;
    msg.properties = 151U;
    msg.durations.assign("ICLWPGXMDRYJDAYFHPAGYSLKMUXNKWSBZKTLTOYJTUIAYWNQFBKZNRVXRQYEHYWPZEZEAZCOLVJVXQROUGDWOKTCLBNJIJQHIFEOBUVX");
    msg.distances.assign("AICEWHTPGIUKEIDFWVOGVXUTUIXPMXUSWGJRPWBWFYMMRXSYZNJMMLNHDJPYUSNBKGEUDQATKXCOSZTQREIJYBCMWDJO");
    msg.actions.assign("KIWYDAYEGUVFSZEZTCBUSNMAXICVPRNSSZNMRNYHWFKBRSODXVUXZLYJMDFCVOKGCJLOJIIBGBTETTVQPEZEAWGHOF");
    msg.fuel.assign("FVTESKDCPMRSSKDVCGPUFTIWHMGQXKUGARBUDPCGJORFDLKIJPWTOQOUZBHUEFGJBYQCOZGBMPNFWXPYM");

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
    msg.setTimeStamp(0.09352322697250837);
    msg.setSource(58662U);
    msg.setSourceEntity(145U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("YLJHXSDRTOBDSMBUZTGXMWIRCGHIIWVCWEUTAGKELEOOXIYZSKGLISFGZXNZYAKECNDVUBIYQPHMXDLHRPT");
    msg.type = 72U;
    msg.properties = 98U;
    msg.durations.assign("QRNCBFJPUZTKMTWABXJSTAPLDNNFSRQGABEMFOOGIJMOAUZGXMNZCOHELYJYGZZHVMSQNREWQSUZOHBXILLXWWHIZZXWPHPNUHJFNIGTHTGCFLBKRSBCMEZQBRHCBOLKKJPZYDXRMWPVDTYF");
    msg.distances.assign("JNPVFMRHKRAWBRXFUIJYPLKWQKAUDMAIVLYKTORCVXMQOFTTGDASPUOBWLFRXWENUDEPDYRKPMS");
    msg.actions.assign("UBYELRJPEQDHNLRSLFOIZJLLSFKFTXXRWFBPXRJBCNKRIFXYMAAALGQWYABYSTUEMDCHZOPBAOUNYGHKJUIZZDQEIBCGTYDWOVFLGVQXMLXEZKBHCXSIGYKMXLOAAGTKXMUKDIVKMNBHOLMFEWQZWJBW");
    msg.fuel.assign("RAOZANQEZPYBAQJRWHKIVTODXBEHWGCPIFVSLXBWAQITWXEGQAAVZCDMQZZYHFUWFKLPGMRFCOUAUMTDBGNWMUEWCLYIMEKOBEVISRTTYTMSDCHHXZKHDYKWYQEPPFFCVIWUVHAIIZNEENUFZRHNIHVQYGPOZJRMOXNAJJTMVLNGQJPGXTTDOSRFNBPJOEKYMDBSOS");

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
    msg.setTimeStamp(0.02523480752540408);
    msg.setSource(49981U);
    msg.setSourceEntity(17U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.22219104001514678;
    msg.lon = 0.6612145973457297;
    msg.depth = 0.29245296323440695;
    msg.roll = 0.4825696078723305;
    msg.pitch = 0.42692174980533326;
    msg.yaw = 0.9394788892604234;
    msg.rcp_time = 0.8402373158600054;
    msg.sid.assign("KSNNNAZJUPLUIYTMRKMKXGDPWNXMXRXJXSOVLBILDJWFQTQUQARDSWJIHSEGAWGHAFRMLNBUOBVBMGLRYCDTTZBVAYVPTXXDQUILOVEEUYYAGEFWVTEVIHCKHECPGCYQNCMEZLPNIKSQHWGUSHBMDLQPZVYEFZYSUIRTFKDH");
    msg.s_type = 189U;

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
    msg.setTimeStamp(0.3389056114789434);
    msg.setSource(26026U);
    msg.setSourceEntity(231U);
    msg.setDestination(36677U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.845142535373147;
    msg.lon = 0.873086751696867;
    msg.depth = 0.21089565332274374;
    msg.roll = 0.08263027502160658;
    msg.pitch = 0.03361230324462683;
    msg.yaw = 0.28659323870907416;
    msg.rcp_time = 0.8440777812518517;
    msg.sid.assign("UGPSLHDJSSXZSAWVWDXOGWZRKIXNVUIUHSVBMBJOTHRBWMKMYLKEINROWVBZRQMHCAJCQL");
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
    msg.setTimeStamp(0.3994453283311755);
    msg.setSource(62143U);
    msg.setSourceEntity(179U);
    msg.setDestination(632U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.4819990241876684;
    msg.lon = 0.7365998306964098;
    msg.depth = 0.2708344953872607;
    msg.roll = 0.8327392767211533;
    msg.pitch = 0.7718474235987096;
    msg.yaw = 0.13440309445751097;
    msg.rcp_time = 0.8647808327976831;
    msg.sid.assign("JBWPXNVBUUKBGLCRBXPVFIBFMBQBESAZIOQHDNLMUJACHPYLGJGZMWGQXXXYAPGFHTJOTKQEULNIWSDTKTDKVVKATEDCNOJFVPCIRTDWSQEMJOLDJAFSYNRCVNFKPUXTYYJUZBGRRMCWKPOXFORDUABVDEJWLFQCSDTSZQFHUHKQTNYWYNHRGPVILAOULSMOOHLEDFHIAGS");
    msg.s_type = 4U;

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
    msg.setTimeStamp(0.28410034552910535);
    msg.setSource(26945U);
    msg.setSourceEntity(62U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(237U);
    msg.id.assign("RCBZFFZWICWCHIDSOGWJUHBMFPEYVVAKTMRSWDKOTOHHDTXMMLSVKNFPJDARFVEKNKZSGOYJIQNAQMNJSPSOGSABUZFAXAIEHJNULHGIBTRFYZDXHTRDJBSGWQLPWCUEVYXEOHVWLPKKOQCYTPQRKJ");
    msg.sensor_class.assign("EYEPZBWIFRUMBQJKGWFDWOKLHPZLNBTBMTUHGEKMBRULVVCBHOFKLPQISWEAYSOHWCKPIPUXMQQATKDNILITMOFTBFYANNOARSRWXITOUENHYEOGARYPDASSNJFRQWHOTJXHYVVDVFJDDQGCWQITQDNSBVUEUYSUU");
    msg.lat = 0.5036045538766415;
    msg.lon = 0.1440240651737159;
    msg.alt = 0.7276248327034772;
    msg.heading = 0.46915598809308967;
    msg.data.assign("EGJWPTUOZXGYNRDURGZGZNTETABRJBVHJSPMLDALUCGHJURZJPLKOQJTWIBFNBKJXLCHCPDOLEAEUBVYDQHBJWIXBNQFEHSKLYQOTHFIKTXOFZBMD");

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
    msg.setTimeStamp(0.2201499037772533);
    msg.setSource(27893U);
    msg.setSourceEntity(199U);
    msg.setDestination(529U);
    msg.setDestinationEntity(155U);
    msg.id.assign("PCBPOJWIBSBIWDQFNZMFRNRDDXSFWFRLMGECNFZOACKXUBAPDUHEGQOBQIHAWXENOBJVTIKMKDFMVISTXSJMUVQNVBFPIYCKIQZKHLVGJTQTUXWUZGPVKLDCO");
    msg.sensor_class.assign("DNLJEVHXVKXEPBXUZTASNFVTNBKCTICBUFOSEXQJM");
    msg.lat = 0.5144562929608493;
    msg.lon = 0.14129913966035945;
    msg.alt = 0.18868523642263835;
    msg.heading = 0.8065137524745488;
    msg.data.assign("IBLCEBVUUJYMLMEPHKERHHUJJQJSBFIQSCYQHTOCDIRWRVCHHVNZGDRFTEXWRORLFEQDXVYAWYPANVKFNNHONZAZEIMPSDKGKAEEGKGMJZOLDBC");

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
    msg.setTimeStamp(0.3339614037412726);
    msg.setSource(22899U);
    msg.setSourceEntity(125U);
    msg.setDestination(63639U);
    msg.setDestinationEntity(102U);
    msg.id.assign("APDESJWCVFCMKDMTJZOUGIJSNRBQBOTJRHRKESVEDYZRQEOVFPEGGVMNRLDGUMGSCIWAQQJVXHHOSTRNXSATKLPPAWXULZ");
    msg.sensor_class.assign("EHRYGSGBGEKNSGUYMAEJONJSHWNQBCHXHUVSEEGAKICFFNZTDJUCQGUBWKIZCRBQYDXQUJAEKBLOTRYVQAVFFOAQOLVUJPZXQKZFOHGUGZMBAONFRZDZJTQGXLLTTSKNKLPWTXCPEYFWJWRUWBWMHHLSEPDMFMJCIRQIJZFMYBPZ");
    msg.lat = 0.30927241517765713;
    msg.lon = 0.548020219532238;
    msg.alt = 0.9205881437045527;
    msg.heading = 0.5828367552482179;
    msg.data.assign("TKSVLQEWHOAJFRHBPVNMXUNDCTKHKBMPIVVPGLGRQFUWNKMZYFMXGUCZPQRJJMIDHEEKALSAZXHBZRJSWQLLJOVLYIGIOHHSZKWXFETUBUIYVNIJYHIXSYCWBOCQJDTMAKUMCRJYXRELKQDNWB");

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
    msg.setTimeStamp(0.9356682426464427);
    msg.setSource(42266U);
    msg.setSourceEntity(117U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(250U);
    msg.id.assign("BGLCTALGITKDUCFUTKVKAZKIS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JMVTWLMBFWNEIIUTKJZOQEINWNGJKLRQUKTVUKIJZXYPUHTLRVNFLWXDKENLCWZJQEFSBBCZWDWCPSPUOWESMTTFDCBAYXLMRHSJZNKHGWEGAHBLFOHFLICPCPKEZRYGGHARBKYZAMJFZDVDUJQOBUQCJEGTHBPODQZUBIANGIXLRSMONRTTXXPQPSOHOSQFXJOUAQAZVLVSPGRRXADYCIMKHTMNRGXCYDENVVVMCXFOUMBEYIYWY");
    tmp_msg_0.feature_type = 190U;
    tmp_msg_0.rgb_red = 128U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 218U;
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
    msg.setTimeStamp(0.9598470435697518);
    msg.setSource(25367U);
    msg.setSourceEntity(220U);
    msg.setDestination(40174U);
    msg.setDestinationEntity(238U);
    msg.id.assign("TPLGCRCBIGCIEEFFLFXDSGCCWTCSCJOVUVCGYTRIBYJBNAHSERBRZWIZAIMPPFDZQDJOMXXNYBGDMAKVNBCZUTKDUHTMKOJHKKVWEKLWWAPHYKQKTNWFZQMRTHJMFSSIVYUOXNLLHOQREYEUSIPSWOTFAVQ");

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
    msg.setTimeStamp(0.6331959967600352);
    msg.setSource(18688U);
    msg.setSourceEntity(42U);
    msg.setDestination(5197U);
    msg.setDestinationEntity(8U);
    msg.id.assign("RWOKRRSPIRFVKQLFDAEGGJFIMVNISRULGQCNTQZPYEFJDRBEAMUUMIEKLQCCKYKBSXBUBAETSWGZJMALYCYULYPFRIFGAOIUXTYNNPTIAYEJHKNLMHZWDZQANGMCVDBTEKCDNEJCDTYRSJRMDVCAH");

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
    msg.setTimeStamp(0.6485003160155499);
    msg.setSource(55496U);
    msg.setSourceEntity(106U);
    msg.setDestination(30435U);
    msg.setDestinationEntity(170U);
    msg.id.assign("DWUZRLTTTOHJLXUAAGPYQHPQMDKCJWKLEDNJOGLCXFWLOUZFLDTNGDMZNCNWHCDOEGZKNRWVPTKJFFNFRHJXPQBKHKTFRXUMILVHQOJMZBMYIVVDSSGCEKCGUBGHVXIQSBJHBTBTUTQF");
    msg.feature_type = 110U;
    msg.rgb_red = 224U;
    msg.rgb_green = 172U;
    msg.rgb_blue = 5U;

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
    msg.setTimeStamp(0.8566339606680874);
    msg.setSource(1756U);
    msg.setSourceEntity(144U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(207U);
    msg.id.assign("ZSTVRZLJSVJKPTXOBPAJQROPKFVYQKAHFVBEFGNSCFAQXLLSLLASEAJFCYXCZXFHDQPADFNLTISYMSHJBYCIOKLEICFGNEREQGMRAMJSNURPCKJFBNAZTWDROXTRNGHWVOBIVDHBHUMIDWGUVBYFKCNXYQTUHYAKMUBPMTJUXTMOHMVMPWNETGRXNWTLGZQECMKJZGAE");
    msg.feature_type = 143U;
    msg.rgb_red = 240U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 243U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.12579546451213885;
    tmp_msg_0.lon = 0.6172225336408795;
    tmp_msg_0.alt = 0.0633753558292407;
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
    msg.setTimeStamp(0.9505674805037045);
    msg.setSource(19970U);
    msg.setSourceEntity(7U);
    msg.setDestination(5529U);
    msg.setDestinationEntity(8U);
    msg.id.assign("NMNIBTTXMKDYXQCPKFLLVVPRLBJMOJZDGVZAPCXBRUOZXYESGUBPFZUQFOXVVYHAHCMPKSBTZCDKPXCGLWLUQAUHSWSHDHJBWHHNBQEQVMDSZXVGSUPAXDMIGSIOLCOQEYCFWEXWWHYMYNIDTNUKEGEZRHVAFNJVZJJTRJUKHGXLNRIPRAMEBIIMLIKRZSTESRWAEDFUOKRNYWQFAO");
    msg.feature_type = 101U;
    msg.rgb_red = 23U;
    msg.rgb_green = 150U;
    msg.rgb_blue = 183U;

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
    msg.setTimeStamp(0.49557124819272813);
    msg.setSource(298U);
    msg.setSourceEntity(29U);
    msg.setDestination(57667U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.8834152139401471;
    msg.lon = 0.7140906995083315;
    msg.alt = 0.17332972771263477;

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
    msg.setTimeStamp(0.04301393872313364);
    msg.setSource(42734U);
    msg.setSourceEntity(47U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.720694958337385;
    msg.lon = 0.8627338701612327;
    msg.alt = 0.008669624367997675;

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
    msg.setTimeStamp(0.3240893734074056);
    msg.setSource(41702U);
    msg.setSourceEntity(68U);
    msg.setDestination(6984U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.5862900858220852;
    msg.lon = 0.021309516838813214;
    msg.alt = 0.6087728299981682;

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
    msg.setTimeStamp(0.49625726632045475);
    msg.setSource(33898U);
    msg.setSourceEntity(60U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(164U);
    msg.type = 20U;
    msg.id.assign("FLRXGDRWLZDWBGUTPGXQHFEBVAMCLPUQJTMTOGREFYPENHUEIMMZCZLWSMDZVHTFRSJSGWWNADPKOEFOWEUAOKHYBBCLZJCONMAJQIEWIJVHZGMCKAGJYUONHXJPYLYONFVZOQXYNUTVHITXOZAXLQIITURBCPPBHQEFAUNFSDKKUQCLKVCCYNVKYZSKDLJMYSWAIPXLSQBGNDRXUEQIAVARGBTFIJFDDORVW");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 203625025U;
    tmp_msg_0.id.assign("BGTVWWQDPTLEKUYDLYLLGFRIITXIJUIZOLQTQGXSHOKCSJJYCCSUPKASSBFOAMWVYZWUOZJSTBXAPYSKLBJPLILNTDHRZCQWFGYAMZAPCEVWNJMORIBGCFDFVMQJVPCUKBFAGNVMAITBBDFODYEFDMUPSRJNFEHPZANRKUYTRYOCOKRVLDWHIRVJWGEQHZZHQCHXMNTNUFQNXS");
    tmp_msg_0.memento.assign("AVOQVYHDNYOQEWNVKJKTDPEUNXXSYLGEDOIYOCRBGEPXKQBFGPXJTJLWFVSEQKFMNPTHTSCRYCSQXBJSIFGELZRNWDWQNUUHZRACZTANQMVIIMLVZYDNXUEPPJHHDMHMGCMCQKEEASJSZRXGLOLJTOBTQASWCGZDBFBIWNZRJWDAKFCMJFMLRAIOGTNABHRAUFXIZBKTUHKLUGYWPHMFDEI");
    tmp_msg_0.control_src = 39610U;
    tmp_msg_0.control_ent = 159U;
    tmp_msg_0.timeout = 0.8973027066055775;
    tmp_msg_0.loiter_radius = 0.31875908639577766;
    tmp_msg_0.altitude_interval = 0.5086664576540831;
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
    msg.setTimeStamp(0.9919054793567219);
    msg.setSource(5453U);
    msg.setSourceEntity(211U);
    msg.setDestination(50473U);
    msg.setDestinationEntity(6U);
    msg.type = 192U;
    msg.id.assign("BFFWRJJRMSVHHOQNKUNUJABVXFQOGUZMRTCYVSOXMZAAUNLABPCBATQJQIESYCSECETMORZKJWUVISXOEGXEPHHOLYQLOCLTKHFQDSZPCACMXDRNNMBFHSKNUOK");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 189U;
    tmp_msg_0.list.assign("FQYOUEEOWUVYNGXTFRIYUUWMCRVBNQDPVPDSHNWLXBJKTKNACFMXISMIEVDUODDELXUNXTVVLTGHZKTUJPSARKTXZGFSJVYIUBWEDPGHUOGJELRQWASRFPKJTTPEMHGGHMFNGRSPXEAQILACSKOCDMRMDVFIWOKZZZOPHWILCKCQQNCAGRGXZLJSPBHOYNVHQYOBWVBRJQSABTMJLEDYEFHXAYSNKDLKBJYQLCJCYXBWZIMFPZBWR");
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
    msg.setTimeStamp(0.5009641877307098);
    msg.setSource(47857U);
    msg.setSourceEntity(135U);
    msg.setDestination(24112U);
    msg.setDestinationEntity(103U);
    msg.type = 205U;
    msg.id.assign("WAKUFROPFRVRGNMJOIZSUSG");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.19336318200682734;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19598032284730493;
    tmp_tmp_msg_0_1.z_units = 158U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7681836133743606;
    tmp_msg_0.lon = 0.6091359268778609;
    tmp_msg_0.radius = 0.5766880464719933;
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
    msg.setTimeStamp(0.670964096074049);
    msg.setSource(58353U);
    msg.setSourceEntity(144U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("JMHSRAPZIKCUSEXMEZMYGPYNZOGVWRJLWTEWKKEDKHKNVPKVHRIWSRHSMSUARTFDKELVABJFLHNYQPCWURHQSGWBYVSCCFDRPSOFXVXDNUGUDLQBNACJOUVDYJIPVDMIIMKHOQTWYUCJFMFPIENIXJORMOIAPXDJJHALGOYBUWSCALXLFLPZZPTBMBQGTXZCDGTGEOAIBQHORYFQQKGUVYAJLB");

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
    msg.setTimeStamp(0.8728989103726544);
    msg.setSource(1704U);
    msg.setSourceEntity(191U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(117U);
    msg.localname.assign("PHKVLYGSVXGUBRLIDPCNNUKFTIGBJDLXFVYEZOMUUCLMUJNTBHWSQJWOHRWXFVUDZXJOCJEKQPHVSWLYDYKWLCAHUANSZPZKSPAQOFJEEZSGHEEYFXPQFRIJFOQWWDPQEOWOMEACEZIDDTSECPOJMYZAMK");

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
    msg.setTimeStamp(0.654269051281812);
    msg.setSource(31526U);
    msg.setSourceEntity(75U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(181U);
    msg.localname.assign("GCAPSNMRCGVSIEFYSZBFRBPLGGLJZHWTVJVAWZHYOTNDDERNALLEYBKVYBCTCPIOFGZLPHKSJYRFQQNJAQYWIDCHYIUKSBAWMIUZOWXQHSXQUBWXNXROSLSWGIXZHJRK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WPMQCIZQKXSYVANOQOOSKEPWCXIVWSJTWOJFYTUKBAJBRDEJLBVETXCZPNMFWOUJTGLXRARHVWADUHPGGLPISOMZBHYCRBFVBEZKPUYCFYDIVNIQGPXJNUGXXWZRGNEBGZEYVGVTCLULKHPVFNOVQRQRYDFHUKQFTNNCBTJDDNMWDALISQJGRKJPZKHCXWUIIUKMHHRFETKMZMSTOLAACJBZYFBMLXSRAGMYHEPUSOEE");
    tmp_msg_0.sys_type = 158U;
    tmp_msg_0.owner = 27691U;
    tmp_msg_0.lat = 0.577469712809441;
    tmp_msg_0.lon = 0.5620913897990413;
    tmp_msg_0.height = 0.7729543173424785;
    tmp_msg_0.services.assign("OKXQYQLOBNHAZZGHNXXLVRJUFOXVIYKYNGQCVAPTWHJUKMMIITRFDZBJIGTWQEQFFBQRDIVOTQEVXNCMLDJROUZHSGKFUFNNCRCCPYYRDCHJXATHEPKOSPPLLUMKUJFZARSYGYKHCWFLXOPTWEXZKBNUBLNJESSACAAKVMTGWPVKTTDYIJABLXXDMQSZJCGWQZWLWHGZHVISSNHUDAYUEEFFBGJ");
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
    msg.setTimeStamp(0.9825993158637276);
    msg.setSource(64088U);
    msg.setSourceEntity(143U);
    msg.setDestination(45814U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("ZXGBBAIFAHVRNCFZJFLNZVJANMKIVTRDFCMTQGXOYEIFMBZJZOIMBOQMSRXGRWCNPWUDFZUXAKVDPTPPHWYQWMQMPVFRZIQCLJLGYDTUGKWTGUYKCCXIOVQNLHHSEXTQJOKZICAPJEEXLXTWUUNQ");
    msg.predicate.assign("JRFCOSJNTIZSRFQJUCQWFLNKAGBXBAMWQYRPRZHSJWBNMITOWEMSTLEAXUEJUKTFMGWXRNOBESDWPIMTOFFMCGVLFSUIIPXTVAHBHXYYQLBGXIWNIZQHOAMVORJUYCNWHADGCYHCXSVLLPZIKINVKWTKOUEGTSEJZIEZKPDLADFJTKUXCWGDBDDQGQZVLHYOEHCVZPGDQCKDOKYLG");
    msg.attributes.assign("YEWFNPYUGJSKDRDVCGYYDZUMIUXVOIMBDEQOHGTB");

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
    msg.setTimeStamp(0.7906696728378657);
    msg.setSource(56669U);
    msg.setSourceEntity(143U);
    msg.setDestination(59887U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("TFWFOTGVYVEWLZXBFCNAGZNMSGLRYJZRQBQLSMQRJEICKQTVKJRWTSTC");
    msg.predicate.assign("KCQOQHZKTEJYLFXAMXRZDPARXXSVYUNTYORUPODAQLWSSCZUNRZMCGRTJKMUHFPOILVJTZQBBNKSLSHGLETKHEKMWCGPWTJETCWMOSVXVWNFUCEPVWNRNSDIKHJDEGMLFQNDDNZPULMWJGYGWHOITAWVVYKKWSQXZVCSHRUJIGMTQNSDXJQYHGCMEQVUBXGMEFAPFFERJLRBYUV");
    msg.attributes.assign("XFBVKYOBRGJQDYGTGCXFZNIKSWBIMXHCKOOWTWLZEQUBZOPILVDCFWXAXRVOWTAQJCHUDEZMDAJOLSFNPDQNNUNHYMUHLUIYFACVTKOZCSBRKCSWPFJELEHIMYOUUTGBRTLVKTPPGZEQQHYRMJREHLXHESINSRQNAABYVKQZDXKVDGPWJCRYXNRVDRTPHTVQKTUWMMEIPJZSFAYSNMGGCMWGOEAPKIFVBAI");

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
    msg.setTimeStamp(0.06382093518754461);
    msg.setSource(19820U);
    msg.setSourceEntity(95U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("RGGFPYZXZEHUTNVDGTJLNVADTOXXSHTMSAWFIPDKGULHUUJAVZCMOIMJLQNYXBLFVMKMXRJDGWUCPEQCZNOYSYFYMSOPSAZWRHYBGTSCYIKQQFQHLDOCGEMERDKZVZIIVQWUBISQPBCEQHM");
    msg.predicate.assign("EQDPSDVZSXRIWUQWBCLVCXNDFEMDRHGHIZVRZEETHEIPIOBMXWAGBZLRSDXXYXGYUFHWVUKPKKGBVPNRFFELCGKIOUJIQSOENRXPPQWOAIDRFLDPLCHJYMWVPQNKWONTZQBTFRXBVT");
    msg.attributes.assign("IKIAKVUCPNPCRMTOGAXNGDDMSQWUQUQDGGISTMXLPKHXHBMCTKCEGSXNNDVZDMHBMHLBOSJZSZTEYAM");

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
    msg.setTimeStamp(0.554817940421739);
    msg.setSource(24059U);
    msg.setSourceEntity(67U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(207U);
    msg.command = 184U;
    msg.goal_id.assign("NQJZWQYBDXIIQPCRRHKSFDQFDBMGKYKBSRCPFZQSZNKUTPWQNQLWPGKHNADOVPUUQMYTISDGPIDYCESSRPJOUVNXLXJQVRONVRUSMBXPLCAJVTVMVLHLIIORGCACATJBBYGZCGXJIJIXAEBJLHUGYHTALJUONZDNYTDMTHXYFWGKFTFELNGPUKEAIDVXZAVROKWMWR");
    msg.goal_xml.assign("WBJVGRDRWUFLGGZYSUFYQWQCRSENZVSBLNMISYOUIMNQQGBSCNTXMPOHKNCFXATXLFTUOXQEXIIPXKLGADSRMKEVVBCNWPTVHCYXKZXHINHIZHAVOCHOOXOTWHKFYSCEDSWOBLSZGDFVZBEFSLRKDMDLGAHABZ");

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
    msg.setTimeStamp(0.07678615687462742);
    msg.setSource(55191U);
    msg.setSourceEntity(106U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(74U);
    msg.command = 69U;
    msg.goal_id.assign("QUXLBNRRKDYELMGVXQKMSNJAGRMWFAAWWKWHBNBFGHKNGOUMDXTESBZTCWSFAUUEGVBRPZVRVQDJDKTWLHFAHSYIQEFSFZWNHTMNCTNKKEBZHJXRKTPXAOTPXBXGSKVYEODSHIYHOGUYZ");
    msg.goal_xml.assign("ROAKFIVQXEUPPZTWAPSFIOVUVNFRCJDVGYJDCAJVICGDXBHLHEKYONJXTJCVUVXWRUBJNRCIBHDLCBEEQM");

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
    msg.setTimeStamp(0.8706904935146377);
    msg.setSource(9465U);
    msg.setSourceEntity(115U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(248U);
    msg.command = 182U;
    msg.goal_id.assign("OOTGTRLZUGVMKZASXNNACCBJSKIWDWEHCGPRVVOPGUQSFUTTILILDQMLLMFNZUEJYZXKZXLAPNOWELGFSKUUWPBOJHYSUEARFFNMYCWDZFHVLQNVYCXDEHRTAIQNECPHCSZERABGPMVZRBFJCQGYXEONTYHYDZYPRAWVDABNXTFGQJWDRWSFMUKJFOIZKTVMEIYIQALTIJKKKMDSDJTNWHHRHOGXJCVVBBOPDQBX");
    msg.goal_xml.assign("ZDRQBOIGJGKBMKSFWWQPPVKYAHIANVXGPXRTXMJLYIDTHNLCLCYEDPNUTTYZDCMYYWHTIPJJOCLBRHPWUWDKCSMEOFNHLWEQBNUDSUXSOAZIYYGCQEPDOARMEZARQXVXNBPXUXSUBAHB");

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
    msg.setTimeStamp(0.16581755902736606);
    msg.setSource(56901U);
    msg.setSourceEntity(252U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(205U);
    msg.op = 2U;
    msg.goal_id.assign("PHZOSIBKNRMZJLLIBHVDDITTQGWGFWVBXKGQVOWONYFQEJABMPZYDBSUNIHHNXVRDEFJCTIZAWZJA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OMIMRIGOPWFUOXFRPJRNEAEAOAGMOLDL");
    tmp_msg_0.predicate.assign("UWJECJEWWZUSOIRHDDLOEWXIQTWCHVCFIXNVLPEAKWZHTTENNFBRNITVQYUWDEJXMPFGSMTKIDRZMKGJSAOWUGFNQRYTLNASGPBXBPNPBIFWTFQMMZYPOCHKLNKIRPXWJYDLGZADXNOBFBEHJSSLHZHYORDKMVDHZVJICUMLVZBJCLGRQKFUIEMAPOQYCAFLGXXUMYSEYIYCBPOQBXRVGGJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DRGLKUPATJFDDUFHVTLYLRXSYLOEBTYEDWXNMMLMIXCOTRNKCOXJSYRTGQBJPHTDZMLMAHPNWPRVEJFSEILOGIKIENGXFQZEPKUCAZDVLOFYDEOKPSQMWJPAWDDGCIVFBFWSZUQNFWVUVWSWHYBAXQGOZJEQQFHHMCZPHTCVCAYMRGAEPTJOEQJQRHYXOTUCRSRXNBZZMAZSGNIAKZBIXNYBYKB");
    tmp_tmp_msg_0_0.attr_type = 216U;
    tmp_tmp_msg_0_0.min.assign("LARPWBMYBBSFJJPCRZMLAFXQUYCFMPWUHDJVNNYSXY");
    tmp_tmp_msg_0_0.max.assign("GTVONPHCTQABGHCWYPPFMHOCLYFBFVGBPEQWGSOAZMMEKSWZSBGXNPZLRYNVBNXCDHJYFEOMNQYGEEIYOUVHVYZXYUDJSSXUPNRLOAANJIPRLHSKQGGWFDPRKICLPNLTIHZWREATACLJTHEKDFAKFXWCFMTTINHUGPDVK");
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
    msg.setTimeStamp(0.5572022031224524);
    msg.setSource(32178U);
    msg.setSourceEntity(72U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(147U);
    msg.op = 7U;
    msg.goal_id.assign("LIXHWUSFROJBDJS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NIYRAAWZYLSQTZRECUFQJGHBWDMNODRDNDOGBUYHKKSFLBBPJCQOXKHHITJDCSKBVNTALTUOONRKPWXBXCUCSXKSPQTYYLPSEVECCGDALTVTBIJKJWOFZEGUBBARLAPGYMFQZUNU");
    tmp_msg_0.predicate.assign("WUAYINOGNIZIJUQQLZLRINJU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QVOMPSGWVULPAUMXLMTPJDFSCGJNAJRLSMVAKXQLBKGXHESJCVRPIGQOESJUOFIDZNQHSDZKNSKNXTTTDZRVWGIHPIFHYTVWHLZKAAFFRXXYHDMGQZK");
    tmp_tmp_msg_0_0.attr_type = 195U;
    tmp_tmp_msg_0_0.min.assign("HVSJULTUNGOBCSUTORBGCCOZMAKHMGJD");
    tmp_tmp_msg_0_0.max.assign("NNCTHOPCXWSYQMQCTYWGFLVXZHAWMQOYZMSKRFZBILISFHAGDROIVVTLLNPMVEEFHJAEQBSPSRZCZUNARHQIMCDHFPAKGOMRRU");
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
    msg.setTimeStamp(0.3713579576706877);
    msg.setSource(11917U);
    msg.setSourceEntity(11U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(48U);
    msg.op = 49U;
    msg.goal_id.assign("YFDBSCGOAQREGUIZEGHIFYXWTHLYXRLHXXKMAUJCECBHPHKJVDWLMRUBRGPAVQQTWFDIVJWNXTQWKUCOGVPJOXEPYZIMLSLMFTBNARSNIAQBTALSSMHUBCPRZOTBVEZUHJFHTKGNZVNWYXUDFOVAEOICHAEVPXDUJQQNXNXHCIIFSALJMYKYOLGEOZGWDDQNUSWEKDNDDZMWPCSGBKVMWFNTZTGFBAPVMUJPYBQOYJZPCSMFJSLCQILRIKTK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IRAMRWZKRGAYPKNVIHXCVCAPDEEYJVXXTJOMNJUKSFFMSDKFOMPIYGQOAAXJVKMAROIAWEXGCNBVFWZPQKMMIVKKSAGDQYBFDTLPWLLIEZGSLWQBHTRFIYLXPCZHFRZEWLXTJKLMHGLDNWZBRPPYEQXQTNYCTBYUPSIOCUFCPHUDDNUDWMFQKRCOHTGSNVBBNABFWUSLNRRZNUJTYJZDEHMLHSUHDQOIAXVEOCI");
    tmp_msg_0.predicate.assign("YLBESFTFWHIBEETDGIGLAQSOITGRRPNHMUMNZYNJLNLIWDLEHWTPBYIOWECVJPEIRHNUVXCWFPQZFJY");
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
    msg.setTimeStamp(0.8537625955855324);
    msg.setSource(27969U);
    msg.setSourceEntity(23U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(206U);
    msg.name.assign("YCPDRIFZSJWAIAPNJLOWBAFUVVREHPZYLABIAKH");
    msg.attr_type = 171U;
    msg.min.assign("KPQOTBKHTWGZTZUTPEYXTTRWYDJVJKPXSLMOJYXFYZJUAAGCDMWLQWXIRHBDZCSHGBXBKBSCVIYAXIYOYUVFMJDZWMNIIEAQIDSHGXVAFONPAXVOGEGRZXIZKQJAGFEBOFBRLSMERGFLHVYNNKEMJESSDUUGMRIAMKWVHCIZYQNVVWUKLMOHNCFLFCPURYNFSPDCKNPZNUPAWEOQTHCLRJLQLILPWJEWQADSMEQSNPBTVZBDUDRHCRCB");
    msg.max.assign("CXXLTERDSTLYSIDHNUGZAIATAEMFZSCBWVCBHOXQFGEHHSFLTWMDPSIEIUWVWYMIAQDJLNHRVOKKUIYAZLCPELXVVKRUKVLAMXVHKBOXSUZRYTKSHXGWFDPEYSIEPFZJFYBPJCOPQARXPMMXNEQWCRIWRPBYMLKWABYDGZAOBUTTJCDYLPQFJOQUCOWKQJZODNZBBVFNGGFYCRTMNOX");

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
    msg.setTimeStamp(0.29304670291326373);
    msg.setSource(62769U);
    msg.setSourceEntity(195U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YNBIDUQTAELHXUVDLBFGGVEGAOQHRSJMOFGPVFUJVMNKXYXIWEQZMCATSECGDJQECACPWVZNPYJDXOFZCUPDUSWYYOVRZCDSIQTKBWAYFATNAPWMMNHMBQKIBHQTKZNOGXWPZSMTFVGQPKS");
    msg.attr_type = 94U;
    msg.min.assign("KUZWACPSYOBUWCBFDFYDNOUYTHEWSNWYAFGXYQKFOGMPKNSKXJSXFQXOXQKQBWGCHMQUYTEHVCKCXRLKNNQBOZI");
    msg.max.assign("BYKXFHJAMONJMFAXUIGECLSDTNETPXUHIUHYWNDNXJIRNRHEQLMDYOBFTSJKVETWDGJVEUFQQRMZSO");

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
    msg.setTimeStamp(0.11268154911705974);
    msg.setSource(7830U);
    msg.setSourceEntity(186U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(101U);
    msg.name.assign("VQJUBLQMMYLATSTQPEFXVNQBGVFXATIHOQZTONHJKNJWLGYDJOOZLNBBSGOHHSXCAHUNSQPGHLMMIYMRSSFTXRMWZXUYDVA");
    msg.attr_type = 148U;
    msg.min.assign("YKJFKNFLERCHLPIJRBHXZLEDEVDNNGHDXABJVNPWVUOOQZY");
    msg.max.assign("XTRQDULVWCISCBEMIXYBNOYEEUVZQFOARICWXSHLYHAJFCZDYLVMBPHXLEWBGKVCUWOHDROVQDOFPJFROZSZNSRWPIVAATKAICWCIRXXNJGZWHOGOUSMUYCCWFAHEUTSESFHGRTELJIDGDZMZKBYQHAPTAMBHJPERLTRTIQPMDNZYQBGQSTOSQVG");

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
    msg.setTimeStamp(0.860446527947946);
    msg.setSource(7949U);
    msg.setSourceEntity(42U);
    msg.setDestination(10750U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("JZJXRWIKHMIJQCZGSRNMFSIJIPCZYBHAVLVSJAGRJQC");
    msg.predicate.assign("WGQOMIKLAMISXVESUSABYTGPAKNLDRWCCGBZOWEHTCEGTSWDDUVZLHBOBVJFCCHVIBJSUJTQTHHFUDTESMPVQOGNIDBXIFXXERWKCOTVE");

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
    msg.setTimeStamp(0.5912055573069683);
    msg.setSource(4257U);
    msg.setSourceEntity(83U);
    msg.setDestination(13598U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("NMAMTCCSQVRAURGFRHURSMZZYBUOBRTDWUPLAFPASPGPEWHQADHEEEMXPCTYWVSKQTCIZNJPEJHUEUOZWWZEKJBISBJVZCFBDYFMN");
    msg.predicate.assign("EZBROITXVKBUVMAYPTIMFHUCCDNINJKJHLZESCPIEBZISOTCESINVCRAUBBGMUYQWDSQVLSNXTFHMT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RGQBTAXTZDQFOZHKENUDPATOKAOIPRTBANIUIJAJYPYZDAQSECEBPAGPIKCCBSNRRDYEYZKRLKIXMZOGXQTELSHEUTLUJSTUUWQFZOXMVKQTSXYSBEDVMWKAVVDJIRODJCRUWWMPNFOHYLOMHDMUKPFVLLZEIYSWNFRCJQOILWWVZJDUGQJIENNNQFFJDNRNUOPHQPWZCHLMTCBK");
    tmp_msg_0.attr_type = 63U;
    tmp_msg_0.min.assign("LGNVKLFRGPCSQVHLHTTQOFEFLOYJESZPMBCEHWNYWMFSCTUPVTUDRJKUTNMMKXBSWDWGUZTJQHSXIRYWYIUOAVYGGNBFZQLQIXSBAEBKHCSWEAKO");
    tmp_msg_0.max.assign("AFNWBYDISRUAJOFKKTQYCAAJWCIXZOUTFXZPNNQJFQMDSUHKPIZVXJYAOEZRXBPHDTLMIHGAUWXVPUFPEIXMGJHLRYTFCBEKOMPQRSSHVOVWDLNCSBIAUKRXGLVFIUJRQBGEGWYMNBVOIGLRLPEQXELUHLKDVYJRAQGHIBCMOZYCSMPUVRCJQNJGAMSEDLEMTZOASXSVNEGNCNFTWPVLDD");
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
    msg.setTimeStamp(0.2564874992540689);
    msg.setSource(24358U);
    msg.setSourceEntity(92U);
    msg.setDestination(11731U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("XFHAWXJFBOFNUFOYESLKLNIEAPADYZLGUVTBDHETEKZFMMCWBMJHDHKLXRXSIAYFAUJIQPVQWWGIDRRHPLYSTMVYCSHMDWLZNKZLQHUTQAJOZQOMCEHGQIKRXUOKOPOCOJIHTNJUVNWKYHSSGCQDDKTBFGREZQSEBXXFMSMWKQRSZYMWIJYUGWSVDIQOAURNRFXLGP");
    msg.predicate.assign("MRKJWSXWJVTXCIZXPDSZRMSIBXFVCSGUNFHWUITZMYLCLPNNTQREOATROWBSDLBDWLJWKUFNOGGZSJSUXNJFYNLDCCCPXIBLEMNBPMUBJZMWKGQFKQWUQT");

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
    msg.setTimeStamp(0.3856821826327954);
    msg.setSource(22871U);
    msg.setSourceEntity(44U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("NHINMBFLQWYFJWVJUULEYKITLWCCBIXDUFXVLRQKPOETRIQSXHJLSRKNXARMPZHGHCEGBZVCGQDQBSDVFKGCDTSESMNMYKTHVEP");

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
    msg.setTimeStamp(0.06666671284244718);
    msg.setSource(43082U);
    msg.setSourceEntity(235U);
    msg.setDestination(63995U);
    msg.setDestinationEntity(149U);
    msg.reactor.assign("PGEDYSRFZWXSHYJMHRTCJVDMNFJHKZEURXSWUHWBZQKGCAGMGTTZVYFPQMWQIOFEKTTDMNXBADQQCHPHYVFDVLVWSUIWTELOVONNHIXIZGNRRUOBEDBFYIMVGVSLEPQAAJBJKNCPCEOECHBLUKYJDONBLPMMGSJJLXMISYDPQUEKWLQROLZNGFL");

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
    msg.setTimeStamp(0.3210789352372252);
    msg.setSource(3198U);
    msg.setSourceEntity(152U);
    msg.setDestination(38412U);
    msg.setDestinationEntity(162U);
    msg.reactor.assign("FTZDNPTAAJEYNLSGXLXKBGKWNRYBZKQPCGDYPCHTKHQQLRPFWWWVUAMJCWHHWYUUBYOJOAXSVBXURJVQHZIHPDIXAOOKQIYNDLTGNXZTZOXOPXIJQMMNFOMQACAF");

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
    msg.setTimeStamp(0.9515891647862612);
    msg.setSource(28222U);
    msg.setSourceEntity(121U);
    msg.setDestination(63606U);
    msg.setDestinationEntity(159U);
    msg.topic.assign("BPKVJMFWGQXOGYDIUDXTWKDPVZIUNRQTZOBKLRJ");
    msg.data.assign("TLXWSBYPNOZK");

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
    msg.setTimeStamp(0.09531176417060228);
    msg.setSource(35245U);
    msg.setSourceEntity(189U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(65U);
    msg.topic.assign("RUYLVGICLFXKNLCHPMWGIYTSCDWQAXKZWUSVQDXRNHDSJFBRIVEBTDBQCLPZKSJHMTIZFWNKYWUQXNCRPYAAOBARJBBHLYBNXDMLZAKQG");
    msg.data.assign("LLGNVYMCDXTSSGJAIRIPLZZOPBXHFMYBBAXGOCEUTBFRCWRARBYEUTKVKZRPMYJZMTZQWILABDFVYDGLVYQVPZPHRWYMIHWOIGVBPDCAFMIQQINBUWEZIDHFFSJSKOAVZRRAPGKXFLTZDUJOSOPOSKTLRJDHPUIVPEJXJCDWRN");

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
    msg.setTimeStamp(0.7565344545364758);
    msg.setSource(34133U);
    msg.setSourceEntity(37U);
    msg.setDestination(23659U);
    msg.setDestinationEntity(41U);
    msg.topic.assign("MODMBMFZWAPSOYKRDRVNRKYKYYLVQLGORRFWNYECCWQRIIBNFMMZDTQEAPLWJPKPECWKYVMLFKVGBLQTHOKTKJCCQCNGWHWXHFVSYVJMEHGXVJUUBXGQCNIJOUPFMSDSXAIUPMPIZUXZSRGIDFZQVNRZOHJEFIYBKCEQBTUXUQDZHNCSTNCBAKAAT");
    msg.data.assign("GBAVIOIEWSCBTJUZMLOXPSP");

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
    msg.setTimeStamp(0.8377671189024899);
    msg.setSource(29327U);
    msg.setSourceEntity(177U);
    msg.setDestination(48213U);
    msg.setDestinationEntity(194U);
    msg.frameid = 164U;
    const char tmp_msg_0[] = {-121, -3, 62, -117, 71, -87, -118, 88, -29, -54, -49, 119, 34, 22, 117, 92, 67, -91, -73, -127, -74, -1, -80, -111, -21, 12, 12, -91, -52, -106, 93, -97, 67, 69, 23, 58, -73, 44, 66, -70, 86, -91, -59, -28, 67, -105, 70, -65, 123, 47, -114, 21, -47, 45, 41, 77, 83, 55, -21, 120, -19, -92, -41, -26, -24, -107, 27, -39, 2, 68, 79, 83, 63, -8, 41, 73, 37, -6, 43, -108, -19, -81, 73, 105, 26, -109, -114, -3, -51, 24, -5, -5, 113, 11, -63, 48, 77, 100, 72, 54, 120, 33, -124, 99, -120, 88, 103, 111, -114, -95, 75, -34, -67, 79, 114, -53, -9, -95, 18, -102, -18, -127, 103, -94, -82, 9, -41, -17, -105, -67, -17, -45, -45, 124, 55, 117, -86, 30, 46, -62, -32, -5, -65, 82, -126, 79, -68, 121, -108, 48, 109, -111, 21, -77, 110, -58, 98, 91, 77, 96, 86, -77, 121, 75, -112, -114, 63, 99, -103, 102, 30, -106, -74, 99, 65, 55, -27, 24, 113, 58, 7, -78, -86, -84, -117, 89, -97, 27, 112, 9, 72, -126, -31, -119, -38, 91, 22, -68, 26, -1, 103, -14, 91, -91, -21, 44, 73, 79, 113, -50, -75, 70, -93, 18, 15, 99, 119, 6, 76, -24, 39, -113, 112, 65, 7, 106};
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
    msg.setTimeStamp(0.7593179172154241);
    msg.setSource(19911U);
    msg.setSourceEntity(174U);
    msg.setDestination(35641U);
    msg.setDestinationEntity(117U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {108, -31, 27, -42, -107, -127, -125, 93, -122, 15, 75, 31, 33, 70, -41, 77, -90, -59, -124, -79, -69, -80, 28, 125, -109, -96, 62, -48, -81, 85, 84, 72, -43, 26, 12, -128, 113, 11, 43, 124, -123, -23, 12, -18, 80, 91, -46, 109, -117, -96, -85, -104, 83, -111, 92, 36, 41, 81, -31, 18, 74, -120, -126, -86, 85, -60, -127, 49, 77, 63, 112, 113, -63, 70, -63, 111, 5, -100, -18, -19, 49, 79, -71, -22, 76, -35, -67, -35, 6, 81, -29, -122, -127, -53, -2, -45, -49, 119, -29, 70, -115, 39, 90, -21, -24, -68, -54, 29, 109, 116, -66, 101, 33, -80, 61, -123, -17, -94, -116, -7, -25, -55, 95, 59, 126, 45, 115, -99, 125, 66, 113, -77, 57, -78, -103, -3, -111, -96, -60, -120};
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
    msg.setTimeStamp(0.9510489300339673);
    msg.setSource(11606U);
    msg.setSourceEntity(247U);
    msg.setDestination(41926U);
    msg.setDestinationEntity(200U);
    msg.frameid = 65U;
    const char tmp_msg_0[] = {-36, -91, -113, 62, -45, 121, 75, -112, -64, -21, -116, 14, -37, -20, -17, -29, -82, -25, -17, -17, 24, -108, 3, -88, -55, -8, 39, -40, 12, -70, 119, -77, 98, 115, -18, 39, -91, -93, 37, 100, 44, 123, -121, -81, 101, -110, -27, -83, 20, -67, -117, -54, -121, -109, 26, 41, 100, 70, 77, -74, 8, -65, -59, 45, 105, 9, -128, -6, 89, 66, -71, -122, 55, 26, -98, -74, 24, -85, 126, 68, 2, 18, -83, 96, 56, 13, 24, -88, -64, -109, -64, -59, 78, 96, 71, -72, 67, 3, 89, 107, -80, 53, 116, -51, 119, 3, 33, -98, 50, -122, 18, 61, 3, 85, 0};
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
    msg.setTimeStamp(0.3815385533528658);
    msg.setSource(8247U);
    msg.setSourceEntity(67U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(57U);
    msg.fps = 34U;
    msg.quality = 235U;
    msg.reps = 214U;
    msg.tsize = 129U;

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
    msg.setTimeStamp(0.12292975846705734);
    msg.setSource(4217U);
    msg.setSourceEntity(69U);
    msg.setDestination(3759U);
    msg.setDestinationEntity(64U);
    msg.fps = 87U;
    msg.quality = 215U;
    msg.reps = 64U;
    msg.tsize = 58U;

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
    msg.setTimeStamp(0.3644990541894839);
    msg.setSource(3604U);
    msg.setSourceEntity(23U);
    msg.setDestination(53358U);
    msg.setDestinationEntity(118U);
    msg.fps = 113U;
    msg.quality = 220U;
    msg.reps = 201U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.4491245172775764);
    msg.setSource(36203U);
    msg.setSourceEntity(240U);
    msg.setDestination(568U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.9238552719589828;
    msg.lon = 0.7975482161296914;
    msg.depth = 176U;
    msg.speed = 0.9094826795966253;
    msg.psi = 0.689412782961538;

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
    msg.setTimeStamp(0.026553029530052896);
    msg.setSource(37449U);
    msg.setSourceEntity(130U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.20217301758691597;
    msg.lon = 0.7818074732356014;
    msg.depth = 133U;
    msg.speed = 0.8727789396865286;
    msg.psi = 0.7305621059143856;

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
    msg.setTimeStamp(0.9828111608934809);
    msg.setSource(42193U);
    msg.setSourceEntity(10U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.4173887333223728;
    msg.lon = 0.08245248573352182;
    msg.depth = 90U;
    msg.speed = 0.22129836949709858;
    msg.psi = 0.6928865967774666;

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
    msg.setTimeStamp(0.30399939903698425);
    msg.setSource(5753U);
    msg.setSourceEntity(179U);
    msg.setDestination(39484U);
    msg.setDestinationEntity(239U);
    msg.label.assign("FWLLGUIMBFXFNSOUXYRLPNFVJANKQBLMIDYJHPEVPRWHZZTCHZXLAKTLXCKXIVJDTUBVRCCOQORXSDXAJWTGWHSOKRDVCHWNNRGXOSPIZSBJNPYSITSVEIKUMKNTZAFAXUCPEPUTRMJENUZQROWCVJSEGUDIYBAPFNEGXQGWDMKLVWEOKUQDIVCILBUFSJBYAMHMHHKFGGHCTIVSEFMDCOTDLJWQYGTOQYHENPWRZMZRBYDMABAQALKZJE");
    msg.lat = 0.36381017521956394;
    msg.lon = 0.33685314807391775;
    msg.z = 0.1222927290182716;
    msg.z_units = 233U;
    msg.cog = 0.14387929385620235;
    msg.sog = 0.9339533234695939;

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
    msg.setTimeStamp(0.9199635042248087);
    msg.setSource(59846U);
    msg.setSourceEntity(162U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(134U);
    msg.label.assign("DTSLOQIVRPAPCBTTYKQMSUHIPICKPWQMNKJEKZWLPWIDMSXVWPOHOUJRXGMAQLKGYRNMYFROGMZZFVAMVDTPSRUCEWCTMSRIHXGIFWQKFUEWSZELLFVNZOHLPLAWQHYKHBYYACFEDCMNJQDEZYGVLG");
    msg.lat = 0.5744069758588121;
    msg.lon = 0.145661235240524;
    msg.z = 0.7685457773949695;
    msg.z_units = 63U;
    msg.cog = 0.5769497970918221;
    msg.sog = 0.3340326941323183;

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
    msg.setTimeStamp(0.8817575909557483);
    msg.setSource(46756U);
    msg.setSourceEntity(170U);
    msg.setDestination(56974U);
    msg.setDestinationEntity(21U);
    msg.label.assign("WMOIIRKBVJYCILXOSFGRTFHRCZKFQKZLAPCDVDCRRNEGUYAABGMLDVPFYAWCLENCAGDXWFQMGPEZCSZYRJOVYENJMNQIAQOJJZEYSQONZFWHEXALKNZSEJPUOTCLUBJXHYVMTKJFVHRWUQXPTMGRPUTPHEVRBLGNPFBDSBUMSS");
    msg.lat = 0.6050841919979315;
    msg.lon = 0.44127550496049106;
    msg.z = 0.4390115783869072;
    msg.z_units = 239U;
    msg.cog = 0.19579697102071725;
    msg.sog = 0.29793672755166;

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
    msg.setTimeStamp(0.5792936774319555);
    msg.setSource(6169U);
    msg.setSourceEntity(152U);
    msg.setDestination(7873U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZPNZVRKJTNIHIIATNSKSOKRHNYLRIROHXRVPBINCVGQQXGXHFGAGIDYDULYXSZTVESQBVCTVFVSZMSOCFLYKXHNITPJKMGXLSJJEKXYZIODFAWYNTSCNPBVMTDWWSDACUJQSUAWRRHUXT");
    msg.value.assign("NBPMLIASIMHIAYVOOCKQAOUUVCRYHOFGUVHDCRHKHZDSSDODDOZRGIISFUAJIXUPLGTMWZQNSEEMNSTFIAOETCGQJARJDHYWUJIKZUBXTHGMLXYEAWMFHQJPFIFODOVSNWCVZRRPVLWBTTPDGUKMEIQTZYKPUVDVETLXLUAXWLMKJDGJVYKXSNBFN");

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
    msg.setTimeStamp(0.6563836158563774);
    msg.setSource(43743U);
    msg.setSourceEntity(90U);
    msg.setDestination(11617U);
    msg.setDestinationEntity(48U);
    msg.name.assign("EGQEBTZZCPUJVALJRGQUVEFWYDNDQCATPKPAZIQJGAEUKTETJHSYKHPMXYSMGBHINSGRCGSRORW");
    msg.value.assign("FMKMAPHPIROOJCWEDJBLCKHVRFGRVOCTWCIYPBWDZLEMNSTKBGZUIYCJYWQHGGYXGCWGLXNOEQKVFDIIJOTLDMUFAQVWPFICUPYZFHSX");

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
    msg.setTimeStamp(0.4562336109531018);
    msg.setSource(20116U);
    msg.setSourceEntity(121U);
    msg.setDestination(40222U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CEOXTLXFBLUBVJYKAHBUHXZHHZKPTOBERQQNIUPPWWCOLOSLFCDQEDPVTLHMKDFJJGZGOSJSFKSNXJHHICVEVOMPMJNIAFIGNKNEUNSVSCCYJBIZUXLUBWPYCQNKMLQTVXDVIRBOXLRDRRYRTQWIZZYAFYMMPRMYWXI");
    msg.value.assign("XFMRDBQIASTUSAUCOPJNKBSRMHOFIBRXVZOGZYINPWZKNXNFDWIJTFRXWDHEHQANIDCDVRBDLLSYTXIYWBNLZULYWEURTKKCHPEIVEYYDWKEZTAPADESMGZLGGPYSRASIQFGGRRVKFCMQDTMFJUDZBQPXMELZFWTYVUPOOCHOWUEJMVXTXHLBMFBEHJEBPJLYANKMCLGGTUCFJOUTAOPQWHVKZXCLRVJ");

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
    msg.setTimeStamp(0.9773185252080369);
    msg.setSource(26478U);
    msg.setSourceEntity(88U);
    msg.setDestination(43667U);
    msg.setDestinationEntity(23U);
    msg.name.assign("HZXRHDMZBLIFEZKOFJZADMUDRNIDFVJDACXBIHWVGSBGQVTMPPGKIJSOCJWOGRIVLZQPNYYJQYF");

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
    msg.setTimeStamp(0.882460491332014);
    msg.setSource(6456U);
    msg.setSourceEntity(32U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(20U);
    msg.name.assign("JXQDBFRYKAWOFCJAGEFSPDABSGKKZSUISAPMOVORVWTIHFCGAIPIEKMKWGGAWSWLVJCPAZSRFQMIWFZCSRKTBCJNRYXQDEYRDIHNPNQXGLGTKPIETNNUJVHOHUNCQOYGEMOQXEHHOJXQPWDMJBQZCULSYDOUTMXYEKTPXSMZYYAIIUHSZZLCKDTJEX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DLADFKICZCWWQLMYPJRZNIWQKKOXUMTMLXUTKPRQQGHLNNBQNDBMIICDKJRSVVSOWUAHOXEUYTHBTDNRVLKTLTHCRNBEEHXANMONWFPEUAJBGEVSYQIJQUFCFUIOYVYFMBCXZQPMSOTJHWZCPCFTKKOGHUTYPXYIAZMAAVYRAMEBSWIQGRLSJFZWELGOENA");
    tmp_msg_0.value.assign("ZCADYQEHRJTKMZUDORUJOFVQZIIMFZXUTXEEGDKCLUTKRRDEIJOYFIBHLGKVBZIHWALJCIYXCJIGVOGSHOLNNPVENRXHAGCMFJMZSSTSCPQOLHXBZYJFNMJYBNYNLWENPDIPNAARFRTFLNSSOXVPEWUDJIKQZAVLMDQITKZCBPDEWEYGDKYKXKRKHHCEQGRHSVMTTWUGPOBTFHCLURQSUMANBXODFGBPWPXOLBUYWVVXACPFWAYZUMGMTWQSVW");
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
    msg.setTimeStamp(0.02091917432987256);
    msg.setSource(52787U);
    msg.setSourceEntity(238U);
    msg.setDestination(52372U);
    msg.setDestinationEntity(237U);
    msg.name.assign("LOAZHAKSPIDAXZXRREMIXUWMGZLZJUWPKYEKGOKXMJANUHTKFQPUFSVXI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XZUGBVYHPZTXBJTHAJNGGXYSHZTVVCJCTPRAPYYSIUQRJCULLMDOZTUGCPDJDSMFQENEDCYOTRRVDUTPYQHENSCXNFKZRCOFBJKMOSMBIDCYHLRRIPZAXKVBPOWAIGM");
    tmp_msg_0.value.assign("GDJOHLEJMHTFBHOVWLZCSGCKGIQATWWHUMJVQVTYUVDHCNZFOQPZNDCPXRLSPSKZIXRYXZBEAQORGUESJGMGHXQPLBDMNVYFYSQHEKOVUMSTIIKEKXEBFOVWJMHDEDKGWQLQIMNOTEBRAOIRBKCYFPCGPZSCWJUBOEZLFRZATDVNXTIPQTIYSXANJDGAAVKMCYPU");
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
    msg.setTimeStamp(0.11728247420368909);
    msg.setSource(23568U);
    msg.setSourceEntity(161U);
    msg.setDestination(12862U);
    msg.setDestinationEntity(143U);
    msg.name.assign("FZMYKSVGWBVATJCFLJRQNACEISFRVDOQOIWHYZUKVDXNHZLWXRIMEMQCONOGBCGKFAKTTPBYNTZMFQQLHUMQZBPAUZGBCJAILCSYSPCQWFVRVAJDXHSGAJURHUOTNYDKUSJDWICJPLPMSQKMXETLPZ");
    msg.visibility.assign("XXVTCAWWJQHRLDTFQNRILOBSVMZEMUXJRGMNTEEYHVUNSXHVXSCRAATCKPDLUNLOKOKZWIPIQYYYYDFHQKAAOBIVXCETACWNFBLLMUTPEJLPDPQIJHLVRMGFOHZIJMGUSWPYFAPFGNCMJOPYQCWGZRDDBTHMUZKRAQYKNVMZUOEZWLRIBQHNCFXKFUWZBDVGMBTAUYEQH");
    msg.scope.assign("QEMVBMGSAZIZZEZWOBLJTAHOJRTLZQESARUKQYHLBPOJFIPVDPRXZKOXPVUIGENUYTTGGLDORQJTJYRBVNGYEOM");

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
    msg.setTimeStamp(0.31393428262037715);
    msg.setSource(51442U);
    msg.setSourceEntity(128U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(192U);
    msg.name.assign("GVQVAJMTJODUEDACJHOKXEZOBGSZYVCWQEWSOEBXJLHQUBXATUAVROQDNQUPDQLTLNYONNVKFEUXUWPA");
    msg.visibility.assign("HQXCWRWICGUGNFXKFYERMRAROZTKZAEZQOHKNFVEYUHVVJQJQGSINWJRQEIUJGZPYWLVIIMGKHMTYMXEOBHXRDKVUQRGEEWHNATCBCCBNYQKPFHBLKXTLLMPPJUYQUKKSWFLHDJOQDENKBIXPGALTZBDMXBIAPZPFOPPIOZVGGDUSIJFHTLCUAAMMDXMBTVOUO");
    msg.scope.assign("MJTIMXBDTNJQNKGYSZARRSGWFYEXLCSQHBCLISGMUGFZOLWVGCUBFDAVERXIVQHKFXXJDTCFHKVXCUOJRNMQUJUBLQMAKYPTNUDHKEPPGPBVXPYPFYXKAHDEEVMJPYQRILJCWAKFWVLOUOWCZSFQHCHQPRJDOJZOVONBDYSYWWCGBZOMNGUTLVTKMOZWKTDGEX");

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
    msg.setTimeStamp(0.273802540255624);
    msg.setSource(46144U);
    msg.setSourceEntity(157U);
    msg.setDestination(29991U);
    msg.setDestinationEntity(9U);
    msg.name.assign("XZSJYRGLDKVEVCRISNIVJUCSHQUTEPKMFSBUWNNEONTCIBNXUXXGTVQTAIKPZMPCKADESGCLUGGWJOWRPEBYJILHWWVJTGMRBSDNMYNBZQEKDRYRLMNNFJSFBXQVOYAZDYLTXBHNZAXGZLWRWYXPZTJLEQCTBDFHGRXWEOFWOISXDHIJOODHEDIKQHATUOYBFYJOKQQYCMUMHQVMCGAKKPQFHCLVGURIMCVSOVEIZUP");
    msg.visibility.assign("LMTSOXYIDDQYNRKONXHHZAJOJXLSIVIOWQULGSRWMBQ");
    msg.scope.assign("JCKWZLKYVXBYTPJUWGCRNEOFORZYNWHFSFUIEMUZ");

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
    msg.setTimeStamp(0.6286530138764626);
    msg.setSource(65404U);
    msg.setSourceEntity(149U);
    msg.setDestination(44382U);
    msg.setDestinationEntity(97U);
    msg.name.assign("RIMRCJLBWLNEJSYLIEYWQLVRCWVLATYOPZRUNTUOGDUDYVJVJOOSIGNHYHATBEHEDQMDJYQDDFIUUOGIANHHSWLROLROZYKIPAPWCJVFWTMXXEQIE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SKGKFYDPGQZIDLNXOLZYRHQVBTMRWEOEZRBFJPIA");
    tmp_msg_0.value.assign("MVWJLQRACIAXNPFHXJTEDSYUVBKBRAUJVZXCLVNKFRJDNCTST");
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
    msg.setTimeStamp(0.9823806666817206);
    msg.setSource(26971U);
    msg.setSourceEntity(48U);
    msg.setDestination(7773U);
    msg.setDestinationEntity(118U);
    msg.name.assign("HELMXIDGRTCZAJPQRSWZIATJYIURKHKCLXEHIJJRUTNQRZUPMOCMWDWFTTECTKOSGBUPPBXAEFAASCMBOAAFNYHOVSNRDWAPODMIKSOCJYGBHFBYUJJCQVELTYEPBIFRDZOVQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WNMQIGQHDTGAAWQWLEFHEFYZYVCLDAHXRUIZBCTZRKVOFSYXTNXTBIMJUXHVEMLDMEOLKGCGVRSACRBNYDQIGHTLECISSVEUIXJIWPTVFDJOJWPCRSZAVONGNKIBNOVOYDYBJKZDFHPFDJSHCLWUVJZYJKUSJFX");
    tmp_msg_0.value.assign("ZXNZWWNFEECAGWKIIWCVVRQFCJQWDAOPEQPPFKTTCPHDUEBJZJULZHDRLWQFUKYYOXSDUTDRZXONKVIKJXRNEYMIRHKLBLOSCLESBGVXDFQANMAXRHRICHVZOTAUBSYGBSULSTFPDUAJZOMKQFXQNWFZRIONMHULYTPAMCGLIPQTNLSGVVCPBSZUVFPEBSBYECROJTIJMTNBMGSEYDWQJEYHGYDAIFAQJHAWZTNKVLXUDIGJMHOMYGBK");
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
    msg.setTimeStamp(0.7900518372906635);
    msg.setSource(44265U);
    msg.setSourceEntity(157U);
    msg.setDestination(15989U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RUROHPFITCHJNALMVTXHQBAUNIBHCESKNPIWSADCFGNWVOPYZTWIAYYXEQFQPWKZBPWLJDIMZEHSJE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FBEUNNTPJWDQHDZGKGBCVBUHUYQEDWXSOHVXQYRVORSSRXUEEQZOADERRPGWFMRWZYCSXTDQBHGGCIWFFEACCEFSCOWJZTFFDQSJAUVIJAKKOXFZWMPSFWJOTCFMGYUWQMELQPARLIXLJVGZPZPVNXVZGUOTXNEMBMBYJVXHNLUINDJPTHPASSMACYKKRYUHHQROANMBV");
    tmp_msg_0.value.assign("PPGTBEVYNABWUHKXGRCCYZGRDWIZUFZUKPNKGBFSNHLWBWZKTWYGKEUATJOFCCVJVLXVTSJYFJXBADWMQMQJLJXEUJVVZPGOPYJXIJDFONDCVXSCBMLWXOHLHTUNOOKQHUZESIRUNFBLGEMICFMIAXCSQYNRYVGCHDZQKTRYIPDFITDWEBIQHDSDFLQNZNFSKLURMZSEAMTAMOPUWHVDSORKQHPIHTEXZARGYCA");
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
    msg.setTimeStamp(0.8121016360208732);
    msg.setSource(8241U);
    msg.setSourceEntity(185U);
    msg.setDestination(56866U);
    msg.setDestinationEntity(34U);
    msg.name.assign("RDIWPZZVIATWPBLFGVMRHTUPGTKVVXSLFZAOHQXZ");

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
    msg.setTimeStamp(0.9738260560635518);
    msg.setSource(59535U);
    msg.setSourceEntity(200U);
    msg.setDestination(37663U);
    msg.setDestinationEntity(250U);
    msg.name.assign("HRGGLXUTBGZJOPXQMTZZHCZJCPLMBPTNVXOPJASDKOQEVBI");

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
    msg.setTimeStamp(0.07361766111807622);
    msg.setSource(23135U);
    msg.setSourceEntity(0U);
    msg.setDestination(57681U);
    msg.setDestinationEntity(1U);
    msg.name.assign("QBQKFJRWGPBBCQKRAZHXSSMFHQAXBLVPDWZWAIXIMTWQZOAGMUYYNGIPBHDTRXVEPKLMJZMCTYFMULXEEDEBDQYPKJLGNFJTKFOXECGOSVVOTJYGMVWKSDXMSWHAVUCBVKYBRYSVHUGHIEDNEORGBUMHZSSRDUAATWDHKHFXPOTC");

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
    msg.setTimeStamp(0.7188510467706006);
    msg.setSource(45711U);
    msg.setSourceEntity(21U);
    msg.setDestination(15274U);
    msg.setDestinationEntity(0U);
    msg.timeout = 206257283U;

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
    msg.setTimeStamp(0.3145039956606608);
    msg.setSource(56365U);
    msg.setSourceEntity(78U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(206U);
    msg.timeout = 2919869875U;

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
    msg.setTimeStamp(0.37464876611094045);
    msg.setSource(62976U);
    msg.setSourceEntity(60U);
    msg.setDestination(43224U);
    msg.setDestinationEntity(73U);
    msg.timeout = 1809883512U;

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
    msg.setTimeStamp(0.9954670401904795);
    msg.setSource(38942U);
    msg.setSourceEntity(116U);
    msg.setDestination(8805U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1070984179U;

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
    msg.setTimeStamp(0.49678089727830943);
    msg.setSource(33855U);
    msg.setSourceEntity(130U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(41U);
    msg.sessid = 3412599175U;

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
    msg.setTimeStamp(0.14725019887742608);
    msg.setSource(31567U);
    msg.setSourceEntity(218U);
    msg.setDestination(37798U);
    msg.setDestinationEntity(166U);
    msg.sessid = 2032118512U;

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
    msg.setTimeStamp(0.14977530128813688);
    msg.setSource(2319U);
    msg.setSourceEntity(22U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1149197354U;
    msg.messages.assign("AGFQTMISHEFTEMGPYNKOVDZBYVWTTXLXMOCTOIMGFTCRBLBVFEZNYAVARNXDLJWUYGFIEFWNVKFLYDKXQZTOPNOIGKMWDBMZWERAYNJIGLPCIKCAZUDIZJNCUDLOFHPHCSQBATBSEAGOSSATJNAXOHSJISLWPQHJDHVUXCBDLXOQSKWFZCKKJMWCEBJOPGDYRZVRZTJZHWXYKXURMQRMNHLEQQNQHLBRVMPYSXAJEEQUGIWSUUVYDPG");

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
    msg.setTimeStamp(0.0006424405290318402);
    msg.setSource(36187U);
    msg.setSourceEntity(60U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(41U);
    msg.sessid = 2590108227U;
    msg.messages.assign("ZFVEAOFGBUEFVEVUYUQDYRQONSBMUZCIARNFQLZHJEDBOWALQSKADYRTKIWKALQJAYFZQZVMPSEGLCOJRFYBMPJO");

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
    msg.setTimeStamp(0.8317842718542202);
    msg.setSource(36550U);
    msg.setSourceEntity(99U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(48U);
    msg.sessid = 954042707U;
    msg.messages.assign("JLJOJVXAKFUTCYPFQIXYJNAFRSZQDJSWZTEGVVFOYDVCEYBNCPEYAYSMWYHFZZSHQMLVHUPJGQUPQBERNVAMGOQOFRTYJHUCKIULTKTWPRGXQAEDNDZPMCIFAIMPZNGWIGOYOJDGXBTKPCVNFLHWUOVLIHSEODRELKUGXEUHOBBRHSWPHIUFRHLDSYIQBGISCGMTDKORBDB");

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
    msg.setTimeStamp(0.6347341716597078);
    msg.setSource(15902U);
    msg.setSourceEntity(24U);
    msg.setDestination(21733U);
    msg.setDestinationEntity(216U);
    msg.sessid = 3050260877U;

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
    msg.setTimeStamp(0.15867431170367774);
    msg.setSource(17915U);
    msg.setSourceEntity(38U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2526442549U;

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
    msg.setTimeStamp(0.5702120299162723);
    msg.setSource(44081U);
    msg.setSourceEntity(185U);
    msg.setDestination(50534U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1597721578U;

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
    msg.setTimeStamp(0.5445046499104497);
    msg.setSource(7287U);
    msg.setSourceEntity(58U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(91U);
    msg.sessid = 4112345538U;
    msg.status = 127U;

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
    msg.setTimeStamp(0.01082830441355509);
    msg.setSource(62472U);
    msg.setSourceEntity(3U);
    msg.setDestination(60716U);
    msg.setDestinationEntity(36U);
    msg.sessid = 1415415890U;
    msg.status = 67U;

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
    msg.setTimeStamp(0.3423832900546365);
    msg.setSource(29753U);
    msg.setSourceEntity(94U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(128U);
    msg.sessid = 344675306U;
    msg.status = 169U;

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
    msg.setTimeStamp(0.5464682573784393);
    msg.setSource(23465U);
    msg.setSourceEntity(66U);
    msg.setDestination(44899U);
    msg.setDestinationEntity(61U);
    msg.name.assign("XTPQHMJEJJHRQIUENVKFSNUTVZTQSNIPAZLZVETGBUEA");

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
    msg.setTimeStamp(0.6749593500307434);
    msg.setSource(2425U);
    msg.setSourceEntity(234U);
    msg.setDestination(59447U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ATKXVYXJLNWHCLFFFMDCZDNJAVLSHVAIAXVZZK");

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
    msg.setTimeStamp(0.3165021634988423);
    msg.setSource(14920U);
    msg.setSourceEntity(8U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(70U);
    msg.name.assign("RMBSEEERICEMFGVTDWNBBVWXZTPFQHUHNLOHLUOLRVEKCMVZZYRTYVAJSYAQYTGPQSHSKDQMVLZEKQAJNDSNDOFKCTNUKUGAHXCTAGIXAKBPNZFWUFPNJQDUHBDHXRJOCPZKIRSYJBOYAUYOGZICYFSJZV");

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
    msg.setTimeStamp(0.3112542930448531);
    msg.setSource(5855U);
    msg.setSourceEntity(0U);
    msg.setDestination(34897U);
    msg.setDestinationEntity(171U);
    msg.name.assign("UJHOGQSRHGREMSQYYDWPIWTLBEKKEKWEUOLLVYLYMIPSAEUTWYEHWXNOLVIFIGRZPDYSFKLJXOPCYYTWASSLAOFQPMTNTRWNOYHJCGZCBKDHUNVRDAMMBUMBZBRAZLEPKFSZBVXOVQXHNCGNZITLJXVQVACO");

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
    msg.setTimeStamp(0.08108469422263387);
    msg.setSource(64159U);
    msg.setSourceEntity(165U);
    msg.setDestination(28025U);
    msg.setDestinationEntity(155U);
    msg.name.assign("WDMBXHVCNEOADFGGJNLMXKNNQYNZIHCMEVCAZUBRWDYOYQPFXXDMPOSNHWTPOVHRQUPEQTRAVMRIYRJRWQFGVBCXFKOFFRRUGLBLHUZILYTPFGZHYJJPZAWWAZEXLJENQYUFKACFWVRGLAGFTTWOEZDDLEGSQSIDJBVOSENZQZEIJSTCBUOIBXVXVMMKOSKDONUPSYCIHJIBHEPSCWAUCIYTWBSICMJKMAPK");

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
    msg.setTimeStamp(0.9309093510466899);
    msg.setSource(59956U);
    msg.setSourceEntity(203U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(96U);
    msg.name.assign("PBVKGOLYBLAEEGTWNHMERTQWPKYWZYNVMFBYDCCVCEXPPRLETSGSKTFDBFXHPNHTSPHXJLWITFPWROLYCSBIDJCOJMMZTUHVAGODQQMMXUNGLO");

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
    msg.setTimeStamp(0.2648327389193149);
    msg.setSource(61903U);
    msg.setSourceEntity(159U);
    msg.setDestination(39580U);
    msg.setDestinationEntity(162U);
    msg.type = 149U;
    msg.error.assign("UQULBRNWDOBSLKCPVLMUXUSEYPIRSWHENHCTGBIXFWMFGRIJEIEWNKXYQFSDRACSLHEXCDNURKKCCVNDRHKQFMAODINMVMIKUBFEVMBJDQTKOBNTPMGAJVPGUVAIQPHVGTTGOIZNQPEPAMVCLISTGGTARRGAPMHDFBYTJZELOPHJWGQSQLWJMUWLFZSSFHOZDUKLVXZYJSJVTBBQTJBYUHOKDFEAOWYPCYWXQZDCHFJ");

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
    msg.setTimeStamp(0.8076283298457408);
    msg.setSource(19267U);
    msg.setSourceEntity(107U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(85U);
    msg.type = 182U;
    msg.error.assign("QBUABUJWIKKRXJQRMRONMEUKOORPHOIHROAWYCSFYDPPQLLPCHNCJYWEONMQJJDMNGYMWNOLAPTLLKZFKWSMBSDLITFXNDGSXWCDUVYMFFDRLEBPPQMFIZVCUVJHSALDTOQWSMHHQJGQXHDXTIDGZUFARQZYBXEACIRPXVBPXCIEHKNRWUIEJMCBAPTVVVGBEGALVBSRYFFNGOTSLNHYQIONTJVWSVKGFZKZZWAIUZDHGECKXTSCKUYU");

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
    msg.setTimeStamp(0.6480925254355661);
    msg.setSource(60906U);
    msg.setSourceEntity(146U);
    msg.setDestination(58352U);
    msg.setDestinationEntity(109U);
    msg.type = 117U;
    msg.error.assign("CNDMLGEEWAETHVDRARAHRUYTSMUFKNDJJKRRAFJIBOWZIRAFOCOFXKBODPUQQPWQVXQEMCVIPYMWNLVWPMVGDFMSMOTURCRXZXHFWKBJHLRHYSCQLZUNPKLGEDTOFOYIKNGLZUGEGTTBIVPDSASXCDZVWBAQSXUDIWCJXKBTWLCPLGVNBYSYQZIYHSOIYNLTNTETFKPQMEJBZKHUAYZVBFLJMRYQANKZM");

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
    msg.setTimeStamp(0.23369413941403505);
    msg.setSource(62252U);
    msg.setSourceEntity(125U);
    msg.setDestination(35822U);
    msg.setDestinationEntity(137U);
    msg.seq = 52334U;
    msg.sys_dst.assign("NQYGWRNJZHLSJJMSRIVYQDXZTNGZXQPYAQRFZDEUOHPXMUVKAAIDSNQYOWWWSCKKWLAPRJKHVOTPAONAOBCKLDMATVDJXBYPTKNCQCBOXNHBMUSCPMGCJJRFQHXDRKUNVVJZGAIRYTQLEVSQHUFIBHGETRLYLMOFWICVZTXFFUNUDJYCXZTWUMWI");
    msg.flags = 145U;
    const char tmp_msg_0[] = {-95, 27, 66, -4, 1, 112, 79, 45, -46, -120, 91, -15, 125, -117, -19, 107, 73, 106, 39, -116, -104, 29, 25, 68, -36, -59, 52, 0, -8, -45, -19, 107, 65, -75, -80, -102, -60, -27, 118, -46, 101, -51, 58, 94, -110, -114, -76, 104, 1, 114, 18, -19, 23, 92, 3, 37, -52, 2, 81, -88, -35, 50, -91, -48, -94, 126, 22, -128, -47, 18, -11, -110, -105, -24, -77, 111, -121, 40, -57, 16, 32, -13, -32, 23, 10, -52, -27, -68, 21, 35, 120, -8, -67, -67, -54, -72, -85, 62, 21, 54, -28, -23, -74, 93, -10, 89, 117, -35, 77, 65, 8, -29, -8, 117, -90, -121, 54, -50, -102, -91, 99, 102, 72, 84, 10, -70, 58, 65, -96, -4, -80, -27, -33, -98, -96, 28, -29, -93, -41, -43, -49, -40, -126, 50, 114, 87, 92, 2, -53, 55, 11, 77, -37, -105, 124, -51, 0, -127, 28, -36, 45, -31, -115, -113, -30, -128, -113, -13, 67, -16, -56, 91, -110, 64, -102, 84, -24, -74, -68, 4, -105, 76, 32, 103, -113, 31, 25, 43, 62, 68, 50, 118, -38, -8, -127, -35, -76, -83, -101, -56, 94, 73, -92, 3, -55, -40, -77, 44, -122, -36, 21, -23};
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
    msg.setTimeStamp(0.3820458170370826);
    msg.setSource(38236U);
    msg.setSourceEntity(185U);
    msg.setDestination(36817U);
    msg.setDestinationEntity(15U);
    msg.seq = 83U;
    msg.sys_dst.assign("CLWZUKEXFPGXJUGNCSHSYDCFSWKWUERDOEILVCQDYBPFBS");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-94, 19, 72, -88, 6, 13, 35, -36, -65, 64, -2, -109, 90, 76, -119, -122, 31, -111, -30, -30, -47, -107, -6, 47, -128, -95, -73, -33, 1};
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
    msg.setTimeStamp(0.7108013333462359);
    msg.setSource(37483U);
    msg.setSourceEntity(21U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(235U);
    msg.seq = 42922U;
    msg.sys_dst.assign("NCEOIQJVKLMCELVRQXZPBDJARDNPRWYTPRMMXWLKBGXSTYBJJWJHMBGBOLVMTRDNYSGAEEIUXKFTPGBDZFVHWXNTAFNKKKFCGOCNTSPZGUNCMMDUEBBUYDHLKHMLEGKHIVKCRANIJWPZZSWKGUJFXWSCAOOOLQZSUIIQOENSQYPQIYWPYOAZLULZECUJOAQVEHWXUOBCAETIDXHRRTTXVMVHPV");
    msg.flags = 115U;
    const char tmp_msg_0[] = {-30, -38, 104, 45, 73, 41, -110, 55, -76, 2, -38, 13, -116, 34, 35, -8, -98, 67, -77, -82, -37, -38, -4, 83, -25, 95, -118, -59, -127, -38, 83, -88, -23, 123, -30, -107, 112, -46, 6, -107, -42, 29, -115, 72, -18, -43, 105, -32, 121, 50, -13, 103, 60, 117, -25, 82, 98, -25, 6, 59, -51, 107, -114, 112, -50, -121, 95, -92, -99, -94, -14, 105, 122, -105, 70, -79, -59, 101, 81, 1, -119, 42, 63, 35, -95, -53, -10, -47, -118, 61, -2, 22, 4, 103, -94, 97, 39, -72, -60, -89, 113, -16, 57, 35, -94, 108, 16, -123, 20, 74, 77, 9, 68, 40, 86, 90, 71, 54, 25, 117, -77, 125, 119, -29, 116, -17, -115, 33, 68, 85, 64, 104, 68, 123, -56, 122, -9, -69, -89, 82, 18, 86, -62, 81, -94, 75, 62, 19, -128, 96, 89, 123, -89, 121, 63, 38, -9, 18, 90, 101, 104, -117, -49, -56, -59, 29, 62, 106, -12, 15, -52, 101, 55, -117, 122, -34, -120, 8, 32, 12, 2, 80, -22, 14, -116, 49, 8, -68, -108, -35, -119, -82, 34, 25, -96, -119, -24, 117, 54, 82, -70, 96, 114, -75, -42, -128, 29, 102, 119, 59, 4, 88, -127, -39, 28, -58, -54, 101, -47, -73, 122, 38, -89, -61, 124, -57};
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
    msg.setTimeStamp(0.26094375423833627);
    msg.setSource(50166U);
    msg.setSourceEntity(161U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(172U);
    msg.sys_src.assign("JTXLLPRMZLHQZXLJMSGRTFUDWJFPMYIXJJMMFNQWQWRYHNERAFOPISHOSGHAZKFTAMUKSSUJXBCVLGCIAINCKEZTDJCVYTZHCNNVKIPAVXBRKFYQDPCOXKRCIAEYYOYGLUUGHDQJNNKHSLFWQGZLSYZFUBTLNETSAOVYSOINPGBAOXQTRWROGKBCBMOEACJRWHBZSAM");
    msg.sys_dst.assign("XETQYPXNDGMQAGLJSVAFELPOUJBWZPKQIQWJSZZGHDIK");
    msg.flags = 183U;
    const char tmp_msg_0[] = {-24, -22, -2, 84, -84, 11, -50, -36, -16, 105, 66, -80, -110, -124, -26, -41, -62, 46, -69, -39, -71, 53, -99, 7, 50, 13, -113, 64, -62, -103, -78, 102, 24, 61, 5, -91, 39, -30, -84, -80, 77, -25, 117, -123, -41, 59, -110, -30, -49, -114, 7, 47, -15, -9, 7, 41, 8, -125, -42, -31, 83, 3, -114, -49, 2, 118, 50, 45, -68, -10, -66, -72, -81, 89, -94, 117, -107, -60, 94, -66, 98, -18, 101, -79, 42, -32, 21, 23, 120, 54, -91, 113, -101, 98, -126, 47, -15, 46, 16, 6, 58, 116, 115, -111, -90, 88, -3, 44, 111, 3, 35, -77, -120, -6, 31, 25, -78, 118, 103};
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
    msg.setTimeStamp(0.6644093106967283);
    msg.setSource(33275U);
    msg.setSourceEntity(26U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(247U);
    msg.sys_src.assign("YSLHAJBMHIVCKQDOPPCEANJKLQDSKVPKDROOITPKLIVGJTJTQKXBCQEZHTHNXYFBBJZZGHUNYTHZOTJWGVWDGCWASXFLWOLEVGPRZLLAFAFEXFUSNDBEIMWTAWIRSGZAADENXMDUOYNJKMXKHNVYZLVT");
    msg.sys_dst.assign("PFQWBQNABBAXTMXWJFVUPSXCLIZTYIREHXDYOCGEIMAOAUIGTGWACRLYYAXJNGSRIMRLYAZEKELPCUFNUCTLABGDJLLJMZCHDVWKAJZVILBJPPTBSWMKKYCCSZDMWFOUDEHFWYOVQMKUISXZAGMVINRYSOVQQXSPMEIZPDQGJXKNRULHKOOMZBRIPSHKGDQPEEOTCUUBTFFXHWFCLNQJKSGDNUHTBFJZTBPTYRVYR");
    msg.flags = 28U;
    const char tmp_msg_0[] = {-105, 70, 40, 85, -56, 75, -125, 87, 6, 58, 22, 96, -94, -121, -106, 118, 27, 109, -91, -39, -24, -121, -52, 78, -94, -78, -96, -52, 61, -83, 58, 61, 26, -125, -48, -57, 22, -120, 70, -106, -61, 89, 105, 31, 28, -71, 112, -99, -5, 69, 46, -85, -68, 88, -60, -92, -66, -96, -120, 35, 39, 15, 0, -126, 111, -45, -39, -41, -108, -105, 9, -2, -38, -9, 25, 46, -109, 2, -103, -112, -67, 89, -24};
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
    msg.setTimeStamp(0.08232752819749822);
    msg.setSource(50484U);
    msg.setSourceEntity(8U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(245U);
    msg.sys_src.assign("JIKZNTQTBYZGOFIPSCBCWJOXODAFDZHQANCWBCMNCPGNKCJBQZSHQSJKBQVLDROKUTEDRTUFPRFQLHEJUGLRVZRTHPGJKMLCIZKDLXLNOTMTWGXAXTUUCSEAHIVJIAPRJVNDEYYWPAINEPDTDQXYXFNYGIWESHTMFXCHKYMLMOFBPZMXDFOHIKIVYWAAEEFLGPY");
    msg.sys_dst.assign("XIFBDXKKCXPKOOPFQVERDLJQCFVMWXLUZJCDTPWOGEJVQVTCCFSANGIGCOZKLSSPYUOENNUVULRRTHWK");
    msg.flags = 236U;
    const char tmp_msg_0[] = {-43, 70, -39, 81, -115, 80, -1, -55, -73, 4, -48, -75, 91, -88, 28, -92, 58, -69, -125, 87, 28, -112, -102, -13, 58, 70, 10, 44, -79, -30, 116, -124, -121, 9, 101, -65, -9, -67, 62, -112, 85, 124, 109, 12, -61, -89, -66, 56, 99, -97, 73, -40, -13, 110, -92, 57, 51, 68, -68, -40, -84, 39, -26};
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
    msg.setTimeStamp(0.4552066566858338);
    msg.setSource(26315U);
    msg.setSourceEntity(26U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(132U);
    msg.seq = 40038U;
    msg.value = 90U;
    msg.error.assign("GUWELOGFPRBAPPVVVKPAWBHEBXYZKBOAWLXPLZVYDBUXLJTXUJNGAQCTPKSULUPKRZSBFSQHMYBTMXQJZBKHNHZNESMNWIWDUTMFGSVZHDJMHKGNUOVHLPDUPACCQCFTAWJQYDGCJTBQDZEGKIYOOSECHFIQNAOJKMXTRFQRQMOLXGPKYWIRMZMVLVSZIJJNNX");

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
    msg.setTimeStamp(0.1590650476525225);
    msg.setSource(28362U);
    msg.setSourceEntity(23U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(188U);
    msg.seq = 51759U;
    msg.value = 153U;
    msg.error.assign("PECJPSJQJAEBUZPDOICFVKRRXOEZJITVMFWUUFQSVUOZXAANEFHAQRWCLVRQVDIAOTUZFJVPAKLFKYWIJKSVD");

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
    msg.setTimeStamp(0.33701154652235943);
    msg.setSource(9539U);
    msg.setSourceEntity(17U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(112U);
    msg.seq = 45550U;
    msg.value = 217U;
    msg.error.assign("VAVAGFRQWBOKGMYVGCIXVBPFLUGTXORGEMLZEJXAENMCVKGIYEBDTBKHZIZHYMTCJYYOSHMJOBTRSOYQXMSUSATQPONQTJWJMJUAQMSOUC");

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
    msg.setTimeStamp(0.7200145699630819);
    msg.setSource(50827U);
    msg.setSourceEntity(206U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(197U);
    msg.seq = 14143U;
    msg.sys.assign("BFNUYXHOLTSACIQKQZABQWTJKUMYSFLCADFGVKPZJKRNFCGGQBVDZAXBMWZVSBOIWOTYORPDJFUJATXWSTEZPUUTREJHEXGHGDULYGOGOZUMXUDLYNRTBNPWJBECHDMYEIQRDLPLKVAGFCINZJCXAFHHCSWZEGEPRNLVMRFHDHVWMKPTSYFKCTWYMBJPQVNADYHMKXHUAVQKIVAXIWPXBIBINFINDZLXMLSRVINRYO");
    msg.value = 0.14903987786883377;

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
    msg.setTimeStamp(0.8553981204461787);
    msg.setSource(23489U);
    msg.setSourceEntity(208U);
    msg.setDestination(15546U);
    msg.setDestinationEntity(124U);
    msg.seq = 13864U;
    msg.sys.assign("EZTVFGNFCIILLEMWIQXKAYCTPNHYBXQGYAFGMVGJCIANAOOKXZGUHQERLFHMNLJAYOBESWBEKSKVGRPJLTKPLEBSCSPDWVGBMGLVKYNAQQNWKIZJUQRTWRXREV");
    msg.value = 0.7231967385302697;

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
    msg.setTimeStamp(0.08507749049904134);
    msg.setSource(55394U);
    msg.setSourceEntity(162U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(175U);
    msg.seq = 13618U;
    msg.sys.assign("UACNIDMUPMRJDWWCNTNPSQFEWZTBZCIIOCELEBFTQLADKYMKIXRKAWRWBUZTGBYPVANXFYXHKHCPGUOCCMKIDPJPHDRFLURAECXVOASUQHWYBHHBDLLWBTOQVROKGLPWFAGLJTVKLFVFZMMLRPSLBVDXKQTQENJZJZJWNFYTNAIJVIZUYQERVQYSSDSUZMYEJHFIKT");
    msg.value = 0.27042876486926704;

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
    msg.setTimeStamp(0.07270379138116134);
    msg.setSource(63301U);
    msg.setSourceEntity(222U);
    msg.setDestination(40331U);
    msg.setDestinationEntity(14U);
    msg.action = 209U;
    msg.longain = 0.4310877395862529;
    msg.latgain = 0.8709833373292798;
    msg.bondthick = 269747430U;
    msg.leadgain = 0.7135328689498251;
    msg.deconflgain = 0.8384747335000063;

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
    msg.setTimeStamp(0.19378352657099518);
    msg.setSource(8455U);
    msg.setSourceEntity(252U);
    msg.setDestination(5875U);
    msg.setDestinationEntity(4U);
    msg.action = 58U;
    msg.longain = 0.6676105647714551;
    msg.latgain = 0.27879566530843325;
    msg.bondthick = 2360001008U;
    msg.leadgain = 0.5918090248448777;
    msg.deconflgain = 0.6461617171545526;

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
    msg.setTimeStamp(0.24846649421653422);
    msg.setSource(48778U);
    msg.setSourceEntity(6U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(37U);
    msg.action = 88U;
    msg.longain = 0.2530035670084464;
    msg.latgain = 0.668027370499472;
    msg.bondthick = 2026951679U;
    msg.leadgain = 0.9671506674673648;
    msg.deconflgain = 0.4023845933025896;

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
    msg.setTimeStamp(0.02099878344473094);
    msg.setSource(57797U);
    msg.setSourceEntity(69U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(96U);
    msg.err_mean = 0.7093648694075593;
    msg.dist_min_abs = 0.7670295692052205;
    msg.dist_min_mean = 0.2652014557124679;

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
    msg.setTimeStamp(0.5001330473145974);
    msg.setSource(7211U);
    msg.setSourceEntity(191U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(135U);
    msg.err_mean = 0.6191535651208615;
    msg.dist_min_abs = 0.6329502317308772;
    msg.dist_min_mean = 0.26282879354256716;

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
    msg.setTimeStamp(0.47708003886485795);
    msg.setSource(55235U);
    msg.setSourceEntity(64U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(195U);
    msg.err_mean = 0.6405377460397005;
    msg.dist_min_abs = 0.5684133332471448;
    msg.dist_min_mean = 0.9756833588917524;

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
    msg.setTimeStamp(0.940133769125614);
    msg.setSource(17612U);
    msg.setSourceEntity(12U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(221U);
    msg.uid = 189U;
    msg.frag_number = 146U;
    msg.num_frags = 159U;
    const char tmp_msg_0[] = {-123, -108, 112, -121, 62, -11, -40, 103, 66, 46, 76, 78, 88, 42, -11, 24, 121, 53, 20, 5, -12, -77, -6, -120, -3, -53, -103, 3, -98, -108, 22, 95, 111};
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
    msg.setTimeStamp(0.44535343773711444);
    msg.setSource(53757U);
    msg.setSourceEntity(212U);
    msg.setDestination(5886U);
    msg.setDestinationEntity(235U);
    msg.uid = 100U;
    msg.frag_number = 146U;
    msg.num_frags = 205U;
    const char tmp_msg_0[] = {-54, -71, -42, -106, 45, 72, 121, -122, 80, 44, -110, 99, -27, -57, 14, 86, 13, -44, -78, -89, -43, -126, -16, -93, -91, -27, -26, -61, -47, -84, 109, -82, -41, 23, 60, -10, -70, -98, 73, -95, -126, 74, -24, -111, 89, -112, 3, 9, 11, 65, -114, 69, 54, -15, 9, 88, 68, -117, -100, 63, -70, -104, -36, 107, -45, 90, -1, 45, 83, -128, 76, -25, 29, 102, -100, 31, 44, 84, 104, -9, 53, -101, 86, 83, -59, 35, 48, 10, -102, 24, 86, 94, 10, -73, 42, 115, 72, -72, -126, 86, -92, 64, 97, -34, 7, -24, -108, 71, -72, -102, -119, 9, 106, -127, 90, 61, -15, 40, 120, -92, -17, 23, -128, -5, -48, 48, -106, -77, 122, -74, 20, 64, 88, -68, 68, -80, -90, 69, 24, -82, -75, 115, 46, -28, 115, -79, -37, 44};
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
    msg.setTimeStamp(0.8104572173052755);
    msg.setSource(16700U);
    msg.setSourceEntity(201U);
    msg.setDestination(40152U);
    msg.setDestinationEntity(17U);
    msg.uid = 217U;
    msg.frag_number = 189U;
    msg.num_frags = 69U;
    const char tmp_msg_0[] = {124, -66, 17, -109, -86, 105, 30, -96, -83, -114, 35, -77, -120, -61, 0, -42, 103, -65, -122, 112, -82, 108, -36, 31, -3, -29, -102, -51, 85, 75, 42};
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
    msg.setTimeStamp(0.5512538506701832);
    msg.setSource(45904U);
    msg.setSourceEntity(152U);
    msg.setDestination(29623U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("OTMYAPYXJIHQDJBFEHGFHSPVZHTODYDMBW");
    const char tmp_msg_0[] = {104, 95, -69, 79, -19, 110, 32, 86, -110, -33, 120, 111, 3, -20, 57, -74, 123, 64, -59, -105, 57, 16, 101, 54, 48, -29, -119, 115, -105, -65, -63, -100, -34, -76, 48, 22, -75, -51, 62, 34, 110, 35, -21, -112, -7, -101, -94, -74, -67, -65, 114, 39, 95, -76, 64, -101, -118, 101, 90, -95, -107, 119, -42, 41, -101, -79, 66, -123, -60, -104, -21, -4, -126, 47, 62, 81, -38, -50, -56, 81, 83, 57, -94, 87, -120, 62, 71, -83, 56, -67, -109, -102, -64, 22, 108, 70, -40, -35, 85, 7, 53, -16, 97, -28, -29, -37, -81, -49, -125, -122, -30, -71, -29, -120, 59, -31, 45, -86, 73, 1, 90, -12, -3, 101, 62, 100, 71, 46, 85, 65, 68, -21, -15, 115, 95, -69, 86, -59, -93, 78, -24, -8, -4, -89, -63, 108, 21, -121, 52, -60, 109, -97, 69, -47, -73, 38, 39, 16, -98, -16, 30, -32, -15, 117, 32, -27, -17, 104, 120, -18, 100, 33, 123, -102, -88, 28, 104, -78, 45, 18, 121, -93, -106, 63, -107, 11, 7, -48, 92, 39, 48, 2, 19, -80, -13, -107, -39, -36, -123, -69, -78, 84, 54, 55, 61, -105, -124, -34, 57, -111, -15, 14, 33, -71, 34, 78, -69, -29, 121, -29, 69, -16, 120, 70, -48, -113, -78, -78, 67, 85, 104, -82, -37, -60, -30, 18, 48, -122, 50, -61};
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
    msg.setTimeStamp(0.26878220891822857);
    msg.setSource(36211U);
    msg.setSourceEntity(128U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(17U);
    msg.content_type.assign("CHFHTJYYPCVFQTUIAMSOIUOPDRATXSWABHTEEEVXLDDYKWTGMMVBNGFZIWLORKAJTGRCASPMXZDERWFUOZSKQ");
    const char tmp_msg_0[] = {14, -111, -90, 86, 90, 52, -116, -122, 101, 65, -77, 67, -87, 99, 14, 56, 81, -103, -85, 72, -121, 81, 100, 82, 60, 95, -13, 22, 111, 121, 9, 34, -80, 123, 64, 84, 5, 0, -26, 78, 73, -108, 74, 88, -34, 50, -115, -46, 39, -104, -46, 45, 90, -23, 69, -8, -94, 20, -12, -58, 100, -128, 69, -100, -11, -43, -8, -34, -97, -8, 12, 32, -61, 9, -68, 14, 34, 116, 107, -92, 89, -86, 56, 118, -44, 36, 62, 104, -22, -91, -78, -35, 21, 102, -37, 107, 33, -74, -42, 19, 6, -66, -16, 86, -97, 67, -96, 4, 49, 30, 24, 60, -31, 41, 56, 115, 23, 29, 72, -21, -121, -120, 96, -111, -1, 107, -85, -108, 63, -7, 74, -77, 74, 60, -47, 121, -63, -78, 41};
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
    msg.setTimeStamp(0.520123054277275);
    msg.setSource(22479U);
    msg.setSourceEntity(122U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(22U);
    msg.content_type.assign("OYEJDMMETBZYBNDCQNPIGJSARFTCQUYTFFOSZXDJUVBWRKAZKYQHPSLUYHELMWGJXBERYGOCLLKIDGOGHNHZTGWCAVUZLDTZDMWDPQVOJPDISHVUKXFNWD");
    const char tmp_msg_0[] = {88, 63, -64, -46, 52, 53, 56, 105, -77, 97, 114, 67, 98, 37, 30, -120, -103, -79, 4, -34, -6, -113, -67, 121, -84, -34, 75, -82, -6, -113, 41, 125, 14, -72, -35, -14, -128, -16, 24, 21, -128, 87, -104, -98, -128, -128, -84, -117, 57, -89, 84, -45, 49, -81, -46, 45, 4, 106, 10, -16, -46, -90, -11, 113, -64, 87, 100, -25, -63, -67, 84, 30, -28, 83, 108, 78, -45, 79, -25, 87, -54, -93, 79, -53, 96, 39, 97, 1, -31, -72, -60, -59, 104, 19, -40, 37, 41, -87, 37, -59, -3, 71, -8, -75, -46, 17, 112, -76, 72, 17, -71, 8, -119, 73, -112, 95, 111, 81, -6, 87, -80, 45, 82, 64, 21, 112, -79, 19, -81, 74, 10, 90, -10, -8, -121, 72, 74, 60, 114, 125, 16, -23, -39, -38, 120, -68, -104, 108, -77, -57, -35, -33, 123, -14, -126, 116, -2, 3, -38, -10, 34, 15, 107, 107, 6, 93, -100, 86, -126, 48, 99, -19, -29, 75, -47, 27, -67, -7, 92, 122, -86, -60, -120, 11, -81, 102, 7, 20, 101, -106, -50, -68, 90, 64, 16, 17};
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
    msg.setTimeStamp(0.02851156639250929);
    msg.setSource(59938U);
    msg.setSourceEntity(75U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9135526053944564);
    msg.setSource(23310U);
    msg.setSourceEntity(203U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.04141890164488149);
    msg.setSource(28372U);
    msg.setSourceEntity(72U);
    msg.setDestination(60843U);
    msg.setDestinationEntity(210U);

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
