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
// IMC XML MD5: d42c33ab58ac41f37bab1cd847763c35                            *
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
    msg.setTimeStamp(0.955678897154);
    msg.setSource(54588U);
    msg.setSourceEntity(48U);
    msg.setDestination(4864U);
    msg.setDestinationEntity(193U);
    msg.state = 188U;
    msg.flags = 30U;
    msg.description.assign("QVFDKLYDGIUIYVIOIZKCGP");

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
    msg.setTimeStamp(0.211721593542);
    msg.setSource(18489U);
    msg.setSourceEntity(239U);
    msg.setDestination(60298U);
    msg.setDestinationEntity(216U);
    msg.state = 16U;
    msg.flags = 163U;
    msg.description.assign("MKMDSHTQHSXAHECQZIIKDSGAHKGIWWQFFPCEDAXQPCJCWVMPECUDLPMHIIJTNIWXBWFVYNBGVDCZBKVYJULPUNSKUJLSOKTCXIATRJZROUNLVSVODXPJQYQOTYPZPWZCLNALDEZYRQWJSRVGEGNMKLDQROVPVBOBRTLMDUBHTLXGSZMWXKAANFGGNTUWZRFVFIHRSIGCOZY");

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
    msg.setTimeStamp(0.976338837837);
    msg.setSource(22786U);
    msg.setSourceEntity(13U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(187U);
    msg.state = 21U;
    msg.flags = 233U;
    msg.description.assign("FWRYRFUPVRKSENUGJEGENTPIJOBUAQJIIYBCJNVPWXJCGMTRTDX");

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
    msg.setTimeStamp(0.764143748444);
    msg.setSource(51878U);
    msg.setSourceEntity(241U);
    msg.setDestination(39739U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.864519313188);
    msg.setSource(2416U);
    msg.setSourceEntity(130U);
    msg.setDestination(58247U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.232885165639);
    msg.setSource(31939U);
    msg.setSourceEntity(204U);
    msg.setDestination(20808U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.342308722287);
    msg.setSource(46584U);
    msg.setSourceEntity(253U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(62U);
    msg.id = 85U;
    msg.label.assign("OGDWHAVQPPCEQMAXUBCOABTCQPRXRBUXXOHLPDCBXNSLYHCJDQAEOXIHFUDMRHIFYPWPLNUUKFTFURVSBYREQIEFSACNUUAUILOJZMRDPVLJTWDGJYZCGWMLIKLKEJWNSOJGKKDJW");
    msg.component.assign("DRIWGDUPQYYZCYTHIHMCZPDZLMWFBUAZTRSDVCKOBDJIB");
    msg.act_time = 3675U;
    msg.deact_time = 2823U;

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
    msg.setTimeStamp(0.139382039773);
    msg.setSource(15886U);
    msg.setSourceEntity(111U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(13U);
    msg.id = 193U;
    msg.label.assign("PXXJTWHWRGOEBLMAXSFIRRDVELALVUNRSUTWWDDOPGRPSIIMJWPHPBNFXEHMRTFHEWAIBKIDPMZBNJLGCCTCKXNXIEZOWTNMZFCDKDLVTVBLVYNRRZOAULDVQZSNDJUWUPGJYOBGFPGYSZDNXMQCHJDLOBUEZQHYZIIFCMEOQCVSKKLUB");
    msg.component.assign("LVIJIFDNENAWLQIRRRSGOKCZZTZFPMHZCKQGSKXGHVKCLNNYZSFPTMGBQQQJDCANPEUABGXKIDIDGIHKRSOAL");
    msg.act_time = 4421U;
    msg.deact_time = 40756U;

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
    msg.setTimeStamp(0.769703921118);
    msg.setSource(6416U);
    msg.setSourceEntity(77U);
    msg.setDestination(63666U);
    msg.setDestinationEntity(251U);
    msg.id = 194U;
    msg.label.assign("YFITBZGBDEUYGEVEKPMKNFJLCDTCQYVEJTPZULKZZTASOYCOGNSKQXCBPGICEIOMGXYIAAJDVCMHZLSUQHLKHJWDNUYPTNDEZERYQWBAYHXBLXZPTWNYRNEFOGHTRKWVQSTWAHUFRMEOLXNJJUPUKNAPSBWQJIVMGXOTFSNMFAASXIUXD");
    msg.component.assign("SFUNGJBNTBLVQNHZCTIKFYDCHWYBZVHMJXLRASDHMTNXARLEQZUYVPQIVRRDPJUKCQWEJPWXZVCWQHSFADHKNMLOKJYJGDTBQE");
    msg.act_time = 25019U;
    msg.deact_time = 22300U;

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
    msg.setTimeStamp(0.569984639886);
    msg.setSource(3629U);
    msg.setSourceEntity(155U);
    msg.setDestination(13975U);
    msg.setDestinationEntity(70U);
    msg.id = 38U;

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
    msg.setTimeStamp(0.397464641763);
    msg.setSource(51762U);
    msg.setSourceEntity(215U);
    msg.setDestination(3962U);
    msg.setDestinationEntity(214U);
    msg.id = 192U;

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
    msg.setTimeStamp(0.241417493489);
    msg.setSource(57037U);
    msg.setSourceEntity(98U);
    msg.setDestination(6811U);
    msg.setDestinationEntity(74U);
    msg.id = 123U;

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
    msg.setTimeStamp(0.967073126477);
    msg.setSource(58357U);
    msg.setSourceEntity(29U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(125U);
    msg.op = 35U;
    msg.list.assign("PEJUMYWRFITHAZDNUCCXGWUFWBOITCXZIRJQOXQGJZMSFKKAFJJPDTCDDCVOTVEZBEPZSOH");

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
    msg.setTimeStamp(0.516427205154);
    msg.setSource(1597U);
    msg.setSourceEntity(71U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(245U);
    msg.op = 207U;
    msg.list.assign("BTWGHKOSHFVBNNGDJNICPFKE");

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
    msg.setTimeStamp(0.578024422615);
    msg.setSource(10977U);
    msg.setSourceEntity(87U);
    msg.setDestination(4868U);
    msg.setDestinationEntity(4U);
    msg.op = 123U;
    msg.list.assign("WLALOBZDJWTGIXMOWSSUEKAIIXJPVKMGLHAQNETKAZIUZHLLSVRBTCYUSYHR");

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
    msg.setTimeStamp(0.627745464646);
    msg.setSource(21177U);
    msg.setSourceEntity(70U);
    msg.setDestination(26579U);
    msg.setDestinationEntity(68U);
    msg.value = 160U;

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
    msg.setTimeStamp(0.00772732248292);
    msg.setSource(21490U);
    msg.setSourceEntity(142U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(2U);
    msg.value = 62U;

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
    msg.setTimeStamp(0.936264327701);
    msg.setSource(324U);
    msg.setSourceEntity(232U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(104U);
    msg.value = 91U;

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
    msg.setTimeStamp(0.988406711151);
    msg.setSource(28868U);
    msg.setSourceEntity(109U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("ZPKEDBXZMGQESTQWMENDZFFWNYYVNSTHTVWUVGQKCMZGIGEOACSRHJOPSPZBQSXADSKMNOXUWMGJBXEHUTYDPYKCSHFEGQLNJCTRNYORICRHGVRBZVPWIBNKAOUIDHSVZTAWJHXOOKVAYKCHUBPQUYXSAQFUQERATLSHQIDURCYGFZRYVRNFMAYLVJIBPIJNXXEEAJGNXFDLTBMHPKLLFLKJWWVKZBDLCDCLBOIOJAGMQRCZUFMTPDJ");
    msg.message_id = 3284U;

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
    msg.setTimeStamp(0.598761396197);
    msg.setSource(32240U);
    msg.setSourceEntity(152U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(148U);
    msg.consumer.assign("VXCBDMCTLNENDAPDGTJG");
    msg.message_id = 43653U;

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
    msg.setTimeStamp(0.0780403798503);
    msg.setSource(10409U);
    msg.setSourceEntity(0U);
    msg.setDestination(51599U);
    msg.setDestinationEntity(149U);
    msg.consumer.assign("KNSFGOYHIAUZWFRUZSQQEXDUXIAFBQWVKLHAYEVHTCERGBWVPXXJEWCGOOHWPPCNNOSCOYW");
    msg.message_id = 59683U;

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
    msg.setTimeStamp(0.075852109678);
    msg.setSource(26665U);
    msg.setSourceEntity(18U);
    msg.setDestination(38049U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.214916542944);
    msg.setSource(1071U);
    msg.setSourceEntity(231U);
    msg.setDestination(40941U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.295777647259);
    msg.setSource(38990U);
    msg.setSourceEntity(159U);
    msg.setDestination(2993U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.69665075829);
    msg.setSource(33053U);
    msg.setSourceEntity(228U);
    msg.setDestination(53354U);
    msg.setDestinationEntity(188U);
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
    msg.setTimeStamp(0.651734120395);
    msg.setSource(10035U);
    msg.setSourceEntity(46U);
    msg.setDestination(49614U);
    msg.setDestinationEntity(155U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.352741510253);
    msg.setSource(54645U);
    msg.setSourceEntity(115U);
    msg.setDestination(19796U);
    msg.setDestinationEntity(187U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.769899187699);
    msg.setSource(152U);
    msg.setSourceEntity(39U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 136U;
    msg.step_number = 38U;
    msg.step.assign("FXEVLXCLLMZIHTN");
    msg.flags = 178U;

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
    msg.setTimeStamp(0.884387396377);
    msg.setSource(13377U);
    msg.setSourceEntity(26U);
    msg.setDestination(59043U);
    msg.setDestinationEntity(81U);
    msg.total_steps = 157U;
    msg.step_number = 185U;
    msg.step.assign("PANTYMIEIYHIDDWXJIDPBORYILUESONMNMTEIUHHXPHZRACEIXLVHWJZFGQNWETJXZESUKGSTCNWVZCOPZZKRHVKRCBFYLIPOXRWFQCAVMABFTTFSCWYKWFRWUJ");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.890927130011);
    msg.setSource(57194U);
    msg.setSourceEntity(116U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(48U);
    msg.total_steps = 75U;
    msg.step_number = 147U;
    msg.step.assign("LAQGVTGXWHHZOTPQDUEKVDZCRXHYIWCYTAZFAGJSALUSSTVBGJGLXMJICQVDXHYUMMFRYOSQBIIDCTONOQDZUDYKGGLENJYKXOXOISNAKHBTEMZFHKJOPHKEQEWYVWSWABZLIMXFJSZPQNJPEVFIAT");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.181715084902);
    msg.setSource(31649U);
    msg.setSourceEntity(215U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(62U);
    msg.state = 250U;
    msg.error.assign("YEWELTQISQGRHBSHZULAFLECJSIHCCYV");

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
    msg.setTimeStamp(0.172888190562);
    msg.setSource(36751U);
    msg.setSourceEntity(0U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(160U);
    msg.state = 102U;
    msg.error.assign("SVHWIGEQURNTCVZXRGISFBYRVMTWJBVEKPDFSNQZSRGMSNREAAMPXUZDCPQEKRPEZIO");

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
    msg.setTimeStamp(0.761103291207);
    msg.setSource(61986U);
    msg.setSourceEntity(42U);
    msg.setDestination(23493U);
    msg.setDestinationEntity(204U);
    msg.state = 249U;
    msg.error.assign("ZIVGYMEGYWLJZPAJHCLIEDZCGSXXI");

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
    msg.setTimeStamp(0.530696671656);
    msg.setSource(15809U);
    msg.setSourceEntity(116U);
    msg.setDestination(1621U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.827696249035);
    msg.setSource(21675U);
    msg.setSourceEntity(220U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.999878638577);
    msg.setSource(3522U);
    msg.setSourceEntity(16U);
    msg.setDestination(39383U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.0400728212705);
    msg.setSource(49498U);
    msg.setSourceEntity(35U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(91U);
    msg.op = 137U;
    msg.speed_min = 0.482196303741;
    msg.speed_max = 0.186675019361;
    msg.long_accel = 0.0485670131272;
    msg.alt_max_msl = 0.265432652018;
    msg.dive_fraction_max = 0.592261991889;
    msg.climb_fraction_max = 0.0300380742372;
    msg.bank_max = 0.738144355009;
    msg.p_max = 0.877451821098;
    msg.pitch_min = 0.975921003192;
    msg.pitch_max = 0.0525065992224;
    msg.q_max = 0.968525825748;
    msg.g_min = 0.57133477432;
    msg.g_max = 0.0443495989917;
    msg.g_lat_max = 0.697115617281;
    msg.rpm_min = 0.898171552832;
    msg.rpm_max = 0.459524179956;
    msg.rpm_rate_max = 0.493080009962;

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
    msg.setTimeStamp(0.440864775919);
    msg.setSource(12251U);
    msg.setSourceEntity(226U);
    msg.setDestination(65393U);
    msg.setDestinationEntity(66U);
    msg.op = 215U;
    msg.speed_min = 0.0446746006267;
    msg.speed_max = 0.37579937258;
    msg.long_accel = 0.424043937403;
    msg.alt_max_msl = 0.0800481179389;
    msg.dive_fraction_max = 0.867885636746;
    msg.climb_fraction_max = 0.91577601648;
    msg.bank_max = 0.812066297357;
    msg.p_max = 0.668856504988;
    msg.pitch_min = 0.82306477052;
    msg.pitch_max = 0.807715931146;
    msg.q_max = 0.779323997026;
    msg.g_min = 0.190807911785;
    msg.g_max = 0.576414877629;
    msg.g_lat_max = 0.56396998485;
    msg.rpm_min = 0.886872192942;
    msg.rpm_max = 0.169252559922;
    msg.rpm_rate_max = 0.602428708817;

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
    msg.setTimeStamp(0.967585217803);
    msg.setSource(15169U);
    msg.setSourceEntity(77U);
    msg.setDestination(40530U);
    msg.setDestinationEntity(92U);
    msg.op = 198U;
    msg.speed_min = 0.889436098092;
    msg.speed_max = 0.609005200855;
    msg.long_accel = 0.499658907123;
    msg.alt_max_msl = 0.346215654523;
    msg.dive_fraction_max = 0.695467057704;
    msg.climb_fraction_max = 0.870219041514;
    msg.bank_max = 0.712623115715;
    msg.p_max = 0.157870476757;
    msg.pitch_min = 0.29677851909;
    msg.pitch_max = 0.530424409266;
    msg.q_max = 0.253225022561;
    msg.g_min = 0.948475353391;
    msg.g_max = 0.8596894443;
    msg.g_lat_max = 0.638090633436;
    msg.rpm_min = 0.17668950565;
    msg.rpm_max = 0.938202262209;
    msg.rpm_rate_max = 0.258539615507;

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
    msg.setTimeStamp(0.941593441895);
    msg.setSource(52867U);
    msg.setSourceEntity(68U);
    msg.setDestination(60831U);
    msg.setDestinationEntity(44U);
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 234U;
    tmp_msg_0.speed = 4416U;
    const char tmp_tmp_msg_0_0[] = {-23, 100, 116, -115, -36, -96, 19, -72, 112, -2, -26, 94, -99, -62, 98, 63, -39, 100, -69, 12, 69, 50, -117, -86, 23, -106, -79, 82, -39, 116, -21, -7, -99, 3, -6, -115, 38, -81, 52, -98, -10, -82, -39, 7, 42, 13, -74, 55, 115, -117, 14, 43, 19, -96, 104, 32, -103, -48, -47, -52, -89, 82, 65, 74, -46, -31, 91, -95, 12, 93, 16};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.50611153006);
    msg.setSource(8821U);
    msg.setSourceEntity(149U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.308206464809);
    msg.setSource(52465U);
    msg.setSourceEntity(29U);
    msg.setDestination(20588U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.488314009846);
    msg.setSource(32894U);
    msg.setSourceEntity(39U);
    msg.setDestination(19334U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.656453830743;
    msg.lon = 0.38172130651;
    msg.height = 0.28122486255;
    msg.x = 0.338905030005;
    msg.y = 0.607152633487;
    msg.z = 0.212139890238;
    msg.phi = 0.48407036785;
    msg.theta = 0.499100035189;
    msg.psi = 0.505612772736;
    msg.u = 0.780045285508;
    msg.v = 0.728074340885;
    msg.w = 0.138247447161;
    msg.p = 0.709585681673;
    msg.q = 0.403930104722;
    msg.r = 0.589655893209;
    msg.svx = 0.196848275467;
    msg.svy = 0.723375831622;
    msg.svz = 0.41674458879;

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
    msg.setTimeStamp(0.20114676443);
    msg.setSource(22426U);
    msg.setSourceEntity(238U);
    msg.setDestination(3886U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.963557380549;
    msg.lon = 0.0273284655306;
    msg.height = 0.91683833647;
    msg.x = 0.306114096259;
    msg.y = 0.0330344019374;
    msg.z = 0.968821789918;
    msg.phi = 0.798628637927;
    msg.theta = 0.294245006898;
    msg.psi = 0.316725818026;
    msg.u = 0.320131049819;
    msg.v = 0.998573625241;
    msg.w = 0.964497518276;
    msg.p = 0.296117240447;
    msg.q = 0.924613103488;
    msg.r = 0.505413732458;
    msg.svx = 0.106783536113;
    msg.svy = 0.212325603053;
    msg.svz = 0.739328624943;

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
    msg.setTimeStamp(0.794296627841);
    msg.setSource(62166U);
    msg.setSourceEntity(71U);
    msg.setDestination(41647U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.989032378743;
    msg.lon = 0.585703923867;
    msg.height = 0.350004644247;
    msg.x = 0.217995019618;
    msg.y = 0.480688689992;
    msg.z = 0.32332421546;
    msg.phi = 0.850823718069;
    msg.theta = 0.152155955535;
    msg.psi = 0.309440499324;
    msg.u = 0.91661386205;
    msg.v = 0.597991035502;
    msg.w = 0.752395615228;
    msg.p = 0.283081392837;
    msg.q = 0.293464793336;
    msg.r = 0.540495830968;
    msg.svx = 0.569960693306;
    msg.svy = 0.971909270898;
    msg.svz = 0.141524801054;

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
    msg.setTimeStamp(0.784280285489);
    msg.setSource(1477U);
    msg.setSourceEntity(72U);
    msg.setDestination(5970U);
    msg.setDestinationEntity(130U);
    msg.op = 141U;
    msg.entities.assign("WIQOIDCPCZQUCPULYOUUEVJNGVCSJGWTRLWQWFBNOHGCYCAPMEOZLZEBJXBOEMRIEKYVAJBOHOJARDZWK");

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
    msg.setTimeStamp(0.475184358271);
    msg.setSource(44264U);
    msg.setSourceEntity(28U);
    msg.setDestination(64855U);
    msg.setDestinationEntity(43U);
    msg.op = 105U;
    msg.entities.assign("KCKYMUWDTLNBJWHVNKDTVSGNSOTWBTAYMYBHQEWIPOVZTOMJSLBIGZQPWDYEABIWVGBSOHFQYJKPMAJZHAKVRPPDMVWDARXNRWHZNZGRUNFSXCQHOIDEXYQXTPXZJALUJVVFOHUYCXTORFBZOGZXXGGFNNEAIQXHIBJLMXCKFGFCURMNTFRCRQPURREABHODASLLFPSIWYZLDGTDQPYPEKWMFDZSIGLMHJSAECELITCSMUNJ");

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
    msg.setTimeStamp(0.277952348314);
    msg.setSource(46834U);
    msg.setSourceEntity(13U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(205U);
    msg.op = 220U;
    msg.entities.assign("RNMJIUZCJVQCFTOGEDMOIKFXODWPPMPNMJKUNQHLDPECGRZQAKNSRXZHCKAHXDVJOAZDPLPFMCXFYYWBCXANUGKTFLOWHTYPMEHIMDLXECSQDOGJUIEFCRBXDGJXCBVIOZIQVSNRNBYUZMAWILKAHVRCBUJHSOWYNNOALHBTRGTZGQLQYWFELBRVIPWNAYVSUDESRMOMVAZPJGSYQZKQYAXFRSWTFLUWJEPEHBKJIBSEFBVTTGQTKU");

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
    msg.setTimeStamp(0.110582367132);
    msg.setSource(46197U);
    msg.setSourceEntity(132U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(102U);
    msg.type = 241U;
    msg.speed = 64790U;
    const char tmp_msg_0[] = {-105, -20, 27, -106, -71, -53, -30, 53, -63, 31, -33, 104, 64, 11, -104, -50, 114, -12, -66, -103, -100, 58, 93, -50, 68, -84, -87, 70, -4, -28, -45, -17, 86, -23, -34, 115, -116, -33, -112, 99, -91, 51, -26, 96, 87, -69, 10, -29, -45, 118, -48, 2, 83, 7, -30, 105, -110, -64, 53, 75, 120, 67, -123, 24, -87, 33, -61, 16, -106, 20, 120, -64, -66, -111, 67, -10, -118, 72, 71, -113, 26, 13, 96, -53, -19, -44, -37, 98, -87, -97, 53, 109, -128, 93, -58, -5, 18, -119, 105, 28, -95, 64, -42, -101, -32, 60, 108, -20, -12, 25, -20, -76, -37, -75, -50, -50, -88, 55, 92, -28, -90, 5, 97, -64, 104, 111, -61, 64, 54, -11, 7, 2, -106, -44, -28, 63, 76, -84, 40, -35, -74, 99, 62, -61, -64, 74, -97, 36, -104, 59, 70, -36, 95, 9, 2, 45, 104, -113, -116, 12, 102, -89, -53, -37, -78, -92, 103, -49, 15, 1, -46, -98, -40, 94, 110, -52, -65};
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
    msg.setTimeStamp(0.936574900879);
    msg.setSource(28625U);
    msg.setSourceEntity(26U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(168U);
    msg.type = 145U;
    msg.speed = 24959U;
    const char tmp_msg_0[] = {35, 52, 71, 62, -50, -114, 0, -78, -91, -82, 122, 47, -9, 7, -53, -111, 98, 75, 24, -96, -10, 98, -55, -29, 125, 54, -30, -111, -70, -71, 66, 105, -3, 86, -19, 90, 35, -71, 24, -112, -89, -116, 46, -104, -35, 12, -22, -32, 21, -71, -62, 102, 32, 38, 10, 101, -110, -77, 76, -120, -88, 100, 70, -100, -27, 117, -9, 78, -55, 79, -91, -115, 68, -43, -24, 68, 123, -19, -125, -65, -77, -113, -91, 68, 20, -101, 77, -113, -98, 76, 44, -64, -11, -24, 7, 59, 122, -98, -32, -71, -67, 12, 80, 40, 108, 96, 22, -120, -37, 15, -9, 57, 8, 74, 76, -29, 93, -71, 16, -88, 17, 9, -4, -61, 115, 75, 111, 108, -39, 31, 41, -65, 41, -25, 11, 8, -37, -106, 65, -118, 12, -93, -5, -103, 0, -66, -65, -44, -84, 74, 54, -105, 93, 19, -3, -15, 101, -121, 108, -53, 23, 72, -33, -40, -8, -70, 89, 31, 50, -4, 54, 92, -17, 51, 96, -89, -25, 15, 37, 64, 45, -19, -76, 63, -50, 126, 121, 83, -119, 3, -69, 99, 117, -17, 74, 64, -102, -108, 0, -42, -48, -36, -114, -40, 110, -78, 120, -38, -87, -56, -56, -63, 106, 83, 33, -46, -63, -3, 62, 50, 28, -52, -57, -96, 111, -41, 85, 82, -96, -105, -36, 8, -46, -93, -11, -119, 44, 16, 37, -127, -123, 102, -37, 1, 30, 65, -63, -30, 69, 111, 83, -86, 49};
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
    msg.setTimeStamp(0.397247832799);
    msg.setSource(56579U);
    msg.setSourceEntity(186U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(9U);
    msg.type = 16U;
    msg.speed = 15411U;
    const char tmp_msg_0[] = {-47, 52, -30, -7, -77, -20, 26, -31, 51, -52, -72, -127, 118, 10, 37, -27, -122, 9, -95, 109, -71, -67, 7, -117, 72, 7, -73, 41, 24, -85, 66, -53, 9, 43, 78, 115, -28, -69, -81, -52, -15, -25, -52, 101, -46, -21, -77, 63, -100, 25, 16, -19, -28, 118, 39, 109, -70, 33, -34, 20, -35, 60, 83, 112, -75, 100, 5, 68, -77, 122, 37, -55, 25, 123, 66, -65, 16, 42, 0, 98, 116, -81, -12, 121, -87, -36, 54, 67, 93, 118, 8, -81, -57, 80, 21, 112, 122, -115, 97, 67, 11, -47, 48, 30, 23, 97, -103, 117, -69};
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
    msg.setTimeStamp(0.702376802607);
    msg.setSource(32682U);
    msg.setSourceEntity(42U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(253U);
    msg.op = 164U;
    msg.tas2acc_pgain = 0.468428216385;
    msg.bank2p_pgain = 0.73411079846;

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
    msg.setTimeStamp(0.62192714216);
    msg.setSource(14324U);
    msg.setSourceEntity(246U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(164U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.0467214885969;
    msg.bank2p_pgain = 0.792162042256;

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
    msg.setTimeStamp(0.16333273359);
    msg.setSource(2992U);
    msg.setSourceEntity(37U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(2U);
    msg.op = 44U;
    msg.tas2acc_pgain = 0.88082746554;
    msg.bank2p_pgain = 0.88812801245;

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
    msg.setTimeStamp(0.19464774045);
    msg.setSource(7479U);
    msg.setSourceEntity(238U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(23U);
    msg.available = 2787859792U;
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
    msg.setTimeStamp(0.519815001993);
    msg.setSource(27314U);
    msg.setSourceEntity(249U);
    msg.setDestination(42857U);
    msg.setDestinationEntity(85U);
    msg.available = 3264035821U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.586563284304);
    msg.setSource(12296U);
    msg.setSourceEntity(226U);
    msg.setDestination(34541U);
    msg.setDestinationEntity(218U);
    msg.available = 3025823050U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.545619729512);
    msg.setSource(7415U);
    msg.setSourceEntity(44U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(243U);
    msg.op = 60U;
    msg.snapshot.assign("PGABKHJCRZAKQEEYHPEKSPRBLBRWRMZCABTGVDPEWFVMJCGITXPXGQGVCPBOKNBSWPHFNDIJBZNMAZLSJNXUGMYINVYMJNXBOKGHQENSGUADMOYUIVDTZRPJWEIFYADOKDLEQWSFLFWXEOSEVKZATLTESPWDYMHIFZJIPVQHXCWVQCUYVFHLLRSRCAFTKYOTSLAQ");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 97U;
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
    msg.setTimeStamp(0.0553569138289);
    msg.setSource(10080U);
    msg.setSourceEntity(245U);
    msg.setDestination(4923U);
    msg.setDestinationEntity(240U);
    msg.op = 112U;
    msg.snapshot.assign("NUKYUSCFOSFMVBFSOSCINILKHFZRYVDTSWFEGGFKWIJLRXJKJORHHALCLQPKSDGEBWFQZMJZCQEHUYUAYYQWRBPOSHWNPYVZBYDTWLUDGABNVNUFMDQMXFJPIAMXXDDLGIHNRGITDBZKOZHOALNVMQJKZBXEKRTMEGUSDKCXAJNBHVYDQPZUZQROSQHJGWVPCCMRETHRPECAPS");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 30U;
    tmp_msg_0.speed = 61897U;
    const char tmp_tmp_msg_0_0[] = {51, -4, -42, 35, 102, -39, 37, 18, 98, -121, -7, -31, 17, 79, -47, -101, 30, 28, 101, 4, 80, -29, 79, 120, 29, -44, 99, -83, 10, -68, -80, 10, 67, -102, 31, 25, 14, 36, 54, -28, 70, -128, -95, -76, 62, 84, 13, -83, -48, 1, -128, 57, -56, 112, -54, -80, -52, 57, 28, 29, -43, 10, -29, 110, 20, -55, 86, 58, 36, -35, 118, -86, 7, -49, 87, 120, 84, -49, 18, -49, -92, 64, 120, 120, 108, 70, 75, 124, 6, -117, 125, -55, -62, 117, 67, 65};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.39593283329);
    msg.setSource(21634U);
    msg.setSourceEntity(89U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(254U);
    msg.op = 11U;
    msg.snapshot.assign("IEYYUXEGOQJJNXGXPSUFKQLHIHURMCAXHWWDQJIKMKJSKWYBPEDQACFGCEXOACNTZWVINSNSDMXMQRNMNSJVYROLSUSCFUZXTIMBPUMHRDLPJLANBSATGQKIZPZQGTHMTNHHIOLMUHXNFJFOKWRHBTJACKLMKTYDWZRLZTFGJHFNVGTEAYECPYKDOBVREGLUE");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.628019523168;
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
    msg.setTimeStamp(0.3918088711);
    msg.setSource(54048U);
    msg.setSourceEntity(152U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(97U);
    msg.op = 76U;
    msg.name.assign("MUGSASOKLERRSLM");

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
    msg.setTimeStamp(0.33566741369);
    msg.setSource(57487U);
    msg.setSourceEntity(159U);
    msg.setDestination(15959U);
    msg.setDestinationEntity(236U);
    msg.op = 21U;
    msg.name.assign("QPZVOWYKWAAJWLZMRKLNJKTDUDBHVKMZTMQHTRCVJQBJLFCSBOGYHGZCPDIALFQXHSUPSLZUWLJKMYMMHZCQDOMRIKFIIYUKWBCSNCYROYYGNLWAYNTAGXGIPGINUUXALJHOXEGTSTVSENXEGTPOBCAOOYGAABNHTCBZVVMVLQIRDWRUHIKXFJFCEPZODBIQRYBENMZRHPSUQVSMENESFEXPZFFWDR");

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
    msg.setTimeStamp(0.115955527089);
    msg.setSource(14623U);
    msg.setSourceEntity(79U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(247U);
    msg.op = 254U;
    msg.name.assign("VBXEPMCHIVSPIRDMHGCBIQCELPNRBGUZBYDLMMAITXAQOERGEUAZFVOWDAHEKGSQFEJBUBTNMWDOAXWQ");

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
    msg.setTimeStamp(0.211564784673);
    msg.setSource(23676U);
    msg.setSourceEntity(39U);
    msg.setDestination(36794U);
    msg.setDestinationEntity(54U);
    msg.type = 45U;
    msg.htime = 0.490909063731;
    msg.context.assign("ZUPYVJCXBHEMUKTOXZJTXA");
    msg.text.assign("JWVSORDPDZJJTDXXNUXKVMFSATKTYNQZGYZHIRADIAZSHGQLDPMKRXLJWBIFIRDUZUIGSJFXMFGDQMEIMSROWPHCLRNVFXHBFOVYMXMFTQZOQHPIXNDYGBJTKETWYOCAHYZEHYACNSENGZJAEVVVFWCDLERGNUETVTLNCWEPQTWXWCBUBONFMCRUOUMQCKLIJBPSJFBHAYWNKHSLQBQZJOHUGUBQWIPSRL");

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
    msg.setTimeStamp(0.190633038524);
    msg.setSource(60645U);
    msg.setSourceEntity(244U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(22U);
    msg.type = 28U;
    msg.htime = 0.798141646788;
    msg.context.assign("AXBUPYQCHXHZNYGDHVUQOJFYYHMRMEJUTOGSTTWIZTJKPDADXYSBQFZOJPZMLBWRGVYFWIBERMUXTAUIQFVCCVVATPBDPLQHORLEPSRRAZRNEGKLPGHLCKXVFJZCBYZNXVENAIEJSLORFTXIQMARWJWJDVQEUXKAPVIMKBFPGLWGENLUNJUEXAYVRNDZBTNGHICWQYOWHIIKSGMYO");
    msg.text.assign("PVYNSFRRBCJFABOPYSYPQYKVLLZUCZOPUMWZVXSRREDLRMVFCKQVNGNHTTONQOGFMYHVPVPCHXKKUMNDBTMXKXWAXHOTEFSHTINJRJZAWZOUDAHUWNQIDIUALIUJGEBAJTOCPQADYNEBSTIMYVIZDWXCFIBBDG");

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
    msg.setTimeStamp(0.323592292146);
    msg.setSource(50289U);
    msg.setSourceEntity(154U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(204U);
    msg.type = 217U;
    msg.htime = 0.394245782426;
    msg.context.assign("WLBEURLKPBCWSCWHPTGJHURVSCYDDADKPFZJXVKTRMAXIAOMJOMZLYREBRDUWQRZTSBHYYMJGHASUADEFBGLNZQLCVIQCRTMDAYTIWBKFAXFGUSQDHVPZPFONPTLNSQXOWWIGPWVVMPTOGEMYZXNJSBLCOGCIQBMKOGQVOXJESJNVHBDXKSUEHETUFQGYKKLNQYZRKAXAY");
    msg.text.assign("ADXVSSTPPDGLRBAOCDFHOERGEGXZWNKBAYKEWTJBBLPVBGOYQRVRSKZPNPGXASRJWYZNPKAOMYLCJMQQIQBJWVMKGMHKZAFCVHKESCMDKQWSZLASPANWTEOIXRTSZEUUBOVEFTCCGLUIDHWAPXTBBIMUYEULWMGZUVFVNXVXNWDLRDTUYGALTZEZMQJCYUXLIHNCJDIJOOJIS");

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
    msg.setTimeStamp(0.0818782387469);
    msg.setSource(60041U);
    msg.setSourceEntity(171U);
    msg.setDestination(8937U);
    msg.setDestinationEntity(169U);
    msg.command = 93U;
    msg.htime = 0.75830429492;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 135U;
    tmp_msg_0.htime = 0.967223850396;
    tmp_msg_0.context.assign("DQLFKZGRIVTGXHVKABOJJULWZLKGOTQLDEBUWCKC");
    tmp_msg_0.text.assign("ZWCLXGLOCLHAYQKUHZFACNUVJTVDPKDZUIQURPBEASIDEGYINQIWAKQMOTIETPGENXKHEBBTSUPWVQTMWQALOAJRTIYXSHQANMSAOGBDEZJWCMDGJZGSDXOTUHPRCEIYJSYTFGYXSKRRFCLPYVGFOJEGOBDXGML");
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
    msg.setTimeStamp(0.444957960088);
    msg.setSource(2921U);
    msg.setSourceEntity(162U);
    msg.setDestination(59014U);
    msg.setDestinationEntity(185U);
    msg.command = 224U;
    msg.htime = 0.411958175761;

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
    msg.setTimeStamp(0.609168389228);
    msg.setSource(7391U);
    msg.setSourceEntity(20U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(197U);
    msg.command = 87U;
    msg.htime = 0.814866998876;

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
    msg.setTimeStamp(0.410280464664);
    msg.setSource(16023U);
    msg.setSourceEntity(71U);
    msg.setDestination(51488U);
    msg.setDestinationEntity(199U);
    msg.op = 189U;
    msg.file.assign("GLWSMMKFOMZVIUZTVCBPJAESLXFEEAZEKBIGPESUFIGBRDIULVILWTCAJWNRFYGOQRBVLPNKGSNZJKAVWIGDAFQOCZKYHEXJWSUDDCHMY");

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
    msg.setTimeStamp(0.519321848047);
    msg.setSource(31701U);
    msg.setSourceEntity(60U);
    msg.setDestination(12202U);
    msg.setDestinationEntity(100U);
    msg.op = 50U;
    msg.file.assign("CUQYJHONCPQRKWMPOFNZCQUNUDIXARCBBVPRQQANYAWGZMWDOXGTKPFVHJOEWMDERMEJKSWRWZFTMZWGDIUERLUCVDEOVIZALYKTVUQHSVMPQSAXZQKFJCNUTXOBSABVBMGNPXNRHWJLSYIHYBPZAUTRUBCQVSBFFXFOYRYLHMNMYDGKJANLTCSLIYJBROFVZDLHXDEZEZOMBFHJGG");

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
    msg.setTimeStamp(0.321484022218);
    msg.setSource(23554U);
    msg.setSourceEntity(119U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(171U);
    msg.op = 94U;
    msg.file.assign("UYXSVMURLTRXUWNLNPPVWCQTUTGTERNTYEKVLZMVAKN");

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
    msg.setTimeStamp(0.715807308247);
    msg.setSource(27123U);
    msg.setSourceEntity(240U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(117U);
    msg.op = 249U;
    msg.clock = 0.314821780114;
    msg.tz = -117;

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
    msg.setTimeStamp(0.499739369603);
    msg.setSource(24587U);
    msg.setSourceEntity(57U);
    msg.setDestination(56367U);
    msg.setDestinationEntity(156U);
    msg.op = 231U;
    msg.clock = 0.864893340798;
    msg.tz = -45;

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
    msg.setTimeStamp(0.157586001934);
    msg.setSource(55307U);
    msg.setSourceEntity(199U);
    msg.setDestination(45802U);
    msg.setDestinationEntity(204U);
    msg.op = 119U;
    msg.clock = 0.177960478142;
    msg.tz = -19;

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
    msg.setTimeStamp(0.493624622985);
    msg.setSource(50044U);
    msg.setSourceEntity(68U);
    msg.setDestination(59614U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.161499964513);
    msg.setSource(4503U);
    msg.setSourceEntity(98U);
    msg.setDestination(52804U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.0539219377161);
    msg.setSource(9227U);
    msg.setSourceEntity(231U);
    msg.setDestination(6973U);
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
    msg.setTimeStamp(0.550867262624);
    msg.setSource(17202U);
    msg.setSourceEntity(100U);
    msg.setDestination(49526U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("WJMTFGSMJDIFPSYZWIJROIWGUZZIUKYMXTNXPSDWVCMXVYCRHTOZBEBBCDBMYPXNAUVZFGKWCAGFVMUQJQCVQKLKWYQCPFCAGKTTFDXTRIGYAVQNSNHFWQNOKEVXEBFRNPJOARWSXIXDPDGWKBOUCCXLOIAVE");
    msg.sys_type = 213U;
    msg.owner = 12726U;
    msg.lat = 0.164928016137;
    msg.lon = 0.752900417345;
    msg.height = 0.390984796126;
    msg.services.assign("PLWJRHKMAQBLYPSTBUFOJYPJRATGZLKHTYEHURMVNDJGDPKVXRVTBRIJGTVGEDWCKVVLQECLCXQESWWXXVXDZMQIBLHSUOEFCWDUQGIFNUFIDZYTMYWEXBQUMGOFHYKUPSI");

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
    msg.setTimeStamp(0.856519397743);
    msg.setSource(16290U);
    msg.setSourceEntity(239U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(43U);
    msg.sys_name.assign("IWQEDOHBYNOJYSIWKYOQWNGOFJEPHQVZVBTSGIVRWDVMTTYASZDTRFXKTADJIKWKXJMYQPKPAVBQYFFDRBLYWRASQBUNRWERMTXSCZHZQHVGWOSEUCHELHLZUUYMAINCMDBNTFKELXJDGLPAUHDWXYGOANJVFZMLTJFZIMCJOXCZJSRDMAQLCKAZRXZURKOVFNGPKY");
    msg.sys_type = 152U;
    msg.owner = 64776U;
    msg.lat = 0.791245602843;
    msg.lon = 0.867993651514;
    msg.height = 0.330956954599;
    msg.services.assign("KYDSOZCPQNBQTOZMEKTOQCBJYNCJKAAWUNNZMRQWOHNVQWNLIAICFLHKYZ");

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
    msg.setTimeStamp(0.966009324425);
    msg.setSource(20158U);
    msg.setSourceEntity(106U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(139U);
    msg.sys_name.assign("SBAVDBQXTZYWUMHUXCGSSQGXZJEFIMKYHFEKZPIJGPRXAEOISMEYZVKPZIHNEHNHOCNWSPYAZNINRERATDTVZJZHWMEPTICWMAAXVTKTVGCBJUWNCLAUYBIDVOPDLFRWKWXKOOCXUOBLXSQFYUGLDOEJDOLGBKBGWYFNZFNJHHDRDTQFEURTLDJWXNVMCKUYFQZCJCPQHIMSGGAWPMSVYQV");
    msg.sys_type = 119U;
    msg.owner = 4505U;
    msg.lat = 0.989340203138;
    msg.lon = 0.747052081762;
    msg.height = 0.826875244782;
    msg.services.assign("HDTYNGMAEZIMNIEIEWXXIWHQGPKMAYQCRTMVVKGEXCWPJQIKAOGJUUFQRJUUXBYSGZDGDAQIKOUJDZNQJFNDBLLEHWMIKDJRVNOMXFRH");

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
    msg.setTimeStamp(0.00681440237377);
    msg.setSource(48544U);
    msg.setSourceEntity(127U);
    msg.setDestination(65472U);
    msg.setDestinationEntity(99U);
    msg.service.assign("OZUIFZDWAGVIAVRNYSJHEKVECHDVCSILDBVAIHZMGSFKXILRKOBKXZEZYYKKMULJWQOFVWNHTCRYUQDALXGTVTSPNPGPGGNGJWCRHSNHBARAWYGXTNQWEHILQUMJDKLUAHINCBXNTTYJDOWMBYPYUDKZDCGFMATWRPIOEGACPEWFXNXKMXEBQVJXCYOFPRTLOJFQUVKPHQRBOQLA");
    msg.service_type = 250U;

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
    msg.setTimeStamp(0.786758819966);
    msg.setSource(56030U);
    msg.setSourceEntity(100U);
    msg.setDestination(51200U);
    msg.setDestinationEntity(213U);
    msg.service.assign("LLPKMYZAJUZFJZSCQDAYDZQNKZNIDSMKGTAEPYSJRMUXGWCGOOSYNGRGNXBRDFEBROCUVRMVQOIYVQCBEGIAGUVYIVKVJXQTJSLOOOYCDHCEIMFGNNTWZXFTPFSQPEVTJQVHZ");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.158577163578);
    msg.setSource(1687U);
    msg.setSourceEntity(183U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(41U);
    msg.service.assign("QBADEZKDEDHHNQVGBKXFMCSOZGYKFEKMXGLHJBLJFPXTYHXEUUBEWIESZRLVZQIDPMRRXQVCEMYAONTVVBXTSUUQHFRUCHAYPUARWCEEUTIIISMYYTCSFGAQNCJZVRHMVOHRJDVQAGLDAGCLJFBMZZIYTPAYWKYKCJFSFGSPXTGTXWCMBKFMQNMOEZRNOIXCJWTLTWLPLNOKHGZSRDDLONUULPUIHBWIIKGNNKBBFPWJWZNDYDSAAP");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.470431565747);
    msg.setSource(31740U);
    msg.setSourceEntity(205U);
    msg.setDestination(40937U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0275051344697;

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
    msg.setTimeStamp(0.275740651862);
    msg.setSource(40218U);
    msg.setSourceEntity(69U);
    msg.setDestination(30895U);
    msg.setDestinationEntity(196U);
    msg.value = 0.788014868629;

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
    msg.setTimeStamp(0.54753806778);
    msg.setSource(29798U);
    msg.setSourceEntity(176U);
    msg.setDestination(10852U);
    msg.setDestinationEntity(251U);
    msg.value = 0.21568864593;

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
    msg.setTimeStamp(0.425856411438);
    msg.setSource(31721U);
    msg.setSourceEntity(98U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(143U);
    msg.value = 0.610476014228;

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
    msg.setTimeStamp(0.0811903377585);
    msg.setSource(30223U);
    msg.setSourceEntity(105U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(226U);
    msg.value = 0.774662444351;

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
    msg.setTimeStamp(0.385967008759);
    msg.setSource(39492U);
    msg.setSourceEntity(66U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(196U);
    msg.value = 0.842339278002;

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
    msg.setTimeStamp(0.847739974644);
    msg.setSource(527U);
    msg.setSourceEntity(51U);
    msg.setDestination(21687U);
    msg.setDestinationEntity(196U);
    msg.value = 0.265994208767;

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
    msg.setTimeStamp(0.154915279091);
    msg.setSource(16490U);
    msg.setSourceEntity(82U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(10U);
    msg.value = 0.29320787998;

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
    msg.setTimeStamp(0.753804577622);
    msg.setSource(13291U);
    msg.setSourceEntity(213U);
    msg.setDestination(44327U);
    msg.setDestinationEntity(239U);
    msg.value = 0.294142232631;

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
    msg.setTimeStamp(0.0543430783351);
    msg.setSource(52702U);
    msg.setSourceEntity(19U);
    msg.setDestination(1685U);
    msg.setDestinationEntity(45U);
    msg.number.assign("CJTUAXZTNZBPSHLFTRMBBPXHDCKWCCMAPVOMYHKFUCKJRFSVMYYIQUERIHYEGGMJZOCVNWTWGDQFYXLXBOQVWJFFUGAUQRXTSAKQJQCSNLVMFOWVZCPDENMBQUHEJVNAWRPWWDRPIOMPOUKQAIENQUPGNDNNXSTISUEROCSKKHLHEJOTDYLRTHB");
    msg.timeout = 44195U;
    msg.contents.assign("YPXWNRAJPZSCNPPOHQVWSKBCBAGAYMSZMWSGOLDVGXZGTQBQAHUIMCVZXXOHIQCMKYLAYJDIVUUZBPOEVKYNTFFXBWEDBGFYFSHDJIEMIFTOZJGUDOVQGHWTULCIJAQFRNOIKOCMQNVPJCWPZRXCMHKWAINRBASBINSKMOCVPHMYTV");

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
    msg.setTimeStamp(0.0118917243285);
    msg.setSource(3195U);
    msg.setSourceEntity(111U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(100U);
    msg.number.assign("JFUKMOQXHFDDUQVNFRGKBPRLETIOWBMPGUGFDYHFCRXYPEVCKLXBZBHIJGFXUESZCZGFSOIKDATLYUOBLKNMPBFKBCMKRDPMSIQEQYDINEJQATOSEIOKDYHSODUTVGKCGJZRHRVMZTXVADWRVLUQGJPLYXNENJAZNGZTSZBOWP");
    msg.timeout = 56349U;
    msg.contents.assign("ANAYOODBMZLQOLICNMEWUJTCMUDAXVBQHVKRSFYMSDWOYFJILYKYQDYZELRZAZGQEQPQGIWVNPFAAGECHACSVWSDTCILSDNCBUEGVTTLEHFRHHGISMDNXQSNGP");

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
    msg.setTimeStamp(0.892327987571);
    msg.setSource(6920U);
    msg.setSourceEntity(9U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(188U);
    msg.number.assign("VZIDIKNUYRBGBWUZFVPPFUVXNSIFZUIYOHCFXNQBFOGQIQPUPZQOSRQSDNECCBBOWULWEHBSCDNLMOQVEAOJJGDBKKWDZFENSAYUAZHLQRGTXTBMPMXRRJPXXAKSQOENYTLLCXTZG");
    msg.timeout = 32063U;
    msg.contents.assign("YBJIZNPKCWZUHNWQZKSFEYZQKWNGPKEIOZKPROIHUNTCDSRTCWBCUTMPRBPWNSKBRAIVYSKJUOEGHMTWDVM");

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
    msg.setTimeStamp(0.661570802133);
    msg.setSource(47213U);
    msg.setSourceEntity(42U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(131U);
    msg.seq = 1802037477U;
    msg.destination.assign("MDPIJSWQUTYZSHQCHCRFFZYRENSVEYBOINEFMDGJZNIWZKHKZOPHKPEYTIQBQFJGAXNPNVZPYEGCLOAGABMHDTUWMHTBGNQVDFEY");
    msg.timeout = 27483U;
    const char tmp_msg_0[] = {45, -112, -73, 56, 30, -56, -111, -118, 10, -58, -117, 45, -64, -52, -29, 70, 93, -95, -71, -67, 54, -26, 29, -19, -1, -54, 126, -20, -21, -97, -21, -72, -118, 7, 74, -18, 78, 32, -14, -65, -124, -20, 5, -75, -119, 73, -123, 31, 57, 108, 54, 112, -52, -96, -65, -19, 68, 49, -28, 122, -8, -37, -86, 95, 84, 80, 13, 110, -106, 64, -91, 47, 1, -3, -39, 120, -45, 112, 17, 15, 96, -28, -127, 34, -33, 20, -101, 51, -44, 24, 118, 18, -94, 77, 65, 64, -73, 19, 44, -121, -121, -19, -42, 70, 109, 25, -40, -121, -107, 12, -29, 66, -62, 123, 112, -54, 14, -85, -120, -58, 32, 91, 121, -17, 99, -59, -101, 17, -17, 99, -33, 101, -82, 59, 100, -115, 29, -101, 47, 4, -86, -128};
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
    msg.setTimeStamp(0.348719097558);
    msg.setSource(52212U);
    msg.setSourceEntity(158U);
    msg.setDestination(3130U);
    msg.setDestinationEntity(206U);
    msg.seq = 2570850941U;
    msg.destination.assign("LCJHOCCMHUWVSFXAPPYAZMNNPXIOKQWYFDPFVREJTJANLKZPUXRSUHEQOTZXGDRNTVIMUEUJGMXYBGD");
    msg.timeout = 46019U;
    const char tmp_msg_0[] = {19, -95, 21, -110, -57, -123, 48, 45, 85, -34, 20, -117, 121, 24, 45, 69, 14, -11, -50, -64, 22, -98, 65, 56, 111, -84, 86, 81, -30, 96, 22, 102, -63, 26, -7, 21, 106, 93, -81, 94, 60, -114, 79, 122, 24, 3, 103, -80, 50, 121, 77, 50, -127, -71, -85, 21, -97, -59, 67, -31, 22, 17, -92, -92, -102, 9, -9, 107, -112, 16, -1, 117, -6, 38, -58, 120, -87, -112, -90, -31, 88, 1, -67, 105, -126, -96, -41, -121, -123, -87, -127, -66, 107, -6, -77, -10, -111, 124, 85, 22, 43, 45, 101, -18, -85, 15, -97, -101, -126, 2, -10, 90, -102, 37, -87, 57, -115, -5, 95, -115, 78, 25, -24, -69, -109, -42, 2, 8, -105, 111, -19, 111, 31, 90, -27, -49, 43, 4, 3, -120, 28, 83, 18, 27, 49, 33, -119, 0, 108, -38, -28, -95, -68, -111, -27, -97, 65, 7, -34, 89, -116, 110, -75, 103, 106, -84};
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
    msg.setTimeStamp(0.988091730175);
    msg.setSource(36929U);
    msg.setSourceEntity(26U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(222U);
    msg.seq = 3490565941U;
    msg.destination.assign("ZAYZGISCARJWNIJWNAMWEMMAEQYVSMWUYJULNSJAKDGIGHMFKZBXUPAXUZHBZDRHGNWOVVLUXFDXONPTSDQLQNVVKFLCV");
    msg.timeout = 48211U;
    const char tmp_msg_0[] = {-82, -45, -110, -46, -84, -96, 63, -54, 69, 123, -51, -76, -88, -108, -102, 102, -112, 18, -15, 126, -120, 5, 97, 61, -99, 54, -26, 26, 84, -48, -103, -2, -62, -20, 68, -40, -83, 64, -47, -8, 2, -33, 91, -68, -22, 68, -30, 26, 35, -111, 82, -97, -75, -115, -84, -36, -73, 122, 109, -38, 14, 107, -40, 13, -78, -91, 55, -41, 19, 79, -84, 100, 49, -70, -49, 49, 31, 94, -115, 7, 35, -123, -99, 21, -85, 30, 75, -95, -32, 69, 31, 36, -82, -26, 102, -85, 44, 64, 20, 10, -16, -102, -95, -73};
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
    msg.setTimeStamp(0.905286838404);
    msg.setSource(1365U);
    msg.setSourceEntity(200U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(16U);
    msg.source.assign("UVNFCOMHSKKSQADMKLVXFLWFHKMHYDDHONADHJULSRAUDAEOGHAIUSUBYPPXFUDCGRSSSVKXVNNGZDAFIMBTZRGMBLZXDBBKWBTAJWEPYCEWWVJWRHMDAVZIRYLCWAVQOTHTEKOFGTQRGZIMGMOJPIWCJRTJPZXEYTZYMPECIMVPFWRQQSU");
    const char tmp_msg_0[] = {91, 82, -31, -55, -86, -45, 28, 81, 8, -98, -107, 78, 1, 73, 73, 1, 101, 43, -22, 2, -114, -81, -41, 54, 105, -94, -71, -79, 29, -110, -104, -92, 46, -119, 35, -49, -73, 99, 51, -66, 76, 6, 57, -7, -83, 19, 33, 106, -5, -17, -4, -37, -92, -42, 14, -77, -111, 105, 97, -114, 58, 59, 91, -48, 15, 25, 80, -60, -30, 37, -86, 103, -16, -89, -122, 23, 113, -60, -85, 5, 126, -59, 46, 51, -28, 112, 37, -85, 20, 71, -45, -60, -86, -44, -89, 96, -126, -67, 6, 75, -1, 109, 44, -84, -60, 110, 115, -58, -72, -106, 110, -5, -3, -100, -128, 11, -72, -100, 116, -15, -1, 2, 55, -98, -65, 39, 20, -14, -95, -7, 80, -84, 38, 79, 11, 91, -67, -55, -41, 76, -56, -91, -29, 98, 58, 30, -108, 72, 32, -77, 60, 93, 97, -49, -124, 84, 126, 125, -54, -81, 3, -83, -7, 106, 38, 77, 48, 30, 30, -47, 57, -27, -95, 66, 87, 55, 52, 39, -20, 67, 49, 124, 88, 77, -14, -72, -6, 32, 26, 1, -85, 33, -112, 20, 67, 58, -57, 6, 9, 21, 64, -57, 111, 49, -29, 93, 10, 8, -106, -78, 45, -54, 83, -84, 103, 76, 6, -34, 19, 90, 15, -87, 85, -61, -63, 95, 60, 90, -39, -120, 77, -79, -2, 13, -24, -61, -85, -64, 82, 70, -84, -114, 91, -122, -42, 110};
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
    msg.setTimeStamp(0.136691360638);
    msg.setSource(58451U);
    msg.setSourceEntity(17U);
    msg.setDestination(54257U);
    msg.setDestinationEntity(33U);
    msg.source.assign("EETHJUFVUFRUC");
    const char tmp_msg_0[] = {-108, 89, 119, -78, -79, -120, 15, -65, -56, 9, -38, -57, 64, -62, 41, -25, 43, 42, 74, 90, 62, 125, -56, 1, -103, -49, 4, -5, 68, 110, -7, 28, -27, -77, -51, -51, 3, -128, -2, -54, -94, 22, -11, -85, 59, -122, -3, -1, -51, 27, -60, -110, 68, -46, -57, 90, -28, -72, 81, 126, -42, -1, -79, 28, 76, -104, -87, -60, 47, 126};
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
    msg.setTimeStamp(0.215745147563);
    msg.setSource(27975U);
    msg.setSourceEntity(153U);
    msg.setDestination(49279U);
    msg.setDestinationEntity(63U);
    msg.source.assign("CZMJGHJEWMPTMTQFJHHELYFCNLUXVDDJBCZTEMYWNRXPWSZDKDNSUFJVSJOBOTBSZIXUQOKQNRYKQHWEMCYYXUSAHEVMEAXGARRKEZWMYSTBGICUGFTYBFNGXTTPQVVJICVIY");
    const char tmp_msg_0[] = {101, 10, 39, 61, 51, -2, 18, 92, 90, -22, 123, -23, -82, 44, 95, 122, 125, -112, 45, -84, -10, 56, -101, -39, -51, 12, 104, -86, -127, -113, 12, -80, 74, -43, 83, 57, -4, 45, -127, -21, 24, 112, -94, -15, -55, -78, 17, -82, 65, 67, 94, 87, 55, 29, 107, 47, 34, -50, -87, 110, -51, -116, -106, 19, 111, -62, -127, -9, 24, 40, -58, -82, -22, 94, 31, -121, 94, -53, -124, -51, -30, 45, 118, 26, 2, -8, 57, -5, -79, 121, 70, -30, -19, -68, 44, 2, 38, 44, 76, 16, 65, 17, 79, 96, -90, -26, -93, -116, 5, 101, 118, 100, 12};
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
    msg.setTimeStamp(0.579382253952);
    msg.setSource(39062U);
    msg.setSourceEntity(71U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(62U);
    msg.seq = 792879541U;
    msg.state = 242U;
    msg.error.assign("QMDKDUGMMUGJNCNGOFRGBSNKNOKBRXKWGZDWXGBJILUAZQZSRUTFHDXVZXNSLBI");

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
    msg.setTimeStamp(0.691663657705);
    msg.setSource(51647U);
    msg.setSourceEntity(30U);
    msg.setDestination(47087U);
    msg.setDestinationEntity(251U);
    msg.seq = 2403293032U;
    msg.state = 175U;
    msg.error.assign("POOXGBFQQFCMRKLSBDOURAOYZDDUILXRWQRKDASSJFAFEDJIVUMHDYWIOMWWROPXRMTDSCUZSBZMVNAGAKSDZYRVHGVTXCZLVQBNPWCMYEOTNWJRZHLLOAP");

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
    msg.setTimeStamp(0.502587390204);
    msg.setSource(29963U);
    msg.setSourceEntity(23U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(145U);
    msg.seq = 805213671U;
    msg.state = 15U;
    msg.error.assign("QVCBGZSXZYKBLPONAHQQDWFRMIBDXFWYGJNNZNDPHVDIPJSMWGOPLAIUVBBSBHOEQSQXSGFOFQBIIUGPVQQVCCTAYRTAATHRO");

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
    msg.setTimeStamp(0.454387760248);
    msg.setSource(45050U);
    msg.setSourceEntity(87U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("ZIEYHABXXDMUCOKKJTNSMYAAUHXVTVIQKCPMOSHSSJHOWFKFLDJHEQVQDEJZWAODSGWQUVFNPDTFAGWETWHWCBNZFTMHAQVXPLUBPCLOJTCLPYIMZLNLXFGWZCSJSRMODEJRQYTTUFOQLZ");
    msg.text.assign("RDDLPBBDVLPEVWBYGHYTEYORSMYSRCGBXQSCGEXPZYIPJJXCTMIAGVWOFCFAKTBUSUQPKKCKNGBIVLYNNDRDTLPTQYIRFMPLHNMBNPIZOROJSLNZMHHBEFSJHNVKENZTCXJZXLQIJWWHVJQUASRFWOPMOUSAMUADHUWGYCHDMIKGYRTGQEGXQSKYCDWXQWWOFLAJI");

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
    msg.setTimeStamp(0.805259836074);
    msg.setSource(14817U);
    msg.setSourceEntity(30U);
    msg.setDestination(65001U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("YNAMXVBFGGXTCEHCOXMDIDQHMZDFWGTMUTZJMJBHUSGKJKEUGUANIQWRWUTNFKJETQSGJZRCXRPVRCMVLPCLYKYTXPGPHOBEYIWYYZZEDWPXRGUFUJLVAONHOBMMUCBIYASTLOHZAVBLTARQVSDADIXLPW");
    msg.text.assign("RTVEKZGLRUPGMDCSCADNMEHVGYMSVTQJMEAIWTSCIENXFFAUQELSLXCKLDVIFDLZWODRFXQOQUTXFJLVTJNYOXOMFSGUYPZHIUXLWQKQMYARHYIXPBAPNCAPPHJKHNBCFROQWMTOVUANSGZNZPHDB");

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
    msg.setTimeStamp(0.700341809096);
    msg.setSource(42431U);
    msg.setSourceEntity(43U);
    msg.setDestination(62470U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("PLVHKXBVOAOSCCYVJKNEXADQDPXKQVKLOCPRPFZZRTXMQQRWYIMGFMTGLYHGTSUSMISRFUHIBJYRAAWECWVMQXRUXKUBWAEPNXXYNWJLPNLKJZIHFABYNVFQADZYFJUTNZKPVVNKOWUWVEWGZGPCYOET");
    msg.text.assign("HYFAUWBNMXZAAJENHMMBARAIWGGYVDCOAIWEDPBXVOKVWUJLGRJYRRIUVYKOZNZXMPUPRQUNLSQEHPKCRBLBZFOSZHIRTCVOPWOVCSLXLNYJELYDQTFXJIGQBAQZIDNMTBSMAFZFLFJERVXKQSIGAEZCCTKDUYPTQCZKESHBRGFTDJMYFTNUGYOXHWFLXVMIIHEDNLKUWAJOCFQDVCYGUHXB");

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
    msg.setTimeStamp(0.427444719906);
    msg.setSource(19034U);
    msg.setSourceEntity(132U);
    msg.setDestination(41777U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("XZRHQBQFVMCWFWTOIARKYEYKDALTKRVZTMMMECDFAHMWNHEYVYSYRIVOVSLYSEZEVPKXTSAQGWHJCDNEJKHWXPOQLUWVWODEUNJAJBKWPHHCGWZOIAJLBUHNGJCPFDHSSPCYGAMFZENTIBUR");
    msg.htime = 0.391672514073;
    msg.lat = 0.317316098401;
    msg.lon = 0.186152564787;
    const char tmp_msg_0[] = {-90, -126, 21, 105, -91, 29, -70, 62, -105, -33, 44, 104, 121, -19, -122, 110, 114, -47, 35, 37, 105, 117, 13, 16, -94, -116, -64, -40, 35, 65, -78, 95, -40, -9, -54, 62, -112, 50, -86, -23, -66, 122, 41, -74, -109, -45, -30, -56, -97, -125, 88, -26, 15, -105, 36, -111, -5, 51, 89, 115, 92, -127, 18, 26, -61, 56, 48, 41, -121, -110, -110, 37, -101, 5, 12, -74, -76, -19, -60, -75, -52, 121, 30, 126, 61, 54, 102, 6, -66, 34, -119, 70, -85, 5, 54, -24, -25, -14, -58, 10, 90, -95, -81, -127, 21, 64, -116, -47, 20, -107, 64, 18, 23, -128, 52, -13, -20, -77, -49, 20, -62, 32, -99, 21, 36, 104, -73, -82, -114, -67, -124, -75, 105, 30, -67, 67, -8, 90, 105, -47, -119, -90, 95, -24, 112, 4, -5, -33, -48, 120, -75, 34, -95, -17, -32, -117, 42, 97, 112, 27, -66, -53, -94, 60, 125, 58, 57, 33, 10, -86, 104, 82, 107, 30, 119, 47, 43, -41, 76, -59, -29, 79};
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
    msg.setTimeStamp(0.423823194405);
    msg.setSource(18840U);
    msg.setSourceEntity(20U);
    msg.setDestination(25827U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("LWIWXMTFUPJOJEOXLPRUHWLSFVWEABAFFFOGZKWQLJGLDAZURQCHVTQAAOKFCUPGWBPNXS");
    msg.htime = 0.26321707647;
    msg.lat = 0.954317553008;
    msg.lon = 0.621754389604;
    const char tmp_msg_0[] = {-55, -12, 17, -12, -71, -121, 63, -7, 89, -39, 114, -74, 0, -60, -104, 126, -43, 96, 0, -128, -6, -8, -117, -46, -57, -109, 72, -111, 39, 119, -7, -20, -71, 90, -60, -90, 98, -26, 74, -77, -34, -118, 57, -62, -52};
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
    msg.setTimeStamp(0.676168043796);
    msg.setSource(16577U);
    msg.setSourceEntity(132U);
    msg.setDestination(5713U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("FHRFZJJCISILKPSWAOSWNSCSIMATZYHQZLGKQTMAFJMOBUELBWJWMRRDHTQUUZEVTUNPHDTBGSARGPRJDQFGQCOGTMPDPFJPMUWBGTTJVPKYLQUYWYECSZLNVCXRJONUOIWQAENIKBVWHAGYUNBXLDVASXPOSDEQUEIXDRDIVXYZKLLCWJCKAJFMOHBCIDDHNIEQ");
    msg.htime = 0.799717487207;
    msg.lat = 0.387297606745;
    msg.lon = 0.0934527842933;
    const char tmp_msg_0[] = {-38, 110, -25, 73, 93, 103, 45, 94, -14, 40, -49, 60, -37, -37, -18, 113, 24, -79, 17, -113, -94, -101, 118, -29, -92, 115, 76, 119, -12, 12, -27, -14, 75, 63, 64, 57, -20, 99, 1, 41, 53, 59, -53, -54, 113, 1, 113, -16, 71, -82, -67, 4, 18, -118, 4, 15, 3, 41, -83, 120, 17, -100, -6, -120, 32, 57, -67, -26, 89, 91, -43, 77, -69, -10, -101, -87, -72, 11, -114, -53, 94, 9, 7, -107, -97};
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
    msg.setTimeStamp(0.113805934386);
    msg.setSource(36202U);
    msg.setSourceEntity(29U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(48U);
    msg.req_id = 19477U;
    msg.ttl = 5985U;
    msg.destination.assign("YREXVAONCPWXXLVLNIDVUGQIQHWYQLMANKLTEHUAZBFURXRAYPLGMCMFETDRYBKZAEUFZZBEQDJFZOHHROEGFUQIRZJOBDZCQVPRUESPYJTVUVGJHIXUPTSVMXOHARYBKFTZGVEYFHSWLQVJJFPKYMMKJQWCUENICPSJBLKREVQFLGKBKSGDCUOSHNGDWROKAMTCACSONZWBWBYGWTTJMXPAXZICSTKQWLPXIIONJ");
    const char tmp_msg_0[] = {35, 81, -123, -62, -7, -76, 90, -116, -109, -82, 19, -94, 9, 35, -95, -15, -105, -77, 88, -16, -56, 9, 62, -65, -111, -106, -120, -85, -30, -89, 11, 30, -40, 74, -114, -19, -57, -124, 51, -101, 68, -86, 81, 90, -25, 19, -109, -42, 94, -1, -25, 88, 41, 105, -103, 94, 73, -86, -4, 95, 97, -28, -85, 24, -90, -75, 107, 75, 98, 12, 110, 12, -52, -15, -113, -72, 14};
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
    msg.setTimeStamp(0.818787169846);
    msg.setSource(63585U);
    msg.setSourceEntity(122U);
    msg.setDestination(24674U);
    msg.setDestinationEntity(89U);
    msg.req_id = 12263U;
    msg.ttl = 59525U;
    msg.destination.assign("KHLLBZAJLGJVMMKTRDUZSHYQWSU");
    const char tmp_msg_0[] = {110, -1, -105, 116, -88, -111, 21, -125, 45, -64, -48, 121, 54, -64, 6, -121, 75, 23, -123, 109, -4, -56, 54, 97, 19, -81, 103, 91, 91, 89, -89, -83, -67, -32, 112, -22, 116, 83, -71, -40, 26, 108, 58};
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
    msg.setTimeStamp(0.695185171369);
    msg.setSource(46665U);
    msg.setSourceEntity(215U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(216U);
    msg.req_id = 61324U;
    msg.ttl = 44887U;
    msg.destination.assign("OALFCTHWFNXZMIETBENGMHILYBRRFVAKUBAZZQGMMOPYEXSKXGQPOCMXBNVDIIFTDSQWUKSSXZKZVPFRGQLZTYQSBEATUAIOHUSJNWEESHBXKVOEWEBAIRRPCNBMBVURRIOYTMLGJWIRKLLJTWVTJDMOQCNFHLDPYARCYNEABGVPFJSVCHLXQJNWXVPYJQZHIKNYPYECPUCNUHVOY");
    const char tmp_msg_0[] = {90, 107, 26, 60, -57, 78, -90, -51, -108, 44, 48, 37, -101, -99, 119, -47, 62, 18, -48, -96, -49, -43, -50, 123, -83, 50, -8, 120, 17, -2, 84, -3, -49, -124, -10, 60, -42, -30, 112, -34, -105, 6, 106, 46, -124, 112, -80, 22, 78, -107, -2, -123, -84, 54, -51, 51, -100, -93, 125, 85, -44, -97, 119, -20, 84, 98, 22, 55, 34, 94, -15, -58, 99, -68, -6, 61, -113, 62, -124, -65, -93, 7, -105, 74, 56, 86, -11, -127, 3, -31, -16, -51, 103, 37, 94, -128, -43, -66, -15, 70, -37, -125, -69, -14, -87, 94, 0, 56, 76, 37, 63, 95, 98, -96, 122, -34, 56, -83, -81, -65, 95, -109, -8, 94, -32, 68, -83, -59, 13, -1, 90, -1, 14, -74, -103, 112, -99, -13, -29, -15, -33, 94, 99, -58, -99, 58, 15, 29, 8, -45};
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
    msg.setTimeStamp(0.201309319514);
    msg.setSource(27117U);
    msg.setSourceEntity(54U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(214U);
    msg.req_id = 58200U;
    msg.status = 224U;
    msg.text.assign("PFFLVYKFLZATPXMCFOZRFRJDONCQSDXCUSLZPIMFIEBEBRZTJMAIHYLJKNBZBENUNDVSYAJYAGEPUHPEXBEQOLZUGHFEURTHXWXHFPKJLIGCVMIWWINIVSBSRHJEUHTVIOAEFWYDVUWZGQCEWVWCLOJUDBKQTRDMMNKJQBGCVOKGPWQRZMFOWAZDHILNSQARKXDYLLYOTVXTIXUMYQGJSBOWARDXNCZYNGJVTHDKO");

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
    msg.setTimeStamp(0.185522259);
    msg.setSource(58141U);
    msg.setSourceEntity(8U);
    msg.setDestination(18640U);
    msg.setDestinationEntity(1U);
    msg.req_id = 33545U;
    msg.status = 6U;
    msg.text.assign("QCAAVKEBZGRFPNYTDDDUTORLGWVYRQCYUZZMADOHZFVTVBPFIQYNQADIBMGMUNBGZJOXEUVQLWKVMCXXEEDLRIOJORLJXNIXSGACNFQTLKUPJEKNPMCZMISGSTXRMJZXPKHNNTWEKXPSSRLNOZDGCUMIASBXTOCRHUFHLTNFEMWBYJWHLUGQOCIBPAGHYYJUSFHHZTOPRXWSYIFGSKKDUFJCFAPVCAJVKJTVRYLVQDLMSW");

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
    msg.setTimeStamp(0.986321283429);
    msg.setSource(55127U);
    msg.setSourceEntity(195U);
    msg.setDestination(4234U);
    msg.setDestinationEntity(28U);
    msg.req_id = 47809U;
    msg.status = 1U;
    msg.text.assign("UVMWGLRFIBOZUSGYJPKASLXHFVRTLKNSEDONRTBENQIOZGDVLIIULRMUUCKLDQDQJZVSGAVVJEGPPPEBQOOSAXSYYSMYEICMRMCARVHXFSJLTUWPUIFLXYCJZNOZCTBNNRSNUXVKOHQJPWPAQITZUHCIYJKWVRXZHL");

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
    msg.setTimeStamp(0.0054050478914);
    msg.setSource(1776U);
    msg.setSourceEntity(234U);
    msg.setDestination(133U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("ZEDMOLHNKMFEAWUPEVNOLEIJUKZPUAWMYYMDSGQVKEPBKMVAVIFIFSKREMKWYYDBIVHWUNJVOIIZDF");
    msg.links = 943582372U;

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
    msg.setTimeStamp(0.432228977211);
    msg.setSource(56856U);
    msg.setSourceEntity(111U);
    msg.setDestination(37037U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("JYXMHARIYAJWVVQBTCMZKHXGQSCZZGJNCQQYCGBYIPDNVJGODLMBJLXUOFJCLNWDQPKVTZRGTFTFSPYDGCWBBAIVHSUDEDKINTGQYKLLFINAREUOFPLSYOJNPBAXKGUMNXOUBMA");
    msg.links = 1000437222U;

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
    msg.setTimeStamp(0.47167044554);
    msg.setSource(49681U);
    msg.setSourceEntity(11U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("LDKGZDPHPODMLUSICQRHSWKCUG");
    msg.links = 2639465708U;

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
    msg.setTimeStamp(0.217412290145);
    msg.setSource(56141U);
    msg.setSourceEntity(162U);
    msg.setDestination(7604U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("ENSWRTLNCGRASNOPYHFBWMKEKPNMLIBZQRFXHMOZPJWPLZBNZXRTHMCYWXYHJQM");
    msg.action = 166U;
    msg.grouplist.assign("ZSKXRUUXQRBVPHKPJAQUMAIMZLMFOWHJWHXDKLC");

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
    msg.setTimeStamp(0.906581381604);
    msg.setSource(50308U);
    msg.setSourceEntity(127U);
    msg.setDestination(39577U);
    msg.setDestinationEntity(244U);
    msg.groupname.assign("IETKJLICJLMPMETCGLHPHTOCNRRSMKVNZQFDBUAAEAIHQUSVDULEQCMBPROJBPOFALZWPSQQFKNJTXCGFZLPTHWSWFEKUTNNNVNHZOEGHELSXAODFXLPWUYEKHYQKZWTUMIHZAFJZDSGJQKPGSZIOBBIRBCIXJRYVEGQUMPMFXXVURNYTWOIBKASCOUDCQYWVJYRJXSORKFFOIZHRUVVBYSLXGAAWDM");
    msg.action = 227U;
    msg.grouplist.assign("SWKXQSCIKRQBEPVVWROCOZYPXTZDSPNYJTUTYDRBE");

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
    msg.setTimeStamp(0.521925654949);
    msg.setSource(34496U);
    msg.setSourceEntity(28U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(164U);
    msg.groupname.assign("PBQALFXCOVRBPBNNRUEQBXTHHXCZIDADOYNSACCIGTOMEKGPFBAUZDSNEZGYXOTHQJQVWKUTMBDDXXWDXOFHGJKYRLQJJRDDNVUJWKGDWSYYHLUSUWAKRETW");
    msg.action = 227U;
    msg.grouplist.assign("XPLSLRJNWUGSGNMTSAFSMERUBLKFUJOODLCRKPCCVIOYKHWQIZGHPHGYMDYUJLONRATUKJDEAUPBNDWZXZJGALFAQXRYVJEZMYRMKJFWVIDAFXBHDUNDIOOVSNOZZDKLKHTXQCWFYESETHPQJADXWWPXGVFVBRNWMSFAGCH");

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
    msg.setTimeStamp(0.745582447435);
    msg.setSource(30009U);
    msg.setSourceEntity(230U);
    msg.setDestination(17279U);
    msg.setDestinationEntity(239U);
    msg.value = 0.778123748934;
    msg.sys_src = 19791U;

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
    msg.setTimeStamp(0.588678253735);
    msg.setSource(18271U);
    msg.setSourceEntity(34U);
    msg.setDestination(9502U);
    msg.setDestinationEntity(201U);
    msg.value = 0.348408853644;
    msg.sys_src = 10657U;

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
    msg.setTimeStamp(0.528628640748);
    msg.setSource(34097U);
    msg.setSourceEntity(183U);
    msg.setDestination(26078U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0352443902704;
    msg.sys_src = 35505U;

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.456784914249);
    msg.setSource(12059U);
    msg.setSourceEntity(249U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(118U);
    msg.id = 40U;
    msg.range = 0.09093898366;

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
    msg.setTimeStamp(0.99349517513);
    msg.setSource(19197U);
    msg.setSourceEntity(1U);
    msg.setDestination(29966U);
    msg.setDestinationEntity(233U);
    msg.id = 205U;
    msg.range = 0.756107854831;

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
    msg.setTimeStamp(0.105980786797);
    msg.setSource(22957U);
    msg.setSourceEntity(116U);
    msg.setDestination(35196U);
    msg.setDestinationEntity(68U);
    msg.id = 158U;
    msg.range = 0.0517242667262;

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
    msg.setTimeStamp(0.600816020638);
    msg.setSource(16737U);
    msg.setSourceEntity(40U);
    msg.setDestination(4906U);
    msg.setDestinationEntity(41U);
    msg.beacon.assign("WDSZSVEJJKYUVHLYMWFFMSIZXSRIWVPOFIZJQSTZLTMVHZUYAIGUEZCFBMKWCYWYQVTGWOGTBIWZJKTBNNEEJIADGAMLWIFXGEGFHMOOSXFTGNJGQUXUFLDEKMUUQXNFHSMGAHLYOVWLHNSODRRXDUZVQSRQPKERKPBKBEPYBALRSCDQIITYLMRTAEBOZAJPBYJEAJZ");
    msg.lat = 0.381470025143;
    msg.lon = 0.959744698018;
    msg.depth = 0.515841268931;

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
    msg.setTimeStamp(0.988994227107);
    msg.setSource(51317U);
    msg.setSourceEntity(121U);
    msg.setDestination(50927U);
    msg.setDestinationEntity(123U);
    msg.beacon.assign("CAULUQPHGVYQKTLVXHUUGNMHXPDHZMODTWMYKSVXPDZBGRQKPAEZFERBRLPUJAXRSDZQTNVFLGISFPICYFMAESHLCEGKTTVFXXMDNUNAPCCAIDTVJMBHXABUEURFXYMEOZQWIOWOEUEATJHNKZFEAF");
    msg.lat = 0.926318747281;
    msg.lon = 0.701293109591;
    msg.depth = 0.494809197027;

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
    msg.setTimeStamp(0.491785389971);
    msg.setSource(11221U);
    msg.setSourceEntity(113U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(186U);
    msg.beacon.assign("VXEZEIARZQJSHUECZAPGAZXJQCHVUHLXYTGEFOOLVLTPWFWXJKWERMWJFCQLQNNQUPNKIKA");
    msg.lat = 0.542731493496;
    msg.lon = 0.677011592297;
    msg.depth = 0.998764447724;

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
    msg.setTimeStamp(0.308699663492);
    msg.setSource(507U);
    msg.setSourceEntity(44U);
    msg.setDestination(24512U);
    msg.setDestinationEntity(27U);
    msg.op = 49U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UBILLUKZUTCWIRNGZCIFDVSMCIUSCXNTYDYEKSSNQGXMVMVKQSOYRTSYADEZKRPDSJEFWHCDXYFWWLHJNZTOHIQRYKTRZPBOFMQUAVDJZKMRVQIVPXSAPQOGVNLFJMCBHAKRAERRHKTZOHQIBTULRUFOGHNFVYPDLGLXEAQYLSATDLEZJFNABGEJAOGCIBQSIFGDJBJPHFWCXMNZGHYWOMWVPOWGLBJXXNVEWUCBPXBZWXKPEQJUTANOYDITCU");
    tmp_msg_0.lat = 0.0251857437868;
    tmp_msg_0.lon = 0.40345832724;
    tmp_msg_0.depth = 0.245671189726;
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
    msg.setTimeStamp(0.416421454222);
    msg.setSource(55772U);
    msg.setSourceEntity(219U);
    msg.setDestination(46547U);
    msg.setDestinationEntity(17U);
    msg.op = 240U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NRUBCVNBVHKOLZWRIKAOBFLVAKWFHUULXLMCBAURPKGMXAEXTXXAARJFPPSHBJTWXQISWDIVORCL");
    tmp_msg_0.lat = 0.519273251984;
    tmp_msg_0.lon = 0.665127560904;
    tmp_msg_0.depth = 0.741003309126;
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
    msg.setTimeStamp(0.66733397387);
    msg.setSource(5089U);
    msg.setSourceEntity(139U);
    msg.setDestination(57602U);
    msg.setDestinationEntity(210U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.186309297207);
    msg.setSource(38220U);
    msg.setSourceEntity(195U);
    msg.setDestination(11833U);
    msg.setDestinationEntity(27U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 58671U;
    tmp_msg_0.control_ent = 39U;
    tmp_msg_0.timeout = 0.121461143386;
    tmp_msg_0.loiter_radius = 0.846061225726;
    tmp_msg_0.altitude_interval = 0.755772366659;
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
    msg.setTimeStamp(0.133073889206);
    msg.setSource(11655U);
    msg.setSourceEntity(32U);
    msg.setDestination(33103U);
    msg.setDestinationEntity(208U);
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.tas2acc_pgain = 0.456079296672;
    tmp_msg_0.bank2p_pgain = 0.457759556127;
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
    msg.setTimeStamp(0.27494340466);
    msg.setSource(15183U);
    msg.setSourceEntity(63U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(229U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 157U;
    tmp_msg_0.mode.assign("ZHCIUCSGVBJCNNTXXAUBTVZFHGGOZLONPDDIKGBDXIEYZLTSSPALNLOBSJDMYNQGWZIFWGWHRTQCNIPDOMDGEXRRDTKVFYQCVKVKLMZYTHRIYIQHXOVKZMLHESFFRRPTJHEYJWNQWCEUKCGLBHMPZODFXLFXUPSXDWJKMCSH");
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
    msg.setTimeStamp(0.281111221382);
    msg.setSource(5764U);
    msg.setSourceEntity(155U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(30U);
    msg.op = 14U;
    msg.system.assign("ZOBGVXJYZBEEZPRLJAAJFNMXWWJADNDCDHJIQGULMYNTTSQERUZVVYXOTMRPJQGWUSIWRPOVEWXMYMLVZOATDPJSCCDRLUYAMIPXRPEJAFJRKGLWFGQZRINRKKXNKQLADAOICCXFBKFSHGNGWHSHWUVNECTDLVIIVOYDQWOSQBTBPPFNUKNHGNTETSYXVPIQTGVFOOCFSCBZCHXDZETKUIHFHKKKUQGYFUEYAMSRXJSEUPLBQMDBH");
    msg.range = 0.760930988609;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.683923815581;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.898993415878;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0264765385241;
    tmp_msg_0.lon = 0.130264481051;
    tmp_msg_0.radius = 0.360948832795;
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
    msg.setTimeStamp(0.789940179786);
    msg.setSource(32027U);
    msg.setSourceEntity(207U);
    msg.setDestination(7692U);
    msg.setDestinationEntity(165U);
    msg.op = 24U;
    msg.system.assign("VCAELRKDYDCHUFFTAHIHFHKWBXJWEWUCQPRQUGNRLMPIKRIISMLBOHEENODKNRKUNSFBDGYMLOTJNAZYOXVXDJVENZWWBPHYDRTATGAJOWMAAEQRCVAYEKYMMZSOCIGXIZOHBNZGYEUBUVBOLTTFSDZJSTYPVEFTIXWZHPBGXLUJZVPIKLDSZPQQPYHNVASCKQXEJDRLV");
    msg.range = 0.542671576033;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 57707U;
    tmp_msg_0.lat = 0.84105337025;
    tmp_msg_0.lon = 0.614969967621;
    tmp_msg_0.z = 0.816855894127;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.speed = 0.443871867746;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.custom.assign("VTFDYTRNCTHUZQBKBTBIRRZAEYQOVCGCUKQGVXOLMVLBTXTHSULBVIBEZEDNWHSCBLPNYOHYPABZCUDTXXRGUZQGDPGFFPYJMHJRZIITTQKHFVGFDNLSOMFQVDZKLRHAILQAAYXZEOXUOAYOIMMCEKCDQMQEPNZRWSVUNZLJWA");
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
    msg.setTimeStamp(0.59166826803);
    msg.setSource(53990U);
    msg.setSourceEntity(202U);
    msg.setDestination(47179U);
    msg.setDestinationEntity(35U);
    msg.op = 164U;
    msg.system.assign("IIMTSJLKXUPFBWVEWRFKCGKBBMALFJXCYPJLDKQJRALIDEEXZLCWZEIXGYGIPSUUBRANQSWEHHMTFGUPIYAVDIKVBWJZHFWFUZFPTYHSOATNJSAMDCVRBMYWNUGKAONXWMGRLIQMCTDKFRLNUAQULYYTHZNLQUSYXHFLRIOGKSDWFJESODXXOGTCOEQPJDWJMGSGDNTCZVQEIODZVNHKRNTYMAXKPQOOHCPCVBOHPQYCQZSBTPJZVEVUA");
    msg.range = 0.0863128115558;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YDXCPQQCAVXJKOC");
    tmp_msg_0.dist = 0.376669093328;
    tmp_msg_0.err = 0.605624265266;
    tmp_msg_0.ctrl_imp = 0.00987357360267;
    tmp_msg_0.rel_dir_x = 0.282365527472;
    tmp_msg_0.rel_dir_y = 0.26772426632;
    tmp_msg_0.rel_dir_z = 0.177005661723;
    tmp_msg_0.err_x = 0.741818578067;
    tmp_msg_0.err_y = 0.886134827654;
    tmp_msg_0.err_z = 0.410089822949;
    tmp_msg_0.rf_err_x = 0.950628925856;
    tmp_msg_0.rf_err_y = 0.184876099662;
    tmp_msg_0.rf_err_z = 0.67014958322;
    tmp_msg_0.rf_err_vx = 0.505540715031;
    tmp_msg_0.rf_err_vy = 0.560650971459;
    tmp_msg_0.rf_err_vz = 0.360647910856;
    tmp_msg_0.ss_x = 0.573376717269;
    tmp_msg_0.ss_y = 0.839640877259;
    tmp_msg_0.ss_z = 0.736308650905;
    tmp_msg_0.virt_err_x = 0.758711232988;
    tmp_msg_0.virt_err_y = 0.129768434554;
    tmp_msg_0.virt_err_z = 0.588138297212;
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
    msg.setTimeStamp(0.344295547636);
    msg.setSource(19611U);
    msg.setSourceEntity(182U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.307558137966);
    msg.setSource(4574U);
    msg.setSourceEntity(176U);
    msg.setDestination(1589U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.539883972964);
    msg.setSource(36317U);
    msg.setSourceEntity(134U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.765529450554);
    msg.setSource(60222U);
    msg.setSourceEntity(170U);
    msg.setDestination(37993U);
    msg.setDestinationEntity(156U);
    msg.list.assign("CGXKDXBVXNKYQFTSVCHZLYIRGJEZCYAUNMFDFCEUPDBEVIVICJQORLFGJZMTKCOUSYEUOGLFR");

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
    msg.setTimeStamp(0.455193629274);
    msg.setSource(3343U);
    msg.setSourceEntity(211U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(88U);
    msg.list.assign("PXGDULDOMCDDPCFHHQBFCAOOZKEHSQONYMNKYWUFLGGWQCPALRNNJXNQIMUXZJWGIBNMAEQJESTRPQDJCRGKKDNUWBLKFTOTZDHARFEVOJLLTXBEFKWQXZMOFUBCQUKVVYKAWXWUCREYTTCSBZTTMHRSBJYZDONVCFKSGLZGMUIPAXPAPFDAFVRGHHVV");

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
    msg.setTimeStamp(0.861673547179);
    msg.setSource(19933U);
    msg.setSourceEntity(3U);
    msg.setDestination(7437U);
    msg.setDestinationEntity(73U);
    msg.list.assign("IMFBSRKZGWUKHCPTIXSJSHOFSRQBTTZEUJKJGKTPKWLODHLYIRVPAQNISZZXHJUOWDDXDSBMFVVYXPKUIGWXVQCWAHJEPLPPHOFNVQUUSRIILBMTPDLWWEEBVOQIKGOERHCTYZPQXWXLOXFUGMVCGYARHBAWNJAVFCNEAXGZNNYPSIYDZBZFSDCNU");

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
    msg.setTimeStamp(0.676683329998);
    msg.setSource(36586U);
    msg.setSourceEntity(110U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(35U);
    msg.value = 19298;

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
    msg.setTimeStamp(0.558182620619);
    msg.setSource(3830U);
    msg.setSourceEntity(173U);
    msg.setDestination(44653U);
    msg.setDestinationEntity(131U);
    msg.value = -26336;

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
    msg.setTimeStamp(0.678536802597);
    msg.setSource(29857U);
    msg.setSourceEntity(136U);
    msg.setDestination(21212U);
    msg.setDestinationEntity(169U);
    msg.value = 17135;

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
    msg.setTimeStamp(0.934470036945);
    msg.setSource(4983U);
    msg.setSourceEntity(120U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0421585502543;

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
    msg.setTimeStamp(0.787144218923);
    msg.setSource(60174U);
    msg.setSourceEntity(71U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(115U);
    msg.value = 0.665083111604;

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
    msg.setTimeStamp(0.859633007101);
    msg.setSource(15319U);
    msg.setSourceEntity(233U);
    msg.setDestination(386U);
    msg.setDestinationEntity(232U);
    msg.value = 0.838189904982;

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
    msg.setTimeStamp(0.992571736833);
    msg.setSource(53997U);
    msg.setSourceEntity(216U);
    msg.setDestination(52713U);
    msg.setDestinationEntity(139U);
    msg.value = 0.667975682221;

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
    msg.setTimeStamp(0.98369655478);
    msg.setSource(50412U);
    msg.setSourceEntity(205U);
    msg.setDestination(7217U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0724614025012;

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
    msg.setTimeStamp(0.943090048897);
    msg.setSource(48503U);
    msg.setSourceEntity(112U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(247U);
    msg.value = 0.557380440243;

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
    msg.setTimeStamp(0.874913099911);
    msg.setSource(22501U);
    msg.setSourceEntity(146U);
    msg.setDestination(16384U);
    msg.setDestinationEntity(128U);
    msg.validity = 58648U;
    msg.type = 70U;
    msg.utc_year = 7600U;
    msg.utc_month = 238U;
    msg.utc_day = 245U;
    msg.utc_time = 0.146663767025;
    msg.lat = 0.886568698615;
    msg.lon = 0.824649821696;
    msg.height = 0.550407985265;
    msg.satellites = 103U;
    msg.cog = 0.194413540377;
    msg.sog = 0.443915225657;
    msg.hdop = 0.95630046738;
    msg.vdop = 0.208291056387;
    msg.hacc = 0.606331466335;
    msg.vacc = 0.448911620599;

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
    msg.setTimeStamp(0.0735873676264);
    msg.setSource(11599U);
    msg.setSourceEntity(195U);
    msg.setDestination(32315U);
    msg.setDestinationEntity(172U);
    msg.validity = 16464U;
    msg.type = 47U;
    msg.utc_year = 61564U;
    msg.utc_month = 247U;
    msg.utc_day = 149U;
    msg.utc_time = 0.405762354913;
    msg.lat = 0.972318176447;
    msg.lon = 0.597040898421;
    msg.height = 0.595436942813;
    msg.satellites = 244U;
    msg.cog = 0.165664725859;
    msg.sog = 0.546859614629;
    msg.hdop = 0.775204646461;
    msg.vdop = 0.949638339376;
    msg.hacc = 0.420933791151;
    msg.vacc = 0.277081040288;

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
    msg.setTimeStamp(0.507182996885);
    msg.setSource(24175U);
    msg.setSourceEntity(157U);
    msg.setDestination(61691U);
    msg.setDestinationEntity(118U);
    msg.validity = 40555U;
    msg.type = 67U;
    msg.utc_year = 3345U;
    msg.utc_month = 225U;
    msg.utc_day = 253U;
    msg.utc_time = 0.875656889646;
    msg.lat = 0.881878767751;
    msg.lon = 0.721274221299;
    msg.height = 0.456143454783;
    msg.satellites = 18U;
    msg.cog = 0.0789626090338;
    msg.sog = 0.383716497493;
    msg.hdop = 0.471225269076;
    msg.vdop = 0.912865796532;
    msg.hacc = 0.926956098386;
    msg.vacc = 0.68027432313;

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
    msg.setTimeStamp(0.948133573533);
    msg.setSource(45160U);
    msg.setSourceEntity(190U);
    msg.setDestination(56903U);
    msg.setDestinationEntity(244U);
    msg.time = 0.796995395132;
    msg.phi = 0.794200630392;
    msg.theta = 0.693956753136;
    msg.psi = 0.437219954033;
    msg.psi_magnetic = 0.837950563865;

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
    msg.setTimeStamp(0.713897474556);
    msg.setSource(28339U);
    msg.setSourceEntity(94U);
    msg.setDestination(59097U);
    msg.setDestinationEntity(138U);
    msg.time = 0.75285909469;
    msg.phi = 0.501601188812;
    msg.theta = 0.0851096819421;
    msg.psi = 0.217380389418;
    msg.psi_magnetic = 0.368389415117;

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
    msg.setTimeStamp(0.975040685328);
    msg.setSource(34667U);
    msg.setSourceEntity(100U);
    msg.setDestination(59304U);
    msg.setDestinationEntity(121U);
    msg.time = 0.764863137542;
    msg.phi = 0.916843572442;
    msg.theta = 0.823777898416;
    msg.psi = 0.663958548261;
    msg.psi_magnetic = 0.494845177377;

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
    msg.setTimeStamp(0.145068909388);
    msg.setSource(21816U);
    msg.setSourceEntity(7U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(51U);
    msg.time = 0.577203888462;
    msg.x = 0.887620671536;
    msg.y = 0.0206199863702;
    msg.z = 0.843479283241;
    msg.timestep = 0.487165948099;

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
    msg.setTimeStamp(0.921006632149);
    msg.setSource(11856U);
    msg.setSourceEntity(117U);
    msg.setDestination(34337U);
    msg.setDestinationEntity(109U);
    msg.time = 0.581044472488;
    msg.x = 0.0152346022252;
    msg.y = 0.384297047684;
    msg.z = 0.252737692216;
    msg.timestep = 0.054174972832;

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
    msg.setTimeStamp(0.500140267344);
    msg.setSource(60549U);
    msg.setSourceEntity(239U);
    msg.setDestination(53754U);
    msg.setDestinationEntity(113U);
    msg.time = 0.723984250398;
    msg.x = 0.301869128923;
    msg.y = 0.83259444009;
    msg.z = 0.603251887908;
    msg.timestep = 0.748668272868;

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
    msg.setTimeStamp(0.3924385354);
    msg.setSource(58356U);
    msg.setSourceEntity(5U);
    msg.setDestination(20740U);
    msg.setDestinationEntity(41U);
    msg.time = 0.856442059154;
    msg.x = 0.104260208418;
    msg.y = 0.199696574201;
    msg.z = 0.755080763531;

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
    msg.setTimeStamp(0.277843957026);
    msg.setSource(50937U);
    msg.setSourceEntity(179U);
    msg.setDestination(31405U);
    msg.setDestinationEntity(189U);
    msg.time = 0.857200971756;
    msg.x = 0.731697974104;
    msg.y = 0.96795202684;
    msg.z = 0.324242986385;

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
    msg.setTimeStamp(0.525579255215);
    msg.setSource(11858U);
    msg.setSourceEntity(8U);
    msg.setDestination(63115U);
    msg.setDestinationEntity(220U);
    msg.time = 0.241525144614;
    msg.x = 0.299658291986;
    msg.y = 0.256637863869;
    msg.z = 0.367904503402;

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
    msg.setTimeStamp(0.896888513158);
    msg.setSource(19764U);
    msg.setSourceEntity(16U);
    msg.setDestination(47669U);
    msg.setDestinationEntity(251U);
    msg.time = 0.218682137496;
    msg.x = 0.0219372324304;
    msg.y = 0.812635267735;
    msg.z = 0.908024860758;

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
    msg.setTimeStamp(0.294237210704);
    msg.setSource(29706U);
    msg.setSourceEntity(138U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(92U);
    msg.time = 0.82478635131;
    msg.x = 0.367019163885;
    msg.y = 0.6577350433;
    msg.z = 0.501744549478;

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
    msg.setTimeStamp(0.253756988181);
    msg.setSource(60994U);
    msg.setSourceEntity(195U);
    msg.setDestination(39373U);
    msg.setDestinationEntity(248U);
    msg.time = 0.237505082536;
    msg.x = 0.450543573953;
    msg.y = 0.0974375675286;
    msg.z = 0.58623667371;

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
    msg.setTimeStamp(0.910796449412);
    msg.setSource(2474U);
    msg.setSourceEntity(193U);
    msg.setDestination(46792U);
    msg.setDestinationEntity(251U);
    msg.time = 0.247109873311;
    msg.x = 0.440569681874;
    msg.y = 0.590491433799;
    msg.z = 0.70755909324;

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
    msg.setTimeStamp(0.559391306917);
    msg.setSource(52975U);
    msg.setSourceEntity(241U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(216U);
    msg.time = 0.426341312663;
    msg.x = 0.798197464414;
    msg.y = 0.551034866161;
    msg.z = 0.648706152798;

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
    msg.setTimeStamp(0.480459251532);
    msg.setSource(20387U);
    msg.setSourceEntity(219U);
    msg.setDestination(61394U);
    msg.setDestinationEntity(86U);
    msg.time = 0.82136879736;
    msg.x = 0.779142400583;
    msg.y = 0.270107329825;
    msg.z = 0.0215681527809;

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
    msg.setTimeStamp(0.117126610283);
    msg.setSource(40272U);
    msg.setSourceEntity(241U);
    msg.setDestination(22428U);
    msg.setDestinationEntity(24U);
    msg.validity = 250U;
    msg.x = 0.202895059475;
    msg.y = 0.315371957901;
    msg.z = 0.0445584207386;

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
    msg.setTimeStamp(0.062549953296);
    msg.setSource(36710U);
    msg.setSourceEntity(106U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(195U);
    msg.validity = 21U;
    msg.x = 0.876208574435;
    msg.y = 0.446186500673;
    msg.z = 0.415989421142;

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
    msg.setTimeStamp(0.572555530939);
    msg.setSource(26414U);
    msg.setSourceEntity(145U);
    msg.setDestination(59306U);
    msg.setDestinationEntity(64U);
    msg.validity = 104U;
    msg.x = 0.931472073732;
    msg.y = 0.537097465322;
    msg.z = 0.445962653391;

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
    msg.setTimeStamp(0.128197383179);
    msg.setSource(30U);
    msg.setSourceEntity(20U);
    msg.setDestination(56737U);
    msg.setDestinationEntity(116U);
    msg.validity = 140U;
    msg.x = 0.0861594593989;
    msg.y = 0.0440966268822;
    msg.z = 0.656360953837;

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
    msg.setTimeStamp(0.0031329452631);
    msg.setSource(59496U);
    msg.setSourceEntity(137U);
    msg.setDestination(27029U);
    msg.setDestinationEntity(21U);
    msg.validity = 135U;
    msg.x = 0.488716693868;
    msg.y = 0.730469939265;
    msg.z = 0.519674821723;

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
    msg.setTimeStamp(0.1985879023);
    msg.setSource(6409U);
    msg.setSourceEntity(190U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(31U);
    msg.validity = 91U;
    msg.x = 0.308243990757;
    msg.y = 0.37229712301;
    msg.z = 0.403263442555;

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
    msg.setTimeStamp(0.915336725976);
    msg.setSource(48867U);
    msg.setSourceEntity(118U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(170U);
    msg.time = 0.197144448948;
    msg.x = 0.682022293878;
    msg.y = 0.602026319522;
    msg.z = 0.787625800502;

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
    msg.setTimeStamp(0.083158469707);
    msg.setSource(42722U);
    msg.setSourceEntity(232U);
    msg.setDestination(29614U);
    msg.setDestinationEntity(217U);
    msg.time = 0.630162790686;
    msg.x = 0.976482704117;
    msg.y = 0.723180347482;
    msg.z = 0.951281044533;

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
    msg.setTimeStamp(0.372215144338);
    msg.setSource(39270U);
    msg.setSourceEntity(173U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(153U);
    msg.time = 0.739910640801;
    msg.x = 0.952600983711;
    msg.y = 0.548216850306;
    msg.z = 0.840308749596;

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
    msg.setTimeStamp(0.912113049215);
    msg.setSource(38689U);
    msg.setSourceEntity(18U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(243U);
    msg.validity = 3U;
    msg.value = 0.871811095928;

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
    msg.setTimeStamp(0.472516835132);
    msg.setSource(44275U);
    msg.setSourceEntity(40U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(202U);
    msg.validity = 44U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.739694467537;
    tmp_msg_0.beam_height = 0.398154881109;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.574432778374;

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
    msg.setTimeStamp(0.941810682968);
    msg.setSource(19833U);
    msg.setSourceEntity(107U);
    msg.setDestination(8175U);
    msg.setDestinationEntity(23U);
    msg.validity = 190U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.691343707713;
    tmp_msg_0.y = 0.715177158733;
    tmp_msg_0.z = 0.157669838979;
    tmp_msg_0.phi = 0.614644197553;
    tmp_msg_0.theta = 0.286017217796;
    tmp_msg_0.psi = 0.334110228358;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0576135452358;
    tmp_msg_1.beam_height = 0.900749785034;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.61304290483;

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
    msg.setTimeStamp(0.764426762698);
    msg.setSource(54590U);
    msg.setSourceEntity(86U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(175U);
    msg.value = 0.913774023834;

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
    msg.setTimeStamp(0.149335767309);
    msg.setSource(59512U);
    msg.setSourceEntity(130U);
    msg.setDestination(57585U);
    msg.setDestinationEntity(113U);
    msg.value = 0.922364416321;

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
    msg.setTimeStamp(0.0572453264122);
    msg.setSource(35745U);
    msg.setSourceEntity(210U);
    msg.setDestination(29313U);
    msg.setDestinationEntity(241U);
    msg.value = 0.498180400714;

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
    msg.setTimeStamp(0.840907828881);
    msg.setSource(56416U);
    msg.setSourceEntity(194U);
    msg.setDestination(58282U);
    msg.setDestinationEntity(65U);
    msg.value = 0.438101716871;

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
    msg.setTimeStamp(0.506558940503);
    msg.setSource(5294U);
    msg.setSourceEntity(89U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(76U);
    msg.value = 0.101288233569;

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
    msg.setTimeStamp(0.919959654755);
    msg.setSource(65435U);
    msg.setSourceEntity(113U);
    msg.setDestination(52865U);
    msg.setDestinationEntity(172U);
    msg.value = 0.225456703435;

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
    msg.setTimeStamp(0.977311899035);
    msg.setSource(8994U);
    msg.setSourceEntity(207U);
    msg.setDestination(46176U);
    msg.setDestinationEntity(37U);
    msg.value = 0.555096486085;

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
    msg.setTimeStamp(0.609787680968);
    msg.setSource(39826U);
    msg.setSourceEntity(178U);
    msg.setDestination(14923U);
    msg.setDestinationEntity(133U);
    msg.value = 0.405817769214;

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
    msg.setTimeStamp(0.166973238203);
    msg.setSource(47178U);
    msg.setSourceEntity(214U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(123U);
    msg.value = 0.985817410943;

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
    msg.setTimeStamp(0.568870316229);
    msg.setSource(45186U);
    msg.setSourceEntity(133U);
    msg.setDestination(13938U);
    msg.setDestinationEntity(142U);
    msg.value = 0.114863924274;

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
    msg.setTimeStamp(0.463209310557);
    msg.setSource(34201U);
    msg.setSourceEntity(42U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(211U);
    msg.value = 0.822601366415;

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
    msg.setTimeStamp(0.934805899083);
    msg.setSource(8856U);
    msg.setSourceEntity(239U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(72U);
    msg.value = 0.863524640014;

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
    msg.setTimeStamp(0.668787150978);
    msg.setSource(19451U);
    msg.setSourceEntity(65U);
    msg.setDestination(26376U);
    msg.setDestinationEntity(171U);
    msg.value = 0.224471366252;

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
    msg.setTimeStamp(0.844438711523);
    msg.setSource(38386U);
    msg.setSourceEntity(34U);
    msg.setDestination(7345U);
    msg.setDestinationEntity(208U);
    msg.value = 0.172825597251;

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
    msg.setTimeStamp(0.399343083806);
    msg.setSource(21087U);
    msg.setSourceEntity(23U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(209U);
    msg.value = 0.282269077004;

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
    msg.setTimeStamp(0.475162431309);
    msg.setSource(17170U);
    msg.setSourceEntity(93U);
    msg.setDestination(41912U);
    msg.setDestinationEntity(196U);
    msg.value = 0.661252721321;

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
    msg.setTimeStamp(0.144124635463);
    msg.setSource(55508U);
    msg.setSourceEntity(237U);
    msg.setDestination(463U);
    msg.setDestinationEntity(56U);
    msg.value = 0.922803472644;

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
    msg.setTimeStamp(0.434948570564);
    msg.setSource(11105U);
    msg.setSourceEntity(65U);
    msg.setDestination(40115U);
    msg.setDestinationEntity(35U);
    msg.value = 0.564436977713;

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
    msg.setTimeStamp(0.405353616021);
    msg.setSource(21001U);
    msg.setSourceEntity(126U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(241U);
    msg.value = 0.645743125493;

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
    msg.setTimeStamp(0.385810277058);
    msg.setSource(25517U);
    msg.setSourceEntity(182U);
    msg.setDestination(43592U);
    msg.setDestinationEntity(209U);
    msg.value = 0.204863644089;

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
    msg.setTimeStamp(0.458618775216);
    msg.setSource(33301U);
    msg.setSourceEntity(96U);
    msg.setDestination(37095U);
    msg.setDestinationEntity(158U);
    msg.value = 0.251066417311;

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
    msg.setTimeStamp(0.621625388552);
    msg.setSource(28083U);
    msg.setSourceEntity(112U);
    msg.setDestination(56232U);
    msg.setDestinationEntity(196U);
    msg.value = 0.240971300387;

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
    msg.setTimeStamp(0.584137897475);
    msg.setSource(35967U);
    msg.setSourceEntity(202U);
    msg.setDestination(55125U);
    msg.setDestinationEntity(54U);
    msg.value = 0.757570030729;

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
    msg.setTimeStamp(0.126707995367);
    msg.setSource(46465U);
    msg.setSourceEntity(125U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(80U);
    msg.value = 0.98552002903;

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
    msg.setTimeStamp(0.668568658561);
    msg.setSource(41391U);
    msg.setSourceEntity(58U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(78U);
    msg.direction = 0.560020236002;
    msg.speed = 0.427290031976;
    msg.turbulence = 0.596495197316;

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
    msg.setTimeStamp(0.897971355972);
    msg.setSource(5026U);
    msg.setSourceEntity(8U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.287840109099;
    msg.speed = 0.348875427031;
    msg.turbulence = 0.0397128023547;

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
    msg.setTimeStamp(0.0282645012618);
    msg.setSource(62744U);
    msg.setSourceEntity(1U);
    msg.setDestination(63874U);
    msg.setDestinationEntity(104U);
    msg.direction = 0.359779711828;
    msg.speed = 0.805356450663;
    msg.turbulence = 0.00787796115535;

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
    msg.setTimeStamp(0.257860000813);
    msg.setSource(47219U);
    msg.setSourceEntity(19U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(230U);
    msg.value = 0.327099250405;

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
    msg.setTimeStamp(0.34139980703);
    msg.setSource(51831U);
    msg.setSourceEntity(54U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(254U);
    msg.value = 0.757680742618;

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
    msg.setTimeStamp(0.134828379998);
    msg.setSource(51108U);
    msg.setSourceEntity(86U);
    msg.setDestination(31072U);
    msg.setDestinationEntity(145U);
    msg.value = 0.560969109329;

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
    msg.setTimeStamp(0.493407707082);
    msg.setSource(30312U);
    msg.setSourceEntity(229U);
    msg.setDestination(25621U);
    msg.setDestinationEntity(19U);
    msg.value.assign("VSJZOZIYYJQKUGFODDPESIWQPMSGMAIMJNGGCHLUPNVPLEBPUKSIXKTMGRHELCOVSORFUDRAOUKNPWSNJRBWLCXHDVKRPBEPINMKKFJLVWRHYYYZCZOXAAPIHJBTLDGZBUOEAWWRULFFNG");

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
    msg.setTimeStamp(0.30252518237);
    msg.setSource(25732U);
    msg.setSourceEntity(193U);
    msg.setDestination(45075U);
    msg.setDestinationEntity(76U);
    msg.value.assign("SPRENQYUOWABMUOGIJGNKQREDOLCKGTCTVJMXETBUISWJZJRWESNCJYLQULGWHUMLZPBPHGVRRKBMHLQVVAJVCXRSOXEVHPZLVEWVQBFTCUWAZTFKGFAXBZEZEJSXINMKMSDYOBENYMKAHIDIDQNTFVBAAYITTQOKLPCFYSIMDNYGFJZBFFWHKRRODEDWCUOOTFUZXDSQ");

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
    msg.setTimeStamp(0.826832930642);
    msg.setSource(14529U);
    msg.setSourceEntity(55U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(170U);
    msg.value.assign("UURTDDYSXYIROBZVNYKPZYCXAWNFKLHRXWDCNQTGLXKFNOYNRXCQZKLEMYTEZEFIJPDTCDPAGKPEPGFIFBAMQKHHXNVD");

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
    msg.setTimeStamp(0.571034262003);
    msg.setSource(31214U);
    msg.setSourceEntity(129U);
    msg.setDestination(8661U);
    msg.setDestinationEntity(116U);
    const char tmp_msg_0[] = {-4, 33, -118, 1, -58, 86, -13, 46, 113, -70, -91, -48, -15, 58, 56, 11, -56, 56, -46, 14, 111, -99, 63, -9, 76, -3, -96, 47, 18, 98, -123, -17, 16, 5, -16, -84, 82, -34, 114, 109, -54, 44, 42, -67, 39, 12, -125, -21, -88, -111, 93, 31, 12, 99, -92, 71, 2, -6, -37, -79, 65, 29, -29, -32, -38, -61, -109, 88, 106, 10, -14, 58, 89, -14, 14, 77, 83, -38, -27, 97, 50, 117, 66, 33, 84, 0, -101, 8, 32, 123, -12, -46, -79, 112, 111, 40, -73, -49, 22, -105, 42, -115, 98, -94, 120, 34, 57, 62, 18, -124, 94, 60, 117};
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
    msg.setTimeStamp(0.212491794522);
    msg.setSource(62150U);
    msg.setSourceEntity(3U);
    msg.setDestination(34297U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {50, -115, 12, -99, -44, -127, 56, -100, 3, -18, 61, -30, -28, -105, -73, -81, 12, -49, -113, 55, -15, 50, 14, -10, -67, -102, 90, -106, 39, -6, 61, -79, -109, 91, 114, -88, -119, 46, 43, 68, -28, -41, -120, 17};
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
    msg.setTimeStamp(0.108739942104);
    msg.setSource(34365U);
    msg.setSourceEntity(137U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {5, 114, 29, 109, -92, -58, 64, 73, 72, -108, -74, -52, 120, -20, 72, -24, 45, 126, -64, 10, 105, -76, 81, -120, 13, -48, 10, -7, -34, -91, 72, 46, 59, 12, 74, 90, 98, -13, 107, 19, 50, -96, -119, 49, 46, -113, -114, 44, 112, 116, 0, -51, 54, -78, -28, 110, 101, -107, -95, -96, 59, -8, -93, 61, -80, -38, 92, 83, -101, 119, -12, 123, -104, 48, -45, 16, 1, 37, 11, -9, 108, 72, 75, -30, -19, 95, -5, 6, -95, 49, 75, -91, -118, 0, -82, 65, -85, -110, -56, 78, 58, -39, -114, 114, -85, -32, -9, 40, 116, 61, 89, -44, -89, -18, -118, 78, 10, -23, 23, 102, 126, -58, 37, -12, 119, 87, 52, 13, -105, 121, 82, 17, -52, 120, 90, 80, -76, -100, 85, 57, -109, 39, 125, 40, 87, -32, 15, 115, -95, -106, -40, -96, 37, -108, -1, -86, -93, 102, 100, 105, -112, 6, 95, 22, 103, 113, 35, 98, -107};
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
    msg.setTimeStamp(0.2868957883);
    msg.setSource(21912U);
    msg.setSourceEntity(48U);
    msg.setDestination(62925U);
    msg.setDestinationEntity(18U);
    msg.type = 108U;
    msg.frequency = 480564784U;
    msg.min_range = 11822U;
    msg.max_range = 29921U;
    msg.bits_per_point = 177U;
    msg.scale_factor = 0.468188498361;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.273240204212;
    tmp_msg_0.beam_height = 0.130084092738;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {45, 82, 66, -122, -27, 78, -41, 24, -27, -73, 46, 7, 100, 74, -38, -74, -69};
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
    msg.setTimeStamp(0.145918736882);
    msg.setSource(29023U);
    msg.setSourceEntity(125U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(35U);
    msg.type = 95U;
    msg.frequency = 847708948U;
    msg.min_range = 50943U;
    msg.max_range = 1596U;
    msg.bits_per_point = 197U;
    msg.scale_factor = 0.155968242757;
    const char tmp_msg_0[] = {114, 63, 110, -37, 85, 99, -79, 116, 88, 90, -67, -48, -104, 57, -92, 126, -84, 16, -58, 90, -26, 88, 67, 88, -57, -50, -115, 102, 92, -46, -104, 126, 125, 103, 51, -41, -74, -55, -74, -48, 17, 30, -63, -41, 88, 82, 25, -118, 74, -121, -104, 56, 68, 74, 47, 32, -122, 29, -120, -106, 8, 94, -99, 46, -108, -112, -61, -34, 115, -75, -64, -18, 82, 59, 76, -26, 101, -67, 52, 47, 97, -94, -123, -114, -60, 71, -69, -23, 28, 88, 19, 124, -73, 44, 33, 68, 79, -46, -44, -33, -7, 53, 16, 42, -27, -69, 124, -30, -63, -128, 68, 48, 6, 76, 91, -80, -72, 95, 73, -35, 6, 38, 57, 81, 35, -15, 112, -104, 24, -89, -29, -112, -40, 66, -121, -44, -102, 2, 80, 48, 80, -7, -86, 100, -25, 86, -93, -9, -54, -41, 75, 118, 44, 28, 60, 32, -103, -11, -70, 83, 59, 3, -109, 11, -4, -100, -97, -126, -57, 53, 98, -103, -99, -37, 54, 88, -13, -57, 48, 102, 55, 70, -64, 41, 8, -2, -104, -82, -60, 107, 83, -32, -123, 119, -51, -118, 79, -33, 111, 101, 14, -82, 10, -51, -89, -3, 102, 108, 126, 100, 101, -65, -53, -68, 27, 3, -1, 99, 113, 120, 68, -89, -8, 118, -66, 104, 12, 113, -53, 110, 5, -59, -121, -110, 15, -124, -92, 38, -115, 14, -70, 19, -85, -41, -100, 107, 33, -51, 20, 1, 29};
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
    msg.setTimeStamp(0.862297535874);
    msg.setSource(24079U);
    msg.setSourceEntity(198U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(73U);
    msg.type = 140U;
    msg.frequency = 3698527828U;
    msg.min_range = 32528U;
    msg.max_range = 28507U;
    msg.bits_per_point = 93U;
    msg.scale_factor = 0.316974959066;
    const char tmp_msg_0[] = {102, -67, -65, -97, 116, -86, -18, -20, 94, -54, 10, 9, -35, -50, 1};
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
    msg.setTimeStamp(0.873122913726);
    msg.setSource(6567U);
    msg.setSourceEntity(239U);
    msg.setDestination(17866U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.346099124084);
    msg.setSource(34959U);
    msg.setSourceEntity(9U);
    msg.setDestination(36067U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.47369856494);
    msg.setSource(33426U);
    msg.setSourceEntity(131U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.100931645984);
    msg.setSource(38945U);
    msg.setSourceEntity(95U);
    msg.setDestination(8965U);
    msg.setDestinationEntity(118U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.980052559051);
    msg.setSource(14547U);
    msg.setSourceEntity(61U);
    msg.setDestination(44192U);
    msg.setDestinationEntity(41U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.36968671668);
    msg.setSource(11769U);
    msg.setSourceEntity(5U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(54U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.784744865151);
    msg.setSource(33146U);
    msg.setSourceEntity(92U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(241U);
    msg.value = 0.47850296466;
    msg.confidence = 0.397489901984;
    msg.opmodes.assign("CTKCUZVKWFKVOZYGJEHFNMSMGBDRDBOKXHBVWBQSJDLVEQPXLNPKVBCYUZCFYMANXRIVKTZJDWXJWLXXQSHDHOMILGAOZFFOEAQXHIQNBRNOGYFHNRWNNYIWJAQKMCBVXYBKRWODWUOALEFFEHAEVHUKLOWIYZNRDYBPRMXSEPGCTUTMCSQZPZGPNERAJUMSUQCBJMTKMUGLTDFAHIDJJVRY");

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
    msg.setTimeStamp(0.762290349816);
    msg.setSource(45706U);
    msg.setSourceEntity(151U);
    msg.setDestination(56263U);
    msg.setDestinationEntity(146U);
    msg.value = 0.635780352548;
    msg.confidence = 0.519801492203;
    msg.opmodes.assign("RICOXFYXJMDDPXZHNQUVUUBAQYEEPXSMJQVR");

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
    msg.setTimeStamp(0.126883720294);
    msg.setSource(36207U);
    msg.setSourceEntity(155U);
    msg.setDestination(41336U);
    msg.setDestinationEntity(92U);
    msg.value = 0.619582607366;
    msg.confidence = 0.693626093017;
    msg.opmodes.assign("NJUSZFVDPPRLEMSNWLUPXCFPWDEXZXMOTCSXJLMFZVLTEFFHIZQLDJTQKGLKIUUAMCTOMERKYDSOYABHGSRSSXLGQTGZTHGLRKRKXNITIUYJROWMDOAAWBMBOQUBKIMKQACAQYQVVQBCUTEODCFTJZZCSGSAUBQBPOXWNEHDEWKOWXNINUYCKDCZHIFVVNKD");

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
    msg.setTimeStamp(0.0613833569818);
    msg.setSource(15705U);
    msg.setSourceEntity(63U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(201U);
    msg.itow = 2405704588U;
    msg.lat = 0.424164512881;
    msg.lon = 0.327770504469;
    msg.height_ell = 0.875592873132;
    msg.height_sea = 0.489725761944;
    msg.hacc = 0.17514256919;
    msg.vacc = 0.0623170751229;
    msg.vel_n = 0.965867802987;
    msg.vel_e = 0.727248101248;
    msg.vel_d = 0.0402045276882;
    msg.speed = 0.459112317957;
    msg.gspeed = 0.615056124974;
    msg.heading = 0.229777081435;
    msg.sacc = 0.26688215239;
    msg.cacc = 0.101590339176;

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
    msg.setTimeStamp(0.336050683901);
    msg.setSource(25651U);
    msg.setSourceEntity(213U);
    msg.setDestination(15301U);
    msg.setDestinationEntity(55U);
    msg.itow = 3589290757U;
    msg.lat = 0.976149641329;
    msg.lon = 0.283440638552;
    msg.height_ell = 0.721798442504;
    msg.height_sea = 0.135762496129;
    msg.hacc = 0.819891744204;
    msg.vacc = 0.386691148778;
    msg.vel_n = 0.419003554804;
    msg.vel_e = 0.571254693437;
    msg.vel_d = 0.818215068515;
    msg.speed = 0.507715651757;
    msg.gspeed = 0.595171341069;
    msg.heading = 0.196375312349;
    msg.sacc = 0.757903564222;
    msg.cacc = 0.892563517759;

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
    msg.setTimeStamp(0.57574764613);
    msg.setSource(36594U);
    msg.setSourceEntity(79U);
    msg.setDestination(29452U);
    msg.setDestinationEntity(250U);
    msg.itow = 1682303395U;
    msg.lat = 0.603202322904;
    msg.lon = 0.667904403301;
    msg.height_ell = 0.0957209387825;
    msg.height_sea = 0.520125881996;
    msg.hacc = 0.527970937679;
    msg.vacc = 0.42617631379;
    msg.vel_n = 0.521704128002;
    msg.vel_e = 0.269171894851;
    msg.vel_d = 0.727236516593;
    msg.speed = 0.406145182844;
    msg.gspeed = 0.510054262462;
    msg.heading = 0.778292563069;
    msg.sacc = 0.0644893083556;
    msg.cacc = 0.560489253777;

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
    msg.setTimeStamp(0.752222090112);
    msg.setSource(48951U);
    msg.setSourceEntity(88U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(134U);
    msg.id = 18U;
    msg.value = 0.0213776271281;

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
    msg.setTimeStamp(0.881311450946);
    msg.setSource(14739U);
    msg.setSourceEntity(195U);
    msg.setDestination(15438U);
    msg.setDestinationEntity(123U);
    msg.id = 14U;
    msg.value = 0.259122221177;

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
    msg.setTimeStamp(0.291022191248);
    msg.setSource(52011U);
    msg.setSourceEntity(145U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(112U);
    msg.id = 206U;
    msg.value = 0.149659285682;

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
    msg.setTimeStamp(0.439644746218);
    msg.setSource(28475U);
    msg.setSourceEntity(98U);
    msg.setDestination(35946U);
    msg.setDestinationEntity(211U);
    msg.x = 0.987928313809;
    msg.y = 0.190907525811;
    msg.z = 0.319688604231;
    msg.phi = 0.573204241076;
    msg.theta = 0.272617835553;
    msg.psi = 0.0965817986582;

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
    msg.setTimeStamp(0.570343001656);
    msg.setSource(59339U);
    msg.setSourceEntity(16U);
    msg.setDestination(59226U);
    msg.setDestinationEntity(243U);
    msg.x = 0.17516911982;
    msg.y = 0.707575271207;
    msg.z = 0.26846902566;
    msg.phi = 0.776669919532;
    msg.theta = 0.652381543499;
    msg.psi = 0.0298957867109;

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
    msg.setTimeStamp(0.406078200181);
    msg.setSource(3054U);
    msg.setSourceEntity(251U);
    msg.setDestination(62474U);
    msg.setDestinationEntity(237U);
    msg.x = 0.673020363124;
    msg.y = 0.654902612812;
    msg.z = 0.489386488083;
    msg.phi = 0.737432969362;
    msg.theta = 0.845754100987;
    msg.psi = 0.945418353682;

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
    msg.setTimeStamp(0.370479513508);
    msg.setSource(23485U);
    msg.setSourceEntity(214U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(76U);
    msg.beam_width = 0.888938425289;
    msg.beam_height = 0.434159118239;

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
    msg.setTimeStamp(0.369631008951);
    msg.setSource(25309U);
    msg.setSourceEntity(122U);
    msg.setDestination(22020U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.994720279522;
    msg.beam_height = 0.749094274756;

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
    msg.setTimeStamp(0.596845262814);
    msg.setSource(50586U);
    msg.setSourceEntity(53U);
    msg.setDestination(13529U);
    msg.setDestinationEntity(165U);
    msg.beam_width = 0.152119517385;
    msg.beam_height = 0.444794741556;

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
    msg.setTimeStamp(0.701909891294);
    msg.setSource(11119U);
    msg.setSourceEntity(156U);
    msg.setDestination(28858U);
    msg.setDestinationEntity(46U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.518522480131);
    msg.setSource(15579U);
    msg.setSourceEntity(47U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(199U);
    msg.sane = 102U;

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
    msg.setTimeStamp(0.943877382034);
    msg.setSource(43515U);
    msg.setSourceEntity(30U);
    msg.setDestination(9606U);
    msg.setDestinationEntity(30U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.79561945323);
    msg.setSource(29147U);
    msg.setSourceEntity(140U);
    msg.setDestination(20470U);
    msg.setDestinationEntity(151U);
    msg.value = 0.340961000191;

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
    msg.setTimeStamp(0.113600205313);
    msg.setSource(3843U);
    msg.setSourceEntity(225U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(22U);
    msg.value = 0.293534275156;

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
    msg.setTimeStamp(0.730205936936);
    msg.setSource(23707U);
    msg.setSourceEntity(75U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(17U);
    msg.value = 0.91127127604;

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
    msg.setTimeStamp(0.540392341336);
    msg.setSource(13160U);
    msg.setSourceEntity(210U);
    msg.setDestination(9840U);
    msg.setDestinationEntity(236U);
    msg.value = 0.410041123844;

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
    msg.setTimeStamp(0.542373779013);
    msg.setSource(51006U);
    msg.setSourceEntity(115U);
    msg.setDestination(21246U);
    msg.setDestinationEntity(178U);
    msg.value = 0.939802147299;

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
    msg.setTimeStamp(0.683660579501);
    msg.setSource(65026U);
    msg.setSourceEntity(219U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(9U);
    msg.value = 0.997919974642;

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
    msg.setTimeStamp(0.824343452525);
    msg.setSource(20914U);
    msg.setSourceEntity(88U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(146U);
    msg.value = 0.00168584757376;

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
    msg.setTimeStamp(0.185666077283);
    msg.setSource(60689U);
    msg.setSourceEntity(185U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(52U);
    msg.value = 0.890856114312;

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
    msg.setTimeStamp(0.303440275131);
    msg.setSource(2710U);
    msg.setSourceEntity(139U);
    msg.setDestination(30213U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0978253469953;

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
    msg.setTimeStamp(0.302582032889);
    msg.setSource(17348U);
    msg.setSourceEntity(119U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(12U);
    msg.value = 0.29930154908;

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
    msg.setTimeStamp(0.751695838533);
    msg.setSource(34879U);
    msg.setSourceEntity(128U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(157U);
    msg.value = 0.265792057265;

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
    msg.setTimeStamp(0.581552142933);
    msg.setSource(10391U);
    msg.setSourceEntity(214U);
    msg.setDestination(62573U);
    msg.setDestinationEntity(83U);
    msg.value = 0.579836055543;

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
    msg.setTimeStamp(0.879954055883);
    msg.setSource(5255U);
    msg.setSourceEntity(19U);
    msg.setDestination(36760U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0203419054682;

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
    msg.setTimeStamp(0.911597878562);
    msg.setSource(56820U);
    msg.setSourceEntity(137U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0430486956039;

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
    msg.setTimeStamp(0.446725807438);
    msg.setSource(28200U);
    msg.setSourceEntity(174U);
    msg.setDestination(30469U);
    msg.setDestinationEntity(229U);
    msg.value = 0.558913029741;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.275591859711);
    msg.setSource(64659U);
    msg.setSourceEntity(156U);
    msg.setDestination(96U);
    msg.setDestinationEntity(226U);
    msg.id = 134U;
    msg.zoom = 15U;
    msg.action = 5U;

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
    msg.setTimeStamp(0.0728414812351);
    msg.setSource(13559U);
    msg.setSourceEntity(76U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(77U);
    msg.id = 70U;
    msg.zoom = 228U;
    msg.action = 7U;

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
    msg.setTimeStamp(0.783970134344);
    msg.setSource(249U);
    msg.setSourceEntity(218U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(61U);
    msg.id = 30U;
    msg.zoom = 1U;
    msg.action = 202U;

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
    msg.setTimeStamp(0.79627011895);
    msg.setSource(31348U);
    msg.setSourceEntity(72U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(143U);
    msg.id = 176U;
    msg.value = 0.797547832549;

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
    msg.setTimeStamp(0.690456964904);
    msg.setSource(18205U);
    msg.setSourceEntity(224U);
    msg.setDestination(8594U);
    msg.setDestinationEntity(122U);
    msg.id = 179U;
    msg.value = 0.242964156031;

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
    msg.setTimeStamp(0.871729045477);
    msg.setSource(36775U);
    msg.setSourceEntity(230U);
    msg.setDestination(45731U);
    msg.setDestinationEntity(55U);
    msg.id = 178U;
    msg.value = 0.629879369689;

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
    msg.setTimeStamp(0.15196474373);
    msg.setSource(13649U);
    msg.setSourceEntity(206U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(216U);
    msg.id = 112U;
    msg.value = 0.656342592353;

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
    msg.setTimeStamp(0.739798688298);
    msg.setSource(58756U);
    msg.setSourceEntity(26U);
    msg.setDestination(15696U);
    msg.setDestinationEntity(208U);
    msg.id = 114U;
    msg.value = 0.378060419374;

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
    msg.setTimeStamp(0.0837606968974);
    msg.setSource(26640U);
    msg.setSourceEntity(198U);
    msg.setDestination(33964U);
    msg.setDestinationEntity(112U);
    msg.id = 162U;
    msg.value = 0.140058213514;

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
    msg.setTimeStamp(0.253448724702);
    msg.setSource(51056U);
    msg.setSourceEntity(76U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(8U);
    msg.id = 228U;
    msg.angle = 0.660035612718;

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
    msg.setTimeStamp(0.533569435352);
    msg.setSource(10538U);
    msg.setSourceEntity(216U);
    msg.setDestination(16766U);
    msg.setDestinationEntity(70U);
    msg.id = 104U;
    msg.angle = 0.858451064572;

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
    msg.setTimeStamp(0.254543473889);
    msg.setSource(19527U);
    msg.setSourceEntity(218U);
    msg.setDestination(48052U);
    msg.setDestinationEntity(101U);
    msg.id = 21U;
    msg.angle = 0.569757438561;

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
    msg.setTimeStamp(0.912470832205);
    msg.setSource(9032U);
    msg.setSourceEntity(80U);
    msg.setDestination(49428U);
    msg.setDestinationEntity(130U);
    msg.op = 167U;
    msg.actions.assign("TJZVKRGTAHHCDAUIWEGOWSMLKFLTWQYSPLINIBNVWVEZVYSBKXFVYHQHFPRJXEPYUPAWYNGPBXWOFXOGJMKWEMBRXOJMQQVTFBCIMUJBFOHYCZQHICOECZSAZMTUMAJXYNTCAEDWESZRLQJFLKJBLZBNSCGIUURDLYY");

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
    msg.setTimeStamp(0.35291369203);
    msg.setSource(22552U);
    msg.setSourceEntity(199U);
    msg.setDestination(14803U);
    msg.setDestinationEntity(106U);
    msg.op = 177U;
    msg.actions.assign("AHEPBKPEDZSXQLXEXTGYRANUFYYJZMFHWYVNIMHHZOKPNOMFJDYRNQKQQPLULNOEESQOHLSKXVOJMMTWPCXBMXEGHTOIKTWCCTFKPADQOTLIUSXNPDHURGLBBGUDWGCXWAYWHSOLWJ");

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
    msg.setTimeStamp(0.366934114847);
    msg.setSource(846U);
    msg.setSourceEntity(244U);
    msg.setDestination(47235U);
    msg.setDestinationEntity(1U);
    msg.op = 215U;
    msg.actions.assign("RKVLVAEHLLNQYTKYZDJOXDHPNRUGUYZLSJNVMSMFAIDWDLXWQXRTFFMPTAVSTHVDBEUKW");

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
    msg.setTimeStamp(0.417688783488);
    msg.setSource(51263U);
    msg.setSourceEntity(152U);
    msg.setDestination(39970U);
    msg.setDestinationEntity(214U);
    msg.actions.assign("MOMBZJELEMDHMIDGEVDHHCAQGLYUKQDNCDNKEURLUPUTIWPKGNAYKYSDLFJUCBFMATEHFAOSHCMCTLTXPZROCQSJEKFOODQNQHZGWFRRNHMPVXYKYDPRXKIVSXHENFISDZBAOPSTFYMAIIXOQNMTSL");

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
    msg.setTimeStamp(0.760766566801);
    msg.setSource(45940U);
    msg.setSourceEntity(183U);
    msg.setDestination(56964U);
    msg.setDestinationEntity(70U);
    msg.actions.assign("GXQPSPQBYRVTWMNETHOAZKJZSWZVMMZOFHEMNYGCIIQESNJCCJAGRWILMCSYRQEPKNUEBODEXRKAGTXUCWIMMCYDEXQGAGFMLMBFAYDYHJSUICDNBIDTPBLPWPHAZEJTWRAGKE");

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
    msg.setTimeStamp(0.312180725189);
    msg.setSource(46093U);
    msg.setSourceEntity(201U);
    msg.setDestination(45983U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("CXWCCTOEFEIIIESBPOJNDRNGYHPNPRMJRLIFAADTAWRAEEKGGVWJZMCNBTZEKHMVGYAZUDTQVVMWFRX");

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
    msg.setTimeStamp(0.0896275165573);
    msg.setSource(10298U);
    msg.setSourceEntity(252U);
    msg.setDestination(21948U);
    msg.setDestinationEntity(57U);
    msg.button = 105U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.148298564326);
    msg.setSource(62238U);
    msg.setSourceEntity(197U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(153U);
    msg.button = 15U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.89490290741);
    msg.setSource(17390U);
    msg.setSourceEntity(8U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(220U);
    msg.button = 71U;
    msg.value = 68U;

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
    msg.setTimeStamp(0.437110747779);
    msg.setSource(57840U);
    msg.setSourceEntity(11U);
    msg.setDestination(6132U);
    msg.setDestinationEntity(125U);
    msg.op = 177U;
    msg.text.assign("EQWCAMVOBOSBIZYCKSNWXVGQIOHNDYOIGNFJLMTGBAYLCLLFXYJR");

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
    msg.setTimeStamp(0.232793015032);
    msg.setSource(61064U);
    msg.setSourceEntity(217U);
    msg.setDestination(8657U);
    msg.setDestinationEntity(195U);
    msg.op = 94U;
    msg.text.assign("LGSULECJQRQVGFRXBGAPMYZGFNJEROUEJPIMCWTBTVAZVTDBCCBJOCJECLOHWNTASSHTHXPQAIKUVJFTQOMIOHOGCNMMWQUVUXNSEMCPYHEDLLDURXKVQSWKIYXHELVETEWFFOXCKZBTIUNKRTQCIDZLWWKVGFURXIHYKYSAHTQ");

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
    msg.setTimeStamp(0.67888674793);
    msg.setSource(782U);
    msg.setSourceEntity(0U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(140U);
    msg.op = 162U;
    msg.text.assign("YIVSNSLOTJEKQOOGXUKASTAGCDWYRHCVPGASNKXEXYZVM");

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
    msg.setTimeStamp(0.16774739436);
    msg.setSource(64915U);
    msg.setSourceEntity(10U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(125U);
    msg.op = 200U;
    msg.time_remain = 0.86056065383;
    msg.sched_time = 0.628956460145;

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
    msg.setTimeStamp(0.171125994709);
    msg.setSource(7500U);
    msg.setSourceEntity(180U);
    msg.setDestination(15281U);
    msg.setDestinationEntity(192U);
    msg.op = 113U;
    msg.time_remain = 0.837031737148;
    msg.sched_time = 0.286511354907;

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
    msg.setTimeStamp(0.219503781653);
    msg.setSource(29525U);
    msg.setSourceEntity(23U);
    msg.setDestination(13260U);
    msg.setDestinationEntity(115U);
    msg.op = 56U;
    msg.time_remain = 0.276539416169;
    msg.sched_time = 0.0403881139477;

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
    msg.setTimeStamp(0.559666324044);
    msg.setSource(41236U);
    msg.setSourceEntity(79U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(41U);
    msg.name.assign("OKNKBIMFDWRAAMQSHZPXWZUAYIAQEVYWLSDVCXLOMCIAWSAZUBNFSCEWJIJJWMVRIXYLNKINTZP");
    msg.op = 49U;
    msg.sched_time = 0.483401235091;

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
    msg.setTimeStamp(0.851719032241);
    msg.setSource(49127U);
    msg.setSourceEntity(33U);
    msg.setDestination(30244U);
    msg.setDestinationEntity(126U);
    msg.name.assign("KKOSFYLZSGZBFTOLGXBEIMYYTFDSAUIJNBDMRHCLTPXOSHIFHGQMRDKTYRKFTNVCFLRUKXNUYWUGMABTLLYWPUHKLQEPAVTSMVNUSBTX");
    msg.op = 140U;
    msg.sched_time = 0.964140189922;

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
    msg.setTimeStamp(0.0723351771791);
    msg.setSource(43919U);
    msg.setSourceEntity(112U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(119U);
    msg.name.assign("VVSLNIXJDJSSEHNHGFMRFPHBSBGZWDGFIAWBYUMKVBGSCPZGRSQYWFOEDAENFRJZJILJFMXEIRYOQQIQOEBOXUDTMKVWLPWGOZTBUDQPUEYXHSANVBAKDKRPFHGCOAYEYITDCCFCVROYDZKTZKQXMJNILQLVQWQTUP");
    msg.op = 219U;
    msg.sched_time = 0.538955252981;

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
    msg.setTimeStamp(0.42864650348);
    msg.setSource(59019U);
    msg.setSourceEntity(2U);
    msg.setDestination(58824U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.9238434428);
    msg.setSource(59967U);
    msg.setSourceEntity(128U);
    msg.setDestination(20678U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.820687115377);
    msg.setSource(1147U);
    msg.setSourceEntity(63U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.189003437801);
    msg.setSource(21808U);
    msg.setSourceEntity(22U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(106U);
    msg.name.assign("DIAPNAEOPWMAQBGTZOPGLFWVKTVKWXVRUIPBXRSWNUMLJVADVYTENBOZESBGKCUMIFBAZKHAMQCAXSVGCNJLJIHLUKDBUIVJVNGRDZPCLYJSGOJMJUBNRQPRCISNOUSTHKEWDGXYLQTBXGMEHFKIXTTNSBYHCHVIKTFNLAYZOZXKLGBOFZJTIDCQHFEPD");
    msg.state = 36U;

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
    msg.setTimeStamp(0.430891770049);
    msg.setSource(16194U);
    msg.setSourceEntity(91U);
    msg.setDestination(54888U);
    msg.setDestinationEntity(237U);
    msg.name.assign("DIEBPSCDSKQUBKGKCC");
    msg.state = 30U;

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
    msg.setTimeStamp(0.456712843544);
    msg.setSource(54958U);
    msg.setSourceEntity(43U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(248U);
    msg.name.assign("TUAKVHHBWUZHQKCUCKJZYHBEHGWSTRVRPJDGCZYSSQXMGOTVTBGOEZYDSFGOJCAGRU");
    msg.state = 197U;

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
    msg.setTimeStamp(0.903846014404);
    msg.setSource(38447U);
    msg.setSourceEntity(156U);
    msg.setDestination(22092U);
    msg.setDestinationEntity(248U);
    msg.name.assign("HXHJBZBQFQFIVY");
    msg.value = 34U;

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
    msg.setTimeStamp(0.0356239044313);
    msg.setSource(56075U);
    msg.setSourceEntity(22U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(22U);
    msg.name.assign("OHFJVJBMCVXQHBNZYYIXACRMLOYPACOTMIZI");
    msg.value = 61U;

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
    msg.setTimeStamp(0.698623864265);
    msg.setSource(65223U);
    msg.setSourceEntity(172U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(139U);
    msg.name.assign("YAQMFVGVLARBFERHMXFRPSIJPGNLTBJHQYTODJQDWZCBEAOEPAASLBSDKNKGFJTJLCNFIECHGMRMAZIIPIBMKASRBYGPUONOJPOBIAKYFYCHYFDUQNZTMSNGHVBXZKWEQTXXVPKZMKCOVQI");
    msg.value = 31U;

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
    msg.setTimeStamp(0.556601130456);
    msg.setSource(31661U);
    msg.setSourceEntity(109U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(45U);
    msg.name.assign("XEQSHUBGOOBMKFVHPPTICUCDTAMOUXSVLLDTKGNDMSDJXIFGHRSVBIFLSEXJTZHSRINXHNFHDQNEKCIXLNGCAJMHAKCYJCPVIKBIOMWYTKPEYWBFFBEOWHKIWQXJMWMPZSPQQYBGURANCQILDYQCZYZWUEGUDXLGOMJJFUXSRKYVVAUYQRFEFSVCDMZU");

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
    msg.setTimeStamp(0.630528969431);
    msg.setSource(61825U);
    msg.setSourceEntity(20U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(87U);
    msg.name.assign("OJRZHOPCEFPQYOZMELNZQRYEODCCQYTKLPWNJPIZTMKYPAACVNTIJSKSLTHAHGXWTUKPFKOEUJFMNEFPRLQJXHMFDCKLEILLXGKXVGDRRFYTGCAURIWNBMKZMPVDICQGLVGJNVQUUQWAULJXXUOSJRMYAB");

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
    msg.setTimeStamp(0.888299720862);
    msg.setSource(42142U);
    msg.setSourceEntity(17U);
    msg.setDestination(51941U);
    msg.setDestinationEntity(130U);
    msg.name.assign("MZBGRISGSRSNLLPGHDTNYTGGGHVZSCWCIPKDFFAYFNTDPWTEDCPEBDNAKTZECOGQFCMEQTTDAHQUHTPVVEB");

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
    msg.setTimeStamp(0.973818050615);
    msg.setSource(45851U);
    msg.setSourceEntity(252U);
    msg.setDestination(6977U);
    msg.setDestinationEntity(122U);
    msg.name.assign("JPNAYPITMQRIMKIXZZWVMCKMLQSBIRKDRXINTABQSGL");
    msg.value = 211U;

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
    msg.setTimeStamp(0.346860291636);
    msg.setSource(30152U);
    msg.setSourceEntity(147U);
    msg.setDestination(12574U);
    msg.setDestinationEntity(185U);
    msg.name.assign("QNZZHTDSZUGKQNVXMKMLTKFOWAJXDGPCNTILHNPBYBKJWWHQVAAMWFUMZYSYRSYXECXHVSACGOPASPSCTBBGIHCCIGWJEBDRFZDTLPQQTEVCOXJUIFRJJPLSFDOMVUBCOBMAQAROFJOSONZUXEIYWEULTYYFIGZEGKFHWWCJVRGMTYJHBQRDNLUXWODKLHRAHDDYPAQADPNTIKEURZEKLPUGHPJSMMQRZIWXETKVIKINYBVSMXOE");
    msg.value = 166U;

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
    msg.setTimeStamp(0.618824213872);
    msg.setSource(10957U);
    msg.setSourceEntity(243U);
    msg.setDestination(26227U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KWCJVNODREZCQDXEQIKSRXGYTVQVPLWDTANGLIGVCUKVELUGIQXFUFJWRHHWGNTZGVMQMJXAQSOKYMDQXHKVPCNKPLXRRLYUTFFLAXMPYYYNSCSIYPNAGDYJSPEPOCWBLMHJEGIKZTMNAZARJDWFPMCDUCFLHZHBFJNCBZNEVMRLUWQADAIOJFRKZOIHJEOBAWGTSADYKSHFGDNUOLBRIOIRWCZZMUUQ");
    msg.value = 141U;

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
    msg.setTimeStamp(0.0315807668385);
    msg.setSource(50399U);
    msg.setSourceEntity(30U);
    msg.setDestination(57858U);
    msg.setDestinationEntity(21U);
    msg.id = 111U;
    msg.period = 2727695217U;
    msg.duty_cycle = 4197956844U;

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
    msg.setTimeStamp(0.539230350311);
    msg.setSource(48700U);
    msg.setSourceEntity(36U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(13U);
    msg.id = 49U;
    msg.period = 3733833509U;
    msg.duty_cycle = 1237656458U;

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
    msg.setTimeStamp(0.949750697708);
    msg.setSource(20317U);
    msg.setSourceEntity(63U);
    msg.setDestination(62883U);
    msg.setDestinationEntity(235U);
    msg.id = 55U;
    msg.period = 363001818U;
    msg.duty_cycle = 2923154688U;

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
    msg.setTimeStamp(0.348929120566);
    msg.setSource(11994U);
    msg.setSourceEntity(62U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(4U);
    msg.id = 51U;
    msg.period = 3290399582U;
    msg.duty_cycle = 817815984U;

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
    msg.setTimeStamp(0.833777187002);
    msg.setSource(33629U);
    msg.setSourceEntity(59U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(31U);
    msg.id = 72U;
    msg.period = 2248957367U;
    msg.duty_cycle = 417484847U;

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
    msg.setTimeStamp(0.983098507062);
    msg.setSource(32172U);
    msg.setSourceEntity(110U);
    msg.setDestination(46066U);
    msg.setDestinationEntity(84U);
    msg.id = 169U;
    msg.period = 180090232U;
    msg.duty_cycle = 808271105U;

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
    msg.setTimeStamp(0.71584225371);
    msg.setSource(29967U);
    msg.setSourceEntity(154U);
    msg.setDestination(62679U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.80194920375;
    msg.lon = 0.976926812177;
    msg.height = 0.355818887857;
    msg.x = 0.175197931126;
    msg.y = 0.952988824038;
    msg.z = 0.548438280653;
    msg.phi = 0.713248216114;
    msg.theta = 0.857582818686;
    msg.psi = 0.990603668564;
    msg.u = 0.212017001466;
    msg.v = 0.0803967556926;
    msg.w = 0.705237163754;
    msg.vx = 0.859421081113;
    msg.vy = 0.952558233105;
    msg.vz = 0.300084897134;
    msg.p = 0.755925068985;
    msg.q = 0.683899519335;
    msg.r = 0.194731656466;
    msg.depth = 0.927811045941;
    msg.alt = 0.612019845322;

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
    msg.setTimeStamp(0.00235999555059);
    msg.setSource(29327U);
    msg.setSourceEntity(13U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.0736751763025;
    msg.lon = 0.462511422861;
    msg.height = 0.395676491093;
    msg.x = 0.0108647870338;
    msg.y = 0.476153142772;
    msg.z = 0.639967301811;
    msg.phi = 0.71628588806;
    msg.theta = 0.370566397463;
    msg.psi = 0.737494352901;
    msg.u = 0.587811768048;
    msg.v = 0.0512672765882;
    msg.w = 0.701862156811;
    msg.vx = 0.576914302773;
    msg.vy = 0.78096558403;
    msg.vz = 0.66514054481;
    msg.p = 0.622628355863;
    msg.q = 0.879935305414;
    msg.r = 0.0746260620968;
    msg.depth = 0.187853344473;
    msg.alt = 0.564639928732;

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
    msg.setTimeStamp(0.636650350842);
    msg.setSource(5481U);
    msg.setSourceEntity(88U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.248270583769;
    msg.lon = 0.777354246934;
    msg.height = 0.941305599859;
    msg.x = 0.890063049812;
    msg.y = 0.0506661796174;
    msg.z = 0.651713403152;
    msg.phi = 0.868038206424;
    msg.theta = 0.630551032923;
    msg.psi = 0.306185927086;
    msg.u = 0.622837677955;
    msg.v = 0.922774696718;
    msg.w = 0.493437708721;
    msg.vx = 0.303369649657;
    msg.vy = 0.239072956306;
    msg.vz = 0.295745687;
    msg.p = 0.581241517352;
    msg.q = 0.0998356541131;
    msg.r = 0.416832238139;
    msg.depth = 0.671365824886;
    msg.alt = 0.794018454412;

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
    msg.setTimeStamp(0.00803382772039);
    msg.setSource(7681U);
    msg.setSourceEntity(244U);
    msg.setDestination(58264U);
    msg.setDestinationEntity(75U);
    msg.x = 0.440401384692;
    msg.y = 0.177515259344;
    msg.z = 0.102384030441;

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
    msg.setTimeStamp(0.828594888195);
    msg.setSource(51171U);
    msg.setSourceEntity(93U);
    msg.setDestination(22056U);
    msg.setDestinationEntity(41U);
    msg.x = 0.75797758395;
    msg.y = 0.591132950543;
    msg.z = 0.031564444749;

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
    msg.setTimeStamp(0.620301335216);
    msg.setSource(43347U);
    msg.setSourceEntity(220U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(58U);
    msg.x = 0.27786152038;
    msg.y = 0.915394689792;
    msg.z = 0.573653460602;

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
    msg.setTimeStamp(0.00356588704885);
    msg.setSource(31823U);
    msg.setSourceEntity(46U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(219U);
    msg.value = 0.589706408865;

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
    msg.setTimeStamp(0.225577803513);
    msg.setSource(20444U);
    msg.setSourceEntity(226U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(171U);
    msg.value = 0.350829818952;

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
    msg.setTimeStamp(0.191244010705);
    msg.setSource(46091U);
    msg.setSourceEntity(18U);
    msg.setDestination(52323U);
    msg.setDestinationEntity(241U);
    msg.value = 0.022426214764;

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
    msg.setTimeStamp(0.099040448021);
    msg.setSource(61126U);
    msg.setSourceEntity(192U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(66U);
    msg.value = 0.561865299916;

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
    msg.setTimeStamp(0.85805013368);
    msg.setSource(35733U);
    msg.setSourceEntity(89U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(33U);
    msg.value = 0.733248899105;

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
    msg.setTimeStamp(0.561695728193);
    msg.setSource(24567U);
    msg.setSourceEntity(35U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(146U);
    msg.value = 0.773267243009;

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
    msg.setTimeStamp(0.845285364071);
    msg.setSource(7313U);
    msg.setSourceEntity(106U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(148U);
    msg.x = 0.353454701949;
    msg.y = 0.0784749283473;
    msg.z = 0.995283362767;
    msg.phi = 0.987259536859;
    msg.theta = 0.677839464921;
    msg.psi = 0.912482534777;
    msg.p = 0.245517588771;
    msg.q = 0.910736092038;
    msg.r = 0.535728945401;
    msg.u = 0.966208405508;
    msg.v = 0.21105456922;
    msg.w = 0.721055792759;
    msg.bias_psi = 0.903506960428;
    msg.bias_r = 0.708740758304;

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
    msg.setTimeStamp(0.472392173262);
    msg.setSource(3908U);
    msg.setSourceEntity(162U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(193U);
    msg.x = 0.790102112469;
    msg.y = 0.746341933225;
    msg.z = 0.0641123414442;
    msg.phi = 0.41957623175;
    msg.theta = 0.695798398742;
    msg.psi = 0.563728098187;
    msg.p = 0.369190725911;
    msg.q = 0.505604982889;
    msg.r = 0.96688410398;
    msg.u = 0.631950223446;
    msg.v = 0.911908054998;
    msg.w = 0.290955945602;
    msg.bias_psi = 0.393138917019;
    msg.bias_r = 0.209401239776;

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
    msg.setTimeStamp(0.690162144697);
    msg.setSource(30566U);
    msg.setSourceEntity(88U);
    msg.setDestination(3649U);
    msg.setDestinationEntity(218U);
    msg.x = 0.768668410588;
    msg.y = 0.172776844374;
    msg.z = 0.16630252585;
    msg.phi = 0.26847182004;
    msg.theta = 0.46666568376;
    msg.psi = 0.797172943619;
    msg.p = 0.224467295358;
    msg.q = 0.645260354102;
    msg.r = 0.066461213767;
    msg.u = 0.509713355674;
    msg.v = 0.740385716168;
    msg.w = 0.375242959132;
    msg.bias_psi = 0.630772022787;
    msg.bias_r = 0.782775255232;

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
    msg.setTimeStamp(0.0720589171992);
    msg.setSource(52216U);
    msg.setSourceEntity(72U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(196U);
    msg.bias_psi = 0.296260056264;
    msg.bias_r = 0.932334036855;
    msg.cog = 0.460476114734;
    msg.cyaw = 0.578858281936;
    msg.lbl_rej_level = 0.101401777492;
    msg.gps_rej_level = 0.59974973341;
    msg.custom_x = 0.859801298051;
    msg.custom_y = 0.256773743401;
    msg.custom_z = 0.918204771484;

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
    msg.setTimeStamp(0.556005417848);
    msg.setSource(14604U);
    msg.setSourceEntity(69U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(81U);
    msg.bias_psi = 0.642169798966;
    msg.bias_r = 0.773026765201;
    msg.cog = 0.575010995479;
    msg.cyaw = 0.751159818981;
    msg.lbl_rej_level = 0.167347618756;
    msg.gps_rej_level = 0.492943644842;
    msg.custom_x = 0.947377440488;
    msg.custom_y = 0.571251502573;
    msg.custom_z = 0.182548695516;

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
    msg.setTimeStamp(0.583456055715);
    msg.setSource(16997U);
    msg.setSourceEntity(135U);
    msg.setDestination(56002U);
    msg.setDestinationEntity(97U);
    msg.bias_psi = 0.56981518802;
    msg.bias_r = 0.595034076761;
    msg.cog = 0.4451264978;
    msg.cyaw = 0.578363028077;
    msg.lbl_rej_level = 0.392843269539;
    msg.gps_rej_level = 0.209678105527;
    msg.custom_x = 0.975851595972;
    msg.custom_y = 0.775323777378;
    msg.custom_z = 0.931105335444;

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
    msg.setTimeStamp(0.431366677242);
    msg.setSource(4547U);
    msg.setSourceEntity(169U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(57U);
    msg.utc_time = 0.506389674169;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.506691038536);
    msg.setSource(49486U);
    msg.setSourceEntity(11U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(176U);
    msg.utc_time = 0.914565381415;
    msg.reason = 9U;

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
    msg.setTimeStamp(0.489237470062);
    msg.setSource(37894U);
    msg.setSourceEntity(0U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(32U);
    msg.utc_time = 0.705501591601;
    msg.reason = 28U;

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
    msg.setTimeStamp(0.793303663554);
    msg.setSource(41171U);
    msg.setSourceEntity(224U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(23U);
    msg.id = 120U;
    msg.range = 0.0638784744124;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.243095953635);
    msg.setSource(2651U);
    msg.setSourceEntity(228U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(119U);
    msg.id = 63U;
    msg.range = 0.133706493874;
    msg.acceptance = 11U;

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
    msg.setTimeStamp(0.80484463354);
    msg.setSource(53516U);
    msg.setSourceEntity(8U);
    msg.setDestination(16301U);
    msg.setDestinationEntity(77U);
    msg.id = 99U;
    msg.range = 0.606573763923;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.521633847944);
    msg.setSource(35158U);
    msg.setSourceEntity(10U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(118U);
    msg.type = 197U;
    msg.reason = 192U;
    msg.value = 0.0396632465382;
    msg.timestep = 0.831557925735;

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
    msg.setTimeStamp(0.961962594697);
    msg.setSource(43449U);
    msg.setSourceEntity(241U);
    msg.setDestination(39329U);
    msg.setDestinationEntity(249U);
    msg.type = 194U;
    msg.reason = 37U;
    msg.value = 0.898760937575;
    msg.timestep = 0.567833335822;

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
    msg.setTimeStamp(0.325851505582);
    msg.setSource(4391U);
    msg.setSourceEntity(81U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(80U);
    msg.type = 98U;
    msg.reason = 171U;
    msg.value = 0.288935896951;
    msg.timestep = 0.7149358793;

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
    msg.setTimeStamp(0.79195950513);
    msg.setSource(27785U);
    msg.setSourceEntity(186U);
    msg.setDestination(2953U);
    msg.setDestinationEntity(46U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QVOSNBCIMNGHYIKPOWDPLGBFAWQL");
    tmp_msg_0.lat = 0.287812480289;
    tmp_msg_0.lon = 0.0648786981265;
    tmp_msg_0.depth = 0.0718980485239;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.571378097702;
    msg.y = 0.111659525554;
    msg.var_x = 0.382963320844;
    msg.var_y = 0.826780387878;
    msg.distance = 0.304061306983;

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
    msg.setTimeStamp(0.93172634644);
    msg.setSource(43790U);
    msg.setSourceEntity(12U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(45U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FQXGVCHKUJNYRPAPZBQPNZABSTLLEGGLBODHTIEUAMWQZJRSWZGUWSYJQHOFEDRABNYCRVOHIXBTJJDNDMWSEXRCHOKXGVPNFBLNWBQCNGXXRHMHMUFZLFUHGYYLSRCRKQVUPFKIINDBALPRCUXLJKTSJOIPOFWEZIMKYVVTJNCLEIGNPHCVSZJKGATYMQQDEQSKJBAZXFXOEDYFSCZETDQTMKPROMWHAPMLUECDWVYDZVKAMSUGUTWA");
    tmp_msg_0.lat = 0.127819879289;
    tmp_msg_0.lon = 0.362264298043;
    tmp_msg_0.depth = 0.671629776742;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0885846024431;
    msg.y = 0.203806966043;
    msg.var_x = 0.316124384899;
    msg.var_y = 0.257433385521;
    msg.distance = 0.167909507961;

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
    msg.setTimeStamp(0.843787436727);
    msg.setSource(22718U);
    msg.setSourceEntity(212U);
    msg.setDestination(28318U);
    msg.setDestinationEntity(132U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XNHPZNRNUHPCAFTJVDDYEFXVMDVIPULMGGAAKIPEBUMBSALPLIMKRSYHYTTWJXHYCDXQMSVJQPMNWEBNOLSPQOIJCORAWVKPMCMIIOERIBNHBTYAMULIHVJBCYHOFCZJTZUNRWBJSMRPUCTDXQNXHZQFAGRJWSVZVFTTFWNEKZEKXOGCODJORDKLBFQGG");
    tmp_msg_0.lat = 0.205865801847;
    tmp_msg_0.lon = 0.00267521214897;
    tmp_msg_0.depth = 0.447867491281;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0254616025682;
    msg.y = 0.175210426292;
    msg.var_x = 0.483128806701;
    msg.var_y = 0.550249759595;
    msg.distance = 0.457528880411;

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
    msg.setTimeStamp(0.493776485557);
    msg.setSource(60547U);
    msg.setSourceEntity(41U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(48U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.212070749722);
    msg.setSource(39403U);
    msg.setSourceEntity(170U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(186U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.300839092881);
    msg.setSource(16991U);
    msg.setSourceEntity(181U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(248U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.798542387149);
    msg.setSource(8942U);
    msg.setSourceEntity(172U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(194U);
    msg.x = 0.784528164817;
    msg.y = 0.381293333674;
    msg.z = 0.16336947229;

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
    msg.setTimeStamp(0.593031976243);
    msg.setSource(32537U);
    msg.setSourceEntity(32U);
    msg.setDestination(36715U);
    msg.setDestinationEntity(210U);
    msg.x = 0.803860932503;
    msg.y = 0.149673492767;
    msg.z = 0.685950633428;

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
    msg.setTimeStamp(0.957688396718);
    msg.setSource(38776U);
    msg.setSourceEntity(38U);
    msg.setDestination(7844U);
    msg.setDestinationEntity(54U);
    msg.x = 0.757388439266;
    msg.y = 0.951198822711;
    msg.z = 0.834883477023;

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
    msg.setTimeStamp(0.566269847543);
    msg.setSource(13257U);
    msg.setSourceEntity(177U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(179U);
    msg.value = 0.718041956239;

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
    msg.setTimeStamp(0.349922553424);
    msg.setSource(3756U);
    msg.setSourceEntity(211U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0530245903135;

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
    msg.setTimeStamp(0.19007988651);
    msg.setSource(6280U);
    msg.setSourceEntity(79U);
    msg.setDestination(42505U);
    msg.setDestinationEntity(121U);
    msg.value = 0.658993374842;

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
    msg.setTimeStamp(0.257419422068);
    msg.setSource(64714U);
    msg.setSourceEntity(237U);
    msg.setDestination(62127U);
    msg.setDestinationEntity(124U);
    msg.value = 0.350198445799;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.81210567229);
    msg.setSource(3108U);
    msg.setSourceEntity(103U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(161U);
    msg.value = 0.012027562687;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.928281343847);
    msg.setSource(27220U);
    msg.setSourceEntity(135U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(250U);
    msg.value = 0.158342871293;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.925819457445);
    msg.setSource(45442U);
    msg.setSourceEntity(33U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(19U);
    msg.value = 0.423731176021;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.607947292634);
    msg.setSource(5250U);
    msg.setSourceEntity(59U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(197U);
    msg.value = 0.228851165408;
    msg.speed_units = 124U;

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
    msg.setTimeStamp(0.443198905602);
    msg.setSource(27938U);
    msg.setSourceEntity(25U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(20U);
    msg.value = 0.302620041457;
    msg.speed_units = 186U;

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
    msg.setTimeStamp(0.525007273354);
    msg.setSource(1915U);
    msg.setSourceEntity(220U);
    msg.setDestination(59485U);
    msg.setDestinationEntity(7U);
    msg.value = 0.366209630285;

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
    msg.setTimeStamp(0.943977977298);
    msg.setSource(54101U);
    msg.setSourceEntity(117U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(115U);
    msg.value = 0.879145692343;

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
    msg.setTimeStamp(0.0637632969467);
    msg.setSource(29508U);
    msg.setSourceEntity(65U);
    msg.setDestination(54789U);
    msg.setDestinationEntity(32U);
    msg.value = 0.656506247835;

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
    msg.setTimeStamp(0.255613471733);
    msg.setSource(29425U);
    msg.setSourceEntity(81U);
    msg.setDestination(54045U);
    msg.setDestinationEntity(223U);
    msg.value = 0.158747284175;

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
    msg.setTimeStamp(0.189542223609);
    msg.setSource(17841U);
    msg.setSourceEntity(225U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(199U);
    msg.value = 0.153751251686;

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
    msg.setTimeStamp(0.302646881983);
    msg.setSource(46182U);
    msg.setSourceEntity(165U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(56U);
    msg.value = 0.507553006017;

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
    msg.setTimeStamp(0.0672247820447);
    msg.setSource(48977U);
    msg.setSourceEntity(44U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(213U);
    msg.value = 0.449641043789;

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
    msg.setTimeStamp(0.31110480726);
    msg.setSource(49146U);
    msg.setSourceEntity(34U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(241U);
    msg.value = 0.487629403016;

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
    msg.setTimeStamp(0.260086335542);
    msg.setSource(3666U);
    msg.setSourceEntity(244U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(242U);
    msg.value = 0.784446912761;

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
    msg.setTimeStamp(0.788356329428);
    msg.setSource(48418U);
    msg.setSourceEntity(176U);
    msg.setDestination(39277U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 366748963U;
    msg.start_lat = 0.159914962047;
    msg.start_lon = 0.478838604878;
    msg.start_z = 0.392115782841;
    msg.start_z_units = 159U;
    msg.end_lat = 0.417883679497;
    msg.end_lon = 0.85652547829;
    msg.end_z = 0.782399525623;
    msg.end_z_units = 166U;
    msg.speed = 0.247638401885;
    msg.speed_units = 15U;
    msg.lradius = 0.981228887156;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.885204376124);
    msg.setSource(4522U);
    msg.setSourceEntity(8U);
    msg.setDestination(51997U);
    msg.setDestinationEntity(88U);
    msg.path_ref = 518753825U;
    msg.start_lat = 0.0430072341463;
    msg.start_lon = 0.328364774296;
    msg.start_z = 0.403287025319;
    msg.start_z_units = 203U;
    msg.end_lat = 0.10626325415;
    msg.end_lon = 0.358433021215;
    msg.end_z = 0.650589459864;
    msg.end_z_units = 135U;
    msg.speed = 0.140323754473;
    msg.speed_units = 37U;
    msg.lradius = 0.707449440907;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.548439437473);
    msg.setSource(35230U);
    msg.setSourceEntity(216U);
    msg.setDestination(13245U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 1229572927U;
    msg.start_lat = 0.712891817183;
    msg.start_lon = 0.577247328742;
    msg.start_z = 0.145054866513;
    msg.start_z_units = 93U;
    msg.end_lat = 0.679736626428;
    msg.end_lon = 0.167970431927;
    msg.end_z = 0.776281041482;
    msg.end_z_units = 187U;
    msg.speed = 0.225162671045;
    msg.speed_units = 119U;
    msg.lradius = 0.0805302751154;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.343579324033);
    msg.setSource(58997U);
    msg.setSourceEntity(142U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(92U);
    msg.x = 0.153064159782;
    msg.y = 0.58519358273;
    msg.z = 0.660599458561;
    msg.k = 0.335731999476;
    msg.m = 0.191758121342;
    msg.n = 0.179696751863;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.727927891701);
    msg.setSource(46012U);
    msg.setSourceEntity(1U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(51U);
    msg.x = 0.349251743956;
    msg.y = 0.944529370182;
    msg.z = 0.222495625792;
    msg.k = 0.0849573850839;
    msg.m = 0.594997701713;
    msg.n = 0.786205152422;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.577971222966);
    msg.setSource(7227U);
    msg.setSourceEntity(66U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(89U);
    msg.x = 0.943350155563;
    msg.y = 0.0707850168365;
    msg.z = 0.865407844484;
    msg.k = 0.598181037295;
    msg.m = 0.515046173945;
    msg.n = 0.0446021289045;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.406234004983);
    msg.setSource(63232U);
    msg.setSourceEntity(103U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(15U);
    msg.value = 0.238572542231;

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
    msg.setTimeStamp(0.877500132657);
    msg.setSource(11472U);
    msg.setSourceEntity(36U);
    msg.setDestination(10182U);
    msg.setDestinationEntity(252U);
    msg.value = 0.110341354865;

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
    msg.setTimeStamp(0.789873326193);
    msg.setSource(61630U);
    msg.setSourceEntity(223U);
    msg.setDestination(48640U);
    msg.setDestinationEntity(236U);
    msg.value = 0.337641653105;

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
    msg.setTimeStamp(0.494275587738);
    msg.setSource(5819U);
    msg.setSourceEntity(96U);
    msg.setDestination(60255U);
    msg.setDestinationEntity(52U);
    msg.u = 0.101271346449;
    msg.v = 0.376062673538;
    msg.w = 0.155691373934;
    msg.p = 0.336400510119;
    msg.q = 0.186002643177;
    msg.r = 0.260374661219;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.553269332569);
    msg.setSource(57701U);
    msg.setSourceEntity(158U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(55U);
    msg.u = 0.0716471177555;
    msg.v = 0.646990553578;
    msg.w = 0.467113538622;
    msg.p = 0.523742961129;
    msg.q = 0.1665095154;
    msg.r = 0.300494410839;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.88531815595);
    msg.setSource(18821U);
    msg.setSourceEntity(189U);
    msg.setDestination(1636U);
    msg.setDestinationEntity(108U);
    msg.u = 0.758381813345;
    msg.v = 0.994721543963;
    msg.w = 0.199645541933;
    msg.p = 0.889827626594;
    msg.q = 0.482805622073;
    msg.r = 0.717828013827;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.739764531186);
    msg.setSource(15698U);
    msg.setSourceEntity(243U);
    msg.setDestination(15150U);
    msg.setDestinationEntity(21U);
    msg.path_ref = 1778800728U;
    msg.start_lat = 0.836943704052;
    msg.start_lon = 0.932096214193;
    msg.start_z = 0.880234422505;
    msg.start_z_units = 0U;
    msg.end_lat = 0.287358131095;
    msg.end_lon = 0.502162266398;
    msg.end_z = 0.561153015964;
    msg.end_z_units = 232U;
    msg.lradius = 0.789892467338;
    msg.flags = 58U;
    msg.x = 0.91796616001;
    msg.y = 0.725594373042;
    msg.z = 0.600559470662;
    msg.vx = 0.19519490022;
    msg.vy = 0.833243033409;
    msg.vz = 0.499907489189;
    msg.course_error = 0.485414001574;
    msg.eta = 19912U;

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
    msg.setTimeStamp(0.939070062994);
    msg.setSource(42309U);
    msg.setSourceEntity(150U);
    msg.setDestination(65084U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 1619375532U;
    msg.start_lat = 0.978494084672;
    msg.start_lon = 0.214442712401;
    msg.start_z = 0.248795745414;
    msg.start_z_units = 92U;
    msg.end_lat = 0.422908399447;
    msg.end_lon = 0.798256162211;
    msg.end_z = 0.205182923734;
    msg.end_z_units = 127U;
    msg.lradius = 0.253897909777;
    msg.flags = 167U;
    msg.x = 0.418061605359;
    msg.y = 0.482495369457;
    msg.z = 0.96200075771;
    msg.vx = 0.062920057705;
    msg.vy = 0.779055903828;
    msg.vz = 0.198346239014;
    msg.course_error = 0.818146507973;
    msg.eta = 43285U;

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
    msg.setTimeStamp(0.24813790868);
    msg.setSource(58861U);
    msg.setSourceEntity(31U);
    msg.setDestination(43942U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 2006821920U;
    msg.start_lat = 0.0135074284343;
    msg.start_lon = 0.842248015815;
    msg.start_z = 0.768444097265;
    msg.start_z_units = 30U;
    msg.end_lat = 0.0329527133787;
    msg.end_lon = 0.208661736471;
    msg.end_z = 0.510131722075;
    msg.end_z_units = 201U;
    msg.lradius = 0.575775417258;
    msg.flags = 204U;
    msg.x = 0.847058244481;
    msg.y = 0.0890680732386;
    msg.z = 0.718659949324;
    msg.vx = 0.784402834671;
    msg.vy = 0.632332699751;
    msg.vz = 0.889645330688;
    msg.course_error = 0.364571730224;
    msg.eta = 64675U;

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
    msg.setTimeStamp(0.480066469612);
    msg.setSource(11397U);
    msg.setSourceEntity(126U);
    msg.setDestination(63253U);
    msg.setDestinationEntity(76U);
    msg.k = 0.835442968469;
    msg.m = 0.732038265783;
    msg.n = 0.603125233824;

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
    msg.setTimeStamp(0.0590741933146);
    msg.setSource(36169U);
    msg.setSourceEntity(226U);
    msg.setDestination(8988U);
    msg.setDestinationEntity(120U);
    msg.k = 0.282177608449;
    msg.m = 0.23948995629;
    msg.n = 0.172155053538;

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
    msg.setTimeStamp(0.6231704706);
    msg.setSource(2961U);
    msg.setSourceEntity(32U);
    msg.setDestination(14062U);
    msg.setDestinationEntity(173U);
    msg.k = 0.814282513881;
    msg.m = 0.210132105793;
    msg.n = 0.234099317053;

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
    msg.setTimeStamp(0.287664130851);
    msg.setSource(44956U);
    msg.setSourceEntity(253U);
    msg.setDestination(60837U);
    msg.setDestinationEntity(226U);
    msg.p = 0.448595485872;
    msg.i = 0.741598427866;
    msg.d = 0.326981165229;
    msg.a = 0.69741829676;

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
    msg.setTimeStamp(0.0260404483068);
    msg.setSource(35242U);
    msg.setSourceEntity(54U);
    msg.setDestination(61901U);
    msg.setDestinationEntity(79U);
    msg.p = 0.82131198011;
    msg.i = 0.452475928451;
    msg.d = 0.0639577587379;
    msg.a = 0.689909653596;

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
    msg.setTimeStamp(0.73002719906);
    msg.setSource(58579U);
    msg.setSourceEntity(179U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(244U);
    msg.p = 0.147272786926;
    msg.i = 0.961058271264;
    msg.d = 0.515798677278;
    msg.a = 0.0530852725291;

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
    msg.setTimeStamp(0.725117753977);
    msg.setSource(65340U);
    msg.setSourceEntity(200U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(101U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.644583597546);
    msg.setSource(39351U);
    msg.setSourceEntity(63U);
    msg.setDestination(22066U);
    msg.setDestinationEntity(216U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.0753562260826);
    msg.setSource(15091U);
    msg.setSourceEntity(213U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(34U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.447269788425);
    msg.setSource(39871U);
    msg.setSourceEntity(54U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(93U);
    msg.timeout = 9093U;
    msg.lat = 0.113110467195;
    msg.lon = 0.739105149692;
    msg.z = 0.169097411202;
    msg.z_units = 212U;
    msg.speed = 0.257265279522;
    msg.speed_units = 69U;
    msg.roll = 0.985841266107;
    msg.pitch = 0.809484925576;
    msg.yaw = 0.474978661375;
    msg.custom.assign("EWUDAGWWRXLUWYXIVSDONFSYZKTZOHDPLWXIRJCFEVVPUQQZQIHYKALNTTAMXMYTCHHZPPJPQVLBNMEBWGMCIENQAFAKQJCVETNBO");

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
    msg.setTimeStamp(0.997852807864);
    msg.setSource(16042U);
    msg.setSourceEntity(242U);
    msg.setDestination(3129U);
    msg.setDestinationEntity(138U);
    msg.timeout = 21210U;
    msg.lat = 0.674989353878;
    msg.lon = 0.741790157746;
    msg.z = 0.461256476492;
    msg.z_units = 73U;
    msg.speed = 0.125261783067;
    msg.speed_units = 28U;
    msg.roll = 0.364673697851;
    msg.pitch = 0.336246580794;
    msg.yaw = 0.281891966007;
    msg.custom.assign("HAFRAOMMJQGHCDMYCUXGHXQNTVEZPQBNHTGVEZLWZUNBZXTUOCXSOVGNKIAWGVASPMKIUNWZFJDJTTYULZIGJFIISJQRZCZDODWBLZJOJCRLDHHWTOQYMYJBPRVPWWSFVQIDBDJWBVHURMZYBRBNOXPKQUNMWNHFSXFWRELLXIILKCHKYVDKAATMSEYEPRYQQNLNMPFETPFKGODYRKSFTDTESSL");

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
    msg.setTimeStamp(0.244903043261);
    msg.setSource(20997U);
    msg.setSourceEntity(169U);
    msg.setDestination(34255U);
    msg.setDestinationEntity(69U);
    msg.timeout = 9023U;
    msg.lat = 0.523366403513;
    msg.lon = 0.787694736755;
    msg.z = 0.271349566832;
    msg.z_units = 24U;
    msg.speed = 0.557237867767;
    msg.speed_units = 79U;
    msg.roll = 0.700185386487;
    msg.pitch = 0.829857720197;
    msg.yaw = 0.553140752162;
    msg.custom.assign("KBHFIXCEECUNBGQTOHBJMWCTWJKOKUYLZDGVRNPNPXXORIMAQTLDNASGXUKOSZRYGQQYZYIPNGL");

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
    msg.setTimeStamp(0.753027710201);
    msg.setSource(843U);
    msg.setSourceEntity(15U);
    msg.setDestination(51673U);
    msg.setDestinationEntity(174U);
    msg.timeout = 50742U;
    msg.lat = 0.778475113763;
    msg.lon = 0.767379674051;
    msg.z = 0.0445015044898;
    msg.z_units = 215U;
    msg.speed = 0.0433586067824;
    msg.speed_units = 104U;
    msg.duration = 6710U;
    msg.radius = 0.606099603192;
    msg.flags = 236U;
    msg.custom.assign("VVZFFPYNXSQBZJBMIKSYZCJFYPDJGTACEKZMKWEMSNNCTHRWUKLWCLIDMSVHHQRKGARBHUWESSKWKCVAWJEICAYEBYONVXGIAOXLDVYPLDOJUSSLDMTYHRBWKCGPBETHNOUQFFLRWEXNFIUACDIHQSJDLVJAQFGJLHPTOPEFMMPTQUAMBVCWFBXXGQYMOOICQMXXETJVXOLITPYDPRHWRXYRTLDKHAUGZZNNVEGDSKJBNRPBZUGOUATQ");

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
    msg.setTimeStamp(0.965742584266);
    msg.setSource(53548U);
    msg.setSourceEntity(191U);
    msg.setDestination(57047U);
    msg.setDestinationEntity(6U);
    msg.timeout = 8753U;
    msg.lat = 0.95586817766;
    msg.lon = 0.964106869062;
    msg.z = 0.649131609477;
    msg.z_units = 45U;
    msg.speed = 0.704542254521;
    msg.speed_units = 122U;
    msg.duration = 1475U;
    msg.radius = 0.440344911317;
    msg.flags = 232U;
    msg.custom.assign("WQDJWKHIVBEJYNSAYCTJLOREQHHFEPZHRUIDNFCXCTGTKHGMCZODWXVIWLTAAGWLIFNECMYXATLOIKHS");

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
    msg.setTimeStamp(0.734212320162);
    msg.setSource(57938U);
    msg.setSourceEntity(9U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(59U);
    msg.timeout = 5661U;
    msg.lat = 0.570845606318;
    msg.lon = 0.83759199495;
    msg.z = 0.802718041888;
    msg.z_units = 80U;
    msg.speed = 0.131526014129;
    msg.speed_units = 64U;
    msg.duration = 61594U;
    msg.radius = 0.887120493948;
    msg.flags = 123U;
    msg.custom.assign("ZMKOEXEMWHGKHKNVROKIDAUHSUPGYZOPWKPKHKGZYQRYCSNYQNAUTECVJBZKHZUBZMMEKFTXOGIBJYDGFDYBVEWHBVXQWNUINPVCAMTQGWMDDQLBSRHIXXSAMRNCOITLTPKQINEASCFULVADELWHRWCRSBARTRPTNIHEMOQALSJCV");

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
    msg.setTimeStamp(0.810756651213);
    msg.setSource(65172U);
    msg.setSourceEntity(122U);
    msg.setDestination(49886U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("GYPKMBMIENRFLKPFUIMGCCXNLWSDGVQQNPJOFEJUULQMKRUFJITBFDAOSHEVMRJISJXGYAYSALXDCWYQHVXXXZNRUNBKUVTHOEYUYTLZDYIMAAAZETPQCWZOOGNKJZLXRYNFBUDLVSEUTFKYANFJQSWAIQUMELB");

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
    msg.setTimeStamp(0.563497018762);
    msg.setSource(63467U);
    msg.setSourceEntity(78U);
    msg.setDestination(11119U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("MSMUWBYYAMPQRHGQEFOCRIPSTVXGKWIZLGSQLPCAMCBTDNMVVEFSUYXSNZZILHDNPMXDAKWBKHOYCLNXIAFWKWTKGNKNTSWHOCAHQQUBUXCAAJOBOLIVRZGOAWOBOMHFKRE");

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
    msg.setTimeStamp(0.122166061167);
    msg.setSource(14878U);
    msg.setSourceEntity(104U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("UOMSKKJGQKZVFTCBYNXUMYJNCVWJKLNJKKYEQWBNSFJIYBAOMURPRJSHRYLFQCTLSOKELHNPPOBGJCXJPDADIUTMIEDGZGOVUFSVXHWHNHDZSOUPTZZKBCBJOGXUBWFWEG");

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
    msg.setTimeStamp(0.440224667629);
    msg.setSource(6372U);
    msg.setSourceEntity(16U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(36U);
    msg.timeout = 4923U;
    msg.lat = 0.523554260548;
    msg.lon = 0.449766428951;
    msg.z = 0.178513906295;
    msg.z_units = 53U;
    msg.duration = 40744U;
    msg.speed = 0.807751148048;
    msg.speed_units = 230U;
    msg.type = 204U;
    msg.radius = 0.0306154043968;
    msg.length = 0.215042443433;
    msg.bearing = 0.576270330496;
    msg.direction = 166U;
    msg.custom.assign("UJIIZBLARRDGJHCTJFOCFXQUBJWEQFMLWUDVJRMGAVZZTAUNIMOPLHBEXIWKRWXSNWNHXDQTPVITRJUSDBUNBOVKKWLRWOEHBWZOFICBKKLBXKFSLDSLDGXANNHHNXKOOFQJCESVMYRPQVZHGQZDYZCIYMTVBSMAUNPUFGVGUMRPBEFFPGVYQFEDLQMQSRTNCMAWTAPJWVEAACZYENJO");

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
    msg.setTimeStamp(0.0431645126195);
    msg.setSource(34188U);
    msg.setSourceEntity(223U);
    msg.setDestination(44861U);
    msg.setDestinationEntity(159U);
    msg.timeout = 4288U;
    msg.lat = 0.153413035751;
    msg.lon = 0.104186372944;
    msg.z = 0.886980563461;
    msg.z_units = 159U;
    msg.duration = 59194U;
    msg.speed = 0.761985940757;
    msg.speed_units = 39U;
    msg.type = 138U;
    msg.radius = 0.255969389664;
    msg.length = 0.519077806614;
    msg.bearing = 0.93490371725;
    msg.direction = 54U;
    msg.custom.assign("PPENBCHVNZSJNNZRDDFVTHWEZHVUYAMXWZYLDUARGTOBICMFYJCHDDHERYWRSYRLIYNVFIACMKQBXESXBEKVHWDOTCMJWOGMNJRCFSSLYZKHLOQUNQTZBUINTUQ");

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
    msg.setTimeStamp(0.11079449213);
    msg.setSource(12132U);
    msg.setSourceEntity(178U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(13U);
    msg.timeout = 52165U;
    msg.lat = 0.0444035255843;
    msg.lon = 0.974375874412;
    msg.z = 0.417755942001;
    msg.z_units = 72U;
    msg.duration = 58271U;
    msg.speed = 0.406032507246;
    msg.speed_units = 2U;
    msg.type = 82U;
    msg.radius = 0.284400719428;
    msg.length = 0.916055399799;
    msg.bearing = 0.883070356236;
    msg.direction = 59U;
    msg.custom.assign("PIXRLBTXPYODCLFEANPRRGOFAVSHYXIETLEOSEMKZSQREVKZZYNAIXWPDGZVACGNLVFPICRBVDJXBLBTHXCDBNUMZPUECTTFDLGSUIPHKYSQWKCCFDGXEBQWHMTEIDPZWNZTJETCVSTRSOYBSJMKLFOUANFIGUWNXQLTC");

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
    msg.setTimeStamp(0.852029397785);
    msg.setSource(55526U);
    msg.setSourceEntity(143U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(228U);
    msg.duration = 63865U;
    msg.custom.assign("BBIJSKTJJPZOCRBDZFWHUXPDJAPWAPWAORTNNMJXISFBXCOZOBOIHVSZRMZMRKNDTEQHJDNGDMGFUAAKXZKGIYHQTGYEBV");

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
    msg.setTimeStamp(0.618482231777);
    msg.setSource(13838U);
    msg.setSourceEntity(232U);
    msg.setDestination(59202U);
    msg.setDestinationEntity(164U);
    msg.duration = 10310U;
    msg.custom.assign("SFOKEIKVVNFPWSDOYYGYKCRWDRTMICAMHIIHAACUFSGIKOJKVYRQXWTNNFVKMWCZJXNJPMO");

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
    msg.setTimeStamp(0.889388197138);
    msg.setSource(31364U);
    msg.setSourceEntity(9U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(6U);
    msg.duration = 16142U;
    msg.custom.assign("TQWDXAAECNXBRMVEWIGLEKYRVZIXGYKNOEDHOQLWCHAFFCFZIFKIQGISJWATBPNYRGMJVSASZCDYNPGPHLSAXNZLIUHCYWOLSPAJLMJAUZPXETWMXIZBKXSUMBPTZBTDNELHVQJZWHCLWBOGKSCMBNQURQWKCCOPGVELKOYYXENBYODDKRTJPGRAZTOFUANMVTTRGDRKSFO");

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
    msg.setTimeStamp(0.263580052152);
    msg.setSource(46972U);
    msg.setSourceEntity(230U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(220U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.64603470993;
    msg.control.set(tmp_msg_0);
    msg.duration = 54123U;
    msg.custom.assign("YQLONWVHRFXDDNEOPGVXSTREKRPKOLNJWYFYMPLKORWJIFYZFNVWGXTEUWKREUISPTVOOGWPAIGAAULBUWGBIHJYSKOPIFHVUCJKYOCPNBPAXZLBXVRYWSJMDCIZBGRCGBKDMCTEECGGQKNVLTEHHQ");

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
    msg.setTimeStamp(0.224727743344);
    msg.setSource(64936U);
    msg.setSourceEntity(230U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(126U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.248322741207;
    msg.control.set(tmp_msg_0);
    msg.duration = 11608U;
    msg.custom.assign("EOVIOZQDXHZSYYARXJELTNODWMJPKRVBZYGUVRLENIPJEVCADIJNRKGHQIWIPUNCGOQTWXJLWLQPPJOANBAEQHEMTXZRHKZEEWDAFBGXOSDGGZPTWSOJKNKTLJWAIF");

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
    msg.setTimeStamp(0.47534275104);
    msg.setSource(35733U);
    msg.setSourceEntity(61U);
    msg.setDestination(17062U);
    msg.setDestinationEntity(86U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.483425930994;
    msg.control.set(tmp_msg_0);
    msg.duration = 46382U;
    msg.custom.assign("LKNPBDJUINEQMDGWPNFYANKRASQVXJICIMYLUNMVLCZLDRRPORBVXREAUFSPCACUSSZYOTIOGLQDSSOFWBGUBEHXWNZKXBMDWVJIRTKMTDAGCCEUOBUJAPHIJZCQFNLJHSWIUKWHAKFUAXTXCQEYPIOBEQYGBKYWWMDRJWRZPZSGYRMXGKIRLUTLTXGMYVZFOEHFMBGXDKJSSVJNQVVPVFKPYLNXZEHITHCTAQWGVHOEYFDHZTTMOFLNP");

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
    msg.setTimeStamp(0.831617701954);
    msg.setSource(26783U);
    msg.setSourceEntity(174U);
    msg.setDestination(59205U);
    msg.setDestinationEntity(134U);
    msg.timeout = 16160U;
    msg.lat = 0.909552611915;
    msg.lon = 0.720524319037;
    msg.z = 0.957677238506;
    msg.z_units = 211U;
    msg.speed = 0.374740707835;
    msg.speed_units = 60U;
    msg.bearing = 0.189247034715;
    msg.cross_angle = 0.897192596801;
    msg.width = 0.984966671999;
    msg.length = 0.803967634714;
    msg.hstep = 0.40839547995;
    msg.coff = 159U;
    msg.alternation = 139U;
    msg.flags = 81U;
    msg.custom.assign("CPIHNAMTCWVLQKGYUNEHHAPZFVIBVHPRRRAJKXJDFGTSIRZHJSPMVKNPXXGEMVRMACYWBAWPLKNRPGSLFFVGWSDLZLBODSFXMOYXDSRDOJMHBCCEWMQAEZXJFFBUVOFVTXTYIORZWGSYQETOCGHH");

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
    msg.setTimeStamp(0.758167726298);
    msg.setSource(64046U);
    msg.setSourceEntity(251U);
    msg.setDestination(37212U);
    msg.setDestinationEntity(144U);
    msg.timeout = 56814U;
    msg.lat = 0.71926010037;
    msg.lon = 0.361028322276;
    msg.z = 0.999636979782;
    msg.z_units = 135U;
    msg.speed = 0.840649824301;
    msg.speed_units = 233U;
    msg.bearing = 0.216424181159;
    msg.cross_angle = 0.470123041339;
    msg.width = 0.576998973734;
    msg.length = 0.411093504169;
    msg.hstep = 0.711341460584;
    msg.coff = 155U;
    msg.alternation = 42U;
    msg.flags = 178U;
    msg.custom.assign("XGPPBSAEDSQBMEYOXEUHVRROTFBSMEDWVVXLEOMLOVYLJIKJPVNXEIDBLFHMCJLAHQONHPVIPYFSDUKJGZDOCINSHXBBHEETFDXFGQSGJNGMANCYVPRRWIUZWVCXNDARYIZJUYNKYB");

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
    msg.setTimeStamp(0.461704390438);
    msg.setSource(37180U);
    msg.setSourceEntity(105U);
    msg.setDestination(11730U);
    msg.setDestinationEntity(252U);
    msg.timeout = 21298U;
    msg.lat = 0.762137677515;
    msg.lon = 0.309175174826;
    msg.z = 0.50484290339;
    msg.z_units = 4U;
    msg.speed = 0.232664427998;
    msg.speed_units = 42U;
    msg.bearing = 0.768032410461;
    msg.cross_angle = 0.578594561142;
    msg.width = 0.833125085885;
    msg.length = 0.149076155626;
    msg.hstep = 0.235087069232;
    msg.coff = 112U;
    msg.alternation = 24U;
    msg.flags = 235U;
    msg.custom.assign("AVQGTHIUTKQWXCPUCBEHWMAJNDVUKYNXVCBTYHDITITXHIAGTDSBTSREHJUBNDFKATMJGVRZLZVKMOQEDYNFYSLWRNKLARNOQSASFOPXWDGAMKWFTPJFPIQLHCPZBEPHYUOVYVZFFYGBK");

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
    msg.setTimeStamp(0.772193701699);
    msg.setSource(9124U);
    msg.setSourceEntity(122U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(82U);
    msg.timeout = 9756U;
    msg.lat = 0.804999961856;
    msg.lon = 0.354603610742;
    msg.z = 0.397371380245;
    msg.z_units = 72U;
    msg.speed = 0.0628753639593;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0570916579597;
    tmp_msg_0.y = 0.970839023145;
    tmp_msg_0.z = 0.64046519477;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PKFIUOTKYNZIWXENVIAJHCNUVEFXWHGZJUCTPBCTTGFEFSGBXRPNJAEJUDZCLBVDQTYOZSBNPHUCUCHWLRBOIVPGRSQCLK");

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
    msg.setTimeStamp(0.0718098532669);
    msg.setSource(3911U);
    msg.setSourceEntity(100U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(227U);
    msg.timeout = 15589U;
    msg.lat = 0.342631460883;
    msg.lon = 0.345616045366;
    msg.z = 0.913156684976;
    msg.z_units = 14U;
    msg.speed = 0.379381258732;
    msg.speed_units = 27U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.418077290149;
    tmp_msg_0.y = 0.142284235136;
    tmp_msg_0.z = 0.420664556275;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UDDWQSFBKVXHKGLNDCQNDYWMLSZGOLBJJMNCQPPJBJMXASVFHCZLEJVSRTQVWLVMNBHYHHDOYZOOIXIGDWGNUJUIEOCQEZIDIZTJWIHIDAVZPTOOYVRCEZHUPYA");

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
    msg.setTimeStamp(0.319765849729);
    msg.setSource(40641U);
    msg.setSourceEntity(241U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(221U);
    msg.timeout = 23783U;
    msg.lat = 0.39459953189;
    msg.lon = 0.948889241682;
    msg.z = 0.299070041035;
    msg.z_units = 108U;
    msg.speed = 0.296355190657;
    msg.speed_units = 181U;
    msg.custom.assign("TAXWPZEVUQYXOJXHSWJIPAPLDJBVMNAQXWF");

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
    msg.setTimeStamp(0.554918737419);
    msg.setSource(31057U);
    msg.setSourceEntity(112U);
    msg.setDestination(3415U);
    msg.setDestinationEntity(54U);
    msg.x = 0.0735825163698;
    msg.y = 0.136308171464;
    msg.z = 0.721998709103;

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
    msg.setTimeStamp(0.663553362307);
    msg.setSource(1525U);
    msg.setSourceEntity(117U);
    msg.setDestination(46725U);
    msg.setDestinationEntity(150U);
    msg.x = 0.24487398063;
    msg.y = 0.626800389522;
    msg.z = 0.260823293346;

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
    msg.setTimeStamp(0.659614145112);
    msg.setSource(9315U);
    msg.setSourceEntity(74U);
    msg.setDestination(22789U);
    msg.setDestinationEntity(147U);
    msg.x = 0.197424160081;
    msg.y = 0.955253875285;
    msg.z = 0.158967203274;

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
    msg.setTimeStamp(0.241593328202);
    msg.setSource(4256U);
    msg.setSourceEntity(149U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(36U);
    msg.timeout = 15026U;
    msg.lat = 0.661414645595;
    msg.lon = 0.989568462349;
    msg.z = 0.194428084824;
    msg.z_units = 76U;
    msg.amplitude = 0.98066186653;
    msg.pitch = 0.618949254194;
    msg.speed = 0.485859437307;
    msg.speed_units = 98U;
    msg.custom.assign("SGFEGQZRDNKEDACXCKWMSZSKQBVOCVYPBGQMOXHFSHTPDSMILHRKHGLCFLKJZZJSFAIYACJKIXFMTTKDBCZAQNIEXYAVOZJEBKNGORCPFXDYEOBUTAZVJCAQTWPUIQIGLUCJJHVGMBVWWPYRLBNWJNIWUTPYQRZXPQVLXPUCTRVOGRMIELTSSEMRNBNQLAWEMETYAMOGDZJUWSOH");

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
    msg.setTimeStamp(0.453024549357);
    msg.setSource(34481U);
    msg.setSourceEntity(33U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(104U);
    msg.timeout = 10704U;
    msg.lat = 0.599364288187;
    msg.lon = 0.654719523303;
    msg.z = 0.159580341512;
    msg.z_units = 57U;
    msg.amplitude = 0.826392840055;
    msg.pitch = 0.215797019346;
    msg.speed = 0.72317125799;
    msg.speed_units = 68U;
    msg.custom.assign("CNXOBAINEWFVPEFPOHZMYUVUQTZSWYSUXCATVJBCKPRXKPKAZNOBTNIASCTRLADQUIYHSCMZDPKTADNFJLGRUPYLEAYMWCKJDVVGSDDRQPOUPUVCWHJJIXMBMGVGWLBHEGSWWKBEDZOJOXANSVGOCNZCYDXSYFEAQHISTGWBOCAEFTRGFGBQINTHOQKVVULEDYBHFIXKWIXUQYPZZJMJMH");

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
    msg.setTimeStamp(0.300076116448);
    msg.setSource(24031U);
    msg.setSourceEntity(8U);
    msg.setDestination(48184U);
    msg.setDestinationEntity(195U);
    msg.timeout = 44372U;
    msg.lat = 0.475098004908;
    msg.lon = 0.700691351532;
    msg.z = 0.205551612102;
    msg.z_units = 31U;
    msg.amplitude = 0.905066763462;
    msg.pitch = 0.396920806359;
    msg.speed = 0.513195684993;
    msg.speed_units = 180U;
    msg.custom.assign("BUSTFXLHQPXAYVGCTMDBHBKATCWPJMFENMUQFRMLTHSQYWACVIHLDQVPJQMRBIILEYXLHSDDWFCERAC");

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
    msg.setTimeStamp(0.0854623933021);
    msg.setSource(30201U);
    msg.setSourceEntity(96U);
    msg.setDestination(39232U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.0390163300415);
    msg.setSource(13521U);
    msg.setSourceEntity(55U);
    msg.setDestination(18035U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.602738356138);
    msg.setSource(10974U);
    msg.setSourceEntity(59U);
    msg.setDestination(26957U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.924555417012);
    msg.setSource(14336U);
    msg.setSourceEntity(157U);
    msg.setDestination(52731U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.0559121786032;
    msg.lon = 0.554798118405;
    msg.z = 0.408037977006;
    msg.z_units = 252U;
    msg.radius = 0.940282323785;
    msg.duration = 44693U;
    msg.speed = 0.788877686618;
    msg.speed_units = 164U;
    msg.custom.assign("HGRVYTBLUSZJYJFSQDBNCCMVWNJUPFSWODGVCSPQGDNBFWEHCBVTVYKPHKBYGIUQJZHJOOARVSUSQKBGEYEFEPIIELUECLAKDPFCOAWWARZAK");

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
    msg.setTimeStamp(0.708899485562);
    msg.setSource(15562U);
    msg.setSourceEntity(6U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.648965894503;
    msg.lon = 0.305819858017;
    msg.z = 0.831631496882;
    msg.z_units = 156U;
    msg.radius = 0.372371749179;
    msg.duration = 28539U;
    msg.speed = 0.782088840274;
    msg.speed_units = 245U;
    msg.custom.assign("QVGEPNRTIFPQOYHNEYTWIJVDVVVALSCIXFIYBNWTHLLOZWNCMXRDAUFJGGANBBMKQKBQYDHUDPIFAJWW");

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
    msg.setTimeStamp(0.034049872998);
    msg.setSource(41148U);
    msg.setSourceEntity(195U);
    msg.setDestination(16376U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.0248827775698;
    msg.lon = 0.164437229738;
    msg.z = 0.852874214936;
    msg.z_units = 230U;
    msg.radius = 0.961463864632;
    msg.duration = 8960U;
    msg.speed = 0.606718122827;
    msg.speed_units = 34U;
    msg.custom.assign("WIIZWNICJQGGDGHWSCBSULQETXSTEVGOEDCVC");

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
    msg.setTimeStamp(0.059993140048);
    msg.setSource(18223U);
    msg.setSourceEntity(162U);
    msg.setDestination(5375U);
    msg.setDestinationEntity(17U);
    msg.timeout = 47148U;
    msg.flags = 157U;
    msg.lat = 0.227224247333;
    msg.lon = 0.448826719591;
    msg.start_z = 0.176470671134;
    msg.start_z_units = 68U;
    msg.end_z = 0.167964158384;
    msg.end_z_units = 21U;
    msg.radius = 0.659435177117;
    msg.speed = 0.270601857663;
    msg.speed_units = 69U;
    msg.custom.assign("MQRLROVCUTVUJDZNZJTRYDOMHAKJVCYJZGGPZBOWBXWLKLLYBOQMWGBXRENEBEGTQAZSRKNSJLIGWCAPKIKPYYWDPWAZZGANXNTC");

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
    msg.setTimeStamp(0.639009603165);
    msg.setSource(29435U);
    msg.setSourceEntity(208U);
    msg.setDestination(27785U);
    msg.setDestinationEntity(108U);
    msg.timeout = 25773U;
    msg.flags = 100U;
    msg.lat = 0.332062794492;
    msg.lon = 0.580351414816;
    msg.start_z = 0.452782169914;
    msg.start_z_units = 157U;
    msg.end_z = 0.502341294738;
    msg.end_z_units = 188U;
    msg.radius = 0.769657855088;
    msg.speed = 0.560514528563;
    msg.speed_units = 84U;
    msg.custom.assign("GYEVXLAWNLUSAHACUUJTGEDWDCZSZZRIPWHWVPPGQLEDHFHOPKQMSMFGTGEDQMDKVXAEEROYUGUCLCHHSDFZFZTFRYKNTPOAGHEQBYOZOAGLUNNTWIKBVQPVPWIHPVMCDXJZRRAGBMDSPOWJSVNBCTMWKFIOYTL");

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
    msg.setTimeStamp(0.869177414004);
    msg.setSource(54461U);
    msg.setSourceEntity(252U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(249U);
    msg.timeout = 51657U;
    msg.flags = 77U;
    msg.lat = 0.442987455697;
    msg.lon = 0.352268745614;
    msg.start_z = 0.436855810688;
    msg.start_z_units = 10U;
    msg.end_z = 0.277236215241;
    msg.end_z_units = 27U;
    msg.radius = 0.875106776621;
    msg.speed = 0.232665102817;
    msg.speed_units = 228U;
    msg.custom.assign("ZWBDZGBQLFIPQVAOAIZCESIVVJEQLMEFQUGWIJCHCHOWFIQNYRYEJNBGKVBSFTXAHUDRSZWCYKWKXVITEUXMEFSJDRALCDQMLRHVRXLSJKPJGCDLKOWUYFOXGKWZOLFJDHIBKPGJYCFLZQZMSPGZYGXYXZEBNVVMLOOETDCTQIMWQA");

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
    msg.setTimeStamp(0.0573091739019);
    msg.setSource(50469U);
    msg.setSourceEntity(109U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(172U);
    msg.timeout = 3392U;
    msg.lat = 0.157169192145;
    msg.lon = 0.0943493749247;
    msg.z = 0.252985416417;
    msg.z_units = 26U;
    msg.speed = 0.451669638126;
    msg.speed_units = 91U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.629378884314;
    tmp_msg_0.y = 0.319239468673;
    tmp_msg_0.z = 0.414167856259;
    tmp_msg_0.t = 0.672840252581;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EAPPWITYHMYXUXKSBZBOEGTGSYNNYWPUOLBFTPUTSSCGEOWLWYSRBFLTZJCTDKZNWZDHVVXETMWVCCBIWNBOVBBIFOZMCNQSMGUUMRXYXULMPTVEEEGOFCQARDZJHKQPCAONPMQALGEHSZUFKPGOFHZXFAGNJIQMIAADHDLHMTWNIQYBFHAQALVHGVDUDWXKJNSRXJ");

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
    msg.setTimeStamp(0.620498236342);
    msg.setSource(21842U);
    msg.setSourceEntity(25U);
    msg.setDestination(45305U);
    msg.setDestinationEntity(146U);
    msg.timeout = 38605U;
    msg.lat = 0.889563386558;
    msg.lon = 0.805087796855;
    msg.z = 0.573146616386;
    msg.z_units = 66U;
    msg.speed = 0.0415692128154;
    msg.speed_units = 235U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.301362817652;
    tmp_msg_0.y = 0.968911105283;
    tmp_msg_0.z = 0.524426061936;
    tmp_msg_0.t = 0.165983833603;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XEHFDLIQJXJNMUGEULVF");

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
    msg.setTimeStamp(0.286529005325);
    msg.setSource(1055U);
    msg.setSourceEntity(40U);
    msg.setDestination(42712U);
    msg.setDestinationEntity(43U);
    msg.timeout = 54933U;
    msg.lat = 0.85301838808;
    msg.lon = 0.0722422347201;
    msg.z = 0.137143113199;
    msg.z_units = 135U;
    msg.speed = 0.251667874611;
    msg.speed_units = 227U;
    msg.custom.assign("MIYRSSWHMQDJTBISRGWCGVHZHNZMYITSAFBQPPZGHUORAKAWNESEYODULMTVOYTWLYBNJBQKCMIZVCZBCQYVIEJDLZNBVXTHEFXQHLPFUARFSPBEFRYLQXWPEIXXHADBXGAOEGXMODTJLBEFTVTAAMWKZLKUWSKKNKMNGNV");

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
    msg.setTimeStamp(0.423365771232);
    msg.setSource(23692U);
    msg.setSourceEntity(183U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(85U);
    msg.x = 0.545628245886;
    msg.y = 0.579198916047;
    msg.z = 0.21106456902;
    msg.t = 0.175898417285;

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
    msg.setTimeStamp(0.598544925503);
    msg.setSource(52224U);
    msg.setSourceEntity(59U);
    msg.setDestination(39406U);
    msg.setDestinationEntity(94U);
    msg.x = 0.504439671913;
    msg.y = 0.576642291877;
    msg.z = 0.961583928094;
    msg.t = 0.852292849952;

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
    msg.setTimeStamp(0.905264644293);
    msg.setSource(45873U);
    msg.setSourceEntity(161U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(167U);
    msg.x = 0.105049008707;
    msg.y = 0.459825946251;
    msg.z = 0.402830288796;
    msg.t = 0.191604853424;

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
    msg.setTimeStamp(0.596833318933);
    msg.setSource(65487U);
    msg.setSourceEntity(196U);
    msg.setDestination(2432U);
    msg.setDestinationEntity(214U);
    msg.timeout = 41960U;
    msg.name.assign("ISMPUDCXJQIKESXJQJUODLAYHITFBSCBVVOJMWFOHLHQBWWDJQNXFSQEOWNSKGGVHLNVYUZYHIQZZCGFXTTWGKFVWECNMDHSUNGHDYODZYTXZPKRYCLUBRMMUFGAQCNSXABMVBPFAMDPRIADWGZMJNAWCYJPILVOEBRWREMQFQKQKTPAIUTYVICEY");
    msg.custom.assign("NEHWOVBETOLMJZKSCCRPFXFHZZOLGVWQWJQALACDXRBMASNUMZGIPDUUPOEFMSMTDLFVSZXMGMWSKBUSXUWGRHEYTJAKFXJPPFTFIWZNBTLIZEUCKQLRGQCKHIJEY");

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
    msg.setTimeStamp(0.851868211793);
    msg.setSource(1945U);
    msg.setSourceEntity(147U);
    msg.setDestination(41991U);
    msg.setDestinationEntity(224U);
    msg.timeout = 15349U;
    msg.name.assign("JENZDNAKIWDCJQFEFGJGQRDTMFLOHH");
    msg.custom.assign("HWMLIVOTKNPBJCMSWCQVHCFEEVPEVRLDDXGQWDRNOHUOYKRXBAUPVHNLLPXKGEPOTULUAULZIDJHCVBJBKIOSTDQKYZDUFBGFRZQRZMITLFOJTXVFGGCEMZNGTWAUSVBDLSQUFMSEPGIVRAXSMGJAAESOCVWGWXIYDZJWYOKBQWAJYLNFAOYCDEPSNRUJKNAKXSXEFHNTYEZRMHQYBTMCQIUSBXTKMMCYOPFZYTPL");

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
    msg.setTimeStamp(0.517824856933);
    msg.setSource(63909U);
    msg.setSourceEntity(206U);
    msg.setDestination(51828U);
    msg.setDestinationEntity(158U);
    msg.timeout = 44270U;
    msg.name.assign("GXRZYDCQRNZHUQQLDMNBLOKIHWRDSMVMQGRXFCHBIFUSPLFJGWHHYXAIDSYFUPBXFSEMGEBAEJIAOPVLIVPGUQNNKRPYLPYIFWRUTQTADZSZJ");
    msg.custom.assign("MJEWPGAFTPAWMXTWQUNNMCNBFAJEVYHGOZYUUOZBYBJGVCRPTWKZCQDDHHUHENGJPLVGOUUSOCQFRXQBKTDCDWYIVIAOSKEYMTPYABLLZVCXLJULULOQXRUKTVRFHLWKDKDVGGDPZAAKCNSRVAIZBWZNQSFPPVIMTFSFTJLIGYWXKBSESYFRONOZMHZIJUJLQERNXEXRQGFXZWSLESPIBHKCMAFIXTQSBKHTJGDAONCJIMYHCMIHYQBP");

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
    msg.setTimeStamp(0.873935179779);
    msg.setSource(62794U);
    msg.setSourceEntity(33U);
    msg.setDestination(40655U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.408855016589;
    msg.lon = 0.318836682663;
    msg.z = 0.892334019944;
    msg.z_units = 142U;
    msg.speed = 0.927160338746;
    msg.speed_units = 230U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8452U;
    tmp_msg_0.off_x = 0.503838110761;
    tmp_msg_0.off_y = 0.438793660203;
    tmp_msg_0.off_z = 0.997361110457;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.776152017133;
    msg.custom.assign("MVSTLBEYRWCNAEIGWJBQECEZAODMNPDBXTFFNIDPOZHWEAEFOLYXVUCNAVJCKTULAFRQMUGWGJAXTNGOFRSXIDQBZEXHSZPBIQRNMOPDUIPLVFZNQRRIADQCYQQJRWJFWNMEQYSZTKTXEBBMFWCTNHZGKCGWSVKJOUWDJFPPKOLYHDEFMYKRGLVDNWIOUVGZMURGHJLYHYGSVBJIKZCHDQAUYSCRTKATIHJXPYCOLKBXHX");

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
    msg.setTimeStamp(0.917507707468);
    msg.setSource(60353U);
    msg.setSourceEntity(167U);
    msg.setDestination(22013U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.510100336105;
    msg.lon = 0.150540410486;
    msg.z = 0.128199953818;
    msg.z_units = 231U;
    msg.speed = 0.545483132748;
    msg.speed_units = 230U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.709128569167;
    tmp_msg_0.y = 0.196353274966;
    tmp_msg_0.z = 0.512352481139;
    tmp_msg_0.t = 0.923013439579;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61097U;
    tmp_msg_1.off_x = 0.564599495612;
    tmp_msg_1.off_y = 0.0569256910455;
    tmp_msg_1.off_z = 0.758469082658;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.99259995668;
    msg.custom.assign("LRKUZCOYBJQOENQXNPITESWFNRJINVJOSUVMJBPCEPBHQCRHXCHPHOQRZINUJLNLFFEJEVAYGGUSUZRYEZGWBTWILEQQODUKVMXYMATPDOYNGIWXMYWHYZAKFSVCAPAUPDSID");

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
    msg.setTimeStamp(0.949198828771);
    msg.setSource(64643U);
    msg.setSourceEntity(151U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.601714678685;
    msg.lon = 0.696809383949;
    msg.z = 0.180535324011;
    msg.z_units = 72U;
    msg.speed = 0.307968691657;
    msg.speed_units = 16U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.00833883757141;
    tmp_msg_0.y = 0.409881174642;
    tmp_msg_0.z = 0.492085237536;
    tmp_msg_0.t = 0.852491904389;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.469003922043;
    msg.custom.assign("EMRGFRCQTUNMFQAKKNEETQLGRGVXJIWWZVFIJWNHEQIKBAPJRGEOS");

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
    msg.setTimeStamp(0.656297000272);
    msg.setSource(44593U);
    msg.setSourceEntity(137U);
    msg.setDestination(56409U);
    msg.setDestinationEntity(50U);
    msg.vid = 40876U;
    msg.off_x = 0.467296587284;
    msg.off_y = 0.871507882837;
    msg.off_z = 0.975875535615;

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
    msg.setTimeStamp(0.701674856535);
    msg.setSource(43968U);
    msg.setSourceEntity(79U);
    msg.setDestination(43785U);
    msg.setDestinationEntity(35U);
    msg.vid = 24246U;
    msg.off_x = 0.268099488347;
    msg.off_y = 0.0289364411949;
    msg.off_z = 0.509666728114;

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
    msg.setTimeStamp(0.608417165876);
    msg.setSource(10964U);
    msg.setSourceEntity(83U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(4U);
    msg.vid = 53510U;
    msg.off_x = 0.376889230525;
    msg.off_y = 0.999306594436;
    msg.off_z = 0.679150639479;

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
    msg.setTimeStamp(0.337254945184);
    msg.setSource(7424U);
    msg.setSourceEntity(195U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.258791058976);
    msg.setSource(2721U);
    msg.setSourceEntity(230U);
    msg.setDestination(49428U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.676000565189);
    msg.setSource(54337U);
    msg.setSourceEntity(140U);
    msg.setDestination(25326U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.485596839398);
    msg.setSource(56334U);
    msg.setSourceEntity(220U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(178U);
    msg.mid = 6854U;

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
    msg.setTimeStamp(0.705247962948);
    msg.setSource(22968U);
    msg.setSourceEntity(253U);
    msg.setDestination(6535U);
    msg.setDestinationEntity(146U);
    msg.mid = 26047U;

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
    msg.setTimeStamp(0.522560267582);
    msg.setSource(29026U);
    msg.setSourceEntity(225U);
    msg.setDestination(41630U);
    msg.setDestinationEntity(15U);
    msg.mid = 37123U;

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
    msg.setTimeStamp(0.772786211517);
    msg.setSource(9278U);
    msg.setSourceEntity(127U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(114U);
    msg.state = 244U;
    msg.eta = 65082U;
    msg.info.assign("BFYWJJMYJQKCZBGEOGFOXZVQUDSMJCKZYNSEEZJAFPFILGWDSQGUCDHHIFSGSYUOVUBCUXFOKLZKMFSIIHQTNARMRTGZWUGAYFAUIUBVMLOEOSIWBTRCTHYASAJWVJPIXXDZAJLQZGTDPCSFAPYMMSMEGBNJTXMNBWVFYDTHQ");

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
    msg.setTimeStamp(0.26113850153);
    msg.setSource(42756U);
    msg.setSourceEntity(182U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(135U);
    msg.state = 41U;
    msg.eta = 7368U;
    msg.info.assign("GYWIMMRIKWCNGYKLYUQLPTMUSKOKUMVOBYBGTWIHNJDMJIFKDYJDAECCSTLPZQSJRXRVSITHBKGXWCRQXLVIGEVRSXOTDLXJZHEFAQXNJFKNOBDUNPPQCFFOHXFHZVQNCAQUFNOQWVWUFLQWDLRSPTHEAAZCRDAKPWXTNQMENNDYFEGGYYKMMHOUHVWOCIVRAZSOVVTZJMJUMAESLEZDPIGBTDXGZBFUJYWEPAZXHEZOTBIB");

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
    msg.setTimeStamp(0.775186324896);
    msg.setSource(5584U);
    msg.setSourceEntity(33U);
    msg.setDestination(59915U);
    msg.setDestinationEntity(96U);
    msg.state = 0U;
    msg.eta = 3657U;
    msg.info.assign("QVVDFWVQADUAJHAKZVIAZKCZENLVMTKZEQITRSKCFMFVRBBYXCBOKYPWHATZNSXJVQXGWHWOLGWHGNSVUXQFKHMQDEOBPYGGNHKPGDJOLBUWGREAPLYNEFJSEQIHEDUYPRMWMIECCFJVBSBLPYXBIKHTCXRFAXZCMGYIJZAYDTNAHISDBNRRHSDPNMTPRORSDJQVXZSUIUKWUFPELRLTFXJNPNTOFOCCYIUGL");

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
    msg.setTimeStamp(0.385236468408);
    msg.setSource(19114U);
    msg.setSourceEntity(134U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(9U);
    msg.system = 37709U;
    msg.duration = 60855U;
    msg.speed = 0.46980545211;
    msg.speed_units = 60U;
    msg.x = 0.17852730725;
    msg.y = 0.413113507086;
    msg.z = 0.0786206206158;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.911122224923);
    msg.setSource(47883U);
    msg.setSourceEntity(35U);
    msg.setDestination(7446U);
    msg.setDestinationEntity(154U);
    msg.system = 50105U;
    msg.duration = 56605U;
    msg.speed = 0.845065502926;
    msg.speed_units = 231U;
    msg.x = 0.888517141063;
    msg.y = 0.52261037078;
    msg.z = 0.168528885439;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.0816444733652);
    msg.setSource(31262U);
    msg.setSourceEntity(50U);
    msg.setDestination(17191U);
    msg.setDestinationEntity(45U);
    msg.system = 64521U;
    msg.duration = 32528U;
    msg.speed = 0.0292052021313;
    msg.speed_units = 54U;
    msg.x = 0.210325595491;
    msg.y = 0.673120086278;
    msg.z = 0.244570125264;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.0394674444137);
    msg.setSource(56511U);
    msg.setSourceEntity(30U);
    msg.setDestination(6800U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.476979859214;
    msg.lon = 0.933071886308;
    msg.speed = 0.0421811545639;
    msg.speed_units = 233U;
    msg.duration = 23584U;
    msg.sys_a = 33270U;
    msg.sys_b = 14525U;
    msg.move_threshold = 0.359370002776;

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
    msg.setTimeStamp(0.183281798808);
    msg.setSource(45771U);
    msg.setSourceEntity(201U);
    msg.setDestination(2791U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.608546453394;
    msg.lon = 0.288195807785;
    msg.speed = 0.93131574677;
    msg.speed_units = 214U;
    msg.duration = 4076U;
    msg.sys_a = 59438U;
    msg.sys_b = 50849U;
    msg.move_threshold = 0.690880581978;

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
    msg.setTimeStamp(0.208742383315);
    msg.setSource(49287U);
    msg.setSourceEntity(111U);
    msg.setDestination(28770U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.803446229178;
    msg.lon = 0.761399370261;
    msg.speed = 0.180552187157;
    msg.speed_units = 132U;
    msg.duration = 31744U;
    msg.sys_a = 55183U;
    msg.sys_b = 9893U;
    msg.move_threshold = 0.187917555189;

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
    msg.setTimeStamp(0.464611192633);
    msg.setSource(32754U);
    msg.setSourceEntity(220U);
    msg.setDestination(28287U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.722665283548;
    msg.lon = 0.773992077688;
    msg.z = 0.0940738799869;
    msg.z_units = 47U;
    msg.speed = 0.99784744897;
    msg.speed_units = 60U;
    msg.custom.assign("YKVZTSPJDCAGNFJYBVYEAVRDOFNHEESGWAWBWHAPVFUPCTIPDFCNOTHMRYQXSJQHUPSJMVE");

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
    msg.setTimeStamp(0.462574003519);
    msg.setSource(63764U);
    msg.setSourceEntity(139U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.81861479104;
    msg.lon = 0.43949722861;
    msg.z = 0.202979476406;
    msg.z_units = 203U;
    msg.speed = 0.873915438133;
    msg.speed_units = 130U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.857660799964;
    tmp_msg_0.lon = 0.696595569875;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XTWYNJVJFVEUXODEPHJYUTIILWEESSKSBXGZAVAGFCTTKOFEUPLVHOUTEKHJRRJHQRUKHCHRCNPBPDFMZREGCXJMYIYAVUFZULBIMADXNEGAIBNQORDCWKTXPFZZFAEBZVOJLYKIZKCODATNAWYYIPMOSFRLOSWGPAGFLDIVJZYJGQBUDWUOQSWMNAMXXVTBHMCFQSRINLPGPPSDXYVOTKKDMLNWENQYQGCMHVBHDBWQLKZCNMQZTGS");

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
    msg.setTimeStamp(0.945189446243);
    msg.setSource(54606U);
    msg.setSourceEntity(214U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.0780452468093;
    msg.lon = 0.920856256031;
    msg.z = 0.338884377659;
    msg.z_units = 14U;
    msg.speed = 0.472175799036;
    msg.speed_units = 148U;
    msg.custom.assign("PCZTJIFCMBLHNIRSVJMUNWXQRJXIQEALDZFKWHFLZWODCYYCBUUOEHCQIHGBQXKFEEGOJFRLEWNQTBHRZFYTHPHTVVUSXDLPJAGSGWNDFDYEDTJRMGKJXY");

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
    msg.setTimeStamp(0.641182882747);
    msg.setSource(40445U);
    msg.setSourceEntity(179U);
    msg.setDestination(6815U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.504779392045;
    msg.lon = 0.694119141887;

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
    msg.setTimeStamp(0.681378627755);
    msg.setSource(58633U);
    msg.setSourceEntity(216U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.870261273497;
    msg.lon = 0.126427452379;

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
    msg.setTimeStamp(0.493945113722);
    msg.setSource(31098U);
    msg.setSourceEntity(214U);
    msg.setDestination(48954U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.145442867287;
    msg.lon = 0.359491751364;

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
    msg.setTimeStamp(0.400568120865);
    msg.setSource(48406U);
    msg.setSourceEntity(114U);
    msg.setDestination(59650U);
    msg.setDestinationEntity(216U);
    msg.timeout = 48145U;
    msg.lat = 0.733223671749;
    msg.lon = 0.389036925378;
    msg.z = 0.899574183875;
    msg.z_units = 193U;
    msg.pitch = 0.838858575616;
    msg.amplitude = 0.928921347897;
    msg.duration = 42009U;
    msg.speed = 0.337402787652;
    msg.speed_units = 90U;
    msg.radius = 0.0194604417262;
    msg.direction = 31U;
    msg.custom.assign("AWRFAPXDIPBZDEMXVTHLYZEWMGCBFWLRRLFEPRHSOHKWXHILXSAFGOIIJHUIUYQXBVUHYSGLOBEN");

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
    msg.setTimeStamp(0.237599720656);
    msg.setSource(3501U);
    msg.setSourceEntity(251U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(210U);
    msg.timeout = 38204U;
    msg.lat = 0.253985576615;
    msg.lon = 0.187431449008;
    msg.z = 0.982938610249;
    msg.z_units = 83U;
    msg.pitch = 0.439404566564;
    msg.amplitude = 0.475241854241;
    msg.duration = 5140U;
    msg.speed = 0.0477489614232;
    msg.speed_units = 207U;
    msg.radius = 0.916162941084;
    msg.direction = 128U;
    msg.custom.assign("ADZXKJKHYFZCCANDRTUMFCUVALFJLBMBRZTCGIXJMFEITRLERDELHMVDNOKRUHKGGXPMHSUSJUYLXHITJVSWAPUNOOLOKVUFGXOUNONCWD");

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
    msg.setTimeStamp(0.222208764545);
    msg.setSource(37726U);
    msg.setSourceEntity(111U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(188U);
    msg.timeout = 7331U;
    msg.lat = 0.0316894407253;
    msg.lon = 0.968270529039;
    msg.z = 0.368227965238;
    msg.z_units = 6U;
    msg.pitch = 0.55714118245;
    msg.amplitude = 0.591681918725;
    msg.duration = 55927U;
    msg.speed = 0.379671248784;
    msg.speed_units = 102U;
    msg.radius = 0.531252169309;
    msg.direction = 244U;
    msg.custom.assign("HACGVZLKTMHRZYHBYDRZWOMJSNKJQHSACUCCDFLQULGUKORQZKAFW");

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
    msg.setTimeStamp(0.70701184932);
    msg.setSource(27794U);
    msg.setSourceEntity(83U);
    msg.setDestination(30374U);
    msg.setDestinationEntity(95U);
    msg.formation_name.assign("UWRLIPJMKGOOPYDOHPVZCYGYSVNCCETRAGKUJUGZHUHDEZFUOLRYOINUKIELWXQJAJLKEHLTQDIJDROWSKCTSUKFPKALVKXNFBVBYWSQUTJPQTFDYSCIPMGIMZDAQXVBGPJDMLUFICJXJHNVGSIEGNBGBSQRZTHZQYBBVMLEYXEPAH");
    msg.reference_frame = 27U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12470U;
    tmp_msg_0.off_x = 0.397152605486;
    tmp_msg_0.off_y = 0.670512043273;
    tmp_msg_0.off_z = 0.121689250679;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DNYIISMHUWEKVSJQBNUQJLXQCZSIRZJJDYLLYDONHJUTOWADQOPRBCKMKLUCEPIFYSSPVPTAHGQTTNYMRKEKPDTZMMKNLGQBZXNNVBPQRYFVGOILDAWXIA");

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
    msg.setTimeStamp(0.78380311016);
    msg.setSource(13081U);
    msg.setSourceEntity(103U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(115U);
    msg.formation_name.assign("GWBBOTFVJEYCGCESHRANLRKXXIEVIOVYGMFCXBTFIHXIUYCHZEUEHVZZCSPJANKOINDWCKJTTRZMQFBYSPRYLDRMYPNRFNOGGRVSYQYYDEOSXKPJLACKQUEXNBQLNUHKTSVR");
    msg.reference_frame = 9U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41519U;
    tmp_msg_0.off_x = 0.820012963127;
    tmp_msg_0.off_y = 0.791827072598;
    tmp_msg_0.off_z = 0.468156612739;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EBCSAGEFHVLKRVTBQMCBFYASCCZPRIZGHLNCPE");

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
    msg.setTimeStamp(0.646255203185);
    msg.setSource(26606U);
    msg.setSourceEntity(126U);
    msg.setDestination(47508U);
    msg.setDestinationEntity(251U);
    msg.formation_name.assign("ABFDYJCATYDUMHGUFQOIQIXNITVNKGSBKGQWHBMQDTFUZEXENYPMGSJQAQIGFTUNQVOYEZARWKNORBVMEJQHYEBCUARAUVFTLJPTXRYHZEFFCIDPLTXKJEGJMSTTNCGEVFJBQRLSSJPDXKOHTBVVPDCIMBLCALSKWXWRHCZFAPOWWRVJHVWNZRXSNOIIXOYYIXLR");
    msg.reference_frame = 187U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31189U;
    tmp_msg_0.off_x = 0.810308060893;
    tmp_msg_0.off_y = 0.935024531903;
    tmp_msg_0.off_z = 0.0641245104566;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZNVGMJRFWYTEESABGKPIGWYMLRRLXNIQZLOFZFXTQOILLCAPHFNJAEPRECOBGIZSOSURJIBCQLJWGUMZYQDMRIDDBGHKHNARYJWTIFQCZGAXOWOZPOOKUIQZKYMCMXTHVVBFCRWJWDMDENJNNIWDSKHNSEWXYAVHQABVSVEECDFBJYLYLDZJIBUOVKLPSXPA");

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
    msg.setTimeStamp(0.424560994672);
    msg.setSource(35959U);
    msg.setSourceEntity(159U);
    msg.setDestination(13583U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("OUIPWBOMSELIFPIWCLGKVXLUHNMDRIEFWSCODFDIYLLDAZYBARHEGRLQT");
    msg.formation_name.assign("KMZGSWLAESKBRWUNGMJYUXJUXSVIOLEGMCTRFELHBEZTGYDJRYEABONUWNATOLECKBPHYEQTQUFSSFGZKPNEYPCXPJCZFAVIJORLJDAVAJUIPOFDBAKQYHSMHJGGXLDVXUIFPUJYBIHHWDCOQXIYHFAVPKFTWBP");
    msg.plan_id.assign("QWZEVUAPEXPTUMQFPVEBYOOVDEBTSIGDNJISGIAHEIBCMANXNYKZNVNMYHRJFCMXWBXBLZUMVUGENHGHUSGVWXJETMKYFRYIRKTRMKLDILXZMCSHVGDCSPDDPYLOLJCTJFBLAOVCXZYCTJCIOWPTKQAWKYPFOPIDZTTTBBALBVQHNLJQ");
    msg.description.assign("YNWTBJEIMDKEGUOIDNEQTFCHTAUGBYQHPWPTZAWMNFZWYAZHCVTRJXFYIIUGRFOZIBICRMEXRVDSNQNVLJKYLJRWHWXGJMMJBUWODAXOQUPBLICFVZVBOXXZOSQTPSEFRYBKJISPLDHBLCDUQCDQGCNDMPFSAXOXUXTDCJYHYUFIFLHRKQGRVNWOHKZVTCJNGZAMQESCVOAAEKVSHUKKOKPYA");
    msg.leader_speed = 0.0261425551;
    msg.leader_bank_lim = 0.0715339361304;
    msg.pos_sim_err_lim = 0.060160497543;
    msg.pos_sim_err_wrn = 0.73039346245;
    msg.pos_sim_err_timeout = 16737U;
    msg.converg_max = 0.143412944307;
    msg.converg_timeout = 47123U;
    msg.comms_timeout = 11919U;
    msg.turb_lim = 0.218271901307;
    msg.custom.assign("AAXSUVSCOFDMRJXDLEYHMHKKJMHSACIVGUQHEOLGWQZMIVKVTQTNUPLUIRWLFDGVIFXJBZMBRYADHAWWXGAWKLWPACPEXBOJXZKJOXUCLYPZQRHVZTGFOTXCRGXDIKKABTVQGI");

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
    msg.setTimeStamp(0.481517340471);
    msg.setSource(1604U);
    msg.setSourceEntity(35U);
    msg.setDestination(5577U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("CYWHYBFMRPALGJUCWWGHBNMAOOKUDTWYSKGGDRBNOYPBKNFGFYWMAWOPJSPCRSZQTSUOEXZSBTBCRUDTRNEVTIWVJGVULKJYWIXJLHNKQMZVFXNYJVPUCHCBPTPEANJYDNFADYQXBCIAKNK");
    msg.formation_name.assign("UKLFQCVVKLIMSCTRNVPMSNEQUEKOOHNARFTPUWDNJEOFYFSZBDADUREJQJXXYWRQXRPQPKHNOZPZTRZEXBGPWIECUMHREKWRLSJVHXNYMBGVSULTYFALISKWQIDHJAZODOQMRVBHDTILPYVXFX");
    msg.plan_id.assign("GSMWYCBULGINBKEFOAJDFXXEJCOAYRZPALPJFNMSBLHSGUCSEAOGPCKXWLQKWBCULQNIVYQTWOFBFWCHGDDHWDGKEPXMTXCUZXPYZDIFHEFKNRJLIRXNMNXPSFDVLSYMPVYOGXREURAGQTJPMEJAYLUKHNAUWOYWMCZSOXZTTCRMETSDIPK");
    msg.description.assign("MISMNLHTNSGLPPZLQWJCBXRNEEBOIAFAUKCILVZCBPWFIHGNOFLHQQNLOAVRCIJTVOQHVZTQUSFMDIGNWRLINXXSJKXALDYRDWAAOYVAHFZHXZEMOICMNEBPKSCVQCPZDLGJLMXBGRJXAHSUFPKQWPDXYBKRZKUOKYNT");
    msg.leader_speed = 0.805916237595;
    msg.leader_bank_lim = 0.402884271963;
    msg.pos_sim_err_lim = 0.42182124659;
    msg.pos_sim_err_wrn = 0.94687053099;
    msg.pos_sim_err_timeout = 55734U;
    msg.converg_max = 0.922801274756;
    msg.converg_timeout = 18223U;
    msg.comms_timeout = 65530U;
    msg.turb_lim = 0.816748089664;
    msg.custom.assign("RSZTMVHYFTBZOHJIWRDWVMMQHXFXQTRIVZAHMXIMXQCLCHDRTMQECNGNMBCXNKPCEDRZZTHQCPAIKONFZVFPNTNUWYDFLSOXBJAOWBHJUEQOYANXOKNAGLGIECVPTTVPSFNIDYHEVRJCZMGVZAIWSDUGDVJLSQETSOYYULPKBESAKUPUYYKOJLQMQHXGA");

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
    msg.setTimeStamp(0.318786314);
    msg.setSource(59091U);
    msg.setSourceEntity(138U);
    msg.setDestination(22192U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("ZPOPZOENUHVRPBIDPDSXGRNUHDBSNYVNJVKWYXZTKXJCRFKUEMCKDWASHLZFRHHERFCAFEKONQTGLZIMWGPCPWRDLMJJUKDRPDCFSXQLXQMMYCBLWDYLOBKFQQNRTJITBYALOTSXEXTRAAWU");
    msg.formation_name.assign("LSBYELVBHKZDNRMMZUOQKDFNSIUGYCSNYSWKANWJWEGKSKQGBUMXWFWTUMUCCAXLIPPCEZXQUBNIPQIVGXCLLOCQZVGHMJJETUTICRYJYYUQAIXBIOPDEPJDGSJLLWXEVOMDQDHTLKXFARNAY");
    msg.plan_id.assign("SXETYTBIEVBFQOYBK");
    msg.description.assign("YXFBJZGRPRQANOXFUCEAEOKDUGOBHBTKCVAWHTCZFNNISFUDMLDFRDVYXDVTAXZCBRTWHSSEKBWWDQMTCSYPPFWOPOQNUBYKRUHVEOOTLTJYMCNZQAGZJERKHWMTNGCKDMAHAVLYFHMSAOJRJPUIRIFYMZMPQVFLKUMLDJMPXNVVDWYESBSRAXEIQHNPCILKIFKEILBGJIEXWNLNQUYPVTZSUOXSCZAHJOCUGQIDBW");
    msg.leader_speed = 0.16052354752;
    msg.leader_bank_lim = 0.392844390934;
    msg.pos_sim_err_lim = 0.382213978616;
    msg.pos_sim_err_wrn = 0.0259219993538;
    msg.pos_sim_err_timeout = 35019U;
    msg.converg_max = 0.0347664983976;
    msg.converg_timeout = 62068U;
    msg.comms_timeout = 40419U;
    msg.turb_lim = 0.0643844697472;
    msg.custom.assign("VXQKHZAUZFJMGHZXGKCABKFTWE");

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
    msg.setTimeStamp(0.851411590919);
    msg.setSource(33002U);
    msg.setSourceEntity(215U);
    msg.setDestination(52041U);
    msg.setDestinationEntity(49U);
    msg.control_src = 8504U;
    msg.control_ent = 127U;
    msg.timeout = 0.253443958875;
    msg.loiter_radius = 0.668113468259;
    msg.altitude_interval = 0.111035067467;

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
    msg.setTimeStamp(0.0618682077513);
    msg.setSource(63950U);
    msg.setSourceEntity(200U);
    msg.setDestination(60379U);
    msg.setDestinationEntity(153U);
    msg.control_src = 20436U;
    msg.control_ent = 201U;
    msg.timeout = 0.306429155097;
    msg.loiter_radius = 0.790053531399;
    msg.altitude_interval = 0.840596817307;

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
    msg.setTimeStamp(0.0617207347543);
    msg.setSource(27527U);
    msg.setSourceEntity(182U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(157U);
    msg.control_src = 16722U;
    msg.control_ent = 89U;
    msg.timeout = 0.226880190795;
    msg.loiter_radius = 0.647760646975;
    msg.altitude_interval = 0.606766376372;

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
    msg.setTimeStamp(0.790747646091);
    msg.setSource(37781U);
    msg.setSourceEntity(224U);
    msg.setDestination(52390U);
    msg.setDestinationEntity(34U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.870392562129;
    tmp_msg_0.speed_units = 171U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.483233087051;
    tmp_msg_1.z_units = 152U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.78904828867;
    msg.lon = 0.358522181782;
    msg.radius = 0.71452342824;

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
    msg.setTimeStamp(0.890970429038);
    msg.setSource(61718U);
    msg.setSourceEntity(229U);
    msg.setDestination(45279U);
    msg.setDestinationEntity(146U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.516088684938;
    tmp_msg_0.speed_units = 7U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.92617244724;
    tmp_msg_1.z_units = 63U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.761031838419;
    msg.lon = 0.402274544878;
    msg.radius = 0.867030114367;

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
    msg.setTimeStamp(0.501196807507);
    msg.setSource(52338U);
    msg.setSourceEntity(1U);
    msg.setDestination(41433U);
    msg.setDestinationEntity(149U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.303129664517;
    tmp_msg_0.speed_units = 83U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0340834705932;
    tmp_msg_1.z_units = 18U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.432680664843;
    msg.lon = 0.423696086413;
    msg.radius = 0.0142372135001;

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
    msg.setTimeStamp(0.0258331106719);
    msg.setSource(59461U);
    msg.setSourceEntity(6U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(0U);
    msg.control_src = 28419U;
    msg.control_ent = 218U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 244U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.773845211667;
    tmp_tmp_msg_0_0.speed_units = 250U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.996189159439;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.938194697714;
    tmp_msg_0.lon = 0.562438739951;
    tmp_msg_0.radius = 0.560856999879;
    msg.reference.set(tmp_msg_0);
    msg.state = 208U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.522782501743);
    msg.setSource(64521U);
    msg.setSourceEntity(40U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(211U);
    msg.control_src = 34062U;
    msg.control_ent = 174U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.239280432771;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.677515284542;
    tmp_tmp_msg_0_1.z_units = 133U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0911557121805;
    tmp_msg_0.lon = 0.877225471327;
    tmp_msg_0.radius = 0.306801755792;
    msg.reference.set(tmp_msg_0);
    msg.state = 209U;
    msg.proximity = 147U;

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
    msg.setTimeStamp(0.174111608938);
    msg.setSource(14798U);
    msg.setSourceEntity(4U);
    msg.setDestination(35050U);
    msg.setDestinationEntity(202U);
    msg.control_src = 55420U;
    msg.control_ent = 82U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 177U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.995630429156;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.140612736093;
    tmp_tmp_msg_0_1.z_units = 5U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.695920538437;
    tmp_msg_0.lon = 0.455288421124;
    tmp_msg_0.radius = 0.956156711759;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 221U;

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
    msg.setTimeStamp(0.741498698047);
    msg.setSource(2314U);
    msg.setSourceEntity(69U);
    msg.setDestination(762U);
    msg.setDestinationEntity(239U);
    msg.ax_cmd = 0.110753973902;
    msg.ay_cmd = 0.227104007394;
    msg.az_cmd = 0.877987759337;
    msg.ax_des = 0.263647074513;
    msg.ay_des = 0.36174537348;
    msg.az_des = 0.451709353735;
    msg.virt_err_x = 0.261889881156;
    msg.virt_err_y = 0.0807361788509;
    msg.virt_err_z = 0.436869080956;
    msg.surf_fdbk_x = 0.805170883048;
    msg.surf_fdbk_y = 0.898131873267;
    msg.surf_fdbk_z = 0.00197538137768;
    msg.surf_unkn_x = 0.169705443266;
    msg.surf_unkn_y = 0.096625046325;
    msg.surf_unkn_z = 0.14610075477;
    msg.ss_x = 0.0865182822356;
    msg.ss_y = 0.268180295571;
    msg.ss_z = 0.984854408687;

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
    msg.setTimeStamp(0.826057872582);
    msg.setSource(31290U);
    msg.setSourceEntity(114U);
    msg.setDestination(11760U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.660545275752;
    msg.ay_cmd = 0.0610336889884;
    msg.az_cmd = 0.0407605165611;
    msg.ax_des = 0.317197245424;
    msg.ay_des = 0.860200030279;
    msg.az_des = 0.793131910184;
    msg.virt_err_x = 0.220832663083;
    msg.virt_err_y = 0.657214295549;
    msg.virt_err_z = 0.429979906916;
    msg.surf_fdbk_x = 0.631132452377;
    msg.surf_fdbk_y = 0.188902135467;
    msg.surf_fdbk_z = 0.432303750504;
    msg.surf_unkn_x = 0.185931071141;
    msg.surf_unkn_y = 0.0792131203915;
    msg.surf_unkn_z = 0.554563967906;
    msg.ss_x = 0.22493691385;
    msg.ss_y = 0.268841447359;
    msg.ss_z = 0.131176404539;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ONBGNSQDTZMTMHRMGFDEYXXPEYOAJKBTZGROWDLLABNRWRKATHIUELXDRPFPUICVMAPOPASVRVCBAINOADWPZYSFWSUCLAWPVKJHQYKUTFCKINZIGURTHNPDFIZYWCZFMQFBBOJMVJXIXVTJLDGGQOFFESCCIHEYYQMHDGMZQGXQWLEJMREKNUKKVS");
    tmp_msg_0.dist = 0.355144511343;
    tmp_msg_0.err = 0.493579878806;
    tmp_msg_0.ctrl_imp = 0.462877582066;
    tmp_msg_0.rel_dir_x = 0.643817961227;
    tmp_msg_0.rel_dir_y = 0.667843295787;
    tmp_msg_0.rel_dir_z = 0.605898567456;
    tmp_msg_0.err_x = 0.721932441281;
    tmp_msg_0.err_y = 0.653636302569;
    tmp_msg_0.err_z = 0.205206007938;
    tmp_msg_0.rf_err_x = 0.877399102872;
    tmp_msg_0.rf_err_y = 0.0734013499053;
    tmp_msg_0.rf_err_z = 0.713720015165;
    tmp_msg_0.rf_err_vx = 0.581063488793;
    tmp_msg_0.rf_err_vy = 0.930311200926;
    tmp_msg_0.rf_err_vz = 0.0969778070756;
    tmp_msg_0.ss_x = 0.145726508544;
    tmp_msg_0.ss_y = 0.407599823308;
    tmp_msg_0.ss_z = 0.181220709755;
    tmp_msg_0.virt_err_x = 0.199460177932;
    tmp_msg_0.virt_err_y = 0.103548663231;
    tmp_msg_0.virt_err_z = 0.135453239278;
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
    msg.setTimeStamp(0.985061725826);
    msg.setSource(6545U);
    msg.setSourceEntity(221U);
    msg.setDestination(45133U);
    msg.setDestinationEntity(235U);
    msg.ax_cmd = 0.29046955308;
    msg.ay_cmd = 0.865225311766;
    msg.az_cmd = 0.0402745725266;
    msg.ax_des = 0.67887726046;
    msg.ay_des = 0.693467540356;
    msg.az_des = 0.0408579476122;
    msg.virt_err_x = 0.266918758192;
    msg.virt_err_y = 0.189901111052;
    msg.virt_err_z = 0.584359336364;
    msg.surf_fdbk_x = 0.474653306866;
    msg.surf_fdbk_y = 0.816144433989;
    msg.surf_fdbk_z = 0.463014471458;
    msg.surf_unkn_x = 0.774861863851;
    msg.surf_unkn_y = 0.756349842251;
    msg.surf_unkn_z = 0.602357255971;
    msg.ss_x = 0.402823729873;
    msg.ss_y = 0.271324366838;
    msg.ss_z = 0.85571258989;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ADXKUXPVXYOLZNUVPSHBWPRYIRLBIKCXSTKRIZEIYSFLCPAFHZOJDBQQAVDFFMMGUKHFEBDPXLQOGKXVGFGECKTNEYWWNCNNFGCPREJYYBUTWVPEODVMGRKHNBMJTQSMAIHWICVSRXBXJZYZTSHJDHESOAGIWRPBPZTLLCOODEVTWTNQDOJJMVACZKOG");
    tmp_msg_0.dist = 0.44773827909;
    tmp_msg_0.err = 0.41000596233;
    tmp_msg_0.ctrl_imp = 0.761954007384;
    tmp_msg_0.rel_dir_x = 0.107772866518;
    tmp_msg_0.rel_dir_y = 0.244238966199;
    tmp_msg_0.rel_dir_z = 0.13638205045;
    tmp_msg_0.err_x = 0.167693278267;
    tmp_msg_0.err_y = 0.21809099325;
    tmp_msg_0.err_z = 0.867277551102;
    tmp_msg_0.rf_err_x = 0.236673886717;
    tmp_msg_0.rf_err_y = 0.588362587705;
    tmp_msg_0.rf_err_z = 0.885646656255;
    tmp_msg_0.rf_err_vx = 0.706677996705;
    tmp_msg_0.rf_err_vy = 0.199561298572;
    tmp_msg_0.rf_err_vz = 0.779723598201;
    tmp_msg_0.ss_x = 0.179826564117;
    tmp_msg_0.ss_y = 0.10436066539;
    tmp_msg_0.ss_z = 0.476730426843;
    tmp_msg_0.virt_err_x = 0.689054920448;
    tmp_msg_0.virt_err_y = 0.96640052866;
    tmp_msg_0.virt_err_z = 0.797455715271;
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
    msg.setTimeStamp(0.349585808264);
    msg.setSource(58322U);
    msg.setSourceEntity(155U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(205U);
    msg.s_id.assign("AOMCSCJLURRJCMJWDCYYTAVBBY");
    msg.dist = 0.492912963107;
    msg.err = 0.0771135060001;
    msg.ctrl_imp = 0.897893727812;
    msg.rel_dir_x = 0.983924265836;
    msg.rel_dir_y = 0.776126137237;
    msg.rel_dir_z = 0.023197529435;
    msg.err_x = 0.478558972802;
    msg.err_y = 0.401792856326;
    msg.err_z = 0.336682805379;
    msg.rf_err_x = 0.9620628588;
    msg.rf_err_y = 0.465348379072;
    msg.rf_err_z = 0.0501342298622;
    msg.rf_err_vx = 0.646893979079;
    msg.rf_err_vy = 0.9245467872;
    msg.rf_err_vz = 0.808284727238;
    msg.ss_x = 0.970466184994;
    msg.ss_y = 0.309389263689;
    msg.ss_z = 0.0812112473483;
    msg.virt_err_x = 0.386615213173;
    msg.virt_err_y = 0.496783828685;
    msg.virt_err_z = 0.0621673437339;

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
    msg.setTimeStamp(0.85224322442);
    msg.setSource(35544U);
    msg.setSourceEntity(155U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(36U);
    msg.s_id.assign("PFSFPQXHQLYIHAGHTNXMSGICWBNZGNYVNRJBPQLLAXNLMCIJOKOUVGWUCZTHJXLKKMYJVTKRPUAIBZZHRCYALPMUMPFLZJUMJFHQWPVFS");
    msg.dist = 0.967112053362;
    msg.err = 0.0693905838593;
    msg.ctrl_imp = 0.41026476478;
    msg.rel_dir_x = 0.927298536066;
    msg.rel_dir_y = 0.641742233953;
    msg.rel_dir_z = 0.539637854517;
    msg.err_x = 0.881701450932;
    msg.err_y = 0.0949923076896;
    msg.err_z = 0.535908351143;
    msg.rf_err_x = 0.949387373455;
    msg.rf_err_y = 0.602773691127;
    msg.rf_err_z = 0.260240038259;
    msg.rf_err_vx = 0.221949504651;
    msg.rf_err_vy = 0.700868561224;
    msg.rf_err_vz = 0.234676416904;
    msg.ss_x = 0.122796700192;
    msg.ss_y = 0.452635882718;
    msg.ss_z = 0.0739786149654;
    msg.virt_err_x = 0.795620905069;
    msg.virt_err_y = 0.0183002223976;
    msg.virt_err_z = 0.66310204788;

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
    msg.setTimeStamp(0.902406159017);
    msg.setSource(48536U);
    msg.setSourceEntity(252U);
    msg.setDestination(64817U);
    msg.setDestinationEntity(110U);
    msg.s_id.assign("DNFNZGXYTAXOKKHUIKXPOQBXAVBDXSJGKEAVLUDPRHFQHHMUKOBAPLBQNVIYUMSDQQHGJAWZOZWOSPJLIXVFJNVFBHSRRMPXBMOWTTGDOGEVHCSTCJLGBHPMITLGBNFESYYWILBUWNKEXZZXAGLYQCKSIBCITJOVTCHLNYRZFUAUCRITYNEPFKJCJITODCRM");
    msg.dist = 0.732360218125;
    msg.err = 0.951436542141;
    msg.ctrl_imp = 0.620696700699;
    msg.rel_dir_x = 0.666695456529;
    msg.rel_dir_y = 0.297369356146;
    msg.rel_dir_z = 0.412371289541;
    msg.err_x = 0.830250317822;
    msg.err_y = 0.596020880983;
    msg.err_z = 0.894088454353;
    msg.rf_err_x = 0.611445201603;
    msg.rf_err_y = 0.469876467807;
    msg.rf_err_z = 0.760065395886;
    msg.rf_err_vx = 0.46788153863;
    msg.rf_err_vy = 0.86121845294;
    msg.rf_err_vz = 0.3054255073;
    msg.ss_x = 0.854915456211;
    msg.ss_y = 0.68822706636;
    msg.ss_z = 0.168655070636;
    msg.virt_err_x = 0.229075136542;
    msg.virt_err_y = 0.84007421512;
    msg.virt_err_z = 0.17172416756;

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
    msg.setTimeStamp(0.867397635589);
    msg.setSource(19730U);
    msg.setSourceEntity(236U);
    msg.setDestination(25170U);
    msg.setDestinationEntity(59U);
    msg.timeout = 36173U;
    msg.rpm = 0.990170484282;
    msg.direction = 62U;
    msg.custom.assign("CYWSIGQZERLDKCFUCNYZCZLMEABRAYBYTBNURJHRWBOLMRLOAVDFDOPXTGRWVTMBQERSMYPZTSTPNSSXJBWOHXHYQKEMBMDLTQWVXXBWFMDAZCPGAGAKUXCVKKFIPFCV");

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
    msg.setTimeStamp(0.852846928869);
    msg.setSource(21067U);
    msg.setSourceEntity(108U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(181U);
    msg.timeout = 667U;
    msg.rpm = 0.430815902379;
    msg.direction = 95U;
    msg.custom.assign("FLMTDRXUXPOQZOIBAHOBRXPZWAMMLZMBBFZOCYVPYDMCDTMVXPJSVZWEVIDOAMSCHJJTGI");

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
    msg.setTimeStamp(0.10972936433);
    msg.setSource(44657U);
    msg.setSourceEntity(226U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(89U);
    msg.timeout = 54894U;
    msg.rpm = 0.654021940366;
    msg.direction = 182U;
    msg.custom.assign("XYRBTVIRXYRBENSYOSRFMYZKBOQQOSXVOCIHZBIEEGTDNCFQPFWNEZPGOJTQJZLBFLRNMKLJJKYPPDQHOCSTXVGFVTAVTKDCYMQCJHYMYKUFWVHTSCHMMELKPIIZZJUXDUHKBZAAZKSANSGLGGXLSDXUKOABRWYXEXSCUMNVTHUTHUGDVWGJQGKSEJWWHDXRULNNRLPJFVMIFDDENPAVUCBFWIQAOUHQANWREARFGQPMZBTOALICDBM");

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
    msg.setTimeStamp(0.0362426768432);
    msg.setSource(13582U);
    msg.setSourceEntity(156U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("AHRDBUMJUFNDLEOUJOHTVYQUPYLRKMEUNRRTJMSIGKEEPWDTTKSXZUCQUBZRCKESBDQPWFXXOPQNGVJGLNQPEAVGVDQYZJTNWHLIABMEIIJLAWPIAAGOXOHWCRZKGSDRYMPZMFOLIEBLLFBQINBZYAYXCGYEFVAOEMMVRZHHGSPLWPWVNHXUQTSKHSCDBVCXSJANYAKIUGDUIQGOJZHTCSOBVKBRNKYM");
    msg.type = 161U;
    msg.op = 192U;
    msg.group_name.assign("CVSYEPYNAVETFISVGMFKASFABJENXAOQWVFCIHSAHZFIBHSYHTLANYZNGZJOJW");
    msg.plan_id.assign("ZBETDZYLBQLMAIITAFTQVZZXUCMLOWQBTRLHBHYKZIGENDQNXOQOCIMKMYJWRILJYCYSNFNPJEDSHZEDEVHELUZWUJPBPYMSYEDDKRASTIJYUHWCGVOMEJSIZVCUGMBOHSXAYLTV");
    msg.description.assign("FBLVFMNUWURGSADFGZAXZKPPCBRPEMQRELWVHFPAVKSCXJPHVAULMISBTLEQXRORYKKTBJMEOWMMAGSGCN");
    msg.reference_frame = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10539U;
    tmp_msg_0.off_x = 0.691884312866;
    tmp_msg_0.off_y = 0.669214482198;
    tmp_msg_0.off_z = 0.610048247755;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.423144689359;
    msg.leader_speed_min = 0.389250770289;
    msg.leader_speed_max = 0.516858782261;
    msg.leader_alt_min = 0.0503128291069;
    msg.leader_alt_max = 0.680266182614;
    msg.pos_sim_err_lim = 0.177428204843;
    msg.pos_sim_err_wrn = 0.184367512743;
    msg.pos_sim_err_timeout = 33384U;
    msg.converg_max = 0.319634738474;
    msg.converg_timeout = 8547U;
    msg.comms_timeout = 62655U;
    msg.turb_lim = 0.0089885175928;
    msg.custom.assign("TDWKPGIDQKCAJRGYWXLJJDPAEDLREHLMKPNHTHKVFMNPWYGONFNBFEHRRUGOAFXDQIEVNYSDLZOBYWSYHOUIDSJYZAUMBNICJVUEZAMLUQOTVCKSWNFUGKKZXZERTTDXYUMMLMYPDJGIUMCZEGAHVJBXWBBMJAOTIUHSKNOAAWTRMPCQCPQLKXCYBPCWKHPXVSUESSRORFWFBVFJLTEZTVZQIF");

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
    msg.setTimeStamp(0.822059105924);
    msg.setSource(44220U);
    msg.setSourceEntity(9U);
    msg.setDestination(62180U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("MSTBQGOIQPULFUOPPFJVMNKAQRJMVKYWLEJXMDOILDICYZPUHKWBVYTKUGDYLFOORGTLZQADDCWLIFEOWFUHCNFTMUCXACHYRHZYONOVMDDERANFBLIIMLHCEMUTZCREXQRTJZJABEKRZNSARIUDKWCQWSZSWVVVNFEWJXOHSTPWKYQVIVURKXNTGGGZHFEISVJXKOPAPMNPSGMBYEXNAGTJWZDJSSCQAXBBGNXLPXEHUIYFRPJAQBKBQDGCL");
    msg.type = 31U;
    msg.op = 139U;
    msg.group_name.assign("ZGFTSYENUGHJQAUDMQPJIEKVPMXLRWNTHIQJPMZPQEIBWFGFXQDNGZVDEQXCFF");
    msg.plan_id.assign("CIGUUBXMKDATSSIDIZFPOWKDAFWQFCNOGDZNZQEUWLGAXJPVHECMTBGWVABFIRHOCJXSMSLEKAGHGJQERYYMQDVKQDZXPUHVZTMLHZUIPUXYCEGELOAZBJOGGSPHENJAYIHRQQVTBAOMTVJCTBWKWQFXYDRRAM");
    msg.description.assign("VBXFAVGWBTJLPSXEONPDYAWRGDRBBHGCYXSZNCPFPMKQWITDXKTUFTJLJRDJYVJTQDVUODQBJNIUTWWUXORKCGNNZMIYXZZKQLEVVZSGDCEKGFPRUTIHYROLDJQQMKULQANIVRBAHWXURHOPFIEHPNEYNZOZZLBPAEUUAMGXEYFCVIV");
    msg.reference_frame = 69U;
    msg.leader_bank_lim = 0.341203116774;
    msg.leader_speed_min = 0.584475635749;
    msg.leader_speed_max = 0.260889926384;
    msg.leader_alt_min = 0.226264588559;
    msg.leader_alt_max = 0.232963961304;
    msg.pos_sim_err_lim = 0.527035984987;
    msg.pos_sim_err_wrn = 0.0183741422917;
    msg.pos_sim_err_timeout = 62773U;
    msg.converg_max = 0.819100030097;
    msg.converg_timeout = 4482U;
    msg.comms_timeout = 52926U;
    msg.turb_lim = 0.124128574418;
    msg.custom.assign("JEERLMCIVFVCKCKZIXNJKHKHWAZFLVLUCJKZWIAQYTJAMSFCLPPYGBSBJNXEVQFMPOFNTXDXQZEKDAVVNIHHSURWCDBOWGMZMMCWKAXMEGUHACXYUSHFEYGILSEBFYRSSANFGPCCLRLDQUOUQIUGZEPDMPOOBDZXGJTTORUKIWTXNTDJBIBTQWMZKVNBBQZAHORSYWOLNHAYLSSPPKGNR");

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
    msg.setTimeStamp(0.413623895216);
    msg.setSource(28830U);
    msg.setSourceEntity(88U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("RNHYYROAABTRDINMGELDBTXMKUFWREGUCXMNDUCAWZUKGEEOEGAJEXPLMQQDYUCQTKHCVKJHAGVQSELHRFULDMIYIRXKICSWLTPDZIQSCSYSXOAHKIVSTJJKRIJNBXNPZLFNBGIVGFXVZOZRUQYSZPTBFIGKHBEVYMCWPPXDELHNKSZCRJTBPQILUPS");
    msg.type = 93U;
    msg.op = 108U;
    msg.group_name.assign("NREKMOFEYPTCNQZWJIOBRQOSRGIIKAUMKFNMGRHBHVXMOWPAEGZFRSRAZHKDYDNVGBMAUEYQ");
    msg.plan_id.assign("FUEBPJUQSLFAWOLLEGFYLOPFGGWQENLBZOMYEVRKNZHAPSQIBVRXLEBHTGBKSTOJCGUYBQHFHRXDLMDKAJUFMGUZIYTRTYEIAZXJDZBHATQXCIFKEXSCEJPSUMAQKNPKNFXNPGMXSHVXTGBWNTOISXSKCSRMPYASOZUIKGQCKWJATVRZNKLLVYFGMOYEPPHZNXHDQRHDAIVQTYZDIVRVHMBJUIDMBZACNODNWQPRCFDWVCCDY");
    msg.description.assign("MMSTQJLOCDXGCJHZWZFTBEIOREUHHUTAMHULWEBFUYXWYWWMIHXXALSQTEGDFJLGQQKOVMHYMITRDFOONVAGQVDAVPVXOKWIGELPJGGLPNPUNBNCSTZTBPQLUFHJPYBTNMAMWWOINZSNJJDBJIWFUTEZPVJMYXCPLZYNQCBYFXRK");
    msg.reference_frame = 119U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36118U;
    tmp_msg_0.off_x = 0.0506688194246;
    tmp_msg_0.off_y = 0.215891434874;
    tmp_msg_0.off_z = 0.75858996247;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.309870392109;
    msg.leader_speed_min = 0.150305227258;
    msg.leader_speed_max = 0.289419867751;
    msg.leader_alt_min = 0.96147901755;
    msg.leader_alt_max = 0.377844181619;
    msg.pos_sim_err_lim = 0.147882574819;
    msg.pos_sim_err_wrn = 0.938460539081;
    msg.pos_sim_err_timeout = 49751U;
    msg.converg_max = 0.637360722369;
    msg.converg_timeout = 36323U;
    msg.comms_timeout = 21508U;
    msg.turb_lim = 0.809126073889;
    msg.custom.assign("KTIQDQOCMVLTFAGMKYUYINNQUDMMPWAIAFYLWLXSQHHDJYCGXLWPINRONTKGGQEVVBPAURSOFUIVLNPAJSLBUGRWMXKFKYEFPBZTCPDDBPDZITSJVZCVXDXTDVYXAWBHYREQI");

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
    msg.setTimeStamp(0.141120766054);
    msg.setSource(26310U);
    msg.setSourceEntity(125U);
    msg.setDestination(53905U);
    msg.setDestinationEntity(199U);
    msg.timeout = 36451U;
    msg.lat = 0.0748531808153;
    msg.lon = 0.117841139072;
    msg.z = 0.895105600457;
    msg.z_units = 11U;
    msg.speed = 0.701367789781;
    msg.speed_units = 167U;
    msg.custom.assign("XWEUIETKMJWPPTZZMBPYTKWQBYWFRTWZROHGGPUDRUPDYZMCFVMWLMDDZQTXIQRJFOFXAJIQXHZYRGEMPJSCABNPOXGRHSYQATKSGJKJGNHVPYOEEDHVRIUILWNIDLOKXNHWFTACKBVH");

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
    msg.setTimeStamp(0.943450695677);
    msg.setSource(38138U);
    msg.setSourceEntity(82U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(227U);
    msg.timeout = 13111U;
    msg.lat = 0.244042597391;
    msg.lon = 0.722218895883;
    msg.z = 0.764096930842;
    msg.z_units = 3U;
    msg.speed = 0.0777626611165;
    msg.speed_units = 68U;
    msg.custom.assign("XHMPIRRATOLBNGFSODEQPAANPWJHLTRGUMPKWEQCOXFEKZGJVAJORZSWNQYUJABGMEXNNPYCVZMOBDWQWECDIGEUZYAKWLVGTCHHADSXGMUBRCYPAFZHFLIXBJIEJXN");

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
    msg.setTimeStamp(0.0379952262414);
    msg.setSource(43070U);
    msg.setSourceEntity(146U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(123U);
    msg.timeout = 50126U;
    msg.lat = 0.745236378465;
    msg.lon = 0.057875574419;
    msg.z = 0.942221109345;
    msg.z_units = 178U;
    msg.speed = 0.310268409707;
    msg.speed_units = 77U;
    msg.custom.assign("BJLRCAHXYLSVQCBUCWCVLCZWZDEMRJGQFCFWRKAFENOXLDMFZOBLDSJKVAXQYQYXIHQAZHVHNCHDFNEFMDGWZJZPUXTOIVDUHRSOOYDVMTGSQJQUYJMFRGWLGUGNPKKFWHWRRMTFCKBGFRHZIWHKLJJBLYEUJKIINDPEBLERRKPGIPMAJMSUNNSTAUCKBXYNKBTEXAHOISSZQONOOPMTPPYAGOPLBPIZQQDYNTSDEUCTIXVZWIXET");

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
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.0709076613514);
    msg.setSource(10626U);
    msg.setSourceEntity(58U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(46U);
    msg.dist_min = 0.61818655013;
    msg.ax_cmd = 0.571370391231;
    msg.ay_cmd = 0.979990516407;
    msg.az_cmd = 0.593919234761;
    msg.ax_des = 0.832102100809;
    msg.ay_des = 0.596049043278;
    msg.az_des = 0.0597713784497;
    msg.virt_err_x = 0.0421723644842;
    msg.virt_err_y = 0.0471300663274;
    msg.virt_err_z = 0.216273563434;
    msg.surf_fdbk_x = 0.715745050541;
    msg.surf_fdbk_y = 0.783726310366;
    msg.surf_fdbk_z = 0.708742304109;
    msg.surf_unkn_x = 0.27475152461;
    msg.surf_unkn_y = 0.0575070887646;
    msg.surf_unkn_z = 0.718271022205;
    msg.ss_x = 0.439040473799;
    msg.ss_y = 0.13545905689;
    msg.ss_z = 0.976702410966;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YLZMNHAMBHWUTHYEPFAZIJXELEZHOMPQOBPBNNGRSAZGVXWQITEJVUZUATJJPRQSAWCOMKZBVYJAJFLDTYBOSUK");
    tmp_msg_0.dist = 0.799491686433;
    tmp_msg_0.err = 0.831161667776;
    tmp_msg_0.ctrl_imp = 0.246084747245;
    tmp_msg_0.rel_dir_x = 0.827257084957;
    tmp_msg_0.rel_dir_y = 0.850274046475;
    tmp_msg_0.rel_dir_z = 0.891954350699;
    tmp_msg_0.err_x = 0.00504855982736;
    tmp_msg_0.err_y = 0.207375065326;
    tmp_msg_0.err_z = 0.182332781181;
    tmp_msg_0.rf_err_x = 0.573311283296;
    tmp_msg_0.rf_err_y = 0.157949824403;
    tmp_msg_0.rf_err_z = 0.757662389966;
    tmp_msg_0.rf_err_vx = 0.208396517188;
    tmp_msg_0.rf_err_vy = 0.453601999071;
    tmp_msg_0.rf_err_vz = 0.530169272374;
    tmp_msg_0.ss_x = 0.877909135124;
    tmp_msg_0.ss_y = 0.0864915322038;
    tmp_msg_0.ss_z = 0.26114723021;
    tmp_msg_0.virt_err_x = 0.91155955118;
    tmp_msg_0.virt_err_y = 0.451227964828;
    tmp_msg_0.virt_err_z = 0.166346693702;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.411467889629);
    msg.setSource(61216U);
    msg.setSourceEntity(160U);
    msg.setDestination(64483U);
    msg.setDestinationEntity(144U);
    msg.dist_min = 0.93605996465;
    msg.ax_cmd = 0.935915280955;
    msg.ay_cmd = 0.723154514142;
    msg.az_cmd = 0.451240531789;
    msg.ax_des = 0.755902457055;
    msg.ay_des = 0.807126209607;
    msg.az_des = 0.36266145078;
    msg.virt_err_x = 0.193122849516;
    msg.virt_err_y = 0.0570347411805;
    msg.virt_err_z = 0.615079036347;
    msg.surf_fdbk_x = 0.806423289085;
    msg.surf_fdbk_y = 0.943976284762;
    msg.surf_fdbk_z = 0.817522887276;
    msg.surf_unkn_x = 0.359868274646;
    msg.surf_unkn_y = 0.909265257516;
    msg.surf_unkn_z = 0.678851128633;
    msg.ss_x = 0.345005153017;
    msg.ss_y = 0.921101666796;
    msg.ss_z = 0.281192186277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.274499117377);
    msg.setSource(23183U);
    msg.setSourceEntity(172U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(104U);
    msg.dist_min = 0.951168930581;
    msg.ax_cmd = 0.978217866368;
    msg.ay_cmd = 0.528118089884;
    msg.az_cmd = 0.413448078397;
    msg.ax_des = 0.80146895752;
    msg.ay_des = 0.348722115313;
    msg.az_des = 0.799808117892;
    msg.virt_err_x = 0.325733746454;
    msg.virt_err_y = 0.964320685221;
    msg.virt_err_z = 0.0531847163817;
    msg.surf_fdbk_x = 0.83408490086;
    msg.surf_fdbk_y = 0.0758673681003;
    msg.surf_fdbk_z = 0.795236660826;
    msg.surf_unkn_x = 0.614850516467;
    msg.surf_unkn_y = 0.0421164916563;
    msg.surf_unkn_z = 0.11541361708;
    msg.ss_x = 0.753827649507;
    msg.ss_y = 0.411944611291;
    msg.ss_z = 0.457932056839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #2", msg == *msg_d);
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
    msg.setTimeStamp(0.31914685261);
    msg.setSource(53134U);
    msg.setSourceEntity(23U);
    msg.setDestination(40429U);
    msg.setDestinationEntity(24U);
    msg.op_mode = 185U;
    msg.error_count = 158U;
    msg.error_ents.assign("NJVUSMEZQHDKYFGRAZHVDIGEOFEVZDNUHYCT");
    msg.maneuver_type = 12713U;
    msg.maneuver_stime = 0.86364299213;
    msg.maneuver_eta = 38526U;
    msg.control_loops = 1443119373U;
    msg.flags = 152U;
    msg.last_error.assign("SYWJSDVCNQOOQEVSEPAVKNQUBPXGXXLZHKQCAVGKZMCIHQUMCMRBKJKNSHWTWWYZBCLOFELIIFXEDELBGMOCJEPYUARRVDFIANLDWLOAJDHTISWPIOCAVPHZBDWNSJCZXRJFEIQALYSRNVDRRKTZWGYTDMNDIUBBROQJLYTKISDUSTPLYUGXFZZAGPFXGUZCEUUTKJGWPHNTTCQOEXJEHAYZFHLFGMVMMQG");
    msg.last_error_time = 0.907127992175;

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
    msg.setTimeStamp(0.296573299303);
    msg.setSource(34369U);
    msg.setSourceEntity(107U);
    msg.setDestination(48251U);
    msg.setDestinationEntity(199U);
    msg.op_mode = 58U;
    msg.error_count = 15U;
    msg.error_ents.assign("ZSDIOXRLGANJAKSDTHEKGXOGYZTVKCXKQEPIQYFHDPLNBCWXZQMXDSOJUHOSAVJXUFLKFXOGHU");
    msg.maneuver_type = 50081U;
    msg.maneuver_stime = 0.0774652146827;
    msg.maneuver_eta = 64659U;
    msg.control_loops = 1498837503U;
    msg.flags = 183U;
    msg.last_error.assign("CDUYSJNYVHGXOTAZIDAKEAETXWOMYWECFNSFTWBTVPSHPCKVNHMUTLAQZRNSTFMFBDCXUPOLHOCHEWWOQNWSPKDTMRAKJCJNSUBJQAAVUBMDFOFXJHPUEDUZGWVMVESZIRFRXUHXDJMLNRFDVGQWDYPHZXRVCZJLSTOFKIPGYLGWGNKBZUEUIHLZBRIAKLYRQBYIXSAECDQOMXPJBKVOPEQMQEKJNGSZFTYBIGOWAYGLVIJCRINQZYBCKGLTH");
    msg.last_error_time = 0.415713139281;

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
    msg.setTimeStamp(0.847803454956);
    msg.setSource(19392U);
    msg.setSourceEntity(237U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 66U;
    msg.error_count = 160U;
    msg.error_ents.assign("QTAQOMDWQIJVOYGJAKPOCUBNGNWVHYKQYZFXRTAKGLHOVNZUYAQQQHNSXARKDODIVOPDMLTDXENLBTSHCHKQGGMVXASBFFEPCGLULVNZVECONRISXPIJRSZRLFPREUTPUUCJPICXVQEMPIRDGFULSBHLBZDJFTUAPBS");
    msg.maneuver_type = 24466U;
    msg.maneuver_stime = 0.995631277235;
    msg.maneuver_eta = 6410U;
    msg.control_loops = 4026298335U;
    msg.flags = 181U;
    msg.last_error.assign("JUDXBVEVFDMMZAKVNAMUQLTQEGLKOPZWHOFWUDKOJGZGZTNFQBLGJDWIBNKS");
    msg.last_error_time = 0.887904695578;

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
    msg.setTimeStamp(0.776272519419);
    msg.setSource(37544U);
    msg.setSourceEntity(2U);
    msg.setDestination(23659U);
    msg.setDestinationEntity(109U);
    msg.type = 113U;
    msg.request_id = 29344U;
    msg.command = 58U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 56016U;
    tmp_msg_0.lat = 0.0301160875444;
    tmp_msg_0.lon = 0.838128969453;
    tmp_msg_0.z = 0.237115470299;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.0058039304608;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.custom.assign("OLMNVFIXZIWYQVGQJCLSLSEGNRGIISZXPTIBXUCIPFVHBVJZCOTLKPMYLQDFBNALCDTQLRWFTBWNHBFWBCJGMBNJOTCBDDKAXCRDQOKEMWIUYAPLTLWCEZKFGYSRUZEPMHAUZJEZHQVKTDMASTBDEOKNMYUYXXPSOUJIJVZFPADAWFATWQSUIKGDOZNFOQOSUVKWGKSPMKEVOARFPYSCEUGQJNMWJXZHJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 542U;
    msg.info.assign("BBHVDVGYDIISTXRANEETKXZPEWORPJADTNCAALCGBCVHIMNZVJSRHWPAPHOAKEITWFFLQXAQDHUUXYMYFKRLAIKILFYJMMBSFYCLFWPSOEEOVCTIRKRGSGJIRYTQKUHXJYQMWVAJWZZKPKBOMFUCLRWXVXQLJNLJUZDOQFMGOCCEOSGQDNQMLGZ");

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
    msg.setTimeStamp(0.624978935443);
    msg.setSource(2308U);
    msg.setSourceEntity(150U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(179U);
    msg.type = 118U;
    msg.request_id = 19217U;
    msg.command = 178U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 50563U;
    tmp_msg_0.flags = 239U;
    tmp_msg_0.lat = 0.925498285194;
    tmp_msg_0.lon = 0.0225631707938;
    tmp_msg_0.start_z = 0.839710889867;
    tmp_msg_0.start_z_units = 68U;
    tmp_msg_0.end_z = 0.886547930108;
    tmp_msg_0.end_z_units = 34U;
    tmp_msg_0.radius = 0.281920616794;
    tmp_msg_0.speed = 0.579052080015;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("PVNGSUKESLQPJERRSBFZJZNUHSYHKNOGZTPLFQTYYIDKNRXVQJPNJVMEDPVKWPXFITSCLIXMJRVAVITBMKGLAUTRJXHWOOPWMIBGJLFXAGFA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12715U;
    msg.info.assign("IHOFPRFIKPEZIRBWRZUGYOFNDURSOVXWAXPESPVGRZCGSVIYSBPIBCVNYUIIJRHYJBQABNTHEDGCTMTMZSHCKBFXWLMTVKSLWAQWDLKMYZFOSEFRLVLVDIEJMYDLHGQWQPMPDZJELAWBHWULJEJMAZUJGQRVJQXANMXXJNSCHBTJGCZKSNKTQKCEVQUYHMAGEGUCITPHHOUQVOPNOWDKOYTNFCYLUKRFTEFDRXKDQBUNZNIMAL");

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
    msg.setTimeStamp(0.910123587556);
    msg.setSource(44470U);
    msg.setSourceEntity(170U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(10U);
    msg.type = 63U;
    msg.request_id = 50616U;
    msg.command = 143U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 62917U;
    tmp_msg_0.rpm = 0.253267637834;
    tmp_msg_0.direction = 137U;
    tmp_msg_0.custom.assign("BZZJPOWYYWCBOSUHWIEBMQJMKIORCUEEFGSBSOMHCGDVBRYZMUGVKKAQSFEAKKONWDYEIUPJDDADFUDEAGLNRHNNIMWYCTCCRRATTPUPOQSUVXHXKGVVXWDQCBTGMNAOVOEFWITAFGXNQJYPSUUXJZCXMHKIGECTRLKJTSQBZJFQPQSRFXYUZPMIIHFMTYXZFVXDLBGABYYDJXHLLLQTRNHRPCVTDGQWJKHJASIAZBRVMOEKZLLEZPPLNS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52926U;
    msg.info.assign("KMRLLDBARYJHRVLZZWFYCGDZXSQGXMICOYEWVJSHQJSPRZBYBJFFZYAQSVSPDVOVAIWNGTMBGLZHLDGTNFCGXHRBOOILPPWIOEVNQDCYHLCXGMUWONYSIEXXEKBETDJITZRKDVRXGEUMWFQLIELHUUTHJXWOJQKAPFKNWWREAOYVNHTKAJUBSAMPIQLK");

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
    msg.setTimeStamp(0.246211680855);
    msg.setSource(17000U);
    msg.setSourceEntity(2U);
    msg.setDestination(16289U);
    msg.setDestinationEntity(178U);
    msg.command = 159U;
    msg.entities.assign("MENAXLOAHGXCGBNCESEAKNPDHUTYUBBOMQSGUTCWGOJSPYAIXLDEDNAAIMDKWQGWZYNKLHDAYQHSJFBREVBLNMMVIHMZTXRQJYRKGWCVZDOIYUEJRAHTJKZFFLIVCQBQDNWXXLRTZTBQZZXTLVZNEVOINDUWVTOAFQPCJJRFRXEPPGVOKSWOVBDSIQVUARPUYWHFSMMJPSLHBCPCMPCOFDHWRJHQF");

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
    msg.setTimeStamp(0.964641410285);
    msg.setSource(18372U);
    msg.setSourceEntity(51U);
    msg.setDestination(3172U);
    msg.setDestinationEntity(179U);
    msg.command = 181U;
    msg.entities.assign("THKNUFGSQHXSANXYMCZNSUJFJUNXRYIKGUXMMLMYGPTUZSNEYLNATJNEOCJVLYRETCEZFRESHOCIHAEBCDYFAOPVSMIDZYSOISKVBLDKTRRLHKTOFGMPNLQDZZLZKBBDOGXBDCXRHIFUSHWTTIIUUEYBKKVQLCZWMXMEJULXJAVEPGATBDJWGIGQAWSWAJZRJDVQPWPQGDMKBHABEPWKIFHUOVXIPCFVDOV");

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
    msg.setTimeStamp(0.733453919607);
    msg.setSource(2812U);
    msg.setSourceEntity(20U);
    msg.setDestination(54643U);
    msg.setDestinationEntity(223U);
    msg.command = 43U;
    msg.entities.assign("DTNCPVGNAHGAHFUMHUOZEXAGPUYDVGJDUVTQZIYTCUACOLRI");

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
    msg.setTimeStamp(0.580322624521);
    msg.setSource(63037U);
    msg.setSourceEntity(141U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(59U);
    msg.mcount = 123U;
    msg.mnames.assign("MSKICSVWJBYCNEOZFGXNDQNPDCVVUVJUOLPLVKQORDLTAXVAXEHYYEAXGJCFUNOZSZGMFWCLHQAYFMWZBBLGRHHTIPZFIC");
    msg.ecount = 229U;
    msg.enames.assign("EVGRWEQIQJRNOWXMMNLXDVYVNWXEVQVUCUOUODEGIOJMSNNJMFBSYKTFOBGROGZXGGLIXZLKRLSXQWPYWYZPIGTNVKWGMZJQUVRZPBQPWASSEGAHSNCCAKJDKJBJNIHTCJT");
    msg.ccount = 56U;
    msg.cnames.assign("JUXJKWAXRNDDLURKNMQJUWGMLSMYUGFQVDIQOWUGQJYRNGTNJFYKEBKUZOYIUADVTMYVMBWSMZCETQVXORCLXFBPTDOZQKPGPPEZBAVSJMPLDRNBFTLCPBRPEYPNFBKJTACTZOSKFXEHSSACOFBOPKGEHLQCVNYJLDFJEISWWEBASNNMTHUIX");
    msg.last_error.assign("QGQEEMWSMWPWQSXRLGYJQANVDOCROXTHGVXLAIDOZRCFUCYAKQJJBPVGIXNITQOZFFVSPEVDFSLXITYTAFFPSGKRIUF");
    msg.last_error_time = 0.352854511635;

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
    msg.setTimeStamp(0.656146884303);
    msg.setSource(48812U);
    msg.setSourceEntity(76U);
    msg.setDestination(45456U);
    msg.setDestinationEntity(229U);
    msg.mcount = 167U;
    msg.mnames.assign("JVRSRVDWSLNTZGOUSYAHXCURXCWEV");
    msg.ecount = 1U;
    msg.enames.assign("FVCFTAIXGIQWEBBEJZCUSXNYPGKWUEKXQZQXDZIVVTNUYIAOHGCAYZTYPNFPCMGHUHDAPRVOENZQWSVUQGFTRMQNROVSKEMWJQLLJOPBRNOFMLJZRSJOPZLPCCLEPN");
    msg.ccount = 48U;
    msg.cnames.assign("GCTYJGCJYUYSLAVIPTDLGRFBUTMDBU");
    msg.last_error.assign("NHVPHLQEQGGHDAYWTIYFMTOGMKQLIEFAKIZSEAODAZRZXOCWQWWYIDSVJUCTQRBYDYJXXMNPCPSRVCRCDECETTIKGGHPWZSSUFKBCPRWWEQKPGMUASINCTOUNCDKCLXHFYLKRGOSAOHOBKAJRIVJLEF");
    msg.last_error_time = 0.726465775908;

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
    msg.setTimeStamp(0.577257119114);
    msg.setSource(29644U);
    msg.setSourceEntity(117U);
    msg.setDestination(34640U);
    msg.setDestinationEntity(239U);
    msg.mcount = 51U;
    msg.mnames.assign("RODOXCHOSRTSIES");
    msg.ecount = 215U;
    msg.enames.assign("SWXFTICTQANSEQIGKKHLNOJFEISCHHUCZUXFMEUDXCFPHOGNQ");
    msg.ccount = 214U;
    msg.cnames.assign("JYGRIRZQANYIHFGCYLDXZDTIGYAWNBTYHYEOFVCDICBIKMUOMTABFBOPYQNHVKAIRMSIDZIIHOVQTWTWEYJBFFWUWNTMUMGLFLEXUOTLVHMJAUEUDMWJQSNDRPAJLEQPNNSJFKXYWKCAQEULRSPSMXQMGRXCQVFWALGLDUZZBRVOPUQDZGPZYSVJWEIEEXFSVCJGSFKTT");
    msg.last_error.assign("GYVCNXTQUDMYGKYMQNTRKIWJUXSHDLEGHGSIJKWAHLTUPYXVRVENCGXNMEBPUREVOILUQYCYHKBIFXVZFJDMFQWVOJMBSFPSDRFAESTWUVUGCIOZNTMTNNAJIZEPCMMOKOWWIQZOYPTNBTPLWXLCWJZFIPSKZRSZCWAELRMUTQFCKVGBEVDDJEAANE");
    msg.last_error_time = 0.528481871107;

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
    msg.setTimeStamp(0.63453228829);
    msg.setSource(55428U);
    msg.setSourceEntity(160U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(130U);
    msg.mask = 95U;
    msg.max_depth = 0.0414812012732;
    msg.min_altitude = 0.408932028485;
    msg.max_altitude = 0.0235646307592;
    msg.min_speed = 0.691846050815;
    msg.max_speed = 0.0779600674902;
    msg.max_vrate = 0.678973748994;
    msg.lat = 0.712227811285;
    msg.lon = 0.304112558156;
    msg.orientation = 0.978257951433;
    msg.width = 0.536020990657;
    msg.length = 0.831905804283;

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
    msg.setTimeStamp(0.260594781543);
    msg.setSource(19036U);
    msg.setSourceEntity(193U);
    msg.setDestination(44738U);
    msg.setDestinationEntity(131U);
    msg.mask = 74U;
    msg.max_depth = 0.534334175731;
    msg.min_altitude = 0.94081577029;
    msg.max_altitude = 0.0193465888605;
    msg.min_speed = 0.542821006867;
    msg.max_speed = 0.0800961846655;
    msg.max_vrate = 0.441710367829;
    msg.lat = 0.680156806461;
    msg.lon = 0.277723034188;
    msg.orientation = 0.613487798785;
    msg.width = 0.432805376708;
    msg.length = 0.608898698194;

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
    msg.setTimeStamp(0.520904665866);
    msg.setSource(18058U);
    msg.setSourceEntity(8U);
    msg.setDestination(399U);
    msg.setDestinationEntity(36U);
    msg.mask = 226U;
    msg.max_depth = 0.556336803728;
    msg.min_altitude = 0.488996416581;
    msg.max_altitude = 0.330378691421;
    msg.min_speed = 0.567651554144;
    msg.max_speed = 0.510403913678;
    msg.max_vrate = 0.392239200176;
    msg.lat = 0.469095616576;
    msg.lon = 0.444017487509;
    msg.orientation = 0.815120457919;
    msg.width = 0.937172909688;
    msg.length = 0.420556643945;

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
    msg.setTimeStamp(0.00181507617715);
    msg.setSource(57941U);
    msg.setSourceEntity(19U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.93337981733);
    msg.setSource(1498U);
    msg.setSourceEntity(124U);
    msg.setDestination(18758U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.10795384813);
    msg.setSource(28197U);
    msg.setSourceEntity(55U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.462651877398);
    msg.setSource(32760U);
    msg.setSourceEntity(149U);
    msg.setDestination(9546U);
    msg.setDestinationEntity(172U);
    msg.duration = 31441U;

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
    msg.setTimeStamp(0.33674965487);
    msg.setSource(63103U);
    msg.setSourceEntity(69U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(181U);
    msg.duration = 28197U;

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
    msg.setTimeStamp(0.11419302285);
    msg.setSource(25225U);
    msg.setSourceEntity(60U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(14U);
    msg.duration = 26162U;

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
    msg.setTimeStamp(0.974727274975);
    msg.setSource(57681U);
    msg.setSourceEntity(115U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(140U);
    msg.enable = 74U;
    msg.mask = 327035672U;
    msg.scope_ref = 3742735617U;

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
    msg.setTimeStamp(0.0979345752413);
    msg.setSource(39959U);
    msg.setSourceEntity(112U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(48U);
    msg.enable = 231U;
    msg.mask = 4069289076U;
    msg.scope_ref = 868172599U;

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
    msg.setTimeStamp(0.706204936366);
    msg.setSource(41844U);
    msg.setSourceEntity(238U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(239U);
    msg.enable = 174U;
    msg.mask = 2900661492U;
    msg.scope_ref = 1906022682U;

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
    msg.setTimeStamp(0.0136464278209);
    msg.setSource(54941U);
    msg.setSourceEntity(39U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(189U);
    msg.medium = 217U;

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
    msg.setTimeStamp(0.154519273197);
    msg.setSource(54801U);
    msg.setSourceEntity(84U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(132U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.508085361144);
    msg.setSource(22909U);
    msg.setSourceEntity(51U);
    msg.setDestination(26156U);
    msg.setDestinationEntity(122U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.449823995352);
    msg.setSource(38255U);
    msg.setSourceEntity(227U);
    msg.setDestination(6020U);
    msg.setDestinationEntity(63U);
    msg.value = 0.877266158972;
    msg.type = 192U;

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
    msg.setTimeStamp(0.789492297853);
    msg.setSource(8588U);
    msg.setSourceEntity(135U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(45U);
    msg.value = 0.632551842811;
    msg.type = 162U;

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
    msg.setTimeStamp(0.0157123309791);
    msg.setSource(18600U);
    msg.setSourceEntity(136U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(211U);
    msg.value = 0.511647746209;
    msg.type = 53U;

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
    msg.setTimeStamp(0.819407299843);
    msg.setSource(28576U);
    msg.setSourceEntity(232U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(217U);
    msg.possimerr = 0.200016589757;
    msg.converg = 0.555190440134;
    msg.turbulence = 0.23849255384;
    msg.possimmon = 19U;
    msg.commmon = 245U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.495846587675);
    msg.setSource(49440U);
    msg.setSourceEntity(58U);
    msg.setDestination(38249U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.793142160938;
    msg.converg = 0.645433656657;
    msg.turbulence = 0.350390188064;
    msg.possimmon = 156U;
    msg.commmon = 40U;
    msg.convergmon = 157U;

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
    msg.setTimeStamp(0.566019553618);
    msg.setSource(25687U);
    msg.setSourceEntity(252U);
    msg.setDestination(16463U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.202345374708;
    msg.converg = 0.0263700162478;
    msg.turbulence = 0.0920023146745;
    msg.possimmon = 79U;
    msg.commmon = 99U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.678712141554);
    msg.setSource(6927U);
    msg.setSourceEntity(149U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(163U);
    msg.autonomy = 61U;
    msg.mode.assign("NLSZIXEBDHKMUICWAHTBRTJSYQLECMHHXUHXWPIBPOSCYWMCBGNOERLOFLOSTWRJTGZQMYBKZAWNRVJAFQINMXKKZJZVYFBHEZXWQKEUBDANLFVMBYMOCWSARTEOEOYLPAZYGKEGFBAWVDGKTIVUJTDGMFUFSVJTTPIPADJDSURDSGIVNFPHTHPSIZIBQXFLWAUEDYEJPXUCXCIKQOHMLDYQVPDXOXNNWGOVRNC");

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
    msg.setTimeStamp(0.750013289818);
    msg.setSource(7280U);
    msg.setSourceEntity(55U);
    msg.setDestination(30194U);
    msg.setDestinationEntity(178U);
    msg.autonomy = 140U;
    msg.mode.assign("VFXWWUMNFZHUOQTXIKMLKYBCNDUGUJRMUTMHPRIKHWSSDVDGIFHNNURPEZLFTYSNAPXAUEXWQDMVXVXKIYPCMVSNHIKQZTORBYQTZHOMLLBXXFELEYNVMJVBAACHYGOXZTPAWFEGIWZIINJFPDSDZYZEDPCDHVKCULSSCBZBWAORWGNHTJOKKQDGSEBJAJFCPFIEMBKBOGOYHEYCW");

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
    msg.setTimeStamp(0.998989685217);
    msg.setSource(25919U);
    msg.setSourceEntity(123U);
    msg.setDestination(34644U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 125U;
    msg.mode.assign("EEDBUWBYKPUIGWFSHHHIKSUOAVQMQMCXRIVABWERENJTQGURKJEYEZFCGXQWLSCPAKDZWWZSEBZYUMPSTMFNLJQNTPQ");

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
    msg.setTimeStamp(0.158760448521);
    msg.setSource(13323U);
    msg.setSourceEntity(143U);
    msg.setDestination(344U);
    msg.setDestinationEntity(51U);
    msg.type = 252U;
    msg.op = 65U;
    msg.possimerr = 0.491938522629;
    msg.converg = 0.856424654342;
    msg.turbulence = 0.0145089062551;
    msg.possimmon = 182U;
    msg.commmon = 195U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.454241706617);
    msg.setSource(13823U);
    msg.setSourceEntity(75U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(140U);
    msg.type = 58U;
    msg.op = 105U;
    msg.possimerr = 0.861618388279;
    msg.converg = 0.618362591524;
    msg.turbulence = 0.880903412866;
    msg.possimmon = 78U;
    msg.commmon = 45U;
    msg.convergmon = 63U;

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
    msg.setTimeStamp(0.334650305769);
    msg.setSource(4323U);
    msg.setSourceEntity(110U);
    msg.setDestination(60760U);
    msg.setDestinationEntity(23U);
    msg.type = 104U;
    msg.op = 117U;
    msg.possimerr = 0.431460275941;
    msg.converg = 0.586605939682;
    msg.turbulence = 0.455413733406;
    msg.possimmon = 23U;
    msg.commmon = 49U;
    msg.convergmon = 170U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.450823894823);
    msg.setSource(41724U);
    msg.setSourceEntity(169U);
    msg.setDestination(50265U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.723668788424);
    msg.setSource(54342U);
    msg.setSourceEntity(166U);
    msg.setDestination(18181U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.559460133127);
    msg.setSource(24162U);
    msg.setSourceEntity(249U);
    msg.setDestination(43453U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0758874762263);
    msg.setSource(60607U);
    msg.setSourceEntity(203U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("YIKXNDWLYUB");
    msg.description.assign("UBGVUJHAPZFQKNNRMKXQEITARGSUDSERYLUBAONYQTDVHEDXRZCXFWZKPJLDBCLVOBCZRYQKFIYBBCTEHAIGOBNFVXGWYGKHGYVPSWYYLAZFSVTZCSPDDQRIQPLAUDIMUXRPKFTKUIXZSUSGOIOJAJHPXRWPWTSPDWMNCMJTECKGJLEFOZCWMOMEXWVLBGTHNEOAEHMTCORQJBYRAHFIELP");
    msg.vnamespace.assign("QQPEFRWVZVHOUXAQDFSCOPDVNMABHYZTYCZYFEJYKNTBLIJLAHUSTO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TXKAKHXIEJGNYYQTUWPIMHEVSUWIVZMDFMPAUZCRUHISGPRWMFVNVZJHWZUDOUFDAATLIFBNJCNJJDFANIALXAEEXFDJGKRMBZSCHXEEIKOFHVXVLYMZBKBCGHDKFYGYRTCCWPFGMXQVNULQBEBQLPEEBRAYKHQLT");
    tmp_msg_0.value.assign("NTRNKTATIADTAVAHIJMIYZDKLXMKEHDROHISVWBQSVRSTSQBLZNFYZXVJEUYGPJESGURZX");
    tmp_msg_0.type = 177U;
    tmp_msg_0.access = 163U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ICNXIJDGRGUBZXNEBUUAUWZLFYKGJTLZHRIPDJXTIVOIHRHSNTHUDNYACHXSTCOABKRQUCSJEVKJMLJWQHYCYZPOPZYLEPMYKUFLOKXVPRDQMMSEALLJKYSDCBGIQXEKBWMXNNFYOENDM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KSWEYRGCEYJHUNSHRAPZXSNMDPOGDRNDVHASAHLTUSGRMSKPMWWPCQFQHCFGBJEOXXTFAMIJNFVMKHEJTOAREIPXGNKLCFEAVQXYLUYLUZNLSIIHYUVHIXTBORVLDKQAAYAXQBTFDVPIMVQLCZZZROVZXCDIYMNULWTNQMJOBSKVCEEGBEF");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 49983U;
    tmp_tmp_msg_1_0.name.assign("BRPSZQNQNITWRUSGDGHKHKCDRBVMOFZSCQYLW");
    tmp_tmp_msg_1_0.custom.assign("BRPZZBJOQNAFNZEFTWVXHQVUESLKXCEMNSWWNAALGSCRECWLFSPRMOUCRYJROPBLVDOVIBALPKJHRRZCCTZVHKSDIBZXCJXKQKCBSDUOGDQOLDCWYDTZEJAOVSGKAYWTXHTETNBMVJRKPJIGSSXUBLFCZIEUYPEMUIMDWQAZEONEMAGFA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SDJVMTDGHMLQUMPFSXOAVAVBQYSUIWGUFWIJGLPPFPMMYYXUWRHIAFHQAVBRJGISVLIDGZZBWOCZROMHZVHPEBRJLIRJZEOPKNHYKBWZUFGTWCXKNZDDXBRWYCTAYTYCJNOYTZTEGZTNYBFYVXEMQLMUEQOVBAUFEJXASPPEXCSGKRIOUXCIJNNFOWHTPENQKELHCSKRNNOVFMLQSDDSXTOUMWQNKEDKJCCHQAPDGWGTLBUCFZALBR");
    tmp_msg_2.dest_man.assign("BTUWOXJAAROAWWNFAXQHYLGNSWYWPUKOAENETDDKMGGHLPYTBXOFZOJHGVMFFHMMIJXVFIQFBEOEYERXZRPSASSYCILUZVDFHNMTQJQGCABSTQPXHZVLWVRLIDXMSBDHCXOEIPBLGALIZHJUUOMYIAPRFKISMYSNRKDGCNDJVNUWZBBAJRNRMZVWCQFRVYKKTCTDXVZPSYSQELDZ");
    tmp_msg_2.conditions.assign("HPZEACPMFWHRBOEMXMLOCYCGOZYJRWHXOWLXNBVKSPZPRNVHTKPQFSZWUIDGUTLVHKOTIMJDJEAJLCWJGXRQTUWFIIKQTHNFFVLWEHNVZMWKZEYTBEQQGBWZSGYPISBXVALNYKORIMDNVLBPZAIUQQYXQJ");
    IMC::TrexCommand tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.command = 129U;
    tmp_tmp_msg_2_0.goal_id.assign("WFTKKTDNFKJGBMWYMLHUSGOUZVJXDRTXMGQJMLETGPCWCNGJMMPMXJAIZWDXRSYSHDDLZUDHITGPRFOKRPBNKWJPPFOYLFTCTHGCUKZJABQQVUVNIEBYVALQCIKHPHKWXXFALBASOISHMOLBWZQV");
    tmp_tmp_msg_2_0.goal_xml.assign("EJFUGCPRQHJCZHCADTGGHJXRXNIAPMQKDSTKSFRZGSUQRXIOTZJOIXHMWIRZYXPMMVYGZXSBANHLFOIHGIPBWBWMADTVHORNFLTUFFMWLUURSEKYKSCREHLZOTQYOUOVVPGIVLEDHUPBNPCDNIECIZKVCXFNQXTRQCDGBPOWZPRKYBFLKHMLDYSYLAFUAKMPJKGDGEWCLBOMAAIVEJVYBNTEAJXDNNKTVWOFJEBWQDZLASTEV");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::CustomManeuver tmp_msg_3;
    tmp_msg_3.timeout = 42263U;
    tmp_msg_3.name.assign("FAHGXRYJRCLDVBKURENGPDYNQKQCTWRNHDJCWNMLT");
    tmp_msg_3.custom.assign("EYSXGKJPAVVAHTHBDFYBFVZIIMMPMWDZGLTJXSMLUENQJINMTLQPMEQIZNGKRPGSYTLNARCAAVNKOIHBVANFOSSPAZTGDQXUZYNFERZIZQWDOEQJTDHSIAHQLUXVWNCHQEWYKDTNJJPOJYSLFEZQAMBVWMDJKCUUTKCRBVKGRBWHGUYCAKXWPCBPFBLISIOBOKFOSXMTDIZRFKULRQXETHJWXELCGPMWLZUHOYXRSUDWB");
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
    msg.setTimeStamp(0.0668148842161);
    msg.setSource(62261U);
    msg.setSourceEntity(136U);
    msg.setDestination(58250U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("PSBVCZUSXZTZXICOKQFXRXAHFEFDVRAUPNHECGPKWYZQOQCMNDWXVBDGRRENOXUBWTAOVBQHJSLBSJMMNLSIYUGJDFDLIIHDVFSIRFYGGVZKPIJKQWDQNRTOKDTWWQWGI");
    msg.description.assign("JOUYVKEKFAOMDCNBIEUOFCLRIYZZOUHUMZHQNBFFCMONUIJDSMKYBMRFOIJWZXNGVUEOGWSSPRVMTECPVCYHWKCIYEAZBDWHNPVRKXYMLEHTMVQRZGQKSPIYFPVLPEDHTALFQKLLICPSJGXNJROANWGTVRAZXYWOXHEULDWYLVNQLVJBBCAFQRSQGQXGJASDGIKD");
    msg.vnamespace.assign("EFMBADXRNESPYSINGPFTTHCZVZKGWRQHQCCUIWMUUZBWHXDELLUVQRVKHAXSYVSNKTQXKLGTDAIBPEJOXBZWCVVJNTYSIJQDNDXMBFDKUNXPEYCRAJIMBAFZELCFRTFBUCOXVWXOGHEMKDSMWBCGIMHQHRSZVRSIYLABLDCOVPYMIUHZY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XSPJOHVPWXBXZRYXWQPHLAVADSHRTQDFDEWMCLTUQNADVYFLMPERGIHSSKKMZVDPVCRMPHGUQCVBELFMBWNKFMZZUIYCXYEXTVNKCTEXOYOQ");
    tmp_msg_0.value.assign("FRAAHHBSEIAHOCKLZEMUHTMMCMXIXFCYTMN");
    tmp_msg_0.type = 18U;
    tmp_msg_0.access = 16U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HOMVPPLGEUCLBXXQZRGMWDEJEMYFDHNONZYRVWYGCBUDTNZJENVWPKBJBOCKYJDIHFFRZKIHGUFSUUH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DYZKEREQGDHTCLWAGVPXYDKISFTSHXKKD");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 38972U;
    tmp_tmp_msg_1_0.lat = 0.462493553104;
    tmp_tmp_msg_1_0.lon = 0.274608640101;
    tmp_tmp_msg_1_0.z = 0.809363840661;
    tmp_tmp_msg_1_0.z_units = 146U;
    tmp_tmp_msg_1_0.speed = 0.146563047092;
    tmp_tmp_msg_1_0.speed_units = 140U;
    tmp_tmp_msg_1_0.duration = 60618U;
    tmp_tmp_msg_1_0.radius = 0.650184558084;
    tmp_tmp_msg_1_0.flags = 115U;
    tmp_tmp_msg_1_0.custom.assign("BIERVVRLLWTHOKCNSOMDDFNYLGIWHCCKBDJWTNNDOINTKZBMOBTEZXYBAMTOSFAZYHZFULWFUWJCNOAUXDKIRFGQNYLXOQKMVIQGWRHBBHUGNWJIZMYWMAGVZJTRLPEOXUIPEXUYZTCVCTUAJMSBUKTYSVUQLQV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TrajectoryPoint tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.x = 0.984301765368;
    tmp_tmp_msg_1_1.y = 0.702868584567;
    tmp_tmp_msg_1_1.z = 0.46490736373;
    tmp_tmp_msg_1_1.t = 0.158268794973;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
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
    msg.setTimeStamp(0.18196344522);
    msg.setSource(3476U);
    msg.setSourceEntity(91U);
    msg.setDestination(54500U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("BNZDJMVSGFWGZPCQUXOIGLNILHJKMRDWLDMPLTHVQTRVHNXMGTARWSUCHURDOWSSHBVFHVCPSZZFLWCRBDJPCNNPVQXRIXAMCSURAEDOUUXJVGHBBEQOJSVBYDOOAOKYPLAQAJTXALQNGQKJKGPQTZFDFICZXEKQRFYKEZYIIOYKVGUWNKBNGNEYSEKPWBCJFVCTIEOMQAXISFDGFIHLPYTWMUYCJSTFHMLBDREMY");
    msg.description.assign("HZAZYOMOKJVMCDSJULDAJHJNOGGIVNFTEUKCRBOUFYMWLVCGFZPDQHIPHXIIAEJRIXCXWSBCLQFCGAVBGHWLBRQYDCRNAEOPSZDUINUOEEOYSSWJBIYKPVTWOXLVKKEEZPMTSPMHGQWQNDHYPKZYVEBTWNAYXNURFEORNG");
    msg.vnamespace.assign("QZKOVYDSRXEDICKTRCKNYLIWTTWCBBBOLRNHGHCRJHDMSKCPOUNWLTCXPMUJXRQRTJ");
    msg.start_man_id.assign("OBPBVXLTGHRWNMVLVSKESTM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OMCFXNDOJRHFZZBGOBJMMOGAKWALKKBGTOYPCWKCHOLATVPJJCTZIGLGUHSWKDCRHCYIAVPPLDHSSDWFTQMWZFTYXYWJUUYEMSLSQIRXJRVHYJLTCHPSQZHQTIDZNXAIDGMRASFUKFLZGIPQAVNSXUYMYQQOWVFJSOEWYNDEAVLBHZBENMBINFZHPXKMABRLMKTVDXICEPKEDJFYRCJCQGIVVGXRWIQEUUAWODPVBFENLXURRNQ");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 4744U;
    tmp_tmp_msg_0_0.control_ent = 92U;
    tmp_tmp_msg_0_0.timeout = 0.370480527932;
    tmp_tmp_msg_0_0.loiter_radius = 0.806957639757;
    tmp_tmp_msg_0_0.altitude_interval = 0.665142984084;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 241U;
    tmp_tmp_msg_0_1.range = 0.826940816191;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AAIVRBDJBFHDRVIYLYMPLXHROGTDYFMWZSFWITVKVCEONRBEWDVZGGHJSXSIHDVMCIJPQPPAGOMMIYCPKTULCAVJDHF");
    tmp_msg_1.dest_man.assign("IIHYOHAAWTRREDJUSPFBACKNZGGNXGSBEWDJSGLQYTOCYUWABVRAFSIDUMXKQQLBPDLVKFIJONHSJCLLSAHOXMZQDVMFOLEFUFRQKYCNYVTNQUWPZVNTQZTFGKMZZZPVHMOYLWLWOZFROUPSAREEXMIGWIPEHIEUSMIJCTUNVJEXWBSATCZDOHGQEJBXQRHPWVRGKLVIKMUOUGYGNEBBSXXTPYDCHBCTAWCVXTKNMRYXDPR");
    tmp_msg_1.conditions.assign("SXGGMDNQFSMYYFNRUPRPMPFRFPYNGRNLUJDFHSQAVYWGCIHFETNDABKAMEUOMJDIWQZCYNLLKYQXUCHUVUVPQJFV");
    IMC::PushEntityParameters tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("IJGOQHUVEWJMZXFEQKZKKOFAVYYSQDJMELIHJKPKUTULSNGMOWDNETRCLXKDWABMAHYAIWPFQTFXZVONXMHPDLQXZIJL");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.867454931769;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanDBInformation tmp_msg_3;
    tmp_msg_3.plan_id.assign("JXBJZAOHFCRWEXHCTDYDQCEEP");
    tmp_msg_3.plan_size = 27054U;
    tmp_msg_3.change_time = 0.251143369715;
    tmp_msg_3.change_sid = 2919U;
    tmp_msg_3.change_sname.assign("JUQLRGBTPVGIAQPMLRYDRGEVTULBRENVYUNCWAYYESQDSEJXHHHWGXOOBKTSJPUUIFYDAZCBSLXEVGILPGKXMXWQNWYHPKGFEPLRFWINMFTOYRJFWHSHQIFTSCKDZUXZKVOCHOPMJMXRBETBDYZUUFQDACVCWIPJFQKRMSLTOSNVZJANMMNVDIOIZDQWKZXPMXHDVQWRMCWZSCFEHBOODEKKI");
    const char tmp_tmp_msg_3_0[] = {96, 86, 118, -61, 43, 76, -45, 71, 69, -49, 76, 111, 12, -9, -84, -16, 34, -37, 107, 10, 53, -96, 66, 63, 116, 13, 16, 126, 93, -76, 73, 49, -20, 101, 118, -70, -99, -55, 77, 47, 9, 94, 65, -33, 78, 55, -105, 105, -25, -62, -128, -35, 96, -36, -122, 102, -61, -32, -36, -105, 60, 66, -44, -37, 27, 44, -16, 108, -127, 1, -112, -101, -125, 12, 5, 74, -27, -92, -34, 25, -13, 26, -111, -38, 47, -66, 100, 22, 119, 112, 92, 31, 75, 71, -125, 120, 57, 41, 110, 42, -121, 112, 70, 32, 125, -70, 65, -44, 2, 79, -36, -16, -15, 91, -92, 56, 43, 101, 2, -43, 111, 108, 17, -20, 101, -124, 114, -127, 73, -20, -92, 47, 91, -80, -115, -95, -111, 102, 74, -115, -40, -65, 117, -118, -128, 12, -99, -73, -114, 104, 116, -88, -48, 77, -53, -62, 1, 53, -115, 104, 66, 110, 47, 103, -8, -60, -83, 103, -116, -41, -91, -26, 81, -61, -76, 126, -84, 0, -96, -126, -108, 24, 76, 95, 27, 70, 28, -87, -128, -62, -53, 74, -124, 14, -69, 7, 72, 107, -13, -111, 83, 126, -8, 47, 61, 43, -29, -68, -62, 119};
    tmp_msg_3.md5.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.561956636492);
    msg.setSource(34044U);
    msg.setSourceEntity(21U);
    msg.setDestination(874U);
    msg.setDestinationEntity(224U);
    msg.maneuver_id.assign("UKZBVDDZAMHXJUHUTCMYVMLFRAIQIWTQKFBXIFXKNWFVDNHVJPISYFAZBACGFYUSEUXGNORQLJTXATWSPWEPAKMRSTXDNNJGEDCDOJOQJBIIPGCBXHKHWVZSGBVYQNZWHFUNRMQTWKDGKGYOCNUEXJBJYDETMLEHCBOLZVRSSMLCKZQAOXWPECSJFLARZY");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.0361856552239;
    tmp_msg_0.lon = 0.156433021689;
    tmp_msg_0.z = 0.668243404699;
    tmp_msg_0.z_units = 22U;
    tmp_msg_0.speed = 0.581780925161;
    tmp_msg_0.speed_units = 153U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.631877473164;
    tmp_tmp_msg_0_0.lon = 0.105547370596;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RCREWAZALTBJXBKXGSTPVMIJQTKMDNEZHUWOWPZTPKTBRIRMVYSMCGQJXUWQUCJFIQQZLGYDMMSDESSFDSRRSKXHAARSRBQMQPBLOCNTKGINWRIZYWFDTFTIEIGZXEXWUDEAECAWOOJOBYIJGVCEYYAPZPUPZDWSMFIQMXNUFAFNEGBEKX");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.627403974836;
    tmp_msg_1.lon = 0.602640303259;
    tmp_msg_1.z = 0.468681469225;
    tmp_msg_1.z_units = 54U;
    tmp_msg_1.speed = 0.48911550816;
    tmp_msg_1.speed_units = 145U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.vid = 7495U;
    tmp_tmp_msg_1_0.off_x = 0.669600877462;
    tmp_tmp_msg_1_0.off_y = 0.671774071105;
    tmp_tmp_msg_1_0.off_z = 0.701383112436;
    tmp_msg_1.participants.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_time = 0.254436600647;
    tmp_msg_1.custom.assign("WOYFJPPZBUVKVIPNOVTAYXIAOZMBTBPYIYHATSPJFWLWWJZRCXMUPGNZEOWADAMAHHMERQYMPQRSLSAGBBRYDTGCFDRHRVLEOSGMKYMNDXSHWPOQIKRGFSWUIBCKZXUDNCOLJWWCBLKMKHVNIEMFRXQXPRXFJTYFAQGJTDICGFTVUKEOKREKIXYZNJHQZLLZBNGGNCNJEILTCYVBVJVFSUVSAXEDUFBDKUMJLHULTSIHNG");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredVerticalRate tmp_msg_2;
    tmp_msg_2.value = 0.817270641472;
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
    msg.setTimeStamp(0.137294268539);
    msg.setSource(64169U);
    msg.setSourceEntity(69U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(250U);
    msg.maneuver_id.assign("MNJBKOBAHOQEQLXXIZISGWTZSBMUZABXQDMONLQAKHGMXHAYLABZDGZYBNTMYPYFNWIFYGZXDFVLREPPFGIVINDOLMTYHRKLQPXWLGUCQPOUMXCWCYJVCVDNPAWPUUCEFKEJOHQSCNASOKXUNRXBVMFQHRIJ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 17916U;
    tmp_msg_0.lat = 0.566299036594;
    tmp_msg_0.lon = 0.656131523706;
    tmp_msg_0.z = 0.824205657056;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.speed = 0.355560842248;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.custom.assign("APKKDJUOLZXWWHBNIVFJVRNBACWTTRNSHPGFAAYBXHIWJUCKFTFMLZCGGTVXEOESIRNYFPJRDKMQRZHTKMMIQHDEWVCPUNWLEUEVSDKXLXCSDGYVJEWOMBZPSXFERSTLLFNPKGBUBPGPTGYATCPOODQKAZGUASJIBZYMYQBMONOQSRLXOOCZXFRUAJWYZTIEBPUDQHRIJHLXUCSQHMRWCMDJXYUAIIKBNQLDQVJNAVFCL");
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 50977U;
    tmp_msg_1.lat = 0.539141496804;
    tmp_msg_1.lon = 0.974575675749;
    tmp_msg_1.z = 0.366145296987;
    tmp_msg_1.z_units = 111U;
    tmp_msg_1.speed = 0.662885833082;
    tmp_msg_1.speed_units = 3U;
    tmp_msg_1.bearing = 0.147443797525;
    tmp_msg_1.cross_angle = 0.293577662906;
    tmp_msg_1.width = 0.249905425117;
    tmp_msg_1.length = 0.457637522923;
    tmp_msg_1.hstep = 0.69849808794;
    tmp_msg_1.coff = 50U;
    tmp_msg_1.alternation = 201U;
    tmp_msg_1.flags = 107U;
    tmp_msg_1.custom.assign("IZQXOYLLRGPQUJJBUHARESDTOTHSFMZBSBJROIAMVSBLLEOAVEWBYPDUGAXSOBGDKLKWRDETFWHBFJUPWESMSZQUKOYQDPWCVCMGFQXHYLCDTVTKYQVYQQMWCYKNRATIKERBCTJHMATUIYDZHXZBXCFDO");
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
    msg.setTimeStamp(0.526320524825);
    msg.setSource(17990U);
    msg.setSourceEntity(142U);
    msg.setDestination(42650U);
    msg.setDestinationEntity(35U);
    msg.maneuver_id.assign("VXQKELDWCHKJBVATSPPFUDAMOMFCLFNULWCCKODTHSLZGARVZESDSUKYZJFDZKBGELDYHHIIIYSCUADTZXOEUNGTXAVFNWTXDOMMTOWKLYEXUPGRHLOW");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 23891U;
    tmp_msg_0.flags = 0U;
    tmp_msg_0.lat = 0.142738459273;
    tmp_msg_0.lon = 0.369267839894;
    tmp_msg_0.start_z = 0.904522311029;
    tmp_msg_0.start_z_units = 62U;
    tmp_msg_0.end_z = 0.0605614662343;
    tmp_msg_0.end_z_units = 252U;
    tmp_msg_0.radius = 0.569700832006;
    tmp_msg_0.speed = 0.984236933317;
    tmp_msg_0.speed_units = 234U;
    tmp_msg_0.custom.assign("MBCADZWPSWZLGOBJJVOZKTDZQNAXZFYDNFTCAAWSPFHDDLVLDUJDQECCTXTQLTPXNSSQLYOAUHVQUJJTEIUIEUIOAOGFHXEVJHBDYMSVKQHRCRJZLKBMBMKAMUIPAKQXNFYRHVKPVMGIJHSFTTQPVZCNWQLPUWKYHBWNDBTWCBXAFGNXUOJHOGLVOLMQTURFIIKWFIEYAXHESSS");
    msg.data.set(tmp_msg_0);
    IMC::FormationPlanExecution tmp_msg_1;
    tmp_msg_1.group_name.assign("PTSGKGKKKWTQGZVANIZWHDTLRJXAJHONIYAHTPLNWNBSBFKIDWQFRCIGHXXOLZOZQSBWNFVEDUSFNYDWJJDQHTL");
    tmp_msg_1.formation_name.assign("RWQCEYPINFEHKRUXDTWQIVLCDZICAKJYJQZHMMIOLVYJTQFMBPQZSANAPNXNUZEYHCHTTXKRMYDKOQADLGIARNFPCAPRTSUIJBUEPCZMV");
    tmp_msg_1.plan_id.assign("PZOHYMXDOZMTLFIGKADUZNHFRWTVVACQGMQPBJSTYUZGMEAVUONGOZIHOZLPYYRXCQJVBRLXYNEEOOPUMQGBRMQFRLCGDPFXHFXTLQVSHCOMQNJTYTGIWGJUJWMPNURDWYBFQEBKVZQWOPKKKCEKHHSVWKLJNKRVROMUYGMFXPSTASLJNSAVDAENHWSFR");
    tmp_msg_1.description.assign("QDZMRHIWADYJNIUELRJRAWLPMKKHNPZTJFJYHTVDVFRDZSCTBNVRZXCEOUTNSXAYIMQKHOCEQOOQIGLFFOBHGBUBNAWXXKCFVULDMQWYKFIYGTKXNWUUEPVZGCVMIRIPJHYMFYVHGOFROGYSMLGGQWJLQZKAKBAHSPMPWBEXVWENDLSTIDMLRAYUJWDUEUITSP");
    tmp_msg_1.leader_speed = 0.284290487759;
    tmp_msg_1.leader_bank_lim = 0.979882706325;
    tmp_msg_1.pos_sim_err_lim = 0.264010210516;
    tmp_msg_1.pos_sim_err_wrn = 0.83354798153;
    tmp_msg_1.pos_sim_err_timeout = 37593U;
    tmp_msg_1.converg_max = 0.153036934915;
    tmp_msg_1.converg_timeout = 4966U;
    tmp_msg_1.comms_timeout = 21294U;
    tmp_msg_1.turb_lim = 0.359787401413;
    tmp_msg_1.custom.assign("SCNSOZJHBEAYHZJWBGQKWNFXQGETBWOFFYBSBLHVXVPBNDIKHCTFYJVURKXCGDLXDBQSJZEPLEUNGVFUURTEUAASVDEXDPTNMIATLIROEMIWKZPCMOMJGKMPVHGDIJUDEFRLDUCVSJIJUSQLRIGKCAZLYFXCNGFKWAHUVXJQESPRKMFYIMGDZHCYLUSRBOZNOCWPMVGQWPIDMTYRWWQJQHFZOXRIPRQMOYTA");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Map tmp_msg_2;
    tmp_msg_2.id.assign("BNOPIPKOJECXBIVKUXDJWCKHYZWCEVKIDRCEXBCGNDSTLBAEIWEMDPH");
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
    msg.setTimeStamp(0.732172207372);
    msg.setSource(46869U);
    msg.setSourceEntity(92U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(247U);
    msg.source_man.assign("KBBIPXBMWHITLTONGDPDPSTBPUQRLUBAFDGCBUSJUTXWKWAYALIJKPGYMZQNGHKJAGVCKLWUFJVEATKOHCFBOZZICQVHVAXJAXEWVAYOLVMUOTEOOGEJQDRSSJNAZEMLYXRNRUSYQTEMZRKWPQUYMQQSXEXTMGVBHCCCSINSADFZRWDVCNDPIMGPOHRJHLIXZWBZHIHGQBFSJKC");
    msg.dest_man.assign("QAXIKJSYDIGUKIMWBOWABQCKTSBUTBJIONZJSUBYRGLMZVEHOCXRQQIQHCCJHGBRNXEDXFTNCWKEUNSNHHANLXFIDWPVLFWPMKLTVMTMBDEITQGGUMAGEDQRRWFACEYPBYPGABJMAHYRVSW");
    msg.conditions.assign("PSWWLRUVYLTNZQSHKZIQBPAFWBKNQALTRLTEDQHVIMLSZXKLCQOJIEXRBCDRQYCBJJFOZJRVCSX");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 17U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0308072425003;
    tmp_tmp_msg_0_0.y = 0.808950953705;
    tmp_tmp_msg_0_0.z = 0.333838374736;
    tmp_tmp_msg_0_0.phi = 0.677406609706;
    tmp_tmp_msg_0_0.theta = 0.42424612668;
    tmp_tmp_msg_0_0.psi = 0.196989585977;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.517573626352;
    tmp_tmp_msg_0_1.beam_height = 0.19805723616;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.807654204231;
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
    msg.setTimeStamp(0.870225500442);
    msg.setSource(20599U);
    msg.setSourceEntity(253U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(173U);
    msg.source_man.assign("ZNTPYJYFGUYWHEJECMSPCVMIYFPPVBGMAQTHRXJAZLAUQCBIZPLJALGDMKMHRWSJCKRH");
    msg.dest_man.assign("UZAMNQFYPCAKEOWOTGGVNMHLBI");
    msg.conditions.assign("SUJUIRLVPQSIFWRUNXCXCGNTQ");

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
    msg.setTimeStamp(0.502186712393);
    msg.setSource(53724U);
    msg.setSourceEntity(99U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(107U);
    msg.source_man.assign("BIUGPRTBBMMDBMOOHHWITPXSDIYNHPGWPYWYMVLRHRWMJHLEKWJUUCXDGMRAHDTXIVBLQNSZSZAVAKTKLTXZMFWFKRIALWDLMQSPIFERBLAZBEZKEYZIKXGJWOCMUAOFVALYHUAKFWCXYEJTPGCGYEPCNNGCPOLQOSKRQYJOCODQBOIUYNCZVNVGRSBPUEBTD");
    msg.dest_man.assign("ZINQHSEHDRWPJYCPHNAJUBAPCMBDYISFKKKTQSRUNFZIYFQEVGOQJWNSTFJBJYZOXMORNFJVCBKMMAMEUZFSFJXVKVOWXGCIYDLXTUGLDMXAVHTTHBFGLRETBYBCCRGXE");
    msg.conditions.assign("OREMGYXFRXIBGTLUDVKCXYBEUHHYDIEPCNWSZUXZIWSDBFPRBCJFRSOJJEGWSEJKBQNIZUZONYKQHFAIOGNHDXRQUV");

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
    msg.setTimeStamp(0.480135031841);
    msg.setSource(22865U);
    msg.setSourceEntity(79U);
    msg.setDestination(36087U);
    msg.setDestinationEntity(160U);
    msg.command = 62U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FMYCUFQUTBDYZGCISBXKWJNAPKNMYCTMCUNWOXMPPJAHPKFAXQHNLDQWQJXDREXUXGDVGZVYPSBWOZVAJUBKAEHAJAVGRKOBPQPKQFWMEIHRLITPSAGMH");
    tmp_msg_0.description.assign("EYRVYSXIZKMKBMSYZTKFXZDQNNWEMBNRVTRJDMRWUNQXHLMFHZLQVOGFJILKJRQMIJVDCUDCVNKTPHKVSFFEZMEBWUOLYAHBZAUONYTKSFMRUSEWEAHGNCTSCGWADYHJQGTPRIEBJBCHVAWPYUYBQTQFRPDWLNHIDVFRUNOGAALJDCFGLPXXPULRXWTGWIAPTEIGPZOPESBWZXQDHLZIKCOOXAVIDEJCKQAS");
    tmp_msg_0.vnamespace.assign("FJHNMOZNGZAAIRHNWYUOLSGLPABDXXQKJBALXREEEPZPOAIMRTKIOCVNXUFYWFACZBHOPINMQVUKMDQUFWBQMYKKGSCQTKLLUHLBWLUMTREGWOIOQRJOUTSBBCHVPGEDFTFYVJPZQNXGDZHUTPKDLZFQJHNRVIWJCWTSMXPJSACZDIADNPMYTIJZXEYJFTDMDKCEGEL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IAYQALUUPJWXHQORNZSHPXIZDBYLHNYIQOYFLVLVBEWQGGZOFJENGBECDYKQPPKTMDRELQMUHPEZPKLUJKKTBURBEJXCNGXKXCSOCAYVWWNHYVAIJZVDFJURXAVGXUQVOSBPUDFBZTLVEGHRFRMLCTQSGMMGKDBADSSMJTOKMQGHWRMMFWZJKREWXWDYATIXILKNFDNBYYWINUSFSZTVTNEFNCSZROICVRP");
    tmp_tmp_msg_0_0.value.assign("UAONMBQKEWQADVRQIVPPRKPRYQANFXJXTSBIDYSWFEDBDZLTIIZUASAYJSNGYPXUETYWEOLENHYNBXQXGQMZPSTVKZEPKCJZJRPIFEHIUVUOGLKWMRFDIAXBOGJRWWAPXDILCWPUBWLQKQZCCDZGMCKTMGZCYUGAJRHNDSCMLYFFTONBDRMZHVJNETJHQKFUVCBXCTUVTLVOKUMWTQMZXAOHNX");
    tmp_tmp_msg_0_0.type = 114U;
    tmp_tmp_msg_0_0.access = 128U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JICASOVWXWKQQIQBHYJFRLBNZGQROGRNVJB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WMQTEVKUFCNDXUMMQUEPDCRHWKCNAFDYBBJAHPXQZZGXWAZTVTIBBPDLAVBBQWYZMSSPTWBZTSIFEKQYTZNGDKGLUJANENXJRHLYEOKSNYRJFKCTIHCAVQIJVZLVGNSHIFZYPKNXTPODREQJXWRWVVZFXQHRGCYUTOSMLRLFOPFAILBRXIUGEOOCPSXHPDCMLCMEFVAQFKWWGTNKISROEMAGHPJKYQOUZUGJGDOLSYNMUM");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 625U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.064588598021;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.572005475112;
    tmp_tmp_tmp_msg_0_1_0.z = 0.319717179726;
    tmp_tmp_tmp_msg_0_1_0.z_units = 107U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.653730657414;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 170U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HBMBQQIEEAWCRRDXUXNZBVNACRABKJLBPOXUQEEYGHDIGWDGMUZGPFISWWUGYSDZBVXNQOJJFHLMFPVWIOWZQPRTVEVXPXMYVCZGJIQFRSHNIHHLWMLJYTOFZESOKVGSNNCLNQYPOQLWRDMHZFCRGWIKCSDAMIKVISXCYTKUFK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 228U;
    tmp_tmp_tmp_msg_0_1_1.flags = 156U;
    tmp_tmp_tmp_msg_0_1_1.description.assign("ETOSDGWYZSDRGYMGKMFJGCHOFOLQRAEADMYSAHOFDRDRJXCGZYNNVLIHYTPNBJNZZCR");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.x = 0.680938868378;
    tmp_tmp_tmp_msg_0_1_2.y = 0.339401378896;
    tmp_tmp_tmp_msg_0_1_2.z = 0.9720691349;
    tmp_tmp_tmp_msg_0_1_2.t = 0.952733704738;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XCKBPFDGUVTCXXJHMTWWYNODDACBWZMQKAKYWVDASPOIXMRCVRUPSDJOYMWIYJLLEIBSCYFSAIYCRKHMLUHLTAKSFEHFNZZGVXRWMXPDPGANBSOXLIAGMUYNUTONSNQWQMLPVZEXFAXWZQDDJTVGSNIEUGLVRLIBUGBQPKTWKHQGKZLQEFTHEDCBPURAPDFWZTAZVQRJBJQMZQYBHEGRMKHXGJYSUEOFIHCR");
    tmp_tmp_msg_0_2.dest_man.assign("RZKSLQSLOKSGUIJWHZZPYISVSEWDOMVEJZFV");
    tmp_tmp_msg_0_2.conditions.assign("GFYOTQQYCWMXQWRPFHBXSCQBFWILLCCVNGXWOYVGWOZTHNGZJVONXPHYBQAAUMVWTYQUHYSVPSUENLVZEXHXAXKCKKLDRPILDUIADZYLJZWRKQSTFBIOFHDEFLJNQJELDPJJCAGOIFNACMERBDHYUUNETLRITSPFZGOZQB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VehicleCommand tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 230U;
    tmp_tmp_msg_0_3.request_id = 22382U;
    tmp_tmp_msg_0_3.command = 17U;
    IMC::Goto tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.timeout = 43317U;
    tmp_tmp_tmp_msg_0_3_0.lat = 0.762815990985;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.580616505243;
    tmp_tmp_tmp_msg_0_3_0.z = 0.604709629352;
    tmp_tmp_tmp_msg_0_3_0.z_units = 46U;
    tmp_tmp_tmp_msg_0_3_0.speed = 0.182216906243;
    tmp_tmp_tmp_msg_0_3_0.speed_units = 238U;
    tmp_tmp_tmp_msg_0_3_0.roll = 0.390622095194;
    tmp_tmp_tmp_msg_0_3_0.pitch = 0.440814865843;
    tmp_tmp_tmp_msg_0_3_0.yaw = 0.877344898665;
    tmp_tmp_tmp_msg_0_3_0.custom.assign("SJUFQXLRCWXJPEKZDODABWPAYGNOQIHNTKEEYCRIMGUZBTVRNZZMJSBFEASXUZCEDNYFNBZOWHBILNIJWVDIRRPZYOJRMSCTKJGSBRVVMCOJIJKRCDFDOLFWHXQNJLEZTYGTHXUZVUXMYMGFHQKYUWEFAYKFXGXDPFRWQISLILTANXLPRPOCWKAVMWQDJSIPIHLMSHDPYMQTV");
    tmp_tmp_msg_0_3.maneuver.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.calib_time = 11072U;
    tmp_tmp_msg_0_3.info.assign("VGPEKMKYKINLYMTUINFAKSDWMDDSCPLLCDOIOETWSJABJSCDPGKQHGPASPCHZOYCERCOUYNVQNORJYQQXGBNBHTWSRUBZGRJMXZBRB");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.576331363422);
    msg.setSource(2751U);
    msg.setSourceEntity(204U);
    msg.setDestination(36394U);
    msg.setDestinationEntity(146U);
    msg.command = 225U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HPHYJHLWMRCCZQAKPGFAARSBDYQMXXPCVOBHSGPLYBMGQKYYZUZAEFNFXBFNBBITVAXSRYGPOLKDERTVLXKN");
    tmp_msg_0.description.assign("AWUXAQXOXDUECMJFCDOBLWWUKHDEEEERRJYWQXISAAZDTLNCJPHKLMEMWYGDKBFZTLMUDTJCKTIZHQNRBOFCGHIIAJPCNPVTAIFGPYHQNJUL");
    tmp_msg_0.vnamespace.assign("HMZMRMZRRLJEPUVDYYOPULABNITIOTYEOPJXAKKZRPYPCSMFSTCSGLIQWXUUDNWPBZKBXJFOGYWXCGNOBSMERPZQWENLCITIQBDDZQXRVMSHKSDUEMZQL");
    tmp_msg_0.start_man_id.assign("UYCWPQLSIDXSMTCBISHFHNJBFKHUOUXFWONJEXLDDUBARPCTGMITAYJSLOIQONAPEEBNKVULYZPHKEFTAHYTMOZ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JLTSSSYGVNJKRWKQNPEACBTZUAZYSPLVCDWSKWOXXJKCARJZQFEWROMVQCXWCSMD");
    tmp_tmp_msg_0_0.dest_man.assign("VDHXDABEFWMRJJGKU");
    tmp_tmp_msg_0_0.conditions.assign("OMFHBBXRBZOCSZTLQBGQDDRNXPSJHJKIDZQCOHIITJWWMARZQLDKXVNWZVJEXBKTHSLHHGVUKWZFCYUCGEUHBNMIWJDRUFBMIHEEWE");
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
    msg.setTimeStamp(0.658312403634);
    msg.setSource(63800U);
    msg.setSourceEntity(156U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(65U);
    msg.command = 95U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VNTJYQFQVACTCVHKDBYRUIJOTRDGPWAPSMBPLSDFZHZQBWIUFVHTHJYJYSRUDFYRANSCJWXCYZWDOHOJVJTZUYDKMETIAFTGLOFWRAUSEZLXOLQMJZSCXLBHDUYVMOZNPTCQQSMXRNEURDZBGLUBBRPNWAWYVSCWJKGCELOFMQEPAEAXSKIHABNPCICYFKXLNGZHMDDOIJKGGTISEELLIPXGIHKROOKW");
    tmp_msg_0.description.assign("EJTKBWQDLFPCGRXGLIRNRNKASAZQUVRDJCUUKCSPIPHOVYGCUNXJXXOYQBZJASMGEMVRWFXRMZUKIQZXZTORDQHUBTGUJCWEHUOVDI");
    tmp_msg_0.vnamespace.assign("VBNNWSATPRYPXSMXYYRWIAZEGHHLTREKYGRVEPQUIWJNKRMZBWJFSGITZXLSPXQODAGTSVMULBTU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LYIGXHKADMCRUNJKRGFXQVXCZPDVHMEZWMXQIWODNHNJJVCBBHPTXJZSXORJAUPTQEPIQTQRPMMFDSJXOLTUSGJUITLWDOQHRUWLVBEGHCCXFNMHYCGXMGDAZBNOZSTUDBMOWGWZSOWPQTBSYVEKMOIBNEKBSPVLYBKLTPSFTCVZPQAOUNRZKNEKHAVKQAXRZVENUWKDGCDILHSISZGYGJWEVAAUPLYFDHFWTFCRBKENFJIQL");
    tmp_tmp_msg_0_0.value.assign("NXDONETZXTMJZHYDNQELVGBUMEAVLBQDMOYGMFXJOGMYAMSPWNIZCROUZKQVVIAIMZGFEGMXWGSIWDTFISJFKZNUUHOBRSEJKURBEAYPTDAXGOWHKEYATPXCHXCPJQAQOHQNUKSTNFEVJSG");
    tmp_tmp_msg_0_0.type = 204U;
    tmp_tmp_msg_0_0.access = 123U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IGHNGRFVPTUCXDHKQCHABLMPGOXOY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DNSIMTWDZGXOLXNUPMEAENSNKZSUEBLVQGFLHSYULXBIUVWBYYHRCMBUFQTYKDFZRHPDZLPHHFVAFPACITNRGHPOGIIAMLZBBEODOTXWQMVEUJNJRQNWXCLOMXVYOFPFHHXBRXUDESJMCFNLCMWYJNZWUASEPKOJVBTCFGDTDSWMRDJZGZOIVWYUGPNILQTQYUSQWKKQIVRAPOHCAGJPEKYISCCKQJBTRXVJZGZVGILJKERDTSHAWKEFTQK");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.958078132516;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.38553075807;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.362316283837;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 43U;
    tmp_tmp_tmp_msg_0_1_0.duration = 53216U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 59313U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 35236U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.354009247084;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UsblFix tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.target = 18893U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.437942649081;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.182776530027;
    tmp_tmp_tmp_msg_0_1_1.z_units = 85U;
    tmp_tmp_tmp_msg_0_1_1.z = 0.608079932315;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KWFVSTQVHKBBEYKCVADCDVBTIYNOLYSNMOBDQYHQFLEMPTJRGZSWERUSJGQOHNNMITTUUXWTZJAAMSHZUWYNWRFMIEEJUMFLRTULKPXIMTCDWOHOXVKWRCMXIYCQRVEESFOGLNWSMUPGYUJQLPHZFB");
    tmp_tmp_msg_0_2.dest_man.assign("YVVWFLONHTZJVQLHLLZJUUJWPJRXFRRBEWMLTXPJBMRPZXTUWYWHZFFQUVCNDAWIGSVOCGNLDOEZISKYFLGQZKUMGTXFSWCPIGGLMDMIKBASHQTARPSVHPDVEQYOUGMYWKKRCOCRXYCENQVSKZTPHNNUWQGAIEJRQAXPDFYXDADWUZEYHDNBJDOPGIKUVNXGEKCISLFOSBRRMTCMBEOFCYCHPQXASIEJBNTOV");
    tmp_tmp_msg_0_2.conditions.assign("IAYDIHNMRONOLSOXZOGKEXTIRVACCWSLLPJTPPTCWABZGRXSLEPTAOLDSTAZWYSRWHXOFDJDIBQUCLHNTOUKFGBIJCTMRQMZKOCDKKWBURDGRNPHLMFEHBWCXKNVFHTDICFVSGAJAGRGDWNJXVEJPEYAANEHBVPKQYBLUVYMPTZQYDMQQMIQXSQKBJZUAPMNOXPSZVKEBWFLUQCUIJYZVNKEFUYIURMVTGFWZQHWSUFEEFYXYNMDZJO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Acceleration tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.time = 0.255889855509;
    tmp_tmp_msg_0_3.x = 0.504715859433;
    tmp_tmp_msg_0_3.y = 0.920342051947;
    tmp_tmp_msg_0_3.z = 0.820316439084;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Map tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.id.assign("NTPXZXPZENAEJYDRLKMLVKVKWGCINBNJHAGOYVAXCXQRWSOTDBYLOGJPCUOKQOZTKSYMJHURESRMJZVTFIFIGGELMITNFQRFEDQCFWXLIGAFCTZMVUSBLWTXNBICOJTDYJEKZHACKWDWMHFHVLBG");
    IMC::MapFeature tmp_tmp_tmp_msg_0_4_0;
    tmp_tmp_tmp_msg_0_4_0.id.assign("AWWMNKHIFYIGOBDXCFFAXJAKOSPRIQBSJVLJZHINLCONL");
    tmp_tmp_tmp_msg_0_4_0.feature_type = 93U;
    tmp_tmp_tmp_msg_0_4_0.rgb_red = 144U;
    tmp_tmp_tmp_msg_0_4_0.rgb_green = 89U;
    tmp_tmp_tmp_msg_0_4_0.rgb_blue = 234U;
    tmp_tmp_msg_0_4.features.push_back(tmp_tmp_tmp_msg_0_4_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.26095156735);
    msg.setSource(16345U);
    msg.setSourceEntity(197U);
    msg.setDestination(39210U);
    msg.setDestinationEntity(122U);
    msg.state = 192U;
    msg.plan_id.assign("HZDBVYGRFDJKZEOLGTJFIUWVFNWDTXDVUKLTWNXOKNOJAKWITRPBDLQWVCYFXHYMVBBJMUHFGKBOYBQCOHYXCWEIFATRXSJZANUCLXKUGFMNHSZC");
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
    msg.setTimeStamp(0.377177862451);
    msg.setSource(5010U);
    msg.setSourceEntity(249U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(179U);
    msg.state = 71U;
    msg.plan_id.assign("ZWPVVMBMDSFJCSGVXPZHKIFSIMWLRGCMRNWONDVJZCUWJZIFGHFAAILRYBJUIGUIHOAKQGJKNITY");
    msg.comm_level = 10U;

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
    msg.setTimeStamp(0.291604041364);
    msg.setSource(51394U);
    msg.setSourceEntity(216U);
    msg.setDestination(41984U);
    msg.setDestinationEntity(57U);
    msg.state = 17U;
    msg.plan_id.assign("JXPCCUJRAC");
    msg.comm_level = 65U;

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
    msg.setTimeStamp(0.14724038673);
    msg.setSource(21972U);
    msg.setSourceEntity(58U);
    msg.setDestination(63493U);
    msg.setDestinationEntity(138U);
    msg.type = 202U;
    msg.op = 44U;
    msg.request_id = 14536U;
    msg.plan_id.assign("GDJTVUEKDQMYOUZOMPRNWFNHTCNBYDCCZZAFUDMVSFBJQBXXLPNVSIAUYQDSYRBDNEHLMXSOXKZIAFEXWHHLGFDDFORXHQZAQFTUBCVTSMLPXGVJRUKPCHRIUGNNASXLKLWQKCBYOKCEYVJRGYWEICFSVARHVZAJTTPSJMQPRFYIKFMKYWHNDOTWD");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26646U;
    tmp_msg_0.off_x = 0.0738080573548;
    tmp_msg_0.off_y = 0.316270773371;
    tmp_msg_0.off_z = 0.724194552706;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DHZFFQHYBIGALSYCKZWZURPITKWIHXQHQKBTUFWLFNPEMNSDBEWYZSFOLLLHGNUARUPPGRDBWYAETIGGJMTNULUJXJBVWHAOESSVTRCDEGTBXPTDLJAWABCWDDOCXJXKYRCVGWANSRPQNOTGSSYQJFFHEKJZYYMCNKIMEZVPVDHMFDYUOXVYPQLONQJXLKIMUTMJIXVNFXCBKAGVPVOLBCBIUOEZVAKITSJHSZFZQMUWXROQHAPCEDRMGNCZM");

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
    msg.setTimeStamp(0.624047201446);
    msg.setSource(44526U);
    msg.setSourceEntity(68U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(115U);
    msg.type = 142U;
    msg.op = 92U;
    msg.request_id = 38760U;
    msg.plan_id.assign("KBJDUEWMAVZADNOYEGCBZO");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IPLQXRHWOFYZJFJTFGSGEPYITBIZVVSGFDXCPWXDBPMKYZPAYESFIHQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZCTYKRIGYQGLQUSTSSRAVQGBHMHCCRCJDWCTBGTUXDMCJFJQDVUBAEFUHDENXBXWZWVKWJERFRRKRUFECOTXKBHAMOPJHTBWTHZKDISPOFEJLDSPRQSWSIQBQQWUAYVIRLDKGIDGLFSSLMXJGLQGPACVZOSEMYEEIXEVAPXAYBXZCITNFOFOLIHPINNKUGAFUMUZPTNLZMVNXW");

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
    msg.setTimeStamp(0.674944472174);
    msg.setSource(45323U);
    msg.setSourceEntity(223U);
    msg.setDestination(17463U);
    msg.setDestinationEntity(171U);
    msg.type = 139U;
    msg.op = 16U;
    msg.request_id = 59471U;
    msg.plan_id.assign("HBIYNKIEFPJEZQATHTQWVXBXPMXQOSEBDGUAMSZMZRIYRIGVPJBCVKVOOJAMJXQNKGGFQWHIYIZWROUCMYQHDYJMTAUIRFBENNFBZWHRRVUWCAPCUGMLPLYRQACNFDDLKCPFHXGZOOSOLYYVBGAWXMKCPEXDRSFTTQUSHBZGLNJCVTSDIJFLZXZXFGHUSWCKNBIFJEVDJHKLG");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.061438936347;
    tmp_msg_0.type = 76U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JRECAHDHSMYXSVKFUJKBNCVHHVSVIVWTTFBVZWXSFDUWXNTAABMXQGDFVYWIKZIPIBKCWSYBCOZZMKAZMGKILTLRAXADXAJHCCGYSWOVTZQTJHCBUOVYCMWHJRRQYEQOPBPGDEUUJS");

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
    msg.setTimeStamp(0.626094128936);
    msg.setSource(7475U);
    msg.setSourceEntity(3U);
    msg.setDestination(7645U);
    msg.setDestinationEntity(16U);
    msg.plan_count = 37049U;
    msg.plan_size = 3405679423U;
    msg.change_time = 0.645205791077;
    msg.change_sid = 58534U;
    msg.change_sname.assign("HOPRKEBAKHSYZPGJYPVTTATYESXUFHHDKQAVDKMCPQGXALPZFMPNAFTDHLSXFLVMUIFIYRIPRQBZGSCCCIUOMERSILKQSUQNAXSROJQCDEZUFZXOZVMBIQOCJAVSJXZEIMHJNABFDCQRLZKRGPBXURYLEPMEMARDHLNVIVWNWDDLZBWVNTHGQAFXHKNPWODUUECRJQSIVTUWFYHNJOWF");
    const char tmp_msg_0[] = {96, 85, -103, -87, -26, 69, -124, 40, -50, -121, -14, 109, 120, 26, -89, -85, 30, 11, -41, -125, -40, -108, -19, 78, -21, -15, -75, -68, 97, -81, 116, 21, 88, -98, -113, -17, 108, -46, -100, -73, 52, 59, -110, 75, -58, -101, 43, -118, 107, 39, 62, 118, 21, 18, -108, 72, 0, -68, 23, -82, -77, 122, -114, 2, -70, -111, -103, 55, 124, -87, 79, -41, 71, -70, 3, 24, 124, -86, 17, 5, 103, -72, -74, 80, -122, -45, 0, -57, -43, 83, -21, 102, -123, -28, -45, -39, 98, 33, -89, 101, 43, 87, -73, -45, -16, -74, -37, 64, -51, -127, 88, 58, -59, -17, 28, 106, 11, 68, -118, -25, -46, 73, -36, 86, 40, 39, 124, -56, -125, 94, 12, 66, 48, 0, 24, -6, -42, 18, -117, -66, -113, 114, -30, 20, -21, 114, -90, 31, -6, -100, 36, -70, -109, 22, -31, 52, -53, -47, 30, -120, 0, 126, -108, -86, -24, -49, 61, 73, 58, 33, -123, 17, 29, -88, 28, 93, -106, 25, 89, -109, 87, -71, 71, -31, 59, 42, -77, 67};
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
    msg.setTimeStamp(0.10148498602);
    msg.setSource(19627U);
    msg.setSourceEntity(147U);
    msg.setDestination(33147U);
    msg.setDestinationEntity(246U);
    msg.plan_count = 48368U;
    msg.plan_size = 1512852292U;
    msg.change_time = 0.895267658698;
    msg.change_sid = 58662U;
    msg.change_sname.assign("WTDREVEKGUXFLQNAHXSIANJJXVIRJHCHPJCHJIHUWRDLCYCSFPQYXVRIHATAMLKOEOAPODQGKVCKYJMSFUUGWRWFEOCWAQGSURFTLCYLESBXHWYIEFVTSXVJWLOGKSAYTWDRRMKFQNBBNTJTGADYMKXPSZYPCBJMNQHGLUNBOZMDPXPTZJSNSIVZNIQETUIEKUAOXCBRYGTMZDQFPWZMVLPBHOPMFMDLGYKWEQZGD");
    const char tmp_msg_0[] = {47, -45, -26, -9, -24, -5, 105, -78, 98, 0, -120, 124, -49, -96, 44, -89, -30, 20, -68, 43, 118, -109, 10, 122, -32, 9, 86, 99, -65, 91, 8, -107, 115, -74, -71, 27, 88, 22, -3, -72, -71, -27, 105, -89, -119, 52, -111, 7, -18, 111, 100, -115, -118, -128, -100, -123, 6, -96, 118, 19, -29, -39, 123, 51, 98, 82, 121, 103, 122, -82, -95, 62, 58, 96, 68, -60, -51, -59, 29, -98, -60, -112, -12, 122, 110, 22, 102, 101, 62, -127, -25, 114, 28, -51, -109, -7, -44, 14, -37, 112, 60, 14, -121, -105, -65, 76, 33, 118, -31, -49, 102, -90, 100, 50, -18, -89, -55, -2, -72, -99, 67, 12};
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
    msg.setTimeStamp(0.7680615847);
    msg.setSource(51296U);
    msg.setSourceEntity(117U);
    msg.setDestination(18006U);
    msg.setDestinationEntity(27U);
    msg.plan_count = 2544U;
    msg.plan_size = 3790402645U;
    msg.change_time = 0.965611221433;
    msg.change_sid = 55309U;
    msg.change_sname.assign("LYPJCADBXQNRGOFDSKZTPJTMZXTOLSAYBWCEYDNTYVTNCPKBQYVUWKEPYMGGOCZIDQCYXTWWJSCLGLA");
    const char tmp_msg_0[] = {-7, -90, -19, -6, -36, 1, -43, 70, -21, -46, 27, -104, -114, 100, -75, -72, -80, 40, 41, 87, 80, -121, -3, 112, -89, -12, -52, -124};
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
    msg.setTimeStamp(0.310296234023);
    msg.setSource(56556U);
    msg.setSourceEntity(163U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("DIRWJGZJJSPBEXCEYYCL");
    msg.plan_size = 37679U;
    msg.change_time = 0.084014899501;
    msg.change_sid = 409U;
    msg.change_sname.assign("YWIJSJJOUMCRZCXQHJUDFDFKZAXXWVZMIUUYKRIPZURRSEQMMCNJEARFQMMNHTPLCKGDHGVNTSHGAB");
    const char tmp_msg_0[] = {84, -100, 59, 6, -1, -86, -49, 17, 67, 25, 101, -109, 72, 25, 11, -86, -51, -20, -29, 26, -63, 82, 1, 57, 62, 39, 45, 10, -14, -9, 122, -52, 16, -35, -65, -85, -58, -64, 69, -51, 125, -34, 67, 71, 37, 107, -74, 64, -36, 68, 74, 1, -19, -54, 49, -107, -36, -54, -31, -45, 10, 47, -88, 77, -51, 80, -95, -68, -42, 39, 81, 99, -10, -2, -95, -58, 110, 118, 120, -117, 46, 74, -96, 62, 74, 40, -74, 84, -7, 2, 66, -17, -100, 16, -64, -35, 13, -96, 81, -105, -85, -3, -23, 55, -17, -52, 49, -90, -30, -63, 121, -85, -33, 7, -19, 16, 122, -31, -58, -42, -98, -102, -1, 49, -81, 83, 32, 95, 94, 104, 91, 69, -26, -16, 111, 59, -101, 51, 26, 122, 80, -96, 95, 43, -60, 26, 13, -31, -100, -74, -105, 126, -99, 73, 15, 126, -101, 113, 26, -108, 123, -96, 32, -103, -106, -28, 75, -25, 49, 12, 33, 10, -123, -45, -15, 90, -70, -24, -78, -89, -105, 62, 107, -94, 66, 88, 95, -61, 125, -103, 107, -125, -30, -57, 50, 17, 55, 39, -85, 76, 22, 24, 82, -5, -117, 38, -88, 22, 17, 121, -126, 41, -115, 101, 40, -117, -27, -115};
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
    msg.setTimeStamp(0.835063404158);
    msg.setSource(1754U);
    msg.setSourceEntity(186U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("UKDNZLTOLBDGKOESKUHFQFDWZUCEMRQMXFHIXCPSBWFCLOGENSMXIUJSGGEHCEXQYKOQXKRTHXMOYDBPFEDTZAHXHABZCLETRVIQJNACVOUNAJ");
    msg.plan_size = 19107U;
    msg.change_time = 0.0129032418929;
    msg.change_sid = 17909U;
    msg.change_sname.assign("BFTFRPQNUVVUVEEWTGZNAIGWENDMPKXFCZSGBRHMOVUCJQWIVHCPWBLTFZJYKXRFPDQLCOKLEXLISFNMUDMHYBMHGYXFRYNHO");
    const char tmp_msg_0[] = {19, -70, 25, -113, -102, -94, -18, -100, 73, 115, 91, -53, 125, 79, 29, -33, 108, -92, 76, 14, -28, -24, 50, 20, 35, 71, -88, -2, 95, 77, -100, 24, -109, -61, 18, -105, -38, -104, -32, 26, -75, 108, -60, 93, 120, 35, 80, -31, 100, -81, -60, 74, -47, 44, -75, 103, -81, 18, -43, 115, -13, 19, 16, 104, 7, -73, 3, 65, 25, -106, -5, 120, -74, -28, -62, 88, 51, 60, -9, -37, 78, 108, 113, -67, 92, -33, 79, -105, 76, -12, 86, -35, 67, 103, 93, 56, -12, -80, -34, -56, 104, -78, -88, -117, 32, 81, 62, -78, -95, -42, 110, 40, 4, -46, 112, 9, 0, -90, 65, 124, 91, -109, -81, 27, 0, 59, 50, 79, -128, 48, -85, -87, -57, -92, 61, -3, -48, -73, 57, 113, 75, 29, -90, 69, -100, 39, 51, -41, -58, -67, -38, 46, 1, -90, -11, -125, -38, -84, -29, -96, -105, -102, -31, 47, 79, -14, -101, 35, -107, -32, 94, -98, -114, -75, 107, -126, -86, -112, -62, 49, -67, -40, -20, 34, 51, -62, -60, 28, 78, -34, 89, 77, 35, -17, -118, -123, -27};
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
    msg.setTimeStamp(0.899211790909);
    msg.setSource(49682U);
    msg.setSourceEntity(136U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("WQWWXOWVOZGEIZCTTRHEARDHVECHJLCNEKEAQCKYGPJJZECZJVOQXFNMMJPYGLKEGWWDQIHZUYTBQCUDXKEMNSZXNIUKQKHXTOXWTSJDRWMFYLDMTLNPXDFSIIAETMBBTIHSLUGFSNYUFHRI");
    msg.plan_size = 27123U;
    msg.change_time = 0.607824427168;
    msg.change_sid = 30641U;
    msg.change_sname.assign("UOOUKRANJJCAEKETKNHVYIPNORCGKFJOMHILQMWXXSBWVGYYTZDNUVYUTBVWUSZSQDSFFXVICGIBWHASJLLEIPTGZAECKDBEQJLBMVTNHORCCFLWUZTFOTTQGYQHGJNWZMKPUNOWQSZFQ");
    const char tmp_msg_0[] = {1, -18, -30, 43, -100, 26, -78, 66, -1, 10, 91, -126, -18, -49, -125, 20, -23, -36, -111, 63, -70, 9, 61, 68, -12, -9, -62, -54, 122, 61, -110, 54, 68, -16, 109, -42, 20, -63, 99, -44, 76, -110, 115, -105, -90, -84, 110, 44, 98, 58, -19, 91, -46, 104, -28, 27, -13, 108, -59, -38, -78, -3, 126, 15, -88, 62, 71, 97, -82, 40, 83, 99, 29, -72, -49, 95, 0, 20, 43, -99, 68, -80, 15, 53, -119, 53, 58, 57, 42, -94, 115, 70, 123, 30, 111, 20, 74, 29, 112, 69, -83, 2, -102, 63, -27, -5, -48, -106, 51, -88, 25, 32, -126, 64, 108, -84, -45, 97, 31, -122, 111, 105, -125, -30, 57, -9, 111, -28, -99, 111, -61, -35, 59, -46, -10, 49, -61, -49, -127, -22, 31};
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
    msg.setTimeStamp(0.343931229777);
    msg.setSource(54211U);
    msg.setSourceEntity(93U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(98U);
    msg.type = 116U;
    msg.op = 222U;
    msg.request_id = 43037U;
    msg.plan_id.assign("ZXTGZHNPHIYTQAWPKTVOPNRMQBDFDQSLVASBCUGYHVGTVYMYYOZVRABBJCPBSNGDRXRENWITAOEPLYZXKNBZRLALQGOLLSDIZIEXMJVQDSIXPOKHOZXLBKAQUWGFOSNXWKGKMPLDHNGCHHPENEILUUFEJCZYTPMUYBCAFJQTMAITXWKCYHHWCJHWZJZOSQVJBUEWRRDQKMFXOBIVFMVJRUANLSSNKGFCDIFQD");
    msg.flags = 27446U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MLWTEYZUBRSFMHYQKPKWYPNNBJOUOEMAKQZCCRKDMNSVVXRHHTCFBJVDKAPNZEODWDSRLGRVUPHU");
    tmp_msg_0.description.assign("JOCAAOGSRCTCWJOLGOCEVVFOHNTGLDSJLNRABYRWKHBKIPZFSWSQHVLRMFITSYFKGXUCWIPQZJHVLHCVIWPHYGFDXRLJZGUBTEJHIZKTUDLUGKES");
    tmp_msg_0.vnamespace.assign("MMKLSPBKRMAFJJZBJHPCEWWOGXRIRLZPDSVLVCCWQGYDFRUWYICNEHCVGEM");
    tmp_msg_0.start_man_id.assign("OBOMQKHPLCJHNQIMXFAAHCFCPCWFAGESZYGYQKLJRQFUFBEVPSGFNAKDWCECUIJJDPISSZYGIVAGBHRXLXRSFOLZQMXYMIQJZSNEDCHWSPKURNVDIZTAMYNDXVHYDPJDGMBAYTMHEVVZFUKEJRVVUHUTPROGCAUZBXCSRZTTRKBIALMYCTHDFLXVOMPEGFQXDQWAXHUWPYOWEPORKKT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QSXPBEKLYDOYHNQARALNEPXQCTNXRLNOVJMOHGDFWHRKKBKPGSSVSADCRTCFRMTHFOUUOKEGBJBJQIWGQUVFDWRFJFTCUAZLJVFYLMYTVJWXDVZELWGPINNBIIYNYWGGLPAZBKUHROUAJMKCGDWGCKXETSUENYHVXPPHXSLSBWRMBSUQGFTDVYFZZPEHSBCADIIZO");
    tmp_tmp_msg_0_0.dest_man.assign("QJPXTIASGXKMUKFDLQUNKLRHRJCERGAOZJVVUMNIGXEAGBGAFMZVUZFWIICMAIEUJZHTAQYJOXHWBVFYEZINKHQFBLPYKADOCINWSBFLJSWPYMWWFWDKYQORCCGOUPCPSYFIVQLUKIBTYKCXJHANMAKJNNCPORHBBLX");
    tmp_tmp_msg_0_0.conditions.assign("MCHDCJLROYJILTARBCHRWKUAWVFIKMVESTWJFRJGMZBVYGTSOOYHPCMTVEGLPFIWAHZZDCFZOSMYBURDODTJJPDNKRHDEIQDYLPGWRJHSWCITTXJXPEYWMWENPLATMVXGNXLZNKOERPNFPQVQUFNAGQNMHECKKASEXZKNUBBJGVTULJVQYSOUFMBWZLZEKGBUYXRIBHAYSGDCSUXAXXCUQEKGSPWPZFHDAIOMNCQQXHZFIVUYONIFQAORKS");
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.191498999758;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 168U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("BNRDDYOUJRPLGOAYKPHRCJLXNHJPUFAMANPBBYVLASWEOYQXWQLUZRKMLKFJITCQV");
    tmp_tmp_tmp_msg_0_1_0.description.assign("AKVLRKCDDMWBDXEFTXKLFNWUOSNXHBNRJUWMYANLXFMARJVY");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("DBACLGBWQFVYSFAKOLFKFRXQUKNPWSZFVUIGLEOIPYUUDSGEBGAMEBONZHNBWYEPNESJRLNXLIIFVWPEHNQCAOPAJKGPZXDWRHOQAUBCATAUJHQLKXDKZQZGHJPMIMKSRYVSMZYONTRMYJYZIRTPIHCTVVDFTQOMMMZLWHRBVTWEXPWMLTDXRYHFEDZMFOVQQVRNXJSGPCJUSTBOYBUVHCCNFGGCXU");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("SUNBZQNZTKEJRIDVLJFHKVOOVSCDCKOKSIXGZHOPMXAVWUJEHFOOLQYXKCCAPRUZPGGWFITIJQZFLAHJUEETQBUZBJ");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.maneuver_id.assign("HGMYFMWPXBYLUHXUDSSSDNPKAMTXKGTKJZ");
    IMC::Goto tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.timeout = 33228U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lat = 0.144101906225;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lon = 0.769359361139;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.z = 0.80608733833;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.z_units = 96U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed = 0.457990704802;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed_units = 96U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.roll = 0.409129633592;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.pitch = 0.686135599011;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.yaw = 0.0162560847186;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.custom.assign("IVXIEZMHQIZCJRAUORACDPRSY");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0);
    tmp_tmp_tmp_msg_0_1_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsRx tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source.assign("AUCIHXPXFJECAXOACAYILTHMTSYJMLVXVJWZEVTRXTJQBYSERFTNGPGAFBHXXYLZNKLWKRWVZQIIGDYMJWDQEKOYZVRHLPDIABAOBUUGHECQMSBMUPHHTUUPTPBUQOSJSQWZGKKLFFZFAWVDLUBMXQFCAJNRJHCEXMJODKLZSVBHSMCFPIYZIYNVNMRG");
    const char tmp_tmp_tmp_msg_0_2_0[] = {7, 20, -76, 36, -100, 5, -79, 25, 34, 78, -113, -122, -36, 88, -94, 40, -83, 36, 28, 35, -89, -37, 116, -111, 50, -29, 78};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRDQPUCTVSPJHVDSPKKDLPRXTWIAOUQRWTXRYZYCFHGFCOEGLZOMYLYBSHBQKJAOVXLTPJEIIWZVUMWTVHBRAONRAHDUHBCQUZSQDDVJMGFJKZERGUEDWQTNCXIGUSRLNBNCMFNPKJYOADHPXZMLBYWXXFLCJIMWUYKGEGZVAPZZBEKEERJFVOSBNKYQIIMSJHKD");

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
    msg.setTimeStamp(0.0990551265478);
    msg.setSource(8601U);
    msg.setSourceEntity(74U);
    msg.setDestination(2193U);
    msg.setDestinationEntity(120U);
    msg.type = 199U;
    msg.op = 112U;
    msg.request_id = 30787U;
    msg.plan_id.assign("IQDPAAGKHHYCJUTUXJOWNVHVKPATYTZEMQCGELPDXOJCCDVOKRWHWUGXHJURBJASVIJZOKDFFRBDQONTESONZYLGYCBNHBZMKEZEFMBBXIMDQOCIPUYMXDLUVAGBRBWVQXJIZXHGGYBIOTQRUFSQLNLLZNOCWRAGCRJHYI");
    msg.flags = 28803U;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RKITMKMVHLENALLONQEFOYZBAFYLGQHWJFHNWUDQUCLAZAPHOTMYPKWBKXPDOBYWRRRLESFWZMZWXSAVJQOUHHIENMSKZENT");
    tmp_msg_0.value.assign("SRGTCCPPEQHVKTAZAWPTMVKFDBHXUFJSNZSDBEYGOJCRXMBYWVWSHNRZMRPXZEXRGYADQSMEUINVAIBOYGETP");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HHBZPJNEZZMZLASFTYXUEJCYWUVRHKAANHGQUIISTDDVOXOQXPJDKTYIVNHKIFTEYVGRXBDAGQMRUIRGHXTKDDDXBCIFUQKDKXWPEOJMKLCMSMDYTSEZIHAPBTCMBOZPLLNOSNHDONNAZLBOFHWTXPSBPCCGMFOZPXWQRNAGUYZNJQSFACMKAQJVBHV");

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
    msg.setTimeStamp(0.674723925452);
    msg.setSource(27822U);
    msg.setSourceEntity(49U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(19U);
    msg.type = 120U;
    msg.op = 37U;
    msg.request_id = 4055U;
    msg.plan_id.assign("YVQPQTHXRIYKBZHGXDQNELHXRHYGWEEGTPSYCFSFBAEBVZATLKMMWWJFJMJXSUZZDVLLQIVWWGBCSKVOCUUYNAQILHYEJYLPHP");
    msg.flags = 59451U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 93U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OMVLASRKIODPYOTGHIBSEIJZINWZWFHBMZKTNGNNRMGTMFGOLHTZRSUVJDDCYUYFCXSRQRCDVTHLJLVGYKHDUWWPPYMPWNBNCEGXCHQRUWKIIJEWXLTHQNWUZDZSEQOBJIYEVWAXPCTRUKDCPXXOEMKSDAOBZQZCUQQEPETCFMADYUKXHLRUHOYIXXVGKTVUFBJOMIEYJBWFRMPLSRFSAQTJLPZXMAALGNJBGNEBIQKSDOVKSQCAZFVVLBFAG");

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
    msg.setTimeStamp(0.127965531257);
    msg.setSource(63998U);
    msg.setSourceEntity(65U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(107U);
    msg.state = 16U;
    msg.plan_id.assign("LRZUAPOTOLLVGSVLGRKEGLXXGUKWJZDYOQHOUOUWITCETJNVXPURCEUCVPELTIRHNBNXRTAIQNHCOQOWNFCBYBDQANASHMUDPSOQPWHZKFDUFFPFERCZORDXTGFVXMXKESBTVPJGWYWHJTIRIAMLO");
    msg.plan_eta = 1194498768;
    msg.plan_progress = 0.682454367777;
    msg.man_id.assign("WZOVSSAIVGHJTWJHTILCYEDIMOYCLRWAAQQKXOXRRNOSDTENHHEQJXPOXFNLBJIDLVAZWBYEPPPGXDRQBEDGOEKKUFOKTWRJCACZOKWTBMJHMZUYDTPNLYAQSINULQSSQQKMRFZKINXVRALUMYFLFBPLXSGPCRDMFNBRGDGTCVDUGKPPSDVVIJMHXILWCEYNOMHOMSEGNKUEIYHWFYXXTZKUSTWCQAVGPAVUHBFUGYUBMZZBEFJQZJIWJ");
    msg.man_type = 41710U;
    msg.man_eta = -248675099;
    msg.last_outcome = 221U;

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
    msg.setTimeStamp(0.918906826361);
    msg.setSource(36280U);
    msg.setSourceEntity(204U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(116U);
    msg.state = 187U;
    msg.plan_id.assign("GRVSNBJLLJPLDNDYREMRVPCOQYAHNNLEJMCQECXBLSWYCYAFUQZXXKEEDVUDMFXJFHNIHHVRLUQQYXATKHQILWWOZXCKSFSDSGBHWJFOOREMOOINTDKQSUPYWXKLCVIOQXDIPUPWOBKVWBIERWAJQTWL");
    msg.plan_eta = -914190909;
    msg.plan_progress = 0.293704473412;
    msg.man_id.assign("UXUQUCYMRGWDOQVEJBCNKIABTAAIKZMBLRVSPBZDUGW");
    msg.man_type = 63234U;
    msg.man_eta = 278360604;
    msg.last_outcome = 229U;

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
    msg.setTimeStamp(0.0154605044738);
    msg.setSource(31148U);
    msg.setSourceEntity(128U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(156U);
    msg.state = 249U;
    msg.plan_id.assign("PSQJSXYCQKNFPOUFNMZWZNMDBCDGBUXIVSJAHOBKMAQPPOJBPGMLXYUMVVXRJDINCMJYDTTCBICGATHYRVHSFYQIJP");
    msg.plan_eta = -1476757519;
    msg.plan_progress = 0.209644051097;
    msg.man_id.assign("ANTWLMFNGELUPLHOHSYYVBFEAEYWDXYATIMVPVNZUIQQXKSJRKFXJCVEHHKGPRLSSNLWSWVKJEUNAELJMZQLJGNIRRYOGBSOSOP");
    msg.man_type = 55984U;
    msg.man_eta = -647744773;
    msg.last_outcome = 122U;

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
    msg.setTimeStamp(0.378128516653);
    msg.setSource(13344U);
    msg.setSourceEntity(173U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(197U);
    msg.name.assign("YPHVCAXSWQWFGJGQFEJLEBBSRYIFGUJUKPMOXWQHFICZNUCGXZ");
    msg.value.assign("WLFACRNAMGHZTIDWRHFKFSOEVQFTDKSYNYYOFPCIJNWLOVGYYNJUEDWALKQAKRAQZRZRIRLZLNDXTLSECLSZNRYKVVGERBIREPQHBYEGVGHJCPLUKZSNDXCKFTSQASXEIQNWMGJYDSPWQZGOXHBTUXYDBUPJTVAKXJLUGQXEHCSPDLCHHXAVMTXZJPGBJPFBOQUANMBBAVIZXCTCMOUFUIMD");
    msg.type = 21U;
    msg.access = 225U;

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
    msg.setTimeStamp(0.370628675499);
    msg.setSource(20198U);
    msg.setSourceEntity(165U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(42U);
    msg.name.assign("VZXNHOKSLWCLDTHOTXKYTRUEVAIPSWJEWSHWSEBNOXDRNHRLGJAXSNUWNTCSMVIIFRJKDRIZJTCCQLUEQVNNEPRAYQHIVCTMFMSBHJEWTVGOBOOIEHDUMRBMNKFSYJUEKPOGYYBHEUYJZCCARXIAKKFGGVPBAZNZFSGQLTULHRLTLYYQDXIDXBCSGQQBDOPAPZGMFVWZPWYQMBZBP");
    msg.value.assign("CHKNBXEIOPAPWRAUPQR");
    msg.type = 14U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.398407390516);
    msg.setSource(34673U);
    msg.setSourceEntity(24U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(147U);
    msg.name.assign("UNGEGZUBGLGCKFSMJFSEJFEYIGABOOTKOHYYBCMEHXTDXWKHTIVNPELBWALQELISCJUJHEASWWZVBLWJPE");
    msg.value.assign("ZJBBUCIDUPOCSKVLOFLHZEFYSOEPPKGAQILAMDYMYGJYORLYAWCMFEVEBRKGZELQDVAIOGUNRRZHTNIXXCQJHHCXNTAKRCKAEDPXXNJFYDFZPOQKHFKRMUQXXREJGLKJPUQPSXHLHGDJFRSBFHZMBDHTRPKWYUVNLWAPHWLMECUODBUYNEWSWANPVLIONMBZI");
    msg.type = 61U;
    msg.access = 151U;

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
    msg.setTimeStamp(0.140261680105);
    msg.setSource(31706U);
    msg.setSourceEntity(149U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(159U);
    msg.cmd = 65U;
    msg.op = 100U;
    msg.plan_id.assign("SMDRCLAQDXBUYQYTNXQQFPXZENUVCNLGVDIGYZHZEPWUMHYAAJHFHNWIYPVJMCESBTNQVULRCUYOFLMGOTWHRFCSUPECFQCKKOVAOHWENTRRVIJDJKSYZGOJXLVUOOXZPGTKBKSDRKEDQNSIBBXESMFGIREFRNPBYCOVWZBVWUAZDDSJJRBVSNGPFA");
    msg.params.assign("FVCTSLFYWIZVBKXILKAOQRDFMGGUOJFJFAUVAHVGZQXIUNLJDPZZYWBKRPXWZZIOLHETEPMAFMQETBAPTOJKHMNMSVXSYJSIGYZSJNMTGINFDQVGOPMULCUOHMUXEDREQDYYGZCKXDJEQWKICWBESNNOZYQRXNGWELVVIBTTLHFOAIJAARMHOE");

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
    msg.setTimeStamp(0.392857905988);
    msg.setSource(24626U);
    msg.setSourceEntity(184U);
    msg.setDestination(741U);
    msg.setDestinationEntity(207U);
    msg.cmd = 8U;
    msg.op = 169U;
    msg.plan_id.assign("PMVVAYKIGQYVJLOJWOZOUOLOZPFSHEJZCWQLZRHGJDMDHVOGDAQRNRKENXNSOVWERNXUBYMIBCQAHYJEZKRHMPQDKDNFUHTNPUKPSCLQIRQCTVCUESAEJWHLBPKASAHDBMBXRYSSXFYIASQWUXYPACBCJAEPWXFTTJRYFWCTFIOGLCWOMRJYTJSVYFEAZNXBMDVLFV");
    msg.params.assign("QPRQRZLYJVFHVFDRQYXEAUBIVSWXXICHWSEXSTLAGCU");

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
    msg.setTimeStamp(0.824131458572);
    msg.setSource(26934U);
    msg.setSourceEntity(23U);
    msg.setDestination(42936U);
    msg.setDestinationEntity(121U);
    msg.cmd = 38U;
    msg.op = 140U;
    msg.plan_id.assign("VEALCNBMKRVUVSSGIDZNQBTJJEPICUOWQBNDTEAXVPWEWDLIYOFQXELUFJZMLZVYTHETIRJMPJLZYVSOXIDFSOLVCBSCBMEMHBGSFDNSDRGRPXKRWPOYZWRPZSDGAHPWDJICFZAQNJQFRPHBHNXPTVJAXFHTAZSATBDGWKCYUQRZIOSHFGXYCNKYUKPAQORGEMKGUYFEMAXIQRGJACCWXOUQMLVIKEWYILTWOKMTK");
    msg.params.assign("MPQAXBMWNGYYUSZFUPAXNZPHPCAKKZLBBPYFDZCQASQGNDQPIHOYUVGNVVEJJLHHFJZGPIZVNCBWEGIKQWRXYDFNDQCOVIZAWCEFQUYNHNDSQKTWXRRYTLVSOULIHXCFMHWCEYFGLFBWOATBGXQREINUTTKUHZGDCLSDXEMLAMUTXTLSNVAKGBCBVWJRBKZMLIGCSP");

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
    msg.setTimeStamp(0.48814908638);
    msg.setSource(22533U);
    msg.setSourceEntity(252U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("SXMTYNRBTYUCKSYEJOSVVMTUIUULKGTPOGQAIYQDLOKEOVINVZZAYKMRRHZXLAFQPGXYMLXLNIERVSQFCBWKUHOLQSMDCNIVJGTECRIZLJQYLCHSHVXFCGYPWBMOLFFGSXWDGBUZUTDSQPBVWCICRLAWFHKOHJNDNJAJSGRAWPQOTMVDEKEGOXANTKUEOFABFUDFZDJUQDPF");
    msg.op = 160U;
    msg.lat = 0.386744430598;
    msg.lon = 0.767519599263;
    msg.height = 0.883611402075;
    msg.x = 0.000158613778267;
    msg.y = 0.632623187819;
    msg.z = 0.0973090437414;
    msg.phi = 0.831916440928;
    msg.theta = 0.211002349662;
    msg.psi = 0.0501895410727;
    msg.vx = 0.183045607018;
    msg.vy = 0.246367581283;
    msg.vz = 0.0811091915826;
    msg.p = 0.76453403573;
    msg.q = 0.760554349138;
    msg.r = 0.743189376774;
    msg.svx = 0.322445207984;
    msg.svy = 0.306262058816;
    msg.svz = 0.700889961188;

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
    msg.setTimeStamp(0.0788425181741);
    msg.setSource(4519U);
    msg.setSourceEntity(159U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("GQSWZENZHNAFMHPEPJOENCUTWZRLCCWJZULWZPTBBAHOZAYPRIISXJDGZWIVBAAGYBLXJEDAOSJQMKINYRIVMQPORENGVOWFGITPPUOUSYFXFXRMZMNHGDQHTOBUTURAPARTAMMCUNHOMKUFTSXHDPFRQHLTLQKNLNFZXGCJSLOETYDMYLXWYNBKBHBGJCDSYEVS");
    msg.op = 72U;
    msg.lat = 0.411806295934;
    msg.lon = 0.438283785441;
    msg.height = 0.751849182028;
    msg.x = 0.59993220315;
    msg.y = 0.572597694583;
    msg.z = 0.266375631881;
    msg.phi = 0.144244746445;
    msg.theta = 0.303088452929;
    msg.psi = 0.190721058907;
    msg.vx = 0.84070479399;
    msg.vy = 0.220606892412;
    msg.vz = 0.167014555665;
    msg.p = 0.995168444436;
    msg.q = 0.999705049296;
    msg.r = 0.522671969772;
    msg.svx = 0.0699692981735;
    msg.svy = 0.470775158328;
    msg.svz = 0.417143283101;

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
    msg.setTimeStamp(0.668893106042);
    msg.setSource(40182U);
    msg.setSourceEntity(46U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("IUCPNACKNKEHPTPNZFLOPQQYVSKOMBHBULAWCDPOBXMNQAHYNPDWIPGATRNSHWYLUZXDURQKBZ");
    msg.op = 119U;
    msg.lat = 0.43165864415;
    msg.lon = 0.995901518891;
    msg.height = 0.241368267739;
    msg.x = 0.89340099627;
    msg.y = 0.297581011609;
    msg.z = 0.917500600672;
    msg.phi = 0.500552608447;
    msg.theta = 0.00303713194629;
    msg.psi = 0.0370495405201;
    msg.vx = 0.96099361829;
    msg.vy = 0.0603150551844;
    msg.vz = 0.73480459805;
    msg.p = 0.204417163403;
    msg.q = 0.874264363149;
    msg.r = 0.593536882641;
    msg.svx = 0.718318245036;
    msg.svy = 0.515966373501;
    msg.svz = 0.127693531949;

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
    msg.setTimeStamp(0.198951297482);
    msg.setSource(18058U);
    msg.setSourceEntity(108U);
    msg.setDestination(57298U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("CRTNADDUXRLQFIBKWYCZKUJTIANBEHAXZUPGSVCYMQXGJJRYKJVKWMONJIPGVWNCFQDDWGHVKUGLSFBOTQZXVKP");
    msg.type = 219U;
    msg.properties = 244U;
    msg.durations.assign("YQAIAUMDVFKCBXSFNFXCSEHHEIPTJTYVSLCSQZERUKRELEXTKMZWLDYIVLAMMIWETGYICNMRIHCBPOIUNLQ");
    msg.distances.assign("HGFORCUBJDBRCHFGSOJNPMWOBXFWDKWQIAWEQOPAZRODJTEFCAMSVDZLPXUKJXDCPUWPWOVSDPQRKHTYPIDLNFSRQNXYVRVQAXBQAEQJHJRELNLNBVUFPZEYVEXBUKFWLZCKIITAGYEQXKBRHRKBUAHTIXKSSTBGJYBEMAQCZISIZGHLSZFLSLTXMCD");
    msg.actions.assign("DDGUOHFSACXEKDDTFYXRZQYWBGFUFJAHCHUMAWEOEKHMNEXMOIUKQGNONRQWXVQQBJSQJKWWPDTCGHTLXXYZZXRMKMBCLCRBGWWIMCZNTFSPIVLNXHXVNOTEBLOAKDCISFIONEPETANZWVZF");
    msg.fuel.assign("RQTGIJEDLOZIDSMSKXXNTIRSDKVLXARTYNAPPWMFUMUXZKFTOOHBEC");

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
    msg.setTimeStamp(0.731087078955);
    msg.setSource(54283U);
    msg.setSourceEntity(83U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("VOCLSIHVHIJRRWWJDODUZNOVRRTJSBVVMFUGNYTBSELDPPXKABANN");
    msg.type = 57U;
    msg.properties = 46U;
    msg.durations.assign("TZQTFDBJAYLUAVFQSYXIDBIKDNMZSMNJWINCGPHEFAAJJYRQGZMSLRCNPACCLRYKXIKAVESAOJOEVPDUWKVQZFWXHTZUDLLZGPVPQGUWGEXBNHDOBGJLLJFOCULRDNUXKUAHRGQHIYBFGCYVFXTEMHMWRHEYKWDZWTXELIHJARDLOGSSQOAUBJMENOJRIRQHNUPYVDITIGBWRVZBZYFKOFXKCQBCMPCHWKNSEMQSCWFBYZIM");
    msg.distances.assign("MFDAAGNFLCJVODLVTBFPPSLOWOUAOEEUMCEBKATVPZWKCPLOBYJVITVZYUAEXPHILBWEJNVRJYZOMXCBALHKVXAWGFZVUCTSUUNPEIZXNEWDLRGCDMMEGQSNMCHISFMJGDKOIUGHLFDQQDGFXXQYYYAEAY");
    msg.actions.assign("RNRMQLQBSRPAMUGKMEWAJABMPZRIWEVHSEDXQGPAOKVISYQKGJCJAJWCKCNDLXQQLOAHVFSTGMHIBUARVXGZUJOFEYVFDJONUOCSJWRZXDRNQPDUMYDFTVGPCIKZBTJSWOBSXIOXCNHINARLKGLXNBZXJWFTHKGMRHTMCITMFUUDCLEPLOZXVSQNGLEYPPZEMWSPEKBLQAHCLBTDRDJIVOHYZEETZUDNTYWAPHW");
    msg.fuel.assign("CTPCTXHEUXRUGACAJURMNFQLYACGYYJNVCAEVVXRJZQASECHLDLFQFBKPLYYGSCWZNTMHDBRRJOLXJXWBLIDFHNSRU");

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
    msg.setTimeStamp(0.164511944059);
    msg.setSource(24383U);
    msg.setSourceEntity(73U);
    msg.setDestination(37182U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("VPLSWVGOTKNWTKSBCXOYCXFLTHPDZJJOTMBVSXFCAGBIVQNNCIMCIZWWTIEWYSCQUBDGLCTKWBPDIJMZIIVNRCUHDRLNIUYUOOASXXAYOUDDGZCSRMSFVQE");
    msg.type = 172U;
    msg.properties = 99U;
    msg.durations.assign("UKFCALUOOMGYGMKWSIEWUQRULDWSACSPVZGDYIHTOLMRIIHEDCDOGPFZBFIYHYBZVKVMWJNBPXTKZOQANMXUFVKXESEYC");
    msg.distances.assign("YHTHRXVIZBOOQAXZEXCYYSVRTMPKFMRFWA");
    msg.actions.assign("GNMFWBVZEEGHDRILMJVQTGWADMJWPCLEBFVMIIPHISFHFAGHYCQEQFOBUIVYKCKJVRWQRDNLRHPJOHEIAJSZWZVRPXKHXNKTSVLUOOMWTCHRBRSPGFAPMEYJFJOPTBKUUYQKERUZZZTAOMROLPACSUYAXAXSQVORSYTMIXNWGXSJBBYTUGKFCDDCKN");
    msg.fuel.assign("TDOLWOKVAOEJBWIMGXKUEMUFRLFPHKLDAMCHZTUHYDWAVRTXDQFYJVTEXBVBUPWELCRZOOIITEBKXYHKHPRGMKRXPWDZLSRHSHQUNGOVHEDFARVJCSHVBZOTMWSIZUYSCFIYPDELMQCHSGSCWAPNALIQNOQMIPXEXKGUBNYXSDKNRNQZNZJAGRJAGPDEVNBYYAFGWVUWOGMLXNZUFDSKIUBEBQQTAZNKJIG");

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
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.333432339742);
    msg.setSource(982U);
    msg.setSourceEntity(148U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("RQOCSDZLTJPWGIZUFZQDPKCYHHOMIUJPXLGYSLGPMYEMVYHYXNCEYSILEQAJGORQAHSCTFGJOQHFEWSICLVBTJZZJPKYRGQDUQKRLKNFHDDPLBKIZZWWAXGNELYMJVTVYRFDDUYETXHAERTNIXAVWEBHTJURQRMIZPFX");
    msg.lat = 0.409813720974;
    msg.lon = 0.36162077529;
    msg.z = 0.998323282574;
    msg.z_units = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.587119216766);
    msg.setSource(28376U);
    msg.setSourceEntity(220U);
    msg.setDestination(3820U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("BGSANSLKKPVGPVGSJRFIIERUMQUXJNJQJSDOXIDZLREUOMPXDCYSSNUTTDZLWEQGABPEJVYFBYUAUSKNQHHPKX");
    msg.lat = 0.712883500853;
    msg.lon = 0.607680483783;
    msg.z = 0.00847468561967;
    msg.z_units = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.127160534373);
    msg.setSource(3645U);
    msg.setSourceEntity(150U);
    msg.setDestination(63901U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("DWTFTOLZYDFDCQLEOPTNOIYADJUOXAIGOFNELRZCPQIPUPXQSRVWGDYUJCQZBKASHAXFICLXKJWXFZROVDMHTEVKKHNCEQNEEPHOQZPKQIFFBAWCZGRGUESHSISNICSHGZRSJEBEYJZJNGDFYWCYQRUTUHKDXRPOWKU");
    msg.lat = 0.850070390612;
    msg.lon = 0.242140320431;
    msg.z = 0.0159577989601;
    msg.z_units = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0903158682996);
    msg.setSource(4698U);
    msg.setSourceEntity(177U);
    msg.setDestination(16665U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.266462259976;
    msg.lon = 0.262486895778;
    msg.depth = 0.775364808835;
    msg.roll = 0.0798786610703;
    msg.pitch = 0.63487337228;
    msg.yaw = 0.30368932594;
    msg.rcp_time = 0.218024221504;
    msg.sid.assign("UTNBVDADRKWOJYGL");
    msg.s_type = 234U;

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
    msg.setTimeStamp(0.318470851803);
    msg.setSource(40421U);
    msg.setSourceEntity(30U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.240332977966;
    msg.lon = 0.966727556074;
    msg.depth = 0.770721218885;
    msg.roll = 0.212072557835;
    msg.pitch = 0.188418558438;
    msg.yaw = 0.463473093299;
    msg.rcp_time = 0.529721632913;
    msg.sid.assign("FAUKMDRVFAVIQNLQZHDLFMLFJSHEKPVNTDNSCWBIPDOI");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.660321075414);
    msg.setSource(8953U);
    msg.setSourceEntity(236U);
    msg.setDestination(23519U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.361217445208;
    msg.lon = 0.689890278559;
    msg.depth = 0.752300300761;
    msg.roll = 0.618169951564;
    msg.pitch = 0.734848966457;
    msg.yaw = 0.528171587005;
    msg.rcp_time = 0.462092488216;
    msg.sid.assign("KTRTCITXLTGQJYWUPACKDYAPRUWXZXFUCESWVQMKFKLPWZOCFENOWSQKFXPMFLAXUVGGNYVSKBVIJHBSTHZHWOKWSMLFHPGDFJBDQGYKBYSGDUTLAEVMEYBKPTZIEEGBCNVZS");
    msg.s_type = 223U;

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
    msg.setTimeStamp(0.224826644498);
    msg.setSource(43304U);
    msg.setSourceEntity(197U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(187U);
    msg.id.assign("VHYTJOCREHIPQIVUFOYNFIFSSJJRRYIPWRYPNANSRANVJKRXGHQDVSJZFTJWZZAFUGOFWXQQNCR");
    msg.sensor_class.assign("LQOGIFZYGRMOOUBTHWFZMXYXXYJRILTUXZPQYDLJTEHISICTTNVHOXOAJCBESCBPCSCHIGIPRMCMQZJHXUYSKGLKEVEKBNKKMBQYZODYJFUSONMVDWUUAJRQQVGMWOIWPTLCDWNBIHOYDNEYNTEFBLFZITJXWRNJZSNKRERPQQPNFMYCSRFKOHGQMGQUVWBIBPAGKEEJLAPWVVRFUDMAUFVZ");
    msg.lat = 0.944871433003;
    msg.lon = 0.875647013892;
    msg.alt = 0.0161189025115;
    msg.heading = 0.563637220899;
    msg.data.assign("BUWDHFJMMMX");

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
    msg.setTimeStamp(0.842944631777);
    msg.setSource(5153U);
    msg.setSourceEntity(126U);
    msg.setDestination(37266U);
    msg.setDestinationEntity(104U);
    msg.id.assign("PSYXUQAULOKJBGWBDRTHHKPIPCOTEMFXJLEVRKLZBJXVTILNFKRRFQVCIFQGNZLGEPCAUBJDKHEOWPYFXBASTSUBVZCKMJSQWUGGMMJNQANMZARNZPZWWDZXWDKFIHKGDLSRXCGWLRTHGTUUMVSSTNDESYMREFGDCVJHUDHAIJMNYI");
    msg.sensor_class.assign("IXTPZOJXKUBXEEDHOFZTKNDZS");
    msg.lat = 0.550491836442;
    msg.lon = 0.61851362951;
    msg.alt = 0.315878311311;
    msg.heading = 0.89650885315;
    msg.data.assign("AAFKJALIRRPTDPJGNQAEVRUUBFXOEDAOZLXHBOPSLBFAUQBSRAIOXNWGSKQTUIDVRQQQYOLJZLRKZSNDFYFDFVNGLOBNIEJOWTWYCVWIHGYDMYCFJTWCQMMWBBGPIEEXUOBGDKLTKMISXRMQJNHAZEHQWXTHKKDOXYMGZMUGUJVTULJVZUSGCPPTYFHCUPTMNNDVVCBZIRRFSPEWZYXYXCHKAXOCAPQSZSJVBENCRZWHSJMTDNLW");

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
    msg.setTimeStamp(0.732794063793);
    msg.setSource(21032U);
    msg.setSourceEntity(35U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(136U);
    msg.id.assign("INSMSWKFSWBBIGFURFBEGGZPMZLEREPQKJMASZEECLECWHHVCNJDKIARXPWCYKGFIMNANYIXVVMRUFNXHYNUKDCQSVKJTGAHTUCXBLRKGMZQWBSAQWYHYDFIAOZIYDHGSRTFIRITOFKHTENTLAWVOZUPCBDXVPOOCBHBMXPQJDZLLPOONJZWNDIQUNCKLUYGCRJAGEJT");
    msg.sensor_class.assign("XDEBROZFJKQUITKHJSMVCQRWLOILAALNVAFGRMUXGDGYTAZNZVZIGNOYTPUVUIKMEPCPDGTZHXWYGNHSZLGOELOGJXFROQQHHJCFBBAZDLNLWBXBTWRSDIQTBVBCUVKPPNPHNFYPEZIWDHQCQRPJXJLUQPERAMKDXYMENEFSUJCAOLSMIEPUJGBYSTVOVUC");
    msg.lat = 0.335601002886;
    msg.lon = 0.805994546406;
    msg.alt = 0.281458117899;
    msg.heading = 0.99321569088;
    msg.data.assign("QFBDYSXABDPHTGAYUMEAWZIGEMDGXFTNRCZHYACGXLXPJSQOMWHYJMBLWLSTUDWJTNWXFYQMFRX");

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
    msg.setTimeStamp(0.716227338696);
    msg.setSource(16035U);
    msg.setSourceEntity(92U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(23U);
    msg.id.assign("BBLESGCYWZHKFNROWUPKEU");

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
    msg.setTimeStamp(0.302296174275);
    msg.setSource(62801U);
    msg.setSourceEntity(225U);
    msg.setDestination(44307U);
    msg.setDestinationEntity(121U);
    msg.id.assign("BGGZDIRNYSWXJKLZKPCLVNRZVNFZAVIDXHRZRFWOSRHQXOROUJJRLPXHJLTUINPZEFXUACHLUYFGHXQEFVNMGSWLEGSVDPUQDVJHBTEMFDQWPMPQCMVSXYHJLKIYIHERDXEWOIGKNDPULRV");

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
    msg.setTimeStamp(0.0839918249964);
    msg.setSource(16363U);
    msg.setSourceEntity(184U);
    msg.setDestination(62252U);
    msg.setDestinationEntity(144U);
    msg.id.assign("ZLLRRQGGSXSEFUNACZLBPJPTFITVRYGYWHSELVTREOBYKOXWFBSPOTMNSXZHWTMXEPGAFJMMVHDKWECDWZKQQKXPJSDAQMONXHLVWKLWPEYCUZGDABCBCZXMSQOSSGUAZGWIUFDYDAHRCUHVYCDDYEEUEIGYNAFVTIJJUTOMCXFMIQZNWNXARIRNDUODLIHCVQPEQTYBBHGAPFZJAIGIVVWKJJROJLONTRMTHYCHZKUNKSNBF");

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
    msg.setTimeStamp(0.0529629853713);
    msg.setSource(18633U);
    msg.setSourceEntity(161U);
    msg.setDestination(28381U);
    msg.setDestinationEntity(65U);
    msg.id.assign("FKPZBAHWYVOLGUWLTBEQMUKVNVSHQNDWREAIUDTZSPDUMXOGKJWYKQFEELQHUOLXCVAKFXNNCRIVAOSYPJPSFTYYGFTUSZKZCAJNXCIS");
    msg.feature_type = 8U;
    msg.rgb_red = 91U;
    msg.rgb_green = 150U;
    msg.rgb_blue = 4U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.249486715351;
    tmp_msg_0.lon = 0.362360161137;
    tmp_msg_0.alt = 0.696815637435;
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
    msg.setTimeStamp(0.105019847604);
    msg.setSource(62887U);
    msg.setSourceEntity(3U);
    msg.setDestination(22717U);
    msg.setDestinationEntity(90U);
    msg.id.assign("CQALEDPWKYYQVITEGYEOKODYLBTBJWGQYADTBAIAMWRJXINRBTUCCVHRPYMLFNZTOJKGQLLVJXHKFAYOBEOJUVFUUQZZWMXLAMWZBMPGHNMGGGDEOITVRWQNFYSMXTGXCAHRBOSVETPSJNOFAKZSGPFVIBFPRCXXQCZPAWRGKEFWEKRIX");
    msg.feature_type = 219U;
    msg.rgb_red = 241U;
    msg.rgb_green = 194U;
    msg.rgb_blue = 5U;

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
    msg.setTimeStamp(0.311446345782);
    msg.setSource(58111U);
    msg.setSourceEntity(181U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(239U);
    msg.id.assign("FWGKNYWEAFRURMNQTDCLRSLVBEXKYRGLJGLBXSKADPSPXOIWHFOPNFEWXDKWQQFDUHJPSQWXEDAHZTPPSINCBLMOVEDBGRIBCAAUKIBUHHHAQZYLNAADYVCPJCUKOZZGVWXXIPBOSMXSGTBLQLOJQCMOZBMNHJXUDLZSEEIYIYCWJOVPSGFIBTUKKEITJTHRWFHVONCRRYHUYNEGDGSTZNFDQKGZJVRJFUMAMPYXMIMTUAVYOZJQEFMTT");
    msg.feature_type = 55U;
    msg.rgb_red = 219U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.15139757503;
    tmp_msg_0.lon = 0.702721407826;
    tmp_msg_0.alt = 0.860171513912;
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
    msg.setTimeStamp(0.763384385086);
    msg.setSource(7095U);
    msg.setSourceEntity(193U);
    msg.setDestination(18115U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.510240519978;
    msg.lon = 0.543557813611;
    msg.alt = 0.491439177537;

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
    msg.setTimeStamp(0.042217807114);
    msg.setSource(55U);
    msg.setSourceEntity(11U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.0997246327087;
    msg.lon = 0.630250100437;
    msg.alt = 0.640993578754;

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
    msg.setTimeStamp(0.12351382927);
    msg.setSource(44664U);
    msg.setSourceEntity(132U);
    msg.setDestination(24527U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.717018254334;
    msg.lon = 0.986653442654;
    msg.alt = 0.669836888488;

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
    msg.setTimeStamp(0.622111902356);
    msg.setSource(28163U);
    msg.setSourceEntity(60U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(244U);
    msg.type = 36U;
    msg.id.assign("HEGWUFTNRCEHEGOUAMPCZRAFOWUWNQXHPSTGOCNWZSQJRNAHFFVDRKPGQMNEOCRYPIWKCLVZRSEUHCFQRQGXJODIBSLMCIZIFLBLCHAQMCJDLNS");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.219374255415;
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
    msg.setTimeStamp(0.105651273924);
    msg.setSource(21080U);
    msg.setSourceEntity(194U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(239U);
    msg.type = 119U;
    msg.id.assign("UKAZDXMOFPCUIDQEWCUYBRXCTQXFRQZNXCNVDPTXSHLKDLERERGELNSMTJYTHCUQNSLOBAWTVILFVSOFVYVPLKBAJYFGUMPBPEJKIXGVMUGIYTZALMIQIRTOWAEOOEAOMDHHZLGUJNBNCEVJQCPPDKFNHIXSWLNAOUXDADBWSY");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("OUQPJTRCOKUHZJJXLKVSMWJWLVFFLICGNCSBCARDMZOUKEREDBDWOLPRXYITN");
    tmp_msg_0.service_type = 242U;
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
    msg.setTimeStamp(0.957057311864);
    msg.setSource(20044U);
    msg.setSourceEntity(207U);
    msg.setDestination(15267U);
    msg.setDestinationEntity(162U);
    msg.type = 252U;
    msg.id.assign("TKFGRZUPIZYFENQFOSNYBTZUWQMAKDSOPHDXLJGWGMQYDIAVEYGCGTQWQSMAIRMQVELZLATIRFZAUWICLYVXCFRDFRPZNWUHOFKSTRCQAMCXKNAVOPRBGBXVHMIICVXXCXOEKALYRERWIBUNJPZUDDCNLJH");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 91U;
    tmp_msg_0.error_count = 231U;
    tmp_msg_0.error_ents.assign("JVZOKOPEGKDXOMBYYQFWDMHVMCAIMXFZKHFLBYVWKRYHGBDTYZRNNYLLCLFTEPWVXCPOMVPDZDBEUGUSDEGXTCTJBWPZQPNXS");
    tmp_msg_0.maneuver_type = 57446U;
    tmp_msg_0.maneuver_stime = 0.456138362065;
    tmp_msg_0.maneuver_eta = 62938U;
    tmp_msg_0.control_loops = 1927545086U;
    tmp_msg_0.flags = 149U;
    tmp_msg_0.last_error.assign("OZHQPZRJJEWKLOYSTTEDYFIOHSCVRDYFXVCOILMVSWOPNZKEHIBXDSEHRFRKAHQFLJUNCGVYWUNMAGQXNCQYFNNAXQVWLKSLUKZZSBGDZAPBUQFBZTZRDICADRYNPMDIQUCJTMSLSWVIIJCHFWJPGOAYHTYNTAUMOFBBUMEPIABSGAEZXIQPWCUBOLRVDHWDJEOWTCPFMWJTXMHXHANXUEYKKVFSQGPRLVCJRGZKGTNKQOTXPBBEXMYDIUGM");
    tmp_msg_0.last_error_time = 0.636083819901;
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
    msg.setTimeStamp(0.658908260992);
    msg.setSource(18481U);
    msg.setSourceEntity(145U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(74U);
    msg.localname.assign("CTQKBIXZKJYTCPKCQQZOACNPNNVWGGNSGPZTUETQUDEOROVWLTHURISDITJJNHSHSKDMA");

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
    msg.setTimeStamp(0.338043275897);
    msg.setSource(44574U);
    msg.setSourceEntity(182U);
    msg.setDestination(23934U);
    msg.setDestinationEntity(228U);
    msg.localname.assign("VAVSIZYSUFOEHGPTBJNBRLCMOJHWMLBMRUURUJRZNFYQQKZFCWXEWQHYXKWMTBLQFESGABPT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WEKFRZAJFBHKOHDKRAKOCCRDBTLBPGIRGYNIVWYVMLVKROGFCLMJMISLNPXQPSZFNUGJTDHNLOIWPPJTDRKTEOEVMFFDSMMGGWEHONYQMGSNDRFUJJUVJDXESZAOWVCFEUAQXSN");
    tmp_msg_0.sys_type = 156U;
    tmp_msg_0.owner = 62904U;
    tmp_msg_0.lat = 0.841101601702;
    tmp_msg_0.lon = 0.704670078103;
    tmp_msg_0.height = 0.699309368109;
    tmp_msg_0.services.assign("KEENKDGHXTIRSCZLZRYJQCVDYCFMJKHUKOZTOHGCKJBRCNQMIUUFMTUQOVXBDQAQ");
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
    msg.setTimeStamp(0.825707878378);
    msg.setSource(54822U);
    msg.setSourceEntity(210U);
    msg.setDestination(16275U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("VLOTMXTMCFVWDVLAAIESGNIRHTWJOCTZZMJTPURGTPHJTWMORUWYXEIDXVSQDRMRVFJHCYJBHVFXIQTJYZQFNCIQUKMLUMUNKSBMHPAYSLLEZGXGHZANREQUGTCVIZDWNYFDXSCZJQAYGSZNRBDWPXZCISPYKYUESOYPGFLEMEWNKCDPGVXEPOOULGI");

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
    msg.setTimeStamp(0.744997128424);
    msg.setSource(57720U);
    msg.setSourceEntity(114U);
    msg.setDestination(25981U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("WKDOTEFXXJVNSYYPDEVNMQROVJMSIHEIETVQVSJALWBYKFQZMACCZ");
    msg.predicate.assign("ITSJHSFIWQGDRGIHWUDNHJJOWMDBQZWFIALCGEDPXBVGYXVJXWHRYTIFHOIHCKNOLSQVE");
    msg.attributes.assign("OKXIVUDLINYANJCCAHCIOQNDARCVTLJYEXGXSXSCTPGLYPNDRUAMQDOJCELKAWIBHBDGVOGORBOFPQQGFMSJYOLJIQKHNQMYFGVYSJ");

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
    msg.setTimeStamp(0.470200129171);
    msg.setSource(36823U);
    msg.setSourceEntity(9U);
    msg.setDestination(2904U);
    msg.setDestinationEntity(212U);
    msg.timeline.assign("IDXRRUXEZNRQQSYCGVPGRFVACOEBTMNYFGXDAEAMQEXWNCRPHYNJLONTCNMKYRBAZHCHKLTAQKWZONXMRDSLKTPLMXJJJISIFBISBVDBLUGIZKUDXYMSVHZDSCFLLMZEVLWSUWUKQZRRPB");
    msg.predicate.assign("VRWMXYBGRTFTAUAMGIWCYESEECKQXALGKPOAUCUQUHDBFQRPTUBYCJVZQROXOSBFJFXBLJJARYSPOICXDPFOGIBISXEPMAJBOWNHZ");
    msg.attributes.assign("QMUKJDHBMQAETEXXCRGCZMUSVGOFWVEPELAKEZJOGPGLKVIZJ");

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
    msg.setTimeStamp(0.0547785966004);
    msg.setSource(15173U);
    msg.setSourceEntity(43U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("QYGRPTQIMMI");
    msg.predicate.assign("EPGREXFOWTZYOQVDOORAJCMFGVUZXQYHJIARAFCZIBUVDZZJCKUVIQQNBBFDHXFKGTDHRGRUJVJCHTXFQNSVHJFTXWAOGLCGIFPFNQVHADQTNWJNLDPQESYNMHHAOWLPIXDLSSYWZ");
    msg.attributes.assign("MVOCIXLHZLXQHIZNPNGOENAYPJAVVIURKJXCUQSTPGXBCRZHQLJJXMJGYVGEFXWMBFRHOWEJIBRDQGAYFSXWVKPULOAOHSBEFYWPSOQCTILKPUMKYGXFIPEVHKBKRBT");

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
    msg.setTimeStamp(0.28967356552);
    msg.setSource(11855U);
    msg.setSourceEntity(55U);
    msg.setDestination(61558U);
    msg.setDestinationEntity(178U);
    msg.command = 216U;
    msg.goal_id.assign("PWOJOEFGOACBWLPKBRSHQIQZASYFDYMDCOVDUPHPYKDQCQLZVUXUOFRZTSWDOQKSQNXMUNZGOQVLTXIHVTDWRPMLCEWBCLRZWAMEJTXLKGZCHZNYIUMGIOVFRXEELYGTJXBB");
    msg.goal_xml.assign("XFIWKQVVBZAMSPJGAZUVUKHVQEQXSENGKRTFDBKWBYKLXWQUACASWJUMVMFLNJURXPSNSJPFYYXHWNYDDSCUHPDTEDEYYMCOCVBTFHZKQEJEKRCTNRSWPCIPBJYZBAXMHKYLX");

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
    msg.setTimeStamp(0.815409188929);
    msg.setSource(47620U);
    msg.setSourceEntity(115U);
    msg.setDestination(33190U);
    msg.setDestinationEntity(176U);
    msg.command = 250U;
    msg.goal_id.assign("GGEWYSUJEIRWVEPJAHHTCXDNYWDICQEQNFYDNVVZDSWEONLSWGZBTRMYMFVRZZZGDDOPJAVCWOKFGHDQNHOSRTVSXOLTXCMBUFYNQPURXWIBKZVWXVUCTZSLKBUMROENSZOBBAFACYFOLIXCINWLMHXGYQFBNQTHAQRLFSIWMLMEXFHPKPAVJ");
    msg.goal_xml.assign("DTAAZUATTIQWLHJMCXKPMPNSNXJGZJSSFBECCDZMGGGVUZPGYWTRWLPYJQITIJLGPQOCTEUWQJ");

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
    msg.setTimeStamp(0.0128253843605);
    msg.setSource(20690U);
    msg.setSourceEntity(250U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(149U);
    msg.command = 21U;
    msg.goal_id.assign("HPCRYQOMCVVODQDIGSSCJMLNBFPBHYZCKBDBPPGIUAYUWXCYNZDOJMXDGLFTIPHTVPISLJLOTJATACKZAIHFJUZJHRBMKUGNX");
    msg.goal_xml.assign("JRUNLAOIZORKWQHFUDJMSRSWLBCGIVSUBWQPJOKJKBFTLEVHCVDTVOMLVEIJZXEWDHSEFIIXAKSPEABOEMVQMRZWYPZLAQFJEIYGMSQSHAKXIRXPYUPACKHTIQBTWCUHJYLLTPHZXYEVRCMRLOHMKAQBDGFFECITG");

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
    msg.setTimeStamp(0.117300956684);
    msg.setSource(37185U);
    msg.setSourceEntity(56U);
    msg.setDestination(54790U);
    msg.setDestinationEntity(69U);
    msg.op = 126U;
    msg.goal_id.assign("HCMRGKIDJJSRXYLGLTVGWDXLZVONWDRWLNZETAMNKHGSECZXAGPELJXZNEXJKHWGBTZADMRCEPIVFRFDUAKOAOLMXMFNOHUOTSVNHWANURRNELCGHUWPDNVJYPJQFMFYIDWEBLOTZPBZBBWZXVVHSUWWUVYITKSTIOOFPHJUSRECYRHFMKDQGBQQFJKEVMLQBPSICPQSFPIXRYBQKKSAUCVBTQPUZS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PZZVFDUNUKZMRBFRQDTIOBMTEISL");
    tmp_msg_0.predicate.assign("TULXTIRCBYXNXZKELOEUPVPYNWZILAFGYFZWCLLGJSHZMACBMAOSTRWQJRFIEOJKBEPBJCYGTFKIHDW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TDBVVQFPBQPKKCAPNFZPHYAJZMPGJDAHOII");
    tmp_tmp_msg_0_0.attr_type = 191U;
    tmp_tmp_msg_0_0.min.assign("DQNWIWVQNTYARDRHCLELQBUSXNWCWMSWNKSCVLFVRAPJAIHFJ");
    tmp_tmp_msg_0_0.max.assign("SYKEFUEXZVWIFRWVEHMMPABTZUHBPRKCRDNIIXJJRIDAUHYBQFZXCGYLFYQAOEQCVZRFJXTKXKTOQAHCKDIKSTD");
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
    msg.setTimeStamp(0.911401611496);
    msg.setSource(15343U);
    msg.setSourceEntity(251U);
    msg.setDestination(57531U);
    msg.setDestinationEntity(38U);
    msg.op = 166U;
    msg.goal_id.assign("HCGLWQRRUEVFISGBUIYQAAYNPNTHOZJHTLYGPTLVORIKQQVCNUFQMPXYUQLQMKZYZABDUAMOWJGIVRBJTTSVOHSRPYHSKLFZXKEPWPGNKBPALGDADNGCNSQBWNMBWMKLCXCHCACUGOXTPLBJEECSKFHDIIFRMRQAYZLFXCJUYFXVYXWTSHPBWUSI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WSCXFZMBYDIXJOCDDILXQCOWKTIYGSDNMSGJODCJMXMXQVLWGXAFLFUISBUPVAJVDBTBPNXYZKDZTRENDYWZZYLLEVPCAEVEZCQXI");
    tmp_msg_0.predicate.assign("UTLFKHJFTGRDYYOPJWOSANOADMDPQHMXCAIVQQEDXLYMAPBBBXQVMZPURIDUQMBEQZIWQUPYNTSSKKLHAEXKJSYMWVNULOEZKWGYSQTUVYVCIRHTHLKIMGOVTCWJXDBRBLRPVRPCONJMTYWKKOZGCYNAPUIZTEEJVSCMNOC");
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
    msg.setTimeStamp(0.895169784297);
    msg.setSource(20286U);
    msg.setSourceEntity(54U);
    msg.setDestination(40945U);
    msg.setDestinationEntity(184U);
    msg.op = 13U;
    msg.goal_id.assign("ECNSVMLLELTQCVALRHFHBMWOUDEPKHBIYQGIOAZBSXVEBMBDSIFOYIMGWJODQHTNDKKZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HPLQJMBYSSFFRMJAMIURPBKIPZBDDWOCGWNXJYNHEARISBKUMXVBICT");
    tmp_msg_0.predicate.assign("PILLNKKIVVAEQREGYZGJAQCRINVMNDAHZFAIDGCWBPMZUUHFGMHBTORHMYTBQHGSZMSHZXFCCYXSIJLKTYBJBXRPKDKNPOTPWYUISFBPYRCDWRDTEEMRWTOCLBXGOQHIUANMMVAGTWAEDXDJMJZXKPWLBUWAXQQ");
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
    msg.setTimeStamp(0.695065133575);
    msg.setSource(56752U);
    msg.setSourceEntity(166U);
    msg.setDestination(47889U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ZWXFKJIBLFZWHDFBRNACQOXDYONAEGIWOLOGLSDIVAEUXLJSJWMTKTSXOSUXADQJWQRTKTFYOLMDDJJARMENPKPGEHQQPCGQERBFCYQRPBYGOUDRCULDTVABFTZUVGWYWVGF");
    msg.attr_type = 30U;
    msg.min.assign("YAZVNQRJQXRMTBZUATZJMLDITFPJJGTDRVJHVAVYZDRZKZEWLPYTEOEBK");
    msg.max.assign("DSXCTLXRGHVSOSKPSNDJGNZYPAVYSDHWAJIYYYWVRQUMZPTFWSRFBQMYDREECUCOEMCYZXFSQUQTXTQWRKGCNOIGPTICNTKKQDAWVYVJQDOKOOBTPMPHCILNKZPDESJMMFGHRAWLHGGOTBXXVFIXWGTQNUAZBFUYJLOFWVZVOAXLWJEAELB");

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
    msg.setTimeStamp(0.101684075881);
    msg.setSource(63688U);
    msg.setSourceEntity(251U);
    msg.setDestination(59920U);
    msg.setDestinationEntity(54U);
    msg.name.assign("BCOTPYIKDNMUXWSEVTCAPIJMVZTJQLBTNAXGJOQUCJSVWWIUMNGOVELFJOHPMRWCAFRSRY");
    msg.attr_type = 26U;
    msg.min.assign("HKDSVUSZHQZGCNLAINUZMXMFRSMLTEWNAGYOWXECEBTPCFRODXNBDFSDUQDIMKRXKOQXCLAJGEHASZUXK");
    msg.max.assign("MHGRIVRACPJRYZZMCQBLNSSFVMBUXTDEZAMWSVXCWCTYMOBEDYWDKKICXPJEWFEEFLVIZUGAGYTDOYSFBDNYIVLSPOOSRYILQOGSCETDDAKTBPPWBKBAAJNJWOWJQXBVJJLZUVEQHQGOXUAGWXGFVDITPHFHIDRLYREHHQWNQJCKMAMVWXZNMCOUZIGTTRAOYQ");

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
    msg.setTimeStamp(0.403967606344);
    msg.setSource(21624U);
    msg.setSourceEntity(152U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(18U);
    msg.name.assign("CSGELOVAFQRFOCJDKUCRBHHIETYFUCPZXELDPRVOOHIFEICBXKNGWQZLJSIQLMNXBCZSTQJCRJJQDOWDMGYDVFIWUZNIOYIKEQTBAXKWSWMRHQRRUBVYHITGPTVZLFGGDBAGAESRZSQXLNXZBYWDLVBHOHXZHMOCXVMWIMNBUTMPVPCASFWDKFBKJQOZINAKTFXDMMYQNYAESMEVLKUJNWYRJKUZWNAPFLRTUYGHC");
    msg.attr_type = 148U;
    msg.min.assign("FUHQRIOEJPSXBWBTSYILEZIYWTFJKBKTWLARVCGVBZHYKUNBQCLSWBCRSZHDJOKFXPNTTNJCSLIMALNAMAQWHBMBPEZGAYICVSROJSSGVPZEHLFIMFYOJHUEGXJOXAASAIMFGDJQGCQJUDDZFFLKFFOZYUTPYTLEJGNNXCUIUVEUUXXEZLNRNKWPRQMAONHWWZMAORHCOVIDD");
    msg.max.assign("ECTONGKSVKMCXAKJGLFNCDFPWZVEERQIDGFMWXVTDGIJBBIXMRQTBSTRPAUISMDRQBCRZVZARSANVFOCGMASEKOCQWJQWTDLPPDTLRPNEYKPNFUSAVFWYHBEMGSSSWFZCRUOIXOJLUWPOHTLCLJKVQZGDIWJKPOZNKHFNHBUHYDUXAAQPZXXNIFLBGEELZHHQKMDJJIEBCOTWMNHYUVYMIXOYHLSUYGYXDWHRJKBYLVTXVUJBTAIOUAMQGF");

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
    msg.setTimeStamp(0.866917855924);
    msg.setSource(57288U);
    msg.setSourceEntity(147U);
    msg.setDestination(35881U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("PLSQRODMJFZUWELXMENUNIMEOAGPYNFIUXRSDUHLUOAHMJUJAORHFQTBABRGEFKLAWBDXQVLQHNCDJTSTWGCHORNSWVLRKIFMJKJOQAXPFLDVYEZZWBXCMNOPFVZEKXIJGYINGFVRKICPEDZTBLPZYWDWXGSOIOOWEJMNHSYXKGCPTAYGVILZCDCLCTSGTSYBYTKMHQHPBTRNKDBQUAHQJSBCAQFVBUVSKZ");
    msg.predicate.assign("YTGJJGBMSS");

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
    msg.setTimeStamp(0.548476878094);
    msg.setSource(23101U);
    msg.setSourceEntity(10U);
    msg.setDestination(31694U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("SECDYLPIWZKGRBIRCAONVGOUUDEKGUIXJAVOKLXDCWMIPHZSMDCEQUHXYVGDEQAYRCSQNJQKAIVHFOXWYHBQKOEJTTLDHSFXQORYVCAOWZPNDJSGPFTOJISPDCTMYGPETZSGCFHXLZWJLRKBRSZFGVRONELGWGJUVYAUBAYHQDRBHTKWPMMMABZFVHQMANJWTLHPSEFUOMIXVFZSPNYMMTPFCJIZNTFTNKKBXYUBVRBLZABWDU");
    msg.predicate.assign("RGMLMPMSUTUOAUDJTTIWOUMIFFLYZWBNQCKONBPANXRBKTBNABTJQGIIMJTHFISOWLWCOKZWGNRTAYHHJNVUKVFSSFBVFLKYTQFTUCGEHPKCCJPXLVSHZJMRYNDV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZHYJWMMFDFHGFKJDRNAPQRRTMHQBEIQYLPWOOGQQGHJFMNZKJAARBJZZBNXVWFWPERRVLMZQNWEIZBF");
    tmp_msg_0.attr_type = 108U;
    tmp_msg_0.min.assign("ATDODLSXPDROKIHOUMQZSFMCTEYEFLMOVCFSECLQPMEAECNYBOOHKFBGSCWLUKPYCEEAIPZXLGTQLLNZIRBTEJGRLKEGVPPJDKZLFDMIQWSOKUG");
    tmp_msg_0.max.assign("UPZFOZQMKGDCEFLYTTFXOKOMTZWSCGKOJZWAGSNDCDCXIIFFVLZMHLCHAORKWVCIEIETIDNIYMVSIRGMRWYOWHFLZYKIEZMBXJQUBRQRYPYBTLGSJKTSHJBQJEJQZXLQXEBKIBWZPXGPQMSDUHWJKSEAAHPMDTVDUJNUWMNXKOLWPCLAAYTCOSQYCRNBD");
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
    msg.setTimeStamp(0.698031460491);
    msg.setSource(25997U);
    msg.setSourceEntity(87U);
    msg.setDestination(9961U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("HNXKDDEIUPXQHXJZUQAIAGOEJOBAIANMELBXRAZRBDTJVZCTOGOLFGMMAJNOXFBQDVEZBKHVYUIYWVCLRRCSRESYKWYXPPTFYKJNNCCHVGBNRURNSRYVLHSBHLMQBUPXLFWDPZZZPMZONZITJTWSJOWXUIPZGB");
    msg.predicate.assign("HKRHVKOSUUPYXSXSHSJAIMARUBOXMUYVGGLZQWJPLUNPEU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AGOJIGNMVMCZENEOYVFRNOFSWLOBUWKEDWXRNHEZSZBDNEJRGJCLIIKCNKLBEXDZKAQLZQPMHOMASHYDGEPWLBTDCISMTTRYPBXYBYFZEXTOMULZVDJQCOHBLUDVKXSXAJCPSPYKMHBYOGAJATIWJJGKGQDFFQHTMBARWQFDOUQUPPHQWTCSILPHGKVFQICDXUGEOKQITMYHRVNXWFCKIXUTFYUWNZJTNACWLPJSGUMREVZIV");
    tmp_msg_0.attr_type = 92U;
    tmp_msg_0.min.assign("UVPUKUYHMMAJJUTDCAUZAKBOCDOWLHRBBIAVUSMIRWIFOIYLJDVSDEDENCJZRKDGYASBOEWLNAOJJESPILQZXJPFSFNRCNHCTBLKCLQVUFXJHIKIQRNZNFYNPTBLNSGSRUWQLHMDGABYFHEYEELAOYCFPTLPEQRHQZTMDXTUGWKMGHZICGKTCFOBOVGUNYYQHAPCIMRGKKVZTXGWIRXERDOHKFVXS");
    tmp_msg_0.max.assign("UIQOPNGWSCNPYVWAWEGFOFVJXWJQRMGXERKBEEXLWQHMVVWKMTNETFKSNZFZDPUYLPYHTLBEOBZIYCVYQTFDTYJEUDNILFBSWHDACYJSCTWBRGKFHXLQKGSUHKRDNAQRCVOIHVONLACUDPKHAAZCYKNEQPGUFRQOJIWDGO");
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
    msg.setTimeStamp(0.709598064274);
    msg.setSource(30999U);
    msg.setSourceEntity(99U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("AJCEAZQMLYWPINNWYWSWMOTRIMCYBEABKJSTGVZMVRSFPIDHUMLGFJFRVUUDKWFJSJNEXNBXXRKCIKNXICIBOXVMGDNJWVOKYNLOVJDGZGUSPZFYRYXICABPBMBOATVHECHIFYSXZMDTJEGLLHTIDUOHGKAEQOTSYQCVWBDLQTULQUAEATYFQRPHNFZORQTSYXRPNHPHDKEUZSKQMMHOEEWVBQZCDGJRIN");

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
    msg.setTimeStamp(0.151489572794);
    msg.setSource(5593U);
    msg.setSourceEntity(211U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(181U);
    msg.reactor.assign("RTGCCYUBTQRPQVFTOLSIAUZZJRTPTNKZLKWIWZFYVBCXKXEIMFOYCRLDMVZJPOOZEPEKOPYMMHKEDJZLFBDMXAXWDYWEKBIIQVSBPHKKCVFWNJKMFXUWSNSNGHNROFOKUQDPRJXB");

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
    msg.setTimeStamp(0.989608354726);
    msg.setSource(47016U);
    msg.setSourceEntity(243U);
    msg.setDestination(17309U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("XNQJXDNPSIQYZZDILYGEGSTXSXOKLKEPEKXUMLOFPLDOXQQYSTECKGWYNBCPUCYINMGFOOZNNZPNVIDPXJAAAWQOVUSLMBTSYCULHFVCDVIAEMZXQMKRLJRWRZEEDRKOPWAHBAMPFTGCBXWQHFBAAMWMJUZUDTLCCYDRYGCLTVVF");

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
    msg.setTimeStamp(0.687525013217);
    msg.setSource(21306U);
    msg.setSourceEntity(15U);
    msg.setDestination(7750U);
    msg.setDestinationEntity(77U);
    msg.topic.assign("DGCNHYPRNPZBAMLOAKGQDCBGSUFMVRILAEEGKZVBGSVEGT");
    msg.data.assign("DYLHGYNEHJJBUTCWZBLRNGKUFJIURQLIOFLLBXGZOPVHEGFJRLJY");

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
    msg.setTimeStamp(0.976931517324);
    msg.setSource(13074U);
    msg.setSourceEntity(53U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(74U);
    msg.topic.assign("XFEDQQOHORCTDJWHPRYPTLEELRKAIZPQVBUWKAFLHURSJTMHZAMJBBAMXQSBUJDBKOOQGWUEHEXOSXFTGZKIQTVAVEDFQFVJHAUIZYJVWVCAQPDFQGYKCNLMYEWJHFIAWIBMANHFGNGTSPKZXRTICRVGXXOKBLVXR");
    msg.data.assign("PRFABKXJNAHNVOWZWEGTLKJQRRAXRPKUDTBMCZEUYRRWUDR");

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
    msg.setTimeStamp(0.424871423516);
    msg.setSource(5423U);
    msg.setSourceEntity(166U);
    msg.setDestination(32271U);
    msg.setDestinationEntity(171U);
    msg.topic.assign("DJAZMDECZMTDIWPFPXIFKIFMMQOFUOKHDTLZTCNJYWXMKTGCQEFURBGDLGGRTRIIGVRWRQUEWHBEBNHNKEERWOZSJFFSLQMWJOOXMVZSPRBWSBXSPHGRHWYKCRXZZULKPSQGVAJADSXPOXDXSUVYLAXCSUNKLTSNBVLNJTQUWYDJOVBHWVKJFAVDIFYOTAZHEYQRBMAAYPNCVJHPUEIEVCPGKUXLBTYMYGLQNUQNYMCH");
    msg.data.assign("IEVRYNIFTNOXOJUXFYVOHZXPNBVRCDMFUOCVTMBWCKZDTAAUNQMEFOSLUCUFEBKAWAGCRZUHXQWOOMTRXPBABWGOILFWGHPNJJISYVEFVVWQDDPGAMVIAPQNZAZKEPOISJYDJMRKSELYHXURKDDWSLKGE");

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
    msg.setTimeStamp(0.989407802002);
    msg.setSource(36461U);
    msg.setSourceEntity(10U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(216U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {26, -60, -109, 9, -116, 81, -66, 121, 17, 126, -14, 45, 29, -91, -53, -65};
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
    msg.setTimeStamp(0.0243627485502);
    msg.setSource(46959U);
    msg.setSourceEntity(217U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(101U);
    msg.frameid = 178U;
    const char tmp_msg_0[] = {25, -112, 24, -65, -23, 80, -20, -128, -75, 33, -119, -66};
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
    msg.setTimeStamp(0.150777447282);
    msg.setSource(65468U);
    msg.setSourceEntity(92U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(24U);
    msg.frameid = 32U;
    const char tmp_msg_0[] = {-31, -73, -68, 123, 85, 16, 117, 12, 39, 32, -94, 83, -72, -127, -103, 121, -120, -115, 66, -128, 23, 111, 32, 84, -103, 123, 71, 74, -77, 27, -88, -75, 26, 2, -22, -92, 99, -21, 28, 114, 47, -21, -47, 39, -21, -92, -86, 93, 125, -21, -120, -114, -111, 12, -52, 117, -97, 89, -71, -95, 87, -60, -29, 69, 95, 18, -95, -110, -108, -2, -51, 113, 13, -43, 66, 26, 77, 48, 5, 33, 19, -75, 67, 120, -34, -98, -20, 126, 112, -102, -44, 44, 23, -107, -14, -58, 111, 119, 58, 76, 13, -24, -122, 48, -23, 90, -108, -44, 69, -6, -38, -122, 94, 16, -66, -112, -91, -121, -109, -123, 80, -13, -53, -90, -1, 32, 68, -49, 78, -98, 11, 43, -19, 95, 92, 94};
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
    msg.setTimeStamp(0.533101091276);
    msg.setSource(37782U);
    msg.setSourceEntity(36U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(240U);
    msg.fps = 181U;
    msg.quality = 173U;
    msg.reps = 37U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.502376412466);
    msg.setSource(24682U);
    msg.setSourceEntity(208U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(30U);
    msg.fps = 247U;
    msg.quality = 122U;
    msg.reps = 230U;
    msg.tsize = 145U;

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
    msg.setTimeStamp(0.00832725973526);
    msg.setSource(48906U);
    msg.setSourceEntity(162U);
    msg.setDestination(56824U);
    msg.setDestinationEntity(241U);
    msg.fps = 164U;
    msg.quality = 254U;
    msg.reps = 148U;
    msg.tsize = 135U;

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
    msg.setTimeStamp(0.162023798583);
    msg.setSource(6983U);
    msg.setSourceEntity(239U);
    msg.setDestination(26318U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.386874956987;
    msg.lon = 0.147990135814;
    msg.depth = 122U;
    msg.speed = 0.706298532937;
    msg.psi = 0.986193607899;

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
    msg.setTimeStamp(0.0423365186145);
    msg.setSource(26387U);
    msg.setSourceEntity(85U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.19826784149;
    msg.lon = 0.63707445135;
    msg.depth = 11U;
    msg.speed = 0.105959541343;
    msg.psi = 0.946520612183;

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
    msg.setTimeStamp(0.242381197019);
    msg.setSource(27748U);
    msg.setSourceEntity(29U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.660452557578;
    msg.lon = 0.418615427708;
    msg.depth = 62U;
    msg.speed = 0.492656220458;
    msg.psi = 0.195444271783;

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
    msg.setTimeStamp(0.269007985079);
    msg.setSource(23769U);
    msg.setSourceEntity(251U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(91U);
    msg.label.assign("TPFPHIHWPJDGZOTINGXDUDELWBSKRUMZYKSZUWOHEELSACVRAHIVIORZHBPKLSXVFWEAZDYLRYOQOJPTYMWEBACVBTKULLPJVQGQCPQBXMBHFOWNOYWZDEYGSJMCGRUNTCQEKEDUSVOUGXNFIFAVBDAISJXKCVGPHDAQXXTPRVGJZNNZFJAKQTMNNDJIBAKZOS");
    msg.lat = 0.596814925976;
    msg.lon = 0.808708240799;
    msg.z = 0.348452347692;
    msg.z_units = 191U;
    msg.cog = 0.473269789115;
    msg.sog = 0.0159554977708;

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
    msg.setTimeStamp(0.628278307903);
    msg.setSource(6429U);
    msg.setSourceEntity(91U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(193U);
    msg.label.assign("JETOQEPOHRGXZDHEQLZSIPLMHNNJCAIYCTOLKFJWDDEGVSVBYSXWODYDAZCX");
    msg.lat = 0.488294864557;
    msg.lon = 0.346281694987;
    msg.z = 0.0175570501911;
    msg.z_units = 93U;
    msg.cog = 0.178703299857;
    msg.sog = 0.489769448461;

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
    msg.setTimeStamp(0.795179151044);
    msg.setSource(34702U);
    msg.setSourceEntity(7U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(144U);
    msg.label.assign("JWTAKBVBLMESEBVJOXKDLNLFMVSSJCCPLZWCBIZRYGEFVSSWWMGJJXCQHRPFRTZFUDUEVQHMITLCVAQYUOEHGQAATMQOAHPYZNXTAYOBRYCYHVVUIXDLSOERAMQLJNQFZZLSYZKTHNKKSOOFFKHXFUAEQBIBDRGGMREDSVDKBDKPDWAGRIUTWOZHIQRCKRL");
    msg.lat = 0.500132188274;
    msg.lon = 0.1630106399;
    msg.z = 0.655368327812;
    msg.z_units = 98U;
    msg.cog = 0.0177009645144;
    msg.sog = 0.298286937498;

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
    msg.setTimeStamp(0.678230129822);
    msg.setSource(38675U);
    msg.setSourceEntity(132U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(248U);
    msg.name.assign("QZBUAYEGHCARAQHTOKOSFXIRVEXGIBDWIUPSDGVMZAQSVGENKCIUZAKBCPLMZPTHZXZJLYAUXRWQXPEIWVMNVOHKKBWYGMVUYQTNCFEHWLDUKMMLRRNPORXPJIBSRJGGZYVPOVBCABLDIMWFJMNJTISNSILWDSZZKXRFOLHQTJSTQEFCHFUNBIDSUTAYTRPEOJLGNLKADEDHWUFYCWKTCQOLXDYQMKJNXQU");
    msg.value.assign("SLXPUYLYXJJXTQIONXXEMCAAZTPEPQYNRJOHDJTQHTCEQ");

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
    msg.setTimeStamp(0.407470693951);
    msg.setSource(33527U);
    msg.setSourceEntity(118U);
    msg.setDestination(7123U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VSQVQNAEPOBQQKGINUBPUKTXLRTHVOCRDUVCJBJOWLTZTDCORXYLYECKMESTLQQMLPSZNNCBYXWIPZBMBZHOTVBKWACZKSCUHCQARYKSEBHRPPYFWWIMJJZZJIEDQRTHIGGIWNJGWTYDHROAKRFAXJAKANJPZWFQWBMZFMIHVFTFOXSACIRXUOLWVNNFCZTLPFSOYFEESGSEIYHKVAMFKVEEQNIDGLUDSPODMGDLGUMDDLUXUXYAVRXJGPHXYM");
    msg.value.assign("NTSJPBCLTIENZIFTIQVJO");

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
    msg.setTimeStamp(0.246490244918);
    msg.setSource(52027U);
    msg.setSourceEntity(2U);
    msg.setDestination(7004U);
    msg.setDestinationEntity(24U);
    msg.name.assign("HJBNDDGOQVDRMHOVAGDSTFSSBUIPGWICSENQROSYEOTJHKEJOZBNQYWZYJYXWXMVMHSERFEUDCUUCPCKWKFSZGASPNWPIGQRWKYKVXKLGIJVWERMABWFPQUCBAHUPZYZQPQGIBRKKFRRITNGJLIORXYETGHQTJJNXHCMZXUHLDFHCIJYQFNOEOLKVTUVADVRYWOXBHLMM");
    msg.value.assign("LVWJKHPFDZGDLDRUENCSZWDRBJWMZEXCXPHPDJIIDGLWFJFVJYENODDYAWSEHQWUXPYPVSOAKOCKVIZFGFYUIYFRDSOZWGKMGLZWRX");

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
    msg.setTimeStamp(0.12030802818);
    msg.setSource(53592U);
    msg.setSourceEntity(165U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(15U);
    msg.name.assign("FKLWOKFDTTRNAJPJTOGSOGQOAABJVCILQHPX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MHEASUPISFTBAOGAZGQCLXKVGNLZNLOYWQQGLRJWTFHIOCLTISIZZWWESJYJHTOC");
    tmp_msg_0.value.assign("TJYUBPRFMVRVTTCQCXFTWEOEOOYCLHTLIBGADZMIUECNZLHKUOCCSHFUSKVVPROLGDKLUEWNNDFRBWADBYUZTSTXBRMJRMRQJMKPBGTAFGXHIGZAZOTM");
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
    msg.setTimeStamp(0.218309066494);
    msg.setSource(52359U);
    msg.setSourceEntity(244U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(38U);
    msg.name.assign("DFYZRJMSBDJVLGKBTCYZQEVDVBBOPXFONMDONEWAEUSGQSXFINCIUWBLLBYWYZRQQATFHMNYDKMISRNKODXBLVZV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VTOKUTETNUWFHMYBQRZHOOGTPVSATGLKAZIUELDA");
    tmp_msg_0.value.assign("GCUKUKZMEYMQJCQRKEZBKUVUCYRBQEQRUFDEXZFNMQDAUHHJEOTJSITAI");
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
    msg.setTimeStamp(0.22672472875);
    msg.setSource(5121U);
    msg.setSourceEntity(114U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(248U);
    msg.name.assign("ADAXICVQPYJLOEMPBFMTHPUTSOZLJEFFIPNPXHRLBNNHLGWBQXSBLGQNMERIVGDMNRCTYMSOEPXUZBDQUIEAVVPWBPKYWJWOEEFUVSOJMEWDAYBSOURKATSGCXQNZLZDXADYFOKFZCVAJIEHBUTIYSJNZJUZAZTVHGWLRVZGNOKTEDYCWURPKULPMJKIAOGAT");

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
    msg.setTimeStamp(0.830051809065);
    msg.setSource(43020U);
    msg.setSourceEntity(117U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(88U);
    msg.name.assign("CPZUDFCBTEHIYSRWIFBHZKIRUNADKKXXDQZDXMQSTHHYQPWGEKIBJICGUGVRZSWFNAGYMNBAMNVTRCVCRLNKEQKUVSAUMQWOHJLBUTWAVORCIBROYOUIMGIOJVBPTZJVNJTVSWXXOSRCGLXFQCANXBBNDFGHPWQVWPXRDYPLMHCOTMQJYOEMUEJTSFKXPOGGLYLSQLJTDLPMVZYYBPAJWAOURETHMGXFZZKJAFDHQHEKICNP");
    msg.visibility.assign("PTOGYWLNVXKSJKBNTVZCXSUZKSFRIDLUACUTYWUDZXHJLEAHI");
    msg.scope.assign("OKUKNCVMSVQNCRNVXDGRBROIDVFFAKNWFFLAIIXXHGWLYMRCIWDLRPZVMREJUJIOPXQLXNBSXFVJEKZLPMYBWFFHFZSPGYMTQIYTYCGQNXRHBNCIASYQEEEQNZKUUIKYGDXLVWCBYJEGOSGZBJVUSOIWEHZTGQAXPDWODRDVUBGBJCALCJCMMMHMTTGJTCNNRBWPEKKUPKJUWUFYKDOHDOH");

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
    msg.setTimeStamp(0.633143464615);
    msg.setSource(25720U);
    msg.setSourceEntity(237U);
    msg.setDestination(6303U);
    msg.setDestinationEntity(133U);
    msg.name.assign("AKSFHOJJQPVFSJAJLIVVLZTTNWIAIJBVLJUNMZUGAOQEDZOXHFNKFSZNQNILRFEPXXAKWVITITUDZQCIGHYRHUNSUCRQBNAISLMZLYDEEGMGCTCUIAVOQKMECPVPGHDHEFRWY");
    msg.visibility.assign("CGMRIIQYUDQRLSWMCJISTPFGVHALGENYNMISAAVEBRXUYMFGHCXJNAHQIQTLVDCKKPBOKQTRGMJTLQNYXMABTQOLHHIZQXLHYERFAAIVHVBUVEEFVJWYQZAWWOORJLVGGOSMCP");
    msg.scope.assign("IIZXKKPRUJYOMFGJOTIFALHYWSHZCXWMSXOCKBTAUAHVXWBQJBMDWPTQOTXEVANNHBODDQPYSLIKNGCHLRDXEJMRZJRSTIXIDQVLKNVIBFJYZFCUZURPHWSILVKEOMGEEWYLQHQHOZETZHNEDQGCNNRSKBMPUMYNCRVJWAOSKGDTFRFASYFQVLNKLAZSCRJIUPOGKMPWDPTUAMBCCZPEIQRMBLCONFGDQXJSPGBHGYW");

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
    msg.setTimeStamp(0.0907669639691);
    msg.setSource(61985U);
    msg.setSourceEntity(35U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(148U);
    msg.name.assign("RHOQPZSQKMVARRXWDAHFQDIGSBREUJAHFJLHFBNDNYYTOMWUBZKZPXAZSOQUTSRLFGKGNCTTJGRCOYBAVFVZAUKMPBUQNYPLNQEVVDUIFNILBWFVBTGWQVHXVMTBBNYLWMUXHTOAJTUICXEKWSCJVWHUYFKCQSEQPPHLDNYHRZTJQM");
    msg.visibility.assign("BOGUGLCESXRNXEPZWKKMXBNHCUOXZAPJMOPROHLIAMDAFXYMHQHYNOLWCNEHLAEMXEHNGQFPJNYKGSQZLWWAVPJWXYVATPUYVBFCRWFHVMJVYTAGBDUNMPUFONUROPIICTYXYSXPYIERBBI");
    msg.scope.assign("XHWIFXHZIPPFGAJMBDOHMZPWZKJUVUMYMTGERSWFPAPSGLDSBGCGHOFVMWUGWEAFKIOIKPUUIFEDUADYDSDAFYITJECKBTVTIDWXQVFMLNYTNEDRUJGBRCSDXVVLRWJXNGHQNAHJCOBYTKRVGKZKEFWMUJQRIMLSRPQLBQ");

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
    msg.setTimeStamp(0.967966452949);
    msg.setSource(8483U);
    msg.setSourceEntity(80U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(70U);
    msg.name.assign("ZYVDRSJXKXZHBKPKPTEEABFWSANFACTXSIUDCVQGZMNSAOWJSMUWRLCPQSXGEPDEFMLEUOZAPTFIXTBICPOPMAKDHFJTYDUYMGPLARIOMCEOLXEGJETFXJNHZTZCKJTWOGBAQIBQNLCVDU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JLFTICLCDMJZVRQCRCRNBPODSXTIWPMAJNNKXCGSGNEUZZMYBKSWQQFFOXKQXZWJWGETMKUQTXEYAVWQUGHBJALINIGGDRJOORKMTRVSSZHXAADKGZLJROOGVAKYCLCNEFEGZPDMSUCUHRLEIQVMPOQCUTVIHRMLOAAVSYIIVWQXLTUFIKHNTFHPGTZ");
    tmp_msg_0.value.assign("DHLAOFAKYCRXZLYHFBNMOUAXSRNLQJMAOWWZYUPVEDLIHCQXWZYODHPTJUANHQVEKKFHJQBOFMMLDWQICZFMZNKVCASUXLBVJGXTCVJLHIWWGZBUWQKXWTGRIOQJTGBXEDTGEIDYTCEVFHPKPHURSJFCDVROVCLZJAQSELFTKGYZGMPWUNZRLSWSNFCIEDTPYYGPKGPIGAOVBXSEN");
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
    msg.setTimeStamp(0.640840545426);
    msg.setSource(13523U);
    msg.setSourceEntity(157U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(25U);
    msg.name.assign("HJJXTURKZKRQCWCARTLHVSPBZMEXTDFEGINOEIDQIMFVXHQPIFLNJIUVSTEHOWKVHHVAFHHNXKICBOUEPAQPOYTLIABEDPUNWVTGMSCGYYOYYMCZFKOLIXSDUZQWQBJSDREQGZBVMAPYYUMJJBNPAJTCAPFWFGLBCOZBXDOEWLYXYZXTDWMODIPGJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VQFPJENHMZNDEZJIUCRHBTXAKNUPTBJRQZDNQQVHQONVZMQOWXSRRIZDPWCPCWIXTIWYAOOPJIKXXLKFUCRVLMTOTMHGGBKHZIGSHWEMQHXFCRKLAAMYWXHMLOGASUUZQSAPYCWERWPJGIXJIFXFXYLOLGFANSTEMPJNTUGYFQCJUSDVDMDIFBLYKANCZTJYECGPTUQYDLFFSK");
    tmp_msg_0.value.assign("FNCUTYSXKXFHMOQTREXZHMPNCQWGRYDTHFYRXASYMFGEKIEDNWIJNCEPSVLDKVPHUWBKUBCZIHIY");
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
    msg.setTimeStamp(0.58941313298);
    msg.setSource(56599U);
    msg.setSourceEntity(109U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(164U);
    msg.name.assign("IWDMYJXETZKZGJBVWRRKCHUWNOWHVHIZGCSLYKBLTBTSFUMBGZVSHWMQRQMAKVOOPMZOSDC");

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
    msg.setTimeStamp(0.771975850167);
    msg.setSource(31152U);
    msg.setSourceEntity(206U);
    msg.setDestination(64618U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZOIPJKRKZORFLPKCUTWUZZXFEDRPWEABDYWAGXILLGDFBPJNX");

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
    msg.setTimeStamp(0.0675648404032);
    msg.setSource(21274U);
    msg.setSourceEntity(221U);
    msg.setDestination(15304U);
    msg.setDestinationEntity(44U);
    msg.name.assign("ETNZXMCQRDIEFGABGKGBHGJZFQFTOJSNGJTMDQNDSYAZSYDVPWWNMOIPTUYDOPCVVXUQLTCRWEWQLYMVEWTVVRVDKYUEFJIFALMQDZANXAOIBXZKUPBOQFHYUXTDDWIXLUNNFHXIKAPWHXEGISPORAUUZZGSMKMEVKFCOZNRTQCMNPJLAFACIKFNBCMJBRJLBYLCV");

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
    msg.setTimeStamp(0.339199685747);
    msg.setSource(55983U);
    msg.setSourceEntity(81U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(111U);
    msg.name.assign("HMUGHEKLBLKNZDLTUFXBJNVYPIFYRDQEMRSQAEBNYXWZZOVUWQNJZDGJUALFURQAIWHQMIPFMXDTECBOMIXBVSAKAELBJKVXRXYISPDYQBQSCOGAPEFNCPZXTGLVNDJABMYOZQRZVVLETOKIDKHDXWPHPGMEQLYDJBCQKATWFRSKGKIMPWMNJGXCOYWFEVGUJMZGCUUWYSHRXVOASOHSVCOWUZUIFHSFINSHIPNDTRBTCOYGJTEZLWFATHCN");

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
    msg.setTimeStamp(0.313122110221);
    msg.setSource(5686U);
    msg.setSourceEntity(197U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(175U);
    msg.timeout = 3808077047U;

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
    msg.setTimeStamp(0.859365273877);
    msg.setSource(54569U);
    msg.setSourceEntity(190U);
    msg.setDestination(2567U);
    msg.setDestinationEntity(106U);
    msg.timeout = 3751843863U;

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
    msg.setTimeStamp(0.0970945296349);
    msg.setSource(24269U);
    msg.setSourceEntity(73U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(133U);
    msg.timeout = 1008565043U;

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
    msg.setTimeStamp(0.197320473493);
    msg.setSource(51168U);
    msg.setSourceEntity(232U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(221U);
    msg.sessid = 3689337200U;

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
    msg.setTimeStamp(0.582736640741);
    msg.setSource(3988U);
    msg.setSourceEntity(208U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3452892278U;

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
    msg.setTimeStamp(0.591994884782);
    msg.setSource(19354U);
    msg.setSourceEntity(73U);
    msg.setDestination(59355U);
    msg.setDestinationEntity(64U);
    msg.sessid = 2598022722U;

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
    msg.setTimeStamp(0.436906073169);
    msg.setSource(55721U);
    msg.setSourceEntity(89U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(25U);
    msg.sessid = 4159643136U;
    msg.messages.assign("PIDAAILBWGODHQBLYAZAYQOCGJWSFBDYXBUHEUZSTQWIHQSLMZGTPLHOOYYPYMBODZYACFUUKTTCOLNQHKSXCRMPUJXALDSRGFGJXQQGNXBINZBJICUIFETVPDTIVROHILHMKLKEQDSHEEVWH");

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
    msg.setTimeStamp(0.0971787620894);
    msg.setSource(35058U);
    msg.setSourceEntity(154U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(102U);
    msg.sessid = 1564959642U;
    msg.messages.assign("UAZANIZPEKQPPLBDZLRXSMPRZWFAIHZWSZCVIPVFBKKYHFIQUUSGGRVTFCAXCHOOUTKBGMENRCTFYSDLXURCEWVNBSQYIHINYGNQYBSNBGTCFOVQNLMKTRNDRHXWPZLWAVYADCJQLWEOKMJJJNRVXYUVQJOSYCFJAGIEHXTXPLYUXGZBSMMFCSZKMMTKAADEUKZBDEOGULNWDDAIWOMYBWJGSEEPMIGVPFWTQORFILHOEKJQHPDTHJH");

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
    msg.setTimeStamp(0.307760775331);
    msg.setSource(12475U);
    msg.setSourceEntity(160U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(85U);
    msg.sessid = 2736242544U;
    msg.messages.assign("NOAISHDNGNDTTFWCYDRRDDKQSZAQWRZPMPIQOFHYCKOIEJGUQPPKERRFRVKNQFEEDUZHJGJMUIPVWAWNEUHTPFFLMB");

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
    msg.setTimeStamp(0.297713591813);
    msg.setSource(53409U);
    msg.setSourceEntity(207U);
    msg.setDestination(63367U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1754818990U;

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
    msg.setTimeStamp(0.412053308267);
    msg.setSource(58345U);
    msg.setSourceEntity(233U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1394803083U;

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
    msg.setTimeStamp(0.581654590805);
    msg.setSource(5U);
    msg.setSourceEntity(116U);
    msg.setDestination(28606U);
    msg.setDestinationEntity(81U);
    msg.sessid = 1031110561U;

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
    msg.setTimeStamp(0.228361502871);
    msg.setSource(11101U);
    msg.setSourceEntity(134U);
    msg.setDestination(44409U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1613211092U;
    msg.status = 238U;

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
    msg.setTimeStamp(0.3914757504);
    msg.setSource(36731U);
    msg.setSourceEntity(77U);
    msg.setDestination(44973U);
    msg.setDestinationEntity(81U);
    msg.sessid = 1333887763U;
    msg.status = 100U;

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
    msg.setTimeStamp(0.201991089499);
    msg.setSource(43609U);
    msg.setSourceEntity(25U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(212U);
    msg.sessid = 3167469051U;
    msg.status = 108U;

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
    msg.setTimeStamp(0.06238552924);
    msg.setSource(37426U);
    msg.setSourceEntity(35U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(15U);
    msg.name.assign("VQKUWSLHTVTJCVUMYPWUAHZB");

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
    msg.setTimeStamp(0.534972516366);
    msg.setSource(4516U);
    msg.setSourceEntity(220U);
    msg.setDestination(65450U);
    msg.setDestinationEntity(14U);
    msg.name.assign("PIXEEWNLOCSPZXLTOPFKXHCOYU");

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
    msg.setTimeStamp(0.164907799307);
    msg.setSource(35105U);
    msg.setSourceEntity(13U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(84U);
    msg.name.assign("CGSKGUMQXLLZDWTRIORJOTNSRVLNLCDLATGFXWFODRJHWZOBBVRJPBAHBVWNIKRVSIVTXFVXSEWDAHODALQTZMJXEGJSEDEVOKWFNAKMTMXNYVSPWCBAZYHIETXFCGXPJOMCFSQIUGDQSFHPOCEQHAYPH");

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
    msg.setTimeStamp(0.468194159634);
    msg.setSource(21716U);
    msg.setSourceEntity(213U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(212U);
    msg.name.assign("WNOXLJFUSKGDMTJGODUWLDBOVMNEVHTVJNZNYHCPBKHHXYGLURQFFEQFCDATCHRFOIZSDVJGSBWLLTCRNXYKZNYIJCXDMVXAUNYEZRIRNNESSUXQSAULPDEWOHKPZQYSUSEIZCDSJB");

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
    msg.setTimeStamp(0.515901118008);
    msg.setSource(52962U);
    msg.setSourceEntity(213U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(15U);
    msg.name.assign("AIFRFTFARDBGGDVZKWBDEMPWJTWMQUDQPG");

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
    msg.setTimeStamp(0.548019468605);
    msg.setSource(8175U);
    msg.setSourceEntity(97U);
    msg.setDestination(5670U);
    msg.setDestinationEntity(82U);
    msg.name.assign("MBXDLLFLKUPBLEBEFRFOSWQZTMEAPUOILQLKGISQVCHIJSVAESUTGJXGYMGFVRQVUTKHCOAKZXIRZPZNTKBHEJRAVDXYWJHHALPZRQUXIPQEGSDNHTSDMAOIYUXOYFWCOYWAUKEXGMBVMINDZSNCTXLWKYIGLJKWKHAPHNARPMNGHWRGFGZFBPECOCRYQTEWVWNFB");

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
    msg.setTimeStamp(0.212780234397);
    msg.setSource(13760U);
    msg.setSourceEntity(104U);
    msg.setDestination(65457U);
    msg.setDestinationEntity(96U);
    msg.type = 199U;
    msg.error.assign("QMTTWIHEPUNIHHIMLJDMWFSFLEAWARMLBAISEGELVXDVSLQIQRDYSKDMZTCSZOVHFXDRQLEYRORCVZUMZNHNUGACKWDGGAIGTCXVCWLANRBVVXEFKCWXVFDRGXFSBXYBJDZNEIWCPGQWOTZIZNBQJSEGKTOOFBFPUYJIPHSUYUZWVPSCJQMFAJZNLNXH");

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
    msg.setTimeStamp(0.860232239215);
    msg.setSource(35070U);
    msg.setSourceEntity(157U);
    msg.setDestination(60122U);
    msg.setDestinationEntity(29U);
    msg.type = 0U;
    msg.error.assign("TFPQWZFILHHDGLWGOXRELQHYUGYKJHKVJQMQCWAJBEBIFEBOBPMSVGNLMMEEPOXMTIHWPDYFOULXOIJUSKFHDDREKIBUAKBUXVETZUNTSBODAMUWEFUJRRITNGXFBIG");

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
    msg.setTimeStamp(0.609134441364);
    msg.setSource(59949U);
    msg.setSourceEntity(239U);
    msg.setDestination(20782U);
    msg.setDestinationEntity(214U);
    msg.type = 97U;
    msg.error.assign("UXOTKBZSTAWASMGZRQBBVPQKHXTLBTSQDXJVMXNMAJYFPKEVRRUBOPENSMAACXEWSLCJGQUJGZNSPYYOKHFLOSGAVPYVQPUITUPNYQHLZGMWFZAHRFRBQHEEBMUAKFPIWIKUJGYBSCEVNWSOZCMVFDEWZWGZEYLQLDVDIMDWVTNKJDNJPPJITGEQNJCUWZDBXTSCIFHBUOLRCGIUMXMORGQAEHLKIDIOAHLYFIYNRJZWXLKNXF");

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
    msg.setTimeStamp(0.767351600658);
    msg.setSource(15077U);
    msg.setSourceEntity(74U);
    msg.setDestination(57359U);
    msg.setDestinationEntity(179U);
    msg.seq = 34596U;
    msg.sys_dst.assign("XOQXUMWIFRHUGPIQHPCVLPJFVCJSRZLNOCOWMLOZMAIBNEDMCSUKHVGKSTWEZTBTVJNOXRKQTSSIMTLAJOEUFGYGKKVYIYBDPNOGRHIFYDPEFOWWCAYYDBNSUPYFXKKMLTWOEJTKHPRAJAVOGIHPBCUQHAGHZMZEBMWIEQUIXLYDQTNRDRQXMAJTGXVZUQDBGFSJQXXCZPLHEVSDARCFRVWDBYC");
    msg.flags = 54U;
    const char tmp_msg_0[] = {-125, 104, -16, -13, 21, -57, -127, 76, -40, 62, -124, 105, 3, -14, 52, -10, -96, 23, 115, 0, 44, 108, -62, 124, -27, -22, 89, 31, -100, 46, -57, 55, 111, 25, 88, -96, 26, 89, 79, -56, -104, -102, -25, -75, 96, -7, -69, -92, -28, 73, -111, 73, 36, 101, -119, 109, -76};
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
    msg.setTimeStamp(0.924922620565);
    msg.setSource(47123U);
    msg.setSourceEntity(81U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(32U);
    msg.seq = 24989U;
    msg.sys_dst.assign("ZLJNJLAHTFURYUMGDDXVJSCFPHYSOFPQXLBIFCSQGUSXBGZEAFXUNXAWEZATKCSIFIWRU");
    msg.flags = 131U;
    const char tmp_msg_0[] = {-104, -76, 71, 17, -47, 75, 111, -35, 13, -17, 69, 72, 75, -105, 15, -27, -120, 83, -119, 104, -13, 27, -103, 125, 4, 18, 102, 0, -127, 62, -66, 14, -98, -127, -105, 62, 19, -6, 70, 113, -59, 76, -125, 111, -58, -54, 88, 53, -74, -118, 7, -119, -84, 1, 117, -67, -113, -90, 32, -4, -88, 67, 36, -72, 105, 45, -2, 117, 80, -59, 106, -2, -55, 122, 89, -84, -83, 104, 92, -74, 126, -34, -32, -89, -99, 66, -65, 58, -27, -21, -74, 50, 15, -123, 59, -38, -70, -28, 38, 2, 39, 113, 117, 7, -114, -124, 122, -82, -82, 7, 62, -6, 70, -31, -117, 101, -33, -101, 48, -26, -25, 71, -53, -110, 77, -42, -89, 75, -66, 88, 49, 80, 11, 108, 97, -27, -100, 76, -35, -80, 3, 50, -6, -9, -128, -37, -17, -9, 126, 31, 41, -1, -99, 97, -10, 20, -81, 124, 98, -85, -27, -10, 51};
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
    msg.setTimeStamp(0.27508267772);
    msg.setSource(2350U);
    msg.setSourceEntity(98U);
    msg.setDestination(21723U);
    msg.setDestinationEntity(78U);
    msg.seq = 11522U;
    msg.sys_dst.assign("MSKKOUEYFOZPPKOFRECWMQCUNJGVIIZBZXZVQQKPFKZQTMALTOAKCORBHHCSAMUBNKDBYEXBJUFOGRNBEADNCGJRRWAIJVXYSRTODSNMEOC");
    msg.flags = 158U;
    const char tmp_msg_0[] = {-54, -108, 99, -54, -69, 75, -117, 114, 34, 26, -18, -23, 44, 42, -91, 81, 61, 89, 6, -85, -55, 72, -116, -80, 99, -58, -116, -92, -23, 23, 110, 65, -95, 25, -103, -71, -20, -16, 87, -60, -3, 0, -64, -20, -53, -40, 82, -82, -52, -50, 3, 46, 85, 84, -50, 8, 113, 77, 22, -98, -116, -101, 98, 23, 81, -95, 1, -96, -89, -20, -113, -18, 81, -117, -36, -94, -15, -81, -44, -34, 121, 15, -117, -67, -107, 28, 109, 36, -105, -15, 67, 38, 48, 52, 11, -81, -53, -98, 48, 95, -89, 10, -127, 111, 23, 47, 97, -2, -79, -49, 27, -123, -87, -68, 69, 58, -28, 112, -79, 60, -89, 75, 15, -124, -124, -88, 56, -19, 16, -92, 33, -59, 19, 66, 76, 111, -74, -114, -3, -86, -56, -81, -25, 3, 8, -51, 74, -96, 10, -63, 73, -106, 88, 54, 106, 60, 39, -38, -13, 23, -6, 5, -27, 85, 67, 118, -65, 5, -100, 46, 98, -108, -118, 53, -31, 73, 57, -111, -120, 20, 29, -64, -11, 77, 74, -128, 32, 14, -18, -16, -84, -62, 92, -46, -50, 115, -76, -122, 63, -71, 46, -128, 53, 92, 97, -6, 77, -6, -109, 115, -102, 63, 123, -3, 119, -37, 103, 110, 39, 5, -93, 109, -24, 94, -29, -59, 62, 119, -45, -98, -26, 92, -58, 84, 55, -29, -34, 87, -124, -95, 1, 117, 7};
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
    msg.setTimeStamp(0.912086170248);
    msg.setSource(4674U);
    msg.setSourceEntity(223U);
    msg.setDestination(3646U);
    msg.setDestinationEntity(13U);
    msg.sys_src.assign("UKRRDYPJLGBQRAPZDQTXFIUMNMCGWDKYTMRIDNPSFZKXBFRQSSYGSIVIQVWVZVFDNWHBVJUXFZULIQVARBEIDFATFENGEPORESDBWVCQOWDAQVJHRAQSYVPLKHT");
    msg.sys_dst.assign("MFDNYCMABVXKFJXXURVQUWCFXLTVBTCWHLXJRLDTAPZYXAHKMMOTQIZWVVXQZPZUVKNRFIPRCLYBPOGSCOLBDHESBGBDCUIOIKOKVVJZWGAGMZETVLQBWKWGEUAPKJUGOXJCSTJNLEKRZHNKIYHHR");
    msg.flags = 132U;
    const char tmp_msg_0[] = {27, 3, -114, -19, 3, 60, -82, 125, -34, 85, -37, 4, -2, -71, -45, 38, -29, 113, -27, 98, 76, 63, -35, -106, -95, 31, 86, -81, 104, -49, 20, 95, 106, -82, 26, -66, 9, 119, -76, -84, -71, 19, -6, 57, -59, 84, -70, 80, 8, -2, -3, -54, 83, 38, 12, 79, 20, -18, 28, 40, -46, 36, -45, -125, -71, 18, 101, 100, 13, 47, -50, -18, 86, 5, 35, 40, -125, -102, -102, 98, -30, -50, -60, 82, -97, -2, 7, 20, 5, 73, 120, -44, -42, 40, -81, 32, -81, 48, 45, -3, 100, 71, 99, -93, -21, -8, 118, 95, 95, -118, 68, 56, -68, 4, -64, -35, -70, 29, -109, 36, 61, -125, -62, 115, -62, 45, 2, 122, -65, -99, 92, -121, -54, -120, 56, -86, -91, 67, -90, 73, -74, 123, -64, 120, -104, -11, -115, 65, 20, -18, -16, 18, 115, 126, 42, -59, 67, 19, -26, -123, -66, -38, -11, 62, 53, -34, -45, -128, -93, 103, 86, 99, 55, 76, 125, -36, -37, -70, -18, -74, -33, -22, 56, -20, -50, 42, -62, -98, 29, 71, -76, -93, -36, 98, -49, 12, -74, 27, 92, 27, 108, -93, 58, 94, -114, -25, -40, 49, -54, 43, -121, 91, -126, -47, -86, 57, 114, 24, -100, -76, 35, -97, 45, -88, 116, -63, 58, -3, 23, -80, 38, 30, 91, 30, 62, -92, 15, -6, -67, -29, -20, -51};
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
    msg.setTimeStamp(0.0692410365847);
    msg.setSource(64347U);
    msg.setSourceEntity(166U);
    msg.setDestination(36667U);
    msg.setDestinationEntity(247U);
    msg.sys_src.assign("EFYCYSIBFMKWVSIJSWTYHULNYECWNDYYBZUNTBUBEOPEMLDJQFBICKSXTHLTTQASRJJGCRQMPGCQPZFLDYQW");
    msg.sys_dst.assign("XLEFZWVTGNFGDUMRQINVOEJHHPXKZIAMRDUXCCOQEPIJQRIAKVFKMCQHAGKSSQFSPHUIQAPNXLJOGQWRMTSLLZUEZXCBBQSVUWICNCTNXUMZIMJMNAREJZUNIWTGJYSAXWFDOKQHYUUSZICPVYJEMPDZEOTXWBPORQYPYHLZGSELHHBMKWBYLOSALBRYBG");
    msg.flags = 18U;
    const char tmp_msg_0[] = {80, 66, 37, -123, -74, -76, -26, -103, 59, 94, -22, 15, -112, -118, 61, 35, -100, 105, -44, -6, 17, 3, 83, -37, -55, -47, 46, -107, 35, 97, 12, 126, -54, 49, 0, -57, -9, -35, 110, -36, -6, 86, 63, -110, 30, 41, 34, -118, -71, 105, -18, 46, -37, -30, 30, 100, 101, 25, -86, -36, -95, -70, -49, 31, -28, -55, 123, 94, 116, -95, 33, 97, 15, 51, 118, -9, 60, 43, -36, -52, -34, 37, 36, -72, 13, -4, 82, -127, 84, -57, 41, 16, 14, -110, 50, 119, 46, -72, -39, -113, -13, 58, -80, -116};
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
    msg.setTimeStamp(0.336932327532);
    msg.setSource(44816U);
    msg.setSourceEntity(244U);
    msg.setDestination(32731U);
    msg.setDestinationEntity(188U);
    msg.sys_src.assign("ITJLOHCUAWXIMLPBASNODIQFFNKNLPRESXPWRF");
    msg.sys_dst.assign("WMJUEZHDMRBQNGZARUSZVIRDJEQJNMISKGNLSAXWZKHVZTPJYEWXKNAQRMWMMBAKESLFBDOKXGFUHLVOJFVQRUMKJBIWDFJPGRPZSGOWPSBDKTPDUTHFFLSMXVAVJURFCPXBHICHNOOEQKXNVZLTYJYPSGJWBRFTYHMCRCDQKOIILUCQQOOXFWGCXATNUYVBYLVQOPDOATBITLQSUCELHYWMCBNFAHTRITGVPGEEZNCAXNGZKDCAHEZEYI");
    msg.flags = 182U;
    const char tmp_msg_0[] = {-30, 13, 44, 62, 113, -88, -91, 104, -3, 19, -113, -70, -2, 54, 120, 57, 28, 113, -83, -61, -124, 13, -1, 89, 18, -18, 1, 55, 65, 70, 64, 58, -57, 111, -98, -40, 70, -79, 93, 115, 21, 17, 72, 29, 75, 69, 67, 112, 46, 54, 88, 126, 61, 75, -85, -78, -99, 4, 46, -115, 9, 33, -105, 66, -25, -13, 22, 36, 110, -117, -20, -103, -81, -117, 41, -91, -102, 28, 55, 82, -13, -101, -67, -104, 60, -33, -77, 122, 33, 20, -47, -12, -3, 56, -45, -6, 0, 16, -85, -104, -17, -52, -56, 41, 10, 68, -78, -90, -126, -51, -116, -89, 29, -88, 68, 88, 24, 41, -85, -18, -64, -121, -55, -10, -43, 34, 88, 122, 39, -38, 80, 97, -63, 89, 108, -93, 44, 36, -126, 34, 7, -115, -92, -108, -101, 7, -107, 89, 58, 36, 36, 71, 101, 105, 115, -42, -86, -67, -12, -45, -8, 91, 123, -120, -39, 69, -113, -94, -93, 30, 71, 89, -76, -120, -102};
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
    msg.setTimeStamp(0.302382069122);
    msg.setSource(22218U);
    msg.setSourceEntity(139U);
    msg.setDestination(13213U);
    msg.setDestinationEntity(185U);
    msg.seq = 42790U;
    msg.value = 150U;
    msg.error.assign("ELIQZBDAONGNOUZAWGNIWEUETLOZJQSLKPNAXFWRCGADFPITOFFHQFIXMREWQMYDWVGYCNATZHOOVPTTJBZYKMGPEMOJXBIUSSGAAZFDSQNVEDVQODNHUUXPAPBFHYDMWINKTHVMDXHSSWSNJVKUBKUPBMXKCAUIJQFDRLHCYXGKULNAYIZCVHJQLBVTROWJXGRCTFDELBCUPEHFQZL");

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
    msg.setTimeStamp(0.715256303707);
    msg.setSource(62234U);
    msg.setSourceEntity(45U);
    msg.setDestination(36483U);
    msg.setDestinationEntity(243U);
    msg.seq = 23827U;
    msg.value = 238U;
    msg.error.assign("GHXKORDRBVMBWRKFEBOYJXJWJIMXEHEFKLSQFNBFNSYWHDWRIBCLBGHVZZZNPSEFXLMGNWEIOQMEFOWQBQLALGCGFOIAGCFCT");

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
    msg.setTimeStamp(0.97807498221);
    msg.setSource(40519U);
    msg.setSourceEntity(165U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(94U);
    msg.seq = 28867U;
    msg.value = 126U;
    msg.error.assign("VWOIHYYPGZMAFNTCJJYBSDWTJGNTGVJKULXBWBXXBEIDDFDIESQOMUPCLSGRBMXGBROANLSBTJCMPFWBRHTHCGKFKHTKHKQGAVDMUEQWVOYTNJRWEAYZFZPBCJQNESEKQCSFUHKLINPXIRPYXCWVWPHVKLUE");

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
    msg.setTimeStamp(0.676194735568);
    msg.setSource(19210U);
    msg.setSourceEntity(176U);
    msg.setDestination(2291U);
    msg.setDestinationEntity(43U);
    msg.seq = 32201U;
    msg.sys.assign("XPTZJLWQHTMJJZCOAPEALVKZJHKWCXCDSFIMYJ");
    msg.value = 0.496875733527;

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
    msg.setTimeStamp(0.641567369143);
    msg.setSource(43802U);
    msg.setSourceEntity(36U);
    msg.setDestination(48245U);
    msg.setDestinationEntity(161U);
    msg.seq = 43672U;
    msg.sys.assign("AILNDNMPRJCJLZGWSMYLTEKLTZGDPZQXKPCWDUDVDTGZOBKAZCXHVCZSIHJHUPAMEYUTUYDAKFBCOBPMENRDPZLBATJXXQVIBXTNDVRSSKEOJHVJ");
    msg.value = 0.62218270099;

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
    msg.setTimeStamp(0.581570613838);
    msg.setSource(61124U);
    msg.setSourceEntity(210U);
    msg.setDestination(36613U);
    msg.setDestinationEntity(48U);
    msg.seq = 2574U;
    msg.sys.assign("EJGGBLVWIRFVLTMYRSAXZRDGAEUWMFKJUFHBXICTXJALBKIGZROSVLCPJDWZODZSTFKQVERZNFLSGUXOQRYKQKNFPIUKDZYMBBYWMQEFHSAVSMWVVLCEIGTAOKHVYKIGPKRPKNQOFUEHVYWTDMCISHRSMZRLUQXJMATLGOHYTALJNQXEZYSOCDPNQQANLUNPHJQWJYCIEUZCOMTGRHYN");
    msg.value = 0.786110961607;

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
    msg.setTimeStamp(0.723498218996);
    msg.setSource(41665U);
    msg.setSourceEntity(166U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(135U);
    msg.action = 167U;
    msg.longain = 0.523581263634;
    msg.latgain = 0.287237770502;
    msg.bondthick = 2704517353U;
    msg.leadgain = 0.0608570668418;
    msg.deconflgain = 0.335619399804;

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
    msg.setTimeStamp(0.615108310219);
    msg.setSource(17493U);
    msg.setSourceEntity(46U);
    msg.setDestination(42733U);
    msg.setDestinationEntity(54U);
    msg.action = 120U;
    msg.longain = 0.656798025259;
    msg.latgain = 0.880083775064;
    msg.bondthick = 128970216U;
    msg.leadgain = 0.686616771933;
    msg.deconflgain = 0.0514563554876;

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
    msg.setTimeStamp(0.541422210209);
    msg.setSource(37800U);
    msg.setSourceEntity(161U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(18U);
    msg.action = 77U;
    msg.longain = 0.251648507487;
    msg.latgain = 0.359060377039;
    msg.bondthick = 3564638705U;
    msg.leadgain = 0.119690862127;
    msg.deconflgain = 0.617817401766;

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
    msg.setTimeStamp(0.530509826395);
    msg.setSource(22598U);
    msg.setSourceEntity(198U);
    msg.setDestination(49324U);
    msg.setDestinationEntity(114U);
    msg.err_mean = 0.747058969808;
    msg.dist_min_abs = 0.256840821831;
    msg.dist_min_mean = 0.923596667431;

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
    msg.setTimeStamp(0.839991279338);
    msg.setSource(4127U);
    msg.setSourceEntity(77U);
    msg.setDestination(580U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.22724801634;
    msg.dist_min_abs = 0.422484538354;
    msg.dist_min_mean = 0.63926330608;

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
    msg.setTimeStamp(0.789904579412);
    msg.setSource(9279U);
    msg.setSourceEntity(28U);
    msg.setDestination(12251U);
    msg.setDestinationEntity(202U);
    msg.err_mean = 0.0416285977093;
    msg.dist_min_abs = 0.293398735252;
    msg.dist_min_mean = 0.0952321155348;

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
    msg.setTimeStamp(0.329999540822);
    msg.setSource(32244U);
    msg.setSourceEntity(57U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(220U);
    msg.action = 165U;
    msg.lon_gain = 0.965441053148;
    msg.lat_gain = 0.148408396066;
    msg.bond_thick = 0.896452716678;
    msg.lead_gain = 0.567728211069;
    msg.deconfl_gain = 0.510800899601;
    msg.accel_switch_gain = 0.170708814142;
    msg.safe_dist = 0.784716752575;
    msg.deconflict_offset = 0.955902343642;
    msg.accel_safe_margin = 0.870901460502;
    msg.accel_lim_x = 0.713055051222;

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
    msg.setTimeStamp(0.861261395734);
    msg.setSource(39558U);
    msg.setSourceEntity(128U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(145U);
    msg.action = 162U;
    msg.lon_gain = 0.0895644724334;
    msg.lat_gain = 0.162832909642;
    msg.bond_thick = 0.259021478669;
    msg.lead_gain = 0.551822488953;
    msg.deconfl_gain = 0.599923618451;
    msg.accel_switch_gain = 0.0604852248094;
    msg.safe_dist = 0.451644793416;
    msg.deconflict_offset = 0.196788299272;
    msg.accel_safe_margin = 0.199987286691;
    msg.accel_lim_x = 0.0401864954734;

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
    msg.setTimeStamp(0.550304475066);
    msg.setSource(8762U);
    msg.setSourceEntity(101U);
    msg.setDestination(57144U);
    msg.setDestinationEntity(172U);
    msg.action = 97U;
    msg.lon_gain = 0.753153821957;
    msg.lat_gain = 0.988924226568;
    msg.bond_thick = 0.995844341383;
    msg.lead_gain = 0.90408950244;
    msg.deconfl_gain = 0.89548344759;
    msg.accel_switch_gain = 0.670791399336;
    msg.safe_dist = 0.512356527806;
    msg.deconflict_offset = 0.11803343464;
    msg.accel_safe_margin = 0.901777733435;
    msg.accel_lim_x = 0.042210615119;

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
    msg.setTimeStamp(0.873228317007);
    msg.setSource(59191U);
    msg.setSourceEntity(64U);
    msg.setDestination(34146U);
    msg.setDestinationEntity(215U);
    msg.type = 215U;
    msg.op = 226U;
    msg.err_mean = 0.913518541335;
    msg.dist_min_abs = 0.613109724786;
    msg.dist_min_mean = 0.568162338155;
    msg.roll_rate_mean = 0.0434147770451;
    msg.time = 0.210638855046;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 7U;
    tmp_msg_0.lon_gain = 0.866614471595;
    tmp_msg_0.lat_gain = 0.34199195339;
    tmp_msg_0.bond_thick = 0.988134359978;
    tmp_msg_0.lead_gain = 0.353121670741;
    tmp_msg_0.deconfl_gain = 0.125508800396;
    tmp_msg_0.accel_switch_gain = 0.376048688666;
    tmp_msg_0.safe_dist = 0.364336838904;
    tmp_msg_0.deconflict_offset = 0.488571801607;
    tmp_msg_0.accel_safe_margin = 0.963414172775;
    tmp_msg_0.accel_lim_x = 0.360763803219;
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
    msg.setTimeStamp(0.570115079666);
    msg.setSource(33779U);
    msg.setSourceEntity(200U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(232U);
    msg.type = 122U;
    msg.op = 67U;
    msg.err_mean = 0.668851222397;
    msg.dist_min_abs = 0.700674053377;
    msg.dist_min_mean = 0.48900198119;
    msg.roll_rate_mean = 0.376030232762;
    msg.time = 0.69124569437;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 63U;
    tmp_msg_0.lon_gain = 0.35154530517;
    tmp_msg_0.lat_gain = 0.112179190688;
    tmp_msg_0.bond_thick = 0.0582933327374;
    tmp_msg_0.lead_gain = 0.862420659616;
    tmp_msg_0.deconfl_gain = 0.595003823388;
    tmp_msg_0.accel_switch_gain = 0.95117064147;
    tmp_msg_0.safe_dist = 0.698243419459;
    tmp_msg_0.deconflict_offset = 0.526083174909;
    tmp_msg_0.accel_safe_margin = 0.105009484501;
    tmp_msg_0.accel_lim_x = 0.688708547119;
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
    msg.setTimeStamp(0.667443971455);
    msg.setSource(47123U);
    msg.setSourceEntity(27U);
    msg.setDestination(50038U);
    msg.setDestinationEntity(88U);
    msg.type = 51U;
    msg.op = 167U;
    msg.err_mean = 0.321593991792;
    msg.dist_min_abs = 0.369849605135;
    msg.dist_min_mean = 0.397828331846;
    msg.roll_rate_mean = 0.520879425713;
    msg.time = 0.755838737832;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.lon_gain = 0.939769591459;
    tmp_msg_0.lat_gain = 0.472851915321;
    tmp_msg_0.bond_thick = 0.0617072184236;
    tmp_msg_0.lead_gain = 0.295077686;
    tmp_msg_0.deconfl_gain = 0.161759159929;
    tmp_msg_0.accel_switch_gain = 0.0392006546831;
    tmp_msg_0.safe_dist = 0.360986290281;
    tmp_msg_0.deconflict_offset = 0.572536568725;
    tmp_msg_0.accel_safe_margin = 0.220536116026;
    tmp_msg_0.accel_lim_x = 0.434394073501;
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
    msg.setTimeStamp(0.396668212334);
    msg.setSource(12205U);
    msg.setSourceEntity(209U);
    msg.setDestination(32616U);
    msg.setDestinationEntity(87U);
    msg.uid = 56U;
    msg.frag_number = 212U;
    msg.num_frags = 158U;
    const char tmp_msg_0[] = {51, -79, 84, -78, -9, -127, 56, 0, 45, -13, 18, 78, 1, -29, -33, 101, -46, -122, 40, 40, 75, -82, 81, -51, -89, -100, 70, -101, 55, 56, 36, 86, 22, -53, -28, -43, 120, -87, 29, 61, 96, 64, -21, -22, -8, -37, 58, -102, 41, -117, -96, -57, 69, 60, 8, 45, -17, 0, -77, 2, 122, -124, -114, -56, 117, -30, 17, -37, 47, 32, 73, 56, 7, -124, 43, 24};
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
    msg.setTimeStamp(0.998369611006);
    msg.setSource(51400U);
    msg.setSourceEntity(252U);
    msg.setDestination(46418U);
    msg.setDestinationEntity(234U);
    msg.uid = 212U;
    msg.frag_number = 138U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {-82, 43, -112, -56, -51, 109, 103, -49, -44, 27, -80, 104, -105, -29, 95, -21, 82, -59, 50, -89, -118, -81, -113, 117, -4, 86};
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
    msg.setTimeStamp(0.766757736076);
    msg.setSource(17688U);
    msg.setSourceEntity(200U);
    msg.setDestination(43299U);
    msg.setDestinationEntity(163U);
    msg.uid = 245U;
    msg.frag_number = 209U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {-128, 72, -61, 111, 51, -94, 76, 100, 126, 7, -62, -125, 104, -119, 8, -95, 50, -124, 74, 68, -9, -105, 31, 116, 104, 12, 122, -121, 16, -21, 120, -124, -83, 106, -126, -86, 94, 121, 102, 83, -34, -91, -79, 23, 94, 116, -51, 91, -32, 66, 25, -93, 61, 84, -77, -3, -99, -104, 84, 71, -47, 104, 15, -84, -20, 120, 59, 57, 71, 68, -81, 38, 116, -66, 29, -61, -20, -120, 106, 122, 1, -30, -5, 54, 36, 20, -35, 86, -123, -59, 69, 55, 3, -55, -106, -44, 50, -21, 17, 34, -69, -8, -25, -79, -51, -57, 115, -61, 86, 104, -80, -3, -3, 46, -105, 106, -127, 3, -6, 65, 7, 112, -114, 68, 124, 53, -9, 69, 67, -88, 76, -87, -86, 45, -28, 118, 19, -87, 123, 108, 9, 124, -117, 120, -6, 50, 54, -87, 4, 124, 91, -80, -108, -35, 3, 11, 10, 53, -99, 63};
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
    msg.setTimeStamp(0.566576504016);
    msg.setSource(5029U);
    msg.setSourceEntity(175U);
    msg.setDestination(12384U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("TUGHKXSRHVWWLJJXFPDTOZINNMKLBHQMORSWGQGTSDZVKSEPMHEKJASOJHKWBLGRPSFTEEYMHIUSWZTQADVQPUABVOEFRDNCXURNOVHJIHWZEOQIIZMAOOCVGKNSDUELIAVBLUYNQYBDVA");
    const char tmp_msg_0[] = {-16, -39, -44, -16, -83, -105, 7, -11, -21, 116, -1, 45, 105, -6, 41, -109, -72, 74, 75, -40, 46, -83, -25, 54, -15, -126, 89, 117, -9, 112, 33, 106, -39, 15, -19, 33, 49, 122, 58, 110, -10, -40, -102, -76, 48, -83, -15, 37, 115, 62, 84, 11, 39, -40, 42, 39, -17, 17, -43, -12, 108, 28, 37, -77, 95, 77, -53, -8, -1, -56, 62, -41, 99, 43, -72, 119, -85, 77, -49, -60, -75, -115, 56, 50, 58, 80, 76, 99, -82, -110, -20, -26, 65, 123, -116, -1, 38, 50, -4, -71, 49, 52, 116, -120, 45, -54, -74, -52, 96, -21, -128, -104, 83, 82, -36, -33, -29, -102, 118, 39, -58, -112, -17, -87, -46, -35, -97, -77, -65, 5, 58, -89, -13, -113, -6, 60, 96, 123, 14, -8, 37, -17, 39, -77, -106, 1, 65, 36, 103, -109, -106, 96, -13, 113, 109, -83, 5, -26, -118, -87, 102, -101, -75, -91, 8, 76, 103, 91, -15, 72, 10, -8, -116, 18, 126, -25, -110, 53, -55, -29, 5, -101, -77, -108, 47, 83, 43, -68, -9, -18, -101, 59, 68, -59, 59, 120, 87, -116, 94, -53, 21, -96, 19, -7, -36, -74, -82, -47, -72, 62, -68, 56, 94, 1, 61, -41, 36, 113, -61, -77, 7};
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
    msg.setTimeStamp(0.697539267508);
    msg.setSource(3068U);
    msg.setSourceEntity(204U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(13U);
    msg.content_type.assign("NFMNLCQCHMAYTDJTFEQIDRCQQYXREGIDHBYZXYPWLKZEXBWRGBHMLHSJFAARCPJENPDSAVGCOYUIRBUBOXGXPXI");
    const char tmp_msg_0[] = {103, -96, 85, 44, -31, -117, 33, 26, 118, 85, -54, -28, -57, 105, 123, -81, -78, 2, -66, -25, -17, 25, 114, 75, 36, -8, 15, 105, 62, 103, -29, -22, 57, -80, -78, 105, 96, 41, -112, 47, -78, -27, 52, 28, -115, -76, 46, 39, 79, 47, 36, 18, -58, 123, -86, -85, -65, 27, -19, 79, 59, -37, -16, 21, 118, 34, 8, 105, 27, -78, 125, 78, -21, -126, -128, 17, -79, 91, 69, -50, -48, 95, -23, -118, 16, -53, -76, 74, -47, -98, 109, 123, -67, -76, -74, 59, 83, -26, 40, -41, 114, -18, 37, 63, 18, -66, 33, 71, -93, -34, 67, 24, -63, 48, -79, 15, -18, 78, 35, 44, 19, -48, 35, 45, 15, 109, 31, 34, -34, -45, -62, -28, 105, 14, 1, -89, -66, 79, -36, 67, -12, -98, 122, 3, 1, 43, 95, -87, -87, 36, 123, -21, -52, -30, -7, -95, -59, -110, 36, 95, 79, -116, -68, 50, -60, -98, 91, -20, 56, -20, 94, 56, -7, 18, 72, 78, -53, -106, 39};
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
    msg.setTimeStamp(0.0353513032008);
    msg.setSource(47960U);
    msg.setSourceEntity(95U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(106U);
    msg.content_type.assign("VYMSGQKLOHNTUOWQRWVSOUKPCWUXFXADVQXSJUTMGXTEKRZQDKLSUQJVXCBINGCZ");
    const char tmp_msg_0[] = {-73, -24, 28, -4, 70, -46, 122, -112, 47, -22, -52, -100, 100, 75, 25, 118, 39, -24, 103, 53, -79, 40, 39, -70, 49, -104, 103, 65, -103, 67, -41, -78, 50, -107, 94, 125, 87, -55, 62, 54, 117, 100, 120, -48, -53, 97, -38, 73, -126, 5, -102, -27, 94, 39, -64, -69, 26, -122, 44, 21, -20, -24, 109, 28, 28, 4, -41, 106, -49};
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
    msg.setTimeStamp(0.662925483931);
    msg.setSource(61222U);
    msg.setSourceEntity(232U);
    msg.setDestination(17437U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.22372697951);
    msg.setSource(38018U);
    msg.setSourceEntity(72U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.126597683683);
    msg.setSource(28049U);
    msg.setSourceEntity(191U);
    msg.setDestination(32756U);
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
    msg.setTimeStamp(0.228154515839);
    msg.setSource(4174U);
    msg.setSourceEntity(244U);
    msg.setDestination(37112U);
    msg.setDestinationEntity(45U);
    msg.target = 42687U;
    msg.bearing = 0.343964734779;
    msg.elevation = 0.947481241636;

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
    msg.setTimeStamp(0.904757037072);
    msg.setSource(56218U);
    msg.setSourceEntity(157U);
    msg.setDestination(15593U);
    msg.setDestinationEntity(243U);
    msg.target = 54554U;
    msg.bearing = 0.097065532321;
    msg.elevation = 0.429064454746;

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
    msg.setTimeStamp(0.95186340138);
    msg.setSource(11201U);
    msg.setSourceEntity(206U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(147U);
    msg.target = 17330U;
    msg.bearing = 0.868415341353;
    msg.elevation = 0.919941858204;

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
    msg.setTimeStamp(0.852723265156);
    msg.setSource(42088U);
    msg.setSourceEntity(25U);
    msg.setDestination(40043U);
    msg.setDestinationEntity(109U);
    msg.target = 23627U;
    msg.x = 0.80375573768;
    msg.y = 0.739566661031;
    msg.z = 0.437822404445;

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
    msg.setTimeStamp(0.727236458134);
    msg.setSource(57226U);
    msg.setSourceEntity(20U);
    msg.setDestination(57156U);
    msg.setDestinationEntity(1U);
    msg.target = 62905U;
    msg.x = 0.200418845977;
    msg.y = 0.373995557483;
    msg.z = 0.27159382027;

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
    msg.setTimeStamp(0.540592913372);
    msg.setSource(47700U);
    msg.setSourceEntity(85U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(218U);
    msg.target = 11353U;
    msg.x = 0.449636673675;
    msg.y = 0.0880352052103;
    msg.z = 0.581520261316;

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
    msg.setTimeStamp(0.0554444533639);
    msg.setSource(54976U);
    msg.setSourceEntity(213U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(194U);
    msg.target = 6981U;
    msg.lat = 0.098397069234;
    msg.lon = 0.356522167839;
    msg.z_units = 29U;
    msg.z = 0.00197997332355;

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
    msg.setTimeStamp(0.455976051066);
    msg.setSource(33706U);
    msg.setSourceEntity(178U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(127U);
    msg.target = 112U;
    msg.lat = 0.543002814415;
    msg.lon = 0.232418209345;
    msg.z_units = 178U;
    msg.z = 0.331411045404;

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
    msg.setTimeStamp(0.940948385217);
    msg.setSource(12969U);
    msg.setSourceEntity(70U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(125U);
    msg.target = 12534U;
    msg.lat = 0.160399088239;
    msg.lon = 0.526561035314;
    msg.z_units = 9U;
    msg.z = 0.745129354009;

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
    msg.setTimeStamp(0.203616200205);
    msg.setSource(54880U);
    msg.setSourceEntity(64U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("ELVTJNRVJENSQMDFNATPYKKSGIXWQG");
    const char tmp_msg_0[] = {-18, -20, 41, 110, -122, 48, 45, 79, -105, 35, -114, 47, -23, 32, 107, 93, -67, -13, 43, -67, 69, -13, 22, -67, -68, 19, -120, -55, 32, 17, -41, -23};
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
    msg.setTimeStamp(0.507704831796);
    msg.setSource(28348U);
    msg.setSourceEntity(194U);
    msg.setDestination(62152U);
    msg.setDestinationEntity(158U);
    msg.locale.assign("ENXRCWLFIOSUNYTRIQNFOGDGBZHBHINVSFRKGBZJLPEBNUWANTUFXGASHDOXRSQNZSGOULKPZYZOTMZZJDQLHTEYCKHERCFBJLUJWTOYWHAWTGVMRWPVWEACURDACDQBRSEPIVOXCQXCYZGJAAQUYQACMXESDIBFRJ");
    const char tmp_msg_0[] = {-18, -39, 86, -94, 104, 9, -69, 17, -31, -106, -14, -100, -46, 42, -47, 102, -66, -110, 35, 11, -75, -90, 82, -118, 15, 74, -117, 64, -73, -72, -5, -105, 83, -2, -32, 48, 20, -5, -10, -20, 105, -18, -22, 122, -31, 116, 125, -74, -69, -22, 48, -125, -65, -15, -79, -63, 48, -90, -88, -90, 66, -46, -102, 38, -70, 110, -86, 39, -24, -58, 47, 38, 18, -26, 92, -25, -51, 22, 20, -87, 79, -37, 80, -92, -82, 108, -115, -56, -43, 2, 28, -50, 47, -92, 30, -18, -1, 42, -62, -109, -125, 42, 72, -63, -59, 46, 103, -21, -105, -60, -5, 98, 73, 108, -56, 75, 89, -4, -41, -14, -11, -26, 117, 79, -90, 50, 26, -3, 11, 98, 22, 2, 31, -55, 26, -23, 24, -46, 114, 80, 13, 49, -109, -53, -116, 72, 8, -63, 53, 40, 82, 119, 25, -76, -38, -117, 103, -58, -93, 2, 52, 95, 10, 79, 126, 89, -71, -48, -48, -126, -85, -127, 39, -93, -6, 88, -77, -95, -82, 70, -74, 117, 31, -15, -107, 34, -23, -36, 28, -39, 78, 54, -99, -87, 104, 35, 79, -59, 55, -2, 61, -82, 80, 122, -28, -6, -98, -127, 43, -107, 43, -18, -31, 117, 126, -37, 38, 117, -123, -124, 72, 49, -98, -56, 112, 100, -109, -44, -87, 93, 53, -119, -122, -103, -87, -75, -89, -16, 63, -27, 65};
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
    msg.setTimeStamp(0.0676902612064);
    msg.setSource(62627U);
    msg.setSourceEntity(91U);
    msg.setDestination(44447U);
    msg.setDestinationEntity(6U);
    msg.locale.assign("NEETYABLLAXDAXQWJCUHHVNMJRADPMVIHENKPOUUAKZTFHLQJEQTOYIFGTXNXNPISULMSVBWWRRGVWTAJKTRRXOFCYJJQKGPJLQVMPPUXRXTLNFCOGWFGGJQHFBUZHDKTCALHWEQYXGWBMYIKWIIABMPUYPOLVLYDZE");
    const char tmp_msg_0[] = {19, 7, 93, -49, 29, 71, -3, 28, 4, 76, 110, -79, -6, 13, -44, 37, -80, 47, 25, -57, 84, -52, 74, -36, -86, -76, 25, -73, 118, -14, -33, 24, 31, -32, 36, -42, -52, -127, 61, -7, 54, 81, 31, -89, -114, -36, -60, 102, -25, -62, 49, 7, 50, 22, 25, -5, 12, -25, -12, 77, 107, -56, 25, 28, -28, 9, 37, 36, 7, -103, 56, -16, -113, 122, 121, 66, -81, 43, -7, 95, -108, 70, 96, -34, -88, 51, -22, 27, 48, 106, -40, 57, 86, 27, -117, 35, -64, -117, 67, 84, -65, 53, 109, 42, -97, 41, 15, 39, -66, 110, 29, 89, 92, 124, -93, 17, -42, -55, -10, -78, 122, -80, -17, -56, 99, -75, 94, -76, -43, 85, -48, 95, -75, -19, -85, 92, -31, -25, 108, 35, 1, -117, -112, -39, 69, 114, -1, 107, -85};
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
    msg.setTimeStamp(0.483489311238);
    msg.setSource(37432U);
    msg.setSourceEntity(120U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.175977745958);
    msg.setSource(9769U);
    msg.setSourceEntity(131U);
    msg.setDestination(39008U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.458686676941);
    msg.setSource(48710U);
    msg.setSourceEntity(226U);
    msg.setDestination(17703U);
    msg.setDestinationEntity(173U);

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
    IMC::NecMsg msg;
    msg.setTimeStamp(0.722154867949);
    msg.setSource(36947U);
    msg.setSourceEntity(158U);
    msg.setDestination(24206U);
    msg.setDestinationEntity(20U);
    const char tmp_msg_0[] = {-15, 32, 2, -99, -78, 8, -121, 124, 50, -91, -47, 110, 115, -2, -19, -27, 94, 4, -93, -43, -26, 102, -98, -44, 4, 78, 76, -9, 15, 78, -58, 100, -105, 106, -56, -26, 106, -40, -29, -116, 72, 2, 83, -126, 89, 111, -76, 31, 124, 110, 96, 115, 73, 4, -31, -52, -61, 125, -43, 16, -63, 40, -76, 122, 101, -114, -60, 46, -56, 83, -47, -46, 89, -56, 97, -44, 33, -119, 52, 111, 94, 65, -84, 59, -25, 41, 100, -51, -101, -57, -49, -18, 83, 57, -123, -70, 90, -20, 111, 79, 54, 123, 104, 117, 42, -1, 75, -32, -122, -21, -11, 56, 59, 108, -66, -35, -48, -62, -72, -100, 96, -79, -65, -36, 106, -121, 73, -24, 53, -21, -105, 92, 99, 95, 98, -92, -112, -11, -56, 55, 90, -61, -17, 76, 53, -111, -95, 105, 0, 71, 70, 104, -13, 12, 95, 31, 63, -43, -105, 12, -75, -72, -125, -93, 9, -112, -9, -85, 31, -46, 9, -21, -113, 51, -48, 1, -113, 5, -106, -51, 79, 44, 121, 29, 29, -55, -27, 61, -109, -66, -44, 117, 118, -41, 98, -78, 57, 35, -92, -61, 110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.895599523283);
    msg.setSource(46078U);
    msg.setSourceEntity(211U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {-95, 125, 120, 50, -37, 54, 38, -30, -116, -105, -69, 53, 98, 71, 31, 96, -128, 15, 119, 125, -95, 16, 27, 43, 48, 110, -32, -28, 111, 71, -21, -3, -82, -32, 72, -3, -87, 32, -54, 81, -117, 3, 116, -40, 126, -32, -16, 107, -104, 72, 41, 85, 116, 37, -17, 81, 22, -9, 48, -37, 40, 37, -4, -69, 34, -50, 96, 4, 45, -69, 53, -122, 34, 48, -60, -59, -87, 4, -67, -13, 7, -93, 25, 50, -8, 89, -9, 109, -18, -61, 48, 46, -44, 64, -122, -80, 98, 25, 95, 102, -87, -39, 124, -24, 16, 99, -31, -26, 62, -21, 70, -41, -111, 45, -3, -19, -112, -10, 91, 64, -32, 17, -9, -60, -31, -115, 71, 55, -103, 48, 78, -66, 9, 101, 93, 50, -38, 19, -63, 85, 123, 106, -2, 100, -67, 66, 60, -7, 69, 25, 107, 46, -35, 120, -57, -97, -100, -92, -63, -101, -109, 19, -80, 75, 125, 56, -117, 1, 79, -19, -93, 24, -14, 20, -47, 88, -26, -47, -52, 61, -1, 14, 68, -118, 27, 85, -106, 53, -77, 82, 105, 80, 44, 41, -54, 94, 45, 99, 72, -71, 111, 84, 19, 47, 7, 77, -34, 64, 30, -84, 114, -123, -83, 79, 88, -25, -25, -59, -7, -31, -78, 41, 41, 112, 24, -71, -54, 97, 109, -46, 80, 92, -92, 97, -60, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.719568997051);
    msg.setSource(13663U);
    msg.setSourceEntity(221U);
    msg.setDestination(57181U);
    msg.setDestinationEntity(134U);
    const char tmp_msg_0[] = {-99, 67, 50, 115, -49, 46, -112, 32, 53, 85, 109, 75, -15, 66, 61, -11, -65, 108, 124, 64, 2, -55, -30, -27, 12, 50, 38, -123, -117, 69, 20, 41, 101, -89, 24, -13, -48, -62, -68, 17, 81, -75, 43, 37, -51, -124, -61, -62, 35, 87, 48, 35, -10, 105, -105, 109, 33, 79, 123, 73, 46, -8, 85, 46, -96, 52, -52, 74, -16, -58, 55, 73, -107, -88, 6, -119, -63, -38, -36, 5, 4, -75, -13, -120, -15, -28, 8, 70, 58, -119, -20, 65, -100, -118, -105, -23, -53, 75, 29, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.63388627005);
    msg.setSource(51862U);
    msg.setSourceEntity(75U);
    msg.setDestination(62820U);
    msg.setDestinationEntity(130U);
    msg.json.assign("SKXSYMHRPXSIBCZIYLGELXBGBVPWLEDNUOMCZSVHXSUQOCSXOPEWGTNEKDIYUMRJXYAFHFDGBEKLJVBTDBMYWRFJNPMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.410356216122);
    msg.setSource(48776U);
    msg.setSourceEntity(65U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(128U);
    msg.json.assign("IEDPQVJDLOIXBKHYREDEPVOEALZRCXNQAPQUYDRDHAMSJAWWEVBSXZRJFIBGLXVYLJROQSKRVSTKLFQPXITPTFZGXXBUNBHNSGCJKMMPXKUHGTWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.748315552263);
    msg.setSource(23851U);
    msg.setSourceEntity(30U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(36U);
    msg.json.assign("JAHWLZYKEPWKSPTTMILAWFOODJIJGYUFPWQFZXUKQUYYACLBVRVOLJJQZDELNWPMRLNRDTIQFPQOCCQNEDJVTWLBCVKUMOLEUZDSRCPBIHACIFOQRVTSFHQOGYPZMJJIAGPSKUIOHMKJBHBXGVUIXQFNWFMICRZACSGHFTVBMNACEZWCDJZMPZVGKONBYVFRALGMRKWNDHPYSUBDTYEYMANLXUUBXSYEHRBXKTVQGRXKTSEEHGSIDNWXOSDGXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #2", msg == *msg_d);
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
