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
    msg.setTimeStamp(0.27251553661970485);
    msg.setSource(36116U);
    msg.setSourceEntity(47U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(145U);
    msg.state = 165U;
    msg.flags = 254U;
    msg.description.assign("KFEDAMXYAYVIRJXKBDAYTUJXRTELIASRSZTACKLOVBQCNWMQCSDXGVKQQYAIYBLOHRLKGSQTHIZDRKCZPWGUMNNCPSDBQOGEZJHLQVZIJJTMPONWGRMYSSZHDGPXFHHZJCCEUMCYWWVUBXYBAGRQZVPDJEVUYQHZDVFLFLPRGAVUENUEYMIIOWRJFNSWOJTIPPFNWBOALTUPOTSKDTBEMGXHFW");

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
    msg.setTimeStamp(0.3847009191600522);
    msg.setSource(35795U);
    msg.setSourceEntity(149U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(235U);
    msg.state = 137U;
    msg.flags = 83U;
    msg.description.assign("CWGMOPLOPBZCDRFKKKEECFZKXTWZAOFKIXNCSVVDQTAL");

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
    msg.setTimeStamp(0.6076278199763289);
    msg.setSource(16495U);
    msg.setSourceEntity(234U);
    msg.setDestination(40107U);
    msg.setDestinationEntity(115U);
    msg.state = 241U;
    msg.flags = 9U;
    msg.description.assign("GZDJVQIXKZJODJYRWXTTAHFOPTVCCBFILJAJAIQURLMILROJFQYVTDTDVBNPKLGUBBNHNMURVY");

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
    msg.setTimeStamp(0.5131137006479126);
    msg.setSource(27791U);
    msg.setSourceEntity(115U);
    msg.setDestination(56210U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.9222071833545884);
    msg.setSource(19343U);
    msg.setSourceEntity(71U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.6176836433723731);
    msg.setSource(44203U);
    msg.setSourceEntity(111U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.2930007464239067);
    msg.setSource(19327U);
    msg.setSourceEntity(31U);
    msg.setDestination(46440U);
    msg.setDestinationEntity(66U);
    msg.id = 244U;
    msg.label.assign("IDPBASKOGRPNFYSFVPUQPYXRNAICUCGDNUNVJCMEJFIGRRQHCXPQHEANVIIGDVTEMROSJNMDUZLODVZJATQNMLLISAKWWHXZWFRLAVJXVULFYZITQPQXJQQPCGGWSEGHXUWMZYEOHMYURDHSYAHKKBJRXEXNSOHVTJLUSEZBIHJRWKVSFKIPBTTBVKKETBCYYXLMWMTFMR");
    msg.component.assign("RVECASIOGYQKDASLHTCYSNPNZUGYZDFWAOIWXIGRAZMWNUJQMRZZUQBHVKPFUMOHQWFBWYUJUXVDPLNEFAQTBZUFHQKCYLJTYWLNXJKBNVZKDWRHGYXALETDARWOSEESJMQMORSBPEYQGFPCLGUFTIFXDXK");
    msg.act_time = 6843U;
    msg.deact_time = 3259U;

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
    msg.setTimeStamp(0.22096797360861553);
    msg.setSource(56508U);
    msg.setSourceEntity(182U);
    msg.setDestination(35851U);
    msg.setDestinationEntity(158U);
    msg.id = 182U;
    msg.label.assign("YOYNGRSRAWWKHLMUZURTQCNLJZNRDJWZLHEVAOIJMFCHTSFHEPICXEPXGHGWVGJJAHZFHQFACLGTAIOQOLSKXSGWULPCTSHPYNFECNFTNUBMUQNGHDPSYQFBJDEBXTWSZAAVUMDRLIVOYENVMXMSMPAUQKEXYJJPFMBWILBXRIKKYEZGCBZQAWATKYWFKVKDCDBOTPGXIJKDUPREVHCYV");
    msg.component.assign("KHATHNKMKUWJNQIMMFBKXVJITJPJCRMZGEGVFRLFCFEHIZNNHKIXOTCGJLAJBOZURPCXQHNVEPSNAHBCDAVYWUIAXFRWSYIXYVMHYUIDLATATBQOYEVVEECUSSBCIGRXBOSJBKPFYBZIWMDQXOQSAKMT");
    msg.act_time = 29369U;
    msg.deact_time = 43153U;

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
    msg.setTimeStamp(0.36266238438682974);
    msg.setSource(38399U);
    msg.setSourceEntity(194U);
    msg.setDestination(39937U);
    msg.setDestinationEntity(118U);
    msg.id = 161U;
    msg.label.assign("FCBTAWOGKUDLDXZWQNBHITDCM");
    msg.component.assign("SHOYBDZYASHYABLHMLSKPDDROURGWCLYEAGCLIGNQNJBWNYVFLQJOLYZZJKWVQEWBINOEXDUSIQILPWZIFMEWVAUQYCTXDZYMQEPRGYPRYZPNXVMCNTKZVFJHTUAMUUFUXLBVFHTUX");
    msg.act_time = 49098U;
    msg.deact_time = 62244U;

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
    msg.setTimeStamp(0.8018761709811879);
    msg.setSource(8050U);
    msg.setSourceEntity(126U);
    msg.setDestination(45295U);
    msg.setDestinationEntity(212U);
    msg.id = 187U;

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
    msg.setTimeStamp(0.30785029614737436);
    msg.setSource(10107U);
    msg.setSourceEntity(175U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(3U);
    msg.id = 229U;

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
    msg.setTimeStamp(0.7518577002627329);
    msg.setSource(1795U);
    msg.setSourceEntity(119U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(122U);
    msg.id = 195U;

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
    msg.setTimeStamp(0.40620769896615927);
    msg.setSource(7230U);
    msg.setSourceEntity(240U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(49U);
    msg.op = 26U;
    msg.list.assign("NQSXTUHLEAANKORLXYCTZHBFMUZCQOCOCLMKBDPBYEBTWMTWYQFFOUHCGGKFEZUZILQDXEAAIUJCUPRRXRAYGDWANUOWCBKKCRJMYLZIPVLJPPRJQELFCMIXTBXWMW");

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
    msg.setTimeStamp(0.5526833325525086);
    msg.setSource(30073U);
    msg.setSourceEntity(130U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(74U);
    msg.op = 90U;
    msg.list.assign("GPDLHRFHDOPNPWYMQLSZUIRZHKKYVEVILQOOYRCJQHTUBTFIZHDLUVTKYUBXFAGFSVMEUCKXCYCAMSKMMQQXWYIIYPLDVIIPNEHDTVMOWKZSGOSKXCYPZLRZFTBFUEAPDRKFMAZJQWBNTGNNETZHMTEDNDPGJWVLOXODVNBSXNIVBGVDXYZAWSLJQRRPMKBWGU");

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
    msg.setTimeStamp(0.4796320530883442);
    msg.setSource(52355U);
    msg.setSourceEntity(244U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(103U);
    msg.op = 211U;
    msg.list.assign("DHFWAJMELUSFTTWDZBAEYEJFUKYAEKRYATRLACUMVTCERIOOONGHMSKMUPUAICZDLAHTFSMJDOWYHUCPPEPWVEPQBYQUWPLNXWPRVVHKRYWQQQXCTZSQXAIR");

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
    msg.setTimeStamp(0.5310601107202895);
    msg.setSource(42474U);
    msg.setSourceEntity(16U);
    msg.setDestination(14247U);
    msg.setDestinationEntity(91U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.14484263114861418);
    msg.setSource(52063U);
    msg.setSourceEntity(43U);
    msg.setDestination(61294U);
    msg.setDestinationEntity(237U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.9199546651398437);
    msg.setSource(30738U);
    msg.setSourceEntity(6U);
    msg.setDestination(36042U);
    msg.setDestinationEntity(141U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.3382375239550327);
    msg.setSource(20938U);
    msg.setSourceEntity(153U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(231U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.9897140007318959);
    msg.setSource(14161U);
    msg.setSourceEntity(135U);
    msg.setDestination(24614U);
    msg.setDestinationEntity(224U);
    msg.value = 198U;

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
    msg.setTimeStamp(0.4523372611402874);
    msg.setSource(22765U);
    msg.setSourceEntity(118U);
    msg.setDestination(30665U);
    msg.setDestinationEntity(47U);
    msg.value = 236U;

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
    msg.setTimeStamp(0.6940216966742765);
    msg.setSource(54336U);
    msg.setSourceEntity(166U);
    msg.setDestination(60796U);
    msg.setDestinationEntity(191U);
    msg.consumer.assign("UOHIAZRXCULOFHGDRHJBEUVZWASHBYYNCOQHLJMRVLPVHCSDSUGMTFOMKVRAPIGYTJCZMUVOFZPOIQWIUGNSN");
    msg.message_id = 48780U;

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
    msg.setTimeStamp(0.0472856200616687);
    msg.setSource(61343U);
    msg.setSourceEntity(231U);
    msg.setDestination(51966U);
    msg.setDestinationEntity(218U);
    msg.consumer.assign("FNAKWCNLRFG");
    msg.message_id = 59055U;

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
    msg.setTimeStamp(0.312904896002798);
    msg.setSource(26408U);
    msg.setSourceEntity(103U);
    msg.setDestination(34570U);
    msg.setDestinationEntity(161U);
    msg.consumer.assign("EVRZUDPMSTRHDUIPRTPMEGKZPTOCYSJNAQFCEJYLCYBQJBTMUAQZKIFEXJMPIHIEQAIGQBEBNBHUGTPQVUKUGWDLBVOSDMMSNSIKZOXCFAONVDRGLGBRLWEHUCXSDKPHQOMV");
    msg.message_id = 15432U;

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
    msg.setTimeStamp(0.658228513230751);
    msg.setSource(8457U);
    msg.setSourceEntity(241U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.7219976823608445);
    msg.setSource(16133U);
    msg.setSourceEntity(23U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.7372015388882394);
    msg.setSource(21440U);
    msg.setSourceEntity(158U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.17560973945456482);
    msg.setSource(57800U);
    msg.setSourceEntity(55U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(169U);
    msg.section.assign("JLBWFLDZZOKNPMCIAUHKBKRFOYLHVBCBYRGUSPGFWZQFLVRHPZBUJDSKJRXAQSTIMJMCMUGHOXNHMFUTKXMWINLEGCPBANAIHDRVRJKKFEYKEYDTSAG");
    msg.param.assign("GIKZVHVUNWXTXUGKTZCOMKHIITLPODSCXPEZYAREIBYLSVUWAXNEGNIQFHMFBWZRSKGSFMEFZMCOZMEIFYRKXJEWOYBRUPHNPKODQKETJMKUKGSKENSJVUVOMJPTQBOLQMIJYSRADCTHUSXIYAQFGJFITHSPPDAWYZNDVTDMAUHZAPCVXFXBJLQXRZNJUBGORQAQCBTARBDECWPBDECRQHWJCRDXLWPNVNV");
    msg.value.assign("ZQBAYUDUMHZZQKYYESNRDMLEDHNBZVLUSRFFMWJSUNJQQOBHQQBFVVAFTXYMGXAXSGCXPMRNWFROETSDBDNKMLXKOOIVVIRKDRDSUVCQABJSOPBVJUCVY");

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
    msg.setTimeStamp(0.8272247285770516);
    msg.setSource(54096U);
    msg.setSourceEntity(111U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(170U);
    msg.section.assign("LLBFDYFSEVYWEXMLNNNAQCTMYDEKKTLLUGPNUEWKBQZEZHJNHLMRIMJBUAINYPWCITFYSEDMCPTTIHLXSP");
    msg.param.assign("UKSYGMVMLRAVOSPAIHXVGFKTEJOSEWRLISYTRSPAFDKRLFJQUBOXHBBQLNZTTQRUFRSQWFPJZMLYFDPDVRPNOXZRIXTGYLCHUUWEDQNPANJIMBJAMXCEKZCYFCWIPEFYOVHXWB");
    msg.value.assign("QRXPZEAFNZDABUGLGINPMBTWLPSHNKUWUSAV");

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
    msg.setTimeStamp(0.13542824798006758);
    msg.setSource(46908U);
    msg.setSourceEntity(199U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(232U);
    msg.section.assign("VXUSYVKPZKHPYOACMPLWZBCTPUQJNEVCXKJIUBQCQHKTREJOGRGNWMLXMONTXEGDKSIGJANYDIQPUGBOBREZJMMTS");
    msg.param.assign("UYETUBHENAHYQKCXLAXLADAPHUDGLTZHSEPSNNSRKMMBGSUAXCDHFPZFJGYCNWICLRDSPNXLKPZLOBLJLMCVVQQZDAZOIYMKGHJUPFEDIOHQRWWGIZNTFERNFDLZDZXYAVMRGFKBRWEMAAASNTWUVBQWRHUYHJZOFRPYIYOGCVVEOMBCBCVCGWJQMMESKWYIUQPIXQMTVFEJUBSQOXITDTORXVOJBWKSD");
    msg.value.assign("JQUYVFLMALPWYKJVPIITXEHFSBBDLWRSPKCFXYEOLBJEIRUUULDLKOEBMEVZQXFNBFXQCRDHQCVDYIRXAKMIVWOIOQDEIPCJKWKEYOAJKUQZVHPVYVFYHXGMIODSEBKANHWSRHKSSJOPQCHMGTRLJTPSNPOGUHSZTHCBNUGNDZGLSFTNRZDJORCWBIBPLNTXRFMEWAQWRXMJVANHPAYZCZWNGOZYUBFUIXGJTQAGANCVUDLXAZGTKFQC");

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
    msg.setTimeStamp(0.7624663491641868);
    msg.setSource(32774U);
    msg.setSourceEntity(59U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(78U);
    msg.op = 56U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TIYZTLDNMJCCHEQCQWPJFJVDGWSVHRVPPWZKAMMENPHBARIXKHSQENDOQBJTVEKNLWTJYYFXSBHXHMWATZTFGFPAXDKECZPSZNLJSUMDPYMKHOTJUFGHVXLUCYUNLFIWEUIMWACXIABNFEGNBOTXQFICESIRMNLXKOAYPHIIURCDCERRWFNVDLOEKJ");
    tmp_msg_0.param.assign("SBZACRLXGKXHNSJOLAIWMIPUYGDNUITUQWOERTXSYHWCCXUQQRBCSEVJXDXODEKEDQWPTOORUBTTJSPFLRJBAZHVQFFECPLEQAAXMXCOZPBNONKKHAPOVCPKUBDULWGIEINWCHLVYGVDQMTNYNIIZYIVKJSNPQGZTKFGDFYERFZBJSVORUASTVIJGNHFHRVSFZOHPMAIWMNJZKXMFAZJRDVYYWPAJ");
    tmp_msg_0.value.assign("GBWWXEYSMBQCYMDSIJWVRHWUHSKJXCLBPIHHKXGPAQ");
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
    msg.setTimeStamp(0.10334402847519275);
    msg.setSource(6893U);
    msg.setSourceEntity(97U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(192U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.4615594662016451);
    msg.setSource(58952U);
    msg.setSourceEntity(1U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(6U);
    msg.op = 1U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MSEWYCXZTMKGJPVNCFHPCIOQGBYGVDBYQGNTRUBBDKPUHMARLBZPKDEFXJJPHYMVLEHYFCDCQ");
    tmp_msg_0.param.assign("AAODMOAXZENRUFDFEUWOLRILKVYFUGPFUWDVHY");
    tmp_msg_0.value.assign("PDMOBOMXTIFFQOVCCPFVGXUAJJSYTUHBWJRRYIVIEPOPHKHBCZRLNZWZTUDYWBTTQBKLCRRJCHHJUKGYLJKSFBWKEVQSNQEGUZWZNYXNDDXVWTMPGWGZVRJVVXCAGTYCLPIQDQMSOCSUEIMNTZMPJUBIXENCARJLKORGQLHOEEYATAHMPBKHINFP");
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
    msg.setTimeStamp(0.6443785962559748);
    msg.setSource(28848U);
    msg.setSourceEntity(87U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(144U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.31852568943881987);
    msg.setSource(15440U);
    msg.setSourceEntity(214U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(74U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.1048810455424255);
    msg.setSource(50650U);
    msg.setSourceEntity(104U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(209U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.17702740617171975);
    msg.setSource(3680U);
    msg.setSourceEntity(120U);
    msg.setDestination(1394U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 163U;
    msg.step_number = 124U;
    msg.step.assign("TDXPYXMWMWHCVLKLSIDESTWRCP");
    msg.flags = 161U;

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
    msg.setTimeStamp(0.9310076542051589);
    msg.setSource(24546U);
    msg.setSourceEntity(52U);
    msg.setDestination(7161U);
    msg.setDestinationEntity(194U);
    msg.total_steps = 228U;
    msg.step_number = 86U;
    msg.step.assign("TLUMJJZSSHHMZRVYNOOJWZKYFAILIRCWUUZQGPGUWKKIXFXCQSTEFSKYXLLMFTFNXVMNOEQMYSFIZMCOWDABHRCVEZMACAKP");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.6798166304255281);
    msg.setSource(65460U);
    msg.setSourceEntity(84U);
    msg.setDestination(21614U);
    msg.setDestinationEntity(95U);
    msg.total_steps = 75U;
    msg.step_number = 151U;
    msg.step.assign("JDJGYUIFQFRHRZZTGRZCWDCIIQSZUJANOKXBEFHJWYIUWCPKNSSMYQHHNFBUPFJEQVQBODVATVQTFKBXDZVPXWIJGMEEUOHOEAZKVAMCWTYMULTBKFQPVMENMFYGJK");
    msg.flags = 206U;

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
    msg.setTimeStamp(0.8102355759053794);
    msg.setSource(11347U);
    msg.setSourceEntity(228U);
    msg.setDestination(40514U);
    msg.setDestinationEntity(66U);
    msg.state = 142U;
    msg.error.assign("CTXYSIHWMQYFWHCDEUBRMUSFFHBKVMBYTRHEXTXEOLMEDKNYNRWZZFDNIOYARXTPLQFBRZPYTUAGWKGVXRJLKXHJLPRBGCIGSZBDQGZRUWOSUKBNTQSJBIDOPJZAOXEZUCFJSANVWLQQXYEULXMZVFAQMWCQMNDCLMTCDHYVIIPASFMEIVJIGWLNJAJBVQWKEAXEU");

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
    msg.setTimeStamp(0.878621132300078);
    msg.setSource(37150U);
    msg.setSourceEntity(61U);
    msg.setDestination(35022U);
    msg.setDestinationEntity(244U);
    msg.state = 231U;
    msg.error.assign("ZKQCCFDJIYOPFDXHIRGRXTFYIQPQT");

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
    msg.setTimeStamp(0.40786236625825223);
    msg.setSource(15767U);
    msg.setSourceEntity(186U);
    msg.setDestination(4711U);
    msg.setDestinationEntity(216U);
    msg.state = 227U;
    msg.error.assign("CQFCKOLATPOBVGGFVCMTBNOTBNIUARUKOGHXMGFVDCPPCLACEHPBWDQ");

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
    msg.setTimeStamp(0.8438404680627148);
    msg.setSource(37333U);
    msg.setSourceEntity(17U);
    msg.setDestination(39812U);
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
    msg.setTimeStamp(0.10687444544596991);
    msg.setSource(42416U);
    msg.setSourceEntity(159U);
    msg.setDestination(11153U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.4070517382651968);
    msg.setSource(48292U);
    msg.setSourceEntity(217U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.9064699048224433);
    msg.setSource(2728U);
    msg.setSourceEntity(122U);
    msg.setDestination(16618U);
    msg.setDestinationEntity(9U);
    msg.op = 123U;
    msg.speed_min = 0.22540873309491782;
    msg.speed_max = 0.5603781982538152;
    msg.long_accel = 0.46076324119588075;
    msg.alt_max_msl = 0.6269468994278308;
    msg.dive_fraction_max = 0.6658267163316479;
    msg.climb_fraction_max = 0.20321391677756429;
    msg.bank_max = 0.33504357954794095;
    msg.p_max = 0.6546418066171689;
    msg.pitch_min = 0.36012780180003423;
    msg.pitch_max = 0.37790612435076254;
    msg.q_max = 0.1163662898204707;
    msg.g_min = 0.6871323031308362;
    msg.g_max = 0.6854910382498173;
    msg.g_lat_max = 0.06841159170848332;
    msg.rpm_min = 0.5335780686993227;
    msg.rpm_max = 0.7771382999174478;
    msg.rpm_rate_max = 0.7706607222222478;

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
    msg.setTimeStamp(0.9883474258714182);
    msg.setSource(28072U);
    msg.setSourceEntity(39U);
    msg.setDestination(47249U);
    msg.setDestinationEntity(118U);
    msg.op = 135U;
    msg.speed_min = 0.5100284347131401;
    msg.speed_max = 0.5206844805627738;
    msg.long_accel = 0.5218176733356774;
    msg.alt_max_msl = 0.9542511135681704;
    msg.dive_fraction_max = 0.9380324541869902;
    msg.climb_fraction_max = 0.8758911172878785;
    msg.bank_max = 0.36058135641550193;
    msg.p_max = 0.6266566432752958;
    msg.pitch_min = 0.08294624125011263;
    msg.pitch_max = 0.1830760833524192;
    msg.q_max = 0.2745127538440303;
    msg.g_min = 0.7889367446606396;
    msg.g_max = 0.43223586586470253;
    msg.g_lat_max = 0.6892082521038586;
    msg.rpm_min = 0.2966378089013515;
    msg.rpm_max = 0.9367998857044552;
    msg.rpm_rate_max = 0.48886831322797164;

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
    msg.setTimeStamp(0.10742417376188607);
    msg.setSource(32253U);
    msg.setSourceEntity(254U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(247U);
    msg.op = 66U;
    msg.speed_min = 0.38753440505404746;
    msg.speed_max = 0.4537091081708228;
    msg.long_accel = 0.1745499465639745;
    msg.alt_max_msl = 0.4842186887228347;
    msg.dive_fraction_max = 0.25554022625924655;
    msg.climb_fraction_max = 0.8181005920028619;
    msg.bank_max = 0.3156459595997968;
    msg.p_max = 0.6851300752766653;
    msg.pitch_min = 0.432267720553024;
    msg.pitch_max = 0.15869033788722164;
    msg.q_max = 0.32098043754447836;
    msg.g_min = 0.43639970982005116;
    msg.g_max = 0.6019530229190723;
    msg.g_lat_max = 0.8291006160954353;
    msg.rpm_min = 0.6398680444414709;
    msg.rpm_max = 0.025482418318956035;
    msg.rpm_rate_max = 0.6583516480633325;

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
    msg.setTimeStamp(0.5490292963363639);
    msg.setSource(23430U);
    msg.setSourceEntity(252U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(93U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 233U;
    tmp_msg_0.mask = 2636660340U;
    tmp_msg_0.scope_ref = 1940151706U;
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
    msg.setTimeStamp(0.7837972415884842);
    msg.setSource(19574U);
    msg.setSourceEntity(123U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(183U);
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.op = 207U;
    tmp_msg_0.request_id = 53583U;
    tmp_msg_0.plan_id.assign("PNPNRLZXKLTDHBYGRZGGYFRKDIWMXAHXIBWAHTPQUWBWSCMLSFUEQEFNEOCVIGAONLMTYLJOKCVRMIDWSPKBRJMSWVKLTMLZKHFYGFRGXHNHX");
    tmp_msg_0.flags = 59172U;
    IMC::Calibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 32101U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("LINDLKLOIGRRAONOTSVTHDWMPTYLHQLJZSHSTZKPDPKCBNLEYEPNYHUEBVMBGFXUCRROBUYDWQWIWXY");
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
    msg.setTimeStamp(0.42726163793250926);
    msg.setSource(35848U);
    msg.setSourceEntity(206U);
    msg.setDestination(7927U);
    msg.setDestinationEntity(101U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.9463298135874078;
    tmp_msg_0.speed = 0.4637386238771949;
    tmp_msg_0.turbulence = 0.6157602601751639;
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
    msg.setTimeStamp(0.12614814785481554);
    msg.setSource(49607U);
    msg.setSourceEntity(200U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.6351403702381846;
    msg.lon = 0.09093214321659093;
    msg.height = 0.6536826038651735;
    msg.x = 0.4882147247131101;
    msg.y = 0.23301825238658325;
    msg.z = 0.7437712210471946;
    msg.phi = 0.19171763777760187;
    msg.theta = 0.6241896557558017;
    msg.psi = 0.8276229581290023;
    msg.u = 0.0664679005277562;
    msg.v = 0.23107812404025785;
    msg.w = 0.10661929961338157;
    msg.p = 0.40817948645681756;
    msg.q = 0.6474437663642543;
    msg.r = 0.28234365685549345;
    msg.svx = 0.09943389132527347;
    msg.svy = 0.9530506518929668;
    msg.svz = 0.5113881236767323;

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
    msg.setTimeStamp(0.23562149854725067);
    msg.setSource(57947U);
    msg.setSourceEntity(101U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.6969165264340084;
    msg.lon = 0.6117440757258722;
    msg.height = 0.014476138907857594;
    msg.x = 0.624832019891506;
    msg.y = 0.06457409155324845;
    msg.z = 0.47389806318016303;
    msg.phi = 0.39423276062283563;
    msg.theta = 0.9754001270603719;
    msg.psi = 0.11559258366124259;
    msg.u = 0.13445311230259183;
    msg.v = 0.4986893544275637;
    msg.w = 0.341254570921791;
    msg.p = 0.7116852950632662;
    msg.q = 0.5672419387394387;
    msg.r = 0.08016695830072951;
    msg.svx = 0.05261887111763053;
    msg.svy = 0.3177743502581294;
    msg.svz = 0.7832407186800996;

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
    msg.setTimeStamp(0.9383473527469683);
    msg.setSource(47943U);
    msg.setSourceEntity(211U);
    msg.setDestination(28508U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.7320260223998497;
    msg.lon = 0.9833070296249149;
    msg.height = 0.04235676745911576;
    msg.x = 0.8507386553666114;
    msg.y = 0.06175421682494775;
    msg.z = 0.4691421953343309;
    msg.phi = 0.7541948793727412;
    msg.theta = 0.9650964247777438;
    msg.psi = 0.8338135559896065;
    msg.u = 0.35243676201451624;
    msg.v = 0.7603896597303486;
    msg.w = 0.5835846810460752;
    msg.p = 0.6410093364122649;
    msg.q = 0.6156797766525441;
    msg.r = 0.6113247072176418;
    msg.svx = 0.29549146935136894;
    msg.svy = 0.6186773506770374;
    msg.svz = 0.43048776126398436;

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
    msg.setTimeStamp(0.4739400912711924);
    msg.setSource(1911U);
    msg.setSourceEntity(154U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(96U);
    msg.op = 168U;
    msg.entities.assign("OONBTZRPABUUSYVGSDLFTGDQICPYHAEXFZMKACYIQLMXRDVTTEUILMZMPTSZNVKVEJYYCQYAPOGJIKDDBKKHXSIZYXYFVBNVSPVNWEOWTSNCEQPNGZVELGEHRTJUILGAIRZAZOJDSGWFJLAYFANQHKOWNSQCWRCGKDRFWKQTOUDBAWXILFWFHPHGCX");

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
    msg.setTimeStamp(0.4537464819633603);
    msg.setSource(24760U);
    msg.setSourceEntity(180U);
    msg.setDestination(6473U);
    msg.setDestinationEntity(136U);
    msg.op = 81U;
    msg.entities.assign("DRRPVODIMFOBEAIHOARZXSEKDTBYBXYMVPWNVMWWWZAZDGUXLQMCSHJVXFHUYCDSZMNUILNALJCMXQCS");

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
    msg.setTimeStamp(0.5331365098880938);
    msg.setSource(7982U);
    msg.setSourceEntity(224U);
    msg.setDestination(22538U);
    msg.setDestinationEntity(224U);
    msg.op = 228U;
    msg.entities.assign("LIOIMRRZFNJFHBYIUYQNMLMVLZLBOGWQHQYQVDTFIZIJKUHFAJTPTSLYSOHBLXMDSWZAVCDQCJQZXBQIUHFPANSTYXMWFIBFCPEAXCRNWGLGKRJN");

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
    msg.setTimeStamp(0.2130457829490735);
    msg.setSource(14495U);
    msg.setSourceEntity(73U);
    msg.setDestination(56828U);
    msg.setDestinationEntity(160U);
    msg.type = 88U;
    msg.speed = 15759U;
    const char tmp_msg_0[] = {67, -29, -120, -57, -12, 87, -30, -81, -83, -31, 36};
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
    msg.setTimeStamp(0.23726043381939754);
    msg.setSource(38114U);
    msg.setSourceEntity(254U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(60U);
    msg.type = 182U;
    msg.speed = 51270U;
    const char tmp_msg_0[] = {63, -25, -54, -86, -21, 86, -84, -89, -88, -74, -35, -36, 94, -70, -9, -33, -12, 4, -6, 30, -119, -104, 116, 102, 78, 56, 115, -63, 62, -26, 33, -112, -33, 8, 5, 115, -61, 69, -12, -52, -110, -105, 54, -103, 69, 122, 62, 69, -114, -54, 40, -54, -22, -104, -58, -95, -71, 116, 125, 20, 23, 37, 77, 6, -107, -51, 61, 26, -28, -5, -93, -79, -33, 108, -117, -70, -101, -86, -72, 22, 73, 63, 80, -21, -25, -22, 106, 19, -98, -61, 28, 43, -78, 38, -79, 40, -43, -120, 13};
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
    msg.setTimeStamp(0.7214139327405615);
    msg.setSource(19445U);
    msg.setSourceEntity(197U);
    msg.setDestination(34775U);
    msg.setDestinationEntity(158U);
    msg.type = 6U;
    msg.speed = 35495U;
    const char tmp_msg_0[] = {18, -79, 0, -86, 15, 83, 83, -41, -6, 110, 94, -50, -6, -113, 0, -89, -116, 86, 16, 68, 59, -115, -45, -23, 82, -29, 11, 46, -67, -62, 27, 31, 8, -122, 86, 13, -28, 75, 45, -52, 54, -42, -71, 96, -45, -59, -1, 55, 79, 111, -18, -12, -36, -39, 111, -1, 0, -88, -77, 117, -40, 11, -80, 73, 59, -122, 123, 12, 107, 97, -47, -13, 120, 46, -79, -98, -55, 88, -35, 105, 39, 15, -118, -127, 6, 38, 24, 9, -49, -76, -16, 77, 111, 94, 83, -86, -5, -54, 15, 29, 66, -99, -3, -4, 108, -83, 98, -69, 3, -57, -30, -6, 104, -23, -15, -23, -100, -65, 0, -93, 81, -14, 91, -78, 105, -66, -117, -98, -15, -40, -128, -124, 15, -126, 120, 24, 48, 84, -107, 15, 63, -52, 12, 59, -102, 75, 64, -76, 37, 57, 7, -108, -18, -41, 117, -116, 95, 111, -73, 107, -91, 24, -67, -119, 63, 105, -69, -9, 99, 60, 22, -43, -78, 35, -105, 8, -70, -6, -76, -97, 61, -11, -126, 44, -30, -85, 47, -100, -5, -30, 41, 0, 88, -25, 103, 107, -49, 36, 52, 67, -60, 83, 122, 58, 85, 16, -24, 57, -22, 29, -68, -43, -37, 77, 77, 17, -3, 8, -9, -105, 76, 70, -124, -92, 67, 58, -43, 46, 37, -112, -101, 20, -39, 84, -41, -67, -110, 106, 68, 35, 125, -41, -102, 47};
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
    msg.setTimeStamp(0.18249103683300527);
    msg.setSource(17785U);
    msg.setSourceEntity(56U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(169U);
    msg.op = 124U;
    msg.tas2acc_pgain = 0.5635076392322382;
    msg.bank2p_pgain = 0.2868103541424917;

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
    msg.setTimeStamp(0.0685256546552685);
    msg.setSource(57102U);
    msg.setSourceEntity(111U);
    msg.setDestination(13229U);
    msg.setDestinationEntity(140U);
    msg.op = 199U;
    msg.tas2acc_pgain = 0.6649925172143375;
    msg.bank2p_pgain = 0.11079808537374325;

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
    msg.setTimeStamp(0.4758684295901011);
    msg.setSource(9549U);
    msg.setSourceEntity(120U);
    msg.setDestination(2148U);
    msg.setDestinationEntity(78U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.023951293711267585;
    msg.bank2p_pgain = 0.9415401939517364;

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
    msg.setTimeStamp(0.6751218369974619);
    msg.setSource(45607U);
    msg.setSourceEntity(68U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(241U);
    msg.available = 2901532795U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.45395277273667056);
    msg.setSource(34110U);
    msg.setSourceEntity(66U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(98U);
    msg.available = 414384316U;
    msg.value = 106U;

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
    msg.setTimeStamp(0.44710523335235364);
    msg.setSource(48562U);
    msg.setSourceEntity(178U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(202U);
    msg.available = 2902758144U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.4411897526064279);
    msg.setSource(10018U);
    msg.setSourceEntity(24U);
    msg.setDestination(707U);
    msg.setDestinationEntity(59U);
    msg.op = 99U;
    msg.snapshot.assign("QFGKTUWFQFLJJLUWBEKBDTISASTXSKJNOUJPHGRRVWNZHJQAFGPUOPVDVOYNTDEAVFYEXYTHIMRAMXSEIBDEKYQKUOCLDW");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 166U;
    tmp_msg_0.width = 16975U;
    tmp_msg_0.height = 32413U;
    tmp_msg_0.widthstep = 12655U;
    tmp_msg_0.channels = 189U;
    tmp_msg_0.depth = 113U;
    tmp_msg_0.finaldata = 125U;
    const char tmp_tmp_msg_0_0[] = {-45, -93, -120, -102, 70, 109, 80, -28, -127, 59, -46, 80, 112, -42, -100, -27, 8, 100, 100, 53, -100, 116, -111, -27, -89, 80, -38, -47, -56, 57, 9, 16, 64, 38, -17, 68, -72, 126, -30, -5, 51, -20, 81, 65, -86, -18, -80, 31};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.571594009653638);
    msg.setSource(53009U);
    msg.setSourceEntity(11U);
    msg.setDestination(41942U);
    msg.setDestinationEntity(112U);
    msg.op = 248U;
    msg.snapshot.assign("TZAFHXYLLOGDXQBSDWEMUIBWXVPJWOCRTLRVKVXSCEMKTSNMOJVGHEPYIBOSDJFNDVUIWUBKPRMITHIZKCKABIPFOFEVNZPYENJNMUPJYABEQPJHSGPDZKLCTXIULQMQFVSXHQVEHSFHAHRVOJJXC");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 114U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("AFEUWFTDFJXDWSBQZOYKZWCNGCTWZNTXKRGVRJQYHNZQIRVPJIQBMUUUHGZUGVJYQSSSWXAJWBDEBBKRVNFAZTCJXUPCACPODHSYIFSOXUEDWAQHRLXTDILMMOTCFMETKLYJQPBVIVVOGAVTHOJIHVFCIHTPNPGMYASYMHLUXGENAOPLOFRNRIZRQSNUGDLKBDEBMPMZEILVSOYLXE");
    tmp_tmp_msg_0_0.lat = 0.8357748925715016;
    tmp_tmp_msg_0_0.lon = 0.9225657574087581;
    tmp_tmp_msg_0_0.depth = 0.2387712774931875;
    tmp_tmp_msg_0_0.query_channel = 142U;
    tmp_tmp_msg_0_0.reply_channel = 150U;
    tmp_tmp_msg_0_0.transponder_delay = 101U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2100276385939459);
    msg.setSource(41727U);
    msg.setSourceEntity(145U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(202U);
    msg.op = 174U;
    msg.snapshot.assign("YISZOPXGFTDMUDXETWKRCWOVBWUPRWPLRDMHIKTGFHBSAINCSPWIPEPSUBLRAPOBHSIJFEBQXDGNIQVARUKZHAZNBFXOXJENENAHNGKMDGDMFPGLUSGOZNLGPCMTKMDKJSICWUAUESBBXJJRPMOKTSQUXOLDBRTZZTQQQEKTXTHSVMNYFJWJIQVAQYIYAVYHOMWVCTXVCKWVZYYZXFEKFQHGCWLFEJNRZMLRQOFNCHHDLYCJVLOAYYJDAURIE");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.7734902462057286);
    msg.setSource(2109U);
    msg.setSourceEntity(117U);
    msg.setDestination(31066U);
    msg.setDestinationEntity(137U);
    msg.op = 145U;
    msg.name.assign("QPKLWAIZGAAYZUTBBVWXZNIOQNWRQTGICHBUAXKCZRXQLYSMZUIJJPTRDEKKPWRLXRDSEOHNSVCYAMJSPUDGEIERYVNJTMSROQVIJQVAYJSWQUCYXAJFDZMX");

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
    msg.setTimeStamp(0.8152895501874042);
    msg.setSource(18587U);
    msg.setSourceEntity(58U);
    msg.setDestination(49161U);
    msg.setDestinationEntity(149U);
    msg.op = 53U;
    msg.name.assign("DTPOXEIMGIYXMOHLEKYBEQOXQICGZQLASICTEVNFQUDPFJKNEEZGZFCSLZKWEPKVSZCKHYXONRBHRXGFDTUTDJDHTDJBTPVSFDHCEC");

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
    msg.setTimeStamp(0.19761397824953586);
    msg.setSource(28452U);
    msg.setSourceEntity(22U);
    msg.setDestination(31323U);
    msg.setDestinationEntity(18U);
    msg.op = 27U;
    msg.name.assign("UBWFEBULMVYSDIGAYXTACDRBAQGJKWWNXZNMUDRWKKOELBEADFQZJRDAAVFQOTBZIFVZBFZPANPFOPCIYVDYVJHXLLEEYKRDJLIPURWNNDXBFXNRZGSSRWGHHWJYVROJSMZEV");

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
    msg.setTimeStamp(0.6347511780026757);
    msg.setSource(36509U);
    msg.setSourceEntity(51U);
    msg.setDestination(21131U);
    msg.setDestinationEntity(133U);
    msg.type = 170U;
    msg.htime = 0.7792742403720587;
    msg.context.assign("VQEHJCZFLXGZEKFHXTZVITQRLOEQ");
    msg.text.assign("ZKMOPQHMCENBVUSFICYJAXEUPYYNCDDXLTKROYJUGATUJNDLMAIQFBHSFIYHWTGOKWJGWAEVMBPAWYARLVSLMTQEDHKK");

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
    msg.setTimeStamp(0.5185984813655967);
    msg.setSource(39151U);
    msg.setSourceEntity(105U);
    msg.setDestination(22832U);
    msg.setDestinationEntity(112U);
    msg.type = 183U;
    msg.htime = 0.21192025103150547;
    msg.context.assign("LVQPYCSWOEEACKIQXKKUXBZDCVTZSVJDPPRXSXPIVMWNNLTIZWRGXGOBHRXFSJGWKTTRWKANMUJHXVJUNQNTEWDZGIYBNKMNKOKTYH");
    msg.text.assign("EJGSVWAIIGPQZFVMKFHRXZQY");

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
    msg.setTimeStamp(0.8434575749795526);
    msg.setSource(55617U);
    msg.setSourceEntity(80U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(162U);
    msg.type = 72U;
    msg.htime = 0.14031139614968036;
    msg.context.assign("VZBHFUXQICJVNIUXRHMEJFGNFKNVWSXGBAHDMNFWEMTRRLVTTHYCRTBQZNWJSAIZQXKDOUWPBLSYKTLVIBFGSPMISTLHS");
    msg.text.assign("GXLYKEUOSUXQPORRLUEIFSGQWATLYABIDYHWGWAWJOQXBCBDSRNTKMEYTIOK");

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
    msg.setTimeStamp(0.91918080016657);
    msg.setSource(6110U);
    msg.setSourceEntity(147U);
    msg.setDestination(47082U);
    msg.setDestinationEntity(175U);
    msg.command = 215U;
    msg.htime = 0.28763230698500786;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.htime = 0.07818861345189165;
    tmp_msg_0.context.assign("RDAKJZPHNGLWDOQEDQFRWDRJCTHPKBHLJVAYCQKXPHWIBAHSGZWNDIJCAUILWLSOYWGQZCPXXJRPEYBLISOKQTBVIYHCRAJXZFTVNTUQPBOCRRZXIBVDFWTKXMUJKASKCDGB");
    tmp_msg_0.text.assign("XECYZZPSVNUMNGYHDOXMEDGQTCIPOKGMZSVICSNQBIAZPCYSHKPSMLQRDZTHCWSTGEVVMZQEPBVWUINAHAMZAQKBWPATTM");
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
    msg.setTimeStamp(0.2998078576689547);
    msg.setSource(54814U);
    msg.setSourceEntity(37U);
    msg.setDestination(64128U);
    msg.setDestinationEntity(110U);
    msg.command = 185U;
    msg.htime = 0.6597219314699652;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 134U;
    tmp_msg_0.htime = 0.1299091088659552;
    tmp_msg_0.context.assign("WSYFWATTDBTVIMMUJOQQEIQTLYGDKOREQRCNOUNNZDDBUDUPVZCVXDTDOXBONNEZPLXQTVNABOWIGSEBYHTJAXKVYTHOTMLQQXCQDHCEBWGPIAUXORFVGJHLZGCCKHGEAJMRPGLEFSIFSGKYSAUNWVZFXLWULMMUNMYTBWEKFNIO");
    tmp_msg_0.text.assign("CHLEBSKIAMHGQICYCQNQSIDJLETVMVVDSOVZEHJFZKSWRVOUJHHMXFYUURYDFLOPGNUAPUXPFXGKEGFAWUHIPYOGSGNBB");
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
    msg.setTimeStamp(0.40142316345188234);
    msg.setSource(3973U);
    msg.setSourceEntity(29U);
    msg.setDestination(41788U);
    msg.setDestinationEntity(151U);
    msg.command = 226U;
    msg.htime = 0.14206879392052318;

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
    msg.setTimeStamp(0.37382693870858996);
    msg.setSource(15334U);
    msg.setSourceEntity(54U);
    msg.setDestination(45353U);
    msg.setDestinationEntity(235U);
    msg.op = 178U;
    msg.file.assign("JQXYPEDIFCRCTLYXSQGCKMZSTHANPLGOZOTKJLXCHGGHJFWPWCDUNIOSZQJJGNYNXMFMIDVNVZBDGLUOEBICQOQOKLIZNWRBKYUVXBGPOXKQGSCUKSSOUVDZFWVRBHAYLVAQNKAKPOURLXTRVIBNVTWYRMBFAUMCBHMXEEUALGTTFVFQIRRDMJPHDAPZJHRLRHXGZYTFEJWMJEWAOIMDFVSHQUWTITWCSBKSCEPDZYAIWDKPSNZHJUEMXE");

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
    msg.setTimeStamp(0.2022382858682864);
    msg.setSource(55161U);
    msg.setSourceEntity(100U);
    msg.setDestination(3059U);
    msg.setDestinationEntity(122U);
    msg.op = 91U;
    msg.file.assign("KUIAGZBTFEOHAXDCQOREENMNZFFENGVSAYNNAZXSVIOPZLEGODRTTKOIWKJQFXBMCZPMWXIWKRJBWPZFJPUNCKKNUIMYNYTCZHBCOMAWHMJFRTFGZIYSSXHERQIHLDOVXVMHRUBKQTPLVCLXVXDGORZTVTTNNKJAVLUJPKGABCMEGVDYIWUA");

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
    msg.setTimeStamp(0.6769479755425087);
    msg.setSource(7308U);
    msg.setSourceEntity(13U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(29U);
    msg.op = 101U;
    msg.file.assign("RKTRUANVHNOGWJVZQSJBTFVSWBTJHYUPFIDEQPQKIPFVPQGKEZMGHCTDJOURSAXJDPRRCAVQHVKYJENPAHOUTVIJXTLDOFTOISZMWGWUINIDGNXFVMYTCKUXEBXMNMRLOMNHWGLXKSUPWCBHADIRROKFIESUYYZAKWRM");

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
    msg.setTimeStamp(0.7465796675273948);
    msg.setSource(50946U);
    msg.setSourceEntity(13U);
    msg.setDestination(61800U);
    msg.setDestinationEntity(197U);
    msg.op = 135U;
    msg.clock = 0.37195272451743644;
    msg.tz = 5;

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
    msg.setTimeStamp(0.4100842547469278);
    msg.setSource(6217U);
    msg.setSourceEntity(152U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(38U);
    msg.op = 247U;
    msg.clock = 0.016151218367129183;
    msg.tz = 70;

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
    msg.setTimeStamp(0.8060660253609506);
    msg.setSource(56488U);
    msg.setSourceEntity(157U);
    msg.setDestination(896U);
    msg.setDestinationEntity(217U);
    msg.op = 147U;
    msg.clock = 0.45885201650007346;
    msg.tz = -69;

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
    msg.setTimeStamp(0.6679212334280386);
    msg.setSource(13821U);
    msg.setSourceEntity(145U);
    msg.setDestination(18693U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.5142572486678073);
    msg.setSource(17800U);
    msg.setSourceEntity(227U);
    msg.setDestination(8089U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.8101682726480324);
    msg.setSource(46510U);
    msg.setSourceEntity(222U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.6892034132777549);
    msg.setSource(37105U);
    msg.setSourceEntity(41U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(124U);
    msg.sys_name.assign("ZFPNGFYVTAPTBIEGXHKBQWEXOXCHCDBVETKUYRKJGGVKFGRPOJVJZIZJUBICIFOKMQTYLDTQRMJHPSQIUKRBXJNCBDCYCZCSWZMMAVAVRYNQIWQQLQLLMIBYGUCQSOMJKLYSMCKGNHGJBWNSLNDPAXZTFFPHBODVOHMQRFLOFFXTDGADXSOUVWU");
    msg.sys_type = 165U;
    msg.owner = 5540U;
    msg.lat = 0.6076946390562473;
    msg.lon = 0.04391111661143121;
    msg.height = 0.08268582955458026;
    msg.services.assign("PUVQLYCRLRGPOAXVPTGNPEKPXCPSNVZIZCFSEUHOXFCZSBJAPCZFWMIYIBBETXSNFGYTYEVHWAWDPQNOAORVMGOITSGFFJEGAJSMIFWOBMIJHEXMMZKWPDBNAVBYBKLHHWFHGQJEHAURQCXDNQPRGDXENKRDKWIMHTTULDHRDBLWRKYOTGILQCUMFVDMUDLLKJZWAEZOEULSURWRQINVUZJVJUYBQTTIBOZFYQCVLKHYZACXKOCSXQKSN");

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
    msg.setTimeStamp(0.5554410833222025);
    msg.setSource(28615U);
    msg.setSourceEntity(162U);
    msg.setDestination(34080U);
    msg.setDestinationEntity(114U);
    msg.sys_name.assign("XLSQNCHSPCXGVOFBSKDLXNZFGFHZWZAUMMRMJDVBKGOPRMJACLJLYDYKMSKJQKRHOMVEBFJFGBHDKBAHQAIDTTPPLVKWTGEUDPDFWYJIRIUUTHMWUYJFIEPIOTCHSXUQCVHXEVNAYPIVXRYPCZEHONJEXWZCMPEGVYIOWNRBVXRQWRIGKTNZGGAONOTBSUIZBXASPZSCCUQTYGLQLTDNEWRORYMOCZAIQQA");
    msg.sys_type = 45U;
    msg.owner = 5513U;
    msg.lat = 0.9003336482494021;
    msg.lon = 0.7202403563492947;
    msg.height = 0.5057090909952748;
    msg.services.assign("XLKOWBMYSLVFSNNUGRXQMSLXKUKOLKMPIGMBNCGARCUKNQSVVNXHUYOPVJHIUMQEJHRTQDIYIZYTSOGCMCDTLTDLZXFKWPUOZYAIVPACXHUZRZWYLPIZGDRBLEAHIPADYEGETJBHWMQQCBFUFCECRMRFPXZKQLKHEDOEEUIG");

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
    msg.setTimeStamp(0.06551139381335891);
    msg.setSource(53483U);
    msg.setSourceEntity(178U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(44U);
    msg.sys_name.assign("QYICBNEDWKUZGKORNDOJUOIJSOYCXJQBTXWNTLUTWTZRUSLMHCMOAEBYMIANEHYVOPLVOSKNFDWJZVMSACWXZLZBBTRHEGWUIPGBYEJVOXRFMVHBLXCGRCREGSQOKGPJVPPDLTHFSTPQRGNXKUBTXWNVDLQKSMAPGSWRIHYZQDREAAENUXCZGSDFXCHHAYLYWKQVQUEPDANKUMBZYMIFMDVFIAFUHDJJJJCIQFQICZTNVHYLERWTK");
    msg.sys_type = 249U;
    msg.owner = 1831U;
    msg.lat = 0.5436268564474313;
    msg.lon = 0.8804038636714444;
    msg.height = 0.6081547325854205;
    msg.services.assign("PXMVVLSVXCMCSYVRQNFTGKACJUYHWROQXYCKMFKYOGUSDFTWJASBZKIHILYISZVPAHRBLIMFFLIVHNOEEWXTRM");

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
    msg.setTimeStamp(0.8782459490915868);
    msg.setSource(61259U);
    msg.setSourceEntity(57U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(10U);
    msg.service.assign("ZXZQHWBPNABZVRRJANJJTNVQJGRKIWNP");
    msg.service_type = 216U;

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
    msg.setTimeStamp(0.7664879366952801);
    msg.setSource(40354U);
    msg.setSourceEntity(69U);
    msg.setDestination(51124U);
    msg.setDestinationEntity(25U);
    msg.service.assign("JTHTBPUWSWNFRQHLKFVMKUZBASHCCLYPNHJWQXUITZGIECMUDYQDGPCPHAUSOODQEWZMLPVUSQQGIJMIGHNVWERLZPMITCUDGOKDDDAKAMFXAWCYQJAZYADCXRJXOKKTICYGNNTPBBVBXIGIYNWFFEQENOKIKXWRMMRUQVJZLYVBPBZRMVVFXZNAEBRVPYOKQHJYY");
    msg.service_type = 254U;

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
    msg.setTimeStamp(0.5583234536613401);
    msg.setSource(502U);
    msg.setSourceEntity(56U);
    msg.setDestination(27373U);
    msg.setDestinationEntity(7U);
    msg.service.assign("FXWLGSPOPTBL");
    msg.service_type = 68U;

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
    msg.setTimeStamp(0.38154762352587746);
    msg.setSource(59045U);
    msg.setSourceEntity(41U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3737298598165536;

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
    msg.setTimeStamp(0.5393756781727372);
    msg.setSource(28854U);
    msg.setSourceEntity(172U);
    msg.setDestination(23595U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8654021217045791;

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
    msg.setTimeStamp(0.39976627494923855);
    msg.setSource(48764U);
    msg.setSourceEntity(63U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5099080401609978;

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
    msg.setTimeStamp(0.7850811920147855);
    msg.setSource(25290U);
    msg.setSourceEntity(167U);
    msg.setDestination(26272U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8200290278672273;

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
    msg.setTimeStamp(0.2642561848620497);
    msg.setSource(15786U);
    msg.setSourceEntity(151U);
    msg.setDestination(61249U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6885859099564853;

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
    msg.setTimeStamp(0.8513310005234224);
    msg.setSource(44487U);
    msg.setSourceEntity(251U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(133U);
    msg.value = 0.40350395919451576;

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
    msg.setTimeStamp(0.08320206480887982);
    msg.setSource(28997U);
    msg.setSourceEntity(161U);
    msg.setDestination(46173U);
    msg.setDestinationEntity(57U);
    msg.value = 0.14337160898144063;

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
    msg.setTimeStamp(0.6358004718061744);
    msg.setSource(3054U);
    msg.setSourceEntity(80U);
    msg.setDestination(7151U);
    msg.setDestinationEntity(67U);
    msg.value = 0.40297145074831964;

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
    msg.setTimeStamp(0.8173124551660348);
    msg.setSource(40027U);
    msg.setSourceEntity(130U);
    msg.setDestination(63750U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9970170523870877;

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
    msg.setTimeStamp(0.32017457602339205);
    msg.setSource(4001U);
    msg.setSourceEntity(244U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(201U);
    msg.number.assign("BCZPEOKHMJRBUHVVLTTZLPCEVALBDPWCZZZMBOXEGBOIYUQXYDTWOJQFAVFIRJTHBMFSVHWKJOFZXEUUAETJCEPGGKZGOJKHSIPUANFHISQMJRNVIUDDCYDRMSBKAYQXDAERZMIIPEYEOFNALDHVROOTNWTLNANNUW");
    msg.timeout = 15596U;
    msg.contents.assign("AXYWWCVWRKNVBEZLFLQOYOTKAOMQUIXIMAIHXRPGPSPCPD");

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
    msg.setTimeStamp(0.7811866922501156);
    msg.setSource(47404U);
    msg.setSourceEntity(135U);
    msg.setDestination(17389U);
    msg.setDestinationEntity(32U);
    msg.number.assign("ZBSDLSCWXJMDOTRWMHAWZGNPLVIOAEINMISSPUPUZBZUVETAQOJHKMQERVXWRTKNUVIGPJIXTJXBVYBPADMGFYMKJIZXOUWHJWDDYZKLERAKSWDEVDTQRGKSJQQBQFLMNATPRSOIXTXNCYINCDLYFLIQBGJWCOHLTG");
    msg.timeout = 9964U;
    msg.contents.assign("VADNWAFPAHQDJIKHMEQIEBACITJFTAXDCZQECGFKYFRZUVXBLXJGTPXHCRRDTT");

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
    msg.setTimeStamp(0.02715451097904853);
    msg.setSource(33195U);
    msg.setSourceEntity(71U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(253U);
    msg.number.assign("QXJCYWVADWPBRCWOKRBHQPZMWIUGPBQQQFOEVGWUNGYPZEHSFUXAOAKHRGVBYSFQXAMPAGHNPDSQEYXESMTVDMCDJMMWONARIRHN");
    msg.timeout = 7001U;
    msg.contents.assign("OHFTZLCMPIOLKYJLJOPAVSPTTPHTBWRHYJJIDWAORQYHBRDQTAMIZYVIJXRDSWNVHXLYHSRBW");

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
    msg.setTimeStamp(0.37210088624696636);
    msg.setSource(678U);
    msg.setSourceEntity(231U);
    msg.setDestination(48756U);
    msg.setDestinationEntity(55U);
    msg.seq = 984702048U;
    msg.destination.assign("LKRZUHYQSYSEXNNVTBMXLWDTRUTMJPYHVEAFVIESKKGAFCVIEGGFHDFVRIBAOOQHDHKLWSYYVILPCGCSTGHEVPLQECRAKZUZWXCTFXYDJNGUPRIOCEITJBFADOGWKBZXKHPUAJOAOFGVDWWNAIHDQVSOEIOFQYMXJPPMZ");
    msg.timeout = 16126U;
    const char tmp_msg_0[] = {-18, 25, 65, 97, 17, 26, 98, -17, 22, 48, 86, 77, -71, 21, -81, 93, -39, -96, 98, 94, -86, 26, -80, 45, 10, -115, -98, -7, 110, 64, -99, 92, -94};
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
    msg.setTimeStamp(0.8154760033816681);
    msg.setSource(32623U);
    msg.setSourceEntity(246U);
    msg.setDestination(38798U);
    msg.setDestinationEntity(209U);
    msg.seq = 2835063029U;
    msg.destination.assign("QJDGOQVLCTGJNOOFXPEVSYCEMFCBTPIPRZILGTQRZPIHKNYBAZXDZRZQTKOYFFSFBUNHIQGKUVUCRWBTWVMFVREMFQRAWHJICSZATMCEFVBUPBYURFQLRIPDTAIWGHMKODMZYQAXXZKWWSKHT");
    msg.timeout = 42574U;
    const char tmp_msg_0[] = {-127, -50, -89, -88, 45, 57, -19, 42, -7, 115, -30, 32, -49, -53, 32, -112, -41, -119};
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
    msg.setTimeStamp(0.7153824212269493);
    msg.setSource(3638U);
    msg.setSourceEntity(147U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(200U);
    msg.seq = 1262913847U;
    msg.destination.assign("CDEZFKBQFVCBFGJOXBTQHPBQQTHUVFPRAFXOQPADIXNAWOVWDWOUHUKSGEDOYQAQPF");
    msg.timeout = 2693U;
    const char tmp_msg_0[] = {65, 103, 85, 45, -2, 22, 110, 17, 2, 20, -10, 75, 48, 56, -73, 68, -41, -112, 66, 51, 44, 1, -59, -90, 33, 62, 114, -39, 68, -106, -44, 89, 82, -113, 118, 38, -63, 16, -54, -58, -12, -1, 3, 32, 115, -54, 106, -44, -101, -105, 30, -101, -55, -114, 56, 2, 113, 114, -96, -91, -97, -5, 72, 4, -94, -79, -28, 26, -2, 63, 19, -95, 78, -95, -24, 102, 83, 101, -89, 12, 95, -48, -64, -45, -126};
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
    msg.setTimeStamp(0.42620187343227456);
    msg.setSource(54527U);
    msg.setSourceEntity(158U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(131U);
    msg.source.assign("ECYMOPYNJTPDVFQIOKNYXPILZAOKPUIDXCLVCWRWEEBRHKXHFUBIGJTPJHKNQSDGIUPLATDWLLYNUEICWDAUFPTYVDDRGYUDGATUZSAZCRSCBSQKOQZLHNKXFXERMNSOUFBEWBACOV");
    const char tmp_msg_0[] = {104, -5, -18, -11, 87, -72, 70, -28, 60, -93, -28, -73, -74, 84, -70, 92, -12, 13, -127, 50, 11, 43, -69, 7, 31, 86, -74, -44, 98, 16, -4, -55, 53, 120, 38, 16, 62, -122, 8, 90, -33, 15, 17, -70, -94, -68, -79, 62, -48, 53, 40, 41, -19, 120, 106, 29, -68, 50, 20, 10, 78, -12, -55, -9, -123, 58, -37, -109, -72, 85, 101, 98, -120, -85, -60, 87, 118, 28, 75, 44, 58, 108, 11, 75, -106, 17, -79, 4, 18, -10, 85, 70, -45, 24, -2, -93, -37, 9, -51, -51, 112, -58, -120, 95, 118, 33, -20, -51, 118, -49, 121, 49, 36, -41, 8, -104, 45, -19, -94, 20, -54, 20, 73, -65, 27, 125, 0, 101, -26, -71, -48, -104, 85, -106, -43, -80, -106, 65, -39, 114, 11, 103, -18, 96, -57, -102, 66, -85, 13, 91, -7, 43, -89, -33, 73, -115, -107, 67, -26, -36, -55, -78, -114, -62, 28, 22, -119, 22, 80, -93, 123, -28, -116, -114, 81, -25, -56, 111, 100, 87, -13, -105, -110, -35, 63, 115, 35, -79, 71, -34, 27, -47};
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
    msg.setTimeStamp(0.5819054605088027);
    msg.setSource(16851U);
    msg.setSourceEntity(213U);
    msg.setDestination(58475U);
    msg.setDestinationEntity(180U);
    msg.source.assign("NJNTVYOBMIJDFPLENYQWCCLJTG");
    const char tmp_msg_0[] = {100, 54, 16, 99, -19, -72, -118, -10, 119, -113, -104, 86, -61, 45, -39, -97, 86, 18, 40, -37, 92, -22, -12, -112, 57, 108, 77, 103, -41, -97, -103, 40, -116, -35, 33, -28, -127, 43, 21, -51, -108, -78, 48, 113, 2, -19, -54, -68, 95, 96, 89, -4, 13, -55, -73, -42, -103, -71, 39, 38, -15, 65, -46, 56, -12, -70, -15, 21, 92, 109, 26, -77, 37, -44, 20, -73, 117, -75, 115, -16, -24, -122, 87, 78, -39, 110, -74, 118, -108, 38, -126, 80, -12, -60, 104, -34, -33, 107, -103, -58, 96, -93, -30, -38, -39, 13, 44, -109, 10, 28, -104, 68, -26, -87, -106, 121, -93, 28, 81, -35, 88, 15, -112, 118, 6, -14, -42, 18, -68, 4, 64, 122, 102, -124, 67, 39, 93, 9, -120, -38, -88, 88, 32, 8, 64, 91, 57, -72, -38, -85, 12, -86, -30, 110, -81, 58, -84, 121, -45, -49, 92, -4, -70, -39, 60, 54, -91, -39, 89, -69, 47, 70, 69, 81, 53, -115, -124, -13, 40, 39, -20, -9, -4, 121, 35, 100, -91, 31, 36, -85, 98, -61, 40, -14, 113, 105, 34, 6, -101, -73, -73, -17, -39, 104, 34, 93, -42, -22, 75, -5, -123, -100, 8, -79, 55, -100, -72, -11, -2, -10, 63, 105, 63, 97, 115};
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
    msg.setTimeStamp(0.9813933477656048);
    msg.setSource(54455U);
    msg.setSourceEntity(130U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(133U);
    msg.source.assign("AGQDAYCDBGXYHMGXYNASRVMKUQDQOKUBWYYEJPIMTFKVTJAQIQKEZMLTESHTWRLCEFKEPVNYWESFNICHKBYDFJZWXFSOFYQLULCSXDHUCHAVUNKNGXZIPTQILDVCKOQBRRNZTXXSDMHGJUWNIKVG");
    const char tmp_msg_0[] = {46, 29, 26, -55, 126, -100, 37, -4, -43, 35, -42, -33, -74, -14, 87, -7, 3, -24, -86, -45, -61, -116, 54, -62, 115, -17, -6, 49, 39, 12, 51, 81, 86, 10, -21, 18, 117, -102, -47, 28, 47, -9, -1, 33, 97, 125, 59, -125, 81, 29, -6, 47, -5, -33, 44, -128, -9, -22, -61, -44, 101, -6, -26, -79, 120, -124, -16};
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
    msg.setTimeStamp(0.0759455048440576);
    msg.setSource(22199U);
    msg.setSourceEntity(27U);
    msg.setDestination(36936U);
    msg.setDestinationEntity(189U);
    msg.seq = 4115553204U;
    msg.state = 243U;
    msg.error.assign("MQYPBZLPQJEKCPWPIXUACIBAEZSBJCJFOHINUJVWUYRTSTHKGXNMNXCWOWRLTYLSZYDODHHBSFHFCPDDEWXFKORTTRZMFAIHGALEVWYUGVSVDQMYGKKBOBEYJVE");

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
    msg.setTimeStamp(0.3412053213341314);
    msg.setSource(44567U);
    msg.setSourceEntity(210U);
    msg.setDestination(45716U);
    msg.setDestinationEntity(105U);
    msg.seq = 370459522U;
    msg.state = 99U;
    msg.error.assign("YHTIRTEUTPKDFESUCCXNAVLIKGBDJFZVAYWIXTUNPFLYMOWSXLDMPWTBKFYPGPHGLJIJKJVWPLOHPHZUNRMCBCGIPSEOMLZTIWAEKEQGJECQBSTKBDITRFIVQOWYTNLIBQQYFJOCSPDDVZQMSDLCMOCHBTEXHSKZRWOJLNJYWQRGIBLZAUFVOXSAXFFWAOENHYHGGNDVVKXHDRBPUQJXMXUFZMUMERZVUCVYYNQSXZNAEAH");

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
    msg.setTimeStamp(0.995352868635509);
    msg.setSource(63669U);
    msg.setSourceEntity(128U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(218U);
    msg.seq = 1880175111U;
    msg.state = 142U;
    msg.error.assign("CKOKKSMXQIECRBENAXNDJCYSFBACRMCYVWJSTTBZPVFUOROBELQJHHNDRQZXDMCAQIPOIMDPYAULGJBKQSJIOTQJWHCSUYKPZMVMNKBNTRAVEGVMXSOENCLGBVPYPTMFKIFZLVFSZLIXKXTYERAUROUYZRGYJLDEBQWTLNDZUHUAFUKBARFVAYHGINTUJWDHXLMVENSGP");

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
    msg.setTimeStamp(0.49635644591042305);
    msg.setSource(59956U);
    msg.setSourceEntity(150U);
    msg.setDestination(38914U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("OPHWAFIFJIDCJWOKCCNYHSPCIXEGW");
    msg.text.assign("BFYBKHNPUQOCWZVQJQDAWZPBCEATYLDSZWEBKAPMPZCIYIAURJEKGBCZQAONURNBFOVDQXCRZOHSNYQERWGVAVCTMNXHPIHYYPXTNEAUHLUMDUMRRJKQNAKWLVWAUOTJGYPFFTZEBNOFGX");

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
    msg.setTimeStamp(0.45274379444328683);
    msg.setSource(53742U);
    msg.setSourceEntity(90U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("YVWPKUDJFAMAQNVFUASZRZDMEBDHWMZJSZDVTDXNFWOTTUGZPWTBLVHGNRNOSZCASLTNCEJCJTDHYXLUBIZJCLAJAGKKLYSRQMWLXUPQGAZXCHWEIBTLBERVOOUQQZCNSPVKDL");
    msg.text.assign("GXAYEOJOBRROGUCPAWNJZKTAWGJLVLSBOLHBOLMSOMDBYNSVPNPFWQPVUVFRVASXRHQDKMAWGIYAORRRMOEXPXTXMSBKXZSZEBQQZJTRQUUGFDTZVBVCNHDFWJHMBCOUUHWXRKJNSDQOHNIXZERSFCGPFMHFCNKUQDYZEUDVEAJWFJCGLGYJNZECIKYCBHSKVYAXKLIGDYIQYZEWQAAXEINTCZUEDITTGMDYNQTI");

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
    msg.setTimeStamp(0.10131201725840633);
    msg.setSource(65318U);
    msg.setSourceEntity(155U);
    msg.setDestination(28081U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("MWFSDCJDIONKVMQHHYRFZXJQGXOBVOOGPUQQXSSYJKBNXNCPUZWNTWEKAAWSZMQYUCCZJKMYZVCQFXCFKTHFEOBTVLPEEWWGJIJVGXBLTSUYHLANSKATWRMIXSDEKMDUBFRPAWHURLYXXYERBRAFSHTDOKNRQOUTGNLOTCZPLGIDBSVPAVLBXZ");
    msg.text.assign("LMUPBXUXLDRCQIIUBJFEBMNVJEYSDVKXJAQXFHTCATPEIBWHALMIATFAOULYHNZMXQFBTCGDNZQTBYKUVGKMWADZUNKYTH");

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
    msg.setTimeStamp(0.8618250999256171);
    msg.setSource(28966U);
    msg.setSourceEntity(95U);
    msg.setDestination(12890U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("VWJLZGYUHETSUKNZJCBYAPNIKPTDEDNGYGOCEJQLSHJROMPLSTCBELMFCVXUOTOCDSVXWUZTUYHUIFMLMMUIFOMESOAHRLRJHHQANXNTZPFI");
    msg.htime = 0.9019141607109946;
    msg.lat = 0.5960538875065758;
    msg.lon = 0.6277157756914762;
    const char tmp_msg_0[] = {74, 83, 80, 4, -14, 6, -104, 92, -1, -32, 42, 73, -26, -111, 0, -16, -127, -98, -41, 104, -85, 92, 66, -67, -14, 99, -76, -10, 116, -86, 84, 60, -83, 3, 118, 76, -1, -59, 99, -7, -63, -95, -19, -41, -55, -42, -110, -123, 65, -86, 115, -107, -14, -87, -94, -96, -59, 55, -102, -12, -45, -9, 6, 6, -16, 18, -29, 12, -13, -80, 11, 49, -29, -65, 28, -30, -114, -118, 105, 48, 2, 19, 100, 36, -4, 55, -2, 92, -116, -35, -104, -9, 36, -121, 5, 91, 6, -51, 90, 51, 78, 108, -47, 29, 2, -110, -118, 9, -51, 80, -66, -121, 104, 14, -99, -87, 37, 103, -40, 0, -4, 39, -80, 110, -69, 48, 84, 70, -99, 55, 102, -115, 23, 53, -86, -22, -89, 95, 27, 86, 42, -99, -58, -38, -64, 44, -84, 48, -11, -102, 81, -12, 104, -58, -17, -17, -33, -1, -112, -13, 10, 83, -85, -128, 97, -121, 111, -24, 96, 117, -46, 55, 27, -91, -87, 97, 29, -48, -10, 55, -39, -63, -39, 100, -70, 123, 30, 98, -15, -90, 101, 76, 17, -102, 77, 50, 22, 6, -70, 117, 1, -62, -85, 1, -2, -5, -9, 63, 126, -126, 92, 90, 93, -119, 16, 46, 37, -85, 44, 51, -27, -5, -77, 1, 40};
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
    msg.setTimeStamp(0.29697444595409894);
    msg.setSource(44835U);
    msg.setSourceEntity(75U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("EBPITFDLXLUDFJBMATWLQWZAULUSVRTCVEHQMNSNXKZHPDJVRSPZSTMMKJLVYJCUEKILGGHOBVNDRCLDTFVCBEEABRXMHZGFWCMAJMCSGTEPUZFUXTYHZMEPCXNIJDAUUCLBXJDHQXQLHYZXEDQNYFYIJBPVIWAKUNIRNKGNYWROWVGNOAROTOGFRKFGKBQPFGOBNBAOIWDQWYLSSQPQVKXWZMHIOETHPKHWXCAJESK");
    msg.htime = 0.6725277363955741;
    msg.lat = 0.5740565439512274;
    msg.lon = 0.29609493972411227;
    const char tmp_msg_0[] = {77, -38, -70, -100, 6, -95, 80, 66, 111, 60, 102, -57, -105, 41, 107, 49, 67, -69, -2, -112, -5, 58, -123, 88, -126, -12, 23, 80, -72, 5, -119, -81, -124, 19, 36, 90, -13, -30, -13, 11, -48, 57, -105, 68, 92, -57, -51, 33, -63, 112, -81, -5, -49, 62, -6, 84, 121, 60, -116, -99, -48, 53, -115, 94, 51, -114, -48, -46, 43, -99, -71, -5, 112, -68, 87, 92, 92, 63, 45, -50, -34, -82, 91, 29, 105, -13, 95, 64, -117, 52, -51, 97, -29, -35, 24, 78, -9, 9, 38, 17, 34, -101, -46, 21, 79, -10, -88, 6, -25, 3, 34, 82, 12, -99, -127, 98, 106, -63, -43, -31, -105, 118, -24, 21, -2, -16, 15, 54, -59, 68, -46, 27, -120, -99, 60, 104, 92, 94, -122, -66, -74, 60, 84, 37, -102, 8, 59, -74, 92, 63, -106, 94, 83, 97, 89, 87, -22, -24, 65, -77, -41};
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
    msg.setTimeStamp(0.3542394133098158);
    msg.setSource(38585U);
    msg.setSourceEntity(17U);
    msg.setDestination(17185U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("HQNTIETWWLZHULOUNDPIIBJCYRFXJBOYDEWIGQTQHBRKQQNSBSMLKJTGKTDCSYRGIRDRAYVXJNJYOFMBIOUMTHGAVPBZAPNDHRUIWHCFWXEVERVTBXXHNDLYSSPGDCWJLCBAUXGKUEFYXZCRPMLALCRSGWVKIBJHPPQNFKTNSVVEKDLW");
    msg.htime = 0.7506923873461676;
    msg.lat = 0.5341534785854894;
    msg.lon = 0.4391281912019176;
    const char tmp_msg_0[] = {87, 19, 52, 123, -66, 98, -111, -92, 116, -106, -26, 117, -93, 120, -74, 65, 85, -75, -4, -97, 87, -112, 21, 58, -53, 78, 53, -15, 86, 55, 25, 3, -22, 74, -40, -12, 92, 77, 14, -71, -102, -32, 59, 26, 105, -111, -55, 112, 64, -96, -79, -128, 121, -38, -124, -118, 46, 25, -124, 31, 88, -17, 18, 89, 54, 97, 126, 74, 8, 104, 42, -108, 96, 19, 35, 67, 40, 75, -88, 30, -49, -63, 27, 77, -69, 24, 71, -85, -79, -29, 11, -51, -71, -34, 98, 64, 114, -122, -117, 30, 7, 108, 36, -111, 5, -47, -36, -97, -18, 58, 114, -19, 67, -127, -7, -49, -43, 70, -39, 46, 126, -100, 102, 110, 13, 4, -51, -111, 92, 64, -92, -126, 23, 70, -39, 79, -110, 115, -86, 47, 121, -97, 64, 93, 64, -96, 86, -23, -85, 10, 119, -14, 83, -51, -2, 77, 96, 57, 58, 42, 56, -113, 34, -88, 52, 66, 34, 55, 125, 31, -112, -60, 44, 118, 105, 30, 19, -120, 83, -1, -115, -89, 98, 39, -111, 116, -104, -16, -102, 27, -17, -93, -11, 101, -124, 30, -99, -89, -120, 76, -104, -85, 19, 110, 62, 99, -34};
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
    msg.setTimeStamp(0.820041110277037);
    msg.setSource(44018U);
    msg.setSourceEntity(44U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(92U);
    msg.req_id = 55833U;
    msg.ttl = 65182U;
    msg.destination.assign("UXFBRVAYGOIYOVENHHUTMRNWUAYNTMSXKBUJIXYUOQWDDCVQGPAJQSIWMJRHQTVSDKZSLYWBSLFXZQKJLZPWOYVKDTIGKQPJGJLRHZXFEMJUZFWOHQCLECWPIAANPZUIQKBIRXHKUMPL");
    const char tmp_msg_0[] = {10, -103, 33, 59, 115, 114, 22, 73, 18, 101, 46, 15, 47, -82, 60, 83, -56, -124, -6, 91, 19, -49, 70, 101, 98, 33, 101, 93, -91, 51, 19, 38, -113, 8, 32, 55, -75, -59, 88, -23, 51, 95, 74, -116, 107, -4, -69, -110, 16, -63, 29, -49, -8, -33, -38, 64, -109, -65, 39, -118, -73, -40, 81, 23, 3, 74, 58, 77, -126, 22, 25, -111, 26};
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
    msg.setTimeStamp(0.4803704088135614);
    msg.setSource(47330U);
    msg.setSourceEntity(213U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(149U);
    msg.req_id = 48196U;
    msg.ttl = 3932U;
    msg.destination.assign("ZRPRYBVNFXZRBDRDGOGEGQLNGXPKTNHVGYXVWARFBYIXHCVKLERTFFIXVMQZUXJAPWCVDTJKNOUBBQDCZFCAUSKLCARZFLFQMX");
    const char tmp_msg_0[] = {-9, -96, -73, 84, -108, 51, 56, 88, 93, 12, 89, -98, 68, 28, 51, -118, -98, 44, -114, 71, -54, 100, -36, 83, 92, 54, -100, -3, -40, -73, -107, 100, 67, 109, -51, 42, -117, -104, 51, -7, 1, 59, -79, 125, 60, -91, -42, 76, -10, 75, -52, -44, -106, 122, -27, 12, 36, 117, -100, 59, 44, -31, -60, 90, -39, 71, 116, -39, -48, 83, -54, -11, 69};
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
    msg.setTimeStamp(0.9824812732773848);
    msg.setSource(18865U);
    msg.setSourceEntity(185U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(240U);
    msg.req_id = 35217U;
    msg.ttl = 14044U;
    msg.destination.assign("GOWJNYZAXJIVZJYQLDOFDCTHUGDNAEDTXEBSIVJMSALHYSRGOJYHHLCLSGDXPQAFRYKHBIUKPWTCGACRDUBCOCXOTDETHPEZNJMCSIZKYVHQMZILVNFKRRXNQEUZZMPBAHFXSFCECVKNUYLUAWARINJBRVMZMHLMLBDHRFWZXKJFIYUQRSO");
    const char tmp_msg_0[] = {70, -43, 10, 19, -45, -98, 77, -10, 5, -76, -52, 22, -44, 67, 80, -127, -114, 38, 65, -41, 93, -120, -50, -69, 86, 97, -125, 63, 38, 102, 126, -94, 50, 75, -46, -23, -23, 67, 86, -76, -31, 24, -97, -81, -35, -74, -80, 96, 3, -106, -121, -9, -41, 111, -5, -33, -119, -93, 89, 7, 81, 72, -81, 25, 5, 31, 103, -18, -46, 5, 119, -47, 53, -84, -80, -37, -111, -120, -122, 94, 46, 120, -16, 78, 49, -65, -107, -23, -125, 80, 80, -118, 44, 94, -40, -27, 11, 70, 40, -49, -2, -114, -88, 104, -75, 109, -60, 113, 80, 126, -43, -125, -67, -41, 29, 14, -96, -107, 24, 35, 102, -121, -81, 65, -67, -52, -108, 126, 73, 60, 58, -44, -55, -90, -43, -7, 32, 42, -60, 60, -61, 17, 1, 6, -26, -106, -32, 69, 0, -44, 7, -97, 47, -81, 26, 55, -51, 115, -31, 26, 14, -46, 62, -52, -19, 125, -25, 49, 115, -120, -77, -100, 51, -54, 100, -6, 78, -96, 103, 89, 106, -8, -126, 69, 44, 27, 121, 80, 49, -73, 38, -112, -127, -37, -125, -100, 92, -75, -85, -48, 0, -60, -99, 15, -20, -100, 37, -88, 78, -32, -31, -124, 117, 113, -35, 59, -50, 32, 102, 124, -62, 72, 117, 104, -23, 78, -2, 45, 11, 48, 113, -47, -33, -91, 64, -84, 87, -35, -12, 15, -100, -19, -33, -10, 61, -88, 78, -69, -9, -47};
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
    msg.setTimeStamp(0.02069458738955643);
    msg.setSource(18254U);
    msg.setSourceEntity(95U);
    msg.setDestination(40070U);
    msg.setDestinationEntity(236U);
    msg.req_id = 30739U;
    msg.status = 110U;
    msg.text.assign("FQDATRUZXSRLUUYOCENWPPQPKJWXZRBXKAGKNJUTWJHLFYSNLTNWAUOJZJPGPTPTZZQIBBZALDZEGIVHHIYCGECKHWBVKBNPCMGBTDNROLBGOTHRIHFDQECLSLRSAOFKDKZDVBAOAXSXYMPAUCWYGIUETVWEXXAISMJCGFLQSMRBQIZXYMDVSFNNCCRWBACFSLMVEOWIMUQYEMOKILEYYNIJJNHFYKUHMVUPDDGDSZ");

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
    msg.setTimeStamp(0.25684292420532673);
    msg.setSource(24518U);
    msg.setSourceEntity(176U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(183U);
    msg.req_id = 57101U;
    msg.status = 39U;
    msg.text.assign("YOFQYRHLPYKBEJBNKVTHPPWPXETZTQMXSZFFBU");

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
    msg.setTimeStamp(0.2567575128107702);
    msg.setSource(30195U);
    msg.setSourceEntity(17U);
    msg.setDestination(11932U);
    msg.setDestinationEntity(88U);
    msg.req_id = 1440U;
    msg.status = 112U;
    msg.text.assign("MUGEYRXMOQJFBFVHEOCLLWBVAPNOAESYSZUHQRIJTPXLOMOYCKYRGUSGVUMPCQHDEANWWNTXZTTTJWQEPKDPREFYRAQBFTWKHULZJOENZGNICBXGXJMTEEXTEOQRCSINCHASYNBKHZHBSQMNMPLXKXDIDGIJVYZUYVDLZLXDQJBIGAI");

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
    msg.setTimeStamp(0.6098392569950665);
    msg.setSource(34933U);
    msg.setSourceEntity(28U);
    msg.setDestination(22682U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("NLYXKXGDGDP");
    msg.links = 1931290195U;

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
    msg.setTimeStamp(0.05108647669420385);
    msg.setSource(41264U);
    msg.setSourceEntity(242U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("HVGWARCWXINSXSMHORNDDXF");
    msg.links = 2789232037U;

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
    msg.setTimeStamp(0.4819259448344655);
    msg.setSource(64966U);
    msg.setSourceEntity(156U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("AITNGKTYZBLR");
    msg.links = 119639608U;

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
    msg.setTimeStamp(0.41963927721276006);
    msg.setSource(49147U);
    msg.setSourceEntity(54U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(97U);
    msg.groupname.assign("ILMJQAWYPDBCCFDPHYIRMAPWQBNUUGIFDABQUNOKHMRWXSNDOQFXZIULONUWQDWYGJPSAXNPKCHSMROCJKNWPZJZSNTHOMLJJDWIYQRQGINYGJKZTAKBZBKLXMFHYHPMZBEAMXBIHALERGSXFELJVCMCGEPYXZVBBVAREIYUDEJSORFVAVWFLXUFMRPVERCKTOEUPIGKJWWNX");
    msg.action = 203U;
    msg.grouplist.assign("DXWBUAODCKVQUVSZRDPBYXSFUYWGGMOYETRUISHUJMQMSZGLCJOHJBGUIETEUIRQEZJDRKGYILGOSLQAZHRVFLBBOFINABOPPJCROECCSHKCINREYAPTVOXPVCJQYVAXLGZZMFSZTMWTWFDTWQFKYCTEHPMOXEQZNSTKFYUHPJSHDEAGXUGWMYWXDHFCKPFIADANIILBRWONIYHNRXZMDLXMWTCDFRLLQVNQGNVQBVKJWBVSKPJX");

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
    msg.setTimeStamp(0.0832374317995026);
    msg.setSource(44565U);
    msg.setSourceEntity(119U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(30U);
    msg.groupname.assign("ABLYXFWJKECULDRSQLPNKVHTCGVKDDYUXORSABWICANAYIFNTFKZHOEODURIRICOQREZEDNKYMRNZPAUALFMEJYPGJQXPLIBVHZJKZOPKPBAENQPTUXBXFSRILIIQEMGVSTMGBEDGZQWZNXFJZLULKUHIADMFSQTABZCJMFWQMYCUWJFTUYVHBXSCKXSSTMDSDBVWHTYOVPNTRIFYCVQTKWSMGNGAZBEOPUEJJRWGYHVHH");
    msg.action = 185U;
    msg.grouplist.assign("LUXASTZTOBWCKCJTJJFFZBYRQLGPHHHVDHJKQSDTJEQVVGHPDADEWZWBN");

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
    msg.setTimeStamp(0.09248688141511141);
    msg.setSource(8617U);
    msg.setSourceEntity(46U);
    msg.setDestination(54078U);
    msg.setDestinationEntity(18U);
    msg.groupname.assign("TAWVAWIRKZCHJTBGNYTKZZZJQMQQBQZVOCMYHHBMMMYVWGAXHZXRNTOQQNTSZBRAZPKUFAWRYWLJFUOVVQXARSYVRJHINRCXMWJXNHOFGPTJTGIOORFPFSIDDHEIWMXXTPYGXCWSLPEZFHLNDECYKKRQGEEFPLIMBDFDSDEXLKQOPGWVSUUBKUMJBJRGSVAJQJVGSOSUBFDLDUDICCHAUEYUGEOMN");
    msg.action = 5U;
    msg.grouplist.assign("DFRYJKWNLIGYDFCFOXDRUPDLLSWNKACLQTIJADSRTNPGAIVHRXEQJZDXJKCVMPYVORTDSBCOXKYHLUOBLNQFWXBTDFGWFVVAPTKDFMHLBLWFWKMJPOOGPRVYAHOMUNUAEPUWBNTHGCIWJRJXSYAQYIBUAICPCIHSGNXAIGERJQYNCPQQJHDHOUEFQIKURBCTRTZSZHOUJZBEGZAYVZEENZFST");

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
    msg.setTimeStamp(0.4726663583113211);
    msg.setSource(51321U);
    msg.setSourceEntity(197U);
    msg.setDestination(47616U);
    msg.setDestinationEntity(122U);
    msg.id = 234U;
    msg.range = 0.6262828871390835;

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
    msg.setTimeStamp(0.0614624461543104);
    msg.setSource(27227U);
    msg.setSourceEntity(172U);
    msg.setDestination(11996U);
    msg.setDestinationEntity(229U);
    msg.id = 133U;
    msg.range = 0.6577486845782747;

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
    msg.setTimeStamp(0.5310643297763831);
    msg.setSource(61083U);
    msg.setSourceEntity(174U);
    msg.setDestination(2750U);
    msg.setDestinationEntity(52U);
    msg.id = 20U;
    msg.range = 0.9116035137754656;

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
    msg.setTimeStamp(0.01701969094131539);
    msg.setSource(4119U);
    msg.setSourceEntity(73U);
    msg.setDestination(12787U);
    msg.setDestinationEntity(170U);
    msg.tx = 174U;
    msg.channel = 78U;
    msg.timer = 53126U;

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
    msg.setTimeStamp(0.1920679382847469);
    msg.setSource(62341U);
    msg.setSourceEntity(216U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(38U);
    msg.tx = 59U;
    msg.channel = 23U;
    msg.timer = 35411U;

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
    msg.setTimeStamp(0.41372383568006443);
    msg.setSource(53353U);
    msg.setSourceEntity(67U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(148U);
    msg.tx = 239U;
    msg.channel = 212U;
    msg.timer = 56695U;

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
    msg.setTimeStamp(0.9131544243989714);
    msg.setSource(23425U);
    msg.setSourceEntity(100U);
    msg.setDestination(6919U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("XVLBLFHGXIERPZARISKVVZFWWKDDFSXYZXTYXNNQSTNLYBNZIZKAWXTUPCGWVZGGVAKHQLJEPCORIQLSZUTQDVDOZPPKYNXGKXVSUIFHDMUYOLQAWNLFGOXYDSTRABBKCQHUVCNBCBAIGQEESHWMEPPETTSAJQWYBMDUJPYKMTMUGOJVMMKIRMINFDHCSFEDJANJVRUTITLFECBUPRGZSEFCHCORJARCJQNWRMZDOMJBWHOHOEPWQJ");
    msg.lat = 0.9109544301148161;
    msg.lon = 0.9137736849225904;
    msg.depth = 0.38380734396644245;
    msg.query_channel = 188U;
    msg.reply_channel = 21U;
    msg.transponder_delay = 136U;

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
    msg.setTimeStamp(0.3282211128249558);
    msg.setSource(62385U);
    msg.setSourceEntity(59U);
    msg.setDestination(19023U);
    msg.setDestinationEntity(45U);
    msg.beacon.assign("DQUQCWFWYHARNGZFGDFPDRQIZSHRMGXFUBOXNHEQUTBBLENCKQSGENOACJRFLEKKWMJPAWMLATIUITANEDIQTZRLOMZRJVNZMOMUJCGOXBTOYUHVSULTPPPQVMGDFYVWLVLGSJKSDEOEJDQITIJNDSXBWCXYIWXBHOBCHGYBRWSPVIAKEWQLGNEIYTVKKCOMHXKVMOUZSQZJFYPHAMAXTBZJWUYRDTXNEG");
    msg.lat = 0.19743449385706868;
    msg.lon = 0.2572575941950104;
    msg.depth = 0.4215228128267684;
    msg.query_channel = 47U;
    msg.reply_channel = 133U;
    msg.transponder_delay = 166U;

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
    msg.setTimeStamp(0.17850663451038207);
    msg.setSource(5538U);
    msg.setSourceEntity(179U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("ZDKBHNSRLIYCAFKEFDYORKSTAKHISTVDEJGNFAWRODJZHBUCXJJ");
    msg.lat = 0.25595635970462816;
    msg.lon = 0.021401314436539032;
    msg.depth = 0.5248430316769134;
    msg.query_channel = 68U;
    msg.reply_channel = 164U;
    msg.transponder_delay = 163U;

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
    msg.setTimeStamp(0.7885119321226657);
    msg.setSource(48741U);
    msg.setSourceEntity(49U);
    msg.setDestination(21514U);
    msg.setDestinationEntity(199U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.7051649362085145);
    msg.setSource(29206U);
    msg.setSourceEntity(196U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(123U);
    msg.op = 215U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HQFZSVCPMMDVWRLVQCGUTKTFUKFHGYNWNNWZUHRTUXJINWIPOLNYONASXOIBSIHMIYXPSYHOJQHZBRDCUCKMOQSZOH");
    tmp_msg_0.lat = 0.548064815201105;
    tmp_msg_0.lon = 0.08272351026416536;
    tmp_msg_0.depth = 0.9188094743341599;
    tmp_msg_0.query_channel = 29U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 142U;
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
    msg.setTimeStamp(0.05458842317422863);
    msg.setSource(42280U);
    msg.setSourceEntity(190U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(150U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.15610625023237557);
    msg.setSource(3423U);
    msg.setSourceEntity(14U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(253U);
    msg.address = 165U;

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
    msg.setTimeStamp(0.3692228092638058);
    msg.setSource(28601U);
    msg.setSourceEntity(226U);
    msg.setDestination(46050U);
    msg.setDestinationEntity(232U);
    msg.address = 5U;

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
    msg.setTimeStamp(0.7143053121746984);
    msg.setSource(20611U);
    msg.setSourceEntity(143U);
    msg.setDestination(58248U);
    msg.setDestinationEntity(163U);
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
    msg.setTimeStamp(0.4529009751151012);
    msg.setSource(20093U);
    msg.setSourceEntity(203U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(71U);
    msg.address = 200U;
    msg.status = 182U;
    msg.range = 0.7024010595865408;

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
    msg.setTimeStamp(0.11738554819308011);
    msg.setSource(54660U);
    msg.setSourceEntity(134U);
    msg.setDestination(18262U);
    msg.setDestinationEntity(223U);
    msg.address = 186U;
    msg.status = 134U;
    msg.range = 0.8816303926814989;

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
    msg.setTimeStamp(0.11716439889802166);
    msg.setSource(21793U);
    msg.setSourceEntity(7U);
    msg.setDestination(10454U);
    msg.setDestinationEntity(185U);
    msg.address = 235U;
    msg.status = 225U;
    msg.range = 0.9910856392127001;

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
    msg.setTimeStamp(0.48996080174397905);
    msg.setSource(40309U);
    msg.setSourceEntity(129U);
    msg.setDestination(41238U);
    msg.setDestinationEntity(237U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.259294378219434;
    tmp_msg_0.y = 0.9010854683227881;
    tmp_msg_0.z = 0.37287315609325167;
    tmp_msg_0.phi = 0.39037020323713023;
    tmp_msg_0.theta = 0.2679692842043281;
    tmp_msg_0.psi = 0.31776347867762533;
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
    msg.setTimeStamp(0.2959506514384387);
    msg.setSource(3900U);
    msg.setSourceEntity(58U);
    msg.setDestination(551U);
    msg.setDestinationEntity(245U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8635752426941097;
    tmp_msg_0.y = 0.3511064962793622;
    tmp_msg_0.z = 0.014529567201841842;
    tmp_msg_0.phi = 0.0010662228050359879;
    tmp_msg_0.theta = 0.3332463063658525;
    tmp_msg_0.psi = 0.4382850132380057;
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
    msg.setTimeStamp(0.6114272596702848);
    msg.setSource(60950U);
    msg.setSourceEntity(5U);
    msg.setDestination(63579U);
    msg.setDestinationEntity(149U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6958549717762864;
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
    msg.setTimeStamp(0.5668467516688456);
    msg.setSource(22296U);
    msg.setSourceEntity(95U);
    msg.setDestination(45465U);
    msg.setDestinationEntity(131U);
    msg.enable = 150U;

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
    msg.setTimeStamp(0.5776638885358693);
    msg.setSource(44082U);
    msg.setSourceEntity(46U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(152U);
    msg.enable = 177U;

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
    msg.setTimeStamp(0.9690786223686332);
    msg.setSource(53265U);
    msg.setSourceEntity(154U);
    msg.setDestination(20710U);
    msg.setDestinationEntity(111U);
    msg.enable = 31U;

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
    msg.setTimeStamp(0.06397273018894034);
    msg.setSource(29289U);
    msg.setSourceEntity(52U);
    msg.setDestination(27279U);
    msg.setDestinationEntity(118U);
    msg.summary = 198U;
    msg.level = 19U;

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
    msg.setTimeStamp(0.17692325981323875);
    msg.setSource(36914U);
    msg.setSourceEntity(86U);
    msg.setDestination(41988U);
    msg.setDestinationEntity(185U);
    msg.summary = 155U;
    msg.level = 221U;

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
    msg.setTimeStamp(0.15203080122128554);
    msg.setSource(17100U);
    msg.setSourceEntity(247U);
    msg.setDestination(1570U);
    msg.setDestinationEntity(55U);
    msg.summary = 68U;
    msg.level = 182U;

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
    msg.setTimeStamp(0.5015716672162938);
    msg.setSource(3176U);
    msg.setSourceEntity(37U);
    msg.setDestination(7634U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8971970212078504);
    msg.setSource(57776U);
    msg.setSourceEntity(225U);
    msg.setDestination(27399U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.865320167269868);
    msg.setSource(51140U);
    msg.setSourceEntity(219U);
    msg.setDestination(1265U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.4763401061099085);
    msg.setSource(8446U);
    msg.setSourceEntity(249U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.4465951230258278);
    msg.setSource(39359U);
    msg.setSourceEntity(49U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.02598204687706318);
    msg.setSource(18401U);
    msg.setSourceEntity(111U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.8909575352493598);
    msg.setSource(11417U);
    msg.setSourceEntity(32U);
    msg.setDestination(42646U);
    msg.setDestinationEntity(149U);
    msg.op = 133U;
    msg.system.assign("MANXXPYHGJGTLHPKDLFVCXWOLDDFZINETRUNLQIMZZJSUCLFBYWDNVHWMLSRGMSAIEJODUDCFHSZIBTRRKPTRGGWNEIDYPTCSSCBGJAXLRMOWEJXRZOBEGABYCYQVAPWJPGXTDJGOZUCISZQUUTRMCZHWLUXVSUNOVVNXIEPBKRDYVZTIOAKUFVCPSQT");
    msg.range = 0.5208006358630923;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 39U;
    tmp_msg_0.period = 3026042212U;
    tmp_msg_0.duty_cycle = 40471272U;
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
    msg.setTimeStamp(0.3701238386557204);
    msg.setSource(28034U);
    msg.setSourceEntity(186U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(121U);
    msg.op = 249U;
    msg.system.assign("QLBEAUYSFOFSPMDTECZPNZVJUVYBTDJZOWGXMZYMRTHCAGHXAURLDEURHEJZJADXFRIPMEBRLERWBROPVBVYPWYKCVXHLDIQOWVPNBWQSIUNKQSTRHUGMAPNJWGXTQXKUBEHUCOSYDFKSEVCDVFJLNOWZQPMQPNEXSFINGAIKVJXWATQZJMHUZBC");
    msg.range = 0.7947724786954811;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 73U;
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
    msg.setTimeStamp(0.22468446395728348);
    msg.setSource(21229U);
    msg.setSourceEntity(164U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(177U);
    msg.op = 18U;
    msg.system.assign("FIFDAJGCUYCJYPWMSWBPYBRACJOHXFMZCNYUQIYBQOZOMMEMUUCZLEOJSRLTHFGBWNZHGPZOXRWOHNEVKUXQASKNLURXXIUSBDVJXYIBCXGJMGSGQPNZQEXNWDUBUQLATWCRUWTEKFQAFLLONDSRVCFAHQDFPGWSHVEOLVDTMBCTTIQBYJKVMJWCPRVBLKVLZTHKWIZDHTXDYPPGNEHVMIZRSRIDQYAVFLFZEOS");
    msg.range = 0.20771060170930655;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 2778136647U;
    tmp_msg_0.status = 22U;
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
    msg.setTimeStamp(0.6206036855532364);
    msg.setSource(63187U);
    msg.setSourceEntity(43U);
    msg.setDestination(42656U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.4782841213528195);
    msg.setSource(50624U);
    msg.setSourceEntity(51U);
    msg.setDestination(10875U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.22041198033069587);
    msg.setSource(22232U);
    msg.setSourceEntity(209U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.22547626538394994);
    msg.setSource(43853U);
    msg.setSourceEntity(218U);
    msg.setDestination(29500U);
    msg.setDestinationEntity(38U);
    msg.list.assign("CCQMURTPTMFLZWLCKIOKBPJQEEDTNGJVAWTQUZEACSXJGMCVJUKIXPURWXOXLVWRAXTQJZQXDDASDJMTCSPDMAIQZEMGHOOESMLIGWKVYYUQGFBKDWCKPISNEXYYYMUYIHXLTLZBRWCYSLVBYFVLIGESEUONJUNEPBAWQVDAHVISRUHHUHOJRRKAHDQBAW");

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
    msg.setTimeStamp(0.4497853806946004);
    msg.setSource(41704U);
    msg.setSourceEntity(115U);
    msg.setDestination(56674U);
    msg.setDestinationEntity(75U);
    msg.list.assign("FGSTCMQEVINNMJOEHSOVXBQPCJLZ");

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
    msg.setTimeStamp(0.5722744881537768);
    msg.setSource(27956U);
    msg.setSourceEntity(6U);
    msg.setDestination(29525U);
    msg.setDestinationEntity(239U);
    msg.list.assign("HGACRBZWTVJWTSORAPQZRKMJFKKSRRAQDADHIRECIRYXNIRXKDHHLCYWJNJQXUYLGZSUMKOLGZDCXQIFSQFUNXZMDJNAFETYIFYHLIZBPNABCPLAJLOMAQHLEQYUNMIOBCEHVDRKZDEAFVUDTEKSSBBFFDOVNNWGZPPMIYWVKYDFCNJMTAFYJOJV");

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
    msg.setTimeStamp(0.7087453511935031);
    msg.setSource(30333U);
    msg.setSourceEntity(225U);
    msg.setDestination(25942U);
    msg.setDestinationEntity(85U);
    msg.value = 12435;

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
    msg.setTimeStamp(0.6145917980707593);
    msg.setSource(25623U);
    msg.setSourceEntity(225U);
    msg.setDestination(56643U);
    msg.setDestinationEntity(50U);
    msg.value = -9928;

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
    msg.setTimeStamp(0.5850997653509658);
    msg.setSource(49114U);
    msg.setSourceEntity(100U);
    msg.setDestination(187U);
    msg.setDestinationEntity(64U);
    msg.value = 32608;

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
    msg.setTimeStamp(0.29959691715243464);
    msg.setSource(5640U);
    msg.setSourceEntity(252U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(11U);
    msg.value = 0.10393820139236576;

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
    msg.setTimeStamp(0.3341275540687282);
    msg.setSource(19328U);
    msg.setSourceEntity(177U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(20U);
    msg.value = 0.25053265377795575;

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
    msg.setTimeStamp(0.4425365767699567);
    msg.setSource(58621U);
    msg.setSourceEntity(10U);
    msg.setDestination(16418U);
    msg.setDestinationEntity(119U);
    msg.value = 0.4254468026954852;

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
    msg.setTimeStamp(0.5925528101725668);
    msg.setSource(32067U);
    msg.setSourceEntity(107U);
    msg.setDestination(8498U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8252686715742674;

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
    msg.setTimeStamp(0.30883439457037554);
    msg.setSource(36900U);
    msg.setSourceEntity(131U);
    msg.setDestination(61500U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9325143148881428;

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
    msg.setTimeStamp(0.002894340432270326);
    msg.setSource(12698U);
    msg.setSourceEntity(23U);
    msg.setDestination(53247U);
    msg.setDestinationEntity(239U);
    msg.value = 0.34862368535403965;

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
    msg.setTimeStamp(0.6012679614000347);
    msg.setSource(62713U);
    msg.setSourceEntity(222U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(243U);
    msg.validity = 43441U;
    msg.type = 66U;
    msg.utc_year = 50955U;
    msg.utc_month = 224U;
    msg.utc_day = 179U;
    msg.utc_time = 0.4998056762977492;
    msg.lat = 0.5868398909732837;
    msg.lon = 0.15962477439294587;
    msg.height = 0.7600988935119976;
    msg.satellites = 159U;
    msg.cog = 0.5896622543356068;
    msg.sog = 0.8454888044391722;
    msg.hdop = 0.1183810780114285;
    msg.vdop = 0.13466183933853082;
    msg.hacc = 0.8189104870038116;
    msg.vacc = 0.36968420819139036;

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
    msg.setTimeStamp(0.2569876537859548);
    msg.setSource(22307U);
    msg.setSourceEntity(228U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(181U);
    msg.validity = 40199U;
    msg.type = 39U;
    msg.utc_year = 30107U;
    msg.utc_month = 118U;
    msg.utc_day = 3U;
    msg.utc_time = 0.6445537608107975;
    msg.lat = 0.34151332013484303;
    msg.lon = 0.5310007481302575;
    msg.height = 0.15965204123746624;
    msg.satellites = 12U;
    msg.cog = 0.9264745698349488;
    msg.sog = 0.9645609310086977;
    msg.hdop = 0.45341097325615054;
    msg.vdop = 0.9169122646732618;
    msg.hacc = 0.23275051316084272;
    msg.vacc = 0.4004035018912756;

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
    msg.setTimeStamp(0.8376287527247069);
    msg.setSource(11740U);
    msg.setSourceEntity(25U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(177U);
    msg.validity = 57272U;
    msg.type = 240U;
    msg.utc_year = 9752U;
    msg.utc_month = 202U;
    msg.utc_day = 197U;
    msg.utc_time = 0.559585525885987;
    msg.lat = 0.6084642513335906;
    msg.lon = 0.7897690094592835;
    msg.height = 0.2984817489735103;
    msg.satellites = 197U;
    msg.cog = 0.027607246648205463;
    msg.sog = 0.31785850035213625;
    msg.hdop = 0.6194448883096215;
    msg.vdop = 0.6768977688649692;
    msg.hacc = 0.7692449452863723;
    msg.vacc = 0.14829080678221807;

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
    msg.setTimeStamp(0.7286689580939223);
    msg.setSource(25894U);
    msg.setSourceEntity(137U);
    msg.setDestination(49874U);
    msg.setDestinationEntity(135U);
    msg.time = 0.2207066502121089;
    msg.phi = 0.5424928324723406;
    msg.theta = 0.35140356206241574;
    msg.psi = 0.5140672166954353;
    msg.psi_magnetic = 0.363246901755518;

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
    msg.setTimeStamp(0.6919140456035173);
    msg.setSource(62799U);
    msg.setSourceEntity(205U);
    msg.setDestination(61580U);
    msg.setDestinationEntity(230U);
    msg.time = 0.9437661225010359;
    msg.phi = 0.3351857649086468;
    msg.theta = 0.7166537257313268;
    msg.psi = 0.2516810311099078;
    msg.psi_magnetic = 0.4256625535611409;

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
    msg.setTimeStamp(0.34650319610145197);
    msg.setSource(28901U);
    msg.setSourceEntity(43U);
    msg.setDestination(49125U);
    msg.setDestinationEntity(211U);
    msg.time = 0.16767205543301222;
    msg.phi = 0.2688238166473952;
    msg.theta = 0.3123216247948333;
    msg.psi = 0.09957949927750631;
    msg.psi_magnetic = 0.8782872847612951;

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
    msg.setTimeStamp(0.6000672594388508);
    msg.setSource(21423U);
    msg.setSourceEntity(240U);
    msg.setDestination(17762U);
    msg.setDestinationEntity(183U);
    msg.time = 0.8286702421266484;
    msg.x = 0.8149837304495886;
    msg.y = 0.0321145516962571;
    msg.z = 0.08585244750527266;
    msg.timestep = 0.0045424019295087215;

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
    msg.setTimeStamp(0.09684655992429048);
    msg.setSource(50984U);
    msg.setSourceEntity(59U);
    msg.setDestination(39164U);
    msg.setDestinationEntity(26U);
    msg.time = 0.6622180200605415;
    msg.x = 0.9742361146464487;
    msg.y = 0.5862772371913177;
    msg.z = 0.15546850131666212;
    msg.timestep = 0.9276354167266012;

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
    msg.setTimeStamp(0.8707402677115945);
    msg.setSource(23280U);
    msg.setSourceEntity(168U);
    msg.setDestination(53063U);
    msg.setDestinationEntity(6U);
    msg.time = 0.39727510245474185;
    msg.x = 0.1859794586304977;
    msg.y = 0.8003037672633717;
    msg.z = 0.798721836328146;
    msg.timestep = 0.7863461927956469;

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
    msg.setTimeStamp(0.7226588410002487);
    msg.setSource(16719U);
    msg.setSourceEntity(151U);
    msg.setDestination(40829U);
    msg.setDestinationEntity(47U);
    msg.time = 0.17456673819966106;
    msg.x = 0.6368720211482077;
    msg.y = 0.39169045699822336;
    msg.z = 0.9169962620246497;

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
    msg.setTimeStamp(0.7418589003488978);
    msg.setSource(31204U);
    msg.setSourceEntity(161U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(59U);
    msg.time = 0.09152427421359033;
    msg.x = 0.6515078737241236;
    msg.y = 0.8411774630934455;
    msg.z = 0.21218913395097905;

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
    msg.setTimeStamp(0.13396541984091614);
    msg.setSource(56230U);
    msg.setSourceEntity(141U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(33U);
    msg.time = 0.20704219912875277;
    msg.x = 0.9013067450730048;
    msg.y = 0.14834599753981292;
    msg.z = 0.2138340017307555;

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
    msg.setTimeStamp(0.6020505149390554);
    msg.setSource(894U);
    msg.setSourceEntity(152U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(253U);
    msg.time = 0.8858047790950864;
    msg.x = 0.43717720561375994;
    msg.y = 0.2305613337784833;
    msg.z = 0.5862292816959944;

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
    msg.setTimeStamp(0.8538378489264721);
    msg.setSource(9583U);
    msg.setSourceEntity(188U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(143U);
    msg.time = 0.5690466364557839;
    msg.x = 0.05980877670308593;
    msg.y = 0.40388939396213674;
    msg.z = 0.6069721637218831;

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
    msg.setTimeStamp(0.29748316834886135);
    msg.setSource(56263U);
    msg.setSourceEntity(3U);
    msg.setDestination(30401U);
    msg.setDestinationEntity(240U);
    msg.time = 0.8948504646715888;
    msg.x = 0.39534105058247415;
    msg.y = 0.28740228682789537;
    msg.z = 0.23517363717271678;

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
    msg.setTimeStamp(7.286754215307667e-05);
    msg.setSource(11497U);
    msg.setSourceEntity(154U);
    msg.setDestination(45511U);
    msg.setDestinationEntity(145U);
    msg.time = 0.5664054016855428;
    msg.x = 0.5288470416526695;
    msg.y = 0.26430307335361114;
    msg.z = 0.44037549350903005;

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
    msg.setTimeStamp(0.2834400815307129);
    msg.setSource(40835U);
    msg.setSourceEntity(191U);
    msg.setDestination(17917U);
    msg.setDestinationEntity(147U);
    msg.time = 0.4681799015391148;
    msg.x = 0.17037189228563754;
    msg.y = 0.49159009860758485;
    msg.z = 0.9592380206137376;

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
    msg.setTimeStamp(0.07568562585137373);
    msg.setSource(80U);
    msg.setSourceEntity(101U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(93U);
    msg.time = 0.254272688978881;
    msg.x = 0.0375916468168922;
    msg.y = 0.2836225840706197;
    msg.z = 0.46291172642264733;

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
    msg.setTimeStamp(0.6545621055747364);
    msg.setSource(10861U);
    msg.setSourceEntity(5U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(208U);
    msg.validity = 115U;
    msg.x = 0.4952631882635804;
    msg.y = 0.4714192249437398;
    msg.z = 0.08126696048736115;

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
    msg.setTimeStamp(0.9571633702967659);
    msg.setSource(25635U);
    msg.setSourceEntity(101U);
    msg.setDestination(50142U);
    msg.setDestinationEntity(84U);
    msg.validity = 63U;
    msg.x = 0.2414902155818801;
    msg.y = 0.8401442094973879;
    msg.z = 0.04627453882251764;

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
    msg.setTimeStamp(0.18444078436168365);
    msg.setSource(58795U);
    msg.setSourceEntity(69U);
    msg.setDestination(49445U);
    msg.setDestinationEntity(32U);
    msg.validity = 204U;
    msg.x = 0.03740552863538671;
    msg.y = 0.9745332681179852;
    msg.z = 0.41246143728143336;

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
    msg.setTimeStamp(0.9703421004572407);
    msg.setSource(11954U);
    msg.setSourceEntity(137U);
    msg.setDestination(48906U);
    msg.setDestinationEntity(205U);
    msg.validity = 16U;
    msg.x = 0.5774651161663327;
    msg.y = 0.3071871512666622;
    msg.z = 0.022878609972579178;

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
    msg.setTimeStamp(0.6309012958763134);
    msg.setSource(11756U);
    msg.setSourceEntity(130U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(143U);
    msg.validity = 97U;
    msg.x = 0.8096476492671034;
    msg.y = 0.4723955543921863;
    msg.z = 0.36677186564637876;

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
    msg.setTimeStamp(0.010931502800261783);
    msg.setSource(16261U);
    msg.setSourceEntity(114U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(95U);
    msg.validity = 70U;
    msg.x = 0.11705956941390894;
    msg.y = 0.01554943054016944;
    msg.z = 0.08545794948527552;

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
    msg.setTimeStamp(0.5158868544728877);
    msg.setSource(63233U);
    msg.setSourceEntity(234U);
    msg.setDestination(44742U);
    msg.setDestinationEntity(172U);
    msg.time = 0.600066575375968;
    msg.x = 0.6200325443800606;
    msg.y = 0.16320522906743262;
    msg.z = 0.979041650499139;

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
    msg.setTimeStamp(0.3056397766710245);
    msg.setSource(21567U);
    msg.setSourceEntity(155U);
    msg.setDestination(37845U);
    msg.setDestinationEntity(22U);
    msg.time = 0.7170649651461122;
    msg.x = 0.8961233221495016;
    msg.y = 0.8748962716718068;
    msg.z = 0.6195422975821255;

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
    msg.setTimeStamp(0.3839437676266835);
    msg.setSource(48346U);
    msg.setSourceEntity(199U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(162U);
    msg.time = 0.3907284011877473;
    msg.x = 0.8505822498043601;
    msg.y = 0.1274318117154395;
    msg.z = 0.5921306193306375;

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
    msg.setTimeStamp(0.7435448214972968);
    msg.setSource(36457U);
    msg.setSourceEntity(148U);
    msg.setDestination(24483U);
    msg.setDestinationEntity(43U);
    msg.validity = 78U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4239332847948274;
    tmp_msg_0.beam_height = 0.05732970281025107;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.617694781260287;

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
    msg.setTimeStamp(0.1362156685800714);
    msg.setSource(60185U);
    msg.setSourceEntity(186U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(119U);
    msg.validity = 236U;
    msg.value = 0.3248711979692299;

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
    msg.setTimeStamp(0.6445125234257029);
    msg.setSource(8385U);
    msg.setSourceEntity(244U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(206U);
    msg.validity = 119U;
    msg.value = 0.7325138972695363;

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
    msg.setTimeStamp(0.7673827507844527);
    msg.setSource(40359U);
    msg.setSourceEntity(119U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(94U);
    msg.value = 0.2818748838418066;

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
    msg.setTimeStamp(0.34569504631817827);
    msg.setSource(7542U);
    msg.setSourceEntity(148U);
    msg.setDestination(44489U);
    msg.setDestinationEntity(153U);
    msg.value = 0.7603865908011421;

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
    msg.setTimeStamp(0.6027331187096656);
    msg.setSource(12431U);
    msg.setSourceEntity(235U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6566564032906844;

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
    msg.setTimeStamp(0.4169125153307959);
    msg.setSource(36162U);
    msg.setSourceEntity(169U);
    msg.setDestination(13691U);
    msg.setDestinationEntity(144U);
    msg.value = 0.8956069616178121;

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
    msg.setTimeStamp(0.6735552148365873);
    msg.setSource(63303U);
    msg.setSourceEntity(239U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(213U);
    msg.value = 0.8006752637609885;

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
    msg.setTimeStamp(0.6259508761575465);
    msg.setSource(21481U);
    msg.setSourceEntity(187U);
    msg.setDestination(5464U);
    msg.setDestinationEntity(76U);
    msg.value = 0.42820446431383974;

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
    msg.setTimeStamp(0.47483708422120174);
    msg.setSource(58271U);
    msg.setSourceEntity(240U);
    msg.setDestination(10826U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8103959480981696;

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
    msg.setTimeStamp(0.7983091719243655);
    msg.setSource(5145U);
    msg.setSourceEntity(184U);
    msg.setDestination(27152U);
    msg.setDestinationEntity(223U);
    msg.value = 0.10280488291286549;

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
    msg.setTimeStamp(0.4090299464929996);
    msg.setSource(2995U);
    msg.setSourceEntity(184U);
    msg.setDestination(4566U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5060486284194566;

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
    msg.setTimeStamp(0.25703512041412313);
    msg.setSource(3394U);
    msg.setSourceEntity(90U);
    msg.setDestination(17341U);
    msg.setDestinationEntity(83U);
    msg.value = 0.919233127761906;

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
    msg.setTimeStamp(0.8790285534768286);
    msg.setSource(53248U);
    msg.setSourceEntity(150U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(148U);
    msg.value = 0.008723683369378898;

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
    msg.setTimeStamp(0.2691557109313151);
    msg.setSource(43160U);
    msg.setSourceEntity(152U);
    msg.setDestination(26286U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5199859387506607;

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
    msg.setTimeStamp(0.8711982966512242);
    msg.setSource(58709U);
    msg.setSourceEntity(178U);
    msg.setDestination(19072U);
    msg.setDestinationEntity(49U);
    msg.value = 0.15090149944424502;

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
    msg.setTimeStamp(0.56979258912233);
    msg.setSource(46898U);
    msg.setSourceEntity(204U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7032457707453373;

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
    msg.setTimeStamp(0.21633771266312873);
    msg.setSource(12272U);
    msg.setSourceEntity(208U);
    msg.setDestination(14224U);
    msg.setDestinationEntity(128U);
    msg.value = 0.22973971956254424;

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
    msg.setTimeStamp(0.4754924693101378);
    msg.setSource(53534U);
    msg.setSourceEntity(18U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7159499724647204;

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
    msg.setTimeStamp(0.2488126114313589);
    msg.setSource(23676U);
    msg.setSourceEntity(115U);
    msg.setDestination(60753U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5202012964067709;

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
    msg.setTimeStamp(0.877696880418692);
    msg.setSource(26241U);
    msg.setSourceEntity(15U);
    msg.setDestination(19521U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8511326019672175;

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
    msg.setTimeStamp(0.05708477701155601);
    msg.setSource(49740U);
    msg.setSourceEntity(64U);
    msg.setDestination(595U);
    msg.setDestinationEntity(200U);
    msg.value = 0.3667445457011411;

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
    msg.setTimeStamp(0.07339120512870334);
    msg.setSource(59754U);
    msg.setSourceEntity(215U);
    msg.setDestination(34890U);
    msg.setDestinationEntity(21U);
    msg.value = 0.39336855844402996;

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
    msg.setTimeStamp(0.07598811281775542);
    msg.setSource(61396U);
    msg.setSourceEntity(223U);
    msg.setDestination(45664U);
    msg.setDestinationEntity(200U);
    msg.value = 0.17670336163799305;

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
    msg.setTimeStamp(0.5179143985240515);
    msg.setSource(3654U);
    msg.setSourceEntity(13U);
    msg.setDestination(2307U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5390976479141423;

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
    msg.setTimeStamp(0.5058802986513091);
    msg.setSource(39972U);
    msg.setSourceEntity(7U);
    msg.setDestination(55109U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6714612237592883;

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
    msg.setTimeStamp(0.07468838970218794);
    msg.setSource(26881U);
    msg.setSourceEntity(14U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(244U);
    msg.value = 0.23310418100006625;

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
    msg.setTimeStamp(0.665308636753956);
    msg.setSource(39367U);
    msg.setSourceEntity(48U);
    msg.setDestination(40647U);
    msg.setDestinationEntity(28U);
    msg.direction = 0.029052803588691667;
    msg.speed = 0.4713017903023926;
    msg.turbulence = 0.816556983454372;

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
    msg.setTimeStamp(0.968614326247007);
    msg.setSource(20603U);
    msg.setSourceEntity(29U);
    msg.setDestination(1273U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.027985378830858165;
    msg.speed = 0.39517885119769347;
    msg.turbulence = 0.8588317190672715;

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
    msg.setTimeStamp(0.950244802412976);
    msg.setSource(23194U);
    msg.setSourceEntity(158U);
    msg.setDestination(49217U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.565635067833519;
    msg.speed = 0.24505835790771768;
    msg.turbulence = 0.41055959165020417;

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
    msg.setTimeStamp(0.3131674377693694);
    msg.setSource(56729U);
    msg.setSourceEntity(131U);
    msg.setDestination(57814U);
    msg.setDestinationEntity(104U);
    msg.value = 0.1859442681077751;

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
    msg.setTimeStamp(0.5970585688399725);
    msg.setSource(37987U);
    msg.setSourceEntity(217U);
    msg.setDestination(29664U);
    msg.setDestinationEntity(87U);
    msg.value = 0.42270010330060004;

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
    msg.setTimeStamp(0.49213858203157457);
    msg.setSource(2527U);
    msg.setSourceEntity(93U);
    msg.setDestination(35470U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8975475227483023;

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
    msg.setTimeStamp(0.28237112778471996);
    msg.setSource(17713U);
    msg.setSourceEntity(81U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(46U);
    msg.value.assign("YOTJYKCKKPFGDEQTMRYSJBZNLSNSHBCVYFRTMGQJPJUHOSLOD");

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
    msg.setTimeStamp(0.35824463932674955);
    msg.setSource(15222U);
    msg.setSourceEntity(72U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(197U);
    msg.value.assign("DDXNSGGQTKZGLRZKHEKGKYWVTVXXEBCFMFOBVMPJVKETRYMNL");

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
    msg.setTimeStamp(0.9071148124810616);
    msg.setSource(16607U);
    msg.setSourceEntity(145U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(151U);
    msg.value.assign("UIGSHPBLLWMZTUOEZKTQDOTZIHZRJRDNHMDHVASCLRBWQSPRIHCWFWXZRWFJGUMZXXVQQVAJOYDISJXPLSJULJDCYQZVCBPUPQAUQKBKGYTRCUMOJSKBGFNVNIPTYXDFDTCYOOKESYVYAQHAWTIEMEXRASGVKMSOEAWBGVBGLDFZZHQMRDIKNAHPDGGFNIRQNWWEVYKUFKNMTTOHJJGNBRKPSLFMFX");

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
    msg.setTimeStamp(0.7184987903230279);
    msg.setSource(60867U);
    msg.setSourceEntity(45U);
    msg.setDestination(47472U);
    msg.setDestinationEntity(233U);
    const char tmp_msg_0[] = {-57, 10, 21, -65, 46, 34, 92, -82, -19, -66, -15, -109, -123, 71, -91, 125, -81, 74, 5, 83, -73, -47, 15, 112, 46, -90, -51, 114, 35, -41, -102, -113, 116, 8, 108, 40, -64, -15, -38, -10, -75, 116, -45, 29, 45, -16, -98, -26, -6, -8, -5, 50, -55, 9, 1, 47, -74, -126, 5, 98, 71, -85, -12, -84, -76, 0, -127, 85, -97, -107, -31, -63, -125, 13, -37, 55, 30, 118, 66, 104, -24, -55, -114, 117, 86, 16, -42, 14, -94, -119, 77, -70, 15, -90, -127, 94, -13, 115, 88, 122, 61, 73, -11, -77, 74, 26, -119, 115, 20, -37, -89, -103, -30, -65, 33, -26, 10, -3, 79, -11, 109, -19, -65, 54, 106, -92, 97, -11, -67, 20, -113, -125, -19, 22, -63, 14, -97, -58, 93, -125, -20, -101, -93, 20, -32, -98, 78, -67, -119, -51, -99, 18, 6, -92, -107, -70, 108, -120, -43, -23, 100, -21, -25, -12, 44, 123, -118, -98, -16, 69, 75};
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
    msg.setTimeStamp(0.5078729755135546);
    msg.setSource(15023U);
    msg.setSourceEntity(182U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {41, 1, -3, 67, 122, 17, -3, 113, -75, 106, 123, -25, 16, 5, -63, -64, 80, 83, 8, 30, 54, -30, 83, 3, 57, 9, 9, 98, 67, 54, -107, -112, 125, 87, 87, 74, -45, 19, 21, 59, -104, -117, -91, 0, -109, 97, -44, 112, 4, -121, 121, 86, -49, -76, -110, -25, 82, -77, 103, 119, 79, -116, -77, -100, 78, 11, -91, -115, 38, -51, -6, -1, 105, -74, -85, 116, -31, -101, 90, 6, 89, -20, -42, 64, 52, 89, 0, 90, 72, -83, -98, 115, 34, -46, -13, -37, -122, -12, -42, -97, -72, -120, 113, 68, 29, -77, -66, 97, 6, 3, -55, -75, -33, -30, -99, -69, 57, 101, 78, -37, 39, -26, -65, 123, 112, -12, 54, -61, 108, 100, 100, -62, 68, 57, -104, 120, 65, 49, -112, -117, -77, 82, 63, 43, 62, 75, -32, -35, 36, -87, -1, -22, -91, -87, 122, 60, 105, -75, -111, -18, 53, 32, -110, -35, 91, 1, -84, -62, -59, 41, 18, -118, -61, -97, 38, 51, 107, -76, 115, 47, 125, 58, 56, 96, -87, -73, 40, 41, -31, 122, 73, -95, 21, 38, -56, 73, 0, 94, 69, 56, -5, -27};
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
    msg.setTimeStamp(0.44244394321436975);
    msg.setSource(51114U);
    msg.setSourceEntity(41U);
    msg.setDestination(34795U);
    msg.setDestinationEntity(163U);
    const char tmp_msg_0[] = {-44, -111, 125, -25, -12, -38, 66, -35, 75, 17, 96, -88, 91, -84, 99, 60, 36, -127, -83, -11, 40, -54, -73, 26, -22, -99, -86, -47, 53, 71, -128, 63, 99, -91, -79, 28, 125, 39, -79, 39, 94, -82, 114, -118, 13, -126, -42, -27, 13, -48, -123, 101, -71, -95, 57, -12, 33, -21, 78, 40, -30, -106, 36, 118, 60, -103, -97, 79, 103, 102, 121, -128, -101, -117, -41, -31, -52, 125, -120, 18, -47, -101};
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
    msg.setTimeStamp(0.9801236247856656);
    msg.setSource(30996U);
    msg.setSourceEntity(68U);
    msg.setDestination(65383U);
    msg.setDestinationEntity(112U);
    msg.frequency = 1056350601U;
    msg.min_range = 48176U;
    msg.max_range = 62510U;

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
    msg.setTimeStamp(0.9411469477950175);
    msg.setSource(27069U);
    msg.setSourceEntity(101U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(69U);
    msg.frequency = 3273456092U;
    msg.min_range = 43496U;
    msg.max_range = 36259U;

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
    msg.setTimeStamp(0.0185652179229443);
    msg.setSource(32225U);
    msg.setSourceEntity(124U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(35U);
    msg.frequency = 3175304135U;
    msg.min_range = 33367U;
    msg.max_range = 40651U;

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
    msg.setTimeStamp(0.8473255419426149);
    msg.setSource(20807U);
    msg.setSourceEntity(200U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(46U);
    msg.type = 242U;
    msg.frequency = 2001760222U;
    msg.min_range = 50451U;
    msg.max_range = 35747U;
    msg.bits_per_point = 243U;
    msg.scale_factor = 0.12168619340555531;
    const char tmp_msg_0[] = {81, 76, 35, -88, -122, 125, 56, -36, 33, -128, 117, 68, -100, -47, 115, -16, 80, 63, -6, 109, -36, 61, -21, -62, 28, -82, -6, 29, 113, 36, 56, -102, 96, -63, 105, 53, 90, 2, -29, -114, 65, 125, -42, 115, -43, 92, 64, 95, -85, -77, -30, -41, -113, -42, -107, 89, -113, -119, -52, 52, 7, 8, -114, -28, -22, -91, -74, -125, -41, 73, -100, -96, -70, -84, -102, -95, 125, -14, -117, 1, 1, 87, -20, -36, -20, 102, -72, -54, -51, -16, -31, 14, 42, 88, -42, -59, 14, 21, 44, 101, 67, 57, -8, 1, -10, -116, -96, -91, -50, -19};
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
    msg.setTimeStamp(0.25143524468524947);
    msg.setSource(56765U);
    msg.setSourceEntity(238U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(240U);
    msg.type = 162U;
    msg.frequency = 2460761018U;
    msg.min_range = 22837U;
    msg.max_range = 53079U;
    msg.bits_per_point = 9U;
    msg.scale_factor = 0.31660704433858244;
    const char tmp_msg_0[] = {-106, 66, 42, 54, 119, -71, -76, 102, 82, 17, 66, 119, 96, -124, -114, 6, -75, 89, 68, 55, -36, -3, 104, 40, 63, -89, 57, 56, -111, 80, -111, -23, 40, -83, -89, -69, -55, -45, 28, -3, 68, -77, 1, 59, -42, 102, 29, 27, 44, 104, -12, -25, 120, 77, -96, -77, -101, -37, -128, 53, 51, -97, 72, 68, -73, 8, 104, 13, -113, -101, -125, 88, 32, -110, 53, 82, -96, -64, -113, 86, -97, 0, 32, 17, 40, 66, 32, -8, 92, -42, 38, 75, 106, 20, 42, -50, -76, 82, 27, 18, -112, 105, -88, 83, 85, -116, 58, -26, -115, 57, -105, -127, 83, 56, -55, 102, 56, -15, -64, 126, -20, 89, -8, 41, -103, -79, -60, 72, 14, -124, 68, -82, 63, -41, 124, -72, -72, 64, -123, 35, 61, 83, -114, -45, 101, -27, 99, 7, 31, 51, 13, -112, -124, 51, -3, -17, 80, 73, 13, 73, -126, -69};
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
    msg.setTimeStamp(0.6623091626646878);
    msg.setSource(29202U);
    msg.setSourceEntity(136U);
    msg.setDestination(50547U);
    msg.setDestinationEntity(230U);
    msg.type = 64U;
    msg.frequency = 2878920997U;
    msg.min_range = 57952U;
    msg.max_range = 6383U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.03280186756699921;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9396097801949139;
    tmp_msg_0.beam_height = 0.0767321082793242;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {50, -52, 79, 83, 91, -43, -42, -51, -75, 38, 26, 76, 108, -121, -1, -11, -27, 27, 51, 47, 96, 59, 81, -101, -52, 38, 96, -41, 103, 124, -37, -101, 99, 49, 60, 4, 8, -18, -65, -23, 22, -114, 120, -4, -110, 12, -56, -118, -11, -57, 63, -70, -110, 28, -29, 56, -72, -106, 98, -78, -83, -91, -18, -65, -27, -81, 118, -94, 31, 25, -106, 69, 90, -5, 10, 3, -73, -102, -53, 76, 60, -75, -65, 90, -15, -84, 103, -96, -66, -94, 117, 125, 60, 101, 68, -39, -82, 52, -42, -118, 42, -94, 52, 60, -53, 108, -63, -126, -33, 61, -55, 100, 75, 6, 103, 5, 35, 10, -93, -74, -98, -69, 86, 66, 76, 5, 34, 90, 80, -126, -10, 92, -1, 83, 3, 113, -20, 82, -56, 114, 56, 3, 116, 106, 19, -101, -119, 47, -15, -28, -75, -108, 38, -95, 44, -95, -3, -14, -76, 47, 123, -100, -77, 100, -119, -97, -31, -95, -67, 49, -34, -121, -87, 50, -42, -82, 96, 76, -89, -37, -45};
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
    msg.setTimeStamp(0.013194915964743759);
    msg.setSource(7698U);
    msg.setSourceEntity(29U);
    msg.setDestination(769U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.18818047858048748);
    msg.setSource(29708U);
    msg.setSourceEntity(77U);
    msg.setDestination(57998U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.8979672376243659);
    msg.setSource(17167U);
    msg.setSourceEntity(22U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.8399838616062817);
    msg.setSource(47362U);
    msg.setSourceEntity(58U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(83U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.2239782755764037);
    msg.setSource(493U);
    msg.setSourceEntity(64U);
    msg.setDestination(46748U);
    msg.setDestinationEntity(149U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.6206181030765809);
    msg.setSource(30788U);
    msg.setSourceEntity(10U);
    msg.setDestination(10305U);
    msg.setDestinationEntity(132U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.6205586126490847);
    msg.setSource(15360U);
    msg.setSourceEntity(142U);
    msg.setDestination(58373U);
    msg.setDestinationEntity(82U);
    msg.value = 0.48535276508341174;
    msg.confidence = 0.7609430558630504;
    msg.opmodes.assign("GDEDGOXQULUJBYGULHDXEWZNSFIRZJYFBVVEKORPFNMITGVHVJIKHICKDZFRZLDUJIDKBQHTGZKKEPIHCJIYDJZLLLCWGSNXWBWWWCQTTHNKNACQLSRUVBYAMPWGRYVUSXSCOEPTUEVBFOPFZOCHQAPLOAHNDTWMMVMKTQJAXXDYXAESGZCYUSGGVWROXESSFHMNPJEKBKPJMOPRQCYMBNYSZAQVXOFMQA");

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
    msg.setTimeStamp(0.6564332295355487);
    msg.setSource(50196U);
    msg.setSourceEntity(81U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(84U);
    msg.value = 0.027106205217743762;
    msg.confidence = 0.24303779944437376;
    msg.opmodes.assign("LDUZORDAJSIFAGCGJMFCQTNSVOYGHPPUONVGLTLKXDCWNCVYGAIUGSXBHZREMOAYCDRPFYHDDEQCXSQZUNJRHTZBXAMOAZMTBHOSYZPVRVOUMXWGHHUIYUFTFEILNXI");

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
    msg.setTimeStamp(0.2550812774758432);
    msg.setSource(46809U);
    msg.setSourceEntity(254U);
    msg.setDestination(10324U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7371886669971226;
    msg.confidence = 0.5191206515893076;
    msg.opmodes.assign("WEZKVDXDIPBRFNWIFLICKWOPOCRFIGWHNBYQMCQXBXRDVAFDWPEXKTKQEPUPUNMJISVBPAJQWKPTIOAEOZZDT");

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
    msg.setTimeStamp(0.2703564371641154);
    msg.setSource(15130U);
    msg.setSourceEntity(227U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(197U);
    msg.itow = 4153245195U;
    msg.lat = 0.5797701273663158;
    msg.lon = 0.9350994924744794;
    msg.height_ell = 0.8767415491038845;
    msg.height_sea = 0.07041072215792543;
    msg.hacc = 0.00917274177376548;
    msg.vacc = 0.0014832567660295615;
    msg.vel_n = 0.9010491081334345;
    msg.vel_e = 0.806124317405112;
    msg.vel_d = 0.16703007746747633;
    msg.speed = 0.5660263643372798;
    msg.gspeed = 0.6257716258742;
    msg.heading = 0.28115241656659773;
    msg.sacc = 0.21580229040341536;
    msg.cacc = 0.34442439356798016;

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
    msg.setTimeStamp(0.9727259365368118);
    msg.setSource(50491U);
    msg.setSourceEntity(18U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(28U);
    msg.itow = 1929639659U;
    msg.lat = 0.8891006708250426;
    msg.lon = 0.38033844879004897;
    msg.height_ell = 0.32961296183043776;
    msg.height_sea = 0.8040938647500154;
    msg.hacc = 0.33951469740207973;
    msg.vacc = 0.2844760789487534;
    msg.vel_n = 0.32127744378726475;
    msg.vel_e = 0.2964534962870342;
    msg.vel_d = 0.09132019559890969;
    msg.speed = 0.702086922471335;
    msg.gspeed = 0.9421818934856995;
    msg.heading = 0.26318508458935574;
    msg.sacc = 0.6528393015796332;
    msg.cacc = 0.47071073416501086;

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
    msg.setTimeStamp(0.7723045448048174);
    msg.setSource(16698U);
    msg.setSourceEntity(168U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(86U);
    msg.itow = 1072014265U;
    msg.lat = 0.09427441613441023;
    msg.lon = 0.1640530022637252;
    msg.height_ell = 0.02573354663694305;
    msg.height_sea = 0.10216717953958276;
    msg.hacc = 0.7074068077152692;
    msg.vacc = 0.7111014286266109;
    msg.vel_n = 0.45556003640263354;
    msg.vel_e = 0.9237368516365458;
    msg.vel_d = 0.8924069361465701;
    msg.speed = 0.5113563798192315;
    msg.gspeed = 0.5265055917733259;
    msg.heading = 0.22340920975360146;
    msg.sacc = 0.6414735083081494;
    msg.cacc = 0.8185570366934558;

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
    msg.setTimeStamp(0.19242081868607852);
    msg.setSource(1831U);
    msg.setSourceEntity(168U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(41U);
    msg.id = 120U;
    msg.value = 0.5505715108751449;

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
    msg.setTimeStamp(0.6263230880841453);
    msg.setSource(36761U);
    msg.setSourceEntity(68U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(187U);
    msg.id = 32U;
    msg.value = 0.9618225091951903;

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
    msg.setTimeStamp(0.9408991199327126);
    msg.setSource(23440U);
    msg.setSourceEntity(81U);
    msg.setDestination(32693U);
    msg.setDestinationEntity(114U);
    msg.id = 127U;
    msg.value = 0.934822787724887;

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
    msg.setTimeStamp(0.18980099048517485);
    msg.setSource(46233U);
    msg.setSourceEntity(74U);
    msg.setDestination(53952U);
    msg.setDestinationEntity(166U);
    msg.x = 0.2647915553470631;
    msg.y = 0.22612642462199095;
    msg.z = 0.8971941642204462;
    msg.phi = 0.015810598462567715;
    msg.theta = 0.19202487013139535;
    msg.psi = 0.36481885187049223;

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
    msg.setTimeStamp(0.638018832901144);
    msg.setSource(19445U);
    msg.setSourceEntity(195U);
    msg.setDestination(32792U);
    msg.setDestinationEntity(196U);
    msg.x = 0.17567146078796703;
    msg.y = 0.04406760919825292;
    msg.z = 0.27305329354325414;
    msg.phi = 0.4327544875192971;
    msg.theta = 0.6242358354091182;
    msg.psi = 0.03574383209135479;

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
    msg.setTimeStamp(0.6960748393484667);
    msg.setSource(58971U);
    msg.setSourceEntity(254U);
    msg.setDestination(34978U);
    msg.setDestinationEntity(82U);
    msg.x = 0.4713425419987871;
    msg.y = 0.07049477362246093;
    msg.z = 0.12781826153552134;
    msg.phi = 0.8412935906236974;
    msg.theta = 0.08358416892051423;
    msg.psi = 0.7796509227206007;

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
    msg.setTimeStamp(0.6002984194969628);
    msg.setSource(47437U);
    msg.setSourceEntity(178U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(180U);
    msg.beam_width = 0.797732809558827;
    msg.beam_height = 0.9926810347544444;

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
    msg.setTimeStamp(0.2673608477796262);
    msg.setSource(38061U);
    msg.setSourceEntity(49U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(253U);
    msg.beam_width = 0.6333066542240262;
    msg.beam_height = 0.4561743832379187;

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
    msg.setTimeStamp(0.26871304957668385);
    msg.setSource(57124U);
    msg.setSourceEntity(84U);
    msg.setDestination(37925U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.6920694380411704;
    msg.beam_height = 0.3403065099796322;

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
    msg.setTimeStamp(0.43586311642352416);
    msg.setSource(60440U);
    msg.setSourceEntity(191U);
    msg.setDestination(15389U);
    msg.setDestinationEntity(76U);
    msg.sane = 243U;

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
    msg.setTimeStamp(0.24117304943051188);
    msg.setSource(19242U);
    msg.setSourceEntity(93U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(170U);
    msg.sane = 133U;

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
    msg.setTimeStamp(0.7886503090936712);
    msg.setSource(58859U);
    msg.setSourceEntity(216U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(85U);
    msg.sane = 102U;

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
    msg.setTimeStamp(0.10600409249568876);
    msg.setSource(23089U);
    msg.setSourceEntity(66U);
    msg.setDestination(320U);
    msg.setDestinationEntity(181U);
    msg.id = 77U;
    msg.zoom = 184U;
    msg.action = 148U;

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
    msg.setTimeStamp(0.03263933184700252);
    msg.setSource(21184U);
    msg.setSourceEntity(247U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(90U);
    msg.id = 233U;
    msg.zoom = 48U;
    msg.action = 167U;

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
    msg.setTimeStamp(0.5478437479153434);
    msg.setSource(56111U);
    msg.setSourceEntity(87U);
    msg.setDestination(18911U);
    msg.setDestinationEntity(24U);
    msg.id = 10U;
    msg.zoom = 49U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.30479969314567623);
    msg.setSource(32052U);
    msg.setSourceEntity(7U);
    msg.setDestination(164U);
    msg.setDestinationEntity(125U);
    msg.id = 93U;
    msg.value = 0.8324438015047454;

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
    msg.setTimeStamp(0.23124335570128174);
    msg.setSource(31051U);
    msg.setSourceEntity(69U);
    msg.setDestination(55780U);
    msg.setDestinationEntity(55U);
    msg.id = 71U;
    msg.value = 0.33831758072506524;

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
    msg.setTimeStamp(0.6458275859213246);
    msg.setSource(39698U);
    msg.setSourceEntity(193U);
    msg.setDestination(13379U);
    msg.setDestinationEntity(204U);
    msg.id = 83U;
    msg.value = 0.23445908708567187;

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
    msg.setTimeStamp(0.45899601436638693);
    msg.setSource(51068U);
    msg.setSourceEntity(33U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(95U);
    msg.id = 197U;
    msg.value = 0.04260744463761912;

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
    msg.setTimeStamp(0.7250398865813698);
    msg.setSource(61837U);
    msg.setSourceEntity(218U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(133U);
    msg.id = 8U;
    msg.value = 0.08654752551349054;

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
    msg.setTimeStamp(0.3058068992663697);
    msg.setSource(5104U);
    msg.setSourceEntity(72U);
    msg.setDestination(23104U);
    msg.setDestinationEntity(223U);
    msg.id = 158U;
    msg.value = 0.8669572108915756;

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
    msg.setTimeStamp(0.13832436291090666);
    msg.setSource(54183U);
    msg.setSourceEntity(84U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(127U);
    msg.id = 252U;
    msg.angle = 0.3945508053629768;

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
    msg.setTimeStamp(0.9322909137670221);
    msg.setSource(61116U);
    msg.setSourceEntity(161U);
    msg.setDestination(34870U);
    msg.setDestinationEntity(223U);
    msg.id = 11U;
    msg.angle = 0.15715322120813535;

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
    msg.setTimeStamp(0.9087676495214827);
    msg.setSource(44U);
    msg.setSourceEntity(3U);
    msg.setDestination(6193U);
    msg.setDestinationEntity(192U);
    msg.id = 146U;
    msg.angle = 0.8882045857593378;

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
    msg.setTimeStamp(0.3085422829134784);
    msg.setSource(46092U);
    msg.setSourceEntity(25U);
    msg.setDestination(14489U);
    msg.setDestinationEntity(130U);
    msg.op = 109U;
    msg.actions.assign("FRGIDMXSXRJQEILQXFKLZRXVBPMTQHKOULULYPJTGSYBBGCAPVUKBPNXYSYPERFOVHQLVRDGNTLRTHCSPSPEUTVSSJZJMFAWFALTMABESVYMELDDGKTKBWUU");

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
    msg.setTimeStamp(0.7518440761398888);
    msg.setSource(57945U);
    msg.setSourceEntity(116U);
    msg.setDestination(1236U);
    msg.setDestinationEntity(245U);
    msg.op = 211U;
    msg.actions.assign("NCQBKONUZIYWGCYFKJMBAOJKHZFXRPZPDDURLVYVTYJLBDKRTLXQVYISVXIIDZWPBEKIGONVLYGBRGZROIEBAEGDKSKHUFNGFWHAZQHLTXUMAXCMTHRIKOLEDAFFMYQMBNCNTMBDCWVPMQPTCYMUAHENGXQFJVXZTPEJASHSLXSKQOENGCSMSQXLPOADXUHWNZHVFAWIOMUVIUWCJLEDJJTFSUSRTQNGRY");

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
    msg.setTimeStamp(0.43945713597823);
    msg.setSource(8857U);
    msg.setSourceEntity(205U);
    msg.setDestination(64853U);
    msg.setDestinationEntity(3U);
    msg.op = 222U;
    msg.actions.assign("QVTNXHFEUZIGLEOZGRIDVJXCVSNPEDXWTRIZBPHJUIDXGLBFNLUUDZAENZVIJRUBJHOSCVDTREOHWMYEKCNYIPGXUOHKGOOZYUQFHPSEAQMYJMMWVSFBIIBXSYGCCQSGHAOLFSKKFHRKUQJNDWFJARIYDVJWOYPQMRZWKQGXBWCDSPFOKLF");

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
    msg.setTimeStamp(0.49449009407969413);
    msg.setSource(49736U);
    msg.setSourceEntity(193U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(159U);
    msg.actions.assign("SWLNUNGCICTYAJZCOBQRIXYXTQUXGKJRVFQCBGUPZYLPZOLVENENSABNPROWEEERRUTNKUHWVDGZUUHXGFTDQAXZICFYGOBEORKRMSALJCTMPKWPZJSDLHIWBEQDVNDLJTAZQWGKVO");

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
    msg.setTimeStamp(0.2222609581318925);
    msg.setSource(20559U);
    msg.setSourceEntity(52U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("VDYWNSJGSXYISOESYKBJTGXTLJPCYIQCHHWHJNFUFQSLCGQQLFNFJDYBZLUHDDAGQPLOBCUWMOSFWQUOKCVXWVXWOTDAVNCHRZAGREMZWIMXQUQTOKNPNEEFWKVPTPOVPGHQABBBEKRLUUCYCHTVRINXJOKXRGH");

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
    msg.setTimeStamp(0.06454900253255802);
    msg.setSource(47439U);
    msg.setSourceEntity(21U);
    msg.setDestination(16999U);
    msg.setDestinationEntity(41U);
    msg.actions.assign("SDXQLKJRFOQRVZNETDXJBKFAZXYPZHQLEHJRBWEEQFNZDOZDXGRVYQMOWZVXFWHIXUAUCNHJMJIEJBGQUTHHZZQSKBXTGPDUCICOUQRDELSLVKMYWOEBLMKIRGTPDDWVFUTDPEPPYNMIIOK");

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
    msg.setTimeStamp(0.3099135221401378);
    msg.setSource(29040U);
    msg.setSourceEntity(242U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(95U);
    msg.button = 89U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.026835058983466165);
    msg.setSource(51882U);
    msg.setSourceEntity(183U);
    msg.setDestination(29735U);
    msg.setDestinationEntity(101U);
    msg.button = 15U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.18636834688954873);
    msg.setSource(16404U);
    msg.setSourceEntity(245U);
    msg.setDestination(22458U);
    msg.setDestinationEntity(43U);
    msg.button = 70U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.08492378410101054);
    msg.setSource(56687U);
    msg.setSourceEntity(155U);
    msg.setDestination(44446U);
    msg.setDestinationEntity(60U);
    msg.op = 206U;
    msg.text.assign("GOSZXZQCWPDLUNTQVUHTAKPDIAQSELCXAYHIZRFIWKLBLAVNQSVSLEIAUEKJJUYESFNYBTWNQCLQOQJEHMRPEZPTWFSSWUFDFHIGHJLTKRMTRPCOOFVUBXGYGPWTFNHDOGMHXDBJDJUGFNEZZR");

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
    msg.setTimeStamp(0.37382121981635574);
    msg.setSource(60535U);
    msg.setSourceEntity(136U);
    msg.setDestination(30000U);
    msg.setDestinationEntity(220U);
    msg.op = 56U;
    msg.text.assign("SHOPULCIPMBXPZFYOXTRBOIQTUXXWKUJPXURJMKMAKSGTJSDXNCDAAHGKRWLAVWJBJPYWNGTYATVREWMLUZFSLOLHEASBCTIENYVTBGFRFXRLRFPEKLCAREIFNDAWVRIHKQMOFRUYDWMNJEJYUNVDPVQNQHBNT");

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
    msg.setTimeStamp(0.8636486664487653);
    msg.setSource(22690U);
    msg.setSourceEntity(100U);
    msg.setDestination(55726U);
    msg.setDestinationEntity(249U);
    msg.op = 234U;
    msg.text.assign("CIGJSELAPORAZYCBNJZTLSIEQECUFNYBUKMPW");

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
    msg.setTimeStamp(0.09492209730181445);
    msg.setSource(31438U);
    msg.setSourceEntity(221U);
    msg.setDestination(10832U);
    msg.setDestinationEntity(81U);
    msg.op = 40U;
    msg.time_remain = 0.08099640030482347;
    msg.sched_time = 0.25488233818211337;

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
    msg.setTimeStamp(0.7249564242950399);
    msg.setSource(52744U);
    msg.setSourceEntity(235U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(3U);
    msg.op = 33U;
    msg.time_remain = 0.21718409060866384;
    msg.sched_time = 0.2205785390171916;

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
    msg.setTimeStamp(0.14722219776909995);
    msg.setSource(54907U);
    msg.setSourceEntity(254U);
    msg.setDestination(38808U);
    msg.setDestinationEntity(140U);
    msg.op = 76U;
    msg.time_remain = 0.3233136854013098;
    msg.sched_time = 0.8897811240875119;

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
    msg.setTimeStamp(0.6524154494649692);
    msg.setSource(4752U);
    msg.setSourceEntity(207U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(219U);
    msg.name.assign("BCMGKLLNSUVOYWDPWJBZHVVBDJMAVNBACHRYKXZYWQEGOFCTLXZDHCTHWHDNAQUPNXZKDXEIEQZVJPMYFTFSJLILNYFXPUNIRFVMFTFLNJEHTLDACOOKJUNYYKWKXXDFIQBEUSGSAFOTBVERGXJVWJSSHBQQRV");
    msg.op = 223U;
    msg.sched_time = 0.6304510168481722;

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
    msg.setTimeStamp(0.39889079260283133);
    msg.setSource(64746U);
    msg.setSourceEntity(215U);
    msg.setDestination(6044U);
    msg.setDestinationEntity(41U);
    msg.name.assign("WCLLCBNCQSDLKRTSHLFFRUQPOHMKWQURVOHLRQLGMZGSWTZTAXQBZA");
    msg.op = 162U;
    msg.sched_time = 0.35972074404413945;

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
    msg.setTimeStamp(0.6543020756272373);
    msg.setSource(30435U);
    msg.setSourceEntity(156U);
    msg.setDestination(45718U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GVRZFQFAFKPWKCRGJNIMCAIHTTQVTDKLDMAZDTDIMOZSYPDBNAATNRZLYOGROXPUOQJGGSZTVVESSFPKJPVJXNBUBVON");
    msg.op = 74U;
    msg.sched_time = 0.1097481126743286;

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
    msg.setTimeStamp(0.3040100511157552);
    msg.setSource(30901U);
    msg.setSourceEntity(25U);
    msg.setDestination(16803U);
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
    msg.setTimeStamp(0.3688316237918985);
    msg.setSource(58420U);
    msg.setSourceEntity(126U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.12442535299856139);
    msg.setSource(4261U);
    msg.setSourceEntity(32U);
    msg.setDestination(63068U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.2909552406196977);
    msg.setSource(56803U);
    msg.setSourceEntity(116U);
    msg.setDestination(50256U);
    msg.setDestinationEntity(242U);
    msg.name.assign("VIWBCAQDKECGKFYFNHCENGYFWZPKNKFYQ");
    msg.state = 59U;

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
    msg.setTimeStamp(0.5783659590743179);
    msg.setSource(18817U);
    msg.setSourceEntity(72U);
    msg.setDestination(28193U);
    msg.setDestinationEntity(204U);
    msg.name.assign("VDTHODVZICSIHFPAPPOTOZMGNOYJICQVXEKSEBMWUKQNIFCAHHSKWOJKTZZASSLGBDMBYXQMYRWXLOUKFICKQVLRVZTWNERMTBPBXQSGUSJAUWUASTLNIVD");
    msg.state = 12U;

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
    msg.setTimeStamp(0.6829108240780726);
    msg.setSource(5206U);
    msg.setSourceEntity(147U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(217U);
    msg.name.assign("XLSWPRNPLRUUWTTSCDNEXBFONZQOOGARAANNMZYCABEJZJQDSBGFLCQSKFVKMEGGMIHLZKLHDEYCSHBFTTUWWKVVKQIRWIEXPAHBCYTKWIBHKZRLPJBCCSLDBXVPVASDLHGPRUWOPV");
    msg.state = 0U;

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
    msg.setTimeStamp(0.4987623492204325);
    msg.setSource(18591U);
    msg.setSourceEntity(184U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(13U);
    msg.name.assign("TKGYUFDPJVOPDLHQNQXFYVBUMMPGSYKQOAISWEEVLLFPMLJHWRVPHUBXNTFTWXCCSZGXXMPFOUKWXBAYRYDHNGWSCRAZVLZIKJKJFQBKEJIXUBLUTIKRBXKDDPPOIINRCZYQMMKEHLMZACVQVZCCOJXNAZODLSCGEFZJLSATBHUWSPETAAAIDQCYHHONPVGW");
    msg.value = 38U;

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
    msg.setTimeStamp(0.0802816130961368);
    msg.setSource(13264U);
    msg.setSourceEntity(140U);
    msg.setDestination(50978U);
    msg.setDestinationEntity(107U);
    msg.name.assign("NLDEARDSUFJQIWJEQFWRMRJAHYDLYRQSRCOYCCSIPPTBMLXDLLHWUDLOAUAFTRWKYJFTPNDYZHCYVTRZBMCEIBMZHTWGCCKFEUL");
    msg.value = 67U;

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
    msg.setTimeStamp(0.08148509281707728);
    msg.setSource(45289U);
    msg.setSourceEntity(66U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(252U);
    msg.name.assign("AHTBASGUWLFZGZWAMZAPREKVBSNHGMGHGXENZEXWXMDHVWVCNIBSYCMJBPHAGDZWNEAXNSEZLRUFCGUEPEPCDDJUKFKQOYO");
    msg.value = 152U;

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
    msg.setTimeStamp(0.7561461027900035);
    msg.setSource(5319U);
    msg.setSourceEntity(38U);
    msg.setDestination(46813U);
    msg.setDestinationEntity(124U);
    msg.name.assign("NKEOHEPMIPJSZIWYBWQFIJJTOPUFDMNCNJLRVTWNMZOUWCAAQJPVNLOHPPBPGSMATHLKUJXOZDPTGNOXMZVGFZHDAQHYSWAZSEZINFSTRWCXQXHYZKNCRAUMWWQRFHTGGRLGX");

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
    msg.setTimeStamp(0.6966449162262163);
    msg.setSource(6150U);
    msg.setSourceEntity(160U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(103U);
    msg.name.assign("KLUMFZWILQEOEWXZMLXKABNMUPWXPMFWTNVUBDPVMUSWXUEKGCLYSLCYKUDVQRMQYLTUEQOQRBJYGVBTHVSNOABZQHGIYYEJXDAORODGLBDZYZCNZHHNFCJJDNJCXBSCELBSVYMGFRHFKGWIXKQPMRJHQHLIJUZHOXISFTPWRHCNFPJOTUVAFSBPSPTRJCEBETEUXIEATAKNQODKIJMGITIGLCZ");

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
    msg.setTimeStamp(0.16267561897566807);
    msg.setSource(35540U);
    msg.setSourceEntity(212U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(142U);
    msg.name.assign("PFKPELKCUWIWOJTAAOYFJSKJRKXSLZEWEOUALZRJTQARNNJBCWTOAPFDRGVPFVBZTZQKQMOAMEIOQPYLMEVBZQYIYMHEBDWDRBPCBHVUXVDQQTNIKZYSIKXNGCLXNYXMIYDCONGXDGPZBLSHTSNSMVSEDPFSSMTDVTRHEKZNUJICDDHKPUYARLEULVNVJQCQJC");

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
    msg.setTimeStamp(0.382995543224916);
    msg.setSource(4641U);
    msg.setSourceEntity(225U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(1U);
    msg.name.assign("BJLEFRDKKYTNQTVXZMAXLWOOYFTYEQXOKBMYKLJZZCKPBNGDLNZSVATZGVCOHRCATWDKWNBSNFFASIMDQGIRFIAGMSLSPQIODXIPPWUCBDQBPPVOMRUFHWEXWUKEPREQOEYXFQABFNWGIFHCYZVWIPNTOKOHQUJMBFWYDECJEZEYRPUOXSZHJDGXZVYQUBKLRLRSMIURIQANLDJTIYRLGSCJTMCVHAJZNAVMCPGUTBNHHTCVUEX");
    msg.value = 124U;

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
    msg.setTimeStamp(0.20581089044676282);
    msg.setSource(59686U);
    msg.setSourceEntity(3U);
    msg.setDestination(61072U);
    msg.setDestinationEntity(15U);
    msg.name.assign("WQMNKCUYUKBOQQHLFHVAXIQACNBPOWEQAEMALHSKJADBJXLSBFSHMVDFBFUYSRKXNSJYEHALKDIUGVPWXSRYLDIWJGUMLNTSCNGDHCFFTMYYCGVWITHEKWKZAFIKRGWPOUNETSLLZCBTPOXZIE");
    msg.value = 118U;

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
    msg.setTimeStamp(0.8832070500799737);
    msg.setSource(62319U);
    msg.setSourceEntity(146U);
    msg.setDestination(56322U);
    msg.setDestinationEntity(30U);
    msg.name.assign("NZNFWFEFJGJJHFEKNW");
    msg.value = 59U;

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
    msg.setTimeStamp(0.5810948581391215);
    msg.setSource(25591U);
    msg.setSourceEntity(124U);
    msg.setDestination(33061U);
    msg.setDestinationEntity(82U);
    msg.id = 113U;
    msg.period = 1565663977U;
    msg.duty_cycle = 3611399677U;

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
    msg.setTimeStamp(0.6740217933953362);
    msg.setSource(16206U);
    msg.setSourceEntity(46U);
    msg.setDestination(2995U);
    msg.setDestinationEntity(91U);
    msg.id = 206U;
    msg.period = 2565141676U;
    msg.duty_cycle = 2242201518U;

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
    msg.setTimeStamp(0.6150867188526222);
    msg.setSource(53592U);
    msg.setSourceEntity(26U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(133U);
    msg.id = 228U;
    msg.period = 787362033U;
    msg.duty_cycle = 2247556097U;

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
    msg.setTimeStamp(0.33077677045345644);
    msg.setSource(61470U);
    msg.setSourceEntity(199U);
    msg.setDestination(11838U);
    msg.setDestinationEntity(133U);
    msg.id = 39U;
    msg.period = 3134941296U;
    msg.duty_cycle = 2721863840U;

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
    msg.setTimeStamp(0.41628160456494157);
    msg.setSource(61660U);
    msg.setSourceEntity(62U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(9U);
    msg.id = 237U;
    msg.period = 1152095466U;
    msg.duty_cycle = 3155929217U;

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
    msg.setTimeStamp(0.0575428287494365);
    msg.setSource(16081U);
    msg.setSourceEntity(30U);
    msg.setDestination(39484U);
    msg.setDestinationEntity(54U);
    msg.id = 208U;
    msg.period = 3498709643U;
    msg.duty_cycle = 2105687802U;

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
    msg.setTimeStamp(0.7800899210928329);
    msg.setSource(21794U);
    msg.setSourceEntity(172U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.5054689379382635;
    msg.lon = 0.3737722080016639;
    msg.height = 0.7241469668037375;
    msg.x = 0.3879469087384422;
    msg.y = 0.4297073035858837;
    msg.z = 0.6718833201440416;
    msg.phi = 0.9518206346398277;
    msg.theta = 0.008731748890136948;
    msg.psi = 0.61107877160562;
    msg.u = 0.8845673628274067;
    msg.v = 0.7176767059356064;
    msg.w = 0.23548188530149627;
    msg.vx = 0.551652156331815;
    msg.vy = 0.6516173830531363;
    msg.vz = 0.07130778808502136;
    msg.p = 0.5908149126274022;
    msg.q = 0.07502172500416915;
    msg.r = 0.5267559025302168;
    msg.depth = 0.5914997314043026;
    msg.alt = 0.18372576242883176;

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
    msg.setTimeStamp(0.7939827101717417);
    msg.setSource(24753U);
    msg.setSourceEntity(158U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.26432280025287125;
    msg.lon = 0.6624716591667578;
    msg.height = 0.6582466501805297;
    msg.x = 0.5541106664815667;
    msg.y = 0.6881740100054673;
    msg.z = 0.06639245784151526;
    msg.phi = 0.16318730377336121;
    msg.theta = 0.014368806917714028;
    msg.psi = 0.09142080575118838;
    msg.u = 0.8997781674498455;
    msg.v = 0.013988129775024394;
    msg.w = 0.029584153528324664;
    msg.vx = 0.1655470971054439;
    msg.vy = 0.07324568653580499;
    msg.vz = 0.8751922096125152;
    msg.p = 0.6613223982428257;
    msg.q = 0.3680672140141503;
    msg.r = 0.5482451211583065;
    msg.depth = 0.22167580312870838;
    msg.alt = 0.11756662394738682;

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
    msg.setTimeStamp(0.4404469459187128);
    msg.setSource(35328U);
    msg.setSourceEntity(219U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8584501733027329;
    msg.lon = 0.7337231763330977;
    msg.height = 0.7458319542743221;
    msg.x = 0.11864198184144692;
    msg.y = 0.5520120036120367;
    msg.z = 0.3551518498643219;
    msg.phi = 0.5684982500268634;
    msg.theta = 0.5659420256984831;
    msg.psi = 0.5090207136740786;
    msg.u = 0.3551211485776302;
    msg.v = 0.23774970182586308;
    msg.w = 0.32228407871183795;
    msg.vx = 0.352171031577731;
    msg.vy = 0.5321532131330733;
    msg.vz = 0.38512338914164457;
    msg.p = 0.6859052352545383;
    msg.q = 0.1407802983793307;
    msg.r = 0.6268105565501074;
    msg.depth = 0.49494699244120144;
    msg.alt = 0.6769787066746831;

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
    msg.setTimeStamp(0.1734013116668669);
    msg.setSource(41545U);
    msg.setSourceEntity(157U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(86U);
    msg.x = 0.9235017195457181;
    msg.y = 0.21695618066848954;
    msg.z = 0.08128513461088638;

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
    msg.setTimeStamp(0.5105482207095778);
    msg.setSource(28423U);
    msg.setSourceEntity(122U);
    msg.setDestination(54872U);
    msg.setDestinationEntity(95U);
    msg.x = 0.7114104640649671;
    msg.y = 0.31054483730018523;
    msg.z = 0.15186537548004442;

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
    msg.setTimeStamp(0.21626964566096385);
    msg.setSource(9761U);
    msg.setSourceEntity(185U);
    msg.setDestination(48634U);
    msg.setDestinationEntity(64U);
    msg.x = 0.1050124379829056;
    msg.y = 0.9423000733243934;
    msg.z = 0.4398537557198221;

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
    msg.setTimeStamp(0.9708439659894705);
    msg.setSource(29241U);
    msg.setSourceEntity(129U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5875722618662216;

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
    msg.setTimeStamp(0.03234715609695615);
    msg.setSource(49383U);
    msg.setSourceEntity(48U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(166U);
    msg.value = 0.571801688995108;

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
    msg.setTimeStamp(0.24372609755627073);
    msg.setSource(65081U);
    msg.setSourceEntity(202U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(81U);
    msg.value = 0.12471639750988783;

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
    msg.setTimeStamp(0.02920121125738484);
    msg.setSource(30064U);
    msg.setSourceEntity(116U);
    msg.setDestination(44971U);
    msg.setDestinationEntity(33U);
    msg.value = 0.2659719581031105;

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
    msg.setTimeStamp(0.8087536881076398);
    msg.setSource(53566U);
    msg.setSourceEntity(59U);
    msg.setDestination(3631U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2278989418813563;

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
    msg.setTimeStamp(0.5012847113804454);
    msg.setSource(58281U);
    msg.setSourceEntity(148U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7030149566090259;

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
    msg.setTimeStamp(0.08494455071312579);
    msg.setSource(34546U);
    msg.setSourceEntity(210U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(189U);
    msg.x = 0.665944435742565;
    msg.y = 0.0013562961246825767;
    msg.z = 0.25640457732735633;
    msg.phi = 0.6581059956239937;
    msg.theta = 0.6270388854402775;
    msg.psi = 0.8203255380496282;
    msg.p = 0.5472915602191254;
    msg.q = 0.6478670123869913;
    msg.r = 0.2574574989776607;
    msg.u = 0.3602660592295357;
    msg.v = 0.07470327369483387;
    msg.w = 0.5131182437832607;
    msg.bias_psi = 0.4167499685196353;
    msg.bias_r = 0.27925018834859827;

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
    msg.setTimeStamp(0.45548196201236846);
    msg.setSource(60034U);
    msg.setSourceEntity(136U);
    msg.setDestination(54352U);
    msg.setDestinationEntity(166U);
    msg.x = 0.17972385828433002;
    msg.y = 0.012803350136787794;
    msg.z = 0.5003624927160164;
    msg.phi = 0.6683328741304833;
    msg.theta = 0.6087557315978434;
    msg.psi = 0.9460837732419483;
    msg.p = 0.4968713284136159;
    msg.q = 0.7709483666040317;
    msg.r = 0.14273812193966628;
    msg.u = 0.32352381364256233;
    msg.v = 0.9555712023045384;
    msg.w = 0.9464453654982795;
    msg.bias_psi = 0.3709140720061078;
    msg.bias_r = 0.6518487043341975;

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
    msg.setTimeStamp(0.7398036721362632);
    msg.setSource(51841U);
    msg.setSourceEntity(160U);
    msg.setDestination(57898U);
    msg.setDestinationEntity(163U);
    msg.x = 0.8986572879763061;
    msg.y = 0.012661043315334908;
    msg.z = 0.05683290205333191;
    msg.phi = 0.007415248637842153;
    msg.theta = 0.6079781327712899;
    msg.psi = 0.2000908386772502;
    msg.p = 0.409268253880404;
    msg.q = 0.8951732519891473;
    msg.r = 0.03726657153286639;
    msg.u = 0.9318769452268544;
    msg.v = 0.7122342572387212;
    msg.w = 0.7959662633582669;
    msg.bias_psi = 0.9614388952890034;
    msg.bias_r = 0.6907614908595048;

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
    msg.setTimeStamp(0.6762565753405314);
    msg.setSource(22859U);
    msg.setSourceEntity(143U);
    msg.setDestination(15193U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.447910102221166;
    msg.bias_r = 0.5753860716344573;
    msg.cog = 0.5796524169737084;
    msg.cyaw = 0.6320387985276562;
    msg.lbl_rej_level = 0.01647380648645902;
    msg.gps_rej_level = 0.669131855322575;
    msg.custom_x = 0.5685059435758583;
    msg.custom_y = 0.6957882697545862;
    msg.custom_z = 0.06995706278908354;

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
    msg.setTimeStamp(0.6545096084391345);
    msg.setSource(44135U);
    msg.setSourceEntity(111U);
    msg.setDestination(57558U);
    msg.setDestinationEntity(165U);
    msg.bias_psi = 0.18627276597595344;
    msg.bias_r = 0.9009234150334248;
    msg.cog = 0.6829735572176296;
    msg.cyaw = 0.43785563980309583;
    msg.lbl_rej_level = 0.13557718994264;
    msg.gps_rej_level = 0.8474422631499338;
    msg.custom_x = 0.09051768428048823;
    msg.custom_y = 0.595345228573642;
    msg.custom_z = 0.06388820216527369;

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
    msg.setTimeStamp(0.08939503782420555);
    msg.setSource(42686U);
    msg.setSourceEntity(52U);
    msg.setDestination(37391U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.3904343884621495;
    msg.bias_r = 0.4904091586053797;
    msg.cog = 0.2632425759393695;
    msg.cyaw = 0.36730925635575273;
    msg.lbl_rej_level = 0.09925618097781908;
    msg.gps_rej_level = 0.6775103087195975;
    msg.custom_x = 0.4416683147768279;
    msg.custom_y = 0.16787122245655373;
    msg.custom_z = 0.21762857553875092;

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
    msg.setTimeStamp(0.6683101378644206);
    msg.setSource(3087U);
    msg.setSourceEntity(213U);
    msg.setDestination(3867U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.4441002184030397;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.10185307935121124);
    msg.setSource(36308U);
    msg.setSourceEntity(145U);
    msg.setDestination(8142U);
    msg.setDestinationEntity(30U);
    msg.utc_time = 0.5313383051518863;
    msg.reason = 68U;

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
    msg.setTimeStamp(0.022584517167161144);
    msg.setSource(9435U);
    msg.setSourceEntity(240U);
    msg.setDestination(38388U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.5716565243286535;
    msg.reason = 139U;

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
    msg.setTimeStamp(0.46141081124128414);
    msg.setSource(48077U);
    msg.setSourceEntity(213U);
    msg.setDestination(35268U);
    msg.setDestinationEntity(60U);
    msg.id = 58U;
    msg.range = 0.15912668752568693;
    msg.acceptance = 149U;

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
    msg.setTimeStamp(0.7394390877272102);
    msg.setSource(46286U);
    msg.setSourceEntity(72U);
    msg.setDestination(65521U);
    msg.setDestinationEntity(224U);
    msg.id = 198U;
    msg.range = 0.08455209264225383;
    msg.acceptance = 40U;

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
    msg.setTimeStamp(0.33326935525288004);
    msg.setSource(38147U);
    msg.setSourceEntity(232U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(28U);
    msg.id = 243U;
    msg.range = 0.8348439616754012;
    msg.acceptance = 20U;

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
    msg.setTimeStamp(0.5288574125413384);
    msg.setSource(59738U);
    msg.setSourceEntity(20U);
    msg.setDestination(61875U);
    msg.setDestinationEntity(53U);
    msg.type = 172U;
    msg.reason = 191U;
    msg.value = 0.70588002018314;
    msg.timestep = 0.3927910725985494;

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
    msg.setTimeStamp(0.9495538406134697);
    msg.setSource(28270U);
    msg.setSourceEntity(207U);
    msg.setDestination(60757U);
    msg.setDestinationEntity(222U);
    msg.type = 166U;
    msg.reason = 64U;
    msg.value = 0.6018839818026314;
    msg.timestep = 0.10080963105542307;

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
    msg.setTimeStamp(0.6555406283923642);
    msg.setSource(48779U);
    msg.setSourceEntity(252U);
    msg.setDestination(16333U);
    msg.setDestinationEntity(80U);
    msg.type = 67U;
    msg.reason = 188U;
    msg.value = 0.15795212260163416;
    msg.timestep = 0.5520638106275833;

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
    msg.setTimeStamp(0.4432770128352054);
    msg.setSource(2074U);
    msg.setSourceEntity(173U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.6447087493985743);
    msg.setSource(61054U);
    msg.setSourceEntity(115U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.22418183392007163);
    msg.setSource(7347U);
    msg.setSourceEntity(196U);
    msg.setDestination(50084U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.9395761763710198);
    msg.setSource(1718U);
    msg.setSourceEntity(177U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(140U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TOSGQUJLFASOBICHDTJHTDQUPKJJBZSFWINZQYCJUYJSGEXNTIREJMERNOGYWZXMTZMQZNFXWFOIKKRVYGKUOHIZBVMJSNHBTIZFEYYSMOCLGVUIHRXZCBKDHQEFSYDPNUYQSDKTU");
    tmp_msg_0.lat = 0.04851807421181287;
    tmp_msg_0.lon = 0.4825823927777184;
    tmp_msg_0.depth = 0.6423747615525747;
    tmp_msg_0.query_channel = 187U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 108U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9323846614584088;
    msg.y = 0.7797568864422527;
    msg.var_x = 0.4055990982282277;
    msg.var_y = 0.0016942859779790487;
    msg.distance = 0.8203450321408104;

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
    msg.setTimeStamp(0.9953211120182744);
    msg.setSource(33275U);
    msg.setSourceEntity(59U);
    msg.setDestination(17066U);
    msg.setDestinationEntity(202U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SMTCXGWVBODSMXHADFBRXMDUFAVZTGSXULPKQWCBXZCELBGBZZCGLOPIVWRIDMREKYEHJIFGHXXZUJYQOCCRJNNGLKOSQUOBZAPBDURMASHLRFTSLVDPMRGIYJSHJPCNZOCFJVTLJRYJWRJVI");
    tmp_msg_0.lat = 0.8055968631733774;
    tmp_msg_0.lon = 0.6571332293365084;
    tmp_msg_0.depth = 0.32049676661831605;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 12U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.668756242485692;
    msg.y = 0.004966145881679984;
    msg.var_x = 0.03306014527672374;
    msg.var_y = 0.4303020829821558;
    msg.distance = 0.6207066152321549;

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
    msg.setTimeStamp(0.5685795553025714);
    msg.setSource(38959U);
    msg.setSourceEntity(196U);
    msg.setDestination(27091U);
    msg.setDestinationEntity(0U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XRNOIHHHUXQLYRBTTMDCYDLOOYGEJXIABKXASPVIDNMGZSNDKEUIUNVRAMQBQIUTQCAPMQHEX");
    tmp_msg_0.lat = 0.014370105153409973;
    tmp_msg_0.lon = 0.022523351992009832;
    tmp_msg_0.depth = 0.8934998200275414;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 71U;
    tmp_msg_0.transponder_delay = 40U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6568712668652382;
    msg.y = 0.46852319234985296;
    msg.var_x = 0.20731181312013192;
    msg.var_y = 0.9780997985628024;
    msg.distance = 0.2696504893829764;

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
    msg.setTimeStamp(0.4732178434147717);
    msg.setSource(16016U);
    msg.setSourceEntity(41U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(49U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.7839157410307009);
    msg.setSource(61748U);
    msg.setSourceEntity(202U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(146U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.2522742800515626);
    msg.setSource(21835U);
    msg.setSourceEntity(190U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(225U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.025097832070891668);
    msg.setSource(48226U);
    msg.setSourceEntity(86U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(33U);
    msg.x = 0.46580174355346304;
    msg.y = 0.06255417347420655;
    msg.z = 0.22276298244821402;

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
    msg.setTimeStamp(0.09640885503702101);
    msg.setSource(46021U);
    msg.setSourceEntity(230U);
    msg.setDestination(53250U);
    msg.setDestinationEntity(44U);
    msg.x = 0.08436749977968616;
    msg.y = 0.0500182566131776;
    msg.z = 0.46945262744510574;

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
    msg.setTimeStamp(0.6479313774825317);
    msg.setSource(4972U);
    msg.setSourceEntity(108U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9813959109235941;
    msg.y = 0.48312446650373453;
    msg.z = 0.780746171073647;

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
    msg.setTimeStamp(0.6258761979130335);
    msg.setSource(40446U);
    msg.setSourceEntity(16U);
    msg.setDestination(8334U);
    msg.setDestinationEntity(227U);
    msg.value = 0.5851147023341478;

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
    msg.setTimeStamp(0.8716812415724705);
    msg.setSource(22354U);
    msg.setSourceEntity(136U);
    msg.setDestination(45872U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6742819933438123;

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
    msg.setTimeStamp(0.1725381767497497);
    msg.setSource(10352U);
    msg.setSourceEntity(125U);
    msg.setDestination(63176U);
    msg.setDestinationEntity(28U);
    msg.value = 0.615146982980876;

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
    msg.setTimeStamp(0.6016739436902176);
    msg.setSource(2545U);
    msg.setSourceEntity(226U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3798136278173553;
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
    msg.setTimeStamp(0.5866934421184434);
    msg.setSource(34186U);
    msg.setSourceEntity(39U);
    msg.setDestination(31411U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0005867886889381335;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.31777794699411277);
    msg.setSource(46731U);
    msg.setSourceEntity(160U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0656516017834361;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.8523664300609951);
    msg.setSource(59561U);
    msg.setSourceEntity(216U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(133U);
    msg.value = 0.05234515926695282;
    msg.speed_units = 225U;

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
    msg.setTimeStamp(0.5395178397794484);
    msg.setSource(62458U);
    msg.setSourceEntity(152U);
    msg.setDestination(17887U);
    msg.setDestinationEntity(229U);
    msg.value = 0.40714155992390433;
    msg.speed_units = 23U;

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
    msg.setTimeStamp(0.7341956851160756);
    msg.setSource(12045U);
    msg.setSourceEntity(103U);
    msg.setDestination(39711U);
    msg.setDestinationEntity(243U);
    msg.value = 0.05415453868878328;
    msg.speed_units = 24U;

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
    msg.setTimeStamp(0.058484057637187226);
    msg.setSource(49332U);
    msg.setSourceEntity(39U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(104U);
    msg.value = 0.9040199449010231;

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
    msg.setTimeStamp(0.5773051516491491);
    msg.setSource(22356U);
    msg.setSourceEntity(12U);
    msg.setDestination(25594U);
    msg.setDestinationEntity(33U);
    msg.value = 0.7948381050458674;

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
    msg.setTimeStamp(0.16037825605112865);
    msg.setSource(53822U);
    msg.setSourceEntity(184U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(170U);
    msg.value = 0.23158220531905027;

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
    msg.setTimeStamp(0.10070559537740875);
    msg.setSource(58000U);
    msg.setSourceEntity(168U);
    msg.setDestination(48208U);
    msg.setDestinationEntity(198U);
    msg.value = 0.659660449255648;

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
    msg.setTimeStamp(0.8522026390568722);
    msg.setSource(60346U);
    msg.setSourceEntity(108U);
    msg.setDestination(21366U);
    msg.setDestinationEntity(116U);
    msg.value = 0.15535561757186556;

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
    msg.setTimeStamp(0.5984093575602366);
    msg.setSource(30012U);
    msg.setSourceEntity(37U);
    msg.setDestination(31802U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8615497062913366;

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
    msg.setTimeStamp(0.694435479204481);
    msg.setSource(29157U);
    msg.setSourceEntity(227U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(3U);
    msg.value = 0.3238142171577165;

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
    msg.setTimeStamp(0.283864310376718);
    msg.setSource(42832U);
    msg.setSourceEntity(78U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3176171651974692;

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
    msg.setTimeStamp(0.5043105880412586);
    msg.setSource(58011U);
    msg.setSourceEntity(182U);
    msg.setDestination(33847U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6203102471307093;

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
    msg.setTimeStamp(0.8135929161809713);
    msg.setSource(9983U);
    msg.setSourceEntity(112U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(218U);
    msg.start_lat = 0.8081476982301927;
    msg.start_lon = 0.4342354490083362;
    msg.start_z = 0.7546216625549229;
    msg.start_z_units = 222U;
    msg.end_lat = 0.9614840789408564;
    msg.end_lon = 0.829310703038997;
    msg.end_z = 0.20712091871758864;
    msg.end_z_units = 91U;
    msg.speed = 0.800398050907799;
    msg.speed_units = 139U;
    msg.lradius = 0.7360617590498952;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.31343624862148534);
    msg.setSource(20209U);
    msg.setSourceEntity(166U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(210U);
    msg.start_lat = 0.5489792387078722;
    msg.start_lon = 0.20883257983622383;
    msg.start_z = 0.27530728696483286;
    msg.start_z_units = 0U;
    msg.end_lat = 0.37895503035731515;
    msg.end_lon = 0.7063427514570582;
    msg.end_z = 0.3764327794382979;
    msg.end_z_units = 70U;
    msg.speed = 0.34557313404751944;
    msg.speed_units = 113U;
    msg.lradius = 0.24304095963126016;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.8851136043339037);
    msg.setSource(13192U);
    msg.setSourceEntity(9U);
    msg.setDestination(19546U);
    msg.setDestinationEntity(125U);
    msg.start_lat = 0.47130517795831506;
    msg.start_lon = 0.21662556337015648;
    msg.start_z = 0.6143468452330071;
    msg.start_z_units = 94U;
    msg.end_lat = 0.8040353258812009;
    msg.end_lon = 0.1393232960716252;
    msg.end_z = 0.18498148392565117;
    msg.end_z_units = 169U;
    msg.speed = 0.8085100975767049;
    msg.speed_units = 229U;
    msg.lradius = 0.7635606554540192;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.9275075512240056);
    msg.setSource(10198U);
    msg.setSourceEntity(171U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(184U);
    msg.x = 0.46418895024561924;
    msg.y = 0.25397539196426233;
    msg.z = 0.933439906388721;
    msg.k = 0.37891979308809476;
    msg.m = 0.3779980976793752;
    msg.n = 0.06572269308006884;
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
    msg.setTimeStamp(0.5506989822214011);
    msg.setSource(18130U);
    msg.setSourceEntity(56U);
    msg.setDestination(25184U);
    msg.setDestinationEntity(174U);
    msg.x = 0.23036104991899564;
    msg.y = 0.47497280969950806;
    msg.z = 0.944387378325851;
    msg.k = 0.7796851258049371;
    msg.m = 0.7166028652089496;
    msg.n = 0.3601397913303933;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.3426576075696175);
    msg.setSource(63416U);
    msg.setSourceEntity(153U);
    msg.setDestination(15073U);
    msg.setDestinationEntity(96U);
    msg.x = 0.09848183155143486;
    msg.y = 0.23057917607335965;
    msg.z = 0.4939753028639591;
    msg.k = 0.8363802694822872;
    msg.m = 0.389175234053717;
    msg.n = 0.9536439856698415;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.9515659236052019);
    msg.setSource(57782U);
    msg.setSourceEntity(167U);
    msg.setDestination(59789U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6411581742715272;

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
    msg.setTimeStamp(0.4315927336127646);
    msg.setSource(26997U);
    msg.setSourceEntity(96U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7941138632171759;

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
    msg.setTimeStamp(0.618425561208443);
    msg.setSource(54417U);
    msg.setSourceEntity(25U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(201U);
    msg.value = 0.4868575627547982;

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
    msg.setTimeStamp(0.5060493859948273);
    msg.setSource(32553U);
    msg.setSourceEntity(106U);
    msg.setDestination(16885U);
    msg.setDestinationEntity(63U);
    msg.u = 0.06504059243806515;
    msg.v = 0.2924788777477274;
    msg.w = 0.9204119105875146;
    msg.p = 0.6691354055391342;
    msg.q = 0.46729171856960106;
    msg.r = 0.31941445532086876;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.06593883090932262);
    msg.setSource(11882U);
    msg.setSourceEntity(33U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(247U);
    msg.u = 0.7502744187910955;
    msg.v = 0.9904373121710317;
    msg.w = 0.6670005562320444;
    msg.p = 0.15948857532181993;
    msg.q = 0.8896840957396427;
    msg.r = 0.8101799530826659;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.9423706613103561);
    msg.setSource(41139U);
    msg.setSourceEntity(177U);
    msg.setDestination(27709U);
    msg.setDestinationEntity(54U);
    msg.u = 0.6651414385165938;
    msg.v = 0.706556608608553;
    msg.w = 0.5166038171110329;
    msg.p = 0.29554569864893243;
    msg.q = 0.24369926163741207;
    msg.r = 0.2590345888395247;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.04576376775756652);
    msg.setSource(50465U);
    msg.setSourceEntity(7U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(62U);
    msg.start_lat = 0.8788156655825065;
    msg.start_lon = 0.19508661917643744;
    msg.start_z = 0.8136070096771485;
    msg.start_z_units = 44U;
    msg.end_lat = 0.5526236110624589;
    msg.end_lon = 0.7585102849010329;
    msg.end_z = 0.8031554440835214;
    msg.end_z_units = 229U;
    msg.lradius = 0.7172116394033615;
    msg.flags = 243U;
    msg.x = 0.3790681804646;
    msg.y = 0.6053672431092164;
    msg.z = 0.7699533992249208;
    msg.vx = 0.5238536012244525;
    msg.vy = 0.8291762395203337;
    msg.vz = 0.19169569919254636;
    msg.course_error = 0.9988359035207894;
    msg.eta = 13026U;

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
    msg.setTimeStamp(0.6133967537391453);
    msg.setSource(63610U);
    msg.setSourceEntity(29U);
    msg.setDestination(34087U);
    msg.setDestinationEntity(216U);
    msg.start_lat = 0.9995074077786381;
    msg.start_lon = 0.920522132098586;
    msg.start_z = 0.16172871403168487;
    msg.start_z_units = 236U;
    msg.end_lat = 0.933494233663054;
    msg.end_lon = 0.6933548280102493;
    msg.end_z = 0.9754284920370803;
    msg.end_z_units = 91U;
    msg.lradius = 0.9904853670567813;
    msg.flags = 193U;
    msg.x = 0.9871364441022389;
    msg.y = 0.48475964459949694;
    msg.z = 0.9588207418656379;
    msg.vx = 0.9563785383637823;
    msg.vy = 0.21101133260956895;
    msg.vz = 0.7082393219235786;
    msg.course_error = 0.31028363385184476;
    msg.eta = 40494U;

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
    msg.setTimeStamp(0.3925930043796656);
    msg.setSource(42076U);
    msg.setSourceEntity(171U);
    msg.setDestination(10745U);
    msg.setDestinationEntity(113U);
    msg.start_lat = 0.4200266215063251;
    msg.start_lon = 0.06838109741915588;
    msg.start_z = 0.03212399759361928;
    msg.start_z_units = 42U;
    msg.end_lat = 0.13124383064094447;
    msg.end_lon = 0.7357389752473386;
    msg.end_z = 0.06973591069516782;
    msg.end_z_units = 149U;
    msg.lradius = 0.604089683763438;
    msg.flags = 19U;
    msg.x = 0.5925846004802011;
    msg.y = 0.1486643226361325;
    msg.z = 0.7646264692815875;
    msg.vx = 0.8101700213267458;
    msg.vy = 0.1806478897316275;
    msg.vz = 0.058815809198230706;
    msg.course_error = 0.9278485296977461;
    msg.eta = 7165U;

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
    msg.setTimeStamp(0.846766061433209);
    msg.setSource(50441U);
    msg.setSourceEntity(144U);
    msg.setDestination(2551U);
    msg.setDestinationEntity(43U);
    msg.k = 0.6244892761452217;
    msg.m = 0.22269059114094736;
    msg.n = 0.05180864602131008;

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
    msg.setTimeStamp(0.25969483968326557);
    msg.setSource(65481U);
    msg.setSourceEntity(86U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(228U);
    msg.k = 0.038921310768750605;
    msg.m = 0.9946303702281374;
    msg.n = 0.9297997588992849;

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
    msg.setTimeStamp(0.4785554429809188);
    msg.setSource(12183U);
    msg.setSourceEntity(35U);
    msg.setDestination(56418U);
    msg.setDestinationEntity(94U);
    msg.k = 0.2357164479578553;
    msg.m = 0.542373617100171;
    msg.n = 0.20414447009209746;

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
    msg.setTimeStamp(0.5419478019648567);
    msg.setSource(46664U);
    msg.setSourceEntity(93U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(247U);
    msg.p = 0.7648502857087627;
    msg.i = 0.7547296074192674;
    msg.d = 0.04785550375878511;
    msg.a = 0.2461189774836281;

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
    msg.setTimeStamp(0.3197233422479494);
    msg.setSource(30080U);
    msg.setSourceEntity(180U);
    msg.setDestination(48052U);
    msg.setDestinationEntity(217U);
    msg.p = 0.9668047915363152;
    msg.i = 0.42964365343888034;
    msg.d = 0.9665431948779262;
    msg.a = 0.33251411985075496;

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
    msg.setTimeStamp(0.8786498391452578);
    msg.setSource(30772U);
    msg.setSourceEntity(136U);
    msg.setDestination(22883U);
    msg.setDestinationEntity(199U);
    msg.p = 0.7776013216290084;
    msg.i = 0.1594123496058184;
    msg.d = 0.04300856771520811;
    msg.a = 0.866011525859675;

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
    msg.setTimeStamp(0.3853776829397513);
    msg.setSource(31992U);
    msg.setSourceEntity(111U);
    msg.setDestination(27473U);
    msg.setDestinationEntity(142U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.796984699700094);
    msg.setSource(57473U);
    msg.setSourceEntity(96U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(110U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.2389956004488204);
    msg.setSource(54306U);
    msg.setSourceEntity(134U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(252U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.6532958693376449);
    msg.setSource(608U);
    msg.setSourceEntity(244U);
    msg.setDestination(692U);
    msg.setDestinationEntity(160U);
    msg.timeout = 43915U;
    msg.lat = 0.8212834294340807;
    msg.lon = 0.829630512443527;
    msg.z = 0.8183354722909786;
    msg.z_units = 212U;
    msg.speed = 0.6659368851291116;
    msg.speed_units = 18U;
    msg.roll = 0.7659658592905869;
    msg.pitch = 0.24374253508618948;
    msg.yaw = 0.7814385600915833;
    msg.custom.assign("YIVOXIRGCQEDOHALUJMAHXNTPCZXALGIJDZEUVGXFNEFBMOXNVHMCOMVJKWEQIYXZCJBRUNANEEIBWISWJSQKJPZTDMHAYTRVYDYGMPGFBWLSRHSWRNFUCLZTZFZGEFNPCFAKKYOXHMVPWOVQUZVUIFYHLYGUOBSPDTZGUTAGUCHKKFAPMQYOJUNARCBW");

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
    msg.setTimeStamp(0.1529850889773562);
    msg.setSource(1106U);
    msg.setSourceEntity(43U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(134U);
    msg.timeout = 30173U;
    msg.lat = 0.12668763943228722;
    msg.lon = 0.8933032875828508;
    msg.z = 0.899952453922036;
    msg.z_units = 202U;
    msg.speed = 0.594076202715588;
    msg.speed_units = 113U;
    msg.roll = 0.6034631566523987;
    msg.pitch = 0.1377415710454304;
    msg.yaw = 0.5124111484749674;
    msg.custom.assign("FYFUCFHBRXASBGDNIMGTJSWTNNIWLEZXWQPWEVTPFDEYXIWMDSZBMEWTKGFJSYUCEZBHMBQODRCHCWDAUNJHOKCCHIABLTVRLRHGARCOVCPMHDXGNZPDJSCQENZSLWOOVDPVGKUPVYGYGQAYCQNNXVQLHPEVFF");

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
    msg.setTimeStamp(0.8908415499867726);
    msg.setSource(27435U);
    msg.setSourceEntity(193U);
    msg.setDestination(25075U);
    msg.setDestinationEntity(89U);
    msg.timeout = 40483U;
    msg.lat = 0.574308184781705;
    msg.lon = 0.23694730779051343;
    msg.z = 0.5175891103837134;
    msg.z_units = 229U;
    msg.speed = 0.403310608287306;
    msg.speed_units = 239U;
    msg.roll = 0.1379127887801277;
    msg.pitch = 0.14823741063858709;
    msg.yaw = 0.36458214216007423;
    msg.custom.assign("ICPQZXUKTPQNYQWWUJGZZCQAPXUDGDLRFINYLOIQRRFDWKXMJYSEMWBNVNSPEEVVBSHAHLVHVMCMSPVGINVDLEYWXTHBAJIFTKKPOZRGLTNLOOKZJGFHOUJFTSR");

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
    msg.setTimeStamp(0.9961110468714154);
    msg.setSource(22594U);
    msg.setSourceEntity(142U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(79U);
    msg.timeout = 10362U;
    msg.lat = 0.5435004546092437;
    msg.lon = 0.3531752198632585;
    msg.z = 0.006661196872086883;
    msg.z_units = 97U;
    msg.speed = 0.6702746298419453;
    msg.speed_units = 218U;
    msg.duration = 22358U;
    msg.radius = 0.6641086169610445;
    msg.flags = 140U;
    msg.custom.assign("ABFDGLAOCRUTAYWMLZIWWRCNCKYQIRBDCVPVDGYEVHMXSXJDSQNKGIBURCKYKYKO");

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
    msg.setTimeStamp(0.4859617086751189);
    msg.setSource(48087U);
    msg.setSourceEntity(199U);
    msg.setDestination(6413U);
    msg.setDestinationEntity(251U);
    msg.timeout = 18427U;
    msg.lat = 0.9311894319118399;
    msg.lon = 0.13778358850284844;
    msg.z = 0.2692059968371101;
    msg.z_units = 35U;
    msg.speed = 0.09220531126734954;
    msg.speed_units = 170U;
    msg.duration = 20106U;
    msg.radius = 0.4567992030720297;
    msg.flags = 79U;
    msg.custom.assign("ATPPGPWNBJEYVAERHWMAVNMSUSZZHILYIRTVEBFYOXFEXXAYTZWYEIISEGTOZJWNBECBVVXADHQKVILJOLKUODSVQSXLOGLFRZBJFNHLYZRJKPAUFMCUUGCFYGTQUQBASATKBJCAUDGRDTRDNMJPCJLGSFWCLIVPJDROQKUSNSRBCHHEWAQQXVQWNXG");

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
    msg.setTimeStamp(0.04270782848151122);
    msg.setSource(34959U);
    msg.setSourceEntity(107U);
    msg.setDestination(9789U);
    msg.setDestinationEntity(226U);
    msg.timeout = 3192U;
    msg.lat = 0.8146191918836545;
    msg.lon = 0.2576440012875254;
    msg.z = 0.3783536269279165;
    msg.z_units = 48U;
    msg.speed = 0.4568044568052435;
    msg.speed_units = 251U;
    msg.duration = 22582U;
    msg.radius = 0.3736738688109321;
    msg.flags = 180U;
    msg.custom.assign("WEASUMHVMHBGDJAQGIROPFZWIXCXXWDKKLJIMDEFCPUMRZQCQVNIQOJCUCKEUYTOGVTNKBVXQTIVBKSADMTXSONGXHZPSLIBGDOYDRRATXN");

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
    msg.setTimeStamp(0.8320945312631711);
    msg.setSource(55794U);
    msg.setSourceEntity(81U);
    msg.setDestination(39954U);
    msg.setDestinationEntity(170U);
    msg.custom.assign("IMVUYEPGBXMFTCBOLVLJTFQZIYUWWUGVDNNFXOKMTROWDAAXZIVPGKFTVKZCZVQRKQDBIDXSSSJJKQIMBSICGOHLGHFTLERTLHNYJEHGGGDHYCOXWMTMUNADOROLKWAPTXZWPQMDLRQOMSPWXBMVNOCYFTXLPANCASRYZRKE");

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
    msg.setTimeStamp(0.3270226661395026);
    msg.setSource(22277U);
    msg.setSourceEntity(134U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("KFMZSMHUDVBDIUOJGGHHPZYACQFBSBSNOSYBPDULPQKSFCYDVHVWTDPLAEIXDOWNENMVIJZGIWHFQTXUZBVZLAITW");

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
    msg.setTimeStamp(0.146464894495269);
    msg.setSource(23196U);
    msg.setSourceEntity(248U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("GWRFJDZIJQRUELDAUVWSNSPLVSMCKHJVMEAKZCXO");

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
    msg.setTimeStamp(0.18423016543109894);
    msg.setSource(51216U);
    msg.setSourceEntity(89U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(54U);
    msg.timeout = 52585U;
    msg.lat = 0.6570759567447388;
    msg.lon = 0.7062494127930119;
    msg.z = 0.34394110689464774;
    msg.z_units = 216U;
    msg.duration = 5295U;
    msg.speed = 0.4054025992791671;
    msg.speed_units = 119U;
    msg.type = 152U;
    msg.radius = 0.7040890148588508;
    msg.length = 0.5011544979434618;
    msg.bearing = 0.911696994036666;
    msg.direction = 254U;
    msg.custom.assign("EMBJHHVKLIGJELIJCMFEG");

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
    msg.setTimeStamp(0.4057243566099814);
    msg.setSource(55450U);
    msg.setSourceEntity(254U);
    msg.setDestination(59113U);
    msg.setDestinationEntity(4U);
    msg.timeout = 1335U;
    msg.lat = 0.5633278247959239;
    msg.lon = 0.07647564037589094;
    msg.z = 0.3779807356953473;
    msg.z_units = 107U;
    msg.duration = 25801U;
    msg.speed = 0.47419775150057586;
    msg.speed_units = 19U;
    msg.type = 120U;
    msg.radius = 0.5273483228273833;
    msg.length = 0.6201955814826736;
    msg.bearing = 0.04160757970508888;
    msg.direction = 3U;
    msg.custom.assign("WEVWMEDTDORSBPPRJFFMUPBEFYJPEGOPISHWYOYCGKNFMBTNKENXWJCRKXDXMOUZVUUKFQIHNGNUWGXTQOUWQGGDLEBKWDWVPHAQXACHRFIIJTQDASBINFNOHIJTHDRKOAGP");

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
    msg.setTimeStamp(0.7760973431829595);
    msg.setSource(46761U);
    msg.setSourceEntity(116U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(139U);
    msg.timeout = 61294U;
    msg.lat = 0.988095481223487;
    msg.lon = 0.9289979742658563;
    msg.z = 0.8220213544904237;
    msg.z_units = 3U;
    msg.duration = 36307U;
    msg.speed = 0.4201852772595859;
    msg.speed_units = 251U;
    msg.type = 163U;
    msg.radius = 0.34361018514285246;
    msg.length = 0.2516403768882324;
    msg.bearing = 0.8393477889012998;
    msg.direction = 172U;
    msg.custom.assign("YJWQHAVXFCLJKQHALSUORGEOUJOQOQPBYIVIYTEDDEEWZTKJBPXUBPGLDERQBOADSVBXKFCSRCMWFZRHHQXWTXRYFHGISTXNMUCTDKQKTLCPTMJYATARZUPTXZZ");

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
    msg.setTimeStamp(0.7800267016975255);
    msg.setSource(31446U);
    msg.setSourceEntity(91U);
    msg.setDestination(20042U);
    msg.setDestinationEntity(64U);
    msg.duration = 4368U;
    msg.custom.assign("DGPHNNXPPRBMXUZQWFVEOMJGBIFZUSVTWOIKFAUTAVBGCYQZBKRCLRIEGBHTQSYUNXIKBDWTPRKEIYJELSYHDHTPWVMCOWMJDRZUWRQMQNNUPDAGAABTIWOXXUXQJMKMTFRDHHUYIFLUQBIJCQYAEVZSGHOSNEJHBPZGG");

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
    msg.setTimeStamp(0.7766280597134931);
    msg.setSource(16159U);
    msg.setSourceEntity(219U);
    msg.setDestination(8230U);
    msg.setDestinationEntity(118U);
    msg.duration = 6941U;
    msg.custom.assign("IQNKZMXDYTSUJNDRAOZLBQX");

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
    msg.setTimeStamp(0.7511137584633235);
    msg.setSource(62381U);
    msg.setSourceEntity(108U);
    msg.setDestination(62193U);
    msg.setDestinationEntity(156U);
    msg.duration = 53001U;
    msg.custom.assign("AFAHCNXIKHGGYZXTWXNKLZNUVAINHGJEUAMBMUGTPTSY");

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
    msg.setTimeStamp(0.9215696353538221);
    msg.setSource(16161U);
    msg.setSourceEntity(241U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(137U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6219063808496391;
    msg.control.set(tmp_msg_0);
    msg.duration = 37454U;
    msg.custom.assign("KYCWCIBUOPVWTDENBSNMPSHXBCZREDLIZJFKVYLFAQWRIELDQGHMQTHTGDIYDXIFCAOYLWQHBSBOVSDVGGCZAEZLJHTGIIHULZRBCMPFTAIGASXBMGAYJTJMCZYTKPHJOA");

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
    msg.setTimeStamp(0.20171415910117785);
    msg.setSource(60645U);
    msg.setSourceEntity(253U);
    msg.setDestination(49900U);
    msg.setDestinationEntity(147U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.15130882198992046;
    msg.control.set(tmp_msg_0);
    msg.duration = 51586U;
    msg.custom.assign("CPHZKTBGMSLIEFTPWPUEFURQJKOGBTNUHWGHYHCDTGIS");

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
    msg.setTimeStamp(0.3531961895660346);
    msg.setSource(33984U);
    msg.setSourceEntity(222U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(194U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.04161134699510749;
    msg.control.set(tmp_msg_0);
    msg.duration = 8538U;
    msg.custom.assign("YGMDPXFLZIKIKUOTNNCKPBACWAEWKPEZAJSHXRUFCJWFQLHYBQFDNWNQTBLHNTLIEEVHFRUUHVECFEORGPXTADVJITGVTSANAHYVRPBYGGGXMHRYPMQACXPONSSCRWEDMECZFGEBVIIXMIMIPHVXVPJUGZAGWURTGYHLZUZIDQDTFAUM");

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
    msg.setTimeStamp(0.842130859431815);
    msg.setSource(24623U);
    msg.setSourceEntity(87U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(84U);
    msg.timeout = 58687U;
    msg.lat = 0.34523806302531856;
    msg.lon = 0.25946568172096285;
    msg.z = 0.24677941845447482;
    msg.z_units = 111U;
    msg.speed = 0.9290395803720034;
    msg.speed_units = 137U;
    msg.bearing = 0.7630958210429607;
    msg.cross_angle = 0.5913686174717623;
    msg.width = 0.17388274756575728;
    msg.length = 0.5861359539244251;
    msg.hstep = 0.15845892000793493;
    msg.coff = 203U;
    msg.alternation = 208U;
    msg.flags = 59U;
    msg.custom.assign("VQLGOYMQFHDNSIJGLUZJBSQXHDQIMXBUVMNRKZEWOOWWDTUPOFJHVTYFTJOPMUYHDTCEMPGKPBSZARHOIKCANIRVQZWALJATMFJEDBTLMYSTLBRGEWGNKZWRDNLJEVNXEWXTCUVBXBRDZGLAEPRASFSEDHHPICYZQUCFFZQWKKXKRJLIDUZTYOSXNUYAUZHQXIGLPLGMCOIGSOAMBOAFIKFUDCCKSHMBYVXNTKSXNVRPCIRPNEAJYW");

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
    msg.setTimeStamp(0.7157710992350641);
    msg.setSource(19771U);
    msg.setSourceEntity(150U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(62U);
    msg.timeout = 36498U;
    msg.lat = 0.08388921448135866;
    msg.lon = 0.08955488319861205;
    msg.z = 0.07635715093465589;
    msg.z_units = 27U;
    msg.speed = 0.8487379390905424;
    msg.speed_units = 57U;
    msg.bearing = 0.803214400789348;
    msg.cross_angle = 0.2463751147382518;
    msg.width = 0.41706491353982633;
    msg.length = 0.38251925008968346;
    msg.hstep = 0.0569818701680046;
    msg.coff = 72U;
    msg.alternation = 120U;
    msg.flags = 140U;
    msg.custom.assign("BVMRAJLGKLOSJROVKPPDWQWZQKPVYYNAGOKXJRZSHTHBZRSRNCEWDMYVXESYNICSFJIQGUCOUVEIFASFRRQQWWHUEYTEHBEGSJFIMWUBIRQFSQZZNKUBLODDAFCOORUPFTIKLDGIFTKXMTAHMOWBXPJMDCNLVBEZOCBJPWNWXDKHALTRHXMOGAPVTINUXNCXIYEDIBUDGXAVP");

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
    msg.setTimeStamp(0.8662985896268518);
    msg.setSource(33479U);
    msg.setSourceEntity(132U);
    msg.setDestination(14432U);
    msg.setDestinationEntity(185U);
    msg.timeout = 2654U;
    msg.lat = 0.7629700826970479;
    msg.lon = 0.01943800524143524;
    msg.z = 0.5038467795901976;
    msg.z_units = 21U;
    msg.speed = 0.0824955463245498;
    msg.speed_units = 164U;
    msg.bearing = 0.32948382056567005;
    msg.cross_angle = 0.5121927885466805;
    msg.width = 0.5675202659991643;
    msg.length = 0.946734255791803;
    msg.hstep = 0.10145300713948191;
    msg.coff = 53U;
    msg.alternation = 212U;
    msg.flags = 164U;
    msg.custom.assign("IEUJATCJVDMQYLCTPGBRFCYDQBHGRITRBMQAYOOKQVHHYLGQMIBXPXDURJNLAGHTLATPNOYXDZWTXHEVJYIZWGJSDFDPUGMOOHJSMCGCEKWCIZEOZVPRLNQRZORFJEMYYMAMFTUBRFSHZKULKVTZBDNA");

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
    msg.setTimeStamp(0.6938254815621866);
    msg.setSource(40909U);
    msg.setSourceEntity(97U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(113U);
    msg.timeout = 8510U;
    msg.lat = 0.03158018413404862;
    msg.lon = 0.23301486240583424;
    msg.z = 0.5172118470330572;
    msg.z_units = 57U;
    msg.speed = 0.6803605012622396;
    msg.speed_units = 149U;
    msg.custom.assign("YPLLIRIKDHCDHFDEWLEMMMTLJGABVHIXGMIBEJJSNIWPJFHPYYEMZLCDGFEKYJPBAGWOSTYGVOKBAQCPZY");

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
    msg.setTimeStamp(0.15419932909045853);
    msg.setSource(691U);
    msg.setSourceEntity(185U);
    msg.setDestination(8340U);
    msg.setDestinationEntity(233U);
    msg.timeout = 20275U;
    msg.lat = 0.39178336491465815;
    msg.lon = 0.7062354198057447;
    msg.z = 0.7700035250151064;
    msg.z_units = 81U;
    msg.speed = 0.3668813833983212;
    msg.speed_units = 138U;
    msg.custom.assign("YNYIUNXKGTREPOVZEOTITWFERODBOGYUSOBVXPZTDOCHCUEQLSGNMAEHKZJCAASWRYYRDZMHGOOWVJSWGVLRZVMBPCURZILGTGPWZYHDCNLFKFURWDUKNZVMTPBVXEMQMWRABHNUCIIRELSHXVFJPZYPDQJHYBJQNLWYHAIBMMBITAJFKIEKSXPLQELH");

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
    msg.setTimeStamp(0.17624038656592111);
    msg.setSource(39397U);
    msg.setSourceEntity(210U);
    msg.setDestination(15115U);
    msg.setDestinationEntity(94U);
    msg.timeout = 57153U;
    msg.lat = 0.09274702124706813;
    msg.lon = 0.56986109944339;
    msg.z = 0.19208192653808498;
    msg.z_units = 120U;
    msg.speed = 0.2801895342467492;
    msg.speed_units = 129U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9536817770813688;
    tmp_msg_0.y = 0.8007516655369314;
    tmp_msg_0.z = 0.7087286553028737;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EGUKPKPZGQKQZNDCZOROSDBJASGRZAIVLCWYZSAQHDVIKJFWFWTNAEMLCDLSTLNVMXVXNOB");

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
    msg.setTimeStamp(0.601981698237956);
    msg.setSource(23951U);
    msg.setSourceEntity(114U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(173U);
    msg.x = 0.967978254456198;
    msg.y = 0.24250804997578812;
    msg.z = 0.15364387049514883;

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
    msg.setTimeStamp(0.6152541357544504);
    msg.setSource(50025U);
    msg.setSourceEntity(74U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(179U);
    msg.x = 0.9004218556867561;
    msg.y = 0.7434300622231359;
    msg.z = 0.5149686766437348;

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
    msg.setTimeStamp(0.8688373468294677);
    msg.setSource(48039U);
    msg.setSourceEntity(121U);
    msg.setDestination(51672U);
    msg.setDestinationEntity(60U);
    msg.x = 0.39656053500100874;
    msg.y = 0.97987793543558;
    msg.z = 0.7003068132651614;

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
    msg.setTimeStamp(0.6195374476618972);
    msg.setSource(53650U);
    msg.setSourceEntity(13U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(180U);
    msg.timeout = 10649U;
    msg.lat = 0.08638163911749142;
    msg.lon = 0.530171224707993;
    msg.z = 0.754627331352573;
    msg.z_units = 57U;
    msg.amplitude = 0.39763820762098434;
    msg.pitch = 0.7795734222868455;
    msg.speed = 0.40349273805714336;
    msg.speed_units = 203U;
    msg.custom.assign("HBBDXMPUIEVXHRSLWMBRODYYLKHJRIBRIBTVMVOSQGTTEXXEDANQIHONFBEQSGKVWQZLHONQQIFRBPYPTWRUAJNJGQJLCKACUGNYSHIKSPPAJ");

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
    msg.setTimeStamp(0.9933373085962521);
    msg.setSource(54608U);
    msg.setSourceEntity(12U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(189U);
    msg.timeout = 30200U;
    msg.lat = 0.09292784027353085;
    msg.lon = 0.833807944935733;
    msg.z = 0.24878179941858158;
    msg.z_units = 12U;
    msg.amplitude = 0.9947678438457066;
    msg.pitch = 0.7666766746432565;
    msg.speed = 0.9700772613071296;
    msg.speed_units = 25U;
    msg.custom.assign("PJLQAHBZOCNGWMTUIDKFKOONTETFLZCZMVYQWUYZIRAFJWRZINOIRLTGJSQGCLWLAXSSRXENKUJVPEAWDMBGXFQOTCMPXNGZLXEUZOQDBSJDOWEJRAHDBHPKEMXQWAVYHUBIDFPXGBYJMBEMTPCTMHAWJDXUNKKEYDVGBGZFBCYROHHHXJVLZSVMCVCWVUKPSYQKGIUZQNASLPDELJAKWNIQRSBFNFFRHCKRIIRYSLMHGTECTUUFXVYPAN");

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
    msg.setTimeStamp(0.2228634989849989);
    msg.setSource(9440U);
    msg.setSourceEntity(135U);
    msg.setDestination(6983U);
    msg.setDestinationEntity(120U);
    msg.timeout = 46785U;
    msg.lat = 0.3431216236105864;
    msg.lon = 0.7460301926607479;
    msg.z = 0.5296438563283484;
    msg.z_units = 68U;
    msg.amplitude = 0.30143334996570514;
    msg.pitch = 0.8261370437354221;
    msg.speed = 0.7144832470956618;
    msg.speed_units = 172U;
    msg.custom.assign("QHUPIUXPOLWJYYZZSKSAJFFVMRNLEEWNDKOZIYQXQTCIHDNHCPZEH");

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
    msg.setTimeStamp(0.7339073083467554);
    msg.setSource(1666U);
    msg.setSourceEntity(121U);
    msg.setDestination(15523U);
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
    msg.setTimeStamp(0.4550677205392105);
    msg.setSource(18359U);
    msg.setSourceEntity(239U);
    msg.setDestination(645U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.6785663093179642);
    msg.setSource(24012U);
    msg.setSourceEntity(100U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.20662897191974205);
    msg.setSource(56019U);
    msg.setSourceEntity(110U);
    msg.setDestination(1058U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.12600670252792356;
    msg.lon = 0.48881642082623067;
    msg.z = 0.7586395213289102;
    msg.z_units = 213U;
    msg.radius = 0.17448746871224496;
    msg.duration = 64999U;
    msg.speed = 0.2723503418697468;
    msg.speed_units = 141U;
    msg.custom.assign("SNJJXBORGCDIKGOUIVTKBBBVHGCSHKQBFVFSKJNLVZZLMGZPGUFRTGACBYBYEZMKLPHSHMISQYWEMTX");

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
    msg.setTimeStamp(0.15782843216359232);
    msg.setSource(48832U);
    msg.setSourceEntity(178U);
    msg.setDestination(61499U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.8378383068531076;
    msg.lon = 0.055311042555860834;
    msg.z = 0.5881492484488318;
    msg.z_units = 145U;
    msg.radius = 0.4090008608989316;
    msg.duration = 40912U;
    msg.speed = 0.47826220400602004;
    msg.speed_units = 201U;
    msg.custom.assign("UPQXLNUIBUAFBDHRYMVKPBFOXKZYPSCHAJCJPVRRVZZEKEWIGDSITEWXZPRVOOJKXCCYCGWKVGHPURJILDOVDLIBGWA");

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
    msg.setTimeStamp(0.06331282190286414);
    msg.setSource(7105U);
    msg.setSourceEntity(172U);
    msg.setDestination(53903U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.4813660338810736;
    msg.lon = 0.9516744956687965;
    msg.z = 0.2941223234694472;
    msg.z_units = 84U;
    msg.radius = 0.16757568614253027;
    msg.duration = 4716U;
    msg.speed = 0.18339136919054855;
    msg.speed_units = 144U;
    msg.custom.assign("GTWPTEBILYAXOTSBVJESURJVWKLXHXMLAVPZDJODRDGTQGDPJJMSSJMVVHEMHCJCIBFPWKNWXGNPVNHCZCYQ");

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
    msg.setTimeStamp(0.12906940673921086);
    msg.setSource(7157U);
    msg.setSourceEntity(30U);
    msg.setDestination(48012U);
    msg.setDestinationEntity(98U);
    msg.timeout = 64637U;
    msg.flags = 231U;
    msg.lat = 0.24692479210105067;
    msg.lon = 0.9092218145586862;
    msg.start_z = 0.873338355060033;
    msg.start_z_units = 146U;
    msg.end_z = 0.2060311018405041;
    msg.end_z_units = 160U;
    msg.radius = 0.440309107176725;
    msg.speed = 0.04714659798927856;
    msg.speed_units = 234U;
    msg.custom.assign("QXYDFSGAQYINLOTPE");

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
    msg.setTimeStamp(0.7439287149709758);
    msg.setSource(12958U);
    msg.setSourceEntity(84U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(143U);
    msg.timeout = 4422U;
    msg.flags = 146U;
    msg.lat = 0.4244789021530532;
    msg.lon = 0.42724393081743184;
    msg.start_z = 0.7995790059284621;
    msg.start_z_units = 253U;
    msg.end_z = 0.526103752046441;
    msg.end_z_units = 12U;
    msg.radius = 0.7120917361939173;
    msg.speed = 0.3423829619837303;
    msg.speed_units = 4U;
    msg.custom.assign("CEZVASXDBTJUGQZFLVOLSBKDJGWYIAYBKDKMCEEWTUDFJISSZQDSZPEOPWHPVRNHEHYNKJXTJPQTKFACRXTTXRAWVXOQJFOKERQVWGXICQPLEZTMWOHSRYADEHTUAOCIXNGLNFYFZBUAQEAICRNDUHORFULLGRLMJZBFIZGXKMNSCNYUVYFPSUPXLCQBBB");

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
    msg.setTimeStamp(0.5581476053179694);
    msg.setSource(46794U);
    msg.setSourceEntity(136U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(210U);
    msg.timeout = 49024U;
    msg.flags = 173U;
    msg.lat = 0.1279011597152393;
    msg.lon = 0.2835051218476258;
    msg.start_z = 0.03549508456145689;
    msg.start_z_units = 203U;
    msg.end_z = 0.6451620152044747;
    msg.end_z_units = 185U;
    msg.radius = 0.8242967741954613;
    msg.speed = 0.36893177836774205;
    msg.speed_units = 124U;
    msg.custom.assign("EQWUXTDMBZLNQWKTSYGNISMBUPXVITJUAXRNPQJHFBJUFQEGYKWFQXNRJCKUNHAYEBICYKISEIWLWGZDNYMCDVSVGQPTOEMKBKRHZKMAFBHDDOSBTPCBTCISJ");

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
    msg.setTimeStamp(0.22110988294863132);
    msg.setSource(57938U);
    msg.setSourceEntity(44U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(150U);
    msg.timeout = 4037U;
    msg.lat = 0.7752989284311577;
    msg.lon = 0.6988370062751297;
    msg.z = 0.05762931094543189;
    msg.z_units = 254U;
    msg.speed = 0.7623551539070195;
    msg.speed_units = 82U;
    msg.custom.assign("KLSXBJDZYBIJNEGRQJCQKZMJDYUQKDXXJQATKXKUPEMNVNRYUEHYISHBTLUPEMDSSQOARZCJGVACFPQWRWKTWDV");

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
    msg.setTimeStamp(0.2598526290498485);
    msg.setSource(42384U);
    msg.setSourceEntity(52U);
    msg.setDestination(51467U);
    msg.setDestinationEntity(48U);
    msg.timeout = 53334U;
    msg.lat = 0.9118121259473473;
    msg.lon = 0.7283472362203952;
    msg.z = 0.17395506569919938;
    msg.z_units = 33U;
    msg.speed = 0.7584140010703111;
    msg.speed_units = 88U;
    msg.custom.assign("KYIMUZUNQYMSHLDTEMUQTHHCVVLIPM");

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
    msg.setTimeStamp(0.362449149406495);
    msg.setSource(46291U);
    msg.setSourceEntity(199U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(26U);
    msg.timeout = 31875U;
    msg.lat = 0.7927931516477392;
    msg.lon = 0.32249890361220135;
    msg.z = 0.7467701672260557;
    msg.z_units = 246U;
    msg.speed = 0.5739370418231861;
    msg.speed_units = 0U;
    msg.custom.assign("LYVXOQHHFJTLKPHPYTBTQCSRUBNOBPNWYGWIFCHDBAQBTPECXEOECTEZGTVEKGEKRMQJSJMNBWFYCMILOIRLROQGPKASZPCRKZNLOIVPWXFJHXMDS");

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
    msg.setTimeStamp(0.5154767657841887);
    msg.setSource(6133U);
    msg.setSourceEntity(208U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(249U);
    msg.x = 0.17588533063032097;
    msg.y = 0.6267941153851181;
    msg.z = 0.48536180711461085;
    msg.t = 0.6812943564840471;

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
    msg.setTimeStamp(0.009960411783655698);
    msg.setSource(17360U);
    msg.setSourceEntity(228U);
    msg.setDestination(42976U);
    msg.setDestinationEntity(208U);
    msg.x = 0.8684861420632389;
    msg.y = 0.0942672040951531;
    msg.z = 0.1453755354623153;
    msg.t = 0.200373248132521;

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
    msg.setTimeStamp(0.8972427820926188);
    msg.setSource(35673U);
    msg.setSourceEntity(79U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(11U);
    msg.x = 0.9988423510074086;
    msg.y = 0.1407950789628032;
    msg.z = 0.7476896595139071;
    msg.t = 0.6481760819089339;

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
    msg.setTimeStamp(0.6200841093634609);
    msg.setSource(20785U);
    msg.setSourceEntity(253U);
    msg.setDestination(44826U);
    msg.setDestinationEntity(109U);
    msg.timeout = 30674U;
    msg.name.assign("BRIROVKUNOSUMTFFEEVBHYFRBEUFXWQTPWJLZJDECGNSGPMZQSQSYMOFSLDHGCANOIWAGTJOIKOGGLPFVLLVNPCLLANSQAHXUIWTJYCKJXJJRVAYQOEVIGBADTOPYZMFHHHCGNSCVSCIDTE");
    msg.custom.assign("ENUAFWCRIYVTGFFQPQCXOJBMXXSRWXJUQQUOYPXUOCPFNLIEYOKOGCKKBDXIUAUQCHLJELTOSZQTCCGBJIGAMVPTMAZHOCXUIPGHPMJBTQVYIYDNSPNJBHDILZJKDHXJDBEHHWDKEMGSGKCAHVQLWSADROBCYTZRRDHJGPA");

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
    msg.setTimeStamp(0.48711549334606385);
    msg.setSource(42103U);
    msg.setSourceEntity(116U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(58U);
    msg.timeout = 63942U;
    msg.name.assign("BHRCQRYJJZQPKLZVYIECBZIWBMEUGTWXQRD");
    msg.custom.assign("SHKOUXVNRZVZIJMNZDMGCGEPPCUNVQWTOBUOCUMQJTAPFLASHVWOERUDGAGVIDHVGVCEAWEZKHGFYLSCORQVKFOQTDRFDUZURLDJNYHLJXSHFDXWKKYJAOPHYWFYTPLVYMNYZETNSIEUDMMSGSRSPGIPQAXFXRWBNNBXEWKWWXSQTOXIZICCNJDQAQUOLWITDXMBLPFKZBIBZCJMYIGTCZHMEYBNVCJBAIPRRYJTFKT");

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
    msg.setTimeStamp(0.8747576391449152);
    msg.setSource(61291U);
    msg.setSourceEntity(237U);
    msg.setDestination(1620U);
    msg.setDestinationEntity(167U);
    msg.timeout = 8813U;
    msg.name.assign("TZZRUEPZIIIGOSJARAPTOVWLDEUXEZQHUJMDDBUAPVMYKMGVQWMWSKOIPEJLZBYTRCUHNAYNZWGVJTMXXWBFUPFGRWSFGUXSXDJJEHITKLETFAQYAMGRVTHNBBPGFFJOJCDCLQQZICGOZCYXNEFNHKBALQVYSFYYGRNZSKWRHLUWOSDVCCEK");
    msg.custom.assign("FVRCJRFDZDLWVMCCTZXCJEXSTHFTYEQGBLZLDGDQFLMUOGBMJILBOMARPGSVGRSQTKOQHSWKWVKVTUZKXIKWCABWFVQADVEQXNPETIHSMKUHYJEVBJYRWLFOZCGTBAUPIZNILHPICMSLRMHSLYBPTYPUXICPYXHYWRAAJLHJFDNDOCXUWNOBQUKCQNWZZREEXVKDOGKIFHWPZPAUKGYOED");

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
    msg.setTimeStamp(0.2913384046528369);
    msg.setSource(11192U);
    msg.setSourceEntity(162U);
    msg.setDestination(61628U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.48105722313278176;
    msg.lon = 0.5528248442397641;
    msg.z = 0.2637449225412588;
    msg.z_units = 161U;
    msg.speed = 0.04241120289482958;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6932832948944404;
    tmp_msg_0.y = 0.6420716826288472;
    tmp_msg_0.z = 0.19777955770425082;
    tmp_msg_0.t = 0.530543728342963;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 22999U;
    tmp_msg_1.off_x = 0.9077404440795948;
    tmp_msg_1.off_y = 0.4517851503388185;
    tmp_msg_1.off_z = 0.39370058685171894;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6151370522668823;
    msg.custom.assign("BSGXTGODMDAFMEHUDFWONWPYNREZPJVLDRFTYOZUPALWXWADPHZHNNXDKDRRATLCACJBLWKNBKFSBCPQORLSOCWOQCSICHUJWDMZTVVUTLUEEIRGMKSIXXDQEWIGQZTRRZRMEUEIVVHPTGAVUEBSZCQFJUPQWHAUABIBNBZYKVKTLSYKDIPGSMCSGQQKHXOFYJINXVJEJYOTKQMNMCMXEGBYVRIKYICMXJAJYWHNFF");

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
    msg.setTimeStamp(0.09998962549093693);
    msg.setSource(53387U);
    msg.setSourceEntity(210U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.48907680004022813;
    msg.lon = 0.5414868365829764;
    msg.z = 0.061113653562227976;
    msg.z_units = 212U;
    msg.speed = 0.800947553852096;
    msg.speed_units = 59U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48341U;
    tmp_msg_0.off_x = 0.16819045098202967;
    tmp_msg_0.off_y = 0.23266960574093765;
    tmp_msg_0.off_z = 0.47538667734787066;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.96587433029165;
    msg.custom.assign("NEDBWBOAJYRMDMSMWIYAAQJZZJN");

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
    msg.setTimeStamp(0.4364303210125403);
    msg.setSource(46031U);
    msg.setSourceEntity(183U);
    msg.setDestination(7018U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.8133133710528738;
    msg.lon = 0.3161591080442604;
    msg.z = 0.3754139446849767;
    msg.z_units = 203U;
    msg.speed = 0.16881832618716242;
    msg.speed_units = 84U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6772359494471683;
    tmp_msg_0.y = 0.1822157603653467;
    tmp_msg_0.z = 0.3740177258090446;
    tmp_msg_0.t = 0.9264028070918979;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42428U;
    tmp_msg_1.off_x = 0.635514896276837;
    tmp_msg_1.off_y = 0.9522301299065354;
    tmp_msg_1.off_z = 0.4180743866749137;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9207246718703899;
    msg.custom.assign("TKRELQIKDGWJTCKOEKXAVPCKRFVUBPYDJSOSUVLQZILSGAIXWOZKMPZZAYLH");

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
    msg.setTimeStamp(0.017705638900573306);
    msg.setSource(18354U);
    msg.setSourceEntity(211U);
    msg.setDestination(2012U);
    msg.setDestinationEntity(6U);
    msg.vid = 61166U;
    msg.off_x = 0.6292892917997299;
    msg.off_y = 0.018827310594793256;
    msg.off_z = 0.3835678660112317;

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
    msg.setTimeStamp(0.6152561477171262);
    msg.setSource(53034U);
    msg.setSourceEntity(181U);
    msg.setDestination(8650U);
    msg.setDestinationEntity(27U);
    msg.vid = 50882U;
    msg.off_x = 0.17228000157753687;
    msg.off_y = 0.46702984729648345;
    msg.off_z = 0.4986205855166229;

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
    msg.setTimeStamp(0.03353904965058452);
    msg.setSource(38095U);
    msg.setSourceEntity(36U);
    msg.setDestination(1301U);
    msg.setDestinationEntity(173U);
    msg.vid = 37168U;
    msg.off_x = 0.14808504032736525;
    msg.off_y = 0.4643341894780907;
    msg.off_z = 0.450444435980907;

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
    msg.setTimeStamp(0.7661275275924776);
    msg.setSource(53027U);
    msg.setSourceEntity(159U);
    msg.setDestination(15877U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.3981825088348583);
    msg.setSource(55977U);
    msg.setSourceEntity(58U);
    msg.setDestination(15808U);
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
    msg.setTimeStamp(0.37787448367253906);
    msg.setSource(63693U);
    msg.setSourceEntity(59U);
    msg.setDestination(19318U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.8619867722886263);
    msg.setSource(27197U);
    msg.setSourceEntity(152U);
    msg.setDestination(54127U);
    msg.setDestinationEntity(184U);
    msg.mid = 29233U;

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
    msg.setTimeStamp(0.8745532583092233);
    msg.setSource(14816U);
    msg.setSourceEntity(145U);
    msg.setDestination(61954U);
    msg.setDestinationEntity(170U);
    msg.mid = 20606U;

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
    msg.setTimeStamp(0.7076302411769584);
    msg.setSource(53460U);
    msg.setSourceEntity(118U);
    msg.setDestination(37312U);
    msg.setDestinationEntity(89U);
    msg.mid = 44544U;

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
    msg.setTimeStamp(0.01179581933695717);
    msg.setSource(47113U);
    msg.setSourceEntity(34U);
    msg.setDestination(415U);
    msg.setDestinationEntity(82U);
    msg.state = 216U;
    msg.eta = 19329U;
    msg.info.assign("DTJIRQQLAWZBSGWNZXMVSEKTYSPRJIHRGWLDNACFYEYTHTXDLCXJQLEOPTUEOUZEYRZLFHCVLXDWBPTDOGVIUIXWUDIPLRXFHSKNNARZINKQJUMKMAXPKZGEQXPQOYUXBJNZIHVJYDYTTWHGAVUITKLURSOSWGCGOBBQVNJEWLMKWCFXAFPQWSRKZLNBAYGFUFOGFSDMMNQEOPBJSEFYAAZQ");

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
    msg.setTimeStamp(0.983013872755447);
    msg.setSource(11706U);
    msg.setSourceEntity(148U);
    msg.setDestination(58776U);
    msg.setDestinationEntity(152U);
    msg.state = 200U;
    msg.eta = 3275U;
    msg.info.assign("UFNYXRIHPDVOKBRKUNIFOYJGCWSRUGDTCSKVHEOHIGTTGRLMQVJYGTXLNTPVXHWFYYCZIUMQNXQYOHBZMPXAWQYABYLVIUGDZMDIWNTUZKYADXHJZSMOUWWPQZGUDLRWSZUJTNEXPHRNHGBWMXFCPJJLGIZAFVPMCKDFJXLABPDOLJEBAK");

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
    msg.setTimeStamp(0.05743082345051009);
    msg.setSource(44659U);
    msg.setSourceEntity(172U);
    msg.setDestination(14579U);
    msg.setDestinationEntity(211U);
    msg.state = 101U;
    msg.eta = 13652U;
    msg.info.assign("VVKDMEGOUWENHJRHDJVIYMGHEOHKOUKZCEBZXWUIRMFFUJXKYXHHDNKGZBYYTFFGDEMWALUMKABZFAIZBLOARTMTUZCPISOMIBZANSYICBCHWBSAAXGOVNLDQQKRKGTTSNPRGCZUXDWRIHXECNFDZEFQYPOMWWMECOFDOTNPPDVJDRZASLVVKKJYUENWCIUCJWPBIQPTCHNXFFTLSUNVVJWQTLLIXGAGLQJYSOQRYEBGASPX");

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
    msg.setTimeStamp(0.7802333012954894);
    msg.setSource(52882U);
    msg.setSourceEntity(8U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(102U);
    msg.system = 10881U;
    msg.duration = 62434U;
    msg.speed = 0.24994479371559475;
    msg.speed_units = 12U;
    msg.x = 0.7454012734006699;
    msg.y = 0.06170071739605065;
    msg.z = 0.3458734862665219;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.5958238036771349);
    msg.setSource(24101U);
    msg.setSourceEntity(0U);
    msg.setDestination(37355U);
    msg.setDestinationEntity(137U);
    msg.system = 44525U;
    msg.duration = 985U;
    msg.speed = 0.45318731019782654;
    msg.speed_units = 107U;
    msg.x = 0.17474778383665446;
    msg.y = 0.4150824918217124;
    msg.z = 0.03163129701323386;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.24762380118970395);
    msg.setSource(13222U);
    msg.setSourceEntity(56U);
    msg.setDestination(56025U);
    msg.setDestinationEntity(102U);
    msg.system = 59359U;
    msg.duration = 62908U;
    msg.speed = 0.3029091167856168;
    msg.speed_units = 205U;
    msg.x = 0.10572994123688628;
    msg.y = 0.9715660680052883;
    msg.z = 0.48954925738085586;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.7360445358627083);
    msg.setSource(54274U);
    msg.setSourceEntity(189U);
    msg.setDestination(8703U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.8372782847864938;
    msg.lon = 0.3269948148883063;
    msg.speed = 0.8013427768097745;
    msg.speed_units = 79U;
    msg.duration = 37324U;
    msg.sys_a = 3622U;
    msg.sys_b = 30932U;
    msg.move_threshold = 0.20187942180571017;

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
    msg.setTimeStamp(0.985938470578679);
    msg.setSource(21118U);
    msg.setSourceEntity(123U);
    msg.setDestination(44520U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.706947655874208;
    msg.lon = 0.9473472617627909;
    msg.speed = 0.5024331027338932;
    msg.speed_units = 155U;
    msg.duration = 44507U;
    msg.sys_a = 22662U;
    msg.sys_b = 8972U;
    msg.move_threshold = 0.17200215468011437;

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
    msg.setTimeStamp(0.9866204260823879);
    msg.setSource(4935U);
    msg.setSourceEntity(203U);
    msg.setDestination(59183U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8246895701075809;
    msg.lon = 0.9829495907375311;
    msg.speed = 0.12641933855132748;
    msg.speed_units = 202U;
    msg.duration = 23292U;
    msg.sys_a = 58997U;
    msg.sys_b = 49062U;
    msg.move_threshold = 0.7352849676856837;

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
    msg.setTimeStamp(0.8170746159781189);
    msg.setSource(16507U);
    msg.setSourceEntity(171U);
    msg.setDestination(5882U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.3328130818384877;
    msg.lon = 0.5492655874415157;
    msg.z = 0.1593242437218192;
    msg.z_units = 242U;
    msg.speed = 0.7812436832843739;
    msg.speed_units = 76U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.12371094730683996;
    tmp_msg_0.lon = 0.9793710542175428;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QVKEJKFPIKNUOIRYCGVSULSDNTGWIRFBAECFAEVBHTMNVTRRTCJU");

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
    msg.setTimeStamp(0.21568408618275325);
    msg.setSource(32113U);
    msg.setSourceEntity(145U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.12104973590431933;
    msg.lon = 0.8575791475713309;
    msg.z = 0.43617369353365;
    msg.z_units = 62U;
    msg.speed = 0.8711239463369389;
    msg.speed_units = 86U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.29877642151901984;
    tmp_msg_0.lon = 0.5022292884275648;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OGARGHFLYUIVWKSQQZUPROYVRXZBTBSLTJFWI");

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
    msg.setTimeStamp(0.23725586282211797);
    msg.setSource(38891U);
    msg.setSourceEntity(108U);
    msg.setDestination(6922U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.8635448749635155;
    msg.lon = 0.5270033207770086;
    msg.z = 0.11038859416420976;
    msg.z_units = 38U;
    msg.speed = 0.38309844629981415;
    msg.speed_units = 63U;
    msg.custom.assign("JIHSOPYLCYNMXRWINEBSMVQXABJGQTMQOIDMPNJDUUMOQESLYFCSGFITCLLMIAYPGWJXJTTBKQWPFHBPVOSRVDXOKOUPYCMVQRZIMIYAGFZBMZLXKLVALXXYNDKOEWGCJAWENWBRASZDHDFNUHHCDRAYSNFCPJZHIYEVEWUCZDRSCKVRMEZHJZWKGEAUVOFXEWKJLLPCQOGXUNJYQNTPSAGZANBULTITRGPVQTVBWSU");

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
    msg.setTimeStamp(0.44761472292672766);
    msg.setSource(28287U);
    msg.setSourceEntity(222U);
    msg.setDestination(56231U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.5462240066299611;
    msg.lon = 0.798657342943777;

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
    msg.setTimeStamp(0.46523583525406154);
    msg.setSource(5698U);
    msg.setSourceEntity(190U);
    msg.setDestination(58937U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.34565240363353433;
    msg.lon = 0.1474372191945842;

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
    msg.setTimeStamp(0.34854251857476015);
    msg.setSource(14391U);
    msg.setSourceEntity(136U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5449588643869444;
    msg.lon = 0.1349372261290508;

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
    msg.setTimeStamp(0.28541856428196377);
    msg.setSource(55209U);
    msg.setSourceEntity(145U);
    msg.setDestination(60394U);
    msg.setDestinationEntity(13U);
    msg.timeout = 47663U;
    msg.lat = 0.34772156628182416;
    msg.lon = 0.10012839629285586;
    msg.z = 0.7107131452250136;
    msg.z_units = 186U;
    msg.pitch = 0.18553226909761467;
    msg.amplitude = 0.14497782000575177;
    msg.duration = 61071U;
    msg.speed = 0.8859817496349695;
    msg.speed_units = 5U;
    msg.radius = 0.7218966336298985;
    msg.direction = 97U;
    msg.custom.assign("GMLMCRKOTSJLHIPKGUPYHCCBIWVMQXBMXRYOQIEEDWRNUHFWUUKKFVNZJTVLXJJMSMCP");

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
    msg.setTimeStamp(0.057542151910280115);
    msg.setSource(12647U);
    msg.setSourceEntity(52U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(66U);
    msg.timeout = 56925U;
    msg.lat = 0.1818687069126631;
    msg.lon = 0.9371938052039165;
    msg.z = 0.18927867796633246;
    msg.z_units = 119U;
    msg.pitch = 0.02531277732481141;
    msg.amplitude = 0.16978513322534794;
    msg.duration = 65269U;
    msg.speed = 0.7763897040493056;
    msg.speed_units = 76U;
    msg.radius = 0.8408886637296349;
    msg.direction = 233U;
    msg.custom.assign("MQPLSPNKGNYGXPSXERQQMUPIUEPUUIYUJXFKBDQXNBPIMSWJGJRYRWGWHQACNOTNTJPQTMLMAFNYHHBTHYEHVRWSUUGZCTDOTNFWCZAJTDYBGBRLCHRLOKJSCVFIEKWJMKOEWORIHFLVOEFNFTOBVKRMYASHYZOVBXGDPDOXJZDAGFPLBAEQYFQDZNIDGMSZLKISORRDPAJLCAEECIAMXUQYZKTILWSXDACUGXTVLHBKXVH");

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
    msg.setTimeStamp(0.7267433600500913);
    msg.setSource(42324U);
    msg.setSourceEntity(126U);
    msg.setDestination(57920U);
    msg.setDestinationEntity(66U);
    msg.timeout = 13587U;
    msg.lat = 0.5121112083389212;
    msg.lon = 0.4278417150045274;
    msg.z = 0.4790246173138706;
    msg.z_units = 144U;
    msg.pitch = 0.7324046715318193;
    msg.amplitude = 0.129340835957638;
    msg.duration = 1361U;
    msg.speed = 0.9218307300377585;
    msg.speed_units = 12U;
    msg.radius = 0.7715548223645209;
    msg.direction = 177U;
    msg.custom.assign("JIIZDJSRJUVIWP");

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
    msg.setTimeStamp(0.5470504981808461);
    msg.setSource(5352U);
    msg.setSourceEntity(149U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(32U);
    msg.formation_name.assign("OUTFNZKTRTADPPDEEXSMXBVHHAVKESZPTWSSJNQPHZAZOKLHO");
    msg.reference_frame = 187U;
    msg.custom.assign("BNLKHCDOEQKHIFXKNHEZQAJJOOIYSKFKMIQAYSRTMILNEPXHQUJTJSDKWABVCDGYGFZRFKZRUXERQAIVMTUDXOLUACVLGUFZNPXYWRSSOVLFFUYOBRNBEYTLXZWLSOCEGFJXEVQSRQMMWSJVSWUXNTPWIDGCHGCCYRRBP");

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
    msg.setTimeStamp(0.888653263772811);
    msg.setSource(7055U);
    msg.setSourceEntity(155U);
    msg.setDestination(50112U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("UQLDBHEDRZRQMKXOZYFJPPSSFYLKQAJDRGRWYXPZZPRCXEOXHFVELYBZXSSBFOTJDHAUWQNHJHVKMAQUCUTVFNAIWGWGENGIRFIBVPBDBBCOGVOBEMUKKRUQIRKDIWYCMNXYAHOZUDLTKZKAAPUXHVETJZIQMGPYZNNFSQHYAHTWUZTCWXJJLTGJFIGSCRMCLMNNSS");
    msg.reference_frame = 26U;
    msg.custom.assign("DRHCZYUSEMEEKYZURVNJNLJLHIZIOIFIQGIYSTDQLAQSDXWYAZVCBFBCRUFOONXGBLAHMFWQGAGNKRRCHJOXVMFBAVHTBBBIMQJGUCLFIKSHBDWFPZVSSQCNXPFLWXVBEKHGRSIOYGNDPXOULJOUPTUXTKGJENMYOCTEZEMRCLEWQYTWDZCWHTGRKXKPYPZVIEYQVDFKUALCHDHJSWPMRAXGAZKVF");

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
    msg.setTimeStamp(0.570056655815674);
    msg.setSource(48004U);
    msg.setSourceEntity(225U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(213U);
    msg.formation_name.assign("KJCARLEMGVGLNTIDYXSCVBRPAIVDVGTGMZSQOMFXLUILHRJXUIFPMJVYFFJSWHQCWEHTXKPQJUMW");
    msg.reference_frame = 19U;
    msg.custom.assign("ZAYLLOGNUHFTSGRQGMGTBESVSTVITXZAKYYXPUZJTFNPNAMORHMKJBDCCWWBAUSE");

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
    msg.setTimeStamp(0.9645031957522139);
    msg.setSource(12723U);
    msg.setSourceEntity(213U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("BTYQKGHFCQKZXVNMFUMFPFSMBBGAZJNARZVYRBWLQHQHWIXWDUFODCBOYVMJJWMVCMEOTHFPYPGDIWILWCQWFREXMNDJJIOPYTAAYDFICROMELJGOGXAQSNPKTZCGRKIFWLLTYTFDHSUBKPTWUBANDOIUGPMVYTTILJVOBNIZRHOKNNEUSQRSJQAQEPHVXUKAXCGUJKSVEDRYUOG");
    msg.formation_name.assign("RAKWRFSLPGICBBAPCSQOR");
    msg.plan_id.assign("JZXBXMWIWDLVQBJDXCQKZOGJSQMKMBYLOYCGFSZDIRNWWRPHVXUKKHGWQBSELJKYTSJJMZYMPCQONXRMLHIJNDBETPCVOMBUXQRTRQADNK");
    msg.description.assign("DRKGSGNQCMGUCFABTUHVKSIFAQBOQLOPSMXFEILRHKUCUCMYQNJENQNJEKPFRVXKHLXDRJBBAWKTZXCLYVOYYXPPJMAIBCDFTY");
    msg.leader_speed = 0.6863450464466947;
    msg.leader_bank_lim = 0.052096835683730136;
    msg.pos_sim_err_lim = 0.3165166033914114;
    msg.pos_sim_err_wrn = 0.44969617526893657;
    msg.pos_sim_err_timeout = 32565U;
    msg.converg_max = 0.8799191620412926;
    msg.converg_timeout = 46396U;
    msg.comms_timeout = 61367U;
    msg.turb_lim = 0.47559734725646186;
    msg.custom.assign("OWLAMBKZLJWTIUJDQUNLRINMCTBIHSGCNGJADIHBFXCDAIEGZPVINREKFYNYVGVPOAWEBJJINHXXSJMWAQYFCDEFLZAMPABROWLYPYCQCASTDESSBLEXGWTQNMTKIMQNZUBQOMPFSKOLIOZXRVRWPHFZPFB");

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
    msg.setTimeStamp(0.4818579534658928);
    msg.setSource(58838U);
    msg.setSourceEntity(65U);
    msg.setDestination(14659U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("BIFLPIYUBNUKDHQAXFCBISRMMMBKCYOPGSXEDWISHSZJBSELH");
    msg.formation_name.assign("MELIIOGXEAXGPBCJQNKXEWCKBJOODVKYVPCLAQIRBLEFJEPUUQJXGHWZZXAYTKLXCDZBVJZZLNDRUVOIARIARGSYKCDJMDSULITGUVFSTLATMSNMFDHUPRJQVWMKWWXTLVHPCSBNQGFBWUNDTXUAKQXJCMDOTPBIFCOUNHLYBYIKXKMTQJPGCZYJVWDRYFBEAIRNOEEZVWQFOSBWSEQRZHRPNFSHVTSGHSZRYQACEMNYOKPIFZHDNHG");
    msg.plan_id.assign("YPMWNJOOHJRMRQCJDDSEMXJRVFGSCLKVWEAKYQWHHVBKYTWXZTMPRRMFDFOXVYXIAYRQUWEGOJOUJNMUZEHDFIPSLXBSUIETVAXERPDLUEPHBNLDIKGSOZ");
    msg.description.assign("VTXFQGWEKXOZOKHFMMIHNBCMJUUUXZNZSLCKTVLFEFBBTTIHOLCKZPMICLUEKQVQTTAVQYPSFGIGXWFAYIZTNYKCGJYSQDZQCEVVROWDXDVUCHPYGSYCWNOQIBKFXKJXWSAJJDGZYFGWJNSHPHRMNFPPAYBDAJVGFHERMWQMNZLOGJQHEXASEP");
    msg.leader_speed = 0.0538850495965153;
    msg.leader_bank_lim = 0.3032113361414617;
    msg.pos_sim_err_lim = 0.9643505834967199;
    msg.pos_sim_err_wrn = 0.5694006979315073;
    msg.pos_sim_err_timeout = 16751U;
    msg.converg_max = 0.9632070348381998;
    msg.converg_timeout = 44469U;
    msg.comms_timeout = 49817U;
    msg.turb_lim = 0.39259856402356685;
    msg.custom.assign("YOQFSGVXIMQOZKFTRTJSDSCHDKWRQNMYTRAOGDTICLWEKIYUYXTVFYPIFOPCSMEZNEBBBZOBQRLNQVQSCEHPALLWRUDXCAVXNCWPWXDGDMIGIOSWLNVMKZZXZXKVIEFDGRDTJBIYHPNOUJBJCAVHJKLEZDJLAVUWCVXRKLUAPYAIYBAVYDCOMBNRGNROAFHEWZMZRTWPIGBBUUPOGQSZEUCJSAMFHPUMQJWX");

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
    msg.setTimeStamp(0.5891243992217708);
    msg.setSource(12716U);
    msg.setSourceEntity(195U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("ELTOUFPLLVBIPNSKJRXFVOKYFBDWUAQSADSAYTOZVOYXCEVYRJVUTMECGNWJIGTZNDPUOLIEZEXLJORICKLGYMJKHLMQKZNHAHBJUEMDHSYLVXPBPHKIRDDANCOGUTFCHWXQZBYHIHMSXFVSBTFWSKALTCWGMU");
    msg.formation_name.assign("CEZFQYVDAHRSIEJHPKXWNKUDIOGVCJWWYDXUGLDADFQGRVLXOWCJFJZEJJQY");
    msg.plan_id.assign("AUDIUGUGKLKBCEINZWTECLSCVKIFYBSOVZWPNYQVCA");
    msg.description.assign("ZKTLNOERGWCRVDGLPBCWAMYAUDBHOBKQXSYCBSTVYIXQKQRMDIJWLLBJEQBZHY");
    msg.leader_speed = 0.3426430702642469;
    msg.leader_bank_lim = 0.7745541710542784;
    msg.pos_sim_err_lim = 0.7593958355655449;
    msg.pos_sim_err_wrn = 0.09411460490449397;
    msg.pos_sim_err_timeout = 34387U;
    msg.converg_max = 0.8244008522538581;
    msg.converg_timeout = 30525U;
    msg.comms_timeout = 54629U;
    msg.turb_lim = 0.12432804678724352;
    msg.custom.assign("AQBGPGKEZAORLAYRCTOOBBBGIDKLEIYYFUQYLRLCMPBIYOLUWJDZTMBZHNULGJPKRDTSKFIRBJBYLVHPAMAIXBKFCFWFYEWQNWOAMVUNHJEMOWECPWGPRFZVQOZAJTIXQDHKYCYWTFJDVQGTEFMXDARVJIOYMXUPGDPCTSIERQKVEIMMTDUHLUQWHXKNSNXTZSSZEFNJCSZHBQUWUGWV");

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
    msg.setTimeStamp(0.5205310410975095);
    msg.setSource(35072U);
    msg.setSourceEntity(204U);
    msg.setDestination(41878U);
    msg.setDestinationEntity(169U);
    msg.control_src = 9213U;
    msg.control_ent = 241U;
    msg.timeout = 0.19075709815352637;
    msg.loiter_radius = 0.7162508198137557;
    msg.altitude_interval = 0.11944289190400914;

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
    msg.setTimeStamp(0.6051438065857019);
    msg.setSource(881U);
    msg.setSourceEntity(54U);
    msg.setDestination(31485U);
    msg.setDestinationEntity(214U);
    msg.control_src = 19636U;
    msg.control_ent = 217U;
    msg.timeout = 0.39345735618439015;
    msg.loiter_radius = 0.05770312142358813;
    msg.altitude_interval = 0.7572161565362688;

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
    msg.setTimeStamp(0.27999011715929567);
    msg.setSource(5045U);
    msg.setSourceEntity(147U);
    msg.setDestination(33945U);
    msg.setDestinationEntity(0U);
    msg.control_src = 65325U;
    msg.control_ent = 146U;
    msg.timeout = 0.17387895448013524;
    msg.loiter_radius = 0.6385413742528395;
    msg.altitude_interval = 0.8447210249326914;

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
    msg.setTimeStamp(0.204199847893358);
    msg.setSource(61213U);
    msg.setSourceEntity(91U);
    msg.setDestination(33150U);
    msg.setDestinationEntity(220U);
    msg.flags = 247U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4887179308918854;
    tmp_msg_0.speed_units = 81U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.47946409106054066;
    tmp_msg_1.z_units = 145U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9890624306850818;
    msg.lon = 0.9414438272653489;
    msg.radius = 0.5373468195985512;

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
    msg.setTimeStamp(0.284410234114445);
    msg.setSource(23906U);
    msg.setSourceEntity(185U);
    msg.setDestination(30037U);
    msg.setDestinationEntity(167U);
    msg.flags = 164U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.32118846788385524;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.41856702741695506;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3453628607680661;
    msg.lon = 0.17953591865977103;
    msg.radius = 0.8379894868803753;

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
    msg.setTimeStamp(0.6851083744694321);
    msg.setSource(46795U);
    msg.setSourceEntity(84U);
    msg.setDestination(3068U);
    msg.setDestinationEntity(73U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.678022460623339;
    tmp_msg_0.speed_units = 250U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7119472884843826;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.026394524023787502;
    msg.lon = 0.47845016342160374;
    msg.radius = 0.8811213215059164;

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
    msg.setTimeStamp(0.12829441596053792);
    msg.setSource(11165U);
    msg.setSourceEntity(120U);
    msg.setDestination(34019U);
    msg.setDestinationEntity(152U);
    msg.control_src = 11762U;
    msg.control_ent = 240U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 247U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.042430033787054344;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6105578697779003;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5926041772431617;
    tmp_msg_0.lon = 0.6844081916697732;
    tmp_msg_0.radius = 0.7959503285986828;
    msg.reference.set(tmp_msg_0);
    msg.state = 134U;
    msg.proximity = 104U;

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
    msg.setTimeStamp(0.05755505345225953);
    msg.setSource(41059U);
    msg.setSourceEntity(207U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(1U);
    msg.control_src = 49491U;
    msg.control_ent = 190U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.06490435571873865;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.565038251728642;
    tmp_tmp_msg_0_1.z_units = 120U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.038866145692039944;
    tmp_msg_0.lon = 0.05607657739983152;
    tmp_msg_0.radius = 0.9186909857728951;
    msg.reference.set(tmp_msg_0);
    msg.state = 66U;
    msg.proximity = 133U;

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
    msg.setTimeStamp(0.04520496620138992);
    msg.setSource(26274U);
    msg.setSourceEntity(142U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(70U);
    msg.control_src = 27751U;
    msg.control_ent = 138U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9136033585283352;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11970496445234935;
    tmp_tmp_msg_0_1.z_units = 107U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.011799173001397989;
    tmp_msg_0.lon = 0.4077996870890348;
    tmp_msg_0.radius = 0.9048656283497893;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 236U;

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
    msg.setTimeStamp(0.19747985011333913);
    msg.setSource(14863U);
    msg.setSourceEntity(55U);
    msg.setDestination(39753U);
    msg.setDestinationEntity(172U);
    msg.ax_cmd = 0.8090609222599271;
    msg.ay_cmd = 0.32051619722232483;
    msg.az_cmd = 0.9646295745015052;
    msg.ax_des = 0.844650350456355;
    msg.ay_des = 0.15751351180174356;
    msg.az_des = 0.09441135698324454;
    msg.virt_err_x = 0.31775825908793254;
    msg.virt_err_y = 0.5934836441739638;
    msg.virt_err_z = 0.5335158041074957;
    msg.surf_fdbk_x = 0.9244286129155115;
    msg.surf_fdbk_y = 0.1699500558631145;
    msg.surf_fdbk_z = 0.7253903790785643;
    msg.surf_unkn_x = 0.8253304288726669;
    msg.surf_unkn_y = 0.7462040026182466;
    msg.surf_unkn_z = 0.9458656562413497;
    msg.ss_x = 0.05939472737504303;
    msg.ss_y = 0.017030901033859513;
    msg.ss_z = 0.2510154952719078;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NCVHMBPNUJMS");
    tmp_msg_0.dist = 0.7223705755976418;
    tmp_msg_0.err = 0.9313713913057581;
    tmp_msg_0.ctrl_imp = 0.9394852543200626;
    tmp_msg_0.rel_dir_x = 0.9412880479234834;
    tmp_msg_0.rel_dir_y = 0.8789665457609284;
    tmp_msg_0.rel_dir_z = 0.26026193704222444;
    tmp_msg_0.err_x = 0.08188376065098857;
    tmp_msg_0.err_y = 0.6726373345501889;
    tmp_msg_0.err_z = 0.5925224313853252;
    tmp_msg_0.rf_err_x = 0.9847605318144863;
    tmp_msg_0.rf_err_y = 0.6473026374398947;
    tmp_msg_0.rf_err_z = 0.9667507808530758;
    tmp_msg_0.rf_err_vx = 0.4367371840693669;
    tmp_msg_0.rf_err_vy = 0.8085137333714204;
    tmp_msg_0.rf_err_vz = 0.06695822462817325;
    tmp_msg_0.ss_x = 0.6330237305438705;
    tmp_msg_0.ss_y = 0.6536837487730615;
    tmp_msg_0.ss_z = 0.2528288041904727;
    tmp_msg_0.virt_err_x = 0.13072001949969414;
    tmp_msg_0.virt_err_y = 0.6346602115329912;
    tmp_msg_0.virt_err_z = 0.17534125704617964;
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
    msg.setTimeStamp(0.46588121012980754);
    msg.setSource(53311U);
    msg.setSourceEntity(223U);
    msg.setDestination(18543U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.5963931912989641;
    msg.ay_cmd = 0.7395133325886212;
    msg.az_cmd = 0.17833770234135915;
    msg.ax_des = 0.6197142060281111;
    msg.ay_des = 0.1085209757271437;
    msg.az_des = 0.7821714270828615;
    msg.virt_err_x = 0.16612649355371667;
    msg.virt_err_y = 0.23210741443286287;
    msg.virt_err_z = 0.8178207510192161;
    msg.surf_fdbk_x = 0.019811148021027902;
    msg.surf_fdbk_y = 0.673017543510023;
    msg.surf_fdbk_z = 0.40238576663347625;
    msg.surf_unkn_x = 0.7513244597130505;
    msg.surf_unkn_y = 0.18243423150866933;
    msg.surf_unkn_z = 0.6001613462106455;
    msg.ss_x = 0.6040661493095655;
    msg.ss_y = 0.20419339976826212;
    msg.ss_z = 0.9131152404215053;

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
    msg.setTimeStamp(0.654603387109586);
    msg.setSource(8090U);
    msg.setSourceEntity(149U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(210U);
    msg.ax_cmd = 0.8437273122873074;
    msg.ay_cmd = 0.5256877318037543;
    msg.az_cmd = 0.1248494828842216;
    msg.ax_des = 0.34872423487498994;
    msg.ay_des = 0.7882176428336635;
    msg.az_des = 0.8390344676730713;
    msg.virt_err_x = 0.9300584147539525;
    msg.virt_err_y = 0.7962819259749385;
    msg.virt_err_z = 0.8169710301994779;
    msg.surf_fdbk_x = 0.14851098318323708;
    msg.surf_fdbk_y = 0.4802814833136111;
    msg.surf_fdbk_z = 0.21635979199088662;
    msg.surf_unkn_x = 0.35345424649609025;
    msg.surf_unkn_y = 0.45342642609325445;
    msg.surf_unkn_z = 0.6983232337449508;
    msg.ss_x = 0.26717586899449697;
    msg.ss_y = 0.4753814150881699;
    msg.ss_z = 0.17802839502118617;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QNKQRBGJPCHSBIEABOLCNRMHDGGUQQRVHVPIFQGKALAYOWAWZERBVYSZJYBUQKYBMLGEAIUFRZPAZXTXOXPFUAEJGSVFOMEWHLSUPJXMIVUMZJGDSJAFTYCKJYOAITRSTTONNRDMFDHQCGKYTVZHWLBCPYQBEXPPNTONRVJWMUVFYNZTKDSLMUIVSLWMOEEFRINDFYVMXBFHGDPDXABUJXWHZKIPEOXWGCSJWDWHLLZOQXQNCCKUDKCRZLISK");
    tmp_msg_0.dist = 0.25081827507382704;
    tmp_msg_0.err = 0.6036721317846292;
    tmp_msg_0.ctrl_imp = 0.6936166840705329;
    tmp_msg_0.rel_dir_x = 0.49160353150415337;
    tmp_msg_0.rel_dir_y = 0.2224265288958318;
    tmp_msg_0.rel_dir_z = 0.9846785957156499;
    tmp_msg_0.err_x = 0.7896296891056299;
    tmp_msg_0.err_y = 0.4458897201849594;
    tmp_msg_0.err_z = 0.32927747793446793;
    tmp_msg_0.rf_err_x = 0.558601491804211;
    tmp_msg_0.rf_err_y = 0.20561087542527878;
    tmp_msg_0.rf_err_z = 0.5365610465159837;
    tmp_msg_0.rf_err_vx = 0.966459298976413;
    tmp_msg_0.rf_err_vy = 0.12579580191516093;
    tmp_msg_0.rf_err_vz = 0.8671173460219809;
    tmp_msg_0.ss_x = 0.7114991202660125;
    tmp_msg_0.ss_y = 0.9332943824470122;
    tmp_msg_0.ss_z = 0.18792595749236907;
    tmp_msg_0.virt_err_x = 0.8414021568572049;
    tmp_msg_0.virt_err_y = 0.3429336598026943;
    tmp_msg_0.virt_err_z = 0.35566618548320006;
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
    msg.setTimeStamp(0.2964948347098958);
    msg.setSource(2383U);
    msg.setSourceEntity(208U);
    msg.setDestination(13756U);
    msg.setDestinationEntity(64U);
    msg.s_id.assign("AWFYSKUJGICMIDWHANKIMAFYYSLXOOWAQQQPQTRGRORPV");
    msg.dist = 0.7320163217113617;
    msg.err = 0.5869010761370475;
    msg.ctrl_imp = 0.939984359966045;
    msg.rel_dir_x = 0.96573098487242;
    msg.rel_dir_y = 0.32747143373361765;
    msg.rel_dir_z = 0.005174150001685973;
    msg.err_x = 0.9362919657841586;
    msg.err_y = 0.49924806577110914;
    msg.err_z = 0.19640901014944367;
    msg.rf_err_x = 0.009059853679814878;
    msg.rf_err_y = 0.565662006133722;
    msg.rf_err_z = 0.4451188168593604;
    msg.rf_err_vx = 0.9497563548901912;
    msg.rf_err_vy = 0.9919810138964585;
    msg.rf_err_vz = 0.03767094320472408;
    msg.ss_x = 0.9747650511903256;
    msg.ss_y = 0.44114063781351953;
    msg.ss_z = 0.22924185123012597;
    msg.virt_err_x = 0.4141423161246591;
    msg.virt_err_y = 0.8641703102757091;
    msg.virt_err_z = 0.2036149358082131;

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
    msg.setTimeStamp(0.7015903091444919);
    msg.setSource(55706U);
    msg.setSourceEntity(11U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(204U);
    msg.s_id.assign("VVSNWJEHEIJNYZPBUALSGDYANJBWRKDMNZFFWXBUCNPIZKPGNGOSQITQUKZEAFTQRMFDDXLVMAYTKHPDROGLTJRHBFCACXDEQMVNLBZSUYNQRGGUN");
    msg.dist = 0.3370457147394442;
    msg.err = 0.0773147719481061;
    msg.ctrl_imp = 0.0026392437217340747;
    msg.rel_dir_x = 0.3040795028088076;
    msg.rel_dir_y = 0.35562904638344917;
    msg.rel_dir_z = 0.22809154285035282;
    msg.err_x = 0.7043984781618357;
    msg.err_y = 0.6584252199795532;
    msg.err_z = 0.6272869370419266;
    msg.rf_err_x = 0.40989125724652564;
    msg.rf_err_y = 0.27698543929187625;
    msg.rf_err_z = 0.8261082228842423;
    msg.rf_err_vx = 0.6587571746659554;
    msg.rf_err_vy = 0.40665097920007287;
    msg.rf_err_vz = 0.027866263101393063;
    msg.ss_x = 0.2337767328398197;
    msg.ss_y = 0.6255286123848232;
    msg.ss_z = 0.208056710057974;
    msg.virt_err_x = 0.9905579027268587;
    msg.virt_err_y = 0.045035121806690004;
    msg.virt_err_z = 0.7766869134693456;

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
    msg.setTimeStamp(0.07379096326307455);
    msg.setSource(22595U);
    msg.setSourceEntity(131U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(195U);
    msg.s_id.assign("DNJWUBARPHDHNDCMNZUGPSRHGLDFHFEOAONTVKVAETTVSAGWWHBUVJEYDAJMKWBAJOHTCCQZLMXIUGIIKMXIEXZJVKOSHSMOUACHEZIRMGZSYSYPRXINREKSXYNTDQPISKDXYBJCBBQRVEYAKVCWMZLXLMGPQQKG");
    msg.dist = 0.7709437566532772;
    msg.err = 0.9269591070584918;
    msg.ctrl_imp = 0.03175153680737142;
    msg.rel_dir_x = 0.03278838846464993;
    msg.rel_dir_y = 0.8122730349124572;
    msg.rel_dir_z = 0.4787101958421719;
    msg.err_x = 0.6470182399516731;
    msg.err_y = 0.38992962900247197;
    msg.err_z = 0.7502435024330721;
    msg.rf_err_x = 0.6707560602308005;
    msg.rf_err_y = 0.27016004594483045;
    msg.rf_err_z = 0.07658819456413546;
    msg.rf_err_vx = 0.065425512539381;
    msg.rf_err_vy = 0.29592350903452214;
    msg.rf_err_vz = 0.488790543668397;
    msg.ss_x = 0.3894550461571209;
    msg.ss_y = 0.8524665565033486;
    msg.ss_z = 0.8534338653845258;
    msg.virt_err_x = 0.49460509148799625;
    msg.virt_err_y = 0.8848806050880136;
    msg.virt_err_z = 0.2933343309041597;

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
    msg.setTimeStamp(0.33906117129790914);
    msg.setSource(31212U);
    msg.setSourceEntity(135U);
    msg.setDestination(34096U);
    msg.setDestinationEntity(165U);
    msg.op_mode = 108U;
    msg.error_count = 18U;
    msg.error_ents.assign("ZHLRYQVMPMSGKYGSWXIEZKDJEZMFEEERJWOQTHHFFNQFLNTUUXVPHIBDPYKJKLGCOAZXASQMVLDFJDVWZCVUHINXVZROHFLYGVGXRXPOTPDNJIWNASSZAONUXRTFOCPTDBYHXXVI");
    msg.maneuver_type = 31816U;
    msg.maneuver_stime = 0.45709326710548837;
    msg.maneuver_eta = 17236U;
    msg.control_loops = 2394035927U;
    msg.flags = 54U;
    msg.last_error.assign("DLRSQMNERGJFXQMUBTSSIQGIYEICPQZJEOJPXHJOQYZVEAVEUNDTAIZZQTQWDRYWHNAESKBWHBKZFXYGMJVD");
    msg.last_error_time = 0.4924264916861283;

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
    msg.setTimeStamp(0.34646292098723397);
    msg.setSource(64283U);
    msg.setSourceEntity(177U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 170U;
    msg.error_count = 179U;
    msg.error_ents.assign("THFYVJCASSOXEKYDHEKIQSEKRIMQZOHFYKVBVZMDHGNDFYIVARCEUMMNGLQQNUGMWRNDJIYGAEQCCDASKKYQPKHQUSNLNPR");
    msg.maneuver_type = 28698U;
    msg.maneuver_stime = 0.16501679413009684;
    msg.maneuver_eta = 15220U;
    msg.control_loops = 3641839968U;
    msg.flags = 241U;
    msg.last_error.assign("GRWABYSXWCQGOFPVTTWVGJYLCMYIJTXQPDBIJAYDCOXEMGFNTDZTLLGRFSHDXMRAPTKDDNZQEAIELSTRHODUUTGSMOVQIYDWVFNRWMGOZKZFZ");
    msg.last_error_time = 0.3136455681869922;

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
    msg.setTimeStamp(0.10299672600562237);
    msg.setSource(20711U);
    msg.setSourceEntity(103U);
    msg.setDestination(47605U);
    msg.setDestinationEntity(201U);
    msg.op_mode = 36U;
    msg.error_count = 30U;
    msg.error_ents.assign("METIKCGCLBZGBHBIYLVLUZOQKVQJWZRLHOGTNKJPMHVPYECSQFUOXIGVAGKKFCSPJSVMXJCQWEHTGIPJQRINBLSUQGZLUDXDNUAETDWOADGHFFNW");
    msg.maneuver_type = 19227U;
    msg.maneuver_stime = 0.9494827243513626;
    msg.maneuver_eta = 13297U;
    msg.control_loops = 1925413727U;
    msg.flags = 150U;
    msg.last_error.assign("FEDOWDSRVLSLOHBLIAPHUZLYBWWVD");
    msg.last_error_time = 0.19982866423939416;

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
    msg.setTimeStamp(0.13512842275552284);
    msg.setSource(16656U);
    msg.setSourceEntity(25U);
    msg.setDestination(64479U);
    msg.setDestinationEntity(166U);
    msg.type = 27U;
    msg.request_id = 56866U;
    msg.command = 77U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6795958929072967;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 1002U;
    tmp_msg_0.custom.assign("QDZZYOZEDMOKLJHQRUBCVUJBIMXKCDQORXQAIOTHXTKXQGGFPTSSWYFDXUKBWTEAPETJDPMHFKMDGIQULSBCAQEKWPHEOSNBNNHJUICUARLYIEMNVJSWMRVXTRYNCABDHHADEWKYGWNICVAWOSPLNFGLTEOJGBMQFXNVOVNLRLZZPDHMFBUGHSDZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57351U;
    msg.info.assign("EDKSVURGBCQMCTISHTOIFTBZMQVCDYJQCDVCAHWQGQXVBXRUVHFFYHEAMVYVWQXOGIIYKWPKRWCGNNUFWSZIQEEZHZGTBAKSCLXPFFPIPXMEAEOLOYZSBIGVZUAESIFPXTRNDPLSALWTPAE");

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
    msg.setTimeStamp(0.6694399624500702);
    msg.setSource(39349U);
    msg.setSourceEntity(167U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(73U);
    msg.type = 229U;
    msg.request_id = 61222U;
    msg.command = 27U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 5532U;
    tmp_msg_0.flags = 135U;
    tmp_msg_0.lat = 0.8506081642948486;
    tmp_msg_0.lon = 0.8438227911044929;
    tmp_msg_0.start_z = 0.8847986336006737;
    tmp_msg_0.start_z_units = 101U;
    tmp_msg_0.end_z = 0.05168271422498505;
    tmp_msg_0.end_z_units = 207U;
    tmp_msg_0.radius = 0.5885999749161316;
    tmp_msg_0.speed = 0.6533518392554398;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.custom.assign("OUWLFTNAOVUVSYQYSUUEIMVTADUYUNGTRJXEDQKOQIOBCWIWXNWCJRNMDDYVXH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53465U;
    msg.info.assign("QHQLEGVLEEJESYZLQWCZUGIRPVVQDPFABVIQRMSEMAXXYDHSPKNYXEEPXWEVABIMBRBAUZLCUVMTPWGRASOHTIZFKGJWDTETAJLGPIOPUQASTKHBJWADMHOXRFINLOHWJZMRGHNAPZMMOMZRFOJDHPVCDTFCBTNVISSFLBCNQDCKGPXUXONCHYGT");

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
    msg.setTimeStamp(0.3752696503738916);
    msg.setSource(18129U);
    msg.setSourceEntity(98U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(22U);
    msg.type = 139U;
    msg.request_id = 47431U;
    msg.command = 128U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 15655U;
    tmp_msg_0.lat = 0.6722235782055304;
    tmp_msg_0.lon = 0.5419861889938168;
    tmp_msg_0.z = 0.4481631332584315;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.amplitude = 0.8306057236612014;
    tmp_msg_0.pitch = 0.7092173402966379;
    tmp_msg_0.speed = 0.3727092529209821;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.custom.assign("RTJGREVXXYNZPOWCNJQEKWELZFEVKJXHIFSLAFZVBWPFAKDZDTHKDVTISSUBHDJYBZQIHLILGYBLKNGGQIYM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15573U;
    msg.info.assign("BDQDRMAGONIESTRUQLLOJFCVSOMUGBLQPEJUIEISXWBQQPMRVTPUCBYUDAAMRIXYZULCGKMMHH");

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
    msg.setTimeStamp(0.4648546477863331);
    msg.setSource(17600U);
    msg.setSourceEntity(55U);
    msg.setDestination(41777U);
    msg.setDestinationEntity(2U);
    msg.command = 189U;
    msg.entities.assign("JELGBNFIIIFRLYPMFZETJPBFLRKAGXRXSHQFJMSBWQVXVLJPRRCZOCMMDNAJLVWYPSUAQVPDET");

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
    msg.setTimeStamp(0.37693627153917686);
    msg.setSource(6348U);
    msg.setSourceEntity(127U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(141U);
    msg.command = 61U;
    msg.entities.assign("ACOFJOMPTIIUQGEBDJUTVMMABNIVWSTISAMVOFKLXFPWLANKKAHQDCPFJHUTDPAPZVJOXCBELVZBHHTUXCJPSIRPCQWGJRDXIRDSKCYSKSOTWPAXYJNNKWBBHKRJSFLGASJAVIBBCKBERUUXWTNDTNWPYGNQYEKV");

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
    msg.setTimeStamp(0.8087620985989115);
    msg.setSource(44456U);
    msg.setSourceEntity(183U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(62U);
    msg.command = 252U;
    msg.entities.assign("WOFKMSNDJPHXVLD");

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
    msg.setTimeStamp(0.25271936120516525);
    msg.setSource(42687U);
    msg.setSourceEntity(135U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(145U);
    msg.mcount = 136U;
    msg.mnames.assign("MMTHLUYYYFZTUXDMGCJESOIZIIIOKXOULFFABDEENXMAHOSBUJVKYYLQCVQWNNHHUZPEC");
    msg.ecount = 197U;
    msg.enames.assign("ASIUJCGNJTRJKJUFUBPHGAOXSWWV");
    msg.ccount = 95U;
    msg.cnames.assign("LPGVAOIIDKBNVVVVDSUFMDJESBCXKEEZWZOECLABNNYCCOUNFFGHQOQCFNXKPPVIQVJVJJMNDTFNNFQWBYEMHKKUXKEIWZUSMRWRBQP");
    msg.last_error.assign("UQJYHIQFDITHWTMVPOAHQZKZTEOBPMBEVCFLSRFIYAWRFLGAFOKMJMXVLNDELOTJOWSPDONLUJMYMCWIOTIZPGFDGCDJKVTHQRWVQZEGYNYWDMXYXJURGOGESQLBCRKN");
    msg.last_error_time = 0.5878973657133927;

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
    msg.setTimeStamp(0.20076313854027195);
    msg.setSource(44427U);
    msg.setSourceEntity(143U);
    msg.setDestination(24112U);
    msg.setDestinationEntity(235U);
    msg.mcount = 180U;
    msg.mnames.assign("RPBAAHYRSDVZWIRCIVBBYOYHNGNRFVATHOJTWVRYFVBOQCZGWRVEEUDQCJFWFXOTQMXJTVEANSJQOGPXPRSPNESCGVRHKHKGBYQOBGTPKPIPCNMBHIIXOKNRMOMYQMWCXWZNDEWMSXDYDSULGTLWILUCVFKIZJJLUUNKSWIEGYBSOULFXKDSJGAFREQTCWNLQZTEPZDPLHCNKMJUZIDAFAXTHIUZUTZPDMJQBAKSYALG");
    msg.ecount = 52U;
    msg.enames.assign("KVANOSTVIFOIAQNFMHTHCRAVWXZYLMQDUMSVLQHLUJRCOEIHATCIMQHJSCMPEPKXOYTVOYFCWDISWGNBBIADKKVFBYGEDLENKXMXTSLDXZRRIUMPFGEDUSCPHAWWRDHNKZSPYEYBZBPQPXNSYOXNKCROWZNUCLCJBISMTSLUVGPDGTMKVGYLHYJGDRTUZAFKBYQQRXUGBEFMWNTZFUAGWZAVFJUB");
    msg.ccount = 54U;
    msg.cnames.assign("FIAWSGRRWJRIYYGDBREV");
    msg.last_error.assign("DXVNHRXYIEPYKXLYMUZIJZPJTVZAVHWEZCHCFNPEZWBFSLOIRGKXKWSLUPRBPQJGFMZBRZORIKRSIQWPAHKOIIPYHXOLDLMEBLNJAVOJYKJXSMUBQSUIADRAZMEHPNHEQLTPLQMMYLUGDEYVBORCWKQUGGOGKWSXSWQBUTEOAMAVHJNEIRJBCQNFUNS");
    msg.last_error_time = 0.515502322056229;

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
    msg.setTimeStamp(0.26733751291777985);
    msg.setSource(56805U);
    msg.setSourceEntity(194U);
    msg.setDestination(32725U);
    msg.setDestinationEntity(8U);
    msg.mcount = 186U;
    msg.mnames.assign("TEKDBIBBGNHZIRTNFTASGLUSZJUBDSYUVRFJJKFVMZPEQUPEMBZLHHGFCYAAUAJAZXPRXDCAQSEQLDIKBPRLHNIYCVGNWNUKWJRLQXWCPOAITOIWLLFVRXQNYFRCZRTGEEZCVIPMFYVWYXYOKPMGXFDDYHZZQSIK");
    msg.ecount = 119U;
    msg.enames.assign("UCVWIMSICECQXKJOWQSEQEIOQWRNCMKRONVZXMRKYTINAUNUYXEEFSTOXBLLQHGVJTIVPYEODTXZMDEVGIGHHSYDGRCQJWQNFPGTWOMAVLJBJPSQBNGKVZOJWBPGVSWWJALAXDUYUJUUKZNOBKNZRPFRUUVAADFST");
    msg.ccount = 218U;
    msg.cnames.assign("IJQIUXNOCMFUBGJTNWWBHCXLKWLXPCEKMMNFVIGFZBYDSQZSDQCLAYNLKFXWAJXPRFIVUSJICRBFPEZPOGYXTVDEYITWZIVGJNWNJUMZTZSPVOAGUAENQPTKFHIEXQTPUTHGSRSBMADTGAHLRZREDSQVOOFHMWGYNPBSOMKIR");
    msg.last_error.assign("XIJATSKWLSMAUUMIYWSMWCBGPKZXNVVGJJYSXPDPUWNTECEBVQJRFKPICQIHXRCGRBVULMRUIBHNWPLYDHITFJDHGRHZBWMVNAKXWKEHSNNTRJUZJIAHEQCBS");
    msg.last_error_time = 0.7674468897799539;

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
    msg.setTimeStamp(0.8974661471395812);
    msg.setSource(34003U);
    msg.setSourceEntity(238U);
    msg.setDestination(10061U);
    msg.setDestinationEntity(39U);
    msg.mask = 215U;
    msg.max_depth = 0.9025447245572991;
    msg.min_altitude = 0.6606759937952728;
    msg.max_altitude = 0.512520781260921;
    msg.min_speed = 0.47957550894125056;
    msg.max_speed = 0.5385913916124426;
    msg.max_vrate = 0.10589119600320052;
    msg.lat = 0.1974267638828736;
    msg.lon = 0.10629536484542612;
    msg.orientation = 0.49229031089156927;
    msg.width = 0.2935433922586519;
    msg.length = 0.6728907867331893;

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
    msg.setTimeStamp(0.6265068586280368);
    msg.setSource(32297U);
    msg.setSourceEntity(148U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(128U);
    msg.mask = 167U;
    msg.max_depth = 0.3118279896730348;
    msg.min_altitude = 0.9282940190332163;
    msg.max_altitude = 0.9659028971163345;
    msg.min_speed = 0.1261525133071114;
    msg.max_speed = 0.4601535160881908;
    msg.max_vrate = 0.5465764110810827;
    msg.lat = 0.12079913987866442;
    msg.lon = 0.8349311733688868;
    msg.orientation = 0.6085032483407674;
    msg.width = 0.842684162524987;
    msg.length = 0.2749433721632324;

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
    msg.setTimeStamp(0.5274004799992484);
    msg.setSource(29616U);
    msg.setSourceEntity(93U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(95U);
    msg.mask = 247U;
    msg.max_depth = 0.21005785431844082;
    msg.min_altitude = 0.7770725706273277;
    msg.max_altitude = 0.18913976205941918;
    msg.min_speed = 0.0570644258217593;
    msg.max_speed = 0.17909423825727788;
    msg.max_vrate = 0.047987916108123696;
    msg.lat = 0.9453747084297115;
    msg.lon = 0.1909152391208433;
    msg.orientation = 0.48877372197491065;
    msg.width = 0.850507206130471;
    msg.length = 0.7807177232527255;

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
    msg.setTimeStamp(0.2987839266899821);
    msg.setSource(23442U);
    msg.setSourceEntity(156U);
    msg.setDestination(7717U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.7158913658114174);
    msg.setSource(56713U);
    msg.setSourceEntity(155U);
    msg.setDestination(51471U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.7512191298893324);
    msg.setSource(54645U);
    msg.setSourceEntity(138U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.8220122267638799);
    msg.setSource(32101U);
    msg.setSourceEntity(169U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(71U);
    msg.duration = 30366U;

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
    msg.setTimeStamp(0.9294587237925642);
    msg.setSource(46111U);
    msg.setSourceEntity(180U);
    msg.setDestination(14998U);
    msg.setDestinationEntity(41U);
    msg.duration = 62755U;

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
    msg.setTimeStamp(0.04194397513099646);
    msg.setSource(64365U);
    msg.setSourceEntity(229U);
    msg.setDestination(31201U);
    msg.setDestinationEntity(186U);
    msg.duration = 53091U;

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
    msg.setTimeStamp(0.8573818654951019);
    msg.setSource(46242U);
    msg.setSourceEntity(252U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(121U);
    msg.enable = 190U;
    msg.mask = 1174512360U;
    msg.scope_ref = 3275669747U;

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
    msg.setTimeStamp(0.2309335276258686);
    msg.setSource(45667U);
    msg.setSourceEntity(5U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(180U);
    msg.enable = 117U;
    msg.mask = 2354004128U;
    msg.scope_ref = 3211138842U;

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
    msg.setTimeStamp(0.5176394010164748);
    msg.setSource(58095U);
    msg.setSourceEntity(95U);
    msg.setDestination(47308U);
    msg.setDestinationEntity(224U);
    msg.enable = 232U;
    msg.mask = 3542138497U;
    msg.scope_ref = 3614351456U;

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
    msg.setTimeStamp(0.8197593181646828);
    msg.setSource(1843U);
    msg.setSourceEntity(86U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(21U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.22394282337183447);
    msg.setSource(15576U);
    msg.setSourceEntity(155U);
    msg.setDestination(348U);
    msg.setDestinationEntity(46U);
    msg.medium = 159U;

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
    msg.setTimeStamp(0.5632222157477641);
    msg.setSource(61298U);
    msg.setSourceEntity(75U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(147U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.6840852688678228);
    msg.setSource(57179U);
    msg.setSourceEntity(125U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5386569149016984;
    msg.type = 158U;

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
    msg.setTimeStamp(0.5927349395199011);
    msg.setSource(30338U);
    msg.setSourceEntity(47U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(149U);
    msg.value = 0.9548077150717625;
    msg.type = 92U;

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
    msg.setTimeStamp(0.1273915694848622);
    msg.setSource(32648U);
    msg.setSourceEntity(203U);
    msg.setDestination(21963U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7815645429087968;
    msg.type = 100U;

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
    msg.setTimeStamp(0.6815067985607872);
    msg.setSource(32033U);
    msg.setSourceEntity(7U);
    msg.setDestination(43559U);
    msg.setDestinationEntity(117U);
    msg.possimerr = 0.36517648048133433;
    msg.converg = 0.4447800394697329;
    msg.turbulence = 0.1229137088815816;
    msg.possimmon = 159U;
    msg.commmon = 35U;
    msg.convergmon = 116U;

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
    msg.setTimeStamp(0.5703312334938496);
    msg.setSource(40512U);
    msg.setSourceEntity(40U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(81U);
    msg.possimerr = 0.03861684461070647;
    msg.converg = 0.9159659249454882;
    msg.turbulence = 0.1432944892290665;
    msg.possimmon = 149U;
    msg.commmon = 203U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.08948944554059046);
    msg.setSource(19598U);
    msg.setSourceEntity(238U);
    msg.setDestination(16633U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.29609437173362974;
    msg.converg = 0.020372466072753448;
    msg.turbulence = 0.8519764711485134;
    msg.possimmon = 180U;
    msg.commmon = 210U;
    msg.convergmon = 161U;

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
    msg.setTimeStamp(0.3445606834693854);
    msg.setSource(54448U);
    msg.setSourceEntity(134U);
    msg.setDestination(46858U);
    msg.setDestinationEntity(197U);
    msg.autonomy = 60U;
    msg.mode.assign("WLQKEFVOQXGIHWDSQBTCYAJBTZWJOZSRFKQADFCUQFLOHTNHJGOODJFUJLVLPYPHXIVOHQHILYJHBIASBMTCPLOSZYXZBZVSMOGKRCJVPJRLUGEWDATZKGPUGIAVTBZXUXFUDMPAYGMWFLYRUELBKSUNOCJMRADTTCKEQWKRYNJGBWCEVWKSGCLIMNAXVP");

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
    msg.setTimeStamp(0.22309418534846137);
    msg.setSource(37163U);
    msg.setSourceEntity(234U);
    msg.setDestination(52990U);
    msg.setDestinationEntity(218U);
    msg.autonomy = 86U;
    msg.mode.assign("RPVSWKPYUQCRKVOCWAGRBIJKJRPNWEGXGFBHWVLDJRZNKHYBTELXSQSHUMLQYGMAQ");

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
    msg.setTimeStamp(0.940634258692258);
    msg.setSource(347U);
    msg.setSourceEntity(53U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(253U);
    msg.autonomy = 35U;
    msg.mode.assign("AJXWPNWJPURUZAHP");

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
    msg.setTimeStamp(0.3072659075663764);
    msg.setSource(50799U);
    msg.setSourceEntity(117U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.884297240767205);
    msg.setSource(12634U);
    msg.setSourceEntity(120U);
    msg.setDestination(26489U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.11184503392864975);
    msg.setSource(36053U);
    msg.setSourceEntity(160U);
    msg.setDestination(34795U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9379356450879079);
    msg.setSource(24171U);
    msg.setSourceEntity(92U);
    msg.setDestination(46050U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("SXCFMQNPXDCLXCBVKTRDBRIQRCHHYOGJHNHFTGKHLRXMZMKDETQIWBGZOSOBAQUGQIKAYDDGGSHTTBWLEYIEYIOWXCTFYIJNEMDYPPZLUSDQHMAZGGSZNJEUBEVRPEMVDMWXVMCILFJMQXHRNPDAPKOVLPEASUVWIFUTKFPQZJXHYIALNLNWS");
    msg.description.assign("LIGUBHVDJBVQFFERFXKMIHGGRCZTFZXQWQDNWKWRZUPBKHDMOWRBFPCVXCJPIDYOQTFCYAKWZQNEEUZMVTFWFEYOQOLNRNINKRJSNCZFHSTHXSKVYHUTHGTHDZTU");
    msg.vnamespace.assign("IGBFBHQACXUORUPNZJAKESFREQYAB");
    msg.start_man_id.assign("SCZSQTKAIZEQLMVYSXHIGDETLESFPQECNJJWMHURFYUQBLFLUGRGZPFHDOVGJHFJZYWOIFRNNIUWXGKBITBNPRGHHSWUYGOOKYWVYELVIHJCNKIDBPARWKXLDKJROCUDZPPTUNJHXHEQOFYTXNDVAKWMLFSB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SZHUQMPZHDPHAQQBEJZTDDXWBMCCLKOPSZKCRVMAYGXCUYVNIOFBFINMYGSAKYHJAWZIXRECGQHDLNTJYAJXKBWZRECYBDKYVQWTIOFIWERMSFHVFQCYEVEGZGFROSVLFGMJWUSOFCWSDOEANNIQGLGEJKTHZXOVRCNOFBBPPMBLMZDNWWMNQRTNHLJUOJUIPPUUPDBGCUXTLXUTXITEAMHLSLXDSXEUKARDQATJPF");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 25089U;
    tmp_tmp_msg_0_0.lat = 0.3681474933048734;
    tmp_tmp_msg_0_0.lon = 0.13471528044901626;
    tmp_tmp_msg_0_0.z = 0.5152984915184115;
    tmp_tmp_msg_0_0.z_units = 199U;
    tmp_tmp_msg_0_0.speed = 0.7447106922537774;
    tmp_tmp_msg_0_0.speed_units = 66U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.7811823204833918;
    tmp_tmp_tmp_msg_0_0_0.y = 0.7823542729480868;
    tmp_tmp_tmp_msg_0_0_0.z = 0.03181222929537586;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("XGWVDYLSFEWLIMGMLKRYJYUKTZGMXDLSQW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticDiagnostic tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.enable = 207U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 3796951917U;
    tmp_tmp_msg_0_2.state = 196U;
    tmp_tmp_msg_0_2.error.assign("YJZNZFCURASQVNBQWTUOHEYLXSEHCBKSJDCVIKTPCCBHSHVWYPPGRKFIFTLMRJDRMWEOZHZZQHGYOVWPAIMXMICIGFFYZEVMBAAXDGKJEMSKVIBGIOXHXUNAPJBQUWGCOSOWDLTVLVHISL");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QQXDMEQEVNSQLXNNOYMEKVJPNXHBRHCZUFXTWIDPKKWVHHVZOENIOFORODFZUXBDWYZQLERAPFTSNHCBAZGRTGJGZBAENETMEKWEUCXCFXBNGSSVVHUZSHICKYABOLWQBDANRUQMIYFJMOCMSZTWAGBKLUPCKLTYHBLOWYMHNLT");
    tmp_msg_1.dest_man.assign("QDKSBWNBELUYXKRMRLNZXDGGAIAZFLMZCQBGRCJ");
    tmp_msg_1.conditions.assign("WXTFEKHNFVIGRELMUUHLZADBGZBUQLLPXULUZFASKHEBFAGMPGKOQPIHSUYYJDBMJNBTNSDSHYEATQTNQWKOKFBCXPFGVNEDYINWVGDRTZJRTMFYEVDPVGINZROCIUMTEVRCRWOJLKEYQIVWQASSQLGRDNSZVHXSZAYACBHIYHM");
    IMC::Announce tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_name.assign("GAKYEWPAEORFQGJPHKXMYV");
    tmp_tmp_msg_1_0.sys_type = 94U;
    tmp_tmp_msg_1_0.owner = 8853U;
    tmp_tmp_msg_1_0.lat = 0.46768710039885475;
    tmp_tmp_msg_1_0.lon = 0.11704691096307496;
    tmp_tmp_msg_1_0.height = 0.3040682233167423;
    tmp_tmp_msg_1_0.services.assign("MEUUXLVKJTRLBZIVQVPQEXJHOZATJOGZDYUVCWXJGBZNLOPAVIABNDCONKLXWZFQTQGZNSU");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Acceleration tmp_msg_2;
    tmp_msg_2.time = 0.7183386855071564;
    tmp_msg_2.x = 0.1776138927573332;
    tmp_msg_2.y = 0.030772490493631954;
    tmp_msg_2.z = 0.7857723772408431;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::RemoteActions tmp_msg_3;
    tmp_msg_3.actions.assign("KIVOTMMOHNUITTCEMAQHIHIOLHBCVXEQTDPMJFQBXWQVJGUCHDGJZMFKLURSUXMEBWIGOK");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.1358883973047439);
    msg.setSource(39562U);
    msg.setSourceEntity(40U);
    msg.setDestination(63565U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("MGCWFECMVLXQIAWDYUUHATJTHUOIVKPORRJGTEZCQWKIXOASHUYPKREBHMWMTXNFALUOBPCMJGFNMSMOCIBLSNAEQSOKADZMGCVQYDXINGJPRQQYPLTWEUIUCDSEDIJJORESDEJVRVNNZVYSRKLDDYGSSIBUZFBWZZTNHWAZEBPXTXDOJYFHBHBLPWOTLYHLKXMRVCPXVRJZVVYWXUOIGFUGISQHLDCFJYBNATHEZ");
    msg.description.assign("GKHWUQMSCRYSCYVVLOVPUEULETXIFUQNUYNETVTPMDSMEPVHQVRVPPLPTDHMAFNRTYAKOILKFDFXWTODRGYQEROXQWQGZRHNKMOSKCNWLDIZYCRZRCQCXWEJXKOTLLTLHHBPWCIGOJZBEZTGKKNJALBFJQGIRWEJJWMZGIMQNDOPDPA");
    msg.vnamespace.assign("SGSQTGLWYWFUTLCZBUHDJFHQMTIYUASARSMTWXRCPEJEOOJDFKAOUXALMFHOBOAKQRKKFUZKNXEDFXWNXYGZKMOZYIOQUCCR");
    msg.start_man_id.assign("AWHDZWTRZOSJUCIEFVNKEJZSMSBNKDXPAUZDPLEEYOYYHSIVLUHCGLDQIWTCTDABNLYYBOFRRJPHAMHXVMZPDPZWPZUEGFRRISFIFTKSLMYDCBSOJGFOWBWWXNMCAKSSZDVFIBQXBCJACGQPQYANCQKBOMHJDVGLWNHXTYQKIJOVPMUUQKFQOLUQEJIJKYNNXJWFVGHTGQZAGFGTIOMMRNRGUBBKRTLIYDUHMRTUVHCPXXA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BKVTGXXTZVWFSVUXOFFQCLAGMWQKJTVHTBPLNDQJNJEIIDECYZAPYNIGKPRISYWH");
    tmp_msg_0.attr_type = 229U;
    tmp_msg_0.min.assign("HQUIVTLSRUBNKQTTBZKQEIWZGSRBSEDCEJDYLZILSMYVADNZXKUIADTUNXZTWMOMSXOWWHGEMGCKEPJFLXAJTHRGPHORJAAJIJNPFGIWGKXFDHHPUBXDWVBPHIOODZGUUMXOB");
    tmp_msg_0.max.assign("FCZIZPPAZHYTRWTOWFKHFNPRNAVQQQEJBKKGKQ");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8014170907974785);
    msg.setSource(4276U);
    msg.setSourceEntity(102U);
    msg.setDestination(19517U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("IGKMWTJCHVUSEAIOHIBZLCKCFPPAXZCCDKOQVIBOLDXIRTBPJRDUHRUIRZFXEECGQRQCTQFOVEWESTVJTZQGBSSKZAWOMDSKDQNYZHNPDJUXYEYXXJAFGJPFEQNGFLBSGUHLEYWQNAYMWSIPVNXDNHJO");
    msg.description.assign("EXMQKXTICCQWFFEDOTWJAUMVANNGLMORWZUSKZMVXTHAXIPVOWFRITTTVOBYQEWNIBTONCJQXGHCCVLAOKNFDYQSUSFVNLBBZPGNUNRUVMATCMLLWJZJQKPFGBPSILJSWXPBHJWAMFLEHGUYAGKRBCEOGKVOXAICHIDUMGZZGPP");
    msg.vnamespace.assign("KXQSMYZJBDUIUNFL");
    msg.start_man_id.assign("CLEBPNMANECBDTATLPDBGTTYWNQFPPJKUJZENEWGQCXMXFWLPRKRELWAHYVKWHTGGIRFLDTPXAYSOSNSURDHGHZGZXCZCIBKCCWNIUKTXMNLDERYFVJUIQMATRKIZOIHZSVESCLYYFEQBXUZSKNWIDZICFJVGFSOTVSJJOAVYLJVHQRGMMNOMVRPUQQZLGDKSEXAQGIODWLAPVSFOPJIHMBOZFKMWPYUBHTNROEJYUAOBBQVHDXXYX");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SBSLEVECYGIBUIIAARYHQPNZCXJGQFAWMJWYHKQUROOGGESZPBLTCMOEOFDHVDGJBMFGNEMSFXWIKXUNDJZBRFKKWKMTHWHCDDLDOMMZOPLYUHQRPNVNQNDDAHRXPVAVWLCMKAYTVAZFEHLRQNYFWNQBTSTUWREJKCKVXLKOBWXVYSQEDSTUJAJNPWGTCPLIZGCGRMISOUTSRIJFXUXJUFAPHYOJC");
    tmp_msg_0.dest_man.assign("URXKOFRVDCZLDSZGXFAGCUBLNDQNRZEORWIWDOMPLPBXKVXVGUFVQMCWTOFFVDHPRSSHNVYSYOTCAJZJLPMHCEUHQZEIUJQLQITYKLXYB");
    tmp_msg_0.conditions.assign("CFULAJTOQEKBY");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13070780738825094);
    msg.setSource(35519U);
    msg.setSourceEntity(61U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("CVOFLIUEEONNITGFFIWJSNQPRNXJSNBMSUVFGWHTQWIWZLYUKMFVLKVQRHCSDVRMNXOEZPPKXGXZAWJDFQAVIONKENJSPHDKDUENYXPDXAFEABGIAXTMHLBKGUTBPLCEQQTKXPCMZS");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.844928658660172;
    tmp_msg_0.lon = 0.8221470617590371;
    tmp_msg_0.z = 0.10163404055901626;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.11414760541268865;
    tmp_msg_0.speed_units = 107U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.49899383568560585;
    tmp_tmp_msg_0_0.lon = 0.9994309864459837;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IEWQOOYAHWVMPFXZVYEFJXDAHKCCFQXLHKQOZJAJAUTOQWZZGITVKANDNNMMQJSPBPKRKURNSVRCSUVKTXZKAVYVDUHTEXZYEFSDWKLCGDHMEGLBXEBBXPQEMTTYJSPTADGJCOIIZ");
    msg.data.set(tmp_msg_0);
    IMC::UamRxFrame tmp_msg_1;
    tmp_msg_1.sys_src.assign("KUXPXUVFYPSURBJLNBRIAMVURIJLSWTAGJFNIDHINJCFJDYXHPNAUFFCYFWYWSKOIODQVKJXSPHJQTPWBXADHNTQQQAKOLNYBJOVZLNSQTZQXQWQUVDDTWCIYZVOEPCMCMGDLYKFXGIULVRIZDMRSGLKHKAGVHIMDRWQSSCO");
    tmp_msg_1.sys_dst.assign("FHVNCDEPTKWYZCURMIGLISXOZDZMJSVQNWAOQZJOOCZXLNYLYXQRYRFCEJYAOWPBNBUPRLFYUTVIQRFZPSZMODTAXFEPVVTHIEUFUZKQPBNHKVURVPFEADJCZLDBFWMWQXNSMSRHEWPCWTAOKIEWMXLQEBGSCXLPAHFJLYNGKYIAWWDHHYJTBHKQAUKTQKXMKCCNPHXZDVIMICBHTSMMGQBGARUNJD");
    tmp_msg_1.flags = 241U;
    const char tmp_tmp_msg_1_0[] = {42, -63, 47, 97, -20, -84, -96, 101, -103, 76, 17, -87, 45, 48, -97, 14, 122, 49, -112, 3, 72, -47, -71, -104, 110, -32, -60, 33, 70, 107, -83, 80, -36, 23, -80, -20, 25, -31, 8, -18, 100, -128, -68, -60, 51};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityParameter tmp_msg_2;
    tmp_msg_2.name.assign("IYGROZAMFRPMLFYTQNSUSHQWYCJKGZGQSQKKHHOKGFERWWGOUPCDYXDFWSBPSXKMVRWVXVLXCHNKRAEOEYIBDLRPUMPIMIZOXMTTSQABCUDLLTMTNNBADZEQNHHPEUJLIAAFOLNRYEVKBMJAIZSRSHTQZATTUGKFNXWUPRGRMWVAGYIQLKFVXPJIZLPFFJHDWCIYLBPDINCDHTGZYXOHKQJCXBWSNGFDEQZNOVVMCBBJ");
    tmp_msg_2.value.assign("ZNHTHADVQFWZTAYOGUTJBIQNHLKSGWNIBNWPKXLAYDHTTXIPCJJQCYKLKFKTXKQCMDOZZXPRIOYQOFWGSFJGDWARMMSBUCEFUFXJRPPADEUQTZCLYETPQOMIEGFVFXDQRTNCGPZUCOMJBMVMLOZUGSOBCVBSESMWIH");
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
    msg.setTimeStamp(0.61411782475007);
    msg.setSource(11944U);
    msg.setSourceEntity(247U);
    msg.setDestination(51902U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("LNCUDRNVRJHVFXMDDAJGOVAWZKYEXKNBEKWMWMGQCRBUQFLRHSXZSVUVRQECPXSWDOIYZKWNFABPTZRFPGIJAYUANTLMXGEGCLMYQGWCJLUASBAILI");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.07949193688044287;
    tmp_msg_0.lon = 0.36367013520266145;
    tmp_msg_0.z = 0.22782728018162746;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.radius = 0.9273411521200521;
    tmp_msg_0.duration = 21243U;
    tmp_msg_0.speed = 0.5853092574890717;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.custom.assign("UEUQSLPCVSSVQJZVTESBXBHTDKUWWSGEOKNXMZPKOMBVTJWQYNAWGBUBZFTZDPDMCOFSZGVYJHJKELYKMMGGWHPNFREQVSFRMLYUYFJEENCISXTFVVTFKXBWORJOLHVLHPLXDHMHDTHIMYJAA");
    msg.data.set(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 36431U;
    tmp_msg_1.lat = 0.4015220391591764;
    tmp_msg_1.lon = 0.8515979559840505;
    tmp_msg_1.z = 0.5897252532425198;
    tmp_msg_1.z_units = 134U;
    tmp_msg_1.speed = 0.8575453321686985;
    tmp_msg_1.speed_units = 192U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.44729556794333925;
    tmp_tmp_msg_1_0.y = 0.8627110291995125;
    tmp_tmp_msg_1_0.z = 0.6498495883085215;
    tmp_tmp_msg_1_0.t = 0.6888941360961303;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("CRRCIGXBVLGEDVPTPHCVMJFHHJZUIRPYQAUOISQLBMRUTVOPXWBWASNROBJDEMKLEZHMFKKUGTXPZVGAPXLQEUBOKPYGIHTIVAZKWUYBXFBEYNXZLCC");
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
    msg.setTimeStamp(0.5846326126302279);
    msg.setSource(64502U);
    msg.setSourceEntity(142U);
    msg.setDestination(45936U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("MQDIMYIVARDEEYMCPZAONREDJLWQMONELKIAOOUZULROXGGMQVPCBPOJNLSZWKBCUMMGIFIBGVUHTBXWFLLCXUJJYTYNEQBGMJLGVDYDKARHEUBSMLNBNWOKFCQNJPKVRRWPIVRXDTHHSDXVWSRXXTZAYCETDPZPTJHQMCEONUHFTIDVFNKBFYOWEIRALWSKHZGWFHXPGADFKQZF");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 28500U;
    tmp_msg_0.lat = 0.7788307855165645;
    tmp_msg_0.lon = 0.1461981184885207;
    tmp_msg_0.z = 0.9386855145717934;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.pitch = 0.6365087959423313;
    tmp_msg_0.amplitude = 0.4079973908753639;
    tmp_msg_0.duration = 56278U;
    tmp_msg_0.speed = 0.02532542806474858;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.radius = 0.19068382134283468;
    tmp_msg_0.direction = 14U;
    tmp_msg_0.custom.assign("SASONDXLWYS");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.8488746749675852;
    tmp_msg_1.x = 0.5941423068793407;
    tmp_msg_1.y = 0.8779668836731505;
    tmp_msg_1.z = 0.8589750495317092;
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
    msg.setTimeStamp(0.5058850772677742);
    msg.setSource(34783U);
    msg.setSourceEntity(192U);
    msg.setDestination(45982U);
    msg.setDestinationEntity(6U);
    msg.source_man.assign("XFXFEUTTTOBCXJMNBLSVGJHBSEXRITCHQIWCSCOOMGTORRGFHOZCHADYYBHDVDXCAUOOADZAYPSZFWJXKWFNVMISHVTNKPLLAQGNLUBKHZGXPUWEWJYFSZRVVEKCJLYUSRNBEIJGDAWEPPZXIKNAJQATJQRZVCYBDHTQJFPTNLMZTQMLQEBSNRWYQBWYRYAYZZGPXNGXJMIEMPURGIUPKUKMBFOKWOM");
    msg.dest_man.assign("SGSKHJQPKAOFRCEVXDXSHPMMLGTZEHZFVJZGUPFZHKARNIEQSQVOWTOBXYEQTLCJNFCHDZYRQMBODZNEOR");
    msg.conditions.assign("YRNMYODVDXEBGHWYPCFCJBEIUNBKTKTCPJXZIXSTNFJLDUTLZJOICESXVWSUCLYKFRUUTKOYZROOZRSGMPKDGCIKSLZGOHAGZHHKEQGEMMPSHHNWDIHLHJZNDWUGMVEJGNYZADSBBEARXXFIIQRHUFFOZSPTOYIVLOIBPCASLPQYMZ");

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
    msg.setTimeStamp(0.7605137907336948);
    msg.setSource(47467U);
    msg.setSourceEntity(254U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("JMHGOEGGIAMUVTBUGVIUVRMFKNCRBSAJQNEMFQIAJVZTDXGCRXDCNMKXZKNRLGQCWTYFMSOTECCSUJWOQDZYDOBAHOHSOTLKWLGUIYWHHFDUCVACJBKKWWHYMFXBRZLFDDJPUWBPZXAUYJUQINIGBBPSZZOASMYOLEWTIVELNGPPSRATWYDLSZMMKXHTALQEFFOXXIGUJDIKVTVZJHOKXPPQFEKPREWCBETHNRFNNLRYSZHDNQRYP");
    msg.dest_man.assign("BDFKGLRPSERMZENTMXJDPOUNIYTBMIEDNDHGMBBNDHJMFLBPCPQCWQQFCQHWXTKTNAJKKISWXLTVEVYRMBZQQRQVJYFXKSCDCXKSUVRUXCEMNSWZPZWJBCGOCYYOZSGOVHBPNJSGMASHZVUCMTPZZBMOAPYIIFKIWOIRRXLGNYJUTBIZGUWXKJLJAHOLFJEEUWSYDHEAGAFHKFWUNCDVLORUEUVTTAFLPYRDAYVWXDOLFAHRAG");
    msg.conditions.assign("PHOLNCIQBIRSQKUSHXOJVLJXCKDRKNLMZBCGCJARMLTOLEEWDU");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.frequency = 4163459846U;
    tmp_msg_0.min_range = 50363U;
    tmp_msg_0.max_range = 18132U;
    tmp_msg_0.bits_per_point = 27U;
    tmp_msg_0.scale_factor = 0.8953128862668572;
    const char tmp_tmp_msg_0_0[] = {91, -54, -82, 36, -9, 42, -33, -54, -104, 108, -51, -40, 88, 49, -114, 2, 108, 52, 89, 101, 92, 106, -96, -90, -30, -64, -90, 123, -2, -36, -87, -23, 65, 55, -89, -128};
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
    msg.setTimeStamp(0.6289477631300189);
    msg.setSource(36185U);
    msg.setSourceEntity(122U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(31U);
    msg.source_man.assign("ILARRCQKXQORQUJYJNSLEZLIIVUNIATTJGWSXRHFDBDQUCPVKUNGETYWJVBVPPGMLLCQVEVBETQIIHIXSYDOMUHPMCMREHRJNAFLJQADSLNJNTHDZHOUGGMGZXBSJYWHODOMPXZWQRETVRULOTTAZZXQLBFXAYHYWIZCYFTVKUBKCEZWGSCGWFNDWFKRFYEDKICDJWTSQMP");
    msg.dest_man.assign("LKFTEDCZVTFMJUACKGHQBNFTPHNXBA");
    msg.conditions.assign("HFBFHIJXARSZUVMRGCQXKYNRATZBETHDJRDCKZXZKXNFHVHMDAZNUNYPBSWBADZFGXCFG");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("CPCUFHQOPWDTBKVZTLDSUVVRXBFXCKAMADFOSARRPDXHVQWCHRCSQGJFJNDPHRUZHAFKDALSZPFWUQXGEBGVJLOKMIYUMZNRNYOEOOITSIRVCBESXXNAFXATNFCWDNEZKTRGMQIBBTULOPYHMJ");
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
    msg.setTimeStamp(0.6969673381395883);
    msg.setSource(22031U);
    msg.setSourceEntity(69U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(93U);
    msg.command = 10U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YPFIOLJARKZMOVFOVLWVZHRGCIEJNXZEADLCTERTWWVQFDEDQGQMRORRTWBPHOVOUDOCZYLHINZAPRVMYESOUIRCHZISBZFLGUN");
    tmp_msg_0.description.assign("CTYDTRXSGGRBXYQRBKVFMYXUDIQEYNPDHUFYHVSKNIZYFIWYJMILZUQNPPOOIT");
    tmp_msg_0.vnamespace.assign("JNVIGRZZVHHWMDZILEFYNDZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NOFFNDFFPBTQWJMMTTWYTCJQPRWKTHKASRDCUMNVBYNHMVZXBLYPKRHESWMXLYMDYUNPUPKWBKLHDVBNSAAHGOI");
    tmp_tmp_msg_0_0.value.assign("DGQBYAIWAVOAGOAJFWZQIQOHEJLTIMLLPDXSNXQYBNUFNBBHMQSPVBZQBVRMGILMPQTUFDRKDDEDAZNGOBFJW");
    tmp_tmp_msg_0_0.type = 159U;
    tmp_tmp_msg_0_0.access = 195U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BTBVNDWURHJBZAKSGETCYMDMCVGHHLMJYROQROEXISOGONUBNEJATKQSUBBGNATZJXQRBYFIDCMBLLBC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DMDTOSGAYOAVXVS");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 25462U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.08688748558768622;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9624797437306677;
    tmp_tmp_tmp_msg_0_1_0.z = 0.27521432917666877;
    tmp_tmp_tmp_msg_0_1_0.z_units = 185U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6309399714758648;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 36U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JHSRUZWGPSCRAHBCITDTYAJGOZDSJUZTLMHKUQRRKHI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::NeptusBlob tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.content_type.assign("FRPWOSSVJRYJGOJZOYJBYSYNTTAHBKWFMRRXNCKVZRFSJGEABAGFXEJFKGUASYNQAUZFVDKPICOAXNXGSTRNKWDRWZAHZCXZDOCLPLLEFYUBEHCVCLNUXDHIRMPBYIFLMNMTUWKIYXMOGAKOSPMYTTPKVWHHUCUVOVUD");
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {45, -65, 81, -67, 8, 83, 3, 72, -67, -111, -11, 63, 61, -31, 113, 14, 39, -52, -97, 47, 114, -95, -116, 90, 110, -84, 112, 75, 28, -30, -42, -84, 76, -71, 61, 9, 53, 2, 10, -119, 91, 15, 32, -29, -106, 109, 75, 75, -70, -58, 18, 40, 100, 99, 97, 109, -32, 82, -30, -128, 34, -114, -6, -12, 43, 119, -30, 77, -79, 82, -16, 67, -83, -27, 84, -86, 79, 119, 49, 0, -103, 111, -57, 47, 93, -58, 61, 26, 82, -89, 121, -20, 14, -26, -71, 91, -72, 88, 41, 76, 66, 94, -52, 117, 24, -118, 58, 102, 104, 14, 77, -71, 60, 2, -110, -39, 61, 16, 86, -30, 46, -102, 90, -19, 7, -55, 37, -38, 80, 116, -46, 126, -47, 6, -85, 81, 20, 87, -57, 33, -35, -25, -57, -34, -103, -92, -115, -69, 28, 21, -117, -2, -36, -34, -89, -66, 49, -46, -35, -109, 112, 49, -64, -24, -92, -20, -33, 38, 1, 55, 77, -120, 52, 19, -26, -60, 92, -110, 89, -62, 16, -17, 118, -50};
    tmp_tmp_tmp_msg_0_1_1.content.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Pulse tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
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
    msg.setTimeStamp(0.9808029464811945);
    msg.setSource(3537U);
    msg.setSourceEntity(149U);
    msg.setDestination(64396U);
    msg.setDestinationEntity(216U);
    msg.command = 135U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MTFTYRBRULXXHUDEIFHPDTWZWDESDBPVGQFHFLAMJEYHLJGJUZSYDMCTV");
    tmp_msg_0.description.assign("LXNYANDAVXXBGBAXVJSYVJMBDQOZILSQCAZGMQBZAKPLRCTBEELCXSWZZCPAJLFMRWOKVGFSYTHVUMBSPHBIONTTHSRNTIEMMYQQFYKSESTXOZKJCDUDPPGDBWUUCGXYRYJFIVMEHCEFVYCTLKJXGAEOWZLNGCLXMBADRPTKZUUDTQLOQPLYJIAZUNH");
    tmp_msg_0.vnamespace.assign("KOKBWAACXUJTFREHAQFUKHTNBPEAGACELYHYCAKBILWRTBDDVKLFWKYSICGXOFCMPGWNOSHDRKHIGXIVCNWDDNXECIMZLUHXOJGCSMVJRPIQBZVZPZEERPVDBRGETJNDMQBXQPJMEFQSNSMALPWLALMKFUKOTWTOZBKECVVDYFYZJSHIVQDINSHMOZSJMODRNRQYCYXMZZUJYIHSTLAFUXBWGQWTQFB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HFHAXMVHFPLNIQCUCEYQVGAXPYHKWUKTTCCBRZWFQLOOXTCIASJBXMJONUIKMESZDRTYUKWQQFWIEARMLGUMZQINZTGMBLZEJJBMXHCSGNPIJGJMGVFVAAVATNPYECHVXNDBIULFXOAOYWFTNHQOXSDEDGCDPEZRRQVG");
    tmp_tmp_msg_0_0.value.assign("CEYQBYNZUSJOTUTUSEYFXWFBYSCKAZKZLIHXMUNATOWL");
    tmp_tmp_msg_0_0.type = 125U;
    tmp_tmp_msg_0_0.access = 130U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VJUFVYPNHCLXTPCXATDKXNKSJYIXTHWZISRQOIMLUNVGPYTCZQTSZMBJJSLKDSGDMBWCBCFEVFINRFZERNUOZHRZLHUEVQHKOYSTXGYWKAGIGCPQHSYAKQBSEKNJWMMWCIQRBJXRMPQPPVFTIEYUTLRJXFFLLDDGYHOUOOA");
    IMC::CreateSession tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 2177388432U;
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
    msg.setTimeStamp(0.6486632056640782);
    msg.setSource(55569U);
    msg.setSourceEntity(82U);
    msg.setDestination(4645U);
    msg.setDestinationEntity(95U);
    msg.command = 86U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FKAOKZLTWNFIWNHVVRACAHXIVVGJBIGADVSDQUKCQNISDIEWOUTYMOXZNZJQUJBYJXMJOMAYRKEPWFWPHLYOBIRBXVXLQTQWPVSKSUEHAGAIZTBFNQZPRYDORSXZTLIYETMMKFZPEDSNCZJCLECCLPHCSHBAJHBNDUPEPTJXEXBMGOULGGRFXVARROJMMEICRUUGDVQWUQBGTXGRKYKEJHGPNFQCF");
    tmp_msg_0.description.assign("EQOMRSWGVBLCSJLWBECGGRSHWKVKQZOGITFHQLMJZX");
    tmp_msg_0.vnamespace.assign("ALJOHFHFIUIDTLEZJMBVNMRXEYRFVBNSBNGNNBYVFZLXYLZIDXPLYGUWXRHDFSOSADNKDHZNFVMWQALIEVBTQTSCUEKLZJWMEPOERSYTQYWRHUYEBQYCOPHQDGMWRZPMGVIKFGUUSDBASGSCCKSKITFTCAGEHZNRTTIDDXVMWYGLUXPFIGOWKQRMPTVMYIOCKMEBJRPKOCPGNOZJJC");
    tmp_msg_0.start_man_id.assign("CAWQYITPAEQFKMBHVWKLSMMXUUOBURYPBEWYWJMCCIIWOFELVWGQPNHZBKEERKFEVPZYNNSMWZNDRG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HLHCAGYVZDZEGRBNDISDVLYGUXZQVOBKWHMZPKRGNNRNTAYTZFWUOEICPFNUGYAXRNJWGRLOLCPVGMEDPXBDSUJCYZSFJPQAFFBWTWWCLDCPBFXHLCTRMTWAKGKBBVHOSVCYMHKFIJRSREIFNSRYOJHOHVGSIEMPZIMJBP");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7835197189277566;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5430711779676063;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8046931808325983;
    tmp_tmp_tmp_msg_0_0_0.z_units = 33U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.43664449451664156;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ANLUMXSPMCXOAMMQOKORVWUMWRHCK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PopUp tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 32037U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.4300102182553237;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.3331517361316284;
    tmp_tmp_tmp_msg_0_0_1.z = 0.5738522279355655;
    tmp_tmp_tmp_msg_0_0_1.z_units = 248U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.8862584299446897;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 251U;
    tmp_tmp_tmp_msg_0_0_1.duration = 38011U;
    tmp_tmp_tmp_msg_0_0_1.radius = 0.6506865821904279;
    tmp_tmp_tmp_msg_0_0_1.flags = 65U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("PUKHGUEACNOKQMVCVEZOCHRQBBNTRIJNFZLCKYGZXSWHXDEORPDOYVWOLNQZAMLXSWVQULFCBXAQSDSARGMCTXUPGWERIDMEUMPNAMLIHQSCZMDFBMIGFPJFIKNUGOGTZNCJLNYHDLUYDYMLAHQFTEPOSAVYTGYBEDAOTGSTNJKOWJMVPQEUBKJSSSUQUFKBIOCAVEFIAXEPWXHXIWJFIRLITKFYXLKZDRXVVPBJRZVRHCRZJWDZWJQP");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::MsgList tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.738177228364709);
    msg.setSource(19409U);
    msg.setSourceEntity(207U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(10U);
    msg.state = 138U;
    msg.plan_id.assign("DPLSAPJHTEVE");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.06023299569879903);
    msg.setSource(12947U);
    msg.setSourceEntity(213U);
    msg.setDestination(11390U);
    msg.setDestinationEntity(121U);
    msg.state = 104U;
    msg.plan_id.assign("PAEODRPBURTVRRXJAJHFPTIHNKOPLHNVZVNPXU");
    msg.comm_level = 96U;

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
    msg.setTimeStamp(0.9562770177903348);
    msg.setSource(16226U);
    msg.setSourceEntity(253U);
    msg.setDestination(2864U);
    msg.setDestinationEntity(55U);
    msg.state = 249U;
    msg.plan_id.assign("PPATWRHNRTAWLOBXCEFGYHJXIMDGZOFQJZHCTHOSIJDJNTNHWFABKOPLYXUBHZTULJEKCUWSPIUFBBWQSUAMZQKVK");
    msg.comm_level = 4U;

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
    msg.setTimeStamp(0.5487874148407594);
    msg.setSource(20117U);
    msg.setSourceEntity(59U);
    msg.setDestination(20110U);
    msg.setDestinationEntity(1U);
    msg.type = 185U;
    msg.op = 217U;
    msg.request_id = 64309U;
    msg.plan_id.assign("DPDDFCUEZLGAJQCGRPNLFPNJJJTXUXELDEWMXTZNXZXYLRIJBJOKVKQFRQLNEORUPNWHLPQDCQBTKVGJFIVY");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.5761384540144783;
    tmp_msg_0.lon = 0.7369920726022013;
    tmp_msg_0.depth = 0.39348855982845554;
    tmp_msg_0.roll = 0.6570346740521277;
    tmp_msg_0.pitch = 0.07240986191055854;
    tmp_msg_0.yaw = 0.56902111849027;
    tmp_msg_0.rcp_time = 0.3544143198753208;
    tmp_msg_0.sid.assign("QEMXNQLKCRRYBAJDIWYNISHKEIKZPJZZRVNNAGUUOKGPBZZSQYHYMOVQBORXBAZCMBZDJIOQPUTQFXJTLHERBRFJCALOKCSRXTGXXQTDPJTXGLOOXPYWTFNKEQLPBPMGKMVWTUOWC");
    tmp_msg_0.s_type = 90U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JKHJLUTVZZFRMUNKBQBLPQADBOIANESDABPPQJKIUXCYOYTDAYHDWBJCOWEQIKDGPFUCVUYEVEZDSUFRQEWWGMCRBVSAHGYGZPKJONOMXSBWMEHOMCQLLAKNGZBIRYCLQIWOQXHRHKRSABZGIHDMLNJRTVYTCUGZTTZPRQXDBLAHALMJE");

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
    msg.setTimeStamp(0.049227185631423365);
    msg.setSource(35596U);
    msg.setSourceEntity(208U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(79U);
    msg.type = 182U;
    msg.op = 155U;
    msg.request_id = 17060U;
    msg.plan_id.assign("PGXFLEKKWULCPQDJYSNCSIVMOJMESJUSOTEGJMKKYQNOCSGQBLMNFBLQCCOQYWQUFKNNVPHMYLRIAXZQOWEOOQCRAVRAPBOZDLJNFHTJAWAKAURZSABFURUZMXFBKRTIWBPXUTSVDGBXGYQGDEUJVSPCXENCLYDLGIXTEANYRVWKHVGXGIDITJDHBWRADRVEFDDKQNOZBVZXPWBRVUWHGSITEFFZZJOATJYSI");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 58U;
    tmp_msg_0.text.assign("DZHBUKECMTZQJHOLVUSPQPFXSYTPVOUZKEBTCJXVVPCVLYXRQDMYRZQJGBGOHUNHMPWFNCQJHRRWFWMVLWZHHSVIIGFXQFZGOWBUWLLGPAPTJDCBCEERMUESRMKCYGIFQWDUPTPKDIBIJBANXZWSNZYRKUEXXEJNYNHSPQVTQLQSYUSCGEFAJTGONTOAZMEFKFAKAWMWCEXH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QKGMUEVQHXKFVPRWKCNWOIQVFDOQVFTRAXYRPNUBVCBDZMRAMAMNXYBEYKZGKHXTLDHKMVERGPMLCPAHLPXHRJGJBOAHZCYBZRWKOLEGUBFNOSTATTCEYHTLSPQFPDVOFSMSQVGMOSBDYYZQNAZMUQCJLXRCATQIDIUDGTYIWFTAEHCJGWMQKJLEZNNIPXWUHWJZNNITEFCGJUUVDWSUULBVD");

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
    msg.setTimeStamp(0.6275063942339161);
    msg.setSource(60632U);
    msg.setSourceEntity(185U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(231U);
    msg.type = 59U;
    msg.op = 20U;
    msg.request_id = 15233U;
    msg.plan_id.assign("GEXBAXSHWBCOUJTOUGVTVBCCYLDOQIWBELQJUZIGGYDDIVPZKQMZSHXPJXYJQVWJGUPBHCOREMVZLTPSWSADMKXTXQNE");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.6354648981131991;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MBGSEDXJQNHRIGCVXNBSXAN");

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
    msg.setTimeStamp(0.5850449951170942);
    msg.setSource(29418U);
    msg.setSourceEntity(206U);
    msg.setDestination(10887U);
    msg.setDestinationEntity(250U);
    msg.plan_count = 7372U;
    msg.plan_size = 1191543567U;
    msg.change_time = 0.27291980806594573;
    msg.change_sid = 37508U;
    msg.change_sname.assign("VHHXPXITUBAYJVWJXOBKFHNBFTZNFZNIUZGQCMGMVDOQJUUIJTCZAERIQNZEXSEISBERTFYARIOIVHZYKHOBIOSQDMLEIWGVHNFCLNYWHXSUOCPDYPTSYDFMAOSEAYJUVZAQLFBXPHTMWYMDOSPXSFCDLPHMNLUWQIJLRVCWKKYEDNRUKZWZRTXRMBJ");
    const char tmp_msg_0[] = {-23, 59, 68, -41, -48, 115, -77, 23, 84, 35, -14, 58, 102, 83};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FSWQTILNGKGMLOQJDZXCYAIEVJSMTYJNAUHBHOVWFTPERRSDAWXDYTFHFZKGWTKTKSEZHVEZLUHOFJLXNZBTPQEQTNOLQVGBLAVDPYIMOIBREQUUMQWMHLYXFKBSVEREXPEHQYWPMCAC");
    tmp_msg_1.plan_size = 14468U;
    tmp_msg_1.change_time = 0.2601943295491259;
    tmp_msg_1.change_sid = 8424U;
    tmp_msg_1.change_sname.assign("LBVYVTBAVKPHHPGQXLICGKNFCMFIVIDLQJLOBCTSYTCFEAEOBHWMXORDGBUTIQKASN");
    const char tmp_tmp_msg_1_0[] = {54, 95, 31, 64, 53, -95, 31, -93, -59, -25, -26, 10, -48, -119, -119, 97, 96, -61, 114, -115, -34, -90, -31, -117, 89, -93, 53, -113, 20, -42, -95, -61, -60, -92, -39, -27, -7, -23, -109, 99, 15, 62, 30, 92, 110, 33, 95, -80, -25, -109, -40, -108, -79, 94, -26, -51, 108, -109, -3, 97, 77, 111, 108, -42, 5, 67, -35, 34, -88, -91, -39, -73, 3, -55, -59, -86, -100, -126, 121, 5, -17, -103, 86, 31, 60, -84, -62, -46, 22, -51, -15, 15, -79, -35, 28, 122, -87, 1, -122, 18, -123, 116, 52, 37, 27, -69, -50, -5, -76, -20, 60, -40, 2, -21, -25, -35, 0, -83, 100, 39, 25, -39, 44, 9, 13, -79, 109, -32, 71, -22, -7, 73, -25, 79, 17, -123, 71, 83, 13, 57, -60, -31, -122, -33, -87, 83, 12, -122, 121, 100, 48, 99, 114, 51, -126, 64, -14, 87, 125, 5, -107, -2, -31, 126, 29, 81, -4, -123, -29, -126, -112, -35, 92, -5, 67, 41, 24, 23, -54, 104, -95, -82, 101, -69, -54, 98, 71, 25, 25, -91, -3, -82, -108, -24, 121, 98, -106, -95, 22, -30, -61, 38, 120, 93, -91, 87, -23, 109, -80, 62, -22, 76, 111, -124, 27, -57, -40, -31, 72, -12, -44, 58, 105, 50, -92, -52, 121, -84, -125, 32, -27, 94, -81, -105, -99, -128, -19, -66, 74, 3, 5, -93, 32, -6};
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
    msg.setTimeStamp(0.9273844816828911);
    msg.setSource(42853U);
    msg.setSourceEntity(91U);
    msg.setDestination(23004U);
    msg.setDestinationEntity(76U);
    msg.plan_count = 5930U;
    msg.plan_size = 3982879738U;
    msg.change_time = 0.3814687183249662;
    msg.change_sid = 62463U;
    msg.change_sname.assign("UEPDJQXXTJRGVEFNABZMRXSIB");
    const char tmp_msg_0[] = {-41, 113, -27, -121, 7, 67, -59, 41, -74, -106, -49, 76, 113, 110, -52, -83, -27, 54, 60, -22, -64, 96, -118, -64, 12, -128, 4, -5, 90, 125, 124, -109, 60, 62, 5, -43, -63, -11, -51, -68, -46, -28, -104, -88, -107, 97, -112, -101, -115, -100, -44, 59, -64, 113, -110, -23, 97, -6, 63, -103, 15, 101, 125, -80, 80, -78, -92, 83, 36, -84, -50, -89, 13, 28, -36, -118, 105, 36, 17, -111, -11, -40, -3, 34, 8, -76, 76, 17, -103, 82, -29, -68, 56, 50, 108, -64, 82, 97, 27, -33, -117, 48, -77, 16, -108, 106, 34, 59, -36, -107, 85, 14, -114, 60, -104, -114, 41, 104, -80, -52, 52, -12, 76, -41, -122, 0, -77, 91, -121, -108, 81, 78, 29, 83, -39, -35, -22, -126, 122, -28, -30, 67, 113, 17, -1, -52, 22, -19, -2, 30, 123, 8, -46, -92, 21, -39, 108, -126, 51, 126, -98, 95, -83, -118, 39, -43, 16, 30};
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
    msg.setTimeStamp(0.29050321955251135);
    msg.setSource(59752U);
    msg.setSourceEntity(188U);
    msg.setDestination(63348U);
    msg.setDestinationEntity(48U);
    msg.plan_count = 15888U;
    msg.plan_size = 518545653U;
    msg.change_time = 0.908419344511317;
    msg.change_sid = 33770U;
    msg.change_sname.assign("ZGWZEVUSECQOTEKXHTZBOLSRFYWHEGFQLWRGPCPPTUKNDVRNDDPVTHRRJJAQLFKNOZYDBBDLYKATKREILYQQPUAALEWVEOTNQMVVOAMGZTBROIWBZJXAJCXQLTFLNXHDGYZMDGCUQJWOVDCREXFSBYYZMSTIUJFIIGEHFIUDYJUQYIMNFAGJGIQBHNHBXFJHIMXYKZJMTKCXEPVHPORSSCDKASFOSBNWKSMHPLXVWNUIBACZNC");
    const char tmp_msg_0[] = {36, -10, -30, -81, -84, -81, 32, 66, -59, 61, -112, 79, -47, -3, -44, 59, -45, -88, 125, -115, -64, 70, -24, -62, -75, 22, -71, -63, 10, -84, 26, 17, -125, 47, 120, 9, 67, -86, -66, -4, 38, 88, 36, -77, 30, 122, 92, 119, 17, 66, 53, 33, -62, -35, 72, -16, 23, 71, -67, -74, -21, 16, -40, 106, -48, -81, -19, -91, -24, -117, 24, -45, -125, -87, 55, -116, -68, -68, 7, -91, -92, -9, -27, -23, -123, 97, 119, -85, -35, 12, -81, -114, -99, 75, 109, 112, -102, -29, 117, -56, -56, 33, -83, -79, -122, 117, -38, -42, -38, -62, 84, 44, -65, -60, 45, -80, -25, 72, 112, 62, 38, -17, 124, 60, 0, -125, -70, 55, -100, 57, 31, -122, 92, 1, -112, 36, -128, -102, -101, -125, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GQCTJOMTENUCIIKCIXRWHBLGLNYFLYZANTYCSMJURHCLYPVXYMZTAOFDXRWDHNBNGIGNGMSZPWZDVAKKQTFJJSJYP");
    tmp_msg_1.plan_size = 27920U;
    tmp_msg_1.change_time = 0.09453254978711967;
    tmp_msg_1.change_sid = 51125U;
    tmp_msg_1.change_sname.assign("TUWDAHWMIZUOHFJYTENJZFRKKKXMBVLPDYASVUHBXMVIQNSXRDVRYTEAMEUKTKAPETSJJCOACABGGWHXERPIPKWUSIBNSIGFZISHPRJZFHMTPRVJLNNIGYFELUGTTMMFGLPNHDUOSFVACALXQBYQFPCJUQPXNZEHDWRXWJOQAHYMCQXHCZIUNQZMZOSDZSQRSBDUVOTJTLBFKDKGKXBYALOCVWFLCGEQZMWBWDI");
    const char tmp_tmp_msg_1_0[] = {-114, 40, 80, 110, 50, -89, -89, -115, -73, -50, -34, -28, -40, -41, -61, -26, 57, -121, -6, 17, -98, 79, -28, -76, -121, -19, 22, 102, 33, -16, -69, -118, -84, -17, 61, -45, -123, 22, 78, -118, 93, -36, -2, 4, 0, 86, -56, -65, -69, -111, -115, -122, -40, 61, 0, 16, 63, -121, -46, 118, 24, 47, -20, -100, 43, 74, 126, 84, -41, -99, 65, -71, -76, -73, -92, -41, -90, -124, -115, -23, 32, -87, 33, 43, -99, -120, 99, 70, -95, 38, 115, 121, 65, -55, -93, 50, -19, 85, -97, -42, 0, 126, 34, 102, -2, 126, 53, 94, 86, -102, 54, -102, -97, -27, 37, 103, -36, 65, 13, -21, -41, 63, 121, 81, 48, 95, 22, 78, 124, 20, 32, -13, -87, -98, -40, 45, 5, -39, 34, 83, 38, -32, 2, 40, -73, -29, -58, -40};
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
    msg.setTimeStamp(0.20891727625252166);
    msg.setSource(14905U);
    msg.setSourceEntity(40U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("PBMSZIEOJLYHLIANAPTUMKDPXSQKODVSJZFVPOBPCRQYDGRDZPVBSBMFCAGBQLPHINSEVPSWYXHRZXTLXJCZLBJQVTZGMJONRTMUHYWTCAWQHHGFIUDTXASILUFYFDKJMCOJGHIRFKNTHTSYUFABVNXXOKXJTCGRWRIDKFICWEFLENISC");
    msg.plan_size = 42398U;
    msg.change_time = 0.7740424482233567;
    msg.change_sid = 4079U;
    msg.change_sname.assign("CTMGRNUOFPGWHIEZVFMUAHHYTSQXRFGXXULYDXFDRZUSAOUWSLERAWZICMWGVCEVMJABDQIPOJYANUHLIHPECFZHKKKGDOWTWAJIPBROFCOYMBRSJJMKFHDCQXOVVHLLZPGDQVBDWVYSDVYNQEMNEZNWGCZBPNKIYNTXFNVRMYXQFNBBBTQJCT");
    const char tmp_msg_0[] = {-5, 41, 18, -62, 17, 27, -24, 100, -10, 54, -124, -74, -6, 6, 33, -124, 80, 99, -27, 11, 56, -30, 11, 52, -55, 74, -122, 72, -37, -8, -21, -83, -97, -21, 104, -22, -65, 106, -13, 81, 36, -105, -96, 109, -8, -3, 77, -87, 25, -88, 9, -113, -58, 40, -121, -56, -49, 45, 82, 29, -72, 53, 115, -64, 4, -122, 79, -95, -92, -51, 46, -86, -37, -114, 63, 61, -30, 31, 99, -42, 32, -89, -81, -37, 89, -72, 6, 64, -57, 115, 45, -51, -58, 118, -39, -77, 126, 106, -11, 2, -112, 53, 85, -27, -109, -88, 103, 3, 15, -19, -69, 30, 10, 2, -85, 110, -84, -82, 123, -105, 35, 73, -17, 93, 2, 68, 97, 51, -48, -73, 79, 51, 2, -78, 15, -124, -113, -44, -37, 17, -51, -76, -89, 93, 100, -112, -123, -69, -8, 22, -2, -14, -113, -13, 27, 59, -97};
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
    msg.setTimeStamp(0.11710323244764953);
    msg.setSource(42997U);
    msg.setSourceEntity(122U);
    msg.setDestination(26521U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("MPWVIZFJHPGUGTXPRHEPAWAUACURUXTIGROCESNVCXONAXLXKLLDHBBVABYZNKNZRQKFZOIBSZADDNXYWAZNUQJVMCEOGEHFYKQXPNUGDCTLZWNDTLPCKXMPDKEBVYQOEVYQSUTMUJARZIWUPVYWOPRLFQSTIRICSWIFSYEJZTLUAJYQ");
    msg.plan_size = 18234U;
    msg.change_time = 0.9145002467863947;
    msg.change_sid = 38236U;
    msg.change_sname.assign("YYPACPBQAZSQMETBSRTDKPBZGVCQENOYFNMCGQTRIYKXFBPKWIIFIWKAQFDFOWJCEPLXEZHCUBORKVNEITRNKAAGVWDVIASSVXFXVMWTZMRMUMJHABOXOJSSDQKPPJUZXRCJNBELKPXNVHOMIXBGTANHUOHBJNUDLSCQWHHOQRDYYOHMTIRFDLLCLZRUKRAZGTVLMMZ");
    const char tmp_msg_0[] = {-95, -62, 73, -1, 35, -124, 101, -60, -19, 71, -101, -12, -86, 102, -74, -18, -124, -83, 105, -2, -49, 1, 42, -14, 77, -105, -120, 97, -121, 125, 81, -52, -31, -116, -54, 100, -71, 87, -125, 52, 71, -90, 103, 20, 115, 38, 78, 44, 29, -93, -84, 120, -94, 13, -47, 101, 96, 88, -50, 87, 55, 41, -122, 87, 82, -59, 6, -44, 49, 65, -25, 48, 8, 46};
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
    msg.setTimeStamp(0.5436347673579387);
    msg.setSource(49042U);
    msg.setSourceEntity(184U);
    msg.setDestination(39883U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("YOPEXSMIQVZNQDERHPNQZPXWDBZJMTKBPLEMIRZLSXSQOMFKHZDOAAJQKSEXCDJUGCF");
    msg.plan_size = 30089U;
    msg.change_time = 0.8326245733303195;
    msg.change_sid = 63848U;
    msg.change_sname.assign("FMMLQJHTINTVRJNZLOSFEDHPDAQIMBMERKRLCWUYODCFAMJCJTKQBZIQQPAHRKSGEYXPZKXMLKVYHJFJAXSNGMERXFPRWCMZOWDIHYCEYN");
    const char tmp_msg_0[] = {-58, -88, -55, -43, -62, -103, -94, 50, 84, 17, 56, -93, 42, -37, 111, 62, 16, 26, -116, -52, 114, 121, -5, 33, 119, 72, -56, -124, 113, 30, -22, -7, -26, 78, -36, 24, -125, -26, 18, 23, 8, 54, 7, 2, -66, 99, -23, -98, -22, 23, -28, -43, 61, 125, -68, 9, -71, -125, -16, 73, 38, -120, 49, 104, -125, 78, 125, 0, 34, -86, -100, 8, -97, -84, 73, -22, -14, 44, 5, 11, 107, 108, -62, -46, 75, 67, 44, -80, -37, -69, -16, 67, 4, -121, 119, 66, 122, 51, 110, 59, -56, -57, 124, -57, 104, 111, -127};
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
    msg.setTimeStamp(0.14596802953649368);
    msg.setSource(57384U);
    msg.setSourceEntity(17U);
    msg.setDestination(24008U);
    msg.setDestinationEntity(244U);
    msg.type = 3U;
    msg.op = 167U;
    msg.request_id = 26335U;
    msg.plan_id.assign("NUZRZUEGCVRPLC");
    msg.flags = 59684U;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 177U;
    tmp_msg_0.value = 0.08672498361304826;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YARPNMQLJYDVTIKVZRDJMWLVIKMEIBQKEWHWGTSOLBASCZSNDBODQHYMPXNCWKEAKVCDFSZZWYJSPHREJJFGXGDFZGBTVENUOMIBOEEBTLGQCHUVUJSZTWZMABSYGAYRHFYNACUFCTURYDIHXY");

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
    msg.setTimeStamp(0.4188972084384168);
    msg.setSource(46157U);
    msg.setSourceEntity(181U);
    msg.setDestination(59399U);
    msg.setDestinationEntity(68U);
    msg.type = 67U;
    msg.op = 58U;
    msg.request_id = 56800U;
    msg.plan_id.assign("NBJOBPKNNDZKXEFBVCMWCJSWUFELWIEDPTQUYUCCMFVJCUEYMVRGSPYNMNZSRBPOEKWSIHQXKYJMDLJPUUBIVRUZBGREVZIEXORADLGFRTJPYAWZAKBOKGQHNQZNFWXDFQWQMIGPZQGMARJUHYYFESYFH");
    msg.flags = 23707U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 126U;
    tmp_msg_0.op = 123U;
    tmp_msg_0.plan_id.assign("XVJNKUFGDWXPAEYXTBKGKMDYISKBBGETXHZSZFRRXPDCICQQVFHXDNORSFEJQPIKJMOCGEPDVKDCVSIUGJALTFQRCYZHEXIAVMZGCBQSKRQOHBYVLCXNLSUVIEMRTOIJUWMPQWGCYZNQTSVZOWTUCPZGZWJLKWSIRQYDVMHHYJZSTYLAWATBAMANOOMDIUNGAOKUUYBAQGNPXLNFDLOM");
    tmp_msg_0.params.assign("QCCPRXDDUXXNQWNJAJYFIVYIDTFQNOBEKFOUNORAPVUASHIMCGHVJMRLLKSMEDJDQIXACNKYQSYPHXRZUWTQWNQSVPXWFTXOLLOIRZIFQBCYMPZWVTEKOPAAKKTMFCVSRVUILYKFMYQHHGNJTXECBUTZLYBINCXHIBWJJTGUCNFBURMERBZVMTSHSGPREMNKHWGYDGULAMLDSWFEGBEHWZPQZSBOCOOS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GTIVNLUQVPINJCFKXKMOMSWVPYYAKHUMKHBJKTSUFYFPDCEARRSJYEMTXUKZBGVBJECDTHGTULGWSXWBHXKSIFTXTAWWLGPMIZEMIFNJZCQGUJKRYXIILCBHDMBAXQQRVZPDFEEBXXLWWCPHQRAQAVJPOMQGYLYIKNSE");

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
    msg.setTimeStamp(0.43009544222509355);
    msg.setSource(64411U);
    msg.setSourceEntity(46U);
    msg.setDestination(33386U);
    msg.setDestinationEntity(37U);
    msg.type = 172U;
    msg.op = 160U;
    msg.request_id = 45424U;
    msg.plan_id.assign("ZSYUPWUBBVTSZOLEXPCISYCMIOLBRIIYROAFWKDPGZSQOENTFAGPWEOHUMEDARFCLIJVRPGXGFEXXBQZDEWSYVQPSHUMBBMQCZBRRLFDDHMFYRSJQZNZYTLHBBQCILKJXDVMSJIBUHOKXRGZHSQIOCWICCTUWVUGUGXFVFAJPLIAPJMMKCMTEAOZDAUW");
    msg.flags = 44928U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 23973U;
    tmp_msg_0.status = 61U;
    tmp_msg_0.text.assign("AIOIJHYQJGDILJGTQLOWXXLMSPNKRVJPPMCBUUCHZIPMOY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NAEQWTDGRIJJTSUCSGTBS");

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
    msg.setTimeStamp(0.1356249417591573);
    msg.setSource(53138U);
    msg.setSourceEntity(0U);
    msg.setDestination(38844U);
    msg.setDestinationEntity(66U);
    msg.state = 94U;
    msg.plan_id.assign("RVAAHZIHWLPGHYSWYMDCKTTUESSCFODHJGRVAFXQTXRNAKTGUDTUMOGZKQPXDSWMSXEWKLBPNWBPZAZSFXKDZKOKCQFQJNHZOLZTLRHRAPMIRFIONYPCDHWIEYMIGIUMVVQVMNTIQYHLUEKYONCUXXWCJCGKBOBGWVEYMIISDTAVOLZTNDREPHOGHPVUYNFJBPKFBSNJEJSNBBZCYCMJTAUCGBRQRFJEOURQLFMWVJIZPXAQQF");
    msg.plan_eta = -954902033;
    msg.plan_progress = 0.42302663373007676;
    msg.man_id.assign("ROCGSTFNSCVMEJTJEIZWYQEXNFZLIFJDQKWSAQNEEASVZQOKYZRFOVDMXNIJGKLYXRGPTQPCWTBJRAVNXPYHDXKDJROXZLTMUJGLPKTTHIRHMRHTQUBCOMLRFHNQDPYGJEVVPUBXVACMRHUPACFUTDFOSGXLUGUMWLDNKIGSAOCWZLQCBSOPMRHMHCUIYKKBIIHYADOGE");
    msg.man_type = 9594U;
    msg.man_eta = -694031208;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.14324919267066316);
    msg.setSource(17683U);
    msg.setSourceEntity(174U);
    msg.setDestination(56383U);
    msg.setDestinationEntity(22U);
    msg.state = 27U;
    msg.plan_id.assign("DPPYIBNCJZDXQESYTQFVPHPZKMTQFIKHVYRNXXIXFMAPZSGYSUXFUYW");
    msg.plan_eta = 1082955621;
    msg.plan_progress = 0.36113401664354905;
    msg.man_id.assign("GCGFWJTAHUCSDETYIOXBIASEZPMKNZJLXTBGMABIGNYUZPMJGNAKZHELQIFYDWVBVZAXJVQKIQESBVVCXNCRTHAFQOEWHNK");
    msg.man_type = 9665U;
    msg.man_eta = 19876262;
    msg.last_outcome = 95U;

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
    msg.setTimeStamp(0.6649797743637803);
    msg.setSource(15252U);
    msg.setSourceEntity(209U);
    msg.setDestination(21540U);
    msg.setDestinationEntity(82U);
    msg.state = 26U;
    msg.plan_id.assign("PDBPEHJUIMGOBYMWRYAYXFXDBAEVLTZGLHCOPYHUHWMNJLFKWXZSMIEZDRKALUANQVNQEVUEOBDMICTYYOPIPXJSGFZGMYGCNADKBBVSQNBCQOCJPVFTOXADXFGJGLRKNUYKUTDJSEPVHLXVWTBDOTCKFCJAULEQZMKXXLF");
    msg.plan_eta = -1818785903;
    msg.plan_progress = 0.07419708656972879;
    msg.man_id.assign("GNBPYZCYHTHHRYSRQJSEM");
    msg.man_type = 57360U;
    msg.man_eta = 1330080987;
    msg.last_outcome = 136U;

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
    msg.setTimeStamp(0.15328214532956186);
    msg.setSource(11402U);
    msg.setSourceEntity(225U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(2U);
    msg.name.assign("IPUIDJRCUNSCPQMFZASYHZXZYHJZZEVMQYLIGVOLELHBHBXTWKDKFHZNDXSGWFQAPHJEYOBKNNJKIFVQKQBTSINMLOYEPURAMXSXYSMMQTNWFIUJWDBGDAVBHGUXWSGNXPZBKYCWQBHPFKTIAEKOKLJOURTYLNJFVIERDRJVLBOUAGAUHXEBZTVXGDMZMJXRURQCQCOAVEFSNGELPKWRCFDLTMATWQPSFCIZOPCMCDLVI");
    msg.value.assign("UGACFMQKZVINQKNAWXQSEQAFKJGZMPMSPMVLSIEAENXOJLDYYJOCCDMHWRUTWTSNCBOIAYGTDTPNAKEYKPRCZHILJNVJSYUAQIWWJMWKZJXVHQIFXRMAEHQOFTPVYPWOQPDRNUBTZBTIZHLLRIGOJOEHMHBXGOYWVUGFUHIXDPTWCPNSLQGTERKCLBBQVMVUKWCRRBCGZDFNYRAOUXHBPEY");
    msg.type = 45U;
    msg.access = 2U;

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
    msg.setTimeStamp(0.02215133216153542);
    msg.setSource(58967U);
    msg.setSourceEntity(8U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(34U);
    msg.name.assign("FKIKJOPSQTPXNHXUOLLBGDFTMZUZ");
    msg.value.assign("KTQTCKMGNPCGKVCFKWBMQPWVNVZSDIEXWL");
    msg.type = 9U;
    msg.access = 238U;

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
    msg.setTimeStamp(0.11759763855369232);
    msg.setSource(5341U);
    msg.setSourceEntity(13U);
    msg.setDestination(18157U);
    msg.setDestinationEntity(201U);
    msg.name.assign("QCSXRLDCBMQUCJRJKVWFPKNYLJGLKNEABHEDNFDTHXZGBUXKGZMSVTXAIGMZZXEFMAUDYSJEBPQQZUJITDEBIHUBKEDZXPHNINJJGBYOGWWAEIFTQOYRALMAQECYOSKKYFFVDRPMPWYLRUCKAPASOHZCMEIBCTSVCNQRZKLNIBXWDACSHOOOFHSLIJUFSUPGAWHNLVGBTKITMPLXOMTFVEQROVRWJLFQZDURNIGTHYCTJOMPZWVPWSYG");
    msg.value.assign("YHOMKTPMIDCEPSDGQHDQAJTPKIRRMKHJJWUBIHMPLYAZIODVXRXUJFBQSDMSCSCTJSVOWNYNEQNNGSIZPBFYNOVCXCPVBIGRQ");
    msg.type = 42U;
    msg.access = 73U;

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
    msg.setTimeStamp(0.08548230287222092);
    msg.setSource(10810U);
    msg.setSourceEntity(180U);
    msg.setDestination(21729U);
    msg.setDestinationEntity(19U);
    msg.cmd = 10U;
    msg.op = 79U;
    msg.plan_id.assign("UWZMFDWOPXZWIZRCJUXRNVNERKLPKYZBBHYWCFRBOHKITMOEXJFKULBRLVGHRVEBTTUIFHSQQMKGLNEHCJDFPTADQSEASPIVIJNAONWCEOIWAXETXYQGNCRSOIGUBNQSPUKHLIWHPLQCAYQGDVJWLPAXJSSTFDGVRKDSKODYXMPJAXQYTEDKVJ");
    msg.params.assign("AETUXGKWVBUKNHDAZAPQJELQGZIMNQCTDBREPMVYHKEXFKIKGMWQHSCSUBCHQWQZLKXCZWDNBVVNEVIEGVQZPRXPIYHAUTIXFSYPDHFOITDUOAX");

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
    msg.setTimeStamp(0.6093674166210777);
    msg.setSource(26817U);
    msg.setSourceEntity(132U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(203U);
    msg.cmd = 66U;
    msg.op = 103U;
    msg.plan_id.assign("EEIGNSBWBPLTXVAWVHWZSMVXDPGYNTHYLJLQGQCJABKEEKBGJKRKYFEBZGFCFCSPZJMCBVRRUPHADMWCYWRGXIKPVUTJWNDQKTSKFABVYNBFSANSFQXMULWEVFCVUANSJOELIMDEPCVSRRD");
    msg.params.assign("KFDBMHCLBDEUTPMTEIAQOSYXMJNJOYQWQDHXHWMWILXSIBYWEWXZFBSZVCTWXCZIRORGGUNBUISRLOEQTSHVXKETVOAYRPOEZJUMDJPHJNMHHRQMYURVNTCPFENFFKCJZDOBNLQMLBTVZZHIJDTKYWFCCXFJROAZCGMKPQNHPKWAS");

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
    msg.setTimeStamp(0.15210101139643484);
    msg.setSource(6715U);
    msg.setSourceEntity(223U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(248U);
    msg.cmd = 100U;
    msg.op = 171U;
    msg.plan_id.assign("SJXKLQLLIQAJXBJUKDGFKXABWSZHEDKSOKPDPQWPMJRNCVOEXGWDNKFUKCUBIOURYMBNFIMYTVOMRULWAAXERVJGYBGXGDEKHSQZJGIWFRHCAXHGQISSVIYHLCZAYGEHCVTYIGQVENLJEOIZJACTFFPBHCUNEOSIBZHVNPRZTPKUWGXOOXZMAHPBPNJRWBQNMCCUAFMYJSDCZEYFDATNKDZQLBTIVUEMSQRRF");
    msg.params.assign("ISBMNOZNHJKBTZQVBXRJUNPGANPDYCDZYMCWRGJQHDOSGRWBKTZTVUSFEVGWVGRRAOMCHKKFWFYFYHXZKIIXRGLZSXOFVITQSSHNWBWQYJQZKSDLSPCHFNCPDGTAVGPLJSJATPGAKOLHOTNOYXMYLXCBUOEFDPLKPLQEWXMTVQLIMCU");

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
    msg.setTimeStamp(0.7341038052954987);
    msg.setSource(15947U);
    msg.setSourceEntity(42U);
    msg.setDestination(48739U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("DNNLWPICWRGPXBNXFIYDBVVQHLLIJJSGIRGCQZUERCKSOVWYOGQJCSWNSN");
    msg.op = 172U;
    msg.lat = 0.220504305137038;
    msg.lon = 0.059048771750922935;
    msg.height = 0.6307579154793546;
    msg.x = 0.864527933661004;
    msg.y = 0.7750444912074059;
    msg.z = 0.27889690029252623;
    msg.phi = 0.847462814285192;
    msg.theta = 0.2885823081335692;
    msg.psi = 0.618929313480535;
    msg.vx = 0.1357085353268942;
    msg.vy = 0.7476927331823358;
    msg.vz = 0.6988138831622499;
    msg.p = 0.41116852053763653;
    msg.q = 0.1735955353630454;
    msg.r = 0.1806962553167667;
    msg.svx = 0.11449336006649224;
    msg.svy = 0.09428949325159897;
    msg.svz = 0.6643488445383158;

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
    msg.setTimeStamp(0.7068593482441434);
    msg.setSource(41969U);
    msg.setSourceEntity(85U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("DWMQDVOUUZJABVEMAELGSLHFYRTHUQIJLKAGGDNYXPRLEEXPDGTECLXYBNKM");
    msg.op = 82U;
    msg.lat = 0.4680690274650795;
    msg.lon = 0.1407152188020122;
    msg.height = 0.24185447923473669;
    msg.x = 0.3804228686409409;
    msg.y = 0.847718297309966;
    msg.z = 0.35131540208213796;
    msg.phi = 0.5308827115751981;
    msg.theta = 0.34777359044945244;
    msg.psi = 0.3399582260847003;
    msg.vx = 0.5546000959348166;
    msg.vy = 0.9719364082298417;
    msg.vz = 0.3218981258818956;
    msg.p = 0.9900761567782047;
    msg.q = 0.2912326095682214;
    msg.r = 0.4675145175591261;
    msg.svx = 0.6367186267124378;
    msg.svy = 0.1593595747463038;
    msg.svz = 0.10952388162222171;

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
    msg.setTimeStamp(0.426968365366618);
    msg.setSource(63756U);
    msg.setSourceEntity(212U);
    msg.setDestination(64770U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("UBDDNFHBROGPPCYHADVDTHEFDSPAYNSKTZKHTRWSSKISPOKANLVMFWMOOPNMCKHHZWKOXUWJQVMFLLMMCTRJLABCBBWHQRWTCYZRWUBZGNCXUXUVEJODKLHSAIQANBZYPVNISTZILOAYF");
    msg.op = 164U;
    msg.lat = 0.6665201430950587;
    msg.lon = 0.9689529882465434;
    msg.height = 0.521724314828995;
    msg.x = 0.5951394112617059;
    msg.y = 0.7232213420736204;
    msg.z = 0.027774615225297783;
    msg.phi = 0.23635582061732163;
    msg.theta = 0.4149058642385951;
    msg.psi = 0.7767977252362013;
    msg.vx = 0.745321188653708;
    msg.vy = 0.758281504479667;
    msg.vz = 0.695351865475165;
    msg.p = 0.5045655023545356;
    msg.q = 0.604434661023447;
    msg.r = 0.6255039884169442;
    msg.svx = 0.9073361660561502;
    msg.svy = 0.8077137844366802;
    msg.svz = 0.7750125697285631;

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
    msg.setTimeStamp(0.3350555062256254);
    msg.setSource(34319U);
    msg.setSourceEntity(190U);
    msg.setDestination(64908U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.6113850329092397;
    msg.lon = 0.7410240219766634;
    msg.depth = 0.41835149823781714;
    msg.roll = 0.628644569316182;
    msg.pitch = 0.30050203412210164;
    msg.yaw = 0.7919675692656457;
    msg.rcp_time = 0.19525068089132047;
    msg.sid.assign("ODFWXZFBCCOSUKVHYJUEMQLCZNRNCSMYOCUDCLAQNAYOFOMVBCXOJNUIBQTHEMZYWAMDPQVAZSIGGQBGTNOUXIKWEHRBVPSQWLPRMARGLOUNBRQVVSCXBLYTXIYGDXPMHPWSEAFTNSDDKUOKGMZTJJXYUMGZKXNSESBHDYYRDNTXECKQIYJJTPIJLHELAKHAGLDPREBIURF");
    msg.s_type = 33U;

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
    msg.setTimeStamp(0.8914068340204689);
    msg.setSource(1444U);
    msg.setSourceEntity(202U);
    msg.setDestination(47810U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.87730637711749;
    msg.lon = 0.2020670810888091;
    msg.depth = 0.45862971041999034;
    msg.roll = 0.3980873264606102;
    msg.pitch = 0.019380882190093485;
    msg.yaw = 0.7707682330398139;
    msg.rcp_time = 0.37237309743795055;
    msg.sid.assign("IHMQIPBUMZGCJULJYKOPHXARRWIWGPBVPMUBSBEACCEQTMGENRJTNEMLSEJFFGSZTNHDCAVVPWREJLJHPZKMVXAFBKZDIADUUBJIROMSYWAEVUIRGCDFSSWZIBSFZTCKDRXLUOTVAYSQQVNFUDYPQGICLYVQZXBGOHQYZYAPQCTBNNUHNKNTJQHTJXLKFIHTDFLNEBYOOVCPOZLMRGLDKZNFYHFXPLXEGDIOGYWXCSXQVSJO");
    msg.s_type = 179U;

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
    msg.setTimeStamp(0.4760192297795536);
    msg.setSource(43235U);
    msg.setSourceEntity(59U);
    msg.setDestination(46230U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.410730210729503;
    msg.lon = 0.5678316851844675;
    msg.depth = 0.6884862913058206;
    msg.roll = 0.8418887664998707;
    msg.pitch = 0.007902741582600514;
    msg.yaw = 0.818346521175937;
    msg.rcp_time = 0.8177488979620411;
    msg.sid.assign("DXKIQSUXSKJEVCCQKTNAVNNLVXHSAPXSKFOJSHPHDZUJXUODQPHVQTHMJIMHYXKXADPGEAKDLVAYCOSGNFGZCBWWSMGZWLGYZZKRZJZKCMOKICFUZWVIEBMYIWWWHQWJLYQTURRFNPCBEDUQXVYRNIZCIOMEMPLGDHUALRDFBCUBGVBBGAYBTPA");
    msg.s_type = 187U;

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
    msg.setTimeStamp(0.5843609755880503);
    msg.setSource(39200U);
    msg.setSourceEntity(146U);
    msg.setDestination(3243U);
    msg.setDestinationEntity(105U);
    msg.id.assign("DEQOGFGGLFTHCZDVSFYWRJIYXJLOFKMFPQTDJIQTRXEUWWHANFBADGMTCGRRVLTHASFJUVIYDCAHZONQZWZIKZPPIMHOOWMAKYMCPHYKXPBQWDUSAFNCTEINKQVKGDKWIQN");
    msg.sensor_class.assign("WSCIAXLNQBIRYNHDSGRYOIOMJHARXETUSYJQNBETXPFZKUPQWASCHCLOACRKHDWOKGFXPJQZTIUUATKPVFLQLJWRYORLSEXKHOHFUTBHFTVGJWFPBBGJLEWEZXYVYSBXOPKJEQMQILGRCZYNUVEKKVTWQNEBQOSAGJTALKADHBCIHBPIMGDSKZVYFDHLDOSFJGMUZRFUDPJMXZCVCMVNDPCNTVPXMLVANSNDIITBZGDZMIMEYZ");
    msg.lat = 0.17673960153885615;
    msg.lon = 0.7322195420022046;
    msg.alt = 0.0017833405557694526;
    msg.heading = 0.557445829386742;
    msg.data.assign("HRKSAUZWZNTPBGEFOJFIXMVLXBRYJXQJHTNPHAKZRBKNRRPDBDCQWXWBPTAVWBAIZXRJHZWEYKWLCBNPLZUVHMPXOZIFOTNCGGPZOVQOCGQDDOIFZCMHRYAPPEUJFRYPKRDFQEUULANKSSNTFIFYLMYMLTOICYUWGILQBULHSEOGEBWCLVMMUDACKXTAGFT");

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
    msg.setTimeStamp(0.1569004101087077);
    msg.setSource(32707U);
    msg.setSourceEntity(250U);
    msg.setDestination(8940U);
    msg.setDestinationEntity(153U);
    msg.id.assign("MKFWHBNTUJLMOEHAYXKIDVKJWRTJNOWQJGZAUBOYZGAFPYNLIJFVARMSOSKKUTBXZRXYXYYIQWDEHMDLDAKLBEGCZZWERIOVCGNIBPSBHNBLHOKQZDDJCNRTVTKMFMZXTRJCQHRQQIQUAFEKHBAWEVFZHNXEQEUIISOYBXSVVVOWWDLQDXPGDUAYGNLNSOUPFGPXSPVQSJNBLSLFLGZORICUMRUE");
    msg.sensor_class.assign("BFEKSYQEZXATVUHFEEREXCORYUQCLQPTDDUVGHTHMXKHKHAHVG");
    msg.lat = 0.8683610214314921;
    msg.lon = 0.7456781829495696;
    msg.alt = 0.668947302870468;
    msg.heading = 0.39280572782941336;
    msg.data.assign("BBZHNMZSLFYIUTNEIABMRUXLQKCPPMYLADUYLJTUAJVVIUMAFHKLKZSWIKDORDO");

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
    msg.setTimeStamp(0.8963423650796166);
    msg.setSource(19069U);
    msg.setSourceEntity(227U);
    msg.setDestination(34012U);
    msg.setDestinationEntity(161U);
    msg.id.assign("FTHNWEYLJBNDFLQUMTQYOGDKZXAUCPERMWAFVPPADAGYTIBWJUMHWYSWSNLTBOBARJKIRKIPBSYBONVYIDXNJRDQVVLHXQGBHOXNEINJPLMKUZQSIKLUGEBWVFPXUJOFASVBKSKVRETCLDCHFFCSDAMOWXOGPRYDPGTYWNJVHZZKBCZMWTRTFUHQETNGTUPQERMSAUPCOCEXZCYDCZISQMLZVIGYOJWQJKZXV");
    msg.sensor_class.assign("LDMEGTVDSQIAOHAKVMGPUFAGXPNNYTUCCZWKXECKYFRNTACVGQFCURZIRURVLJRPYHOJKWCPQYNCLQZSZXAARMBKWDJUBFVQOSJYBHQQREOXJPEUDKASSAMFILTAUPITPZSBVDIXDKHDRLXQEDVLVHIIAXOOMDEHXIZSXBTEWTOGHBNGJV");
    msg.lat = 0.948634895448929;
    msg.lon = 0.3673830570897745;
    msg.alt = 0.008049138276907786;
    msg.heading = 0.24691346866710084;
    msg.data.assign("JBMRQXOAYGRQKITULHTKHSRJCOZGWZBLZKPKSCGFSLXCIIQOYGVIQIZTPONBVLTAKKHFSBIKOUAEEAWCLUOHRCFVRYDZBIXVDJGJMFJFWHOXOZGAFTUTLOGBDMYXFYUBUDSAGKRRBOWLPCIMDCQPCNUSDFJTASJBZAEPHMIVNPQXPMEYYBNDGFWMNECESVZSKEAHUPXHUTMVWNYDQIVNEXL");

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
    msg.setTimeStamp(0.4717253376773456);
    msg.setSource(1623U);
    msg.setSourceEntity(17U);
    msg.setDestination(46356U);
    msg.setDestinationEntity(191U);
    msg.id.assign("AFCPHCJOLHJRNUVDDWJPDTVVKSHACEXKNPUACLUNZMGNSTXBSFWEOPQISFNOHZILBJYLKGTHDMUWMZZXKFNEIDGTJHUMCUSXGBCFGOYAOWYGHMZFKIYHYGCDEAEEVCBQWYZIUMBFHBLJWOTKWINKXUXVYSQDZAZUPIRVJPSIMFBMNACDRQYIEGQKYIPSJWROLARLXQRAODOJHCWNGJRDTXQTXFENPXT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DVEJWHNQPMFRMLAMWGOBJHAKCNQODWZZPPBALWXKDKYIXNAHFSWEGFQNTDUECYAPNIMOVRKNBUKFWLLPYHRXCCVJTBRMRGIPTIBTVKHYQEWUBZRNQDSLFV");
    tmp_msg_0.feature_type = 42U;
    tmp_msg_0.rgb_red = 220U;
    tmp_msg_0.rgb_green = 137U;
    tmp_msg_0.rgb_blue = 44U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6913616568149933;
    tmp_tmp_msg_0_0.lon = 0.4686489601431051;
    tmp_tmp_msg_0_0.alt = 0.18518226829712692;
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
    msg.setTimeStamp(0.20388153032350986);
    msg.setSource(61513U);
    msg.setSourceEntity(30U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(21U);
    msg.id.assign("OSGSQIDVFJXETGXNOKL");

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
    msg.setTimeStamp(0.017444220359078444);
    msg.setSource(39742U);
    msg.setSourceEntity(126U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(230U);
    msg.id.assign("NYMLOGUQACAPBHSZMMLNCIUQYABZGCUOKTURHFBZRIHUJTKJUFYKCZQZKLAQDWHWSRJNETMUVERHXGJKEOZHTFJCOFVVECBVFMTJXPBPWOSLBPNIEONQVGAGUWNYSWIIYTMDPPDIGGGYNKHIUNLXPSSMTXGH");

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
    msg.setTimeStamp(0.23175627098083096);
    msg.setSource(6188U);
    msg.setSourceEntity(71U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(36U);
    msg.id.assign("JQUDVQBWKLNSWYWIPSONBLKLEHIGJNEJXVMLHSTVZRLNPVFBGFJKYUQMMXSHRNCMTDYMJUAKLAQEFIYNASKDWHTNVWOUQCHQDXEYXQCCPRABFMGBXZZPTYPKSCGOVGZGINPCSMZBXSZIXOZFTFBUAXEUKRRAMJEURROFDAB");
    msg.feature_type = 99U;
    msg.rgb_red = 229U;
    msg.rgb_green = 119U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.9888316111494846);
    msg.setSource(39934U);
    msg.setSourceEntity(6U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(13U);
    msg.id.assign("XNFJTNPEFNESDIHWFTIDEASXCVRKCWOITSQGCZIQDOJLUODKTBZNEWRMXGSWJDVHEAGUEHPEQOLPVERPJYFLVBLHBUFHKOXARMYTFXVWDXDGZNDUJZFKPCYNVANYZQUILXGQNSHTXCAMSXKCDGOPFPUIQLYWOFDSKRQBMZARPTYTTHIBMCIGQBRZLFROKJZECUSMJOGYUGPPMBLRYBZBJMRLILTHWANKVEWVB");
    msg.feature_type = 248U;
    msg.rgb_red = 11U;
    msg.rgb_green = 192U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.18216690505238065);
    msg.setSource(56236U);
    msg.setSourceEntity(190U);
    msg.setDestination(2326U);
    msg.setDestinationEntity(126U);
    msg.id.assign("FVADWWMINRYJIXIGRDQEQYQCCBLCESKUVUHRRNXDMRZIQVXUSCHLWHPNXPMLATOXKSKKWYETKREMCGDXCGMZYISNSNBQMZPSDFYTVYFDJEXGCOUPFCLYEWPZOGDSOJLSLBAPZQBEPATJGUOFASIQYRGATJUVWJBVHFANLDNCMTJRBKKFGDPANOWBTKGHTHEQBWIBBYXLJPISZXTQUVONIUVZWROWUEKZVJF");
    msg.feature_type = 39U;
    msg.rgb_red = 71U;
    msg.rgb_green = 154U;
    msg.rgb_blue = 45U;

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
    msg.setTimeStamp(0.686061304214338);
    msg.setSource(13842U);
    msg.setSourceEntity(102U);
    msg.setDestination(37489U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.22636171906045532;
    msg.lon = 0.7668568739441691;
    msg.alt = 0.17570718422090892;

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
    msg.setTimeStamp(0.4741391883522851);
    msg.setSource(56178U);
    msg.setSourceEntity(195U);
    msg.setDestination(19719U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.9766658429991214;
    msg.lon = 0.42895477992990716;
    msg.alt = 0.3642285852920395;

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
    msg.setTimeStamp(0.06865999688412738);
    msg.setSource(56013U);
    msg.setSourceEntity(65U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.010505063843725737;
    msg.lon = 0.9325725118616284;
    msg.alt = 0.4877594527636807;

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
    msg.setTimeStamp(0.27391797582113464);
    msg.setSource(37140U);
    msg.setSourceEntity(98U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(94U);
    msg.type = 227U;
    msg.id.assign("TWULHKLNQJEUHRZZPYRZQGADEPKKCTAEPRLSWUHBDAYJGCNDQKTTFZCBPKEQPVPCHMFYDJWSGAVKYZKVTVYIDBPRFBUDZWUOBYMAVXDESIYMIVVXAXDQMRCECQBIVHINOCWPCPOCSLMMKTUWIGTOQNBURQBSUOBTGLELNYJUJMNSZMFJEZL");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 177U;
    tmp_msg_0.goal_id.assign("LHTCEWRYBSQJPLLGPSPVUAMQYABTFTEIDPZXSSNOACZZPVIVU");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("HBUSTRJIZDFPXYENILSRQQIBRZLRCIMKLPVOEZDCLDMTPAKAWADPOMTRGERWDFOWBIKEFXSGOHI");
    tmp_tmp_msg_0_0.predicate.assign("ZREDTCJDLHHDIYZQKIAIOUZBJKTVIRPQMHSEGJTNMXWSHXSIAOSCRKECGDFTZKPJPIRXLKWNHKCDOLNCPGXGZLNOPDDIGPYPQGTVFZYEVYMEGQVELSSQYPFUUZAFFXRSSELZQAUASDEB");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9427233801192061);
    msg.setSource(38765U);
    msg.setSourceEntity(45U);
    msg.setDestination(17591U);
    msg.setDestinationEntity(180U);
    msg.type = 46U;
    msg.id.assign("WAHNHRDCFDUBEPIGJKCYLTNBVTAKKBNRPHQJYTAKUEXKQULPWLHURMYIOSFZDEHKMYVDSFTOEVQMBLDQPTQFAORMWAUXJNGHPONWEUGQKYXRHQCXUEEWAWLBSVLNWINSXOVTFIRSHLQOPGTTCLPRDMYPGPYLHOTGJOUOUBISJ");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SBHWCETHPYCYVMBIQORBSIGAPPQMCSERDUPLCREEMUBFBAZFQXLJVRLGLRIYVEJWDTNOJZITMBNGNDETWMKNAZISBJMCRPLTWJSUWAKPSMYQVVOUPSBUWGULVPODCHVHCGOEPZWOHHKMOVBLQFKALXCYMGGERNHYAEDNZXNRWTZEXKVKFJMTXUIPOFICDZASQBFIXNHNCJNAODRLWXXKDHJQIUUVRTDSQXLGSDOWXFZGTKAZAIZYTFJQH");
    tmp_tmp_msg_0_0.lat = 0.11030075740176037;
    tmp_tmp_msg_0_0.lon = 0.23885433336023232;
    tmp_tmp_msg_0_0.depth = 0.03684807955472558;
    tmp_tmp_msg_0_0.query_channel = 151U;
    tmp_tmp_msg_0_0.reply_channel = 78U;
    tmp_tmp_msg_0_0.transponder_delay = 144U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.5677099692814069;
    tmp_msg_0.y = 0.5003962189371769;
    tmp_msg_0.var_x = 0.9683946953493421;
    tmp_msg_0.var_y = 0.7751521846631387;
    tmp_msg_0.distance = 0.6226954541045903;
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
    msg.setTimeStamp(0.7762524408778493);
    msg.setSource(32025U);
    msg.setSourceEntity(200U);
    msg.setDestination(40065U);
    msg.setDestinationEntity(124U);
    msg.type = 187U;
    msg.id.assign("IHBQKDEUKAWONEIYFPZLZADKPRJKFHHUGDJLZQGGRLASYZSEWSOEFNFCVXEPHMLYTNMORLNRILNHAXOFJAUZBIGQMBZCUYJWYTOETAMRJGUJIICTQNCDCIUGPFJJMFKMOKWCCTWUGWQVDSM");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.022373353958440645;
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
    msg.setTimeStamp(0.4363496511488064);
    msg.setSource(52081U);
    msg.setSourceEntity(218U);
    msg.setDestination(57725U);
    msg.setDestinationEntity(2U);
    msg.localname.assign("ACFFYPHRYGQMJYEWQTQXXBWZOWZWRTYJOXGHROVBABYHKPYNAHNXQDLPLHUIQCPMMYLZXZIAKVDUPDCKZQCPKPZHHTBLVVEJXUGKM");

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
    msg.setTimeStamp(0.35242137893900993);
    msg.setSource(35926U);
    msg.setSourceEntity(158U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("MSTPCBWLGFMGGIRCZEHNTCZVJWIJOVKFMQDWZMQXMUYJZBVBAIBEHGRKHKAJBELSPOXVBXUSYQBNAVVBNYPEKQXORMUJUWYFTULSAWCLHIQUELRRZ");

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
    msg.setTimeStamp(0.18527754252777318);
    msg.setSource(23683U);
    msg.setSourceEntity(97U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("BTNETJDCPRGASQHVAKXKZUADJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DGIVFZXPAMTIJGNPHLVRTMFRAYQLREOHYZJMUVTNDNECJDVZKUCPYAHXOECXDXNPTHPQMZVQZDFCERXCIYELCFJPSLULTXABMWMFHNIVRDYQGTXVZJRWWXBBAZSYJDPTGSKTHKSAUCLGFKBMOHWXEWSBDWCXIATSZYUUKFQHGKHU");
    tmp_msg_0.sys_type = 223U;
    tmp_msg_0.owner = 63671U;
    tmp_msg_0.lat = 0.9811856500406617;
    tmp_msg_0.lon = 0.7755219328689937;
    tmp_msg_0.height = 0.5889298322047178;
    tmp_msg_0.services.assign("ENFUFEJSGNWHNXFLUOWYDPTUMQCPDRIRIAZMMLTQDLIKQVYHYRPEZDTNTBWMSSFGDIQOBNYAOCGGJAEPYPLWILHUZZSVBSAMTQZCIGEXELNEGSUHWXFCCTKCBBBTCMXTYLADVJOTDRAKFROZXXGHNQVTPVASINACFVHFLMVJX");
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
    msg.setTimeStamp(0.7133483267704867);
    msg.setSource(30197U);
    msg.setSourceEntity(4U);
    msg.setDestination(58431U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("KHHMZYNJNQOCGSLCNBETRHFQTEQYLDRJLGURPOBAPWBZIHAOFWDYISTFAXUINDMVCVBAGGTUUOCMXZEMITCHHEXMQTLPOOSOSFJWKFJNKGNLUHPEEDEJUXQWFVXCKXCIAJVLYWDHPBMRAGLKSZ");
    msg.predicate.assign("LKGGDRLCYJGJVOGZAEBHFKESPNRJOVNLHAFSBHMXUMDDIMQTAXOWOWYERUELQYHJUYZKITWVXEFMKNQCIQUNIHZGWTFYC");
    msg.attributes.assign("IEKKGPYZQEGUKKRSTQSMBHEUGAUJBVYIDBXYJZTWNOOFNUCIMGEJYZCSIYVTZFOPHIVTKJAOUFTXBTMDXCEKVSTHBMBRWPPDYW");

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
    msg.setTimeStamp(0.6191276281312315);
    msg.setSource(24123U);
    msg.setSourceEntity(24U);
    msg.setDestination(28122U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("TGQHMRCABGN");
    msg.predicate.assign("PUTKKQITEWIDWYSIQWBOQKWZAULRMFOJNSKVO");
    msg.attributes.assign("VKWJAZVUQJURKLZXMRVDKXCCRHWFWDQQIXDJIPJTZHEYSKDURLONOHMETNYVPMCWSDJFGLZBWXTONATIEMHJQCMUGXDLOTLRLSHGWOLBNBINCQUAGQTVDGMQGJMFKITEMZTTQDUBYEPTRCVRQCFRIIIQKNBWKLOXHAABYJO");

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
    msg.setTimeStamp(0.24332989151376327);
    msg.setSource(64815U);
    msg.setSourceEntity(230U);
    msg.setDestination(16836U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("RGLKTHSMFCUWACSOKEPESMQMANNKOLFFQAWIBZSHTYCLBWGUNNDVTPSOV");
    msg.predicate.assign("FIMEVHPBUGYJPSDACRJMAONQDKWPSRXIYWRAZYBTUZEPBAUNYKATIFKGNFJBFXSQLVZIQXKVLLIBGTUT");
    msg.attributes.assign("NVFLESREZCZMFZTXBVEJQAPCUHSWLAKOCAJBHBWDFFTILQWSOGKLROHXLGMGVQQPHOOZXBXDUVWDTIUYNPHARXZQCRNKPPMUINFSUKYKCGRALUNYGJJIVAUGRDTQIJAVUXDRKBYSEDBPIGREDFNHEEWZCOBEGFSIEOAJNGTYVKNWTMDPZQMQMMMVSOCXHNAZTFSPUOBYSCUYZJQQX");

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
    msg.setTimeStamp(0.4979651415269435);
    msg.setSource(53495U);
    msg.setSourceEntity(174U);
    msg.setDestination(917U);
    msg.setDestinationEntity(81U);
    msg.command = 161U;
    msg.goal_id.assign("URBDHOVAJIDWRHUEENNGLUEDEKMUAQVXKTIOEMYCCKKETXSHJIGPOWBKAOMGRSXXQVMVONYZXJFTSTFDJ");
    msg.goal_xml.assign("QCGWPLXNFFJOZOZGIIUPAKQJTPFLTRKNGZIHVRZCJGRJKPTWMBDSUFDJQMLMSNGPPBOUWEKXZQPAMHEDEECKAOKEETJ");

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
    msg.setTimeStamp(0.1724108474474617);
    msg.setSource(22293U);
    msg.setSourceEntity(142U);
    msg.setDestination(45736U);
    msg.setDestinationEntity(68U);
    msg.command = 44U;
    msg.goal_id.assign("JSBPIRABGMGQASLIZDOPXVMHAEOOTDFKPSBWKHECOEIAHTBNVCRZEPSZFLWFULNMKBKPNPMPVIMFGJJMXITXDISVWLCCQTWHZCZRHYQTYFMTTJWRCJVSKGGUSUPDGBLURCWVQRKNVAFODEUUKNQXXPLCHWAYFEBVAOGQBSXFYHDEJHYTCDZVAMGNLKOXNYLRARIRKZLEQMDJYHWTFQJHPSOWYXIUZSBO");
    msg.goal_xml.assign("LTNIIVWFVHSLXHMFJMSLGIPEARPUUYBCGXCKEMSJDGWJPSRZIQGXTSGEOEUZIUXMIDTOYDJOYRZAHEYRANBYMBLCBNGIYVSYVWCDPDPZMDSPNDJQBQHVEFASKUOANBNRTLUTWNJHHNJKDQSTJKHOKRYDJTNIUGKAQCKZVFZWFLMUAHQKZVVYGARTTLOWPKQFGBILVCDE");

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
    msg.setTimeStamp(0.2228233901321215);
    msg.setSource(27339U);
    msg.setSourceEntity(94U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(137U);
    msg.command = 189U;
    msg.goal_id.assign("XPZPVCKBADFLDSYOUQPQUKDETZGHRBKPHBQOUMANPGLOSAOVWBPTJXAKHIZBXBRDSUZXHUETEGGTMEPWKIISGMGYZZIP");
    msg.goal_xml.assign("VPGERVXJDFBRVYSANJUPBZQUTNVOQPUGFTYQPIGSFEPXHULKRHCFKNXYZMRBTNGOLCJXYMGYTHDFYMHWTUXCLBGNFA");

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
    msg.setTimeStamp(0.9766298583178603);
    msg.setSource(53675U);
    msg.setSourceEntity(250U);
    msg.setDestination(55936U);
    msg.setDestinationEntity(66U);
    msg.op = 8U;
    msg.goal_id.assign("EBOCDUJJLX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KNKDUZXYNJZLWFXBBHCAEDSMRSNCEUHTRSKXQMCQHXKDFGQAFYZOTBJNCNAMVLVZWXYZOYDWQYTFEVDLTBZCRTDK");
    tmp_msg_0.predicate.assign("HZJDPFDYFNFUGLCJPZBOSEXMIRUSAAKZUGWUMMYNYJFEYNBCVZLTOQXTXELRIWHIMAPDPDKKJEDVQTALDPOKYIOJQKGIZJTPRTGUUXMPSSWYFABXTAUWWRQLWHDVZXIYBVEVOLNCAXSRKOMISZZKCQVWALXUSPCXCVAFVWBBV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LLZOEFRFKMPDQYUJWKAPPKFIZOIRNDXABUAQVEKTKHTWROOPXXACGVOAAEHDLYUCRXVDKNDLQNAVNLFEVEMRQAWGCGHSRUAPGUBSNJPQHIGGXOMCJRLJVPDQBJMIJPWZWLMVBCGGYWYFQUISPWMTSQNTKXEFZUKFXISKTMMZBRYSRSBDVYBZDWIYYFEJOBVCTJGXJOQLHYDZNHJTCIHBOMECLZQRXNWXNYTZTUHKG");
    tmp_tmp_msg_0_0.attr_type = 232U;
    tmp_tmp_msg_0_0.min.assign("WASPQBTIVMXCEFKHAAQIBFKTTZKOCGMTPNPXSNYAVJXVNKOXEC");
    tmp_tmp_msg_0_0.max.assign("EWFBYBWYAQUBCEBUPPAWGXQNYLHYKLGEXIMGXQHVDSSVVWSHUJOLKJRNXYTFZUFNYZDUPNBVTIPAFAMJPKZJMXJTVEIFOVLYRNMRHRWZROXTRZTJXFPP");
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
    msg.setTimeStamp(0.44065927549545214);
    msg.setSource(61440U);
    msg.setSourceEntity(40U);
    msg.setDestination(3600U);
    msg.setDestinationEntity(96U);
    msg.op = 15U;
    msg.goal_id.assign("MFFZAKMZUNFATQKAYJULTPAGIAGEFSDSXJVEMKDGNXWKLTSLHHKNYKLIVYCWRGFHBDIFIDWNBYHPNTGHXRFWEXSPPKULZUMRSSKZFVEECOUOBTSYAXXLFBQAWSAGOYQJLLLOQZDNJWIQIGRRZUTRHPBJOQDGJBRHTSTDIHNQXTECZWRJVXWYKOONQCJPAEIZWNAFWBJUONUQVOCGEPGICXCBCDHYDRMXETUM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ATCYZOOVDGKLXMIYEFVWJPIQUMCDUGHNIXAZUCNZHFYYUGEPNCWGOLJGVURVTXXAAZBNLSSUDZBRVLLJAFWDZEHINAKTPTXIYKKPQ");
    tmp_msg_0.predicate.assign("AYOBZVZSVXPPBQSEATVCKHFX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RPDVPBWCOXFBELQJZQKJERRDUNAVXKLNLRV");
    tmp_tmp_msg_0_0.attr_type = 133U;
    tmp_tmp_msg_0_0.min.assign("PSCRGWNAEMLQURMAZDKFRVNFRIEPQPUWAZWPGIXVBEJDYZWEKFCMFLQZOZYJIPOLMNNXRDBYEELEGBOTTPNXNJTAPNASKMVQTOHGHQVDXFYNXFCRWCOKK");
    tmp_tmp_msg_0_0.max.assign("MWPZAUUPKRHUDMIEOZGHNJKWAKCDFAJBZSUAIWKODKGJJJJPMBXLTQHBXOEPZGSWGUDDHNBEVSERTOMLMMIROHYZRNFZVFIQFRBICJ");
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
    msg.setTimeStamp(0.20692322361641036);
    msg.setSource(45028U);
    msg.setSourceEntity(225U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(61U);
    msg.op = 198U;
    msg.goal_id.assign("SRVHGJJHGQKWLRZMUXYNDPFRZLBYWAUJSASHQXEOAIQC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GRUJLBQGRNWQXGPMPTWJKTBHDUYIDTPAMXPNEVIDPIXBGNSFCWPFGUYLVTRXCNHPUFJHIZYHFEJBJUCMCZDCYVBAJLHJAYNROMMZODSYU");
    tmp_msg_0.predicate.assign("GIJHYANEGKFWFFSABGJQCENDCLQTKOAVJMKEZIZOBMFBMLEWQNYLGHMIQCRHUCDVTRSUFBXJOIUWCXBUQYJKSKPPFVDQLDLMTWTDFOIZYLZCNZBRMUOZPQBSXOHBMWEHTCNPK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TSQMHZEULFOXRRUICNYTPTXCSKCKFIVCUWMIUQWJWAVYDEAPWJWRJFAIXRQHLOXCATEQCZKJBWLEBDYHJGVQCRNGUYDFGOMFUFZOBSVOYVKKNDKFRBIFWSIZTCTLNLLVBKPDNMYANPGKPMODSMUBYBZQPEVYWAMRHVBKTTJQQAHJM");
    tmp_tmp_msg_0_0.attr_type = 10U;
    tmp_tmp_msg_0_0.min.assign("FBBZWULUJEXFQABLSQMVMCCMBUNDDQRRWOHBAVSSSSQNYCHNNHCAWBKIPBQLVACGEUYK");
    tmp_tmp_msg_0_0.max.assign("WAIWKTDERUFCKECDBKBGFFKRJIOYCZODQITTTODMKNQLNTBMZYIXIXRATVCGJUALUQVLRXPFXVYGMMECCHDBRCVBWEZJVHHMQPSALKGSRMPHHUPSNIPGYTJVVCOLYXMNSXMECORVQUOJIPNDXSNYFLZUMHWUXCHLWGBNFTPEGAIIIFQNHSQYSMOZXZEJGVNEBVDLRSWAQBYYFBOKZKTOJLDWWWAPQUJKDESNLREUJZSAZTOUBWAFDYXGJFHGPA");
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
    msg.setTimeStamp(0.886017210677191);
    msg.setSource(41186U);
    msg.setSourceEntity(46U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(176U);
    msg.name.assign("WJSWTYJTEPBFDMHNMJVDQGXZOSQTHBSBWNEJTCYETSVFXQMLRQWHOOUHFNRXAMQOMJFZO");
    msg.attr_type = 63U;
    msg.min.assign("TPEEWMAWYJWMQLWCZPCCLXITNAYGPACILXVINLYEUTFFDPQFMYLZUPBIGJE");
    msg.max.assign("USBERIJHDHSBHCJINCKGXZQWBYNBPIDQJURENKIGRAIRRHCKLLZAVBBMWCTPUPOAEVDKFMWNXTFUCBUYOS");

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
    msg.setTimeStamp(0.7828952643364298);
    msg.setSource(44987U);
    msg.setSourceEntity(43U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(246U);
    msg.name.assign("TKIYWZPMDTAISQXMUXGNIAJIPEAOWVRWYYXDJZJHEEMZFGFYWNCKGOVFFAHVKIPSXBRBTZOCQGCCOQQJMEKUDDNTWFMRZVZLLOELSRQKE");
    msg.attr_type = 214U;
    msg.min.assign("TYXTHMEPBXDKVAEPSSYFDFDGQNEGBRUQPGBEVQKJHPAOVCDVRNDCACNHUQTZQHZGMNSUNUXJCIGQISMZGJLIEUSMRSQFXJKIDWYVPEUZGFBWTHMLIAEREFIOYTOJLLGAPAZBRUTZOONAFFMYPFMNZYTG");
    msg.max.assign("KVJKWASRKNZMTEAP");

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
    msg.setTimeStamp(0.6781295987281513);
    msg.setSource(16410U);
    msg.setSourceEntity(49U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(229U);
    msg.name.assign("EQJREFSUKAVJZFEIXAVMSPTJFRVJLLWGECVPZBWLPGVLFKFOMJKUDHTIBPZHNWYLOGNLFOLREGWYTTYPCOBHEDCWCRTBUBDSHAABNKXDMBMWEORXPFVSGAQXCCMZ");
    msg.attr_type = 160U;
    msg.min.assign("GJOCMIQEKJEUZUZPAVABWAGDWFFGTNSCZSPAKUGBNEYRRSSKYQEERLCUTMLARFNQGPRVBIF");
    msg.max.assign("HEYOGKCJIUUXMKJBFASFNZGDVNOMEZFYSCNQSLQHDKHKXTSXEYUIJBRJOUMJGCRHRKFHWPQBSFUBLEEMAQBGKPNFONJQJMGLSPTUTCYQFXMPVGLWATZAAYFYIZTDXNOHLUGLAWAIEZQDTDMBGABGXJDPCNRDPTKNTORZDIZFSBRVVEBZRH");

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
    msg.setTimeStamp(0.5034300771843341);
    msg.setSource(27000U);
    msg.setSourceEntity(62U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(248U);
    msg.timeline.assign("SYWXXJZTTBWDQINJYZCOANBHKYYPYMTPDPHVSWVDNCWRLDZTPEMFWPVOMTZMUVHCKZKZCKVJIOKYETJRAANPGXGWQGSKXAHRMCSYFUFABCDXXUFUIUXBDMSHSMOIAXJOICNDHVQLETWPHBAOFSAFEPBTHXYTON");
    msg.predicate.assign("BPITEFRKWEPLSMQVJPKKGCAKADUSECTZI");

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
    msg.setTimeStamp(0.7200714707395226);
    msg.setSource(27354U);
    msg.setSourceEntity(196U);
    msg.setDestination(2125U);
    msg.setDestinationEntity(88U);
    msg.timeline.assign("RRRAKJBQDRTVHXUZFWJQUBHXSTCOVMUDATWTYMFSFGMETZNWJRXORLVFPHDEANAGTOXAIXDJMIMKCZPISNVCGYBQZEZGLWWHGLSEEHPNDOBCRGREVF");
    msg.predicate.assign("UYCKLPKWBHSLAECEIVVULCBUYZENDMYGOTVCIESRMKATLIZTOKYVORMNUYKZJEWIYDCSTVWDGPQNWCNMQZPPPEOFLIGRSUNUDXMOOOOZCOWJHHBDZTXXIQPJAWTXHTVL");

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
    msg.setTimeStamp(0.23348719631667414);
    msg.setSource(29669U);
    msg.setSourceEntity(19U);
    msg.setDestination(39815U);
    msg.setDestinationEntity(209U);
    msg.timeline.assign("BLMPGXWAVRXBTOINHBNRVEHFIXYXYLCMOBDNGGYPTAYMLCWBUQJSEGUJMTIEBXSBGINQIWWVRCEKYQTJAOKGVLOYCIUCTSZSHDXNGBUZTXAQPLPSPEHSFEJACDNZMRVJLPDOHKSZPWXKPFAJHMJEUWZQYRMDTGTLYNAPEDWSLRVJKYWQZEROVPRMZKDBNQSBMKJCZFQH");
    msg.predicate.assign("BZHKXDOWJMZXHPECMGMDKKXLEQYIWLQWRJVVWVFFYIRKGQYYQTLUUYBSKEXOJHVQPUMGHSXNAJTXVAMORTBWVSCVPUQNBFTTCSKILRUBRGFZELSHXLVJZQOBNDEJAGIICIHLBODUYVOEHTVWJDCHYFGTGJMZINMEQAZSPTQALP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BTOLUZUVLNEHXDLSMMTCQMWPEKUICTKRRBYEQSQZGZAONWKVGDHRCQAEVFSLJTRTBMYVAELJCBZHKIFYRNDONCKIBFPLHUDWWFXFCPOXKJNQXOBWYPHMHOKXYQHKZOYRAKWUQMSPVIIMBDPGQJRXNPWMSOSADDAHLEIGBJFVAGTWNB");
    tmp_msg_0.attr_type = 124U;
    tmp_msg_0.min.assign("SJMMWVNKBHQQHZHSECRTGVAHJAEGETCXPSPXPWUODKHB");
    tmp_msg_0.max.assign("OIEXLNEFRSKQUZLOXDHIDNDHZRLSPGJSAXQMELEAFAACLOETZZHXLTOSJXHQQLIP");
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
    msg.setTimeStamp(0.08129315563105621);
    msg.setSource(51189U);
    msg.setSourceEntity(3U);
    msg.setDestination(34324U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("PNCAKXNUEMMCHIFXUSZZBTYBTNVQPLGZHYTIJZSSQMCOELHKATVJXXRAMDZAFWNBNKELYVUEZGPTDENDGRHHNKQAOWKEEZSIGBKWVOYGEECFPGFFBOBLTGIJWHJMYISPIVABGZUKRQVTRFJXDYPGXUJOVZPLJWXGFRMQST");

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
    msg.setTimeStamp(0.5876580208490154);
    msg.setSource(17398U);
    msg.setSourceEntity(23U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(161U);
    msg.reactor.assign("XRYMQTKUAOITFWSRMSAFNNQAIOLYRCPUMGLJGZUDXYCIOAUYBJDYVJSBCWYNML");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AYAYHQXXUZTYDBUULNNCRFSPWSPLXJXLZDPZDEHDWCPGPOPFZUDOUNGNQWZVSRMHACJQOIFIOKFDKMRHUBPVFRXLFIUETRXJQTLBTIWTTAOVHHVRODCHIMPMQHCYFRGBOBWBLN");
    tmp_msg_0.predicate.assign("YREXFEGEUCWYADENPDZNSJJRKJMQOSRDLYJXAGHTKXFWVWNJKKZQPBGPQVOOARPISTWBMPWQKDIBWIXXNBZ");
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
    msg.setTimeStamp(0.04940654415190959);
    msg.setSource(246U);
    msg.setSourceEntity(167U);
    msg.setDestination(14041U);
    msg.setDestinationEntity(227U);
    msg.reactor.assign("TQZCPETGYBLIWZJPVXLAGVJUAOODHSTFXUMYIHPEISQROCSWCFSDUUOAUBSTSTAHZDQPEUKHFNJATLIHFFAQKZWAZMRRWTMWNP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TCHUSPOZIECFGKVUFPUJBUAEKMZDHYGAEQSLVNTQMTMWTXNQENINEPGWOTRIGBBSGJTHXZPYYSDDPLTGVXVJKUVTYXUMLLLVIRPORMSKMLFKJUQBVBHPDTJCRNAMCNWPWFNYHOYKGOFFBZUCEQOZSXQQOHICOINYCEUZMBQLWMJCLCFYRIWGPSAKQFNIADCLVQRD");
    tmp_msg_0.predicate.assign("VZPPYDEMLBYJLIHOVOEQVEZLGCUDKJRASXDMSHXOQKDANMAUKSWBAPUVLXNQJVVBOFGAYKPXNSRVJTGTEKOSBEQZCSPFLGCWFKKSHAXZLDITCTXGIPMFWYHFXGGDSUSRFOMIKIUVBBMYPFUFZHERCUTZJOMRGGPRWZINFARYDWSUCHJUATXLQJDNNQKNYMIDNPATVCEKNBQVJZOIHRWCFHZMLOTJBHYAQEDTCXXWYTZRIWGJRHBWEOBLL");
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
    msg.setTimeStamp(0.7246018525940274);
    msg.setSource(2687U);
    msg.setSourceEntity(58U);
    msg.setDestination(56390U);
    msg.setDestinationEntity(160U);
    msg.id = 163U;
    msg.width = 26046U;
    msg.height = 29057U;
    msg.widthstep = 24652U;
    msg.channels = 234U;
    msg.depth = 107U;
    msg.finaldata = 184U;
    const char tmp_msg_0[] = {-107, -42, -109, 62, -119, 78, 120, 63, -105, -28, 25, 23, 124, 66, -18, -128, 7, -33, 57, -12, -45, 56, 108, -112, 77, -120, 12, -110, 54, 99, 27, -58, -9, 52, -70, 10, -21, -73, 75, -29, 19, -56, -105, 25, 31, 33, 48, 10, -52, -107, -40, -33, -53, 40, -37, -77, -55, 110, -95, -104, 5, -106, -50, 124, 107, -81, 78, -43, -6, 46, 27, 105, -32, 36, 43, 51, 94, -44, 124, 103, 57, 23, -118, -17, 94, -50, 19, 12, 88, -54, -26, -70, 9, -53, 28, 116, -76, -16, -69, -72, 81, 37, 85, 84};
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
    msg.setTimeStamp(0.9890471107255594);
    msg.setSource(64468U);
    msg.setSourceEntity(120U);
    msg.setDestination(4144U);
    msg.setDestinationEntity(14U);
    msg.id = 81U;
    msg.width = 4629U;
    msg.height = 60663U;
    msg.widthstep = 56497U;
    msg.channels = 121U;
    msg.depth = 147U;
    msg.finaldata = 137U;
    const char tmp_msg_0[] = {71, -111, 88, -103, 70, -67, -65, -86, -21, -31, -85, 37, 106, 65, 120, -84, 76, 23, -79, 95, -33, -2, 12, 105, -84, -34, 66, -45, 5, 41, 29, -3, 33, 108, -49, -117, -52, 6, 110, -19, -50, 120, 9, -55, -4, 86, -114, 81, 83, 2, -121, 101, -50, 89, 28, -12, -110, 111, 97, -43, -85, -56, -43, 5, 108, 41, 27, -124, 100, -86, -40, 66, 71, 25, 80, 86, 105, 32, -61, -58, -39, -80, 66, 59, -71, -106, 86, -2, 44, -120, -74, -121, -93, -126, -100, 54, -56, 61, 111, 37};
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
    msg.setTimeStamp(0.43595848154218586);
    msg.setSource(40348U);
    msg.setSourceEntity(214U);
    msg.setDestination(14288U);
    msg.setDestinationEntity(35U);
    msg.id = 97U;
    msg.width = 4486U;
    msg.height = 38497U;
    msg.widthstep = 41266U;
    msg.channels = 43U;
    msg.depth = 141U;
    msg.finaldata = 174U;
    const char tmp_msg_0[] = {120, 94, 56, 92, -22, 74, -12, -109, -82, -98, -24, -75, 75, -8, 13, -20, 17, -61, -128, -108, 68, 12, 21, -68, 121, -79, -61, -49, 64, -69, -9, -22, -127, -63, 116, -31, -24, 33, 120, 48, 103, -83, -11, 10, -97, 17, 25, 67, 39, 50, -47, 6, 27, -53, 56, 113, -120, -48, -109, -33, 117, -122, -72, 101, -115, 88, -49, -47, -126, 47, -71, -68, -126, 93, 117, -113, -106, -38, -36, -3, 76, 113, -49, -20, -49, -83, 32, 116, -38, -45, 120, -51, 69, 64, 78, 85, 81, 34, -47, 120, -11, 24, 118, -59, 52, 108, -1, -90, -1, 110, -7, -71, -21, -24, -103, -86, -128, 35, 95, 55, 106, 123, 18, -19, 76, 94, -53, 72, 85, -84, 4, 56, -74, 107, 120, -1, -55, 15, 32, 4, -98, -15, -6, -25, -52, 43, 88, 33};
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
    msg.setTimeStamp(0.62781835598091);
    msg.setSource(14246U);
    msg.setSourceEntity(89U);
    msg.setDestination(60771U);
    msg.setDestinationEntity(81U);
    msg.width = 4491U;
    msg.height = 10137U;
    msg.channels = 1U;
    msg.depth = 99U;
    const char tmp_msg_0[] = {21, -47, 91, -35, -18, -57, -101, -22, -75, -38, 100, -35, -94, 82, -40, 93, -32, -4, 64, -13, 17, -101, -115, 54, -11, 111, 120, 118, -84, -92, -103, 89, 68, 41, 35, 97, 7, 0, 61, 66, 71, 37, 44, 68, -4, 37, 29, -4, 124, -35, -54, 49, 79, 73, 38, -30, -1, -11, -122, 88, -29, 88, -111, 103, -4, -22, 66, 108, -9, -13, 81, -41, 45, 41, -108, 8, -119, 70, 2, -25, 69, -44, -106, 49, -76, -90, -33, -35, -122, -39, -50, -106, 49, 12, -51, 37, -26, -61, 1, 67, -97, -110, -61, -125, -85, -97, 47, 95, -43, -113, -86, 45, -113, -111, 117, -10, -75, 111, -92, 40, -66, 17, 3, -26, 31, -127, -38, 15, 86, -10, 64, -41, 121, -20, 50, 28, -75, -13, -55, -24, 50, -85, -37, 50, -128, -42, 36, 68, -3, 112, -22, -59, 26, 6, 126, 37, -64, 72, -108, 17, 110, -60, -38, 88, -101, -126, 17};
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
    msg.setTimeStamp(0.4077156690199307);
    msg.setSource(37802U);
    msg.setSourceEntity(63U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(102U);
    msg.width = 32725U;
    msg.height = 33271U;
    msg.channels = 211U;
    msg.depth = 71U;
    const char tmp_msg_0[] = {33, 122, -44, -63, 82, -2, 126, 31, -46, -97, -65, -89, 33, 49, 15, -109, -35, 69, 89, -102, -12, -56, -110, 49, 16, 3, 33, -22, -87, -67, -49, -89, 59, -29, -55, 32, -112, -100, -23, -92, -62, -96, 122, 15, -34, 126, 27, -106, 41, 117, 44, 43, 34, -15, -101, 4, 43, -7, -15, -79, 53, -88, -17, -111, 89, -117, 4, -112, -88, 112, 6, 72, -88, -39, 112, -28, -55, -122, 16, -125, -77, 101, -123, -36, -15, 94, -122, -106, 43, -102, 95, -124, -93, 22, 15, 104, -5, 16, 33, -118, -37, -101, 106, 49, 12, -104, -82, 86, 9, 72, -79, -52, -12, 47, -77, -40, 5, 18, -24, -92, 88, 88, -54, 94, 90, -80, -34, -32, 99, -96, 42, 20, 66, 114, -12, -104, -81, 112, 121, -104, -1, 50, 116, -13, -97, 54, -80, 5, -45, 69, 8, -45, 23, -74, -119, -100, 21, 67, -119, 2, 97, 18, 55, 68, 100, -21, 15, -38, 14, -70, 5, -62, -66, 75, 109, 60, 95, -8, -44, 84, -70, -79, -119, -7, -33, 109, 73, 119, 113, 16};
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
    msg.setTimeStamp(0.4499778763476856);
    msg.setSource(41209U);
    msg.setSourceEntity(189U);
    msg.setDestination(37266U);
    msg.setDestinationEntity(250U);
    msg.width = 45399U;
    msg.height = 14825U;
    msg.channels = 58U;
    msg.depth = 10U;
    const char tmp_msg_0[] = {-114, -128, 95, 88, -52, -96, -95, 19, -115, -128, 13, 100, -128, -102, 102, -95, 86, 11, -85, -63, -27, 108, -29, 113, 25, -88, -96, 81, -21, 8, 12, 59, 100, 66, -123, 28, 108, 3, 22, -25, -121, 42, 57, -27, 53, -92, -57, -123, -118, -36, -7, -41, -10, 81, -94, 29, -64, -38, -20, 107, 117, 13, 44, -36, 55, 109, -24, 86, 26, 37, -97, 76, 23, -64, 93, 69, -25, 105, -105, -16, -5, -41, 99, -101, -15, 60, 47, 5, -103, -14, -66, 112, 52, 1, 124, 4, 53, 40, 14, 95, 15, 96, 53, 66, 77, 58, 112, 111, 96, -3, -16, 11, 108, -36, -117, 33, 19, 69, -124, -5, -57, 15, -83, -116, 63, 86, -115, -57, -46, -71, -19, -72, -51, -38, 84, 83, 101, 56, 119, 85, -31, -30, -124, -41, -117, 103, 28, -14, 51, 67, 34, -110, 53, -72, -8, -1, -41, 52};
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
    msg.setTimeStamp(0.20002381639931777);
    msg.setSource(2873U);
    msg.setSourceEntity(33U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(135U);
    msg.frameid = 122U;
    const char tmp_msg_0[] = {117, -35, 71, -17, 42, -126, -54, -24, 41, 38, -112, 7, 24, -76, 44, -111, 51, -112, -111, -32, -74, 65, 3, -33, 38, 6, 20, -109, 50, 118, 85, 61, 55, -4, 50, 79, -38, -35, 21, 47, -37, -60, -6, -103, -115, 33, 40, -95, -2, 82, 103, -73, 9, 38, -54, -100, -96, -85, -50, 106, -61, 32, 90, -41, 28, -105, 48, 93, 50, 70, 92, -13, -58, -65, -57, -71, -27, -43, -115, 23, 123, 59, -6, 58, -110, -53, -97, 31, 12, 9, -116, 92, -95, -53, -87, -90, -106, 56, 88, -16, 14, 81, -50, 116, -42, -62, 8, -121, 87, -107, 5, -120, -111, -24, 22, 56, 16, 61, 60, 41, 35, 109, -123, -47, -122, 102, -27, 56, 66, -27, -41, 87, 46, 25, -46, 70, 56, -12, -59, 3, 99, 82, -122, -49, -7, 62, 64, -41, -60};
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
    msg.setTimeStamp(0.4903585951699828);
    msg.setSource(19454U);
    msg.setSourceEntity(140U);
    msg.setDestination(43766U);
    msg.setDestinationEntity(93U);
    msg.frameid = 70U;
    const char tmp_msg_0[] = {70, 1, -18, -52, 88, 68, -6, 37, -15, -98, -82, -84, 91, -35, -103, 91, -68, 34, -27, -24, -106, -21, 93, 59, 125, 86, 70, 13, 56, -90, 109, 63, -91, 11, -56, -121, 57, -42, -97, 66, -126, -105, 34, -67, -6, 69, -84, 67, -60, 93, -48, -116, -66, -98, -110, -71, 4, -38, -63, -40, 60, 112, 116, -115, -55, -13, -56, 63, -43, 23, -62, -103, 1, 31, 46, -46, 27, 117, -98, -6, 86, 49, 18, 30, -42, 81, 76, -112, 85, -101, -6, 92, 73, 58, 67, -59, -31, -88, 10, 86, -108, 8, -21, -14, -94, 102, 43, 82, -63, -115, -94, 113, -14, 120, 60, -87, 54, 1, -22, 94, 61, -57, 53, 23, 1, -99, 29, 111, -26, 76, 17, 69, -61, -127, -52, 74, -58, -9, -85, -127, -13, 47, 34, -19, -94, 27, 104, 97, -34, -124, -40, -27, -60, 14, -117, 80, 37, -70, 100, -66, -83, 98, 52, -108, -116, 42, -123, 113, -6, 87, 16, -6, -91, -20, 36, -70, 61, 41, -126, 124, -73, 101, -16, -26, -95, -93, 72, 13, 30, 60, 94, 73, 24, 113, -107, 21, -30, 0, 40, -107, 34, -2, 76, 116, -42, -57, 73, 43, 91, 66, 59, 16, -79, 67, -92, 18, 9, -68, -101, -42, -76, -123, -85, -46, -61, 39, -125, 7, -43, -80, 12, 69, -92, 63, -95, -85};
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
    msg.setTimeStamp(0.4213705699196453);
    msg.setSource(44662U);
    msg.setSourceEntity(229U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(1U);
    msg.frameid = 85U;
    const char tmp_msg_0[] = {-66, 5, 7, -84, 112, -86, -75, 104, -85, -60, -80, -8, -29, -49, -112, 113, -6, 86, 6, 56, -30, -71, 7, 121, -20, 67, -8, 102, 90, -117, 41, 33, -36, 125, 34, 10, -122, -77, 4, 62, 90, 91};
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
    msg.setTimeStamp(0.540832862374401);
    msg.setSource(12355U);
    msg.setSourceEntity(51U);
    msg.setDestination(55333U);
    msg.setDestinationEntity(1U);
    msg.fps = 119U;
    msg.quality = 243U;
    msg.reps = 191U;
    msg.tsize = 9U;

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
    msg.setTimeStamp(0.25112297313365506);
    msg.setSource(26124U);
    msg.setSourceEntity(101U);
    msg.setDestination(58160U);
    msg.setDestinationEntity(118U);
    msg.fps = 24U;
    msg.quality = 222U;
    msg.reps = 15U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.2704720684886073);
    msg.setSource(32994U);
    msg.setSourceEntity(89U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(246U);
    msg.fps = 19U;
    msg.quality = 186U;
    msg.reps = 149U;
    msg.tsize = 213U;

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
    msg.setTimeStamp(0.6945285625999599);
    msg.setSource(60663U);
    msg.setSourceEntity(22U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.27894512333255495;
    msg.lon = 0.5140271995314334;
    msg.depth = 139U;
    msg.speed = 0.8134316931673016;
    msg.psi = 0.6477668236918828;

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
    msg.setTimeStamp(0.3102862646279114);
    msg.setSource(36836U);
    msg.setSourceEntity(119U);
    msg.setDestination(2576U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.10429620061781086;
    msg.lon = 0.6899995478381816;
    msg.depth = 55U;
    msg.speed = 0.9120979632837096;
    msg.psi = 0.5226597223340457;

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
    msg.setTimeStamp(0.9294541962378249);
    msg.setSource(51761U);
    msg.setSourceEntity(232U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.6676980193463318;
    msg.lon = 0.23398917193836488;
    msg.depth = 190U;
    msg.speed = 0.5891698133706975;
    msg.psi = 0.3721358534992375;

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
    msg.setTimeStamp(0.410038301395392);
    msg.setSource(19071U);
    msg.setSourceEntity(1U);
    msg.setDestination(24434U);
    msg.setDestinationEntity(128U);
    msg.label.assign("QNKONWWXJUKBIGZYLDIHZVRUKGQIGTHVAREJPBKATBDNVUFQSQMICLLGPVJLAEYLVOWHGYFCCEDNCRETSFKPDVMDWPOCQAKXORJKYTJNUPTJDYDHQFPE");
    msg.lat = 0.3532307337577347;
    msg.lon = 0.8074080933280218;
    msg.z = 0.9281725854989076;
    msg.z_units = 83U;
    msg.cog = 0.6707148658330299;
    msg.sog = 0.93019015139781;

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
    msg.setTimeStamp(0.10552305050932109);
    msg.setSource(14970U);
    msg.setSourceEntity(233U);
    msg.setDestination(9833U);
    msg.setDestinationEntity(18U);
    msg.label.assign("VHJJRYINNHPYYRXVLXKEGHVPVIDECGVGCBHGOTPTTTIOFOPDWQDQSNCUIQQVQPOLDGYGZCQULUZKNSHFLEEMIDUUIJBOWPQWEOWUUAAIDSAPCNYHFXHITBZCBHCJZZSIOOVBWKRBQZYYJAMSLDFJXJXXSLBFNEFLFYFAPDXSKCROQCMVKEHZTGLRMMKBRMDQMXTPUNGPKMYKKZSWGABZRYNAWFJISVNXWEKTERSEFULBTMAJAOZJNUCLA");
    msg.lat = 0.4767337709916508;
    msg.lon = 0.9581221323773768;
    msg.z = 0.09659221099787108;
    msg.z_units = 67U;
    msg.cog = 0.08708232051601927;
    msg.sog = 0.6649851733905076;

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
    msg.setTimeStamp(0.8520332193893342);
    msg.setSource(27452U);
    msg.setSourceEntity(253U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(148U);
    msg.label.assign("ABXPMPWSPLIWVWUEHZWBFCIONQGRMPTYKDEYVXRNENEAPJZSGTKNLXGQZNHDMEABIZZJFBJDDYMEHMDYJVTUCRFHCXIRUTEFSXQDWRUMZQWOSJXKLORWRROFYUYQUHTBGLSOCUNTUGVLVXXMRCFPTDSVV");
    msg.lat = 0.07686980033193014;
    msg.lon = 0.49531327548238135;
    msg.z = 0.48383785206340624;
    msg.z_units = 40U;
    msg.cog = 0.16855179967877276;
    msg.sog = 0.5795437716633614;

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
    msg.setTimeStamp(0.6720606462924745);
    msg.setSource(60953U);
    msg.setSourceEntity(209U);
    msg.setDestination(59643U);
    msg.setDestinationEntity(103U);
    msg.name.assign("GOCZUVUVAHBFSNNXDVLJRXFSJSGWZBFIXEWSVADZRCGLJ");
    msg.value.assign("GUQMUMDZKDFMJGGUPCMAZPZFWAZJLDVBSZEZTTCSVTEHXQPDIZEVFXATPKWDMGXCYYOQZOIWXGLVHXCIGAVNBJDBDWLZYYLOQRGKREYBPSJIXPLLRYWAIVVCOSYKCMYTEASTUOBBXSONYLNIHRNZNKOEKURDAGBGOCPSTLWIEMOWPWPSFQNMWHVYRKJFQQXUNVCHJIHRXNGNOLMFKTBKARJEVHIEAFXJFQICUBPTLFUJCNRR");

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
    msg.setTimeStamp(0.6961514278468642);
    msg.setSource(30554U);
    msg.setSourceEntity(243U);
    msg.setDestination(29704U);
    msg.setDestinationEntity(230U);
    msg.name.assign("BHQGOHXVWXHUYBOEELNQPSPXBTYAXMBVSDROYQFRNVSRMXDZJAXQGILQSDDZDAPBVMPDQXWNZCDUYQGBRWCYKTLELDVIWJIVAJMJTNVTLIGSATOTZOGHA");
    msg.value.assign("SKNQJGVAANAAKHYRFCBHLORHTDZOZYIMMQXUDXEQYAOPOIMAMBKUOPNTTNTXGRLGFWHQGWXYCPQBIILSSPPXBUAGVNIIZNQPEHKYDJLHWXKMZEXFTELEBILYFATKJFPSWJVJKTSXRNFFWHDRACBDLVGBYEZWVVPNMSXDOOZLUQEYHRZVNLUQVYLKDSBWZWCCTGMCHOUPNFFU");

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
    msg.setTimeStamp(0.17103414309894072);
    msg.setSource(26365U);
    msg.setSourceEntity(110U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ZOXHHVHJQZXVYWKDFUMRDLODSKLKEPYBFKMIKASNBDAQQTMBRCXXBXJEFQFOEJFWRHABZOPJLOXIRLTZTUGRUUHONEGNCUSVBLQNXVFTDZEUPWMTSTGPOKGUFHCTVAAJANXRMZSMLSAMGEONJNUFLPPGQISAYI");
    msg.value.assign("DWGVNCKSBSMDAZOQGMRJPIQUAI");

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
    msg.setTimeStamp(0.28581957523191404);
    msg.setSource(32336U);
    msg.setSourceEntity(120U);
    msg.setDestination(62071U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JUIPQUXYDSRGCBRHFASUNFFBYMRCAYYDDIJSSVHJHOL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GGMNRDAPTEZHKGHMSHGZJUSGUDDEVGKCUWTFIVDYGSPTTWOSPGEOVSXDCITHBIYEYZTHXXXPDEKLHQENEBLAUQMARNZWOANRMHYOJKVILWPBUNYZDXFWQIUNYSQPSRCVMJCLTKFXJJZYKDAHZABWFOAPYVNMIXCKCREZFPDWZNCVQJCLSTWAKHYFKBUUIMOCFUOLWM");
    tmp_msg_0.value.assign("ZFSWBUPVNMBBHUEKXJGIWKNHSXNFATUHZLDEHKUDHCISSPULTIFLSGK");
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
    msg.setTimeStamp(0.28248499625216883);
    msg.setSource(7430U);
    msg.setSourceEntity(71U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(223U);
    msg.name.assign("UXAXECYEYDLLNTZXALVJGTOMGXHJKMFDAAKBDMDINEESBBWMWIFZAZXPMEVSNRPUQZIYVZVJQRCJIOKRTISNUMVQTPWTEMHVBFWWNXYOWDOHESBULNDOFJGLUCUHGBNCNXHOBYFRQBLKOOMCGYTVCERWTPWHYTSXAZDVWRCSGK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BNNZYLVURFOONQCDYXTNEDCODPKTOSXVJUZBPYIWOKQFWLXMUYJEPZYFHSLQFQDDEXQIBFPAZDQSXUCSMPBTSJABFRMWWACLMHPTIWIHHZUSTWJXFUMKQAQVCFEOLXEFLJGCPMHNOBSNHGSHGCIWWADETGFDVRIZYRJJYZRUVSAX");
    tmp_msg_0.value.assign("JCUDZRYUQWAAWTGOKMMBELRNXMAHNJFKLLLVHZIJXDUOSCHBJKBQJHDGRVSFMFAYDWLIVGKXKYVKYFVENOTODTHCHZISBFPKNTZWLSPIIHKMUDEREROGVTIBGNKBDYYWUMBYFULEMPNTDAEIAOAYNSXOUBCDQJMIJMRGOHFFQSZCERNBQVSSJAGENAWOTELWYQSFKGRVOCPETXJPCHZUDZGQBQUWYJWTZLQXVPFP");
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
    msg.setTimeStamp(0.49561875314549586);
    msg.setSource(26633U);
    msg.setSourceEntity(34U);
    msg.setDestination(45746U);
    msg.setDestinationEntity(56U);
    msg.name.assign("EZKXNDIEOGWCJMQPPBZIQRZZSBKYVDCPYRQMSAFACNBZZNRBFPHCGHITPHBMVDDWSDDVRZGBSIUAHVGWRQSAKJCFELQYPWFMUJCJIDTMOBTMGQFJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CRYQSNCBSARKTGVRTXOXSXFMYYIPJZEUWFMXECYRYTJYKPQQUZDNDZADFEIRBNGRDEIDCQXUVAGPPCNEVJBZZZTFWPRLXUYHRVGPLUXYZIQLXEAKGJULVGQJH");
    tmp_msg_0.value.assign("RGHVHPDENUSEUQZXYRUZPEMFRGDQDVUMVYDDSRYCUNAGHLNATHNSOSKAJIZBQTNTWZOMCWXQXLPIDRVSHSFPMACLQZXVBBWAEPRITYJMLMOOMICSCFEEXHDYINWAMXKFAYFNNTIFWJYROWJVYDAYXREGJKXTJKUGPJNUGQHWOTSKZPQHXWBOPKTHVLYBTQSRZVZDCCOWEXNAVCGGBZJWPIKJELLKBEUKGRFC");
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
    msg.setTimeStamp(0.10881327333202173);
    msg.setSource(42641U);
    msg.setSourceEntity(84U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QSDVXQMFSSGAQKPLGIWYZXR");
    msg.visibility.assign("VRRBTKXSCDFMACKGPPLEXJGFQRBFTNMVVYWAZAHFINNWZLIFWDWIJFPJQRHQGDS");
    msg.scope.assign("TCYKEECNQUOHLKLNXMGRHLPSMMBRBJNPJVXTOMCISNDVJIDXTXFUXLSKOPIWEDZSDIIPDUFZLTGFXEEFPWXEGBMATS");

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
    msg.setTimeStamp(0.5336630719514829);
    msg.setSource(19471U);
    msg.setSourceEntity(94U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EQUAPQRKLEFPIIRWKQPGFRRKAYWAQPUWZWTUGBTXCNJFDUKMNOOJJMCZHOOSZOSIDSKFBZHSWQFMQVBMCVDPHFUBYXEUFPSCDJXUSKWTNGBWMLJOZZIYACRGJVLKDRXYHHTANMAVWGLUXZVHCXZKHTGIOGNEJDNFAYVIDZHDRTGEVSCBMPOJPPXYXXEFWADEIQUSLSTAGPRYBCRQFDLTNLQGRBBMEZKKNQTIXMYBMCLOVLJLYW");
    msg.visibility.assign("KLRCCOBJYRRMFAQYPMJFQSWINKNLAWFZCTJRVKETNHDYINIEPGEVDNSYTGXSPXQQBOAEAMYUCKZCROIFHGZWBXYWRRBUYVSZMWSFMCXPWUACCKSXZINKOUWDUXANGLVHP");
    msg.scope.assign("OLXYUSQULPQDXORZWQNWZFOJHESRXCWVQFGFEWUHAIKKLD");

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
    msg.setTimeStamp(0.45097613061181874);
    msg.setSource(63693U);
    msg.setSourceEntity(119U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(191U);
    msg.name.assign("ZOXPZURBLIMDVKPHFFPHAZHLPZXWDAWTFONJGLRMDMKVZRHDRGWTCISDASHDYFVVQMFLVLUUQRWRQWGWNMISDCLVUXBTCJSATGQMKWUKPJNCALEXQMGKOKQNYQBXZOISJYFZRNFZ");
    msg.visibility.assign("JYCGEQETLBRZKOZFCQWEJOEQKCAHUPJZKICOADIFWSCKMVBSPQBQVBTZAGJOSXULEBPCGYPOGDJGCNXXUGSTBALSHDQZIYUVEPTWZNLMUKEERWDRPXABJFAOFKGV");
    msg.scope.assign("OJDCHSBLFEPZLMQL");

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
    msg.setTimeStamp(0.15742850593905633);
    msg.setSource(4398U);
    msg.setSourceEntity(202U);
    msg.setDestination(3157U);
    msg.setDestinationEntity(180U);
    msg.name.assign("PLTDWYZRQGVBIGGUGUYYJOFCXFHDFGZZYFBCMLQOVLDNHGUTLQPIVSNQEAINYPIPXXWNMJKFSPMIZSBANPNIDEZQTAKTYOJUHOLSKGACSZPVFENRNHDVHHHWAFXOTSOTQRI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NYUIKHKFKOMUBFTGERRDTPYVTPHPSPETXVFAUNMCHBYHYRGKDFVDZLNLPGLNTZOXTXRJNMXMLWVWQYOJECOTEBWSCACJAWNPFPHRLQKEHISYIQLKESTCGPHVFIOSZJQXQZZUUKZLBIJUZPRAJIBZGZNIADEWVOIOMNJEBVCKYCYEQQOWVMSRSGDRFUAPFHOYXQFMADKVMYWH");
    tmp_msg_0.value.assign("RCDEKADBVFCNZTOMJ");
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
    msg.setTimeStamp(0.19798917500613666);
    msg.setSource(46141U);
    msg.setSourceEntity(240U);
    msg.setDestination(33553U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RTYHPLFNYRSLJNOWCJSAKXKRRLJYEBHGDZGUSZQDNZEMGEXCJTIRRECCBVMOADGVBEXOWTGXGZXHUQDXYXFLDBDKIVIMCYSIOUQLAIUWIMBECORPVNWKPKTMGXAAGZPLJAHLSVMKSYWQVZJINKWPLZHOPNDGUYTTNRLIUEWIJEMWNVC");

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
    msg.setTimeStamp(0.05077183920018147);
    msg.setSource(1798U);
    msg.setSourceEntity(184U);
    msg.setDestination(33525U);
    msg.setDestinationEntity(253U);
    msg.name.assign("ZICSRODWQTSFSUALIPZKUNXQEXMYBFHKNIXMRESRFTWKNRUYEKOELDFZDBWRYZOWTFSQIYNNPJESBHAUBKWVXFRYZRCCBPGODGAZYH");

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
    msg.setTimeStamp(0.48882488399069457);
    msg.setSource(18274U);
    msg.setSourceEntity(176U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(52U);
    msg.name.assign("XECCINSJYMTOGLVAQWXVYFVKHORQOLPGZLAGK");

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
    msg.setTimeStamp(0.01078144179107654);
    msg.setSource(36274U);
    msg.setSourceEntity(33U);
    msg.setDestination(21104U);
    msg.setDestinationEntity(179U);
    msg.name.assign("CLDPJUFIXNWFBSC");

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
    msg.setTimeStamp(0.14515556284864706);
    msg.setSource(26936U);
    msg.setSourceEntity(197U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(128U);
    msg.name.assign("VYEGELDHSEIOXDUAMCNVVZBNOOQYBLJTBGPGKLKKWPWPSFTRDACLVOSJDGRBARRFGXEPAYBHQKOTURTQXHQKJKCZEUGLPINHHITNQICPWMOVRVMBGJRSVNBAIKSYDDHXPKOCOAZIWNFJUWRQPYFXWQPPSATTMRDSCIBGIRCTZQFLUVZMHLBMOYZYUJZEEGJCNWNHUJYADFJZMXDKEFEATNCSQVFUETXNYMLIGLAZIHDVM");

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
    msg.setTimeStamp(0.5285396125379054);
    msg.setSource(47514U);
    msg.setSourceEntity(60U);
    msg.setDestination(39679U);
    msg.setDestinationEntity(47U);
    msg.timeout = 2399044069U;

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
    msg.setTimeStamp(0.8741476332151417);
    msg.setSource(57922U);
    msg.setSourceEntity(10U);
    msg.setDestination(51257U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3928659285U;

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
    msg.setTimeStamp(0.46330274173029284);
    msg.setSource(48678U);
    msg.setSourceEntity(131U);
    msg.setDestination(62090U);
    msg.setDestinationEntity(86U);
    msg.timeout = 1412541717U;

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
    msg.setTimeStamp(0.3158801850777122);
    msg.setSource(60050U);
    msg.setSourceEntity(163U);
    msg.setDestination(26286U);
    msg.setDestinationEntity(44U);
    msg.sessid = 857995593U;

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
    msg.setTimeStamp(0.38279147319308704);
    msg.setSource(18201U);
    msg.setSourceEntity(131U);
    msg.setDestination(19228U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1404298296U;

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
    msg.setTimeStamp(0.7548261167953393);
    msg.setSource(27228U);
    msg.setSourceEntity(9U);
    msg.setDestination(38383U);
    msg.setDestinationEntity(245U);
    msg.sessid = 2725480158U;

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
    msg.setTimeStamp(0.49687961687187177);
    msg.setSource(58135U);
    msg.setSourceEntity(52U);
    msg.setDestination(44564U);
    msg.setDestinationEntity(182U);
    msg.sessid = 3070707454U;
    msg.messages.assign("HNTZELFUTFYOVRTCONSGBTQZYVCRSKEMMJCISMTOMSHNHDHFHLBNCIEWDNDVDFIFDFAXENUHUSFIJAQOXPUBQADGKNGTGWCPLXQXSESVPOTJWKBIRMZKAGQJWPUVOBOVZZZCUBQIDOXTILUXWIXHINVSLJLYWRYOWJLAPNEGGAPDPEDEVMAHMXYXKZHRKLTRZJQFAYHBOEUAJPRCRZGBUUYMQGQYTJGCPNLEZRWBMYKCASDILK");

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
    msg.setTimeStamp(0.16964431205354014);
    msg.setSource(16904U);
    msg.setSourceEntity(13U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1136734061U;
    msg.messages.assign("LIDERRLFIJMLYTMINJHFGJSUAHULINFRXSLKFBPAHZCCZUCO");

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
    msg.setTimeStamp(0.6753774915548059);
    msg.setSource(16202U);
    msg.setSourceEntity(183U);
    msg.setDestination(5025U);
    msg.setDestinationEntity(125U);
    msg.sessid = 2997780323U;
    msg.messages.assign("QWHEYWBUDMRNYZYTKNALVNXBNKZZLZDXRBBRCHDCQFOMSEYLSQB");

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
    msg.setTimeStamp(0.08750518461721357);
    msg.setSource(4014U);
    msg.setSourceEntity(171U);
    msg.setDestination(46681U);
    msg.setDestinationEntity(3U);
    msg.sessid = 1831921397U;

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
    msg.setTimeStamp(0.5110407142464646);
    msg.setSource(59040U);
    msg.setSourceEntity(98U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(27U);
    msg.sessid = 222862490U;

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
    msg.setTimeStamp(0.5695020131667377);
    msg.setSource(10877U);
    msg.setSourceEntity(190U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1819449610U;

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
    msg.setTimeStamp(0.3526501079867076);
    msg.setSource(46889U);
    msg.setSourceEntity(190U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(16U);
    msg.sessid = 2626792349U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.49896472547362447);
    msg.setSource(4855U);
    msg.setSourceEntity(209U);
    msg.setDestination(53127U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3592512816U;
    msg.status = 90U;

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
    msg.setTimeStamp(0.7152908331348838);
    msg.setSource(50413U);
    msg.setSourceEntity(97U);
    msg.setDestination(32725U);
    msg.setDestinationEntity(100U);
    msg.sessid = 934298306U;
    msg.status = 157U;

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
    msg.setTimeStamp(0.2841954751376691);
    msg.setSource(25357U);
    msg.setSourceEntity(84U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(51U);
    msg.name.assign("CSWBSGFSXMGDPWKJDRZHONNBYCLXMJPITUCVHQYGKOSGMWZGQOVIDUKRBURGZXZXCZAMEEIFROZYAXDLARVFLXPBGQLAZJPWRHQGKUTKPRZQNXNILAEFVIEZREFIXCFBOUYNCHTTUMISUDJMSQFAYCLONAQJGHHFAUOTLHHNJZTHQVPKNYDTMJYKBWLKTVBJWE");

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
    msg.setTimeStamp(0.07712050804194526);
    msg.setSource(23879U);
    msg.setSourceEntity(65U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(243U);
    msg.name.assign("TZIIUKMJQJGLGQZVHPNKNQXGVRUJHZMSPOGUOYJTWVALLAFZMTXYLBEYOTDKWSBLYOEVYQBTFNUPEAECGPKCUUPMOJCHFQUJBBGPVHALDKOIWZVZSIZXEFRVRIAVFYBCAKMJIROTTXURZRRWXWXKTMTID");

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
    msg.setTimeStamp(0.7687343214007568);
    msg.setSource(2519U);
    msg.setSourceEntity(137U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(16U);
    msg.name.assign("OTQAYKYJNUDOKCJLJKFPBARUYKZQMZZRWRIBDPEAUZBQTBQGJCKEQXLSBWFNFMFXXXUARHOZLFMAQAVTEQPPVNYNKOICYNHZXUMBPLWWKMSLFGXICGCTTFMAPIWKWUDTVJMLZNGSQEONTFUPVSRCNKSIFLDSRPOTUBOXDVAJBLXEDWWWOJZRMEXMCQIYOINSHYJKAHVXIPJHRSJEYFZ");

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
    msg.setTimeStamp(0.40179599357153195);
    msg.setSource(9964U);
    msg.setSourceEntity(95U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(191U);
    msg.name.assign("RJQFYNGPHBFGZIOSWUGPUYCUGMWJUVWHKSXEHICTUELVQWMOJBIZYOLWDUEGRVWBGBPMQVXRZRHJOOKTYYEADVOFFCBFWAKHCSMAKQKLEPDDOEUAXDRHXYZLKCQRDPUPJKQLXTLSLXIJHMSQCRNOTDDKMJMFNKNNEEWJDYHIXSBPJMMPWCVSBLPSARXQUOOTNIPTGTVFZENVUHAAZG");

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
    msg.setTimeStamp(0.38167382847710407);
    msg.setSource(23713U);
    msg.setSourceEntity(184U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(42U);
    msg.name.assign("EOQUGLFKRJKVCDMYGZYANKKEKROCZLDHLIPDMWYURSGNKPXASHHAUFUVHLMQXZRAQICEIJQFAVMGMGDBBZXPZZUOBBWDFTEVBZYONBD");

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
    msg.setTimeStamp(0.6141495979251128);
    msg.setSource(59827U);
    msg.setSourceEntity(239U);
    msg.setDestination(30088U);
    msg.setDestinationEntity(60U);
    msg.name.assign("VBXBPHPDZJGZIEPTBAMOVGOAMIDFREOUQKKXPZIKHUBQEWAGSPZUWCRUPNYTSHOGMBQQZNPVDATCPBAGGWEHFONOQXRBZSATLAZXNOKGQIZTCJUUC");

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
    msg.setTimeStamp(0.6650531652337733);
    msg.setSource(64234U);
    msg.setSourceEntity(177U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(97U);
    msg.type = 50U;
    msg.error.assign("QOMGPSTNCORLBCPOUXDWCIAAUIXWUKDQBJHRQIFRYAAQFPNLHXFEWNBAJYOMVNULPCSNDULOVQXYGVQIKMEZTOZXFJOBITUYKGFOHJILJOTWIMBBNBKPBSKIKKPZCRNMGV");

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
    msg.setTimeStamp(0.09834981813247146);
    msg.setSource(3854U);
    msg.setSourceEntity(162U);
    msg.setDestination(7186U);
    msg.setDestinationEntity(178U);
    msg.type = 216U;
    msg.error.assign("EPMERIVPCDVLPETIKVTUTSOSWQOHCHJDHNHDHAZSRYFCUQLIXUTR");

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
    msg.setTimeStamp(0.8112087200780664);
    msg.setSource(47156U);
    msg.setSourceEntity(80U);
    msg.setDestination(53825U);
    msg.setDestinationEntity(215U);
    msg.type = 224U;
    msg.error.assign("KOPGZUZALUZSZNSZTCMQEFDOUNZDKHRLCYMIQUIWMCKPXVNSBRFAGCWHSQPNHHMRORXOIWLYANZ");

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
    msg.setTimeStamp(0.4669233445112758);
    msg.setSource(16504U);
    msg.setSourceEntity(162U);
    msg.setDestination(47100U);
    msg.setDestinationEntity(66U);
    msg.seq = 38804U;
    msg.sys_dst.assign("RHVZBEZHOWVYANBKUOJFHBIYYSOLKANWSCUXRVUADASPJYNZJTFRQMDQKJYVAQYUVLWFRGSMRLPLBXQZUULOPHOXRCWLAJWSTZNXQXXMITFAEBXMMQEIGMGTOFKDIRRPNOLUYQJQCFKEHDYGEZDYRFNBIU");
    msg.flags = 220U;
    const char tmp_msg_0[] = {-29, -6, 98, 118, -18, 28, -53, -44, 98, -2, -1, -118, 73, 13, -22, 54, 89, 87, -50, 54, -56, 97, 106, 112, -33, 85, 22, 11, 102, 3, -16, -100, 51, -22, -40, 90, -28, 59, -44, 89, 47, -84, 21, -16, -5, -125, -27, -5, -107, 68, -58, -123, -104, 102, 14, 111, 12, -74, 106, 94, -54, -86, -78, -21, -51, 104, 47, -82, -51, 124, 7, -82, 26, 3, 27, 2, -118, 80, -28, 37, 73, 91, 32, -49, 61, 36, -28, 92, -124, -46, 27, -110, -109, -65, 96, -65, -118, -57, -83, -113, -71, -46, -125, -40, 90, 61, 24, 36};
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
    msg.setTimeStamp(0.6856193839648967);
    msg.setSource(12249U);
    msg.setSourceEntity(171U);
    msg.setDestination(31260U);
    msg.setDestinationEntity(245U);
    msg.seq = 30925U;
    msg.sys_dst.assign("GRSHHCBEESTWPEBDICYOKDQPYETKWAYGINZBFTBXHNRQAFQEXQKBLLDHGDOLXMLZVUCLAZXHRSZILCVVRLTVAMUVWKJZPGCQBBIUJMNPDFWAASKEYYACVUQPYOGDEMBGDAGUQ");
    msg.flags = 185U;
    const char tmp_msg_0[] = {124, 116, 106, -25, -31, 20, -45, 76, 56, -17, 125, 125, -76, 44, 68, 24, 87, -45, 55, 2, -83, 117, -110, 73, -108, 48, -58, 40, -32, -40, -17, -30, 37, 7, 41, 59, -68, 9, 108, -106, 44, -16, -58, 112, -74, -54, -55, 113, -19, 21, 99, -121, 66, -87, -58, -59, 63, -109, -89, -57, -2, -49, 68, 6, -106, 44, 11, -42, -83, -22, -88, -64, -110, -120, 45, 45, -81, 49, -88, -122, 92, -5, 68, 5, -97, 85, -78, -56, 124, 64, 63, -96, -57, -12, -108, 119, 42, -80, 116, 33, -118, 3, 49, 104, -69, 83, 47, 35, -28, 75, -30, -126, 51, 66, -99, 57, -11, 44, 28, 21, 39, 27, 47, 49, 18, -110, -70, -59, 56, -65, 24, 32, 85, 75, -102, 118, 118, -63, 62, 37, -17, 38, 39, 26, -73, 125, -46, 64, -59, 11, 92, 92, -92, 25, -44, 19, 43, -32, 57, -86, -72, -111, -102, -91, -79, -118, -95, -51, -31, 101, -72, 51, 67, 21, 70, 18, -12, 58, -34, -24, -94, 98, 69, 53, -8, -103, 21, -72, 35, 0, 4, 78, 80, 126, 76, -76, -13, -47, -84, -69, -104, 25, 11, 94, 123, -43, -114, 60, 106, -22, 107, 87, -126, -100, 95, -64, -8, -121, 105, -22, -82, -37, -11, 5, -44, -20, -101, 55, 48, 60, 85, 53, -72, 4, 99, 123, 121, -59, 51, 4};
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
    msg.setTimeStamp(0.39153943130028745);
    msg.setSource(43413U);
    msg.setSourceEntity(129U);
    msg.setDestination(52808U);
    msg.setDestinationEntity(114U);
    msg.seq = 61906U;
    msg.sys_dst.assign("OEPRISWHFDBYCNZIKZDMWTRVFBOHCLJOSQAXFJIYFCEDEHMUMXNLRXOZONOWHQAEPMQISHNNJPUTBPFGACXSCXYWREKBJWTAJUQHNLZQYURXAWMQFBQUSVFOZOHLCKNTIKHJIXHPAIVLDCTTYXDSDTKEWBYUAGMIYJDKPDU");
    msg.flags = 10U;
    const char tmp_msg_0[] = {-67, 46, -34, 87, -48, -91, 114, -8, 28, -78, -95, -88, -33, -52, 123, -18, -118, 42, 27, 96, 71, -41, -4, 13, -47, -109, 53, -83, -19, 91, 66, -21, 67, 31, 48, 35, -35, -50, -4, -73, 99, -47, 20, 64, 93, -50, -8, -81, -84, 93, 24, 122, 2, -30, 16, 62, -43, -47, 115, 79, -79, -33, -95, 48, 115, -44, 82, 88};
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
    msg.setTimeStamp(0.6177762128300287);
    msg.setSource(54614U);
    msg.setSourceEntity(229U);
    msg.setDestination(58893U);
    msg.setDestinationEntity(196U);
    msg.sys_src.assign("UOSALBIVOHPKTMHPGWQPDFZVRTJLUKECWNFSJPDYRNKKPHEUBZPGZYQPUEQQSMLJMXNXSFRILZDAGUJBQOWZHFZEWNYXZOKKZQALAKMASTWFGDUPSHUCGBOTOSOJVXDROHQSYEDKAPBSLHWRCLDYIHEJGAAQRYUJNDCBGVFVWXXIZZBEVFKVRFOEDMDCTHGBSVIIRXWNCNLFTCMMTQMJIIJLEBCYYVLIMGUJNXUCYCVTTRTWQYEX");
    msg.sys_dst.assign("MQMQDITCGBUORXFSZBNDTBBEWAXMEXSUUCLPVEZEFHNNXEABNFSHVJUHVNWWIOPZBHDFMUWTOZNQHTBCGOKOMTYEBSAWNQLRYQPCVKOPOIARHQIVALFWXMPSATAODJFEZGLQZXJLWBZVRCKFZWRCPKFGUYOXKLJDUYS");
    msg.flags = 102U;
    const char tmp_msg_0[] = {-97, 81, 83, 82, -32, -6, 82, -70, 17, -69, 0, -19, -107, -120, -94, -12, -33, 41, 33, 95, 6, 29, 15, -85, 22, 3, 115, -63, 18, 26, -66, -96, 14, 46, -93, 0, 43, -116, -89, 111, -71, 89, 30, 91, 113, -120, 6, -73, -23, -116, -29, -73, 7, 123, -36, -20, -75, 51, -52, -79, -62, -20, 0, -58, 123, -103, -23, -79, 16, 4, -118, -125, 101, 58, 66, -105, -65, -89, -74, -48, 107, 41, -54, -111, 91, 14, 95, -53, 31, 76, -82, 120, -84, -120, -3, 107, -117, -94, -96, 7, 88, 15, 52, -30, 67, -57, 29, 102, -30, 24, -128, -96, 46, 116, -25, -109, 119, -14, -128, 44, -22, 124, -79, -95, -36, 123, -56, 18, -98, 64, -25, 8, 123, -111, -98, -18, -93, 84, -33, -52, 65, 113, 50, -38, -1, -125, -108, 35, -29, 107, -94, 79, 0, -95, 119, 56, -54, 98, 55, 121, -79, 95, -121, -66, -31, -69, -23, -59, 44, -67, -17, 86, -60, -123, -17, 5, -3, -66, 36, 70, -85, -19, 66, 11, -73, -54, 15, 22, -15, -9, 44, 56, -124, 109, -54, -110, 59, -120, -120, -37, 120, -112, 104};
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
    msg.setTimeStamp(0.9798449281204121);
    msg.setSource(384U);
    msg.setSourceEntity(252U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(38U);
    msg.sys_src.assign("ARGVFPQNTFNMULUDAPDPKPMECPXPGJRYYWBUDIHVCZKXNCZOMXSFZSAHLKVZBTSVUELNQDXIF");
    msg.sys_dst.assign("BUNGILMHVLZFBQYCOTBBGETWZMHIAEQFNDNOTCOFYKZWXCVVCFWJLBZUYMAEXJTHGDLIVYIZZOIUCNKQVSVWWTWODDSKJGFNREJFXPHBPNOKXKTZNOYPKGYNIKLRJPNGCMGT");
    msg.flags = 161U;
    const char tmp_msg_0[] = {-62, 25, 77, -128, -5, -71, 73, 108, -114, -108, 66, -49, -100, -39, 95, 56, 94, -126, 115, 62, 14, 105, 111, 40, 90, 7, 39, 82, 72, 46, -11, 106, -12, -8, -111, -39, 20, 113, -51, 68, 101, -107, -73, 51, 52, -26};
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
    msg.setTimeStamp(0.8663379071339599);
    msg.setSource(8182U);
    msg.setSourceEntity(139U);
    msg.setDestination(62869U);
    msg.setDestinationEntity(48U);
    msg.sys_src.assign("BPKKVQDDBYJVTXHIPDEHMKFAYGODMSQKUFSCOYJLOOIXDSAHNNUHLKJNVHIZQIBKNSIBADVPGLEUB");
    msg.sys_dst.assign("BYVDRYEMNZCFUGDUHVOLHLYHNMGJJINPEOJTKNCMPIHRITOQHVMJGWCNHYZWSJEOOXWXBXDRBSXC");
    msg.flags = 173U;
    const char tmp_msg_0[] = {-52, -26, -26, 87, -113, -28, -18, -67, 87, -113, -7, 21, 97, 113, -60, 16, 97, 81, 101, -103, 67, -90, 111, -37, -64, 46, -116, -54, -46, -102, 67, 83, -127, 95, -37, -73, -14, -38, -100, -36, -117, 104, -7, -117, 87, -27, -117, 94, 81, 4, 57, -104, 99, -18, -87, -117, -59, -69, 42, -126, -121, 107, -117, 106, 101, -89, 55, -120, 111, -34, 100, -111, -87, -60, -104, 123, 67, 27, -36, 26, 35, -95, 64, -45, -36, -98, -1, 120, -91, 73, 122, 53, -11};
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
    msg.setTimeStamp(0.31141687702477006);
    msg.setSource(2273U);
    msg.setSourceEntity(19U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(184U);
    msg.seq = 27848U;
    msg.value = 106U;
    msg.error.assign("BQTFGUMZNKWPGAUXPBEFCGKRWFLLJLQLTPCAEDKBRSWQJGYDYLDESIYVSICEMYFXLQGY");

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
    msg.setTimeStamp(0.7471814062818685);
    msg.setSource(4083U);
    msg.setSourceEntity(15U);
    msg.setDestination(12927U);
    msg.setDestinationEntity(222U);
    msg.seq = 27373U;
    msg.value = 34U;
    msg.error.assign("DVXTJYQWLGWUZJVOIASLHWKBVSQOLRMQSYXYSQUH");

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
    msg.setTimeStamp(0.4804268091629992);
    msg.setSource(1901U);
    msg.setSourceEntity(195U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(69U);
    msg.seq = 12604U;
    msg.value = 109U;
    msg.error.assign("XMPPNDCJBJQERLOFFZGUOFNIIRAXUUFASVUAAEWTRMTULEOVKICWFVTKLTGSIJGPCQWHHNIXTTNYDBHHHXYJQQVTWZRPWAOXRUMZXSQBKTDHPLMKJSSYNVLDICHHEASDEEOJYLGKRVHNPEZQOBYVWJEYDDWOGGICFROVVFZPNJUKBAHPFWKNCSUVBE");

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
    msg.setTimeStamp(0.6926975704906677);
    msg.setSource(63656U);
    msg.setSourceEntity(108U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(14U);
    msg.seq = 6809U;
    msg.sys.assign("RNJJJGUPLAXYWSOIOLEOAJAGLMABHXLUKVXETKSDXXSPWMBNLWBDAXJTPBKHMHMONYCHJYBXJGVIUTBLVBLGIYKLOTPHAPWXNEFNJHUUUQSHSNBGMDORFKYIHDROUSSNCVCQQZDMQIWMFWCQRVFMFEIWEUEVDCLZNRYUTZZMOFGBEDBYIFOQQIFTRWMCGKGTCLYZCSAVFZTDP");
    msg.value = 0.045813541101069055;

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
    msg.setTimeStamp(0.7184340936588789);
    msg.setSource(46197U);
    msg.setSourceEntity(186U);
    msg.setDestination(35985U);
    msg.setDestinationEntity(88U);
    msg.seq = 23011U;
    msg.sys.assign("VVUJMTZSELHMRZZNBMTNLCARHXEQMWIITJAQKIGPYCBRNHSSICEDHMIPUUPTDXEPTHXJCWOIZEOATDIBWQCWLVHKBBDFGXNLAOWBZCKOXQNQXYSNWXLPJBKAYYJQBKZBPRZPEKNAARFRSULSPNKM");
    msg.value = 0.8032255560989575;

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
    msg.setTimeStamp(0.008885730390964408);
    msg.setSource(27670U);
    msg.setSourceEntity(26U);
    msg.setDestination(53829U);
    msg.setDestinationEntity(192U);
    msg.seq = 28201U;
    msg.sys.assign("TDTOHZIWAGZQZYSLSKBHRIXKTDJOLRFHECEFDSQKXXYUUXYMEMYWJCBSCWONXWVSVAZMFLAQFPDOEATAZOJZFFFQVIGPNDBBCLFVNUMRPGYAVMZNSVPAUQLMPOCRBCZHYWAJSXTDUORJIQEPTXBSOBEPAENJIKCIMJGPKLEYVLMWFNUJXCTDKBIUGKJXG");
    msg.value = 0.27366484787095424;

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
    msg.setTimeStamp(0.4493270588042678);
    msg.setSource(45091U);
    msg.setSourceEntity(44U);
    msg.setDestination(9121U);
    msg.setDestinationEntity(56U);
    msg.action = 28U;
    msg.longain = 0.4356320512160673;
    msg.latgain = 0.13612931145176244;
    msg.bondthick = 3701522951U;
    msg.leadgain = 0.5520365463465694;
    msg.deconflgain = 0.18129410230135856;

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
    msg.setTimeStamp(0.29192944222074957);
    msg.setSource(33514U);
    msg.setSourceEntity(167U);
    msg.setDestination(30619U);
    msg.setDestinationEntity(130U);
    msg.action = 16U;
    msg.longain = 0.4056255864506648;
    msg.latgain = 0.11828547849296289;
    msg.bondthick = 1488635679U;
    msg.leadgain = 0.13131081548090262;
    msg.deconflgain = 0.5859206023597437;

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
    msg.setTimeStamp(0.6838033166186636);
    msg.setSource(30041U);
    msg.setSourceEntity(48U);
    msg.setDestination(43432U);
    msg.setDestinationEntity(114U);
    msg.action = 44U;
    msg.longain = 0.7805962496839323;
    msg.latgain = 0.49501604277439926;
    msg.bondthick = 1253584015U;
    msg.leadgain = 0.0843469590628313;
    msg.deconflgain = 0.673983123971261;

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
    msg.setTimeStamp(0.09692165798121555);
    msg.setSource(7263U);
    msg.setSourceEntity(27U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(211U);
    msg.err_mean = 0.062070723558778074;
    msg.dist_min_abs = 0.15713074784064052;
    msg.dist_min_mean = 0.5137744404622456;

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
    msg.setTimeStamp(0.35519371986399295);
    msg.setSource(33978U);
    msg.setSourceEntity(155U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(110U);
    msg.err_mean = 0.5912308718242416;
    msg.dist_min_abs = 0.2042089777243078;
    msg.dist_min_mean = 0.4849938827198441;

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
    msg.setTimeStamp(0.4208102057862456);
    msg.setSource(47490U);
    msg.setSourceEntity(183U);
    msg.setDestination(60063U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.013199212464782395;
    msg.dist_min_abs = 0.31141648669532596;
    msg.dist_min_mean = 0.539415248404733;

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
    msg.setTimeStamp(0.9546835626891604);
    msg.setSource(18204U);
    msg.setSourceEntity(204U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(232U);
    msg.uid = 224U;
    msg.frag_number = 189U;
    msg.num_frags = 134U;
    const char tmp_msg_0[] = {-66, -98, -96, -86, -54, -71, 14, -2, -128, -12, -37, -106, -110, 6, -85, -40, 99, -93, 17, -38, -39, 10, 86, 124, 92, -108, 103, 62, 7, 13, -77, -95, -71, 8, -83, 97, -82, -62, 96, -86, 14, -47, -107, 79, 84, 46, 109, -115, -33, 56, -61, 44, -118, -19, 86, -20, 25, -11, -45, -13, -69, 29, -25, -90, -10, -122, 9, -111, 18, -50, -65, -53, -20, -4, 116, -122, -128, 59, 108, 24, 23, -126, -113, 47, 110, 29, -69, -109, -95, 60, 85, 1, -65, 82, -62, -16, 5, 125, 66, 66, -42, -84, -94, 72, 31, 82, 62, -114, 43, 98, 69, 60, -69, -24, -6, -108, 60, -92, 25, -36, 99, 4, 33, -122, 8, 60, -96, 81, -111, -95, -18, 21, 19, -21, -29, -40, -25, -66, -106, 7, 20, 117, 105, -68, -46, -64, -87, -50, -42, -128, 50, -44, 41, 110, 39, -21, -93, -48, 98, -54, 48, 4, -99, -126, -58, 67, -124, -124, -82, -33, -16, -117, 98, -80, -51, 9, 81, -59, 8, -88, 60, -128, -87, 114, 26, 29, 116, 108, -60, 79, -76, -10, -126, 71, 43, 70, -21, -83, -64, 104, -48, -17, 113, -125, -20, -25, -86, 124, -45, -65, -28, 116, 81, 89, 118, -8, -96, -51, -46, -82, -14, -127, 1, 125, -92, 27, 14, 49, 73, 121, 58, 42, 103, 43, -56, 11, 29, -40, 33, 89, -109, 119, 59, 122, 119, -112, -1, -7};
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
    msg.setTimeStamp(0.5179726784388133);
    msg.setSource(17401U);
    msg.setSourceEntity(219U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(91U);
    msg.uid = 75U;
    msg.frag_number = 148U;
    msg.num_frags = 98U;
    const char tmp_msg_0[] = {21, 29, -89, 64, 29, -85, 38, -83, -67, -27, 114, -32, -18, 113, -122, -21, 57, -119, -33, -37, 4, 59, 67, 107, -96, 71, 121, -20, 125, 100, 41, 0, 111, 116, 106, 37, -11, -85, 40, 78, -36, -96, -101, -75, -111, -54, -13, -58, 85, 46, -19, -38, 35, -22, 83, -54, -20, 87, 23, -63, -19, 17, 23, 52, 84, -18, -110, 85, 71, 43, 78, -27, -26, -88, 1, -2, 24, 99, -7, -21, -21, -37, 68, -95, -8, -125, 112, -76, 118, -7, 72, 119, -42, -18, 10, 53, -105, 40, -3, 1, 76, 29, -124, 30, -18, -124, 114, -90, 38, -17, -61, 57, -52, 55, -10, 106, -80, 7, -88, 118, 117, -32, -33, 100, -81, -81, -18, -68, 101, -14, -13, 21, 106, 76, 27, -50, -52, 93, -83, 8, -71, 100, 37, -50, -119, 2, -20, -91, -51, 54, 27, 109, 58};
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
    msg.setTimeStamp(0.815796199052606);
    msg.setSource(32533U);
    msg.setSourceEntity(33U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(122U);
    msg.uid = 74U;
    msg.frag_number = 113U;
    msg.num_frags = 73U;
    const char tmp_msg_0[] = {114, 55, -105, -78, -25, 106, -76, -46, -42, 90, 119, -114, -89, -122, 6, -41, -68, -86, -62, 1};
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
    msg.setTimeStamp(0.1628491767497865);
    msg.setSource(53007U);
    msg.setSourceEntity(29U);
    msg.setDestination(63943U);
    msg.setDestinationEntity(10U);
    msg.content_type.assign("CIOUTFZIXHJEMIXWGSGWHLSUVTFPJVZCTTIVDCETIKOOVIMEJGUSJQFROAKAFZAKSSRMDCYFTROKPDGJQDFRPQYZTDJYMNWKONVYM");
    const char tmp_msg_0[] = {-85, -52, -71, -67, 1, 6, 81, -81, 40, -105, 108, -116, 91, -96, 14, -47, -36, -109, 89, -59, 7, 109, -71, -53, -83, -42, 2, 116, 116, -27, 56, -37, -77, -33, -95, -5, -122, 74, 113, 99, 11, 22, 93, 100, -23, -19, 113, -128, 97, -40, -79, -85, 78, 87, -32, -121, 2, 100, -48, -116, -13, -112, 23, 23, -84, -103, -20, -25, -71, -43, 62, -56, -14, 125, 64, 39, -85, -87, 13, 53, -19, -33, -128, -84, -104, -15, -86, 78, 38, -49, -29, 72, 30, -23, -75, -121, -115, -34, 18, -34, 115, 65, -12, 108, -110, -24, -85, -104, 21, -11, 2, 56, -116, -35, 9, 114, -65, 32, -61, -127, -71, -49, 71, -20, 66, -8, -12, 94, 1, 46, 91, -91, 61, -64, -71, -26, -10, 62, -51, -43, 7, 84, 108, 96, -90, -102, -126, 60, -33, 21, 122, 75, -98, -31, -84, 36, 118, -36, 93, 43, -25, 66, 10, 55, 122, 78, 4, -124, 102, -9, 108, -7, 54, -20, 91, 80, -69, 63, 8, -19, -41, -77, -112, 101, -45, 92, 63, -52, -43, 12, -109, -126, -13, 96, 38, 56, 115, -115, -57, -41, -75, 19, -23, 98, 57, -72, 10, 45, -36, -53, 48, -34, 64, -89, -69, -32, -64, 84, -63, -81, 33, -120, 100, 71, 47, 39, -8, 96, -19, -36, -118, 40, 7, 19, 29, -107, -69, -26, -4, 43, -94, 0, 31, -78, -58, 99, -71, 119, 33, 39};
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
    msg.setTimeStamp(0.8450992240156315);
    msg.setSource(14648U);
    msg.setSourceEntity(31U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(224U);
    msg.content_type.assign("HAYBBJBMMATILEUPECVVRUSIBBJTVASIKZFKGQSDFJKINQTTSQVPFZYECGNXXRWWWVJIJYDWTGYYQESLGLALFUGZPQENWSRZNFLTHYCDWSNOEOTALWZKEHPLFMMMEROCUAHDBVGPPXMMFDTSHWWKZUUTFNYPISGYLQEJIONBBYOX");
    const char tmp_msg_0[] = {43, -62, -64, 118, -52, 15, -55, -27, -112, -87, -66, -97, -41, -6, 81, -38, 120, 70, 52, 123, 101, -39, -126, 22, 119, 62, 86, 47, 85, 90, 67, 44, -75, -2, -31, 56, -112, 86, 14, -4, 106, 29, -6, 73, 49, 21, 113, 123, -71, -125, 46, 23, -17, 66, -47, 86, 73, -34, 66, 51};
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
    msg.setTimeStamp(0.787059702435915);
    msg.setSource(26657U);
    msg.setSourceEntity(50U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(201U);
    msg.content_type.assign("IVTHKFYLZFJLYNLWQYBNWNIXIIXSAONVFTCXVALCGITABJJDQEBQRO");
    const char tmp_msg_0[] = {73, -30, 56, 110, -20, 89, -113, 15, 86, -58, -78, 20, -106, -127, -108, -91, -32, -42, -92, 52, 32, 75, -72, 49, -22, -30, 59, 118, 37, -32, -89, 78, 38, -74, -81, -38, -102, 59, 125, 57, -83, -39, 79, 27, -68, 5, -47, -75, 58, 7, 45, 18, 113, 23, -59, 35, 68, 104, -50, 54, 31, 77, 73, -118, 46, -92, 5, -112, 38, 42, -98, -89, 85, -111, -8, -29, -82, -110, 70, 80, -43, -11, 82, -123, 1, 93, 33, 81, 31, 15, -63, -49, 57, -79, -10, 2, 63, -24, -2, -67, -67, 29, -86, 56, 41, -113, -124, 90, -37, -78, 12, -83, -52, -62, -40, 93, -126, 125, -18, 91, 66, 75, -17, -124, 120, 37, -90, 99, 91, -93, 33, -113, 52, -67, -48, 31, 84, -42, -22, -4, 17, 112, 98};
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
    msg.setTimeStamp(0.46771437834637464);
    msg.setSource(23307U);
    msg.setSourceEntity(55U);
    msg.setDestination(60921U);
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
    msg.setTimeStamp(0.7158315340758308);
    msg.setSource(14742U);
    msg.setSourceEntity(160U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.3763104058656255);
    msg.setSource(15261U);
    msg.setSourceEntity(159U);
    msg.setDestination(21526U);
    msg.setDestinationEntity(196U);

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
