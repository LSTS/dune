//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 8e17e6762972a0be4bc1d1016c942223                            *
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
    msg.setTimeStamp(0.323386317552);
    msg.setSource(25673U);
    msg.setSourceEntity(47U);
    msg.setDestination(23039U);
    msg.setDestinationEntity(93U);
    msg.state = 156U;
    msg.flags = 89U;
    msg.description.assign("NXLGHMQHTBXXLRTTRDGYJQEDNLAVMKIHIJNOMNHRKDOGGJUDHXUSPARWQVTRKAFRSZJVSJRLYJDCCETWXMYWCOEUKTAGISYMEEUIDUBXOWOOCXPBPUBKLQFWFFFWROLMPLIIBIBJUTVZT");

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
    msg.setTimeStamp(0.418585951617);
    msg.setSource(50764U);
    msg.setSourceEntity(162U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(64U);
    msg.state = 230U;
    msg.flags = 141U;
    msg.description.assign("FKSBFQQURAMLMWKSJVHMXIEBHCCQOZUVTKOJRJRVBGWBQDPZYEDXFYDGEMMDKXUVNNLDZAUGNGTSZFSDTAYPARXITNHRWLZOINXPUSPYFOHJJVRAJERNYPFSLIJPIGEFMZEKHQVWEWOZLNTRWIDAFFRXKQZBWAQYTROYMIIGPESKEIHMYICXBZTUCOCQGPKEXSGHCTCHLKLMLVWLDJ");

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
    msg.setTimeStamp(0.880238878599);
    msg.setSource(12173U);
    msg.setSourceEntity(133U);
    msg.setDestination(59340U);
    msg.setDestinationEntity(43U);
    msg.state = 18U;
    msg.flags = 102U;
    msg.description.assign("UABHAKMNOTPRJSIKLPVQVRYRGFWFVWAHXJJEGEFZLDMDCOMUZSBFAI");

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
    msg.setTimeStamp(0.970775787022);
    msg.setSource(64430U);
    msg.setSourceEntity(234U);
    msg.setDestination(38237U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.176409654589);
    msg.setSource(7204U);
    msg.setSourceEntity(65U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.756071918819);
    msg.setSource(17317U);
    msg.setSourceEntity(236U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.441192598512);
    msg.setSource(35160U);
    msg.setSourceEntity(252U);
    msg.setDestination(54835U);
    msg.setDestinationEntity(4U);
    msg.id = 52U;
    msg.label.assign("LUNQEVLCCGDJXFZIBOMEYMAFZUQQPYSQJPDCZQOAUCVWGTJUBJKVOWXBUTHBULQWAKJWLDYBSECRPSMMNEDQAUOEXKVHG");
    msg.component.assign("BLZVWHNDRTZSZBPSNZETQYTJJINCPGTVPPMRLSNSAXLCEJPFIWXEHAANYPPOCMWBYZOIKG");
    msg.act_time = 5162U;
    msg.deact_time = 58481U;

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
    msg.setTimeStamp(0.675513744605);
    msg.setSource(54791U);
    msg.setSourceEntity(177U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(12U);
    msg.id = 161U;
    msg.label.assign("TQKYMCHBHAINJKVYNYMWDQGDEHMTMFPBPIHDZQEIFWPINLTABHGEROQGDNIYUJTDSXQQJRFMVNGXCFAJPLJKF");
    msg.component.assign("HRPWPDGZBETNEUCBEBGFXACOXKZPFHPVAVRYBBRLRSQKLHVVQKMXIRHLQFMAVYHSJEXSHSPITGMZXLIGQLJ");
    msg.act_time = 47255U;
    msg.deact_time = 19743U;

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
    msg.setTimeStamp(0.540027634972);
    msg.setSource(6915U);
    msg.setSourceEntity(156U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(83U);
    msg.id = 10U;
    msg.label.assign("UIDDGUGOPDFYZPDJNELYXRPCUOFXGKNJIQYQWPBIGWCXQOEHTDBTPQQLKYKMKTLCVOVFJVCARQSSNVOHAFJGWLXONQBXXMIDEHJHKFCFWYEUTXBCZUHPUGDDGYRPOCXMONRYAVEFNHSSZKJMZRLENZSBTKZ");
    msg.component.assign("XSITNIWNLVZOGHQGLBYYGFDUUB");
    msg.act_time = 27735U;
    msg.deact_time = 7924U;

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
    msg.setTimeStamp(0.263248294725);
    msg.setSource(29396U);
    msg.setSourceEntity(224U);
    msg.setDestination(10035U);
    msg.setDestinationEntity(253U);
    msg.id = 243U;

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
    msg.setTimeStamp(0.877744961206);
    msg.setSource(10994U);
    msg.setSourceEntity(84U);
    msg.setDestination(37140U);
    msg.setDestinationEntity(69U);
    msg.id = 231U;

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
    msg.setTimeStamp(0.701471465537);
    msg.setSource(40992U);
    msg.setSourceEntity(42U);
    msg.setDestination(53407U);
    msg.setDestinationEntity(142U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.361121433026);
    msg.setSource(27635U);
    msg.setSourceEntity(157U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(177U);
    msg.op = 76U;
    msg.list.assign("BSWGGHCFBJBFQQCRXVMBBHSPNVREHAIXLVJRXLPUUUBLZIDPYGKSBZUISSZADTWWWPDTIUXOCDCCCIOJTBAHSOPTEZKIJXXYXHDROPNSVSPENWRSJEWDWZQQAUFYDNSRZLWMYKKKHYBOAQEYGNTAIPOFTKEQEOPUOXGKGHTNLVYJCYENJRPIXZ");

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
    msg.setTimeStamp(0.658879461727);
    msg.setSource(1686U);
    msg.setSourceEntity(78U);
    msg.setDestination(766U);
    msg.setDestinationEntity(156U);
    msg.op = 218U;
    msg.list.assign("MYSLFRDANHZFBJCCUPFZUKTVRJKWFIIWBVGPQSKKUMEMPSYCYAEADDYHHSHWBQWGRAYWLNJVQSURNIWVAPDNLRRDOZIPVUBBOVZJETQIOCIWBQTDYSXDPYIVIQNXTWSTHACW");

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
    msg.setTimeStamp(0.091903583104);
    msg.setSource(30770U);
    msg.setSourceEntity(43U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(135U);
    msg.op = 126U;
    msg.list.assign("CDBWDPVXGLNOMCCKYAUTGERFBHBAZGFIJWZPJISIQEUNSNGUPCVBRZVWDJVAMFUERBCXUKKSPGLSSVHGAQRXCLNNJKEOIYPCRTZSNXVEXFZOWGYBTFKFOCZQFJURISOHMUKCUXOAJVIQXYTFESDYZWHZHYRXVDMDNVUWGTBTWVNWJHPDTFHLATLAJKMAYGWLHXYZMPQTQPRLWAJDBQSYBMTHMLMDDIGOQOOFRNCLHEU");

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
    msg.setTimeStamp(0.556443753084);
    msg.setSource(56798U);
    msg.setSourceEntity(75U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(18U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.355311544773);
    msg.setSource(21090U);
    msg.setSourceEntity(159U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(156U);
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
    msg.setTimeStamp(0.0146371622566);
    msg.setSource(18561U);
    msg.setSourceEntity(160U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(128U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.643362066365);
    msg.setSource(15492U);
    msg.setSourceEntity(235U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(229U);
    msg.consumer.assign("XXSILZWMATZZTTGSIFCNZHUKYPPJPRKXERASOWVIBNOCQGRIDDQLSULZFKBPSMJBFWMWPHWDQLGDOPNIUAOUFMNDWUGJVAYYSDAHVQQSAZRQPZNMNKTCDVFDMPIBXLUMIFCXLBVNEBKRREJJMFXZIJIKBTONDIVVNVJBKPLVGRKHLTBFYCOYXEYESGET");
    msg.message_id = 14791U;

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
    msg.setTimeStamp(0.424221732369);
    msg.setSource(17501U);
    msg.setSourceEntity(158U);
    msg.setDestination(52974U);
    msg.setDestinationEntity(9U);
    msg.consumer.assign("GVCBQYGNNZQMGSLWMCJAOOWBMIEVBOEZVRXFMFBLYDDBYUTVKAKYFAXBWKHNXRXPGOZJJNIUTRFSWLQTPAYKLRWHMXHJBRHVKESECYJZKHZMVKGPDCYPHUWTOKFMEZCCPSFPGLTUVBSLQZNGFIBSHPPEUAYJSDXBNFRZOGXMOVTAYREQKITIQXNDSD");
    msg.message_id = 94U;

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
    msg.setTimeStamp(0.666497996787);
    msg.setSource(40617U);
    msg.setSourceEntity(157U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(113U);
    msg.consumer.assign("FPSSVNPIDIHSAZUEWGFJKAKXCXJNDIYOVJPHIKAMSFOYUCYKZNTQWQDVDYYWRZDFYQBEPMOGTHAECUWAHYYRLIUVQZEXXZFACGZBVJBJDXPKLTGJLHTUCRXOKTEKNNJZQWEYFBMPRSKILTIQUSDCTUQLMBGPTWBZOVLBBZIGBNHRMXTHAIVPRNRZHXRWUSDXHGFLPVDLMJVFEAMOAMGMLURHUSMCDOO");
    msg.message_id = 29405U;

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
    msg.setTimeStamp(0.176912818837);
    msg.setSource(57048U);
    msg.setSourceEntity(32U);
    msg.setDestination(29063U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.212282297174);
    msg.setSource(64032U);
    msg.setSourceEntity(96U);
    msg.setDestination(27087U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.355069238495);
    msg.setSource(46540U);
    msg.setSourceEntity(123U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.658945324233);
    msg.setSource(10409U);
    msg.setSourceEntity(103U);
    msg.setDestination(64409U);
    msg.setDestinationEntity(128U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.0826677166625);
    msg.setSource(14260U);
    msg.setSourceEntity(245U);
    msg.setDestination(26023U);
    msg.setDestinationEntity(178U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.693575564812);
    msg.setSource(36960U);
    msg.setSourceEntity(252U);
    msg.setDestination(27208U);
    msg.setDestinationEntity(249U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.909471871397);
    msg.setSource(35596U);
    msg.setSourceEntity(67U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 80U;
    msg.step_number = 168U;
    msg.step.assign("BGDVAXUDPHZCGCPLWXACPSWGKKN");
    msg.flags = 149U;

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
    msg.setTimeStamp(0.155676029039);
    msg.setSource(31768U);
    msg.setSourceEntity(254U);
    msg.setDestination(45290U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 209U;
    msg.step_number = 226U;
    msg.step.assign("QODPMDYDTHZBIFNJNMLYAFJVXD");
    msg.flags = 44U;

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
    msg.setTimeStamp(0.332456934885);
    msg.setSource(60327U);
    msg.setSourceEntity(236U);
    msg.setDestination(28019U);
    msg.setDestinationEntity(198U);
    msg.total_steps = 155U;
    msg.step_number = 146U;
    msg.step.assign("XEPRTIQTQKKQPGAPAVZZEDMMKLGADREJBYRPMJVVYCHHCFUGFCWBZFKUPVONTBEUVOSSASKCXTOHGKOOVXYXRDXAVVZWUXNYDSETJEZWUCLHMI");
    msg.flags = 128U;

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
    msg.setTimeStamp(0.775112256303);
    msg.setSource(63530U);
    msg.setSourceEntity(86U);
    msg.setDestination(49949U);
    msg.setDestinationEntity(8U);
    msg.state = 4U;
    msg.error.assign("KYUZFOWSXWAHOMKXGXEUCQIJVKFKAEZMIYPFJOFNIOHTZVYZCWCQZTNJHOEVZSKENGOHFFJZMLAWNNCHWCHKVAXXTNDHIGDHFBYHBFCBBOVAZJRLSJYUEIZQPEEDPNQAGMUONTSGRJGUQTRQMSPGICRWWQIALSZSLQDBVXTLXVQBDSRWORYIPLMHYKCKLSFVYXDJPDXAURPTEOVDMVPBMBLGJLIXKLUUNDUEN");

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
    msg.setTimeStamp(0.698722080565);
    msg.setSource(22555U);
    msg.setSourceEntity(173U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(129U);
    msg.state = 86U;
    msg.error.assign("HXGVIELUXVOSSAKMYKDBBVRWVBOIBBNAAUFBBNOQNEAYSALPPJFQUKSAZHRJCEFUXOTLKXQZWELPJXZGCIEKUTLVQQNGSWOR");

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
    msg.setTimeStamp(0.922384388247);
    msg.setSource(57259U);
    msg.setSourceEntity(239U);
    msg.setDestination(40474U);
    msg.setDestinationEntity(158U);
    msg.state = 254U;
    msg.error.assign("OQYFFVKJTERXIBZSQEPXOHAZBUTRENTHVSCVDOVYKTVTFJWKUUSNGSDYEOVNSKBVHLYJEQDIQXMUNWUBFLZOJCNEEXGPICQXJFKHIWAEZTWUPXBMMPPYZUXOYLCBKJWDZGPRYEWDSKTGDJCZFKTKIXPPTSMYHFDRJBKAAIDMVSGWGZGOIZQOR");

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
    msg.setTimeStamp(0.0915713954707);
    msg.setSource(63575U);
    msg.setSourceEntity(156U);
    msg.setDestination(12106U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.881619069085);
    msg.setSource(42292U);
    msg.setSourceEntity(183U);
    msg.setDestination(48121U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.931664486488);
    msg.setSource(55014U);
    msg.setSourceEntity(76U);
    msg.setDestination(58066U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.519045494233);
    msg.setSource(34161U);
    msg.setSourceEntity(14U);
    msg.setDestination(33870U);
    msg.setDestinationEntity(215U);
    msg.op = 245U;
    msg.speed_min = 0.763586304454;
    msg.speed_max = 0.695888068301;
    msg.long_accel = 0.893324637065;
    msg.alt_max_msl = 0.549386900189;
    msg.dive_fraction_max = 0.476982299245;
    msg.climb_fraction_max = 0.896735492409;
    msg.bank_max = 0.677236493055;
    msg.p_max = 0.119027310838;
    msg.pitch_min = 0.642477567984;
    msg.pitch_max = 0.979677553485;
    msg.q_max = 0.365910459293;
    msg.g_min = 0.00213983931562;
    msg.g_max = 0.74919818209;
    msg.g_lat_max = 0.909004536818;
    msg.rpm_min = 0.671217634958;
    msg.rpm_max = 0.498187634972;
    msg.rpm_rate_max = 0.0105344156877;

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
    msg.setTimeStamp(0.713886183291);
    msg.setSource(62733U);
    msg.setSourceEntity(157U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(247U);
    msg.op = 240U;
    msg.speed_min = 0.475418505528;
    msg.speed_max = 0.386989129758;
    msg.long_accel = 0.846596841797;
    msg.alt_max_msl = 0.623299203725;
    msg.dive_fraction_max = 0.00327251491352;
    msg.climb_fraction_max = 0.724627519988;
    msg.bank_max = 0.258869748709;
    msg.p_max = 0.603044684471;
    msg.pitch_min = 0.974148404433;
    msg.pitch_max = 0.794355418033;
    msg.q_max = 0.167651783104;
    msg.g_min = 0.148747459425;
    msg.g_max = 0.489614833824;
    msg.g_lat_max = 0.900583598915;
    msg.rpm_min = 0.761445519503;
    msg.rpm_max = 0.281771370975;
    msg.rpm_rate_max = 0.874488647821;

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
    msg.setTimeStamp(0.622086061264);
    msg.setSource(51939U);
    msg.setSourceEntity(47U);
    msg.setDestination(7376U);
    msg.setDestinationEntity(82U);
    msg.op = 71U;
    msg.speed_min = 0.27601583636;
    msg.speed_max = 0.0171318426784;
    msg.long_accel = 0.971296948144;
    msg.alt_max_msl = 0.0893985769025;
    msg.dive_fraction_max = 0.837166401871;
    msg.climb_fraction_max = 0.237003854345;
    msg.bank_max = 0.487459029111;
    msg.p_max = 0.0790107567855;
    msg.pitch_min = 0.56848350817;
    msg.pitch_max = 0.0306604018382;
    msg.q_max = 0.449911405197;
    msg.g_min = 0.30178770009;
    msg.g_max = 0.38359942544;
    msg.g_lat_max = 0.0332723791482;
    msg.rpm_min = 0.421057740097;
    msg.rpm_max = 0.560578439199;
    msg.rpm_rate_max = 0.171631444773;

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
    msg.setTimeStamp(0.670668429563);
    msg.setSource(34591U);
    msg.setSourceEntity(72U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.218992429968);
    msg.setSource(26780U);
    msg.setSourceEntity(204U);
    msg.setDestination(35926U);
    msg.setDestinationEntity(149U);
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("YZACWIDKBVFJPPMYDTHKDQXKDDOLLQMTKGWDKZUQVFJQGZYCOUVCBWKLYCDHXFHIZJLXUHIVFRGGTIWNZECJEAINPXTTPRFZBEKDRTJSPHBYEUGCSEFZIJUQTDRZSTUEAZLXGENKCLQSAOYTPUOQLXXSFOLWRJYEMAXVTHNLPAQABNCMSSHEIPUBBPWA");
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
    msg.setTimeStamp(0.0789261828927);
    msg.setSource(31296U);
    msg.setSourceEntity(53U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(136U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 225U;
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
    msg.setTimeStamp(0.787940088262);
    msg.setSource(50027U);
    msg.setSourceEntity(92U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.535442974235;
    msg.lon = 0.186860230081;
    msg.height = 0.709866301976;
    msg.x = 0.722229811582;
    msg.y = 0.156503423594;
    msg.z = 0.464123302706;
    msg.phi = 0.459184767171;
    msg.theta = 0.430398954281;
    msg.psi = 0.113677558222;
    msg.u = 0.603600301554;
    msg.v = 0.864113806154;
    msg.w = 0.422934450108;
    msg.p = 0.816337531839;
    msg.q = 0.601509778272;
    msg.r = 0.17138646766;
    msg.svx = 0.918195358106;
    msg.svy = 0.415817768633;
    msg.svz = 0.254190846707;

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
    msg.setTimeStamp(0.795606039066);
    msg.setSource(26585U);
    msg.setSourceEntity(108U);
    msg.setDestination(22248U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.95700339664;
    msg.lon = 0.106395389719;
    msg.height = 0.705181265153;
    msg.x = 0.510108148283;
    msg.y = 0.534751648752;
    msg.z = 0.463414706556;
    msg.phi = 0.933500319915;
    msg.theta = 0.724390340131;
    msg.psi = 0.163029621078;
    msg.u = 0.76080791531;
    msg.v = 0.545277547475;
    msg.w = 0.899424546426;
    msg.p = 0.161934957038;
    msg.q = 0.693092528556;
    msg.r = 0.117154140512;
    msg.svx = 0.471108204934;
    msg.svy = 0.350852320538;
    msg.svz = 0.521994892366;

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
    msg.setTimeStamp(0.1625641241);
    msg.setSource(17311U);
    msg.setSourceEntity(31U);
    msg.setDestination(23867U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.547380954964;
    msg.lon = 0.0110649363755;
    msg.height = 0.71405164293;
    msg.x = 0.648526759794;
    msg.y = 0.52856378678;
    msg.z = 0.468327818855;
    msg.phi = 0.968013180933;
    msg.theta = 0.207825536686;
    msg.psi = 0.656164999471;
    msg.u = 0.223095659195;
    msg.v = 0.159208367535;
    msg.w = 0.966827940856;
    msg.p = 0.107816329656;
    msg.q = 0.091325489547;
    msg.r = 0.489944487687;
    msg.svx = 0.379317647136;
    msg.svy = 0.409923314806;
    msg.svz = 0.654414925158;

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
    msg.setTimeStamp(0.931146267846);
    msg.setSource(16275U);
    msg.setSourceEntity(104U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(225U);
    msg.op = 231U;
    msg.entities.assign("XVBDZXPDPOKNOIOQCMCDODTLSVYCFALUNBOFFYELBGRHN");

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
    msg.setTimeStamp(0.521298201071);
    msg.setSource(40550U);
    msg.setSourceEntity(247U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(166U);
    msg.op = 216U;
    msg.entities.assign("HXDQCSGCIWHUVNYRYVSQQDGSTRMOWNGVWKIICVAVBIXULXXPYYSCZYZKEFTJTAKZUQHJFEJLJXGKTNENIBIPNGFWJLQQMNXLDX");

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
    msg.setTimeStamp(0.992868790529);
    msg.setSource(47039U);
    msg.setSourceEntity(195U);
    msg.setDestination(32398U);
    msg.setDestinationEntity(18U);
    msg.op = 148U;
    msg.entities.assign("MNBRXIABRUUDGREPEYPDGCPZCZUGFTPQCHJJLSJJCAHDXTFYRILRWHYIIFWIZEJKYTSOGFNZSDSKMVSINLCHKRDRVHDLNQKBPFBAVCLMXUWHXXIGRWQEBTFPPVNVKRYMLXGZVXOMPZOMSNIUABVEYXBTWCAAONNUBBXAGUQMETTHHDTYVDZPXFUYMMGRSBNPLKGSOZ");

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
    msg.setTimeStamp(0.980654988138);
    msg.setSource(13732U);
    msg.setSourceEntity(69U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(51U);
    msg.type = 221U;
    msg.speed = 35428U;
    const char tmp_msg_0[] = {2, -7, 69, 15, 47, 55, 34, -66, -16, -115, -61, -51, 34, -104, 98, -13, 11, 27, -24, 125, 126, -72, -107, -65, -19, -111, 82, 126, 101, 31, -10, -97, 30, -22, 15, 13, -44, -88, -84, 80, 25, 109, -50, 110, 73, -38, 26, 3, 40, 33, -92, -114, -106, 105, 42, 115, -3, -9, 113, 95, 7, 73, 61, 45, -75, 76, 1, 2, 28, 61, 120, -60, 4, 126, 62, -8, -70, -66, -83, 59, -58, -49, -122, -78, -68, -12, -44, -12, 108, 126, -92, 117, 62, -104, -37, -88, -27, 32, -58, -85, 24, -78, -79, 42, -36, -103, -54, -101, 69, -45, 47, 18, -101, 33, -49, -41, -15, 115, -112, 10, 89, -68, -54, 22, -2, 79, -115, -79, -124, 88};
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
    msg.setTimeStamp(0.911582001824);
    msg.setSource(57526U);
    msg.setSourceEntity(235U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(187U);
    msg.type = 120U;
    msg.speed = 22807U;
    const char tmp_msg_0[] = {-115, -36, 16, 72, 27, -88, -16, 113, 35, 26, -5, -21, 83, -25, 48, 8, -83, -28, -65, -75};
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
    msg.setTimeStamp(0.435635605476);
    msg.setSource(14713U);
    msg.setSourceEntity(240U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(206U);
    msg.type = 92U;
    msg.speed = 32901U;
    const char tmp_msg_0[] = {40, 120, 53, 34, -7, 23, 15, 40, -84, -109, 120, 50, 21, -110, -45, -55, 86, 78, -64, -76, -83, 92, -126, 82, -97, -35, -8, -46, 34, -45, -17, 81, 73, -30, 90, 51, -38, 120, 28, 113, 108, -112, -64, 112, -37, -32, -32, -23, -11, -48, -12, -53, 124, 29, -8, -74, 90, 71, -75, -82, -35, -96, 121, -116, 72, -91, -66, -121, -36, 48, 13, 67, 109, -85, 114, -117, -56, -28, 0, 94, 65, 19, -61, -74, 48, 62, 83, -17, 20, -70, 116, -81, -66, 41, 3, 18, -126, 66, -12, -107, -39, 2, 72, 17, -49, -24, -3, -76, 18, 35, 82, -91, -8, 44, 16, 65, -42, -64, -121, 32, 51, 5, -88, -25, 58, 4, -33, 75, -108, 49, 80, -55, -93, 112, 83, -32, -33, 97, 114, -16, 0, 114, 29, 94, 38, 55, -89, 77, -23, 10, -56, -127, 7, 117, -33, 116, 76, -56, -95, -88, 91, 9, -114, -126, -92, 91, 7, -23, 96, 115, 54, -94, -61, 69, 8, 88, 82, 22};
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
    msg.setTimeStamp(0.541673278312);
    msg.setSource(52254U);
    msg.setSourceEntity(173U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(233U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.675887662671;
    msg.bank2p_pgain = 0.793875957617;

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
    msg.setTimeStamp(0.139296891376);
    msg.setSource(41519U);
    msg.setSourceEntity(187U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(149U);
    msg.op = 32U;
    msg.tas2acc_pgain = 0.900670072118;
    msg.bank2p_pgain = 0.708703048769;

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
    msg.setTimeStamp(0.887060402402);
    msg.setSource(41355U);
    msg.setSourceEntity(232U);
    msg.setDestination(48785U);
    msg.setDestinationEntity(101U);
    msg.op = 92U;
    msg.tas2acc_pgain = 0.924101016481;
    msg.bank2p_pgain = 0.590263870904;

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
    msg.setTimeStamp(0.675516093565);
    msg.setSource(57762U);
    msg.setSourceEntity(127U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(72U);
    msg.available = 2091414635U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.944793086676);
    msg.setSource(2976U);
    msg.setSourceEntity(77U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(72U);
    msg.available = 1173973499U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.641820280845);
    msg.setSource(65508U);
    msg.setSourceEntity(49U);
    msg.setDestination(56811U);
    msg.setDestinationEntity(75U);
    msg.available = 2177941415U;
    msg.value = 138U;

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
    msg.setTimeStamp(0.480175457675);
    msg.setSource(15187U);
    msg.setSourceEntity(189U);
    msg.setDestination(10179U);
    msg.setDestinationEntity(37U);
    msg.op = 198U;
    msg.snapshot.assign("BKPHRNNKJRPAMHHRDGASNRMGDJHRALCKVFCQIBCKUDTGXGNTVCEDEBWOYODIHNJUTGOYQAUUIHTPLDTUGLBIXJNPAIDALMVWKZBMVOEQPWEDTKTUWSTXXYJHSLOJYCQBGPRVNBXFQFRJJDFXZZY");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.252233407861;
    tmp_msg_0.y = 0.855968981654;
    tmp_msg_0.z = 0.332740292934;
    tmp_msg_0.vx = 0.802473914153;
    tmp_msg_0.vy = 0.455989224734;
    tmp_msg_0.vz = 0.902808018966;
    tmp_msg_0.ax = 0.126025424;
    tmp_msg_0.ay = 0.902241022145;
    tmp_msg_0.az = 0.131089730977;
    tmp_msg_0.flags = 53031U;
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
    msg.setTimeStamp(0.373172999577);
    msg.setSource(29343U);
    msg.setSourceEntity(251U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(158U);
    msg.op = 218U;
    msg.snapshot.assign("WBJGEWOXKMBQJTCSXPFROXSCHSBPQFOVIQRPNXQARNHTDOLDEYWGDDMDXKHRFABPJSGLTQTWBRGFTRZUCPGHYWOHATGHHXYMMVALCVIEKQRPVMLKNQMKQQYTGNNFDXSXBBYYKZQWWPENEGYUVHMOMZHMCSCBJLIWS");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.836762683397);
    msg.setSource(6658U);
    msg.setSourceEntity(182U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(64U);
    msg.op = 49U;
    msg.snapshot.assign("ZLEIBXWPNUXKYDKYPLWABHFXRJZZLVPTIZGCIBGIDXMOZPLGLHJOFXTFDQMKHHSEYMCQJTQGZSBSKPDEUCNHNYDINXMPNMORARYQYSKYJICMSYTZKPSNVFAXCHVJVPVELWKLWIQIRWODTR");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 195U;
    tmp_msg_0.name.assign("XRCIKIQPCQIGYOANVVEJMEPFYHSDZWADZIBLBXGABCDZSXL");
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
    msg.setTimeStamp(0.562711016806);
    msg.setSource(53319U);
    msg.setSourceEntity(115U);
    msg.setDestination(64444U);
    msg.setDestinationEntity(138U);
    msg.op = 33U;
    msg.name.assign("NTTQZRJPLHBUHBAPOEYOUERTBPQBSLIJHAXMMRYILTYHQXFPJEXVVFMGCFMUYFSXVONSWPKUZGTHLJWRARMSHDHWWAQFKKOYBQYFZTSTWGDVUQNCGHQIPILZTMBXBWKISUZJRTENQSJUYNWOGBJGGDVQBBVOADXSMMLKJKUMPWFMYDNPIVPLUEKAUILQAOCRERLWCFCVXVGADXON");

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
    msg.setTimeStamp(0.627047181061);
    msg.setSource(54641U);
    msg.setSourceEntity(134U);
    msg.setDestination(40090U);
    msg.setDestinationEntity(122U);
    msg.op = 172U;
    msg.name.assign("KEXRDXXZWUVATDRKMCQXBOPGIWJHQYFGQFVHJVUMRBCGLLTLROKWNXKMEMBMGISFLVVPIAJUBPLPTONTIENCVWRGFHSTIDGJRCJKSSWVOHAQ");

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
    msg.setTimeStamp(0.454059108099);
    msg.setSource(15663U);
    msg.setSourceEntity(44U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(159U);
    msg.op = 171U;
    msg.name.assign("TJDVTWZAAVINKSNLUHIXCVYRYZFRHFCRCOIXJRGFYUQTFGRREFVELIXSKPQAQUWMVKJMELLSPODHDPABGWNOJNXQSTFTVBYYONGKLYMSODQWFBTFHMOLMUQDIKPBZALMXSIHNDECDPZHBQBOOBGMLGHJRSONHDFAXKLEBKPUASZU");

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
    msg.setTimeStamp(0.903540872285);
    msg.setSource(24086U);
    msg.setSourceEntity(38U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(165U);
    msg.type = 20U;
    msg.htime = 0.573435165324;
    msg.context.assign("FSLJCSQORVJOHQTHSFYEQDUPTEFAVTAOUPVWCTJAZLMIGKCMZDQOWHQEKTBLIO");
    msg.text.assign("NTKQEZEXPMOPIRMBVSBEIVMB");

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
    msg.setTimeStamp(0.548936554307);
    msg.setSource(28301U);
    msg.setSourceEntity(210U);
    msg.setDestination(588U);
    msg.setDestinationEntity(5U);
    msg.type = 203U;
    msg.htime = 0.704727889415;
    msg.context.assign("BGRDOCMGUFBBDOKIZXANQQXFSFHFWCUTFUOXQUJMGDSOVRMJGGWHHDVSHDMUBYWRUOIXEQLDMEYRQCKWVVDIMRSQYNEXNNDTNYOZPZQPPXJLGXLCWMZXNTKSPKCFLITUOIVCBFXKIMTEYDGTVJEUKVYHJJAZJSGZNFFMVOYATFZYKCQRQOVCKRJYEWHAETAWBAIHBUJLENRHPZQMPILESITZZSPTELKPWHAPLC");
    msg.text.assign("ISJPLQPEZXHRLZYBPYVBTAMKWFIJLMMOXANMVHASHSWGDKWZMFGUXNNUXVDPBOIAMJCGKUTOSCUDPQGRJPEPHUOYSFTTHOQTZHRQNIUUGZWCZRRWECGNYWQENKJWYQVDYSOLSGLQBDZDNRIHRKJQWVVPMDCPTJNIBINAMHCUAYNXFQRXGTTVKOBUSABGOMSOFAVTDWEBVBIQCSKUOYLFKXRFJLCEJEHLJIHWFKTACXIAYXDDBLZZVGCF");

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
    msg.setTimeStamp(0.412573207519);
    msg.setSource(56350U);
    msg.setSourceEntity(126U);
    msg.setDestination(33049U);
    msg.setDestinationEntity(25U);
    msg.type = 45U;
    msg.htime = 0.32965112689;
    msg.context.assign("SYHOVZUGIOWTNTQYXAQAXIZREEDWRSVBBRIZWRCZCCBELXSNXMDWAXFLKCLKGMEEUZDRSVVEUDYFIPDAYMYGOJHCOIOMKALHTPNPTXKPBSDKQNFFXABSFPEGEJYQQNUQHQWRIGGDDPVNKNMAJLRROWGMBSYAUBRMMCKJYTZBWQHGFOBDMHISQRNLLOJWUPJCPVNIXSYGEIANKMXKJFWPTZTUJJLOZVPVTIFHJUXWCOVQAUHZHLSUEHVKTFC");
    msg.text.assign("WUYBSLXMALSRZIQPNOCEKYCYOMXWCEKJFQVKSHRVUZGDQDECXOVAZYIALMTWOZQNSXCCDEKTFHMHOVQKFMDYRMULIZTZPIEOWSJWYVFRZWWTXLRCWDJEMNSPSU");

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
    msg.setTimeStamp(0.145837694206);
    msg.setSource(29995U);
    msg.setSourceEntity(70U);
    msg.setDestination(39735U);
    msg.setDestinationEntity(169U);
    msg.command = 58U;
    msg.htime = 0.0387955948491;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.htime = 0.758580067258;
    tmp_msg_0.context.assign("GWCUUWJBREFMUQCZOLLNUONHXAMSVVZDUTKETDRDAPXUDTSPSTTXTENQVRRQXCRUPHJWAQCAHKOZBOGBTJNEHXQZRPIPDGELSTJTPKZGVFARBADKNSWDYFDQPKHADLOLGCKZMWQMHXVXIEKN");
    tmp_msg_0.text.assign("OZDEJDKAEWCZQALAKFC");
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
    msg.setTimeStamp(0.337735314862);
    msg.setSource(30662U);
    msg.setSourceEntity(111U);
    msg.setDestination(59167U);
    msg.setDestinationEntity(34U);
    msg.command = 178U;
    msg.htime = 0.507432850579;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 247U;
    tmp_msg_0.htime = 0.521987621717;
    tmp_msg_0.context.assign("UFSDKWDPLIJXVXLYIRRYKNQEUSKOUBPXCHZGVOHERYXQIGZFRADNEHNSZUJWNZOQCCCSEDIFFDLMVBVOKAQYKFOSBGHBOFQVAAWBNZZTWTOXHILWUSYDQIDTKYZHTLLJNEJJMAQLPHPFPICUCPRMWRGGPLGMYRMHJEPWSC");
    tmp_msg_0.text.assign("OHSPLZFPVDFIGTBVSNMODOICSEZCQRIQMBQGMDVMLEWNCSXVHXYKGGVXSQGUQDZIMXOCJHWVJXZGKUDGWFLCIEHJUNBTERIAFRVKPXZBTEPVWXYPAKMLNZNNDZCXQUKLUFJTUHURWBOCWYYTWKNANPRTGSPIFIZAIRQAY");
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
    msg.setTimeStamp(0.321912384424);
    msg.setSource(27461U);
    msg.setSourceEntity(113U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(51U);
    msg.command = 111U;
    msg.htime = 0.347181231755;

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
    msg.setTimeStamp(0.825813091649);
    msg.setSource(40521U);
    msg.setSourceEntity(58U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(125U);
    msg.op = 245U;
    msg.file.assign("YLZKVSYDDLKAZLJNRNUKMHMOKKCFEYFMUWLVTVSWPZBJKDBOUVTVRJHKKPRRQZBS");

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
    msg.setTimeStamp(0.252991973551);
    msg.setSource(18472U);
    msg.setSourceEntity(0U);
    msg.setDestination(22558U);
    msg.setDestinationEntity(201U);
    msg.op = 74U;
    msg.file.assign("URMZZYMCKUBCBSTAUFFEJHVRJFOEQWQNGINTUSKGVKJPNCXKDLLAVQIJVCWHJSLIZWSCHGVPMGKRHDEXNUOGWOWAPLKZQUPSPJEBOMONTYF");

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
    msg.setTimeStamp(0.687798480509);
    msg.setSource(38446U);
    msg.setSourceEntity(138U);
    msg.setDestination(14557U);
    msg.setDestinationEntity(216U);
    msg.op = 96U;
    msg.file.assign("UHHXIYJCKTCOJBIKQWQGZSSWNOYFWPIMOAUDWGOCLAJFSUFEMZFXONBZCAVHCCRLKRRMFTCVNGEOOIDQHQPXAYYQUJRUFDHYQXXAJZHSYBCTUSJEWXHLEWWAZLPMSMMTJRTRUKHVRWBUEPSQDOIKBDEKVAGCDBFZGAJLFGXXDLIQKNPCVMLMVMNINEUETLBGXA");

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
    msg.setTimeStamp(0.554316190226);
    msg.setSource(17006U);
    msg.setSourceEntity(62U);
    msg.setDestination(20367U);
    msg.setDestinationEntity(97U);
    msg.op = 36U;
    msg.clock = 0.229983006523;
    msg.tz = 95;

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
    msg.setTimeStamp(0.566025452591);
    msg.setSource(52823U);
    msg.setSourceEntity(41U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(11U);
    msg.op = 124U;
    msg.clock = 0.822162165355;
    msg.tz = 42;

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
    msg.setTimeStamp(0.833219215563);
    msg.setSource(5158U);
    msg.setSourceEntity(65U);
    msg.setDestination(31879U);
    msg.setDestinationEntity(95U);
    msg.op = 125U;
    msg.clock = 0.770675717622;
    msg.tz = -53;

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
    msg.setTimeStamp(0.56715962335);
    msg.setSource(56839U);
    msg.setSourceEntity(37U);
    msg.setDestination(49473U);
    msg.setDestinationEntity(189U);
    msg.conductivity = 0.379247979868;
    msg.temperature = 0.622368472059;
    msg.depth = 0.604883025006;

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
    msg.setTimeStamp(0.536491975838);
    msg.setSource(36995U);
    msg.setSourceEntity(10U);
    msg.setDestination(47230U);
    msg.setDestinationEntity(222U);
    msg.conductivity = 0.611040245757;
    msg.temperature = 0.263970137999;
    msg.depth = 0.714956395118;

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
    msg.setTimeStamp(0.671854966808);
    msg.setSource(30705U);
    msg.setSourceEntity(162U);
    msg.setDestination(3738U);
    msg.setDestinationEntity(21U);
    msg.conductivity = 0.50777582977;
    msg.temperature = 0.11879196397;
    msg.depth = 0.377720400815;

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
    msg.setTimeStamp(0.815755434509);
    msg.setSource(7130U);
    msg.setSourceEntity(191U);
    msg.setDestination(12705U);
    msg.setDestinationEntity(29U);
    msg.altitude = 0.883935088521;
    msg.roll = 19817U;
    msg.pitch = 53124U;
    msg.yaw = 4098U;
    msg.speed = 19239;

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
    msg.setTimeStamp(0.383533082442);
    msg.setSource(14230U);
    msg.setSourceEntity(96U);
    msg.setDestination(29965U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.0478287313489;
    msg.roll = 232U;
    msg.pitch = 51814U;
    msg.yaw = 29359U;
    msg.speed = 14197;

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
    msg.setTimeStamp(0.45781029795);
    msg.setSource(18403U);
    msg.setSourceEntity(30U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.416749595774;
    msg.roll = 36631U;
    msg.pitch = 57291U;
    msg.yaw = 34335U;
    msg.speed = -834;

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
    msg.setTimeStamp(0.486223462758);
    msg.setSource(17759U);
    msg.setSourceEntity(177U);
    msg.setDestination(19736U);
    msg.setDestinationEntity(8U);
    msg.altitude = 0.0755243674346;
    msg.width = 0.835333975448;
    msg.length = 0.312628383929;
    msg.bearing = 0.388294422782;
    msg.pxl = -13293;
    msg.encoding = 14U;
    const char tmp_msg_0[] = {88, -26, 86, 67, 123, 91, 39, -90, 124, -111, 41, -24, -40, -28, 57, -68, -18, -23, 57, -43, -114, -127, -53, -116, 41, 1, -76, 78, 94, -37, -27, -75, 106, -119, 110, 27, -53, -94, 58, 64, -113, -126, 89, -8, -67, -75, -20, -67, 2, -77, -7, 52, 88, 82, 95, 9, -102, 113, -87, 38, 1, -88, -121, -99, -63, -68, 29, -11, 117, -96, 86, 80, -98, -70, 100, 17, 108, -27, 98, 14, -92, 112, 115, -117, -28, 28, -99, -84, -96, -53, -50, 108, 101, 85, -98, 91, -53, -30, -93, 110, 40, 36, 68, -6, 12, -70, -114, 104, 126};
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
    msg.setTimeStamp(0.230619846613);
    msg.setSource(44060U);
    msg.setSourceEntity(31U);
    msg.setDestination(22203U);
    msg.setDestinationEntity(88U);
    msg.altitude = 0.147511957541;
    msg.width = 0.304791145448;
    msg.length = 0.0896881497615;
    msg.bearing = 0.393509948294;
    msg.pxl = 13888;
    msg.encoding = 127U;
    const char tmp_msg_0[] = {-122, -60, 69, 125, -15, 13, -68, 7, 117, -105, 74, 75, 113, -52, 56, -21, 18, 86, -29, -28, 11, 18, -116, -45, -121, -101, 110, 115, -95, -118, -65, -56, -56, -68, -123, -80, 71, 96, 39, 79, 99, 8, -113, 1, 13, -74, 92, 125, 7, 11, 79, 24, -82, -60, -103, 40, -117, -62, -65, -33, -128, -84, 16, -106, 98, -25, 5, 79, 83, -75, 87, 18, -75, -72, -35, 98, -98, -6, -116, 54, -9, -120, -38, -120};
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
    msg.setTimeStamp(0.624318416633);
    msg.setSource(47525U);
    msg.setSourceEntity(198U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(96U);
    msg.altitude = 0.273915577841;
    msg.width = 0.461256680299;
    msg.length = 0.346880437164;
    msg.bearing = 0.989204931956;
    msg.pxl = -8382;
    msg.encoding = 49U;
    const char tmp_msg_0[] = {119, 12, 53, 43, -82, -121, 16, -63, 61, -46, 70, 10, -79, -32, 43, -110, -40, -99, 6, -117, -128, 61, -39, 61, -60, 102, -40, 32, 110, 91, -21, 46, -83, 42, 18, 70, -73, -15, 72, 94, 69, 49, 97, 87, 92, 83, 52, 57, 34, 71, -35, -21, -115, 2, 3, 13, 89, 89, -20, -27, -79, -85, 85, 19, 121, -56, 76, 111, 66, 73, -78, -9, -123, 126, -120, 109, -93, 34, -35, -9, 32, 30, -17, 17, 125, 40, 73, 54, -69, -75, 119, 48};
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
    msg.setTimeStamp(0.904562678029);
    msg.setSource(54161U);
    msg.setSourceEntity(142U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(116U);
    msg.text.assign("LTCUCXEKYAPKGYNHRCGTCLSFJWXDNMBMUMNQUKPSWJSFJALAYLHETXDFTXKKJXBRSUPEYVAPTGWIOEQDVLZRIHETQIWOPRBJOYGNHAXHUPYVUISVBZSNWNRBLVMUAFRABKZZSCSMCDWZJDTGCRORUEVBRDALSPMNFHWWJTNQUIEDNPFOSQCIAHIVQEIMWYDQXVFHDRKGOQG");
    msg.type = 247U;

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
    msg.setTimeStamp(0.225318511039);
    msg.setSource(21360U);
    msg.setSourceEntity(243U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(183U);
    msg.text.assign("FCSUGNYORHQSGPFJQCODVLVEDLUORQJSTKMEDUPKLIRJDBLWKDBCOCTCFXAQCXLNMFGWBCHHXVVUUWISMNCRVXYTZEWBAZKBQRFYGRIAJLUWOWHNMYIFNWDVTZXAFYMHIOZLBYVFBEESSXUGTJKOUNMQVAZDYPXZHEMNGUAERPJAROPPINPXHPKOGCJMNRKV");
    msg.type = 79U;

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
    msg.setTimeStamp(0.334453121811);
    msg.setSource(57162U);
    msg.setSourceEntity(151U);
    msg.setDestination(1885U);
    msg.setDestinationEntity(2U);
    msg.text.assign("UXCFCKITHDGIGCKUEFUHSLSZUKMZABBVXSOIJJYRBZNBNYZKMRKNFOKEVYOEVTAOGFLDIOPVWVQOMSHBPXQQQPTWXZMQENTJVEZFRKGGHNBCDMLBEINTSHFZVRNYUDQADBMWAEWAGLWMIJAZTLVWJOOYSTHADUZCVGSFMVDNZUMAIKYWWUHFHFQGSBXUIPHKQYOKXICHRXDFJLEP");
    msg.type = 144U;

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
    msg.setTimeStamp(0.529642166706);
    msg.setSource(45517U);
    msg.setSourceEntity(231U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.0892098066326);
    msg.setSource(48851U);
    msg.setSourceEntity(173U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.14759574718);
    msg.setSource(54854U);
    msg.setSourceEntity(53U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.199470016792);
    msg.setSource(13150U);
    msg.setSourceEntity(57U);
    msg.setDestination(4736U);
    msg.setDestinationEntity(41U);
    msg.sys_name.assign("WZGJGFCPZLEXQZODRLBKHTNMBXLAMSOCWLFVZNUNVYEWGEHZRYGFMPEDBSCVYUANOGQAMMRWWHTSYFWCIRRPYHHZCAWTIWIIHDLPRCYOCXGXSJ");
    msg.sys_type = 104U;
    msg.owner = 46987U;
    msg.lat = 0.413578592614;
    msg.lon = 0.346502437519;
    msg.height = 0.0213491605622;
    msg.services.assign("HCQTPBOOAGILNVUQYQESKEJAFWEHUZJUMJBNTWHRGOUZAPAMXZTVPIASUOIFXRLYMMHIKDIFNJTVDIHDSPDKRCLHWQECCWJSRGJVMCNUNQZYUNZ");

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
    msg.setTimeStamp(0.691474869804);
    msg.setSource(24999U);
    msg.setSourceEntity(10U);
    msg.setDestination(25979U);
    msg.setDestinationEntity(63U);
    msg.sys_name.assign("PKSFMZKFKVNEINTIKNTSRLBGAACWSLIUTEMZXIUECHAOZTBFARILANSYKNZMPGBUPLCFYWWRCMTGWKCKQFUNIEUKXPBHHXCOQZHRZJGCSRQMOJVWOEIWJHVZMDXQUHMHPAJYSRLVCXCXUPVHDJIWQYDD");
    msg.sys_type = 148U;
    msg.owner = 10074U;
    msg.lat = 0.316473378614;
    msg.lon = 0.186937510602;
    msg.height = 0.292909843315;
    msg.services.assign("CKAPCUNLKKFCBYIDKCLQZYOEDWXWXNFPFGDSBGLPAGKROXHCMZYNJMBLRTUNBQTHEPHHWBMBONLHWMUDYDTBMVYMJSXMEJEVRVFOEYRJPVKQVUPZFTCEIAIEARQRQYRXYGWZPLVTTTGKAMLLWUA");

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
    msg.setTimeStamp(0.350625464327);
    msg.setSource(28043U);
    msg.setSourceEntity(174U);
    msg.setDestination(41469U);
    msg.setDestinationEntity(163U);
    msg.sys_name.assign("OTHGIXLTKHPEJIADRULFDMVMSUUTWRLEPUDNYHCVGB");
    msg.sys_type = 66U;
    msg.owner = 38820U;
    msg.lat = 0.729210711715;
    msg.lon = 0.659499946496;
    msg.height = 0.256490038674;
    msg.services.assign("LPEWOCHOYVESBZSJCAEAKYAELNROBLMNMNAJNCZVSPQVURBUGNJZXRYBCYUKIIFFIPKDJZFWYISUXOLNJDLHSPHVLUDBEIHTGJRKUFKIWJSGGRDYMFOWIKCEORCWANQLYTBXDFJCAMMRIIYKQTGCMWFVTEOATECZSKTVVXMPKHTLHXZ");

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
    msg.setTimeStamp(0.526968160792);
    msg.setSource(51858U);
    msg.setSourceEntity(72U);
    msg.setDestination(443U);
    msg.setDestinationEntity(104U);
    msg.service.assign("VYPBKOGBJMDFUSWCXFZVIYXGGKLSSOANFGERIWDHEY");
    msg.service_type = 104U;

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
    msg.setTimeStamp(0.290060056626);
    msg.setSource(62548U);
    msg.setSourceEntity(248U);
    msg.setDestination(7513U);
    msg.setDestinationEntity(128U);
    msg.service.assign("UVENSXIVZSAWLISNJRHUHVLKYCAFXWQTRIOLBUOUELUMQBGHIOULMOCDMYPAAJEGCSDCXZXHYBMGLL");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.936961714402);
    msg.setSource(18067U);
    msg.setSourceEntity(5U);
    msg.setDestination(5420U);
    msg.setDestinationEntity(162U);
    msg.service.assign("KTQCBCNMVWMAESVFBUKAPQOQYDUDFXSTYQRVJEMJXHVJYEMPDWCRHAILQPIMDBMXVKBKPESNDXUWIYTFUXWHQNQCLHOABIWKLTSEGQLZILZUTFZQJYYWGDGICFGAMQAGHKLRBOJKOKOBNIZPSSXUJTZPAVPDCJVCYYWRNPUEGGJUXVFFAOIZZGROHTCBOBSCWHHKLNYFMETDXPDNY");
    msg.service_type = 59U;

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
    msg.setTimeStamp(0.375490295048);
    msg.setSource(61643U);
    msg.setSourceEntity(241U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(201U);
    msg.value = 0.241652378943;

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
    msg.setTimeStamp(0.949521391114);
    msg.setSource(49561U);
    msg.setSourceEntity(41U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(88U);
    msg.value = 0.210480318577;

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
    msg.setTimeStamp(0.477145364542);
    msg.setSource(57424U);
    msg.setSourceEntity(162U);
    msg.setDestination(28312U);
    msg.setDestinationEntity(104U);
    msg.value = 0.267045600057;

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
    msg.setTimeStamp(0.313390823256);
    msg.setSource(24939U);
    msg.setSourceEntity(196U);
    msg.setDestination(38975U);
    msg.setDestinationEntity(251U);
    msg.value = 0.403798887065;

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
    msg.setTimeStamp(0.42208567738);
    msg.setSource(40015U);
    msg.setSourceEntity(217U);
    msg.setDestination(64415U);
    msg.setDestinationEntity(170U);
    msg.value = 0.951775025586;

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
    msg.setTimeStamp(0.667948541655);
    msg.setSource(19789U);
    msg.setSourceEntity(7U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(149U);
    msg.value = 0.469309493909;

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
    msg.setTimeStamp(0.140626129686);
    msg.setSource(55164U);
    msg.setSourceEntity(89U);
    msg.setDestination(33313U);
    msg.setDestinationEntity(141U);
    msg.value = 0.615639052077;

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
    msg.setTimeStamp(0.352684177914);
    msg.setSource(28028U);
    msg.setSourceEntity(57U);
    msg.setDestination(26561U);
    msg.setDestinationEntity(9U);
    msg.value = 0.375818006518;

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
    msg.setTimeStamp(0.243465842658);
    msg.setSource(41493U);
    msg.setSourceEntity(143U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(217U);
    msg.value = 0.593640407311;

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
    msg.setTimeStamp(0.386594262352);
    msg.setSource(41726U);
    msg.setSourceEntity(129U);
    msg.setDestination(18002U);
    msg.setDestinationEntity(60U);
    msg.number.assign("BMQRYGZCTYKKYSMBJUTTLYLGJXICADHQMEWKZQJHISBEDDEAZAVRVQFHWPCGOCNFGHFRUSXSSDVNYKZLVQYUCNOAIPJJGAGJDRKIOXTKBRUQZNGJTQDVJZNUCUHXXZQWVGCTOOSRNJOVYXONWUGLBKTFDWLAH");
    msg.timeout = 64215U;
    msg.contents.assign("YMGMDLNRRUNPWGJVMN");

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
    msg.setTimeStamp(0.0811123461978);
    msg.setSource(44811U);
    msg.setSourceEntity(160U);
    msg.setDestination(1765U);
    msg.setDestinationEntity(206U);
    msg.number.assign("KMPWYAKPRBZHSTBUHFMQXQLCGZQLOIPVPTUYGDBKOBFXNFABLFZF");
    msg.timeout = 5456U;
    msg.contents.assign("KWFZCMEWYECULAQPCRAICFWAGITJVMSXJYTIEIUKDKOBIPSSFOLNEUQVBHBAONVWTMAUGJBNKDOGGVJOSWDLVGOIFTYJGGRTBH");

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
    msg.setTimeStamp(0.771781504946);
    msg.setSource(37441U);
    msg.setSourceEntity(226U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(78U);
    msg.number.assign("GFCXBIUYTNQPZBSOPDPNOHTEMELDXIJHILTCUKYZAYWWTUFLDZVYNTCURYIXMYVLGIQGJSKTKQMXGMEWMRDWROMLBBZSECEAIXFSNUHDUWDHEZOMXVWZNACUQSMHRYJSJ");
    msg.timeout = 22278U;
    msg.contents.assign("PADJYIVPOSRMYRAQDQTECAKEJIQZZGTOWOUCLCMFEJOXFNFTAFAQPENLGGSNEVIVXBKIDWZNYNSUFXWTMMRHDWYIAZWBDDOLONTFZVXGZPQPIHUKDJXBUKAVMJXZCNRTUQCGUIPZEJDLISFHYJONOXYLHQRVHCAUBSBVYGRHIKTHWSCXPHSKCKKLMKABSIJLYG");

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
    msg.setTimeStamp(0.901873447659);
    msg.setSource(16974U);
    msg.setSourceEntity(4U);
    msg.setDestination(6813U);
    msg.setDestinationEntity(195U);
    msg.seq = 4265361749U;
    msg.destination.assign("UTORIZXJKDCORXJTNTWWMFIPMWJPGNNORLCSYGJAEEWFTYMDNRRKAZDAWPNLAQKUIPVOAARITCUYFZFBBVMBWXBENHPLCZHQXXXYDJEGN");
    msg.timeout = 6438U;
    const char tmp_msg_0[] = {109, -20, -115, -90, 27, -59, 29, 17, 37, -19, -7, 63, -121, -103, -28, 41, 83, -84, 11, 6, 55, -49, -10, 70, -68, -13, -96, -5, -22, 87, -19, 0, 79, 47, 0, 66, 67, 64, -29, -22, -66, 77, 75, -80, 41, -78, 87, -110, 110, 25, -128, 9, -16, 126, 65, -81, 34, -50, -2, -18, -7, 6, -99, 102, -85, 97, 31, 18, -108, 124, 55, -83, 61, -62, -84, -54, 67, 29, 36, -67, 71, -120, -99, -111, 54, 9, -108, -54, 93, 60, 37, 85, -48, 126, 92, 97, -90, -38, -91, 100, 54, -18, -100, -71, -75, 114, -56, -124, -40, 111, -58, -51, 83, 86, -117, -23, -4, -29, 68, -4, 103, -82, 43, -31, -94, 103, 94, 19, -77, -61, 99, -123, -64, 19, -62, -93, 12, 104, 32, -16, 117, -60, 9, 114, 45, 63, -97, 52, -69, -46, -52, -86, -73, -118, -38, -115, -82, 10, -24, -59, 56, 98, -1, -30, 114, -44, 2, 105, 3, -96, -60, 36, 60, -80, -90, -126, -42, -45};
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
    msg.setTimeStamp(0.325275856875);
    msg.setSource(50848U);
    msg.setSourceEntity(163U);
    msg.setDestination(25388U);
    msg.setDestinationEntity(150U);
    msg.seq = 3220219056U;
    msg.destination.assign("IRXERWDCZDWKJ");
    msg.timeout = 46412U;
    const char tmp_msg_0[] = {95, -102, 27, 72, -115, -112, -60, 109, 48, 74, 61, 19, 70, -46, 20, 46, 13, 96, 95, -11, -125, 58, 97, -76, 36, 53, -117, -2, 60, 29, 119, 4, 70, -47, -107, 68, 46, 86, 109, -91, -4, -89, 70, -124, -123, 4, -79, 12, -75, -56, 74, -78, -6, 95, -90, -22, -102, 111};
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
    msg.setTimeStamp(0.219339120092);
    msg.setSource(40381U);
    msg.setSourceEntity(98U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(243U);
    msg.seq = 3444186212U;
    msg.destination.assign("EGKYAKAFNSKSKRZQMQTRLWSNJAWMFLECIRDDBQVUERMGDEEYRZWVAOPWIJLTFPHXPVXCDQVUMNATECKIEQRODLAQUHSIOISYMERD");
    msg.timeout = 31785U;
    const char tmp_msg_0[] = {107, -66, -121, 111, 58, -105, -58, -48, -28, -29, -109, -71, -33, 19, -79, 1, -53, -128, 105, -54, 32, 113, -106, 95, 73, -126, -46, -49, -51, 0, -73, -97, 35, 115, 66, -107, 114, 70, -114, -23, -31, -39, -89, -103, 44, 11, 50, 64, -83, -94, 91, 34, -41, 95, 56, -78, 49, -23, -127, 106, -75, 108, 91, 109, 51, -13, 12, -76, -104, 81, 95, -51, 13, 12, 62, -61, 35, -38, -4, 117};
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
    msg.setTimeStamp(0.151838229864);
    msg.setSource(42791U);
    msg.setSourceEntity(116U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(38U);
    msg.source.assign("IQBXWCHTUCSZOQTUPRIDJRGFMUYRCUOTNRPYWYYXJLZGFFDJPEUIVJPLRGRDSRLESAXIRKKVWASMPQHOXTXALFAIVZCXAZVOBJGECDLVNERMKBVTAZLINIFJKCCHWTAPYSOVNLWTISQXAJDKISJUVUFUQCDBEXZNEEQGCOTLRMWGS");
    const char tmp_msg_0[] = {70, 90, -65, -39, 102, -101, 29, 1, -108, 58, 23, 14, -22, 57, 47, -40, -103, 24, -47, -81, -34, -93, 39, -67, 112, -97, -71, -63, 109, 19, 58, 108, -7, -1, 70, -15, 120, -67, -89, 50, 8, -31, 90, -86, -95, -53, 121, -93, 66, -36, -37, -49, -63, 26, -14, 32, 48, -30, -79, -128, 83, -123, 58, -57, 113, -69, -90, -89, -51, -77, 91, 44, 111, 103, 83, 47, -50, 38, -43, -46, -6, 94, 120, -51, 120, 14, 16, -64, -29, 8, -82, 70, 25, 50, 17, -53, -126, 89, -42, -38, 22, 93, 93, 105, -54, 7, -23, 61, -58, -29, -19, -92, -64, -50, 68, -57, 18, 93, -35, -47, -4, -9, 74, 94, -58, 118, 17, -56, 33, -74, 67, 87, -103, 126, 107, -82, -25, -29, 1, -120, -28, 86, 75, -37, 104, -66, 107, -65, 5, -63, -17, 1, 67, 97, -83, -33, 64, 85, 115, 73, -50, -57, -49, 12, 92, 85, 108, 79, 34, -27, 71, 38, -39, 76, -111, -53, 58, 40, -5, -39, -37, 113, -98};
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
    msg.setTimeStamp(0.256546560791);
    msg.setSource(42734U);
    msg.setSourceEntity(166U);
    msg.setDestination(3901U);
    msg.setDestinationEntity(184U);
    msg.source.assign("AFJMUJYQMNNPGKNWCQKUDAZXRWYIOJQNMNANKGWFLKYTSABGZXSQMEAAYFXJVQRYWCBTBSBVVLEIKRVKJXPBNJAGUEEUFLVJEEDDZLQEDAAPMOISXYABXYSPLJGMPLDIHSGFVIDETBRPXBJCZMQCWGHLRTWXWYUXSZODOHZKWIPFHFHSPJNHBSTYZQCKHICZXLGPBTVRDNLUCNHOOYKISIVGOEFTRFTZMWHO");
    const char tmp_msg_0[] = {18, 116, -121, -115, 105, 59, -31, -34, 124, 1, 14, -67, -128, 103, 65, 103, 29, -53, -18, -90, -77, 100, -67, 8, -41, -104, -104, -106, 12, 110, -33, -84, 111, -47, 98, -101, 80, -93, 44, -109, 22, 114, -75, 7, 116, -90, 8, 9, -128, -2, -58, -91, -108, 41, -11, 109, -96, 54, 50, 107, -67, 97, 74, 23, -42, -50, 27, 61, -38, 83, 14, 21, 47, -126, -83, -12, -123, -89, 17, -20, 79, -43, 53, 66, 12, 118, 98, -75, -76, -72, 126, -70, 107, -19, 64, 92, 13, -60, 38, 95, -23, -100, -99, 77, -108, 65, 66, -49, -64, -57, -103, -86, -34, -93, 42, -2, -36, -15, 81, 60, 72, -99, -66, -123, 76, -47, -109, -18, -30, -49, -70, 90, 32, -60, -42, -84, 125, 113, 50, 0, -35, -17, -119, 87, -113, -37, 6, -22, 23, 10, 85, -126, 33, 45, -110, 64, 60, 24, 59, -78, -27, 8, 5, 23, 13, 51, -49, 100, -45, -61, -2, 99, 42, -83, 21, 23, -8, 2, 88, -114, -112, -70, -71, 43, -125, -12, -106, 87, -35, 5, 40, 116, -73, 22, 88, 69, -125, 81, -28, 7, 56, -17, 109, 4, 17, 81, 121, -117, -101, -93, 42, -73, -39, 55, 100};
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
    msg.setTimeStamp(0.946883259578);
    msg.setSource(4680U);
    msg.setSourceEntity(241U);
    msg.setDestination(12454U);
    msg.setDestinationEntity(123U);
    msg.source.assign("ULUXUFTXVAJRSRPEYHFVDOGEWWNJQSKMXMRHMQHBNLOGIVFVSFLVVNEHNOFNNCALAANTOPGDKDHAWHLRWDIPYZTHXSLGVOCTHUOESKRXWGXAOLQPEGQYCUZMOMIIWA");
    const char tmp_msg_0[] = {-108, -63, -77, 52, 94, -62, 100, -34, -15, -108, -88, 28, -17, 22, -104, 56, -96, 91, 114, 49, 18, 100, -3, -55, -103, -15, 110, -25, 23, 86, 104, 110, 58, -79, -99, 123, 84, 11, 118, 18, -93, -4, 114, -64, -125, 14, 84, 18, -80, -120, 78, 118, 33, -58, 83, -77, -44, 39, -126, -55, 29, -56, 92, 36, -54, -17, 75, 59, -63, -27, 26, 98, -106, 67, -44, -104, -83, 114, -42, 49, -16, 41, 119, 41, 4, 108, 65, 119, 97, -123, -45, -84, -107, 32, -95, -13, 28, 71, -4, -41, 125, -19, 87, -93, -50, -77, 35, 94, 76, -106, 31, 39, -44, 100, -76, 100, 82, -71, 112, -32, -13, -54, 18, 28, -112, -86, 2, 60, 19, 49, 50, -66, -16, -23, -64, -36, -60, -91, 65, 34, -73, 125, -106, -121, -77, -11, -99, 43, -104, -39, 78, 102, -110, -66};
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
    msg.setTimeStamp(0.0145028052621);
    msg.setSource(3102U);
    msg.setSourceEntity(66U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(125U);
    msg.seq = 2105772782U;
    msg.state = 13U;
    msg.error.assign("TLBPFFPYSXUSM");

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
    msg.setTimeStamp(0.146848993836);
    msg.setSource(50451U);
    msg.setSourceEntity(158U);
    msg.setDestination(14896U);
    msg.setDestinationEntity(230U);
    msg.seq = 2137914453U;
    msg.state = 91U;
    msg.error.assign("JJVTQLLYQIMMGFQNYUTHFNNJSRASMTYHMZFNWDXPYXIAVMGBQTPALDINEAEGOUKGRWGYLOHHUBZBQXCCDZDSBJOGUWXLEWNZCUPFQLGRFIKRZYKAKMPKUETPOUVPHMCWSJWRDAEUOIBVROISBDTFQQEGZRKKWBEVZTHJJFIDOAXGIERYCPQDBVWVYPNNOZPCUWZKYXIZXCFUTVIOMTNJGALHKCBSAFRCMSJNHEQVLODYTWSXJERHKXHSMB");

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
    msg.setTimeStamp(0.141605611373);
    msg.setSource(62430U);
    msg.setSourceEntity(216U);
    msg.setDestination(50473U);
    msg.setDestinationEntity(18U);
    msg.seq = 690412202U;
    msg.state = 1U;
    msg.error.assign("QPKORPBQDMSTFEJMOYNFQXRKLZZWKDDTNPJHTTONEDEPDJQMAGOHYLOPKIVMTBJWIEARWRAQHWGIARPKYUIVLOGQTUNSADYQZFZDEVHSVEJTUJZBZNGUFGUEWDVXMJKETFPVZDLOICOGMUXPBHXXSXXRCZAVXYISYCNPIZGWAAVFBNYSCOGICBLHULQQLNAMRBISYUUBHHKOSFYCGWCABWKHWFRNJRMLDNIKJXVSFHMP");

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
    msg.setTimeStamp(0.882887083001);
    msg.setSource(26671U);
    msg.setSourceEntity(200U);
    msg.setDestination(7975U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("JPYKGEWCASLLDEVWPWVVZQKOPSLGXDWQMLYFXALMBPOXEJXZBBJNXWNLMRDRYOFFCQMMBASFJRKEDQFSJAWKGFOKCHUUFUVWKKMEHMNICDAYXIPRJVGAUTRHNGYOFYDRZXZTAPNTKJGSDSNTCQCBBYTEAYIOZCBSIAHCQX");
    msg.text.assign("GSJUPGEPWOPGZUKGWADIESXGQELHGKOZTXVVPQ");

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
    msg.setTimeStamp(0.356318111722);
    msg.setSource(50673U);
    msg.setSourceEntity(204U);
    msg.setDestination(29416U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("LVFYAFYGNADBUFHYMZETTPQJVRLYARFRRXNPTIIFOQIOMGAGQCWTIMMYNVXLEPB");
    msg.text.assign("NPVOFRYZPIWMSVYZUDDUDLNSOOLAOTKRVZJVQCYBPESMQMYPFRQZFBDJSUTANOVUGFGKBIIEVTQPDPHGBHWLROSRJLHRWNSQSIIGLAXAZPYLGWMEKYHTDXBQTZPLNMHJHDEBHHEQFCIKWCIRCYFOEMSESPWGYTHHOXJCMKCWVMRZNVZDOBRQXAUCDF");

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
    msg.setTimeStamp(0.185600396557);
    msg.setSource(13944U);
    msg.setSourceEntity(57U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("KHKDQBWRJMRBZYJRQUZGNOEHFCYMVYTCRIBEPXCTMPDALPHDSSNUHUCOTGDLIWNATWGWTSRLDVWPKXQXTMSJYAIVPMHWJSDEOLZMNUMTPYEBXMLMWZXDGOVFYNULNRIOZBOQDLPVGCCYFVANSKZJFAGLNKVXDUQBVEJGUKTIPSHPATZEOZYCKJLUAZXGMAWVEYHPTOGFDAGXFEQIBKUOCUIISCSRBAVQEOFBXRQFKZJHRJHXQKE");
    msg.text.assign("DPYYICOPYPPTMSXPFMDYOKPIEKWIZJKCMLVHXIS");

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
    msg.setTimeStamp(0.826240890594);
    msg.setSource(4663U);
    msg.setSourceEntity(238U);
    msg.setDestination(60176U);
    msg.setDestinationEntity(4U);
    msg.origin.assign("BCJGSCPYSTCNKNKBZAVEZTXYTQWDXUUFDXJDLPISUFLRREXMENFOBPJZUC");
    msg.htime = 0.732359840435;
    msg.lat = 0.772049395379;
    msg.lon = 0.921315491074;
    const char tmp_msg_0[] = {21, -100, 86, 40, -70, -16, -97, 114, -68, -128, 71, -28, -54, -44, -95, -122, 98, -32, 118, 81, -56, 8, 121, -69, -1, 32, -100, -105, 73, -78, -42, 51, 107, 78, 5, -109, -110, 88, -113, 0, 3, -7, -8, 105, -26, -95, 36, -5, -42, -50, 85, 13, -6, 85, 25, 7, -108, -74, -56, -47, -124, 103, 29, 50, -60, -108, -58, -92, -116, -49, -53, 16, 7, 12, 18, 101, -58, 61, 27, 121, -93, -123, 63, -16, -127, 0, -31, 62, -109, -101, 30, -122, 124, -68, 38, 45, 44, -111, -69};
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
    msg.setTimeStamp(0.206190857161);
    msg.setSource(20934U);
    msg.setSourceEntity(170U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("JOHURGYFXMZNIWCICNTUIDVQDPMKBJGXELNOTLYAXRVTFCUQUGWZVAJSFCBECYIFHLNEINSKJKBUXMEHKFYYXAJKIWBLG");
    msg.htime = 0.770218929282;
    msg.lat = 0.997063156113;
    msg.lon = 0.00260467040146;
    const char tmp_msg_0[] = {-40, -46, -19, -22, 7, 38, -127, 71, -106, 63, 69, -54, 102, -88, 40, -104, 18, 22, -86, 84, -72, 36, -16, -86, 64, 110, -119, 86, -62, 66, -101, -100, -7, -127, -44, 19, 62, -21, -52, 10, 88, 3, -65, 47, -24};
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
    msg.setTimeStamp(0.603764826106);
    msg.setSource(34922U);
    msg.setSourceEntity(241U);
    msg.setDestination(60083U);
    msg.setDestinationEntity(182U);
    msg.origin.assign("POTTFVQKMW");
    msg.htime = 0.567181142512;
    msg.lat = 0.879389695168;
    msg.lon = 0.0773449405245;
    const char tmp_msg_0[] = {117, 5, 61, -63, -123, -51, 23, -94, 53, 68, 56, -69, 40, 67, 103, -88, -118, -124, 111, 57, -31, -72, 49, 81, 117, -19, -3, -74, -2, -90, 49, -43, 49, 113, 81, -73, -59, -106, 104, -104, 48, -48, -111, 14, 34, 112, -105, -97, 31, -95, -71, -13, -55, 13, -56, 71, 101, -116, 75, -121, -2, 28, -18, 113, -34, 55, -60, 107, 91, -37, -18, 114, 109, -60, 4, -84, 1, -23, 72, -84, -3, -93, 94, -90, 41, 56, 45, -13, 2, -96, -82, -7, 45, -67, -126, -117, 116, -24, -121, -14, 23, -38, 35, 125, 94, -107, 105, -107, 116, -60, -94, 15, 13, -49, 50, -58, 25, 97, -111, -114, 15, 47, 53, -8, -26, 2, -27, -12, 32, -64, -112, 42, -7, 1, -128, 28, -117, -34, -97, 49, 45, -61, 67, -12, 24, 20, 15, 88, 5, 58, 62, -16, -90, 10, 34, 86, 16, 71, 54, 10, 109, -70, 4, 68, 20, -72, -107, 116, 8, -91, -53, 92, 6, 107, 54, -112, 78, 65, -97, -67, 37, -123, 44, 14, 54, -86, 110, 122, 64, -38, -66, -46, 65, 11, -103, -51, -25, 125, -29, 116, -56, -85, -13, -33, 88, 0, 76, -37, 54, 109, 108, 45, 63, 8, 2, 79, -24, -112, -85, 20, -101, 66, -22, 53, -62, 112, -9, 5, -1, -8, 125, 38, -98, 72, 107, 10, -51, 96, 72, -62, -43, 50, 17, -76, 30};
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
    msg.setTimeStamp(0.597374442662);
    msg.setSource(27796U);
    msg.setSourceEntity(215U);
    msg.setDestination(14730U);
    msg.setDestinationEntity(163U);
    msg.req_id = 35077U;
    msg.ttl = 61614U;
    msg.destination.assign("WMAVATGVDSCISOIBYUWFFIJWAQFYRXOOFKCKEVTCFHIOQUSKEIZSAJTOHNXDKGGXPUKDNMCLESTZOZCVYVDXFWLVTILPNWWQARHTERKBQCQGKTAQWNFMQMPBZOSUKSRELRWUJRVGBSUBXZMYPBADXGCELPYHOBARGNNSOFHJJUXJIHHZNTYPFOXBANUEMYWX");
    const char tmp_msg_0[] = {25, -126, 32, 121, 80, 111, -20, 121, 62, 60, -31, -45, -80, -27, -95, -118, 61, -13, -126, -63, -29, 15, 41, 101, 70, 116, 89, 83, -103, 30, -67, -76, 108, -26, 20, 83, -117, -102, 71, 12, -81, -13, -87, 97, 57, -125, 19, 92, -115, -65, -17, 71, 47, -58, 99, 87, -19, 58, -69, -66, -81, -11, -85, -2, 61, 29, 66, -100, -30, -85, -58, -16, 4, 97, -73, -39, 118, -28, 74, 78, -15, 39, 40, 119, -100, 41, 28, -117, 102, 93, 25, 27, -64, 90, -91, -10, -55, -92, -101, -59, 11, -120, 50, 15, 46, -94, -9, -59, -21, 53, -42, 122, 61, -3, 8, -11, -57, 101, -4, -21};
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
    msg.setTimeStamp(0.155362430836);
    msg.setSource(56020U);
    msg.setSourceEntity(176U);
    msg.setDestination(34530U);
    msg.setDestinationEntity(215U);
    msg.req_id = 1751U;
    msg.ttl = 12587U;
    msg.destination.assign("TXSKHDWSJFOYJUASBMWLSXCAGPCKPRAPLLZQVWYXOQBCATXUNELEGHUSUKFYSLBDPYTTXPYTTTNJMNEZEWLZLOCDJRIRAHGKQHOQNMSOJQWNHHKINIUNUOOGFVMRVMXEQIYOMPYZURYRVSGKNKZJZKGKPDIVEATCTLIIAMFXGGDFYVUVMZFDELBCJBLXDQYQBG");
    const char tmp_msg_0[] = {67, 18, 15, 61, 33, 37, 61, -54, -29, -52, -36, -81, 59, 65, -13, 12, 24, -60, -57, -51, 77, -77, -77, 85, 46, 75, 21, 104, -48, -78, -72, 30, 58, 118, 54, -104, -108, -106, 52, -24, 46, -21, 65, -21, -108, -112, 41, 13, 60, 22, 57, 8, -19, -79, -103, -46, -80, -66, 37, 48, 22, 96, -70, 85, -9, -116, 47, 103, -126, -14, -123, -66, 65, -105, 5, 104, 60, 90, -81, 24, -40, 99, -7, -44, 2, -15, -83, 7, -102, -23, 77, -41, -82, 121, -67, 14, -101, -80, 82, 52, -1, -123, -4, 35, 108, -95, 96, -71, -128, -24, 111, -29, 119, -55, -127, -108, -107, 74, 29, 87, 43, 34, 54, 24, -99, 54, -63, -6, -54, -34, 66, -109, 51, -87, 86, 49, -81, 8, -91, -80, 7, -47, 88, -62, 67, -39, 18, -81, -109, -37, 81, 41, -19, -59, -101, 29, -106, -118, -15, -7, -20, 59, -44, 87, 66, 20, -49, -78, -26, 13, -44, -28, -47, 67, 81, 112, 15, -64, 112, -91, -57, -107, -67, 50, 14, 43, 0, -72, -120, -71, 13, -85, -13, 24, -41, 104, -45, -93, -104, 67, 111, 82, -124, 90, -64, 123, -33, -125};
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
    msg.setTimeStamp(0.219506651378);
    msg.setSource(51287U);
    msg.setSourceEntity(164U);
    msg.setDestination(18556U);
    msg.setDestinationEntity(227U);
    msg.req_id = 904U;
    msg.ttl = 25052U;
    msg.destination.assign("RZOKBMRCBDWEPPQCVATEDRBYXEGQXZCQTWRIEUHKWDSBNGPNPUCAYFFINJGDITTCFUTUOJLFITYHHOFXMIORPKUYMDFVWHIRQPBYJXAWAKBRLEOHGKJAAEHOLUGQJMMZGMYFMXTFZUVRESJODGSZXDTINJWRCVUSQTDTFELLOKJKHLYYS");
    const char tmp_msg_0[] = {54, 81, 50, 42, -54, 124, -44, -17, 67, 11, 92, 54, -85, 99, -116, 50, -112, 28, -32, 57, 54, 89, -106, 26, -21, -81, -108, -9, 91, -17, -33, -64, -106, -15, -112, -44, 15, 43, -26, -63, -22, 118, 57, -118, 84, 9, 90, 92, 117, -83, 35, -46, -122, -19, 49, 77, -90, 83, -40, 118, 0, 8, -21, 88, 86, 121, 90, 20, -120, -37, -118, 62, 107, 20, -113, -21, -22, -115, -2, 40, -15, -42, -92, 45, -42, -102, 117, -53, 119, 25, 112, -115, 13, -66, -71, 91, -24, 77, 106, 100, 92, -45, -124, -61, -106, 116, -10, 37, -91, -97, -65, -18, 34, -75, 122, 79, -92, 95, -20, -72, -45, 117, 49, 102, -101, -19, -71};
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
    msg.setTimeStamp(0.437302378649);
    msg.setSource(64119U);
    msg.setSourceEntity(115U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(235U);
    msg.req_id = 19444U;
    msg.status = 33U;
    msg.text.assign("CCZSSNMOPSRUJQIDQDFOBRPFRQBZYBHATVYKFXNVZDNOIHPUPLFGWTJAPUJUZCRLPUKNMNIOKEEZOKZYQNESAUKOLMLBZSBYEKGGQVIXAGTRLFUXOVGCRVHDUYDHDTFECKHFAKECJWDCFTTDPSTXVWRYWMSEUBTVYNMRRTMQAIQGMWCLHXNTBEVOJRANBXGVW");

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
    msg.setTimeStamp(0.96881934821);
    msg.setSource(35377U);
    msg.setSourceEntity(40U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(209U);
    msg.req_id = 30594U;
    msg.status = 69U;
    msg.text.assign("HKPIOVAFLCNEUGACROPBTFEKZDIEGQAKTIADDFXKGGS");

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
    msg.setTimeStamp(0.00502225802974);
    msg.setSource(54244U);
    msg.setSourceEntity(225U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(170U);
    msg.req_id = 32311U;
    msg.status = 108U;
    msg.text.assign("XXCKTSGCTWCWQHRLKXXWDQBDHJGR");

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
    msg.setTimeStamp(0.229007227134);
    msg.setSource(37304U);
    msg.setSourceEntity(29U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("EIHVVNOTTBPXXCWWAZOFNPSKLZLJABCWMUESVCSGKXYHUVGGUBACHGPATZGYTCJOFYYSNAKLZORMCEOEGVPYYWHVWRJDXKITEBUZWJDXUBWYHDINGZFSHGEHEATRHPPUHZZTMJWDVIHBBXMEBBISDSCUZLNFNQJODCLXOQAGQRKRRVFKZOQLRWAGAXVSE");
    msg.links = 943298170U;

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
    msg.setTimeStamp(0.478038101853);
    msg.setSource(37789U);
    msg.setSourceEntity(44U);
    msg.setDestination(20863U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("IGFVXDHULJKCKFUWVKGLWCDQPMAHSUIAPBNNOOSBATSPIMPAUOFJQZIZZWJZJBMUKOFLXRRXBXQSNICGHQSEEKSERYTKJVVRMBEFXXBUMZYHOTZEOWLNWEYNXAOJAKCNUMZWCKJDAJQQTAHMDWGK");
    msg.links = 2386409121U;

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
    msg.setTimeStamp(0.236904903372);
    msg.setSource(23715U);
    msg.setSourceEntity(242U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("GRCHEDWOPLUHVDWLFTYXTRYIKLMJUUANVUAXSNVLORKMJXVMVBNEADGBRMAOBYWXOFAZWTBIUQQEPQ");
    msg.links = 2637417605U;

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
    msg.setTimeStamp(0.458097541405);
    msg.setSource(19881U);
    msg.setSourceEntity(32U);
    msg.setDestination(28790U);
    msg.setDestinationEntity(79U);
    msg.groupname.assign("IGVSJKZGHJOECWEEDMBBWWVHVYFCHRIBRSLGLAZGQNJAJWGQJAYRPQUSIOKBNNKJMPHFTTSGREVCAFENTHUODYYVUZRANZPCHSYTXOOLCIXRCFZCKLUKMFODLGZEBBJATJIFPMJIIZXRRYUNFDXKYWBDGUCKIZTNCQMUFLPYWFXPLPVGLRWVXHVENYOAYUIDCXQMESMFTPKDZPXVSSZBSLVQJBQHUINTAMHGARQTMAWOEQEXWBDSMHQTPDONK");
    msg.action = 173U;
    msg.grouplist.assign("ITYFJSWWHTWDUCOJSVUVRJSHKQOKLTWTJOJERCGFHQLBBZNZVAFUUWQXUVGXHDMYADLLLQDEJGOOMYICCAMFQIXHYPZHOVBRNIAOBTMEKWAZKPELIUYNTDYFHQMGGPVZYTMKNPCJSEDCKFYXWBAEEBCTZZ");

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
    msg.setTimeStamp(0.802992584093);
    msg.setSource(52381U);
    msg.setSourceEntity(178U);
    msg.setDestination(37281U);
    msg.setDestinationEntity(129U);
    msg.groupname.assign("NMROJORGODROBHMDTOJNGHUWIKROSSBHCZVYARLQIMLGQVAFTPZXLQSATUCJBPWADCNZUSKRRCXHLTTDGSAEPVMNUIBRGMKYQXZXWLNELIFBYHQKWXCXALVSPYPDX");
    msg.action = 199U;
    msg.grouplist.assign("SZMUXTWNYGLMUVEAIHIQOOSXHKAXENYVFBSDOYSKIFWKJMJAGYCTOKIHGCJUYZECIWBZXAENAQVTUXQDOVOUZHPJRIGGDQTHTMIODQPZBQVXCWZPTVFAUKVRURPRP");

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
    msg.setTimeStamp(0.520004170132);
    msg.setSource(15935U);
    msg.setSourceEntity(68U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(21U);
    msg.groupname.assign("HXDVJKWCMXLCJZPQSYVDOAJKQSYQIFAZWTDWDSRKQBZPOHRBNYNVWYDXGQLBITMSRIEOTSCDDEEULLUZXSLNWOKGRNJFYEQMDZNVBIHZRKUSTXFDOJTCOWWACVXFYASHGTMNMATJFIVMEXOPGLRQATTQVPNVF");
    msg.action = 126U;
    msg.grouplist.assign("QDUQNCJYSZDCONACRBBJWAYRKXMIGHCPHHNMOQDUGEFNZLPCWYQFEVXLPJGSOGERETYWNFUQMOBGNEXJIETFNRSXEXMYOLWHFBCKGLZASVZKEWADVUHVXUBJQMPLMHQNWBWKWKTLEUVYOLICTBFFZVLTPRXZUPKLSOJNYRAGTHTFVKIOKIHM");

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
    msg.setTimeStamp(0.970358682929);
    msg.setSource(8267U);
    msg.setSourceEntity(54U);
    msg.setDestination(61950U);
    msg.setDestinationEntity(212U);
    msg.value = 0.508598628007;
    msg.sys_src = 26135U;

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
    msg.setTimeStamp(0.235380996853);
    msg.setSource(17186U);
    msg.setSourceEntity(250U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0385342431256;
    msg.sys_src = 11882U;

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
    msg.setTimeStamp(0.906824569088);
    msg.setSource(53081U);
    msg.setSourceEntity(200U);
    msg.setDestination(44976U);
    msg.setDestinationEntity(71U);
    msg.value = 0.291998112652;
    msg.sys_src = 33390U;

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
    msg.setTimeStamp(0.707402182054);
    msg.setSource(42215U);
    msg.setSourceEntity(245U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(8U);
    msg.value = 0.447877875356;
    msg.units = 95U;

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
    msg.setTimeStamp(0.0426771149419);
    msg.setSource(34943U);
    msg.setSourceEntity(60U);
    msg.setDestination(22470U);
    msg.setDestinationEntity(129U);
    msg.value = 0.609778358518;
    msg.units = 170U;

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
    msg.setTimeStamp(0.868871642111);
    msg.setSource(51234U);
    msg.setSourceEntity(237U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(34U);
    msg.value = 0.879158770796;
    msg.units = 3U;

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
    msg.setTimeStamp(0.682910702983);
    msg.setSource(14455U);
    msg.setSourceEntity(97U);
    msg.setDestination(29980U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.53315010448;
    msg.base_lon = 0.935307094782;
    msg.base_time = 0.549255444188;

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
    msg.setTimeStamp(0.634926569531);
    msg.setSource(47015U);
    msg.setSourceEntity(215U);
    msg.setDestination(12845U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.203833029623;
    msg.base_lon = 0.406628168545;
    msg.base_time = 0.895813713928;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 48269U;
    tmp_msg_0.priority = 8;
    tmp_msg_0.x = 17230;
    tmp_msg_0.y = -7659;
    tmp_msg_0.z = 7740;
    tmp_msg_0.t = 14560;
    IMC::Calibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 22565U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.111468535917);
    msg.setSource(54563U);
    msg.setSourceEntity(219U);
    msg.setDestination(9651U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.651669061158;
    msg.base_lon = 0.678473930002;
    msg.base_time = 0.737445267176;

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
    msg.setTimeStamp(0.660977816141);
    msg.setSource(40587U);
    msg.setSourceEntity(210U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(108U);
    msg.base_lat = 0.700582236323;
    msg.base_lon = 0.405884838836;
    msg.base_time = 0.0387754741242;
    const char tmp_msg_0[] = {-36, -76, 2, 14, 28, -101, 80, 68, -50, -12, 105, -13, 57, 43, -41, 82, 21, -37, 19, -63, 46, -105, 72, 119, 92, -79, -99, -66, -104, 88, 90, 79, 61, -107, 5, 118, -76, 33, -74, 57, 2, -81, 26, -33, 6, -16, -107, -86, -80, 89, -119, 4, 86, 124, 2, 70, 17, 72, -35, 92, 24, -55, -63, -32, -75, 40, -56, -61, -74, 34, -17, 56, 48, -87, 3, 37, 60, -14, 111, 123, -9, 95, 107, 116, 101, -14, 71, -97, 66, 54, 10, -82, -112, 40, -128, 65, -93, -11, -24, 117, 66, -119, 126, -102, -127, 126, -82, -5, -17, -73, -36, 80, -23, 14, 110, -61, -86, 8, 49, -121, -19, 113, -6, -12, -88, -85, 91, -51, 54, 1, -110, 8, 106, 85, 5, -10, -70, -126, 23, -22, 77, -28, 121, 26, 12, -43, -102, 77, 84, 116, 81, -47, -106, -124, 57, 28, -87, -79, 29, 74, 116, 75, -21, 108, 85, 63, 37, 94, -18, 15, -68, -119, 114, -106, -38, 121, -34, -45, 117, 18, -40, -34, 40, -124};
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
    msg.setTimeStamp(0.946278674468);
    msg.setSource(38658U);
    msg.setSourceEntity(91U);
    msg.setDestination(30864U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.584253581833;
    msg.base_lon = 0.838023617584;
    msg.base_time = 0.871070062871;
    const char tmp_msg_0[] = {-51, 60, -126, -110, 35, -101, -13, 58, 117, -79, -81, -96, 15, -117, 26, -73, 30, 18, 82, 24, -64, 59, -32, 93, -36, -20, 124, 22, -19, -100, -16, 33, 62, -8, 25, 25, -42, 46, -9, -65, 102, -6, 36, -7, 16, 1, 10, 94, 27, -13, 52, -65, 46, 8, 123, 0, -55, -102, -115, 45, -111, 28, -28, -34, 32, -69, 97, -100, 68, 32, -26, 61, -22, 86, 79, 116, -12, -14, 69, 57, -126, -23, -1, 36, 60, 117, -96, 3, -36, 106, 102, 35, 82, 11, 12, -67, -41, -106, 57, -7, -125, 111, 77, 63, 82, -63, -51, -60, -21, -87, -17, 94, 59, -124, -44, 33, 117, 34, -56, -12, 53, -72, -67, -124, -46, -1, 37, -36, 115, 21, 51, 64, -81};
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
    msg.setTimeStamp(0.695009890473);
    msg.setSource(21701U);
    msg.setSourceEntity(110U);
    msg.setDestination(28361U);
    msg.setDestinationEntity(112U);
    msg.base_lat = 0.974001489708;
    msg.base_lon = 0.807521958818;
    msg.base_time = 0.767147700905;
    const char tmp_msg_0[] = {-38, -15, -3, 77, -7, 104, 29, 13, 20, -82, -23, -97, -94, 117, -37, 63, -58, -81, 13, 10, 76, -36, 77, -24, -97, 28, 60, -120, 22, -96, 104, -8, -36, 32, 122, -84, 90, 70, 71, 46, 116, 114, 84, 84, -83, 23, 26, -101, 115, 117, -97, 74, 104, 72, -22, 33, -4, -37, -26, 110, -5, 61, -12, 66, 0, -88, -105, -39};
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
    msg.setTimeStamp(0.600731143595);
    msg.setSource(58839U);
    msg.setSourceEntity(119U);
    msg.setDestination(1969U);
    msg.setDestinationEntity(18U);
    msg.sys_id = 4333U;
    msg.priority = -65;
    msg.x = 32758;
    msg.y = 6048;
    msg.z = 25130;
    msg.t = -20063;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("TTMPAGROUJGLDVNQLMYURCCJPGZUBEWJAQSPKQJOXQERLMGHZOWMGPXKBFEESZCYKFFVIUTGYCBJCCWXULOFCHQZMRBSFXQN");
    const char tmp_tmp_msg_0_0[] = {-110, -108, 1, 97, -1, 104, -54, -62, 38, -38, 66, -79, 112, 74, 55, -28, -59, -19, 67, -32, -82, 24, 107, -13, -1, -64, -102, -101, -78, -121, 96, -4, -81, 102, -21, -128, 80, -61, -21, -57, -96, -100, 120, 101, 96, 112, -66, -62, -49, 57, -50, -45, -111, -23, 24, 52, -50, 74, -30, 18, 79, 68, 57, 119, -15, 20, 93, -42, -4, -12, 99, 18, -27, -89, -95, 49, 9, 0, 40, -40, 97, 25, 91, 37, -116, 120, -34, -112, -39, 59, -115, 2, -79, -85, -81, -41, -101, 35, 60, -109, 46, 86, -29, -52, 95, -27, -111, -30, 69, -2, 93, -37, -92, -125, 89, -22, 9, 117, -97, -11, 30, 10, 96, -30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.88237159189);
    msg.setSource(54821U);
    msg.setSourceEntity(191U);
    msg.setDestination(53203U);
    msg.setDestinationEntity(59U);
    msg.sys_id = 51958U;
    msg.priority = 12;
    msg.x = -21026;
    msg.y = 9167;
    msg.z = 9211;
    msg.t = 10975;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.628004368631;
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
    msg.setTimeStamp(0.606329858854);
    msg.setSource(54858U);
    msg.setSourceEntity(219U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(13U);
    msg.sys_id = 14221U;
    msg.priority = -79;
    msg.x = -10011;
    msg.y = 17442;
    msg.z = 15810;
    msg.t = 20469;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ELNRIOWGJIHZTREKEQXMWICERKCSXBZPNREYCWCRLFMOJTORPXJVLTSDNSCLJWNSGQXLRYXOUMEFHFTDUPPMKZERHKYLVFDMUIBZCBUSSZBDYMRNUMICEJSCJFUHYKAZNFVGAUGLYUHBBCTTMOKFAHROAIXQNQHPLOFDVPAVYSPVKLIZZKGAPVHYWYEPGISQVGKQSUGVEMDBTD");
    tmp_msg_0.lat = 0.701351928981;
    tmp_msg_0.lon = 0.791694835133;
    tmp_msg_0.depth = 0.824951079515;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 180U;
    tmp_msg_0.transponder_delay = 170U;
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
    msg.setTimeStamp(0.360717626652);
    msg.setSource(77U);
    msg.setSourceEntity(144U);
    msg.setDestination(26980U);
    msg.setDestinationEntity(26U);
    msg.req_id = 15663U;
    msg.type = 172U;
    msg.max_size = 10443U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.590653736462;
    tmp_msg_0.base_lon = 0.981530804103;
    tmp_msg_0.base_time = 0.207726251673;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 42568U;
    tmp_tmp_msg_0_0.priority = 111;
    tmp_tmp_msg_0_0.x = -30106;
    tmp_tmp_msg_0_0.y = -23325;
    tmp_tmp_msg_0_0.z = 32255;
    tmp_tmp_msg_0_0.t = 32054;
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30376U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.126598818831;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.650807613673;
    tmp_tmp_tmp_msg_0_0_0.z = 0.760793975309;
    tmp_tmp_tmp_msg_0_0_0.z_units = 97U;
    tmp_tmp_tmp_msg_0_0_0.duration = 14718U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.304676395187;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 178U;
    tmp_tmp_tmp_msg_0_0_0.type = 127U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.68794898453;
    tmp_tmp_tmp_msg_0_0_0.length = 0.414160772992;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.905412665028;
    tmp_tmp_tmp_msg_0_0_0.direction = 187U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ICOKXQYRJARFBZGCUFJZJNDBCDMZOLFYBJKUXYPTHVECLLGMHYVKUABSHTKBEBYRFVOFWIGXKRSJLNFMMMQGFLXEUTPEVQBCQMYURDEFPQWUCPLPYVNNLTSODMIXSIQSLTJWNIPOXRRXSMJCAJCWTOGQEWZNBFZHWDZLDARLDTVCSVTJKNIGOBSUHCIWYAGGRZGJODPVGRNWQEHKAOX");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.374006488353);
    msg.setSource(6695U);
    msg.setSourceEntity(170U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(220U);
    msg.req_id = 61924U;
    msg.type = 114U;
    msg.max_size = 63441U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.147864289748;
    tmp_msg_0.base_lon = 0.0568120587503;
    tmp_msg_0.base_time = 0.52210582628;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 45138U;
    tmp_tmp_msg_0_0.destination = 54083U;
    tmp_tmp_msg_0_0.timeout = 0.840711016753;
    IMC::PathControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 2730961321U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.129014801731;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.537954965886;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.965085369644;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 161U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.407197705584;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.612048188348;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.268145351614;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 215U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.23154612842;
    tmp_tmp_tmp_msg_0_0_0.flags = 149U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.0497380642054;
    tmp_tmp_tmp_msg_0_0_0.y = 0.277794290804;
    tmp_tmp_tmp_msg_0_0_0.z = 0.472698620062;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.356979529774;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.713529536813;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.505777223911;
    tmp_tmp_tmp_msg_0_0_0.course_error = 0.358868215846;
    tmp_tmp_tmp_msg_0_0_0.eta = 48334U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.199775814329);
    msg.setSource(5516U);
    msg.setSourceEntity(9U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(112U);
    msg.req_id = 52503U;
    msg.type = 107U;
    msg.max_size = 52962U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4517885573;
    tmp_msg_0.base_lon = 0.0729455933039;
    tmp_msg_0.base_time = 0.296331784395;
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
    msg.setTimeStamp(0.707859795116);
    msg.setSource(54120U);
    msg.setSourceEntity(180U);
    msg.setDestination(3518U);
    msg.setDestinationEntity(173U);
    msg.original_source = 25013U;
    msg.destination = 25567U;
    msg.timeout = 0.325189766804;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 14U;
    tmp_msg_0.x = 0.451673467428;
    tmp_msg_0.y = 0.61403104955;
    tmp_msg_0.z = 0.657999977567;
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
    msg.setTimeStamp(0.332075940311);
    msg.setSource(47264U);
    msg.setSourceEntity(37U);
    msg.setDestination(13586U);
    msg.setDestinationEntity(30U);
    msg.original_source = 54996U;
    msg.destination = 15407U;
    msg.timeout = 0.84252544777;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.237766979369;
    tmp_msg_0.speed_units = 214U;
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
    msg.setTimeStamp(0.931414739342);
    msg.setSource(9785U);
    msg.setSourceEntity(159U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(154U);
    msg.original_source = 32537U;
    msg.destination = 16414U;
    msg.timeout = 0.343803381903;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.992616990725;
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
    msg.setTimeStamp(0.124828901993);
    msg.setSource(7425U);
    msg.setSourceEntity(87U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(128U);
    msg.id = 76U;
    msg.range = 0.404655733987;

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
    msg.setTimeStamp(0.771587816491);
    msg.setSource(55657U);
    msg.setSourceEntity(236U);
    msg.setDestination(47804U);
    msg.setDestinationEntity(202U);
    msg.id = 164U;
    msg.range = 0.164716717617;

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
    msg.setTimeStamp(0.24922914099);
    msg.setSource(23388U);
    msg.setSourceEntity(37U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(234U);
    msg.id = 147U;
    msg.range = 0.0656260934619;

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
    msg.setTimeStamp(0.886318574501);
    msg.setSource(5796U);
    msg.setSourceEntity(226U);
    msg.setDestination(10134U);
    msg.setDestinationEntity(221U);
    msg.beacon.assign("QUFQEOICEUKOAXGFKFULGKLOZTDMRRWPXXSHCMZIEIXXAIZPGHMJIPKCKUPVNSZLJJGVBEWWWVARTGLLTKYBNGGMVYFWJCRPAYHNZEASKQHYUQNVFBPFVSJURSIDTUHWBAOATOKHUEJTSWJFYW");
    msg.lat = 0.835426508599;
    msg.lon = 0.943067199646;
    msg.depth = 0.650479349397;
    msg.query_channel = 240U;
    msg.reply_channel = 32U;
    msg.transponder_delay = 27U;

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
    msg.setTimeStamp(0.328170529587);
    msg.setSource(40152U);
    msg.setSourceEntity(133U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(42U);
    msg.beacon.assign("ERZPFHEKPGQDIKFSOMRQGSYBNBVNLPJOBRBGSNUAKHVEOVVHDJELMSWZXACIEJOCAATXAQEGRHLYWCWOZCMZUTZOKTHQZHVSOPLWMIPFPTQLDSJFCUYJTPRSGWKLNDIVDWMKNYKBXLNYEKVOIAXERMNKMQHXCSIGQWHUIFMVRAUUBYQGLRZPFHDGTCXXCUNPMDTXIJYKSILMWJBQUFNFQXCYFVCUDRDARJ");
    msg.lat = 0.649443694803;
    msg.lon = 0.365789626266;
    msg.depth = 0.171633240184;
    msg.query_channel = 8U;
    msg.reply_channel = 44U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.774537827206);
    msg.setSource(49121U);
    msg.setSourceEntity(104U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(5U);
    msg.beacon.assign("BNQCOYOSCGZWGVFCZDJDDAHOXBXERXXMKUIBRVTNPAETWJURFNHKXHNBRVXJCRUJGQXZZGJGGMGNUUFAMOBKQIPOZVDNVSMRHCECCWYPOWBLEXWFPIIMHEZMCFKGHIBKRLSAEQL");
    msg.lat = 0.472203243845;
    msg.lon = 0.867705895556;
    msg.depth = 0.435425459053;
    msg.query_channel = 33U;
    msg.reply_channel = 90U;
    msg.transponder_delay = 61U;

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
    msg.setTimeStamp(0.697988611107);
    msg.setSource(5627U);
    msg.setSourceEntity(202U);
    msg.setDestination(57749U);
    msg.setDestinationEntity(205U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.539933051392);
    msg.setSource(6410U);
    msg.setSourceEntity(62U);
    msg.setDestination(13244U);
    msg.setDestinationEntity(196U);
    msg.op = 202U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NUPEHMXGSDLTNAENESUQMZRGZEYPGOYHRAHQWTFABJSZBRLKEIFMYOTWYSJMKSJXWOZAXHLQDPIYUCIEFTKPVFGPOAWLUYSQZJNLHDVMADQNWHZXVKGBHRKLYWLRVVEIZDODCCHJIDQYJLFMQBBVRFCBFPCCFCMTDUWCBVLNTMNOGSMDPUIRHINITFXWXWUDQOT");
    tmp_msg_0.lat = 0.859831277387;
    tmp_msg_0.lon = 0.645961549067;
    tmp_msg_0.depth = 0.558330173692;
    tmp_msg_0.query_channel = 175U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.552769364902);
    msg.setSource(51775U);
    msg.setSourceEntity(225U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(170U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.406002738339);
    msg.setSource(22168U);
    msg.setSourceEntity(89U);
    msg.setDestination(44225U);
    msg.setDestinationEntity(195U);
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("KSPNKYRZUUVPCZZNDKGOLAGBNELCTRTLZJDHTAHIYUTGMBBPJEQYONCFVKYCWYSACDIIDPPAMHZHGJUFMTPGGVZQQSEWUPNSHAPVRUXW");
    tmp_msg_0.message_id = 1116U;
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
    msg.setTimeStamp(0.929623694292);
    msg.setSource(8338U);
    msg.setSourceEntity(16U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(201U);
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.0124935662223;
    tmp_msg_0.lon = 0.363123549643;
    tmp_msg_0.z = 0.599074417831;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.speed = 0.975632906912;
    tmp_msg_0.speed_units = 242U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 61656U;
    tmp_tmp_msg_0_0.off_x = 0.711833320128;
    tmp_tmp_msg_0_0.off_y = 0.486438183999;
    tmp_tmp_msg_0_0.off_z = 0.987963048382;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.855356715931;
    tmp_msg_0.custom.assign("CJZGVPXDUZSJPRDQONSNXPRBOOKYFHFJSEXXHMKSUWLQBSWFADKQLHIIRYCTBPANVLIHGCHMHVONDCBBLCWYEWIOVMJDFVYIKAPZWRRXWYZSCYXMPUVGSQKPOEGTPZUJZNLJBUYMJMPNREKDWTCDXNZXQLUFGWGTFLQQBFGNHIXMHUATK");
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
    msg.setTimeStamp(0.407818762059);
    msg.setSource(40511U);
    msg.setSourceEntity(200U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(12U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.314117457454;
    tmp_msg_0.speed_units = 176U;
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
    msg.setTimeStamp(0.463502428866);
    msg.setSource(2545U);
    msg.setSourceEntity(191U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(17U);
    msg.op = 48U;
    msg.system.assign("PFHZFESRQGHTKKSKKPYYXDAJENGSYVEQXQDINBZAINFVQANSAIZAOORNTEGACTZXYFUMBLMZRBVUVXVZRKQJJUHZMNO");
    msg.range = 0.490421540785;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 136U;
    tmp_msg_0.system.assign("EICQCPIYDAVW");
    tmp_msg_0.range = 0.954986860415;
    IMC::LblRangeAcceptance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 5U;
    tmp_tmp_msg_0_0.range = 0.493396425051;
    tmp_tmp_msg_0_0.acceptance = 163U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.662918441825);
    msg.setSource(14833U);
    msg.setSourceEntity(150U);
    msg.setDestination(46053U);
    msg.setDestinationEntity(183U);
    msg.op = 108U;
    msg.system.assign("IQPWSIJAVIVTLVSYUATXCICRPAWTIMLZAKCDFURH");
    msg.range = 0.931628670416;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.662982830731;
    tmp_msg_0.phi = 0.373164302214;
    tmp_msg_0.theta = 0.654486417873;
    tmp_msg_0.psi = 0.929876775266;
    tmp_msg_0.psi_magnetic = 0.20393532773;
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
    msg.setTimeStamp(0.088496363124);
    msg.setSource(31107U);
    msg.setSourceEntity(122U);
    msg.setDestination(48282U);
    msg.setDestinationEntity(134U);
    msg.op = 89U;
    msg.system.assign("DJPMFGJATZYXOQTOCTCMNPWEQHXSHYHMQL");
    msg.range = 0.129017510509;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 86U;
    tmp_msg_0.clock = 0.742255142785;
    tmp_msg_0.tz = 37;
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
    msg.setTimeStamp(0.22000389947);
    msg.setSource(2468U);
    msg.setSourceEntity(179U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.675895313118);
    msg.setSource(13076U);
    msg.setSourceEntity(198U);
    msg.setDestination(52180U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.794463478564);
    msg.setSource(50351U);
    msg.setSourceEntity(93U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.345131104898);
    msg.setSource(26249U);
    msg.setSourceEntity(235U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(243U);
    msg.list.assign("WEEPMLFNHGEVUNQEDYIBIQVKGPKJYQRIDIXBQKYZXNIXPLPZHESBNQNAGADVOWYSASWZMEAIXUTCSNOBGVYTVKITJAQOUBQDTTSIRLLUDFFGXFPMUMRHGFWBUVEEVMUIPDAHXLSBWAUHRHGCXFVKZIZMQNMDSJLPXFETJYWSCRKUBOC");

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
    msg.setTimeStamp(0.599646681535);
    msg.setSource(34797U);
    msg.setSourceEntity(206U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(3U);
    msg.list.assign("WHKSIVRYXMJVTFPYCASFICBSCQCRIFUFMFNQGHGYAJLMMJBINOFSKAUUKEYEDTLCYUOBAZTOVDRNZGGTV");

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
    msg.setTimeStamp(0.931055586611);
    msg.setSource(41765U);
    msg.setSourceEntity(82U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(145U);
    msg.list.assign("JXMNIGDVPZUBWTCBXDTLMNBAYWYVZWHBTANJJKKSWSGVPXSQILQICA");

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
    msg.setTimeStamp(0.169558557637);
    msg.setSource(22542U);
    msg.setSourceEntity(199U);
    msg.setDestination(49031U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("LONRSJRTNIKQDUJLJPCBYXOYARPGZMMRFPQHQWEDCCK");
    msg.rssi = 0.0177124941044;
    msg.integrity = 11127U;

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
    msg.setTimeStamp(0.563870718378);
    msg.setSource(45604U);
    msg.setSourceEntity(184U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(228U);
    msg.peer.assign("IKOGYXWDNCUORWTXHAVCSLNFZOIICMTZNBJYMCHBVVEDYZNQTIGBDOTXQUEEFSQBKDSGSNPJBSRAQLDOJVBMIRVRPRURYKMFZJCZOLXEQFXKMXCPOZRWGDACRPSYLZXLHANVFSSWRCOUAQYKHVHNAEWQIYWJCTGMGLQWPBDMILEJAUANV");
    msg.rssi = 0.382033012838;
    msg.integrity = 978U;

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
    msg.setTimeStamp(0.154355867244);
    msg.setSource(47926U);
    msg.setSourceEntity(189U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(111U);
    msg.peer.assign("WVCYIUPFGFHTBZNAIEKSLOBRTKOEZEHPFMXMOKLKAIZURNNGHGKXELACWVRTHDJDSAXBGUMLVEUJZJUYQ");
    msg.rssi = 0.993308537945;
    msg.integrity = 44696U;

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
    msg.setTimeStamp(0.287111144032);
    msg.setSource(5839U);
    msg.setSourceEntity(38U);
    msg.setDestination(50169U);
    msg.setDestinationEntity(95U);
    msg.value = 22212;

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
    msg.setTimeStamp(0.444783603026);
    msg.setSource(52520U);
    msg.setSourceEntity(35U);
    msg.setDestination(47363U);
    msg.setDestinationEntity(27U);
    msg.value = 32463;

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
    msg.setTimeStamp(0.98503239061);
    msg.setSource(11252U);
    msg.setSourceEntity(151U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(239U);
    msg.value = -10936;

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
    msg.setTimeStamp(0.132590758921);
    msg.setSource(62959U);
    msg.setSourceEntity(168U);
    msg.setDestination(55790U);
    msg.setDestinationEntity(58U);
    msg.value = 0.618868913236;

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
    msg.setTimeStamp(0.319087456983);
    msg.setSource(37974U);
    msg.setSourceEntity(10U);
    msg.setDestination(59747U);
    msg.setDestinationEntity(233U);
    msg.value = 0.140250562518;

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
    msg.setTimeStamp(0.747176419637);
    msg.setSource(38357U);
    msg.setSourceEntity(36U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(159U);
    msg.value = 0.586444889431;

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
    msg.setTimeStamp(0.829367591516);
    msg.setSource(41152U);
    msg.setSourceEntity(230U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(249U);
    msg.value = 0.123738789637;

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
    msg.setTimeStamp(0.364539209641);
    msg.setSource(9928U);
    msg.setSourceEntity(193U);
    msg.setDestination(35303U);
    msg.setDestinationEntity(175U);
    msg.value = 0.559945242909;

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
    msg.setTimeStamp(0.948006801809);
    msg.setSource(52704U);
    msg.setSourceEntity(152U);
    msg.setDestination(15110U);
    msg.setDestinationEntity(225U);
    msg.value = 0.462619151267;

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
    msg.setTimeStamp(0.9202974621);
    msg.setSource(23526U);
    msg.setSourceEntity(52U);
    msg.setDestination(27948U);
    msg.setDestinationEntity(207U);
    msg.validity = 22742U;
    msg.type = 161U;
    msg.utc_year = 3214U;
    msg.utc_month = 253U;
    msg.utc_day = 134U;
    msg.utc_time = 0.0671721029895;
    msg.lat = 0.58462127721;
    msg.lon = 0.372722832924;
    msg.height = 0.323732272013;
    msg.satellites = 229U;
    msg.cog = 0.698057708786;
    msg.sog = 0.750523324326;
    msg.hdop = 0.577986226637;
    msg.vdop = 0.663163576663;
    msg.hacc = 0.247078957591;
    msg.vacc = 0.143971769772;

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
    msg.setTimeStamp(0.603393057287);
    msg.setSource(51516U);
    msg.setSourceEntity(52U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(51U);
    msg.validity = 48343U;
    msg.type = 241U;
    msg.utc_year = 61589U;
    msg.utc_month = 195U;
    msg.utc_day = 52U;
    msg.utc_time = 0.36719133798;
    msg.lat = 0.628452813789;
    msg.lon = 0.955701457292;
    msg.height = 0.886471120496;
    msg.satellites = 155U;
    msg.cog = 0.977177400025;
    msg.sog = 0.504056749205;
    msg.hdop = 0.552178910925;
    msg.vdop = 0.261084101284;
    msg.hacc = 0.576025583196;
    msg.vacc = 0.527095546354;

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
    msg.setTimeStamp(0.153016127361);
    msg.setSource(33936U);
    msg.setSourceEntity(61U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(9U);
    msg.validity = 60150U;
    msg.type = 53U;
    msg.utc_year = 59869U;
    msg.utc_month = 40U;
    msg.utc_day = 207U;
    msg.utc_time = 0.568428944971;
    msg.lat = 0.238776081361;
    msg.lon = 0.217305675504;
    msg.height = 0.19540059059;
    msg.satellites = 150U;
    msg.cog = 0.0946883609469;
    msg.sog = 0.456816886056;
    msg.hdop = 0.81421910895;
    msg.vdop = 0.720807037018;
    msg.hacc = 0.225997836837;
    msg.vacc = 0.8611090347;

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
    msg.setTimeStamp(0.348166395321);
    msg.setSource(13164U);
    msg.setSourceEntity(102U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(137U);
    msg.time = 0.5987569532;
    msg.phi = 0.865377081275;
    msg.theta = 0.719377764504;
    msg.psi = 0.898208049046;
    msg.psi_magnetic = 0.18839659429;

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
    msg.setTimeStamp(0.870865213127);
    msg.setSource(48971U);
    msg.setSourceEntity(214U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(27U);
    msg.time = 0.869444111428;
    msg.phi = 0.69801646506;
    msg.theta = 0.61473072134;
    msg.psi = 0.776720334562;
    msg.psi_magnetic = 0.417939592665;

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
    msg.setTimeStamp(0.986886069475);
    msg.setSource(35925U);
    msg.setSourceEntity(30U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(46U);
    msg.time = 0.856791136098;
    msg.phi = 0.463596856594;
    msg.theta = 0.115530028709;
    msg.psi = 0.26576880199;
    msg.psi_magnetic = 0.772933947575;

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
    msg.setTimeStamp(0.0162024063437);
    msg.setSource(61873U);
    msg.setSourceEntity(210U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(135U);
    msg.time = 0.774737001902;
    msg.x = 0.868456686523;
    msg.y = 0.13055348054;
    msg.z = 0.340235771853;
    msg.timestep = 0.410530913051;

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
    msg.setTimeStamp(0.351285666039);
    msg.setSource(24184U);
    msg.setSourceEntity(163U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(229U);
    msg.time = 0.336490223171;
    msg.x = 0.0651115739071;
    msg.y = 0.182112275059;
    msg.z = 0.281026831209;
    msg.timestep = 0.918898178444;

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
    msg.setTimeStamp(0.705882651972);
    msg.setSource(48726U);
    msg.setSourceEntity(225U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(222U);
    msg.time = 0.34584278147;
    msg.x = 0.32685509984;
    msg.y = 0.107799335948;
    msg.z = 0.648984657016;
    msg.timestep = 0.0393733172758;

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
    msg.setTimeStamp(0.0657997481881);
    msg.setSource(17514U);
    msg.setSourceEntity(68U);
    msg.setDestination(23457U);
    msg.setDestinationEntity(161U);
    msg.time = 0.607330870887;
    msg.x = 0.621173372217;
    msg.y = 0.839116362338;
    msg.z = 0.494127544692;

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
    msg.setTimeStamp(0.394198594847);
    msg.setSource(60489U);
    msg.setSourceEntity(88U);
    msg.setDestination(37087U);
    msg.setDestinationEntity(177U);
    msg.time = 0.682691892792;
    msg.x = 0.687362082761;
    msg.y = 0.127015998348;
    msg.z = 0.549323318885;

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
    msg.setTimeStamp(0.758420777077);
    msg.setSource(17060U);
    msg.setSourceEntity(129U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(74U);
    msg.time = 0.678287457009;
    msg.x = 0.101223290511;
    msg.y = 0.888048673662;
    msg.z = 0.582324721552;

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
    msg.setTimeStamp(0.254768077517);
    msg.setSource(19692U);
    msg.setSourceEntity(169U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(237U);
    msg.time = 0.619356019097;
    msg.x = 0.76079106791;
    msg.y = 0.856476692098;
    msg.z = 0.490972707678;

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
    msg.setTimeStamp(0.620066853639);
    msg.setSource(25757U);
    msg.setSourceEntity(103U);
    msg.setDestination(10573U);
    msg.setDestinationEntity(211U);
    msg.time = 0.0852997756101;
    msg.x = 0.214043178208;
    msg.y = 0.311626808737;
    msg.z = 0.707777537664;

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
    msg.setTimeStamp(0.353141088175);
    msg.setSource(54699U);
    msg.setSourceEntity(58U);
    msg.setDestination(41487U);
    msg.setDestinationEntity(165U);
    msg.time = 0.456528877804;
    msg.x = 0.954581015937;
    msg.y = 0.823082710055;
    msg.z = 0.805116141618;

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
    msg.setTimeStamp(0.354138362184);
    msg.setSource(42931U);
    msg.setSourceEntity(214U);
    msg.setDestination(32144U);
    msg.setDestinationEntity(65U);
    msg.time = 0.241022678165;
    msg.x = 0.600083805862;
    msg.y = 0.420650755747;
    msg.z = 0.400946304385;

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
    msg.setTimeStamp(0.711440676564);
    msg.setSource(33150U);
    msg.setSourceEntity(179U);
    msg.setDestination(27742U);
    msg.setDestinationEntity(128U);
    msg.time = 0.295505276909;
    msg.x = 0.624478256534;
    msg.y = 0.291549373725;
    msg.z = 0.866123344832;

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
    msg.setTimeStamp(0.78528225425);
    msg.setSource(12244U);
    msg.setSourceEntity(213U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(9U);
    msg.time = 0.3669980076;
    msg.x = 0.988337860867;
    msg.y = 0.429515727724;
    msg.z = 0.0613299125535;

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
    msg.setTimeStamp(0.91935034192);
    msg.setSource(48396U);
    msg.setSourceEntity(208U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(244U);
    msg.validity = 122U;
    msg.x = 0.115893970229;
    msg.y = 0.807178759544;
    msg.z = 0.459784802368;

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
    msg.setTimeStamp(0.371410351853);
    msg.setSource(21695U);
    msg.setSourceEntity(200U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(20U);
    msg.validity = 223U;
    msg.x = 0.0407889517419;
    msg.y = 0.831572521053;
    msg.z = 0.378905809348;

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
    msg.setTimeStamp(0.553086040507);
    msg.setSource(17793U);
    msg.setSourceEntity(150U);
    msg.setDestination(4314U);
    msg.setDestinationEntity(194U);
    msg.validity = 58U;
    msg.x = 0.290920252212;
    msg.y = 0.846444125975;
    msg.z = 0.207740325417;

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
    msg.setTimeStamp(0.453234722348);
    msg.setSource(33992U);
    msg.setSourceEntity(93U);
    msg.setDestination(43289U);
    msg.setDestinationEntity(59U);
    msg.validity = 190U;
    msg.x = 0.573161973186;
    msg.y = 0.964699295018;
    msg.z = 0.0995840000049;

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
    msg.setTimeStamp(0.456448342);
    msg.setSource(64711U);
    msg.setSourceEntity(142U);
    msg.setDestination(39608U);
    msg.setDestinationEntity(144U);
    msg.validity = 176U;
    msg.x = 0.126834973845;
    msg.y = 0.469176213869;
    msg.z = 0.418545070678;

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
    msg.setTimeStamp(0.290118793588);
    msg.setSource(27451U);
    msg.setSourceEntity(240U);
    msg.setDestination(48306U);
    msg.setDestinationEntity(102U);
    msg.validity = 185U;
    msg.x = 0.286556179114;
    msg.y = 0.0332532886517;
    msg.z = 0.447078030482;

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
    msg.setTimeStamp(0.0330837558424);
    msg.setSource(18767U);
    msg.setSourceEntity(71U);
    msg.setDestination(6099U);
    msg.setDestinationEntity(9U);
    msg.time = 0.96479154674;
    msg.x = 0.508557680099;
    msg.y = 0.145584516556;
    msg.z = 0.443344393808;

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
    msg.setTimeStamp(0.213893105278);
    msg.setSource(1896U);
    msg.setSourceEntity(150U);
    msg.setDestination(2665U);
    msg.setDestinationEntity(80U);
    msg.time = 0.774750823795;
    msg.x = 0.922355361157;
    msg.y = 0.695904307841;
    msg.z = 0.0362165550188;

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
    msg.setTimeStamp(0.59136206823);
    msg.setSource(56278U);
    msg.setSourceEntity(45U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(143U);
    msg.time = 0.459886115549;
    msg.x = 0.371569102446;
    msg.y = 0.41168820091;
    msg.z = 0.996805785;

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
    msg.setTimeStamp(0.460705950967);
    msg.setSource(50536U);
    msg.setSourceEntity(232U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(42U);
    msg.validity = 74U;
    msg.value = 0.979930051366;

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
    msg.setTimeStamp(0.178090201196);
    msg.setSource(2799U);
    msg.setSourceEntity(56U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(125U);
    msg.validity = 157U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.266303515025;
    tmp_msg_0.y = 0.153938526722;
    tmp_msg_0.z = 0.585971663716;
    tmp_msg_0.phi = 0.64736138944;
    tmp_msg_0.theta = 0.933738902441;
    tmp_msg_0.psi = 0.840215728902;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.610372316462;

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
    msg.setTimeStamp(0.557008794154);
    msg.setSource(61421U);
    msg.setSourceEntity(252U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(153U);
    msg.validity = 230U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.57030773377;
    tmp_msg_0.y = 0.831270428597;
    tmp_msg_0.z = 0.889660411017;
    tmp_msg_0.phi = 0.33677280959;
    tmp_msg_0.theta = 0.056596671795;
    tmp_msg_0.psi = 0.744351324403;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.716809487746;

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
    msg.setTimeStamp(0.947908340967);
    msg.setSource(3060U);
    msg.setSourceEntity(70U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(32U);
    msg.value = 0.35501744806;

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
    msg.setTimeStamp(0.679887805873);
    msg.setSource(10770U);
    msg.setSourceEntity(145U);
    msg.setDestination(17299U);
    msg.setDestinationEntity(178U);
    msg.value = 0.588858487756;

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
    msg.setTimeStamp(0.638155449989);
    msg.setSource(31812U);
    msg.setSourceEntity(215U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(35U);
    msg.value = 0.171797491544;

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
    msg.setTimeStamp(0.660085376113);
    msg.setSource(28451U);
    msg.setSourceEntity(182U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0836133068491;

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
    msg.setTimeStamp(0.394928545849);
    msg.setSource(54387U);
    msg.setSourceEntity(94U);
    msg.setDestination(54007U);
    msg.setDestinationEntity(204U);
    msg.value = 0.760777366037;

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
    msg.setTimeStamp(0.540086651719);
    msg.setSource(9418U);
    msg.setSourceEntity(71U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(60U);
    msg.value = 0.670275976736;

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
    msg.setTimeStamp(0.704556454697);
    msg.setSource(17880U);
    msg.setSourceEntity(1U);
    msg.setDestination(33234U);
    msg.setDestinationEntity(166U);
    msg.value = 0.932069959102;

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
    msg.setTimeStamp(0.38549029633);
    msg.setSource(52403U);
    msg.setSourceEntity(58U);
    msg.setDestination(23087U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0588039053037;

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
    msg.setTimeStamp(0.130402142551);
    msg.setSource(54539U);
    msg.setSourceEntity(61U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(221U);
    msg.value = 0.58363961212;

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
    msg.setTimeStamp(0.517120864847);
    msg.setSource(36117U);
    msg.setSourceEntity(171U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(100U);
    msg.value = 0.779346619144;

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
    msg.setTimeStamp(0.849914745696);
    msg.setSource(53498U);
    msg.setSourceEntity(165U);
    msg.setDestination(57984U);
    msg.setDestinationEntity(170U);
    msg.value = 0.437110784992;

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
    msg.setTimeStamp(0.383503217069);
    msg.setSource(63320U);
    msg.setSourceEntity(103U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0306609666316;

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
    msg.setTimeStamp(0.357625227505);
    msg.setSource(5552U);
    msg.setSourceEntity(73U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(115U);
    msg.value = 0.325613623414;

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
    msg.setTimeStamp(0.183316096279);
    msg.setSource(44782U);
    msg.setSourceEntity(89U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(48U);
    msg.value = 0.737287169405;

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
    msg.setTimeStamp(0.033990932098);
    msg.setSource(49243U);
    msg.setSourceEntity(239U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(224U);
    msg.value = 0.840615496376;

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
    msg.setTimeStamp(0.956661601395);
    msg.setSource(12828U);
    msg.setSourceEntity(145U);
    msg.setDestination(51237U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0965328563295;

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
    msg.setTimeStamp(0.789716012766);
    msg.setSource(53445U);
    msg.setSourceEntity(79U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(124U);
    msg.value = 0.394026697048;

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
    msg.setTimeStamp(0.026333681952);
    msg.setSource(10356U);
    msg.setSourceEntity(195U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(158U);
    msg.value = 0.913178898774;

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
    msg.setTimeStamp(0.640518801729);
    msg.setSource(17529U);
    msg.setSourceEntity(210U);
    msg.setDestination(55744U);
    msg.setDestinationEntity(179U);
    msg.value = 0.037122365814;

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
    msg.setTimeStamp(0.595305634676);
    msg.setSource(45556U);
    msg.setSourceEntity(131U);
    msg.setDestination(46882U);
    msg.setDestinationEntity(127U);
    msg.value = 0.640859307284;

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
    msg.setTimeStamp(0.229683246925);
    msg.setSource(31442U);
    msg.setSourceEntity(27U);
    msg.setDestination(11951U);
    msg.setDestinationEntity(144U);
    msg.value = 0.425671357027;

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
    msg.setTimeStamp(0.476483421701);
    msg.setSource(10443U);
    msg.setSourceEntity(195U);
    msg.setDestination(29380U);
    msg.setDestinationEntity(241U);
    msg.value = 0.63003727955;

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
    msg.setTimeStamp(0.945448692428);
    msg.setSource(47642U);
    msg.setSourceEntity(1U);
    msg.setDestination(23324U);
    msg.setDestinationEntity(138U);
    msg.value = 0.953770530561;

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
    msg.setTimeStamp(0.790068266083);
    msg.setSource(63366U);
    msg.setSourceEntity(240U);
    msg.setDestination(32497U);
    msg.setDestinationEntity(47U);
    msg.value = 0.565216855251;

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
    msg.setTimeStamp(0.0535779881315);
    msg.setSource(60604U);
    msg.setSourceEntity(18U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(249U);
    msg.direction = 0.182976854369;
    msg.speed = 0.0142240219581;
    msg.turbulence = 0.80503522485;

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
    msg.setTimeStamp(0.609371039582);
    msg.setSource(42221U);
    msg.setSourceEntity(105U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(156U);
    msg.direction = 0.89272415752;
    msg.speed = 0.50989893345;
    msg.turbulence = 0.997853652182;

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
    msg.setTimeStamp(0.0159566723308);
    msg.setSource(560U);
    msg.setSourceEntity(133U);
    msg.setDestination(729U);
    msg.setDestinationEntity(183U);
    msg.direction = 0.527161497087;
    msg.speed = 0.0459148137239;
    msg.turbulence = 0.21400999678;

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
    msg.setTimeStamp(0.0445664149366);
    msg.setSource(22948U);
    msg.setSourceEntity(28U);
    msg.setDestination(63313U);
    msg.setDestinationEntity(112U);
    msg.value = 0.350578617555;

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
    msg.setTimeStamp(0.364665811893);
    msg.setSource(16602U);
    msg.setSourceEntity(115U);
    msg.setDestination(26796U);
    msg.setDestinationEntity(10U);
    msg.value = 0.585567986852;

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
    msg.setTimeStamp(0.475494088796);
    msg.setSource(40732U);
    msg.setSourceEntity(173U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(120U);
    msg.value = 0.169307860186;

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
    msg.setTimeStamp(0.000530429225914);
    msg.setSource(48554U);
    msg.setSourceEntity(65U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(198U);
    msg.value.assign("RGGDTDIWPHGXICEGRBUNJQZWBEEEGAXTOWRETGHBYTTQRMZRILCFDPPEOFWHKABCBTSSTUQVGKFONY");

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
    msg.setTimeStamp(0.451420777529);
    msg.setSource(18455U);
    msg.setSourceEntity(218U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(172U);
    msg.value.assign("KMATSFXERXRIBOFQFZUGZEVYGBULECBWHBWQNBUMQMJPXSTPVNKWQAFKEOTUWYBDBZFAHNUQOCSQHCETPVIJIWLRDIWGMYPGDNHDS");

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
    msg.setTimeStamp(0.29290883079);
    msg.setSource(29696U);
    msg.setSourceEntity(192U);
    msg.setDestination(25338U);
    msg.setDestinationEntity(8U);
    msg.value.assign("SOKTXXREMEATXWVUZWYKCVOTZWYURLJZGBCEVZFUBKZETYDATBDIMSHBNFLUWPDNSKRXHGLGTGKSBLAGQDQAMQUPSXDYTGHIYOIHSAEBQVSXRPUIXDPAOLIROCGWSUUDKRVIVJJVZMNRWHL");

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
    msg.setTimeStamp(0.530883003341);
    msg.setSource(1917U);
    msg.setSourceEntity(50U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(84U);
    const char tmp_msg_0[] = {78, 13, -60, 39, -66, -60, -119, 106, 26, -27, 117, 72, 3, 81, -91, -30, 101, -114, -77, -79, -119, -64, 124, -105, 92, 25, 81, -1, -104, -15, 30, 121, -36, -87, -62, -78, 68, -121, -5, 40, -128, -6, -25, -61, -38, -120, -126, 60, -58, -57, -115, -58, -83, 26, 67, 126, 71, -77, -38, 33, 41, 96, -1, -93, -95, -125, -47, -4, -91, 2, 29, -43, 117, 22, 99, 124, 87, 34, 2, -39, 31, -122, 66, 35, -24, -126, 68, -70, -82, -6};
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
    msg.setTimeStamp(0.647554845548);
    msg.setSource(50439U);
    msg.setSourceEntity(3U);
    msg.setDestination(54738U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {-124, -50, 99, -39, -68, 10, 105, -57, 29, 84, -50, 36, -1, -16, -91, 42, 106, 73, -14, 90, 100, -45, 78, 77, -119, -98, 73, 88, -76, -50, -73, 33, -69, 32, 75, 54, -51, -102, 87, -120, 104, 124, 78, -84, -6, 126, -21, 83, 88, 38, 90, 62, -52, -116, 95, -34, 92, -40, -88, 79, 74, -114, 113, -24, -109, 101, 73, -65, 101, -118, -94, -66, -39, 7, -48, -100, -2, -1, -115, -120, -14, 102, -66, -28, 90, -75, 5, -20, 54, -43, -44, 29, 107, -5, -30, -63, 1, -77, -41, -10, 22, 9, -15, -40, -56, 78, 79, -19, 39, 70, -112, -26, -62, -95, -78, -60, 10, 93, -127, 122, -59, -46, 76, -52, 23, -61, 68, 61, 8, 64, -48, -21, 59, -63, -24, 75, 38, -57, -87, -79, -99, -49, -14, 111, -118, -73, 88, 4, -83, -2, 111, -62, -78, 2, -128, -83, -115, 66, 9, -121, 18};
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
    msg.setTimeStamp(0.227909719704);
    msg.setSource(63189U);
    msg.setSourceEntity(105U);
    msg.setDestination(44682U);
    msg.setDestinationEntity(85U);
    const char tmp_msg_0[] = {39, -100, 48, 44, -108, 44, 96, -45, 13, 102, -16, -56, 89, -30, -42, 125, -122, 78, -124, -80, 61, 93, -104, -102, 70, 71, 65, -11, 107, -86, -68, -105, 126, 96, 104, 84, 108, 72, -77, 36, -17, 119, 23, -111, -59, 49, 73, 98, 14, 64, 89, -10, -63, -53, 93, 73, 2, -126, -52, 114, -43, 72, -83, 50, 72, 52, 48, 65, 120, -123, -16, 14, -66, 48, -26, -123, -48, 77, 109, 50, -17, 98, -66, -94, -78, 7, -13, 41, -73, -49, 15, 44, 99, 117, -63, 84, 105, 5, 65, 43, -90, -48, 62, -42, 115, -26, -119, -72, 11, -37, 68, -72, -103, -57, 74, -88, 61, 53, 34, 66, -38, -84, -23, -41, 114, 116, 118, 31, 34, 58, 118, -81, 60, -54, 12, -16, 81, -43, 10, -92, 64, -104, -24, -125, 37, -84, 1, 115, 98, 36, 21, 27, -69, -27, 88, -127, 118, -76, -89, 50, -103, 63, -43, 32, -88, -117, 38, 20, 16, -54, 105, -84, 54, 79, -114, -55, -35, 16, 50, 88, 17, 9, 0, -86, -32, 88, 90, 77, 112, 55, -33, -60, 18, 62, 21, -17, 66, 115, -99, -29, -103};
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
    msg.setTimeStamp(0.771736587974);
    msg.setSource(9705U);
    msg.setSourceEntity(103U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(190U);
    msg.type = 168U;
    msg.frequency = 56551287U;
    msg.min_range = 24611U;
    msg.max_range = 36899U;
    msg.bits_per_point = 188U;
    msg.scale_factor = 0.880491212255;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.351449316804;
    tmp_msg_0.beam_height = 0.943237429516;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {66, 118, 37, 56, -2, -60, -127, -32, 12, -69, -30, -19, -101, 50, 113, 83, -127, -75, -46, -39, 61, -32, 17, 49, -45, 100, -49, -23, -38, -71, -120, -68, 87, 32, 97, -11, 83, 37, -96, 79, -120, 52, -113, 100, -15, 64, -107, 39, -4, -31, -24, -96, 88, 121, -93, 46, 78, -29, 58, -125, 121, 76, 61, 119, 14, -97, 98, 51, -53, 123, 7, 2, -97, 87, -2, 94, -66, 63, -43, -39, 56, 21, -19, -59, -117, 125, 79, 57, 124, 68, -39, -40, -20, 105, 0, 62, -53, -124, -93, 12, -80, 29, 6, 119, 104, 78, 96, -126, -37, -30, -123, 106, 78, 64, -62, 16, -4, -24, 48, -4, 48, -17, 81, -15, 45, 27, -52, -66, -62, -36, 82};
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
    msg.setTimeStamp(0.406365008307);
    msg.setSource(3254U);
    msg.setSourceEntity(137U);
    msg.setDestination(16408U);
    msg.setDestinationEntity(41U);
    msg.type = 152U;
    msg.frequency = 2555148126U;
    msg.min_range = 43946U;
    msg.max_range = 62953U;
    msg.bits_per_point = 2U;
    msg.scale_factor = 0.167298501147;
    const char tmp_msg_0[] = {-51, 110, -39, 46, 25, -19, -101, -1, -118, -63, 19, -122, -97, -16, -128, 96, -41, -25, 79, -102, 10, 9, 49, 33, -90, -52, 4, -79, 77, -69, -42, 84, -126, -125, -111, 69, -106, 98, 109, -1, -32, -123, -27, -75, -23, -55, -18, 6, -30, 21, 67, 59, -63, 32, 58, 27, 24, -10, -8, -68, -113, 28, 94, 37, -21, 9, -2, -115, -27, 108, 81, -68, 36, -74, -3, -112, -76, -95, -20, 98, -52, -109, -112, -50, -3, 43, -5, 61, -90, -68, -72, -112, -67, 99, -77, -58, -23, 21, 40, -7, 92, -69, 25, -83, 108, -110, -102, 124, 38, 102, -89, -51, 33, 26, -17, -99, -102, -82, 88, 51, -121, 18, -102, -32, 62, 63, -13, -125, 103, 60, 124, -69, 41, -35, -86, 13, 96, 45, 109, 119, 33, -111, -5, -44, 78, -106, -69, 75, 34, 29, -25, -36, -115, -37, 88, 6, 42, 104, -90, 41, 106, -30, 124, 7, -5, 34, -122, 98, -90, 112, -120, 9, -121, -96, 28, 9, -119, -52, 49, 45, 106, -55, 60, 116, 22, 67, -7, 84, 77, 72, -39, 100, -108, 124, -119, 62, -65, 99, 99, -72, -125, -36, 87, 1, 15, -18, -76, 96, -11, -102, -51, 45, 122, 70, 61, 100, 104, -7, 25, 57, -44, 43, -107, 26, 106, -92, -87, 100, 64, -95, -58, -9, 38, -113, 103, -15, 95, 94, 57, -103, 123, 35, -65, -80, -78, -18};
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
    msg.setTimeStamp(0.533708022434);
    msg.setSource(34041U);
    msg.setSourceEntity(42U);
    msg.setDestination(24105U);
    msg.setDestinationEntity(84U);
    msg.type = 2U;
    msg.frequency = 2296587142U;
    msg.min_range = 19176U;
    msg.max_range = 51502U;
    msg.bits_per_point = 95U;
    msg.scale_factor = 0.750936569438;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.61075018629;
    tmp_msg_0.beam_height = 0.829971104079;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-67, -35, 5, 8, -56, 70, 114, 33, -50, -23, 49, 84, -83, -121, -72, -48, -67, 84, -77, -110, -43, 19, -113, 115, -60, -71, -19, 87, 12, 105, -96, 34, 27, 11, 88, -19, -81, -11, 64, 11, -33, 36, -30, -74, 37, 14, 44, -68, -43, 35, 82, -5, -121, -71, -16, -119, -41, 103, 41, 71, -82, -50, -38, 29, -68, -103, -23, 119, -25, 77, -38, -7, -7, -101, 73, 12, -113, -114, -52, 116, -27, 14, -40, -105, 23, -6, 55, -16, 101, -65, 46, -84, 10, 108, -22, 36, 11, -34, 0, -95, 32, -115, -122, 63, -5, 96, 15, -104, -79, -77, 26, 42, 91, 23, 81, 52, 3, -110, -1, -110, 24, 121, -95, -84, -52, 91, 91, 7, -103, -6, 30, 63, -128, 36, -103, 14, -49, -34, 50, -123, -48, -122, 16, 82, 49, -96, 36, 15, -101, 32, 50, -52, 114, 35, 23, 83, -45, 43, 82, -74, 20, 33, 108, 3, -85, 33, 63, 23, 28, -100, -15, -37, -85, -36, 89, -81, -23, 114, -122, -97, -6, 53, -27, 60, 121, 76, 10, 5, -46, 47, -10, 15, 78, -128, 38, 80, -128, -58, -99, 31, 123, -78, -27, -90, -2, -61, 49, -125, -100, -44, -34, -104, -63, -120, 108, 65, -21, 33, 90, 107, 56, -64, 10, -117, 58, 47, 93, 81, -60, 118};
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
    msg.setTimeStamp(0.206502052692);
    msg.setSource(25212U);
    msg.setSourceEntity(45U);
    msg.setDestination(56447U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.176636591495);
    msg.setSource(54720U);
    msg.setSourceEntity(22U);
    msg.setDestination(48345U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.768614832883);
    msg.setSource(4446U);
    msg.setSourceEntity(201U);
    msg.setDestination(35809U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.937332857886);
    msg.setSource(46251U);
    msg.setSourceEntity(135U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(86U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.648754795599);
    msg.setSource(42861U);
    msg.setSourceEntity(60U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(59U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.827205460722);
    msg.setSource(37286U);
    msg.setSourceEntity(108U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(133U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.097891965633);
    msg.setSource(25593U);
    msg.setSourceEntity(132U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(171U);
    msg.value = 0.333881076661;
    msg.confidence = 0.327157850162;
    msg.opmodes.assign("UAZDTKLBDPQSTHBVWNTOFAVXIWWOCGOCLYTFMJURNSGHNMLFOURDCSUQEXJHYBDXCDLRGCWEFXNTTKBEKXYIVIJERJNVQZHRMMSIZOAPOEUMYWKINBEUQPALLLWAGGPVTSNNIGVGRQLPYSSKOGRXKTDYNHUMYJVHTXTBUIXZYWWXUHFMPALZWHYWKZBQOGPCHPJKARVBJSFQEJARKZ");

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
    msg.setTimeStamp(0.511864308584);
    msg.setSource(30266U);
    msg.setSourceEntity(29U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(222U);
    msg.value = 0.750707300851;
    msg.confidence = 0.593707147152;
    msg.opmodes.assign("ZDRNOEUABGCTCJNNTYWGMEGFLDGMHWXRMWIKRKSEBBCWUPZGJLFIQGSQGLCWUDMDJLFX");

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
    msg.setTimeStamp(0.127852801814);
    msg.setSource(34200U);
    msg.setSourceEntity(198U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(182U);
    msg.value = 0.55940150965;
    msg.confidence = 0.166635675279;
    msg.opmodes.assign("RQPIGFNATLSYVWROWMAHEFEISVWWRXTJZQEJGCTERHKZDSGJVUIKNEIXFETNKDWXGUQJUDAAHSYBPCNIOMISUGKJSVPVTCVTRNLAPZODOZPWMRBEAPLLMQ");

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
    msg.setTimeStamp(0.318739959212);
    msg.setSource(65309U);
    msg.setSourceEntity(102U);
    msg.setDestination(34811U);
    msg.setDestinationEntity(245U);
    msg.itow = 2800139805U;
    msg.lat = 0.121042679721;
    msg.lon = 0.676022336686;
    msg.height_ell = 0.439017378869;
    msg.height_sea = 0.114322676355;
    msg.hacc = 0.41043489355;
    msg.vacc = 0.161276521576;
    msg.vel_n = 0.873081510252;
    msg.vel_e = 0.024385665593;
    msg.vel_d = 0.909963431351;
    msg.speed = 0.243565452807;
    msg.gspeed = 0.505922586012;
    msg.heading = 0.561127481023;
    msg.sacc = 0.807627710733;
    msg.cacc = 0.545954585385;

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
    msg.setTimeStamp(0.412279494488);
    msg.setSource(19453U);
    msg.setSourceEntity(200U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(125U);
    msg.itow = 3061758529U;
    msg.lat = 0.349508214254;
    msg.lon = 0.249731502939;
    msg.height_ell = 0.628958584072;
    msg.height_sea = 0.399047102638;
    msg.hacc = 0.343094495703;
    msg.vacc = 0.0723475315678;
    msg.vel_n = 0.995382716714;
    msg.vel_e = 0.392668547639;
    msg.vel_d = 0.044122617588;
    msg.speed = 0.364827133156;
    msg.gspeed = 0.699520254723;
    msg.heading = 0.600986041831;
    msg.sacc = 0.894680287241;
    msg.cacc = 0.549553775266;

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
    msg.setTimeStamp(0.0223198481208);
    msg.setSource(54555U);
    msg.setSourceEntity(22U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(32U);
    msg.itow = 1170790897U;
    msg.lat = 0.67618832762;
    msg.lon = 0.737792188691;
    msg.height_ell = 0.572648088155;
    msg.height_sea = 0.279233334159;
    msg.hacc = 0.156813604135;
    msg.vacc = 0.522274172765;
    msg.vel_n = 0.867314428177;
    msg.vel_e = 0.0501640954136;
    msg.vel_d = 0.479349318828;
    msg.speed = 0.177272533912;
    msg.gspeed = 0.317317280263;
    msg.heading = 0.0337579942984;
    msg.sacc = 0.954868052865;
    msg.cacc = 0.347251923644;

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
    msg.setTimeStamp(0.663296928179);
    msg.setSource(10981U);
    msg.setSourceEntity(28U);
    msg.setDestination(15852U);
    msg.setDestinationEntity(24U);
    msg.id = 149U;
    msg.value = 0.132505146003;

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
    msg.setTimeStamp(0.0458415461662);
    msg.setSource(1739U);
    msg.setSourceEntity(215U);
    msg.setDestination(62063U);
    msg.setDestinationEntity(223U);
    msg.id = 39U;
    msg.value = 0.317463721739;

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
    msg.setTimeStamp(0.636785120666);
    msg.setSource(48875U);
    msg.setSourceEntity(122U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(207U);
    msg.id = 20U;
    msg.value = 0.812639833113;

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
    msg.setTimeStamp(0.030273931433);
    msg.setSource(31919U);
    msg.setSourceEntity(131U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(63U);
    msg.x = 0.111745095172;
    msg.y = 0.153743526063;
    msg.z = 0.151671634609;
    msg.phi = 0.498446095474;
    msg.theta = 0.904323907885;
    msg.psi = 0.709809479042;

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
    msg.setTimeStamp(0.814801779794);
    msg.setSource(3407U);
    msg.setSourceEntity(31U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(97U);
    msg.x = 0.422688716234;
    msg.y = 0.639943316102;
    msg.z = 0.0881391396888;
    msg.phi = 0.730924469689;
    msg.theta = 0.638867284341;
    msg.psi = 0.836163156175;

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
    msg.setTimeStamp(0.925827747246);
    msg.setSource(29691U);
    msg.setSourceEntity(230U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(12U);
    msg.x = 0.911388220622;
    msg.y = 0.633678424681;
    msg.z = 0.409898166359;
    msg.phi = 0.793099914749;
    msg.theta = 0.629297325072;
    msg.psi = 0.132911960807;

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
    msg.setTimeStamp(0.320704640162);
    msg.setSource(47818U);
    msg.setSourceEntity(196U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.379639809887;
    msg.beam_height = 0.553293911026;

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
    msg.setTimeStamp(0.48185464736);
    msg.setSource(16923U);
    msg.setSourceEntity(254U);
    msg.setDestination(37650U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.122199048673;
    msg.beam_height = 0.439125871267;

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
    msg.setTimeStamp(0.961450895472);
    msg.setSource(21305U);
    msg.setSourceEntity(223U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(15U);
    msg.beam_width = 0.780408850842;
    msg.beam_height = 0.736121656397;

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
    msg.setTimeStamp(0.198615244176);
    msg.setSource(15554U);
    msg.setSourceEntity(96U);
    msg.setDestination(21970U);
    msg.setDestinationEntity(29U);
    msg.sane = 217U;

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
    msg.setTimeStamp(0.819223245004);
    msg.setSource(41374U);
    msg.setSourceEntity(107U);
    msg.setDestination(52245U);
    msg.setDestinationEntity(213U);
    msg.sane = 156U;

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
    msg.setTimeStamp(0.321250239256);
    msg.setSource(41517U);
    msg.setSourceEntity(206U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(241U);
    msg.sane = 81U;

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
    msg.setTimeStamp(0.71966793766);
    msg.setSource(9535U);
    msg.setSourceEntity(41U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(227U);
    msg.value = 0.492460681308;

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
    msg.setTimeStamp(0.197587984891);
    msg.setSource(27280U);
    msg.setSourceEntity(44U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(55U);
    msg.value = 0.245378683515;

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
    msg.setTimeStamp(0.752036897583);
    msg.setSource(36742U);
    msg.setSourceEntity(141U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(101U);
    msg.value = 0.83757105614;

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
    msg.setTimeStamp(0.803427864014);
    msg.setSource(20735U);
    msg.setSourceEntity(0U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(48U);
    msg.value = 0.460058409539;

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
    msg.setTimeStamp(0.4918605921);
    msg.setSource(29420U);
    msg.setSourceEntity(93U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0712707290116;

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
    msg.setTimeStamp(0.485086452328);
    msg.setSource(52252U);
    msg.setSourceEntity(62U);
    msg.setDestination(34323U);
    msg.setDestinationEntity(3U);
    msg.value = 0.266693768802;

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
    msg.setTimeStamp(0.86689286336);
    msg.setSource(18929U);
    msg.setSourceEntity(190U);
    msg.setDestination(27038U);
    msg.setDestinationEntity(127U);
    msg.value = 0.112210424248;

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
    msg.setTimeStamp(0.721948652547);
    msg.setSource(13693U);
    msg.setSourceEntity(54U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(173U);
    msg.value = 0.719673986567;

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
    msg.setTimeStamp(0.643110908828);
    msg.setSource(49091U);
    msg.setSourceEntity(105U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(66U);
    msg.value = 0.556705518097;

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
    msg.setTimeStamp(0.225001367367);
    msg.setSource(59192U);
    msg.setSourceEntity(68U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0901081584194;

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
    msg.setTimeStamp(0.328737930999);
    msg.setSource(7243U);
    msg.setSourceEntity(185U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(92U);
    msg.value = 0.113295685154;

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
    msg.setTimeStamp(0.251724951728);
    msg.setSource(17472U);
    msg.setSourceEntity(44U);
    msg.setDestination(21981U);
    msg.setDestinationEntity(96U);
    msg.value = 0.309810408034;

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
    msg.setTimeStamp(0.758617870194);
    msg.setSource(37623U);
    msg.setSourceEntity(179U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(252U);
    msg.value = 0.560049803708;

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
    msg.setTimeStamp(0.71035010664);
    msg.setSource(65409U);
    msg.setSourceEntity(43U);
    msg.setDestination(42548U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0361844977219;

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
    msg.setTimeStamp(0.694790459216);
    msg.setSource(63301U);
    msg.setSourceEntity(127U);
    msg.setDestination(35748U);
    msg.setDestinationEntity(252U);
    msg.value = 0.36591640352;

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
    msg.setTimeStamp(0.502953825518);
    msg.setSource(9255U);
    msg.setSourceEntity(9U);
    msg.setDestination(7156U);
    msg.setDestinationEntity(213U);
    msg.value = 0.282875382958;

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
    msg.setTimeStamp(0.776718181641);
    msg.setSource(39725U);
    msg.setSourceEntity(174U);
    msg.setDestination(27021U);
    msg.setDestinationEntity(31U);
    msg.value = 0.774693138683;

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
    msg.setTimeStamp(0.139132254107);
    msg.setSource(56604U);
    msg.setSourceEntity(198U);
    msg.setDestination(9832U);
    msg.setDestinationEntity(175U);
    msg.value = 0.686421672777;

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
    msg.setTimeStamp(0.194634875524);
    msg.setSource(57974U);
    msg.setSourceEntity(115U);
    msg.setDestination(5596U);
    msg.setDestinationEntity(50U);
    msg.value = 0.215072400317;

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
    msg.setTimeStamp(0.757686918164);
    msg.setSource(6029U);
    msg.setSourceEntity(224U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(91U);
    msg.value = 0.822788247018;

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
    msg.setTimeStamp(0.17202373579);
    msg.setSource(4805U);
    msg.setSourceEntity(78U);
    msg.setDestination(37154U);
    msg.setDestinationEntity(14U);
    msg.value = 0.392741250243;

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
    msg.setTimeStamp(0.556501239583);
    msg.setSource(16258U);
    msg.setSourceEntity(217U);
    msg.setDestination(15562U);
    msg.setDestinationEntity(90U);
    msg.value = 0.710239559359;

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
    msg.setTimeStamp(0.0719065692478);
    msg.setSource(642U);
    msg.setSourceEntity(131U);
    msg.setDestination(35448U);
    msg.setDestinationEntity(198U);
    msg.value = 0.29917210984;

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
    msg.setTimeStamp(0.0433387513319);
    msg.setSource(11687U);
    msg.setSourceEntity(102U);
    msg.setDestination(57223U);
    msg.setDestinationEntity(143U);
    msg.value = 0.523773873276;

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
    msg.setTimeStamp(0.983678163191);
    msg.setSource(39189U);
    msg.setSourceEntity(34U);
    msg.setDestination(34384U);
    msg.setDestinationEntity(26U);
    msg.validity = 63678U;
    msg.type = 36U;
    msg.tow = 3046789931U;
    msg.base_lat = 0.544715944351;
    msg.base_lon = 0.127163908072;
    msg.base_height = 0.609683160594;
    msg.n = 0.945661358742;
    msg.e = 0.996671794376;
    msg.d = 0.193105668448;
    msg.v_n = 0.517282008089;
    msg.v_e = 0.804220258979;
    msg.v_d = 0.658036372023;
    msg.satellites = 73U;
    msg.iar_hyp = 63812U;
    msg.iar_ratio = 0.530352090407;

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
    msg.setTimeStamp(0.514390658717);
    msg.setSource(61116U);
    msg.setSourceEntity(141U);
    msg.setDestination(62733U);
    msg.setDestinationEntity(182U);
    msg.validity = 51894U;
    msg.type = 100U;
    msg.tow = 3227735411U;
    msg.base_lat = 0.348223019795;
    msg.base_lon = 0.516128668771;
    msg.base_height = 0.950113898126;
    msg.n = 0.417950037383;
    msg.e = 0.387773679358;
    msg.d = 0.649544865453;
    msg.v_n = 0.600689764581;
    msg.v_e = 0.743651424212;
    msg.v_d = 0.197536780823;
    msg.satellites = 181U;
    msg.iar_hyp = 51385U;
    msg.iar_ratio = 0.262301859819;

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
    msg.setTimeStamp(0.616415608974);
    msg.setSource(40726U);
    msg.setSourceEntity(108U);
    msg.setDestination(31624U);
    msg.setDestinationEntity(166U);
    msg.validity = 62525U;
    msg.type = 1U;
    msg.tow = 247065179U;
    msg.base_lat = 0.448537125166;
    msg.base_lon = 0.739295937847;
    msg.base_height = 0.814223194072;
    msg.n = 0.13764201358;
    msg.e = 0.527906743676;
    msg.d = 0.542142190519;
    msg.v_n = 0.283649239036;
    msg.v_e = 0.995290884049;
    msg.v_d = 0.886185369018;
    msg.satellites = 190U;
    msg.iar_hyp = 49054U;
    msg.iar_ratio = 0.229282493062;

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
    msg.setTimeStamp(0.649132465315);
    msg.setSource(16145U);
    msg.setSourceEntity(176U);
    msg.setDestination(34362U);
    msg.setDestinationEntity(156U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.149243455867;
    tmp_msg_0.lon = 0.114655318813;
    tmp_msg_0.height = 0.602790326455;
    tmp_msg_0.x = 0.671072270482;
    tmp_msg_0.y = 0.905223766393;
    tmp_msg_0.z = 0.0107180482172;
    tmp_msg_0.phi = 0.0472517210455;
    tmp_msg_0.theta = 0.30997094073;
    tmp_msg_0.psi = 0.397814369282;
    tmp_msg_0.u = 0.73538364508;
    tmp_msg_0.v = 0.826006785425;
    tmp_msg_0.w = 0.262215445232;
    tmp_msg_0.vx = 0.90942837552;
    tmp_msg_0.vy = 0.0972894780368;
    tmp_msg_0.vz = 0.758043547045;
    tmp_msg_0.p = 0.960755333606;
    tmp_msg_0.q = 0.99484285552;
    tmp_msg_0.r = 0.00543632486922;
    tmp_msg_0.depth = 0.454963324885;
    tmp_msg_0.alt = 0.391864185621;
    msg.state.set(tmp_msg_0);
    msg.type = 57U;

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
    msg.setTimeStamp(0.906988848509);
    msg.setSource(16385U);
    msg.setSourceEntity(69U);
    msg.setDestination(23625U);
    msg.setDestinationEntity(74U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.977442395802;
    tmp_msg_0.lon = 0.984650032874;
    tmp_msg_0.height = 0.0704542915261;
    tmp_msg_0.x = 0.5323133486;
    tmp_msg_0.y = 0.050651379924;
    tmp_msg_0.z = 0.504398049932;
    tmp_msg_0.phi = 0.464675866204;
    tmp_msg_0.theta = 0.598058846048;
    tmp_msg_0.psi = 0.823903879728;
    tmp_msg_0.u = 0.579087895708;
    tmp_msg_0.v = 0.147355057596;
    tmp_msg_0.w = 0.654790862714;
    tmp_msg_0.vx = 0.104106114064;
    tmp_msg_0.vy = 0.764183803839;
    tmp_msg_0.vz = 0.0596813126833;
    tmp_msg_0.p = 0.835647176888;
    tmp_msg_0.q = 0.135746301562;
    tmp_msg_0.r = 0.386449912732;
    tmp_msg_0.depth = 0.0573363736647;
    tmp_msg_0.alt = 0.479207570534;
    msg.state.set(tmp_msg_0);
    msg.type = 54U;

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
    msg.setTimeStamp(0.573814524641);
    msg.setSource(63307U);
    msg.setSourceEntity(236U);
    msg.setDestination(16815U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.622748664715;
    tmp_msg_0.lon = 0.937774504372;
    tmp_msg_0.height = 0.132960018458;
    tmp_msg_0.x = 0.277847678361;
    tmp_msg_0.y = 0.754582674567;
    tmp_msg_0.z = 0.522398759679;
    tmp_msg_0.phi = 0.418578340106;
    tmp_msg_0.theta = 0.72750426207;
    tmp_msg_0.psi = 0.795529845175;
    tmp_msg_0.u = 0.207783127314;
    tmp_msg_0.v = 0.330257202836;
    tmp_msg_0.w = 0.418999072549;
    tmp_msg_0.vx = 0.890964861139;
    tmp_msg_0.vy = 0.11983912542;
    tmp_msg_0.vz = 0.877136905316;
    tmp_msg_0.p = 0.467076914391;
    tmp_msg_0.q = 0.607851925487;
    tmp_msg_0.r = 0.156586374065;
    tmp_msg_0.depth = 0.205763057166;
    tmp_msg_0.alt = 0.366682706216;
    msg.state.set(tmp_msg_0);
    msg.type = 192U;

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
    msg.setTimeStamp(0.229740763193);
    msg.setSource(31799U);
    msg.setSourceEntity(174U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(177U);
    msg.value = 0.751830228986;

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
    msg.setTimeStamp(0.113803284646);
    msg.setSource(57598U);
    msg.setSourceEntity(48U);
    msg.setDestination(6354U);
    msg.setDestinationEntity(123U);
    msg.value = 0.371405210036;

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
    msg.setTimeStamp(0.871516929153);
    msg.setSource(24638U);
    msg.setSourceEntity(13U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(13U);
    msg.value = 0.722432409965;

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
    msg.setTimeStamp(0.263090499393);
    msg.setSource(19427U);
    msg.setSourceEntity(8U);
    msg.setDestination(31440U);
    msg.setDestinationEntity(55U);
    msg.value = 0.689918609403;

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
    msg.setTimeStamp(0.88412584462);
    msg.setSource(14785U);
    msg.setSourceEntity(126U);
    msg.setDestination(44184U);
    msg.setDestinationEntity(39U);
    msg.value = 0.296036511719;

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
    msg.setTimeStamp(0.316780106168);
    msg.setSource(18336U);
    msg.setSourceEntity(63U);
    msg.setDestination(31244U);
    msg.setDestinationEntity(203U);
    msg.value = 0.479461815412;

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
    msg.setTimeStamp(0.290888522287);
    msg.setSource(44219U);
    msg.setSourceEntity(65U);
    msg.setDestination(20609U);
    msg.setDestinationEntity(46U);
    msg.value = 0.314821883737;

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
    msg.setTimeStamp(0.658712670915);
    msg.setSource(38415U);
    msg.setSourceEntity(245U);
    msg.setDestination(33354U);
    msg.setDestinationEntity(158U);
    msg.value = 0.229799468973;

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
    msg.setTimeStamp(0.365945767376);
    msg.setSource(41268U);
    msg.setSourceEntity(240U);
    msg.setDestination(13668U);
    msg.setDestinationEntity(72U);
    msg.value = 0.949133888188;

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
    msg.setTimeStamp(0.903608752441);
    msg.setSource(41167U);
    msg.setSourceEntity(23U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(71U);
    msg.value = 0.126550590203;

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
    msg.setTimeStamp(0.628303259998);
    msg.setSource(18650U);
    msg.setSourceEntity(51U);
    msg.setDestination(62750U);
    msg.setDestinationEntity(94U);
    msg.value = 0.495772823579;

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
    msg.setTimeStamp(0.593084622285);
    msg.setSource(36587U);
    msg.setSourceEntity(90U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(239U);
    msg.value = 0.495599683831;

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
    msg.setTimeStamp(0.300644596233);
    msg.setSource(27024U);
    msg.setSourceEntity(180U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(220U);
    msg.value = 0.373867226064;

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
    msg.setTimeStamp(0.0626904220556);
    msg.setSource(25664U);
    msg.setSourceEntity(203U);
    msg.setDestination(33975U);
    msg.setDestinationEntity(178U);
    msg.value = 0.459072228479;

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
    msg.setTimeStamp(0.427550857694);
    msg.setSource(64894U);
    msg.setSourceEntity(229U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(43U);
    msg.value = 0.849974111315;

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
    msg.setTimeStamp(0.616261392908);
    msg.setSource(10952U);
    msg.setSourceEntity(249U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(129U);
    msg.id = 45U;
    msg.zoom = 75U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.403303280416);
    msg.setSource(4524U);
    msg.setSourceEntity(13U);
    msg.setDestination(709U);
    msg.setDestinationEntity(250U);
    msg.id = 152U;
    msg.zoom = 23U;
    msg.action = 107U;

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
    msg.setTimeStamp(0.481540704408);
    msg.setSource(55590U);
    msg.setSourceEntity(234U);
    msg.setDestination(27930U);
    msg.setDestinationEntity(60U);
    msg.id = 145U;
    msg.zoom = 25U;
    msg.action = 120U;

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
    msg.setTimeStamp(0.651985705827);
    msg.setSource(19059U);
    msg.setSourceEntity(193U);
    msg.setDestination(34356U);
    msg.setDestinationEntity(123U);
    msg.id = 2U;
    msg.value = 0.391440827782;

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
    msg.setTimeStamp(0.317868047655);
    msg.setSource(37193U);
    msg.setSourceEntity(7U);
    msg.setDestination(32746U);
    msg.setDestinationEntity(155U);
    msg.id = 175U;
    msg.value = 0.806661096146;

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
    msg.setTimeStamp(0.721175105819);
    msg.setSource(63379U);
    msg.setSourceEntity(65U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(209U);
    msg.id = 184U;
    msg.value = 0.480808279094;

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
    msg.setTimeStamp(0.436516609988);
    msg.setSource(43060U);
    msg.setSourceEntity(170U);
    msg.setDestination(45392U);
    msg.setDestinationEntity(103U);
    msg.id = 96U;
    msg.value = 0.9692246025;

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
    msg.setTimeStamp(0.0817531410943);
    msg.setSource(21373U);
    msg.setSourceEntity(107U);
    msg.setDestination(49820U);
    msg.setDestinationEntity(88U);
    msg.id = 132U;
    msg.value = 0.0486599776477;

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
    msg.setTimeStamp(0.114384416971);
    msg.setSource(44252U);
    msg.setSourceEntity(115U);
    msg.setDestination(16334U);
    msg.setDestinationEntity(95U);
    msg.id = 105U;
    msg.value = 0.663924203896;

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
    msg.setTimeStamp(0.170469516149);
    msg.setSource(7820U);
    msg.setSourceEntity(103U);
    msg.setDestination(22936U);
    msg.setDestinationEntity(139U);
    msg.id = 88U;
    msg.angle = 0.48532870573;

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
    msg.setTimeStamp(0.387009856534);
    msg.setSource(23792U);
    msg.setSourceEntity(241U);
    msg.setDestination(62481U);
    msg.setDestinationEntity(12U);
    msg.id = 147U;
    msg.angle = 0.891260837771;

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
    msg.setTimeStamp(0.386568404939);
    msg.setSource(47020U);
    msg.setSourceEntity(13U);
    msg.setDestination(47886U);
    msg.setDestinationEntity(106U);
    msg.id = 126U;
    msg.angle = 0.994593182328;

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
    msg.setTimeStamp(0.472937190333);
    msg.setSource(58860U);
    msg.setSourceEntity(208U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(211U);
    msg.op = 211U;
    msg.actions.assign("LJPNQHDHBRUBNCVKHPUVZPZOWBOQPIXDGPTJHESTJEXDOGQDJKNKDQVACMHSIMZDBUFGKFZKUAWUIORPQGZEWYWEGQTCEOEWGSVIVPIMAUEDCUIWTAQMRDZOSWNMFCQGLRIXNGYYNHTAEKSHTLFPSVJVCFMCVKLCSLYXJQVOOBALBXNUNSRTRBLXFEFYNVXLAAFYXKXWKPUHMLEMHRYCSWBJZTRNPXMBGZROIJMSOQ");

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
    msg.setTimeStamp(0.801676774251);
    msg.setSource(58721U);
    msg.setSourceEntity(7U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(118U);
    msg.op = 162U;
    msg.actions.assign("EQHVVZIHZCRCIPVZPBPYLOXKDOMEKUBEYNHARUGUTETFSUDCHJMHACMXZVWFPSLYZBZWVQWADKVJWRHHYJLEYEPEBXGLLBXGHIOJSOYCJISBVUTWTQGBAJLBIYWHINOIMLBLSLNFDSXFTQPTCFNJNCGOZEXMTEKS");

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
    msg.setTimeStamp(0.967054414652);
    msg.setSource(57104U);
    msg.setSourceEntity(4U);
    msg.setDestination(20011U);
    msg.setDestinationEntity(202U);
    msg.op = 90U;
    msg.actions.assign("FZHNPSYGVRCOGBHXSDLZMBYSDWBFPVOOYTXSBYRICKDIZQRQMAKPXQJDEQLFYLNKIKHPMHMVKNPITAIMHQRIWLLXJTBOWUPRMWAWSYFAAKWDDZSKSDVEEFZAOFUCFTWBRBVXLJ");

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
    msg.setTimeStamp(0.0361356728392);
    msg.setSource(2980U);
    msg.setSourceEntity(119U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(13U);
    msg.actions.assign("EHRZWCTZZJVOUHTHRKLYWVCGBFQFYZWXEOLISVYOYVXAZPNKFVNRCAMGUWMBSICGLZENHUMJSKRNXZBZOARPRGLRJQDXKDNWIHQVTGXRTIDCESHRYJUPJUJJTDYHVTQBT");

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
    msg.setTimeStamp(0.241356543319);
    msg.setSource(7166U);
    msg.setSourceEntity(33U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(156U);
    msg.actions.assign("TKUVBUHPOOLNUJJGSMNLKPEEPBQWDOAWPEEOGHDMWLMSBURMXLSVYCHTKEYXRGSUBHYDEPYBCRMCTFZFLNATOZQTAVRIQOFKXLHFUPHJTJMFIJQZNMTGSSCYZSXKQZRHDYJFNVYZKRENKJTOCBALAOHFQWSQXMWIIHNWABZWVKZCJLQBAIXDLUQVFNBGIFYCRIMDJMPUAWSXETXKY");

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
    msg.setTimeStamp(0.474443430502);
    msg.setSource(31549U);
    msg.setSourceEntity(208U);
    msg.setDestination(18043U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("FWVVXKVUYCLKPPHVRQQRPJGJVEYDDAZ");

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
    msg.setTimeStamp(0.062367187595);
    msg.setSource(34939U);
    msg.setSourceEntity(212U);
    msg.setDestination(40174U);
    msg.setDestinationEntity(223U);
    msg.button = 190U;
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
    msg.setTimeStamp(0.848920438289);
    msg.setSource(42470U);
    msg.setSourceEntity(129U);
    msg.setDestination(21567U);
    msg.setDestinationEntity(103U);
    msg.button = 60U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.126114385435);
    msg.setSource(22474U);
    msg.setSourceEntity(191U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(4U);
    msg.button = 245U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.914673497537);
    msg.setSource(50187U);
    msg.setSourceEntity(109U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(126U);
    msg.op = 17U;
    msg.text.assign("XBTLQNCTXYUXWCWPFHDPAARPKGSSAECQWRCDTTDBONGVQUGWKNZQEMAXYJZDJXZFRFHWJASICKSEBPMEBGCVHRPZZNPJJWZNIDIXKDXLOITOFHZQXMLFGMAUOVTUODIRQYRXNLAIPSLKASWRHHXHLTISERSFMMHBQDTOKQBEUJDKWSZECRNYUVGKLMYPWAMNBCHLEFLJMCVGIYEOJPTUBFZNTDGQUYRBUCHNPEVQIVUZYOB");

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
    msg.setTimeStamp(0.68862783584);
    msg.setSource(33180U);
    msg.setSourceEntity(51U);
    msg.setDestination(50619U);
    msg.setDestinationEntity(173U);
    msg.op = 168U;
    msg.text.assign("JFNKXIKOODZFDEFLATCEBXSQDKQVAVLVEDEBRBJPCWWRAJHMKSIUVWMFYKQHEOGWWRJJGEPPYLSGLCUWHMVVEOUDIMHQRMLQZYUIVSJVIPBMCKNGRIHRTAPEOLAHBBRXZXLZMMUXCYECCDXKVOOTXWIGIAGF");

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
    msg.setTimeStamp(0.706050109482);
    msg.setSource(14952U);
    msg.setSourceEntity(240U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(235U);
    msg.op = 120U;
    msg.text.assign("PPADHITYDAZLTKYKIMMQYYGTYCSLKKFIECJWJXNEXDKVCKQHIEUIITOHRBYTSA");

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
    msg.setTimeStamp(0.812111833005);
    msg.setSource(26727U);
    msg.setSourceEntity(152U);
    msg.setDestination(41752U);
    msg.setDestinationEntity(99U);
    msg.op = 191U;
    msg.time_remain = 0.840936891959;
    msg.sched_time = 0.835647010719;

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
    msg.setTimeStamp(0.710069708925);
    msg.setSource(22132U);
    msg.setSourceEntity(191U);
    msg.setDestination(2248U);
    msg.setDestinationEntity(253U);
    msg.op = 244U;
    msg.time_remain = 0.734951601755;
    msg.sched_time = 0.281298769416;

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
    msg.setTimeStamp(0.279892207527);
    msg.setSource(29154U);
    msg.setSourceEntity(117U);
    msg.setDestination(42162U);
    msg.setDestinationEntity(194U);
    msg.op = 250U;
    msg.time_remain = 0.199943953257;
    msg.sched_time = 0.67402175135;

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
    msg.setTimeStamp(0.457220794442);
    msg.setSource(57232U);
    msg.setSourceEntity(6U);
    msg.setDestination(15700U);
    msg.setDestinationEntity(95U);
    msg.name.assign("PHIDFNVYQAWQZZPPNZPACSLGMISJBENYQAROWDUNNNQLUOVESQDAHFSKEVTD");
    msg.op = 252U;
    msg.sched_time = 0.811572466295;

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
    msg.setTimeStamp(0.55356315595);
    msg.setSource(24315U);
    msg.setSourceEntity(133U);
    msg.setDestination(1084U);
    msg.setDestinationEntity(163U);
    msg.name.assign("NFYZRYUMSETQYKAMCPDWIIYERHZAQWXQFJKEIWYYJCKNRSKVXBRFPYNQVMLJZCHPEHKMZLVEDJWGPHAJPONFDFAXASKEIAEOLLFXRTTPBTROFOVGSCHCSOTVWEJMEKBNGCZZUBAIWROLWTJQUQXGHXOPPIKZIGLBUVDNSXAOJXRABDHLVNBJMQDNUGNCS");
    msg.op = 156U;
    msg.sched_time = 0.628562477665;

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
    msg.setTimeStamp(0.193617903447);
    msg.setSource(8084U);
    msg.setSourceEntity(112U);
    msg.setDestination(47408U);
    msg.setDestinationEntity(216U);
    msg.name.assign("XKFSEDJRNYVTWDHEOIEGFQPKTEMSQBFLTBBWKFVCUTXIGXIQHAIFANJ");
    msg.op = 121U;
    msg.sched_time = 0.722747407505;

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
    msg.setTimeStamp(0.208763502877);
    msg.setSource(23142U);
    msg.setSourceEntity(152U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.235904577746);
    msg.setSource(43028U);
    msg.setSourceEntity(225U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.0282289455203);
    msg.setSource(28672U);
    msg.setSourceEntity(79U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.280085481283);
    msg.setSource(42946U);
    msg.setSourceEntity(210U);
    msg.setDestination(18510U);
    msg.setDestinationEntity(147U);
    msg.name.assign("DGQXVTMDGCQJKHCIFYDDNWRSXZEYJPMQFCSBPLRJBPKZVOABORRFBBCCAKRLEAIXNDPMJRTXHBWGCLEVEWEAMWYHWTQMLCTHGFGRUUJOVPWPDKVZNIEEJQTEWPRYNBZQJXDMVLHHLOMKJZYS");
    msg.state = 187U;

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
    msg.setTimeStamp(0.643665169602);
    msg.setSource(33599U);
    msg.setSourceEntity(131U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(208U);
    msg.name.assign("DITVYZMTCRZMISATUFJIDCBWWZMOHXAZIKQOKHNHJTPOJTPQQEBWNCQXGCSSOBHCAHDLKDOJPQNUWPVDIFVDBISYJZWWUOPSBRVKZEXBUUTFKFWJPDAEYINCPNQECUMXLQTENIKTJTGKHPQBXNYZQEOUVFNUVWKHOAY");
    msg.state = 134U;

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
    msg.setTimeStamp(0.675160762148);
    msg.setSource(39864U);
    msg.setSourceEntity(129U);
    msg.setDestination(44015U);
    msg.setDestinationEntity(138U);
    msg.name.assign("QIPOORRNVEROKWUWWVYE");
    msg.state = 180U;

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
    msg.setTimeStamp(0.628057133977);
    msg.setSource(9723U);
    msg.setSourceEntity(165U);
    msg.setDestination(56406U);
    msg.setDestinationEntity(211U);
    msg.name.assign("WFHMAQSNMJTSHLPRBNHTVBBLUUOGNIEWOJYGIYNGTKFNMYHZFQNSQDC");
    msg.value = 204U;

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
    msg.setTimeStamp(0.366507608309);
    msg.setSource(16335U);
    msg.setSourceEntity(231U);
    msg.setDestination(20107U);
    msg.setDestinationEntity(89U);
    msg.name.assign("JJRAFKLVKOJYXMMSHCNBNMWRYAOEQVUFQOCKTZFSDKSFAGBUIUNWHEIXFOVUZQMZWHUYGJWTMHQGGTTCMEUH");
    msg.value = 137U;

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
    msg.setTimeStamp(0.670510050062);
    msg.setSource(37785U);
    msg.setSourceEntity(76U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(17U);
    msg.name.assign("HIVQAAPTMMTDCNXAMIOVDIGYTBAHROHIIFSLSTVJMTQEPABRQYSNFKAJFGYOHJXZBAXMFILKTWVBVKSOHYLKFRVCLWWMYJYIBJETPNBBOEGFQQCUZJHGSKXETBSOOENJUREVWYGWNJWBULCGGMDRJFSCDLZLUDPNZHERFDQFAUGYFDKCV");
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
    msg.setTimeStamp(0.509770412054);
    msg.setSource(30138U);
    msg.setSourceEntity(179U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(43U);
    msg.name.assign("LQYUHORADWCIMQHBUYVBCNJGTTVHXSNUPFIPMKDGCZLDUXLSQTSWTQDOYOJUXRMTFOHXTVREVKJGQSBEWDLUBNDZNMMCGWDFSSLIAJYXHKUWRGFCIYVEJEMYBLJFLVUKEGFARRNOKFNQSLIPAPQKHHYEDCECACRKPZCZHYREVWJWNPXIGOPXZGWUSFBMXNACMFPNDYTIQAGAOGEDTXTLTOKORZZFJKUAIBV");

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
    msg.setTimeStamp(0.236883557282);
    msg.setSource(53197U);
    msg.setSourceEntity(196U);
    msg.setDestination(23918U);
    msg.setDestinationEntity(192U);
    msg.name.assign("ROHBIOYNICHPMPJDEJWVWHNUOSCFWWSJXYOGQMIEMXSBYOVBKEKCNJURTRQJRDTNLJAVBFXCZLARYYKWXBECFMKKTISPNTJHOMIZVHLMDXPKGEDLUXIVHLFKZSAPAAUZGP");

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
    msg.setTimeStamp(0.704495009806);
    msg.setSource(19303U);
    msg.setSourceEntity(91U);
    msg.setDestination(19456U);
    msg.setDestinationEntity(0U);
    msg.name.assign("CQFJGOAKSKGKWRXBPMNXWLJCJJHIIEDYZTKOZCVITMFSTPFPELYLEUJPXTBGQOCZXTZOSWWIICKRAWRQJGPFEEUQWOR");

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
    msg.setTimeStamp(0.587321734864);
    msg.setSource(41095U);
    msg.setSourceEntity(237U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(167U);
    msg.name.assign("LPAKOQOUAEJZYOUZFACGMIQJNRRIBTGNVCLDPTKXDGXDIBUMEDJRAWSUQZZYESJXLJHFPCXRQCRDWSPVZTJEGGGGTHFNMWSMZGKCTKAFULEMHEMIKFGUABLWUXYLRMAHVCKVWXBTYHECIYFMTWHJYKZUOPYEKXBRHQZKCHWBNONXXZQCASGNIYSOPDMXNNQURBSDTQQRFOEPSVJALZLLIDPVBSJD");
    msg.value = 82U;

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
    msg.setTimeStamp(0.880481772758);
    msg.setSource(37824U);
    msg.setSourceEntity(22U);
    msg.setDestination(56269U);
    msg.setDestinationEntity(231U);
    msg.name.assign("JVMRBDSKWASRQXPLPTWEEIKTNCRVIZIVVGUZXHGHESLCOOLEFGANQOHYYCSURQZPNGWMJXNTUIVOFET");
    msg.value = 28U;

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
    msg.setTimeStamp(0.463384164127);
    msg.setSource(46377U);
    msg.setSourceEntity(228U);
    msg.setDestination(4217U);
    msg.setDestinationEntity(135U);
    msg.name.assign("PZLMAPIDFZPRYQZXUFACSJOJGDDALBWLUXUVPNSLXKBOJFTOTFLJCMNGZWVERMAMWCAKIYGQZVMEWRFGQRQOUUEUAKLIXTMWRSOPBUMVAYOKOOYCGRHTGLDYJALCBYIYCYBSIDBMMNELHTQMVZDHWJSWEZIFCOGFTWLHWSKKZNPKH");
    msg.value = 150U;

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
    msg.setTimeStamp(0.956033433009);
    msg.setSource(15840U);
    msg.setSourceEntity(250U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(46U);
    msg.id = 243U;
    msg.period = 2965069079U;
    msg.duty_cycle = 813700098U;

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
    msg.setTimeStamp(0.695135573654);
    msg.setSource(26423U);
    msg.setSourceEntity(21U);
    msg.setDestination(16796U);
    msg.setDestinationEntity(171U);
    msg.id = 97U;
    msg.period = 1165747317U;
    msg.duty_cycle = 4283595644U;

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
    msg.setTimeStamp(0.773181382456);
    msg.setSource(45473U);
    msg.setSourceEntity(139U);
    msg.setDestination(65497U);
    msg.setDestinationEntity(217U);
    msg.id = 10U;
    msg.period = 2557328612U;
    msg.duty_cycle = 3529518196U;

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
    msg.setTimeStamp(0.0949889474595);
    msg.setSource(31363U);
    msg.setSourceEntity(55U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(44U);
    msg.id = 151U;
    msg.period = 2282187610U;
    msg.duty_cycle = 438472555U;

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
    msg.setTimeStamp(0.26060916983);
    msg.setSource(32410U);
    msg.setSourceEntity(11U);
    msg.setDestination(42577U);
    msg.setDestinationEntity(13U);
    msg.id = 221U;
    msg.period = 2598358387U;
    msg.duty_cycle = 1006375599U;

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
    msg.setTimeStamp(0.0313679827971);
    msg.setSource(41644U);
    msg.setSourceEntity(13U);
    msg.setDestination(3848U);
    msg.setDestinationEntity(116U);
    msg.id = 54U;
    msg.period = 2737438634U;
    msg.duty_cycle = 2341166896U;

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
    msg.setTimeStamp(0.0725877697643);
    msg.setSource(52625U);
    msg.setSourceEntity(61U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.0258147894497;
    msg.lon = 0.939351818654;
    msg.height = 0.977880044712;
    msg.x = 0.856271050086;
    msg.y = 0.817338642298;
    msg.z = 0.574237174371;
    msg.phi = 0.784216249898;
    msg.theta = 0.865093693891;
    msg.psi = 0.893741257493;
    msg.u = 0.749032398231;
    msg.v = 0.758396865355;
    msg.w = 0.0762635180067;
    msg.vx = 0.87026595109;
    msg.vy = 0.893677295163;
    msg.vz = 0.713052726762;
    msg.p = 0.990366020428;
    msg.q = 0.249681022033;
    msg.r = 0.0777156270905;
    msg.depth = 0.261310785448;
    msg.alt = 0.455230947593;

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
    msg.setTimeStamp(0.958562779373);
    msg.setSource(26128U);
    msg.setSourceEntity(3U);
    msg.setDestination(14157U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.613568156616;
    msg.lon = 0.426048162839;
    msg.height = 0.95760163795;
    msg.x = 0.564284612082;
    msg.y = 0.0654055804623;
    msg.z = 0.667649872282;
    msg.phi = 0.440160049177;
    msg.theta = 0.342982500795;
    msg.psi = 0.492218715941;
    msg.u = 0.554329893365;
    msg.v = 0.185187470778;
    msg.w = 0.465951629235;
    msg.vx = 0.758755663163;
    msg.vy = 0.619449164118;
    msg.vz = 0.00822304253143;
    msg.p = 0.104483196074;
    msg.q = 0.317172160485;
    msg.r = 0.345995555634;
    msg.depth = 0.286197254356;
    msg.alt = 0.394535026277;

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
    msg.setTimeStamp(0.396461616137);
    msg.setSource(11871U);
    msg.setSourceEntity(145U);
    msg.setDestination(39265U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.667863889543;
    msg.lon = 0.736812428654;
    msg.height = 0.513443702386;
    msg.x = 0.467878346625;
    msg.y = 0.523221597348;
    msg.z = 0.704231076513;
    msg.phi = 0.295420522972;
    msg.theta = 0.952200867178;
    msg.psi = 0.48932456319;
    msg.u = 0.463061632076;
    msg.v = 0.15785958275;
    msg.w = 0.38039449501;
    msg.vx = 0.179806670762;
    msg.vy = 0.122691923691;
    msg.vz = 0.8564042276;
    msg.p = 0.615827113555;
    msg.q = 0.254685941681;
    msg.r = 0.468566840757;
    msg.depth = 0.454061165273;
    msg.alt = 0.0682993494623;

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
    msg.setTimeStamp(0.436501392904);
    msg.setSource(27059U);
    msg.setSourceEntity(20U);
    msg.setDestination(45942U);
    msg.setDestinationEntity(59U);
    msg.x = 0.428807265324;
    msg.y = 0.412649716608;
    msg.z = 0.140014606635;

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
    msg.setTimeStamp(0.339020462068);
    msg.setSource(39271U);
    msg.setSourceEntity(212U);
    msg.setDestination(4599U);
    msg.setDestinationEntity(210U);
    msg.x = 0.701622332786;
    msg.y = 0.677058451585;
    msg.z = 0.909431728699;

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
    msg.setTimeStamp(0.307435630463);
    msg.setSource(29987U);
    msg.setSourceEntity(215U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(179U);
    msg.x = 0.103404804107;
    msg.y = 0.247164960833;
    msg.z = 0.445536036886;

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
    msg.setTimeStamp(0.294625450635);
    msg.setSource(40497U);
    msg.setSourceEntity(99U);
    msg.setDestination(39962U);
    msg.setDestinationEntity(22U);
    msg.value = 0.11525703219;

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
    msg.setTimeStamp(0.865556339093);
    msg.setSource(43066U);
    msg.setSourceEntity(139U);
    msg.setDestination(14175U);
    msg.setDestinationEntity(87U);
    msg.value = 0.136108841063;

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
    msg.setTimeStamp(0.300726210176);
    msg.setSource(1533U);
    msg.setSourceEntity(42U);
    msg.setDestination(17085U);
    msg.setDestinationEntity(116U);
    msg.value = 0.856540839005;

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
    msg.setTimeStamp(0.774138067712);
    msg.setSource(44620U);
    msg.setSourceEntity(141U);
    msg.setDestination(48305U);
    msg.setDestinationEntity(233U);
    msg.value = 0.969922223141;

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
    msg.setTimeStamp(0.395335615736);
    msg.setSource(40421U);
    msg.setSourceEntity(194U);
    msg.setDestination(48482U);
    msg.setDestinationEntity(161U);
    msg.value = 0.297854547831;

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
    msg.setTimeStamp(0.503038944523);
    msg.setSource(30902U);
    msg.setSourceEntity(165U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(186U);
    msg.value = 0.429093128666;

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
    msg.setTimeStamp(0.0349033859702);
    msg.setSource(19632U);
    msg.setSourceEntity(216U);
    msg.setDestination(40196U);
    msg.setDestinationEntity(23U);
    msg.x = 0.280672836607;
    msg.y = 0.874764142861;
    msg.z = 0.478488289011;
    msg.phi = 0.435677927064;
    msg.theta = 0.290568922277;
    msg.psi = 0.823330195646;
    msg.p = 0.411638367475;
    msg.q = 0.445812195661;
    msg.r = 0.860353764615;
    msg.u = 0.995874098257;
    msg.v = 0.170971856727;
    msg.w = 0.844309307322;
    msg.bias_psi = 0.877458090669;
    msg.bias_r = 0.202423037059;

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
    msg.setTimeStamp(0.589718628002);
    msg.setSource(40623U);
    msg.setSourceEntity(56U);
    msg.setDestination(23382U);
    msg.setDestinationEntity(219U);
    msg.x = 0.192669100594;
    msg.y = 0.643796959374;
    msg.z = 0.378654246006;
    msg.phi = 0.837732756135;
    msg.theta = 0.181061037043;
    msg.psi = 0.443175410093;
    msg.p = 0.508372718735;
    msg.q = 0.529402246701;
    msg.r = 0.110506583658;
    msg.u = 0.589389496306;
    msg.v = 0.750944255763;
    msg.w = 0.110344976819;
    msg.bias_psi = 0.564876109883;
    msg.bias_r = 0.68132473707;

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
    msg.setTimeStamp(0.418074209624);
    msg.setSource(34652U);
    msg.setSourceEntity(171U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(40U);
    msg.x = 0.769812325961;
    msg.y = 0.270908994855;
    msg.z = 0.847396479862;
    msg.phi = 0.59235334521;
    msg.theta = 0.501989313411;
    msg.psi = 0.0697444366021;
    msg.p = 0.0858341686164;
    msg.q = 0.509598466397;
    msg.r = 0.251695765359;
    msg.u = 0.84961304764;
    msg.v = 0.990940499854;
    msg.w = 0.249899312752;
    msg.bias_psi = 0.858148433743;
    msg.bias_r = 0.881088763425;

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
    msg.setTimeStamp(0.380019372966);
    msg.setSource(39123U);
    msg.setSourceEntity(53U);
    msg.setDestination(25052U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.852334927587;
    msg.bias_r = 0.405321972824;
    msg.cog = 0.81325830297;
    msg.cyaw = 0.564652473419;
    msg.lbl_rej_level = 0.43757632037;
    msg.gps_rej_level = 0.705148275895;
    msg.custom_x = 0.685124208558;
    msg.custom_y = 0.778672469398;
    msg.custom_z = 0.521281038208;

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
    msg.setTimeStamp(0.794139614803);
    msg.setSource(7119U);
    msg.setSourceEntity(47U);
    msg.setDestination(17295U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.0646987336589;
    msg.bias_r = 0.156352887263;
    msg.cog = 0.20478156483;
    msg.cyaw = 0.259165237386;
    msg.lbl_rej_level = 0.700912310531;
    msg.gps_rej_level = 0.217572680026;
    msg.custom_x = 0.0492839740751;
    msg.custom_y = 0.595092048369;
    msg.custom_z = 0.405151440233;

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
    msg.setTimeStamp(0.0916562727209);
    msg.setSource(27737U);
    msg.setSourceEntity(141U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(82U);
    msg.bias_psi = 0.618880340195;
    msg.bias_r = 0.349858596115;
    msg.cog = 0.824504388515;
    msg.cyaw = 0.163007026856;
    msg.lbl_rej_level = 0.977063049796;
    msg.gps_rej_level = 0.12596340939;
    msg.custom_x = 0.597662933365;
    msg.custom_y = 0.245332783871;
    msg.custom_z = 0.424714112149;

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
    msg.setTimeStamp(0.0916129082857);
    msg.setSource(1708U);
    msg.setSourceEntity(34U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(152U);
    msg.utc_time = 0.641941981646;
    msg.reason = 224U;

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
    msg.setTimeStamp(0.920760696569);
    msg.setSource(37717U);
    msg.setSourceEntity(70U);
    msg.setDestination(45320U);
    msg.setDestinationEntity(211U);
    msg.utc_time = 0.386709446309;
    msg.reason = 52U;

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
    msg.setTimeStamp(0.116287647175);
    msg.setSource(58663U);
    msg.setSourceEntity(18U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.347335102211;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.292373748401);
    msg.setSource(6382U);
    msg.setSourceEntity(182U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(219U);
    msg.id = 232U;
    msg.range = 0.403341000232;
    msg.acceptance = 41U;

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
    msg.setTimeStamp(0.778716083055);
    msg.setSource(935U);
    msg.setSourceEntity(143U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(70U);
    msg.id = 66U;
    msg.range = 0.114965154944;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.311380522433);
    msg.setSource(44938U);
    msg.setSourceEntity(165U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(207U);
    msg.id = 82U;
    msg.range = 0.859222399176;
    msg.acceptance = 100U;

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
    msg.setTimeStamp(0.868960304198);
    msg.setSource(11620U);
    msg.setSourceEntity(122U);
    msg.setDestination(47072U);
    msg.setDestinationEntity(16U);
    msg.type = 51U;
    msg.reason = 207U;
    msg.value = 0.211010126043;
    msg.timestep = 0.741556667299;

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
    msg.setTimeStamp(0.571447365694);
    msg.setSource(22107U);
    msg.setSourceEntity(121U);
    msg.setDestination(61312U);
    msg.setDestinationEntity(24U);
    msg.type = 85U;
    msg.reason = 159U;
    msg.value = 0.372064600369;
    msg.timestep = 0.748109805565;

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
    msg.setTimeStamp(0.0554798906265);
    msg.setSource(62307U);
    msg.setSourceEntity(15U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(64U);
    msg.type = 69U;
    msg.reason = 203U;
    msg.value = 0.900373726215;
    msg.timestep = 0.749127024656;

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
    msg.setTimeStamp(0.173869548901);
    msg.setSource(28577U);
    msg.setSourceEntity(80U);
    msg.setDestination(39668U);
    msg.setDestinationEntity(172U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YQWKDJFORRPWQBTJAZZLVTJLURJEKRZCMWVLBPCKEIMXCMVYWYINONGCKXLKTTNSAMVQOGLEWGFSOXHMVBTPYDMXXUHRGCBZVPSHPEJDSQWFNTHKAWEUTATCBASKRQMO");
    tmp_msg_0.lat = 0.328834927057;
    tmp_msg_0.lon = 0.676734065651;
    tmp_msg_0.depth = 0.233684805041;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 115U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.00269304022851;
    msg.y = 0.264633312847;
    msg.var_x = 0.45129809928;
    msg.var_y = 0.947726875537;
    msg.distance = 0.271680687517;

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
    msg.setTimeStamp(0.909807030782);
    msg.setSource(466U);
    msg.setSourceEntity(118U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZRKEIKPHNRICZDPZFQWMTELWUBAVSSLMOUVWTODTMCAXRZCPVQYPQUNVXHFGBZKJEDCUTOHRRVJVFDWEIBYAGHEHWLMNKPG");
    tmp_msg_0.lat = 0.108544193152;
    tmp_msg_0.lon = 0.732796498641;
    tmp_msg_0.depth = 0.267657808432;
    tmp_msg_0.query_channel = 108U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 190U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.183553113358;
    msg.y = 0.378389060593;
    msg.var_x = 0.0415961572394;
    msg.var_y = 0.53272146446;
    msg.distance = 0.347729363881;

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
    msg.setTimeStamp(0.791830192026);
    msg.setSource(12186U);
    msg.setSourceEntity(194U);
    msg.setDestination(6938U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ECAFQLMKZHXIONCYEZPIVIKHNLBDAAAGBIBPZHITEJJVHKQASMUUOZFSWKRWXSLDJBRTFJIOZTRYTXDZECNWRRJIHZGJAUFUHZVPFBDPUOSRKJCBTCTKWDYKGZBMGNMWPMHNECQOSNWQOJVCKWNQZPXYQEBMPLHJOYVVTYULSTXQMBATCQQPVFTPERNLKX");
    tmp_msg_0.lat = 0.317038493367;
    tmp_msg_0.lon = 0.28636003433;
    tmp_msg_0.depth = 0.88460716483;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.302855001302;
    msg.y = 0.0436198149171;
    msg.var_x = 0.480946815886;
    msg.var_y = 0.762153957528;
    msg.distance = 0.617790100255;

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
    msg.setTimeStamp(0.166832401065);
    msg.setSource(39271U);
    msg.setSourceEntity(160U);
    msg.setDestination(21763U);
    msg.setDestinationEntity(131U);
    msg.state = 192U;

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
    msg.setTimeStamp(0.205612296755);
    msg.setSource(41283U);
    msg.setSourceEntity(162U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(126U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.675870469853);
    msg.setSource(57244U);
    msg.setSourceEntity(157U);
    msg.setDestination(34064U);
    msg.setDestinationEntity(194U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.597209934796);
    msg.setSource(4615U);
    msg.setSourceEntity(219U);
    msg.setDestination(7376U);
    msg.setDestinationEntity(232U);
    msg.x = 0.511211156004;
    msg.y = 0.852169030035;
    msg.z = 0.51741751724;

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
    msg.setTimeStamp(0.574594826816);
    msg.setSource(43674U);
    msg.setSourceEntity(113U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(127U);
    msg.x = 0.17631040136;
    msg.y = 0.352444737641;
    msg.z = 0.120762324156;

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
    msg.setTimeStamp(0.939613746001);
    msg.setSource(55938U);
    msg.setSourceEntity(24U);
    msg.setDestination(41303U);
    msg.setDestinationEntity(95U);
    msg.x = 0.496104317684;
    msg.y = 0.849720970682;
    msg.z = 0.247934166401;

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
    msg.setTimeStamp(0.743904123307);
    msg.setSource(59179U);
    msg.setSourceEntity(22U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(78U);
    msg.va = 0.305741721906;
    msg.aoa = 0.769820345099;
    msg.ssa = 0.671771344129;

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
    msg.setTimeStamp(0.845184196395);
    msg.setSource(22232U);
    msg.setSourceEntity(22U);
    msg.setDestination(43640U);
    msg.setDestinationEntity(14U);
    msg.va = 0.153473229133;
    msg.aoa = 0.533546259999;
    msg.ssa = 0.70824793072;

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
    msg.setTimeStamp(0.547010231655);
    msg.setSource(62306U);
    msg.setSourceEntity(95U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(253U);
    msg.va = 0.179577644178;
    msg.aoa = 0.0562664967589;
    msg.ssa = 0.348580801398;

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
    msg.setTimeStamp(0.661375224107);
    msg.setSource(32515U);
    msg.setSourceEntity(24U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(186U);
    msg.value = 0.76563703946;

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
    msg.setTimeStamp(0.134422428298);
    msg.setSource(31466U);
    msg.setSourceEntity(191U);
    msg.setDestination(59260U);
    msg.setDestinationEntity(184U);
    msg.value = 0.316051379616;

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
    msg.setTimeStamp(0.453510694213);
    msg.setSource(42353U);
    msg.setSourceEntity(142U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(135U);
    msg.value = 0.437761476868;

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
    msg.setTimeStamp(0.33809550447);
    msg.setSource(53644U);
    msg.setSourceEntity(138U);
    msg.setDestination(42498U);
    msg.setDestinationEntity(57U);
    msg.value = 0.755220422037;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.190611850274);
    msg.setSource(41795U);
    msg.setSourceEntity(21U);
    msg.setDestination(29020U);
    msg.setDestinationEntity(7U);
    msg.value = 0.0184983617128;
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
    msg.setTimeStamp(0.395882666259);
    msg.setSource(56815U);
    msg.setSourceEntity(43U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(244U);
    msg.value = 0.798301822743;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.869640989665);
    msg.setSource(46342U);
    msg.setSourceEntity(152U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(89U);
    msg.value = 0.788838983389;
    msg.speed_units = 7U;

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
    msg.setTimeStamp(0.791471980927);
    msg.setSource(47304U);
    msg.setSourceEntity(125U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(153U);
    msg.value = 0.480977439942;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.987409834296);
    msg.setSource(24140U);
    msg.setSourceEntity(100U);
    msg.setDestination(41493U);
    msg.setDestinationEntity(50U);
    msg.value = 0.732243882818;
    msg.speed_units = 168U;

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
    msg.setTimeStamp(0.452610698425);
    msg.setSource(38360U);
    msg.setSourceEntity(170U);
    msg.setDestination(38958U);
    msg.setDestinationEntity(5U);
    msg.value = 0.0293394545977;

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
    msg.setTimeStamp(0.182405653422);
    msg.setSource(60913U);
    msg.setSourceEntity(215U);
    msg.setDestination(8241U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0298456760432;

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
    msg.setTimeStamp(0.760448099616);
    msg.setSource(49901U);
    msg.setSourceEntity(70U);
    msg.setDestination(65194U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0215948306766;

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
    msg.setTimeStamp(0.476644304663);
    msg.setSource(16937U);
    msg.setSourceEntity(227U);
    msg.setDestination(54348U);
    msg.setDestinationEntity(238U);
    msg.value = 0.382331502491;

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
    msg.setTimeStamp(0.735918956743);
    msg.setSource(37618U);
    msg.setSourceEntity(224U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(148U);
    msg.value = 0.281066924489;

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
    msg.setTimeStamp(0.0824915303686);
    msg.setSource(30421U);
    msg.setSourceEntity(120U);
    msg.setDestination(43636U);
    msg.setDestinationEntity(192U);
    msg.value = 0.659496919762;

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
    msg.setTimeStamp(0.355423741171);
    msg.setSource(6911U);
    msg.setSourceEntity(93U);
    msg.setDestination(27101U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0549387467851;

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
    msg.setTimeStamp(0.992302506897);
    msg.setSource(35185U);
    msg.setSourceEntity(210U);
    msg.setDestination(32784U);
    msg.setDestinationEntity(91U);
    msg.value = 0.00343824080888;

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
    msg.setTimeStamp(0.238663690872);
    msg.setSource(9601U);
    msg.setSourceEntity(45U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(124U);
    msg.value = 0.174877473192;

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
    msg.setTimeStamp(0.177212911579);
    msg.setSource(19213U);
    msg.setSourceEntity(106U);
    msg.setDestination(21442U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 1020992527U;
    msg.start_lat = 0.338133590258;
    msg.start_lon = 0.892322288486;
    msg.start_z = 0.160386859022;
    msg.start_z_units = 236U;
    msg.end_lat = 0.119586000395;
    msg.end_lon = 0.51051027173;
    msg.end_z = 0.482124724506;
    msg.end_z_units = 145U;
    msg.speed = 0.740216951868;
    msg.speed_units = 121U;
    msg.lradius = 0.930791234434;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.541087658365);
    msg.setSource(39686U);
    msg.setSourceEntity(132U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 3116424580U;
    msg.start_lat = 0.851570086599;
    msg.start_lon = 0.394738145673;
    msg.start_z = 0.260648689181;
    msg.start_z_units = 32U;
    msg.end_lat = 0.570416318365;
    msg.end_lon = 0.334209548729;
    msg.end_z = 0.507565702146;
    msg.end_z_units = 69U;
    msg.speed = 0.121357799975;
    msg.speed_units = 211U;
    msg.lradius = 0.19120131332;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.953478111304);
    msg.setSource(40381U);
    msg.setSourceEntity(178U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 2404473284U;
    msg.start_lat = 0.744576111855;
    msg.start_lon = 0.306602277711;
    msg.start_z = 0.634418220087;
    msg.start_z_units = 85U;
    msg.end_lat = 0.453955737225;
    msg.end_lon = 0.679174450081;
    msg.end_z = 0.00400900455994;
    msg.end_z_units = 147U;
    msg.speed = 0.880288226618;
    msg.speed_units = 104U;
    msg.lradius = 0.827281506206;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.0463095960244);
    msg.setSource(37280U);
    msg.setSourceEntity(149U);
    msg.setDestination(44809U);
    msg.setDestinationEntity(20U);
    msg.x = 0.768492205686;
    msg.y = 0.983759734984;
    msg.z = 0.789467890945;
    msg.k = 0.502749398919;
    msg.m = 0.102965723488;
    msg.n = 0.351757831051;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.328382772392);
    msg.setSource(19304U);
    msg.setSourceEntity(114U);
    msg.setDestination(3950U);
    msg.setDestinationEntity(152U);
    msg.x = 0.66001691704;
    msg.y = 0.486498211082;
    msg.z = 0.210499228961;
    msg.k = 0.139033996307;
    msg.m = 0.188482376918;
    msg.n = 0.399184897138;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.801810679225);
    msg.setSource(57356U);
    msg.setSourceEntity(236U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(48U);
    msg.x = 0.62368599238;
    msg.y = 0.330593491532;
    msg.z = 0.78096437871;
    msg.k = 0.738609191997;
    msg.m = 0.766913846369;
    msg.n = 0.822004604419;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.867238561961);
    msg.setSource(42448U);
    msg.setSourceEntity(75U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(69U);
    msg.value = 0.911281793031;

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
    msg.setTimeStamp(0.986596095328);
    msg.setSource(32940U);
    msg.setSourceEntity(10U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(187U);
    msg.value = 0.73883627566;

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
    msg.setTimeStamp(0.806999751448);
    msg.setSource(61508U);
    msg.setSourceEntity(113U);
    msg.setDestination(39424U);
    msg.setDestinationEntity(43U);
    msg.value = 0.624274680366;

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
    msg.setTimeStamp(0.274743790959);
    msg.setSource(26343U);
    msg.setSourceEntity(233U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(52U);
    msg.u = 0.797685502094;
    msg.v = 0.57592343986;
    msg.w = 0.319125142403;
    msg.p = 0.303687681014;
    msg.q = 0.917234446188;
    msg.r = 0.149691717049;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.0116823412311);
    msg.setSource(44258U);
    msg.setSourceEntity(107U);
    msg.setDestination(47003U);
    msg.setDestinationEntity(182U);
    msg.u = 0.0806590554463;
    msg.v = 0.144242394574;
    msg.w = 0.450951125712;
    msg.p = 0.853970301525;
    msg.q = 0.587998058055;
    msg.r = 0.384142274309;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.794269217708);
    msg.setSource(57230U);
    msg.setSourceEntity(9U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(236U);
    msg.u = 0.726098463869;
    msg.v = 0.579569180148;
    msg.w = 0.867627992613;
    msg.p = 0.150176632938;
    msg.q = 0.0751399283872;
    msg.r = 0.461339679382;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.427662427329);
    msg.setSource(61856U);
    msg.setSourceEntity(41U);
    msg.setDestination(64049U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 106581870U;
    msg.start_lat = 0.149928360143;
    msg.start_lon = 0.101043325059;
    msg.start_z = 0.0468196933263;
    msg.start_z_units = 158U;
    msg.end_lat = 0.933334967423;
    msg.end_lon = 0.40691755693;
    msg.end_z = 0.639502730405;
    msg.end_z_units = 32U;
    msg.lradius = 0.148226168789;
    msg.flags = 144U;
    msg.x = 0.513818688206;
    msg.y = 0.644416011397;
    msg.z = 0.790739456727;
    msg.vx = 0.157906836979;
    msg.vy = 0.20728780622;
    msg.vz = 0.0492946392146;
    msg.course_error = 0.39873304426;
    msg.eta = 35566U;

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
    msg.setTimeStamp(0.654996439576);
    msg.setSource(13850U);
    msg.setSourceEntity(23U);
    msg.setDestination(19268U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 2431727104U;
    msg.start_lat = 0.0318634892303;
    msg.start_lon = 0.805604460185;
    msg.start_z = 0.172624198829;
    msg.start_z_units = 46U;
    msg.end_lat = 0.998910248717;
    msg.end_lon = 0.00393569797258;
    msg.end_z = 0.234734660446;
    msg.end_z_units = 111U;
    msg.lradius = 0.0576996055889;
    msg.flags = 141U;
    msg.x = 0.688148983856;
    msg.y = 0.682589430564;
    msg.z = 0.779385212896;
    msg.vx = 0.966166591853;
    msg.vy = 0.0205219944756;
    msg.vz = 0.732398316358;
    msg.course_error = 0.21159001749;
    msg.eta = 56209U;

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
    msg.setTimeStamp(0.302002182177);
    msg.setSource(2290U);
    msg.setSourceEntity(204U);
    msg.setDestination(56497U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 4245612905U;
    msg.start_lat = 0.0159078176279;
    msg.start_lon = 0.482871129837;
    msg.start_z = 0.906797052063;
    msg.start_z_units = 140U;
    msg.end_lat = 0.573244108622;
    msg.end_lon = 0.511047041457;
    msg.end_z = 0.856312229028;
    msg.end_z_units = 114U;
    msg.lradius = 0.132595694663;
    msg.flags = 250U;
    msg.x = 0.770498019958;
    msg.y = 0.742222287327;
    msg.z = 0.457407909091;
    msg.vx = 0.971237813685;
    msg.vy = 0.237197046913;
    msg.vz = 0.23135440294;
    msg.course_error = 0.348753235699;
    msg.eta = 15134U;

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
    msg.setTimeStamp(0.516993851632);
    msg.setSource(38541U);
    msg.setSourceEntity(11U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(142U);
    msg.k = 0.741991139594;
    msg.m = 0.312376523847;
    msg.n = 0.571591443648;

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
    msg.setTimeStamp(0.681840362121);
    msg.setSource(37464U);
    msg.setSourceEntity(240U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(74U);
    msg.k = 0.209368956377;
    msg.m = 0.732565597933;
    msg.n = 0.0296416725673;

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
    msg.setTimeStamp(0.0231150772195);
    msg.setSource(51544U);
    msg.setSourceEntity(105U);
    msg.setDestination(58398U);
    msg.setDestinationEntity(229U);
    msg.k = 0.214957217388;
    msg.m = 0.468962972143;
    msg.n = 0.81946469289;

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
    msg.setTimeStamp(0.309216391056);
    msg.setSource(25681U);
    msg.setSourceEntity(113U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(149U);
    msg.p = 0.225911191888;
    msg.i = 0.613352245785;
    msg.d = 0.691338547686;
    msg.a = 0.748354853435;

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
    msg.setTimeStamp(0.112824463855);
    msg.setSource(62816U);
    msg.setSourceEntity(247U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(201U);
    msg.p = 0.161080299201;
    msg.i = 0.857691058721;
    msg.d = 0.126853211448;
    msg.a = 0.758357637554;

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
    msg.setTimeStamp(0.334634932892);
    msg.setSource(34148U);
    msg.setSourceEntity(191U);
    msg.setDestination(53039U);
    msg.setDestinationEntity(99U);
    msg.p = 0.31120534664;
    msg.i = 0.318919324531;
    msg.d = 0.919102905138;
    msg.a = 0.525227682523;

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
    msg.setTimeStamp(0.125279452158);
    msg.setSource(52797U);
    msg.setSourceEntity(163U);
    msg.setDestination(17781U);
    msg.setDestinationEntity(162U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.533164262619);
    msg.setSource(2733U);
    msg.setSourceEntity(226U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(99U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.0545976007383);
    msg.setSource(17812U);
    msg.setSourceEntity(250U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(161U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.164625925924);
    msg.setSource(49287U);
    msg.setSourceEntity(147U);
    msg.setDestination(7030U);
    msg.setDestinationEntity(75U);
    msg.x = 0.518991580278;
    msg.y = 0.672054863943;
    msg.z = 0.732951905098;
    msg.vx = 0.0926647245195;
    msg.vy = 0.278661508407;
    msg.vz = 0.884607476915;
    msg.ax = 0.281700292497;
    msg.ay = 0.44997133542;
    msg.az = 0.802689952035;
    msg.flags = 14845U;

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
    msg.setTimeStamp(0.88086717947);
    msg.setSource(51480U);
    msg.setSourceEntity(186U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(220U);
    msg.x = 0.325891872621;
    msg.y = 0.921403107927;
    msg.z = 0.486347392688;
    msg.vx = 0.842007272346;
    msg.vy = 0.483233241692;
    msg.vz = 0.823066197994;
    msg.ax = 0.15682816568;
    msg.ay = 0.789309967371;
    msg.az = 0.207913087385;
    msg.flags = 21295U;

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
    msg.setTimeStamp(0.418355549546);
    msg.setSource(31433U);
    msg.setSourceEntity(50U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(225U);
    msg.x = 0.944640350484;
    msg.y = 0.2960828584;
    msg.z = 0.054270605269;
    msg.vx = 0.0345751265197;
    msg.vy = 0.404301494472;
    msg.vz = 0.744031175528;
    msg.ax = 0.0613163485177;
    msg.ay = 0.029014075902;
    msg.az = 0.418116114371;
    msg.flags = 32936U;

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
    msg.setTimeStamp(0.203953895063);
    msg.setSource(53208U);
    msg.setSourceEntity(163U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(15U);
    msg.value = 0.844239798959;

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
    msg.setTimeStamp(0.886074182919);
    msg.setSource(46371U);
    msg.setSourceEntity(44U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(152U);
    msg.value = 0.343959360346;

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
    msg.setTimeStamp(0.817670009456);
    msg.setSource(57110U);
    msg.setSourceEntity(124U);
    msg.setDestination(497U);
    msg.setDestinationEntity(17U);
    msg.value = 0.109289078279;

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
    msg.setTimeStamp(0.381883845684);
    msg.setSource(6976U);
    msg.setSourceEntity(183U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(220U);
    msg.timeout = 49665U;
    msg.lat = 0.468979216543;
    msg.lon = 0.588866638698;
    msg.z = 0.140393661651;
    msg.z_units = 194U;
    msg.speed = 0.330584679255;
    msg.speed_units = 55U;
    msg.roll = 0.734264786519;
    msg.pitch = 0.398572609388;
    msg.yaw = 0.0174051442498;
    msg.custom.assign("KUELMEZTXGFBILGNLFWHRWUHWANKWJGKLPTNAXDGNARZFIVTRSCTMARKDBCFBZOCYOQCKXEUSOPESULPLCSJMOUCWDGDQZJXMLRNBGESMKQUZMJDRKGRICQPXFMRNAIWXHINBPWJXYSIOUDFEHTHKBZYSXXHEIVQPVZFJS");

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
    msg.setTimeStamp(0.403678197626);
    msg.setSource(10371U);
    msg.setSourceEntity(44U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(6U);
    msg.timeout = 31117U;
    msg.lat = 0.509291408946;
    msg.lon = 0.760890401008;
    msg.z = 0.94523118271;
    msg.z_units = 92U;
    msg.speed = 0.229370353423;
    msg.speed_units = 43U;
    msg.roll = 0.524129458947;
    msg.pitch = 0.220148339402;
    msg.yaw = 0.685216688318;
    msg.custom.assign("SWWENUAHCGSUTWOSNSVEQVOBJQQXPPAYBFDJHYECZTZCOFBVYHRBHDDIEVIEJORRCUGOYYDNKFCYSZMKIZTGUTNOHQG");

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
    msg.setTimeStamp(0.779700071003);
    msg.setSource(30055U);
    msg.setSourceEntity(221U);
    msg.setDestination(35238U);
    msg.setDestinationEntity(130U);
    msg.timeout = 30966U;
    msg.lat = 0.477466343106;
    msg.lon = 0.77336269347;
    msg.z = 0.255801061812;
    msg.z_units = 246U;
    msg.speed = 0.463020087525;
    msg.speed_units = 214U;
    msg.roll = 0.554013608609;
    msg.pitch = 0.0809859631308;
    msg.yaw = 0.511688732047;
    msg.custom.assign("DCXVVIRQNEJDVUZTAZTPEFXGLOIGUWRWYTUZEYEXQHWIHSTU");

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
    msg.setTimeStamp(0.892626047323);
    msg.setSource(56224U);
    msg.setSourceEntity(239U);
    msg.setDestination(20426U);
    msg.setDestinationEntity(163U);
    msg.timeout = 37814U;
    msg.lat = 0.860418720329;
    msg.lon = 0.43760482427;
    msg.z = 0.00831957000072;
    msg.z_units = 38U;
    msg.speed = 0.338273438205;
    msg.speed_units = 63U;
    msg.duration = 39909U;
    msg.radius = 0.229937343688;
    msg.flags = 178U;
    msg.custom.assign("GDGSMOENSTAALHDUXDRCPIKQFIZYBAIQBRPBMBJJSCEGWFTAENLGCODVFEAJVZLRQVWSWBYWHFFRFSJMKRIUNVVQYKKBIPKEJZZTGVXXUSPJGYMAYIVNLPDETMCHJQZQMNQWHVZVJRSRJKFTSTUFICMXGAGRKNUXYUQOTEYDQZXDEXUHONBYAUCDPPGHZYCMUMTIZMXN");

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
    msg.setTimeStamp(0.238058968347);
    msg.setSource(37710U);
    msg.setSourceEntity(126U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(56U);
    msg.timeout = 56901U;
    msg.lat = 0.81253680262;
    msg.lon = 0.379276403085;
    msg.z = 0.207775270964;
    msg.z_units = 146U;
    msg.speed = 0.302357092441;
    msg.speed_units = 221U;
    msg.duration = 8937U;
    msg.radius = 0.870747296144;
    msg.flags = 228U;
    msg.custom.assign("CQPBLJQSAJAPFNQRVIBTFRZFNAUZGXUTUGRKZITEDFHATVHNHWYJOKCYGEMGDDGBYLWKMMDBMMCQXZYBFRCURJELBEVEOJNK");

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
    msg.setTimeStamp(0.448753586863);
    msg.setSource(28187U);
    msg.setSourceEntity(55U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(205U);
    msg.timeout = 47413U;
    msg.lat = 0.436011882565;
    msg.lon = 0.247041037125;
    msg.z = 0.215713001656;
    msg.z_units = 195U;
    msg.speed = 0.921004131688;
    msg.speed_units = 35U;
    msg.duration = 65339U;
    msg.radius = 0.942533316032;
    msg.flags = 8U;
    msg.custom.assign("NMVODAXRJJHHZDZUHNLSUZJGQFPUWYEGVDGOVSGFBYWMVOFORFZKCFBENYYXPAPXZCFIUBWAAKOXHYNHTEYDZQVYERCCIMMKUJSNVNLR");

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
    msg.setTimeStamp(0.705977172398);
    msg.setSource(63886U);
    msg.setSourceEntity(103U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(87U);
    msg.custom.assign("AJHSJFETZPVWIZIUAENTSHMYTRFMFLXKLVETWJDZIDKLXVCIQAEYRXHPRBNAOGCPSWAJUBKLZZPPURNFKDEUJMXNVENVDGCDYRTNVBLMDESDQKG");

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
    msg.setTimeStamp(0.390375068988);
    msg.setSource(13561U);
    msg.setSourceEntity(129U);
    msg.setDestination(48127U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("MJQZAJCBKGUHDZUOAGDMZVMQCZVUJTNBKSHHBGQPOLGOOWLXBBUIEGNAWTRWVNTZSLPJPGBCXXRLBZQPJNRVQFQYVOKYVIRROWTVYMYAHAEVRLIUSJINRRLEATMZOSWTGTXYLUMCPFQDXIJQXEFSGNIFEACK");

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
    msg.setTimeStamp(0.792444235522);
    msg.setSource(30530U);
    msg.setSourceEntity(199U);
    msg.setDestination(57444U);
    msg.setDestinationEntity(143U);
    msg.custom.assign("IZVIAMZSLBFZOWSBODUR");

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
    msg.setTimeStamp(0.676072064837);
    msg.setSource(41054U);
    msg.setSourceEntity(126U);
    msg.setDestination(23945U);
    msg.setDestinationEntity(199U);
    msg.timeout = 37587U;
    msg.lat = 0.9730112154;
    msg.lon = 0.549262270406;
    msg.z = 0.174863341864;
    msg.z_units = 134U;
    msg.duration = 48361U;
    msg.speed = 0.236624796858;
    msg.speed_units = 85U;
    msg.type = 58U;
    msg.radius = 0.226642390011;
    msg.length = 0.335625067514;
    msg.bearing = 0.525804713413;
    msg.direction = 206U;
    msg.custom.assign("HBMPSNYDRFWHORQPFWJKKJWTPQDXLCABDXIZNFPZBNXABNJCJOUZKZEBEYLYINTEYVHCHJGSABVBTFFIO");

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
    msg.setTimeStamp(0.622332273411);
    msg.setSource(27824U);
    msg.setSourceEntity(153U);
    msg.setDestination(45490U);
    msg.setDestinationEntity(138U);
    msg.timeout = 31663U;
    msg.lat = 0.952177902967;
    msg.lon = 0.909892136317;
    msg.z = 0.1536545749;
    msg.z_units = 140U;
    msg.duration = 53345U;
    msg.speed = 0.485910681333;
    msg.speed_units = 24U;
    msg.type = 246U;
    msg.radius = 0.477895545911;
    msg.length = 0.670126123297;
    msg.bearing = 0.574951119191;
    msg.direction = 116U;
    msg.custom.assign("VRUAVDZJFBJHYRLUAFGTQMWHWZWHIHLBOZMJAAZDKYOTEWYDJIRXEORDFYNBNCYQHEUXSTSFPR");

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
    msg.setTimeStamp(0.194642479367);
    msg.setSource(7198U);
    msg.setSourceEntity(211U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(199U);
    msg.timeout = 8903U;
    msg.lat = 0.618432285315;
    msg.lon = 0.253620790076;
    msg.z = 0.905895310344;
    msg.z_units = 214U;
    msg.duration = 4893U;
    msg.speed = 0.689955331412;
    msg.speed_units = 131U;
    msg.type = 83U;
    msg.radius = 0.847712850674;
    msg.length = 0.290013908629;
    msg.bearing = 0.960673953705;
    msg.direction = 58U;
    msg.custom.assign("DGJWABIURHWORLTLINQCROBUIPPZWDASSDYVDMRWGCCPAYQEERJVCKQHODSETHCWYUNYNFIXKLXWBUKBEGIHFEONSYJSRBYGQPZVEKOJK");

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
    msg.setTimeStamp(0.188718920898);
    msg.setSource(14152U);
    msg.setSourceEntity(242U);
    msg.setDestination(58370U);
    msg.setDestinationEntity(26U);
    msg.duration = 24430U;
    msg.custom.assign("ULEGBUKXAJFBPOOEYPCIPLDQLGNKJUGDDVDZUBHPZMQYZAZBMIAEOMBXCSGVONWJSNBWMPRTPDFQUMQMQPORTHVEHSDHAYCKULDCTOBZFKGPVWXGRELQLCSUSKYXJRFAKYZNCLWXJWGZGVNHNTTHAG");

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
    msg.setTimeStamp(0.121857521036);
    msg.setSource(48002U);
    msg.setSourceEntity(91U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(235U);
    msg.duration = 13668U;
    msg.custom.assign("HDMNDFJJSUZRCKXFWUGTQRPBKVDIWAEGURKBOWPUNHQOISOTNDPAFERLAVCIHGBXQGYQXMPJSJAFDZKXNONWZOYYVKYLQWSYHLWJMUEGYFMUXLCNGMMOZSLTGEDDAAIBCSKOJSNHVYBMQTCXNAIOEBSQXTQMGPVGKYQKRNPTUVDHZMPZBTVZQKFYSXHERFCLWSZDLORPAIREULGWZEADUV");

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
    msg.setTimeStamp(0.20584786682);
    msg.setSource(14035U);
    msg.setSourceEntity(18U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(141U);
    msg.duration = 55690U;
    msg.custom.assign("OPMXCXOKJRBFZHDIWJYSLSTIKLCNUGQHYDTHPPWUDMFXMGXWQASBGONPUPNIOMBURNKVCIXXFSPQYVOKVJNCMJHXIRFSCQCDWCKLTBBETLPJGNVLYQZEXEJJZWRNDWUEVZYJRLYPYQASAPBFZNGRAUAGBGFXSGQZLHMAJYZTHMEUDMTCNVKFWMGARGTKRKOHSFTLVEXESQBBKOFFNMAWUIDHUDH");

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
    msg.setTimeStamp(0.451028744957);
    msg.setSource(62040U);
    msg.setSourceEntity(169U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(205U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2832905496U;
    tmp_msg_0.start_lat = 0.30258407826;
    tmp_msg_0.start_lon = 0.14110684811;
    tmp_msg_0.start_z = 0.139640385286;
    tmp_msg_0.start_z_units = 186U;
    tmp_msg_0.end_lat = 0.382839635469;
    tmp_msg_0.end_lon = 0.835858673957;
    tmp_msg_0.end_z = 0.955977010065;
    tmp_msg_0.end_z_units = 155U;
    tmp_msg_0.speed = 0.891708069651;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.lradius = 0.355203505635;
    tmp_msg_0.flags = 149U;
    msg.control.set(tmp_msg_0);
    msg.duration = 29734U;
    msg.custom.assign("XDSSQFYZDPCXKGMZBYVTKDMWEDBWCOKYINQCLUTPLHRMKKRCWILBOUHTTIQOQJPZOVFUXDGCVEOEQMTRIFYGLPVQCNUEYZNDPBRNTKBUPYWAHGKSJSIVZHHANBSWXCVHDZUDJTCNHTSGFHBGUEPLNXXEUXJAXGITVMKNIFQYOSWMUWONSVREZAKMDHJWAYCSTXRQQPROGEFDFVLHJMNWXVQ");

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
    msg.setTimeStamp(0.577280276665);
    msg.setSource(17490U);
    msg.setSourceEntity(171U);
    msg.setDestination(14684U);
    msg.setDestinationEntity(103U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.583395445794;
    tmp_msg_0.speed_units = 175U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25702U;
    msg.custom.assign("TFYXLHHMNEAYXUCIOQNMIXAPOOVQIWPBTJEMFRGJSDSWUXSWKHTRJLNGBVTFZBJMFSWIRQRVJDJPBRGYJGTJQXOSAFNVQEYRNVJXKIPPCIHCHHLGYEXXLBYKLWMYYHCSMSFOPAUAQUHX");

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
    msg.setTimeStamp(0.478819107682);
    msg.setSource(21360U);
    msg.setSourceEntity(105U);
    msg.setDestination(58396U);
    msg.setDestinationEntity(77U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.48198339;
    msg.control.set(tmp_msg_0);
    msg.duration = 9647U;
    msg.custom.assign("ERTUVUSZRWGQUAZHOACKIHESJEFDVYYFTRGXSYUWYVJKOIQXNXUEYBOZZWRTKZGGSDJZTXXYZSKIMVCQIDGJOPEPDSLFRRZSSYJLFKKQIUBHONHKRVPMHNTLJSQDMTOAINOOLJGWEHSKMMLAYBMFMDDWCNQDENANWQPNBFNLJPFZLCBUIPJOBPDTELAHWVQRWCIWCCIGXCMRUUPVF");

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
    msg.setTimeStamp(0.0848089377186);
    msg.setSource(36220U);
    msg.setSourceEntity(123U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(2U);
    msg.timeout = 50574U;
    msg.lat = 0.00895453882454;
    msg.lon = 0.776750723954;
    msg.z = 0.390161766666;
    msg.z_units = 7U;
    msg.speed = 0.30095226623;
    msg.speed_units = 224U;
    msg.bearing = 0.715191852261;
    msg.cross_angle = 0.924817074627;
    msg.width = 0.0447141023411;
    msg.length = 0.219235157646;
    msg.hstep = 0.897727915421;
    msg.coff = 54U;
    msg.alternation = 1U;
    msg.flags = 94U;
    msg.custom.assign("NGLEXCQWPHKRVNBRYIUAAZYALJOTHJEIOZXHAEDOSWCRSIWMPIQNLG");

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
    msg.setTimeStamp(0.172372614773);
    msg.setSource(36745U);
    msg.setSourceEntity(52U);
    msg.setDestination(48728U);
    msg.setDestinationEntity(2U);
    msg.timeout = 7296U;
    msg.lat = 0.444214609182;
    msg.lon = 0.635716931204;
    msg.z = 0.871825786195;
    msg.z_units = 163U;
    msg.speed = 0.615458734936;
    msg.speed_units = 247U;
    msg.bearing = 0.769246705066;
    msg.cross_angle = 0.826222860701;
    msg.width = 0.603243688874;
    msg.length = 0.820616536087;
    msg.hstep = 0.316274211001;
    msg.coff = 3U;
    msg.alternation = 171U;
    msg.flags = 219U;
    msg.custom.assign("ACCATPXHOKIGMLAUZLVVRFXOCZIQVAJRN");

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
    msg.setTimeStamp(0.797848018031);
    msg.setSource(53239U);
    msg.setSourceEntity(223U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(25U);
    msg.timeout = 2555U;
    msg.lat = 0.0948286823913;
    msg.lon = 0.701097472033;
    msg.z = 0.792708371272;
    msg.z_units = 127U;
    msg.speed = 0.28441783237;
    msg.speed_units = 77U;
    msg.bearing = 0.963362793784;
    msg.cross_angle = 0.0338902889295;
    msg.width = 0.652250170056;
    msg.length = 0.741120311809;
    msg.hstep = 0.888117149874;
    msg.coff = 233U;
    msg.alternation = 252U;
    msg.flags = 155U;
    msg.custom.assign("VAKSLJXJFMJVBFENEONGAUZGEQSSXRKVBHWLMTCIXSGRUOPSVNIDWP");

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
    msg.setTimeStamp(0.481528935332);
    msg.setSource(25205U);
    msg.setSourceEntity(188U);
    msg.setDestination(64654U);
    msg.setDestinationEntity(108U);
    msg.timeout = 15616U;
    msg.lat = 0.354022559126;
    msg.lon = 0.0960977397039;
    msg.z = 0.114185397281;
    msg.z_units = 48U;
    msg.speed = 0.743144921484;
    msg.speed_units = 8U;
    msg.custom.assign("UPXJDVEBPRYRBYPTLMMQZGUQVQFGLBSCWOEFABHFAHNKJLKIRYMGVDRFCSGDLUEXTUSSABWVFNFKDTHYZOKSHZZXEJEZMMOFUQKBSWARDUISRFSEYPEOAOLIIPOPOJWAADTLHLEDPWIVYWJQTANGQFNIXHGGLIWBCDNCXVLBRJECQMZXJUKMHWLXGIQUTSAZMCKQMOZNPDXXTGKJZAPEVIHRCDI");

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
    msg.setTimeStamp(0.754002405141);
    msg.setSource(45908U);
    msg.setSourceEntity(177U);
    msg.setDestination(40730U);
    msg.setDestinationEntity(55U);
    msg.timeout = 57354U;
    msg.lat = 0.672846789405;
    msg.lon = 0.0328312307512;
    msg.z = 0.604136413292;
    msg.z_units = 168U;
    msg.speed = 0.499364218755;
    msg.speed_units = 13U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.266020407967;
    tmp_msg_0.y = 0.485913196831;
    tmp_msg_0.z = 0.793525922721;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UVHVQUDBYPHIECEUEWHGVVVFHLJHMNYRARPAVUCQIRDPKPIKKLKJWQGTUWKMSIYFSYDYCEZACKPZZNTOKJPJXFBXNEHMNUDUOXYAUABYWSINDFWSSZLMCZBAOGPEQHHLXTBJYNGXQODQIAMHGIQTEPUXYONKMTWGJODFGDBWOPXGALKDARICLQZCZZHZRRVBUEFQNXXEIT");

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
    msg.setTimeStamp(0.506139471842);
    msg.setSource(304U);
    msg.setSourceEntity(95U);
    msg.setDestination(28583U);
    msg.setDestinationEntity(24U);
    msg.timeout = 43871U;
    msg.lat = 0.388602026637;
    msg.lon = 0.598220172131;
    msg.z = 0.322583967016;
    msg.z_units = 90U;
    msg.speed = 0.110895024122;
    msg.speed_units = 43U;
    msg.custom.assign("IBSYEOAWOCCRFSEZDSKPXLHYBFHDYXMHP");

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
    msg.setTimeStamp(0.729395936072);
    msg.setSource(29101U);
    msg.setSourceEntity(235U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(245U);
    msg.x = 0.418836478729;
    msg.y = 0.332166124343;
    msg.z = 0.379911087874;

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
    msg.setTimeStamp(0.3105948085);
    msg.setSource(22179U);
    msg.setSourceEntity(241U);
    msg.setDestination(30000U);
    msg.setDestinationEntity(16U);
    msg.x = 0.799016073914;
    msg.y = 0.54216389669;
    msg.z = 0.486684411641;

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
    msg.setTimeStamp(0.491407708667);
    msg.setSource(28410U);
    msg.setSourceEntity(3U);
    msg.setDestination(37425U);
    msg.setDestinationEntity(0U);
    msg.x = 0.535474450654;
    msg.y = 0.555893398784;
    msg.z = 0.386176438181;

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
    msg.setTimeStamp(0.195314892378);
    msg.setSource(36156U);
    msg.setSourceEntity(142U);
    msg.setDestination(52685U);
    msg.setDestinationEntity(109U);
    msg.timeout = 36124U;
    msg.lat = 0.98255113831;
    msg.lon = 0.510403623887;
    msg.z = 0.0212342379841;
    msg.z_units = 163U;
    msg.amplitude = 0.963418800557;
    msg.pitch = 0.640734887155;
    msg.speed = 0.462491171543;
    msg.speed_units = 227U;
    msg.custom.assign("ULNBZELJYDFQOLYMMGZQCJOACPILVMCZFRYCFDHQSSCDKBDXHIFCXXQOGREAXMVLAOUJHKGBCAUZRMTPBXRMNMPJVFEEHYUJSUOTNDTBEBNYRZZIWMBN");

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
    msg.setTimeStamp(0.769267685789);
    msg.setSource(44053U);
    msg.setSourceEntity(150U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(130U);
    msg.timeout = 15125U;
    msg.lat = 0.389066044867;
    msg.lon = 0.143633304321;
    msg.z = 0.107683923065;
    msg.z_units = 103U;
    msg.amplitude = 0.997034582447;
    msg.pitch = 0.807239874552;
    msg.speed = 0.500864838167;
    msg.speed_units = 218U;
    msg.custom.assign("UHMSSNQNOIK");

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
    msg.setTimeStamp(0.51072761123);
    msg.setSource(62631U);
    msg.setSourceEntity(51U);
    msg.setDestination(21695U);
    msg.setDestinationEntity(57U);
    msg.timeout = 35894U;
    msg.lat = 0.452135245982;
    msg.lon = 0.372126162744;
    msg.z = 0.925349358134;
    msg.z_units = 82U;
    msg.amplitude = 0.393852150391;
    msg.pitch = 0.568666447417;
    msg.speed = 0.0900353894435;
    msg.speed_units = 21U;
    msg.custom.assign("QNJAWUBJPIARMJIOVCWTVIKLSZEMLZOECAXOKVYNQCWHBNFGYFUCNDWQETMUUBSDWPKOBMCJSLHAKCSGHTMDRERZVGPNPMAWUFKSLQJQCVNZSFRRLOGXCZRVGBFSAUGUIIXLMDKBZAQSCIXJYJIENAPUKZETLSIFYJBKYOTUPVMBCFZGYLQHRUDXQFTPPYYNVVSKONWRGWHIZBYTQNJHOODHJXWBGMRO");

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
    msg.setTimeStamp(0.860729033402);
    msg.setSource(62163U);
    msg.setSourceEntity(155U);
    msg.setDestination(12713U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.263878792322);
    msg.setSource(61452U);
    msg.setSourceEntity(79U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.199633037647);
    msg.setSource(46120U);
    msg.setSourceEntity(215U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.820721362308);
    msg.setSource(19924U);
    msg.setSourceEntity(107U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.160271533751;
    msg.lon = 0.916196680512;
    msg.z = 0.398102570884;
    msg.z_units = 190U;
    msg.radius = 0.505721777606;
    msg.duration = 29875U;
    msg.speed = 0.897410943833;
    msg.speed_units = 126U;
    msg.custom.assign("IBOYUGJRIGBKPKBMKBFRDDTAQILEYKAEVCWXVWDGIQTEDMOILVHCXCWWOVKCDJHOYPMDZSNLXMIPICUNWTQNYNVYOLWGRYUWJXPOZKHPKBZAPLTCHNPGUXUCUYTBZIFSRCFYMH");

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
    msg.setTimeStamp(0.786632936535);
    msg.setSource(52331U);
    msg.setSourceEntity(133U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.0192933569466;
    msg.lon = 0.381433359973;
    msg.z = 0.364941192565;
    msg.z_units = 50U;
    msg.radius = 0.0279314564713;
    msg.duration = 5027U;
    msg.speed = 0.188853306115;
    msg.speed_units = 163U;
    msg.custom.assign("MBBNUJKODEMFWOSPGIONAWDLIPLNKAFDABTBOFXKMIGLCPCOVBHTIEVDYVXRRMWQTQDXSSNAEEIA");

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
    msg.setTimeStamp(0.433413674355);
    msg.setSource(24938U);
    msg.setSourceEntity(102U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.52492977765;
    msg.lon = 0.931876809598;
    msg.z = 0.266784003742;
    msg.z_units = 5U;
    msg.radius = 0.283312421864;
    msg.duration = 1497U;
    msg.speed = 0.042885811749;
    msg.speed_units = 175U;
    msg.custom.assign("NDTZYKRJADHBFHDPIGWPMUOKYDODPPVXQQISGKAQONTZTZTCVQFZYJUHKNTKNAWSNLYUEGBECIIR");

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
    msg.setTimeStamp(0.229822138417);
    msg.setSource(26563U);
    msg.setSourceEntity(130U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(37U);
    msg.timeout = 38527U;
    msg.flags = 208U;
    msg.lat = 0.0522083452271;
    msg.lon = 0.0562522419135;
    msg.start_z = 0.405279920147;
    msg.start_z_units = 222U;
    msg.end_z = 0.487271576605;
    msg.end_z_units = 46U;
    msg.radius = 0.689352812698;
    msg.speed = 0.696524426919;
    msg.speed_units = 48U;
    msg.custom.assign("TPWWZAMSFTYBLJYXDGUTGESFTXAMXJMYOSRPKBXTCKHSGGAPTCBUSOHXIRPISJICDMEBOOGDUZNVJNWDJPZHNDKHVADONUUBMKWUXMFBPQFQNENBXKXBPLMMQCYIWW");

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
    msg.setTimeStamp(0.531338578487);
    msg.setSource(28336U);
    msg.setSourceEntity(132U);
    msg.setDestination(19503U);
    msg.setDestinationEntity(136U);
    msg.timeout = 46653U;
    msg.flags = 86U;
    msg.lat = 0.0765284169364;
    msg.lon = 0.655712350019;
    msg.start_z = 0.163222157491;
    msg.start_z_units = 12U;
    msg.end_z = 0.216296858874;
    msg.end_z_units = 101U;
    msg.radius = 0.5026308671;
    msg.speed = 0.262589980065;
    msg.speed_units = 55U;
    msg.custom.assign("JJMTEJIMGSMGSKYYTXYZPPBYBGCCSMTPRKFLEUCHFOFYWHBEXBVRFFHWERPOEZWEVHAUYSAHGZDOWNKILSDOXWSLZNGTFXUYRGZWBTO");

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
    msg.setTimeStamp(0.101491479749);
    msg.setSource(53514U);
    msg.setSourceEntity(141U);
    msg.setDestination(64258U);
    msg.setDestinationEntity(250U);
    msg.timeout = 34284U;
    msg.flags = 172U;
    msg.lat = 0.75431363784;
    msg.lon = 0.121144600696;
    msg.start_z = 0.304009192104;
    msg.start_z_units = 175U;
    msg.end_z = 0.070501628587;
    msg.end_z_units = 187U;
    msg.radius = 0.0712790333729;
    msg.speed = 0.953377436528;
    msg.speed_units = 5U;
    msg.custom.assign("DZQIKOREVLHYEDTKJATTXLYXRGJJTPLUKMCSHCJSNIUKAVQAUZBKFAHNCVLIOQRDDWMVRZDYFUYPJDULQQOEVLZGPCBSCTWMWAPNSFNEMOBVIUNPHRCOWIGYNOLPXGXXCXSMBSNILQBPRUSOWVQJLDXGYJFTGWMBZKJUZTECAXVLRZZKQVWYHOUPABXYDGIHTJGFURVMSEAAEA");

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
    msg.setTimeStamp(0.838892852468);
    msg.setSource(53073U);
    msg.setSourceEntity(140U);
    msg.setDestination(34494U);
    msg.setDestinationEntity(107U);
    msg.timeout = 58055U;
    msg.lat = 0.371219175481;
    msg.lon = 0.970535818348;
    msg.z = 0.523087027757;
    msg.z_units = 135U;
    msg.speed = 0.265289995768;
    msg.speed_units = 198U;
    msg.custom.assign("QQUAPHMMNECBKAJAYHFCXWFLTVECECNNBASOBWYTJJNUPYNVRPUKEYJMKFVCRJALZLOIOG");

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
    msg.setTimeStamp(0.89190383474);
    msg.setSource(55775U);
    msg.setSourceEntity(247U);
    msg.setDestination(41462U);
    msg.setDestinationEntity(107U);
    msg.timeout = 49820U;
    msg.lat = 0.0665639703792;
    msg.lon = 0.866877587998;
    msg.z = 0.989092149297;
    msg.z_units = 39U;
    msg.speed = 0.591880437918;
    msg.speed_units = 211U;
    msg.custom.assign("EGVJREDRGIICURDQKFTFXXAHTOYTOKZZPZJALTCUOZAZHJBWJJIZIRKTAHDEYLPKARGLTXDZMEFXUGPBLDPWWUZWBSGOVX");

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
    msg.setTimeStamp(0.513714797041);
    msg.setSource(19162U);
    msg.setSourceEntity(127U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(158U);
    msg.timeout = 30819U;
    msg.lat = 0.950095928941;
    msg.lon = 0.897121023577;
    msg.z = 0.263362039846;
    msg.z_units = 67U;
    msg.speed = 0.816214009325;
    msg.speed_units = 140U;
    msg.custom.assign("DLNYMAXZTELSXXAIHCPPZXNDFURWGUCOMVKWOSPTJRGWTNGPQLKMXFDHHVROPIVMKNYVJYPPWFWYCUAOVQUYDZDBXFYLEZHEHMLJTALNMABZYNKXGSQEMFRRCQBSIYONTOGFQSCJH");

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
    msg.setTimeStamp(0.478994254101);
    msg.setSource(63488U);
    msg.setSourceEntity(224U);
    msg.setDestination(57528U);
    msg.setDestinationEntity(26U);
    msg.x = 0.408477215602;
    msg.y = 0.0852637405058;
    msg.z = 0.0237578539563;
    msg.t = 0.882241264791;

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
    msg.setTimeStamp(0.124069622812);
    msg.setSource(9657U);
    msg.setSourceEntity(40U);
    msg.setDestination(52463U);
    msg.setDestinationEntity(98U);
    msg.x = 0.187168405891;
    msg.y = 0.97110894994;
    msg.z = 0.781486818846;
    msg.t = 0.627770077206;

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
    msg.setTimeStamp(0.233538374248);
    msg.setSource(2698U);
    msg.setSourceEntity(181U);
    msg.setDestination(34253U);
    msg.setDestinationEntity(229U);
    msg.x = 0.964641078894;
    msg.y = 0.540764566638;
    msg.z = 0.897487569128;
    msg.t = 0.0138829757712;

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
    msg.setTimeStamp(0.528682070667);
    msg.setSource(23942U);
    msg.setSourceEntity(26U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(169U);
    msg.timeout = 51628U;
    msg.name.assign("KJEPCFLXEBWIAAIYEWEDLZVCYSIUSWBWOTMYPHSQHINALVAZLVGOUXEUQEQRHMFXNTLXPFSJUZFVETCBMAMUZXHJWMOQJSOSRKPCYOQNDCYRBITBZBIMLBZFNSQKTWDRJUNYUKEVNLMLRRRBVKXZDLTPVARMDGGXCFCNOHKWFNHEJRGIVJWICBQOYKGGDPZKQD");
    msg.custom.assign("VVSWIRLBGFYLOLNKYBIRBDUBCWTFRTNQICQUXHHJZDEADMAYFLOSCOSNUCEWRWZMSJKZNOUSFLEKBXVXYPBVCZBTQVHTBKETSIXITTJWJXGLPINQOXYWCDRERJDS");

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
    msg.setTimeStamp(0.637358098229);
    msg.setSource(45557U);
    msg.setSourceEntity(217U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(170U);
    msg.timeout = 29404U;
    msg.name.assign("BVNNEDUDMZXXNHFBJGPYODTGXWRTISGSQABLCLEAWXTRUSPPNJKERCCCIPSYTJCLQZJIAYXJLDNCUTHUZFVMMYMUYFEPUQMGOYGEBIDOULZHXMUJPKYDARZCQKPFOMAQVFTIWQBLUITAWBJUAROWGEIDGYKNAHRDBPGBHFT");
    msg.custom.assign("UKJPLCZWCSOMYCFUAAOQZOCCGPAW");

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
    msg.setTimeStamp(0.274707673422);
    msg.setSource(39846U);
    msg.setSourceEntity(137U);
    msg.setDestination(43696U);
    msg.setDestinationEntity(96U);
    msg.timeout = 53939U;
    msg.name.assign("GCWZAVLFHHUIEOLYFRKNQGYXODUETVCYILFTXXINKLAQCEUHHHLMAXIURBBAIAHNWBEWFLDQMUGSQTTBJPWRMVFXHGNUTOWHWSTNKXXYDWEZZFPKTYFCEVDIVWPTAKJBLMJTBQJGQNRUIU");
    msg.custom.assign("EWZXJBCAGVKCBGLQAXQMMAAZYZFJHIWJIMUCDRKUNKHYUWRDAENUNEVHOFWLNDSFTDGKFYLAJXJXZUZTOPYOGKNGVGZXYGHVLRQHERROZVPXCSPEPTFWILLVHQANHDIOIESMZXIBTKBILRSOFLQPCMTHWFRMBYPEUOMJMYPISVSAEVUPCYCQUXJDJDKONNUKFGDGPTRZOBSFZOCEWFXHYHRASJVCJPWWKQTQSN");

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
    msg.setTimeStamp(0.27915634565);
    msg.setSource(7570U);
    msg.setSourceEntity(226U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.954197335134;
    msg.lon = 0.149588526435;
    msg.z = 0.145687633223;
    msg.z_units = 215U;
    msg.speed = 0.326033543446;
    msg.speed_units = 72U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28021U;
    tmp_msg_0.off_x = 0.333311828774;
    tmp_msg_0.off_y = 0.707951574389;
    tmp_msg_0.off_z = 0.158284346799;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0571776657951;
    msg.custom.assign("VUCTEOINCDMPFVWIPRJRAQVQTOWYCNAFSQMGHDSCNUNXXQDNKYVMELUPHCHRGQGICSTHQXBBXHKBPJKGIYUAZXSHJAVQ");

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
    msg.setTimeStamp(0.668916538313);
    msg.setSource(54361U);
    msg.setSourceEntity(178U);
    msg.setDestination(19721U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.454721657147;
    msg.lon = 0.207013660757;
    msg.z = 0.371342215083;
    msg.z_units = 209U;
    msg.speed = 0.422442472471;
    msg.speed_units = 228U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33542U;
    tmp_msg_0.off_x = 0.0382299996642;
    tmp_msg_0.off_y = 0.653188406436;
    tmp_msg_0.off_z = 0.211909559871;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.629795167021;
    msg.custom.assign("RAWXJUTFZLHNVQWGDZHIMUFGFVKOZYODJZJYMHMOYBEBAIMSWPZKMKTQVYTLZPNWSHBRBVYBOCINTERLHAIKXUTMFXQNEPVOXCUGUCQGCKDJFORBSNAZGLYSXHUSANSFQCLGFDXHMVCLSVPQTOEAKQFNSLRPHWSUJWIENIZFFIEAURSDKD");

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
    msg.setTimeStamp(0.962779408991);
    msg.setSource(34414U);
    msg.setSourceEntity(125U);
    msg.setDestination(11139U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.288903916626;
    msg.lon = 0.928063764903;
    msg.z = 0.845861605022;
    msg.z_units = 34U;
    msg.speed = 0.135821090266;
    msg.speed_units = 132U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.607424086058;
    tmp_msg_0.y = 0.225026551242;
    tmp_msg_0.z = 0.186364724027;
    tmp_msg_0.t = 0.480752479576;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 36606U;
    tmp_msg_1.off_x = 0.659275043425;
    tmp_msg_1.off_y = 0.185807323059;
    tmp_msg_1.off_z = 0.9594157236;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.00612392255962;
    msg.custom.assign("LMEXAQBNVJNNPGCYPGCYNUOKZQYNYWDZZLGKIXTEIDHPDHOYDXGWCJMIUBGQXQIWHSWLDAJZKHZOYITWVVRJGLXZPXYHRPITQQVTUGMLQPKBJLFJARBFXEAZHERCAQSAWKBVMTVTXNCLUUYCJKMNEIDFOBEVWWIORTYDZMSPNNSCSAPMDO");

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
    msg.setTimeStamp(0.768999664926);
    msg.setSource(16975U);
    msg.setSourceEntity(98U);
    msg.setDestination(41591U);
    msg.setDestinationEntity(180U);
    msg.vid = 52503U;
    msg.off_x = 0.910337382929;
    msg.off_y = 0.868389394325;
    msg.off_z = 0.292211208216;

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
    msg.setTimeStamp(0.441882465456);
    msg.setSource(10914U);
    msg.setSourceEntity(19U);
    msg.setDestination(25774U);
    msg.setDestinationEntity(115U);
    msg.vid = 30069U;
    msg.off_x = 0.187402515873;
    msg.off_y = 0.951032501082;
    msg.off_z = 0.150643114933;

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
    msg.setTimeStamp(0.688993416337);
    msg.setSource(42418U);
    msg.setSourceEntity(20U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(183U);
    msg.vid = 4070U;
    msg.off_x = 0.538455686169;
    msg.off_y = 0.924173235035;
    msg.off_z = 0.979321019267;

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
    msg.setTimeStamp(0.922952955689);
    msg.setSource(8995U);
    msg.setSourceEntity(60U);
    msg.setDestination(17366U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.375957156718);
    msg.setSource(47223U);
    msg.setSourceEntity(9U);
    msg.setDestination(50349U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.866654759272);
    msg.setSource(9458U);
    msg.setSourceEntity(46U);
    msg.setDestination(36297U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.583565680826);
    msg.setSource(65282U);
    msg.setSourceEntity(212U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(26U);
    msg.mid = 49160U;

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
    msg.setTimeStamp(0.319556509318);
    msg.setSource(41994U);
    msg.setSourceEntity(120U);
    msg.setDestination(17576U);
    msg.setDestinationEntity(206U);
    msg.mid = 5826U;

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
    msg.setTimeStamp(0.943757133372);
    msg.setSource(13721U);
    msg.setSourceEntity(246U);
    msg.setDestination(59399U);
    msg.setDestinationEntity(112U);
    msg.mid = 37668U;

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
    msg.setTimeStamp(0.822226443922);
    msg.setSource(59825U);
    msg.setSourceEntity(86U);
    msg.setDestination(1756U);
    msg.setDestinationEntity(195U);
    msg.state = 9U;
    msg.eta = 17211U;
    msg.info.assign("GNZWUXEXQBVLRRGAYJFAVHWCAHQMDUXMWYJWLNIEBTIFYAXBDCTBAHSHEKAONCQMDLDQWHLVETILDZNTPZIYNOSOSRSCFPHKLCITOZAZOKFCZBQXSRJMVUJNUPXIMHDAWLPFNJMTVDLGIJKEUUGOCJUYFZAVGUEKJMJWXNERYSVSABPWQPSWJSEQGNIBZWYDGSKZXTTPBVEPRCQCIUBBDGMOHYRYXOUK");

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
    msg.setTimeStamp(0.749431017048);
    msg.setSource(54738U);
    msg.setSourceEntity(33U);
    msg.setDestination(55122U);
    msg.setDestinationEntity(210U);
    msg.state = 109U;
    msg.eta = 11565U;
    msg.info.assign("CBXBJLZGKSUOUUWHLTKRBOCQJXFJVPNDUOLAYFYJOZTBCRJDIIPIBJVZKGQJCYYBVRHOVTNAGQPUMWMTZPFDAYKHQVGFIKAFLKZKOENDALVIEXHENRGVRDSLYEFETGSPCF");

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
    msg.setTimeStamp(0.000787093721278);
    msg.setSource(57673U);
    msg.setSourceEntity(22U);
    msg.setDestination(52696U);
    msg.setDestinationEntity(209U);
    msg.state = 199U;
    msg.eta = 41129U;
    msg.info.assign("KMOYXHJOPXCFQJRNCXCATTAVQRPLJY");

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
    msg.setTimeStamp(0.344610049724);
    msg.setSource(51217U);
    msg.setSourceEntity(169U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(151U);
    msg.system = 50267U;
    msg.duration = 35000U;
    msg.speed = 0.333198970472;
    msg.speed_units = 136U;
    msg.x = 0.852084801049;
    msg.y = 0.0805054316835;
    msg.z = 0.388675495456;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.446004543454);
    msg.setSource(39663U);
    msg.setSourceEntity(211U);
    msg.setDestination(1769U);
    msg.setDestinationEntity(180U);
    msg.system = 48281U;
    msg.duration = 54779U;
    msg.speed = 0.597818833529;
    msg.speed_units = 25U;
    msg.x = 0.890719063937;
    msg.y = 0.28478408263;
    msg.z = 0.354834776384;
    msg.z_units = 229U;

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
    msg.setTimeStamp(0.38701580177);
    msg.setSource(32304U);
    msg.setSourceEntity(87U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(92U);
    msg.system = 42861U;
    msg.duration = 43065U;
    msg.speed = 0.605134831771;
    msg.speed_units = 126U;
    msg.x = 0.872775547225;
    msg.y = 0.719072202601;
    msg.z = 0.493861980976;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.628880638552);
    msg.setSource(28073U);
    msg.setSourceEntity(115U);
    msg.setDestination(13395U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.470586179554;
    msg.lon = 0.891463944555;
    msg.speed = 0.615442974394;
    msg.speed_units = 234U;
    msg.duration = 12653U;
    msg.sys_a = 48111U;
    msg.sys_b = 33410U;
    msg.move_threshold = 0.723030437553;

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
    msg.setTimeStamp(0.369026129738);
    msg.setSource(11475U);
    msg.setSourceEntity(57U);
    msg.setDestination(60919U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.464860974529;
    msg.lon = 0.293235239329;
    msg.speed = 0.886276616229;
    msg.speed_units = 23U;
    msg.duration = 39415U;
    msg.sys_a = 10850U;
    msg.sys_b = 54337U;
    msg.move_threshold = 0.696253553872;

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
    msg.setTimeStamp(0.556439937817);
    msg.setSource(8758U);
    msg.setSourceEntity(70U);
    msg.setDestination(27430U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.742558983721;
    msg.lon = 0.499063776338;
    msg.speed = 0.237696261434;
    msg.speed_units = 68U;
    msg.duration = 8237U;
    msg.sys_a = 7792U;
    msg.sys_b = 64510U;
    msg.move_threshold = 0.522616678791;

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
    msg.setTimeStamp(0.559915864748);
    msg.setSource(49455U);
    msg.setSourceEntity(246U);
    msg.setDestination(30207U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.805174350085;
    msg.lon = 0.195744883225;
    msg.z = 0.868739404588;
    msg.z_units = 82U;
    msg.speed = 0.637283593173;
    msg.speed_units = 88U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0388964551137;
    tmp_msg_0.lon = 0.697512814405;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("INDJYMMYGQQBGPXTBGDPDBOFOGXCFLSKWPGXTSXVJOCKHYEGIWVTYQCLIIWT");

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
    msg.setTimeStamp(0.599604657445);
    msg.setSource(62813U);
    msg.setSourceEntity(44U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.822325470795;
    msg.lon = 0.98666286219;
    msg.z = 0.81210075419;
    msg.z_units = 19U;
    msg.speed = 0.941918952228;
    msg.speed_units = 207U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.59220849845;
    tmp_msg_0.lon = 0.189003656811;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RZYGSCKGAJNLHLGHMABCAGYQDVOUPTCMTJADYCQZKKZXQBYDCBUUNJRTZESGNZCPUIXXJLQFXBPMOZSPFYULPMDDSNFCUBFWNXQTAOSADXVFKWXRIVRDKQETYRUKMEFOZCQWEMTJHESOGVLILITJSMXXMHJHIBEBILZBVPPGBTHDCHTHKDFOLBSLP");

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
    msg.setTimeStamp(0.296398560419);
    msg.setSource(23342U);
    msg.setSourceEntity(175U);
    msg.setDestination(60321U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.989942788605;
    msg.lon = 0.0133348799197;
    msg.z = 0.6598787987;
    msg.z_units = 252U;
    msg.speed = 0.969680623595;
    msg.speed_units = 173U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.55327589652;
    tmp_msg_0.lon = 0.411925227568;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LAIUPEUTKYGOWGYPWCJPZEQGIKYGCMVAEQOGLNWJCCAFVYNHUMITCRRZQNBGRKTJRNRGLAQHQEMDDMOFULEAVRFKOELEDISBKQISCWYABWVVJGFTCPPKXXSYBVNINLHOBWZZUZZXHFENSNHFWGKFMJBEABRWKHVZTDUUFLSDPJXETRBZBHQPXHTXUFRUIJXMFHNIHOAMSWOJPZBLVAZLMVYCYODCUOVDYJLDKIXTJTADWTQYKGPMPXRSQNS");

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
    msg.setTimeStamp(0.226501856038);
    msg.setSource(49226U);
    msg.setSourceEntity(84U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.393653142881;
    msg.lon = 0.227975405096;

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
    msg.setTimeStamp(0.962463326403);
    msg.setSource(37939U);
    msg.setSourceEntity(26U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.703110976634;
    msg.lon = 0.332637333052;

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
    msg.setTimeStamp(0.284618645637);
    msg.setSource(18423U);
    msg.setSourceEntity(216U);
    msg.setDestination(5596U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.0648562765267;
    msg.lon = 0.00453635155015;

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
    msg.setTimeStamp(0.457236957442);
    msg.setSource(2184U);
    msg.setSourceEntity(53U);
    msg.setDestination(5358U);
    msg.setDestinationEntity(23U);
    msg.timeout = 58880U;
    msg.lat = 0.112289750574;
    msg.lon = 0.517800702034;
    msg.z = 0.479247893346;
    msg.z_units = 64U;
    msg.pitch = 0.0491165859642;
    msg.amplitude = 0.172842010227;
    msg.duration = 61992U;
    msg.speed = 0.362725803852;
    msg.speed_units = 39U;
    msg.radius = 0.635904121892;
    msg.direction = 197U;
    msg.custom.assign("XAHTTAYAMTGSPSZMDOCEZHHANUCMDEPDJSEQZXSSGHVBMNQEYJUVMZNZFRBXZCMDFTCGJODGFFVAPWKATMIPULYQSHLLBFKDOOBJJQEZDWLUZAWOXSJKDTCHRYGYCYNUOPIHYCZCLOVWFIQJUHXKXGWBRVKBFLWKQLDARXIDFZMJTUGAVKJKCUFELMUVSAYGGWRKPNOTMIVNXVBIIRBPB");

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
    msg.setTimeStamp(0.469841425759);
    msg.setSource(18425U);
    msg.setSourceEntity(189U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(164U);
    msg.timeout = 28178U;
    msg.lat = 0.138987143068;
    msg.lon = 0.100511127005;
    msg.z = 0.53754944498;
    msg.z_units = 34U;
    msg.pitch = 0.449861071035;
    msg.amplitude = 0.107109467918;
    msg.duration = 11890U;
    msg.speed = 0.738273180162;
    msg.speed_units = 244U;
    msg.radius = 0.207349836731;
    msg.direction = 116U;
    msg.custom.assign("ZVAIQNDJXHNKEYMDXQHSXBGENWBOQMVLRIUUWTGYGPNLUOCPWYFZVKFXUOAJFFEPVMOXEAFPKAVEZJYSPBIJRUMRTFSSYLJNQHCSIUDKHLIRVRDOQSTMLMKKWPRUWVVOWEQWBOHSYKPNSJDNDMJZTSZGXATCQMRWBZCPHHUMHGACYAPTUICQIJJFGQNZI");

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
    msg.setTimeStamp(0.74662882984);
    msg.setSource(2652U);
    msg.setSourceEntity(254U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(156U);
    msg.timeout = 13035U;
    msg.lat = 0.954690709527;
    msg.lon = 0.775084230285;
    msg.z = 0.782895791431;
    msg.z_units = 106U;
    msg.pitch = 0.412859960448;
    msg.amplitude = 0.860537603132;
    msg.duration = 26076U;
    msg.speed = 0.639835288635;
    msg.speed_units = 247U;
    msg.radius = 0.72451766948;
    msg.direction = 0U;
    msg.custom.assign("HXIVFEJKJTYQGKSWXVXDGAEZYNLOREQLGPYXIKDJLMAFJXXWRCZO");

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
    msg.setTimeStamp(0.652250749947);
    msg.setSource(48444U);
    msg.setSourceEntity(186U);
    msg.setDestination(7866U);
    msg.setDestinationEntity(94U);
    msg.formation_name.assign("RVTGYOADMETFPLQXVOJYRKSQDKUAILWFTQRHWQZLBSJJAZUHEOINNWHDWIVPCANNXUJSGRCWISVLMNBDFNRZMEYLUOTXXMMHQIDKBIDHXTYPXCRFBTOVYZKPDOZSEM");
    msg.reference_frame = 90U;
    msg.custom.assign("GBAWEVAEWUGJRZFPHVJOLUMADDKWQAHWXGCAJSQZYUJQMYLMIZTDYXODVKKIYGUKAMNXWHBPTVQOVCNAMYTBIMUWODQCRBIELNVQLUHSUKTPATEQUYYBFPKHVOJSBMGWTHLRIXRECFCGNIDXBOYQJFDJHCKPFMDORSNLNZ");

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
    msg.setTimeStamp(0.865883183955);
    msg.setSource(23879U);
    msg.setSourceEntity(39U);
    msg.setDestination(13115U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("PTRPAHLXLQDJITBOBIWNIVHNRKSJZHJVKCVQVEOSAXRFNKOHYKXWTYPPFFZMQL");
    msg.reference_frame = 206U;
    msg.custom.assign("MUCNSYUBBSYSELAZWZTKXAWTNNQRPMLFECXJIVEOVCOLDRATNQKMRDFKOUYMDYHLEXFGNOQAJKJQXKXDICTBEDBBXZ");

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
    msg.setTimeStamp(0.971661901378);
    msg.setSource(10933U);
    msg.setSourceEntity(200U);
    msg.setDestination(57566U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("TQGBKIZHAMHAKWBTHSEKJMIAQSXVXDNQMDLMNPBGVWWWXFVJBEAXQRQSTTYGHLZXPIMDCXSKUUHYOBLL");
    msg.reference_frame = 197U;
    msg.custom.assign("DFYPPTRNNUDAHQGBE");

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
    msg.setTimeStamp(0.872993568551);
    msg.setSource(29308U);
    msg.setSourceEntity(217U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("PMUBIVKSOIDFLHWYIEKXRPNTSAKDXPHMFUS");
    msg.formation_name.assign("XGTYJFSSWMWXS");
    msg.plan_id.assign("KSWYHPHCJXHYKYLPANOUDNRVFZJEALLDBBTWUILNBRAVUHBNNDQYSDVUYWZFQVMJKGKMCBOLKCYIWTSFNECMQFPQKIGIENXXIMHARMMCYZWVHUJEQIEOGGSHXDYSBDOJRXMOQLSKGVTZEUYDXRZPGJ");
    msg.description.assign("DFIXMBCNRCKQCEKXLWVTMDHBQLFZVEMWTUSJEWUQTTAYRBZXJMPOSNPNVQOZFXDUOGAEASABZRCQEIGVVANWUVDPDILWDKUOGPTZEVCCNZCSUXYIJPRZAQRVDFAWOFGOFGPRFGYSLAGLOXPDZYJQQCGXIRITHUZPRJH");
    msg.leader_speed = 0.85775782548;
    msg.leader_bank_lim = 0.166510522088;
    msg.pos_sim_err_lim = 0.677083147213;
    msg.pos_sim_err_wrn = 0.484137334549;
    msg.pos_sim_err_timeout = 14223U;
    msg.converg_max = 0.871470018798;
    msg.converg_timeout = 54741U;
    msg.comms_timeout = 50144U;
    msg.turb_lim = 0.897912575725;
    msg.custom.assign("ZWJYROQCESTYQKKJQMMUEKIOKGYOKJVHEJXNMLAINDKQEQIMPMRVHMPHJIEGIXMXYDOSVTZUOLBOTQFXNIDAXSUZWTQVFFCEAIPSAWZBHFYZDCTCWRZLGMHHJYWBGDRGJQNELKUVGADQDUCTKIZRYOMFKSCVQOAATDHWIXTXHVOJFAMUNSNKNVEFLYYPLRXZGZALPISFYBGWNSVPBGHJFCNURUHXBDZTRBLFCWSLXVCUGSEUBODLWECBNBR");

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
    msg.setTimeStamp(0.954621910263);
    msg.setSource(56908U);
    msg.setSourceEntity(124U);
    msg.setDestination(49399U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("BCMRXKBPVNITHKHWLPMTBTWZMXQFAKPREBORSCZUEGYHIZQOVPPILRIDDRBUUZRGYWQBQBSMEGALSCUODFXGFQNQJNEM");
    msg.formation_name.assign("DWOQXFTHOEVCRPRVXDHECAXTHYBSGIZYGFJBWXINHWURGBJMQDJYRLMQSYTTNJLDIFQIQOZINLNAKAVWJFCKZUNZQDBMFBPWEAVIJASMTEVVDYJUSWIDGQSM");
    msg.plan_id.assign("GOVNHLEYWYUUVISOZOBKYVNYUDGQZGNQFWROHMMMOJDBVFQLN");
    msg.description.assign("EZVTLKDPALOPTTCMPMOIRKQWSEXZIBQJNIOUWEFNMWMELXHIZADQNDFNZECSORAIEGSWJJEOFWUBUADBAMLHBYZUJKCGZDQAAPVCLWTZTXKFHYDGGWLWOFMFQUXUPYCRTVBBNDEVDILSYKLNIFOYJHUGIKGWSWYTRXFPJLSOZVIXOTHVDKRRCGDOUQTGERKANGATHCRSVNSVPYZXSMFPBXYSNJH");
    msg.leader_speed = 0.571924232998;
    msg.leader_bank_lim = 0.947548630653;
    msg.pos_sim_err_lim = 0.660646832729;
    msg.pos_sim_err_wrn = 0.664696889739;
    msg.pos_sim_err_timeout = 37565U;
    msg.converg_max = 0.467223389094;
    msg.converg_timeout = 42139U;
    msg.comms_timeout = 13296U;
    msg.turb_lim = 0.243005680761;
    msg.custom.assign("SNCIWUFSLOVJTJIARYIHSFICQARYICPTHZWZXRLYHODILGKFOKWLBMVUXJFDLHNCNRZLGBDMFNXMSFBSWSWVNWTSPBNUJNVYYHYQOZEUPVYQQGQKKAMENDBPPRBGSDUEQKHOGZXWBADPETYUCCSDKKCPDUSAEMEDWJXITBKQZOAK");

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
    msg.setTimeStamp(0.014691456931);
    msg.setSource(27106U);
    msg.setSourceEntity(65U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("OVFRHPSFQGOYZFSHNBVQWCMOFDRLOVLMFYVHKYORNXESODYSRJQUVELJUFDLWIHAQDMJLBLCIZNSROHZTRMMXVDEHDBYBEOIGFCQTFWQYUPEDLBJLUAMCEPWSETJXUTMUXSPHABMYJIPTVEZKNGYTMWQQGKWAXCLBNJGWKOTZDXHHBUDAPWJKZIR");
    msg.formation_name.assign("WDVYVJCNSJHIXXYBKRDQVCMLOEOSVEIGJIBNFYHPGBGEMXHAMLBHCPFHUFDK");
    msg.plan_id.assign("ZSBWXPYKJWQFDSZWHBZOIANLNBHOZIGIQWSTRUENJHHQZPVHVHYIERQBRCLGFKLPGCEDYP");
    msg.description.assign("VNKRZCSESAVPLKWJUGTUWKZWOLHHPIQLRDQNTBJTUOIQFQBAOTRUIHMRWKRXEIPLUGFAFJWFIWFPOGSIFODANBWWUCEJGYA");
    msg.leader_speed = 0.409924211183;
    msg.leader_bank_lim = 0.0718473971849;
    msg.pos_sim_err_lim = 0.600263693139;
    msg.pos_sim_err_wrn = 0.0914163895502;
    msg.pos_sim_err_timeout = 52855U;
    msg.converg_max = 0.952551783061;
    msg.converg_timeout = 61207U;
    msg.comms_timeout = 10712U;
    msg.turb_lim = 0.179191539111;
    msg.custom.assign("WIZYCIKMEDRAHKUGGFPOOEXBIMHQEDUVZKFHBUDY");

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
    msg.setTimeStamp(0.354769225229);
    msg.setSource(6938U);
    msg.setSourceEntity(107U);
    msg.setDestination(31374U);
    msg.setDestinationEntity(208U);
    msg.control_src = 20284U;
    msg.control_ent = 234U;
    msg.timeout = 0.149804130355;
    msg.loiter_radius = 0.515505721947;
    msg.altitude_interval = 0.0444730545247;

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
    msg.setTimeStamp(0.182437215268);
    msg.setSource(9373U);
    msg.setSourceEntity(69U);
    msg.setDestination(37244U);
    msg.setDestinationEntity(48U);
    msg.control_src = 55622U;
    msg.control_ent = 55U;
    msg.timeout = 0.825571331324;
    msg.loiter_radius = 0.159510668905;
    msg.altitude_interval = 0.588379131733;

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
    msg.setTimeStamp(0.550350089441);
    msg.setSource(29302U);
    msg.setSourceEntity(205U);
    msg.setDestination(5379U);
    msg.setDestinationEntity(16U);
    msg.control_src = 64106U;
    msg.control_ent = 128U;
    msg.timeout = 0.553674270628;
    msg.loiter_radius = 0.391207969101;
    msg.altitude_interval = 0.269524320866;

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
    msg.setTimeStamp(0.873559660888);
    msg.setSource(35573U);
    msg.setSourceEntity(123U);
    msg.setDestination(64250U);
    msg.setDestinationEntity(250U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.356358466426;
    tmp_msg_0.speed_units = 102U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.590974083042;
    tmp_msg_1.z_units = 34U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00745338301456;
    msg.lon = 0.361920356954;
    msg.radius = 0.53321655275;

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
    msg.setTimeStamp(0.175942218625);
    msg.setSource(47229U);
    msg.setSourceEntity(221U);
    msg.setDestination(2874U);
    msg.setDestinationEntity(239U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.690650668532;
    tmp_msg_0.speed_units = 125U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.398590031128;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.736551304213;
    msg.lon = 0.817319709806;
    msg.radius = 0.97581476015;

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
    msg.setTimeStamp(0.451248120637);
    msg.setSource(47256U);
    msg.setSourceEntity(242U);
    msg.setDestination(23487U);
    msg.setDestinationEntity(35U);
    msg.flags = 131U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.465188388407;
    tmp_msg_0.speed_units = 239U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.320563730962;
    tmp_msg_1.z_units = 102U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.606744370977;
    msg.lon = 0.637816972841;
    msg.radius = 0.974245687445;

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
    msg.setTimeStamp(0.215625936751);
    msg.setSource(57725U);
    msg.setSourceEntity(212U);
    msg.setDestination(33697U);
    msg.setDestinationEntity(116U);
    msg.control_src = 65076U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 116U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.796264968317;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.258414448193;
    tmp_tmp_msg_0_1.z_units = 55U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.40421003248;
    tmp_msg_0.lon = 0.20409424556;
    tmp_msg_0.radius = 0.855540603833;
    msg.reference.set(tmp_msg_0);
    msg.state = 77U;
    msg.proximity = 132U;

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
    msg.setTimeStamp(0.61833759739);
    msg.setSource(63026U);
    msg.setSourceEntity(119U);
    msg.setDestination(2880U);
    msg.setDestinationEntity(77U);
    msg.control_src = 33115U;
    msg.control_ent = 2U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 239U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.308904779767;
    tmp_tmp_msg_0_0.speed_units = 183U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.355272415607;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0854152273782;
    tmp_msg_0.lon = 0.18570526258;
    tmp_msg_0.radius = 0.591900493046;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
    msg.proximity = 90U;

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
    msg.setTimeStamp(0.0333449560928);
    msg.setSource(54064U);
    msg.setSourceEntity(100U);
    msg.setDestination(53908U);
    msg.setDestinationEntity(242U);
    msg.control_src = 2752U;
    msg.control_ent = 126U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 84U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.375205596802;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.434662374004;
    tmp_tmp_msg_0_1.z_units = 132U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.565573720747;
    tmp_msg_0.lon = 0.97692346072;
    tmp_msg_0.radius = 0.39644188284;
    msg.reference.set(tmp_msg_0);
    msg.state = 166U;
    msg.proximity = 86U;

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
    msg.setTimeStamp(0.279780155763);
    msg.setSource(30732U);
    msg.setSourceEntity(206U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.507114637435;
    msg.ay_cmd = 0.102160978157;
    msg.az_cmd = 0.568394152564;
    msg.ax_des = 0.725918453451;
    msg.ay_des = 0.43056701358;
    msg.az_des = 0.454786309685;
    msg.virt_err_x = 0.150077590827;
    msg.virt_err_y = 0.857628872414;
    msg.virt_err_z = 0.504044027338;
    msg.surf_fdbk_x = 0.678010929432;
    msg.surf_fdbk_y = 0.444438549061;
    msg.surf_fdbk_z = 0.882954024055;
    msg.surf_unkn_x = 0.536770735776;
    msg.surf_unkn_y = 0.504048212598;
    msg.surf_unkn_z = 0.911109423548;
    msg.ss_x = 0.0779916703039;
    msg.ss_y = 0.229945672543;
    msg.ss_z = 0.0255666301643;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QIPXLZUXFDWOKNBALNRKBHVIBWBJJEKFFDBSSOXZXDUUJVFPU");
    tmp_msg_0.dist = 0.55141053955;
    tmp_msg_0.err = 0.464809233379;
    tmp_msg_0.ctrl_imp = 0.36048093043;
    tmp_msg_0.rel_dir_x = 0.773895723013;
    tmp_msg_0.rel_dir_y = 0.349614773961;
    tmp_msg_0.rel_dir_z = 0.416016026326;
    tmp_msg_0.err_x = 0.927838043333;
    tmp_msg_0.err_y = 0.638663936193;
    tmp_msg_0.err_z = 0.331616197732;
    tmp_msg_0.rf_err_x = 0.952136786421;
    tmp_msg_0.rf_err_y = 0.0188075802818;
    tmp_msg_0.rf_err_z = 0.307299593207;
    tmp_msg_0.rf_err_vx = 0.817902077808;
    tmp_msg_0.rf_err_vy = 0.749289727702;
    tmp_msg_0.rf_err_vz = 0.32598713084;
    tmp_msg_0.ss_x = 0.942343097593;
    tmp_msg_0.ss_y = 0.861893067356;
    tmp_msg_0.ss_z = 0.558690712405;
    tmp_msg_0.virt_err_x = 0.0457605246609;
    tmp_msg_0.virt_err_y = 0.37352420834;
    tmp_msg_0.virt_err_z = 0.631062496731;
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
    msg.setTimeStamp(0.364211893276);
    msg.setSource(26860U);
    msg.setSourceEntity(222U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.759484826579;
    msg.ay_cmd = 0.577635687424;
    msg.az_cmd = 0.0666466210312;
    msg.ax_des = 0.767487948727;
    msg.ay_des = 0.146754250573;
    msg.az_des = 0.436703567252;
    msg.virt_err_x = 0.16089617375;
    msg.virt_err_y = 0.265712477609;
    msg.virt_err_z = 0.38055301443;
    msg.surf_fdbk_x = 0.100120556022;
    msg.surf_fdbk_y = 0.728716751135;
    msg.surf_fdbk_z = 0.210111644038;
    msg.surf_unkn_x = 0.522756362976;
    msg.surf_unkn_y = 0.0214798591201;
    msg.surf_unkn_z = 0.465918749647;
    msg.ss_x = 0.17206045083;
    msg.ss_y = 0.598651000633;
    msg.ss_z = 0.988405323262;

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
    msg.setTimeStamp(0.456811641456);
    msg.setSource(28881U);
    msg.setSourceEntity(149U);
    msg.setDestination(16774U);
    msg.setDestinationEntity(30U);
    msg.ax_cmd = 0.800763757823;
    msg.ay_cmd = 0.273032928441;
    msg.az_cmd = 0.84906289503;
    msg.ax_des = 0.339439867554;
    msg.ay_des = 0.777895026495;
    msg.az_des = 0.118331373941;
    msg.virt_err_x = 0.446449952317;
    msg.virt_err_y = 0.669464133314;
    msg.virt_err_z = 0.25615933484;
    msg.surf_fdbk_x = 0.357637753098;
    msg.surf_fdbk_y = 0.125817600898;
    msg.surf_fdbk_z = 0.742837256663;
    msg.surf_unkn_x = 0.41182952072;
    msg.surf_unkn_y = 0.169269002341;
    msg.surf_unkn_z = 0.308687139484;
    msg.ss_x = 0.276220025297;
    msg.ss_y = 0.327503099153;
    msg.ss_z = 0.84478637734;

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
    msg.setTimeStamp(0.202676204261);
    msg.setSource(54328U);
    msg.setSourceEntity(122U);
    msg.setDestination(13455U);
    msg.setDestinationEntity(210U);
    msg.s_id.assign("SPEAAPEZEIQCYWCBFBHXJLZSHYMQQHDSNFGJXSSGPLYLYXQUPBBAZVPUDAIKNONLNCKHKIBUBWFDGWCOHOCMQKZBYCJEXTZLYWOQQOIYCDUGFFPRZHPSMPWXJLAJZEIXMVMMMRVGGKNRWJLEALFZMFGRCJEFZRBRUDKOONQTCKAEIXTQXIINUMABXFVGARAGNFSRJLHWTUVYMSOUEVTTRCIUXNTPKJLDGDDTSDDHOHVPW");
    msg.dist = 0.349380085394;
    msg.err = 0.51633429228;
    msg.ctrl_imp = 0.876614554897;
    msg.rel_dir_x = 0.888707224443;
    msg.rel_dir_y = 0.0273139025144;
    msg.rel_dir_z = 0.188441209975;
    msg.err_x = 0.0928501641695;
    msg.err_y = 0.317818674077;
    msg.err_z = 0.419835292932;
    msg.rf_err_x = 0.788915316035;
    msg.rf_err_y = 0.471429020023;
    msg.rf_err_z = 0.0903512688323;
    msg.rf_err_vx = 0.249669454119;
    msg.rf_err_vy = 0.781142986084;
    msg.rf_err_vz = 0.310912665129;
    msg.ss_x = 0.645703251031;
    msg.ss_y = 0.836869905758;
    msg.ss_z = 0.89044918454;
    msg.virt_err_x = 0.419599512063;
    msg.virt_err_y = 0.778426954995;
    msg.virt_err_z = 0.997038466097;

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
    msg.setTimeStamp(0.731193730497);
    msg.setSource(36144U);
    msg.setSourceEntity(183U);
    msg.setDestination(51767U);
    msg.setDestinationEntity(220U);
    msg.s_id.assign("OEDBFQLSXZQUMCWLFROSECMUAYJGUJMKEXISVTHNSHWYMDHTLBVJWPVBEUWBOPTQIVANXEFJGEPGHVOFLMQWIRDZXCSNBDQCMIAKLTWZYVSPGYVGCZSNCEPUNTOQNWFSNWROXMKLPHMPM");
    msg.dist = 0.130856422939;
    msg.err = 0.944130885727;
    msg.ctrl_imp = 0.0315181409606;
    msg.rel_dir_x = 0.761635997202;
    msg.rel_dir_y = 0.049075697016;
    msg.rel_dir_z = 0.0740144573201;
    msg.err_x = 0.0633584877869;
    msg.err_y = 0.757203149752;
    msg.err_z = 0.803260934952;
    msg.rf_err_x = 0.936389014627;
    msg.rf_err_y = 0.913957535496;
    msg.rf_err_z = 0.422664315772;
    msg.rf_err_vx = 0.480479683598;
    msg.rf_err_vy = 7.8173887444e-05;
    msg.rf_err_vz = 0.918895973637;
    msg.ss_x = 0.628441994167;
    msg.ss_y = 0.814948161666;
    msg.ss_z = 0.575459602039;
    msg.virt_err_x = 0.762429843726;
    msg.virt_err_y = 0.407025750247;
    msg.virt_err_z = 0.948272766125;

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
    msg.setTimeStamp(0.810766332049);
    msg.setSource(55391U);
    msg.setSourceEntity(89U);
    msg.setDestination(17874U);
    msg.setDestinationEntity(17U);
    msg.s_id.assign("YHIECGJOBABKAHCBMEPWLRZWWKNKGWZFBJQZFSGKPMJOQSMDNPQSUTNOFDXLHZYSVTZWZBAMUDYAETPMNUBGRVAXZPNPVUMDPSIHSKJQOCQEFOHMCXKLYKEHCFVXQEGCBPIBLOTDLFLVOMYZM");
    msg.dist = 0.128915986147;
    msg.err = 0.740837156983;
    msg.ctrl_imp = 0.251292106573;
    msg.rel_dir_x = 0.0013671902514;
    msg.rel_dir_y = 0.442068628658;
    msg.rel_dir_z = 0.665603582643;
    msg.err_x = 0.798554629522;
    msg.err_y = 0.278118220457;
    msg.err_z = 0.543400664908;
    msg.rf_err_x = 0.592615159144;
    msg.rf_err_y = 0.127661730809;
    msg.rf_err_z = 0.512656819791;
    msg.rf_err_vx = 0.354256073915;
    msg.rf_err_vy = 0.268525556082;
    msg.rf_err_vz = 0.716189033889;
    msg.ss_x = 0.781224597675;
    msg.ss_y = 0.800320169409;
    msg.ss_z = 0.690436381661;
    msg.virt_err_x = 0.508630100119;
    msg.virt_err_y = 0.910440368435;
    msg.virt_err_z = 0.176181361386;

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
    msg.setTimeStamp(0.367982891884);
    msg.setSource(45770U);
    msg.setSourceEntity(157U);
    msg.setDestination(44284U);
    msg.setDestinationEntity(172U);
    msg.timeout = 56243U;
    msg.rpm = 0.298992918134;
    msg.direction = 143U;
    msg.custom.assign("WCNXZFGOGPILXETBBVXTXBBZLCOGMTYANHWSCJTTUPATJEVWZFQDEWYUZUJEDDPQCXRMTMJNIBEYTYDVXJKEIUGYSHWTBVGDVSUDLFHULNPQDIDEOGFLCVLDBKPUXAKHALAIVAEJIW");

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
    msg.setTimeStamp(0.233674632393);
    msg.setSource(32299U);
    msg.setSourceEntity(155U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(130U);
    msg.timeout = 44599U;
    msg.rpm = 0.255972622193;
    msg.direction = 78U;
    msg.custom.assign("RXCCPIZWLDVJBZAYXVNHCPRUXEDYCWDYWPITPSUUMGEDSKMDAVEHWXLJBWOJFCFGQPNQIFVTHRVBETIAQNTRPVGLJGHXMOQHUIEEIKSGOZWFYSSYXLUNTBIFTPHNIPAJVHDJHMGYAOLKLVMBEYWMRBNJDQIKBTIVQPRXHOZOFTUMFRZRKATSKPUAZDDXLCOMYJEBJFYNFWDEMVYSQKZAZCKUXUAONGCGJZLH");

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
    msg.setTimeStamp(0.767779734508);
    msg.setSource(28267U);
    msg.setSourceEntity(182U);
    msg.setDestination(15560U);
    msg.setDestinationEntity(160U);
    msg.timeout = 14135U;
    msg.rpm = 0.294562627597;
    msg.direction = 114U;
    msg.custom.assign("WPFEUIBTSNVJHGUQHYTYCTIPEAGFGWNHUYTERXYHALOQPYMNDQZRVBAJJTLOKSZHZUZEREZLLOZAHCIKFSMDEPGXFTFVJQZLRBMWAQLOXSNNIVONKWEBAIFDCJSV");

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
    msg.setTimeStamp(0.139245113317);
    msg.setSource(46740U);
    msg.setSourceEntity(169U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("AOCQXWOYMGKCQKBXPAPUHCSDHAPXJIUUOWRYLVOSHTEWQHMRZLUJRTZWMPXOBASSE");
    msg.type = 100U;
    msg.op = 1U;
    msg.group_name.assign("VXMCBWFZZSNOHVHDRMNLPWTVEGLNMZEOIDENCGOQR");
    msg.plan_id.assign("FXYRROLOJFWLWFPTYGUVKXDSGLOQXBJNRJBTFHTBAWRIFFAGEZQEZCPSSBJCGVMOZSIXINWUYFZRESTENLKVMUKODCHKWUHEPZPILJUODFNRIJMCRCOOQVHXDDNUXUPEGQMBLUHANTBKGHTLYPAHIEYDPJWLVVQSUCLXNXDCMMCZMHBQNGJMVBFOWWQDPINEEKZIVSYMBZATYYDPTAOYZGASSYCWIVWLTAIGRBGJUCKVEK");
    msg.description.assign("XNDUPYJJHWUCWPDGCFQKKPLAH");
    msg.reference_frame = 73U;
    msg.leader_bank_lim = 0.908609578132;
    msg.leader_speed_min = 0.415491820229;
    msg.leader_speed_max = 0.0203270203616;
    msg.leader_alt_min = 0.101121760626;
    msg.leader_alt_max = 0.142073511975;
    msg.pos_sim_err_lim = 0.309840612692;
    msg.pos_sim_err_wrn = 0.203848362267;
    msg.pos_sim_err_timeout = 16488U;
    msg.converg_max = 0.614839459342;
    msg.converg_timeout = 19020U;
    msg.comms_timeout = 8988U;
    msg.turb_lim = 0.695243403628;
    msg.custom.assign("MBBOPRVGAKJLWHUEMQXBRTNZIZETNEORHQHAQPJCMWSPTKMBOKGIKSBMOBFREVDYYSWOFHDDUYMKMJEACC");

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
    msg.setTimeStamp(0.854675166327);
    msg.setSource(21227U);
    msg.setSourceEntity(174U);
    msg.setDestination(23352U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("TWHZCVGOGCRQUNMWXVQNRFICUCRWUOJIEHURVXFPKIMUGDPDNAMJXLCJHZNLJSSRRZSKTUPMXXZZJNQZHZHWMLWBOVHODDYFMVDSLLBVNYPLOKPPZWQHTHPD");
    msg.type = 64U;
    msg.op = 140U;
    msg.group_name.assign("MUSQVJHEZPDGZIZQHKSOEDWOZBZAUAPJJATEYKGAFVKTDVORCNPHNWKVLILYLCXMULJLEOTOVSPMTPYWFUCJPZIJKWCCUOKKYSILGXWMNCBHSTTNMBBITEBALWEYD");
    msg.plan_id.assign("KMABSHOYCNISSGGEUVEMBQIEEHFOMNCLQLNCRFGPLKGMDDHPFVJAQGPVDJOKAYCTZIIBXLGRTGZBXYCKNTKUQISJMXAUUWLLVWVMJSFLZHQAZLPTFCLZTHYJRUXPWIXFRUDDEMDUGNOJ");
    msg.description.assign("JUKHFLDWTNPYGIMHQRCOGDZQLIBNVDGUHPBHSXWDMKKYPWXACRXEPKXGIMMAANYTTNCF");
    msg.reference_frame = 92U;
    msg.leader_bank_lim = 0.845452950896;
    msg.leader_speed_min = 0.548340020221;
    msg.leader_speed_max = 0.945056241074;
    msg.leader_alt_min = 0.13595662872;
    msg.leader_alt_max = 0.738509433548;
    msg.pos_sim_err_lim = 0.048004993111;
    msg.pos_sim_err_wrn = 0.436192558863;
    msg.pos_sim_err_timeout = 35350U;
    msg.converg_max = 0.416050719325;
    msg.converg_timeout = 63231U;
    msg.comms_timeout = 14514U;
    msg.turb_lim = 0.853401727109;
    msg.custom.assign("AZQYEHIVCJXGKYTNRDGBRAIUJZSXCAYVALVZBPYHTIVMTOVSZBYXWPTKNQWFLNWUSOKHAFKGFCMMZOEBWSLJFORGUIHIEPWOSCXQMFYZREJCERPTAJDXOWZLRHNPTNBAUJLOZVNBXDWVUAXKTWRGOQQDYKJZJCTCDMQIBMJNCAFHKFZRO");

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
    msg.setTimeStamp(0.366012557012);
    msg.setSource(31553U);
    msg.setSourceEntity(14U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("LERAMPDRBTIRINYBMMRUJDYSEZBQHHORFQXNOZWYLKKLWWPSPUYNGNCMXAYQLEETRAXAZVDUYEFFJBHKMIONK");
    msg.type = 94U;
    msg.op = 210U;
    msg.group_name.assign("WNJSSDNIBNJIVCZOXLRZXBIOSJHUIYPHNAUJTUXBQLPYSGCZOZBYCFWEARKMGERDRSGGGDJEQDWZMXHHWDRIPPHRSMEKXUADBPLOBFQIOWIPDGXORQENLPJEPZLASEASOKVTUTVVIMBKAJVBRLLOTRXHKULZMMHYOKWF");
    msg.plan_id.assign("OVBCBLGYLFUDMLEVLNVNJFWOWIAZETLSGYMDNALDHIVPRUWZZVYQI");
    msg.description.assign("UVXFWXGFWORZJKFSIYGSEINZPTYCSIYZKNFHEAZLPDZNHHXFYUZBYNBLIXZVJLHICGAFQMQLPRJTUNRHVGFKTCFBDAILEXYYKMXWPQBUMVTDDDMYRWDRMXFWGZWMPCHLIZJOO");
    msg.reference_frame = 222U;
    msg.leader_bank_lim = 0.0105006513757;
    msg.leader_speed_min = 0.190444188567;
    msg.leader_speed_max = 0.75942318073;
    msg.leader_alt_min = 0.894640414277;
    msg.leader_alt_max = 0.803609993093;
    msg.pos_sim_err_lim = 0.267211552334;
    msg.pos_sim_err_wrn = 0.616395871183;
    msg.pos_sim_err_timeout = 13197U;
    msg.converg_max = 0.920932061599;
    msg.converg_timeout = 51151U;
    msg.comms_timeout = 53719U;
    msg.turb_lim = 0.422242359789;
    msg.custom.assign("PGLPLGEQEROWJIPPUXUPJHISSAIVYXNRMIGTSIWAOBWGEQQGMCVUFYKMYYSWZHFHGJYQTVNKTOQXLJGCEUJQLRGBPHFAICZXRBTTDSFPAHDWVMKZVGHNDRDCSQCKCDHJETGAFBAWNUZIXZNSLKMVNVDOAWQFRLUOYDOSJVOXNASKTLCNWRNIYFLYCMXVKOXUZQFMZUOIUPBET");

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
    msg.setTimeStamp(0.882349305436);
    msg.setSource(49532U);
    msg.setSourceEntity(12U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(232U);
    msg.timeout = 4928U;
    msg.lat = 0.408704516236;
    msg.lon = 0.772407976835;
    msg.z = 0.761047879561;
    msg.z_units = 59U;
    msg.speed = 0.563824392203;
    msg.speed_units = 167U;
    msg.custom.assign("JJUVQPRVQPUSNPCBIXRVAHEBIKLLQWPXFJBOKUNRHZFBNVTJJUCWOTSAZX");

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
    msg.setTimeStamp(0.981986476735);
    msg.setSource(5268U);
    msg.setSourceEntity(236U);
    msg.setDestination(8733U);
    msg.setDestinationEntity(86U);
    msg.timeout = 29316U;
    msg.lat = 0.0458988645336;
    msg.lon = 0.753733036832;
    msg.z = 0.714207709514;
    msg.z_units = 61U;
    msg.speed = 0.260946888576;
    msg.speed_units = 114U;
    msg.custom.assign("YZNHADVHTBLPJUPDVYTYTSLWRNTZPOOPWPNMRYPBJUMLIQMXLMOIVATMOGGYAOZSUAIRTZGVUQDWBDGRWXFEGJCXRKLOIEZVDGAEGXUMBEVAWVWRRXDKVPQLEROIQJHGXTHBYHXKBTEHMQKQUDJHVLYC");

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
    msg.setTimeStamp(0.206171249199);
    msg.setSource(35645U);
    msg.setSourceEntity(214U);
    msg.setDestination(17391U);
    msg.setDestinationEntity(179U);
    msg.timeout = 61582U;
    msg.lat = 0.609524069156;
    msg.lon = 0.0443089512319;
    msg.z = 0.781501773317;
    msg.z_units = 207U;
    msg.speed = 0.449340367548;
    msg.speed_units = 117U;
    msg.custom.assign("MGKXWRSVQZZSSBVRMGVZNYXJKURGLIOYPOGJOBPTATKMDFOKJYNAWSUMNFYLXSBPPGXRSVHWZEARVEJLGHAJPTINBTQQRUETIBZMEGLFBFWZQ");

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
    msg.setTimeStamp(0.817606019029);
    msg.setSource(14760U);
    msg.setSourceEntity(199U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(247U);
    msg.timeout = 10400U;
    msg.lat = 0.581318731798;
    msg.lon = 0.264673756496;
    msg.z = 0.25279433341;
    msg.z_units = 247U;
    msg.speed = 0.0390728133445;
    msg.speed_units = 195U;
    msg.custom.assign("XBQMCYFRFJXUAABZLVSZKBFGAJCTRWMBXMJJHXZDAYRUNIZULVNERMTAHXOIQPYSQIKRZGLZPYWAIPCVGXCDMOMIVPZWMNEIFLIUEANVEFPXTYJCPNRTXWKGODMRTHOOC");

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
    msg.setTimeStamp(0.590107672401);
    msg.setSource(22621U);
    msg.setSourceEntity(86U);
    msg.setDestination(2675U);
    msg.setDestinationEntity(39U);
    msg.timeout = 27417U;
    msg.lat = 0.932713289509;
    msg.lon = 0.147054225338;
    msg.z = 0.869447404542;
    msg.z_units = 254U;
    msg.speed = 0.755833962837;
    msg.speed_units = 194U;
    msg.custom.assign("VJZBDYUARAJVNPPNKRKDFVRVHJDOZGYGRWCKSILKQSKCMNGTRPUMTXIPEWLYBCSKOUHSXQYYOYAJXSWNMLGYOJEKHGYCAEBXTSJSJUGBUHRUVMGEQIFJYTCQJXAPZCHLLYTDXMQQTGSIWPBQLMPIKOFUQBEFMUTDEQOMDMDXRVV");

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
    msg.setTimeStamp(0.428494154284);
    msg.setSource(6516U);
    msg.setSourceEntity(151U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(2U);
    msg.timeout = 22236U;
    msg.lat = 0.0954960995828;
    msg.lon = 0.438957577478;
    msg.z = 0.684666928711;
    msg.z_units = 102U;
    msg.speed = 0.29050689419;
    msg.speed_units = 45U;
    msg.custom.assign("BDVXANUKLEMRSXDJJOZACRRSYIGDEHWCYACGTBNKXFFBUPRFEMCUDUPSXRZJHPSHHUOQITAVZHJFWSTLCRGYENWAGXYZVMFJQOVHODJOKYAXMQDJPQSVNCGIPFBZOMHTITGNVVLXZBNPKLGQVWGIQDNWMIHPKBEKLLQZXYYAWWWKQOTEIICNCLSKRAKYXIUZQDMUVWEBDZPDSMMR");

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
    msg.setTimeStamp(0.736215647843);
    msg.setSource(34195U);
    msg.setSourceEntity(88U);
    msg.setDestination(63603U);
    msg.setDestinationEntity(195U);
    msg.arrival_time = 0.546567942661;
    msg.lat = 0.0787393479603;
    msg.lon = 0.354511640707;
    msg.z = 0.1024416225;
    msg.z_units = 159U;
    msg.travel_z = 0.845123655601;
    msg.travel_z_units = 178U;
    msg.delayed = 197U;

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
    msg.setTimeStamp(0.754812760549);
    msg.setSource(60197U);
    msg.setSourceEntity(224U);
    msg.setDestination(47982U);
    msg.setDestinationEntity(156U);
    msg.arrival_time = 0.133709612603;
    msg.lat = 0.957386351641;
    msg.lon = 0.295414514139;
    msg.z = 0.684058377984;
    msg.z_units = 37U;
    msg.travel_z = 0.925290059828;
    msg.travel_z_units = 75U;
    msg.delayed = 5U;

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
    msg.setTimeStamp(0.549900697263);
    msg.setSource(8793U);
    msg.setSourceEntity(206U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(44U);
    msg.arrival_time = 0.367667978108;
    msg.lat = 0.158713321821;
    msg.lon = 0.500467089898;
    msg.z = 0.34600204113;
    msg.z_units = 208U;
    msg.travel_z = 0.131188538548;
    msg.travel_z_units = 166U;
    msg.delayed = 210U;

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
    msg.setTimeStamp(0.289238121917);
    msg.setSource(29976U);
    msg.setSourceEntity(1U);
    msg.setDestination(65391U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.43264477978;
    msg.lon = 0.12580503128;
    msg.z = 0.256701103186;
    msg.z_units = 31U;
    msg.speed = 0.469667821091;
    msg.speed_units = 140U;
    msg.bearing = 0.657303574883;
    msg.cross_angle = 0.780655514752;
    msg.width = 0.540804842407;
    msg.length = 0.223792896011;
    msg.coff = 162U;
    msg.angaperture = 0.0684450681522;
    msg.range = 6700U;
    msg.overlap = 181U;
    msg.flags = 156U;
    msg.custom.assign("FGPXUYTHWQROMIIWMDPPZHAKRQJYTRAFOYIEBLGHZGXXYCROBJEJJXERAQENDFFFBQPAXYQVOHMTMZLWIWVAFKUWSVCJLQNAGWUXVCYLKAUOCSO");

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
    msg.setTimeStamp(0.215131653059);
    msg.setSource(41266U);
    msg.setSourceEntity(183U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.104813481038;
    msg.lon = 0.162436813082;
    msg.z = 0.442623957661;
    msg.z_units = 229U;
    msg.speed = 0.605465971141;
    msg.speed_units = 107U;
    msg.bearing = 0.644203744271;
    msg.cross_angle = 0.673841319282;
    msg.width = 0.243991784965;
    msg.length = 0.097232193239;
    msg.coff = 181U;
    msg.angaperture = 0.774902326958;
    msg.range = 38790U;
    msg.overlap = 143U;
    msg.flags = 137U;
    msg.custom.assign("FLUUCILLLDEHHEVTZVABUUBAUKLUBPIHEWJCJHTWFZRWGAIRJYZKVZLGWLKEXCDYRNDOEVIUBDQDAKSDGWPQJAOWBCCVQNOOMIAHBFBZZYYZPPSEJRXHVVMOIQBYMNNWGNJVKP");

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
    msg.setTimeStamp(0.271195706628);
    msg.setSource(19439U);
    msg.setSourceEntity(194U);
    msg.setDestination(62320U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.397760816156;
    msg.lon = 0.190930942957;
    msg.z = 0.365019270404;
    msg.z_units = 47U;
    msg.speed = 0.629764065251;
    msg.speed_units = 232U;
    msg.bearing = 0.708000370155;
    msg.cross_angle = 0.777993264077;
    msg.width = 0.585181925409;
    msg.length = 0.0491559833166;
    msg.coff = 249U;
    msg.angaperture = 0.246287019882;
    msg.range = 21438U;
    msg.overlap = 165U;
    msg.flags = 36U;
    msg.custom.assign("SVFIMCSLYSXZCFYSNJNUKZQBSQIVOFMZHVJWYRDFZSALRQISKQNMMDFHBKPJPZXAWHYLERULPHIAQTDLAKDLXYISPPRGRDJ");

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
    msg.setTimeStamp(0.394893117841);
    msg.setSource(22358U);
    msg.setSourceEntity(28U);
    msg.setDestination(23390U);
    msg.setDestinationEntity(229U);
    msg.timeout = 19887U;
    msg.lat = 0.0776278211751;
    msg.lon = 0.646555670461;
    msg.z = 0.370723591446;
    msg.z_units = 237U;
    msg.speed = 0.380887725823;
    msg.speed_units = 87U;
    msg.syringe0 = 131U;
    msg.syringe1 = 29U;
    msg.syringe2 = 20U;
    msg.custom.assign("HLWVPWMWIIFXRZDMDKYARRYTJMFNXPBVXYZFSSPPGJZWROTYVULXOIUEJPIUCHFBUXIQBHTEBCGQQZJNRJNOILEBQGGFAUYECJKZWFDVSWJGGWADAGOVYKXMHBPOKRGZSTQG");

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
    msg.setTimeStamp(0.656753657542);
    msg.setSource(24775U);
    msg.setSourceEntity(8U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(99U);
    msg.timeout = 55697U;
    msg.lat = 0.159584237549;
    msg.lon = 0.272873738105;
    msg.z = 0.676251821793;
    msg.z_units = 174U;
    msg.speed = 0.384636253146;
    msg.speed_units = 210U;
    msg.syringe0 = 24U;
    msg.syringe1 = 197U;
    msg.syringe2 = 148U;
    msg.custom.assign("TUUEROXHUKMJSADZICKXIQHGUHTQKFZBVLCZXMYCMDMDIJPCLSDMYIVBOGN");

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
    msg.setTimeStamp(0.533502532796);
    msg.setSource(49206U);
    msg.setSourceEntity(187U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(4U);
    msg.timeout = 216U;
    msg.lat = 0.769383610207;
    msg.lon = 0.566905615822;
    msg.z = 0.0196991539683;
    msg.z_units = 253U;
    msg.speed = 0.930821255095;
    msg.speed_units = 253U;
    msg.syringe0 = 67U;
    msg.syringe1 = 22U;
    msg.syringe2 = 191U;
    msg.custom.assign("ZNRAYZIJQTKYCZLQDRWNEOWCRLNTDBJOQISCMTGMZVMFQSFRLURVZWHWBIEBRTUBSPHVBPHPYQXBWCDKNOGCSGXTUAVJVPZWDCXHPARXLOFQONMEGRMTGKOCPMVSAGKJDWPOFBRTZQJDQAGPPFENXGIYIEDHUCNODXVUNTXRGFVZFKEEAWJSWLELLVCJYUJC");

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
    msg.setTimeStamp(0.661926341878);
    msg.setSource(32756U);
    msg.setSourceEntity(137U);
    msg.setDestination(39205U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.528668229956);
    msg.setSource(14374U);
    msg.setSourceEntity(238U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.237340653525);
    msg.setSource(18912U);
    msg.setSourceEntity(156U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.112377101195);
    msg.setSource(15423U);
    msg.setSourceEntity(205U);
    msg.setDestination(58925U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.792509455045;
    msg.lon = 0.703574626106;
    msg.z = 0.99344649389;
    msg.z_units = 118U;
    msg.speed = 0.914472918595;
    msg.speed_units = 245U;
    msg.takeoff_pitch = 0.738731434068;
    msg.custom.assign("OOONNXFUQRGTWESQCLPV");

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
    msg.setTimeStamp(0.528831212831);
    msg.setSource(60952U);
    msg.setSourceEntity(238U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.934514795334;
    msg.lon = 0.992619417622;
    msg.z = 0.740122784613;
    msg.z_units = 89U;
    msg.speed = 0.90722366066;
    msg.speed_units = 116U;
    msg.takeoff_pitch = 0.461688276898;
    msg.custom.assign("GIFKPVHXRFKFPBRUSNRHLATFLQTSVYHCFKTGVCKSMTFBZPAFZIMJRRQGFVEWNAZJHADQWYGEBZTVBYO");

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
    msg.setTimeStamp(0.739338436448);
    msg.setSource(24757U);
    msg.setSourceEntity(246U);
    msg.setDestination(31732U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.279926317247;
    msg.lon = 0.965969106055;
    msg.z = 0.431722315455;
    msg.z_units = 137U;
    msg.speed = 0.843128428369;
    msg.speed_units = 121U;
    msg.takeoff_pitch = 0.550145705347;
    msg.custom.assign("VPLWMNEYGAJIGMFYYBXLUREXEJZQWMGMHDRMVTKUTGRVHVFTDNZOHLPANXDLXWOJDFSCFJYOEZUXBWRNAHQNLCITQVETVHNMNGXUDTFDJIZOFSLBPK");

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
    msg.setTimeStamp(0.312689957739);
    msg.setSource(46816U);
    msg.setSourceEntity(136U);
    msg.setDestination(52960U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.874777329879;
    msg.lon = 0.778304336316;
    msg.z = 0.898767167039;
    msg.z_units = 22U;
    msg.speed = 0.675898946531;
    msg.speed_units = 65U;
    msg.abort_z = 0.237173923649;
    msg.bearing = 0.614764694657;
    msg.glide_slope = 122U;
    msg.glide_slope_alt = 0.0927499072949;
    msg.custom.assign("ZVZZLMAIHZEUYCBWNMKOTPFAESJGWROTXPADSAXNSALKXIDWPEISVQMURPNMHEZUYLFYNXHVOQYSWHJXGEJFWNZPAVFSACZGWIOCNZLIGVGUAMTC");

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
    msg.setTimeStamp(0.542058290271);
    msg.setSource(35272U);
    msg.setSourceEntity(154U);
    msg.setDestination(325U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.119916793132;
    msg.lon = 0.85557159913;
    msg.z = 0.324644473971;
    msg.z_units = 154U;
    msg.speed = 0.952040959532;
    msg.speed_units = 143U;
    msg.abort_z = 0.594999051483;
    msg.bearing = 0.0219811074678;
    msg.glide_slope = 92U;
    msg.glide_slope_alt = 0.431979323746;
    msg.custom.assign("HTEOWBUXFIKVDNMREBJZVUTUXIOGJFWWMJNVSJUJUWULSHYPYYXERMHQSAHFFESOCWLLAFXRIMTBGBSBARIBZPIQDIJOSGAAPGBUETKNCKWMJPDLLTXZZEJYOLPZUXGDAYCRBWPVIVBVXYLNTS");

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
    msg.setTimeStamp(0.240020503206);
    msg.setSource(3131U);
    msg.setSourceEntity(152U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.228288550726;
    msg.lon = 0.848271726656;
    msg.z = 0.139705886403;
    msg.z_units = 225U;
    msg.speed = 0.460314324458;
    msg.speed_units = 244U;
    msg.abort_z = 0.531846775119;
    msg.bearing = 0.290133651626;
    msg.glide_slope = 83U;
    msg.glide_slope_alt = 0.0962739908975;
    msg.custom.assign("WUHXQGRXIUXEJYQGYBIAOEQVUTLQFDYNKASAFFWQQLAPNVGCIJPZYBOTBBSRCVDGRDYGKUFCMSIEZHLFCWMDGMYPCXAXLDQHBRNCHYAZRPKMSTNWIHNVTBKHRUAANSVUEJNFDCPZVGSVOSFQQALOLKQRPVIEBYUUHEWMUJJMWIXKSDXWSGNXXSTOTPXLRHKJGBWKLLHTJLYZOKCW");

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
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.647507440516);
    msg.setSource(36636U);
    msg.setSourceEntity(75U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.920308168212;
    msg.lon = 0.418091735524;
    msg.speed = 0.0874212191574;
    msg.speed_units = 39U;
    msg.limits = 129U;
    msg.max_depth = 0.621550205374;
    msg.min_alt = 0.625628519422;
    msg.time_limit = 0.911602939853;
    msg.controller.assign("WPMRYFSTOTTCHRQPARXFEFNYYAEDLUDABSUMXNDYQQSQEWBOWNVXOYDFZKFKWOCVFVMSZIRFWNBWWABEECCJAETIQBOZCNGNKUTFIAZFRVRKGHYLMZJGNHKAUSIUGGNIVLUQWJSMMERHKAPKIBDKSHXHBDGO");
    msg.custom.assign("RGUZLTBTUJICPVYQWKVSPEMTNBLFKZILCMJHSGYTIUFRZNVBPTKAXLSNSNFXOFHIARPDEXMJGJRTBMOHZCKDLACOQAEEBRDDMTHYFGYNKOFQVUUQZROHTSPKHOQGVLZCXCMNYMGQIXSCAXNSDAMTOJJBEBDVGUEGWPXBWOQYUZVAWWVILYNRMXLARFHOCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.149399979684);
    msg.setSource(60465U);
    msg.setSourceEntity(86U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.188510151148;
    msg.lon = 0.0312011087181;
    msg.speed = 0.0593420893222;
    msg.speed_units = 85U;
    msg.limits = 16U;
    msg.max_depth = 0.866167242297;
    msg.min_alt = 0.962136592625;
    msg.time_limit = 0.810217929853;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.972625570843;
    tmp_msg_0.lon = 0.363885630667;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GSDWLTGXREJMSLJJRSKKYHEMESYXOLMDBVURVTMXLHBYCZGNDUCYIGZFQMTHEWHUBJTPBYIJDVEJUSYIHGZ");
    msg.custom.assign("MLGZBCSLHPKDSNSUSIQMVOSRDZCLHWTSWGZFIBTSBYJFUYUXKKMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.974173234688);
    msg.setSource(40329U);
    msg.setSourceEntity(250U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.643619541462;
    msg.lon = 0.491605941766;
    msg.speed = 0.0951827612072;
    msg.speed_units = 49U;
    msg.limits = 20U;
    msg.max_depth = 0.595567962019;
    msg.min_alt = 0.394522176206;
    msg.time_limit = 0.417136029205;
    msg.controller.assign("VGYCZAPNEQHNLIYAFCBUAZWZBPEQEODFAAVFUWKDMAKYDTHKWUKPWMVZRXQVRTATJYEQXVBQMJUKUGBOHFHMGKVCHHBOMZEFZONNPSOTJXXCQSAEOWLBMPZSISVJDULEIPRMNLYXTRWGPNJBJCJGVFKFEBXWIYJKXRMAQWNYLJTNSQAUIMT");
    msg.custom.assign("TBQSUGHZDDKTNFMOVVCGVKOZBEYHAIIICYZTMGSMHFJPRSWTHKTLPYOHQWZADFVOJHPLZQZBXBNPQMEOQRAFBAMMSLKFZWYKDUEUXYXOEVLCUTXTMGCEKQGTTWNPQVJAJDLXVSKUVGIXYANGZAEFUCRPHXJOIREJSQRWCAKHNWAPCZJYFLLBINJYYVNDBOMIBBOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.131561432097);
    msg.setSource(57311U);
    msg.setSourceEntity(242U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(250U);
    msg.target.assign("GUQEBHVBKNLOZLCQQQXVZZPBMQAHTDEIRBCEIVTFGYLZYPSGKK");
    msg.max_speed = 0.753216297191;
    msg.speed_units = 229U;
    msg.lat = 0.698369502382;
    msg.lon = 0.219529272392;
    msg.z = 0.9904287516;
    msg.z_units = 4U;
    msg.custom.assign("AXRVQETPRSJUKEUEZTQNMQOVDTLUIARWXPQMMVZKGTGKODYIECSOALJAIRFVLGAWWJEYMFEORVWGMNTFTWHCJNIHSEICYUUYXGSYVCXOBQXKFQVUXQEFLOMKPDMWYRONFTDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.14119987999);
    msg.setSource(1820U);
    msg.setSourceEntity(19U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(241U);
    msg.target.assign("HGWRAZPXBJQVIDKFOHLTPSSTQFLOWOBCKEUUPDBXDESQGDNKUNAVPYUXTNCQEMPJRVAASELAMOMDGERKHCLLNYKNX");
    msg.max_speed = 0.678988737581;
    msg.speed_units = 161U;
    msg.lat = 0.422156045248;
    msg.lon = 0.07279820561;
    msg.z = 0.705934481434;
    msg.z_units = 63U;
    msg.custom.assign("FAMPVRXKMDLNGNNWPDWGSNACJMIRDYNQVEJNHHESKSTGEFLYZTVSJQQMCFPTDMFBHQPOUFEOVYRUQRBGBUKILEOPVZGSZXOROAJREHKBXVON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.739742219982);
    msg.setSource(33762U);
    msg.setSourceEntity(83U);
    msg.setDestination(22241U);
    msg.setDestinationEntity(132U);
    msg.target.assign("EWQZQNTJBUYYIAJLSFGLNLCDVD");
    msg.max_speed = 0.362235796773;
    msg.speed_units = 152U;
    msg.lat = 0.94629687155;
    msg.lon = 0.874250599189;
    msg.z = 0.796919341505;
    msg.z_units = 226U;
    msg.custom.assign("POOSAAXQILJOQSKWXDZJVRKSQHQIAMMTUVJHTXJEXNBBECPJEIOVCVASCPEUOGYAQZZSEGLUIZKCPQTQHYNFOFPSRRYKCTDBREIUMDBJUVENVJYXFDSGWFKIODQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.349582853321);
    msg.setSource(15043U);
    msg.setSourceEntity(31U);
    msg.setDestination(13253U);
    msg.setDestinationEntity(166U);
    msg.target.assign("GOFEUGYWFCFNNQBTBMSIYFVGLFADEQEWMGSYIYEQAPTROGOKZRGSINIHSXSAHMIDZKTWRQCPYPKQEJNCHXRHOLELTXSNWXFVLJSVVHMMCJQPIAGLPKVYDQXEYNSLZUAAZYRGOPDLVRWSDVUFRFBMXAPWJWXDDOBZVLHXRASJKO");
    msg.max_speed = 0.398552794055;
    msg.speed_units = 80U;
    msg.lat = 0.956518760786;
    msg.lon = 0.142918571347;
    msg.vehiclefunction = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.685312009428);
    msg.setSource(54290U);
    msg.setSourceEntity(21U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(56U);
    msg.target.assign("WMXXHWQHNVZGRTEAGJFGXNYLODKKJBXYUVOZIDPMABHXETGSUSUTVM");
    msg.max_speed = 0.515799433384;
    msg.speed_units = 92U;
    msg.lat = 0.296562021245;
    msg.lon = 0.750133407332;
    msg.vehiclefunction = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.158361510444);
    msg.setSource(46667U);
    msg.setSourceEntity(189U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(107U);
    msg.target.assign("UZIOMWKQAJFZISRANAUPLKORREGBDYZDYZLIZAQIWOTMVT");
    msg.max_speed = 0.766519783094;
    msg.speed_units = 124U;
    msg.lat = 0.429707361394;
    msg.lon = 0.984839834482;
    msg.vehiclefunction = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #2", msg == *msg_d);
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
    msg.setTimeStamp(0.369889473665);
    msg.setSource(15689U);
    msg.setSourceEntity(221U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(247U);
    msg.op_mode = 173U;
    msg.error_count = 185U;
    msg.error_ents.assign("PGUSILJBUFQXCSBHXQUWEYCUYQVYSGCJYARSTEGESKOZVGVAEHTCBTODXLWONMVPGNWJDODIRFGIYGQTXIHDPZTHQQWKBRFXCXOMLUZHSXHZWPLLIMERINUZPTIJEFLHLCPNGUCBQDZCULWZKMKPSWN");
    msg.maneuver_type = 8301U;
    msg.maneuver_stime = 0.841149304525;
    msg.maneuver_eta = 1420U;
    msg.control_loops = 1486832713U;
    msg.flags = 19U;
    msg.last_error.assign("HTYPHELXULABLPTFRSMEYSBNQOTNXCTNYPDMEBDSMAVXYVXFNSCWKJZKTPDD");
    msg.last_error_time = 0.566011755569;

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
    msg.setTimeStamp(0.948434396074);
    msg.setSource(32540U);
    msg.setSourceEntity(214U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(75U);
    msg.op_mode = 133U;
    msg.error_count = 99U;
    msg.error_ents.assign("DOWMUXFUZRYNBEUYSZTBULPQGRDYDESKJHVOGPTVAIWAQNJO");
    msg.maneuver_type = 4084U;
    msg.maneuver_stime = 0.388120314606;
    msg.maneuver_eta = 9089U;
    msg.control_loops = 1344657175U;
    msg.flags = 147U;
    msg.last_error.assign("SBDYRMOEFQRPEJWFBFBZDTPOKYQTOLDLVUHQXAWVUMDEUZMFERKATDNSGCGQZXIJBKCWYOWFW");
    msg.last_error_time = 0.880200149029;

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
    msg.setTimeStamp(0.0244282375433);
    msg.setSource(10493U);
    msg.setSourceEntity(215U);
    msg.setDestination(65112U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 135U;
    msg.error_count = 49U;
    msg.error_ents.assign("SRYCWQJOIMSOOOUQWUUXTMBKOBQRIWNSLIELGTRKFEJJJYMFNZAPFDIDZJMMVADRHDVTCLREYFYCHVAAPJBHWGAFQPBAFKVVNPZNCMRYUPPJGNQGWTNZQWCYVIOKIJOBEXPKITBVXFDEMGGGGYGLJHCIBZXDUKZFHRWQLOSJXHTYSULLMATCZEDUBPILHZXSIERAEZDXS");
    msg.maneuver_type = 55647U;
    msg.maneuver_stime = 0.587262074541;
    msg.maneuver_eta = 38189U;
    msg.control_loops = 2965491776U;
    msg.flags = 112U;
    msg.last_error.assign("WFSIIMXHEHAOQMMAZIJSXACVGPRKRWVRVPXQBFDVNUWONQRKSUKFORXFOJZBLVWERMHBCCLJGLUODLHIAZYJCPKYUNSVSYRMTLGWUGNBXGKTDSZQHNYXDTAUKEEXXYSJEZWCYXLRYQZADNAVMBGATIWHHYTPPOKTIJFJJJECSYFGCQMTSCPVIFIYDOFTMDVODZCAPVBMZASTDEHNPUDEPEZZFNUWJUHNKFMOKTNUW");
    msg.last_error_time = 0.659851056808;

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
    msg.setTimeStamp(0.223919619818);
    msg.setSource(28153U);
    msg.setSourceEntity(17U);
    msg.setDestination(26382U);
    msg.setDestinationEntity(224U);
    msg.type = 26U;
    msg.request_id = 52953U;
    msg.command = 71U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.163014747818;
    tmp_msg_0.lon = 0.672041555978;
    tmp_msg_0.z = 0.837229825911;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.448544894957;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.bearing = 0.226803689919;
    tmp_msg_0.cross_angle = 0.201216289419;
    tmp_msg_0.width = 0.126213852066;
    tmp_msg_0.length = 0.714338163671;
    tmp_msg_0.coff = 209U;
    tmp_msg_0.angaperture = 0.677414952544;
    tmp_msg_0.range = 59180U;
    tmp_msg_0.overlap = 137U;
    tmp_msg_0.flags = 197U;
    tmp_msg_0.custom.assign("THLOJRADQJKXZL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9393U;
    msg.info.assign("MRWXCORBJV");

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
    msg.setTimeStamp(0.893259441172);
    msg.setSource(52690U);
    msg.setSourceEntity(218U);
    msg.setDestination(43978U);
    msg.setDestinationEntity(95U);
    msg.type = 183U;
    msg.request_id = 51903U;
    msg.command = 80U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.817344885222;
    tmp_msg_0.lon = 0.476948156677;
    tmp_msg_0.z = 0.595047590959;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.735951786771;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.bearing = 0.0310799072864;
    tmp_msg_0.cross_angle = 0.290923011582;
    tmp_msg_0.width = 0.990587597131;
    tmp_msg_0.length = 0.543591853605;
    tmp_msg_0.coff = 27U;
    tmp_msg_0.angaperture = 0.0892599894859;
    tmp_msg_0.range = 52829U;
    tmp_msg_0.overlap = 220U;
    tmp_msg_0.flags = 190U;
    tmp_msg_0.custom.assign("BUBMKPVREVNEAOAYHTKWBVQSLYUBURPJILYZHWISIZYRZJLKPANVOURHXUSNXFCUOFDVAJOTJJONCDWXFNHCXRWNSVQWFTMQDCUIHFOGHFMSRLSGTXSYIDLDBAZOYANYYAGJSCLMITCTKGZJFSECZJOOGLDEZZSLTRGIYTPZEBIXKXGJMWKDVXKWDLPHBQEJBPZTFQDPQHMGQQPCCFPFENEXVTKXLWHMQUAERPCQRIKAMYKHMMVNVA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39568U;
    msg.info.assign("WYJSPQBIDGAZFQPTMTPTBUVSBFJEHIWYGRENRKTBZVGCIMGDUKWOZREHSRIHASVLLXJ");

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
    msg.setTimeStamp(0.675940591082);
    msg.setSource(9546U);
    msg.setSourceEntity(18U);
    msg.setDestination(30326U);
    msg.setDestinationEntity(156U);
    msg.type = 88U;
    msg.request_id = 6400U;
    msg.command = 156U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 60191U;
    tmp_msg_0.lat = 0.0161704222547;
    tmp_msg_0.lon = 0.459390682095;
    tmp_msg_0.z = 0.179851083616;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.speed = 0.639373782121;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.duration = 47854U;
    tmp_msg_0.radius = 0.0500325776988;
    tmp_msg_0.flags = 6U;
    tmp_msg_0.custom.assign("AUSXYGEWJELFSULNRIKFJCBCVCLHIMZOPWLQSPSMZWMAESDUJZSPAVUSHVEGQGNBCZCHMBUQKDEBDKOVYQRLQKHBEIXLXZJIZAUADRUKDHKONVHZXKFVIWNCNWBQHMBPTYPREJBQDMFRUAERHCYLWCXSRVYDITFWYUGVWPTFTZZEUGFLCNGATHNBWGNGFMRCAORJMLXOXPDIYBOQXGSMOATEIVWTJNLJYYKQPJOOTKHZDX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24451U;
    msg.info.assign("RPYABURMOYLPVPYNQUMATHZJLIMVEDLFAUKJHJIBGHNGFDYXICBZLNNIFXBCOZBBLIFMJOYKLTCMSGVXERWEXWHNUMOZSAVOOUODXPTUNAPZSEGVAHFSYEMVKCUXVTCKYWTQQQLCKHXGZJCUZIPZTYFWWDENJESHJLTJOEDTWRKNHAWVNNTRAZKFSJVZCDIRPWRDJDQDSHKPQPGIELWUOQBGLFSXQSQIMUBDGRBCXTXKROHYEACK");

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
    msg.setTimeStamp(0.0773042985639);
    msg.setSource(52531U);
    msg.setSourceEntity(48U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(215U);
    msg.command = 131U;
    msg.entities.assign("MELMDVEDYTRETUCSWLPWFTOLESBPIZZZEWFGFMUTIALBBNVHBAXNQDKBVHOOWHOFIQLXEAMWRHZCOLSNAUMIQJSLDKRSHZCIJAJJVDKPIZDQCJNADKINIYKLRGXZDGZVJCRKPGTEQZCGFSQXJDTYTFVCHQXGINAXKPRMFQLCJNYUREHORBPQWPIHRGEBNTOGMWXWOJPSFFTUVVGUOSHBKDVUG");

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
    msg.setTimeStamp(0.586229016577);
    msg.setSource(18027U);
    msg.setSourceEntity(16U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(117U);
    msg.command = 154U;
    msg.entities.assign("JKYYAZTEYDDWIUHVXQNJNMZIHPEIGLUALOOWNZLHOEWDXSLUOUXPFQVKRQJJLBTJWDPDHMSOW");

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
    msg.setTimeStamp(0.390071965054);
    msg.setSource(34300U);
    msg.setSourceEntity(45U);
    msg.setDestination(32139U);
    msg.setDestinationEntity(201U);
    msg.command = 220U;
    msg.entities.assign("DYHGBBBYRYCUWKLWNOEIOMJQENZLUVDHHZTNBERQWGQDTQTLPQJLFORGMHERMFFHLDPJKPVPSWUAOVCIUSCXEKXTLZTMVQFFUPJZGOVARQNUYMSNQEXEYCKNFXMMSISAWFGDKCYRIBRJUPJLQUWINNIFVAHSKOLUJPOIFRDXWCHAJORLSVYNDDCSJAXIKTFVAWVZMV");

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
    msg.setTimeStamp(0.324426277792);
    msg.setSource(59466U);
    msg.setSourceEntity(173U);
    msg.setDestination(9585U);
    msg.setDestinationEntity(83U);
    msg.mcount = 143U;
    msg.mnames.assign("XXAKLJZWVNSXCPPMAIBNLDNLYYBIQECPIOVPKYVTBNWJLAUMDUFULTDEDEVFRUDMSLJMRUCURCGBOJGDRDAOPWBCAFYLGJIQMSBSAPISWNTYUGSXTUZMVRRRNJVTVKXZKQWTCFSWWKOKAYQAVGZE");
    msg.ecount = 57U;
    msg.enames.assign("VURAORNKSHLBJNCIXODVVPBHKUTYEMAZNDMQMNEDSNWZSADWIATQOHITLEAPMGLDWBYDSZGXWDERRRTFPESZFCMGQAMFYSQDNPMUVIGOXKFRNNZHFMXUZYLIDXWGYMITLCEBLELSPPXAUWPAMFEIUVJQVQCWZZXGZGOOKHJELZXCBKKFXNOCSEPUQQYIJCCTHFBKTBQJYJRSDTACPNAYYJIBGUOXB");
    msg.ccount = 222U;
    msg.cnames.assign("UCEYKIUUZHYCRZPQQOLGLRUCBIVLXVTXGNMANJYFBAT");
    msg.last_error.assign("DQSPANFJAGEOIPYBKZEQNIHKUTGBUUJFMSVEBJZDHFXGCAKGNKEAFOFYQZCWIJBTZATVXNSRMKQLINLCOEUKFPKDMVLVJNRSQPKHKHDPWCXDUAVPCBYWYHPSLTNMFPUJJGSIFOOMWKUAS");
    msg.last_error_time = 0.656261459643;

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
    msg.setTimeStamp(0.946007820323);
    msg.setSource(42286U);
    msg.setSourceEntity(187U);
    msg.setDestination(1193U);
    msg.setDestinationEntity(251U);
    msg.mcount = 125U;
    msg.mnames.assign("RSYZGISMZKSKGBXKZVOVTFCAWUCPIJDFCFYPGOUACPPXGFKRZXBYJLBVOUREMIWKJEIJDAJABVCCBXNWETDTDETTTUIFIQSMLSIKPHERBRQNEYTYBOOGJLSWLHXQUWDFLYLMSKVVKBWTIZQLAMQFDVJFAPYQMSHHZCPNXQXOEUWCOVZEUCXB");
    msg.ecount = 8U;
    msg.enames.assign("CXYTJBAELPHKPFIFSJCUKINIEJYLXXTZFIUMPOCZORVPCACKRGQWDKGGEQMXSAYZBZFPDHAFRHUTEAATLCQRGABWNCJHHNHQUTBJVTPVEMJSTYWIHOARUMUKGLNQVMXFNZQHWVIRBZBDZPHLMPNF");
    msg.ccount = 113U;
    msg.cnames.assign("GCNFDXHVVKASEMZLNNVRSXUAFTSMJMYWPQBAAETQFZJACOZTHMVPSMTEDPCDRYHVSLPGYIHKOHH");
    msg.last_error.assign("JDCMPWNLBAUVFRCSTTJWNXINXUHLAKNBTVLPZJLXYOCDVIWBOERTGWUDGIYHQHREQCHVBWPKRYANCIOM");
    msg.last_error_time = 0.50508390882;

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
    msg.setTimeStamp(0.105070640994);
    msg.setSource(12051U);
    msg.setSourceEntity(147U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(14U);
    msg.mcount = 90U;
    msg.mnames.assign("JVRRZJJTNGJUEYCJEQKXDSVXXQVETDSMSXHIRUGXPQNZMWACZCDLUUILAGILEWBQWKSYYCUSARLKRQBGEBFSOSIAPCNZFZGCDZWKFBPRUYNJLTTRBLHWAIFZUUFSPMXFMSOUJDACCYOIKTDGOOGXPHMTOEVGPNQZPWOANPHGAWNLVRKKFBHZXYMVYUIDNFQVMKOEQWCGOQDRHMWWTBETMEHILJRSEXYLMDVTBVVJFIHANDYCXJBIAKY");
    msg.ecount = 67U;
    msg.enames.assign("AVNKNJHPPQMFKNJINCUITJSBLVLFIIZMRFTWXXBYAFFSRGOJLALBDYBCBKJYIYLSCQUXOCQXEHROTBCSNICMGHDVOQRREKZXWQZGUXSDKDFKBTEWREWYBUNHVGAZAPHHAMPZGZPMDQULZAMPVWFZKPVREMGPYUCRSIHTHNLTTSECMWAVCEMNOQJLOXSXIBYQIQGJPOEWODJLCAVFDPDALTOZYKGSRHBYXUUMTOQENYUGVSKXFHNZJDWFTIVDR");
    msg.ccount = 17U;
    msg.cnames.assign("NNLSAVOGHTLDAUKGAKZZAUFTGPXDQEHWOCCYPLUVUYZQEBNYPCFMEKNLXCTWSQWRXMQXPDOSPUWFIDRRUZMJJMYJVABFWDZBWEGMYIERPLRK");
    msg.last_error.assign("BFZGJVJDBALVKQUK");
    msg.last_error_time = 0.10278119229;

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
    msg.setTimeStamp(0.895703597734);
    msg.setSource(22884U);
    msg.setSourceEntity(237U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(35U);
    msg.mask = 128U;
    msg.max_depth = 0.619796990639;
    msg.min_altitude = 0.0387501330208;
    msg.max_altitude = 0.904988062024;
    msg.min_speed = 0.938975107839;
    msg.max_speed = 0.0232296198785;
    msg.max_vrate = 0.449388138147;
    msg.lat = 0.929216760255;
    msg.lon = 0.963737626678;
    msg.orientation = 0.467152076804;
    msg.width = 0.0579500630348;
    msg.length = 0.440395101961;

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
    msg.setTimeStamp(0.12322453422);
    msg.setSource(48444U);
    msg.setSourceEntity(128U);
    msg.setDestination(316U);
    msg.setDestinationEntity(131U);
    msg.mask = 235U;
    msg.max_depth = 0.0339117995226;
    msg.min_altitude = 0.959396955543;
    msg.max_altitude = 0.961435231687;
    msg.min_speed = 0.698020590537;
    msg.max_speed = 0.994526060564;
    msg.max_vrate = 0.13511469142;
    msg.lat = 0.264104791041;
    msg.lon = 0.653219459036;
    msg.orientation = 0.776404703752;
    msg.width = 0.00840736552894;
    msg.length = 0.932013177745;

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
    msg.setTimeStamp(0.7178693062);
    msg.setSource(20591U);
    msg.setSourceEntity(101U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(158U);
    msg.mask = 100U;
    msg.max_depth = 0.916094188962;
    msg.min_altitude = 0.202732000325;
    msg.max_altitude = 0.0335733079125;
    msg.min_speed = 0.717324424473;
    msg.max_speed = 0.698977609384;
    msg.max_vrate = 0.161291968712;
    msg.lat = 0.259540843521;
    msg.lon = 0.589585741685;
    msg.orientation = 0.741513626404;
    msg.width = 0.0330892817552;
    msg.length = 0.806547848855;

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
    msg.setTimeStamp(0.230466055815);
    msg.setSource(53503U);
    msg.setSourceEntity(244U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.0346141877523);
    msg.setSource(22987U);
    msg.setSourceEntity(14U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.870280883431);
    msg.setSource(28453U);
    msg.setSourceEntity(136U);
    msg.setDestination(15758U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.28296318716);
    msg.setSource(38274U);
    msg.setSourceEntity(190U);
    msg.setDestination(53013U);
    msg.setDestinationEntity(117U);
    msg.duration = 47731U;

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
    msg.setTimeStamp(0.653176898664);
    msg.setSource(57550U);
    msg.setSourceEntity(221U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(93U);
    msg.duration = 10407U;

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
    msg.setTimeStamp(0.460945240721);
    msg.setSource(11292U);
    msg.setSourceEntity(174U);
    msg.setDestination(27898U);
    msg.setDestinationEntity(135U);
    msg.duration = 63999U;

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
    msg.setTimeStamp(0.553224279211);
    msg.setSource(52801U);
    msg.setSourceEntity(130U);
    msg.setDestination(37406U);
    msg.setDestinationEntity(246U);
    msg.enable = 159U;
    msg.mask = 1621758499U;
    msg.scope_ref = 4120504993U;

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
    msg.setTimeStamp(0.126514516883);
    msg.setSource(22488U);
    msg.setSourceEntity(189U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(106U);
    msg.enable = 72U;
    msg.mask = 1673024860U;
    msg.scope_ref = 2782919559U;

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
    msg.setTimeStamp(0.69355712596);
    msg.setSource(19294U);
    msg.setSourceEntity(58U);
    msg.setDestination(34285U);
    msg.setDestinationEntity(197U);
    msg.enable = 182U;
    msg.mask = 211304760U;
    msg.scope_ref = 3317812301U;

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
    msg.setTimeStamp(0.613490935636);
    msg.setSource(38825U);
    msg.setSourceEntity(5U);
    msg.setDestination(53531U);
    msg.setDestinationEntity(68U);
    msg.medium = 130U;

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
    msg.setTimeStamp(0.858232411553);
    msg.setSource(63114U);
    msg.setSourceEntity(169U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(68U);
    msg.medium = 106U;

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
    msg.setTimeStamp(0.121313312164);
    msg.setSource(42174U);
    msg.setSourceEntity(163U);
    msg.setDestination(17165U);
    msg.setDestinationEntity(116U);
    msg.medium = 163U;

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
    msg.setTimeStamp(0.0205226115991);
    msg.setSource(28872U);
    msg.setSourceEntity(67U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(220U);
    msg.value = 0.663799606121;
    msg.type = 4U;

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
    msg.setTimeStamp(0.417964821445);
    msg.setSource(63016U);
    msg.setSourceEntity(190U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(221U);
    msg.value = 0.96671241845;
    msg.type = 64U;

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
    msg.setTimeStamp(0.18467260073);
    msg.setSource(26595U);
    msg.setSourceEntity(121U);
    msg.setDestination(21774U);
    msg.setDestinationEntity(143U);
    msg.value = 0.727208605104;
    msg.type = 121U;

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
    msg.setTimeStamp(0.87220929042);
    msg.setSource(65521U);
    msg.setSourceEntity(211U);
    msg.setDestination(49701U);
    msg.setDestinationEntity(200U);
    msg.possimerr = 0.594616366308;
    msg.converg = 0.9255339673;
    msg.turbulence = 0.215617563361;
    msg.possimmon = 237U;
    msg.commmon = 146U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.572294097155);
    msg.setSource(15500U);
    msg.setSourceEntity(134U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(75U);
    msg.possimerr = 0.0745923107863;
    msg.converg = 0.435092708751;
    msg.turbulence = 0.919599056013;
    msg.possimmon = 233U;
    msg.commmon = 206U;
    msg.convergmon = 120U;

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
    msg.setTimeStamp(0.638950905267);
    msg.setSource(19145U);
    msg.setSourceEntity(204U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(219U);
    msg.possimerr = 0.499947339422;
    msg.converg = 0.052393272424;
    msg.turbulence = 0.719853741954;
    msg.possimmon = 141U;
    msg.commmon = 15U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.32778677719);
    msg.setSource(64534U);
    msg.setSourceEntity(93U);
    msg.setDestination(53686U);
    msg.setDestinationEntity(198U);
    msg.autonomy = 119U;
    msg.mode.assign("GEUVMDXSBWNTZRXOHOSRVCJPMQKSZYEWPLHCEFHZGKFAAWVAFUPDOYTZWEJSYWOQMQIWNVRBCEMBARUKIFPKKRMNYMYLSLJQBVJEOLGKWYNXPUZQIHLHBNGQIHYUUORDHOPAFYSJBCIKPAQCJWALNAZLDQIDMHFTJBCNFXXZXXDCEBWGOXHXQGTBUVPVFIHSNMPEPURQXJVIRYTRCOKDJIZNAIVDCLKBTFZDTESESKZ");

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
    msg.setTimeStamp(0.259049067726);
    msg.setSource(32849U);
    msg.setSourceEntity(81U);
    msg.setDestination(48427U);
    msg.setDestinationEntity(50U);
    msg.autonomy = 190U;
    msg.mode.assign("CFDBWTGSLMOTNICYKXRYUOVURJCYUQPODUKMMAPWQQFHISQYETBHCXMPYJHZUXJIZRJNIVRNSMPEBRGKNEPCZTVBFQDRQVDSNMLJLMIGFXTERADSLNQBIJR");

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
    msg.setTimeStamp(0.49497395965);
    msg.setSource(40295U);
    msg.setSourceEntity(1U);
    msg.setDestination(48575U);
    msg.setDestinationEntity(236U);
    msg.autonomy = 231U;
    msg.mode.assign("ZMQIIGJXWVNIWRTOSHTFHPBBXZFK");

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
    msg.setTimeStamp(0.232036146028);
    msg.setSource(57579U);
    msg.setSourceEntity(83U);
    msg.setDestination(43118U);
    msg.setDestinationEntity(234U);
    msg.type = 100U;
    msg.op = 154U;
    msg.possimerr = 0.161163271395;
    msg.converg = 0.598493053459;
    msg.turbulence = 0.535007853825;
    msg.possimmon = 229U;
    msg.commmon = 111U;
    msg.convergmon = 88U;

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
    msg.setTimeStamp(0.610453562649);
    msg.setSource(61515U);
    msg.setSourceEntity(203U);
    msg.setDestination(23149U);
    msg.setDestinationEntity(66U);
    msg.type = 190U;
    msg.op = 52U;
    msg.possimerr = 0.437044217783;
    msg.converg = 0.674065680842;
    msg.turbulence = 0.171393368906;
    msg.possimmon = 87U;
    msg.commmon = 171U;
    msg.convergmon = 1U;

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
    msg.setTimeStamp(0.367895656707);
    msg.setSource(30144U);
    msg.setSourceEntity(78U);
    msg.setDestination(56665U);
    msg.setDestinationEntity(132U);
    msg.type = 198U;
    msg.op = 218U;
    msg.possimerr = 0.0640142648653;
    msg.converg = 0.161953737085;
    msg.turbulence = 0.137013326423;
    msg.possimmon = 68U;
    msg.commmon = 231U;
    msg.convergmon = 37U;

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
    msg.setTimeStamp(0.112512044707);
    msg.setSource(43459U);
    msg.setSourceEntity(131U);
    msg.setDestination(40714U);
    msg.setDestinationEntity(81U);
    msg.op = 28U;
    msg.comm_interface = 245U;
    msg.period = 44599U;
    msg.sys_dst.assign("YVESENYLCGFZHJGIRWQGYBAGOPGXIUGOUVS");

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
    msg.setTimeStamp(0.134583080423);
    msg.setSource(18759U);
    msg.setSourceEntity(136U);
    msg.setDestination(46762U);
    msg.setDestinationEntity(53U);
    msg.op = 124U;
    msg.comm_interface = 244U;
    msg.period = 5133U;
    msg.sys_dst.assign("VEEURKBQNHYMPDDXRUFIZBXCQGGZTYHNYAOZWZYIMYLEBJOB");

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
    msg.setTimeStamp(0.437376118789);
    msg.setSource(22413U);
    msg.setSourceEntity(38U);
    msg.setDestination(10174U);
    msg.setDestinationEntity(8U);
    msg.op = 57U;
    msg.comm_interface = 27U;
    msg.period = 54896U;
    msg.sys_dst.assign("ZZTTYBPEHDWSQMRFUJLNUDAZRJGAJURNKSAMHWSPAALFVBKWODLNTYZNXLGMPWZCIMIXMQUUMOYWGHMFIVQJCQQVTJGOPIKJCSHZOPRKYLBEZDEYRVJNQXI");

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
    msg.setTimeStamp(0.451778941362);
    msg.setSource(44158U);
    msg.setSourceEntity(213U);
    msg.setDestination(6802U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.85976886851);
    msg.setSource(11259U);
    msg.setSourceEntity(204U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.926595628948);
    msg.setSource(63803U);
    msg.setSourceEntity(199U);
    msg.setDestination(6394U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.145179759984);
    msg.setSource(35403U);
    msg.setSourceEntity(65U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("NUHZRFCNJCDRGMKIBNNPFWBU");
    msg.description.assign("GUSXNFGSXYVRBXIZJKBFHXQAIIOYHPOZPESRPYUIMNHKJUJLZYLAPWPORKTSGOVKGBXTOIEJVBGQLAVFNVFUYYZRWMLWCTDBNEWPGDTSEVMQNOMCEFDLDMDZSCWWDLBJAQKKWGA");
    msg.vnamespace.assign("DEUNIWAYLGIJDWBPUJKVJNMNMGQLAPVPFHYJGWCQHPKHWRAUPLLXUCOWOOKSHPVFUYIEVXBKDBTHRSJZUJMOAANFRTMIGUXTKMZOFCIQGZMBAXHFVXTBWBJMEKQRSEYVMZPNKDNSDJCATNZLWTHQ");
    msg.start_man_id.assign("JWWXYVSKQHGLZPKAHWCDGXHPWUFWQOFSCMXCHXRJQAXMYOUYRIFMHMAERVBBCBQLJPWVLEMCPNCOLPFGBIPJQABMRCJWDOHFSFZFKTUVABSGNGTVGRCBAYRKBZDYYDUOVZXPECNOEOHLSUONELQDZKDEIMPXMHLBRQCSZKIJXXBUAASGTFJRLIQIPIWFLIDGLTJVVUHPIERJITZSQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("IDMAXKSQUORDQTWFSWJPTNGIZJTOSMKCRYQQFQVNNRWHROHKCHUYBDAXXZCDKHFRPGBGLWMAPJBPZCUNGTFNZLHWOIIIUYXJWEGGLZIIXADBFOPQMRIAVTHUTXZUJGOANAOMBEIPLSHMMFQQYGYJHJRASWTLYPMHEZPXKLTOB");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 55925U;
    tmp_tmp_msg_0_0.flags = 85U;
    tmp_tmp_msg_0_0.lat = 0.00818086773343;
    tmp_tmp_msg_0_0.lon = 0.536308057044;
    tmp_tmp_msg_0_0.start_z = 0.777387916916;
    tmp_tmp_msg_0_0.start_z_units = 223U;
    tmp_tmp_msg_0_0.end_z = 0.271633105094;
    tmp_tmp_msg_0_0.end_z_units = 175U;
    tmp_tmp_msg_0_0.radius = 0.0782944324962;
    tmp_tmp_msg_0_0.speed = 0.767584771843;
    tmp_tmp_msg_0_0.speed_units = 165U;
    tmp_tmp_msg_0_0.custom.assign("NCUONPERKKPJCMFYYTOHQDOOJCRYPDMQNPFCHWIJBKNEZYXEOSOUOXKMZVSVYHGXPSCLGWYLLBIXGVAIAMWETZRJVAJXMPKZFNPMKDZXN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KHUDGXVMPUFACWOAGKSALTSHVPHQIJSCHMZTNYUPFQTANWXIWNBBSDXGWFFCEQIHKLGCJOPJYMLAOTTWIZXMNZSGQWDXVOWQNVEZSRQHEVKEBYFFYLHXSMHRAULCHBNZJYQLGBYKNXZCLRPGKJTOAOIDWBPIAFVRPKBPZKQJVUXGYDNRLUYEQU");
    tmp_msg_1.dest_man.assign("JYBMOTHUCNCNUYXEPALQKONKPAOQKTPA");
    tmp_msg_1.conditions.assign("JBXWNJTROWVFRMIHATQXFKSKYXEGQMKNZHVQQKPVRYUBFRURQVJUIJSIMVXYYNNDECYDIVPGSJGFRTNMHWNOLNAUGVBTXBEDHUCJGZXOQMELFBCUGHOHGWPMBODOTEHBWIALVSIGWDTKCFNPQLPZEOZYIQZCSYKGBSQTARUIDE");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanStatistics tmp_msg_2;
    tmp_msg_2.plan_id.assign("MJPJCRVTBYDHGOGKPQUSUQUWGPEJYOTTXPWNCLRWLJNAMNNBLSJRMILRIKIBGUKMHFCMMGCKSTWAYXJMOL");
    tmp_msg_2.type = 187U;
    tmp_msg_2.properties = 30U;
    tmp_msg_2.durations.assign("UHBNEQFGDZXBSHPWHAIFHXFPLGFZYTTRJMFTTVNZCMTBYJBQOMKYPMCMDKQFNYOCGDRSQVW");
    tmp_msg_2.distances.assign("VEBUEIRWTQYBXHUSUZWLCXKMPUQIKBYJNZKZOJTOWVCCNBSKQCEOHEBZOUWQSXFQPCSEDAJKCIODWLGZKNFJIUSKFSRVVUUXLXSIIYVOYVVLLEABXGBGRYXPELGFDHMAHZXYPQFQMLHRAWCNWAEYJDSBFHLMR");
    tmp_msg_2.actions.assign("NICRVELCPZVGUJWTXWWZVXXOWQSHQBMUTVNTMNHEICUCXCSXJYYPBESGLGNANLGOJTBHBZELMSAUNYFWBPQKZUHKVIQWVSH");
    tmp_msg_2.fuel.assign("XGIUDSSQRTXXNVVMSHUJEZUGMFLFMWPYXXDVAQSDRYWTLTVYARDSJL");
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
    msg.setTimeStamp(0.692803637539);
    msg.setSource(4084U);
    msg.setSourceEntity(98U);
    msg.setDestination(40771U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("TIZKNLIQULLQGNZHPBHSSYVUDQTKPKGKEMDWFEUZHUADLXBCJWIKYRGECZRDVOOSEPMHQCMJSSZMGFSOPPHUIRWBMVNSLEYFBLQDAVNVNVEVFTZBDFCTXOKDPJTZLOPRQOITXEHNZBLLEBHGCNVYTAOJAJAXAEAIGWSORUUMCGTOJGIXYCHXRKIXNRDTNWXSPWJJKHFQBRQOXUYQADTDGVYY");
    msg.description.assign("GNGGNKSSZKRIONLRUIXUUQVQIBBWLJPZOYYHKWFYHZWPTKPADOMHTDCNTIKCMZSPGDQCMBSAOPDAJTWJXMHVDECSLDPCQERLGEKRHOOYOTLOWJHVFSIABQJKLGVCERPFNBRIMTYPEFFAYZNIMLFXQZ");
    msg.vnamespace.assign("ASOMJTQJWGHWOLJUUTGZOJBEXCLGUZCYQEZVCNFFLCEUALRTODSHQJKQHUQXFBTSHSYDSGYAMNRZNALFGG");
    msg.start_man_id.assign("QPQZCVOEEQRKZQOTFUBGETVHXOGJZGAJLFVNNUSABOHWYKHPEHXNWMVMOUBIKQNEKJYSQDQLKYXIAEZDIWRJRYFQLTRGCLYGODFTPNCTZINSFJWZDVXMWISDOUPKZSFWQLNDJKDTCAUHLXKZXEOVKJBLLWHDWUXPXMEYBMSVMSCYDRPJYYSGCAVITZEGHAXRXBRBTUAFRSUPLFGCBHQO");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UHGKAXKWNNBTRHOESSZTQCWFLOTIKUPTZLOHJUWSIMRHXOBF");
    tmp_msg_0.dest_man.assign("EZUCQHOGTCXOUDNWAQXUHMJUYMBLUGNTHMPWJJTBULRASZDFMTZBBEIIOXPKPCZTCHAEQQDL");
    tmp_msg_0.conditions.assign("OGIWSHDLBRDDLSBOSNKPMPWDSRFZMINAJGALZWCIIVWTQMJLBZFOJMPLSKBTAUQSARFKFTWXCVGTMZPUNMHZGQAHWENRZOACIVLPMIGWVBJJBPFYMXENQERXRKTNDYBDJZEQLBRGUQZGJMVDVBJMYNUVCKYTXKDDANCWHRVL");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("USTGWDJRFJLKUCABYONMHERDYJJCIMAZBTNWVGMNXLYBIUZYAUZZGOQANRCIISGDZHZLDEIDONFGQVESBTFVYHNRXQKOJAPYBXHBOPHAQWUYAPBNCGVUL");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.309175163601);
    msg.setSource(28710U);
    msg.setSourceEntity(130U);
    msg.setDestination(55847U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("CKHGUYWSIKLOOQJAFWYPLAQELRGMTDOZEBPDVHHGOVENHNYTXFLSVTFFOCRKBUJGXPDVOHIPHTOJWABFRDKYMJENGDJNCUIMAFZXCLZLRFIQGGCPYUIMXZJCRREQWOYSLQGQKLWDSPPICVSFXTHDYIGRBJSZXATNTLE");
    msg.description.assign("VAWRUFRCLRJJUONTCYAOWHPVYTHOJZUIFIYYVJDCYMFZVNTBPQISQFSTTAXKAZKZOGFLCHLLHORSUEXWIBMMBNKWMPNWLKIUHTJDMPZGTQWXYGVRZXSESDOFBMYEHQKNRVCHMASABJSNJTPZDISQCGRCUXNQWMLRCKCDLNEQXLDAEYURXMBRDXIZSMLFGHYSTAIJZEGWPPBVBVGKPOIOBCPEKVEHTFGXBQILWFZDQENDJUEQVKO");
    msg.vnamespace.assign("NFUBFLHMIJANHZPTPYCMIMPOAWRGIEVFYRSVKHQIFKQTYRSAVQOMWMEFHXSRXDWAREENFDOTJYKZUCIWKJDTIQWJJKA");
    msg.start_man_id.assign("UOQLPOAPJVGLDXGNHWEJMUGTXNPDZQHYVKCOVXINDJRDJRXJTLVXBTLOBDERTKIADMRAUELGWHLHIFJNCIZFSOWBJSRZGHKSTJXMKNBWEXFFQXQJZACQHCAQYMBUWUWCCFYRGSMBNGELVPBTAAPSGVMCIPBBZYIXIMTHPRYHQRHOWYCSWQKEKATEZLDRCPYSKOMAVIUQODUEZGJWECFY");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("NCOSNQFDDGFHUBZECJBGHLJRVTYLNZCRUKYTOLINEPORWXSBSLQIKBFDDJFYMXKDXRMOZEWBSAIANANUSEGLGQXMJCXTJZXVIHIFKIVRFQSR");
    tmp_msg_0.state = 233U;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.672744789933;
    tmp_msg_1.y = 0.860332205848;
    tmp_msg_1.z = 0.819315183081;
    tmp_msg_1.t = 0.467469344465;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.689984860581);
    msg.setSource(36366U);
    msg.setSourceEntity(230U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(165U);
    msg.maneuver_id.assign("JPFLISNXNIPCWKSLIZYXEVAVWMSWNJFMHJZGCCCOUIOUHESXAZUAJFVCHRIBYJTYGBHRFRWHWPNTUH");
    IMC::Docking tmp_msg_0;
    tmp_msg_0.target.assign("BTGGHIAALHIETIHSMANCNYNYWMZAIZTCYXMFEASNKTWQEBLQESJMKNXKJ");
    tmp_msg_0.max_speed = 0.146061007936;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.lat = 0.862381512017;
    tmp_msg_0.lon = 0.210973880468;
    tmp_msg_0.vehiclefunction = 205U;
    msg.data.set(tmp_msg_0);
    IMC::PathControlState tmp_msg_1;
    tmp_msg_1.path_ref = 1290352700U;
    tmp_msg_1.start_lat = 0.0144528967161;
    tmp_msg_1.start_lon = 0.201855123742;
    tmp_msg_1.start_z = 0.723859177175;
    tmp_msg_1.start_z_units = 173U;
    tmp_msg_1.end_lat = 0.0342418700158;
    tmp_msg_1.end_lon = 0.726004900774;
    tmp_msg_1.end_z = 0.209052647124;
    tmp_msg_1.end_z_units = 54U;
    tmp_msg_1.lradius = 0.679380097268;
    tmp_msg_1.flags = 140U;
    tmp_msg_1.x = 0.113846051269;
    tmp_msg_1.y = 0.827301524816;
    tmp_msg_1.z = 0.926528683085;
    tmp_msg_1.vx = 0.102702859899;
    tmp_msg_1.vy = 0.106780376017;
    tmp_msg_1.vz = 0.435397600467;
    tmp_msg_1.course_error = 0.405558812493;
    tmp_msg_1.eta = 27388U;
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
    msg.setTimeStamp(0.135184298592);
    msg.setSource(44980U);
    msg.setSourceEntity(0U);
    msg.setDestination(40421U);
    msg.setDestinationEntity(64U);
    msg.maneuver_id.assign("ODMTSMVMOFUVLNQCISFAOZHODJPOVFZBPDYRLYBNDOGSFLHNGJTZJDKBRMCKKMXEWAIQBTFBBYXJUKJLHKNCSDNAOGHEPRH");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 35032U;
    tmp_msg_0.lat = 0.615307780388;
    tmp_msg_0.lon = 0.482374003523;
    tmp_msg_0.z = 0.0877092961576;
    tmp_msg_0.z_units = 5U;
    tmp_msg_0.speed = 0.290153298008;
    tmp_msg_0.speed_units = 73U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.648810118839;
    tmp_tmp_msg_0_0.y = 0.798634890812;
    tmp_tmp_msg_0_0.z = 0.182180182615;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YNVMCKTWKNMCCGUZJZIBNIPUJQOQPWVDUDMQAHABLFEXTLBCZJOA");
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
    msg.setTimeStamp(0.897163734292);
    msg.setSource(37178U);
    msg.setSourceEntity(22U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(118U);
    msg.maneuver_id.assign("GTKIUAQSDGKHRIRJUZPZIGCORKICMAABKLSTCPSDTHABENYAJDPFTVEISNJIMXTRZPRPMXYCWSQUIDVSSVNSVCDUBHAOUXYGVAPHMKEJITZSLLQFEZJXQHUNKYNEHFAFRESBJHOYMWKPYPXOYMHQLZQVGWIWLVYBQEQMIGOTDTRTOGBFHCQUPMNODFZKNJCNMEEWWLUHJDDAGWXBKVMFXBWCLZXOUYZPU");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.655659687362;
    tmp_msg_0.lon = 0.969171623971;
    tmp_msg_0.speed = 0.0122753557575;
    tmp_msg_0.speed_units = 99U;
    tmp_msg_0.duration = 44731U;
    tmp_msg_0.sys_a = 34774U;
    tmp_msg_0.sys_b = 24067U;
    tmp_msg_0.move_threshold = 0.378883295191;
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
    msg.setTimeStamp(0.899648840221);
    msg.setSource(12948U);
    msg.setSourceEntity(80U);
    msg.setDestination(862U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("IBNQBXZWOVRCOATNDASVEPJLQYYQNCEHGYWVHTXJITVRSJGKBMXGOLUZFGXPUNWWHRBVEFPKMDUOZWFOLDQDGDMTRUBQEZBKKIHYHLOZXYVHNCRBTJFRJGLAWDWDZCVLHEOYUADUFJXSPNTJLSUMNYEVPFPMJLMQYNBKCANCATKFG");
    msg.dest_man.assign("ORTXBSLDGFMSKIEIQZIKJKJAJGASQBSRLM");
    msg.conditions.assign("CKVICVMJORISULYIFLHRHWQZBEPLURWSMXNIPWINHKCTEZHNVPERBTPGCNYVUKJEXDXQWTDRMMKJTZQULWVMIXGEYJLBENRKRFLTGAJDKFAFRQIGQHAOQHHTDNCCPDTEAFXZBMAAKRUXOZPJGFNFZCWQAZLSMTPCIUGSSWEOKUBLSAXGYFLWGALNBVTBVEHBZPBSJYIOPGZTVYJUKEOZAQPHSXCQOFYNXMDDUOY");

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
    msg.setTimeStamp(0.50048844562);
    msg.setSource(19249U);
    msg.setSourceEntity(53U);
    msg.setDestination(8399U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("YOCBBBAPDAUDFCZMKYZLFGRAVAWNGVCJSIHXINHI");
    msg.dest_man.assign("OVXKGUAUZJLNLLWDLEWQQRRVFTHOBAVVKCNXGTTFAXXDSGRLPLNURLKMTPEADHEQZANODHMYWITGSJNIBMYSTCAXTVROJSQLDOQHASTYUKIWHPYRRGUAFPZWXLXCYVPOMFYBWD");
    msg.conditions.assign("KCOYBZCAOASQZGXMZCLLROGRSIJYMC");

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
    msg.setTimeStamp(0.756951859763);
    msg.setSource(17747U);
    msg.setSourceEntity(143U);
    msg.setDestination(31659U);
    msg.setDestinationEntity(177U);
    msg.source_man.assign("IDYDBORMQSOOYKLYRRFKRTLHQZSSTYGWBRNJHIFKUHJEHLGQECZAZBMDZICXPTDVAQLREWFPCZJCXCSJOFEWODCTLCYZOQXGMLYAMUPZFUKIGGLYMXWMBAPZXGIEUSOXTWJQKVAPXCTAGVVTNNFBDFMOUTEERHBKLRYPSCXDWV");
    msg.dest_man.assign("OJBINSIOQYGJQLNQAOOGEYRSRGIKFWKHLNSIYNDVPEXFKWCTYTSVJNGJEJWERIVQSUEXDUSIJMWADFAGBDCCZYMDDMOZOFVACFBDXZXYHOUPIMHVFGQTWPUDAXKTCVZAUNWGCVXYBNLRRLHN");
    msg.conditions.assign("CLCRUBSTAONREWQABCOGJVHZNSMZILMRZWYNKYJMTDMDBOPCRIVLGFWKBXQZYNUJQOMVYWIWNSBXWFIXJPVUJXVATPFVKGOMXDDCGBCFXPEYLATKFJGFMZJNQACJHSAWRVQKTNECDRG");

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
    msg.setTimeStamp(0.514788178712);
    msg.setSource(52804U);
    msg.setSourceEntity(92U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(208U);
    msg.command = 107U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("POVWEKOSXTFEOIGKLOCNNHGROITTRVSWKDZAHUEQCOWLUEFPRYNRZIJWPFMQPKJUTERSZCIIMMLXZURBSXUGYLZGADUQWVFLXIGEMELYUABOJYJLNPCJAMYKVQMDQYPBXPODEINZJBIHBYGFWKUBRCRJKAHYZSVTEHWPGV");
    tmp_msg_0.description.assign("PHKITPZYYAGKHYJBUINHTXORMVIARMYRSPGFSNFHOHUSDALEKEMMRCEPOZZOJXKLVFEJJWWGDFGJKADXKFCVDCBCAFYSHAGXYZWIBIMQNEUKRBBFZIURILCLAFBSVKLJUYSZQTTGTQUBWXUOOIQNXRNYGHHZWPNTQMRXPWIVETIOJSMVXSWTLDAWPMCBNNURODBYC");
    tmp_msg_0.vnamespace.assign("DGMRRIXBHTCHIXJPOFGRGNLKWYJOZYAECWNZKQVWYIZCYMBPDVLHFRNUUHONUWQUCIUMKTVARCMQISIRYKJTXFNWMVEUJKBTSJLXRCXWBAQQVYCRDQOUEEYOQTAVLDEDNZWHVGZFTBSFFILNJFAHMVKHTNHLAFLMYCYZZTQEGUOESAMDNWEHSINDIOZLGWPIQJBLAJXDDGMPPPKGEVBKBGASGPXOJPXEV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXCYXLVDRSATSFAFWSLYJOGMOUKFRXOOSKZQWYIAIPGLUMUNBEBSDWBBQEASQMZCNTJPGMCCQSWOUUNXPWAIGINNKLTKLMYUJOVBFOWEDCYLRZFXHZSETEAPNYFGDGEUZRKJHMLTBOCWKBTINZRPWHDJSVDBWOCMHDFEPJDTGNONQYPJURXKZBLMAZEUQHJCYTETHYIHFQCFDQVEAIRQXVXQUZI");
    tmp_tmp_msg_0_0.value.assign("KXQBMXVMSMQZCXTUNCVXDPGJNDDRSOYFJJZADOSQEPIAHXIYZMRGHBMIYBVVRJHXJEGLCOVRVJKIQEKJUELZNWGKWCQOPHAMZCFYUOOYRGAWNNEVHUFNZPSYWHWHJBLCWZSRXHCFOPMYPPFZLWPACEVJLQYJSGXKBUMPOWTRNYQAMDXAVZUUNTUGQKKLEFFLFORATTSEKBTSUBICQOBLUFZTITDDKHSFWIEGIANHWLYNABKG");
    tmp_tmp_msg_0_0.type = 83U;
    tmp_tmp_msg_0_0.access = 54U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XKZWCEVEFBAZNYCHCHJKWOTFUPDTKSAHPMMQRFWKZLGHOEXLFASXJ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MCQDGOAWLEHKWBSYNIHMUQMOUBBULVGBFJHSYXVZEXIL");
    tmp_tmp_msg_0_1.dest_man.assign("WOLBUFYUPQKBUZPRERZJTMDHMALECOQIWVFUPLKJOYEFAULUNADEGHFSIZNPGAXOLAZTDQNRGBJMSCHBCQWTNQKKNUIHCSMSCGJPXBUHWOMYABTH");
    tmp_tmp_msg_0_1.conditions.assign("QGMEVJFOWKAONGGWWROWGHCLIFVX");
    IMC::GroupStreamVelocity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.446293046505;
    tmp_tmp_tmp_msg_0_1_0.y = 0.785541264915;
    tmp_tmp_tmp_msg_0_1_0.z = 0.824857299258;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.121704310333);
    msg.setSource(65314U);
    msg.setSourceEntity(210U);
    msg.setDestination(8091U);
    msg.setDestinationEntity(142U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DULAKYHCFJL");
    tmp_msg_0.description.assign("NUVPIYYOORAQHIFRTCFLDZGTVEQFATDTQPEILNUBXIQSNSDWUUZZKVPACHXOIONHFYJWMQWYNDKLXOKXZBKBYHJCCPHOGKDAHTMEELERWBZGFPEVWEUVGJUULXHSAZJVACQOOQHPVFDLMJWZRRUWPKSKNRMKOOTFBAXNQWDSJCFZBANKRPLPXVTATSGKWMBEYYQGHGIGGSMDLBWCRSXPICXUMTQRDYJTSJUYBZGIJEMBEYHSNAX");
    tmp_msg_0.vnamespace.assign("IRMKDSEDAHUHHCUFEHIDXEJVEMWARBDBREJCJLOVJNUXYXXTUATWYGEACVBQIAYVNUGLPYFDCWLNPRRRTYZOIIJQFQUSXPDNQRZXMRWVLLTDMLMXPULBSSGFTTBPOIWVSBHKGNOETDKWCGJGKKSMWABFAGCMVWRQK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QZGHUKTORITZIWIBFTEPTBYBBRISSHOCZNRKTFWZPCNKKMPAUSKVZBDOJQNMFAJMAUYCWXDSGYHIEPCMRXERBLALLVTNDVLYANJQAHNXVANXFFHDPWXMFSIKJJSPHVQKSFTVPQHEDGGOCWMOGZBMHUGDIJLWTLUQZKOUSJGZITKUEUMDHOPLQOEPXYLMXW");
    tmp_tmp_msg_0_0.value.assign("SNXPPEAEPHRYOICJOJGFMHMDHSDQIOLABZCXQKKDPLZNJLSQUECELQGWXYHZDWYKHQARFJKNPSCCFVHAKTXVWSGAQQ");
    tmp_tmp_msg_0_0.type = 221U;
    tmp_tmp_msg_0_0.access = 239U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TTAYLKJEWRUOPACVSKVMPHLJSXKFWOKPXDAABMPRUSAEMQBLEUIYXFGQIWTUCWDFZYFQTBQHLSZECTHIKIXNMXNCUPNKURGMASNKRO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BHDVPTEUNIYNBRWMPSIXLDYCMVECZNCSTFRJGNDDTAJLQVQTSPYADHJUAYGDWREOTUKLUOXBAAEFJVWRIKZSYACAONTWGIIBGLSNXZIXYOINFTBBFMVSAIBPFGKZLYOQRCYKJEKJDPTHZBMVLPFAHFKXRHOESZMQJQMUYGUVERSCWEDUTLOJOFORNGFHMXXPJGAXQEZWMZSQIOUQVUDIKXCKLHWMJZMHYXTECRSZWH");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.372648648188;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.40922581655;
    tmp_tmp_tmp_msg_0_1_0.z = 0.165441160781;
    tmp_tmp_tmp_msg_0_1_0.z_units = 68U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.429020369045;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 42U;
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.193061831416;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IBVLLWWHXQOCZFAQVBYUSBUPOAJHCBELVFEOMWGLXRRNLEJQJSTFCXODULXZWLNYJBTSYTHVZNYAQNEPHKMKHOWRRODURUDFDTAKISIMAYCNPUHWGXJWKIZDGLGIPTYQWMXIUPARSSTTEFRNSZFJKUGTQFZMRMXJOGKBTGYPZYJHIICFZGVQKCCTEEXNDIKOWAGBVEDNJXPUNLHAEMVAVPSCNAPZWPBMCKCQVM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id.assign("HTSRELQONSMGDP");
    tmp_tmp_tmp_msg_0_1_1.sensor_class.assign("FPASVAVWKVISRGGMZVFYYMRUWXLPECBIDFYBPJGXGLFJFTVUUFJETOWNDXMMTLSZOIAVHPEOQTRIUXEEKIXVZRQDVUNUDYSPRZBVHHQRRRKHLWZDPUMONBCTGYCZJSZWANLXCEOIMTPPHSAJUTDTJYFSHGYCAHHLFFXLEJMXWPQAGMO");
    tmp_tmp_tmp_msg_0_1_1.lat = 0.376528494579;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.634260290927;
    tmp_tmp_tmp_msg_0_1_1.alt = 0.61106848788;
    tmp_tmp_tmp_msg_0_1_1.heading = 0.866916870842;
    tmp_tmp_tmp_msg_0_1_1.data.assign("TPWPQMEFOKZIUYNCOFUVGBCUVVVPXAKBSDSYVBORKZHPHZUOSHTLRMLZJUERUOMWENVDAHQOYHTEBQGONJARHXXRKZIYXMAIIYJQHNKWATSBIGGYQBFALIAGACGJCXKUZDFIWGTNBXEPWVQSQPE");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.action = 135U;
    tmp_tmp_tmp_msg_0_1_2.lon_gain = 0.374406432212;
    tmp_tmp_tmp_msg_0_1_2.lat_gain = 0.248081922404;
    tmp_tmp_tmp_msg_0_1_2.bond_thick = 0.0725323365184;
    tmp_tmp_tmp_msg_0_1_2.lead_gain = 0.721994603806;
    tmp_tmp_tmp_msg_0_1_2.deconfl_gain = 0.62199308075;
    tmp_tmp_tmp_msg_0_1_2.accel_switch_gain = 0.208983729249;
    tmp_tmp_tmp_msg_0_1_2.safe_dist = 0.876650961663;
    tmp_tmp_tmp_msg_0_1_2.deconflict_offset = 0.110314454077;
    tmp_tmp_tmp_msg_0_1_2.accel_safe_margin = 0.135331482045;
    tmp_tmp_tmp_msg_0_1_2.accel_lim_x = 0.0878337633142;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("VDYBJZIAGFOCBYCKPZRGEKETOKLIBUHEFWGNARCIAVNJNTHUBSYMHMEWHSAPDOEFXVXHQJIWTCBSLRTLOHNU");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AirSaturation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.960626477605;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.555376978794);
    msg.setSource(41794U);
    msg.setSourceEntity(237U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(242U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DTRLURGWBVMZJ");
    tmp_msg_0.description.assign("MCPGSVVQNVPXIPWKGKFLCTNGCDEHXARXVWSDFRUBGEVQEMBQYFBOSGXCHIZBIESBBXHXFPRULSMZAIHDHMQPZDMNYYENZMOJANEOSYNWGUSCROONPKRYAXOPBTKWUBAQJXWTRTLIGPMWYTKDQHQTNL");
    tmp_msg_0.vnamespace.assign("ZJMKUIBDAQEWOKZMVLBVERQLHPNHSZLZVTWEDQHJBTFZMWJYGYVDNUXOCRGFCAUGVIBDWIDTRTYMRJTLKWKPZXMCQFPJCZKTRFSXIYLOTRKWVSUUKBBAEQTOOFAKIPIXESLDKQMDNJMBXQFPGJEWRCPSBJHHGYGCUNYCORVEUATFLDXMZCNMCYGHUXREZDGONMEEIIWLOSOSXDBVPHHXAWQGKNLPQJSNUWIPALFVFXIJQHASBYYYO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RHWKPKOFZIOPRLOBGHOJVPGEPRTLXKXMHBXQ");
    tmp_tmp_msg_0_0.value.assign("KWYESMOGLMZHUKULIEKQKGGLZOXIJZYTICCFDYIVSKNPRFEAANRVUYHABVGHQRJECWKQHHEQJISYDGBPZXWMOKHUYRLYZXCQEDFCPKRPDOUWBMJCHDHPFSPMVNTNUAYNBMDSFAEAXKJSRTQYHLUWFTICPOOYATPJRVDNIVQGSFMZLBBVWZDXBKXUALNZJCNPWTVBSFGMQRCECIFOTLZQRMOQWWXRZFVENGH");
    tmp_tmp_msg_0_0.type = 134U;
    tmp_tmp_msg_0_0.access = 79U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SHNQFZTIDGFFREEJNJTCLZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MPGEFYWTMYCZPHKGBUKBIZPCZIZVGHPUMJSDUWQBNWNKMYMNRDWMATIJSQWJFHHVSFGURGESDRAYAKECSZFVSGVALXPJJLANOEUSWXKFVVTWZRFTOOUIVXVPHCNYHPBFJOBZRRLQREWIRXDQCUCPIDINCKAYCHDKWHZTRICSDMUGJRABXNOQOOONJXEGYFWBAXEGCTBOHOETMTQBKAKZJGPADKYYMYLNHTLESVUQXPSLXFUTBNDIDLX");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57295U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("WEULCYJXHDJWDTRNGTDCBBIVAMPPDJBRCOUUEGTONWCUPDZZSYCSXTVGQLHJUYPWHZWODTBFNIHMNOWGRIOYEQAEPCSDIOEWFNWOLEFIBSTYHJQCHQEGCJYBKTPLMKYJFKVDSXFUMCZPNHQYATBVYXFSAWXBXKPIKSQNESTXZAPOHJXQGZBQZXRGVAZMPNVWMRSALUJIFJGIMVDZOAIGSIMDCULRKNRLKBFHTONALAL");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NQPYREQIQXGUUTMIICDFXYOVCYXTHYTZVIKGDNAVNCUGYCUBYAWORTLQLFBRSFSJBZQNPZMTFTELBEQSPKTBLWHUJJM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QQHEJSSQFPJQXGAPVAFUYQSJNHHBLLDFJHTOZOTGDNBSMAPCENLRTLKPYOCBCNUJKYPKEVDMITEASGDOWMWDRFYY");
    tmp_tmp_msg_0_2.dest_man.assign("FUQRMFSKKXCEJZBQXIYTVKXRNMKGMDFKFQODLXTYQEEURGHPYLJHVLWTWLFOMOCPHKSOTVCBJXZTOCOMRPEDHVZSEDBDGWJNPSYCVFZPUTDXRINSQQQCZGUURBALBBBAMJINTLNHULDBAZMEPHUPUWHFHEWTGISXZJOQZNWKIONGDIIPABFXEJIUVOIFJVGYCCMASTLXVKRYYAHL");
    tmp_tmp_msg_0_2.conditions.assign("HMCYMUBAJCWBRCUMWPFIGJZSDYCAWZKHAAWHOOLGJFTHFKCNCYADJSDWNRNLIXOCKASQMLHXJCPQYVTBNTGWZQBREPGUERXHZPZZFTWCGHEXVBYZLPWIABQDVIVVHNFKSOOAMOMBFXPYUYSHUQXPIRRGXXMIURFLPTNFLEUSNGAHKOKVXJYTLRCNVWVKFTWLMSIRKVMDGZEEBKEIPALTUOIJLEGFVQSNSEQUZPYYSQBRDTTO");
    IMC::SmsRx tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.source.assign("KKDCTTYVADZMKMKKKCBHSBYDJQFMCKFJMXPJNNONLNUVBRZZIVWBWQWNALIQDCSOPIOJWLAMUPQDXIWOTSRHWGMAADRFGPDPBKFPZQYCXRZJLOOZXHIVSBVZSJRDEVTLFPUKHPXJASOTYQJVZWO");
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-52, -82, 62, 2, 124, 63, -48, 1, -121, -75, -24, -42, -100, -112, 66, 111, 47, -77, 104, -61, -83, -59, 60, -75, 82, 33};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrexAttribute tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("HTZWAHGXNL");
    tmp_tmp_msg_0_3.attr_type = 27U;
    tmp_tmp_msg_0_3.min.assign("YKMROCETWIYSGZPCSMCCTDOLVNDJWZJDBTDAEHWVNXEFLUPFGPQPBCCNASYURKHCJAOHZOTPJRKQFYLHSMPCUJWBTDXBXSBNXHDEJMYWNRNLSLNENOXOIFRTLLFZPMIFYYGXMUOIRISOUCZLVFAAORTJIXZBEEVSKHTNMYIBQPVZDQQAZHIHFAUDVZWGVIGQVMBITJEGUMGFWBGDAKPHSNVUWREKGJM");
    tmp_tmp_msg_0_3.max.assign("BHMKVQZRYUHMYXUOJLTAFDWRRMDROHMIWJEJDUIZKAKSZKHPEAEODYNWMCTIPKPOCYHQLVTVIVAGRXXIATRJBUVWLSHKIFGAVCOQHWCFSPPJDMBNLGVUEXKBYZNIYEJFQBJVFJGXBTDKQOQMMJHTBIYLFVFLPVUZULSXHPUCSOBCCWCPXRRDGTXTOSASKBNBDXNNQPMYEAIFCZENW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.316310365511);
    msg.setSource(8018U);
    msg.setSourceEntity(145U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(253U);
    msg.state = 76U;
    msg.plan_id.assign("AGNOEGNCTGVYOPBPYJXOMUXBDGKRZNCYNIKTQQDEZYSTLBFLDFCIMJPGUSRSEJKPIUDIVTHSTQWXCNWCHEKLUXHBQWRSZHHEJLXPIKBOAFJZPVXSFIFXVGACWMVRMQDJNDANWXWNRPIRWJKLKFRRMGAUMUCJFHOGTEZTQI");
    msg.comm_level = 85U;

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
    msg.setTimeStamp(0.702272865115);
    msg.setSource(26184U);
    msg.setSourceEntity(191U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(237U);
    msg.state = 204U;
    msg.plan_id.assign("RTCCXDSVUVIZWUMJSJNF");
    msg.comm_level = 34U;

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
    msg.setTimeStamp(0.779015060689);
    msg.setSource(16319U);
    msg.setSourceEntity(171U);
    msg.setDestination(50852U);
    msg.setDestinationEntity(152U);
    msg.state = 198U;
    msg.plan_id.assign("HEVMMEUUHGGBBXJCVPDGUFYCAJCRGKLDUORTZDKXY");
    msg.comm_level = 103U;

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
    msg.setTimeStamp(0.589493560714);
    msg.setSource(4342U);
    msg.setSourceEntity(184U);
    msg.setDestination(40128U);
    msg.setDestinationEntity(251U);
    msg.type = 157U;
    msg.op = 10U;
    msg.request_id = 65369U;
    msg.plan_id.assign("SZCWHKNWKNNGTRSQITTLIFFTYVZXPMKWVMBQZXPPOBFDPAHPYIAGSMHHNQKHWMFZKZRBUVRPLPSSSQXGRSDZELTOLLPAVZJNERHUXKOWATEIJVNOZJBIQTCNVUQTLEGFMFYLSVAJMWYCMALJPFOCUENIRGJWXGADYKGVUSAFJWWLKZBCBZMIIUHCOEIPREBBTHAJVRQFRXWUNGHDXDQBASNGOEJXF");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.153756847828;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XILANGZOJSJYKYWUGJGMUGRLMKMHEWTBAVOAUXJCMTBNCWBRWZHTNDABBZVBEXEOUTDKMNBXETJPJNDKAWRZHROEPEZAXSLQWZKFYERFKRNWPWQSPAEMNCUOIAYDIQTIVULLGVTREZHICNH");

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
    msg.setTimeStamp(0.376987166618);
    msg.setSource(8070U);
    msg.setSourceEntity(56U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(120U);
    msg.type = 10U;
    msg.op = 44U;
    msg.request_id = 38152U;
    msg.plan_id.assign("CCIFXNWDMAZRVULYJGMDPYGVLJKTQLGIXLYFMOFGLSWZVMLJUOOJ");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 213U;
    tmp_msg_0.name.assign("RZGEPVRIYHHNTUNHSTGACGXKERUJOSPEXLCXCPXARSYBSYZSDUKWRYOFXOSECKEWPYABIFVHBGSIMJAQLGXVTMLHJIKZHQEPOBAIFAZBFRBJKBCUUQGGOUMJHEDVITEWCZMFZDBLNDDWFYXLIQMMWWJZGRXWVLLJIQOZFPFKWTSACURTVHBABTSKPLYGNHNRVQXNPAXTKD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRKCBTSNEBLXYAEZOZSQDJDWBTDPLCEGOWIJTUJTSJOLD");

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
    msg.setTimeStamp(0.620211532959);
    msg.setSource(2166U);
    msg.setSourceEntity(162U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(78U);
    msg.type = 69U;
    msg.op = 84U;
    msg.request_id = 33303U;
    msg.plan_id.assign("VOAWXZMSUPZNCVTDWBDWTURQYQXMDHAOMILCJGLKSZOEBNUKDQRIBYABREXBERENAHJWFPUGMVPGRQDQHIAICFYPRXZCNORSXMUXLHTGCWKGHWVICOQHJJXKWCFFIBVOFFPMJNLSFFWMRZEZKHTKJKNZXAKVHKXLTALTLHQJETDUVBQVPRSNJS");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.229487804272;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OMNSYQOVXRPCXXIQVJIZCFEFAGHXFMZDGKNVMTGERTOCKLTUOHGBQNRRWBSBKADABHTDILNHTRSZPKNCFDXCDCCWHEVTJEZYIIPMILMEUORCGOZMAMFSELGLYJAFFSRHZJYUWYWOYNVTQPVKJKWKLBWUDPDAPSNHKYOXNHZRUKSMSDMGPTVXAJQNJREWMFYTEHQWPAXBSYWZDVLJPIJXBSIGQZZCLGLVLJNOBFOUYDCAHQUFU");

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
    msg.setTimeStamp(0.355402092484);
    msg.setSource(62910U);
    msg.setSourceEntity(30U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(133U);
    msg.plan_count = 38435U;
    msg.plan_size = 2130015449U;
    msg.change_time = 0.479587996004;
    msg.change_sid = 10240U;
    msg.change_sname.assign("ECYWKXXLNADNEOXVUMSZGIWJIHZVXORYAKGZECQJKUYPRUDGKGYXIIMIENLHGLGWPDQQSQAXFMMTRPUSBSQRHRIDAWWCWDPGOZJIHNBUSEQMOBXVJUJMFFSCHZENNJTJFRDVFATHTKPDFXZCHLHLBVCSOBFNMSAKYCBOAEHYGZBTEMWALQDTLPYSUCZWKTBAUGYOOYYUTJPNKQZVIXVRQTSQNHDVRI");
    const char tmp_msg_0[] = {17, -18, -35, -125, 14, -94, 23, -38, -69, 70, -15, -82, -119, -85, -106, 116, 114, 64, -34, -114, -4, -58, -34, 1, -89, 37, 33, -19, 79, -19, 107, -58, -81, 73, -56, -104, 72, 4, 22, 44, 95, -12, 90, 3, -12, 88, 32, -13, 22, -20, -57, -4, 56, 35, 14, 121, -17, -14, -71, 92, 8, -112, 8, 55, -34, -27, 107, -6, 79, 13, 19, 73, 115};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QYLDUDNZVVYEIPZYRKUWBRMFTNVRCBFSSLYGUKFGKAMVEOUHETJXCUHDEUGDFWQMHTOBPTUSPPUNHKBOQTYIZOQ");
    tmp_msg_1.plan_size = 13819U;
    tmp_msg_1.change_time = 0.434652869166;
    tmp_msg_1.change_sid = 57612U;
    tmp_msg_1.change_sname.assign("HLDXTTEMREFLMWJLBLUCFNFLQOHNUPSVVNZKZHCRIOKGUCNEOIDZYSYSOGNYXKRICHHJPGMUIPISORQAADYZLKOIAQQQODRKFQRYVFJKTAEHBHVSWJUCFBCPCTPMP");
    const char tmp_tmp_msg_1_0[] = {30, 88, 27, -43, -105, -45, -19, -119, 90, -62, -47, -50, -16, 50, -3, -95, 89, -126, 61, 2, 105, -108, -36, -74, 111, 80, -127, 44, -53, -121, -35, 105, 7, 27, -79, 89, -21, 68, 61, 62, -56, -79, 27, 24, 28, -56, -54, -99, 123, 124, -27, 77, -64, -106, -17, -31, -12, 56, -40, 49, 76, 19, 44, -78, 66, -16, -101, 54, 88, -11, 72, -111, 64, 55, -73, 113, -119, -62, -95, 36, -100, 38, 79, 44, -55, 50, -121, -27, -89, -75, 29, 85, -14, 98, 126, -126, -108, 69, 47, -39, 122, -30, 114, -98, 115, 124, 85, 87, -61, 114};
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
    msg.setTimeStamp(0.424179520399);
    msg.setSource(41063U);
    msg.setSourceEntity(38U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 47736U;
    msg.plan_size = 449002632U;
    msg.change_time = 0.483583276788;
    msg.change_sid = 43309U;
    msg.change_sname.assign("ASALHMBHFNDFEDGKNYHGQTGLQYKGMTTTPEDMAUCAJWXHEAZHOKZUNYYATSOZZJRWQORLRVFLOAKBCISEGBEMLPXRDPXLEFMLSIQSLVZFTBYJVXTVFBYUZBCQQSIRVNCNGPSFIEOFQRNHWPBJMUWCIDKJUKURYHPMXBVVXDHUEFMZOWXGWSCXYVRWBCYUISXGAQZOIOYRCDGDWWENHOIPNU");
    const char tmp_msg_0[] = {97, 60, -33, 16, -17, -4, -104, -100, 95, -38, -80, 80, 3, -86, -31, 27, 126, 111, 69, 62, -3, -21, 31, 47, -25, -96, -123, 106, -113, -75, -123, -94, 101, -71, -44, -120, 10, -115, 11, -44, 58, 8, -58, -121, 105, -15, 5, 75, -25, 78, 51, -112, 12, -63, 37, -34, -60, 29, 3, 38, -90, 65, 34, 8, 64, 33, 107, 98, 89, -74, 115, 82, 67, 124, 88, 117, 103, 115, -5, 44, -44, 5, 99, -111, 7, 82, 16, 66, -96, 102, -20, -60, -51, -71, 56, -80, -30, -117, -58, -23, -6, -102, 18, -120, -110, -104, 3, -96, 63, -36, -121, -16, 54, -110, 52, 75, -126, -78, 28, 84, 72, 117, 93, 7, 79, -33, 62, 2, -60, 73, -18, 64, -36, -99, 74, -92, -54, -86, 45, -51, -1, -23, 126, 35, -55, -25, -109, 55, -126, 75, -88, -59, 73, -86, 45, 13, -65, 115, 17, 24, 60, 100, -55, -83, -75, -91, 62, -46, -63, 54, -55, 126, -23, 91, -92, 83, -10, -19, 0, -77, -77, -5, 7, -59, 112, 47, 86, -9, -118, 72, -100, 35, -58, -113, 48, -4, 8, -103, 81, 116, -28, -38, 15, -33, -15, -121, 35, -7, 2, 17, 50, 30, 85, 103, 121, -4, 76, 108, 33, -117, 109, 67};
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
    msg.setTimeStamp(0.392123086693);
    msg.setSource(26388U);
    msg.setSourceEntity(174U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(129U);
    msg.plan_count = 64600U;
    msg.plan_size = 1601882709U;
    msg.change_time = 0.201132197498;
    msg.change_sid = 13220U;
    msg.change_sname.assign("ABEDXPIPMXSHLICJSYFBUZVSMWMKDZKZYYUZOXNBAUQLYHJJACWCUWKHOUGVDSPKYCBOGXVTWAKNDOZRLIPJAFPWNEUGARQXSZCQIXWRHJQERZOBKBMDHTWUHIQOSYSKEGORPFLHITYGXDHQNNNMTNQPTAXZFCQWNZMQTWTSPEEFGKPSTRVFGVIVFU");
    const char tmp_msg_0[] = {-43, 112, 14, -52, 111, 118, 58, 126, -108, -16, -52, 23, 61, -69, 57, 53, 13, -10, 54, -32, 70, -70, -66, 6, 13, 125, 99, 98, -70, -69, -81, -101, 57, -60, 118, 34, 13, 92, -49, 122, 70, -65, 13, -113, 66, -105, -46, -104, 118, -121, 106, 115, -75, -65, 44, 63, -90, -110, -54, -28, 17, 31, -109, -5, 38, 34, -119, -72, -23, -14, 95, 43, -73, -117, -54, 80, -12, -67, 114, -36, 0, 6, 75, 73, -109, 27, 28, 98, -111, -118, -14, -101, -92, -123, 35, -59, 74, -13, -68, 0, 33, 40, -1, 45, 19, -20, 69, -65, -59, 29, -104, 125, -6, 88, 5, -23, -47, -42, 84, 18, 57, 66, -4, -99, -110, 54, 18, 29, 29, 32, -81, 42, -63, -125, 30, -18, -22};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CCUPNRZKUFMCGAGNGRUHTJWPPVJFSTLWCSFIOXOBPFRTQMYMGTQFPYEYWBGOFTKNDTOXIEYHAAGHRGDLUKYDZJZLWRFXWQGCKEHELNOEYSDORWKHNAXSESZYQLNVLIMHDNJGOZPTFSH");
    tmp_msg_1.plan_size = 12123U;
    tmp_msg_1.change_time = 0.970524721587;
    tmp_msg_1.change_sid = 635U;
    tmp_msg_1.change_sname.assign("BTDCJJXYDEXOTDRUTHPYBFRKQVJBGWUCSYKGJSSONPOHNFFFOEUBHTCAPKQGSFUFULIALJYNASXXHNFEKPYMEXJLPPLVPCPTDXODRQWNMRVUBQWZTZSZQIZHICWVEYWJMGTWSKAYCCFLRQGMWRBKIVENVRWZLDEGNYNLASMIDXAYZIXFVMUMGHFBIUUBBLGADMBNYVVH");
    const char tmp_tmp_msg_1_0[] = {109, -52, -58, 19, 101, 26, -62, 65, 46, 117, 95, -104, -83, -76, 37, 14, -4, -54, 87, -98, -43, -128, 67, 77, 19, 21, -44, 61, -3, 30, -76, 99, 42, -103, -19, -62, 14, -67, -58, -92, -29, 0, -43, 118, 93, -32, 70, -85, -37, -6, -66, 20, -124, 27, -115, -33, -57, -52, 104, -45, 13, 69, -65, -8, 9, -104, -48, -110, 109, -46, 51, 93, -94, 113, -38, 105, 64, 126, 99, -128, 113, 10, 75, 120, 41, 97, 56, -35, 71, 45, -2, -103, 99, -40, -122, -22, 70, 104, 122, 2, 70, -10, -19, -8, -2, 110, 61, 77, 66, -18, -46, 107, 55, -14, -18, -124, -75, 121, 77, -54, 89, 108, -49, -32, -123, 92, -77, -26, 14, 61, 122, 8, 71, 3, 116, -39, -107, -83, 58, -93, 24, 110, -96, 70, -2, -98, 66, -105, -117, -6, 114, -79, 7, -26, -43, -108, 93, 46, 39, 113, 107, 16, -12, -43, 72, 62, 50, 5, 28, -37, -53, 14, 20, 31, -40, 86, 54, 23, -128, 63, 79, -113, 75, -56, -71, 111, -127, 123, 1, -93, -24, 89, 44, 109, -77, -122, 16, -31, 109};
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
    msg.setTimeStamp(0.316502184002);
    msg.setSource(31308U);
    msg.setSourceEntity(247U);
    msg.setDestination(37432U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("LEWDJNSFATSSTQNHOIYQEEPHXMJMVDXRGVNCEVUVEGTUCXGJAZKMGSSDOUFCOLXAMTBCKVBOHJZLWNBGNEXLBYQXRCVCHFRKITTPYLJURGYFBAYKSFWOQRFDOPSKJKRKOAUZMMMPDYNLJCTEBBWEMWPDDDKFIUYQHXXCIFZUIWAIHOGVRNZNRSNHWXLPLENZLUJP");
    msg.plan_size = 9138U;
    msg.change_time = 0.163174251607;
    msg.change_sid = 61111U;
    msg.change_sname.assign("FUVLSKPZQVTJJONGIZXRMXCYDUJUAXTWVPQBFPTLGYCHIXTEYIQNSZMLGTIIFBDUJVGDANHHGDZYKWLIARCAMONPKHFJYBFULVJLAZMERRWWBCWHKPVSUEXPNODYZIVHEGSLARJIACTUPCMWONTPELNUPTDESNGQEFDRKKQFCNOKMM");
    const char tmp_msg_0[] = {53, -91, 49, 92, 39, -81, -95, -72, -22, -78, -55, 93, 8, -54, -82, -99, -23, 53, 52, 61, -90, 44, -3, 13, 103, -93, 34, 110, -119, 67, -121, 83, 56, -104, 98, 101, 41, -109, 41, 95, -128, 92, -57, 98, 121, -120, 45, 126, -25, 63, -124, 54, -1, -44, 95, 101, 6, -111, -45, -93, 93, -61, -7, -97, 69, -33, 101, 117, -30, -43, -89, 33, -123, -46, 7, -69, -6, -114, -26, 80, 45, 27, 33, 37, -23, 41, 91, -81, -36, -92, -85, 126, -94, 91, -45, 0, -67, 30, 63, -28, -39, -50, 0, 70};
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
    msg.setTimeStamp(0.339058933836);
    msg.setSource(45746U);
    msg.setSourceEntity(224U);
    msg.setDestination(8531U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("BENCELIHBCSWSDHXEEQARLDZXNFXDTKWJHZXTHKDDTRZMWJXATPANEYZKXQPCVRHOYPLHEBULMYWBAFRWQVVDFVMAKRQQLNKNOCIIBJCOPBOXNFYVSMEBICNRUIWOLJYZJIEQBGELEITGNSXPPFDSZHPRMLAFQNXSFOAGKIWHCSKJKMFPCPDPGY");
    msg.plan_size = 2307U;
    msg.change_time = 0.808189398429;
    msg.change_sid = 21963U;
    msg.change_sname.assign("FXUJFUPPAMFNPBIHSHPKFEJWRBZUATXOACODGNQZELQLVDNUAGGPKJE");
    const char tmp_msg_0[] = {-57, -43, -124, -64, 22, 12, 116, -31, -23, -98, -64, 50, -28, -102, -96, -32, 94, 38, -68, 25, -3, 64, 106, -8, -18, 33, 119, -39, 25, 20, -9, 24, 29, 15, 45, 60, -85, 110, 109, 23, 55, -25, 63, 29, -50, -47, -89, 47, -62, 114, 88, 47, -76, -127, 81, -117, -119, 18, -40, -27, 4, -94, -61, -20, 95, -48, 39, -102, 117, 10, -32, -88, 68, 86, 68, 58, 124, -9, 53, 43};
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
    msg.setTimeStamp(0.295907849976);
    msg.setSource(39324U);
    msg.setSourceEntity(94U);
    msg.setDestination(42416U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("YIVJCYONKWHVVTLOGBZGSWTNIJTBLDMTGSVWEXIXESRNCUZZEMKOYBQJSLDPPNEAUQIQBKRTAAIORDAHYSIRQNVGBHFKHKEVGIWTWJYCWSVOSMCTTLPMVURXPCDBMRMMYZNQWJFGOUDQEHYXXRPOYDCYSXNDBPZKEAQLOCIXSWBZPRNMGEFKDPPEXJNGFUHQWCMCPWFBUT");
    msg.plan_size = 29690U;
    msg.change_time = 0.650028333616;
    msg.change_sid = 45485U;
    msg.change_sname.assign("SVGYUSDWZIYHZCWKCYLHOMCARDPIXGMENBVOEUGJQVJLFIUSJXVNPLTNBKRWLSYEWGRWOMQZJICNPFWSMQPGALNDZQTUEOPHCYPVNFCXDBBFMZKDJOYZWNFSORJEIPURDKKFSXRFDGHOAOUCFRLGEHHTBAMEMRQTBVRKA");
    const char tmp_msg_0[] = {31, 2, 101, -82, -49, -67, -13, 7, 85, -94, -61, 3, -72, 65, 103, 30, -54, -33, 59, -88, -109, 81, 74, 21, 121, 82, 106, 49, -72, -40, -20, -21, 26, -16, 91, -68, 45, -10, 3, 107, 102, 125, 8, -8, 13, -16, -55, -72, 32, -76, -73, 81, -19, 32, -99, -82, 10, -82, 84, -65, -90, 91, -39, 102, -115, 71, -59, -76, -96, -45, -128, 20, 19, -7, -38, -62, -34, 100, -82, -37, -15, -106, 19, 67, -98, 114, -76, -92, -25, 112, 20, -48, 81, -100, 119, 104, -30, -97, 56, -21, -30, -34, -62, 96, 119, -57, 125, -25, -11, 28, 51, -24, -113, 41, 60, -89, 55, 71, -27, -82, -119, 66, 9, -59, 98, -79, 46, -102, -99, 107, 108, 0, 4, 34, -119, 112, -52, 91, 25, -95, -118, -47, 75, -42, 50, 117, 77, 115, -127, -111, -31, -42, -50, -21, 84, 89, -42, -55, 59, 21, 99, -103, -60, 42, -111, 85, 25, -48, 36, -29, 90, -85, -68, -17, -16, -52, 62, 14, -25, -98, 73, 102, -40, 48, -18, -12, -71, -65, 17, -96, 57, 6, -69, 24, -11, 19, -107, 125, 118, -44, 126, 2, 126, -94, 45, -117, 33, -34, -35, -108, 85, -124, -91, -94, -29, 56, 76, -111, 87, -47, 64, 32, 124, -5, -56, 104, 15, -1, 116, 52, -93, -53, 69, -89, -32, 53};
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
    msg.setTimeStamp(0.326614034788);
    msg.setSource(64819U);
    msg.setSourceEntity(222U);
    msg.setDestination(13395U);
    msg.setDestinationEntity(124U);
    msg.type = 79U;
    msg.op = 89U;
    msg.request_id = 9072U;
    msg.plan_id.assign("GQENQPDJPFXASPFPBXHJZBMGTJOCRHBVCAIDMKEJFVLKDFKOGGYYADQJPJESFFFTSUKGXTIZUDUJVGEZPVYCWQORVLHSNGOYBGIKJWQMMFNXRDQNUOLXESQWWOAKZSNEPNMFHWBHNBUSZQEMLPZIOCMCBWHTHLUBBULXEIUYGWVWSCNIJJAERRTRMMTYIMLBKCHOPVDKHXZKVWERRALAIHQXDYFSTYVIAIC");
    msg.flags = 27003U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26629U;
    tmp_msg_0.name.assign("RJDEJLAGHRDWPPHDJLNZSDLYAQZKXHTVLKGAFMWRLMBFWRIDJTZFMEQOWMNEVHVTXNCZSRTZFAEUEWYQQJLZAQAEBKLDSUAIRJCBVGOIIPYTHCEAUYURMN");
    tmp_msg_0.custom.assign("OLXHLIPZTYKTJXIDYKEUARNBHADVBOHCEVOGSSNGEOZCQNXDYVZELXLQEYIPCHAPRBNQUWLKA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UJMXCCGOTVOUPBMKDKWKFLABYMFASSOQBYRYCAROIQMJGCSFJRRKEXOTTJZHVCVEJFYWCJYRNHOBIHKOWRJMWINLNQKBFNSUGAGCYXQSNJUZOMLADZDDLDKVLHXTYPNARQWMQDEOMPEYAGEGIGWWTJZEHXQQVFGHTADLZDKPAVUJZPU");

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
    msg.setTimeStamp(0.164055262407);
    msg.setSource(19476U);
    msg.setSourceEntity(160U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(65U);
    msg.type = 26U;
    msg.op = 124U;
    msg.request_id = 14054U;
    msg.plan_id.assign("FFBKAVGLXCJMJMPJJIINSLTEJVGICXMAMNLHCYQDQAROMSYZCWTWTS");
    msg.flags = 21194U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 10006U;
    tmp_msg_0.sys_dst.assign("LNZKTFDNWZRVNBYKSLQILLKIKREONENAMENQQBVRYJRFIDXZPSTCOEKAURHM");
    tmp_msg_0.flags = 107U;
    const char tmp_tmp_msg_0_0[] = {77, 101, -76, -3, -109, -76, -8, 77, 56, 32, 66, 13, -21, 51, -11, -68, -10, 57, -70, 35, 93, 15, 59, -127, 46, 76, 17, 47, 43, -39, -84, -28, -60, 101, -49, 19, 93, 102, 4, 20, -59, -104, 112, 25, 74, 46, 21, -81, 124, 114, 40, 35, 85, 108, 24, -64, 26, 118, 94, 53, 70, 116, -115, 3, -14, -96, 27, -32, 24, 82, 3, 15, -89, -89, -120, 41, 119, 93, 84, 26, -98, -75, 64, 20, -75, 104, -39, 52, 72, 8, -106, -28, 79, -23, 22, -52, -68, -75, -39, -66, 110, -70, 111, 18, 95};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TKHAFAFKWWXTZGLWYHMHVRJELZBVWHMZHUFVRIDRMRNZZVYBVXMDZNOYOPSQTLZKNQRTDYJUCDAEIWFIJDUFIBEELFFSSHGLAFHZDPVPNWQTTBCFCPEAXVKOCMKUWHCJARYYDQBJPPQSHYXNLKWDDUQJNZBQQCQVIXUBETRLAROULKOAWOROVJTGOTCIGQXFHYPGLBYSXMWAOMIXESGJPKNCTNKNEEGVGIXRJ");

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
    msg.setTimeStamp(0.319851298292);
    msg.setSource(56493U);
    msg.setSourceEntity(64U);
    msg.setDestination(38762U);
    msg.setDestinationEntity(199U);
    msg.type = 178U;
    msg.op = 109U;
    msg.request_id = 8999U;
    msg.plan_id.assign("OWBJYPQJMSFDNAPWBDRQROFNZUKEVCXYATKESVSMBLWKCIIEFKJMSSGRCXVKMFLFUHVZVPQJWOMMJYXQPOGLUEPHTGDNBIOTUWXQDZZTPEPGILSNLAAKLXTZSYFDBGXZRRBHATYCKCW");
    msg.flags = 37075U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 8992U;
    tmp_msg_0.lat = 0.788805850905;
    tmp_msg_0.lon = 0.435659513337;
    tmp_msg_0.z = 0.627406739931;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.76306188278;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.custom.assign("WTUBGOUERBNYCYQZOTESWWHZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRWONRQRGFVEMAMNRFULDPGOXAMICTCVZXPAAPPRLJQPHYTMVBXZYCTVLSRSISDMESKJGITSDXVUXDPJJLBXPJSZUMQFTKIKGWFWQJGVKHLYRONWCBNGSSNYZUBTKYVYOAQHFZ");

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
    msg.setTimeStamp(0.713819832081);
    msg.setSource(455U);
    msg.setSourceEntity(213U);
    msg.setDestination(30262U);
    msg.setDestinationEntity(227U);
    msg.state = 71U;
    msg.plan_id.assign("QHTKNSZRPKEROLPJJWOJTFWULURFNUTUKDQBIAVWUDYKZICZIOSVHTPXHFTWSIXENACFBAJGPNRIMSDAEWDSDWWYMELFSLYVEQBVXPKLOPMQEGEAGTGKCIADHCBFMXPXJGDEFNMETHGJCLJCRBHBVH");
    msg.plan_eta = -2065669533;
    msg.plan_progress = 0.168137567254;
    msg.man_id.assign("LBRNWREJYTTIRPYOAXQLHBGLEDIJVXGKGYMUMFWRPAIUAZPGSWHNZSGIFNDIBHVIKRAFY");
    msg.man_type = 42695U;
    msg.man_eta = -926441849;
    msg.last_outcome = 189U;

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
    msg.setTimeStamp(0.753252441182);
    msg.setSource(12385U);
    msg.setSourceEntity(38U);
    msg.setDestination(43226U);
    msg.setDestinationEntity(153U);
    msg.state = 204U;
    msg.plan_id.assign("XIFLCGOLBYQUIWXVJEMYRJTLKUEYFVZAOTJDWRWFUSPQKAHPQJSKSFXVJDGVRDXWATLMKDHLYEMTIJXGNSCMXEZSPNHZQXNBNXQIEFOZYNMPDSTLWTEFOJBUEOGKRNNUWBAYVUNSSEZLAVLJVCRMBCCIGPZOBQVFHKHTSZQWTYDHBGWEOQRGWDR");
    msg.plan_eta = -1223578584;
    msg.plan_progress = 0.534802382714;
    msg.man_id.assign("ATCGLGBGVEXUSNCPPDCSGDBNXICQYCUWEIDRRFFSMYBJTOSKXOXGIGMOXQQFDWMEVBPEIUTTVMPJJKJXYZXUGCDY");
    msg.man_type = 21366U;
    msg.man_eta = -1923566287;
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
    msg.setTimeStamp(0.537641862974);
    msg.setSource(31355U);
    msg.setSourceEntity(120U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(112U);
    msg.state = 179U;
    msg.plan_id.assign("BCAHXRFKFAKMGIRKFNJYPNNUGJEUTIOUTCHPXZQTAMTSCZSAOKPEJLIIKYVFBWMGYEVHUQKDDONBLMXOTUXSRWQKGBGQNYHODLXS");
    msg.plan_eta = 559907726;
    msg.plan_progress = 0.974867733573;
    msg.man_id.assign("TBYPRQFGKVOVIMLLIAPURLKYCXLNRXMCWNAUDWACUGHOFOJTCRIKCHMVQNJPTBDCIO");
    msg.man_type = 46225U;
    msg.man_eta = -1568287134;
    msg.last_outcome = 183U;

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
    msg.setTimeStamp(0.718394459383);
    msg.setSource(26641U);
    msg.setSourceEntity(219U);
    msg.setDestination(52923U);
    msg.setDestinationEntity(35U);
    msg.name.assign("PWSBCQXCACIVAEQZVLOAMSJQHLECZKWQGZWFKCQCAKXZDAZFMGAREKAGESBMPKJFDQJLUGNUGQCIOYDZSBREIHLPFYUMPUWVNODCPNPHWTHIFVKVTXHLRMSHWRJJZWSFOXVXMJIEDVYDYYLUVNPVRNBRTHDFXVNEYTYDSCJJOAGTLAHWINPIBTTXZIZWE");
    msg.value.assign("QKTCDSCSSFDFLHTXNWBGSHQZCTOVNWJRMAEVUNGYONQTCAMPTGHBKHUUMVUZFYLLBWSMHOATPLNEEGHNP");
    msg.type = 123U;
    msg.access = 52U;

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
    msg.setTimeStamp(0.889347721763);
    msg.setSource(13652U);
    msg.setSourceEntity(154U);
    msg.setDestination(11868U);
    msg.setDestinationEntity(237U);
    msg.name.assign("RNYIAIDEVRPOXADZNFLKBZNLRLYVIEBHGBARUCQFVICTJHTWXGYWSGJATZVYGOAMFUVW");
    msg.value.assign("ICCDGKAXUGMSURFPFLAVQLYNVSRBBFXGNWKDRKVMTDDTNJBXSDPSZNLEYKNBHSWZNVJMGNPYHISLDOAYQGFDEVRYXOVSTAZMOXBBPIAETZJRIQPRBCEUCQDQBWHCKCZLWMITUOHAGUPCEZUGHHDLTJFOJIJQNTWORAAFMPUKLYQZCSXIEHNBKEMUXNLHYQEAYWIHSWSFMXGRGCEXJDTOHICFZTKVJIVXOLYEKFMZOT");
    msg.type = 31U;
    msg.access = 122U;

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
    msg.setTimeStamp(0.373152722212);
    msg.setSource(31874U);
    msg.setSourceEntity(133U);
    msg.setDestination(47896U);
    msg.setDestinationEntity(100U);
    msg.name.assign("RDCBDZFWTLAQUWIVDSGKIAZNEDYRNXTJGOBZETYUWCMDFOARDRJMGNB");
    msg.value.assign("SLIBZOFVBY");
    msg.type = 202U;
    msg.access = 37U;

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
    msg.setTimeStamp(0.811548878813);
    msg.setSource(26163U);
    msg.setSourceEntity(249U);
    msg.setDestination(20926U);
    msg.setDestinationEntity(187U);
    msg.cmd = 74U;
    msg.op = 210U;
    msg.plan_id.assign("BPLJVTGYPYZSJRWPEBSYZILBIXKFEMLXFGAKGWJBHDQORFJAMIOAFWVRKSPTQNGKIPFCOSLVADBAHMCNOCTXDMLJNLTRBGLKMJXVGPLTVEQUOUNQBRJUVUQODBMNFAHQWXWNTOHDYDRLHXQPEFEYDCSUEZIXBUOXHZHXMFYPNKRZNKIFCSMVTWZRQDOYDGQTQRUCLSRCWWSJWPCWAEVKFGUJKCYATHEYVJVZIIYANGEH");
    msg.params.assign("ZHPXOWNFPZDCCDMMOUIHOTMHKIFKZNYGENXLDBGECXFMWQIBAVLWLGIAHMUAUGQORCBEHCQRURVBEAZAMWOCJTDYTXFSXJFPYSHPDJQANMWHVHRPFKWFZKGBDKNQJQVJPBRAZIKJXLZXNEWRTESNDBJDOIDUCZZXFMUTBEDGISLJFUQTWMPYOTBHEVGXSXORLKVKQPUVWVLCZYILIYMRYAUHRWYKLSSTSSQVJNAGGACYJNBSEEPNRGKUFVOP");

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
    msg.setTimeStamp(0.336213406499);
    msg.setSource(14875U);
    msg.setSourceEntity(216U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(26U);
    msg.cmd = 105U;
    msg.op = 87U;
    msg.plan_id.assign("BBEBUNWSLHPVPWAQDTJFCJPMMYEAERUTAVKCTMQYPAOSALHURIXIFIIRKHKWRHDVQOUZYZYDUEUTUFLXZYVNSGOJXOJUJHNQSKZYFMIVQQEMZRFJLKWZHECZQBCANGIGDBHCGGUHNCXMFXRVFPAFTBGWLJNEPPHTKN");
    msg.params.assign("EGLQLQWHHSFCCJYIEGJONCFDEWZXSSUQRFRQCYTMWAAMBDAGKMHDKVPAYWLRJSKHCZCKWEMJWPXUEJXMAYBEBATTXIRZMSEPGZTVNYUVVLNQLZVUGIHBEBHKQTROVRJHYDZUILFWGQNOVBXMRQFXUYLNGMBOUBINQVMKYXPFDKHPDOIBPRGWYTIYJHCNICSZDZJEIPIGSSOSPTFDPTFFDVNLGLNMJZUTKHBJCAAPXWASOKVOE");

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
    msg.setTimeStamp(0.232743382478);
    msg.setSource(60801U);
    msg.setSourceEntity(29U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(252U);
    msg.cmd = 211U;
    msg.op = 14U;
    msg.plan_id.assign("QVVOIXPLNQHHCSLZVYIYKQHBYBILYWZTAGKUHEHDJPYVANMBLKWRIMNQQDDDZSXOCFVYOQLFXIYJEVTNNGZGCMCKIRBOECNUCHGEWDMOLBMILKFRFOLSQFASSRLGBGZAFOKJUUKDCKXEAZBQIEZUTDEUHDNCUITEMTFYGRZDATQDONGCPXMZJWPWOWSZAWXHEPMVFUSAFRTJJXJXRASTYWPVMTJTPNKWPHFVPCUKBGJJIVAEOQMNURXXHSPWY");
    msg.params.assign("SXSKWCTBFLAKTJSZJSKONZBCZUVHVOGEIFTSLNIBWT");

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
    msg.setTimeStamp(0.364468845224);
    msg.setSource(15498U);
    msg.setSourceEntity(185U);
    msg.setDestination(62552U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("EBAZMRTKJUCHE");
    msg.op = 161U;
    msg.lat = 0.64044872185;
    msg.lon = 0.84412413873;
    msg.height = 0.601921401133;
    msg.x = 0.638899118671;
    msg.y = 0.911684275544;
    msg.z = 0.414951139471;
    msg.phi = 0.792788357294;
    msg.theta = 0.767792273017;
    msg.psi = 0.591706145405;
    msg.vx = 0.188458141213;
    msg.vy = 0.908111051166;
    msg.vz = 0.552712180492;
    msg.p = 0.615561772672;
    msg.q = 0.437441979161;
    msg.r = 0.602636366732;
    msg.svx = 0.0480266693532;
    msg.svy = 0.21929869405;
    msg.svz = 0.138351032043;

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
    msg.setTimeStamp(0.659009626418);
    msg.setSource(9381U);
    msg.setSourceEntity(170U);
    msg.setDestination(14204U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("UCMAAVQEBEHMIXLNPOVOYSWQXOXZKNMZKTHPUTKAFYUCBTQOFJYODXINDJZSRXFHPHAKVNUADVFTKWUMISZYQLTNHYWBJDSPXTWDFCIWVZQOKXPNWIUMCEQUYTRGQGQBLBRPOAJLERFNDMNBFIQPGSBISYBCSPSCZWKZAYAGDVWUBJGIGMYHDOMCHTVDIRYSKXRCGZIJFHCGPLSHWMJFOKGAROLAMNHDTWQLVLEUGVJBPTEJNZXKRLERVR");
    msg.op = 139U;
    msg.lat = 0.650270098637;
    msg.lon = 0.201106333947;
    msg.height = 0.517201720795;
    msg.x = 0.655350147508;
    msg.y = 0.87749865849;
    msg.z = 0.188336293361;
    msg.phi = 0.0925650377147;
    msg.theta = 0.105019655832;
    msg.psi = 0.33997056569;
    msg.vx = 0.00926739444417;
    msg.vy = 0.282415177171;
    msg.vz = 0.149766979095;
    msg.p = 0.272520392664;
    msg.q = 0.991391656505;
    msg.r = 0.687823488196;
    msg.svx = 0.505397358169;
    msg.svy = 0.37874746754;
    msg.svz = 0.980892428972;

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
    msg.setTimeStamp(0.979349023303);
    msg.setSource(24315U);
    msg.setSourceEntity(184U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("FOPRKXECQXXKNNLIIUNDNHTQKXRYZZWEHHCQCPUZFYFKULCVSTPNMTAATBZOJRMLKGXBYKBXKDPT");
    msg.op = 188U;
    msg.lat = 0.677610895287;
    msg.lon = 0.74990827983;
    msg.height = 0.731178050403;
    msg.x = 0.628937263121;
    msg.y = 0.26942413207;
    msg.z = 0.15908021568;
    msg.phi = 0.634180815292;
    msg.theta = 0.863054573128;
    msg.psi = 0.456782064087;
    msg.vx = 0.10331722958;
    msg.vy = 0.197645456016;
    msg.vz = 0.667160632895;
    msg.p = 0.190278496202;
    msg.q = 0.268646613287;
    msg.r = 0.84853984039;
    msg.svx = 0.869153865211;
    msg.svy = 0.944433826695;
    msg.svz = 0.383813497818;

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
    msg.setTimeStamp(0.0857936136355);
    msg.setSource(46946U);
    msg.setSourceEntity(192U);
    msg.setDestination(29267U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("XEKLDYHMPXCWICJYEGVGSYNNWIYQRJUFBOCTSMSZODIYZHINGANAWLBUIABREUWRQBUPDLKEAPRTAZFEXAYYIFJQCDHTQEHBGKVCPNBZZSKPBQJFFHROGBIVOK");
    msg.type = 47U;
    msg.properties = 248U;
    msg.durations.assign("KYIMLERGSDETWROKOQMKLEQRXVSILDKYJYQNMWUFVEWVZUWQLKEMZFSALHJRBSVGJQTDDPIPQHLATDNCSXNXGNWKJYGDWXHMVZHTXPBIPCRUBGFFZBQDXFOFDPHNEXMBCAYKREC");
    msg.distances.assign("EEVHJGHBCBMBFUGPMHLOZAEBOQDINSSDKGEWRQFAYXYIBJPPSBKMXCDK");
    msg.actions.assign("TBPAMONMOLNCRDNZVJBDFXKIBUOLEJVCUUWKVGHLIFOHMMMOCBTUGIVYKQMXKKTHEWQTXSCLWCQPZBSPNFTCZONGEYAGYYWXTLLFPPRXJPNLJSVNLZMFVCPZQNVFRGPZAVYUKMJPVTQZILCHSDQZISWOIPZEEXHDMWGIDWQANY");
    msg.fuel.assign("KMINMDMQGNVHZFUJTMYFPXCCYRTFFNIVKZDTCPPLTOZLOWOASWQQWYWXUVCRMIQNAWSHDBNPCDBAPBJBRGCVXEOBWYKZGDGHMKZXOPOUCAJJJTLQMKLYKONLYPSHGSZBDMJNXJEVATZIPXBSNXPSSZKJSTHQUHEYDRWEROMSVGPERKLYEIJMHXFLGAYEHLTRFLQE");

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
    msg.setTimeStamp(0.101375011338);
    msg.setSource(54515U);
    msg.setSourceEntity(213U);
    msg.setDestination(49214U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("HZYJUDJOQBDVPSSNANBUCTHKGQIGEWPBZWMCWSCKLDFXICERUEIVIXJXOMYURXWFRVSPUEAPNOMJYSTQERRACDFQOOQDKPIJHLASRBTHVINYEFPMLYWOWVGYJZBMIPDGZPYBKWNULHOGZQSUQYUEL");
    msg.type = 225U;
    msg.properties = 169U;
    msg.durations.assign("ISJHASQGFCBGDWSZZMVFXJVDNZAZKQNCNYXEIFFKLCVUHKSXQXXNKJVMSGCLYWLIVNIEGBPTHYTCZRHPVRSFPDTBLHRLOUHETRHGYFXERKGBYZMYMQZOEFNNBSWMWLSGOUKDPYOFQDIDOQRIUGZTPKJURABCDWATWAATEHBVOPZDULPBUXCTQOETMWWUMZJNSYKPJIGRJVDAMISPGJMEAFXECNQNAWRRHYC");
    msg.distances.assign("LFOFGMPABXZTXLOGTBZJCINLLKHCYHTKYEQIBMWPNGMSTJZETPDQALBUYIGFDQJXYCF");
    msg.actions.assign("LNLSZPIBNWWTGRNSZTXZPZGQFJUPYDRBHAQLQSBDVCRIVIYRZKFTUATIKECCYQGXWHBWMUIDOPMGKTKLDPEOCHIZSJAK");
    msg.fuel.assign("YZUIZCPCUKZLLWHMVNBBHRSJRFMATVMSPFFDXMYOGXL");

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
    msg.setTimeStamp(0.590688887503);
    msg.setSource(47281U);
    msg.setSourceEntity(24U);
    msg.setDestination(59926U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("WLGWEHZWAPRSAGLLJGEMJXIQUIZSRACDKNGZPUMGIDFDXROJICAXKKROYWFQXODHKLPCJAIJNTVUAMCCTVPYVVKQEZHXNLBUYCOZLEFBGHYTSRPRMQUQBQDHQTYHDJKIEIGVYFVZSXBFFCVLTTSNANWPIMSXYFVZWEQFKOCUEJPEKZODDDLXDHSRNYAMMOSKNPUTTCHP");
    msg.type = 71U;
    msg.properties = 173U;
    msg.durations.assign("WARUABHLZRUPTCNYNEZCXZJOIWEMEQJTKILFNZTGGTYQNXBKFGVUXSWBBMXYHHWTZUPELEUIMSGUNWTEDXFBAWPRZJCKSVJGSYJLYDBFXMPYQVHRBXMMQJDWQZFPUWCSQISMELVLMVECDRCBMKRUOBYVGNUSKBSNADHTDFKUWTPZGOAQPJAWFIPVCFYILFPNOCHRMDFILJAPJEVYYOTDHAIKZVZOLRSOGXEOIQHRCXVQHDO");
    msg.distances.assign("JKUDCTYEGBOPOCURPHXNPRRPPNGQXWAPBCPTKUDPXUMXVWWGEFFTRBNZFHNCWABFLQR");
    msg.actions.assign("GRMEOGVAYRDBFPOLUXZFFFCNZCBMCZWDQPVVUTYIYOXJZWUMVLKHXUMPSDUSNKPNHVDCFSJFGSHUFPPTQHQRHMBAXMLIGVJRXRDEPJYQGAIPKEEGEAAUXTQTBNLWAREKNHTQIHLBJMBLXSVOGXJUOFKAYBTWZNOWQWLXKOKEAWSSGJTLRNHHJQIKBOZSFTDUSYEBCMYDNCWZPLKPQCJIQAUDVNF");
    msg.fuel.assign("MOCHHSYNMBHCNOBOKBIQEYWMSKRPJNTGJDYKFBSJGIGPULIPUCMOJIWEGLGBYTYDLZWPKFDCLGBPWUYZVVIIX");

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
    msg.setTimeStamp(0.870058591983);
    msg.setSource(43782U);
    msg.setSourceEntity(249U);
    msg.setDestination(29088U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.180144868759;
    msg.lon = 0.64622578458;
    msg.depth = 0.906931559409;
    msg.roll = 0.478973964522;
    msg.pitch = 0.551384960453;
    msg.yaw = 0.739440827587;
    msg.rcp_time = 0.940458788286;
    msg.sid.assign("HUBQTPVQAOIASHPXHPWBHYQRXVIRCJZVNNFSOBTWWKLKUDFXXRMZSKOCNVRLIHQFYJOODUOPGUMPZEIZEKRJNNGM");
    msg.s_type = 204U;

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
    msg.setTimeStamp(0.502021458842);
    msg.setSource(43635U);
    msg.setSourceEntity(76U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.966685235783;
    msg.lon = 0.961013711298;
    msg.depth = 0.1600901328;
    msg.roll = 0.790489919492;
    msg.pitch = 0.985330581997;
    msg.yaw = 0.516679203076;
    msg.rcp_time = 0.874393572092;
    msg.sid.assign("QFALWRGTEVSYDNIXZEYIOFNEELRPZKXMWRMWJHRLCTHOBYMXLGBOBDMPDABOSPTRWTYHQFUKSDRIKTNKALBXGIAUJIGICUPXOSZWCDVMLMMWDJAEYGNKPYGVEKXOOMNYACDCGWKQTSUTQJSBIYNLQCOHOVVRMNQMNBXFSAHPWQHGIYEIKCESPJHQ");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.703513449586);
    msg.setSource(22154U);
    msg.setSourceEntity(192U);
    msg.setDestination(50985U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.704642088519;
    msg.lon = 0.373141829868;
    msg.depth = 0.957876554784;
    msg.roll = 0.652832223206;
    msg.pitch = 0.148366339562;
    msg.yaw = 0.736423640397;
    msg.rcp_time = 0.035901700117;
    msg.sid.assign("WUHVCVIDQXCPZLPTRSYPBUJHHQXKIUIMBUOTZUFMMNYADZGDSWAG");
    msg.s_type = 214U;

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
    msg.setTimeStamp(0.221434892684);
    msg.setSource(61429U);
    msg.setSourceEntity(232U);
    msg.setDestination(55089U);
    msg.setDestinationEntity(109U);
    msg.id.assign("NDRWNSUPBOGMFJJROZBEUILAOQDTJAMKPFLHRJYUHKZSEXHVPCMYRWFEVBYASDPIFGIQEWVAIDNYPXAIZGGJQGBLOWLCAVMRTCTTLDKJHYHRJVIPCF");
    msg.sensor_class.assign("ABWQLRDMIQRZRKQRJILIGEQOFXIYVBGFNPXVQMSATTVECCROYNO");
    msg.lat = 0.943307487006;
    msg.lon = 0.53951278248;
    msg.alt = 0.442031138696;
    msg.heading = 0.0763612926772;
    msg.data.assign("DYQCVJDSOOSNWQSBODGMAXUQRRKKLWAMHNBPNJFAMAJKHHTGOALDCVRUZTOLXFUWAOHMAKBMBVSUVYWLYGEPWITMNZWGRDHWKJYJCISTL");

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
    msg.setTimeStamp(0.388300487138);
    msg.setSource(20609U);
    msg.setSourceEntity(59U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(42U);
    msg.id.assign("EIGNSKWSYOQKFRUWNDBRDZLFDWMJSJNCSWFQJBOMOFJAASYIHEJPMLEHICQXEEKYBVCHTJGRVYQRCNMPWLXSBJODFQFUPGEGLAUVUVKAXEXWKACBRFNLQRTJTOUMMZDATVQYPWPAKOIIXHZDZHYLJVEWIHEZAYIJDDTCSWOPTDILXOUMIWGKZKXYGOFFARERNBPPNCNCOTR");
    msg.sensor_class.assign("FWWCZNOBEWFYZXZQLTFKESTIIHCVBBVXGNARMDSODDTWWLWCZUTCQCYKUJUEHGZSIXEVTORYXELLPMBAKTBSIPVPBAHJRXNDJBIXBDMKAPNUKTWLJAGCZDGEYAGVWPUDUVQRKCAFHMAIQMNYNXIYV");
    msg.lat = 0.803028500233;
    msg.lon = 0.146104128394;
    msg.alt = 0.425143867052;
    msg.heading = 0.757934921842;
    msg.data.assign("UKKFZAELOXXIWSEJCMTSAJUEC");

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
    msg.setTimeStamp(0.911030912565);
    msg.setSource(45521U);
    msg.setSourceEntity(112U);
    msg.setDestination(49160U);
    msg.setDestinationEntity(168U);
    msg.id.assign("EDFYFMPOZFFHVEDLNHMYYPQVJAZIFGMAZBUCPHQORSRTTVLWXMITLGSFNKBLDSLVXRWWOOQJRKREYIPIBDNWCUYKAANTCIMWCWMURILHOVFCJQSKXNAJBSEALYBCGXVIHUZTQQWCCDTSU");
    msg.sensor_class.assign("LFZSYMRAGHWXNGVXZVOMULGVAUQSNSLIYATMDBJJOFLKSANXFHESROUCJXZUSZHIPJRNCQCSMNYHWXDFWGJBLUUPBZIFTTDOLRVZEFMDXMUMXOABLIGDSHVTWIRCVKKQYLBVQKJIETGOFKSCJRJDAYPENRJOIDCL");
    msg.lat = 0.92233031821;
    msg.lon = 0.681910227385;
    msg.alt = 0.936002272717;
    msg.heading = 0.211788456249;
    msg.data.assign("JPCMWVVOAKCXRBRVVHPYRUWYFWGZNGDMRBMNBHFFKJTGBPCNRPLOJBLBWITMIOEDMKXRQNPLGEGQDNRXYUGFZTTIXOSAESLUAJQREVIOYZGUOJCCSWZVPMOEJILZNKMBDTLJQVNAQYV");

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
    msg.setTimeStamp(0.0881098292326);
    msg.setSource(58395U);
    msg.setSourceEntity(223U);
    msg.setDestination(44509U);
    msg.setDestinationEntity(20U);
    msg.id.assign("LJBFYNRIPZOMNGOEFTWDBEDEOYSZSEJQDVNMBJMFKLOPLYOSHFVKTRYGPYQNWEQLLAQHPYIDWTJVAMOULDHHJGIUZFKVJZNFICBAXQOTQCKEATWAMMHFKPCCLXRWSCWZZENXMUNDBSURAJSOHNQP");

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
    msg.setTimeStamp(0.372958625552);
    msg.setSource(45364U);
    msg.setSourceEntity(231U);
    msg.setDestination(42072U);
    msg.setDestinationEntity(67U);
    msg.id.assign("ZWVFHALMLTQVRFGDDWOOLRSZLDCGFEEMZPIEMKUGWXMBCABUCUMVOEYLVYWDNWTJMSPXJBNJTGRVZFQUMPSSXZEVERTZNUFFNLEPULHSWHHV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NSXXYTPGMSCYRWANAIRHSEFPZUXAKFQMDRYQZNECSPXAVVHWVCVCAGQILYQPHWUEXUABIANVDNKOZFTRHTBMOLMFOWULUBMODFBXVZIBHOLOTEERWQWKXPI");
    tmp_msg_0.feature_type = 208U;
    tmp_msg_0.rgb_red = 28U;
    tmp_msg_0.rgb_green = 53U;
    tmp_msg_0.rgb_blue = 224U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.575418034227;
    tmp_tmp_msg_0_0.lon = 0.371905964347;
    tmp_tmp_msg_0_0.alt = 0.0517884062124;
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
    msg.setTimeStamp(0.869764540289);
    msg.setSource(35133U);
    msg.setSourceEntity(43U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(218U);
    msg.id.assign("NMQEJQVIKMVNYAHXOYCLBVKCYDLVTQNRGSEHCLJYWHSZIDKBGOGXLQNLAJQYAMFLNNVPWZAGTKUWUAHGBIIQOSRFPDEFPNPEAFTUSAKXJKDVMXWJFHQCSCFTXORQBCSMHGEBKITMPJXRGWYVTDMRFYOUQTQAYSEXIZDVWEZGZZOWCLRTUHWCOHYANHVWYHBUBFDMKPNEBMOZISIWCU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WWNULKSWEZFJHDCMARREGLWCCCLQVSSXQNAJOOJDYZEYHPRXTGLJRDIRVKLKTCIVZBVJCNFFHHPGGNRRPQHSELZWMKBAFDFMMXWMTIZMBIVFDZCQBZLXOXTPBIGBLYYTLQOUEKFPZMAUOPRPEMOJYJOQTHXAIEUH");
    tmp_msg_0.feature_type = 221U;
    tmp_msg_0.rgb_red = 79U;
    tmp_msg_0.rgb_green = 216U;
    tmp_msg_0.rgb_blue = 9U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.320609742238;
    tmp_tmp_msg_0_0.lon = 0.776442038974;
    tmp_tmp_msg_0_0.alt = 0.988608350768;
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
    msg.setTimeStamp(0.242275027417);
    msg.setSource(26105U);
    msg.setSourceEntity(210U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(20U);
    msg.id.assign("AIWKRYMJXEMVQNYATYEGKEDTMHBHZMLVPHWRQNTSOVPWSKITEJHCCAMVJKURBXATGHCGNWLGAUFHDNYIPGUGDLUXCVHCZRMOVIPVOKAWTBXBEZCALEJKSFPFUXKZEOIQOTESXZWHAQIIXTQWIQBRTXOPAZ");
    msg.feature_type = 0U;
    msg.rgb_red = 55U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 21U;

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
    msg.setTimeStamp(0.999409016013);
    msg.setSource(27548U);
    msg.setSourceEntity(237U);
    msg.setDestination(52608U);
    msg.setDestinationEntity(107U);
    msg.id.assign("JEMWCEORSATTJPLKD");
    msg.feature_type = 61U;
    msg.rgb_red = 59U;
    msg.rgb_green = 20U;
    msg.rgb_blue = 89U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.134229816393;
    tmp_msg_0.lon = 0.464597772284;
    tmp_msg_0.alt = 0.302987760476;
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
    msg.setTimeStamp(0.495126419368);
    msg.setSource(55160U);
    msg.setSourceEntity(61U);
    msg.setDestination(17287U);
    msg.setDestinationEntity(88U);
    msg.id.assign("XNZEVVFOKYUV");
    msg.feature_type = 230U;
    msg.rgb_red = 38U;
    msg.rgb_green = 111U;
    msg.rgb_blue = 24U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.535370820866;
    tmp_msg_0.lon = 0.00798926293261;
    tmp_msg_0.alt = 0.255086863837;
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
    msg.setTimeStamp(0.734846469618);
    msg.setSource(23667U);
    msg.setSourceEntity(6U);
    msg.setDestination(27509U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.93610956252;
    msg.lon = 0.00288523470502;
    msg.alt = 0.91592317166;

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
    msg.setTimeStamp(0.482870211494);
    msg.setSource(32421U);
    msg.setSourceEntity(118U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.101133284749;
    msg.lon = 0.411873995096;
    msg.alt = 0.307473278638;

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
    msg.setTimeStamp(0.482006371933);
    msg.setSource(30728U);
    msg.setSourceEntity(232U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.674935480313;
    msg.lon = 0.828802520036;
    msg.alt = 0.366168786766;

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
    msg.setTimeStamp(0.0832028954948);
    msg.setSource(28754U);
    msg.setSourceEntity(47U);
    msg.setDestination(1825U);
    msg.setDestinationEntity(175U);
    msg.type = 124U;
    msg.id.assign("DOEVVUPIATUCMDUPTBFBGRQUWHOJQBFYLIZQSKJXTICTASZHOVJSWARFYGDNAFTQWCQBSRXSMFHHPERNKMTCJTHJLHUDCLWFEZSEYJGNMIKYVWKIEIGEITAGPQPLOVKYLCJQXPXTSPNQIZIHYDJUZWXFUKSOPSFVFRGKIND");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 162U;
    tmp_msg_0.error.assign("IIWDJQSMVPZIANPBUUAGWBSBEMURUCEPEVXHARQYTDYLPMLCFAQMMUGPEJNETFKTNLNNNVBYRBCIHIIAVAXZXGPGRJBJPVGIICSPLAYYFLZQYTKGSRSFTZXWNYHWPXVFVDJKFLEJDQKKCXZVTHLDMZBDAUUZWTBWREVFOREDZHQNKHCJGOGSRYLEDRCLKUVFCQCOOWRYOBSOXPJXHDUGAHOXTNMHLZ");
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
    msg.setTimeStamp(0.79417794868);
    msg.setSource(16048U);
    msg.setSourceEntity(11U);
    msg.setDestination(59688U);
    msg.setDestinationEntity(181U);
    msg.type = 31U;
    msg.id.assign("WYELOBPTGEELXIU");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 94U;
    tmp_msg_0.htime = 0.937496844748;
    tmp_msg_0.context.assign("EADRUFVKCIZKKHVGDRALOABZFEORBWGBEFYIHQQHGNLUZVMKHGRBJZJUCWTFJBLYHIEB");
    tmp_msg_0.text.assign("MLGNWDNDUMASZNKZOKBUSRSPTYIAFUOLXDGHRKVVFKPLLALSNDKPWDJGYYIFFKJMAGNETTWTGVCSBUCTPRNGNHZBVHNBWAFZHPIRKHWYQROMEZTGYBCWYRKQQECQUJZFWTEHZOFQJMCWAPLMQODNPUXJJYSHSOPRXJMTGBCFLANRLOSBEIRIIJHQOUKWYMXASVIL");
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
    msg.setTimeStamp(0.286049265045);
    msg.setSource(30222U);
    msg.setSourceEntity(77U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(31U);
    msg.type = 157U;
    msg.id.assign("NQCWGFKARDHBKFZEMBUFEGMKXNBMBAXIKXROJLPISVBATFKHJMEDDCAYONZTXIQZWEPCIKZIUSQFSYAFTMXDWUBBHOBHMLNYUOLXGPCSDHJOWTYWIKQPXYURLGQLDVPUKGCVORKYNABVHCTWMVRYNZOYZOCNHTJKXRIJOPJTSXCJZLQRGMNVWSOFGVUYGYSTPZJSXW");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 63U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GRUZDZJIQKWRJASTOKAGSQNFMWISXCBJEDKHOYOQPPGCMNYUDMQIYVFLBQFQZGXZTKXRITVCNLMIMSAUOFBBOXKFJXVEYSELSPKMRWTCCSVVOZRMOJYWLDRTPPGEPNEHUTFTISBIEWSNYADHYMYKW");
    tmp_tmp_msg_0_0.lat = 0.163480329547;
    tmp_tmp_msg_0_0.lon = 0.328139247169;
    tmp_tmp_msg_0_0.z = 0.047486310679;
    tmp_tmp_msg_0_0.z_units = 171U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.486485168362);
    msg.setSource(29227U);
    msg.setSourceEntity(110U);
    msg.setDestination(16099U);
    msg.setDestinationEntity(39U);
    msg.localname.assign("PGLDRTXEVJGLFTBFDSTSUCBVPSLATOYSVBZRXBHNXCJCUWREMCNNWDWKQEFUWXJYKCZHNFGKPQSKZXKOSIXAPZQAQKBLLAMUTOPGMTEIMYJLROSKECT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WZPNYMKQHWAGTWLVXCAQEAYBQWZVEIECQKWNDXKGUNLJOXEWDDCINUHVISTRJFLNVRMGRKASXDRBWDRMKWQRFXDKPUTRYTEMZNVBCSPVZYLSEJSGOTCCUBJUMXBEPOQFNAGVNSMTRLFTXGAPRVVJCPUQSHEGYLYQFOZS");
    tmp_msg_0.sys_type = 86U;
    tmp_msg_0.owner = 57287U;
    tmp_msg_0.lat = 0.244662020542;
    tmp_msg_0.lon = 0.455734591608;
    tmp_msg_0.height = 0.85428023675;
    tmp_msg_0.services.assign("QLVFZPERXIXOEIXJLMYDIQOZTBIDMMFARSRGXNYKZAQOVQEOPUMEIXPKLPDOETPNVYDWEXPBEVZLKJSIIVGGHOFUFWSVQXHZTSAHLZRTMTSCIVKUUGFGCHIYAJAUP");
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
    msg.setTimeStamp(0.179416653951);
    msg.setSource(30053U);
    msg.setSourceEntity(124U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("FIBROLKLOUEWOVDGYNVJHXXZRQXHXRDVELVNIMCJJMIFHAAFGOIMKCYTVBLNHZJUEBBUHSSSJYIWCMVQOMTXBWXPLZVYWOSOETNSPLZRICPTPFKMKIWAFMVCXTNNEJGHDIFTIPRXZDBXAKRHGWNQZDGDQEVAEKYJBKNFLQAYRUFGRNUUJYWJBHBFSZDALVEOXLRMSKTBTTYDFQWYDKWPMQJMUZHPSRHOAEICZCOQUTCWPQSYN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SKVQCPCTJQZYCECKLMBYGXZWBDXMFKYEVRVROIVTYHIJOVWNWCOUPITTAZKJIBSGZNLYSXVTHRSEOEGABTSDGVFUOQZ");
    tmp_msg_0.sys_type = 154U;
    tmp_msg_0.owner = 13708U;
    tmp_msg_0.lat = 0.0846188607282;
    tmp_msg_0.lon = 0.33060744437;
    tmp_msg_0.height = 0.307797222134;
    tmp_msg_0.services.assign("GWDIAHLLWXUTIFCCJKWPJVHWOXLSTQGEOKFPPTHXEEBKXGUTLOSANYAMDYTGKYEPJFCXSINEIJOWGPAWIRKYNHFQVJZRUHLBYAOYBLSRIVRVCUSXKBNNCGBILQTLGVZMWGLIQVCNCUJNITBAYTHEAXQPUAJZZJYSOPXPRMVDTZHURKZWMBDPOKHIMRSEUMRACBSXQ");
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
    msg.setTimeStamp(0.944015685931);
    msg.setSource(56326U);
    msg.setSourceEntity(124U);
    msg.setDestination(53173U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("IWDTSSJVJPFCAABGENBCZFCJHJCXNDYROGQVZOBPYXREFUOATMQXYSZTDDLYDKOZMOLVEVNFYMTCQHZUEICOUKHCXREXKCZAMSJRIPBFQIIVZVXKOJPTWQAHODDLRGGXUIVLUOPGLWLFUTDSPMYSKDXWQTRPUJIKHNYNHNNHAKPEFYGOGMVPUBUDGWZM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SYZGKEGCPLRDVUGBUMYELYQXQEKFSYYPIFEVUAQPCZNZBCDBZGKCKTNKENRTVRJLCISKMOFXXGICPBKSKSAIJJDXNXJH");
    tmp_msg_0.sys_type = 179U;
    tmp_msg_0.owner = 11373U;
    tmp_msg_0.lat = 0.784527642983;
    tmp_msg_0.lon = 0.229628156834;
    tmp_msg_0.height = 0.721513591432;
    tmp_msg_0.services.assign("QOLGMYDEUFBAOGPHOFLMICJTHZYBSNOAXXTHJFFVIWXDXBFRDURIRYVZJPSCUUKYKEBQZTPBWAIGZXTQTEQLWBLNVCHRTXNHPFRCEDCCGSCODUEMWYZUHGWGSQAXKPQDT");
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
    msg.setTimeStamp(0.468929430127);
    msg.setSource(11642U);
    msg.setSourceEntity(89U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(248U);
    msg.timeline.assign("GTXNFZLZSSZWIFMHGVRJOQJC");
    msg.predicate.assign("XMQFJGBDHVXZKQTURKDRVHYYTEKHINNXFJSQXIWOVDEDOJCIBYIUSPRVZQZAMXCPWOSTPOVKALFBREDFCWNYKTMPJMFHMVYAEHOXGKMBTCYBRYEAS");
    msg.attributes.assign("TIRXIOGYEXUGKALIFFUEJZQBIPPCBZQIBZSRRYWWGRVZDJKYYNXCYNHAMRAZNDXTIBJOYLLQHJTESNAPDRTDZZPOAHUBEMPWBSVLISTMDLJPOLPOUIGKZWNGAFWRDKFQXTHGOTTWVCPSHYRGNKAKFAVJOJNFFOTLXCJNGWHMSYUNSGVEVBWEKLUULVOHVOCDCYQLXURUMXHQCXJFZQCWMMVQBESPWDBEKEDF");

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
    msg.setTimeStamp(0.997132237086);
    msg.setSource(56003U);
    msg.setSourceEntity(89U);
    msg.setDestination(1605U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("NLSJRMQBVIVMZOBTLMCHTPTHSPFCVANTPQFSXUCDKYNRKJRNTUOAQHKYYXSBWFIAEGLDNLDYJARKPAGVGZWJCDXRFUWHUEWOCUTUIABZMXWHOWJIYWPDYCZFKELHSERLXVOGFYKLISOATEYBRYEMZUBBWPXHVVABIDVFEUTOQPRP");
    msg.predicate.assign("DPGCLRICRUVOMNVWZNGMLBSRYEOFAIDBWWUZJHLFGBTVHPHXQRVINNZYLFSUEKJWGIHKKACKQGELTSUGATNDLKCGABQQBVEATSICBSFMDTNZYSWQUFWOPXTJCKCZHODIXJRUYLTCYRTPEJDMZWZUNUSQQRPEGGQHDHRIZYAHXEXRYNMJUMCZMHDAIFWDBBWXXRVPPOJAMFIPJVESP");
    msg.attributes.assign("JOHDGRYESIZHTUGJRNOLCVYAKWZCDZIDZJSNAMVCNHWUVENSIUJAVVIEUWHUATIFRRLLQEOIAAMXYWGLPRGSPKGETAXBQDSRYBNLXCYDY");

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
    msg.setTimeStamp(0.306296986056);
    msg.setSource(20271U);
    msg.setSourceEntity(164U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("QNNKIQEXAPYWAEVXLPWFQYPCMFMDHQTOWBUITZVLDOKWLJELQAMCUMDTBIBZYNCGAKSFECFHXSMUSFXPGWKZKQNRUNPVCGOUSOOXNDRLZDCFVOPJNYLWJZGGZAEPOINTVIUYEEQMHJTYBPGHAHHGWRGEVDFNRVINILHDATGDEKIXJHQVHAECXIVBQSMSRBYYDBSROCTULGTRWUJXTSROXFCRFUHMJZYBLMWFTBKPMAJOQZ");
    msg.predicate.assign("OLNJBUYRNGJQOXGDANPVBOBYSOBMYSOMEWDWQNMZVHTHXPPRENTFXVKPKNUR");
    msg.attributes.assign("ZOXTVDSFJNACIVKOSFYEFFQCKKPIQBJZTALDSRERMXNQZXHRBZTIOJSWLNQATRGONHDMRESOAVOIOLBGASJZAAMXREDLVEIQCJQZEFYUQCWUYOTPLQOGVEYRCXHIZDFGRCZUGGZXQKGMUNXZKNINCBJHJPDSMNCIMHBMNLVDSBGVVWMD");

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
    msg.setTimeStamp(0.467677806065);
    msg.setSource(13669U);
    msg.setSourceEntity(133U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(146U);
    msg.command = 211U;
    msg.goal_id.assign("NCZVAOMBTJRLACQLAUJGBWEAGYOCLOEUFQPYUCLTKLRXCEUGIQPDPIYSVWHDYKHSSBGUTUKPISQIOVHCLCEPBPLVFZNRTTNMABXRFRBTNYXSOORZFYHSZSJMWNUOZTXKVPJTJGFEJMGJZDDIHDVMWEINZCNDVSWOCKZKCGJDRMFDAQFABANHZJQMKEYZXAFQIMDHVQ");
    msg.goal_xml.assign("BRADVQVIAKDQYPNVYOUZVWNARSFQOZVRXRFOSFHLPMIZTHXRNBPPUHBKVVMMJXOFOGUDLMLNTCQTGNYHCDSTXCNBLRYJFEGWZYFZJMIRSCDPMEIUKZXASMTJDWLBKNAEWUJHGDACRYBMQXHIWNGNIEWHOLIZMEPPAEMKCJLGLZLCAVYOFSHVTZUBWUUNYITBAPPVIEAGJBDJXBRWTYGJPQELICQYFQECZSTDXSUSRXOWDQTJEKH");

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
    msg.setTimeStamp(0.111208145483);
    msg.setSource(24315U);
    msg.setSourceEntity(94U);
    msg.setDestination(45667U);
    msg.setDestinationEntity(33U);
    msg.command = 109U;
    msg.goal_id.assign("LFBSJCMMZDFMGDOUNMZHYSUUSIFPBIFANHLIMUFBSKQEAYKTYJDIYAJYTEPZSNLXGKZCOUSISQYTGWOLBCWWNFOJ");
    msg.goal_xml.assign("JTFPRFSUWBATQLSEQPQWWHICTPELF");

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
    msg.setTimeStamp(0.058775149144);
    msg.setSource(9842U);
    msg.setSourceEntity(165U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(203U);
    msg.command = 73U;
    msg.goal_id.assign("WJZHBAUXBRIPZUHVTXWUFBCEAFHSQORLIOXGSADGNBLTLNJNQEFALOEEWTYOLOHWKNPWFHYWWWOVRANMDFXPCZPKZUHKEIMIIJ");
    msg.goal_xml.assign("WJWGYRSXXP");

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
    msg.setTimeStamp(0.516746065557);
    msg.setSource(11706U);
    msg.setSourceEntity(97U);
    msg.setDestination(39263U);
    msg.setDestinationEntity(243U);
    msg.op = 170U;
    msg.goal_id.assign("IIWQAYYTRQJDYOWLWOZRAPZEOFVOODMKNOUSIGCYPGNIMRDZANPGZIBFKQVCMKQEJATJQUYOORASSBBJSKUVWTNBDOBRCALWQHXDDSSETAKHQECKEBNHKMFENJNPNMECVERXRMUCFVWGYYJZBFLDVZTWVLGTHNSXVVIUURCFHBJFYKECETJUQXQLYSDMZPWIFYUSPZGLAHZDKHIXMJRFUGGMXCFGXQXTSHWRTNLMBCOGHWXPUAAI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KLTSQRHBIWOENOPAVIUQKMSSDCKOVPUZPXAYXENCQSIYRKUYYBOJNEMIQWCZDSCFIBQROXLGORGNWOGFLLLVRTFJZSWZMLUXJIMPWDRNBNDXUALTZEWEVLMBVVDBFOCCOJHDPTGEHHKPAPBSVTRVKOQIQUPFKGIEKBMH");
    tmp_msg_0.predicate.assign("GNSMMBXFDIAYVWDZJJMQDIBUFJYQOEKMZWYEOEEKHFUVCAWRWNTPCK");
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
    msg.setTimeStamp(0.322643740947);
    msg.setSource(54588U);
    msg.setSourceEntity(29U);
    msg.setDestination(30854U);
    msg.setDestinationEntity(157U);
    msg.op = 113U;
    msg.goal_id.assign("NDTRWSTRBJIUOCVBCZNSJMWUIDNHCFOFPEDZXNCPZNUXSHKKAPTFWHDATUQSIEIRWEFMJLGOIQYRVMERLQXUHWTHHQMOZREXTAEVJXSLQFXPNGICXCTHDFIAOEZQRLBYOUVFSKGBBGZVBLJHMVMFZDWNTVWYJRQACJNXMLEHWKMPAOVYGSLRVKRINYQXUZBSUHKIPAFBGUTKCYQEXZGPTVKPPGO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBHAEPPFYFSYBGUNZHWFAVNPQQUJABMUXTADNGJUKWQXODPYJYHIZOTFFYNIRCMMIVHNEQLJRGOZLIVEPLXQWOSOL");
    tmp_msg_0.predicate.assign("GKDLYFMFCDVVYXMSVGGPOPNXUOZLOGYXWZHJVHUIPSBKFXJHYKIWAJLRTNJPEZJIVVPUBQERECHCDBTZNZFMHDHZGGSEEVASTPRSR");
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
    msg.setTimeStamp(0.0459351232804);
    msg.setSource(13907U);
    msg.setSourceEntity(99U);
    msg.setDestination(52236U);
    msg.setDestinationEntity(24U);
    msg.op = 32U;
    msg.goal_id.assign("EGUGIHDXUMQMMYNCCXEYURCUFXOGABSZRUKHTBMSAYWYIYJWKXFRCFOGFZOBNIWOHHOJLHWVUKIDMGSJUQZZSYMTKWKPCBIGATTEBZQVLTXLPCITQQPSPKBPVETDFKSDSTXHSDNNDAJCNBYI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FBUIIAPTCMAPIPDOFJUNMXPKPPNLJYZHNJIAXHXQWBREQLEIZHFRETKWCOHCFRBAVEOUYKBNDZBZLNINJAEDMXTAHUSLICGTYDBVKGDZROIVAVMGWATISSKOSOENTQLXKXZKQJGTPSFXPVLYTLVGWXHGCRWTOPOWPZUISAQBUURQASYWQGMGMGNBJWLMWEHUJKJGECFKYCVYYZYJXRZQMBSWEHFDUTEFRHCNFYKBOFJSHCDRXDL");
    tmp_msg_0.predicate.assign("MOZXPDTMIDLOMZWZREPNVRPESTOKFVNJYIUGNSWSYVDMQXLFHJFAOVWBMDTGADRQVASIDENGLZWJMXKTNXYCKWYZDHUQUEDHOILOMASLHOYRXIHBHXTEJBQNKYDOZLWBPCKWXXQKIECIRUCOJVLRGEGULCEAZMHGHRPSQBSOSNUHGLCALQTFVIENGIMUKAVFCUCFUBPQWFDJGFJPXANRVCTSWJTAJYTUYFTACWQPKPYKBZQYBRG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UZQFAWZKNXIQRVBLLPECKEPSTDXJLOTQYMPFZDUFCCUVAUYJVYIFXYWEKEBROBDUCKSAEUGMHSIVGAWXWLYANEOQBJZISKLXJJVNUEAOPYVMTKFNGSOMGXLLDFOCNTHZGQDSEUPAHVKLAZTVPAMCZQJYHXBXJZNNWLFRKIQUBEMI");
    tmp_tmp_msg_0_0.attr_type = 161U;
    tmp_tmp_msg_0_0.min.assign("JRNKHQDDNUGFECJVGSHOXBWRZOJWIKHTZBOBMIPLYVZTAVGACFDIIGQLXBKYIPMMQLZYZQPNETDQUDXZJMOUMPDMJKZYVCNAGGAYCTANOFSLQDNJZWUGMTSOBXZLULOIGGPLWPPRSREXRZHQKWCXHVFTYRUROJGIYNPFNWKOJWBUWWTAMVISKKXNDPCQJDSTFMUKIRHFAR");
    tmp_tmp_msg_0_0.max.assign("XDFVKHHVMGTUNKMDIAAEMJTRTWPFUYRREGYXQBFLPCSMDRCEOTDBDMCBLFQATWNUPFSWNRDYABRZNSPSPKIDLZWONLFJQXWMHCYOVOVCIVTFOIAHQNYEZYUIRGEXLAPHIVTZMIEETKSRYZZHHXVTXFQJXQJYCTKVSALIOSBJWCJUMNDUOWLSRUXJKMEQCDGBCBZZPVHNCBWGGO");
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
    msg.setTimeStamp(0.381170505695);
    msg.setSource(3779U);
    msg.setSourceEntity(7U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(28U);
    msg.name.assign("YHHRQXEZLXTGLPSIYFYRDCDFSYUAXDGSZKKCBPKRJIYHKODMPVVRHSEYJTXULIOGKEJJWFEZGLQPAOWPKNBQBSKNAZFTHUHZUINTEHCJABWOIVTQNUWVJXSXAAYPIQKQSZHIGVLDADWTPTUEGWJWLGKCNQNBUQJZLVVYF");
    msg.attr_type = 178U;
    msg.min.assign("OBXHPSPIUVNBPFCAWVZCKQRTJKEXZSDJXRZMCYDXZOIWOJXIUMRLVIHOZWOTSMIIEGKVZVMIAXNKFCGZPSUSYFVDDWENEATHZOKGEJLHXLBPRGTDBBCFGKYDUCRGCGUJGYMMHQPTTYLYORWEFSVFPXCRTIQZZFNRSLBPEQYJNDHYJHWWUOURMBHKSCWOEAMDVPRMGS");
    msg.max.assign("ZGESMORTBLRJACMZAIKNPITBPLGTHEKURAASBGMLFALSMWYVEMUCASXQBRFRXXDBQOHYFQDKBNDQPUMOJXXWZJYTULBHNHTNSYOROWGLGSCJXHSVPTFJIVKZV");

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
    msg.setTimeStamp(0.0799717719446);
    msg.setSource(897U);
    msg.setSourceEntity(219U);
    msg.setDestination(48687U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QQOTTIEEEBNYDLMHVFJHGNOKCOFJBZXLMRLPSWLSRMMSBUZEXVNRARDWXNUNOFZJHDWHSYKBPWZESFKKRBCEHDINATLERCQADORMJMWMJCUCFUIUTKFOEZGCKBIYROVWKQNUWYYPVLJMXHXHGXTZLXSJOQUOXYBSDTEABCPFIJWHMTCYSZQVFWCNKAXUQXJWOHHPIFIYPCDQNK");
    msg.attr_type = 78U;
    msg.min.assign("AILZATKFRABSCERRQWAFUOHRQGOLTKYNIFEXXLJIFZHGJXZUYXIVBCHZDYMHNFEHCTCHZKYVGAXYAYPXNNOYDVF");
    msg.max.assign("AJELKJSUIIYMUFGRSQVPGTWCMLRUJGAYBDENVLYOONXHGNTUEAYCNHKYLWBNDWAMDLATISRVOEDWUQQIFVDTQRZZRTTWGVQJFXETEOMKLLVZWNQNHZIIGVSGFUISPWMCYYRZVOFFIPSEMBQZVSCDVE");

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
    msg.setTimeStamp(0.706067491669);
    msg.setSource(21349U);
    msg.setSourceEntity(124U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(16U);
    msg.name.assign("WSINRITXFMIJBZWSUGPHSXRKISBZTYBWKEHGMDZKYVEWALDRTGBOYVFBGECUVJDDOPYLTDNJUNHNYYLMGUCRXQZCVAIXUKXEAQPTKSSQWUUZBBQLBAYPVCRNXJFNYPOLMTCOKOFNJJCDEQOOMKFZJWEDKBPFMGLRAHHMZZMVZXGSHUWNUFCTLSIITRLXJFIPHQVOSVQRMO");
    msg.attr_type = 248U;
    msg.min.assign("CUFNSPJDNGCNXQRKAQVIXPMILMVVBGLUQIRHIYOEKYTTMDDENUVMHNJ");
    msg.max.assign("QAQPSAEZPIVOHQFADNZFMOPEDWGHVCKKKEUCAHIFYBFZPAUHWFOELYVZUKTXCLOQCNRNBNEOSHWVOBTJNRDJMXILXGOHJBPVPQUSKCINCHAFRRIYQUJXLBZTPTYRVSDGRYWQDCASBSEDPMBMMRCAZPXXULDSEEMKMPZZKOVUJXFCEQR");

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
    msg.setTimeStamp(0.548911448217);
    msg.setSource(71U);
    msg.setSourceEntity(219U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("AHXFWFMVWLIJKTKYMJJJOILXEQYDIEDKZNLGMWESCJUUJWEHHGESOTYGILCLXXNMQNQBHXAQRWDWAAIVRYQVTSJVGYBRNIXFXVPBIDSGSQCPKUHTRFHLRSWWZJKAAGPTOVLTWZAICEQCHQOGKAYUWTORRLVPCHEOUNEIBVGKRVAYSBONCKZZGPCJEANJMMZPZMUFTXDSNOUFFYLBPTPZPOKB");
    msg.predicate.assign("ZPUCWTDUDTLLJFAVCWBINHRXUVHDCHOCGOKFUJNYRRDDSSBCQVIXBKKSZNEMYMEGYFCDMLMIPKRQWNZMGKFSPDAXMJKLKROWAFNUWNCFAEMXQEEXPBFZGHQCFPGABJXQMGVDPJOHGTVIFNJOSYJHSBOKOLADTUYQKHGRAVBWIXCXNQY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OUSXWDGQWFHBAGVDJOJPBZLPTQCNEWMMEKWSDRBTLSNUVOPCXACPWUXSTHYZKFWBUXSPIMCPHNSIRDGJSYRFIFZKIFGCTFSDTEXHOMUBRWBEYMNETCJDQVLTAFKSZJLYGRMQNVAHHDAIXIQIOMVNZNVQNATZCYGQBLGJMLJNUMBHIBVKLEYOZKYGLGTYFKAZSIZXCPKUE");
    tmp_msg_0.attr_type = 250U;
    tmp_msg_0.min.assign("JGTQTQWKHZPIQHIHSDHHJSPXSCHUCPTXPJIVAGVBOJOWYFJLISE");
    tmp_msg_0.max.assign("ONUULHEJIIAFKSVQYRVTYXZWFKTOOGIISDMWVNPJLKGOHLGICZVQHZDRDVYQCCBKFXCBVVRHKFYBWQMPABYGDNOERPUMKTFSSWNVJBFXZAAIQSVZPLYZHONIIRHALHHSOXPMRBIMAZNUEUQIHRUFJHAXKQMJECOXRPCEEGFAAPWMXEWOJ");
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
    msg.setTimeStamp(0.324230426411);
    msg.setSource(473U);
    msg.setSourceEntity(96U);
    msg.setDestination(16443U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("ZKZBWNTRVNTEYILHCNSSRVHWVIODXOVWTWUBUOXMDKKAALNMTRSAIYUAHTIZNXDUOPJZWBCAHFNLWIDSPCGTYASIPFNXCFHDQPLZCLPMSDUOJYLMHQEMWFVYJBEYPZOKJNJNLQPKVRSGQFVDCXFYFMGYQOVKZEZHVOERAKWUBZGXTDYCQHEWQIBAIYETRNRUKGGTGILQCJQBZBHGWRIFEXRULLMXCXVUJJBXRTDSPDMJQKGSEBJOEFHSM");
    msg.predicate.assign("YLVCSYNBSHFGFVRBUKYBNEMSJKJHRGZNATDWTGXPPIWMZVBIZMGKPLSAPEDXILZSFXRYOCBPGLEYYQKIEJTAIFLAVMCDHJFOMVRUUPGYGMDBHTRR");

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
    msg.setTimeStamp(0.939692874983);
    msg.setSource(37776U);
    msg.setSourceEntity(24U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("OAIGCMBTHOMIMLSOJOJZMPFWOYYSHXCGSNLKIVSKVRKHXCYVRGAZGAWXJEUKAHZVPFYNNETQNNKAEWVGSTPTFTOTJQUAMXJUFIYOVVUQUSSOJVSXMDUBHJPZYHOLGPDWDUHSEDABBPPKVPNFKDRMHUCEJLACLAKNGIRBNDMPJKIBJXUTRLZQGCCZYLXBNWWKYXIAZFEDCVDIZQXWQRTBZLHILMGQCQBHPMFTQEBOZFYDRIFWERENQEWXU");
    msg.predicate.assign("WWMABXNXHFRGQLLSEYKRLGSIOBOBNGWETVSJSLIIRVUYSEJVBSIQLMSJBOGZZPNDEPNUPBATNCLFHVYOZUCYXXOKUVDZPRNEDPDYZALZKWRWLDMZPIWQMBKWEQXVPFRKBJFTHOQTOKMTHIUKXFVGASSQOCTZKZUTGAHIAEIPDXIQXDUUBBJX");

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
    msg.setTimeStamp(0.956464578954);
    msg.setSource(50706U);
    msg.setSourceEntity(159U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(173U);
    msg.reactor.assign("VFGUYCFAIXGMRUVWZACJSYFUKGOHTVMMTBTDMKSWGJMHXQIBEKGFSRBVKHXZDFPIOAETWLLDBIQUIKSRDCEZNLJNYDCSHCOCSJFAVHYQXDPYANRWQEBBNANNXYOYPHGBEAFENQVPFKIQDPLBCWCRRLEOZLGUGUBTVUJBJZWSWRRINYKLTPTMDEJUPWOIFALENSH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HYMKITPOFLYZQZJPCSSGZDDDEJACLVEGUAUMOBSIKTAPSQISWLJTAGRFJPMAJYNCDDPTGZNSQNDHDQTQHHTEOANOZY");
    tmp_msg_0.predicate.assign("XJZBGPCJXLAOIQKKDCPYGZVWVABPMWCYDEGUYVYTMLILNLZYUGAZNTSDEAFRZVSRO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TFRIQPGQLXKCIZSXVYVWECBFWQFAWNZGXJQTOAULUGAPNWYFUKKMTHQXOQCYIOKLBZAUJVOKDOARUZHDRSYMMPNUKELZCNTZDWZVJTIRSDCICRBDPWMFWSRSOJEXSOMIFVYYLAHBKJGBPMYNHTMLXSRTBRHULYEEKYIVZIQRTZQUHVXETMFVJNDFBCKCEGHIZWOUPUPMGBLFXPGWCSGPDVSDXQBAKHOSIVOPTHNQAGNMYNJBGFHDEJEAJEDLAJ");
    tmp_tmp_msg_0_0.attr_type = 63U;
    tmp_tmp_msg_0_0.min.assign("IJRIWGXWDYZRXOYJMCFNRWQHQRXTXQZKKKHMCIYBTNOVIYRVELYA");
    tmp_tmp_msg_0_0.max.assign("MUOVZHTPTSDDCXYUK");
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
    msg.setTimeStamp(0.819364369184);
    msg.setSource(58680U);
    msg.setSourceEntity(15U);
    msg.setDestination(43254U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("EGCSFDSUXEXZBDQWRJFPZIQWZXBSOQNJMMPJYWPPZWDVDIKDSVEMLQHQQANTHXSQZBIKYKUUPJEUAIQLPGBKWMCOJZLYRWKZRGHMEYOWEINULVOPCOHSKXODLNMYNJSCJAAVDGTLVCSKCERTDKTFCPHNYAYJTTPRXBMVQGVBSGRXEYRABFYVUTZCQBVFFTFACGMAOLIRKWAXJRIVIOOBUKTHSNBHUPLOUDWGLGXFZCXMFE");

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
    msg.setTimeStamp(0.646897685284);
    msg.setSource(19672U);
    msg.setSourceEntity(245U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(247U);
    msg.reactor.assign("VCUZWKOXAYVCRLMHQJBOXWPITFGXWTEWRWTBQGQWNUWMIUNJWOGZSCRLCVOEJZTOBEYRMWDMQJLSLGEEDGJLDZBQYMYNXRXABUCPAAUKIFSKILOCAQBGOGXPRGNTSHZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LQHPXUUMZHLHYFRYMFOUWVPLJSRYNBHMJIHXLRSCAYJJPGDYJUEUKNAFOBZJISIATKQCRXBQRITNNBEWXWJETAOAE");
    tmp_msg_0.predicate.assign("QLDUMCEJIKMIFJXXSOPIVYCSXAGHQANIIMJBKXNZLIATGAQWECVVPQDYFDEWCCEWJAHRUFNZRBVAHGKWWPPMCJUWLFVOYTUYNBDKQZGRFMVWZOGZUZHQNQLQYIDWVLHEMYHGMSNYUUBWUBSOHIQJLJPLLOZ");
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
    msg.setTimeStamp(0.105675686891);
    msg.setSource(33692U);
    msg.setSourceEntity(187U);
    msg.setDestination(56996U);
    msg.setDestinationEntity(12U);
    msg.topic.assign("XJFOBXPJLWUFBLVYGOWYWUKUTQQTIGYXRVZPFKZPXDNWHNWDFEVUNZEOXORUZNDMZLGLRMRDVYTQJMOHQVZMRGFDDYTIYMLMCVSSNICUSJBAHOZLRWGXNAPFNXSSNPBCDUZHHMARSIFOVISUEVJLFUNLJHBACASIAJWUYAGIJWQEBVIJTXLBQDCCEJZOBMLCGXFPVKGAR");
    msg.data.assign("EXOKYLVIXXGHSMYTUULDHDGUYLDCYRVVIDDLKDMZKWBOFOAHIVJHWLHN");

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
    msg.setTimeStamp(0.92447377978);
    msg.setSource(56927U);
    msg.setSourceEntity(70U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(65U);
    msg.topic.assign("XVOCJYTRZO");
    msg.data.assign("BJCTDMKVDOYDWGTYDBHYTDDXCOCROPKXQIXVRAQFDSFCAKRJUKXHLGTVIMQXAZFEIYQQZAIFMOPMOJJNUEHQHBTPZKXB");

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
    msg.setTimeStamp(0.0209721405512);
    msg.setSource(48799U);
    msg.setSourceEntity(118U);
    msg.setDestination(48176U);
    msg.setDestinationEntity(225U);
    msg.topic.assign("WNDCOQJSXTKWSDBQGUHRPDEYEYWTBOOSEULTNPIOKNOLGVZWPXBYHMFJCHZPAKBDCZJAJAIFLZLTJTMVFLSREQWHEDZIEDQNVBEXIJWGOYRWTUYEINQWNVVIRZCQGGFBRJHCIHUVGAXXQKGLVSBBXYMGMNKQDXSUCIHZVULSDLDPHJWAEPHTMZWJAKPACSMCVUOGOUTKSFYGDMPSNLBMKRTXPENXVIRNQCY");
    msg.data.assign("VGPIIGSDDOTKHVGOBQRMOKGYBZALDTKYSOIFRDYJFJBDIXZHQGSNFLGOHJZZFJFCKXTUASXNIPYAXFVMUDMYBNKMEWEWVGWNXWQMZQUYZDHDNJFOQTLBCEQAPAMACVQLOUNVCVUBXIZPJNUNUBVKSDRRQELPPQWEAGHPCEQSTAOTCHCTLTXPDBIMKVNHYOUXKEFCOE");

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
    IMC::DockingState msg;
    msg.setTimeStamp(0.835339025065);
    msg.setSource(10034U);
    msg.setSourceEntity(146U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("GUWQWMLFICIJATSEQGBVTUGDZDXBZTIOJQVQPOPZTDZLYVCKVBUXATNSBOKWOYOCOCRMGTAFMYASHJONLHIONZHLEXZZULANDFTPVKMFJXCPHNAEXNNLVCUSWWTPGMAIRGWPJHDGYDHIXEYXRFRBCLSIRBXUKZLELUQUQHHCYKMAIKMRDPRCDENAZBAPEQVUVEUJJNRSTKIBSTPLXPDWZGBGVQ");
    msg.state = 152U;
    msg.availability = 0U;
    msg.vehiclefunction = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.383774603358);
    msg.setSource(9341U);
    msg.setSourceEntity(69U);
    msg.setDestination(13292U);
    msg.setDestinationEntity(65U);
    msg.sys_name.assign("UOPAUDFOEZJXMX");
    msg.state = 169U;
    msg.availability = 181U;
    msg.vehiclefunction = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.234230757828);
    msg.setSource(52377U);
    msg.setSourceEntity(18U);
    msg.setDestination(3598U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("SIFHHQIPYGXFRCHVCE");
    msg.state = 160U;
    msg.availability = 60U;
    msg.vehiclefunction = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.65239455585);
    msg.setSource(3298U);
    msg.setSourceEntity(107U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(152U);
    msg.frameid = 190U;
    const char tmp_msg_0[] = {-124, -51, -28, 4, -116, 17, -110, 116, -54, -22, 24, -6, 113, -15, 57, -13, 62, -8, -128, 44, -94, -31, 47, 9, 26, -100, 106, 115, 92, 115, 0, -17, -100, 21, 111, -71, 15, -75, 98, -57, 124, 110, -73, -102, -81, -105, -1, 97, 98, 75, 14, 55, 23, 17, -42, -73, 89, -16, -63, -99, 123, -122, -60, -47, -63, -89, 99, 64, 6, -52, -95, 28, -119, -69, -41, 69, -111, 48, 30, -34, -33, -7, -26, -27, 111, 70, 26, -37, -32, 16, -7, 109, 37, -119, 75, -117, -121, -115, 26, 90, -65, -101, 10, 107, -59, -99, 80, 105, 103, -117, 70, 65, -126, -101, 89, -112, -7, 49, 29, 24, 60, -92, -49, -7, 92, -79, -41, 44, -15, 33, -113, 33, -118, 80, 111, 14, -91, 95, 126, 47, -99, 110, -124, -108, 12, 30, -78, 36, 43, 26, 89, -9, 79, -53, 41, -52, 121, -38, 42, -106, 41, -55, 27, -93, 16, 32, 93, 28, 2, 113, 109, 102, -9, -76, -128, -67, -125, -1, 114, -85, -4, -63, 63, 94, 82, -73, -128, 41, -47, 5, 89, 121, -88, -2, -13, 18, -22, 114, -20, 80, 10, -48, 119, -9, 98, -10, -119, -73, 72, -9, 124, 23, -113, 90, -108, 119, 74, 37, 7, 27, 6, -105, -65, -118, 113, -72, -9, -47, 85, -17, -64, 32, -2, -80, 109, -85, -128, 115, 81, -30, 73, 67, 67, 98, 97, -2, -119, 7, -25, -123};
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
    msg.setTimeStamp(0.901721914615);
    msg.setSource(22393U);
    msg.setSourceEntity(221U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(238U);
    msg.frameid = 80U;
    const char tmp_msg_0[] = {-32, 101, 110, -32, 52, 69, -73, -103, -87, 38, -72, 13, 42, 52, 61, 89, 122, -10, -63, 47, 54, 82, -115, 83, -97, -40, -112, 108, -95, -41, -25, 95, -97, -78, -17, -96, -106, 93, -9, 46, -50, 5, 10, -93, -35, -75, -13, 112, -87, -68, -12, 113, 52, -3, 69, -28, -34, -120, -90, 81, 101, -119, 60, 118, -76, 118, 0, 97, -27, -50, 16, 29, -29, -30, -67, -20, -7, 93, 38, 38, -116, 118, 66, 43, 35, -44, -36, -100, 50, 31, 26, 123, -20, -33, -13, -84, -5, -68, -18, -46, 112, 87, -58, -1, -81, -36, -12, 95, -128, 44, -18, 11, 108, -41, 13, 38, -62, -97, -1, -119, 119, 12, -65, -38};
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
    msg.setTimeStamp(0.253342047216);
    msg.setSource(45772U);
    msg.setSourceEntity(186U);
    msg.setDestination(30073U);
    msg.setDestinationEntity(109U);
    msg.frameid = 40U;
    const char tmp_msg_0[] = {48, -122, 108, -63, 79, -16, 24, 18, 114, -9, -117, -22, -53, 15, -18, -124, 18, 109, -52, -113, -78, -98, -74, 7, -70, 3, -17, 0, 65, -123, 18, 19, 41, 47, -53, -19, -23, -20, 87, -117, -105, 97, 45, -12, 2, -8, 81, 108, 17, 59, -82, -100, 16, -23, -99, 91, 72, 102, 26, -41, -80, -82, -82, 110, 83, -91, -56, -46, 22, -69, 29, 63, 23, -46, 88, -35, 64, 68, 45, 103, -93, -31, -128, -73, 29, -107, -36, 48, 1, -102, -50, -116, -49, 83, -10, -35, 73, 99, 9, -119, 22, -74, 105, 28, -8, -51, -109, -39, -87, 54, -128, 87, -108, -86, 116, 106, -53, 59, 26, -65, 23, -127, -93, 63, 88, 27, 102, 4, -119, -36, 103, 118, -84, -45, -3, 126, -94, -25, -44, -32, -26, 96, -97, -101, -54, -108, -52, -113, -106, 98, -20, -60, -107, -77, 108, -105, 99, 45, 87, -85, 93, -58, 13, -3, 2, -32, 6};
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
    msg.setTimeStamp(0.771777148452);
    msg.setSource(30270U);
    msg.setSourceEntity(151U);
    msg.setDestination(41623U);
    msg.setDestinationEntity(161U);
    msg.fps = 58U;
    msg.quality = 109U;
    msg.reps = 93U;
    msg.tsize = 230U;

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
    msg.setTimeStamp(0.612954906775);
    msg.setSource(43975U);
    msg.setSourceEntity(128U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(107U);
    msg.fps = 97U;
    msg.quality = 139U;
    msg.reps = 126U;
    msg.tsize = 212U;

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
    msg.setTimeStamp(0.0647976413976);
    msg.setSource(17297U);
    msg.setSourceEntity(176U);
    msg.setDestination(62527U);
    msg.setDestinationEntity(170U);
    msg.fps = 129U;
    msg.quality = 55U;
    msg.reps = 213U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.921947523366);
    msg.setSource(52111U);
    msg.setSourceEntity(252U);
    msg.setDestination(35951U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.50317399172;
    msg.lon = 0.762606547585;
    msg.depth = 84U;
    msg.speed = 0.145270122849;
    msg.psi = 0.868763359736;

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
    msg.setTimeStamp(0.191656067235);
    msg.setSource(30920U);
    msg.setSourceEntity(140U);
    msg.setDestination(64984U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.819857864522;
    msg.lon = 0.353373087728;
    msg.depth = 115U;
    msg.speed = 0.77235983039;
    msg.psi = 0.0769256216761;

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
    msg.setTimeStamp(0.506127326508);
    msg.setSource(36890U);
    msg.setSourceEntity(151U);
    msg.setDestination(59980U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.581778386763;
    msg.lon = 0.0824035848904;
    msg.depth = 21U;
    msg.speed = 0.585172295081;
    msg.psi = 0.0931237567082;

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
    msg.setTimeStamp(0.715445246618);
    msg.setSource(40157U);
    msg.setSourceEntity(214U);
    msg.setDestination(4951U);
    msg.setDestinationEntity(76U);
    msg.label.assign("EGSWHSTVTPXRLHAVXGBLBOZKYHAEOOLNEXQCZITPAYWCOWPRADOMXDMKBYSUISDLMPQHFAQRPTTEDCJCDVWZBJZQPUGGKHGQJWEMGQUCYNUFJFWUZSUKICRLMFIWVWE");
    msg.lat = 0.440069086379;
    msg.lon = 0.947158397636;
    msg.z = 0.109904531016;
    msg.z_units = 79U;
    msg.cog = 0.329813706759;
    msg.sog = 0.532343929723;

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
    msg.setTimeStamp(0.219568319176);
    msg.setSource(48144U);
    msg.setSourceEntity(51U);
    msg.setDestination(24478U);
    msg.setDestinationEntity(53U);
    msg.label.assign("VAOEKAWTNXFFCBJKSIQQRHGIPFAURWMWXPRJHSGMHTLRCNJUOSZMGIPEXOVFVJUM");
    msg.lat = 0.719985208992;
    msg.lon = 0.131070464065;
    msg.z = 0.490972552298;
    msg.z_units = 38U;
    msg.cog = 0.387105829167;
    msg.sog = 0.425363066311;

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
    msg.setTimeStamp(0.263370641815);
    msg.setSource(41230U);
    msg.setSourceEntity(87U);
    msg.setDestination(2234U);
    msg.setDestinationEntity(148U);
    msg.label.assign("QWMXFPXHBQUSWLGODSZJ");
    msg.lat = 0.151095765779;
    msg.lon = 0.418696082012;
    msg.z = 0.982587298596;
    msg.z_units = 144U;
    msg.cog = 0.252833817405;
    msg.sog = 0.736071530762;

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
    msg.setTimeStamp(0.737231876079);
    msg.setSource(59737U);
    msg.setSourceEntity(127U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(214U);
    msg.name.assign("JCAGFYGUZRLVHJHFJTKODBOSFBRQFEYJUXXFTOWPLPNUFYLSCIQQWCTMSBYQJZWURDPHMJNTOSCMATVRXDRXXEVMGPRBSUWKXKNSMHBWDRVLAWRQPPNWCLDKNKFAZUIIVFVGTIHBTZSBIPLACNIGNQQRJZANLOMHIUVXMEZCEJAZCSVPWAKKDAVKSTZXJBGYEHQGUGOLHYQWBCOYSFZONEYGHODEPDYNRKAIIPMBGHXMTWLCTDIU");
    msg.value.assign("OJLYGTUOFGKJDMMKIRFVQQMZPPJGMGDZESLMKTRPJBRCANIZCCFXSFQMAWIHWETEFHOBLQJXVZWKBSXTCNIHRBNKCNVPRGILHRQLZILDEKMEBUBMSTZEZQJVLDNRASYVI");

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
    msg.setTimeStamp(0.0355490206462);
    msg.setSource(34723U);
    msg.setSourceEntity(230U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(185U);
    msg.name.assign("OLXHJHCGLUNGFRIPYKSHBHZEENSMQAUEMCOXJPGAKJGIFWTRTZWYQYPZYZGLLODZBOOTKRJIAABDUCSNPAEPZQVCSFWTOSNWAXDUACEEZSFQLHVWPPUGXCVQTTVYRLUKGIQVFPGIJLYMXREYKWOZJUZATBNNMTSFXQPKNUUBBVYHLGBWGELWTOVMDFSVMIBXAJDMHKRCKDKIBHFXVEWJQQZMCINQAJEICYFRCDDBXFDRN");
    msg.value.assign("ANKTFJVVODYYOFNHJLXBQOPOBRCYSAKDXXIVTSLEIQNGXMWMUJMFKUALXVCRGOIIQTPFFEFQJDZBXZLAEOHMHZZWUOP");

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
    msg.setTimeStamp(0.421843168072);
    msg.setSource(60128U);
    msg.setSourceEntity(91U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(119U);
    msg.name.assign("CKGTCHWXAMSTRADJEKMKUYXPPIUTFJKNRPTUMMHGZLBRAVREPHVFHNWXGVJVVQKSWWFWYOZDLQFTUTBDYHFIUPETYEXXVFCILDIYSLG");
    msg.value.assign("RUXPUGGVRJTEOXZQCQSTGN");

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
    msg.setTimeStamp(0.0346355366189);
    msg.setSource(52996U);
    msg.setSourceEntity(44U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(5U);
    msg.name.assign("MGTUTZOPIUEYJLBRMVUKAIBAQRCPGVKOOFTLRKLBHRRJUCMMWMZVIFFUVTEVWXHZGNCOWVORFRVOYQVXYJFXFVGCNJUMYWFXYHGDBFSWQQTLSLIATQEOKEEGLWZLXHAJPYSZWRWTFASNZJKOCPBSNEMHJAZDAAHPXHUEHZQPXPQKKINISVIJHMCS");

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
    msg.setTimeStamp(0.296654753394);
    msg.setSource(24872U);
    msg.setSourceEntity(241U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(181U);
    msg.name.assign("JNZFYMPCXURMIORVNFPVPEHIOMUJUEPDEVYHSTSTRNDIMVGDHFQYMCSHVFXKZYIBPDNRPHCEKNQOIFQGWHTPVCCTSHZOSGKCBFRISJQPFCYOFOTJDKXKUBQVVEGUZWBSANMEJHBYCLIAZDXXHFJLLNLWCIJAXAVPLWKTQALRCQEGEWOGPTLRBUGXGAOMRLFRDYREWKXSQBOMAJTQGZNUDTUXSIBZWOAXNULHWSBGDZYIQZAKNUWLZTMD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OFBYXYJPPYYVICJQMMBCXVKRPDBGVDFSTRJVTYUAWFIQIEYQIHUKJKDGZWPGRGRUKHPLZHYNDKEOSKDAQL");
    tmp_msg_0.value.assign("IEMOEXQWCJVOHSXDRNGNFZADDVBRMWEXYPRIKEGKHUTFBMURIJQVJTOIDKJVSTVPJWQDFBBQAARQPFXYGPIAZTEUHTWOAWOXSENAAPBYLKPNROUKZOFPUBPGXXRDWGXKPYTHJLUQNZFHIJ");
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
    msg.setTimeStamp(0.333635933194);
    msg.setSource(19066U);
    msg.setSourceEntity(248U);
    msg.setDestination(62437U);
    msg.setDestinationEntity(223U);
    msg.name.assign("WZFZXWJPVJMUWIVFBXBBWYFXAYVNIZUYKSFDSKJHSITTMXDANEDTQOGYRKPPSXYXBPYRJNGTXSLQCEITBRBBNICGDUSJOUVVPZVLGHKOEMQTEORUPCHJFKSPBMWKQRBCKJOLHUFWEYVCYJNZAPZAGALGGWPTFUERDAONNVYQLQYGLMGDTHEIEHBSXOGIS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GNQNDCBMOYEWISEWDKPG");
    tmp_msg_0.value.assign("OCPNKECLBFMLJTHVBVVARUCSXVQMIOPKHSSWHFRYACYCPQTUQIAIHCJWMZYKZKFWTOILFPDRTWBFBRUXPEIQEALLYJLSBGDBEIJNEMMMGXKQRVMUITRJEDSTWMDVX");
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
    msg.setTimeStamp(0.384382569051);
    msg.setSource(37357U);
    msg.setSourceEntity(153U);
    msg.setDestination(10290U);
    msg.setDestinationEntity(167U);
    msg.name.assign("BSUWJCDVJLSQEVQSJGMUINPRPPUHBXREZANKPJOODTBKJPRUNVZYCANCMI");
    msg.visibility.assign("PJKGDUAVVKGZNNTIAJIJCJAFVSJZBMWOTVLWFSCAEXEBKKZYPBOCUEGAOIGQMREAYEEQZWDIWBUJHXMWBKSIIYXCRRNPQFOFNOCVDCHQXSJPRNAVPOIEGUXWJDWZSMVRQOOLJMGYVHSLLZOLDZXNZUDNFCBWXTBKYSHLFEUEQBIXQYLMNJTHFGGRMTKLXMZCQPPLP");
    msg.scope.assign("VERCKFEDQLOVVHPDPVIESZFHONZAQDPXWXEPCYQGTZGMKRNUDWDUMSZGNJYTCYFSATILJHJGFRGXJAVCKBJHBNWQHEYBMWOO");

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
    msg.setTimeStamp(0.267861017058);
    msg.setSource(24529U);
    msg.setSourceEntity(211U);
    msg.setDestination(5156U);
    msg.setDestinationEntity(38U);
    msg.name.assign("LZPGPRSURAUUSOQTCLYJULJAMJKWDDOCWFAJAYNMOVMHGYEMRWPITXIOCFYLLIEKQEPRDKGJCAJMMRSIFYGBIVIUQWAEISWNEPRDPXFQVXBNGVBBIGIAXHRNUBXVSCPJKYEJAJWNRZPWZGHCBPHMFZTTTODVZ");
    msg.visibility.assign("TSDFQUNKTTIBQCOIHCNQJHGJNCADUWWIPCHCAKEIRHBMBDAVWRSMVEVOSXRQBFHLRLHWRINQPZCJFLOZOJOVKNJOCTFEGYUGFITMAYSDKLMYMBFJUDRYYOWSVSDGTXSBHXZPPBNFKAQKAIGORZRYLLWUGWFQLUPGULTIAVJYEUFINDZFSYHEGKTALKMJQPHWMQIYPVECWZSPEHEXZOJYXOBLCBZVNUWXUKMTKPZAR");
    msg.scope.assign("YFMAXGHFRZUMSOKKYQCXGVEOCIPSVJRYHQSFJWIAHSLZQPUIRKZOKVOHFCBAPDUMMUNJXXUUMHBXIDXEIOTSSDKTGPNKBDLICANLGLKQZWZCBRHVTTNGYJNOFECAQTSRHUPMIRXQHWBQWDYRYYLRMISOGJABZV");

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
    msg.setTimeStamp(0.938226670593);
    msg.setSource(60072U);
    msg.setSourceEntity(112U);
    msg.setDestination(26774U);
    msg.setDestinationEntity(242U);
    msg.name.assign("LOZCKNCXXQXDLCFLCIXKEJWDFCGWKHCXVBNCQBJTIZUYSAIERGFTRYAZKNLMMUSBUHWTZYLMHBIQNPGEHCQOJRNQXSAXLJAFYSUTZFBJVMSTZJNMIOHWSVRFFEMQHEKOTODUVQLJOMPTWDKNLGMINTHGRWQSCEAFAYYXSUVYADBOHRZWVNAQUBUIWPJVYITF");
    msg.visibility.assign("YXWYQAWPDFBKEFFOIUALNSNCKLTECDKBEBYRYKYTJWTGBJTBYKYNFTMIX");
    msg.scope.assign("JIGNBQYEAAHMSHVFPMIJHJSXAAWURSHOQYNTXRMMIGEPTCDFINDQZTDWLRMPGHUPYNWKEXWFVMVDVMALCYQQBDLLNVNWSBMHLPKET");

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
    msg.setTimeStamp(0.450756036977);
    msg.setSource(16814U);
    msg.setSourceEntity(159U);
    msg.setDestination(31517U);
    msg.setDestinationEntity(49U);
    msg.name.assign("PSSOGMISBEGKFGLDUAXIVIQYDCOXUQDALLGTXPMQOYVRIE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYJNNPGTPVXTDIRSYOQSOVSYJDIIBQOXBZPRGBTOCJHPLFDTFGUGOMERZCQWSDAZWDMGBJQKKDAYDHMCVHANEOMWCABSFZDFUXV");
    tmp_msg_0.value.assign("LHCFRNVGAWUZMFNNAQIRTQEAYJFUNHXMJPETCPOMHISGRWPYYPSZHTVLRXYFMSIGGENDEOYXARKZG");
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
    msg.setTimeStamp(0.513917054697);
    msg.setSource(24330U);
    msg.setSourceEntity(187U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(218U);
    msg.name.assign("EKMWLVIEGITPWCVNQZBHIADURHYNWTTKKBEJZRVFQLTCGWJWFXNTLIGPFHYFQOFHGDDIQGJPSOMKZANUHSKZYCMUFKCETBBJOMDZKXKKLUOHHOMZIPCSMSQVDVDBQWGCAEVAODQLMWHJAOSETRHJGUGXCBAICFGYNUYTIXQMUEZDZNERLNAWVJUISFPOSKYYTVLRLCAWXEJPBQPYJSGXNCEO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FDGVEPMLHHYNFOJDVQFWHOAUVEKXQAOCXRYNNQTTSZXNBXJWLKZFHAQYRARSVURFHWRMQYIKGOVCNTLSUJMDUKVPQALBEJSFWOPKIHPCKYKNAPSKLCGXUTZEWWHJOBVBQCWSGJBNYMPXEGZOMINJIIIZAALUGCIIMMPTLPVZACSTAKTZDDZDDD");
    tmp_msg_0.value.assign("NTSGPOVQHKDCOCMKCUHZGVVZRBXSBAJZIPFBPSLARDRTQDVSZQOMXWORKPPLGIGTKCWLXCDUHWLUQSBFDW");
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
    msg.setTimeStamp(0.560326598847);
    msg.setSource(44451U);
    msg.setSourceEntity(148U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(1U);
    msg.name.assign("KPERHAKCYLPKWHHUFSRCDLZCADYBIVUVCMVFTWTRIUIRJCIKHILTPJMWUZIGVERCZYAKGDSPBLANFVSPUQQBOKWXBHQJYDYTZXWPULMCDQNGQETIGOOJHXULGXJSAMYRKEPVBFVLDFGXUGNRROJQJBNVBHKNDMIFYYZQNVPZXJSSARQCMXMXMQSZLABXWBTDWSZEONFMKKSTHTNCGLWGAT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MMTNUZBWOKKKNDPAUTQYZTRUJSABXGMRNPBHOAISFOOCVMFQFVGKVDACGUCFEQFTGNJHZIHDRXJOAUMBZBUKTMLIRNPNMXOWRKCYYOLXGRGDVWCEIPBXASAWZUSWHEHGVV");
    tmp_msg_0.value.assign("WOHTWWOGFTTATUFLUKSBAOKVBJCHVVTURYDYMXUWIMOQBYQXSYMUABPBZMJPQNFQLOVUQBDNGIHNAPPFCLCRMRKYYBRIRRSWDKAGOMXMFGLJXENCEJTHPFCDAVGKRHWNKXTLYVTLITWYSQSBVEVDGDKEVJZADVRJEQQOIUXZBHJLIFCEJZZZTDHEUDWUASCLFKXOWHZPJSONGFYEPCWBPRQYPESKNZHGIJGNCRPXAMOIZFXIDA");
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
    msg.setTimeStamp(0.321367460797);
    msg.setSource(11088U);
    msg.setSourceEntity(159U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(98U);
    msg.name.assign("XALWXQXPZDPBEWUXBHHHZNOBSOUSWWRSVTQQCOGFRIBYHHFRBUEBRMUHPHZDDUBSQZLKIMKBXEZMBRGYJGDLWCAAQCFQYSJMSLREMCXIWTVONZQDJNLAFTYOILFUPSNKEIWVZFQGXJYCSAGIFXGZLK");

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
    msg.setTimeStamp(0.204904477741);
    msg.setSource(26244U);
    msg.setSourceEntity(79U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(130U);
    msg.name.assign("QCWUWUHJLXKIWEWQNMIFMPPZDUWVBNIMVDDIDBRFCZAPUGTWEWSUBGKRQVXMHGYIRTL");

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
    msg.setTimeStamp(0.957744477974);
    msg.setSource(19767U);
    msg.setSourceEntity(111U);
    msg.setDestination(33914U);
    msg.setDestinationEntity(155U);
    msg.name.assign("FCXNYDSKRFABCHBXRPFTHCKZORFGOZMYDJSGDUBPVDVJEJAKVJSPJSSKCZHXRAMJOYZTHUHTGWUNODLMCQIOYQZLMQGEEPCPDLBHNCUBJFAWWXICQVSXUABFGVAPJVPNIIBLQUWUANZONQYKLRTLTZGGUTBDOMXENAIIDFHNNTCKGWWNEWEFXLTYRAESHSMIVOHWTSRDYIXFIEJVE");

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
    msg.setTimeStamp(0.455079956865);
    msg.setSource(44773U);
    msg.setSourceEntity(238U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(158U);
    msg.timeout = 4162209779U;

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
    msg.setTimeStamp(0.541350047216);
    msg.setSource(21145U);
    msg.setSourceEntity(208U);
    msg.setDestination(61775U);
    msg.setDestinationEntity(162U);
    msg.timeout = 3578238109U;

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
    msg.setTimeStamp(0.273750683848);
    msg.setSource(55570U);
    msg.setSourceEntity(103U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(64U);
    msg.timeout = 3980511837U;

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
    msg.setTimeStamp(0.435079857617);
    msg.setSource(64113U);
    msg.setSourceEntity(182U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2972460014U;

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
    msg.setTimeStamp(0.977978572376);
    msg.setSource(63121U);
    msg.setSourceEntity(90U);
    msg.setDestination(11430U);
    msg.setDestinationEntity(172U);
    msg.sessid = 282898218U;

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
    msg.setTimeStamp(0.577973556228);
    msg.setSource(4599U);
    msg.setSourceEntity(94U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(36U);
    msg.sessid = 2629485236U;

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
    msg.setTimeStamp(0.860924535239);
    msg.setSource(27259U);
    msg.setSourceEntity(30U);
    msg.setDestination(36135U);
    msg.setDestinationEntity(237U);
    msg.sessid = 3172127202U;
    msg.messages.assign("XDCPBFOVPBNFSEVUJLXSMEONPFEMQGMWHTAXSZCKRQTQOUQWZJJKXVPTFCARAZITRXFOLUETXIFZRBOUBLEBSNTKCSDJWXPSZBBGJKQZCGHQVWKHAANUDQJ");

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
    msg.setTimeStamp(0.265090418393);
    msg.setSource(21706U);
    msg.setSourceEntity(109U);
    msg.setDestination(10574U);
    msg.setDestinationEntity(121U);
    msg.sessid = 3282773071U;
    msg.messages.assign("KAFDGWMLHVCZRZNPBYHAQEJVQJALLUCNPR");

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
    msg.setTimeStamp(0.259819023991);
    msg.setSource(54908U);
    msg.setSourceEntity(216U);
    msg.setDestination(33489U);
    msg.setDestinationEntity(246U);
    msg.sessid = 129801710U;
    msg.messages.assign("IRSXUJYLGPRXZTWSYLYFIGAJIQCVYCCAJHKFUGTPCNDBKKWPJNVXMRRXMNCMEGGIDNBZWENNNLHJODPOUALIQOJQOZVUPCNZFROOBHZTKUWYQJOXOMHLFTQDSXGMJGKPFVQSRB");

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
    msg.setTimeStamp(0.687401918374);
    msg.setSource(56197U);
    msg.setSourceEntity(210U);
    msg.setDestination(5245U);
    msg.setDestinationEntity(28U);
    msg.sessid = 1671388079U;

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
    msg.setTimeStamp(0.591895167003);
    msg.setSource(39005U);
    msg.setSourceEntity(171U);
    msg.setDestination(42668U);
    msg.setDestinationEntity(201U);
    msg.sessid = 1731513993U;

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
    msg.setTimeStamp(0.778818039208);
    msg.setSource(50848U);
    msg.setSourceEntity(59U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1161751343U;

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
    msg.setTimeStamp(0.293204212301);
    msg.setSource(55105U);
    msg.setSourceEntity(70U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(63U);
    msg.sessid = 3734885543U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.235160117389);
    msg.setSource(9753U);
    msg.setSourceEntity(4U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(58U);
    msg.sessid = 3308252381U;
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
    msg.setTimeStamp(0.390015906905);
    msg.setSource(45288U);
    msg.setSourceEntity(223U);
    msg.setDestination(63118U);
    msg.setDestinationEntity(222U);
    msg.sessid = 652044332U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.181257349126);
    msg.setSource(27656U);
    msg.setSourceEntity(91U);
    msg.setDestination(41046U);
    msg.setDestinationEntity(18U);
    msg.name.assign("NYCIAXNGHERTUZBQYNOUUJWBEGKKRVIZIZJMUSMWTHWGVHFQQGOZHMYGMVFXPOONWDJATTLEOHLVLTEMFJCRUBPSPYDXGLEBXYFWLLGDVJSIUZMSTIDVPORUDCXHDXUCKAJKGKNZXDKAWBYQMWWFBJSPEQNCKMESBVKTBSJOOHMZPRAQTWOUVDJYCCMFDDBRNGTQQQCR");

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
    msg.setTimeStamp(0.587701455745);
    msg.setSource(21538U);
    msg.setSourceEntity(151U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IILUVFEXGFZUTKDSMUWBSORUJAHGHFQYUBDBZRXZWZMDLWYLOCLVNNHNANHPTAKLHMPJJIQHRMGPXPHOSUCLPJRPJKGXFQSORDZYLEABZKIYPCCWICVWUZBAKMOYDLVGMCVDLHJQTKAKXANYYQBFFWGOBRRNTRKPCMFBEWVTXNBZQVYPZUOSDTIJNTMXNAFDBJGZMSQQCUNRSSMORIKXXETEQFOJWFDWWQSGGCSAJEYAVKPDE");

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
    msg.setTimeStamp(0.984060275075);
    msg.setSource(47277U);
    msg.setSourceEntity(182U);
    msg.setDestination(64047U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IBJDJHZIGMDGMMLXTKOFEXUDLTYOAFDLCFROQGZFKKLQVEICASUEMKVBRSOWKLVVVLPUDWSKSVDALUBDJZHKNAWDFNDTHUSPXXYSZTIQDLYGFPITYMUHPZOCTPPEXVJYCZERJQM");

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
    msg.setTimeStamp(0.832236156499);
    msg.setSource(61620U);
    msg.setSourceEntity(97U);
    msg.setDestination(15455U);
    msg.setDestinationEntity(13U);
    msg.name.assign("ITBNCQIEUVAVWLISAYQEPXQWJJEBANVYDUJGLNJAFKKHSVMMBUMBCPOOVJVTRAYRTABDQQAVLQHKPMXXDKNONSOFEZUZAMGIHLUCKTKXUNPBRRW");

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
    msg.setTimeStamp(0.734658324153);
    msg.setSource(34887U);
    msg.setSourceEntity(90U);
    msg.setDestination(24479U);
    msg.setDestinationEntity(248U);
    msg.name.assign("KMVDTCAOXRKUMPEJJTUDTYQZRGMWECOIEBOMZBTHSGXHJNPGDHJVENNFSZORWFHFSDALYCTZSCFJAVIOZKWGQOHLYEZYBAYGLPLXHPDABQVGFRKIUMNRTQQALVKMETZPLPCCGZMOXDSXPUBYWAQCJIKNNCGNURUJOJQRAVDWPUTLXQLMBWFWEZDSMPXHHXEJBYCJZFTIOQHKWNBULF");

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
    msg.setTimeStamp(0.278479337286);
    msg.setSource(53044U);
    msg.setSourceEntity(157U);
    msg.setDestination(39505U);
    msg.setDestinationEntity(68U);
    msg.name.assign("TJKHXIJHAZQDNEFTLPZIOWYYVNXTUSQSBAQWNMMBDZOKREUALSXXVDRXCUTOKKLHFJHBABJLZVPSQRVIWIMXVYFICNPGDGNDFFESOTUJFAGTWXWNRMKUAOZSCOYFGXTGNYJPYGOUVTHFEPIMZSEOEPELJGPWRKCQIDTNEKCCZUHZMSNLFRSONVGHPEWRDGBDZJIPJBJPQKLHCTROMBQARVYSDAMUKGCBFUBVHLVBLRKYAYLQQMWCEAXXH");

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
    msg.setTimeStamp(0.842190351976);
    msg.setSource(50765U);
    msg.setSourceEntity(17U);
    msg.setDestination(22871U);
    msg.setDestinationEntity(188U);
    msg.type = 226U;
    msg.error.assign("RTWDGNHMFSXHGYKGXGNUQDFRNYVUGPUMVZOZYLKZVOCZQFFUJLARUCYQPSZVOXJJIQTCPNFNIWPDCAFVLWDNBHEJFWSHBPEXJUXPRKKMRSAAEKYAOWVMVBOKXISEWIXGDMBYQVEDPHQYBIHRYJDCVMCULALCNWJUDZCGTKNDHJZWBEFINKDMZZMFATGOMTXRBYZRTWVSBOPQKABUCQTEEHISIXLSNABJTYTQPKLS");

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
    msg.setTimeStamp(0.0109075940614);
    msg.setSource(9094U);
    msg.setSourceEntity(143U);
    msg.setDestination(3587U);
    msg.setDestinationEntity(154U);
    msg.type = 145U;
    msg.error.assign("SAJOMJZGKZMJIGPBMIQTFWHRXFQPLOEXRZMNWYIXFGPNADUNIDUKOPTYACCIUXCFQRIHMVYBEZNUKXCTOAGQCDHLHRGITYEOFSLVCEQJKUESGWVOJF");

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
    msg.setTimeStamp(0.68490422357);
    msg.setSource(10595U);
    msg.setSourceEntity(83U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(175U);
    msg.type = 113U;
    msg.error.assign("JQQCQBOPXMKFWNZYZSNLKLOKJKTBHSAHOOUVGRRWUBHZIDMNVSNJUJPGIOEYXBERSNVXGXHLGVFVCFHKIWYWRHMWTILDRKPD");

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
    msg.setTimeStamp(0.390814830164);
    msg.setSource(52121U);
    msg.setSourceEntity(80U);
    msg.setDestination(43050U);
    msg.setDestinationEntity(209U);
    msg.seq = 29435U;
    msg.sys_dst.assign("SKSEVXYEVCCFLCGDWQMXTRVKVGNLKLDBHZFVRTQLWOMLKE");
    msg.flags = 216U;
    const char tmp_msg_0[] = {10, 88, 62, 66, 35, -125, -73, -35, 38, 124, -78, -46, 13, 24, 30, 86, -105, -8, -125, 28, 19, -5, 58, 45, -50, 17, 42, -1, -81, 64, 91, -108, -116, -35, -68, 22, -33, -92, -32, -100, -48, 42, -26, 109, 29, -38, 117, -104, 47, -27, -95, 107, -11, 62, -107, -43, -116, -56, 24, -19, 66, 44, 25, 53, -46, -87, -71, -67, -10, -18, -87, 99, 66, 4, 53, -48, -64, 123, -57, 60, 106, -99, -112, -83, -3, 80, -32, -89, -24, -61, 65, 109, 121, -52, 21, 44, 22, 109, -49, -105, -30, 105, 83, -100, 108, -2, 4, 31, -31, -35, 41, -3, 95, -102, 1, -80, 107, -42, -47, -14, -54, -46, -25, -125, 61, -3, 104, -76, 33, 124, -14, 91, -47, -118, -122, -36, 80, -55, 52, 59, 49, 87, 120, -23, -119, -31, -106, 27, -87, -84, 77, 66, 121, 112, -61, 28, -32, -104, -29, 88, 39, 77, -120, 99, -40, 73, 79, -121, 15, 19, 91, 114, -43, -47, 13, -50, -128, -13, -67, -67, -36, 20, 43, -126, 74, -29, -90, 50, -11, 89, 40, 29, -27, -75, -117, -62, 117, -66, 115, 13, 123, -4, -77, 29, -120, 38, 83, 3, -95, -83, 89, -31, 66, -88, -76, 47, -68, -122, -3, -55, -38, -27, 108, 38, -62, -102, -97, -42, -68, 47, -125, 97, -44, 84, -124, -111, 95, -17, 58, 33, 98, 45, -66, -90, 110};
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
    msg.setTimeStamp(0.797284841827);
    msg.setSource(5141U);
    msg.setSourceEntity(234U);
    msg.setDestination(51497U);
    msg.setDestinationEntity(181U);
    msg.seq = 18129U;
    msg.sys_dst.assign("MCGCSZQUWBFBVYDPETRVDBUSGGXIPA");
    msg.flags = 56U;
    const char tmp_msg_0[] = {-85, -119, -110, 45, -120, -68, -14, -10, 74, -93, -29, 5, 53, 111, -55, 21, -104, 33, -30, -86, -73, 65, 108, -53, -39, 46, -37, 61, -106, -116, -121, 20, -33, 49, -117, 9, -125, -1, 90, 48, -6, -125, 33, 69, 72, -97, 45, -91, 43, 91, 24, 17, 90, -26, -106, 49, 49, -51, 72, 15, -100, -86, 63, -91, 71, -51, 119, -36, -2, -54, -126, -20, 55, 28, -9, -72, -79, -121, 8, -82, -127, 5, 8, 112, -91, 39, 21, 34, -16, -28, -15, 3, 74, -70, 14, -91, 56, -42, -74, 73, -5, -16, -93, -126, 81, 25, -113, 110, -6, -59, -86, 5, -72, -102, -125, -11, -46, 109, 28, -25, 90, -61, -86, 40, -62, 38, 3, -27, -44, -48, 64, -89, -27, 83, -9, -107, -8, 92, -95, -87, 28, -119, -92, 65, -91, -23, 36, -77, -92, 19, 126, -35, -43, 76, -127, 102, -18, -119, 29, -4, -62, 99, -4, -39, -95, 37, 37, -40, -87, 47, 61, -120, 66, -74, 80, -113, 90, 15, 23, -47, -60, 49, -9, 27, -85, -64, -82, -110, 125, -108, -117, -47, -5, 84, -88, -122, -84, 73, -115, -20, 61, -87, 10, 22, -49, 114, 37, -7, -114, 74, -30, -3, 13, 70, 95, -64, -69, 84, -75, -128, 126, -118, -100, 80, 22, 121, -41, 1, -113, 58, -19, 22, 123, 23, 11};
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
    msg.setTimeStamp(0.212135466537);
    msg.setSource(61610U);
    msg.setSourceEntity(69U);
    msg.setDestination(28156U);
    msg.setDestinationEntity(42U);
    msg.seq = 15178U;
    msg.sys_dst.assign("ZQOXJKULLWHNNUGEPUAONKTXGEYKMXFFGGJFUFCEHEIJVBLSRZJSKBKNRQHZCSXYLEWHWQCZITQBVRFEFALJUKQADMSHXCDTVIENYDFOPVRWNVACJMPARVQGOJHMWTOW");
    msg.flags = 123U;
    const char tmp_msg_0[] = {-92, -101, 110, 38, -29, 12, 113, -45, -60, 94, 98, 14, 90, 17, -25, -94, -89, 60, 6, 112, 92, 62, 105, -45, -84, 122, 85, 114, 123, -19, -16, 57, 29, 28, 55, -95, 126, -53, -86, 105, 85, 28, 0, 92, -49, -123, -57, -60, 103, 55, -19, -94, -71, 46, -38, -116, 69, -108, 84, 31, -39, 74, -110, 71, 54, 13, 45, 91, 77, 86, -25, -59, -22, -3, -56, 75, 30, 111, 114, 25, 53, 117, -27, -31, -88, 71, -56, -16, -43, -23, -29, -8, -29, -17, -85, -128, -113, 86, -30, -29, -83, 83, 102, -20, 70, 126, -65, 117, 124, -50, -127, -76, 86, 72, -42, 81, 25, -126, 61, -87, -100, -53, 109, -110, -118, -74, -18, -125, -9, 81, -37, 40, -112, -36, -83, 5, -67, 12, 113, 52, -73, -14, 28, -64, -57, -44, 11, -82, 99, 126, -94, 2, 123, 122, -27};
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
    msg.setTimeStamp(0.560239764621);
    msg.setSource(14454U);
    msg.setSourceEntity(186U);
    msg.setDestination(2602U);
    msg.setDestinationEntity(215U);
    msg.sys_src.assign("SKUZMLOHHSNXLUCZWWOJWNCAIRSTPFROCRJXIJMVDVJFOCXEHFZQPQCGGVYFJMXKCVSMQOHNNPWKXFIPSRXEBOZKEYJPHYUSACQBEDYTLBWTUKOBTLLCGJOZITUZKEADLFGQGNWDDWLHAKLWUPTLDJFASFIIMRPTQAULQIUBTJMQNINMKZYNGRROYZHYHFBKAVGIMEPNCABNDB");
    msg.sys_dst.assign("VWKNOEOVOFYGKYUORCQABCHDPIBUJPFYXEHWSLQUXTGLNGSFUDKZGORSTI");
    msg.flags = 85U;
    const char tmp_msg_0[] = {62, -44, 103, -128, -74, 52, -121, -22, -34, -87, -117, 64, -108, -123, -70, -51, 23, 97, -69, -119, 29, -127, -47, -30, 24, 4, 63, -109, 33, -112, 21, -75, 106, 48, 119, -86, -63, 12, -76, -35, -9, -49, 50, 95, 83, -36, 119, -128, -72, 3, 74, -17, -16, 112, 100, 52, -59, -93, 101, -62, -29, 51, -50, -10, 124, 100, -93, -96, 31, -31, 87, -54};
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
    msg.setTimeStamp(0.230827280209);
    msg.setSource(39033U);
    msg.setSourceEntity(169U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(54U);
    msg.sys_src.assign("LXPVQIXSADVI");
    msg.sys_dst.assign("HNPKCXMAEQ");
    msg.flags = 138U;
    const char tmp_msg_0[] = {81, -21, -13, -108, 116, -27, 23, -116, -91, 62, -128, 59, 40, -3, -43, 109, 72, -70, -20, -117, 96, 93, 93, -66, -52, -55, 102, -66, -52, 64, -8, -34, -124, -56, 36, 3, -81, -49, 98, 69, -16, 24, -71, 16, 38, 19, 43, 99, 80, 1, 70, -99, 34, -44, 112, -62, 13, -87, 111, -43, -107, -98, -112, -24, 101, -35, 94, -123, 97, -83, -34, 51, 97, -17, 81, -23, -77, 32, -16, 125, -125, -108, 101, -31, 16, 47, -99, 119, -43, 110, -85, 97, 40, 22, -69, 43, -60, 7, 1, 90, 84, 124, -117, -17, 67, -14, 77, 13, 102, 71, 26, 44, -113, -76, 56, 125, -104, -87, -8, -76, 76, -77, 4, 43, 100, 87, -98, 75, -24, 79, 57, 35, 17, 0, 14, 33, 94, 39, -87, 94, 93, -122, 113, 3, -117, 33, -123, -2, -78, -22, 35, 66};
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
    msg.setTimeStamp(0.928866798476);
    msg.setSource(40883U);
    msg.setSourceEntity(49U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(69U);
    msg.sys_src.assign("XUMPVYCVMDSMABEIPTTLMSZBVGRDQSBYWPNJKANIHUQTVJCDWIPSUHHGLAOJWBYLFNGGOUKTCJJXIEOAEUBTUKUOKQXOPJENLAZIFZGBZNYOWTFKQITXSJVYFMDQQWYOGSZMCWOLYRCFABKIDPKFOGVRWQMHFRKNCBHVAPRHNAXZECDXEHTZ");
    msg.sys_dst.assign("MCFBKGEUQIEPLTKBFLSVWTRQEPEHSCGFDIQSIRVAFKNNTHFQNTNVSOOTNWAPPTOZYYCPQYYW");
    msg.flags = 72U;
    const char tmp_msg_0[] = {-107, 101, -41, 108, 18, -4, 16, 88, 122, 92, 109, 47, -81, 104, -97};
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
    msg.setTimeStamp(0.733697872077);
    msg.setSource(9543U);
    msg.setSourceEntity(86U);
    msg.setDestination(57914U);
    msg.setDestinationEntity(242U);
    msg.seq = 3023U;
    msg.value = 237U;
    msg.error.assign("WSJHOBZIIQHEWUSPLNNFHRXQARZRIWDXFTXRXDACYRMUOPZLRBUPFISDUYUDCEXSVAMPXOABLQLVNGVNRYTNKYNQMGKVJK");

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
    msg.setTimeStamp(0.437049119278);
    msg.setSource(13316U);
    msg.setSourceEntity(22U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(180U);
    msg.seq = 21622U;
    msg.value = 90U;
    msg.error.assign("VRWIDQMIIMLHCSIUGKXIMYIHMWROEXPPRBUWSGCJOGDRTQJEJNFXTJMSKGXCOCRCATLPHOWYBKUOIIVEDRFPXLNBJPZBVPQHMFYQTCLDNDFFHFUPSJAMOUBTUEBVCHENCAWSVEDIQHZZUQAXZLUXQENFKWYKMVDQFANLKMTDNYNKAD");

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
    msg.setTimeStamp(0.475631866494);
    msg.setSource(10732U);
    msg.setSourceEntity(198U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(73U);
    msg.seq = 20508U;
    msg.value = 234U;
    msg.error.assign("QVNCNCXGPLUCTHHJLOXRDREYFTPJMXWHADVRYYUAHOONVSPQMWQELESBKEUGGLOHCNAVJWKLBRDCEHIDLZQZIWYXOBXBSJOVMDUZPYPAXGMZLXTJFLXQAZQSZIOYMOGQIKUTYFZCGQRR");

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
    msg.setTimeStamp(0.631118333783);
    msg.setSource(13464U);
    msg.setSourceEntity(252U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(186U);
    msg.seq = 13662U;
    msg.sys.assign("DPQXWQEYGVMKDHKAKNJIORDJLSLNTNDG");
    msg.value = 0.482551763261;

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
    msg.setTimeStamp(0.426010668563);
    msg.setSource(35347U);
    msg.setSourceEntity(143U);
    msg.setDestination(48875U);
    msg.setDestinationEntity(92U);
    msg.seq = 15960U;
    msg.sys.assign("XSTKIBORPKKMVOPDZKAGXIQBVEGNUFHEUOWPCNOFRBYMSNVGRQUZFULCXDEYRRAWYKLEFQPBWLZBOKAJFCPFHRHIPSMMJIDGYEABMDTMFWCGXZYNTFPFHGANNOYWKGYIPCAVROCRSUQUZNOJXEDSMTIQZBUBECCASLS");
    msg.value = 0.243573935776;

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
    msg.setTimeStamp(0.161105469967);
    msg.setSource(54052U);
    msg.setSourceEntity(235U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(242U);
    msg.seq = 29615U;
    msg.sys.assign("LYUTJFXZZMKAOFXAFOLAIKYIGKEHCUCOGFWLRSTNUTDVEGUKEXMNGJUDGMYGBWUFFUCEIYBSRAZHGDVWLUOYRQLAMNMEOYRJJVCQDSNPATFXEVBPZJASLTHSWNQNLKKXBB");
    msg.value = 0.789224297737;

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
    msg.setTimeStamp(0.872091212114);
    msg.setSource(33233U);
    msg.setSourceEntity(193U);
    msg.setDestination(39262U);
    msg.setDestinationEntity(181U);
    msg.action = 61U;
    msg.longain = 0.861109911182;
    msg.latgain = 0.819406886753;
    msg.bondthick = 3226593518U;
    msg.leadgain = 0.685400859588;
    msg.deconflgain = 0.844755363751;

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
    msg.setTimeStamp(0.371320535245);
    msg.setSource(44367U);
    msg.setSourceEntity(110U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(150U);
    msg.action = 54U;
    msg.longain = 0.206611046685;
    msg.latgain = 0.115793221305;
    msg.bondthick = 4077613003U;
    msg.leadgain = 0.902906475693;
    msg.deconflgain = 0.508922258232;

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
    msg.setTimeStamp(0.968475216419);
    msg.setSource(43073U);
    msg.setSourceEntity(238U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(111U);
    msg.action = 8U;
    msg.longain = 0.308016938477;
    msg.latgain = 0.698046267591;
    msg.bondthick = 2245453970U;
    msg.leadgain = 0.718883796798;
    msg.deconflgain = 0.574435513528;

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
    msg.setTimeStamp(0.449053267807);
    msg.setSource(50821U);
    msg.setSourceEntity(187U);
    msg.setDestination(53161U);
    msg.setDestinationEntity(202U);
    msg.err_mean = 0.629934831747;
    msg.dist_min_abs = 0.350106143342;
    msg.dist_min_mean = 0.165275909329;

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
    msg.setTimeStamp(0.554139257244);
    msg.setSource(20497U);
    msg.setSourceEntity(181U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(72U);
    msg.err_mean = 0.148962037062;
    msg.dist_min_abs = 0.0601222305845;
    msg.dist_min_mean = 0.632440622328;

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
    msg.setTimeStamp(0.255070352794);
    msg.setSource(60899U);
    msg.setSourceEntity(228U);
    msg.setDestination(3097U);
    msg.setDestinationEntity(184U);
    msg.err_mean = 0.0235096431634;
    msg.dist_min_abs = 0.0153157965321;
    msg.dist_min_mean = 0.229209200062;

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
    msg.setTimeStamp(0.644940716139);
    msg.setSource(24995U);
    msg.setSourceEntity(249U);
    msg.setDestination(42300U);
    msg.setDestinationEntity(213U);
    msg.action = 69U;
    msg.lon_gain = 0.658478891726;
    msg.lat_gain = 0.48835632969;
    msg.bond_thick = 0.641968130572;
    msg.lead_gain = 0.00639256938386;
    msg.deconfl_gain = 0.136429460964;
    msg.accel_switch_gain = 0.214746939044;
    msg.safe_dist = 0.918381809351;
    msg.deconflict_offset = 0.351842168622;
    msg.accel_safe_margin = 0.30578821119;
    msg.accel_lim_x = 0.218448028466;

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
    msg.setTimeStamp(0.0306047132066);
    msg.setSource(40627U);
    msg.setSourceEntity(65U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(121U);
    msg.action = 128U;
    msg.lon_gain = 0.198480946622;
    msg.lat_gain = 0.85460268305;
    msg.bond_thick = 0.0501499214915;
    msg.lead_gain = 0.362193225529;
    msg.deconfl_gain = 0.171377288386;
    msg.accel_switch_gain = 0.475328835419;
    msg.safe_dist = 0.77574221993;
    msg.deconflict_offset = 0.318065180029;
    msg.accel_safe_margin = 0.801263147826;
    msg.accel_lim_x = 0.171866473462;

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
    msg.setTimeStamp(0.352060617409);
    msg.setSource(7764U);
    msg.setSourceEntity(96U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(219U);
    msg.action = 242U;
    msg.lon_gain = 0.915211978792;
    msg.lat_gain = 0.79362693153;
    msg.bond_thick = 0.0854337049426;
    msg.lead_gain = 0.374688762527;
    msg.deconfl_gain = 0.0474162164408;
    msg.accel_switch_gain = 0.0388935607671;
    msg.safe_dist = 0.99762236421;
    msg.deconflict_offset = 0.143170883117;
    msg.accel_safe_margin = 0.188594655031;
    msg.accel_lim_x = 0.978204927485;

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
    msg.setTimeStamp(0.351597108322);
    msg.setSource(13068U);
    msg.setSourceEntity(65U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(10U);
    msg.type = 167U;
    msg.op = 166U;
    msg.err_mean = 0.560729093826;
    msg.dist_min_abs = 0.235341130677;
    msg.dist_min_mean = 0.595284196941;
    msg.roll_rate_mean = 0.624883576415;
    msg.time = 0.0549855207365;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 110U;
    tmp_msg_0.lon_gain = 0.274243551325;
    tmp_msg_0.lat_gain = 0.673383491961;
    tmp_msg_0.bond_thick = 0.995902823574;
    tmp_msg_0.lead_gain = 0.932796149283;
    tmp_msg_0.deconfl_gain = 0.762450494307;
    tmp_msg_0.accel_switch_gain = 0.584160557402;
    tmp_msg_0.safe_dist = 0.801507689317;
    tmp_msg_0.deconflict_offset = 0.63955946152;
    tmp_msg_0.accel_safe_margin = 0.744593049389;
    tmp_msg_0.accel_lim_x = 0.0250245851094;
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
    msg.setTimeStamp(0.375765221626);
    msg.setSource(45197U);
    msg.setSourceEntity(234U);
    msg.setDestination(9467U);
    msg.setDestinationEntity(14U);
    msg.type = 90U;
    msg.op = 132U;
    msg.err_mean = 0.813431884818;
    msg.dist_min_abs = 0.912960068557;
    msg.dist_min_mean = 0.312014051467;
    msg.roll_rate_mean = 0.740698600029;
    msg.time = 0.802174130618;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 102U;
    tmp_msg_0.lon_gain = 0.778360585466;
    tmp_msg_0.lat_gain = 0.891554664036;
    tmp_msg_0.bond_thick = 0.0672843425359;
    tmp_msg_0.lead_gain = 0.373346424069;
    tmp_msg_0.deconfl_gain = 0.235822612233;
    tmp_msg_0.accel_switch_gain = 0.764506847118;
    tmp_msg_0.safe_dist = 0.40137023796;
    tmp_msg_0.deconflict_offset = 0.938242936788;
    tmp_msg_0.accel_safe_margin = 0.685753783824;
    tmp_msg_0.accel_lim_x = 0.863394868494;
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
    msg.setTimeStamp(0.785904361391);
    msg.setSource(4524U);
    msg.setSourceEntity(199U);
    msg.setDestination(30086U);
    msg.setDestinationEntity(73U);
    msg.type = 106U;
    msg.op = 235U;
    msg.err_mean = 0.563521810025;
    msg.dist_min_abs = 0.573183232826;
    msg.dist_min_mean = 0.884652868552;
    msg.roll_rate_mean = 0.293855035159;
    msg.time = 0.939916797657;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 185U;
    tmp_msg_0.lon_gain = 0.845437091309;
    tmp_msg_0.lat_gain = 0.353453186811;
    tmp_msg_0.bond_thick = 0.607734057859;
    tmp_msg_0.lead_gain = 0.668221466992;
    tmp_msg_0.deconfl_gain = 0.265479737664;
    tmp_msg_0.accel_switch_gain = 0.232238946377;
    tmp_msg_0.safe_dist = 0.564744559064;
    tmp_msg_0.deconflict_offset = 0.0716261182378;
    tmp_msg_0.accel_safe_margin = 0.432597651522;
    tmp_msg_0.accel_lim_x = 0.509026554803;
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
    msg.setTimeStamp(0.293454859779);
    msg.setSource(63857U);
    msg.setSourceEntity(25U);
    msg.setDestination(48593U);
    msg.setDestinationEntity(118U);
    msg.uid = 123U;
    msg.frag_number = 31U;
    msg.num_frags = 138U;
    const char tmp_msg_0[] = {-43, 85, -108, 125, -91, 108, 55, -37, 107, 89, 14, 7, -123, -82, -27, -118, 104, 12, -65, 93, 26, 2, -31, 55, 120, 23, 126, -101, -83, -28, 52, 19, 104, -13, -50, -10, 113, 60, -74, 24, -99, -12, 52, 8, 23, -14, 23, -19, -8, 115, 59, 68, 54, -15, 100, -31, -71, 61, -115, 95, 17, -20, 124, 45, -31, -46, 38, -76, -3};
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
    msg.setTimeStamp(0.359352928971);
    msg.setSource(85U);
    msg.setSourceEntity(147U);
    msg.setDestination(21407U);
    msg.setDestinationEntity(254U);
    msg.uid = 10U;
    msg.frag_number = 52U;
    msg.num_frags = 83U;
    const char tmp_msg_0[] = {108, 105, 58, 13, 15, -71, 86, 25, -117, 107, -47, 37, -27, 63, -56, -18, -40, -67, 33, -67, -14, 42, -11, -5, -98, -1, 108, -121, 85, -69, 10, 8, -28, -126, -124, -50, -57, -96, 10, -100, -94, -47, -89, 28, -108, 63, 61, 99, 8, 22, 40, 27, -36, 47, -113, -104, 6, 36, 71, 102, -9, -56, 40, -112, -59, 0, 108, -77, 124, -86, 35, 34, 54, -1, -127, 116, -20, 119, 97, 56, -99, 123, 118, -59, -54, 108, -24, -47, -34, 43, 89, 90, 45, -6, 72, 8, -102, 5, -63, 8, -122, -85, -66, -114, 28, 113, 46, -34, -56, -10, 30, 75, -88, 73, -59, -124};
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
    msg.setTimeStamp(0.55070304625);
    msg.setSource(45806U);
    msg.setSourceEntity(179U);
    msg.setDestination(165U);
    msg.setDestinationEntity(201U);
    msg.uid = 82U;
    msg.frag_number = 176U;
    msg.num_frags = 209U;
    const char tmp_msg_0[] = {-103, 44, 33, -86, -23, 123, -44, 120, -48, -108, 74, 125, -39, -15, -104, 114, -53, 28, -8, -97, -102, 92, -64, -98, -40, 85, -87, -88, -123, 57, 17, -117, -7, 4, 3, -83, -20, -126, -9, 70, -10, -46, -93, -55, -60, 123, 124, 19, 102, -80, 89, -72, -115, 34, -62, 119, 114, -46, 8, 9, 113, 122, 65, 71, 112, -79, 31, 2, -28, 68, 9, 59, 42, 116, -78, 90, 50, -93, -23, 35, 42, -28, -116, 11, -106, -16, -26, 83, 60, 115, 17, 46, 107, -101, 108, 107, -83, -73, 116, 40, 48, -128, -127, 23, 95, 30, 46, -2, 120, -90, 54, 70, 69, 74, 86, -27, -111, -71, 8, -79, 12, 22, 83, 5, -32, 25, 118, -103, 79, 106, 14, 29, 41, -110, -34, -35, 52, -107, -41, -47, 25, -57, 118, 54, 84, 98, -122, -122, -87, 102, -76, 98, 80, -35, 1, 47, 24, 68, 98, 67, 87, -110, 95, 78, 27, 6, 40, 93, -94, 20, -80, -111, 13, -73, -90, 61, -46, 22, 9};
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
    msg.setTimeStamp(0.0978132986208);
    msg.setSource(42622U);
    msg.setSourceEntity(227U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(179U);
    msg.content_type.assign("UAYGZRWIQFGVTFPKQMCAFIWSIXBXPHQOYHWDNIJDGSRNTSYSSOMAOWIBAEOWXZIFRLTZLLEXIEROMBPWKYSTRHUYJKBBFAVCWUJXNDZJYWKTRTWXMCFZKQSVDLHJFPSDXNDJUSNEGXULPKDHVFDEMHAUKBQOLFZECDUCJXAMOULYCMWQTQNYCVZMGEOEPRBVBVGHCGUQQRCLQIVUBIJVRGP");
    const char tmp_msg_0[] = {125, -32, -14, -98, 0, 5, -7, -12, 16, 125, -29, 17, 95, -114, -65, 107, -83, 7, -103, -87, 92, 28, -34, 54, 10, -3, 90, 34, 96, 79, 102, -126, 107, -41, -48, -90, -70, -12, -37, 14, -41, 82, 7, -19, 109, 113, -47, 24, -46, -11, -6, -114, 67, -19, -123, -51, 72, 54, -126, 95, -26, 108, 11, -126, 42, 17, 99, -7, -72, 66, -43, -12, -12, 43, -73, -21, -39, -119, 113, -7, 62, -16, 90, -27, 12, -105, -15, -35, -100, 80, 58, -125, 27, -43, -92, -94, -71, 69, -36, 89, 97, -58, -73, 52, -92, -37, -38, -41, 67, -112, -34, 12, 2, 120, 1, 33, -47, 21, -63, 125, -111, -23, -32, -85, 65, -57, 74, -33, -23, 80, -96, -80, -88, -21, 46, 97, 12, -25, 81, 114, -118, 49, 27, 21, -60, 39, 30, 25, 62, 106, 27, -82, 111, -115, 18, 94, -90, 11, -87, -9, 41, -19, 19, -119, 102, 108, -53, 20, 66, -96, 22, 99, 34, 4, -7, -55, -62, 122, 99, 124, -3, 34, 86, 77, 65, 92, -16, -35, 57, 40, 58, 38, 45, -51, -16, -124, 83, -11, -60, 104, 5, -65, -69, -9, -1, 22, 50, 13, 60, -25, -42, 51, 8, 23, 48, -70, 105, 64, -57, -74, -26, -14, 85, -99, -10, -72, 62, 52, 125, -13};
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
    msg.setTimeStamp(0.661921081595);
    msg.setSource(64400U);
    msg.setSourceEntity(152U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("MLZYEKKPAPDGSNDBYDIMTUUVOXNWUNGJCGIOGTARRARDIUANCFPHDXRDQXSDEZYQLPVJAQZFJBIIBHMGGCIUIRTJAHLLYHEFXCFWHZSWFXMUNLOENBFPKEETHNHYQWVPMAMYVZGSJVTPITVFYCOQJEOCZJRUSWWTWKJVMHMBELZPTREBSHVLINLFSFJOXMDKEOAYKCSBHWDOJXKRNXAUZ");
    const char tmp_msg_0[] = {-9, 115, -72, 114, -101, 0, -19, -97, 115, -92, -33, -87, 22, 56, -126, -13, 44, -15, -113, -2, 60, 47, 77, -21, -3, 111, -70, 57, -117, 59, 77, -73, -58, -85, 49, 89, -119, -24, 31, 109, -105, -76, -17, 120, 94, 88, -119, -51, -127, 50, 105, -97, -20, -26, -43, -19, 100, -22, 93};
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
    msg.setTimeStamp(0.147966589082);
    msg.setSource(54940U);
    msg.setSourceEntity(34U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(101U);
    msg.content_type.assign("TUBIBYMQZFWPOXLELNBFHJREYDOFDCWBNOKXIIPSUTYYODWWOQCYMUVVKXRNQMMRSVRRGEZPBDBWNYUBFFJWYRYGDLCLEOPUSDJJKOWEJFQUSMIAVLVLHNDCGOGABCMOAXXZWLQKEDLMPKIHVFPTFREHNCTBQQTFTXSPAGFGVIXSJBJTOAPGCNZX");
    const char tmp_msg_0[] = {-109, -47, -55, -6, -36, -108, 99, 21, -41, -9, -103, -32, 43, -56, -57, -103, 58, 108, 56, 17, -6, 93, -59, -11, -9, 73, 103, -9, -107, -57, 16, -111, -108, -122, 96, 125, -36, 42, -103, 117, -118, 58, -64, 20, 61, -113, 87, 64, 33, 95, 98, -90, 112, -14, -56, -117, -1, -79, 116, 3, 57, -25, 58, -15, 58, 50, -128, 2, 103, 110, 16, -65, -54, -103, 67, -104, -103, -47, -46, -94, -83, 38, -85, 14, -92, 41, -21, 23, -45, 85, -45, -57, -68, 40, -57, -42, 26, -93, 18, -99, 56, -69, -4, 118, -51, 102, -103, 120, 50, -70, 93, 87, 5, 25, 38, 79, 14, -117, -109, -94, 89, 24, -68, -105, -76, -82, -3, -112, -61, -91, -128, -13, 62, 7, 13, 43, 41, 78, 78, -65, -106, 82, 60, -30, 110, -18, -24, 77, -104, -59, -24, 86, 80, -112, 23, 54, -41, 37, 123, -107, 104, 85, -120, 2, 46, -61, 26, 116, 92, 120, -66, 53, 16, -46, -121, 59, -88, 63, 17, 108, 36, -104, -49, -12, -33, -68, 33, 6, 121, 8, 3, -71, -45};
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
    msg.setTimeStamp(0.419902439756);
    msg.setSource(41741U);
    msg.setSourceEntity(15U);
    msg.setDestination(34866U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.714557897598);
    msg.setSource(54999U);
    msg.setSourceEntity(78U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.144843518972);
    msg.setSource(63213U);
    msg.setSourceEntity(250U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.921618698712);
    msg.setSource(43173U);
    msg.setSourceEntity(194U);
    msg.setDestination(30494U);
    msg.setDestinationEntity(249U);
    msg.target = 15969U;
    msg.bearing = 0.859279539464;
    msg.elevation = 0.735030711261;

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
    msg.setTimeStamp(0.111736541876);
    msg.setSource(29806U);
    msg.setSourceEntity(125U);
    msg.setDestination(34422U);
    msg.setDestinationEntity(43U);
    msg.target = 33817U;
    msg.bearing = 0.608681533866;
    msg.elevation = 0.708185631241;

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
    msg.setTimeStamp(0.152748430098);
    msg.setSource(9258U);
    msg.setSourceEntity(26U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(46U);
    msg.target = 40254U;
    msg.bearing = 0.513096314765;
    msg.elevation = 0.161345949907;

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
    msg.setTimeStamp(0.739824515883);
    msg.setSource(28305U);
    msg.setSourceEntity(134U);
    msg.setDestination(27482U);
    msg.setDestinationEntity(237U);
    msg.target = 427U;
    msg.x = 0.36594884096;
    msg.y = 0.973409197773;
    msg.z = 0.429628488475;

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
    msg.setTimeStamp(0.314592233641);
    msg.setSource(7498U);
    msg.setSourceEntity(212U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(242U);
    msg.target = 15602U;
    msg.x = 0.177547966091;
    msg.y = 0.972751783671;
    msg.z = 0.851049312032;

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
    msg.setTimeStamp(0.364471117969);
    msg.setSource(4661U);
    msg.setSourceEntity(252U);
    msg.setDestination(24348U);
    msg.setDestinationEntity(114U);
    msg.target = 49106U;
    msg.x = 0.0189990763904;
    msg.y = 0.12284517868;
    msg.z = 0.621360630206;

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
    msg.setTimeStamp(0.00583614851064);
    msg.setSource(39582U);
    msg.setSourceEntity(67U);
    msg.setDestination(20025U);
    msg.setDestinationEntity(88U);
    msg.target = 15789U;
    msg.lat = 0.138916276082;
    msg.lon = 0.17454391035;
    msg.z_units = 92U;
    msg.z = 0.731941976823;

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
    msg.setTimeStamp(0.0638848723919);
    msg.setSource(17588U);
    msg.setSourceEntity(102U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(153U);
    msg.target = 44579U;
    msg.lat = 0.502412526665;
    msg.lon = 0.117632094761;
    msg.z_units = 169U;
    msg.z = 0.556667312131;

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
    msg.setTimeStamp(0.382778702319);
    msg.setSource(43432U);
    msg.setSourceEntity(154U);
    msg.setDestination(12378U);
    msg.setDestinationEntity(177U);
    msg.target = 6830U;
    msg.lat = 0.617654166759;
    msg.lon = 0.357667740375;
    msg.z_units = 87U;
    msg.z = 0.52298440148;

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
    msg.setTimeStamp(0.821223869787);
    msg.setSource(45039U);
    msg.setSourceEntity(223U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(122U);
    msg.locale.assign("BOQBDQKHCSGNEMUXNSTDUVCFBPQNHXQAIQHRGDEPCBOJZVPZPSZXYIFJYYRQJMUTLRTHBLKSVMTAZTJSSREALVYKDAMFHLQNPWXUJQGGIGCQCMXXTUOHIWXZKHLAKDTODHWFMWPPTIAGGIXSYDOFJDSEYBNDOLYUZGIVJKWIHJKAVUFTOJVVYKESECOOKRWAXNPTAZRNLZEWEPMCZICAJFNQ");
    const char tmp_msg_0[] = {-98, -36, -76, 113, 101, -65, -83, -36, 109, 68, -82, -3, -49, -13, 98, -113, 23, -12, 112, -127, 19, -18, -38, 111, -105, -46, -56, -32, 104, -97, -96, 5, 10, 12, 74, -13, 19, 14, -114, 19, 64, 21, -70, 80, 34, -90, -122, -49, -4, 5, -5, 55, -13, 4, 10, 56, -29, 29, 29, -6, -12, 101, -102, -92, -44, 36, 121, -25, -14, 69, -48, 21, -121, -126, 35, 74, -80, -69, -14, -42, -22, -71, 87, 120, 81, -29, 101, -73, -85, 73, -21, 85, 70, 11, -119, -122, 45, -68, 115, 23, 98, 55, -93, 99, -59, -110, 72, -22, -42, 66, -59, -111, -16, 78, 110, -3, 103, 14, -2, -99, 98, 19, 36, -80, -32, 17, 110, -29, -117, -41, 4, 65, 45, 106, 41, -76, 66, -10, 78, 82, 32, -36, -61, -100, -19, 0, -109, 0};
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
    msg.setTimeStamp(0.0109277956408);
    msg.setSource(8590U);
    msg.setSourceEntity(27U);
    msg.setDestination(43643U);
    msg.setDestinationEntity(201U);
    msg.locale.assign("EEZWUQBLARNXPSAXFFTFQMKGNBDALYBHKRPOQKAEQMBSBCCTHAKEGYMWVWUYOZAGUMPJIZXNLMOHSWCJQQRXCGUGJXBMQJYTSWYFDGLNCJHBIPUUOMXOWMZREETVRECHHDPTLIVIWFVUPDPZTKOJIOJIIBQPGANEWNLNYN");
    const char tmp_msg_0[] = {-35, 78, -11, -10, 96, 23, -20, -49, -8, 42, 66, 98, -18, 31, -7, 1, 120, 61, -94, 19, 112, 15, -36, 6, -84, 51, 117, -122, -113, -41, 81, 81, -62, 89, -97, 60, -100, -18, 125, -36, -67, 21, -69, 44, 73, -83, 43, 2, -68, 53, 65, 124, -77, 85, -19, 22, -120, -62, -37, 59, 48, -27, -114, -62, -86, 59, -19, -128, 87, 67, 110, 82, -52, -67, -61, 102, 37, -49, 3, -12, 88, -15, 86, -41, 100, 85, -55, 89, -53, 14, 0, 77, 108, 69, 55, -8, -47, 77, 107, -115, -123, 64, 5, -66, -14, -90, 57, -117, -63, -85, -61, -100, 125, 104, 27, 79, -15, -39, 62, 83, 108, 116, -82, 14, 49, -34, -127, 39, 35, 69, 55, -125, 28, 63, -119, 28, -113, -65, -21, 12, -27, 86, -113, 99, 5, -65, -119, 116, -84, -75, -90, 28, 95, -104, -25, 13, -110, 0, -124, -110, -13, -25, 9, 101, 19, -29, 23, -20, -111, -2, 26, 110, 96, 2, -76, 113, -26, -5, 64, 0, 44, -101, 50, 88, 96, -15, -88, -93, 79, 18, -105, -6, 126, -9, 35, -89};
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
    msg.setTimeStamp(0.295209338664);
    msg.setSource(15903U);
    msg.setSourceEntity(209U);
    msg.setDestination(53769U);
    msg.setDestinationEntity(225U);
    msg.locale.assign("SVCMCHGQIZVPYULOPKIDKKNUEIVTTDMLETEJJCFDFDHVTKTUHPWYOTOBIJGDCKQZBWYMFMUQPQVCLZPLXGMMFASDGRZSKLNWPSNAYHRQLTMZVGCWOJFYEBWNSWVLGBOVSWMXWVWFZLEQTXDXTZDTHOAIVCFNBGXJYFOEWQIULBOASJJCR");
    const char tmp_msg_0[] = {88, 58, 24, 107, -22, 34, 33, -117, 53, -56, 58, -86, 21, -22, 44, 61, 66, -32, -71, -34, 82, -20, 8, -66, -56, -124, 85, 62, -64, -86, 78, 61, -107, 116, 109, 63, -51, -66, 91, 73, 66, 83, 15, 107, 126, -21, 58, 71, -109, 45, -117, 92, 12, 110, -85, -121, -70, 115, -14, 15, -102, -88, 60, 29, 61, 50, 71, -55, 62, -3, -73, 49, -107, -111, 93, 109, -85, 7, 35, 75, 45, 108, 52, 110, 104, 35, -83, 17, -93, 17, -122, -102, -88, -128, -10, 57, -52, 71, -109, -64, 56, 48, 59, 79, -75, -67, 6, -53, -27, 15, 0, 14, -18, 99, -49, 91, -74, 1, 58, -62, 104, 101, -104, 21, -123, 17, 120, 45, -123, -94, -37, 116, 121, 12, 86, -28, -97, -67, 1, 10, -16, 102, -122, 79, -107, -9, 35, 15, -14, 67, 36, -29, -66, 110, -73, 30, 34, -65, 92, 66};
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
    msg.setTimeStamp(0.167248554111);
    msg.setSource(17305U);
    msg.setSourceEntity(90U);
    msg.setDestination(7725U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.139250959828);
    msg.setSource(58902U);
    msg.setSourceEntity(19U);
    msg.setDestination(6021U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.443098652781);
    msg.setSource(6599U);
    msg.setSourceEntity(112U);
    msg.setDestination(37379U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.137465846966);
    msg.setSource(8980U);
    msg.setSourceEntity(91U);
    msg.setDestination(41788U);
    msg.setDestinationEntity(72U);
    msg.camid = 30U;
    msg.x = 48560U;
    msg.y = 19924U;

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
    msg.setTimeStamp(0.959511497926);
    msg.setSource(2992U);
    msg.setSourceEntity(38U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(131U);
    msg.camid = 145U;
    msg.x = 25541U;
    msg.y = 51655U;

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
    msg.setTimeStamp(0.668461294265);
    msg.setSource(11805U);
    msg.setSourceEntity(98U);
    msg.setDestination(55301U);
    msg.setDestinationEntity(98U);
    msg.camid = 204U;
    msg.x = 14353U;
    msg.y = 48254U;

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
    msg.setTimeStamp(0.701601055883);
    msg.setSource(33793U);
    msg.setSourceEntity(159U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(9U);
    msg.camid = 47U;
    msg.x = 39317U;
    msg.y = 18319U;

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
    msg.setTimeStamp(0.589463620242);
    msg.setSource(64796U);
    msg.setSourceEntity(212U);
    msg.setDestination(39727U);
    msg.setDestinationEntity(37U);
    msg.camid = 173U;
    msg.x = 4373U;
    msg.y = 4071U;

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
    msg.setTimeStamp(0.76060458196);
    msg.setSource(32323U);
    msg.setSourceEntity(78U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(6U);
    msg.camid = 177U;
    msg.x = 59541U;
    msg.y = 52054U;

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
    msg.setTimeStamp(0.0352281128106);
    msg.setSource(7517U);
    msg.setSourceEntity(168U);
    msg.setDestination(47977U);
    msg.setDestinationEntity(222U);
    msg.tracking = 119U;
    msg.lat = 0.283146944405;
    msg.lon = 0.487110125534;
    msg.x = 0.418985344047;
    msg.y = 0.329539737184;
    msg.z = 0.389631588639;

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
    msg.setTimeStamp(0.960468744676);
    msg.setSource(60438U);
    msg.setSourceEntity(62U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(83U);
    msg.tracking = 138U;
    msg.lat = 0.590979402058;
    msg.lon = 0.334518591343;
    msg.x = 0.695472861757;
    msg.y = 0.563508662452;
    msg.z = 0.0587844251897;

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
    msg.setTimeStamp(0.595369430782);
    msg.setSource(49883U);
    msg.setSourceEntity(88U);
    msg.setDestination(51043U);
    msg.setDestinationEntity(205U);
    msg.tracking = 152U;
    msg.lat = 0.385620354631;
    msg.lon = 0.218373906897;
    msg.x = 0.873455078982;
    msg.y = 0.557839236519;
    msg.z = 0.0422557834324;

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
    msg.setTimeStamp(0.67782306592);
    msg.setSource(35286U);
    msg.setSourceEntity(119U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(149U);
    msg.target.assign("UKPSOUIQGEJBZVRYRMCAOUXKGJZKERPMOYHABOPFGTIBZKGNWMHLQOITADKXNLPLEPWJRALVAUSHYVUDTWZLUQZISNGAXLTZTCNHVNXKNEYRJFSUTMTTFDBCMEBJSAKRMYOGBQUWHASDQAGDBEDIJKQFXOGMCSCXNPUHEWNYJTRLDPNCSZEVJJBCBHVMXAOXLQEWPYRMBPWKQGCQZCPXFTDDNIDHOLVZWIEYYLJCVSYFVZIIFVWHUKFRFGXOHF");
    msg.lbearing = 0.746615872842;
    msg.lelevation = 0.0184941279085;
    msg.bearing = 0.850302458378;
    msg.elevation = 0.180110016475;
    msg.phi = 0.771472108165;
    msg.theta = 0.742972140032;
    msg.psi = 0.851697048865;
    msg.accuracy = 0.542717099212;

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
    msg.setTimeStamp(0.93668163742);
    msg.setSource(8134U);
    msg.setSourceEntity(84U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(75U);
    msg.target.assign("RULJFDNKHJOGFQNRFCUFIGMJWWBZTQLGTHSQPUQCHBXEDJRPTIDXSYMHACDEKJYVHSNOVDNODGNERZBICHCYGLMKQXGUWFFNSVMGUVVPZBJGVYWUFBOTPXQIOAKEYZVISZBHLITRKDVZKJYCVBETSACBCPAKMUKXKURBTAJSADHOPE");
    msg.lbearing = 0.989370088809;
    msg.lelevation = 0.578777791969;
    msg.bearing = 0.244918968321;
    msg.elevation = 0.314844998626;
    msg.phi = 0.643424477957;
    msg.theta = 0.365456206907;
    msg.psi = 0.407992251221;
    msg.accuracy = 0.991945929945;

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
    msg.setTimeStamp(0.12962301953);
    msg.setSource(25511U);
    msg.setSourceEntity(158U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(218U);
    msg.target.assign("WXJLJQEAZECOCPFHJAMEQAYLZDTBDJZHYMIKOSUGHSPUOYLXOGDHJVLESTPEUXMWRCDFDNLRTY");
    msg.lbearing = 0.564515726095;
    msg.lelevation = 0.970741213796;
    msg.bearing = 0.882832370263;
    msg.elevation = 0.993485260764;
    msg.phi = 0.754595285204;
    msg.theta = 0.755164885744;
    msg.psi = 0.421129229724;
    msg.accuracy = 0.708267944336;

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
    msg.setTimeStamp(0.859656460662);
    msg.setSource(60565U);
    msg.setSourceEntity(70U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(156U);
    msg.target.assign("NMKVAMRYFYYMGSWFUJMBYBGKCJNHDVRJSZDGOOCEZCPSSXNVLPAWFHUEQIGFPRIDLKXXGDWB");
    msg.x = 0.418795881775;
    msg.y = 0.817788524146;
    msg.z = 0.898207509196;
    msg.n = 0.323515747995;
    msg.e = 0.8053083022;
    msg.d = 0.767017420348;
    msg.phi = 0.331816260923;
    msg.theta = 0.910078242156;
    msg.psi = 0.615013932433;
    msg.accuracy = 0.175925187115;

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
    msg.setTimeStamp(0.855361377506);
    msg.setSource(11435U);
    msg.setSourceEntity(149U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(209U);
    msg.target.assign("BNCYUMGYQVMBETFXEDNWWXUICLLZDCYRGTJJVFYNLWAJXYXTURABIERCNSTIPXSASDNRHVOGKYMPMZJLPYDTPHXSFQQIQBLLHISZKTSJADPAZMEXUFFNVOKBHDPOKEBZGDHNDAEMANNPEBRGEKFYPKQKOERUTAOZCJMGQHCOVLJJABLUXZVNZDVGLTRSTWWEMODHG");
    msg.x = 0.980845801449;
    msg.y = 0.918259659844;
    msg.z = 0.924284332007;
    msg.n = 0.354340957754;
    msg.e = 0.810258252189;
    msg.d = 0.425245401744;
    msg.phi = 0.486192160926;
    msg.theta = 0.627450365026;
    msg.psi = 0.934074748625;
    msg.accuracy = 0.552123335704;

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
    msg.setTimeStamp(0.91934512923);
    msg.setSource(38478U);
    msg.setSourceEntity(54U);
    msg.setDestination(32665U);
    msg.setDestinationEntity(25U);
    msg.target.assign("OEDPCAMFZPASBAJBSUXPPPYOUBUVZCEYHZGUANQUIEAEIKRKPBGHDDIYLEHQCQIJKYXZGNHDQBWOUZDSGBIAVTFZWLXMXRMGOJTEAMTNNSBWMUIXSQZJWCODVQKWPOZHJNLTRFMEGMAVYHWYQCVFXSROEKZWYVIJFAVMJCSGHIQRXYFRSSFVRNDUUZLKRGLJFEXLOBBTBCUWFW");
    msg.x = 0.262476479772;
    msg.y = 0.953205416825;
    msg.z = 0.939871178963;
    msg.n = 0.906587443665;
    msg.e = 0.683002576604;
    msg.d = 0.632026903251;
    msg.phi = 0.439928338084;
    msg.theta = 0.123450269371;
    msg.psi = 0.173910496879;
    msg.accuracy = 0.343198008673;

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
    msg.setTimeStamp(0.172804414709);
    msg.setSource(45124U);
    msg.setSourceEntity(146U);
    msg.setDestination(23507U);
    msg.setDestinationEntity(204U);
    msg.target.assign("ABXINBPLGWQXAKJGAXHRLGGSFPJUMKGVDUMLVTCLQJGFRBKQEUXGZPLHOYMJDMHNRINMIPZZYPUCWINZYARITLTJFCRFXEXOTTIQMYGECBEWQYSIBBLXKRMQUIYUVEWATCHOYRJBSHXCTWVJWLFDKRPYQAOGWNVCVFBCBHZVSDQYAUAPSXKILDDKFWNOOPDKOSKEYMZGPNMZEELPRQTSFUOOINNTSAFVHDSSCQAFJMUVVU");
    msg.lat = 0.674990685815;
    msg.lon = 0.0878823024306;
    msg.z_units = 166U;
    msg.z = 0.453860577488;
    msg.accuracy = 0.597742125626;

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
    msg.setTimeStamp(0.146035245954);
    msg.setSource(55828U);
    msg.setSourceEntity(213U);
    msg.setDestination(46848U);
    msg.setDestinationEntity(234U);
    msg.target.assign("PNHYBZMAASEYQIMESGRNGOBSJVYKCBRLXHQSFRVTQPWCCUXZVFZTRKNKILMACKYUFNN");
    msg.lat = 0.285210912194;
    msg.lon = 0.274735878604;
    msg.z_units = 247U;
    msg.z = 0.587406403233;
    msg.accuracy = 0.221531935857;

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
    msg.setTimeStamp(0.127186204149);
    msg.setSource(60351U);
    msg.setSourceEntity(247U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(222U);
    msg.target.assign("NJRJXDMBYKVUWDYDUBHVTEAANCKFKSHYFGRTORFUPLAQWCIWOXZOUILZVYHEGGCDPERQKOYBASEBAYEAMLZKO");
    msg.lat = 0.619958599257;
    msg.lon = 0.614309805539;
    msg.z_units = 153U;
    msg.z = 0.210289153473;
    msg.accuracy = 0.156403344915;

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
    msg.setTimeStamp(0.466301386075);
    msg.setSource(31223U);
    msg.setSourceEntity(162U);
    msg.setDestination(34613U);
    msg.setDestinationEntity(156U);
    msg.name.assign("YIGNGTECXQVSVKUXSBLRCLIJLBIJXHYLOBBEZPQQMPVTRFOAMGMKTJPSIUOEVVSHXAESXSORZPALEPYTNTFLFTSKOZVMGDILOYXUDNYDECFYHKMWWFFCXBJFUKJPDQJFAUTUNRGMMMDRNBZLGXJRWCONSGEIYPOVXPYOQEHQTADUNWAWUZQGEAQQDRDSZHNLKWVBIWLHRSKDAAKGBCFUYFHKAKBCZ");
    msg.lat = 0.728707323009;
    msg.lon = 0.607050667562;
    msg.z = 0.911407111751;
    msg.z_units = 128U;

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
    msg.setTimeStamp(0.131040403721);
    msg.setSource(3835U);
    msg.setSourceEntity(36U);
    msg.setDestination(7274U);
    msg.setDestinationEntity(43U);
    msg.name.assign("YVFHIEOWKQKETKWSCLKDNLRWXXGSYLKGEOUTRRQGKEGPOXPHMJPWTUWXWABBTYUMSCUOCGUYIKNYJJWWTPNQBJVYAQNXWRNWLBFAHIBQUXVGISFAHEOQZJPMRUMYVYHZVBCLCGTMQSQIMFNMZPGZCLUHGQQJAYSJEBZFJZFZDRZ");
    msg.lat = 0.185862963583;
    msg.lon = 0.103704005954;
    msg.z = 0.668551199765;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.309229914075);
    msg.setSource(23672U);
    msg.setSourceEntity(135U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(151U);
    msg.name.assign("JRUEUOBIJRECKLQMFZPAMNTWIAMGNVRULAGFONMWNPCLNKVEXSYSYITCTTYZHPGWJROXUDXSPXITBEPGUVETAHYVIKZSBSVMOTDLMPUVCZZXOBBNBGQJRNWZWJWMQSYHGKDKHJDGVSCQRDLGCXXLAYDJPKLIQTP");
    msg.lat = 0.179393935373;
    msg.lon = 0.81539497171;
    msg.z = 0.21657526468;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.118719529746);
    msg.setSource(28990U);
    msg.setSourceEntity(149U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(223U);
    msg.op = 65U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OBGPNVQJGQSVGFUXHEXXOMPHYSDIMMFFWEBAWFQCKNAPNWDQMHYDDXTLIRBBLWAYEJSGRXZMQDIPJKCONLPO");
    tmp_msg_0.lat = 0.401843598438;
    tmp_msg_0.lon = 0.115241859848;
    tmp_msg_0.z = 0.384108605065;
    tmp_msg_0.z_units = 8U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.415887135209);
    msg.setSource(48157U);
    msg.setSourceEntity(150U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(221U);
    msg.op = 37U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LIEYJTDYDULVNNFSWIWXLFENCOQOODSPUUCBXECSCLBNGRQZIZDGUGWRMCMQXORUOBYKLDPPRPUJAVKRY");
    tmp_msg_0.lat = 0.0948604887944;
    tmp_msg_0.lon = 0.591105089758;
    tmp_msg_0.z = 0.798964768389;
    tmp_msg_0.z_units = 15U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.784661385697);
    msg.setSource(27963U);
    msg.setSourceEntity(207U);
    msg.setDestination(58566U);
    msg.setDestinationEntity(116U);
    msg.op = 68U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ILZYHBOPPZVJMHOFKLWKQTHFMUPCXJGQPRHALQPSZCWAALGSABNEYYJUKDAJYDWHZUSXXLGRTWUIEYYUWCTIXPTFASOAGMSTJGNVOONBBSFZSBMLMQDFBIWKQGVJU");
    tmp_msg_0.lat = 0.0356919123154;
    tmp_msg_0.lon = 0.367744667291;
    tmp_msg_0.z = 0.580450626909;
    tmp_msg_0.z_units = 134U;
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
    msg.setTimeStamp(0.692550926004);
    msg.setSource(1688U);
    msg.setSourceEntity(88U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(152U);
    msg.value = 0.359689304709;
    msg.type = 183U;

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
    msg.setTimeStamp(0.967124255977);
    msg.setSource(28361U);
    msg.setSourceEntity(120U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(115U);
    msg.value = 0.239305346283;
    msg.type = 202U;

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
    msg.setTimeStamp(0.795376780099);
    msg.setSource(13136U);
    msg.setSourceEntity(183U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(102U);
    msg.value = 0.228243996211;
    msg.type = 247U;

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
    msg.setTimeStamp(0.390718698183);
    msg.setSource(46635U);
    msg.setSourceEntity(87U);
    msg.setDestination(47795U);
    msg.setDestinationEntity(39U);
    msg.value = 0.900575004334;

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
    msg.setTimeStamp(0.0928849425786);
    msg.setSource(16774U);
    msg.setSourceEntity(244U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(75U);
    msg.value = 0.970648981922;

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
    msg.setTimeStamp(0.507473972256);
    msg.setSource(12448U);
    msg.setSourceEntity(141U);
    msg.setDestination(61646U);
    msg.setDestinationEntity(118U);
    msg.value = 0.624540440995;

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

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.377459323232);
    msg.setSource(23737U);
    msg.setSourceEntity(158U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(126U);
    msg.timestamp_last_service = 0.36956726208;
    msg.time_next_service = 0.306740420748;
    msg.time_motor_next_service = 0.142313616138;
    msg.time_idle_ground = 0.529059656446;
    msg.time_idle_air = 0.78241901321;
    msg.time_idle_water = 0.0456093356931;
    msg.time_idle_underwater = 0.222772573652;
    msg.time_idle_unknown = 0.575385751209;
    msg.time_motor_ground = 0.0568969406705;
    msg.time_motor_air = 0.199220602604;
    msg.time_motor_water = 0.897266773389;
    msg.time_motor_underwater = 0.149760891415;
    msg.time_motor_unknown = 0.567083518942;
    msg.rpm_min = -4603;
    msg.rpm_max = -8753;
    msg.depth_max = 0.61497426865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.588990865086);
    msg.setSource(19495U);
    msg.setSourceEntity(143U);
    msg.setDestination(20393U);
    msg.setDestinationEntity(123U);
    msg.timestamp_last_service = 0.478267399238;
    msg.time_next_service = 0.866381784686;
    msg.time_motor_next_service = 0.234474519369;
    msg.time_idle_ground = 0.156935149899;
    msg.time_idle_air = 0.927005841103;
    msg.time_idle_water = 0.742924354101;
    msg.time_idle_underwater = 0.586373087685;
    msg.time_idle_unknown = 0.393337739935;
    msg.time_motor_ground = 0.546347487466;
    msg.time_motor_air = 0.967031328315;
    msg.time_motor_water = 0.423057197965;
    msg.time_motor_underwater = 0.497388593768;
    msg.time_motor_unknown = 0.379596100228;
    msg.rpm_min = 31823;
    msg.rpm_max = -25876;
    msg.depth_max = 0.0538709768323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.159978900342);
    msg.setSource(8828U);
    msg.setSourceEntity(131U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(217U);
    msg.timestamp_last_service = 0.137131621117;
    msg.time_next_service = 0.177066626956;
    msg.time_motor_next_service = 0.0344784779217;
    msg.time_idle_ground = 0.226809746076;
    msg.time_idle_air = 0.815667025739;
    msg.time_idle_water = 0.552769437311;
    msg.time_idle_underwater = 0.690063751392;
    msg.time_idle_unknown = 0.659717616172;
    msg.time_motor_ground = 0.977365253802;
    msg.time_motor_air = 0.0642061019126;
    msg.time_motor_water = 0.667425505475;
    msg.time_motor_underwater = 0.12982549385;
    msg.time_motor_unknown = 0.847965887894;
    msg.rpm_min = 15875;
    msg.rpm_max = -19090;
    msg.depth_max = 0.526969841692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.609502228298);
    msg.setSource(15282U);
    msg.setSourceEntity(133U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(212U);
    msg.severity = 185U;
    msg.text.assign("WZOIFDYGPCGVPYLHJOAEFGCZMIDPSZXRBYKZDGUJIWYOYFLHSPUXDHGIVGDCDMKSYIQTPBTSJLDVXIKLTOPZHKYFIEXRLCKICGHRPDTJLAOWVVOAKUVBAQENQZTDXLSEMKINQUXXSUNTBUTODBRUFFFRHHACPFKHEWMTJSQGVRGZWFBAJRJBMAYJNBTLZXEYQUMCZANXMSUFABEVNSRNYALVCZMPNNUJEMGKQCTJOXQPHRCENOIQWRSEWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.822981820421);
    msg.setSource(57069U);
    msg.setSourceEntity(102U);
    msg.setDestination(18788U);
    msg.setDestinationEntity(19U);
    msg.severity = 151U;
    msg.text.assign("KIJVFHRKLIWSSJHUCDFHJDAWLKBHXPZPOVZHUQWCBCKVWGGTYTNZTQGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0344619331309);
    msg.setSource(30069U);
    msg.setSourceEntity(151U);
    msg.setDestination(55580U);
    msg.setDestinationEntity(50U);
    msg.severity = 44U;
    msg.text.assign("KRNYWAGFLWZWAOIQWBQTTRZVIEBNRQDYWSVXHFMUQIUYJCVJDGSCALFRGZLKBFPFLBSWUJVHQDMZUTCMEYEPQWMEBPGJZTPJNGEAZYQSXYTOOUMPNWLPSPIDOTKMMDJOZLKIHRXYHOQEUWEGKFFCXNQCDUUCBTRIHKVBDTPONOMVPVLDEFARZCSGZXKKCFGNJLNEHHUHBCJJGEXFIKSXROVDAYRZBVJWDCHLKXAUAISIMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
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
