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
    msg.setTimeStamp(0.9136380026249613);
    msg.setSource(39049U);
    msg.setSourceEntity(169U);
    msg.setDestination(86U);
    msg.setDestinationEntity(101U);
    msg.state = 33U;
    msg.flags = 10U;
    msg.description.assign("YSYMLLLAUORYMNJKKXRPAGQMJANCMSTNRFOYJYXSHFXHEORGVAPHXQLJNVVUFUTCCIYBUISOUSGWGRDPZNVLZTBEHFZEUPWAEBNMIRZXFSWVDJTLDTUHVDTLWOSBWUIXXP");

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
    msg.setTimeStamp(0.3206848467378026);
    msg.setSource(2245U);
    msg.setSourceEntity(188U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(114U);
    msg.state = 242U;
    msg.flags = 25U;
    msg.description.assign("LSSWOPQOPDMTEOKKFEAYBCNERAOWWMVGYBFFDYWWVMQUMTN");

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
    msg.setTimeStamp(0.7961975514777355);
    msg.setSource(32075U);
    msg.setSourceEntity(27U);
    msg.setDestination(15140U);
    msg.setDestinationEntity(28U);
    msg.state = 253U;
    msg.flags = 31U;
    msg.description.assign("XCJVLYWWWPEBTHAVODADKINAVDXOLYDHVMBGYBDHEYFAVMRWXXLYQCKVLDOVQVOQIGPNZXGRCCCNVXPRGXHQ");

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
    msg.setTimeStamp(0.20620673576028647);
    msg.setSource(49847U);
    msg.setSourceEntity(112U);
    msg.setDestination(23664U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.48757905955643055);
    msg.setSource(38246U);
    msg.setSourceEntity(81U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.015104442869000256);
    msg.setSource(26976U);
    msg.setSourceEntity(19U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.5829909057398178);
    msg.setSource(64152U);
    msg.setSourceEntity(218U);
    msg.setDestination(45484U);
    msg.setDestinationEntity(238U);
    msg.id = 86U;
    msg.label.assign("MQXWRWKJSSVPCAYRCJEWVFTVYSZXZXFVUVCJTCWAKRQJDUZHUMQNDPWILVULXWVOOHCLBVJGOMMTD");
    msg.component.assign("PPMXMZGFSICVSLPJEFEXIBFHMEOBWGXQKLOYFXOAUCWEZNTHYCMQQILJTKPRRSKYMEVOITAOFWGSGGAXSVJBPTUYMMQIDDXZWRBNSZUSHBXDHAHEJVZYEFRDHNLLYPDUGKKMNRXRLQQVSNJWFTPCYQ");
    msg.act_time = 46161U;
    msg.deact_time = 64220U;

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
    msg.setTimeStamp(0.8551949485910155);
    msg.setSource(51531U);
    msg.setSourceEntity(8U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(110U);
    msg.id = 113U;
    msg.label.assign("ZPDEZZCATQNFWHJCNOTAVLDOFWRVWYIVSEUZMYKVJXKRFFFCRQKSITAPCRSKEBDIMBVRIPGQLAEXWCARHMOBDNFKLBVHWOIFBBTCQFXNHNXWJUGMYYZGYLBOBQVTGVPXHTEDEXAPAWGHEDFYMYFSXUGMCQPKQWVJTAPAICKOGJIJQKNOEMMHJZCJYDWYXLEROLNKDOMDURLSZQUNSHBWZUUQSVXUKBNJUCPTRPNRIIGXIAODSGJHZYLPEGT");
    msg.component.assign("TFGFUDVLSM");
    msg.act_time = 21749U;
    msg.deact_time = 29524U;

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
    msg.setTimeStamp(0.27087534891327847);
    msg.setSource(63327U);
    msg.setSourceEntity(155U);
    msg.setDestination(29526U);
    msg.setDestinationEntity(213U);
    msg.id = 93U;
    msg.label.assign("WGDJOJKWYPYUQVHCIEJAPOEWFDYLOCVEOXRTUWDJOQQHJSOZWEQHUNQWSKIMXQYFAYUZONEVCDXMRSDNUFNFCLSFZPUL");
    msg.component.assign("ZPIMDEILRQJOWBLVXCEIAZVCYRUFRMCPAJHFGDMDEBKKVVAJPVNRKPUTTJPSELTDEJLXKVPCTBTQOYWHSFWHMWQUGUHOSOYKCRQSVILHXMHZOZMUSDLLCDNXDAUBUZWNBTODGUY");
    msg.act_time = 14039U;
    msg.deact_time = 53200U;

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
    msg.setTimeStamp(0.3501017559137002);
    msg.setSource(55234U);
    msg.setSourceEntity(207U);
    msg.setDestination(63430U);
    msg.setDestinationEntity(16U);
    msg.id = 175U;

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
    msg.setTimeStamp(0.1389882141851445);
    msg.setSource(4401U);
    msg.setSourceEntity(56U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(18U);
    msg.id = 165U;

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
    msg.setTimeStamp(0.783307422547323);
    msg.setSource(41636U);
    msg.setSourceEntity(159U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(47U);
    msg.id = 181U;

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
    msg.setTimeStamp(0.2840704222652506);
    msg.setSource(18043U);
    msg.setSourceEntity(130U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(75U);
    msg.op = 101U;
    msg.list.assign("HTRQXETROBLKLTMHJVHPQDC");

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
    msg.setTimeStamp(0.010220877440090925);
    msg.setSource(55153U);
    msg.setSourceEntity(234U);
    msg.setDestination(38306U);
    msg.setDestinationEntity(201U);
    msg.op = 99U;
    msg.list.assign("SRTPMRMQWMIKMMHDVOWTWHRQQGSVIBNLAYOEBDOGLGAQNCWJWBLCHNGPIPEBTXXRMHAOFIAJRVIPUPKHLWJUMFULGPNCSYOJDMWEECKALGVO");

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
    msg.setTimeStamp(0.9979137329349487);
    msg.setSource(58379U);
    msg.setSourceEntity(153U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(62U);
    msg.op = 181U;
    msg.list.assign("BXRFNVWXZQZFBDWYPRLKXWILBHGRZFIUSRTYZQCPJLRBGRDVIPVJFMXDVSLJQRUBUPUUHMUUYEAPPJFZEMEWOAVQKU");

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
    msg.setTimeStamp(0.3181076275631628);
    msg.setSource(440U);
    msg.setSourceEntity(183U);
    msg.setDestination(64337U);
    msg.setDestinationEntity(131U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.9526884452321176);
    msg.setSource(15426U);
    msg.setSourceEntity(155U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(217U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.47360601643249534);
    msg.setSource(14333U);
    msg.setSourceEntity(209U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(155U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.8795307915615346);
    msg.setSource(33462U);
    msg.setSourceEntity(19U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(77U);
    msg.value = 95U;

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
    msg.setTimeStamp(0.30537652674663984);
    msg.setSource(1561U);
    msg.setSourceEntity(250U);
    msg.setDestination(28043U);
    msg.setDestinationEntity(22U);
    msg.value = 76U;

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
    msg.setTimeStamp(0.6159772394395645);
    msg.setSource(873U);
    msg.setSourceEntity(89U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(62U);
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
    msg.setTimeStamp(0.61274801181683);
    msg.setSource(18312U);
    msg.setSourceEntity(140U);
    msg.setDestination(52770U);
    msg.setDestinationEntity(55U);
    msg.consumer.assign("YTBROPAKURFVCRFZNEQSWFAOQHTKYPFIAXIRGNXCYPHHCVQNMLYXODGBUPVERGQXCSESGQMIMIUEOAQUXIYYUMCWBDLZTPLOHWPBZQCBPIKDTLROTPJFGEVZDJOVRJXMXDJOZRAZGDEQQITHWHVFNZUNRCTKYAO");
    msg.message_id = 34276U;

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
    msg.setTimeStamp(0.6024434660610372);
    msg.setSource(19975U);
    msg.setSourceEntity(57U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(246U);
    msg.consumer.assign("HFEZWREKZMZRUZNTGQADVCNVBSTBFHPNJIOOIGPBNEAGFYSILHMMUXVRUCOWISHKCWJYQCHAKAWOSA");
    msg.message_id = 60296U;

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
    msg.setTimeStamp(0.06021830489471358);
    msg.setSource(14797U);
    msg.setSourceEntity(35U);
    msg.setDestination(14844U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("WVJMMRVAODQWCJXDHAEOBAAFMYRRGEYTTFOBFOLLJVEOQSTMQGGQOQIKRUHYAFVRICNOSGNUU");
    msg.message_id = 5483U;

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
    msg.setTimeStamp(0.693697139782292);
    msg.setSource(21179U);
    msg.setSourceEntity(220U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.6386985320407117);
    msg.setSource(30007U);
    msg.setSourceEntity(24U);
    msg.setDestination(37363U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.7437381158175607);
    msg.setSource(22435U);
    msg.setSourceEntity(24U);
    msg.setDestination(55035U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.06424851928583997);
    msg.setSource(35634U);
    msg.setSourceEntity(83U);
    msg.setDestination(1332U);
    msg.setDestinationEntity(171U);
    msg.section.assign("MMYZYKDHXRNEAJLXEIDOCGSKLNOZTHXXQDRHMNMUCPDNGAWCEYSYUABENQMDJVFVUBUGXIIQXGKSVKIIACTVKSMUEQDBRUUXTAJDBPFJSNHZXRWSHQTJIOSKHXIBZYFPKECVIWBFAKEQJABYTMUJBIZSXVMACWWFDOAKCJTTHQLAFNTOPRCTOZDRYOVSGLDFNEQZBKFSJGUCGOONPLHWFLEVICRRLR");
    msg.param.assign("UTVZVRDBGRRTSEVNJKPWKMCQVYILEDIIPFEOCNFKEBMFXDOCAJNHURLYICWDRJIXHTMGANDGXKGQSRWPAEMUJXTMPMPUVEWPTOMUQZIGYNOHIPMUOZXXUQUBRLKXEKJHFYZACJYOUCLQTSGSXLQFXFFQEISUYTFLKLPCGSMSYALMHHGE");
    msg.value.assign("JEPXLCMXJHJYYJKFVKWMEAGWTKRVINCTOPMSXLPLZWSUESILYBPYOQOBDTRM");

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
    msg.setTimeStamp(0.9495597111158319);
    msg.setSource(48334U);
    msg.setSourceEntity(102U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(134U);
    msg.section.assign("TSUDNXXKXHRRPQYCJQVTUQLWEKUXOFHIZGNDYSRYGABMUPMOBPMIWFZXJAMPWDNXCTALZHDGBNMJWSALLTOGRAZDEITOZGVFUGVDWVNBWEAUCOIYEFCGQCQLXYHPUJUBTPFCHOBDSSHEKYEAQMOYADSNNJEQIJGBTVCJLXUKMRQJKLVMEPMQIHQFTCSEFKONKYPSVGPNJRZWHOTBRBCZMCWVLRKHXOFDFIVVJBEPRRNZDSF");
    msg.param.assign("BLBHPNBXXEZYIMOSTNQBMVCZJHFQQHHKCDJCPRUGQKMOEXSACAOKHOJFMOZQRWELKUSDSJXMBLCPPXFDBZGIMFDBJIAHEWWUPUSXYENQUCIXVYIPAACNUVZYLJSGFRAKWLEAXJVJWWZPTVPDGWUXVLJYYZJMYNLINKAGRYSCUBOGHPIRTTITTTEQISGDBIT");
    msg.value.assign("HYPSLJDTPBDXJVSAOIEVDQXUCHYIFAXOZTCSPRBXOSFFELDTUPBZMZYLKZKPTBQKDQRESMWBTUQXIZCUVLNBROCCQZHEMLTKTBRGRSBEHVHAKXMPLIEFKWSCHVNVTBCHNKPAMFMAEMJVAOCNAERJTGYZCQGCJUGIEFIAZOQFGDUWJVAYYNMXDJILXJPYKKOOYKIGGLJSDRRNMEUUIVUGQHZGOURWXZ");

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
    msg.setTimeStamp(0.457369918201478);
    msg.setSource(33127U);
    msg.setSourceEntity(167U);
    msg.setDestination(25206U);
    msg.setDestinationEntity(25U);
    msg.section.assign("KOAZYTLVALSHYVHPXANZBWLIUCHFPBLSECRLOTVHRGELPGIBZECYDYKNCFSWHHFEBLEJORJBCUKBTXQVYIYWDTGWDLQSKFADMUAQUNZQPWFEJWJIDNHJZHVEQZZIRGGYXXPTADAKCPSCJJJMGEWNPWHKVYUBQRTIBUDWNROMKXKMFMERMCRSTFLOXDMVFMYNOQTCRDDSBSMAPIKNXUNZEMXPSVQUVBGOZVASUOCFUAQRNIIKHPTJOQTXGZY");
    msg.param.assign("VBTDPNHIFAMZZAXUTVSCIORCXNXUVTXKQFKUHAGRJUPSONJFPSQHJRRLFBSAKEIHMNDUHJAUCYBTLKAQMHNMIWEMDDNDYEZBNOVZAKBLG");
    msg.value.assign("HFBLVRDVBQCAJDMYAPQFGDEGQBXIPLSUIIXLZDRYJIWHWUHYOAOKTZFNAYHORLGQAEJPWFCXMKXYGNDLUSJFCVNTWSJUVPSJSRODIATDIENYTMEQXMLUBYCTPZZZQFEWDYIILNOMGDASVRTCFHSNCEMQCBVGWMTWFKSKXMJZDVSRBOHZMCGFQNTUQUBCNOJFWTMHKNOIGV");

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
    msg.setTimeStamp(0.8178172478916337);
    msg.setSource(37555U);
    msg.setSourceEntity(185U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(252U);
    msg.op = 22U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("RYBVIRDKEDIGICDFENXSTBOWIX");
    tmp_msg_0.param.assign("ABJHAVISJUIBSEJNJLWZICHITBGEMRSLERVMGDCNIECVFXFFYRWJGFVOYFJEYNIBYGBBRVAYKUUICHTBWJCHELYKZGUWNPLZOKDBRKZD");
    tmp_msg_0.value.assign("PJZKYBVITGHQRCPGYFGBUSSHYJZRGXECREPUUMEVWEZJIMTKVKJRKMRLQFFDHISYPEITNFHQPTDADXPABHDRKWVWOBAQAJBGUXURNXYNOMCPCCJKQWOEWNDCLKDCSMQKASFRFXQBPNTGUILQTSCIFIMGSRLTZVMHLZDECWZLCFOOAPHHZV");
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
    msg.setTimeStamp(0.13727699677782879);
    msg.setSource(40018U);
    msg.setSourceEntity(84U);
    msg.setDestination(2225U);
    msg.setDestinationEntity(125U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.24039637454478013);
    msg.setSource(12015U);
    msg.setSourceEntity(251U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(11U);
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
    msg.setTimeStamp(0.9510451652224824);
    msg.setSource(48300U);
    msg.setSourceEntity(224U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(160U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.3424566969069712);
    msg.setSource(37344U);
    msg.setSourceEntity(80U);
    msg.setDestination(59435U);
    msg.setDestinationEntity(186U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.20019804540326602);
    msg.setSource(12409U);
    msg.setSourceEntity(24U);
    msg.setDestination(14678U);
    msg.setDestinationEntity(225U);
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
    msg.setTimeStamp(0.9637616275099433);
    msg.setSource(27694U);
    msg.setSourceEntity(77U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 125U;
    msg.step_number = 14U;
    msg.step.assign("HXPNEYZYHMFUYXFRWNJSLCBBAWYCVPLAIERLKHCUPVJDEAJZTMHXFQZQHJUEGWJITPVXYUPNMZYRMIWSBZUZGCUDPIHQBASSVSCCNPSLTLWRQOPMMURLNMZJJDOXWBXLRVOXVSLGSEXLUCHRBJKXGJTWYDOLFKBAQAAITOFSKIGMFGMTETKHWRDONBZVNQBI");
    msg.flags = 185U;

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
    msg.setTimeStamp(0.808115628330347);
    msg.setSource(40893U);
    msg.setSourceEntity(192U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 99U;
    msg.step_number = 66U;
    msg.step.assign("QQZBVQTFEYBJOZXIMMEOKNZTMMLQETSZPLVYEAKCCWULHKVOXYLZHAAQDUOLJZAPLRGXHJHWRCIHKFMEJKMAPZ");
    msg.flags = 139U;

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
    msg.setTimeStamp(0.39664370628848555);
    msg.setSource(47644U);
    msg.setSourceEntity(50U);
    msg.setDestination(45935U);
    msg.setDestinationEntity(36U);
    msg.total_steps = 145U;
    msg.step_number = 179U;
    msg.step.assign("MALQJWQGXAHHSPAWGFCPQDMXDVHYLGNXBZXCMWWVLHKOQDRHRIZMFTEFKUJCVLQWULNOEYFGMKNMXEJNZLSLHRTTUJLGTFCNIJKCZUNPOSRDRTZAUZISOUVTABKNBFKFTU");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.191324854206534);
    msg.setSource(39203U);
    msg.setSourceEntity(91U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(149U);
    msg.state = 227U;
    msg.error.assign("LKEOCAMEJBPRLKPHEVUMPMATVGVRYDUYYMTNRWGAJZFXJQAJQMIYRNDPXQJ");

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
    msg.setTimeStamp(0.934471613874876);
    msg.setSource(15229U);
    msg.setSourceEntity(126U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(169U);
    msg.state = 119U;
    msg.error.assign("ADSBSJYTMRCMWIJZQMHQVYCIILJXIGTHFWUGKKNSSJBXVGRADKONULSSEPHCJEXCAXMCCANWFUSXVPOAGIVKVKVKTNNRZEBVQWDVFZHQFFWYOHWREKRMUHLGKWFGBAYXJQPTEHLBOFAMYTCNGIZSAYMPLSNHOTNFJUUKDGXZWYQIVFPITWZUCJQVPICZCQBBBPMDQFEGNLZYBNXDALOMPOERGLSYHWZTITLO");

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
    msg.setTimeStamp(0.36089159945396865);
    msg.setSource(39952U);
    msg.setSourceEntity(81U);
    msg.setDestination(47219U);
    msg.setDestinationEntity(92U);
    msg.state = 218U;
    msg.error.assign("FJLQBLWAECOVCXVWYGDBTYUDZTUIPBAKXVREHTJJZVYNSUHMXPYJXLJZEJLJCZWFASOESTBXS");

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
    msg.setTimeStamp(0.9265766191366196);
    msg.setSource(65382U);
    msg.setSourceEntity(240U);
    msg.setDestination(6840U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.70472938312047);
    msg.setSource(43653U);
    msg.setSourceEntity(203U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.5063166828056932);
    msg.setSource(31398U);
    msg.setSourceEntity(235U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.25569380358903915);
    msg.setSource(6880U);
    msg.setSourceEntity(161U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.22217080259712196;
    msg.lon = 0.4449084199989083;
    msg.height = 0.9062900274185298;
    msg.x = 0.04302946943736374;
    msg.y = 0.3479196249186831;
    msg.z = 0.31527136380323817;
    msg.phi = 0.5721403055137999;
    msg.theta = 0.8061599879011455;
    msg.psi = 0.23390930524592357;
    msg.u = 0.5379204457078773;
    msg.v = 0.6989669617740321;
    msg.w = 0.2672521582675338;
    msg.p = 0.25412592729564354;
    msg.q = 0.5789899234968696;
    msg.r = 0.10241778417539193;
    msg.svx = 0.3824854500958733;
    msg.svy = 0.13973416708921715;
    msg.svz = 0.36680503348517823;

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
    msg.setTimeStamp(0.47464568729323053);
    msg.setSource(41442U);
    msg.setSourceEntity(71U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.3856274739336776;
    msg.lon = 0.4155069235056036;
    msg.height = 0.41104787001438026;
    msg.x = 0.8282575201734429;
    msg.y = 0.11219444113865729;
    msg.z = 0.03184560555421234;
    msg.phi = 0.2527371727193459;
    msg.theta = 0.07235457587404592;
    msg.psi = 0.9156086037723761;
    msg.u = 0.687094703111804;
    msg.v = 0.7795162074947392;
    msg.w = 0.9126521179569462;
    msg.p = 0.414299558798195;
    msg.q = 0.4299824251768306;
    msg.r = 0.801728508934315;
    msg.svx = 0.9111238518181903;
    msg.svy = 0.6167020045864928;
    msg.svz = 0.7065752344373464;

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
    msg.setTimeStamp(0.4458503004363106);
    msg.setSource(8669U);
    msg.setSourceEntity(44U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.7721275845334645;
    msg.lon = 0.3263670445521166;
    msg.height = 0.20771662757338905;
    msg.x = 0.33751544100810005;
    msg.y = 0.8119696039666056;
    msg.z = 0.15098648363388334;
    msg.phi = 0.3584951880519869;
    msg.theta = 0.8218997093716468;
    msg.psi = 0.20144562296441393;
    msg.u = 0.06268981742959745;
    msg.v = 0.708115148717569;
    msg.w = 0.5005935587663071;
    msg.p = 0.3467707668931478;
    msg.q = 0.21002545273533468;
    msg.r = 0.6787959060981407;
    msg.svx = 0.8809282573229745;
    msg.svy = 0.5070200572604047;
    msg.svz = 0.049210089962354986;

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
    msg.setTimeStamp(0.9956380745581476);
    msg.setSource(49880U);
    msg.setSourceEntity(120U);
    msg.setDestination(33590U);
    msg.setDestinationEntity(51U);
    msg.op = 159U;
    msg.entities.assign("IRBZJFAKZMKSACKWPMEUHNLGPLNTNWNWLHBJJJVOTOQQUVYNYAYPB");

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
    msg.setTimeStamp(0.06986255946782727);
    msg.setSource(52013U);
    msg.setSourceEntity(76U);
    msg.setDestination(59887U);
    msg.setDestinationEntity(205U);
    msg.op = 95U;
    msg.entities.assign("IPQWFDDJEVPFCHTAFSFEDPTVCKBTWBALAFERJYWXGRCHJMPSVZEXMZCITCOUYNOTRJNOISHKJXVYWQPKMLLJKOXQNHEVHGYUYYEL");

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
    msg.setTimeStamp(0.6611098296026187);
    msg.setSource(60868U);
    msg.setSourceEntity(251U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(201U);
    msg.op = 117U;
    msg.entities.assign("ESJKZMZNVALUMCPFAUIJRDMWBBCYBTTZERINUKPDGIQBPWHJTVPVGXYPSNVBAERHRGGIKQOJHXSDBKFPGGUQQWLBQIKZCWLXHLSHWCUFAMFJPIFFYUSMANCKOXYHDKOQDLCFUEUKXSZBFYTLTQAAYVIAEPXDENMZHNEWJTJAUCSDSHXTVXLIJATONQHZLZMJMRMKYRROLWBGRXYVLSTNIWW");

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
    msg.setTimeStamp(0.6568655959682944);
    msg.setSource(59109U);
    msg.setSourceEntity(54U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(196U);
    msg.type = 31U;
    msg.speed = 14304U;
    const char tmp_msg_0[] = {94, -107, -128, 91, -96, -22, 62, -21, -115, -90, -123, 96, -66, 27, -26, -59, 8, -35, -60, 23, 34, 112, 69, 24, -38, 63, 78, -72, -45, 57, 3, -29, -49, 74, 125, -9, 28, -7, 64, -80, -51, 115, 82, -23, 115, 100, 85, -119, 74, -17, 57, -127, 58, 30, -69, 38, -65, -124, 93, -104, -112, -2, -118, -14, -55, -99, -95, 20, -69, -31, -86, 90, 91, 15, -41, 116, 45, -47, 71, 73, -100, -125, -96, -99, 7, -28, 101, -126, 20, -105, -58, -86, -41, -74, 37, 4, 95, -104, -8, 109, -66, 124, 36, -81, -85, -126, -65, -78, 26, -18, -114, -60, -61, 54, -59, 1, -121, -103, -73, 92, -94, 59, -16, 79};
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
    msg.setTimeStamp(0.9133140269956267);
    msg.setSource(59249U);
    msg.setSourceEntity(163U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(69U);
    msg.type = 141U;
    msg.speed = 46094U;
    const char tmp_msg_0[] = {90, -69, -109, -98, -103, -93, -35, 116, 84, -95, 115, 73, 53, 102, 60, 107, 1, -45, -75, 123, -63, -48, -62, 105, -67, -40, 121, -2, -110, -16, 32, -9, -13, -115, -76, -91, -24, 32, -59, -103, 46, 55, 83, -40, -62, 56, -127, -7, 59, -124, 106, 112, 40, 82, -82, 35, 33, 44, 102, -96};
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
    msg.setTimeStamp(0.31543265833373324);
    msg.setSource(24433U);
    msg.setSourceEntity(80U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(107U);
    msg.type = 244U;
    msg.speed = 14107U;
    const char tmp_msg_0[] = {-121, -98, -113, -104, 9, 6, 60, -34, 109, 125, -70, 67, 97, 53, -79, 108, -91, 47, -78, 54, -31, 93, 90, 3, 126, -2, -25, -59, 40, -1, 51, 61, 26, 85, 57, -95, -113, -60, 91, 53, -26, 27, 69, 59, -53, 81, -100, -124, 36, -9, 26, 66, -109, 113, 2, -116, 75, 45, -100, -36, -101, -36, 92, -35, 60, 12, -32, -51, -120, 10, -102, -14, 19, 15, -16, 77, -75, 119, -120, -37, -8, -52, -3};
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
    msg.setTimeStamp(0.1357973472029922);
    msg.setSource(20942U);
    msg.setSourceEntity(221U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(190U);
    msg.available = 3585175476U;
    msg.value = 191U;

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
    msg.setTimeStamp(0.7100203817739401);
    msg.setSource(24462U);
    msg.setSourceEntity(128U);
    msg.setDestination(58085U);
    msg.setDestinationEntity(110U);
    msg.available = 2808370148U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.12175971908926253);
    msg.setSource(40444U);
    msg.setSourceEntity(138U);
    msg.setDestination(29029U);
    msg.setDestinationEntity(108U);
    msg.available = 756436201U;
    msg.value = 190U;

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
    msg.setTimeStamp(0.5049658538730918);
    msg.setSource(3391U);
    msg.setSourceEntity(39U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(42U);
    msg.op = 30U;
    msg.snapshot.assign("ABQWVUWGYXFACPBVGXYMFM");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("ZAPCOHHYMKVGDWFNIZBXYBOGJDXUKAONPITOBAPHPDMGUPEFBDQNDSVLXVRTZULLYEFFDPMSFRSQFWGMNIRLYZTIHOXYKMAETZGJWIRUMHLMOSEHNUBSCEBKYGTXTJNITADKWZSQJRPJIKYYJCQNBLCYPTZWCCEUMZCWHJGAOQXKXVZQVSHK");
    const char tmp_tmp_msg_0_0[] = {-84, -35, 40, 52, 76, 78, 118, 40, -23, 59, 41, -95, -94, 102, 5, -128, -114, 37, 85, -96, 91, -78, 3, 106, -121, -84, 69, 94, 1, -41, 99, 2, -6, -68, -116, 99, 32, -64, -66, 116, 78, -102, 90, 45, 49, 125, -21, -124, -56, 54, -77, -95, 126, -43, -73, -22, 73, 1, 55, -127, 42, 62, -103, 27, 9, -58, -63, 83, 2, -103, -67, 16, -50, -120, 23, -2, -72, -58, -51, 2, 98, 36, 44, -20, -73, -60, 47, -85, 101, -6, -72, 101, 15, -37, 123, 5, 4, -97, 72, 60, 67, 60, -86, 15, -53, -5, -19, 93, -13, 78, -74, 73, 28, 68, 57, 22, 59, 1};
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
    msg.setTimeStamp(0.23149458798707367);
    msg.setSource(46723U);
    msg.setSourceEntity(94U);
    msg.setDestination(36549U);
    msg.setDestinationEntity(75U);
    msg.op = 177U;
    msg.snapshot.assign("YYSLHWLMQPNTAOLUMHCVVKDCGXIRDDQQIIWVPENXWANISRGHOLYABKUOTBPEFPKTEWYHLZGXUICTSCIFQSNCDMBAUSWHSZIKHHRTIFECRSUQXBLOLMITBLKKVFGLUGMBSMJQFTRYXYWGANVKRMTLVSCENJZAXUJZWDZBYSTJARCXPHYOHOJBCGBOQFNHFAZRDJEGAUJEUGFYMWXDRVOPQTVOQXJDNCZMPZPYQXEJPAKKVZDUN");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 70U;
    tmp_msg_0.op = 122U;
    tmp_msg_0.request_id = 7669U;
    tmp_msg_0.plan_id.assign("VQDASLKRGJRPUESINKHFYUDNYGLFXVPNNIULSETRXKHQBOWIYQUUZHUGPCMVGXPOISWTWCFHAVVSPPQEJZDZRVMLUDYRBZSKKWJZJNFNTSECBWOJRZBPSHSBEKAFDQNXJDZPMCWKUFLIHJCVKFYUDTGHFQQIVAYWMWIMARVDLLXBPBYFGEBABYXGXHGIXLBVTZAGHTKPDAUFQZEQXYXETTGNCRLMOJMNEC");
    tmp_msg_0.flags = 60375U;
    IMC::MagneticField tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.5500392600027123;
    tmp_tmp_msg_0_0.x = 0.8088361267521066;
    tmp_tmp_msg_0_0.y = 0.6919783057263008;
    tmp_tmp_msg_0_0.z = 0.8558785782368533;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("WRDAOTGKMPLVIJUKUEUVHMAQAQGHTDMVNCQRQSGGZAFMIXWWLJIZBJPQQIBIBNJFJQHJXDNUGLSLGPFMMETDLVRZTWBTHANKCDFXCVTNYOXSWYLFEIYTYBBFGTCFCOYPBO");
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
    msg.setTimeStamp(0.54580421791286);
    msg.setSource(12334U);
    msg.setSourceEntity(125U);
    msg.setDestination(14795U);
    msg.setDestinationEntity(205U);
    msg.op = 35U;
    msg.snapshot.assign("YCCMBLSHIQQOZALABPNQDRCMHWQPMJTGOROLTQUPUWVVNWRBATJBIDTYLKEZETAYSOGNTZYEMCAHZDLXFTFQUUFSSUUSBHMFHSAIKWHDCMVNWYXXWQWNYMNIDZGSDRFVEIJWXZATUSEYFHKCDJGRQTVGKBVVXECJOMZWHUVEQJBOLSNLXXTYKJZPARSFLPJUPFGXKIRCMEHIVAPNXGGCMINBFOFGZREDU");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34534U;
    tmp_msg_0.off_x = 0.4010073781513741;
    tmp_msg_0.off_y = 0.5385525859283269;
    tmp_msg_0.off_z = 0.7353278159476484;
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
    msg.setTimeStamp(0.06519023975986327);
    msg.setSource(28033U);
    msg.setSourceEntity(50U);
    msg.setDestination(41142U);
    msg.setDestinationEntity(42U);
    msg.op = 131U;
    msg.name.assign("BTIJWNACTXOEBDRUPGNZEVQKFBIATBWQMEYASXQNFTLPCRGEHGWCKGWZBSMKAXKVUFYFIYOZJYZVHPYFJYXRYJJURNOFO");

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
    msg.setTimeStamp(0.2833901562877239);
    msg.setSource(47622U);
    msg.setSourceEntity(79U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(205U);
    msg.op = 175U;
    msg.name.assign("XFITVNGIZWCHASPSUSIIHMXZVVJSGSZDLUGJFCZYQPYPMIPTFLTEKRCXRAGYJFJNDHXTOEHJCUPOYIKZAWYYDHZJQBTARBUXAZUDYLTRNBFRESWLKSTMDNM");

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
    msg.setTimeStamp(0.9013926856978584);
    msg.setSource(44120U);
    msg.setSourceEntity(210U);
    msg.setDestination(23861U);
    msg.setDestinationEntity(128U);
    msg.op = 70U;
    msg.name.assign("KCAKDVGZSXNZWOOZNVEZIBWSFOYAGMRRGEA");

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
    msg.setTimeStamp(0.4912599680942189);
    msg.setSource(48899U);
    msg.setSourceEntity(226U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(93U);
    msg.type = 253U;
    msg.htime = 0.8871133289305276;
    msg.context.assign("WHCCTCSTOPZCSBPUYAENMYYSDUDKSJFRZHIIZDOUFYTJTFMEMXCJJTBCZOALEQRPXWKZOXQFWKLENZWSJQAGKPYBNNVNCLNMWZIXORRCABFFUOKDYCLIHEUOMAHPCHPXMASGIJVBGTYPLJPWSAHMUMHHQNUKZQEEHB");
    msg.text.assign("PGCBQAGNCYQRYZCICXNPRLZUYKLOVTBUIWHXTYFRSJMOCW");

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
    msg.setTimeStamp(0.3037515242364206);
    msg.setSource(11933U);
    msg.setSourceEntity(147U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(121U);
    msg.type = 130U;
    msg.htime = 0.6382784458810896;
    msg.context.assign("GPUYWZQBQNYFEFPVDQCKKENPGBCGESXTEABLZDCZQZZRFSICUDBGHKIVFZATOXJLVXAPMANECYIHQLOFKNWLCUTWJLEOQRGWDJKUPYRKVCRZOMUCRTJRIRHBWCSPFPEXYSODSWJAFMYLIRXKOAFRCITIJBOPQ");
    msg.text.assign("PJFUIBQPMYFVFPTLDPCICJCQVYFFHOPKRSMEZURJDVJUCHCPNMLVGKNGKKBUWHOCAWSTPJFLZSBKHWGIAXLNKKBZXICQESQERBZURQHDTXZBYEVPDGBQNT");

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
    msg.setTimeStamp(0.9246550775513865);
    msg.setSource(49331U);
    msg.setSourceEntity(241U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(134U);
    msg.type = 46U;
    msg.htime = 0.5429548611645133;
    msg.context.assign("ZBTNHOELRLRXCPPAXGTJGCXEORYMQEZNWTAJJUAYFINKFNAOSQIKWXIFQVMNJRIGW");
    msg.text.assign("NENAOLMBHMZKMJQXXIRBWNXUDVBJBWCIDKCTFIERBLQQIBMHTWGAZFNODZWGAPJSQULSZYRKTZPUVSKXNDQOHODECYXOLO");

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
    msg.setTimeStamp(0.605171802842149);
    msg.setSource(53355U);
    msg.setSourceEntity(43U);
    msg.setDestination(36368U);
    msg.setDestinationEntity(46U);
    msg.command = 97U;
    msg.htime = 0.0737087882735088;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 91U;
    tmp_msg_0.htime = 0.9542062788065389;
    tmp_msg_0.context.assign("QHAAWFRVAGIPBHSNJLVUDAGIPPFCWFUEJOBIJNRDJBFXORRERLKXESXRYJCLBHSLCCNR");
    tmp_msg_0.text.assign("GNRWGXXHVHNZLYHHVZLMWDERWYSBTQUXPUGLBPJOYMBCZEKZLFGMUVPMRVFPQFQKOPP");
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
    msg.setTimeStamp(0.586289679379277);
    msg.setSource(31210U);
    msg.setSourceEntity(205U);
    msg.setDestination(25765U);
    msg.setDestinationEntity(230U);
    msg.command = 97U;
    msg.htime = 0.07327287201846533;

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
    msg.setTimeStamp(0.7942209876283923);
    msg.setSource(22277U);
    msg.setSourceEntity(106U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(202U);
    msg.command = 126U;
    msg.htime = 0.2714892265571349;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.12317929802049954;
    tmp_msg_0.context.assign("IGFZZGUOQULLUWVVIGJSKYPRJVGTLXOYFGIEFHIVZCQKGEOERWMVQZKVPBLORFDPWRXTRSSAUOCXKYZYWQRQOXVJCCLHTTCDMBOIKWEYAUWFNXUYDTTWQNDGIEESDBFTCFTHHCDBZAAPNOEMJDIKXNMXNHVQVXJLZQSOPYPTYJIYBMUAKQTMMKNZSBVMUHNBRLUNARFPYIOAKWHSLHMXMQBZLJWR");
    tmp_msg_0.text.assign("YWKUCVNMBSDXCNXOQAFLICREIYUBK");
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
    msg.setTimeStamp(0.9317378664722434);
    msg.setSource(3298U);
    msg.setSourceEntity(164U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(188U);
    msg.op = 169U;
    msg.file.assign("BKDUTTMBRFRAHGEPGZJLWCXLETRPSRYHSRKDVIUVJLMGXCYUYIIAWMDUPPKLFHTJCIXNAGQIHVJQKLALUPSNFMAKBYSBKMDFFJUOIZYQKJXMCPJVURCOVUYFBAWREIMZOQGQHZIKHTJHLWTATWCRHWOEDJOAWLYDUJDRTSXOQRVCFYXCYQCGNDPNGEV");

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
    msg.setTimeStamp(0.11323177413035634);
    msg.setSource(56692U);
    msg.setSourceEntity(157U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(48U);
    msg.op = 167U;
    msg.file.assign("UXPBWRKSYTZWUMOPJCPLHXYQMZ");

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
    msg.setTimeStamp(0.1544417422483636);
    msg.setSource(43291U);
    msg.setSourceEntity(66U);
    msg.setDestination(40343U);
    msg.setDestinationEntity(116U);
    msg.op = 252U;
    msg.file.assign("TGWWYXVZKEREHIWKXPFFPUBRVCQNYTHDYPNACSALMFPJJJOVRVQYREQRBTQJNCLZZAUDJYYEHHNOHHWPTFXVVIZPIXCGUVDSIHWJWUCYVKMKFTTERBIBOYKKYKKSSSWEERYPMBXUMUOJFEGSTCFNPGBHMIUDSXBMGILAWABACGMCSQRAZXONPDLZLKDNKGGFWWOOULNQSA");

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
    msg.setTimeStamp(0.3659533634489144);
    msg.setSource(57076U);
    msg.setSourceEntity(252U);
    msg.setDestination(60456U);
    msg.setDestinationEntity(222U);
    msg.op = 149U;
    msg.clock = 0.007821347268138545;
    msg.tz = -45;

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
    msg.setTimeStamp(0.014313007301032687);
    msg.setSource(50987U);
    msg.setSourceEntity(239U);
    msg.setDestination(49240U);
    msg.setDestinationEntity(86U);
    msg.op = 221U;
    msg.clock = 0.7901590498526672;
    msg.tz = 69;

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
    msg.setTimeStamp(0.912676248364555);
    msg.setSource(43818U);
    msg.setSourceEntity(57U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(233U);
    msg.op = 142U;
    msg.clock = 0.8755381250485621;
    msg.tz = -58;

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
    msg.setTimeStamp(0.909026196196572);
    msg.setSource(15024U);
    msg.setSourceEntity(178U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.44537343761335124);
    msg.setSource(32547U);
    msg.setSourceEntity(119U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9544754024564694);
    msg.setSource(9847U);
    msg.setSourceEntity(75U);
    msg.setDestination(46732U);
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
    msg.setTimeStamp(0.7593682149754188);
    msg.setSource(46194U);
    msg.setSourceEntity(15U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("MMMPSPUKLJAYYXSKETYBKDTEQRABIWUWOXZSTGORUJDFYAOLJXILACLPMBORLBHGMUQKLANRQYUNGTXUQOVCLBCFVURODRGZQPSICKJSAZVFEOSIJBPPDO");
    msg.sys_type = 114U;
    msg.owner = 32922U;
    msg.lat = 0.3451616304991032;
    msg.lon = 0.584521199608352;
    msg.height = 0.06651100703475243;
    msg.services.assign("BGTTJGODTXOJDDPSPHPXBGCZKBBWPWYFKEXRECINNINYLATMVLCKASOAXETW");

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
    msg.setTimeStamp(0.9350189881378925);
    msg.setSource(59226U);
    msg.setSourceEntity(233U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(165U);
    msg.sys_name.assign("BESXHWXINEOXRWYGUUJJOAXVVBYQTCYMODRQFFRAFZUGAWJKYSMMUETYHVUSSQDOEXDAOFFOIPHAXCLIMESILHGCPOREGGDJLPMQTJWIKZRMORQCJHBPTNBXVXNF");
    msg.sys_type = 163U;
    msg.owner = 22804U;
    msg.lat = 0.5186056585270407;
    msg.lon = 0.421823775539525;
    msg.height = 0.7256058307396814;
    msg.services.assign("CXVSLHKXTUIPOJBZGMQFFXIOXGINTVNCNJVCYEICJGQZBCUEFCXSWJAMGOZDWWZSRTRETUUJPQWMVKEGZPQONBJHAGYHNWSEAMDTORCKRPRLPUVEDXORKJKAHIDPIFBPRXDKEOKIVNNNCZWQGHTYBMTDLJDLYZVUVLYHNMLTNWTWVXYOULMXFYLQSMFHZBSTEEZGRAFLJQYCFUKAVSPMBLPBQAHUFOIHAIUCFJSPWDBMIA");

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
    msg.setTimeStamp(0.35046114045906707);
    msg.setSource(12435U);
    msg.setSourceEntity(58U);
    msg.setDestination(20444U);
    msg.setDestinationEntity(134U);
    msg.sys_name.assign("SQHSUDYTKZJQJOBFKMRWQPXFHFOFYSRUTUMYDAGOWIROBYXMZUXKGQXSBEPYUWVCINDIUPENRFDVJRDFQMDCERLODPMGGGBHAIHRMZJVXHHTJMSXQCKWTRJNLQAJVVWT");
    msg.sys_type = 178U;
    msg.owner = 62891U;
    msg.lat = 0.8855525359690791;
    msg.lon = 0.23404461849160096;
    msg.height = 0.8387604104675875;
    msg.services.assign("TGBHZFDAZAVLJHMBTRKSFEOITHKXOPNFECAXKGQRXELNRYITHFFJESVLQCMWXOWIVEADONRTUZDUJGBOSJNHTEYD");

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
    msg.setTimeStamp(0.9202602200474829);
    msg.setSource(58507U);
    msg.setSourceEntity(106U);
    msg.setDestination(53992U);
    msg.setDestinationEntity(133U);
    msg.service.assign("KQDSHSIUTYDXCRTDRCLRSZEJEZYXQIHHWBKXKLLWJAIZPRUUQOJXRQNAMRNIVGWRWLTUVYFIZAPUU");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.29131177285400633);
    msg.setSource(14292U);
    msg.setSourceEntity(48U);
    msg.setDestination(42242U);
    msg.setDestinationEntity(240U);
    msg.service.assign("WWCLFJTVHXFSOSCBCFVMLWIHYEJRFRUVTKLCPBUXYPBWJHDREVZGEHIPXTSOGCXMPBWAGPXXCFNLPIELIPGTUAQLKENIQWLXICTKUISFMQNPHHUJSGASHGNWUWRTHQCFPKSOTLLYRBDXDZDAUKZQRNYUTFJTJKBTDEYYWGIQKNAVRKEQEJBBZDGAKJGGCVMZMYOLKDXMEDQWIAVYMVOXZVHBAHNSEZZOSZJYNYDCROMRSD");
    msg.service_type = 185U;

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
    msg.setTimeStamp(0.6672791063606622);
    msg.setSource(35277U);
    msg.setSourceEntity(226U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(10U);
    msg.service.assign("ENVFOHCBMYRYZJLPSKTPTZOJFXCGGEBEMLNDXQMGWOWMMYQEZNIWPFHZULCNCKBSWTZAKPCQSMGKXSPXDRWWBOZSBOLUTWSPHVBMTLNXJIBHSUKINAHSIUBURMFDWIYQIHSMGCTRZABFRXUNOVAUYRKZXGPHYAHNTJ");
    msg.service_type = 91U;

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
    msg.setTimeStamp(0.9168382741378811);
    msg.setSource(16847U);
    msg.setSourceEntity(51U);
    msg.setDestination(9237U);
    msg.setDestinationEntity(45U);
    msg.value = 0.45825199701093033;

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
    msg.setTimeStamp(0.05768194427864315);
    msg.setSource(59300U);
    msg.setSourceEntity(183U);
    msg.setDestination(12270U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5398024219196154;

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
    msg.setTimeStamp(0.7634022619081696);
    msg.setSource(15952U);
    msg.setSourceEntity(114U);
    msg.setDestination(55960U);
    msg.setDestinationEntity(119U);
    msg.value = 0.732540648170099;

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
    msg.setTimeStamp(0.6070681613554355);
    msg.setSource(38753U);
    msg.setSourceEntity(122U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(145U);
    msg.value = 0.41546145793671774;

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
    msg.setTimeStamp(0.5179658830284066);
    msg.setSource(26094U);
    msg.setSourceEntity(134U);
    msg.setDestination(1786U);
    msg.setDestinationEntity(7U);
    msg.value = 0.05962356467835206;

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
    msg.setTimeStamp(0.29444830978352987);
    msg.setSource(12521U);
    msg.setSourceEntity(81U);
    msg.setDestination(54826U);
    msg.setDestinationEntity(46U);
    msg.value = 0.005081440453309383;

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
    msg.setTimeStamp(0.2940739243147702);
    msg.setSource(22110U);
    msg.setSourceEntity(207U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(62U);
    msg.value = 0.8627767819543504;

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
    msg.setTimeStamp(0.1468701419572005);
    msg.setSource(11074U);
    msg.setSourceEntity(58U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(247U);
    msg.value = 0.08431794244971802;

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
    msg.setTimeStamp(0.791326511183886);
    msg.setSource(37502U);
    msg.setSourceEntity(76U);
    msg.setDestination(64692U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9234670591319355;

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
    msg.setTimeStamp(0.5891274721660305);
    msg.setSource(13030U);
    msg.setSourceEntity(92U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(202U);
    msg.number.assign("PRFIAEWXSWEXTVLUINFOJNZFHHPOGBMAKQPIVJKFKZYKPDRMWDOIFBPDCXRJLKRODREOOUHNGGHIIJEMDCVXSTUNCSAVQSZURAYQCIZBOWQAJUIABEDUGREVGZXDSQOCKOVVLLZDNMNLRRWXULXBFHFKMSN");
    msg.timeout = 10476U;
    msg.contents.assign("FOJEHMCTCRNYGUTURINSPVDSNPZBHKOPQPPQWTQLONEJTKUGQEIYBCVXLJBHCBJUYEGPAAZKPWUVBNMREYSXAWOWVDPOXNIKIQKMDSOOSTPDGMVWZCWQHAWNXZHERFLVDSHBQBHTCMOXSGGLXKDKURMBUNVCMVOZNQWHAQLFEMCJTZFEUGSMNHGALVEJGZRAYRIBXXRJLJWDFZSZIYKTFHZBIIRYTECCD");

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
    msg.setTimeStamp(0.3559915199780357);
    msg.setSource(50959U);
    msg.setSourceEntity(129U);
    msg.setDestination(4061U);
    msg.setDestinationEntity(39U);
    msg.number.assign("VPSYXEMATVBOZSTNWZYYGQJHMLPDBWNFKGPNCNEPWEPHHKNZYWZZTKIHQDOXAMRXUHGAWITRMJTLQZVKSDLUUBUTJBVVFOILAFOYEVWCYQMNHBXOUAMSNDUTRONCJFOJDSSRLX");
    msg.timeout = 25867U;
    msg.contents.assign("YNQQRTLCAISDHCFXFCUSJFBQZCPEGYCYVKPDSLEVZWLAGTISMXMIOTYLGMRHTWYBNRWBTFEDIDWCBUHFXLHIASRALOYRFZMIAMJNLKQEXKVOQHNTEUZSVGQPATOEBMJBCUVPJODUTDLHKUMBOEQPARPPKYXHNGOLDYKKCF");

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
    msg.setTimeStamp(0.5384356561381476);
    msg.setSource(25573U);
    msg.setSourceEntity(227U);
    msg.setDestination(63843U);
    msg.setDestinationEntity(168U);
    msg.number.assign("WUIZQQQVZXDPEJBNHUMSTSPYMBKWHEXOFIQFVOFJPFGCLTNKANHNZJVKYKZMKMVWRUSHUARKLGXSZDJHUZBQGXNBJKHDDNRXEQYGAGNAIBCTAMZXLOJUFWYBWIBVDQCSFEDDLOOORDODJRQYLULEVETKTEORNCYLIXTWFGCXDMAYZYUPJGNZEKSPCTNTGSLPWPIBPMCRAEXCABMHCWWQHREHMSVLPAJTTUYFLII");
    msg.timeout = 1341U;
    msg.contents.assign("DBQAODNLCXWGQFFZNCCOVQGENJWHNFVPLJEANGQHRQRYOSWXGEPYBRZKAKJAMIFMDLMZFIMEVW");

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
    msg.setTimeStamp(0.6638168907155995);
    msg.setSource(1096U);
    msg.setSourceEntity(152U);
    msg.setDestination(755U);
    msg.setDestinationEntity(189U);
    msg.seq = 2852495720U;
    msg.destination.assign("BKNFKBSVONPRAWLOWWRNJILZREFVDNCIFFVJLBXQPFRZHTHGDNXCXPORHWLZYJRZ");
    msg.timeout = 14480U;
    const char tmp_msg_0[] = {63, -40, 52, 106, 81, -64, 57, 57, -86, -29, 84, 16, -7, 104, 107, 33, -11, -110, 123, -4, -20, -110, 73, 117, 10, -57, 31, -31, -76, 13, -53, 12, -106, -32, -54, 105, -93, -70, 111, -57, -48, 11, 47, 17, -25, -47, 7, -122, -23, 4, -45, -21, -43, 114, -62, -4, 95, 12, 116, -92, 123, 31, -13, -88, 65, -5, 100, -76, 76, -117, -101, 56, 116, -54};
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
    msg.setTimeStamp(0.5493269534152261);
    msg.setSource(18783U);
    msg.setSourceEntity(192U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(168U);
    msg.seq = 599053221U;
    msg.destination.assign("QAVTTSYNXAWQENGFTMLSZQIVRUEYGZG");
    msg.timeout = 64594U;
    const char tmp_msg_0[] = {28, 30, 14, -96, -116, -96, -6, 96, 42, -4, 17, -120, -125, -70, 121, -78, -52, 35, -38, -110, -47, -33, -35, -24, 99, -59, 92, 26, 66, 40, 20, -13, -12, 19, -84, -50, -65, 42, -62, -105, -23, 73, 75, 100, 61, 70, -91, 55, 16, 47, -56, -88, -89, 69, 23, -32, 82, 79, 113, -2, -7, -110, 20, -60, 8, -98, 113, -13, -128, -123, 39, -91, -124, -29, 106, 117, -80, -128, 126, -51, 50, -11, -40, 38, -15, -47, 38, -111, 121, -101, -23, -19, -30, 62, 25, -67, -81, 92, -63, -9, 39, 65, 19, -53, 26, 33, -19, -105, 32, 123, -3, 56, -92, 38, -100, -105, 40, 58, -116, -22, 15, -15, 12, 30, -84, 27, -8, 67, -63, 33, -95, 87, -74, 3, -11, -9, 82, 112, 33, -47, -39, 55, -65, 15, -61, -16, 102, 75, 117, -74, -97, -89, -29, 40, 99, 100, -59, -65, -54, 23};
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
    msg.setTimeStamp(0.7027671016906939);
    msg.setSource(49116U);
    msg.setSourceEntity(233U);
    msg.setDestination(51848U);
    msg.setDestinationEntity(221U);
    msg.seq = 3973098885U;
    msg.destination.assign("IXNNHFWILZYHBZNAIJWCDXXHINRKPUCQUVOPFGMDBKIVFXOVQOUHYEKAAJCBGKMSASSDUEZJVVSEIWRGGYTJYFYOXNRGTOJLFKZHE");
    msg.timeout = 18490U;
    const char tmp_msg_0[] = {-73, -47, 36, -43, 14, 102, -17, -78, 26, 16, -69, 61, -3, 0, -79, 12, -100, -97, -62, 56, -80, -79, -66, 73, 105, 113, 32, 36, 25, 25, -4, -91, -53, 104, 45, 115, 52, -31, 57, -78, -54, -65, -107, -119, 6, -92, -106, 92, -117, -84, 93, -21, 66, 3, -8, 31, -19, -116, -53, -56, 107, -126, 95, -76, 48, 21, 121, -87, -21, -45, -128, 35, 61, -59, -85, -83, -125, -55, 9, -74, 81, 14, 108, -61, 48, 60, -23, -55, -14, 23, -45, -33, 33, 107, 27, -6, -117, -77, 114, -30, -86, -77, 83, 23, 44, -77, -98, 29, -84, -50, -21, -87, 95, 11, 115, 101, 101, 57, 58, 47, -24, -22, -35, -24, 76, -3, 101, 112, -29, 81, -91, -86, -1, 98, -46, -125, -123, 78, -127, 113, 40, 11, -95, 109, -81, -23, -102, -71, -126, 91, -98, 77, -34, -85, 1, -17, -3, -101, -67, 81, 6, -69, 16, -46, -16, -27, -102, -86, 5, -96, 82, -126, -4, 71, 70, 40, -53, -39, 116, -43, 3, -60, 26, -86, 7, -37, 115, -30, -10, 12, -46, -52, 122, 78, -106, 36, 47, 23, -21, 59, 42, 95, -97, -86, -61, 86, -105, 23, 30, -97, 73, -27, 5, -37, 86, 37, 106, 89, 6, 75, 60, 30, 30, 43, -14, 47, 95, -119};
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
    msg.setTimeStamp(0.807756508170695);
    msg.setSource(1641U);
    msg.setSourceEntity(121U);
    msg.setDestination(52904U);
    msg.setDestinationEntity(91U);
    msg.source.assign("NHDXUYRWIETYZZBPNCFCVBVWBQSESMSPJBRKQNLHDMXSXBGASTIHFUJWFGUVUEJMUFVYOHUXOOEXFLPCDDOEVQHHNDMBVMCRLMCLKRWUXNEPWJCIDUGSKKYFYDOHZSGPWTMOLHIVOMPEYAHAJUGXRIVABTLIIXJUSWAPGKAAGJFO");
    const char tmp_msg_0[] = {-58, 37, -98, -3, 40, 97, 23, 76, -117, 4, 93, 114, -72, 40, -118, -8, 52, -4, -25, -44, -59, 43, -3, -51, -89, 5, -68, -84, 1, -105, 32, -25, -94, 41, -6, -95, -79, -25, 10, -9, -122, -104, 21, 26, -72, 23, -7, 89, -12, 14, 102, -43, 47, 84, -45, 94, 85, -104, 81, 70, -85, 65, 0, -37, 5, 70, -31, 14, -27, -31, -50, 84, 27, -52, -36, -111, -15, 34, -97, -89, -86, 123, -17, 69, 124, 26, -52, 116, 19, -91, -122, 101, 2, 82, -26, -57, 93, 85, 59, 71, 84, -2, 73, -41, -91, 17, 9, -16, -119, 29, 14, 13, -76, 23, 92, -63, -112, -20, 9, 99, -53, 36, -57, -100, 116, 105, -50, -28, 112, 25, 41, 45, 102, 40, -93, -61, 119, -12, 120, -123, -5, 1, 104, 64, 6, -14, 19, -124, -15, 117, -65, -57, 65, 20, 6, -51, 66, 107, 47, -20, 111, 35, -109, 41, 37, -97, 76, -38, 33, -99, -113, -27, 91, 46, -14, 4, 88, 3};
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
    msg.setTimeStamp(0.826574877516487);
    msg.setSource(4420U);
    msg.setSourceEntity(51U);
    msg.setDestination(31616U);
    msg.setDestinationEntity(185U);
    msg.source.assign("GRDHLSFXIGPIQTQEVWWPZJTOMJZTLIWSYRHEBNENQKKNVTMSUILRNNHURCYWGCFXDQLDBDKWPQBEJIXZOHAJHUQNYCBIRGCPDHCMMDSXXRUQVCXJMXRRKUPYJTDKJPOGBZKSLAMRZNGKJETIBPPBRYOXFM");
    const char tmp_msg_0[] = {-12, -32, 7, -96, 72, -16, -112, -115, 11, 103, -40, -28, 27, -46, -26, 14, 8, -25, 102, 29, -109, 96, -104, -28, -40, 77, 77, 36, -3, 28, -69, 62, -3, 108, 109, 6, 108, -2, 111, -108, 97, -65, 90, 32, 75, 101, 119, 8, 30, 40, -27, -94, 18, 88, 37, 50, 34, -16, -95, -78, -94, 125, -75, 126, 121, -30, -13, -107, -55, 65, 43, -120, -45, -121, 87, 77, -29, -73, 117, 56, -128, -113, -7, -20, 120, -15, 97, 8, -123, -114, 55, 53, 8, 99, 5, 2, 96, 34, -90, 7, 15, 7, -3, -102, -24, 124, 85, 24, 63, 0, 92, -19, 31, -124, 0, 63, 64, 10, 101, 0, 53, -34, 85, -118, -35, -31, -87, 47, -28, -52, -45, 12, 65, 7, 115, -97, 85, 58, 7, 76, -125, -76, 118, -26, -102, 86, -62, -70, 65, 71, -89, 62};
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
    msg.setTimeStamp(0.7885999681703432);
    msg.setSource(20762U);
    msg.setSourceEntity(180U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(251U);
    msg.source.assign("IQYREUCXKKWZVZGFICDBHIVEGBZFZWCAVRXPTJQSDXFHITJCRHXCMLNHMPAGGRJADIQKLODEAREBAHJWGCISDTGYDFSOWLQMRBLKNNRZAMXELTMBEKNWZGVBNOPJUQVOGKQE");
    const char tmp_msg_0[] = {107, 84, 101, -104, 24, 29, -69, -77, -11, 77, 110, -6, 28, -102, 117, -128, 73, -50, 58, -96, 31, 56, 7, 107, 67, -44, -56, 50, 103, -107, -38, 66, -75, 53, 10, 93, 39, -121, 36, 55, -13, 81, -42, -85, 5, 10, 123, -18, 120, -17, -108, -102, -61, 32, 96, -112, 59, -123, 35, -74, 48, 96, -24, -36, -35, 5, -127, -4, 75, -18, 117, 98, 6, 30, 32, 125, -96, -62, -35, 41, 20, 106, -14, 97, 125, -21, -121, -70, 126, -108, -99, -114, -22, -84, 44, 39, -93, -121, -9, -33, -91, -52, 113, 107, 95, 87, -74, -104, 65};
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
    msg.setTimeStamp(0.6504558171871442);
    msg.setSource(56233U);
    msg.setSourceEntity(205U);
    msg.setDestination(57395U);
    msg.setDestinationEntity(11U);
    msg.seq = 3160093605U;
    msg.state = 104U;
    msg.error.assign("YGPIENWKGYXVEDJMKLEIDSAQRLHWZPANQFHTEYEXJUJLSZRCOTQOQQFTAGOBKUNSSEHIOBJCJWHZVOOXBNSTYEXATPNNPH");

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
    msg.setTimeStamp(0.5581231481897777);
    msg.setSource(44125U);
    msg.setSourceEntity(159U);
    msg.setDestination(23779U);
    msg.setDestinationEntity(4U);
    msg.seq = 307214831U;
    msg.state = 92U;
    msg.error.assign("UHKWTPLMXBRSIHJVLESNSNBFUZZKKTBGNIFYDKCARPVXOJMZULXOWZVTERFHFRSLOYBWYSCCYVXBTQOKYDPLENLQDNIPDTMNMPOWIVTXDQXFZRILNWUAVZSGROGRZGHDYRNJDBOJHTGLGMSEOMEFQZSZAMUQWZKADHPJOAHUEVIHLLHKQSFEJQCPCHFPIIUTXPAABBGUGOWXYJKP");

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
    msg.setTimeStamp(0.540054838022086);
    msg.setSource(24505U);
    msg.setSourceEntity(228U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(70U);
    msg.seq = 1509294330U;
    msg.state = 118U;
    msg.error.assign("YZOPHPHXXHDTNPUOCVKOXRQHKGWRKYOXPWVAJVOELMRLFUPVLXVUYJTEQZEMJQZDDSABUYIBLIFHDHAIPNTBCHSVNDVY");

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
    msg.setTimeStamp(0.4702246540893915);
    msg.setSource(6710U);
    msg.setSourceEntity(18U);
    msg.setDestination(17163U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("CWJCPUHEILRLGBFSPQCIHPVGAISBXHZPZZHMWLRDZTUPNIBUEGDOROLBCMHOKZVFGJKHPYYUAWEQWGYXZLKLYBHTNMTNUEYCLHATZENQFUMFRBKQSROCGHCPMYRADOFTNSTXIYEFFXUSXKRALUKJJNQZXUTERIWDTMDJSXZTGLQ");
    msg.text.assign("BMNMQNKPAAKYWSLAPEHJPUPAFEQXXESESPOQQJXSJIQRYSIPYQNZRW");

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
    msg.setTimeStamp(0.7955785011369805);
    msg.setSource(42318U);
    msg.setSourceEntity(9U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("AQGEJDFQWXCAMXZAMMTBBRENBMNOZKGIDPVTWUBKRSLEMXEOJVSFXUGIPRWKDUZXQXOFZKIJCEYJPWXZEOVPMUGNBTOIGALHOQHISCUDGZOQJLTDGKARBCRYEKDYIHWSOHZCYUQTYXQBWUQKUPBNLYEIOJNLDLZFWAGNAQHGUPTFVYVSNWVRIUYSHTNMJICJRFDCHNZRWOBNFKAGXQFVAVKMISPTLTV");
    msg.text.assign("RKGLSBRHBWXQXQLKWHMLNYPBSJQJCTUKWKOEHFJAOOBDZMRLGSCRAFWNGTKDPBIDR");

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
    msg.setTimeStamp(0.674516594623369);
    msg.setSource(23363U);
    msg.setSourceEntity(31U);
    msg.setDestination(15958U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("MNSBKXLPQDRSILGCVHIHOAMBYDJYJJZFVOSWSINZAXJQYVYKGUOSKDBKHBATGRENVJXRORFFGITHTBZDPACUQCNRRCDBJWOINZACVXMSUZQGPWFQPCBPVGKPUUSVHRCOET");
    msg.text.assign("GPEXOFAUXROCSEOPGAJQRYAMWOQWVYHUWURVBESBNPLXIWKZJSSGNZFRGXTZDCFCMODZSZMGZINHGPPUIKGVWCQAPIBHDFUEJALBOQBECGDCVIYRQWXZTJHNODLMQUFKYCCNOLGTRJKLPGAMUDXHZXNVVXVDQBYSTYDJNRJLHAPDCFJEBURZENTBZBNIYKEAILUSLHLSLKXHRMSVTKUNYBXMVAEWTDKQFIWKWMOAFQ");

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
    msg.setTimeStamp(0.859488837710512);
    msg.setSource(18155U);
    msg.setSourceEntity(49U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(230U);
    msg.origin.assign("HOIPNJEZSHTAHTGUILFBREMIOTZXBOCOBFHTYSWZLYZJWJYOEPNEPWKKPQEITHMHLBNXUXFJBLJDTEKPIYUUGKNQTCPRPPHOFFQYVGCYGDZXSNACOAVWNQLMLCDAKXDLGUVRKAAVEZEKRZEJVQGKDXGWASCVBORYPYASJBQPR");
    msg.htime = 0.20452423888393656;
    msg.lat = 0.24770532520713417;
    msg.lon = 0.36773794353118616;
    const char tmp_msg_0[] = {-72, 45, 93, 112, -111, -12, -59, -126, -92, 22, -113, -32, 60, -65, -70, -38, -115, -58, 90, 122, -52, -58, -68, 4, -45, -103, 7, 112, -36, 39, 2, -68, 67, -58, 31, 27, 61, 47, -53, -59, 16, -91, 76, 81, -120, 97, 106, -64, -20, -120, -24, 91, -50, 67, 112, -70, -83, 57, -91, 75, 26, 69, 11, -70, 91, 33, -117, 99, -34, 1, -118, -21, 63, -98, -18, 12, -63, 4, 118, 89, -75, -124, 59, 82, 68, -29, 30, 88, -2, -89, 63, 92, -64, -115, -71, 23, -86, 99, 58, 80, -95, 19, 44, -6, -118, 35, -71, -68, -127, -85, 55, 117, -46, 73, 13, -63, -53, -117, 114, 90, -37, -20, 111, 39, -54, 79, 24};
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
    msg.setTimeStamp(0.5032566607175318);
    msg.setSource(31512U);
    msg.setSourceEntity(232U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("LNROMFLVWUSBTCYAQLUJNGXDPQIUVHUKJTHVVDGTRPQAZOZQMKXGEQRDYHZIZEXLUCFATMCCOOBIYNATMADY");
    msg.htime = 0.020538514427787535;
    msg.lat = 0.032807192184055256;
    msg.lon = 0.14374563795233275;
    const char tmp_msg_0[] = {121, -62, 110, -68, 98, 94, -19, -102, 124, 85, 100, -114, 95, -39, -63, -102, 85, -96, -62, 84, -17, -49, 10, 24, -110, 38, -33, -13, 56, 116, -2, -31, -77, -25, 111, 109, 28, -2, -76, -78, -109, 98, 47, -18, 3, -120, 79, -105, -42, -65, 106, -57, 96, 89, -27, 117, -106, 119, -26, 70, -9, 15, 102, -124, -88, -41, 100, 67, 107, -79, -59, 36, 11, 86, -6, -118, 107, -82, -82, -118, 78, 47, 83, -71, 45, 0, -81, -120, -69, 115, -60, -122, 79, -36, -9, -4, 60, 109, -104, 12, -73, -66, -79, 9, 116, 123, 30, -70, 115, -78, -88, 41, 10, -93, 96, -104, 53, -53, -26, 23, 53, 126, 111, -103, 53, -100, -32, 86, -66, 51, -10, 112, 122, 73, 64, 11, -49, -75, 8, 18, 15, 106, -111, 83, -83, -17, -68, 53, 51, -58, 65, -43, -18, 124, 47, 88, -51, 69, 123, 104, 63, -65, 66, -4, -89, 31, 75, -67, -54, 108, 83, -60, -16, 45, 48, 57, 62, 63, 112, -41, 55, -47, -22, 10, -86, -8, -123, 110, 106, 123, -82, -56, -39, 81, 71, -101, 37, -67, -24, 8, 29, -49, -46, 100, -96, 31, -39, -99, -112, 10, -47, -5, 30, 3, -59, 43, 19, 61, -77, -94, -49, 8, 92, -29, -13, 48, -20, 120, -31, -9, 57, 44, 6, 93, 65, 33, -12, -87, 7, 19, -28, 117, -56, -84, 19, -59};
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
    msg.setTimeStamp(0.31530897069585906);
    msg.setSource(44966U);
    msg.setSourceEntity(159U);
    msg.setDestination(49726U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("DXVJBDOUHNSPILXMCEDVMCQLPWJMXDZKFUEGLATMZJWOSQPAFXCAZZTLRTYEMFIEPETCFX");
    msg.htime = 0.5520280300447906;
    msg.lat = 0.15629592057353225;
    msg.lon = 0.6539450263170735;
    const char tmp_msg_0[] = {58, -52, -7, -43, 105, 28, -28, -96, -24, -96, 116, -86, 34, -27, -122, -56, 18, -38, 19, -71, 67, 89, 85, 90, 94, -6, -65, -20, -32, 41, -78, 29, 10, -100, -21, -35, 0, 98, 35, -51, 75, -28, 20, 6, 105, -95, 18, 38, 72, 82, 91, -54, -102, 65, 89, 13, 106, 29, 75, -59, 78, -119, 85, 32, -94, 11, -18, 122, -97, 55, -88, 80, 43, -37, 107, 88, -121, -120, 4, 19, -21, 35, -18, -117, -48, 1, 12, -45, 91, 59, -71, -98, -19, 67, -128, -35, -6, -29, 103, 102, -84, 11, -90, 78, -44, 48, -19, -55, -59, 85, 126, 46, 91, -1, -119, 35, -97, -31, 45, 76, 24, 94, -107, -98, -37, 26, -32, -71, -91, -126, 84, 77, -21, -40, 56, 92, -117, 42};
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
    msg.setTimeStamp(0.2216779275300459);
    msg.setSource(46094U);
    msg.setSourceEntity(18U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(49U);
    msg.req_id = 14411U;
    msg.ttl = 58233U;
    msg.destination.assign("CUVFQHPCABAUQXNZIDXJMFFPOQKVZXHNHLIPJPZQDOSGGXFYJNALVSBKOTQBWCLTMVCTCLWMSIOYEKKQBRKFSHALTQBFUCQZBARRJLHRPBMBNEOOSYKHLZELPNUVIYFWJJMGEOURAYZEHBMWWEGZIXXAAXE");
    const char tmp_msg_0[] = {-19, 106, 25, 50, -32, -19, 23, -67, -21, 55, 120, -115, -73, 24, -8, 67, -57, -17, -33, 77, 23, 34, -38, -106, 20, -90, -65, 72, -114, -36, 33, -47, 33, 45, 41, -14, 75, -78, 115, -37, -100, -65, 34, -25, -88, 64, 52, -10, -62, -113, -117, -7, 29, -11, 74, -80, 79, 47, -26, 112, 20, -37, -103, 111, -46, 80, 122, 74, -19, 49, -61, -76, 105, -8, 126, -97, 106, -58, -108, 29, -73, -98, 104, 104, 88, 86, 98, 113, -94, 71, 65, 55, -27, -3, -96, 65, 26, 75, 42, 17, -45, -30, 12, -14, 71, 28, 32, -14, 65, -90, 67, 88, 9, 114, -12, -115, 63, -61, -102, -16, 6, -114, 70, 109, 6, 43, -43, 115, -118, -113, -105, -116, 29, 100, 93, 19, 46, 88, 33, -61, -101, 90, 122, -45, -13, 110, -44, -58, 44, 68, -103, 86, -4, 106, -51, 29, -34, -60, 123, 21, -115, 10, -65, 47, 5, 77, 65, -98, -10, -124, 97, -4, -36, -68};
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
    msg.setTimeStamp(0.42731540775415844);
    msg.setSource(39332U);
    msg.setSourceEntity(103U);
    msg.setDestination(12551U);
    msg.setDestinationEntity(26U);
    msg.req_id = 30717U;
    msg.ttl = 64254U;
    msg.destination.assign("TKVFEEKRJSDHMWIDGQMHFZNBGMSVJSPOCFUBCKXDYYEGOSFDJSIUIRJTIMHRYVDCQICQFYNHHJEUNVHFOFMNUOGAQGLWJCELDQSYEDRQXZRQLUALAANXSFUWNXOLIUZRSGBVEARCGNVAHDKATPUFWYNTGCOSRQMBEZZJIVNROPCZPMQXBTHLRBYXCPYTJYJXZXTL");
    const char tmp_msg_0[] = {-18, -85, -46, -55, -7, 87, 102, -73, -58, -7, 121, -114, 39, -70, -119, -116, 1, -116, 72, -71, 29, -8, 18, 42, -127, -11, -69, 18, -89, -84, -37, 29, 3, 24, -16, 45, -45, 54, 42, -113, -78, -123, -51, 43, 63, 81, -95, 104, -13, -68, 112, 102, 32, -97, -23, -103, 120, 94, 9, 62, 60, 41, -4, -107, -14, -41, -107, -101, -14, -69, 57, -24, 74, -66, -6, 64, 101, -34, -112, 94, 13, 11, -57, 26, 18, 1, -51, 54, 60, 115, 3, -80, 48, 102, 40, -15, -51, -76, 24, 78, -24, 106, -98, 73, -74, 5, -48, -8, -45, 26, -76, -113, -81, -116, 13, 101, 39, -58, -85, 35, -108, -1, -95, -18, 45, 18, -110, 115, -34, -53, 107, 28, -67, 77, 8, -105, -69, -100, 2, 37, 98, 106, -55, -44, 82, 26, 99, -94, -97, 8, 52, -81, 121, -110, 72, -9, -43, -79, 65, 40, -41, -96, -120, 1, 85, 91, -80, 88, -10, -1, 64, -23, -54, 32, -44, -61, -9, 88, -95, 89, 113, -80, -66, -53, -70, -26, 77, 84, 99, 107, 94, -36, -70, -20, -93, -25, -51, -116, 67, 9, 117, 3, -114, -47, 74, 109, 110, 15, 41, -35, 26, -122, 7, 45, -60, 23, -68, -48, -73, -16, -56, 70, 83, -29, -70, 100, 30, -78, 59, -102, -25, -77, 112, -71, 120, -65, -45, 52, -71, -107, 74};
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
    msg.setTimeStamp(0.5676878397935691);
    msg.setSource(24468U);
    msg.setSourceEntity(26U);
    msg.setDestination(48926U);
    msg.setDestinationEntity(219U);
    msg.req_id = 60254U;
    msg.ttl = 23742U;
    msg.destination.assign("CGOJIARSUVHWJKMGGWGEDDDXXRNOZQECOMVEBVPHJJUCJHWAULCZPVYIIGNMSWQOQQFXSAAIUZFQCOZPFNWRWKLTPXTRMBIODRVFXHKTTQYJNWIETFURPRNPUTMCPIGOHJVISDTLQISORDEMQJFZRWVLUCEAPGKLBXSPSYCDNGBVFSYHKMOBQBNNKYLLBFTHMEDVMXSANXLDAJH");
    const char tmp_msg_0[] = {-84, -70, 108, 91, 119, -59, -74, 81, 119, 30, -51, -64, 120, 114, -22, 66, 100, 109, 2, -47, -99, -77, 77, -118, -101, -2, 49, -44, -85, 67, 70, -7, 48, -24, 30, 102, 67, 63, 35, -109, -20, 11, 69, 107, -44, 44, -62, 62, -98, 103, 97, 4, -80, 113, 26, -5, -37, 12, 110, -121, 11, -46, -81, -41, 41, -61, 6, 84, -120, -72, -86, -23, -63, 119, -127, -87, 104, -3, -35, -87, 62, 40, -100, -101, 65, 46, 9, 55, 73, 49, 88, 1, -73, 116, 26, -20, 60, 34, 95, -41, -14, 120, 125, 20, -110, -63, -88, 3, -100, -55, -84, 24, 93, 46, -102, -29, -118, -34, 82, 54, 31, 64, 34, -57, 33, -97, -87, 76, 106, -27, -14, 14, 7, -52, 91, -117, -77, -87, -52, -59, 97, -65, -127, -100, -87, 31, 36, -21, -39, -76, -9, 100, -23, 55, -57, -105, -1, 113, 19, 115, -100, -3, 21, -31, 121, -83, 111, -39, -42, -113, 89, -57, 117, -104, 72, 71, -113, -73, -18, -36, -117, -53, -99, 104, 110, 90, 113, 15, 60, 2, -54, 90, 2, -123, 103, 99, 116, 40, -61, 43, 126, -108, 86, -111, 17, -54, 46, 14, 68, 79, 46, 2, -24, 118, 9, 57, 72, -28, 93, -125, 125, 95, -120, -103, -74, 96, -115, -50, -122, -37, 85, -112, -112, -111, 68, 123, 105, 15, -18, -102, 71, -77, -71, 18, 107, 73, 59, 8, -54, 116, 124, 18, 105};
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
    msg.setTimeStamp(0.791933349183416);
    msg.setSource(53158U);
    msg.setSourceEntity(203U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(70U);
    msg.req_id = 28245U;
    msg.status = 249U;
    msg.text.assign("ZXPMOFRNVWRUBGBARNCZRVLXQCHYIAHPCGPOPVYUSVNYKJABDFFTYGNSQXAGUFEACDMFKIYZEJKHJHRDBWAKXLCDHPPINUWNPWKZLXWURLVEYIL");

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
    msg.setTimeStamp(0.5853771303973144);
    msg.setSource(25854U);
    msg.setSourceEntity(165U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(111U);
    msg.req_id = 17396U;
    msg.status = 148U;
    msg.text.assign("AKKQEWRHPVUMJABQGMYTTZWJEFXJCXXCUHNMYJSWKTIPSDSNXPURXTTCNADDLVSHUFPCCUYHCTRNWQXMXHXBHKNUJETJXZSYWAQGFHMIMNMVCPBDEPGLVOCAFHIYPAWTOVPBEGKWTIKSROFAUVZUVZDDERRPZMYSWGAE");

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
    msg.setTimeStamp(0.5861721839438877);
    msg.setSource(4952U);
    msg.setSourceEntity(196U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(82U);
    msg.req_id = 44103U;
    msg.status = 50U;
    msg.text.assign("RSXXAOCJVGVQLHBDWQQDXXCLYGLGLMIYTBQMJOLQPAOFEKRBQSCLYBSQAPZWWWCWRMKFUATYORUMFHFKHOLDZGIOKIZAEVUWVQCN");

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
    msg.setTimeStamp(0.8179495477621289);
    msg.setSource(57224U);
    msg.setSourceEntity(219U);
    msg.setDestination(2419U);
    msg.setDestinationEntity(87U);
    msg.id = 172U;
    msg.range = 0.10280472707570043;

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
    msg.setTimeStamp(0.7535781322208654);
    msg.setSource(41296U);
    msg.setSourceEntity(121U);
    msg.setDestination(52103U);
    msg.setDestinationEntity(37U);
    msg.id = 150U;
    msg.range = 0.4418635252356825;

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
    msg.setTimeStamp(0.9033230082547292);
    msg.setSource(43551U);
    msg.setSourceEntity(96U);
    msg.setDestination(28571U);
    msg.setDestinationEntity(60U);
    msg.id = 55U;
    msg.range = 0.4606910493085564;

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
    msg.setTimeStamp(0.9544631594706382);
    msg.setSource(45161U);
    msg.setSourceEntity(99U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(114U);
    msg.tx = 133U;
    msg.channel = 1U;
    msg.timer = 40314U;

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
    msg.setTimeStamp(0.40948122604860115);
    msg.setSource(55352U);
    msg.setSourceEntity(78U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(33U);
    msg.tx = 65U;
    msg.channel = 249U;
    msg.timer = 64381U;

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
    msg.setTimeStamp(0.7128703264031218);
    msg.setSource(52034U);
    msg.setSourceEntity(135U);
    msg.setDestination(19346U);
    msg.setDestinationEntity(112U);
    msg.tx = 70U;
    msg.channel = 158U;
    msg.timer = 59729U;

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
    msg.setTimeStamp(0.39344937526085977);
    msg.setSource(411U);
    msg.setSourceEntity(107U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(109U);
    msg.beacon.assign("WJCFDBDUAZAOMSQSTQWCUWIUDNKLLSIBXIBWGYFGVETWALGYSOULWPLKTXRFUIDVHYHPJSBFINPPUGHGZZOYPXYJNGRSVZQMXZJAOESXLACBXIAXHEXQNDFWOBLFNPFCDIEENZVSJJWOGGPJK");
    msg.lat = 0.3241007849823869;
    msg.lon = 0.9583301049621441;
    msg.depth = 0.7841318905947195;
    msg.query_channel = 176U;
    msg.reply_channel = 227U;
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
    msg.setTimeStamp(0.24033991523773945);
    msg.setSource(3012U);
    msg.setSourceEntity(99U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("FFBSXFSSFLYQPEGYJOJOBAAQQFYDTSHIWNXERRUVKZNHTVRFYZQLXGAHXNCLMQKAJYMRNPRCXDYBJLIKYSTRFCEWQUHCZ");
    msg.lat = 0.45718586520275617;
    msg.lon = 0.14205186141682546;
    msg.depth = 0.8200864341111572;
    msg.query_channel = 165U;
    msg.reply_channel = 176U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.45287948764517294);
    msg.setSource(12373U);
    msg.setSourceEntity(125U);
    msg.setDestination(16561U);
    msg.setDestinationEntity(9U);
    msg.beacon.assign("REKELCLSGSSLNDSAQKZONUFSYKIWJZJWJQBOKXRHRRZYCPFEIOXRTNWCF");
    msg.lat = 0.7185875857054591;
    msg.lon = 0.8723835066886197;
    msg.depth = 0.032672295276609864;
    msg.query_channel = 181U;
    msg.reply_channel = 150U;
    msg.transponder_delay = 91U;

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
    msg.setTimeStamp(0.9826284968379432);
    msg.setSource(36446U);
    msg.setSourceEntity(22U);
    msg.setDestination(22424U);
    msg.setDestinationEntity(181U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.41484786141962215);
    msg.setSource(59987U);
    msg.setSourceEntity(105U);
    msg.setDestination(12796U);
    msg.setDestinationEntity(111U);
    msg.op = 38U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YLMHDAYBUVCUDTIPMMJQCGJEEZVICKGGPBINNPKZQUOKKLQPWKMTUJDBTISQFXPCPXCYVXPRMPNBPGJRALFHAIYJRGWGYOCHNZZSDRVSBIHTFXUTLYTSWAYEPASNFDEJOXCDFAUFOUQGHMIIAZRLZOLSLSEUJKBSQAECLOHRMSEQMLDNOZXOWQIWVZHTGFMSBCFJERDNBV");
    tmp_msg_0.lat = 0.4376996841148467;
    tmp_msg_0.lon = 0.14659724324848156;
    tmp_msg_0.depth = 0.39050584959002876;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 30U;
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
    msg.setTimeStamp(0.42246558647451304);
    msg.setSource(36265U);
    msg.setSourceEntity(20U);
    msg.setDestination(3431U);
    msg.setDestinationEntity(37U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.023559137330055657);
    msg.setSource(44948U);
    msg.setSourceEntity(237U);
    msg.setDestination(59689U);
    msg.setDestinationEntity(171U);
    msg.address = 196U;

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
    msg.setTimeStamp(0.05317333454812079);
    msg.setSource(376U);
    msg.setSourceEntity(119U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(85U);
    msg.address = 49U;

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
    msg.setTimeStamp(0.11548680082037266);
    msg.setSource(13193U);
    msg.setSourceEntity(243U);
    msg.setDestination(18002U);
    msg.setDestinationEntity(169U);
    msg.address = 89U;

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
    msg.setTimeStamp(0.5876618674516426);
    msg.setSource(7220U);
    msg.setSourceEntity(34U);
    msg.setDestination(5824U);
    msg.setDestinationEntity(131U);
    msg.address = 226U;
    msg.status = 106U;
    msg.range = 0.8582907490806309;

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
    msg.setTimeStamp(0.7441406369096194);
    msg.setSource(60644U);
    msg.setSourceEntity(240U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(68U);
    msg.address = 3U;
    msg.status = 242U;
    msg.range = 0.7650129692225769;

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
    msg.setTimeStamp(0.09631156681617747);
    msg.setSource(56608U);
    msg.setSourceEntity(39U);
    msg.setDestination(527U);
    msg.setDestinationEntity(124U);
    msg.address = 6U;
    msg.status = 90U;
    msg.range = 0.03762706184799247;

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
    msg.setTimeStamp(0.5401804823349425);
    msg.setSource(24091U);
    msg.setSourceEntity(37U);
    msg.setDestination(41569U);
    msg.setDestinationEntity(145U);
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 26U;
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
    msg.setTimeStamp(0.37818109212997886);
    msg.setSource(22423U);
    msg.setSourceEntity(86U);
    msg.setDestination(31540U);
    msg.setDestinationEntity(121U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.993791524008444;
    tmp_msg_0.confidence = 0.029969403762907687;
    tmp_msg_0.opmodes.assign("OSJATXUDJYUAMBQLFTBPFTDYDKHVDLHIBLHQW");
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
    msg.setTimeStamp(0.6466692863938002);
    msg.setSource(27259U);
    msg.setSourceEntity(71U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(120U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 87U;
    tmp_msg_0.goal_id.assign("KIPALFMNWIQMGZORBLZWHYMRTNVRUPDTMGSQVFLXOKJPXIVNKURGZNXZCKSOBJDAXEAFJZDELGNHOLETYTOEOSLEKWIIBGUKAJDPSKCDYYUVTRFCJQVBEILHMSMQCTHUFWCJQIWRIMQPAXAYAVQBCXDBYC");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("PXGLGAAAJUMQNNYUPZVCNMPTZRVZCJWHAGMICTBYZYIRKUVWOTNQMGGQGBWPJRXJQFTTBVIGCJOCHSVBWPNZSTVKHIMFCFCPYDBJNSRZEUOAVCQXVSUDESFNSHRXEZDVOBKDPKWYXYUEFZSLJJXXUNIKRMHFSDAMLKH");
    tmp_tmp_msg_0_0.predicate.assign("FCIQNLEBOCGRFVWUTUZVSYKHXURJYFOJXYJWVRNUMBEQFVITKZECPXGYFBKSEAQCOPFPPOSAKFO");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZRAPLXGRMSVBSCFABTZNLSEI");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 11U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("DEIGUQSRAYJQFCQJEITRXXJPEEHHWIASGXCMBBNGYZKKZLLEQQHCFWFLRQBZKQMMBGDMEJVUXCOFGIVBHNYIMHSHHAJMOVVKOCHTAKRFENIYARWYXXSIJZZECDFOZCTTJUNVKPATOWWGGXMOGMFLESJPYAQKVKXJPYUDTLIOOYBONBDBDCRMPWTAVTTSPDTMJNIBCBULXPZUGWFLGKCDPNDHNSQWSVYURXYURWKLRNEZFIUA");
    tmp_tmp_tmp_msg_0_0_0.max.assign("ZDRHQWJTVJVKWVPAGIQVBNNMGAVUHIYDEAAEVMYNOBETRZICDMDFHIKHXDZBRERUWNOTMCHHIXSOXVMUDZBJKDHPKX");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.001960901128283399);
    msg.setSource(63641U);
    msg.setSourceEntity(158U);
    msg.setDestination(3603U);
    msg.setDestinationEntity(184U);
    msg.enable = 215U;

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
    msg.setTimeStamp(0.2272198891741225);
    msg.setSource(10502U);
    msg.setSourceEntity(119U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(249U);
    msg.enable = 90U;

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
    msg.setTimeStamp(0.733427683949119);
    msg.setSource(47120U);
    msg.setSourceEntity(118U);
    msg.setDestination(29761U);
    msg.setDestinationEntity(121U);
    msg.enable = 192U;

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
    msg.setTimeStamp(0.9664722856798322);
    msg.setSource(54726U);
    msg.setSourceEntity(193U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(18U);
    msg.summary = 7U;
    msg.level = 207U;

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
    msg.setTimeStamp(0.9656722958947951);
    msg.setSource(3537U);
    msg.setSourceEntity(32U);
    msg.setDestination(32461U);
    msg.setDestinationEntity(122U);
    msg.summary = 74U;
    msg.level = 51U;

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
    msg.setTimeStamp(0.940777343443719);
    msg.setSource(46161U);
    msg.setSourceEntity(73U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(92U);
    msg.summary = 92U;
    msg.level = 173U;

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
    msg.setTimeStamp(0.36110581389531204);
    msg.setSource(42295U);
    msg.setSourceEntity(85U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.16780440054093304);
    msg.setSource(24138U);
    msg.setSourceEntity(217U);
    msg.setDestination(9179U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.3012002552641875);
    msg.setSource(27670U);
    msg.setSourceEntity(6U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.21120148784589077);
    msg.setSource(11940U);
    msg.setSourceEntity(110U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.45320909819385957);
    msg.setSource(36315U);
    msg.setSourceEntity(12U);
    msg.setDestination(3476U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.8392458572834748);
    msg.setSource(46750U);
    msg.setSourceEntity(50U);
    msg.setDestination(1680U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.6417472697330502);
    msg.setSource(33172U);
    msg.setSourceEntity(138U);
    msg.setDestination(19889U);
    msg.setDestinationEntity(240U);
    msg.op = 42U;
    msg.system.assign("GQIGNIUOGENBYJJIYAXVUAOLQPALBVZCUJMTZHUQKFQWFGSVJVLLDETMWAWTWNAFFDEFEITWSJFKHMMSZRQHKRUIJTUMMCWOCXEFKKYDTKSEOXICCRLHLXBQNBOWGJLATDWREDXYRNPHNPLEZVWOXKGZCDNBMDJVHAIOASNGQSQPKVOGMYMPIOTARGYYHNYPXTPRBJSSXZTPOBLZZVRXYLQIBRSNDXVUHUPGKIWCFUHZCB");
    msg.range = 0.12768777771631767;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.5506671215313714;
    tmp_msg_0.type = 113U;
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
    msg.setTimeStamp(0.6938004222468371);
    msg.setSource(42232U);
    msg.setSourceEntity(181U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(213U);
    msg.op = 75U;
    msg.system.assign("SGQZYXPOIFATFJPFWUJDLKFSXXKRFVUQRNRMZPROOKUHSMAVSLNTHGYGREUEROAPIYDTMRKYJKRCLQJVFKKDFECBQZMBQBJGPBZWHNDBDCUAWTKWCEZCZIXAMWIJYSQPLXLCVVEPUHISQHB");
    msg.range = 0.1773364773761329;
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("GMOSJVRAUVEZCYXWMLARCOBLTTWIUPIOFKZOUKKYDEAZVUIXKFTDQXUXTAIOYPEKNTBHQWWQUVPEFVSDPCNNQADUFPYMNOSWGUYL");
    tmp_msg_0.x = 0.5715494231674466;
    tmp_msg_0.y = 0.9849679238113772;
    tmp_msg_0.depth = 0.7098294552116705;
    tmp_msg_0.var_x = 0.84653614164299;
    tmp_msg_0.var_y = 0.6338693535908543;
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
    msg.setTimeStamp(0.18407996686720807);
    msg.setSource(9509U);
    msg.setSourceEntity(243U);
    msg.setDestination(15118U);
    msg.setDestinationEntity(250U);
    msg.op = 183U;
    msg.system.assign("XDZAFBUDOEWNSVJYVERMCNMHLRQJPQDFUWRTGYRDAUKOMRYPVWTWUNKROSFOBNQHHMVKUQEKSOAYDNV");
    msg.range = 0.5199018407182409;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.17682097346114556);
    msg.setSource(54960U);
    msg.setSourceEntity(124U);
    msg.setDestination(53178U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.5480750810472603);
    msg.setSource(26370U);
    msg.setSourceEntity(235U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.07380641292675227);
    msg.setSource(62106U);
    msg.setSourceEntity(172U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.32743827626537125);
    msg.setSource(49983U);
    msg.setSourceEntity(197U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(121U);
    msg.list.assign("HMBWZRAPKPQFTKIKIW");

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
    msg.setTimeStamp(0.8332733591975507);
    msg.setSource(26059U);
    msg.setSourceEntity(140U);
    msg.setDestination(53215U);
    msg.setDestinationEntity(13U);
    msg.list.assign("MTPOPSOADAWLQFVDZHUWXSKJPSRXGYOSXNPFSHNNBEPNKTHLTXJTTZEQKWRFECUFGWWBFVMEKLULMJHRMQBOUWKEDBMXQGSKEAIMUDUKPASGHEYGWNZZTBQUNCIICBRXDZAMIOFLWHZDYYVROAMUJCWTFJBTTSZFVYFGRRQBBTELUOVBYRJYJLGMKQADCNSCZIVVIHEALPGOVCNLKKJI");

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
    msg.setTimeStamp(0.9421024701334985);
    msg.setSource(2962U);
    msg.setSourceEntity(203U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(242U);
    msg.list.assign("DODIBLUWVLRKQOOMILVBNKPAEZCNIXRGUPJHZUAEITHFMGCODIBSTMJAKNWAFKPXSONUBRUVNTTZYQNYPZYTVNSIFZOSFOIWSXYOCJYKFSDVCBDDRQJQZELHHMQGGKVJMLRTXLHSEFEGXOZBPEWTSYQHHPUNJZIMWDGYXREIHRWPXFKFVKQKCGQHUMAVDJXJJGZBMATWCLNRYMUSOWEV");

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
    msg.setTimeStamp(0.4004499578605971);
    msg.setSource(35951U);
    msg.setSourceEntity(236U);
    msg.setDestination(702U);
    msg.setDestinationEntity(14U);
    msg.value = -4750;

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
    msg.setTimeStamp(0.9468220160210885);
    msg.setSource(37831U);
    msg.setSourceEntity(251U);
    msg.setDestination(22683U);
    msg.setDestinationEntity(136U);
    msg.value = 11793;

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
    msg.setTimeStamp(0.18316162399883396);
    msg.setSource(54218U);
    msg.setSourceEntity(135U);
    msg.setDestination(44786U);
    msg.setDestinationEntity(80U);
    msg.value = -9217;

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
    msg.setTimeStamp(0.5915907032605435);
    msg.setSource(8282U);
    msg.setSourceEntity(170U);
    msg.setDestination(63723U);
    msg.setDestinationEntity(24U);
    msg.value = 0.561098068130568;

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
    msg.setTimeStamp(0.43813868820584634);
    msg.setSource(17972U);
    msg.setSourceEntity(227U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3525331756307767;

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
    msg.setTimeStamp(0.8862842298393175);
    msg.setSource(23853U);
    msg.setSourceEntity(128U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(127U);
    msg.value = 0.42231082271159903;

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
    msg.setTimeStamp(0.8458685024865459);
    msg.setSource(4212U);
    msg.setSourceEntity(41U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8475342128296507;

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
    msg.setTimeStamp(0.9496379163295927);
    msg.setSource(24599U);
    msg.setSourceEntity(220U);
    msg.setDestination(43088U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6409033874812126;

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
    msg.setTimeStamp(0.41481732783204617);
    msg.setSource(26082U);
    msg.setSourceEntity(245U);
    msg.setDestination(45107U);
    msg.setDestinationEntity(37U);
    msg.value = 0.580884069732256;

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
    msg.setTimeStamp(0.27778937582706775);
    msg.setSource(51457U);
    msg.setSourceEntity(115U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(161U);
    msg.validity = 56086U;
    msg.type = 202U;
    msg.utc_year = 61442U;
    msg.utc_month = 192U;
    msg.utc_day = 109U;
    msg.utc_time = 0.4699729554573677;
    msg.lat = 0.7289171163320587;
    msg.lon = 0.9388809751362958;
    msg.height = 0.40208882608937035;
    msg.satellites = 205U;
    msg.cog = 0.32187578941804074;
    msg.sog = 0.10316401576132195;
    msg.hdop = 0.26004438721396494;
    msg.vdop = 0.29294541944201336;
    msg.hacc = 0.7813740922430403;
    msg.vacc = 0.5150882937792904;

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
    msg.setTimeStamp(0.7453795911879056);
    msg.setSource(46688U);
    msg.setSourceEntity(251U);
    msg.setDestination(64143U);
    msg.setDestinationEntity(154U);
    msg.validity = 41899U;
    msg.type = 103U;
    msg.utc_year = 12936U;
    msg.utc_month = 32U;
    msg.utc_day = 252U;
    msg.utc_time = 0.32403760329134423;
    msg.lat = 0.7499869914261588;
    msg.lon = 0.46268988467167127;
    msg.height = 0.47282852088891303;
    msg.satellites = 122U;
    msg.cog = 0.4726826863781669;
    msg.sog = 0.27243045567620083;
    msg.hdop = 0.8980442650160463;
    msg.vdop = 0.16284187985047183;
    msg.hacc = 0.09735907830520141;
    msg.vacc = 0.5934097673896339;

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
    msg.setTimeStamp(0.7259565307555288);
    msg.setSource(29572U);
    msg.setSourceEntity(201U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(20U);
    msg.validity = 5928U;
    msg.type = 83U;
    msg.utc_year = 29038U;
    msg.utc_month = 207U;
    msg.utc_day = 129U;
    msg.utc_time = 0.17795660442617212;
    msg.lat = 0.25132756939582057;
    msg.lon = 0.8356774384753952;
    msg.height = 0.20204324867420398;
    msg.satellites = 30U;
    msg.cog = 0.0402428221911908;
    msg.sog = 0.24275175589816644;
    msg.hdop = 0.7940503731642309;
    msg.vdop = 0.7822428087935827;
    msg.hacc = 0.7370809074424048;
    msg.vacc = 0.5415960409227242;

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
    msg.setTimeStamp(0.827861296191672);
    msg.setSource(63570U);
    msg.setSourceEntity(145U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(30U);
    msg.time = 0.14403928965470159;
    msg.phi = 0.16498566473210663;
    msg.theta = 0.8542582783120206;
    msg.psi = 0.46815209059302154;
    msg.psi_magnetic = 0.11599624736724701;

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
    msg.setTimeStamp(0.48271826558841624);
    msg.setSource(16657U);
    msg.setSourceEntity(112U);
    msg.setDestination(21218U);
    msg.setDestinationEntity(138U);
    msg.time = 0.49264724348763367;
    msg.phi = 0.8480954516765736;
    msg.theta = 0.7957209680852263;
    msg.psi = 0.9608822295898862;
    msg.psi_magnetic = 0.05836451182760649;

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
    msg.setTimeStamp(0.8069152536089431);
    msg.setSource(28331U);
    msg.setSourceEntity(2U);
    msg.setDestination(63111U);
    msg.setDestinationEntity(184U);
    msg.time = 0.13047040013991507;
    msg.phi = 0.4449384056896952;
    msg.theta = 0.38159289293784227;
    msg.psi = 0.12197681505767088;
    msg.psi_magnetic = 0.2256297069354456;

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
    msg.setTimeStamp(0.8573765688890036);
    msg.setSource(62649U);
    msg.setSourceEntity(44U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(167U);
    msg.time = 0.7524079338672385;
    msg.x = 0.018236265136443164;
    msg.y = 0.522977599707747;
    msg.z = 0.8159862993715854;
    msg.timestep = 0.9595635840605847;

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
    msg.setTimeStamp(0.08914160473408905);
    msg.setSource(13105U);
    msg.setSourceEntity(78U);
    msg.setDestination(58908U);
    msg.setDestinationEntity(27U);
    msg.time = 0.16262908671380638;
    msg.x = 0.38504173549066867;
    msg.y = 0.21026394234682766;
    msg.z = 0.6645424192588387;
    msg.timestep = 0.5812533446238134;

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
    msg.setTimeStamp(0.041629389079840706);
    msg.setSource(64272U);
    msg.setSourceEntity(249U);
    msg.setDestination(5445U);
    msg.setDestinationEntity(91U);
    msg.time = 0.695546734565971;
    msg.x = 0.11636874512747342;
    msg.y = 0.7768921146036819;
    msg.z = 0.644557647627854;
    msg.timestep = 0.14018014557315772;

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
    msg.setTimeStamp(0.8798553693357295);
    msg.setSource(22941U);
    msg.setSourceEntity(73U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(120U);
    msg.time = 0.35125945537176406;
    msg.x = 0.7487247572260265;
    msg.y = 0.4803983334507115;
    msg.z = 0.12974150476741753;

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
    msg.setTimeStamp(0.2732159618298191);
    msg.setSource(13515U);
    msg.setSourceEntity(82U);
    msg.setDestination(58991U);
    msg.setDestinationEntity(42U);
    msg.time = 0.19725692377412374;
    msg.x = 0.5638171715135187;
    msg.y = 0.27809751282762507;
    msg.z = 0.8284835376150003;

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
    msg.setTimeStamp(0.4437006368450246);
    msg.setSource(58213U);
    msg.setSourceEntity(44U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(242U);
    msg.time = 0.3342827718265704;
    msg.x = 0.43205251942563816;
    msg.y = 0.8749562815735781;
    msg.z = 0.6292157512402442;

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
    msg.setTimeStamp(0.7453049591174951);
    msg.setSource(13811U);
    msg.setSourceEntity(140U);
    msg.setDestination(24903U);
    msg.setDestinationEntity(252U);
    msg.time = 0.14002365730756905;
    msg.x = 0.830250315532877;
    msg.y = 0.6881792134615208;
    msg.z = 0.574481152781;

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
    msg.setTimeStamp(0.050145469821011424);
    msg.setSource(7078U);
    msg.setSourceEntity(194U);
    msg.setDestination(39977U);
    msg.setDestinationEntity(162U);
    msg.time = 0.16663533682479026;
    msg.x = 0.6060460952983573;
    msg.y = 0.8674616683524357;
    msg.z = 0.056719123368396795;

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
    msg.setTimeStamp(0.9538599313502174);
    msg.setSource(47482U);
    msg.setSourceEntity(104U);
    msg.setDestination(32559U);
    msg.setDestinationEntity(113U);
    msg.time = 0.8111952730402093;
    msg.x = 0.016578102643220793;
    msg.y = 0.6098444317053245;
    msg.z = 0.6791184177881401;

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
    msg.setTimeStamp(0.3908990201728626);
    msg.setSource(25893U);
    msg.setSourceEntity(226U);
    msg.setDestination(20360U);
    msg.setDestinationEntity(29U);
    msg.time = 0.6829721579613457;
    msg.x = 0.8319164767450294;
    msg.y = 0.016033741033240623;
    msg.z = 0.46770248549875015;

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
    msg.setTimeStamp(0.9334261626159611);
    msg.setSource(36154U);
    msg.setSourceEntity(166U);
    msg.setDestination(51777U);
    msg.setDestinationEntity(139U);
    msg.time = 0.7436454194353852;
    msg.x = 0.32034538395702694;
    msg.y = 0.4087417442991852;
    msg.z = 0.8696010414557132;

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
    msg.setTimeStamp(0.10562718283767525);
    msg.setSource(22628U);
    msg.setSourceEntity(246U);
    msg.setDestination(11466U);
    msg.setDestinationEntity(90U);
    msg.time = 0.2859536191708494;
    msg.x = 0.7614396326039515;
    msg.y = 0.215950691659188;
    msg.z = 0.8635949404271817;

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
    msg.setTimeStamp(0.42555714362796515);
    msg.setSource(46962U);
    msg.setSourceEntity(109U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(133U);
    msg.validity = 140U;
    msg.x = 0.9491423179005484;
    msg.y = 0.6349804209149529;
    msg.z = 0.73111731632574;

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
    msg.setTimeStamp(0.9402821136664657);
    msg.setSource(7072U);
    msg.setSourceEntity(210U);
    msg.setDestination(36725U);
    msg.setDestinationEntity(165U);
    msg.validity = 30U;
    msg.x = 0.5683124777231158;
    msg.y = 0.8850034854302167;
    msg.z = 0.9195130871880782;

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
    msg.setTimeStamp(0.8236535646747286);
    msg.setSource(20843U);
    msg.setSourceEntity(209U);
    msg.setDestination(2194U);
    msg.setDestinationEntity(56U);
    msg.validity = 164U;
    msg.x = 0.19676237438692057;
    msg.y = 0.7232008908312966;
    msg.z = 0.11823468698273942;

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
    msg.setTimeStamp(0.7764232470124307);
    msg.setSource(52196U);
    msg.setSourceEntity(149U);
    msg.setDestination(11878U);
    msg.setDestinationEntity(168U);
    msg.validity = 151U;
    msg.x = 0.5228002405191895;
    msg.y = 0.7454146535168759;
    msg.z = 0.0727285994196174;

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
    msg.setTimeStamp(0.10236068115668617);
    msg.setSource(48836U);
    msg.setSourceEntity(143U);
    msg.setDestination(9358U);
    msg.setDestinationEntity(132U);
    msg.validity = 143U;
    msg.x = 0.8916654540221777;
    msg.y = 0.17261838252941353;
    msg.z = 0.8293847364167318;

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
    msg.setTimeStamp(0.9672984595693239);
    msg.setSource(27001U);
    msg.setSourceEntity(141U);
    msg.setDestination(46406U);
    msg.setDestinationEntity(245U);
    msg.validity = 87U;
    msg.x = 0.8588955856722424;
    msg.y = 0.9154603685914973;
    msg.z = 0.782728823967623;

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
    msg.setTimeStamp(0.6264656390963238);
    msg.setSource(50722U);
    msg.setSourceEntity(92U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(200U);
    msg.time = 0.8934528022984136;
    msg.x = 0.18695788837139615;
    msg.y = 0.2507110428245355;
    msg.z = 0.4805821739780418;

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
    msg.setTimeStamp(0.5450992209223003);
    msg.setSource(34617U);
    msg.setSourceEntity(29U);
    msg.setDestination(31537U);
    msg.setDestinationEntity(250U);
    msg.time = 0.9135176397708547;
    msg.x = 0.506887030664035;
    msg.y = 0.48664942913379716;
    msg.z = 0.4062574892511255;

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
    msg.setTimeStamp(0.03725804687342016);
    msg.setSource(33940U);
    msg.setSourceEntity(39U);
    msg.setDestination(53559U);
    msg.setDestinationEntity(28U);
    msg.time = 0.5907110259565219;
    msg.x = 0.5099315386252672;
    msg.y = 0.7148161490514471;
    msg.z = 0.8414283041177825;

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
    msg.setTimeStamp(0.4364270606642273);
    msg.setSource(40291U);
    msg.setSourceEntity(184U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(21U);
    msg.validity = 169U;
    msg.value = 0.2873023141414618;

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
    msg.setTimeStamp(0.5461954447751639);
    msg.setSource(15517U);
    msg.setSourceEntity(64U);
    msg.setDestination(28211U);
    msg.setDestinationEntity(62U);
    msg.validity = 145U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8452121406350445;
    tmp_msg_0.y = 0.5695441126878701;
    tmp_msg_0.z = 0.07903582523882446;
    tmp_msg_0.phi = 0.6043738748246892;
    tmp_msg_0.theta = 0.40227777387698094;
    tmp_msg_0.psi = 0.03039122671918515;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.498818407256689;
    tmp_msg_1.beam_height = 0.1514991154419133;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9538451397926379;

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
    msg.setTimeStamp(0.8212534080460979);
    msg.setSource(35260U);
    msg.setSourceEntity(131U);
    msg.setDestination(25998U);
    msg.setDestinationEntity(246U);
    msg.validity = 98U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.647782996096688;
    tmp_msg_0.y = 0.5701961214706293;
    tmp_msg_0.z = 0.7801443746733384;
    tmp_msg_0.phi = 0.8927574756473267;
    tmp_msg_0.theta = 0.3436722897208492;
    tmp_msg_0.psi = 0.8462820492186278;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9621373862217563;
    tmp_msg_1.beam_height = 0.9685595711881415;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9656640234983966;

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
    msg.setTimeStamp(0.9550940774887813);
    msg.setSource(44473U);
    msg.setSourceEntity(38U);
    msg.setDestination(50183U);
    msg.setDestinationEntity(128U);
    msg.value = 0.7568470049949743;

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
    msg.setTimeStamp(0.31182069631149645);
    msg.setSource(48853U);
    msg.setSourceEntity(114U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6126357637585012;

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
    msg.setTimeStamp(0.3011013538566407);
    msg.setSource(11673U);
    msg.setSourceEntity(37U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(166U);
    msg.value = 0.06571117574012297;

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
    msg.setTimeStamp(0.34374239532423945);
    msg.setSource(24718U);
    msg.setSourceEntity(253U);
    msg.setDestination(32276U);
    msg.setDestinationEntity(194U);
    msg.value = 0.4073478021005006;

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
    msg.setTimeStamp(0.779551470338209);
    msg.setSource(18738U);
    msg.setSourceEntity(36U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(124U);
    msg.value = 0.08240867735017476;

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
    msg.setTimeStamp(0.03210278125291799);
    msg.setSource(57055U);
    msg.setSourceEntity(29U);
    msg.setDestination(49868U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7721126173224506;

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
    msg.setTimeStamp(0.053381957358071386);
    msg.setSource(26280U);
    msg.setSourceEntity(178U);
    msg.setDestination(31433U);
    msg.setDestinationEntity(2U);
    msg.value = 0.30045171406352766;

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
    msg.setTimeStamp(0.8009000735905683);
    msg.setSource(33182U);
    msg.setSourceEntity(114U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(26U);
    msg.value = 0.24642884636038886;

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
    msg.setTimeStamp(0.012353659772074366);
    msg.setSource(15307U);
    msg.setSourceEntity(124U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(241U);
    msg.value = 0.04965278843555421;

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
    msg.setTimeStamp(0.8896861499643559);
    msg.setSource(9907U);
    msg.setSourceEntity(91U);
    msg.setDestination(46104U);
    msg.setDestinationEntity(252U);
    msg.value = 0.4815487819922203;

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
    msg.setTimeStamp(0.27876739823539676);
    msg.setSource(24084U);
    msg.setSourceEntity(178U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8926726207005139;

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
    msg.setTimeStamp(0.12711872104590205);
    msg.setSource(2217U);
    msg.setSourceEntity(41U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9751315810386801;

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
    msg.setTimeStamp(0.21143773341756755);
    msg.setSource(28234U);
    msg.setSourceEntity(14U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(186U);
    msg.value = 0.9562535265964502;

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
    msg.setTimeStamp(0.4687625428837804);
    msg.setSource(43106U);
    msg.setSourceEntity(192U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(167U);
    msg.value = 0.647720868589933;

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
    msg.setTimeStamp(0.7273099888273298);
    msg.setSource(44198U);
    msg.setSourceEntity(158U);
    msg.setDestination(57197U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9271523265772474;

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
    msg.setTimeStamp(0.8003878697561879);
    msg.setSource(6757U);
    msg.setSourceEntity(53U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(188U);
    msg.value = 0.3417182968264545;

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
    msg.setTimeStamp(0.9975181176890471);
    msg.setSource(24761U);
    msg.setSourceEntity(25U);
    msg.setDestination(28234U);
    msg.setDestinationEntity(172U);
    msg.value = 0.6876375080946102;

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
    msg.setTimeStamp(0.7963463899305478);
    msg.setSource(26498U);
    msg.setSourceEntity(124U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5640685705365008;

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
    msg.setTimeStamp(0.6150114377685159);
    msg.setSource(17431U);
    msg.setSourceEntity(176U);
    msg.setDestination(6099U);
    msg.setDestinationEntity(148U);
    msg.value = 0.17409274104229078;

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
    msg.setTimeStamp(0.08630770433569857);
    msg.setSource(3807U);
    msg.setSourceEntity(86U);
    msg.setDestination(49747U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5712658334412548;

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
    msg.setTimeStamp(0.3408542238335157);
    msg.setSource(58531U);
    msg.setSourceEntity(206U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(106U);
    msg.value = 0.33685108760896865;

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
    msg.setTimeStamp(0.7219014587612723);
    msg.setSource(48360U);
    msg.setSourceEntity(200U);
    msg.setDestination(63375U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6716475651982604;

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
    msg.setTimeStamp(0.7389304957376667);
    msg.setSource(50749U);
    msg.setSourceEntity(223U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(189U);
    msg.value = 0.567091910491122;

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
    msg.setTimeStamp(0.29981949354905);
    msg.setSource(16625U);
    msg.setSourceEntity(232U);
    msg.setDestination(63702U);
    msg.setDestinationEntity(64U);
    msg.value = 0.19141180241108402;

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
    msg.setTimeStamp(0.5859154078976209);
    msg.setSource(34912U);
    msg.setSourceEntity(69U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(90U);
    msg.direction = 0.24648589060982917;
    msg.speed = 0.7538252936735349;

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
    msg.setTimeStamp(0.6145922403646839);
    msg.setSource(58762U);
    msg.setSourceEntity(159U);
    msg.setDestination(43759U);
    msg.setDestinationEntity(85U);
    msg.direction = 0.6261019038133602;
    msg.speed = 0.17428552054877988;

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
    msg.setTimeStamp(0.399092087621836);
    msg.setSource(48235U);
    msg.setSourceEntity(217U);
    msg.setDestination(32119U);
    msg.setDestinationEntity(63U);
    msg.direction = 0.2562064117236479;
    msg.speed = 0.20051454129942126;

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
    msg.setTimeStamp(0.11265490898373076);
    msg.setSource(19882U);
    msg.setSourceEntity(160U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(66U);
    msg.value = 0.1377245659745291;

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
    msg.setTimeStamp(0.5423743651967267);
    msg.setSource(24244U);
    msg.setSourceEntity(247U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(50U);
    msg.value = 0.38922459276530263;

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
    msg.setTimeStamp(0.6210363019768504);
    msg.setSource(12425U);
    msg.setSourceEntity(233U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(191U);
    msg.value = 0.41155818008034284;

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
    msg.setTimeStamp(0.5629368811384232);
    msg.setSource(1507U);
    msg.setSourceEntity(124U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(10U);
    msg.value.assign("GAQSDUVISZFGOOVWIUGYSCTBZZYMUBKDXXXYCPVFOAWZJVIBWYDOVOQUBPRAQRUJINTMLAOCTSGSSBAJIWUSXEEJDQSHGHDRJQNWMIKLYTXLZNAERLUIDLMDIKBLHELQOXQTJHCTPNMJAIYNZNNFCVMBCFKWXRQPYKUKKPWWKZBTAHHMLSOEXULTQGZJYBAERCCNEFDTETHFMFDGFPGMPXBHPRNRQSUPIDJHYR");

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
    msg.setTimeStamp(0.4427033450284952);
    msg.setSource(36130U);
    msg.setSourceEntity(32U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(249U);
    msg.value.assign("LJCLNNPMZBB");

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
    msg.setTimeStamp(0.0996664501350999);
    msg.setSource(48873U);
    msg.setSourceEntity(44U);
    msg.setDestination(4449U);
    msg.setDestinationEntity(72U);
    msg.value.assign("EGULBATFPDMFQPYQTVIFSTGZDTBASHEACNDNKJOSITWSFOTGNGWEBUWJPVRJXYCGUXWJEGEUTOQMPWFHXUYCAZXKSIXEVNIBUMLBOCPLFRLOMXVHLSUFVRVKKZYPEBKERYFZIDEVAZJFZNTJWJRMKVXLKRQLRMRKQZITYHXHCZXWCPZNOUVFOGIBKHBVSQGNJCK");

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
    msg.setTimeStamp(0.4735164405030816);
    msg.setSource(14037U);
    msg.setSourceEntity(242U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(103U);
    const char tmp_msg_0[] = {22, 13, -127, -61, 50, -9, 125, -84, -97, 9, 12, -51, 9, 31, 54, 78, -120, -4, 49, -105, 22, -12, -4, 21, 43, -78, -45, -57, -23, 125, 35, -16, -102, -127, 66, -83, -68, -57, 79, -4, -20, 123, -16, 53, -7, -19, 61, -127, -37, -61, 2, -2, -21, -38, -71, -71, 89, -12, 15, 16, -5, 16, -29, -73, -119, 103, 29, 23, 42, -38, 83, 27, 124, -93, -89, 57, 107, 13, -48, -54, -74, 61, -60, -110, 117, -95, 83, 5, -108, 96, 68, -70, 89, 18, -37, 29, 68, -121, -89, -104, -113, -48, -37, 101, -22, -51, -51, 11, -15, -60, 4, 2, -80, -23, -106, 15, -9, -75, 10, -84, -55, 74, 38, 61, -122, -104, 30, 81, 57, -108, 69, 106, -116, -86, 2, 41, 5, -63, -117, 34, 37, 119, 86, -66, 29, 23, -108, -108, -23, 91, 17, 119, -51, 49, -57, 10, 24, 122, 39, 22, -44, -44, 40, -87, -88, -112, -56, 9, -64, 79, 0, -88, 115, 65, 111, -55, -9, -57, -61, -15, 20, 49, -68};
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
    msg.setTimeStamp(0.5661606775274203);
    msg.setSource(26935U);
    msg.setSourceEntity(234U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(181U);
    const char tmp_msg_0[] = {61, 39, -111, 8, -59, 51, -16, 30, 67, 113, 67, 95, 8, -82, 34, -51, -80, -109, 95, 43, -17, -76, -52, 48, 42, -20, 90, 42, 23, -117, 75, -74, -15, -12, 22, -57, -105, 117, -58, 19, 86, -40, -117, 58, 51, 49, -71, 44, 28, -42, -39, 25, 8, -108, 68, 97, 115, -115, 26, -45, 99, -52, -67, -10, 116, 14, 103, 28, -105, 123, 9, -99, -2, -75, -82, -109, -48, -13, 70, -112, -52, -100, 60, 126, -124, -109, -121, -25, 115, -79, -93, -71, 84, 65, 102, 123, -60, 106, 108, -69, -27, -73, -66, -94, 11, 85, -127, 58, -103, 69, 5, -77, 12, -51, -121, -14, 17, -72, 124, -115, -53};
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
    msg.setTimeStamp(0.8080803579417534);
    msg.setSource(45156U);
    msg.setSourceEntity(189U);
    msg.setDestination(35206U);
    msg.setDestinationEntity(203U);
    const char tmp_msg_0[] = {-32, -90, 15, -104, -2, 70, 25, -24, 7, 32, 94, -127, 28, 96, -24, 115, -74, 43, -93, -10, -51, -86, 10, -83, 91, 51, 67, -96, 83, -92, 87, -32};
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
    msg.setTimeStamp(0.2538400005360192);
    msg.setSource(60517U);
    msg.setSourceEntity(130U);
    msg.setDestination(31029U);
    msg.setDestinationEntity(200U);
    msg.frequency = 1700555335U;
    msg.min_range = 39185U;
    msg.max_range = 10360U;

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
    msg.setTimeStamp(0.8233248480661589);
    msg.setSource(43031U);
    msg.setSourceEntity(106U);
    msg.setDestination(24566U);
    msg.setDestinationEntity(133U);
    msg.frequency = 1803713437U;
    msg.min_range = 61545U;
    msg.max_range = 1576U;

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
    msg.setTimeStamp(0.0298125382235358);
    msg.setSource(30916U);
    msg.setSourceEntity(252U);
    msg.setDestination(8154U);
    msg.setDestinationEntity(208U);
    msg.frequency = 732653704U;
    msg.min_range = 38780U;
    msg.max_range = 33651U;

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
    msg.setTimeStamp(0.7147385573136905);
    msg.setSource(52198U);
    msg.setSourceEntity(75U);
    msg.setDestination(54936U);
    msg.setDestinationEntity(104U);
    msg.type = 111U;
    msg.frequency = 1721767192U;
    msg.min_range = 11101U;
    msg.max_range = 33005U;
    msg.bits_per_point = 209U;
    msg.scale_factor = 0.6747667049196125;
    const char tmp_msg_0[] = {-25, -116, 25, -4, 23, -126, 69, 11, 25, 118, 92, 0, -23, 117, -56, 36, -32, 112, 126, -121, 125, 48, 68, -13, -113, 19, -67, 78, -71, 41};
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
    msg.setTimeStamp(0.4924463244107481);
    msg.setSource(18724U);
    msg.setSourceEntity(51U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(26U);
    msg.type = 53U;
    msg.frequency = 135634988U;
    msg.min_range = 63904U;
    msg.max_range = 9914U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.6334160544063646;
    const char tmp_msg_0[] = {-1, 87, -12, 32, -17, 29, -51, 115, 101, 27, 53, 81, -80, -5, -69, -119, 57, -128, -96, 27, -35, 95, -31, 100, -84, 33, -18, -30, 2, -87, 75, -104, -112, -22, -71, 120, 122, -3};
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
    msg.setTimeStamp(0.2511669128551549);
    msg.setSource(35920U);
    msg.setSourceEntity(67U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(18U);
    msg.type = 144U;
    msg.frequency = 1659862376U;
    msg.min_range = 3929U;
    msg.max_range = 52989U;
    msg.bits_per_point = 45U;
    msg.scale_factor = 0.27505976257920317;
    const char tmp_msg_0[] = {96, 119, 18, -37, -35, -109, -54, 53, -44, -25, 97, -70, 34, -25, 40, -59, -71, 90, -13, 22, -116, -99, -65, 116, -36, 52, -79, 4, -115, 16, 23, 17, -87, 44, -55, -112, 12, -108, 70, -25, -109, 17, -99, -125, 92, 84, -62, 22, -92, -104, -47, -123, -120, -124, 15, 1, 9, 30, 113, 96, -92, 15, -1, 66, 61, 26, 103, 17, -84, -100, 4, -45, 118, -22, -12, -100, -26, 124, -50, 98, -84, 106, -99, -73, -41, 15, 5};
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
    msg.setTimeStamp(0.6858749751244388);
    msg.setSource(5474U);
    msg.setSourceEntity(54U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.1618624575139237);
    msg.setSource(38641U);
    msg.setSourceEntity(68U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.9675545630275815);
    msg.setSource(62573U);
    msg.setSourceEntity(47U);
    msg.setDestination(54608U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.1926673829061244);
    msg.setSource(53705U);
    msg.setSourceEntity(61U);
    msg.setDestination(43700U);
    msg.setDestinationEntity(213U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.019144385082009885);
    msg.setSource(18209U);
    msg.setSourceEntity(92U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(27U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.7086600427421862);
    msg.setSource(7236U);
    msg.setSourceEntity(161U);
    msg.setDestination(11891U);
    msg.setDestinationEntity(252U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.43008102065289844);
    msg.setSource(34530U);
    msg.setSourceEntity(13U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(143U);
    msg.value = 0.05659696207034681;
    msg.confidence = 0.04367293328695643;
    msg.opmodes.assign("ICMGNBPQQFAQQCLVWDOYTXPWXLELGABSHOTGEVZWPHEDCTMATOZISXIDOSLISKRXVJQBWJQWFGZYCEBINWUAARKNSANMJKIVXGNATQRBJPBHNSVZJQPJZBOFMXOJDPRXRROSLFNACNHQJNPHEWXFJ");

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
    msg.setTimeStamp(0.6613750123785429);
    msg.setSource(5572U);
    msg.setSourceEntity(169U);
    msg.setDestination(3413U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8510838618530295;
    msg.confidence = 0.8507512671079596;
    msg.opmodes.assign("JWVAZMVRXNUOYFRVIEGLQKTISZTKLPNAZDBIEQNCFLSETMDINADJHJIASOZBSEKXPGHSYKXARTWIXPVDBWULCKJYJVGYCBQQSHDRQMATHPLPGUGSFMDVEQDNCUUBTZKTLMCGWBPIHPGMQHOOOORDBEXQFJNOWVBAAHRWJIKVTRDSCJOHGCZMTWZYYROFLAYXYENBVPKZIZUFUAQCSRGKWFXPNESMUKWLYGDEMUBXEHFPFFIRXUXCNWLZMVOQHT");

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
    msg.setTimeStamp(0.6676065795445891);
    msg.setSource(23115U);
    msg.setSourceEntity(169U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(69U);
    msg.value = 0.154032675912681;
    msg.confidence = 0.7036971375273572;
    msg.opmodes.assign("PXCDFHPFETDPAGOQUKCJMWICZWMOGJJKLNKRHKVSHACETPTOIXSELZDIJFMYPNQXYUOBMBJORSMAUXKGVTSDSWZEIYLBVRYQBC");

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
    msg.setTimeStamp(0.09502662375350723);
    msg.setSource(57921U);
    msg.setSourceEntity(146U);
    msg.setDestination(37801U);
    msg.setDestinationEntity(143U);
    msg.itow = 1383810126U;
    msg.lat = 0.7616292513188285;
    msg.lon = 0.5360648302073224;
    msg.height_ell = 0.20237249232243937;
    msg.height_sea = 0.8443339991126764;
    msg.hacc = 0.8179531613610865;
    msg.vacc = 0.2879433556452483;
    msg.vel_n = 0.6528708042278885;
    msg.vel_e = 0.4575813853490962;
    msg.vel_d = 0.5367999365628726;
    msg.speed = 0.038593028123345974;
    msg.gspeed = 0.6514088050969365;
    msg.heading = 0.14002794812961827;
    msg.sacc = 0.06969571918878514;
    msg.cacc = 0.5886245121806156;

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
    msg.setTimeStamp(0.8158661471293107);
    msg.setSource(37865U);
    msg.setSourceEntity(138U);
    msg.setDestination(8579U);
    msg.setDestinationEntity(212U);
    msg.itow = 3497323354U;
    msg.lat = 0.5315420409621912;
    msg.lon = 0.34887888224076524;
    msg.height_ell = 0.02667562066078699;
    msg.height_sea = 0.19316154728254364;
    msg.hacc = 0.25940026181372877;
    msg.vacc = 0.3264367992319128;
    msg.vel_n = 0.26980891320119027;
    msg.vel_e = 0.630874259588398;
    msg.vel_d = 0.10950675464223725;
    msg.speed = 0.5983652805450861;
    msg.gspeed = 0.8198979277308269;
    msg.heading = 0.17828437603066327;
    msg.sacc = 0.38708060848406234;
    msg.cacc = 0.4917697430741975;

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
    msg.setTimeStamp(0.6660833656136952);
    msg.setSource(63851U);
    msg.setSourceEntity(0U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(128U);
    msg.itow = 1780665540U;
    msg.lat = 0.7414763671320382;
    msg.lon = 0.36893590241178975;
    msg.height_ell = 0.9814605934179046;
    msg.height_sea = 0.29312027917363626;
    msg.hacc = 0.1612448611785281;
    msg.vacc = 0.6159169712924183;
    msg.vel_n = 0.16007632261227955;
    msg.vel_e = 0.9149776380481002;
    msg.vel_d = 0.9362534658371341;
    msg.speed = 0.6092160917403632;
    msg.gspeed = 0.19903905039945302;
    msg.heading = 0.7183553485867543;
    msg.sacc = 0.5089663121965673;
    msg.cacc = 0.007809372793214808;

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
    msg.setTimeStamp(0.2720193408247167);
    msg.setSource(17622U);
    msg.setSourceEntity(204U);
    msg.setDestination(24613U);
    msg.setDestinationEntity(89U);
    msg.id = 135U;
    msg.value = 0.7504531412015377;

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
    msg.setTimeStamp(0.4560195588923944);
    msg.setSource(11370U);
    msg.setSourceEntity(68U);
    msg.setDestination(7364U);
    msg.setDestinationEntity(251U);
    msg.id = 211U;
    msg.value = 0.3081090309890512;

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
    msg.setTimeStamp(0.5303085778865748);
    msg.setSource(34866U);
    msg.setSourceEntity(39U);
    msg.setDestination(57595U);
    msg.setDestinationEntity(67U);
    msg.id = 179U;
    msg.value = 0.17705019120456245;

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
    msg.setTimeStamp(0.4154673794501623);
    msg.setSource(15200U);
    msg.setSourceEntity(89U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(222U);
    msg.x = 0.17683187084791452;
    msg.y = 0.5323329704686569;
    msg.z = 0.5461471510996465;
    msg.phi = 0.5340978207175876;
    msg.theta = 0.7873203267093156;
    msg.psi = 0.8283445659557953;

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
    msg.setTimeStamp(0.9580649524349086);
    msg.setSource(41821U);
    msg.setSourceEntity(70U);
    msg.setDestination(4273U);
    msg.setDestinationEntity(100U);
    msg.x = 0.49559307886386916;
    msg.y = 0.27417688167532495;
    msg.z = 0.935201602077615;
    msg.phi = 0.8689840044414644;
    msg.theta = 0.4679193080830727;
    msg.psi = 0.4176690204767909;

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
    msg.setTimeStamp(0.6970322912448674);
    msg.setSource(20988U);
    msg.setSourceEntity(175U);
    msg.setDestination(14551U);
    msg.setDestinationEntity(68U);
    msg.x = 0.8813668579798133;
    msg.y = 0.3187625626289766;
    msg.z = 0.19860931814433314;
    msg.phi = 0.8707364080418982;
    msg.theta = 0.054381562807098716;
    msg.psi = 0.0020498582855099645;

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
    msg.setTimeStamp(0.08188619085968629);
    msg.setSource(27636U);
    msg.setSourceEntity(102U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(195U);
    msg.beam_width = 0.5131135235141964;
    msg.beam_height = 0.14967198801637083;

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
    msg.setTimeStamp(0.41782978566982276);
    msg.setSource(13839U);
    msg.setSourceEntity(10U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(94U);
    msg.beam_width = 0.9670017546888549;
    msg.beam_height = 0.7055764046817404;

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
    msg.setTimeStamp(0.24578521751481486);
    msg.setSource(43030U);
    msg.setSourceEntity(106U);
    msg.setDestination(48608U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.5247392110577783;
    msg.beam_height = 0.7498472834595618;

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
    msg.setTimeStamp(0.31370631376026825);
    msg.setSource(58473U);
    msg.setSourceEntity(169U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(120U);
    msg.sane = 131U;

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
    msg.setTimeStamp(0.43591865081644465);
    msg.setSource(47250U);
    msg.setSourceEntity(79U);
    msg.setDestination(42354U);
    msg.setDestinationEntity(128U);
    msg.sane = 101U;

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
    msg.setTimeStamp(0.8170722038977288);
    msg.setSource(35625U);
    msg.setSourceEntity(145U);
    msg.setDestination(22774U);
    msg.setDestinationEntity(197U);
    msg.sane = 136U;

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
    msg.setTimeStamp(0.8008429905542899);
    msg.setSource(45193U);
    msg.setSourceEntity(85U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(142U);
    msg.id = 217U;
    msg.zoom = 133U;
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
    msg.setTimeStamp(0.8309377849893442);
    msg.setSource(11441U);
    msg.setSourceEntity(182U);
    msg.setDestination(1094U);
    msg.setDestinationEntity(18U);
    msg.id = 150U;
    msg.zoom = 121U;
    msg.action = 229U;

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
    msg.setTimeStamp(0.2169293396543932);
    msg.setSource(6286U);
    msg.setSourceEntity(251U);
    msg.setDestination(20096U);
    msg.setDestinationEntity(207U);
    msg.id = 149U;
    msg.zoom = 186U;
    msg.action = 206U;

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
    msg.setTimeStamp(0.13429127183755996);
    msg.setSource(36329U);
    msg.setSourceEntity(249U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(221U);
    msg.id = 117U;
    msg.value = 0.9390614459520139;

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
    msg.setTimeStamp(0.1437400476069688);
    msg.setSource(58327U);
    msg.setSourceEntity(100U);
    msg.setDestination(28273U);
    msg.setDestinationEntity(176U);
    msg.id = 91U;
    msg.value = 0.025279192808792317;

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
    msg.setTimeStamp(0.7217978475198654);
    msg.setSource(62464U);
    msg.setSourceEntity(128U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(56U);
    msg.id = 54U;
    msg.value = 0.9217503119922515;

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
    msg.setTimeStamp(0.46089106125685964);
    msg.setSource(11127U);
    msg.setSourceEntity(40U);
    msg.setDestination(32512U);
    msg.setDestinationEntity(70U);
    msg.id = 162U;
    msg.value = 0.7582232589772139;

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
    msg.setTimeStamp(0.78329443949578);
    msg.setSource(38703U);
    msg.setSourceEntity(202U);
    msg.setDestination(52794U);
    msg.setDestinationEntity(96U);
    msg.id = 99U;
    msg.value = 0.3048856375522023;

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
    msg.setTimeStamp(0.5766442270668454);
    msg.setSource(6560U);
    msg.setSourceEntity(159U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(206U);
    msg.id = 83U;
    msg.value = 0.6976023168719806;

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
    msg.setTimeStamp(0.8897474377659862);
    msg.setSource(9465U);
    msg.setSourceEntity(127U);
    msg.setDestination(20044U);
    msg.setDestinationEntity(219U);
    msg.id = 188U;
    msg.angle = 0.0058552469392954;

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
    msg.setTimeStamp(0.14773874323621128);
    msg.setSource(16868U);
    msg.setSourceEntity(94U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(134U);
    msg.id = 37U;
    msg.angle = 0.8821435177629584;

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
    msg.setTimeStamp(0.2993914140368862);
    msg.setSource(42128U);
    msg.setSourceEntity(96U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(120U);
    msg.id = 195U;
    msg.angle = 0.07506772118067617;

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
    msg.setTimeStamp(0.8576763181654099);
    msg.setSource(16104U);
    msg.setSourceEntity(188U);
    msg.setDestination(55426U);
    msg.setDestinationEntity(163U);
    msg.op = 230U;
    msg.actions.assign("LRJDOJPLGREMYQFKMKAKANBANFNJZDRTJBSODXXGTSHITOQLSDEJIZYRUOVQLWIBFUKZXTKAYQPEHFKRCYPGEROGAZNQWTVUSAQBFDFIANULDLEIMRJNKWHIBZIWVHDFXZYCKUGLEUZWQWCRMPKQYEKPPLYSZLXHAHGUHVHICBPEUGVCNHCNZETTTCSBIOQYACSVTMHXVGRW");

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
    msg.setTimeStamp(0.5623886375859436);
    msg.setSource(10383U);
    msg.setSourceEntity(206U);
    msg.setDestination(44386U);
    msg.setDestinationEntity(113U);
    msg.op = 187U;
    msg.actions.assign("RHNEUVLQVYEXXYUYIVTQMUJIDMZLKJKSETXPBFDSEIBCYMCKCNMGTGZIBCQWHYYJFLCDOBASRSHMFVCYUROIVTKPDXABKIDZQNPGFEZQTLENLKECFVXMDOJQVFGKSAZDDMUNUHZBHOOGCQXAIBLVPYVZXFINARRWQLJTGWPRULZWOPBWHH");

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
    msg.setTimeStamp(0.5616686797004499);
    msg.setSource(25943U);
    msg.setSourceEntity(54U);
    msg.setDestination(49187U);
    msg.setDestinationEntity(6U);
    msg.op = 128U;
    msg.actions.assign("IKVQYEXPSCQGWIODGUIXAFWRFOLANTPELCPIRRLEDRLJURLADMPMUFCMVXYWKVCUKINPSLLKFBFPUPHZZUHKLKIQHJKRJTPQUBVCJXL");

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
    msg.setTimeStamp(0.16101115142150735);
    msg.setSource(10367U);
    msg.setSourceEntity(218U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(159U);
    msg.actions.assign("HKQDRYUEVDKMEIKFTUOSVXGHZGKWMXGKUMUJLJEWLCOCJTVJDDSDAKILUGVJXTJLNRUBBVBSE");

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
    msg.setTimeStamp(0.9253944654135585);
    msg.setSource(27968U);
    msg.setSourceEntity(249U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(77U);
    msg.actions.assign("KAIRJNFNRRVSVYODSVMPGHTJFVQROUBCPFKLJQHVRTGOBZGYTJWQBXAOGSPPQPCHPCHNMHRNANKXWVXQESMUJBLGFJQFCMRHDCSODJYMYZWDZIGMFFTDDYZLMUWWTWRYKLKLCSLIJPLXZKNETHFEYWFIUZXXBYAIBRWUHVUFLITOKDDCGSPXCTZRVAOQDOHBWAAIBIXNMEWUZIKAEQKBLL");

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
    msg.setTimeStamp(0.4203915819239502);
    msg.setSource(65520U);
    msg.setSourceEntity(98U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("IRWLXYKORFKMIPUWZHDYTQVYIDGNAIENHCXRFJRBHMHYUBGBMEDYIXZGROPTKFMOZNSKJNPTCTWDUQJZRMBCHEZNVXIEKQWKHCJANWLXSSHSCGKLJLDDGIKCFGBFAARVPFQUKMQYLOLEXCROWBUVSOWTPWFWAADHOEZPYTVFJXAVMZQSAJRLLYORPUXVMLDWJXTBLIPST");

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
    msg.setTimeStamp(0.38877163739525433);
    msg.setSource(12320U);
    msg.setSourceEntity(239U);
    msg.setDestination(7669U);
    msg.setDestinationEntity(253U);
    msg.button = 40U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.09865014599994659);
    msg.setSource(40656U);
    msg.setSourceEntity(227U);
    msg.setDestination(49610U);
    msg.setDestinationEntity(189U);
    msg.button = 165U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.19663218078742262);
    msg.setSource(60330U);
    msg.setSourceEntity(185U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(101U);
    msg.button = 190U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.08158768677614958);
    msg.setSource(43980U);
    msg.setSourceEntity(134U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(38U);
    msg.op = 245U;
    msg.text.assign("NUKWPXVFNXGFTWCIMXYGFKBFCDVXFCJEMAZVOOJKUSUGGXJHOZWVPIMEBPMTQZMQDBQNRSYUYDZOAI");

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
    msg.setTimeStamp(0.10639124718963788);
    msg.setSource(24009U);
    msg.setSourceEntity(190U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(13U);
    msg.op = 231U;
    msg.text.assign("CDKZJKSGLPWFIECHMQQTNVUWAFBMGMDKXOOUVPEBMBZOUTRKQPDLEGCOZUBYFXSALOPZQMHTFBLNIFCVWNIUYEPFVPQNHKCLXMDHJJHYISLJHYGTJJGRSEAGZJXOIPWOLUIFCDY");

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
    msg.setTimeStamp(0.33913994754064103);
    msg.setSource(42618U);
    msg.setSourceEntity(100U);
    msg.setDestination(25590U);
    msg.setDestinationEntity(9U);
    msg.op = 2U;
    msg.text.assign("PYJYPEMQOJNWWTKHJEZDTCKYIZTHWPQMQRLJWDMPBXOANQXUTBQBEWRHJVLFDBUMZCDVAVMSNKYLSXKWFSNQEUWCQBYIMLIIZWSCSOPZKREOFGGTKILYTGPDFLNMWCFAYGOBMSGEMVGLXWVEHTKGSGTOXEEZIXCJXYANOOYFKCYQIAJUBCPFTPUFSUHZHDUIRXVXNHVEKPLHBFOADBQCVNUOXICU");

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
    msg.setTimeStamp(0.5697363493871017);
    msg.setSource(6035U);
    msg.setSourceEntity(217U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(220U);
    msg.op = 203U;
    msg.time_remain = 0.7080084288986761;
    msg.sched_time = 0.12212296960116842;

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
    msg.setTimeStamp(0.9100867851989021);
    msg.setSource(25146U);
    msg.setSourceEntity(177U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(143U);
    msg.op = 194U;
    msg.time_remain = 0.5198404894840819;
    msg.sched_time = 0.9950499063512686;

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
    msg.setTimeStamp(0.5306027529808638);
    msg.setSource(63411U);
    msg.setSourceEntity(208U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(92U);
    msg.op = 172U;
    msg.time_remain = 0.446242712979939;
    msg.sched_time = 0.6397277650666687;

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
    msg.setTimeStamp(0.8025745163024752);
    msg.setSource(53707U);
    msg.setSourceEntity(93U);
    msg.setDestination(7358U);
    msg.setDestinationEntity(229U);
    msg.name.assign("YGQEPSGFXJLUCBZXQNXFWVFPFGKIODIWOHPUDXGQNHRNPLBCQAEZNBZVISLORTJRMHELDATLNXRQDVIICLBMWDBYLCGCMZTCPVRFQHEKJMBAPZFDCSRUHOGTJBVIFJUZYUKUZEWSOYKNRSSGHTRQASVPDIWV");
    msg.op = 104U;
    msg.sched_time = 0.6943346712301856;

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
    msg.setTimeStamp(0.09434450837386488);
    msg.setSource(6807U);
    msg.setSourceEntity(113U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(187U);
    msg.name.assign("UNLGOYKYWCVEAWXTQYEGUBORNMQENVZELQVDFTRUCKUEAORFJXMKZZWSGPDWLBJPMVAPMUMFHNGXQREPMZEA");
    msg.op = 160U;
    msg.sched_time = 0.20252734521717397;

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
    msg.setTimeStamp(0.21479328052922309);
    msg.setSource(28307U);
    msg.setSourceEntity(100U);
    msg.setDestination(41730U);
    msg.setDestinationEntity(161U);
    msg.name.assign("SUWMOEHIYDYEZFXGDTQUXYOYMMORNQRKPXOGOJNAIKUQZYSQTWCVGWDNZIORMABKWJFXFRRIYDJHHHALXIVGDLKPYVYIJPZTSHMNOCQUUWPCKCEDKBQPNDETKUBSRTNNVJWEAFWHQHXSMLQHKJNTGL");
    msg.op = 148U;
    msg.sched_time = 0.9894078174662302;

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
    msg.setTimeStamp(0.38334092916353213);
    msg.setSource(52578U);
    msg.setSourceEntity(27U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.2475226190205283);
    msg.setSource(53541U);
    msg.setSourceEntity(154U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.8298747423402645);
    msg.setSource(23849U);
    msg.setSourceEntity(196U);
    msg.setDestination(9397U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.9152387495778572);
    msg.setSource(37383U);
    msg.setSourceEntity(78U);
    msg.setDestination(39493U);
    msg.setDestinationEntity(204U);
    msg.name.assign("QSEKJAZZQKMYTTKVTXIIVSTBORARTZWHIROAJUOBSICPYKVSDGEWCUBYLXTTVMANWEMHDFJVNTWXSQPAFMGADZLXKTCXFOHGGFQGLJFERDGJHPRBOWYSOIPWCLXNZDESLHARKHYPQCUNIXXEMCGRAFDJMZEDGSPKPNCFJELBBWWCOPNNAVURQYBPGMURD");
    msg.state = 160U;

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
    msg.setTimeStamp(0.6925437189164272);
    msg.setSource(48177U);
    msg.setSourceEntity(149U);
    msg.setDestination(31095U);
    msg.setDestinationEntity(251U);
    msg.name.assign("HCTTKRMQQGZSQWETLWUHHWKPHCDNKSKXAQIJDXGCZYLUQFKPZGQDUTIRVMZLIBPKIJDJLAFHEEMVVYXBSLJCEAHRDKBYENOUOKJEXMSBNYQJHTPR");
    msg.state = 99U;

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
    msg.setTimeStamp(0.8649570471061132);
    msg.setSource(26360U);
    msg.setSourceEntity(197U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(162U);
    msg.name.assign("KCHRWZFYLCMRXTKUPJYWUTMVBMYSKDZNOOAMVFTWFDAXGQGCOEIDLBWSREIKLZLJFBVFWDHCUFLMDAOUUQRE");
    msg.state = 35U;

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
    msg.setTimeStamp(0.01936000342309252);
    msg.setSource(16318U);
    msg.setSourceEntity(176U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(124U);
    msg.name.assign("XDSFSIOHORWNDUPZUJFGVHXHRLKMYJXCPGFABTANOBOPKLCFWCEPVNALSYAKUZKGWCSDFMJVSCJAUTDGEOEHUSCDCPCWUDIKZECHJXNVAGYNIIQFZPOEDKTXYMHTEDTYRHXUTICDAGQPQBJQMKJQZRUMWZOBUBGKULYYXVTBPQRFMNFXJLTVVVXIJZMOTRLZE");
    msg.value = 172U;

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
    msg.setTimeStamp(0.9743454959024023);
    msg.setSource(2384U);
    msg.setSourceEntity(98U);
    msg.setDestination(21658U);
    msg.setDestinationEntity(194U);
    msg.name.assign("IWKKRBMQSIPXJFIDJTMTXLVWHIALFCDPKARYVSAVREQXNTEHIGGUDSYHUVYIHTHOARANYTDEAMOBMRDLMQNGVTKKJXPJFWNEOFWSUUJEFBGMPRCSLTPLZSGZZJVJBXUTYMEJFDFOPYINNKCKZLHSFUDNQSDYPOM");
    msg.value = 40U;

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
    msg.setTimeStamp(0.7716351923571928);
    msg.setSource(23279U);
    msg.setSourceEntity(251U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(179U);
    msg.name.assign("QIHQRBBJKZUNJZIQODFCULMEGWTPZXZGEJPGYWVNUKQECKSBNLIIEJVWGUEMSAPPFFDRVGHCFPBORSAFVXUAMFMTGFSAUSUQPLJOGURAMCFCTYLKSNXLLQQDKQHANDIGEOMTIWKDBYMXDTCIVRBZDORHLZKAYS");
    msg.value = 234U;

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
    msg.setTimeStamp(0.1574653254996935);
    msg.setSource(6278U);
    msg.setSourceEntity(89U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(61U);
    msg.name.assign("PGVVVIBPLIPBLUCWBIKYMZXSZJUHEETCVPNKNHFVWDMGONIJCSLNUAMHDATIQPFOKWEUJHLXPRKZOHRHHUFMBNVOAZFEFADBMMRNFGIGLJYWQTRUDLONOCCWIZMNIESFOFZRPCVBDXIWGUJYKTLHFXPLLKDNYMGPSSDJJRZTGQWNUUQDEE");

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
    msg.setTimeStamp(0.6584669771205506);
    msg.setSource(42230U);
    msg.setSourceEntity(42U);
    msg.setDestination(40014U);
    msg.setDestinationEntity(64U);
    msg.name.assign("GEJERVKHLSFFRKPRIXJKDGBLJZSGYAATDBQUTKIFWGXDCSIGNBEAZZFRCFPJJVSVVQPWQOONEOUPDYLYIAAVWGKIOUMMBTBNJDKVHSJVTXGTNAHHTTXNPRXQOURICWLFCRZIQFRAMLLMXATYZNPYDRYBYMEHYZDQBHSJXFXZBMDMGNWETCNVZEFFSIQPOOVBVEQHDSLWICHDUCATEZNJKPLNUAJWXCIOSULQSULR");

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
    msg.setTimeStamp(0.041340290249150646);
    msg.setSource(8788U);
    msg.setSourceEntity(214U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(143U);
    msg.name.assign("PSTTRFWTDUALWXUZYAWPVAEN");

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
    msg.setTimeStamp(0.6797553623410365);
    msg.setSource(34111U);
    msg.setSourceEntity(4U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(190U);
    msg.name.assign("YLLMXZDFEIJRJVVUHAAICKKANITRWEEUGRHMPVKOAUXSWRVFANZOMGIQUFIEHCUUDHAEKSZVTONSKBXUZKVYPIQGKPZUTPDISHKOQSGYOIFXRQGWRBFYDMTQOSQZCSEPRWAGFHTVGYJXSIRCQXJDCEOXLNZRPEMXLLLFBSMQLEPANAQB");
    msg.value = 34U;

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
    msg.setTimeStamp(0.6250647329765646);
    msg.setSource(61385U);
    msg.setSourceEntity(183U);
    msg.setDestination(55270U);
    msg.setDestinationEntity(144U);
    msg.name.assign("ANQBOYQNEHFEQOFRMXJRZFTVWUDZQSDPQQSDXEEASFEVIMYBBDZYJKULHUMYLAXBIYSURPOSKBEIAGJKROBTTIPYIPWLNZHGTDXGOJEXGCPUZYJMCRHGSOWTPNNFNDAWPJWKWRZTNF");
    msg.value = 210U;

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
    msg.setTimeStamp(0.6181388857811174);
    msg.setSource(20667U);
    msg.setSourceEntity(231U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(28U);
    msg.name.assign("WZSDRKPXIERQIKWFCJKQKPGIQOOTPRGPRILJSXYWNTQBQGJYRMZANMZYFAZTIZUJGMTOFCJOGBUNBDJBBDJCZZFSKYTOVODWXAADBEVQWPYYQGJOKLEXMBVIXGKFKPTUHCQGEVGVHMQWSVSUWANIXWVMODHEVXSTSVDNMUJNELBAUNRPSPWHNLFADCLTCHAOYIDEHFJOHXRZEZCLGTNHLIIFXERFHZKMPLLVMDYRHXFSAUCTL");
    msg.value = 226U;

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
    msg.setTimeStamp(0.36683565025520337);
    msg.setSource(3574U);
    msg.setSourceEntity(123U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.42116638210611934;
    msg.lon = 0.9256858124684042;
    msg.height = 0.0064166094624810155;
    msg.x = 0.935076251375755;
    msg.y = 0.7548943809396693;
    msg.z = 0.6971637794978968;
    msg.phi = 0.1402124007068003;
    msg.theta = 0.31705179149893226;
    msg.psi = 0.6627536597553536;
    msg.u = 0.7246291936305936;
    msg.v = 0.018393128378086376;
    msg.w = 0.41367981264795517;
    msg.vx = 0.9744569037772648;
    msg.vy = 0.4324475589771596;
    msg.vz = 0.0704963330784365;
    msg.p = 0.3283670505066181;
    msg.q = 0.9180908122697933;
    msg.r = 0.8916459930036208;
    msg.depth = 0.5131022834327648;
    msg.alt = 0.005475125873659503;

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
    msg.setTimeStamp(0.9575832184979517);
    msg.setSource(23564U);
    msg.setSourceEntity(66U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.7167657233003701;
    msg.lon = 0.7056038196409343;
    msg.height = 0.9541987015879142;
    msg.x = 0.7891751035357828;
    msg.y = 0.6388915875280142;
    msg.z = 0.9240878228405818;
    msg.phi = 0.32708035805924596;
    msg.theta = 0.20716742396878285;
    msg.psi = 0.4213906106562938;
    msg.u = 0.5389480529524969;
    msg.v = 0.7037341488209884;
    msg.w = 0.1234665658597649;
    msg.vx = 0.5829442868688197;
    msg.vy = 0.48186331261425597;
    msg.vz = 0.3583113032236489;
    msg.p = 0.04062350694743422;
    msg.q = 0.03035417641279614;
    msg.r = 0.7094437296024432;
    msg.depth = 0.5709140619160963;
    msg.alt = 0.7895682923238456;

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
    msg.setTimeStamp(0.8754682107798922);
    msg.setSource(42256U);
    msg.setSourceEntity(116U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.9647247830613193;
    msg.lon = 0.8792861059401694;
    msg.height = 0.2975250936772105;
    msg.x = 0.248391040266439;
    msg.y = 0.9609744298102536;
    msg.z = 0.2733668155481037;
    msg.phi = 0.9802595793131502;
    msg.theta = 0.9191440713145438;
    msg.psi = 0.2597634979503606;
    msg.u = 0.297507831303654;
    msg.v = 0.6827852787883227;
    msg.w = 0.050767075476191525;
    msg.vx = 0.5747795043261297;
    msg.vy = 0.030242086978818472;
    msg.vz = 0.06921588719963279;
    msg.p = 0.07872815941072941;
    msg.q = 0.937161569381136;
    msg.r = 0.7364804265808844;
    msg.depth = 0.1817632309442785;
    msg.alt = 0.7333560739418944;

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
    msg.setTimeStamp(0.6205816965169593);
    msg.setSource(64323U);
    msg.setSourceEntity(46U);
    msg.setDestination(61880U);
    msg.setDestinationEntity(11U);
    msg.x = 0.4631731347231689;
    msg.y = 0.9653182203943868;
    msg.z = 0.9051082295309996;

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
    msg.setTimeStamp(0.21912422408701626);
    msg.setSource(3860U);
    msg.setSourceEntity(241U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(67U);
    msg.x = 0.574954813373688;
    msg.y = 0.8235065652882146;
    msg.z = 0.6768793782386713;

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
    msg.setTimeStamp(0.06608235344768998);
    msg.setSource(15583U);
    msg.setSourceEntity(193U);
    msg.setDestination(621U);
    msg.setDestinationEntity(55U);
    msg.x = 0.14008424493002736;
    msg.y = 0.4051671609391597;
    msg.z = 0.07999970636767495;

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
    msg.setTimeStamp(0.6788247576849199);
    msg.setSource(15309U);
    msg.setSourceEntity(120U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(244U);
    msg.value = 0.21040559269505565;

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
    msg.setTimeStamp(0.3137275905926691);
    msg.setSource(54448U);
    msg.setSourceEntity(250U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9088242911486242;

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
    msg.setTimeStamp(0.1535727749480288);
    msg.setSource(29932U);
    msg.setSourceEntity(205U);
    msg.setDestination(64424U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9904374704979331;

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
    msg.setTimeStamp(0.628649761532599);
    msg.setSource(7861U);
    msg.setSourceEntity(203U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6031634321663788;

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
    msg.setTimeStamp(0.4783860683356129);
    msg.setSource(22441U);
    msg.setSourceEntity(198U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(246U);
    msg.value = 0.253303225970002;

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
    msg.setTimeStamp(0.1029557736658897);
    msg.setSource(35480U);
    msg.setSourceEntity(212U);
    msg.setDestination(13139U);
    msg.setDestinationEntity(92U);
    msg.value = 0.033014709230426376;

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
    msg.setTimeStamp(0.7036038665357994);
    msg.setSource(55959U);
    msg.setSourceEntity(217U);
    msg.setDestination(4695U);
    msg.setDestinationEntity(39U);
    msg.x = 0.9011859685120353;
    msg.y = 0.9631178175035626;
    msg.z = 0.1422900169514979;
    msg.phi = 0.82846637028677;
    msg.theta = 0.4394613587852705;
    msg.psi = 0.4237544776451737;
    msg.p = 0.9017994115357124;
    msg.q = 0.06048825109010658;
    msg.r = 0.744828084373634;
    msg.u = 0.06284979754128517;
    msg.v = 0.9791523052895461;
    msg.w = 0.40858093401685047;
    msg.bias_psi = 0.6286601487107546;
    msg.bias_r = 0.15435234377842755;

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
    msg.setTimeStamp(0.01419651326841409);
    msg.setSource(5919U);
    msg.setSourceEntity(166U);
    msg.setDestination(264U);
    msg.setDestinationEntity(131U);
    msg.x = 0.7448487139566216;
    msg.y = 0.8599600292792063;
    msg.z = 0.9197903684270773;
    msg.phi = 0.4448930649692482;
    msg.theta = 0.376829238532977;
    msg.psi = 0.6830608819789264;
    msg.p = 0.49501244601300154;
    msg.q = 0.3381681501284831;
    msg.r = 0.7475340019917497;
    msg.u = 0.2065845794034663;
    msg.v = 0.026151506012416337;
    msg.w = 0.2275915638204783;
    msg.bias_psi = 0.6010054528741818;
    msg.bias_r = 0.21200741941126178;

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
    msg.setTimeStamp(0.9193233582520464);
    msg.setSource(44948U);
    msg.setSourceEntity(152U);
    msg.setDestination(31361U);
    msg.setDestinationEntity(168U);
    msg.x = 0.9264432672794974;
    msg.y = 0.04226323264775367;
    msg.z = 0.4669869641547931;
    msg.phi = 0.7850020925546389;
    msg.theta = 0.7474893325563164;
    msg.psi = 0.8733453999077198;
    msg.p = 0.7664031980147787;
    msg.q = 0.8805102892332286;
    msg.r = 0.5045244583289561;
    msg.u = 0.9734921609250482;
    msg.v = 0.26619116710145163;
    msg.w = 0.8783743523407352;
    msg.bias_psi = 0.19300560677105794;
    msg.bias_r = 0.6840278648274482;

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
    msg.setTimeStamp(0.6023168527738937);
    msg.setSource(16082U);
    msg.setSourceEntity(105U);
    msg.setDestination(25085U);
    msg.setDestinationEntity(94U);
    msg.bias_psi = 0.3132421372463352;
    msg.bias_r = 0.7832927996537122;
    msg.cog = 0.17413933824493;
    msg.cyaw = 0.999397754503157;
    msg.lbl_rej_level = 0.7283866952091086;
    msg.gps_rej_level = 0.7517092094429403;
    msg.custom_x = 0.947697437262403;
    msg.custom_y = 0.594164062262221;
    msg.custom_z = 0.7325297192755718;

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
    msg.setTimeStamp(0.7746670369116551);
    msg.setSource(51285U);
    msg.setSourceEntity(254U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(145U);
    msg.bias_psi = 0.9363860739980745;
    msg.bias_r = 0.1287283029342936;
    msg.cog = 0.3561960699861172;
    msg.cyaw = 0.3754672143982981;
    msg.lbl_rej_level = 0.7834678910353702;
    msg.gps_rej_level = 0.9602877143970583;
    msg.custom_x = 0.15320952792802933;
    msg.custom_y = 0.45498484090828994;
    msg.custom_z = 0.6304371397122036;

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
    msg.setTimeStamp(0.2873362106583597);
    msg.setSource(12133U);
    msg.setSourceEntity(225U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.45456301148709943;
    msg.bias_r = 0.41496721744634446;
    msg.cog = 0.008927537178508249;
    msg.cyaw = 0.4653373553122986;
    msg.lbl_rej_level = 0.022388341805796852;
    msg.gps_rej_level = 0.022615856449365812;
    msg.custom_x = 0.8529296355398477;
    msg.custom_y = 0.17779506136792;
    msg.custom_z = 0.8409790373324557;

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
    msg.setTimeStamp(0.1932774661325486);
    msg.setSource(12791U);
    msg.setSourceEntity(184U);
    msg.setDestination(63017U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.46145912852550885;
    msg.reason = 65U;

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
    msg.setTimeStamp(0.47670132245589947);
    msg.setSource(28095U);
    msg.setSourceEntity(243U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.02380805911992201;
    msg.reason = 178U;

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
    msg.setTimeStamp(0.28397323222911797);
    msg.setSource(29892U);
    msg.setSourceEntity(115U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.2606168586502169;
    msg.reason = 169U;

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
    msg.setTimeStamp(0.7765996522310237);
    msg.setSource(57802U);
    msg.setSourceEntity(44U);
    msg.setDestination(46274U);
    msg.setDestinationEntity(20U);
    msg.id = 74U;
    msg.range = 0.2678304864319593;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.05354730833680399);
    msg.setSource(22880U);
    msg.setSourceEntity(205U);
    msg.setDestination(11093U);
    msg.setDestinationEntity(70U);
    msg.id = 61U;
    msg.range = 0.9183953572762305;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.05147246230990121);
    msg.setSource(14541U);
    msg.setSourceEntity(137U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(0U);
    msg.id = 187U;
    msg.range = 0.8413976954408283;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.9167294711449553);
    msg.setSource(42629U);
    msg.setSourceEntity(63U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(124U);
    msg.type = 95U;
    msg.reason = 46U;
    msg.value = 0.7808394000347951;
    msg.timestep = 0.41186677961520446;

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
    msg.setTimeStamp(0.5257473252170962);
    msg.setSource(48174U);
    msg.setSourceEntity(2U);
    msg.setDestination(14701U);
    msg.setDestinationEntity(197U);
    msg.type = 70U;
    msg.reason = 82U;
    msg.value = 0.542671655208507;
    msg.timestep = 0.29670217887274086;

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
    msg.setTimeStamp(0.547727121894152);
    msg.setSource(16559U);
    msg.setSourceEntity(251U);
    msg.setDestination(21223U);
    msg.setDestinationEntity(20U);
    msg.type = 0U;
    msg.reason = 156U;
    msg.value = 0.6542353475822215;
    msg.timestep = 0.985732910107547;

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
    msg.setTimeStamp(0.23333700674834223);
    msg.setSource(54011U);
    msg.setSourceEntity(90U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.6049920788596559);
    msg.setSource(57382U);
    msg.setSourceEntity(220U);
    msg.setDestination(51859U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.08154885718201366);
    msg.setSource(18566U);
    msg.setSourceEntity(1U);
    msg.setDestination(50098U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.006688595908321715);
    msg.setSource(51915U);
    msg.setSourceEntity(56U);
    msg.setDestination(47648U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("RCJSYKIPAFIUIBLERHVGSYJLKPHTYBOCOCHRLEWZBWWYTVNVZTCERPULAWUMZQBGALHIDFXZZSSFTJGQEYBKO");
    msg.x = 0.5464468961816381;
    msg.y = 0.9185462908040541;
    msg.depth = 0.14202962216360282;
    msg.var_x = 0.44205207090513554;
    msg.var_y = 0.13055293361684606;

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
    msg.setTimeStamp(0.25122588136924306);
    msg.setSource(27141U);
    msg.setSourceEntity(23U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("IUWYMTJBVGDJAYOLMXTULEEKNMTYTEPZMUPCLKKCUGFPTZDNWJOMJHOWYVKDRTFILQRHZSTBEKAFHDSAHOJJQUNKKBRPEPNQIXCGXJNASZFIRPZIWCCRVFXBCVRWVTMDPGDGHCBOHLYLXPKSZGUYQQBSVVJXSFEXWXLALQAQZNLWIIPAHNJUNDEVTYMEQMOBMUMFAROABGFUFWWVNQYFIK");
    msg.x = 0.6280323055064053;
    msg.y = 0.9121016331136395;
    msg.depth = 0.9408755727392322;
    msg.var_x = 0.3610313666765401;
    msg.var_y = 0.7029438499223778;

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
    msg.setTimeStamp(0.6031608362638455);
    msg.setSource(55058U);
    msg.setSourceEntity(52U);
    msg.setDestination(23225U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("DZWUDMVOAIOQKSFQYFZXHCWDEXEZGDHVIGPUYKNLNEUGAFCGWXR");
    msg.x = 0.3423573040364971;
    msg.y = 0.6413292930698956;
    msg.depth = 0.3363851885002054;
    msg.var_x = 0.3575847842299328;
    msg.var_y = 0.2233830638515879;

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
    msg.setTimeStamp(0.51870859733225);
    msg.setSource(41633U);
    msg.setSourceEntity(241U);
    msg.setDestination(5738U);
    msg.setDestinationEntity(166U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.1760753489289173);
    msg.setSource(22388U);
    msg.setSourceEntity(185U);
    msg.setDestination(10678U);
    msg.setDestinationEntity(101U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.6698856126414946);
    msg.setSource(38656U);
    msg.setSourceEntity(147U);
    msg.setDestination(51674U);
    msg.setDestinationEntity(232U);
    msg.state = 252U;

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
    msg.setTimeStamp(0.12363385593804188);
    msg.setSource(49434U);
    msg.setSourceEntity(127U);
    msg.setDestination(6559U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8010367383201868;

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
    msg.setTimeStamp(0.4189369432772697);
    msg.setSource(30849U);
    msg.setSourceEntity(169U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(133U);
    msg.value = 0.5923447238575311;

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
    msg.setTimeStamp(0.5050899874500214);
    msg.setSource(41906U);
    msg.setSourceEntity(242U);
    msg.setDestination(12031U);
    msg.setDestinationEntity(105U);
    msg.value = 0.42536136999911045;

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
    msg.setTimeStamp(0.6157890154045907);
    msg.setSource(31336U);
    msg.setSourceEntity(241U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(108U);
    msg.value = 0.3502540224742452;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.25034030784099937);
    msg.setSource(17010U);
    msg.setSourceEntity(249U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0436044480020944;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.5183164621415465);
    msg.setSource(3341U);
    msg.setSourceEntity(32U);
    msg.setDestination(64419U);
    msg.setDestinationEntity(185U);
    msg.value = 0.18032668077195846;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.7466560350517725);
    msg.setSource(10440U);
    msg.setSourceEntity(154U);
    msg.setDestination(27527U);
    msg.setDestinationEntity(50U);
    msg.value = 0.9416149926488832;
    msg.speed_units = 193U;

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
    msg.setTimeStamp(0.6705167142080107);
    msg.setSource(52954U);
    msg.setSourceEntity(251U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(115U);
    msg.value = 0.7783935496317645;
    msg.speed_units = 184U;

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
    msg.setTimeStamp(0.9157510788458348);
    msg.setSource(21254U);
    msg.setSourceEntity(6U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6478256285166966;
    msg.speed_units = 151U;

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
    msg.setTimeStamp(0.5521211156381703);
    msg.setSource(23437U);
    msg.setSourceEntity(69U);
    msg.setDestination(2904U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9786680052650393;

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
    msg.setTimeStamp(0.37393636592225477);
    msg.setSource(37850U);
    msg.setSourceEntity(8U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(56U);
    msg.value = 0.27537171466948107;

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
    msg.setTimeStamp(0.12000254746211869);
    msg.setSource(7934U);
    msg.setSourceEntity(141U);
    msg.setDestination(46065U);
    msg.setDestinationEntity(8U);
    msg.value = 0.4793673575823024;

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
    msg.setTimeStamp(0.02367389229911432);
    msg.setSource(7698U);
    msg.setSourceEntity(38U);
    msg.setDestination(44649U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7321364476981883;

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
    msg.setTimeStamp(0.5299798825239613);
    msg.setSource(64485U);
    msg.setSourceEntity(18U);
    msg.setDestination(7576U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8040016646309774;

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
    msg.setTimeStamp(0.12030241404485109);
    msg.setSource(189U);
    msg.setSourceEntity(187U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9226775075159553;

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
    msg.setTimeStamp(0.39792870830510774);
    msg.setSource(28905U);
    msg.setSourceEntity(248U);
    msg.setDestination(24634U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6280485259317646;

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
    msg.setTimeStamp(0.9934359211773655);
    msg.setSource(44098U);
    msg.setSourceEntity(86U);
    msg.setDestination(46093U);
    msg.setDestinationEntity(106U);
    msg.value = 0.09337981217390368;

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
    msg.setTimeStamp(0.46336124400236756);
    msg.setSource(1291U);
    msg.setSourceEntity(86U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8159842619286677;

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
    msg.setTimeStamp(0.7878287522604709);
    msg.setSource(53225U);
    msg.setSourceEntity(195U);
    msg.setDestination(61408U);
    msg.setDestinationEntity(242U);
    msg.start_lat = 0.6797958149219094;
    msg.start_lon = 0.07566144589354173;
    msg.start_z = 0.2032741258632057;
    msg.start_z_units = 8U;
    msg.end_lat = 0.4641210042208763;
    msg.end_lon = 0.966644073943439;
    msg.end_z = 0.6166206848544222;
    msg.end_z_units = 18U;
    msg.speed = 0.5375275853179533;
    msg.speed_units = 217U;
    msg.lradius = 0.2769531797830018;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.15718151835390148);
    msg.setSource(44770U);
    msg.setSourceEntity(16U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(141U);
    msg.start_lat = 0.0015901106655410446;
    msg.start_lon = 0.04024058894994964;
    msg.start_z = 0.10412975556073023;
    msg.start_z_units = 250U;
    msg.end_lat = 0.2445520566431838;
    msg.end_lon = 0.6433278970112678;
    msg.end_z = 0.07536264592403175;
    msg.end_z_units = 62U;
    msg.speed = 0.9118683125038357;
    msg.speed_units = 40U;
    msg.lradius = 0.17560721441472182;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.27484106322819113);
    msg.setSource(35826U);
    msg.setSourceEntity(113U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(84U);
    msg.start_lat = 0.7700516388686084;
    msg.start_lon = 0.2789743900827002;
    msg.start_z = 0.1613925785892184;
    msg.start_z_units = 151U;
    msg.end_lat = 0.20575821102418423;
    msg.end_lon = 0.05535311158533229;
    msg.end_z = 0.3707848994465518;
    msg.end_z_units = 176U;
    msg.speed = 0.8968956022335064;
    msg.speed_units = 131U;
    msg.lradius = 0.08001313141694455;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.7188164211012678);
    msg.setSource(39134U);
    msg.setSourceEntity(171U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(175U);
    msg.x = 0.673191231234724;
    msg.y = 0.5951671520064159;
    msg.z = 0.16440155305244153;
    msg.k = 0.0914641966042502;
    msg.m = 0.7744381211393071;
    msg.n = 0.03699339871105656;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.11226931326519418);
    msg.setSource(22299U);
    msg.setSourceEntity(159U);
    msg.setDestination(17470U);
    msg.setDestinationEntity(98U);
    msg.x = 0.20491749139865123;
    msg.y = 0.5549307004966468;
    msg.z = 0.5470214376248715;
    msg.k = 0.68467705374572;
    msg.m = 0.5532226571692026;
    msg.n = 0.5815039909547386;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.5543121996048747);
    msg.setSource(53475U);
    msg.setSourceEntity(51U);
    msg.setDestination(27761U);
    msg.setDestinationEntity(76U);
    msg.x = 0.3599113688439751;
    msg.y = 0.5865227106314266;
    msg.z = 0.9317060366887447;
    msg.k = 0.14154283262262923;
    msg.m = 0.4914285942913381;
    msg.n = 0.4989788443069122;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.698206740667466);
    msg.setSource(63639U);
    msg.setSourceEntity(80U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(37U);
    msg.value = 0.3259606161696291;

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
    msg.setTimeStamp(0.7456902371359355);
    msg.setSource(26593U);
    msg.setSourceEntity(205U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3547389858902775;

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
    msg.setTimeStamp(0.6630865175382762);
    msg.setSource(29433U);
    msg.setSourceEntity(219U);
    msg.setDestination(20357U);
    msg.setDestinationEntity(89U);
    msg.value = 0.3748134934090186;

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
    msg.setTimeStamp(0.34507274212438865);
    msg.setSource(32091U);
    msg.setSourceEntity(105U);
    msg.setDestination(64282U);
    msg.setDestinationEntity(47U);
    msg.u = 0.8935462914050956;
    msg.v = 0.9646220329909376;
    msg.w = 0.657154120739618;
    msg.p = 0.33762176752161854;
    msg.q = 0.1435421289254898;
    msg.r = 0.7975689858256111;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.736687816081295);
    msg.setSource(46804U);
    msg.setSourceEntity(173U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(170U);
    msg.u = 0.6112196873390272;
    msg.v = 0.14986821224000557;
    msg.w = 0.8305464700246278;
    msg.p = 0.7924942667763876;
    msg.q = 0.8060880551500893;
    msg.r = 0.5042687995988051;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.23801969882373886);
    msg.setSource(64764U);
    msg.setSourceEntity(200U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(108U);
    msg.u = 0.693086140208152;
    msg.v = 0.3065173490513451;
    msg.w = 0.8718461546289534;
    msg.p = 0.3496214431652436;
    msg.q = 0.3252939967416748;
    msg.r = 0.26216629235121214;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.4252002810835429);
    msg.setSource(31651U);
    msg.setSourceEntity(254U);
    msg.setDestination(64886U);
    msg.setDestinationEntity(66U);
    msg.start_lat = 0.13468178246535356;
    msg.start_lon = 0.33296294697935247;
    msg.start_z = 0.37326934994380623;
    msg.start_z_units = 247U;
    msg.end_lat = 0.3254479591643732;
    msg.end_lon = 0.7885782710060472;
    msg.end_z = 0.3924763539417686;
    msg.end_z_units = 71U;
    msg.lradius = 0.7795217794767815;
    msg.flags = 132U;
    msg.x = 0.05910739759660122;
    msg.y = 0.2664002643844655;
    msg.z = 0.8089199303539707;
    msg.vx = 0.21401162824076136;
    msg.vy = 0.6868529487562637;
    msg.vz = 0.6234609027682679;
    msg.course_error = 0.47431258889024763;
    msg.eta = 51320U;

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
    msg.setTimeStamp(0.754495789766201);
    msg.setSource(15575U);
    msg.setSourceEntity(108U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(228U);
    msg.start_lat = 0.009225851929003492;
    msg.start_lon = 0.5852048975713705;
    msg.start_z = 0.8994281292218833;
    msg.start_z_units = 52U;
    msg.end_lat = 0.42326972813633557;
    msg.end_lon = 0.22296122763224202;
    msg.end_z = 0.0357067713781235;
    msg.end_z_units = 103U;
    msg.lradius = 0.43942866886845056;
    msg.flags = 76U;
    msg.x = 0.4399556886462528;
    msg.y = 0.27210097579965675;
    msg.z = 0.8751845654707232;
    msg.vx = 0.8049737137217218;
    msg.vy = 0.8513160122571313;
    msg.vz = 0.5927936395733326;
    msg.course_error = 0.6642042559862212;
    msg.eta = 7898U;

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
    msg.setTimeStamp(0.28885091812505836);
    msg.setSource(5286U);
    msg.setSourceEntity(99U);
    msg.setDestination(19697U);
    msg.setDestinationEntity(238U);
    msg.start_lat = 0.908425812608715;
    msg.start_lon = 0.8001950632025268;
    msg.start_z = 0.8688486983982734;
    msg.start_z_units = 100U;
    msg.end_lat = 0.21788902405328814;
    msg.end_lon = 0.9971596204595143;
    msg.end_z = 0.15700888957627457;
    msg.end_z_units = 17U;
    msg.lradius = 0.06442264939852504;
    msg.flags = 192U;
    msg.x = 0.5415237940767078;
    msg.y = 0.2452224567344905;
    msg.z = 0.681172144053105;
    msg.vx = 0.8462087422039707;
    msg.vy = 0.6337693256378046;
    msg.vz = 0.5688244902722145;
    msg.course_error = 0.30488940462590053;
    msg.eta = 13707U;

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
    msg.setTimeStamp(0.47644370183349705);
    msg.setSource(20334U);
    msg.setSourceEntity(243U);
    msg.setDestination(3398U);
    msg.setDestinationEntity(118U);
    msg.k = 0.6144692628563503;
    msg.m = 0.47353173363449863;
    msg.n = 0.008508110758850496;

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
    msg.setTimeStamp(0.6793860386426217);
    msg.setSource(16704U);
    msg.setSourceEntity(188U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(198U);
    msg.k = 0.4631598914408893;
    msg.m = 0.27215288585357256;
    msg.n = 0.051786234956426425;

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
    msg.setTimeStamp(0.5357216378768433);
    msg.setSource(16004U);
    msg.setSourceEntity(69U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(183U);
    msg.k = 0.20867858706289122;
    msg.m = 0.9445182393955429;
    msg.n = 0.1271496479738512;

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
    msg.setTimeStamp(0.12711669608223208);
    msg.setSource(60559U);
    msg.setSourceEntity(47U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(45U);
    msg.p = 0.10988225996659695;
    msg.i = 0.4944601314679463;
    msg.d = 0.6898367466697592;
    msg.a = 0.8590129188923158;

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
    msg.setTimeStamp(0.6216324684482537);
    msg.setSource(3565U);
    msg.setSourceEntity(77U);
    msg.setDestination(13072U);
    msg.setDestinationEntity(51U);
    msg.p = 0.09541079154439414;
    msg.i = 0.22468172336271985;
    msg.d = 0.15605711442439651;
    msg.a = 0.7754407858187151;

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
    msg.setTimeStamp(0.9918578067957133);
    msg.setSource(9796U);
    msg.setSourceEntity(69U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(87U);
    msg.p = 0.7409300996635111;
    msg.i = 0.035131402993230365;
    msg.d = 0.7541448309233627;
    msg.a = 0.44532636938065384;

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
    msg.setTimeStamp(0.5562326572031749);
    msg.setSource(22691U);
    msg.setSourceEntity(232U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(146U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.7420550518750034);
    msg.setSource(47979U);
    msg.setSourceEntity(174U);
    msg.setDestination(19842U);
    msg.setDestinationEntity(180U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.5383063293514015);
    msg.setSource(35842U);
    msg.setSourceEntity(14U);
    msg.setDestination(63621U);
    msg.setDestinationEntity(148U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.12230214636844772);
    msg.setSource(53300U);
    msg.setSourceEntity(132U);
    msg.setDestination(63789U);
    msg.setDestinationEntity(124U);
    msg.timeout = 15463U;
    msg.lat = 0.670014940744331;
    msg.lon = 0.3501133558826749;
    msg.z = 0.11016563686631065;
    msg.z_units = 141U;
    msg.speed = 0.6452237507280131;
    msg.speed_units = 188U;
    msg.roll = 0.6845159275912668;
    msg.pitch = 0.5943754375307874;
    msg.yaw = 0.5301716876050476;
    msg.custom.assign("STKNBUKPAPOQJGUEC");

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
    msg.setTimeStamp(0.7713529860318014);
    msg.setSource(9171U);
    msg.setSourceEntity(190U);
    msg.setDestination(45925U);
    msg.setDestinationEntity(81U);
    msg.timeout = 62686U;
    msg.lat = 0.38670937180705955;
    msg.lon = 0.11732280089448832;
    msg.z = 0.7787033434500471;
    msg.z_units = 67U;
    msg.speed = 0.09286405673343612;
    msg.speed_units = 182U;
    msg.roll = 0.09515264170237114;
    msg.pitch = 0.5077236293771372;
    msg.yaw = 0.8318012464704415;
    msg.custom.assign("GLVPCCANFTJFRSGOAPVFCZZBHRPKVIDJULIKPSGNXZLWPSMKDNAEYIJUWNEZFODPIJLQBHXKYSDOXMXISYLDGTCUEEVLSMDAUZPHMFUEDACAGSXFYMTTIYBECEXHKXEFTSIWOCORFKALOJGUQPMMBNHSQRRTBZB");

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
    msg.setTimeStamp(0.8697464761768698);
    msg.setSource(22769U);
    msg.setSourceEntity(134U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(185U);
    msg.timeout = 33929U;
    msg.lat = 0.1881796078071687;
    msg.lon = 0.5337351397340007;
    msg.z = 0.8061317843219206;
    msg.z_units = 217U;
    msg.speed = 0.0958460642782406;
    msg.speed_units = 96U;
    msg.roll = 0.3674433411150131;
    msg.pitch = 0.6256595222693285;
    msg.yaw = 0.9500141242295957;
    msg.custom.assign("HABVQVMIFVQIPHLGTHEOFCZQUPUISLNAHARSDXYWFHBKJCQONMDRHYSIQYHNNEPFGRBOZQJWTKMJZPEWRKBDYQOGFZGE");

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
    msg.setTimeStamp(0.8980193002435748);
    msg.setSource(286U);
    msg.setSourceEntity(168U);
    msg.setDestination(55154U);
    msg.setDestinationEntity(197U);
    msg.timeout = 42246U;
    msg.lat = 0.41782150690394104;
    msg.lon = 0.04546296075021228;
    msg.z = 0.6795919910606365;
    msg.z_units = 120U;
    msg.speed = 0.1299950220747942;
    msg.speed_units = 53U;
    msg.duration = 42733U;
    msg.radius = 0.24192566086866174;
    msg.flags = 120U;
    msg.custom.assign("TWMPEKIQOHDYUPSXUWEPOXTRDLKIGFLMYJLMXPANHTSCIBVGQFTKPKUBRGSZTNAIYPHOVVDUGUCGXLWHHJUOWOFXY");

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
    msg.setTimeStamp(0.1377309350456254);
    msg.setSource(41780U);
    msg.setSourceEntity(64U);
    msg.setDestination(21658U);
    msg.setDestinationEntity(186U);
    msg.timeout = 27399U;
    msg.lat = 0.6351801960199169;
    msg.lon = 0.9820988288358391;
    msg.z = 0.4895944457388963;
    msg.z_units = 188U;
    msg.speed = 0.7681956196425078;
    msg.speed_units = 115U;
    msg.duration = 4568U;
    msg.radius = 0.7888225322204349;
    msg.flags = 133U;
    msg.custom.assign("NKUYFZJOLMUISMHVAOXZXEANREHVBRPSEQWGFYTFKMNQFGWFUCZOLCMDBAHQKFVPODVALPWUYPRZELWCBBTNSNFDVFAXUAWMGYORSBAYLBMLSGGZZUHIJDHCIKUKLRPNLKGETQJCLIVSEGKKVQNTYKBXWWVPBJRMRDEZJCOXNOTGAXPXHZYELRQM");

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
    msg.setTimeStamp(0.35058234876049454);
    msg.setSource(49955U);
    msg.setSourceEntity(11U);
    msg.setDestination(25512U);
    msg.setDestinationEntity(77U);
    msg.timeout = 19587U;
    msg.lat = 0.09244047873380379;
    msg.lon = 0.7720747890696369;
    msg.z = 0.2818555893158883;
    msg.z_units = 48U;
    msg.speed = 0.43240989412435593;
    msg.speed_units = 13U;
    msg.duration = 43672U;
    msg.radius = 0.5125316704297503;
    msg.flags = 79U;
    msg.custom.assign("ILYJGPDJUIUHIZVOVNGMBLKGISRDYBEHRFKZTEWB");

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
    msg.setTimeStamp(0.022355198590053638);
    msg.setSource(55603U);
    msg.setSourceEntity(223U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(165U);
    msg.custom.assign("CXRFKSUHUXDJVQNSSFRKWSAGCRUVIMIJFNIPSZWPZZXYABDPTFHJCNKUYFKVKMETMORRCUWAZEOZBLULOMFBAJRPSVDRISIXHPGNSYXTOTKHCDBPDBUZBNOKLEJTPAWCYLTPJQLBDRDZYOMGFGUEONVYHWQZVCWYIQWLJQSYKKDYGPXBXDUAOVMMEAAINELHVTSETJEG");

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
    msg.setTimeStamp(0.9914320929722833);
    msg.setSource(4839U);
    msg.setSourceEntity(168U);
    msg.setDestination(37530U);
    msg.setDestinationEntity(74U);
    msg.custom.assign("TAVQIOZQRFTWDHNTTVJDPDQLYYJFPPQTXGBZFQUGGGMTKYKDMUVOBXJUJLOUDFDWJZCHSRFJWRIYSQHVMAVHLSRUUGWLEBXRCQZWBPKPHXOOGNICBFFKGLRYIBXCTKWENSIBASIGSNVXQGCLEMWZNNKPMAIWUWYAQXTMUCVTN");

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
    msg.setTimeStamp(0.9857388468035064);
    msg.setSource(5317U);
    msg.setSourceEntity(206U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("ITLOPLPUVXXQKJDKMAECJBJOZPRDFVNOFOLQYWPZOEQIRAPCSYGBLBGTUFHNSFNAMJWNFNXAGCYDBDKUWFOUWXTEDGSZHZILCRYZLCUWG");

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
    msg.setTimeStamp(0.2133511099437445);
    msg.setSource(26311U);
    msg.setSourceEntity(194U);
    msg.setDestination(3651U);
    msg.setDestinationEntity(164U);
    msg.timeout = 6992U;
    msg.lat = 0.03746581158180751;
    msg.lon = 0.49427723735214946;
    msg.z = 0.5898271067802222;
    msg.z_units = 10U;
    msg.duration = 38780U;
    msg.speed = 0.08657883824959589;
    msg.speed_units = 169U;
    msg.type = 162U;
    msg.radius = 0.1316701197248028;
    msg.length = 0.09849038154550238;
    msg.bearing = 0.7197679985565667;
    msg.direction = 254U;
    msg.custom.assign("QTXZSKNKDKVKITRBWEPTRSFHTRUOIVVYCMCMKVTREWSDGPIFSGNCKULGEFGFSCPXX");

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
    msg.setTimeStamp(0.5231158461582847);
    msg.setSource(14205U);
    msg.setSourceEntity(2U);
    msg.setDestination(49484U);
    msg.setDestinationEntity(179U);
    msg.timeout = 34133U;
    msg.lat = 0.3599557359351706;
    msg.lon = 0.5705278541185734;
    msg.z = 0.8631147932349784;
    msg.z_units = 218U;
    msg.duration = 34303U;
    msg.speed = 0.7953846921572584;
    msg.speed_units = 79U;
    msg.type = 83U;
    msg.radius = 0.5987557625197951;
    msg.length = 0.6565482100729235;
    msg.bearing = 0.22018330974276246;
    msg.direction = 140U;
    msg.custom.assign("CXTHCZGJMVNJCVUPVDXIDJAXRJFVCDXTIXNZUFSIETCSYLYPYRQKTKJUEFHBPXLRFSHGVOWSZAAWTUJCNVYDXZBDWZQLGQHEVRTSYBQEHLOWEARKPO");

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
    msg.setTimeStamp(0.7627453728993635);
    msg.setSource(1683U);
    msg.setSourceEntity(82U);
    msg.setDestination(41158U);
    msg.setDestinationEntity(38U);
    msg.timeout = 9620U;
    msg.lat = 0.974523753201576;
    msg.lon = 0.5196851199911758;
    msg.z = 0.7438164606038447;
    msg.z_units = 100U;
    msg.duration = 6170U;
    msg.speed = 0.7454788652717032;
    msg.speed_units = 16U;
    msg.type = 239U;
    msg.radius = 0.2206847988832502;
    msg.length = 0.13125537741272342;
    msg.bearing = 0.08340615540461505;
    msg.direction = 208U;
    msg.custom.assign("IJKWMUCBCVROIOTKJALBEPCMPBOBGVQYSFQMLWQRDIOHUVQYUKUSJXNTLHJHATFYADIBIRFCFJPWJSNLUFEVWZDHNOYYYFIGBDEGCXSXCEWANITYGMGJLQJSOLKOKNQHMZHPAZMJNMXYEORUXFHVYKEARSVLGQDXGLGRMRHDACPAURQVQYRVHWSDNWGIEEXX");

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
    msg.setTimeStamp(0.4955128303167565);
    msg.setSource(43078U);
    msg.setSourceEntity(57U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(32U);
    msg.duration = 22722U;
    msg.custom.assign("VCHILNRTDJXHLRGNOMAECKUFBXQIZXOWNEIYZNEXCFPMUJEOBALSJBJOLLEQUVDBDCTWGYZQKLKFOSGWAGLKLXCUEPPMKHBTYPVZVYHMVRNDWNTAMCKHYRVRUHHZEXZPYEHBYPSCFYZVOOQNIGSQTCUFJSFDKVEOWAQSXVWTQWXTGUSDGOAJRDISTABGGAIIUIDDURTBUBWNPOXFJRXNCFCQAPSVKJRFPFPQWTLIYMMJKHLI");

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
    msg.setTimeStamp(0.03975809905832961);
    msg.setSource(13879U);
    msg.setSourceEntity(164U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(9U);
    msg.duration = 24863U;
    msg.custom.assign("BRHUQNXHWYZNTVKDYOKWEMYBFTUKOUPHAFHEIOZAXWMZIAXJENRPUPCNVSINLQCQGBGCSDSVJRVKZBFHIZTVV");

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
    msg.setTimeStamp(0.36257773980429897);
    msg.setSource(36468U);
    msg.setSourceEntity(77U);
    msg.setDestination(34542U);
    msg.setDestinationEntity(171U);
    msg.duration = 15273U;
    msg.custom.assign("RNOVIXIUTOFXCZRTMIHDUNCWAMSCYJCIKPXLBIIQLUBPXJUCVXXEWIGQTMFRVKSZEESVEXLDQOXLYR");

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
    msg.setTimeStamp(0.6282381697009247);
    msg.setSource(48194U);
    msg.setSourceEntity(157U);
    msg.setDestination(48836U);
    msg.setDestinationEntity(108U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2279810871613719;
    tmp_msg_0.speed_units = 218U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10884U;
    msg.custom.assign("PTGZBUVWVRXPOPFQANUMAKQVVCMYNLSLFJWWQKFOULFAECNCHYUYIQUIIHWDMYZHDTJTXQIRORGSCXBTHAJTFNHQRPDZDARTEPKNYYXBLSEDXKVUSDAFWAZZLXOJVEPRGNIKFJZTDURQHXHNGFOGZIYGMSBTWOHJCECDUTAKSLVGPQCVEIFELVHYLMDZXUGQOZT");

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
    msg.setTimeStamp(0.6212091261628985);
    msg.setSource(8822U);
    msg.setSourceEntity(105U);
    msg.setDestination(27573U);
    msg.setDestinationEntity(48U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3997058114943468;
    tmp_msg_0.z_units = 3U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52228U;
    msg.custom.assign("VAKGMTVHBINRQTX");

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
    msg.setTimeStamp(0.9246543482601692);
    msg.setSource(633U);
    msg.setSourceEntity(190U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(73U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.8937154817393365;
    tmp_msg_0.start_lon = 0.7893386710668525;
    tmp_msg_0.start_z = 0.43661356017136344;
    tmp_msg_0.start_z_units = 28U;
    tmp_msg_0.end_lat = 0.08323962625630188;
    tmp_msg_0.end_lon = 0.32741400882238214;
    tmp_msg_0.end_z = 0.21318758543117045;
    tmp_msg_0.end_z_units = 205U;
    tmp_msg_0.speed = 0.6886686236185638;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.lradius = 0.9422215740035061;
    tmp_msg_0.flags = 109U;
    msg.control.set(tmp_msg_0);
    msg.duration = 4237U;
    msg.custom.assign("WEXWVLJAEHKHNTX");

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
    msg.setTimeStamp(0.36053691717468084);
    msg.setSource(63226U);
    msg.setSourceEntity(87U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(159U);
    msg.timeout = 30634U;
    msg.lat = 0.8887677364821241;
    msg.lon = 0.43509180218280574;
    msg.z = 0.7168248866960136;
    msg.z_units = 150U;
    msg.speed = 0.8162844767764853;
    msg.speed_units = 51U;
    msg.bearing = 0.8826258636646789;
    msg.cross_angle = 0.4932720678629541;
    msg.width = 0.694058692892405;
    msg.length = 0.23497857174864212;
    msg.hstep = 0.22770782998239103;
    msg.coff = 184U;
    msg.alternation = 148U;
    msg.flags = 114U;
    msg.custom.assign("NVKGEXYPZHGJUTPRPBVCTRVLYXESDDFIFWXSRTYFQBCZAIGUOTYIWFDMKGYRQXVWBZZGJVPNPCZGXYASJINAJZWNZFBDHCPACOKZRMWJUTLHCTFQDVBIPXYRHWKTO");

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
    msg.setTimeStamp(0.08527248226788475);
    msg.setSource(20084U);
    msg.setSourceEntity(110U);
    msg.setDestination(39927U);
    msg.setDestinationEntity(102U);
    msg.timeout = 55830U;
    msg.lat = 0.9542115324453871;
    msg.lon = 0.6963055309448994;
    msg.z = 0.2523710724702204;
    msg.z_units = 2U;
    msg.speed = 0.7977481781516219;
    msg.speed_units = 42U;
    msg.bearing = 0.2514054807688789;
    msg.cross_angle = 0.6339946178620779;
    msg.width = 0.5848675049632003;
    msg.length = 0.47202279348656406;
    msg.hstep = 0.6708414525032045;
    msg.coff = 34U;
    msg.alternation = 205U;
    msg.flags = 203U;
    msg.custom.assign("QYKTMMJQKFNMZAYLDDXMJNWAKORJKAIQOFUPFROJYQCBAWEDDOHHHUSHWWEXGCVKQBSRSPCLGXHSLHBJRLBWJCNDRVMXIHJIGLFZSXNIQOPRGOLRQXVTMAYVITDWBAMZBJONRIG");

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
    msg.setTimeStamp(0.08636991269346783);
    msg.setSource(38893U);
    msg.setSourceEntity(10U);
    msg.setDestination(42611U);
    msg.setDestinationEntity(47U);
    msg.timeout = 9521U;
    msg.lat = 0.11056719064189147;
    msg.lon = 0.8173622674888517;
    msg.z = 0.22515365917763874;
    msg.z_units = 148U;
    msg.speed = 0.6177032609139097;
    msg.speed_units = 163U;
    msg.bearing = 0.2943334735461084;
    msg.cross_angle = 0.4342071393927509;
    msg.width = 0.4959425059920557;
    msg.length = 0.4872221519020673;
    msg.hstep = 0.1578059679816255;
    msg.coff = 93U;
    msg.alternation = 113U;
    msg.flags = 148U;
    msg.custom.assign("PGBQIHUTBLNCQZYVITBYITBRNJHAVKVDQWQLPYEJZGDUYSCHITWWNMBAURTODJMVRTBDLFVUTPLLPTMJW");

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
    msg.setTimeStamp(0.5886273319864254);
    msg.setSource(47388U);
    msg.setSourceEntity(35U);
    msg.setDestination(35561U);
    msg.setDestinationEntity(2U);
    msg.timeout = 27750U;
    msg.lat = 0.6783291455410465;
    msg.lon = 0.006344928526352045;
    msg.z = 0.3423153710572001;
    msg.z_units = 155U;
    msg.speed = 0.47348423546613805;
    msg.speed_units = 247U;
    msg.custom.assign("ORZDPMEPMDPQTKQXKDHYINKUOOADXNZGNBRVEZVWWPTFHTUWBRCNGVXUQFSJGKVAGBXSRXAMSBEJPYXDYJQYSAFULIKLNOMJHABWQMZKVFTRWYTTCPKQEUHMLWOFKYHDNMSCGRLASIDGUGQFLIMOAERBIBESMOHWEWLHZZNHLI");

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
    msg.setTimeStamp(0.8711623170108186);
    msg.setSource(33151U);
    msg.setSourceEntity(189U);
    msg.setDestination(10719U);
    msg.setDestinationEntity(140U);
    msg.timeout = 26418U;
    msg.lat = 0.13299646821394395;
    msg.lon = 0.20646409819933076;
    msg.z = 0.8124867341844736;
    msg.z_units = 60U;
    msg.speed = 0.8262071545166578;
    msg.speed_units = 216U;
    msg.custom.assign("TBFMXXTGLLDBZQZLWPXBDSJONCFUAVRALHPXGDGOGSUCDOPFHHKAQCYTJIFLNJJLABSRRORKAEIQSAYIXEGWMSKZCNSZHYJEOUDWYICSNRSCQNPAKTVHNEKOBAMIEHVQWMCRWBXTMFJWDIWHTMVLQSQXPPNWQDZYUVJEGERIMVJFDQPWYFKUUBJMYAFGOFFIQRGJCZKCOTVCUEPLZMYEVUESUVITWUYZMOKNTXDZBALVX");

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
    msg.setTimeStamp(0.3536093462760129);
    msg.setSource(52869U);
    msg.setSourceEntity(98U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(78U);
    msg.timeout = 13580U;
    msg.lat = 0.3980485252013307;
    msg.lon = 0.3601572287618253;
    msg.z = 0.0591895412408564;
    msg.z_units = 97U;
    msg.speed = 0.7521947729910773;
    msg.speed_units = 182U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9477034632587785;
    tmp_msg_0.y = 0.3822055978137878;
    tmp_msg_0.z = 0.37432251092488944;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NXYFRXZSTQWTUFDWLEJXGECVIRRTMNOFNIUHFAXJIWNPARDFYMYHMQKOIWTMBBTZLLTEIWZWGBQXZBWBGTCGSKCCQNSSTYXDFXVAHHLCBRHDZOENHYSYLUAGELVLHSJKDNUDSCSTGCLJPPFFEMVFFZZIWPJYOSYRBPVJKOPJQMIIZQPQVYGRUKCMWAVXIVKUQPINEOEQDNUDGRUAH");

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
    msg.setTimeStamp(0.2514218130783883);
    msg.setSource(64485U);
    msg.setSourceEntity(61U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(130U);
    msg.x = 0.18636521252294824;
    msg.y = 0.5022958915485307;
    msg.z = 0.6685971593593119;

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
    msg.setTimeStamp(0.9693462508949853);
    msg.setSource(39670U);
    msg.setSourceEntity(139U);
    msg.setDestination(24534U);
    msg.setDestinationEntity(164U);
    msg.x = 0.041579680918654716;
    msg.y = 0.2160930379780044;
    msg.z = 0.280871223639232;

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
    msg.setTimeStamp(0.5141405134689987);
    msg.setSource(35608U);
    msg.setSourceEntity(250U);
    msg.setDestination(30450U);
    msg.setDestinationEntity(37U);
    msg.x = 0.7691236386859038;
    msg.y = 0.4922210799878429;
    msg.z = 0.734508383727904;

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
    msg.setTimeStamp(0.37425210673750264);
    msg.setSource(29851U);
    msg.setSourceEntity(138U);
    msg.setDestination(55900U);
    msg.setDestinationEntity(227U);
    msg.timeout = 48785U;
    msg.lat = 0.7897453682269662;
    msg.lon = 0.6408434406552914;
    msg.z = 0.9004767935658787;
    msg.z_units = 105U;
    msg.amplitude = 0.9782663211012054;
    msg.pitch = 0.8107197393641941;
    msg.speed = 0.4185358834501449;
    msg.speed_units = 192U;
    msg.custom.assign("ZMKWDPCIXBZSKTLRBAIYLQZOFWKBVANZVGBGEXAUADUFUHTVYQVJEIHGZJHOCHBQYNKEPQFWYPQIRLLCZSNXCSYJUEWFJDOQPKAADIJFHTELQZJXLDDICONRYLMZCUYWEADJOOKTZPPUMVPVCLKNIFFBRYCEORTUBWRSXQMQTPMVXAXNNXQVHGKKGVORTNSJKZVWAJEEMUTDFPEBAOSWXTRGCGPSGBHBIHMUOSDXMJMNYLR");

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
    msg.setTimeStamp(0.006609961306809131);
    msg.setSource(33284U);
    msg.setSourceEntity(110U);
    msg.setDestination(57314U);
    msg.setDestinationEntity(8U);
    msg.timeout = 52498U;
    msg.lat = 0.7876583571535201;
    msg.lon = 0.18013468007975497;
    msg.z = 0.8722528750291167;
    msg.z_units = 127U;
    msg.amplitude = 0.7084198733642652;
    msg.pitch = 0.024954762642514505;
    msg.speed = 0.92899349441332;
    msg.speed_units = 44U;
    msg.custom.assign("EHMYCZGXLGXGQOZUBMAAYVSWMACOWPLVVDIBHURJKVWPTGCPFJZRXAJLBUSCPEGDSOBESMGIBZJWDJTVOPMQVHQBILOIFVREXKIVNQEYAGADPUZSLASHAJCNVTBUXLYMECMXPXOEHKZIOBHCQMAKUSTTQRRDYDORKZYBSRXZNYJWNEKQPQGWXGIYWULRTNZIKUFXMEDTVNEFQDDHRCTNTLFNU");

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
    msg.setTimeStamp(0.15753470572447326);
    msg.setSource(18344U);
    msg.setSourceEntity(212U);
    msg.setDestination(58257U);
    msg.setDestinationEntity(228U);
    msg.timeout = 18923U;
    msg.lat = 0.5667712365943863;
    msg.lon = 0.4093811968462202;
    msg.z = 0.08776736337691504;
    msg.z_units = 97U;
    msg.amplitude = 0.12728206979153744;
    msg.pitch = 0.26919070897532626;
    msg.speed = 0.28013109244159295;
    msg.speed_units = 217U;
    msg.custom.assign("BFAJIETYXELMXLQRUUISNLZNDKZVYCLZKAJUMKBIGRBOTWQFMBIBWGCRFVPNUBUHOYGTHLYPPFFRASNGQOPCWITJALSWIFMXQMULAEBDCFVEHWHUCDNRXPPEKYJZMURMNUCCDSWTOVKAWGNHWCPZJJHVYLGFWQQZPTQYZRMRTTBVGAZIHCEEPDXEIMVKYOVZGHLJKSEUVFSQORHGKJLXTOADABB");

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
    msg.setTimeStamp(0.09699741324402678);
    msg.setSource(38798U);
    msg.setSourceEntity(197U);
    msg.setDestination(35277U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.9468955780627031);
    msg.setSource(54629U);
    msg.setSourceEntity(83U);
    msg.setDestination(43512U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.03458944031562117);
    msg.setSource(19368U);
    msg.setSourceEntity(98U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.8297562984403848);
    msg.setSource(30378U);
    msg.setSourceEntity(140U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.6152918397715432;
    msg.lon = 0.29897118223314;
    msg.z = 0.7514697037138244;
    msg.z_units = 36U;
    msg.radius = 0.7913226733810099;
    msg.duration = 65028U;
    msg.speed = 0.6329778267689009;
    msg.speed_units = 139U;
    msg.custom.assign("JVDIQPOQCAIYGBNAGBLLIVXDDNGEOZJWJRYXMPONUOQUQNPJOIGBUZWHLTHTTIMMBWISFPGLFNLZUMIPEFPCKZQESYMSHJPCKNNQ");

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
    msg.setTimeStamp(0.01841701570631049);
    msg.setSource(50746U);
    msg.setSourceEntity(3U);
    msg.setDestination(52265U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.7423459893932294;
    msg.lon = 0.6687165607984042;
    msg.z = 0.3639913435522657;
    msg.z_units = 199U;
    msg.radius = 0.9977868991856221;
    msg.duration = 8697U;
    msg.speed = 0.7562602048286752;
    msg.speed_units = 131U;
    msg.custom.assign("JKWSZPHTOMBRXKENHTTFLPOEJUZMBMCHRINCVIPVYDEUBDCHMRIQRICLCKGKXTNQIUGPOJOGBGIYSEEMFKFSMSPFFDOVATMGLSROGPUKABHASNJQWDIUVKBYWDOHAAEBMBSFNQVQUWMZQJWUBCKLHLNYRGNLSHDYC");

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
    msg.setTimeStamp(0.34702599654677735);
    msg.setSource(22297U);
    msg.setSourceEntity(172U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.015432043161790476;
    msg.lon = 0.35309356139479287;
    msg.z = 0.3065496683111757;
    msg.z_units = 131U;
    msg.radius = 0.7978038315041206;
    msg.duration = 30419U;
    msg.speed = 0.032078867651085474;
    msg.speed_units = 183U;
    msg.custom.assign("YDCNDNNXMKVQNFQNNCVKPGPWXTTRYIQECCODIZZSATATFAENHQLDMACUHEUHLPJSZMMFOWRPWXEFLCZOOLVPYWEMJFBPOCAUOGA");

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
    msg.setTimeStamp(0.19177307433792878);
    msg.setSource(1546U);
    msg.setSourceEntity(89U);
    msg.setDestination(46659U);
    msg.setDestinationEntity(48U);
    msg.timeout = 63548U;
    msg.flags = 199U;
    msg.lat = 0.17932240549631584;
    msg.lon = 0.037905557304817816;
    msg.start_z = 0.8510363051730911;
    msg.start_z_units = 38U;
    msg.end_z = 0.8689229620907769;
    msg.end_z_units = 63U;
    msg.radius = 0.4569558010939353;
    msg.speed = 0.7018001864695103;
    msg.speed_units = 233U;
    msg.custom.assign("FXALUDONJDVECOYVSEORKXNFUPWWFYCLSQUQQCBWROZZLWGKUGHOMSMDQPWKASIXYFUPKBPIDVSVBIJNEGJCEKHATKZSCMJUALZVWJLRF");

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
    msg.setTimeStamp(0.2443660811540299);
    msg.setSource(7900U);
    msg.setSourceEntity(156U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(49U);
    msg.timeout = 44712U;
    msg.flags = 254U;
    msg.lat = 0.3822854726775463;
    msg.lon = 0.24381304321614738;
    msg.start_z = 0.44500264649073873;
    msg.start_z_units = 185U;
    msg.end_z = 0.07910196981012396;
    msg.end_z_units = 112U;
    msg.radius = 0.7366873818605193;
    msg.speed = 0.17711560590262077;
    msg.speed_units = 116U;
    msg.custom.assign("FVTUGQVUNDTZCTWOGOHYFRBMLKDPRHCDRAUEMPKJANZNAKGWRMBXGCEZDTXAEWBFAUIAICEUPKJYYFOVMGXDZGQBYBVQWPPXJOEGWCPSFQSRLXFSMEXCSRSIJTHELVOIOTLAYLKXYBGJQKLIPKSVBWYZUIMVMO");

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
    msg.setTimeStamp(0.5852344611371911);
    msg.setSource(51488U);
    msg.setSourceEntity(8U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(159U);
    msg.timeout = 13502U;
    msg.flags = 73U;
    msg.lat = 0.9524038742643336;
    msg.lon = 0.46035427458372924;
    msg.start_z = 0.04427269449712934;
    msg.start_z_units = 160U;
    msg.end_z = 0.7466865974932547;
    msg.end_z_units = 212U;
    msg.radius = 0.6761973222986226;
    msg.speed = 0.6171138997973532;
    msg.speed_units = 19U;
    msg.custom.assign("YPNZGAEHJUXODUQNRZAKWTCRSWEMLTGADXZSMVXQVPBCWQVJZDXLWUN");

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
    msg.setTimeStamp(0.47991242652273935);
    msg.setSource(20015U);
    msg.setSourceEntity(164U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(138U);
    msg.timeout = 62499U;
    msg.lat = 0.4700294927244395;
    msg.lon = 0.5140481905215443;
    msg.z = 0.9415521394812123;
    msg.z_units = 219U;
    msg.speed = 0.461048240306022;
    msg.speed_units = 73U;
    msg.custom.assign("HMWCLYVETCIQDKXGCZWLCTDTKOMQIYYIPAKTGIEPENMHQGTPZRTIHWLUBDCSEPMYOKTXMGEMZRYKFQDRGRFFHBNYZOJALULTHRAAOJZIKPEAJFGGJRFJUZQKOUNAOOFVEXBJBHZCXYDTISWOCPGIZHUKYNLUSRKNIFIXEDNKYASNFBNDCESXJAJLYMWJQMLVZLNPBTVXGMUMWW");

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
    msg.setTimeStamp(0.27636003556922994);
    msg.setSource(1403U);
    msg.setSourceEntity(163U);
    msg.setDestination(7339U);
    msg.setDestinationEntity(240U);
    msg.timeout = 64988U;
    msg.lat = 0.04471165149424894;
    msg.lon = 0.6311967142110927;
    msg.z = 0.8015043007423172;
    msg.z_units = 122U;
    msg.speed = 0.16778628667185336;
    msg.speed_units = 190U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6638291383482137;
    tmp_msg_0.y = 0.7199997513536007;
    tmp_msg_0.z = 0.9156967782147689;
    tmp_msg_0.t = 0.1507788700851186;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EATZJTXTERAUZEFWPGHHNTBJDWVFKIYUTPXBPTMDBDUQNSOPDXKVXPSYLBCQIFIKMKYZLMGEBMJO");

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
    msg.setTimeStamp(0.5293781043501266);
    msg.setSource(15378U);
    msg.setSourceEntity(175U);
    msg.setDestination(2813U);
    msg.setDestinationEntity(51U);
    msg.timeout = 3459U;
    msg.lat = 0.8447205937434683;
    msg.lon = 0.20368174515739335;
    msg.z = 0.2770267567387681;
    msg.z_units = 193U;
    msg.speed = 0.4472194539087343;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4404870126946031;
    tmp_msg_0.y = 0.4832643470901411;
    tmp_msg_0.z = 0.6493362434058588;
    tmp_msg_0.t = 0.8179568922321906;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NWDYVLCNNGTUZPEHALMNLMJPDWYLLEICBWBYFOMCKARTXFJCXRWEGXVXWKIVYORUFUNQJFZGAUOANPXDYHRPVJMTCHSCHZBGGGUIZWGBRQITHOBJTDKQEEFOSOXHJJKAIR");

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
    msg.setTimeStamp(0.7746118102225);
    msg.setSource(53254U);
    msg.setSourceEntity(41U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(67U);
    msg.x = 0.17910165993612115;
    msg.y = 0.9034016763285724;
    msg.z = 0.11673494083988811;
    msg.t = 0.6975806565902819;

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
    msg.setTimeStamp(0.5601769284522355);
    msg.setSource(21907U);
    msg.setSourceEntity(241U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(197U);
    msg.x = 0.5638625224608973;
    msg.y = 0.679718273868857;
    msg.z = 0.6027042332726709;
    msg.t = 0.5569777380925547;

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
    msg.setTimeStamp(0.7656921058970849);
    msg.setSource(55753U);
    msg.setSourceEntity(179U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(154U);
    msg.x = 0.625952299384011;
    msg.y = 0.4471413994236534;
    msg.z = 0.5209853507765358;
    msg.t = 0.5873778748995024;

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
    msg.setTimeStamp(0.9061793472845325);
    msg.setSource(18217U);
    msg.setSourceEntity(61U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(172U);
    msg.timeout = 19885U;
    msg.name.assign("BPURNWOVFGJHOHTUVRKEWYZOFGNNAPFBUONZTEEMQLZJEJVNHLTKLHHPCSOYWHXRKYHCGVTYQSIPIKVVAZCMRBPALFH");
    msg.custom.assign("ISKZNTIPAYOGLVTPAKLMAONLKOTKRYCNFDHHZDOYNZFTXHIUZHHPMBTYEEAZFWQDGMRFXSAXTRCVDNYJKFABNBURSYMRYSIBFGVCXOGGYEBVDJEZMCJVJFBHQIVDUPMBQJQQAGIEZHFDRBQ");

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
    msg.setTimeStamp(0.6255736042626764);
    msg.setSource(29764U);
    msg.setSourceEntity(121U);
    msg.setDestination(63104U);
    msg.setDestinationEntity(236U);
    msg.timeout = 5447U;
    msg.name.assign("PBWRLMXNYXCILUDATXUHESAJRGQFDUAFHPIYNBATKQKODNECSPBYPZYFWVDKLTSGZFURZNJTRQFPXCFNJKQMNQKCWCZGPBGFSJGPQPBOHFAYGONJZIZLNAVTUAOXVYEIZEIPQTIDXWUYIBWKMCQWYHSMEIVSTEHHZMQZEJVFLV");
    msg.custom.assign("IIOLGWAFMLRUWHSUTCXILSKOOUJKKAXWWMXREPZBXQQFSAMVXBDWLETYXKSGMZRJJUDXPLKVHRDHPFBOTEBBQAJZOFDNDJLCOPMOSNGQICRIJNWXHDYDJRAZBWYCXUKPYAQWPHQUIQHYWKRMTEGTVNLPBLIHMVJSSYSDMFBLGKJXWAYFVUNQQCGRYENNRVKAQOTO");

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
    msg.setTimeStamp(0.5784496546750255);
    msg.setSource(64708U);
    msg.setSourceEntity(140U);
    msg.setDestination(28161U);
    msg.setDestinationEntity(249U);
    msg.timeout = 38697U;
    msg.name.assign("UTSSSLUVVSGPIOAWPJJABPNKDMQFQEHTCFPWYAYDHSLYCTOYYZBWTAVOMVJJHSVNOREHWREYGTXHIYPXKMDQRLQQRUWXGHBGFZJIXAKECMNZJUNABMFYELIDDJEOQXZKZUNVIDIZODEXJVFPFAOHDHGLQLKCPJTNWBORXOLKLXAKWZBSUKORCMIRPCETFWCWNBLPVXFRAUTQEFGUZIUBFHMUEQKXG");
    msg.custom.assign("IUMEPTNENBEQGUBQMVKCOURPRKTBWRGJITHWKZVQHWFTABDORWFTUATGKCICVYLSDMCJYMHFAYPPCMSEWKZVRXTZEDMPIHAAGOSFWAESNLLKBJZDYMBDOMDVLICNYTYQKLWCRRAGHNJBQYIJBEIBPVXPF");

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
    msg.setTimeStamp(0.5855956403039613);
    msg.setSource(29194U);
    msg.setSourceEntity(90U);
    msg.setDestination(6130U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.3973139048386042;
    msg.lon = 0.35269777264168556;
    msg.z = 0.3206724313304129;
    msg.z_units = 117U;
    msg.speed = 0.23179675094692342;
    msg.speed_units = 179U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8714283650034529;
    tmp_msg_0.y = 0.9562070761688514;
    tmp_msg_0.z = 0.1632997883755729;
    tmp_msg_0.t = 0.1298141831154186;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13399U;
    tmp_msg_1.off_x = 0.1610917390728993;
    tmp_msg_1.off_y = 0.3927333500511717;
    tmp_msg_1.off_z = 0.6333351954861631;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9112385841169002;
    msg.custom.assign("LOVGNSIOVROEGQYMJPIJIUTTJKBMVNAGHXADFZRQFJZCMEJXZACIJMMYMNZYTNQERXGLCNERSZSMVTKZPFAAPXJTHRIAQSLWSTAOQMKWVSBDKOWGRCWHUTJMZQDOWNDXLXYVGCYWQOJUUZGXHDKYHFEBEFHBLXEPFSQXCVPIAYNBKHOBKHLLWPDEWHIFBPVNDUUPRLKORLXLACTYCDURFQTWGCQUIEBPKYVSSENRHIZFUOUDA");

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
    msg.setTimeStamp(0.2868620671884814);
    msg.setSource(16502U);
    msg.setSourceEntity(128U);
    msg.setDestination(48202U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.6526502041800889;
    msg.lon = 0.5542581230783173;
    msg.z = 0.5094026876409644;
    msg.z_units = 38U;
    msg.speed = 0.9722200264301897;
    msg.speed_units = 174U;
    msg.start_time = 0.4341373025948084;
    msg.custom.assign("OGSHKKOKELJHMOVSUYKDVWGPAXQIRXASZWZAQOZDPTYHOZDJUTOBCGQPGVHTGNKHIHFDINFLFRRBUZEQOPGQPFWXMPJYJTGPACSCLUJYIENORSGDQXBMWTXURJBCYURCYBEVYLVBSSEXLQAITLPMZYGDNNSBNDXMTPLZNFWXVTJOCIBMAZCHXJZSEWFVMECQZFICAVYWDTEUWATFJVQMHQKNKVLUENGSAMJKRCIYRAFHUOLHKPRLI");

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
    msg.setTimeStamp(0.5242188693702259);
    msg.setSource(61933U);
    msg.setSourceEntity(230U);
    msg.setDestination(39379U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.26359445316640506;
    msg.lon = 0.738674924284081;
    msg.z = 0.8701653365082938;
    msg.z_units = 104U;
    msg.speed = 0.9726072246195403;
    msg.speed_units = 183U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48183U;
    tmp_msg_0.off_x = 0.442374038312522;
    tmp_msg_0.off_y = 0.5792358162696715;
    tmp_msg_0.off_z = 0.988790404842216;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.24041546279326653;
    msg.custom.assign("KOPYCLVJWCRVFAQMYAGQSATZXNYWZYNDNGPDMUCLBANQBYPSASBEHVWKDOKELCKQXWFVRSEFSHQRPKLAPMSDXSTXRHLTZKMGAEEMWMGUUJTVGBGLIGNYCUCIMQXKDEKJNOBOQIRFQWRZFWLBVGHPXONYYSAXOZHJDOZEITTIEQURUBEZJQDVVAKCJHZYIPXDNBPLFIIPPUWCBTOAJMCRVLUGGZOHWFWJTHNSNEJFZTMYDRTVRXFHJMUKSHDLU");

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
    msg.setTimeStamp(0.11809319998791945);
    msg.setSource(64360U);
    msg.setSourceEntity(228U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(204U);
    msg.vid = 20995U;
    msg.off_x = 0.4459804668333287;
    msg.off_y = 0.1683381335856492;
    msg.off_z = 0.91002828064074;

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
    msg.setTimeStamp(0.9354101800495169);
    msg.setSource(64073U);
    msg.setSourceEntity(199U);
    msg.setDestination(27346U);
    msg.setDestinationEntity(209U);
    msg.vid = 53340U;
    msg.off_x = 0.0017885800488808279;
    msg.off_y = 0.4516561192974513;
    msg.off_z = 0.37636105692268074;

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
    msg.setTimeStamp(0.3193879119613997);
    msg.setSource(47342U);
    msg.setSourceEntity(234U);
    msg.setDestination(7560U);
    msg.setDestinationEntity(76U);
    msg.vid = 64865U;
    msg.off_x = 0.27477910724399335;
    msg.off_y = 0.8938861261851808;
    msg.off_z = 0.12891727595806612;

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
    msg.setTimeStamp(0.10960411219171629);
    msg.setSource(17992U);
    msg.setSourceEntity(110U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.6918781044924717);
    msg.setSource(11207U);
    msg.setSourceEntity(165U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.1880362831450515);
    msg.setSource(5965U);
    msg.setSourceEntity(192U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.9722041979418765);
    msg.setSource(65278U);
    msg.setSourceEntity(48U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(170U);
    msg.mid = 15233U;

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
    msg.setTimeStamp(0.42571670076951995);
    msg.setSource(26104U);
    msg.setSourceEntity(246U);
    msg.setDestination(58070U);
    msg.setDestinationEntity(68U);
    msg.mid = 64990U;

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
    msg.setTimeStamp(0.8209924307517438);
    msg.setSource(27944U);
    msg.setSourceEntity(82U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(54U);
    msg.mid = 15170U;

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
    msg.setTimeStamp(0.42602590336954105);
    msg.setSource(11803U);
    msg.setSourceEntity(195U);
    msg.setDestination(59927U);
    msg.setDestinationEntity(215U);
    msg.state = 57U;
    msg.eta = 19543U;
    msg.info.assign("DKBHPQPXMQZZAXZQBMPCCQBNSZLUYRDXOVDSNIWJOSKPFHGTICBWWYSRTJWLVAPETGCJFLATWQKECTQOYBRRXASHKLNMMNDVYCVKMNWJRWOLFEXIBBOOTIFTMPGIFSEYULGLKSULMKFQYCYJJGELIOXDGWEBCFMVUENQZHRUUEBHTBYHZM");

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
    msg.setTimeStamp(0.4407924319755153);
    msg.setSource(38006U);
    msg.setSourceEntity(192U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(54U);
    msg.state = 218U;
    msg.eta = 42350U;
    msg.info.assign("YZISWBWXMMNJRYPCTALTBORGQYJBVOHRBMHCIULOXHXFA");

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
    msg.setTimeStamp(0.9914074411500688);
    msg.setSource(64705U);
    msg.setSourceEntity(83U);
    msg.setDestination(42299U);
    msg.setDestinationEntity(95U);
    msg.state = 173U;
    msg.eta = 37981U;
    msg.info.assign("YMGBMZDLGYJQVVUYMGBUNFOPTBVYCFBLCGRFKZIGGOCYEJCN");

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
    msg.setTimeStamp(0.8440536750392736);
    msg.setSource(36114U);
    msg.setSourceEntity(150U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(240U);
    msg.system = 57783U;
    msg.duration = 31939U;
    msg.speed = 0.6851760263606389;
    msg.speed_units = 39U;
    msg.x = 0.632986751369928;
    msg.y = 0.5632701618742972;
    msg.z = 0.37223565898524114;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.43435752193347654);
    msg.setSource(5847U);
    msg.setSourceEntity(85U);
    msg.setDestination(49897U);
    msg.setDestinationEntity(54U);
    msg.system = 51931U;
    msg.duration = 17356U;
    msg.speed = 0.4050663209469577;
    msg.speed_units = 222U;
    msg.x = 0.7499970783788066;
    msg.y = 0.522055250135187;
    msg.z = 0.9913676490922764;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.42639570566166807);
    msg.setSource(15551U);
    msg.setSourceEntity(59U);
    msg.setDestination(9447U);
    msg.setDestinationEntity(51U);
    msg.system = 4297U;
    msg.duration = 28299U;
    msg.speed = 0.35614588431522576;
    msg.speed_units = 155U;
    msg.x = 0.8826087656999666;
    msg.y = 0.22801462490529223;
    msg.z = 0.5382352375810125;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.6900302859525554);
    msg.setSource(1917U);
    msg.setSourceEntity(64U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.3741970676224976;
    msg.lon = 0.8791289331552317;
    msg.speed = 0.6630464488591182;
    msg.speed_units = 27U;
    msg.duration = 16508U;
    msg.sys_a = 47903U;
    msg.sys_b = 2299U;
    msg.move_threshold = 0.4980435274850885;

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
    msg.setTimeStamp(0.7069738531224075);
    msg.setSource(57892U);
    msg.setSourceEntity(5U);
    msg.setDestination(40479U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.19758067840925442;
    msg.lon = 0.20053437149496023;
    msg.speed = 0.39715916428101206;
    msg.speed_units = 96U;
    msg.duration = 32697U;
    msg.sys_a = 14204U;
    msg.sys_b = 33953U;
    msg.move_threshold = 0.35185761599617016;

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
    msg.setTimeStamp(0.49502122232096524);
    msg.setSource(7628U);
    msg.setSourceEntity(18U);
    msg.setDestination(14159U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.6181693012948254;
    msg.lon = 0.4765521294211995;
    msg.speed = 0.427503998327296;
    msg.speed_units = 163U;
    msg.duration = 53388U;
    msg.sys_a = 1432U;
    msg.sys_b = 2905U;
    msg.move_threshold = 0.23124749418009738;

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
    msg.setTimeStamp(0.8080767823435111);
    msg.setSource(52602U);
    msg.setSourceEntity(178U);
    msg.setDestination(62757U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.007352611261861042;
    msg.lon = 0.9006277228076756;
    msg.z = 0.5675104564242606;
    msg.z_units = 7U;
    msg.speed = 0.18317705672360096;
    msg.speed_units = 136U;
    msg.custom.assign("WAQWHYPGCCLGXINJRKORAJWDSGCMX");

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
    msg.setTimeStamp(0.625194187941984);
    msg.setSource(45898U);
    msg.setSourceEntity(54U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.9151024262529528;
    msg.lon = 0.2642449330465064;
    msg.z = 0.2433658495711487;
    msg.z_units = 175U;
    msg.speed = 0.8798389346678875;
    msg.speed_units = 224U;
    msg.custom.assign("IPNWFPOCUDKYDZZPTXJTJLI");

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
    msg.setTimeStamp(0.6671870476838759);
    msg.setSource(50980U);
    msg.setSourceEntity(251U);
    msg.setDestination(55214U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.6524358889798852;
    msg.lon = 0.18820538618788307;
    msg.z = 0.9972063791102264;
    msg.z_units = 108U;
    msg.speed = 0.8922906640052543;
    msg.speed_units = 170U;
    msg.custom.assign("ZBEIKDMCXMCTSPNEPDTWSJNXXESQUMVFLSXJGXUBBMWUYCIRDKSNKLVFJGDYYSPRVZYCMKOLVMZXZUGTCTBHPC");

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
    msg.setTimeStamp(0.22394695103141793);
    msg.setSource(48983U);
    msg.setSourceEntity(23U);
    msg.setDestination(18832U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.5135263238511784;
    msg.lon = 0.8348441647723153;

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
    msg.setTimeStamp(0.6468958170402741);
    msg.setSource(27031U);
    msg.setSourceEntity(73U);
    msg.setDestination(51357U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.49013942373947805;
    msg.lon = 0.36885809015688387;

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
    msg.setTimeStamp(0.2996114279794324);
    msg.setSource(15518U);
    msg.setSourceEntity(15U);
    msg.setDestination(408U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.27814724005620206;
    msg.lon = 0.5068026506831378;

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
    msg.setTimeStamp(0.1511484424904358);
    msg.setSource(22042U);
    msg.setSourceEntity(144U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(65U);
    msg.timeout = 32330U;
    msg.lat = 0.5631242310558199;
    msg.lon = 0.9385282684163911;
    msg.z = 0.8487541090119602;
    msg.z_units = 52U;
    msg.pitch = 0.4223511326099536;
    msg.amplitude = 0.5356840338892125;
    msg.duration = 9055U;
    msg.speed = 0.050099114693250124;
    msg.speed_units = 144U;
    msg.radius = 0.241144081798781;
    msg.direction = 229U;
    msg.custom.assign("FYLBWJODUNKBTXPDAHGRXZHXWWMTRJQTVPVXCRBBWDXVUQQNHCAGYTABXUOKSRECOCGIVLIZEQUMCQ");

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
    msg.setTimeStamp(0.32044738230318315);
    msg.setSource(20627U);
    msg.setSourceEntity(8U);
    msg.setDestination(39166U);
    msg.setDestinationEntity(134U);
    msg.timeout = 47950U;
    msg.lat = 0.8480053169950788;
    msg.lon = 0.6579467840475327;
    msg.z = 0.42278531735195524;
    msg.z_units = 143U;
    msg.pitch = 0.5266274395783755;
    msg.amplitude = 0.38501055182231425;
    msg.duration = 28727U;
    msg.speed = 0.43655049651441524;
    msg.speed_units = 222U;
    msg.radius = 0.6930523422727191;
    msg.direction = 126U;
    msg.custom.assign("CCEAZYBUCMQUMFHVTNWWFOKPAILNJNWJZKSYFDJOZDHDOQYEYVTVXSXFDBNPJUFCKDKBWTXOTITHZAYZGBRJJQZUKCTXCSGORJSOBEXMGRCPLHTLRLSLLISPLHZIJNIUQKAMIQPMNEDNLEWBOEXYGHGIUXWDZHIEEPFKJVRPAGDOVDTUBHEQMGFNAKPVVBMKERAXFJQVDCAUSLWIPGZGOFGMBTWXRHUCKIYRWZ");

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
    msg.setTimeStamp(0.672410592409208);
    msg.setSource(56296U);
    msg.setSourceEntity(187U);
    msg.setDestination(57340U);
    msg.setDestinationEntity(95U);
    msg.timeout = 351U;
    msg.lat = 0.24281321781051357;
    msg.lon = 0.05900361361701334;
    msg.z = 0.7948721205405865;
    msg.z_units = 144U;
    msg.pitch = 0.2360066177027178;
    msg.amplitude = 0.5613581101703656;
    msg.duration = 47064U;
    msg.speed = 0.006020437749143959;
    msg.speed_units = 63U;
    msg.radius = 0.32849920824905643;
    msg.direction = 88U;
    msg.custom.assign("QEZNILMPZNUFJYLOPQCWPLSSKTQQAPXAXEXGCIBKKNYNDHUABCSCGXGUSBBWORQGIZMHKBJDTEIQKKHPYZQVWRJXTFEVHZXWAIPFATOMQKOYFMTFZGUVTDHNK");

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
    msg.setTimeStamp(0.48889233280667865);
    msg.setSource(6599U);
    msg.setSourceEntity(136U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(146U);
    msg.control_src = 36968U;
    msg.control_ent = 231U;
    msg.timeout = 0.2339601216095245;
    msg.loiter_radius = 0.7903846841360046;
    msg.altitude_interval = 0.48020578564725536;

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
    msg.setTimeStamp(0.33197513629220365);
    msg.setSource(59881U);
    msg.setSourceEntity(20U);
    msg.setDestination(5905U);
    msg.setDestinationEntity(144U);
    msg.control_src = 31684U;
    msg.control_ent = 179U;
    msg.timeout = 0.8053272233892493;
    msg.loiter_radius = 0.4724831823435147;
    msg.altitude_interval = 0.12731163682336533;

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
    msg.setTimeStamp(0.7766774179570691);
    msg.setSource(44514U);
    msg.setSourceEntity(41U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(142U);
    msg.control_src = 51285U;
    msg.control_ent = 235U;
    msg.timeout = 0.2662355321551716;
    msg.loiter_radius = 0.9036190043545412;
    msg.altitude_interval = 0.2903467367012502;

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
    msg.setTimeStamp(0.4872429399785483);
    msg.setSource(14964U);
    msg.setSourceEntity(182U);
    msg.setDestination(16670U);
    msg.setDestinationEntity(117U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.32312323769133366;
    tmp_msg_0.speed_units = 49U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5877834807768971;
    tmp_msg_1.z_units = 71U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3434114669740437;
    msg.lon = 0.503121082763611;
    msg.radius = 0.6701877395503038;

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
    msg.setTimeStamp(0.9719935805012772);
    msg.setSource(39368U);
    msg.setSourceEntity(50U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(208U);
    msg.flags = 213U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.42278879521565305;
    tmp_msg_0.speed_units = 49U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4090299732210496;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.29584796843050265;
    msg.lon = 0.8923537328653118;
    msg.radius = 0.3472287341328366;

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
    msg.setTimeStamp(0.20664636220727473);
    msg.setSource(61633U);
    msg.setSourceEntity(253U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(53U);
    msg.flags = 31U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6179919560530852;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.840663971450498;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4627008761953002;
    msg.lon = 0.6403072761220271;
    msg.radius = 0.377408012228004;

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
    msg.setTimeStamp(0.9112239969125672);
    msg.setSource(17375U);
    msg.setSourceEntity(38U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(204U);
    msg.control_src = 33650U;
    msg.control_ent = 156U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 165U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6368710981694542;
    tmp_tmp_msg_0_0.speed_units = 158U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.23037842851762913;
    tmp_tmp_msg_0_1.z_units = 235U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.37510138486890643;
    tmp_msg_0.lon = 0.2891237135991428;
    tmp_msg_0.radius = 0.9927474761081908;
    msg.reference.set(tmp_msg_0);
    msg.state = 13U;
    msg.proximity = 133U;

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
    msg.setTimeStamp(0.2810595273877192);
    msg.setSource(49901U);
    msg.setSourceEntity(250U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(39U);
    msg.control_src = 23200U;
    msg.control_ent = 249U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.992658748981581;
    tmp_tmp_msg_0_0.speed_units = 246U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5263842104487622;
    tmp_tmp_msg_0_1.z_units = 13U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7071324662875801;
    tmp_msg_0.lon = 0.7582999561466899;
    tmp_msg_0.radius = 0.8690739021486079;
    msg.reference.set(tmp_msg_0);
    msg.state = 17U;
    msg.proximity = 117U;

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
    msg.setTimeStamp(0.6702648876519767);
    msg.setSource(28174U);
    msg.setSourceEntity(130U);
    msg.setDestination(50836U);
    msg.setDestinationEntity(80U);
    msg.control_src = 32744U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.628682426123167;
    tmp_tmp_msg_0_0.speed_units = 82U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6681550113730155;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6766459920986723;
    tmp_msg_0.lon = 0.7964735577145136;
    tmp_msg_0.radius = 0.14458508792331204;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 22U;

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
    msg.setTimeStamp(0.003892016388917119);
    msg.setSource(2832U);
    msg.setSourceEntity(213U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(44U);
    msg.op_mode = 96U;
    msg.error_count = 239U;
    msg.error_ents.assign("QLTUSQZBDBBRLKHCG");
    msg.maneuver_type = 30984U;
    msg.maneuver_stime = 0.30626899477662906;
    msg.maneuver_eta = 9534U;
    msg.control_loops = 1962942000U;
    msg.flags = 133U;
    msg.last_error.assign("DFZXIAEICRBPG");
    msg.last_error_time = 0.9593459038552367;

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
    msg.setTimeStamp(0.563693230923573);
    msg.setSource(44609U);
    msg.setSourceEntity(250U);
    msg.setDestination(14824U);
    msg.setDestinationEntity(131U);
    msg.op_mode = 46U;
    msg.error_count = 30U;
    msg.error_ents.assign("TFYHDJHPRKOXPBDONPZARNVNYKJZNNDHKLIWTCAHEGJPUARJSFFGZGMWCAFYUQNHWPWWUAQQKIPHJRPCVXVOSVNKZYLSBPFTVAKOIJEEVHQTZRBIJJMXRMMQMSUDUDGZCTNXRLOMBJSWCZCVFTNHZSGPWYBBMLXGEEXITQXEUTYPBFKLRWCSEOIVGBRNDZUSASGQFBFOYWQHQJTODILEEQHLDKEUATXIDVOLBMYUSYUFCDZL");
    msg.maneuver_type = 7890U;
    msg.maneuver_stime = 0.5514339947371248;
    msg.maneuver_eta = 59867U;
    msg.control_loops = 1601275346U;
    msg.flags = 82U;
    msg.last_error.assign("KGLHQMJKAEZNFTDPCIPGPGVXYHCERSYPDSMMQDAGXJOXMHOXGWTLLVECAMCAU");
    msg.last_error_time = 0.07012093582254153;

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
    msg.setTimeStamp(0.4112058373232539);
    msg.setSource(65261U);
    msg.setSourceEntity(225U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(125U);
    msg.op_mode = 37U;
    msg.error_count = 209U;
    msg.error_ents.assign("QPSJNKALAVSBBGHZNBEHUGACXLFWGZPNMGHQYSRSCILXPRKDHTCZVESGDHXZNTXASNPQMIGOYNYLJTAEGKAVQSBQGCEUYDJIORVRFUFBIMOWJZTSGYZOUHTIRTVCUROEZQFRKBPLFLPXDYQWCENEYXHBCWG");
    msg.maneuver_type = 42497U;
    msg.maneuver_stime = 0.5611882383997352;
    msg.maneuver_eta = 51267U;
    msg.control_loops = 638022704U;
    msg.flags = 23U;
    msg.last_error.assign("EHFBOUKJILZLLUIPAQBQTXFVLJOGDYMQXHJRZAODWTFLROWBKZIQVGEYTBSYRTIFSWNFWWZMSOQEVVSKHJYEHXZEBKMKPJGVMLXZIPJBMAITQVXDKADZNJHPNHTBEWCNOFLYWDRXRXAPTRUCQODUNNQLMICCZCBOXTZPKYPFCAKETHPKEHYSKYMRWBGUTFRVUSEZGURG");
    msg.last_error_time = 0.4318409247524446;

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
    msg.setTimeStamp(0.04909525834413231);
    msg.setSource(25061U);
    msg.setSourceEntity(182U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(149U);
    msg.type = 52U;
    msg.request_id = 37597U;
    msg.command = 41U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 41583U;
    tmp_msg_0.lat = 0.9858048805231101;
    tmp_msg_0.lon = 0.10284156834429892;
    tmp_msg_0.z = 0.8702803873901193;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.speed = 0.3169658784795285;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.roll = 0.8688139103357375;
    tmp_msg_0.pitch = 0.08238712605770804;
    tmp_msg_0.yaw = 0.29114256474355993;
    tmp_msg_0.custom.assign("NHUEGFZCMOTVCWQIIUVSSUGCMRRNKJLCPMMSUUQBERLMLJYCJXTTKFANGEYQXHFDMPCKXZXZWEJVYZPLILHWCJEZYGSTDSTQODTPFJVNRILZKIEGSBHFBSANVCBRAOPYJFOUURXLNAYVQWERWGEYZUABDJPHBUEDPHTFNQJYIOLVAGUCDANRWYZIM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15937U;
    msg.info.assign("ITPELEYWHSZG");

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
    msg.setTimeStamp(0.414082388621969);
    msg.setSource(29249U);
    msg.setSourceEntity(46U);
    msg.setDestination(57426U);
    msg.setDestinationEntity(172U);
    msg.type = 4U;
    msg.request_id = 65023U;
    msg.command = 229U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 56050U;
    tmp_msg_0.lat = 0.5526978872951825;
    tmp_msg_0.lon = 0.7560663966860444;
    tmp_msg_0.z = 0.3133884210283735;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.speed = 0.8463174627946269;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.custom.assign("WURIKHBDQQSHRIOPHDJFQCXLJPBHPTFYYIZJGMVVASQSQALHUOWZLBAWXMARWRIBEVCXUOLZUFPRLCMYTJVJAGAFMOYLIPHDODWLSEYZLZCQFITUPKVMPOXKBOLKSTDJGMEGIGHKRNXIHETWJGBZVFYNYDKFPGDIQCEKNULZPYMTWDCJZWWSQOSCNRNGRCWXTHNEQAEDNCRMNXRMJOTFDBKVAGUUSBUBXEBSTQIVF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 175U;
    msg.info.assign("DHBHADGCJEFRMTEBQDNPNHZZHMBPJZRKKIVSFSUYMTOUZCXPXPWFGISYONSBBAKUORVGYJGOWAXRKQFZZTOUEGUDJAYPNNDHIQTHFEESQHMQFFCONAVRMGTSTBICSWKBMDJQNLWDFVRUCOATDVCUOWNALXQICXJNOEZCVYVVJJLYGEIHPHFXLWLRFWSQXNTAJYKIIMKLTPSZAGGZUKMIJDBWWIGWPZLEKYEQVLRXBTYDHL");

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
    msg.setTimeStamp(0.9488301241531824);
    msg.setSource(53511U);
    msg.setSourceEntity(90U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(115U);
    msg.type = 200U;
    msg.request_id = 17370U;
    msg.command = 114U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FBKCIXEWCOBVGPQKDQZEOCTZISPWCZCTOWGHSIPNSEZYPUDXJCIMMNTBXZFMVBDVEGKALZANOKHFNIXVGBHSWWYRXWXUQKQJQJYLNYLDKKYFOWDYHZLPYCXENQOJLMDPNHSRSJAZPRKHGVRIUBGMVFSEXLTLNSQVUVUMUFGXTUJUIDTBDOZYTPRIYUAMEJRODFKBASHNA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3351U;
    msg.info.assign("JHQXMKOJRWKXRGFLYAROOYJYFIMSPEWGLUIMITBXJSUHQSAJBSDXC");

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
    msg.setTimeStamp(0.8230053122071842);
    msg.setSource(48072U);
    msg.setSourceEntity(130U);
    msg.setDestination(43000U);
    msg.setDestinationEntity(57U);
    msg.command = 43U;
    msg.entities.assign("MDJMAJYUVDJRABTIYZWTTETLJOULESZXRULEOPUDRDRGNTAZWUVVCXHPPQSINONCTBDWCGSPGNPMVVGCABQJSAMHOLPHDYBAJNHQNLFHKGMYE");

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
    msg.setTimeStamp(0.29495366037712634);
    msg.setSource(20274U);
    msg.setSourceEntity(14U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(118U);
    msg.command = 177U;
    msg.entities.assign("YXYVJYNBTDMHGSSVANKYAZAKPUPQBTTOQXAPXSLWFAWLZXINLEZLQMNPWOEBTAOQWHAUUQMMXBIKKMUDPUAHZMDGQCRKDJNXZBVIURRJWEQVNYCVWFSOIVHTSRZSWNRJWEFZGYHGNRRHCPSNFCTLKRSGLDJROFOWKAFELOZCLFMQVYGQDICPEDYYECPAOBECHBXBOTNTIWYCKMLZLEIIT");

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
    msg.setTimeStamp(0.5146492843627358);
    msg.setSource(54961U);
    msg.setSourceEntity(249U);
    msg.setDestination(20141U);
    msg.setDestinationEntity(123U);
    msg.command = 171U;
    msg.entities.assign("TJCKGXITOEQHKPBLGRADPLETQHKCACQFHGQXLNWBKDLWHZURZIFLMRMOEHJOEPBYZVNFHOYANRVMIBMBWIULVKUXEXYRAWLRZQWSORIJUTSNEDFDSIDQBWPJMKFGXXUHZPASYBSZE");

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
    msg.setTimeStamp(0.6027545802409703);
    msg.setSource(57305U);
    msg.setSourceEntity(38U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(193U);
    msg.mcount = 141U;
    msg.mnames.assign("ZAXBIPVNSBHSACALPTDXBDIUAHYUYKMVWLWADMEDXDBCNIPVRRJSXHUKRFFXMNGWVQZUFJWFLIUEQBYZTPIXVQBIPROKMQEIYSEHQEVQKWDDIBYHRHODNVFRHFCSLLJLGZCV");
    msg.ecount = 131U;
    msg.enames.assign("PSBUMIEBQNPTIMMQUDCDSTZAYPTSXWJAOADFFKVXKSCGQONCGZDTQJ");
    msg.ccount = 86U;
    msg.cnames.assign("XHOEEEZQFWDMTKHXCJEHFLIPSBKVQWYQREXNAHGLOVZBSPIPMM");
    msg.last_error.assign("IEVQKXPFBRZYYXNKWUZJGCWMZLIRLCAQGVGPOWEMHJBHVFODITNJFUVQCRIRIOBO");
    msg.last_error_time = 0.1398353165291103;

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
    msg.setTimeStamp(0.16230061476895974);
    msg.setSource(7108U);
    msg.setSourceEntity(171U);
    msg.setDestination(16224U);
    msg.setDestinationEntity(179U);
    msg.mcount = 140U;
    msg.mnames.assign("YJKNGNKVDHVEMMXNWIILXPUUNQACQJCHMOYXXU");
    msg.ecount = 104U;
    msg.enames.assign("KEXDQIKDTJKPGSWAZKCOFGPCGLQWFNFSLWRCAXISMVWUABDBDMBIATNDNZFSJMGHEZKLYOWVLEZASGBRQTWPCBBHUVCXGPLVOUHMFPUDEMGXQSXHHBYMLQSHMZQNRXJUUS");
    msg.ccount = 101U;
    msg.cnames.assign("KLEKTGLNKLVCQADGUDWJTVHMXUYNGGPZPUEDBCIHBQGZLMXVEWRQCDJYEVWBHJCORVTKMAHTHBFMXYJFIABDYVBLRWJOY");
    msg.last_error.assign("GQSAWHNOAWXHVDLIOGQVFETXYFKGZEPBUHPCXQSPTWRQPYOBIEDNFCDGLYGDVAXJNCLOKAYGXTVCUHNASGEYRLIDEQLJZCOTHGTUBRJWEJSNLCXJLDLIWTVRHHZYIBVJBBAMUNNVIFYJAHLTTIFJ");
    msg.last_error_time = 0.06778963590598908;

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
    msg.setTimeStamp(0.8734675177435023);
    msg.setSource(44703U);
    msg.setSourceEntity(6U);
    msg.setDestination(51086U);
    msg.setDestinationEntity(231U);
    msg.mcount = 168U;
    msg.mnames.assign("VLKWWBSROBXMPSSYIJNECGOCIHZCQJGRQRPIOG");
    msg.ecount = 89U;
    msg.enames.assign("ENBUPOQDMPRGNYMQDWSGUUFZUWNUWEVUFZPKKOYNRTQCOZVMRWRKJMAQXPTSEYNXLNHYJEDRLQBACLZKHNJQWBXHWIMMXEADUKBSGWMCVXSUAGXYTMVIDHMFJTCJSDDLEVKXVHTQHULJWCVLCYQHHWPBCTGIITIGIYAEFZGFSA");
    msg.ccount = 152U;
    msg.cnames.assign("TSGOLUTVWXQKWLFZAUNDJXLKPPFLIIAOBAARMCAAIJHQPBUCIXHNSYVPVMNDZUECGWFNWZTJNBZIHTCJDCYEFVXTLXYKZYMG");
    msg.last_error.assign("XEJHUXDLTTCQRUOPYQDHSBVKTABFHEPGRHAGSCTYXUPMIOXFIKPGBFYFBHKZCBWJNYGUYLTQHNKDVWZAOSMNEYIANHLKZMMZUMQMHCMNIHPPXQVLWWJOJEEWLNTJURNSHFOVJQVWRELFLCATOOERPUCEBQRYSKBAYXVDFJWSKAPUJZRONRQVLIGVPMUOUGIVFCRTSZPZDWIEWXCVECZKGATGTSLQO");
    msg.last_error_time = 0.06290789725846402;

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
    msg.setTimeStamp(0.4104505624608439);
    msg.setSource(34288U);
    msg.setSourceEntity(189U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(215U);
    msg.mask = 210U;
    msg.max_depth = 0.4101566855147233;
    msg.min_altitude = 0.9655878962496457;
    msg.max_altitude = 0.6964871743537476;
    msg.min_speed = 0.5683534227349701;
    msg.max_speed = 0.262070008766087;
    msg.max_vrate = 0.4604861553215587;
    msg.lat = 0.7833068113111036;
    msg.lon = 0.29475170580256516;
    msg.orientation = 0.688943540008434;
    msg.width = 0.694338009857562;
    msg.length = 0.8034012962743938;

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
    msg.setTimeStamp(0.1038629542433086);
    msg.setSource(49473U);
    msg.setSourceEntity(162U);
    msg.setDestination(20399U);
    msg.setDestinationEntity(139U);
    msg.mask = 66U;
    msg.max_depth = 0.7368678867546911;
    msg.min_altitude = 0.8640803220151242;
    msg.max_altitude = 0.7631849498758083;
    msg.min_speed = 0.5289687463757952;
    msg.max_speed = 0.5872515891490654;
    msg.max_vrate = 0.2743199705591124;
    msg.lat = 0.6357392031527086;
    msg.lon = 0.08749180462179618;
    msg.orientation = 0.8122448077078522;
    msg.width = 0.7602057725961621;
    msg.length = 0.7984898101901121;

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
    msg.setTimeStamp(0.7797006838931035);
    msg.setSource(54138U);
    msg.setSourceEntity(207U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(194U);
    msg.mask = 222U;
    msg.max_depth = 0.6523492165733928;
    msg.min_altitude = 0.0939627191711101;
    msg.max_altitude = 0.39332223337134586;
    msg.min_speed = 0.9259175565464647;
    msg.max_speed = 0.5943507421630622;
    msg.max_vrate = 0.11434744500566618;
    msg.lat = 0.6230822082548003;
    msg.lon = 0.32344635022877555;
    msg.orientation = 0.5788732265886116;
    msg.width = 0.16717718022686723;
    msg.length = 0.6676242275989299;

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
    msg.setTimeStamp(0.7351855020983817);
    msg.setSource(55237U);
    msg.setSourceEntity(220U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.536065947742121);
    msg.setSource(8874U);
    msg.setSourceEntity(73U);
    msg.setDestination(56380U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.016346491593081325);
    msg.setSource(30708U);
    msg.setSourceEntity(177U);
    msg.setDestination(8809U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.3543647792186887);
    msg.setSource(41571U);
    msg.setSourceEntity(125U);
    msg.setDestination(5240U);
    msg.setDestinationEntity(192U);
    msg.duration = 14973U;

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
    msg.setTimeStamp(0.6573633786210482);
    msg.setSource(41778U);
    msg.setSourceEntity(253U);
    msg.setDestination(61034U);
    msg.setDestinationEntity(69U);
    msg.duration = 7008U;

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
    msg.setTimeStamp(0.6131852295716199);
    msg.setSource(45207U);
    msg.setSourceEntity(67U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(150U);
    msg.duration = 46742U;

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
    msg.setTimeStamp(0.725075911088849);
    msg.setSource(5733U);
    msg.setSourceEntity(102U);
    msg.setDestination(52859U);
    msg.setDestinationEntity(109U);
    msg.enable = 96U;
    msg.mask = 4266350967U;
    msg.scope_ref = 0.8807538840322583;

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
    msg.setTimeStamp(0.4363144877051405);
    msg.setSource(21112U);
    msg.setSourceEntity(196U);
    msg.setDestination(37424U);
    msg.setDestinationEntity(253U);
    msg.enable = 232U;
    msg.mask = 1535985322U;
    msg.scope_ref = 0.9676368611824742;

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
    msg.setTimeStamp(0.37195236675887855);
    msg.setSource(33344U);
    msg.setSourceEntity(149U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(81U);
    msg.enable = 34U;
    msg.mask = 976334332U;
    msg.scope_ref = 0.38963719783158324;

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
    msg.setTimeStamp(0.387430325595955);
    msg.setSource(27735U);
    msg.setSourceEntity(202U);
    msg.setDestination(21870U);
    msg.setDestinationEntity(241U);
    msg.medium = 154U;

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
    msg.setTimeStamp(0.2123013754755021);
    msg.setSource(25020U);
    msg.setSourceEntity(124U);
    msg.setDestination(30517U);
    msg.setDestinationEntity(175U);
    msg.medium = 10U;

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
    msg.setTimeStamp(0.14611483437379302);
    msg.setSource(25609U);
    msg.setSourceEntity(166U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(242U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.7310786648520122);
    msg.setSource(41192U);
    msg.setSourceEntity(155U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(154U);
    msg.value = 0.3821735391116097;
    msg.type = 254U;

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
    msg.setTimeStamp(0.6290499598598561);
    msg.setSource(40681U);
    msg.setSourceEntity(11U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3155745505726373;
    msg.type = 41U;

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
    msg.setTimeStamp(0.01123589139024228);
    msg.setSource(63540U);
    msg.setSourceEntity(214U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(153U);
    msg.value = 0.99728985221289;
    msg.type = 42U;

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
    msg.setTimeStamp(0.9178178221422897);
    msg.setSource(35849U);
    msg.setSourceEntity(97U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.2139842652270202);
    msg.setSource(5657U);
    msg.setSourceEntity(228U);
    msg.setDestination(63740U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.8901078450698467);
    msg.setSource(58263U);
    msg.setSourceEntity(12U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.3494000260854485);
    msg.setSource(50778U);
    msg.setSourceEntity(155U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("XUFCQQDZBBEIKINGDZNLPYNPMZMTFKBJOVVCKXHYVEOQXXOVLOFHDBRMSCVEGOLTELFHKLCGPMUGAXWRNRXHVMRSJFLTRIIKTYURHHIQDBYXLAJJQOGPFNTNCURQEUYJBXHBMWMSIGUASGXAAKAFAAOVBJKLDKGQTYWWDIHUUCBDYNPJWNRNAQSW");
    msg.description.assign("LHEBEUBYXTGDSGPBZPHKVMJHSTJFCWHOPSBLYVQBWIJVSZKXCXGOUNSKMPCWAGRSZQENIOGCCHMPRTTGJGBGEMFSIWWRROKHAAMEIOYDIJMWFHBJBZDMYYYGNPTXUFNKIOWNQXCTFTXHDIQVNBZGMZPJIWTUVDCUOVJIATFFVAMWLKEUXRLUQTEVMLQ");
    msg.vnamespace.assign("STCYMRERSXNLLPVNIGLTJRSMOAFCCWPRUCGKXIOEURSLIDJ");
    msg.start_man_id.assign("TZHBIGNTFGNMNZTOVOVB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NPCTMTYLSQRWMJIXWDFLJVRREZVYFHHSRYLSHGUYGCOXBEAEZMRMNBLKDWAFIGDFUWPQLPZPQWGFQPXDLUAWZPCRFZQKUGSTBWXGISGJTWJLXLTOODOXBKVUIZHBBHCNSTELMYSXVXIKBQHCIXGJAIRCOUZPQEEDTEMWZBHULPVVYKAXIJUAMIFMAVG");
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.47438042304102845;
    tmp_tmp_msg_0_0.lon = 0.29540004730324143;
    tmp_tmp_msg_0_0.z = 0.48763083743278635;
    tmp_tmp_msg_0_0.z_units = 62U;
    tmp_tmp_msg_0_0.radius = 0.8016880854758475;
    tmp_tmp_msg_0_0.duration = 42520U;
    tmp_tmp_msg_0_0.speed = 0.6860153416595808;
    tmp_tmp_msg_0_0.speed_units = 219U;
    tmp_tmp_msg_0_0.custom.assign("RSXVMQCBNLTVMLDAVMIDPYYOKQDOXWXFMOTVUCXOMWUBQIGRCRVPJGFCKSZPTACUIHJNVEQARJXTXHJTKBCHVLOQIMRJZLCQTYDBVDACSNJUZLYEZNLEPCZHSEIAQFFGBFTFNXSCLLLEJUMKUNGRAIFFBBKEOPSOMRZJGJEYGNBDFWOPDVAERT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 98U;
    tmp_msg_1.plan_id.assign("STBGWCPVSBZQEJFSNYFBRBOZORLYRMKEFIWJNHMFHTGPRVTCIOFHNSDLJEBSVKDMFQRSZQFZULYMCAWBDNPNQWJTLEKJYURKDBISPXXNYQVGXIVID");
    tmp_msg_1.plan_eta = 173576859;
    tmp_msg_1.plan_progress = 0.6547276464832289;
    tmp_msg_1.man_id.assign("KOUYZDIMLCVAUAUKHTHQFBFDONXZQZGDBTPUTGCLAQDNZJOHXYZNWROGNJFSYFPWUSBTLSAJOIKWNWPHQEXXOTLGSYREFHSGEPSNEVZCYRWCPVFAENFYEOAHITLICYVOWPIKYMTGMCGDMZAVIDPUBGCVSMI");
    tmp_msg_1.man_type = 41379U;
    tmp_msg_1.man_eta = 1793308188;
    tmp_msg_1.last_outcome = 169U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8164886722715684);
    msg.setSource(65219U);
    msg.setSourceEntity(147U);
    msg.setDestination(19002U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("ZWFQIYYUGZPNNWQDAOPQUFSTIGLBUJHTVEXFGYRQMLFKTDVRLIBBMOHTT");
    msg.description.assign("JOWGNBALLUACDEIHCSYYBWBXEGCJXTIVLCRPHBSTYHNQFPOFZUPPIMPDLVWZUJJRXBPUKSUUKDVMKLCKFRAWXTMQRYXYAOAURBTXISJWEZNNHQFAYKIZBRTRGYUTSHZVHHSQCMFCYQFZLKHVGEBWOWMLGSFGYEGDALMXVJZHNOGOBENUDFLCDRG");
    msg.vnamespace.assign("GNJWICSJTYZQBXBVGQCJPVMAORYIIJBMTKHJHOULKRGRVEGTIVPANZFGNMGXEUOIFRXEMTUQWOLPSCDZXZCXZUEOHPNBRELLZJMCNJWLYOWDCJSINTFISTCOQLAZXYBYSENVDNXEDIKLKQCUV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XRPMXHHEUFDUVXNDEFQCFIDICRXPTVUUUQLJSNZMCUVOALNJAKOYODTBZWHSCGNGMCANBGMMFNIRLZMCBKFSMDYLXJOHJKKORIKVZDWSUQOJAQKUIZYRCRBFREZPPZIBXJKWTMAWYL");
    tmp_msg_0.value.assign("TFSAFDMFBISIIAFPXOQEIDXMZKNSBHSXKJERBMSEVKWZVRPJWOYKRCMBBZGADZEYOSFPAWEVIYKCVYLROIYWKSZFQXLDQNPXUGDJTMMUWGDXXRHEJYBNFAXUCGLNLZNRLAGNUPYJWUZTJSOYGI");
    tmp_msg_0.type = 110U;
    tmp_msg_0.access = 184U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BGKXRRJWINTTFGPDVSJFCOVPSISRGADIYTQDNUOIGSOLKMOAVSOVCPFUSJMTLMZDDBJBUELVRJEKNHMRWBRAYEHRDWNQYKIUZBRSKQZAZOYZPZUPIDWOFHTWKATEWFVDYHSLQCGWEALPBQEQPIPNPLABTJTXXOECDMBJUFKSQJWNFXM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OTEPYIIQGXRCJGCJXWQWKVZWHMYQXMVRWAQMBBQVKVZBNGTNTYTBFEBDQEMOLINWXZEKUJ");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 53336U;
    tmp_tmp_msg_1_0.lat = 0.2463375627122798;
    tmp_tmp_msg_1_0.lon = 0.88544509089884;
    tmp_tmp_msg_1_0.z = 0.9657085858535103;
    tmp_tmp_msg_1_0.z_units = 97U;
    tmp_tmp_msg_1_0.speed = 0.9334092101281739;
    tmp_tmp_msg_1_0.speed_units = 88U;
    tmp_tmp_msg_1_0.duration = 36869U;
    tmp_tmp_msg_1_0.radius = 0.4122187752758967;
    tmp_tmp_msg_1_0.flags = 76U;
    tmp_tmp_msg_1_0.custom.assign("YGLNFAZZBNFKKWNHUSAMEHRXZTYOTAQKBLTDISKETSBZRHXDHJJRKJLLGQDFBEBONAZOPVUIJGZSJTDRESRUGSMDGRBNCUKMWMVVVTHWZBTDNPMFKWYXPFFELTTRFTQXALZPPDIHCLJCCGMVINQWQEQHSICZDYOKUVBUCCVIMASIFHIOCOUOWKCJWRNMQWXJQGEJISXNVERPOJPPQYMNOKRXPBAEIYW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CcuEvent tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 24U;
    tmp_tmp_msg_1_1.id.assign("BMFPAWQXNNODYDPLPHEYWREIZHGEGXNQUFPOBPELOSRAYETTENWOKOXTLUCCDRYVZQFGUKAZXHMZJLIRJBJLXUAHMTCSXYJSWNUCDFJRNOITPQENXGDYSVUBJSPQIRMLYSFFTCVIKVEWTORJJWOGXZGXI");
    IMC::AcousticRange tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.address = 243U;
    tmp_tmp_msg_1_1.arg.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::CpuUsage tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 151U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::ManeuverControlState tmp_msg_2;
    tmp_msg_2.state = 61U;
    tmp_msg_2.eta = 50420U;
    tmp_msg_2.info.assign("PLNBKPYYRZGMNPRPXOQOBRHARJFQDRTTYSDHXBCPINCONSHWTYVAKGGIRDTCBF");
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
    msg.setTimeStamp(0.5935806019225276);
    msg.setSource(9464U);
    msg.setSourceEntity(92U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("ZEQBERADVDDHFIUCKBORFUPAMWVJRYBBGFRHWNMIELISOGVUNHCZYNUIDAXPDEXF");
    msg.description.assign("GXZYDYSHTQTLXPHUAIBWUUSGXVWHYSBEVACZMDFLCWTEPBQQHADIZGRGWTMQSHPGHVYATWPUDKEWDMJNIVRAXBEUQCESRJUWKHXIAPAQWRSLDFVCPBOLGUZSZONTODERJDAFTTULMIZKZOJQFYBMVZFEOFCYCXJWIMGFCLYPGCNOVPYFJLNRLUFKVOKEJZVKFSRPNJHKVTQRX");
    msg.vnamespace.assign("BHCSFWLLVBRWYMEPADCOZMDJXYAYPFRCBGNGHFJUTRPUIXVYTXOTJESKNNSGCUZZZGFMQZLOUHHELZHCNQPBFKDUEVVDLUFIHSNZIWIOAIAGSMQTRQOWYUXAYIPJCPEBORMWKTSJVAKWBFDLIOYDCVUXFNDTXHWCNLFQCNLHSNDPEMPH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IVCKJLSXRSYYBBOFACXHKFOM");
    tmp_msg_0.value.assign("AMJYKBTMYMCAMZFVZLNWBVULCBTWVZILBEEOQQEAXQSCARRRBHTWJHDLKUNTXGNNHBTHSGOVAWGSUCLSJOZRPKWDCDYOJIQYHHMRAWDYCWBPYXPFLUSFGNJBOFUYKOISKRBCATNQEBASGFTIULIAWWQVIKFULMIHQTOMTLIJXOEMGOFJRUXDPYIZQWNK");
    tmp_msg_0.type = 75U;
    tmp_msg_0.access = 25U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YUOSNYFZZAOMNEMRQZMBLMWLCZTJWRKOAZDGAJNEXEDYSXSDLGLWCTFBOJUUTPGQPFEGIHYBKQTBYKSUXXCCQGTBTKYOWLXHRRKRMYZNYAUJWKOISCWXPEKNLLKXLGANUHBZEWXTEMIBVSDMAJHSZJCQDBICEQVRWIBTDVWQCQSMIVYMTFHHLEPDHRXFIGAMISCRUVFFEJQPZIVHQFFRPTPKSJFGONUGLOAYGKPRCPVOUVVAVWNHB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZTBWFKONFAVDSZMWAENFGDXJPNRWHTOPZYOYFSFIUSUPDRWWBSLILPMYTALDDQIXUGYQWGANJBERFSXQXOERBGKTEKLJUMIAVTMYLZTBYXMBUJPI");
    tmp_msg_1.dest_man.assign("GRJZDDASGDAPOCTGLCVRXGHOZLRKFNUIEOXLMPLNFQEBEICFLKJGHTBMIWZDAXCHDTVFFJSFIIIHAQVWPHVCQFZESPZLJSNRMTJGMPBOSCFMMJCARPIPBDBNUOGYEEQNBWJBHIOAKCYENLMUBWTIVRXLEMMKFEDXMKULQQVWQVASONZNYCOUYKDUWZEXTL");
    tmp_msg_1.conditions.assign("WSENAJIWUUPITVXSSOPEKCCR");
    IMC::EntityMonitoringState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.mcount = 16U;
    tmp_tmp_msg_1_0.mnames.assign("QFQOBZHOKGXNDGZPLANEYKPTKWONFPBDGWQCSANSVYJIWVZCEWYOAXZITLAGBDPFTGQEDVWWXWKQMTFOLLRIUAXQMRWXVBICSJMOHEYLWQNEOJWCRUSZDBEIFBJEOBJNKHCTGLHURTMPKJCDGENLBZHSEASMDUAFVRBUQFSLPVJDYYPSKPMGKZHFCUYCO");
    tmp_tmp_msg_1_0.ecount = 76U;
    tmp_tmp_msg_1_0.enames.assign("TBPQISRCCAOZMDKCEJNTEKAYSIODPYLFWUACRNTKLJBEHOUVGLHOTPKXLYXZWZRJTQTHUKAFWNDUMNZGFUPEJAFYXZSHVBHDLRHNNSDSJOWCNXRQAQGBRYTLCXZVVYPYSFHNWILJUBIAIPBEZXCJQVIHEBOZYCGBKGPMSSEOIJQGBZNVNHIXJFZUGGTSDWPYMQEVDVMMQCMLOWIMCWOT");
    tmp_tmp_msg_1_0.ccount = 254U;
    tmp_tmp_msg_1_0.cnames.assign("QTINCMNHIUVECPNEJGUJJUJDAHKFXKJCDVTFYDZGKIAADWVWNKXBCKIZHCKVYFQIEQGKNRQVLYTLPFDMJLBOXEWGWSJSGFQLSCNFYMJTDPRCEPDUEPGUZABOBWZKWPLSCZHQLOSLGBNHXIALWSXPSCEVAFRTVMSDZGORAUDXBPRQEIQMFXUBFHZUCTOWWVVTHLRFEYHYRBOGOYKNMMTHHQEMLYAOKURYITQUAZXAMMPGJD");
    tmp_tmp_msg_1_0.last_error.assign("JFEZBFFMKTYXNCMQBGSEDVKLHSLEMYUVRRERQTVRHXDBAKNIEBHJCQJWXYYQAPAGNLYIZVAPSUKDGEBTTYZTQIVKXDOPUQCTGSVWKWJHCNOPDQWSSZGDPCFNRCWWMUAJLUIGMC");
    tmp_tmp_msg_1_0.last_error_time = 0.4116010007411127;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.525327533990469);
    msg.setSource(41661U);
    msg.setSourceEntity(239U);
    msg.setDestination(58943U);
    msg.setDestinationEntity(106U);
    msg.maneuver_id.assign("XBHBDBNLZPKFKCGPTTMTXHVNNEUVJIYECRLMEZWVJUDOVNGWFLMMYMNXDZVVJUWGYCXDOCJKSHATSDHBLZLEQBKGWGPLOFKJKNBOBFRUBCRZRSFBGSZDEYUIMRAAT");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 5048U;
    tmp_msg_0.lat = 0.9982932858243371;
    tmp_msg_0.lon = 0.9042329812037778;
    tmp_msg_0.z = 0.49369553175393854;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.speed = 0.3121088673319333;
    tmp_msg_0.speed_units = 157U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6563802721823132;
    tmp_tmp_msg_0_0.y = 0.7295745132378747;
    tmp_tmp_msg_0_0.z = 0.24232986493980824;
    tmp_tmp_msg_0_0.t = 0.4579744073466332;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WYTBQLTMWRAGXNVYDZUWSQFUQVCTJFPZFNFCSYHITBAOCCHFVHXNIORVPIWQHZVKBAPYLSYPKJNGDECHCZTOWBFEMISYARDTLZUTBRNLYVPNWCQDHSOJXKZLKIHRWSPTUJGJXMLAEZXIQMACRMLZXEYGIMPQJEBLRAQKOEQGKUNFX");
    msg.data.set(tmp_msg_0);
    IMC::Voltage tmp_msg_1;
    tmp_msg_1.value = 0.783788367233114;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblRangeAcceptance tmp_msg_2;
    tmp_msg_2.id = 5U;
    tmp_msg_2.range = 0.5439186976539339;
    tmp_msg_2.acceptance = 72U;
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
    msg.setTimeStamp(0.31340858502897917);
    msg.setSource(64308U);
    msg.setSourceEntity(42U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(27U);
    msg.maneuver_id.assign("AZHRYXTJRZCIGBVJXGPRVZKPOKIKKPAKJBHJNGFGBVHMJ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 33693U;
    tmp_msg_0.name.assign("DSWPPCGWOIHRTQCVJACCJAGLMHFNJKIQHDQKJUOTVHYKXMLLWQCXFONOXDQOWYEKWIXOWZEMSFCVBYZAPGGTHFXLNIGQKZICQTXBYDMKYTHCYSYLCRGZOIZZESHDBZXVZEYAGSRAUWKLTHUJBNRFAFSXLSRITVDBFUUQBJJIUXPVW");
    tmp_msg_0.custom.assign("OOXNNOFFUQYIGHSMQWDGKPOZMZHHIABFALLMPDGQXIUYVDEJFFSKZSCOYJQLROTRNND");
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("TCSIXOJJFZPHPRXPMJBWFBCYFNVTIASNTDXPXVJCJABWJRIXQAYWSJPFKOOHE");
    const char tmp_tmp_msg_1_0[] = {-49, 20, 73, 27, -57, -79, 91, -10, 78, 107, 110, -118, -31, 113, -39, -66, -126, -74, -114, -112, -5, 68, 4, -67, 2, -90, -12, -69, -75, -8, 108, -19, -34, -69, 26, -66, 68, -51, 110, -18, -46, -102, 61, 96, 105, 73, -34, -49, -61, -60, -14, 30, 60, 68, -64, -67, 92};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.10945657175804102);
    msg.setSource(12363U);
    msg.setSourceEntity(188U);
    msg.setDestination(44089U);
    msg.setDestinationEntity(26U);
    msg.maneuver_id.assign("KIHLIYQXVRTK");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 31378U;
    tmp_msg_0.control_ent = 20U;
    tmp_msg_0.timeout = 0.5716976013226328;
    tmp_msg_0.loiter_radius = 0.8022639142687259;
    tmp_msg_0.altitude_interval = 0.5432996909518298;
    msg.data.set(tmp_msg_0);
    IMC::CcuEvent tmp_msg_1;
    tmp_msg_1.type = 107U;
    tmp_msg_1.id.assign("RXCKJRJMJHPYFSJTIPGQKWXYKYCTBBMJNCSVLZNVCKZFQIULAVBFCCCRVVASOQPFOQQANEEKTGC");
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 7U;
    tmp_tmp_msg_1_0.htime = 0.6025335670135076;
    tmp_tmp_msg_1_0.context.assign("ZQGIJARCJXIWMDAGSKCTHCBJOKTCSHTQFAFRVRNNVBPBLPTJXXPFELWSPIRVPUDLTMJTWGYRRZUOGFNGVYDZTTWDBICSKEKHSJHYYBYBZAFGXAQLROPKQNRWYCVXYQONQMCXGGQLUKMBTGSKHNKDHEIVOKRZUGXZPIDWFSPQ");
    tmp_tmp_msg_1_0.text.assign("ZMPACIXOTIOTLFOJMULQDNVDKOOAFCODILNDANXFGCSPOZBATNJRZCKLEQDDGUVDMTNVPIRWSZQLXTISVAGKCYVZBUULBPBGGBHVNZVKWFZSKFHEJHRWMBQHETPVIHRQ");
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleLinks tmp_msg_2;
    tmp_msg_2.localname.assign("BSFLEDDKLKSCABWZHCPFMDVHPTGJMTXDSNTGGNXGBBKQCRPKMNQTZQOWAGYGUDAAVJWRGMFIZORCZVLMHXKWLGAUXKGRQZ");
    IMC::Announce tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sys_name.assign("JRVJCPZUOJEJWHDTAIZJNAEAQHJNSLGDZCSVXOKYCZCMSEIPEVNQPQLHXJMYMZBMADHNYRWTTHKDQIEFOCXTNKGWOOXAGSWXYZBXAFHHTZUBUOWMEXYTQQCOKLMTEUCVILZMPURZPICSFRNYGLEHVTDLIPQVFPEIRGRPONLDCUACMNDHIXL");
    tmp_tmp_msg_2_0.sys_type = 56U;
    tmp_tmp_msg_2_0.owner = 6008U;
    tmp_tmp_msg_2_0.lat = 0.5176679665574903;
    tmp_tmp_msg_2_0.lon = 0.6633331977803012;
    tmp_tmp_msg_2_0.height = 0.480174047431692;
    tmp_tmp_msg_2_0.services.assign("AWMPZAYBUEVKYSOLNRFBZALMHVFXTONVKWLIOPVYMXDFNYIEBKKFNYERHWAXNVGZVMDNXRHTRDQWVHGYPDODQLVKGHKQSKBCRGBJQXMESRHOCFOGDBAFZBUCHIMETOMTUAOGXM");
    tmp_msg_2.links.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.003878539736742126);
    msg.setSource(1498U);
    msg.setSourceEntity(104U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(173U);
    msg.source_man.assign("RCGONEZSJDZDQOKP");
    msg.dest_man.assign("TFVGJSDZEQGJPMLAOTIBKXQHXLXYSOVNOINATSKEDFNWHDOKIMOBDEZBMHPETBRBIXMCGTOAHCOWXFPNVYSIYBJVFMMVWYTIRWJDFTAZNZMRQF");
    msg.conditions.assign("RUHUFLBGZIEKAYSRTUCYJXHXWRDTUBHBQSWNIOJYIWVTDFRAUNODLIPJWM");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8212069040826516;
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
    msg.setTimeStamp(0.1377944802179616);
    msg.setSource(18380U);
    msg.setSourceEntity(64U);
    msg.setDestination(28257U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("RUEEKIDMIMGPIUPCWFOEBPKUDNSSMRQECNSXYDZVHOPBAGTNHYZVHPQZNCXNOUGNAAIVQXTCTPMZWSRMVFKCERNERMSQEJZWYGHPCVYJBFQXQVYKING");
    msg.dest_man.assign("EYUBEAJBPFNPNSAEIAVPQYRMGBAMOSLRUXCXIGUTKIALGKUQSEVZOUJPYZHOLANXHTLF");
    msg.conditions.assign("CSAWDAGZSLUILTRQDUGKAQTZKLGMUTRBUWEBHJCSEHQOGSOJIATYPVHYAAFJIXJFEQGDHVFLTFDRUBMHHPNRMKDLMUVNMIIKLRVMHMTVRXIE");

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
    msg.setTimeStamp(0.3990386495474667);
    msg.setSource(39628U);
    msg.setSourceEntity(125U);
    msg.setDestination(35488U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("PMNJMSLVLNHRCIHYAISDSODTDACJYTCRSYEEDVEHHUQCGEPMIMPAEOVOARSQQLWMPNWJBOKWDAURAWCUBCRBGQDLGSKHGIFZPXRRCUJCOKUXVU");
    msg.dest_man.assign("DVDUZCMOYNHVFOKLCZCYAIXEFVUZQNZQGPAPQQPPULPLCFHVOZIGACRYBYYHJOACFNBCHUIMRJGXJKFVXKPJMOQWSEZJTWDXRBHOFSVSWTNGOWOWWBZTQKHQEOGRYCGHTQPPESLZMBVIRWAEGSGBJEBUQGSRRZLAUNTAJVIEYQIYNKAMDHZFFBDXTUCNTERDLYHKUVITEJENDLJXDSRJIMGKTMFWCNWDVRMOMXXYHTIASLFBUKBKLKNDISXSAP");
    msg.conditions.assign("SYXOMTCNCSIEGNMQVXUGJIJXIOEFUVNLGGYCYLHRBMRNIJESGKCQVBRNTOUPPFFONZPNTWHKREBUYHLOLZTTKVLZAXYQERFFWRMTWLJACTWSPHLEBCAHBSUKMVWMEZBURATWAJZDLSXWFCQDXIDBPQYWDDMPDVHIAUQIIVAKPYZRQQVKCKXZSDKGHQFCMQJUDTZGLSOVSHYNXEZFKHMOCH");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XQDTSFSZXRPEJYNVZYIBJGTOZKRIKQTWYHLCXIBLOMHVYIBIWZZWTOZCEDYGWBSVFGPPZOSXSATSUONNTUKRJXGAFVCIDLVHJAFCFFDBPZNWATRKJCMURLUUPHDECXZSPGIOPUKXJHAERWONUFYOCGTBHLGEPQPDVMMWEGLNYDEBULJYSRHBQLNQGHLQMDWQOTMGQB");
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
    msg.setTimeStamp(0.39527223119854205);
    msg.setSource(62787U);
    msg.setSourceEntity(159U);
    msg.setDestination(7632U);
    msg.setDestinationEntity(230U);
    msg.command = 46U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FREKTDMKBMSEVQAXXIPZKZWGFRZSKACPYCVFKGIORJDJAHMQFEUEHOSRWWC");
    tmp_msg_0.description.assign("SGBWLMAZWMTLQENPSDCAHVMSCPBRWYCYUYLNA");
    tmp_msg_0.vnamespace.assign("FDGVONKXSJKKADNCVIZEZEGGITZRISBLMUJYNCDFXLQFCCXUGNYYTYMOHUBDDIOLOTPAEZPOAHSBVYNHMQXDWUJWIWDBMQAEBIFKCCJRHRQWLBFHFIHAYPEFVJCIVX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CWVXFUPUCZZQUKRJCIODBFOAUYAQXLNHXWUBBIIVOWPZNNLKFACMSFXDDTCORYLWZQIKAGDCAWAIQIFDRNBSLTNANJPJXTTGLPEHIDGGWFRGLAHYJMZFRVOFTTWMCE");
    tmp_tmp_msg_0_0.value.assign("AXAQBWKWFMTJBCDXLDLJNIRANYWMUDTQDBBJHSOHRYJEWKFQOJTNKPEUCKHYRCIY");
    tmp_tmp_msg_0_0.type = 31U;
    tmp_tmp_msg_0_0.access = 182U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KWIGXGTMTCVQHGDASXAB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AXELNTKWBIGNOWDHVITMPNMAVFFZDMQHRIFPEUGKNBTOUQYMLCKFHAKDQNEZSNWPTLVKAJOZGVWFFPEQTQIYJOWYRMDZMFYCUSWNIEABNFVLZKJOUJBX");
    tmp_tmp_msg_0_1.dest_man.assign("UOSHJTKQUUINSDLNEZYRHRKYRCKRXMEPVPQRPLUZOFOWIUGDVOXVKAUZVCNIJGTIZXYBIVUWGKVVTNGALXJGYBYXBUESVBNOPFEPDKTISSXXLMTYONEGMKBCJ");
    tmp_tmp_msg_0_1.conditions.assign("DCMUERVGGRLGZH");
    IMC::RawImage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.width = 33426U;
    tmp_tmp_tmp_msg_0_1_0.height = 35645U;
    tmp_tmp_tmp_msg_0_1_0.channels = 94U;
    tmp_tmp_tmp_msg_0_1_0.depth = 136U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-8, 10, 5, 16, 84, 106, 1, 97, 92, -18, -40, 100, -69, -4, 15, 13, 0, -50, -115, 122, -24, 118, -40, 81, -106, -36, 40, -101, -27, 104, -101, -88, 38, -22, 21, 60, 75, -60, 81, -120, 21, -77, -128, 79, 90, -63, 46, -76, 22, -80, -28, 12, -37, 55, 46, 77, 65, -12, -11, -69, 63, 82, -83, -10, -107, 55, 92, 39, -16, 33, -90, 47, -87, 112, 61, -2, 75, 38, -1, 100, -22, 118, 61, 92, -2, 108, 91, -67, 107, -33, -63, -41, 111, 50, 52, -50, 6, 21, 83, 110, 102, -62, -23, 20, -82, -23, -78, 116, -98, 109, 126, 53, -29, -33, -74, 64, 84, -34, 7, -69, 66, 53, 59, -42, 45, -101, 44, 71, -13, 63, -108, 30, 32, -120, 121, -77, -89, 63, -61, -76, 107, -18, -75, 25, 27, -31, 91, -108, 41, 112, -95, 71, 57, 64, -35, 7, -102, -6, 67, -74, 51, 87, 39, -13, -38, 92, -126, 54, -62, -89, -62, -43, -15, 126, -25, 125, 2, -105, -7, 73, -1, 74, 83, -95, -9, 100, 93, -92, 59, -125, 19, 20, 19, -27, -31, 116, -94, -115, -52, -65, 108, 76, 95, 85, 90, -31};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("VCFHTWPQNANP");
    tmp_tmp_msg_0_2.value.assign("RRWIPANYFXTIACXNSHZWBJWAYDTIXDGKJROQUETIPFDMEWKXEOTOOKVRRCCTAOWQLHFNJGASMGSVWLPBIVGDNLBSFZQGVZYFZQYUJECEIGQKUZJZSLKIVWQWPIMZPJAJBOQSUEFPYHEXBSXGMSOUDLBMUVJKUPFYDUKYZLFJVNXCXPNPRBHJYHQAWDCRPKLDYNYNZR");
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
    msg.setTimeStamp(0.5798760633818562);
    msg.setSource(14031U);
    msg.setSourceEntity(175U);
    msg.setDestination(62169U);
    msg.setDestinationEntity(88U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TBFKXXSMKJHZRZGEBGUQKNLYEHLXSLHOIZGTBKCCCQDHDPNGURGYMMPBJAWGLFVMWTROOWUNCUMOQBMCEYTSPOZGITLAARMHKZRGXKIXBUVSDKEZAVFXMKDCNSFYZZSIUJDTTFOAWTPPVEARBIDXBLALMPJWJPOENFPQWIVKUDCYSWEERXMLRPDQJAYOSWGECHTIXQNTLANIHNQUGNOYOYD");
    tmp_msg_0.description.assign("FWXZNMXRWOESULGOIDITWVKKUNSSTHLVDNEWOXAGSUUUYBNASDHCENTVDGICKXGGXYOAEEAFHCMAQYDHFBRIMNKZJDHYQXWIPSMTVECELYITRDQJQRYWFWACOEGYOQJCXRDDTFPWBPHLKPQPWJHYZDBISUKWLOAMZNPJGQZQRVVTEIAULCZUUC");
    tmp_msg_0.vnamespace.assign("GXLDZVFPQKEJUAACRPTXVHNBRGSXYTKLODDWPBLO");
    tmp_msg_0.start_man_id.assign("QNMLFDNJHUWFKMPAHQRVZYXRRPDXWLUNVVKEYSJBNFFGEWCBYOQBODIUNXANPBIEYIPCVZKCOBZJPTDZUNMHALKOYLG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PCSKVXDHMHZSXXCOABRKREZIQDOEQQULANMUKUFDFSWPBFV");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 1506U;
    tmp_tmp_tmp_msg_0_0_0.flags = 67U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6418445386020656;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2447075052895088;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.0681662303303171;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 175U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.16006424415322873;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 48U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.26747298904027483;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8438381840808328;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QSQSJPJRYQPEHUOFHEKCYARJCZDGAMIOGPZUBLCCEUTAVILRIRHGHVDRTVYGMVUIHWAFMTMZKBTDOFMLLEHPOZOEJJZCNLCVDCYUKZBCSZPCMUWWPATDEDGPJMSFTXKAIJGOSDNQTVKEGWHMXX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::RemoteActionsRequest tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 57U;
    tmp_tmp_msg_0_1.actions.assign("GBQQMPDOIMIGOCOIXSLSWREVJZLFQTTNPCAKYEIAEDFBYDBUFIUWUCSHOKDXEPRFQNNECQSKWSCBZZVXDIGYRZJONTQJYLHKKYGNSPVRAKKGPVAFRNOFHTVCHWBSKYUENWCMSAZMDORUKVWYLLMIQWJHUXQYLFDOZGXJYBNGQCIGKVLEZEEVSHJHRRUXWLOJSD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SoundSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.40232466659170796;
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
    msg.setTimeStamp(0.2751906700154678);
    msg.setSource(4610U);
    msg.setSourceEntity(242U);
    msg.setDestination(58743U);
    msg.setDestinationEntity(243U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LDRHRYMGLSALLZWKNCDDDABLSVAIVCUEOEXMPVZGAWCAVCGUCVVIMSEXCLNMYMFWBJCKZEZSRZEYRHVKFCZBKSSXDIWFTDQUPQGCEOQMOOPOFXJNBHTYTUJHMESZRGPIGQGYPIRLEHKEMJUUTDHRXBGNRHJ");
    tmp_msg_0.description.assign("KJTSWNNMWZMPDAIMJYVNPTLKNXLFSYFJYNBQEOKXBBWAICZVHKVYXCFXBOWIHKEQZACFVUMZOZLPOQCZFSNIHYZBGDHKKPAIASLJBGMMMDFGCFCJRXDUKFPVGUQXEAIMXXQILGJVUNRKWEOUVFQDEKLHOVITOTEHQUENJBBVLPJDFNRRHTJDRVUMCWICORJAPSZSYLRWLQQHIDECZEOBAWREYZTDTGSGXNYBYLYPTGASAMHXSPRTUPGTWUWSQ");
    tmp_msg_0.vnamespace.assign("VFJOFNDTEEHYWUMGMSBGGZWNAZDBBTZXNJYKHGLOAPCNXSMYGKLKRDZEXJATLOJLHYJFMHVHGDWCHVFQJRJXIUQKBNZXBWUGCXATIDTLFFUFVZYGPVMGMTWRVYR");
    tmp_msg_0.start_man_id.assign("PPSMAIFFYZBVJLRVWVPJWMLWEXDRHVQUMBBGSOTAJRNIOASREYKPHKJMJJGMFKMVDHKPODNRAQNPNUYLGGZQBDWUQAULRRQLXIOWTFXZEFTYZZONHIXOMQUWIXWFKGAD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RDQYAZMLHSDVKFJKZQUTRWJIDIQABRYSJIGNDDXEWSMDNBRFPNAYCLIFIURQSDMCKTBWZCZPXQGKUZTCUPHTHBIUQJFGXXTAYOYBZEONUVGRQVPERHGOWWORTFMQCUQMNAYAPYDTWWMKDNPE");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 16004U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.2955126615498287;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.41816390389288616;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6549598701599683;
    tmp_tmp_tmp_msg_0_0_0.z_units = 129U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.07789083085575954;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.5953163606196655;
    tmp_tmp_tmp_msg_0_0_0.duration = 42886U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.4641020756718195;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 173U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.1834125104470281;
    tmp_tmp_tmp_msg_0_0_0.direction = 250U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YCJANBFNXBUAPTSJXTJAWTMVEYUESSQGEGPNTHKGWMHONKRWNREYZOSDRKPPSIDKMBPUTXKHG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DepthOffset tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7703907260816808;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DepthOffset tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3538740810647826;
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
    msg.setTimeStamp(0.6341903925642207);
    msg.setSource(27297U);
    msg.setSourceEntity(98U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(251U);
    msg.state = 109U;
    msg.plan_id.assign("GVFXIUVNDWBXPVYVWMDKLPBVOKIAYEITNXOLGJYTMCULUKNECQWYKELJUPYXJOBZCMUTLBEEGFSQRDBRQHBKUJFAXIDZUJFFSZGRTLEMVWXRGXFRSJAAIDKBEBONZHKWSMMRLSOWAZDDKHXMTMNMYMUQLNHTGPPPFQAJGIVKIOYTHHJINPEOP");
    msg.comm_level = 133U;

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
    msg.setTimeStamp(0.31935622370474914);
    msg.setSource(26800U);
    msg.setSourceEntity(81U);
    msg.setDestination(13104U);
    msg.setDestinationEntity(220U);
    msg.state = 71U;
    msg.plan_id.assign("CZWUSUVZAQBSDBWJQSOLNPALVAIRKUJTWRYEQRAWTXZJRSMYJCOLFXANHHTADTTWETNVHUPCFRNAIPUAGXGIHNZGGMBDDJOXZALLOXVZIFCCEWWOFYSMPCPGZXBGVGNBYBOFIKEPMTEKVCFKIJTTHPWOJXEKYIVEVFRHFUXWMZZQDDDOZUFHUMQDP");
    msg.comm_level = 128U;

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
    msg.setTimeStamp(0.5923272636069449);
    msg.setSource(51477U);
    msg.setSourceEntity(195U);
    msg.setDestination(15780U);
    msg.setDestinationEntity(13U);
    msg.state = 37U;
    msg.plan_id.assign("SHZMFTXKYXZKRBHVKQMCQURSHZHICVAMUNCTOTGIDJPSRZBNFUBUYGAGEFTBEMPOBKXZCADVQDEBNVHFENFMQOLNXJLQIENBLSSIQUOEDDKSZLGGFGQCDGQSXWJTUERIWGIYYJDRNPNUPYENVVWTFEJXTKSRXNTAIDTCFMKJTMDFLOZJVGBAXQMRYAIJHXLAHPGVWPLOKUCAODEYBW");
    msg.comm_level = 254U;

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
    msg.setTimeStamp(0.06575810850313446);
    msg.setSource(7127U);
    msg.setSourceEntity(34U);
    msg.setDestination(48820U);
    msg.setDestinationEntity(153U);
    msg.type = 82U;
    msg.op = 139U;
    msg.request_id = 44505U;
    msg.plan_id.assign("JDQYBOQNMGDHBIARYHWGPXQIJNEOLUMLHTGDYAYLEUYJWLVAAUVKWGQBPSHCLUCJZSERYQZMQNKBHYGCFZSBXSPTVYOIYGWBJJESCVCURCLPFDXFWONTIKFOETHNDWHZPSMUQZEEDZFFDPSNINZKQKAGJWKUMTQOUGCBKXMRXDMSZYFJHJWTVRUFCPSPOSMIKBRVNPGAGLHIINVEZFRENBXLRMBQWXP");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 135U;
    tmp_msg_0.value = 37U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCTDWWRRTBOZAGCQLTWKXKOXFOYNVDFVRWFRKYGMNBGVYYFAIVQZQAGHOSJHVGAHHTSNXPUSZEHIDPRALBMCRCSKIUMCIEEGABXGMREBZWRRXIMXNCBQZIUVLQTYTRXHEZMCEKFIPSJUSQOYFWIBMDDCFZONSVDPK");

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
    msg.setTimeStamp(0.7283050764178159);
    msg.setSource(19654U);
    msg.setSourceEntity(198U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(63U);
    msg.type = 139U;
    msg.op = 50U;
    msg.request_id = 40828U;
    msg.plan_id.assign("ONCYXMULWUBIOCNLNTYEVBZHRIQMBFNSCFTHNQYITBLQIZQPUJJUISPADMKCSDCHBWJAQHUICEXEXFKWGYVEEZZRVTPFHZEKGXSBUMDFAJZTFGGKMDZVVJRDYWKLDFXPEXORGYNQCXDAJNZOCMXZOMWLWHXJJSMLPKBDKSLGFOMQBARTIQKOPKQDGXJPWBDZEKIUOARGIGAJRLYYSOILNQANTMVCUARYHRRHFHSPHCLOVYVTW");
    IMC::AcousticPingReply tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IRESKBHQMFVYJLPGCTGEUBFKJUMAHCQRINHPTCGJOCGTXVOBLPWHYIKOOWOCKOLSDFCKIWDZCHUGLUSJTNPXLISYAJWGAFYFDSZWHZNCDISKEEVNEPTRPUBTURDUFGSWKPDYJGJXIFLWXKNQQHDBBZIJZRQMQRKPOZXGSIQVQXETADUMXNDROZMZWPRELCVJVHNFEEEBZYWYYMBGMVTUKBLRUJHVTNQTPV");

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
    msg.setTimeStamp(0.5941223109778763);
    msg.setSource(4336U);
    msg.setSourceEntity(127U);
    msg.setDestination(769U);
    msg.setDestinationEntity(209U);
    msg.type = 170U;
    msg.op = 177U;
    msg.request_id = 61869U;
    msg.plan_id.assign("NENYFYAYEFCUSQKAEHKOMNFCGELYUDXYMRKBJZLOGFLRWOZDABKCQXJCPBXTGUSOXSGWHEAWSUHVWHSJYFHBMEQTMAYPLGETKUVJJXHFZDNHXOQRRDZWKQZTTNABKWDEXLCQGPVRHIMIITZTUWRBXYALINUOGYIJIUXBLOUJCJIQVNMKBUQ");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("PECDRSKUVIYFJAFKHYTZDXPBHBGIVHPPUBVEIIQLJXPCOHXAYGKMMBGWVGWWLOEBJJQJLNHBPGSNFCGWQPSRNZHRMTQAMQQQOXWUOEDXEDNVUATKJSESAVHUSWIUJUYPZXKADFMZATKIVPZCIIKHNFBZBGTNFLXMDAKRLMPNMYZMEORBGRCVWORDUCOQHYMGKTLNIJNDQJTYSEXBLEDLFVZSIVYFYFACWZJNCWLUCOOXKFDRYWTGQSTX");
    tmp_msg_0.service_type = 174U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GHNDZOYRQYR");

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
    msg.setTimeStamp(0.11541056643959025);
    msg.setSource(63798U);
    msg.setSourceEntity(54U);
    msg.setDestination(8865U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 23447U;
    msg.plan_size = 395874437U;
    msg.change_time = 0.5263458775560584;
    msg.change_sid = 38701U;
    msg.change_sname.assign("YPWMAKOSUPMDLWBGSNZDRPCFXLRNQTXLZBWNZLSJXQTJEMTXVTUH");
    const char tmp_msg_0[] = {93, -71, -63, -30, -48, -108, -30, 12, -107, -67, -12, 65, -4, 79, -121, -4, -74, 28, -10, 114, -111, -15, 118, 21, 46, -4, -102, 10, -36, 34, 126, 24, 52, 15, 119, -53, 6, -111, -107, 2, -60, 17, -107, -19, 93, 96, -23, 10, -57, 48, -5, -105, -40, -55, 88, 45, 42, -118, -93, 37, -89, -63, -8, -38, -56, -114, 35, 99, 69, -91, 85, 57, -66, 41, -124, -40, 28, -125, -105, 119, 61, -27, 16, -98, 89, -29, 20, -58, 40, -104, 104, -68, -110, -28, 98, -62, -23, -108, 28, 122, -100, 106, -16, -36, -4, -2, -113, 24, -53, 79, 6, 19, 37, 118, -101, -94, -10, 86, 36, -39, 108, 71, -51, 87, -24, -120, -42, -60, 40, 89, -89, -10, -33, 26, 122, 97, 121, 83, -63, -88, -27, -82, 117, -28, 48, -28, 95, 120, 117, 16, -83, 48, -1, 29, -57, 80, -47, -97, -28, 51, -72, 106, 70, 0, -73, -23, 72, 89, -107, -111, 8, -87, -22, -103, 69, -115, 49, -114, -22, -49, 36, -112, -62, -125, -24, -50, 71, -124, 119, 103};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OSZMGMBDIAILSTZVYJKVVLCQIYGASNQHCRGDSHGGPEGEHZUTSWMGATOTSUHRAVXCINTTWJQHNUBPDIFWEJKDYRMXLDURFSCNHFREAUWURLHXUNVYBRMNL");
    tmp_msg_1.plan_size = 46846U;
    tmp_msg_1.change_time = 0.9444109862791962;
    tmp_msg_1.change_sid = 36872U;
    tmp_msg_1.change_sname.assign("ZSMXIOHGRSQUBPMTTSKREPZYENGPMITSSXBLRIRYECYGWPRVLVTWJJRICUDIUWDSKNZXQDPFLXAGNKJUAOSBDIDJVAFEJUUNPAZFHLERBXAZSWWFYHTCFIGFKKDTVBEEMUBULZSDZKLHYLNCLKAWQJNXJIXVRVNVQNBWBPTTADVDOWYFYXCPUMZQYVXGLOENCQCGOFXAEHVTGKHEWRAJJYQHQOKRGOJDOHTWFCBQYOSOMLMHCZGQUN");
    const char tmp_tmp_msg_1_0[] = {-119, -127, -12, -12, -76, 1, -21, -16, 14, -4, -22, -3, 16, -55, 86, -68, -100, -26, -97, 5, -125, 89, 65, -59, 62, -93, -3, 73, 59, -21, 52, -5, 42, -84, -29, 105, -68, 106, 26, -36, 99, -14, -18, -115, 92, 109, -48, -62, 115, -81, -69, -30, -119, -124, -37, -38, 101, -96, -99, -16, 79, -105, -4, 34, 63, -57, 29, -1, 26, -114, 13, 98, 96, 45, 43, 68, -47, -66, -83, 104, -92, -42, 20, 117, 79, -28, -51, 4, -116, -32, 28, -20, -62, 86, 116, 88, -1, 6, -90, -14, 95, 108, -14, -6, -57, 91, 66, 102, 27, -67, -23, 55, 98, -105, -1, -35, 114, 102, 31, 126, 37, 21, -66, -37, 74, 77, 126, -91, 8, -33, 89};
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
    msg.setTimeStamp(0.9569229109160803);
    msg.setSource(28633U);
    msg.setSourceEntity(228U);
    msg.setDestination(25450U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 15065U;
    msg.plan_size = 1315138625U;
    msg.change_time = 0.6987479753878761;
    msg.change_sid = 39247U;
    msg.change_sname.assign("TJWIQUVKNLGJSEHAQURGOQFOZGKOHWDYHDLXXVFXRWVVJCZJCUBKJYEJRWRGMLTFP");
    const char tmp_msg_0[] = {-16, 22, 94, 64, -83, -11, 22, -46, -62, 105, 106, 86, 115, 37, 54, 91, 105, 12, 118, 121, 75, 95, 85, 2, 113, 30, -95, -28, 87, 95};
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
    msg.setTimeStamp(0.7363027077032679);
    msg.setSource(54849U);
    msg.setSourceEntity(245U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(197U);
    msg.plan_count = 63073U;
    msg.plan_size = 2693256270U;
    msg.change_time = 0.09843265071910545;
    msg.change_sid = 29176U;
    msg.change_sname.assign("VNBSZUUTWPMEAEJTKEXRHYUJBIYFRYXVDZPKWNIMIUNGIQUQGQSBZPJGCYMVNPYSILKOARRQTRXHBTCQBFAKDJZHFVYRMXGMQLJLMYCYCBKVOLSGXATFOOEIGAUDJQOGRLNDWDXEQRBAKPZWGDTLMBSBNZHORFRYMFIGSVIVJZQHWUXVCWWAFCFJYUPCHPSEEHLDLVE");
    const char tmp_msg_0[] = {50, 112, 124, 77, -106, -25, -125, 85, 8, -100, -23, 6, 106, 86, 109, -51, -106, 59, 108, -102, 80, 3, 104, 104, -69, -70, -103, 125, 99, 110, 51, -75, 76, 120, 102, 62, -26, -21, 93, -115, -114, -6, -102, 80, -8, -34, 35, 11, 120, -100, -39, 93, 104, 8, -102, 14, 90, 11, 62, -64, -116, -84, 13, 123, -101, -74, -49, 103, -26, 6, 69, -79, 31, -95, -118, -56, 113, -100, -58, -36, -22, -10, -108, 6, 115, 29, 20, 43, 88, 68, -115, 0, -111, -43, 67, -90, 114, -49, -68, 119, -95, -76, -92, 56, -24, 98, -76, -33, -42, 81, 55, -12, -29, -43, 15, 42, 5, -73, -8, 59, -70, 47, -10, -36, -66, 65, 120, -107, -102, -86, -93, -105, -125, 12, -44, 71, 117, -107, 76, -6, -7, 27, -22, 85, 124, 14, 39, 80, -71, -92, 83, -58, -78, -21, -102};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XWCQSOYBJCIVGPMGERQPNGWNFLWCTKGHHMSLQMABPFCNKBLKYTGMSCYIJRVUBNEZSJXONAOZJCFXZFMPCJUCTY");
    tmp_msg_1.plan_size = 49875U;
    tmp_msg_1.change_time = 0.7098362384489534;
    tmp_msg_1.change_sid = 33207U;
    tmp_msg_1.change_sname.assign("GQHTSKNOPHMRVIEPBDDDQSARUKQFWMYLEFWGJCYFLKNWAWOXAMUTCZYNJIMZBZHPVLAHUSNEUYYJZYKSZPEELEQZCTCZALNDAVKJRIRJPVMSWHOAHNVTOQCTARVLQUHMWCEKMXGPXRBXUXBOXWCBBNDFTMMPJVFUNGIOKJNQZBVLGDXWFAWBSWJYGEHKIYDI");
    const char tmp_tmp_msg_1_0[] = {90, 61, -39, 123, -21, 50, -34, 108, -117, 117, 109, -69, -32, -110, -3, -124, -47, -46, -98, 71, -128, 86, 62, 24, -2, -64, 66, -9, -98, -122, 35, 94, 50, 19, 87, -50, -35, -102, -27, -94, 109, -66, -99, 30, -56, 113, 16, 97, 55, -1, -104, 102, 93, 12, -74, 94, 61, 97, -63, 104, 78, 22, 78, -35, 89, -45, 27, 43};
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
    msg.setTimeStamp(0.6601018559527552);
    msg.setSource(39411U);
    msg.setSourceEntity(228U);
    msg.setDestination(12222U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("KWMDLCZRJUABOCWHZLYOCEOSXUJGERMISISHGPLPHJQFWOYGUYKMAZRZJIYHSQMVKROBVGHXGNAFDWTXNWNYHJNOVABZGFDZMABNVTYEMUSIHTNJMZXKUYAQQMJAWCDVLEUYVHUXSNKCQDQNOJCONTERTLXKGFIIHEETABOXIVSPDKKTPZZSVLXLTGKZCQCBKXTGPIBQMRPPQERXDBVFELSUPFBTLYBWEVODDCU");
    msg.plan_size = 43102U;
    msg.change_time = 0.4421973686203544;
    msg.change_sid = 22719U;
    msg.change_sname.assign("JXTKJIFWXYXPRODVUANKDGCZVSPMLGRAQBIIQDODNEGMJICVPWBRYLACESKBTQRRTNDEFLWKWHDJBFRHMSFTGFQHEUUPKGWTZIYYQXAFAPXLDEICZVWWKCHGS");
    const char tmp_msg_0[] = {-18, -114, -6, -17, -44, 102, 119, 26, 84, -47, 19, 64, -8, -67, 124, -102, -66, 6, 87, 88, -1, 71, 15, -78, 79, 97, -16, -39, 35, -17, -83, -102, 99, 38, -103, -31, -16, 76, -28, 68, 8, -55, -68, -90, 0, 124, 115, 62, 89, 102, -57, -91, -25, -120, -120, 124, -102, 124, -2, -97, -76, 107, -25, 72, 108, -81, -69, 6, 60, -83, -101, -22, -45, -10, -38, -73, -37, -32, 28, -3, -69, 96, 80, 14, -127, 6, -42, -119, -66, 125, 33, -58, -2, 29, 27, 93, 27, 123, 106, 96, -56, 24, -37, -60, -66, -121, 0, -110, 42, 83, -121, -48, 105, 110, -120, -34, -9, -20, -29, -100, 0, -53, 23, 10, -43, 119, -106, -20, 65, -74, -3, -84, 94, 20, -60, -90, -37, -128, -12, 17, -91, 90, 104, -109, -105, -51, 26, 52, -60, -26, 9, -126, -46, -56, -17, 43, 57, -114, 112, -113, -1, -9, -43, -29, -107, 88, -76, -22, 104, 51, -13, -57, 53, -15, -26, 114, 75, -97, 13, 71, -81, 15, 74, 91, -126, -34, -86, -121, -121, 80, 30, 34, -9, 9, -71, 6, 40, 54, -114, -59, 28, -44, 20, 54};
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
    msg.setTimeStamp(0.1474410997347091);
    msg.setSource(44005U);
    msg.setSourceEntity(184U);
    msg.setDestination(36887U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("GHRWSDSHDOSZXFFMEPMGIHKMTCBSCROIESTGKVLZMQDUINWTXSUWEAWRCAKYEFFWVAMYCNDELJYBCQETAFLYVHHDGXGJKYPBPTUZOJKPGNIUFSVNVIGRRYKDVEQLOQZKNKBZHYPCQNRUXBKJJTUUGNBVHXGIMLIPROPOZTLQBBQWUSVQPSRHFIQSDUAXUFTPZAMIRLHTNYBDJEFZDJWOCBZAQZGHLYXJWOANEJW");
    msg.plan_size = 53106U;
    msg.change_time = 0.4097928362052795;
    msg.change_sid = 23370U;
    msg.change_sname.assign("MCKGKUOXZXNKTOPBZHTYJSANOHBYWIMYFYWQHPRUYCSEKXTETZLBHEARECTCJMJYLZPHXIVYOFHKEWQEOGDTQLUDLXSRQGVNSPCMELDETRQFQBBQHXUCVRKITGYFNXNIZYJAPPIZQDUOBADSNLJAQWJDPJAUFKZMNDIMFWICNLHZKCVANVXWZRJHBURDQJGSGPPGAWAUGFVFMXWB");
    const char tmp_msg_0[] = {11, -99, 65, 5, 42, 96, -72, 36, 61, 69, 62, -75, 111, 77, -8, 78, 94, -100, -103, 16, -51, 100, 116, -88, 81, -54, 5, -72, 94, -14, -15, 31, 81, -64, -47, 31, 24, -70, 16, -66, 81, 67, -85, 123, 71, -69, 82, -125, -8, 43, -125, 81, 122, -123, -61, -70, 117, -37, 120, 24, 1, 29, -44, 83, -45};
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
    msg.setTimeStamp(0.42924610515149664);
    msg.setSource(48514U);
    msg.setSourceEntity(108U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("GUYHRRTVXVQPZBFDHEGBDXOCME");
    msg.plan_size = 14146U;
    msg.change_time = 0.9070568753658559;
    msg.change_sid = 14130U;
    msg.change_sname.assign("EGUYLCDNLPGPBHZIETUZCOURFLGMNBWMZXEFLWKHGICSUSZYIKWCVXUVERLQBLXGCQOXNLTQAYERVAOXNBJNGPRDWGTQTRJVLIUHZKNBREBXSSAWIYEGPYAKJXXRVWHVDYCNJUZXFMRCTBEAUADMSAWWKTDFFZHHJPJYQQEOQMHQZJIVFSPMMZUKHDZBQKYACVVOTNSIWBOCMMJFTCQLKYDAAVPGNPOMFHFUSGJEPWDTFIDRKKXO");
    const char tmp_msg_0[] = {4, 41, -61, 72, 8, 100, 28, 110, 52, 85, -77, 64, -120, 94, 74, 65, -38, 25, 114, 9, 50, -117, -17, -118, 2, 41, -93, 28, 41, -3, -67, 26, 108, 23, 57, -125, 15, 8, -128, 79, 32, 81, 120, -67, -95, 12, -94, -20, -115, -41, -59, -61, -115, 104, -121, 25, 109, 9, -110, -96, 106, -63, 97, 14, 38, -127, 118, 13, -80, 0, -68, 38, -43, 22, -72, -105, -101, -124, -128, -41, -77, -17, -77, 49, -49, -121, 85, -5, -25, 36, -78, -42, 13, 65, 51, 48, 12, 113, -22, -128, -97, 69, 24, 112, 19, 1, 103, 69, -87, 48, 115, 108, -64, 41, 100, 74, 44, 57, 32, 5, -128, -111, -127, 92, -124, -35, -6, -13, -23, 22, 52, -120, 121, -110, -95, -30, -99, 124, 58, -116, -8, 75, -55, 16, 122, -17, 6, 82, 87, 18, -41, -76, -78, -7, -106, 65, 103, 71, 65, 31};
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
    msg.setTimeStamp(0.24929037217882244);
    msg.setSource(62710U);
    msg.setSourceEntity(17U);
    msg.setDestination(40168U);
    msg.setDestinationEntity(139U);
    msg.type = 198U;
    msg.op = 55U;
    msg.request_id = 30492U;
    msg.plan_id.assign("FWMEHIWGYVIVUHAEVJLKFKJXHUSZGSMKUVXQTNCKNHYKPNLSEKZSTQICRBQNBIDFLRNJDOFRVMWTJHZVWSLBEOM");
    msg.flags = 58844U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 185U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BOFUAWVNTZPZCGHEJDQFFLDHELKFUGVKJGXYMKKMQESNMTADVXRRWKUYILZIWNFXIBDWJQEUZYHPNTRNXINGRTXCOOMXTDGSICZJJXAVGCSBCQPMOVLPDQEGTSSFEDCBODLVJMCLPOPOOWVYFASHUJHVGZYAAJKRBYOVELNW");

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
    msg.setTimeStamp(0.6965346837984113);
    msg.setSource(2084U);
    msg.setSourceEntity(61U);
    msg.setDestination(61157U);
    msg.setDestinationEntity(219U);
    msg.type = 202U;
    msg.op = 56U;
    msg.request_id = 54072U;
    msg.plan_id.assign("HFZWCLEVZTRDOKEVGIOUVIPWAPJKHCNKMFHIBEQIFGGQDLIHSXJXTGYDIBSNCMJCFNRYTSRLORNTYNKVEJQLVJUYOXTLFIYMQCQWOAEJZVRIKOGEDDZVRDSTYQKSSJGCDALEHHXMWUYKHAUNFRXUESOUBLJWAQAWJUSNGVUYMEBWMHTNPFLKGKNPHWFRKPUMIAZPYSLZXGAOMRPODFBJYA");
    msg.flags = 22284U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.5878489257668785;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EQYWQRTEPQROUDIAJBBROEFBKLIVHSCBJGBDTTHCKCPXQHXFGKZXOTAMAGVEZLLWLNBDYDPMXMAOL");

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
    msg.setTimeStamp(0.36157474589650884);
    msg.setSource(23990U);
    msg.setSourceEntity(28U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(2U);
    msg.type = 198U;
    msg.op = 219U;
    msg.request_id = 47429U;
    msg.plan_id.assign("LNTQYKOCZIRYOSGQIOBWMOWGFPJLSVFETEHKTUSCKCCFKDSPNPKACPDYVUSVZZPLHZWWFIJHADRMIXYDWIXUEZQDGBARMCEINEUHXVIRELITNPPPUCJFJDKNGMZMONXFJWSBUQSQPAWNVTADDVOBYHVMQZMCVAZGJEROYHEGAXFWORQOZKVHBTMRTCXVQHBIAGKLSPWDTHYJUCEBXYFLXKMAOUYFLZJSLUGBADQFGLRBIT");
    msg.flags = 48507U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.5002274009404769;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IBOMGHOXXWGNAIJJPGWHFOOUKOHUDJGZWQCQSVHRLMOUZYYTJHDSRAIQAKZUIASLRAQUMAKNXSDEZLQMZADSCFSFIAVEPNCBIDHNRJNEYGJCPQNTVNJHFJQKSXSZFKVPVWKVTIPWMTRQPUANTOXMYBQWWLBRLHREEVAOYBLFKFHCPJXWIBEYXRMYEXUF");

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
    msg.setTimeStamp(0.6094626641221271);
    msg.setSource(19228U);
    msg.setSourceEntity(157U);
    msg.setDestination(28702U);
    msg.setDestinationEntity(201U);
    msg.state = 12U;
    msg.plan_id.assign("PULWMQIGLVVCGDGYAWDITHZOTZTQSTHQOXZIYPLWGSBVAYVPOYFYWLBFWKNBQOINXKLQCIOPSNOPJXZALNRGTZTRZUXEKMLQABCDDEUHSDFYJUQRZHIJTUDSPJYBKSPCAXAUEXBCCUQUMHJETHLPOSKHGREJVHWMDZNDMKCUYSJFOXZORIFYDXMAJKEMIISFBVNLFDRVNFBVCAEBKPXWKWTPRXB");
    msg.plan_eta = 1614492310;
    msg.plan_progress = 0.17374455541945855;
    msg.man_id.assign("RBDVOCDATVQTFBQXEGEWEQFIPKQBBZ");
    msg.man_type = 10590U;
    msg.man_eta = -1078982307;
    msg.last_outcome = 114U;

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
    msg.setTimeStamp(0.49964968192906356);
    msg.setSource(23840U);
    msg.setSourceEntity(37U);
    msg.setDestination(31882U);
    msg.setDestinationEntity(154U);
    msg.state = 198U;
    msg.plan_id.assign("YINEDJZOTXKBDTNCCISSJQPALLXHOQBBHMUVQBYIHTCGYXFXPDCCSODZYPMLRWTHWRUALMDUAABFJIBJYVFPWHNMOCBEOTQXQCMADINGXJRHNAWTTRPBSGYNUGVVZFZCOIAYNVIVAEZMCPGVVEFXNWYRSPU");
    msg.plan_eta = 166800382;
    msg.plan_progress = 0.011319322050731717;
    msg.man_id.assign("WFOHQLGXFDMUEECJBQPVUMESLNRIVJITBPLNQBGNYAKTKIOAYPYVZSXDFUSCILKSCPIXBWEWDENRGNBTALQOVURIKUYAUCNKUBTM");
    msg.man_type = 23180U;
    msg.man_eta = 490696587;
    msg.last_outcome = 171U;

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
    msg.setTimeStamp(0.31628277090781354);
    msg.setSource(8666U);
    msg.setSourceEntity(124U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(19U);
    msg.state = 90U;
    msg.plan_id.assign("KMPBGLSWWQGEOHAJRKTZNKWMGUIMWXBLLBPCTFZAUNGVKOPCFMMSZQNYLBWICLRMQUDWDNBDOGVOWZJEKYEDSADMTTQNNXBSIUBCZV");
    msg.plan_eta = 1601272122;
    msg.plan_progress = 0.5668313067632964;
    msg.man_id.assign("QMXNOBTYAAIKMBSTUHXKGVAKEMJMTHZLILEMQCWJMISRZHLROYKMNIZANLHAQPCNREYBEDXKSXJHZVRGWBPXKDTBRSGFXWPINUWYJQOWQXJOFUYHWLCSHCGPJOQRRALVGUTDFWTPXYZFVJBUVDZOBTIMXLARVNLLFDPQYGSICQCMVFTNCZVSKDQEJKWTYXFHUCRFOPAWTIEIEPGE");
    msg.man_type = 21278U;
    msg.man_eta = -859259030;
    msg.last_outcome = 33U;

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
    msg.setTimeStamp(0.8361133150246242);
    msg.setSource(26215U);
    msg.setSourceEntity(133U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(42U);
    msg.name.assign("QSJSQOPOENXYGUNQAIJIACBOCULUSHAXCEVJPJFZMUESRUOPHWQZQYXRFFGXYMYKTYBNGQFCOKLGAFHUGRMRDRYDBNCNDCKIACUJB");
    msg.value.assign("QTRCMBMYCNHFJYHTLIZWDILJRMJHUTIDTPAAHMKTPZFVSDQCSQCVSYBFJOFMOZBOAVKOVERZXBODLBTVEEPEYBSAFUOHLDINEDTVBRDAJKKGYQUDWLJXVCQKSSUWJNUDYXPIFMOBCAKXLEGWXJPGGGN");
    msg.type = 251U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.2763011805368182);
    msg.setSource(4379U);
    msg.setSourceEntity(92U);
    msg.setDestination(24245U);
    msg.setDestinationEntity(203U);
    msg.name.assign("QLFRLCNRIVAQHMXHXAHQYCCXTEIDTJZKSGJUKSGOVCLVYBSXDPYHHLYFZPTSOQMUMNDACXOSGWNBQCWUVKOCPOIQYZUQKHIKGEEXWJCCRDSIYEZAEPPBMSHTN");
    msg.value.assign("RQONBEMQQMLCRQACHBJXBDWRNNMKZVRIWTJMFCTUBIWDVYTHTQIYFRNHELFVCAMAVOFYUBEZUMPGDUUEDEZRBLYJWAGEMXEQRIIQFJCKKXRKJSZWGWSPFKIRUCYMTTJSKSKGHDIPLBAGZLXHFZTJPYVVTSYTAFLBWXYXNPOFDQXHUULYQHNXBJFILKPAHOZVGZAMQWCVNNKEKDLEXGORZAOLCWTMS");
    msg.type = 89U;
    msg.access = 184U;

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
    msg.setTimeStamp(0.7984497467337955);
    msg.setSource(4014U);
    msg.setSourceEntity(29U);
    msg.setDestination(2601U);
    msg.setDestinationEntity(174U);
    msg.name.assign("EPBLTVEJGQLPLCTDKSOWUHRYOZBBCUZCRGDEPSUYSJIJFXKELBLLNKJHFM");
    msg.value.assign("OMXWYWCOYKRWBIRBMSMCKHCKDVBVSWDLPRERFJXDVHAOQCZFPLFKMRGAYVTDZHYTAWWZTBBAMNHQICVYUGCBVJPLLNRGPDYQQUTAAZXQTOGNNUUGAHVLTJWRPUTZYQMTKZDDCAZHESVIYIFHUXUSKHNEPOKREYHREOCXEINVCIXQTJNQLMWIBGXJLLOCSIJFSJWKPROPFNBESSKZGLAJOBSZOFG");
    msg.type = 96U;
    msg.access = 84U;

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
    msg.setTimeStamp(0.5437793329218443);
    msg.setSource(25271U);
    msg.setSourceEntity(79U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(77U);
    msg.cmd = 83U;
    msg.op = 129U;
    msg.plan_id.assign("GPWYNYFONGQQZXFNESZQRACTFLKEHGEIIURYCIMGOCEXLFOZSDFWTQURKBEDCPSTAMRGBJNAZOUOUYOCGNNEMWFPATTHNPBFXJHADULHWJYG");
    msg.params.assign("QKADJKVOECJNUOSXHUTSNJWFSIMYTQDZMFKWFRKLUOYGMHSEAMKWYAZMDXVYXFNNPOVLXVWCJPCEKRCIYEXCNERXTIALPNSHSVEGRSLCFAZPEIXLHZYWBCCZGVJWRLENUBDQSJZQOLBKWGCOZHMBDSTOGMCFPRVGAFUAEFJSWTDYUBPFXQGHRBTAQPPOTGOTIORHLIIJZZAQMULR");

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
    msg.setTimeStamp(0.9398307467597666);
    msg.setSource(23983U);
    msg.setSourceEntity(220U);
    msg.setDestination(51032U);
    msg.setDestinationEntity(196U);
    msg.cmd = 35U;
    msg.op = 20U;
    msg.plan_id.assign("JYYSGALYLBIGMVNCNNVNWFIJBECZNZLHCGEDEELGTXTPZCBSTXJNRWSDXQVWBRFOINDJUYZWORROZXMQFYCYVKTOUHFHLSSWQSGPXPFVGDJCOLNZRQOPFPGDVDKOSKQUKEAKCHZML");
    msg.params.assign("RNFHTUBVILGMLPLBKGWAYGDNJTJTHOJOAVCDHIUVCZBXBVFRSGVYDEQKCAWACIGPMNRADJRSWRMGMYQPACSWSNQKLZUHQQLEUHKPJBBPXKQHMYITDWVDPZLIQNVHXZJWZWETFSJIUGXRCHYDSXJOBHRVXAXFOTGSCDMCPZROCXOPYORTISDBNZZVEQZJIMLPYXGRUSWEYGLAOKNMQITUAEF");

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
    msg.setTimeStamp(0.2890141042088711);
    msg.setSource(46824U);
    msg.setSourceEntity(11U);
    msg.setDestination(17411U);
    msg.setDestinationEntity(240U);
    msg.cmd = 115U;
    msg.op = 17U;
    msg.plan_id.assign("XOOMGZPABSJTTMMAMHYTRLERUABUERTKZROKPVYSHTBWU");
    msg.params.assign("HTKYMAQEEWDJOBKXHAYTARFEUJTMUNABLCUFFMTIZKSPXEINJXNBERZZSPISYEVBRGCQDGQLNLCUWVJUMFSDHFKCIQTMFEVZOUFNEGTQYZYMOZAGAQWDDOWVMCQCUGFOCCHBFIIOPOLBRMXMKXYNJHSRSIKYKORAIYUQLGFTRBDEIPXNPUNTSYDMZAPTGKLPZXJSVOBRRZKQPSHCHVCLGAHYWWJZHJXVLBAWWBXLW");

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
    msg.setTimeStamp(0.5323215009526081);
    msg.setSource(40166U);
    msg.setSourceEntity(65U);
    msg.setDestination(5743U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.0036240533711791034;
    msg.lon = 0.4470355424297089;
    msg.depth = 0.8856043020665239;
    msg.roll = 0.8294935421536208;
    msg.pitch = 0.5930026211507917;
    msg.yaw = 0.5095782251625963;
    msg.rcp_time = 0.07495493317235002;
    msg.sid.assign("SQESNMCPXXZSUXZURJPFDBJVQUYJDBSIZAPKYYFBJFJCVHHEYQOXOCOMHDWHGZXIZTJFCNOAPCCWEYWPIVLFILOAOYFLKRMEKCAXGYGDVIZBVVSNLOWNKSKBTQAAVIMDBGIOZGQHMYWXCRSWNXSBDLUUKDEQPKNWHTTSPIGUHTBLVMMEZTJGRDWNALSRQWIUOLJBRYPMNFEOVRKDAWRTELPAGGZUZKGXNCUAHHVMHFFE");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.05207853349026703);
    msg.setSource(50716U);
    msg.setSourceEntity(7U);
    msg.setDestination(10564U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.03128525737876797;
    msg.lon = 0.8781520907454452;
    msg.depth = 0.8502873359762219;
    msg.roll = 0.9211214304753461;
    msg.pitch = 0.37102007849769447;
    msg.yaw = 0.06247817129175626;
    msg.rcp_time = 0.28271692573173524;
    msg.sid.assign("CISJJPDXEOAQJHKJCDVYEMCOSXFXFUUWBPOAJRXVREGPLLIJSTOOZSKRTRZHHLUOORJYVLVVAPIPWBYGHALBZJPAGRVPFCGNLMQIFDIYDAGUQLENNWTFYXHDCYHLZMUBSIAYZULWDHWCRSTKZUHSMMGCASWKQEFHANCNWWZQPZFPNWRXHBNCONBKWQOUQXPFGEXMYZJDDKJTEBQYSK");
    msg.s_type = 240U;

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
    msg.setTimeStamp(0.538052962420949);
    msg.setSource(600U);
    msg.setSourceEntity(57U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.9182051758187492;
    msg.lon = 0.9959927258771795;
    msg.depth = 0.9474206214244493;
    msg.roll = 0.4775379994180434;
    msg.pitch = 0.6015195356380065;
    msg.yaw = 0.029314197216708138;
    msg.rcp_time = 0.32074852030612844;
    msg.sid.assign("FFBHVGALVXCNSXLBYXDEJXYWNWRHQCDLIQJSQPTNKCMDZGPTHBWHOOAZSMZNTUBYRAPUZENESQQNWHVSJGNDVVCOZNYHYIBBUVHKTKRSSGKPLEQMGWEQOUEHDQGISJBACOMZIOMVDRWKMEQUJGYPDFLLIYINJTKIEPFDHXUXGAHL");
    msg.s_type = 68U;

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
    msg.setTimeStamp(0.598741170855591);
    msg.setSource(23629U);
    msg.setSourceEntity(78U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(197U);
    msg.id.assign("TWTEXZXYNLFJAVYKXMKFXLDSAZMWNTEALOXVLASBTCOJMTHKWGJLBNNKJCYVZROVYCGPVEHHDYXVOZSLJEZRMHNGCZYYKEPNBQUXCZEHRYPERMKJSNQKWALAFUCSDZBCSSNIZPFBWGTYUOJCIPRNWSOSRQZRBOGTDEIHKHOLEPUCVKMHWIKBDAMTADUUOUGITJPRJRFDFGIPDVPWMQFCIVIQGJVQAYFXBWUQGMIIMHDQRTOFWLBGEA");
    msg.sensor_class.assign("VLQZICHHXLTERKIPJUAULICSFBSGYMZJPDO");
    msg.lat = 0.9419453904908036;
    msg.lon = 0.20016353219263328;
    msg.alt = 0.03357974374193384;
    msg.heading = 0.704838725500167;
    msg.data.assign("CNBSRPEASTMFVZLYBARIEJVVSRZEIFSJTQUVDRNXOSZQBCCROEFQHMINHIZDPYOZYCNRIDKFIAWXSTKCDEKKPNMYOBMJNTEAVJJOXPOZXQVAUJPCXIYINXHZUHLLMEGVUMTJVHUDOYMBWIEBGRQOXLZSFWBKTPPQEGXBHDTTFGNQQKURYMUXMTJFWZKWRUXRZGLQLDKNJLBABHOTDWAUALIAFHVJSHGMPSPDWUGOSQAYWWC");

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
    msg.setTimeStamp(0.3493975980108073);
    msg.setSource(957U);
    msg.setSourceEntity(218U);
    msg.setDestination(63599U);
    msg.setDestinationEntity(1U);
    msg.id.assign("DLMNSKXBDCIZPAHYVPYJQPOMIFIMAFOUTQTTRMBEPFXWKLJAIJJRMLQUHGURQPCXCLHSKJXAGZJOEOZLDMOXFDSOAPVUGQHSVFBYTUZSGOZRRYNPUYEHIYHGLRGNPBBIAHDEDKXDHCEMECZLRAKITGRVZGGDWYRY");
    msg.sensor_class.assign("PELKANTLLBWKVGJDYKG");
    msg.lat = 0.42552183846722846;
    msg.lon = 0.2902670167051822;
    msg.alt = 0.697758076425227;
    msg.heading = 0.9018116365533096;
    msg.data.assign("LGMTSJNNWDMWBKZWTPURZZSQSAWLVCSYHIOUDRAPZXUQXVEICUWK");

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
    msg.setTimeStamp(0.3136339626215404);
    msg.setSource(40194U);
    msg.setSourceEntity(186U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(71U);
    msg.id.assign("JCDBVAHPTKZYNOSFAUINXLPGCVPNMDGKQRPQSVFYOAOLZWJFMZTIFCSSNCGEXMNCUHMHMHDUNMDQPRYKEOWSCLRKPGXFRBHYWHYFBSKGOZHBJMNWEBLYEOSBCGZSUJWBENGIBFTWALQBUUCFDPOEPEIDDDFEIRQXTGIKRYBQXSHVGJEVQ");
    msg.sensor_class.assign("TAPSBBQTPTZQYHFMVZVIACPKWBTXEMNLKUYDPNSRLZBJVDMUOERSIGQXVJKGZXJDRNIAURECQIFWHKZVOPWOFBPNIWNPOUQPIWOJECESXLECDTWRVEKARULQPFNTYSQDYWBGCLIYSIDQNGWMLRYBWAXNEMZUDZHHGJKNCKSAOKSTBXLL");
    msg.lat = 0.4600840810357312;
    msg.lon = 0.41619870439433215;
    msg.alt = 0.5088582435913468;
    msg.heading = 0.35023897813387084;
    msg.data.assign("HMHEJXSNADBXEKCGSYWIGNRYU");

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
    msg.setTimeStamp(0.6558083675792815);
    msg.setSource(4374U);
    msg.setSourceEntity(242U);
    msg.setDestination(47389U);
    msg.setDestinationEntity(112U);
    msg.id.assign("FSBMHFXGGWBNNDMVXYUIFCOBNOWCBXRAKPHDBYZBNDOWFNMRLELEDXWRYDHLKKXSVTETPVYHIBUSLHTHDXKSZLEWGIJBRXIBZCXSQIQZOIQZYPAWZRKNCVOQEPGFNUIVFMIOGPHWHVSBFNTLZYTTFMQFPQKXAOGVALTERCZIEZAENIJMCATLWKXAWDDQJUOVGDMGZQNUJAMODJJVCSYJOJTAQYKSGLHHUFRATMQPPEUCYYLPC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YINKJFZUMQPROCRBMWTILNSDRPWGCFULPVIXAUJZHGTKMOAXKHWDCWMDGQUQYRDWAKKNEXHXSAFBFRUPBCOMXLZRVQXHLAIJBNIO");
    tmp_msg_0.feature_type = 11U;
    tmp_msg_0.rgb_red = 78U;
    tmp_msg_0.rgb_green = 142U;
    tmp_msg_0.rgb_blue = 151U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4904349589260081;
    tmp_tmp_msg_0_0.lon = 0.33669059928122713;
    tmp_tmp_msg_0_0.alt = 0.8318282021398109;
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
    msg.setTimeStamp(0.09128851736796006);
    msg.setSource(40270U);
    msg.setSourceEntity(19U);
    msg.setDestination(29805U);
    msg.setDestinationEntity(229U);
    msg.id.assign("RSHGSLMURIXDCUEPXWPIHXIABVCHBMLYHDGYLADVAHKNRJPQPUDYWJTJTJYAGPUWMLUPDJIILNCGVGMXCOIETIYHXASBKSBMUBRZQRKFTWMGJVQAOBNVCKQLTSSCVVY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HJNMVZDCTBBZPTZMEGKSWLNCDTPIDTIOODQETMSCMRGQXUQRBMWXVKFFVYWTLFGCSEJECOQKSGXVGCEFQWRVHEJAQTLCYUGYBHGQYRLISYFSLJCBUBXAVIBJRRZMQEJMKAFDGPHPHONOYKNPSNDZSKANNQPBHDFROUUPTSVIBLZJ");
    tmp_msg_0.feature_type = 234U;
    tmp_msg_0.rgb_red = 31U;
    tmp_msg_0.rgb_green = 249U;
    tmp_msg_0.rgb_blue = 105U;
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
    msg.setTimeStamp(0.15726745871027714);
    msg.setSource(35262U);
    msg.setSourceEntity(161U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(181U);
    msg.id.assign("HWDHYOTMWJZABDGLVCRMTOFFNXPEAXQEYAGRXYIMISBKFSHOSEMQKEQSWKHOXHPVXFSATGGBTFDRAHNDYCUJDTVWLOWAJZNVSHCZOEUQJRROTAFNFMGJGKXBKFKTNBUARXLWXDPPSYJBILRVLIEDCZEQFCQZGGEDUYSBBCJWGJRAPSLNLMGYCZHHHBJKNIKMPYNUMDELTULZVCVOTXXQONZZWKIB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PQNPUTDHOZXBFDSXRCYUAPBSFEUQYGEHAEBHINHMURZLIJUMWW");
    tmp_msg_0.feature_type = 49U;
    tmp_msg_0.rgb_red = 242U;
    tmp_msg_0.rgb_green = 88U;
    tmp_msg_0.rgb_blue = 149U;
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
    msg.setTimeStamp(0.35822616388405437);
    msg.setSource(19783U);
    msg.setSourceEntity(45U);
    msg.setDestination(62315U);
    msg.setDestinationEntity(254U);
    msg.id.assign("WBLGTNYWBTPEUBXNSGZEGFSHFEFHYNUVTYBNMTMRHVHVEQIICSTSRQBFZJGHGXONOPOZWLDAWZDJIYJSCXRCRDE");
    msg.feature_type = 221U;
    msg.rgb_red = 5U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 204U;

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
    msg.setTimeStamp(0.1785848442193213);
    msg.setSource(27082U);
    msg.setSourceEntity(96U);
    msg.setDestination(29949U);
    msg.setDestinationEntity(176U);
    msg.id.assign("IJPXZATTSTEJZQJWNKMREYWCFFLXGSFOPEWQZJYLJBEVAKBPQCHUILDSZAUTOVCJHIEPMPJHVAIMXCNLLNWHHSDUOYCDGYEHNPYZRBTTRRMSQUDGXBWCLEYYODFUDTVRZXMLRAN");
    msg.feature_type = 184U;
    msg.rgb_red = 165U;
    msg.rgb_green = 139U;
    msg.rgb_blue = 19U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7325050445462995;
    tmp_msg_0.lon = 0.03661661275963857;
    tmp_msg_0.alt = 0.7545220920312926;
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
    msg.setTimeStamp(0.31549847907646655);
    msg.setSource(52504U);
    msg.setSourceEntity(168U);
    msg.setDestination(5149U);
    msg.setDestinationEntity(158U);
    msg.id.assign("RBPJLYWKJEIVJYVYXZD");
    msg.feature_type = 36U;
    msg.rgb_red = 162U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 99U;

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
    msg.setTimeStamp(0.38824214203605345);
    msg.setSource(58018U);
    msg.setSourceEntity(47U);
    msg.setDestination(43252U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.09096314773746061;
    msg.lon = 0.29744429627054403;
    msg.alt = 0.33017312057800596;

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
    msg.setTimeStamp(0.24227681131132317);
    msg.setSource(44176U);
    msg.setSourceEntity(71U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.8601337547077091;
    msg.lon = 0.07971248082431637;
    msg.alt = 0.49550661118259853;

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
    msg.setTimeStamp(0.6580088512132326);
    msg.setSource(58692U);
    msg.setSourceEntity(57U);
    msg.setDestination(37229U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.5330401830860452;
    msg.lon = 0.917115748289254;
    msg.alt = 0.26625971382772384;

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
    msg.setTimeStamp(0.8722679092569054);
    msg.setSource(28754U);
    msg.setSourceEntity(199U);
    msg.setDestination(54458U);
    msg.setDestinationEntity(247U);
    msg.type = 147U;
    msg.id.assign("GAZHRWJAUJOEJQIEAFZMEXYKEUMWOFJXTVSTXGFINQMKLCLYSQSKXMTJHTZGBFPJOPWNKDJDMZECWOLNEQQURVVQLIPLDGGHNHQIKIPAQTWXCYSLUOAQWCODHJGGVHROXNBSNFAEZHBRUTFUJVPCSDZOYPEVUVMBYRVDBFMSTCBXBTHYFILLBAYWTBDNSFDLCZFARUKHBVOCELIN");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 45U;
    tmp_msg_0.value = 0.2978592964363793;
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
    msg.setTimeStamp(0.9894772107796469);
    msg.setSource(16711U);
    msg.setSourceEntity(4U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(246U);
    msg.type = 43U;
    msg.id.assign("RLJKXWUWKUKKTUYLAQXMVNAFNRFKSAZUESKXDPTYLBOEJIHYMCEQFPONDWOAUORRORCHZYCGFQGDAVIFUCXYEZNTJDMTIZBBHYBOALKJZQWMPZWSESH");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 44372U;
    tmp_msg_0.status = 198U;
    tmp_msg_0.text.assign("QCVUJYOZZNEMDEYFOFVQTTHQMYRXOQXUQKYAZOHUWSZZHYKIJRRMFJ");
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
    msg.setTimeStamp(0.39013820345745065);
    msg.setSource(45350U);
    msg.setSourceEntity(182U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(30U);
    msg.type = 79U;
    msg.id.assign("VHPRTCVUVPGPSAADHECBRATFMAJNQKQTOBZJUZUWYZCNEQHDRCBPXWHOSGGOLWTRJFCTROAMLTYLGFBNYTWQCVIHFPMWXXAILYFEIASWETEZKKIHSDUFKVCWWFNFRJRBKYJOGZUZEAHPPYLEYNXURIHQSIMKGJOGBVNAJCEEDXOZSXDQJUALSSVMRO");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SPVDOGUYKCFZNXACTGQCYJCTVIRLQKFUDBLNEVITUTHXKBVAENMYUXWITIIYZMXMRXBSBTGEXGNPLSBZSAFQZYNQNWWHHQRWDETYFNMRRGEGFGHECACEARSBLKHRDGYQEMBFWTRWEPOMUIDEQOOUGSZKKWFAOBNKZMTAFCOJLUIPWDN");
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
    msg.setTimeStamp(0.7434316703273846);
    msg.setSource(51287U);
    msg.setSourceEntity(10U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(171U);
    msg.localname.assign("WLZUFOFDQLGBGQERQHHCNLQDIPETPVJWVTTWMOMBNACGIDXLQUPKVXFEUMTSSCVEYYIBBXRJHWWIULOBMPETDZMFEIMTHIFDPZBSCJIWIKFCMEGOKXZVLTSVYUPAKIDOLAJZRUHSNRFNKDOZJCRMZHDZGNKLXDSCXYEYWGNVBSTUHRXLOYNRWYSPPVKVOUGLACJESK");

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
    msg.setTimeStamp(0.632451588911578);
    msg.setSource(7540U);
    msg.setSourceEntity(237U);
    msg.setDestination(7682U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("OPHWBHEZLRJVOHKLFADODUYSRUCHYLDFGXJLYGXURBCQZNMEQXAQRHKTLPNLICBDNETIVBUEWTEDVSBXWNJVOPIIHOBRECZRTTKOKDPKYYKGRDFUFSSMAJUDWILVVQYROWIZPV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JVLXYOWVJUTPDVPYQLFUEBGKGYRBCGQHXBRAXUGLDHNVORQYXAJSEXWIFCWXVGQPMNNTDDQHTBKNIOETFBSWSJKFZTXLSGMXFZRESRLJFAKHKAUCL");
    tmp_msg_0.sys_type = 55U;
    tmp_msg_0.owner = 49995U;
    tmp_msg_0.lat = 0.19040748212642078;
    tmp_msg_0.lon = 0.8950016456834136;
    tmp_msg_0.height = 0.5384122166832203;
    tmp_msg_0.services.assign("FUNDCSIHSJUROUEKSANZMJMYIXPGWFHEKQDBMLJVUAKSTJMQXHLBPFNOXGBDYFLYPZERMUCEGWTPPPDAVNCKNGHUXMUXJZHOFVUKYTQIBSDTYZJN");
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
    msg.setTimeStamp(0.6910849422858056);
    msg.setSource(47387U);
    msg.setSourceEntity(84U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(143U);
    msg.localname.assign("XXSRJUSRVTQFGVYKYDZWTIOMVPOESOUGASVYRFJEOBRZYCZQHAXQXVPHXOSOBVYOPFOYAPIMPUUBXINQGAXSWALHIRCVBRTFYGBHKAIDGYLVNZNIKJSTEDDEQFVCERFTADWSKSOETZVUETJIFUMUPHJUMUCTTIFZHIWKHWDZAX");

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
    msg.setTimeStamp(0.6810761736883263);
    msg.setSource(505U);
    msg.setSourceEntity(130U);
    msg.setDestination(23367U);
    msg.setDestinationEntity(89U);
    msg.timeline.assign("AGDASUIAHRZJYPJSPQXTQKQAWYGYIHCD");
    msg.predicate.assign("LFUGHHEEFJUASVHEMWFCAFEYCHTMDUNZOQHFXGYIAYLTFPCPLSRIZWJMNXXTNZDEOHTWRLDFGBTXXTIZQQRQFKVQOKNWYTGJNYZRQCIKUPIZGUBSNKWBPLMOWAXAGILCADSOIBPALKRGLBQSQWDBZHVSQYJDJVDYEKUOYOEZOVWIJQTPSAPZPIUWXMB");
    msg.attributes.assign("TDQRTGQBKZRIIGQFDPEXTWYSTQ");

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
    msg.setTimeStamp(0.5475107756122081);
    msg.setSource(17638U);
    msg.setSourceEntity(201U);
    msg.setDestination(45566U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("YRPRVESIUXZQOCAIFKDZOMPAYUYPXSNWUJBEIZVXZBWNG");
    msg.predicate.assign("MZLJZYVVHXCEGHQGCGJPQQZPSRBUUPPVRCJMATTOFXMHAOTNSZBVIKNIDFYXCYMDJTBODSGAIXTECOXZWYAPPSILYIOQVRZATIIRTEPHTQWSEQREKFWFUINPJHNGTKAFEFDDQLCMFJYUAFUOLKNWSXDDDLKBVWGSDWISNBXUVRLGVBGRWNIWGBQEWHXVNRJUUCZEZUOSNTNBYZHRE");
    msg.attributes.assign("LRBRCIPFAOIGVJGTVVSDMYHWHDROWJEVJQOWNBWXKSAYXURTGZQABZDPMLIDOUPRXVNFAVSFFBYSLMLXXKPCDUBKTCEILCQIWVQGYFBPARTZRSHXUWKGZYZJNOZIEGVFHCZJYTUDZUJHMNECMUVFQNTXHEWRBLQOKKLUNLEIXCSUPEBKCGTMRQAL");

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
    msg.setTimeStamp(0.7523504712223975);
    msg.setSource(64245U);
    msg.setSourceEntity(21U);
    msg.setDestination(40508U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("AJWAJGRVDAZBLDEVQOPTHQGRPRUIXKDLBQFDQJLVWIMRYAHYCRRXUCWCOTLEWTRH");
    msg.predicate.assign("KZSACYXVIWMETHRLMPDXXNRTBHQQLEHGQTEWCWCSDJVZLIVMRSAMJUSKRHYPWOPIUQJFZMUMPOTEUCGAQCCUOKFHFKILPRZSTAOYDJDZRLDIXOBBBAWOGZRASXLPYTNEZLWLFYUMJFOMZTBLAABKWFPVCHKHVDENXNKNIQITGVFSJEQP");
    msg.attributes.assign("XSLISEMJAYAQZVNSRMBUOLPTNJAKYPHCCFTPNJWEXPICTAVWZVUWAOCMCZDXYSYMVBRKHICFSSFEQXGOYWXNGKPDSBUHFWWDYHDKIEWJBNPXKOMZPTQIRUNTNRLJEWXFAKVOJTVFMMOKKZJCZBDW");

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
    msg.setTimeStamp(0.9367579256239459);
    msg.setSource(5360U);
    msg.setSourceEntity(50U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(60U);
    msg.command = 241U;
    msg.goal_id.assign("KKTWSXSIWEQEWJDFYTANAIURSOGNSRREBAUXTPJCVMSBNHUNJIEDULCULMUMBGSWUHOFLTGOFVMCRPHKRPXZAVNCOXHXZSYZYCQINKZNQKSAGQTBDGTKDPPEHYFKRLDEBJ");
    msg.goal_xml.assign("EEBXRCOBHAGSAGIZBKSDENIMKDUNSRRVFPVUOXLQWYCVOKPQCTMFWCAUJYUZYLMJBEYOOPTXLXGOTLYDJFKBHQLPGNRQDCPSSYLPBFWQTDAKDYVWPRUNMNHQIIHQZUIZDTKTGMBAKBQAGLXRSVUN");

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
    msg.setTimeStamp(0.8129700893334265);
    msg.setSource(57564U);
    msg.setSourceEntity(228U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(52U);
    msg.command = 182U;
    msg.goal_id.assign("CPBVRUARBZHSDREBUYITTMPLFWQENRUSCZSURXBQFZMWNEHRNXOKHUGBARMULJIUTCLEEVPOHOEJOQDCZXYQOCLSODCWTPYPODFAAZABQIKVHFTACBAKGIDQTYGUJEVGIJMMWLUYPADNFDGXHVFRISQMVLFEROQKPCMWGPEWYHMZKDLKYKZLYOZBKESXCWYTHANSUPTBTKBJVAOWIXNNSXZYIJNDJWFSQLGJRVIMFXXVM");
    msg.goal_xml.assign("KARBNWCYSUGBWMETRCTEXYSOZJYCBTIVLGOVWDCYFONNARSAYNFMRKGOJBCXZUDSBXEFHYPMHCPUZMBQMQDEPEMOUKONPAIEVJXKWYTDWXFRHRSXQVWXJWUPQQAIWSBZPPLWAEIPBEIVLVGWKI");

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
    msg.setTimeStamp(0.4659514956587085);
    msg.setSource(41204U);
    msg.setSourceEntity(179U);
    msg.setDestination(53528U);
    msg.setDestinationEntity(107U);
    msg.command = 177U;
    msg.goal_id.assign("FXOZEVRYUSVXFKJQEHYUXREJMFUVCTCMWSNIACFAOBAOXFVFZMAQRCIYYLPNLKILPKCSISONEYTLXKJUWWELKONHAQUAYQYNZPWHTRDJWGRRZVDDBKNEMTTMRAKFUZULUJMHDTZBMUQSNEZPQYBOBIBMWMWALWTCSTRNDHEKFTJYHASFOCABBXVIJGKGJGBQBKHX");
    msg.goal_xml.assign("VJLEQGHENOLTAKLASEW");

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
    msg.setTimeStamp(0.5261920336851239);
    msg.setSource(63625U);
    msg.setSourceEntity(178U);
    msg.setDestination(28267U);
    msg.setDestinationEntity(36U);
    msg.op = 116U;
    msg.goal_id.assign("GJCZDLUTSXWRZKQZRVJLNMHUJQTQOQEDTKIBULCWQUJZDYZNCLBGSWSYWIFAOTDXBXENBGWFPFMTTJDCTZXIOZDWJCOLFFGYJXEMUMSLHQMUNKVFMLGHFBKZRBVXAEIWRYOMCANRSPCHQOLSWEVOCUGKSKZHHILVEGNSPIUYKFYTWSHQPAXBIEPFDQCDEXAOMDOHIBZPCVDGNAVNVFBPRWJTAYYAMAUHKQVJXHKKPG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZJZVLOYZOHWMYWDGPBISVFCEUWVGIIUTCULOUI");
    tmp_msg_0.predicate.assign("WDRCGNNZUOZILSGEGFUDVCUAXSKWBJVGLFYGXGWFINOUFXCJIWVSXPR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SVYUDMUGGHETQNEBIGDRONBURWKLLEKAZEBOZSFXMXHMMWWKZCGFPPCILIRGPXSVEOFIWPSRSSJYNJJNXOTAV");
    tmp_tmp_msg_0_0.attr_type = 192U;
    tmp_tmp_msg_0_0.min.assign("IZRXIXJQVCMLXN");
    tmp_tmp_msg_0_0.max.assign("YONLDUHMVVSEIDFCJGXWRNBQETILTREVGDONXABQVXAKPYUWZAMTLCPUFOEXRHCXZUTWXVCFCQQGXKVMJTSBMXZHSZPV");
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
    msg.setTimeStamp(0.23978285801255217);
    msg.setSource(40023U);
    msg.setSourceEntity(142U);
    msg.setDestination(48328U);
    msg.setDestinationEntity(32U);
    msg.op = 215U;
    msg.goal_id.assign("JIWSIQJJVZXMEFGMWAYJSN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OCWZNQZGYICIGJTIORUFUXADBDTRTKAAQFLMPATIUSEXYAYITSZSMGVLROZKQPWDJMVUZZTSWWQMSDQLNDANXZHCJGYMZRLBGBIEULNAVGBCVRZCFIYPVXFDIMJHHKNMJEFLJTVFGQCKGIPKSOHLRYJMNWROUMUYPWCBDOEXSKSREUXKBHEEBHXLPXXMDSVNAQNP");
    tmp_msg_0.predicate.assign("ADYEQMOXVURDJVIZLVYXIQPFBXZPLWOBMPXWWFYWSTUPUGQDHXCTOLHNSQCTNRKMBHGBRNZCXDRUBBZBNGHRQEVKMQPOJMOWNTHUWJDFRJKHDPIEUOW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FSSMKYLNENKJIELUBXTEVCMMPILXEUGDCONMVQFACXWQQNKSQKQFOJCQGDOERPRFPLAIPAVDEBQMHRWPDZBASNVLTJTYLFHZDCPDRUCIGUWYOIMTKIZGIBGYWLFRAXSTJMSOQCFPNLOVMYVRWFSMHIJCUHROGNZVUCTWXYJXKJNTX");
    tmp_tmp_msg_0_0.attr_type = 109U;
    tmp_tmp_msg_0_0.min.assign("TXACXXPFPBNEXEMZHNYIKEHITENKSWVBIFSCYLQTCHCRUYSLLPXGSPRDIRSHQJTRWQMJSZTOOOSHHBGUFOUFQTETNYWVJOQJZCNFKQGSFYWLSLECARBNADIUCQJPBIOXBRBJHMKVCWIZGOAFPVLYMEUOYVWMIAGMTHJRNCKPSIGZFFUMYPQBKMVMJPAFOVUPLJGRDBAH");
    tmp_tmp_msg_0_0.max.assign("XNGXTVGFEMCXAYIVWUKLSGBZFOMHLOELHXNMAFNUJRUWCSTCITZEFTHDBDNQCHDK");
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
    msg.setTimeStamp(0.7507255717041795);
    msg.setSource(50930U);
    msg.setSourceEntity(93U);
    msg.setDestination(62876U);
    msg.setDestinationEntity(228U);
    msg.op = 143U;
    msg.goal_id.assign("WMWBEYNISHEWQMZUWSVGXLECBIZEXJFLIABJTGURYTVADPQYKPROHNZJYVDAYNCMOQNKMEAAVHVEGOXLTCEAKSQNBIKITILHQPFJMZHEXJDCLNBPDWLSRVLZXGDIBWZZPFSQLVKCYZMTWMKTURURSJBNEXQKHLKRODFQOUTJOUITRCHVJWFFWYOIXDKXEBQMHRJGUBUFGXYLGCAIWADFUJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KOIWOVUPRZIONJKSLRJWQVLKQYDNDQINREHCATBXMTYRKLFFCADUEUVDDBJMLKZPH");
    tmp_msg_0.predicate.assign("NZRVETJVJGHLMPJNJBYFRNYHYHNTHAGQXUCYUWNLKUZCDASGWOBZKDJODIKEEWLSIZJDDNMITSAIUKCSLFCOVZXXLVBHSYEFRWPPGNACUGZTBLPHWXKTBXVFBJCERFZXPAWPLYDKBDCTZHSWIV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MPHXXQPCJLMVKHJFUADSSYYQY");
    tmp_tmp_msg_0_0.attr_type = 218U;
    tmp_tmp_msg_0_0.min.assign("QGKVSJVMLOJQUOQPWNYAICDCRPVHARBWWXSNKCUWJYHKXXHADBPEGGKIUMIADCGZJZQKZKUXTTMSFUWGBRLPNOFERGVCKHZKHIMDRTPDHWVUYNEUBKLABXMFDYRTRAIMSOWSGIHGFPCVAYRIFHJILVMOXILTTQAXSZVBPVETFCRNDNTXYOCYBXGMZNBNQLDBGYAPJFJBLFCSJFOUOVRJNZESQPUSHLQ");
    tmp_tmp_msg_0_0.max.assign("IVPSLJUVAYYNEEAXBCZIYVOWNHZRKIHKIBMUSWQQNXZDTOFGEBWJCAVAFGMDPOGBPBJCXNZCPQUELKTUEFPGRDKHYXPMAVMMITEHFSKYQCDGZODVIQOMREDWBCTKOHBGSKQFVCNRBJRRSFILKU");
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
    msg.setTimeStamp(0.27670994799130133);
    msg.setSource(20919U);
    msg.setSourceEntity(160U);
    msg.setDestination(15647U);
    msg.setDestinationEntity(224U);
    msg.name.assign("LBXXMUZEWTCGXYPKUODOBJXJUZLNPHEFXYJCBIZVVVXGWIIMHREQMMBYLWKLVEAPFXOWFRKWLXTWYHZJMRYLWAGUDZDSLQ");
    msg.attr_type = 66U;
    msg.min.assign("SFHQGBBNIVTMTWUHSAHPLEMGZMBQWQGIFOEHPDMQKXDF");
    msg.max.assign("DSWPEDMKTXYLNKWLIHNUVXZSLXRFSFZCHWZMICXANJYPUTZPUYDSGJX");

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
    msg.setTimeStamp(0.09539229381686343);
    msg.setSource(48948U);
    msg.setSourceEntity(233U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(152U);
    msg.name.assign("ROIWMMPTRKLTARKWJZDGDKQRPQDGSMEVBGYLZBELOMFUECPUNBRXGGFHWYTVBZQO");
    msg.attr_type = 216U;
    msg.min.assign("LBIJEKKMCJHYKFYGQVPXBRXECMOGTLYUPFUGILSTWEDINXTYEQZIFPVXNOKAODHEQNDCBNPSBZEGBMXSKTBYAPZHMCQGUJVFBPASAZIPHDUPTPEOUMFUWCAQRCJMXGHQIJZOTLDLCKNRMVNUWLADVNQAMJASJUHYDYQKAEWWVFRVCLRMNCXS");
    msg.max.assign("IPHJWBYSIKBCCHMXREAKTWICHQNLEXQJJVHREITLSFBRHFLJDATPTDONGMVKSQEEYXVJDBKEDUWGFWCDXJGF");

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
    msg.setTimeStamp(0.8054487455657441);
    msg.setSource(13475U);
    msg.setSourceEntity(123U);
    msg.setDestination(21389U);
    msg.setDestinationEntity(227U);
    msg.name.assign("UFPPNLDGWJMTHKJAUYOKIXBZDMGCRRCSSQKPJDFNRGLXDPQNGOGOTQSCVAYDYZMIRBWWXEUUNDTWVEIIQLALNTEOTLRXHPKPPZBGCMMRKQOACFYGBWHBSAZZTJUYSHFTCXMJAKSDYKVIZCKFFZAJVGLEWFEPOBOQXNJHCWSIQYJDLAUHPJZZRBGEBESVBZECRPMYTQVNUNAIHOUYVQYXHSHFBNRLGXKOUKLMQERIWCLTMJFAEUNTVDSXOFVIWH");
    msg.attr_type = 132U;
    msg.min.assign("CIFILRUOTWZKIWHYTUMMZNKFXMPIXJBCCYKEQXRZLQIGFVXEMNRZGDBKWPUZYWLGVDBRMHMGMIFCYQKLLGUFTOTCTPBLOPHDJAKEJEYXDAFQNDXTOOQQYAEAOJZNHALISHAVNWZGNPUEDBFVSQZVSVGBABVIDIDPMFXCHRRWHPSRKNUDSIOGKPAWCFYNZFQRSLOJUAUCMLCJYQXOBVSBEJTXHHJSAWEJNYZXVQBUETDRP");
    msg.max.assign("PKCJUQPEZSLOYSXRMDMHMWXNQOPVYLQBEUDWHXXPCXFZCFCNYMDVHPSZVJTRHAKKYHEEIHSKYAHTWQASFYLNPKKVIIOMRTHGAVIEGDRZXWDOASWAROBNJGWFRUTUAFSRLKPMVIFNGGQSHRENUMBCXAWNSLXVTZDQAIBOUVJUJPJ");

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
    msg.setTimeStamp(0.6827038519787147);
    msg.setSource(6381U);
    msg.setSourceEntity(173U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("OWIAWSQPQWOYMXEEXIEYWMQBHHJNZRGKVPKVYGSIOZBORHWIRTBBBKCDRMVPARQBRYRGMVALMIOZVDUMJKQWHCZFNXQSPFQDUFFUXENTOUYXRTRLFBQGKJXUVDZLMAPXETFHGWTCCJYFCLZVOBYVZCCZMTE");
    msg.predicate.assign("HAZJBSQYOBZLBHILTLEOJAYLOGBPFNTUMM");

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
    msg.setTimeStamp(0.0802398979029092);
    msg.setSource(46636U);
    msg.setSourceEntity(240U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("HFDPJMIAYOGRWHPNTOLGQRUHGPPCXBVCPFFNIBZKIOXMRYQFAAJDJQVOCAKHDGKZJNUEDDGIWSKBZEKYWFGJNSXPZEXLDSYEYTTSKMHUTXQVIWIUIYVUTMCEGN");
    msg.predicate.assign("GQXBBCFILTBXUXKFDSQVRMSULCAQIAHALOYKHGAVNZCVAQXLQYMOMYJMYDLSLBMLOIJJHGPLDCEZIUDXOWBFJUGHEGBKQRBEWYGRIXURPTGHWPYUTVPNWODNFQWBIKWZAELNWPUXSSXWIKTDQCTVYPHOPM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AUTAYLRISRFFDHOGLAHZVJFREQILVTSPQKXDWMJKTOBMADNLKXWVITREQBKFWFBEJVEVHNMBCJCWZSZAFCOUQDOBXDZGLYYPMIXGGCTVGYMOSKLYQUYIRDWVGWJUDPCPNARBUYXXSJNLSYHEFBTJMETUXEQSGKFUIHQPENWKMXDNQNABHTJOQCVNCUMYSLIICHPUGGPLWZOWRUNLCOIGCRMBKDJFWTHZOVHKMJPNBAPSR");
    tmp_msg_0.attr_type = 213U;
    tmp_msg_0.min.assign("UWZKKYTFDFBGUGJVRNQIMZMJKXCSRVGOQWDNMPHKPIMPKIXORYTYSTSSXYVPNLRACKTSPULQIYPPYCGRKBDUBXUIAQBAUIDEHQCCBJOZQGAXDZIHQEHCXJEXMDVOVELTWYJCTYSGMOGCSJHULLVWMZTALOBBLADTFYUIWBHJIEPHMNZZNMYMWLKTDXFVWICZHJOAPWQJTRJGKV");
    tmp_msg_0.max.assign("AQBOUVYBMXXYKXAILVCCFKPNZMDWVQQHPHPDEGQNIBLTEWETUCFNJNKCITGUO");
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
    msg.setTimeStamp(0.610125565107192);
    msg.setSource(23713U);
    msg.setSourceEntity(77U);
    msg.setDestination(12796U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("CBBNASEXYOPTECZGCTMHHHKQUFHSTGMBEGQDEOAKKJEMZZJBALLXPIQQKBUYPDVAUIRSOAPVLCGKMHJWZBFZTJTWQQOFAWPCMJRZDJSXLNZOURRQATKROOFSSLHRDYTXBOHDCGSVSZDXCYPEMKVKYNUXRRVIAKULKRMMNMIWTXPHTJAEFHVJUSJZPVGDDNQGULTPWCOWUFCGQSYJUFYYGNVLNINPYDWMHACLFWINIQWLXBEIEWGOY");
    msg.predicate.assign("FIGCUJGXVCLQJGVQZZ");

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
    msg.setTimeStamp(0.7524038463577497);
    msg.setSource(7293U);
    msg.setSourceEntity(73U);
    msg.setDestination(38741U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("XUGISKBBGLXCWVUZKCANLBDYNFMOIBXXYBMOUHOGMSJYAFUUMHFQUCDVOOAGIIZTNPKFTEQVIVTDSJRMDXWCF");

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
    msg.setTimeStamp(0.8733848226181413);
    msg.setSource(17256U);
    msg.setSourceEntity(149U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(4U);
    msg.reactor.assign("HHQFMABTSOPDDSPKJENVLJLNHDW");

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
    msg.setTimeStamp(0.7672873729331195);
    msg.setSource(38396U);
    msg.setSourceEntity(72U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("EFPWFOORSMSFSGWBAQPYLBOWEIEJVBVDTQWMFENZCMPZHTZTKLGFTFQUXPCNLTYLLGIHRDOBBXPMCCRCAQXDKKLYPXFBXOIOUROPPHRLVGKNOKXIRGBYTZWJDXZBPQSZDJPGUVJWNSJYULQXHUSAMTWVKJBHQELCGMUKELAFIARVYNYAJHSUXTNXMUIRAFGEOVMTDTJDMGHGZDCWUNNDSOYKZKWJRYYAEI");

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
    msg.setTimeStamp(0.4285544454105853);
    msg.setSource(63659U);
    msg.setSourceEntity(147U);
    msg.setDestination(13600U);
    msg.setDestinationEntity(236U);
    msg.id = 136U;
    msg.width = 26837U;
    msg.height = 31403U;
    msg.widthstep = 35128U;
    msg.channels = 107U;
    msg.depth = 221U;
    msg.finaldata = 75U;
    const char tmp_msg_0[] = {41, 90, -15, 59, -83, 61, -5, 26, 0, -101, 82, -99, -42, 37, -96, 67, -114, 115, -22, -22, 12, -29, -76, -16, -78, 95, 76, 89, -4, -95};
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
    msg.setTimeStamp(0.8301573745556737);
    msg.setSource(31802U);
    msg.setSourceEntity(26U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(59U);
    msg.id = 11U;
    msg.width = 63205U;
    msg.height = 33550U;
    msg.widthstep = 64408U;
    msg.channels = 127U;
    msg.depth = 233U;
    msg.finaldata = 123U;
    const char tmp_msg_0[] = {64, 74, -79, 1, 32, -54, -14, -1, -21, -92, -7, 26, 19, -107, 111, 75, -56, -3, 43, 23, -127, -42, 97, 19, -3, 84, -122, -21, -3, -47, 80, 58, -64, 92, -94, -23, -103, 102, 96, -47, 39, 4, -79, 19, 16, -94, -48, 30, 63, -24, -69, -55, -23, 49, 126, 20, 44, -5, 12, -68, 79, -128, 44, 115, -4, -18, -95, -75, -7, -58, -98, -93, 11, -63, 112, -60, 76, 27, -88, 45, 93, -126, 124, 44, -15, -92, -100, -15, -74, 123, -100, -34, -13, 34, -48, 36, 33, -65, -97, -29, 13, -102, 25, -83, -68, -65, -80, 59, -17, 18, 98, 61, 71, -49, 85, 103, 20, -76, 109, -113, 83, 50, -104, -71, -76, 80, -2, 90, 28, 21, -15, -121, 23, -15, 79, 113, 113, -40, -10, 48, 25, 60, 40, 41, 42, 113, -100, 106, 58, -80, -101, 74, -106, 8, 85, 11, -60, -72, 35, -77, -39, 34, -43, 28, -117, -16, -27, 67, 43, 17, -14, -113, 96, -82, 71, 38, 14, -8, 79, 98, 0, 115, -22, -29, 42, -62, 30, -79, -105, -17, 33, -103, -112, -80, -1, 9, -105, -47, 62, -117, -11, 15, 40, -81, 0, 125, -45, 52, -104, 118, -22, 100, 61};
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
    msg.setTimeStamp(0.1138779454596468);
    msg.setSource(20097U);
    msg.setSourceEntity(223U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(249U);
    msg.id = 250U;
    msg.width = 10754U;
    msg.height = 58660U;
    msg.widthstep = 4157U;
    msg.channels = 148U;
    msg.depth = 133U;
    msg.finaldata = 15U;
    const char tmp_msg_0[] = {-85, -58, 89, -59, 44, 28, 90, 111, 47, 97, 115, 9, 19, 111, 90, 72, 83, 96, 126, -87, -82, 14, 75, 15, 39, -18, -48, 43, 101, 71, 57, -123, 73, 4, -27, -91, -71, -87, 26, -121, 65, -4, -16, 95, -81, -7, -44, 54, 108, -25, 111, -68, 74, -32, 20, -45, 119, -66, -20, 19, -51, 33, 2, -32, 93, -86, -28, -84, 116, -109, 66, -1, -125, -50, 68, -114, 92, 84, 56, 114, -58, 107, 106, -127, -120, -64, 76, -16, -121, -9, 53, -79, 51, 114, -89, 96, -77, -47, -13, -32, 19, 57, 93, -103, -83, 112, -47, 60, -87, -77, -99, -11, -16, -3, 60, -56, -26, 70, 39, 108, -10, -18, 119, -1, -27, -50, 109, 67, 7, 48, 74, 63, 49, -97, 42, 87, -45, 34, 3, 50, 101, 108, 76, 58, 24, -51, 50, -115, 110, 9, -30, 19, 4, -9, 123, -53, -61, -95, -128, 99, 103, 47, 82, 7, -86, 114, -105, 35, -51, -41, -58, -1, 75, 90, 28, 87, -110, 120, 77, 2, 64, -92, -4, -33, 36, -6, -56, -119, 99, 110, -51, 33, -82, 81, 24, 34, -31, 124, 97, 31, -67, -38, -55, 72, 39, 70, 94, -33, 115, -43, 11, -60, 63, -98, 39, -83, -107, -104, -52, 99, -74, -118, 117, 115, 89, 17, -61, 50, 14, 100, 113, 11, 104, 8, -51, 41, 120, -109, 64, 28, -57, 24, 45};
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
    msg.setTimeStamp(0.9087545856862901);
    msg.setSource(30315U);
    msg.setSourceEntity(205U);
    msg.setDestination(55533U);
    msg.setDestinationEntity(254U);
    msg.width = 27866U;
    msg.height = 23169U;
    msg.channels = 215U;
    msg.depth = 44U;
    const char tmp_msg_0[] = {-83, 87, -71, -115, -71, 39, -75, -40, -37, -32, 126, 88, -7, 0, 95, -115, 26, -14, -28, 43, -31, -80, -33, -74, -67, -38, -76, -119, 71, -109, -96, -60, -118, 0, -117, -112, -60, -97, -9, -29, -19, 86, 101, -107, 51, -3, 23, -88, -76, 71, 29, -99, -85, -57, 5, -98, 86, -43, 118, 29, 123, 10, -111, 82, 77, -36, 58, 51, -99, 82, -19, 59, -43, -84, 62, -84, 107, 73, -124, -2, -89, -95, -106, -74, 96, -81, 47, 63, 34, -72, -79, -111, -2, -52, 43, -94, 26, -22, 77, 75, -30, 57, -85, 87, 20, -119, 71, -22, 111, -98, 44, 31, -3, 79};
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
    msg.setTimeStamp(0.7554811851981825);
    msg.setSource(756U);
    msg.setSourceEntity(4U);
    msg.setDestination(12402U);
    msg.setDestinationEntity(16U);
    msg.width = 43130U;
    msg.height = 31985U;
    msg.channels = 136U;
    msg.depth = 6U;
    const char tmp_msg_0[] = {17, 120, 98, -48, 118, -37, -12, -111, -65, -126, 51, 73, 44, -17, 113, 115, 88, -116, 4, 26, 102, 98, 121, -87, -117, -73, 83, 69, 24, -40, -125, -128, 47, 53, -7, 71, -70, -26, 113, -56, -5, -8, 63, 3, -111, 126, 88, -102, -121, 7, -72, 67, 85, 56, 102, 36, 27, 124, 66, 16, -64, 20, 50, 29, -71, 22, -41, -28, -93, -120, 26, -115, -84, -60, -7, -11, 87, -31, -125};
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
    msg.setTimeStamp(0.040211669923204796);
    msg.setSource(62747U);
    msg.setSourceEntity(183U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(215U);
    msg.width = 24588U;
    msg.height = 27490U;
    msg.channels = 207U;
    msg.depth = 252U;
    const char tmp_msg_0[] = {-2, -31, 51, 19, 3, 120, 111, 40, 63, -20, 117, -65, -74, 29, 124, 33, 98, -46, 116, -42, -83, -3, 26, -63, 67, 96, 3, -2, 99, 77, 83, -85, -128, 73, -11, 51, 20, 38, 31, 43, -53, 26, -84, 60, 25, 41, 97, -109, -34, -1, 100, 75, -128, 23, -22, -87, -68, 52, -10, -114, 84, -126, 80, -55, 1, -123, 41, 70, 62, -8, 52, -21, 64, 63, 97, -77, 94, 88, 118, -23, 20, 121, -12, 84, -98, 57, 46, -48, -18, 26, -91, 30, 10, -35, 37, 105, 33, 38, -86, -13, -56, -117, -127, -88, 0, 103, 73, -72, -72, -5, 41, -72, 21, -57, 72, -62, 75, 110, 47, -92, -10, -5, 68, -52, -90, 85, 105, -45, 27, 28, 40, 76, 119, -96, -76, -97, 86, 109, 34, -8, 13, -77, -83, 56, -13, 90, -26, 28, 44, 124, 18, -73, 12, -96, 63, -123, 86, -103, -22, -26, 68, 101, 38, -32, 33, -50, -18, -50, -121, 110, 100, -105, 14, -5, -127, -110, 52, -98, 107, -66, -38, 98, 116, 69, 76, 26, 105, -85, 44, 57, 50, 111};
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
    msg.setTimeStamp(0.18706446937073595);
    msg.setSource(1208U);
    msg.setSourceEntity(243U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(203U);
    msg.frameid = 17U;
    const char tmp_msg_0[] = {-14, 26, -29, 23, -5, -71, -29, -109, -67, -56, 112, -14, 19, 115, 44, -64, -69, -39, -30, -53, -8, 4, -98, 68, -54, -76, 45, -70, -94, -2, 120, 101, 93, 81, 51, -126, 27, 0, 71, 93, -53, -62, 89, 40, -20, 57, 77, -64, 44, 0, -63, -25, -123, 2, -77, 47, 27, -1, 74, 78, 113, -76, 41, -6, 119, 22, 93, 67, 119, 23, -26, 79, 122, -18, -23, 15, -127, 52, -103, 76, 35, -68, -114, -121, 29, 74, -113, 44, 47, 122, 90, 115, -93, 117, -83, 71, 68, -16, -113};
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
    msg.setTimeStamp(0.9811448625582488);
    msg.setSource(16526U);
    msg.setSourceEntity(86U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(49U);
    msg.frameid = 202U;
    const char tmp_msg_0[] = {-91, -81, -76, -76, -43, 69, 5, 26, -91, -36, -119, -46, 117, -5, -47, 100, -51, 119, -2, 82, 66, 125, -16, -92, 46, 18, -22, 87, 114, -58, 40, 43, 26, -26, -81, -90, 106, 68, 26, -8, -90, -89, -38, -23, -2, 108, -94, -73, -93, -16, 70, -64, -29, -118, 59, -44, -46, -37, -41, -16, -118, -51, -120, -41, -17, 112, 109, 74, -90, -81, 42, 42, -49, -16, 101, 124, -46, 74, -10, -125, 77, 89, 52, 51, 88, 0, -85, -12, 27, 90, 123, 80, 75, 108, 41, -40, -45, -43, 27, 117, 25, 12, 104, -97, -128, -102, -50, 11, -89, 105, -127, -19, -116, -63, -5, -1, -108, -20, 57, 13, -4, -89, -103, 124, 25, 118, 82, -35, 13, 0, -43, -23, 88, -72, 45, 25, 119, 79, 77, -120, -21, -119, -105, 12, -96, -122, 52, 97, -3, -62, 103, -64, 103, 56, 4, 57, 72, -80, 116, -69, 20, 23, -95, 60, 85, -128, 88, -67, -9, -94, -2, -19, -93, 49, -93, -44, 82, -20, -115, -115, 92, -126, 113, 48, -109, 42, -42, -27, 47, -43, 117, 58, -48, 106, 77, 22, -65, -35, -1, 39, -97, 113, -48, 110, -56, -31, 26, -17, -41, -91, 93, -101, -82, -36, -122, -7, -117, -15, 86, 113, 43};
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
    msg.setTimeStamp(0.47460184502975267);
    msg.setSource(3046U);
    msg.setSourceEntity(220U);
    msg.setDestination(61543U);
    msg.setDestinationEntity(86U);
    msg.frameid = 98U;
    const char tmp_msg_0[] = {-100, 67, -16, -26, 12, 99, -87, -44, -26, -54, -108, -38, -20, -120, -48, -77, 100, 32, 2, -6, 92, 100, 17, -105, -1, -86, -48, 58, 80, -50, 106, 91, 101, 7, 4, 36, -75, -96, -122, -121, 113, -127, 124, -53, -126, 31, -97, -58, -90, 14, 42, 106, 89, 96, 52, 34, -37, -70, -91, -29, -61, 103, -22, 74, 76, -49, 24, 118, -108, 21, -72, 116, 13, 68, -99, -34, -23, -33, -51, -44, -36, -37, -127, -62, 75, 66, -10, 114, 10, 15, 80, 65, 5, 58, 31, -62, 11, -48, 31, 25, 85, 67, -81, -65, -60, -51, 125, 96, -4, -55, -96, 2, 122, 29, -17, 44, 113, -101, 43, -52, -80, -121, -23, -32, 57, -127, 47, 86, 79, 32, 18, 2, 110, 101, 125, -10, 102, -4, -3, 72, -91, -66, 90, -70, -66, 22, 121, -37, 25, 123, -85, -111, -23, 18, 6, 90, -22, -32, -41, -26, -57, 66, 13, 120, 45, 47, -89, -43, 115, 89, -90, -69, -26, 39, 98, 22, -46, -122, -90, -29, -117, -119, 58, 94, -49, 126, 53, -79, 16, 108, 1, -21, -41, -126, 22, -75, -1, 50, -24, -51, -35, -45, 13};
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
    msg.setTimeStamp(0.9681246403710808);
    msg.setSource(1238U);
    msg.setSourceEntity(133U);
    msg.setDestination(9668U);
    msg.setDestinationEntity(249U);
    msg.fps = 130U;
    msg.quality = 83U;
    msg.reps = 171U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.505057173051492);
    msg.setSource(44307U);
    msg.setSourceEntity(105U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(98U);
    msg.fps = 53U;
    msg.quality = 199U;
    msg.reps = 196U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.9385999848347926);
    msg.setSource(30603U);
    msg.setSourceEntity(202U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(54U);
    msg.fps = 167U;
    msg.quality = 183U;
    msg.reps = 20U;
    msg.tsize = 248U;

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
    msg.setTimeStamp(0.02356983215358832);
    msg.setSource(59632U);
    msg.setSourceEntity(167U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.6946171921666974;
    msg.lon = 0.9846883548147602;
    msg.depth = 7U;
    msg.speed = 0.7937379261845219;
    msg.psi = 0.35063964665681113;

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
    msg.setTimeStamp(0.8222572782522228);
    msg.setSource(42194U);
    msg.setSourceEntity(7U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.5371791433936839;
    msg.lon = 0.2188815002545016;
    msg.depth = 216U;
    msg.speed = 0.10446055675002908;
    msg.psi = 0.5691143296550828;

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
    msg.setTimeStamp(0.2587623977849717);
    msg.setSource(46890U);
    msg.setSourceEntity(127U);
    msg.setDestination(4094U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.42401482726461615;
    msg.lon = 0.4163911121298153;
    msg.depth = 199U;
    msg.speed = 0.4900780837551908;
    msg.psi = 0.8193326864933511;

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
    msg.setTimeStamp(0.975673925515488);
    msg.setSource(19028U);
    msg.setSourceEntity(163U);
    msg.setDestination(43679U);
    msg.setDestinationEntity(43U);
    msg.label.assign("KHRKXFVJRUXWTDNBQXVDYLLJGZJDVHNMAIOQDTKQSXMGYTBSDTBWSGCZXRQBETUJNIPSKITZVDIGHYWWPFDSSHPKVLPBTJNAKBTAEQMXSPARHFCRLPUAJCCTNYQGQANAOUHHSNUIDVMFYLXKCIGWEBVEZJPYZFMMFRUCCDJICOFLWWLPRMEXMMXDGBBEAYNZTGOLGQCZCEZEPVSAOHJBFARUXOOYIJQUHROOMQZFVPWUILRYKKSLFWVYU");
    msg.lat = 0.6680509666479341;
    msg.lon = 0.5108414455779599;
    msg.z = 0.04914031176126776;
    msg.z_units = 50U;
    msg.cog = 0.8138102362913542;
    msg.sog = 0.34159005521626706;

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
    msg.setTimeStamp(0.6658686776905351);
    msg.setSource(5250U);
    msg.setSourceEntity(82U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(59U);
    msg.label.assign("VRBZIBEERVXVDSFZRXYHFATSKDHHHEUKDKWMKXWWSANOYWXFPXYTFXLHEZUFBSGZNHRGQBPHYQUNBTIJPLLNTFMFW");
    msg.lat = 0.5065792480023403;
    msg.lon = 0.07604478332929665;
    msg.z = 0.5532235033227996;
    msg.z_units = 159U;
    msg.cog = 0.7318253826851514;
    msg.sog = 0.06449203330444397;

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
    msg.setTimeStamp(0.07214233507866008);
    msg.setSource(44238U);
    msg.setSourceEntity(31U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(29U);
    msg.label.assign("GFGMBELUKLDQROOBMZWIBUJKUNFTBZCXXRPDKJEYXCZSWLZYYICTHPBDEATHHYJWGAOF");
    msg.lat = 0.6439432814034536;
    msg.lon = 0.34236714111313293;
    msg.z = 0.31790280179036123;
    msg.z_units = 179U;
    msg.cog = 0.04058841582159145;
    msg.sog = 0.43076594513890565;

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
    msg.setTimeStamp(0.3725390536361719);
    msg.setSource(38127U);
    msg.setSourceEntity(211U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(186U);
    msg.name.assign("SQVDABUJERJYAELWXLBYQMZURXSAWFNKOXSMIMYKBIZMVMXNXFINVLGOJHDRQOVXHQYCXTCJMPZEALZGUDNGDJWURBOEZIGXQVTGKDEPINHSUCEXLUCQPVLXFTMIEOTGVKFVNJAIIPRNDJMCPJFACALDETGWHGHEWVFPNPYDDISBBKYHRWSWPJFGKFTQIUZKCTYQSBHCSSGBZORCQLWVDAUNRBCWESATWZHJOAN");
    msg.value.assign("HIVIWPFILITDKCXXXLHTYMMLETBFYNNLJYGCCECNUEQRYXJMVVXGFQ");

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
    msg.setTimeStamp(0.6761764303502076);
    msg.setSource(9918U);
    msg.setSourceEntity(106U);
    msg.setDestination(11820U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ZYSJQHTQTUGUGBSOCIFJUFEIBDMBPBPPTKODKUMASTWJQLWWXWORVYCRIXRRAPNQHLWMZOLCLDQEIXSFBVNXDWFFVJEWHCZGPQRZUVHSAEYDKMDHUMABCLCVNKNDAGGFAEUBJTHWTWKIYSCRIKFSJXQDKIVMEETVPWDYSREUCPOMOZZNSFHNAXIGHQVYIERAPGBSJLXOYNAXHXCTPLPGUMJHZBQEYZQZL");
    msg.value.assign("MPMEFQRRINVVSWTQ");

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
    msg.setTimeStamp(0.355712431126891);
    msg.setSource(3364U);
    msg.setSourceEntity(7U);
    msg.setDestination(65049U);
    msg.setDestinationEntity(166U);
    msg.name.assign("CZMHVCDPPJQUBKRZYXNNRVNUKUWWMORWNCYVLULGTHACO");
    msg.value.assign("KDVMCANBFUUSVOSGRIEVZSXOLNKYHFDLPAYCLHCVVJQEGQADDQAHOEOPSUUKLTZXSLUWYWQRBVSJPEUFERKD");

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
    msg.setTimeStamp(0.6140133008046107);
    msg.setSource(14210U);
    msg.setSourceEntity(139U);
    msg.setDestination(60488U);
    msg.setDestinationEntity(56U);
    msg.name.assign("HLUNIIQAZWRAHSROMLQFRTXRGKAQOOIUZRPUPNGXPECXHBPFPHXWQMEWKFXWCOKHEFS");

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
    msg.setTimeStamp(0.0340148031609504);
    msg.setSource(15143U);
    msg.setSourceEntity(128U);
    msg.setDestination(21383U);
    msg.setDestinationEntity(75U);
    msg.name.assign("AXGPNIPZZCRQHQKDWTFYKEKYLSNCBOUAJUXGWCLCKDBUXGWKLEIHPJSEVLSFWDPVZNEFICHHQFTGOFRRVJQOIMVNTJAGDUIEDYAPWPXFMK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QHDDULCOETPCUVKUUMXUKDCPLKPICVREVAQHIPWSOFVNJVEICKWFLRKTHQNFKVBMUYKMNZDSUOGDWESGWHXEHAJGLATTOSVIEPYWFIEBSQLZCXHDQTRXOPXZOFDXTJCSLYSMZ");
    tmp_msg_0.value.assign("WMZFENNSDEFOGRPELRKTHYABRPDFMPVYIJYRRFVIYJSOIBKCCVFZMCHNUCYUNSSPXJKOZADPQMHBTAILGIBWNIZSXWSKFBGSLKEURIE");
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
    msg.setTimeStamp(0.7586606374063944);
    msg.setSource(14085U);
    msg.setSourceEntity(118U);
    msg.setDestination(245U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QXZDYLOAQULDHVJGKBGIOAIUBCYJTBEMGRHELAOYLYLZRJSFRDRTVUPPYZVZQCDZVCYEBUXCHFNNHQNCXDPJMXJOTATWDEQHKLRBPFGUHOMQJQHKWJTOV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XBQAIKTBJBERVTFLNHVZPDQXOLQXYZMKTGYDSMKOHEUPHEJKPMLGBRIFVQUIQLZ");
    tmp_msg_0.value.assign("QBYTHETLDNWECAQTYEVNVWOJFEPYXUIRFWUGLBZDFDTLXMWMNHVMQRWHCJNYHIUZTASNIVLEOWGZXFZYXOEYHSIGJFHJJTKNVGDUXOUCLVFZEHNXLUGMYUMSPOBIVDJPAOSFEOQPKGIDQPLNFBEOVHVPAZBSOPGCWKISCSSXATPILQJGMVJJ");
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
    msg.setTimeStamp(0.3884836532324498);
    msg.setSource(34235U);
    msg.setSourceEntity(27U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(68U);
    msg.name.assign("SRWICBFELTNLDLOVGYGRSOJZSTXCXSFYZGPUBZKJKFMKBMBIQJCOZNVOAIWROJFCTWFMAFMUINYVRTDLQTASZSMDICCGYUMWJDDEPUUDDXGWLXIKPMDHNWFUVHBBZHPQGMDIVNEEEOJYPYTNIVNYWXJQEYFNKAZHGQQHHRTBCLTBSHYQEUHVHKBVGZJVRPZOKKEAPXXJTASQRRUUQPWDALSXLAOCCVJPINGLWMAK");
    msg.visibility.assign("EINSVFMPIDZFWEBH");
    msg.scope.assign("LMJXMUPLYWMOCZYIDYPHGZHPXIHGFDTJWVENENIWVPCRKCVWAXEYUXFDIBCIQNVLYRWUEGTQNMQVZFDZNPSMVGGHAMBUKHHSDFJHLKHBSYJCLXBTAWQPTJGLEEMVPEVBMFZOLVKNJWNSOOUFGKFOHNOBFJTASFCTJUDNBCSFETLXKYZALCDAXRGNQKAXSUQPQEQWQSMCTIRZXORRPWZ");

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
    msg.setTimeStamp(0.06815729747662624);
    msg.setSource(17861U);
    msg.setSourceEntity(210U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(188U);
    msg.name.assign("NGKRVVLXCVDBZUASUPZCGABRIKDPXLLWKMZTWNMKMHRDFG");
    msg.visibility.assign("ZYXYWJFZCRYL");
    msg.scope.assign("ILCITNTCDEIBMIHLDFOKXJGH");

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
    msg.setTimeStamp(0.0892671571217678);
    msg.setSource(41383U);
    msg.setSourceEntity(21U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(179U);
    msg.name.assign("STJEZKQXGSJYGLMQOTGDZQJUAQBLQFZFYPLTVVOCVKPHARXCDIDIQRY");
    msg.visibility.assign("NXRDRKVIQMFCJAJHELQNWRNAPHEJEGVTMTSEQSUXIYVLGJRRKQNCTPTZYWBYODLVUURDMCCOPMZFBHUEXWJYZBQPKRMALYVFFLBXUKVDEQNXSZLSVBZTEMXSJXQGAPIONZAKGWNJGQIWRU");
    msg.scope.assign("KFVBUPORTHRVEPSKDAYNDHZIRKGSLEMBWLRUIAPKGACUXWSL");

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
    msg.setTimeStamp(0.09707937358020235);
    msg.setSource(50924U);
    msg.setSourceEntity(101U);
    msg.setDestination(52237U);
    msg.setDestinationEntity(117U);
    msg.name.assign("RBTKXFRSVCJHNMEJUBCXIACWZYJDYBQRCEZLVVQGLAHATLYSMJMMXIYLPWIJWUGXJMUDVVQSHLWCZKOHNFWYPOSTTFAGWIIKJUZREAAUPEGTJDLRQEINKOYBQPQUTPIPFZMICPRDAIYGIHYHNEHUHZJNVEQZBWBANVMSDVTCK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RQJWJSFFLZNXPQYNNYJGYCQBXURUEEHKZBKJEMDQOFOXOMWN");
    tmp_msg_0.value.assign("QSVXWYBRHOJVBCQHEIGFNTJVAJOWYBXMIEPPSZEPLWSVJUNJUGWRQZZYBINSIPYVMUWMNWKTVSZYGKFPIKLJFQEBCUGWNEDTCEO");
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
    msg.setTimeStamp(0.03927935490973611);
    msg.setSource(62295U);
    msg.setSourceEntity(98U);
    msg.setDestination(42992U);
    msg.setDestinationEntity(128U);
    msg.name.assign("EIGOUPKCGLCHTPEJMMXFWGZKUCSDPTXSLEFTPHJKEDAHFONBYVTVYFBMYXCVACXLAYQQEMGOVTEUBGIIRYVAAPCQDRJDGXBLHXLUAIFLJPDPPCFUNWVBAEZUIUCVOWRLRSWJKWMOTKTOKZMNHRWTZVCWXQXKTNUEHSGSBIJLZKMBFDAQSNNTJXJMQGEOJROWWQDWZVAFRBQZYIILRYUUJMV");

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
    msg.setTimeStamp(0.7483798163005897);
    msg.setSource(48020U);
    msg.setSourceEntity(177U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(102U);
    msg.name.assign("GUFIDQAGNZGTNVDFTHCGEWZRMESFVPVGFLQAINJCKXKNVHSKXRZJMLLLZRZGNHUDOFRHABUTJSXXLUNPSYBTPMKHSIEJEBTUFMGVWMAITYRQCZRQSXBEHSDQOYNKNZVIIDGILRPWOIVBQCOPVEBCNUWHOARMXIUPWRDGQJXEHYYPWYXABMLALSHHDFTSCY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WLGBTUTKALOAZEAWMMKSMPTIXTZBIAZLU");
    tmp_msg_0.value.assign("PAXTGLKDIUGXWDEANLHKHIJECFTDVAVRULABWGQNHCMDFNMQPYNSHMSZOGUOTIVJFLEQBGVIACUPBBSIPFVYQKBBTXEOXYFKOCUTCXRSZQFSVXLYDXTDYWYPJQRDRERWN");
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
    msg.setTimeStamp(0.8916534105446668);
    msg.setSource(5387U);
    msg.setSourceEntity(92U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(0U);
    msg.name.assign("YSCHELXVUTVOUFGEV");

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
    msg.setTimeStamp(0.3707090156468409);
    msg.setSource(51595U);
    msg.setSourceEntity(165U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(248U);
    msg.name.assign("EGHLNRHRYRVHRIIMJBSWPCDSEKZBZUITSDXEAPYBPEVAVWMQZNQNIXVHMOMTXUAGWHIBGJNVQZCBOOMIOYTILPULMXTNOFNBABXWXMESQYZWHEYBAKYKNXFDQCVKSFNNLLGCVGJLFJFWERBSFBHPOMLPARLKRCSHCSACZATWZSGI");

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
    msg.setTimeStamp(0.0594422767987558);
    msg.setSource(43129U);
    msg.setSourceEntity(80U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(206U);
    msg.name.assign("CYTDJLFFAVWVTYDCZQIVUMSRIHQSBQSRNACPJAPMHGFYRVBJMVGYDMOCUSWVXEEGDJWUJFAAKCTZAFXRKXSQNKND");

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
    msg.setTimeStamp(0.15881412701748332);
    msg.setSource(34215U);
    msg.setSourceEntity(147U);
    msg.setDestination(5809U);
    msg.setDestinationEntity(7U);
    msg.timeout = 1796958438U;

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
    msg.setTimeStamp(0.8019070664648565);
    msg.setSource(6795U);
    msg.setSourceEntity(71U);
    msg.setDestination(36884U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3370330866U;

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
    msg.setTimeStamp(0.5958109956447151);
    msg.setSource(8569U);
    msg.setSourceEntity(237U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(28U);
    msg.timeout = 2394134075U;

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
    msg.setTimeStamp(0.2204098421666686);
    msg.setSource(32842U);
    msg.setSourceEntity(79U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(68U);
    msg.sessid = 715530636U;

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
    msg.setTimeStamp(0.6242491233407925);
    msg.setSource(27494U);
    msg.setSourceEntity(106U);
    msg.setDestination(52963U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3433013023U;

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
    msg.setTimeStamp(0.8731004388797976);
    msg.setSource(64489U);
    msg.setSourceEntity(48U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1030614257U;

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
    msg.setTimeStamp(0.1806774229430822);
    msg.setSource(43892U);
    msg.setSourceEntity(148U);
    msg.setDestination(51661U);
    msg.setDestinationEntity(203U);
    msg.sessid = 3424954814U;
    msg.messages.assign("RGYTITCEWUAVQLSOSXYKPWEYSTLQNJRRPGVAEBDKLPQOHHNGOMBNAHLPMWZAKFDZHIQKDMYCCLWHDSQMIYDCDBMRDHNRTKWUXGKNBHAVJOUBZRTNFXUXMZPXBAXGXNOUKRJYPKYHAGYITSQWMEJVILFUSJBSVIWDYHONPELG");

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
    msg.setTimeStamp(0.3857990443142306);
    msg.setSource(12085U);
    msg.setSourceEntity(165U);
    msg.setDestination(21325U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1539190661U;
    msg.messages.assign("CKHYUFQWOXJPNE");

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
    msg.setTimeStamp(0.9369167488007658);
    msg.setSource(16175U);
    msg.setSourceEntity(105U);
    msg.setDestination(14152U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2335003691U;
    msg.messages.assign("BXBFQNZDNXTSGWRZMBRECJFOTQEERNDGFDHRREKBQSTPTKUHVBHXGCAJTHIXVYKWCQEVWCEYMTQDMSFMNRLMEJGNZJLMUIGCAWOMYLWKHAYHQIKZOYTFIPTVBUXZNLDSPPIPKULZEOCSIRUZNHRDDZMKAONOHVJTYUMBVOFJCTDSLYKKQGSLVZA");

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
    msg.setTimeStamp(0.2665050733200498);
    msg.setSource(25933U);
    msg.setSourceEntity(217U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(128U);
    msg.sessid = 1184346572U;

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
    msg.setTimeStamp(0.38627066471868554);
    msg.setSource(30443U);
    msg.setSourceEntity(7U);
    msg.setDestination(5508U);
    msg.setDestinationEntity(131U);
    msg.sessid = 1904372858U;

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
    msg.setTimeStamp(0.30283183921616275);
    msg.setSource(24630U);
    msg.setSourceEntity(91U);
    msg.setDestination(24448U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1396055442U;

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
    msg.setTimeStamp(0.6120682016181168);
    msg.setSource(18461U);
    msg.setSourceEntity(131U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2300817124U;
    msg.status = 124U;

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
    msg.setTimeStamp(0.10208145854374817);
    msg.setSource(30271U);
    msg.setSourceEntity(19U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(224U);
    msg.sessid = 764480440U;
    msg.status = 177U;

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
    msg.setTimeStamp(0.7189029139941223);
    msg.setSource(34690U);
    msg.setSourceEntity(18U);
    msg.setDestination(5483U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1856861569U;
    msg.status = 230U;

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
    msg.setTimeStamp(0.8375801257097517);
    msg.setSource(59803U);
    msg.setSourceEntity(141U);
    msg.setDestination(44268U);
    msg.setDestinationEntity(57U);
    msg.name.assign("HUKNDFPNZKBIKYCOXVLOULFXNQXPCESGAKBUAZZWPUGEPUBLVWEHVQZSWMGRNHYDYEIBHSIEQBFUOVFYYNAELDPRZXWCHMJGAACSNKADSSTIJPDXJIVZTGJTIOGVMFCNWJZRAHQRTOMATYBHTMSIJQXOGYJTCQFPIHQLSBFLYYHOXDPERPXKMJGIV");

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
    msg.setTimeStamp(0.5621356801253554);
    msg.setSource(26790U);
    msg.setSourceEntity(203U);
    msg.setDestination(11767U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UZOEFNVBOVLFJARTMIESPXIMUQFSZTCSXMXVGQNTIQVWZYJQRHRYAKYDWWGHLBNVZKXLDSGXCDQAKRMODPENS");

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
    msg.setTimeStamp(0.9869552463121134);
    msg.setSource(15191U);
    msg.setSourceEntity(113U);
    msg.setDestination(57128U);
    msg.setDestinationEntity(236U);
    msg.name.assign("OSFPPCHOIKWSMNXBOSEIZNFCVCRJCCDKTWGBJEMTTNXYPSPRTSVJHNOPXUKJXOELFZMLQNSJZLRKHFBAGLYKAUQXOQUCTNZBZKSYFBVOMDDDAOEWEFQNIUIVJBI");

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
    msg.setTimeStamp(0.627142945044825);
    msg.setSource(16859U);
    msg.setSourceEntity(136U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(80U);
    msg.name.assign("AJQTMSDREUSFBPOQZPLGDMNJXCECLOMNHOVMJFGANBOQJCNXAUZVHEQIFZKKIJISCDHARQWXCQTOGYWYBGHAVYRBMRVVAWGVGPYNZMEDE");

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
    msg.setTimeStamp(0.03250137500341577);
    msg.setSource(64531U);
    msg.setSourceEntity(129U);
    msg.setDestination(34653U);
    msg.setDestinationEntity(96U);
    msg.name.assign("CBUGBLYCOYQPOEDRRXPGMSRDUPKCEQBVZIHAOJVRTNGUVMEQIZELCNYQSJIODUUJTNHLNEXZHYSIXAADTJD");

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
    msg.setTimeStamp(0.6748374915645294);
    msg.setSource(1764U);
    msg.setSourceEntity(180U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(239U);
    msg.name.assign("RREVHODVOMRM");

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
    msg.setTimeStamp(0.10876755093069679);
    msg.setSource(35875U);
    msg.setSourceEntity(204U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(118U);
    msg.type = 157U;
    msg.error.assign("WLZRZMMAGIBPHAWWZAYXQTFFCTSWIMEODLKHZJCXDFLUXKOEGKNCGMRYHDUMGNWFGPFEUBVDTTEKJYBJSSHFUQGVDZUNROZBVAJUPROLNZCBUPROFYQQMTPEVFHXOXHCSDLCSJPQXFKNEXPPBMAQDJILZOKJJRDVMGNRTZVKQBEAILQUCMOH");

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
    msg.setTimeStamp(0.37303764546095664);
    msg.setSource(1657U);
    msg.setSourceEntity(5U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(194U);
    msg.type = 171U;
    msg.error.assign("GXRXBVSYDTGCZHUTVHZTNVLXIDVKXRJVCIQRZLCDSFDTBUJFWRZNCTVDKJOESGYRHLMRFUKKGGZPNSPALXXSBJNMFWTLSFEPWKLUQDXYHTHBIQMLQOPIOCZBTUGRXKACRPTHJKNNCYYHYQGSDAQBLLEWBMGEUNFAEJAWWMJOOYBQOFBMEIIFURAZTNX");

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
    msg.setTimeStamp(0.6138401054115711);
    msg.setSource(54911U);
    msg.setSourceEntity(58U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(208U);
    msg.type = 80U;
    msg.error.assign("XYCVKTCWNQSMAZHDLLDROMNYVFDKWAUJJVHWBUNQXMSJRAQTSFQTLAIVMMQCYXOVYTQVBEWZRNLTHM");

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

  return test.getReturnValue();
}
