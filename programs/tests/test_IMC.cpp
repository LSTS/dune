//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4606c32356d598296311edecb407d6c1                            *
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
    msg.setTimeStamp(0.527871832414742);
    msg.setSource(10958U);
    msg.setSourceEntity(234U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(184U);
    msg.state = 28U;
    msg.flags = 186U;
    msg.description.assign("RFSBYBBYXCGLFFEPZQGAXQJMYLZWCFKUYBFKVSWRJVPFWMGMAPRTSFHCPZPJKSAWFKEZMASCWUCGWYGTOOJIPITIROMBJIZNDDXAHGXXQMMMOENJIDOVERBRPZCCHCYIDSZTDVIGTSZLNSTNRJNCIXUK");

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
    msg.setTimeStamp(0.2878357617284705);
    msg.setSource(8210U);
    msg.setSourceEntity(19U);
    msg.setDestination(61057U);
    msg.setDestinationEntity(99U);
    msg.state = 162U;
    msg.flags = 32U;
    msg.description.assign("YSTYUMFGQBOZRJKMUFQEUPSWYSAMSYYFCQSKCKNVABVSWPGVAORUQYFLOONECWMOAPFRPYPJNWKIHHXHOELJZCMBCNPKCYZIQXKSATXWOULDCLIVJDTVGEDZPXTASUEHQEAKMBRFSBJVZRBRTEGQDAXUIWLXTLHCJOQFDQJKFBGTRRGVGLFMDEKKTMYNUCZGREXLIAXZINOIZXDBJBHNWDWNNAMWPHXHJHMUPTD");

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
    msg.setTimeStamp(0.07791475859082053);
    msg.setSource(51173U);
    msg.setSourceEntity(147U);
    msg.setDestination(56953U);
    msg.setDestinationEntity(189U);
    msg.state = 156U;
    msg.flags = 25U;
    msg.description.assign("QMWDLEEORYTPKIXKKANFCWTEOFQOYPYEVBXSPANFPG");

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
    msg.setTimeStamp(0.5195890625511896);
    msg.setSource(30818U);
    msg.setSourceEntity(132U);
    msg.setDestination(59255U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.5175265628571882);
    msg.setSource(15989U);
    msg.setSourceEntity(176U);
    msg.setDestination(54749U);
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
    msg.setTimeStamp(0.9415875809151556);
    msg.setSource(43117U);
    msg.setSourceEntity(193U);
    msg.setDestination(52200U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.5112932816320571);
    msg.setSource(7702U);
    msg.setSourceEntity(241U);
    msg.setDestination(3306U);
    msg.setDestinationEntity(247U);
    msg.id = 230U;
    msg.label.assign("ZQVPRYRNGGWPLWWYYXCVTFHCSNWDXPVMKJNB");
    msg.component.assign("MLSYRFRXBWTCIGFLZFMZDJNZRNGAPPLAURTJSIXDOZWDIDEDWZCPHOARIQDOCYYAYCGOLXBGWDUYWXHUGIYLXUFJXPNWCMNREHTVHJQPTXFBNHLVIERQKQXMDH");
    msg.act_time = 13519U;
    msg.deact_time = 17232U;

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
    msg.setTimeStamp(0.021022590408602437);
    msg.setSource(10323U);
    msg.setSourceEntity(218U);
    msg.setDestination(27342U);
    msg.setDestinationEntity(25U);
    msg.id = 159U;
    msg.label.assign("WTBWRLXWAZOGQBJOKJOGGPVPBRNUFQEEZIHFLDERXDTGZNDEAQLEGYKFNQNGLVSOSIWYXBRUQUOTZNEXVVONJIKIAXJDVKDPXFZXSCAJKQIENHLRVOXOSUEHUDMTGINWJCUEHCMCZCFAWQSYWSVHJYFGIRDHLPBSMYCMDBYJEMMCHWHPACOXMFIWTKRVBPYYFAMYAHBKSQQSWLISTKDPOBULKZUXRZJRPGBVUJMNAPHIZ");
    msg.component.assign("HWYZKCIXTPMDCEBYPNEMRNZXLKJNQBZYLO");
    msg.act_time = 2944U;
    msg.deact_time = 53576U;

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
    msg.setTimeStamp(0.24966311231460925);
    msg.setSource(50966U);
    msg.setSourceEntity(245U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(247U);
    msg.id = 57U;
    msg.label.assign("ZPGGFKCORFBHIXYMQLMKEYTZDMZTQTOOEQYFMFQYHYWSAGQOOXSXXRVGTHXUXLVRDKSHNKVTYAFQETQKWRNIYQIFPTUQMBLHEYFJENJJCNPNUFVUPIUJEBMCUCZLCVOUIBPRXPWXHJLECLDVDASXIVLLXIJK");
    msg.component.assign("LZTXNHXKRTSMVLDJGWDPKOBEPOIRDZJMNKZRWXHMIUCPJBATRBRKELTAOCGYQMXIFSQQIRXIMSDYXYASCYBNAZKJVXSBZYGAIABSNVTUPCILYLWBPS");
    msg.act_time = 19384U;
    msg.deact_time = 20004U;

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
    msg.setTimeStamp(0.5798969021889117);
    msg.setSource(29996U);
    msg.setSourceEntity(95U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(120U);
    msg.id = 202U;

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
    msg.setTimeStamp(0.5699251224203875);
    msg.setSource(43052U);
    msg.setSourceEntity(2U);
    msg.setDestination(36610U);
    msg.setDestinationEntity(139U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.23271384546429796);
    msg.setSource(19420U);
    msg.setSourceEntity(143U);
    msg.setDestination(34062U);
    msg.setDestinationEntity(100U);
    msg.id = 62U;

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
    msg.setTimeStamp(0.9250935302148291);
    msg.setSource(44542U);
    msg.setSourceEntity(80U);
    msg.setDestination(19993U);
    msg.setDestinationEntity(4U);
    msg.op = 191U;
    msg.list.assign("FXJBCRYDVHGRZSWWXVQQTCSVPPBSYEGLHEGZJYAIDSQWLTWPIPUHILHAVUSNKCLWXVLYEBDCJXDFMZMIURVLXZTYH");

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
    msg.setTimeStamp(0.588115547930991);
    msg.setSource(47470U);
    msg.setSourceEntity(244U);
    msg.setDestination(22390U);
    msg.setDestinationEntity(181U);
    msg.op = 131U;
    msg.list.assign("ERQWOZFCXXTJWVMRNONEAHNQCPMGUVRDQXCQIARNAHQYWLVMDZBVQXVHIPYPNBALLFUGFQLETBGTDFSHSEEPKZAYWWXAZBMOSPDKHGLWXJFJZDOHJHXBCBIDECESVXIRYMBVCELZWOGRSYKGLUUIFKNPKHM");

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
    msg.setTimeStamp(0.8759993813506962);
    msg.setSource(23315U);
    msg.setSourceEntity(145U);
    msg.setDestination(62175U);
    msg.setDestinationEntity(144U);
    msg.op = 77U;
    msg.list.assign("YFPTTYKFMNSFCTMIPYXQBQQFLAIKYRLCZKGUMHLSQFLSWBQBGSGPXMVCHNGEITKWYDZMBWIOCHRKHJHRATSOBWRNCNALVENETCJPVGLNJ");

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
    msg.setTimeStamp(0.005649949367677154);
    msg.setSource(31792U);
    msg.setSourceEntity(74U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(49U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.6416800395553129);
    msg.setSource(54234U);
    msg.setSourceEntity(196U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(137U);
    msg.value = 30U;

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
    msg.setTimeStamp(0.49729547607961);
    msg.setSource(31993U);
    msg.setSourceEntity(198U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(136U);
    msg.value = 239U;

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
    msg.setTimeStamp(0.2081336357278547);
    msg.setSource(64315U);
    msg.setSourceEntity(88U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("VWOQFDRASNUJRNXOTAIIGJNVCLDZAMFQRZDVUHPETQYNJVFGHBUYOIWSQXVMMEEBRKLIKUBKMHVTKDGHWA");
    msg.message_id = 24059U;

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
    msg.setTimeStamp(0.12416727796626781);
    msg.setSource(40719U);
    msg.setSourceEntity(225U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(20U);
    msg.consumer.assign("RDPFSATGELYIEBCPBGKBCZLCDLJVQBAEXRFOWQEEOZFJUSOOUAFGHCGRKHZNUBYNYYBSQRFTEKILTQQKUXGQLXAPHZWVZMIGVRXHGZGAKMZNNFSYPJSRVYJMDEWRTJPCNANQMDFLVSRTWONWZMXUWSKHKEMATGSUMJTDWQBWJQWI");
    msg.message_id = 42293U;

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
    msg.setTimeStamp(0.3858216224632879);
    msg.setSource(23514U);
    msg.setSourceEntity(64U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(11U);
    msg.consumer.assign("KLVXIACYHKFGDJZMEQONOMZSBJWCHLEGTHONYBLLLZCXDONGEIQCYQUNOKWGUAHMNESVPTUKHORPPGAWUTTMDBXKMFQTJVCLENRQQXRPYRDFPYURWLIAOFHIYZPTDBPWXBADGURYIKBCQFYJETITK");
    msg.message_id = 39079U;

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
    msg.setTimeStamp(0.9901233149928114);
    msg.setSource(9901U);
    msg.setSourceEntity(104U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.8349826956647793);
    msg.setSource(49901U);
    msg.setSourceEntity(26U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.19796025684970797);
    msg.setSource(29017U);
    msg.setSourceEntity(15U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.9199002163713457);
    msg.setSource(8576U);
    msg.setSourceEntity(222U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(21U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.5653682817410692);
    msg.setSource(41543U);
    msg.setSourceEntity(80U);
    msg.setDestination(37776U);
    msg.setDestinationEntity(180U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.4736688935408295);
    msg.setSource(44421U);
    msg.setSourceEntity(214U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(94U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.1189763127366037);
    msg.setSource(2048U);
    msg.setSourceEntity(215U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 34U;
    msg.step_number = 75U;
    msg.step.assign("TKLSSLMSPKMVWKVKOQJFJSJIJYLOTCBJQDGLRAZZIMCSREZLXZSVXWYBSPZTOSJBLIHQGOGUMPOFAWEGBUHGVHPFTDHDCINBIDBQNVBDUEMGRCWTWZUUAAPFUWAEBQFEMCCNDFXKUYEZADXTPTLKHQJKZGNTAWYC");
    msg.flags = 61U;

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
    msg.setTimeStamp(0.7911039281969721);
    msg.setSource(48312U);
    msg.setSourceEntity(204U);
    msg.setDestination(58669U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 59U;
    msg.step_number = 242U;
    msg.step.assign("TLNPDKEJJJYNWSNSBFLGJFOIQZELZUCCBKRMXIIGCNNVCIRVDNKBVCVSGRWWOJTRPTYUBCPIPOLUMOFLAVPZQYSVNCMXQTHEBERTIIMFJWKKXQOJAPBBMUMYWGXQXXCSURGDAKSQBFZKLNDVDHEGOUXEGHRBKJQFURSPMDQQYDLYUYFVPDBZLTPAOEIWUHLKTPANHLFHXFEAMZISAYKHWTDAARSCXMGNOTXGZEEFWWHZOGDMYZQJHV");
    msg.flags = 172U;

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
    msg.setTimeStamp(0.12532344627725645);
    msg.setSource(26939U);
    msg.setSourceEntity(157U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(84U);
    msg.total_steps = 183U;
    msg.step_number = 18U;
    msg.step.assign("MDTDNGOBBTHNDECHJIABTWDLUXSIMEUVQPIFYHMTQATRUJJWXGVLSGDQLKQFKJCAFGWMVDVHUSYZDLTWCFIJXVHCUABXUPGGOZYTEBOKMJLZXZACYRQZYOLMRWRNRQDEIBKAEZCKENPORJQFLVSHFYZMSJLNEYZCJDVCLWSNXVAFFYGSZPHAORSIOYXUAINCFKHPNQFMXHIPSBKW");
    msg.flags = 228U;

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
    msg.setTimeStamp(0.23391634815300355);
    msg.setSource(29132U);
    msg.setSourceEntity(67U);
    msg.setDestination(58893U);
    msg.setDestinationEntity(201U);
    msg.state = 250U;
    msg.error.assign("BYPEISIMDRCCAHQUBGMLKFCLZCAUDMCRYEOYLWBHBZRGWBSAYKWKPZTTXDJNRBOCLPFMXRHPSVKFQDFOVKOFGSXTATEEUSGNSYKNYXBEMYFQQJXJHIOITKZIVWAJWNAVJALIVQZNHBSZSOJVKMLGFXGMTGVLDPMQXPRDIINVXBRQATHWVBDDECLRPKWSMOUUJKPEYFPYUCILZQNCTRUXIJHGYHHPOLJWXWTAEFDSTMNHUWQZNQZNAJGZUC");

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
    msg.setTimeStamp(0.09388933614870176);
    msg.setSource(13217U);
    msg.setSourceEntity(141U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(4U);
    msg.state = 30U;
    msg.error.assign("IANETXLIDVEHZRBAZWYRGZFQUHRLNFSARXJSGSUMMQRQOQNGOYDTIWUNOHPJACCNKALKEDBCAIZGLKOYZSTBUVZZMMNFKPQQJPXGXXFFIQLTUCELFHDFWYNBCKYBLVMIOMDQUHBJJTMUBV");

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
    msg.setTimeStamp(0.15994445948635005);
    msg.setSource(51266U);
    msg.setSourceEntity(104U);
    msg.setDestination(58900U);
    msg.setDestinationEntity(26U);
    msg.state = 99U;
    msg.error.assign("DMPFZVRBTSJSTIGWYTBYAZWXGQUPSMLCDJSIUPEDAFFOKFYYSMQOWKMWLDIHPRCKOFFXHTTTYCIZOUQEXNQKBXDLLYUPXFNCRKJSSIABLDJYISNVUFYZVVTATQBJOHGZBWEGQKLGPHWOEOGZBJRJDUGTOXNXLRVLANFMWCRLICNPEWHRGBURKFJBCJNHNQNVMXGSPYQOAPCDVEAMHOQQXEYHEXMWC");

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
    msg.setTimeStamp(0.08318335010125266);
    msg.setSource(5435U);
    msg.setSourceEntity(251U);
    msg.setDestination(5407U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.22653478575936004);
    msg.setSource(53755U);
    msg.setSourceEntity(38U);
    msg.setDestination(59156U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.9338701615452158);
    msg.setSource(53534U);
    msg.setSourceEntity(224U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.40795158583310076);
    msg.setSource(21636U);
    msg.setSourceEntity(110U);
    msg.setDestination(34753U);
    msg.setDestinationEntity(12U);
    msg.op = 207U;
    msg.speed_min = 0.07908741088447369;
    msg.speed_max = 0.8339820367448849;
    msg.long_accel = 0.6449488720701589;
    msg.alt_max_msl = 0.40319859436638195;
    msg.dive_fraction_max = 0.14033243035531207;
    msg.climb_fraction_max = 0.5227599518731848;
    msg.bank_max = 0.18788806358789711;
    msg.p_max = 0.1953372308709207;
    msg.pitch_min = 0.24250217801872043;
    msg.pitch_max = 0.44183387630276805;
    msg.q_max = 0.1019055563568203;
    msg.g_min = 0.39369106697497125;
    msg.g_max = 0.17118098019192163;
    msg.g_lat_max = 0.694637294030979;
    msg.rpm_min = 0.0009192481277766618;
    msg.rpm_max = 0.05732202291190602;
    msg.rpm_rate_max = 0.6512790628588744;

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
    msg.setTimeStamp(0.3498528671653516);
    msg.setSource(23274U);
    msg.setSourceEntity(66U);
    msg.setDestination(22561U);
    msg.setDestinationEntity(227U);
    msg.op = 245U;
    msg.speed_min = 0.9310789655998124;
    msg.speed_max = 0.5995069932293534;
    msg.long_accel = 0.06719203453238021;
    msg.alt_max_msl = 0.6039862486823172;
    msg.dive_fraction_max = 0.5945680161859354;
    msg.climb_fraction_max = 0.028047256456287473;
    msg.bank_max = 0.45730276592424424;
    msg.p_max = 0.27721510410721806;
    msg.pitch_min = 0.39717557141749427;
    msg.pitch_max = 0.32407409053961345;
    msg.q_max = 0.2869018552524877;
    msg.g_min = 0.7695298946586334;
    msg.g_max = 0.5541423376105018;
    msg.g_lat_max = 0.8152119163055959;
    msg.rpm_min = 0.08075412370133628;
    msg.rpm_max = 0.016257051447107207;
    msg.rpm_rate_max = 0.8246736555438163;

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
    msg.setTimeStamp(0.4888988695813613);
    msg.setSource(50197U);
    msg.setSourceEntity(207U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(16U);
    msg.op = 45U;
    msg.speed_min = 0.7765537551431978;
    msg.speed_max = 0.9100527800252232;
    msg.long_accel = 0.9721146776845436;
    msg.alt_max_msl = 0.4884819296510071;
    msg.dive_fraction_max = 0.8069451794687496;
    msg.climb_fraction_max = 0.9621756154650708;
    msg.bank_max = 0.2553726321781038;
    msg.p_max = 0.26598430867482137;
    msg.pitch_min = 0.5530413503584389;
    msg.pitch_max = 0.5445996276832653;
    msg.q_max = 0.7508162018780148;
    msg.g_min = 0.6043443995545024;
    msg.g_max = 0.14798365798102364;
    msg.g_lat_max = 0.21775394771131118;
    msg.rpm_min = 0.19376409865681854;
    msg.rpm_max = 0.07877667918475706;
    msg.rpm_rate_max = 0.5211863222712272;

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
    msg.setTimeStamp(0.35825814948934276);
    msg.setSource(60852U);
    msg.setSourceEntity(206U);
    msg.setDestination(8865U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.5841805453602812);
    msg.setSource(39037U);
    msg.setSourceEntity(9U);
    msg.setDestination(24159U);
    msg.setDestinationEntity(105U);
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.29098969899892047;
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
    msg.setTimeStamp(0.03928321330029072);
    msg.setSource(51617U);
    msg.setSourceEntity(166U);
    msg.setDestination(8598U);
    msg.setDestinationEntity(120U);
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.8314239329000671;
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
    msg.setTimeStamp(0.26221384044903484);
    msg.setSource(20532U);
    msg.setSourceEntity(114U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.3439030092719032;
    msg.lon = 0.12161457869354131;
    msg.height = 0.3058113673606274;
    msg.x = 0.18770961060799285;
    msg.y = 0.7905673290580809;
    msg.z = 0.13391558544094395;
    msg.phi = 0.46141551414006854;
    msg.theta = 0.8932303163765579;
    msg.psi = 0.6568220843690793;
    msg.u = 0.03287695866822926;
    msg.v = 0.4399096693125025;
    msg.w = 0.3484381686726483;
    msg.p = 0.14230563545787323;
    msg.q = 0.23678590887601636;
    msg.r = 0.511244950135549;
    msg.svx = 0.6876626901391129;
    msg.svy = 0.0970437675550353;
    msg.svz = 0.32238692090115095;

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
    msg.setTimeStamp(0.5253425174152658);
    msg.setSource(39389U);
    msg.setSourceEntity(163U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.8700875115587359;
    msg.lon = 0.88960295245392;
    msg.height = 0.5585579251665402;
    msg.x = 0.8043042180771827;
    msg.y = 0.9887539903840752;
    msg.z = 0.2860292414900589;
    msg.phi = 0.6335495811101407;
    msg.theta = 0.12978530128354981;
    msg.psi = 0.46904290904852297;
    msg.u = 0.11346788504719907;
    msg.v = 0.9721331487274368;
    msg.w = 0.36626502625150026;
    msg.p = 0.6151939513187432;
    msg.q = 0.5719940301529913;
    msg.r = 0.9230388675199275;
    msg.svx = 0.26353017810134893;
    msg.svy = 0.9748030442708158;
    msg.svz = 0.8123328299705534;

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
    msg.setTimeStamp(0.10649439627004065);
    msg.setSource(16967U);
    msg.setSourceEntity(227U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.9588544951492656;
    msg.lon = 0.7594235514502929;
    msg.height = 0.009300384094096503;
    msg.x = 0.33055667254848486;
    msg.y = 0.524339618516796;
    msg.z = 0.8908851227341749;
    msg.phi = 0.43882779987677134;
    msg.theta = 0.06720267633841137;
    msg.psi = 0.02254831574411531;
    msg.u = 0.8809353805925303;
    msg.v = 0.27917657768823934;
    msg.w = 0.7763309321503313;
    msg.p = 0.7626787231422222;
    msg.q = 0.837848814011882;
    msg.r = 0.1039521419096151;
    msg.svx = 0.6921011476335119;
    msg.svy = 0.7799918915965712;
    msg.svz = 0.2151502272546144;

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
    msg.setTimeStamp(0.8720598284425357);
    msg.setSource(777U);
    msg.setSourceEntity(13U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(91U);
    msg.op = 56U;
    msg.entities.assign("ILOPVNYJBWRMCENLAFKUXXEAGRMNFHYFCUBAYISAMIX");

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
    msg.setTimeStamp(0.7733114039042184);
    msg.setSource(28217U);
    msg.setSourceEntity(33U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(77U);
    msg.op = 149U;
    msg.entities.assign("ZKTFAYTUXXDMEYWUCXMLPYTZBBPSKNARGWFHQJHJLBOSWZCBIJY");

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
    msg.setTimeStamp(0.3272153981406305);
    msg.setSource(31704U);
    msg.setSourceEntity(9U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(176U);
    msg.op = 110U;
    msg.entities.assign("TCTTZANXKPMFZIHMLLWX");

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
    msg.setTimeStamp(0.5269740928862385);
    msg.setSource(53142U);
    msg.setSourceEntity(133U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(211U);
    msg.type = 119U;
    msg.speed = 6150U;
    const char tmp_msg_0[] = {74, 106, -45, -24, -126, -54, 105, 94, 81, 16, -6, 50, -94, 6, 74, -15, -12, -28, 53, -102, -72, 79, 63, -25, 87, 45, -115, 19, -7, -21, -108, 14, 25, -16, -28, 10, 60, -45, 117, 122, -84, -77, 69, -87, 52, 36, 79, -80, 24, -67, -99, 93, 4, -63, 43, -116, -84, 0, -81, -118, -28, 104, -14, 117, -8, -30, -76, 99, 84, 82, -68, -100, 39, 48, 67, 30, -1, 2, -126, -36, -81, 2, 3, 32, -65, -4, 18, 59, -119, 100, 86, 74, 31, 36, -11, -2, -76, -39, 104, -125, -50, -62, 51, 96, 32, -120, 65, -34, 64, 23, -85, -79, -102, -106, 113, -17, 10, 46, -73, -97, -15, 38, -89, 96, -93, 39, -9, -64, -70, 36, -110, 101, -49, -66, -77, -12, 0, -34, -101, 91, -48, -85, 35, -25, -30, -14, 116, 35, -57, 28, -60};
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
    msg.setTimeStamp(0.11228569177282521);
    msg.setSource(25616U);
    msg.setSourceEntity(48U);
    msg.setDestination(5385U);
    msg.setDestinationEntity(205U);
    msg.type = 167U;
    msg.speed = 60143U;
    const char tmp_msg_0[] = {11, 80, -53, 66, 72, -70, 112, 116, 73, -64, -5, 104, 46, 96, -24, -6, 75, -124, 58, 32, 96, -78, 125, -83, -113, -12, -96, -30, 45, 42, -96, -64, 116, 121, 89, -70, 102, -121, -55, -15, 69, -97, 10, -63, 12, -18, 52, -94, 52, -85, 1, -74, 79, -52, -102, -69, -91, 29, -37, 110, 19, -88, 32, -43, 126, -20, -87, 8, -38, -82, -115, 107, 60, -78, 64, -34, 95, 93, -74, -3, 113, -26, -50, -33, 60, -101, -18, 80, -56, -55, 113, 84, 40, -123, 115, -111, -97, -80, -32, 3, -70, 29, -114, -73, 81, 123, 59, 78, -23, 122, 96, -83, 65, 63, 121, -5, -118, -35, 27, 43, 30, 84, -39, 103, -33, -101, -70, 76, 39, -36, 55, -11, -124, 27, 125, -121, 125, 66, 51, -31, 86, 44, 93, -56, 65, -85, 122, 36, -93, -62, 96, -30, 77, -99, -106, -60, 103, -113, -6, 53, -73, -94, -111, -67, -33, -43, 42, -45, 107, 17, 42, 55, -115, -51, 92, -94, 50, -33, -101, 46, 14, 49, 24, -59, -58, 101, -31, -40, -46, -32, 63, -77, 57, -43, 55, 57, -90, -47, 15, 45, 124, -10, -120, 108, 46, 6, 55, 102, 37, -78, 42, -112, -96, -83, 38, -15, 106, 67, -35, 27, -120, 41, 97, -53, -112, -20, 55, 67, -52, 0, 47, 24, 124};
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
    msg.setTimeStamp(0.7653286922888712);
    msg.setSource(41804U);
    msg.setSourceEntity(82U);
    msg.setDestination(14041U);
    msg.setDestinationEntity(211U);
    msg.type = 155U;
    msg.speed = 29194U;
    const char tmp_msg_0[] = {82, -53, -21, -24, -65, 69, -59, -31, 29, 120, -10, 106, 117, -71, -111, -43, -70, -97, -48, 97, -59, 11, -62, 56, -35, -29, 86, 45, 49, 42, 35, 85, 5, 69, -105, 51, 12, 90, 123, 17, -7, -75, 19, 92, -40, -55, 96, 119, -24, -97, -92, 11, -6, -3, 2, 55, 67, 71, 85, -31, 71, 21, -12, 104, 7, -116, -21, -39, -15, 90, 70, 82, 9, 101, -41, -48, -26, -123, 77, -10, -75, 102, -13, 14, 83, -38, -31, 35, -111, -56, -112, -89, 53, -116, 78, 101, 20, -100, -102, -50, 89, 39, 43, 75, 95, -7, 29, -31, 18, -59, -47, 70, 85, 69, 126, -21, 39, -121, 78, -19, -6, -83, 40, 41, 11, -119, 62, -109, -63, 101, 115, 118, -11, -15, -111, 65, 6};
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
    msg.setTimeStamp(0.8744194155753907);
    msg.setSource(51558U);
    msg.setSourceEntity(50U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(136U);
    msg.op = 74U;
    msg.tas2acc_pgain = 0.2409526182530647;
    msg.bank2p_pgain = 0.39756862172853147;

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
    msg.setTimeStamp(0.7419142663074734);
    msg.setSource(7925U);
    msg.setSourceEntity(133U);
    msg.setDestination(13037U);
    msg.setDestinationEntity(123U);
    msg.op = 216U;
    msg.tas2acc_pgain = 0.10476060297664436;
    msg.bank2p_pgain = 0.4666698475722022;

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
    msg.setTimeStamp(0.8468892630407435);
    msg.setSource(50097U);
    msg.setSourceEntity(27U);
    msg.setDestination(14816U);
    msg.setDestinationEntity(54U);
    msg.op = 223U;
    msg.tas2acc_pgain = 0.16131851758291738;
    msg.bank2p_pgain = 0.34610259657665277;

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
    msg.setTimeStamp(0.16974470772971373);
    msg.setSource(920U);
    msg.setSourceEntity(130U);
    msg.setDestination(22686U);
    msg.setDestinationEntity(10U);
    msg.available = 2514881917U;
    msg.value = 67U;

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
    msg.setTimeStamp(0.2781523565520173);
    msg.setSource(10798U);
    msg.setSourceEntity(55U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(135U);
    msg.available = 3468444014U;
    msg.value = 79U;

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
    msg.setTimeStamp(0.23541012279470763);
    msg.setSource(20306U);
    msg.setSourceEntity(84U);
    msg.setDestination(687U);
    msg.setDestinationEntity(141U);
    msg.available = 2740500718U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.7115890543396451);
    msg.setSource(26401U);
    msg.setSourceEntity(119U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(224U);
    msg.op = 75U;
    msg.snapshot.assign("OYSDURKDMUIPIVAPQXN");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8342598792347304;
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
    msg.setTimeStamp(0.6112472050426212);
    msg.setSource(2477U);
    msg.setSourceEntity(183U);
    msg.setDestination(45819U);
    msg.setDestinationEntity(174U);
    msg.op = 90U;
    msg.snapshot.assign("JTQUCDELYWSPHDAAZFSAICEJWHIULEYODRWOUWPKOHLXOKBSPGUCSPHQMBZRDCYMBQENNSP");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 142U;
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
    msg.setTimeStamp(0.5277668763636228);
    msg.setSource(30251U);
    msg.setSourceEntity(117U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(7U);
    msg.op = 9U;
    msg.snapshot.assign("HUWRBKYSPRBZFJQDHDNZDBLTJWDAXZDVYETLCECLMUEUMJXYTBSBEFBCWDNMLQGKZXBOFRRGOVUBSBDMQYSOUHRQFMEYTHPGIWTAONMYXPWNARGVDVKNXYCYAPATYCOGJNYZUQXHMIFEEWRPLUWFNOICAPUKKHJVPGAUWLIDKIKOJFTACSWXHSMLAOXOLEVNVIQKQQ");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.4804569636888636;
    tmp_msg_0.lon = 0.3310108653516515;
    tmp_msg_0.depth = 0.37372362685996674;
    tmp_msg_0.roll = 0.0607359286115422;
    tmp_msg_0.pitch = 0.8072650326780831;
    tmp_msg_0.yaw = 0.6998173400081866;
    tmp_msg_0.rcp_time = 0.08794954988074422;
    tmp_msg_0.sid.assign("PKTQBDKDNGRRXXXXPIRZVWYJFYAMMHMXEDQJPLZIONYQDFHVOGJVSJPZHDBTAILKTLLOAVUDHNDYMNSPRFLATMKEYPGAOKFLLSIVGBHGESHAOEZKICYRETWJBULZQCHGKFFVWTIBUJUSCCRDTBXHVCNVSOJXEQCNMIROFUFCIPVQNWKGYQJFZEGBTJBZWSDWEKTIRAKMWQXYTQGPCCJEISUGOCZBNALDBLRWWHXHFUSVOSMEXMZ");
    tmp_msg_0.s_type = 86U;
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
    msg.setTimeStamp(0.3214862296442811);
    msg.setSource(39298U);
    msg.setSourceEntity(97U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(35U);
    msg.op = 222U;
    msg.name.assign("QWMJAVVNAKWQYTNHQBVHQFOZSJMJGFBQNSVDEJYKPGLPWQHBHSXPDBOJYQPLTDTLZKIHJEMTATTMXYTXVXFZUPKHFHPAESLEIOZYTKDDVKCGZOIGWXUBMBAMINFLEJMOVEVGAWYCIZFDMCM");

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
    msg.setTimeStamp(0.20588004059549614);
    msg.setSource(58096U);
    msg.setSourceEntity(133U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(103U);
    msg.op = 190U;
    msg.name.assign("GKEMQRXSHPFASHMLNNECGCUUWCRDMNIBXEWVFZFBYCMTMZBZDIJLRSAXARHJYVPEFOXGNKPKRZJZLEYQJEZQCRDSLYUKWVJPJWOCBWIFSEKNUSBHMXCAHDQVGMOHPKOADGREOQXFJFXBKDTPQLPVAMJTKNRWNUTGYIGHORGIXUXANBW");

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
    msg.setTimeStamp(0.023488032370666878);
    msg.setSource(18082U);
    msg.setSourceEntity(36U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(55U);
    msg.op = 7U;
    msg.name.assign("XFCJXKVMKMTHHTBABPLANVXLZUIDNTPGJQDQTPMVECUNSNKYZZUGPBBBDFIDIJUUTIYNUHGWECTJNQLEIGSRZIKBXNYGMLAQMAADZDLHHTJYCHVQNRAILXGWYOHWVCJPMVFIXDDHFOEVPSYCTYCGQMMWSAPROFFTOSQYFLPSCKZEVJOFFCGBA");

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
    msg.setTimeStamp(0.6923621861205612);
    msg.setSource(54705U);
    msg.setSourceEntity(67U);
    msg.setDestination(487U);
    msg.setDestinationEntity(186U);
    msg.type = 173U;
    msg.htime = 0.37573606176588836;
    msg.context.assign("GWMLUPWRSLTOTWDJDFQBKNMHJFURDAKHMCVQRSZZYTVYQVAYONPTAEJJLTLPVOPYHGSGWJECWUVLEQGSBFBVVBBUNOPRKJUTJYIIVRCXULDKHQFHCONUKAQHZMDQBJ");
    msg.text.assign("UCZSUPHTCCQTZZWFCCLMETWSDNKEKELCIXQALDB");

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
    msg.setTimeStamp(0.8869394334770399);
    msg.setSource(31267U);
    msg.setSourceEntity(166U);
    msg.setDestination(4313U);
    msg.setDestinationEntity(39U);
    msg.type = 222U;
    msg.htime = 0.14300087871335698;
    msg.context.assign("NJUHPFTMYZHRFWOVCNFALZUPENRSINXLZKKLBRMISGGSAYMVCCNUUDIAWOLXRZUWTGBBIEXQPTKTFYPKZOMDAUJDZQXQKZKJLVSACDCUIBGQQDGJQETSZVBGCANIRXPDSXFPWJHZWOYBVY");
    msg.text.assign("HZBROIVEWPCFNKNGHVVNBHWETDQUFSZLDCXHEOMRWDOFZTRICXJNFNSRGCYBUPUAZ");

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
    msg.setTimeStamp(0.8372569850237245);
    msg.setSource(37127U);
    msg.setSourceEntity(205U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(70U);
    msg.type = 136U;
    msg.htime = 0.8040518525429599;
    msg.context.assign("HWTGTSAAYHSTCCDLXMUIZAPNWRMFELOLGTQEMIGXEIKGHPASXIOBUKCZYQTUMQONDUCYZIHSTBNJNBJYVQVEYI");
    msg.text.assign("ZYMEQVXLICXJLGKGSAFQRFWQIWZZZHKRMCMJVNJPGCHZKOILJNJVDEMBIDRTLYZKNTIUGQYEDBXWCWAPJGOMGQXMUQYSUNFNHZXLPMTWWPQUOPNPFTXADCEYINNSTCCADFVSDUOWBWPGZYFOKUVKGVAMFQDDYLIQPZKXPXHELBIUUBYGOXHTRELBIEJHSJVAIHKHPEMTEOJSKTHR");

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
    msg.setTimeStamp(0.7890054019199789);
    msg.setSource(50820U);
    msg.setSourceEntity(241U);
    msg.setDestination(45671U);
    msg.setDestinationEntity(100U);
    msg.command = 128U;
    msg.htime = 0.9769603470199753;

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
    msg.setTimeStamp(0.6988540617792075);
    msg.setSource(4488U);
    msg.setSourceEntity(142U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(58U);
    msg.command = 78U;
    msg.htime = 0.2896031679575203;

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
    msg.setTimeStamp(0.14866785921181125);
    msg.setSource(50594U);
    msg.setSourceEntity(118U);
    msg.setDestination(5179U);
    msg.setDestinationEntity(233U);
    msg.command = 39U;
    msg.htime = 0.7541613134535515;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 66U;
    tmp_msg_0.htime = 0.6021519676088112;
    tmp_msg_0.context.assign("JOIHQDEBTVUVK");
    tmp_msg_0.text.assign("QXRSMZEXWSKDDPHNGWUOHPCQDUBJUUTENESVZCFYXSXBSIVYOCZMAHNSSVZPQYSETGOTPORCJPCLQMZAQXCUXLK");
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
    msg.setTimeStamp(0.9422663647825154);
    msg.setSource(61563U);
    msg.setSourceEntity(164U);
    msg.setDestination(61189U);
    msg.setDestinationEntity(95U);
    msg.op = 42U;
    msg.file.assign("FDSTMKDAIPHYWUDYAZWOWXEAYCUJSUNPXXJGRHIKZFBNMKVTGXBJUSXLSTSBMKAMMHQUVSQCJXZAIXVFOEZUDYUBYYQVPJEJBLOGVTERWGJWXQLMRVWVOMRHCZCVJONDKLWVRUPNLKHNRNJQEEKHFCYGPSQQOCYRIMIFPBIEHECBKWZTCSPRZBLDLZLANVGDFQHD");

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
    msg.setTimeStamp(0.7751008821054842);
    msg.setSource(5259U);
    msg.setSourceEntity(21U);
    msg.setDestination(28363U);
    msg.setDestinationEntity(118U);
    msg.op = 54U;
    msg.file.assign("KXFFODBTQEWPKNIWHELQSELHRDVRILFOGZIXNZQDGVT");

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
    msg.setTimeStamp(0.7786215935178455);
    msg.setSource(36359U);
    msg.setSourceEntity(153U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(188U);
    msg.op = 16U;
    msg.file.assign("YSLOKFNVUAHCVGKWLIZYDICEREHYDCVRB");

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
    msg.setTimeStamp(0.19022688605938143);
    msg.setSource(4832U);
    msg.setSourceEntity(246U);
    msg.setDestination(57845U);
    msg.setDestinationEntity(92U);
    msg.op = 116U;
    msg.clock = 0.5756868492309818;
    msg.tz = 121;

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
    msg.setTimeStamp(0.024239305222833796);
    msg.setSource(41799U);
    msg.setSourceEntity(34U);
    msg.setDestination(52931U);
    msg.setDestinationEntity(207U);
    msg.op = 133U;
    msg.clock = 0.6536957711527992;
    msg.tz = -34;

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
    msg.setTimeStamp(0.24481481802129723);
    msg.setSource(23947U);
    msg.setSourceEntity(51U);
    msg.setDestination(49283U);
    msg.setDestinationEntity(6U);
    msg.op = 53U;
    msg.clock = 0.01935309903171223;
    msg.tz = 50;

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
    msg.setTimeStamp(0.14883916504309613);
    msg.setSource(45541U);
    msg.setSourceEntity(0U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(30U);
    msg.conductivity = 0.04901584901276623;
    msg.temperature = 0.7637287222425144;
    msg.depth = 0.45368004146499097;

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
    msg.setTimeStamp(0.8927033290427103);
    msg.setSource(40178U);
    msg.setSourceEntity(91U);
    msg.setDestination(24461U);
    msg.setDestinationEntity(180U);
    msg.conductivity = 0.8690020870821127;
    msg.temperature = 0.5436465689258583;
    msg.depth = 0.8841476168104891;

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
    msg.setTimeStamp(0.4251240155539546);
    msg.setSource(56112U);
    msg.setSourceEntity(235U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(56U);
    msg.conductivity = 0.660152072271233;
    msg.temperature = 0.47721884994078145;
    msg.depth = 0.283913027506588;

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
    msg.setTimeStamp(0.8090130190206493);
    msg.setSource(22647U);
    msg.setSourceEntity(62U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(214U);
    msg.altitude = 0.6367738030920541;
    msg.roll = 22773U;
    msg.pitch = 11137U;
    msg.yaw = 45064U;
    msg.speed = 26637;

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
    msg.setTimeStamp(0.6514587602720009);
    msg.setSource(23081U);
    msg.setSourceEntity(80U);
    msg.setDestination(1746U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.3623513465063829;
    msg.roll = 16661U;
    msg.pitch = 37528U;
    msg.yaw = 29615U;
    msg.speed = -7610;

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
    msg.setTimeStamp(0.7451596783533734);
    msg.setSource(40502U);
    msg.setSourceEntity(238U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(87U);
    msg.altitude = 0.019774123830357038;
    msg.roll = 63310U;
    msg.pitch = 22559U;
    msg.yaw = 37746U;
    msg.speed = 29358;

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
    msg.setTimeStamp(0.2160089695519105);
    msg.setSource(6903U);
    msg.setSourceEntity(237U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.6936896438394904;
    msg.width = 0.5141828308097264;
    msg.length = 0.214950936492748;
    msg.bearing = 0.0839694344286599;
    msg.pxl = 20499;
    msg.encoding = 172U;
    const char tmp_msg_0[] = {107, -5, 82, 100, 37, 101, 116, 22, 97, 4, 115, 17, 64, -102, 121, -101, 56, -17, -27, -41, -104, 66, 106, 70, -15, 32, 26, 65, 83, -24, -105, 52, 6, 102, 32, 89, 75, 99, -109, 81, -9, 65, -61, -127, -63, 96, 42, 64, -119, 102, -11, 87, -104, -53, 105, -83, -45, 31, -103, 31, 8, 86, -73, 29, 101, 16, 85, -14, -109, -17, 60, 1, 52, -27, -1, 120, 113, -90, -84, 106, 46, -69, -121, -3, 90, 55, 82, -68, 86, -21, 113, -109, -35, -44, 109, 105, -121, 38, -116, -28, -89, -86, -94, 5, -36, 11, -96, -10, -100, -32, -10, 107, 89, 16, 63, -114, 4, 91, -113, -13};
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
    msg.setTimeStamp(0.6556860109414998);
    msg.setSource(38848U);
    msg.setSourceEntity(110U);
    msg.setDestination(61259U);
    msg.setDestinationEntity(198U);
    msg.altitude = 0.23180355441481604;
    msg.width = 0.8344847116416602;
    msg.length = 0.7247898277898653;
    msg.bearing = 0.19008520937758344;
    msg.pxl = -7277;
    msg.encoding = 0U;
    const char tmp_msg_0[] = {-87, 0, 121, 23, -119, -112, -13, -13, -14, 4, -115, -22, 110, 125, -84, 78, -127, -103, 126, 85, -36, -34, 112, -111, -42, 85, 94, -83, 120, 6, -37, -16, 3, -38, -105, 110, 42, 100, -6, -86, 97, -102, -108, 119, 101, -79, 82, 92, -103, -91, 101, 57, 101, 107, -84, -80, -7, -2, 66, -124, 125, 114, -109, -112, 87, -115, -80, -126, -88, -33, -86, -60, -37, 105, 63, -6, -21, 108, 75, 59, 123, 24, -41, 90, 46, -4, 24, -65, 51, -35, 91, -9, 47, -90, -97, -81, 1, -23, -78, 69, 107, 92, 47, 2, -47, 90, 106, -89, -62, -23, 126, -10, 64, -96, -35, 81, 106, 116, -26, 15, 23, -53, -118, 106, -12, -115, -23, 8, 120, -122, 3, -3, 109, 112, -119, -38, 75, -54, -13, -23, -113, 58, 29, 85, -47, 56, 19};
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
    msg.setTimeStamp(0.18565280851579335);
    msg.setSource(12767U);
    msg.setSourceEntity(25U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(83U);
    msg.altitude = 0.45786973773913686;
    msg.width = 0.4401937972044233;
    msg.length = 0.9588139410669944;
    msg.bearing = 0.4749086094366417;
    msg.pxl = 405;
    msg.encoding = 88U;
    const char tmp_msg_0[] = {122, -76, 108, -39, 6, 64, -68, -54, 24, -32, 112, -14, -84, 6, -71, -12, 62, 15, -86, -115, -16, -85, -42, 35, -102, -110, 22, 33, -99, 30, 57, -105, 22, -56, 82, -31, -61, -102, 61, 95, -89, -35, -23, -13, -30, -53, -98, -60, -2, -11, 83, 62, -29, -97, -102, -78, 36, 20, -37, 69, 71, 16, -6, 77, -102, -20, 7, -2, 71, 73, -117, -77, 123, 116, -7, -79, 111, -119, 89, -46, -24, -96, -48, -77, 46, -7, 97, -52, -80, -15, 26, 126, 126, 115, -128, -72, -10, 62, -65, 92, -70, -108, 50, -115, -10, -49, -51, 123, -115, -16, 21, 60, 98, -43, -74, -87, -101, 34, -107, 19, 125, 107, -29, 87, -46};
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
    msg.setTimeStamp(0.9912396424114428);
    msg.setSource(42498U);
    msg.setSourceEntity(63U);
    msg.setDestination(64102U);
    msg.setDestinationEntity(204U);
    msg.text.assign("FQVTUVEVTFGNIEIUNAHBKZZIMFBIBKQ");
    msg.type = 60U;

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
    msg.setTimeStamp(0.8898016951325264);
    msg.setSource(47856U);
    msg.setSourceEntity(204U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(49U);
    msg.text.assign("EMUJBAELATLDVOYGHBQKWRCNPPYEGJCSTLQURROXIYHXBTHONDKJBWVFHJRDOHTHQTSMCDLTGQLWSCQNKVGUSRFQQZCXZFUXYMPXRZCQIHLNDJDIAMVJNPLQVOKOUVEENWRUZWBVXSNDSYIZUHEEL");
    msg.type = 131U;

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
    msg.setTimeStamp(0.44845549929992123);
    msg.setSource(11577U);
    msg.setSourceEntity(147U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(215U);
    msg.text.assign("CJTNKBBZWANZVESMEFMSPDHOXKEJIEIEADBHOQKYXAXLKTIAAEFZWRRVKPCOPDMJDKLMGCXQIOGXLPSPDLVHMIRHNGQDWURPLGGSKOQNYKNPORIUVFLPFXLULXUBFMYWVVYJPKLZYZGHNQQJJJUUVUHAJZHAWFUXNWFREPTZWWBAQHIAQBZFYANIDTIHDC");
    msg.type = 174U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.7607210297175346);
    msg.setSource(11292U);
    msg.setSourceEntity(138U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.20496247605651263);
    msg.setSource(20151U);
    msg.setSourceEntity(229U);
    msg.setDestination(45341U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.25663978538828436);
    msg.setSource(57951U);
    msg.setSourceEntity(141U);
    msg.setDestination(45512U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.911466031192136);
    msg.setSource(15307U);
    msg.setSourceEntity(35U);
    msg.setDestination(24472U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("XLDGDRIUCGNTJGFCKEIFVCHKSLIWFUEJGIAILCGWNMVBGKTTYSKZPPQP");
    msg.sys_type = 244U;
    msg.owner = 63116U;
    msg.lat = 0.7299786079418031;
    msg.lon = 0.85491856328254;
    msg.height = 0.7522417094000667;
    msg.services.assign("ZDJVROYNTWZBXIXKJUQYOOAXFHNPYSKIATJIKMMOHGBYMJUMEHSECEKMYKMVBYICGKRELTFXGXHUCETEMVTJJPCWRKJSANGCVERNHLFQQQLINEQFYQDNCQGFHPLMTOVIZLOKAGSSXSCPRIBVSWUUXPPAHSBNPCFNHNUFDVSXDHTYTBUHAVARWBLIIJLIKKGRLZWDQAEOVBZSTAAFGWUUVXDRGGJCWFBDEB");

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
    msg.setTimeStamp(0.2931113270599771);
    msg.setSource(7552U);
    msg.setSourceEntity(140U);
    msg.setDestination(58150U);
    msg.setDestinationEntity(223U);
    msg.sys_name.assign("QUXVRUYKBUBXCXTQSXJASHQRJHKFPPETIPCFMCCOMKPKJGEIOOYZMCKUYUEUESYNDXJDCQVOFGSDICPTGZVUUSZCMROKWBGNFEMYQQWCHAVYODHZTPIAYKVWLXMYMLODNVBPNQILEWBSAEBVKVRTTBGEYFQOJSRBGPFNMFG");
    msg.sys_type = 170U;
    msg.owner = 30590U;
    msg.lat = 0.8586918074629469;
    msg.lon = 0.30014856080459906;
    msg.height = 0.17466479405679358;
    msg.services.assign("SWZHTKWOJUQJCYGYMBKDTPSANGDNFEPCBIXSMSHIXILCJBAZXJUEQRYQHCYFBKVPUBHAGTOEMMKWSFLMQWWFJURKDHLINVEPGDGBLEZNZNOUXYCXHBVASTKLXQLAMVAYTRVOLYZMDTUULHCEBBOVDFIJNVZWYPXBHAZ");

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
    msg.setTimeStamp(0.9268534336034857);
    msg.setSource(41760U);
    msg.setSourceEntity(178U);
    msg.setDestination(21984U);
    msg.setDestinationEntity(126U);
    msg.sys_name.assign("XXEPOZFFJEQHAUBUXURB");
    msg.sys_type = 109U;
    msg.owner = 57025U;
    msg.lat = 0.741944397120222;
    msg.lon = 0.48779553168741063;
    msg.height = 0.2696818763641138;
    msg.services.assign("BSCVVNEWLCZIFUGPIFBDPWVDOQOFEPBQLKIKWHSPJDNUMOBGJJTIYTSYMHUCJLASTAMRCCMIDYCJPHALTNXGYRPIZNQESQNNQLWAVGUBNYVXGLJSYZYEMXMWODOGQCRLIKLSLPMBZDUBHQLFWPWFRFUJRMGHQNNGSRVVOYAZRBZRNOXERAQOPUUOTKDFGAJEVZCHF");

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
    msg.setTimeStamp(0.18725248022889263);
    msg.setSource(54969U);
    msg.setSourceEntity(158U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(220U);
    msg.service.assign("NFNAQBDOPDGOTEHGDJUTWAVKUTKELDZZJMREBEFULVAAEPHCTSXNVQAYBKJSUMLZOWMXSBQZNBHPRPBEYUYCSAIYCLVLIYLIYOPMENHEKLTCWY");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.6415760797274038);
    msg.setSource(4633U);
    msg.setSourceEntity(82U);
    msg.setDestination(19573U);
    msg.setDestinationEntity(181U);
    msg.service.assign("IIFHQIYCVOILENPEZBRQXLUIQHGSEZVTDGRHBBBHVMGUGVPQKFTCDEPJFPWXDQSYWRNAZHJUOLJQNSNA");
    msg.service_type = 80U;

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
    msg.setTimeStamp(0.21008745663168682);
    msg.setSource(57627U);
    msg.setSourceEntity(57U);
    msg.setDestination(11461U);
    msg.setDestinationEntity(111U);
    msg.service.assign("XTDCJBEVDIMJOMESGRNDYYQCGRTNXWNLBOPNAVGRZQVBKAPIJASVCAZUTFOTGNTPURKUCDGWCRXMMGMEXISWHZHRBABOJKHCWAQUUZJNAIOTOZHIWWXEIOKTAELSPKZHLVJWGZOUCJEFLALFKHNJQNQGFDRSZSLYXURBYYXVWUVHOMKCHGOEQSXJFUYIIYXRZFXDYZMDFYVIB");
    msg.service_type = 112U;

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
    msg.setTimeStamp(0.011143475596952501);
    msg.setSource(2380U);
    msg.setSourceEntity(212U);
    msg.setDestination(56501U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8096179633500202;

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
    msg.setTimeStamp(0.37894787966190524);
    msg.setSource(37673U);
    msg.setSourceEntity(26U);
    msg.setDestination(34630U);
    msg.setDestinationEntity(103U);
    msg.value = 0.09064009766994108;

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
    msg.setTimeStamp(0.6960495892456114);
    msg.setSource(29574U);
    msg.setSourceEntity(154U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6251179288547943;

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
    msg.setTimeStamp(0.2044501919317936);
    msg.setSource(59051U);
    msg.setSourceEntity(170U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6006607457735476;

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
    msg.setTimeStamp(0.10942569864912233);
    msg.setSource(8588U);
    msg.setSourceEntity(181U);
    msg.setDestination(6346U);
    msg.setDestinationEntity(7U);
    msg.value = 0.5895745291759455;

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
    msg.setTimeStamp(0.7548350054176838);
    msg.setSource(33969U);
    msg.setSourceEntity(109U);
    msg.setDestination(8092U);
    msg.setDestinationEntity(133U);
    msg.value = 0.4375403421126599;

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
    msg.setTimeStamp(0.5577456517572931);
    msg.setSource(17104U);
    msg.setSourceEntity(160U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(251U);
    msg.value = 0.3936873304905365;

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
    msg.setTimeStamp(0.6911466111051754);
    msg.setSource(14154U);
    msg.setSourceEntity(29U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8715539181032029;

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
    msg.setTimeStamp(0.29535832274905804);
    msg.setSource(5913U);
    msg.setSourceEntity(16U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(211U);
    msg.value = 0.644646277279022;

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
    msg.setTimeStamp(0.9952461887768088);
    msg.setSource(576U);
    msg.setSourceEntity(103U);
    msg.setDestination(52752U);
    msg.setDestinationEntity(187U);
    msg.number.assign("RPDJXTUELSOVUQUNALATJFOGMZJIVNUHKWLIBNETPKNUFOCEIGASIEVQTSVPGWFBPPDBMNYDDOITPKITRHHJVNVJEXYFDMHXPRUMBHCACLKAQWADLGHGMOMOJSAKXXTYGYVRIUUQFM");
    msg.timeout = 15359U;
    msg.contents.assign("OZDFXGMXDDWEAQOTPXHPBYDKVULLZHQNYIVPHQKOMBEWAMZNTRPHECWWHYGIHXLITJVJTECLAVWBERACNZQBXGADJRUFSLWYFSOZUPXHGBESPTRNCDSLZJBTEKWGSULIKFAGQQULSLCFWMDHMVSOKJVSGIZTRZYMAJGWDIXIPB");

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
    msg.setTimeStamp(0.42842548345148124);
    msg.setSource(26118U);
    msg.setSourceEntity(64U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(137U);
    msg.number.assign("IGEKROYZXZSURHVFFYOKLFHIHWKWAWWPEBDGMLKZQKQMRHLTMUWHSGJPVRICSWVWPUOHHZZJEZZPTUMKVNUANWWQRRLAJVFSONYLLZKMAQCENCNVNFRBXIJD");
    msg.timeout = 12849U;
    msg.contents.assign("JFHRIOSKJQZEXIOSJGUNZTEOQGZDVUJYTSQRXRDBYWGILAGTKHEDWVQCATWBQZBCPXVMDIKJCRJMZQEBACMUOZNONVPZFRPBKCNMKKRPQOIINJMWSRBUWMMCVYLFEQVPETLRYDXUWYEVGELLKFCCKPGUUBDJCUMJHAPNSDTA");

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
    msg.setTimeStamp(0.5712518554560575);
    msg.setSource(17336U);
    msg.setSourceEntity(254U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(236U);
    msg.number.assign("UZVSOBRSDNNCIYRZRTLFBNQLHZUSZXEBWZ");
    msg.timeout = 46204U;
    msg.contents.assign("QLPZTTMENOLSJFOFHMRXLPAMKCBRVDOUSPKDVTUYEXQBDFGDJQZB");

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
    msg.setTimeStamp(0.6333264300085166);
    msg.setSource(47960U);
    msg.setSourceEntity(249U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(244U);
    msg.seq = 188939927U;
    msg.destination.assign("NFUBZDEEAYOZWYLLJVQHQMNKRIOAYVYCMZRNHMF");
    msg.timeout = 12465U;
    const char tmp_msg_0[] = {2, -51, 117, -12, 88, 112, -10, -6, -91, -31, -55, -82, 35, -123, -65, 56, -107, 121, -106, 40, -47, -60, 107, -92, -34, 81, -105, -79, -24, -101, -41, -19, 52, -38, 91, 46, -25, -108, -119, 4, 103, 75, -68, 36, -73, 123, 12, -2, -75, 10, 56, 91, -110, -8, 23, 115, -32, -78, -20, 49, 115, -34, 60, 29, -47, 3, 103, -100, -113, 126, -91, 124, -74, 100, -127, 34, -55, 76, -51, -22, 51, -52, 122, 34, -117, 100, -56, -95, 14, 76, -26, 44, -6, -41, 74, -61, -86, 41, -40, 97, 31, -49, -78, -65, 6, 117, 60, 18, 21, -38, -117, 66, 68, 36, -91, -68, -29, 53, 48, -73, 33, -7, 119, 71, -127, 43, 1, 60, -5, 74, -24, 91, -115, 17, -54, -118, -126, 60, 125, 75};
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
    msg.setTimeStamp(0.030362387649936706);
    msg.setSource(40741U);
    msg.setSourceEntity(28U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(102U);
    msg.seq = 711268030U;
    msg.destination.assign("LBOSHBDNVGPDAGIBSXDHTGBXLKHJDOHWKMNUMYBUJQROWGQUIUCZEPIEVRDDRXQFFSGWTAOGOFQTATNPXBUXJPKQHZGNZPHCACZVTHZEOXOWUQRMBKMNCQZLKYIOBXYQVASBINVJLDJJWPENMYVJISMWFZAYWFZK");
    msg.timeout = 28906U;
    const char tmp_msg_0[] = {-57, -88, -63, -112, -111, 103, 37, -61, 56, -4, 39, 118, 45, 82, 109, 59, 80, 94, 113, 10, -66, 24, -106, 62, -30, 83, 115, -68, 72, 73, -14, -51, -78, -45, 120, -92, 125, -1, -69, 3, 51, -87, -122, -114, 118, -85, 116, -26, -103, -5, 23, 35, 108, 72, -48, -96, -20, 109, -122, 70, 46, -36, 52, -69, 22, 90, 51, -94, 0, 102, -69, -89, 37, 32, 86, -61, -80, -116, 64, -97, -107, -39, -84, -52, -56, -51, -126, 102, -4, 91, 77, -1, -104, -63, -25, 113, -50, 98, -92, 44, -93, -76, 89, -54, -15, -107, 43, -58, 121, -116, -52, -114, 63, 2, -40, -52, -5, -5, 87, -100, -124, 125, 44, 40, 43, -112, -86, 46, 115, -57, 25, 95, 11, 110, -62, 59, -5, -79, 63, 64, 67, -100, 23, -83, 30, 40, 25, -38, 59, -52, 77, 111};
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
    msg.setTimeStamp(0.4333683289160314);
    msg.setSource(39900U);
    msg.setSourceEntity(103U);
    msg.setDestination(10522U);
    msg.setDestinationEntity(193U);
    msg.seq = 1753535171U;
    msg.destination.assign("CPYLRMRJIUYFDFZEONZDKKMOASLIQCVIRPTRMLFUGJKIFFVJFZXHNYDTBYBFESSCHJVMDYRIMPTOKLYJUFRXUWGQZPGQOCTSXAPVWAUVNQEWTYZMNXKSXQNJBCMXJAYLHCNNGAUDWXVGTKFOVPZQWGWBOOCQNPSBHBGUSUDTRASTH");
    msg.timeout = 60442U;
    const char tmp_msg_0[] = {-20, -32, 101, 10, -98, 98, 1, -120, 108, 71, -47, -77, -73, -45, -104, -36, -81, -11, -70, -49, -105, 38, 37, -15, -35, -57, 10, -70, -128, -126, -124, 71, -93, 2, -92, -26, -122, 87, -17, 17, -37, 123, -102, 99, -56, 43, -60, -6, 52, 110, -44, 14, -3, 55, -24, 30, -9, -59, 27, 123, -121, 56, 91, 38, -79, -43, 55, 6, 38, -9, -109, 27, 125, 7, 108, 90, 11, -101, 84, -8, -83, -87, 53, -98, 74, -16, -59, 68, -72, 32, 123, -16, -73, -103, 123, 102, -99, -46, 13, -79, 101, -126, 31, 118, 104, -72, 26, 111, 119, 113, -35, -74, -70, 60, -122, -6, -79, 97, -33, 102, -120, 109, 25, -26, -106, 97, -76, -86, 27, -16, -81, -93, 98, -83, 21, 120, 29, 83, -32, -7, 113, 93, -116, -41, -69, 100, 56, 94, -8, -28, -23, -82, 1, 109, 104, -80, 35, -16, 86, -109, 114, -58, 76, 81, -77, -122, 90, 55, -9, -88, 102, 41, 46, -95, -15, 109, -91, 55, -84, -22, 29, 71, 1, -93, 60, 50, -3, 86, 23, 95, 5, -122, 27, 106, -52, 78, 74, -15, -120, -50};
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
    msg.setTimeStamp(0.4430219041098743);
    msg.setSource(49734U);
    msg.setSourceEntity(145U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(109U);
    msg.source.assign("ADTMZCVSZTQOPCBTXYVAGJXJXVRHDHIYYZNQXZISMWUPPLPCKKYHKLUGGZSIAMKIVECLEYMONOSVGQDQWTHSWFNGBOTRDGFMCKIRENLAQAGIRQZMRCTRJRESFWDZJVMNGMRXEDTHEFOEABVDHLTQOPVJRDNWHLILUGBFWAJXBUYZXLUYQJLCCJEWPTPUKRKEDESWNFYKNUQCYFABLKYPKXFSHSQHOJAOOWGXFWJZCPINUVSFMMUU");
    const char tmp_msg_0[] = {69, -91, 60, -29, -100, 122, 117, -112, 61, 38, -70, 22, 90, -85, -87, 122, -93, -50, -128, -89, -18, 101, -88, -29, 23, 55, -72, -125, -39, -109, 54, -71, 49, -76, -101, -77, 2, 85, -19, -3, -82, 111, 96, -76, -60, -44, 98, -100, 75, 9, 95, -26, -92, -16, 111, -75, 101, -40, -81, 100, -126, 85, -107, -41, 108, 10, 78, 102, -116, -82};
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
    msg.setTimeStamp(0.6505457405049008);
    msg.setSource(25524U);
    msg.setSourceEntity(142U);
    msg.setDestination(195U);
    msg.setDestinationEntity(100U);
    msg.source.assign("AUHLYPZGWEDPVIRKFRZYUTZKYMPFYTIYBMNDPUONSSSDDUCNALCJZVLXMWRUAPQGNTMSMRQKCLLGXYWZVAMHOXDUJHSGHTHMHANE");
    const char tmp_msg_0[] = {-58, -7, 62, -24, -101, -1, -3, 3, 18, 93, -3, -30, -47, 0, 83, -120, 122, -43, -59, 124, -33, -27, -39, -53, 41, -59, -103, 106, -114, -68, 54, 94, -74, -85, -99, 35, 113, -73, 60, -55, -13, -56, -32, -105, 29, 96, 66, -74, 77, 104, 48};
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
    msg.setTimeStamp(0.08175288892232746);
    msg.setSource(45578U);
    msg.setSourceEntity(34U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(204U);
    msg.source.assign("CYLERWCOXALDMJPFSIAXC");
    const char tmp_msg_0[] = {59, 101, -61, -111, 1, -17, -121, -38, 126, 46, -99, 49, -80, -37, 35, -73, -127, -5, -115, 52, 93, -1, -47, -89, -72, -42, -109, 29, -94, 29, 82, -98, 95, 37, 71, -111, -76, -104, -37, -49, 24, -19, 17, -106, -70, -29, 32, 42, 113, 35, 4, -24, 123, 98, -66, 88, -74, -128, -4, 44, -82, 114, 66, 25, 67, 9, -41, -41, -23, -43, -116, -83, -111, -2, 51, -78, 11, -67, 58, -110, -46, 70, 6, 12, 41, -68, -35, 105, -86, 101, -73, -113, -28, 51, -3, -28, 113, 48, -127, 109, -126, -100};
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
    msg.setTimeStamp(0.2380875692382799);
    msg.setSource(45432U);
    msg.setSourceEntity(95U);
    msg.setDestination(45215U);
    msg.setDestinationEntity(66U);
    msg.seq = 2439963339U;
    msg.state = 29U;
    msg.error.assign("YRSQRCJWKCESQHZTNNDYMMVZGPJUOPVYIPOFQIDCHVYFBZAXLJBBGHMLEALUNKAUQEBKUMVQXFPZSLGODOGNUDZARGDYRFROZIIKWGTWXLQWXWTJFESFAZSXMGPUYLLVPTZYDTJUDYYKTOFABJAQEEXQZXGIUBTDHWVMCKCBFSFOVICKTDXHAKMNHVWVNPJSSRRBKPIRPQOCQGCNWHTBXJAFLENLH");

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
    msg.setTimeStamp(0.625521645936722);
    msg.setSource(25511U);
    msg.setSourceEntity(158U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(54U);
    msg.seq = 566525208U;
    msg.state = 249U;
    msg.error.assign("LVCJJGTSSHJAROLLHGAAMZINNNQUGXXHIIZLYJELIEXHBBXMPUWHQGTMXEMAAZVHLVUYKWXFCPPSTYSWRSAODOFOWDQBACKMY");

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
    msg.setTimeStamp(0.07554517387965476);
    msg.setSource(32705U);
    msg.setSourceEntity(101U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(64U);
    msg.seq = 2137472841U;
    msg.state = 155U;
    msg.error.assign("STNWMAYUOUJ");

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
    msg.setTimeStamp(0.15541288706247935);
    msg.setSource(51697U);
    msg.setSourceEntity(53U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("ECWJQGAOCDWJLJCVJKQAVNZJRWMNXSGUXVPAKPKWYFLVELIEBGGKVASMESDIWTHXRSCAZIHOGYDJHDTMBVHQIYHYGEIKCVEUMYKMBTRD");
    msg.text.assign("LRFHHDTAAMLKEELUIEUCNNQBHUPRXVOMPGAUIIWYBHWSUPPDVGCSTAAPPZZ");

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
    msg.setTimeStamp(0.7315569245860741);
    msg.setSource(26958U);
    msg.setSourceEntity(234U);
    msg.setDestination(34182U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("ANWNFXERBBOVDLIQBZFHSIAUALRCZKHKXAFHBGEBIJWWZNJJZJZTTXYUJHNMVFMRLQXDXUAPHSNVQXOTWEFTQCSPJBUNPL");
    msg.text.assign("PUFSUTRUVOBDIULXCPJHRCLTWFDQZIXLLMNFHJHAUNMCIWCGMQXXROHBBZQAHEKJPGGKTFGGUGECZLKIWGIQVOXIIZTRNJBLPZYPXQDUAOIZYGPOMAUTUCXQVCWDXTRTCKSHANOCBSTDJRBGGBVDVOKPAPWNRDEJSJBYOQHVTEDLNYQBVRDFFQERFEDSVFIYUXYETZSLZWSYEMKKMYAOFNCBLWKKHNJYAFKEAPHWNJAWMSVEQNZMMPXZYLSH");

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
    msg.setTimeStamp(0.9138168601951819);
    msg.setSource(31235U);
    msg.setSourceEntity(102U);
    msg.setDestination(659U);
    msg.setDestinationEntity(118U);
    msg.origin.assign("KSQDUJJEEAHRPDHBBZ");
    msg.text.assign("CGBCJPJQHYORXWSLCBYOLIVYRSIXXXQZHTLOIUAIVHDADEYPUUJUVPFTVEKNLCOBZATSEOLTASMJILMRIVNGKARMQVXMWCXONFEFLTORHXSQMEFGEFBPGJFXKGVDCJPZMBNHSNZEDPKWVQIOZCHZPHHQEWPYWUUWFTORQKYCWFKQAZDRBMMBHTUDWHNJACGY");

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
    msg.setTimeStamp(0.8820209689816055);
    msg.setSource(65149U);
    msg.setSourceEntity(136U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("GVPLEDMRUYHBZFLGNNOHIKXYJZXUEBQGSKPHOUVKLWTIJNSIUFKDWQCHIRKBTFJPTDHASTBPVQRIPRSYSUPWWXXGFKSQENCRRTACUYJZVRUEAFJLNZCZQHJLOAMGKURMIEFGZMNPRMGVHNBBWDWNA");
    msg.htime = 0.9561499223905165;
    msg.lat = 0.9565556521515699;
    msg.lon = 0.6975645124723512;
    const char tmp_msg_0[] = {-102, -107, -93, 123, 114, -76, 118, 80, 8, 37, 121, 1, 51, 6, 12, -116, -21, 78, 120, -51, 13, 7, 7, -48, 34, 78, -87, 70, 116, 45, -14, 1, -58, -100, -5, 61, -67, -56, 89, 25, -96, 32, -99, 72, -38, -118, -111, -10, 67, 46, -24, -108, 93, -65, -118, 39, -65, -38, -66, 120, -32, 57, 73, 68, -90, -48, -50, -51, -105};
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
    msg.setTimeStamp(0.40262006386288784);
    msg.setSource(26045U);
    msg.setSourceEntity(212U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(48U);
    msg.origin.assign("RWQOPEVWBLCLDJVNPCOFSUSKLUQFSWAURBIDEGHNFP");
    msg.htime = 0.0472312643134265;
    msg.lat = 0.30598126750985655;
    msg.lon = 0.08088277710994152;
    const char tmp_msg_0[] = {-77, -31, 2, 5, 44, 45, 90, 77, 62, -60, 120, -114, -99, -126, -99, -63, -59, 56, -1, -4, -87, -3, -109, -101, 63, 57, 1, -123, 55, 88, -80, -62, 34, -27, 96, 32, -91, 13, -51, -11, -9, 25, 21, -73, -32, 1, 116, 31, 112, -49, -3, 68, 108, -94, -7, 126, -59, 96, 100, -111, 19, 115, 98, 99, 107, 35, -75, -81, -119, -66, 73, -88, -24, -87, -80, 62, -96, 34, 34, 89, -62, -46, 43, 111, -23, 40, 91, -3, -112, -3, -109, -82, -113, 112, -61, 32, -58, 84, 36, -77, 95, -98, 45, -119, 44, 47, 67, -50, 20, 62, 51, 58, -29, -66, -73, 31, 96, 29, 44, -74, -41, -11, 22, 73, 33, 5, -98, -58, 83, -2, -72, 100, 76, -49, -77, -113, -5, 104, 17, 22, 31, -34, -11, -117, 90, -11, 65, -52, -96, -92, -30, 92, -24, 21, -6, -108, -115, 1, -102, -44, -59, -103, -1, -38, -107, -65, 102, 97, 37, -67, -66, -44, 6, -6, 16, 16, -78, -23, 95, 74, -121, 39, 0, 6, -61, -88, -18, 98, -99, 83, 67, -75, 75, -64, -62, -52, -6, 6, -82, 77, 61, 57, 63, -82, -28, 49, -3, 84, -103, -89, 52, 35, -54, -100, 13, -97, -23, -8, -29, -3, 60, -56, -32, 52, -70, 30, 12, -71, 116, 126, 63, -61, 38, -90, 25, 69, -13, -127, -48, 58, 16, -126, -91};
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
    msg.setTimeStamp(0.014882953513641772);
    msg.setSource(34356U);
    msg.setSourceEntity(8U);
    msg.setDestination(18330U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("TNFJMOAEPQOYQWDNPHGJGXLPUYQBJMBYZJEXVDTV");
    msg.htime = 0.7825032516075406;
    msg.lat = 0.5006791687322116;
    msg.lon = 0.8176460656979071;
    const char tmp_msg_0[] = {0, -1, 44, 67, -29, -107, -90, 38, -96, -118, -117, -77, -116, 83, 122, 124, 99, 125, -51, 7, -54, 75, -112, 92, -13, 124, 6, 52, -23, 65, -97, 99, 60, 7, -43, -38, 85, 119, 51, 0, 119, 32, 58, -86, 40, -31, 94, -94, -16, -95, -58, -122, 42, 120, -125, 42, -10, 0, 36, 80, -41, -111, -79, 83, -113, 51, 33, -127, -33, -72, 61, -79, 50, 41, 54, -72, 70, 79, -59, 36, -2, -27, 88, 15, -22, 76, 24, -30, 0, -60, 64, 98, 109, 68, -75, 12, -1, -59, 116, -75, -120, -106, 107, -50, 89, -55, -15, -95, 39, 71, 27, -127, 80, 11, 95, -11, -43, 121, -79, 106, -6, -96, 80, -53, 51, -102, 19, 45, 20, -88, 25, -76, 35, 81, 10, -99, -82, 6, -17, -76, -101, 67, 117, -85, 25, 22, -115, 119, -119, 118, -16, -49, -117, -123, 43, -99, -18, -118, -59, -110, -8, -93, -68, 11, -19, -6, -11, 54, 101};
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
    msg.setTimeStamp(0.9106395629681456);
    msg.setSource(14160U);
    msg.setSourceEntity(215U);
    msg.setDestination(27324U);
    msg.setDestinationEntity(83U);
    msg.req_id = 21871U;
    msg.ttl = 370U;
    msg.destination.assign("SXGYCFRCVIXMBAPWVKYXGLDKZCMNOSUGQPIXSVRHOCMDAJZOINQHMFUMWACJVUZIUXBDWLFETPLLVYVZZZSGEWKHLWLHBGOUTTRPGUQWANPTMDYFBRIXEILYAABIHKJUFTQTRDJCODOHVZQBYGOBFXRZPVJIPYKTAEJETYCFQKJLHIENJVSBCDSINNKWYRSTNDETRMFWSOBDEGFFUPYCNRJNNGCOWZLKSKPJMEXXPGWVQZQ");
    const char tmp_msg_0[] = {-31, -87, -35, 34, 97, -24, -82, -13, 63, -41, 81, 49, 96, -104, 12, -4, 113, 102, -57, -70, 83, -70, 124, -84, 25, 6, 122, 86, -111, -6, 68, -27, -108, 42, 36, 8, 124, 0, -87, 50, 97, -75, -87, 45, -92, -80, -45, -3, 126, -85, -112, 1, -65, 76, -57, 44, 53, -95, 53, -101, -88, 14, -65, -107, 90, 75, 99, -115, -9, -111, 90, -87, 9, 122, -44, 95, -127, -116, 38, -42, 45, 44, -39, -1, 92, -74, -89, 98, -39, -96, 51, 85, 8, -63, -34, 48, 116, -31, -44, 119, 109, -53, 17, 88, -97, -7, -43, 76, 7, -96, 43, 52, 68, -8, -91, 120, 33, 102, 104, 119, -73, -114, 6, 0, -8, -67, 23, 48, 8, -68, 65, -6, 55, -98, -68, 106, 77, -128, -104, -62, 60, 67, 19, 48, 33, -126, -76, -57, -80, -79, 48, 118, -45, -51, -118, 126, -14, 108, -65, 5, -65, 61, -93};
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
    msg.setTimeStamp(0.2603760973329996);
    msg.setSource(49739U);
    msg.setSourceEntity(180U);
    msg.setDestination(36811U);
    msg.setDestinationEntity(147U);
    msg.req_id = 38870U;
    msg.ttl = 21792U;
    msg.destination.assign("AAITTNUDIAQLGLDRXGRLPNXXAWYNCSANXCTJLZYEFQOMZJZLFMHCGDFOJTRFUHRHZOZWQYPTXRJDLYCWVKAKGGSUPQLNHOZOEUYIFCKVGLFKNBGVQDFBGMJQGBMSWPPNZBSVOQAYVWUWKSYVBBOPBUEJTEFUCRQDUSYIXPIHMTRNEYXWBKWAWHMLPFRIEHEIPFP");
    const char tmp_msg_0[] = {-101, -103, -50, -6, 119, 69, -103, 23, -51, 4, 24, -105, -15, 25, -106, -88, -100, 56, -13, 70, 104, -21, 70, 88, 107, -74, -15, 64, -71, -60, -71, 51, 69, -116, 59, 50, -50, 38, -118, 101, 78, -109, 41, 38, -50, -57, 110, -19, 96, -47, -77, 95, -90, -99, 103, 17, 94, 94, -51, -57, 2, 113, -46, 38, -32, 110, -111, 45, -58, -39, -91, 120, 34, 90, -34, -19, -77, -13, -57, -23, 88, 67, -32, -66, -78, -101, -29, -42, 20, 60, -95, -64, -125, -54, 24, -13, -109, -11, -36, -39, -7, -41, 119, -107, 69, 78, -69, -8, 33, -85, -65, -79, 62, -4, -44, -94, 64, 125, 106, 120, 92, 25, 101, -1, -78, 110, -84, 32, -127, 59, 78, 100, -53, -30, 13, -112, 87, 96, -99, -126, -9, 103, -7, 83, 55, -37, -88, -26, -56, 28, 69};
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
    msg.setTimeStamp(0.08890036052894779);
    msg.setSource(55784U);
    msg.setSourceEntity(86U);
    msg.setDestination(27346U);
    msg.setDestinationEntity(47U);
    msg.req_id = 41991U;
    msg.ttl = 40666U;
    msg.destination.assign("OIAPIEAZWVQMREBCNQMGCYUOKBOXYKYGOWRMPWFJZPSNBKIZCJWTVYSLJIZKLFROPBUVFYRBXTQEQEDHQOJEUNSQPETDFCOHAZKNKQBGATYFTRLQHVGSJATRZPKNXJNNCXWGNXYWBWCHIHCHVDIDAZDJLDCMKCRLPMU");
    const char tmp_msg_0[] = {-96, -108, -108, 55, 95, 112, 79, 82, 59, 7, -27, -116, 66, 85, -2, -79, 44, 20, -43, -82, 84, 123, -98, -97, -75, -57, -55, -15, 61, -13, 85, 56, -23, -48, 28, -127, 3, 88, -71, -25, -54, 37, 4, 34, 11, -57, -13, 70, -71, -49, -113, -54, -5, -13, -120, -84, -33, 12, 57, -127, 27, 72, 102, -38, 93, -109, 1, 53, -29, -115, -116, -30, -115, 87, 29, -43, -49, -127, 84, 59, 121, -3, -10, -89, -80, -86, 12, -86, 45, 43, -122, -29, -1, -85, 46, -54, -89, 14, 112, 102, 42, 110, 70, 37, 12, -50, -16, 91, -60, -85, -96, -27, -36, 80, -93, 75, 81, -69, -48, 60, 1, 6, 85, 69, -89, 63, -110, -26, 35, -121, 102, -25, 2, 89, 20, -45, -22, 106, -124, 119, 63, 25, -96, 13, -104, 27, -92, 117, -47, -96, -34, -121, 45, -43, 78, 115, -43, -83, 101, 105, 20, -127, 68, 20, 119, 22, -45, 6, 74, -70, -74, 93, -73, 106, 90, 36, 121, 26, -71, -97, 107, 91, 96, 64, 16, -13, 73, 0, 103, -120, -96, -114, 37, -116, -82, 4, -67, 19, -41, -51, 63, -5, 97, 121, -111, -104, -96, -36, -69, 60, 124};
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
    msg.setTimeStamp(0.4692935604180297);
    msg.setSource(4123U);
    msg.setSourceEntity(169U);
    msg.setDestination(60964U);
    msg.setDestinationEntity(107U);
    msg.req_id = 17382U;
    msg.status = 157U;
    msg.text.assign("CPTPBIWMLSMKUNQUTUWZLBHRMHMONYZKJFPOVXXWGEZROCINSBSPISKJPHH");

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
    msg.setTimeStamp(0.09388644598104945);
    msg.setSource(19032U);
    msg.setSourceEntity(130U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(56U);
    msg.req_id = 14660U;
    msg.status = 210U;
    msg.text.assign("SYDJRBDJKCQMONKFONAUORSSMBVULRHMTBKIBGBGBQNOAAJNMIWIZLXDHVAEKVMBJRFBYDETUOCZOFXPVKEWIWXJZKLUZTTWICXTVLLLAZKPOPNPGXMEDMWUZTDJYWDYQRRCJAHVWXAFVFQRIRITQDNR");

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
    msg.setTimeStamp(0.6290943654952178);
    msg.setSource(17304U);
    msg.setSourceEntity(137U);
    msg.setDestination(55520U);
    msg.setDestinationEntity(115U);
    msg.req_id = 18296U;
    msg.status = 49U;
    msg.text.assign("VTFABYIPSFHUTXAKIKWABDNASBBMJDFSCVSCENERQEUDRLZSVOZNUTTWJEJUEUBWONIYNVOWF");

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
    msg.setTimeStamp(0.42739774669052255);
    msg.setSource(8853U);
    msg.setSourceEntity(59U);
    msg.setDestination(42727U);
    msg.setDestinationEntity(18U);
    msg.group_name.assign("LDZLJQJEKPFPYQRMPNBACKXDYLWGMTYKTHJTSSZBHNXOPSXSPXQEVLLYILVSHUYGIRFAACAHCNXHWGRWMPZMDKFIGKMTZMMDWMJVKNWBQTYQUWRBPC");
    msg.links = 1963142986U;

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
    msg.setTimeStamp(0.3551928642678064);
    msg.setSource(36136U);
    msg.setSourceEntity(95U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("NPCOYEKBYMTYZEFJPHSYVSGTPFSHSIPLEHXLOKPUJYDHWSFWKUEZJLVNFQOVSMNORUYKXBOVWMZVZVMRZABQRMIQAXFBCCCPYFXRSDEBIYAOFEHXCUDLVMCOKDXNDJUWQZWXRLQBALCHFVIWYANGJCXEONDEXACIO");
    msg.links = 3318643140U;

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
    msg.setTimeStamp(0.1548137243370724);
    msg.setSource(53235U);
    msg.setSourceEntity(176U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("VEANWUXHKQHCOXTFPKRUJCUBZKCZWMVYNHNEGSLXPRJDDWSDVGHHDYFSRHDLTCKMHJXYXSFKAAXAUCPOXQQDNAOSKELLGUPPVYUBUXNWGFKBIVVAUQEBISLZWTGJRTGSITFSGCBZLBITCIKFKJQGECBIAQJOADOOHXUYQJVWNERYQDJTXMRTNLFWMAHIRFRYBMHAMBKBCUMVVJOYDVMOJPPWEZPWSRDTLIZFYLYTNRIIWNCPOZMQGFEMZ");
    msg.links = 1802428819U;

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
    msg.setTimeStamp(0.45895736226409733);
    msg.setSource(41194U);
    msg.setSourceEntity(23U);
    msg.setDestination(25307U);
    msg.setDestinationEntity(170U);
    msg.groupname.assign("DSNJCULHRUSSGYYSWPDJSXLBWXEKMHLYMUCKAJQCYIQVRMSYCBVDOBUYZMETWMWKJGNLAYQIVVCFZOQXHJBRVPFWMKTWLFIZLGXZEXPFERQHIDQFSROKKUCONMZDXGKWGYAJOTEOVNAVOGOUURGXACAQDFYQTRZLWWJUHJFWVABTNDEIXEDGNFH");
    msg.action = 143U;
    msg.grouplist.assign("NKHWAGKVYEXCXMXBSDNYAJPVLFUQHYWHQGOEYQBMQYIQLCEZEOEDLIWNZGTLKBLDXPMNFGPEVDHAONRAEOFWJFEJABZIKMIVTPYGZZWGDOJNIYRKSWJQDRGXDCFYRZIKCNTUBASNAMOFXCNHPRXFXBKTODOJCBLEHHE");

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
    msg.setTimeStamp(0.2043028591214726);
    msg.setSource(54806U);
    msg.setSourceEntity(81U);
    msg.setDestination(18285U);
    msg.setDestinationEntity(136U);
    msg.groupname.assign("NKHNUPCGRHJRQIELKKDDFKZAWVMIEIHHCIHPXYGGRIYTRVQWLSSQUJXZFBHMWKUMCSQKEVHZXQGJLODRMONTCNGVCGHZAPUXUYYQARMVZFFPXZEAMSBTJQMTJTKUQEDIXCRBJDONUSFKYFASLACIOVLJOWCXTEMBVLTWVRYBBAPCJOYUVEMPQGYKZXJDPHDWEDWOLUPQBVTOWNLUBPZOZXERGKAFHAYF");
    msg.action = 93U;
    msg.grouplist.assign("TVBGEFPGRKNWAHEIXRYFOCCALWYGQZBSDWAKAXQIJZXMINJFQCBVUENQYWTNTDULDSRZELNANXCHRTDHVFLYWSMPPPMKQKYLZXFGIEZDRCZOWAMQNAKCNTUMYDTQPVJIJHTXHOPUVSMDMXTZVXTGDSUJNGIAORYBSSVUZBOXSMYGRJOWCUNJIHIVSGWHGTLSLQKU");

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
    msg.setTimeStamp(0.10987843394186858);
    msg.setSource(37753U);
    msg.setSourceEntity(136U);
    msg.setDestination(19368U);
    msg.setDestinationEntity(108U);
    msg.groupname.assign("DPUSWSRRWEGCWGQKFBNHEOWKEYIEUHTRJENFMQZBREKJOIUQYZJMTMUYUTVWXLXKOFZZZTARIRQDCUDMMTN");
    msg.action = 151U;
    msg.grouplist.assign("FCVFDHMUWDZHGRHIYJTONOIJKVQASPLHOEMZBXUGBHNPSVQVYNFONUHOAIXXCSMJNCKZWBBRJOIYXALMTQPRAIVULSHSMWJFCKZFYAGPBDZREGCSPGQHCQYVQKRTBIOVQYXNELFLTNGKRNPKMLMKQIVVGLUCBJEDISXEOWJKNFSFKTWULCMRRPTMXJZHETIFQOSPRSAQTZUGYDJWYOAHDWTTFAVZYWDLXEWYEUNLAIDGAECPMX");

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
    msg.setTimeStamp(0.28084133333361216);
    msg.setSource(36367U);
    msg.setSourceEntity(104U);
    msg.setDestination(6355U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9565523563022524;
    msg.sys_src = 14282U;

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
    msg.setTimeStamp(0.8215844643547016);
    msg.setSource(10190U);
    msg.setSourceEntity(28U);
    msg.setDestination(52697U);
    msg.setDestinationEntity(218U);
    msg.value = 0.7889109329093675;
    msg.sys_src = 4739U;

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
    msg.setTimeStamp(0.15118800007620992);
    msg.setSource(45121U);
    msg.setSourceEntity(16U);
    msg.setDestination(40810U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8237721511312465;
    msg.sys_src = 461U;

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
    msg.setTimeStamp(0.6299985867890113);
    msg.setSource(16742U);
    msg.setSourceEntity(236U);
    msg.setDestination(9348U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8728594056034505;
    msg.units = 51U;

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
    msg.setTimeStamp(0.455405869834678);
    msg.setSource(49905U);
    msg.setSourceEntity(79U);
    msg.setDestination(20297U);
    msg.setDestinationEntity(201U);
    msg.value = 0.5994614684215563;
    msg.units = 137U;

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
    msg.setTimeStamp(0.48185215397947645);
    msg.setSource(56430U);
    msg.setSourceEntity(112U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(96U);
    msg.value = 0.7651783816647859;
    msg.units = 11U;

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
    msg.setTimeStamp(0.9388545947381806);
    msg.setSource(24949U);
    msg.setSourceEntity(245U);
    msg.setDestination(50088U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.1901465578028667;
    msg.base_lon = 0.1030290483955586;
    msg.base_time = 0.22994238263995892;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 63173U;
    tmp_msg_0.destination = 33978U;
    tmp_msg_0.timeout = 0.08488893262710995;
    IMC::Target tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.label.assign("YBZUOZWMFPLGPHBUANOSHAXYXTUNJHTFVGLPUJBJTSJGMCBUPKJAXYVLJVCCSRDNXGMMSWEADLTIVMKTWQCSXFIVQARBDUADGHZBPYOJXSFATHHZNCFQKGMIXJIFPNZGQWWQYDUVLVIOXOWCAKKIZSBEDENSHJEXYWORQVQATRRHZRSEQTNQVKPKAOROFZMRRDIHTGEUCTMNMYIYGZXYCRIWGLBEYPUDUBENEZIHLCMWVJNODFLCBKKOPFPFDK");
    tmp_tmp_msg_0_0.lat = 0.04639063839126489;
    tmp_tmp_msg_0_0.lon = 0.6519333393181082;
    tmp_tmp_msg_0_0.z = 0.9395256133153991;
    tmp_tmp_msg_0_0.z_units = 23U;
    tmp_tmp_msg_0_0.cog = 0.7587309931107562;
    tmp_tmp_msg_0_0.sog = 0.903356342310178;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6054416410171396);
    msg.setSource(4447U);
    msg.setSourceEntity(118U);
    msg.setDestination(23892U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.011334304080964364;
    msg.base_lon = 0.033964066058788545;
    msg.base_time = 0.069809601335305;

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
    msg.setTimeStamp(0.6839593368890481);
    msg.setSource(58720U);
    msg.setSourceEntity(52U);
    msg.setDestination(10812U);
    msg.setDestinationEntity(41U);
    msg.base_lat = 0.40908273605403633;
    msg.base_lon = 0.9279290193868691;
    msg.base_time = 0.3896277439387832;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13432U;
    tmp_msg_0.priority = 78;
    tmp_msg_0.x = -3067;
    tmp_msg_0.y = -3605;
    tmp_msg_0.z = -11160;
    tmp_msg_0.t = 27023;
    IMC::QueryEntityInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 144U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.739993296458756);
    msg.setSource(6922U);
    msg.setSourceEntity(61U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(32U);
    msg.base_lat = 0.6238400956545218;
    msg.base_lon = 0.5872133748687974;
    msg.base_time = 0.33527355757122224;
    const char tmp_msg_0[] = {46, 6, -118, 90, -88, 98, -84, 63, 101, -35, -92, -96, 104, 11, 23, 29, 28, 35, -20, 38, -5, -1, 82, -2, -105, -79, 40, 81, -94, -81, -9, 120, -93, 79, -45, -114, -9, 73, -71, 111, -20, 84, -101, -34, -108, 83, 81, 54, -92, 73, -30, -58, 63, -64, 97, 87, -81, 92, -98, 24, 61, -96, 104, -3, 75, -73, -74, 40, 38, 52, 32, -106, 94, -45, -69, 117, -2, -108};
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
    msg.setTimeStamp(0.6092587496125809);
    msg.setSource(10072U);
    msg.setSourceEntity(27U);
    msg.setDestination(22916U);
    msg.setDestinationEntity(108U);
    msg.base_lat = 0.5411891965301909;
    msg.base_lon = 0.8738961440856013;
    msg.base_time = 0.41199094144528214;
    const char tmp_msg_0[] = {103, 105, -93, 93, 108, 99, -92, -93, 117, -53, 2, 4, 114, 86, -17, 65, -113, 45, -92, -2, -118, -127, 77, 120, -25, -117, 41, 36, 99, 27, -20, -12, 119, -21, -92, 124, 55, -76, -37, 15, 83, 27, -82, -101, 120, 16, -24, 44, -86, 115, 65, -103, -95, 78, -21, -48, 89, 72, -102, 37, 48, -83, 114, 60, -29, -57, 44, -127, -121, -123, -82, -5, 34, 32, -65, 90, 25, -16, -43, -13, -1, 67, 26, -9, -118, -115, 98, -10, -13, -86, 25, -20, -20, -52, 4, -42, -42, -55, -88, 0, -2, 71, 52, 36, -36, 107, 48, 77, -82, -3, 59, 15, -55, -95, 116, -43, 7, -3, 45, 32, -13, -61, 4, 22, 1, 44, -62, 62, 75, -62, 4, 22, -119, -46, 95, 45, -34, 65, -9, 19, 69, 75, 40, 122, 9, -48, -66, -16, 89, -58, 65, 9, 97, 83, 109, 21, 75, -37, 83, -4, -124, -60, -2, 24, 102, 120, -78, -79, -68, 34, 25, 79, -1, 22, 94, 108, -98, 44, -5, 117, -35, 54, 1, -41, -76, -21, 39, 58, -11, -24, -32, 49};
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
    msg.setTimeStamp(0.8539107980251461);
    msg.setSource(26414U);
    msg.setSourceEntity(101U);
    msg.setDestination(465U);
    msg.setDestinationEntity(156U);
    msg.base_lat = 0.5144632646035193;
    msg.base_lon = 0.5564576130279938;
    msg.base_time = 0.8608484196951779;
    const char tmp_msg_0[] = {-74, 15, -93, -27, 26, -12, -53, -47, -64, 11, -79, 124, 72, -70, -9, -94, 83, -17, -81, -11, 34, -105, 116, -17, 94, -101, 71, 79, -44, -125, -69, 87, -119, -74, -103, 72, 115, -14, -104, -66, 117, -93, -56, -58, 7, 67, -18, -65, 29, -59, -72, -34, -117, -95, -109, 95, -15, 101, 63, -109, -51, 20, -92, -28, 30, -61, 50, 72, -29, -81, -61, 111, -16, 86, -102, 62, -98, -109, 98, -127, -60, 15, -125, 111, 121, 115, 3, 42, 21, 20, -123, 87, 74, 18, -3, 66, 85, -32, 41, -125, -35, 121, -92, 9, 0, -92, -42, -51, 108, -119, -98, -43, -22, -109, -101, 29, 107, -2, 34, 49, 3, -74, -68, 7, 45, -18, 4, -71, 15, 94, -117, 7, -33, -85, -29, 88, -52, 106, 27, -124, -86, -64, 6, -98, -78, 77, -74, -126, 4, 59, -81, 21, -116, -9, 71, -11, 36, 52, 17, 113, -73, 4, -126, 91, -21, 45, -32, 71, 108, -67, 14, -48, -108, -24, 33, -48, 64, -34, 22, 104, 7, 6, -103, 78, -125, 86, 76, 11, -30, 58, -12, 104, -103, -44, -10, -48, 50, -93, -14, 47, -50, 4, -110, 81, -111, -94, 113, 57, 125, 42, -9, -17, -3, -60, -44, -42, 1, 61, -120, 62, 105, 125, -58, -70, 126, 125, 42, -108, -39, -46, 92, -33, 119, -2, -5, -18, 30, 107, 35, -38, -7, 12};
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
    msg.setTimeStamp(0.9097291485057719);
    msg.setSource(7078U);
    msg.setSourceEntity(123U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(45U);
    msg.sys_id = 29755U;
    msg.priority = -56;
    msg.x = 25950;
    msg.y = 1772;
    msg.z = -847;
    msg.t = 28193;
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.5388742266745192);
    msg.setSource(26346U);
    msg.setSourceEntity(189U);
    msg.setDestination(13555U);
    msg.setDestinationEntity(132U);
    msg.sys_id = 54788U;
    msg.priority = -111;
    msg.x = -2035;
    msg.y = -6022;
    msg.z = -8157;
    msg.t = -3503;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3381723170U;
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
    msg.setTimeStamp(0.20524346104819247);
    msg.setSource(59135U);
    msg.setSourceEntity(32U);
    msg.setDestination(14293U);
    msg.setDestinationEntity(230U);
    msg.sys_id = 2268U;
    msg.priority = -124;
    msg.x = 17107;
    msg.y = -4510;
    msg.z = -14850;
    msg.t = -21843;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.4569205887813331;
    tmp_msg_0.reason = 44U;
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
    msg.setTimeStamp(0.27418126854905867);
    msg.setSource(22865U);
    msg.setSourceEntity(42U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(64U);
    msg.req_id = 10141U;
    msg.type = 50U;
    msg.max_size = 60055U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7177313967516322;
    tmp_msg_0.base_lon = 0.31971782946987803;
    tmp_msg_0.base_time = 0.3743727064503525;
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
    msg.setTimeStamp(0.7740443104128726);
    msg.setSource(60949U);
    msg.setSourceEntity(59U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(171U);
    msg.req_id = 20508U;
    msg.type = 177U;
    msg.max_size = 40203U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.525657499166132;
    tmp_msg_0.base_lon = 0.25836804833467064;
    tmp_msg_0.base_time = 0.9757052816298095;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27003U;
    tmp_tmp_msg_0_0.priority = 37;
    tmp_tmp_msg_0_0.x = 28902;
    tmp_tmp_msg_0_0.y = -9508;
    tmp_tmp_msg_0_0.z = -11964;
    tmp_tmp_msg_0_0.t = 24349;
    IMC::AirSaturation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5975308330926692;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.8736292151561693);
    msg.setSource(42509U);
    msg.setSourceEntity(196U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(52U);
    msg.req_id = 53230U;
    msg.type = 188U;
    msg.max_size = 7375U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6244414096204864;
    tmp_msg_0.base_lon = 0.37105794124730784;
    tmp_msg_0.base_time = 0.17783273102517705;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 5467U;
    tmp_tmp_msg_0_0.destination = 19386U;
    tmp_tmp_msg_0_0.timeout = 0.4299354872852942;
    IMC::RemoteState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.2879251238233389;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2913357810409162;
    tmp_tmp_tmp_msg_0_0_0.depth = 95U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.41471606722951215;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.7002773611202366;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.2354654764426828);
    msg.setSource(50774U);
    msg.setSourceEntity(190U);
    msg.setDestination(59345U);
    msg.setDestinationEntity(81U);
    msg.original_source = 24612U;
    msg.destination = 44181U;
    msg.timeout = 0.8313876215672859;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.513352532733268);
    msg.setSource(1603U);
    msg.setSourceEntity(103U);
    msg.setDestination(36814U);
    msg.setDestinationEntity(207U);
    msg.original_source = 55257U;
    msg.destination = 47789U;
    msg.timeout = 0.09089194813581314;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 152U;
    tmp_msg_0.mode.assign("FYHSKGRXHIOSIEUFCZUG");
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
    msg.setTimeStamp(0.9847787437392538);
    msg.setSource(38874U);
    msg.setSourceEntity(101U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(90U);
    msg.original_source = 23917U;
    msg.destination = 11183U;
    msg.timeout = 0.6018383063191304;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.6647867170215281;
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.6069650038225698);
    msg.setSource(38637U);
    msg.setSourceEntity(24U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(133U);
    msg.id = 34U;
    msg.range = 0.6304215271297097;

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
    msg.setTimeStamp(0.9872965739128227);
    msg.setSource(2268U);
    msg.setSourceEntity(25U);
    msg.setDestination(6714U);
    msg.setDestinationEntity(238U);
    msg.id = 244U;
    msg.range = 0.24378821859203958;

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
    msg.setTimeStamp(0.06108051162396533);
    msg.setSource(52753U);
    msg.setSourceEntity(136U);
    msg.setDestination(12320U);
    msg.setDestinationEntity(205U);
    msg.id = 120U;
    msg.range = 0.3661130078177174;

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
    msg.setTimeStamp(0.9929855969754653);
    msg.setSource(48487U);
    msg.setSourceEntity(49U);
    msg.setDestination(24425U);
    msg.setDestinationEntity(200U);
    msg.beacon.assign("HEPRPRNPYVJPWBQOIPQNGBFCLSBZJDPIWABJZAFLFCHMJSKMXRVTNNBECDLOYURHFIHHJSGJBWUJTRQNLCKCCVWMUHTVANQPYZYMFHDZKBKCSFGIEUXDXFTEZCMPRUAMEYXDUDQRVHBVIAGDYNZGSMETSQAKGHHXDAYUNJKFMREMOQGTSXAVCLKCZFSOLZITDTOBLUWYKGEWIYWVQMWOFOVARGEZWELUIWJXPDPXXOSNZIKOQXRTGNKST");
    msg.lat = 0.66042791974422;
    msg.lon = 0.7614815507760568;
    msg.depth = 0.3413990388004524;
    msg.query_channel = 189U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 254U;

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
    msg.setTimeStamp(0.33468247690777386);
    msg.setSource(5496U);
    msg.setSourceEntity(147U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("XVFPJZUMRYXCGDKHUPYAUAJPWGSI");
    msg.lat = 0.8948918686500297;
    msg.lon = 0.3679513688125001;
    msg.depth = 0.6519502158129868;
    msg.query_channel = 162U;
    msg.reply_channel = 163U;
    msg.transponder_delay = 125U;

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
    msg.setTimeStamp(0.5682253672127384);
    msg.setSource(25466U);
    msg.setSourceEntity(215U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(140U);
    msg.beacon.assign("VAVGQLBYBXDYSASHEBKOTWHCVIKDBFCEJDJNEKFGWATPHRFPSPUYIQJQUQIRDAUZIAMRVWACGRBVQJWRUSHPLLEQQFFFHWFGZYMGIBJSQPIIVGNIZHREUEXOELNT");
    msg.lat = 0.094925421766625;
    msg.lon = 0.3809936730200105;
    msg.depth = 0.7315127366326772;
    msg.query_channel = 233U;
    msg.reply_channel = 100U;
    msg.transponder_delay = 102U;

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
    msg.setTimeStamp(0.2934442577114922);
    msg.setSource(9058U);
    msg.setSourceEntity(29U);
    msg.setDestination(32736U);
    msg.setDestinationEntity(205U);
    msg.op = 99U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOCKNGGSPBTPHSTHHPXCFERROIWWMKRMUDYCJMBWPGZULDXHUJYOWTBRDZTMDHRNQBJJSGYRUDXTKZWZFNDAKFPEFGSAEWXZKJQJYLLFWBSXVAAUIXLROCCVIXLPJGXONFENVCAXIHSNYFHQMCAMTKFMMONFYSPMRAKYVBZYGVVOIDTHTKLTOWCLIIWSGUPNTNGZJVYNXQZHKBOQPEARIGFEEJDRSYHPOVAUKQZUIDCEQBUBSQUBV");
    tmp_msg_0.lat = 0.45155083627592507;
    tmp_msg_0.lon = 0.8517790897139453;
    tmp_msg_0.depth = 0.4297873908514839;
    tmp_msg_0.query_channel = 221U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 179U;
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
    msg.setTimeStamp(0.7793523009783697);
    msg.setSource(1011U);
    msg.setSourceEntity(161U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(246U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.8647238849545344);
    msg.setSource(114U);
    msg.setSourceEntity(39U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(201U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KXEYTQYGHIUFFGJQSWZLJRNKPOBHXAKKBTODGMIOFGOQUMCASRQDSIINFMMCNLFXCHNUQAFXYPHVZYVFHHSWCVWLIGQWBBCRXGSDTYQLVPNIXNUZAGPJUSRVJXYUATWHVBBEBRIDRSQSJXEDZTLMDPZMKGNOOJWZJULVKJBOLQDEJMHWHINOVARBFPTRTAAOZYLIDRYLACWCWKCETNCXMPMDEVAJKQOUCGZFSBZTFKELEYPYUETWSDZMKNEHI");
    tmp_msg_0.lat = 0.4245480720937037;
    tmp_msg_0.lon = 0.0015184012205664565;
    tmp_msg_0.depth = 0.3249507843783357;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 80U;
    tmp_msg_0.transponder_delay = 141U;
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
    msg.setTimeStamp(0.5457020612608421);
    msg.setSource(25054U);
    msg.setSourceEntity(253U);
    msg.setDestination(55220U);
    msg.setDestinationEntity(233U);
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("XUNWDGGRSZABYLZVRHOGYQQEGOPVATETJVOARXXDUMUEORQNVZDMHISRBBOSFYLMYWFRQLNTVHZIJLFEAQVJVHEKLOSGDKCCUIONEWZJUMUYIQLXSFXBHPKQWPXAIRGVYWQLPABNKYOXGLYFLBCDZZPSERHTHGEBWHOFKCAMJD");
    tmp_msg_0.sys_dst.assign("SYYKHTXBUUNETUJPWLNGPQOUUQLAENQEFHAYVGSMREDWWJTUQTDWHBAXNZXFRDXQDARTXIMTADAWBYRDHGT");
    tmp_msg_0.flags = 177U;
    const char tmp_tmp_msg_0_0[] = {58, -91, 29, 56, -83, 52, 15, 18, 103, 122, -79, 1, 56, -114, -40, -7, -71, 27, -56, 24, 101, 17, -10, -86, 47, 55, 13, 67, 47, 31, 125, -20, 3, -17, 77, 62, -82, 68, -69, 18, 94, -92, 26, -20, 69, -58, -80, -17, 111, -124, -53, -77, -96, 92, 114, -61, -3, 5, 42, -28, 84, 8, 75, 110, -128, -52, -90, -66, 17, -106, -46, 69, 98, 29, -89, 57};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6549861336803333);
    msg.setSource(39222U);
    msg.setSourceEntity(26U);
    msg.setDestination(24310U);
    msg.setDestinationEntity(7U);
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 9382U;
    tmp_msg_0.sys_dst.assign("LXFPHPRGNVRKKUO");
    tmp_msg_0.flags = 100U;
    const char tmp_tmp_msg_0_0[] = {-94, -107, -127, -53, 31, 21, 94, -124, 80, 49, 102, 26, -13, 47, -94, 65, 118, -74, 75, -76};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5324317715896295);
    msg.setSource(57210U);
    msg.setSourceEntity(70U);
    msg.setDestination(60747U);
    msg.setDestinationEntity(170U);
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.003573148531019088;
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
    msg.setTimeStamp(0.430050001110338);
    msg.setSource(19162U);
    msg.setSourceEntity(77U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(225U);
    msg.op = 242U;
    msg.system.assign("LOMCQJTHGBVRVWUUCUQJWWRKMNAPMCASYOBPLKBIKBHVVEQNOMXOLEZUXEUCSQDWFJHGTXNSRBLSZLUFFKVJNBPIZJNRLYZOXPLEJDMDTKDTTOGZARAHFQCQZHRIGRNMGUALYFEBSOEWCNKPIXXVOFDYJJHQNRHHFEIKFMUSXWOSDIKANDWMYEDAPV");
    msg.range = 0.6082388275110475;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 127U;
    tmp_msg_0.htime = 0.27044898738317436;
    tmp_msg_0.context.assign("QPSGDTBYLFIODTGSBAZEGNRZPTLQMLVFSHCLLQNADKQXKFVRQSOCJYOCEIWUBEAXYOQDWLBMKKUCQOHPMRPZEYUCNVWBUBDIBXFTJZHVUJMKYMZLNQ");
    tmp_msg_0.text.assign("GKFSOQUFBJZIWEOGDCUND");
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
    msg.setTimeStamp(0.6495763364802384);
    msg.setSource(27873U);
    msg.setSourceEntity(211U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(214U);
    msg.op = 130U;
    msg.system.assign("TBYKPLBCDDUUHIRYIGXWBTHWTQCYTQWRAKXSJCXCRFMZDTOEFSZXSQTBANSXPNJZJAEWQGKAIMJLTEPEBDREFHRPYZVHXIOTGFHNULIALYNGUUQJNFAGQVRXYNVVDZPKQKCWNAVQPPOFIEVZKUFOBMPCFCISWSGOOLSNFCFBUXXACRZKDWOMMZGSLNEMCZQKOHGLJOLTUJUXAZLVDMLBKVYJHBIIJWRYYHVWIGTDKWGMMRBE");
    msg.range = 0.5467883111123889;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 20U;
    tmp_msg_0.mode.assign("ZRYVVXYCUGXAYHDFVJELQABKJATBIXDTOFKVXMREEQJVRZXGYNSPTNEPXKBLHRONZTDUPWNKQGAGQIPHSGPPFXCJFJDWIOALIVNJJFEBGZYKCVOOJRXLSSDQOSNAFVMKFGUPLCAZURUUYYPHXSLNWUORQDMSH");
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
    msg.setTimeStamp(0.7497818824612571);
    msg.setSource(14668U);
    msg.setSourceEntity(119U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(224U);
    msg.op = 68U;
    msg.system.assign("JMXXOCTMOZMRKEHHVQUCBOGGURVYYZMVWSRQZTEUQDACWMBUSQJPPJTDHBXFDIARYEKSGBMFFBGBWVDAZYXHUCFHGIJJTWLKSNFXQZUNKVQRAGQELQEIPRLIMIPOELHPXHBPIJYPDSBEMXEZODCDAPCI");
    msg.range = 0.2599068030212399;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 164U;
    tmp_msg_0.mnames.assign("EEFKJQCLXTCJGSKSNNJMWGRLHJFMAINYELTKTOLCMXYVCAHUFJDGTRUHDYEPZYKHSURQCAKXVRSEKMQGAZFVZNUWYUGPVYIWLLFZFZINEBBPKMRYQDKGWGCVUTQLONLEJOIAFUKESJQBNLAPNIWBPRCDXHVGBXCCDDXEZIOWHSZRFDVUWFOTMNJWOSQRMPOBSIXYCZZOQGYASHTQVHYBPXKXXJU");
    tmp_msg_0.ecount = 157U;
    tmp_msg_0.enames.assign("YZMQZBMHEUABNKJJJQSFHNWIYUELXQTMSDTTPPTGILQHFQBACXMMUONSFFQAMODPIFZZVTFRDCYRLDCMPTJCSOOZFEISAM");
    tmp_msg_0.ccount = 24U;
    tmp_msg_0.cnames.assign("DYPRSEJYBOXNMURQECZWIBCFQJHGDNWNQGSMJMLAJCKHPBFZYJWMQLLQVHUZKKNDHLRVSNDZQDCMEOTRBCSCTBOVABURMPWHXKHIKQILXVKFZCYPXTDUJCWKXMCESKYVLMKQFAGAYJBTLOHNYLYRFBGWRYWRCPNVWZLUIKNOUXXIOLEGIPFVOTANSBTAGBVXJHISMTRFZOQWTYODGPSZVSUTXFQGA");
    tmp_msg_0.last_error.assign("VOVPTQFAKDFYULVJDZJIJWREMXWBYGWXGEKTVEEDIKEWCNCKJTZQTT");
    tmp_msg_0.last_error_time = 0.8448806730560122;
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
    msg.setTimeStamp(0.6484651810306714);
    msg.setSource(32837U);
    msg.setSourceEntity(3U);
    msg.setDestination(38802U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.24045719638382101);
    msg.setSource(31744U);
    msg.setSourceEntity(89U);
    msg.setDestination(26384U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.012716151810762355);
    msg.setSource(45911U);
    msg.setSourceEntity(175U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.5124620766963492);
    msg.setSource(48943U);
    msg.setSourceEntity(112U);
    msg.setDestination(6395U);
    msg.setDestinationEntity(166U);
    msg.list.assign("IXSEHXVNOIACVMWKOITPSMGARYZBZFLUZSMOCAFVHNQOCXPHGKFJGNWXUDMWFTPCZEAXHOSOQDFULBNHSQAPQCLQFJLSFTSURYRSRZGDVPOKXZBZIVQEXWTUVXNSBYEUYETEVDCZEEYWKLMMXHQIKIJJVHLZUBKJDVRBJEQGYBUANARCPXWLKTKMMCGGHDSQRWNYFNODHLTJRTGDABAEUMKGYBMVPYAQRICNDJJPOJFTI");

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
    msg.setTimeStamp(0.80018452982919);
    msg.setSource(64228U);
    msg.setSourceEntity(110U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(230U);
    msg.list.assign("XDMWBCDHFSQKALZXHRYBTSNIBRZYUNZPIQSJNDH");

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
    msg.setTimeStamp(0.5818196343129038);
    msg.setSource(11661U);
    msg.setSourceEntity(158U);
    msg.setDestination(49001U);
    msg.setDestinationEntity(102U);
    msg.list.assign("ZCKIDWINAGHPDCBAWSEERGVTKNLQGVEJIXWOPZMBHGYSGJLRSYUHJBWTZJQUBOPDWAVDVTAYGUHQWOIYKORHCIURNUQSJZLTQGXZFUFDLXMPNJFGKMXYUMOVQCDTRVEIBKRPAPLWVRJPJCYMXPFAFFRTONMVCCBZMEZTNDHEAKXHQDMEYNBHOAFZEPXCOYWTFOGWYNNSKYIIVBLKCSRQAOGKQZZPMMLXXDKDHRBBSUSIHJLXWLSJ");

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
    msg.setTimeStamp(0.34919316971994563);
    msg.setSource(20068U);
    msg.setSourceEntity(54U);
    msg.setDestination(7082U);
    msg.setDestinationEntity(72U);
    msg.peer.assign("YFTCEXBLWJNKCKREYYGQXSXUUGHUGOLCXIRHLOVPEFOZLWIYICHBDTDZQWUSAOWTYPMNJLPRSWGUDRVCNNRIILIDVJRSTLPHVYEAVQMHZTBVAMMQVRCEPEAUXYDAHV");
    msg.rssi = 0.5968774639178674;
    msg.integrity = 11124U;

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
    msg.setTimeStamp(0.7742655425847911);
    msg.setSource(48245U);
    msg.setSourceEntity(247U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(16U);
    msg.peer.assign("BECDYYXTBUDUCUFHETCTIROPMBVWVRSRXWLAAYOTAPEIQNYJDGPVZXNEFF");
    msg.rssi = 0.907771770923814;
    msg.integrity = 63453U;

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
    msg.setTimeStamp(0.13783420395696921);
    msg.setSource(9933U);
    msg.setSourceEntity(115U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(46U);
    msg.peer.assign("BADWQMNHEZXNYUTINRGUYOGULHFOVRVURTYHEEBIICZHJQGCVFUVRSHAGXUBOJLYRFTKTDERIICXFCXHYKZKFSVLPNQIYEQWRPSYCLHLGTPURSIBCTWFGJLFCLFJNDUGGQBMMMLJJZYAJWWUKTGXSNQELOYWPBSWH");
    msg.rssi = 0.7916255666844142;
    msg.integrity = 23800U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.8865092678913842);
    msg.setSource(37782U);
    msg.setSourceEntity(71U);
    msg.setDestination(43298U);
    msg.setDestinationEntity(16U);
    msg.value = -22859;

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
    msg.setTimeStamp(0.9334682647047967);
    msg.setSource(8820U);
    msg.setSourceEntity(176U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(253U);
    msg.value = 29594;

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
    msg.setTimeStamp(0.56319485812786);
    msg.setSource(18107U);
    msg.setSourceEntity(24U);
    msg.setDestination(19031U);
    msg.setDestinationEntity(108U);
    msg.value = 14911;

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
    msg.setTimeStamp(0.6437757300528824);
    msg.setSource(6669U);
    msg.setSourceEntity(142U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(212U);
    msg.value = 0.674350486918649;

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
    msg.setTimeStamp(0.9951622099444043);
    msg.setSource(4571U);
    msg.setSourceEntity(78U);
    msg.setDestination(63239U);
    msg.setDestinationEntity(50U);
    msg.value = 0.4299694087428221;

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
    msg.setTimeStamp(0.9952777693019077);
    msg.setSource(27019U);
    msg.setSourceEntity(250U);
    msg.setDestination(4744U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5778477296300268;

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
    msg.setTimeStamp(0.11980619785124957);
    msg.setSource(30362U);
    msg.setSourceEntity(75U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(21U);
    msg.value = 0.13271402030435975;

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
    msg.setTimeStamp(0.5384500072229259);
    msg.setSource(15357U);
    msg.setSourceEntity(94U);
    msg.setDestination(52474U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9946779271026054;

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
    msg.setTimeStamp(0.5630113042434914);
    msg.setSource(33781U);
    msg.setSourceEntity(43U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8113181791591627;

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
    msg.setTimeStamp(0.2338157989641534);
    msg.setSource(56856U);
    msg.setSourceEntity(25U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(146U);
    msg.validity = 64505U;
    msg.type = 204U;
    msg.utc_year = 8055U;
    msg.utc_month = 147U;
    msg.utc_day = 15U;
    msg.utc_time = 0.9650351316786294;
    msg.lat = 0.022048054915517534;
    msg.lon = 0.08133582885995638;
    msg.height = 0.812680805720592;
    msg.satellites = 91U;
    msg.cog = 0.586607132242614;
    msg.sog = 0.3003749987807822;
    msg.hdop = 0.5370143225121128;
    msg.vdop = 0.32961965869969956;
    msg.hacc = 0.7087804746754879;
    msg.vacc = 0.9975476692595717;

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
    msg.setTimeStamp(0.25858009375276514);
    msg.setSource(22829U);
    msg.setSourceEntity(80U);
    msg.setDestination(9311U);
    msg.setDestinationEntity(33U);
    msg.validity = 6998U;
    msg.type = 189U;
    msg.utc_year = 61618U;
    msg.utc_month = 40U;
    msg.utc_day = 122U;
    msg.utc_time = 0.7729491935306263;
    msg.lat = 0.22954648504702424;
    msg.lon = 0.4363786195921274;
    msg.height = 0.3498503312560206;
    msg.satellites = 176U;
    msg.cog = 0.2414232400424703;
    msg.sog = 0.9704344685437296;
    msg.hdop = 0.8682025624643022;
    msg.vdop = 0.3463989905307987;
    msg.hacc = 0.9044105106674764;
    msg.vacc = 0.38467706027410353;

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
    msg.setTimeStamp(0.5837915906850297);
    msg.setSource(55729U);
    msg.setSourceEntity(123U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(239U);
    msg.validity = 41628U;
    msg.type = 97U;
    msg.utc_year = 21938U;
    msg.utc_month = 127U;
    msg.utc_day = 217U;
    msg.utc_time = 0.9330806029490677;
    msg.lat = 0.918685518173201;
    msg.lon = 0.9133019459285299;
    msg.height = 0.4290129279419468;
    msg.satellites = 3U;
    msg.cog = 0.6354757990759193;
    msg.sog = 0.18022620641131404;
    msg.hdop = 0.8148897943031808;
    msg.vdop = 0.7991120190627451;
    msg.hacc = 0.22459364378993063;
    msg.vacc = 0.8003313206204091;

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
    msg.setTimeStamp(0.8243908551773693);
    msg.setSource(38984U);
    msg.setSourceEntity(42U);
    msg.setDestination(29837U);
    msg.setDestinationEntity(94U);
    msg.time = 0.12701793947666196;
    msg.phi = 0.9335604428488475;
    msg.theta = 0.8046252912803348;
    msg.psi = 0.4830707851070025;
    msg.psi_magnetic = 0.37884600527762635;

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
    msg.setTimeStamp(0.9764000078342066);
    msg.setSource(31695U);
    msg.setSourceEntity(114U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(153U);
    msg.time = 0.6154236038829454;
    msg.phi = 0.2812748780211518;
    msg.theta = 0.04264715668515018;
    msg.psi = 0.24788768698256525;
    msg.psi_magnetic = 0.445816686521434;

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
    msg.setTimeStamp(0.5562820095824553);
    msg.setSource(52177U);
    msg.setSourceEntity(136U);
    msg.setDestination(42943U);
    msg.setDestinationEntity(55U);
    msg.time = 0.6723640190856699;
    msg.phi = 0.36454246422399994;
    msg.theta = 0.3399018052277274;
    msg.psi = 0.09588545034258988;
    msg.psi_magnetic = 0.4312139922161139;

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
    msg.setTimeStamp(0.9147413069890752);
    msg.setSource(44775U);
    msg.setSourceEntity(84U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(52U);
    msg.time = 0.25690871448553587;
    msg.x = 0.3165395518031471;
    msg.y = 0.6486451230771672;
    msg.z = 0.9568744712355718;
    msg.timestep = 0.17955443642952795;

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
    msg.setTimeStamp(0.2547644746530422);
    msg.setSource(48450U);
    msg.setSourceEntity(110U);
    msg.setDestination(48544U);
    msg.setDestinationEntity(21U);
    msg.time = 0.5746890883156889;
    msg.x = 0.5273198075568006;
    msg.y = 0.8878145372351246;
    msg.z = 0.6573164305267023;
    msg.timestep = 0.3528905652684571;

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
    msg.setTimeStamp(0.5819230711475786);
    msg.setSource(10276U);
    msg.setSourceEntity(63U);
    msg.setDestination(38513U);
    msg.setDestinationEntity(214U);
    msg.time = 0.3197603941202256;
    msg.x = 0.9309923252941782;
    msg.y = 0.7368285637464984;
    msg.z = 0.4550290474948946;
    msg.timestep = 0.8994345375332436;

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
    msg.setTimeStamp(0.9007638780707452);
    msg.setSource(41632U);
    msg.setSourceEntity(184U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(104U);
    msg.time = 0.5575899940707566;
    msg.x = 0.10948857698658532;
    msg.y = 0.3348925466903808;
    msg.z = 0.6002534442959077;

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
    msg.setTimeStamp(0.35082037733863036);
    msg.setSource(42680U);
    msg.setSourceEntity(173U);
    msg.setDestination(12278U);
    msg.setDestinationEntity(250U);
    msg.time = 0.5640469352931061;
    msg.x = 0.10785442658296185;
    msg.y = 0.812363076118547;
    msg.z = 0.7588279243881838;

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
    msg.setTimeStamp(0.5015103952264935);
    msg.setSource(32989U);
    msg.setSourceEntity(143U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(100U);
    msg.time = 0.478432799405219;
    msg.x = 0.7742234001064257;
    msg.y = 0.21295185902438318;
    msg.z = 0.40294182706058246;

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
    msg.setTimeStamp(0.7810568440943292);
    msg.setSource(58648U);
    msg.setSourceEntity(122U);
    msg.setDestination(23847U);
    msg.setDestinationEntity(223U);
    msg.time = 0.799492562898612;
    msg.x = 0.8503058334092796;
    msg.y = 0.8581327522166174;
    msg.z = 0.03423613567496486;

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
    msg.setTimeStamp(0.9716458305841219);
    msg.setSource(62550U);
    msg.setSourceEntity(38U);
    msg.setDestination(32785U);
    msg.setDestinationEntity(235U);
    msg.time = 0.10689081626661656;
    msg.x = 0.23395455089673;
    msg.y = 0.35547761434266334;
    msg.z = 0.031292856343024256;

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
    msg.setTimeStamp(0.313667689026481);
    msg.setSource(44919U);
    msg.setSourceEntity(135U);
    msg.setDestination(63081U);
    msg.setDestinationEntity(18U);
    msg.time = 0.9845738463106546;
    msg.x = 0.19821863277451368;
    msg.y = 0.9482261723934968;
    msg.z = 0.174655613885064;

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
    msg.setTimeStamp(0.41417113123002347);
    msg.setSource(7166U);
    msg.setSourceEntity(97U);
    msg.setDestination(57433U);
    msg.setDestinationEntity(28U);
    msg.time = 0.9762837083391452;
    msg.x = 0.9496106972530894;
    msg.y = 0.45674927171540325;
    msg.z = 0.5741129345805814;

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
    msg.setTimeStamp(0.6523085645112872);
    msg.setSource(35723U);
    msg.setSourceEntity(176U);
    msg.setDestination(1322U);
    msg.setDestinationEntity(254U);
    msg.time = 0.2814091744403706;
    msg.x = 0.8927488377832364;
    msg.y = 0.9872104104209941;
    msg.z = 0.1113481569525615;

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
    msg.setTimeStamp(0.3688569547199585);
    msg.setSource(65039U);
    msg.setSourceEntity(5U);
    msg.setDestination(19057U);
    msg.setDestinationEntity(227U);
    msg.time = 0.6610995046755266;
    msg.x = 0.7274388789088649;
    msg.y = 0.42858075139596963;
    msg.z = 0.7206923794389508;

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
    msg.setTimeStamp(0.10250657754634929);
    msg.setSource(15306U);
    msg.setSourceEntity(234U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(68U);
    msg.validity = 57U;
    msg.x = 0.04008398012343095;
    msg.y = 0.3132532639744575;
    msg.z = 0.8689151056448355;

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
    msg.setTimeStamp(0.30073808865428064);
    msg.setSource(25234U);
    msg.setSourceEntity(147U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(100U);
    msg.validity = 196U;
    msg.x = 0.1789542946706275;
    msg.y = 0.8921299924144616;
    msg.z = 0.6304598529682871;

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
    msg.setTimeStamp(0.8369013214469277);
    msg.setSource(60228U);
    msg.setSourceEntity(71U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(25U);
    msg.validity = 199U;
    msg.x = 0.4132389303384407;
    msg.y = 0.7100153220993591;
    msg.z = 0.5089485964797533;

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
    msg.setTimeStamp(0.17599070437810338);
    msg.setSource(42667U);
    msg.setSourceEntity(198U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(101U);
    msg.validity = 223U;
    msg.x = 0.9701483841226446;
    msg.y = 0.11288097714069112;
    msg.z = 0.12391536146407145;

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
    msg.setTimeStamp(0.4657098495633182);
    msg.setSource(3084U);
    msg.setSourceEntity(197U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(160U);
    msg.validity = 207U;
    msg.x = 0.12322726309827536;
    msg.y = 0.49644023264171255;
    msg.z = 0.7740208508175542;

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
    msg.setTimeStamp(0.6704974796794525);
    msg.setSource(39401U);
    msg.setSourceEntity(57U);
    msg.setDestination(40847U);
    msg.setDestinationEntity(130U);
    msg.validity = 139U;
    msg.x = 0.8095714952209712;
    msg.y = 0.7997530590784719;
    msg.z = 0.9870069248640713;

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
    msg.setTimeStamp(0.2448437641104786);
    msg.setSource(11222U);
    msg.setSourceEntity(100U);
    msg.setDestination(36539U);
    msg.setDestinationEntity(223U);
    msg.time = 0.6339963106669797;
    msg.x = 0.09602535281581481;
    msg.y = 0.7832362678977025;
    msg.z = 0.25310073056874227;

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
    msg.setTimeStamp(0.7595151188075482);
    msg.setSource(42920U);
    msg.setSourceEntity(66U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(144U);
    msg.time = 0.7762316818937022;
    msg.x = 0.7302618806513367;
    msg.y = 0.012405672609226093;
    msg.z = 0.06303615330461887;

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
    msg.setTimeStamp(0.7025444161921297);
    msg.setSource(7504U);
    msg.setSourceEntity(186U);
    msg.setDestination(44812U);
    msg.setDestinationEntity(227U);
    msg.time = 0.553028237079915;
    msg.x = 0.6018147998001234;
    msg.y = 0.14465815610513932;
    msg.z = 0.055781642718393365;

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
    msg.setTimeStamp(0.43115455080533927);
    msg.setSource(23830U);
    msg.setSourceEntity(68U);
    msg.setDestination(54683U);
    msg.setDestinationEntity(82U);
    msg.validity = 149U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8193171580430512;
    tmp_msg_0.y = 0.8485035189571356;
    tmp_msg_0.z = 0.7680950712885368;
    tmp_msg_0.phi = 0.24650576574055438;
    tmp_msg_0.theta = 0.5961447078993877;
    tmp_msg_0.psi = 0.7587633965388516;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5807751957470373;

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
    msg.setTimeStamp(0.7333171329469568);
    msg.setSource(59485U);
    msg.setSourceEntity(218U);
    msg.setDestination(10248U);
    msg.setDestinationEntity(50U);
    msg.validity = 138U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7112775916006219;
    tmp_msg_0.y = 0.9792457872476955;
    tmp_msg_0.z = 0.6907871918997613;
    tmp_msg_0.phi = 0.5737116839225231;
    tmp_msg_0.theta = 0.8819401967900151;
    tmp_msg_0.psi = 0.4533253044612745;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8203273244009113;
    tmp_msg_1.beam_height = 0.16729429901635473;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7725087827276892;

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
    msg.setTimeStamp(0.2535085882389526);
    msg.setSource(33760U);
    msg.setSourceEntity(17U);
    msg.setDestination(33997U);
    msg.setDestinationEntity(55U);
    msg.validity = 142U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.39762459094756775;
    tmp_msg_0.y = 0.8970911378693075;
    tmp_msg_0.z = 0.48676600029203454;
    tmp_msg_0.phi = 0.23963338439967785;
    tmp_msg_0.theta = 0.7789393592339884;
    tmp_msg_0.psi = 0.0605967619993415;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5012829902103236;
    tmp_msg_1.beam_height = 0.09358325631161235;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3544821255007984;

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
    msg.setTimeStamp(0.309797560491334);
    msg.setSource(25872U);
    msg.setSourceEntity(201U);
    msg.setDestination(42482U);
    msg.setDestinationEntity(28U);
    msg.value = 0.4806327928289482;

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
    msg.setTimeStamp(0.039980466360071576);
    msg.setSource(30080U);
    msg.setSourceEntity(70U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5813675395637432;

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
    msg.setTimeStamp(0.020329213008236202);
    msg.setSource(51266U);
    msg.setSourceEntity(133U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(61U);
    msg.value = 0.6698149300781968;

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
    msg.setTimeStamp(0.2355874099050932);
    msg.setSource(48038U);
    msg.setSourceEntity(173U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(240U);
    msg.value = 0.33401704666930476;

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
    msg.setTimeStamp(0.9998456299448781);
    msg.setSource(48657U);
    msg.setSourceEntity(36U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6919898207344043;

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
    msg.setTimeStamp(0.8647476095049829);
    msg.setSource(20915U);
    msg.setSourceEntity(168U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(77U);
    msg.value = 0.36492575741256217;

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
    msg.setTimeStamp(0.9037373133596446);
    msg.setSource(54180U);
    msg.setSourceEntity(82U);
    msg.setDestination(16524U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6354488265384988;

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
    msg.setTimeStamp(0.3684942829568675);
    msg.setSource(54555U);
    msg.setSourceEntity(80U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4582923704665638;

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
    msg.setTimeStamp(0.15836877626292667);
    msg.setSource(30469U);
    msg.setSourceEntity(120U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9074344880785731;

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
    msg.setTimeStamp(0.5558704047866725);
    msg.setSource(26997U);
    msg.setSourceEntity(31U);
    msg.setDestination(51462U);
    msg.setDestinationEntity(253U);
    msg.value = 0.06120906553475425;

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
    msg.setTimeStamp(0.5227636063211683);
    msg.setSource(54065U);
    msg.setSourceEntity(54U);
    msg.setDestination(34902U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7966917286354389;

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
    msg.setTimeStamp(0.25789060895984195);
    msg.setSource(54568U);
    msg.setSourceEntity(187U);
    msg.setDestination(27976U);
    msg.setDestinationEntity(191U);
    msg.value = 0.8589183410775878;

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
    msg.setTimeStamp(0.7528403838254754);
    msg.setSource(8463U);
    msg.setSourceEntity(225U);
    msg.setDestination(57269U);
    msg.setDestinationEntity(179U);
    msg.value = 0.18804573104364908;

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
    msg.setTimeStamp(0.41347218779683503);
    msg.setSource(6683U);
    msg.setSourceEntity(107U);
    msg.setDestination(56208U);
    msg.setDestinationEntity(27U);
    msg.value = 0.10739116194796472;

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
    msg.setTimeStamp(0.36429436093039924);
    msg.setSource(54337U);
    msg.setSourceEntity(236U);
    msg.setDestination(64433U);
    msg.setDestinationEntity(172U);
    msg.value = 0.6387918439152949;

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
    msg.setTimeStamp(0.8895399084127007);
    msg.setSource(43947U);
    msg.setSourceEntity(180U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7343544923228444;

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
    msg.setTimeStamp(0.7054146274830587);
    msg.setSource(11449U);
    msg.setSourceEntity(202U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(195U);
    msg.value = 0.018095348049968152;

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
    msg.setTimeStamp(0.0008684075149186787);
    msg.setSource(44454U);
    msg.setSourceEntity(54U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7269378581820893;

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
    msg.setTimeStamp(0.8447531547147972);
    msg.setSource(63638U);
    msg.setSourceEntity(57U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(163U);
    msg.value = 0.3263605461229949;

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
    msg.setTimeStamp(0.18607481555934458);
    msg.setSource(14315U);
    msg.setSourceEntity(114U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8602872423525156;

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
    msg.setTimeStamp(0.014280453458190734);
    msg.setSource(20408U);
    msg.setSourceEntity(198U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(253U);
    msg.value = 0.49921446139538517;

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
    msg.setTimeStamp(0.4355726000971054);
    msg.setSource(17043U);
    msg.setSourceEntity(129U);
    msg.setDestination(47340U);
    msg.setDestinationEntity(175U);
    msg.value = 0.15363562266864916;

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
    msg.setTimeStamp(0.8636679376870366);
    msg.setSource(3082U);
    msg.setSourceEntity(172U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(20U);
    msg.value = 0.3971736994089544;

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
    msg.setTimeStamp(0.2135098062089672);
    msg.setSource(34108U);
    msg.setSourceEntity(0U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(117U);
    msg.value = 0.05285408057532692;

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
    msg.setTimeStamp(0.17186044759875307);
    msg.setSource(11430U);
    msg.setSourceEntity(220U);
    msg.setDestination(52369U);
    msg.setDestinationEntity(239U);
    msg.direction = 0.2336611149913006;
    msg.speed = 0.26118262402798353;
    msg.turbulence = 0.5036715160527137;

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
    msg.setTimeStamp(0.9298912885177689);
    msg.setSource(16029U);
    msg.setSourceEntity(51U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(79U);
    msg.direction = 0.6858887781630967;
    msg.speed = 0.7681956529251667;
    msg.turbulence = 0.0352872920430618;

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
    msg.setTimeStamp(0.16081101724116387);
    msg.setSource(1400U);
    msg.setSourceEntity(216U);
    msg.setDestination(5168U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.7859014723736134;
    msg.speed = 0.8007597657831483;
    msg.turbulence = 0.36632005756806807;

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
    msg.setTimeStamp(0.700197772270684);
    msg.setSource(30021U);
    msg.setSourceEntity(233U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(24U);
    msg.value = 0.028561337373710804;

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
    msg.setTimeStamp(0.4360710255582564);
    msg.setSource(16401U);
    msg.setSourceEntity(43U);
    msg.setDestination(57027U);
    msg.setDestinationEntity(35U);
    msg.value = 0.041256521771844135;

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
    msg.setTimeStamp(0.8839487901723417);
    msg.setSource(38592U);
    msg.setSourceEntity(136U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(163U);
    msg.value = 0.702841190880169;

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
    msg.setTimeStamp(0.0436499850823685);
    msg.setSource(50714U);
    msg.setSourceEntity(135U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(69U);
    msg.value.assign("GPCOYUGUNWERUGUCQUAVZIGNDHQTDUZNNMETVQSWIORBDRKTCAGJTQKBLWZNCZHKZVPFSKOOLFJTMBJXKFFUMADAQNRKJLVDMYANCSBODKGYEWDSRTHLLNIIWMJCXFIDGBTMNXXHBFGROEGPCHABHTKYVMDTFZXXWWQBPEYJRSLMKUPAQMHOPQCVF");

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
    msg.setTimeStamp(0.19858574597951328);
    msg.setSource(62456U);
    msg.setSourceEntity(116U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(212U);
    msg.value.assign("GQSNWUSZNVOYQHREBWPUKTZGHOETNPDELVQVJDXRQBJIZMBTIDBGKEZCLSXDERQDIGKLJUGMPOUWMBDBVQXFTAPNAMCUEUTCOPUNTPCMVZTT");

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
    msg.setTimeStamp(0.8281984815420825);
    msg.setSource(28057U);
    msg.setSourceEntity(80U);
    msg.setDestination(10929U);
    msg.setDestinationEntity(11U);
    msg.value.assign("NCXWXDVZHMPNFYISLBZKOGVLBSOALCMLPXKYUQWQMFUEGAFY");

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
    msg.setTimeStamp(0.3246950420963892);
    msg.setSource(56796U);
    msg.setSourceEntity(213U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(223U);
    const char tmp_msg_0[] = {78, 0, 1, -93, 56, 109, 103, -67, -13, -77, 42, -57, -102, 8, 34, -26, -16, -16, 26, 44, -30, 43, 7, 99, 76, -94, -58, -115, 66, 84, 118, 53, -109, 111, -11, -20, -85, -26, 32, -120, 63, 90, 102, 1, -45, 68, 125, 48, 84, 60, -5, -82, 12, 15, -7, -69, 32, -115, -34, -27, -48, 11, -17, -43, -90, 112, 117, 49, -121, -128, 29, -83, -54, -109, -4, 39, 125, 30, 100, -93, -14, 115, -120, 113, -12, -77, -92, -43, -46, -20, 81, -27, -57, 69, 39, -31, 21, -11, 22, -78, 76, 62, 54, -38, 28, 27, 23, 51, -114, -94, 103, -107, 66, 118, 87, -61, 7, 12, -116, -118, -31, 11, 57, -40, -24, 87, 7, 79, 8, 75, -24, -88, 16, 8, -115, 51, 0, 29, -41, -35, 65, 43, -16, -114, 30, -40, 5, -114, -126, 55, -109, -119, -79, -49, -85, -103, -38, -115, -86, 80, -100, -92, -1, -20, 14, 83, 34, -61, -80, -1, -36, -31, 120, 80, -62, -5, -81, 70, 52, -78, -116, 24, 2, -30};
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
    msg.setTimeStamp(0.8338338565213707);
    msg.setSource(10703U);
    msg.setSourceEntity(88U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {53, 101, 34, -9, -84, 116, -56, -6, -100, -28, -88, 85, 50, -127, -73, -74, -123, 2, -101, -74, 4, -33, 82, -48, -42, -42, 18, -93, -114, 13, 75, -29, -1, 71, 74, 52, -28, -22, 21, 18, -122, 76, -122, -13, 2, 22, -38, 112, -42, -86, 102, -97, -89, -103, -56, -85, 107, -120, 12, 57, 1, 111, -56, 115, 8, 109, -96, -75, 34, -5, 105, -49, 105, 35, -56, -84, -40, -4, 4, -45, 2, -75, -123, 83, -49, 58, 58, 66, -68, -128, 88, 2, 107, 14, 91, -18, -57, 79, 35};
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
    msg.setTimeStamp(0.5747103229406088);
    msg.setSource(51119U);
    msg.setSourceEntity(94U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(107U);
    const char tmp_msg_0[] = {-10, 93, -123, -127, 112, 13, -1, -60, -64, 69, -41, 16, -33, 109, -41, 28, -45};
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
    msg.setTimeStamp(0.900221069360872);
    msg.setSource(58944U);
    msg.setSourceEntity(27U);
    msg.setDestination(63325U);
    msg.setDestinationEntity(3U);
    msg.type = 41U;
    msg.frequency = 2227977709U;
    msg.min_range = 17853U;
    msg.max_range = 32507U;
    msg.bits_per_point = 48U;
    msg.scale_factor = 0.11681670760207452;
    const char tmp_msg_0[] = {85, 83, 125, 121, -95, 124, 67, -19, -47, -5, 118, -14, -109, 90, 120, -2, -27, 1, -13, -87, 125, 102, -116, 88, 111, -66, 29, 41, -58, -93, 101, -103, 35, 89, 101, 120, -45, 88, 19, 56, 2, 39, 1, -8, -104, -99, 126, 31, -31, -65, -67};
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
    msg.setTimeStamp(0.26880267084415466);
    msg.setSource(11611U);
    msg.setSourceEntity(114U);
    msg.setDestination(20414U);
    msg.setDestinationEntity(165U);
    msg.type = 206U;
    msg.frequency = 457628514U;
    msg.min_range = 6997U;
    msg.max_range = 41569U;
    msg.bits_per_point = 182U;
    msg.scale_factor = 0.7521532549505847;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.10147289397497294;
    tmp_msg_0.beam_height = 0.6519358347521589;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-13, -102, 84, 86, 123, -114, -86, 39, -21, 106, -67, 38, -6, 13, 105, -122, -83, 34, -107, -94, 53, -35, -41, -45, -124, -31, 13, 86, 59, 119, 107, 38, 48, -55, 58, 97, -29, 21, 36, 75, 118, -74, 120, 0, 19, 115, 81, 75, -77, 81, 94, 5, -26, -12, 34, 83, 72, 35, 90, -61, -91};
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
    msg.setTimeStamp(0.5013164040215815);
    msg.setSource(43996U);
    msg.setSourceEntity(254U);
    msg.setDestination(40693U);
    msg.setDestinationEntity(125U);
    msg.type = 77U;
    msg.frequency = 1010535282U;
    msg.min_range = 27980U;
    msg.max_range = 35458U;
    msg.bits_per_point = 228U;
    msg.scale_factor = 0.38588493700848203;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5850636395740969;
    tmp_msg_0.beam_height = 0.7212227166536845;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {98, 40, -67, -18, 38, 17, -111, -15, -14, 91, 91, -115, -47, 123, -45, 55, -58, 25, -29, 122, -62, -46, -35, -89, 118, 51, -92, -63, 2, -28, -62, 13, -34, 16, 100, 30, 45, -19, 22, 102};
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
    msg.setTimeStamp(0.3278861330608137);
    msg.setSource(13558U);
    msg.setSourceEntity(247U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.9222252324112841);
    msg.setSource(58859U);
    msg.setSourceEntity(29U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.7231929343156134);
    msg.setSource(61640U);
    msg.setSourceEntity(132U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.9199521925123604);
    msg.setSource(50435U);
    msg.setSourceEntity(212U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(112U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.5339763400223948);
    msg.setSource(65074U);
    msg.setSourceEntity(198U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(236U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.827410468753274);
    msg.setSource(47607U);
    msg.setSourceEntity(143U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(162U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.8462592840336269);
    msg.setSource(65251U);
    msg.setSourceEntity(163U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6972433862802535;
    msg.confidence = 0.8463387815029142;
    msg.opmodes.assign("DPHPWVXCKEYLPXJXQYNRFDSQUHWJRSGXGHBQVDRTZRCWOBECIHQQURJHTQHEZNEJQBTOUNUDCEYREZPIGSAJPNLKJIFKMOTVSZVTVKKHPWZAPIEWGSSOLXBCKAYMVBOADZAMHJWYAZCGCLVISMQRDRXLFWDAEGIFMGUTFVIHIUBPKRSJZYNXEMFCNALKIQOAKUUBMLXNHTXELSBKCYBDPBY");

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
    msg.setTimeStamp(0.512457398187556);
    msg.setSource(15059U);
    msg.setSourceEntity(179U);
    msg.setDestination(27973U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8152425178578465;
    msg.confidence = 0.240548502571318;
    msg.opmodes.assign("KTRDCWBNTFYZQBAOEGIITTUMDMGHTYCHIVULVUCIWZDOXDD");

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
    msg.setTimeStamp(0.9485256747874395);
    msg.setSource(59803U);
    msg.setSourceEntity(20U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(210U);
    msg.value = 0.8736705757919778;
    msg.confidence = 0.20522675075362895;
    msg.opmodes.assign("HASTEVBXZCJTNXJXPXYBYGEZIJCKSAZFSMDKUQGDAVUAAVGFBUCRUBUNKLIPJEDKZSPOYFHZLHGTOLNNKZHQWFEXIFVXZVXCRWVEHZYIBTNCMLQIGMREJXMFZDJYITLSTZQOGNNKMKBQVOIWBDSVLDSFOGSUAFAWDLHQYVPCPTOJQKMIDIURCYYMJQMSORNGWREPPMEHHYLWOBPITUWYOGUCQPXWJUKXRAHHQOSMDWBNWALRCJRA");

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
    msg.setTimeStamp(0.2099306365121033);
    msg.setSource(28737U);
    msg.setSourceEntity(156U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(100U);
    msg.itow = 792651057U;
    msg.lat = 0.880960462823132;
    msg.lon = 0.7880555732467289;
    msg.height_ell = 0.7261432370144159;
    msg.height_sea = 0.5021262980656502;
    msg.hacc = 0.28706127617297017;
    msg.vacc = 0.9777840243945112;
    msg.vel_n = 0.8698939820857173;
    msg.vel_e = 0.5454187361505106;
    msg.vel_d = 0.3792160749569782;
    msg.speed = 0.3149640131774961;
    msg.gspeed = 0.742622317921392;
    msg.heading = 0.21867672238931257;
    msg.sacc = 0.8925223153212938;
    msg.cacc = 0.18765796994331063;

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
    msg.setTimeStamp(0.43269605635758546);
    msg.setSource(63129U);
    msg.setSourceEntity(216U);
    msg.setDestination(21348U);
    msg.setDestinationEntity(176U);
    msg.itow = 2979995081U;
    msg.lat = 0.3830217590011199;
    msg.lon = 0.12884213736698136;
    msg.height_ell = 0.8239002058132437;
    msg.height_sea = 0.1653353011764913;
    msg.hacc = 0.30333141334022073;
    msg.vacc = 0.9490963161129788;
    msg.vel_n = 0.12015072172021535;
    msg.vel_e = 0.2590868083292376;
    msg.vel_d = 0.4512497867145763;
    msg.speed = 0.3535849141864771;
    msg.gspeed = 0.18000355643412524;
    msg.heading = 0.2424964901351413;
    msg.sacc = 0.48489056008077414;
    msg.cacc = 0.9262470416358806;

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
    msg.setTimeStamp(0.28163921572439765);
    msg.setSource(36324U);
    msg.setSourceEntity(182U);
    msg.setDestination(59981U);
    msg.setDestinationEntity(90U);
    msg.itow = 1855285570U;
    msg.lat = 0.4823329515378828;
    msg.lon = 0.20489477873123307;
    msg.height_ell = 0.8642626299591034;
    msg.height_sea = 0.1568698251279499;
    msg.hacc = 0.4321435876610634;
    msg.vacc = 0.9590094905788606;
    msg.vel_n = 0.40006962343658503;
    msg.vel_e = 0.40262808517404647;
    msg.vel_d = 0.23595932766170646;
    msg.speed = 0.30055332000224677;
    msg.gspeed = 0.3503991568096959;
    msg.heading = 0.38924226160277076;
    msg.sacc = 0.3848164773074947;
    msg.cacc = 0.08612656422054388;

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
    msg.setTimeStamp(0.8282960165837122);
    msg.setSource(30622U);
    msg.setSourceEntity(68U);
    msg.setDestination(35630U);
    msg.setDestinationEntity(103U);
    msg.id = 100U;
    msg.value = 0.833150161488508;

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
    msg.setTimeStamp(0.8701724846978511);
    msg.setSource(58880U);
    msg.setSourceEntity(182U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(63U);
    msg.id = 166U;
    msg.value = 0.7731702969470975;

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
    msg.setTimeStamp(0.7167495128205621);
    msg.setSource(55976U);
    msg.setSourceEntity(159U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(204U);
    msg.id = 243U;
    msg.value = 0.20708114997665528;

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
    msg.setTimeStamp(0.25324513086556466);
    msg.setSource(41590U);
    msg.setSourceEntity(23U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(94U);
    msg.x = 0.05146247782044022;
    msg.y = 0.9004653515765965;
    msg.z = 0.171638184038454;
    msg.phi = 0.7050881293571721;
    msg.theta = 0.7154371425509377;
    msg.psi = 0.920716449110647;

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
    msg.setTimeStamp(0.3923538017331204);
    msg.setSource(15938U);
    msg.setSourceEntity(171U);
    msg.setDestination(41475U);
    msg.setDestinationEntity(96U);
    msg.x = 0.1317730157703576;
    msg.y = 0.8363107719896182;
    msg.z = 0.990528980132055;
    msg.phi = 0.29374180679733963;
    msg.theta = 0.14385223111097023;
    msg.psi = 0.24508315666271874;

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
    msg.setTimeStamp(0.6512956597580026);
    msg.setSource(6458U);
    msg.setSourceEntity(70U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(215U);
    msg.x = 0.18786081818375788;
    msg.y = 0.4653106060873968;
    msg.z = 0.4073325538301684;
    msg.phi = 0.987696128012288;
    msg.theta = 0.12773774314017383;
    msg.psi = 0.4951116750456882;

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
    msg.setTimeStamp(0.36484719176492286);
    msg.setSource(18871U);
    msg.setSourceEntity(13U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(242U);
    msg.beam_width = 0.37403192491868076;
    msg.beam_height = 0.32464711843349214;

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
    msg.setTimeStamp(0.5514724406995635);
    msg.setSource(30615U);
    msg.setSourceEntity(23U);
    msg.setDestination(23310U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.42171581271195624;
    msg.beam_height = 0.3572810680975077;

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
    msg.setTimeStamp(0.6525840980716642);
    msg.setSource(23499U);
    msg.setSourceEntity(76U);
    msg.setDestination(36665U);
    msg.setDestinationEntity(27U);
    msg.beam_width = 0.26065791630516333;
    msg.beam_height = 0.2275918961975798;

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
    msg.setTimeStamp(0.9767590902545402);
    msg.setSource(3413U);
    msg.setSourceEntity(131U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(238U);
    msg.sane = 79U;

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
    msg.setTimeStamp(0.8147791844123783);
    msg.setSource(29897U);
    msg.setSourceEntity(124U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(17U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.363326862291938);
    msg.setSource(5676U);
    msg.setSourceEntity(7U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(111U);
    msg.sane = 80U;

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
    msg.setTimeStamp(0.8269165464064838);
    msg.setSource(1999U);
    msg.setSourceEntity(76U);
    msg.setDestination(14736U);
    msg.setDestinationEntity(121U);
    msg.value = 0.32332284538327327;

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
    msg.setTimeStamp(0.7225341410582065);
    msg.setSource(63651U);
    msg.setSourceEntity(213U);
    msg.setDestination(32853U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6608511433790801;

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
    msg.setTimeStamp(0.3036174785627943);
    msg.setSource(35168U);
    msg.setSourceEntity(150U);
    msg.setDestination(42585U);
    msg.setDestinationEntity(85U);
    msg.value = 0.11369713135775683;

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
    msg.setTimeStamp(0.08132393725973897);
    msg.setSource(24070U);
    msg.setSourceEntity(171U);
    msg.setDestination(41619U);
    msg.setDestinationEntity(169U);
    msg.value = 0.47249779360475397;

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
    msg.setTimeStamp(0.5351986016750918);
    msg.setSource(48725U);
    msg.setSourceEntity(207U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(182U);
    msg.value = 0.4514653997165632;

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
    msg.setTimeStamp(0.20268486576579858);
    msg.setSource(43127U);
    msg.setSourceEntity(133U);
    msg.setDestination(13276U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0038767717010109726;

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
    msg.setTimeStamp(0.3408588682974165);
    msg.setSource(15066U);
    msg.setSourceEntity(180U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6078951997943324;

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
    msg.setTimeStamp(0.6215020379916277);
    msg.setSource(9349U);
    msg.setSourceEntity(241U);
    msg.setDestination(32869U);
    msg.setDestinationEntity(133U);
    msg.value = 0.18614015443952758;

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
    msg.setTimeStamp(0.5360394740381473);
    msg.setSource(56634U);
    msg.setSourceEntity(83U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(79U);
    msg.value = 0.44499577108202104;

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
    msg.setTimeStamp(0.7327239421167937);
    msg.setSource(47859U);
    msg.setSourceEntity(224U);
    msg.setDestination(3189U);
    msg.setDestinationEntity(5U);
    msg.value = 0.07412381978573934;

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
    msg.setTimeStamp(0.1452081984946466);
    msg.setSource(57699U);
    msg.setSourceEntity(122U);
    msg.setDestination(58731U);
    msg.setDestinationEntity(10U);
    msg.value = 0.02734511465468925;

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
    msg.setTimeStamp(0.2762980267622098);
    msg.setSource(43752U);
    msg.setSourceEntity(181U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7780488889658144;

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
    msg.setTimeStamp(0.01261573457799925);
    msg.setSource(63061U);
    msg.setSourceEntity(27U);
    msg.setDestination(2393U);
    msg.setDestinationEntity(77U);
    msg.value = 0.2212801033336158;

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
    msg.setTimeStamp(0.996502266218104);
    msg.setSource(36261U);
    msg.setSourceEntity(193U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(75U);
    msg.value = 0.23809412616860037;

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
    msg.setTimeStamp(0.2471315791410691);
    msg.setSource(29473U);
    msg.setSourceEntity(35U);
    msg.setDestination(32060U);
    msg.setDestinationEntity(65U);
    msg.value = 0.05641806908626512;

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
    msg.setTimeStamp(0.928197660931028);
    msg.setSource(58761U);
    msg.setSourceEntity(120U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8454799783188927;

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
    msg.setTimeStamp(0.12356507414679119);
    msg.setSource(14764U);
    msg.setSourceEntity(43U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(159U);
    msg.value = 0.38548764333119123;

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
    msg.setTimeStamp(0.6379227170904049);
    msg.setSource(20801U);
    msg.setSourceEntity(57U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7761716695848959;

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
    msg.setTimeStamp(0.2561676787241034);
    msg.setSource(45863U);
    msg.setSourceEntity(52U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(234U);
    msg.value = 0.710216590007421;

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
    msg.setTimeStamp(0.030896882918872715);
    msg.setSource(24886U);
    msg.setSourceEntity(71U);
    msg.setDestination(49716U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5560094450419576;

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
    msg.setTimeStamp(0.2656019618277522);
    msg.setSource(32291U);
    msg.setSourceEntity(218U);
    msg.setDestination(109U);
    msg.setDestinationEntity(8U);
    msg.value = 0.4279928821917742;

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
    msg.setTimeStamp(0.9658197872277325);
    msg.setSource(38486U);
    msg.setSourceEntity(245U);
    msg.setDestination(2105U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2757643230349017;

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
    msg.setTimeStamp(0.4015820589950191);
    msg.setSource(20614U);
    msg.setSourceEntity(218U);
    msg.setDestination(42449U);
    msg.setDestinationEntity(221U);
    msg.value = 0.02381704598331269;

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
    msg.setTimeStamp(0.9662747056860048);
    msg.setSource(21680U);
    msg.setSourceEntity(12U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(187U);
    msg.value = 0.39827160203608203;

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
    msg.setTimeStamp(0.05576537141604898);
    msg.setSource(1679U);
    msg.setSourceEntity(61U);
    msg.setDestination(24555U);
    msg.setDestinationEntity(83U);
    msg.validity = 64021U;
    msg.type = 4U;
    msg.tow = 2580003159U;
    msg.base_lat = 0.9740837088296855;
    msg.base_lon = 0.4276037178491646;
    msg.base_height = 0.1280367465615042;
    msg.n = 0.6472055648440658;
    msg.e = 0.03389688787644807;
    msg.d = 0.17170218712291818;
    msg.v_n = 0.47179472268484735;
    msg.v_e = 0.47501865908242535;
    msg.v_d = 0.6881705909604856;
    msg.satellites = 216U;
    msg.iar_hyp = 44372U;
    msg.iar_ratio = 0.3484801619857232;

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
    msg.setTimeStamp(0.7835503132048254);
    msg.setSource(337U);
    msg.setSourceEntity(51U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(32U);
    msg.validity = 19460U;
    msg.type = 245U;
    msg.tow = 1143383788U;
    msg.base_lat = 0.8934667751584883;
    msg.base_lon = 0.873778243498994;
    msg.base_height = 0.9108585209342263;
    msg.n = 0.03447288575200447;
    msg.e = 0.306127462283722;
    msg.d = 0.3120182493205639;
    msg.v_n = 0.6274341406409658;
    msg.v_e = 0.7840003875779562;
    msg.v_d = 0.19704402070312388;
    msg.satellites = 112U;
    msg.iar_hyp = 15130U;
    msg.iar_ratio = 0.40649400260092416;

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
    msg.setTimeStamp(0.03738267482778834);
    msg.setSource(28094U);
    msg.setSourceEntity(227U);
    msg.setDestination(50316U);
    msg.setDestinationEntity(77U);
    msg.validity = 32181U;
    msg.type = 162U;
    msg.tow = 519122900U;
    msg.base_lat = 0.7944323238786006;
    msg.base_lon = 0.06388241268209582;
    msg.base_height = 0.5131494441793897;
    msg.n = 0.8892939578266884;
    msg.e = 0.9679340391927266;
    msg.d = 0.31371590338027444;
    msg.v_n = 0.1772447972687622;
    msg.v_e = 0.49027569784731473;
    msg.v_d = 0.5290409289778061;
    msg.satellites = 219U;
    msg.iar_hyp = 35210U;
    msg.iar_ratio = 0.14800433366047994;

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
    msg.setTimeStamp(0.8013434487875398);
    msg.setSource(1948U);
    msg.setSourceEntity(217U);
    msg.setDestination(15764U);
    msg.setDestinationEntity(218U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7900310581671599;
    tmp_msg_0.lon = 0.7604252175959488;
    tmp_msg_0.height = 0.17413528314798876;
    tmp_msg_0.x = 0.8258463846820078;
    tmp_msg_0.y = 0.4353708768873298;
    tmp_msg_0.z = 0.45709771635152163;
    tmp_msg_0.phi = 0.9148997359875725;
    tmp_msg_0.theta = 0.6473221265428512;
    tmp_msg_0.psi = 0.6558319918796186;
    tmp_msg_0.u = 0.338233911036279;
    tmp_msg_0.v = 0.014861110163892466;
    tmp_msg_0.w = 0.6479158340882065;
    tmp_msg_0.vx = 0.2054400707901104;
    tmp_msg_0.vy = 0.04635458686231264;
    tmp_msg_0.vz = 0.0022403939082192847;
    tmp_msg_0.p = 0.045639322383826286;
    tmp_msg_0.q = 0.6058604035163729;
    tmp_msg_0.r = 0.9091970263746973;
    tmp_msg_0.depth = 0.9212467828715207;
    tmp_msg_0.alt = 0.28668661983837407;
    msg.state.set(tmp_msg_0);
    msg.type = 244U;

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
    msg.setTimeStamp(0.046705854226472776);
    msg.setSource(51515U);
    msg.setSourceEntity(38U);
    msg.setDestination(39259U);
    msg.setDestinationEntity(100U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9717198349694542;
    tmp_msg_0.lon = 0.5113751513970618;
    tmp_msg_0.height = 0.4765478335994996;
    tmp_msg_0.x = 0.5008128159927921;
    tmp_msg_0.y = 0.722151610609933;
    tmp_msg_0.z = 0.10189635971307132;
    tmp_msg_0.phi = 0.8044847946374823;
    tmp_msg_0.theta = 0.7863079152434337;
    tmp_msg_0.psi = 0.9092453225723456;
    tmp_msg_0.u = 0.4573631310792069;
    tmp_msg_0.v = 0.41931635187054295;
    tmp_msg_0.w = 0.11162139774159796;
    tmp_msg_0.vx = 0.34134133998867067;
    tmp_msg_0.vy = 0.3431480449321276;
    tmp_msg_0.vz = 0.22709597864585107;
    tmp_msg_0.p = 0.5154342163364041;
    tmp_msg_0.q = 0.9083263660363224;
    tmp_msg_0.r = 0.7396333581660546;
    tmp_msg_0.depth = 0.3905287702683511;
    tmp_msg_0.alt = 0.5230182533135516;
    msg.state.set(tmp_msg_0);
    msg.type = 209U;

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
    msg.setTimeStamp(0.3583507968773133);
    msg.setSource(58617U);
    msg.setSourceEntity(181U);
    msg.setDestination(28898U);
    msg.setDestinationEntity(122U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04542069954734462;
    tmp_msg_0.lon = 0.11061185380416927;
    tmp_msg_0.height = 0.4981404330472621;
    tmp_msg_0.x = 0.3491512307309267;
    tmp_msg_0.y = 0.017482024442381228;
    tmp_msg_0.z = 0.5442122713698253;
    tmp_msg_0.phi = 0.1591710478863303;
    tmp_msg_0.theta = 0.5359220714022837;
    tmp_msg_0.psi = 0.052534594622619446;
    tmp_msg_0.u = 0.8400290532077322;
    tmp_msg_0.v = 0.434740667757177;
    tmp_msg_0.w = 0.5412364825126799;
    tmp_msg_0.vx = 0.6114588618606421;
    tmp_msg_0.vy = 0.046631170609328976;
    tmp_msg_0.vz = 0.8030804374757085;
    tmp_msg_0.p = 0.7219517254588159;
    tmp_msg_0.q = 0.09743611430906629;
    tmp_msg_0.r = 0.2019191644264734;
    tmp_msg_0.depth = 0.25547286338772623;
    tmp_msg_0.alt = 0.4888397359140422;
    msg.state.set(tmp_msg_0);
    msg.type = 217U;

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
    msg.setTimeStamp(0.2126591530850821);
    msg.setSource(5801U);
    msg.setSourceEntity(59U);
    msg.setDestination(25693U);
    msg.setDestinationEntity(196U);
    msg.value = 0.4742765063873561;

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
    msg.setTimeStamp(0.71771579507103);
    msg.setSource(45602U);
    msg.setSourceEntity(200U);
    msg.setDestination(2114U);
    msg.setDestinationEntity(241U);
    msg.value = 0.4205064990562153;

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
    msg.setTimeStamp(0.35844731897710447);
    msg.setSource(28502U);
    msg.setSourceEntity(238U);
    msg.setDestination(33691U);
    msg.setDestinationEntity(79U);
    msg.value = 0.05652500057609011;

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
    msg.setTimeStamp(0.42393184223777847);
    msg.setSource(59665U);
    msg.setSourceEntity(248U);
    msg.setDestination(51630U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6736606465107089;

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
    msg.setTimeStamp(0.7590032573399591);
    msg.setSource(6234U);
    msg.setSourceEntity(155U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8910629286273641;

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
    msg.setTimeStamp(0.9579157572234458);
    msg.setSource(21665U);
    msg.setSourceEntity(118U);
    msg.setDestination(63130U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5711502096425694;

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
    msg.setTimeStamp(0.7979411657734741);
    msg.setSource(26494U);
    msg.setSourceEntity(151U);
    msg.setDestination(40484U);
    msg.setDestinationEntity(91U);
    msg.value = 0.10213435504166946;

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
    msg.setTimeStamp(0.0671707408948774);
    msg.setSource(9736U);
    msg.setSourceEntity(33U);
    msg.setDestination(50291U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5394954142099145;

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
    msg.setTimeStamp(0.3619876066617762);
    msg.setSource(50912U);
    msg.setSourceEntity(54U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(12U);
    msg.value = 0.571759698783625;

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
    msg.setTimeStamp(0.5841377524295434);
    msg.setSource(3165U);
    msg.setSourceEntity(238U);
    msg.setDestination(8678U);
    msg.setDestinationEntity(126U);
    msg.value = 0.5100130141412018;

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
    msg.setTimeStamp(0.9931377400546815);
    msg.setSource(22389U);
    msg.setSourceEntity(91U);
    msg.setDestination(17748U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5723927610174847;

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
    msg.setTimeStamp(0.33959400151862495);
    msg.setSource(63599U);
    msg.setSourceEntity(145U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(200U);
    msg.value = 0.19610126905211722;

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
    msg.setTimeStamp(0.29534896520882914);
    msg.setSource(35754U);
    msg.setSourceEntity(125U);
    msg.setDestination(12581U);
    msg.setDestinationEntity(12U);
    msg.value = 0.3196359632371496;

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
    msg.setTimeStamp(0.525972917514067);
    msg.setSource(29343U);
    msg.setSourceEntity(248U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(24U);
    msg.value = 0.902324148977082;

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
    msg.setTimeStamp(0.7161453769608707);
    msg.setSource(30216U);
    msg.setSourceEntity(4U);
    msg.setDestination(5857U);
    msg.setDestinationEntity(170U);
    msg.value = 0.42845482131148305;

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
    msg.setTimeStamp(0.24909173659826545);
    msg.setSource(53361U);
    msg.setSourceEntity(236U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(205U);
    msg.id = 138U;
    msg.zoom = 103U;
    msg.action = 21U;

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
    msg.setTimeStamp(0.6853271078453566);
    msg.setSource(21673U);
    msg.setSourceEntity(96U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(160U);
    msg.id = 226U;
    msg.zoom = 6U;
    msg.action = 162U;

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
    msg.setTimeStamp(0.03323910124428131);
    msg.setSource(8368U);
    msg.setSourceEntity(6U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(29U);
    msg.id = 67U;
    msg.zoom = 152U;
    msg.action = 111U;

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
    msg.setTimeStamp(0.36823241524661643);
    msg.setSource(37494U);
    msg.setSourceEntity(76U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(104U);
    msg.id = 53U;
    msg.value = 0.3083194876513973;

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
    msg.setTimeStamp(0.7418352172285767);
    msg.setSource(40393U);
    msg.setSourceEntity(15U);
    msg.setDestination(60974U);
    msg.setDestinationEntity(98U);
    msg.id = 249U;
    msg.value = 0.6594487393710363;

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
    msg.setTimeStamp(0.8643580272258314);
    msg.setSource(49752U);
    msg.setSourceEntity(26U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(251U);
    msg.id = 217U;
    msg.value = 0.6232322016741099;

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
    msg.setTimeStamp(0.7021510144177253);
    msg.setSource(58353U);
    msg.setSourceEntity(230U);
    msg.setDestination(62387U);
    msg.setDestinationEntity(93U);
    msg.id = 42U;
    msg.value = 0.9573590941842882;

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
    msg.setTimeStamp(0.8380682659732952);
    msg.setSource(6696U);
    msg.setSourceEntity(197U);
    msg.setDestination(23562U);
    msg.setDestinationEntity(246U);
    msg.id = 192U;
    msg.value = 0.26640846940786533;

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
    msg.setTimeStamp(0.3002538213549495);
    msg.setSource(23942U);
    msg.setSourceEntity(149U);
    msg.setDestination(433U);
    msg.setDestinationEntity(58U);
    msg.id = 27U;
    msg.value = 0.10027158156671145;

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
    msg.setTimeStamp(0.018352981489846654);
    msg.setSource(49045U);
    msg.setSourceEntity(29U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(24U);
    msg.id = 83U;
    msg.angle = 0.32655631205894475;

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
    msg.setTimeStamp(0.749843235348786);
    msg.setSource(56827U);
    msg.setSourceEntity(220U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(42U);
    msg.id = 71U;
    msg.angle = 0.4059522860841003;

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
    msg.setTimeStamp(0.06614428122014626);
    msg.setSource(13868U);
    msg.setSourceEntity(240U);
    msg.setDestination(4019U);
    msg.setDestinationEntity(138U);
    msg.id = 180U;
    msg.angle = 0.32117976859421793;

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
    msg.setTimeStamp(0.3248047690458288);
    msg.setSource(50023U);
    msg.setSourceEntity(100U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(246U);
    msg.op = 90U;
    msg.actions.assign("DWHPRVZUYKIZLJGHYIUBYSJBLIANKZASTYFXVLMWKTSTKTVSEKHRIJWQUNNSEROXMRRDGIBUPYVVOVLDJWURRAEQBAWKWDJSNYRQCLEKFJDGFFOLDGXFCGPHMBLCBPJMQUWVMKLZZFTGCIFOQGWQPUMMDQJHGPNWHUHICZODVLFZRAKXCAAGSTRWHOPBMYYBOHNETUXMIOINXENDQTVCYKBC");

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
    msg.setTimeStamp(0.4791612470161519);
    msg.setSource(54267U);
    msg.setSourceEntity(209U);
    msg.setDestination(34522U);
    msg.setDestinationEntity(198U);
    msg.op = 90U;
    msg.actions.assign("PXFHZEAIJOUELQQRONDQGUFGQZYFUEXVRXMEHXCDTSIZOCXGCNACFITFROQFTKNPTKKTEQGMOYPWBLDMLWNRXLFTWVKSOHHNTDDVCZUAXQUUDBHAOZHJEWXVLCKAUVRQODYEBBYSVPMPFYMZPPXZVYBGRILKIYYMMWSNGJHPNIWDURENYTRDLHEGUPMABZAVCJBKRLKJWHGISRSLIFCAEMKFPJJMLZWAKQDCBJSWSVTQBIGGZNBJUAX");

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
    msg.setTimeStamp(0.6441786470038319);
    msg.setSource(64907U);
    msg.setSourceEntity(95U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(208U);
    msg.op = 14U;
    msg.actions.assign("JLCOFPMTAWAKCULSMOTARPGRGSYCCIBNWPFYVOMKHTMBXGVZOWVXTLEXHABIBTJFANSQNQBFGUACHGSIBIZROZDJNMLDZRKNAPOEZFSUIDVGHNNYDYPZDEHPYKCXMTQIQRZKYSZLWCXBKACEPURKMBXSWFWUTFLLJJIDLRDMQWFVUHLRKRSPYBNEFDVRKHWYIOTQSJJ");

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
    msg.setTimeStamp(0.07721797920455076);
    msg.setSource(27706U);
    msg.setSourceEntity(216U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("PQRRRXOJBZHOLMZBDWUJGQJAHSVIXLVHMIXRODRQVXXNSSCUVYUDDJMMJOTTHSANDLLAAULALDQUWNVXHBKPGNPPEAEDYVWLONHABLTWE");

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
    msg.setTimeStamp(0.5330302723998896);
    msg.setSource(11820U);
    msg.setSourceEntity(93U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("HAKJBOZXNIRKSJGUFIUUSBQLIEZOEBTXQCHXSBCEUSPDYPLKCUDRCJXWMYTGWYICJNQHDMSUBYVHKTNIUWYIGDWJTPNYWLSMNVPNBVSRWOHQMGZZGPRQFSIVAETARHSOTWZQANCTDDKHRACEVUFJLMVTXQKZEP");

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
    msg.setTimeStamp(0.3304802409810762);
    msg.setSource(24773U);
    msg.setSourceEntity(207U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("HPHFHBCQCKYUVPQSTLVGZEJWOZKJJTFCZNMV");

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
    msg.setTimeStamp(0.31385791327914614);
    msg.setSource(33013U);
    msg.setSourceEntity(155U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(251U);
    msg.button = 239U;
    msg.value = 240U;

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
    msg.setTimeStamp(0.2090883270699374);
    msg.setSource(64840U);
    msg.setSourceEntity(195U);
    msg.setDestination(26755U);
    msg.setDestinationEntity(79U);
    msg.button = 195U;
    msg.value = 105U;

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
    msg.setTimeStamp(0.6154317551812345);
    msg.setSource(8052U);
    msg.setSourceEntity(210U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(196U);
    msg.button = 47U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.4348192120292481);
    msg.setSource(60663U);
    msg.setSourceEntity(97U);
    msg.setDestination(28454U);
    msg.setDestinationEntity(12U);
    msg.op = 26U;
    msg.text.assign("NOCITPUESIXJCLZLMHQGXRKFKRTINCEBSFJQHRWVFAZVUOBAEXUUZLHWIUMJWXTKQEXRYRBBVTAZPURJZVJREUHYUZDOLCKFELAPPLQTNYGGVKUOOBFOVSMKZWTXNPPGBFWKPOHLTDOCWCRDYMITDGFIKSGNIRQBFODEMFQJKHIAWGXLLHYDGGJABAWXYATZNRUBVHSLPJNSMXXAOQCIDYEMSDZKGQDNQWYHSVDCFZYEPJ");

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
    msg.setTimeStamp(0.8138055458522276);
    msg.setSource(45096U);
    msg.setSourceEntity(114U);
    msg.setDestination(29036U);
    msg.setDestinationEntity(82U);
    msg.op = 222U;
    msg.text.assign("KCIUTFXDPMHBWBARUWJVADNGAINFDQMMSOQWPMHCDFIKJYUHOICFSTIHEVQONFQJYXKRWTGAYXRKAHJUTZXYLRZZVLWDUTDJLBCAJJEZHOWGHLEKCEBSYOIXPCPFBQCSMUTGTUHZVLYUNWWOSQNMYGAPREEGPIFTRKOKHTEFQLUSGONYVZWCZXVUSNBGSVIYALQIJKLXXDKOCFDMZTRENSGJM");

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
    msg.setTimeStamp(0.6317882420656414);
    msg.setSource(1786U);
    msg.setSourceEntity(143U);
    msg.setDestination(50143U);
    msg.setDestinationEntity(219U);
    msg.op = 19U;
    msg.text.assign("ZGLBQFAYWJBSMNJHKCYDDLIYSAQQPJDMPXYQSNKFVCYAHHQEVRWVLBOACEXOCCMROZLVXQRYFJC");

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
    msg.setTimeStamp(0.06530028948425293);
    msg.setSource(14249U);
    msg.setSourceEntity(25U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(145U);
    msg.op = 141U;
    msg.time_remain = 0.9626409021704285;
    msg.sched_time = 0.44513982429248755;

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
    msg.setTimeStamp(0.6538257503453536);
    msg.setSource(27974U);
    msg.setSourceEntity(36U);
    msg.setDestination(10388U);
    msg.setDestinationEntity(25U);
    msg.op = 219U;
    msg.time_remain = 0.38999713357318877;
    msg.sched_time = 0.5869914823064113;

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
    msg.setTimeStamp(0.812067804745968);
    msg.setSource(57700U);
    msg.setSourceEntity(25U);
    msg.setDestination(36237U);
    msg.setDestinationEntity(107U);
    msg.op = 2U;
    msg.time_remain = 0.9370910798552399;
    msg.sched_time = 0.007274303675190774;

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
    msg.setTimeStamp(0.7081329449246299);
    msg.setSource(54162U);
    msg.setSourceEntity(162U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(192U);
    msg.name.assign("OIZNLVVQKHKCNTZDDMIMECQVLKYFCNDIARTUTLSBEQYLZYIUZRUFOPEEKWUDHSNHUETAVQXTBUCGVBHETWJYEPBQWJPMWTWICLHSMJMQIBKANKYSTRGDNWRDAZSWZBLRZYVMSJBFQNOVFIXJFXGMZFJMXXGWXOOFAYMPAOULGYYISH");
    msg.op = 168U;
    msg.sched_time = 0.8896377506387791;

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
    msg.setTimeStamp(0.21697977304566374);
    msg.setSource(46755U);
    msg.setSourceEntity(202U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TAVRPTIKSBAYEDNLLZEUVHYYHSDTOSKKYNMHOLTTOHZLVSHJWPAZJCCVURTSNRIPZBQLMSLBCUDOCXDNMMWHBPPCAFRRDUQWYMZFTJLSRMIHBOZGCGKNIYSWMZXUWWQEPUJANAFEXJPXVKOWQMNESPIEGTIXOAFFHFGIVLKWBUAESOHKGQRDVNBKJOJQM");
    msg.op = 43U;
    msg.sched_time = 0.4416970224718155;

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
    msg.setTimeStamp(0.7835634780822963);
    msg.setSource(49923U);
    msg.setSourceEntity(154U);
    msg.setDestination(23120U);
    msg.setDestinationEntity(138U);
    msg.name.assign("ANNNPMRXTTNJZZIBQTZPEMMBXICVATKFLXARIEGWZXLLJCKVJSCDTURFUDNLCESZSAUDFCJWDFRFKVGRIZYRZWQUUHMJOGUOUDHBNVOLBMGASSPHTQRGEXCEPOVZXDTGKJYPQP");
    msg.op = 5U;
    msg.sched_time = 0.19455430730767076;

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
    msg.setTimeStamp(0.4063912492870504);
    msg.setSource(65267U);
    msg.setSourceEntity(206U);
    msg.setDestination(27264U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.43759100836478027);
    msg.setSource(20637U);
    msg.setSourceEntity(214U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.14928073351360038);
    msg.setSource(2330U);
    msg.setSourceEntity(78U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.32970461869143486);
    msg.setSource(3894U);
    msg.setSourceEntity(146U);
    msg.setDestination(24754U);
    msg.setDestinationEntity(214U);
    msg.name.assign("PBNECLLJLKMEYCEJDKITUYUMMHWU");
    msg.state = 155U;

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
    msg.setTimeStamp(0.5113050184273924);
    msg.setSource(49195U);
    msg.setSourceEntity(10U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(12U);
    msg.name.assign("UQMUNNMFVJMXVXVSIDJPPCQOVPRZIOROHARETMVMOQUUZXRTSYK");
    msg.state = 113U;

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
    msg.setTimeStamp(0.46158042293752855);
    msg.setSource(27615U);
    msg.setSourceEntity(146U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(124U);
    msg.name.assign("RJAAZILSWUNDKYKYIWBGBPGFJGRIIMCEQHDXKLANYUMFBLHSMPQYZYGZMIZWYNSFGHDUQJJGUXQFHSJTFNGPWOCKZOOBDYOMGABXIPOHZTPNEXAAKMBHWQKLXNUARZZPVTVMXVYSBYHOOAXTCEQEWDTAQCPZJSDUBLLLKETMSCXRSUNDLBJROF");
    msg.state = 112U;

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
    msg.setTimeStamp(0.44058873993813974);
    msg.setSource(15585U);
    msg.setSourceEntity(131U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(165U);
    msg.name.assign("ZFLCSCGYCUAUTBMINBEFNRPRMGNYXTIMLFQLHUFXCHWVGXHYDPVRAKOZAJMZQZJPWQCWSFQLVYVNZX");
    msg.value = 231U;

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
    msg.setTimeStamp(0.6061763102283501);
    msg.setSource(57099U);
    msg.setSourceEntity(81U);
    msg.setDestination(40009U);
    msg.setDestinationEntity(222U);
    msg.name.assign("OXDZJTEGOAFTNQQLTOAIMLAKLXMJFUIFCSELJZCZREVYPSCIEOLLDTZMITZGQOXDAMXXWEPHLEDVZBKEQAKVPRGYPUNEIGWAIKDMYJVUYAEKWRPGNDZNQAIVWBOUBPYSLYRDFGGHWTBKWNPBZNMXS");
    msg.value = 104U;

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
    msg.setTimeStamp(0.8758938677286571);
    msg.setSource(61020U);
    msg.setSourceEntity(82U);
    msg.setDestination(46329U);
    msg.setDestinationEntity(86U);
    msg.name.assign("HILXCOLXFRUKZLTAWCSHULEOFMKGEEFVARJVTAMIPWYBYBOITADTSYAMSFXWELIKVBSVQGAPBJPRONHXMJQOIJDDGPOQQNECJZVIZGKYYKZXASKSRWFMYIOLRJMVSWDCTVZBHIHEFTUVNFYCWMXUTBBHFIQAPTPNAVYUQLUPNYKLPWQNSMECRODFNXRZJQQFRGMXNZDCVZIRGUGLUDXBNCGQGDUYCWGKX");
    msg.value = 147U;

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
    msg.setTimeStamp(0.8941612283462019);
    msg.setSource(35552U);
    msg.setSourceEntity(204U);
    msg.setDestination(54026U);
    msg.setDestinationEntity(70U);
    msg.name.assign("UETZVICJWFAXYWOGNKIRLJPFEONQJSBIIUAFMFDAPVYWMHSBEMOKTLFEZKKJUAHHRKHCVUSXPZXWSRJFATJGTRLLM");

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
    msg.setTimeStamp(0.9030510509873353);
    msg.setSource(27873U);
    msg.setSourceEntity(238U);
    msg.setDestination(37589U);
    msg.setDestinationEntity(254U);
    msg.name.assign("EBYYWSGASFHNUZYROBFLTRMHEDXBS");

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
    msg.setTimeStamp(0.20773586669621502);
    msg.setSource(65510U);
    msg.setSourceEntity(175U);
    msg.setDestination(54812U);
    msg.setDestinationEntity(116U);
    msg.name.assign("NAVZXPFPUXXQECZEEVDIVDBFDAMZQPIITAWNWCUNWNHVBTNXIOJCVARKIGNUQGBTSMPRAJWUJROWGHUDKLKDKXJDMZVSYFSNGJWUWWYYAFMHCYVJNRHQPWATBRBUEMYIUZOLATHSWDXSLQCAUPGXZCRFELZOIVFQNOKKHBDGKTEVKFIBMJPBPGRQJAOHBQEOELLHTGJGYUSZFYPRTTLCTLVCXSSZHCIKMSQEROODXPXMKBZSDMQLY");

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
    msg.setTimeStamp(0.029541275891850405);
    msg.setSource(19789U);
    msg.setSourceEntity(98U);
    msg.setDestination(1513U);
    msg.setDestinationEntity(158U);
    msg.name.assign("CLNWMVJDGKRMPOFSNAYQZDXYEUVFGWAFEFCARTXQTODANALVFDKJLGOTUMISMWHKDBHQHIIOPIWPLTUDSCBXBCUPRNMCWLGGHYLMAWSRJPPVYKAQTXQFCYHPVEDOBVCEJLCD");
    msg.value = 81U;

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
    msg.setTimeStamp(0.6037033607450276);
    msg.setSource(12926U);
    msg.setSourceEntity(72U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(168U);
    msg.name.assign("NVAWIXYSEPNQMEMOLJBPTBKLZZGKEKMFTCBYRVBAJOSUFDF");
    msg.value = 213U;

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
    msg.setTimeStamp(0.9236112088126658);
    msg.setSource(3776U);
    msg.setSourceEntity(44U);
    msg.setDestination(34517U);
    msg.setDestinationEntity(124U);
    msg.name.assign("LUFNZGEKUFFHHUAOGVPKPMQNSGMKXPBXKCPAQSESDYEJKMKZYKWJXIALYSXDSUNZVRZHAPFXBLIGJERMTQLRTGKMAYRLLJEUKMYATWUMMPNVDPTOJUHZAYORRZHVSENHFWHTGFMJWCJOZILBJWQ");
    msg.value = 44U;

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
    msg.setTimeStamp(0.4885352557400532);
    msg.setSource(1689U);
    msg.setSourceEntity(141U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(61U);
    msg.id = 194U;
    msg.period = 1657550778U;
    msg.duty_cycle = 1526773782U;

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
    msg.setTimeStamp(0.015304240272360548);
    msg.setSource(36809U);
    msg.setSourceEntity(83U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(190U);
    msg.id = 200U;
    msg.period = 2253621289U;
    msg.duty_cycle = 1263156653U;

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
    msg.setTimeStamp(0.4352800082865492);
    msg.setSource(12216U);
    msg.setSourceEntity(22U);
    msg.setDestination(42084U);
    msg.setDestinationEntity(236U);
    msg.id = 20U;
    msg.period = 882929575U;
    msg.duty_cycle = 3175788612U;

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
    msg.setTimeStamp(0.14347733411359842);
    msg.setSource(45628U);
    msg.setSourceEntity(143U);
    msg.setDestination(40901U);
    msg.setDestinationEntity(132U);
    msg.id = 3U;
    msg.period = 2449658033U;
    msg.duty_cycle = 651758531U;

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
    msg.setTimeStamp(0.6142335669227015);
    msg.setSource(12031U);
    msg.setSourceEntity(228U);
    msg.setDestination(29958U);
    msg.setDestinationEntity(88U);
    msg.id = 81U;
    msg.period = 1500818243U;
    msg.duty_cycle = 616142193U;

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
    msg.setTimeStamp(0.42588924235549186);
    msg.setSource(38857U);
    msg.setSourceEntity(187U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(180U);
    msg.id = 156U;
    msg.period = 2268508398U;
    msg.duty_cycle = 2920185306U;

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
    msg.setTimeStamp(0.053272387143499356);
    msg.setSource(59151U);
    msg.setSourceEntity(89U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.6553589454840888;
    msg.lon = 0.18716426236994999;
    msg.height = 0.8867734405992258;
    msg.x = 0.4764151228805056;
    msg.y = 0.15399498009122847;
    msg.z = 0.60792378274868;
    msg.phi = 0.8703343151827148;
    msg.theta = 0.35180641244626953;
    msg.psi = 0.9600643544406507;
    msg.u = 0.30120628558640583;
    msg.v = 0.07351996008662953;
    msg.w = 0.5159127427456267;
    msg.vx = 0.30865023559962923;
    msg.vy = 0.0689398371238984;
    msg.vz = 0.3738969522121679;
    msg.p = 0.12317117247814247;
    msg.q = 0.42371128887967713;
    msg.r = 0.7219524498495357;
    msg.depth = 0.4893445016816461;
    msg.alt = 0.9208937015569492;

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
    msg.setTimeStamp(0.11880278901498431);
    msg.setSource(7585U);
    msg.setSourceEntity(194U);
    msg.setDestination(9990U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.2003182963467388;
    msg.lon = 0.7650361824514965;
    msg.height = 0.24694124655629712;
    msg.x = 0.2871008835928567;
    msg.y = 0.5940584054973419;
    msg.z = 0.6185275968876203;
    msg.phi = 0.7243407816678805;
    msg.theta = 0.09813756723161826;
    msg.psi = 0.41614119018209905;
    msg.u = 0.3167847268718358;
    msg.v = 0.22362556506929998;
    msg.w = 0.34709445695923724;
    msg.vx = 0.7252283910895758;
    msg.vy = 0.575902416980658;
    msg.vz = 0.3995272707649161;
    msg.p = 0.10704697854108891;
    msg.q = 0.8133444144959001;
    msg.r = 0.9097174965386271;
    msg.depth = 0.039188940125589156;
    msg.alt = 0.01609464609068023;

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
    msg.setTimeStamp(0.8985229700301327);
    msg.setSource(23533U);
    msg.setSourceEntity(72U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.029635150848565495;
    msg.lon = 0.27749775613755345;
    msg.height = 0.34311819165616597;
    msg.x = 0.16105945217287987;
    msg.y = 0.8435176069468057;
    msg.z = 0.4255167905217979;
    msg.phi = 0.7934574079794182;
    msg.theta = 0.23223274053180376;
    msg.psi = 0.9291153663378076;
    msg.u = 0.8870901451828092;
    msg.v = 0.6312341865428729;
    msg.w = 0.9298157954624594;
    msg.vx = 0.2041567128627192;
    msg.vy = 0.6085785213531543;
    msg.vz = 0.4450723706959733;
    msg.p = 0.4638486074757584;
    msg.q = 0.9614355025988951;
    msg.r = 0.7960431277163419;
    msg.depth = 0.9465153094269724;
    msg.alt = 0.5871842229546358;

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
    msg.setTimeStamp(0.8326750346947268);
    msg.setSource(57165U);
    msg.setSourceEntity(248U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(23U);
    msg.x = 0.42701665675438216;
    msg.y = 0.4378477212732045;
    msg.z = 0.2465861582789326;

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
    msg.setTimeStamp(0.565077802633483);
    msg.setSource(36962U);
    msg.setSourceEntity(38U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(203U);
    msg.x = 0.7560712765423808;
    msg.y = 0.3864121065147268;
    msg.z = 0.7806704143420592;

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
    msg.setTimeStamp(0.859138590692883);
    msg.setSource(55662U);
    msg.setSourceEntity(54U);
    msg.setDestination(47813U);
    msg.setDestinationEntity(243U);
    msg.x = 0.9925645065860372;
    msg.y = 0.10420538160367265;
    msg.z = 0.2713706760438095;

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
    msg.setTimeStamp(0.9209125699720825);
    msg.setSource(10856U);
    msg.setSourceEntity(202U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7069200420036831;

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
    msg.setTimeStamp(0.8717388080276957);
    msg.setSource(57366U);
    msg.setSourceEntity(154U);
    msg.setDestination(36602U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5957402530716122;

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
    msg.setTimeStamp(0.06665866588027258);
    msg.setSource(32102U);
    msg.setSourceEntity(167U);
    msg.setDestination(34536U);
    msg.setDestinationEntity(110U);
    msg.value = 0.34937844162320764;

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
    msg.setTimeStamp(0.0025523667351583512);
    msg.setSource(21474U);
    msg.setSourceEntity(204U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(28U);
    msg.value = 0.32347122105645376;

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
    msg.setTimeStamp(0.26470237890175585);
    msg.setSource(49757U);
    msg.setSourceEntity(0U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9908137570455441;

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
    msg.setTimeStamp(0.08897371874483417);
    msg.setSource(26277U);
    msg.setSourceEntity(84U);
    msg.setDestination(50595U);
    msg.setDestinationEntity(237U);
    msg.value = 0.913017047251752;

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
    msg.setTimeStamp(0.7175267244198617);
    msg.setSource(36559U);
    msg.setSourceEntity(169U);
    msg.setDestination(36215U);
    msg.setDestinationEntity(185U);
    msg.x = 0.48270973865610733;
    msg.y = 0.16338191941965297;
    msg.z = 0.18491835852364902;
    msg.phi = 0.7943354394995706;
    msg.theta = 0.2448859536678858;
    msg.psi = 0.9252557550642443;
    msg.p = 0.5121572896324222;
    msg.q = 0.946611469012799;
    msg.r = 0.6992047015147291;
    msg.u = 0.6464939378801976;
    msg.v = 0.46155709822086755;
    msg.w = 0.4384184907171613;
    msg.bias_psi = 0.8848120745083387;
    msg.bias_r = 0.9834776973629217;

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
    msg.setTimeStamp(0.7207960916590338);
    msg.setSource(44843U);
    msg.setSourceEntity(69U);
    msg.setDestination(50007U);
    msg.setDestinationEntity(233U);
    msg.x = 0.9781484298255194;
    msg.y = 0.4511175576748272;
    msg.z = 0.2442405412692754;
    msg.phi = 0.34475219780265554;
    msg.theta = 0.8686687215967085;
    msg.psi = 0.8711195328336613;
    msg.p = 0.2903399890306866;
    msg.q = 0.2644308079453621;
    msg.r = 0.9907321671330628;
    msg.u = 0.8439042971178818;
    msg.v = 0.3769777190075291;
    msg.w = 0.8728271701506842;
    msg.bias_psi = 0.8773215489487115;
    msg.bias_r = 0.022457262046767568;

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
    msg.setTimeStamp(0.049634086134254685);
    msg.setSource(48936U);
    msg.setSourceEntity(163U);
    msg.setDestination(23382U);
    msg.setDestinationEntity(12U);
    msg.x = 0.6583081321751113;
    msg.y = 0.09940415278824721;
    msg.z = 0.19947013257673052;
    msg.phi = 0.2556335578669553;
    msg.theta = 0.7632822280653182;
    msg.psi = 0.11935135441330913;
    msg.p = 0.7295946690327119;
    msg.q = 0.2770229451547306;
    msg.r = 0.6792920538242294;
    msg.u = 0.3083157506672761;
    msg.v = 0.4274233567607857;
    msg.w = 0.6894514467565551;
    msg.bias_psi = 0.7570848850307411;
    msg.bias_r = 0.027489104413069065;

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
    msg.setTimeStamp(0.685880058641362);
    msg.setSource(55547U);
    msg.setSourceEntity(152U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(77U);
    msg.bias_psi = 0.4495327613319904;
    msg.bias_r = 0.5113250923720944;
    msg.cog = 0.22644580592875208;
    msg.cyaw = 0.2584664335220779;
    msg.lbl_rej_level = 0.7849441478991755;
    msg.gps_rej_level = 0.6955779008002189;
    msg.custom_x = 0.1467486486076981;
    msg.custom_y = 0.3119829876102267;
    msg.custom_z = 0.4642768784033062;

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
    msg.setTimeStamp(0.9015513406738753);
    msg.setSource(11995U);
    msg.setSourceEntity(39U);
    msg.setDestination(3233U);
    msg.setDestinationEntity(65U);
    msg.bias_psi = 0.3486585724423772;
    msg.bias_r = 0.8597094795618794;
    msg.cog = 0.7985129950982403;
    msg.cyaw = 0.4054504403664648;
    msg.lbl_rej_level = 0.13610623294408075;
    msg.gps_rej_level = 0.2244881182425189;
    msg.custom_x = 0.4794227084839022;
    msg.custom_y = 0.21265264643110204;
    msg.custom_z = 0.6104702869469492;

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
    msg.setTimeStamp(0.36597316767012744);
    msg.setSource(62730U);
    msg.setSourceEntity(218U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.6933672328737709;
    msg.bias_r = 0.2382002559835137;
    msg.cog = 0.6465152943617624;
    msg.cyaw = 0.019990624386469924;
    msg.lbl_rej_level = 0.5743630655763402;
    msg.gps_rej_level = 0.3126607719253327;
    msg.custom_x = 0.6174812657658724;
    msg.custom_y = 0.6969206393644057;
    msg.custom_z = 0.9339968047823201;

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
    msg.setTimeStamp(0.15542970312927107);
    msg.setSource(19664U);
    msg.setSourceEntity(30U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(145U);
    msg.utc_time = 0.15625478950257166;
    msg.reason = 114U;

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
    msg.setTimeStamp(0.9974715852786191);
    msg.setSource(40988U);
    msg.setSourceEntity(8U);
    msg.setDestination(36135U);
    msg.setDestinationEntity(67U);
    msg.utc_time = 0.4770306666953069;
    msg.reason = 103U;

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
    msg.setTimeStamp(0.7854164242703525);
    msg.setSource(47972U);
    msg.setSourceEntity(237U);
    msg.setDestination(32532U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.6040160974897198;
    msg.reason = 128U;

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
    msg.setTimeStamp(0.3871573751072527);
    msg.setSource(56782U);
    msg.setSourceEntity(12U);
    msg.setDestination(33109U);
    msg.setDestinationEntity(88U);
    msg.id = 95U;
    msg.range = 0.4019350904981601;
    msg.acceptance = 123U;

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
    msg.setTimeStamp(0.6443029872894562);
    msg.setSource(33275U);
    msg.setSourceEntity(228U);
    msg.setDestination(51181U);
    msg.setDestinationEntity(136U);
    msg.id = 64U;
    msg.range = 0.06437242104545648;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.37254368907080626);
    msg.setSource(21089U);
    msg.setSourceEntity(181U);
    msg.setDestination(335U);
    msg.setDestinationEntity(223U);
    msg.id = 30U;
    msg.range = 0.7379457540428916;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.1895216382982573);
    msg.setSource(28318U);
    msg.setSourceEntity(164U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(79U);
    msg.type = 135U;
    msg.reason = 249U;
    msg.value = 0.5288391712665815;
    msg.timestep = 0.047351218854577604;

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
    msg.setTimeStamp(0.19508069326260868);
    msg.setSource(40754U);
    msg.setSourceEntity(175U);
    msg.setDestination(43701U);
    msg.setDestinationEntity(83U);
    msg.type = 158U;
    msg.reason = 154U;
    msg.value = 0.026621786754497556;
    msg.timestep = 0.0023390506856355575;

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
    msg.setTimeStamp(0.45949622434687865);
    msg.setSource(10752U);
    msg.setSourceEntity(131U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(247U);
    msg.type = 86U;
    msg.reason = 122U;
    msg.value = 0.336563839986305;
    msg.timestep = 0.9000977941459825;

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
    msg.setTimeStamp(0.003216830829352646);
    msg.setSource(39320U);
    msg.setSourceEntity(19U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(11U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MFIMNEYUJDPSRWFVHLBKIGLSRZLIQSSQCYDCUNFRNUKCKEDQUXGWVHKZSJJBRWJKGWSBUDHYPLBNRGPMUYCXLKOAEPCZEFNDORISPLAOSWHEWGZBQQROA");
    tmp_msg_0.lat = 0.14743537398471795;
    tmp_msg_0.lon = 0.22025294814767848;
    tmp_msg_0.depth = 0.4748806878725653;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 134U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7977369945969272;
    msg.y = 0.7303191984615559;
    msg.var_x = 0.6904382824313041;
    msg.var_y = 0.5765475339049267;
    msg.distance = 0.2633123218136598;

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
    msg.setTimeStamp(0.12581461492960866);
    msg.setSource(42714U);
    msg.setSourceEntity(41U);
    msg.setDestination(7222U);
    msg.setDestinationEntity(4U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MSYWSXNXJHVOIOMTLAXOEUAYXTFOIGBXMGHZPDTP");
    tmp_msg_0.lat = 0.3363033204883672;
    tmp_msg_0.lon = 0.15625426827113142;
    tmp_msg_0.depth = 0.3632804077351328;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 194U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10068514736793732;
    msg.y = 0.5926241783371722;
    msg.var_x = 0.5126120767664135;
    msg.var_y = 0.5305191104640199;
    msg.distance = 0.37317087853083886;

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
    msg.setTimeStamp(0.36150324906736087);
    msg.setSource(60697U);
    msg.setSourceEntity(199U);
    msg.setDestination(26811U);
    msg.setDestinationEntity(221U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MXWXETZNGQXGTXYFZBHGWSMJHEBOPCSNSIPWXCBMMZORGKBWPQLPMQKNRONLGSDPRRSALJYCCOCCMGHUOANFXQVSYWYKTLVFIUEHHBQXWIUBVPUPOUEFXQXCKMHZORJIZANPKRZLDVHEOCZWDDWJHSWQDJEEJULUAATBKIVTYBTR");
    tmp_msg_0.lat = 0.32677260748040515;
    tmp_msg_0.lon = 0.057829737787450375;
    tmp_msg_0.depth = 0.17977626768228827;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 206U;
    tmp_msg_0.transponder_delay = 26U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7452650932486324;
    msg.y = 0.03342312183058982;
    msg.var_x = 0.49646360446647964;
    msg.var_y = 0.09151627429670128;
    msg.distance = 0.09549837347669754;

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
    msg.setTimeStamp(0.9169598179292574);
    msg.setSource(12441U);
    msg.setSourceEntity(98U);
    msg.setDestination(60042U);
    msg.setDestinationEntity(46U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.6942931572572462);
    msg.setSource(34526U);
    msg.setSourceEntity(149U);
    msg.setDestination(50345U);
    msg.setDestinationEntity(29U);
    msg.state = 240U;

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
    msg.setTimeStamp(0.7552531662813923);
    msg.setSource(51645U);
    msg.setSourceEntity(166U);
    msg.setDestination(42725U);
    msg.setDestinationEntity(96U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.08746188723055115);
    msg.setSource(39841U);
    msg.setSourceEntity(92U);
    msg.setDestination(51348U);
    msg.setDestinationEntity(10U);
    msg.x = 0.9132587538634233;
    msg.y = 0.960641080504498;
    msg.z = 0.9620043895515873;

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
    msg.setTimeStamp(0.5063047294480457);
    msg.setSource(63082U);
    msg.setSourceEntity(232U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(182U);
    msg.x = 0.9941376603511164;
    msg.y = 0.8236830224574421;
    msg.z = 0.5570532157900313;

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
    msg.setTimeStamp(0.8572860080012142);
    msg.setSource(55163U);
    msg.setSourceEntity(241U);
    msg.setDestination(40249U);
    msg.setDestinationEntity(204U);
    msg.x = 0.5816944982365035;
    msg.y = 0.7742668055943592;
    msg.z = 0.5868779207884258;

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
    msg.setTimeStamp(0.7041074437903801);
    msg.setSource(6618U);
    msg.setSourceEntity(121U);
    msg.setDestination(48802U);
    msg.setDestinationEntity(41U);
    msg.va = 0.2683376725497648;
    msg.aoa = 0.9592505346018566;
    msg.ssa = 0.9397783769687788;

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
    msg.setTimeStamp(0.14071855191936);
    msg.setSource(12338U);
    msg.setSourceEntity(27U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(254U);
    msg.va = 0.8880705455656357;
    msg.aoa = 0.9773193533993974;
    msg.ssa = 0.031159514032898628;

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
    msg.setTimeStamp(0.33910581356486014);
    msg.setSource(32836U);
    msg.setSourceEntity(98U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(247U);
    msg.va = 0.1566052094306385;
    msg.aoa = 0.14065886112575865;
    msg.ssa = 0.929381756323156;

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
    msg.setTimeStamp(0.4031730683196256);
    msg.setSource(16305U);
    msg.setSourceEntity(46U);
    msg.setDestination(62256U);
    msg.setDestinationEntity(90U);
    msg.value = 0.053441200405534905;

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
    msg.setTimeStamp(0.1572447506758884);
    msg.setSource(34183U);
    msg.setSourceEntity(244U);
    msg.setDestination(14323U);
    msg.setDestinationEntity(105U);
    msg.value = 0.09659456921316789;

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
    msg.setTimeStamp(0.9829270832913172);
    msg.setSource(39390U);
    msg.setSourceEntity(107U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(103U);
    msg.value = 0.8721805875557843;

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
    msg.setTimeStamp(0.5076658102833616);
    msg.setSource(19467U);
    msg.setSourceEntity(45U);
    msg.setDestination(47100U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6141247374907739;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.8367507722313273);
    msg.setSource(9896U);
    msg.setSourceEntity(118U);
    msg.setDestination(39350U);
    msg.setDestinationEntity(76U);
    msg.value = 0.28445865458703556;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.6208177053132214);
    msg.setSource(56281U);
    msg.setSourceEntity(31U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(107U);
    msg.value = 0.1949183707697164;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.02901938250455771);
    msg.setSource(48575U);
    msg.setSourceEntity(156U);
    msg.setDestination(40664U);
    msg.setDestinationEntity(211U);
    msg.value = 0.19907105252272372;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.3227015788576374);
    msg.setSource(12412U);
    msg.setSourceEntity(106U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(138U);
    msg.value = 0.22500972696474308;
    msg.speed_units = 165U;

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
    msg.setTimeStamp(0.08913210576929542);
    msg.setSource(41043U);
    msg.setSourceEntity(141U);
    msg.setDestination(4934U);
    msg.setDestinationEntity(217U);
    msg.value = 0.3627859577529836;
    msg.speed_units = 178U;

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
    msg.setTimeStamp(0.7955760674412752);
    msg.setSource(59830U);
    msg.setSourceEntity(234U);
    msg.setDestination(25627U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2177048445560522;

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
    msg.setTimeStamp(0.23767763956531818);
    msg.setSource(55619U);
    msg.setSourceEntity(188U);
    msg.setDestination(38300U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5603055442550164;

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
    msg.setTimeStamp(0.8316379908174166);
    msg.setSource(12001U);
    msg.setSourceEntity(117U);
    msg.setDestination(27030U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9120784880618932;

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
    msg.setTimeStamp(0.569205890381902);
    msg.setSource(8134U);
    msg.setSourceEntity(111U);
    msg.setDestination(2391U);
    msg.setDestinationEntity(196U);
    msg.value = 0.40037433869043226;

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
    msg.setTimeStamp(0.14259909002432247);
    msg.setSource(21513U);
    msg.setSourceEntity(242U);
    msg.setDestination(52207U);
    msg.setDestinationEntity(170U);
    msg.value = 0.00679282342832499;

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
    msg.setTimeStamp(0.12820101389910843);
    msg.setSource(1810U);
    msg.setSourceEntity(151U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6834084752306426;

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
    msg.setTimeStamp(0.7686814401348886);
    msg.setSource(35034U);
    msg.setSourceEntity(54U);
    msg.setDestination(42967U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8056055767095756;

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
    msg.setTimeStamp(0.7294844848915492);
    msg.setSource(32709U);
    msg.setSourceEntity(191U);
    msg.setDestination(30179U);
    msg.setDestinationEntity(217U);
    msg.value = 0.503267686496787;

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
    msg.setTimeStamp(0.9038774960188566);
    msg.setSource(57824U);
    msg.setSourceEntity(163U);
    msg.setDestination(30403U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8102773618718545;

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
    msg.setTimeStamp(0.12750731856558184);
    msg.setSource(46842U);
    msg.setSourceEntity(247U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 877413244U;
    msg.start_lat = 0.9635207516718349;
    msg.start_lon = 0.26112304626286964;
    msg.start_z = 0.4849686158966605;
    msg.start_z_units = 113U;
    msg.end_lat = 0.9648860021219221;
    msg.end_lon = 0.6580199057281212;
    msg.end_z = 0.8312145872584283;
    msg.end_z_units = 211U;
    msg.speed = 0.6738945444421411;
    msg.speed_units = 150U;
    msg.lradius = 0.8064275572351999;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.6336260175898878);
    msg.setSource(10666U);
    msg.setSourceEntity(52U);
    msg.setDestination(31178U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 1054401258U;
    msg.start_lat = 0.9821875104094999;
    msg.start_lon = 0.9050947355073995;
    msg.start_z = 0.04713060661581314;
    msg.start_z_units = 232U;
    msg.end_lat = 0.28140436583192374;
    msg.end_lon = 0.13915241746157403;
    msg.end_z = 0.23055976119931465;
    msg.end_z_units = 249U;
    msg.speed = 0.7387367912709599;
    msg.speed_units = 33U;
    msg.lradius = 0.31850501028151246;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.5078833276116462);
    msg.setSource(49350U);
    msg.setSourceEntity(116U);
    msg.setDestination(34977U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 1346796021U;
    msg.start_lat = 0.5586298525102684;
    msg.start_lon = 0.6164132910987439;
    msg.start_z = 0.06749617525647611;
    msg.start_z_units = 14U;
    msg.end_lat = 0.6198811622727131;
    msg.end_lon = 0.9026172235334452;
    msg.end_z = 0.6642456193947416;
    msg.end_z_units = 109U;
    msg.speed = 0.4613271376035626;
    msg.speed_units = 210U;
    msg.lradius = 0.40870619710303546;
    msg.flags = 133U;

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
    msg.setTimeStamp(0.030226610941171406);
    msg.setSource(49342U);
    msg.setSourceEntity(147U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(60U);
    msg.x = 0.5353498865674868;
    msg.y = 0.44035845156230946;
    msg.z = 0.7719813790529452;
    msg.k = 0.4900822524866345;
    msg.m = 0.16065019644168443;
    msg.n = 0.8639674358461583;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.4661791123930362);
    msg.setSource(63671U);
    msg.setSourceEntity(24U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(161U);
    msg.x = 0.09244882506724694;
    msg.y = 0.4525677496804523;
    msg.z = 0.9277730810120761;
    msg.k = 0.9153477285539534;
    msg.m = 0.5850089018479985;
    msg.n = 0.9486489545748433;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.02742187442532462);
    msg.setSource(52598U);
    msg.setSourceEntity(138U);
    msg.setDestination(40610U);
    msg.setDestinationEntity(192U);
    msg.x = 0.38058316131985703;
    msg.y = 0.3551562452211131;
    msg.z = 0.5383845938921273;
    msg.k = 0.013588584908652668;
    msg.m = 0.1462937285480913;
    msg.n = 0.0033305757476754794;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.46896306640270524);
    msg.setSource(31754U);
    msg.setSourceEntity(34U);
    msg.setDestination(2490U);
    msg.setDestinationEntity(233U);
    msg.value = 0.2169594036659549;

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
    msg.setTimeStamp(0.8833662663034085);
    msg.setSource(16229U);
    msg.setSourceEntity(77U);
    msg.setDestination(38398U);
    msg.setDestinationEntity(158U);
    msg.value = 0.502801205284561;

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
    msg.setTimeStamp(0.9704945485657207);
    msg.setSource(5703U);
    msg.setSourceEntity(119U);
    msg.setDestination(50466U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5353028687399946;

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
    msg.setTimeStamp(0.3251695712033028);
    msg.setSource(39593U);
    msg.setSourceEntity(58U);
    msg.setDestination(37555U);
    msg.setDestinationEntity(77U);
    msg.u = 0.3769329424215615;
    msg.v = 0.6836472914604127;
    msg.w = 0.41190449732815193;
    msg.p = 0.17914831789018149;
    msg.q = 0.0407691908597706;
    msg.r = 0.886991144170358;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.5597039918394084);
    msg.setSource(4162U);
    msg.setSourceEntity(107U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(193U);
    msg.u = 0.5822038848185336;
    msg.v = 0.9585314402882482;
    msg.w = 0.7811338518314113;
    msg.p = 0.13399418673162355;
    msg.q = 0.17043277478331043;
    msg.r = 0.4701463830127449;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.8603332744275668);
    msg.setSource(47566U);
    msg.setSourceEntity(67U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(0U);
    msg.u = 0.9421677506511128;
    msg.v = 0.3458347785254573;
    msg.w = 0.8731318462091091;
    msg.p = 0.4274597560807626;
    msg.q = 0.47502143156532983;
    msg.r = 0.02335512167940046;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.9096350742127849);
    msg.setSource(59931U);
    msg.setSourceEntity(47U);
    msg.setDestination(841U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 3177108076U;
    msg.start_lat = 0.7617628249965209;
    msg.start_lon = 0.8736971182053038;
    msg.start_z = 0.6274962767303691;
    msg.start_z_units = 38U;
    msg.end_lat = 0.2927949509834382;
    msg.end_lon = 0.5048753702880958;
    msg.end_z = 0.09689469758655223;
    msg.end_z_units = 22U;
    msg.lradius = 0.3940943043133489;
    msg.flags = 208U;
    msg.x = 0.0336699716704052;
    msg.y = 0.9287627142984272;
    msg.z = 0.9724748308253792;
    msg.vx = 0.5837567717216019;
    msg.vy = 0.39182010698963365;
    msg.vz = 0.08573968098538043;
    msg.course_error = 0.9265881448673952;
    msg.eta = 46641U;

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
    msg.setTimeStamp(0.15390277592935553);
    msg.setSource(12066U);
    msg.setSourceEntity(95U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 1274076825U;
    msg.start_lat = 0.007192214387828577;
    msg.start_lon = 0.8394100659694288;
    msg.start_z = 0.31010287780267154;
    msg.start_z_units = 49U;
    msg.end_lat = 0.697890415513601;
    msg.end_lon = 0.2941499897442921;
    msg.end_z = 0.0048453056662125515;
    msg.end_z_units = 166U;
    msg.lradius = 0.9058015287816956;
    msg.flags = 13U;
    msg.x = 0.8619355373530592;
    msg.y = 0.18387791887055194;
    msg.z = 0.9844260292146318;
    msg.vx = 0.4185466003752929;
    msg.vy = 0.20355050275933106;
    msg.vz = 0.7112050888139251;
    msg.course_error = 0.5705551290214288;
    msg.eta = 9645U;

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
    msg.setTimeStamp(0.6479800466907472);
    msg.setSource(36444U);
    msg.setSourceEntity(162U);
    msg.setDestination(40471U);
    msg.setDestinationEntity(225U);
    msg.path_ref = 4153104916U;
    msg.start_lat = 0.41319203804048565;
    msg.start_lon = 0.5377843667561777;
    msg.start_z = 0.3832155568315937;
    msg.start_z_units = 142U;
    msg.end_lat = 0.6893369882118716;
    msg.end_lon = 0.9570431774384853;
    msg.end_z = 0.5550151825376005;
    msg.end_z_units = 177U;
    msg.lradius = 0.3511501351010944;
    msg.flags = 186U;
    msg.x = 0.3818806123906947;
    msg.y = 0.9998112236328812;
    msg.z = 0.6502072957847717;
    msg.vx = 0.9834738607854605;
    msg.vy = 0.5803029501623742;
    msg.vz = 0.48004034590072686;
    msg.course_error = 0.652861288460553;
    msg.eta = 10218U;

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
    msg.setTimeStamp(0.9398125953627521);
    msg.setSource(34059U);
    msg.setSourceEntity(171U);
    msg.setDestination(6431U);
    msg.setDestinationEntity(26U);
    msg.k = 0.8187985016262281;
    msg.m = 0.8959708023695299;
    msg.n = 0.18061608979459898;

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
    msg.setTimeStamp(0.9628242684319323);
    msg.setSource(32318U);
    msg.setSourceEntity(140U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(39U);
    msg.k = 0.821423201157875;
    msg.m = 0.14812974365480314;
    msg.n = 0.648309251948643;

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
    msg.setTimeStamp(0.6123426830121339);
    msg.setSource(44421U);
    msg.setSourceEntity(117U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(28U);
    msg.k = 0.2662268058642858;
    msg.m = 0.7814671624251286;
    msg.n = 0.727162099529612;

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
    msg.setTimeStamp(0.9994155373943798);
    msg.setSource(20774U);
    msg.setSourceEntity(232U);
    msg.setDestination(57027U);
    msg.setDestinationEntity(37U);
    msg.p = 0.10321119748040686;
    msg.i = 0.9767342774307216;
    msg.d = 0.5335950917700863;
    msg.a = 0.7193435953076964;

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
    msg.setTimeStamp(0.6185733234098187);
    msg.setSource(22087U);
    msg.setSourceEntity(116U);
    msg.setDestination(16316U);
    msg.setDestinationEntity(174U);
    msg.p = 0.25728026571676577;
    msg.i = 0.11830126704825228;
    msg.d = 0.22944042622215532;
    msg.a = 0.008591654461089338;

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
    msg.setTimeStamp(0.45482826983802327);
    msg.setSource(55342U);
    msg.setSourceEntity(196U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(2U);
    msg.p = 0.651579159408643;
    msg.i = 0.6896304745989223;
    msg.d = 0.9338057454569836;
    msg.a = 0.2521574818057819;

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
    msg.setTimeStamp(0.9458935850657106);
    msg.setSource(29898U);
    msg.setSourceEntity(62U);
    msg.setDestination(15652U);
    msg.setDestinationEntity(82U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.783894007736035);
    msg.setSource(3027U);
    msg.setSourceEntity(26U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(18U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.961020173732898);
    msg.setSource(61773U);
    msg.setSourceEntity(197U);
    msg.setDestination(62634U);
    msg.setDestinationEntity(22U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.5732322507754832);
    msg.setSource(19473U);
    msg.setSourceEntity(212U);
    msg.setDestination(3034U);
    msg.setDestinationEntity(83U);
    msg.x = 0.9604437339217472;
    msg.y = 0.19853918250172353;
    msg.z = 0.7083935718174502;
    msg.vx = 0.2583939549638463;
    msg.vy = 0.8909743185711738;
    msg.vz = 0.9023309915719713;
    msg.ax = 0.7767607103402956;
    msg.ay = 0.4719134878181688;
    msg.az = 0.5276171444328748;
    msg.flags = 51942U;

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
    msg.setTimeStamp(0.41134564029143517);
    msg.setSource(33878U);
    msg.setSourceEntity(11U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(213U);
    msg.x = 0.05920786194897809;
    msg.y = 0.8989608449002333;
    msg.z = 0.9704674261297851;
    msg.vx = 0.016458989739075447;
    msg.vy = 0.9647403286923338;
    msg.vz = 0.20403413541798499;
    msg.ax = 0.9363821196918924;
    msg.ay = 0.3257344531828027;
    msg.az = 0.6841408483108282;
    msg.flags = 16256U;

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
    msg.setTimeStamp(0.46679972509738266);
    msg.setSource(50588U);
    msg.setSourceEntity(160U);
    msg.setDestination(23354U);
    msg.setDestinationEntity(15U);
    msg.x = 0.04230608497547106;
    msg.y = 0.8627761446245561;
    msg.z = 0.9274301213636587;
    msg.vx = 0.10906107504852625;
    msg.vy = 0.8210604315838211;
    msg.vz = 0.03649583380119137;
    msg.ax = 0.08690252380574737;
    msg.ay = 0.004246080850467182;
    msg.az = 0.9093480246828366;
    msg.flags = 64303U;

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
    msg.setTimeStamp(0.12920403500500544);
    msg.setSource(6006U);
    msg.setSourceEntity(216U);
    msg.setDestination(16199U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5818009709658247;

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
    msg.setTimeStamp(0.034991148774919933);
    msg.setSource(20493U);
    msg.setSourceEntity(170U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(39U);
    msg.value = 0.15964261470682306;

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
    msg.setTimeStamp(0.25292157287849326);
    msg.setSource(22813U);
    msg.setSourceEntity(9U);
    msg.setDestination(47431U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6615131463959786;

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
    msg.setTimeStamp(0.6133300674264875);
    msg.setSource(44349U);
    msg.setSourceEntity(184U);
    msg.setDestination(63365U);
    msg.setDestinationEntity(97U);
    msg.timeout = 35985U;
    msg.lat = 0.6567510896690337;
    msg.lon = 0.038482170840520524;
    msg.z = 0.955835474745182;
    msg.z_units = 46U;
    msg.speed = 0.453239339155857;
    msg.speed_units = 195U;
    msg.roll = 0.19756585224132106;
    msg.pitch = 0.674468831895043;
    msg.yaw = 0.9125118124587891;
    msg.custom.assign("GDYGJTRHSPFLWCTBRKAKMWXZQWUIZUEDKZUQLVOEHPSGYZIAEWDDOCSGKOCXPUJHLWFRBFZLBXEPTVVDNNMVUAQBBFQUPGMZETGZUBFMJDJWBVKAEIMYVXNKNRHLPTJGXZNSCIEIJNHUFEDZQFAJYAKWMIYLHSDVSTJRCUOIHJGPXSLVPNYOFRAYXPQCLQHWMRTVNBWCEVAKYODG");

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
    msg.setTimeStamp(0.6473117227464569);
    msg.setSource(6181U);
    msg.setSourceEntity(90U);
    msg.setDestination(15564U);
    msg.setDestinationEntity(235U);
    msg.timeout = 37002U;
    msg.lat = 0.5576218129423189;
    msg.lon = 0.054244719295552635;
    msg.z = 0.01627778100155519;
    msg.z_units = 27U;
    msg.speed = 0.6888202340612455;
    msg.speed_units = 15U;
    msg.roll = 0.41236066045822195;
    msg.pitch = 0.7580044273719108;
    msg.yaw = 0.48415207749099665;
    msg.custom.assign("FVTXTBXLRARZGHTBDPHNQXHMIYOHPHIFGNIAIJUTQWIVCBELVNCJFLXJUHTREDZMTNAUTVURFEVPSZNKIEUERZSUTEBZBCKGPYXOQLYUWKBGSQYGDMDZCDJMSCLOSVWD");

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
    msg.setTimeStamp(0.8622063725934038);
    msg.setSource(32071U);
    msg.setSourceEntity(231U);
    msg.setDestination(54010U);
    msg.setDestinationEntity(204U);
    msg.timeout = 23320U;
    msg.lat = 0.4119198508132976;
    msg.lon = 0.2315240550189528;
    msg.z = 0.42025783605766076;
    msg.z_units = 161U;
    msg.speed = 0.6145229032075207;
    msg.speed_units = 1U;
    msg.roll = 0.8927631388177201;
    msg.pitch = 0.8736410548563398;
    msg.yaw = 0.6646300734360279;
    msg.custom.assign("MJEIUKYPGZBZJSLACROVKCNQVUTQBZLZPLNPADEUHZDNWCZTPIJOOSEFFGBWXHMIVRPKNTNYJWAKLHBHUJWLMVILDYHTTRFANNUDJXMNRKQFPSLXOHOHELVAUCKYDZQSBAQVGUXGBEQHWIYAUUIZMQVIGSFFWBGOJKFCKCZSJYTLRPDTSRXNMMYQHEXWBAFPFBRNAOQZWVJOYTDMUCDYSMITQGCLGGYTVXRRSFXGSHWCMIJKEOARVPWPED");

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
    msg.setTimeStamp(0.9198249874660736);
    msg.setSource(45134U);
    msg.setSourceEntity(62U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(251U);
    msg.timeout = 46295U;
    msg.lat = 0.7207096641176882;
    msg.lon = 0.9265797463400866;
    msg.z = 0.8723304471631876;
    msg.z_units = 239U;
    msg.speed = 0.017048173218841;
    msg.speed_units = 120U;
    msg.duration = 39936U;
    msg.radius = 0.572170188177895;
    msg.flags = 151U;
    msg.custom.assign("RPHFUZHFBYHERLBCYJNHYAKOVHMKIKXWMRFQMGJQXTSLJZZZUEOJFYXAPZSEJCWKRIRBPZGIXMMRQCPDMIDPWLGXASABKLSBVDFTEWHFXQRCQVOAEULPPNLDNXQGSVAPRNQDYWETIGJTXGETPABRDUSDNKHZPQVFOGVOITXGBGSHBVTKMNMITFNSOYIOUSVJCQYNFYHKSWCJJNCIDDMUWLKUQVHBCOZWLBLAAFKZOUEVDCMETJIOYXTGEYWLN");

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
    msg.setTimeStamp(0.7088168770586243);
    msg.setSource(62370U);
    msg.setSourceEntity(20U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(7U);
    msg.timeout = 34421U;
    msg.lat = 0.9800357456534812;
    msg.lon = 0.9944965848429392;
    msg.z = 0.7344597667641115;
    msg.z_units = 47U;
    msg.speed = 0.6366239340423976;
    msg.speed_units = 191U;
    msg.duration = 3986U;
    msg.radius = 0.49275083954581544;
    msg.flags = 248U;
    msg.custom.assign("QULSPLPTWWPMZOCVUVNVIDHUMYFJAMYNLNYNTETOPZCGOVMWZHYDCKFIAECXCYDECFKYJZAMNKQJKQBBKHHBLIAAIAWXCEQXOIDLRTDYDUXUCVXPIKSFOUWVBIGWDPGBDOJTJVGBAZSVONQFRQPZRWSCUOOLRDTXQEZVHRNZHMLTNYKTHLRENUJEMBSHPASTKQGJHRXQSGMOTBJXIESRMAFJFGPDRUWBMFLZKV");

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
    msg.setTimeStamp(0.43353503950987615);
    msg.setSource(12607U);
    msg.setSourceEntity(128U);
    msg.setDestination(8208U);
    msg.setDestinationEntity(250U);
    msg.timeout = 10886U;
    msg.lat = 0.3093690282775523;
    msg.lon = 0.08389568848548812;
    msg.z = 0.45020587374754406;
    msg.z_units = 252U;
    msg.speed = 0.9105510908719474;
    msg.speed_units = 95U;
    msg.duration = 27728U;
    msg.radius = 0.6256996658373231;
    msg.flags = 122U;
    msg.custom.assign("HTQLPXXHZBVTACHKENLPJNJYPNGXIPOKBW");

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
    msg.setTimeStamp(0.5853706062786175);
    msg.setSource(63721U);
    msg.setSourceEntity(93U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(69U);
    msg.custom.assign("DFPYYTUIKSPUJOOVDUKBRIVQHLGZYGJSUUCCMYOASNBACOIFTRQLTLHYPQOZHVWZIEWYMKPFGVVXJSLJWBDCEFSAOXRVQVGNPLTXGCNCAHOIFFOKTQGMGPITDRWXSIHIZEHDMXTWPSKJYNAJKYBLQAGASSHQGPWKWBEKWBWNTEVBYNNXBEXOPKIRIMGQNRLXERNLRMDRZDDMCDZUKJUCBX");

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
    msg.setTimeStamp(0.48922091928140043);
    msg.setSource(11505U);
    msg.setSourceEntity(129U);
    msg.setDestination(10273U);
    msg.setDestinationEntity(238U);
    msg.custom.assign("NJQCCLBHFHSGZKOTJMXJFIVRDVMXLDLUQVTBYLUWJURMPCDJQYPCHLUYKJOZIAFYFIFAVKSRETOYPAGLISNRNNBBDGVPWSCHRUGVIJQRMDUBZPSOGTYWKJDBSAMKECNCHFZCLODWDLMQQIHITZRZFFAUQEKHPYAHNPKDVGVMNYNIEFXOKGTGFMERAWAYJULXQBBXOG");

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
    msg.setTimeStamp(0.4292373221039695);
    msg.setSource(24841U);
    msg.setSourceEntity(154U);
    msg.setDestination(29954U);
    msg.setDestinationEntity(24U);
    msg.custom.assign("QGHVLDPULOFMUZFAUCHDXIPQNHTCPJUMVQRSACMKXQKRCFLIUJKGLECGVEYKHBOOVJKMVOCJASYYBXVBSPRXSRDZOFNNAVMKDKNWCKYOPGOYIRPTAHIEELXUJAJDYAJZ");

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
    msg.setTimeStamp(0.11594410600135785);
    msg.setSource(14591U);
    msg.setSourceEntity(109U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(49U);
    msg.timeout = 62094U;
    msg.lat = 0.5338557862438388;
    msg.lon = 0.6001180081120724;
    msg.z = 0.706054423839242;
    msg.z_units = 195U;
    msg.duration = 43759U;
    msg.speed = 0.7636970177988591;
    msg.speed_units = 161U;
    msg.type = 74U;
    msg.radius = 0.8535860626060622;
    msg.length = 0.5266001785453042;
    msg.bearing = 0.45371129924723863;
    msg.direction = 147U;
    msg.custom.assign("QHZNFHMAZIXJLHLUWCNKFAEAZQLUBXJBCGOZOGEJOEMIOIFBPEDQMHAPTHXMPNPWNTSOTCCWSSXWPSCMOYBWBJLNRXVU");

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
    msg.setTimeStamp(0.3140284354945334);
    msg.setSource(43510U);
    msg.setSourceEntity(204U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(30U);
    msg.timeout = 65487U;
    msg.lat = 0.29678081684321855;
    msg.lon = 0.10353461940593278;
    msg.z = 0.17230535667621205;
    msg.z_units = 194U;
    msg.duration = 40272U;
    msg.speed = 0.7315970509346731;
    msg.speed_units = 216U;
    msg.type = 102U;
    msg.radius = 0.9127168003401525;
    msg.length = 0.43094164306776706;
    msg.bearing = 0.7136757186464521;
    msg.direction = 183U;
    msg.custom.assign("ZFXPNOKLVMMOSRB");

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
    msg.setTimeStamp(0.7814000433992829);
    msg.setSource(8055U);
    msg.setSourceEntity(186U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(159U);
    msg.timeout = 3609U;
    msg.lat = 0.6330548436156023;
    msg.lon = 0.7907922070182292;
    msg.z = 0.39064241061361105;
    msg.z_units = 179U;
    msg.duration = 8379U;
    msg.speed = 0.3179284478144827;
    msg.speed_units = 112U;
    msg.type = 250U;
    msg.radius = 0.7146769427995446;
    msg.length = 0.0801376168476774;
    msg.bearing = 0.7813246703338683;
    msg.direction = 132U;
    msg.custom.assign("GKEKTOJXOLSCRBQSLWXN");

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
    msg.setTimeStamp(0.9619075950918138);
    msg.setSource(23077U);
    msg.setSourceEntity(21U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(238U);
    msg.duration = 10369U;
    msg.custom.assign("KSVVMTOEFAECSZMEGDSZNCNUEDWPAFMFWCCDYTVPIUXYRQXMBTONOGVFEQGSKDWFIPXXIZXABAVJKRYXYOFZJRTLDGRKKWUYRJOP");

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
    msg.setTimeStamp(0.5881796606670915);
    msg.setSource(58152U);
    msg.setSourceEntity(220U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(73U);
    msg.duration = 32752U;
    msg.custom.assign("VNGMBAWBEEZJTKKKVUQWRJLKGTB");

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
    msg.setTimeStamp(0.8277544959112371);
    msg.setSource(63124U);
    msg.setSourceEntity(222U);
    msg.setDestination(65495U);
    msg.setDestinationEntity(115U);
    msg.duration = 1019U;
    msg.custom.assign("ISLIPHMOCMDWLHPVCVMJLZJTTVPCFGXCYZWBAQQPGSKXEWAJOLCJXRWKZBNYQBLARJNESIGEBWBQSSZZXSTNIXINYRKDDUZ");

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
    msg.setTimeStamp(0.889978728864013);
    msg.setSource(61997U);
    msg.setSourceEntity(231U);
    msg.setDestination(54705U);
    msg.setDestinationEntity(138U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.13681352159785287;
    msg.control.set(tmp_msg_0);
    msg.duration = 23675U;
    msg.custom.assign("ZZRFHPCYXVHOVCSMQXOBESXZDKUVQUIDBDRR");

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
    msg.setTimeStamp(0.886751595343237);
    msg.setSource(35832U);
    msg.setSourceEntity(12U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(71U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5580147682769738;
    tmp_msg_0.z_units = 196U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3638U;
    msg.custom.assign("XUKIDEWTXMUMDQIFCXCIKXCQAWKKSAWROHJDOHTBMMEXIDYUCJIPQUTJHYPMVTMVSXZSCEVKSFRQXKDCURKFRNZJFPVZSEWURKLANBPADYIYWYHREWVBHAZPMFQKPWXDOLGWYAGRHTYAZNNFHOLVQIZJYOMWBXUQAEAESMRQPHLLIBMCGZZGVRQOETVNTDUJGYVNDPLBF");

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
    msg.setTimeStamp(0.7314816217065259);
    msg.setSource(50620U);
    msg.setSourceEntity(7U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(151U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8111934140249563;
    msg.control.set(tmp_msg_0);
    msg.duration = 23729U;
    msg.custom.assign("RGSYAPDRHWGTMNGHXVSHGSDZPTVXADFNSWSGEBXYKTQXKD");

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
    msg.setTimeStamp(0.6673920428911766);
    msg.setSource(6268U);
    msg.setSourceEntity(157U);
    msg.setDestination(57692U);
    msg.setDestinationEntity(17U);
    msg.timeout = 8511U;
    msg.lat = 0.2217627005965065;
    msg.lon = 0.128730727543919;
    msg.z = 0.5577285408435219;
    msg.z_units = 233U;
    msg.speed = 0.75239924433401;
    msg.speed_units = 166U;
    msg.bearing = 0.2997927065216657;
    msg.cross_angle = 0.5416454905465949;
    msg.width = 0.7323891363705235;
    msg.length = 0.02775084999136157;
    msg.hstep = 0.3079617280051725;
    msg.coff = 145U;
    msg.alternation = 216U;
    msg.flags = 8U;
    msg.custom.assign("MSTOOAOVYDTGJGMKBRTNSFHCXVSYQUEMDUHJWSBXKRBDLWUFTBZIGGUTCODIJKBIZFCCMEXAENKTRVUMHXPTRTYJ");

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
    msg.setTimeStamp(0.2199442644518944);
    msg.setSource(2433U);
    msg.setSourceEntity(24U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(163U);
    msg.timeout = 56936U;
    msg.lat = 0.6085784654716627;
    msg.lon = 0.18040154531852048;
    msg.z = 0.8534995152948435;
    msg.z_units = 26U;
    msg.speed = 0.5064036120591437;
    msg.speed_units = 70U;
    msg.bearing = 0.8464921555976057;
    msg.cross_angle = 0.2170556503752491;
    msg.width = 0.13957465438060812;
    msg.length = 0.38126995084356596;
    msg.hstep = 0.22834303872137196;
    msg.coff = 129U;
    msg.alternation = 244U;
    msg.flags = 46U;
    msg.custom.assign("CFPCAEBQUFCZEWTYHXJNOIDKAWFEAADHCURVSEYGCYEKJEWEHNVJGHSZJSUMTTQNKNRROMCMEXKHQVAGRQSWLKPDQOYYTVIJG");

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
    msg.setTimeStamp(0.9767379268471267);
    msg.setSource(19330U);
    msg.setSourceEntity(126U);
    msg.setDestination(58436U);
    msg.setDestinationEntity(178U);
    msg.timeout = 32571U;
    msg.lat = 0.9710058106479335;
    msg.lon = 0.3483716908348925;
    msg.z = 0.7528937867205687;
    msg.z_units = 102U;
    msg.speed = 0.042420566539912;
    msg.speed_units = 245U;
    msg.bearing = 0.21277005471877786;
    msg.cross_angle = 0.6595058539454661;
    msg.width = 0.06016344408941254;
    msg.length = 0.7818519653704981;
    msg.hstep = 0.1963052756125837;
    msg.coff = 24U;
    msg.alternation = 60U;
    msg.flags = 218U;
    msg.custom.assign("SJHQRIBIDTDLPYULHYZNZJZX");

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
    msg.setTimeStamp(0.12286712194773353);
    msg.setSource(32238U);
    msg.setSourceEntity(105U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(71U);
    msg.timeout = 54215U;
    msg.lat = 0.4112600815403059;
    msg.lon = 0.32694016870181986;
    msg.z = 0.2528487314366835;
    msg.z_units = 135U;
    msg.speed = 0.7147133606340244;
    msg.speed_units = 220U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6455187979646386;
    tmp_msg_0.y = 0.8403384354046304;
    tmp_msg_0.z = 0.642861167911886;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YMDEGLEZRCWOSSPTPQBAFBFNSRRXFJDEHQEBOMSWIOKMKGYUFZLBKTTABBWPMDKMYUJKSZJERIDQIXTSAWKBUUWQPVZLSXVORWKXOEJUCGFNCVIQNYFLLHNHLKOHZGTZMDHNTOJVPIRGDRULCUIQXEN");

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
    msg.setTimeStamp(0.48666878694779114);
    msg.setSource(27858U);
    msg.setSourceEntity(167U);
    msg.setDestination(62616U);
    msg.setDestinationEntity(72U);
    msg.timeout = 52612U;
    msg.lat = 0.8259599636078296;
    msg.lon = 0.7764077104913585;
    msg.z = 0.08417747712538026;
    msg.z_units = 9U;
    msg.speed = 0.5066446784257543;
    msg.speed_units = 240U;
    msg.custom.assign("YJOBRYJPKQOUZDGUBGYUKBNMAUHTAKTABFJPZJOAQWYVDFXFZLHBMMPXHQFVZNOHVREZE");

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
    msg.setTimeStamp(0.8125629640899885);
    msg.setSource(33621U);
    msg.setSourceEntity(46U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(18U);
    msg.timeout = 2388U;
    msg.lat = 0.9633277809291528;
    msg.lon = 0.7564086644349243;
    msg.z = 0.27361656234460086;
    msg.z_units = 242U;
    msg.speed = 0.8115062491926464;
    msg.speed_units = 183U;
    msg.custom.assign("ROOJWSRYTVELHWEHKUVPKUFWFQIOBQZKHNOKLNIYHYGSGQJWSFGZBHSBLXMRJFMQQZADHZAKYJZIMTUYTWLVCRCWGCKXRZICNSAOYAOFQINPVZPCSBYXDDMCPRIOXXOSDFSWEBCKEVVHGQJDNPEENJGR");

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
    msg.setTimeStamp(0.3900642806410549);
    msg.setSource(19132U);
    msg.setSourceEntity(21U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(2U);
    msg.x = 0.3983068592471658;
    msg.y = 0.575052341614138;
    msg.z = 0.9952130624312481;

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
    msg.setTimeStamp(0.9544559560692892);
    msg.setSource(20965U);
    msg.setSourceEntity(227U);
    msg.setDestination(38842U);
    msg.setDestinationEntity(250U);
    msg.x = 0.36828466264080373;
    msg.y = 0.6700280938970563;
    msg.z = 0.4056614285024366;

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
    msg.setTimeStamp(0.11328689352349819);
    msg.setSource(22774U);
    msg.setSourceEntity(138U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(79U);
    msg.x = 0.2358589833323319;
    msg.y = 0.8830006678609308;
    msg.z = 0.16107044354611055;

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
    msg.setTimeStamp(0.8346881558837378);
    msg.setSource(10929U);
    msg.setSourceEntity(142U);
    msg.setDestination(32647U);
    msg.setDestinationEntity(249U);
    msg.timeout = 56436U;
    msg.lat = 0.5811985123584333;
    msg.lon = 0.8406832843541652;
    msg.z = 0.6787016831408978;
    msg.z_units = 195U;
    msg.amplitude = 0.37057584209323213;
    msg.pitch = 0.5660106519013745;
    msg.speed = 0.09193926241592665;
    msg.speed_units = 69U;
    msg.custom.assign("GJNXXTXVRUGOEHMMKESEAQQOBPWJQINAIUCLYQEEUOBH");

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
    msg.setTimeStamp(0.580367237544416);
    msg.setSource(5852U);
    msg.setSourceEntity(139U);
    msg.setDestination(14291U);
    msg.setDestinationEntity(121U);
    msg.timeout = 37474U;
    msg.lat = 0.48829962262276405;
    msg.lon = 0.83563985207653;
    msg.z = 0.08566569406516;
    msg.z_units = 117U;
    msg.amplitude = 0.11588298392088114;
    msg.pitch = 0.10360689975382298;
    msg.speed = 0.08242320601517972;
    msg.speed_units = 190U;
    msg.custom.assign("BPGQLTQOGQCWHTUMRGEBEHLDAXTAUOEGGUUTBDQREXHPZDPSAFXDO");

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
    msg.setTimeStamp(0.3040573319091263);
    msg.setSource(13092U);
    msg.setSourceEntity(1U);
    msg.setDestination(64071U);
    msg.setDestinationEntity(52U);
    msg.timeout = 42783U;
    msg.lat = 0.2739335721294708;
    msg.lon = 0.4861012397192416;
    msg.z = 0.40521831127534014;
    msg.z_units = 211U;
    msg.amplitude = 0.3315455859417792;
    msg.pitch = 0.8764580581456153;
    msg.speed = 0.5155484451487206;
    msg.speed_units = 223U;
    msg.custom.assign("FTSZZBUFIBCUNAWMTWLVQLKHMZCLBSTWPSDJPETPGDKOCBVOYKEDITPBUNRIMLDFBKWPBRREEXZHVUWZNNVTWFRCYTVKFLNGSJJCYBPMTRJRXMQGQZH");

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
    msg.setTimeStamp(0.6869679776995722);
    msg.setSource(1917U);
    msg.setSourceEntity(98U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.458589277072996);
    msg.setSource(23077U);
    msg.setSourceEntity(8U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.7314515746637766);
    msg.setSource(36715U);
    msg.setSourceEntity(201U);
    msg.setDestination(763U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.18440693980339806);
    msg.setSource(43443U);
    msg.setSourceEntity(246U);
    msg.setDestination(24496U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.10656459975061094;
    msg.lon = 0.6548650751115291;
    msg.z = 0.53138574741965;
    msg.z_units = 217U;
    msg.radius = 0.758505782295662;
    msg.duration = 19980U;
    msg.speed = 0.9571582053182317;
    msg.speed_units = 119U;
    msg.custom.assign("RAYNKRRBITMUNULZFFQWMASOUVYSNRCHYOVJKWYOBNPKGFCEWGOEPSQROXIUXRKAQALQOCFIBFVMWOIDWWJJHOTDIQNEWBHUSTKEBAMUOJAKCSMQCZYBSNICSLDNPFUEZZXLCZYEQVATVBUDATRIEYLMEJQNTKBMLPZYRPCDKFIMDBPMDWJHIZHDVWFSUZKREPQGKTLHQXYXLPANTJUGZIHFJ");

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
    msg.setTimeStamp(0.7265369542479904);
    msg.setSource(3364U);
    msg.setSourceEntity(164U);
    msg.setDestination(25393U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.33209729988833225;
    msg.lon = 0.519317969166256;
    msg.z = 0.42752496614777347;
    msg.z_units = 165U;
    msg.radius = 0.24523473460364642;
    msg.duration = 44968U;
    msg.speed = 0.898914872601272;
    msg.speed_units = 171U;
    msg.custom.assign("OLCZQIFYUUUJZRIEXMULVWZHRDNVKQZEIWWJHSNHVPLEYU");

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
    msg.setTimeStamp(0.534861091449647);
    msg.setSource(15059U);
    msg.setSourceEntity(134U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.2777722526740771;
    msg.lon = 0.054554269192225946;
    msg.z = 0.5881738046786598;
    msg.z_units = 150U;
    msg.radius = 0.2709150644211247;
    msg.duration = 8039U;
    msg.speed = 0.15443533466279113;
    msg.speed_units = 141U;
    msg.custom.assign("XNCQXTNBWVBTAWCDOPMWAULJKXPEKSCGDVIPGDBYBDVYJHVURIOOTGCOXIERTWRQBAKKNTAIXLMEHACYHSYLDJRIPPQKQRSURIXORGYZDAUDFYHLOXUKOCPNVRJKPLVNFZHSWUKFSQLTJYMUGG");

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
    msg.setTimeStamp(0.5704113094169198);
    msg.setSource(58926U);
    msg.setSourceEntity(221U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(60U);
    msg.timeout = 54793U;
    msg.flags = 188U;
    msg.lat = 0.8177718939585504;
    msg.lon = 0.21246213465840136;
    msg.start_z = 0.7843167191867059;
    msg.start_z_units = 98U;
    msg.end_z = 0.9067574634518443;
    msg.end_z_units = 144U;
    msg.radius = 0.742616093318382;
    msg.speed = 0.24228638211564202;
    msg.speed_units = 185U;
    msg.custom.assign("OELVVCDPILRTMELANTBWBUZLWTFMHSVJKQFHLLDIIMYYVJKKBXUBFGTGSNONEDUJVGYMSHKLYYVVBFFOMXNGWDDGMYCSGWNFWAQJPBQZIIDTWHWXNHOEJSSOEELXHQO");

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
    msg.setTimeStamp(0.9511864456163243);
    msg.setSource(44643U);
    msg.setSourceEntity(203U);
    msg.setDestination(32067U);
    msg.setDestinationEntity(172U);
    msg.timeout = 27399U;
    msg.flags = 146U;
    msg.lat = 0.469620362284521;
    msg.lon = 0.5705328339224368;
    msg.start_z = 0.8515394707793996;
    msg.start_z_units = 3U;
    msg.end_z = 0.4556396869891408;
    msg.end_z_units = 214U;
    msg.radius = 0.11933669990492912;
    msg.speed = 0.7805732839266758;
    msg.speed_units = 160U;
    msg.custom.assign("AITFIPRHMCDGDVXJVKURWCNJBZBHNSKZZQYDENZFKRCOUWIMFKORMGBJWTTQCUGEEFQOUHSXGKCVKCUXXRDLGEPQNUVFYVLFCIPMYIQLPTBQAIDGHBWWXFDEILNNAHYJYRQNPAYBLQVKGARHOWVHRIVVLEHSOZNUOXECCFMOEPXKZYPZYYASLOWPHFJILIXTJTDKBPWMSOBJCKDAEPZTWYXNATZORBMTXNSQUMJADLTSUHWJGFEGQAUZLS");

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
    msg.setTimeStamp(0.07909834038255137);
    msg.setSource(9294U);
    msg.setSourceEntity(165U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(230U);
    msg.timeout = 37622U;
    msg.flags = 23U;
    msg.lat = 0.45866678311044384;
    msg.lon = 0.7459652554628615;
    msg.start_z = 0.11326523908551267;
    msg.start_z_units = 173U;
    msg.end_z = 0.14162638930593985;
    msg.end_z_units = 209U;
    msg.radius = 0.9189139363846126;
    msg.speed = 0.1556797662603554;
    msg.speed_units = 140U;
    msg.custom.assign("ZCZEDWVOHFENHCXEIIFHTRFCWWMKQADEZEKUAUXATNSQKYJDDGBVFUBLZYLLHABYKPAJSKFXAEXYBINSMMWJOVJOCBBPYOVTGXKRCJQZSSNPYBAIHAJ");

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
    msg.setTimeStamp(0.646351255841748);
    msg.setSource(43491U);
    msg.setSourceEntity(170U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(110U);
    msg.timeout = 12585U;
    msg.lat = 0.34362607118503274;
    msg.lon = 0.38770769342405087;
    msg.z = 0.3213466197187247;
    msg.z_units = 150U;
    msg.speed = 0.7163729419813166;
    msg.speed_units = 172U;
    msg.custom.assign("UYVCDTCNTVFGJQBDYNDXTRXJKAPATYVEPZNJLGWOQFWBOXWRPHNFHVRQIENMPCX");

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
    msg.setTimeStamp(0.031485322644094205);
    msg.setSource(53890U);
    msg.setSourceEntity(200U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(98U);
    msg.timeout = 41536U;
    msg.lat = 0.4277273122509727;
    msg.lon = 0.6446589726005225;
    msg.z = 0.5298329230987967;
    msg.z_units = 7U;
    msg.speed = 0.7097089423784646;
    msg.speed_units = 46U;
    msg.custom.assign("YZGCKOYMGTJWZQZSBBWHQQSJGCOMYNHIKAWPDQTRVSCCLNOWFITVZGWSKIJLMVLGFUZCLEPICXLNPENRFGDIFFSYDEODOMSVPPRIGOHKBMSVNNTOHBVGTFARIGHCYUWPPUNUDDUIZEBXALRHZRPKEDXCEMBXUPWZXTDOUFGFFYYXUBISQSHWVMDR");

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
    msg.setTimeStamp(0.3859557907790546);
    msg.setSource(50316U);
    msg.setSourceEntity(32U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(211U);
    msg.timeout = 46936U;
    msg.lat = 0.33916072872763026;
    msg.lon = 0.8497741383509083;
    msg.z = 0.7936215989536093;
    msg.z_units = 10U;
    msg.speed = 0.368577468381475;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.46607079767702286;
    tmp_msg_0.y = 0.37683334475595476;
    tmp_msg_0.z = 0.20983502986960378;
    tmp_msg_0.t = 0.29405665976997486;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WKKBWFRMLJOFYWOBTETQQMMHLXNYGSGKNKSVDTHVRNSSAQQIYZZCUPIYKIGLETROXOUUNWJBGGLUXN");

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
    msg.setTimeStamp(0.0395901821282052);
    msg.setSource(35428U);
    msg.setSourceEntity(228U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(167U);
    msg.x = 0.5569344942360624;
    msg.y = 0.8539312229093883;
    msg.z = 0.4339179952197225;
    msg.t = 0.5219834170241507;

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
    msg.setTimeStamp(0.869233428726246);
    msg.setSource(21370U);
    msg.setSourceEntity(227U);
    msg.setDestination(61943U);
    msg.setDestinationEntity(184U);
    msg.x = 0.3817485215904912;
    msg.y = 0.2826521317566133;
    msg.z = 0.6573720101760745;
    msg.t = 0.7217296936732224;

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
    msg.setTimeStamp(0.5032695027709393);
    msg.setSource(22809U);
    msg.setSourceEntity(101U);
    msg.setDestination(13100U);
    msg.setDestinationEntity(197U);
    msg.x = 0.0005903465535637142;
    msg.y = 0.34863786805554653;
    msg.z = 0.8235182805383877;
    msg.t = 0.9025030338826034;

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
    msg.setTimeStamp(0.868496909823251);
    msg.setSource(8993U);
    msg.setSourceEntity(186U);
    msg.setDestination(39106U);
    msg.setDestinationEntity(169U);
    msg.timeout = 52607U;
    msg.name.assign("YHLJJTYSBWRLBZKLASMMYSZXRHFKWZSHTPYHIAHNTQVQCMAVNKSYPFRBQIAUIAGIOGKDXJRFFLEMRFNEDXQJUCNYFJRVUNDQFOEGCXIBGTKGLXQZZMGWVIOWEENGAPIBUHWOWKLZJRRJWDTAOTOXWAEPISKLRVUUCRUMGHDFLMNPFWECYIZXYTXMQPEGUOATHDNSQVXYVPQJVXOTQFCOBDYMGEVCSSEKJ");
    msg.custom.assign("RAHYBEXUHKQPDNUATJONKFFSPARLAUWYOJQQOMDRCUMMMEWFDXGTOOLEDTLWNBFBUBZKCNAJMVTYJYJSGSIIRGNKYACZNNJKSVBUDQXXFGDEFKPSIQGCSIBBIOALEZWICGBUCPOATDHMYWOMVWCSEKBQZHELZNVATOKJPPQCHQEDVHJLQGVXXEXYYPRFLHVWYGSQPMXERWSCNGWTGRSFBHHZPPT");

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
    msg.setTimeStamp(0.6609153787624524);
    msg.setSource(35453U);
    msg.setSourceEntity(108U);
    msg.setDestination(31951U);
    msg.setDestinationEntity(14U);
    msg.timeout = 43993U;
    msg.name.assign("ZVYVWFQUOFOEVOPBNDCS");
    msg.custom.assign("IUXTTUARNDHRJGMWFVECGJOPZJAQMMROGXRROVNEZFLKYTSDDWLTNHDPQPDFQIYFABJFLSWSSRZGGINCDC");

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
    msg.setTimeStamp(0.08858244688721362);
    msg.setSource(58604U);
    msg.setSourceEntity(188U);
    msg.setDestination(40274U);
    msg.setDestinationEntity(230U);
    msg.timeout = 25050U;
    msg.name.assign("VLXYRWDVBQNPUWJHRXLPKXYREXPCAUKKWFKSTQWDWVICMBCRXWNCYPWMIWADSSZBNNVRUHJACQOLHNSROZNGKQEIKBJFDLTYXSFICBHUKHUMFQBZGHFCAYIIZEDYJQKYZODYMTTDZOGWIUAVWUCXHNDEUSBPEOZOVZOKTEGMSVFNGTBMMSXVTJDLGBLJLTO");
    msg.custom.assign("BRMRGLADYUGKQXHYCFDXUPWIUPGWDZYKSNVPRDCURWGEPDRCXMRRNHGCUDBSUASMUPGFLGXZVQWPQVHTFTAZEOVUOKQWUAZDLNNCLHSJYJENZQJQKKMKJDVSICKEDMEVHJSIQNEQRLBWLWMWFOTVYLTFIYSLITOM");

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
    msg.setTimeStamp(0.9019799183922783);
    msg.setSource(1706U);
    msg.setSourceEntity(26U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.17436121526606807;
    msg.lon = 0.9128961378920596;
    msg.z = 0.669436411410679;
    msg.z_units = 18U;
    msg.speed = 0.6543705407728745;
    msg.speed_units = 135U;
    msg.start_time = 0.27221383471147687;
    msg.custom.assign("ZKNPWFRZSRWZDEKKPRINJJRVUQBYNSHOHHCGRUXBGNCQFCCSSDZJZLLXLXCMNVVZJEFGGFPRCECYLEJHILVAFSEJVYXQSKUPOUXWACSAUDAMYDYQVRTMPVJPTBHMDHGQLFZTLIQOPBBDLHMILEABYNEJOIOEFA");

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
    msg.setTimeStamp(0.019004608155729685);
    msg.setSource(922U);
    msg.setSourceEntity(220U);
    msg.setDestination(18543U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.012499172493705135;
    msg.lon = 0.664068283332247;
    msg.z = 0.4708502213209259;
    msg.z_units = 10U;
    msg.speed = 0.3305718727349828;
    msg.speed_units = 192U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5066003936141853;
    tmp_msg_0.y = 0.37531961983250284;
    tmp_msg_0.z = 0.3346633662716457;
    tmp_msg_0.t = 0.5517664936677936;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 28376U;
    tmp_msg_1.off_x = 0.38339698990117954;
    tmp_msg_1.off_y = 0.5455549438122641;
    tmp_msg_1.off_z = 0.7130884207423603;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6406215411875673;
    msg.custom.assign("RYPKMVXBGXZPCRWEIFDBVLBBLUYKAGPWRHTJQIIWCVNFOMCQNOVGVHEMALQYOQJTNVNSSYCHDYZZIWKJHDIFZSUPHSNAOHWRUOAQWKJQUAAZHLJPSJDKVKLUJUSDGLFDBZGPRMXGGKWR");

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
    msg.setTimeStamp(0.28818901684114706);
    msg.setSource(27380U);
    msg.setSourceEntity(30U);
    msg.setDestination(28720U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.5254450068649683;
    msg.lon = 0.12889343294111166;
    msg.z = 0.610328308853982;
    msg.z_units = 194U;
    msg.speed = 0.7490588059582487;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3722490664950343;
    tmp_msg_0.y = 0.648606014485963;
    tmp_msg_0.z = 0.7036104350574122;
    tmp_msg_0.t = 0.5899473794781958;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.3306922970047079;
    msg.custom.assign("ONKGGJHIPQGLKRKCFFVRQWTEOOATEEFFFVSXWYZMMRYTXSXWYAKPTHNLILOFBUDUWHDGJRXSOHZJOTYCIUBJGVACGSRQXNLEQRKEQBOYGKDDXHPACDVIUET");

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
    msg.setTimeStamp(0.011793439828911678);
    msg.setSource(62987U);
    msg.setSourceEntity(225U);
    msg.setDestination(8196U);
    msg.setDestinationEntity(111U);
    msg.vid = 30813U;
    msg.off_x = 0.4169909439604458;
    msg.off_y = 0.7864017032168218;
    msg.off_z = 0.6198065612780642;

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
    msg.setTimeStamp(0.3899664742362817);
    msg.setSource(13179U);
    msg.setSourceEntity(38U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(209U);
    msg.vid = 706U;
    msg.off_x = 0.2709407204490397;
    msg.off_y = 0.059256446481741;
    msg.off_z = 0.8282813032931532;

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
    msg.setTimeStamp(0.8884565970326828);
    msg.setSource(37506U);
    msg.setSourceEntity(45U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(205U);
    msg.vid = 7416U;
    msg.off_x = 0.6730392547146948;
    msg.off_y = 0.9602726359681469;
    msg.off_z = 0.0035164442664668005;

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
    msg.setTimeStamp(0.08606742508503906);
    msg.setSource(46575U);
    msg.setSourceEntity(212U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.5495307565010595);
    msg.setSource(64920U);
    msg.setSourceEntity(145U);
    msg.setDestination(23199U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.23714344734495618);
    msg.setSource(7184U);
    msg.setSourceEntity(168U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.2823700313359704);
    msg.setSource(17410U);
    msg.setSourceEntity(181U);
    msg.setDestination(14047U);
    msg.setDestinationEntity(204U);
    msg.mid = 15302U;

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
    msg.setTimeStamp(0.45997096626658573);
    msg.setSource(14937U);
    msg.setSourceEntity(130U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(253U);
    msg.mid = 37758U;

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
    msg.setTimeStamp(0.6480971603522959);
    msg.setSource(24063U);
    msg.setSourceEntity(201U);
    msg.setDestination(52485U);
    msg.setDestinationEntity(21U);
    msg.mid = 18125U;

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
    msg.setTimeStamp(0.0753453165980289);
    msg.setSource(2328U);
    msg.setSourceEntity(179U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(164U);
    msg.state = 150U;
    msg.eta = 18853U;
    msg.info.assign("VGIGTIVPHYWITCJCJEPWUHAPDMVXZCMOBNSBHERNODNGDTUUSQFQSTAEYWVFQXMDIFQBJLJHWXLZOANWPHOXXFJFCFAFKEYASANDPZIQKUULNMOMHGZJYCEMQKXDAJZBXHLKFVBRNCPWHRSAYJZPXYNMUEVGLIGKYSMEYBMEQDVWITHLOSBQLPOYWKKRULFBUGTQSYDZIBQRZ");

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
    msg.setTimeStamp(0.19506188695338622);
    msg.setSource(57215U);
    msg.setSourceEntity(237U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(184U);
    msg.state = 113U;
    msg.eta = 19402U;
    msg.info.assign("COIQYVWLRCYQITTZNMVUYJIVRYNKXQWWRDESPYTLJTXWBOUTTRLVGNVXSHYGCADSUDDBKZKHWAJWAJBGREMJAVMJHMOCSWKKLGZWFTHGPPMCIPUGQGLHDAFXIMCSQZHEEFTLQKHOLJZECNZRBWUEPOZUALBSQAQCATDKPAIRFDUOLIAIXVMXEYLQQNSKNRCSMJGGBDOBMCVVEBPFNBHKTUPZHSIHXIYSENUGNFZYBFPFOJOFXD");

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
    msg.setTimeStamp(0.5486596309226945);
    msg.setSource(31239U);
    msg.setSourceEntity(130U);
    msg.setDestination(16923U);
    msg.setDestinationEntity(184U);
    msg.state = 5U;
    msg.eta = 64828U;
    msg.info.assign("YJNKFYNAEDOGRZVCPRBYOCAUSECDEIUOAKASHZIUBJBAKEWXLLZVWZYQWTILIKTZPUWRSAJVTZCMTQLHRLSYMSDXWWOZFJRYITDRGVHRJEFTHYFCSCJINHARIUYLHMOKTIUNXCHBWQBAQMFUMJUPKGSZPMCGGZNPBLLHOFGTJDFMQ");

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
    msg.setTimeStamp(0.008435680341232321);
    msg.setSource(7773U);
    msg.setSourceEntity(62U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(16U);
    msg.system = 48312U;
    msg.duration = 30305U;
    msg.speed = 0.33120435436466333;
    msg.speed_units = 123U;
    msg.x = 0.07835009615155353;
    msg.y = 0.26042334828319524;
    msg.z = 0.7107860117630038;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.8174199362620631);
    msg.setSource(3725U);
    msg.setSourceEntity(143U);
    msg.setDestination(25215U);
    msg.setDestinationEntity(66U);
    msg.system = 55863U;
    msg.duration = 30906U;
    msg.speed = 0.2719328360403708;
    msg.speed_units = 248U;
    msg.x = 0.24157184152367916;
    msg.y = 0.9869495940651724;
    msg.z = 0.7322632057470496;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.346964668885011);
    msg.setSource(40271U);
    msg.setSourceEntity(117U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(12U);
    msg.system = 33890U;
    msg.duration = 6191U;
    msg.speed = 0.9873570383769981;
    msg.speed_units = 89U;
    msg.x = 0.6825156048849563;
    msg.y = 0.3191402688755235;
    msg.z = 0.043971361180423996;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.2466055337753903);
    msg.setSource(11556U);
    msg.setSourceEntity(76U);
    msg.setDestination(1307U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.1626026995222979;
    msg.lon = 0.45277858725010167;
    msg.speed = 0.15287447511546737;
    msg.speed_units = 250U;
    msg.duration = 57328U;
    msg.sys_a = 34270U;
    msg.sys_b = 21658U;
    msg.move_threshold = 0.8798255460117818;

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
    msg.setTimeStamp(0.7588698829528974);
    msg.setSource(14159U);
    msg.setSourceEntity(30U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.8654403956531779;
    msg.lon = 0.017428470079482006;
    msg.speed = 0.6645098490451226;
    msg.speed_units = 74U;
    msg.duration = 36463U;
    msg.sys_a = 30742U;
    msg.sys_b = 43626U;
    msg.move_threshold = 0.37171767691326585;

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
    msg.setTimeStamp(0.22494876665804941);
    msg.setSource(25243U);
    msg.setSourceEntity(177U);
    msg.setDestination(50754U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.5064768846340364;
    msg.lon = 0.4217365826254027;
    msg.speed = 0.41517262211833994;
    msg.speed_units = 245U;
    msg.duration = 46256U;
    msg.sys_a = 45289U;
    msg.sys_b = 38167U;
    msg.move_threshold = 0.14285598885090534;

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
    msg.setTimeStamp(0.42929624904783736);
    msg.setSource(14708U);
    msg.setSourceEntity(211U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.6777032602050496;
    msg.lon = 0.23043387220121736;
    msg.z = 0.446638729438675;
    msg.z_units = 2U;
    msg.speed = 0.8985989362437609;
    msg.speed_units = 157U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8126220527953143;
    tmp_msg_0.lon = 0.4003101896384744;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DVADCAFGBEFFEWWEQGRPWABPHZXKIDYNCMWJPLRUTUJARQHBYBYJXVOSBZVYNBE");

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
    msg.setTimeStamp(0.5328334562206339);
    msg.setSource(33640U);
    msg.setSourceEntity(208U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.33527690897100837;
    msg.lon = 0.0714090845140899;
    msg.z = 0.8423801668758018;
    msg.z_units = 89U;
    msg.speed = 0.8252105091967366;
    msg.speed_units = 98U;
    msg.custom.assign("SIWUCLFZGFURYTJJTYCUQIC");

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
    msg.setTimeStamp(0.5576997981741655);
    msg.setSource(5200U);
    msg.setSourceEntity(239U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.6684598683442637;
    msg.lon = 0.3916169388572751;
    msg.z = 0.7315006936015512;
    msg.z_units = 87U;
    msg.speed = 0.38771460801843405;
    msg.speed_units = 76U;
    msg.custom.assign("BIONZTKAPMDJDUFSPPOKZNOLTMOJEZJLMXYBWBACAEKLWPYAIZRPYMYNNUHTXGIHQPWBDVFBWSKUDPOPOGINCZKXHTISXYUEBIZAPELTQNGKGVNHQGJXELTKIREKCFQCCWRQWQBDLXFBCRSTRCLGSKUYTULDNQJIFJEPJOMCEYWGHJEUBV");

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
    msg.setTimeStamp(0.5400296778957109);
    msg.setSource(6676U);
    msg.setSourceEntity(168U);
    msg.setDestination(48230U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.06318372542626971;
    msg.lon = 0.4984226091101347;

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
    msg.setTimeStamp(0.5155941498114437);
    msg.setSource(47829U);
    msg.setSourceEntity(223U);
    msg.setDestination(27137U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6706599207507261;
    msg.lon = 0.2040578080271651;

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
    msg.setTimeStamp(0.7473085341099028);
    msg.setSource(59593U);
    msg.setSourceEntity(123U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.23093905731114606;
    msg.lon = 0.9868338094175851;

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
    msg.setTimeStamp(0.7398917924865122);
    msg.setSource(47715U);
    msg.setSourceEntity(55U);
    msg.setDestination(10414U);
    msg.setDestinationEntity(183U);
    msg.timeout = 1974U;
    msg.lat = 0.0829011832305524;
    msg.lon = 0.5496207319632415;
    msg.z = 0.2892073971545007;
    msg.z_units = 206U;
    msg.pitch = 0.2980446031236881;
    msg.amplitude = 0.41464593693815976;
    msg.duration = 39796U;
    msg.speed = 0.7403281967820494;
    msg.speed_units = 193U;
    msg.radius = 0.060697859822070654;
    msg.direction = 50U;
    msg.custom.assign("YVCWTNPYCHICXOVCGJLDWLVOQECSKBGNPNZVDWEUTSEYRFRTXIHQVSTGBVWRNDGLDGSEATZUUNEHMRFJATGQWYBRMLGDOIBYPJBBHKDWHLZOITMSNOYAPIVNKJUQKPYTBPXZCUB");

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
    msg.setTimeStamp(0.08289839552075562);
    msg.setSource(36184U);
    msg.setSourceEntity(244U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(249U);
    msg.timeout = 37167U;
    msg.lat = 0.4581217310832302;
    msg.lon = 0.4161306493640772;
    msg.z = 0.46190557531213283;
    msg.z_units = 144U;
    msg.pitch = 0.6916684439510602;
    msg.amplitude = 0.07244809370545602;
    msg.duration = 63699U;
    msg.speed = 0.580112241831816;
    msg.speed_units = 39U;
    msg.radius = 0.4227129829119993;
    msg.direction = 60U;
    msg.custom.assign("OAIPZRXJGUYQVJEXWNKKFINZXHLSGMTSDQBWGVIHTPDVTIPDEHMGOFXFWN");

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
    msg.setTimeStamp(0.23108117146825768);
    msg.setSource(46109U);
    msg.setSourceEntity(189U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(28U);
    msg.timeout = 28572U;
    msg.lat = 0.9203592276268514;
    msg.lon = 0.54639079327927;
    msg.z = 0.39177878779840103;
    msg.z_units = 140U;
    msg.pitch = 0.5881181223185568;
    msg.amplitude = 0.41947993569730535;
    msg.duration = 53274U;
    msg.speed = 0.8349364165441002;
    msg.speed_units = 195U;
    msg.radius = 0.35550472577024117;
    msg.direction = 195U;
    msg.custom.assign("VPHJIQUDVGJTUVMCOUZXGLYYTNGQZALWIBIOABJUQACCWM");

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
    msg.setTimeStamp(0.7577948296052816);
    msg.setSource(43625U);
    msg.setSourceEntity(168U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("SMTISWEMPULVZNHKYWDPJKRHAMEFGSQSYJIDBDXJFGFZAYE");
    msg.reference_frame = 182U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21904U;
    tmp_msg_0.off_x = 0.8552581174156864;
    tmp_msg_0.off_y = 0.380175414014551;
    tmp_msg_0.off_z = 0.8543573961505381;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UJOOPGRVKKLZBCVMJIORGJMGNLLPCSDZTYNDDIJCFFIIHOSQXYLDIXTOEXYRWHCDAWXTERSKPFBLFNZTNTZOTELLMVOZRKSFHFVTUNZFIWUBJESEGVGUABRSYYYADHMVUIZVDNHKIBTBOWHGREQEFYLOQHXSPAPKTZGLKZYQ");

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
    msg.setTimeStamp(0.4934238036516241);
    msg.setSource(52773U);
    msg.setSourceEntity(139U);
    msg.setDestination(62671U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("KMXWSCAXROGAMQDXRNSKVZGIHQSPGFYAGVHEZWABQGWZFJBVDXMTCZYHZINDQCAVMQLEKISFBIEEUHTUJLKCSAKVTHTKUCJBXDAATUBNGTJEWHJGAEZYUWIZLIURWORWHLNYZGEWPNDXMUITVYPDWPRFHIZFBPJYLLKPDCXXNHRQXCQPEPELBQFUM");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63449U;
    tmp_msg_0.off_x = 0.5983943621140251;
    tmp_msg_0.off_y = 0.362906541386374;
    tmp_msg_0.off_z = 0.4616642417683773;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IYWWBGUSCVHBILYLWMQVCBDZOLBGXJLDZCNHKHBWJXFIESWGAYMAATGSTUNTRHWIGKCQXVSNFZWFESFMJKURYZMOTNMRGXWSNMDIOMGENAYVYWYZBZKLQTXIFFJNAAXQUBIOWHDGQANJJAQSSVPNZUHQAOXKDVDBEECFMRBZYMQDELCCTPIFYHLRPXZGPOJPSDTJKIKXEUJEVUUREUIJKBYQRELVTNKOPCDSPVHDKZQTRLURCOHM");

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
    msg.setTimeStamp(0.36863314006417947);
    msg.setSource(10326U);
    msg.setSourceEntity(171U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("MNVRJLXSIDAQGKMCHBULHHDALONMOYASLDMKJPKSSFZVRPCIBYUKTQMOWPULEXOCCQZJGGDAYZXXYTCAIBNMQHRVMHPJPKTEZRPTPUBJGBZLSPMQUTIPIBAYFIBOOLVNNVUUTXREBHZYXZENMRETDSCWFEFFEOAFENOTVBJNEHSXWQONJUWRLEGLQKOYFCWSYYSDC");
    msg.reference_frame = 112U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49742U;
    tmp_msg_0.off_x = 0.1779021345113112;
    tmp_msg_0.off_y = 0.8367549040807757;
    tmp_msg_0.off_z = 0.09887965447566627;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OMMAAJWZSWWCBRRKERHSKJVNAINZNDAIEKLEIUTHTBAEXZHQTQFTMRAGWIUPOPSVSDHHWHXOXQXYMYFGBBNZLJADHPAHUVOTLPKFDCVGVBNENDJCCFOJTPBRYLGUVUVYDCDRTCIOGEEUGESUKIXIMFPJNWYJCWHGNSTERSUOVAADKFQMZKNYQK");

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
    msg.setTimeStamp(0.9144640249191155);
    msg.setSource(8043U);
    msg.setSourceEntity(87U);
    msg.setDestination(5559U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("WNAXNWJGVDNWAEIMHRSEUMSYKSLYKSXJAFKAKCSNELUAOEQJHWUCGHPNXHKLRCQWGCABPECOETWUZFPUVMYGMOSXXPGMQWVXZFBGEHBDTRSNHVBOBCAKVXXVKLNJJJUZIIRRKKWPIMXIQCQTSAGDMFAFUPDLMVJBYCRYBTITYTWOXMZYUDOYDJDFYZYSHIHZIWRPJQTCPETDSFRFKHDQBMLZQGTPEDZOCLNGEOP");
    msg.formation_name.assign("JHQOBVPZINJXLPEPOANDGGHWVGIVDRSBFDPYZHKDVNVIWRJOIJHTKHPOKFOPERQYGFTXFYHMFNTUBZXDZRHINVALUYETTMOLVWAITYCUYFKDXEBLCAAFGNZMRMYCSYCUZAGRLCEQQSOCUEPYWDZRQJHTACRPMBVOWUZKHJVRFNLSKOBYGMIXZDQEZQKSPLKMSGKWJFLQENNW");
    msg.plan_id.assign("LOOPCSILXANWVDVKBZKJUXKJMTYGSULJSMPLVBXIHHQPIUHGXRWFHBRDUEXFUIJHATLCHNNDGSYBGLWKDOYYONUFEOAAKROVJVULDNJTMSVEYGPAZMXOHFLZGZRCVAZSWTOXEGTQJW");
    msg.description.assign("GNFPXBERKCPNCIBNGMQTREQEDWLGXVLSKYCMOVQOFLAXOLYKXDAZMDDKQYBDNPTSFITSO");
    msg.leader_speed = 0.7707024838752196;
    msg.leader_bank_lim = 0.41634234944146475;
    msg.pos_sim_err_lim = 0.8797680343300459;
    msg.pos_sim_err_wrn = 0.9655661267704404;
    msg.pos_sim_err_timeout = 22011U;
    msg.converg_max = 0.9940280681451439;
    msg.converg_timeout = 727U;
    msg.comms_timeout = 32444U;
    msg.turb_lim = 0.7416384502112416;
    msg.custom.assign("JNHMZVXRQHFEMDRFQJANNLOZRCXLHQNPGOHT");

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
    msg.setTimeStamp(0.7212442143940291);
    msg.setSource(44083U);
    msg.setSourceEntity(38U);
    msg.setDestination(28108U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("JSALKUPMJIULBWKMDQXMTXRLVVARYFRSMMTGXVJRZQTVJEQPBDYPMUXANBIHINADSHROYYFGXWKGOWIHBACY");
    msg.formation_name.assign("NJOUIJKFSBPYOEDFRDOKNSQLTAMOEXXKLHSZUMABWZXVPUBJUINJDTZQORMGFDAQZXACCFFYRILSREYCJXRZURNFLBSMLEGQFVMWEGHCUUOLVZN");
    msg.plan_id.assign("QZKWZTDVEXQOSIXFMMLYPKNKRQNDQVJJEFSLIZDAFMBPQSXWBGTJLNSZDGHLCDHLOSPLORKOUADTTHFC");
    msg.description.assign("TEUSMVKGKKPAOHCYMYPTAMCZXSDYBCEIHWGOMVOJXVOORBJQOOPGMBVQURIJTFKBKLHQFPRLUAAVZBJFMRUWEUJFJBMLSRZPNBUQRHFA");
    msg.leader_speed = 0.5708330212940298;
    msg.leader_bank_lim = 0.9224053094618423;
    msg.pos_sim_err_lim = 0.6313424817600803;
    msg.pos_sim_err_wrn = 0.2884104900559946;
    msg.pos_sim_err_timeout = 9853U;
    msg.converg_max = 0.4546932587878185;
    msg.converg_timeout = 51402U;
    msg.comms_timeout = 45194U;
    msg.turb_lim = 0.10436069213997945;
    msg.custom.assign("JSISUYWLEXDOFEIDIFWCUWESJRNNYESZZCQLP");

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
    msg.setTimeStamp(0.13795020908508693);
    msg.setSource(18U);
    msg.setSourceEntity(49U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("JXOARYQIQAILWTXZXDLVLIMXCZQWEL");
    msg.formation_name.assign("GSMSNSMVNKZIOBIHAONXJEXKHOQMSJEWTBTBRLSJPGSIKCFWMOAPWFCYSQBTBWIWHGLDEF");
    msg.plan_id.assign("SDCRRKTNWSIWPYNJXFUIMSZVYLNEWEMQNTNIXHJMDPLSNLXGDBOWMUWOEQKPOSNHBFVXZHIVHPWEQBWBUOJQCEWRNPHIAUQFGZCCJSSQEVDRRHVOYTCYFSMYIKQXZJGMNFEFLKBVXTFYXCEBMVULW");
    msg.description.assign("CIWQCBEDZOWYTADMNSHSMJYRBDCSXVZSWPZWURVJTQYZUREYSMPCYQGCWYBKICNKOVJVXQRZTUFNBLWWTIGCTTHHKSVLXGQAFDFLSJZONXNAIDOQEXSTJNXMTFOUVVMFKJCZUFSPWTSKQFOBDRLICPAYEHPVGYINKLHPPLODQAXHQAUWPEFVUABL");
    msg.leader_speed = 0.10879512040781902;
    msg.leader_bank_lim = 0.6072856306705349;
    msg.pos_sim_err_lim = 0.2897605096595912;
    msg.pos_sim_err_wrn = 0.7842932241901991;
    msg.pos_sim_err_timeout = 1461U;
    msg.converg_max = 0.8003762040065129;
    msg.converg_timeout = 10190U;
    msg.comms_timeout = 11289U;
    msg.turb_lim = 0.5180346286734826;
    msg.custom.assign("APXVIDNQUSMJSFOTBGIBNTLQYZGWVHIXWUSUTDTMHARMXLABZCTQHFYYKWFEKFDVPTERYWKILRJQAUQSHVVMJGYZQYAHLPYINBOOAJHOGCFEXQSEDMDZJPWGXFNWGAGOBKOWSLILNHRUZMCFABURXUZFGCCZDGTDQNSVASUPHNIONVHPRRRNOBBYAKFKVPQPMOVSSQICIKWDKTJMLLPUV");

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
    msg.setTimeStamp(0.2220063037359974);
    msg.setSource(22880U);
    msg.setSourceEntity(178U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(125U);
    msg.control_src = 34398U;
    msg.control_ent = 197U;
    msg.timeout = 0.005387231403528592;
    msg.loiter_radius = 0.8649369051362313;
    msg.altitude_interval = 0.1026259778022196;

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
    msg.setTimeStamp(0.1432933278780023);
    msg.setSource(53753U);
    msg.setSourceEntity(246U);
    msg.setDestination(55462U);
    msg.setDestinationEntity(111U);
    msg.control_src = 34884U;
    msg.control_ent = 158U;
    msg.timeout = 0.8338454489623186;
    msg.loiter_radius = 0.18238277196180575;
    msg.altitude_interval = 0.8489383562511957;

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
    msg.setTimeStamp(0.7660804090125615);
    msg.setSource(28266U);
    msg.setSourceEntity(167U);
    msg.setDestination(2907U);
    msg.setDestinationEntity(216U);
    msg.control_src = 40612U;
    msg.control_ent = 124U;
    msg.timeout = 0.8942629650092911;
    msg.loiter_radius = 0.901752409762701;
    msg.altitude_interval = 0.5831208851140823;

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
    msg.setTimeStamp(0.8289114958328899);
    msg.setSource(41201U);
    msg.setSourceEntity(219U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(215U);
    msg.flags = 113U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8519924976162876;
    tmp_msg_0.speed_units = 246U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.335632344772839;
    tmp_msg_1.z_units = 88U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.49048480708116504;
    msg.lon = 0.7402549149189833;
    msg.radius = 0.09791950627218726;

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
    msg.setTimeStamp(0.36368478775367796);
    msg.setSource(10306U);
    msg.setSourceEntity(222U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(49U);
    msg.flags = 210U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7881627110271912;
    tmp_msg_0.speed_units = 40U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03447824029509017;
    tmp_msg_1.z_units = 15U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5989377995271121;
    msg.lon = 0.9024299408190765;
    msg.radius = 0.4379916343768555;

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
    msg.setTimeStamp(0.6989839252945835);
    msg.setSource(33980U);
    msg.setSourceEntity(31U);
    msg.setDestination(38724U);
    msg.setDestinationEntity(10U);
    msg.flags = 83U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5588585225404311;
    tmp_msg_0.speed_units = 64U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4298731424250538;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.699114977358737;
    msg.lon = 0.19088538005405542;
    msg.radius = 0.17096731681781008;

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
    msg.setTimeStamp(0.6909261761844412);
    msg.setSource(55347U);
    msg.setSourceEntity(191U);
    msg.setDestination(13637U);
    msg.setDestinationEntity(174U);
    msg.control_src = 17548U;
    msg.control_ent = 3U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4609110950433347;
    tmp_tmp_msg_0_0.speed_units = 129U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.964143726970242;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.19914079101216486;
    tmp_msg_0.lon = 0.21243003202470612;
    tmp_msg_0.radius = 0.14782602424965374;
    msg.reference.set(tmp_msg_0);
    msg.state = 239U;
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
    msg.setTimeStamp(0.7050423130758042);
    msg.setSource(50388U);
    msg.setSourceEntity(170U);
    msg.setDestination(29398U);
    msg.setDestinationEntity(89U);
    msg.control_src = 62686U;
    msg.control_ent = 250U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 48U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8551904262904544;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9311969118925923;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6075786317380408;
    tmp_msg_0.lon = 0.21740057471626972;
    tmp_msg_0.radius = 0.5506493181664153;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 164U;

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
    msg.setTimeStamp(0.2951238461125547);
    msg.setSource(17949U);
    msg.setSourceEntity(193U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(133U);
    msg.control_src = 51074U;
    msg.control_ent = 133U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13572049337859127;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.681640103328841;
    tmp_tmp_msg_0_1.z_units = 238U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5121447668308838;
    tmp_msg_0.lon = 0.3490319545729076;
    tmp_msg_0.radius = 0.026977058580585078;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 179U;

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
    msg.setTimeStamp(0.10572460383412086);
    msg.setSource(26929U);
    msg.setSourceEntity(243U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(229U);
    msg.ax_cmd = 0.9507866454746845;
    msg.ay_cmd = 0.5028875844645564;
    msg.az_cmd = 0.9774784535637328;
    msg.ax_des = 0.03843473440090572;
    msg.ay_des = 0.09253355572248112;
    msg.az_des = 0.5609910643218498;
    msg.virt_err_x = 0.944097209765635;
    msg.virt_err_y = 0.6926099677032771;
    msg.virt_err_z = 0.8737701447255951;
    msg.surf_fdbk_x = 0.6815068955898607;
    msg.surf_fdbk_y = 0.5774331064110849;
    msg.surf_fdbk_z = 0.8698180734627917;
    msg.surf_unkn_x = 0.25710327294870816;
    msg.surf_unkn_y = 0.21633252339928588;
    msg.surf_unkn_z = 0.6103112349645654;
    msg.ss_x = 0.017676500932648498;
    msg.ss_y = 0.47701074793789777;
    msg.ss_z = 0.2827213225080941;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JSAULBITYTRQALOEAHGPUHNTDCNBUCFCXDBYSZWYIZZQMLGSDAYWJMIWRJFZNMCRBTMJLKNYTAXRGWFTHXHMTONXHV");
    tmp_msg_0.dist = 0.2849289074707424;
    tmp_msg_0.err = 0.9392505508068527;
    tmp_msg_0.ctrl_imp = 0.44496944106499936;
    tmp_msg_0.rel_dir_x = 0.1095959798244982;
    tmp_msg_0.rel_dir_y = 0.7924749605337245;
    tmp_msg_0.rel_dir_z = 0.7401998228328119;
    tmp_msg_0.err_x = 0.9519155447418923;
    tmp_msg_0.err_y = 0.5084589593886787;
    tmp_msg_0.err_z = 0.04177123762261803;
    tmp_msg_0.rf_err_x = 0.2196305134756199;
    tmp_msg_0.rf_err_y = 0.11290530330818871;
    tmp_msg_0.rf_err_z = 0.4125910001026206;
    tmp_msg_0.rf_err_vx = 0.42380083509381006;
    tmp_msg_0.rf_err_vy = 0.8386609789037096;
    tmp_msg_0.rf_err_vz = 0.1094104256285574;
    tmp_msg_0.ss_x = 0.3296774767412177;
    tmp_msg_0.ss_y = 0.3598125403797805;
    tmp_msg_0.ss_z = 0.6940064420832807;
    tmp_msg_0.virt_err_x = 0.680699672066255;
    tmp_msg_0.virt_err_y = 0.13066620321771316;
    tmp_msg_0.virt_err_z = 0.3900331578582872;
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
    msg.setTimeStamp(0.8357868275120405);
    msg.setSource(47700U);
    msg.setSourceEntity(99U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(62U);
    msg.ax_cmd = 0.5546535060432494;
    msg.ay_cmd = 0.7328456259399555;
    msg.az_cmd = 0.5771368320124655;
    msg.ax_des = 0.065596920156194;
    msg.ay_des = 0.3814268556053174;
    msg.az_des = 0.37972756791462337;
    msg.virt_err_x = 0.3770492401615916;
    msg.virt_err_y = 0.7568631955959081;
    msg.virt_err_z = 0.7967710421697923;
    msg.surf_fdbk_x = 0.8222072133237378;
    msg.surf_fdbk_y = 0.2525503478254427;
    msg.surf_fdbk_z = 0.4108538511729496;
    msg.surf_unkn_x = 0.818893135555818;
    msg.surf_unkn_y = 0.20040093673277126;
    msg.surf_unkn_z = 0.78320168525908;
    msg.ss_x = 0.7080893765512811;
    msg.ss_y = 0.12764477135870378;
    msg.ss_z = 0.25292861828432045;

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
    msg.setTimeStamp(0.4297635598778905);
    msg.setSource(49293U);
    msg.setSourceEntity(89U);
    msg.setDestination(32175U);
    msg.setDestinationEntity(170U);
    msg.ax_cmd = 0.36439571982779173;
    msg.ay_cmd = 0.9907809520532788;
    msg.az_cmd = 0.1698840590185644;
    msg.ax_des = 0.6754623231356346;
    msg.ay_des = 0.5247446701078622;
    msg.az_des = 0.4679429161171714;
    msg.virt_err_x = 0.11735244294043834;
    msg.virt_err_y = 0.3638765891200466;
    msg.virt_err_z = 0.0889086522988326;
    msg.surf_fdbk_x = 0.03377954655186843;
    msg.surf_fdbk_y = 0.5539557363679201;
    msg.surf_fdbk_z = 0.8021911223486492;
    msg.surf_unkn_x = 0.46711052375175455;
    msg.surf_unkn_y = 0.12413558758046128;
    msg.surf_unkn_z = 0.6400438312643464;
    msg.ss_x = 0.5083052178922041;
    msg.ss_y = 0.2160864690120594;
    msg.ss_z = 0.9427730221721361;

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
    msg.setTimeStamp(0.37093509691819215);
    msg.setSource(38640U);
    msg.setSourceEntity(162U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(218U);
    msg.s_id.assign("LNBVJUSBWIFOEYAYIKTSTAYSMQOQXHBAJSOVRKWZDGXDZWQVEFPXJDTQNGVRGCFVERLRSODXZYLBVJLGBEWUNLBLECNBFQAVGXYQFDIWAZPZHDUXEXZRMVOPCKLBFEOBOICSVTZPQYHZSNEWMWUHGHIUMEMWNAOC");
    msg.dist = 0.6810651229616884;
    msg.err = 0.2465110522624463;
    msg.ctrl_imp = 0.11492498019637565;
    msg.rel_dir_x = 0.028640075474804738;
    msg.rel_dir_y = 0.16385167804253342;
    msg.rel_dir_z = 0.9625395960411629;
    msg.err_x = 0.7036720285455244;
    msg.err_y = 0.10928005577993538;
    msg.err_z = 0.861156004237509;
    msg.rf_err_x = 0.2695258013894718;
    msg.rf_err_y = 0.4286367122112553;
    msg.rf_err_z = 0.9742119523809836;
    msg.rf_err_vx = 0.8373460991870896;
    msg.rf_err_vy = 0.6016304554887474;
    msg.rf_err_vz = 0.011096778403704377;
    msg.ss_x = 0.6992223552365667;
    msg.ss_y = 0.1288044019938337;
    msg.ss_z = 0.30384386163081356;
    msg.virt_err_x = 0.1497498582019655;
    msg.virt_err_y = 0.46304691005281107;
    msg.virt_err_z = 0.7226710968380161;

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
    msg.setTimeStamp(0.8491062474291865);
    msg.setSource(6933U);
    msg.setSourceEntity(175U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(192U);
    msg.s_id.assign("VUEPAHDADIH");
    msg.dist = 0.6773840279375143;
    msg.err = 0.7646383854851535;
    msg.ctrl_imp = 0.7090273614340631;
    msg.rel_dir_x = 0.5858998633314256;
    msg.rel_dir_y = 0.06724763571344472;
    msg.rel_dir_z = 0.31356339046716375;
    msg.err_x = 0.2308010253091788;
    msg.err_y = 0.9837083461258407;
    msg.err_z = 0.21151924832019242;
    msg.rf_err_x = 0.5197380575588149;
    msg.rf_err_y = 0.38249492737047974;
    msg.rf_err_z = 0.10277995128151551;
    msg.rf_err_vx = 0.8676527591923331;
    msg.rf_err_vy = 0.7068864388338926;
    msg.rf_err_vz = 0.19142945738771244;
    msg.ss_x = 0.013502034001709462;
    msg.ss_y = 0.9627025345918591;
    msg.ss_z = 0.5688460786202443;
    msg.virt_err_x = 0.9877078026391838;
    msg.virt_err_y = 0.6846073560034709;
    msg.virt_err_z = 0.002754996036588797;

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
    msg.setTimeStamp(0.899030033943291);
    msg.setSource(57578U);
    msg.setSourceEntity(80U);
    msg.setDestination(60155U);
    msg.setDestinationEntity(224U);
    msg.s_id.assign("BGLWIFZDJZHSOVPGKCQDWOMXHMVAXANPBGITYPWODFVRZWNJGAXCGXWRERKHDMYJXIMUWVNYLLCXGIEANHGSYBTUPZUXXKWKOAVCSIBCQUCUKIKMTVQJPJVRFELMDPUNKRIWYDUHXEDTLTWVCNQDSHJLEIKFBQDMJYEWZEPNSCYRHETSBOAIZRTBBLOZVJZQOGCQQTFBPPFRHADYLMGRELZQKSVHUTPAAREYHMONFYFSQJSBNT");
    msg.dist = 0.2763023251657658;
    msg.err = 0.7017238766191687;
    msg.ctrl_imp = 0.22767611265088616;
    msg.rel_dir_x = 0.7851473573228861;
    msg.rel_dir_y = 0.7112494394433877;
    msg.rel_dir_z = 0.04682331834903364;
    msg.err_x = 0.5198408542672223;
    msg.err_y = 0.5726414620597835;
    msg.err_z = 0.21230350581904867;
    msg.rf_err_x = 0.8192809109214024;
    msg.rf_err_y = 0.004653793459924782;
    msg.rf_err_z = 0.3999653103494324;
    msg.rf_err_vx = 0.014933232942891062;
    msg.rf_err_vy = 0.0910554621127192;
    msg.rf_err_vz = 0.06760384347848725;
    msg.ss_x = 0.5135294581626448;
    msg.ss_y = 0.46147990635443203;
    msg.ss_z = 0.04040464146154976;
    msg.virt_err_x = 0.9620813833796041;
    msg.virt_err_y = 0.4951751480218818;
    msg.virt_err_z = 0.12663235558915553;

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
    msg.setTimeStamp(0.558463865202673);
    msg.setSource(56445U);
    msg.setSourceEntity(13U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(123U);
    msg.timeout = 27099U;
    msg.rpm = 0.9054167888802307;
    msg.direction = 252U;
    msg.custom.assign("SOGCRGMLEQCSYKMTNQZRRDIKRLZWZBJXJ");

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
    msg.setTimeStamp(0.8024252058515536);
    msg.setSource(44402U);
    msg.setSourceEntity(187U);
    msg.setDestination(32129U);
    msg.setDestinationEntity(193U);
    msg.timeout = 53386U;
    msg.rpm = 0.5885725637046144;
    msg.direction = 168U;
    msg.custom.assign("MIWEVVWWDOCUJWT");

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
    msg.setTimeStamp(0.9926305335822198);
    msg.setSource(14958U);
    msg.setSourceEntity(100U);
    msg.setDestination(23466U);
    msg.setDestinationEntity(32U);
    msg.timeout = 24165U;
    msg.rpm = 0.9707574294869548;
    msg.direction = 235U;
    msg.custom.assign("DHULXZVVXWLJO");

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
    msg.setTimeStamp(0.2916246311753907);
    msg.setSource(35323U);
    msg.setSourceEntity(190U);
    msg.setDestination(17566U);
    msg.setDestinationEntity(67U);
    msg.formation_name.assign("YRGXPINCAZNSAWNLIVSYUPIWLRBCQPWERCJOUVIJVGGNAUQAEAEXBX");
    msg.type = 13U;
    msg.op = 7U;
    msg.group_name.assign("QWHIVHWBVYAMQTNRTGQJLSPZTDYJLXFJSQPHSIADZKVTVDWCKGQMQCETJOZAHLSFFYXIZHGFFFWUTCIM");
    msg.plan_id.assign("CVBGLWVJVRLZBKNOCLFMWQSSFFVECGMNUWBGGZIEDJKYIWMIESLMXMKPTXPNBIKYJLYOIJHXHZPHURGWWWPDUUOHYSKLXJVFHXUQHZAFMRSODXZIXAUGDUZUTDKLBYNXHEWQQQKMSRTFYREADQWPRPXAOPO");
    msg.description.assign("GJWOFANMORXYSCLOKHZKXROVADLVDJQFFAXZVJRIUCQFVBSYZZIGFBTCISDXATEXYBHWKWNWJANJHZZITUWEYHCJEWVTGVFZPGQLDKOKKVCIQXMCJCMSBHTBAMI");
    msg.reference_frame = 79U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33308U;
    tmp_msg_0.off_x = 0.6544417201704331;
    tmp_msg_0.off_y = 0.03811912144955243;
    tmp_msg_0.off_z = 0.495681488981076;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2433996407000225;
    msg.leader_speed_min = 0.04565289361885039;
    msg.leader_speed_max = 0.04799484015641531;
    msg.leader_alt_min = 0.9618673614466181;
    msg.leader_alt_max = 0.7825731004825651;
    msg.pos_sim_err_lim = 0.002242112246590544;
    msg.pos_sim_err_wrn = 0.04568147857217464;
    msg.pos_sim_err_timeout = 2159U;
    msg.converg_max = 0.22292396874428155;
    msg.converg_timeout = 12665U;
    msg.comms_timeout = 11163U;
    msg.turb_lim = 0.9234894884271936;
    msg.custom.assign("KDWDTSILMSQCWFMYGHYKPBZMUEBTYQVDPXXMHTDWRNGWKQFEOSMYNLTUAJWR");

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
    msg.setTimeStamp(0.20579381561202736);
    msg.setSource(9842U);
    msg.setSourceEntity(65U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("OKOGNMCWOZEPDBVTCMQFQYAXRWQUJPZDEHSAKASFFZTTIBVDKHOUKZQKPNFNXBXBJXIENAGRJPILEGZJMGNWFYYLDTHSHZJPFTZYTZYRVWREFJFVJIJLAGUIMWNLYUDGDKUMLMXKWUOAIK");
    msg.type = 246U;
    msg.op = 2U;
    msg.group_name.assign("WGKGFWDCOZPMUUUSNGNNTLYJBWKDHVTQDIGXEUMRDHLMFIKVFEJXZHLLZVPTNQCEQTWVQWAGEVNTTZLKHOWEJHBQHFHXPEDHESHIWUQAZMSVBCARCKWPCQDMFXSIGRMXIVNLXTGFEARNPBSXYMBPY");
    msg.plan_id.assign("LROBFJWNIAEHVURYMAEWHDOGEJZDLUHTASCVQMAJWARIMIHUSCCWLJQYLIYKSTRYRXUDZQBEGFJRFLOOUJPOZKBJWNYJWJRNXAAVOLAGTZDXQEQZPGNTWBHYISENDEFNOSGXQDDOMVVFGXUPKTTBKPEGHIHBRPFTPKNCYBGHVWGBKKVVKPZIFSTRKSWHIZRZLXCLGMNMPMJXFDEUY");
    msg.description.assign("RKNJQTIPSHZMNAZVLOKENLMUEJOZBEGXMDUSHSMCNT");
    msg.reference_frame = 57U;
    msg.leader_bank_lim = 0.3298260627556807;
    msg.leader_speed_min = 0.9985465273904128;
    msg.leader_speed_max = 0.10080822375390364;
    msg.leader_alt_min = 0.8224266979235989;
    msg.leader_alt_max = 0.4891417897485558;
    msg.pos_sim_err_lim = 0.7496496870134916;
    msg.pos_sim_err_wrn = 0.885192206412504;
    msg.pos_sim_err_timeout = 61029U;
    msg.converg_max = 0.42295654637863433;
    msg.converg_timeout = 30646U;
    msg.comms_timeout = 22524U;
    msg.turb_lim = 0.5741046044548888;
    msg.custom.assign("HWJUNSOOXLKFYOCMPCUIHEFIOJGOSTGLHYILEVDUQNJZONQYYDBCMMKNSVFWFPGQRDCCLQDGAPHUECBVATAGZZAMFSJUPPLPQYLAQOUYSRWVISEENJARFWVWHFKPKIYABIBDYYPXHWDXSCEBBPXURHCVCGTNZJRFOJJQAXBORZGTRKAVNLNYBQBEMSTTESMBXMI");

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
    msg.setTimeStamp(0.35133667480637587);
    msg.setSource(37331U);
    msg.setSourceEntity(146U);
    msg.setDestination(7572U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("HLRDTHJCNOBUMWVKAJWWYNVQUEPABOPYVVEFGIFQUVZZWMGSJSCNKSKDLPPAVESBVAKCFRINYMDCZYXGCTHMKPLUHHPXUAKFJRSWBUOXKEXBFBNYWGLISIJVDRWBIRFZYOGCYPAGSBUQPLMTUFRGFTMHEZDSMNEZNMNBLPQXQXDTOCQKTMJCIQQFEXLSGESLQJLVHAJDRWDHVCKIRDRHGTZNAKOIP");
    msg.type = 45U;
    msg.op = 220U;
    msg.group_name.assign("OQBBHCECJSSGKYHSFCRNTMCBHPIGTRMLMANPTUWRMOLOBPDRFDYZURWEHYKMOPWJAEQXKCKIMJTIPHUZNHVXTOUDPBDDTGGNRWGBEKMBYKKGQIEFVDFZABXZOJZSNVRKAQIWOPXTXLXSIXSBCODPEBGWVFWMWDHAGQUFYXFRVWNKHSUQXJYLLRICHZELTLUVYWJNPSIVLF");
    msg.plan_id.assign("JUVGZQQTBFOIGPVHRHRO");
    msg.description.assign("NOGHVEPVWZTQDIJMXCXCTKHPVONZOKPAQWUEGRVOHIKEFBLQWEAZFSNNKUJAEJCCGEGOBUWJBSGDSBEFGYJWENTDVTKZDRLYTHFVNMXUIMSXSRZIV");
    msg.reference_frame = 67U;
    msg.leader_bank_lim = 0.19490531613817064;
    msg.leader_speed_min = 0.9728430635016585;
    msg.leader_speed_max = 0.7778132435678912;
    msg.leader_alt_min = 0.2942058479722256;
    msg.leader_alt_max = 0.6639314124612986;
    msg.pos_sim_err_lim = 0.2197999052480034;
    msg.pos_sim_err_wrn = 0.5427184265887015;
    msg.pos_sim_err_timeout = 56401U;
    msg.converg_max = 0.9532451541272893;
    msg.converg_timeout = 5389U;
    msg.comms_timeout = 29217U;
    msg.turb_lim = 0.7613672568405346;
    msg.custom.assign("DMDJHQKDEAPCSYQUORZPICKWJLWMRVKZXAAOQZYAYCRLXPBZFONGHATMIDPMYEGFKIWBSUFKVBZSFGYMAQFNFWOIGWGYIPXWELXSOATPEUEDKBVIUYUJVNIUCSTQCMXYBNXHCFJBNCOOORJVPVAMDTIMLRJIZBZZJGNUWDREVQDIOEDDCLTBUQGGHVHHCTKTZSSQKLZFBX");

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
    msg.setTimeStamp(0.8914002578339786);
    msg.setSource(33398U);
    msg.setSourceEntity(215U);
    msg.setDestination(18327U);
    msg.setDestinationEntity(235U);
    msg.timeout = 8501U;
    msg.lat = 0.12406758472770274;
    msg.lon = 0.2492043451558419;
    msg.z = 0.0845208828791425;
    msg.z_units = 116U;
    msg.speed = 0.41617687615537025;
    msg.speed_units = 231U;
    msg.custom.assign("MAAWSFPNJQKOBKHHEAIMTJXLZYKULQWDAXQYWRXQOAUYVZPDJBBSTDNSMZJPKIMJGBLXWQNDHLAMDTSBCQGZELIOVSCEWJEJCEUFTEFYNZVRQPKYIMWQTZXVCBWGLBFQGXVTGTSEPDKVRUPRHXGWLBORLIUJPPOBYCUVIQRIXEGCBAIADXZHFKEHFMRJMUMOHSPNO");

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
    msg.setTimeStamp(0.861193845113542);
    msg.setSource(2571U);
    msg.setSourceEntity(127U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(106U);
    msg.timeout = 28191U;
    msg.lat = 0.3186566677703383;
    msg.lon = 0.07564329869715847;
    msg.z = 0.7380050313886574;
    msg.z_units = 67U;
    msg.speed = 0.6358999886774114;
    msg.speed_units = 237U;
    msg.custom.assign("MNDMTVIKQCSNWBWVBBTQLYCUNWYTJCAMKVLGOCBDTGUNKLQHDYIYPIAXZKVGEYGBITUUMLWAJQTFXMNMOXEWOCLBASIFHSHZGR");

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
    msg.setTimeStamp(0.5122314578902942);
    msg.setSource(44622U);
    msg.setSourceEntity(157U);
    msg.setDestination(58625U);
    msg.setDestinationEntity(110U);
    msg.timeout = 44997U;
    msg.lat = 0.41667109395093493;
    msg.lon = 0.6529933555992514;
    msg.z = 0.8461205002440432;
    msg.z_units = 138U;
    msg.speed = 0.3403287300245649;
    msg.speed_units = 214U;
    msg.custom.assign("IAGBDRVYENFCEWOWDRLYQOSWISYATXTWOSGJBFPEENNA");

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
    msg.setTimeStamp(0.24240312102064077);
    msg.setSource(62656U);
    msg.setSourceEntity(95U);
    msg.setDestination(45346U);
    msg.setDestinationEntity(76U);
    msg.timeout = 48511U;
    msg.lat = 0.3348955062132153;
    msg.lon = 0.5422888087098787;
    msg.z = 0.34158322069571057;
    msg.z_units = 165U;
    msg.speed = 0.7332744620872347;
    msg.speed_units = 58U;
    msg.custom.assign("BFIXXVFWOUBCTPCDWCCWNWCFYINRQLDJWCFRSQOWEVGWNYDECSIXHDZFMKZUJQAQBYTITFGVIPUKIIAUBWEYKVHMBEKZOLHOMPVTDEOCCQDVMSELZRJHETLLJEPNCLJJFQMLMQAISXFMQPZUTKPXKHSRXORYAVNBSDMVUKXBYPGZJUS");

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
    msg.setTimeStamp(0.5198618176967023);
    msg.setSource(35113U);
    msg.setSourceEntity(222U);
    msg.setDestination(26147U);
    msg.setDestinationEntity(138U);
    msg.timeout = 43949U;
    msg.lat = 0.8283783319501274;
    msg.lon = 0.6481705505628848;
    msg.z = 0.5835201815012548;
    msg.z_units = 139U;
    msg.speed = 0.7901067008730948;
    msg.speed_units = 165U;
    msg.custom.assign("KSOQPCXEWKEJLKFMIJUVVFOUTAMCWYPSWSYBJAHCQGLDWKDWOLGSDUSGNCCREIHXFLDWHVKYRMFFWHGRNLYUOXDARCXRIUZPWZMJNQGNUFLEHVNLNHDESBPAUGJXLHVZEFAHKBNNABQSPKUJPQANXZEDJIIQYOIXUECXGYWTTFVZNKMDCSYKTVPQTOEXMIGPIQVMZFRPYERUYROTOQHFJCKBTBJZCVAZDPBHMLJTBX");

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
    msg.setTimeStamp(0.953531759489039);
    msg.setSource(24027U);
    msg.setSourceEntity(42U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(45U);
    msg.timeout = 20802U;
    msg.lat = 0.5854190716063549;
    msg.lon = 0.6613161164653902;
    msg.z = 0.8384982242327578;
    msg.z_units = 73U;
    msg.speed = 0.2947329210408398;
    msg.speed_units = 156U;
    msg.custom.assign("HOHIKAGRRKLZKEQNZVSLCFPZZPLBHGWZGXMXUNASDJCLQXISVRTGFIVZHUBJVBMGNNPDLBRGHUJXYQDFWZYYJNCOIYBCFUOUOSHFALVQUWNPDZOBEGMKSQYREOWGEFNDWEHLXBBWOSPDYN");

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
    msg.setTimeStamp(0.13870812861063098);
    msg.setSource(15714U);
    msg.setSourceEntity(93U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(219U);
    msg.arrival_time = 0.30926689852328604;
    msg.lat = 0.30028021578949626;
    msg.lon = 0.3536248018294974;
    msg.z = 0.08915572419336149;
    msg.z_units = 30U;
    msg.travel_z = 0.8203504041798432;
    msg.travel_z_units = 233U;
    msg.delayed = 189U;

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
    msg.setTimeStamp(0.48174270777650885);
    msg.setSource(31240U);
    msg.setSourceEntity(174U);
    msg.setDestination(37621U);
    msg.setDestinationEntity(165U);
    msg.arrival_time = 0.22838207061822258;
    msg.lat = 0.4114012821573615;
    msg.lon = 0.8051758098362783;
    msg.z = 0.7657302756595947;
    msg.z_units = 52U;
    msg.travel_z = 0.7941221567339667;
    msg.travel_z_units = 241U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.9324624367632547);
    msg.setSource(47552U);
    msg.setSourceEntity(200U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(176U);
    msg.arrival_time = 0.890682752697072;
    msg.lat = 0.37848262776056396;
    msg.lon = 0.6118195652347752;
    msg.z = 0.014410369199663764;
    msg.z_units = 74U;
    msg.travel_z = 0.21834050606231226;
    msg.travel_z_units = 72U;
    msg.delayed = 155U;

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
    msg.setTimeStamp(0.3798786961798867);
    msg.setSource(57683U);
    msg.setSourceEntity(105U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.30060968715703984;
    msg.lon = 0.07159877947041204;
    msg.z = 0.36905600989148957;
    msg.z_units = 108U;
    msg.speed = 0.03498549651277072;
    msg.speed_units = 84U;
    msg.bearing = 0.36376131599548345;
    msg.cross_angle = 0.3687650864838773;
    msg.width = 0.7813451061625871;
    msg.length = 0.5539930312471283;
    msg.coff = 254U;
    msg.angaperture = 0.46316055761583075;
    msg.range = 25705U;
    msg.overlap = 196U;
    msg.flags = 156U;
    msg.custom.assign("LOEYEENLHPQTCESLOKAOWDKPNZTICQIVVWTSVDZHTUGMUSDD");

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
    msg.setTimeStamp(0.6113254173177342);
    msg.setSource(17061U);
    msg.setSourceEntity(45U);
    msg.setDestination(65123U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.2090638343040443;
    msg.lon = 0.9779426963354413;
    msg.z = 0.14496296847378487;
    msg.z_units = 21U;
    msg.speed = 0.2235712101946754;
    msg.speed_units = 99U;
    msg.bearing = 0.3166567667097434;
    msg.cross_angle = 0.4568339156162924;
    msg.width = 0.9505095135010817;
    msg.length = 0.7896194934807077;
    msg.coff = 78U;
    msg.angaperture = 0.6636316250912574;
    msg.range = 12691U;
    msg.overlap = 140U;
    msg.flags = 232U;
    msg.custom.assign("UDBVMVGWASDQGABTNHEOYMHRTXUNXAFJPTCZMSMRXNVEWVDHYQOBFQLTRWCXJNAUSCJHJKUSOPPIHETZHHAXUCRILZISFEDKJYDQBCLKSJIRHOYW");

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
    msg.setTimeStamp(0.9541247551641324);
    msg.setSource(20713U);
    msg.setSourceEntity(100U);
    msg.setDestination(42089U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.09539334691877166;
    msg.lon = 0.43464323020647644;
    msg.z = 0.26707710392061457;
    msg.z_units = 7U;
    msg.speed = 0.3857349050944223;
    msg.speed_units = 238U;
    msg.bearing = 0.4825700436753544;
    msg.cross_angle = 0.10418527801721023;
    msg.width = 0.4035732525843003;
    msg.length = 0.3049186075343806;
    msg.coff = 80U;
    msg.angaperture = 0.053614165816458725;
    msg.range = 21895U;
    msg.overlap = 91U;
    msg.flags = 200U;
    msg.custom.assign("ICFYMWVDOGHXBOZPCUEJAZMFBOKMKPHOFUVZJFOLXXFBPAJNGNJTGKNMPIFLWVIYIULVAYPYUPECDUJZXVXKCHCNXTWFQARIYNKRJLPDNNMYUGRFRTUBXGZPYUDRIRQTOGCBLEXENAXQBZPASJEMWDTACTPHLDDBISJTBYOQEDZVNSHKH");

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
    msg.setTimeStamp(0.5604631074077295);
    msg.setSource(52327U);
    msg.setSourceEntity(128U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(2U);
    msg.timeout = 21533U;
    msg.lat = 0.43707814236969056;
    msg.lon = 0.7552120444697148;
    msg.z = 0.6659463931376844;
    msg.z_units = 122U;
    msg.speed = 0.3142204563574976;
    msg.speed_units = 159U;
    msg.syringe0 = 151U;
    msg.syringe1 = 8U;
    msg.syringe2 = 18U;
    msg.custom.assign("VSXXLBFUREIYAYVGQINXEMGOLVHMTRBHFMSCFOWMKMXRUUKLWRZAWACFDFZOJUBISLMAQQKVCDGQCSEHHJBYMTORWQNTEJGMLIKXYKRLTHFJRHJKCD");

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
    msg.setTimeStamp(0.8196507603419855);
    msg.setSource(31211U);
    msg.setSourceEntity(15U);
    msg.setDestination(35033U);
    msg.setDestinationEntity(7U);
    msg.timeout = 34587U;
    msg.lat = 0.5194662810287811;
    msg.lon = 0.10807675625068791;
    msg.z = 0.3087152864426994;
    msg.z_units = 176U;
    msg.speed = 0.18505156218760077;
    msg.speed_units = 191U;
    msg.syringe0 = 38U;
    msg.syringe1 = 119U;
    msg.syringe2 = 11U;
    msg.custom.assign("HSSOZNAAFHYVRSKXOCBSBRWFWLUCXOHXIPSDFGCMINZMWKDQRJRVGFJYT");

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
    msg.setTimeStamp(0.010014815932428145);
    msg.setSource(31740U);
    msg.setSourceEntity(204U);
    msg.setDestination(28536U);
    msg.setDestinationEntity(40U);
    msg.timeout = 38278U;
    msg.lat = 0.36959187972418506;
    msg.lon = 0.10874392148350165;
    msg.z = 0.6542254882334407;
    msg.z_units = 122U;
    msg.speed = 0.8787294645142132;
    msg.speed_units = 131U;
    msg.syringe0 = 203U;
    msg.syringe1 = 182U;
    msg.syringe2 = 241U;
    msg.custom.assign("WAAWKGTRMSQUQAMOZSYJBULRAULBMZYYUAWJOHKPGCPYZDUNBZEAKBNSLNMNFUVHWGKUYRIDHOWBRNRVBWCMDGLDDQTHPVLDUZAFKRPXBPLRJY");

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
    msg.setTimeStamp(0.7635437638360418);
    msg.setSource(36379U);
    msg.setSourceEntity(236U);
    msg.setDestination(63608U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.7221937372655309);
    msg.setSource(7953U);
    msg.setSourceEntity(190U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.9285156062955175);
    msg.setSource(20186U);
    msg.setSourceEntity(204U);
    msg.setDestination(36985U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.39904703549911336);
    msg.setSource(5889U);
    msg.setSourceEntity(208U);
    msg.setDestination(57485U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.8560842855856398;
    msg.lon = 0.4073050180878217;
    msg.z = 0.5072111157652567;
    msg.z_units = 72U;
    msg.speed = 0.9451051566580493;
    msg.speed_units = 67U;
    msg.takeoff_pitch = 0.16575716919501515;
    msg.custom.assign("BDSYKCNCTRUYOGVWFHLBPMYYKGSQPZQSUAPOBZTOLNBXMSAUVSZCJNDRTIBRIYPQFMDDKIEERUXTNLYQEENTZKWWUXRFHFOGMSNXQCPNZGJSVVJMVIKNEOQPHRLJGVRUTSVYSFLAQTBPHAAKPHWXYB");

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
    msg.setTimeStamp(0.9596134013560096);
    msg.setSource(53484U);
    msg.setSourceEntity(8U);
    msg.setDestination(49010U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.27956534371141195;
    msg.lon = 0.9687122731629696;
    msg.z = 0.9489571473289281;
    msg.z_units = 153U;
    msg.speed = 0.04157267321542557;
    msg.speed_units = 176U;
    msg.takeoff_pitch = 0.9014093484324207;
    msg.custom.assign("VPUCWGUIEWHFIMLPZFSMLASKSOEOHXBMKUBEWIDCPDWVTPKEGNZWLVVVQLMHVAYKTJXYOMQDCUPAMTSGHHKRUVPMSREXHWJQOGAGGLTOYWLEIAERYGCYQBTJESTDGCCHSNZAPNAEHNB");

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
    msg.setTimeStamp(0.4949863381862013);
    msg.setSource(10742U);
    msg.setSourceEntity(146U);
    msg.setDestination(12913U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.03515946700517514;
    msg.lon = 0.8122068548552678;
    msg.z = 0.9132934032477862;
    msg.z_units = 203U;
    msg.speed = 0.5605115409994583;
    msg.speed_units = 68U;
    msg.takeoff_pitch = 0.2737807504722133;
    msg.custom.assign("YFEKNGDRUEFFLIGXMJITLVJDFWJVBSDAPHNSPWAMEHAQNYSHTRKVUHIKXYKDGNWJJPSPSMZDFLLQKZJVDOTYQCZ");

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
    msg.setTimeStamp(0.7822993730448458);
    msg.setSource(21051U);
    msg.setSourceEntity(4U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.4635177062580501;
    msg.lon = 0.12822934524212604;
    msg.z = 0.1540390241398737;
    msg.z_units = 67U;
    msg.speed = 0.22764534233239297;
    msg.speed_units = 175U;
    msg.abort_z = 0.6832675638545226;
    msg.bearing = 0.03401410907548019;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.12689708270529387;
    msg.custom.assign("MRIDPFDETIPFTUCVDRPIKMBMUNCGUHXDXECKQMAGUZCVGEKEAWSQGKIWSLOHCJUIWFCZMBGEGYWQTABNLDBOYP");

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
    msg.setTimeStamp(0.3779261284167045);
    msg.setSource(55427U);
    msg.setSourceEntity(92U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.2619630423820719;
    msg.lon = 0.24717969579450472;
    msg.z = 0.7172842596536079;
    msg.z_units = 34U;
    msg.speed = 0.16897794014670708;
    msg.speed_units = 123U;
    msg.abort_z = 0.8428164866828745;
    msg.bearing = 0.6118887338697911;
    msg.glide_slope = 209U;
    msg.glide_slope_alt = 0.012849886289624135;
    msg.custom.assign("NTAQNCXCPUWYNGZEABWJAOIQJKFAYRHI");

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
    msg.setTimeStamp(0.407305533527361);
    msg.setSource(11825U);
    msg.setSourceEntity(242U);
    msg.setDestination(28152U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.3635796380156078;
    msg.lon = 0.5582323068192983;
    msg.z = 0.8821056525789367;
    msg.z_units = 240U;
    msg.speed = 0.8574505763487791;
    msg.speed_units = 171U;
    msg.abort_z = 0.04114652581531819;
    msg.bearing = 0.7380805071981736;
    msg.glide_slope = 60U;
    msg.glide_slope_alt = 0.9926224479513093;
    msg.custom.assign("MGSIMYGFFBWDSBJJIMESOPBXEUNNULJTMOFMIXTSJUVYBT");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.3852527282628614);
    msg.setSource(43456U);
    msg.setSourceEntity(40U);
    msg.setDestination(27975U);
    msg.setDestinationEntity(19U);
    msg.op_mode = 0U;
    msg.error_count = 105U;
    msg.error_ents.assign("UWEJUXSVWOUMYQOGMROLDNHINYXHETSJWRNCPBUGCEWVIOTMTVPDOKXPIMZYRGKDUBMWZHRWFKKFVATNIBKBWXUJTPTBKDPUXHCDSWTFZFZJPGKUGDLXYGJASEAQMSGUGSFRQQQAIBQRMEFENZCROLJQSKTYLZFYWHZVAQDBOVOHCJYAJYHVNVGKVBAERVTEBUFFLPWGLHZJHMMRASCISDZCKBQX");
    msg.maneuver_type = 55748U;
    msg.maneuver_stime = 0.550292566900485;
    msg.maneuver_eta = 17972U;
    msg.control_loops = 4147705223U;
    msg.flags = 234U;
    msg.last_error.assign("XWOJRDQUDNVQNZXUZSCPIIVTYELAWGCAFAXZJTMAFSZWJGQTIJLXSWVGHDUTMGPRFLYRGLWXKUMFPWQBNNEJUNBNPRKWRNBSFCLACOHHKDVIBDXDZQYSJTTYKVBREWRGIYBJOPMOXDFHNZEOREIKLCHMYW");
    msg.last_error_time = 0.8088553233091423;

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
    msg.setTimeStamp(0.8505276851015445);
    msg.setSource(39187U);
    msg.setSourceEntity(42U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(56U);
    msg.op_mode = 247U;
    msg.error_count = 144U;
    msg.error_ents.assign("GPDDHNYUHUSRFY");
    msg.maneuver_type = 64645U;
    msg.maneuver_stime = 0.9338441030775526;
    msg.maneuver_eta = 58705U;
    msg.control_loops = 444381910U;
    msg.flags = 242U;
    msg.last_error.assign("JHDAFGWDWFJERLPRFVEKSQKPRUIKQCQUTNYNEXHOSMVJSFVFUWRYJZBQXKUNYGNSZVLEAERIQLLRBRZHPCDMLMGZCZPCHYWMBNH");
    msg.last_error_time = 0.5199352586233995;

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
    msg.setTimeStamp(0.2210035883859267);
    msg.setSource(30493U);
    msg.setSourceEntity(133U);
    msg.setDestination(26201U);
    msg.setDestinationEntity(183U);
    msg.op_mode = 86U;
    msg.error_count = 155U;
    msg.error_ents.assign("YUHFAFNKZLDAKSMVIAXMBENDZQAAJCTIMDTTGVCXSKXBKXWPNPVYJDUXPYZGUSSSEOHTHVYTQDIWFBOWYRLQBCWQUFGDGYELYOGMOUOMHAMSHXNSEFLUJWUZDXEYSKCDOZENMKNLIEIWQBNCFPXCWWPFBFRHTQAOTOJRIVQMEHPLFGGMIJPWCAGLKRXCPCRRVKROBEZNZSRQJZVHVSAPTJNVIMP");
    msg.maneuver_type = 9993U;
    msg.maneuver_stime = 0.8828994734464263;
    msg.maneuver_eta = 16487U;
    msg.control_loops = 4226926618U;
    msg.flags = 71U;
    msg.last_error.assign("WKCDOZOTZECFMULGIJBKQNWSUMRQLGHPUDPTASRQQVMIKGMLAAOEXNCEGEJKWCEOYDKECGYHACDNLFSXSXVQWVUTRXLKJYHTNIMDVHADMDORWUCINKBBYRFI");
    msg.last_error_time = 0.2931696444171922;

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
    msg.setTimeStamp(0.6019391208064142);
    msg.setSource(52856U);
    msg.setSourceEntity(74U);
    msg.setDestination(40156U);
    msg.setDestinationEntity(237U);
    msg.type = 49U;
    msg.request_id = 12345U;
    msg.command = 198U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 63463U;
    tmp_msg_0.name.assign("FRRFBCDNMQDDNNIARIELNPLGKPLKSAZI");
    tmp_msg_0.custom.assign("VUVPIEWZUSYXJXHYCSVJXWOCHKQGIAPBDOAZOQYTWSIGOPGLVFMQWPWRROVANNEXXAVENFZKYUWCWKGDEDGHENHARSPLUTIXDGLNIUQCBSROJCLSQARMJZVACHXHEAFBMBZPBLKTHDZGTOQJMPDLVDIMDNZOJEJFEUSBSFK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2444U;
    msg.info.assign("EIXKUWRICKCZNUBTHQOSTDYGFTBNHMFIJWVQXWZHQQLDTWQ");

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
    msg.setTimeStamp(0.5445463634535573);
    msg.setSource(11114U);
    msg.setSourceEntity(215U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(85U);
    msg.type = 97U;
    msg.request_id = 64861U;
    msg.command = 11U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 31422U;
    tmp_msg_0.control_ent = 27U;
    tmp_msg_0.timeout = 0.5945633066064289;
    tmp_msg_0.loiter_radius = 0.9165660590810205;
    tmp_msg_0.altitude_interval = 0.06816448474324133;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60908U;
    msg.info.assign("WBRQLNWDUYBVRQEHHYGETKVQAAMVUPSTVMPPBMNGFVSXRFQMNAIHQRSUQBZFVNYFLOPEHKRXAKVHLUTCHTEMNZIDLRXCGFWWSWMCFZFNCIZCKQWNDDIFDAJZMHHGIABSJMOAYQZCCORXTDLJNQDEQPFJITAPAYBJC");

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
    msg.setTimeStamp(0.9662592043862062);
    msg.setSource(57588U);
    msg.setSourceEntity(154U);
    msg.setDestination(48037U);
    msg.setDestinationEntity(55U);
    msg.type = 5U;
    msg.request_id = 44720U;
    msg.command = 159U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 64635U;
    tmp_msg_0.lat = 0.6614415900073082;
    tmp_msg_0.lon = 0.7587392924546161;
    tmp_msg_0.z = 0.4616791942182782;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.speed = 0.9698508830241834;
    tmp_msg_0.speed_units = 92U;
    tmp_msg_0.roll = 0.5023571787253444;
    tmp_msg_0.pitch = 0.8224625799980455;
    tmp_msg_0.yaw = 0.7492920783019882;
    tmp_msg_0.custom.assign("KEISONZAUBUWZEWZYTRRASYOLSUNPQFDRXXWOYQETCQCHXCSPKCGYIFHFPCWKRSGMHOLVGVCWLILGKZUXTAB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52196U;
    msg.info.assign("COJTULBNWYQQTZBWGNADJQFDQJXHVUKVQLRKKEZAKUDPBYGVLUUFWIFLEAGBDDLAHQCRGUKPKJENTBDSCTTMBWILNYYWSXUIDFSMXPQIICEF");

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
    msg.setTimeStamp(0.5419584299868445);
    msg.setSource(33150U);
    msg.setSourceEntity(179U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(61U);
    msg.command = 196U;
    msg.entities.assign("QGYZQIDLAVRJBRCQNBPSCDACPIFSLBTJGLUOHUIFKHFHIXKLMGZCESJPGXTTUWBZAYRYBLXPSSUHAWGEWACUXDKFNBOWOUUJAIQNGASM");

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
    msg.setTimeStamp(0.00848043394123632);
    msg.setSource(45702U);
    msg.setSourceEntity(29U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(234U);
    msg.command = 216U;
    msg.entities.assign("QYMJFGHSDEMQTFOETYVBAZKCOROKPSNWLBNDJBEXRZNUJJV");

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
    msg.setTimeStamp(0.14437136464442069);
    msg.setSource(36798U);
    msg.setSourceEntity(115U);
    msg.setDestination(28455U);
    msg.setDestinationEntity(84U);
    msg.command = 119U;
    msg.entities.assign("FAZHQZRCHBOAFYKWMQDKLEMIEBIZYNZYRNPTURSMWEUVSAQPGVXVNVFSRBCOWRVHPKJTCOBTWXZLGFLDXFQEEFFQQTIZKMOBUHINDDKSJJCZMVKNNYYVJSYLUTXPOSQBDPZXUOGSXWQLZHTJCPTRGZRMGNTKVCMJPAYWPLJGROODHAREHJUNYWBLFXPSCMWIOSDQGFICLIUGL");

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
    msg.setTimeStamp(0.37724274451383066);
    msg.setSource(26951U);
    msg.setSourceEntity(19U);
    msg.setDestination(61340U);
    msg.setDestinationEntity(241U);
    msg.mcount = 201U;
    msg.mnames.assign("EISIRRKHSLNJRPVYYVSOJBEIQARQTFADLVZBMNFIWZKKRTRACJUKLCXDHGTMO");
    msg.ecount = 142U;
    msg.enames.assign("EFUMFAXNLKERTUHTNMXEFZSXREWNLDHAEXQYNQOQJTPACUW");
    msg.ccount = 77U;
    msg.cnames.assign("FNZWEMJERMXUWWVYARHJULUXCBIWOZKLUKDXYGXCVDQNUORBTGBKPAMWNFVBRNVRTFSAMZDSQPRVFOTPOZWPCCEELDIGSVLQNHKIJKDTUPPHPXWAFNGMNXSNRWEIYIYHPYJXATACC");
    msg.last_error.assign("XOIWFNBGKTCYOYFOABASAKUYPCPTHZVQSDWVLEDHSHUCPIDFMOHWHVMBDRMLJIVMIZWXMVP");
    msg.last_error_time = 0.6658629889868437;

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
    msg.setTimeStamp(0.31001361622658574);
    msg.setSource(55924U);
    msg.setSourceEntity(237U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(197U);
    msg.mcount = 147U;
    msg.mnames.assign("XOXBRVGKBOPTQHLGTBMAQWRKENFMOZWGBRJDDGVSULFEGQROESPNBSOFVFIVDEMWOYITQPFJKUPDLANODKBPVQERUSRNZQHSTXCQYDCBBXRISNHDGAMJVTJETWEYLZGTNYYAMAZLHUXZFYDIWXZDUPARYJOSMFXGVVZYMFESYKCGCUARHIIVEPCLKNUSHXWQPWLNLFZWXSKEOJWAUBKKIYUVBXRJAMHIPTCLG");
    msg.ecount = 7U;
    msg.enames.assign("AWBPUEDFIEYQOLTILBTFNPZWZMKSSYCCOHFUSEALDIUCQHNBDHPEPJVHEHJIEVFTQUIECNLAMTSJSQMRIXZARZRASURJUYJJSUVLJZNPBHKQGLZGBKHVNVWBKTPOOZGBCCAINWFBXVRSTVQPYCNCEWXOUCYDWKBGUFADYSPIIQORZOPRLZWMMZTBHFGJOGWMDVJKKTPEDOOMQEDLLXYAXAGXYCW");
    msg.ccount = 247U;
    msg.cnames.assign("WYVHVMZERSFXGFMGCBZQBGBXXEAASJWAEJYIGGKHPRNYQVUYFAMXNOXLHCWDFINAUNMKHTRQYJCSLHDDDLAVNDPBECNAMWDLNIKTKZAORUKHEFHPUWVNRHTJGAGMPOOBIMXKZTBOEVTOJOYKIHJGDE");
    msg.last_error.assign("IMFFUCVQQRTQLQZNMNAWDINLDZBHIYBCPXGBBYIQHJVRZNFRMHGLDOSWKNEHHUFQLSDXNSKSXZWYNHRJRYKSWZRJTZGCRSFCGSPOUQJEAZQVBUJJUVDTBAMLDMVVH");
    msg.last_error_time = 0.4080882141385904;

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
    msg.setTimeStamp(0.48006852139008616);
    msg.setSource(12587U);
    msg.setSourceEntity(52U);
    msg.setDestination(54543U);
    msg.setDestinationEntity(131U);
    msg.mcount = 12U;
    msg.mnames.assign("PSRFZTYCSMZGKVSXFDJHWTMSWZCXJWEEJVERUMIZAQQHDCUNZLCFXTIGIRMWQOKCAHRBZUPWGWGVEBFFXRJZCPQPHBZVEFSUJVIRCQJWGCNSOQEEJINQHAPSMXXWYVWIPBRFJTBKOOXNPUIBRDTFYVMPMKYYNQVLNDULSTAOMSEYAAOKAEBIHHHOLSKZEGRKNPDDXGCFXJKYPLACHOGALIUMHTVBDUULTMDBULYZTBXOFYKNG");
    msg.ecount = 99U;
    msg.enames.assign("RDOWHDRSJKHNGITOOLKISPZMTGICBLTZBJJUBYEIGYBZUVBCARITTHUBPZWLDHDBCFMQVPTQWXVJJBBOMVCMAPLGHJEHRWKSHFUECLUHF");
    msg.ccount = 29U;
    msg.cnames.assign("UAMXGTLNMXBRJDSLFLKNTMMLLAZEIKMRKQFZP");
    msg.last_error.assign("ZWCGVDFKFNRBKYQBMHTWTCNJXNUBTLMIPYPKUFPXVLGWOGPREVIMXYFZFHHUYWOEZRQTGOYMPSDEBCRGFIAACNNXECQFNJOSACMRKQPXYUTVEBSLMHDKYADZHSCRLOWGRXBLQGPNWTJHASUMUPMKKSIMLYVNFWAFOVHQPASEG");
    msg.last_error_time = 0.8384441513777569;

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
    msg.setTimeStamp(0.3144385822262068);
    msg.setSource(63147U);
    msg.setSourceEntity(66U);
    msg.setDestination(3405U);
    msg.setDestinationEntity(96U);
    msg.mask = 20U;
    msg.max_depth = 0.6565044281793307;
    msg.min_altitude = 0.4580774955679029;
    msg.max_altitude = 0.6832489687419275;
    msg.min_speed = 0.6884169503095584;
    msg.max_speed = 0.7195667361270303;
    msg.max_vrate = 0.24492065989216294;
    msg.lat = 0.8513492493098405;
    msg.lon = 0.9073952760602505;
    msg.orientation = 0.11514752624474289;
    msg.width = 0.5464449954394971;
    msg.length = 0.6735926914856553;

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
    msg.setTimeStamp(0.30055098823955173);
    msg.setSource(55140U);
    msg.setSourceEntity(193U);
    msg.setDestination(16633U);
    msg.setDestinationEntity(123U);
    msg.mask = 107U;
    msg.max_depth = 0.1123939848232377;
    msg.min_altitude = 0.892416326950086;
    msg.max_altitude = 0.9342046187819578;
    msg.min_speed = 0.23515567018917993;
    msg.max_speed = 0.2534595571721745;
    msg.max_vrate = 0.6476518685456953;
    msg.lat = 0.8550131228278414;
    msg.lon = 0.7540800926955306;
    msg.orientation = 0.21633776842408825;
    msg.width = 0.8116386700549889;
    msg.length = 0.011492961903135757;

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
    msg.setTimeStamp(0.007251892961171236);
    msg.setSource(1029U);
    msg.setSourceEntity(161U);
    msg.setDestination(10460U);
    msg.setDestinationEntity(11U);
    msg.mask = 63U;
    msg.max_depth = 0.06006534255642326;
    msg.min_altitude = 0.3561595906922943;
    msg.max_altitude = 0.25815563452389434;
    msg.min_speed = 0.5568394295189207;
    msg.max_speed = 0.39355483173229344;
    msg.max_vrate = 0.9267316600210774;
    msg.lat = 0.8174661976765544;
    msg.lon = 0.2353977927554699;
    msg.orientation = 0.9306101346120567;
    msg.width = 0.8873195120573037;
    msg.length = 0.7315941470832023;

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
    msg.setTimeStamp(0.14696067081910713);
    msg.setSource(35156U);
    msg.setSourceEntity(3U);
    msg.setDestination(10801U);
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
    msg.setTimeStamp(0.5246514932449268);
    msg.setSource(10682U);
    msg.setSourceEntity(247U);
    msg.setDestination(51386U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.04108603869781402);
    msg.setSource(55749U);
    msg.setSourceEntity(101U);
    msg.setDestination(2296U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.14925960765673585);
    msg.setSource(11702U);
    msg.setSourceEntity(24U);
    msg.setDestination(6255U);
    msg.setDestinationEntity(151U);
    msg.duration = 44891U;

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
    msg.setTimeStamp(0.25097509807370444);
    msg.setSource(37124U);
    msg.setSourceEntity(107U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(36U);
    msg.duration = 44674U;

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
    msg.setTimeStamp(0.5131224497563105);
    msg.setSource(22907U);
    msg.setSourceEntity(91U);
    msg.setDestination(50971U);
    msg.setDestinationEntity(123U);
    msg.duration = 45745U;

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
    msg.setTimeStamp(0.5343412771531852);
    msg.setSource(10207U);
    msg.setSourceEntity(41U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(195U);
    msg.enable = 194U;
    msg.mask = 3130592528U;
    msg.scope_ref = 3334325813U;

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
    msg.setTimeStamp(0.16937275829971565);
    msg.setSource(27716U);
    msg.setSourceEntity(38U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(253U);
    msg.enable = 120U;
    msg.mask = 233791246U;
    msg.scope_ref = 3579591691U;

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
    msg.setTimeStamp(0.9834901281993198);
    msg.setSource(1131U);
    msg.setSourceEntity(206U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(26U);
    msg.enable = 65U;
    msg.mask = 1603721620U;
    msg.scope_ref = 1453575311U;

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
    msg.setTimeStamp(0.03329396820567687);
    msg.setSource(11327U);
    msg.setSourceEntity(79U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(146U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.886365587608507);
    msg.setSource(25416U);
    msg.setSourceEntity(41U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(158U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.9304378931397226);
    msg.setSource(48737U);
    msg.setSourceEntity(248U);
    msg.setDestination(43849U);
    msg.setDestinationEntity(63U);
    msg.medium = 111U;

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
    msg.setTimeStamp(0.025637691387552675);
    msg.setSource(9813U);
    msg.setSourceEntity(181U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7941338204318369;
    msg.type = 77U;

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
    msg.setTimeStamp(0.7324639459221262);
    msg.setSource(57784U);
    msg.setSourceEntity(37U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(201U);
    msg.value = 0.49337993798117796;
    msg.type = 171U;

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
    msg.setTimeStamp(0.25452244672501123);
    msg.setSource(61568U);
    msg.setSourceEntity(96U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7490334790482257;
    msg.type = 189U;

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
    msg.setTimeStamp(0.238884174925446);
    msg.setSource(37938U);
    msg.setSourceEntity(253U);
    msg.setDestination(65056U);
    msg.setDestinationEntity(47U);
    msg.possimerr = 0.7357944790871994;
    msg.converg = 0.024519330096357428;
    msg.turbulence = 0.3730942437432233;
    msg.possimmon = 237U;
    msg.commmon = 181U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.379885166774932);
    msg.setSource(61697U);
    msg.setSourceEntity(247U);
    msg.setDestination(64005U);
    msg.setDestinationEntity(165U);
    msg.possimerr = 0.8190849095369875;
    msg.converg = 0.023484836208913396;
    msg.turbulence = 0.3806264693012913;
    msg.possimmon = 145U;
    msg.commmon = 173U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.7825616432420153);
    msg.setSource(52609U);
    msg.setSourceEntity(242U);
    msg.setDestination(42206U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.19377062090499242;
    msg.converg = 0.4410766651371607;
    msg.turbulence = 0.5004681040450409;
    msg.possimmon = 240U;
    msg.commmon = 84U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.625197384985347);
    msg.setSource(43550U);
    msg.setSourceEntity(148U);
    msg.setDestination(58694U);
    msg.setDestinationEntity(40U);
    msg.autonomy = 229U;
    msg.mode.assign("FZQGDEWAZUSZELNYXNYAKQHWJLTLBJPFPFCNXHFYTTILRSRSJCABBIOUZQKNGGBXKCZDJNOCMCOWXPNAPYZVBTZIFVFXSDKMNHYLYSURRDDAEHUOTRTKJLADVNUPZJMWYITMQOGGIFCMDKOZXXUSVGDVOVBFKSGYHCIXMOCXYQEVOUEAJUEJIQRNVPTVWDOPUJPESSQMLCMBZRHYGQHJMWWIBUHVTTBFXAQHIRSEIDFHKMLWKGKAP");

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
    msg.setTimeStamp(0.6974313378494683);
    msg.setSource(56714U);
    msg.setSourceEntity(0U);
    msg.setDestination(60996U);
    msg.setDestinationEntity(112U);
    msg.autonomy = 35U;
    msg.mode.assign("NUQPPHDUIZJZACOLIIBUFRMEEXIJVVZCRJHQGDTNKRGSSWXEHSPNGUZOXIZYAQPFFQNUJATAQLPBABPLEMDFOXBYKVQPBVGLCVTBDIKUDOKTJYYXPACKRNQNKMYDQSEJTGKVJMCYTVZRGLMFXJKACYVDHFRWGOFMPISBHWDYFMTLEWHMRRRBZXGZZLGNMWCOUOTVSX");

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
    msg.setTimeStamp(0.21595373762926084);
    msg.setSource(19318U);
    msg.setSourceEntity(174U);
    msg.setDestination(16273U);
    msg.setDestinationEntity(183U);
    msg.autonomy = 60U;
    msg.mode.assign("XGQDPZTVPXHRSIVSBICKJERYWADABZRXATUYUIYCJLEYKVLKIPISHSMMJNFVSVWTWSIVNHINRCKZXBJZOINGDERPOTDAQFCUFTEINMOAAQIYZHZBGOKBHMBDPVXCFMQWAYXGGYWDZMKUGGKMEGFTPEJRPQZXFRFVKOTMXCNKVDMSHBMZTEULRCYJJNNFVDFQLCPDLJYWQNUAULLLPRQQGBUUXOZPWETRXHEOJYBTDHNOBHGWSWAAOOUCC");

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
    msg.setTimeStamp(0.3995783108517883);
    msg.setSource(44078U);
    msg.setSourceEntity(134U);
    msg.setDestination(21583U);
    msg.setDestinationEntity(183U);
    msg.type = 54U;
    msg.op = 102U;
    msg.possimerr = 0.13405362925113462;
    msg.converg = 0.16059184221070533;
    msg.turbulence = 0.31887779862890975;
    msg.possimmon = 28U;
    msg.commmon = 218U;
    msg.convergmon = 228U;

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
    msg.setTimeStamp(0.011181766776472535);
    msg.setSource(38787U);
    msg.setSourceEntity(101U);
    msg.setDestination(60382U);
    msg.setDestinationEntity(225U);
    msg.type = 6U;
    msg.op = 106U;
    msg.possimerr = 0.26925537215575945;
    msg.converg = 0.5242592017127183;
    msg.turbulence = 0.8666187175033465;
    msg.possimmon = 148U;
    msg.commmon = 139U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.9709538137791557);
    msg.setSource(56782U);
    msg.setSourceEntity(199U);
    msg.setDestination(20785U);
    msg.setDestinationEntity(171U);
    msg.type = 236U;
    msg.op = 246U;
    msg.possimerr = 0.37224218934451525;
    msg.converg = 0.4079406909491;
    msg.turbulence = 0.24493235759564946;
    msg.possimmon = 107U;
    msg.commmon = 230U;
    msg.convergmon = 127U;

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
    msg.setTimeStamp(0.37865426407655367);
    msg.setSource(511U);
    msg.setSourceEntity(21U);
    msg.setDestination(17653U);
    msg.setDestinationEntity(197U);
    msg.op = 116U;
    msg.comm_interface = 158U;
    msg.period = 32435U;
    msg.sys_dst.assign("GHAXCIAKWITOQPEMWJHTJKUEQQTGXAHEYZFLLONYIGFDEUGJFULIFPITZMYNATUPDCSDBBPHFQRNZGKPVYFJRMMSNOWRDKNHMXESNWGRVVSONSYLMXOZRDRKPVQFWPAEOCVHLCHCDOTYKRNMVDDPSBUXXEOJOZXBIQWOUWZGJLBISKRBXKCZYDUKGJWZFLHYQABMVXWCJTDCYABZHVATBPFREIEFCSAQLYSL");

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
    msg.setTimeStamp(0.933423282745225);
    msg.setSource(9540U);
    msg.setSourceEntity(16U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(235U);
    msg.op = 19U;
    msg.comm_interface = 206U;
    msg.period = 21147U;
    msg.sys_dst.assign("CHPJQUDJWLOMYOMKVLZGCYJDTUJAIBKXJHQAXXWNFMIXCIBMGSDPEGORRGKIILHQXVAYTUTFQAFUEHLHPSDPYOFSSZFZPOQDAAFCWIDXMTGEMKAJOFVYKRMVYFZMZIEZTKVCZROSTDCLQOKPUSJMJRBRAHALUSVQGEHVLENZRYTXLEBC");

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
    msg.setTimeStamp(0.46962170885021637);
    msg.setSource(49599U);
    msg.setSourceEntity(187U);
    msg.setDestination(58875U);
    msg.setDestinationEntity(253U);
    msg.op = 125U;
    msg.comm_interface = 206U;
    msg.period = 26364U;
    msg.sys_dst.assign("DMDWGZPVHPKUOYGCLBFMRDOXSCUKXLXWGJQSTYPFKMGVMBUKURZLGXNKTHPKJQIJTIICPFRFRFVHKABHZVNYWOQFMUOPAGXANIEHQFKMIWAZSYRS");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.8759535593907964);
    msg.setSource(52725U);
    msg.setSourceEntity(119U);
    msg.setDestination(5601U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.18971051660793248);
    msg.setSource(17855U);
    msg.setSourceEntity(193U);
    msg.setDestination(53573U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.2983675624216068);
    msg.setSource(27112U);
    msg.setSourceEntity(66U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.9877825140136125);
    msg.setSource(14496U);
    msg.setSourceEntity(110U);
    msg.setDestination(15685U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("KMGCXVSVFVMRRZCYSJTSOEGXMZDASWUGGCJVHEKRKARKXLVVZSZHIDFDNRNNYMGWAVZEMOHFWGZCOYJQNZKILQGMCUQTMLLSFPGTRJORABFFYPIWPZTBOFPBLUSHUJFJQRNYPJEQCKLKAUMLUPYELVTE");
    msg.description.assign("MXHIPJIRPMSWDCNZWVDAAZJEYNLACZFDAYWQOYZVQ");
    msg.vnamespace.assign("QROBZBVETDTPWKEMDAEBHARCYKJCQULIHEKXDGQTGYWCLGARVHPIPPCOGUBPFLVWJZFYXUATSRGMCXWMJENGSZXRYDQGGSOLCASNXKMBXWWPGXUKSZOJDMHGFLJEYAXVNJCNNDQCTZPJINSCRMLIIKKSUPWFVOTRMBXFTHZKICFUEDHHNPHLENMLIEBTFILZQJSQYNOVOFQHUUVNBH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IOAKMCYQPJXRXVWHUCVEHLTZRNJCZMUPKMTSDOKWTFWRNUHUAUNPLFZVQCEGASIYJVOBLQXJLEINGYWNLLPTLGJ");
    tmp_msg_0.value.assign("HPLVUOHBHCLNYABUDSEMVNFAODMQHTBM");
    tmp_msg_0.type = 179U;
    tmp_msg_0.access = 114U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SDFVWJAXDYGMKSLSNWVZCPZPNNFJHOUGMUGUBUBEHNQTKCESSYVXTZNHRFDBECMZUCWFMPWUVQBVXDHVJSJOKXYOALVKAJNXMPWGIRTAKHXEYRCIBJICMLUORITOABVDYVTDMXKJFSUBTZGMLTBTVJFFHKKLSQGREXGRTIKYYAZNMPFINQPTPDDWREAZGCYFWOCQAYIORFDJCH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QIXEMJDBFMQNWSVGQMCAQEKTBHGLYWSUWMJBPATACETUWHSJDSNDKLFNVLDXEIUHGOSZZQOABZVXBPPKREHIPKSODVSEDDTRWQGNZZVGFICIMKNMTSAVFYZCEJUYHXELCWFHVRJBPKPHTJPIIQLJNZEXYJLOCLRYMBODZOALGQHHCVFWKBLFJX");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9580447165867562;
    tmp_tmp_msg_1_0.lon = 0.9052687422840251;
    tmp_tmp_msg_1_0.z = 0.38835614913729466;
    tmp_tmp_msg_1_0.z_units = 27U;
    tmp_tmp_msg_1_0.speed = 0.616836984311647;
    tmp_tmp_msg_1_0.speed_units = 176U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.06644941076200894;
    tmp_tmp_msg_1_0.custom.assign("XKDQDIRLZXPYCDNUJKWXWSJZDGUSLFXAETPIBJGXLSNBYKHVNLBZVPUIHDMVGOIYTQGVJLFNGFSRPXMMGWPAJAOIYLFMEBICCYNZFCKUHVXGONGICGNYJOJKFSLZQCZYCSUAXVWEWPFCWI");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PowerChannelState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("PZHDONMVACDHABUJJXKNVLYMDQIOGUDNYBLSPSWSKIQKGZFHSGXUNTIPQAERELAHNDEMPSGBRWFOHZFSNVHFWTTJCYPIRMGXQQDIJLGDBREVQBXFTRCOEVYWVYZGJKAVKRWUAYMZRTJQXIHNBOYUMLJPWVBBAPCTOPFUGKXHUNCXHILSGWLWNZCISIMXQJZVKDCOLZTOCJKUXDMSAKFYZCQETLAMQIKFBJOSAMERCDYT");
    tmp_tmp_msg_1_1.state = 11U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LGQUZPNPWAEUYZKTQIQZWICTPXMQVUHSIMSLSGJTBSNIFCVMDNGLJHGTHQTLZFUWFKYFFSNNILJAFXABRYGJPVKYGKTMIOAIWNSFOHZBDW");
    tmp_msg_2.dest_man.assign("ZKWWDYEABUSBPRPGDWUUDBTFVJPGPMVWFVHMNTDXEYXDHWDGUHAJCRIHPKKJPZSXKRATRBOCVEOCTYSZNCDFPEAIXIGKTGAUFBERDFQVUIKMIXQQQTXBXHLYPGQARENKOVBCCRNIGVLOFNGXROEEEIQSLSAOSQZOFTLFKMPJUYWSNHITWJEZHAYVJZJCCQITYMBLZX");
    tmp_msg_2.conditions.assign("ETQOBXBWNFOELUVDIQXEROKCJFKMNIEAXJDROKWKVCNUSGZBQWXLOMYYYZGFWLDDSXHIGUYPKNAYGPKPDWBSYFAHRAAMSPMFRGONRPEDAFMBIUITVUMJZORDCILVAYZTBQCSZGRWGHMXYABFDGEXKWMEQTLFFUJPJGCLJXSXQNNOUPAQQOVHAIBSLCSERFZHKSNVZZNPLCVCCTEWG");
    msg.transitions.push_back(tmp_msg_2);
    IMC::HistoricTelemetry tmp_msg_3;
    tmp_msg_3.altitude = 0.42630938782290295;
    tmp_msg_3.roll = 15733U;
    tmp_msg_3.pitch = 38191U;
    tmp_msg_3.yaw = 63984U;
    tmp_msg_3.speed = -21132;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::Voltage tmp_msg_4;
    tmp_msg_4.value = 0.05531409129277354;
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
    msg.setTimeStamp(0.9099258559809331);
    msg.setSource(9561U);
    msg.setSourceEntity(16U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("ENEXLKCRBVUFHMPTWHQQFZGQGTEWGNIJLFYSBPASPPPZLCXXGYZRAITCFSWODQDUAHVUUUZWEQEFIDADBSCUZRDIBQALTNRAZOYPOMMYVSDGAVKYVJEVRBJTNCVOMMIQSDJGGNRODRMLNHLSWHQWJKHBBO");
    msg.description.assign("VZZYEPHDXRPMCQBPVXZDZLRMTUDUOQHIZYVYFAMNWTXHJUAPRCGMQUEMQDPBHKPNNYVHAKSBWOHOTJCQYSZYESRGVBABCAILWLVXWUEQLAPKUIUXXVSWLFWOBXZNBODDOLRGVDBGM");
    msg.vnamespace.assign("CKPZKCSQQVOCDNFAFCUIAQEXBOHFUEXENUDGKSGOPVKCQWZETSIRAHYZXZSAIPCMPJMLWDXAFVDLSRYGGGHHUMRZWXBVBUHIXKPKTZBYUVNKNKNZVFNJSVHCHLDJCXIOYCVXMMHSOEOTOPEVMLRGMTMWLBQEZTLFJOLRBHSIBUWJQGIPCJBWYJJRDEHIWKYPTFYGDMDLNYKUTDQOPBAWDESUAZRINXWNMOLURJPQTFFYEQXA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XTJYSIZOWTS");
    tmp_msg_0.value.assign("PYAALIWMTUEJCFGBNVJSAVFOZHMBAJDSDBABLIPSDAWXKJNHOZVKNCCRQERQQPSMIVBHGHPCHDTUHITGUIKFUJHGRLARTCBMLRDUIEYQGDPLFOSOUSNYJFKNIQNMY");
    tmp_msg_0.type = 108U;
    tmp_msg_0.access = 137U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MOFTUIFDAPSWZVGKVSDWZFHRRAMEOLSBMNXSZPPVVTYBCWKYDIFEWYWJSCGPEDPXETALXBHCHWM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AFGNLPWXSELRCAQPLBDNCHCJAKFNVTKVIXIFZQYWKLNZYPNZWGRQZWSABTECTFUPJFIOEXXIKSJOCDNRNWJHTIWCGDYPDAPENOJUMMXKBHBOAQIBYGLYSCQKXKFMQZSTLBEUUFIIMOFKOXEIFE");
    IMC::Dislodge tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 2717U;
    tmp_tmp_msg_1_0.rpm = 0.43626636480595005;
    tmp_tmp_msg_1_0.direction = 186U;
    tmp_tmp_msg_1_0.custom.assign("SVCJMKIXHHGTMMLTFZOLLQAIMNIFQVMNYSSZRQZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::WindSpeed tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.direction = 0.39903019394754535;
    tmp_tmp_msg_1_1.speed = 0.5715772631948354;
    tmp_tmp_msg_1_1.turbulence = 0.22768945075724278;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SmsState tmp_msg_2;
    tmp_msg_2.seq = 1877177876U;
    tmp_msg_2.state = 60U;
    tmp_msg_2.error.assign("BALVHBZJQYXXBURTYCVMIJAJDTPRSKLOCDJAPNSDSHUCNBMIKAKRYWJKBTNQAWIBKJQGIEAUWMLPCAMKXPFLNBQEVTUNQVZJOFOJERDPVNMEFRKASFFWDSOITHTSZHDEEZXYXNPRHO");
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
    msg.setTimeStamp(0.14224493441163588);
    msg.setSource(22529U);
    msg.setSourceEntity(27U);
    msg.setDestination(47088U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("SNZKRUWXXCBQRQDRQGXXBRKQAZAAWFIVTFWCDCSDVNYCZEYQAEMVRHOFOFGBVLGHYEUIUOEWKJYMTNDQNRRYPEWNMPGLWIENSEPTWJOJCZUQHHA");
    msg.description.assign("RBLRNFTEZNNRUPNHRHAFFXUAFTIDSVUUVVINLAMTEISRTUOQBPKXZKSQZILOYTCPOHHPGODLPKTCNSYOTODCYPKQZMZWMHIQACQWDDIWKLYUSACFLRKXVLCLERHBMTAMXWHZQFUOSTYOZXGKIQDIGYZHEAPJQEDEFJWCMEXVEYWXQVNGGOJJKBTBVZUXNWVJBWHGXOHMLRMFSCGNZVJPVJRYPJYBBBWA");
    msg.vnamespace.assign("FBSLHVYYEKIGZJUVKDZAYHURGEBIPBJEUOMFKUARCSLQIAXDCSMWSABDGQJDIPDFHSRKOICRWKEXZQNXKXHCLOOGFKDMXSOHMPNXOSTEJFVNEXDQSWGZNZMBIBPYHRCAPIKFWFJCRQKHZONBVMOBLLWUPHBXAYVYRARSHZICTNYMYTLTVDEQZWNTREXONWPTUOUGJWAJBTNVCUCQLJAFGXIQEUGDYEQYK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YBPWUCLSPZMCGXDCNXLJXHQIMAVHVDKTDELQCFPDBSLQCWKYGYYEECJKUOOWMLKGVUIRNRVNYTROIJNMREBEQWSVQRMWEQZHJGADTABMIZRNOAHFKQYMNZNJKGKVFPXGUJWURXIDFHTUICPFEWDSZNHPMBCGZGJXW");
    tmp_msg_0.value.assign("ZVSLBPJEWNMZTQEYXWGYBCXTRANFWHWXZSUIFCIZYLUDFPVNEPNXVTITKLOLVNOFTEZIOGEAXPFAQJJXJDLQLUQSLODHCZYMDNYFHSKBXJWYMWDGDASCMUQKHUUDKINERXNJHEUFFRMRPRTQAGMLGBSGOBVZEJTUHIONDPCKLPYKSMILPAPDZVTYTDSRH");
    tmp_msg_0.type = 92U;
    tmp_msg_0.access = 16U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IUOZPLDYAUGDMQCQMFEHWMIDLRCGAEBZKOSNLPSRWUPYVPNOAULJFIBFPTPZNTOFQVEHXDTTOBEMNUXICXEG");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XGGRXDMPMQQCLAEPHGBUTOIUIJTUONQVPLNYQEVXCCZSIXKWLRWHCWXRTGQTBXFPFGGJFATRMXEBEUUNWBDNYDHYKAUHKVJRDJPSIKGYYCDALODQGTFXFERXVBNLAEVCRUCL");
    tmp_msg_1.dest_man.assign("ZPGUFIHPEAOMSQVQEVHLPBAOEMJMNBZBZTUDWTWWXNPBBHGDZMOZBAPWRIJIBXUSLYLJQKJZAOPWYKCLKDCSNKNVCSMHXQFQWVAJJVGWZKEELRDRCVMIYTCIXGPPGTRKWXYVCJETDUFIUSRTZAYTRCIEDXAGOHGJCRGMPLGKLUAJXHSNFYSNUTXFEHBQDUDLHFVU");
    tmp_msg_1.conditions.assign("TVXNTTLWOIENRLYNUSPWFMKKEILQFPCUHUFQCAVBCOFAGZZYKLLBYSYCBLVXFZSEBMWHI");
    IMC::OpticalBackscatter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.8291789505519297;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DevCalibrationState tmp_msg_2;
    tmp_msg_2.total_steps = 6U;
    tmp_msg_2.step_number = 115U;
    tmp_msg_2.step.assign("FAYPIHBHYHOVLEDJDYKBDPBYIDRTBYTERJAXIHOZILSMNFBUSSXSWMJQRPMNCWUBZELMOWINUOMAXMCMKIGFSSKAWBBKSRHUZUGOMKWEZOETHVPYLIZYFGBJFWYJGEPJQVNWJMWJKUQEVFTHUQYTSNVWTRIVOCLOJCIGOGPXDLJVXLXNXGQZNAZTERAUDGCLKPCDAAPWQDQCOICSFNZG");
    tmp_msg_2.flags = 152U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::NeptusBlob tmp_msg_3;
    tmp_msg_3.content_type.assign("NGJUKMZYGEUHBATZCSVIDKYRVQTSBLBPRHIRVJBVJPFUIEXUCTLKSDQTTFTZUWJSVYEFUYSFSJWMBEPBYRAQMKOQMEZJWNIUBYHLAIXBQHUPVPOECXNNGACNECJKYYFRTADDGWHBXKBMAFOOXSA");
    const char tmp_tmp_msg_3_0[] = {2, -95, 36, 4, 56, 3, 14, -97, -53, -61, -74, -117, -22, 64, 81, -3, 87, -70, -14, 49, -56, 8, 43, -64, 38, -68, -21, -114, 43, 110, 29, 62, 119, -87, -107, 52, 86, -49, 120, -126, -65, -65, -69, -35, -60, -7, -105, 124, 97, -43, -2, 5, -9, 114, 47, -78, 62, 48, -43, -110, -50, -3, 77, 63, -28, 70, -3, 32, 41, -41, 108, -58, 97, -78, 126, -94, 65, 52, 74, 10, -68, -88, 60, -115, 94, -124, 8, -31, 3, -18, -80, 106, -81, 88, 103, 19, -90, -33, -80, -4, -82, -112, -4, 0, -91, -12, -68, -14, -82, 93, 102, 8, -128, 102, 56, -113, 77, -88, 63, -40, 92, 8, 82, 88, -47, 37, -18, -75, -9, 27, -53, 80, -88, 114, -109, -32, -104, 74, 118, -5, -4, -75, 1, 113, 30, 13, -101, -44, 75, -47, -78, -65, 91, -115, 100, 102, 124, -15, -121, 16, 89, 47, 116, 125, -85, 56, 44, 9, -8, 16, -47, -105, 53, 54, -40, -71, -60};
    tmp_msg_3.content.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.0630129214467322);
    msg.setSource(34054U);
    msg.setSourceEntity(130U);
    msg.setDestination(7732U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("NRCQRKEBMMIJUCLWZHZYIDGVBVVCOYLQDZEMPJPDXSUYSEAAOINUNSILFFWGOKAYGPHOECQQKBBLZPBTBGNBOOKDBKXMFJTKHXMFGJNTTDZSFLQAYJPVILOXFDZTPMCMAUKXKXZBPHSNLCWHSJW");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 35192U;
    tmp_msg_0.lat = 0.2719613209367182;
    tmp_msg_0.lon = 0.9389745863845224;
    tmp_msg_0.z = 0.6001789666933784;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.speed = 0.08642450491847942;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.roll = 0.7651787687866142;
    tmp_msg_0.pitch = 0.20188116337425266;
    tmp_msg_0.yaw = 0.5097287213613345;
    tmp_msg_0.custom.assign("AXJERUZGYAMOKJLFBTBEZGQNOYXTHOPKQLRITKINPQWGVMZVAKMDVNERXNNOPQPDKDSAUUQGTRWVMRJ");
    msg.data.set(tmp_msg_0);
    IMC::Chlorophyll tmp_msg_1;
    tmp_msg_1.value = 0.6573133924259518;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanStatistics tmp_msg_2;
    tmp_msg_2.plan_id.assign("FPMVOESNKMNCYTORSQBDKVPUAHBWJRMZFQBNQQUCHUHRAJVEP");
    tmp_msg_2.type = 54U;
    tmp_msg_2.properties = 210U;
    tmp_msg_2.durations.assign("GNZVLDPHFKQ");
    tmp_msg_2.distances.assign("JPROKNXRXJCVWIQTPTTLHHQPNVOEJXEBZHWAGJIUKDTUFHKMEWBBBDPEYKOCKZSLFVPCICFCUTGYGYTWOEWSLDCAQWNHFMNFORQSDPUQVISVYPZFIJYURKFAWIZOXUMLMAEDMIJGZXWLGRDKDCYSYBQMYQKHHJDEMNDRTOQECXFAGZHVILLNZQXVIIJLZFMKNAJTCAXRURUO");
    tmp_msg_2.actions.assign("SSGDCFJPFUYKGZSWGRZDUZCXMPYGIDWYNIHOQRAQTJAOZPIOENFVPFTUPUWLSUPHJBQLIIXIGCRNVCZMRSFLZEMTVGYHPIAHCMWKGEEYCXLCXJQEATKHVGBJSQLBRHEAMKRORVLTVUPSBWFDBLYIEUKLFNQWPVUNRIDXOQXSODNWOKLMBNKXMNJSSXFPLJUJTTDQVZTKHNEWYGTTIVMMHNRYCJZCWCQKAMWJAKVYDYFDOBXOAA");
    tmp_msg_2.fuel.assign("ZBTJNVHSUZPTEFDTQMKTKYAIJMYEWJNUKABQWRDSRSNGHNSJBWGYUWKOENCIWNKWWHBLWYMLADCFIMVKAXZPXLOKSXLFTQQSDYHPJBFXLAXEOYLFNDMLOIPTGIVUFIKGCCBGXIKMJXOTXSPHMEYRQXSORLOUCNCGNQEWUBVTPZBAQHYZGEMCQGVREF");
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
    msg.setTimeStamp(0.4053397050598643);
    msg.setSource(29667U);
    msg.setSourceEntity(176U);
    msg.setDestination(38U);
    msg.setDestinationEntity(70U);
    msg.maneuver_id.assign("DMGSTXZQFOCTUMMBHAOBENWAEWNGCYFZQMQPDAJJPNFUEAXZBYPEVLRLVYS");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YREIKZIIURDMXQKXOLOUFTANEPTAGQGXNXRZNKJWSQCOGELKFJCSFNDDMHLCFZUEPEJITHUGLVJLRKYCDPXZBPMMBTVMAKHDSPOYQWNQMZJNPRCVUYVZDMABRBAUNSYAK");
    msg.data.set(tmp_msg_0);
    IMC::Distance tmp_msg_1;
    tmp_msg_1.validity = 192U;
    IMC::DeviceState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.520014168774952;
    tmp_tmp_msg_1_0.y = 0.0599028029062062;
    tmp_tmp_msg_1_0.z = 0.2621503220821443;
    tmp_tmp_msg_1_0.phi = 0.4963785185992545;
    tmp_tmp_msg_1_0.theta = 0.7797799474854928;
    tmp_tmp_msg_1_0.psi = 0.5520353174042246;
    tmp_msg_1.location.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.value = 0.42555469081127983;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LinkLatency tmp_msg_2;
    tmp_msg_2.value = 0.819108139252398;
    tmp_msg_2.sys_src = 39953U;
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
    msg.setTimeStamp(0.8077288021526374);
    msg.setSource(42032U);
    msg.setSourceEntity(253U);
    msg.setDestination(19552U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("EIAFIEPKPQRNYTSLGSGBPSNMRJDMUZ");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 63559U;
    tmp_msg_0.rpm = 0.4421818816969594;
    tmp_msg_0.direction = 141U;
    tmp_msg_0.custom.assign("RCUEZTTPBQCHULVSNALMMZYCLTDKEYQUJWQKQWF");
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
    msg.setTimeStamp(0.4884994654584708);
    msg.setSource(7279U);
    msg.setSourceEntity(73U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(211U);
    msg.source_man.assign("CJMYLTOFVEMLROGAKNFSSTXPIVYUETVQZBAELLQHRLIRTWQJUH");
    msg.dest_man.assign("KOXZOAEDTRRHLFWVSMRQXTDOZOXGCEUUSCAMWDEPKDYRBRIWIEAWIUAWPCGMRNPXMBQFGWFLTXIALKWNTVLJBKGCLSTPAOTQZPEPVSQETNFOQHRWBUYRCKNBNQQDYEZNIOKSMGRDZVJJPVYVSFVBNGIHAIL");
    msg.conditions.assign("OYJXKHFBRWKMRZJZQZORAFJOLOCWAOFNZUVMTKSMDBFQLWBPEOIEXBGYWWETADDSXTFCGCKEAUQRYGYJPAHLVQKUNGHOUUHLLFLZNZYY");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1709231670U;
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
    msg.setTimeStamp(0.7501544875757922);
    msg.setSource(23805U);
    msg.setSourceEntity(87U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(224U);
    msg.source_man.assign("OBKKSFYRHSAWTPQBADJYQCNKZGPEGYPSCQWVTWHZVCYMCUYLBTUOBJJFTWJCMIZDPVSMEYPOVSWKDDOGDMCRMILJGECMXLUMDEXFWGRMXUISKXVNSCHPPCCBTDTUAQESZNJXHGWAIZOOGFLEQXJIHHLNVVNYZJYKUSDQSUWZARVRJOQXLLKDGBHIRFEQEFDT");
    msg.dest_man.assign("EOTFRGLSMXMTUGLQOKYPSUZIELHCBAKSPTAWXDJTZHOVCOHWWXFAGTCGUIRUHDODPVNLLMJVNQUMACVWDRMSKWOAKSILVIFGLJPF");
    msg.conditions.assign("JAAQNYZDNTRQRVYLSXZTNYFMCCBZUTVGJMEBOUXPAOLOBUIPVMKOOCHZGAIRZIDGZWLIMGRYRLVFIIHFTKOGRVINGFPOFDWJXMJTKHCEHMBUJVMLCBBVLFLEOTZOYWLYUPRTEDJDENAGMQJYORHFDECXKNHGMPQPRKPTCECZESCNDQPWTKUXQWUSKJQXISNHNMQZFJSKAQUWYGNFSEAJSTIDVWBHCX");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.9555487990749925;
    tmp_msg_0.dist_min_abs = 0.8728907128250448;
    tmp_msg_0.dist_min_mean = 0.9921021100641952;
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
    msg.setTimeStamp(0.7996142064981312);
    msg.setSource(37253U);
    msg.setSourceEntity(138U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(54U);
    msg.source_man.assign("HJPPVBDISJZYHENVCVOJUUONCGGAJOOXRUSINVGUCEWVACYEREPFEYOZZTR");
    msg.dest_man.assign("RHJURQYEMDZPVYNTCKMBQDDKJACUZYRCIYXMLLRORLGBBCEQMVEOLWUEYWONGBOVKARSEOSIXBPHQTCWJVNGXLTDBTUPZWWTZLPSEHAIQJHXIXZKVXVIRYFQHGJSTXYTQODTSBLLCDDXPCLFFUHBEAJKHIGQPZINVAMFCWONLSNAFITIWVQNDRVKKEOBWAGFKPMNMWXHCGFYUPUZNAJEY");
    msg.conditions.assign("YDRNTAXCWTTAXKRSWSHPCPAOPYQNNUDSZTEEPWLEUVWXNVYJKHQHJIWBXGFARCITTOOQXHJPRICPAMWDWBKIDYBUKNRCOGODNAEJGSBFSEAOISQIZXQTICWZJLJVYAUMSW");

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
    msg.setTimeStamp(0.4506051253178648);
    msg.setSource(62506U);
    msg.setSourceEntity(155U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(254U);
    msg.command = 79U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LVMWZHEFSXARVPXRCJMKEXHULSBYEAHDIMNUNDGMMP");
    tmp_msg_0.description.assign("HXRFIRVEMKCWNYGMCVNYEMUYGJHUDSISRFFZMBCFAJWLQNJWTZBHXTWPTVZWYKINZHQUMQLRMODHAPGVRAKLYPBIODUYAJSDRIKBTGFPODAXGQCILNOYSLMYTGVSF");
    tmp_msg_0.vnamespace.assign("TUDHHGQRXASRJOHQMYROIVUTDTDWSZY");
    tmp_msg_0.start_man_id.assign("JCBYEVRNRWQTIXOLDAKCNYXRMZQSKUFRFEMUOMZGCSBIYDXWOKM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XNVDOABRWCKNNITRWEOMLKVCBXUUZVCPPUXZXEJMQFCYOFVNHQMTJIARYVYHLJIYK");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 32864U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.266334538870756;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6585033936916568;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9557032525476762;
    tmp_tmp_tmp_msg_0_0_0.z_units = 158U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6827149899238897;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 76U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ELKQFWWPUYSEFJLQKEUSNOOCQFYPQRDKVTGPIWNWIGECSKKTKCVJDNZAMELLBLIJDRGZCOETVUAZFYREQFFBTJAONPUKXYCYXKIZHTAYVRTHCDDXJMQFWORRPWVUWHXPGXSHOABWQOQHISZCULAC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("CLIPHYQDEHDOGOENVLFUMOMHVTTMDZLUBQRKACIVUEGQNZOSMFBZJLYFDAXFKVDXYBDHBNADEJRWCPBFCEXZFGCMWIUGTQCOLDRAPTWNGRXSHELTMEKCOABSCQXABWTZJDPKWXRYASTSQNHKVUZSTZSOXWYWYHFCZXGGTNROGURPWXPKLIVYFSGPBFMYUQIKPQUIJHMAQMPKQIBHNULNOZM");
    tmp_tmp_msg_0_1.dest_man.assign("KCOYDSSGEPTZLEAYXKVHJCONLTKQMCDKLTRIVNURDEVBERAMQQWTQAASLRUKJCPPJWAFYBLKPEGXYSNZGVTWRRHOHKIGRAWXDMZWQRQUUHMPICNSNFCPMRJYHUBNQJLUCTWCFBFSN");
    tmp_tmp_msg_0_1.conditions.assign("BCPCMJYVLHVUYRVBEXOTUGMTDYJLDLIMVUZPXHAPWJUWFLMFNNXEDAXNIQQDXEAMDLCKAGZFIPNZSTTGSHIMUFFHVSJPRQNSCZQLHBWHUXPMVGJSNKFTEURPSJJIIFHKWQLNZCBKXCBGPEYS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::OpticalBackscatter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7207441469266487;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8359376097767551);
    msg.setSource(65228U);
    msg.setSourceEntity(121U);
    msg.setDestination(20772U);
    msg.setDestinationEntity(174U);
    msg.command = 52U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("POSTUDEMELGNQMRFFXJPSIOWHWUOFFKPFWLZJHUPTZVIOGJFBBPUCWMTKYXEKYWMOAYPLUVUJTQTRBNYCE");
    tmp_msg_0.description.assign("MFYJARIRIETHIEMPTLGJPAGXCODYNKLHQPIUDGULGGAYN");
    tmp_msg_0.vnamespace.assign("AZCKTIZPMRVMNFRYGVMCKJTSLBNQCSVFLHIPXHZYJTFGPGRRHHSCUEMCMZANROXDXUPYROYTIQLESJIRLXAFZOHVPVGXUAZENTQEJFEHTGBPYQHZJVDVEQFAISOZOQLOCROUUSGDPXKAPXAYUPMXZDFWAIUMMSRNUBGQDDCUJYFWWLWDYWHISXCNWFLJJKLBIBAKOEMKGDIQNZG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GRASKBIKQX");
    tmp_tmp_msg_0_0.value.assign("TLAXIYROUSUMNESSSEHLMCYDYLIURKJWZKTAZWBTGMMYKZODRWSCQBZVOZJDCZXBMQWVALGQWRCQMPEWBALLIUWSOYHHUVDIJMHVQXUYWHVPJVFRSFJRNXWZUDRLKOXGFFBYPYJTFTRKXHATDDIPRGSANRYAWIKLPEAZ");
    tmp_tmp_msg_0_0.type = 74U;
    tmp_tmp_msg_0_0.access = 190U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WBSMFNCRYMUMVXSKHKTGXVVQDRUZBLKJOPCIPVKMLRSIGLFSDIOUJDMWXQZMIZNJGBQPEVVMODTDGRCXIQXTFBNRCKSYXHPLCHAZFHEVOYRULJCJWVUETKGJHRPEBZMHIWHWXEKNQNHAEA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LQACWOOYFPWJWISYFGBIAQOMXLVAEFAKNHSUKXUEJDYEPEUHPVDWSLSJKZGNVBBBMYDEXBUCINKJDTIFHKNGKVAPTMUWMQOMTZHSRHMLIFUAZNBFBRBVPJMARLNUDMNFJCHYXDWZMRQUVGOSDRLGCCHCZYVWCXOZDQQTDLXBRQTGUZTWJTEIIWLSXAIELAEKYJYTWFOPGSGAHPJZHNQRKPKZGVXXICOPFQLNUMTH");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.arrival_time = 0.6132208874317769;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.24447821457862517;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.42824135642879013;
    tmp_tmp_tmp_msg_0_1_0.z = 0.3742343371363406;
    tmp_tmp_tmp_msg_0_1_0.z_units = 64U;
    tmp_tmp_tmp_msg_0_1_0.travel_z = 0.39015934494496685;
    tmp_tmp_tmp_msg_0_1_0.travel_z_units = 104U;
    tmp_tmp_tmp_msg_0_1_0.delayed = 172U;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ExternalNavData tmp_tmp_tmp_msg_0_1_1;
    IMC::EstimatedState tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.26238958627592945;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.5482239246401883;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.height = 0.2550127524357201;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.x = 0.0887289190760977;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.y = 0.5406719565524815;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.z = 0.2270714140973319;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.phi = 0.7126703915929283;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.theta = 0.97452138061297;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.psi = 0.6570865700405143;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.u = 0.0738825112850251;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.v = 0.9509692402716087;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.w = 0.15438977217882865;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.vx = 0.8187176403147293;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.vy = 0.4562096733352693;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.vz = 0.674142459917191;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.p = 0.4838910339497928;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.q = 0.0736474247485489;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.r = 0.8844425179001573;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.depth = 0.8669958057868393;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.alt = 0.16784883541855056;
    tmp_tmp_tmp_msg_0_1_1.state.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.type = 35U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("PPKYUIDNGKSQRCFXPGSNELSVITLMYDNDDBLCDTUYANOJOIRWBHCXPUCIFTMXBBKHJJBOJLECRNKYBWHXWFGBBSOLVUKBOJSGEXHOKIDYPUWJAQGWORRVZTUMMZFXTATANELKHVXZIAWETDYJYVVZSQMWWJHDDDYGFJIQQAPLXASUZOUIGRAXRWHCZMTRZIVELHOZQETNEPMGSANQXKYGQAZKVSFHWJIPFMFQNFSERFCZCPMVQRCLBO");
    tmp_tmp_msg_0_2.dest_man.assign("RKQICGNPVDIMIXZZAGPMZSHPMFXLOFWTKQSQJVKCETNILHPYYYVCLXYQCQBEDDIPREXNBPGRLUMBXNBMCVTJGDTRSHNALTGSFTRDUTQUEDRAUJTNDSWOGYJNVSMXTDLQPKRWZFKAFYXSGYUHOANSFVNWHZIKROZFQIAWABMWEJOEUHPJWHHOKECYHUMIAUDOYQVJCWCQJGDVISZLOYLVWEPJBTPFAIEXROLZBCGKUFOHXSMXRZBANWG");
    tmp_tmp_msg_0_2.conditions.assign("PXNVOCUXIZMXYBBPPTFAMUEWHPLJQDHKPXOEIHAHSHQDXXDINUWEMTJRCFLVTGUBPFRRFIGOIMNAVVZZCQBSTVIGYJNOQECSVJLDIBRPQCXZJESJXCINSGBKALNIGESCZRAFNMPQTADKULPEAHROWWOHUOMTRTKSWXBDTCPELKWGXEUVFZSHSMGRVVKKYFJHOBMWYWQLHNVUJOWZDJMKWJNKNMFFRLGTGFZYBADUBKZYQ");
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
    msg.setTimeStamp(0.8493140616991843);
    msg.setSource(33408U);
    msg.setSourceEntity(96U);
    msg.setDestination(57727U);
    msg.setDestinationEntity(85U);
    msg.command = 44U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZTOHDLZUKBAUXRPIFHGIOGSYEQIVKAVBITPXUYFIWVTCDMBXTJTNONEPWFYNDMUAMUQDCVRWBNHPYBNOHLFBJHJEQXVEVHXDMCGULHACVMNEZYDXWJOESPKFSMIQELJCMAUFPKGUKWPSVQYCOYKZZLH");
    tmp_msg_0.description.assign("LOZDYRPUXJIAOQKZMUIJLMGNYSOJXLBWPQPYSXIFRPUXLEMXUSDTFCBQUYFCRZHACI");
    tmp_msg_0.vnamespace.assign("LBXOPSKZYQVDMZKGCFHGXIRSSKTCNPDBQKDSEFGTMQIFBADARGXFELIMBOCNCIOZBYLKFPRJQMFUGNVNASQTJNHKVWVCOGDFTOPFG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZGVSTARSRZVCXNKTQIOZGFXFMEZRKSUSGUZORFBQDDWMXEDDKHPOOCAWAOQQSDFBEZJBANBPVEJSHLEAPLTBBKDLCKPCJLHWLZGVJBYMKSIIHQWFJIXNSDNUJAGUUTIWVUIFRSNCWDGPHNWIWXLZDKGMJCRRVMOQMHILOSIWJPTYLMQVAJOPKXYFOGRQZZAMQEER");
    tmp_tmp_msg_0_0.value.assign("SQCNDACYGFBBYEEIGEEHSWVMJGWVCCFHDVCRTZMQKSQWPSAOBRIUKNMAPUHVJUHXPIMRJAJRHBIRYSSAZNWYPLXFAYIZOQTCDLHFPBWCCEEOAZMMEQFLBNHOLKULFMMTWQLGDJMMELKXOVFYXXVRQDIBKSKXLDVCGTAI");
    tmp_tmp_msg_0_0.type = 94U;
    tmp_tmp_msg_0_0.access = 183U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RGCXKOXZFNUOHLGFHOGYHXFJASAZCWXZRFPLTTQKZEVHCDGLJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("COEKUYBSTHYXTKPMTWPXYYRNJOMKJZMJVBGZWITHBKAHVVLGLEQMFBSLSLTIVQKWPDWOEWJOGDIGCLXQZKAMDQOLGYSENPFWHZZUHJCQQSUPARXISUXNBSHCFPPZJABAAWNNPVECEMDPYGLVRSDOUOIJFAQTXDVHRLKUVLFUCRMZTXYOAFTZEXTKSVBPANNHQERKRRJGQULMEYKOWUVMGDCWNFYIEFXHFSCUGNACDRWMDNIQBZIBZXIT");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 10888U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7095314541197666;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7213340500721636;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5133118503757909;
    tmp_tmp_tmp_msg_0_1_0.z_units = 125U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9060670473611543;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 169U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.7371456075023384;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.18875718813684317;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.7266013308050259;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DZPMSLREFTFEJXROSLHXQNRV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.vid = 38216U;
    tmp_tmp_tmp_msg_0_1_1.off_x = 0.3881939797461519;
    tmp_tmp_tmp_msg_0_1_1.off_y = 0.9944712588363116;
    tmp_tmp_tmp_msg_0_1_1.off_z = 0.07035687476735653;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.name.assign("DCOQHJVQVVOUXSQINPGKCAMAWLYQXLTNRNGYW");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KBOPSYGFVWMZJBZAENOHJSPMVOZXTTPRWPQJEBQPBXTDAFMYRJEADMGKIRTFUFBHUSFDVVCNWGXOUJSOXAQNIEHMIRXBCCMUFRIVNTOZRWADKDEFSCOXRRLEOWKDESCXGEPTYQAZSLNGGC");
    tmp_tmp_msg_0_2.dest_man.assign("MQSKTZLRZUSZMJJCOXQVHHKDUYGKLHEIOMBJIWMGBTSZWXQHIQRFPGLIKYWCOSFUYGSBRHN");
    tmp_tmp_msg_0_2.conditions.assign("FXEOMOUOTOWYGXJAQSXPAMFAIXKYSKNZHPZXLKIUSRPFEILHZNCGLBXDHEZPGIVEOQMCJDANDGBXFEQJQACURZPUTWEUIZANOSOTFMJBQYXPKAKVOADGJHWODQLFYXRVCQCKGITDKTJMHTERMVDUZOQLLUNJRGLRTMMLYRSWBYWWFHAPWPLWMYNIBIPNVSNZGCBLTCNHBMVYTN");
    IMC::UsblConfig tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 172U;
    IMC::UsblModem tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.name.assign("GGLWVYTNLHZOBCHJRADEHTPXGOIZRPZBRZZXMBFCDVUAXYQJYNSKZKTQTLNQQLBUKBFYGZGDKKTSKOBWNGUOQIEDGCWHYVEIXOSNILMXOCNEDZFEYUPLGGQSTZCMHEMVJSRQRI");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lat = 0.7041128610976192;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lon = 0.20495933151493273;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.z = 0.1877782482476007;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.z_units = 148U;
    tmp_tmp_tmp_msg_0_2_0.modems.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::AcousticSystemsQuery tmp_tmp_msg_0_3;
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
    msg.setTimeStamp(0.04260997426398905);
    msg.setSource(21865U);
    msg.setSourceEntity(125U);
    msg.setDestination(42894U);
    msg.setDestinationEntity(252U);
    msg.state = 152U;
    msg.plan_id.assign("YMXKTYDPODSHJOQLTRBORPALEKIZFADPJCNFRNUBMMTKUJWNODBOOPVJIEQRVLIIVAUOWEGHHUJBIQHUFUAXXZVMYRLQEBJWPTFOZFSVGTGOVIVLZLUSXRMWSTNZAHXPDAWBSLKKNSSCGJW");
    msg.comm_level = 22U;

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
    msg.setTimeStamp(0.03301857802966435);
    msg.setSource(23115U);
    msg.setSourceEntity(8U);
    msg.setDestination(40173U);
    msg.setDestinationEntity(254U);
    msg.state = 210U;
    msg.plan_id.assign("HWVKEFRPBGIERKDXLLCJBWGEEVXEINKFXGNUHNBKJZMIQKGIWVZMBPOSWXMJDTMAACJBGUFUEOPFJTGDSZPUYIRTLRUNXKAXOORRLMGLCTQCBLZLMVITCHDXWDYGMWRGXHSRCXWSHFFQYOBYNTTVSCTOJQUWA");
    msg.comm_level = 200U;

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
    msg.setTimeStamp(0.3928008410637127);
    msg.setSource(44661U);
    msg.setSourceEntity(165U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(81U);
    msg.state = 149U;
    msg.plan_id.assign("OHDOBDHXJSNAZ");
    msg.comm_level = 174U;

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
    msg.setTimeStamp(0.5724614001549496);
    msg.setSource(47395U);
    msg.setSourceEntity(6U);
    msg.setDestination(4868U);
    msg.setDestinationEntity(201U);
    msg.type = 111U;
    msg.op = 212U;
    msg.request_id = 64184U;
    msg.plan_id.assign("NWXAWBVTDFQXGCUECCKMCMAFESPSTVSJYZNAMTZXQQH");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("FGYFRKHHNSIZSUXUROXHYPRLOCQNVWDGBMITNCELVUBARFVAYSMKWXVPDQGKBSPHSGSGZE");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("QQKSUFWCYSRFHCSUYJSAOUGGLDBQOAIMDEQVLOHCACFGWYZQXHDWMGCCIKXTVNQEKJFLMBTIILAYAFJNTYKLABVAZGXRPFLISHZOTVYZKNZKSREBXPLQXPRDUVKCJPHBOHADEUXQ");
    tmp_tmp_msg_0_0.sys_type = 102U;
    tmp_tmp_msg_0_0.owner = 43715U;
    tmp_tmp_msg_0_0.lat = 0.7606748245715317;
    tmp_tmp_msg_0_0.lon = 0.24840874635541166;
    tmp_tmp_msg_0_0.height = 0.7151510005126186;
    tmp_tmp_msg_0_0.services.assign("KWZDXRVLUKFHTUWPMGPFESLMTHVJYZDHDBWOHQGJHNYIIRYGCZSTYGLCQEVBEFXPWAXSTAPOOAFXS");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JUHKWQZUDNNI");

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
    msg.setTimeStamp(0.7116274428239273);
    msg.setSource(13360U);
    msg.setSourceEntity(253U);
    msg.setDestination(56797U);
    msg.setDestinationEntity(200U);
    msg.type = 245U;
    msg.op = 82U;
    msg.request_id = 40073U;
    msg.plan_id.assign("SIFGPUDMNIXZHXJEWWJLQELHTERQXKGKBAAZCFTESJWVTWHJXEGGOVZRNXMFOYBNYJPTSMPMUDERHKPTKJFOIDTVBQBLAQVGLAUVSXZVBBEUZVD");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("WBNTYQIWXJGWKKAAZSUTHARXVLBAGZOYQJDDYILNHEQMHRDTCVMHXXIIUVUSABZHUUPHOCLRONUNLUOVZXDYWPKPOGLRGZEQVFXEIBCVEREJPXSZWMZCYFPTTEPDNCMLYJGSYROWDXYMCQCDXPLAWHABQMFTSQJCYUROLBIPKIOSWYFVZPFSZTVENIFKJKVTJOKBDALVMTBEMFCMFGNQDHZJJEMFPWUJLCTSHNAUGNXWIRBO");
    tmp_msg_0.htime = 0.33760560624909386;
    tmp_msg_0.lat = 0.8898766393080468;
    tmp_msg_0.lon = 0.6669605727344601;
    const char tmp_tmp_msg_0_0[] = {-104, 11, -46, 93, -82, 67, -45, -75, 65, -97, 68, 80, 89, -85, -79, 78, 86, 40, 121, -83, -1, -115, -104, 108, -104, -38, -94, -64, -75, -7, 98, 111, -76, 53, -66, 123, 102, -108, -25, 57, -63, 85, 105, -70, 98, 45, -79, -23, -109, 74, -6, -107, -93, -118, -106, 43, 109, -13, -110, 25, 35, -57, -43, 2, 26, 11, 21, -86, 57, -103, -104, 32, -41, 122, -115, 25, 34, -26, -121, -55, -93, -72, -59, -49, 63};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XXDPSZBFEUPRQAKOVGDOQYNQFLZTDOIKIJVYVTYKZDPQNHDJHMJTFLIBJWLOBQKMZHVGUAPYQUENUWQEANMXFKSRMMGBAZWULGEQGGRLRCFDAKKEMWYVJRRC");

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
    msg.setTimeStamp(0.20417771226874848);
    msg.setSource(23033U);
    msg.setSourceEntity(136U);
    msg.setDestination(34022U);
    msg.setDestinationEntity(22U);
    msg.type = 7U;
    msg.op = 121U;
    msg.request_id = 48378U;
    msg.plan_id.assign("GFXQJGZQZJAUYMCDHAKETSXZNRQQRVQKTWGFYVCOFSKALRNOSPSPHRVHVXSQPXJOGDUIMBFWIHSZOWUZBLGPOAIBSZZFRVARZLIRLLYTTWRMNQBGMDFCBBPIJYUNPHWVSUVFPRYKNKNGBVSFYMGKXXBIPETWYTTNQCLKUQBOFUYLOHSQHEDYJEALWTLXAIIAWPJMDPJJKURM");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.6378143183671012;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DOLAABZESUMHZWQADGKYVWIFTRCIJQQSFKDDUVWCROOOFKBDNTJDUVPZXYKFVJSRVJHZAFGELGZHLETNHTGLPKWSUABYLCYNU");

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
    msg.setTimeStamp(0.29917337057368676);
    msg.setSource(60334U);
    msg.setSourceEntity(209U);
    msg.setDestination(54433U);
    msg.setDestinationEntity(99U);
    msg.plan_count = 30270U;
    msg.plan_size = 936606834U;
    msg.change_time = 0.4406022743123915;
    msg.change_sid = 35027U;
    msg.change_sname.assign("NBUPBREYHV");
    const char tmp_msg_0[] = {-63, -25, -54, 72, -112, -112, 38, -116, 77, 22, 126, 6, -66, -22, 66, 35, 100, -44, 97, 67, 107, -50, -68, -82, 9, -70, 81, 11, 122, 3, -114, 68, 13, 61, 94, -39, -98, 31, -71, -50, 85, -15, -110, -10, -110, 27, -127, 78, 28, 89, 107, 71, 52, 42, 15, 108, -36, 24, -87, 11, -27, 71, 48, 121, 37, 76, 12, 8, 75, 88, -78, -35, -20, -75};
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
    msg.setTimeStamp(0.509798464455841);
    msg.setSource(64141U);
    msg.setSourceEntity(144U);
    msg.setDestination(21973U);
    msg.setDestinationEntity(103U);
    msg.plan_count = 29841U;
    msg.plan_size = 3209399722U;
    msg.change_time = 0.41779810677182094;
    msg.change_sid = 21566U;
    msg.change_sname.assign("SGQTAOZQVGMMTEIIIHAOLRSHMTZXKLFTIUXWKADWSOENJHCSSCSPLJOABLAREFCZUZJDXORBBNHMKGZBLDGBYVEY");
    const char tmp_msg_0[] = {84, 2, 116, 79, 7, -100, 8, -63, 27, 26, 80, 58, 30, -3, -82, -7, 69, -63, -41, 50, -21, 87, 4, -75, -95, 82, -34, -108, 55, -9, 3, 35, -65, -107, 52, -50, 108, -11, -1, -64, 13, -20, -116, -46, 44, 102, -104, 44, -40, -106, 8, -43, -90, -29, -99, -127, -67, -29, -98, 70, 97, 91, 15, 41, 73, 31, -34, 121, 78, 32, 107, -125, -15, 101, -92, -38, -88, -105, 11, 40, 21, -112, 18, -25, -114, -12, 32, -57, 8, -63, -58, 4, -30, 118, -39, -16, 26, -70, 16, 120, -22, 33, -94, 107, 21, -26, -45, -75, 49, 20, -16, -112, -87, -23, 30, 15, 16, 50, 35, 10, -66, 96, -17, 28, 82, -12, -36, -24, 106, -22, -36, -69, 121, -23, -49, 60, 70, -20, 73, 20, -117, 46, -120, 88, -33, 76, -66, -50, -67, 118, 17, -124};
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
    msg.setTimeStamp(0.5452197136332037);
    msg.setSource(37202U);
    msg.setSourceEntity(155U);
    msg.setDestination(26710U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 52632U;
    msg.plan_size = 1063266204U;
    msg.change_time = 0.23766078371266441;
    msg.change_sid = 61405U;
    msg.change_sname.assign("IHCVPAEMZWHQFHJLTOOCEFXLWQUCMVNBDYKSNDQEZUFWRSJRCBZNNGSYYFRQPZMRRWFZLZXBWGLFK");
    const char tmp_msg_0[] = {-47, -65, 74, 9, -44, -95, 83, 64, 27, -111, -69, -5, 102, 84, -84, -97, 16, 61, 59, -127, 90, -108, 122, 116, -26, -1, -115, -109, -73, -36, 9, -100, -59, -77, -99, -61, -49, -46, -12, -54, -31, -15, -118, -104, 69, -2, 21, -61, -37, -90, 119, -108, -13, -88, -14, 100, -91, 99, -111, -73, 31, -22, -117, -95, 23, 118, -52, 42, -101, 109, 48, 97, -69, -68, -90, -29, 65, 80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JSTAYQVJQLMTRYQLERZEUROGGMBHGGOTHWOMGJHWZDFMWJQAZAGSUQMYRAIBJBXMERLTCMUIFAFSHHEGKSKFJHRWGSLNAVLZXUTPIIPPPDZKYFRQOXCWHRQDTXHFSNOZXCZZUBNCURVTDEBNFIITOEWZ");
    tmp_msg_1.plan_size = 57217U;
    tmp_msg_1.change_time = 0.9554397850591423;
    tmp_msg_1.change_sid = 6726U;
    tmp_msg_1.change_sname.assign("WQCYKTSNSWBUGQBVXRJZGQALGJOLKJTMPKNTONFDGPZQFEIZXPGPSITVUYNLMRRVOYWXWTUYSYTPP");
    const char tmp_tmp_msg_1_0[] = {21, -113, 68, 97, -118, -108, -117, 71, 57, -88, -107, -122, -25, -20, -23, 17, 85, -79, 58, 15, -61, 76, -55, -84, 3, 19, 35, -103, -36, 102, 103, -36, 112, 33, -100, 120, -11, 83, 119, -106, -62, 42, -100, 117, -95, 67, -89, 96, -22, 78, 61, -42, 104, 69, 19, -123, -67, -109, 104, 64, 29, 66, 95, -17, -49, 91, -40, -10, 25, 25, -64, -45, 30, -91, -87, -102, -34, 5, 18, 86, -96, -31, -110, 62, -64, -96, -21, 101, -75, -65, 38, 94, 101, 67, 34, 113, 41, -62, -91, 39, 31, 86, -93, 76, -23, -79, -128, -119, -122, -2, -22, -26, 31, 44, -102, 116, 53, 112, -43, -57, -106, -37, -18, -90, 117, -64, 110, 5, 81, 126, -1, 99, 107, -117, 43, -79, -43, 110, -48, -71, 74, -41, -89, -88, 31, 49, 10, -51, -2, -112, 80, 34, 7, 33, 95, 78, 73, 34, 123, 77, 49, 21, -18, 50, 14, 63, 53, -114, 124, 90, 63, -42, -126, 67, 32, 8, -84, -83, -16, 3, -62, 107, -25, 9, -103, -2, -30, -103, 21, -8, 53, 90, 101, -20, 39, -64, 71, -49, -7, 77, -16, -83, 97, -3, -81, -76, 115, -120, 45, 75, -99, -67, -35, 19, 118, 16, -35, -126, -15};
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
    msg.setTimeStamp(0.13735347021279465);
    msg.setSource(63416U);
    msg.setSourceEntity(125U);
    msg.setDestination(34776U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("MYWULLRTGNVCBODJMJBZCEJXTCLBTUQJDXSPIRPMJKETAKQGZBFUXVFSQZYGQGESDTBLAWRFWEGWSKYFGDDNEOPSFOIQUNGIQYMQXMEOZNYVRERTXRSXAGBVJNDAAPKRMPRVBFXYWLCJCKGLILKMUZXFPECCHJPAURHHSYMHTKUEEVOYRZYSAIPIKNAXQ");
    msg.plan_size = 28361U;
    msg.change_time = 0.16836782203756717;
    msg.change_sid = 2338U;
    msg.change_sname.assign("HGJCKNAPOERRXVIBLPGVJFWMGXSJZSRRWMIQOVNDMVFTUIDZKQXFCNCFYJGYHLBHKXHEYTSJEMVLILVMULDYSVQALZGKQYVJNQRKZPABIVCKQZGZFCADUDOWSHRNCYHTDXJNFYAPXSTBGWUAUBNQSIOXIAUTORKHICTFSZRCIEJUMFDSVOBTHQJUAGWAZJKBEQRPWZKWOZIPNATPYQMKMBXENWPCMHEFBGBETPLXC");
    const char tmp_msg_0[] = {13, 45, 63, 0, -4, -13, 6, 21, -99, 24, -109, -89, 96, 84, -82, -28, 121, -119, -113, 67, -82, 12, -31, -68, 23, 57, 21, -33, 101, 124, -87, 108, -106, 11, -15, -125, -64, 104, 108, -46, 76, -24, 20, -119, -24, -73, -58, -118, -102, 25, -38, -18, 43, 44, -49, -126, 87, -77, 105, -120, -30, 44, 62, -25, 28, 115, -81, -69, -116, 58, 5, 30, 118, 44, -122, 73, -111, -41, -47, 50, 41, -6, -9, -99, -37, 26, -42, 114, -75, 30, -52, 100, 81, 77, -36, -113, 12, -121, -70, -10, 97, -20, -38, -46, -42, -67, -101, 83, 84, 101, -125, 50, 90, 73, 80, -95, 101, -22, -70, -20, 24, -102, -86, 12, -118, 80, -116, 119, 78, 64, -61, -30, 23, 122, 27, 121, -22, 10, -37, -25, -31, 37, -21, 108, -62, 22, 4, -65, -125, -31, -128, 8, 50, -59, 39, -71, -79, -87, 7, 76, 73, -107, 49, 124, -26, 75, -128, -46, 109, -39, -4, 69, -80, 81, -98, 88, 96, 5, 66, 12, -66, -75, 25, 23, -124, 61, 25, -65, 118, -19, 64, 8, 113, 70, 88, -38, -77, 13, -39, -31, -52, 0, 42, -87, -106, 0, -104, 85, -12, -76, 76, -30, 21, 51, -59, -87, 38, 119, -34, 12, -61, -89, -101, -20, -82, 93, 63, 104, 120, 11, 109, 16, 62, 54, -8, 90, -105, -11, 101, 87, 106, 43, -98, 61, -77};
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
    msg.setTimeStamp(0.06185938625151721);
    msg.setSource(13131U);
    msg.setSourceEntity(140U);
    msg.setDestination(28352U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("YAFBYOFOWTRNGRSGHBKLUXDVGZGTMSHNMBYXVQQZKTRDVPNEWLIKPYXMYEIMDKHFBNVOUCLUJTMSMRNARPVIWPAEMIQJQVCHWVHKQSUTQWPNYPOUAENPEQEPGGFPDLNGIJRJCLCGUOEMDZSLXKJFTQEUIPBHTASDOHZZVASJADMIVDSCGZXQNOWZJOMDRQKURIYOTJSHDXNAIXACYBBVLTLCZJFUWRYWXBHXASCCKEU");
    msg.plan_size = 41447U;
    msg.change_time = 0.7833839741600988;
    msg.change_sid = 14571U;
    msg.change_sname.assign("KOBDLYPVMVWIPOWNKEIBNFRAGCQTCRUWVIRWYUQBGMNWADUFBQUXTZNMVHDJSNOTIVTIJAFBMRDBOKPHIKVTXZFYHJESEOZGSJXXYTTCUKFRKP");
    const char tmp_msg_0[] = {-128, 103, -82, 46, 23, -71, 18, -58, -118, 15, 52, 122, 9, 112, 37, -83, -125, 64, -84, 33, -6, 74, 67, 49, -33, -42, 29, -127, 75, -30, 115, 73, 120, 38, 77, -28, 38, 34, -128, -107, -58, -78, -32, -40, -52, -56, -53, -58, 46, 15, -11, 3, -79, -103, 45, 109, -59, -32, -71, -87, -20, -3, 122, 30, 113, -104, 11, 118, -54, -15, 113, -123, -43, -90, -28, 31, 104, -91, -86, 56, -119, -23, -108, 120, 4, -32, 9, 84, -78, -9, 19, 47, 5};
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
    msg.setTimeStamp(0.938420038305666);
    msg.setSource(40241U);
    msg.setSourceEntity(168U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("XPAYTHRHDRGNNCMODDSTD");
    msg.plan_size = 34770U;
    msg.change_time = 0.7621368167698777;
    msg.change_sid = 25910U;
    msg.change_sname.assign("EOBUBUDQCQZYUVMHAZSBJV");
    const char tmp_msg_0[] = {-118, -54, 97, -103, -95, -55, -69, -33, 102, 112, 124, -2, 106, -127, -52, 71, 99, -15, -58, 35, 99, -102, 81, -94, -59, -82, -82, -101, -112, -117, 82, -1, -126, -78, -46, 14, 103, -118, -122, -13, 79, 26, 113, -46, -27, 117, -31, -6, -125, 32, 112, -84, -1, 15, -69, 83, 53, -8, -98, 35, -37, -69, 41, 26, -106, -60, 103, 111, -12, 66, 98, -127, 84, -57, 79, 27, 79, 88, -60, -120, -66, 7, 51, 87, -29, 9, -46, 68, -119, -103, 32, -101, 96, -104, 23, 109, -127, -75, 61, -8, 66, 105, 29, -17, -45, 79, -118, 106, 57, 11, -58, -70, 49, 25, 45, 119, -94, 53, 122, -33, -97, -21, -80, -31, 58, -110, 4, 0, 83, -32, -121, 113, 22, 89, -100, -30, 44, -42, 125, -43, 9, 13, 54, -88, -33, 15, -113, -46, 96, -119, -16, 38, 59, 115, -8, 59, -28, 90};
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
    msg.setTimeStamp(0.7497431436421012);
    msg.setSource(3812U);
    msg.setSourceEntity(26U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(217U);
    msg.type = 71U;
    msg.op = 98U;
    msg.request_id = 28789U;
    msg.plan_id.assign("NANLNXYPPCHQLMBZBBGZAPFCYWJDGRVHXWOLTDZSIJRTKOOCFCQATWGQTIYIPMVHVIQUVSDRXKNYVEINXBQCHKZTLBWKJKYEGIPLZCUBHXUCAFKDYKAYYFNIJOVJFMWEHBFERLNFRZAUSQLXMHSCPOUYHWRQYFDAXGGTWOKSOT");
    msg.flags = 51588U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.5076996656184365;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TQMKBMMLPETBWQIPAUYCVBKJNZESKFCGKI");

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
    msg.setTimeStamp(0.8787789798417319);
    msg.setSource(19010U);
    msg.setSourceEntity(201U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(197U);
    msg.type = 101U;
    msg.op = 5U;
    msg.request_id = 3966U;
    msg.plan_id.assign("OQXISYFAYYDQRKMHZTIKMIBOQLMAATSLKGALHCTVCPPXABFSHZKBBBFEDUGLNYWDAVSUPNBJLSIFAWAJCDRKGYFWQHTNNLUEQNVPHXGEDVSJETIOXFURQHDECBGFEOVTQISDWYZEJAHUVIGWRXPINLZTHIOMSYHKZPMVNGGXOSUXOSLVFJVPZKWZLCQKNWNMTJCPCBBDMOEQWPXZLWTEOMRYMRQPNWCFRCZCUYD");
    msg.flags = 35130U;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 85U;
    tmp_msg_0.value = 0.1342113047755763;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EADXPLEJYRTLVMYCRJPULKEHZFCZQLHOWVSGIXUOOOJEZHTVBWKIBNHLSWKPQLQADBJZPNZLMLRFDHTKBJUSYGSOCZBGMDWRYSIRHCJLOUSFMADCTGGAGQYOUCY");

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
    msg.setTimeStamp(0.8605544126802771);
    msg.setSource(48168U);
    msg.setSourceEntity(44U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(82U);
    msg.type = 6U;
    msg.op = 142U;
    msg.request_id = 43927U;
    msg.plan_id.assign("NMKKXBSWXOATHJQBDXPOHEPUOOZZBVKGZNTZSHWFKDUPLSAHCNFVKGVWCFIHUTVGLIRYFVZBLSWJBAEJOTRKFSNXBRYEFATVGDNMIYYYPQDIBBCUDQSCFOZJADHLHMYTMNWJCWIHIZJTKIDUFMQSCBKANWQ");
    msg.flags = 13590U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.8568243494394945;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GFFADFPTLIUWFYMSKJUOTQAFETBRNEYDIEHUYGJPEXQWNCZIXHVXHELIVYUMNSXJTMULDLEAMOZUDFNGIQUXADPKOYWOZYSZTUTRZXQSSTCBSWX");

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
    msg.setTimeStamp(0.9304778748918742);
    msg.setSource(26814U);
    msg.setSourceEntity(252U);
    msg.setDestination(9734U);
    msg.setDestinationEntity(13U);
    msg.state = 4U;
    msg.plan_id.assign("XOLTRWBGLHDEJRBZLEECCUYYHFETUJVYDKUNPIMJIZGBTCDXAQLUSYHBSOFOGBIOIPSXIZVJXPLQRMA");
    msg.plan_eta = 1900812864;
    msg.plan_progress = 0.6387525453865381;
    msg.man_id.assign("VQNQTLUCET");
    msg.man_type = 3291U;
    msg.man_eta = 1877647930;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.3813055877956013);
    msg.setSource(62430U);
    msg.setSourceEntity(239U);
    msg.setDestination(5423U);
    msg.setDestinationEntity(146U);
    msg.state = 40U;
    msg.plan_id.assign("GPCRCITRUVPMSFNDICUVNGFUXLVAMBKUJOGZYNNKRAHVTYUPDFFZXBHEWCOQRZSMSISTOBXJKCXKZPQG");
    msg.plan_eta = 2033971673;
    msg.plan_progress = 0.4661419799585156;
    msg.man_id.assign("XRNFKVAWGZDCFVLAMJOQYFMWJIJKMOBLOKKPGJTTHURQOZTFDACIYWKHZPWYHZVRXOISUFCHXBHQGWDMXWYXLJUNLVHGUEBIYPUQRYIRXNMCCXACNAGNYXLAPJLLTAEJAMJSVPNPKOEYZGGOQBRTFIHQGEMCDZCMSRMJMPCALNHDVSTTSPDNEKFPIJUTDBILRFEVOTURBW");
    msg.man_type = 42801U;
    msg.man_eta = -1232549815;
    msg.last_outcome = 195U;

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
    msg.setTimeStamp(0.14930284124424265);
    msg.setSource(25900U);
    msg.setSourceEntity(226U);
    msg.setDestination(28964U);
    msg.setDestinationEntity(84U);
    msg.state = 197U;
    msg.plan_id.assign("IEVWZOTYVZZRDUHONORHMNAPKPQXJCVGTNKGGEDHUIRUQGBILPGNVFUVZBKCUDYWEYYFPHJEJZARBLIELKSXMXNKTCYSDRFHWIGPEQ");
    msg.plan_eta = -1437144430;
    msg.plan_progress = 0.32887909456550457;
    msg.man_id.assign("ADZPHTICLRCNQTWXWLJSQWECCPHCXEMLRAGJKWKLDFBRUDTEDSMJIPVKMGBHTZCCHRHKXYVILDKVOIBFBIUYKBLVXEWHGDGIYSANJKYYZUQUNPQVXWXWNLBJAUFCMEQVXGVFYGFROBDLFDTLJCESYMUGBFAPAZNINONUSAMIZXTIPSFROJEVGLUSYBERZTAOHSWOSQVYJRCMOTVDDPPUTMYKQXKHKIMMU");
    msg.man_type = 27975U;
    msg.man_eta = 242430473;
    msg.last_outcome = 240U;

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
    msg.setTimeStamp(0.9595919660226488);
    msg.setSource(38685U);
    msg.setSourceEntity(127U);
    msg.setDestination(54216U);
    msg.setDestinationEntity(23U);
    msg.name.assign("FNULXGAIOBYTTHZPFQTVNNFBBLHHMEGIJPDTZORLHBAQJGGNXWOQQZNSQDYVRVHHFVEUCEZJCDDMJNIMSLOPCSEJCCEKXKPKVTMXLRKOFUEYFCBNRXCJAZPVWGAFIKIWAGKNKMWDHAACSVIKLAJIDUSOSWQDWRZNKPBTXTYOZQTGUKPPURYARMHEIITRCBSLPMYWSVQBEYSJFFLUXEVDECDMLJ");
    msg.value.assign("NZVIWGFFULDJVGBCVNMTRNENGKCQKLFMFZDHQUPSUWHSTZKPDVLLXDQFXOIYARZTUNJYAPXTQEBKYPXSBUTUDVMIJRKLUJENCOXLHKYRZHDFNDOIBCLMCDANRBMWWOZWJYCJRHOTCYXGWSAARAFGWPI");
    msg.type = 115U;
    msg.access = 47U;

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
    msg.setTimeStamp(0.3004878753176622);
    msg.setSource(42491U);
    msg.setSourceEntity(122U);
    msg.setDestination(35386U);
    msg.setDestinationEntity(87U);
    msg.name.assign("MCWLJWKCGCOVDMXYYAMAVQUSVDOTWPGDFSRKCOVDCHBGKPHBYLIECIWAZNUJUEZA");
    msg.value.assign("KUHNCLZNHTPJKMEOYQZGUBJCPCFFBEGKZLBOFHEUQOHXALDXXDSJSWGYSEVNAVINHZWYTPSCQPTYGENVZSACGYJUWRIKIFMQPCMRYAAODLTFEWAKSMXODTOTRTGOANXIRFBXYUBDLSKIJTEEIDMRJBZJARWGEHRFBKMHUMOWGBQWHLPUWLMXSVIUSVVZOFCMAJDPJLNXVILBZCGCZNGLVSIURQE");
    msg.type = 118U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.06289251697075937);
    msg.setSource(53045U);
    msg.setSourceEntity(173U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(104U);
    msg.name.assign("BFQTAPLOSSMCAUJOJWGIVJZSAYCIYHRNVPAHCLJJIGKOWTMRWTEOANNTAZLAWDMOFEVBOXSDFNYOSEIWWPAQXCFNYAMTXBSQRIYBSRJDGQBVDZMXGBLMTQZPPRDBEFRSRTFBVCLNVDCCWNKYTZNVGTKLUDZILBHXKXIRFUEWEGEHUWQKXOZZCQOGKICUMGRGTPPHUYHEJZHPCDJVXA");
    msg.value.assign("OAYQFBBJSXITKOKOHIVOPDOOQRBFCWGNVUCHQDXPIINPSESDAZQMJEVEZTFIIPOURIQDZFXYXARMDUAWGYYKMHUEKULRJNXPGDMRYWJNURJRQGWSVPAAWNMZBHNDDGLLXJRQXHFBXJAEAJFSWVLWPZLBHCHUPYYKLTFDYBKUEGJZKRCNSTWTETHTOLMEKSGECCJGCVNIUSZBSNT");
    msg.type = 72U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.33888755664531234);
    msg.setSource(29797U);
    msg.setSourceEntity(254U);
    msg.setDestination(61768U);
    msg.setDestinationEntity(88U);
    msg.cmd = 30U;
    msg.op = 221U;
    msg.plan_id.assign("UETENJVWERVBZAKEWTUUSPCARRVDIFPJICAQFNKCFMXQOFOOTGSOKIWBFXYULNHIIJCUHVHESPILZLQMQSICEMFSJRXBYJGRVZXWTAPGXSBEOUCBJZBEZUQPPVZ");
    msg.params.assign("UPQAYCBSWRRGGJIPGWERCBZILSGBFCOXICNUIEBGZHNMHPQBZCRRYZRBTUKSOFJGBJHIAOXDFIWZEVSHKQJIFEOLLVQFGKVXQUJCKNSXPWUTKXOKXCMWQDJLSDHTNZGVVFKBMYRZGWFALOKPALOWDMAX");

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
    msg.setTimeStamp(0.10645159922968395);
    msg.setSource(38356U);
    msg.setSourceEntity(62U);
    msg.setDestination(3098U);
    msg.setDestinationEntity(99U);
    msg.cmd = 36U;
    msg.op = 103U;
    msg.plan_id.assign("PFQCRNFBXCWYIFYQQFASGQEZUDLIAPYMOVGSOYUNGONZXTMVYHGGPQZKSWLOISMKOOTBUK");
    msg.params.assign("FTOFGCWZSKCMPAYNJHGOTCBIRELLUBCIHXWXJIZYONXGSFMOPJBUMJMVVLNRDOBVEKCWEVYORDNKFGQWSZKCVMXVLYBNDIOBHQRXZEPJTFVGEBUTQSUGBAJUTEQAXUTJYDSQLRHWQHKJGPZLINLUPELJVTHJAUDGLDVQFTPEQFHFMIAATPDUZOIKACETXBYSRBFCSMH");

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
    msg.setTimeStamp(0.9575806167593276);
    msg.setSource(19249U);
    msg.setSourceEntity(137U);
    msg.setDestination(46387U);
    msg.setDestinationEntity(31U);
    msg.cmd = 33U;
    msg.op = 116U;
    msg.plan_id.assign("UZZGUZXRLJKEOTKGCVNMVBEUOPILPNNCNATJHWZS");
    msg.params.assign("SEQVQMOJXJGYVIQEJRWTRIHQYKBAZLLIMPRUKXVYPCWUHDVWEAUOSVGQSZNYAGKWWJMFDRNXFRBZSNWFUSNXFQPHATSOTUDQIEPGQTIBVMWRECETTVPDPQBDRYGKPGFSXGTUZPCKKFISNZFAJHCMMTNDPAAJBZCEVHOYXBAKYKDYYIOWSBOEGDEIVIZNDUAM");

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
    msg.setTimeStamp(0.10927408209684653);
    msg.setSource(28227U);
    msg.setSourceEntity(230U);
    msg.setDestination(33695U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("QVLXPPEGYKLBCHXVVWXOOGNTLUIERFBRPLSKQWKBUMQBAVDYCTWBTZCLJNRHUNMWMYPESIHGZGUGOAKSCJPWOJTQFISDAAANFUDIUNDGQJIWYZV");
    msg.op = 228U;
    msg.lat = 0.5463359726850049;
    msg.lon = 0.9582177157606325;
    msg.height = 0.36340563645050017;
    msg.x = 0.4858590975631606;
    msg.y = 0.569540277501576;
    msg.z = 0.7135283715440085;
    msg.phi = 0.06142470792835042;
    msg.theta = 0.5826971567470742;
    msg.psi = 0.43190579557273145;
    msg.vx = 0.7410894194801249;
    msg.vy = 0.550488137089992;
    msg.vz = 0.7030037025092252;
    msg.p = 0.6909976517641669;
    msg.q = 0.6803955715922704;
    msg.r = 0.4653169309458549;
    msg.svx = 0.40544287007996915;
    msg.svy = 0.9864272312192522;
    msg.svz = 0.46668837864344104;

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
    msg.setTimeStamp(0.44537228042027255);
    msg.setSource(57149U);
    msg.setSourceEntity(36U);
    msg.setDestination(21177U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("TFLKWQLCKOSFTGPJRKBFTWKVVGEPCNWFHHSUYZACDJFWQJJVNAODOAFLRHVJBUMDLJMYPVZNYHQMEQZITTLELZSRGJDIZXRNASGCKDQEZHWCNXLIKRUOOOGDNUUEBAQKEYGEQLHVXVUNBARBNOBBUPWSRMZNIMCMESJJXS");
    msg.op = 91U;
    msg.lat = 0.6052865938726231;
    msg.lon = 0.7796980352194427;
    msg.height = 0.7096169258522836;
    msg.x = 0.16244029449020292;
    msg.y = 0.3312296780859819;
    msg.z = 0.5207643769988612;
    msg.phi = 0.6789979797629929;
    msg.theta = 0.7207171830015117;
    msg.psi = 0.6500899193105799;
    msg.vx = 0.8151298546758997;
    msg.vy = 0.36472935764916103;
    msg.vz = 0.7269935880651719;
    msg.p = 0.8862847371552423;
    msg.q = 0.44931826534079333;
    msg.r = 0.48595093494240593;
    msg.svx = 0.46920009516289773;
    msg.svy = 0.06920402684789195;
    msg.svz = 0.5950268459215999;

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
    msg.setTimeStamp(0.8217439569514625);
    msg.setSource(9607U);
    msg.setSourceEntity(13U);
    msg.setDestination(9874U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("SKFQZUJILZTZCTYEYDUITBOABOOMMIUNAWUKIYFNZSDNYLXKIBFSQKDIXAVBDFVCSNTWUXRMCOZUTJAXQUXGPEQFVXPEVYWAWNWQXFOITTHXMQEBVMPWPPCSJHHGHRRXSVNWCGZWUHOBKJOLIHCVCULJNE");
    msg.op = 160U;
    msg.lat = 0.22369132506472222;
    msg.lon = 0.930923878390924;
    msg.height = 0.4663590720613562;
    msg.x = 0.8229883777976359;
    msg.y = 0.5744593750082211;
    msg.z = 0.44379905401093755;
    msg.phi = 0.00021134480049056492;
    msg.theta = 0.2736403908747742;
    msg.psi = 0.6158308661298016;
    msg.vx = 0.5661442931732463;
    msg.vy = 0.10203779437337468;
    msg.vz = 0.1419962036394974;
    msg.p = 0.8264406252598606;
    msg.q = 0.4546510406010422;
    msg.r = 0.20691398814795048;
    msg.svx = 0.516395175038882;
    msg.svy = 0.06648205179961275;
    msg.svz = 0.5209661469838541;

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
    msg.setTimeStamp(0.10125466803962757);
    msg.setSource(60295U);
    msg.setSourceEntity(154U);
    msg.setDestination(64483U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("SWWHLHUHKUDMFGASAOLSVGCOBQHYMBFHRADFPUKLQMCRKETKWYIYTGKYYENUGZVUYGNPVZXHJYDJTOUJEQSCYTTILICEHAXFOBPZANGOFXJCFXDKQLEVUZANDDXWHRMMNCFRMOEGLRMBVNJVFTTGQQICSERTNPIVOXCSLVABHQOVXSRZZCIKPIMJANEUWFSLJZWJBKLIQNKWAGXDZPXMIDQGBNDAWWBTWCYRBFL");
    msg.type = 136U;
    msg.properties = 8U;
    msg.durations.assign("BNQCIFVDCAOFIEDFGTPBHJLZEZCPGPZJDLQURDFLUCXZNWVMRLHSHBVBPNODIAQUKFCJPFMVFXYEKZFZZXENPBKQOHIIOKYTZSJLJGMOWUDTWIRCRBBOWWKUQSQMESGSMAZQXUVIFMOHMDAWETCBXTGVBQXJPDNAVBGZNLCDGCSISQXCJHXDESKJNRRGYYPVNYNUAKWTFPLAQTNEKJRXLHGORRYSMUAMYOEGPVKIAHVY");
    msg.distances.assign("QQQILNQTFXBLALYXPRSGXMASWHEKGHMGCIRRCJDUEQSEMMIEEIJIZXANJZUFCTUFHKDSRKHZOOFKFYVKIYAGLLNZTAFPNPBXBJZABSVHGFKNWUODRSBDCMRYBHLTDQNUVOJKTJWBCNTPCRZLBOESUYXTMSPVHUBOGMIPHLFPWOAMQWYEATCOAFZRBDUSPXW");
    msg.actions.assign("JFYOGJKINQPISLJECQIRRPFPFYPMVPQZBWHLRTZAHTEADXALTRDGJXHGCZOZJMRBYVIXVMKCCTCDDPXDXBVZXCHZINGETXEJLVDQLPVMOAFRPRDFTQABMWYPDKUNYZWCGHZXEMKIUYOYFZKFXJVBKEONJIBVSUXZWMBBLKYSTOQCMHLQEWPIKKOLOHFCUURSA");
    msg.fuel.assign("NMSZDLUDJZIYSKIMLUMTOBWDLIBPBFUWYZNJTVTXMHUABOKBBDPXSSMYHVKNSYQHTXWITIAUSCYVLRLCZHYKAQIOBOJZHSSNFZIBFODFARXERFFXDVQPJYEAAPRHFPKQO");

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
    msg.setTimeStamp(0.8135539347658592);
    msg.setSource(39578U);
    msg.setSourceEntity(181U);
    msg.setDestination(4977U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("OWBUASLDRTOUPPVJQHOZFSCNAMYXJHUEWTRDQUFHBBWKEVGDVSTIPGCRLOHFJLVAMPUJIKKYTCGFREYVATWZGGZHCSZMYVFAKEAFMVLGEZTBYWHLWOMYXPWVRQAXNRPZYQSIQONILEJHQFCJOTCLRKVBFPEKITVFUYKBPGOXXBKDGNNYPAZBKENXMKNQTWNADPQYCLBICIQFOUJSSU");
    msg.type = 178U;
    msg.properties = 77U;
    msg.durations.assign("OLPNRHBRUBSZJMNKDCXKNQXQHVXYOGITYJRWUMCFNWWICGVBQHXZOITFTXWPXREZOJMSEDIVUIYISXYDBDQZZMDTKVHEQHEPTUOAYSFGHSKKWRCLKMPPRFZZXBBK");
    msg.distances.assign("QSMIZPABIEZXVSUHTIET");
    msg.actions.assign("FWNEZKVDQJVXPDYNDLUEMNRZYPRKXFMHFTKJZYHEWSPBH");
    msg.fuel.assign("NZXWPGBGUNIGLNMQQND");

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
    msg.setTimeStamp(0.7442922151126886);
    msg.setSource(15608U);
    msg.setSourceEntity(92U);
    msg.setDestination(16273U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("OWAFXMDWDGXDJLROJRMUEWPTFCTCPYNHPOGLUOVVGWEBOGNFMSKRIJWJZIVEBLYTNXRHACTHVVBTDAENYKFDJXNCMCWKZWVRMJSUBUDPJKJQNFNZUXMAGDLHRBBACLQTYMZGCMYSZFIYBXR");
    msg.type = 49U;
    msg.properties = 224U;
    msg.durations.assign("LWYCXVTFWVGZSFVZLXFDQOEKZXEODANVT");
    msg.distances.assign("DNTZUKMGKTLDTHIYJXEKJBYQUDHUWCTLEUBKHIBWBGGWIILADQSFVTZUEOTYWJGYWKWCWJFDOPDNWXXRLIFPZAERBXYANVINMBZLHYMXXPLOVQYAGUAHSCQCKZR");
    msg.actions.assign("RYCVSHIHOAZHQLKBFNAQWMSWBQWYLNNUGACSJMOYNPGMQFUJRLVXVLUYSTTLVAXAEOCTALBHFPKSVZZXWWJMSWIXERVMTHSZFUCGIUCZXEYKATJPFGSYZFEUZHSGTDRBEZQLEHPJKWOPVQBGDCEFNRPUEONRHNZQKNCJOGMUADRIWRALONGMNRDGVDYBPOKBODQPDHJKCWLMTRCMFXLJZQIGFJUEOW");
    msg.fuel.assign("NXELLYBYUSFFGGPECUGOSOYFGNUNNKQODDKNBMYLRURQTHGEJFXZXJNRQZKCSCTTAHZRRGMMXASTSCXIRZYOEHXDSUJHOAFKJVBKWQECQDHELJXUOKIFVTUBABWWOPWLHBWYENK");

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
    msg.setTimeStamp(0.9798576476147951);
    msg.setSource(31428U);
    msg.setSourceEntity(208U);
    msg.setDestination(19696U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.45156120647105435;
    msg.lon = 0.5267140343718559;
    msg.depth = 0.3585850351783949;
    msg.roll = 0.7573891768146065;
    msg.pitch = 0.33773162911713817;
    msg.yaw = 0.1690872357380213;
    msg.rcp_time = 0.8444457039753779;
    msg.sid.assign("WXMHOKGQHDYDJWMOFQRHPQNVRGCPMSBUSXPCTVXQTBFDALOUBGOXXLFRKGJPOQIFPGEAFLWUNAWSIIRIBDHOOJPPFKKLIPTNCZMDJKLCTRWNHWFUVSYYNEIQEZZY");
    msg.s_type = 18U;

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
    msg.setTimeStamp(0.8098260206487553);
    msg.setSource(28791U);
    msg.setSourceEntity(237U);
    msg.setDestination(58105U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.595166817315739;
    msg.lon = 0.9812119881025103;
    msg.depth = 0.4822491734594675;
    msg.roll = 0.20123719115310534;
    msg.pitch = 0.8346803661396689;
    msg.yaw = 0.12923031203769075;
    msg.rcp_time = 0.5690155416722112;
    msg.sid.assign("HTOGSGTXRICRTDCLZNTQDRZCWEFXZKCIGZECIJBIVMUBFOYNOAOPPRYSLRQKGHXDCBTDYJNXPGELRSJFUMFHUWXWYGJZGHHVZVCJMOVZLDQABTGQJWPPUEODMRAPWFLIKMXCNFPUBXTFRTFMEBNLLNBPDUTZAOKRLHVOVZBTPKNILYJDBZEJKWKAUOCSYMCSAFWSADKVAIFYQOIRJHXEYYGGKVKJSL");
    msg.s_type = 109U;

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
    msg.setTimeStamp(0.5434532088186593);
    msg.setSource(22074U);
    msg.setSourceEntity(77U);
    msg.setDestination(25029U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.3488441235761748;
    msg.lon = 0.9668236996180203;
    msg.depth = 0.9729267000944712;
    msg.roll = 0.5227241781492156;
    msg.pitch = 0.5688460165102595;
    msg.yaw = 0.4023779951635421;
    msg.rcp_time = 0.26053951635019723;
    msg.sid.assign("WQPTARJEHEPUCPQLHCAMZFNCFCYIPNRSBNHSXQHDCNOZMMQLTSNLYIVUQZGFKUUFVQZJSTGDJTIQOOJSHQCIMULTTAWBJPMYVCZBWBCXKJJZONSXWOORTGAGAVTVVUXIEWEQDKKWHMDLPGCFWYENBDAAGBEIYDABKVCDKFIFMIRTGRLYEOHI");
    msg.s_type = 228U;

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
    msg.setTimeStamp(0.5481177312619114);
    msg.setSource(17898U);
    msg.setSourceEntity(47U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(175U);
    msg.id.assign("HVIVXWUDBRLGHKZJOOLAWUFAKILSQJOORYRICJFSLXSZFKLDPNAJEOCWEAPCJBGGBIPNGBXAYKOTZRZTTGAKABPXTPVNVZJCJZSRWQQQSTDKCFOFZWMNGPDIEAPOIMMEHFHGHHMHUETYBLCBMDRWZBLITPYRYBVFCZVAEWXEN");
    msg.sensor_class.assign("KPAKOULUTLJVAADWZCLKZEAUREXKYFQNDMDOYSRHVAIQMQBXZLNLBVFSMNTVIAENMOILSSYEPETHXKBOPNDNVJXQCDKGCPCBTDBEFHKROAURGJHRWBVZFLEU");
    msg.lat = 0.849965536487494;
    msg.lon = 0.4494133275316454;
    msg.alt = 0.6847716973591588;
    msg.heading = 0.5972534951101803;
    msg.data.assign("YMVXXSCOMPYHFNLDSAJHMXUWFPOMHKNULUIBSOKQETIHTFKVGNGRCDRZRIABUMOJTKNAFLEZFWURKVDCFGPZGALHYZARCYWABBGXVJHHZIVHSPTNRRGRCT");

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
    msg.setTimeStamp(0.3180499067176432);
    msg.setSource(29296U);
    msg.setSourceEntity(130U);
    msg.setDestination(42799U);
    msg.setDestinationEntity(162U);
    msg.id.assign("ZFWMFRHUMUCYPIBTMAQYZVTLBILZOI");
    msg.sensor_class.assign("VIOHBMYYGOQLARAFMWQCFBHHEUXAUZLZKVQFHQDNVTJPLIDHPCSPWTVEDQUTZXFRXSKJWWYRFWSXTZAAZBOYSDNRNGOHMORIMJYPVILEURRZLXALJKTNYFERWILJQGSNQSHKFKWTDQAZBUGJHIRFMBCDYJSMTNGMHKQUNUGGIOTONZCVDUEZAFQIAKXZBMPLORD");
    msg.lat = 0.36080695301438237;
    msg.lon = 0.5774046081860966;
    msg.alt = 0.3110359773369332;
    msg.heading = 0.5785742126325564;
    msg.data.assign("QMICAVGWBZWFANMAJCEVDXXEESOVEKZLIQCSQBYQDBAOGJWBQWLTMWDKDZJRZL");

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
    msg.setTimeStamp(0.426365463751084);
    msg.setSource(52303U);
    msg.setSourceEntity(29U);
    msg.setDestination(2119U);
    msg.setDestinationEntity(59U);
    msg.id.assign("AISQCWKDWMBBAVEIFSCNYXACRRDPOCSRTHTGMISBQGOBKZMEBHTYXURIPYPOFZGUNCZSFQUNVCJOQTEPEGLNJGUKLYLUFNQFWATHOMKPYWUMBLWWPGNJWMXLQEEFSJGVODXNSKIEVARDCTLVBCGGAZLKYPDQDWXUHFZIXJCHAQLHALVZUOPRTZZMMKKXUFVXBZISVRYDLDMKHJFEGNAXTKQBPZEYDJSYBVEHXQIODOJSWMHNN");
    msg.sensor_class.assign("BJITBFMFSYZCABHFGVUZLWJZHQWLBXVTGZOTZXJAZGM");
    msg.lat = 0.6039836192310628;
    msg.lon = 0.274634763963432;
    msg.alt = 0.13329499913833975;
    msg.heading = 0.44378735726284646;
    msg.data.assign("ETVFGOHZIMGTQSIUYJAVKPNJJGHDCWDKWT");

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
    msg.setTimeStamp(0.9205597743472502);
    msg.setSource(57851U);
    msg.setSourceEntity(23U);
    msg.setDestination(30087U);
    msg.setDestinationEntity(175U);
    msg.id.assign("USBACZCXLWKSHGNIJEWTDJXLNTGWF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NYVUDCTIQSRKJSTHONOXZUBITEUVRPAVLXYKTSFSJQBEPYRZYLNQZNTAGSFHMGRPFLMCCBHYLLRSKEWMOVWFGWQBKEVFXOTNPHFAG");
    tmp_msg_0.feature_type = 147U;
    tmp_msg_0.rgb_red = 85U;
    tmp_msg_0.rgb_green = 28U;
    tmp_msg_0.rgb_blue = 57U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23029462124210753;
    tmp_tmp_msg_0_0.lon = 0.7427790697388351;
    tmp_tmp_msg_0_0.alt = 0.47541882312722916;
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
    msg.setTimeStamp(0.4962491675006825);
    msg.setSource(24431U);
    msg.setSourceEntity(40U);
    msg.setDestination(45788U);
    msg.setDestinationEntity(21U);
    msg.id.assign("MUFXUAECLKHUAEVWJJHDHANRUWREYFVPWBOFZEQQLYEGDAFMFQBJNJWNUPMWICXJKBRTFOSGDTISOGJTADNZUOCVRUNFKHITMGNORGJSWJLJTOOMSUCBYBOLPFNWBLKTPKTZQISKTVXHQYNRSVAHHEZGYYXVWIPQLXLMPZHGMB");

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
    msg.setTimeStamp(0.2072088389817387);
    msg.setSource(31900U);
    msg.setSourceEntity(177U);
    msg.setDestination(46251U);
    msg.setDestinationEntity(142U);
    msg.id.assign("VQLSWIXGLDMNTFGQWWFAKROGBJHADZMXWHHMFLOOHDJIKPYHHEXCVHGYOQEVMOMYYQFNLCZBPLGCHLGCQNCVTCEIKTTWECEGGPVNMNIXUUUBSQZOZLJYFKITVDSZTWEJOEKDIBWZCRRRLNRXSJSFHGSAFB");

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
    msg.setTimeStamp(0.2400828019824126);
    msg.setSource(57670U);
    msg.setSourceEntity(196U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(94U);
    msg.id.assign("GOFGKWCVWNXCHBIRHLIRMXBLPSTJRQSCYBDRRXWKSSZNQXSAMPFZGUUJLZJAMMVCFHMVLFSECFSEULTBHHECZRLYYMQROFGEKYVNIYWPDLONTQVUDMXVDZSPMUVHGEKXTAPVQJDKCWBJPNUQBXDZQIGDGOOARZLHMFEZOYDAJWQYPIJYWKVLSZHBGDAOHNQWPCIPKLKFIKTUNIFZGRUPNXTN");
    msg.feature_type = 145U;
    msg.rgb_red = 55U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 61U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9850284954921601;
    tmp_msg_0.lon = 0.5780017765708791;
    tmp_msg_0.alt = 0.1315311205978913;
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
    msg.setTimeStamp(0.43856504095825255);
    msg.setSource(42411U);
    msg.setSourceEntity(173U);
    msg.setDestination(35548U);
    msg.setDestinationEntity(195U);
    msg.id.assign("RLNXAGHHUCSKHLYWUAGXPJIVTFEVQWYEIGLOAFCAQZJOTUDOMRZQHZWEPTBJSNCXBJCWYEKWCYUAKJIMMPOCONNBNPLILKBSGVGGHPMVTWXLXZANEUAZNBVPYXHLFFFIOPDFQUSSCNBERNUSOYHIPEOYOCIUSFSRZHBDZDTJOBGFCKXBLKJSGTMXGMHKQZBZKNPDXIIZEYTTREVMMXQDTFMJDKAKJ");
    msg.feature_type = 42U;
    msg.rgb_red = 77U;
    msg.rgb_green = 221U;
    msg.rgb_blue = 197U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21488868844618736;
    tmp_msg_0.lon = 0.3437829416813053;
    tmp_msg_0.alt = 0.8482521468259029;
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
    msg.setTimeStamp(0.13505379675928098);
    msg.setSource(9307U);
    msg.setSourceEntity(4U);
    msg.setDestination(3193U);
    msg.setDestinationEntity(153U);
    msg.id.assign("PYLADYNBSWCMWIQQUESANTVRZQEEEDKWKGJKVI");
    msg.feature_type = 82U;
    msg.rgb_red = 233U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 77U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8143944379227059;
    tmp_msg_0.lon = 0.5340931229070722;
    tmp_msg_0.alt = 0.7668998500793704;
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
    msg.setTimeStamp(0.626638351314376);
    msg.setSource(58144U);
    msg.setSourceEntity(221U);
    msg.setDestination(48410U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.4641681614960551;
    msg.lon = 0.3540639301192444;
    msg.alt = 0.3484140582780383;

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
    msg.setTimeStamp(0.5685145218331107);
    msg.setSource(29416U);
    msg.setSourceEntity(34U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.0700303314457208;
    msg.lon = 0.45416559831799175;
    msg.alt = 0.8498533241615556;

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
    msg.setTimeStamp(0.4019693157534169);
    msg.setSource(5158U);
    msg.setSourceEntity(180U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.7179787897781055;
    msg.lon = 0.08594172128095501;
    msg.alt = 0.5073194394654454;

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
    msg.setTimeStamp(0.6484441664565851);
    msg.setSource(5239U);
    msg.setSourceEntity(163U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(240U);
    msg.type = 179U;
    msg.id.assign("YZJSGCTMICDIYGXRMUEPLKONTHMQPMLBSQWFXGSEOEBFDAKHVTMIJVAHNJLXIRCGZBQVMOZNFJPJZUDYIKCEPCVBUUENLERSOPKEBGFQURWTUUXVZLYAWCKJOHYRHHTDIDFXRBWUNXZOLOYGAIRAQBNKWPYTPWYAPBBLBQZNSASDVFOTCXLQKOHKZDTWMHFKTFEILEVXCZJHINSHWYGXRNDZKQAAVPRNQSGOPASQTGCFIJEYMUJVMUDJRSX");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 3586U;
    tmp_msg_0.lat = 0.3949113665784375;
    tmp_msg_0.lon = 0.6714465312722424;
    tmp_msg_0.z = 0.9855209150867172;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.023392639095739187;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.bearing = 0.8253726427478224;
    tmp_msg_0.cross_angle = 0.2513526526013251;
    tmp_msg_0.width = 0.7691835091752909;
    tmp_msg_0.length = 0.5727180835764507;
    tmp_msg_0.hstep = 0.5677592771228772;
    tmp_msg_0.coff = 133U;
    tmp_msg_0.alternation = 29U;
    tmp_msg_0.flags = 72U;
    tmp_msg_0.custom.assign("KFGLVLXJHMZLCDODYRLPECERQAUHMAWOICDTCHOGTPISUBQEOAMETPQJUGTGPRNOPJXZWDZHFBBBFZBVMTCHYYA");
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
    msg.setTimeStamp(0.2931885630404436);
    msg.setSource(43609U);
    msg.setSourceEntity(18U);
    msg.setDestination(2693U);
    msg.setDestinationEntity(147U);
    msg.type = 48U;
    msg.id.assign("DYCDPUREMLFTEZTLREHONNBNFJWQDHTIHQXCUYYSLGVXWTNHMPKSKWUAGROLSCIWSLGJTAVOONISQELMDCXMDXVVCJBHFPVASXFPSZCXIYMXHJEITIDJBPZQGICNUUMAUOYHCZROGESQNGFFIKYZDXVCAMOKZDVUPWLBTOBETQKYCGGMLVZFRTWXENJQUGOWXPRFNABRYGKKBPTNJSRHEPYOH");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 42246U;
    tmp_msg_0.x = 0.6404139661867249;
    tmp_msg_0.y = 0.13714769742710065;
    tmp_msg_0.z = 0.7775333697274212;
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
    msg.setTimeStamp(0.5255919512063094);
    msg.setSource(38991U);
    msg.setSourceEntity(121U);
    msg.setDestination(215U);
    msg.setDestinationEntity(240U);
    msg.type = 199U;
    msg.id.assign("CEYEWCAZMPFMQJGOOGHSHLEKXPLUBEZDKHYABDXGPXVUFYPFKKARYAHEPXGRQJIWKDTBRCEBXCQXYFVLMCNTMRCVVNGYHSFOAUSRRBWKZALGAVHXBNJSXWSJJJIQEDIUIWSWSHZJDYEPXKCOJKLVMPAMRAEOWTLTLTVUIQBQAFUMHUPZBNHDJVSTFGCZIPDNIQPBOKVILNRRWNOTSFOQNMIOWD");
    IMC::MsgList tmp_msg_0;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 240U;
    tmp_tmp_msg_0_0.lon_gain = 0.3149294676340134;
    tmp_tmp_msg_0_0.lat_gain = 0.4947229704061983;
    tmp_tmp_msg_0_0.bond_thick = 0.885502566584367;
    tmp_tmp_msg_0_0.lead_gain = 0.21109722370667583;
    tmp_tmp_msg_0_0.deconfl_gain = 0.04849853037457086;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.834786224335;
    tmp_tmp_msg_0_0.safe_dist = 0.25593373276102926;
    tmp_tmp_msg_0_0.deconflict_offset = 0.4437209491316676;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.45103295710551794;
    tmp_tmp_msg_0_0.accel_lim_x = 0.8278307574637742;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6290533924480638);
    msg.setSource(34562U);
    msg.setSourceEntity(134U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(41U);
    msg.localname.assign("MGBEPYUYTNOJSHQIFUVWINLEEQOSPQNQBMRFDYSBMFZMNDKMUOVJPEEJSZLFKJHGWTHGJMGQNGKTZISXHRYKTUAODQCRJUYZDWXCFZFNAOCIMLVMDRFCJTEAUXLYEGVLRKBFXIOKTHSZWHSQYGUACVBCHKGLUNTXJPPXKIXWWEOVUZYIBRTNLVHCDKTFPZDXVMJACPRXNYOVTLYLDOBXAPRQWACDQRDSLGEN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YSKRUMJEMRFMWHWJGZUMUPEZHJFVRRLWAQSRNDIZSCGUCV");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 30537U;
    tmp_msg_0.lat = 0.7732287985013411;
    tmp_msg_0.lon = 0.6607390725750606;
    tmp_msg_0.height = 0.06115821457455528;
    tmp_msg_0.services.assign("MHTCLLHYGHKQRKARYUPGSVAKTQIEDWSASNRMWCUNAAUFOPXDRQ");
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
    msg.setTimeStamp(0.21096577869740363);
    msg.setSource(47709U);
    msg.setSourceEntity(210U);
    msg.setDestination(10175U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("TLSQHHUSXZROHOHBXXALHWKMTDQXNZAKO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GZPTXIZNUUNVUWXRNYEWAYVDUCRMZSFYRZDMMFTJKKQOCHXNADEHUATJWKKCLPFVNVFAWWOJCALADXFVCQEVLZYPBFPAZNROPOTXQHXNQJVYGMRXOGBODXNUJKYGIJDUGOQSBDTGHYNSCLREBU");
    tmp_msg_0.sys_type = 119U;
    tmp_msg_0.owner = 27488U;
    tmp_msg_0.lat = 0.32175308717637563;
    tmp_msg_0.lon = 0.9193571843485963;
    tmp_msg_0.height = 0.7017435680175006;
    tmp_msg_0.services.assign("MLSVDHTYGKOBKKVVLEUFEXIUJEUPSCDRXYQCBTRYITVTMILMBDCGJXTPNZOBQEANQINBLAYEZJCSZGJECGDKKAVVMQPMFJOJZVRWTGWEGXPOFVWHKFPRNNPHQPHJKHARQZBAYCNYCXZMOSIHUMSGDQVHDTUPHWTSRRREOSDALAMAXIYDFNXQLTWXDTOZSSBBAWOUFJLNCSAGNMUWCYWMWUQZFIQZUFJVDIIIGZLLW");
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
    msg.setTimeStamp(0.10425190512939386);
    msg.setSource(316U);
    msg.setSourceEntity(145U);
    msg.setDestination(27853U);
    msg.setDestinationEntity(96U);
    msg.localname.assign("SQEYZCRLARSOCQLBPDEHIUMASGZQFNHLEXZYMVXXLWTKHILDFHZOAIXGZWBUABWYOUIGHSVDHMCNAJVHAVJFZDGNPZJPTCMVMXCUODCODMYBIXDKJIFKYJWQWXLFFMZUSCXTRZENUQRGTBKDYSNZMOJQKOIEQWGBOBU");

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
    msg.setTimeStamp(0.9914888824764283);
    msg.setSource(59400U);
    msg.setSourceEntity(52U);
    msg.setDestination(36943U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("IYCBNMUIPJGTHRKZOTHFTETQCHRZQCGBDJGWWZHWLEXYUATBNLCEPWAMSXPQDMJ");
    msg.predicate.assign("VCXZCKJZSGNRPTXNAHNKKZNRHGAWXCMXKTTQYCFDGTNLWAOVULQDSBRHBSIUCLZJAITDSSWJJXYRGRUIHGAFGKXBCFMTLHBHMOLER");
    msg.attributes.assign("WLIFVDRNVEXQZCFCCVIDXFUMKFVLVYOFPLJVTMMLRRABQHCEZXBAKJPWEBODYQBYMAAPNBTRIPCDOYWLJHQVLXHGIGJIJKZKQYGXGGPKNSMEEJMMSCSEQKNSCAOAUSFYFCGUMXBIDSICWPIWUHRVUSJYDSHDRRHRDAUXJABKTLZXTBHCNQJXJOHDTQPTOEKHOGN");

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
    msg.setTimeStamp(0.18143463570803586);
    msg.setSource(51370U);
    msg.setSourceEntity(124U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("KOTVIMGHFZYXDIKNIRSXBDHUMPNTCYQGZEZCSFHQ");
    msg.predicate.assign("AELNBWCQKIVSCIHCW");
    msg.attributes.assign("XYTIDUMDISCGALYEZHMGMIGNXNAWCGNDPFVCEDGQDBCQNYUJNFOVJMFMTHBJHTAUKEKCUZPPE");

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
    msg.setTimeStamp(0.7629567929550841);
    msg.setSource(30378U);
    msg.setSourceEntity(88U);
    msg.setDestination(16609U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("SURXNTXEDDIESRZBYYHKEQGXPLBBBMOJBAYIIHVWCUVKWIFAMHDWHASAQJQKFFRXWEVGGJAFOQAOGEGXXCVDPNHYGJXSNZYCALCAWMMQKXPPNMIQMLSMNQFNMHRTUSITPPCYTDLNFWRACLOBEPUVZBVTKTPWIJWFPDOVRESVCSOMLYEKRLTHBQVRGOGFCZNZNOGZJLKNDHWGZZZTBLKQLOEHTYMRFXDJQCUJITKZVIDRDUKEOY");
    msg.predicate.assign("SQFNRUWXDAWESJKLOTIEPCIRAOMIHBQYFXJIVFGHVYNKDNVOJFSQRARIOAMNOFSXUODTYIPOGGJZNLCQRUGBYCSIUDAWPVZJKVXYCUPHAMKCEUGZXKYGECTLILHUSUTZGDWPBJOKWANYQRJGZFRVTDQVZYEZVBXCXQSPFLMKAIYPRUJOZTMLSJHHTCDTJASEKWHTBMSWL");
    msg.attributes.assign("TKMBNBPCNPRFCPRVVBRESQYOGQIQTNGXZWULEBSUNEBJFWVBFZBIHYEDWDPDDDRDLORMXFUGYOIOQFKVKPEWZKKDHSRAVMGCAPVOSXPKOVYSLTWVOIQDXQSXWLMYIZUXIETOZABTUWYJZBCZUJLNNGIJVSFHWMLRHEPTVFGMAKBIUPJMFCR");

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
    msg.setTimeStamp(0.7217535179362567);
    msg.setSource(7985U);
    msg.setSourceEntity(161U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(243U);
    msg.command = 134U;
    msg.goal_id.assign("YDGBXRNSFIWDCUJRBQZJEQJVDXZHRUQWIAWRYJABSGHVHAOAMORCKPVVJWBEFEEHFGIBFHLUWCPRQPZBWIIZAQIYKELMKBKVMKOUFOLLSYONEDZIZKYYJTTNBVPEAOVCMXPNMUMPCHJLSXQZXISBVWMDFGGNVUKTYYRJXAYTDSZXCCPXAFOSNQYRGGISKDIRPDROGLLLVQ");
    msg.goal_xml.assign("UINDGQAYKWWGKLJIYAHANPWJSSVADELWRAYJCEGPTXRBRUGMRCIBGCVNUEWBSMDDYUXAMDGDXCFRZJYKMGFQXQKWUHTNFMFZOMNJ");

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
    msg.setTimeStamp(0.7820666099309066);
    msg.setSource(37607U);
    msg.setSourceEntity(43U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(104U);
    msg.command = 80U;
    msg.goal_id.assign("FJGMNEXLXBFCWNNZEBGMTDCNRDAXEPTLFHNZGXMBZSNBETKUDKRPNTVQCHZZVKYUFFJJQUHOIDWVGIXSDGRPJZCDRDHIIWAQBVMGIOPORYYCRGOHX");
    msg.goal_xml.assign("FJHIVWRTODUASYIJECTPGJIPPYNKSFHYGOBBMEZEVFDICBWWRUSAGPDUVOPJQRHXTXEUAGXQLQWJZKJFDKMSAMCQHOBXUWNGHLPLOSCYDZLLMKKBMAWAEUTFKHPQGZTIHYKZRFFRIAWTZHCSVBGYMDMQENHWONSNTWSBJEZVUPEZLENTFPXWOAZBCJDGECPSLYKCQLLVCYNFSUNGIRXLRBUOCNDJFRVMXQZMTXQYMRXXVRKDK");

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
    msg.setTimeStamp(0.2083322722882901);
    msg.setSource(2541U);
    msg.setSourceEntity(252U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(29U);
    msg.command = 54U;
    msg.goal_id.assign("UYZJEUSAMLKHDAJKBFXLDTSJTDXPYWKAIDFYWVINGBHHBCCWNGNFUVRGNCNFHZQI");
    msg.goal_xml.assign("ZXYLMCQJXNKPBADGODPGXAFIHFLFTGWCSIDNYXQMGWVYDHTBYJWTJACRCSSCBWZRNGEZJAHKRKZATMSVWOMJYUDJQSJYAXDGAOJXRXLDHFZOIHKPIUXTCUHPBVMSZWNGVEXIUMDFVCULCAXENHSVMOMQOJTOUKLOMVWPRKWGELEIHESTCFAUQZTPPNWKOPWCETRQBKTESVFQNBFPEIZ");

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
    msg.setTimeStamp(0.6861785315363894);
    msg.setSource(6606U);
    msg.setSourceEntity(42U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(133U);
    msg.op = 97U;
    msg.goal_id.assign("AFEWKOQPBYXMEENZENTUFMIDWWMHHRCANPYHHOOCMTQXXDKDQVLZININCZFCGJRTFPAHVXOSQQLUVZTZNOLTYYBUFVBKOZVHIJGJRFNOSFWVWXBBFIEUEDKQBVWLJAFDAGEGSFPUZOIM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XMWAZVPWHDYECRWNBMULKWQLGUKJOXDQNKWBHGARSSQNGQXWNYFZLBEFOGZVTWJFAIGEXPMRLULJXRLHMIOOSOIPCSOIVDVFJZAZKHPNFTSJJD");
    tmp_msg_0.predicate.assign("NCGCSWIDAHEVLJOWXQFZFVBIAZOLIELRTGXMCFITBLEFACYHNRZFQZPKBDCPFRGYMDWJLYGFQAHWSESJQNHGIBBQHARXLAZEECXGJPSHLJGXUJPQJNCOVUCSTZXNTOBVPBPMGOMAPYZQARPTXIISTWHCBAYVLLMNVQUSURDMNGKRUJQZUTOZ");
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
    msg.setTimeStamp(0.8356364745840112);
    msg.setSource(40268U);
    msg.setSourceEntity(54U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(59U);
    msg.op = 215U;
    msg.goal_id.assign("UGGLEMOCYBYXJBWMIPZDFSGHQDYLSIJKSQJSIRXYBMHSNATRONZDGTHYVAWVFIEOLRHETBGHLQGRNOYDFZBRYATZSTTYTCCKRICJGZKPMXLMPJNIAYWLQNBOSVOBBONAWXPKZIFFSGICKZXHHQDOIDNCTCREMJKVXFMWHEFAQFCOPRQQEWEXALXWLUKSJMJCSDRQYWPUVZUFOKNRALVXKUUAMPGHVUVVTBEM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RRUPIKPXBTRVSWGXWTCRFYKWZNMUVRKJFWIEYFEOJBLKLZEKQUXOLSUOFPYIWVYDCVHSFLEMOVNEWDETNDBXQLSHRTPCKCPMOVGOBKCPZYIGGFCTNFINXDXGGLOILIYODUADISKQMBPVONQMDTJTKHEUAGATRZNXWXUEZEFWSNQZJZQCBCSJWHIMGGHPAULTMYZHARHJDRUTBHQUQYLJRASXYGSHHVMNCJDXDMBABFJZQBCVAWJZQOKPEY");
    tmp_msg_0.predicate.assign("FCDHRHIHDFCMMFVISSTGPPSGYXGRZETVQXIWSXTEHMB");
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
    msg.setTimeStamp(0.7455101977924321);
    msg.setSource(4251U);
    msg.setSourceEntity(65U);
    msg.setDestination(37854U);
    msg.setDestinationEntity(213U);
    msg.op = 193U;
    msg.goal_id.assign("EKHICMWXUWEYEYXCAHOUFVPMHMNNGTQZIXULUKYWAYHRYLMLGDUFMHTZXPADSTJLPQWJQCIABSWOCLKVGNBPIMSROVIUDFVKKTOGHJXLBPBNREDICJHEQNSATJUZZLXVKZTDBVDARSLDNSKSOMFCQTEDYRBECRGBOSUGEHWWQFNZHXJXGWGEAJHTZIDVFPGPZBAQYURNPCIXRVKKNJDBTRIRVLAJVMNIWCGC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JKQAHFJWPXOSBIFOOUVRBPJWYSADRZSTINPCDLSZEBJFXVLKMCYTIYVDZFHWCDGMWEZXHUKUYOCKVXBKAHVCRSIHKYPOXTLEEUPHTAAMXZRMOBETGPQUCJTIPNGWTMWFCWKJUZSAAEHSLZNDJNNRVO");
    tmp_msg_0.predicate.assign("VIGKKEAADZEEYPBMAPSJPYVFFIFJBQVDNRRIRTVOQVHJQLVWXPHUNMKAICHGMFOVRUDRULJACRKXHEYAMGTATNJSASQTLLKYSVTXHCAEGNZZPBBOOOVQPXTZKGLFESYENYQNILKDOFCNWMHJHDSLPGTPXSCJDHOMCYHUTPILWGSWEFDCZBFLWS");
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
    msg.setTimeStamp(0.597910360765228);
    msg.setSource(59975U);
    msg.setSourceEntity(89U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(241U);
    msg.name.assign("ZHICYBWLMJANRRWEJUYSXTZJBHIZURPBWGUTSIUQVBJHVDDRDOFQNJVOMDOCLYVJANFCWVBSKCJCNITJHPGMGSCNZSBITGRXUNCVGLTHNWRPIKVOOKIZKXQLMVZHMSPIYTHFPAQQMANMZYRKAIZYWQFGCZRYLXAZWFYPIQNLBJXOAUE");
    msg.attr_type = 97U;
    msg.min.assign("AJHRQKWJSEACZAEHFGJIVSBBYYPPDMFTCYFZEFQIMHPMPSWXFILAJRDNCQBGDBOPHKMTJR");
    msg.max.assign("RAJJURRLDYPGSUIEJJPLUBOTPNMOOFPKBQTFESNAOCGHDWFVLZEASGKDHZEUOSEZIVMCZWLRFMVXCCTXZZPJVGFHAWMOUOUKMRITYXNIAJNDVKJCBRUYEDTIAPWECOVZQAYECFJMASZXEBG");

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
    msg.setTimeStamp(0.7523520030090078);
    msg.setSource(22092U);
    msg.setSourceEntity(79U);
    msg.setDestination(44892U);
    msg.setDestinationEntity(187U);
    msg.name.assign("XVCZVYWOLYSLFGGWEKUAMIZUXQTMTACEEZWUSLTSNQYKTPGQIETJSKNRESSAWTXCPMCAWRUPOBIDCNLSKNSBTPLXJMGDTXLVVGNPXHJVRWQIAOIBRJQBGOBKOKDLBH");
    msg.attr_type = 154U;
    msg.min.assign("EALPJYBGEZBHMKRJTKTTSHQJNYBDNGJUJBVNLWMWLXKRAKDASONDCJHPOSCLXQNARZPHRGRQGEHOIZISPFLWJKFMPSUBJQAKLCVRGMXTCXQPGDSWVABQTAGLVRBIFAVCHOTFAMCKUZDYPUTMCNUFRNRDFQUWEYMMVDDKOMKTZWVHG");
    msg.max.assign("NBSIKYPBJEDXTVLNGJWSIZEQVHCCPEWZDMCJKLEAKFQGZMBFOENPWAXXBFRIRXREUHXDWEUHJMZOUELQPIKUAF");

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
    msg.setTimeStamp(0.4614425950451132);
    msg.setSource(55471U);
    msg.setSourceEntity(24U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(247U);
    msg.name.assign("KJBAIGKNERTZRJMLBJWPIXVOOGDGCGWTCMLGEUWODJVKHYNXJQMYSABUWUXPJLTAOIVAUYKDZACOEQQOCLNSKZIBRMBKPEFSXLF");
    msg.attr_type = 155U;
    msg.min.assign("QFVGQZAVHKJRAOIJRETUZPTDUHAQLGPRSLXQXNNHOCBUAMBDXFFMYBOIJOFGKZLWIQNMJGNUVXYNZUYGJSXYHCNZQSSICVFKERKYVEEEWDEDLCEMHFWA");
    msg.max.assign("PELIXRCXRTAGMDPASGFCSQVJEZNSMDMYDEZIVDAWKOBFKCUGTBRIIDLNCGGVIKSLIAHKCHOUYXRGPOZCVFTLRTUEYQZGDBNQSFYEEFMJSMLQATKWWKQIUBENHZGWLUDJZJWVENVUCPTIMHTOHXAUQUUVWLYLJRFQMTEFBVOXKRWIOBRKTHCJNVNIHOHRTBVWGFYNQDHNNYJQPDDFHRMKZBAPPJXPLJWFXAOSPMZZZPSS");

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
    msg.setTimeStamp(0.14652016524637868);
    msg.setSource(62835U);
    msg.setSourceEntity(73U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("KCXWQKGAMFRJTLFGENBRVTPCUTHPDSFZBYQVUDQISTVOZMIIFVMEZEDETVNYLGBGNDHUMKYZISJYLWCGGZSOYRAHBKZQNDAAFBYVVFQTXAJDDYHAWCKJWXTOAXIPJMRFXCWIKLNHEBCLHUDDEQIXJAFOX");
    msg.predicate.assign("TKQIOGDOBFFAJGCTDDJLOKDUIKVBMYHQCBCTNNVPISGLWFZCYMJTFUWWGQAMAEOZSYDPMMXIUUZHVQNUNGUESRLLXBRAZWQTVWGBETKZBZJVSQCULYSZKHNFAOSAVUGUENKOXAMRWEMQTNTCFTEHSDFUYOJJIGXXVLCEQPRZYRIZQHAYSNXRLFWIPYHFBKNMALZPHXJIJGSVENEHEWYPPJBMRXLTCXDBRPR");

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
    msg.setTimeStamp(0.2182414206656904);
    msg.setSource(52411U);
    msg.setSourceEntity(253U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("IBONEYXMXFKZNHZOIGJBHKIDJETKMGOBYSHYBLBSRRLBJPNVTYPEMHNLGSALTLPGVCJQFCMJDCTFSVWCZCVLFXDYQZIKTFWZORZQAKPQIDDPGMXTUGWVRWPNDUALXFOITXRPUKEOHXYMGKIUQCJQPIVLINNKAOADDQHWBAOIXCVUYGWRL");
    msg.predicate.assign("WEHVBYHOUAVMVUKSSMALQCLPNIYSHOZIZKRETUPBMOZUGORUXQNRHOEQAPVMCTJFZMVHEBCBCSFHKDOBGWJKBPVIDZEPMVQDYZDAKJGSFVYMHWGRQTTJYEFLMNNZFASLWPHKQTJRQWGXMJIRNOJITMTVPDERSYNOWYCUNFXCFIUIBLYSXCOXQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UEMZNWHPBUQKXSNIHOJPIVWKBCHVIINQFQLURCXXZSKBSIPISNLKEREFMQGAKOTHAJTYXSOLJDLXFPEYLUJTNQEETBTYFBMRGJSGWYFBLMSBOHJWIYJVVOTKORRSXBCXDQPWNYAFVCDGQCJAOLZQAG");
    tmp_msg_0.attr_type = 130U;
    tmp_msg_0.min.assign("FZMTVQRALJTVGSXDFCWEZAEURKLAHUBVXESIPDOHJJDJOOERMOIESPLGKYIFDHKCPGRUSGZFYIEYNALNXUKXSGKKQOETGWCIAYBPVORJJVCWBNMWSBTPFXCDJUIQIFSTE");
    tmp_msg_0.max.assign("RPTZZUDKGADUYSWJNVBKZHXRGCXRHNTLHXCKNYJWMRKFROYYPQQLQUTYHBOSNGJIXZSXFCHKPFMLDKGVBLEQKLIVAGZOIBUBPEOOUOGEYIFNNDVXCBZZPCSIXJTQBPSSJPTCZWEAYWUQGFIGQLTRRAJBURWRFMYDWD");
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
    msg.setTimeStamp(0.17248321500383335);
    msg.setSource(19934U);
    msg.setSourceEntity(231U);
    msg.setDestination(49836U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("FDMTROMQCEATUBRCFHQRXNQQHDONFPSZNNUAALTVNSFAWPKSUWDWLPXVMBKUZYIHGYYGTSZEGIOMQPAEFALUTYZCJHTIJOPOYUVDKXRLBOMNNFVFPHJVCSZEWBVSOWSCXMTDVPRWGIDEVXEGPQROQICWGBBUTKRFXBUXHMPDCRMILZRXCL");
    msg.predicate.assign("KLSBTTGEMXJBOWZACLRJWVQUEYLTVRNCPPPCJNXGXLQNYXBLVCGFBHMKOHSVMHEGCMZWQPWJLDLCJHZEYYIHQZFWZYTOBOARTYFKNCJSOSDOOMQVEKERXTIVUGQMIIWPRTTSNUHJDKJPTURXDIIHLUBDAOCANNFWUNSQFRLFPEVKAZPEGRYKKAMGH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PHZPTDLGACMYQXQXMZWPAMWTEWPQSEUJJXFSJXJEDHLRHXEALGJKTWXIIWAVUIIFSGLVHEMQERXQIGFBHTABEFGWVBYLLYLEZVSUIRNRNRONPTBSCXCSQYKZIYAGUUBDMLKJQLIMPUZWRCKPVFPNNEOWYQIOVKAVVHHSYJNRICDKTOPSOUBJDNDBCCMQJDBVHWVG");
    tmp_msg_0.attr_type = 110U;
    tmp_msg_0.min.assign("CHHAVNOTCEYCJNRJDGBOMFFESOMLVSYAHQXCPWWIDYWYXTKKZENYZBQWARYJUOTELXASIWVAUVLJQUTPYSHPBXIFZTKBMHGNOGIQIZZQKDIBGRJUCFNHFELVCJHFLQADMEMBGOSTZFDASUMMVVPCSBZGGEPJORQCENCJJOBLQGOMMDUCHQZTRPSTIVESDZDXTFWKLAUFXVYWYLJHSRPKRBNYXIIWX");
    tmp_msg_0.max.assign("KBJGBURVUOGJJDCRVVJCZKIZUMIITNWXUJLMIGKGPOLADWYMLQNWVFYLICTYUPRBQTDMKCSADBEKHVVLHYIRBPJTAGQSCRUDGPCASCJTYQOFHBCAQDZXEMYFIKKWGH");
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
    msg.setTimeStamp(0.627561004299679);
    msg.setSource(59117U);
    msg.setSourceEntity(180U);
    msg.setDestination(38339U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("AVJOCYLFLGFWQLBXFTJKMRMMTKWKEMFIUNZXSUOSSXHJKUFLUPXGBPLTLQAKYUIWIRGQXBGQIYTDRQOPVHVQCTQHVURSBZWDNMCNTQDFROYLVZQHZAOJIBSXCDMXKDEEUHSDZIE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SAFONSMSHEADTFIXUGFGWWJQNYIPQFJENSCQAXLLJDBVOAZNYJUQZKFKRDRUABXCFTGGNUIMALEGOWNMYGOZMDVOHRXVYYKE");
    tmp_msg_0.predicate.assign("KYPEXESDRLPNDNESGAJSTTLYDGZQYUZTHIKTFRFIHGUNJXBPZDMBRWUQHMKZJZRQNAIQJHVMLUUZIZAVEPUZDLBKVOCSXGXJMCPQMLROPZCDCXAGIIOFSWXUYIDCLMMOFJDCXZSEWUBKQNRMOIOCKPELFNWAJINCQGDOFBRXHBAEUWVFHYOAHTWLPFLEFSWLAONTQBVGWNNOYJTGQKYTSRMCJPHYVTQRTAHXEWCKU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FSOOXTCGRFUXEOEGCREVGVIKFPFFNGZUWKLBMKWMSKXXWOZRMZQQBLJMNVKWNSZPBXMLDUXCZSVRJVOADUGHOQQYKWTSHUNNQDMSOAKOXIHVLEJKHJYBTATNHWQLDOEEMNEWKCJILGUKJGITRELWAQTTABEBYVCDSPGXZAHITIYPCJHYQGINRQUSZBHILLLDQFPTAYSMCRMUYCIBIAWVFANZ");
    tmp_tmp_msg_0_0.attr_type = 49U;
    tmp_tmp_msg_0_0.min.assign("YLJGKAJDOOWRAGYNEGCUYRTKOBZEPHMFBXSGLVFVZTMSFKSKQFYESWMYUWNTXLIIPVXKIULNHURPZVVWIDFLJENXJQLTGBQCAXCQMSJVGEOMCASOOQPUKOJESNYDVSUXXQJRESGPWYDOGUBLYUGQDKJPRNZDNMHNYCBHJRFRKODHFLTAPVNBPWSWICLZNHBRFIPLZIVGRZBXEUTQACXCAZQKTWTRXAMDQTFIZHDDCVMAUHHTHFAWPWYICMKZ");
    tmp_tmp_msg_0_0.max.assign("PPSHWASBIBCRRATVUNGDXTVJOYXGMCQIZNEIREJSMGYYGJBDCGEEXQUMDMWXCRFAKNQVVWWCARFDKQCWHNYKLJPYIGFHNSXZPAQSEVWDOOUPTZCRPSEXBUGRHWDJFPNOROTMJSBTKBBXQDHIZNWLVVIZOJIOKODKLKWUQL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.16949105476050297);
    msg.setSource(2990U);
    msg.setSourceEntity(56U);
    msg.setDestination(43672U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("KKPSFBXZHJIONQMVIULDVLJBFIPISNPTDWDEUVHHTCLFNAUPJCFBNYXQBRGACSLQRVYGAFNBPROZAAIIFGOZMOEPGQLKYESCDOYTHBXJJSZSBSNEZMWUUHFLGTTOQQGQLDUECVMSXFGOMEWPENDZRCVTOCJLMHVQNDGRSYAWDJEHBHKBTJZMIWFDUJUQX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GRZRDNRHCLJMNRVQAFRHSHEQKZUDUPFHFMBGRHLEACBLXBFFIBFMKTDJDBRGCTJONUTEKZVWVMTUQINRWEEIPXVAPKJEIZYYTXQHRFWGFAZUJANLWYKBOWLIUCBUMHCWKTODAOYCLEGSPCHNPXCIMPVOINIZVFOTIUPLOGSVUFTMSGJKWNKNQHQSRBYXEAMSWDPSEG");
    tmp_msg_0.predicate.assign("RBLOBVLRIAFOHYKKDLRXEVPYDGSXMMHYITURZRHZEEJHEQNWUJQGDKMNSASKLAUFVYBBJSVLTWVCFHAJJUDDPVYLIOQBWGXBECFNZMZAIZYHWCFCMTXOIIZWNLPYREORCDHXZUGSNBTTEXGMVTKLUUQZNOBGKCHQETVQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VXFOSCMRKQRZOBVXIEAGRQKHPIOMHQRZETCSOXZWVAYDRFHGBEPYMMULHPAKFTJMKCSHCMYFUGNGHQSFYCIKGSNRXPOWDQNAHOQDDEBSPTYXWRUDSMLCTNPXXIZJKNLEVVSDXTZYPVBCLDIJIASRJJTZLLVYMIYFYUUGJQVFRAOABCUDBFNSJZFUWGIEAUQWTCWZEALIYGMBZKBVTHRLF");
    tmp_tmp_msg_0_0.attr_type = 5U;
    tmp_tmp_msg_0_0.min.assign("GNXNBHWQKDMWLUCYAKZAKFPBFMCTRMCETFCLPJFIPUOSIAGDJBHPKZFTDOECSZNTWKAUJUMZSSKSPRAVZUNWWVXJSIYORXAFVNLYBWTFPLQXMRXISZBZRBVPIEUKDFZWGDMDCYWJPOGXTLQMGGGGEIKQVUEZJOCGPTVIOLBAMDNRHQQ");
    tmp_tmp_msg_0_0.max.assign("DWISWIJIEMVKBHYUKOHQKNIURRNFBJWLVMYXQJSBWRXDIEVWPZOEGHCRTXGTVFSTSYLMUBZNRDVSOZXUYCIMBWZBPGYDAFHHCILQTCNEZGNU");
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
    msg.setTimeStamp(0.7642327570804862);
    msg.setSource(60893U);
    msg.setSourceEntity(28U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(137U);
    msg.reactor.assign("FCYLYCVYUBHDIYDWLJSPMGAVKHBJKIOWJVCLENVGUIXXXCLHNROSEWGEPSHJXZUPEIQFBPJZTYMBOBAURXHWUZSBCSMVGUKMKOKAOCPCCDOBJUREMPZDZVIMTYADHAWRYGXPHAJRMNMDFXQXTNEOETSUJNIFWRUHBRQGKIZDMR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LXGGNHYPEWYIUZUDDTTOXOKUOPDEHUPHWXOHKHDAEMMSSAYCRMCESNXDBAPPNSFEZPIJJNDGFRQBGXAZBFXBJSJKIQOSPCSFKKLLCBBQQCLSBZKWGDIQHYJVIGXVHWBWROTTKLITEFMWFJBECFVERPTNJMRHFIUULEFUHPVIOWGYJMGMFVJQVTUSMYNGWTKNOXYWROYQAKEDUKRNOAQZDDQVMGZZRYXRVVVZAWZAPNAR");
    tmp_msg_0.predicate.assign("ALQEOSFXJZWGCPZDKDKXTNQQBKMBHWTZGCRIMPGA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NQEXALGUACEDLVNEIJZQJMMPCIEUKXYGUSZFHDDQRKMAXDWVCBTZRNYGKRIGEQLJHFNBOQLWKIZJLSVTQBADUDTRYKWIZSGFPWMVUEPPLJOYVSWNOCIOCNHFVRSAJYYTRUHPBISSXHOPOXVVWEKSVZNXFYCCQLAVOZJXFTEARKBXQNCCSBMNTDBQHAWLBZPBMWGPRMJLWILYFMHCMPKEOHKYTENTSGAGFUDUUITIJD");
    tmp_tmp_msg_0_0.attr_type = 168U;
    tmp_tmp_msg_0_0.min.assign("MOMXQUADJFUZVWYDVRVOEJDVQCRJXTSTADPUUQNWYQGASAXCINZWWLQVXKMSTTSECOGAYWZDEUFFKYOABTEIPJFHLFSZBHMWZS");
    tmp_tmp_msg_0_0.max.assign("QVDNPZAYJZSTJTNOGIMGQMEICLFKWXHPQCVUTNRNRUKGXMHTJSBIJWDJXXUOBUFIVYALCOIIQVPCLYDSCECMGCXHVJSSYTVXE");
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
    msg.setTimeStamp(0.5865708241413519);
    msg.setSource(27672U);
    msg.setSourceEntity(184U);
    msg.setDestination(52633U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("NHVFOTXAQVUTZZBJDLURSLGYGVNPOTYZGFLSIBCSEUGEIKKYIRAWQFDGTHBQNPPCBINFSCAUBSWDAZAMIZYXYEMSCXSZLZACFVMRTHMJKQDNAFCGTVPUOXVPJDDPOCGLK");
    msg.data.assign("MVIDNQSCKNCGSUZNZFUZSIPLAAGPDZ");

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
    msg.setTimeStamp(0.1146901696445406);
    msg.setSource(64206U);
    msg.setSourceEntity(73U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(187U);
    msg.topic.assign("ZBCSFTEBFTOKVTOMUOFIRQDAXASGLAFULNZYIHWXGRMIBRWDWC");
    msg.data.assign("DULUWHOLMNGGYOLYPPYFBKRCPEAVQDEBBCKAUJXMYIUMNFRLEPKFOWXIQHCRGNLHRNZETJISFACIIMNFCFUKMEZLWMKSBXEZUIUVJJUUDRANNLTNPHHYBPTHWKEHGXPSDMLVLZIFRIOIYEQSZTDZXPSXOKAHXUFJJWGTHJODSWXRJG");

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
    msg.setTimeStamp(0.6182142313239329);
    msg.setSource(40856U);
    msg.setSourceEntity(117U);
    msg.setDestination(19866U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("THHAJETOISTELLTRYLNGZKMHZCLKBPIGSDUYBEAAFXVVOHDKBWRUJETNPBZRYEEJOCJLKBPHZQBIRYSBLJIDPNVORUKXVCXQTEWKCNZQGTXZFCZVPMWPOF");
    msg.data.assign("VTFUDQCHFHTYKNXKEWTRJW");

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
    msg.setTimeStamp(0.0264311142308844);
    msg.setSource(48240U);
    msg.setSourceEntity(180U);
    msg.setDestination(44306U);
    msg.setDestinationEntity(106U);
    msg.frameid = 180U;
    const char tmp_msg_0[] = {65, 89, 124, -74, 86, -68, -63, -69, -27, 37, -22, -127, 26, 18, -109, -99, 114, -19, -14, 24, 110, 70, 69, 75, -122, -24, 26, -31, 85, 91, 1, 30, -107, -75, -101, 81, -81, 100, -106, -27, -119, 55, 44, 16, 69, -83, -33, -63, -117, 6, -76, -82, -72, 82, 94, -83, 3, -24, 106, -28, 22, -87, 49, 73, -126, 77, -49, 26, -33, -82, 41, 120, 80, -7, -74, -44, 70, 123, -31, -37, -83, -78, 18, 101, 23, 97, 7, 53, 39, -123, -50, -94, 38, -13, -2, 23, 66, 109, 112, -22, -30, -39, -64, -100, -27, -55, 25, 41, 69, 66, 70, -49, -91, -38, -31, -117};
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
    msg.setTimeStamp(0.1980714126110248);
    msg.setSource(55411U);
    msg.setSourceEntity(36U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(107U);
    msg.frameid = 205U;
    const char tmp_msg_0[] = {-37, -36, -108, 104, -74, -13, -124, -119, -24, -17, -4, 64, -77, -31, 91, -115, 55, -12, 7, 111, -40, 125, -5, 56, 53, -37, 36, 99, 121, 48, -124, -15, 70, -37, 11, -69, -45, 13, 122, 85, 67, 35, 105, -46, -59, 44, 20, -123, 9, -29, -86, -38, 48, -78, -19, 72, -44, -100, 103, -119, -121, -26, -94, -33, 1, -108, -70, -113, -35, 72, -100, -23, 54, -118, 32, 93, 121, 123, -110, -33, 25, -84, 98, 91, 60, 119, -128, 96, -119, -99, -17, 80, 80, -51, -28, -2, -46, -21, 49, 28, 84, -57, 80, -40, 115, 16, -12, 72, -91, -74, 108, -125, -82, -71, -8, 15, 5, -17, -78, -28, 56, 81, -121, 24, 107, 1, -106, -4, 25, -91, -27, 63, 60, -90, -32, -18, 47, 44, -70, 2, 83, 69};
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
    msg.setTimeStamp(0.5303849519491965);
    msg.setSource(12988U);
    msg.setSourceEntity(158U);
    msg.setDestination(15945U);
    msg.setDestinationEntity(54U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {-102, -57, -91, -15, 4, -107, -126, -96, 81, -23, 21, -87, 16, -111, -49, -24, -115, -13, -127, -128, -29, -6, -95, -46, 28, -46, -8, 71, 96, 84, 85, 54, 18, 38, -57, 20, -90, -107, 67, 125, -117, 55, -118, -70, 63, -93, 81, 93, 69, -58, 109, -44, -33, 89, -101, 13, 43, 98, 19, 84, 46, -69, 86, 126, -4, -60, 96, -16, -55, 35, -79, 101, 80, 58, 95, -92, -14, 0, 125, -45, 88, -15, -125, 26, -34, -59, -92, 79, 1, -111, 93, -119, 87, -62, -12, 49, 83, 7, -35, -126, -105, 119, -119, -97, -3, -36, -35, 68, -50, 63, 40, 110, 35, 5, -29, -125, 96, -57, 12, -96, 111, 44, 62, -39, 59, 66, -19, -111, -35, 11, 77, -29, -90, -105, 89, 48, 50, 16, -22, -102, -83, 117, -6, 98, -69, -121, 109, 47, -114, 10, -7, 72, -18, 29, 7, -102, -77};
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
    msg.setTimeStamp(0.4196406262718879);
    msg.setSource(41228U);
    msg.setSourceEntity(20U);
    msg.setDestination(12903U);
    msg.setDestinationEntity(128U);
    msg.fps = 234U;
    msg.quality = 176U;
    msg.reps = 204U;
    msg.tsize = 170U;

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
    msg.setTimeStamp(0.18621281108185317);
    msg.setSource(47136U);
    msg.setSourceEntity(116U);
    msg.setDestination(30486U);
    msg.setDestinationEntity(109U);
    msg.fps = 97U;
    msg.quality = 13U;
    msg.reps = 247U;
    msg.tsize = 91U;

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
    msg.setTimeStamp(0.9765039094333858);
    msg.setSource(42124U);
    msg.setSourceEntity(184U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(80U);
    msg.fps = 18U;
    msg.quality = 20U;
    msg.reps = 93U;
    msg.tsize = 10U;

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
    msg.setTimeStamp(0.010848070898313966);
    msg.setSource(24821U);
    msg.setSourceEntity(237U);
    msg.setDestination(24060U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.6658985833585342;
    msg.lon = 0.17364861810567989;
    msg.depth = 36U;
    msg.speed = 0.4759006543765504;
    msg.psi = 0.6838053600945867;

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
    msg.setTimeStamp(0.3972149217199461);
    msg.setSource(11687U);
    msg.setSourceEntity(121U);
    msg.setDestination(64737U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.41605675561079614;
    msg.lon = 0.2534173251564841;
    msg.depth = 64U;
    msg.speed = 0.984703936828974;
    msg.psi = 0.440209137987675;

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
    msg.setTimeStamp(0.9981725481274556);
    msg.setSource(28231U);
    msg.setSourceEntity(156U);
    msg.setDestination(21074U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.8745703106447436;
    msg.lon = 0.03517470922390031;
    msg.depth = 22U;
    msg.speed = 0.9101541101992551;
    msg.psi = 0.9114650112711984;

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
    msg.setTimeStamp(0.5785095112805858);
    msg.setSource(7874U);
    msg.setSourceEntity(188U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(146U);
    msg.label.assign("GSVAWHTEMXNZPIQFIOLAIGDJYTLJWBFLDTNANNLTFGFBRTTOOSVPWXBHDFHIVKEABZUJPGPKEBSMAEXQCPUSTQLJLQGAMNGKCQDLGCSNSHPHDHBYUIRZEKULGWMBXMJOWDYIVAUFGBCYBRRJIWMURSUTOBZZMAONHMRDYCLKNXNRF");
    msg.lat = 0.6063834108903183;
    msg.lon = 0.9326957049013708;
    msg.z = 0.2897194299769008;
    msg.z_units = 136U;
    msg.cog = 0.06191069644667346;
    msg.sog = 0.9927143206243841;

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
    msg.setTimeStamp(0.3299471208118082);
    msg.setSource(12727U);
    msg.setSourceEntity(97U);
    msg.setDestination(28517U);
    msg.setDestinationEntity(239U);
    msg.label.assign("GLZIXARMIFSFFFQNTTEQRKDMQRYEJGZICGKVWOHNSLWIFOSNUOSHJENTL");
    msg.lat = 0.09319292952735181;
    msg.lon = 0.47958677983029263;
    msg.z = 0.8083044006242605;
    msg.z_units = 78U;
    msg.cog = 0.6525342454572762;
    msg.sog = 0.4775966281304551;

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
    msg.setTimeStamp(0.4509724448599206);
    msg.setSource(27331U);
    msg.setSourceEntity(241U);
    msg.setDestination(17173U);
    msg.setDestinationEntity(214U);
    msg.label.assign("XTUAPZMGFLXVSVYNQDLXSZIXRPOLHCBDRJOIWGFEEWFSXWAXKBCRWOHHOSOYGPVGINQUAKINSLTCIUMNFCXRTDHBSBVFQBEWZUBUJZUHZVXL");
    msg.lat = 0.4618129364111574;
    msg.lon = 0.6189238355939835;
    msg.z = 0.08407531825979564;
    msg.z_units = 72U;
    msg.cog = 0.08878222241942246;
    msg.sog = 0.6878180034982552;

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
    msg.setTimeStamp(0.9126774378953451);
    msg.setSource(36017U);
    msg.setSourceEntity(103U);
    msg.setDestination(28920U);
    msg.setDestinationEntity(37U);
    msg.name.assign("OFAPZMXCBGVE");
    msg.value.assign("OGFHCWNJTMXB");

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
    msg.setTimeStamp(0.5334415404706169);
    msg.setSource(22789U);
    msg.setSourceEntity(114U);
    msg.setDestination(10505U);
    msg.setDestinationEntity(186U);
    msg.name.assign("ZIBRZOKRDMHQNGKKODRQQTSZDSXWJMLACGRXANUVNJFCOFBHBRVMYEOZLUOPIQDXSTCNUXBFEAWVOYAGJEXAJSEPMMNBYTJQEZHALEIUNKVSWFWMIXGLPBYYXJSNVLZSKFDTBTWOFFQN");
    msg.value.assign("ETELFFYDXQIUREKOZNMYIVNEYRVGXAKPPQKOMCTSXCHVYIXSUHVNWNMQGCCBKZPRCJRLLCDSNTWZTGAEWRWATGOVPIAZQQLEIMZJQHHUHGIHMNJYQGFOIJTVAPTEIYDOMRRTCLXUNHTAJARWDBIUKPMBYFJBOBZFSKMCFVCGOSSKLDFULKEPDVSKDGJMUAAEYUPBDXROHLSZWYHWLFMOYWDBXUEBZPXLTBJGSJRF");

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
    msg.setTimeStamp(0.03126014882186401);
    msg.setSource(50032U);
    msg.setSourceEntity(138U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VTRSNVFOMLVSXZNLJEHVALGOSVIVXMBEUPXWGNBYVXURCGOGZYQUBFUCUSIQLNGUWPSBJGCVPDKPLXXAKPFOBMDECIDPWBQMHOVQCEEMECRCLGZFSCHAFAQTZJMDAFRNHDNIYJMYGLDKWYDQAXFYAUYHBKYLHKXDPRHRQHGSTJEYZMIOJWZROXREZJOYDGZCZWTTTSOIANANQFJUMJNQSUNQIOWKCMKEBBIKREPBIPTUPITWZWDXTWRJKL");
    msg.value.assign("AJUMAWGNBMPKCULETBOHXYNZDKVXZBNKSVYHEMHDGSWHQPJWMGOTUJIKKQBPATCSNPFJEEBYSORCEQQGFYHSMIWIVPGODJZUTMFLAITHCEVPLGLWLRHVFHLEDTXDYOJDTBAZKXAKQSASVIRUZNWYSRUBOXWMNCXCWFEADUVLDMFZRIJIPIXVEUCYWNGTSAYBUJZOPDTC");

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
    msg.setTimeStamp(0.11998023818747627);
    msg.setSource(38826U);
    msg.setSourceEntity(146U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(166U);
    msg.name.assign("IXIOYMAJEHEJFBXRRMKSPKDEXCYDEDKJFGHBHLTFDKVULWPBLMAPVCMKQPOUVAPZCWUWVOWBRLBSHOIXOTGEJUEPINZZNVZHIDFVIJTGHLRNSNJKAKCYYCDIHOEDRDPTQAGMTWMLHKIBUGHQSACYGNKQZQRXJUYGSYVJLGXVBWHDBFNASZZCXO");

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
    msg.setTimeStamp(0.8021826224017207);
    msg.setSource(61579U);
    msg.setSourceEntity(33U);
    msg.setDestination(20398U);
    msg.setDestinationEntity(233U);
    msg.name.assign("QWTERQEKHLUYNEAOYVQIPMFDOVGFALCONLRLGFCPTXZZLWKTCUMVQZEYHHYHXZSRBXGRLSSMDDFCHQOJNKJANCPITARMCHGRQAXVDGIYIMOLUTNGRLQNBOGDBBSVHIQYPZWWPWTBWKJJXFPUFXSMJUPXYBZOIYPACMFZCWIYBYMKQTSIBLUSFRNHJW");

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
    msg.setTimeStamp(0.29261271486288454);
    msg.setSource(49375U);
    msg.setSourceEntity(125U);
    msg.setDestination(47466U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GVRNQROJZGICKZAMCHCGBAGIOQFIDZLITDWNAKVXBBAKHKUDJIDQKYCSVLZICUCVFQQRHPXJYFBGNQTDSTMFNEFJSIELRNQZOLYOCEZAVETUNHNYKNYKBMMBFBBIDHLU");

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
    msg.setTimeStamp(0.19458567038473362);
    msg.setSource(4043U);
    msg.setSourceEntity(212U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(134U);
    msg.name.assign("XFZJQZWOMBLYJTWWIWEETDUEVJPRUNSWHZCNDQSEBCAVBIZMZRCLOELHXIHDOIXGCDOBTONAZGYAKHELJIBDVWEMGYPCFTAWLSIZAAMCSHFOHRHFCYKMPVUS");
    msg.visibility.assign("PWYHMQXCREHGFMFNUVXLWBDTJVHUDJLQVTVFRQTGQAAKIVHUKXDNJXCIVUPCMOQRPGUDUZFDPYPWYSXYSUBHJNIXLZIELXMAWAAJZBOHYISMSAEWRZTNVWXCQBHXRCCQJWGGNOVRALTTELBLTEZKZNTCOGDVLNUSXKFZPPQANDJGHIBZPTR");
    msg.scope.assign("KWTEWFJFKTYOTUSQJGJJXOCEDIHNZYRLVHEIYNGJGBOCGTOKCZIHWGHRQZDDOWACWMEKNPYPJSRIEMYX");

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
    msg.setTimeStamp(0.28728526823847456);
    msg.setSource(22896U);
    msg.setSourceEntity(97U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(91U);
    msg.name.assign("HVODJOJIPGVHQOTXCSZUFUSTIEMNWZW");
    msg.visibility.assign("ELGGTFRJEVJDQCOXOHXAVWDLUISINYRTTDKCRPSQIYYNWBWKJWZQEIMGUUZCWGVRGGKDFCIEDBHBNBJININVQKENLCWPZYXWARAJDRVOOYPYUZDMTHLEFARLSDHLXXIQKTBKMQYAQGAWSDWPCPOSKMOFBZTUHQZGWDXRXUYKHZPATXPSSFBJZMMEYGUTMBUVRJRHNAEABHLNFNLCFVOPGHMCFJSIKFOJZSQFN");
    msg.scope.assign("EYPOWIVWMKUWAAPUYTHDBKZZWLJDCYSTZCDDRMECSKYPEGBFTTNZTTOAHKDSNWUMFGSLYDMWEBMBEQVILIKNWRVDRMSAZXAPCPVNOTNZBXYGULMHDCEWRJKQXGHDBJWIHGOQBUNBPHVYZPXKUTRVFACAJSOQGQPJXIROSGJEPVSDBBLUQRIAVHCSZFHRMUQZKMOQQKIAXYXCZEJCQRWEVJFIJHVXNPJFLUFFFLHO");

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
    msg.setTimeStamp(0.3015356675665313);
    msg.setSource(52518U);
    msg.setSourceEntity(37U);
    msg.setDestination(4404U);
    msg.setDestinationEntity(40U);
    msg.name.assign("BTUHSXDJGLVYAMYYILFRBBVDTOUVKEABGCCNOUNMWXQYYELFPRKIRBAQJJUDWPFDHVSMEKMTJHJXXJZWCZCGEFARBZKVBNIXVXAUAFIORGNYNCTGSITSMLYH");
    msg.visibility.assign("SZWGJYNFVURIYJVADMXXKOHWEEJUXTKFWALKLCUQGYAYEYHWIZBHK");
    msg.scope.assign("XBRMVZRUVJSMAIYKIWSWJJYGCDLSCZEWGEEZEHAKYFLJPTMWNTSXMUEACGJOJSUJYTECFCPCVXFDOBGRNTXXFLXGKYNQZHSYWVFZNISOCKAUKGOMTTOJPIYAZHVLOAOWJBXCCQEDMMZUDS");

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
    msg.setTimeStamp(0.421016671195241);
    msg.setSource(53514U);
    msg.setSourceEntity(183U);
    msg.setDestination(15180U);
    msg.setDestinationEntity(150U);
    msg.name.assign("WBGECABJOALZKTZKOKDKXCDDQLYHVHLPLWSJYJGLZAVIUPCSOHOIKRAWYSJBMDMFGMETBYHNPEKXQZNNDDOMZRBNPBVMFEIKZJCATLMUSXDQFBUGCQGRXHFSIKFNNFWDJUOQYRCGEXJQISZMDRYWYRBHZSJDIGRTGWHYKSMVUOKVOCSHPPZMPWRFIVJSTYXWQEUUXOLCWOHTAFIVFGBZEGXRRAUN");

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
    msg.setTimeStamp(0.3512330418314106);
    msg.setSource(65478U);
    msg.setSourceEntity(246U);
    msg.setDestination(32062U);
    msg.setDestinationEntity(65U);
    msg.name.assign("ZPLFIFMMVIKXSRRCTABNBXVDMHYYDQOIRRPRLBMLKGBBNFAJDHDCCOHXPQTAAWDGQMEQVWKKNWQJRVUODSAUXCULRVVXMYTBWQGKLVWTZLHPSOZZAODXWTLPNGDKYULONEJPUQYINTNWMGBSQVWZIXZUWUIXINTHXKFPMVTVBYGZIMMKUSEAEZFQFPWUCCSAGHCHCRROSOXDBQUYBHGIFPHHSEAFEYIKLJTYEJLTPJFJSDJOJYR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FIONHAWQBTHXNIOKGFMPFQRIXWERPWGSEISXHZXJDBUGCSTZKNJAXGOHJOYUUWTOFWKCBFZVYVXDOEZRBEBTPVCLZOUL");
    tmp_msg_0.value.assign("HWEEZVIMNCXXOQCGFABBMPVHDQEZMIWMNKIVCEFAFBGAMSWAMLIFUGATOPSZWNATNLEAUETNZIYDWAOBPPHZCKSSLXPOHVCPMBHZQRYTLQXUVDDNYUBFXKQQLZJDKSPJIVGCXTGCLMEUWURAYGUKIJRSGXTEYWYKKSOHRLWPQJDXJRGZENGXJPLLUCFMTZBPYVNUIONVDRTAOOSJOMLTDNJKYURXQHIOJRDRVWKFFYQSZCF");
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
    msg.setTimeStamp(0.6892173314279391);
    msg.setSource(50462U);
    msg.setSourceEntity(203U);
    msg.setDestination(32121U);
    msg.setDestinationEntity(176U);
    msg.name.assign("MSFMBIRBBSJSUZNCAYOMDVWPPIGRHEANFXOCJABCDFXOPIZXPSOMXXOBAUUNQYWGMCYBBVKERALVMDEDAYNGKZQKNWGDCJHBDOOTIGCKCVHFUXQY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UMYXGDDVIOTUQANGLDHRTFVYRNROIXBASAANIQKBGUQNOGLXUBKQYKURZVCREATAHOBJKMCTYPOKCGMOXFF");
    tmp_msg_0.value.assign("JHAISZLPDUTBMFXMLZILMZNFCBRUXWEKLPTFXFPIXIYRVWRUDSBXWYDWWEQNYNUXXEBHNKAOSFPOZJYAN");
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
    msg.setTimeStamp(0.44700921707308894);
    msg.setSource(13797U);
    msg.setSourceEntity(167U);
    msg.setDestination(16466U);
    msg.setDestinationEntity(242U);
    msg.name.assign("JURIVQMVCWSJWYS");

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
    msg.setTimeStamp(0.38736500045808175);
    msg.setSource(62450U);
    msg.setSourceEntity(128U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(253U);
    msg.name.assign("KMPTBIOSRRLJDWIZZUOJYGHISYNGCBFDQAAJUHKPQILWVTDATRUTMYZYWCFIEOXHPQNKEZYQHANFQZGBPORVUVXOXHKBVEZEITFZXNS");

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
    msg.setTimeStamp(0.8478018349492091);
    msg.setSource(32703U);
    msg.setSourceEntity(49U);
    msg.setDestination(42686U);
    msg.setDestinationEntity(247U);
    msg.name.assign("INGXVNTQZPDLUOYVOXZPFYUTJATVWTXMEU");

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
    msg.setTimeStamp(0.9453513142679322);
    msg.setSource(22373U);
    msg.setSourceEntity(94U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(41U);
    msg.timeout = 237886071U;

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
    msg.setTimeStamp(0.658184495017513);
    msg.setSource(41097U);
    msg.setSourceEntity(17U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(141U);
    msg.timeout = 641008720U;

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
    msg.setTimeStamp(0.4463735246852446);
    msg.setSource(35373U);
    msg.setSourceEntity(38U);
    msg.setDestination(30773U);
    msg.setDestinationEntity(247U);
    msg.timeout = 1217357936U;

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
    msg.setTimeStamp(0.6699631226181185);
    msg.setSource(3949U);
    msg.setSourceEntity(141U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3565116199U;

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
    msg.setTimeStamp(0.5260483018491539);
    msg.setSource(58573U);
    msg.setSourceEntity(158U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(191U);
    msg.sessid = 1770926312U;

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
    msg.setTimeStamp(0.5304186900856783);
    msg.setSource(1274U);
    msg.setSourceEntity(69U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(215U);
    msg.sessid = 3351814908U;

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
    msg.setTimeStamp(0.7773618830889507);
    msg.setSource(24596U);
    msg.setSourceEntity(55U);
    msg.setDestination(30707U);
    msg.setDestinationEntity(217U);
    msg.sessid = 4274258699U;
    msg.messages.assign("QURHRWUPFXYWRXNWUVEQJAZJLHOKQNLJCGXNVBSTHVREMYDFTAFNIYSICBFEPMGBWWHDKTJIIKGDQPYEJMRNNGNTWAUSABDKUKXBZZLOZMFPUURCQIHJGDGBLVTHGCZPFHIWZMTYQLMXKPICEMLKEKHDIGNRDULWEMIRCQOPCVMAFJXZQXAWLCJTTOUODBBGOSGRRVKQYPYSYJXFESJZSYDEXNTZPBSUOHZASVPVDQVN");

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
    msg.setTimeStamp(0.4889358664456285);
    msg.setSource(58345U);
    msg.setSourceEntity(6U);
    msg.setDestination(37679U);
    msg.setDestinationEntity(116U);
    msg.sessid = 3631493105U;
    msg.messages.assign("QTNRMASFTVNMIGPCSYAHMLKLJNOOEDOUAGZYUTBKZCFIEATAYHQIAJLLYXKJPOWRLIPQMZDBXDPGGTPMEDZXRDSSJGZXZNEDVRYMLJUBIASIUVKIFESNEWHCUREFWUNLZKAMBTWKWPUQTVZHYWDINOGHMQBFYWYIOFPX");

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
    msg.setTimeStamp(0.20277446029423285);
    msg.setSource(13952U);
    msg.setSourceEntity(193U);
    msg.setDestination(9321U);
    msg.setDestinationEntity(124U);
    msg.sessid = 1824747890U;
    msg.messages.assign("TYRXXKFAROTCOWBLSDTDOAZSKZSJXCNEIQHVZMCPJQBVQMFIBESDLKMHBNSIOTQRDYXZUAFVKITYUDGGTUEINRBUAMAPNLJHIVR");

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
    msg.setTimeStamp(0.0635974186060585);
    msg.setSource(53730U);
    msg.setSourceEntity(234U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(148U);
    msg.sessid = 2718679711U;

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
    msg.setTimeStamp(0.0691908836796733);
    msg.setSource(32449U);
    msg.setSourceEntity(23U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(230U);
    msg.sessid = 393600646U;

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
    msg.setTimeStamp(0.41597690376346896);
    msg.setSource(1125U);
    msg.setSourceEntity(211U);
    msg.setDestination(41177U);
    msg.setDestinationEntity(233U);
    msg.sessid = 3924170520U;

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
    msg.setTimeStamp(0.7509196923372204);
    msg.setSource(30321U);
    msg.setSourceEntity(13U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(197U);
    msg.sessid = 776899652U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.1937851137235037);
    msg.setSource(61659U);
    msg.setSourceEntity(123U);
    msg.setDestination(25875U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2448575114U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.15996022179059377);
    msg.setSource(9547U);
    msg.setSourceEntity(215U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(30U);
    msg.sessid = 3924127079U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.271982548658551);
    msg.setSource(15511U);
    msg.setSourceEntity(76U);
    msg.setDestination(62054U);
    msg.setDestinationEntity(12U);
    msg.name.assign("KAEVBSVPQHPZPIO");

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
    msg.setTimeStamp(0.484812001985949);
    msg.setSource(59389U);
    msg.setSourceEntity(17U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(117U);
    msg.name.assign("VMVYQLWAOWZUGEVKSKRKKLDESFMAEWTRCFJYNRUXKPVIXODXSPDMTHUIEXIOBSGZTTBHVWPQILLZDLQYZEUIUFDFJDNFVUPVIRNHGTBBRWQKNUOBYVHLXXOCRDDPYKZALSENQALJSMMSGGRPIJYQRKGZCXHGHECPEKDNJHSMJWPYDYJEJIIEAFMCNRWHCBGCAOSGUHQPWTOQNNXYOBCPXFHCVMBZBNAWUAOQAKZB");

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
    msg.setTimeStamp(0.4616228123102524);
    msg.setSource(20823U);
    msg.setSourceEntity(177U);
    msg.setDestination(40507U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FHOPNIGHWQRAAQIZJXPDEXUGQJCRKSJYBZFGWOQOEEPVTWLDYWEHZEYHTTWRLXQUZMWFUOIVNFKQZVSFUMGVJTZCRHUYMYDFVXKZTPLXUQCOBPSLYBRXKNMFKHIGLTCJPXRNDOBIDKBAEFKLRVNDMIKHBTPBRONWRPSLEMETWSQFJSTAYPWMVUXLABAADLSYIZDKKDVMNN");

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
    msg.setTimeStamp(0.521458674032652);
    msg.setSource(15534U);
    msg.setSourceEntity(91U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(100U);
    msg.name.assign("UTZPPMHHIDGOPBFRXQNAHBTFUDCDLUJIBVKPXWPLJRXDYFTRAQZRSKVRZJCCBEZRONCBOKZHUQTGZXVHEYZHTBYCPXHMWTEMGKUSNBICVSEAJRIVPXKLFOWEWNYDXYFSMRVKSANFMPIDKJOLMSLNFKYFUWUWNDOUQSMSHIGUGWA");

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
    msg.setTimeStamp(0.7575717180485438);
    msg.setSource(26944U);
    msg.setSourceEntity(70U);
    msg.setDestination(321U);
    msg.setDestinationEntity(186U);
    msg.name.assign("XXWHPPJRMJAMOFFLXPPVQYMSGBBDNLZCJ");

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
    msg.setTimeStamp(0.3961788046141429);
    msg.setSource(3995U);
    msg.setSourceEntity(206U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(125U);
    msg.name.assign("CHCIQTNNSSDUWYYLFCNJSQBFEZRBRMKSQYDHXNLTXBTIVNCZFJPVOXWQRPRLOSRGHDSALKBKRAGXWVYNTHSKHOVJBUEWMAQTMUSVGLZGKLMETXHUYYCPJCPIMUJGZXFAAVFOGOONWHPUWJAZXNDESAYXWQMDGRZKYMMCUZHPXLDBECDJLEBIEYKKIQHZZYWFIO");

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
    msg.setTimeStamp(0.5973524816830746);
    msg.setSource(37880U);
    msg.setSourceEntity(22U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(77U);
    msg.type = 203U;
    msg.error.assign("FAANLTMBUSCVNPLKNQRBGWADIRELDQLAPEEMCWXUTGCJWVYOZPOKVMUTTGMGUWLORPDWWELBKMFKOHRETCASLJCQXIKHUSKTUCKQAAIJVFCPIDTLIGBZPDMZHQBIWNKPBFZPYZQCTDOQGHTYME");

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
    msg.setTimeStamp(0.44834293766029365);
    msg.setSource(23948U);
    msg.setSourceEntity(103U);
    msg.setDestination(2558U);
    msg.setDestinationEntity(133U);
    msg.type = 213U;
    msg.error.assign("TDGPNBCPWAANDENEZXDVUAHVHUMBFJPTCUWTCGSREDMSKFGQCNSOPHQHLZRJJXLENJNPMYIRZVXNGZHXZOXXATZSZAPUQDHWEQKTKTGBAQRPWXUASSAOFTAHVPUJYRXIWMBZTERBWICBFIGLKFOUEJLYWOOMMLYWFGWHIGYUYSFHCUHJXRRKINDESPDDFFEVLCCDOSQQIOVNVEIZ");

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
    msg.setTimeStamp(0.34462882077394563);
    msg.setSource(16023U);
    msg.setSourceEntity(78U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(153U);
    msg.type = 91U;
    msg.error.assign("BGIVUNBUKTNBKPEFLENDGPRRHGRIJDCSJOQMXUUVJJYBWRCKAHAPVIOERDKZRXDJQEVSUWTZRYXXPBWOHK");

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
    msg.setTimeStamp(0.19876486889051304);
    msg.setSource(10538U);
    msg.setSourceEntity(93U);
    msg.setDestination(27993U);
    msg.setDestinationEntity(46U);
    msg.seq = 24891U;
    msg.sys_dst.assign("HKZKGNOUMNJXQVHDBKBTJENWXJPT");
    msg.flags = 142U;
    const char tmp_msg_0[] = {-42, 32, 100, -104, 29, -70, 96, 84, -119, 90, -115, 121, 62, 37, 28, 61, 56, 120, -41, -27, -118, 122, 124, -30, 22, 18, -70, -76, -87, -103, -115, -86, -89, -68, -112, 1, 123, 47, 15, -115, -110, 75, -69, 99, -91, -67, -1, 91, 80, 82, 91, -73, -85, 70, -116, -88, 56, -105, -46, -34, -38, 80, 113, -83, 17, -106, 67, -31, -95, -96, 125, 113, -116, -34, -14, 72, 23, 38, 94, -41, -96, -36, 113, 3, 36, 54, -37, -44, 70, -19, 9, -77, 75, 3, -83, 102, -22, -119, 90, 80, 10, -127, -102, 21, -31, 126, 58, -98, -69, -99, 93, 112, 69, -14, -23, 96, -95, -10, 96, 102, 65, -85, 59, -86, 31, -68, -85, -15, -74, 31, 12, 79, 116, -109, -73, -79, -83, 45, -81, -106, -117, 63, 51, -41, 0, 87, -82, -86, -94, 22, -83, 45, 49, -55, -122, 16, 82, -9, 96, -104, 105, 120, -92, 56, -22, 68, 33, 27, 96, -81, 86, 57, 6, 29, 26, 53, 99, -109, -110, 18, -29, -22, 6, -118, 108, 76, -38, -111, 26, -115, 64, 53, 90, -128, 68, -35, 123, 75, -88, -62, 42, 95, 16, -24, 0, 106, -66, 18, 74, -87, -73, -52, -35, -120, 47, -121, -78, -81, 8, -5, 105, -1, 82, -123, -60, 69, 31, 44, 4, 41, 26, -109, -6, 91, 75, -88, -94, -117, 95, 39, 76, 61, -68};
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
    msg.setTimeStamp(0.20544855919657845);
    msg.setSource(44132U);
    msg.setSourceEntity(156U);
    msg.setDestination(38796U);
    msg.setDestinationEntity(121U);
    msg.seq = 39294U;
    msg.sys_dst.assign("YTTMTALGSMQQBBNEYVTFKZLPPUVEFLBXCDOBUZXYTCYVYMHABMERVTRSZC");
    msg.flags = 31U;
    const char tmp_msg_0[] = {84, -9, -6, 115, 11, -60, -44, 39, 26, 18, 10, -23, 65, -69, 43, -10, 32, 84, 80, -126, -17, 13, 75, -21, -105, 46, -49, -73, -3, 60, -79, -59, -81, -77, 32, -79, 120, -124, 93, -13, 87, -29, -65, -82, -36, -10, 70, -57, -3, -48, 89, -121, -58, 70, -42, 40, 4, 36, 31, 61, -93, 25, 40, 69, -91, -31, -104, 15, -61, 71, -17, -55, -50, -31, -22, 1, -45, -25, -121, 60, -95, -78, 31, -77, 15, 47};
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
    msg.setTimeStamp(0.3907697387818273);
    msg.setSource(28110U);
    msg.setSourceEntity(62U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(60U);
    msg.seq = 43448U;
    msg.sys_dst.assign("QAAOPWYOHVJGIRTADCJKNLUXKFITENOJZPJPRNCMBUTETXXKCQJQSAZZYRGFLNDCAGSAWZPXUKSEUKWZINHMELIWFPTFLNAWHROPBSVEEGSRTFVEMZQXYEYOLRVWMKRKIQAYOJHXNIDFQCTRHENZKGKMJWGJHSYUMYRVBINQMHBTDPPISZPWUZXPCLBCLEAGZQDCCVDBUUOOQKHLSLQGFXUNDJRBFHUDBAV");
    msg.flags = 239U;
    const char tmp_msg_0[] = {-111, -100, -26, -29, -59, 61, -65, -102, 28, -6, -113, 107, -47, -118, -14, 75, 74, -121, 99, -81, 74, -14, 25, 85, -21, -60, -104, -89, 23, -7, -99, 103, 103, 124, -96, 40, -114, -38, -33, -96, 24, 124, 12, -103, 70, -26, -104, 92, 68, 122, -65, 97, -84, -99, 107, -55, -84, -71, -111, -115, -49, 40, -105, -45, 29, 115, 43, -98, -106, -82, 86, -92, 117, -84, -9, 93, 15, 56, 60, -85, -23, -13, -92, 94, -94, -2, 88, -77, -125, -79, -1, 102, 108, -127, 25, 96, 84, -98, 92, 7, -45, 125, -80, 88, 102, 53, -28, -80, 52, -3, -77, -48, 121, -9, 106, -110, 47, 124, -16, 114, -47, -123, 105, 9, -54, 22, -44, 5, -76, -61, 46, 9, -52, 106, -82, 105, 84, 85, -25, 6, 24, -2, 103, -65, 52, -108, -105, -4, -112, -43, 108, 35, -24, 56, 65, -85, -127, -128, 15, 108, -106, -107, 37, -18, 3, 73, -39, -87, -22, 8, -73, -128, 39, -118, -54, 60, 73, -72, -43, -79, -17, 114, -101, 2, 51, 23, 48, 2, -109, 65, 75, 43, -93, 118, 109, 2, -80, -110, -102, 82, 123, 37, -18, -80, -100, -76, 19, 84, 94, -90};
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
    msg.setTimeStamp(0.7522257999408852);
    msg.setSource(25074U);
    msg.setSourceEntity(42U);
    msg.setDestination(42698U);
    msg.setDestinationEntity(29U);
    msg.sys_src.assign("ECSTXVYRBWCCYYUXRDNMECLVXYBSOXNPTZYFROZZYHTWCMAMFIKJDWLOXFFAHDQISRFETKTRYIOCSCBKUJXMUXWKBCXEAKVWQYNOMUBFNDVJVDTQRSGKIMIWGUZPOXCSINHQWGKVHERTKEGFRTUTFDHGVPGEIANLIQEZJPBNQPPOWBODZVANSMGBBJQAEUSHHOJPL");
    msg.sys_dst.assign("YMYWOPSSVIMFCELFTSQXWFEXKISHMZKJ");
    msg.flags = 232U;
    const char tmp_msg_0[] = {-79, -85, 64, 9, 51, -127, -120, -103, 63, -71, 62, -40, -113, 98, 10, -126, 117, 66, -57, 15, 6, -18};
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
    msg.setTimeStamp(0.44030777081118444);
    msg.setSource(39765U);
    msg.setSourceEntity(135U);
    msg.setDestination(60858U);
    msg.setDestinationEntity(134U);
    msg.sys_src.assign("TMXFAZEEIYUGZYGKMPATHCIOYWLXGVNJYTSBBNWEZEOQYHCHGUFCSVFDKZFDWQHABNPIFNHYSGNAXULBAIZZXZCHMXISMRHUJBSMXIGSJVRWLTLJRQNKKJFVFWYAPKWQJPSCCDYTVIYQ");
    msg.sys_dst.assign("VYUTRAKTWKAOFGXZDIZKAMWRKDNLVOJYBUYDCRWMRNIUKCHEOSZTXOWSGJSYOFWQBQXFCJWMDMDJZPPQDCOLGUXNGVGFHRWLEPIQIPAOFQRVLPETAONJXGMPKTSBHRHQNKDGMXNYBQEPCGZEQIRJACVJBMJBOPIUHRBCELQSVUVGCEYLEMUEXKIPWWXYFFHALNLSHT");
    msg.flags = 23U;
    const char tmp_msg_0[] = {16, -60, 97, 81, -56, 48, 49, 90, 42, 24, -49, 30, 15, -25, -65, 53, 28, 126, 83, 32, 1, -15, -43, -109, 16, 110, 82, -113, 3, 105, -37, -67, 1, 45, 80, -122, -88, 44, 21};
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
    msg.setTimeStamp(0.5202619401619962);
    msg.setSource(36032U);
    msg.setSourceEntity(129U);
    msg.setDestination(50598U);
    msg.setDestinationEntity(244U);
    msg.sys_src.assign("LBNEEUPTDKPJLDXWZXWGCOYHUHLXIOIJXTKYOODWPIYZCODTYQEDEDGIVRDMYKJFYFZGYFNMCQTOKNNZMBATBMVYEIRPSACCDUBUIQTHQTVLHFSXPOVGNBIPMCUCWUKIHMORMFPLVXMVWTUZGKQWJARPQFMQLRTWADNL");
    msg.sys_dst.assign("VDRKTQJMXHNKQOQRZSCJDGAZNRRURUZAODSPYWZQWDWJGOXFOPUIKYFGPOYQEZIENUSWDEXTMTSREPBZZNHFUKZEFQSYGSWYMBDMJXLAEMCMJXWNLFVREHLFKZCTDVKTIJWATILOPIMBRFWCNDCBTVRBARNODEAWUSYWBIBGYIQGXKEFCHVNMXVXJUNUPBGTZCBGSPLHAXJJHFSVFYDPPLMIOKYOQPALKC");
    msg.flags = 114U;
    const char tmp_msg_0[] = {-38, -103, -21, 47, 72, -32, 113, 90, -62, 80, 98, 88, -100, -59, 38, 124, -5, -124, -86, 39, -109, -10, 67, -58, 29, 79, 59, 93, -76, 124, -100, -70, 41, -88, -100, 116, -74, 78, 78, 17, -117, -47, 78, -111, -94, -91, -70, -102, 56, 71, 29, 104, 33, 119, 93, -2, 20, 121, 41, 17, 97, -119, 89, 28, 120, 40, -13, 44, -40, 80, -83, 93, -90, 73, 123, 6, -113, -87, -116, -24, -57, -16, 90, -64, -92, -14, -54, -65, -72, -51, 123, 125, 22, 63, 96, -14, 78, -122, 44, -47, 103, 106, -64, -38, -108, 9, -21, 10, -33, 89, 3, 15, 104, 72, -46, -51, 111, -42, 75, -44, 66, 109};
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
    msg.setTimeStamp(0.7860504286689265);
    msg.setSource(6303U);
    msg.setSourceEntity(165U);
    msg.setDestination(37032U);
    msg.setDestinationEntity(45U);
    msg.seq = 33641U;
    msg.value = 165U;
    msg.error.assign("QWHFSKUTCXAJXKFSGRFIUNSBVNFYZVYNOVIAUMSGNNEPWWLJPWDJEAAIEBFGFCXYMBLBPDYNTTPUUYRIMETDKTVVOWDZSQOOTMHHWFXVUNOHRTXYBXRMEAYRJBIPZXSAGHCLJZEJSZAGUWMSBTVECGONBRHPLMLYOIGCNEKRCPRDQMQSYHQWXJZLWLKABJVTKIQOKWKJKO");

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
    msg.setTimeStamp(0.5662458343050597);
    msg.setSource(45362U);
    msg.setSourceEntity(20U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(89U);
    msg.seq = 34713U;
    msg.value = 151U;
    msg.error.assign("LZALJZSVGISJHPDOJYXRTPBLWUAXYMRRAGWFBZEPEJDUURDWYGVBWIVCNSRQAMFKJDBFS");

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
    msg.setTimeStamp(0.31452425188643285);
    msg.setSource(49881U);
    msg.setSourceEntity(183U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(209U);
    msg.seq = 46588U;
    msg.value = 180U;
    msg.error.assign("KORQLIFRMQABTZOJESLUZHGPXKGHHFEGFRVYJMWRCMKSZAZNRNJYXBX");

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
    msg.setTimeStamp(0.8405295452158674);
    msg.setSource(975U);
    msg.setSourceEntity(10U);
    msg.setDestination(31788U);
    msg.setDestinationEntity(128U);
    msg.seq = 34269U;
    msg.sys.assign("EWUHDWCQFMXVGBHOOJRRJQNBMRZJLPQLMOXADNPGIZDHDUUUSMFIWGLKMRASLMAPYNMUSJCXTLPBBWVOYEBYZNCFCHZCHKMKDGABWXSHAYDDVXANCZHNSRTJLEVVQLGUFXYSHEFPEIKEVOEBTQXPFZRVIZBOQQCSFOBXGGFYWYJMJRSNLUKYTLWFXPJIAPNCTHTRDYCWWADIDKIGEIJEKUVKNMSUGKOVKTHZOLOZAAPT");
    msg.value = 0.9652860527526494;

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
    msg.setTimeStamp(0.4999624303164608);
    msg.setSource(39593U);
    msg.setSourceEntity(201U);
    msg.setDestination(23000U);
    msg.setDestinationEntity(14U);
    msg.seq = 65229U;
    msg.sys.assign("LICODGNVQOHHYWURFSERMASQFGICGBCFUZUCWSKRXAJYEEPSGDHXMAALPEDLEXSHWQDQSRTNWTRQUVBHYHQNXGJFTLJOFBBQYYMTCUFVZGKATQXNZHICDPZMPNXOYXOCVXUBHUOBKKLDKOWKIWKARYAVEDRZPFLVIYCPOLMPZQGIREAZXDC");
    msg.value = 0.05926627850069355;

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
    msg.setTimeStamp(0.10463769736306361);
    msg.setSource(55866U);
    msg.setSourceEntity(207U);
    msg.setDestination(49157U);
    msg.setDestinationEntity(146U);
    msg.seq = 27324U;
    msg.sys.assign("WYLYZZIKLHPOMCASLRDOTQWWZDWYJEQVMTKMLIDLSQCCPHYXKIKUXXWEFLNOQBUURFBEOSNZBLSJEXCUIGTVNNMISURVQLXNNMMTPXTQPHABBPKDDPQYGGGHJUFQ");
    msg.value = 0.270538466563531;

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
    msg.setTimeStamp(0.2694251857592952);
    msg.setSource(4478U);
    msg.setSourceEntity(83U);
    msg.setDestination(57209U);
    msg.setDestinationEntity(32U);
    msg.action = 45U;
    msg.longain = 0.5589355603607605;
    msg.latgain = 0.2697727674881494;
    msg.bondthick = 3350933142U;
    msg.leadgain = 0.9759537949809901;
    msg.deconflgain = 0.9764127635660136;

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
    msg.setTimeStamp(0.18265467799380553);
    msg.setSource(10241U);
    msg.setSourceEntity(110U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(50U);
    msg.action = 127U;
    msg.longain = 0.925762316836303;
    msg.latgain = 0.9933668437036076;
    msg.bondthick = 3022739608U;
    msg.leadgain = 0.08306827652353332;
    msg.deconflgain = 0.05791632504479771;

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
    msg.setTimeStamp(0.3137660973129348);
    msg.setSource(10141U);
    msg.setSourceEntity(151U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(220U);
    msg.action = 45U;
    msg.longain = 0.8168850869086576;
    msg.latgain = 0.20793848883936905;
    msg.bondthick = 2421385826U;
    msg.leadgain = 0.6481521852252118;
    msg.deconflgain = 0.15038953666253108;

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
    msg.setTimeStamp(0.2843335051565897);
    msg.setSource(21514U);
    msg.setSourceEntity(113U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(165U);
    msg.err_mean = 0.9069269598220333;
    msg.dist_min_abs = 0.07277281949686665;
    msg.dist_min_mean = 0.5621230522418915;

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
    msg.setTimeStamp(0.1307233056455307);
    msg.setSource(35398U);
    msg.setSourceEntity(222U);
    msg.setDestination(25427U);
    msg.setDestinationEntity(160U);
    msg.err_mean = 0.23261279195788742;
    msg.dist_min_abs = 0.6827854614332185;
    msg.dist_min_mean = 0.2904369293218104;

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
    msg.setTimeStamp(0.41391902744272335);
    msg.setSource(30654U);
    msg.setSourceEntity(176U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(173U);
    msg.err_mean = 0.7834652586927411;
    msg.dist_min_abs = 0.812044676796337;
    msg.dist_min_mean = 0.22307511944149017;

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
    msg.setTimeStamp(0.021166707250486527);
    msg.setSource(46764U);
    msg.setSourceEntity(208U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(75U);
    msg.action = 6U;
    msg.lon_gain = 0.48083723599580275;
    msg.lat_gain = 0.8403700290750894;
    msg.bond_thick = 0.18759587445835624;
    msg.lead_gain = 0.7132786865687145;
    msg.deconfl_gain = 0.3549719456296575;
    msg.accel_switch_gain = 0.9546713759870747;
    msg.safe_dist = 0.5096188417605519;
    msg.deconflict_offset = 0.14963891608856716;
    msg.accel_safe_margin = 0.1548940422367323;
    msg.accel_lim_x = 0.5585573761892213;

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
    msg.setTimeStamp(0.35597830289966426);
    msg.setSource(42342U);
    msg.setSourceEntity(36U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(32U);
    msg.action = 186U;
    msg.lon_gain = 0.03702186123868845;
    msg.lat_gain = 0.9128675240660252;
    msg.bond_thick = 0.03375288373824947;
    msg.lead_gain = 0.19205315140508328;
    msg.deconfl_gain = 0.5008436178694048;
    msg.accel_switch_gain = 0.4152475038218397;
    msg.safe_dist = 0.9039495464347267;
    msg.deconflict_offset = 0.7578660937410114;
    msg.accel_safe_margin = 0.9484885157474561;
    msg.accel_lim_x = 0.4091399184233311;

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
    msg.setTimeStamp(0.328934914213574);
    msg.setSource(32296U);
    msg.setSourceEntity(102U);
    msg.setDestination(10189U);
    msg.setDestinationEntity(10U);
    msg.action = 13U;
    msg.lon_gain = 0.8341835397660383;
    msg.lat_gain = 0.6914543793016191;
    msg.bond_thick = 0.3055566149692486;
    msg.lead_gain = 0.6983583355669559;
    msg.deconfl_gain = 0.9541168534676121;
    msg.accel_switch_gain = 0.3097013693898669;
    msg.safe_dist = 0.40023463420207783;
    msg.deconflict_offset = 0.5379416226932695;
    msg.accel_safe_margin = 0.9808617787113034;
    msg.accel_lim_x = 0.9647135970527744;

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
    msg.setTimeStamp(0.8255018928963255);
    msg.setSource(17282U);
    msg.setSourceEntity(116U);
    msg.setDestination(15847U);
    msg.setDestinationEntity(134U);
    msg.type = 44U;
    msg.op = 136U;
    msg.err_mean = 0.08831818409715453;
    msg.dist_min_abs = 0.2020568010171343;
    msg.dist_min_mean = 0.8318503377420768;
    msg.roll_rate_mean = 0.48531365554283534;
    msg.time = 0.46140530354274634;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 41U;
    tmp_msg_0.lon_gain = 0.6542609051145991;
    tmp_msg_0.lat_gain = 0.18390845801027778;
    tmp_msg_0.bond_thick = 0.32743938366563996;
    tmp_msg_0.lead_gain = 0.36916796990193357;
    tmp_msg_0.deconfl_gain = 0.27682821780780176;
    tmp_msg_0.accel_switch_gain = 0.37029426652215314;
    tmp_msg_0.safe_dist = 0.9567041341048839;
    tmp_msg_0.deconflict_offset = 0.5810819026105309;
    tmp_msg_0.accel_safe_margin = 0.05279512579468937;
    tmp_msg_0.accel_lim_x = 0.38294736982628186;
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
    msg.setTimeStamp(0.19494066283917444);
    msg.setSource(27998U);
    msg.setSourceEntity(34U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(219U);
    msg.type = 162U;
    msg.op = 16U;
    msg.err_mean = 0.9341856450999113;
    msg.dist_min_abs = 0.573788719940709;
    msg.dist_min_mean = 0.6292432207777647;
    msg.roll_rate_mean = 0.9917580480013395;
    msg.time = 0.974252730598122;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 205U;
    tmp_msg_0.lon_gain = 0.2482077873105326;
    tmp_msg_0.lat_gain = 0.8974101788183254;
    tmp_msg_0.bond_thick = 0.12751445173379605;
    tmp_msg_0.lead_gain = 0.43406856718822895;
    tmp_msg_0.deconfl_gain = 0.6685609661098136;
    tmp_msg_0.accel_switch_gain = 0.027756650814693917;
    tmp_msg_0.safe_dist = 0.6095943350551088;
    tmp_msg_0.deconflict_offset = 0.43571623513531543;
    tmp_msg_0.accel_safe_margin = 0.7581855817809904;
    tmp_msg_0.accel_lim_x = 0.6774091243690902;
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
    msg.setTimeStamp(0.5442247382308266);
    msg.setSource(16738U);
    msg.setSourceEntity(7U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(201U);
    msg.type = 59U;
    msg.op = 195U;
    msg.err_mean = 0.049188446761632254;
    msg.dist_min_abs = 0.4747453231519526;
    msg.dist_min_mean = 0.6104456542372566;
    msg.roll_rate_mean = 0.5148670472252087;
    msg.time = 0.900300369730464;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 168U;
    tmp_msg_0.lon_gain = 0.14936839344034392;
    tmp_msg_0.lat_gain = 0.8484310715864007;
    tmp_msg_0.bond_thick = 0.5878792985713212;
    tmp_msg_0.lead_gain = 0.407761273573813;
    tmp_msg_0.deconfl_gain = 0.9841303058389755;
    tmp_msg_0.accel_switch_gain = 0.9658913858758903;
    tmp_msg_0.safe_dist = 0.8093733027382037;
    tmp_msg_0.deconflict_offset = 0.8114430725679004;
    tmp_msg_0.accel_safe_margin = 0.6621317426868935;
    tmp_msg_0.accel_lim_x = 0.6858599092207786;
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
    msg.setTimeStamp(0.5022075238636254);
    msg.setSource(45377U);
    msg.setSourceEntity(153U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(25U);
    msg.uid = 56U;
    msg.frag_number = 178U;
    msg.num_frags = 248U;
    const char tmp_msg_0[] = {-9, -47, 41, 107, 25, 126, -54, -31, 42, 50, 56, -33, 1, -62, -78, -30, -93, -13, -48, -66, 48, -72, 99, -106, -84, -56, -85, 119, -1, -62, -88, -57, -24, 44, 51, -79, 54, -26, -106, -15, -78, 102, 39, -4, 49, -122, 96, 47, 29, 45, -89, -29, 122, -41, 108, -128, -66, -76, -15, -77, -59, -71, 71, 4, -56, -91, 68, -15, 46, 51, -20, 93, 68, 44, 11, -81, 82, 2, -115, 103, -123, -29, -69, -13, -81, -96, -55, -41, 76, -31, 37, -72, -21, -17, -23, 92, -31, 16, -4, 83, 76, 67, 0, 91, 52, 34, -38, -72, 124, -102, -16, 50, -63, -43, -58, -23, 69, -123, -58, 119, 101, -25, -14, -54, -22, 101, 31, 13, -8, -66, 2, 55, 40, 17, -87, 49, 34, -38, -77, -64, -59, -109, -63, -106, -99, 13, 36, 75, 32, 72, -57, 21, 96, -128, -44, -24, -18, -69, -48, -7, -116, 0, -87, -76, 118, -109, 86, 33, 116, -127, 84, -4, 19, -21, -118, 98, 25, 21, 51, 64, -60, 97, -64, -27, 120, 78, 0, 109, -59, -105, 56, 98, -62, -127, 82, 74, -81, -85, 0, 40, -32, -115, 125, 74, -30, 102, 78, -119, 122, -77, -64, 115, 26, 115, 102, 102, -113, 59, 49, 102, -64, -122, -119, 75, -118, 126, -84, -23, 27, 7, 15, 123, -26, -22, -106, -32, -89, 97, -6, 1};
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
    msg.setTimeStamp(0.4523549414722534);
    msg.setSource(50260U);
    msg.setSourceEntity(68U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(178U);
    msg.uid = 193U;
    msg.frag_number = 55U;
    msg.num_frags = 29U;
    const char tmp_msg_0[] = {-36, -96, 124, -4, -9, 7, -126, 102, 50, 57, 65, 37, -109, -28, 117, 108, -82, -93, 5, -44, 58, 72, 106, 69, -6, -64, -2, -71, -25, 65, 107, 102, 118, 101, 56, -6, 51, 75, -76, 76, 63, 123, -127, -110, -54, -125, -7, -69, -35, -66, -57, 63, -29, 75, -55, 28, -68, 0, 126, -23, 11, -39, 9, -89, -24, 6, 114, -34, 39, 54, 41, -5, -17, -101, 38, -104, 125, -122, 5, 7, -68, 93, -82, -91, 125, 0, 48, 43, -100, -80, 8, 21, -73, -32, -120, 14, -62, 68, -44, -88, 50, 121, 118, 88, -23, 54, 103, -107, 67, 46, 126, -71, 60, 101, -107, -25, -51, 69, -30, -49, -97, 24, -98, -18, -45, -91, -41, 59, 18};
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
    msg.setTimeStamp(0.5700760441973562);
    msg.setSource(20035U);
    msg.setSourceEntity(115U);
    msg.setDestination(28415U);
    msg.setDestinationEntity(184U);
    msg.uid = 161U;
    msg.frag_number = 207U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {71, -93, -48, 90, -110, 5, 60, 31, 76, -4, -32, -90, 40, 74, -84, -60, -16, -39, -126, -50, 118, -5, -99, 12, 112, 58, 116, 42, -120, -44, 22, -61, 1, -32, 78, -99, 40, -47, 78, -20, -112, -118, -36, 25, 60, 95, 64, 43, 103, -28, -17, 114};
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
    msg.setTimeStamp(0.1373779140064566);
    msg.setSource(28478U);
    msg.setSourceEntity(198U);
    msg.setDestination(54032U);
    msg.setDestinationEntity(43U);
    msg.content_type.assign("RVKUNSKHPXBEWRWGUKNXMLFHDEMTFVTXEMWAXXLGENAJYHKPOBEGLZOMDJAJTPNACOTAVQSKZWCJYJQERYEESJQQGOMDSVPKLRHQFGUPRCVXMWLZDQSNBVBYCEDSNWORUNVUTIWHVVDKSYHKAYCBCUGAYIXNLQRIHATVCBQZMJRPZGYLFYIPDOHIWCIRUDTZOBZTXKETGYAXHNITJLJZXBMJ");
    const char tmp_msg_0[] = {-23, 72, 30, -29, -29, -27, 124, 18, -80, 40, -124, -58, 91, 104, 77, -108, -86, -21, -20, 89, 48, -97, 1, -28, 14, -61, -45, 22, -41, -109, 44, -96, -58, -82, -33, -111, -86, 61, 56, 56, -42, 60, 26, -60, -90, -87, 38, 87, 15, -55, -69, -31, 41, -126, 23, -33, 125, 13, 65, 81, 25, 54, 20, -86, 87, -125, -125, -111, 111, -100, 112, 39, 40, -32, -60, -12, 94, 74, -9, -120, 45, -100, 72, -95, -100, -79, 1, -43, 69, -56, -40, -9, -6, -42, -42, -5, 110, -60, 49, 81, -16, 77, 49, 55, 90, 33, -55, -121, 10, 4, 13, 86, -122, 85, -69, 51, -111, 97, -65, -83, 51, 15, -31, -7, 71, -21, -65, 22, 43, 4, -117, -99, 11, 67, -74, 27, 93, -17};
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
    msg.setTimeStamp(0.7507573627717652);
    msg.setSource(12701U);
    msg.setSourceEntity(150U);
    msg.setDestination(65410U);
    msg.setDestinationEntity(74U);
    msg.content_type.assign("YOHSTMCTTVGGPRTCHU");
    const char tmp_msg_0[] = {-23, 24, 63, 123, 37, 12, -46, -98, 96, 63, -40, -122, -84, -40, -102, 103, -66, 120, -122, -71, 112, -32, 88, 78, 118, -36, 55, -121, 74, 43, -11, 101, -4, -46, 78, -49, 88, 71, -91, -18, 102, -24, -23, 123, -71, -18, -112, -63, 33, 101, -49, -33, -125, 38, 28, -121, -51, 43, -61, 94, 35, 90, -1, -21, -9, 93, -94, -76, 98, 34, -100, 115, 67, 53, 81, -19, 118, 7, 55, 36, 1, -38, 72, -31, -80, 6, 72, 88, -42, 48, 84, 77, -88, 98, 36, -57, 38, 78, 84, -27, 46, 45, -45, 67, 64, -70, 40, 73, -112, 41, -127, 80, 9, 36, -46, -74, -85, -53, 84, -44, -29, -13, -13, -30, 63, 97, -21, 74, -124, -101, 40, 61, 20, -67, -120, 100, -113, -9, -97, -53, -102, -66, 108, 84, -53, 118, -117, 117, -47, -46, 22, -27, 96, 69, 102, -42, -38, 10, -98, -38, 104, 37, 37, -36, -67, 41, -77, 120, 99, 12, -50, -64, 10, 104, -117, -39, -118, 53, -116, -99, 121, 83, -43, 38, 70, -16, 41, 113, -87, -99, 78, -45, -9, 82, -42, 77, -81, -28, 79, -11, -111, -73, -117, -84};
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
    msg.setTimeStamp(0.19097901023630703);
    msg.setSource(9600U);
    msg.setSourceEntity(208U);
    msg.setDestination(18967U);
    msg.setDestinationEntity(26U);
    msg.content_type.assign("SFHVMZSHCWEIFSTRAQPLBGLRYOCMJAQFBYHVFTXQSWXZZUPLVAWZPXBWXEUJQIIEMMHAUKTAEULHYCECKLHPTPFDBOEWPKQMVNKLIYUWEMYIINDTRVTKQQTPKBXDTZNDDFBYMBITKGZHHDDIWFOXGCRQGRWPGGANOBENDMRXGXVJMHOJNCKUCASVZDYBYNUCAJHXUISOZPLFFNUJYNESAONSCLKQOIOPJYZWQUJVSRGEDKBXLGVLSRR");
    const char tmp_msg_0[] = {8, -49, -56, 1, -2, 110, 12, 115, 55, 118, -2, -52, -85, -19, -74, -38, -75, -124, 84, 64, -23, 89, 111, -26, -60, 73, 111, -9, -2, 45, 41, -30, -58, 45, 77, 56, 27, 61, -120, -113, -27, -67, 122, 99, -8, 111, -25, 63, -106, 16, 102, 126, -74, 6, 5, -33, -74, 58, -53, -21, -36, -73, -62, 76, -114, 14, 57, -62, 79, -2, 87, 9, 7, -117, -5, -37, -67, 77, 13, -67, 72, 94, -82, 111, 59, -60, -67, -121, -83, 71, 69, 59, -122, -44, -32, 70, -8, -37, 119, -104, 79, 24, 43, 69, 98, -124, -88, -62, -41, 51, -124, 66, -118, 93, 26, -91, -43, -13, -102, 38, 66, -3, -57, -57, 84, 70, -102, -38, -82, -38, -1, 50, -13, 94, 73, 91, -43, 61, -75, -49, 50, -67, 65, -14, -30, 70, -119, -62, -31, -125, -56, -12, 111, -6, -104, -98, -53, 46, -85, -108, -72, 32, -104, -63, -96, 54, 107, 82, -44, -79, -66, 91, 20, -33, -124, -42, -117, -34, -38, -102, 44, 66, 54, 100, 124, -78, -23, 122, -35, 31, 37, -104, -25};
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
    msg.setTimeStamp(0.093723559494578);
    msg.setSource(25964U);
    msg.setSourceEntity(233U);
    msg.setDestination(36526U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.34044704472125464);
    msg.setSource(21111U);
    msg.setSourceEntity(141U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.9027600379569354);
    msg.setSource(62458U);
    msg.setSourceEntity(135U);
    msg.setDestination(46624U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.8211108317201031);
    msg.setSource(34871U);
    msg.setSourceEntity(30U);
    msg.setDestination(36819U);
    msg.setDestinationEntity(146U);
    msg.target = 49256U;
    msg.bearing = 0.5557671836904811;
    msg.elevation = 0.9022062444080443;

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
    msg.setTimeStamp(0.1250797260891311);
    msg.setSource(11166U);
    msg.setSourceEntity(179U);
    msg.setDestination(15950U);
    msg.setDestinationEntity(70U);
    msg.target = 39694U;
    msg.bearing = 0.3229052400958846;
    msg.elevation = 0.7319531889967938;

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
    msg.setTimeStamp(0.5954239618630335);
    msg.setSource(25110U);
    msg.setSourceEntity(149U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(25U);
    msg.target = 36523U;
    msg.bearing = 0.5607733619639255;
    msg.elevation = 0.8314846913456293;

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
    msg.setTimeStamp(0.13106051577975764);
    msg.setSource(28108U);
    msg.setSourceEntity(104U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(0U);
    msg.target = 17019U;
    msg.x = 0.5518872179991376;
    msg.y = 0.6053431638651988;
    msg.z = 0.5207870488485036;

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
    msg.setTimeStamp(0.45870366831531584);
    msg.setSource(14367U);
    msg.setSourceEntity(254U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(80U);
    msg.target = 23559U;
    msg.x = 0.1341165845868285;
    msg.y = 0.9544416850183034;
    msg.z = 0.698333518984983;

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
    msg.setTimeStamp(0.4513637423520509);
    msg.setSource(355U);
    msg.setSourceEntity(87U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(212U);
    msg.target = 26703U;
    msg.x = 0.07226076349279276;
    msg.y = 0.14572021315381878;
    msg.z = 0.603681100961712;

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
    msg.setTimeStamp(0.5345583474432217);
    msg.setSource(64577U);
    msg.setSourceEntity(1U);
    msg.setDestination(62407U);
    msg.setDestinationEntity(250U);
    msg.target = 17330U;
    msg.lat = 0.5461398980180038;
    msg.lon = 0.17456466723148112;
    msg.z_units = 164U;
    msg.z = 0.48923965650567347;

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
    msg.setTimeStamp(0.9945090093990527);
    msg.setSource(31053U);
    msg.setSourceEntity(231U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(31U);
    msg.target = 32989U;
    msg.lat = 0.5118630382126594;
    msg.lon = 0.6931862800812719;
    msg.z_units = 110U;
    msg.z = 0.37561796934993996;

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
    msg.setTimeStamp(0.5416138004455848);
    msg.setSource(4407U);
    msg.setSourceEntity(24U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(38U);
    msg.target = 28505U;
    msg.lat = 0.25901326517863477;
    msg.lon = 0.08278610593406699;
    msg.z_units = 90U;
    msg.z = 0.8789733189859226;

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
    msg.setTimeStamp(0.09211179958850035);
    msg.setSource(59258U);
    msg.setSourceEntity(26U);
    msg.setDestination(15680U);
    msg.setDestinationEntity(0U);
    msg.locale.assign("TBCJNKOSIICMQXEPMLKGCLRWLEIZORGTHBCPSJUKDVIZCMTOCSYRNBNYXRJXWCZAWGQLVTTDPAEWYIOBLGSJQNSHUDIRMAMKNFQGAFDDAIAVQIJYKCOCDVVEJXZWIQFLPNHSMZPEZBSWVAKFJRVARLTEKNXGGFEVLXYZVNYZEWTXHMWFGPSFUTQWBKOMHOXKYQDWN");
    const char tmp_msg_0[] = {-93, 43, -28, -105, 35, 60, 65, -39, -108, -45, -16, 13, 30, 84, -126, 103, 14, 92, -119, -127, -52, -86, -121, 46, 60, -45, 25, 58, -4, -88, -101, -22, -39, -78, -41, -34, 76, -8, 29, 54, 18, -18, -128, 121, -99, -43, -71, 3, 19, 115, 29, -96, -39, 96, 42, -4, 37, -107, -60, -10, -114, 67, -95, -35, 58, 49, 113, 16, -78, -49, -83, 74, -30, -120, 109, 112, -30, 17, 125, -44, 10, 101};
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
    msg.setTimeStamp(0.8104724384070531);
    msg.setSource(33473U);
    msg.setSourceEntity(146U);
    msg.setDestination(799U);
    msg.setDestinationEntity(63U);
    msg.locale.assign("ZIHHUPKZAUFLLYDRSCGQASDQGDQLFYHQOFVWYJZIVKSFVXELJBWENTFRSDPWNMLYLZBNJTQMCZFMQDBPOILGTTMIZPKEOOQCXXRVKJSFUUKHVRXKJIAPXSWHSNYXIYWVYVTWNLXJCKMJPOBBWFAFZMJLSUTLBAEBENGGZQHCIYMRSCMFNOPJDCYEEIRNEGTQPTIUWUKCDXRHAYUBXTCKVNPAHJPUIHVGXDRM");
    const char tmp_msg_0[] = {104, -85, 9, 33, 29, -92, 96, -86, -97, 88, -66, -92, -114, -51, -54, 15, 65, -91, 112, 78, -111, -106, 62, 88, -70, -65, -72, -125, -25, 102};
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
    msg.setTimeStamp(0.9752535402014607);
    msg.setSource(32202U);
    msg.setSourceEntity(139U);
    msg.setDestination(45392U);
    msg.setDestinationEntity(221U);
    msg.locale.assign("ZNMNXNXSFARROSYYHJDPPOQTYWDUKCXQJEZOCKNCTWFIWLKJTCGVSGHZJGAYLLPOE");
    const char tmp_msg_0[] = {86, -5, -32, 100, -2, 102, 8, 9, 88, 117, 79, 22, -32, 107, -64, 74, -58, 10, -111, 85, 18, -45, 52, -63, 4, 124, -85, 93, 14, -123, -114, -22, -55, -40, 89, -48, -53, -3, -123, -85, 29, 29, 30, 122, -90, -128, -114, 13, -103, -56, -57, 84, 91, -14, -84, 61, 118, 21, -29, 60, 21, -90, 55, -62, -60, 27, -117, -71, -14, 85, 17, -81, 8, 61, -69, 66, 41, 48, 57, 19, 70, 116, 65, -26, -75, 103, -40, 33, -19, 35, -54, 98, 51, -85, 99, 6, -15, -78, -82, -111, 41, 13, -50, -14, 43, -27, -85, 15, -106, -67, -108, -1, 14, -128, -25, 42, -65, 52, -110, 117, 5, -89, 61, 52, -46, 88, -111, -114, -38, -120, 50, -13, -67, 18, 4, -17, -93, 10, 78, 120, 57, -110, 3, -110, 111, -80, -3, -45, -14, -45, 30, -33, -70, -41, -28, -46, -8, -28, -63, 104, -126, 45, -53, -114, 98, 21, -128, -13, 37, -16, -15, -30, -48, -124, -44, -119, 63, -53, 44, 17, 66, 36, -104, -116, -40, -68, -5, -15, 91, 95, -29, 103, 83, 100, -71, -114, -77, -27, 104, 115};
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
    msg.setTimeStamp(0.920365890643474);
    msg.setSource(34846U);
    msg.setSourceEntity(235U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.450736981587335);
    msg.setSource(25637U);
    msg.setSourceEntity(238U);
    msg.setDestination(19939U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.925859134783182);
    msg.setSource(25796U);
    msg.setSourceEntity(31U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6018510527487473);
    msg.setSource(62068U);
    msg.setSourceEntity(166U);
    msg.setDestination(57998U);
    msg.setDestinationEntity(177U);
    msg.camid = 7U;
    msg.x = 45571U;
    msg.y = 9586U;

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
    msg.setTimeStamp(0.9002787456582578);
    msg.setSource(28417U);
    msg.setSourceEntity(60U);
    msg.setDestination(37073U);
    msg.setDestinationEntity(135U);
    msg.camid = 136U;
    msg.x = 18696U;
    msg.y = 54100U;

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
    msg.setTimeStamp(0.6452295163452314);
    msg.setSource(64518U);
    msg.setSourceEntity(128U);
    msg.setDestination(42269U);
    msg.setDestinationEntity(53U);
    msg.camid = 152U;
    msg.x = 49358U;
    msg.y = 38445U;

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
    msg.setTimeStamp(0.31842115097507007);
    msg.setSource(2765U);
    msg.setSourceEntity(121U);
    msg.setDestination(10055U);
    msg.setDestinationEntity(231U);
    msg.camid = 130U;
    msg.x = 64330U;
    msg.y = 35942U;

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
    msg.setTimeStamp(0.21249061307340333);
    msg.setSource(60209U);
    msg.setSourceEntity(179U);
    msg.setDestination(47013U);
    msg.setDestinationEntity(75U);
    msg.camid = 44U;
    msg.x = 44038U;
    msg.y = 1534U;

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
    msg.setTimeStamp(0.3054131217821112);
    msg.setSource(31904U);
    msg.setSourceEntity(233U);
    msg.setDestination(26177U);
    msg.setDestinationEntity(25U);
    msg.camid = 73U;
    msg.x = 26960U;
    msg.y = 10049U;

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
    msg.setTimeStamp(0.8673759718657248);
    msg.setSource(26583U);
    msg.setSourceEntity(159U);
    msg.setDestination(58550U);
    msg.setDestinationEntity(135U);
    msg.tracking = 96U;
    msg.lat = 0.021340382098360866;
    msg.lon = 0.8022526815274714;
    msg.x = 0.7171432559535824;
    msg.y = 0.29372344807329087;
    msg.z = 0.4666011130571406;

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
    msg.setTimeStamp(0.7697580572097014);
    msg.setSource(585U);
    msg.setSourceEntity(113U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(85U);
    msg.tracking = 168U;
    msg.lat = 0.5354543126073155;
    msg.lon = 0.3608302533907636;
    msg.x = 0.6301747282948768;
    msg.y = 0.8101619812206067;
    msg.z = 0.6848819654705981;

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
    msg.setTimeStamp(0.9876007334432381);
    msg.setSource(54405U);
    msg.setSourceEntity(129U);
    msg.setDestination(31713U);
    msg.setDestinationEntity(213U);
    msg.tracking = 60U;
    msg.lat = 0.5959417216336665;
    msg.lon = 0.1933724461250792;
    msg.x = 0.134251988622478;
    msg.y = 0.6217532101104069;
    msg.z = 0.7857320357978593;

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
    msg.setTimeStamp(0.09980100851864215);
    msg.setSource(20104U);
    msg.setSourceEntity(226U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(253U);
    msg.target.assign("YYDRZZGEMNENHANNDRHLHHGQLKALCOLFRWSQFCUOWIFRPMOMYKOBPUJNOQJQTJZNFPNHJIIWTFGVWSPQPLTBIYAJXDRQZGUO");
    msg.lbearing = 0.6493309076855747;
    msg.lelevation = 0.5067867611983313;
    msg.bearing = 0.9378585718322375;
    msg.elevation = 0.336288441533764;
    msg.phi = 0.8754512079063397;
    msg.theta = 0.8057375474086735;
    msg.psi = 0.839880020597167;
    msg.accuracy = 0.6558750901665261;

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
    msg.setTimeStamp(0.8519078058901178);
    msg.setSource(14239U);
    msg.setSourceEntity(4U);
    msg.setDestination(24959U);
    msg.setDestinationEntity(70U);
    msg.target.assign("OQLNPFPUSMSFXGUWDROXMYJEQZIMOGHTALE");
    msg.lbearing = 0.32729161725097355;
    msg.lelevation = 0.26630797092760705;
    msg.bearing = 0.25361780016009106;
    msg.elevation = 0.9803858383556401;
    msg.phi = 0.43818450146969623;
    msg.theta = 0.4285959143498588;
    msg.psi = 0.07668822561148203;
    msg.accuracy = 0.7099601387774205;

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
    msg.setTimeStamp(0.4861950650428143);
    msg.setSource(22534U);
    msg.setSourceEntity(134U);
    msg.setDestination(317U);
    msg.setDestinationEntity(107U);
    msg.target.assign("BXRNLGOHBSCLXYIINXWOIRSRTFGUNNEEJCPQRJKCHIGYZMQEAKFPLSIVSVVJEMPKXMHDMTQUWCRXBLDYBOYDIBSTWVJJPQATNYFPYATOLGFKWLVUQQWVTXUKH");
    msg.lbearing = 0.714226479708785;
    msg.lelevation = 0.2992325908681055;
    msg.bearing = 0.6569836394523189;
    msg.elevation = 0.4965386443273869;
    msg.phi = 0.9211770736433231;
    msg.theta = 0.24986461638450885;
    msg.psi = 0.7162964702306656;
    msg.accuracy = 0.4993359601207862;

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
    msg.setTimeStamp(0.3674027068161112);
    msg.setSource(33432U);
    msg.setSourceEntity(6U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(197U);
    msg.target.assign("FLZDYHQVMTDGMEOYDXNFQSINMTXKNGTZEMFWOSWPLIWZPHGFEXKUSKWYGTUKSPKJDBZONTSBZUQCLNLDJPUJOORVGWEQWIONYFPSATBNMGHGIFBEYKRFFDVIRQMIEHVVGSVYICRHHDXRLJAKCAWALQORRRBBCCXYFBPE");
    msg.x = 0.09860684240769224;
    msg.y = 0.0948886280640332;
    msg.z = 0.9977314056382087;
    msg.n = 0.7154793432541732;
    msg.e = 0.19896131987467613;
    msg.d = 0.9624856000294644;
    msg.phi = 0.007780868544058905;
    msg.theta = 0.13785715567281487;
    msg.psi = 0.724019481304955;
    msg.accuracy = 0.491626630172318;

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
    msg.setTimeStamp(0.30576763957652286);
    msg.setSource(16143U);
    msg.setSourceEntity(4U);
    msg.setDestination(61099U);
    msg.setDestinationEntity(87U);
    msg.target.assign("NERGFJJUQNBTQVTUEEAKUMZXRRZQDMZRJYKXYYDHEUXHVQFYSCLFXKWEQGNXKLSYNCKFIUJDHIZEPCOFXBUCSOZNTDWSJVWEZJAQIWFPSHTTZBVLPYUIZITVOVWFNMMCAXHGTPKODJQRQPHTRWPVIBLMYGJLEWSBBRIALQCZYLMAWAQROTXJHUZFCLOCDPMAIKFVE");
    msg.x = 0.30813537046246586;
    msg.y = 0.41456817166319293;
    msg.z = 0.407443212604226;
    msg.n = 0.37938824798313997;
    msg.e = 0.36594705488427604;
    msg.d = 0.11235335843452776;
    msg.phi = 0.03444633882667869;
    msg.theta = 0.6654637238998574;
    msg.psi = 0.0706143776100715;
    msg.accuracy = 0.6335772534708614;

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
    msg.setTimeStamp(0.4209938293983567);
    msg.setSource(13546U);
    msg.setSourceEntity(189U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(241U);
    msg.target.assign("HAABIFAAUGRRFLEAKVXTFPBVOQXSWFVMWIVTODRBGNMGXUVBUWXNRHGCDBARYBMHJWTKWZEATMWGLYJIJGFSIFYHPECIMONKDQYWQNIGJAXPSRBTMZMKLPBYYQKXNDULDCQNSTPETUZGWEOCEFPJRUCOHUROVSMUEJZRGEHHQDKLPQXAYHWPDMPX");
    msg.x = 0.8815388646185067;
    msg.y = 0.2761230817115492;
    msg.z = 0.7119121728186794;
    msg.n = 0.4804755341307817;
    msg.e = 0.6997774196540495;
    msg.d = 0.5819598844031665;
    msg.phi = 0.2334251079724442;
    msg.theta = 0.9248749483800577;
    msg.psi = 0.9984903362266925;
    msg.accuracy = 0.11127503302735398;

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
    msg.setTimeStamp(0.5361437532879935);
    msg.setSource(31480U);
    msg.setSourceEntity(63U);
    msg.setDestination(31110U);
    msg.setDestinationEntity(80U);
    msg.target.assign("RVNHFQAAVVDUZVFWENYJDQCFGPFVYWPPIDEHAXZCCOYHUUSBMRDASKUJBDOMTUH");
    msg.lat = 0.3143194947846757;
    msg.lon = 0.260587134236113;
    msg.z_units = 178U;
    msg.z = 0.17922619386502447;
    msg.accuracy = 0.5062865269919434;

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
    msg.setTimeStamp(0.17394273167360386);
    msg.setSource(36815U);
    msg.setSourceEntity(194U);
    msg.setDestination(51429U);
    msg.setDestinationEntity(23U);
    msg.target.assign("UNNKOOATBJLRMSRSSHXCVYPCEMDTFJEFLHFVYNMTHVXOZZABTVJFNUKJAOKCRRQFCZKFEUYIYNFEPKOAQSUETQZZHTQPPDZCWDGQKIUIPMMZFNMIOSPXDXEWXYTWPEWTKDKMALRSGRMMCATBHJYIWHVRICFABVJPYLKGGDDXLUQAYV");
    msg.lat = 0.2550393030994247;
    msg.lon = 0.22396935742158564;
    msg.z_units = 70U;
    msg.z = 0.7813012909846767;
    msg.accuracy = 0.6481031249189654;

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
    msg.setTimeStamp(0.5666581624452937);
    msg.setSource(3187U);
    msg.setSourceEntity(149U);
    msg.setDestination(19137U);
    msg.setDestinationEntity(237U);
    msg.target.assign("RFLRJBJOVMDMQMIYMCJJCJUWQWIRJFEOCROYEJZCTZVVCOZIZYUQNSGPUNTBIOQQUUOXKSOEMTPADEWDOLYQFVZTKKAERPSARIXLNPCMIBFZWNWLFDDCMVNRTCWKJOLGKWRTPKGXFUHXNGDSZTMUAVTBPLKXQTEALFBNUHYGFTDKHSVDRCVYWBKMRHVXYWGMA");
    msg.lat = 0.31306848013556476;
    msg.lon = 0.4859623558241576;
    msg.z_units = 241U;
    msg.z = 0.6984269344375589;
    msg.accuracy = 0.6277981422142801;

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
    msg.setTimeStamp(0.8498224242136947);
    msg.setSource(37777U);
    msg.setSourceEntity(210U);
    msg.setDestination(15215U);
    msg.setDestinationEntity(176U);
    msg.name.assign("BSWUZIXNCZOCYORHIJEXNETQ");
    msg.lat = 0.04789084451376757;
    msg.lon = 0.9488027429617697;
    msg.z = 0.8561335453743992;
    msg.z_units = 15U;

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
    msg.setTimeStamp(0.9135456048657192);
    msg.setSource(46096U);
    msg.setSourceEntity(81U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZWYLFOSMCDJQQPSHLVMERKCFNXRXDTSWWSLJDHTFJXJNKCYECQZTRXLAYPALHYCWBZCAQXUMGUAMDHVGCIGRMOLECWPLOVBHWVBESQKSVNIFRYFUXNVQKSLIEFAPGBMZYKAUTVCWJIKBELBVIMODNYOAQMGPYREUGJFKQBMUBXE");
    msg.lat = 0.8015276468601248;
    msg.lon = 0.08446013311945189;
    msg.z = 0.9113015124909838;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.605327119785235);
    msg.setSource(26586U);
    msg.setSourceEntity(90U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(21U);
    msg.name.assign("PCVKHIQEDHMAPFZCHQNVMIREREANTXVEITMIWCYOURKGSCLRXGIPNA");
    msg.lat = 0.9655832436924459;
    msg.lon = 0.4308326557646799;
    msg.z = 0.707888872134836;
    msg.z_units = 151U;

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
    msg.setTimeStamp(0.2721526906707773);
    msg.setSource(20738U);
    msg.setSourceEntity(102U);
    msg.setDestination(56791U);
    msg.setDestinationEntity(181U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.22552221502721936);
    msg.setSource(36574U);
    msg.setSourceEntity(129U);
    msg.setDestination(49935U);
    msg.setDestinationEntity(182U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.02201464741723924);
    msg.setSource(25112U);
    msg.setSourceEntity(60U);
    msg.setDestination(34784U);
    msg.setDestinationEntity(75U);
    msg.op = 48U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DGLIFRRHWTACKTKNHHROYDQFSULAWHAHNRIZWOQFCTNVXJWCYHNOCKWGHUZXEZWAWPVPSEUBMPEBXIWZSGMYDBTGLIJMYEARQQPFADJTOSRQRCKIJXOTSSFMTVFVYCBICNBB");
    tmp_msg_0.lat = 0.022978012241316792;
    tmp_msg_0.lon = 0.9439924100924325;
    tmp_msg_0.z = 0.708002076123973;
    tmp_msg_0.z_units = 133U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7096328952224636);
    msg.setSource(19114U);
    msg.setSourceEntity(215U);
    msg.setDestination(26756U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9770229866108447;
    msg.type = 10U;

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
    msg.setTimeStamp(0.6018551491828857);
    msg.setSource(60351U);
    msg.setSourceEntity(129U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(49U);
    msg.value = 0.292239014889325;
    msg.type = 200U;

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
    msg.setTimeStamp(0.6934560212714872);
    msg.setSource(28530U);
    msg.setSourceEntity(169U);
    msg.setDestination(16216U);
    msg.setDestinationEntity(96U);
    msg.value = 0.05020554998239002;
    msg.type = 4U;

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
    msg.setTimeStamp(0.9974260996596228);
    msg.setSource(45200U);
    msg.setSourceEntity(50U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(160U);
    msg.value = 0.28242093743804;

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
    msg.setTimeStamp(0.1494459183477279);
    msg.setSource(61250U);
    msg.setSourceEntity(55U);
    msg.setDestination(62272U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5519828964798653;

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
    msg.setTimeStamp(0.32917609894110045);
    msg.setSource(35585U);
    msg.setSourceEntity(6U);
    msg.setDestination(42478U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9834320369837202;

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

  return test.getReturnValue();
}
