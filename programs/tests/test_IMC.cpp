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
    msg.setTimeStamp(0.09331910359681173);
    msg.setSource(26868U);
    msg.setSourceEntity(166U);
    msg.setDestination(58734U);
    msg.setDestinationEntity(205U);
    msg.state = 105U;
    msg.flags = 69U;
    msg.description.assign("TEZNDLXALXCPKJECQBSHDUIESBOJNFEVARCDXZWFFKRLNKS");

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
    msg.setTimeStamp(0.9150517252093204);
    msg.setSource(31705U);
    msg.setSourceEntity(127U);
    msg.setDestination(35706U);
    msg.setDestinationEntity(135U);
    msg.state = 181U;
    msg.flags = 123U;
    msg.description.assign("ARYAJUXGCJJYZSMBNIUPPZRBLDFWHEAUNXRKKIBVPSJKXCFSFKVWBEBSMXRAFJDNQLGYEINSRFSRVKCSTGHUKAQRDLZAZOXBWDXPLBIUCIFMSGHTONCQETPTYAYIMEOMRNDENDOZHLLMBBLIVDJGOONYTGFXABUHRMZDUPSWELJIKQKPMFOMUWZHHQTKIGHJHGOVJQYUHCPLYWTRNVDAXLOPYNUWMWZXWYEXTCCZTZQS");

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
    msg.setTimeStamp(0.34553465753562274);
    msg.setSource(13035U);
    msg.setSourceEntity(78U);
    msg.setDestination(62607U);
    msg.setDestinationEntity(166U);
    msg.state = 200U;
    msg.flags = 0U;
    msg.description.assign("WWKDBGUIUDEXZRYFSGLJJUQGWRIKMBBEKKCPMKNOBDAQAFTCMXYEZR");

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
    msg.setTimeStamp(0.4044852616912995);
    msg.setSource(39052U);
    msg.setSourceEntity(201U);
    msg.setDestination(50950U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.9012475362221357);
    msg.setSource(60573U);
    msg.setSourceEntity(248U);
    msg.setDestination(47702U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.12775402818806658);
    msg.setSource(52058U);
    msg.setSourceEntity(57U);
    msg.setDestination(8837U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.9607968824160912);
    msg.setSource(10440U);
    msg.setSourceEntity(46U);
    msg.setDestination(63592U);
    msg.setDestinationEntity(116U);
    msg.id = 164U;
    msg.label.assign("IOVYFQMSKCUSXBZHVNJYKPLDCUELLDCWCBSEIJNSWEOZGZOKNFQSARXWWQVTMILBTCLDPQMTRBZUKRZCANRZAVIATXYFWYEJHJODGXQNGVORTESSIDOZKINAHKTBFVGYWIYCHLWXYFUBXJPOMWUANPADMFJEJXGQQEVWBHAQMTAKLZFQHSDPQMISHMOAZXFNJGUDYEJKCBHVHUHJ");
    msg.component.assign("LARAJWQEVFIRYVFVNDGLROMOQEOAXBYXMWOHLYWYVHZJHOPQMUKOXOCVBFIXIITWEYGDRNAZUVKOHAVIKNNFREROMEJDABWGNFUGNEMVLWKLTJHHZPQUMBJJNTEQZKDDRFBSUFQKJSPATPLSRAQQYSSPUHXJOCQP");
    msg.act_time = 27346U;
    msg.deact_time = 42086U;

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
    msg.setTimeStamp(0.2417395753678826);
    msg.setSource(52452U);
    msg.setSourceEntity(31U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(154U);
    msg.id = 236U;
    msg.label.assign("LRUWIHAMASBNJFJSYKQVWYPBZDYFCCHJKOECJECBPMVUZSGSICUSHFBJODNWXIATXPXUPUJZNUCKMYGYLSDYYXPVLAYTQITZZFQEDJCVHVWICVGTYPMQKERRGILNILAMZQZTAPENEXVTITDLQQESLARWXXWORTFOMSBGOWNEKNZOHGKVRNSJQFBBJRMBZEGHRCPBKVOFHMDMQILQDWIZOOUAANKELOBXRRWHPST");
    msg.component.assign("BMJZQSFSNUUZLCASPVJGLKWXIJHWLJRTZXUNKUPREJFQFVGDRVPSHBSKHNLXUCHKZKBMTRUJOOJFQGBXDKPZSXYDKGQCTFPYQNFGIZHOMLNIBTTDVPNBVYIDDFCRPRXLNLATASYEHMAQMOPBEWWVLDDEEMIHAFCCZUCUINXMCUJYQJLHRTVEHVWNYUXAVNOAYWOZIMMWBHTWOM");
    msg.act_time = 60170U;
    msg.deact_time = 55862U;

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
    msg.setTimeStamp(0.4704164978668207);
    msg.setSource(3287U);
    msg.setSourceEntity(140U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(80U);
    msg.id = 241U;
    msg.label.assign("SGSFXSVQKYUVPHGCWJSUALIMGHMOSJZCNICHXHKQQKGCEQTPSYWYNIRNRADYGKPCHSOHLHTVBRKLLTEDUAZUBCLRZNADEWTTJGGTKOPPXDVFCOEUPFVIUEAIVYYEEJPAERKBCOSZAPLMFYBIRVXWMPGFAODNQLJWDQZEVJKXZSMIDKZXOOLIVKQBOGJMZYE");
    msg.component.assign("MMMQLCRBZEXOOXDGXHSEMHLQHDEWKZKZIOCTNJZXWDZSHSFLNYTLPXIIIFSMJKHDLTJERCOXLRFMRRKKLWCJXFCWNHPIJQIKOGTGOPPSOKAYVBJBODURXQESGYDYUZZUTFFQILWRSMPJFAKNWRHEABVOJJSZHCGFKEOWEUYMNBAVBIRNUNEFWVQPKSJVBYBRZAMBHUEAVCDPTUCYVVZQQALDCYWUTIXTDSVFPPC");
    msg.act_time = 12816U;
    msg.deact_time = 26044U;

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
    msg.setTimeStamp(0.735634052596104);
    msg.setSource(2024U);
    msg.setSourceEntity(222U);
    msg.setDestination(46938U);
    msg.setDestinationEntity(49U);
    msg.id = 46U;

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
    msg.setTimeStamp(0.6867174602084075);
    msg.setSource(38290U);
    msg.setSourceEntity(76U);
    msg.setDestination(3502U);
    msg.setDestinationEntity(143U);
    msg.id = 250U;

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
    msg.setTimeStamp(0.44093246280983467);
    msg.setSource(43539U);
    msg.setSourceEntity(253U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(27U);
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
    msg.setTimeStamp(0.05611243081522044);
    msg.setSource(56919U);
    msg.setSourceEntity(225U);
    msg.setDestination(11813U);
    msg.setDestinationEntity(162U);
    msg.op = 217U;
    msg.list.assign("HLPNCDCSKIDLFEEXVNEAYDIGTULQYIEKRZFBKMMGROZFDWGZKYLHQNUVMXCTGKNVUXORCZPCPYRMSVDQETRVRHVUHTUIIZWJKWIVHIPJFZBPXOKTCMPQUGDSQNVHKRCMSGDBAWGXG");

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
    msg.setTimeStamp(0.41302674536687345);
    msg.setSource(13770U);
    msg.setSourceEntity(219U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(133U);
    msg.op = 42U;
    msg.list.assign("FWPMXTBYFEWRUUWIJLYZXUNVIPAIYXINEZOO");

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
    msg.setTimeStamp(0.03343424228837766);
    msg.setSource(51199U);
    msg.setSourceEntity(29U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(214U);
    msg.op = 188U;
    msg.list.assign("BHJUOWJMOPQADXHESICKBBDZAXVCHMKDIUMWPUTG");

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
    msg.setTimeStamp(0.9265569618024807);
    msg.setSource(24536U);
    msg.setSourceEntity(124U);
    msg.setDestination(22555U);
    msg.setDestinationEntity(195U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.16928127775397261);
    msg.setSource(15281U);
    msg.setSourceEntity(19U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(95U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.9425688781554582);
    msg.setSource(62131U);
    msg.setSourceEntity(254U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(166U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.6758963045587228);
    msg.setSource(36568U);
    msg.setSourceEntity(236U);
    msg.setDestination(27775U);
    msg.setDestinationEntity(219U);
    msg.value = 101U;

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
    msg.setTimeStamp(0.5986159861289883);
    msg.setSource(23978U);
    msg.setSourceEntity(247U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(7U);
    msg.value = 26U;

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
    msg.setTimeStamp(0.5670208202406588);
    msg.setSource(22430U);
    msg.setSourceEntity(30U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(130U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.07162379483443215);
    msg.setSource(42892U);
    msg.setSourceEntity(117U);
    msg.setDestination(19366U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("JJAEKBKVHTKPETVLVSQDOGFPGIGNFAWHHQTMMSWFQMPCSECZDXBJQSEYZCQSZATEOFILYETDOXXDNOYUMWUDKUBUVCGEOAYAIHBKGHKDBXTGVFIGWCDCLZYNRAPICJXXIIUANDLWKUFUSSRLJRRVMTSWMZQTNIJIPLHZBHBJNEFGDMYQASFXOWYAZPQCKQNCNKORBYZNPZWFIJHTPRJRUUH");
    msg.message_id = 1661U;

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
    msg.setTimeStamp(0.9192325644686841);
    msg.setSource(20597U);
    msg.setSourceEntity(7U);
    msg.setDestination(4052U);
    msg.setDestinationEntity(95U);
    msg.consumer.assign("LFSERHBFIRWSUZXOKAEFQPBUEMNKJCODTHBPVPHQLJQZWDZCJZVOPXAICFAMYVXYODAXANQWXIKVACLAEASDQFWXQOGJNTFHYWBBWEGOEMWVAMRQRUVBKLATNGCJSQPKTWVCVUREILMNYSUJPNJUZNHRXREXGHKUBUKZNFCHHYTTTILLYKFDM");
    msg.message_id = 48284U;

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
    msg.setTimeStamp(0.7039301574148358);
    msg.setSource(33865U);
    msg.setSourceEntity(241U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(72U);
    msg.consumer.assign("BELHOWUVAIWVRKEHFHPXZFMDCCBSBVWEKOBJXWESDCBQMZFGDERYJMZVEVSTQALONVUGLJSNYDQHFSALUPWLXYQXYZRNJBUQCADBKBKPMCTQWNUJFVRZAOROSNPQMJNCYUIGGBOSGTBOZHNHGQENODYPIUFIJSEUHJQGNHTLTKXYHK");
    msg.message_id = 24705U;

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
    msg.setTimeStamp(0.014212789710024598);
    msg.setSource(27858U);
    msg.setSourceEntity(12U);
    msg.setDestination(7159U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.6977186074522892);
    msg.setSource(17358U);
    msg.setSourceEntity(228U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.05011675685351835);
    msg.setSource(33243U);
    msg.setSourceEntity(123U);
    msg.setDestination(27828U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.3108187346353001);
    msg.setSource(42833U);
    msg.setSourceEntity(207U);
    msg.setDestination(55753U);
    msg.setDestinationEntity(49U);
    msg.section.assign("KXFXHEDDQBXXODQHFAFXSYIVOWNHABCJELBPSRIFPOSMSSLLDUXKOHVWWEVGKXJVKJGBPCGBRHRQUDUDHPXFOTHZAOHILNQRWDICAQGKMZZMIMLNUYPKAEOTUUIAGYCDJNTRKNLLUTQOWTCVQJBBRTCNWFJOMWTIUKZSZFYCTYTRFPFPWQ");
    msg.param.assign("JXBIQVTOPLSUXFEZSMHCAJOJTYTVNAWAXDBIUWLIGLNIPDDSFDNRFAZRVYHUUMUVPNWAABKJUYTBWPNCRCYUCYMTEILDCEKTFEDJMABZBCHJEVKHLKLGIBDUKOWJMZ");
    msg.value.assign("BJAHIBZNGZSIYGOMGSFHEQVLSPBZVDXGGTWOOKKYWSIGVXPKHBVNXXKIKROZYYFSSNRGDVANYNMDRTETWYOXAHMMABHJDQMVRZHDJATCJTVPIKDIUJQOPDZOISJWLIFHEWCZOONFCEAUDRVPQKSBCABPEXNEOVP");

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
    msg.setTimeStamp(0.8074764120371755);
    msg.setSource(48875U);
    msg.setSourceEntity(156U);
    msg.setDestination(51383U);
    msg.setDestinationEntity(191U);
    msg.section.assign("HZKDGWGILQNLRNERMTOHHQZQNBFPECUGYDEQATAJSFWGORTJIFFKOWKDTPBLKMGXJJNXUVLPDZUINWMRACBSUAHDLCPQPTDLJQITMYRBAFFZZMLVTIYGVIOE");
    msg.param.assign("LELDRUJMVBKLUWUGGMUTEJTCPKYKZABNLBRGOYAGRDIMSLMACJBUXNICNWJSPXAHSLNSZCQXKGIOBOCUFXZCRUXTWAPEWLGCSBISEYXQYULMVMIOOOFWFKQEDKGPROSGFQLJONINYYMYSUBJURYNZNPGDJRFPHIHTMQWPBKBTDXZZCTLKCDIDWVSHHVYVDEAAF");
    msg.value.assign("XHATFAUFFCOMQNEALJTLMRLLVXBNZEENPTDXRPSFIOEMEKQVCLTXSOVULONZUSYPZKHONWGJPRNDKHCGCOVGGOPHYMLEDQHDFVJWAISUGNCFYGEDGDHVDZRWUTWMPBIBZRUWJLACRYIODSZVGLBICPAEUNTZWTWUZPOVRFUSYQIQXQLYUJYETYAWJKXSBXVZFHAAHEBBQDYTMDWXNMQKQHSPGC");

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
    msg.setTimeStamp(0.25552992563997257);
    msg.setSource(58076U);
    msg.setSourceEntity(34U);
    msg.setDestination(39333U);
    msg.setDestinationEntity(249U);
    msg.section.assign("ZCXKFHNEOQMPLQVSMHMUYFTQOMEVGBPVECKGVNRZOJQHOGYDHBAWIFMZRPTTGGKIEBSNPJDTUTJOIFYVBTLSRUCMFLLBVGLSJ");
    msg.param.assign("LVVOQDMYDWHRCQRXSHEIXGEMWJHGWXWVXIBLSZJNFBJYWLOJGUZVLYZMRVRDQFYYUOCBAICHANHCUFNXKWKCUGOUBFWQGXZOSRHCJFQAHLTUPNEUSBDKMIQUMLJBBDSWADZIIPHFCTZMFHAPVQDCJBDFQJTRENECPUKAJAKXIZFLXYKKAVXTZQRYBRSUYNEBIEGPYSDMEGNGPNTCYQVAIAOXERGZNSPD");
    msg.value.assign("YXZXGMUQUSNHDBWCGVIKZTEMFRYDSFJCLLSATJUHQADMTDGPNI");

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
    msg.setTimeStamp(0.03693312733320275);
    msg.setSource(36664U);
    msg.setSourceEntity(111U);
    msg.setDestination(32061U);
    msg.setDestinationEntity(90U);
    msg.op = 82U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IIDTGVVVCNJGVNBCGAZL");
    tmp_msg_0.param.assign("YKUQDNAPFUGMZTBMFATXSDXRIJNBCTRCHIGSLBDRIYVHLUXCQOEVFYBIGLEFZCWMKXOIRYJWPTNGQWYGCPLUSPBCLNSRSZKMSMLLHZDXADOVQGKUXAEQAUIFWJWXSIVTPZHTVKUQZSTJMNMCARZKLONRDQDADGNBEIYRHIWTCLUTJRZYKJPNFMQHPHAYFMBODJLVOGXWAJUH");
    tmp_msg_0.value.assign("ISMJLUSTENUXSCXYMDIVIHXUHCZLQNRQWPGGUMSOMPPPLKUBDGRYUBAZKSVWHCPSWLPHJBEYEKXBADFADRVGPTTGFJTYDIJLRXOJKEDDNVGVLNQKMIOBEENXKNFP");
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
    msg.setTimeStamp(0.023060804473318264);
    msg.setSource(28399U);
    msg.setSourceEntity(220U);
    msg.setDestination(9298U);
    msg.setDestinationEntity(183U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.2140606252008005);
    msg.setSource(40939U);
    msg.setSourceEntity(95U);
    msg.setDestination(17523U);
    msg.setDestinationEntity(38U);
    msg.op = 192U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VBGUPJVNPYAEMXZRIYQUVJUWNQKRLOFSFFFY");
    tmp_msg_0.param.assign("RISPHENHPBCTDOHVSXUYGOFNKJGMDDMMIBGEQMOQMFRWPZCNLQSVBHHNLALRRIRMHDWTIFSBWOMYJCCTWLYDBXMVPJXOGAFBERTZCFQYLQPPLTFQYFNKNDKEXBSCWYATPTALCEBXIUAVAVOUZWBJVJYLURDXVUGTZHCYAASHUOVNFJQXMGCGSDYQEWZAGBMRIKUPHRIDZLQUHKLSZUZIWAJOFJDXTXGEVKWVNZIZTEWRQIJYFGPUSE");
    tmp_msg_0.value.assign("KPWPOPBQANEASCKNSURWAETNESMQRKELPXXRDMHUCERISTLNGQGXZGIPRDUBVVDJQEFYOODIOCFHYYGWHZWNLJSHDITVBYLBPXJFLQDWGPGUAUOHFTNCIWK");
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
    msg.setTimeStamp(0.8276131038857588);
    msg.setSource(51420U);
    msg.setSourceEntity(20U);
    msg.setDestination(28924U);
    msg.setDestinationEntity(42U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.7188302293882118);
    msg.setSource(43671U);
    msg.setSourceEntity(154U);
    msg.setDestination(18212U);
    msg.setDestinationEntity(207U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.7735724290914285);
    msg.setSource(26314U);
    msg.setSourceEntity(2U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(239U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.6786708245133435);
    msg.setSource(46289U);
    msg.setSourceEntity(136U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(202U);
    msg.total_steps = 168U;
    msg.step_number = 99U;
    msg.step.assign("QLCJHUCZYATICRMUCOMXEJIMJZTYDUR");
    msg.flags = 124U;

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
    msg.setTimeStamp(0.6429464148842226);
    msg.setSource(30912U);
    msg.setSourceEntity(182U);
    msg.setDestination(14746U);
    msg.setDestinationEntity(173U);
    msg.total_steps = 101U;
    msg.step_number = 174U;
    msg.step.assign("OIELXIQUSVEBQSXMPHMCXDCVXUOCZLYBEOQMHQWVHASWRSXMLTGUVVBQGESAMDVMBONWAUCTOERUREGTJRVXJAGDYJCPOVGFUFYREHHBCIXWMRJPNPPBJNZKKZNYSKALKQOLKTSLMJQTWZZXXINFHNOYNCHDZIDVQJAFLREYGAICWJDTZWWPCRPLAYBUZDGIGNXOUJRPCQBYIHALIDTUKJMFTFDWSVTIUSHTQRKNZGF");
    msg.flags = 0U;

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
    msg.setTimeStamp(0.23603092667222003);
    msg.setSource(65281U);
    msg.setSourceEntity(40U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 201U;
    msg.step_number = 181U;
    msg.step.assign("KAMGXGIVETGKPYQNQKQOPDLYQPZFHYDJZSLDWJWOPAKRMLOPGVNSGXUGFRWQTCFNOAHJXPDJWIIUVUFQPRVAYDXDEWEEADYKVZRKIPESNKLHYHMXCVQOHFUGUZSMBWACTZHOOJUVBBKPZHHSRYWWFMXBNRCELHQBZURFUSAM");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.8925570697392051);
    msg.setSource(64860U);
    msg.setSourceEntity(187U);
    msg.setDestination(37866U);
    msg.setDestinationEntity(24U);
    msg.state = 175U;
    msg.error.assign("ZWUMLZSWCSGMMIQGPVAQHHONNBDZYZHQFNJOYCUXFGWAOZOCTYDIXSLCSPIHMSNDJLVIVGHLXKROBHYPKGIAPTSZJWRJJTXTNXCIDATOADHXFZFNESMOXAQBCEVKXPTDUHILCWXLKORVFALNEFEFEVFWEDEJAJSUXUBYVFZNRLGPBIHRGZDRNUQREJKBLWVGQMGATOKBSJRCYCHNA");

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
    msg.setTimeStamp(0.588794888239202);
    msg.setSource(39986U);
    msg.setSourceEntity(52U);
    msg.setDestination(52418U);
    msg.setDestinationEntity(241U);
    msg.state = 33U;
    msg.error.assign("PRYMUZSGGZCVNFMJRFTGVOBHFGIRPFXBYHLGWAFQDXZZUHIYQJMIDPZRTTOEDSDVUWDZXZSYHVSNRWLKBVIKCAYCYNGFXCOQLYKKJTOVIQMBQTUKOMRLWUPWLCKWEJWGBMDLXKXMANNSJGHLJISROYSKSNAOSYNXXHOEXLGKCXCUREEEEUDVDIZLUWZDFTQTLICMNSTJNIBTWRCVDFAEWQVQBUEPUOFHBJQPCKPBHAYHJA");

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
    msg.setTimeStamp(0.6351116431586716);
    msg.setSource(53665U);
    msg.setSourceEntity(30U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(152U);
    msg.state = 77U;
    msg.error.assign("JDKZXLNEGKTXHNFJJGCEZDCHMGFBSHZLDGTAGCGXRBPXHMHQQSVIXBBOKJJNVHFZJVWQHRSAWNUZI");

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
    msg.setTimeStamp(0.010622207214836865);
    msg.setSource(26110U);
    msg.setSourceEntity(203U);
    msg.setDestination(892U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7103024651452192);
    msg.setSource(19993U);
    msg.setSourceEntity(106U);
    msg.setDestination(15417U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.7491363717556317);
    msg.setSource(12998U);
    msg.setSourceEntity(82U);
    msg.setDestination(38807U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.04891874381680161);
    msg.setSource(21184U);
    msg.setSourceEntity(152U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(102U);
    msg.op = 70U;
    msg.speed_min = 0.41014417847425166;
    msg.speed_max = 0.768634811337192;
    msg.long_accel = 0.3694569341814682;
    msg.alt_max_msl = 0.4616615414471871;
    msg.dive_fraction_max = 0.7735904982131778;
    msg.climb_fraction_max = 0.42885589864313167;
    msg.bank_max = 0.34976532610056665;
    msg.p_max = 0.6591613277010995;
    msg.pitch_min = 0.007063397043896913;
    msg.pitch_max = 0.6764597961269527;
    msg.q_max = 0.20607961314821888;
    msg.g_min = 0.04785294918701555;
    msg.g_max = 0.3300104580535921;
    msg.g_lat_max = 0.1750798793693611;
    msg.rpm_min = 0.5523211559277866;
    msg.rpm_max = 0.313980397867211;
    msg.rpm_rate_max = 0.21077700979660763;

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
    msg.setTimeStamp(0.16483068602792061);
    msg.setSource(26090U);
    msg.setSourceEntity(243U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(121U);
    msg.op = 179U;
    msg.speed_min = 0.9376939767423429;
    msg.speed_max = 0.4419570802699009;
    msg.long_accel = 0.9509533513116515;
    msg.alt_max_msl = 0.628956656454949;
    msg.dive_fraction_max = 0.06590232165754673;
    msg.climb_fraction_max = 0.7471055453976202;
    msg.bank_max = 0.024155744074685237;
    msg.p_max = 0.2286169099720634;
    msg.pitch_min = 0.24374503531378477;
    msg.pitch_max = 0.47501948560302254;
    msg.q_max = 0.4860067291349499;
    msg.g_min = 0.8787718228834499;
    msg.g_max = 0.46505716918702467;
    msg.g_lat_max = 0.6148221360788486;
    msg.rpm_min = 0.48864127046281913;
    msg.rpm_max = 0.6568676005792538;
    msg.rpm_rate_max = 0.6901597911910623;

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
    msg.setTimeStamp(0.3044473092535266);
    msg.setSource(34079U);
    msg.setSourceEntity(103U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(110U);
    msg.op = 213U;
    msg.speed_min = 0.4077039896309709;
    msg.speed_max = 0.016870003135934564;
    msg.long_accel = 0.6849260190948658;
    msg.alt_max_msl = 0.7317974770712511;
    msg.dive_fraction_max = 0.5416192688695519;
    msg.climb_fraction_max = 0.31280719772378307;
    msg.bank_max = 0.015355181596177103;
    msg.p_max = 0.9117709356250222;
    msg.pitch_min = 0.14941574022459403;
    msg.pitch_max = 0.1397855896465967;
    msg.q_max = 0.7100898570552393;
    msg.g_min = 0.04695464742621758;
    msg.g_max = 0.8055461844129138;
    msg.g_lat_max = 0.19588406053269303;
    msg.rpm_min = 0.5139327525251717;
    msg.rpm_max = 0.4017624585950814;
    msg.rpm_rate_max = 0.8960069993272785;

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
    msg.setTimeStamp(0.9783743950119289);
    msg.setSource(38769U);
    msg.setSourceEntity(239U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(67U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.9442774009150224;
    tmp_msg_0.type = 144U;
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
    msg.setTimeStamp(0.38081496729433506);
    msg.setSource(32326U);
    msg.setSourceEntity(33U);
    msg.setDestination(21212U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.5608596277562801);
    msg.setSource(10318U);
    msg.setSourceEntity(233U);
    msg.setDestination(42765U);
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
    msg.setTimeStamp(0.18738605209282855);
    msg.setSource(2209U);
    msg.setSourceEntity(25U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.65393184781441;
    msg.lon = 0.9615585110230078;
    msg.height = 0.5248751318779459;
    msg.x = 0.7860114598496409;
    msg.y = 0.9750764389837652;
    msg.z = 0.2063804861522005;
    msg.phi = 0.9251622388478198;
    msg.theta = 0.970343149832212;
    msg.psi = 0.24122313362762204;
    msg.u = 0.21883129265350687;
    msg.v = 0.8233723781608225;
    msg.w = 0.9660914430985718;
    msg.p = 0.7010886831244663;
    msg.q = 0.11868737291606013;
    msg.r = 0.3754948426236161;
    msg.svx = 0.8161430313515963;
    msg.svy = 0.20949047136499033;
    msg.svz = 0.9700319105965309;

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
    msg.setTimeStamp(0.47378956371799463);
    msg.setSource(26838U);
    msg.setSourceEntity(141U);
    msg.setDestination(6944U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.688329854170272;
    msg.lon = 0.681368022811015;
    msg.height = 0.9024187892327012;
    msg.x = 0.8101172042893195;
    msg.y = 0.3695820561416375;
    msg.z = 0.022954369913985584;
    msg.phi = 0.7895061067378147;
    msg.theta = 0.9743794227580992;
    msg.psi = 0.4231716615821278;
    msg.u = 0.21166560947723834;
    msg.v = 0.39569822977216174;
    msg.w = 0.08627380442276456;
    msg.p = 0.8287734507513183;
    msg.q = 0.7347498370936328;
    msg.r = 0.11270696426231896;
    msg.svx = 0.516820503670838;
    msg.svy = 0.04547777141970111;
    msg.svz = 0.7000533619149129;

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
    msg.setTimeStamp(0.3770790377300761);
    msg.setSource(26029U);
    msg.setSourceEntity(21U);
    msg.setDestination(6471U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.4968835308694176;
    msg.lon = 0.5439584703454535;
    msg.height = 0.3482252860518157;
    msg.x = 0.40944935504792823;
    msg.y = 0.6489175665728425;
    msg.z = 0.3081932120731534;
    msg.phi = 0.38715534209554436;
    msg.theta = 0.0744373000850117;
    msg.psi = 0.4944959784158778;
    msg.u = 0.45678985017496876;
    msg.v = 0.31642950510477874;
    msg.w = 0.23539151481196618;
    msg.p = 0.3306606570561057;
    msg.q = 0.5573912722496577;
    msg.r = 0.4372933826547617;
    msg.svx = 0.5956238676072714;
    msg.svy = 0.7036854517416656;
    msg.svz = 0.2825532466498174;

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
    msg.setTimeStamp(0.6418261407899855);
    msg.setSource(6532U);
    msg.setSourceEntity(96U);
    msg.setDestination(7678U);
    msg.setDestinationEntity(128U);
    msg.op = 85U;
    msg.entities.assign("HJOBYFLTVWOHJWOALSKMSZLPDLMGQNFKCYVGFFJNUVXEXNQGUWOPWJLUHRHDZRXRRMTXEWOLJSMPVWFXAXDQBPIYIZVMOAEDGEURJLGTOXGWIBGECEINWPNRVGLQIJTMPNUCAQRSKKFIPTWPSONJURYYBKKUS");

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
    msg.setTimeStamp(0.8384577454679433);
    msg.setSource(6348U);
    msg.setSourceEntity(129U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(82U);
    msg.op = 231U;
    msg.entities.assign("ZTMLBKHQYUSHKPHKHGYBVNXZADKWGPDGQXUUGBNVJVTXZCMAXFTJKFRDCDQPTPHBRFDAPAIIWIJYMQMIORNMYGOJSOT");

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
    msg.setTimeStamp(0.050184301515917906);
    msg.setSource(42312U);
    msg.setSourceEntity(217U);
    msg.setDestination(56234U);
    msg.setDestinationEntity(63U);
    msg.op = 102U;
    msg.entities.assign("GOQMOXFNPNKXDZTTFIQDZBHHGXIIVFHYOZXISFOYANLONERQJBSLBWEUANQLSRLYYEIPIFLXEZGIALPECYBTJAESDZRVNWQNUKMOBWGHJWBLQRJGFCUEJXZYOVILHVXAURNFGXNMZSTCEWKLUHFMWDVROGYUORVGTHPDPTLTZVQCCKPHWSC");

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
    msg.setTimeStamp(0.6641256718937539);
    msg.setSource(43943U);
    msg.setSourceEntity(92U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(154U);
    msg.type = 126U;
    msg.speed = 58565U;
    const char tmp_msg_0[] = {88, -34, -125, -47, 79, -48, 116, -51, 14, 51, 35, -35, -9, 99, -54, 109, -76, 19, -81, -37, -127, -41, 75, -74, 63, -56, 55, 107, -16, -65, -77, 90, -76, -30, -90, -88, -51, -52, 47, 47, -90, 72, 93, 33, 114, -43, 7, -68, -117, -60, -122, 20, -2, 8, -66, 75, 64, -103, 86, -126, 96, 41, 46, 112, 6, -27, -125, 68, -80, 110, 72, 11, 88, 82, 34, -44, 15, 98, -43, 47, -109, 20, -52, -106, -97, 9, 94};
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
    msg.setTimeStamp(0.7011420378891849);
    msg.setSource(32225U);
    msg.setSourceEntity(159U);
    msg.setDestination(15648U);
    msg.setDestinationEntity(139U);
    msg.type = 160U;
    msg.speed = 53845U;
    const char tmp_msg_0[] = {-21, 124, 23, -31, -34, -99, -100, -78, -2, -56, 94, 2, 121, 121, -116, 36, -74, 51, 53, -100, 3, -111, -118, -88, -95, -41, 100, -32, 103, -71, -46, -94, 113, 119, 107, 50, 6, 75, 105, -12, -61, 11, -63, 98, -46, -114, -118, 16, -37, -13, 66, -57, 33, -12, -90, 80, 116, 82, -52, -57, -83, 10, -42, 113, 62, -112, 11, 89, 71, 1, -68, 17, 110, 90, -87, 40, -29, -9, 102, -4, -88, 84, 69, -104, 104, 104, 48, -103, -23, -7, 100, 24, -32, 120, 80, 85, -18, 97, 94, -35, -106, -118, -102, 102, -71, -126, 21, 83};
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
    msg.setTimeStamp(0.07399341754103284);
    msg.setSource(26246U);
    msg.setSourceEntity(157U);
    msg.setDestination(36078U);
    msg.setDestinationEntity(151U);
    msg.type = 190U;
    msg.speed = 47717U;
    const char tmp_msg_0[] = {20, -71, -108, -21, 84, -71, 16, -53, -106, -59, -98, 5, 50, 99, -35, 79, -2, 102, -40, -19, 57, 39, -7, 42, 89, -81, 70, 75, -94, 29, 45, 82, 33, 39, -35, 62, -76, -72, 110, 50, 67, -124, -81, 61, 78, -124, -25, -72, -41, 87, -36, -77, 71, -18, -45, -122, 107, -128, -117, -101, 45, 77, 13, -86, -6, 71, 23, -74, -101, -19, 122, -119, 47, 64, -56, -117, 7, 101, 51, 107, -56, -123, -18, 49, 44, -25, 90, -49, 72, 74, 73, 125, -79, -123, 57, 19, 16, -87, -71, 28, -102, 46, -36, 18, 10, -122, 6, 53, 113, -68, 110, 79, -75, 118, -5, -48, 77, -94, -106, 71, -48, -59, 114, 82, -122, 29, 22, -31, -25, 118, -41, 17, -21, -124, -91, -117, -111, -66, 28, 3, -105, 31, 45, -67, -10, 39, -73, 95, 112, 59, -35, -45, 18, 87};
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
    msg.setTimeStamp(0.8280049384655752);
    msg.setSource(39482U);
    msg.setSourceEntity(155U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(183U);
    msg.op = 89U;
    msg.tas2acc_pgain = 0.08424970216209249;
    msg.bank2p_pgain = 0.49093890695037123;

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
    msg.setTimeStamp(0.36609461741837557);
    msg.setSource(7183U);
    msg.setSourceEntity(108U);
    msg.setDestination(10983U);
    msg.setDestinationEntity(171U);
    msg.op = 44U;
    msg.tas2acc_pgain = 0.916083216990475;
    msg.bank2p_pgain = 0.6919628008365118;

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
    msg.setTimeStamp(0.1599994300269202);
    msg.setSource(61924U);
    msg.setSourceEntity(45U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(135U);
    msg.op = 1U;
    msg.tas2acc_pgain = 0.2140422608162138;
    msg.bank2p_pgain = 0.7574350784199216;

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
    msg.setTimeStamp(0.9910286568290092);
    msg.setSource(16960U);
    msg.setSourceEntity(202U);
    msg.setDestination(5550U);
    msg.setDestinationEntity(159U);
    msg.available = 2316613436U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.3120964417136257);
    msg.setSource(47307U);
    msg.setSourceEntity(103U);
    msg.setDestination(9828U);
    msg.setDestinationEntity(217U);
    msg.available = 2698425640U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.21898738721592603);
    msg.setSource(25842U);
    msg.setSourceEntity(153U);
    msg.setDestination(49275U);
    msg.setDestinationEntity(58U);
    msg.available = 3052029966U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.8791257209302011);
    msg.setSource(38426U);
    msg.setSourceEntity(11U);
    msg.setDestination(49922U);
    msg.setDestinationEntity(81U);
    msg.op = 240U;
    msg.snapshot.assign("EZMQKMOWAVPPHEJQHCPGSPEVFLBFHLIGMLJETUKZGMRJRJRQDXOXDEMTFH");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.4670660833001382;
    tmp_msg_0.lon = 0.29366503203803873;
    tmp_msg_0.z = 0.8684770712024529;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.radius = 0.536475838620236;
    tmp_msg_0.duration = 33551U;
    tmp_msg_0.speed = 0.16434855919360336;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.custom.assign("BMCGMFHXYRRBYQQYHSGAMINXMTNRAVQYRLOIGRBTAZTNNVNFZDGBFHRLSKXSGTZBBVLYIUBECVEJZWTSGPCJDATDVFUDDKZCWKHXFMNPVPOCKOSUKSYAUYWCDXLZGJLLQCPSTBNRRMIBKDGQHPTHQCUMOWCVOOEJJEWJQVYIXEZPPDYLNFWMNKLHOJHI");
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
    msg.setTimeStamp(0.3119464258790099);
    msg.setSource(31670U);
    msg.setSourceEntity(97U);
    msg.setDestination(30099U);
    msg.setDestinationEntity(176U);
    msg.op = 144U;
    msg.snapshot.assign("VXUZSDCXRHIGYQDASMWQIGRNTWZLWTKYIVWBDWIJPFCUJXHSKM");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2945394730U;
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
    msg.setTimeStamp(0.1434858787663661);
    msg.setSource(11027U);
    msg.setSourceEntity(204U);
    msg.setDestination(17975U);
    msg.setDestinationEntity(117U);
    msg.op = 212U;
    msg.snapshot.assign("TDZJQNXCRPUWRYFEJLYOOCQSIFINMDEPBOTRWTAHTVIPUJ");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 84U;
    tmp_msg_0.x = 0.9534532898215463;
    tmp_msg_0.y = 0.00219388313522495;
    tmp_msg_0.z = 0.2915630022071517;
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
    msg.setTimeStamp(0.2655654312734296);
    msg.setSource(20506U);
    msg.setSourceEntity(6U);
    msg.setDestination(3692U);
    msg.setDestinationEntity(31U);
    msg.op = 143U;
    msg.name.assign("KNXTYGTPOAPIGGCJSPYQVHDEWSIZCYQUAPKJXVEEWXQUCTEIRQULVZFYPKGDRTXZZUAKAIXSOUWHBONDFMWAWDRFXW");

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
    msg.setTimeStamp(0.20061990228859095);
    msg.setSource(52738U);
    msg.setSourceEntity(103U);
    msg.setDestination(17844U);
    msg.setDestinationEntity(163U);
    msg.op = 25U;
    msg.name.assign("VPLVBFBASJHSZUDCZKTSOCOEDREXCOOYWKHWERUOJNKBNFMCWOCZIYQPNNKNQXWBQVTTOAHXBCYJEGDCUQIGFGZLIRCKWFWLTZVZIOCDRQXXPMFEURFHUKQQVAQKJ");

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
    msg.setTimeStamp(0.07440897177413397);
    msg.setSource(42213U);
    msg.setSourceEntity(134U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(10U);
    msg.op = 150U;
    msg.name.assign("OEXETNNMWSNRZISZDZQTJWLJGTQEPIGMDHAQRVFFMPDIBVLSGXIJXYXWYEARJHILNHXELVVYZOJHCQXSOYVMKGAQCDCSWCIYZXHCQJSSAUOICGLPKDCNPMEAZVBAURMTAUV");

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
    msg.setTimeStamp(0.6136115421199635);
    msg.setSource(30001U);
    msg.setSourceEntity(235U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(172U);
    msg.type = 139U;
    msg.htime = 0.6769904862099266;
    msg.context.assign("WDWFNPTCXLCQZBSEVUFNRRZMEKZYMOLOKRHGTEICKIHLWOSYTRMJBJCLDPJICBVFTWRIPQKXWVDJAQRSDBKZGLSGQKZGZAFCXTYWSDTUPINOHMSIJGLQJXPMPEEVILOKQOHCFQKUSEVPXTDHLEFSBBLSBIARZUNFZFVTYXNHWQGAZBYDMHHNYUCABVWANAUOYDANNXMOPUIHXUXFCIRJCYKEBOKXPWRFJOHVTSGPZAGQUWVGDGM");
    msg.text.assign("PSRSLPPYNYQGTVMBATCRISHBKPKDNLBXRTTUYSMHKPTVLELPNAOROXGDERVQXYCQIMWGDGEKRHPBCJDNYUVSJSKIZXQFEIAKKYJVKMIHOWDBURNMEMLJWNUXZZQEFVXPITBSFJUMQNESKGYDDDXYNOTEACFIMILLPDCAS");

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
    msg.setTimeStamp(0.42635244540280004);
    msg.setSource(54419U);
    msg.setSourceEntity(32U);
    msg.setDestination(14142U);
    msg.setDestinationEntity(247U);
    msg.type = 111U;
    msg.htime = 0.8636396041789746;
    msg.context.assign("MNFFJSTLYQIBGVMKDQKNOKJBQEUJXIDRSXQPHNJFPEETDJKGVOLPVUYXVLMAISLZCWGYTWZYQYNCZGMAYSBSTMQAVPXCECGPRKAAARMSFXIWBSUKIVKSZXHDHMUTFEYJMOOINGLLXBUTWPBICJGTCSRFNVDWFHUHSIHOHLPZRTZXIJJQDEFKVGRCBADWZZEGDTWYBMVWLNPHDJUAHBOQKIQHNGTOBFRLZUYARCREWLAX");
    msg.text.assign("CNZBEHDCDSHUQSEAMQWCHGOBRBQFPJIXUONJGZFZYVVUJGNNIKYOFPTTMPMMMQDWESASXWTHHBYTDVALKEOLMZZELWARSLAVKGVYKJIPIRUBLCYEZYRHOJVOKZRGHSNFCPNZNDONVBKYPHIHRQIUCUQOSBQFLFTCZNWSUKXZKJRCTGNDFECDXJWJJWPFVOTTLRSXRPPXLXCIDVPFVALTYDAAEBQKMIOMSMWD");

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
    msg.setTimeStamp(0.7727341835645228);
    msg.setSource(38305U);
    msg.setSourceEntity(46U);
    msg.setDestination(36712U);
    msg.setDestinationEntity(165U);
    msg.type = 248U;
    msg.htime = 0.7777918492901049;
    msg.context.assign("BVJPSPLWUBMHHADRYFQUTPKSCFGRCVKOHWVRGBLXJGZBNEUCSMSEIZFR");
    msg.text.assign("IFONWVJZEESRXNTACZHFXMNHWEOHYKRDHTAAQSISGUCMFCEHQUWPHALVGRJFSOUFJUAMNQPYTNJAGQUCCPKWWXABRBTKTYJBGCTYGBMLDJXVHOLPWPIZKKDALXFWZVPJEZZGXPSRWMLSAIXBFLKSNTOMVYZQGVMQAIYJ");

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
    msg.setTimeStamp(0.9180345110910725);
    msg.setSource(22590U);
    msg.setSourceEntity(147U);
    msg.setDestination(7768U);
    msg.setDestinationEntity(240U);
    msg.command = 222U;
    msg.htime = 0.9670053724324329;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 67U;
    tmp_msg_0.htime = 0.7700796356467411;
    tmp_msg_0.context.assign("AWUILYUZHDZNJQORXAWCUSZGSWIKOYHJNDTTURUBRNLCHBVAMXJECEKLSNMFZEEPLXLPAFWDSUNCOKRBCZEWJESLCFQZOYOOKQPLNMIJYSU");
    tmp_msg_0.text.assign("LQNROODMKWPTX");
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
    msg.setTimeStamp(0.05404747563540402);
    msg.setSource(20718U);
    msg.setSourceEntity(53U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(72U);
    msg.command = 208U;
    msg.htime = 0.6272112122098815;

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
    msg.setTimeStamp(0.7007502370967823);
    msg.setSource(56952U);
    msg.setSourceEntity(239U);
    msg.setDestination(36885U);
    msg.setDestinationEntity(242U);
    msg.command = 114U;
    msg.htime = 0.345600357340786;

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
    msg.setTimeStamp(0.0777339138358577);
    msg.setSource(336U);
    msg.setSourceEntity(87U);
    msg.setDestination(57662U);
    msg.setDestinationEntity(223U);
    msg.op = 229U;
    msg.file.assign("NBUYEGIFCAUTCXLQHPPBNSELGLZTRAYDUGRHXIYBNCZWRXTNUPFQKNPYFFDVZKOMOGNWSVYNGC");

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
    msg.setTimeStamp(0.9650174038781524);
    msg.setSource(43280U);
    msg.setSourceEntity(1U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(60U);
    msg.op = 103U;
    msg.file.assign("XFBSNPKZUOSCOZDIOMFUSSNALQARNPTDURJWHERNSONXGSEYHXOJIJOWBQDQIGGZFKLKHFHUKVIKJRQIJXYHBWHMGCRQGOYRHCZLUWFXVCVWTPAZGITNQMAGWWTVNZPHUNLNYTLUJKUCOTGEPZBQBXFDUBSZRPPKRYPQKIEV");

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
    msg.setTimeStamp(0.7251810545272854);
    msg.setSource(34529U);
    msg.setSourceEntity(194U);
    msg.setDestination(4086U);
    msg.setDestinationEntity(12U);
    msg.op = 115U;
    msg.file.assign("DDQHOIAZTCRUSDFHOLEPJAYUEFEQYHKFFVMCOGTDGQVDBNGEHWAM");

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
    msg.setTimeStamp(0.1112171994862442);
    msg.setSource(9854U);
    msg.setSourceEntity(114U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(9U);
    msg.op = 147U;
    msg.clock = 0.7240462157707152;
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
    msg.setTimeStamp(0.5339746390743653);
    msg.setSource(42248U);
    msg.setSourceEntity(47U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(74U);
    msg.op = 80U;
    msg.clock = 0.2707360602412743;
    msg.tz = -36;

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
    msg.setTimeStamp(0.30930576966762435);
    msg.setSource(52587U);
    msg.setSourceEntity(66U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(131U);
    msg.op = 69U;
    msg.clock = 0.32252075441528816;
    msg.tz = 126;

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
    msg.setTimeStamp(0.3033933066637593);
    msg.setSource(445U);
    msg.setSourceEntity(86U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.8101837052081368);
    msg.setSource(55623U);
    msg.setSourceEntity(16U);
    msg.setDestination(30139U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.885562534718452);
    msg.setSource(6575U);
    msg.setSourceEntity(250U);
    msg.setDestination(10847U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.8701381593446785);
    msg.setSource(33807U);
    msg.setSourceEntity(36U);
    msg.setDestination(12335U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("ZELDJHXOVCYLZJQBZCQMBSNPBOVJBRHMKMETXRNZAEGLKWVTXUSAZKXFUYFDPQCWGDDIQDATLWGHSMNZBHNEYVKOTEMPBFWSNVXBRDGERQCSWMHUMYLAKFOYTFXFRXHTAQDTNJRFPGIKOUUXICOVQEMCITIGEUIJPKAANVOJZWIUIASQBJOFCPKKVTGSJURTCZBQHGUPPMROYFIPLWCRYLLEJABGEDYVSLSJQWRU");
    msg.sys_type = 137U;
    msg.owner = 48699U;
    msg.lat = 0.44358885707488027;
    msg.lon = 0.6640046288721897;
    msg.height = 0.9898263946359422;
    msg.services.assign("SQJVOWNZEZFXZBSUGIATNDNMKPKLZVFLDKDPXYKLCQNOGVMIEDJHHFPWSURIWAGGBQKRJIXGYQPWSEYMMXRPLFLEAIJVTHBLAAFSGMGCBZPYUYMCWVOIFJVXSIAYOHMBPSZYFEXUVVALKXBARDERTCVOJHWBZIWXAXWNQMUKNCROUIDTTSPLNMZTURHOKYTSHGEYTQKF");

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
    msg.setTimeStamp(0.5158489395579097);
    msg.setSource(54257U);
    msg.setSourceEntity(88U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(140U);
    msg.sys_name.assign("SVKLIATHEKZPMYOGCRXCUYSCSBVOMYOJDLZWRNRUZOWHPIRAUWWGJUCAOSRTEVHOQBSPQHQBVYXDQMTTSPYGPBJMPXXDABTYGBCSUNNJEFWTEZFHZAZPLKRLKIMDCBMVFWHDLYVEGNMTNQJYEDFJAHILBIRNFMIZFEIIFDNBXFZOWEQGFGVOGWVWKJQISRXKKZPVN");
    msg.sys_type = 0U;
    msg.owner = 62266U;
    msg.lat = 0.7993799837679129;
    msg.lon = 0.8166494064852908;
    msg.height = 0.4378011393050849;
    msg.services.assign("TAQNVXOCZAWMCNRAFRBHLNPALPKBSFRTGDFRSNTUOTTBEETOUFYUDIGNBLXEJROQMFHSYZJWQ");

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
    msg.setTimeStamp(0.2507752457977378);
    msg.setSource(18336U);
    msg.setSourceEntity(194U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("PUNZZUWXDAOOCPTPJVXQEWCYVURMALXUQBHHMTVXDIJWJXCKMRGONHPXPAHCLCRNRJLSXEPYWNTCQVQKLIWAXHKZTCSPKAJWYGVMORQLFQYLFDNUEJZHJDEBBOGQUMLJABLFWDBOONFQLIRJYHRSZRKLVNRFSYGDEDKDAGHIUMHMGFNCEGOJTTWZZVBFKMIQGWEIOWYP");
    msg.sys_type = 28U;
    msg.owner = 33471U;
    msg.lat = 0.561211191657729;
    msg.lon = 0.1846228016504612;
    msg.height = 0.19975847095613797;
    msg.services.assign("DVBGOGVFHHQCOSUEBQCTEBNX");

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
    msg.setTimeStamp(0.7069153092302078);
    msg.setSource(13221U);
    msg.setSourceEntity(142U);
    msg.setDestination(37110U);
    msg.setDestinationEntity(74U);
    msg.service.assign("XNRHDHSCPGAAVYTXFRXRIMDEFQUVROLEMHFWLYVBSYQTCGYAUEKNRGUOCMLXZCYKUOGSMZCOZZFUYOPBSJXALXDIZJQAMZJPUFMTWJEAOKPSFZBIVAFQRIBGEBSV");
    msg.service_type = 13U;

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
    msg.setTimeStamp(0.5323377330664687);
    msg.setSource(36724U);
    msg.setSourceEntity(134U);
    msg.setDestination(56163U);
    msg.setDestinationEntity(12U);
    msg.service.assign("YYIJCEHKVAOLUCGWTLDWPHNBAFTOCRVIZMERTRUVIWLBAGBXIYQEZOEAQBFQRJIOFWFMNHTBOOYIBFMHECYCGFPZGTHSPVZCKAIDIHMOBMYLQJFUZWCKRKUHPVQGXYTLCJHDIXGVKSFSAUQAPCQQOZXLTMUNKUYBTLEDJNNUNIYJWAEKAMMVDRSDJKGSNZWNJJEMOUZEPGOZPNXSSVDXMYSXTPEDNHBPRBH");
    msg.service_type = 96U;

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
    msg.setTimeStamp(0.9239427612550541);
    msg.setSource(61863U);
    msg.setSourceEntity(35U);
    msg.setDestination(33714U);
    msg.setDestinationEntity(243U);
    msg.service.assign("NVYLNPTLBQZMHJEEZKZIXWIIAQALDNOWSVYBSKYPUZJFCPLVDMBRFCSPGTMLOWEKSADRCPQZNDHJWTJHGCFUJUM");
    msg.service_type = 247U;

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
    msg.setTimeStamp(0.5025567633978907);
    msg.setSource(43143U);
    msg.setSourceEntity(187U);
    msg.setDestination(53702U);
    msg.setDestinationEntity(243U);
    msg.value = 0.5003409018824265;

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
    msg.setTimeStamp(0.9395673566058715);
    msg.setSource(11786U);
    msg.setSourceEntity(237U);
    msg.setDestination(64872U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7682391832263726;

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
    msg.setTimeStamp(0.33303020560175167);
    msg.setSource(20270U);
    msg.setSourceEntity(109U);
    msg.setDestination(48501U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2516353646496323;

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
    msg.setTimeStamp(0.41713463741203016);
    msg.setSource(42264U);
    msg.setSourceEntity(228U);
    msg.setDestination(19106U);
    msg.setDestinationEntity(96U);
    msg.value = 0.3848737321080705;

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
    msg.setTimeStamp(0.0652994061249712);
    msg.setSource(7619U);
    msg.setSourceEntity(12U);
    msg.setDestination(1854U);
    msg.setDestinationEntity(77U);
    msg.value = 0.054247390678414664;

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
    msg.setTimeStamp(0.14355053045585686);
    msg.setSource(23209U);
    msg.setSourceEntity(88U);
    msg.setDestination(31122U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6372311792943164;

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
    msg.setTimeStamp(0.0506905830892479);
    msg.setSource(55285U);
    msg.setSourceEntity(72U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8808350675063079;

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
    msg.setTimeStamp(0.6751399243168169);
    msg.setSource(6436U);
    msg.setSourceEntity(18U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9721492394769952;

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
    msg.setTimeStamp(0.4918794918237317);
    msg.setSource(32895U);
    msg.setSourceEntity(122U);
    msg.setDestination(46793U);
    msg.setDestinationEntity(176U);
    msg.value = 0.6499984228802284;

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
    msg.setTimeStamp(0.9526045731971001);
    msg.setSource(20605U);
    msg.setSourceEntity(167U);
    msg.setDestination(11440U);
    msg.setDestinationEntity(175U);
    msg.number.assign("DKUICGPOLJWXTHUHJEGBMKEYTMLJXR");
    msg.timeout = 37866U;
    msg.contents.assign("XMFERVJRHPFTNIDSWRDVMIQMTDPJFGXZYWTFEHVCCCEHDFPDYODDIMQZVOCZLXSEZNCQUUKLRCVEBPPOVUBZCIFTKLAXGAOHWJGNCSULNAIHOLH");

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
    msg.setTimeStamp(0.6668353616470196);
    msg.setSource(48588U);
    msg.setSourceEntity(227U);
    msg.setDestination(34307U);
    msg.setDestinationEntity(89U);
    msg.number.assign("FVBQYJAFKZGLBEMPQVZEEYWLNLYFZHOHUXEDCNYGAKBAQMGRIFVLU");
    msg.timeout = 32874U;
    msg.contents.assign("HGURMMQAPXFITJDJXVSLMJUCPZPLCTUWPLQHERTIXROHBHOAXHBCQLOLLNXIDFAXMSYMOIOXQSPYWNDFESFFYGRZVJFYAKZGSYKFOHRMJSUAWCBWZOABSTVNCXPTGWVZTVBTBPGLBFJSNQDYGMKRYVXMNIODPJNQGKVFEDPHIWDYECIUMBAUTCTSQQGKNEEMRKDZLGSJFK");

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
    msg.setTimeStamp(0.9408577443354369);
    msg.setSource(50621U);
    msg.setSourceEntity(198U);
    msg.setDestination(25195U);
    msg.setDestinationEntity(134U);
    msg.number.assign("JSZEGMHJWZVVFJGFMVNMIYXOPTOTUUMESTCCKRUPQKNNUWOBMCBAGITZZYJHTNJLENLOGADBWXKSXTYSBDFQVYDPEABJYQGARXOTOBQQLLPHYNFLHTQGNLRSAAKHIBJLEQUIMFOESHKLCIVMCBNIRZRXZAERVMJFJNHZIFCQUTJXTPBLGMXYQUUKKZGWUWSHPCDHIYKAAKSMPFPOOVZXVGPLPHSWXXWCDBIUVANGERFEER");
    msg.timeout = 37886U;
    msg.contents.assign("WPZOFAQUANSGBEGPYXQJRLKGQMXZGRTAMZBMDSQXLWSFDGNZWRGWLUSGDMLUJEJLZPDMYOTUZILKQINTHAEQHFIZTTAAZKSRNDPLTCILUCKTPCJYCQXKHVBXSJ");

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
    msg.setTimeStamp(0.0405796772069541);
    msg.setSource(21406U);
    msg.setSourceEntity(3U);
    msg.setDestination(25317U);
    msg.setDestinationEntity(169U);
    msg.seq = 265819379U;
    msg.destination.assign("CNCUAYJNYQMTZPFLMPMONFBASFWTFCRNUILYTGVCSYGJMWAMUXHMESEYDNAJSLHBRDTQRUOGCMAKPORAFEFWIVQZIJHNQQXCZXWNTCBAMKVHDXEGKOMJFVSAPKZJTHVKQQBREXZLHKJQHIGOHWYUUPPPPBZYWEISWAIYRSLOZWAGQSHKDKMFBNTGXCYWTQNDVOLRTCYXXFKEDCGGLNUGXDIHDRBPWIVLLBOBUR");
    msg.timeout = 61984U;
    const char tmp_msg_0[] = {-70, -98, -102, -41, 79, 39, -91, 9, 77, 99, -90, -57, 62, 58, 48, 10, -45, -98, -8, 49, -24, -48, -85, 90, 50, -89, -110, 49, 96, 102, 76, 80, -8, 119, -2, 12, 97};
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
    msg.setTimeStamp(0.4612467295784657);
    msg.setSource(13740U);
    msg.setSourceEntity(17U);
    msg.setDestination(17083U);
    msg.setDestinationEntity(164U);
    msg.seq = 4171973123U;
    msg.destination.assign("IAVIYJGRCYCOTIJETTNFOKOVGHCAHLXXXMRXCKEMLPGAIFWDQVAQQWNWDXROEWSDHCZKLPOTJSSNVHMADZFSAAGRQLBQIXSDPKBWVMIJBDLDUOYKNYJKHIBMBXOJWLUBDNQWZGHCUZNICNQFDUKRNERTHVVJFXESLXKBYUPURTU");
    msg.timeout = 15286U;
    const char tmp_msg_0[] = {-17, 0, 23, -19, 85, 51, 86, 113, -52, 53, -88, 107, -5, 45, -45, 20, -16, 46, -60, -89, -49, -106, 118, 60, -37, 62, 96, -74, -120, 24, -81, -41, -31, -119, -91, 0, 99, -19, 101, 115, 91, 75, -101, -111, -105, -91, -74, -65, 5, -4, 15, -80, 42, -105, -25, -56, -81, -73, -28, 66, 117, 0, -120, -124, 50, 78, 106, 15, 65, -97, -38, 82, -5, -36, 76, 70, -26, 25, -117, 98, 11, 71, 97, -46, 59, 115, 103, 15, 30, 22, 54, -27, -82, -20, 120, 55, 61, -72, -8, -68, -97, 116, -108, -120, 1, -13, -80, 93, -25, 38, -82, -38, -16, -53, -92, -72, -108, 74, -50, 123, 60, -96, 76, -10, -24, 102, -25, -114, 113, -125, -31, -71, 89, -107, -111, -97, 106};
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
    msg.setTimeStamp(0.19210276017571437);
    msg.setSource(27169U);
    msg.setSourceEntity(106U);
    msg.setDestination(23834U);
    msg.setDestinationEntity(67U);
    msg.seq = 1144232965U;
    msg.destination.assign("LVRGXGZCFPULBPXZXRCCAJFYSELMDHXHMTTYBMXBYTEQEAESZBFLHHNNGERSGNIOIEIHWOAJH");
    msg.timeout = 35900U;
    const char tmp_msg_0[] = {-101, -1, 37, 55, 8, -71, 24, 90, -30, -69, 119, -107, 14, -31, 9, -109, -45, 103, 17, 23, -35, 93, 23, -64, -93, 63, 11, 34, 61, -61, 115, -103, -20, -110, 96, 37, -109, 37, -93, -105, 77, -95, -19, -128, -71, -41, 20, 96, -103, 45, 125, 73, 93, -115, 91, 104, -29, -112, 28, 5, -90};
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
    msg.setTimeStamp(0.8126518520211071);
    msg.setSource(7512U);
    msg.setSourceEntity(109U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(197U);
    msg.source.assign("KYUTWDHTWPOJDIZVUJBXOGQFQEFIVQEXUFCVJBDRVPOSMATXSUGWMKTEAJHDUXLFIPYWICXUMKSFLSRMPUZNVJHFZBLOYTTGZXKMGESFIYOIBTHNGDVAETUYWOOWPCQWYDENVRXAOZYANQLBCSCFKEXOGHAMLUSWULAIYKNPQMSGRIPEXJMRVTGZK");
    const char tmp_msg_0[] = {45, 31, -95, 9, -103, -120, 65, 118, 106, 50, -47, -17, -120, 119, -26, -35, -6, -74, -44, -97, 74, 18, -82, 54, 3, -30, -68, 99, 27, 1, 14, 5, 90, -101, 37, -71, -57, -54, -4, 4, -21, 112, 50, 26, 25, -17, 43, -110, 103, 102, -32, -41, -54, 82, -7, -87, 76, 81, -114, -32, 117, 77, -89, -12, -97, -65, 105, -2, -89, 59, -74, -16, -127, 94, -57, -76, -91, 97, -1, -101, 41, 77, 61, 38, -89, -52, 105, -98, -67, -81, -127, -29, 8, 62, -38, -16, 59, -7, -74, -119, -73, 104, -126, -24, -10, -88, -9, -100, 42, -2, -126, 36, -88, 121, -108, 18, -103, -74, 27, 101, 4, 6, -68, -124, -2, 79};
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
    msg.setTimeStamp(0.40334181527153756);
    msg.setSource(45952U);
    msg.setSourceEntity(167U);
    msg.setDestination(3098U);
    msg.setDestinationEntity(77U);
    msg.source.assign("KBFFGBZXVDQRHTELELQWRVIUZAXNLFWPD");
    const char tmp_msg_0[] = {-93, -43, -102, 85, 2, 49, 99, 4, 123, -58, 64, 87, 59, -102, 105, -92, -124, 34, 87, -57, 113, -80, -97, 2, -27, -125, 41, -95, 120, 97, 105, -88, 79, 6, -41, -89, -51, -94, 76, -50, 66, -8, 52, 20, 31, 68, 102, 93, -91, 110, 113, -96, 15, -57, -85, 58, 17, -46, 33, -115, 107, -90, 35, -31, -44, -124, -13, 104, 62, -14, 88, -100, 2, 42, -125, 98, 72, 111, -43, -4, -29, -84, -97, -60, 123, 4, 67, 37, 78, -18, -67, -110, 15, 88, 76, -38, 79, -110, -124, 9, 7, 69, 47, -24, -30, -60, 118, -3, 27, -17, 65, -82, 28, 79, 15, -10, 36, 33, 65, -58, -28, -36, -107, 6, 125, -73, -27, -89, 56, -98, -89, -70, -15, 67, -32, 41, -116, 34, 10, -78, -117, -126, 31, -18, -87, 109, -73, 36, 42, 97, -81, -4, 116, -42, -116, -68, 5, 113, -111, 49, -102, 116, -98, 5, -89, -16, 94, -120, -4, -46, 114, 69, -121, -116, 53, -66, 10, -106, -24, -60, -23, -24, 77, -13};
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
    msg.setTimeStamp(0.8073814758338247);
    msg.setSource(50964U);
    msg.setSourceEntity(124U);
    msg.setDestination(61283U);
    msg.setDestinationEntity(15U);
    msg.source.assign("TEKDGDPCLSJDPOFCBYYOKLISGGOWAVUJBIPRTLNWQZLUQJRSOMXVFZTOJXUAINEYWMYEUZHOAZRLJQMVKTZSRUUFYQMTCRWHHSWKFLEDANHZJOVFYCBZIFXQKIEBHGEBVBZXIGBRIGNCBHRTXHCAGAOJMDVIAMDLY");
    const char tmp_msg_0[] = {110, -36, -20, 15, 75, 65, 28, 29, 95, -11, 109, -80, 23, 82, 54, -80, -1, 116, -127, 50, 115, 103, 99, -56, 66, -21, 87, 88, -59, 109, -127, -118, -100, -59, 122, 37, 70, 54, 103, -38, 3, -96, 71, -9, 100, -54, 7, 79, -128, -55, 102, -99, -74, 13, -96, -74, 114, 29, 115, -93, -53, -94, 37, -117, 93, 102, 120, -30, -14, 38, -42};
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
    msg.setTimeStamp(0.5725484504797045);
    msg.setSource(26206U);
    msg.setSourceEntity(178U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(145U);
    msg.seq = 3340445699U;
    msg.state = 197U;
    msg.error.assign("MWAUNPOCBJQJKFBNAIYCWAQDNWCOUMRUFULKIZXVEHHWZVXMQGOKWUWPWQHGYJZTSMCADNFUWCJHFLRKIFLGCMEWPXAPJGVXZVSOHGSBGORIBEEVZXGRUCDUUSLTTTGSSVRMXTDIIQAPVGZRKIWAMBLQUMVLBPLFNK");

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
    msg.setTimeStamp(0.039713690322384254);
    msg.setSource(59628U);
    msg.setSourceEntity(163U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(51U);
    msg.seq = 3249788717U;
    msg.state = 237U;
    msg.error.assign("DVIFMXSNSMZCCFJWIJDQCGXRGTGVITNNDKNCRWPMLHBAERTOCWYZQFNKMJZCHLMVSPIKWOTFSQKLNSPWIEEETGGDIAORWLVUOPZGOAASXSCSLGKYUVPXUIECBWTUFBKIKGPZXOYXKIVAOZVHRWWSBGERDAOYOZLJTJUVHZOPCEXHQEKJNNLXUM");

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
    msg.setTimeStamp(0.9899690101988612);
    msg.setSource(40099U);
    msg.setSourceEntity(131U);
    msg.setDestination(19553U);
    msg.setDestinationEntity(114U);
    msg.seq = 607701695U;
    msg.state = 175U;
    msg.error.assign("BSPEEQVILXPRWJFMQRUCCHPCGZHSJCMSGUZYZDHVFKFJFMQDYSHFBKSQALQUBYYBUSQGLJJZDGOTQPOYMAOGPLALDTMFVLXWXDTZOIZUVTGAXKTLBNLIVBGVRNNBZSURHKKIXWPDOFNWCVGPVEJFDDPWBAMNSXKDUCEWMKRIOZRTXKPNOAUAEUZH");

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
    msg.setTimeStamp(0.0340868833343585);
    msg.setSource(36291U);
    msg.setSourceEntity(55U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("VIPHXJIDLMZIOFCPEDQAKHWJXURAANDORYBJRYGVBCEXHDSMBOSRTDKTYUNZKQUMEXNGBATCWSOVBGRAOTCAKZSCXFUKVVOLMJCZMFPMVNODAPGUKZZSBAPQNDYROYGEGDHRGAFMWPTZBXZIIPUMBHFHLQWUOGFTNHJQCYDLXIEIWNMYSQOSGWQWT");
    msg.text.assign("CPVCHHWMRUTEECNLJVKHNBPYZIFZXKOXUWMDUTGQYFROWSEORJZUCBJLPEVTOOAPIFVCRQPKGCSTPFXJB");

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
    msg.setTimeStamp(0.6349102061107329);
    msg.setSource(10765U);
    msg.setSourceEntity(210U);
    msg.setDestination(38028U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("RMHQWEQLORSUKBOJRIHNTBVBFCVQRTVLWIRMHPXNLHUEAVOBGPVIJTBKLYYPNKLRZFEDPXQCNNFMQVZXSVEYZLUWNJCSMWKZPOGMUMGOADPAPPXYSPCOIXGCOHBUFAD");
    msg.text.assign("BNLWVXVVHTDMZCIGZAXFCAGZGDWDZCPICIUEQDSDQHUZXQJEKPKSEGZOASPQXXHLRDAQQQDGXVKGUNAJYMNBOWYFLELCSHHJLBELIESJJSIN");

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
    msg.setTimeStamp(0.2455074623907615);
    msg.setSource(30919U);
    msg.setSourceEntity(230U);
    msg.setDestination(12182U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("GYWKHTNSAZZJYUVNDRKVSYH");
    msg.text.assign("IYJXYZLUQELTZIRIEOVKXARAPGJHWBLYHTRJDTCRPCQXNGPOTCSABIUCQQPMAAGBHVJXZBCCGNAQRDEUEUDRSYVKTPWQSWERPSDCKQWNPHKVSSXZHOFGYZIGMIBEORMCDBFPDWUKJSELKFVBYALEMSPHVVZLFUFAVNLCTBNJTHNJUDXMWTOXYOJFEANOIZKHTMJISKL");

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
    msg.setTimeStamp(0.38815938746868217);
    msg.setSource(41300U);
    msg.setSourceEntity(73U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("ESPCRFIGDSCLFMWKYFHZODKUVOGOHIVQULLCOGYRDMFXJBPBTRWTYHVVWHJNVNFIEXSITSMOQBTFYWXZPNGMGNMFUDHSPJRAJCGUXDCGCPQNHQMAYUAWWXATZXHANBCSOGMQOXPQEEIDILGZNLVT");
    msg.htime = 0.21752703092297487;
    msg.lat = 0.7089884195713215;
    msg.lon = 0.1895989290868061;
    const char tmp_msg_0[] = {20, -70, 46, -29, 69, -3, -39, 26, 113, 92, -55, -4, 14, 47, -50, 95, 37, 66, -29, 118, -73, -88, 89, -33, 10, -34, 98, 77, 0, 83, 68, 41, 50, 100, -77, -101, -64, -125, 69, 39, 45, -53, -107, -97, -7, -83, 52, -61, 91, 115, -121, 101, 105, 70, -16, 53, -100, 38, -71, -44, 120, -73, -16, -25, 98, 110, -116, 82, -39, -124, 62, -44, 47, -14, -102, 110, 8, -128, 56, 38, 77, 67, 116, -10, 64, -89, 30, 117, -113, 5, -114, -106, -122, 24, 0, -93, -109, -9, 37, -49, 120, 96, 51, 15, 66, -68, 100, 19, 57, 11, -90, -29, 77, -59, 85, -9, -58, 18, -4, 28, -99, 56, 7, -115, 75, -17, 101, -23, -84, 107, -11, 65, 36, 24, -54, 63, -120, -44, 97, -77, 41, 60, 75, 26, 55, 112, -98, 11, 108, 23, -90, -43, 39, -20, 87, 38, -103, 7, 77, -122, -44, -73, -15, -125, -120, -118, 65, 75, 103, -116, 76, -53, -34, 90, 46, 98, 67, 14, -97, -95, -87, 92, 65, 12, 36, 96, 108, 54, 78, -76, 22, -100, 109, 89, -121, -82, 89, -29, -75, 27, 75, -109, -7, 1, 14, 58, 13, 15, -121, 23, 89, -27, -14, 89, 85, 93, 21, -15, 20};
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
    msg.setTimeStamp(0.5896688381622521);
    msg.setSource(28112U);
    msg.setSourceEntity(23U);
    msg.setDestination(38326U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("WXVMERVYGMQHIBENUXKJFGYPAGLQXENSAVIOJPWZDDKKGCUTLHWUNXVDCMGQCCBBGUIRRORPBZTNSVKTSLOQFGZI");
    msg.htime = 0.6919617274645481;
    msg.lat = 0.08975074720507148;
    msg.lon = 0.6730842773278561;
    const char tmp_msg_0[] = {66, -71, 46, -76, 23, 122, -26, 42, -68, -12, -117, 118, -117, 23, 25, -22, -3, -9, -77, -26, 48, 110, 58, -92, 17, -13, 75, -90, -105, -34, 39, -79, -28, -41, -22, 85, 91, 49, -39, 59, 92, 96, 83, -47, 3, -95, 98, 25, -121, 119, -65, -8, 4, -27, -27, 2, 83, 1, -12, 22, 36, -58, -98, 51, -24, -31, -54, -20, 15, -52, 83, -76, -64, 43, -43, 1, -105, -87, 2, 62, 39, -21, -46, -92, 91, -109, 126, 59, -63, -124, -43, -1, -12, -4, 80, -43, 100, -1, 55, 55, 1, -91, -91, -86, 15, -73, 103, -102, 78, -29, 117, 2, 52, -52, -72, 32, -51, 116, 38, 14, 50, -33, 42, 31, -79, 75, -5, 42, -115, 22, -29, 14, 12, 102, 98, 12, 82, 11, -55, 93, -10, -49, 118, 88, 126, -67, 111, 13, -34, -126, 29, 7, 52, -38, -10, -27, -64, -100, 89, 114, 106, -100, -1, -25, 61, -13, -31, -85, 0, 93, -44, 91, 64, -21, -102, -93, 33, 52, -94, 100, -41, -55, -11, 2, -128, 94, -44, 27, 126, 78, 30, -43, -116};
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
    msg.setTimeStamp(0.613845917654077);
    msg.setSource(47138U);
    msg.setSourceEntity(160U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("BTBHJSCNVGCCBRACNWLRLOSJDNIZIYZSYLEQTUMGVBFUDMIMNDJSDRGLQTHVWRXRAYRIXWHQKDEWYVFXWPECHJKELVPDIPLJYPIIJMJPNOUWUTOSINQHGAOQDTEFOKTVNPGRUQLNQBLGGUZOEOYELAPFYBK");
    msg.htime = 0.827657982587405;
    msg.lat = 0.21129913189176863;
    msg.lon = 0.6168458894709774;
    const char tmp_msg_0[] = {-126, -30, -71, 15, 15, 49, -60, -118, 1, -62, -57, 113, 33, 43, 21, -55, 57, -59, 12, 118, 94, -30, 0, -51, -111, 30, -75, 13, 63, -69, -21, 51, -119, 53, 10, 49, 94, -15, -33, 107, -11, -127, 22, -68, 2, 106, -15, -100, 40, -59, -65, -120, -88, 82, -93, -52, 116, -55, -54, -26, 102, 111, 41, 37, -3, 18, -84, -47, 28, 89, -47, -56, -2, -45, 32, 71, 57, -7, -26, 40, 7, 108, -25, 97, -29, -36, -46, 11, -113, 95, 14, -46, 36, -66, -58, -67, 111, -66, -42, -59, 29, 31, -60, 77, -121, -112, 102, 122, -76, -13, 35, -96, 3, -5, 35, 79, 74, 91, -77, -85, -58, -75, -111, 62, 44, -75, 62, -50, 76, 113, 27, -118, 105, -86, 17, -26, 8, -4, -68, 114, -34, -92, -72, -102, 112, -36, -36, 78, 24, 103, -91, -70, 105, -31, -29, 79, -14, -15, 83, 21, 108, 63, 22, -93, 103, 64, 118, 55, 93, -18, -70, -122, 2, 33, -88, 26, -70, -11, 76, -110, 17, 121, 31, 71, -92, 85, 77, -75, -8, 92, -117, -8, -26, 69, -49, -56, -91, 75, -69, -4, 44, -18, 9, 44, 103, 122, 61, 31, -107, -36, -61, 31, 18, -123, 73, 96, 98, 26, 64, -37, -1, 63, -6, 62, -71, 73, 17, 126, 92, 92, 35, 99};
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
    msg.setTimeStamp(0.6801967347995733);
    msg.setSource(64991U);
    msg.setSourceEntity(148U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(229U);
    msg.req_id = 31123U;
    msg.ttl = 47336U;
    msg.destination.assign("IZWUAWBTOXGDRDHOBNFMRBLEPDFIMELJXSXAWBPXUETZXD");
    const char tmp_msg_0[] = {122, 6, 48, -56, 49, -74, 0, 89, -73, -43, -103, -74, 82, 56, -5, 18, 3, -76, 37, 123, 92, 84, -65, 84, -93, -6, -17, -5, 37, -9, 64, -57, -119, 116, -91, 10, 85, 48, 91, 50, 35, -59, 16, 116, 40, -108, -53, 125, 102, -74, -118, -29, -35, -60, -120, 12, -16, -69, 30, -20, -106, 106, -68, -68, 117, 68, -126, 118, 41, -122, 56, 77, -19, 61, -23, 54, 69, -69, -29, -2, 33, 34, -110, 20, -57, -12, -99, -84, -79, 21, 39, 4, 6, 82, 1, -80, -11, 61, 107, -84, 34, -119, -28, 64, -60, 116, -83, -37, -74, -3, 0, -70};
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
    msg.setTimeStamp(0.6692462014726519);
    msg.setSource(4991U);
    msg.setSourceEntity(94U);
    msg.setDestination(51768U);
    msg.setDestinationEntity(111U);
    msg.req_id = 39505U;
    msg.ttl = 37297U;
    msg.destination.assign("EJUTEALHXOHZRLLSXYRNFGZVLSJBVTIPQGPRQFOFWMTEYWPFCTVEERUHV");
    const char tmp_msg_0[] = {-113, 33, -101, 119, -57, 45, 70, -125, -116, -39, 20, 109, 76, 12, 65, 108, -100, -100, 44, 2, 53, -29, 121, 119, -126, -18, 112, -114, 64, 52, -38, 94, 27, 52, -40, 33, 34, -4, 105, -85, -56, 20, 64, 36, -81, -58, 105, -94, 79, -26, -71, 70, -122, -107, -7, -81, 72, 38, -126, 118, -66, 2, 120, -4, -86, -60, 126, 92, 75, -90, -26, -67, -64, 29, -20, -34, -30, 8, -123, -31, -5, -76, 121, -47, -56, -106, 5, -74, -83, 25, -56, 37, -122, -101, -41, -76, 113, 113, -3, 113, 19, 58, 51, 108, 93, 118, -51, 3, -4, 104, -25, -92, 66, 9, -70, -40, 32, -74, -16, -77, -73, -11, -9, 35, -63, 11, -97, 14, 35, 37, 59, -62, -103, 12, -121, 88, -22, -122, -124, 76, -51, -90, 122, -41, -84, 10, -53, 123, 119, 45, 2, -122, 9, -125, 83, -32, -56, 24, -77, -82, 5, -10, 39, 117, 87, 69, 91, 91, -23, 111, -88, -103, 76, 26, 37, 48, -63, 40, 41, 44, 86, -90, -74, 68};
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
    msg.setTimeStamp(0.2633015428316603);
    msg.setSource(34638U);
    msg.setSourceEntity(186U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(67U);
    msg.req_id = 53153U;
    msg.ttl = 34731U;
    msg.destination.assign("AKKVWISOPYFQVXICDHVCFGPMGMZQFGLDMYPXRFCGJRQOVNKPJQZGEYGASKTLKDNCQRXJCAUXFOUAIFKELNSPFBSSSIJXDYVPRYWVOLNWZINZERRLKAIQWHHJJTMQDCBFJMBGOHVZSSAUKMBPECDGJIWZVPLTENYUTECKLUTOYWTCUJCEOZMPQHMLFD");
    const char tmp_msg_0[] = {-102, -124, -120, -110, -19, -11, -70, 46, -71, 64, -32, 79, 112, 101, -46, 3, 103, 21, 33, -119, 125, -103, -85, 95, -123, 105, 110, -104, 2, -104, 94, 59, 125, 119, -105, 31, 86, -8, 84, 57, 26, -128, 38, 66, 29, 14, -87, 11, 91, -7, -45, -38, -6, 30, -124, 65, -69, -104, 77, -19, 42, -6, 4, 113, -46, -74, -80, -4};
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
    msg.setTimeStamp(0.37456378522249967);
    msg.setSource(44247U);
    msg.setSourceEntity(130U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(151U);
    msg.req_id = 24002U;
    msg.status = 117U;
    msg.text.assign("MSHXBFSILSCWYHHUVGOANDRPWFQCNLPPTXWZDMQZGWUNXTIRRDFCUHNHAHBJYIAGZYGVQFNAZQFSMLIVTYFJOHXDKKBNDZKGLIWLTOZKBTEQCCQWBDEIJVKSRJQJLCSUAX");

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
    msg.setTimeStamp(0.7922715858996838);
    msg.setSource(63593U);
    msg.setSourceEntity(79U);
    msg.setDestination(3109U);
    msg.setDestinationEntity(59U);
    msg.req_id = 10383U;
    msg.status = 230U;
    msg.text.assign("ZIHGHSZMOOWEUKJEGWKIMFBPMNRQAPYHOVKFXVCXYMHSLKJELKJDPVAOHPUYBHKIA");

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
    msg.setTimeStamp(0.3230553762399143);
    msg.setSource(11562U);
    msg.setSourceEntity(146U);
    msg.setDestination(55U);
    msg.setDestinationEntity(136U);
    msg.req_id = 53268U;
    msg.status = 37U;
    msg.text.assign("ZYSCDFWJSVEKIRVXXBLRHARKMWNWMPYAHKWPYB");

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
    msg.setTimeStamp(0.7200646312093654);
    msg.setSource(903U);
    msg.setSourceEntity(31U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("FZWQMSUXLETBPZJCYYEQFNDJUACXJKZMUEFONXQHVDTTKYUNVLSABFZCQLGLYYWAAYRSYMVQDANGMOPAEDHLVITMZIUXURHEVRIFZHWKVKUNAXOPXOYLFARBQSEWXWCOENKMCWSQPNNHPSGOZHLGJBRXDBWWPVMKEECHGFXSNTITKMKNGIBIGRQCOP");
    msg.links = 934664736U;

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
    msg.setTimeStamp(0.418110929200334);
    msg.setSource(37327U);
    msg.setSourceEntity(115U);
    msg.setDestination(3432U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("EMVFRGMOLWIYGDHPBPFCPWQIRIAHRVTYXZBAAHGNYKD");
    msg.links = 697700549U;

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
    msg.setTimeStamp(0.02184045739208551);
    msg.setSource(2387U);
    msg.setSourceEntity(150U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("VDLYKYFFHSYRAQHQRMWHDBTLRDEZNWJXFCCWMBLGUUBCPEGYENSPJFIQVPAUCASLDEYCVXZUITHRHEAPMCINIJMQJFNRGCPAPAUJSIXKVLDOXQCRPLHMYKD");
    msg.links = 3329901875U;

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
    msg.setTimeStamp(0.9410538991384648);
    msg.setSource(50867U);
    msg.setSourceEntity(220U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(23U);
    msg.groupname.assign("FJRAONWXNABFQJFJXWUBQASETXFWHMWEMYHNPPKBTIOOBXCUI");
    msg.action = 244U;
    msg.grouplist.assign("UNWHSEGCMQJTCEIOCJBXGADQGKKQDRYHOCXKDLVAGVLGZBOIAEJLYSXREZPDSELFTILFWGBBYMNBBURUFHUAXNRJTHLEITVAFROHKKKUYVBWPMYEJQHOZPWUWNEIMJLMSJUWVIFPRNFPPRKYLPRRXQEQFRVZVUIOVDIQQMHATDPJBYWNQVUYXHNYJUGXSXZITKNWION");

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
    msg.setTimeStamp(0.6500309452100678);
    msg.setSource(48338U);
    msg.setSourceEntity(78U);
    msg.setDestination(28834U);
    msg.setDestinationEntity(142U);
    msg.groupname.assign("JFIHRZEYNVHQEMQGYIZZLPUYVRSAAGUKCBKJLLBKEYYDRJGBBOLEFLRWZTSUWOVQNTXLRQZMMSQENBLOHFAHSKACCERPZNAGITULBXODJPHDNKOGUBUQKTJJZPPYAXXVEPFQZXIKYTIYNXWGXKMDSWNOYWDGDWMZNXEIDRTGJSWFDMCDXMOVMETXHCQHRFKPDABNV");
    msg.action = 12U;
    msg.grouplist.assign("KCBZSINSRPBLRAFASUPVNTTGZFKREXAFYNZFAENWHWNGILYQJYYM");

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
    msg.setTimeStamp(0.8762939346958579);
    msg.setSource(42547U);
    msg.setSourceEntity(155U);
    msg.setDestination(36599U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("JMJZSNLKMDGRNFIVBTIEQVRTXHLPDWIBYGPIDCGHJZZWXXVRKGFPNJAOZYMBBHWCAGBSBNAGUHTBCWLKTZVJIEJDMIOTNOCSHKDVZEAEHGKRNOFPGSENESVWTOOBJAAYFJXRXDULLQQDISQPMQSCKKHATJGXXAMVDEQIDREXVSNWTLMPYWOPKQCZLHVYFAUNQULUPUQMZDYKYOYIIWHSFZRMXCWK");
    msg.action = 54U;
    msg.grouplist.assign("BHIMRVAWARNWBHAWJYLRYOMOYDNVLGFPSNRQSIJCBDDSCUBDMKCXFBZLDWZZFOKMXGLRXAXOCNYEXQPWKGYVHKTQNIBMCUHZEJVORXMAVNTLFFOVCTIUOICLUZGSTLUBJLQWMPYPZXHPADEJJINWAPVCUYSRAYSMOVHAJRGRNBSINZPEKKHFERNJXGWXAKHQGOJMWETUTHVZWTGZSDPOEQBQUBYEFKQCSSFUQCETYFMPFHIPTLTQ");

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
    msg.setTimeStamp(0.8374457148883028);
    msg.setSource(15920U);
    msg.setSourceEntity(52U);
    msg.setDestination(13330U);
    msg.setDestinationEntity(213U);
    msg.id = 179U;
    msg.range = 0.14161945872554393;

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
    msg.setTimeStamp(0.8931861982099867);
    msg.setSource(48756U);
    msg.setSourceEntity(96U);
    msg.setDestination(5573U);
    msg.setDestinationEntity(21U);
    msg.id = 200U;
    msg.range = 0.9468569308696517;

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
    msg.setTimeStamp(0.010738395288355518);
    msg.setSource(26139U);
    msg.setSourceEntity(253U);
    msg.setDestination(23897U);
    msg.setDestinationEntity(98U);
    msg.id = 38U;
    msg.range = 0.2776608544484611;

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
    msg.setTimeStamp(0.6287450240463974);
    msg.setSource(57945U);
    msg.setSourceEntity(21U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(154U);
    msg.tx = 183U;
    msg.channel = 230U;
    msg.timer = 34778U;

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
    msg.setTimeStamp(0.9976086427660642);
    msg.setSource(14700U);
    msg.setSourceEntity(71U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(86U);
    msg.tx = 94U;
    msg.channel = 125U;
    msg.timer = 11719U;

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
    msg.setTimeStamp(0.9190971213365663);
    msg.setSource(61922U);
    msg.setSourceEntity(213U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(86U);
    msg.tx = 115U;
    msg.channel = 161U;
    msg.timer = 6719U;

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
    msg.setTimeStamp(0.4578512725011312);
    msg.setSource(51282U);
    msg.setSourceEntity(67U);
    msg.setDestination(26562U);
    msg.setDestinationEntity(41U);
    msg.beacon.assign("BWCUMSZORWCTRIYEFERPNNUFXFQIGZBFGZAYOVLKAPNMDCJAZYXHGKQDTGLLSPURHKOGAASPFTQMIFPYTTFIMUBLVMUHPPJHIWECSYNOLW");
    msg.lat = 0.11789460515760242;
    msg.lon = 0.16658894468172225;
    msg.depth = 0.7161483232273186;
    msg.query_channel = 76U;
    msg.reply_channel = 131U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.5677698478316848);
    msg.setSource(14602U);
    msg.setSourceEntity(202U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("OFDPOQIVTLFJCNYQFRDDMULWESPXOVYRNJSHSPURSWWUXAOMONUYNNKSHBHYKBYXGARNGLYHSVGZMXZPZNBCJRLPKAESPCVTMKWIIUGWWBCTGXDWCJIFZNRHVTSZPFYTRWTUAVOVEWTPDQWBACAOAJZIBYMBTCRASTGXILFFVQTJEXDJABFKHJDURQQHJDEMZKSXJFIQXEZCGQMK");
    msg.lat = 0.68116878221848;
    msg.lon = 0.00027856833179362717;
    msg.depth = 0.4898682952795411;
    msg.query_channel = 125U;
    msg.reply_channel = 140U;
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
    msg.setTimeStamp(0.9499560403887379);
    msg.setSource(6595U);
    msg.setSourceEntity(235U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("WYONAEJDNVTCWTERQPEIXSXSMMKGYKRKOBKTVRYHZPYOEVZHSEUGOBPYMRZPJOTCRRB");
    msg.lat = 0.3107027046644901;
    msg.lon = 0.7400626398922466;
    msg.depth = 0.6276055347210435;
    msg.query_channel = 140U;
    msg.reply_channel = 15U;
    msg.transponder_delay = 78U;

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
    msg.setTimeStamp(0.8609700482564416);
    msg.setSource(9437U);
    msg.setSourceEntity(73U);
    msg.setDestination(40138U);
    msg.setDestinationEntity(150U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.6015251471115709);
    msg.setSource(34266U);
    msg.setSourceEntity(6U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(226U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.5798964079977149);
    msg.setSource(59337U);
    msg.setSourceEntity(156U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(205U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.6322231711004206);
    msg.setSource(9034U);
    msg.setSourceEntity(130U);
    msg.setDestination(7292U);
    msg.setDestinationEntity(206U);
    msg.address = 142U;

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
    msg.setTimeStamp(0.08884118799041907);
    msg.setSource(20877U);
    msg.setSourceEntity(94U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(103U);
    msg.address = 74U;

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
    msg.setTimeStamp(0.7670180561746597);
    msg.setSource(32274U);
    msg.setSourceEntity(7U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(145U);
    msg.address = 93U;

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
    msg.setTimeStamp(0.44901329402452483);
    msg.setSource(17116U);
    msg.setSourceEntity(155U);
    msg.setDestination(64761U);
    msg.setDestinationEntity(188U);
    msg.address = 104U;
    msg.status = 6U;
    msg.range = 0.4630166404254894;

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
    msg.setTimeStamp(0.4454671032410358);
    msg.setSource(64058U);
    msg.setSourceEntity(181U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(19U);
    msg.address = 21U;
    msg.status = 230U;
    msg.range = 0.7060140463880457;

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
    msg.setTimeStamp(0.3828943668291259);
    msg.setSource(32926U);
    msg.setSourceEntity(118U);
    msg.setDestination(16721U);
    msg.setDestinationEntity(36U);
    msg.address = 79U;
    msg.status = 163U;
    msg.range = 0.467662635173699;

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
    msg.setTimeStamp(0.30895561438193186);
    msg.setSource(39272U);
    msg.setSourceEntity(65U);
    msg.setDestination(10974U);
    msg.setDestinationEntity(22U);
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 217U;
    tmp_msg_0.range = 0.9050200020397308;
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
    msg.setTimeStamp(0.7061931031825639);
    msg.setSource(49961U);
    msg.setSourceEntity(78U);
    msg.setDestination(41022U);
    msg.setDestinationEntity(203U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 6U;
    tmp_msg_0.goal_id.assign("GLXMEBQBVAYRVUOVTDBJXSFPCCISUTLQCKYZNNDDMTWBFSQLAWAREOJCDDXDFSLOJRKWUBJUJHDIBQVHYPOTVBWODTUXNBCAOEUNHEFGAWJDIMOYHOJXGLEZZMXJBGYYLHUKRGEUMAHVGKFVRGJCISKTRQEKWHILEMMYZMHXLCFKLDIFIZNNQGGINPPAPWQTWSQRBKECMSOQNSWE");
    tmp_msg_0.goal_xml.assign("ITWAVOVPDEKJOOJHXPMCQYZDJWVFLZSECAHHNCSUKLRXPWJTPCLHSCRHWDEUXSWSUYFMMSSAYQHTBAAZOKPZDHDZ");
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
    msg.setTimeStamp(0.6505479058460735);
    msg.setSource(40839U);
    msg.setSourceEntity(182U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(33U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 21618U;
    tmp_msg_0.custom.assign("GWZGBSICYQEFDJNGDYQMNBTDGHLKFLNT");
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
    msg.setTimeStamp(0.3233657182665475);
    msg.setSource(6492U);
    msg.setSourceEntity(7U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(63U);
    msg.enable = 113U;

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
    msg.setTimeStamp(0.6170113525765244);
    msg.setSource(19915U);
    msg.setSourceEntity(97U);
    msg.setDestination(10905U);
    msg.setDestinationEntity(204U);
    msg.enable = 186U;

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
    msg.setTimeStamp(0.9735882673907041);
    msg.setSource(35999U);
    msg.setSourceEntity(70U);
    msg.setDestination(46904U);
    msg.setDestinationEntity(249U);
    msg.enable = 10U;

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
    msg.setTimeStamp(0.7591919421548993);
    msg.setSource(9949U);
    msg.setSourceEntity(199U);
    msg.setDestination(3138U);
    msg.setDestinationEntity(141U);
    msg.summary = 121U;
    msg.level = 172U;

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
    msg.setTimeStamp(0.35786889748034023);
    msg.setSource(15276U);
    msg.setSourceEntity(56U);
    msg.setDestination(12862U);
    msg.setDestinationEntity(216U);
    msg.summary = 93U;
    msg.level = 185U;

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
    msg.setTimeStamp(0.5377635168077396);
    msg.setSource(21376U);
    msg.setSourceEntity(201U);
    msg.setDestination(58954U);
    msg.setDestinationEntity(204U);
    msg.summary = 106U;
    msg.level = 250U;

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
    msg.setTimeStamp(0.4899700742070905);
    msg.setSource(27200U);
    msg.setSourceEntity(146U);
    msg.setDestination(50885U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.8241287559375022);
    msg.setSource(5101U);
    msg.setSourceEntity(57U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8680065812415728);
    msg.setSource(8165U);
    msg.setSourceEntity(230U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.694101230672292);
    msg.setSource(46440U);
    msg.setSourceEntity(65U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.7612031816604007);
    msg.setSource(1212U);
    msg.setSourceEntity(89U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.9382588574914804);
    msg.setSource(41485U);
    msg.setSourceEntity(248U);
    msg.setDestination(11629U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5145843244887667);
    msg.setSource(19990U);
    msg.setSourceEntity(184U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(116U);
    msg.op = 60U;
    msg.system.assign("TZPZNXUKSJVZRBJOIZLMHBLCUTXYIWVFDMJOIGNOHAFJQDMSCMVXQDPNEWSMHKYXVAMBVLLZOYLWTGQOWKDAUGSYJUVDSFMTNEXBTLNYMBQBSGEIKOLQXUNCEWPRXYFQZDNKQIPXBGFRPALYZBOVVWTYGFWSRZTIVEQCRQPOEAPMFKGBWEJKTAUOPGUIAIELAJPYI");
    msg.range = 0.3227771953002214;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("JTSXYXCTNZWDEEMXUHQBUPCCQJTIVBWDOCTKXFYDAHYGGSCJMEAKFQKAKKENJTZVDWGNJZIGBTMPUOZYODGBXWXVMCRTPRGIIQUWPZMQFPPJHYVVVNNPJDSTJFOSBIHQBXAOOJVEAYRREDQOVDUEOXKQCLLHPQFSGYHCLZYLFZHSNNQGPXLMMBHHOSKLYKYOTRRATWSXUJBIMNFGNSKEHVARVUCNIRZWCBMDIWRFEFABFSAEWUMWR");
    tmp_msg_0.op = 168U;
    tmp_msg_0.sched_time = 0.7320698091033048;
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
    msg.setTimeStamp(0.6316698731570904);
    msg.setSource(41197U);
    msg.setSourceEntity(184U);
    msg.setDestination(24563U);
    msg.setDestinationEntity(45U);
    msg.op = 11U;
    msg.system.assign("YOLIQUPVMHEEMKTYOIJYMPRNKKGONYXGYZSBDPCWRLYWJCLMNGELNSAYWAVGEGKFVK");
    msg.range = 0.5238972149780557;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.4304165356506561);
    msg.setSource(56023U);
    msg.setSourceEntity(160U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(36U);
    msg.op = 17U;
    msg.system.assign("NNMSLYNKAYGFUWWWLDKWQYJBVPOKJUGQOLQZTO");
    msg.range = 0.7502220687971146;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 223U;
    tmp_msg_0.snapshot.assign("IBEJJPGVDZIOARUTLUPGZXKTEMIASVHDVJJZZKKKCTEFOODHHBJVPRLJ");
    IMC::SmsTx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 3679594789U;
    tmp_tmp_msg_0_0.destination.assign("YQYLGMFYIMEWZINXYNQSFTDLFAVPHOTJFFRKKTLSQGGEKUHUCKUJRLVEDLQSJFXBJSHYROAFIPTVSHPCWYLDMSSUUBUHDHNOACOIUVRDURPCLNPSITXDPWSVFJHCOTCMMDDXCFBAHKEARRAOBVXWDHGKIAQGNGBYQKAGZNZZXPVUYOPIMIWWRCBAGVOHNEMIOEJEZKVZVTRTLOZI");
    tmp_tmp_msg_0_0.timeout = 6434U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {6, 4, 109, -113, -20, 19, -8, 77, -109, 106, -127, -30, 40, 67, 109, -8, 123, 2, 114, 60, 62, 1, 110, -8, -45, 119, -120, -86, -31, -97, -114, 102, 47, -1, 99, 53, 48, 66, -21, -75, -8, -85, -40, 32, -10, 57, -81, 94, -53, 117, -20, 2, 97, 63, -103, 5, -84, 36, -51, 64, -11, -26, 66, -103, -90, -22, -126, 43, 102, -72, -23, -51, 4, 125, 13, 0, -77, -123, 3, -94, 31, 85, 8, 70, 20, -83, 102, -83, 10, 29, 78, 124, 116, 31, -102, 125, 98, 60, -73, -67, -60, 31, 59, 84, -62, 12, -46, -98, -31, -6, 106, 0, 10, -85, 96, 116, -63, -36, 71, -86, -86, 94, 72, 35, -118, -59, -30, -126, 118, -66, 14, -40, 12, 22, 92, -103, -32, -36, 93, 28, -78, 23, 65, 38, 73, -62, -43, 98, 21, -116, -104, -63, -90, -73, 82, -33, -4, 1, 85, 45, -29, 50, -63, -127, -80, 81, -52, -84, -86, -76, 12, -72, 49, -101, -42, 38, -77, 117, -32, -74, -95, 15, -119, -4, 99, 14, 59, 88, 7, -91, -84, 87, 77, -21, 2, 85, -86, -100, -10, 53, 40, 65, 91, -2, 99, -107, 12, -104, 22, 19, -29, 81, -6, 47, 81, 50, 14, -54, -94, -65, 61, 18, -66, -70, -65, 67, 55, -54, 123, -112, 82, -56, 111, 23, -109, 16, -35, -79, 78, -48, -116, -90, 102, -120, -74, -31, 92, 52, 83, 124, -50, -28};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7910139941275044);
    msg.setSource(4270U);
    msg.setSourceEntity(65U);
    msg.setDestination(6919U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.5959354344420714);
    msg.setSource(2817U);
    msg.setSourceEntity(155U);
    msg.setDestination(53012U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9386011265582732);
    msg.setSource(42495U);
    msg.setSourceEntity(174U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.050075823612056314);
    msg.setSource(63290U);
    msg.setSourceEntity(34U);
    msg.setDestination(35476U);
    msg.setDestinationEntity(44U);
    msg.list.assign("TMZUHAMYKHLHBQWCKIAXPATWRBTZZVJJCYSGDOTJUVXQRKFMX");

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
    msg.setTimeStamp(0.2812987417039299);
    msg.setSource(35533U);
    msg.setSourceEntity(177U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(163U);
    msg.list.assign("WJVELBNXKWQPPKGBVVQLFEFXOEEMGKAXYPZMMBIXSPFVMTQUZXWBSDUKCLQHNVDGINTGAJNWDJJZUGNXQCLKLLJPBVBKJSOIBCPIOKLHEUHYAGUFTZPKYXZCFELGARGNBNYMOEJRQTIYANMJYMANOWXOURTDHDIOOQUPTHZFZRQEUHPWHLIFOYRHYSACWCGOQZFYADPRD");

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
    msg.setTimeStamp(0.5923633505081976);
    msg.setSource(56106U);
    msg.setSourceEntity(147U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(246U);
    msg.list.assign("URSDWHUZAVKDKKHDITSWXOUFGPVMOVKZZPZZUSJPSBPOAQDNXLXESCXYCIYBRQXTVMEGMVEDTZWHVJTJCGKJFNWWLRQOFFCHIEFRTLYPBHMEIAUVANSFBJROXCEEBRQTSCPQIMQXNYQCPAFTCGHLAIYKAFBFMYJDABHVKYSVMZGRPRTJWJUELXWSCIHOVIMGNUEGLCZADGFOJNLKRDOGITNBWWQYLGXKLHSUYKODUTYWQBQXIRNMDAZJBEPHN");

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
    msg.setTimeStamp(0.05573810246100419);
    msg.setSource(5773U);
    msg.setSourceEntity(191U);
    msg.setDestination(35120U);
    msg.setDestinationEntity(240U);
    msg.value = -2665;

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
    msg.setTimeStamp(0.8127090644640748);
    msg.setSource(42055U);
    msg.setSourceEntity(81U);
    msg.setDestination(38047U);
    msg.setDestinationEntity(138U);
    msg.value = -7294;

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
    msg.setTimeStamp(0.5628067485009036);
    msg.setSource(63661U);
    msg.setSourceEntity(176U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(105U);
    msg.value = -23649;

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
    msg.setTimeStamp(0.4202016265669313);
    msg.setSource(17264U);
    msg.setSourceEntity(254U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6058899997915436;

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
    msg.setTimeStamp(0.4040183761503331);
    msg.setSource(60194U);
    msg.setSourceEntity(37U);
    msg.setDestination(16223U);
    msg.setDestinationEntity(88U);
    msg.value = 0.05252096954942487;

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
    msg.setTimeStamp(0.8878984330534077);
    msg.setSource(58456U);
    msg.setSourceEntity(198U);
    msg.setDestination(29503U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9492919186467594;

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
    msg.setTimeStamp(0.14829498180943834);
    msg.setSource(15310U);
    msg.setSourceEntity(137U);
    msg.setDestination(15940U);
    msg.setDestinationEntity(39U);
    msg.value = 0.5894159943328109;

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
    msg.setTimeStamp(0.2507609140621101);
    msg.setSource(61560U);
    msg.setSourceEntity(96U);
    msg.setDestination(34510U);
    msg.setDestinationEntity(178U);
    msg.value = 0.28863124796168715;

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
    msg.setTimeStamp(0.3624031963261193);
    msg.setSource(27697U);
    msg.setSourceEntity(163U);
    msg.setDestination(12960U);
    msg.setDestinationEntity(157U);
    msg.value = 0.37045129765020557;

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
    msg.setTimeStamp(0.11144913375616528);
    msg.setSource(29917U);
    msg.setSourceEntity(215U);
    msg.setDestination(56045U);
    msg.setDestinationEntity(127U);
    msg.validity = 60318U;
    msg.type = 5U;
    msg.utc_year = 48719U;
    msg.utc_month = 51U;
    msg.utc_day = 166U;
    msg.utc_time = 0.6172058547604148;
    msg.lat = 0.9242241428654621;
    msg.lon = 0.29448504012208343;
    msg.height = 0.3773092538848234;
    msg.satellites = 200U;
    msg.cog = 0.6002882216070811;
    msg.sog = 0.9576203726615219;
    msg.hdop = 0.9145449599704619;
    msg.vdop = 0.27633305534360164;
    msg.hacc = 0.4876514682275167;
    msg.vacc = 0.13018524896657058;

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
    msg.setTimeStamp(0.8524470220470503);
    msg.setSource(54090U);
    msg.setSourceEntity(236U);
    msg.setDestination(1907U);
    msg.setDestinationEntity(229U);
    msg.validity = 5394U;
    msg.type = 6U;
    msg.utc_year = 33003U;
    msg.utc_month = 188U;
    msg.utc_day = 72U;
    msg.utc_time = 0.5980502031683166;
    msg.lat = 0.3679288246195006;
    msg.lon = 0.08992741572857155;
    msg.height = 0.299606852293237;
    msg.satellites = 110U;
    msg.cog = 0.4654913906889748;
    msg.sog = 0.746387770722539;
    msg.hdop = 0.8086370569917856;
    msg.vdop = 0.4477748465804873;
    msg.hacc = 0.34840757400827627;
    msg.vacc = 0.8082588925355754;

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
    msg.setTimeStamp(0.6939232211953896);
    msg.setSource(55180U);
    msg.setSourceEntity(172U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(166U);
    msg.validity = 34683U;
    msg.type = 220U;
    msg.utc_year = 32541U;
    msg.utc_month = 1U;
    msg.utc_day = 59U;
    msg.utc_time = 0.12454126172574242;
    msg.lat = 0.3714720674682678;
    msg.lon = 0.41940830900025494;
    msg.height = 0.5890146506610427;
    msg.satellites = 23U;
    msg.cog = 0.938086070775885;
    msg.sog = 0.1131142248401954;
    msg.hdop = 0.5849159669741589;
    msg.vdop = 0.2646502448402559;
    msg.hacc = 0.9994981149292532;
    msg.vacc = 0.7435605897350492;

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
    msg.setTimeStamp(0.5902780486373355);
    msg.setSource(35896U);
    msg.setSourceEntity(84U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(156U);
    msg.time = 0.23853019145114562;
    msg.phi = 0.33600491165079316;
    msg.theta = 0.5677099372184815;
    msg.psi = 0.5623534735688301;
    msg.psi_magnetic = 0.4455769198203303;

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
    msg.setTimeStamp(0.018510722291719905);
    msg.setSource(33106U);
    msg.setSourceEntity(242U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(175U);
    msg.time = 0.6408428805996703;
    msg.phi = 0.7582057351107968;
    msg.theta = 0.004096064787941112;
    msg.psi = 0.06459479876898322;
    msg.psi_magnetic = 0.4433626342900955;

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
    msg.setTimeStamp(0.759123594473755);
    msg.setSource(4457U);
    msg.setSourceEntity(183U);
    msg.setDestination(34038U);
    msg.setDestinationEntity(199U);
    msg.time = 0.15045058637069098;
    msg.phi = 0.19188207557791803;
    msg.theta = 0.6516936610803065;
    msg.psi = 0.8923069415712106;
    msg.psi_magnetic = 0.3875619011708763;

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
    msg.setTimeStamp(0.4922619563165823);
    msg.setSource(58828U);
    msg.setSourceEntity(55U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(103U);
    msg.time = 0.7618434955649225;
    msg.x = 0.08925560438722724;
    msg.y = 0.48716180283493116;
    msg.z = 0.7663219826206364;
    msg.timestep = 0.385069050695935;

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
    msg.setTimeStamp(0.3420448391463886);
    msg.setSource(11555U);
    msg.setSourceEntity(236U);
    msg.setDestination(32191U);
    msg.setDestinationEntity(17U);
    msg.time = 0.39192057373390543;
    msg.x = 0.2597968018672082;
    msg.y = 0.3137988568389286;
    msg.z = 0.959406772266757;
    msg.timestep = 0.7704668807419808;

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
    msg.setTimeStamp(0.11321385940405448);
    msg.setSource(62165U);
    msg.setSourceEntity(1U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(141U);
    msg.time = 0.822419164230405;
    msg.x = 0.9155652156596313;
    msg.y = 0.19795656547087892;
    msg.z = 0.4539022048130664;
    msg.timestep = 0.5063966379666974;

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
    msg.setTimeStamp(0.19446919895514703);
    msg.setSource(22750U);
    msg.setSourceEntity(163U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(243U);
    msg.time = 0.5815775409164539;
    msg.x = 0.10715785114256127;
    msg.y = 0.625810604749127;
    msg.z = 0.6602123849550815;

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
    msg.setTimeStamp(0.7060323162917266);
    msg.setSource(35226U);
    msg.setSourceEntity(27U);
    msg.setDestination(59139U);
    msg.setDestinationEntity(96U);
    msg.time = 0.28849316720556395;
    msg.x = 0.025779991183899398;
    msg.y = 0.7054215593169767;
    msg.z = 0.7082795153741762;

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
    msg.setTimeStamp(0.9840195547592084);
    msg.setSource(44606U);
    msg.setSourceEntity(235U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(107U);
    msg.time = 0.9025797520972216;
    msg.x = 0.29976632703774797;
    msg.y = 0.14955290974096935;
    msg.z = 0.13746683106886548;

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
    msg.setTimeStamp(0.6546380568115661);
    msg.setSource(38417U);
    msg.setSourceEntity(233U);
    msg.setDestination(3134U);
    msg.setDestinationEntity(234U);
    msg.time = 0.5278665291659063;
    msg.x = 0.49651885634541937;
    msg.y = 0.759412909044474;
    msg.z = 0.40504274761147563;

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
    msg.setTimeStamp(0.3072018765771125);
    msg.setSource(59632U);
    msg.setSourceEntity(110U);
    msg.setDestination(17185U);
    msg.setDestinationEntity(50U);
    msg.time = 0.765187614135741;
    msg.x = 0.09922595136557932;
    msg.y = 0.8681689039731794;
    msg.z = 0.07133509045748831;

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
    msg.setTimeStamp(0.4664428631256078);
    msg.setSource(21156U);
    msg.setSourceEntity(111U);
    msg.setDestination(45071U);
    msg.setDestinationEntity(158U);
    msg.time = 0.6395211203140143;
    msg.x = 0.457093408844946;
    msg.y = 0.9958460401846594;
    msg.z = 0.6880283071731189;

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
    msg.setTimeStamp(0.5046012819515685);
    msg.setSource(4827U);
    msg.setSourceEntity(38U);
    msg.setDestination(6852U);
    msg.setDestinationEntity(25U);
    msg.time = 0.1991334739119357;
    msg.x = 0.11941678485718588;
    msg.y = 0.9799713508290632;
    msg.z = 0.6271742428771346;

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
    msg.setTimeStamp(0.7495625959552046);
    msg.setSource(51070U);
    msg.setSourceEntity(9U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(171U);
    msg.time = 0.8718244925494975;
    msg.x = 0.7170105365787004;
    msg.y = 0.24520323191928495;
    msg.z = 0.005514113128776144;

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
    msg.setTimeStamp(0.7556290528060386);
    msg.setSource(55969U);
    msg.setSourceEntity(81U);
    msg.setDestination(15291U);
    msg.setDestinationEntity(49U);
    msg.time = 0.37866024780531704;
    msg.x = 0.3404196679940149;
    msg.y = 0.598272964263162;
    msg.z = 0.07087711501080463;

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
    msg.setTimeStamp(0.5399127481312299);
    msg.setSource(56606U);
    msg.setSourceEntity(157U);
    msg.setDestination(27866U);
    msg.setDestinationEntity(133U);
    msg.validity = 12U;
    msg.x = 0.06240235820251727;
    msg.y = 0.7206463063580569;
    msg.z = 0.8487478325226256;

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
    msg.setTimeStamp(0.16450556315499176);
    msg.setSource(2716U);
    msg.setSourceEntity(74U);
    msg.setDestination(8192U);
    msg.setDestinationEntity(40U);
    msg.validity = 75U;
    msg.x = 0.367400319228124;
    msg.y = 0.49140681408021636;
    msg.z = 0.3222630007682421;

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
    msg.setTimeStamp(0.38292867399097996);
    msg.setSource(54995U);
    msg.setSourceEntity(57U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(107U);
    msg.validity = 149U;
    msg.x = 0.8541838508692084;
    msg.y = 0.12497041436510736;
    msg.z = 0.1652832840227093;

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
    msg.setTimeStamp(0.6857928517447414);
    msg.setSource(24011U);
    msg.setSourceEntity(246U);
    msg.setDestination(63226U);
    msg.setDestinationEntity(175U);
    msg.validity = 184U;
    msg.x = 0.8041344124148061;
    msg.y = 0.004764795749691353;
    msg.z = 0.13841592234638878;

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
    msg.setTimeStamp(0.17555932146051811);
    msg.setSource(36156U);
    msg.setSourceEntity(251U);
    msg.setDestination(53467U);
    msg.setDestinationEntity(188U);
    msg.validity = 134U;
    msg.x = 0.08571459811972115;
    msg.y = 0.9941432176972189;
    msg.z = 0.8401074573559928;

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
    msg.setTimeStamp(0.20289658200706562);
    msg.setSource(12497U);
    msg.setSourceEntity(244U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(123U);
    msg.validity = 76U;
    msg.x = 0.897882031107401;
    msg.y = 0.3379547287948911;
    msg.z = 0.7723822576184375;

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
    msg.setTimeStamp(0.7246390647103337);
    msg.setSource(4802U);
    msg.setSourceEntity(108U);
    msg.setDestination(39701U);
    msg.setDestinationEntity(185U);
    msg.time = 0.031602230685002675;
    msg.x = 0.5926624696450101;
    msg.y = 0.21799780453661188;
    msg.z = 0.8513674466022538;

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
    msg.setTimeStamp(0.9932284912897842);
    msg.setSource(48583U);
    msg.setSourceEntity(194U);
    msg.setDestination(46195U);
    msg.setDestinationEntity(82U);
    msg.time = 0.13477916348513552;
    msg.x = 0.03624163656850532;
    msg.y = 0.4970137612700789;
    msg.z = 0.0092366908807896;

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
    msg.setTimeStamp(0.581968407532762);
    msg.setSource(6927U);
    msg.setSourceEntity(193U);
    msg.setDestination(39068U);
    msg.setDestinationEntity(138U);
    msg.time = 0.5207631226414324;
    msg.x = 0.6348013518651723;
    msg.y = 0.8766292970770383;
    msg.z = 0.2017683211157606;

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
    msg.setTimeStamp(0.9047196285784641);
    msg.setSource(10039U);
    msg.setSourceEntity(91U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(103U);
    msg.validity = 240U;
    msg.value = 0.48567735484411445;

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
    msg.setTimeStamp(0.871574034527095);
    msg.setSource(12527U);
    msg.setSourceEntity(11U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(5U);
    msg.validity = 205U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9596012747863953;
    tmp_msg_0.y = 0.9232128916709782;
    tmp_msg_0.z = 0.4207122901546323;
    tmp_msg_0.phi = 0.05383520368177408;
    tmp_msg_0.theta = 0.3469177656961058;
    tmp_msg_0.psi = 0.4263410282432192;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.06652458780395154;
    tmp_msg_1.beam_height = 0.62910912588839;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.587828604713311;

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
    msg.setTimeStamp(0.2424575070607622);
    msg.setSource(39517U);
    msg.setSourceEntity(27U);
    msg.setDestination(31004U);
    msg.setDestinationEntity(214U);
    msg.validity = 220U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.07746750889723197;
    tmp_msg_0.beam_height = 0.7116855422241984;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.31619101169097186;

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
    msg.setTimeStamp(0.14242912072983127);
    msg.setSource(39028U);
    msg.setSourceEntity(89U);
    msg.setDestination(35156U);
    msg.setDestinationEntity(39U);
    msg.value = 0.07584811901443045;

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
    msg.setTimeStamp(0.1623172130993814);
    msg.setSource(28745U);
    msg.setSourceEntity(234U);
    msg.setDestination(24174U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8714858401106271;

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
    msg.setTimeStamp(0.7873658571788534);
    msg.setSource(33223U);
    msg.setSourceEntity(64U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(214U);
    msg.value = 0.19946006392177262;

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
    msg.setTimeStamp(0.8753141293411102);
    msg.setSource(12497U);
    msg.setSourceEntity(229U);
    msg.setDestination(11786U);
    msg.setDestinationEntity(137U);
    msg.value = 0.37124424163607195;

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
    msg.setTimeStamp(0.42416146137404953);
    msg.setSource(54719U);
    msg.setSourceEntity(57U);
    msg.setDestination(48292U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8798256104431247;

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
    msg.setTimeStamp(0.8153552005563254);
    msg.setSource(23329U);
    msg.setSourceEntity(205U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5320323214591155;

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
    msg.setTimeStamp(0.9562304046903628);
    msg.setSource(25864U);
    msg.setSourceEntity(80U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(6U);
    msg.value = 0.870869436701181;

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
    msg.setTimeStamp(0.43317433686362994);
    msg.setSource(12351U);
    msg.setSourceEntity(251U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(155U);
    msg.value = 0.324604342735732;

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
    msg.setTimeStamp(0.7627541875614928);
    msg.setSource(43731U);
    msg.setSourceEntity(191U);
    msg.setDestination(28855U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5609381713205311;

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
    msg.setTimeStamp(0.9786869175336709);
    msg.setSource(9266U);
    msg.setSourceEntity(229U);
    msg.setDestination(21685U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0797367346267337;

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
    msg.setTimeStamp(0.7909636897991292);
    msg.setSource(55209U);
    msg.setSourceEntity(216U);
    msg.setDestination(58916U);
    msg.setDestinationEntity(45U);
    msg.value = 0.15963087939464915;

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
    msg.setTimeStamp(0.9616240253032011);
    msg.setSource(36903U);
    msg.setSourceEntity(224U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6873467585723401;

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
    msg.setTimeStamp(0.8014409936136485);
    msg.setSource(47684U);
    msg.setSourceEntity(116U);
    msg.setDestination(29561U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6977496847274225;

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
    msg.setTimeStamp(0.16170060335132808);
    msg.setSource(35236U);
    msg.setSourceEntity(39U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9580974858336875;

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
    msg.setTimeStamp(0.5200710177757949);
    msg.setSource(52155U);
    msg.setSourceEntity(249U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(245U);
    msg.value = 0.13980414197591118;

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
    msg.setTimeStamp(0.9337318056261803);
    msg.setSource(31801U);
    msg.setSourceEntity(194U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(232U);
    msg.value = 0.30408420037454564;

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
    msg.setTimeStamp(0.45378677879657325);
    msg.setSource(39661U);
    msg.setSourceEntity(199U);
    msg.setDestination(9498U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0067483880346493885;

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
    msg.setTimeStamp(0.09822834528502578);
    msg.setSource(55405U);
    msg.setSourceEntity(212U);
    msg.setDestination(16043U);
    msg.setDestinationEntity(38U);
    msg.value = 0.01401421919940038;

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
    msg.setTimeStamp(0.8055480880337889);
    msg.setSource(40753U);
    msg.setSourceEntity(193U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(245U);
    msg.value = 0.10508365810205633;

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
    msg.setTimeStamp(0.9966489443150258);
    msg.setSource(16878U);
    msg.setSourceEntity(142U);
    msg.setDestination(51120U);
    msg.setDestinationEntity(33U);
    msg.value = 0.26704312179237133;

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
    msg.setTimeStamp(0.4477548232200217);
    msg.setSource(11000U);
    msg.setSourceEntity(54U);
    msg.setDestination(15690U);
    msg.setDestinationEntity(33U);
    msg.value = 0.1414616604869493;

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
    msg.setTimeStamp(0.6398903416787174);
    msg.setSource(48194U);
    msg.setSourceEntity(56U);
    msg.setDestination(32383U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6972105969681193;

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
    msg.setTimeStamp(0.30588685910168667);
    msg.setSource(24919U);
    msg.setSourceEntity(138U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(250U);
    msg.value = 0.7374601647901425;

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
    msg.setTimeStamp(0.40513246601114694);
    msg.setSource(50905U);
    msg.setSourceEntity(140U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7238014493712593;

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
    msg.setTimeStamp(0.1778959158610891);
    msg.setSource(2986U);
    msg.setSourceEntity(25U);
    msg.setDestination(34672U);
    msg.setDestinationEntity(114U);
    msg.direction = 0.10795136250310577;
    msg.speed = 0.26551938828795396;
    msg.turbulence = 0.7832654112012934;

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
    msg.setTimeStamp(0.7248005809056812);
    msg.setSource(36988U);
    msg.setSourceEntity(141U);
    msg.setDestination(61427U);
    msg.setDestinationEntity(89U);
    msg.direction = 0.5440668899926335;
    msg.speed = 0.23700286878398358;
    msg.turbulence = 0.4308267491305505;

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
    msg.setTimeStamp(0.29785644012324763);
    msg.setSource(57650U);
    msg.setSourceEntity(16U);
    msg.setDestination(22777U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.8782038684474289;
    msg.speed = 0.14549249502441575;
    msg.turbulence = 0.7473515132175801;

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
    msg.setTimeStamp(0.23461042577341062);
    msg.setSource(18752U);
    msg.setSourceEntity(87U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7463371190024761;

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
    msg.setTimeStamp(0.1661702993109202);
    msg.setSource(62617U);
    msg.setSourceEntity(90U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(219U);
    msg.value = 0.08631457481319182;

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
    msg.setTimeStamp(0.6665673338967455);
    msg.setSource(8376U);
    msg.setSourceEntity(61U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(237U);
    msg.value = 0.19561444675202988;

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
    msg.setTimeStamp(0.5818858801966036);
    msg.setSource(56919U);
    msg.setSourceEntity(95U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(168U);
    msg.value.assign("OKZUWXZGDTNLJEQIRTIGZVOEHZKBLBZKRTMQQHSUBGPEDCVOAAGQUFTYPWRAIYEWRYMZWJCJUNFPBOEVKUMUZHFYZFIHLXIVKX");

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
    msg.setTimeStamp(0.3075351920128617);
    msg.setSource(16859U);
    msg.setSourceEntity(167U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(76U);
    msg.value.assign("XGYIBDTGUQHLRGVXPRNZDLUEMWDEKFHJAWUZGNFFTFHYXIEZUYFFTPTXBGDCRXFQYWMGFQLSDYETIQIXVOKORTSOEQMNVQCNWWCHQVDOMWWSKAYZUKJDUAMTLYIUIEIWIUVQBSJSCALRLJPABHMGHXNCOOHABVRZMOZJXVYZWRVZZT");

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
    msg.setTimeStamp(0.471625613608209);
    msg.setSource(35040U);
    msg.setSourceEntity(34U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(61U);
    msg.value.assign("XDSGSPDCUWQGKCPTBCQTQTQHUJNLTKPJMIBPNXHFNVXYCUEIATXIVMEJPRWJZSZOJVDGASLNI");

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
    msg.setTimeStamp(0.7242766335808093);
    msg.setSource(14094U);
    msg.setSourceEntity(59U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {-39, -98, -71, -27, -37, -86, -76, -54, 15, 54, 52, 126, -92, 122, 45, 41, -64, -111, 81, -70, 26, 6, 49, 91, 65, 44, -18, -55, 71, -65, 8, 97};
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
    msg.setTimeStamp(0.4871372666975238);
    msg.setSource(1357U);
    msg.setSourceEntity(184U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(231U);
    const char tmp_msg_0[] = {50, -15, -53, -93, -99, 65, 4, -64, -122, 37, 50, -108, -46, -57, 35, -112, -4, 21, -92, -125, 46, -105, 43, 117, 92, 2, 36, -93, -39, 92, 67, 43, -28, -35, 2, -114, 112, 49, 41, -123, 30, 120, 3, 110, -38, -89, 108, -110, 118, 2, -65, -91, -117, 5, -100, -113, 23, 69, -22, 52, -43, -31, -82, -105, -46, -119, -40, -52, 91, 121, 77, 75, -73, -22, 43, -27, 3, 117, 29, -25, 11, -41, -78, -61, 8, -57, 54, -78, 17, 88, 16, -22, 60, -51, 61, 55, 88, -47, 11, 69, -91, -16, 50, -35, 126, 0, 1, -45, -41, 34, -28, 24, 119, 74, -119, 103, -116, -2, -82, -24, 118, -25, -108, -124, -45, 68, 82, 31, -30, 107, 119, -43, -1, -10, 122, 106, 52, -16, 52, 2, 119, 17, 12, -19, -95, -128, -96, -10, 65, 54, -44, 3, -80, -33, 56, 95, -32, -112, 121, 96, 3, 72, 48, 30, -126, -71, 85, 91, 12, 74, -79, -25, -127, -39, 119, -18, 60, -79, 126, -98, 66, 41, 51, 63, -33, -6, -68, -127, -98, 77, 121, 112, 42};
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
    msg.setTimeStamp(0.6729481785807377);
    msg.setSource(41327U);
    msg.setSourceEntity(58U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {-20, 66, -93, -93, 58, -48, -60, 66, 64, 42, -36, 114, 31, -125, 19, -26, 112, -22, -36, -123, -85, -84, -19, -45, -59, -118, 34, -103, -126, 92, -91, 24, -52, -117, 64, -86, 107, -111, -58, 87, 62, -14, 123, 38, -112, -31, -12, 107, -81, -58, -89, 126, -9, 98, 64, 89, 110, 17, -110, -123, 65, -54, -53, -64, 47, -89, 10, -5, -48, 54, -88, 49, 92, 23, -6, 45, 96, -55, 53, -97, 49, 39, -117, -55, -127, 76, -49, 52, -74, 109, -42, -4, 124, 69, -50, 19, 50, 82, -60, -95, -46, -23, 107, -39, -5, -58, 48, -89, 19, -72, 83, 24, 68, 27, -94, 75, 76, -6, -18, -65, -91, 119, 126, -3, -74, -102, 97, 17, 29, -2, -61, 6, -18, 15, -6, 102, 99, -80, 70, 111, 82, 117, 81};
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
    msg.setTimeStamp(0.8827659218386922);
    msg.setSource(17298U);
    msg.setSourceEntity(151U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(241U);
    msg.frequency = 2779547021U;
    msg.min_range = 35660U;
    msg.max_range = 18827U;

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
    msg.setTimeStamp(0.16611105145387317);
    msg.setSource(40832U);
    msg.setSourceEntity(86U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(131U);
    msg.frequency = 1452276594U;
    msg.min_range = 16669U;
    msg.max_range = 63147U;

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
    msg.setTimeStamp(0.49436610333327613);
    msg.setSource(11047U);
    msg.setSourceEntity(210U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(188U);
    msg.frequency = 810456167U;
    msg.min_range = 33401U;
    msg.max_range = 11506U;

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
    msg.setTimeStamp(0.3958737336269902);
    msg.setSource(26024U);
    msg.setSourceEntity(19U);
    msg.setDestination(61717U);
    msg.setDestinationEntity(115U);
    msg.type = 167U;
    msg.frequency = 2471994328U;
    msg.min_range = 8751U;
    msg.max_range = 36889U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.42396656521206655;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6561406384674886;
    tmp_msg_0.beam_height = 0.11500716172920278;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-116, -44, -112, 85, 34, 86, -122, -109, 15, 125, -84, 58, 79, -110, -74, -74, -8, -21, 43, -86, 38, 25, -124, -98, 63, 27, 64, 80, -87, 93, -36, -116, 105, 100, 16, 99, -126, -47, -54, 97, 78};
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
    msg.setTimeStamp(0.9868515974099186);
    msg.setSource(54477U);
    msg.setSourceEntity(226U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(218U);
    msg.type = 164U;
    msg.frequency = 850233472U;
    msg.min_range = 62070U;
    msg.max_range = 27499U;
    msg.bits_per_point = 184U;
    msg.scale_factor = 0.7177608852431248;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9087010303856017;
    tmp_msg_0.beam_height = 0.6856192236018246;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-11, -13, -112, 116, 96, 44, 82, -46, -80, -8, -84, 43, -73, 8, -76, 13, 2, -115, -121, -11, 81, 51, -113, -105, -85, -27, 108, -35, -24, 99, 92, 25, 61, 115, -83, -1, 76, 24, -45, -32, -12, -25, 20, -111, 21, -84, -1, 69, -76, 58, -113, -122, -33, 80, -118, -100, -68, 122, -18, 58, -32, -127, -117, 25, 95, 10, 114, 35, 71, -51, -37, 54, -12, 74, -42, -88, -42, -79, -21, -94, -82, -20, 66, -8, -99, -13, -71, -126, 56, 124, -68, 100, 101, 67, 100, 100, 126, -61, -80, -4, -91, -9, -97, -123, 60, -31};
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
    msg.setTimeStamp(0.029504358236424277);
    msg.setSource(54347U);
    msg.setSourceEntity(171U);
    msg.setDestination(721U);
    msg.setDestinationEntity(189U);
    msg.type = 125U;
    msg.frequency = 4105275163U;
    msg.min_range = 20954U;
    msg.max_range = 65447U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.26525488267466235;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6846422303308658;
    tmp_msg_0.beam_height = 0.6211462303146837;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {49, 94, -19, 20, 0, -127, -66, -127, -79, -14, -118, 109, 30, -47, 21, 67, 10, -39, 76, -37, -15, 98, 61, -61, -88, -10, -21, -57, -96, -51, -19, 115, 14, 69, -23, 49, 36, 2, 48, 73, 21, -111, 12, 35, -49, 28, -105, -128, 93, -83, -16, 110, 0, 24, 115, -3, -112, -115, 65, -124, 102, 3, 80, 103, -118, 30, -123, 112, -21, 20, -74, 52, -37, 55, 48, 52, 124, 50, 17, -63, -91, 118, -18, -93, -88, -51, -106, 50, -29, -103, -121, -38, 81, -10, 57, 106, 5, -39, -72, 28, 102, -92, 2, -44, 82, -45, -103, -40, 36, -27, -77, 125, 7, 92, -125, -83, 97, -63, 67, -5, -55, 21};
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
    msg.setTimeStamp(0.45155517924789856);
    msg.setSource(58946U);
    msg.setSourceEntity(225U);
    msg.setDestination(56724U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.8158757100218749);
    msg.setSource(13523U);
    msg.setSourceEntity(15U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.11839915632130105);
    msg.setSource(12335U);
    msg.setSourceEntity(101U);
    msg.setDestination(33018U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.6090808586735542);
    msg.setSource(44167U);
    msg.setSourceEntity(110U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(40U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.13430877139511355);
    msg.setSource(38059U);
    msg.setSourceEntity(140U);
    msg.setDestination(49846U);
    msg.setDestinationEntity(72U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.13835140734939644);
    msg.setSource(22254U);
    msg.setSourceEntity(2U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(19U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.07259415872905617);
    msg.setSource(24705U);
    msg.setSourceEntity(24U);
    msg.setDestination(35998U);
    msg.setDestinationEntity(136U);
    msg.value = 0.24409312981456432;
    msg.confidence = 0.7097626474452932;
    msg.opmodes.assign("APGNKSALHNIOUCOBJSHKPDHZGYNQRAZLVBGYIDTYPSMVEGXBJHGMPIUJJADKCKQXFHBKVXSQZTQVHONYUNWADFFXAXETPJSQDEPMIFUJJCARLLCJBCNGMXXD");

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
    msg.setTimeStamp(0.022910421009811666);
    msg.setSource(36136U);
    msg.setSourceEntity(190U);
    msg.setDestination(54941U);
    msg.setDestinationEntity(224U);
    msg.value = 0.4539465441751733;
    msg.confidence = 0.29209729253309025;
    msg.opmodes.assign("IYOLQUHMNTROWRSQYNBTHDHCTLMAKCFAKVKYPRNQMUKSDASOCDKJUQMWVJBSBHUYZKVYOGVFEMYZAWEILNPFHTNMHGSPIJQKWXRYTRTZUPEHJVNPKREH");

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
    msg.setTimeStamp(0.4091778593866561);
    msg.setSource(40447U);
    msg.setSourceEntity(188U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(188U);
    msg.value = 0.21124798713278115;
    msg.confidence = 0.720526193143225;
    msg.opmodes.assign("CQRSCQNJHYIWTARFIQXGAGDTXDIZOLERYNNQESCKOLWTGKSDWFSUSLOVRBGHCKMHDXTYSVVRZVONPMLTPMBJBCKVEUDAYRYAWK");

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
    msg.setTimeStamp(0.9687450744488045);
    msg.setSource(486U);
    msg.setSourceEntity(172U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(78U);
    msg.itow = 198006777U;
    msg.lat = 0.43462213136517425;
    msg.lon = 0.5107195901470966;
    msg.height_ell = 0.7604886393139918;
    msg.height_sea = 0.45311764589051984;
    msg.hacc = 0.5389919910398294;
    msg.vacc = 0.3746110799314668;
    msg.vel_n = 0.5969513538123237;
    msg.vel_e = 0.736916310483224;
    msg.vel_d = 0.6903151044547433;
    msg.speed = 0.4767461756404938;
    msg.gspeed = 0.6022339423581912;
    msg.heading = 0.5452213255722459;
    msg.sacc = 0.10858595557190076;
    msg.cacc = 0.4212020905368046;

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
    msg.setTimeStamp(0.4760876078282167);
    msg.setSource(45685U);
    msg.setSourceEntity(107U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(66U);
    msg.itow = 3851731179U;
    msg.lat = 0.48077446184797756;
    msg.lon = 0.7530312661947783;
    msg.height_ell = 0.3003016643156371;
    msg.height_sea = 0.5637505024048546;
    msg.hacc = 0.2974913904715254;
    msg.vacc = 0.4910449907038511;
    msg.vel_n = 0.5708181716720285;
    msg.vel_e = 0.5410899692323288;
    msg.vel_d = 0.05419105331962226;
    msg.speed = 0.6946277943237916;
    msg.gspeed = 0.17639749967398088;
    msg.heading = 0.9975382004246376;
    msg.sacc = 0.10657915972289678;
    msg.cacc = 0.9573020097036014;

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
    msg.setTimeStamp(0.9609166667225131);
    msg.setSource(10771U);
    msg.setSourceEntity(162U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(141U);
    msg.itow = 2102202646U;
    msg.lat = 0.9451096972287562;
    msg.lon = 0.1088387562782206;
    msg.height_ell = 0.6943704521015033;
    msg.height_sea = 0.6519167418459616;
    msg.hacc = 0.37443623218425137;
    msg.vacc = 0.799863859590526;
    msg.vel_n = 0.5715705467003841;
    msg.vel_e = 0.05296060180949613;
    msg.vel_d = 0.9931704675585048;
    msg.speed = 0.13491208612279326;
    msg.gspeed = 0.9485983202696496;
    msg.heading = 0.01425749218782979;
    msg.sacc = 0.9696150142208865;
    msg.cacc = 0.1718954379471238;

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
    msg.setTimeStamp(0.4970266270362267);
    msg.setSource(41745U);
    msg.setSourceEntity(16U);
    msg.setDestination(7604U);
    msg.setDestinationEntity(37U);
    msg.id = 117U;
    msg.value = 0.001522193897687929;

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
    msg.setTimeStamp(0.5771494756972438);
    msg.setSource(60809U);
    msg.setSourceEntity(78U);
    msg.setDestination(54156U);
    msg.setDestinationEntity(85U);
    msg.id = 173U;
    msg.value = 0.46746781559917505;

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
    msg.setTimeStamp(0.7174755033363325);
    msg.setSource(37405U);
    msg.setSourceEntity(23U);
    msg.setDestination(57138U);
    msg.setDestinationEntity(250U);
    msg.id = 226U;
    msg.value = 0.9471947987017278;

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
    msg.setTimeStamp(0.2382999028222681);
    msg.setSource(40640U);
    msg.setSourceEntity(239U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(227U);
    msg.x = 0.19658977576334724;
    msg.y = 0.6562497898473101;
    msg.z = 0.5313895449290013;
    msg.phi = 0.7614519104470933;
    msg.theta = 0.7789267366040026;
    msg.psi = 0.7162798170141725;

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
    msg.setTimeStamp(0.7988089389650467);
    msg.setSource(28357U);
    msg.setSourceEntity(234U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(178U);
    msg.x = 0.8901537783050983;
    msg.y = 0.63301462419678;
    msg.z = 0.8557273170482027;
    msg.phi = 0.05591753316249348;
    msg.theta = 0.7617836453071807;
    msg.psi = 0.32973774296369684;

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
    msg.setTimeStamp(0.8113133849803713);
    msg.setSource(15044U);
    msg.setSourceEntity(185U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(250U);
    msg.x = 0.9171464320603817;
    msg.y = 0.9185106492677132;
    msg.z = 0.9093667283909099;
    msg.phi = 0.755698680198379;
    msg.theta = 0.187792814790123;
    msg.psi = 0.15762677840749229;

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
    msg.setTimeStamp(0.5847626614126539);
    msg.setSource(55781U);
    msg.setSourceEntity(8U);
    msg.setDestination(972U);
    msg.setDestinationEntity(220U);
    msg.beam_width = 0.70089897934517;
    msg.beam_height = 0.7627749648914265;

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
    msg.setTimeStamp(0.9102661349959286);
    msg.setSource(37523U);
    msg.setSourceEntity(102U);
    msg.setDestination(55650U);
    msg.setDestinationEntity(229U);
    msg.beam_width = 0.08638882570705064;
    msg.beam_height = 0.9717837473598516;

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
    msg.setTimeStamp(0.15653418899362237);
    msg.setSource(63698U);
    msg.setSourceEntity(133U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(204U);
    msg.beam_width = 0.42612926141742435;
    msg.beam_height = 0.03033919096701776;

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
    msg.setTimeStamp(0.9487119199933519);
    msg.setSource(11231U);
    msg.setSourceEntity(133U);
    msg.setDestination(55972U);
    msg.setDestinationEntity(200U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.5690456953223353);
    msg.setSource(47755U);
    msg.setSourceEntity(112U);
    msg.setDestination(51939U);
    msg.setDestinationEntity(132U);
    msg.sane = 170U;

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
    msg.setTimeStamp(0.8324753944146887);
    msg.setSource(54524U);
    msg.setSourceEntity(236U);
    msg.setDestination(35121U);
    msg.setDestinationEntity(210U);
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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7325917648740797);
    msg.setSource(12923U);
    msg.setSourceEntity(89U);
    msg.setDestination(63548U);
    msg.setDestinationEntity(239U);
    msg.id = 136U;
    msg.zoom = 111U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.796156903621739);
    msg.setSource(39720U);
    msg.setSourceEntity(63U);
    msg.setDestination(44552U);
    msg.setDestinationEntity(58U);
    msg.id = 26U;
    msg.zoom = 136U;
    msg.action = 98U;

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
    msg.setTimeStamp(0.009331942033470986);
    msg.setSource(26958U);
    msg.setSourceEntity(115U);
    msg.setDestination(61411U);
    msg.setDestinationEntity(183U);
    msg.id = 154U;
    msg.zoom = 205U;
    msg.action = 17U;

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
    msg.setTimeStamp(0.9600148641985612);
    msg.setSource(19388U);
    msg.setSourceEntity(96U);
    msg.setDestination(5734U);
    msg.setDestinationEntity(158U);
    msg.id = 57U;
    msg.value = 0.5194481140641215;

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
    msg.setTimeStamp(0.39818532069212387);
    msg.setSource(12065U);
    msg.setSourceEntity(136U);
    msg.setDestination(22478U);
    msg.setDestinationEntity(35U);
    msg.id = 1U;
    msg.value = 0.959219906594763;

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
    msg.setTimeStamp(0.5421580795736665);
    msg.setSource(49540U);
    msg.setSourceEntity(149U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(70U);
    msg.id = 114U;
    msg.value = 0.99152031605061;

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
    msg.setTimeStamp(0.9932924935479029);
    msg.setSource(15614U);
    msg.setSourceEntity(161U);
    msg.setDestination(174U);
    msg.setDestinationEntity(153U);
    msg.id = 122U;
    msg.value = 0.7856461841672757;

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
    msg.setTimeStamp(0.668871634569894);
    msg.setSource(27010U);
    msg.setSourceEntity(181U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(125U);
    msg.id = 37U;
    msg.value = 0.9323947225183861;

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
    msg.setTimeStamp(0.22151220938616178);
    msg.setSource(31992U);
    msg.setSourceEntity(208U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(127U);
    msg.id = 216U;
    msg.value = 0.02099478749834227;

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
    msg.setTimeStamp(0.09676051562102705);
    msg.setSource(22163U);
    msg.setSourceEntity(229U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(72U);
    msg.id = 244U;
    msg.angle = 0.14244660041386847;

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
    msg.setTimeStamp(0.27226528325496635);
    msg.setSource(39376U);
    msg.setSourceEntity(57U);
    msg.setDestination(61779U);
    msg.setDestinationEntity(44U);
    msg.id = 230U;
    msg.angle = 0.4892406164926685;

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
    msg.setTimeStamp(0.3322154924054517);
    msg.setSource(38369U);
    msg.setSourceEntity(184U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(183U);
    msg.id = 93U;
    msg.angle = 0.2281151804586572;

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
    msg.setTimeStamp(0.47265787122822234);
    msg.setSource(15299U);
    msg.setSourceEntity(235U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(149U);
    msg.op = 113U;
    msg.actions.assign("MITSRNJZCVKDXHDNAGSNOXJPPQHLGONTDPYMBFIQUXKTULHMNESNLZBNRZWZFXXTVSYZJOSDREKJWAMEOCHCQSWPWNMXKADRGOTWWEIMJNCWHMSVEIOITPQDALFUMPDQHGEV");

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
    msg.setTimeStamp(0.3634210715449038);
    msg.setSource(38495U);
    msg.setSourceEntity(253U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(175U);
    msg.op = 184U;
    msg.actions.assign("MRQMGETPNMTTYUXMOUMWAMAUKQAFDCBHZXAKLXRFYPVIBTZVCEGLMYZCMNSEDNDIWHBTQIIFCOVFU");

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
    msg.setTimeStamp(0.28166365140052607);
    msg.setSource(10617U);
    msg.setSourceEntity(110U);
    msg.setDestination(42500U);
    msg.setDestinationEntity(91U);
    msg.op = 41U;
    msg.actions.assign("DDHWCJVDDWOYJACSCKSCOEOUQXLEVKZXDUUHLBFOIXLGTRNFASSTLKZQTIMPLCABPORGZNJZURSNVXIMPKVMCTLHIOWKHRCQPKXFQYMUYDPQFAJVGTQUEOKFAMZOVJWDZNCTEMVRVNIAIIRUEOWKYGNQWYPGUFARIWZMHMBYLBYTWQFFRJSLTZPTFPUAHEINYJSXBGWHAHVAZHEJCFXDDBVLKSPXODYCWEBUQGEMYSXBRGNN");

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
    msg.setTimeStamp(0.47953140617561185);
    msg.setSource(11070U);
    msg.setSourceEntity(233U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(20U);
    msg.actions.assign("XWRNERIPIRVUFDUH");

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
    msg.setTimeStamp(0.8178928839483998);
    msg.setSource(8982U);
    msg.setSourceEntity(83U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("XWCFIBKFACZRTKBHKDBZZTFJPTAAVHNSLNQXPNSKJJEMCRKQEUKAPMOYPRNSHPMSQLREFUNFQBIYGVCCVYIJKZAZXEIAFITZPORSDFVWOKUBROMLTJEAOHWPCZHGZBCGEYJONWSSBUVDLRXRXPYBGDJLVMAECWWVNWOUBQQMOTYWWDSYAOQLVHAVGWNTFVIGTQHJNDMEOFDKTDLE");

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
    msg.setTimeStamp(0.3195911525062407);
    msg.setSource(13386U);
    msg.setSourceEntity(233U);
    msg.setDestination(46885U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("TKMPYNHGWHWUNGCIKUVQOWIGCEQOIBYEMURPZFJSOJKSKJVBIBCASRGXSETMLHYTKPRWLEPJMLXAUHVPJMFXQUQZARPHYGFLMDBDTUUHRAFVQLZKZOIXCYVCQPMDLFBZGJU");

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
    msg.setTimeStamp(0.9840501222675353);
    msg.setSource(16184U);
    msg.setSourceEntity(108U);
    msg.setDestination(22215U);
    msg.setDestinationEntity(118U);
    msg.button = 2U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.967192706332469);
    msg.setSource(55046U);
    msg.setSourceEntity(124U);
    msg.setDestination(50436U);
    msg.setDestinationEntity(78U);
    msg.button = 123U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.8790019039457629);
    msg.setSource(44726U);
    msg.setSourceEntity(89U);
    msg.setDestination(51334U);
    msg.setDestinationEntity(201U);
    msg.button = 59U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.4479281616560653);
    msg.setSource(29513U);
    msg.setSourceEntity(149U);
    msg.setDestination(48014U);
    msg.setDestinationEntity(0U);
    msg.op = 147U;
    msg.text.assign("OEFNDBMOBECSYFDPUFKMJPTHZJJEORZAXWXHVXSJNTTLKHJZBCUIFBGXKGWBFVHPGYOIPEYSTZDXFQETMQDPVGSJSYQUZWNRKPYOZPVRUIK");

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
    msg.setTimeStamp(0.15691793509048102);
    msg.setSource(41100U);
    msg.setSourceEntity(231U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(190U);
    msg.op = 82U;
    msg.text.assign("FLTJJHINNLMHRIOBXIGUAKOGDULAEBOZIDDIGAONSRVEFJNWHVYRQCSNGWVXAGSIPMGREZHFTBOZYMMBNPISBZLUCXYGPWZFACEQRWDVUCSTZYICKLKXXDSVVAEXYBGWONJZMSUSDKGXNLIDUJPBMATYYLTHFAXVBDQKNFKJTBODLIVUBHQVQPLXDLVWONYKP");

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
    msg.setTimeStamp(0.6480840929521343);
    msg.setSource(18059U);
    msg.setSourceEntity(96U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(111U);
    msg.op = 95U;
    msg.text.assign("AZQNGXUCFUZPLKKRMGXITAWGWKWBSTXYAJNFHYGFGOYDNLCZZBVWQHMSNWSRMSHYKDBKCFSLZKBYEJOKIOXHAAXWCECADQKTZALYEAVNGANIGXRPTOHEKIQPRLZDYWHFODOTUECRHWEUCFCOUZPYOVIIRSVMSTTJOMRPFTHNGPBCMEVLJAIITL");

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
    msg.setTimeStamp(0.47153632526825884);
    msg.setSource(21247U);
    msg.setSourceEntity(23U);
    msg.setDestination(42658U);
    msg.setDestinationEntity(169U);
    msg.op = 80U;
    msg.time_remain = 0.9427300130727346;
    msg.sched_time = 0.6078986729679967;

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
    msg.setTimeStamp(0.6133165734725711);
    msg.setSource(17405U);
    msg.setSourceEntity(155U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(131U);
    msg.op = 240U;
    msg.time_remain = 0.9047926880218315;
    msg.sched_time = 0.4087729200096881;

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
    msg.setTimeStamp(0.3860482765476386);
    msg.setSource(65396U);
    msg.setSourceEntity(241U);
    msg.setDestination(10069U);
    msg.setDestinationEntity(191U);
    msg.op = 174U;
    msg.time_remain = 0.6343283771704261;
    msg.sched_time = 0.24480499388811028;

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
    msg.setTimeStamp(0.9284506210874934);
    msg.setSource(60510U);
    msg.setSourceEntity(40U);
    msg.setDestination(31859U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RDWTSDUOKALXVNIJADSJDEMSMDXRYYKZXBXCAEBNFCPUPDGGGRNWCAGJOVRELCRIUJTQEVIXFVECOBPH");
    msg.op = 39U;
    msg.sched_time = 0.3955810317081493;

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
    msg.setTimeStamp(0.6937655378775285);
    msg.setSource(3101U);
    msg.setSourceEntity(25U);
    msg.setDestination(48585U);
    msg.setDestinationEntity(160U);
    msg.name.assign("USFUFERVMLKSEBVYCVQX");
    msg.op = 34U;
    msg.sched_time = 0.47919846145124767;

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
    msg.setTimeStamp(0.3279954154714797);
    msg.setSource(30697U);
    msg.setSourceEntity(218U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ORISFHZOMQIJJCPHLIBYSFWKPHIYXIKTRMGODAUHJJBSCGYDYTAZHMEXGNEYNAWIKKVNFET");
    msg.op = 205U;
    msg.sched_time = 0.5597150220341345;

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
    msg.setTimeStamp(0.9090753996525486);
    msg.setSource(40097U);
    msg.setSourceEntity(90U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.2613881687685531);
    msg.setSource(15810U);
    msg.setSourceEntity(228U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.4255651638338924);
    msg.setSource(25550U);
    msg.setSourceEntity(170U);
    msg.setDestination(64141U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.9887975936077241);
    msg.setSource(27078U);
    msg.setSourceEntity(64U);
    msg.setDestination(29775U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HZEHPJVATAOKAWCZFQXKSZONXXJRYULCJHIGSQZXOXICOFBMHTOMKQNCPKMLBVMFTDNXGYVEWMLVEAYSEUZEPCUSSVDDDPSLBTHYENPYGJYQPFHNBJVDWTSOFGHSWKQCFPUTERA");
    msg.state = 152U;

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
    msg.setTimeStamp(0.28591267484534255);
    msg.setSource(15600U);
    msg.setSourceEntity(253U);
    msg.setDestination(48227U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BCYSRGFSMLTSVGDEBOUCHWGAPZRPQCIENTOFAOYQTAIVWZWHJTMBQCFWEIOXBDAFAGXBEQUXTVPHOZUQFHBSGKLNLXKIJJVNZCCQRULDBDNJACSGOCXGSZXHGGFTSVYQYINLPVRKMTUAL");
    msg.state = 48U;

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
    msg.setTimeStamp(0.8156427595783716);
    msg.setSource(32841U);
    msg.setSourceEntity(131U);
    msg.setDestination(43420U);
    msg.setDestinationEntity(71U);
    msg.name.assign("GQGTLTSXPLJOBAVFEAMENPXNSAHJVBROMTDQXQGXHBMXCOYIHURJEBPSUTUWGFJXYJYYDEWUXPOISEHUNJXSJCOCWBFQGUZNVDIAZDPNLIWWPAMCWJKTONKPDFDHFMDEFLLWBRLWMMPGAUSNNRLZTKJGQHWPIYTYMKFUZOKKEBRRMCVAKUTPXYCLCXIGDBLAGIFBSRAHQNO");
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
    msg.setTimeStamp(0.3875312741933786);
    msg.setSource(23337U);
    msg.setSourceEntity(235U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(196U);
    msg.name.assign("EDSCBFGKTWNGQYZMGEYBXFHHBHZRCQAQNDZYWZZVPMBKQPAYAHRTQOPWTJUDFBSFPWYNXRAGYJENQKUUM");
    msg.value = 209U;

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
    msg.setTimeStamp(0.41592845147580737);
    msg.setSource(28351U);
    msg.setSourceEntity(218U);
    msg.setDestination(25292U);
    msg.setDestinationEntity(211U);
    msg.name.assign("FAYCSDDYJTIYJLTKFEAMIGMOZGHKEXNFKVWHQMJIBDBVKCFPZZKUJQDRORBJBNDIKCBJLTHSQWCERHHSQPUXQUCAPNZLTQNEJEPKCAIVKVOGEEHTPPVJTZGYRYOUQOXKTWWLSDVUIPSOZDLEUGYYMEZOHPOALWSARIDWLHGOUMYZVZJGMGCUJIBS");
    msg.value = 65U;

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
    msg.setTimeStamp(0.6540327219417532);
    msg.setSource(64880U);
    msg.setSourceEntity(82U);
    msg.setDestination(12113U);
    msg.setDestinationEntity(111U);
    msg.name.assign("JHQLVIUKHQDXOHDWICZFXLEBQBM");
    msg.value = 141U;

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
    msg.setTimeStamp(0.5968117976640998);
    msg.setSource(21726U);
    msg.setSourceEntity(194U);
    msg.setDestination(39972U);
    msg.setDestinationEntity(89U);
    msg.name.assign("NENLFQVTLNZOBBVXBWDULQTAGLASYURFZXMYNQHKDAREUOPYDINQXEEIYRQXWMKJXIDQKKJPCQVBGVYHCJLSZSRBOSIRTDFAZEWPMKGKTJDNTORNTGCBFVLTFINIUVHWJTLAOKKKLFBHUKMPOYGRGYWVWJBDPGWARUHPSTAEUICC");

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
    msg.setTimeStamp(0.23345614380485735);
    msg.setSource(7870U);
    msg.setSourceEntity(174U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(33U);
    msg.name.assign("DHGBEXUELPHIR");

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
    msg.setTimeStamp(0.37319497104854493);
    msg.setSource(31187U);
    msg.setSourceEntity(215U);
    msg.setDestination(47775U);
    msg.setDestinationEntity(99U);
    msg.name.assign("FYHGGMMKGNLEOQUGTYVQXQKEVZAYWKAHKQRSXBOIKPIOTGCRJTFSLUGSXULEWYIAVSBIBYOAHDAPVLNNJJXEMXPFZLMRMCONNABEUVRISJYZBDTNSBPWHDHKLYCFUPURXCCGRXORBWUTFEQPWJZWCYIKIXPONHWGJHYWDQLYJCKQDJJFPATOMRDZBZVQWFM");

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
    msg.setTimeStamp(0.10012633017565231);
    msg.setSource(7379U);
    msg.setSourceEntity(55U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PHRUGBDBQFZBXAPAUMDNECCEFLTMLJJOTAOYRJMKABZLJCNWDTQSOWUGBTXPFJQVIQILLEUGSSJCMVHQRNHSVHIASNPKLMPQETBXXYECLNAWWGUZHUILWDENKZOVTXDPLUKWZFVYQHFSBIHXXUOVNYRMDFSWLYHVGVKDFINXUPCCABEZQSVVATROEYYNIZWX");
    msg.value = 60U;

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
    msg.setTimeStamp(0.46512179638472706);
    msg.setSource(25391U);
    msg.setSourceEntity(136U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(24U);
    msg.name.assign("PFICUYZSBZZKDQRATMWJWPBUPNGBIIOLXACWLTAWDFEXTKKBQPTYWYEJVTGBPXNLAGFASXEHCMSBMZMKFRCIUIFHNJB");
    msg.value = 91U;

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
    msg.setTimeStamp(0.7055665699744008);
    msg.setSource(49108U);
    msg.setSourceEntity(0U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(61U);
    msg.name.assign("SXESFSFNEEKBQRFALMDMDZOICQPBOPATPKBDTMCXOUSYIBVJWXWLULQOZLAPBTWXNODYYXLBUZN");
    msg.value = 134U;

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
    msg.setTimeStamp(0.10555560737837388);
    msg.setSource(964U);
    msg.setSourceEntity(247U);
    msg.setDestination(36587U);
    msg.setDestinationEntity(227U);
    msg.id = 17U;
    msg.period = 1282978161U;
    msg.duty_cycle = 163524498U;

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
    msg.setTimeStamp(0.22379052958831602);
    msg.setSource(17105U);
    msg.setSourceEntity(133U);
    msg.setDestination(15306U);
    msg.setDestinationEntity(115U);
    msg.id = 112U;
    msg.period = 3111319484U;
    msg.duty_cycle = 157905505U;

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
    msg.setTimeStamp(0.5965528490726688);
    msg.setSource(50776U);
    msg.setSourceEntity(79U);
    msg.setDestination(55340U);
    msg.setDestinationEntity(78U);
    msg.id = 97U;
    msg.period = 3814720401U;
    msg.duty_cycle = 2739339729U;

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
    msg.setTimeStamp(0.10968319958923622);
    msg.setSource(12968U);
    msg.setSourceEntity(247U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(171U);
    msg.id = 191U;
    msg.period = 766045415U;
    msg.duty_cycle = 3226203879U;

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
    msg.setTimeStamp(0.5822426340932082);
    msg.setSource(25153U);
    msg.setSourceEntity(108U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(231U);
    msg.id = 171U;
    msg.period = 2356089430U;
    msg.duty_cycle = 2999586612U;

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
    msg.setTimeStamp(0.41806333300712906);
    msg.setSource(58052U);
    msg.setSourceEntity(194U);
    msg.setDestination(51519U);
    msg.setDestinationEntity(107U);
    msg.id = 145U;
    msg.period = 10884667U;
    msg.duty_cycle = 3417392339U;

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
    msg.setTimeStamp(0.25485158134088526);
    msg.setSource(31263U);
    msg.setSourceEntity(80U);
    msg.setDestination(38553U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.3870646341513456;
    msg.lon = 0.31833313497089455;
    msg.height = 0.9895366167837274;
    msg.x = 0.17549688602475377;
    msg.y = 0.8487741185072896;
    msg.z = 0.2661507349056217;
    msg.phi = 0.6277519675115546;
    msg.theta = 0.8912004374972795;
    msg.psi = 0.890168423753742;
    msg.u = 0.014128993602709139;
    msg.v = 0.3142747065364049;
    msg.w = 0.7094831428373791;
    msg.vx = 0.608221673387767;
    msg.vy = 0.9562658668240176;
    msg.vz = 0.7359023539635141;
    msg.p = 0.17864296685728165;
    msg.q = 0.5673221601152736;
    msg.r = 0.9335500228731847;
    msg.depth = 0.09405216325285715;
    msg.alt = 0.1334203945303427;

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
    msg.setTimeStamp(0.61918482376405);
    msg.setSource(44176U);
    msg.setSourceEntity(215U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.4219575287968801;
    msg.lon = 0.5688064070608722;
    msg.height = 0.4316338108988421;
    msg.x = 0.05350352432728411;
    msg.y = 0.054859395154339796;
    msg.z = 0.032420059679020063;
    msg.phi = 0.15955138956870407;
    msg.theta = 0.6473641886123536;
    msg.psi = 0.9610426681907788;
    msg.u = 0.7012364489917526;
    msg.v = 0.13710664874690282;
    msg.w = 0.015852601559273594;
    msg.vx = 0.9218369464151794;
    msg.vy = 0.6995498329782283;
    msg.vz = 0.5235380916399519;
    msg.p = 0.7137506827331125;
    msg.q = 0.32950801296178456;
    msg.r = 0.7482256691978245;
    msg.depth = 0.926832947375675;
    msg.alt = 0.9635800019055619;

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
    msg.setTimeStamp(0.5822150401506494);
    msg.setSource(35524U);
    msg.setSourceEntity(104U);
    msg.setDestination(1963U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.031381225798717716;
    msg.lon = 0.1753384637030163;
    msg.height = 0.9398355977668773;
    msg.x = 0.7505771780429182;
    msg.y = 0.324864030569199;
    msg.z = 0.33494638274020894;
    msg.phi = 0.3025647485993168;
    msg.theta = 0.09741517745590267;
    msg.psi = 0.8262780368075141;
    msg.u = 0.45414558181747466;
    msg.v = 0.2606941515483978;
    msg.w = 0.4315878112206557;
    msg.vx = 0.39532418424197124;
    msg.vy = 0.9582103339434885;
    msg.vz = 0.6591190077278171;
    msg.p = 0.34509332512641366;
    msg.q = 0.9725880465574019;
    msg.r = 0.07588569863431105;
    msg.depth = 0.6488918572137568;
    msg.alt = 0.8434706624740468;

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
    msg.setTimeStamp(0.14579580732635467);
    msg.setSource(13595U);
    msg.setSourceEntity(237U);
    msg.setDestination(3667U);
    msg.setDestinationEntity(81U);
    msg.x = 0.17902167783612322;
    msg.y = 0.494797850500556;
    msg.z = 0.005279070334256786;

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
    msg.setTimeStamp(0.29139804081372844);
    msg.setSource(37065U);
    msg.setSourceEntity(46U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(17U);
    msg.x = 0.7672606339389216;
    msg.y = 0.07492160135567094;
    msg.z = 0.7809102277511057;

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
    msg.setTimeStamp(0.5822292985045503);
    msg.setSource(36836U);
    msg.setSourceEntity(236U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(181U);
    msg.x = 0.7234188523746028;
    msg.y = 0.7528800712009619;
    msg.z = 0.7686332644509102;

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
    msg.setTimeStamp(0.7821588090782424);
    msg.setSource(51471U);
    msg.setSourceEntity(63U);
    msg.setDestination(51942U);
    msg.setDestinationEntity(157U);
    msg.value = 0.08673808189194565;

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
    msg.setTimeStamp(0.8584985565712256);
    msg.setSource(22888U);
    msg.setSourceEntity(38U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(90U);
    msg.value = 0.08321262402658747;

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
    msg.setTimeStamp(0.7637775519217577);
    msg.setSource(21695U);
    msg.setSourceEntity(141U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(205U);
    msg.value = 0.7839230108055819;

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
    msg.setTimeStamp(0.9666843391295865);
    msg.setSource(63295U);
    msg.setSourceEntity(69U);
    msg.setDestination(30793U);
    msg.setDestinationEntity(154U);
    msg.value = 0.1838516158706126;

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
    msg.setTimeStamp(0.5580342114009184);
    msg.setSource(8082U);
    msg.setSourceEntity(31U);
    msg.setDestination(43754U);
    msg.setDestinationEntity(17U);
    msg.value = 0.2494127892709408;

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
    msg.setTimeStamp(0.6335916519975903);
    msg.setSource(23907U);
    msg.setSourceEntity(87U);
    msg.setDestination(1042U);
    msg.setDestinationEntity(205U);
    msg.value = 0.03048813603012357;

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
    msg.setTimeStamp(0.18376159256093183);
    msg.setSource(36120U);
    msg.setSourceEntity(37U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(210U);
    msg.x = 0.7857127425851546;
    msg.y = 0.9659939145699353;
    msg.z = 0.8954151283935721;
    msg.phi = 0.45409236257378494;
    msg.theta = 0.734520909441156;
    msg.psi = 0.9675004909693058;
    msg.p = 0.9306870363812403;
    msg.q = 0.2808675245079004;
    msg.r = 0.41089119302270605;
    msg.u = 0.05704894744364908;
    msg.v = 0.9134949695930612;
    msg.w = 0.5535160678451071;
    msg.bias_psi = 0.24906628108473017;
    msg.bias_r = 0.6389492190709773;

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
    msg.setTimeStamp(0.8993437085034068);
    msg.setSource(17920U);
    msg.setSourceEntity(247U);
    msg.setDestination(44559U);
    msg.setDestinationEntity(60U);
    msg.x = 0.6208782147428995;
    msg.y = 0.13202479063384598;
    msg.z = 0.12739730718900322;
    msg.phi = 0.9082161814302305;
    msg.theta = 0.1884390099943245;
    msg.psi = 0.01832031477762197;
    msg.p = 0.5906661331053658;
    msg.q = 0.3492759416897997;
    msg.r = 0.0779719715225261;
    msg.u = 0.8178455879470814;
    msg.v = 0.251860825713656;
    msg.w = 0.9539018790728273;
    msg.bias_psi = 0.22835158121392385;
    msg.bias_r = 0.673343753527868;

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
    msg.setTimeStamp(0.04330257735820342);
    msg.setSource(12882U);
    msg.setSourceEntity(102U);
    msg.setDestination(749U);
    msg.setDestinationEntity(69U);
    msg.x = 0.8752307371381448;
    msg.y = 0.5738216717043357;
    msg.z = 0.7742847820540194;
    msg.phi = 0.43866662855563077;
    msg.theta = 0.9084989276275964;
    msg.psi = 0.31905156643650723;
    msg.p = 0.34939221056597636;
    msg.q = 0.30589101672970886;
    msg.r = 0.13486418463220984;
    msg.u = 0.7822723531174187;
    msg.v = 0.8536385023742242;
    msg.w = 0.03770722133021154;
    msg.bias_psi = 0.5144919820374991;
    msg.bias_r = 0.8652624938396185;

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
    msg.setTimeStamp(0.8264023428212439);
    msg.setSource(58568U);
    msg.setSourceEntity(20U);
    msg.setDestination(10158U);
    msg.setDestinationEntity(21U);
    msg.bias_psi = 0.9949761213696596;
    msg.bias_r = 0.20391197318792353;
    msg.cog = 0.6804057977547278;
    msg.cyaw = 0.05762280409133069;
    msg.lbl_rej_level = 0.39583814426361164;
    msg.gps_rej_level = 0.6150957337938177;
    msg.custom_x = 0.2426735248121229;
    msg.custom_y = 0.6136042277693257;
    msg.custom_z = 0.2410690696154546;

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
    msg.setTimeStamp(0.10398388137452241);
    msg.setSource(56613U);
    msg.setSourceEntity(166U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.7793323319339015;
    msg.bias_r = 0.9966079774957218;
    msg.cog = 0.3171645386793003;
    msg.cyaw = 0.24890513269975545;
    msg.lbl_rej_level = 0.4226824130214747;
    msg.gps_rej_level = 0.4447882366883886;
    msg.custom_x = 0.436255195057764;
    msg.custom_y = 0.5010773157947545;
    msg.custom_z = 0.8424733554667841;

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
    msg.setTimeStamp(0.7234054952173624);
    msg.setSource(14344U);
    msg.setSourceEntity(219U);
    msg.setDestination(19515U);
    msg.setDestinationEntity(29U);
    msg.bias_psi = 0.825599370071491;
    msg.bias_r = 0.4781183654699136;
    msg.cog = 0.29247661239675793;
    msg.cyaw = 0.35113561569173557;
    msg.lbl_rej_level = 0.11824808297229439;
    msg.gps_rej_level = 0.8843713666797054;
    msg.custom_x = 0.5951113485000745;
    msg.custom_y = 0.7510828630051861;
    msg.custom_z = 0.15618252730506343;

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
    msg.setTimeStamp(0.9883585126649006);
    msg.setSource(9535U);
    msg.setSourceEntity(167U);
    msg.setDestination(51207U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.7645280988424382;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.8453557351303271);
    msg.setSource(12193U);
    msg.setSourceEntity(186U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.08406954347203743;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.5884995718580501);
    msg.setSource(39506U);
    msg.setSourceEntity(219U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(216U);
    msg.utc_time = 0.050128989925606326;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.22999005236524017);
    msg.setSource(41208U);
    msg.setSourceEntity(26U);
    msg.setDestination(17535U);
    msg.setDestinationEntity(190U);
    msg.id = 41U;
    msg.range = 0.3638006651574147;
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
    msg.setTimeStamp(0.5734000500278349);
    msg.setSource(14456U);
    msg.setSourceEntity(112U);
    msg.setDestination(45709U);
    msg.setDestinationEntity(92U);
    msg.id = 208U;
    msg.range = 0.6790204611753159;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.8380301945619334);
    msg.setSource(27800U);
    msg.setSourceEntity(143U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(180U);
    msg.id = 137U;
    msg.range = 0.5296212566539105;
    msg.acceptance = 104U;

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
    msg.setTimeStamp(0.9291892867282512);
    msg.setSource(39567U);
    msg.setSourceEntity(14U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(244U);
    msg.type = 170U;
    msg.reason = 148U;
    msg.value = 0.6153968443035308;
    msg.timestep = 0.5306503929522542;

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
    msg.setTimeStamp(0.10332785798657473);
    msg.setSource(59299U);
    msg.setSourceEntity(155U);
    msg.setDestination(54061U);
    msg.setDestinationEntity(110U);
    msg.type = 200U;
    msg.reason = 181U;
    msg.value = 0.06769628786864523;
    msg.timestep = 0.5326258805804243;

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
    msg.setTimeStamp(0.780288214005599);
    msg.setSource(14072U);
    msg.setSourceEntity(138U);
    msg.setDestination(58184U);
    msg.setDestinationEntity(115U);
    msg.type = 175U;
    msg.reason = 5U;
    msg.value = 0.6596798849906813;
    msg.timestep = 0.08841567655001115;

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
    msg.setTimeStamp(0.5683915596790554);
    msg.setSource(63831U);
    msg.setSourceEntity(177U);
    msg.setDestination(11586U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.6487146143891045);
    msg.setSource(55679U);
    msg.setSourceEntity(66U);
    msg.setDestination(14541U);
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
    msg.setTimeStamp(0.4251519525142695);
    msg.setSource(16743U);
    msg.setSourceEntity(32U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.407257467582525);
    msg.setSource(31039U);
    msg.setSourceEntity(164U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(164U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JQJZGCYEEXICVHQCBSIQSLIDYCPMIJVQKHPGLTIWTGJDBATRHF");
    tmp_msg_0.lat = 0.4466270360450608;
    tmp_msg_0.lon = 0.7707562188952722;
    tmp_msg_0.depth = 0.6485984410771568;
    tmp_msg_0.query_channel = 154U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.013701149462591489;
    msg.y = 0.6773570490532157;
    msg.var_x = 0.27941138227344486;
    msg.var_y = 0.9705235178026845;
    msg.distance = 0.9625013037451291;

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
    msg.setTimeStamp(0.19517135147043607);
    msg.setSource(58547U);
    msg.setSourceEntity(217U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UBJCONXNBDZYNHUBUORDMUBHLIZETQQAKCWHMYSVEZDXPRUEBYVLTIRPXYZFUTZXDNTRDTECNWQMYNGCFSDYNWESMHWOVEGUPFAFFUJHVXGORTFQCLVJMBBMPMZPGLLKJYZYCIFZMWVLUEHNPEXOERGJCQVBXTBJQJFHPISRZGKKVSPLXJ");
    tmp_msg_0.lat = 0.18713119691495517;
    tmp_msg_0.lon = 0.8145574696434391;
    tmp_msg_0.depth = 0.756764518556526;
    tmp_msg_0.query_channel = 193U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 38U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6166223293898359;
    msg.y = 0.5822432245247449;
    msg.var_x = 0.8505621991827983;
    msg.var_y = 0.08160733095500494;
    msg.distance = 0.03569137376467346;

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
    msg.setTimeStamp(0.36647734935248666);
    msg.setSource(4833U);
    msg.setSourceEntity(187U);
    msg.setDestination(50939U);
    msg.setDestinationEntity(36U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XTZDXSXPECMACZOYFXXZDOALRYXTOTLSTFUPJUNJOVURTYKNRFCXUCHIDUAEQEWPCVUQCAAIVGBJJVDYDYMWGLOPNAVMLBUTJGWOTFQSWHMPYGRJDWFWOAJBKSZVPSNEDFGAXQVKQKLGDKYPQEBVMEBWLVOYSKYGJNBFQQXFIMSWLBPKMOWGIUKZJHRGZKRMZTHRYEGJBHRDNOLRQCENNEEUKFFHHANIBPXMWIIIMS");
    tmp_msg_0.lat = 0.6138963193474242;
    tmp_msg_0.lon = 0.256522663609719;
    tmp_msg_0.depth = 0.20027636637646296;
    tmp_msg_0.query_channel = 105U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 167U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.09601439026779601;
    msg.y = 0.8704393479316991;
    msg.var_x = 0.15230866570708057;
    msg.var_y = 0.672950026393305;
    msg.distance = 0.38012229623957716;

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
    msg.setTimeStamp(0.6618016031364422);
    msg.setSource(46206U);
    msg.setSourceEntity(251U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(174U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.43739942507529705);
    msg.setSource(45067U);
    msg.setSourceEntity(62U);
    msg.setDestination(23301U);
    msg.setDestinationEntity(2U);
    msg.state = 104U;

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
    msg.setTimeStamp(0.2620470558755602);
    msg.setSource(47761U);
    msg.setSourceEntity(172U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(103U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.5753181411017592);
    msg.setSource(46823U);
    msg.setSourceEntity(47U);
    msg.setDestination(47495U);
    msg.setDestinationEntity(69U);
    msg.x = 0.48575368018471854;
    msg.y = 0.6847322300862548;
    msg.z = 0.9353580086103043;

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
    msg.setTimeStamp(0.8465740330530449);
    msg.setSource(63010U);
    msg.setSourceEntity(61U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(40U);
    msg.x = 0.7976242789782065;
    msg.y = 0.22364858193533776;
    msg.z = 0.6396681427096772;

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
    msg.setTimeStamp(0.9082656147977249);
    msg.setSource(30520U);
    msg.setSourceEntity(52U);
    msg.setDestination(4358U);
    msg.setDestinationEntity(190U);
    msg.x = 0.44678699938440425;
    msg.y = 0.15655401513543155;
    msg.z = 0.15781143641395756;

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
    msg.setTimeStamp(0.4849399709771953);
    msg.setSource(48513U);
    msg.setSourceEntity(144U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(73U);
    msg.value = 0.02837103245050432;

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
    msg.setTimeStamp(0.88117191408137);
    msg.setSource(22386U);
    msg.setSourceEntity(103U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(43U);
    msg.value = 0.3612272081906467;

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
    msg.setTimeStamp(0.9646612115581449);
    msg.setSource(15687U);
    msg.setSourceEntity(165U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6246888175674943;

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
    msg.setTimeStamp(0.4619490939052656);
    msg.setSource(53773U);
    msg.setSourceEntity(56U);
    msg.setDestination(38834U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7422475919863285;
    msg.z_units = 250U;

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
    msg.setTimeStamp(0.2968315219091314);
    msg.setSource(38195U);
    msg.setSourceEntity(125U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(244U);
    msg.value = 0.08645507035834199;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.562770901863163);
    msg.setSource(12019U);
    msg.setSourceEntity(168U);
    msg.setDestination(58617U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7004929768158719;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.7832370326265625);
    msg.setSource(41086U);
    msg.setSourceEntity(67U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(59U);
    msg.value = 0.2742836634540011;
    msg.speed_units = 77U;

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
    msg.setTimeStamp(0.08464350675903376);
    msg.setSource(9992U);
    msg.setSourceEntity(221U);
    msg.setDestination(64520U);
    msg.setDestinationEntity(242U);
    msg.value = 0.40920464941135903;
    msg.speed_units = 208U;

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
    msg.setTimeStamp(0.48508671513913226);
    msg.setSource(51029U);
    msg.setSourceEntity(62U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6516235907093572;
    msg.speed_units = 64U;

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
    msg.setTimeStamp(0.07869577390306326);
    msg.setSource(27769U);
    msg.setSourceEntity(228U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4089546890557717;

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
    msg.setTimeStamp(0.9913339536163804);
    msg.setSource(27370U);
    msg.setSourceEntity(60U);
    msg.setDestination(9340U);
    msg.setDestinationEntity(81U);
    msg.value = 0.26637436458744534;

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
    msg.setTimeStamp(0.56755523156768);
    msg.setSource(45638U);
    msg.setSourceEntity(201U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(107U);
    msg.value = 0.4184032385627555;

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
    msg.setTimeStamp(0.12433625067474185);
    msg.setSource(32689U);
    msg.setSourceEntity(227U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5065781359386038;

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
    msg.setTimeStamp(0.6850349869603606);
    msg.setSource(56684U);
    msg.setSourceEntity(128U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(168U);
    msg.value = 0.685170253993508;

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
    msg.setTimeStamp(0.19898205329485952);
    msg.setSource(56488U);
    msg.setSourceEntity(224U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(212U);
    msg.value = 0.3458249819400626;

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
    msg.setTimeStamp(0.24126415008151703);
    msg.setSource(62877U);
    msg.setSourceEntity(78U);
    msg.setDestination(53937U);
    msg.setDestinationEntity(111U);
    msg.value = 0.18341472744535003;

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
    msg.setTimeStamp(0.2886909845801695);
    msg.setSource(23122U);
    msg.setSourceEntity(97U);
    msg.setDestination(49505U);
    msg.setDestinationEntity(157U);
    msg.value = 0.2583767318846224;

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
    msg.setTimeStamp(0.8705954637477028);
    msg.setSource(13721U);
    msg.setSourceEntity(26U);
    msg.setDestination(52972U);
    msg.setDestinationEntity(181U);
    msg.value = 0.12606523221233823;

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
    msg.setTimeStamp(0.5356973118211082);
    msg.setSource(14252U);
    msg.setSourceEntity(130U);
    msg.setDestination(44918U);
    msg.setDestinationEntity(31U);
    msg.start_lat = 0.8527369248362714;
    msg.start_lon = 0.7867900264731985;
    msg.start_z = 0.8228718446591509;
    msg.start_z_units = 79U;
    msg.end_lat = 0.5653862211861423;
    msg.end_lon = 0.3366825594945868;
    msg.end_z = 0.341499278802602;
    msg.end_z_units = 143U;
    msg.speed = 0.4656783762889414;
    msg.speed_units = 74U;
    msg.lradius = 0.7274079780142392;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.48259385913825037);
    msg.setSource(5709U);
    msg.setSourceEntity(240U);
    msg.setDestination(8875U);
    msg.setDestinationEntity(9U);
    msg.start_lat = 0.28746397989519645;
    msg.start_lon = 0.5456848782643839;
    msg.start_z = 0.21169899344176613;
    msg.start_z_units = 229U;
    msg.end_lat = 0.13356898336405365;
    msg.end_lon = 0.7544161591595536;
    msg.end_z = 0.4440256652496062;
    msg.end_z_units = 162U;
    msg.speed = 0.2813007714743059;
    msg.speed_units = 31U;
    msg.lradius = 0.0828673416971839;
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
    msg.setTimeStamp(0.03434983972152161);
    msg.setSource(5031U);
    msg.setSourceEntity(73U);
    msg.setDestination(25710U);
    msg.setDestinationEntity(70U);
    msg.start_lat = 0.04242317732476386;
    msg.start_lon = 0.7361919876237317;
    msg.start_z = 0.6866960695347991;
    msg.start_z_units = 22U;
    msg.end_lat = 0.5545742829457373;
    msg.end_lon = 0.260531124022949;
    msg.end_z = 0.28371904577729645;
    msg.end_z_units = 225U;
    msg.speed = 0.028924053193001287;
    msg.speed_units = 126U;
    msg.lradius = 0.43386189410343634;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.08318475144953674);
    msg.setSource(22776U);
    msg.setSourceEntity(93U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(143U);
    msg.x = 0.08084639059170318;
    msg.y = 0.9694636897486429;
    msg.z = 0.4995072276769721;
    msg.k = 0.49077912048522476;
    msg.m = 0.28887934713188657;
    msg.n = 0.40394455023081133;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.5085079919928135);
    msg.setSource(33788U);
    msg.setSourceEntity(10U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(42U);
    msg.x = 0.04430887545452489;
    msg.y = 0.7726605486494441;
    msg.z = 0.27035000528974173;
    msg.k = 0.856815792257241;
    msg.m = 0.9957521438155376;
    msg.n = 0.5896724997282543;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.07074588818003669);
    msg.setSource(1616U);
    msg.setSourceEntity(118U);
    msg.setDestination(61564U);
    msg.setDestinationEntity(192U);
    msg.x = 0.06639139690863205;
    msg.y = 0.1025937723607272;
    msg.z = 0.4825445395920692;
    msg.k = 0.4749040674591859;
    msg.m = 0.605529083657273;
    msg.n = 0.833313801162356;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.3872550760296257);
    msg.setSource(32628U);
    msg.setSourceEntity(242U);
    msg.setDestination(29379U);
    msg.setDestinationEntity(145U);
    msg.value = 0.899524954254912;

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
    msg.setTimeStamp(0.7092159033745996);
    msg.setSource(9766U);
    msg.setSourceEntity(184U);
    msg.setDestination(20878U);
    msg.setDestinationEntity(104U);
    msg.value = 0.29847435135353695;

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
    msg.setTimeStamp(0.8234891024188049);
    msg.setSource(44150U);
    msg.setSourceEntity(227U);
    msg.setDestination(41040U);
    msg.setDestinationEntity(197U);
    msg.value = 0.8893128199522782;

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
    msg.setTimeStamp(0.2722237713251534);
    msg.setSource(44608U);
    msg.setSourceEntity(117U);
    msg.setDestination(32760U);
    msg.setDestinationEntity(159U);
    msg.u = 0.5348759607487276;
    msg.v = 0.7822888106450527;
    msg.w = 0.46146596100641435;
    msg.p = 0.16352479133029718;
    msg.q = 0.8418219850333108;
    msg.r = 0.517889444791086;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.8885741528482104);
    msg.setSource(39518U);
    msg.setSourceEntity(208U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(79U);
    msg.u = 0.761771647960312;
    msg.v = 0.7366451835207615;
    msg.w = 0.5872414813600866;
    msg.p = 0.21923750284077037;
    msg.q = 0.02268132806889145;
    msg.r = 0.4340126493226123;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.9638545771986542);
    msg.setSource(30992U);
    msg.setSourceEntity(58U);
    msg.setDestination(10635U);
    msg.setDestinationEntity(173U);
    msg.u = 0.6141595779763664;
    msg.v = 0.32993515163907305;
    msg.w = 0.0021824815052596813;
    msg.p = 0.6983674247068316;
    msg.q = 0.7787346804649549;
    msg.r = 0.9973013755165137;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.7690277839393307);
    msg.setSource(4049U);
    msg.setSourceEntity(3U);
    msg.setDestination(20345U);
    msg.setDestinationEntity(47U);
    msg.start_lat = 0.15705790854537893;
    msg.start_lon = 0.48637333139108774;
    msg.start_z = 0.6677389915312598;
    msg.start_z_units = 193U;
    msg.end_lat = 0.29160803384827916;
    msg.end_lon = 0.8759170094513015;
    msg.end_z = 0.15037815150173917;
    msg.end_z_units = 149U;
    msg.lradius = 0.17861472313195248;
    msg.flags = 238U;
    msg.x = 0.9375265644464706;
    msg.y = 0.002604936892101839;
    msg.z = 0.8218855357433182;
    msg.vx = 0.45902169668329285;
    msg.vy = 0.9053706782709823;
    msg.vz = 0.9228213093840119;
    msg.course_error = 0.9488100464364894;
    msg.eta = 19567U;

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
    msg.setTimeStamp(0.5282119265661096);
    msg.setSource(12626U);
    msg.setSourceEntity(86U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(96U);
    msg.start_lat = 0.4815159258069681;
    msg.start_lon = 0.2786889547755841;
    msg.start_z = 0.5013664534596283;
    msg.start_z_units = 160U;
    msg.end_lat = 0.14812864324003328;
    msg.end_lon = 0.20999925838957434;
    msg.end_z = 0.29206033737170334;
    msg.end_z_units = 113U;
    msg.lradius = 0.7348428042027066;
    msg.flags = 207U;
    msg.x = 0.7190315954935506;
    msg.y = 0.752989427036927;
    msg.z = 0.515289486978538;
    msg.vx = 0.8506279393969328;
    msg.vy = 0.013100848446904845;
    msg.vz = 0.6121366060376822;
    msg.course_error = 0.9366701189429546;
    msg.eta = 9279U;

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
    msg.setTimeStamp(0.35766559121854125);
    msg.setSource(49668U);
    msg.setSourceEntity(246U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(30U);
    msg.start_lat = 0.7033265844470138;
    msg.start_lon = 0.49426537792981995;
    msg.start_z = 0.855630690903446;
    msg.start_z_units = 168U;
    msg.end_lat = 0.1989970655230725;
    msg.end_lon = 0.6983690752053343;
    msg.end_z = 0.7732430819637762;
    msg.end_z_units = 239U;
    msg.lradius = 0.18759948070440757;
    msg.flags = 5U;
    msg.x = 0.9493741126914702;
    msg.y = 0.7490323916876023;
    msg.z = 0.17300408141109525;
    msg.vx = 0.6910762640203433;
    msg.vy = 0.14151221005314574;
    msg.vz = 0.691259448177277;
    msg.course_error = 0.7364852728041522;
    msg.eta = 50833U;

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
    msg.setTimeStamp(0.2236015642742104);
    msg.setSource(28897U);
    msg.setSourceEntity(88U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(35U);
    msg.k = 0.3522383603972067;
    msg.m = 0.532476986434333;
    msg.n = 0.4239949693559105;

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
    msg.setTimeStamp(0.577073061531228);
    msg.setSource(6598U);
    msg.setSourceEntity(217U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(185U);
    msg.k = 0.20901544579321196;
    msg.m = 0.5016589965039193;
    msg.n = 0.7418510523383228;

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
    msg.setTimeStamp(0.8746807961244506);
    msg.setSource(11126U);
    msg.setSourceEntity(79U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(124U);
    msg.k = 0.38860101450458684;
    msg.m = 0.9690720734857223;
    msg.n = 0.5842632288918321;

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
    msg.setTimeStamp(0.4524611224608658);
    msg.setSource(40782U);
    msg.setSourceEntity(144U);
    msg.setDestination(19644U);
    msg.setDestinationEntity(16U);
    msg.p = 0.25877620693178494;
    msg.i = 0.8150749456180237;
    msg.d = 0.007676043078175376;
    msg.a = 0.8357178345011214;

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
    msg.setTimeStamp(0.8089493152746101);
    msg.setSource(43917U);
    msg.setSourceEntity(60U);
    msg.setDestination(44738U);
    msg.setDestinationEntity(146U);
    msg.p = 0.28485328368497664;
    msg.i = 0.5287175007983768;
    msg.d = 0.939285766996241;
    msg.a = 0.5656848248865185;

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
    msg.setTimeStamp(0.5616426214902535);
    msg.setSource(133U);
    msg.setSourceEntity(13U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(123U);
    msg.p = 0.19818393911589316;
    msg.i = 0.9308622289239261;
    msg.d = 0.4436115665400011;
    msg.a = 0.4040769356574617;

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
    msg.setTimeStamp(0.301424531115162);
    msg.setSource(6461U);
    msg.setSourceEntity(43U);
    msg.setDestination(6026U);
    msg.setDestinationEntity(252U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.800587225270816);
    msg.setSource(31599U);
    msg.setSourceEntity(208U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(213U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.25496778346476656);
    msg.setSource(30304U);
    msg.setSourceEntity(33U);
    msg.setDestination(43864U);
    msg.setDestinationEntity(153U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.6792144654091975);
    msg.setSource(34609U);
    msg.setSourceEntity(188U);
    msg.setDestination(13172U);
    msg.setDestinationEntity(202U);
    msg.timeout = 63217U;
    msg.lat = 0.425917095811414;
    msg.lon = 0.3797748492691201;
    msg.z = 0.8561423326400819;
    msg.z_units = 73U;
    msg.speed = 0.0761022096335745;
    msg.speed_units = 16U;
    msg.roll = 0.9675447665462716;
    msg.pitch = 0.5563747090618387;
    msg.yaw = 0.4323501404512594;
    msg.custom.assign("SKUJBONLJNPSBKMHJZHNFGPEBWVCSTXZQZCWSEHTDNESRFKMDISOMBSVCXIWYFIWQRANEXPUWOXXJDFRDOKVFDEXGCZKACUTICVPJKBLVJQYFMKFRANZTYRRDEUSMHTJYEDABZWUNLLVKOGZAABWQMRLFITCLGNYDXQHOXPTAZRTWAWIHEHNOBPBYSGUMGGAPRMQAZNYGFDVCXLQMZHQJTRYIULKUQUBPWOFHVUIDYLPTOKC");

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
    msg.setTimeStamp(0.3752742333673106);
    msg.setSource(5326U);
    msg.setSourceEntity(73U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(131U);
    msg.timeout = 5368U;
    msg.lat = 0.7600649055282879;
    msg.lon = 0.22019155963527348;
    msg.z = 0.5259397722029423;
    msg.z_units = 61U;
    msg.speed = 0.62243712444128;
    msg.speed_units = 249U;
    msg.roll = 0.25165776895764014;
    msg.pitch = 0.7701374988498905;
    msg.yaw = 0.9448645029427573;
    msg.custom.assign("YZUNKQGSFWJBBAVRDRUYKTGDSGEIFFVOC");

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
    msg.setTimeStamp(0.6083953907889598);
    msg.setSource(26905U);
    msg.setSourceEntity(224U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(202U);
    msg.timeout = 36666U;
    msg.lat = 0.787603879725084;
    msg.lon = 0.7964638919532349;
    msg.z = 0.1397057671015659;
    msg.z_units = 137U;
    msg.speed = 0.8524320951116215;
    msg.speed_units = 72U;
    msg.roll = 0.21133679350961643;
    msg.pitch = 0.9089464225222339;
    msg.yaw = 0.8279231125331294;
    msg.custom.assign("TDROHNBWXHSYXCZPTJYXFSMDEUPG");

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
    msg.setTimeStamp(0.35257580443213854);
    msg.setSource(40931U);
    msg.setSourceEntity(0U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(214U);
    msg.timeout = 45047U;
    msg.lat = 0.15468271789783172;
    msg.lon = 0.5918960145011529;
    msg.z = 0.22662670879638624;
    msg.z_units = 221U;
    msg.speed = 0.7914732788733306;
    msg.speed_units = 66U;
    msg.duration = 42935U;
    msg.radius = 0.9123399189144621;
    msg.flags = 193U;
    msg.custom.assign("TLCVWJSGQXVGZIUQDMWPALMWLSVFEQXUUKPMSQLLJFKOOODIHYXZOBCGTVKJHRRWIUVDQYEAYTNNMYPNAMINBVMPNFDSCAPVSWDTKFMQGHEBRVHXFHMJUZOISHZHQPFGEAHKRIBELASTZLFNUJIWUWOBNBQMXIINAGFLLBUQBGQCNYEEXKTKZAPXZPETKVPYCXDJCWCILSRZZSMJJJWUUBDTAOVOR");

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
    msg.setTimeStamp(0.9055996167694157);
    msg.setSource(6499U);
    msg.setSourceEntity(103U);
    msg.setDestination(30928U);
    msg.setDestinationEntity(137U);
    msg.timeout = 19349U;
    msg.lat = 0.7732633808406038;
    msg.lon = 0.7266742096794295;
    msg.z = 0.04528937519760179;
    msg.z_units = 107U;
    msg.speed = 0.5776841056353376;
    msg.speed_units = 195U;
    msg.duration = 23970U;
    msg.radius = 0.4274642898336063;
    msg.flags = 190U;
    msg.custom.assign("VVUGEJMSIRTQLGLIVFXFSOFJVAPAPLDIUYXABUWCOPWONTJRSFHZFMXRNJEBVHMDQZVVKEGNQMZZTEABHJHQJCDWOIDYPZXPATNYQVSOTIMVEOCELKGTPPSALYUXMJWSUKPEACXVUUUTFFWYILBDOXKGNSDBJKPZSBNKHYIGGXDWHCJSHKEKZTEBITCAIQJHRZLKCPMGWRHMUMOCDLXADYR");

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
    msg.setTimeStamp(0.9054810861547898);
    msg.setSource(50713U);
    msg.setSourceEntity(144U);
    msg.setDestination(11701U);
    msg.setDestinationEntity(84U);
    msg.timeout = 37725U;
    msg.lat = 0.7220111702614943;
    msg.lon = 0.3982984355403778;
    msg.z = 0.05642613610344416;
    msg.z_units = 180U;
    msg.speed = 0.22167513591652288;
    msg.speed_units = 168U;
    msg.duration = 59381U;
    msg.radius = 0.33961608253406317;
    msg.flags = 127U;
    msg.custom.assign("WUPQEMOUNADTHZEHDXLCEGYHCIVLVICPDPIQBYDZPMONKLYVXOKMNHOWZVQDBUZBAWOWYEHVZXLCLKAHXIMKMBBFXSFXTADGTKTGPODZYJUSWNVDQOQXBTGUEYTLCKHNNGVOPBRWITMJQAXZNYJHUASJWECLRQDYQCAOBMDGRTILJKTXFYJFARSWBZFSEANERXIFUHWUHJGFZSTQJMOIANCLPRSMKGUUENQVPCPIRWVVK");

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
    msg.setTimeStamp(0.8677018016762649);
    msg.setSource(26132U);
    msg.setSourceEntity(203U);
    msg.setDestination(35003U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("NEDYERZFCEJVBJMQOCBDKGSIJATZLOFAHFVAXWTMZOWLQDRXHVBJCNOYHTQWWAXKAHRSGAHLQKDVRXDZLPMKSEBDJLHUUMNSIDFUXTQKIOZRPMUWCBUJYPEWXMSQYDHURIBNLIBNJRICYZSGTPIDLPKYRGOQCLNHGLFNCMZHVU");

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
    msg.setTimeStamp(0.2975463044484984);
    msg.setSource(17828U);
    msg.setSourceEntity(45U);
    msg.setDestination(63599U);
    msg.setDestinationEntity(55U);
    msg.custom.assign("UROMTMOCLBOISSJMPBJJDQFWAFOFOMOBQKCZZNHKPKEAZSPBGWJLDFNKUFYEWBRXTIPANLPRAMJGTZQDZGHMIJPIXDYTEINBTWXNKNOARSRUMDUQGBQRFAYYIXZDUNWLMAPCYHIQECQZOYLUOCKHAPBLGTJSXSXRBVQXXCIKUYCHYFVJSUZTFHIYTGWLUVWVTUTMKDGGLDJNRDR");

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
    msg.setTimeStamp(0.054999607664631855);
    msg.setSource(50436U);
    msg.setSourceEntity(65U);
    msg.setDestination(31331U);
    msg.setDestinationEntity(120U);
    msg.custom.assign("PTYACPPAKHATWFXJFMMGSVPFRKDDMABDKNFUBWGQYIYWGPJISCIMVZLRVCGHUCNOYKLHOQGXBAVDWICBAJSRFEMWXIKODVSLDLZKNBTKDULTGCIIQHURMAQAHZHMZJAAEPTSRBFDCQVLFSNQZZWQFOSEMBQRLBYVOUXYUZHLUPHXOBRYUWTJ");

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
    msg.setTimeStamp(0.3628272273276446);
    msg.setSource(55586U);
    msg.setSourceEntity(234U);
    msg.setDestination(171U);
    msg.setDestinationEntity(119U);
    msg.timeout = 7263U;
    msg.lat = 0.08250755807536225;
    msg.lon = 0.39881614743265503;
    msg.z = 0.9857084038806875;
    msg.z_units = 53U;
    msg.duration = 27087U;
    msg.speed = 0.6659847308810549;
    msg.speed_units = 48U;
    msg.type = 38U;
    msg.radius = 0.3809356760401389;
    msg.length = 0.6708927283425001;
    msg.bearing = 0.9941983025030688;
    msg.direction = 13U;
    msg.custom.assign("BJNFJIQTJXBMKRLWOWDYAROKJSECGFMNRAZQWXEZEGXCKIXKMMVUIKLTHMAPOZVXYNMXCDDYUUSILTAYEIHFVCPLCBWJIYNNVDARGXVWRSSEWOPQLCNHSTYFKYAJGNIAHVDJHMGDPGZXDOKBQRSBJQQQTFJCMEBSKYN");

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
    msg.setTimeStamp(0.47086298240401603);
    msg.setSource(58132U);
    msg.setSourceEntity(5U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(163U);
    msg.timeout = 1142U;
    msg.lat = 0.2274717243053792;
    msg.lon = 0.0779197428433549;
    msg.z = 0.4282865646780901;
    msg.z_units = 108U;
    msg.duration = 54398U;
    msg.speed = 0.5942341977794289;
    msg.speed_units = 128U;
    msg.type = 106U;
    msg.radius = 0.45204258864869695;
    msg.length = 0.2818965498666054;
    msg.bearing = 0.6589878271885649;
    msg.direction = 117U;
    msg.custom.assign("EIJRZOUMCTTQRPUWPWGQXSNGXORHJZZXLTEZSMITHEXBTWQFNNDCKWEQAVODPXPUHHIOBNMZPKKWYELVLRQDKIHVAHPYAVOINFEACGUOJFKVINBQJFBCSUKEQJMMFBCAQHBXBPKFFBCINJSZJIKYGSJXRGZOEPPLHLXLYVWWMOP");

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
    msg.setTimeStamp(0.658157440540522);
    msg.setSource(44722U);
    msg.setSourceEntity(38U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(233U);
    msg.timeout = 61247U;
    msg.lat = 0.19076214625718335;
    msg.lon = 0.30236722906794355;
    msg.z = 0.31396479688616186;
    msg.z_units = 218U;
    msg.duration = 45940U;
    msg.speed = 0.0661955406117517;
    msg.speed_units = 15U;
    msg.type = 106U;
    msg.radius = 0.3708916320845105;
    msg.length = 0.05877052921242465;
    msg.bearing = 0.04536257462267945;
    msg.direction = 246U;
    msg.custom.assign("CHBNWEDFLSYINRRLETTIKJGDQPEXJZQMMAHKWHDIUFURXZBSHRDGZJKAPAVZLXKQWLADEK");

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
    msg.setTimeStamp(0.9866523453792719);
    msg.setSource(36323U);
    msg.setSourceEntity(127U);
    msg.setDestination(53377U);
    msg.setDestinationEntity(148U);
    msg.duration = 51407U;
    msg.custom.assign("OVOJHCVVXRTKCFJHOKTCOJU");

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
    msg.setTimeStamp(0.7181735489731382);
    msg.setSource(20039U);
    msg.setSourceEntity(106U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(9U);
    msg.duration = 14779U;
    msg.custom.assign("JKVVZIVRJZSXRILWARMWZLTZKBP");

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
    msg.setTimeStamp(0.8567185142641219);
    msg.setSource(33677U);
    msg.setSourceEntity(97U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(2U);
    msg.duration = 62763U;
    msg.custom.assign("YSDUAISZFVHVAVSBKXEOVGVMHMIBSID");

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
    msg.setTimeStamp(0.5973445091933346);
    msg.setSource(20812U);
    msg.setSourceEntity(128U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(140U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9805689336850971;
    msg.control.set(tmp_msg_0);
    msg.duration = 21604U;
    msg.custom.assign("FIIDORAPMHXRABOYLYKWNGS");

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
    msg.setTimeStamp(0.32174432550086907);
    msg.setSource(59890U);
    msg.setSourceEntity(221U);
    msg.setDestination(7621U);
    msg.setDestinationEntity(102U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.11978751793733666;
    tmp_msg_0.speed_units = 240U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20736U;
    msg.custom.assign("JMOQKVPNKTUDLUQOATCVFNZQPARDUOWAKJRTBQUBRPPRDVIEUYYESWLTMIRNTGFYLXXBCPXGQMYMFYXVIWASNJDVPLWLBDHRMWMPBZNAAHCAKHSCZFSZOPHQXDQMGBKELICNMOHGWHNZPWESDCEECTZGGWAJDKXGBBCKYYCTVIALVKVZFNUGULXNNWMRJSZIXLEQGRFWOBLJOGFSSSHJTMFDJAPOHBXVCEIKR");

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
    msg.setTimeStamp(0.2171265233470716);
    msg.setSource(64690U);
    msg.setSourceEntity(225U);
    msg.setDestination(10894U);
    msg.setDestinationEntity(172U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.09395503903044644;
    msg.control.set(tmp_msg_0);
    msg.duration = 29248U;
    msg.custom.assign("WKHPCOVPLKDFEMHJTBFCXIHTMYIGPJSVGACLEVGVZYWSYINJLQXUETDDVSVMZYCUKPDFUKYZK");

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
    msg.setTimeStamp(0.005951838451392022);
    msg.setSource(16778U);
    msg.setSourceEntity(48U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(12U);
    msg.timeout = 4047U;
    msg.lat = 0.4371942088036336;
    msg.lon = 0.7269394750640956;
    msg.z = 0.5321803847601035;
    msg.z_units = 22U;
    msg.speed = 0.7027389725657402;
    msg.speed_units = 96U;
    msg.bearing = 0.0038903003457598784;
    msg.cross_angle = 0.07233932504948615;
    msg.width = 0.6978452135029571;
    msg.length = 0.09748144974515771;
    msg.hstep = 0.4339607895258728;
    msg.coff = 239U;
    msg.alternation = 95U;
    msg.flags = 146U;
    msg.custom.assign("KBUDTUYYGKQHSJFCFRKJXJMEUOVTVZRMKRLGBAVDHXHBYSWZKFDLEMGGFOIIBEYRZVDNGTIBCEALCAWJUSRHHIRVDQJNULKXNHOAMOWXKOXBATAMILDUJHWBBOQJZSYIVNCCNFFBPWVMYLVEPNNMUWASOQKVSFUCGWPLZTGLFMMPWTZZZPSNPPQPTYKQOEZVSEGIYDPXPUFCRSEYBNGFJNTJORUWIDIRIRQWLXGCQHXAMTOCAZYXCAHEQKX");

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
    msg.setTimeStamp(0.13386585869266898);
    msg.setSource(58199U);
    msg.setSourceEntity(198U);
    msg.setDestination(1798U);
    msg.setDestinationEntity(253U);
    msg.timeout = 27353U;
    msg.lat = 0.9039491930142931;
    msg.lon = 0.8324795143267413;
    msg.z = 0.40806765292323977;
    msg.z_units = 129U;
    msg.speed = 0.9892918346635888;
    msg.speed_units = 1U;
    msg.bearing = 0.5810518138595028;
    msg.cross_angle = 0.8398911922270912;
    msg.width = 0.8582401832043527;
    msg.length = 0.9952717743922584;
    msg.hstep = 0.09511718660127544;
    msg.coff = 51U;
    msg.alternation = 161U;
    msg.flags = 172U;
    msg.custom.assign("QUYQJSGEAFDIMFZWTLOGHRMMKXSAFIHDMTYXSERIYBWRDKCKGPUUQFEAOMWMYCTKGOZKKQJIQFJLRALPCSVKCETERXDJFMMZV");

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
    msg.setTimeStamp(0.07684841700436229);
    msg.setSource(6317U);
    msg.setSourceEntity(111U);
    msg.setDestination(14849U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1120U;
    msg.lat = 0.21843729251906507;
    msg.lon = 0.9623589950287299;
    msg.z = 0.8196386528190784;
    msg.z_units = 204U;
    msg.speed = 0.11526199371218415;
    msg.speed_units = 248U;
    msg.bearing = 0.11583532090998871;
    msg.cross_angle = 0.6862714150856793;
    msg.width = 0.09951579895318408;
    msg.length = 0.5737526341511283;
    msg.hstep = 0.46201349550870685;
    msg.coff = 249U;
    msg.alternation = 195U;
    msg.flags = 143U;
    msg.custom.assign("MKEUTBUXQDAWSYHIOWVZPHGQODCGZEWIYMMPFZNVRZCEBBGNYBKOIEWQBJPGYINPYKFHSANPXOUCZYNKHOMYOVJTFFTHRMTWYLREBBQLSZLUXPQQOSOXUGQFVMMRRTDGBDIMFMTRWLLJCDZ");

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
    msg.setTimeStamp(0.5242252056076119);
    msg.setSource(30265U);
    msg.setSourceEntity(11U);
    msg.setDestination(48793U);
    msg.setDestinationEntity(113U);
    msg.timeout = 37589U;
    msg.lat = 0.11836913035840613;
    msg.lon = 0.9545186713888455;
    msg.z = 0.24213442428721899;
    msg.z_units = 39U;
    msg.speed = 0.986983385948909;
    msg.speed_units = 74U;
    msg.custom.assign("WWUCVTTRPKWTGMLFMDTEUFVTEVQYPUFYGGHBODOZWZFCTXJWPRCYHFSTFCWERIGFAEJXVJCPSSFNJXKMZXEYNNAQUDUUJGMJBEKXXCYMOHCOEFJSMUGDRSKQWWIUQOZGHISLUIBNDKLLDBLLIBLVBWHELRQSSYGGNZYWRPFIBCLKZDQEPDVZRXOKAAVIOC");

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
    msg.setTimeStamp(0.8618516382349742);
    msg.setSource(34948U);
    msg.setSourceEntity(127U);
    msg.setDestination(12465U);
    msg.setDestinationEntity(192U);
    msg.timeout = 25382U;
    msg.lat = 0.14527268807827542;
    msg.lon = 0.19871849400665864;
    msg.z = 0.42540515019518954;
    msg.z_units = 214U;
    msg.speed = 0.5241351766846518;
    msg.speed_units = 122U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.10704077565925096;
    tmp_msg_0.y = 0.6770893198004118;
    tmp_msg_0.z = 0.4687906492407775;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JJLUTYNUAQKXWSYVJABPXDNTRRNPKI");

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
    msg.setTimeStamp(0.8914192783068973);
    msg.setSource(21926U);
    msg.setSourceEntity(91U);
    msg.setDestination(22469U);
    msg.setDestinationEntity(108U);
    msg.timeout = 60840U;
    msg.lat = 0.9654970466273634;
    msg.lon = 0.20445188499502398;
    msg.z = 0.730879833046058;
    msg.z_units = 186U;
    msg.speed = 0.9313629679781783;
    msg.speed_units = 160U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.37587668954769915;
    tmp_msg_0.y = 0.5814837638761994;
    tmp_msg_0.z = 0.649478692566766;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HMGZXUSSRVRDJKMJXUQJMUSVHTYDBBWKCXWOAJBFPSWFXLQOTKHWOTKBCUVHGZPJRFEGGBEECIDJVHARRVUSGWILHQZICXNLZBPLEWFVUPNOSZRAAEUHMUIAFIIQZOXQWCMLVLFDEKIRGCZVNHLNJTQPTAFDJKTBMBPUHSBGCSTSQCNXAJYZMIXTNYFODCQUPMRCRMWLDPOEFNKPNAANNQMZTPYABKZGRDJXEYOIWEHEYLIOFSTODYVVKQYWKY");

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
    msg.setTimeStamp(0.7553266125185853);
    msg.setSource(56605U);
    msg.setSourceEntity(56U);
    msg.setDestination(16882U);
    msg.setDestinationEntity(102U);
    msg.x = 0.4471805870361222;
    msg.y = 0.03455871937835986;
    msg.z = 0.7479969630328432;

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
    msg.setTimeStamp(0.6983618427583523);
    msg.setSource(36661U);
    msg.setSourceEntity(27U);
    msg.setDestination(44186U);
    msg.setDestinationEntity(77U);
    msg.x = 0.7192255314533947;
    msg.y = 0.10034062563675683;
    msg.z = 0.5698132699402679;

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
    msg.setTimeStamp(0.9507555673585603);
    msg.setSource(57895U);
    msg.setSourceEntity(244U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(61U);
    msg.x = 0.8060930248157602;
    msg.y = 0.4165024096987924;
    msg.z = 0.9447569057926188;

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
    msg.setTimeStamp(0.6883417733372132);
    msg.setSource(55530U);
    msg.setSourceEntity(74U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(129U);
    msg.timeout = 33347U;
    msg.lat = 0.8053935062082169;
    msg.lon = 0.1960422454959716;
    msg.z = 0.09118262236771568;
    msg.z_units = 164U;
    msg.amplitude = 0.2289753069814231;
    msg.pitch = 0.43128456009078064;
    msg.speed = 0.18675612865675206;
    msg.speed_units = 251U;
    msg.custom.assign("TCEVCLQUDDOGMUNDZWXTRJRFEOGYOHQXQCVNWGVUXPXUEZOVPRVLIIPJKBJFKPTQLXAFZEBHOSKYFKWCDWSRSMWKDSEEMDJZMYYIPXLSFFSAACGCHSTQRPTXCKPPMHAPBREIZFPSOEFWIKZLCVHHQNVLKWOXYTATVNYGQCDGQJUJNZNQGOHQAVMKUZRSWJYRJMMBY");

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
    msg.setTimeStamp(0.2746135032943662);
    msg.setSource(41847U);
    msg.setSourceEntity(254U);
    msg.setDestination(10161U);
    msg.setDestinationEntity(85U);
    msg.timeout = 15493U;
    msg.lat = 0.18521413844447743;
    msg.lon = 0.48386881065129117;
    msg.z = 0.9812130382416157;
    msg.z_units = 217U;
    msg.amplitude = 0.0867186363183291;
    msg.pitch = 0.8686034189839538;
    msg.speed = 0.847485129406116;
    msg.speed_units = 150U;
    msg.custom.assign("YZJAHKRQCPFGQMGAJHNVRFUSREXYKUSXNOULOIYTIMYXSZIICPFCGMKCMTLXBRZXSERISVHPGUUFVPBDIDZOOQJVBRBXTXUFTSNTKOVDCGEMDBIZQAJNVBAFBGPTYLKMQJODLBKMJOEZFPDNCUVZWYNUPYSEYTDIOKRULQWEAQRQKTHHGJIEHWLZRTYWADBJVSYVELNWCHJLLHENXDWTMXFWKNWPBFEDMAAHFRSWCCHQGONZCMUPGKA");

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
    msg.setTimeStamp(0.1453083470369403);
    msg.setSource(57726U);
    msg.setSourceEntity(4U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(93U);
    msg.timeout = 47006U;
    msg.lat = 0.7035917148932056;
    msg.lon = 0.946413335057116;
    msg.z = 0.1474319554646465;
    msg.z_units = 201U;
    msg.amplitude = 0.5578831540469897;
    msg.pitch = 0.534392789907108;
    msg.speed = 0.3922130381307899;
    msg.speed_units = 32U;
    msg.custom.assign("OEPBOQGKYKLXDDSJQEQXGFMQDDQLUVOOPQZAAXZSNBWNOSILSMYIYCBECIRHRVFTAYPRJJIHDQSIMBODSGADCUCMDJOMALPZTMGLFVTKBEOGNXEFBIFPMTUJBUUQVEVVKFFVTZOGNEPLPUKTTJKDZHBBZJYNSHAWEL");

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
    msg.setTimeStamp(0.9158840350528247);
    msg.setSource(34059U);
    msg.setSourceEntity(102U);
    msg.setDestination(64677U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.6763323345719096);
    msg.setSource(5371U);
    msg.setSourceEntity(145U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.7581570376492935);
    msg.setSource(3205U);
    msg.setSourceEntity(47U);
    msg.setDestination(33181U);
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
    msg.setTimeStamp(0.06301249656535035);
    msg.setSource(41929U);
    msg.setSourceEntity(231U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.0012807856680343566;
    msg.lon = 0.32464698282159465;
    msg.z = 0.8189024962337532;
    msg.z_units = 194U;
    msg.radius = 0.7030241975453394;
    msg.duration = 48506U;
    msg.speed = 0.6756327592217313;
    msg.speed_units = 233U;
    msg.custom.assign("STWSWHDVCWICZTNPJLUGQLLHEZGAINVGXRUCSJMFZIQLEBDPQHMZDQOGWTVOERBVHBCTINFXY");

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
    msg.setTimeStamp(0.12328402710499664);
    msg.setSource(58331U);
    msg.setSourceEntity(173U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.32848335015677643;
    msg.lon = 0.7224839256683192;
    msg.z = 0.9264646883772076;
    msg.z_units = 130U;
    msg.radius = 0.5755528112540386;
    msg.duration = 19452U;
    msg.speed = 0.7859779989408988;
    msg.speed_units = 19U;
    msg.custom.assign("EZJWYAWRIOWXESIZFEAYGQSMAPTAWSVGKFZXZJRBNEGKHQKVNPJCGRASODLPRNEULUIKMHVZWIOKGCDXBZUDUMLBYDVDTCEGVENDALHWMUMOH");

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
    msg.setTimeStamp(0.5940653706411593);
    msg.setSource(38565U);
    msg.setSourceEntity(213U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.6101373096555681;
    msg.lon = 0.07089194473701499;
    msg.z = 0.7702544655682918;
    msg.z_units = 165U;
    msg.radius = 0.6390812765374917;
    msg.duration = 17723U;
    msg.speed = 0.28891172598463;
    msg.speed_units = 219U;
    msg.custom.assign("VFFCLVUCPGRHBXMHSQMWKNPJIYSDZSLRKPTNTEQWGYRAMWKLOJIDVSNRPKVRKQRGCJEXWDVNJQETNLGYMZBZABTTGSORCAIAUGDOHELFUVUZQHDSVMYCEQKAPEZIYCCKJZSOGBDWOAJFTUWTCQAUYEBWAZXCZXPYIMMFOMYNAWNUXTYOOVJRUEHENXYFPJGKIDNKOGUEHCLRIVJDSSPDGHWDQZIUXQAHBVBWBFBQOLTHMILIJZSTFPXLXBKM");

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
    msg.setTimeStamp(0.5489281793919693);
    msg.setSource(11422U);
    msg.setSourceEntity(30U);
    msg.setDestination(35074U);
    msg.setDestinationEntity(165U);
    msg.timeout = 17933U;
    msg.flags = 18U;
    msg.lat = 0.3884871565059743;
    msg.lon = 0.5209061253809781;
    msg.start_z = 0.5737233395349077;
    msg.start_z_units = 20U;
    msg.end_z = 0.01442057403942476;
    msg.end_z_units = 221U;
    msg.radius = 0.3386048419628518;
    msg.speed = 0.7075369432359786;
    msg.speed_units = 29U;
    msg.custom.assign("MYRWIQTIMLAEWSCRBFFGQKLO");

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
    msg.setTimeStamp(0.687050224027818);
    msg.setSource(32510U);
    msg.setSourceEntity(252U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(90U);
    msg.timeout = 1187U;
    msg.flags = 119U;
    msg.lat = 0.9884300654685159;
    msg.lon = 0.24839086993846182;
    msg.start_z = 0.41021447650815746;
    msg.start_z_units = 2U;
    msg.end_z = 0.592857192132914;
    msg.end_z_units = 218U;
    msg.radius = 0.44477057114397256;
    msg.speed = 0.3828169662160473;
    msg.speed_units = 212U;
    msg.custom.assign("LXJDKPSRJLPXCTUEOCPUAYMAJHEWTVDWDMRULKKCKQLAGWGZMEFPZCHTZAFFYSXVAFAJQUMIQBJYVYQWDPBMKUEZHIIKABRRJLGMGOYEDORKVPUWGOVWZFTCXDBZGYHQEHINGMVPVNYQKHQMG");

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
    msg.setTimeStamp(0.5986049417391713);
    msg.setSource(34803U);
    msg.setSourceEntity(9U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(8U);
    msg.timeout = 4717U;
    msg.flags = 79U;
    msg.lat = 0.32833892184048863;
    msg.lon = 0.35447307519535476;
    msg.start_z = 0.7998776602317785;
    msg.start_z_units = 159U;
    msg.end_z = 0.09672611281421883;
    msg.end_z_units = 120U;
    msg.radius = 0.31521392795230474;
    msg.speed = 0.22416322893121254;
    msg.speed_units = 92U;
    msg.custom.assign("HQIVGLOUQXYZUFCNKGHAQHNBVBAJDIEVJWVXFEOJATMVEXGLPQNPUHPKSWQQHVMCXEPIRKRWEWMNOVWZSCANPBJZQZMLILCKSSMMVTJKHYYLGHJSCEZUIZWKRBWBXYFYDGTPNPZMABEJ");

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
    msg.setTimeStamp(0.8491281537207783);
    msg.setSource(22656U);
    msg.setSourceEntity(77U);
    msg.setDestination(55250U);
    msg.setDestinationEntity(5U);
    msg.timeout = 44684U;
    msg.lat = 0.13601073686906684;
    msg.lon = 0.7421355896154931;
    msg.z = 0.5673606389880631;
    msg.z_units = 165U;
    msg.speed = 0.46538548236889277;
    msg.speed_units = 92U;
    msg.custom.assign("KJVNMMWZQNQHFVXZOVGGMYQXGXWNIFMBDQPPXMFICPLKKWBUNJHIHBKQHYKLSONPNPULMEIBXIEDSTZYBLRFQIOPTHWCXKUVIYMFGVNJXAFQCWVMLJFXWLGOHDSJJJZYELERSPRNTCGRPESELWXWDHSZCAAREKCJBXFGZHVHOKALZCOPLKYJTORUTTQUYQECBDDRRZBDTBGQFOACIEBCAEAYPFSTZDVUHSASRUTGIOZ");

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
    msg.setTimeStamp(0.5561856801874662);
    msg.setSource(15671U);
    msg.setSourceEntity(225U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(58U);
    msg.timeout = 59139U;
    msg.lat = 0.4747620878768317;
    msg.lon = 0.12438739363154105;
    msg.z = 0.7966339139202572;
    msg.z_units = 41U;
    msg.speed = 0.380556673300962;
    msg.speed_units = 1U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.18600459603860475;
    tmp_msg_0.y = 0.7557226863177152;
    tmp_msg_0.z = 0.8993574081743549;
    tmp_msg_0.t = 0.11720673911043955;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FKSGZIBVIKUPIVAWCEJJGWNZURYCEGISHMNFQBDUQIWPWAYSKINZHFRFFDJDRFDWKJMNVLEQPMWBLLJOUAONYFSMBALOCSPGAUTHCHOHGTOQPDIMQGCVNRLCKYMRKPQQMDPVLUXGGEMXOMZO");

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
    msg.setTimeStamp(0.6105568871286018);
    msg.setSource(22147U);
    msg.setSourceEntity(241U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(213U);
    msg.timeout = 42490U;
    msg.lat = 0.06052614554350477;
    msg.lon = 0.42060205522866834;
    msg.z = 0.05684543173630974;
    msg.z_units = 177U;
    msg.speed = 0.34340663502493607;
    msg.speed_units = 20U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9424032140884004;
    tmp_msg_0.y = 0.9572076921692126;
    tmp_msg_0.z = 0.5374917373770214;
    tmp_msg_0.t = 0.3611029107036293;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WVYQICWBBJUIEZACAXUZBNXITUPFRKZQFDSDKFRHRXMJAQEHXSXYGIANOLGMVWFNTEDSVZSOUJDSJHUBIZFPVMTYRQVLZGHCGCZUYVKAOLNOPVVOLJYFRSTHWNDBNWZOESMELZZFNAVBYMQQPOGKCANIHJLTDWYNJQCGIMSUOKTCTXGPFYKSYEFKWBPLRHP");

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
    msg.setTimeStamp(0.7753859588441897);
    msg.setSource(11796U);
    msg.setSourceEntity(59U);
    msg.setDestination(15706U);
    msg.setDestinationEntity(67U);
    msg.x = 0.03510500860072885;
    msg.y = 0.5722282124175219;
    msg.z = 0.35533773461561;
    msg.t = 0.321881658832074;

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
    msg.setTimeStamp(0.2883537816328624);
    msg.setSource(32966U);
    msg.setSourceEntity(199U);
    msg.setDestination(5108U);
    msg.setDestinationEntity(17U);
    msg.x = 0.5442229781557965;
    msg.y = 0.6102848369132372;
    msg.z = 0.3425341225800641;
    msg.t = 0.10905992508079765;

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
    msg.setTimeStamp(0.5969198504719151);
    msg.setSource(56184U);
    msg.setSourceEntity(226U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(130U);
    msg.x = 0.002567537300182332;
    msg.y = 0.045423483925806196;
    msg.z = 0.16597805208672822;
    msg.t = 0.31871593836709267;

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
    msg.setTimeStamp(0.6108480763829253);
    msg.setSource(20003U);
    msg.setSourceEntity(144U);
    msg.setDestination(16801U);
    msg.setDestinationEntity(133U);
    msg.timeout = 37912U;
    msg.name.assign("WRQUFCFDGZPCEAXTREIDSZWAKTIOEMRSHUYKQVITXMENSQRWSXVYNFTCRNPDJCHPYYZPPMLDHJDUCJTUSSVWQOXHOGUAJBUYBRBDLLNIMWEPUTOCFUJKKVFZWVMFLPIOAZSLELYFMAZYGMCXJVDIQGHIASCJXZOJQJXKPGKEVPERXAOMOMHKYLXNEBCWATSVGIZKLVHUKBWGGXLRTUWHACANOJQDQGBPZBEH");
    msg.custom.assign("BWAKGXUTJERGKJWAQLUYHFFPIKJLRPWNSSJOUBQUWWCNWYQXRCVZXVPXOBMXMTEPCRUAAKYPKATHDEEUNXBVFGHLAHPUMRCIXDDOPNWYJWRFCVZIYTTWYQKBSRX");

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
    msg.setTimeStamp(0.7802054676387347);
    msg.setSource(42351U);
    msg.setSourceEntity(199U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(5U);
    msg.timeout = 5016U;
    msg.name.assign("LCASLPKNNBBUTWSZVHIWMUAMFOHURNJAVNEGBQCZXSOTMSQJPNSGRVRDERDNKICQSOTQEZSLWGZVYRFZNTHEZMWLLHBQKEHUTJDIKGMMZAVLMLXSVPCEYI");
    msg.custom.assign("VARLMGEGEIDVFQBBUOEFOWLHHCYPLCSBXOVTFEMJITOQMHBCEAMTPSKVYKPJOXJHTRHKGUXIHWJVJRDSWWIBSBVQASHZLGNLJXXLKPSQNSVTCEIRPHASYOXFEJRXEIKZFZGEWHLLTYSQDKXVVQRBMOGWIIDVZRPGQCINYEZRMDPYKINGWNCTLMAKPCAZYLTKUJBUHGJRMZFZUPDCDKUZQQYURAPONUTOWABUFDNAJCNWMSXXFDBQ");

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
    msg.setTimeStamp(0.963437364470009);
    msg.setSource(34143U);
    msg.setSourceEntity(224U);
    msg.setDestination(7695U);
    msg.setDestinationEntity(38U);
    msg.timeout = 15037U;
    msg.name.assign("OWZHTLWAWUOASKCNCZHAUAVUPGJIZEONJIEFWGQYTCKFAYUKXRYLEDFJFGMWIKTSCAPANDVKMXJJHVQDQAD");
    msg.custom.assign("NIYWSQRZGMSFTZYTWGUQJVAJZNNXCBMAJKUIOFGQHFBMMWRCDHMCIYHKQBVIKCXMJOKSPJFJPANYJNWHDORGWNESMPEILJUKZODLLOZTHRSNRKAFOJOACQEATKLZBAKLWMBDGJEXYHOCG");

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
    msg.setTimeStamp(0.5311896896031032);
    msg.setSource(30694U);
    msg.setSourceEntity(112U);
    msg.setDestination(53807U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.684844481777164;
    msg.lon = 0.8688578347189114;
    msg.z = 0.9719477238105783;
    msg.z_units = 138U;
    msg.speed = 0.7149545523456649;
    msg.speed_units = 5U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55812U;
    tmp_msg_0.off_x = 0.5611446602944887;
    tmp_msg_0.off_y = 0.6093253311472532;
    tmp_msg_0.off_z = 0.7577779483028353;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9493320406209411;
    msg.custom.assign("KGMSNIVBQJHXRKRGQGKMLCEUPNZFSAWWDZLPLADDYUKXSPLXJYAOVQHJZMNRVTZXRDVENRABQNPMVSBXLYYXNESBLZEVBYNZWUUWPBYGGHCTLUQYRCCSIQWGFHRTWCFZTQEKHJO");

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
    msg.setTimeStamp(0.9975077750751984);
    msg.setSource(22508U);
    msg.setSourceEntity(26U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.6204127456145756;
    msg.lon = 0.007293986975763556;
    msg.z = 0.31499213395545866;
    msg.z_units = 121U;
    msg.speed = 0.2346526014998489;
    msg.speed_units = 247U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.09335844914574498;
    tmp_msg_0.y = 0.5129793165000293;
    tmp_msg_0.z = 0.4760341802078738;
    tmp_msg_0.t = 0.5441608450587647;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 27112U;
    tmp_msg_1.off_x = 0.03751031647839609;
    tmp_msg_1.off_y = 0.8421446564462047;
    tmp_msg_1.off_z = 0.8713719086346907;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8162266323891033;
    msg.custom.assign("ETLTVGZWQYDWJLOBNPCIGTQRQEJXITYLKFJHXUNYXWOHFQXTKOJSMWLOVZPPCHENBGERREVMIHEDBXCWZUAARABVRTCKISAJDUCZLKJSCTMLXWSRZQPBJWMHSCMLHHQFOGQTAFASLYPSKNMRHUGJFERFGXDAKBVNVUVIKXDTNUONOPESLUUNWMBFTOYSFHQZAVOBZZHGDYFJZKNNWGMICBUDVJKDPMIECDA");

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
    msg.setTimeStamp(0.12066609909450177);
    msg.setSource(54658U);
    msg.setSourceEntity(233U);
    msg.setDestination(145U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.6508583442535969;
    msg.lon = 0.12719819906514773;
    msg.z = 0.4973419681203224;
    msg.z_units = 235U;
    msg.speed = 0.004123562346443732;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5779659466275733;
    tmp_msg_0.y = 0.40912712734632417;
    tmp_msg_0.z = 0.3850235835570165;
    tmp_msg_0.t = 0.6241393567437046;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.014265494182288174;
    msg.custom.assign("JMBOHRGZNXVGSIDKAWHITGIXGYGQUZDBDAQCVDTLAONBMYKKXKZSFWCIOWCRPYPADMTEQJCONTTNDAXERIWSVVUQOVYEZSYUKULFAIHPYMWRDBNDGTURKANDSNLVEZJLMUHVFCPVJAFFJOAOZSRXSURGLJLIQORQFNJLJEOKLKXXRPTTQYPPCOLGIMZMCHI");

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
    msg.setTimeStamp(0.09528355071513661);
    msg.setSource(24242U);
    msg.setSourceEntity(72U);
    msg.setDestination(6840U);
    msg.setDestinationEntity(47U);
    msg.vid = 1961U;
    msg.off_x = 0.5665464186461429;
    msg.off_y = 0.26605683069591435;
    msg.off_z = 0.28778010819277755;

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
    msg.setTimeStamp(0.700193590010145);
    msg.setSource(42464U);
    msg.setSourceEntity(189U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(163U);
    msg.vid = 32829U;
    msg.off_x = 0.6195397431261925;
    msg.off_y = 0.12391859493731372;
    msg.off_z = 0.35050976560114333;

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
    msg.setTimeStamp(0.1241682475164263);
    msg.setSource(54523U);
    msg.setSourceEntity(129U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(45U);
    msg.vid = 23018U;
    msg.off_x = 0.3526598213439518;
    msg.off_y = 0.977179829832096;
    msg.off_z = 0.6437351844937609;

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
    msg.setTimeStamp(0.6052220440184297);
    msg.setSource(3687U);
    msg.setSourceEntity(40U);
    msg.setDestination(6886U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.37599114875066164);
    msg.setSource(25859U);
    msg.setSourceEntity(236U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.6270280744625846);
    msg.setSource(53871U);
    msg.setSourceEntity(236U);
    msg.setDestination(10643U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.9711826821787192);
    msg.setSource(49712U);
    msg.setSourceEntity(173U);
    msg.setDestination(10493U);
    msg.setDestinationEntity(119U);
    msg.mid = 25070U;

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
    msg.setTimeStamp(0.12064201053751744);
    msg.setSource(17024U);
    msg.setSourceEntity(43U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(69U);
    msg.mid = 19698U;

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
    msg.setTimeStamp(0.4993236125144579);
    msg.setSource(43388U);
    msg.setSourceEntity(8U);
    msg.setDestination(47979U);
    msg.setDestinationEntity(212U);
    msg.mid = 2669U;

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
    msg.setTimeStamp(0.9807168023221079);
    msg.setSource(26349U);
    msg.setSourceEntity(231U);
    msg.setDestination(20924U);
    msg.setDestinationEntity(20U);
    msg.state = 133U;
    msg.eta = 42006U;
    msg.info.assign("RIVXUDSHEAFWRDEZOJOHQGAHMQIMPMZNGLDKEWSPYIWXYOMIJIYNNVJBSZHOUFAJTQCILGPIAFLVXLGTKUDGEOWJXHGWNSICDQRVZWYEAJTYCFZZCOBEXLZBTYXGXGBHBNAHPSTJGNWEINTRRDYNAXRSLUFZDNFFUKADVLBJVYKPSSKLUVCFVAMQCTMCIPTWMU");

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
    msg.setTimeStamp(0.29002949896800345);
    msg.setSource(38631U);
    msg.setSourceEntity(184U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(208U);
    msg.state = 25U;
    msg.eta = 58912U;
    msg.info.assign("YWBGEAOGZNTTPB");

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
    msg.setTimeStamp(0.2426222131431316);
    msg.setSource(27874U);
    msg.setSourceEntity(166U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(107U);
    msg.state = 184U;
    msg.eta = 43518U;
    msg.info.assign("OOICMJWJNTWVYNHRPUSLPNIAG");

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
    msg.setTimeStamp(0.002241386466012796);
    msg.setSource(22675U);
    msg.setSourceEntity(251U);
    msg.setDestination(16985U);
    msg.setDestinationEntity(35U);
    msg.system = 37412U;
    msg.duration = 61889U;
    msg.speed = 0.11823790127951217;
    msg.speed_units = 14U;
    msg.x = 0.5661401416430915;
    msg.y = 0.18575070796322768;
    msg.z = 0.7973164023814534;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.4608154762546298);
    msg.setSource(43341U);
    msg.setSourceEntity(117U);
    msg.setDestination(53324U);
    msg.setDestinationEntity(205U);
    msg.system = 57276U;
    msg.duration = 36576U;
    msg.speed = 0.08861024757502878;
    msg.speed_units = 205U;
    msg.x = 0.2167943367309968;
    msg.y = 0.33457804048436446;
    msg.z = 0.24839034621663114;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.797447777347694);
    msg.setSource(4285U);
    msg.setSourceEntity(205U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(83U);
    msg.system = 10160U;
    msg.duration = 10324U;
    msg.speed = 0.07556594970515251;
    msg.speed_units = 80U;
    msg.x = 0.6476812873546105;
    msg.y = 0.328185506406402;
    msg.z = 0.803523717791688;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.07524362006465435);
    msg.setSource(15142U);
    msg.setSourceEntity(194U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.9950386818185707;
    msg.lon = 0.3312759736119819;
    msg.speed = 0.4348830720912362;
    msg.speed_units = 21U;
    msg.duration = 35954U;
    msg.sys_a = 6770U;
    msg.sys_b = 43824U;
    msg.move_threshold = 0.09165256444702596;

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
    msg.setTimeStamp(0.1858289937043196);
    msg.setSource(51513U);
    msg.setSourceEntity(9U);
    msg.setDestination(28029U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.884359833109092;
    msg.lon = 0.4597346153572276;
    msg.speed = 0.9108286111960483;
    msg.speed_units = 236U;
    msg.duration = 39550U;
    msg.sys_a = 3580U;
    msg.sys_b = 34350U;
    msg.move_threshold = 0.9218426836639045;

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
    msg.setTimeStamp(0.0991926714900987);
    msg.setSource(30802U);
    msg.setSourceEntity(72U);
    msg.setDestination(47480U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.682818618253212;
    msg.lon = 0.5474030390621576;
    msg.speed = 0.5453988764433102;
    msg.speed_units = 246U;
    msg.duration = 34599U;
    msg.sys_a = 9527U;
    msg.sys_b = 22426U;
    msg.move_threshold = 0.6409192534340602;

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
    msg.setTimeStamp(0.04825866535483092);
    msg.setSource(9236U);
    msg.setSourceEntity(190U);
    msg.setDestination(31175U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.14837329321643367;
    msg.lon = 0.8661217786440751;
    msg.z = 0.7050732600659539;
    msg.z_units = 77U;
    msg.speed = 0.4850915485815116;
    msg.speed_units = 174U;
    msg.custom.assign("JLBZEBPVTGVDKNLOETNGXJGIZYPTKVFELJDQFDSNUYQYAWXJWPCDDEYCRMJYLPDCVFUEOASZFQNAGTKUUMXAUQPPXMEPAZRIDDKUVCQMAEJHLZNKUONCQSUHFQTHAMQZZMTCWBPABMRLOHYYXIISPJUKOQKTXRIWUKRHROSIKXWSBCFHC");

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
    msg.setTimeStamp(0.9871841805408064);
    msg.setSource(10952U);
    msg.setSourceEntity(235U);
    msg.setDestination(61432U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.35341272799609236;
    msg.lon = 0.20685681015687163;
    msg.z = 0.19078418619507376;
    msg.z_units = 175U;
    msg.speed = 0.8259337961345704;
    msg.speed_units = 208U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5236964466867555;
    tmp_msg_0.lon = 0.46678286455045026;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PKQJHIGTPLYBMOREWJBZAPWSZSYFYWXODJKZJKBQNAMZUFOVCXJVDUBVLLNBIMBTOWRYZXRXGIHFVPKLXNDSAINFVYPTYKQAFLUPSOSHLIZXCBRYVCOBQPNMXKTTOVMEDAHBQQWHPEOULJMDDCGGUHOKYJJEQGETKHSGTCFWMIZDJUVR");

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
    msg.setTimeStamp(0.26459082883169227);
    msg.setSource(3608U);
    msg.setSourceEntity(236U);
    msg.setDestination(32573U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.6052447997876339;
    msg.lon = 0.5880870805527102;
    msg.z = 0.5769465989144402;
    msg.z_units = 111U;
    msg.speed = 0.4169066010645257;
    msg.speed_units = 83U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5151201926471075;
    tmp_msg_0.lon = 0.7451099270688267;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VISNAWZIMFWOULSMFFPOPCUPYYWONXOPMKBYBBJLQQAHBBXTTQNMZ");

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
    msg.setTimeStamp(0.8633600142788447);
    msg.setSource(20813U);
    msg.setSourceEntity(240U);
    msg.setDestination(29441U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.7817829719173831;
    msg.lon = 0.9402360419909049;

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
    msg.setTimeStamp(0.00569451137701793);
    msg.setSource(9772U);
    msg.setSourceEntity(32U);
    msg.setDestination(33942U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.7901238318510759;
    msg.lon = 0.574521529870125;

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
    msg.setTimeStamp(0.21805460484826378);
    msg.setSource(18710U);
    msg.setSourceEntity(134U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.6039286480837012;
    msg.lon = 0.10633963290362225;

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
    msg.setTimeStamp(0.5244457532002189);
    msg.setSource(15970U);
    msg.setSourceEntity(134U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(146U);
    msg.timeout = 35189U;
    msg.lat = 0.7755062228876951;
    msg.lon = 0.758875328715557;
    msg.z = 0.675884553034965;
    msg.z_units = 93U;
    msg.pitch = 0.7463904076372093;
    msg.amplitude = 0.6197210024270299;
    msg.duration = 56430U;
    msg.speed = 0.15949357780384832;
    msg.speed_units = 75U;
    msg.radius = 0.880278739288034;
    msg.direction = 35U;
    msg.custom.assign("RXISELFYXXAQHHGPTUNJQXQMHSYUVHAWRNOPNFZWIGIQODBZAG");

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
    msg.setTimeStamp(0.6093147439685926);
    msg.setSource(6216U);
    msg.setSourceEntity(82U);
    msg.setDestination(16517U);
    msg.setDestinationEntity(180U);
    msg.timeout = 39804U;
    msg.lat = 0.2501587030833815;
    msg.lon = 0.5477636434534225;
    msg.z = 0.04157607364687932;
    msg.z_units = 45U;
    msg.pitch = 0.9186596271103369;
    msg.amplitude = 0.9424135471040433;
    msg.duration = 25179U;
    msg.speed = 0.1691328351517798;
    msg.speed_units = 51U;
    msg.radius = 0.38665980673018996;
    msg.direction = 166U;
    msg.custom.assign("FBJJBUYUNMEJNMIOSCBWEWXNOSGFUHPFVOAGQTOXKACLPCXVLWMZCAVJJGKTPKBFIZOJOJSZAAZKKMBBGBEWLLQLWXMHDCSCGLCDNGGYSZRNRZCKBL");

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
    msg.setTimeStamp(0.7546605033932606);
    msg.setSource(62928U);
    msg.setSourceEntity(43U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(229U);
    msg.timeout = 45850U;
    msg.lat = 0.42205233101453243;
    msg.lon = 0.36989703482611336;
    msg.z = 0.8705107127049333;
    msg.z_units = 31U;
    msg.pitch = 0.1420422833297318;
    msg.amplitude = 0.9258107282529606;
    msg.duration = 40456U;
    msg.speed = 0.2138438904626031;
    msg.speed_units = 108U;
    msg.radius = 0.10476129034352921;
    msg.direction = 1U;
    msg.custom.assign("EMPUHSWPOOTAISKNXYGSCLFEGUBHKFBGSNXUBUUUXGXMNPHEYDKAXFYVAXSDFSLPHTDOPLYTMMWNDALEQETWYGQACGCPSDZZBMXKRTJTFVYRLHTHJIAZCNVNFUWIQVVWKBMZJHCXZMWHKDJLNTSRQUSYKVZKBJIAHDJZZNCQYZFLODGQGJEGYJJNQOOGNPQTZLAB");

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
    msg.setTimeStamp(0.33078555665107023);
    msg.setSource(53252U);
    msg.setSourceEntity(172U);
    msg.setDestination(53608U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("JNXQGFZYUALOPABXOWBFSHGKGSQYTLUULJTEVWEQCSDEARPDMPRHWJRVJFAIPMAKQMNEYB");
    msg.reference_frame = 146U;
    msg.custom.assign("GIBMOEPRXOLGVKXIAPNMXXTFOECZOIJRICDQFSUFBRPGJHYBQXARCJIVCFKUKTMIGTQCLBWQJWPDSZTDXQTVMTVMBGACHLAEBGAWNSBXJFZPEGJDXGANLYWGUQZQSVWTBBHYVWEKUTLJVESSLRSJWJFRCMHZWSKXYNMNKHNONXHTWLUZECEUYGIBFUPQZDHVIRTEDASDCKYYMHLFKZIRAUHMRAVKUPZEDYOYLNCAQUOLKVPOQOPJPFFDNISWZ");

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
    msg.setTimeStamp(0.5197657586217874);
    msg.setSource(1001U);
    msg.setSourceEntity(246U);
    msg.setDestination(39584U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("BYWIKYHBUZLDADAVFPFKRCEKJYHYFJGAYCXWILESDZGZMZSBNHUJTNQVMPCFHVRKOVYZDZGECSKRLTHATQTOHCWIORDVRJTQGQEZNUMRGRVVSBUKBCHXQDNPDRWELDTTJQNEQYEMRIEGAIBXEIGKFBWGFOVVEUUJXZFWDKFYKQUMOCGZMPSAFLXTTNQHSWUYBNLPIANRIYMXXPJWOVNXCIAPXLLLHOPGWIOPUMCBSUSJNOQ");
    msg.reference_frame = 103U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6613U;
    tmp_msg_0.off_x = 0.3654177144509059;
    tmp_msg_0.off_y = 0.01637570492699625;
    tmp_msg_0.off_z = 0.7304018814274019;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HXIIZNUULDTCJODQTIESJFIEGUQGZWMCYSNMDYBRRVJFSANWCACEJPXGKHFQPJRPAWPKNHQBSYRXUJKNEQBEBBLLZOALWUZCLQHDPHFXATZGDLGMXVRGNDYWSGRZUGCTHBMPOAMVYGGDTBTJISWRZMXAZFLONFVJOUSTBYPYNKFBEMLWTSWVSCIKZVTERRSXUIXQEVNPNPAOIKKHJEKVIOATDHFWOLDPYKHUMYOXZHCCYOIRQJAQFLQWBMX");

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
    msg.setTimeStamp(0.5487199579815661);
    msg.setSource(7121U);
    msg.setSourceEntity(14U);
    msg.setDestination(25238U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("UAMUZCOMNERFYPJUZGSGFWDOXYMPVZHVUVHPZFDMSHTIBNGAMXBXTJTLYHQTLNOCXBDZJNFMIEGYBKGSYIXPRWQXYIWWVGSSOWONBRCCACAQLAOLSAJTPRTSPNCKRVFPZRUM");
    msg.reference_frame = 176U;
    msg.custom.assign("OYTAXUQGGLCPNCDIUFSFFXSUPDJTEZALMDUPNSTKRTSFGWSEDCHHXZJGAGQKXLHCJQITZKTYVZZAYUPYFACPJIBYHFCOVUIMVCZOJQZUZZRAAWMXBXAIXHIUVNQYIJOWXDBOCYMNVVYBEQRSSXVEGEDRBLMDXIWPSACHQWMLMGRWJNHJLVFLGVPPTEISKFCQYRTLWQNEOOUMEKRTKJWDNBITWMDBBKNFKMVLFJGHWDS");

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
    msg.setTimeStamp(0.16495870023111603);
    msg.setSource(10775U);
    msg.setSourceEntity(144U);
    msg.setDestination(6434U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("QMFSLFIVMMLFVOLEHBCNRJBVFJFZABJI");
    msg.formation_name.assign("LJRBQQYWCBRTYDWSEIGTHEVPFDTQRWABOEUXSDNMZEIXLSXLJIAST");
    msg.plan_id.assign("TUAMCPHVSLTTFHNHLXPQVHNRVFLAAQWGHTXIZTSKZYFPGIEVQKCBOSROMMIQRBCSBXIJQWROXFYVSDTFZUWCYMWBEKKADLAUBWPWDJTLEMXKDGDOKGACKUTDJOOUMFJMGIVYZBTBCMJUZWYGSKYLYCXOINJRRRIACQLKQDD");
    msg.description.assign("RKKEOXPWILOKDYUAIIOZQASVXCDMYTQRBACUQZNKQYMDIXORIUPJSPJYLVXPVDRFTENQRKRFGFUMIKKXSZUCNWITGHVUKQWMGEGQWWEGB");
    msg.leader_speed = 0.8824356422012651;
    msg.leader_bank_lim = 0.36889212090436896;
    msg.pos_sim_err_lim = 0.7663635434407604;
    msg.pos_sim_err_wrn = 0.512778148161885;
    msg.pos_sim_err_timeout = 32263U;
    msg.converg_max = 0.958660190313168;
    msg.converg_timeout = 14095U;
    msg.comms_timeout = 40466U;
    msg.turb_lim = 0.9565926783042887;
    msg.custom.assign("UKNQFHMOBQHBNXVHDXLTFGAGKVIHUDJASMWWYBKNPSVILEIFGZIOOWLAVKYGWKSOCCKCNJQSMMFRHDBVOTUUQHDJNJMRPBDEDFXYTCCFYFBYYCHZRGCLWSJNSALLLJVXPPZZQTKZAWFVIREZMUIREKCXNVOMOGYXAZUMUNLWGKSIAQQMDEFNSTOBLCWJV");

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
    msg.setTimeStamp(0.5050623843730161);
    msg.setSource(47749U);
    msg.setSourceEntity(179U);
    msg.setDestination(28190U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("XWBPFBORFENQPZPEDHBVCYEWAIITSDTCHKBUVLYKMKJEQZVAZGWQHLMHRHTITCTGUUSWPNSDSLYPRJKNLVIDONQHJBJUVIXQBLFOXGWMGADMVXUNMVSJONCPNAOPXOUPGLWURSUHQFACSOU");
    msg.formation_name.assign("FGNJBRYOYGGOPKHNSGRRSGLDAOLMIOBYZZJJLVDPULPGJHSWGDATFDZCHTXZDOYJKQYXKENKPRVLMWFOEMXBJINTVEMIECYIVCIIHVVSCTKUNVLTQXRWQMKXQQKQACVRPERWZOTDUUKWRMAEAHSUHKOFJXWTFSUEHQWUZDUDXNCMZVLDWN");
    msg.plan_id.assign("XUDXIMMQJNKXUOWEUYGLPJKURUTBPLULFHPDSPATXCDAMZIOEINFTQTZXTMXOZPGDSQVODVNZBFNE");
    msg.description.assign("LBDIEQMBVELLHKEVKTKGDVJYOFVTNNZGMFDLLWQFOQDHRSSBHESFAMRWRUFQGGGKQZJPUIXRQCBETMYZZRRRRFVIHYAKYBADATUTJXCXOMNUTDKSNVUKQCIHOFNMYSFEVZGMVWPNPWBRWUDOBBLMSOJFGIHYCYZALTAUJPJVXSZXHWOUKAQDNTUXKGSHWKPOBPYXXDAICVLBFPSPQIMANQCLYSLZZCOYWHDRGHEETZ");
    msg.leader_speed = 0.16190051266457606;
    msg.leader_bank_lim = 0.7284014240913298;
    msg.pos_sim_err_lim = 0.3518826490047131;
    msg.pos_sim_err_wrn = 0.9747658909154511;
    msg.pos_sim_err_timeout = 7552U;
    msg.converg_max = 0.1636496278563221;
    msg.converg_timeout = 32684U;
    msg.comms_timeout = 14096U;
    msg.turb_lim = 0.4770262498361183;
    msg.custom.assign("LXBNLSTDCQRMCVTLPWFJJJUKUUUVFBTXFWRDAIWCIDGRGZZBGEKSAINJLSCZWOPYDURSOVLHOXSRWUAYHCFWFGABMGENNHBUBOGDCQCPQSLESKZKATZEVIJYFFMXYGFNIDJREDOJPHVIXYX");

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
    msg.setTimeStamp(0.5793552235301448);
    msg.setSource(22707U);
    msg.setSourceEntity(66U);
    msg.setDestination(65360U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("STBHUGEULOPLBEIKUZVCVAPJHMOIIESVGMGQLBIMGNXQVWZNPEJJXSZGYVYPBOWNLSECKAQFFUSOCQETNVWSBEQLDZVLRDIEXXAOPNA");
    msg.formation_name.assign("NBHGDGRWGZNVGT");
    msg.plan_id.assign("XHQKIIMGZCUIBBFOQBUYVHPHPEKZAIWMMOISLAHGZXEETTQVXNQAPCXRWQFQODGTJUJSRDTONDKKVPHJZZWDMKRBGPJPKOVDCKJLGBKAADRBUJEPGAHINVLXYEQYUSXDTFCYCLWNEQEZFERAUFLSDBEMKOVWSWTEFTRWLVLTYDRLPGBXJODRPIUGCXNCBXHWIRSYLHYCVQSYKXZAJMAAVWCVIINN");
    msg.description.assign("NVBRONTZNHLNIPOMHBVCOMDOBEDBOMNYEYLAZUVYWLGECBIQNWYMZFUMQUAVDTOSZUBJWPRWQNSTHSWGHKFKTOGJXAILHFELJQKNCJSPKBLXDKVZPASWQIDMLMRYPRWUZONCRVQLKRLXSVCFEDPGXFFNXDCKXTGZUAZOASTPHHLEGUEJTQYTQCYIICEPGQAXJPBPFTII");
    msg.leader_speed = 0.6254013132961516;
    msg.leader_bank_lim = 0.19943126004824496;
    msg.pos_sim_err_lim = 0.9944388105996941;
    msg.pos_sim_err_wrn = 0.5232432690651595;
    msg.pos_sim_err_timeout = 17766U;
    msg.converg_max = 0.10676994868564571;
    msg.converg_timeout = 6022U;
    msg.comms_timeout = 38294U;
    msg.turb_lim = 0.13951909272023344;
    msg.custom.assign("EWQRFSRMUWGRWAQAWHCIBHJUSLYIICIRDJUECHCTCRUWVGMJXBTKPYEPDQLHXTOGNNAEBEOKUWOOISYAXBQXITLWKNMGRSYLNESVPAUJOBY");

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
    msg.setTimeStamp(0.6474589373682611);
    msg.setSource(63763U);
    msg.setSourceEntity(69U);
    msg.setDestination(21923U);
    msg.setDestinationEntity(142U);
    msg.control_src = 8842U;
    msg.control_ent = 162U;
    msg.timeout = 0.19020743307109844;
    msg.loiter_radius = 0.5377366213464183;
    msg.altitude_interval = 0.2960233082784145;

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
    msg.setTimeStamp(0.1950683026915513);
    msg.setSource(35523U);
    msg.setSourceEntity(251U);
    msg.setDestination(61876U);
    msg.setDestinationEntity(89U);
    msg.control_src = 15391U;
    msg.control_ent = 23U;
    msg.timeout = 0.8775288305519733;
    msg.loiter_radius = 0.07871491729113334;
    msg.altitude_interval = 0.022819679243932356;

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
    msg.setTimeStamp(0.414980307983592);
    msg.setSource(16683U);
    msg.setSourceEntity(105U);
    msg.setDestination(60958U);
    msg.setDestinationEntity(29U);
    msg.control_src = 12706U;
    msg.control_ent = 37U;
    msg.timeout = 0.1102954053722982;
    msg.loiter_radius = 0.9096398225655751;
    msg.altitude_interval = 0.5881455159996205;

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
    msg.setTimeStamp(0.6048407486399253);
    msg.setSource(9385U);
    msg.setSourceEntity(17U);
    msg.setDestination(2851U);
    msg.setDestinationEntity(130U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4887610529035846;
    tmp_msg_0.speed_units = 139U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3672032464106133;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7654585845788706;
    msg.lon = 0.10022346796500725;
    msg.radius = 0.15787020964694853;

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
    msg.setTimeStamp(0.9031594103081496);
    msg.setSource(58793U);
    msg.setSourceEntity(130U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(237U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39121767204487856;
    tmp_msg_0.speed_units = 214U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5702949754071394;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.17685057120286396;
    msg.lon = 0.33870479519431673;
    msg.radius = 0.8886597903704339;

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
    msg.setTimeStamp(0.42504551198786833);
    msg.setSource(65069U);
    msg.setSourceEntity(204U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(155U);
    msg.flags = 22U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9547233599519906;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.945455779398164;
    tmp_msg_1.z_units = 230U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6344559255281277;
    msg.lon = 0.5373068159581811;
    msg.radius = 0.4486969445393898;

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
    msg.setTimeStamp(0.08806287379671285);
    msg.setSource(8099U);
    msg.setSourceEntity(129U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(205U);
    msg.control_src = 35536U;
    msg.control_ent = 189U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 220U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10518901294327498;
    tmp_tmp_msg_0_0.speed_units = 45U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7118522340167369;
    tmp_tmp_msg_0_1.z_units = 136U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3684089700585427;
    tmp_msg_0.lon = 0.30973772557308266;
    tmp_msg_0.radius = 0.6208297302271745;
    msg.reference.set(tmp_msg_0);
    msg.state = 135U;
    msg.proximity = 143U;

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
    msg.setTimeStamp(0.6314669815131444);
    msg.setSource(9417U);
    msg.setSourceEntity(136U);
    msg.setDestination(43364U);
    msg.setDestinationEntity(138U);
    msg.control_src = 45833U;
    msg.control_ent = 144U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.010737408563728734;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3061159196726341;
    tmp_tmp_msg_0_1.z_units = 120U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2928772539198494;
    tmp_msg_0.lon = 0.9017430798103276;
    tmp_msg_0.radius = 0.3597277145411495;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 231U;

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
    msg.setTimeStamp(0.5095095412004648);
    msg.setSource(61142U);
    msg.setSourceEntity(147U);
    msg.setDestination(873U);
    msg.setDestinationEntity(114U);
    msg.control_src = 33481U;
    msg.control_ent = 163U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8520273228338163;
    tmp_tmp_msg_0_0.speed_units = 133U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5623736538517087;
    tmp_tmp_msg_0_1.z_units = 208U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.443560559011953;
    tmp_msg_0.lon = 0.8969938584407773;
    tmp_msg_0.radius = 0.10165627648370512;
    msg.reference.set(tmp_msg_0);
    msg.state = 88U;
    msg.proximity = 117U;

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
    msg.setTimeStamp(0.17274434913318804);
    msg.setSource(43220U);
    msg.setSourceEntity(53U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(20U);
    msg.op_mode = 154U;
    msg.error_count = 141U;
    msg.error_ents.assign("ECUYFMCIJVSMMOZOEPVTJVUVXIEBHSTJKDDKAVWNAOARMEKOHLBXICCGP");
    msg.maneuver_type = 57515U;
    msg.maneuver_stime = 0.8808497026810082;
    msg.maneuver_eta = 40608U;
    msg.control_loops = 3559854387U;
    msg.flags = 145U;
    msg.last_error.assign("BUFETNKGTNXGDPIILFHZAEIGKETUFVVNEZCNCRYJNIXJSCHBAMZYKHWXNBVBTYDAYCZCDRLODBSPTJWNTWD");
    msg.last_error_time = 0.6259392390680183;

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
    msg.setTimeStamp(0.24002840687526172);
    msg.setSource(59923U);
    msg.setSourceEntity(214U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 138U;
    msg.error_count = 145U;
    msg.error_ents.assign("ANIOSGFZQSLVWYBPZFVWYYCHHDOEMENIWTCYBKTSGRUCLLRB");
    msg.maneuver_type = 58661U;
    msg.maneuver_stime = 0.13990656422916836;
    msg.maneuver_eta = 17113U;
    msg.control_loops = 1635259167U;
    msg.flags = 159U;
    msg.last_error.assign("CKPPLWYHIMQDPUJSNDKJFMTHFSGBVNNQOZYILQGXHNQLURSBHTCRIAVFMNDEVTTNIBQSOVBLSFPSOMHGOGYMGJOZJPFKMDSZWKCKNQKJXJAWUOUDZGTQTIAYCZRZNORYGYQXEPMCEMXRUWVREGXZKFDTFMAHZUVAXRLDPKYUNAARJZDJBKPEUSLUVSHRCEBWTCEJCWIHDFSYOIGWTGXCANOICI");
    msg.last_error_time = 0.5060507270373504;

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
    msg.setTimeStamp(0.7839369414640889);
    msg.setSource(4564U);
    msg.setSourceEntity(39U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(18U);
    msg.op_mode = 222U;
    msg.error_count = 91U;
    msg.error_ents.assign("WUTPKIPMRBHPDQVBTEMQDZGBIAGMKGWRIWVOWJNXSZBMCKLVYHWGKNESQCVFUSUFPJGRPMXTXYBCMYSROSJQVTJDQKTXHILLZTFHLUPOYYEXISQTCDZDFITGLWHBQSKIFZZNNAZZMHWYCMYPEHNUFHNWLNXXLUNKDACDJOYEBZOUDXDIRSBOWJARJPOKPATKLIOGSLAGRVC");
    msg.maneuver_type = 8095U;
    msg.maneuver_stime = 0.2449609034454674;
    msg.maneuver_eta = 56905U;
    msg.control_loops = 1282846619U;
    msg.flags = 17U;
    msg.last_error.assign("IHOPHCXMYRXHWNIVMWTVZNPRQOHTVUDMVZDKSYXEYOSLSWLVUJJDXGOOIWMRZTHZWFVBGJSABRGKGXCLAIFKPKHQQIJUOLQPXBTXWDGMZR");
    msg.last_error_time = 0.10413325982386756;

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
    msg.setTimeStamp(0.40937743095556434);
    msg.setSource(35417U);
    msg.setSourceEntity(181U);
    msg.setDestination(30924U);
    msg.setDestinationEntity(68U);
    msg.type = 163U;
    msg.request_id = 53578U;
    msg.command = 248U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 25742U;
    tmp_msg_0.lat = 0.7390186409339604;
    tmp_msg_0.lon = 0.25696476243537847;
    tmp_msg_0.z = 0.3200537765834256;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.07872380371770415;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.duration = 41162U;
    tmp_msg_0.radius = 0.5497354212985979;
    tmp_msg_0.flags = 20U;
    tmp_msg_0.custom.assign("CXIGJDAKRQQJVGMDUBWAMXHFCANABG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52142U;
    msg.info.assign("KKAYWWCFILWKYRKGHQKOPTIHESFGOJEYUAFVCCUWTXPVYFJLJJLQVQZBNCLIGJEAUTTQWYARNBVWBYEJWQTZMQPZXIMIDLCDBISAQNTPAUGJIKHJTMNVOYLKXDQNNEZRXXREZONEKYWOZCRHAMXXRJBQHHBFSCGYTXSEPLUMOKUNKVMMHFZUVPFGVLZOSACOINFADFLHDMSCYRUR");

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
    msg.setTimeStamp(0.759629618251558);
    msg.setSource(9717U);
    msg.setSourceEntity(99U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(210U);
    msg.type = 3U;
    msg.request_id = 61437U;
    msg.command = 97U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 33108U;
    tmp_msg_0.lat = 0.7340618446275994;
    tmp_msg_0.lon = 0.5710608631678098;
    tmp_msg_0.z = 0.5798614999584243;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.speed = 0.15305568409997128;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.bearing = 0.05177911171469407;
    tmp_msg_0.cross_angle = 0.7121393716495757;
    tmp_msg_0.width = 0.39278083672535036;
    tmp_msg_0.length = 0.29199367339507265;
    tmp_msg_0.hstep = 0.24892590949909787;
    tmp_msg_0.coff = 119U;
    tmp_msg_0.alternation = 6U;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.custom.assign("TQUCXBHJUYIPRVPOVLLJAEOKMNSSIJHFSVPQJXSHLZNAFEQMSCFRGGWTUTCYAGXWTGEHYKJGNZCPRXZFWMESDMMQSENTYOGLHMUJFXDRXLQQUDZYDKFVVCMAEZKQBWCSYAVMZBNZHIKCZPPIVRHEGXYRMLWBANIOLUHDGYBQUCPCXEBTSTNOYOGIVERUWAKPRBIEVBFDCBHVL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64291U;
    msg.info.assign("HLKXVIXTHFFOBMLQEGVBWKKILNFAWBWGGRWKDAIFSQIWZEXFYSLKVQADYCQZXJGPJGOQMZFSWRKNVNYJBJFMQJMRNUVNHPVYCNHLIZFQUUSSCIYGTLUXZPR");

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
    msg.setTimeStamp(0.7998258217697322);
    msg.setSource(32254U);
    msg.setSourceEntity(209U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(151U);
    msg.type = 118U;
    msg.request_id = 47404U;
    msg.command = 246U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 28283U;
    tmp_msg_0.custom.assign("KFEYURCMZSGVURHKAGLPXCJAANEZFVNSWJVHHZXSPPQCPGFBBISJC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3595U;
    msg.info.assign("ELMLQZFRXMOCVJDEMWPYNVXUYBVNYOVHFZGAYTUBBNDWSHUKQIQAFMHVKSRAKKIZQDXCNBQDEJCWWFIXXE");

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
    msg.setTimeStamp(0.27031443339435546);
    msg.setSource(2564U);
    msg.setSourceEntity(39U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(177U);
    msg.command = 247U;
    msg.entities.assign("USQGEWOVRCJVHXVAZTQQNGKHFISDWVGMLUZDSNLWYUREVSKHVENVENMIUTDYLOBUXWFUAHMTIMWKFLBZIMLQTCZEWLMIPLGUAFYDHPOQXOTCDUCJXXSERPOJENVDCCBGXIOH");

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
    msg.setTimeStamp(0.04376181194798079);
    msg.setSource(56333U);
    msg.setSourceEntity(61U);
    msg.setDestination(28361U);
    msg.setDestinationEntity(44U);
    msg.command = 220U;
    msg.entities.assign("TUNAZGBUIAEDGYZDKAJGJDTRQFXWPSNDGVBMXVWBZKEWKUOBWLCNTRXYEDXNPIISZXVQNHAO");

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
    msg.setTimeStamp(0.7536087240225202);
    msg.setSource(54895U);
    msg.setSourceEntity(22U);
    msg.setDestination(905U);
    msg.setDestinationEntity(139U);
    msg.command = 222U;
    msg.entities.assign("LFJJWBCWWRFFXSYDVCBATADXWMXEDBZLSCKZOCCQXOMHNTERMRAOQCOKPARV");

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
    msg.setTimeStamp(0.5338144400271261);
    msg.setSource(10516U);
    msg.setSourceEntity(119U);
    msg.setDestination(47126U);
    msg.setDestinationEntity(119U);
    msg.mcount = 113U;
    msg.mnames.assign("DGDGLDBPJVYMZBLEZWKULNHSCBIAAXLFSWACELMAONGTKBBATZQFWTAIXPPEMVEFQUPSTUGEOXQDYPMOKCNTRBULTMGEVHEMZVKICAPSSSJMLJCRZWIAVQFRJISYGIQUINXDXAZKHKSWRIHRXHH");
    msg.ecount = 104U;
    msg.enames.assign("LKHNKFMRSDYJRQKZJBIIOSACBZBNOKRXUSGQHGFHIBMWFXBGCYDOCSUCDCLPQUQQSGYQOPGNWKPQPTZEELPHJDIAIBACZEXNMVBDFAVYRGJYDVAQLIWXSFITJUMTMT");
    msg.ccount = 27U;
    msg.cnames.assign("ECECRZHSAOUOZEPMVTTSRJFZXKQBQXFJUNAVKCKSPQRIOLYCCIMFVIQVJHAWQFNWATIUSHEKGHPGHAAODLEQEOPYWMCNCCVUMAJGXQUXHVVLRZWDIBUBE");
    msg.last_error.assign("VQQDMUSTTOZJBIBMTZJKSQZSGPQFIWCRMZNNXUKLWGGJPDTONCYLJVPIAOMCNTPSOWEAVKFDJGCKIBLPAEACVOKZIKBCXUHBWWLGTWASZPVWRHYCRDQXEOJUFVEQLIKNLBSJELEDZAPUURBRXGSMCMRIOENHOFPHDYMUMGUNSUGCXZAVSEZIPBMTYQKTYLXDRNKWLIFIFTXQJJCSBRKXFHXQYFUHJNAHFZHYRXLWTVRGMDNHGPYDBVYQEEHAO");
    msg.last_error_time = 0.9496856669174737;

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
    msg.setTimeStamp(0.7260411944146313);
    msg.setSource(60704U);
    msg.setSourceEntity(140U);
    msg.setDestination(32074U);
    msg.setDestinationEntity(14U);
    msg.mcount = 184U;
    msg.mnames.assign("TNIEOWIHPIVBHETMFGMAMZBLWYLGRCFCXNPIUZFMHATFSVWOOXNKHTBSVHQQNHALFLRANWMFJWQCCKPDBYXAIOXQUHKUXPKQVBWBXSRSYFZJMAMARICEQIGGEXLSAXAMLDSGNUQWRDLUZPJSLVTUBTBNOTDJJZPGONEUMEEGCWDTYRYYPIFOEDEOJOSCYYKDDVIAWZRTCJNGNCSBKCPJUZFQJSTYPHVBJGRKMDVWOZEKLUQKGDZU");
    msg.ecount = 95U;
    msg.enames.assign("AMQIDWJBTWCQOZNTIBJYIADUSICWVKNKFKICOEPUDTJRPERACWZUDUSXBYZCIGZZQZCNAOFVLWACPHMDRZLKWULXAMCYXE");
    msg.ccount = 198U;
    msg.cnames.assign("FMOZFDTBUJYNVCGHSKZCHSJFKQOJISUQFKJSYEESANRLRWKCSWAJEAKVEFWXLOBZUQZAPPXTJYRNIDXZYUAEBGOZURBLYWMSMCZMHPBUKUZKTPQGVIVGKRYTENEDQIDUNTDLDNOQBHZGFHMOYIHQAPCSYGBCINGQIPCURVMFMQGXYCDTWJTFMHRAVWWCOOJVDAUERKHWHLPPXMNNLFXSTRVTXBHCEXDMGIISVJPKQVBOTRBEGNFWALPYLZXW");
    msg.last_error.assign("TXVMUEFCSEOJZFQWRCPSYCIHFPQWOHDCITHMNZSDKCDQEXVPOAVTWCOADBZNNYYQKLDRZLZOWDMX");
    msg.last_error_time = 0.3062273811494012;

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
    msg.setTimeStamp(0.9313350553902388);
    msg.setSource(5263U);
    msg.setSourceEntity(147U);
    msg.setDestination(50517U);
    msg.setDestinationEntity(217U);
    msg.mcount = 164U;
    msg.mnames.assign("DPTTDGIOXVLPQOQGEFCDWMAIUSRDMSXBZFSJBDYMEVOSCJEVIFJQLGYDOATUT");
    msg.ecount = 113U;
    msg.enames.assign("BOVEHKDOIAOFGDDNNGYCKEDHSAMBQUOWDVMHBTVLVBZQYNNHCQLXLDBCKOGWNSLMFLEMWIXRDZVDTTUNEYSPIZWQCRPHFXIAURAAVMXAJKIGMFTUHUK");
    msg.ccount = 183U;
    msg.cnames.assign("WFSOJWYBPUKYUEWAOOTWSSTRXJUDAEFIZFBNCKCZEHSSJQKQBGLOOOMDBNLKUGVKXIJLUIHTYGKVEXBJPMAQBPEIYNMQJHAGAKC");
    msg.last_error.assign("IHOKYMZXPKLWYOOURV");
    msg.last_error_time = 0.9891997578290779;

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
    msg.setTimeStamp(0.04823571340881394);
    msg.setSource(18301U);
    msg.setSourceEntity(216U);
    msg.setDestination(54719U);
    msg.setDestinationEntity(216U);
    msg.mask = 40U;
    msg.max_depth = 0.42247709207332274;
    msg.min_altitude = 0.6868028944409617;
    msg.max_altitude = 0.49069558802615254;
    msg.min_speed = 0.30180506580263067;
    msg.max_speed = 0.013128722284003636;
    msg.max_vrate = 0.6054897084214812;
    msg.lat = 0.19220131941499685;
    msg.lon = 0.7287116785481093;
    msg.orientation = 0.8998037554233501;
    msg.width = 0.035132616025306485;
    msg.length = 0.7496720702787247;

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
    msg.setTimeStamp(0.8470431224325167);
    msg.setSource(25966U);
    msg.setSourceEntity(110U);
    msg.setDestination(48655U);
    msg.setDestinationEntity(184U);
    msg.mask = 73U;
    msg.max_depth = 0.022109311727879555;
    msg.min_altitude = 0.23060903943705557;
    msg.max_altitude = 0.17574733106191254;
    msg.min_speed = 0.7859554291120117;
    msg.max_speed = 0.2832266060534837;
    msg.max_vrate = 0.7746212723882804;
    msg.lat = 0.42072395513471716;
    msg.lon = 0.3566632407046588;
    msg.orientation = 0.6465734466608236;
    msg.width = 0.265920654335158;
    msg.length = 0.32882917090508224;

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
    msg.setTimeStamp(0.7468607663460884);
    msg.setSource(9997U);
    msg.setSourceEntity(240U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(73U);
    msg.mask = 201U;
    msg.max_depth = 0.5797340525976693;
    msg.min_altitude = 0.5078156489524499;
    msg.max_altitude = 0.025446334529984016;
    msg.min_speed = 0.5986183920255237;
    msg.max_speed = 0.9164212077120535;
    msg.max_vrate = 0.5485217783195387;
    msg.lat = 0.3631650865344803;
    msg.lon = 0.7104008074577125;
    msg.orientation = 0.11812617778264334;
    msg.width = 0.41528421940000637;
    msg.length = 0.7744664322945303;

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
    msg.setTimeStamp(0.7442301063403961);
    msg.setSource(2382U);
    msg.setSourceEntity(79U);
    msg.setDestination(26705U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.26225095329655623);
    msg.setSource(19418U);
    msg.setSourceEntity(105U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.6054950524272601);
    msg.setSource(4927U);
    msg.setSourceEntity(140U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.8126437815878673);
    msg.setSource(37504U);
    msg.setSourceEntity(228U);
    msg.setDestination(42507U);
    msg.setDestinationEntity(84U);
    msg.duration = 5468U;

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
    msg.setTimeStamp(0.3271773484281968);
    msg.setSource(32756U);
    msg.setSourceEntity(9U);
    msg.setDestination(37626U);
    msg.setDestinationEntity(220U);
    msg.duration = 36528U;

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
    msg.setTimeStamp(0.8585103671792987);
    msg.setSource(26804U);
    msg.setSourceEntity(74U);
    msg.setDestination(21253U);
    msg.setDestinationEntity(226U);
    msg.duration = 7715U;

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
    msg.setTimeStamp(0.05531792535854674);
    msg.setSource(39652U);
    msg.setSourceEntity(228U);
    msg.setDestination(12972U);
    msg.setDestinationEntity(231U);
    msg.enable = 178U;
    msg.mask = 2390595369U;
    msg.scope_ref = 820144575U;

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
    msg.setTimeStamp(0.1508133773000211);
    msg.setSource(15925U);
    msg.setSourceEntity(182U);
    msg.setDestination(24211U);
    msg.setDestinationEntity(225U);
    msg.enable = 187U;
    msg.mask = 2913014615U;
    msg.scope_ref = 2151009143U;

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
    msg.setTimeStamp(0.018949462890215707);
    msg.setSource(26344U);
    msg.setSourceEntity(40U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(196U);
    msg.enable = 224U;
    msg.mask = 2286272575U;
    msg.scope_ref = 2076698828U;

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
    msg.setTimeStamp(0.5716280652009406);
    msg.setSource(30205U);
    msg.setSourceEntity(28U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(109U);
    msg.medium = 57U;

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
    msg.setTimeStamp(0.15995057613359154);
    msg.setSource(40586U);
    msg.setSourceEntity(252U);
    msg.setDestination(22035U);
    msg.setDestinationEntity(156U);
    msg.medium = 4U;

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
    msg.setTimeStamp(0.11218812810978962);
    msg.setSource(12042U);
    msg.setSourceEntity(172U);
    msg.setDestination(61521U);
    msg.setDestinationEntity(136U);
    msg.medium = 122U;

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
    msg.setTimeStamp(0.09811819610810846);
    msg.setSource(25416U);
    msg.setSourceEntity(150U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6388951814775609;
    msg.type = 114U;

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
    msg.setTimeStamp(0.5700096585790209);
    msg.setSource(1512U);
    msg.setSourceEntity(101U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(151U);
    msg.value = 0.5348987960601292;
    msg.type = 232U;

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
    msg.setTimeStamp(0.15566067770538994);
    msg.setSource(56155U);
    msg.setSourceEntity(154U);
    msg.setDestination(11280U);
    msg.setDestinationEntity(212U);
    msg.value = 0.1056480624972479;
    msg.type = 215U;

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
    msg.setTimeStamp(0.9095894912014396);
    msg.setSource(41973U);
    msg.setSourceEntity(84U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(103U);
    msg.possimerr = 0.05996817120241482;
    msg.converg = 0.356100769940893;
    msg.turbulence = 0.5355562824248847;
    msg.possimmon = 242U;
    msg.commmon = 164U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.5122873317557546);
    msg.setSource(50594U);
    msg.setSourceEntity(203U);
    msg.setDestination(3231U);
    msg.setDestinationEntity(209U);
    msg.possimerr = 0.11997211105306727;
    msg.converg = 0.5182973175343719;
    msg.turbulence = 0.8224262463754096;
    msg.possimmon = 137U;
    msg.commmon = 204U;
    msg.convergmon = 63U;

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
    msg.setTimeStamp(0.1866716682516799);
    msg.setSource(1259U);
    msg.setSourceEntity(37U);
    msg.setDestination(61998U);
    msg.setDestinationEntity(64U);
    msg.possimerr = 0.1682670083043073;
    msg.converg = 0.15113332569085236;
    msg.turbulence = 0.21782669346291772;
    msg.possimmon = 122U;
    msg.commmon = 151U;
    msg.convergmon = 214U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.5206304558565754);
    msg.setSource(43361U);
    msg.setSourceEntity(207U);
    msg.setDestination(27053U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.8911645707537129);
    msg.setSource(55453U);
    msg.setSourceEntity(240U);
    msg.setDestination(58711U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.7702504982829654);
    msg.setSource(45495U);
    msg.setSourceEntity(42U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6768560788972036);
    msg.setSource(41938U);
    msg.setSourceEntity(227U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("NMFULYPZDSUPROIRVYAPWKBHPWGBYJJCAEFRYCWZNTUDMILWIEAIPPXGWXZNSHJXIAKTVWASPLZKVXSCGZEAFVGRAZROZNUXIHQDPSFHFUODKIJUOWWJOXZYTHDMTXQUBQBQHEUUMCYMJOROHJYYENLHKTQVXWGXAMYCTLNMFRGVMDSCV");
    msg.description.assign("ACDGPSJFCZOSIEJLTIOTKXHVAAVXYQLWNBDWTBQHSECPMEAEPCIRHMZDAOJNTNUADCIVQFEWOEIDIDGGHBEXUWCPVWXCG");
    msg.vnamespace.assign("LWCPKJIHEJTYTWQUZDIODBZYDGITROTPUECVXENAANXQWJUBZSRMVJMJKQITNBEZPVQAHMFGFFL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WDLDPNTACRTTEPRNBGHVLAGHSGYLTBUJPUQNMMDWFBNAYCASU");
    tmp_msg_0.value.assign("SMAELXJNYKOFVNWCSGCIJTVKGPRNUAZULYOZQLHJGCASDCNIFUTOA");
    tmp_msg_0.type = 83U;
    tmp_msg_0.access = 1U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TCZLYRFAOEPHGPTZKGCHCMBGCYEHLZTZRLSZWMHKTNWUAMNWSFHVMRATEBBVYNZOEHJVXGFFQTKHKDTBSFZFSADKJCDMSUVQMOQDWKVVOKOGLUVJUOYCIPJNGMCAUIEXADFVWDIDQDXSDUUKPQCIJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XMZOKZLIEWBSPIRTRLLPXQPVRPSIHZWLVXBJWLRWCBJOIJUGTFUSVHZBXFXQYRESAVVDJYBNTUQHAUEAEQVXIFEDGMQTUOSLRACKZLJAMOXGMGVLKXRUKZNFNHDTESAACYWGETZSGJTVSIUVQEFXRBNIRWGCPZIUNPOIKNQMNUACDGADZDFJCIKKNXYHYTCYQQWBKYLDDJBVSHFMJUGSYCZPDEMKPFOQTLPKJHRPA");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.4614418382637332;
    tmp_tmp_msg_1_0.lon = 0.8455219593658907;
    tmp_tmp_msg_1_0.z = 0.07954481900324895;
    tmp_tmp_msg_1_0.z_units = 0U;
    tmp_tmp_msg_1_0.radius = 0.07393806911133427;
    tmp_tmp_msg_1_0.duration = 49877U;
    tmp_tmp_msg_1_0.speed = 0.07296504901793255;
    tmp_tmp_msg_1_0.speed_units = 50U;
    tmp_tmp_msg_1_0.custom.assign("YIVJYBXMOPQYOECBDRTUACDVITMUZGUZAOJEZSNVENAWWYDGZMMLVRRYHEGUYTJWHKOXHAZHEEKASTHQMMTYKBPSPRERITSKSQUVCIENQBINVJRQQUKFXFBCAXJQWXMDSTWAYUHINDAPVSOK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredVerticalRate tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.9130766154205554;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Current tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.02210740630161323;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DevDataText tmp_msg_2;
    tmp_msg_2.value.assign("OBBDBJCONGDCQGUNPHPJMOOFEAHPQIEHXIOHHKONHWYMMXGEDHERDYTLHWCVCNJJOJTUUKFOVZIKLPHAKNVFVWNSJAZVQZPKNTUTFAEIXDRIKBJVTQWTZNSBCWXBQYVLSPLZFNWVCRPOYUWVQPASDZABSTIMDYLKSDEYSFEKULXFCGEMGOIWMMCRGBMXSAQRCRXMZJMTRWQGBHFIUEUQDT");
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
    msg.setTimeStamp(0.41443493201166326);
    msg.setSource(22054U);
    msg.setSourceEntity(74U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("RMUWSFLPNLRGZAQTXIAUAOKSWWCHANOLWOOSEJQZZYJUWKNJLQWGOEEKGXUDMUSOWXYEGBEJTHCCIIMHAEURVINFZRSJUYYHQWRZWOSBNBQTUPVZYN");
    msg.description.assign("MXXHELPCCXZHTLBWZBTZHPMILDXCVDVPUKAUXYIBJFRXOAQKWQTFTGHRTTNFCKFGCSGSSEBSZELEUKVJXVWKJXGHVYCZIYFDFOOWPVESAKAWUFKNCOOPIFFLWKQZQERYNPDYGRTPSMIMSAJLJRLNWBQGBIIFLABBYKUHEUDREHMVQGIYSGYUCVAJVZUGJBAERTOJWNJNGMESHZDH");
    msg.vnamespace.assign("HXZAXEZCTWXKNLPDZPSYMILWKNDYZBDLAJBIFNUHZHTVFOYLCMYXHWZESAFMKECVMMVZAIGKBCBIRYQQUTOHTRWCOQGTBVQGJKVNZDRJSADJTRVUPXAYGPIGPBIJHSJHLC");
    msg.start_man_id.assign("SKSWPZWPFNWKBGFEEGRXLDHYFKZLSQIOIABYULRYDGVATKKIJ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("GSEIWGLMKGCRMNHJPTXYICQBSWVAMBMXGARIEJDKEZUBPBPIHSVOLQSRKXINOLNZQGDSZFUUIRABREAHXOUQOYFGWFTWXVPMSDFKCXEHHDCBQIJUNWCPHADYPQNVVVLQWTIMFOJTYNFBZHBKTTJFHSXRWDWCFDG");
    tmp_msg_0.dest_man.assign("EEHUDHMOIQSQXAFMGMPEPHSBXQQCEVTLYNRTZJMZFMGKSNSXBYENOQZWPWZEABHFAMDQTUXZVDXQJCFIGSKVYBUYGRIMJSXCOUTXOCCLUTWVSDCHPWTKBEFJRLLKLBYIOKSNNAIVKZXCLNMBVUFOXYOAUFRWGZDYEQYA");
    tmp_msg_0.conditions.assign("JGLAEYADSUVUECDQJFCCYZPQONFKVFIYDRNMWMKUSSZUHXBHPTQAGVRYQGCPFKCBNJIZIHFJWOMPBHDLESWB");
    msg.transitions.push_back(tmp_msg_0);
    IMC::EmergencyControlState tmp_msg_1;
    tmp_msg_1.state = 207U;
    tmp_msg_1.plan_id.assign("CCNKUVZMRLNABYIQRBFJLBRVWAIGGXKNAPFISQXXSWKPHDXYXQNDEBKZJTFPWMBZNQPECVVGOTFIYNEDMBHHYSDBZSUTCWSHELYMHCEQGAOPUSVOZUPRLYCWUHADAKSXBLJFEZIKMFURJGYSLOGIWTGUJIDKJQFQUQHTLTAFTJNXOREVDLDRCYYPODZWUOCTCT");
    tmp_msg_1.comm_level = 122U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6454448973889593);
    msg.setSource(46318U);
    msg.setSourceEntity(31U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("UVRABHJOMPKDJFAD");
    msg.description.assign("LXPJQVFSUCBAVPIQNGFZZOYYIONHMARPDJNLKNUDCTCOJGZLMFKCVKYYLPZGQOJC");
    msg.vnamespace.assign("IYUMOGGJSRLGZNHHDFMLUXGHATISICPJAXOXWWSFPDLKFXHVVZEQLGIVAXQTINQJKPATOCDOEHRMVQJISIVXRTJKQTCBISPNTZGWLPGBMWUNKVTMPKLSCRREZDGIRDFALUBQPRWDNZCGPEOUVYHJKBZNDESFB");
    msg.start_man_id.assign("CWYUXEBIWRHBRLUCCUSNPDVBHSDARQAYXYUDYNLFPZXUYITGGTDWLEZRKXMZPSMAJKKGJWNWAQNQHSOBRMJJPPRRVQMQLIDGLPWWGHBHQFXRVRSPYHUUTJZEXLEOKDAJHONGXEQFCKVJOVMAQZBD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ONMJJJXAUAPODKMQGBGVZPEFZNAIKNAKPEGMHTCJYWRFFYZLYVGPWBOWDLLIVUXZSCSEFRTPBTDIADXQWSMPKROBAYMMEIPQXITXSNCYHLMNECQLMKTKZFSOGNAOUBHGPVNTTWWCMVDSYKPJYKETLOCWJUSOZSGYWREWZPOHTHQJRFDGNUCRICLSZXMJAHQIFRNBQU");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 48761U;
    tmp_tmp_msg_0_0.lat = 0.056663792518941825;
    tmp_tmp_msg_0_0.lon = 0.812776437448579;
    tmp_tmp_msg_0_0.z = 0.10658562808488792;
    tmp_tmp_msg_0_0.z_units = 34U;
    tmp_tmp_msg_0_0.duration = 11945U;
    tmp_tmp_msg_0_0.speed = 0.45718772308898914;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_tmp_msg_0_0.type = 131U;
    tmp_tmp_msg_0_0.radius = 0.8277029309381007;
    tmp_tmp_msg_0_0.length = 0.254761680452512;
    tmp_tmp_msg_0_0.bearing = 0.8732778399176516;
    tmp_tmp_msg_0_0.direction = 113U;
    tmp_tmp_msg_0_0.custom.assign("NPWECRINAAPT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BJTYGRSNEBDFWXTZNJAIQBFWERAIOUMULBMGQVHVVBODWOFFOCLLOTJUSZIJPFNNXHVIATYIPCZMHCKQMQXDFNQKLXWNKAORHUVZF");
    tmp_msg_1.dest_man.assign("FNKDCLWDWQQFXQYUTIGZSQKVCHPXOQZUPGSCEEOTLESDHLHOZYEVJ");
    tmp_msg_1.conditions.assign("MCSFJDAQEOLTXGZTGMGIPCPDTQNFWMCXDXDUNAKQSJOEWFNCARPKAIIQXLHGJYDDFQUYEIYTGLJHAHHNORELIEFHVFXQLIWAYOVTVIBQFKWPMEBONRRSZSHBBWUDBKFGWCQLOQKYSJUWZRSGBSRCHXKZVTJZOWFEJPX");
    IMC::EntityParameters tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("WHQXRUSZOQKBBDSIFIRTUPZNUKGHIVCQXFCHEQIBONYPZAIMQIPDWXJGOQTUPMSBDDRHBVGCORMOAIHGEPJNRMTROXTZETQVWMXXJDFNCWSSINORVLCPAAVDASYYJJBMUHEZCIOFVDJEFRNSSKAZGYFPZMMXOC");
    IMC::EntityParameter tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("QCAISEFDEVWARGFHPIWWYKJSFPKWKCUILQDHXXKMCMALBSUYRGPYDCMWNOLRTGWBLQENTGMEEIHJXJVNSJIUEOMZUURDGDTXCHONPIJATGPHOGVTZMYOYAFZLUNFNBIJLCYKOMWTADTKVFBUYLZSDVQENKFLUAZQVSOTRPGRNURXTPHIDFNKSBWYXFMGHDYLRXROPHNBQPISSCMEXQCMBBAHBVXAFKADWPHGECWZOTJUYJEJZQCVBQXRLZIKSV");
    tmp_tmp_tmp_msg_1_0_0.value.assign("YNAODQFTUSPTAGJVPKUKZRXGDISWCRWAMGYHGEQANCYCRREYNDGZFXFOCGEZEPYXXIURYLUBDWWFODTJVATNXBVQIHILUAYHNKHEQRVEO");
    tmp_tmp_msg_1_0.params.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ServoPosition tmp_msg_2;
    tmp_msg_2.id = 47U;
    tmp_msg_2.value = 0.3184660587755239;
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
    msg.setTimeStamp(0.16830089872339282);
    msg.setSource(9557U);
    msg.setSourceEntity(92U);
    msg.setDestination(43970U);
    msg.setDestinationEntity(16U);
    msg.maneuver_id.assign("ZNIHTNLCSFHEPHIRGBHUINOXEAZOKEXNGRFVTMTDHMKRVYVNOFABRLRZBKBIGXMICMUAFXVANWVSQJQPGLSTIDLMESGEZYRQAMOYCQBDHVFRPSWWQFJETFJSMDRMUBYYAJWOTUBFILP");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 19264U;
    tmp_msg_0.lat = 0.5495713983043999;
    tmp_msg_0.lon = 0.3256020642664672;
    tmp_msg_0.z = 0.641571153824237;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.duration = 35442U;
    tmp_msg_0.speed = 0.8671824374298529;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.type = 145U;
    tmp_msg_0.radius = 0.36873121726473257;
    tmp_msg_0.length = 0.0026947199259983456;
    tmp_msg_0.bearing = 0.4710911910777681;
    tmp_msg_0.direction = 229U;
    tmp_msg_0.custom.assign("NCMPGTXUXTYVSHIHJVQLGPGKNCMZKNXYLUXPYUKJORSKKHMXWNLBFPOQRDJUSDGCZFJDXJGTFYBGGAVZSLMTQMEBXNOPMIKERCYWQXWZIWAKU");
    msg.data.set(tmp_msg_0);
    IMC::AllocatedControlTorques tmp_msg_1;
    tmp_msg_1.k = 0.08536013949848664;
    tmp_msg_1.m = 0.9928469707457989;
    tmp_msg_1.n = 0.6937881533485962;
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
    msg.setTimeStamp(0.48607710137386284);
    msg.setSource(2330U);
    msg.setSourceEntity(243U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(118U);
    msg.maneuver_id.assign("TIZCQKMLPFWYOGSBUSZDXWHWYLQRCERZAMBQSGHVCBQFEUAYHHWUVBIGMMVFMFLDSUCDKENOXVIRVNKSRAICTJYOGYHSUYLMTZPDKKJWSBRQOGFTFHVXKJZCASBGVSFYZJJAFEMWALULZNNGXYGQBTEJKCMROXUNJRZNDCPR");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 50073U;
    tmp_msg_0.lat = 0.7066748382852587;
    tmp_msg_0.lon = 0.9295506412184399;
    tmp_msg_0.z = 0.7270165748876435;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.pitch = 0.3799755391106795;
    tmp_msg_0.amplitude = 0.9638776980663771;
    tmp_msg_0.duration = 53973U;
    tmp_msg_0.speed = 0.2859437031752995;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.radius = 0.6086931670165481;
    tmp_msg_0.direction = 241U;
    tmp_msg_0.custom.assign("CPAGLLCMRKAVYJHSNBYUI");
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
    msg.setTimeStamp(0.7001507753906019);
    msg.setSource(52694U);
    msg.setSourceEntity(14U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("NFELMBMGFVZPQWORAEMFZOOXFZJJVDTLOJEVRENXNIUBDXZKFMGIFAEPNPRDGDKJQDQICLWTYGCYYPOOSANBUHFALWYHXQQQCLSYYVJCQZB");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 10962U;
    tmp_msg_0.lat = 0.9528307531256126;
    tmp_msg_0.lon = 0.4407165198019639;
    tmp_msg_0.z = 0.8472705214640774;
    tmp_msg_0.z_units = 166U;
    tmp_msg_0.amplitude = 0.9347201892492482;
    tmp_msg_0.pitch = 0.45061687260621075;
    tmp_msg_0.speed = 0.3027913037576029;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("BDZUKJVPOOTHUIAHDARRPPKFERQLQGKLJYCTVVSKBJUDYDYILVTTUTAYHZMPYPPFREXHIOKBMRUNBSCFWITOBXDNACQQAPOXGJRWEGXHGGMGVWHEUPAOKLKEQMGIVNXIMMINDLCBYORZOXNTTJFXHSWWPLQYFHRGOFUPQSRSEWTMZVKVFXMSOUNIDFKBSZGBECACHZAVUHIEFWZXLNYTQANLCFKZYGUSBZDRLMJZNELVBECWACIYJQNMQJ");
    msg.data.set(tmp_msg_0);
    IMC::Salinity tmp_msg_1;
    tmp_msg_1.value = 0.5029646230851982;
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
    msg.setTimeStamp(0.4292093242519075);
    msg.setSource(29273U);
    msg.setSourceEntity(171U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(224U);
    msg.source_man.assign("JBSIAFWXIJVOWHLPMZTDBUQSFHVMNPQTDGLOQLNAFBADOTOJDOELCMOXKZRGOMEHPJQXVUSNBIAFNSEHYMHHMCGGYLOQAWQKTCNYJMRGTRRUIAJSWXGIDAVIDZRZWDGPFBXEKZVULCVYYUZRLUKKWWJJPBDQSH");
    msg.dest_man.assign("OMBFQXVAEEQYATRYVVYHJOIYVCQKKQOGIFGEUFLYDMVBGIVWUWFUGLOUAGMENMSPYQQKKGCNRMUZXZNKZPPITNWNWYFXVGNOZFKZILYHWTXVWLSWBXVUNPXHNLAJNJZMEEOMZGJDXRWOSCJBITFPRSCPXLCRAMXATJRI");
    msg.conditions.assign("RGPUJVFOJJMVQAYFYKOVYELGOLTVWIOEISOEBCSSASICDKWLQBFRHONABPXCQNTDRAZMMZAQNOTBNWWFDJLVDUVTHQQPIBQHZIADKCXJKPLZIDCBBWCYRMOGGMETEVLVCSYMZRYFVPJRHYUSHEGBEXZNMEGTAITBCXWYUUZX");

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
    msg.setTimeStamp(0.9387275177373953);
    msg.setSource(59773U);
    msg.setSourceEntity(199U);
    msg.setDestination(7363U);
    msg.setDestinationEntity(213U);
    msg.source_man.assign("XNYGAYSWANUBNKUUYXHHRTJRCSLUTSVLTLKWLIEHFWQVBMCUVVKYBHIVBDWMWICPFAWOREMVZALYTPAJGMLQEUAKNAVEXBRTLUISWJIBC");
    msg.dest_man.assign("QQTBLKTXHWJLECUELXEDMGZMVORSPJINWYASVMSIVAFFQTQWUCERYQXTEEDOVMXRKLAOTHHCGDCLYMTADVFVIYJHGXWCNUFMKEOUKSBZRIYCPTNAMMNRLPWOGPSFGKZQLAUBHWTJRSPDDDHMNBUOEJVYIIOSGNOKPWWIPYAXUUMWSHQXTSZGKPDQZBYNVNOVZJJCDKXBUNIFXJFAYLHBXQEZBLCFRFRJERTBVGLWPF");
    msg.conditions.assign("YHKFKGDZXQILXWTNDYIFMXJTSSFVLRQTOJHXLMEGNFQNUWPDUGIWZPNGCIHJYJCBHYJIWAEXZUPXGMWTCOZOSJMKVBTONUDYJZSQLZBQBUDCAATO");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("QGYVPDPQVEBBWIBCZSHLBNGLZDSSSTCRTWKLIOHQAQUASFBFEASYCWXTZMIFEHUYTOKRXQYBLXEDYJDFDJSZJXVWACPQIHCFDXXKBYPAFULCMJWWBRMUKZCJENAXJPHVUUEVGMBTZXLHITOUQORAWODKEXZGKUJGIZQHJTQPRMPTZFWASMGGOTLDIOPPCFRYNKUVGNNACYRNIOMEUQRJOHDFNHRLAWILNPVSRLIYENMCJOFVXKVVM");
    tmp_msg_0.lat = 0.5239348018040292;
    tmp_msg_0.lon = 0.939928238386801;
    tmp_msg_0.z = 0.052192448937385505;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.cog = 0.9553031464684678;
    tmp_msg_0.sog = 0.1885875310315196;
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
    msg.setTimeStamp(0.8895239716141929);
    msg.setSource(62609U);
    msg.setSourceEntity(55U);
    msg.setDestination(56385U);
    msg.setDestinationEntity(151U);
    msg.source_man.assign("ACTKCCJBPZDSAQDVGKPXKBECWLFTCPHYLMIPYZTMSJKPYFDDERSLDHXVCLVRIRYHBWMUJMQOWMAOVNFABQACOWHJIZBOLUTDONXAIKTNYPYYGQPJVAVRUGDZOMXEITARRUWGECNUSUWMGWGMLCZUNOIZJSJKBGEHYMPXQOLTIFVXWEDSPBYKWHQERALFGQXNZDQTFJLOXHIVFNGH");
    msg.dest_man.assign("AMFBDALEBRSFVSKCHPNSGRVWYJOEUZXFHYJIZHCRDPQIMDEUBBVOLRTYGQOCCLVFGJFUPIIQQUAASWPLPMXIXVOXYZUREDKGMGAHCNLIZWZSGNPVKETUMJJJQIMXHKYBQTSLZTOYTQFHCATNXFZHSFWKKZNHXPOLKWHBGPDNJGXWYZNQUAODWPHO");
    msg.conditions.assign("FMAUHXXPDABUEIECANKSTSSFDBFCYJYDVNQKDWEBDLJZKXZCVJJIYWQDCFNMWXKTQGQPBJOQHGOWPOROATTKYTIXRSWIXSIMJCFSJMRDVLDVOHCNGERFLULEJTHUIMZTKRKLLWNKBBRAANPABCPVZRGOWUNCQCRYWVPACDUEKUVTYMVMFPQYMSIXNQSMYPTLBRZHGULZIPHNNYUOJ");

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
    msg.setTimeStamp(0.6976993276447414);
    msg.setSource(40722U);
    msg.setSourceEntity(241U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(201U);
    msg.command = 147U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EHMOZLDQRUNNRRTBEHTNASOWLMMSBWYMCLXDQEOGASSELIWASLDSNFLWKIGKUQDZRQPOKGRJVJOQ");
    tmp_msg_0.description.assign("SBOSAQEQYXQHAYRNVEXOFRMFKFNTWTDRKYJJHGAFCOAPBGEPGBBNTIEUIZLMNSNEZRJMWOUPXLTGDPZEXESWZXUGAUIQWTZJGBYKFKPVAYRZYAHVMJYWVXHPIXCWHRQYLPBKCNIDIVLKLTFMSQZCPCPCFSONOUTZCFLZISFTDLHNYQBUDVIYRHCMVJMGLREXJSCVJ");
    tmp_msg_0.vnamespace.assign("FQVHXUUIYYAIRNEMHWZBPVGSQPKWSTEXWAKBOPVJYDGSNBRIHTLAPDALDXJNZRPVPMWJXVXJMONEECOVHDZD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NPUCYPKCTNMOOMKEGQBZHDXVNIBWUHFOYSVEQELRLVTIIKJSOEQRSHXNVALRHVMMDTOZGWACRXMCCOHYJHOT");
    tmp_tmp_msg_0_0.value.assign("ZKVDGMSWSXZQOU");
    tmp_tmp_msg_0_0.type = 134U;
    tmp_tmp_msg_0_0.access = 175U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HNMWYUKUYRRALAMKZFXRVRUNGNHYINFPJGTGOBGTPIBWJPTCYCSDJCCCOPSZDMFDEOKBSELCXNGHHATBOEQMDJAVUAVTXJKLQMINRALWOFXDPVPKDBGZOEPBKEIOQNLUHRYMTBOQQEBALFXHRIIIUZUJWMPMYIDSWQHZZKFVRSEZSWJTIEWUAVXAFXXZQOSNCBIRKPCXZTQLUZHGYQJTVAKMVESPLMJYUDWXDGLFJNVYHESBFYTOR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QGLVMDRQGRHSNDVXVMSWURGIXFAIPEVULGMDDWTOOHEDBIDSVQSRCHYAZAUIBOQKJOXGBDMMATHTAKPFVZUKCTXTNBOJRCBWFNBFZNJKYTRJGXYIZVXRTHBKEFJJPMFWYXLCHZGJQPNDPAAGWPTEWOUZSUXCULRYYBDKBELCYELNILGCEMCPXLQYFQJIFIJONPHUHLWIKOVRQIWPOHZKTFASNKVOSCDZWLUJCQWYZSVMGXA");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 47841U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DDPLVJCRRENLGIPFHHAJMENZSZZDDLBNUJZXORCUIWSWMVRIKCT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5061559410025713);
    msg.setSource(28421U);
    msg.setSourceEntity(121U);
    msg.setDestination(16990U);
    msg.setDestinationEntity(221U);
    msg.command = 253U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MDPCSPXWZNOHBJONVCJMAMFLODCLELPWGRIJISZYWJAEDOBDIXJUZLBIVXGZFF");
    tmp_msg_0.description.assign("HLYIZLBBDEPTXSXLDXODGHTKU");
    tmp_msg_0.vnamespace.assign("IEXMFCHBMYTOFJANBRDXNHEORGJBGMOHCCUVDVFZYFDXUPYJDNYKRESQEDQYHSMWJFGORSIZLQSLFECKFQKAHGBYZTPAVZXAALIIEGXKQGORCVNRKDKGWTWNAPXLIMWARTMZWMJMVQSXAWAIDZHNYJCSKINVZYZPJUFBCEPBUVVEHBQOCVKUXLITWHGYXGTJZPIBUWFNPHLSPMQXSTLSC");
    tmp_msg_0.start_man_id.assign("URCYDMZHXHJSUWWCRLETMBPJLPFUYFEGRXPSXZNZETEOPYTIKVJALDIBZCFHDZMGZSSRBOWRNFMIDHNBJSVAT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("VPANYHLSXIVZDAERPUJGVJTAIGNDNELWHYIPIRBRMBHQEMHUOACUCMKCOALICNBDZJQXMODTSXPWFZLJDYWUZXVPFTKFIYMRXLXURJKKQEQWZLASMJEKTWCYVSBRQFNJGNOFQAQRSDJAMRYFNSUPPFITPINWMLUPZBEKZADJKBFOVOBSGNNKZBG");
    tmp_tmp_msg_0_0.dest_man.assign("TANUEACXROPKWROSMZCOPUYQWJHEFNWEMSSYULUGKACRCIVDGLIKJJDESLHIDEPZTUPQIJWKUQQTTVHRPYHNYOAYFMGWDBZATKYVMCIHEVPFFQKXBJYJLUVFOFDMBXBOCEVRGKDSGNGKTTUXERZXZJSWRVHNJBBUXZRLHPYABNGIG");
    tmp_tmp_msg_0_0.conditions.assign("MIPJZXJJUKWSYGMQZWDYQTXBEQWTWJEEVADDSWXDRFDVLVELZSJXUNKRGORNYAHFYFCYFQCEPOBJMYQCARQGPNZGHKBDSHPQKHUCUV");
    IMC::IridiumMsgTx tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 20591U;
    tmp_tmp_tmp_msg_0_0_0.ttl = 47646U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("ZPQIDSJJXEXEDLIQOFCZMWVJANNNMYVBSLTMUGCYRHRNTGGQIRKFYVEEHTGQUAWWQSZUGGFTXUPXPHUJIWCHAVRIQMZVRPKMPGBBBAIINXOANAVKBOBLQIPOESBVOSXSLBL");
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {3, -113, -71, 100, 46, -110, -4, -45, -94, -91, -46, -12, 103, -14, -8, -48, 113, 114, -49, 82, -28, 48, 102, -97, -45, 35, -80, 10, -73, -11, -82, 108, 75, -3, -9, 40, 104, 51, 63, 48, -28, 69, -73, 120, 77, 89, 123, -27, -25, 119, 49, 48, 8, -96, -36, -13, -55, 122, 10, 65, -21, 63, -53, -7, 116, -31, -67, -62, -120, -82, -21, -35, -81, -82, 100, -10, 110, -51, 54, -39, -13, -50, -101, 87, 0, -72, -39};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticSystems tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.list.assign("JWQXLTHPLVTGLXPMKCNICCKHZJNNINDVUZZCWWGGGCBEXEFRPWTDZVJRARVUJGFEOFQBIYRFJSBWZUIFRUOHVAATGXEKKYMYQPCMUPDTWNODFNPNTEGHSOULKGESQBSABXIORVQXFDOIJAFWLQVZTCT");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LogBookControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.command = 185U;
    tmp_tmp_msg_0_2.htime = 0.3454139117395135;
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
    msg.setTimeStamp(0.1834065722753686);
    msg.setSource(48941U);
    msg.setSourceEntity(254U);
    msg.setDestination(22340U);
    msg.setDestinationEntity(23U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("USQWVGQVEYBWOXCTZIOMXPGTYLYCXRAZTPMKWEAWUZNKGATQHTWJIBAZTLQMUHAWHNYUCQUKAEZVLZVPFWEHKLYPDMNIZCROPOICOZDWSLFPHXSSYFSUSGJIRKLGDPOBQYLICCMRVOMSRB");
    tmp_msg_0.description.assign("PEXESAVMBABRRCSVOHRVUKVZWKHBONHFDFOQCXIQEPUMWKRSOCZDCOWPXZYZHPVUAHYRNPTXFJPDVQIQTKSNUILOKQBKJZKGRUWWBWXFGLFXMQFTMACIOCODXNLTHPPIAEWGYTFJJNYRKEBKHVLHSXVEIETURLEDIZUYSYJZHGDJAAONQPFNWLSJGCOMSBLKIGLBDTXAUGTVLMRIJJIGWDPMGYBEYZNLZYUQVYWDGNSJDHFACSEQACQMRZXM");
    tmp_msg_0.vnamespace.assign("HUCSPINZXNMYBXQMQWDEEBGNBHMGTEOQGWXJTQCYEOYRJOKFGFVLSPUUPSQPVNJVPGQUTCKATNDSMWJGPJYTBIFHGFIFZUUAHQGOBAQEOFYUPMZICRIIDICRMWUHMLTFCKJKRDIBQYBSBWRDXVHWFDJORTNSFLKLKALXLILRAZOERDVYFNJYEUGTVWJXSNCEHPVBQWVEYNINTCAKMXAPWUZKRAHLHPLMOGZZKSHCWYXSBSJZDTLXVZAZACM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EVTAXZLKDKADUOQLJRXYISZYQGPOULHASVPVBNFMBXYWJGVOBZVWVCSEQLBNMLXWDZTPYCWKFAFINPYPXGTSCUMFLOQCTRHJXZDYSVBNTEQCSMZJKHICERJNGSLUQAIWFDWAVDW");
    tmp_tmp_msg_0_0.value.assign("SEMWAAXUYXUIVVOZFISHQXIBTUQVBNOTGJGCYGUHJRGLXMZFRNZGNLCTWRLDHJIYQDLTPPHRSRWZVRUBGOVKWDZQESQDPYSUIVRZERAYIBHFOVICTIKENXPELCGKADEDMFDMCQSLKJWNPSMZM");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 72U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SXNLHGWXZIKONIGUDHRXUYDILREAKBKQMSLZEBIJKFUFJTCQAFAGDHCRSQPICRCDNUCBZPOFSFVJQLGJPSPIQRZZTOHKBBOEVOAPPTHNDJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SHIGVVDFNAIJUXLKRLACJQNICWLTORJBYHEPBDDZPWZAJNEFNCFTDBFQWWVMEKUOYHFCSUXQRQSGNUHTGFVUBKENQTDAKN");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 29107U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8111121721634347;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.1333293636851075;
    tmp_tmp_tmp_msg_0_1_0.z = 0.8707599666607978;
    tmp_tmp_tmp_msg_0_1_0.z_units = 85U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.18438516996554644;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 2U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("RECBRMNDGEWPTXNYIFELWHUOUMYDTOLISPFZKXJDVPDFQZBGSNGVTXSVKDGQWYLSAUVM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AlignmentState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 79U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ZBWHJNOUQMVTOBJUNTGCHRWLYKCJNTOPJRZXMEQHKTQMCLJPUWCWKHRJAZBBFOIXSKETWAYZFLAVSHZQRADQTXGUIGFZGBUCMRFOYEWSEOPYPUOLBOFBJNQARKZIYKYKGOYEVVYFJMFVDIVEWFFHSARXDJTDIXPPDWQE");
    tmp_tmp_msg_0_2.dest_man.assign("AQVGDAIIQMUSLXLNAUDNMPJGCIBWNEKXFFEZGNXYOIIAQGKRLWVVWKJDTOXNAQRQCZBCC");
    tmp_tmp_msg_0_2.conditions.assign("DRGAYAGAYTFCYBSEQFGWCCIRBSZMNLYPYZLGUAEKLXFOHPFODDDGYGZFYDSASVJEEUHNZUGMQZLUHEOFXHPHCVVDUTFKBFLUVWVLBOBAPSXOAROSFIDPKNIEKAPIPZHBQETJVRIPLLPOJN");
    IMC::MsgList tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VideoData tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 14U;
    tmp_tmp_msg_0_3.width = 53018U;
    tmp_tmp_msg_0_3.height = 6122U;
    tmp_tmp_msg_0_3.widthstep = 497U;
    tmp_tmp_msg_0_3.channels = 178U;
    tmp_tmp_msg_0_3.depth = 37U;
    tmp_tmp_msg_0_3.finaldata = 5U;
    const char tmp_tmp_tmp_msg_0_3_0[] = {-8, 82, 94, -114, -111, -66, -77, 27, 28, -41, 65, -62, -128, -125, -18, 125, -128, -20, -109, -125, -35, -99, -122, -74, -26, -119, 109, 29, 5, -106, -65, -119, -31, 68, 65, -50, -95, 43, -32, 27, 6, 104, -121, 4, 14, -105, -56, 27, -16, -45, -25, 54, -9, -114, 118, 115, 108, -66, 47, -103, 71, 50, -53, 30, 47, -59, -84, -99, -49, -33, 73, 66, 9, 2, 116, 47, 38, 67, 59, -22, 6, -95, -92, 35, 102, 121, -14, -83, 28, -102, -80, -124, -89, 109, -28, 115, 39, 15, -73, -44, 17, -101, 86, -40, -108, 16, 49, 9, 36, -103, -89, 123, 74, -124, 76, -118, 43, 120, 23, -44, 125, -23, -24, 40, 91, 85, -1, -16, -34, 0, 104, -125, -62, -23, -83, -55, 57, -56, 86, 1, 18, -50, -36, 22, 124, -109, 3, -83, 98, -113, 79, -17, -5, 115, 55, -27, 50, 108, -68, -128, -123, -20, -96, -22, -89, 116, -99, -109, 37, -41, -124, -85, 92, -19, -103, -34, -14, 102, 40, -71, -42, -41, -45, 76, 29, 53, 44, -35, 70, -107, 55, 126, 118, -16, -17, 61, -76, 126, -66, 120, 111, 70, -38, 79, 37, -106, 86, 12, 55, 31, -117, -107, -5, 7, -75};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
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
    msg.setTimeStamp(0.3852424144518858);
    msg.setSource(39811U);
    msg.setSourceEntity(70U);
    msg.setDestination(29486U);
    msg.setDestinationEntity(19U);
    msg.state = 53U;
    msg.plan_id.assign("IEJUMKGTKDDJSKJRNFGHREWCQTQBXEOUIBUOUNWDVVWYAVYKBQHYLQSRJYTLPBNSSVAHGSXEDQLKDAOYVTWGLMXJRUOVUUTTOPUWAKVDKFPTNJZPCHGGPPNLMIXXPASIRDYPMRBOJCDOFWSALGYSFBRYTQNDKXQKBAAPEZHGBCSTVFHECCIMHFUNGHPZDLLFYEJHWVFWEMBXZXC");
    msg.comm_level = 111U;

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
    msg.setTimeStamp(0.32532322132025737);
    msg.setSource(10593U);
    msg.setSourceEntity(142U);
    msg.setDestination(46568U);
    msg.setDestinationEntity(135U);
    msg.state = 250U;
    msg.plan_id.assign("AKPKTCNPDWWNLBQGFYFTRHDSBLUZFGYTUQYNULVTOEELHNKWRLNFTSPFVHAQCZESFIXTGCKAQMFJJAPZIHA");
    msg.comm_level = 218U;

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
    msg.setTimeStamp(0.2950864293984379);
    msg.setSource(37887U);
    msg.setSourceEntity(12U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(43U);
    msg.state = 5U;
    msg.plan_id.assign("IADNMYJERYSCXOPUKZBWUKKGYAVEOESYAAQIKNZDHADDPBMFTPWHUNHHFRJFRSXXXLIIUVPAVXGOUFQDQNZDBAPTYZWVJMTZORJOYIZREZLQUMFGWDICEWMQDISULZLEMJSTFBUBFVGRRUPWFPALXCQWEIGTKTBBVCVNMSNHICXOPY");
    msg.comm_level = 191U;

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
    msg.setTimeStamp(0.5752997545000654);
    msg.setSource(47385U);
    msg.setSourceEntity(224U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(143U);
    msg.type = 150U;
    msg.op = 0U;
    msg.request_id = 7505U;
    msg.plan_id.assign("GBOKSLLKMUNBLJGEEKJHBZQEUWDIQORYVYWYNKEDEXJHQPGN");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.9418094715541745;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GGJSLGCBECDAOCWHIEXNDTHDKBZVFYRNWQNJUQHQICFLOZHWJMEUMRKSRAFEOKTYDYRNPOITIIGUZPBTZSSPHWMCLLAEKCXBYVVIZKFTSVTOFXKVPQBWGLNJOZXPGPVGUQADBURRYSDQBEEJHJLPTOHBFXCYQGKXMEWLRJOHKDTZMRNFVSCVQWANSLO");

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
    msg.setTimeStamp(0.9523682764887825);
    msg.setSource(55554U);
    msg.setSourceEntity(191U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(56U);
    msg.type = 12U;
    msg.op = 38U;
    msg.request_id = 32786U;
    msg.plan_id.assign("PBBCNGYKRRLVYINHSUXSIDEMDMIYEZJXBZULKCKSXIRXBUWEIKVARYZEOABMOZKESPHKGRSLMAJXAFHXVZPDDGNQNWUJAFZOECTUNABROQFPQHUIPOFTAUCGSJBMSIDKEJOJJXKPLOGTDTCCWELXYYNTVPOXCNN");
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KZCWRKPQWTIGYQHZUGWWCNNIAKQZIXPBAJZVIXDJUEBPOOUACGBTPQPENHNIGITNHOZDVBSXCAPEORSBWWDLFXLQHHSZAKYKFETVUASDJUTROLTXGCNLKC");

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
    msg.setTimeStamp(0.22806639944723295);
    msg.setSource(35087U);
    msg.setSourceEntity(49U);
    msg.setDestination(49266U);
    msg.setDestinationEntity(216U);
    msg.type = 252U;
    msg.op = 181U;
    msg.request_id = 55644U;
    msg.plan_id.assign("QQBMYNMUDXULIUETARJWPBJVEWOCRLKIXXLJQZRHFGUSJNGJEIGJGPWLLWBQHZQQKVNKOYSCCMTEVGRDGQBWDXGAFV");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 31922U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RQDJMXTFVZJHYRFXFVINUFBCCICIFQKMAFAWJZEDYQXNKQXGYPMBLEYJGSHEMYTELRUQZEKPHPBGZLVI");

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
    msg.setTimeStamp(0.013783608265665825);
    msg.setSource(42488U);
    msg.setSourceEntity(238U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(117U);
    msg.plan_count = 27026U;
    msg.plan_size = 3082290164U;
    msg.change_time = 0.4486804381471403;
    msg.change_sid = 52061U;
    msg.change_sname.assign("WMNPSZOVQFUXWZAIFBHPCX");
    const char tmp_msg_0[] = {-5, 7, -115, -119, 2, -35, -15, -76, -83, -121, 73, -124, 117, 2, 41, -28, 14, 13, -82, 15, -95, 9, -14, -87, 27, -20, -6, 120, -112, -15, -79, -41, -68, -51, -120, 120, 71, -104, 81, 30, 50, -38, 24, 15, 58, -32, -33, 32, 21, -27, -35, 63, -108, -43, 90, 85, -78, -108, 65, -87, -53, -119, -72, 21, -107, 108, -82, 0, 58, -74, -53, 113, 113, 43, -98, 49, 7, -105, -84, -55, -125, -9, -127, 124, -87, -59, 109, 3, 40, 22, -59, -41, -41, 48, -126, 98, -61, 33, 1, -43, 83, 35, 32, 84, 90, 121, -7, 118, 48, 112, 67, -78, -85, -34, 118, -104, 10, -31, 82, 104, -79, -88, 84, 94, 81, 13, 2, 100, -33, 44, 75, 34, 99, 53, -56, 15, 32, 48, -124, -51, -72, -1, -68, -96, -98, 1, 44, -77, -7, 79, -48, 44, -117, 53, 60, -69, 27, 124, 19, -104, -79, 120, 16, -28, -56, 61, -36, -103, 62, 33, -125, -69, 57, 124, 38, 60, 49, 6, 2, 114, -127, -102, 68, -75, -121, -100, -15, 84, -21};
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
    msg.setTimeStamp(0.3775579521647301);
    msg.setSource(35496U);
    msg.setSourceEntity(150U);
    msg.setDestination(17750U);
    msg.setDestinationEntity(90U);
    msg.plan_count = 8447U;
    msg.plan_size = 3667421098U;
    msg.change_time = 0.17432355030265212;
    msg.change_sid = 30939U;
    msg.change_sname.assign("FAOYJCVKNWTNTWILTXCRTSMZPUWZARQBPIYPAE");
    const char tmp_msg_0[] = {64, 88, -90, 104, -39, 4, -72, 39, -90, 83, -120, -32, 10, -52, 92, -22, -97, 55, 94, -54, 55, 125, 41, 20, -93, -112, 5, 123, 103, -109, 117, -16, 9, 85, 13, 41, -116, -126, 66, 8, 59, 98, 86, 5, 100, 124, 115, -126, -20, -40, -54, 82, -10, -11, -95, 78, 79, -102, 63, 63, -92, -29, -119, 68, -26, -57, 100, 96, 92, -77, -92, -11, 67, -89, -69, 63, -125, -114, -44, -106, 84, -79, -35, -52, -29, 106, -122, 8, -17, 29, 90, 120, -67, -32, -11, -4, -67, -5, -31, 20, 88, 108, 0, -123, 54, -84, -119, 7, -39, 116, 100, -33, -2, -18, 24, 21, -34, -28, -116, -42, -106, -116, 108, -47, -43, -30, 93, 34, 41, -51, -23, 98, 62, 46, 37, 104, -11, -43, -35, 36, 75, -46, -101, -88, 119, 104, 84, 5, -49, 87, 103, 75, -124, -39, -86, 11, 50, -73, -120};
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
    msg.setTimeStamp(0.7042557040228858);
    msg.setSource(33684U);
    msg.setSourceEntity(241U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 39758U;
    msg.plan_size = 2700238290U;
    msg.change_time = 0.4495167070917595;
    msg.change_sid = 3256U;
    msg.change_sname.assign("AUZWEAVAJLDOBGUUUCMOZAJQTYXOK");
    const char tmp_msg_0[] = {-99, -76, 87, -55, -13, 34, 38, -1, -90, -74, 57, 10, -16, 114, 31, 113, 69, -86, 25, -124, 117, 122, 15, -112, 73, 112, 83, -120, 78, -10, 46, -25, -20, 7, -17, -31, -104, -105, 92, 118, 78, -78, -56, 99, -34, 55, 51, -25, -48, -21, 21, -91, 13, -37, 56, -118, 71, -16, 118, 124, -27, 110, -74, 20, -17, -114, -86, 106, 79, 19, -53, 47, -65, 80, -43, -124, 6, -110, 29, -79, -28, -15};
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
    msg.setTimeStamp(0.602820035345008);
    msg.setSource(22845U);
    msg.setSourceEntity(163U);
    msg.setDestination(43890U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("RSNFXOJIJCNQBZVWMRTWDPIBMGTJOBQCVTYCHYPPBTSLVHTIXAHYNXJGGUEOMFCKNDBCZCVZAHKXKWERPGZMGXKWSAAVIPAWSXETOFLHTFFDEWNSQRUIOQRMUWJYMLEAZLDDQCPQJHBGKCVOSGXIVUKLBMFZXPLGHKTKZXJMLOFYGDNGQCYRMFDNEDYLPYOCNAFIPOXDUFWBQDASHIRSEU");
    msg.plan_size = 42187U;
    msg.change_time = 0.835916138081148;
    msg.change_sid = 54662U;
    msg.change_sname.assign("FNJSUJGOFJEIODOG");
    const char tmp_msg_0[] = {-56, -90, -110, 14, -38, -13, -47, 116, 88, 67, -112, 102, 39, -48, -22, -10, -99, -69, -22, 22, -28, -120, 95, -25, 93, -118, -38, -65, 51, 125, 67, 120, -77, -109, 86, -112, -26, 103, 20, 53, 22, 105, 22, 25, -115, 112, 93, -97, -2, -48, -75, 46, 37, -103, -91, -108, -108, -29, -72, -15, -114, 7, -81, -60, -126, -94, 97, 49, 52, 15, 90, -43, 30, -83, -46, -109, 75, -25, -88, 36, -38, 112, -67, 30, 120, -105, -41, -51, -97, -64, 13, -120, -42, 39, -13, -128, -79, -16, 79, -73, -8, -72, -61, -75, -8, 105, -65, -90, -50, -120, -127, 85, -92, -85, 70, -41, 38, -122, 6, -42, -84, 77, 29, 97, 106, 46, 47, -28, 38, -37, 74, -9, 121, -14, 82, -109, 81, -100, -12};
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
    msg.setTimeStamp(0.19910372822359879);
    msg.setSource(16240U);
    msg.setSourceEntity(219U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("ZKUKXNRXXWTPFDENIEHPPHLTISGGF");
    msg.plan_size = 53759U;
    msg.change_time = 0.45823413999190843;
    msg.change_sid = 38406U;
    msg.change_sname.assign("NJMFUTPULCICIWZVFBGKFOBGVQQGQOOEIXUHWDZKXXOMLWHLHQWQVZPAURWHPDRZN");
    const char tmp_msg_0[] = {-105, 11, 13, -29, 0, 79, 42, -23, 26, -81, -35, -32, 63, 82, 92, 28, -92, 45, -40, -119, -72, 101, 105, -102, -124, -106, -25, -12, -76, 23, 72, 84, -46, -42, -103, -101, -122, -7, -79, 29, -121, 10, -56, 60, -78, -56, -55, 117, 94, -61, -85, -12, -49, -117, -103, -16, 73, 11, -110, 122, 24, -13, 69, -84, 78, 107, 34, 66, -64, 1, -22, 18, 53, -63, 44, 72, -37, 123, -4, 125, -33, 20, -98, 99, 16, 0, -117, 25, 26, 68, 48, -4, -71, -4, 120, -107, 61, -120, 102, 5, 52, 117, 16, 39, -46, -128, -109, -121, -48, -123, 74, -79, -100, -107, 3, 26, 106, 92, 21, -99, 24, 17, -14, 62, 72, 108, -63, -47, -78, 71, 72, 99, 1, 60, 49, 118, -87, -75, 79, -73, -87, 88, -103, 41, -25, 93, -57, -124, 91, 113, 123, 95, 29, 107, -49, 9, -54, -32, 6, 20, 80, -100, 70, -55, 90, 51, 45, -58, -62, -29, 18, 62, -53, 85, 120, 5, -63, 47, 97, -34, -114, 30, -23, 25, -124, 123, 63, -15, 66};
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
    msg.setTimeStamp(0.2599769402924609);
    msg.setSource(39615U);
    msg.setSourceEntity(70U);
    msg.setDestination(14755U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("OFVGAHDQLMOYRUBSMPIKIUKVVOVHMUYQWFRYMTTAGCWGNBBHVDPBAAZPXNXARELNLLDEKEDJPPXYDFJZTPOWKSGTWWRCKRICOGBBKUKTYXUGXZYWUYFAIBONNYEWVJZZRCNGZQROMQSFTVLEVHMHFNUVPJSQCSPAZTISXQSBWKJGIODLSD");
    msg.plan_size = 62154U;
    msg.change_time = 0.044474863169822854;
    msg.change_sid = 7719U;
    msg.change_sname.assign("LNQBPKWMAVDDQKQAEYTFLDWTSIWTYHZGJZFSAOXXIGBCVWBETOAHIJPXDLHZKXDJQVEMLHPNGGHLHMCAZYSKWSQFRJDUFFEUIVPNM");
    const char tmp_msg_0[] = {-8, -54, 88, -118, -25, 15, 93, 23, 117, 1, -30, -103, -40, -49, -87, -80, 29, -86, -119, 63, -115, 59, -11, 58, 101, 95, 37, 52, 84, -16, 30, 83, -103, -25, 76, 117, -39, 29, 123, -112, -26, -127, 25, -47, 45, -3, -43, -85, -47, 40, -59, -27, -94, -2, -81, -31, -91, -118, 19, -65, -20, 79, 43, -118, 25, -33, -77, 89, -47, 40, 44, 84, 0, -16, -7, 62, 21, 76, 11, 54, 86, -107, 20, -12, -36, -50, -56, -41, 104, -85, 114, -51, -103, -56, 94, -12, 54, 55, 33, 102, 97, 120, -115, 15, -104, 47, 20, 53, 3, -122, -5, -19, -97, -128, -76, 11, 21, -46, -119, -70, 14, 87, -4, -57, 4, -106, 37, 1, -92, -103, -62, -47, -29, -66, 17, 55, -109, -75, -12, -81, -31, 70, -89, 30, 123, 93, -97, -72, 87, -127, 59, -13, 7, -126, 57, -114, -94, 60, 105, 57, 98, -57, 111, -128, 87, -1, -44, 47, -114, 25, -13, -3, 74, -91, -109, -24, 84, -19, -115, -40, -67, 3, -36, -89, -112, 100, 14, -20, 26, 82, 97, -11, 55, 9, -54, 87, -21, -15, -1, 44, -71, -61, -70, -42, 31, -98, 94, 107, -65, 97, 81, 118, 11, -45, 110, 91, -63, -53, 39, -79, 58, 99, 73, 81, 3, 12, -10, -89, -10};
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
    msg.setTimeStamp(0.820755719318034);
    msg.setSource(43398U);
    msg.setSourceEntity(17U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(63U);
    msg.type = 14U;
    msg.op = 116U;
    msg.request_id = 43174U;
    msg.plan_id.assign("QOCPRBYRWMUCQHTDAEDKYAVJURPWXYGYVYJBCQTRLTSVEFZZQJGAHSGRZKDEWFRBBCUXENQXEFZJAKVMNOVNGOWAGVLFTHEAJJTUSFJELIQWTAIBHYHROLGVCTLJWKXNGWVUHONANKINPEWLTYDCMKGSXLXKMIVSGMPDHUSFPEDITB");
    msg.flags = 7783U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BOZBLZIWDSIUNIFWLTJZJDCLVTYSBIJSVKQCCWQZDJENURVT");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OXCONJGMGSAKKNFRBXKSTEYMARKG");
    tmp_tmp_msg_0_0.value.assign("TSRFUXQYILZQWHSFDKTGUFEVOPUQUDFEASVSRHJZNDBRIZRESZMTRISLPNCGNWTJTLVYHGALBCZOPTYGDOAGYXJKUWCMNPSFBVPBQUWUIBBIVULQTBJMOGZWHXXSEHARCWVJMKKOICYALNGKKBTVCHXXEPRFDCTMFRQDAKSMIMIJFYJQPWGMUAOLYYIEWVZNVOMAAKTFFQZBWYRUNQLXGHNIXZCJKCEESBH");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BXJFIKGINYIHYXWKVJQPQJZWHVNDYBMWACWQGTCTQWAGYSHWDCJHMVRRQVAVUJADGTYNLHOXPDXIPKOEJEKXLFPAVEHXEJERBUKILCKSAUZENTUFPOQBFENJCBGRPPSDHUBIBCMFFYFRSLSCLS");

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
    msg.setTimeStamp(0.789738991789786);
    msg.setSource(49840U);
    msg.setSourceEntity(157U);
    msg.setDestination(40304U);
    msg.setDestinationEntity(161U);
    msg.type = 193U;
    msg.op = 248U;
    msg.request_id = 55776U;
    msg.plan_id.assign("SNUYPPODMHGVVYDHZRTINXGZCRUDWPPMALOZFNRXVC");
    msg.flags = 61898U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5461168644201727;
    tmp_msg_0.speed_units = 47U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDVPWQUDHCSAHMYNDMEULNNNIYJIEAKKJXXZPWCMZGUBGZCLUUBXOQRTIMPPEKLMVRGBEYKSRKBWQEHJLZYKPTZXOPZGTNHMXSEAWDHYFOTNVCSIXJRGKFIQONAXSVTRGZEIFLVBNATMQWPTSYRUTSUQCWKDEJJNWKGIBLXAQQPFOYOMCLTTWAOYXCEJFDWKFHUVBIRFIUVHZZIVFBAFZORGPALQJHSWMBLDRJVEOFHDGSCRAUVYCHJDOMQB");

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
    msg.setTimeStamp(0.1744675935716774);
    msg.setSource(46940U);
    msg.setSourceEntity(59U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(65U);
    msg.type = 229U;
    msg.op = 18U;
    msg.request_id = 45482U;
    msg.plan_id.assign("RIIBPZJIDNHHWCIYFDGUZTVEVFEQRMXDYHHJVENYLEAROUN");
    msg.flags = 64614U;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 187U;
    tmp_msg_0.system.assign("THFMTKFWWJGJBEFIXMHSTEPAIXQVNOZOUDCVTFUBKSQKXXHKNITOGCAMOLWCNDUXKRWHFAIYTZNRQEUMZXGARBBNDSPUCNAKEENAATEYSZFKJQSISQWMBNMWEVBDMRYVWDPFYJRFJTPYODAVXWHEMLMXFGRJOPORHPXXHZLYBFBPRGCZPKCVAYECSJNDIZRLGLVHIHVYDLYGQBGQLQJZDEULLVSTDNZRPIVCOASBCGUQCQIYIJJOSZUKK");
    tmp_msg_0.range = 0.11165704863114856;
    IMC::AngularVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.8330441912853284;
    tmp_tmp_msg_0_0.x = 0.9984114018496614;
    tmp_tmp_msg_0_0.y = 0.6681756592259469;
    tmp_tmp_msg_0_0.z = 0.11546964241712487;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KDRUBGNXVNYORMEBDLFILFJADIEWULIHYQEMKKAWWZNKFCANCJVBCWAZVHKWGTSODZPZDPBJXDUMRUE");

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
    msg.setTimeStamp(0.6315434364326317);
    msg.setSource(63612U);
    msg.setSourceEntity(39U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(53U);
    msg.state = 96U;
    msg.plan_id.assign("EGBGJCVENXZLAQAPUHCWQRIFYZZKWBXUXCKMXSLMOOVVVKPALUTCPDJEQNGRUGRAMKHYLHUNTZNLXZFBQAHQHIATUOVYPKVSYKEDSCSAMSFHBEFBIPGDDLZCENRWRWZNKJBQTOKBGIIYDESBXOYDMLRCQNTWSTHBTXLSYGORDJXQITOYUIMSNTZYDUFPJVNWWEWPFLHAU");
    msg.plan_eta = 174511694;
    msg.plan_progress = 0.7423531588233154;
    msg.man_id.assign("PTICXIFFRMSJJYRIKYAUGDWDWRKATFURZVDUIVGMVISCYEOCJYKHIUSQEFQGPZQMBKDOJETAKXSLUNWEZSWYOZREHXBTXPGHYSWQBORJUQVTZPWXPNDDROWLKFMVHOZSCSDVUFWPKBRLXMHBEHOBHWDZZQPJ");
    msg.man_type = 21733U;
    msg.man_eta = -357363267;
    msg.last_outcome = 148U;

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
    msg.setTimeStamp(0.880547159030351);
    msg.setSource(49104U);
    msg.setSourceEntity(10U);
    msg.setDestination(14503U);
    msg.setDestinationEntity(55U);
    msg.state = 29U;
    msg.plan_id.assign("NCZBXZLLJZNEYRCPISDZXGSIMFDHUQTACSGTLCALLBIKASRFPFNEFOUTPHHFXJPJEKQZFVQKURBUGAFJLWKQVUETERVWYQYAPWHIVZOBFEZMCBVGUWXNMRMVJVBGCYXKVTLRDVQEIOXRUCFDTGWKEWLTQKPNCDLKDZBUMGYDNWRQNNWTAROJOPJSODYMOSAXXINHRMPXEZPHIPCWUDBSKGSKONVJUZYQ");
    msg.plan_eta = 1270025123;
    msg.plan_progress = 0.028925682925479923;
    msg.man_id.assign("QXDCZATIPPCQHCMKXVXIAXFPZTTINURHYULSXHZZAFCOQFYDEJFGWBPWHSQJDKCVOVBMMRLMECGRGMQBXDRIMJUNIJXTWEWNOBLWJDQMBHGVWTEUYJHZWEXWPMEOLNZAU");
    msg.man_type = 45395U;
    msg.man_eta = -58146095;
    msg.last_outcome = 75U;

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
    msg.setTimeStamp(0.23082941037863036);
    msg.setSource(36634U);
    msg.setSourceEntity(8U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(109U);
    msg.state = 91U;
    msg.plan_id.assign("DGTXMJMJUEDQSVZGWQCQOJADGYRKIUFWCFFAQDXSZSIUDERDNFZKYENHPRGMAROEXYPBNODFAKIXFWBPVGDKAAVSRUFMJUVYJCXBWCREKNAUHGNDTWMYJVMLROTESOLLXWKISBTQBEGPZKVMZOOYCIBQLEQTGSMHCSIQLYCLXKRFGDQAPJYWZMTNHSFNMXZEBHYZ");
    msg.plan_eta = 520172328;
    msg.plan_progress = 0.9158893361213359;
    msg.man_id.assign("XYJBYCYUSOKIRWVJFDTIGQWURNBEMFXTZFBYTPAQFVRBMMHAHTCPICJLMBNQEKZCGRDXKRACDFYUOYQVMTRHYXGBKWSVJA");
    msg.man_type = 54185U;
    msg.man_eta = 1076432749;
    msg.last_outcome = 90U;

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
    msg.setTimeStamp(0.053425596786093044);
    msg.setSource(41591U);
    msg.setSourceEntity(86U);
    msg.setDestination(4648U);
    msg.setDestinationEntity(202U);
    msg.name.assign("XHXBUJRLFOMNGSALSKJAVAYWGDEYLLZMRURIPQUSPVRXRTLGIUWSGGWMYAGVASTEDUDPTGYWLQZVJJNCYDCMXLTFEJNTCHZMZNBEICDVCVVFLKOKNYJETCHRSHHNCIHQWMOJYOAXVXIQPUZOJKXYEEHIBWPLTAALDBQWKTFOQOVPPDBUIUFFJKRBOAOQZOPGCMQNMZQWYUMIYTGRVNCWSESRPXNIZKGIHKZ");
    msg.value.assign("HDAZAMLQFJTWNKNVIIUVRWAXOIJRBQGOYKWDEZYZOJBGGFGEHTMQBSEKPSRSCTTZLYHKCYWUJMIHLL");
    msg.type = 76U;
    msg.access = 14U;

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
    msg.setTimeStamp(0.5118389942449817);
    msg.setSource(22896U);
    msg.setSourceEntity(16U);
    msg.setDestination(26639U);
    msg.setDestinationEntity(194U);
    msg.name.assign("HSNZMWZZEBOWZXUTOFMRVSDQJMCXFYRPSHVMYYLLGTDUIJLWUJAMPQIGLCMCFVORESFRVTPOPSVHBLNFBRVXDRBSIURHJFAINZBZEINCJPOLKCBNTCTFJQAXDUSPQXGWFZAMZPCHVKSJWKTONNLRQHKEUBZSBGXWCGAAKLWTEDXDNHVGOHRQYTMGCEHDQNDXTZWUARXYGAQEMYLIOIEWIISAGJBBEAPFYPKONDE");
    msg.value.assign("AWUDZITGPOATTYIKDZLCXNHAXNZGRUPMSUNUNTWJPKYTACYZJNARENIWFKVKBCEDOC");
    msg.type = 217U;
    msg.access = 61U;

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
    msg.setTimeStamp(0.6428683283799489);
    msg.setSource(54413U);
    msg.setSourceEntity(240U);
    msg.setDestination(45434U);
    msg.setDestinationEntity(228U);
    msg.name.assign("KUEFFBLVSVJJHBNCSRAIVGLHVGVMVBJOGIPXHABXNAWMKZPHWFBFXWJMQUPSBDTIURIWOCETDUYNRAZKDUYRQYRRGTEPKQSGCXDXJIOFQCFDVPXUSC");
    msg.value.assign("ENWERGBCKXXYQGVYUBVKAJQNHXMFWAIFHDWIKLXSOLMRKPXZJDIKNPBWZQFSNLUZPNFCNTGBPWDAOUDTBBMSQUEEJLIQSQLEUYCCBBITLPDVLCZDRSGYLPNJIAIFGZMKYXOD");
    msg.type = 63U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.5167322491584206);
    msg.setSource(33390U);
    msg.setSourceEntity(19U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(128U);
    msg.cmd = 106U;
    msg.op = 91U;
    msg.plan_id.assign("LZPDENLZUJGMRJMPFEODODEQGXKEPPKDJABKIDRRZSLHOVMTY");
    msg.params.assign("NXAWBHHDTGRGXQPOFEUIIMISMAMKUFYNSFQUKNHUDSFZCDVRPAVGKSVDQMEWTBDBRUGFCAOUXHDPNMWBHVYGLZUYSMBTGEGKPJVQKDLXVDCQTSMIHWNRELAEHLBPMQMZZRFUXKXXISAKUOWDEFIJRNTWQECTRNOYZOVSQXZHXHLJMVGURJNQPZTZFRAAWAVPOCXNQRJ");

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
    msg.setTimeStamp(0.8221885087160324);
    msg.setSource(1756U);
    msg.setSourceEntity(154U);
    msg.setDestination(25710U);
    msg.setDestinationEntity(4U);
    msg.cmd = 248U;
    msg.op = 102U;
    msg.plan_id.assign("CIFSPJPZZKAMSNHEKYLWFVXQEUDNWTAMBMKLPTRVSDZXVNRBFOKKECAPIQNTOLGQSRRCXNYGKAVNTYHHGDNJWXIYVYQEOZUAUUORGFIZQMTMZUFHZ");
    msg.params.assign("RKJXKDMRNBIFFOEONSMGVQEJOPEYXHZGVJVHHBXQJTIMVCCTCIWLDXDGNQFPFIHTXKTCBUMLJOSAALPTQRBHGKVBCWONXWZYKBVQOTUPHDZORDEPSPAIANHAXSHVWNZLZBSXYCSBMTPFGCDJRLUMGBAEBNIRLFOTMTQKJRWOZFJJGQNDMYYERGUIVK");

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
    msg.setTimeStamp(0.8774687978989352);
    msg.setSource(28720U);
    msg.setSourceEntity(72U);
    msg.setDestination(56810U);
    msg.setDestinationEntity(245U);
    msg.cmd = 94U;
    msg.op = 113U;
    msg.plan_id.assign("FJSHYAAVKTEMDZPTDEEQLKMZCRYXHUZERSUMIEQQHIXTLWXCWAGJQHSKDLEVYMAPIW");
    msg.params.assign("NQETDZZOVUYJANSNWLSXEMOVJMHAVUIPTJMCNOUQEMGMVZWCQRUOZFCZCBGENWHLLRUKDVEZFTAXWGWJKCNKFFAMTUKGDQFDWOAFSXIBPRTHHBSUQPDXQNDBDSFPVTSWZLZIUNQULQPAMXSCRDHBAGZFIDMLYRFRWLYJOCYUINSEQRGBEDARYOKHKAHTXYXPPJCBRHIXGIJSLBZNGESVFTCXVJWPVPKOILKLJICGBIOYYEHTKY");

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
    msg.setTimeStamp(0.45643901123762054);
    msg.setSource(15797U);
    msg.setSourceEntity(83U);
    msg.setDestination(63431U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("JKPKWGLJNLABPOPPABIXPHIXUMJRUVNCABCLKHVTEQLTODHHCEDZEVZQXNAKUCDLKRPZJVSQGULVLRYPONOUAXCSCKUJWUCWDGXFMLICAXHUFYNQGMOLZEEFXBPDSWGASMBKYMQINRSKHNAXWNIBVKYQEWVCZXTVERBRVYXZJEDNSKTOJBZAFYIGMIHMRH");
    msg.op = 76U;
    msg.lat = 0.37185392514503635;
    msg.lon = 0.3549385811953176;
    msg.height = 0.6934925250805749;
    msg.x = 0.9555906936615054;
    msg.y = 0.28039216773146225;
    msg.z = 0.9222632799072027;
    msg.phi = 0.09153897163069469;
    msg.theta = 0.2213081943983073;
    msg.psi = 0.2333807709353498;
    msg.vx = 0.3844184930529827;
    msg.vy = 0.9841347990356238;
    msg.vz = 0.8772935289200757;
    msg.p = 0.29324403963824563;
    msg.q = 0.03757309086382077;
    msg.r = 0.9931637892027022;
    msg.svx = 0.5278242029157223;
    msg.svy = 0.0111569530436878;
    msg.svz = 0.6069615089424467;

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
    msg.setTimeStamp(0.04410637815631813);
    msg.setSource(14969U);
    msg.setSourceEntity(102U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("ICVXYELPCEOLQPGHKAVJLZOWYJTATDFEKWWNMNAUMNJKYMNIXZFPJYHZGFQXOYFQVZUGOATFABHSBUSCPLUVGENPVASGBAICROYZECKDPHCRRMOIBZTUHQKXZTNMKONUHCBOZTICDXXJQTFUHNAIK");
    msg.op = 157U;
    msg.lat = 0.45836077725974556;
    msg.lon = 0.5294493495246058;
    msg.height = 0.8191419921733405;
    msg.x = 0.13896897759881;
    msg.y = 0.29118434190964093;
    msg.z = 0.8272620952601044;
    msg.phi = 0.36880611667154395;
    msg.theta = 0.03215774697066376;
    msg.psi = 0.7978219802571586;
    msg.vx = 0.8474376225595827;
    msg.vy = 0.2965970609648074;
    msg.vz = 0.2787799533802193;
    msg.p = 0.5103675079095078;
    msg.q = 0.5055301680082971;
    msg.r = 0.5194440743092381;
    msg.svx = 0.1131394651756017;
    msg.svy = 0.8397231933924058;
    msg.svz = 0.6851427804322313;

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
    msg.setTimeStamp(0.9253159856259792);
    msg.setSource(13382U);
    msg.setSourceEntity(21U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("CAHSMAIPQERLMYDJTHUJGMNXZXRBACWXZKLWQJSULBFBQYSRURGAIBOVHSWKSRGMQNVSLXSWOMIVWZCFXTGURUGIXOITJJHOPGEQPZEMGYLVITTFDEIFQCEFLJTFKPMGNPYLDWLNATDUOYDNLWRAVYRZZEUFBJW");
    msg.op = 36U;
    msg.lat = 0.03964066181044257;
    msg.lon = 0.9048432196071895;
    msg.height = 0.34804922177153386;
    msg.x = 0.9539862567367928;
    msg.y = 0.18629475324369527;
    msg.z = 0.39880795789564616;
    msg.phi = 0.6841692649340291;
    msg.theta = 0.48905151656130064;
    msg.psi = 0.06362353333095394;
    msg.vx = 0.252396262024141;
    msg.vy = 0.4690826643694117;
    msg.vz = 0.23081560748573005;
    msg.p = 0.4247935271807314;
    msg.q = 0.010809896198110236;
    msg.r = 0.7464433255603763;
    msg.svx = 0.15170660744489262;
    msg.svy = 0.10581373633071722;
    msg.svz = 0.8353952004428277;

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
    msg.setTimeStamp(0.3315551831115702);
    msg.setSource(3905U);
    msg.setSourceEntity(218U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.7293021450843945;
    msg.lon = 0.8498265368429454;
    msg.depth = 0.9666135929262644;
    msg.roll = 0.4649610388121077;
    msg.pitch = 0.8016859735583933;
    msg.yaw = 0.2992539167623227;
    msg.rcp_time = 0.8386838669665623;
    msg.sid.assign("FPEWUXGBWTTTHNORFWHUSEVXMIKEXFRFWMOLEBKLKXLWIJQQNOAMUGRFKBGSIHHPHSYHIGPWQDWCXCLCYVAALNNRIJWUPIVNVIMYCLDAFGXJBCNKPJZUZJQJGODQQCZKZTVYSDJZCEVMDMYTREHJPKLZFMYLDXYLMREUOUJFJZKGPQRNKZCMQCOVYTAHPTOHRBGSNEWSWASPSHDEIXSFBIVUGZXDBABODTNODMGUXA");
    msg.s_type = 0U;

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
    msg.setTimeStamp(0.46053647150472443);
    msg.setSource(25161U);
    msg.setSourceEntity(233U);
    msg.setDestination(11514U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.5798073044666523;
    msg.lon = 0.11300732930545032;
    msg.depth = 0.11061675802808923;
    msg.roll = 0.8270781997960983;
    msg.pitch = 0.9551601822670428;
    msg.yaw = 0.38351008533286957;
    msg.rcp_time = 0.8908811705516575;
    msg.sid.assign("LRHKMWOESWMSLOITJSF");
    msg.s_type = 96U;

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
    msg.setTimeStamp(0.3708251329726223);
    msg.setSource(5999U);
    msg.setSourceEntity(58U);
    msg.setDestination(32416U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.5782524186499143;
    msg.lon = 0.031675261953426626;
    msg.depth = 0.8537549898318662;
    msg.roll = 0.934828364654754;
    msg.pitch = 0.4213964594302082;
    msg.yaw = 0.9305326009436313;
    msg.rcp_time = 0.11201670266054675;
    msg.sid.assign("DDWEFZEHUIQUMNJOORFRNUJELCDGZKCUBPQPGFNSHHQ");
    msg.s_type = 62U;

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
    msg.setTimeStamp(0.8800104470692676);
    msg.setSource(2498U);
    msg.setSourceEntity(236U);
    msg.setDestination(3087U);
    msg.setDestinationEntity(117U);
    msg.id.assign("HLGLTVXWWJKYHHMGNKHCQXSQDFXVQJBGDLDWIMNZRRZSWIUUYDIORAMWQSJSBPFLYJVRBGGAFWTOYHPJSMNEQBKJLHMAOPELEOVRGKXALPBFUWEEDZXGBPXTEOTKRTTQDCVZDZQKCCJAZPIKGJFMWAUZTUTCDZRHUBHPAFXA");
    msg.sensor_class.assign("GWJXCEZYCBRDLOYCXSLBZXUDIJMGCHAWZZSRTSOJWMHBDINLZNX");
    msg.lat = 0.7871204808587607;
    msg.lon = 0.21598114800838986;
    msg.alt = 0.38982514928517475;
    msg.heading = 0.5710795790454102;
    msg.data.assign("VJZLFYEDWOJVAOFMPGQHNLWXZGUKNOGZCMVIETJNYWDLDAITTTFUCNQEJBNXJMYIJSFWRKTVKCCPPYMNUJJBDOXHBLUUKHYQKQVTFMZBLOQRXEEWCBV");

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
    msg.setTimeStamp(0.469495897172614);
    msg.setSource(8336U);
    msg.setSourceEntity(146U);
    msg.setDestination(64680U);
    msg.setDestinationEntity(254U);
    msg.id.assign("KBPAZDFFGHDCBUSIHCXYWTWZYLWBBMAXFPJVIPLLLQRSOGTNRYRWUTQXAXUEOKEHKIISDS");
    msg.sensor_class.assign("AHUYEZBSXRLIUXPCCFWWNXPLJHEVADUWPHDQUTPAYWGKRVJYYHTZMFVESAPDTUVBVGZUCZSQSWLAZLEQWSULNBZTQXGTIQPAVEOLBHCIEYYEBJRMBHNEIRFRTCSMNETCMBOCQXJOGULODLRGZYAZHPXWOXFQOFTNHGPNMOKKRDSKAVNBMEIQBIIZISBOGTVYDLFKGOJNMRIGJZUSHUPWJRGCRKFWOYIKMJFAQTXDYVNASKJDJFMQKL");
    msg.lat = 0.4291475960482716;
    msg.lon = 0.1799629582679777;
    msg.alt = 0.11194646593230251;
    msg.heading = 0.3585143921048587;
    msg.data.assign("YQDNGTWGJCIPHBJCUKYIDLNFTVIZNAEMVVGNBPZYCMODKDPYDIOCULABXUMAZG");

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
    msg.setTimeStamp(0.544380404584345);
    msg.setSource(5934U);
    msg.setSourceEntity(224U);
    msg.setDestination(54882U);
    msg.setDestinationEntity(152U);
    msg.id.assign("UMCPUEQFOWEGXSJFYXTHXZLRIZNQMPVUIHVZFQFQCGSQRFBFAOSJLCQEFETPXOQAYWWAVBNYPOXDRFTWDDJGDZUUMDWLMKEBVCZKVOIUNXBPPSTHNATKCYLKDELLTIFFBMEYWCCZZRNGWNAMYQURNHSVSYRHGKIWICAVHMLXDXRDDOKQHJBTRKPLVORBQSAXZLLJHEZKBHJBKVMOYWCEOSGHVYNJYPJRTMJIGIIWGSUUCATEAOBDUTMGPPGXNK");
    msg.sensor_class.assign("GNNDKMCMXUZPBKLVBOYYKZVEQKRJMMTIFCUHZILWFKRILNNOWPOFYORIYPCTZSXKMTEQHNCHYRZTGRLAYZQADWEARCBZBVMULTJPCJKAFU");
    msg.lat = 0.829884095939995;
    msg.lon = 0.4925007092693554;
    msg.alt = 0.5151743145950903;
    msg.heading = 0.6429544128204444;
    msg.data.assign("NSDJSLYWOZBLKOXJKBMJVMHQKIYIBVSFECVYRSLXUAVVVOJBUKRAAUNSOVPAQSCMCJPBGCHRIIWPBAPTSAPDIUKNEGXBDIQWLFNYFDTHCLYCNGZTXJDFHTPNQITERBEFGCOMQJNAWWXQTCEFNMEOPUTMEQLZDEBBGWUWGIHHGGZETLYFZLQJPRHRWFKZTRZDHEOOSGKUMLPWKFTNLFOMMXJGAVZSMYHVYCDZZRDAUUVRXYHXNYA");

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
    msg.setTimeStamp(0.6080215670912276);
    msg.setSource(1408U);
    msg.setSourceEntity(73U);
    msg.setDestination(16318U);
    msg.setDestinationEntity(227U);
    msg.id.assign("GKWKYMLTCWMFHIDDBRXVTXQJZBVHMEJOWVXMZUOBQIOFRNUFRNDAGDUPTNTLLCAWIPAZEUIGPVLZKUMRTJSJHGTZWEBHZUKMVJSAUEWCEXLOQWDNMXXKDEAISUPWFPQPZJQOIXCJFQBTRZVCIKQRHHDFPJHSNAVNQGSPYGSHJOVNCYXOCNYBHAKOYDNYGITKEYLTYMBFKMIGACEWRF");

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
    msg.setTimeStamp(0.8301939824359571);
    msg.setSource(51921U);
    msg.setSourceEntity(181U);
    msg.setDestination(6183U);
    msg.setDestinationEntity(113U);
    msg.id.assign("JRNALRJTJLPCBHXTXKRHSBYIHWEVYVYZIGTKIDSFFXFKHJIOSZTQKNAVCCUNFNBJYEEYWWRVCFWEIGTGMKJXLCNXLTDUJPRZBNWWZCNAQUVQBCEOPUGRQVUFRIYCZLBLIQXPUGOMLDZJSAWBKOOTKGNDPGIODHSUSKEGODNMXJWDDMAYGAEMUDBPRLSHAWKTOYRLYIFVSEQANPMHAQZXCUGFOYWTFLDXZM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SAEYANLIERJPHFYZRQAQJZGUFGXWSTWMITRLWFXPTHMFTMKURV");
    tmp_msg_0.feature_type = 218U;
    tmp_msg_0.rgb_red = 35U;
    tmp_msg_0.rgb_green = 219U;
    tmp_msg_0.rgb_blue = 117U;
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
    msg.setTimeStamp(0.9872514995257835);
    msg.setSource(49105U);
    msg.setSourceEntity(98U);
    msg.setDestination(57834U);
    msg.setDestinationEntity(29U);
    msg.id.assign("CSURLQVDTDUFBXFCIAVCSFRYEVOOEBATVRQPKHYGQXPXAGCRKLMRQFDUOQZBIYVWMOCWLJWHDTTSEWQYYUSLQTCKTXZLFXDBMRWJELVPXGKHDOFIUFFHWREOULLOONDYZGMJOVEIDTMUSXOSKGSJIKAZCSJHGIIEBABMJNBJPW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AQSKQKOTRMEWCAJBHLFGRQCJGQNUNDLMFLKYTTPPUPDXVSJNTGCSXTAZNZGATB");
    tmp_msg_0.feature_type = 45U;
    tmp_msg_0.rgb_red = 77U;
    tmp_msg_0.rgb_green = 21U;
    tmp_msg_0.rgb_blue = 177U;
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
    msg.setTimeStamp(0.48359007417410893);
    msg.setSource(8025U);
    msg.setSourceEntity(216U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(195U);
    msg.id.assign("SUGTPYNJUZXGO");
    msg.feature_type = 203U;
    msg.rgb_red = 166U;
    msg.rgb_green = 20U;
    msg.rgb_blue = 191U;

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
    msg.setTimeStamp(0.12395081395983132);
    msg.setSource(39431U);
    msg.setSourceEntity(32U);
    msg.setDestination(147U);
    msg.setDestinationEntity(52U);
    msg.id.assign("YZTVXXBMUWERDBLCYSQFBBMUXLTNAFHQPJVECNJXOLDONTRSZGRESUPMEIAGBECSWVWSWJAFQWIRYGIMPONHTACDSVKOBQXLIWEWLPTAYXBRVTUAPTMHAALKWHGQFSJVOKGLHDYYHJCLIRCZTEXAWARCFNKBIEZYGKGSDDIJUIGXFOCBVUEVYNDPIMXMZZNQPKOFDEQZRLWBKJJYMPZ");
    msg.feature_type = 83U;
    msg.rgb_red = 193U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 52U;

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
    msg.setTimeStamp(0.3898935498359106);
    msg.setSource(35364U);
    msg.setSourceEntity(44U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(182U);
    msg.id.assign("UIUOIXHMJKYPBNWHDYFDFPDPGLLOCBKOJYDBGSXQMFLTAVXNRUHFCBYDKXWOYQURLZTSSNEFCHTABNSXGLROTQDNVWBIVZAPNVIUUWPEJNJCMPHBKJAEXXXOINQBVZILPXTAEBEZEZRFSMJQAARADSDPITENDEZFVCVMKGXYZOCH");
    msg.feature_type = 157U;
    msg.rgb_red = 195U;
    msg.rgb_green = 80U;
    msg.rgb_blue = 179U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.345687973588779;
    tmp_msg_0.lon = 0.3234730846466801;
    tmp_msg_0.alt = 0.781966084112858;
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
    msg.setTimeStamp(0.05738352547110137);
    msg.setSource(51241U);
    msg.setSourceEntity(91U);
    msg.setDestination(61097U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.355002430945057;
    msg.lon = 0.5042655767148777;
    msg.alt = 0.38178846084512774;

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
    msg.setTimeStamp(0.33847460008029695);
    msg.setSource(5374U);
    msg.setSourceEntity(26U);
    msg.setDestination(61478U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.6993036631997646;
    msg.lon = 0.49277489619579107;
    msg.alt = 0.5274997392737808;

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
    msg.setTimeStamp(0.5386124058216697);
    msg.setSource(36878U);
    msg.setSourceEntity(4U);
    msg.setDestination(21158U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.49569455443270827;
    msg.lon = 0.11079142886298465;
    msg.alt = 0.3533773009751372;

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
    msg.setTimeStamp(0.604328073401945);
    msg.setSource(9398U);
    msg.setSourceEntity(21U);
    msg.setDestination(50188U);
    msg.setDestinationEntity(220U);
    msg.type = 54U;
    msg.id.assign("ZPMGTFTOLZVABJDDYWBKURFVJBJQYDRNCPJTIXDLYNZSKCUYIRHHECBUTBQFAKBAEELCKCPITUNKXCTISGPGMVHRNAFGMUEYZJQAAPYURLVXFIGPCBQDHHXEKOAWRGQNQSDPWSHOKUZGELRMJMBOEPESMJMAXWZTCSJTNHDEYRVYLOFOOISZHSXLNRBSWNWUTZKDMXALVWDPCGFBLFVNVGQUADP");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 11927U;
    tmp_msg_0.custom.assign("CSADVANDCAOKOOIMJIGSZLBVPRAQIPJGQNFOUAEVRBGPPEZUEDXLJMWENSXXZMPFBKFJIEHBUWCJTAUINKTARWLUEUYHKHSAMXJZFGNOWFOVXKBGEFWVMSUPGLHVHRXDOYISANELTMYKBYDKQKWXNCFDUIISHHUAPBGTJ");
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
    msg.setTimeStamp(0.4207317989192003);
    msg.setSource(35992U);
    msg.setSourceEntity(218U);
    msg.setDestination(50328U);
    msg.setDestinationEntity(100U);
    msg.type = 60U;
    msg.id.assign("WVVFFNSMUDTGNIUXMMMCFZJUWOMKNJDNQOZXGZBTYGTTTLSELWQOOOQBMCVFIUEGVJNNAVZIHDLFKUJPAEBHKXDAVDYWNYTEVTCGYZJYXEOXHXDQAGHPC");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 130U;
    tmp_msg_0.speed_min = 0.7782846541785136;
    tmp_msg_0.speed_max = 0.8409095138090148;
    tmp_msg_0.long_accel = 0.18993880840932587;
    tmp_msg_0.alt_max_msl = 0.903052526061784;
    tmp_msg_0.dive_fraction_max = 0.307055912593876;
    tmp_msg_0.climb_fraction_max = 0.5022900326748982;
    tmp_msg_0.bank_max = 0.9045549559499161;
    tmp_msg_0.p_max = 0.7624640505782201;
    tmp_msg_0.pitch_min = 0.9397502774880047;
    tmp_msg_0.pitch_max = 0.14614947423822922;
    tmp_msg_0.q_max = 0.4850316987924801;
    tmp_msg_0.g_min = 0.7374615011259993;
    tmp_msg_0.g_max = 0.3400346758902659;
    tmp_msg_0.g_lat_max = 0.020569594603544905;
    tmp_msg_0.rpm_min = 0.9258276866789016;
    tmp_msg_0.rpm_max = 0.38271392900886436;
    tmp_msg_0.rpm_rate_max = 0.30121222196304676;
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
    msg.setTimeStamp(0.18047735681173682);
    msg.setSource(13289U);
    msg.setSourceEntity(2U);
    msg.setDestination(34415U);
    msg.setDestinationEntity(242U);
    msg.type = 49U;
    msg.id.assign("XLOBVGEOGOTHIMVGGURELIESRQUXNAEEHYJOQBLILEUQPBCP");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9479361271897546;
    tmp_msg_0.lon = 0.5837444196513738;
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
    msg.setTimeStamp(0.74117530305597);
    msg.setSource(61482U);
    msg.setSourceEntity(61U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("VFSBQCAIJVYPKOFMGBRDCPVVNTRWOBQXQWELPIFJMZVQABNOVDYUFZXGZFIHBENGQONSAEOAMEHETUSJTUYAXXRNDMZQLEPHUDKFNZJDMNCJGYBKTGAWRFRLEZRYBXUPRMHNKOSIMLOPJLZYXQJKSCPXKLHAFSRHCVTVDNAWUIXYEVLCFWTMVZULCLDC");

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
    msg.setTimeStamp(0.5664828058937437);
    msg.setSource(32336U);
    msg.setSourceEntity(173U);
    msg.setDestination(712U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("TUJYQMPMAPFYVXICNBAMGOSLICCEIHZTJTYGYENQYVCSBQTSQDBYIHLADWXZFSBNLWJTLDQKJXUPSZHFHKKVDCZIZLJPZRTBLNHVWXTHEWLFOZMVBSNHNJQGLZIJTAUSJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PCNPLUFZAFQFTFHNRSIGTPSQULOXTNJIGWEGJGAMXWLPANXRYHPLPFKQRFSDUUIBKBAYOYKOMSJVHFOIULEGIRXADJQYHYGZLEKQEHXHMMZQVYCQBIMNWMNVPVDXQBIT");
    tmp_msg_0.sys_type = 71U;
    tmp_msg_0.owner = 7514U;
    tmp_msg_0.lat = 0.45830412474820414;
    tmp_msg_0.lon = 0.47379608063873824;
    tmp_msg_0.height = 0.3904285249243271;
    tmp_msg_0.services.assign("ZXCMHLMDVIOZDRGQXVNCDNKTQHQSFVFZFWJEKBIWIBLTKYTYHCGJSOYQDHFWXSTOBFDAWPWQEXNIEDSUEYHJTNUPFFTJWXAJXCJLMAGGOPOABNODBJRKYAPXRSNQKSZULRNOHZKWRRRDGHYLXFGSUIKCJUVAQIB");
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
    msg.setTimeStamp(0.43165634039097545);
    msg.setSource(64623U);
    msg.setSourceEntity(168U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("LRKXGLJNCFYEKJPJFGEUWRUFCRHQNMAVFEOVMCSCKDWDRNSPTHYAANVQOUQNZCFQKWXXJHISSOWYORAXQWXUZSDFCWIPSEVLIDRYWZEUJCGTCRRESWETHTHWBYPXXNVZPLTDTVBKMYQKEGGILALBZMOOPKXQGLYJBATHOUFUMGAMQNVUIXOAMVAEIZQBIIYGKQZKNUBTFHONWOJBPAZBSDDIRRFMDMSET");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZGJUMOOKFBTSCBYIMFJLZMNQCTBVKWPZNND");
    tmp_msg_0.sys_type = 3U;
    tmp_msg_0.owner = 51617U;
    tmp_msg_0.lat = 0.4709290019268876;
    tmp_msg_0.lon = 0.3552101015750463;
    tmp_msg_0.height = 0.592285968140186;
    tmp_msg_0.services.assign("FAXVIWHAFKPBSVLIZMUGVHOPCEXTIHBMFUXLDVUGRWQOJXLXJXXJZEHGWEEWPBAKBLRJQNVCYSWLKUTEYKSMUDSJ");
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
    msg.setTimeStamp(0.19516722719945345);
    msg.setSource(31304U);
    msg.setSourceEntity(100U);
    msg.setDestination(55944U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("OZBKEPYOPYRWXZUWZHS");
    msg.predicate.assign("GYQJLZMCNEXIKWVBFMIQXSWUSVKFCCZHYYXOIZJRLTRBFBGIQEASHOADGYTKPIXXGUFWSJCNAYPNMFJZSMSLFJORXEVQDAHWNMNNVIIAGIRBLMMKQJ");
    msg.attributes.assign("DCSLKHUUSSNTQ");

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
    msg.setTimeStamp(0.3243181716567638);
    msg.setSource(59082U);
    msg.setSourceEntity(148U);
    msg.setDestination(46312U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("HRMUIYTSPKNUBNPIPLGSTR");
    msg.predicate.assign("HPKFLXYWHJTBYGZXJLQXBBONZBTAMOECGQUAXNPAJDHQKFHWODKNARQYVMCQBRHIFWJQ");
    msg.attributes.assign("TVWBVFQLXSXURDERVJOPHMALCQMAYSKMKASIKNJLUEGIWYEXZHVNGIQXLEQFTQYNSBZURDLQDIDCIIOBOUAGRZUJHGJEUVEZOUWMAFDJZKPLXHYUXRCHEINBEBTJXQEGGXPZHVDWCGKSGLQDSLDTRYBKLRTBKMCRBIAVYUVRRNWUZOCMSNGGODJK");

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
    msg.setTimeStamp(0.6379084355455061);
    msg.setSource(37054U);
    msg.setSourceEntity(223U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("DNWTXMIUTUCOWZXVYFWMTPXBLNGXBHGRLXEZJFPKVXIGHIUGQAGQPFWFKTFEZVUVYKEBIIRQTHLIWJ");
    msg.predicate.assign("ODZJDYPNDJZKAKXTMTILIVZLTHZTNAOZJOZCUXWTOFIHHVXECIAXNXLBBYRIEGPACOJTFEHZAXCXMRFGIOEGSVGHXYGUULUPENMWHUDGRPQWJIWPLTMUVJDPYXMRAEORQNEKHUFCMCWXFTJDBTBKGAKUKSSLCAQRDWZAFBQJLSUSBMMAQFNZZYOEDDCVMNVK");
    msg.attributes.assign("UNBQAJVOMLDSYXHDHZNGHNGIKELNRLYUPEXEEWWKDFFUVDEGHCJSXOBBPVPOMZLILRLIWPDRBXPRL");

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
    msg.setTimeStamp(0.6116196612072932);
    msg.setSource(48498U);
    msg.setSourceEntity(88U);
    msg.setDestination(21638U);
    msg.setDestinationEntity(30U);
    msg.command = 47U;
    msg.goal_id.assign("PUSWECGIDXSJTTGWPZEORJGBBZVAJKMXAHXJOYUBNKZPRMBFNJYFYZIYQKDPXMXWGUDGFPHUUEIASVNCESAXOLCYSLNVFSEDKIHXQAGTRVZZLENWLOKYHATDDJFHQVFRHQDNIHSMWCINZUDYEKRNQMEUOYBUMPSHQUKJPRLVOQWHGF");
    msg.goal_xml.assign("TCYCXWVHWGQAKKMLGQZABKYYRPISYOFXQACVMLMLET");

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
    msg.setTimeStamp(0.19402619765880325);
    msg.setSource(5349U);
    msg.setSourceEntity(80U);
    msg.setDestination(23379U);
    msg.setDestinationEntity(142U);
    msg.command = 0U;
    msg.goal_id.assign("SNTBLSIBUXXFDKXOJTXPUBJREAYFHGCCLOZEAEHUKPYZ");
    msg.goal_xml.assign("WKJTPJRGEDLCCUTCBETWXZVUMEGIUODPIRUQYZOVJLPEKVMRHGITRKEYJEZHZYJPHVCBWWFDIRNFWOBKTWFHXBZHPJFWDFSSPETHQVCSNJHGTJZXXGGSKTNWVFOWUQZOZ");

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
    msg.setTimeStamp(0.6712653054261852);
    msg.setSource(23498U);
    msg.setSourceEntity(148U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(54U);
    msg.command = 55U;
    msg.goal_id.assign("SKYPTJWJMIOPKXHQRRZBNKOQEFJATVRPDXFRVAGLXEMAJQJWBOLDUIPVC");
    msg.goal_xml.assign("JWJSIVNBGNFZFOJITLXSWAASVHWTANMOQKWYHYWQRCKREDQFBHCOFNBRPGBGITNDVNGCHKZQBLDFJKTZHZIXCOWROHNKZETMAOPCYATDWAXXMSOXTMBUDPXUSJBRSUISKNDZKQFJFEJVCVUSQAVIDGECDSLZXYKXOIERMGRHVKYMBMRBWLWGUWNFLYDPELMYQDLZZGRLMEVZCGRKCSITUTEHQQPOPPHPXEULAIJJB");

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
    msg.setTimeStamp(0.6269783405914852);
    msg.setSource(13928U);
    msg.setSourceEntity(7U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(249U);
    msg.op = 180U;
    msg.goal_id.assign("EAMWBEILRTMMMASCGABPWISFGKNVWZXMAIRMOUBNLXWBCHPBYOZEFFKPIDKNATJTRYLGTQPKILXPOVUVFJHXUOONJJHZRSRRKAP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WVMBGSEFKINJVOPNSQDBEPJLAVQUPDHZMUCKUMPNXARAJEZLLDVKOIZGAKXLLCZUBRSDQDPQBIFYSTPOZGEHHOSRBIECXSPMXSPAVVEHROOAMGKAEYKYTRUCGNZTLBRY");
    tmp_msg_0.predicate.assign("EKEFOTWFVCGYASUYXXZKQHJWMPQKAUCHETLBXPMSFWIDGBIRUURVMGLUSIHIJXJJXFHGBADLZPRGSYFZTJVSJONTYEDKNPCUWCMKMJOOHRYYRBBJT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TRFKPSBHSNYRBBGBVNPECIQDNIDWVJRCFXKONOIBIYAOJTIJNXHQUXRYAIZUGKIDERZWKQGSLFYDORDVMWVYAQPTFYGONZAAMOUEVGXUZXNTQYVJLUASQKTYQEPVSFGYBSETRMMWDLSKKHPBJPEEUAALXLPTZWLCLXSFZQJCOSCKRMRCS");
    tmp_tmp_msg_0_0.attr_type = 233U;
    tmp_tmp_msg_0_0.min.assign("LMWEYMUAWZZZKXXKZVBLKMKOMLLDJABGSKKAAQZRAIRJKNCDNUPLFGQLYVKCNCPHDMHIVURJ");
    tmp_tmp_msg_0_0.max.assign("HQOGWXRCCQMIRCTJSIMBFHTYZGOTUNARTHYCXALBXOWVZPIVRLKSCBLLIYIZWTBNUEVLHLQVJSVQNWASBENGZAGWVIDJBYAUMVPSVSSDUPHFIFJDYDQIJEHHVLKRNRFKGHMQRYNWEFDJGPAXKPKFRFUXGFKXPELCBECWDROAQDQZNYOTFOBOUMTGIEZWPCMOUSXPJNZMGMXAL");
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
    msg.setTimeStamp(0.9300563192962493);
    msg.setSource(22797U);
    msg.setSourceEntity(213U);
    msg.setDestination(23305U);
    msg.setDestinationEntity(12U);
    msg.op = 143U;
    msg.goal_id.assign("JOJMGXKYWEMOCYFJRZBPCEFFIJVMVKPQRCOJQNZSAYEIZFFTUUXUOMQQXKADWDRWEJBYXJHWHPSHAGC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CHQBWFKNAPAZUPCIYKEIMLJAANRQSO");
    tmp_msg_0.predicate.assign("UZCKXZCKXMSDJFEEPEFOMVPUVQBOVWANZKJIJHRMXOARETPHTMDFVTLOSLBBZVPDLWHSKFBLHGUAHRUHZIHGCGWZORAJGNJIYNKYXWVFYXIGEYOBQNKQIEXORKEAMTCMFVMBRYABZMXQWWSQDERFLTIYSVEDUIUVDADNCHPORBXCBCGVZNCJSSPDWOPQHA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OFOSFMTYOMOBSTTABZQUBQLXXQZNACJFDWTQZNKADBSWILUHBTVOIXPKPCCGZBJFZVDAVYT");
    tmp_tmp_msg_0_0.attr_type = 185U;
    tmp_tmp_msg_0_0.min.assign("OAKIUCAVYRODIFJDXQTANMCWSYJWEMXYHQVKNJHZEIIBEGMEMJWKIPMCXHPKUWCCIEBQPQWBYBGLFSQMZXODHCVYHRRCICOANAGJDFRZDSOQEWWZZSPDJVUOBZRMBGNANNIWJTYJEVLGNXTTOXFUUSRHUAVFGLULLHSTZGBUQYLDIKKJPMRSFXRDESOXKFYLAAKPJTLQPROBXKGSCPZZQZBFMGHFEWNYBVGPVDSRN");
    tmp_tmp_msg_0_0.max.assign("CWVPSTWXDEVBHGVNTWRUMDSYVDQURVHPZMNCCXNUHLDHMMAAZZGITYMUMZWDZWKPBSOLOBQLQEXYURBCFJQMFAAIAYIQFQBNRUJJHVYINHCBLJPBEQISHGUPJKPHPGEFBLKRARKFGBODPCUEISXRJMLMUGFKXFYZVEOZKFWIOVYVGXSZCXUQALSLXZFNDYBT");
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
    msg.setTimeStamp(0.36307976146817744);
    msg.setSource(23644U);
    msg.setSourceEntity(220U);
    msg.setDestination(36776U);
    msg.setDestinationEntity(163U);
    msg.op = 168U;
    msg.goal_id.assign("NEHHUGRQFDFNKYGMYZSPIUXUOZSTAVFWIWSBNCPZMGTBAQLXLEEHJYUKLQZNFPMEBSUZDMWRWTFHBMCPLGOOENSCUGXWQFOPHPDDCAETBRPTNGCDWOVKGAKWNYQAYNKOUDTIPMJGOIDISLRVPBVUEXLUQCKONCLTKVZWRBZYIXWJHIVHVMFYEALJAYZS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PXWMQTRRZNGIGCZIEOPFGFEKACVAUXXNPQYCFSGHDOTEKSGUWZTBJWQJONEYHDTRINPVUTNRJJAACLZVDOIDQKNOWNBCLFQGUKUQJENXUBSYZNFGPXJUXIVHTSHMMBKLKMUKLMGZOSPPLPFDCCVEEWIFDGTJAXRSQYALQBFOWJYHUKPLIMACIBRRPMQDVZYWOC");
    tmp_msg_0.predicate.assign("GCNJWHTWYVSTUFHNRCGRZZRVVABBHCKSANRPLWIKEMGJDLOAHPJKKXUQMYVYTRHFQKPTKPXSYMYZVB");
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
    msg.setTimeStamp(0.11288458949581537);
    msg.setSource(21547U);
    msg.setSourceEntity(44U);
    msg.setDestination(31601U);
    msg.setDestinationEntity(154U);
    msg.name.assign("NYFYYXJJEGIUTNDVGBZLCUQJLJXAQIWCAWVRQKACKFEZMPWRUEUCHRXQVRJKTSGYIAEAITXVEHOXUEOBPORHBTKZDEHVFYCHTZCFLOGPFXIRBSFNW");
    msg.attr_type = 87U;
    msg.min.assign("XWAVKLZDUYICLZUMGKIQZWPOVJUBDKIDSNTPMFCSHGKPJWEGGJNRCOVOIPSJVSKAYLNMBXEYNOTUCQXOSXFBEWNAKPZJIHMTHHPHMOOQVNMGDLHDHYFMXSLDMHFSWRJZBNLDBGNNRJBUNOQRIRFLBRUZLAMAYTWQQTVPJMYDDETWSGQZXYCTBXXZPSVCUZBGLUXKTQHV");
    msg.max.assign("AJERNDRVPWGURUFYOJASMTAHBLLYNTKINNYKPFBMZALQKZDIXBCHRUEPZRWDIVPBDZMLJEBGYKUWKSPEPBQGQWJATMYLDPFOVFFLRJSKTEOOUJZOPZHIUAQACXXSTXXUYBRCXEXNGIGXDMFBWJUIYGJKQFWSSXHNESIMNROTCRHSRDVHAVFHYEUMFJXMIAOLVOT");

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
    msg.setTimeStamp(0.6496098852872243);
    msg.setSource(31001U);
    msg.setSourceEntity(200U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(132U);
    msg.name.assign("KILFKUEFZRSQICDZHAWOOHYAATNZLUIHNDXBJDHEQANVJMLFWWEJPEBQXVDBVKBPDXCGWRDZGYJWEXYTQOBTMVHBSPYZANIBQKAXSEEMSQMINFCKWSOREKJRLKTETFZFUBLRMNJSYYOXOGYVYTLGHYDQLPIJGRAJSQPTDPKTWCUAOXRNXVAF");
    msg.attr_type = 30U;
    msg.min.assign("WLXJIZVGMCOAYVMAZFIZPZYCEUJHTUXPJTLAKYARJCIIZBEFULDCUKVIILYWWUHIDSZSFQJGXXUQHEPJUPGUEREROOLRNMGNONDPESTVHQHWFRJLWIKAVWQCTISLVQLYKAUOSPXKJZOEEOTWCWFNCDHRWQAMMSGXXEQGDTQNTLUBSBACETHVASO");
    msg.max.assign("NIBOXKLQZBTQSYWHZIBLNPALXXTFAKRBATQSIANMPHHIRLAYBFZSMCJEYWEWFQJTRIJSGGMPXVUDPJZUJEMGLMKKQASMOCRFOSVOOSJAHBFHEQMHGGPXBIUVRWQKYFUEWFQHSAERKVVZVRYCHCZLPWEEFIILBUDGYUOGTKNFDRRXYZCGKWMCDQPAZHDDCAONZBMJNKGTJMJWWDLTUPKITLXU");

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
    msg.setTimeStamp(0.6395179974749683);
    msg.setSource(50533U);
    msg.setSourceEntity(5U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(246U);
    msg.name.assign("RNYHQBRLCQPAINXBBJMGAKYEIAWOFJEPFVKTSXUMEQFVBYKNEYPNZLMKNVCZFKXTDDACKXJWFWPBCFPIMHGEOIQ");
    msg.attr_type = 252U;
    msg.min.assign("TUWQTREPELJEUTMGLLQDOJWHEMRHQXRMOYZRSKLMSMOFVNNOXPWFEUZGILHQPXPZBEHAFRSLXGGWOHSNUDXCKVLAYZUVPANYJBXYPIRWFHSATHQVLYRJVUYJWRCIAVTRTBGDKWXJKIKMMBVALPN");
    msg.max.assign("EFHYEVFPFCCJRANGLVSZKRBWWIQJEODXDMWMPNLTPCNNQHRTCGOVSGGNTYHMFHAHKTBJZJUJFYWQXCOLYQOZNQFGUVWUDWLXWBUGINREPZRYXMSQDDSRADFPAYJKYFGEVYRASLUAEPDBBVVCMXZUUHKLOPEBTSZOINQJIZWBCSHAOULTLHBZMTNPUXTSKDGAGKDTCAAXKORFRIZRSQKVQYIOJF");

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
    msg.setTimeStamp(0.4150786359216675);
    msg.setSource(18562U);
    msg.setSourceEntity(27U);
    msg.setDestination(57797U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("FVCTSFECJGIWVEPZPSMCZVBDMOIOVEAYRMKAIGAJHHMGCWIUZLEMRIJAZHPRIYNQMVWKXWCPVYDGCPMUO");
    msg.predicate.assign("HSNRGSERMZPUFJWQLWNHONVTOFWEATLIXZPRYZOUSGUXXFEIHQDPWSHFLLBUCOGNBBXGFJCBVVMDIZRUPKAQTKMFIRKNTQSJPXGQYUUJYSJWKYNWOJOEXDANMCLLEAWQFTJPIHXRCYEHCAQVLMZZRQTDXMWFKIBGBBCOYRMASORRQJDDFULCHBDALYJMNZFPZGNKVUTWYLHQUJKSXBEVGVDGEBKEICTVDCAMCWKTPZI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RDQNGETQYIORXJACYADZOUDCXKDLZYWYTFCDKIRFHGFGEEOKNMQLJLHVDYLCHMWSQECJRLZGRUKTLAICBUMJHORQKMJBHOPMPSTINNXQNUTSHAQLNEICSXQFIZJWUIWJRNDYA");
    tmp_msg_0.attr_type = 207U;
    tmp_msg_0.min.assign("VLFTXIKFZOUEOGHMNCNITLYTLJWQJXCCSJRRGKHZMYSERUGERORFIKSBAYNNDCWMTHPUSQLUUOGEBFQPEFMNAZHGKSWDJPKMPPOXOVWRRMHQPHOTEWLBAZEZJCTKMXHZWXZCKLJIGQSTKSAPBDNYBYQNTHBYGCDQIDDMUBJSQOPZACUBBVJFLIUFTDVWEFMGVIKFD");
    tmp_msg_0.max.assign("QSZFGKMKWVVGDBCOWGJAIGPZIUEYZBJDPZLFPQKOZDAVYXCN");
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
    msg.setTimeStamp(0.6786178148116319);
    msg.setSource(53361U);
    msg.setSourceEntity(139U);
    msg.setDestination(44303U);
    msg.setDestinationEntity(208U);
    msg.timeline.assign("EBYCJEFJFFWYIDQLIMKSBJGMUDNZFCCTCEGLZXQVQRVBHTIQOXPJRCWYHUTHSIYJMBAAQRSDOLTHZS");
    msg.predicate.assign("QDMJXFKECNQARDBEPBXQYNKNIVCTRFTUFLPHWPWYUIVOGUHGKKSXTRXSBCFIBHPXOMRWAJOKLDIJOZCFTGOZYFLCISAJAWZCCUSITMMAVUNMXYNCLZPGTKUPQLFATGELJZBVEHSLZSMQURWTVGB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XVLXAPSNVBTRUSVVBKCKJXDOAUEVJROJCZQPTYPQJLGLSVSHUTIAJAPLQAJGNGFTXCWQTKSYIOUUZXDJCWYWTDLWBMYZHRRNNZVIXRGEYMAAGHSWFLSPZTGPQFBAUKENCENDLIJXOZUVOZKTIDBSRTBZDMSELFOFMKFQEGZKLNBEKUPMUMCBWDXOOMINPAIUIOZR");
    tmp_msg_0.attr_type = 191U;
    tmp_msg_0.min.assign("SEUXJGFKWKIIPQWKNMCNOJSXGFWRSIUYUGZRQXPQFUTSCJD");
    tmp_msg_0.max.assign("SQLUPJEUPIOKISUZOMCDZUWKUDJMOLFZWMVTUWNOITUNQMZCESFEYVWADYHPBYXQGAPKQDXIGYTFYIUNAARROEZGJFXJGRCYCIDEMBMGXBQVNUHPWSSZJDAEKJGIOKWBWKLVRHLBNWBSHHPJMXLNGHCAXVGYAOIKCCRSOKOFLTZIDTRSMPBMWJFKFBAXVFSNFVCSHBCDEDQLJZZGTVQPHZAXLTRXXIPE");
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
    msg.setTimeStamp(0.5100273784648087);
    msg.setSource(34098U);
    msg.setSourceEntity(175U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("PRYVSTXIJJZWFYOWX");
    msg.predicate.assign("CNYKCNPRYPMDFVIXJFOGBTEKKAHLALUDZYIQEPVCFRVERCPDEVYZUNTALCGV");

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
    msg.setTimeStamp(0.0006184066055526793);
    msg.setSource(3039U);
    msg.setSourceEntity(240U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(201U);
    msg.reactor.assign("NCEKVLAZITEBOHFYDVGUGDKELRYBEEVXDMMFPNAARQCIPWUODINPSJHXXSTZJDCZLWBLQBIONQSVPSOOFTYJNCJAYNHQLSYGEKNXBDWURYMDUYQK");

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
    msg.setTimeStamp(0.4573915144928362);
    msg.setSource(21784U);
    msg.setSourceEntity(137U);
    msg.setDestination(28584U);
    msg.setDestinationEntity(144U);
    msg.reactor.assign("YPBDOQPWZRHDIKSDXLBDYUJOELOYXQKNFQKOOLRXYPFWSVZDJYGMEGBELWMHYAFLLDFIGLTFEWWSSBGWBBVHWNMTCUJKJQQVAIKUFJHYCJASNMCXOKQBRRSKYMVPFNCSDUNUHEGOTEERIAUBIXXXIRMHPHCEFNZKRZKGZJIXVHFRCYAAOHAZNCTLPRITU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQKPREOFMTWGSKZFKQWAZKNTYBZEMPVNSXIWTRPAINQDCZKUASMGULHKNFYRYUWCLYDFISODIUDUHTCXEBLHALVIZBIOKFNELHYGBAXJZTXPYHGENBRMGWQXXFPLKDTHFKVWYUOQ");
    tmp_msg_0.predicate.assign("TXNCZXSMHYDAXFZTSNVPEHKVAIGFFRHEAGKSVGNTBVODPWEOQDAPWAGOWSZDRLCJRSKHJUDOPLTMKSELIYABNSPOUFMTGRZVIBWEKKHVUJWUJCBYSLKCFVPX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FBGEQSCYWHSSIUOKSGBXQRTRLBVDFQINHWHZUKLPLAYZURMMYARVETFYKXUJCZYMIEZDATSWLDIMNLPHWMNLFPJEBZYGPRXFACYBABVHAIEPOVHTRPLNXCIVWCBAELUMFBGVRTKUCWOKSDILDDWUMRMTWOHCZOVEXKQHNKSQPYEPXPNTISA");
    tmp_tmp_msg_0_0.attr_type = 21U;
    tmp_tmp_msg_0_0.min.assign("UYDTCZRLDTQFJFEURNCROXZEVPUBSJSKOAFNVAHVKKLTOFBSHTIMASNOIZQJMACKVBWCNSJTWIDMIBHVZPQTXMXWDSLGBAJPBKDQHRLYQIPHIQWRLABTEINQBUXQOXJMYEYPCLGNFJSEPYUNWJCKRRIZNAWKGDHZXSFFU");
    tmp_tmp_msg_0_0.max.assign("DURXMIFTROATUTKCACQFBFXXJSCEKQHSURJFKTZYIIMNYJJYHYSWSGFVQWGRBPYHYFGEULCDBWFWSJTCHJPZZAHGGLVZDQPCHWOGVAUAHIMRKDZDPIBTKYORLOQVJUNNEDSVWQUEPISQOFZWHNAVWMHWEBTPAXGTJNQZZ");
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
    msg.setTimeStamp(0.9956445189432443);
    msg.setSource(60156U);
    msg.setSourceEntity(38U);
    msg.setDestination(22237U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("CHGUSUWJYFIIAHMXIKEWBSTAFMBCWRWLPLRHKIXHAGVBMTBYNIOARQKHAJSFVEXNYUBXZYDZVKUBNFISQLUODLKNDPAF");

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
    msg.setTimeStamp(0.05372876658444947);
    msg.setSource(23691U);
    msg.setSourceEntity(36U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(99U);
    msg.id = 66U;
    msg.width = 2821U;
    msg.height = 2709U;
    msg.widthstep = 23155U;
    msg.channels = 167U;
    msg.depth = 119U;
    msg.finaldata = 214U;
    const char tmp_msg_0[] = {-47, 60, -89, -52, 52, -73, -73, 119, -3, 17, 103, -96, -105, 122, -86, 110, -20, 107, -49, -123, 69, 2, -75, -1, 96, 96, -40, -53, -42, 85, 20, -16, -116, -104, -60, 38, -15, 113, 118, 21, 82, 76, 107, -19, -39, -3, -128, 0, -61, 12, 81, 50, -66, 37, -70, 109, 7, 115, -25, 113, 36, -2, 37, 116, -3, 33, -108, -55, -35, -100, -47, -41, 76, 78, -55, 16, -11, 93, -67, 46, 81, 54, 73, -32, 103, -1, 119, 10, -24, -36, 62, 17, -6, 45, -33, 1, -80, -22, 95, -17, 22, 55, 45, -76, -102, 69, -54, -77, -92, -76, -40, -31, -60, 78, -51, -64, -98, 62, -90, -122, -67, -54, 79, 61, -61, -12, -80, 27, 62, 123, -120, 9, -6, 49, 74, 18, 81, -119, 30, -72, 119, -95, -71, 115, -117, -120, -63, 77, -63, -8, -87, -106, 21, 41, -35, -123, -18, -42, -39, 103, -52, 11, 72, -86, -125, 110, 57, -122, -121, -85, -27, -96, 34, -24, -126, -66, 100, 41, 74, 90, -84, 76, 94, 94, -12, 50, 36, -74, -73, -115, 7, 45, 27, -97, -7, 0, 46, 2, 36, 42, 32, -99, 96, 124, 82, 70, -108, -128, -31, 84, -76, 57, 99, 87, 57, -122, -32, -122, 9, -111, -95, -85, 7, 116, -44, -62, 74, -7, -113, -17, 120, -88, 95, -119, -98, -75, -111, -97, -107, 16, -38, -38, 98, -26, 86, -128, 122, 40};
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
    msg.setTimeStamp(0.5922304941432123);
    msg.setSource(41853U);
    msg.setSourceEntity(101U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(101U);
    msg.id = 247U;
    msg.width = 26152U;
    msg.height = 32316U;
    msg.widthstep = 16312U;
    msg.channels = 118U;
    msg.depth = 220U;
    msg.finaldata = 188U;
    const char tmp_msg_0[] = {79, -118, -121, -51, -24, 100, -119, 124, -88, 2, 41, -27, -93, 93, 25, 96, -101, 100, -43, 52, -83, -3, 114, -5, 76, -119, 1, 72, 90, -46, 65, 118, 19, -48, 112, 92, -71, -45, 103, 34, -46, -80, 51, 51, 79, -109, 104, 21, 103, 90, -16, -51, -122, -55, 46, -53, 4, 12, 88, 122, -81, 107, 13, 21, 89, -29, -24, 98, 26, -72, -30, 44, -127, 44, -34, -31, -89, 89, -13, 118, -90, 101, -125, 78, -58, -12, 40, -105, 103, 88, -18, -5, -58, -106, -71, 97};
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
    msg.setTimeStamp(0.5930977387741725);
    msg.setSource(49117U);
    msg.setSourceEntity(62U);
    msg.setDestination(15315U);
    msg.setDestinationEntity(245U);
    msg.id = 39U;
    msg.width = 21592U;
    msg.height = 14078U;
    msg.widthstep = 18421U;
    msg.channels = 185U;
    msg.depth = 171U;
    msg.finaldata = 45U;
    const char tmp_msg_0[] = {-52, -80, -6, 56, 59, -37, -9, -128, -25, 44, 20, 113, -36, 48, -103, 90, 52, 61, 31, -103, -60, 90, -117, 39, -19, 115, -23, 41, 77, 26, 80, -114, -121, -52, -30, 70, 8, -78, -84, 82, 97, -122};
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
    msg.setTimeStamp(0.5866016034825179);
    msg.setSource(4468U);
    msg.setSourceEntity(138U);
    msg.setDestination(2726U);
    msg.setDestinationEntity(10U);
    msg.width = 17656U;
    msg.height = 53692U;
    msg.channels = 104U;
    msg.depth = 94U;
    const char tmp_msg_0[] = {14, -65, 78, 115, 36, -58, 61, -28, 122, -108, 52, 21, 113, -21, -116, 56};
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
    msg.setTimeStamp(0.1729147766033734);
    msg.setSource(11573U);
    msg.setSourceEntity(102U);
    msg.setDestination(47789U);
    msg.setDestinationEntity(17U);
    msg.width = 28772U;
    msg.height = 25353U;
    msg.channels = 72U;
    msg.depth = 112U;
    const char tmp_msg_0[] = {-89, -17, 89, -20, -22, 115, -79, 79, -89, -48, -2, 61, -85, 39, 88, 56, -7, -61, -120, 110, 101, 59, 44, 63, -101, -85, 69, -19, -47, 1, -95, 90, 62, -79, -95, -100, 101, -69, 119, 32, -128, -27, -46, 48, 25, 95, 94, -110, 120, -56, -26, 104, 98, 75, 7, 100, -30, 27, -27, -39, 63, -50, 31, -122, -92, -36, -43, -51, -12, -75, -112, 91, 61, -25, 69, 62, 97, 59, 123, -4, -16, -42, -107, -46, -55, -2, -50, -85, 103, 61, -34, -4, -28, -65, 87, -38, -107, 105, -39, 125, -14, -91, 13, 40, -110, 107, -42, 117, 70, -16, 31, 88, -12, -102, 53, 60, -60, -97, 88, 4, 111, 59, 65, -58, 2, -61, -126, 65, -1, 3, -85, -2, -71, -81, 18, 29, 74, -62, -113, -58, 69, -13, -121, -28, 11, 62, 19, -44, 31, -77, -125, -16, 28, 34, 50, -56, -5, 17, 67, 58, 97, 88, 85, 110, 5, -23, 97, 28, -123, -79, -118, -115, 123, 25, -117, 50, -27, -62, 72, 48, 121, 123, 83, 92, -95, 35, 46, -12, -21, -44, -53, -68, -31, -4, 123, -13, 41, 75, 22, 121, 99, 121, -122, -62, -34, 93, 72, -125, -42, -123, 60, 52, -102, 13, 45, 44, 125, -3, -26, -63, 74, -28, -46, -114, -4, -41, -31, -51, -115, -72, 43, -49, 73, 34, 11, -9, 94, 6, 73, 79};
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
    msg.setTimeStamp(0.14161341227533764);
    msg.setSource(19004U);
    msg.setSourceEntity(225U);
    msg.setDestination(53500U);
    msg.setDestinationEntity(249U);
    msg.width = 19886U;
    msg.height = 43664U;
    msg.channels = 170U;
    msg.depth = 110U;
    const char tmp_msg_0[] = {97, -13, 101, -56, 41, 33, -83, 63, 42, -107, 123, 52, -70, 102, -18, 8, -83, -123, 48, 17, 18, 59, 126, 62, 73, -98, -112, -1, -77, -104, -20, 97, -96, -76, -17, -89, 39, 98, 117, -50, 37, -16, 0, 92, -103, 62, 104, -73, 121, 44, 69, 91, -46, 74, 63, 44, 72, -33, 24, -52, -34};
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
    msg.setTimeStamp(0.56050726253302);
    msg.setSource(15665U);
    msg.setSourceEntity(143U);
    msg.setDestination(908U);
    msg.setDestinationEntity(125U);
    msg.frameid = 166U;
    const char tmp_msg_0[] = {-62, 87, 92, -19, -128, -42, 103, 29, 124, -19, 116, -10, -100, -32, 45, 79, 63, -112, -62, -33, 97, -62, -87, -123, -102, 118, -39, 29, 27, -40, 97, 98, -103, 89, 89, -10, 124, -75, -114, 47, 108, -47, 106, 87, -75, -11, -19, 120, 110, -113, -126, -91, 74, -110, -78, 0, 28, -117, -8, 10};
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
    msg.setTimeStamp(0.14865132165792383);
    msg.setSource(25614U);
    msg.setSourceEntity(241U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(98U);
    msg.frameid = 96U;
    const char tmp_msg_0[] = {-39, -35, 56, 111, -42, 79, 4, -69, 86, 33, 81, 85, 103, -14, 89, -32, 17, 40, 56, 8, 66, -72, 68, -9, 76, 66, -49, 105, -62, -31, 35, 4, -41, 76, -106, 73, -87, -22, 17, -7, -83, 5, -101, -37, -41, 20, 100, -104, 59, 67, 124, -103, 48, 122, -60, -9, -85, -117, -16, -73, 102, 17, -34, 33, 35, -44, 85, -92, 4, 48, 23, 97, -98, 49, -45, -77, 45, 89, -96, 107, 107, 36, -70, -39, -21, -119, -12, 27, 90, -72, -21, -10, -124, 110, -90, -35, -56, 41, 71, 60, 120, -127, 90, 62, 6, 2, 121, -54, -41, -8, 110, 92, 98, 123, -77, -43, -97, 20, 43, -15, -59, -112, 75, 91, 102, -119, 15, -85, 90, -36, -117, -123, 28, 44, 48, -108, 80, -73, 47, 65, -5, -68, 56, -25, -70, -111, -8, -15, 16, 18, -120, -40, 97, -21, 81, 106, -66, 94, -24, -70, 89, 61, -18, 106, -63, 17, 93, -111, 57, 9, 74, -5, -60, 110, -85, 54, -7, 81, 43, -107, -112, 28, -29, 62, -58, -106, -97, 89, 112, 32, 74, -99, -99, 38, 66, -29, 2, 27, -58, -110, 84, -27, -25, -48, -110, -54, -65, 79, -18, 20, 36, -10, 33, 42, -124, 26, 37, 31, -5, 89, -12, -106, -101, 31};
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
    msg.setTimeStamp(0.43564038139123873);
    msg.setSource(40527U);
    msg.setSourceEntity(10U);
    msg.setDestination(20945U);
    msg.setDestinationEntity(88U);
    msg.frameid = 154U;
    const char tmp_msg_0[] = {89, -125, 49, -96, -94, 71, 45, -109, 30, -103, -29, 67, -81, -124, 103, -85, 2, 21, 73, 106, -126, -11, 4, 113, -98, -116, 53, 0, 49, -33, -112, -26, 53, 15, 73, 23, 117, 4, -59, 9, -106, -23, 39, 99, 118, -68, 65, 81, 59, -20, 47, -7, -24, 59, 126, -75, 66, 64, -123, 72, 74, 45, 53, 97, 75, -24, 71, -1, 79, -28, 60, 121, -25, 93, 92, -64, -1, 4, -67, -1, -39, 14, -11, -91, 126, -63, 38, -123, 65, 83, -53, 39, -103, -99, 125, -65, 104, -50, -74, -112, 37, -74, -26, 92, 111, 11};
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
    msg.setTimeStamp(0.8935761888191115);
    msg.setSource(2430U);
    msg.setSourceEntity(237U);
    msg.setDestination(2512U);
    msg.setDestinationEntity(5U);
    msg.fps = 132U;
    msg.quality = 234U;
    msg.reps = 114U;
    msg.tsize = 55U;

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
    msg.setTimeStamp(0.5928417844183786);
    msg.setSource(12960U);
    msg.setSourceEntity(235U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(152U);
    msg.fps = 105U;
    msg.quality = 65U;
    msg.reps = 16U;
    msg.tsize = 29U;

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
    msg.setTimeStamp(0.3661964536820017);
    msg.setSource(42474U);
    msg.setSourceEntity(245U);
    msg.setDestination(38513U);
    msg.setDestinationEntity(53U);
    msg.fps = 237U;
    msg.quality = 125U;
    msg.reps = 5U;
    msg.tsize = 137U;

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
    msg.setTimeStamp(0.9603636354907049);
    msg.setSource(39554U);
    msg.setSourceEntity(122U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.2708773800716553;
    msg.lon = 0.5660137986338302;
    msg.depth = 106U;
    msg.speed = 0.6255893792564283;
    msg.psi = 0.5689099404098727;

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
    msg.setTimeStamp(0.4841805490186798);
    msg.setSource(62944U);
    msg.setSourceEntity(219U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.03476437280572542;
    msg.lon = 0.7734777298078537;
    msg.depth = 214U;
    msg.speed = 0.7972159875602409;
    msg.psi = 0.19875914856001908;

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
    msg.setTimeStamp(0.2234964931487775);
    msg.setSource(39133U);
    msg.setSourceEntity(159U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.4539261212731588;
    msg.lon = 0.3624280444769812;
    msg.depth = 110U;
    msg.speed = 0.8999472816047746;
    msg.psi = 0.5821154283036711;

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
    msg.setTimeStamp(0.14137625292583467);
    msg.setSource(33786U);
    msg.setSourceEntity(99U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(192U);
    msg.label.assign("DCJNAROTLEYQWGXQLKWAVSPJTAMNFLVAAGRSKKMCZQOCUTCVLRQAOUUMWXPXYQEWYNINOVRYKHGSFUBYIREALHPBNUTXHAYHJWDBNFUKQJDBLBVRXKTPGIGLBWHZZVEUMTUHEYFOQDDXMBYACHPXUEIGFDRFTFWBZPWRLVFPVFQGEGMKQSHCDLZOOXJSIIX");
    msg.lat = 0.7996159221301968;
    msg.lon = 0.18367209740771595;
    msg.z = 0.844363047930067;
    msg.z_units = 200U;
    msg.cog = 0.7820055420991391;
    msg.sog = 0.9276872645984956;

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
    msg.setTimeStamp(0.9993251630765746);
    msg.setSource(32688U);
    msg.setSourceEntity(9U);
    msg.setDestination(35329U);
    msg.setDestinationEntity(226U);
    msg.label.assign("CXIDVSUKPAWHOVTKMMHILCIEMUFGBTAOZONSYCLIURUQBSRNCHXLIKETNWVKSOKQLFVAEGPGXZPCPYQ");
    msg.lat = 0.27763678509002765;
    msg.lon = 0.9672986785356108;
    msg.z = 0.8113240422163943;
    msg.z_units = 98U;
    msg.cog = 0.658890317304334;
    msg.sog = 0.4576825199561618;

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
    msg.setTimeStamp(0.3028857813591793);
    msg.setSource(51772U);
    msg.setSourceEntity(143U);
    msg.setDestination(6221U);
    msg.setDestinationEntity(129U);
    msg.label.assign("FVPCETZKAMVLRPXPNPRZVKDYYSEFEDFWNUZZTTMCZLOOUDYFOJVXRFSUNYKWLYOJUGPRSRTQUPGJYVBSJNCBEYHNWKVJBHDZIARZHJOWLIZIMTVMKUDSEATQCQNOBGGYEIEPRXTWPQXXALTCFACNIBWHWAQXSAUUMFRBMHEOBQJHROIMBPGDBIJAXELICPXQGTCLKVJXFQCZHKLNQSFSMDKJGGWFBHTYVIR");
    msg.lat = 0.6245640706486774;
    msg.lon = 0.5262816466377764;
    msg.z = 0.8321724149801757;
    msg.z_units = 21U;
    msg.cog = 0.7607156898330699;
    msg.sog = 0.0982527184240185;

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
    msg.setTimeStamp(0.2674315324847114);
    msg.setSource(36660U);
    msg.setSourceEntity(243U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(73U);
    msg.name.assign("PKYAMJAGPYTVRTRPYMGHNDBXUXNZWUHILSMBCIWRVDHGKJWYXZYAFTUDXUOOIPESLAKMEGJQPLC");
    msg.value.assign("JJCUOTJCSYFNHPIMZDAGPRGATXVWFETLQSTBNREZMKKIOCFDZSCINAVEMWXELIUQNXYDYOWUGMCHGKRLVVKPBWVGMVKSWFSSWGXINDXHAWKDYHHXHHMRZAUYZFJZRFCPQREWNYXXODZPAUGKQTNBDEBUDPAJXSRHVLIFQKIYLCLPNPJJWIPJMTPBJBODFMYSZKOOOTZXTCYTMGVLHSUUQEQGBFFRLNQGNYJ");

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
    msg.setTimeStamp(0.10632792569321614);
    msg.setSource(55321U);
    msg.setSourceEntity(199U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(212U);
    msg.name.assign("BQXKUKAHOBXJGNTECOTRZOAWXCQYHBNIMKLIVHLRNMAVQPZG");
    msg.value.assign("NMHMQTPQTRBMPBSCCOZVLRAZSAQWHJWGNJBMLJWZTNKFGYQDTOZJOEOQLMAYIYLWJGUOFRGDVCECMFADREBRZBOEGGKKTPHWRLOPRKVNXBSOFRIJYNUCKSKBINBEVJXWSTYRDCFLHIVIMUHPEHSUDHVUJGAVTDELXAXUZOGABZIUXTLZAXYWHNYMLDSF");

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
    msg.setTimeStamp(0.33680020093940466);
    msg.setSource(52878U);
    msg.setSourceEntity(115U);
    msg.setDestination(61226U);
    msg.setDestinationEntity(79U);
    msg.name.assign("WDLTGYZNRAKUERUQULKSOIZNWLMOIJTOFZHZPJLLQQUCBFZFQIONGBYKGCDHXEUYRIVBIJOEXCTEDYQPMKMBFKBSZLWKAXMNVYSNZQNGOHMDTTESVEVHPLNJWHJJYNDXLTBKFRYSRJWYAPNPIOZHYUAXGTXLRWQJCURBCVSVWXEUVEA");
    msg.value.assign("SLRSWGHZMUNDIEBIBCLPNASXIFFHBOLFITYKQPZBKQXJDUAMPJWLMZBQVGVPJMRATE");

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
    msg.setTimeStamp(0.28564273202960955);
    msg.setSource(43198U);
    msg.setSourceEntity(185U);
    msg.setDestination(44899U);
    msg.setDestinationEntity(123U);
    msg.name.assign("GXVVEZYUCGJJKESRWPZCFFWDZEXOEZICBN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YQIIHZHFDRHPTATAMEYFGTTYSOKCVWVVAGWTIOHRFXBYIZJCHPZEPME");
    tmp_msg_0.value.assign("OCODGYAEUUYFIFNSNVCFGPKSYHDGSWWDYPDAATCPXMNJNRRKZXBAYKMHBIMJLPZMRBCLEVQIUKBGRLTESVZDFWYLMCGLINSJVYQAWCGQLQEHPFJZUUPOS");
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
    msg.setTimeStamp(0.24416252906522296);
    msg.setSource(48940U);
    msg.setSourceEntity(191U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(236U);
    msg.name.assign("PHXGJEZPXWHHQJSEYSLVAUEKTQPUYSIHTYQFJFLRQCHXBYUOZOCZODJRHGRVGCRJCKWZMTJFQCXOWDORUUBSQXZFOGUGXFMMQOFAHDGSZPOBPITPVNLKMCBVBGOJNRNVVLIHCQRTLSINBMLWNBJUDOSGQDKXNW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LYCNGAFPTMVKVOZUXDYFPLIAOSSNRDDZQSIVMEPFGVTLZIFJTORQGKODZOTBBOLE");
    tmp_msg_0.value.assign("MEXCXNPHUEZROMXPSUEPXBAVITIIYNIRJZAMDARCOJUGTWPMJQJVLCEMYKXEKJAHGLSVRQKKKWULIVHQWCCSTSRFPVDQCPKBAXNRWWYWQHNBYEOYEITDHSIFSKIREDMJMKDURNGIPQBCAFUXOONPLZOLZJTNFHZEHMBGNURYJFLTYUBNVDCUOQJGWKBSLVGKVRQPWYQYMGAGCDANW");
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
    msg.setTimeStamp(0.9946134306173259);
    msg.setSource(8696U);
    msg.setSourceEntity(157U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(92U);
    msg.name.assign("RKZNNCWMLAQMKKRHVEIKCLVLJUXZVAFPEOOJJIFWHMAKTBHJZYREAIKGZIPPCWEYNCPUYHBWXOBNQORHIYPSVYTLHLQFNNLZLUEXSOJIVMUADNBCGGSMAUVSARYOPAIDTBWKKTOJMLHQMVOGYUEFGDYBWEFOLUZDPRDDDBUECTAEYTQZAQZMWMXFTSQUQHRIRFCMVNJUCIJBGJDRDZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ONQGZFTGWAFGAHGRTJZLOXDMOWORPWFOFWHBYZHGZRSAIVJSXKCBZDM");
    tmp_msg_0.value.assign("LOPYLPLUFBUAMGTPXUEDBKFSIUVPTRFQDCNQLHYCCGZNJWUQUUWDOZNNYPCSHFNKTNLTLQJGYNQIHZQZJKRXMDWVVILKYHCSOSSXICJPXLP");
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
    msg.setTimeStamp(0.7979731978985554);
    msg.setSource(7336U);
    msg.setSourceEntity(28U);
    msg.setDestination(47102U);
    msg.setDestinationEntity(109U);
    msg.name.assign("SZBIBYFLYKTHGKGZQKSQDAJKAXQNMUITIDHBZVOIYAURHESIUHRIEUAXXGTUGXRTSYYOELLCJHMEOEPSMCQJRFTDPBJLUZCVBVDCPBOHGONMLKGVWTRWPTHWXWNCDKHSPGEBVNZOJ");
    msg.visibility.assign("TYRWOBKKJUJFWVQHFFVWQFPSCWBUNKPRPIZLDEMXZRDIBRVGALVTKSHNXZEZKSLPJHWOOGYJDAKSJFMOEGZWM");
    msg.scope.assign("ZIRTNGMBGDQPYKMMXSSVGCANQIRCUCYBXLJENBEROFEZYMSIOHFRNKCGDDCELFROROELCXHMVBEQHTQOEDNWTMYUXIZCKZQBBBSVJTCLZOSQJSNKDTJYVLAOTROXPWHNAJPIQIFWACGWDBPRKAWFQWGZJZUBUTIQWMJYXFHVTKHPDWAEAUNPSVVPP");

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
    msg.setTimeStamp(0.09392703193659102);
    msg.setSource(29659U);
    msg.setSourceEntity(150U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(30U);
    msg.name.assign("WCFEARMUMVMHQUXKWOXLYAXKFHCLGXSTBLBBJMFCQVOCZXVLLQXFQPUTMBNCWTYBOOIRYSEKDPPDGPHZZQETSMPUIXTNMLWKNDAPMAJEFGWUHHUIUWLRBGXPHSYNYBWJQRT");
    msg.visibility.assign("AQWTSIOLPBONSLHWKLRISEQRGEHXTJPFQHNQDZERBPENKBGCGXIFCGSXUBTVRRBMQXUSOYSUVDHFSDXJCGLODTWWOQPZWLYGRKHYUQTPOCGBMAWW");
    msg.scope.assign("OZLSUDSAIRCJBVRUVLOYSVQUPYQGESLUZCWAWFVUCUKIWQZYJJJNDYBXLXNIQQBCGZAMDNPEKMGLXASCEWWFOEED");

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
    msg.setTimeStamp(0.5807905089175465);
    msg.setSource(15490U);
    msg.setSourceEntity(75U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(199U);
    msg.name.assign("RBXIEWFJCWIMQGHVKFWDPZHRXMSFZFKNHOCWNALIUMAERUFAAAGWOAFTQKGEPPTVCMDXFNHEEZWRKYFEPAVBBBYLUIQOELCJUCGLEHZBLKNTUNIVUQYBDGJAUGHWHNDXDDAVZSLYXCQVKVMYMUYLZDLDJSSCTEWVNRYQRJXFJRXJKQZIMTGTPMPOKSOACJGXXFBZQTMYONRYCPTWXILPUINRNEYZZDTIDUQSCVRBVOMSTLOWSBOHQHOJP");
    msg.visibility.assign("AQQUQPDETLAOXIZFNIAJHEDQUIKVVIHLTGKFMRKJZIWQFQVSJDFIGNLXGUBESOZMZDMSUBIPCHAXQYDREAOMSSRKTJOHDCDNTMCNYGRWDVNAZDMTXPBBMFKHROVMUOXTMLFQQYXWUHKFROCHR");
    msg.scope.assign("QCEIJOTIVPFFNCKPLLUKQCXXHSRYATBXJANCGEIKNBJFKUNWHSMBWRNXSFOZEWRXOXAQNATIWCKEYGMLXUMITPFVUTCYKAMZQYZVPBXRFEZVUMLEEZDSULMDGOTSAUAJXXKQNKFZJHKRORWAGZQSTQHRPGRGYPBHHWGKNOLVEGWVICDDJJYVFDDEVATYMATHHWOIJHH");

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
    msg.setTimeStamp(0.9187710098226214);
    msg.setSource(30475U);
    msg.setSourceEntity(250U);
    msg.setDestination(15995U);
    msg.setDestinationEntity(171U);
    msg.name.assign("BTDPXPIEEDSKIZVMUYLBLIGREWLUCJJFNPNGKXCLWUMVBDFHTUYPKQSOWJFZYRVCIMXCMSOCHVJKJSGXNXDHQVIHZANWTGNQDAAQFNASZWOAMFFDCWAOSKZRPYHTNTFUHYTUTIPFHFVFHIZRBGYQCSSEGEEPMYROACALIACIDR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GUVOKQFTQJRECYJKHAAWMCMJJYQBGHATLTWBPSDOOUGQEHLIHCBOABLWRVMUZEXKRPDESFAXYNANGNCKUSMQSXDUQVCABGHPRHJFODCKTIPLYGOYWRKLXEKIJETFDGJSOWJWYMUFYDETPRDFNKUZ");
    tmp_msg_0.value.assign("SRVYXCTATBDTWKHCNAXUUFFZJXBSBNKTVRJWHCBBGQMUVVEJNPRBSGOFKWUJDWNTGGSZJRIIPODTLKLLCNFVUXKZOKPGASPQDZJHCNXOKQAUWUAEDMXVDFQHRRYFFBXDEQPDDJOYYCHETIQFMTVIEQLGEUP");
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
    msg.setTimeStamp(0.8537591862314271);
    msg.setSource(49156U);
    msg.setSourceEntity(222U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(209U);
    msg.name.assign("BMHDOKNGHTRYUNWPNYIUKLAOGTGXCTUUTPLWZBURZMEFKGFOWKOJKFWRLJYUYXQGPPYWNRAODQOPRPDQKZBQDNXWTAQDPFLJLQQHXPTILBSIYLWFRPVEAVSIBVMRDXCOUJZLVLVCTANVBNCJCOJWVCMFRMKAGTMXOJMDZYSXVSSWYCBJUELATQHBXSPDNGADZGMCWKEDJISHUZIGSQHIHYIQRSEHXOZABFENMUVRTZCNEMHFZFEXGSKJEIEABY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YDIQHIOGDYSDMCINBMZGBOHETUPNLKYGBDRDMLGCGGQDOCGKJPCWTPEJGUTFWQOTXHAYKWPUXQPXJUPAITDKFWH");
    tmp_msg_0.value.assign("OIBMLCOMLRNNYHHEWELWIUGIMKTEAGFTSVSGJFCPFVDHWJVZEQPMIWCYGZAYTWLHJAUOGXNTRNTCBEMLLQKDQGUPQESZWKYNDADVNVBRFBBGOCLUSZDOPRMBKWMNNQRPNCJBKBOLVQCFXSPMQKHFMTXXUXFAXBPADTAUGUCIFSDKJOZKIXKHEJI");
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
    msg.setTimeStamp(0.5488116537104306);
    msg.setSource(33719U);
    msg.setSourceEntity(56U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(218U);
    msg.name.assign("QQVLZLSYMN");

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
    msg.setTimeStamp(0.37421370659356135);
    msg.setSource(42505U);
    msg.setSourceEntity(236U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(10U);
    msg.name.assign("DTEGIWRFURAQQFWKLGXPBVRDRKDKQBONYYGDHXWTQWZNTPBFDYKPJBULZUSXCIEVVZCOIEAJGPGWJHY");

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
    msg.setTimeStamp(0.5474759336625288);
    msg.setSource(51528U);
    msg.setSourceEntity(67U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(20U);
    msg.name.assign("YVBYTRNOJEAQUDBJXXVNIHUAUTKLDNOELVCKFLVPLFVYORWUBGCPRXZYRHFEGHGPXFDEQZIWXPUDPGTRQEBTPOCQMQIDZELG");

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
    msg.setTimeStamp(0.38276065879288157);
    msg.setSource(16118U);
    msg.setSourceEntity(30U);
    msg.setDestination(37637U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FXVXKOZYWRCJQG");

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
    msg.setTimeStamp(0.8783492738777557);
    msg.setSource(17436U);
    msg.setSourceEntity(80U);
    msg.setDestination(28111U);
    msg.setDestinationEntity(23U);
    msg.timeout = 620609322U;

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
    msg.setTimeStamp(0.8922783970099182);
    msg.setSource(29186U);
    msg.setSourceEntity(1U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(40U);
    msg.timeout = 3904273485U;

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
    msg.setTimeStamp(0.564940039958205);
    msg.setSource(38969U);
    msg.setSourceEntity(7U);
    msg.setDestination(16108U);
    msg.setDestinationEntity(237U);
    msg.timeout = 3371625792U;

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
    msg.setTimeStamp(0.5844241614105941);
    msg.setSource(11979U);
    msg.setSourceEntity(164U);
    msg.setDestination(29307U);
    msg.setDestinationEntity(55U);
    msg.sessid = 702889365U;

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
    msg.setTimeStamp(0.09980558676387752);
    msg.setSource(55173U);
    msg.setSourceEntity(167U);
    msg.setDestination(3988U);
    msg.setDestinationEntity(212U);
    msg.sessid = 198380817U;

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
    msg.setTimeStamp(0.3703880053822488);
    msg.setSource(55622U);
    msg.setSourceEntity(230U);
    msg.setDestination(30481U);
    msg.setDestinationEntity(54U);
    msg.sessid = 1401177475U;

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
    msg.setTimeStamp(0.5930987554704341);
    msg.setSource(28716U);
    msg.setSourceEntity(13U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(105U);
    msg.sessid = 3945784592U;
    msg.messages.assign("DTOEXVROTDAJACLUIQVCSNM");

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
    msg.setTimeStamp(0.8891657056496203);
    msg.setSource(56825U);
    msg.setSourceEntity(54U);
    msg.setDestination(30121U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3549649168U;
    msg.messages.assign("PZJJGDPGSEJQEBQTEUQSXSRWCAWIROZAKLVNVQNSOOOPIUDCSGWQKMYLURYZHBDPGGKEODMCJTWOFYZRXQYXLZDXXMMOTRSTIEPRLJAZVXFBXUFPKZZZENIYHR");

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
    msg.setTimeStamp(0.09723618993502592);
    msg.setSource(61604U);
    msg.setSourceEntity(160U);
    msg.setDestination(24539U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3564071002U;
    msg.messages.assign("RUPUKJPKNAUQVWZZQRMVFMNVBVNJZYIPNW");

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
    msg.setTimeStamp(0.36472281725860844);
    msg.setSource(40980U);
    msg.setSourceEntity(199U);
    msg.setDestination(27462U);
    msg.setDestinationEntity(85U);
    msg.sessid = 336165302U;

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
    msg.setTimeStamp(0.6549174728900526);
    msg.setSource(41061U);
    msg.setSourceEntity(244U);
    msg.setDestination(52467U);
    msg.setDestinationEntity(48U);
    msg.sessid = 2689612807U;

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
    msg.setTimeStamp(0.9425528854541096);
    msg.setSource(19584U);
    msg.setSourceEntity(196U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(50U);
    msg.sessid = 648256706U;

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
    msg.setTimeStamp(0.7000800435365211);
    msg.setSource(35553U);
    msg.setSourceEntity(41U);
    msg.setDestination(36533U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1925433806U;
    msg.status = 44U;

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
    msg.setTimeStamp(0.9393894372188761);
    msg.setSource(26359U);
    msg.setSourceEntity(123U);
    msg.setDestination(39758U);
    msg.setDestinationEntity(59U);
    msg.sessid = 2786391767U;
    msg.status = 130U;

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
    msg.setTimeStamp(0.1611902590401212);
    msg.setSource(36403U);
    msg.setSourceEntity(228U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1356630202U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.033842299169372314);
    msg.setSource(17633U);
    msg.setSourceEntity(219U);
    msg.setDestination(28993U);
    msg.setDestinationEntity(122U);
    msg.name.assign("WNNSCTXEHFQYVJKGXTOGZCIPWPSIKUYRNXVJOYXXDKMFKYOKGSBLQGBNXFSFUIXWVEFMLAVLKREAVLCWZDOYQAEONVBKTUSDTLLFIQCKQTMGZJOCPCHDGAPVYARSRZZPJCJQQLTATDUFIHNPSUHTBVQZDDFMJRZBZNEQCQYGPIGPHJYVWDAMKRLRZAWDGUJRJHENCRXXLOMSHPUHIGBXIEMOOUMTNFJWUHMZWRWBCIBYMBETLSYEAVPNKO");

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
    msg.setTimeStamp(0.7348592686316154);
    msg.setSource(9490U);
    msg.setSourceEntity(43U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(99U);
    msg.name.assign("SLOGAKYYKSDOVLDOGHYCBDYTXEVQEGUZRJCNRSXPZNNWFJPGNTZHETCIRFWHRSPIFQNOBKITZHLLVLJSJDIYKUAPEMQVWAZQOXRKWINMRBGEQZWDHPKBXHAEMFVJTXPNJHMDXMBP");

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
    msg.setTimeStamp(0.6022693834225059);
    msg.setSource(48326U);
    msg.setSourceEntity(94U);
    msg.setDestination(7791U);
    msg.setDestinationEntity(59U);
    msg.name.assign("OFKNCDBQREYOICAPFVOVKJQJM");

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
    msg.setTimeStamp(0.38229691740544003);
    msg.setSource(62199U);
    msg.setSourceEntity(183U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(195U);
    msg.name.assign("CERDIUTPYNGWU");

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
    msg.setTimeStamp(0.18965424138197384);
    msg.setSource(37764U);
    msg.setSourceEntity(46U);
    msg.setDestination(36315U);
    msg.setDestinationEntity(24U);
    msg.name.assign("VXHSVIAWPJZWOLSRGTUAQNTEPGBWIIZVIGHOJQSQRLDMPAJAKZMDIWPOLMXRGFHBESDMUEAQHFQNJPYBWKYTXGJWFKUKPYORXF");

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
    msg.setTimeStamp(0.9134049677063207);
    msg.setSource(17625U);
    msg.setSourceEntity(161U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FCSWUMUQFAPBKHZNRLVREQLVIKCPSVMKCSYZNUPLXDCQDUZKCHYMGLPBQPGUEYFKCTCZTEWREBEQTIXDQSMJENSLNDWZDWFUFPKMHVAEDTKBAANPYJBDOQIVTMDTYCUIIAZLJSRHSPIEOICXJRRUMAKMVOGRBXFOBGHKBNGMNWAJOUENFNITQJXHSHXZDGQYPOZFMAWFBOGYIHO");

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
    msg.setTimeStamp(0.6397976652147644);
    msg.setSource(50583U);
    msg.setSourceEntity(148U);
    msg.setDestination(5357U);
    msg.setDestinationEntity(212U);
    msg.type = 218U;
    msg.error.assign("UPBNCENTBPWRZFBMAEOCEIGJODKSKEFKMIFVZZBARKECWEJFOUSYQNTMDNNDUUXJFICXZXIYNQPXEVEEXOQMDTOQAEDLJBDQSILDGVVITPBCAWSCRTNRQFFGKXTJHZZNWAFJCPUGLZJSWJTYVLKPYUJYYZYOTB");

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
    msg.setTimeStamp(0.11604269413501145);
    msg.setSource(57695U);
    msg.setSourceEntity(209U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(136U);
    msg.type = 114U;
    msg.error.assign("PIEJKPCXFBLRBOFZFGSGPCDDONMLESRJOWGSSKNIRFWJTUHWBEYAJBJIUEDZRONMSQKZFOHLMRLNEZWBKSQMICXMMHVMIVDYODZHVMLAKALXDXCNCYYCNKCTZYGXUTRIFQXGDORKUVEUWPAPHDWOCLJQH");

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
    msg.setTimeStamp(0.7652232544358133);
    msg.setSource(40714U);
    msg.setSourceEntity(252U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(188U);
    msg.type = 155U;
    msg.error.assign("HQGAKHYCMDUXJVSOREJELSZODQZDFWVAXOVBBBMFDNXVAKWAGTXGZUFNVXDIVHPLYDRIVYYCSXKFPCPNOUMNRMTJHFENKWQBQOGRQBXTBYKYOICGJRJPGKBHRQHBILUXGNWLZRFENCFNZMAJDXJIEUURBCPMWQYQPSLETDOHETSOQLAZ");

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
    msg.setTimeStamp(0.24092073398888314);
    msg.setSource(38646U);
    msg.setSourceEntity(19U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(45U);
    msg.seq = 41298U;
    msg.sys_dst.assign("FZWXJOIDNBRLHERCFSDKFABMYKUTOAEDBQQHZLJKKBLMKCQNTVQWPDKLFMCEEUYKJZAVMRLIUZFGCPILOIMSTZMSHPLFAVOXWNLHDPPDBYODWQQTNRTWZHVVRCRJQSNMPOVUPJXWOLISXVETRXGAGBPXMMUG");
    msg.flags = 141U;
    const char tmp_msg_0[] = {95, 93, 1, -125, 38, 58, -102, -57, -17, -46, 111, -42, 113, 103, 56, 122, -60, -18, -4, 101, 118, 35, -85, -78, 12, -14, -75, 61, -7, -60, -20, 82, -31, -33, -30, -108, -57, 103, 103, 3, 84, -54, 17, -64, -54, 92, -115, 55, 7, 1, 94, 67, -50};
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
    msg.setTimeStamp(0.2707869140219963);
    msg.setSource(35924U);
    msg.setSourceEntity(230U);
    msg.setDestination(32613U);
    msg.setDestinationEntity(12U);
    msg.seq = 26178U;
    msg.sys_dst.assign("BSVKBOPVEUQKTWTMKJQTWG");
    msg.flags = 43U;
    const char tmp_msg_0[] = {80, 102, -77, -23, 113, 65, -21, -84, 78, 30, -39, -30, 124, 48, -11, 66, -22, -81, -23, -37, -48, -104, -57, -11, -45, 15, 26, -108, 51, -18, 104, 97, -71, -32, 41, 108, -33, 107, -95, -9, -20, 35, -49, -119, 126, -44, -3, 99, 97, -110, -17, 14, -62, 10, 3, -16, 126, -16, -64, -87, 81, -74, 110, -61, -93, -107, 101};
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
    msg.setTimeStamp(0.10177590939896175);
    msg.setSource(42136U);
    msg.setSourceEntity(106U);
    msg.setDestination(10317U);
    msg.setDestinationEntity(172U);
    msg.seq = 31506U;
    msg.sys_dst.assign("URDWEYHFJVGWNZOKARAIOOSLMUSHMCYZDZYOPLFQENIOMVJTCCHQKDHUMGDRTJZNIBHSQYCQQIBOBPFGGXIEQTGRAVAJZGXPYHKVFYFBJZCIPXEOTBSDAUECDSQASLLRKOSMXIHELSGVEBADFRDFCWJNHVNWX");
    msg.flags = 111U;
    const char tmp_msg_0[] = {88, 115, -103, 75, 17, -108, -75, 4, 58, 44, 105, -118, -55, 60, -124, 55, 57, -75, -69, 76, 57, 68, -1, -128, 86, -48, 0, 51, 87, -39, 36, 32, 0, -4, 94, -112, 41, -56, -3, 41, 0, -127, 60, 19};
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
    msg.setTimeStamp(0.1561920276354778);
    msg.setSource(63713U);
    msg.setSourceEntity(203U);
    msg.setDestination(2033U);
    msg.setDestinationEntity(103U);
    msg.sys_src.assign("VZXBPWODJQMJPBQBNPYORARNAZVH");
    msg.sys_dst.assign("VPFUOLHIQPEISIZGCZEAATWWTYBHVTXTENMXEKBYFJUCZLFVSKUAPRINJRSBLZKKHHHCUVDHEJHIL");
    msg.flags = 225U;
    const char tmp_msg_0[] = {93, -45, -53, -22, 60, -68, -1, -107, -127, 68, 96, 88, -6, -2, 113, -60, -47, -71, -84, 110, 103, -105, -27, -38, 87, -110, -43, 47, -27, 60, 98, -3, -78, -49, -53, 57, -109, -7, 118, -122, 28, -101, 84, -21, -81, -13, 14, -30, 3, 74, -52, 12, 35, -60, -90, 67, 62, -84, -96, 10, 102, 94, -109, 117, 52, -53, 124, 4, -21, 12, -77, -77, -88, 78, 91, -56, 107, -28, -8, -99, -2, 49, -13, 15, 18, -11, -40, -23, 122, 105, 102, 31, 13, -83, -106, -57, -43, 86, -77, -8, 77, 62, 70, -95, -106, 29, -28, -94, -1, -4, -65, 25, 14, -17, 109, -59, 84, -84, -26, 55, -53, -67, -33, 62, -74, -115, 114, -22, -37, 109, 73, -58, -104, -24, 17, -56, 55, -88, -17, 55, -48, -8, -13, 87, -33, -30, -18, 20, -34, -29, -53, 6, 120, 28, 121, 108, 55, -1, 50, 121, -3, 14, 12, -27, 27, 52, 56, 102, -25, -46, -26, -7, -48, -23, 25, 123, 41, -76, 42, -46, -36, -2, -92, -106, -43, -65, 68, 17, -100, -21, 18, 101, -103, 87, -65, 60, -61, 72, 89, 38, -28, -126, 96, 30, -106, -27, -32, -3, 80, -74, -16, -107, -59, -119, -11, -75, -56, -59, -26, -2, 17, 29, -52, -89, -32, 35, -62, 54, 74, -32, 76, -105, 30, -92, 119, 110};
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
    msg.setTimeStamp(0.175856220056415);
    msg.setSource(378U);
    msg.setSourceEntity(154U);
    msg.setDestination(23353U);
    msg.setDestinationEntity(153U);
    msg.sys_src.assign("OYPUKVVUKHDADJHCAGSBJFKLARPGPMIVNTWYGJAUTQ");
    msg.sys_dst.assign("ZHAPDWEQROCRCMHRJLYCKZMFTELDVOHJSTCYUAHJXAYDCMBSRXMUXEAQMFHQHYNBYNKYFLFQDVILPNBUBABVFVCOBVPOPBFWWGGIKSXIDTSOPDPUPITEUOSAKNPQMQKQRJSZGHIGJRFKEBDUGWTTALHJTVHHTUJCKZEWDODZIJIGGVQKSFWNZGLBLQIJNXFILGXRMXWINXSQSLPZCXWCCYUKZXUTMPOYYDNVREEYWVNNZTOMVEGMEALJS");
    msg.flags = 85U;
    const char tmp_msg_0[] = {-7, 68, -46, -111, -88, -23, -34, 48, -90, -77, 105, -122, -72, 56, -74, 56, 35, 94, 39, 59, -56, 35, 35, -106, 68, -112, 56, -61, -106, -81, 101, 19, -105, -72, -55, -3, -89, -85, 18, -16, -3, -3, 90, 63, -107, -68, -65, -120, 35, -98, -95, 36, -61, 49, -48, 118, 92, -88, 24, 31, -37, 15, 89, -69, -80};
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
    msg.setTimeStamp(0.5755859146881092);
    msg.setSource(35293U);
    msg.setSourceEntity(114U);
    msg.setDestination(50990U);
    msg.setDestinationEntity(137U);
    msg.sys_src.assign("CGRABXTKQZGAWIODHSOBUKNDPOT");
    msg.sys_dst.assign("ESJLKHQWGMSITEOSQKCKSJNMWIRYOIZVQICUXTPSAUGHIZCTAISBHRXZUHOLUBLCPGZQPURBFUITODYZHYMSQXBODWIMJPFVGQZPDKZRDEDWNKULETXYWTMDXETMHAMVZ");
    msg.flags = 250U;
    const char tmp_msg_0[] = {-61, 15, 52, -59, 50, 87, -90, -38, 21, -3, 55, 99, -15, -67, -119, -36, -115, -47, -94, -42, -128, 126, -41, 97, 72, -27, -5, -56, -121, -127, 39, -47, 93, -35, 25, -39, -58, -45, -41, 39, -2, 56, 81, 14, 0, -6, 72, -102, -6, 106, -31, -58, -39, 61, -71, -35, 68, -5, 1, -92, 46, -59, -67, 86, -67, -79, 32, -7, -72, 40, 84, 33, 121, -82, 109, -3, -40, 124, -63, -77, 54, -76, -63, 89, -34, 34, 99, 37, -28, 2, 36, -78, 73, 60, -97, -72, 94, -111, 109, 54, 48, 124, -22, 95, -100, -63, -31, -82, -102, 3, 92, -100, 21, -98, 17, -6, 65, 112, 117, 113, -109, -92, -30, -47, -1, -76, 103, 100, 31, -71, -98, -44, 85, 108, -104, -99, 51, 93, 36, -69, -121, -8, 11, -107, 120, -43, -86, 29, -12, 49, -32, 84, -37, -99, 83, -93, -80, -43, -93, -98, -3, 76, -115, -50, -6, -29, -35, -52, -35, -121, 78, -103, 37, 85, -104, 76, -84, -117, -39, -34, -126, -10, 113, -110, -45, -55, 93, -12, -32, -103, 110, -40, 38, 116};
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
    msg.setTimeStamp(0.6858067861472033);
    msg.setSource(38833U);
    msg.setSourceEntity(5U);
    msg.setDestination(47864U);
    msg.setDestinationEntity(172U);
    msg.seq = 59284U;
    msg.value = 152U;
    msg.error.assign("LDDTQTIILPMJBFKTZYCQPLAQCNVESIJVAAQUYDANEXOOSRPZZRFQFJGGQASZNPLZDWJNMNNHMTCPEGXUOSZWRREOAIOHRUQXEXPCSILBBXYMXRKKGAOLYPVKWWCYYDNYGJVEYFRSDAGCTGGCEUODFBKFUDTXIYZVVKUOBYDBJSQWFDARUZEKELIHHWHBCAZVTWMNJFTJFTHNCEICBQVWPWWQSMNZGIHUFVXBSLULXXGLOVMHP");

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
    msg.setTimeStamp(0.6791860071973934);
    msg.setSource(13314U);
    msg.setSourceEntity(155U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(18U);
    msg.seq = 15410U;
    msg.value = 216U;
    msg.error.assign("ZEREFOCNKHVJTZQNKTADEQFRUBZFLFGLNMCXVABHNHHRCKOUPWLSXSHMSBPNBCLXXOJPIUCNDQNGMUEMYVFLRCGFDTKIAWPHTLQBJZHTHUJEBCQOGXRWSGWZTLPDIHVKFRYNWOGUQMJNSEOGMQXILKJKZWAYEYWSGBDVZAOBZTUPAPYJPLOSCEMGQWDNUIYIMJDKDFIRIVTWSRTSXPBLQKAV");

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
    msg.setTimeStamp(0.900000900456434);
    msg.setSource(8672U);
    msg.setSourceEntity(207U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(65U);
    msg.seq = 60931U;
    msg.value = 165U;
    msg.error.assign("XJSKGMSINXWLFKXOUNBYQPBEPRIGIJOGDAGKESNJWTXHZQRJYDQIFJSDWZFTNCFVWRENXIVVSIUELVLPROSZLJNVOHFYCDCMUCPCJGHEUUWXMVBAWWCATPHXMZTRNAXRDFGZGPYB");

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
    msg.setTimeStamp(0.5738447305612528);
    msg.setSource(43527U);
    msg.setSourceEntity(88U);
    msg.setDestination(41728U);
    msg.setDestinationEntity(184U);
    msg.seq = 54699U;
    msg.sys.assign("NWITQQYDHOVXSAJESFVLZTZKOSCDFRLQCRCHSIHYJIBYDMSEXDEPVIJAKHULSULOPYPBJUBQMYGZPWFGOTHZBXNLMYHRADSOQLRQLVKFBYSBHZNWTYXILHKRAFJWMKDAVMECXJQUPGBJXNACANGGQCCPRTWEKXIFTASGOTASIOVQJGMFRCJVOUFOGZNQUVDGULDNVZRKEBEKUJDMBWZHRPZTENNPPBMVIEH");
    msg.value = 0.9137420835644583;

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
    msg.setTimeStamp(0.3574082720749683);
    msg.setSource(23378U);
    msg.setSourceEntity(86U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(184U);
    msg.seq = 15464U;
    msg.sys.assign("CJOFZHDWIUQESPIWREGXSYNWQMKGKDGBNAJFZQQMKKOOSXBRIPXQZPFCWRMEZFSHIXYGHUKPRMG");
    msg.value = 0.8022853481921076;

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
    msg.setTimeStamp(0.8907728524766328);
    msg.setSource(38333U);
    msg.setSourceEntity(74U);
    msg.setDestination(54442U);
    msg.setDestinationEntity(209U);
    msg.seq = 4803U;
    msg.sys.assign("LDBSGLFVHEPDVWGPARHDTSOLGKJHYZCMFNBNUITLMOCYNUGBBPYSHTKYLQLGIOQQBDAMZRAKOJUEPJSTVUPKJHKMDVUNNLTMVRAPUNFPYXWAWBMXXVFGGNCNJOUEACIGFDFYDQPEXFOEHEXCIQJAWAZCLRIXBIQRZWKGTKTEWJARNIUXXOMSVBZJMZHCZBXHSYRHOZGUUZYICY");
    msg.value = 0.39084256281969887;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.36326994933071377);
    msg.setSource(10336U);
    msg.setSourceEntity(69U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.6704780776292436);
    msg.setSource(36060U);
    msg.setSourceEntity(223U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.1079542747339215);
    msg.setSource(19036U);
    msg.setSourceEntity(21U);
    msg.setDestination(21917U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9925689246780076);
    msg.setSource(55049U);
    msg.setSourceEntity(234U);
    msg.setDestination(25746U);
    msg.setDestinationEntity(14U);
    msg.action = 67U;
    msg.longain = 2569582165U;
    msg.latgain = 1341158990U;
    msg.bondthick = 3545035200U;
    msg.leadgain = 3724125810U;
    msg.deconflgain = 2788922417U;

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
    msg.setTimeStamp(0.8884976337862337);
    msg.setSource(42527U);
    msg.setSourceEntity(25U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(117U);
    msg.action = 243U;
    msg.longain = 475446918U;
    msg.latgain = 3177452295U;
    msg.bondthick = 2220423275U;
    msg.leadgain = 2205524170U;
    msg.deconflgain = 1594020643U;

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
    msg.setTimeStamp(0.49325711210900514);
    msg.setSource(15319U);
    msg.setSourceEntity(93U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(85U);
    msg.action = 4U;
    msg.longain = 4133554036U;
    msg.latgain = 4153088829U;
    msg.bondthick = 250316255U;
    msg.leadgain = 1694846312U;
    msg.deconflgain = 1491642603U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.7935479909213426);
    msg.setSource(18626U);
    msg.setSourceEntity(128U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(236U);
    msg.uid = 152U;
    msg.frag_number = 49U;
    msg.num_frags = 109U;
    const char tmp_msg_0[] = {31, -62, -57, 12, -25, -119, -125, 13, 21, -9, -80, -79, 101, -19, -121, -89, 37, 113, 58, -8, -90, -34, 117, 116, -78, 45, 65, 7, -90, 124, 27, 117, 21, 26, -59, 16, 91, -50, 92, -76, -52, 84, -21, 91, 64, 25, 71, 95, 84, 101, 76, -27, -67, 19, -27, -63, -91, 90, 81, 32, 16, 40, -13, 13, 79, 59, 23, 60, -85, -86, 72, 30, 103, -106, -120, -72, 65, 113, -94, 91, 79};
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
    msg.setTimeStamp(0.11967658706591788);
    msg.setSource(14608U);
    msg.setSourceEntity(82U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(61U);
    msg.uid = 53U;
    msg.frag_number = 183U;
    msg.num_frags = 75U;
    const char tmp_msg_0[] = {80, -104, 78, 21, -13, -9, 105, 105, -71, 27, -118, -92, 108, -97, -51, 90, -127, 105, -93, 20, 49, 51, 80, -35, -88, -28, -67, -112, -102, -81, 103, -8, 105, 36, -16, -88, -35, -62, 20, 93, 75, 47, -62, 9, -109, -16, 28, 116, 93, 97, -1, -8, 102, 106, -75, 49, 51, -24, -72, 91, -12, 79, 13, 6, 80, 95, 49, 16, -7, -61, 55, 50, -73, 118, 27, 111, -93, 99, -107, -29, 67, 35, -114, -15, -65, -51, 92, -91, -107, -50, 50, -85, -39, -99, 44, 58, -86, -98, 66, 67, -128, 71, -58, -75, -99, -63, 124, -104, 29, -6, -48, -51, -20, 91, -40, -88, 28, -44, -125, -23, -29, -25, -52, -24, -7, -49, -54, -37, -92, -14, 3, -34, 53, -85, -128, 117, 54, 27, -88, 2, 81, -56, -118, -104, -103, -112, 53, -18, -72, 12, -120, -10, -70, 30, -82, 108, 126, -32, -28, 35, -86, 90, -73, -96, 43, 7, 29, 91, 12, 21, -60, 121, -122, 49, -63, -107, -99, 25, 95, -36, -10, 70, -35, -31, 11, -34, 14, 19, 73, 75, 100, 107, 52, 29, -17, 124, -72, 66, 83, 56};
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
    msg.setTimeStamp(0.2678207935716561);
    msg.setSource(3609U);
    msg.setSourceEntity(10U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(5U);
    msg.uid = 27U;
    msg.frag_number = 128U;
    msg.num_frags = 91U;
    const char tmp_msg_0[] = {47, -112, 35, -57, 10, 5, 62, -87, -85, 96, -43, -102, 15, -25, 29, 16, -70, -67, 5, 96, -70, 34, 91, 124, 30, -27, -81, -113, -74, -122, -9, 121, 82, 109, -91, 101, 104, -31, 21, 59, -14, -87, -53, 86, -53, 30, -115, -88, 121, -4, 9, -18, 70, 53, -69, -7, 114, 11, 117, -104, 52, 119, 40, 73, -19, 111, -124, -50, 27, 68, 76, 76, -30, -44, -41, 116, -116, 31, 61, -79, -48, -22, 99, -60, -85, 108, 97, -123, -104, 79, -54, -77, -117, 70, -61, -38, -2, -45, -35, -120, 69, 97, 101, 66, 79, -62, -75, 80, -93, 53, -124, 104, -86, 72, 56, -64, -118, -81, 77, 45, -9, -106, 6, -90, 81, -63, 21, -18, 55, 44, -27, 101, 80, 48, 28, -55, -36, 48, 33, -104, 95, -10, -128, 31, 34, -5, 101, -106, 2, 82, -50, 92, -37, -115, -79, -50, 31, -123, 52, 118, -53, 101, -125, 10, -33, -67, -39, 45, -73, -91, -9, 74, 24, 83, 122, 71, -78, -37, -76, -110, 24, -119, 53, -39, 17, 19, -96, 106, 19, -27, -59, 94, -78, 114, 102, 9, 46, -60, -68, -36, 90, -98, 80, 18, -128, -56, 80, 70, -102, -34, 104, 85, -40, 29, -126, 39, -49, 29, -65, 115, 23, -61, -50, -128, 27, 18, -85, 114, -32, -15, -123, 72, -44, 76, 51, 64, -50, 114, 90, 59, -38, 107, -58, -100, -90};
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
    msg.setTimeStamp(0.39760287000109473);
    msg.setSource(37653U);
    msg.setSourceEntity(145U);
    msg.setDestination(2541U);
    msg.setDestinationEntity(39U);
    msg.content_type.assign("NEQILJLIOKUMJMYEEFVDSKZIHAIIOWFVE");
    const char tmp_msg_0[] = {-99, -28, 9, 38, -127, 15, 22, -19, -118, 87, -88, 40, -102, 62, -80, -8, -37, -117, -14, -56, 20, 126, -74, -35, 38, 24, 7, -109, 114, 1, 38, -35, -98, 83, -111, -23, -107, 80, 103, 97, -95, -42, -54, 104, 21, 15, -119, 117, 14, -18, 73, 99, 84, 116, -102, -100, -12, 90, -113, -113, -57, 122, 56, -50, -81, -18, 63, 91, 6, -117, -121, -84, -76, -24, -17, 53, 123, 14, -56, 47, -87, -19, -39, 73, -47, 2, 106, -125, 99, 12, -73, 28, -124, -37, 120, -36, -20, 67, -16, -120, 6, -51, -99, -14, 23, 106, -85, 62, -31, -61, 5, 76, 63, -58, 76, 35, 61, 56, 4, -28, 27, -92, 60, 90, -35, -70, 78, 39, -61, 69, -67, 8, 73, -2, -33, 7, -82, -125, -42, 117, 92, -10, -31, 107, 87, 18, 99, -30, 109, 123, -29, -100, 104, 51, -44, -41, 81, 119, 36, 28, -75, 3, -113, -81, -56, -113, -97, 44, -120, -74, 31, 44, 96, -45, -126, -68, -27, -114, -112, -33, -97, -91, -29, -1, 75, 83, -56, 2, -62, 28, 120, 83, -100, -63, 88, 82, 70};
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
    msg.setTimeStamp(0.06090671023763061);
    msg.setSource(1309U);
    msg.setSourceEntity(200U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(225U);
    msg.content_type.assign("IOECIYRFCPUJTALAZUXVSQSXAAUCELNOAVDEDWMBLCHBRZKCWYJVOLRMLWLOXENUZCBJXHTGHJAGHFZOYFPMMYRZPDSLOUVDFFGTOIBVUOHKNWWGVIUBTQFLIZNSKPWVLKJSOPTRHPIWTBISXISHMPUXECNJNYEUVQGVDJWFDBZGPKXK");
    const char tmp_msg_0[] = {-12, 21, 36, -105, 121, -22, -90, -109, 117, 7, -101, -17, 73, 13, -47, 5, 87, -76, 106, -128, 94, 68, -108, 101, 64, -75, 114, -10, 126, -104, 49, 76, 21, -106, -62, 11, 48, -18, 35, -123, 9, -61, -19, -47, -69, -13, 68, 98, -21, -66, -6, 84};
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
    msg.setTimeStamp(0.1360934559391641);
    msg.setSource(26953U);
    msg.setSourceEntity(114U);
    msg.setDestination(48647U);
    msg.setDestinationEntity(241U);
    msg.content_type.assign("OGRDCLANQXICPODGFLXPSIKKBPXGJMCUINLIVAARBVEZQNHVMGKTVJJPXCKCHKOTFEKMZVSOWADBSWWSXLRYAXGRBVTSLRCKVPQLQNZOVQTJZOYXJMDYLTBZNOCPDTFXMEWDBYUOJTFCGEZQUQRIYKZE");
    const char tmp_msg_0[] = {-13, 22, -116, -64, 27, 90, 71, 104, -64, -123, -66, 78, -73, 40, -39, 35, -63, -124, -68, -4, 88, -1, -11, 26, 60, 59, 6, 57, 40, -112, 11, 73, -58, -8, 18, -6, -28, 4, -39, -98, -79, 81, 97, -3, 18, -99, -90, -17, 39, 54, -98, -2, -93, 92, -81, -95, 31, -56, 44, 44, -27, 84, 109, -80, 120, 57, 26, -107, -22, -111, -42, 84, 55, -28, -7, 28, -43, -2, -111, 86, 45, 61, -83, 18, 90, -24, 55, 95, -27, 125, -70, 122, -30, 56, 91, -18, 17, -5, -60, 17, 53, -28, -9, 53, 78, 56, -76, 9, 2, -69, -91, -59, -4, -73, -90, -21, 1, -1, 19, 56, -47, -80, 113, 90, 68, 103, 103, -115, -71, -78, -91, -43, -14, -24, -71, -128, 122, -11, 116, -90, -116, 84, 60, 7, 45, -83, 117, -123, -38, -9, 70, -72, 79, -116, 71, -126, 45, 70, -22, 38, 45, 122, -31, 114, 40, 114, 28, 24, -104, 45, 58, -61, 36, -87, 119, 55, 110, -80, -88, 22, -115, -110, -44, 20, -128, -109, -85, 50, 25, -40, 65, 21, 82, -86, -108, 18, -86, -89, 93, -118, -73, -77, -83, 8, 87, -18, 22, -108, -125, -106, -98, 105, 13, -31, 120, -7, -54, -15, -98, -98, 4, -9, 106, 108, -27, -126, 3};
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

  return test.getReturnValue();
}
