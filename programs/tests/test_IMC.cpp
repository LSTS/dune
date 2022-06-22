//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 76a184da55c4be90a9eee4f3c2d44e1a                            *
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
    msg.setTimeStamp(0.969662220865);
    msg.setSource(19501U);
    msg.setSourceEntity(102U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(122U);
    msg.state = 40U;
    msg.flags = 21U;
    msg.description.assign("HLJENWMJLBMGIZFYEOPTERDLJJZNDIBLRYCYVUFCYKISSUMKNRLJMOGBMDXNZGPRJBVFCJFQKFORFGHIPXWYLHSWDNSALDAT");

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
    msg.setTimeStamp(0.515996134003);
    msg.setSource(14935U);
    msg.setSourceEntity(153U);
    msg.setDestination(1392U);
    msg.setDestinationEntity(231U);
    msg.state = 27U;
    msg.flags = 19U;
    msg.description.assign("BQFHEMCKQOSRSBSGDKUENCLDVHWHGWEYEGUXOLVVQXTDPGRIBEIQAJWFIUEPGZSAVOCNQMGKZMTHITBQLZODZOZSKNKQPVLPPMFHLAHUUQZKRTWTGCTKAENJOJMJOBXWYDVYNPULVXJJZKHUXGWBNEIMJCZZMAIPNYRHNCJRQXSNWDRTCVXFKVRFLTMJMAIYEHYIFJFDXRCGTWLYFVUWDYYAZEAYOISSUKQMWOPBPIDS");

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
    msg.setTimeStamp(0.454750055342);
    msg.setSource(21669U);
    msg.setSourceEntity(210U);
    msg.setDestination(12506U);
    msg.setDestinationEntity(226U);
    msg.state = 210U;
    msg.flags = 121U;
    msg.description.assign("ZDMBYDHXQCSIZHEJMJBIZTUSLFOEVWHVVPPZLYGPBOMRTWBNEGCGXMWCHFLUADMBEJUPNJSCARCPWRHXZALUUYHQYQVCYRPMULRKYJWXRJLTAUFFCTZ");

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
    msg.setTimeStamp(0.40314692693);
    msg.setSource(14774U);
    msg.setSourceEntity(34U);
    msg.setDestination(24490U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.215597177149);
    msg.setSource(38264U);
    msg.setSourceEntity(174U);
    msg.setDestination(42861U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.185969321175);
    msg.setSource(27834U);
    msg.setSourceEntity(146U);
    msg.setDestination(61891U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.95985605107);
    msg.setSource(42162U);
    msg.setSourceEntity(233U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(229U);
    msg.id = 209U;
    msg.label.assign("AHRCSMFJHFHWDWEFFNDAEQVBQMUHDXNIOPQLWVGUSXAAAZBYZGNLOWMICSJNSOWOERNZTQWHVMTYBMVUIWSDXPGNMZACPUVKPPLZPUHBVYGPVTMDRFUJCBJJUYGRCFLOOTANJXYCTYAOBBCAVLDOUDYXXAEEIKZZKFLKKXGHIRXQTUQYOVTZYIPMFKDNXJQQCLESJHRCZPDRIWFBLKEGHTSM");
    msg.component.assign("NSYHOTZLCZBSGKVFWNFDSDULIWDRGIFVNTMLKHHBXXUPLJNGFCXGGISTRHLXFUPOOLEVEHKACBDATKDDQJLEWRZJMCWSJXQUEMJJZNFMRZJTTOQYZABMYHUEABFKVBKQUWBSPJKCMPDAUQJRQWKYSPICBMEYF");
    msg.act_time = 9216U;
    msg.deact_time = 15923U;

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
    msg.setTimeStamp(0.0032147677856);
    msg.setSource(12879U);
    msg.setSourceEntity(235U);
    msg.setDestination(936U);
    msg.setDestinationEntity(199U);
    msg.id = 191U;
    msg.label.assign("DMJNBXLCYOIKZALJPYCOMECPXBWSKHFVXDASHIQDIQRSCZYBZUQMKTKGBGPXGEIPLQITNDEDBZCFZYPSMWLVHTAVPGJCVNZHJWYGNDWGYPHSMIOSJJXOTMUMBSZREARTFUTTYRPXGOTICNCVVNKFYLLNFPWWBLBDXIPDHIROVKT");
    msg.component.assign("JWWWGXAACZKNLFLSBC");
    msg.act_time = 47400U;
    msg.deact_time = 53622U;

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
    msg.setTimeStamp(0.522058739799);
    msg.setSource(39685U);
    msg.setSourceEntity(95U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(200U);
    msg.id = 154U;
    msg.label.assign("WEVIZRSQFREGJWDRTHBTXXNMAJEDCGFFXNBNQTXRYYPAMGOCCBQZSARUMHIAZGOYJETSEBSJ");
    msg.component.assign("EJYCUQDHNHJUHDSAPMCKSKECSYUMKFFZCSPMTEBOKQDUWNNLBBTVSOENQCEGPJGIQXRJMHPBHVDXIERXUKGIISQUQGWAOOMCBKWTMRBNXJOTHGUWKJBUNVNDACIPPTPVIFLROSEBAWNTYXLQPJXRLAZRLYUBKLYDKRWPZYIQVFTDEUYYIFMYSXIISL");
    msg.act_time = 24343U;
    msg.deact_time = 9135U;

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
    msg.setTimeStamp(0.137371791341);
    msg.setSource(7100U);
    msg.setSourceEntity(252U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(120U);
    msg.id = 241U;

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
    msg.setTimeStamp(0.792790285228);
    msg.setSource(866U);
    msg.setSourceEntity(15U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(57U);
    msg.id = 104U;

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
    msg.setTimeStamp(0.752078241837);
    msg.setSource(42078U);
    msg.setSourceEntity(208U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(236U);
    msg.id = 92U;

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
    msg.setTimeStamp(0.436891643718);
    msg.setSource(133U);
    msg.setSourceEntity(158U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(96U);
    msg.op = 22U;
    msg.list.assign("YTRVMQWXRIJCTQKBZYNYAQGSOMS");

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
    msg.setTimeStamp(0.00270967560843);
    msg.setSource(26590U);
    msg.setSourceEntity(51U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(225U);
    msg.op = 215U;
    msg.list.assign("NXQPAFQDXZLJAJUQIWCZBZYSFIKJCNIZLWNAJFVVAAPLAOVNTEKPUOQEHBHMFMTYXLCRBWZDWWXZDYVNDCFHUPZYFEDZVHIBXTBLFKEHPHQEK");

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
    msg.setTimeStamp(0.498637735556);
    msg.setSource(26733U);
    msg.setSourceEntity(32U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(104U);
    msg.op = 148U;
    msg.list.assign("QGKTZWUKTSOBIFREOTZSAWGNHRYRJPOSBZAUQAUPKNRUJLVRCGKODXAGLYEXXBRDJOMNQDWWXZETFQMYCKQLNSLIJKCVCLWIF");

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
    msg.setTimeStamp(0.126392439728);
    msg.setSource(9359U);
    msg.setSourceEntity(87U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(111U);
    msg.value = 212U;

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
    msg.setTimeStamp(0.992765794327);
    msg.setSource(41826U);
    msg.setSourceEntity(73U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(142U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.376249645777);
    msg.setSource(34561U);
    msg.setSourceEntity(82U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(216U);
    msg.value = 193U;

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
    msg.setTimeStamp(0.455214646533);
    msg.setSource(31028U);
    msg.setSourceEntity(223U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("IESJNDSFOBKGEPUVYYHMMGPVWDZWHGCSUFULUGLYCZKBERMJRL");
    msg.message_id = 25615U;

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
    msg.setTimeStamp(0.825417541689);
    msg.setSource(11575U);
    msg.setSourceEntity(69U);
    msg.setDestination(64882U);
    msg.setDestinationEntity(45U);
    msg.consumer.assign("WTLNBLAHHTKEIBNWFEDQ");
    msg.message_id = 6278U;

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
    msg.setTimeStamp(0.794485979171);
    msg.setSource(8436U);
    msg.setSourceEntity(147U);
    msg.setDestination(20761U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("DOKWBDMDLLQZXKXGNVCEVNSIWHUAAFPRENVUGGFPWDNBIIZOVULEWODCBPQUVQFPMCCUUOHJRUHDSQYSVOLSOSUTFBHQGZGPMOJISAKFRPTGJQTLIZNFCRNMZAUIEVNNCLXGESDLKFYESFIXSKMAVBALIYEUATHBDCRJGTRFHJYXKPNIOPTDZYXXXBYJHBHZJQPMYXRTSBTELTAWEKJMFCKWQWKROWWYMBT");
    msg.message_id = 20595U;

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
    msg.setTimeStamp(0.209437746329);
    msg.setSource(35330U);
    msg.setSourceEntity(193U);
    msg.setDestination(9228U);
    msg.setDestinationEntity(237U);
    msg.type = 4U;

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
    msg.setTimeStamp(0.382039093841);
    msg.setSource(3562U);
    msg.setSourceEntity(171U);
    msg.setDestination(613U);
    msg.setDestinationEntity(90U);
    msg.type = 245U;

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
    msg.setTimeStamp(0.564789469167);
    msg.setSource(51934U);
    msg.setSourceEntity(244U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(44U);
    msg.type = 200U;

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
    msg.setTimeStamp(0.460951569609);
    msg.setSource(11052U);
    msg.setSourceEntity(177U);
    msg.setDestination(53633U);
    msg.setDestinationEntity(59U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.225554763954);
    msg.setSource(39015U);
    msg.setSourceEntity(152U);
    msg.setDestination(19219U);
    msg.setDestinationEntity(112U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.643231331547);
    msg.setSource(34900U);
    msg.setSourceEntity(140U);
    msg.setDestination(58798U);
    msg.setDestinationEntity(223U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.386931603327);
    msg.setSource(6983U);
    msg.setSourceEntity(165U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 191U;
    msg.step_number = 34U;
    msg.step.assign("TZMMDHXVBRNQFJVPUJZTFBNNPCWHDIJOWNOCAWNTKRCLJMYSRVNGRPIXOIWUQAYQLBZKOGMDBHGDZFRPGHXTZLHOSVENFYKHQLGZIXKDFCBNBRXZBSVGRCAPSUWNTELEQM");
    msg.flags = 241U;

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
    msg.setTimeStamp(0.781512988159);
    msg.setSource(6059U);
    msg.setSourceEntity(127U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 61U;
    msg.step_number = 54U;
    msg.step.assign("YUYWNXFZZPDQNIGITJOPLOZHWQCOTDQRVXSDKMALUWZYZSNIOQMCADYPX");
    msg.flags = 151U;

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
    msg.setTimeStamp(0.806651507567);
    msg.setSource(31098U);
    msg.setSourceEntity(141U);
    msg.setDestination(39266U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 134U;
    msg.step_number = 130U;
    msg.step.assign("BEPYUDZXYLTSWNWJDELWJCBZYEHBVPEDEAJUAKJZHTTGWQSDXRSKTSHQVDPUQAHVUSNBGECAFALMXPUXTJMQKXURKJGSWYWYOLRETNIFZMZOBKIXFMRCQEHKITESDHLIVPCCYKRCZUBDNIZGOUBWGYVGCIQDSUZLJWMMRDPGSWYFAHG");
    msg.flags = 166U;

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
    msg.setTimeStamp(0.529526224776);
    msg.setSource(59793U);
    msg.setSourceEntity(212U);
    msg.setDestination(31858U);
    msg.setDestinationEntity(3U);
    msg.state = 156U;
    msg.error.assign("HQYOSRBBILDBXSSWTUNKJINVFTYRSYEMLJORROECNKKBCFQDAPZDBHMULSPYQAQKQVIRRGZLAAGYOIHBHXJLAOQMMZAVGVWIIGVNXJWURAZKNZWVGYVOVPEEQSNLFIJTPKATIMXWMXINLTFWLZZGUEFTNTXFCDZODABJYWFDEMZHYSRPMTRUHTPCYCINCPBWVDOUDFRLWFXCYDOQTFELGM");

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
    msg.setTimeStamp(0.182570074599);
    msg.setSource(47513U);
    msg.setSourceEntity(230U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(134U);
    msg.state = 2U;
    msg.error.assign("NHUYZSWSGBIXAPETGHSLQUKIWLMCJAOGOMJTYASKEWMOTTWDFXZYEFYJXVBIACBAGRAZJVRKRRWKGGDFNPGWYXYCFOKCIRRHBQEHVQBANUVEMKLGLVHNBDTTUNDZLCNRKQPCJKHPOEQLVIEVIOFJLSHGUNBZGHQJKPLKEUICMXXZLNIVUTFQXADWSMVDHXCNOIZQADEWRRPMXZUTPFN");

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
    msg.setTimeStamp(0.708459478846);
    msg.setSource(18812U);
    msg.setSourceEntity(78U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(195U);
    msg.state = 213U;
    msg.error.assign("BVQYWBUCRIMZFIKSMTFBHRLCPFOCVGZDIBLBETGVMUIUWGTSJRZWZQGJLPNJURZPMFMJEBLYLUKUJOWYPSEPNLQPDIQVCNQUWYIHKSNYAPFSNZKSXKDRVCARAGWWVTOQADAKC");

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
    msg.setTimeStamp(0.869314509782);
    msg.setSource(36139U);
    msg.setSourceEntity(32U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.282702646863);
    msg.setSource(14021U);
    msg.setSourceEntity(19U);
    msg.setDestination(35933U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.630667952374);
    msg.setSource(38599U);
    msg.setSourceEntity(215U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.843643409245);
    msg.setSource(42638U);
    msg.setSourceEntity(55U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(51U);
    msg.op = 1U;
    msg.speed_min = 0.382689690147;
    msg.speed_max = 0.769632512413;
    msg.long_accel = 0.0436860159486;
    msg.alt_max_msl = 0.043119867594;
    msg.dive_fraction_max = 0.131716756888;
    msg.climb_fraction_max = 0.797955816037;
    msg.bank_max = 0.306656342034;
    msg.p_max = 0.687809893852;
    msg.pitch_min = 0.525992568284;
    msg.pitch_max = 0.980565071439;
    msg.q_max = 0.274982549909;
    msg.g_min = 0.752488443041;
    msg.g_max = 0.773768780554;
    msg.g_lat_max = 0.336553771792;
    msg.rpm_min = 0.0821419969692;
    msg.rpm_max = 0.450725240691;
    msg.rpm_rate_max = 0.787779249197;

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
    msg.setTimeStamp(0.65489489631);
    msg.setSource(7836U);
    msg.setSourceEntity(157U);
    msg.setDestination(3179U);
    msg.setDestinationEntity(36U);
    msg.op = 244U;
    msg.speed_min = 0.778422312789;
    msg.speed_max = 0.111354932635;
    msg.long_accel = 0.218255669153;
    msg.alt_max_msl = 0.76954566576;
    msg.dive_fraction_max = 0.203829793916;
    msg.climb_fraction_max = 0.686037875621;
    msg.bank_max = 0.953986415495;
    msg.p_max = 0.089553650314;
    msg.pitch_min = 0.761680479454;
    msg.pitch_max = 0.855572028587;
    msg.q_max = 0.369532083458;
    msg.g_min = 0.192181179199;
    msg.g_max = 0.31652049438;
    msg.g_lat_max = 0.326556625122;
    msg.rpm_min = 0.609858888244;
    msg.rpm_max = 0.712660732242;
    msg.rpm_rate_max = 0.929241062705;

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
    msg.setTimeStamp(0.766926488762);
    msg.setSource(556U);
    msg.setSourceEntity(211U);
    msg.setDestination(23119U);
    msg.setDestinationEntity(202U);
    msg.op = 135U;
    msg.speed_min = 0.887914955238;
    msg.speed_max = 0.956254349428;
    msg.long_accel = 0.102069320206;
    msg.alt_max_msl = 0.750393431466;
    msg.dive_fraction_max = 0.208832856294;
    msg.climb_fraction_max = 0.706124606508;
    msg.bank_max = 0.883423477934;
    msg.p_max = 0.791094353602;
    msg.pitch_min = 0.847633180443;
    msg.pitch_max = 0.560422196968;
    msg.q_max = 0.550055286641;
    msg.g_min = 0.855299420463;
    msg.g_max = 0.523160258134;
    msg.g_lat_max = 0.448694986543;
    msg.rpm_min = 0.794705252895;
    msg.rpm_max = 0.891817818644;
    msg.rpm_rate_max = 0.608780900634;

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
    msg.setTimeStamp(0.37439608551);
    msg.setSource(29720U);
    msg.setSourceEntity(25U);
    msg.setDestination(7532U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.788014635145);
    msg.setSource(57808U);
    msg.setSourceEntity(166U);
    msg.setDestination(16271U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.609195736699);
    msg.setSource(61794U);
    msg.setSourceEntity(66U);
    msg.setDestination(12887U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.260128688021);
    msg.setSource(47480U);
    msg.setSourceEntity(113U);
    msg.setDestination(29756U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.227336990103;
    msg.lon = 0.450134155135;
    msg.height = 0.280570998039;
    msg.x = 0.421428954331;
    msg.y = 0.279369595407;
    msg.z = 0.212356274884;
    msg.phi = 0.937426459494;
    msg.theta = 0.615170997474;
    msg.psi = 0.258759132992;
    msg.u = 0.177724138475;
    msg.v = 0.236511982187;
    msg.w = 0.476766548545;
    msg.p = 0.513081333813;
    msg.q = 0.364402330511;
    msg.r = 0.908401149884;
    msg.svx = 0.907806090689;
    msg.svy = 0.225147627954;
    msg.svz = 0.587799991455;

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
    msg.setTimeStamp(0.345840246111);
    msg.setSource(62547U);
    msg.setSourceEntity(29U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.264321762147;
    msg.lon = 0.927498839852;
    msg.height = 0.484423846573;
    msg.x = 0.0640988981881;
    msg.y = 0.893588826101;
    msg.z = 0.75741882278;
    msg.phi = 0.14636923639;
    msg.theta = 0.456946085487;
    msg.psi = 0.341225317378;
    msg.u = 0.993467537304;
    msg.v = 0.625017277008;
    msg.w = 0.0759415225874;
    msg.p = 0.553503206332;
    msg.q = 0.151288623747;
    msg.r = 0.851306201477;
    msg.svx = 0.368097250184;
    msg.svy = 0.758828306654;
    msg.svz = 0.997084021577;

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
    msg.setTimeStamp(0.241854020518);
    msg.setSource(6903U);
    msg.setSourceEntity(89U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.721803238044;
    msg.lon = 0.515345403866;
    msg.height = 0.835134374052;
    msg.x = 0.0688065789546;
    msg.y = 0.597090102541;
    msg.z = 0.0396882327133;
    msg.phi = 0.709324357833;
    msg.theta = 0.0527654217687;
    msg.psi = 0.825196565832;
    msg.u = 0.777476031778;
    msg.v = 0.47040615892;
    msg.w = 0.598167918863;
    msg.p = 0.0713988288784;
    msg.q = 0.812499036398;
    msg.r = 0.609432962721;
    msg.svx = 0.727614836761;
    msg.svy = 0.596502664487;
    msg.svz = 0.25563433305;

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
    msg.setTimeStamp(0.770085828326);
    msg.setSource(65123U);
    msg.setSourceEntity(41U);
    msg.setDestination(32352U);
    msg.setDestinationEntity(225U);
    msg.op = 225U;
    msg.entities.assign("OXIAHZWVPCVVFRIBQGHKCOOQVWHCBSKPEYSQCEMRBYKQSMBLZMRYCYNTPEPZAZXUBPGZNOOVFWRTLIKWMJSSFZFHEEWDAUWGXCJZBTREYPQKTJUFUBWXNMYDQNPKXIFTCNBJGUGWJULDOPNFOAQNKTHHYTLGULVGXLIFYSLJHLWAIVRDMEELHDMDPGMZBFXCNRVJJNIM");

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
    msg.setTimeStamp(0.712391884895);
    msg.setSource(33852U);
    msg.setSourceEntity(172U);
    msg.setDestination(6162U);
    msg.setDestinationEntity(124U);
    msg.op = 22U;
    msg.entities.assign("RKPOCSNRDDZQYKQOEMO");

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
    msg.setTimeStamp(0.666420981844);
    msg.setSource(54708U);
    msg.setSourceEntity(51U);
    msg.setDestination(16487U);
    msg.setDestinationEntity(57U);
    msg.op = 174U;
    msg.entities.assign("LPFEAFGRUSANXMMPWYBLHIMWEVMGKCXOCEQNWDMRENEMFJNHMVZHJYTEGYJYOHOFBISYSTUKUMKVNTIWQQWZFLFAGBPPFCJGTVUAVURKW");

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
    msg.setTimeStamp(0.920355361115);
    msg.setSource(28438U);
    msg.setSourceEntity(30U);
    msg.setDestination(44489U);
    msg.setDestinationEntity(49U);
    msg.type = 42U;
    msg.speed = 46852U;
    const char tmp_msg_0[] = {-65, 102, -95, 110, 89, -84, 116, -107, 23, 120, -27, -47, -114, -66, -50, -54, 105, 52, -111, 87, -47, 85, 18, -1, -37, 54, 115, -84, 32, -55, -48, -49, 31, -23, 106, 58, 115, 96, -117, -102, -24, -83, 96, -71, 39, -47, -77, 29, 94, 8, -122, 82, 87, -92, 91, 71, -123, 81, 45, -106, 83, -44, 19, -85, 25, -61, 105, 29, 70, 94, 87, 108, 111, -79, -73, 68, -104, 16, -25, 72, 117, 22, 106, -114, -6, 91, 88, -108, 85, -26, -107, -56, -14, -79, 104, -105, 67, -88, -13, -25, -8, 90, 2, 59, 34, 102, -86, -106, -125, 16, -56, 95, 16, 67, 20, -78, -56, 10, -20, -122, -88, 78, -121, -68, -65, 91, 31, -86, 76, -90, -29, 100, -45, 42, -103, 15, 23, -52, 86, -12, 111, -61, -94, -88, 25, 2, -107, 60, -98, -124, -50, 98, 118, 122, -48, 104, 65, -15};
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
    msg.setTimeStamp(0.906083091004);
    msg.setSource(58826U);
    msg.setSourceEntity(51U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(228U);
    msg.type = 35U;
    msg.speed = 53098U;
    const char tmp_msg_0[] = {-40, -24, 59, 73, 26, -111, -107, -94, -67, -19, 16, -115, -98, -38, -93, -110, -128, -66, -110, -106, -83, 10, 69, -83, 45, 96, 28, -86, 29, -78, 68, 13, 50, -94, -104, 41, -73, -116, -114, -106, -64, -30, -126, -51, -101, 87, 82, 74, -116, -111, 18, -94, 40, -24, 14, 48, 75, -54, -111, -59, 88, 103, 12, 81, -95, -9, 26, 118, 111, -76, 121, 94, 70, 125, -9, -100, 90, -2, 35, 115, -27, -63, 27, -68, 19, 27, 113};
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
    msg.setTimeStamp(0.607462881424);
    msg.setSource(18913U);
    msg.setSourceEntity(64U);
    msg.setDestination(30872U);
    msg.setDestinationEntity(223U);
    msg.type = 24U;
    msg.speed = 53411U;
    const char tmp_msg_0[] = {124, -97, -4, -126, -24, -31, -90, 27, 3, 96, -85, -89, -9, 118, 3, -101, -50, -14, 74, -105, -46, -38, -112, -104, -74, 117, 75, 5, -71, 42, 102, -75, 26, -24, 103, -17, -59, -28, 46, -68, -20, -69, 63, -35, -18, -50, -112, -82, -28, -35, -78, -98, -79, 15, 70, 126, 79, -55, -125, -119, -45, 17, 51, -101, 115, -92, 124, -81, -39, -102, 46, -7, -123, 58, -110, 5, -119, 85, -38, -103, 95, -102, 124, -18, 72, -66, 90, 57, -48, -110, 82, 73, 46, 58, -74, -125, 23, -21, -122, 46, 89, 93, -103, 34, -28, -6, 7, -55, 47, 59, 100, 66, 80, 124, -47, 123, 42, 28, 121, -92, -36, -65, 83, 84, 61, 66, 1, -30, -23, 18, -109, 5, -20, -2, -55, 19, -8, -116, 100, 54, -2, -99, 89, -50, -36};
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
    msg.setTimeStamp(0.351549742721);
    msg.setSource(40558U);
    msg.setSourceEntity(168U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(187U);
    msg.op = 54U;
    msg.tas2acc_pgain = 0.969100433852;
    msg.bank2p_pgain = 0.956169779501;

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
    msg.setTimeStamp(0.727956661842);
    msg.setSource(16293U);
    msg.setSourceEntity(40U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(35U);
    msg.op = 130U;
    msg.tas2acc_pgain = 0.0205054466135;
    msg.bank2p_pgain = 0.245250642993;

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
    msg.setTimeStamp(0.516751652239);
    msg.setSource(28075U);
    msg.setSourceEntity(253U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(136U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.170571673285;
    msg.bank2p_pgain = 0.202722979894;

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
    msg.setTimeStamp(0.178349021562);
    msg.setSource(42638U);
    msg.setSourceEntity(220U);
    msg.setDestination(31071U);
    msg.setDestinationEntity(246U);
    msg.available = 2661572599U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.840136938461);
    msg.setSource(36600U);
    msg.setSourceEntity(109U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(206U);
    msg.available = 1665068976U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.0151094782876);
    msg.setSource(14359U);
    msg.setSourceEntity(130U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(73U);
    msg.available = 2018456531U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.968841206993);
    msg.setSource(31054U);
    msg.setSourceEntity(124U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(224U);
    msg.op = 136U;
    msg.snapshot.assign("JGLYFZRCISSLFFHHVRMOYYHBSAJBJKZQOHDXSYXMKMIJUMVGYVNZPRFBLKYBHQUUUTZCQKCPBIUMFKDIJWOCRQHCIPJEPKBTOXIRJDVLBZEHDKGACSTNLLNAYEOPUXHONUOWRAIGCUXIWTAFZFPNDGIAJBSHWYEN");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 17591U;
    tmp_msg_0.status = 83U;
    tmp_msg_0.info.assign("CPSPVJJWWGPWFZQJYIFUSESPLKDDMHYMBWZIOFTYVORKGEUBSRKZCUWBPBFAMHJQGXBTHGGVUNHMSLDBGSGBNJEUXKDCTVJDRHUPMKQWTFEZRPLXQFJBXFCLNCSTOEALKOFIQVYLKROHYVWWHFCYZIYIKQUMDEDCEIVADRFVLSLMSXEARUVNZNLSTYELOZNZKI");
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
    msg.setTimeStamp(0.058451218155);
    msg.setSource(30498U);
    msg.setSourceEntity(77U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(160U);
    msg.op = 93U;
    msg.snapshot.assign("GWFGHXYMSGXBFNNCDTLVFJJEHVPTKOTDWCBZKEPNSSZXZILRGMSBODXQWXIWPAQVYHTEUIGCJFJHMDEM");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.523594553528;
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
    msg.setTimeStamp(0.485363085322);
    msg.setSource(44808U);
    msg.setSourceEntity(116U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(250U);
    msg.op = 171U;
    msg.snapshot.assign("CKGJOHMRVQFUOUFCLKUOZDOECRKBLUOUZJXYXVKJBUTKXIAGMFEJHFRNGHWJDDNTGWTYHCLSCJVHIWHHYAHLPRNSZQMEISVZMSOPCEXEWWDPUONFIXZQFBIDDXFAW");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 188U;
    tmp_msg_0.lon_gain = 0.995508025225;
    tmp_msg_0.lat_gain = 0.513871676317;
    tmp_msg_0.bond_thick = 0.952794200166;
    tmp_msg_0.lead_gain = 0.0755102663332;
    tmp_msg_0.deconfl_gain = 0.946036734682;
    tmp_msg_0.accel_switch_gain = 0.899335723298;
    tmp_msg_0.safe_dist = 0.747224604472;
    tmp_msg_0.deconflict_offset = 0.376745378248;
    tmp_msg_0.accel_safe_margin = 0.233879774253;
    tmp_msg_0.accel_lim_x = 0.0429742886086;
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
    msg.setTimeStamp(0.5008372837);
    msg.setSource(53130U);
    msg.setSourceEntity(155U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(224U);
    msg.op = 63U;
    msg.name.assign("XMGWBDHVYNOMWWEXTPNS");

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
    msg.setTimeStamp(0.979753637455);
    msg.setSource(46082U);
    msg.setSourceEntity(65U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(96U);
    msg.op = 106U;
    msg.name.assign("HMVYEBLFWVN");

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
    msg.setTimeStamp(0.7790692833);
    msg.setSource(22194U);
    msg.setSourceEntity(165U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(222U);
    msg.op = 14U;
    msg.name.assign("GZUEIQTVFCJXHREDVKSCBBSGFSUEGHRQYSHPZJSJFZIQHBGWQQXUBDESPQAMUCTNOTCXPTZOHMXUSBNBXZN");

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
    msg.setTimeStamp(0.246948812738);
    msg.setSource(9466U);
    msg.setSourceEntity(212U);
    msg.setDestination(55636U);
    msg.setDestinationEntity(179U);
    msg.type = 215U;
    msg.htime = 0.399917471833;
    msg.context.assign("EEDUJFQDILPFWYOGHBOLRALVHWIOVCYQBCXLZGISXMKZKOPUZSSMNBUWFMMWGFVOI");
    msg.text.assign("TEBZLCPKRELKXSYIMLKGPOHYIZOLXFEUBZVYHNHFJNKSGSPANTBZKDZVAPRYXWNIABCQBNAHGVPWOZEOUFVBHQFMQXSOYMDODZCV");

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
    msg.setTimeStamp(0.181243991839);
    msg.setSource(30023U);
    msg.setSourceEntity(235U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(46U);
    msg.type = 188U;
    msg.htime = 0.569568576598;
    msg.context.assign("MZUIDALUCWSMWULRZKLIMLKHQJKDZPZPNBHFUBFTYUCOFOESGEGNIRZCWDAUTDDOBRBRSTQUFTBKPSOCQGKVQCPXBQRBJBPNLCIYAWSEUWDOVFHTBJTMOOXXHBCVAUJJQEMRPZFSOHEVVKAPHCKSXRJRTPWYNNOKZJYVAWZFAELLSMYRVJFEWEQNGSLGWQIZJFSHRDKIMNLTXMDPTMPODXIGAVDHGKQIECYNZWFEV");
    msg.text.assign("DFQXPXSFBYSOZCMRRRLSRQLWBVAIZNGEZUKVEWDPUBUPWHITRJEJZGVKTSFUTNKLLIHOMPKAJZYIKJFOWUCFRPAAH");

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
    msg.setTimeStamp(0.965820870811);
    msg.setSource(38427U);
    msg.setSourceEntity(245U);
    msg.setDestination(25440U);
    msg.setDestinationEntity(187U);
    msg.type = 75U;
    msg.htime = 0.766400138786;
    msg.context.assign("AIIOPXUAFNOYKJFEYRZXLMECHWZCATIUTOAKTZMFBHEIGXECTBMAZEPJLVDUZURDCWDMQYRKWVDCGSWIPGVTKPEVYMWZSGSLNHNEUJRNCAVJGMOLQEQSKDLTOXFUXQPFBPKMEZONMPJUQJYZPILSBVFGRBAUBHTPRQOSHQXPGLBYIUVIVBTZLGOAEKYOKQSWHYJBWOAJQFIFCHCWAYRIDDK");
    msg.text.assign("VLRBQAATQRAXCXJEHLNMDBMQFOHGPLAKKXPBHQHEBQCOEPIDITGZDUTMMUTEYOVQPKGOXSRKTLLSDJOWKLHYXNHGTZCEUZCMUXPWK");

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
    msg.setTimeStamp(0.877243389341);
    msg.setSource(43783U);
    msg.setSourceEntity(74U);
    msg.setDestination(26877U);
    msg.setDestinationEntity(246U);
    msg.command = 85U;
    msg.htime = 0.0154028667781;

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
    msg.setTimeStamp(0.69954628595);
    msg.setSource(20019U);
    msg.setSourceEntity(117U);
    msg.setDestination(53469U);
    msg.setDestinationEntity(251U);
    msg.command = 62U;
    msg.htime = 0.471121224921;

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
    msg.setTimeStamp(0.212280677527);
    msg.setSource(52235U);
    msg.setSourceEntity(252U);
    msg.setDestination(12412U);
    msg.setDestinationEntity(92U);
    msg.command = 96U;
    msg.htime = 0.352278538479;

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
    msg.setTimeStamp(0.417335588488);
    msg.setSource(33087U);
    msg.setSourceEntity(151U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(104U);
    msg.op = 160U;
    msg.file.assign("RZXBFQGGFCJYMXFNDWLHTCGNZFMEQWDPJYHVAMDPSKXNBORMAYHJSHRFIWHDCBDPUGCSTPUGIDYQDQRBKXBZXUHNTPDZWQKCBIOMGAWOLDRQVXSSJEKSRGVKWRTCZFKDTEMXHPEVINNUKVWAPKELVAEWZFAYTCM");

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
    msg.setTimeStamp(0.479184910326);
    msg.setSource(29041U);
    msg.setSourceEntity(114U);
    msg.setDestination(59593U);
    msg.setDestinationEntity(63U);
    msg.op = 115U;
    msg.file.assign("PWFHNMTMBDLETDROUXQJWMKACNRFUTLMIQKICPSFAGOJIZZKNKNUSQHA");

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
    msg.setTimeStamp(0.289458818528);
    msg.setSource(2676U);
    msg.setSourceEntity(198U);
    msg.setDestination(18940U);
    msg.setDestinationEntity(129U);
    msg.op = 153U;
    msg.file.assign("MTTOYAMUMEXJWXSGKWCSYSLIPNJIN");

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
    msg.setTimeStamp(0.0818514617163);
    msg.setSource(27835U);
    msg.setSourceEntity(126U);
    msg.setDestination(22674U);
    msg.setDestinationEntity(149U);
    msg.op = 51U;
    msg.clock = 0.053196367855;
    msg.tz = -118;

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
    msg.setTimeStamp(0.793284326531);
    msg.setSource(35280U);
    msg.setSourceEntity(31U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(214U);
    msg.op = 35U;
    msg.clock = 0.367718764291;
    msg.tz = 8;

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
    msg.setTimeStamp(0.238266757997);
    msg.setSource(20443U);
    msg.setSourceEntity(252U);
    msg.setDestination(55519U);
    msg.setDestinationEntity(42U);
    msg.op = 43U;
    msg.clock = 0.505209507122;
    msg.tz = 32;

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
    msg.setTimeStamp(0.774412026176);
    msg.setSource(5777U);
    msg.setSourceEntity(202U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(240U);
    msg.conductivity = 0.464516856502;
    msg.temperature = 0.427743160538;
    msg.depth = 0.425243865721;

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
    msg.setTimeStamp(0.491372631473);
    msg.setSource(35072U);
    msg.setSourceEntity(166U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.648635792055;
    msg.temperature = 0.706457884809;
    msg.depth = 0.150539010702;

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
    msg.setTimeStamp(0.198497057564);
    msg.setSource(41575U);
    msg.setSourceEntity(38U);
    msg.setDestination(3010U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.822093823388;
    msg.temperature = 0.484075128352;
    msg.depth = 0.916683594981;

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
    msg.setTimeStamp(0.0619133267831);
    msg.setSource(31671U);
    msg.setSourceEntity(17U);
    msg.setDestination(17898U);
    msg.setDestinationEntity(105U);
    msg.altitude = 0.507313660371;
    msg.roll = 20304U;
    msg.pitch = 5901U;
    msg.yaw = 41001U;
    msg.speed = 21669;

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
    msg.setTimeStamp(0.567543939304);
    msg.setSource(6290U);
    msg.setSourceEntity(231U);
    msg.setDestination(27633U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.866326879797;
    msg.roll = 17871U;
    msg.pitch = 38902U;
    msg.yaw = 39311U;
    msg.speed = 29426;

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
    msg.setTimeStamp(0.552524210514);
    msg.setSource(33335U);
    msg.setSourceEntity(169U);
    msg.setDestination(13441U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.112701739921;
    msg.roll = 52913U;
    msg.pitch = 39396U;
    msg.yaw = 51425U;
    msg.speed = -3846;

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
    msg.setTimeStamp(0.563136872174);
    msg.setSource(18626U);
    msg.setSourceEntity(46U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.641834468714;
    msg.width = 0.128788156522;
    msg.length = 0.405763838914;
    msg.bearing = 0.141009453604;
    msg.pxl = -6546;
    msg.encoding = 132U;
    const char tmp_msg_0[] = {46, -122, 42, -126, -82, -49, 5, -42, -4, 63, 14, 123, -44, -113, 68, -47, 101, 96, -19, 78, -25, 62, 28, 92, 111, -110, 93, -25, -119, -92, 126, 7, -65, -53, 66, -27, 1, -51, -11, 35, -108, -81, -20, -100, -104, 11, 87, 87, -14, 3, 22, 61, -38, -120, -29, 24, 51, 105, -55, 44, 33, -94, -119, -36, -58, 56, 66, -68, 69, -93, -69, -110, 117, -74, -94, 56, -126, -20, 15, 19, -27, -1, 13, -109, 58, -59, -22, -45, -45, -31, 49, 5, 72, -45, 42, 53, 51, 108};
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
    msg.setTimeStamp(0.164323883319);
    msg.setSource(34643U);
    msg.setSourceEntity(155U);
    msg.setDestination(3228U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.204661321895;
    msg.width = 0.282135287845;
    msg.length = 0.724029390515;
    msg.bearing = 0.749738754512;
    msg.pxl = -10740;
    msg.encoding = 253U;
    const char tmp_msg_0[] = {66, -79, 42, 36, 75, 123, 12, -126, -103, 63, -28, -93, -100, 107, 71};
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
    msg.setTimeStamp(0.250529976382);
    msg.setSource(46844U);
    msg.setSourceEntity(13U);
    msg.setDestination(31721U);
    msg.setDestinationEntity(242U);
    msg.altitude = 0.0588369189569;
    msg.width = 0.0378980777945;
    msg.length = 0.588206865586;
    msg.bearing = 0.469420679982;
    msg.pxl = -30955;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {84, 44, -70, -69, 34, 103, -88, 23, -55, 120, 75, 21, -107, 14, 120, 75, -51, 72, -123, -11, 81, 88, 2, -63, 72, 53, 37, 111, -106, -33, -78, 90, -33, 42, -28, -14, -114, -84, -47, -75, 2, -85, 112, 104, 24, -23, 43, -11, 72, 91, 98, -50, -19, -112, 94, 78, -70, -20, -76, 47, 83, -19, 70, -15, 90, -25, 65, -57, -85, 81, 19, -46, 49, -54, 50, -32, -76, 123, 29, 103, -82, -38, 86, -83, 47, 120, -77, 81, -35, -86, -128, -115, 26, -9, 36};
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
    msg.setTimeStamp(0.611099773969);
    msg.setSource(29846U);
    msg.setSourceEntity(192U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(80U);
    msg.text.assign("XCPTCZTKARZPLQESPYAMGTBISBMLWENABKEPFHLYXTWELSXIOBMKRGUAORPDSRBWIFKWRYHARFYDYMDNVCDXADLMOHFJZIBVZHPJYKZSVNVKFRQAVNNIWXVCTZJIEVOXQAVXYNCJDBZSZWGVRKJMJOTJRTBUHXHFZDFGEDJQOOUHDOQQHFGMVLKCHIIUAIGWUTSWPQEDQMP");
    msg.type = 107U;

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
    msg.setTimeStamp(0.531700368909);
    msg.setSource(9934U);
    msg.setSourceEntity(237U);
    msg.setDestination(22700U);
    msg.setDestinationEntity(102U);
    msg.text.assign("ZANVUVRHCYXILNNZWEILYGRHINFPORAORRGBATKWBJPKXKEINTOOPCSAJGXJMQESMPUWCYRXVCSLYPIXDEOKTLSLHHFUF");
    msg.type = 167U;

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
    msg.setTimeStamp(0.318867741126);
    msg.setSource(18548U);
    msg.setSourceEntity(28U);
    msg.setDestination(63625U);
    msg.setDestinationEntity(95U);
    msg.text.assign("SCDSXJLIKVIMWPRCVWDDGXIIFKUADYOKMORNAECQZYJLSLZHEZPERSCSDJKGBERJNNPMWXHYRJPMEKULHCIAOSYPBZYZNPEGQTBRUIOJLFNYWONAXAPTATRLZUMTTSB");
    msg.type = 68U;

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
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.725370411509);
    msg.setSource(9947U);
    msg.setSourceEntity(154U);
    msg.setDestination(15120U);
    msg.setDestinationEntity(236U);
    msg.parameter = 110U;
    msg.numsamples = 244U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 53602U;
    tmp_msg_0.avg = 0.804942982662;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.213058958297;
    msg.lon = 0.754141552627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.729700694172);
    msg.setSource(55727U);
    msg.setSourceEntity(26U);
    msg.setDestination(13017U);
    msg.setDestinationEntity(102U);
    msg.parameter = 168U;
    msg.numsamples = 217U;
    msg.lat = 0.0285105058332;
    msg.lon = 0.439830045507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.259995123596);
    msg.setSource(42094U);
    msg.setSourceEntity(30U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(17U);
    msg.parameter = 134U;
    msg.numsamples = 174U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 32017U;
    tmp_msg_0.avg = 0.55637712463;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.740614110066;
    msg.lon = 0.125643886979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.576620723727);
    msg.setSource(40770U);
    msg.setSourceEntity(135U);
    msg.setDestination(18710U);
    msg.setDestinationEntity(118U);
    msg.depth = 39690U;
    msg.avg = 0.105547396375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.813756740083);
    msg.setSource(40937U);
    msg.setSourceEntity(22U);
    msg.setDestination(25638U);
    msg.setDestinationEntity(133U);
    msg.depth = 49719U;
    msg.avg = 0.585618979082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.249655314553);
    msg.setSource(61542U);
    msg.setSourceEntity(43U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(220U);
    msg.depth = 40248U;
    msg.avg = 0.951582660355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.912965725637);
    msg.setSource(11784U);
    msg.setSourceEntity(254U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.392403999033);
    msg.setSource(51720U);
    msg.setSourceEntity(172U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.946709324449);
    msg.setSource(12025U);
    msg.setSourceEntity(109U);
    msg.setDestination(47047U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.928752942017);
    msg.setSource(40762U);
    msg.setSourceEntity(97U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(61U);
    msg.sys_name.assign("RWXROCIFNXSDUWDJOGFLFUBZGRYGWLSLXTTPLVYTTBVXHSQQMNQVUNYFEFJEUAOKJLJWVIDMCQGIVDXFOZXGCDDSPSCOBAKCCUBWJPVPCSWXCPHVHHLRIM");
    msg.sys_type = 124U;
    msg.owner = 38564U;
    msg.lat = 0.701925458691;
    msg.lon = 0.0948773323572;
    msg.height = 0.892011122381;
    msg.services.assign("CLTOQBZQKJUOFJESKRMTPXDJYGSVIWF");

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
    msg.setTimeStamp(0.280186064821);
    msg.setSource(34215U);
    msg.setSourceEntity(235U);
    msg.setDestination(59426U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("PXODFGRBWNTLAZWDKFCGPYQDMCGLQMOUZNSRAEIMJXZCVAGDLNUPCIWHKUZNVWVYQVREVWUKBLQVJAKXRVYDFHSWGBTZXNPWDJNHLZBOJFUOIEMJJEAYKRSPFCESCHEDLOTKYGPXGPMACH");
    msg.sys_type = 45U;
    msg.owner = 19007U;
    msg.lat = 0.327040564972;
    msg.lon = 0.588920613886;
    msg.height = 0.891962541328;
    msg.services.assign("KADNEHTSVTJNQVFZMTLTPWCXZESYQOLIDWJRALFAIUIJUHGMPEMFHQECBIDDGVNUFMQWXTPGDGDZCYEIXLYZAJNBXXLULBOWYSJPKWXJQLPMYH");

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
    msg.setTimeStamp(0.752398653144);
    msg.setSource(15419U);
    msg.setSourceEntity(205U);
    msg.setDestination(4697U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("EAJEDHQOTAQDYJQEBKRDOXAIRSLFTCOCUBNGWTUAWWMKTXYAPWSOLYVUQLVYMKJAAHHHYMUINIXUCDFCVSIOIEESIMGWVOHTZWPFTGNDTZAPEYFPTZGHFKTWPJHGXASFSUEVZUCCOKFCCKZBLLXGMBGBLALHMOWEBQHXNRKBMNDHYRFRJSDYNUJIICVYZGGIBDJRQPBPBLQNIEKVTVJVWQZPZ");
    msg.sys_type = 75U;
    msg.owner = 37035U;
    msg.lat = 0.658721849806;
    msg.lon = 0.964757454543;
    msg.height = 0.290465684953;
    msg.services.assign("FKXVJWHNQMIQUPZEGPFWZKNGGIXCXFJCRNPIFVZXBYDCEIJQAXAOZGVPVSSYT");

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
    msg.setTimeStamp(0.466891154131);
    msg.setSource(57389U);
    msg.setSourceEntity(144U);
    msg.setDestination(15962U);
    msg.setDestinationEntity(249U);
    msg.service.assign("QIXGTNFSNSPWWSAJWOYLBXDFLYTBYEMWFQOTVVKPOUDGCSPNEISZLMSMSMNESHHGYVJDDRRCLLPDLKJVREZDIJMABXSQGKCWPVJKWKOEELYHDAEJFFOUGTVAABRZETBZXCURACDPTEUDNHQXUOIILNBSGHRIUFXGLTYXBGYRFQCMMIPPWDEKZKQCYNKBFXXHTQTUZRMPPMQOCINZOVWJJMHNVIC");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.495133022463);
    msg.setSource(53247U);
    msg.setSourceEntity(173U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(17U);
    msg.service.assign("JLWSHYIWGNFQNSFLEESKFPZVNRQPNKOQABZTXGZWHRPKMFXBMEVANWEOPCVNZJAICCGUTABQHVXRZPIODUOUIFZZYVMGJRYEUBISDZDCRFLMTBGNQKUINYXATRCDILZBOHUMOWAETODMHJLTMWSUEKMMBSH");
    msg.service_type = 205U;

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
    msg.setTimeStamp(0.0810976961757);
    msg.setSource(59862U);
    msg.setSourceEntity(14U);
    msg.setDestination(14847U);
    msg.setDestinationEntity(143U);
    msg.service.assign("PUUBWHTFKQSKZYNMDZOZFDXKZERXEDSCOAAOPCVEUSEGMESIMVQTVLIYBWWQZZZADXIDJTGYUEQMNRIPIQMQYNPUUOOTKLPFKCHWHQSGWJERPABKQTVGLGVRWHHXJTLYFFHGAZARPRIHIDOJYZJNJSNCSBXAQCCUYCNVEYXFRFJOFLDGJONLHKERXOBARQWWXTFXMDBXVGLMYFMTJBJETDYKSVBVVPPKMAULIUCBRCHDOSSWNBGZNAG");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.0251138534546);
    msg.setSource(30406U);
    msg.setSourceEntity(31U);
    msg.setDestination(36713U);
    msg.setDestinationEntity(38U);
    msg.value = 0.519547325001;

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
    msg.setTimeStamp(0.344745943367);
    msg.setSource(63027U);
    msg.setSourceEntity(79U);
    msg.setDestination(24708U);
    msg.setDestinationEntity(142U);
    msg.value = 0.792718529637;

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
    msg.setTimeStamp(0.911516976293);
    msg.setSource(30262U);
    msg.setSourceEntity(78U);
    msg.setDestination(1054U);
    msg.setDestinationEntity(86U);
    msg.value = 0.340126415197;

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
    msg.setTimeStamp(0.848834302519);
    msg.setSource(64719U);
    msg.setSourceEntity(99U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(97U);
    msg.value = 0.586965682775;

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
    msg.setTimeStamp(0.0465206451726);
    msg.setSource(18853U);
    msg.setSourceEntity(214U);
    msg.setDestination(64811U);
    msg.setDestinationEntity(98U);
    msg.value = 0.655970572158;

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
    msg.setTimeStamp(0.185106039616);
    msg.setSource(63704U);
    msg.setSourceEntity(211U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(76U);
    msg.value = 0.00668538949592;

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
    msg.setTimeStamp(0.206870716975);
    msg.setSource(63549U);
    msg.setSourceEntity(21U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(106U);
    msg.value = 0.303174853119;

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
    msg.setTimeStamp(0.783040393999);
    msg.setSource(33235U);
    msg.setSourceEntity(48U);
    msg.setDestination(36570U);
    msg.setDestinationEntity(152U);
    msg.value = 0.905156808656;

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
    msg.setTimeStamp(0.579719447644);
    msg.setSource(54867U);
    msg.setSourceEntity(132U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(172U);
    msg.value = 0.759940057086;

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
    msg.setTimeStamp(0.509826800994);
    msg.setSource(43939U);
    msg.setSourceEntity(177U);
    msg.setDestination(6408U);
    msg.setDestinationEntity(124U);
    msg.number.assign("UPFEOBDZRYLWZXRTAQEEKXFAIIROFRIGPDJMZOTDTUCKXVYTCVNPVDZELZGOBWFQGDQNJXIHUQVBSNQPXGKRMQBSWJOLHXMAYULYHUAPWCWLEFMVGDOJPKYIUTXAVBLJXSMBKBCZLKMQYQGLAWPEBEZTZHKFIVCNLBXSSUJE");
    msg.timeout = 57209U;
    msg.contents.assign("AOZJRWPYJEKVNHDLDTFNXOHUAAUJGMXOKTGWQIWXXZFBMDINRFVHPVSIZGKBWIRLZQQCTYQXDNRDNUPLLYJXECUEEEYCJBLOJGQSAKRRJRAQLTQDSJFCGSMVYYHARWNDVOPVCIKVUJFYNRCM");

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
    msg.setTimeStamp(0.406788611248);
    msg.setSource(51740U);
    msg.setSourceEntity(202U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(118U);
    msg.number.assign("SIYLTHSXRFPUDAUANIDJKGOTTZSTCWWZVXOHRSFEYITQHCJHNYUVOSJDWSWOAHUVQKCKYW");
    msg.timeout = 56343U;
    msg.contents.assign("OYVDEPBOMZFIYOQIHZJAFGQDIWJDVYMDGTKNSSTXWGKXVRCYZJPLXSFRAOHCHSRMNHWEZUCCCNJGLYWNJLHPCJWKMTFYULLSXZGLUNCWCVSVHYSXVFRBUUMRBIESYACQBZTFPZMEKBDQFPUKMQDAIOTWVOGPAWIABKJALBYTVUNLSOQGVEPORJUREQBNXTIZ");

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
    msg.setTimeStamp(0.0584272864051);
    msg.setSource(31714U);
    msg.setSourceEntity(65U);
    msg.setDestination(15263U);
    msg.setDestinationEntity(122U);
    msg.number.assign("SEQCWJGBQNPXHHSZNSIRYAURVDPBJPTCMTKAPJVNYACULWEQEJLDZVNWWBOWYCIHFSIQTYXHUTWZQSXQMDPJDOBNFAFBMVPUIKDLGMZQLEKZBKSKYPLLK");
    msg.timeout = 20960U;
    msg.contents.assign("DDQVAZLCIRQHVFXATDEGVYLKUIMUMKWPBRUCKNFORFCCOGYLNBEHKDXAAYRBPLJSFKQTQAZSMWVVSWHPJNJZQUKBDWWQDQFXVWNXUJCSLOQHIGSYPVZBDTEGSZPTOTJSFBRSKPZFKORAOCPIZXPLVXKQBCMXGPNTEHCJGVZQFEDIRAYJERCNYYIXEGHWHUJFMTWUMMLNTGDUMIWIELAALJOEYYHV");

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
    msg.setTimeStamp(0.949843964161);
    msg.setSource(63751U);
    msg.setSourceEntity(98U);
    msg.setDestination(34574U);
    msg.setDestinationEntity(39U);
    msg.seq = 1458051368U;
    msg.destination.assign("WFAPSULSHGMGYRAVMSYVQFHSGBIAJRJNIEIACBHYOHMWFSZZYDYGHZFYHUCATQIRGLCPZEOZFXQQZOPEXBSMMWFUFNFDPFGVMWSOHOKDYITCLKNBRHTXEWSWVBREXMLTVJQEKLISKKXCBBVJQSECKKTRVKDQARXVBUNLQIJDMFWXEJYRWJDATVHBZOOJGPEULTXDROPADKYQOCNRCDHGNWNAEBCPNDUZNUJXWKLTIMZIQLPJ");
    msg.timeout = 5191U;
    const char tmp_msg_0[] = {125, -31, -109, 124, -114, 112, 2, -114, -93, -15, -84, 8, 94, 31, -19, 104, -65, 32, -73, -80, -78, -64, 84, 37, -102, -97, -41, 99, -115, 108, -62, 87, 121, -106, -36, -41, -78, 77, 58, 112, 109, -13, 68, -124, 27, -78, -28, -90, 79, -113, -14, 108, 46, -56, -48, -6, -8, -98, 21, 4, 60, 72, -59, 121, 18, -90, 89, -81, -23, 105, 120, 115, 88, 117, 119, 63, 32, -20, -11, -51, -54, 110, 34, -123, -107, 28, -4, 109, -124, -117, 124, 39, -61, -86, -64, -34, 68, 112, 116, 11, 69, 19, 87, 17, 61, 38, 55, -95, -109, -71, 91, 73, 103, 1, -4, 103, 14, 83, -115, -86, 56, 57, 99, 7, -52, -43, 103, -107, -71, -62, -83, 79, -14, -106, -126, -75, -98, 77, 10, -15, 98, 81, 32, -93, -80, 122, -51, -128, -74, 100, 123, -62, -122, -65, 79, -67, 118, 73, -77, -82, -122, 78, -50, -68, 56, -39, -18, -43, 125, 124, -62, 45, -62, -105, 18, 111, 18, 87, 53};
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
    msg.setTimeStamp(0.126804602976);
    msg.setSource(45843U);
    msg.setSourceEntity(29U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(223U);
    msg.seq = 1523338229U;
    msg.destination.assign("CFGOKHESOZLHTNDCYCZYUOPXJCRPQRVDDFJGMFYMKRKTXZLVPSNCQNBWMMIKAVMOHGIWNBNEOFJPUZYYZPVUPQMHERADZGTBYQTTBUKODAEEWJUIUGUTXIZAAOWBIXMUISASOQFOVRWYHKNIHEGLSXEWQRRHIHLXYWSTYJWSPJSVZIUARTBVTADCQFEPDCNCSGJEJXLKVKCYUDNWX");
    msg.timeout = 57321U;
    const char tmp_msg_0[] = {0, 110, 82, 105, -114, -98, -7, -126, -90, 70, 124, -105, 30, -52, -110, 40, -25, -26, 122, -69, -24, -91, -108, -104, -34, 110, -30, -126, -49, -81, -47, -118, 30, -34, -125, -14, 100, 20, -76, -71, -75, -105, 44, -44, 125, -23, 48, -5, -59, 6, 116, 26, 40, -8, -106, -26, 10, 41, -60, -95, 2, -40, 50, -99, -43, -9, 68, 106, 66, 1, 77, -9, -114, 24, -33, 68, 4, -66, 28, 49, -14, -59, -26, -116};
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
    msg.setTimeStamp(0.0404180710293);
    msg.setSource(9517U);
    msg.setSourceEntity(46U);
    msg.setDestination(64911U);
    msg.setDestinationEntity(47U);
    msg.seq = 1067926004U;
    msg.destination.assign("QQTKKPVXZPFRCDFKKHFFUJRXPAHGFCDKCLQIJTHHQJDKOSXTFKSBNHAOLRFEEEUYCRPZIBKPWUJWQIBXXLRDTGOIZSYLAWWMECXQNOQSLNPOWVMRAIFFAWPBIPNOUOGJNYTZBIYQGYYWJHVEHXVUFCLMSSXZYHLMLXDCTZONEUZNBGAJSQJOBOKPDYRRNDUMWABESZVMSYTGVLJJMBVIDRZZNXEIUUTAG");
    msg.timeout = 24589U;
    const char tmp_msg_0[] = {52, 52, -54, 84, -118, -40, 90, -102, -103, -107, 76, 4, 29, 92, -70, -29, -11, 72, -31, -109, 95, -99, -120, 104, -96, -95, -127, -32, 56, -5, -36, -120, 123, 50, 95, -12, 78, -57, -108, 104, 0, 39, -16, -47, -30, -53, 53, -101, 40, -120, 30, 3, -53, 96, 51, 4, -2, -64, -98, -29, 116, 53, 59, -71, -42, -27, 23, 64, -15, -2, -22, 122, -49, -61, 68, -2, -65, 99, 123, 55, 19, 89, -71, 20, -94, 45, -62, 13, -37, -34, 35, 42, -74, -9, 92, 0, -59, -10, 14, -23, 11, 0, -115, -15, 11, 14, 117, 57, 106, 18, -54, -38, 100, -40, 53, 71, -33, -2, -128, 21, 75, -94, -31, 62, -30, 37, 21, 39, 105, -1, 111, 60, -2, 17, 87, 94, 66, 13, -75, -45, -11, -36, -10, 83, -87, -103, -29, 87, 115, -39, -42, -40, -23, -30, -48, -72, -103, 5, 68, -81, 23, -77, 27, -6, -59, 71, -113, 39, -127, -109, 109, 87, 105, 82, 77, 53, 101, 83, -29, 36, -115, 118, 100, 2, 121, 72, -72, 25, 60, 50, 104, -36, -55, -67, 104, -89, -97};
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
    msg.setTimeStamp(0.0327569521681);
    msg.setSource(22550U);
    msg.setSourceEntity(212U);
    msg.setDestination(50628U);
    msg.setDestinationEntity(86U);
    msg.source.assign("IUQETQZTIPRDGQBVWEWLBJKFJQLIVEGHOLKJZEGZRLMKNLZBFMHVXYZNJFMXYAXDQZTESTLGDNFMJDIYFSDSJUYPRGXYAQHOTKNAWMBMKTKSHDDEXVHOPU");
    const char tmp_msg_0[] = {67, 80, -53, 66, -40, 121, -25, -41, -62, -87, -113, 84, -92, -1, -52, 93, 110, 122, 43, 25, 41, -79, -99, 41, -33, 1, -67, 8, 7, 16, -36, 62, -66, -32, -13, 120, -94, -63, 119, 77, -1, -12, 60, -86, -23, 43, 120, 80, -104, 17, 12, 72, 25, -118, 70, 39, 9, -68, 46, 62, 57, -117, -128, 74, 48, 48, 75, 94, -8, -25, 0, -41, -15, 41, -107, -8, -40, -46, 59, 10, 116, -97, -10, 16, 79, -102, -101, 26, 26, 90, 115, -46, 112, -103, -57, -14, 83, 91, -57, -32, -62, 49, 29, -24, 35, -15, -28, 16, -49, 8, -78, 86, 31, 20, 112, -25, 100, -55, -57, 41, -28, 63, -63, 36, 54, 15, -47, 123, 17, -46, 52, 55, -61, -67, -31, 126, -59, -116, 95, -107, -120, 11, -48, -111, -53, 46, -57, -2, -57, 107, 61, 9, -69, 23, 83, 75, -10, -41, 122, 52, 118, 119, -9, 92, 6, 48, -2, 115, -117, 38, -53, -100};
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
    msg.setTimeStamp(0.60231556372);
    msg.setSource(57212U);
    msg.setSourceEntity(231U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(7U);
    msg.source.assign("EEKTLIXTGGBRFZLTAAQPEYSLRTOCBNXUMJJWHGWVFKPFWMOZVCZZQJJIBMCLQSOIJOQWYALWRPGCNJGIYERFM");
    const char tmp_msg_0[] = {92, -112, 23, 92, -77, -27, 39, 110, 73, 13, 21, 25, 82, -19, -63, -54, -41, 0, -81, -53, -113, 72, 58, -116, -29, 24, 48, 81, 102, 53, -5, -114, -107, -73, 47, 122, -122, -30, -102, -81, -43, -83, 58, 88, 15, 26, -104, 85, -57, 82, -50, -88, 7, 82, 12, 97, 81, 123, -61, 95, 58, 79, -21, 13, -87, -9, 12, 54, 25, 126, -73, -31, 74, -112, 112, 50, -79, -69, -6, -99, 68, -116, -50, -105, 6, -14, 116, 62, -103, 102, 33, 20, 51, 93, -99, 43, -79, -90, -127, -93, -22, -52, -128, -110, -21, -90, -9, 119, 30, 43, -88, 60, 6, -124, -49, -114, -62, 106, -110, 72, 74, -126, -80, -2, -107, 22, 97, 14, 100, 112, 72, 99, -5, 87, 59, 28, 53, -72, 110, 61, -126, 57, -10, 111, 90, 47, 82, 58, -64, -58, 102, -16, 117, -8, -96, -98, 17, -56, 93, -93, 11, -67, -86, -28, -35, 96, -12, -126, 34, -61, -7, 62, 123, 12, 77, -99, -3, 77, 63, 11, -89, -16, 125, 59, 108, -10, -65, -9, -75, 54, -29, -121, -44, 75, 7, 1, 124, 92, 59, 30, 48, 83, -111};
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
    msg.setTimeStamp(0.371037657105);
    msg.setSource(16394U);
    msg.setSourceEntity(215U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(170U);
    msg.source.assign("EETJFYZBOFYDEJJMQZRLLOEOIPQOIYEUUYA");
    const char tmp_msg_0[] = {40, -40, -62, -96, -36, 125, 53, -38, 67, -48, 83, 66, 58, -124, 18, 116, 96, 80, 78, -104, 27, -30, 78, -7, 19, 94, -102, 17, 52, -94};
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
    msg.setTimeStamp(0.144112339962);
    msg.setSource(26473U);
    msg.setSourceEntity(240U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(160U);
    msg.seq = 42083698U;
    msg.state = 158U;
    msg.error.assign("NPFQBQRIMYALWOWBXRINJKUFUJTEETQDSUSDGIVXAIOG");

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
    msg.setTimeStamp(0.877787908546);
    msg.setSource(27015U);
    msg.setSourceEntity(121U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(180U);
    msg.seq = 3555623618U;
    msg.state = 167U;
    msg.error.assign("SCSFNEXWXDNYZGBFJTLQSLRPGBDXZBLVQUGEPCIKTPJPTRGMAMZSDOTCEKPZEKVHZFZLQWJUELWDRADRYHWBEIHIYPGJHQKAHNSAVBQUNMZLVGIRTMDSUNORXOKCIUOSYNIIOMXFXAZDAFFVULJJUHZOUGCJZBGCQATVSPWSXACEHLBDOVRWCVOPWKIHFEXYKYTLNYGVKBNMNOITQRESLGAUMBDDMOPMRJKJWQFNAYHXWCXBHKEVFFMJY");

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
    msg.setTimeStamp(0.731337812314);
    msg.setSource(61500U);
    msg.setSourceEntity(225U);
    msg.setDestination(34541U);
    msg.setDestinationEntity(60U);
    msg.seq = 2852767378U;
    msg.state = 114U;
    msg.error.assign("RZBUTHPFWAWIXRZKQVNXTIEXSHGZPHUBYDMDMTSPEQPVZYRCPYYDGNOEZOVULZOSBYKQJUAIMCQLDCNUCLOFYRMCMVASRNXUHQHBGQLUVTNKAFOOVZRSIMSHWTFFKIBTJHL");

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
    msg.setTimeStamp(0.986737447935);
    msg.setSource(10159U);
    msg.setSourceEntity(182U);
    msg.setDestination(12493U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("WTKENMCGGOQFCDMZKGWEOBEKRCRGZN");
    msg.text.assign("QRWQUWXNEXRXLCFRYJWKPSNEGWPZEYLXCUSLXLMATHMHHGJUOFFPYZSYAGIOZKHAAKGQRIYKTUBIUODKGCD");

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
    msg.setTimeStamp(0.501464603925);
    msg.setSource(14394U);
    msg.setSourceEntity(82U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("BZVMYEAPTFETEWPLHOBCJSHBDKTCTAKKIHVDXAHCXWXFJTGPMATLKOEKEQNURWISKLMMZOKYGZVLCLOSOGGAVQIARXJXSISGFQTAOLYDO");
    msg.text.assign("JIQXKUCGLVKROUFPYCMACDSNFPAEJUUCAVML");

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
    msg.setTimeStamp(0.0759346751286);
    msg.setSource(30506U);
    msg.setSourceEntity(58U);
    msg.setDestination(53400U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("LKEXOFNYLLTAFXBJMOZMWUVTSYULBVBBOSCQODWDIIYTAHKJEVIRFQNSPFRGZZKJNBSCMVRRDXEICMPDNHOUGHNAZSQGGAAUPGKJTDUUDPPROHLKSRWKQGPAKTBTEINXNHMLLQTPWICWCJHENFXJIFBBDERWJLAWNGLOECTYGUCYCZSYGUHYXJLNCKBVZVRWMMFOIFCWZSHQSRDFQDIZGVKDATZKOYVESABHJFPM");
    msg.text.assign("RLABAQDSPNUWOKERJXGZCZXAHBQZSTYMQCJYHOUFQLGQTJXYOVJSKHXBZVFRLXTHFCBVCEGHLJAHIXXGEEQUUCZKNSLHRJUAZROPBZKWOBMGNELPCNINCIMKQVNAEWISMWFYYLVGMUEBYPTYKDGSDNFSWUPE");

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
    msg.setTimeStamp(0.345193690864);
    msg.setSource(62720U);
    msg.setSourceEntity(89U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("CZOJZIVIJSHNSVTQVG");
    msg.htime = 0.6785047796;
    msg.lat = 0.535571542591;
    msg.lon = 0.877051602005;
    const char tmp_msg_0[] = {-48, -79, -3, 61, -86, -126, -2, 10, -84, 21, -1, 106, 71, -67, -119, 62, -42, -9, 35, 85, 0, -118, -91, -31, -46, -66, -43, -17, 4, -60, -55, -3, -119, -115, 74, 0, -79, 17, -18, -43, -17, 43, 62, 71, 56, -71, -69, -20, -37, -48, -79, 40, 23, -118, 54, -15, 103, -77, -84, -121, 94, 79, -125, -86, 120, -118, 12, -69, -66, -75, 11, -26, -102, -4, 103, 69, -19, -106, 52, -69, 15, -79, 31, -107, -99, 25, -28, -36, 4, 74, 80, 43, 24, -117, -55, 23, -87, -64, -78, -123, -72, 100, 58, -83, 57, -115, -10, 40, -100, -37};
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
    msg.setTimeStamp(0.4971668457);
    msg.setSource(55202U);
    msg.setSourceEntity(236U);
    msg.setDestination(38697U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("AELJOQIKNIBFIPUOZXVAPTNUKDEUCFSQKRTTGTOGNWOPESOJKHIFECOANHAFWZMXBVJLVBGWHRCQCDMWQUICPYFXJNKJBSNXVWYBKPEXCMYJRFZBYOHAVHZMNTDPEVFQSMNRCZJVYROSXDKQPHBLLGRIGUXLPCETMMCXMEQGMJG");
    msg.htime = 0.0710983825317;
    msg.lat = 0.801625394125;
    msg.lon = 0.81693039073;
    const char tmp_msg_0[] = {43, -75, 1, -53, 123, 17, 82, -30, -41, 40, 54, -104, -86, -124, 27, 34, 109, 59, 66, 71, 120, 125, -30, -13, -4, 96, 71, 65, 76, -50, -18, -49, -50, -47, 83, -124, -11, -117, 9, -14, 100, 60, 68, 117, 72, 57, -111, 41, 63, 75, 101, -40, 74, -91, 39, 21, -79, 53, -114, -2, 84, 81, -118, -29, 34, 7, 95, 49, -48, 31, -17, 14, -93};
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
    msg.setTimeStamp(0.259313817202);
    msg.setSource(41842U);
    msg.setSourceEntity(18U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("WNEHJFCNEOMCJFCZVNQXICPRIHJRUQCQRRDLGTEYZHVUHRARZZUZHYBYTERSWVJADGBXSXUZGZEBBGTWFXSXQKTRKWZWKPHJBXTONKLODFGEBPPLZTFPFQDMHWMIMFLIGMPBMELCMGILOOFEXFSSYDKWPIGYAXIWOOLXSCSHUKVAKRSDUSJVHVUFNMNGQLBVJ");
    msg.htime = 0.342672527332;
    msg.lat = 0.570696559615;
    msg.lon = 0.873770288937;
    const char tmp_msg_0[] = {-60, 62, -14, -113, 20, -40, -128, 6, 119, 22, -66, 45, -89, -72, -96, 19, -93, 6, 115, 37, -9, -58, -56, 15, -12, 48, -113, -66, 57, -71, 64, -30, -18, 123, 0, 3, -72, 53, -82, -9, -43, -50, 81, -2, 20, 98, 68, 119, 31, 50, -112, 63, 81, 82, 104, 38, 13, 122, -17, -2, -111, 13, -9, -107, -125, 1, -73, -99, 43, 28, 118, 18, 27, 68, -50, -123, -117, 120, 81, -60, 97, 54, -118, 123, -4, -29, -37, 108, 113, 52, -27, 49, -4, -90, -36, -68, 81, 112, -112, 106, 104, -85, -27, 109, 95, 110, -64, -111, -90, 62, -76, 45, -32, 1, -94, 48, -40, -42, -32, 114, 47, -5, 104, 112, -77, -32, -92, 60, -56, -16, 119, -28, -24, -104, -72, -104, 70, 45, -123, 89, 86, 16, -56, 88, 30, 22, -52, 97, 100, 5, -54, -41, -65, -84, 58, 102, 24, -53, 76, -33, -125, -42, -14, 33, -33, 109, -124, 80, -18, -110, -66, 6, -104, 98, -24, -9, -64, 84, 10, 99, -105, -84, -7, 43, 119, -23, 77, 2, 23, -12, 101, -60, 30, 36, -81};
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
    msg.setTimeStamp(0.763947799989);
    msg.setSource(34135U);
    msg.setSourceEntity(77U);
    msg.setDestination(12181U);
    msg.setDestinationEntity(40U);
    msg.req_id = 63440U;
    msg.ttl = 16016U;
    msg.destination.assign("VKXKZVCNFSYDUXYSFJZGPCLUCVEZQNMXDXHPMHKOFMJIJBFFL");
    const char tmp_msg_0[] = {26, -6, -21, -120, -19, 27, 91, -9, 101, -83, 89, -25, -34, 4, -112, -26, 6, 23, -11, -123, 83, -101, 16, 80, -85, -92, -43, -95, -75, 32, 95, 112, -48, -66, 62, 29, 86, 61, 75, -49, -33, 77, -62, -32, 18, -69, 17, -83, 88, -34, -112, 69, 23, -62, 126, 43, 1, -74, -68, 38, -73, -15, 71, -95, -113, 63, -110, -34, 45, -105, -115, 41, -91, -84, -44, 32, 100, -114, 1, -9, 53, 119, 106, -88, -10, -46, 58, 100, -44, 29, 110, 11, -79, 95, 120, 81, 36, -107, 44, -86, 24, -39, -28, 104, 114, -7, -113, 18, -120, -124, 90, 88, 27, -58, -42, 62, 114, -57, -126, 98, 50, 51, 53, -89, -6, -78, 24, -55, -97, 5, 81, 64, -81, 93, -107, 63, 121, -123, -116, -102, 23, 0, 114, -102, 20, -50, 41, 55, 108, -22, -60, -38, 11, 25, 84, -74, 86, -32, -85, -76, 18, -99, -115, 25, 67, 119, 59, 40, -110, 64, 88, -35, -22, 114, 99, -7, 78, 91, 35, -87, -75, 110, -1, 107, 55, 15, 3, -122, -92, 36, 117, -40, 46, 18, 9, -60, -121, -64, 61, -110, -56, 31, 40, -67, 43, -39, 106, 66, 97, 71, -14, -66, -68, 63, 3, 38, -40, -40, -3, -95, -5, 7, -18, 17, -27, 2, 31, 80, 2, 98, -3, -112, -116, -85, 50, -66, 85, -100, -71, 39};
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
    msg.setTimeStamp(0.552852665839);
    msg.setSource(36956U);
    msg.setSourceEntity(129U);
    msg.setDestination(22505U);
    msg.setDestinationEntity(248U);
    msg.req_id = 43123U;
    msg.ttl = 65083U;
    msg.destination.assign("AUQPNNJLYXRQVHYFOVXDLZXJIWOROSAUXWGWMPFCSYRXCACGQOGDOKVSRMDNTFAXCRSOBGIJROTMLIOPGGIEWEHZIMECJIYBFFQIEKSTNMAPZKLBTLXJZAIHNTEHGRWWSTEAFUBNYZRQDNHBNBUCXLJWMTEZVSURWDLDAVUXHJYDFEHOVVFPQVLVPKLFEZPKNUQINCXHKHDKMKTZPTFPYYHZMUBMBQKJSVGITBS");
    const char tmp_msg_0[] = {-73, -85, 72, 76, 0, 68, -35, -19, 6, -53, -27, -37, -62, -110, -106, -61, 117, -103, 67, 67, -4, 50, -52, -17, 2, 14, 21, 84, -57, -72, 5, -98, 88, -119, -46, -30, 24, -62, 54, -27, 7, -54, -40, 67, -53, 56, 33, 60, -57, 76, 59, -1, -121, 86, 115, -32, 115, -20, 78, 116, 71, -33, -128, -68, 122, 116, 50, 107, 83, -82, -103, 44, -65, -64, -96, 89, 10, 109, 62, 109, 63, -112, -109, 102, -2, 97, 9, 11, -19, 68, -81, -56, -121, -104, -20, 56, -121, -71, 78, -7, 82, 94, 97, -50, -101, -29, 94, 79, -38, 45, -32, 52, -42, -126, -34, 52, -21, 35, 101, 45, 113, -101, 38, -89, 62, 117, -37, 44, -125, -105, -80, -100, 6, -24, -118};
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
    msg.setTimeStamp(0.819320340433);
    msg.setSource(61998U);
    msg.setSourceEntity(152U);
    msg.setDestination(9753U);
    msg.setDestinationEntity(229U);
    msg.req_id = 18428U;
    msg.ttl = 26369U;
    msg.destination.assign("PVMMIRQMKNABJFIAIJECSJHQVSWVLKGFCVKTTQJKHXUYTOOTGZKTPEAMSAZHWPVWBUJEA");
    const char tmp_msg_0[] = {-49, -28, -126, 93, -109, 112, 43, -39, 70, 44, 22, -73, 118, -75, 23, -88, -54, -39, 16, 45, -57, -2, -39, 49, 26, 11, 41, -84, 99, -20, -52, 122, 102, 72, 19, 111, -108, -47, 6};
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
    msg.setTimeStamp(0.0976749642074);
    msg.setSource(47156U);
    msg.setSourceEntity(25U);
    msg.setDestination(42665U);
    msg.setDestinationEntity(65U);
    msg.req_id = 42576U;
    msg.status = 163U;
    msg.text.assign("HOXQTEGTMRDBPKFENHXBCBYTEANCVCQURIYKTMDKEUZQDMOFINIDSFBJPZAOULYUENJISXGLKLMRVFJXVPOWXQJRNSICXERMHGLFGAFPPYLPLBAGZAYKYQPHUXCCHZKSDRUFQBZOOFDUWIRQZTZWZEWYFWNHFDMVSCAOTVJAGJVBAIJRSBWZBHVGPCBTSIXMCUCKOXHJKO");

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
    msg.setTimeStamp(0.00247967498825);
    msg.setSource(12139U);
    msg.setSourceEntity(60U);
    msg.setDestination(30455U);
    msg.setDestinationEntity(81U);
    msg.req_id = 32160U;
    msg.status = 76U;
    msg.text.assign("PAYMGFCXQIPRRAKLNXCIZKXZWNFNPGHNSLNGFETBAXAQVRVRLHVXRLJUHLOSWMTNOBVHVMJBVMTSAJQWECZKCFDTTKSHKSHDVWDMAPEEFCWZKNYYPZVDXBMPAQZTVKCZTHJLBEYVQMFPIIJHEKUXOSDFXZJJETCDOUWYRQUJOGJRDLOSPMEBPEMOTYOFQXAIKSIWSCZKXLNTCBIHRGGIDUWGYDWNOSFJRGLMUAZRBNYOUHEYPIUU");

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
    msg.setTimeStamp(0.763252825687);
    msg.setSource(4621U);
    msg.setSourceEntity(246U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(42U);
    msg.req_id = 35396U;
    msg.status = 62U;
    msg.text.assign("AVLLCSIOHZDVNRNLFDXVSVPRQYBVMLNRMGKZCLTPPFEQEJSSQKUMFMYNSOTHMIBWZUKJBIPKCIKYIKXHXPPZXRIHZIRAKWOWFYCGGEOEMYAJHMSUBDAJYZEDUBJSLFTLDJTTKHTQWFERUHSNYXGRGKXYRMLHPGGYFUMBQOWEGVBLEQ");

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
    msg.setTimeStamp(0.0348209530381);
    msg.setSource(49369U);
    msg.setSourceEntity(24U);
    msg.setDestination(21921U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("JZAHWHOUIVQFMTMIYGLTQMLMJNHPCLQOMXKXNYPKATMCRPHAYVJJUVVZPKXWKQHVICSRZGOVAYVRSQBTMZGBIBSORCPWRFXZDZXZWOFLEPJDCBABPLIXHETQFNKPUJCEYHDURIXDOTRALEZTYMDDFFERBOKNABDMVYJGHSQBIREGKAJ");
    msg.links = 1003158434U;

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
    msg.setTimeStamp(0.510265798567);
    msg.setSource(49320U);
    msg.setSourceEntity(44U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("CXQMWPLNHZMRKRWKRWEHCXUFZESCEHCMNIIJOZ");
    msg.links = 1240159538U;

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
    msg.setTimeStamp(0.797360164048);
    msg.setSource(52840U);
    msg.setSourceEntity(186U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("FSFSOEZECMWOEDYDWWYMDPTLJMPUHZYIKVL");
    msg.links = 486835630U;

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
    msg.setTimeStamp(0.806926815286);
    msg.setSource(53222U);
    msg.setSourceEntity(64U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("KDDTENLVDUSPPGWHPVPBHXYOYATWBLQQHUOWFSMCBFFIQETAKXTRSLWUIAVDQKUANRGCAYXPFSRKDJJXOLQIYIIWIOAMFVIINGJFQKGUBNHCHSTUYUJQVLXGCMWJYRZFIHVCKGMOOJKDSPOBEEANBBZKCTCGSSTHSDOYFDHRRR");
    msg.action = 165U;
    msg.grouplist.assign("ZLISHCKKPZEJXWQXDGDDEWKSHBIVZJUCPANRYIIVPQUGRIONSLFYJALQFHFFRRGDPVRHTPEMKHOTQMWZJQWRIPARCSTKMZG");

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
    msg.setTimeStamp(0.504367673663);
    msg.setSource(39996U);
    msg.setSourceEntity(101U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(181U);
    msg.groupname.assign("YNBMNHLJURXBCQOWWQKRZCFJSABMGEQSJVJODKPDMKOEREVYYXLTWSTKTUPAYWDGHBDSZZXYAHRPDVJTCTQBFGWVGWZNUBAUZOMTOYCLG");
    msg.action = 230U;
    msg.grouplist.assign("QAMLOQATBZIRQCINKMOPHFUPPDYDLAFSKHQKULZAAJBHZMODCLFQCSBUWINKZMKHWYWTSZXSJKRRFBTMQURUDCLWYPRVDHCBDMROGRSBEHNVOZFMXXEBNUICUGMFOSTGUOHLMDNSOPNQQLWFTGEAZWYXACGEGTJWO");

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
    msg.setTimeStamp(0.96092547549);
    msg.setSource(47735U);
    msg.setSourceEntity(70U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("MJEOZTRIAGNEQJKPNDXXDOVRBDTCCDHCWPHGXDLYOAHKUFMGCKCSLGGUMMUNE");
    msg.action = 15U;
    msg.grouplist.assign("GNRONLKFXRYOCCVSERDJLYPXLOYFGWJIPDASPNCJJGTKBVBUDQRAAUTOFSPXBIHPNLBKHDJAPDFFSQNIVMXTLUMHDUJQXHOFWCDSKZXHIESSYQTMYVWWNIELKBYMWANZOMPCUSTFSDKLAVTPVDAJHIHVECBASNHLMQZILBWBZEDZGBIOGEEXURZXPQXCYZNOUJTRKLQZKZEFBGJICQWVTEUYOXKICEMRQGYFRGTV");

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
    msg.setTimeStamp(0.412113503968);
    msg.setSource(56917U);
    msg.setSourceEntity(82U);
    msg.setDestination(28691U);
    msg.setDestinationEntity(253U);
    msg.value = 0.937983886863;
    msg.sys_src = 61274U;

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
    msg.setTimeStamp(0.012591207745);
    msg.setSource(52137U);
    msg.setSourceEntity(2U);
    msg.setDestination(20323U);
    msg.setDestinationEntity(110U);
    msg.value = 0.187430654296;
    msg.sys_src = 45135U;

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
    msg.setTimeStamp(0.0619202797794);
    msg.setSource(11650U);
    msg.setSourceEntity(154U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(249U);
    msg.value = 0.575734012668;
    msg.sys_src = 28774U;

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
    msg.setTimeStamp(0.288548409902);
    msg.setSource(44647U);
    msg.setSourceEntity(192U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(30U);
    msg.value = 0.786132449311;
    msg.units = 13U;

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
    msg.setTimeStamp(0.371511421174);
    msg.setSource(49798U);
    msg.setSourceEntity(214U);
    msg.setDestination(3U);
    msg.setDestinationEntity(133U);
    msg.value = 0.866154672915;
    msg.units = 80U;

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
    msg.setTimeStamp(0.0951129555625);
    msg.setSource(50965U);
    msg.setSourceEntity(196U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(159U);
    msg.value = 0.783739626617;
    msg.units = 85U;

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
    msg.setTimeStamp(0.108613828687);
    msg.setSource(42996U);
    msg.setSourceEntity(39U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(75U);
    msg.base_lat = 0.366545734262;
    msg.base_lon = 0.300946187274;
    msg.base_time = 0.176146962693;

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
    msg.setTimeStamp(0.746865832089);
    msg.setSource(29166U);
    msg.setSourceEntity(105U);
    msg.setDestination(14073U);
    msg.setDestinationEntity(212U);
    msg.base_lat = 0.260497781357;
    msg.base_lon = 0.753519405093;
    msg.base_time = 0.36402409292;

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
    msg.setTimeStamp(0.0432021405431);
    msg.setSource(8988U);
    msg.setSourceEntity(26U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.909132104225;
    msg.base_lon = 0.631815278069;
    msg.base_time = 0.0954994142132;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 24941U;
    tmp_msg_0.priority = 111;
    tmp_msg_0.x = 16003;
    tmp_msg_0.y = -26073;
    tmp_msg_0.z = -29480;
    tmp_msg_0.t = -9658;
    IMC::DevCalibrationControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 237U;
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
    msg.setTimeStamp(0.148543000839);
    msg.setSource(64810U);
    msg.setSourceEntity(0U);
    msg.setDestination(60291U);
    msg.setDestinationEntity(249U);
    msg.base_lat = 0.893380694449;
    msg.base_lon = 0.395510582643;
    msg.base_time = 0.997474099001;
    const char tmp_msg_0[] = {-55, 123, 108, 91, 23, -60, 118, -105, -104, 42, -121, 48, 7, 60, 67, 106, 17, 90, 100, -94, 79, 52, 66, -72, 28, 65, -48, 94, 116, 46, -108, 53, -105, -58, 6, 49, -17, -16, 24, -5, -32, 112, -54, -122, 115, 3, 39, -61, 28, -77, 22, 39, 49, 93, 17, -37, 84, -86, -26, -55, 63, 119, 5, 80, -98, -56, 24, -115, -62, -44, -106, -47, -2, -5, 91, -104, 24, 73, -9, 17, -38, -75, 27, 100, -13, -18, 12, -27, 97, -69, -108, -76, -125, 103, 3, 118, 112, -24, 32, -39, -50, 44, -122, 66, 27, 12, 3, -127, -24, 63, -112, -8, 50, -1, -32, 74, -38, 42, -62, -46, 15, -68, 89, 120, 21, -122, 69, -91, -60, -92, 36, 62, -60, 91, -23, 115, -71, -107, -64, -93, 97, 97, 112, -24, 72, 45, -104, 80, 87, 87, -63, -74, -58, 53, -95, 54, 102, -113, 15, -93, 73, 9, 30, 50, -121, 85, 104, 17, -57, 74, -115, -62, -55, 41, -95, -28, 105, 11, -96, -49, -32, -8, -13, 0, -82, 69};
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
    msg.setTimeStamp(0.93231869331);
    msg.setSource(35909U);
    msg.setSourceEntity(200U);
    msg.setDestination(20180U);
    msg.setDestinationEntity(57U);
    msg.base_lat = 0.695360858212;
    msg.base_lon = 0.727253256148;
    msg.base_time = 0.626575047496;
    const char tmp_msg_0[] = {-123, 79, -112, 51, -57, 104, 80, -12, 108, -43, 119, -41, 38, 49, -50, 123, -126, 86, -92, 69, 0, 115, -104, -98, 37, 114, 59, 4, -73, 38, 66, -76, -117, -88, 122, -40, 50, -4, 59, -103, -118, 100, -110, 2, -51, -89, -45, -81, -24};
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
    msg.setTimeStamp(0.575835406496);
    msg.setSource(39429U);
    msg.setSourceEntity(74U);
    msg.setDestination(25898U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.957386492808;
    msg.base_lon = 0.678218911672;
    msg.base_time = 0.364944496532;
    const char tmp_msg_0[] = {14, 120, 33, -7, -86, 69, 110, -59, 42, -31, -33, -43, -80, 113, 71, -17, -32, 96, -23, -76, 98, 98, -55, -53, -31, -21, 88, 41, -19, 119, 110, 73, 58, 22, 38, 84, -88, 113, 69, -22, -26, 48, -63, 114, -10, -120, 30, -3, -55, 28, 126, 46, 100, 51, 34, 50, -68, 52, -122, -4, 84, -73, 60, -100, -112, 96, -70, 116, -128, -95, -89, -112, -44, -44, 90, -34, 38, -101, 63, -128, -104, 104, 52, -50, -28, 21, -68, -87, -14, 117, -8, 112, 102, 57, -30, -44, -57, -79, 99, -6, 107, -44, 25, -84, -67, 119, 67, -80, -68, -65, 75, -75, 40, 82, -42, 102, 51, -117, -45, 110, 121, 36, -46, -55, -35, -68, 80, 20, -103, -86, 86, -68, 7, 38, -35, 16, -5, 52, 75, 28, -124, -99, -106, 103, -75, -54, -41, 105, -62, -17, -101, -103, -28, 19, -96, 118, -5, -61, -56, -90, -41, 67, 115, -127, 106, -124, -70, -58, -23, -64, 84, 54, 40, 118, 27, 72, 107, 60, 22, 3, -8, 42, 50, -56, -18, -10, -121, -40, -5, -50, -112, -43, -66, -103, -13, -37, -80, -36, -123};
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
    msg.setTimeStamp(0.158902014995);
    msg.setSource(46999U);
    msg.setSourceEntity(97U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(164U);
    msg.sys_id = 33709U;
    msg.priority = -5;
    msg.x = -24310;
    msg.y = 17602;
    msg.z = 15654;
    msg.t = -876;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 69U;
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
    msg.setTimeStamp(0.119138393998);
    msg.setSource(32916U);
    msg.setSourceEntity(212U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(136U);
    msg.sys_id = 42107U;
    msg.priority = -65;
    msg.x = 9751;
    msg.y = 13472;
    msg.z = -30338;
    msg.t = -27874;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.891036597467;
    tmp_msg_0.lon = 0.751583332714;
    tmp_msg_0.depth = 0.498775141537;
    tmp_msg_0.roll = 0.940746343968;
    tmp_msg_0.pitch = 0.434194986849;
    tmp_msg_0.yaw = 0.300942144224;
    tmp_msg_0.rcp_time = 0.195385317989;
    tmp_msg_0.sid.assign("MJURNVXACGTWNSUDZZXDEMEMEBIJOADYDNHUTDGUXQYTTPYBERVLYQJUBUQNOBUHODODLNLMB");
    tmp_msg_0.s_type = 50U;
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
    msg.setTimeStamp(0.714786922544);
    msg.setSource(17020U);
    msg.setSourceEntity(201U);
    msg.setDestination(48847U);
    msg.setDestinationEntity(59U);
    msg.sys_id = 41081U;
    msg.priority = 13;
    msg.x = 29664;
    msg.y = -24147;
    msg.z = -8713;
    msg.t = -20635;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 175U;
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
    msg.setTimeStamp(0.446483445509);
    msg.setSource(634U);
    msg.setSourceEntity(171U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(0U);
    msg.req_id = 5972U;
    msg.type = 4U;
    msg.max_size = 38434U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.211654796919;
    tmp_msg_0.base_lon = 0.327211657469;
    tmp_msg_0.base_time = 0.979449005027;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 57683U;
    tmp_tmp_msg_0_0.priority = -14;
    tmp_tmp_msg_0_0.x = 18329;
    tmp_tmp_msg_0_0.y = 16409;
    tmp_tmp_msg_0_0.z = -14211;
    tmp_tmp_msg_0_0.t = -29326;
    IMC::Voltage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.309407648992;
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
    msg.setTimeStamp(0.641601129045);
    msg.setSource(8206U);
    msg.setSourceEntity(200U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(9U);
    msg.req_id = 12371U;
    msg.type = 131U;
    msg.max_size = 30667U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.685714489301;
    tmp_msg_0.base_lon = 0.0335986536302;
    tmp_msg_0.base_time = 0.772130148269;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 5002U;
    tmp_tmp_msg_0_0.priority = 67;
    tmp_tmp_msg_0_0.x = 20781;
    tmp_tmp_msg_0_0.y = 29264;
    tmp_tmp_msg_0_0.z = -23003;
    tmp_tmp_msg_0_0.t = 1339;
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.938010825744;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.628399031064;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.95595058812;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.641260875826;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.632624502865;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.957741153231;
    tmp_tmp_tmp_msg_0_0_0.rcp_time = 0.327593738933;
    tmp_tmp_tmp_msg_0_0_0.sid.assign("IDOALJSGUGZMJHQZUTCVIMVMSLRPODFXUYGJJFHPSSVXLOHDUKDBPRPJKNCQWKWBATKECDQISRUFGOHEEKNMWFYTAMAQBIWBJMZYCYLPYVDFLLCCU");
    tmp_tmp_tmp_msg_0_0_0.s_type = 86U;
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
    msg.setTimeStamp(0.0987896677537);
    msg.setSource(18961U);
    msg.setSourceEntity(37U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(221U);
    msg.req_id = 62528U;
    msg.type = 191U;
    msg.max_size = 54044U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.585833447864;
    tmp_msg_0.base_lon = 0.878188125217;
    tmp_msg_0.base_time = 0.202651771881;
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
    msg.setTimeStamp(0.241987612105);
    msg.setSource(106U);
    msg.setSourceEntity(245U);
    msg.setDestination(15361U);
    msg.setDestinationEntity(254U);
    msg.original_source = 63547U;
    msg.destination = 18982U;
    msg.timeout = 0.805830766686;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("DOLZXIEONGJTSYTHMSZCRBCCABXAPODAAUHRHLZJGWWAVIKFAQTPOJUJZHLRDMGIFGVYPPIXGFBNUYBATULCMXUGZRMMHMSMLBCYXYTLPRVRALOLBRDXQDOWRYGWNOODIPKEIMIFZXWFSIJLBKFAVPRSQEOQBXISNAEMKUJDTKQQKVUGVSQEXRPSBFEKBJWXZNYPCENKEUKVWTFHMVJFLDCYQS");
    tmp_msg_0.max_speed = 0.681687361984;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.lat = 0.152452992254;
    tmp_msg_0.lon = 0.453144696676;
    tmp_msg_0.z = 0.989764226358;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.custom.assign("YSOHWWZYTIEKGNJJAIMDWDSVYKCZJTSCYPIQXZMOLWVVNGGDUMJFDDGEXGOQEZNAPEQDVUZHQZRTIPBUTDLSLCUKHOKFYQFTBXCDKCYJSSYFGIACGRFHPNRMXORWQZTWEESMIULIVZNCXSALCISQMMDPVVPIBPWUAEHHRKKHMLLJKEVVB");
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
    msg.setTimeStamp(0.789606686265);
    msg.setSource(49078U);
    msg.setSourceEntity(75U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(55U);
    msg.original_source = 19780U;
    msg.destination = 32488U;
    msg.timeout = 0.790181795572;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 4749U;
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
    msg.setTimeStamp(0.417480243392);
    msg.setSource(11194U);
    msg.setSourceEntity(13U);
    msg.setDestination(10100U);
    msg.setDestinationEntity(97U);
    msg.original_source = 427U;
    msg.destination = 13536U;
    msg.timeout = 0.246990503147;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 155U;
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.391635044282);
    msg.setSource(54154U);
    msg.setSourceEntity(114U);
    msg.setDestination(59643U);
    msg.setDestinationEntity(248U);
    msg.type = 214U;
    msg.comm_interface = 62117U;
    msg.model = 48931U;
    msg.list.assign("RVWWDLUESSNGNRYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.461919763853);
    msg.setSource(53994U);
    msg.setSourceEntity(244U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(111U);
    msg.type = 71U;
    msg.comm_interface = 11887U;
    msg.model = 43104U;
    msg.list.assign("GKMZFKWFKHUZJUPOIDYXRSHYDQOEJELSDVLIIXVYKLAKHFIFHTSGOYQBNACSCMQEAIZRITYWTCWEMCSDUVOLRQWDPZXOFBFWDAPWZAOWAJETUNJHYBKLBQCTNKMESUDHKUXSSAZAVDVHGVGRBQDBUXIGXNURZIHCNNLFCPTIQPLVJRSYZGVENQGMVHWCNEKRXYPUWJRQLOGBGTLPECTMYMPKFTAJOCTFMMOXNAMNRJUEXHDQXOZBFWJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.137027496922);
    msg.setSource(18834U);
    msg.setSourceEntity(12U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(42U);
    msg.type = 120U;
    msg.comm_interface = 35903U;
    msg.model = 43290U;
    msg.list.assign("NEWZXHVHOKDKIAFCRFARSJYNTGVGZGTSPPMDDQSSMUKBAVJEWKDYDVSOYBENLEZXMXIIWFHWCHELJZPVQMUFJWVLUOVWSPEFAIBUGFUJNFYHNMUCXIPCRLNDQYQJLKWILKHNXPQSOROUSKMMWORNACFGRANTITTJSMMOVBUZXTZJDDLRBWLTZERBEIBCCCGQYCLFTKEOXTMHGDOJPKDPJAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.475616763093);
    msg.setSource(4581U);
    msg.setSourceEntity(173U);
    msg.setDestination(55455U);
    msg.setDestinationEntity(202U);
    msg.type = 67U;
    msg.req_id = 1689424274U;
    msg.ttl = 41386U;
    msg.code = 91U;
    msg.destination.assign("TTLPYKKVCHEGNCZWDXFGSEYMRQHVMFZGJNTIAMPUXUIJGWTSPFVUYCUIOVLCADVIJVNQIQXNPPBSEIVFLOCGHXCXLVLEFQMMXBZSITZOZONKDLFHDUHBLRFCZNBRZBQAKLTTSJXPWIKWNQCEOUYNFJEFSDOSOPAXEAXDFOMZAWVDQCHTWSXPMIGRPYTHJR");
    msg.source.assign("KVUVAQQIVIXCMSVLHPPJHKAZSJXDGFCIUFSLMYGFJXURLEIRNODBLCGDRMPTROEUJGBYBRNLOCHCWUPVZAMSMBWTWYEOLHMATEMKNTMWFDZYWPCETICBYVFBWDPIQOOKSCHHKPOQNAOSJJYWLTRTKXXCFNS");
    msg.acknowledge = 147U;
    msg.status = 76U;
    const char tmp_msg_0[] = {-109, 106, -45, 91, -38, -37, 76, 2, 35, -48, 49, -110, -82, -49, -53, 52, 72, -106, -127, 107, -41, -10, -40, -96, 25, 72, -13, 70, 114, -21, 126, -122, -118, -19, 107, 77, 59, 78, 102, 107, -86, 58, -67, -7, -33, -17, 104, -77, -52, -13, 84, 53, -98, -119, 106, 70, 62, -7, -39, 72, 45, 87, 51, -64, -5, 70, 30, -120, 122, 54, -122, 12, 16, 112, -45, -16, 39, -48, -31, -72, 25, 58, 86, 15, -85, -73, 110, 120, 81, -75, -53, 1, 47, -24, 62, -39, 54, 103, 25, -50, 23, 35, -108, -112, -105, 68, 53, 123, -102, 56, 35, 74, 117, -22, -56, 9, -22, -8, 100, -53, -21, -39, -50, -70, -54, -96, -24, -18, 29, -19, 66, -19, -48, -6, 42, 123, -54, -9, -39, 109, 107, -90, -66, -28, 117, -10, -77, 66, 53, 49, -100, 63, 33, 50, -46, -27, -45, 50, 22, -94, -109, 70, 126, 41, -101, 65, 35, 74, -101, -94, 125, 39, -82, -83, 78, 20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.230850217065);
    msg.setSource(58639U);
    msg.setSourceEntity(118U);
    msg.setDestination(33714U);
    msg.setDestinationEntity(117U);
    msg.type = 7U;
    msg.req_id = 4236040860U;
    msg.ttl = 44513U;
    msg.code = 197U;
    msg.destination.assign("RYDIFAHULKLCNYEBFBEPRZNBJIFKPMEHPXOIRTXJILXSRGRXUOHDGLKCXCOAODFOAGXNVVFKDASSSUQVZRXDITYWMWGYOBOCDLQWJHAOJEUFGUZZGEGTUGKKYIVCATRIPJPTNRFMWIFILVBWXKJTMQONHASVDBEPQEYPZVLHJRBFQAMTJWYLZHUDPNYZLZNUNSZRWUFKXWCVPUTVXEGOQSGMQEKMMC");
    msg.source.assign("QQOGCPASOXFTAURCZKOVUXEMQCXDOLPENJMUEDYXRFVQEHNAJGWSOYWZLKTZQXBBEVGJSYYJUCIMKOSCTIVTUVWVWLDUDWRHSCNPIWCPBASLHLMGALPZZRYAUUBLIPHCNMLADTBJDJBLZHFBZPHUEGNOSTSXIUFGWKITHITITGDIDNETKFOAGIQGFHPZDVRQMQRRLAYVYYMRJXEBRKGHCKPXMZWYCWXKX");
    msg.acknowledge = 240U;
    msg.status = 215U;
    const char tmp_msg_0[] = {30, -57, -95, -79, 32, 124, 30, 102, 110, -27, 93, 102, 77, 51, 90, -54, 82, 53, 81, -100, 88, 11, 105, 42, -32, 57, 124, 72, -23, 39, -109, 98, -48, 72, -40, 77, 50, 19, -55, 62, 72, -84, -78, 104, 21, 112, -89, -118, -114, -26, -89, 9, 108, 64, 8, -79, -87, 23, -43, -87, -72, 40, -121, -82, 9, 21, -79, -116, 7, -128, 84, -92, -120, 14, 96, 37, -25, 2, -122, 83, -6, -46, -42, -44, -54, -96, 11, 26, 82, 6, 29, 26, 111, -126, 33, 67, -44, -21, 96, 40, 63, -23, -19, -101, 55, -56, -67, 90, -43, 40, 43, 90, -29, -55, 101, -60, -101, 59, -63, 2, -15, 54, -53, 85, 80, -30, -119, -45, 41, 19, -112, 99, -51, -112, 64, -32, 111, 24, 59, -101, -67, -101, -51, 70, -111, 93, 86, 29, -81, 81, -58, -28, 87, -22, -61, 111, -128, 57, 71, 56, -109, -44, 115, -98, -47, -34, 104, -1, 102, -81, -44, 62, -27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.724993127157);
    msg.setSource(54270U);
    msg.setSourceEntity(202U);
    msg.setDestination(7002U);
    msg.setDestinationEntity(36U);
    msg.type = 190U;
    msg.req_id = 3617367266U;
    msg.ttl = 45846U;
    msg.code = 81U;
    msg.destination.assign("QHEYDJTJYSWLNBNVFLNDBRDGEGGQAULKPCBILSFZNTQKMMUGVYTDZZHIVBWWMRPJGHWOETRZYNG");
    msg.source.assign("BAKDDKQUTDPZVKYMSCDLLJRYWJFEZBHEPDVFKJZVGHVOSSVNSNXXENTCSVXVJOGGMUOPQYBQWQUYDLOZLDHARMJVMTAMAKREAILRHESRAFFQBGHZOJJMQOBYCXEYVUUTBPRTHNLHUN");
    msg.acknowledge = 171U;
    msg.status = 158U;
    const char tmp_msg_0[] = {110, 3, -79, -101, -111, -36, 94, 70, -56, 124, -2, -67, 50, 80, -104, -24, 89, 55, -46, -33, 31, -66, -3, 9, 13, 74, 36, 92, -110, 94, -12, 58, 7, 4, 23, -86, 125, 11, -114, -33, 36, 68, -12, 46, -18, -4, 19, -59, 8, -64, -117, -16, 4, 48, -24, -34, 56, 44, -56, 31, -108, 113, -35, 42, -60, -74, 75, -73, -68, 109, 16, 60, -64, -109, -50, 103, -98, 113, -14, -56, 10, 87, 67, 62, -73, 11, -47, -123, -39, 51, 84, 8, 102, 115, -63, 14, -64, 28, -1, -114, 40, -41, 31, -90, -24, -55, 123, 49, 29, 62, -55, -121, 88, -61, 91, 109, 10, -24, 104, 115, 117, -67, 67, -15, 27, -69, -94, 102, -58, -120, -85, -12, -2, -49, 4, 111, -58, -39, 110, 50, 88, 105, -19, -65, 77, -3, 56, 56, -56, -115, -65, -119, 74, 74, 52, 10, 113, 65, 26, -109, -21, 47, 27, 70, -111, 120, -75, 12, -50, 5, -110, 123, -99, 72, 20, -53, 53, -55, -116, -46, 97, 15, 40, 80, 61, 30, -17, -2, -124, 123, -36, 93, -68, -19, -28, 62, -98, -77, -80, -31, -79, -84, 45, -33, 33, -93, 25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0451359563041);
    msg.setSource(62716U);
    msg.setSourceEntity(168U);
    msg.setDestination(43069U);
    msg.setDestinationEntity(83U);
    msg.id = 33U;
    msg.range = 0.00124977268621;

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
    msg.setTimeStamp(0.13914510521);
    msg.setSource(46793U);
    msg.setSourceEntity(143U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(82U);
    msg.id = 59U;
    msg.range = 0.365471584033;

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
    msg.setTimeStamp(0.955275950629);
    msg.setSource(3521U);
    msg.setSourceEntity(240U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(117U);
    msg.id = 137U;
    msg.range = 0.463483211752;

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
    msg.setTimeStamp(0.308965273644);
    msg.setSource(23699U);
    msg.setSourceEntity(88U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("SGHMYMAYCQFYXXUQGWJELNFYFKUDIOBKJPWCJVLHBOLGXOAXZNBNLBOIIDFOWZISVJYYHZSJHWFRAAUVSLWTGWDWJXDRSSBCIVPLWAMMRPEFQKTGDOZLTCUUJUHCCFDKSIJV");
    msg.lat = 0.316791259841;
    msg.lon = 0.985844435857;
    msg.depth = 0.187344932807;
    msg.query_channel = 114U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.496100692401);
    msg.setSource(57459U);
    msg.setSourceEntity(222U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(225U);
    msg.beacon.assign("OPRERSVVWTHJKJSQMPHZLWOTPKIUVXVOLZJFQYEXNXITTVQYPVCQUXCMQGNWEHUCRLRSXMLJHYBCHEYBMLGYFKQPEKSKJBBGYONHNGBEBJATKXUCCLKZFAEZRSLNDMTRHJM");
    msg.lat = 0.188081434423;
    msg.lon = 0.21500586904;
    msg.depth = 0.840531592362;
    msg.query_channel = 226U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 9U;

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
    msg.setTimeStamp(0.800703429615);
    msg.setSource(55413U);
    msg.setSourceEntity(201U);
    msg.setDestination(33680U);
    msg.setDestinationEntity(77U);
    msg.beacon.assign("JPGVPQTSHAJDBAALHJUEWMWONFNBGUXGQOPCSDXCXNUNDWDSXTGMXIESWEIGRUVWMNFLVDUIEBTWKNHGIOVJBYNZPAHYYVGPGQVWQJSHMBSPYURVATBKQWEIQ");
    msg.lat = 0.732399038919;
    msg.lon = 0.536355590091;
    msg.depth = 0.224370026971;
    msg.query_channel = 167U;
    msg.reply_channel = 53U;
    msg.transponder_delay = 127U;

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
    msg.setTimeStamp(0.818168568986);
    msg.setSource(56980U);
    msg.setSourceEntity(134U);
    msg.setDestination(47005U);
    msg.setDestinationEntity(34U);
    msg.op = 63U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SWZDIWCLHOIXPEOUFVBERLFZWYUDTASNJRGZHWBGLWEQEJDXUUCVKJSKFYVLYSNSDBRHGYFAZTOXNPMPKMWIFWJHZNXIAEDATMKBIDUTCTLXNPTDETBQVYCKYHBCVXASGQVGOLJROBFYIQSVNAMRUQNEANEUSFZXUJKNKXFRMGOEYRVUWBHGRHGKRPZJECAIKOXRVQONMGFL");
    tmp_msg_0.lat = 0.600742176572;
    tmp_msg_0.lon = 0.299814429839;
    tmp_msg_0.depth = 0.0497699423793;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 111U;
    tmp_msg_0.transponder_delay = 211U;
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
    msg.setTimeStamp(0.92166563631);
    msg.setSource(28398U);
    msg.setSourceEntity(26U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(3U);
    msg.op = 113U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JKUQQDCXOHPZZTFMCILVCPAKHHEOYFONCOTRSQBVNMVLENKEEXAGZJNWNMOKPJ");
    tmp_msg_0.lat = 0.545974509723;
    tmp_msg_0.lon = 0.854518011494;
    tmp_msg_0.depth = 0.647007905559;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 60U;
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
    msg.setTimeStamp(0.908495775691);
    msg.setSource(65317U);
    msg.setSourceEntity(147U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(234U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.352808865266);
    msg.setSource(57087U);
    msg.setSourceEntity(45U);
    msg.setDestination(50557U);
    msg.setDestinationEntity(27U);
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 846430352U;
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
    msg.setTimeStamp(0.215207006192);
    msg.setSource(8245U);
    msg.setSourceEntity(235U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(103U);
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("KHSFCMNATQOWXULWUMEXFTHCMJPCR");
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
    msg.setTimeStamp(0.209395824082);
    msg.setSource(16079U);
    msg.setSourceEntity(174U);
    msg.setDestination(5014U);
    msg.setDestinationEntity(94U);
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 21U;
    tmp_msg_0.htime = 0.984330889676;
    tmp_msg_0.context.assign("VPFWMSDFYTPDQWNWYWKLWVMHXRBSKWEFPSLAXZIEADZAVTQSUEQUVTYPJMPVCNJGJXBXEAMLJHLUVRRHJGCJOXCKTJTZKUOKOMCEFYLICFNXPEBRBOJOTKZMNUQNZGYRXTDBCPQBNCYGFTPDAYCAZNHRQVAHBHERQBBLCDYOSXTPULHFTOIORNDUNYXSSZWRHDNXQLMARZQIVMWIOVFHWSEKYOLJ");
    tmp_msg_0.text.assign("ZHLPRDCIWFOLFRQKXAQVJAKVIFKWOLKXCITPHEBDMDVUDLURRBHAPJECXZSYHZEBLYD");
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.849153099399);
    msg.setSource(36227U);
    msg.setSourceEntity(1U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.983043776581;
    msg.lon = 0.927297624261;
    msg.depth = 0.715594859859;
    msg.sentence.assign("DXWCBATCHYFTQNYKMEKPFDU");
    msg.txtime = 0.6985147674;
    msg.modem_type.assign("HKDWUHUTYEXDPOQEXIVEZOZOBRQMQBFKPVXMLUJMOIPNKVHPSSXIPIUXKBEAEAHARBYJGBZYSMXLNNBPTGGZLYSCTPFZNYZWELRWZQWQJKNGEFLWTAJUFBMWWNQYXNXUHCJPKRDYMKULEGCXRVRCAVOMNYRTKEGLVPQCFDFODTIROGUBNL");
    msg.sys_src.assign("ISIRIKPUVYSJTCTAMBBSRAXJDGNRQFSZZRPYCQUSNJWWJGIQEIMZZLEVTYZTBAVHQWFKRDSKEPPQBHFPEZBAPMRJUVPZXDYYWBFEMMEKYOVAFQIHQJHSJIGNYTXGKFQUWUL");
    msg.seq = 44253U;
    msg.sys_dst.assign("JCNTTHIBXGEZCUSFTASLVBDNYKLARYKRMFQASEARMBIBXGBISBMVVDHWYYUFNWGUVIGXRZRAPWTNPQDOKHUZRLHM");
    msg.flags = 76U;
    const char tmp_msg_0[] = {-38, 84, 25, 31, -71, 121, -67, 1, -85, 83, -100, 109, -112, -126, -30, -50, -110, 19, 78, 22, 78, -89, 37, 52, 119, -14, 119, 88, -128, 59, -117, 81, 26, -10, 75, 68, -34, 74, 90, -83, -120, -104, -67, 63, -16, 27, 81, 65, -101, -120, -61, 117, -59, 26, -63, 36, -59, -89, 30, -80, 55, -59, 53, -80, -115, -96, 86, 17, -16, 100, 46, -29, 65, 102, -71, 120, 23, -80, -11, 117, -25, 26, 51, -77, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.483857147309);
    msg.setSource(17709U);
    msg.setSourceEntity(119U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.79070572523;
    msg.lon = 0.399955365187;
    msg.depth = 0.472863178926;
    msg.sentence.assign("SMYYGPDJJH");
    msg.txtime = 0.589134914725;
    msg.modem_type.assign("JGBNJHCCKSEOPKFZADAPDKIZNDGLOBZIGEHEXQGEYEOSDZLYHRENWTDOSMRGBCYUUGEVJEMNIBPPSXQGEPPRBZWKIJAZVRPULLWKFMMMLTVTZSBIHLVAVXKHOFYYDGCUNTSZMRXTXCHQWJZFAIFNLWWIBCBSDRYIQRQMFWHUUASYKMRIWLMTUQVKWLQVTUYIDSJSXEGNRTUHBTOPAQVLOCNPFUJVZYOJXOKWFPTV");
    msg.sys_src.assign("DGKCCCEGQVOCRUL");
    msg.seq = 43741U;
    msg.sys_dst.assign("FAYEXNDJRSHNLFEQRIPPAXZMSVKDVEHORQTNLCKJUXVZGEFRLCIOIPTSPMPUVKHZBLBFWRQJHZRNDUBSPSYYQGOPMEILKHRIBQXQTVYTTXMJHOHZGOFTAMAJYJUEPGGTNYMQIKGIHWDDCMZASJEMJLBIVQQGXUQIBNCXPKJMWVULDLKNZFTCAIPGVXASFWOTCBYTHUBMVSWGCFSUEUOYNCWAXLWJEYBFF");
    msg.flags = 129U;
    const char tmp_msg_0[] = {70, -29, 35, -102, -98, -7, -111, 48, 81, 12, -33, 5, 111, -115, 83, 28, -29, -88, -26, 105, -9, 15, 2, -80, 28, -58, -17, 5, -109, 59, 60, 104, -51, 120, 53, -52, -30, -95, -57, 46, -69, 49, 1, -12, 125, 33, -30, -88, -11, -75, 90, -121, -125, -94, 103, 93, 118, -120, 22, -37, -63, -48, 58, 61, -22, -123, 51, -122, 108, 15, -48, -114, -101, -42, -44, -65, -21, -91, -65, 61, -53, -13, 124, -51, -84, 104, -82, -83, -62, 18, -103, 28, 47, -117, 35, -52, -108, 27, 101, 60, 4, -107, 24, 52, 107, 67, -47, -52, 25, 23, 117, -38, -62, -13, -15, 81, 13, 21, -13, 54, -106, -112, 69, -67, 80, 74, -96, -49, -82, 82, 92, -82, 42, 115, -74, 50, -65, -67, 55, -105, -43, -87, 20, -36, 29, -94, 35, -43, 96, 57, -115, -57, -65, -99, 107, -10, 44, 108, -84, 41, -9, -102, -104, -67, -95, -10, -124, -118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.340479297356);
    msg.setSource(55432U);
    msg.setSourceEntity(221U);
    msg.setDestination(8471U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.339353090482;
    msg.lon = 0.4791508457;
    msg.depth = 0.687162635429;
    msg.sentence.assign("KHDPJWHUNHNVRIHSZPCTFWFVWXKBAWWJRLBCFZYKMHGRXDOUKJPLRHIKSWJATZTGZAQAZCFUSTWKJBLXNMCYQDSBCRMLZPIYBDQPKYXFSIMDLCTDJLEBHHHNLYPWQXAIAOZEFNSKSEVQVQEBUYEARZICFVJTBGDSYVGQVXOIOPGOLCWMDRFONNXRTJUTNUEMXGQYPQTUYUHIIUFJKPAANOGMSOMWFQRPVNGGLEZGXOEUMEKRD");
    msg.txtime = 0.632333328425;
    msg.modem_type.assign("WKRAVYHYKXLMMPR");
    msg.sys_src.assign("JKVQPLLMLSGRYWYRSTVYNBPWUZYCNGWKMRRPOEVWBAMHSZEVNQT");
    msg.seq = 64513U;
    msg.sys_dst.assign("POXZIAQZOAQMPNIUFCIXLOSOBKFLYUJIRRKVDAXTFFELVNSEVBELORUEUCIWXYYWGOFPEILWSEGFQHROHNCYTQJWWXGMR");
    msg.flags = 181U;
    const char tmp_msg_0[] = {-82, -119, -111, 65, 63, -74, -61, 68, -24, -22, -21, -32, 99, 1, -66, 110, 74, 119, 10, -128, -45, -16, -49, -122, -121, 28, -41, -31, -88, -57, 53, 77, -126, 19, -63, 63, 75, 90, 67, -54, -77, 126, 18, -106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.97100191118);
    msg.setSource(31601U);
    msg.setSourceEntity(229U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(158U);
    msg.op = 90U;
    msg.system.assign("AIATMZXYRGXVTSUJGIKIJHRJQWFYQDJDQMWJFNNFHYTOARWPGMZZTQDVGKNKJATQIOMKABFLMSDBDGSBHVWWAHSRWSJTYUOBEIPKCQBXZNCFZOVYDUYLREPPRNUXCQXFXPUPRYUSNBUXVHCTVWCLLKAHXCVOLEVPTLOOWMGBNELFJECIREDASGVOQKPACQKHHYXBSGJWNLOURLDEEXZWMGIGZZMUHHUSNICI");
    msg.range = 0.529567951953;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 24284U;
    tmp_msg_0.flags = 107U;
    tmp_msg_0.lat = 0.96926996238;
    tmp_msg_0.lon = 0.930392637102;
    tmp_msg_0.start_z = 0.0966920524435;
    tmp_msg_0.start_z_units = 157U;
    tmp_msg_0.end_z = 0.158623432537;
    tmp_msg_0.end_z_units = 14U;
    tmp_msg_0.radius = 0.261840668758;
    tmp_msg_0.speed = 0.128007319536;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.custom.assign("VNQVOPVEAUKJSVGYHCREXHHIBDWFMPENCVDYAPMDGIMESUNVMTHEHRTGXFJUCLMKJWLGICHYUPQCNISDYCQYUUWXJFCVKHRXTBASXSLYULLWNWOOEMNGJGSAWYDZLMBAFIFUREKYORHNFQDAXRZBVKDTXOEGFQSTNZE");
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
    msg.setTimeStamp(0.375092190809);
    msg.setSource(43474U);
    msg.setSourceEntity(176U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(180U);
    msg.op = 139U;
    msg.system.assign("SPVLZWNAXJMBJZXAHEKCNDYGKRPOQBXNSNLPLVVFCXWBCCGIDQLQGTVONQOTSNKIZHJKCAKBJWPDAZBSNUZFVZSXQDTHZTSMLTRZLVXWBAAETBOJATDVELOHIMIEWKENZQFPFOUYFQEXJYFJVBPGLCWWLGSDRQDHGIS");
    msg.range = 0.720323181467;
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.552273889594);
    msg.setSource(32341U);
    msg.setSourceEntity(183U);
    msg.setDestination(2118U);
    msg.setDestinationEntity(81U);
    msg.op = 151U;
    msg.system.assign("IOXPGANKUYXCIOEAINWS");
    msg.range = 0.225533012922;
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 56U;
    tmp_msg_0.lat = 0.928521434371;
    tmp_msg_0.lon = 0.188484544719;
    tmp_msg_0.height = 0.516092376339;
    tmp_msg_0.depth = 0.194760330335;
    tmp_msg_0.alt = 0.453927783044;
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
    msg.setTimeStamp(0.0337401684357);
    msg.setSource(52012U);
    msg.setSourceEntity(193U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.351789314996);
    msg.setSource(35391U);
    msg.setSourceEntity(23U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.303406418624);
    msg.setSource(14775U);
    msg.setSourceEntity(252U);
    msg.setDestination(43920U);
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
    msg.setTimeStamp(0.161962304915);
    msg.setSource(61579U);
    msg.setSourceEntity(94U);
    msg.setDestination(11704U);
    msg.setDestinationEntity(55U);
    msg.list.assign("NTUZAUGPBAHVAZTSZLDGVXLCNXIOHYPJFEHGWJIJGEBXEZZTIFEJQVGQZAPWFBQMRQLYXHUEVPCQPPIDTNWXQPKAQVDBKDWUQPKGOOPIVZVBQGOCFIWCAUKGRNIDTRTCJOMNWKSKYPLRSRANEJYYSEBQYUUNLROSTZJFTKVBRNCDEVUWYCHFSWHLKKDLMYWTXERSXZMELNJBJFHSUWHTFAOFMLZMDXFABOHCADXGCNORVHG");

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
    msg.setTimeStamp(0.0536214785264);
    msg.setSource(32426U);
    msg.setSourceEntity(66U);
    msg.setDestination(43640U);
    msg.setDestinationEntity(71U);
    msg.list.assign("NSRENHILPZPLLAPBCFQHSJHDEWDGDVDZKYHFTBHJZPYGZRMLTBMCTXXKRWBJVJAPUFDANYXCQGZHZSSGNMFXEEIFNOOTLSDWYARJCZKQBABOAGOIGFPGCOZBBKNMCOURWRXKRSXIVOIQHNWEMJFAMWCLUBMHLRTISUEAVDJYJONKPWWQKGNEQYMBZVESPQYRSVMV");

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
    msg.setTimeStamp(0.378153562961);
    msg.setSource(48583U);
    msg.setSourceEntity(33U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(122U);
    msg.list.assign("RWGOMXSDCDWIVQSYNISXUDPXGQCZCQLFUAAJRHOBZGFWNGRJYIHTTUFSXVWPSJUKFNCJVQCILHWXRLHSNDKMXBVWXDQRUSRAOTHYJCXKDBPEOHAXD");

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
    msg.setTimeStamp(0.233467661036);
    msg.setSource(47091U);
    msg.setSourceEntity(37U);
    msg.setDestination(57438U);
    msg.setDestinationEntity(190U);
    msg.peer.assign("MPSBATIZZHFHFDLBXAVVFWXDEWPYUMQJCQZUYFUAHNJYHAGUXVCXVTRMZZLPMCPTKNFPQZRQMZOGFBNYVSDIBRZGIZLWDQBMJGPBAFXDCOWFFNFHCYDOJNOTSLXVKEWKOOCPXNUSOQRJEUSDKYQKXCHCLJTELITEIEJIHYCINVBPWMLOMXSWESIMRASKWAVGYWW");
    msg.rssi = 0.524132978856;
    msg.integrity = 28476U;

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
    msg.setTimeStamp(0.286810527914);
    msg.setSource(61628U);
    msg.setSourceEntity(61U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(10U);
    msg.peer.assign("ACZLAUPOAIEDPQZYJVBCMITLKGXGXQZYHAMJZTELBSXKPJTNANHNXWSUKVWPUYYJLCXTTMTLAVCHNVHIPSFESENWDEABGFCIRRLCIOQSQUPZSJOJKEIKFSMWDQEOPRLGCKCDXLCMBARBDFTMOZOCSKHHRWAVDYIWGKQDJGWQIQNNLDGQFNEGOMNEYTFOYKTRDVUYDRPFPMRGLQUBUIBWBHSHAKVYRWVI");
    msg.rssi = 0.679798518455;
    msg.integrity = 22986U;

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
    msg.setTimeStamp(0.392193573125);
    msg.setSource(28099U);
    msg.setSourceEntity(152U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(88U);
    msg.peer.assign("GSBAHLPCAGXWQLLRXDOAUPFMCCMQZBPUSXJLQAPHKYBJHBBBXOPGRTKYCNVVJTGILZNRRHQJPUVFMTDCDAYWSKYWOEKEDNTKXLFIAKQYMWIGEFASZYUFQHHAAOWNYOJMCVUXEMOVODEHKWDKOHNGMMPZRUDGTLPMZBGIFTSEXBEXWZJGUINFVNNQIXIBRFDUJJVCGRTSQQELDCMNTKCVZSOPHCNDTWYIQSKRYJSZTUFXREFLZIHR");
    msg.rssi = 0.417318664866;
    msg.integrity = 28336U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.100455475545);
    msg.setSource(15001U);
    msg.setSourceEntity(193U);
    msg.setDestination(1228U);
    msg.setDestinationEntity(34U);
    msg.req_id = 14025U;
    msg.destination.assign("RQRFCVGJMVEJKNBWQWBNHEXEWVUTJIAQKXOVTPXRNGFSAJDQOUUWJYICMSFLTNBHOJQFNSNVNYTTBKTKEKCPZDGPELEHMOPKPDHQWZBGWWOGSGIZZEXCLYDOGFBYBYZKTMHIRWTDBAJOFVQIUIQUUWSAVUIMTZFWZJTDXZJOAEMVOPFGLARHMK");
    msg.timeout = 0.65392092522;
    msg.range = 0.970688710527;
    msg.type = 23U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 77U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("TYCEPZHASYCREZGANWXOSDGWKJOIQMBMRHEACOGVNYPUXVJILWPBBKZDRYXGSCNPYNIIKLHQVKPKIEONRHZBFJQVWLDBDABTYPQIINY");
    tmp_tmp_msg_0_0.description.assign("LMYUXVSMUPHFABEBXV");
    tmp_tmp_msg_0_0.vnamespace.assign("MIZFTPSKPROMDZSYEQQHGNDVGIIUUBTBTZX");
    tmp_tmp_msg_0_0.start_man_id.assign("LWXIQUDDEWZLTECRHVNFGBAOVMSYXYZLSNSOTCDERBJBPRHLFPPMQZJBCJOLISFXPKGYLYAJXFSHZTITEMEANIULAOYWNKPYXOIHNSZXICZGGHBNAMPDWVKXQCMWCAOTGBKQIBGTKJTCSYMTOHVLTYQKBDDVIMZBVQOEEUEPALVTUJXFNGUVOYUUARGZZSAERRDPFFPFAFHKWRDFIWQMQJLXWCGRVGKYRWWHQHPUSZXJCKNBD");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("SNEMDUFIOPIGDXZETKVMNHXXODPGJSEQEQLRLKFLWYADINBOWGKMQQVOYKHYZHPREZAZUVUIDPKVBZRRFGUSSOQPUGFLCYMGPELTTRYCPQZCKXEJHSXYMWFSDLXAVCRLSBFTYCWJYBMEOM");
    IMC::Alignment tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 40182U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.0539951582064;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.178381809974;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.389813124179;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 54U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("TSTSOIPFZNEJWZUQSMIXRKPGUHBQANSWPDECEKXRTEXBJOWDKRDBMFQQZXXJWPUZWHTUKGUXVZSYECCFUMOLWFBGEFJNGFPZNDBCWGEMLCSVPOHKVYRUDIONAOMNFHAFLVNDAXLCZKVZJATSOCVIMENGADYDIXCBWYRRALXFKVHKAMCQQQBYNBAHIHXJUPPWILKWVJOCTYDPTDMIO");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("KQDHEZCUITNQVNPSMJNLPXWMJESXRYPGDCMIGZRXSFATBMPRKTHKMMWYNHKGGWYYUTDJUJEHHVNEQQCAJDZOYLPISXZDMSSMBHHLPVTLSEWEFZVVULFRROIFFOGTOWJJAGAEBOFLGFLNRGUKTXQWNUKJWMOPZYGDLPZKNBYSZKUOBYKBIUAAQQWEHCIRGQBDJHNNZVXYITCWVEDIOOCBTVPCLEVIUAQLDYIZCAXXRWFHCJBO");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("KPBANUBZKZPGXPYJMEKTENYIHKKPUGOHUIQPADYGRHEEDRGWDJVMOFDBDSQMPGNZRYXAOTFVJLCVFLZDPEGRJAMSSVZHSYDZIRRTHOSIRVLXGDHZCQK");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("GPTRSQOGSOADYXETHPJECYYNOOPV");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::UsblPositionExtended tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.target.assign("DHCAMHGPUBBEOZYUHETZKIQVQVFLSEYKWCLOLTUXTKGINCYCCHDIFELJDWVSUKDECWZMZMSAXOVBWWIJSKRTDUFJXENVRVMNMLJEGSTCVREZODSJSWJOXFPMQ");
    tmp_tmp_tmp_msg_0_0_2.x = 0.826901333595;
    tmp_tmp_tmp_msg_0_0_2.y = 0.127575792678;
    tmp_tmp_tmp_msg_0_0_2.z = 0.260122024605;
    tmp_tmp_tmp_msg_0_0_2.n = 0.23706744089;
    tmp_tmp_tmp_msg_0_0_2.e = 0.244606930672;
    tmp_tmp_tmp_msg_0_0_2.d = 0.646394774382;
    tmp_tmp_tmp_msg_0_0_2.phi = 0.328914583401;
    tmp_tmp_tmp_msg_0_0_2.theta = 0.607739557223;
    tmp_tmp_tmp_msg_0_0_2.psi = 0.0553436315851;
    tmp_tmp_tmp_msg_0_0_2.accuracy = 0.570661185598;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.170800022868);
    msg.setSource(45672U);
    msg.setSourceEntity(69U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(179U);
    msg.req_id = 38049U;
    msg.destination.assign("VRFSVEJQZCPTLLNWOIGVBKVHYKAZLYABYNTLHOLYTDWOULHATQAFJCRGGXFZUTKYURKWDGMSZDGJJNOWJIDPECYGZXWRVKNUYBFRZCAMWHPBTDEQJLDSTMAGKMOCEPHQMDRVEVUHQNFPEXEWXQCNCCWVNUPIRKNBHAFJODQRWZGGLTSNIUYMSTZBBAZFKQHWOXPPUSSQEFEUXKJLXOG");
    msg.timeout = 0.026332568649;
    msg.range = 0.330967009326;
    msg.type = 227U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 175U;
    tmp_msg_0.longain = 0.244114784507;
    tmp_msg_0.latgain = 0.884956443465;
    tmp_msg_0.bondthick = 1883685460U;
    tmp_msg_0.leadgain = 0.994793033294;
    tmp_msg_0.deconflgain = 0.996993862377;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.899085868927);
    msg.setSource(43226U);
    msg.setSourceEntity(155U);
    msg.setDestination(22727U);
    msg.setDestinationEntity(0U);
    msg.req_id = 44136U;
    msg.destination.assign("FIJPCXRUVTJSUVKHWPAWSRXBTAYMJIYKBXHIVHUGCLGMTHVFZWXJPOZOQBVDKUDGNQZFXKXIKLHFRNDLGJFUQOUNALYJRPRFPHSEYANWMCBWNCPYAYQSMBHDCOGYDNTRSGULIIJYYSEADET");
    msg.timeout = 0.540439760375;
    msg.range = 0.367139521197;
    msg.type = 244U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.351135676724;
    tmp_msg_0.base_lon = 0.133285343505;
    tmp_msg_0.base_time = 0.495264130658;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.339014495494);
    msg.setSource(61952U);
    msg.setSourceEntity(160U);
    msg.setDestination(65455U);
    msg.setDestinationEntity(63U);
    msg.req_id = 33566U;
    msg.type = 10U;
    msg.status = 210U;
    msg.info.assign("SHSALXHUQUUSMKFXCINQKGVFV");
    msg.range = 0.749784613505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.641350210484);
    msg.setSource(59958U);
    msg.setSourceEntity(127U);
    msg.setDestination(42628U);
    msg.setDestinationEntity(210U);
    msg.req_id = 32643U;
    msg.type = 138U;
    msg.status = 230U;
    msg.info.assign("QUJOKPMJYX");
    msg.range = 0.972586195556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.985359566187);
    msg.setSource(22471U);
    msg.setSourceEntity(130U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(240U);
    msg.req_id = 28020U;
    msg.type = 231U;
    msg.status = 188U;
    msg.info.assign("XELQWYJPADTIXMHNYFNKIDROLZFNEVZTSJABXFVMXUVPZBVCKLJVURGAZTXNTCASTFTPVMI");
    msg.range = 0.11789175694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.666038234939);
    msg.setSource(51008U);
    msg.setSourceEntity(247U);
    msg.setDestination(34214U);
    msg.setDestinationEntity(194U);
    msg.system.assign("CKDGRQEHDRJGAANOHFRFYSGAGHYEAQAWFOBJYOKBPNXMCXEDUTWPXUOUJTCBZMNQHUCDIOESBCSLAWVWPFMTCTUFFCLMVYGQQTAOTVYVRRHKFVBUBOGWTCZLEITLTSFBEVQGWLZXXHLKDSSNIRABJJRMKIUPAVRYHMHSSZZIGRJSYJINYGKDHNIOADMPVWGIZTBWQBNLQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.228101453993);
    msg.setSource(15164U);
    msg.setSourceEntity(126U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(239U);
    msg.system.assign("NVGTQNYXJDSOKEMWSZFTRUWWVVFGGUYTVUSULKCLJRZOLXBMGKLBSNOCXFCLDBJUDZTAIFHQYXKADETQEIYZLXPIUHCNAZNCOWZCKYZJHTWFCJFYBLCEXHNTMHAGBSLVSAJBIZRTSAWBJTFJSOTEDGFOPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.598184212672);
    msg.setSource(42812U);
    msg.setSourceEntity(127U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(219U);
    msg.system.assign("LZYVJXZUDFGCJQWXVDLVCJRKYBTCCWQPOZEZDOKLCGWUNGHBHPPUTMHEUHTELROLBQKDMZUQGPKGESCRKFASTHUUKYYIJFOOAZABXLZHGFWAJNPVNLYJXOXSBDFRKLWBRVSNAEDEQCJTVDMYWRSHTPVTNXQXBWRNANDIICMNXUAINBYPLBUTVPYQWMMYZHDXTLJSSQIQTWSICUEAGCHOMEOFSZDIEOF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.596391628634);
    msg.setSource(24263U);
    msg.setSourceEntity(38U);
    msg.setDestination(26227U);
    msg.setDestinationEntity(182U);
    msg.value = -13634;

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
    msg.setTimeStamp(0.704244666518);
    msg.setSource(62971U);
    msg.setSourceEntity(60U);
    msg.setDestination(44826U);
    msg.setDestinationEntity(0U);
    msg.value = 16682;

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
    msg.setTimeStamp(0.816761832684);
    msg.setSource(31336U);
    msg.setSourceEntity(131U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(221U);
    msg.value = 659;

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
    msg.setTimeStamp(0.755566034886);
    msg.setSource(2176U);
    msg.setSourceEntity(93U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(64U);
    msg.value = 0.73339476091;

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
    msg.setTimeStamp(0.617149997274);
    msg.setSource(816U);
    msg.setSourceEntity(30U);
    msg.setDestination(46724U);
    msg.setDestinationEntity(193U);
    msg.value = 0.242544607696;

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
    msg.setTimeStamp(0.0480719486082);
    msg.setSource(22185U);
    msg.setSourceEntity(101U);
    msg.setDestination(47345U);
    msg.setDestinationEntity(204U);
    msg.value = 0.812775225959;

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
    msg.setTimeStamp(0.779283997302);
    msg.setSource(58479U);
    msg.setSourceEntity(35U);
    msg.setDestination(32559U);
    msg.setDestinationEntity(209U);
    msg.value = 0.973510151918;

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
    msg.setTimeStamp(0.164707641043);
    msg.setSource(3629U);
    msg.setSourceEntity(162U);
    msg.setDestination(18272U);
    msg.setDestinationEntity(238U);
    msg.value = 0.672575460955;

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
    msg.setTimeStamp(0.507395889951);
    msg.setSource(10824U);
    msg.setSourceEntity(239U);
    msg.setDestination(61543U);
    msg.setDestinationEntity(150U);
    msg.value = 0.890956950828;

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
    msg.setTimeStamp(0.43294487886);
    msg.setSource(24238U);
    msg.setSourceEntity(141U);
    msg.setDestination(36477U);
    msg.setDestinationEntity(251U);
    msg.validity = 62987U;
    msg.type = 41U;
    msg.utc_year = 43296U;
    msg.utc_month = 24U;
    msg.utc_day = 73U;
    msg.utc_time = 0.234262439844;
    msg.lat = 0.0231050625952;
    msg.lon = 0.10625203174;
    msg.height = 0.408390107602;
    msg.satellites = 144U;
    msg.cog = 0.486046963316;
    msg.sog = 0.806331078799;
    msg.hdop = 0.0416927833093;
    msg.vdop = 0.910526967138;
    msg.hacc = 0.359197987789;
    msg.vacc = 0.189501540293;

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
    msg.setTimeStamp(0.683877826718);
    msg.setSource(54793U);
    msg.setSourceEntity(152U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(229U);
    msg.validity = 17218U;
    msg.type = 151U;
    msg.utc_year = 32675U;
    msg.utc_month = 91U;
    msg.utc_day = 213U;
    msg.utc_time = 0.107408217452;
    msg.lat = 0.0390474232211;
    msg.lon = 0.740452891618;
    msg.height = 0.25073926713;
    msg.satellites = 166U;
    msg.cog = 0.904975928191;
    msg.sog = 0.771096648686;
    msg.hdop = 0.402295170513;
    msg.vdop = 0.732354577794;
    msg.hacc = 0.114807433868;
    msg.vacc = 0.292214910221;

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
    msg.setTimeStamp(0.115254974025);
    msg.setSource(23037U);
    msg.setSourceEntity(131U);
    msg.setDestination(22157U);
    msg.setDestinationEntity(133U);
    msg.validity = 27372U;
    msg.type = 75U;
    msg.utc_year = 33579U;
    msg.utc_month = 100U;
    msg.utc_day = 175U;
    msg.utc_time = 0.15472147138;
    msg.lat = 0.21128802038;
    msg.lon = 0.178760484461;
    msg.height = 0.317900840731;
    msg.satellites = 218U;
    msg.cog = 0.219779360894;
    msg.sog = 0.558276949738;
    msg.hdop = 0.845683300518;
    msg.vdop = 0.411472834941;
    msg.hacc = 0.0135765941746;
    msg.vacc = 0.553092562532;

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
    msg.setTimeStamp(0.326649483344);
    msg.setSource(22095U);
    msg.setSourceEntity(113U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(216U);
    msg.time = 0.727314681981;
    msg.phi = 0.254986192948;
    msg.theta = 0.104140829398;
    msg.psi = 0.963824033463;
    msg.psi_magnetic = 0.69296543139;

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
    msg.setTimeStamp(0.635426772117);
    msg.setSource(48353U);
    msg.setSourceEntity(152U);
    msg.setDestination(57952U);
    msg.setDestinationEntity(156U);
    msg.time = 0.163504970788;
    msg.phi = 0.674738811603;
    msg.theta = 0.965049108305;
    msg.psi = 0.154120696309;
    msg.psi_magnetic = 0.0599736577126;

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
    msg.setTimeStamp(0.152323139438);
    msg.setSource(11726U);
    msg.setSourceEntity(53U);
    msg.setDestination(8542U);
    msg.setDestinationEntity(172U);
    msg.time = 0.558580525572;
    msg.phi = 0.362520703397;
    msg.theta = 0.510846014732;
    msg.psi = 0.219977089299;
    msg.psi_magnetic = 0.834897556834;

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
    msg.setTimeStamp(0.447471714576);
    msg.setSource(19413U);
    msg.setSourceEntity(178U);
    msg.setDestination(24806U);
    msg.setDestinationEntity(91U);
    msg.time = 0.68179627001;
    msg.x = 0.692060676467;
    msg.y = 0.681362567279;
    msg.z = 0.300934004212;
    msg.timestep = 0.558381609468;

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
    msg.setTimeStamp(0.683844959584);
    msg.setSource(5535U);
    msg.setSourceEntity(23U);
    msg.setDestination(27839U);
    msg.setDestinationEntity(145U);
    msg.time = 0.645827446434;
    msg.x = 0.0774550997603;
    msg.y = 0.713064730809;
    msg.z = 0.112016669293;
    msg.timestep = 0.528454742949;

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
    msg.setTimeStamp(0.892706161758);
    msg.setSource(31877U);
    msg.setSourceEntity(165U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(84U);
    msg.time = 0.655382347534;
    msg.x = 0.475623964695;
    msg.y = 0.211319492435;
    msg.z = 0.712442052334;
    msg.timestep = 0.475853033776;

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
    msg.setTimeStamp(0.924847574065);
    msg.setSource(2066U);
    msg.setSourceEntity(74U);
    msg.setDestination(18254U);
    msg.setDestinationEntity(150U);
    msg.time = 0.116722557653;
    msg.x = 0.638692213347;
    msg.y = 0.83614491206;
    msg.z = 0.201287622358;

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
    msg.setTimeStamp(0.605493824902);
    msg.setSource(15220U);
    msg.setSourceEntity(128U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(45U);
    msg.time = 0.54227520096;
    msg.x = 0.78320418069;
    msg.y = 0.337187630797;
    msg.z = 0.872876230465;

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
    msg.setTimeStamp(0.592701991348);
    msg.setSource(40647U);
    msg.setSourceEntity(89U);
    msg.setDestination(48494U);
    msg.setDestinationEntity(175U);
    msg.time = 0.444073314827;
    msg.x = 0.447494946513;
    msg.y = 0.143015170144;
    msg.z = 0.319546221851;

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
    msg.setTimeStamp(0.478421023469);
    msg.setSource(37880U);
    msg.setSourceEntity(38U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(18U);
    msg.time = 0.129149624315;
    msg.x = 0.919216088756;
    msg.y = 0.49980462301;
    msg.z = 0.0391884666516;

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
    msg.setTimeStamp(0.00626847893498);
    msg.setSource(786U);
    msg.setSourceEntity(209U);
    msg.setDestination(58978U);
    msg.setDestinationEntity(110U);
    msg.time = 0.222964919733;
    msg.x = 0.845256229487;
    msg.y = 0.323862832928;
    msg.z = 0.364565373599;

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
    msg.setTimeStamp(0.594036744395);
    msg.setSource(51012U);
    msg.setSourceEntity(166U);
    msg.setDestination(17215U);
    msg.setDestinationEntity(119U);
    msg.time = 0.533768885579;
    msg.x = 0.693735362811;
    msg.y = 0.798625430573;
    msg.z = 0.826756618382;

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
    msg.setTimeStamp(0.688938280664);
    msg.setSource(12077U);
    msg.setSourceEntity(241U);
    msg.setDestination(7928U);
    msg.setDestinationEntity(201U);
    msg.time = 0.277140538247;
    msg.x = 0.553363063357;
    msg.y = 0.328517218763;
    msg.z = 0.261590331485;

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
    msg.setTimeStamp(0.114541556263);
    msg.setSource(40720U);
    msg.setSourceEntity(39U);
    msg.setDestination(46952U);
    msg.setDestinationEntity(219U);
    msg.time = 0.0119103116251;
    msg.x = 0.861786546027;
    msg.y = 0.156175473501;
    msg.z = 0.113143983475;

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
    msg.setTimeStamp(0.684734870643);
    msg.setSource(1939U);
    msg.setSourceEntity(127U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(128U);
    msg.time = 0.991106784118;
    msg.x = 0.244528944844;
    msg.y = 0.848790763924;
    msg.z = 0.286296994316;

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
    msg.setTimeStamp(0.0939196291811);
    msg.setSource(6668U);
    msg.setSourceEntity(179U);
    msg.setDestination(18432U);
    msg.setDestinationEntity(159U);
    msg.validity = 251U;
    msg.x = 0.852852763203;
    msg.y = 0.917320236157;
    msg.z = 0.361518895267;

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
    msg.setTimeStamp(0.955475839113);
    msg.setSource(15952U);
    msg.setSourceEntity(42U);
    msg.setDestination(27969U);
    msg.setDestinationEntity(218U);
    msg.validity = 21U;
    msg.x = 0.00705989788783;
    msg.y = 0.0832288928855;
    msg.z = 0.684880949437;

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
    msg.setTimeStamp(0.795487277906);
    msg.setSource(51859U);
    msg.setSourceEntity(150U);
    msg.setDestination(36824U);
    msg.setDestinationEntity(175U);
    msg.validity = 250U;
    msg.x = 0.743851644667;
    msg.y = 0.641734396925;
    msg.z = 0.0444457483326;

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
    msg.setTimeStamp(0.934270822417);
    msg.setSource(42171U);
    msg.setSourceEntity(36U);
    msg.setDestination(53600U);
    msg.setDestinationEntity(238U);
    msg.validity = 62U;
    msg.x = 0.98030905575;
    msg.y = 0.273915853583;
    msg.z = 0.908355561323;

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
    msg.setTimeStamp(0.0849358858911);
    msg.setSource(9979U);
    msg.setSourceEntity(58U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(98U);
    msg.validity = 31U;
    msg.x = 0.275286858002;
    msg.y = 0.580846942976;
    msg.z = 0.917662883756;

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
    msg.setTimeStamp(0.816392260434);
    msg.setSource(1493U);
    msg.setSourceEntity(1U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(224U);
    msg.validity = 55U;
    msg.x = 0.6700808801;
    msg.y = 0.598560228904;
    msg.z = 0.229001623496;

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
    msg.setTimeStamp(0.397758131258);
    msg.setSource(5162U);
    msg.setSourceEntity(43U);
    msg.setDestination(48425U);
    msg.setDestinationEntity(63U);
    msg.time = 0.59181190209;
    msg.x = 0.0768235185143;
    msg.y = 0.931955197071;
    msg.z = 0.139442822516;

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
    msg.setTimeStamp(0.472163004193);
    msg.setSource(46469U);
    msg.setSourceEntity(46U);
    msg.setDestination(37225U);
    msg.setDestinationEntity(15U);
    msg.time = 0.830473591399;
    msg.x = 0.960696829461;
    msg.y = 0.688349090727;
    msg.z = 0.278060077387;

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
    msg.setTimeStamp(0.81955518925);
    msg.setSource(56253U);
    msg.setSourceEntity(54U);
    msg.setDestination(7226U);
    msg.setDestinationEntity(112U);
    msg.time = 0.573117503777;
    msg.x = 0.144733937237;
    msg.y = 0.672935416036;
    msg.z = 0.612036569852;

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
    msg.setTimeStamp(0.181364285678);
    msg.setSource(45447U);
    msg.setSourceEntity(163U);
    msg.setDestination(39415U);
    msg.setDestinationEntity(232U);
    msg.validity = 141U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.417033450172;
    tmp_msg_0.y = 0.596147594832;
    tmp_msg_0.z = 0.328569391013;
    tmp_msg_0.phi = 0.578129981098;
    tmp_msg_0.theta = 0.810074770651;
    tmp_msg_0.psi = 0.399122367389;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.96663168432;

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
    msg.setTimeStamp(0.329030392966);
    msg.setSource(32750U);
    msg.setSourceEntity(134U);
    msg.setDestination(17612U);
    msg.setDestinationEntity(235U);
    msg.validity = 76U;
    msg.value = 0.807436523548;

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
    msg.setTimeStamp(0.294439456783);
    msg.setSource(54536U);
    msg.setSourceEntity(180U);
    msg.setDestination(30745U);
    msg.setDestinationEntity(217U);
    msg.validity = 13U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.786159128922;
    tmp_msg_0.beam_height = 0.186493039801;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.289148021445;

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
    msg.setTimeStamp(0.585063868404);
    msg.setSource(19944U);
    msg.setSourceEntity(121U);
    msg.setDestination(65392U);
    msg.setDestinationEntity(180U);
    msg.value = 0.215077050703;

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
    msg.setTimeStamp(0.428855467486);
    msg.setSource(59658U);
    msg.setSourceEntity(115U);
    msg.setDestination(14409U);
    msg.setDestinationEntity(167U);
    msg.value = 0.886696855695;

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
    msg.setTimeStamp(0.271861907538);
    msg.setSource(13176U);
    msg.setSourceEntity(2U);
    msg.setDestination(30064U);
    msg.setDestinationEntity(199U);
    msg.value = 0.756537100806;

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
    msg.setTimeStamp(0.56936413983);
    msg.setSource(54539U);
    msg.setSourceEntity(10U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0186804736758;

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
    msg.setTimeStamp(0.691064146);
    msg.setSource(45122U);
    msg.setSourceEntity(228U);
    msg.setDestination(26755U);
    msg.setDestinationEntity(253U);
    msg.value = 0.487209019644;

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
    msg.setTimeStamp(0.860774337286);
    msg.setSource(27835U);
    msg.setSourceEntity(40U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(77U);
    msg.value = 0.548295348523;

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
    msg.setTimeStamp(0.253527487067);
    msg.setSource(37512U);
    msg.setSourceEntity(184U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(21U);
    msg.value = 0.319727348447;

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
    msg.setTimeStamp(0.770198517198);
    msg.setSource(62868U);
    msg.setSourceEntity(61U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(189U);
    msg.value = 0.614933853177;

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
    msg.setTimeStamp(0.0806496298344);
    msg.setSource(30983U);
    msg.setSourceEntity(39U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(214U);
    msg.value = 0.223744333424;

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
    msg.setTimeStamp(0.217575799537);
    msg.setSource(27106U);
    msg.setSourceEntity(39U);
    msg.setDestination(26066U);
    msg.setDestinationEntity(122U);
    msg.value = 0.889801178821;

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
    msg.setTimeStamp(0.893204365705);
    msg.setSource(37261U);
    msg.setSourceEntity(119U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0454250038241;

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
    msg.setTimeStamp(0.871666684496);
    msg.setSource(50934U);
    msg.setSourceEntity(247U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(182U);
    msg.value = 0.111138570146;

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
    msg.setTimeStamp(0.151553068821);
    msg.setSource(37695U);
    msg.setSourceEntity(44U);
    msg.setDestination(34607U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0858010047974;

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
    msg.setTimeStamp(0.358997086382);
    msg.setSource(18482U);
    msg.setSourceEntity(47U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(33U);
    msg.value = 0.263632088655;

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
    msg.setTimeStamp(0.211809426292);
    msg.setSource(49114U);
    msg.setSourceEntity(137U);
    msg.setDestination(34020U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0348339683592;

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
    msg.setTimeStamp(0.790352290192);
    msg.setSource(8150U);
    msg.setSourceEntity(245U);
    msg.setDestination(45042U);
    msg.setDestinationEntity(78U);
    msg.value = 0.613024250135;

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
    msg.setTimeStamp(0.828130991692);
    msg.setSource(58853U);
    msg.setSourceEntity(23U);
    msg.setDestination(1452U);
    msg.setDestinationEntity(173U);
    msg.value = 0.587543967422;

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
    msg.setTimeStamp(0.299344324872);
    msg.setSource(17659U);
    msg.setSourceEntity(74U);
    msg.setDestination(63404U);
    msg.setDestinationEntity(34U);
    msg.value = 0.249913522981;

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
    msg.setTimeStamp(0.243108792904);
    msg.setSource(58131U);
    msg.setSourceEntity(123U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(43U);
    msg.value = 0.770243772817;

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
    msg.setTimeStamp(0.124126106573);
    msg.setSource(45577U);
    msg.setSourceEntity(16U);
    msg.setDestination(49525U);
    msg.setDestinationEntity(99U);
    msg.value = 0.641045348739;

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
    msg.setTimeStamp(0.0794987152031);
    msg.setSource(7483U);
    msg.setSourceEntity(242U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(6U);
    msg.value = 0.981324252195;

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
    msg.setTimeStamp(0.148270055655);
    msg.setSource(20341U);
    msg.setSourceEntity(26U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(152U);
    msg.value = 0.769378799858;

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
    msg.setTimeStamp(0.377354187597);
    msg.setSource(8653U);
    msg.setSourceEntity(17U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(52U);
    msg.value = 0.141641689321;

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
    msg.setTimeStamp(0.258501117398);
    msg.setSource(2801U);
    msg.setSourceEntity(86U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(26U);
    msg.value = 0.865058220973;

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
    msg.setTimeStamp(0.842514408406);
    msg.setSource(29681U);
    msg.setSourceEntity(128U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(150U);
    msg.direction = 0.662752161407;
    msg.speed = 0.109319265349;
    msg.turbulence = 0.643782815389;

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
    msg.setTimeStamp(0.347456525339);
    msg.setSource(7420U);
    msg.setSourceEntity(80U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(223U);
    msg.direction = 0.971988838455;
    msg.speed = 0.159200996349;
    msg.turbulence = 0.488737139506;

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
    msg.setTimeStamp(0.15065495486);
    msg.setSource(20360U);
    msg.setSourceEntity(212U);
    msg.setDestination(37878U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.699517333589;
    msg.speed = 0.755647295358;
    msg.turbulence = 0.941878336005;

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
    msg.setTimeStamp(0.883325354601);
    msg.setSource(63981U);
    msg.setSourceEntity(95U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(5U);
    msg.value = 0.50679147932;

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
    msg.setTimeStamp(0.43591255041);
    msg.setSource(19462U);
    msg.setSourceEntity(236U);
    msg.setDestination(14236U);
    msg.setDestinationEntity(149U);
    msg.value = 0.325759117213;

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
    msg.setTimeStamp(0.674072884941);
    msg.setSource(34852U);
    msg.setSourceEntity(243U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(170U);
    msg.value = 0.95048525944;

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
    msg.setTimeStamp(0.391894506996);
    msg.setSource(3220U);
    msg.setSourceEntity(190U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(227U);
    msg.value.assign("CCCPWQUSRYAMTFXHYPFGENTDEJKNYPPPYMMMSWKPNCRBGASAOTXJHVARC");

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
    msg.setTimeStamp(0.0439413817488);
    msg.setSource(4440U);
    msg.setSourceEntity(190U);
    msg.setDestination(51986U);
    msg.setDestinationEntity(194U);
    msg.value.assign("LKGIFEGXLKDEHBERVZXUMSHLOKMVIDJGUNRZLP");

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
    msg.setTimeStamp(0.655317848432);
    msg.setSource(54377U);
    msg.setSourceEntity(147U);
    msg.setDestination(48488U);
    msg.setDestinationEntity(67U);
    msg.value.assign("QIWWDTNPOWBXLGFTEWTZNWMJXUDNUPZGLIXEYGKHYRXORCCRQH");

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
    msg.setTimeStamp(0.966459572857);
    msg.setSource(62022U);
    msg.setSourceEntity(29U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {-74, 73, 52, 125, 19, -127, 12, -74, 65, -7, -81, -28, -42, -8, 124, -22, -42, 66, 44, -112, 16, 80, -65, 106, -77, -105, 68, -96, -69, 34, -126, -20, 52, -108, -17, -42, 84, 70, -43, -67, -74, -41, 111, -97, 73, -45, -56, 37, 125, -13, -35, 49, -20, -69, 4, -94, 100, -24, 105, 112, -40, 83, 46, -97, -12, 5, -36, 5, -81, 41, -27, 105, 100, 93, -42, -120, -117, -109, 60, 45, 123, 89, -31, -126, -5, 93, -93, 125, -67, -119, 20, -99, 37, 56, 34, 94, -19, -30, -44, 10, 96, 121, 17, 99, -16, -7, -35, 36, -16, 32, 51, -73, -45, -64, -71, 86, -128, 49, 71, -30, 43, -121, -39, -37, -82, 76, -80, -62, 49, 109, -108, -128, 119, 3, 84, -128, -97, -62, -7, 42, -11, 92, -91, 0, -103, 63, 88, 47, 62, 116, 1, 67, -17, 59, -114, -32, 55, 75, 64, 38, -53, -114, 14, 114, -18, -33, 59, -81, -81, 76, 120, 9, -62, -31, 83, -12, 60, 116, -123, -127, 111, 1, 60, 81, -123, 123, 1, 43, 59, -118, 37, -7, 25, -126, -94, 89, 38, 114, -118, -117, 84, -73, 3, 101, -115, 34, -6, 126, 116, 107, -102, 79, -10, 12, 11, -25, -20, 72, -25, 29, -102, -11, 126, 96, 114, -54, 112, 120, -91, 84};
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
    msg.setTimeStamp(0.522573380064);
    msg.setSource(57933U);
    msg.setSourceEntity(27U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(215U);
    const char tmp_msg_0[] = {3, -22, -91, -88, 31, 87, -122, 26, -46, 90, 45, 75, -123, 37, 103, -82, 114, 66, -55, -16, -82, 123, 35, 52, -119, 115, 59, -2, -82, 123, 87, 41, -87, -53, 92, 61, 116, -36, -103, 65, -107, 97, 70, -127, -102, -38, 100, 92, 45, 115, -11, -70, 73, 89, 23, 97, 92, -98, 116, 45, -21, 62, 93, 68, -82, -55, -98, -4, 18, -90, 80, -90, 85, 81, 30, -49, 3, -10, -1, -4, 23, 36, -95, 11, -20, -43, -27, 28, -120, 64, 30, 62, 110, 80, 32, 87, 97, 119, -66, 39, -39, -77, 52, 124, 30, 49, 21, 31, 116, -111, 60, 14, 20, -3, -54, -62, 26, -111, 105, 0, -54, 17, -49, -46, 123};
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
    msg.setTimeStamp(0.0229593362021);
    msg.setSource(56328U);
    msg.setSourceEntity(20U);
    msg.setDestination(61361U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {44, -25, 106, 28, -5, 58, -91, -51, 69, -19, -46, 7, -49, -121, 67, 65, 101, -34, 92, 81, -125, -124, -40, 124, -123, -43, -123, 31, 79, 126, -121, -14, 61, -2, 85, 7, 108, -15, 52, -45, 33, -84, -44, 56, -64, -28, 115, -114, -72, -92, 87, 38, 66, 83, 25, -52, 64, -42, 66, 5, 4, 44, -29, -22, 3, -63, -3, -94, 0, 12, -61, -42, 73, -55, -33, -14, -69, 111, -124, -45, -51, -95, 3, 74, 44, 79, -58, -55, -109, 116, 97, 54, -116, 113, -83, 49, 12, -64, 68, 4, 99, 48, 17, -105, 52, -116, -4, -126, -100, 19, -36, -75, -29, -80, 126, 100, -11, -7, -68, -118, 16, 37, 77, -74, 77, 88, 12, -9, 55, -28, 104, 95, -37, -96, -26, 82, 3, 14, -9, 95, -106, -111, 63, 85, -30, 21, -91, -43, 25, -28, -32, -72, 115, 7, 118, 25, 32, 34, -12, -95, 120, 32, -77, 109, 52, 118, 66, 106, 39, 74, 35, -31, 90, 45, -72, 23, 25, -20, 119, -13, -52, 123, -43, 15, -82, 53, 66, -61, -22, -37, -22, -87, 37, -38, 118, -38, 101, 35};
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
    IMC::Force msg;
    msg.setTimeStamp(0.227311544928);
    msg.setSource(8457U);
    msg.setSourceEntity(193U);
    msg.setDestination(5223U);
    msg.setDestinationEntity(43U);
    msg.value = 0.644761773962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.9184843434);
    msg.setSource(24192U);
    msg.setSourceEntity(15U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(227U);
    msg.value = 0.1307282951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.85917849535);
    msg.setSource(52639U);
    msg.setSourceEntity(212U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(60U);
    msg.value = 0.446184619091;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.300438347371);
    msg.setSource(50445U);
    msg.setSourceEntity(205U);
    msg.setDestination(63791U);
    msg.setDestinationEntity(192U);
    msg.type = 13U;
    msg.frequency = 3409837761U;
    msg.min_range = 20847U;
    msg.max_range = 53627U;
    msg.bits_per_point = 213U;
    msg.scale_factor = 0.721503008619;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.659358704077;
    tmp_msg_0.beam_height = 0.284335999179;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-31, -86, -78, -16, -16, -33, 85, 65, -47, 20, 39, -38, 47, -44, 93, 71, -102, 47, -114, 24, -102, -126, 88, -93, 76, -91, -43, -31, 124, -31, 12, -36, -87, 65, 101, -18, -89, 44, -124, 109, 37, -80, 57, 78, -104, 14, -102, 84, -15, 68, 28, -81, -2, -116, -38, 24, 68, -65, 96, 44, 100, 78, -49, 25, 29, -30, 27, -9, -3, 66, 39, 119, -127, -112, -125, 13, -68, -73, 40, 87, 103, 113, 21, -109, 59, -124, -4, 115, 97, 117, 84, -67, -79, -128, 72, 57, 12, -72, -17, 101, -26, -24, -104, -117, -16, -8, 113, -104, 114, -127, -90, -37, -113, -72, -45, 31, -43, -26, -57, -81, 120, 50, 57, 96, 24, -91, -16, -5, 71, -77, 65, -47, 109, 51, -96, 123, 99, -52, -34, -40, 74, 102, -86, -89, -111, 103, -80, -58, -88, -8, 31, 28, -51, 39, -90, 55, 17, -118};
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
    msg.setTimeStamp(0.333743343984);
    msg.setSource(9014U);
    msg.setSourceEntity(139U);
    msg.setDestination(28248U);
    msg.setDestinationEntity(117U);
    msg.type = 131U;
    msg.frequency = 3405825360U;
    msg.min_range = 37044U;
    msg.max_range = 7310U;
    msg.bits_per_point = 2U;
    msg.scale_factor = 0.402005766293;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.752203058308;
    tmp_msg_0.beam_height = 0.0874251305524;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-106, 43, 79, 36, 60, -115, 105, 91, -17, -61, -98, 119, -92, -87, -78, 94, 10, -35, -114, 65, 121, -112, 60, 5, -87, 48, -70, 116, -29, 117, 99, -53, 120, -20, -41, -6, -58, -6, -55, -2, -31, -38, -82, 82, -21, -87, -78, -52, 76, 26, 48, -120, 104, -76, -3, 64, 2, -3, -90, -107, 115, 72, 53, -104, -14, 12, -18, -91, -35, 53, -62, -4, -126, 35, -76, -33, 56, -128, 2, 113, 109, -53, -126, 92, -35, -121, -112, 108, 10, 98, 65, 78, -9, -86, 17, -38, -57, 118, 49, 26, -101, -120, -43, 80, 91, -51, 53, -15, 26, -20, 3, -79, 29, 109, -41, 2, -123, 86, -93, -50, -71, 25, -63, 21, -17, 98, 5, 63, -33, 89, -121, 75, -81, 60, 71, -97, 64, -94, -78, 0, 54, -32, -24, 28, -37, -122, -86, 13, 120, 8, 35, 123, 9, -37, 25, -124, -77, 89, -95, -41, -9};
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
    msg.setTimeStamp(0.131137980249);
    msg.setSource(39908U);
    msg.setSourceEntity(61U);
    msg.setDestination(43150U);
    msg.setDestinationEntity(104U);
    msg.type = 109U;
    msg.frequency = 3691068826U;
    msg.min_range = 19123U;
    msg.max_range = 3382U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.141089644532;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.739158450424;
    tmp_msg_0.beam_height = 0.230519782779;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-11, 94, -59, 110, -66, -108, 90, 109, -120, -124, -88, 95, -34, 112, -113, 55, -60, -34, -56, 7, -58, -118, 14, -104, -9, -12, -110};
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
    msg.setTimeStamp(0.559582473515);
    msg.setSource(22549U);
    msg.setSourceEntity(75U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.320789724996);
    msg.setSource(30721U);
    msg.setSourceEntity(173U);
    msg.setDestination(43041U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.670129653743);
    msg.setSource(11629U);
    msg.setSourceEntity(30U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.989524756606);
    msg.setSource(35929U);
    msg.setSourceEntity(207U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(230U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.139181845955);
    msg.setSource(46542U);
    msg.setSourceEntity(208U);
    msg.setDestination(28043U);
    msg.setDestinationEntity(129U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.908639486976);
    msg.setSource(9687U);
    msg.setSourceEntity(99U);
    msg.setDestination(42820U);
    msg.setDestinationEntity(12U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.4841678792);
    msg.setSource(41288U);
    msg.setSourceEntity(28U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(193U);
    msg.value = 0.380046122742;
    msg.confidence = 0.8385286891;
    msg.opmodes.assign("JOSOAKKPTDGXGOKZEVJUUZARDLIPIWTBWIFXJJMASPYZZVIINBXWVLMMABXSZFOMBGRLFVPRKWNOTRCPKQFHPKZAWZVDNLJRBGYSMDOQOSAFBGEAAEXNRVPDUQQIHTNTJALUFHIBHMKMZACLYVNKBVHGYPJTXGCVSPELYNEKBYSLINFUDGQRHQENLXGUFECQCOTGEUWDWESSIREWCOYT");

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
    msg.setTimeStamp(0.782188612769);
    msg.setSource(33290U);
    msg.setSourceEntity(119U);
    msg.setDestination(13739U);
    msg.setDestinationEntity(231U);
    msg.value = 0.707586546983;
    msg.confidence = 0.876424471757;
    msg.opmodes.assign("UPSBXZSSXOUSFKHZXGCDTUOCGFYFZKSFBQTFOHIBTUYFEXRVTAUQMIXMBVIRBAJYTJEEWMYOSYQRIFCANENMXDWIZCEZCVOBLZIRRDJNUMLLGCARCJAOMGLVRQNWJODTGDDUSYAPNCXTVQQZLVFAQCTVDBIHHQXWJKJJBVWEMBVZPLDLHMYPUNEGAWHUKTXWHITKSBIPLMKWPSWKKWEEZEFSQMHUIGNCNYGJKQFNAPPRDLZKDHYH");

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
    msg.setTimeStamp(0.751045164953);
    msg.setSource(60248U);
    msg.setSourceEntity(172U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(226U);
    msg.value = 0.260103449511;
    msg.confidence = 0.407422106099;
    msg.opmodes.assign("WLPZWDADMZNIBSTDNPLCQWECWOHZLPICCWCSAZERLREFOOZABCKPWYJMOBERYMHNXK");

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
    msg.setTimeStamp(0.271174998495);
    msg.setSource(60910U);
    msg.setSourceEntity(61U);
    msg.setDestination(45433U);
    msg.setDestinationEntity(164U);
    msg.itow = 1772139510U;
    msg.lat = 0.438875940829;
    msg.lon = 0.534535737394;
    msg.height_ell = 0.750959800473;
    msg.height_sea = 0.868543532421;
    msg.hacc = 0.598864958744;
    msg.vacc = 0.0028340387144;
    msg.vel_n = 0.742073889094;
    msg.vel_e = 0.0165217899444;
    msg.vel_d = 0.0308712724512;
    msg.speed = 0.657349537895;
    msg.gspeed = 0.231013351532;
    msg.heading = 0.636661237952;
    msg.sacc = 0.719292903726;
    msg.cacc = 0.218918520003;

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
    msg.setTimeStamp(0.571032647687);
    msg.setSource(28179U);
    msg.setSourceEntity(198U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(124U);
    msg.itow = 1322307571U;
    msg.lat = 0.105660641906;
    msg.lon = 0.754660266258;
    msg.height_ell = 0.957419016162;
    msg.height_sea = 0.655467254637;
    msg.hacc = 0.680366012093;
    msg.vacc = 0.62447351816;
    msg.vel_n = 0.754697904807;
    msg.vel_e = 0.181763268734;
    msg.vel_d = 0.775847661324;
    msg.speed = 0.690029060772;
    msg.gspeed = 0.0844571121127;
    msg.heading = 0.768523027246;
    msg.sacc = 0.0279137736718;
    msg.cacc = 0.793409101216;

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
    msg.setTimeStamp(0.0312440662718);
    msg.setSource(48447U);
    msg.setSourceEntity(200U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(72U);
    msg.itow = 1270814958U;
    msg.lat = 0.359650474653;
    msg.lon = 0.0475855031451;
    msg.height_ell = 0.93347893693;
    msg.height_sea = 0.321612749491;
    msg.hacc = 0.628669329235;
    msg.vacc = 0.145922804488;
    msg.vel_n = 0.489329151839;
    msg.vel_e = 0.482280894062;
    msg.vel_d = 0.236126243244;
    msg.speed = 0.502077330871;
    msg.gspeed = 0.473177865583;
    msg.heading = 0.237905683999;
    msg.sacc = 0.992514690538;
    msg.cacc = 0.104704720411;

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
    msg.setTimeStamp(0.664630954556);
    msg.setSource(47731U);
    msg.setSourceEntity(217U);
    msg.setDestination(13076U);
    msg.setDestinationEntity(138U);
    msg.id = 53U;
    msg.value = 0.661576772611;

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
    msg.setTimeStamp(0.954473570953);
    msg.setSource(3984U);
    msg.setSourceEntity(95U);
    msg.setDestination(39962U);
    msg.setDestinationEntity(245U);
    msg.id = 70U;
    msg.value = 0.3513235679;

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
    msg.setTimeStamp(0.222601732858);
    msg.setSource(42671U);
    msg.setSourceEntity(157U);
    msg.setDestination(53771U);
    msg.setDestinationEntity(200U);
    msg.id = 55U;
    msg.value = 0.757642852978;

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
    msg.setTimeStamp(0.265435609954);
    msg.setSource(43992U);
    msg.setSourceEntity(14U);
    msg.setDestination(6638U);
    msg.setDestinationEntity(4U);
    msg.x = 0.453954571237;
    msg.y = 0.963503813935;
    msg.z = 0.0753569570244;
    msg.phi = 0.980437304264;
    msg.theta = 0.559450768999;
    msg.psi = 0.277904426615;

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
    msg.setTimeStamp(0.702696259331);
    msg.setSource(42876U);
    msg.setSourceEntity(201U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(53U);
    msg.x = 0.0506057523452;
    msg.y = 0.433597643121;
    msg.z = 0.3634759192;
    msg.phi = 0.807504244417;
    msg.theta = 0.138755709487;
    msg.psi = 0.292887985151;

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
    msg.setTimeStamp(0.840730961892);
    msg.setSource(18522U);
    msg.setSourceEntity(208U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(24U);
    msg.x = 0.99143473421;
    msg.y = 0.38725356573;
    msg.z = 0.462575873016;
    msg.phi = 0.526174252614;
    msg.theta = 0.418055107658;
    msg.psi = 0.646953426396;

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
    msg.setTimeStamp(0.201679640875);
    msg.setSource(20460U);
    msg.setSourceEntity(62U);
    msg.setDestination(51275U);
    msg.setDestinationEntity(249U);
    msg.beam_width = 0.769858690243;
    msg.beam_height = 0.945562821185;

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
    msg.setTimeStamp(0.603797885475);
    msg.setSource(34238U);
    msg.setSourceEntity(145U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(90U);
    msg.beam_width = 0.306242880217;
    msg.beam_height = 0.387414496041;

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
    msg.setTimeStamp(0.958979185232);
    msg.setSource(21742U);
    msg.setSourceEntity(128U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(171U);
    msg.beam_width = 0.454865328749;
    msg.beam_height = 0.227163316121;

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
    msg.setTimeStamp(0.0689070431519);
    msg.setSource(55922U);
    msg.setSourceEntity(43U);
    msg.setDestination(34125U);
    msg.setDestinationEntity(153U);
    msg.sane = 247U;

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
    msg.setTimeStamp(0.620561779613);
    msg.setSource(60369U);
    msg.setSourceEntity(72U);
    msg.setDestination(44815U);
    msg.setDestinationEntity(18U);
    msg.sane = 162U;

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
    msg.setTimeStamp(0.973133287122);
    msg.setSource(28437U);
    msg.setSourceEntity(233U);
    msg.setDestination(44482U);
    msg.setDestinationEntity(115U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.927713634829);
    msg.setSource(34994U);
    msg.setSourceEntity(167U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(51U);
    msg.value = 0.734041520775;

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
    msg.setTimeStamp(0.147982178959);
    msg.setSource(21975U);
    msg.setSourceEntity(251U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(250U);
    msg.value = 0.983558835775;

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
    msg.setTimeStamp(0.579978944782);
    msg.setSource(13260U);
    msg.setSourceEntity(154U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(231U);
    msg.value = 0.753819004696;

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
    msg.setTimeStamp(0.245514872134);
    msg.setSource(20768U);
    msg.setSourceEntity(69U);
    msg.setDestination(9839U);
    msg.setDestinationEntity(20U);
    msg.value = 0.51221357808;

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
    msg.setTimeStamp(0.618098485949);
    msg.setSource(50286U);
    msg.setSourceEntity(167U);
    msg.setDestination(9179U);
    msg.setDestinationEntity(172U);
    msg.value = 0.517517787416;

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
    msg.setTimeStamp(0.0238891642227);
    msg.setSource(47480U);
    msg.setSourceEntity(137U);
    msg.setDestination(16149U);
    msg.setDestinationEntity(230U);
    msg.value = 0.674437361826;

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
    msg.setTimeStamp(0.347858924578);
    msg.setSource(15703U);
    msg.setSourceEntity(64U);
    msg.setDestination(4175U);
    msg.setDestinationEntity(149U);
    msg.value = 0.699308763512;

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
    msg.setTimeStamp(0.665164430847);
    msg.setSource(7237U);
    msg.setSourceEntity(19U);
    msg.setDestination(22595U);
    msg.setDestinationEntity(193U);
    msg.value = 0.49371319237;

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
    msg.setTimeStamp(0.996714291386);
    msg.setSource(685U);
    msg.setSourceEntity(151U);
    msg.setDestination(2864U);
    msg.setDestinationEntity(192U);
    msg.value = 0.14163563746;

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
    msg.setTimeStamp(0.486911491083);
    msg.setSource(37098U);
    msg.setSourceEntity(170U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(127U);
    msg.value = 0.499635568164;

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
    msg.setTimeStamp(0.966416005645);
    msg.setSource(60623U);
    msg.setSourceEntity(48U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(215U);
    msg.value = 0.469778868597;

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
    msg.setTimeStamp(0.964560568975);
    msg.setSource(5686U);
    msg.setSourceEntity(32U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(147U);
    msg.value = 0.752262185812;

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
    msg.setTimeStamp(0.404897411554);
    msg.setSource(5542U);
    msg.setSourceEntity(82U);
    msg.setDestination(57875U);
    msg.setDestinationEntity(232U);
    msg.value = 0.34650195541;

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
    msg.setTimeStamp(0.768537263491);
    msg.setSource(38709U);
    msg.setSourceEntity(200U);
    msg.setDestination(15374U);
    msg.setDestinationEntity(15U);
    msg.value = 0.258714745781;

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
    msg.setTimeStamp(0.902129677617);
    msg.setSource(57693U);
    msg.setSourceEntity(211U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(99U);
    msg.value = 0.491393098022;

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
    msg.setTimeStamp(0.447224498653);
    msg.setSource(36447U);
    msg.setSourceEntity(247U);
    msg.setDestination(78U);
    msg.setDestinationEntity(30U);
    msg.value = 0.703101330417;

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
    msg.setTimeStamp(0.951381197842);
    msg.setSource(41497U);
    msg.setSourceEntity(62U);
    msg.setDestination(20293U);
    msg.setDestinationEntity(237U);
    msg.value = 0.571570522806;

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
    msg.setTimeStamp(0.154474312502);
    msg.setSource(7362U);
    msg.setSourceEntity(158U);
    msg.setDestination(30539U);
    msg.setDestinationEntity(135U);
    msg.value = 0.740646696628;

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
    msg.setTimeStamp(0.377980136948);
    msg.setSource(18284U);
    msg.setSourceEntity(117U);
    msg.setDestination(50179U);
    msg.setDestinationEntity(25U);
    msg.value = 0.550957728701;

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
    msg.setTimeStamp(0.417972942803);
    msg.setSource(45483U);
    msg.setSourceEntity(233U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(92U);
    msg.value = 0.691746452851;

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
    msg.setTimeStamp(0.607207982745);
    msg.setSource(11984U);
    msg.setSourceEntity(124U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8629259511;

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
    msg.setTimeStamp(0.747289965618);
    msg.setSource(1311U);
    msg.setSourceEntity(126U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0250617392909;

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
    msg.setTimeStamp(0.032821655688);
    msg.setSource(51219U);
    msg.setSourceEntity(210U);
    msg.setDestination(29552U);
    msg.setDestinationEntity(40U);
    msg.value = 0.222218855327;

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
    msg.setTimeStamp(0.479080842788);
    msg.setSource(52998U);
    msg.setSourceEntity(252U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(109U);
    msg.value = 0.984258679735;

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
    msg.setTimeStamp(0.0909128149963);
    msg.setSource(4450U);
    msg.setSourceEntity(182U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(30U);
    msg.validity = 24638U;
    msg.type = 125U;
    msg.tow = 3591889285U;
    msg.base_lat = 0.46874140829;
    msg.base_lon = 0.57582364741;
    msg.base_height = 0.257447826197;
    msg.n = 0.201503288224;
    msg.e = 0.97682790222;
    msg.d = 0.458233347693;
    msg.v_n = 0.66055182745;
    msg.v_e = 0.43088088678;
    msg.v_d = 0.680453821671;
    msg.satellites = 44U;
    msg.iar_hyp = 30335U;
    msg.iar_ratio = 0.537887231247;

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
    msg.setTimeStamp(0.839437887808);
    msg.setSource(53269U);
    msg.setSourceEntity(27U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(36U);
    msg.validity = 8729U;
    msg.type = 130U;
    msg.tow = 1632483384U;
    msg.base_lat = 0.653397734407;
    msg.base_lon = 0.426088218747;
    msg.base_height = 0.560064282092;
    msg.n = 0.475731482806;
    msg.e = 0.732492900832;
    msg.d = 0.98951228947;
    msg.v_n = 0.7274482485;
    msg.v_e = 0.824770655339;
    msg.v_d = 0.306797709381;
    msg.satellites = 93U;
    msg.iar_hyp = 40120U;
    msg.iar_ratio = 0.428102225143;

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
    msg.setTimeStamp(0.90727877225);
    msg.setSource(26981U);
    msg.setSourceEntity(92U);
    msg.setDestination(53276U);
    msg.setDestinationEntity(89U);
    msg.validity = 30463U;
    msg.type = 141U;
    msg.tow = 1439870677U;
    msg.base_lat = 0.120484326603;
    msg.base_lon = 0.553774677354;
    msg.base_height = 0.82120483666;
    msg.n = 0.218490222687;
    msg.e = 0.900534316695;
    msg.d = 0.773887178012;
    msg.v_n = 0.730582438625;
    msg.v_e = 0.446665117169;
    msg.v_d = 0.676515500667;
    msg.satellites = 144U;
    msg.iar_hyp = 3638U;
    msg.iar_ratio = 0.908128573245;

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
    msg.setTimeStamp(0.424983431045);
    msg.setSource(17133U);
    msg.setSourceEntity(113U);
    msg.setDestination(27933U);
    msg.setDestinationEntity(60U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.103140004253;
    tmp_msg_0.lon = 0.637430509142;
    tmp_msg_0.height = 0.701037801305;
    tmp_msg_0.x = 0.212981338324;
    tmp_msg_0.y = 0.05096075876;
    tmp_msg_0.z = 0.801844669969;
    tmp_msg_0.phi = 0.29240076563;
    tmp_msg_0.theta = 0.559185553132;
    tmp_msg_0.psi = 0.454222567676;
    tmp_msg_0.u = 0.434820937469;
    tmp_msg_0.v = 0.60378371857;
    tmp_msg_0.w = 0.775995437625;
    tmp_msg_0.vx = 0.896940990662;
    tmp_msg_0.vy = 0.114324733335;
    tmp_msg_0.vz = 0.892848474445;
    tmp_msg_0.p = 0.0862008767831;
    tmp_msg_0.q = 0.585194681887;
    tmp_msg_0.r = 0.130036919561;
    tmp_msg_0.depth = 0.696349748315;
    tmp_msg_0.alt = 0.983293192962;
    msg.state.set(tmp_msg_0);
    msg.type = 230U;

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
    msg.setTimeStamp(0.640859970263);
    msg.setSource(40217U);
    msg.setSourceEntity(27U);
    msg.setDestination(11193U);
    msg.setDestinationEntity(194U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8245581063;
    tmp_msg_0.lon = 0.920318310668;
    tmp_msg_0.height = 0.658453494123;
    tmp_msg_0.x = 0.521360310482;
    tmp_msg_0.y = 0.254159106933;
    tmp_msg_0.z = 0.17293697319;
    tmp_msg_0.phi = 0.705743957187;
    tmp_msg_0.theta = 0.072594205152;
    tmp_msg_0.psi = 0.119824795459;
    tmp_msg_0.u = 0.0434678639591;
    tmp_msg_0.v = 0.219570619551;
    tmp_msg_0.w = 0.0722528267462;
    tmp_msg_0.vx = 0.756141642682;
    tmp_msg_0.vy = 0.529877225735;
    tmp_msg_0.vz = 0.626688186624;
    tmp_msg_0.p = 0.533537947432;
    tmp_msg_0.q = 0.320316641885;
    tmp_msg_0.r = 0.141533796608;
    tmp_msg_0.depth = 0.690524037583;
    tmp_msg_0.alt = 0.603954979854;
    msg.state.set(tmp_msg_0);
    msg.type = 143U;

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
    msg.setTimeStamp(0.411042775439);
    msg.setSource(33688U);
    msg.setSourceEntity(122U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(154U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.404245910244;
    tmp_msg_0.lon = 0.689412359049;
    tmp_msg_0.height = 0.230872886323;
    tmp_msg_0.x = 0.297088284175;
    tmp_msg_0.y = 0.444873294335;
    tmp_msg_0.z = 0.63497548409;
    tmp_msg_0.phi = 0.266011838267;
    tmp_msg_0.theta = 0.571823725345;
    tmp_msg_0.psi = 0.728016014264;
    tmp_msg_0.u = 0.0621492936481;
    tmp_msg_0.v = 0.62948881359;
    tmp_msg_0.w = 0.69006129739;
    tmp_msg_0.vx = 0.630841472872;
    tmp_msg_0.vy = 0.727614104946;
    tmp_msg_0.vz = 0.380846244206;
    tmp_msg_0.p = 0.92397004109;
    tmp_msg_0.q = 0.314590357266;
    tmp_msg_0.r = 0.529135399697;
    tmp_msg_0.depth = 0.130305017993;
    tmp_msg_0.alt = 0.00426054608208;
    msg.state.set(tmp_msg_0);
    msg.type = 209U;

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
    msg.setTimeStamp(0.338034995933);
    msg.setSource(35261U);
    msg.setSourceEntity(200U);
    msg.setDestination(19649U);
    msg.setDestinationEntity(141U);
    msg.value = 0.289807351771;

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
    msg.setTimeStamp(0.0269797664215);
    msg.setSource(19249U);
    msg.setSourceEntity(238U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(188U);
    msg.value = 0.651365303943;

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
    msg.setTimeStamp(0.361487077731);
    msg.setSource(6344U);
    msg.setSourceEntity(152U);
    msg.setDestination(33703U);
    msg.setDestinationEntity(86U);
    msg.value = 0.646712564132;

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
    msg.setTimeStamp(0.97723013581);
    msg.setSource(59366U);
    msg.setSourceEntity(108U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(160U);
    msg.value = 0.893844313355;

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
    msg.setTimeStamp(0.549125508429);
    msg.setSource(57207U);
    msg.setSourceEntity(9U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0101476851199;

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
    msg.setTimeStamp(0.313493680857);
    msg.setSource(27364U);
    msg.setSourceEntity(11U);
    msg.setDestination(32118U);
    msg.setDestinationEntity(154U);
    msg.value = 0.109713034367;

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
    msg.setTimeStamp(0.712088289721);
    msg.setSource(51901U);
    msg.setSourceEntity(40U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(143U);
    msg.value = 0.749442538355;

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
    msg.setTimeStamp(0.615384303762);
    msg.setSource(7554U);
    msg.setSourceEntity(237U);
    msg.setDestination(586U);
    msg.setDestinationEntity(223U);
    msg.value = 0.508602028978;

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
    msg.setTimeStamp(0.197330482356);
    msg.setSource(10007U);
    msg.setSourceEntity(0U);
    msg.setDestination(64899U);
    msg.setDestinationEntity(161U);
    msg.value = 0.922966831527;

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
    msg.setTimeStamp(0.823601856713);
    msg.setSource(65250U);
    msg.setSourceEntity(230U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(149U);
    msg.value = 0.39811474352;

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
    msg.setTimeStamp(0.857723341525);
    msg.setSource(42405U);
    msg.setSourceEntity(130U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(148U);
    msg.value = 0.875051362004;

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
    msg.setTimeStamp(0.25881689993);
    msg.setSource(34469U);
    msg.setSourceEntity(45U);
    msg.setDestination(56093U);
    msg.setDestinationEntity(237U);
    msg.value = 0.589094917957;

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
    msg.setTimeStamp(0.589258100147);
    msg.setSource(12763U);
    msg.setSourceEntity(4U);
    msg.setDestination(30755U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0659430287363;

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
    msg.setTimeStamp(0.257856588017);
    msg.setSource(57284U);
    msg.setSourceEntity(4U);
    msg.setDestination(25894U);
    msg.setDestinationEntity(99U);
    msg.value = 0.250677601216;

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
    msg.setTimeStamp(0.861900100074);
    msg.setSource(20475U);
    msg.setSourceEntity(34U);
    msg.setDestination(22738U);
    msg.setDestinationEntity(80U);
    msg.value = 0.413247530679;

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
    msg.setTimeStamp(0.255085091862);
    msg.setSource(51487U);
    msg.setSourceEntity(237U);
    msg.setDestination(272U);
    msg.setDestinationEntity(193U);
    msg.id = 160U;
    msg.zoom = 116U;
    msg.action = 215U;

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
    msg.setTimeStamp(0.343226356088);
    msg.setSource(17389U);
    msg.setSourceEntity(244U);
    msg.setDestination(48529U);
    msg.setDestinationEntity(0U);
    msg.id = 132U;
    msg.zoom = 98U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.824416590766);
    msg.setSource(15865U);
    msg.setSourceEntity(77U);
    msg.setDestination(62405U);
    msg.setDestinationEntity(222U);
    msg.id = 235U;
    msg.zoom = 143U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.509137088608);
    msg.setSource(63197U);
    msg.setSourceEntity(88U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(232U);
    msg.id = 31U;
    msg.value = 0.456319956747;

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
    msg.setTimeStamp(0.0538157294827);
    msg.setSource(37762U);
    msg.setSourceEntity(155U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(65U);
    msg.id = 212U;
    msg.value = 0.14413766202;

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
    msg.setTimeStamp(0.799237489666);
    msg.setSource(42754U);
    msg.setSourceEntity(167U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(146U);
    msg.id = 106U;
    msg.value = 0.0707219910674;

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
    msg.setTimeStamp(0.17214744564);
    msg.setSource(64030U);
    msg.setSourceEntity(57U);
    msg.setDestination(14252U);
    msg.setDestinationEntity(144U);
    msg.id = 201U;
    msg.value = 0.277434850377;

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
    msg.setTimeStamp(0.410907468904);
    msg.setSource(41461U);
    msg.setSourceEntity(253U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(29U);
    msg.id = 150U;
    msg.value = 0.651544605036;

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
    msg.setTimeStamp(0.357437297742);
    msg.setSource(12615U);
    msg.setSourceEntity(218U);
    msg.setDestination(10210U);
    msg.setDestinationEntity(133U);
    msg.id = 148U;
    msg.value = 0.906858976189;

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
    msg.setTimeStamp(0.90523314666);
    msg.setSource(55447U);
    msg.setSourceEntity(213U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(165U);
    msg.id = 202U;
    msg.angle = 0.516187901835;

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
    msg.setTimeStamp(0.432480373762);
    msg.setSource(43632U);
    msg.setSourceEntity(191U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(160U);
    msg.id = 253U;
    msg.angle = 0.238391241485;

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
    msg.setTimeStamp(0.472291520737);
    msg.setSource(60325U);
    msg.setSourceEntity(72U);
    msg.setDestination(46307U);
    msg.setDestinationEntity(88U);
    msg.id = 23U;
    msg.angle = 0.854245259604;

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
    msg.setTimeStamp(0.937081178064);
    msg.setSource(15414U);
    msg.setSourceEntity(80U);
    msg.setDestination(1013U);
    msg.setDestinationEntity(98U);
    msg.op = 152U;
    msg.actions.assign("GVUPXVJZEZTWGBASEGFFZVWHYZUIHHBXWDCNLSHYOFJKAZPMIVSLXTFNIDWSZKQCMAMLAHWODXJFLDUDEHYMYXYBYNSTYKG");

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
    msg.setTimeStamp(0.228268297839);
    msg.setSource(33373U);
    msg.setSourceEntity(226U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(49U);
    msg.op = 82U;
    msg.actions.assign("GPUUKUZXLLRFHVKOSEGGXWILDHBJGFYVKCACFAOUWDYQBKPSDAWFGMMBPCXCFWONEXMIZWMSVSTHAIYZLZHIRWTXKQLIQECPYIZENTBCAIJYMZMKDUBAEKXMICQKZUTTQEBJSCBEUQHHFPVSVEUSASDQDRRRCBBRTGAXEWRNTHPQORWYSJLJWNPIDNGDOPNZWBOXVTZEZGAPLVVOK");

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
    msg.setTimeStamp(0.338843143592);
    msg.setSource(12123U);
    msg.setSourceEntity(222U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(213U);
    msg.op = 209U;
    msg.actions.assign("DPFUCJXYUESHIBRCXLPPQKVMHJGFOSZLPKMKNGXJIGBCGHAKZINXDLBWDEEDCETFXLMGYKONSNOQYPJWFVZYDCDDWMZFCIRJOLQTLZQFURBHREUCIWJPZHIJSERIVMTTYAOWVDYKWAJXQSUSVFPEGNHHAHBQYLDMXAG");

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
    msg.setTimeStamp(0.367887313313);
    msg.setSource(29720U);
    msg.setSourceEntity(124U);
    msg.setDestination(45342U);
    msg.setDestinationEntity(161U);
    msg.actions.assign("YEFVXJNRTUKBWCLWL");

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
    msg.setTimeStamp(0.137169681647);
    msg.setSource(32182U);
    msg.setSourceEntity(166U);
    msg.setDestination(34317U);
    msg.setDestinationEntity(227U);
    msg.actions.assign("ZWSKFPLOHHUOUYIR");

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
    msg.setTimeStamp(0.327636831826);
    msg.setSource(49091U);
    msg.setSourceEntity(187U);
    msg.setDestination(53678U);
    msg.setDestinationEntity(69U);
    msg.actions.assign("XSPRYFZJOQNXESXEYEHEDQKATGNGBGCFCNTASUXIOUSILIKWCGYKKACVZQKECSOPXNKPVYPJZSCFMLLTHJBXIXWRVNWLTWKIZMVDVLNJKZLURNJIWUJQEJHQEBDHWQNAKJYEFOWIBIVMDPZRIDTUSWYMOAQAODHPJLQJBMHXEZTRRFCTBABAOLRXXQNOUBOIRUVDTZVMQSGBYCDACWGDSLMMYUHPMLTGOFURKRNGHGTDVZFHHPFBSP");

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
    msg.setTimeStamp(0.950818230748);
    msg.setSource(40385U);
    msg.setSourceEntity(48U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(100U);
    msg.button = 244U;
    msg.value = 205U;

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
    msg.setTimeStamp(0.0150806643188);
    msg.setSource(42805U);
    msg.setSourceEntity(201U);
    msg.setDestination(32005U);
    msg.setDestinationEntity(125U);
    msg.button = 157U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.572837364297);
    msg.setSource(7350U);
    msg.setSourceEntity(119U);
    msg.setDestination(35339U);
    msg.setDestinationEntity(31U);
    msg.button = 194U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.160124082214);
    msg.setSource(41944U);
    msg.setSourceEntity(159U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(252U);
    msg.op = 65U;
    msg.text.assign("LNINKWAVDIXQYGXLTMYPJASSJGTRFZKHJLYNRLUJHVUGKPZGFWIECWYVOEQQUTVLVTHOVKOXTCPYUHEPIFAOSKLDDVJEERZRBOVOGRWELNUSDRNSTKFQUNCLNHFCDSMBZOLRBTJFWEUAVNNIXMKQYHAJQMVHZPBDMEDIKXGCZGTARMZXHDJNXRTQMIBXBPCGIFPFBKIOCFWAHJMJPZLTDXYMKSPQUSXQBYBCZMBAEOOACRCZGSUWPA");

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
    msg.setTimeStamp(0.58753691384);
    msg.setSource(49040U);
    msg.setSourceEntity(49U);
    msg.setDestination(8922U);
    msg.setDestinationEntity(242U);
    msg.op = 224U;
    msg.text.assign("GDKGQEXWUCOON");

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
    msg.setTimeStamp(0.555666804459);
    msg.setSource(24047U);
    msg.setSourceEntity(123U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(227U);
    msg.op = 229U;
    msg.text.assign("YSKTFSHOUNXWGRDXIDPNELTWSTKBJGMQFLIQYPFLGRKOWZWKTIWNGTVQDUOAXYDAEGFZJXRBPCGOAFGITAXLZHSNNFAMXBWO");

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
    msg.setTimeStamp(0.266192747703);
    msg.setSource(62678U);
    msg.setSourceEntity(199U);
    msg.setDestination(46830U);
    msg.setDestinationEntity(100U);
    msg.op = 79U;
    msg.time_remain = 0.139390865448;
    msg.sched_time = 0.186321152039;

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
    msg.setTimeStamp(0.80703014108);
    msg.setSource(32459U);
    msg.setSourceEntity(143U);
    msg.setDestination(52243U);
    msg.setDestinationEntity(199U);
    msg.op = 185U;
    msg.time_remain = 0.768171399128;
    msg.sched_time = 0.225290277437;

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
    msg.setTimeStamp(0.684168997615);
    msg.setSource(48311U);
    msg.setSourceEntity(253U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(51U);
    msg.op = 206U;
    msg.time_remain = 0.597331545583;
    msg.sched_time = 0.63037500221;

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
    msg.setTimeStamp(0.153133466659);
    msg.setSource(59231U);
    msg.setSourceEntity(176U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(229U);
    msg.name.assign("RDKOOIYKHBCYJMICURNINAVZXVENDVHDGHRCGIKZJYGVMZPOGAGBXIDTWOEGDFPMPPGCCJIMLUJQACKSKHDUIXPUHUULHQRRVGLINJJQSENYTCXKAIZTCXFBQBDPSZSNFRMAEXFPKADESBKMTHTVYNSOSFWDPSDOQLVNXSWO");
    msg.op = 247U;
    msg.sched_time = 0.72224263801;

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
    msg.setTimeStamp(0.639578831185);
    msg.setSource(33242U);
    msg.setSourceEntity(142U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(226U);
    msg.name.assign("YNDABSHHEXPUSPSLZXVYMOAEQCNEDQAIZXXKAICLUNZINYZSTBZBLODGJRWNENFMTJYKRICBHMSIXXQGMOWVWKZKGQYGRSBGSCWQXVOCFOMDTCJLBJKSWLZVQPOJGUFAKIPUICAFJEPJXNPYTUJETBODQADQHTUMVVJWMHRFULPMUELURSTMNHRUJWZDFFQZSWDNGLWXRDBKOLKKHYFBTGREOCQCVEHAILBHETXVVYDTYGIPIH");
    msg.op = 76U;
    msg.sched_time = 0.557525458645;

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
    msg.setTimeStamp(0.889900484244);
    msg.setSource(32514U);
    msg.setSourceEntity(183U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(43U);
    msg.name.assign("IDJUIRFNZDBMPMWYBXMFUBEBCLXZDNKUZJWUQZKNIGNYVRTHOWUTWSMRJDPDRUHGEZDGFPCEOGJXWYQKIPHWRLCMWOLZGWPVKFAYYPXTCKFTFUSXHYTCMHVBXOUSTSVRQYGNKCFSAKTBJQACSIQVLEGDPNRSVFUOWVOYLQIUPVLACOEPWQRIJOJDMSOZMASREGHBALNFJBJBAALHNZEQHHOSHNFAMQTCKIKATRDEXTCEIDMXVGYNLGEXIZQ");
    msg.op = 141U;
    msg.sched_time = 0.601338109179;

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
    msg.setTimeStamp(0.744252299597);
    msg.setSource(17096U);
    msg.setSourceEntity(66U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.407024393978);
    msg.setSource(21561U);
    msg.setSourceEntity(7U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.331811108017);
    msg.setSource(50990U);
    msg.setSourceEntity(85U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.903203771182);
    msg.setSource(19533U);
    msg.setSourceEntity(109U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(95U);
    msg.name.assign("THPBWNLSXLPBQSKMXZDCICPEXTR");
    msg.state = 75U;

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
    msg.setTimeStamp(0.16832609386);
    msg.setSource(7480U);
    msg.setSourceEntity(40U);
    msg.setDestination(25188U);
    msg.setDestinationEntity(227U);
    msg.name.assign("WCALVQSQIXUHJKGGBSCBLBPHNCTHYKJZZTEPUJJHWEAUVSDMBWJESLNDUZSD");
    msg.state = 220U;

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
    msg.setTimeStamp(0.86380117954);
    msg.setSource(34202U);
    msg.setSourceEntity(23U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(250U);
    msg.name.assign("CDHORQHZMXAXGRQESTKPSDKTEAWVAKKDWZSMMCLYVBYLMIZDWIGJZLXHFSNYSZFJHUQPXRFEXTIVYWLHNKFYZOBJTUCIJTPOXIIAOFPKEGWBHXRFVUVGGMYJCAMPNPQIHBYFOPJLJCLNRVWEEYQMWBXOTFAEFRWVKNBJAETQFSCDKIGD");
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
    msg.setTimeStamp(0.60565770712);
    msg.setSource(54423U);
    msg.setSourceEntity(77U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(107U);
    msg.name.assign("XQDISEXAMSCWYXIFSNOBVRVQGHBBFIHFOJLRQETYUSMILETEYHZYBUTYSDFCOLZDNQWGPEYPUAGQLFPJWXFRKVCUNAW");
    msg.value = 212U;

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
    msg.setTimeStamp(0.56662872142);
    msg.setSource(20926U);
    msg.setSourceEntity(150U);
    msg.setDestination(38937U);
    msg.setDestinationEntity(245U);
    msg.name.assign("LHEXLYZKCWNGMXASKOHNFKLQNTFHWVPQVBSMCRMSLGUJAKORWNQRHAAJNJLHJOHTRMIFVEWKUECTYYXSJDLDGIHSVXCAPPGCDQMBEUFWTGEGIAONOOBPUIVTDKGSHFIWLMVZUPFBZUNEBCFQFJSBCPINDVLBXXBUJERZNDMIWCMQVXYRZTVYTFRCPOEZMNPREYKIYBRKDOGWXZSZOJBHOQIPXDYULJWPIUYDMCVKATYGQKUTQ");
    msg.value = 142U;

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
    msg.setTimeStamp(0.344118378428);
    msg.setSource(13771U);
    msg.setSourceEntity(198U);
    msg.setDestination(23084U);
    msg.setDestinationEntity(210U);
    msg.name.assign("NQRMPJWXISIHJVQZOTDYEKBNOIKVBUXYANUYOVWPMMXBISLBDEXCQWMZPKCWXQSFPNXZPAEFFGHEZSSRXUQSGFGDZTPLOCQDADTBVDWOEXKDVUEJORKRJV");
    msg.value = 203U;

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
    msg.setTimeStamp(0.92796371918);
    msg.setSource(60685U);
    msg.setSourceEntity(240U);
    msg.setDestination(8193U);
    msg.setDestinationEntity(214U);
    msg.name.assign("WCTTZNVWHGPSAEWCKDDAOYRHDBQATTULPSYPJYGUWMDJSOXXBSDAEAUVLPOMCUBDMRNNZKUFLEFQVFRKWXNIZFUSXKZBHSOWQTUQBGGQAIEIGJHHUEPINJZCCCEJHLVOBFPXNLOJLSCTLGZRQRNKIDYFTJHFBPWIZQBMDOXMWGNZEPMYXKMKATNCWQVVHDKUX");

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
    msg.setTimeStamp(0.157164489675);
    msg.setSource(27659U);
    msg.setSourceEntity(1U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(198U);
    msg.name.assign("XPMOXXEQGMIOJEVFUPKYCQZVMJCAZETTUPWGJNTSC");

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
    msg.setTimeStamp(0.964541336912);
    msg.setSource(20530U);
    msg.setSourceEntity(148U);
    msg.setDestination(62798U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZEBHSJGJAFSZEXTCIQPNDLROFVOYCNVAXKWOMZAXWFCULWYGRFTWHWPKCNKXIAKVECWTGPJCUVGHJNSETBZBIDBUHDBPRBEPQVWHDLFOEJEXYBXRIJAMTIJOPARHWNXPLOMJVDPGQQQG");

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
    msg.setTimeStamp(0.401211883346);
    msg.setSource(12642U);
    msg.setSourceEntity(135U);
    msg.setDestination(22012U);
    msg.setDestinationEntity(28U);
    msg.name.assign("YWZUBDHLVCBUIGFEZTKMIMTBMEXGNYUJGFMOVBFJDAQBQQFLBOGOSFAAIPEJIJWXSSQJOZANLWZOHCDTUVLSJGETZRHIQVGHUDIBKCHTFCGGDEUXOIEUUAWPLCTOEYMNHWXZALYAWHMSKNTUKYVVPRGRNBKW");
    msg.value = 207U;

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
    msg.setTimeStamp(0.816863118996);
    msg.setSource(32533U);
    msg.setSourceEntity(212U);
    msg.setDestination(32116U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ONQPSJGZGMALLNBMDWKRBVBMVMBKPLTURSCNKOMRCIHQDFOYSSVCRYGBFAYHENUYXZESJXREJMUASOSOVPBIFWQHZELQQNZPHFXYIJXALXROQVFVCPANETGUDCLFHNNZKIMWATKJIPDJIVOTEFGRVHWWEDTTDGYZKSVFSZP");
    msg.value = 89U;

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
    msg.setTimeStamp(0.4417033005);
    msg.setSource(34072U);
    msg.setSourceEntity(22U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(200U);
    msg.name.assign("JBJXKSFNGBAFQETOXNRJAGVESQCIUEYQDIKYVDOUCBWEFFHFZJBARZSXCMNWOISHRSQMFPPPTMHYZWUJRVLXQYVKHPQDOUUPTPQWBSCBVPWMWZJLSPLCL");
    msg.value = 214U;

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
    msg.setTimeStamp(0.368849747625);
    msg.setSource(7001U);
    msg.setSourceEntity(23U);
    msg.setDestination(17128U);
    msg.setDestinationEntity(122U);
    msg.id = 77U;
    msg.period = 2010892126U;
    msg.duty_cycle = 3994780356U;

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
    msg.setTimeStamp(0.756328133832);
    msg.setSource(62360U);
    msg.setSourceEntity(85U);
    msg.setDestination(47330U);
    msg.setDestinationEntity(186U);
    msg.id = 173U;
    msg.period = 5642042U;
    msg.duty_cycle = 2256942511U;

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
    msg.setTimeStamp(0.987776246441);
    msg.setSource(29556U);
    msg.setSourceEntity(46U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(38U);
    msg.id = 227U;
    msg.period = 1899113812U;
    msg.duty_cycle = 451016255U;

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
    msg.setTimeStamp(0.328427920835);
    msg.setSource(62239U);
    msg.setSourceEntity(10U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(151U);
    msg.id = 120U;
    msg.period = 2432534565U;
    msg.duty_cycle = 2076204210U;

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
    msg.setTimeStamp(0.954581560514);
    msg.setSource(5779U);
    msg.setSourceEntity(72U);
    msg.setDestination(48931U);
    msg.setDestinationEntity(106U);
    msg.id = 144U;
    msg.period = 3075574590U;
    msg.duty_cycle = 1885390284U;

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
    msg.setTimeStamp(0.551332311453);
    msg.setSource(55329U);
    msg.setSourceEntity(228U);
    msg.setDestination(49307U);
    msg.setDestinationEntity(16U);
    msg.id = 155U;
    msg.period = 2611908985U;
    msg.duty_cycle = 3258233516U;

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
    msg.setTimeStamp(0.839596685888);
    msg.setSource(60600U);
    msg.setSourceEntity(230U);
    msg.setDestination(6771U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.512962116596;
    msg.lon = 0.435194504979;
    msg.height = 0.407420531756;
    msg.x = 0.232352158798;
    msg.y = 0.0964867717702;
    msg.z = 0.559910874156;
    msg.phi = 0.937723141455;
    msg.theta = 0.476304456014;
    msg.psi = 0.402579173548;
    msg.u = 0.581570147589;
    msg.v = 0.569119472617;
    msg.w = 0.907383139013;
    msg.vx = 0.723215015358;
    msg.vy = 0.130046369668;
    msg.vz = 0.57980210249;
    msg.p = 0.596022404622;
    msg.q = 0.297197260221;
    msg.r = 0.510231349875;
    msg.depth = 0.87010552388;
    msg.alt = 0.478185366261;

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
    msg.setTimeStamp(0.480165393629);
    msg.setSource(24868U);
    msg.setSourceEntity(228U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.34197508975;
    msg.lon = 0.320854985226;
    msg.height = 0.907027716717;
    msg.x = 0.504341038094;
    msg.y = 0.375131551346;
    msg.z = 0.575224773755;
    msg.phi = 0.648504746498;
    msg.theta = 0.939218555622;
    msg.psi = 0.712229883623;
    msg.u = 0.81978848318;
    msg.v = 0.744538664974;
    msg.w = 0.362586497677;
    msg.vx = 0.822062777697;
    msg.vy = 0.0727748782824;
    msg.vz = 0.401987051229;
    msg.p = 0.730813344395;
    msg.q = 0.905223381864;
    msg.r = 0.515919169114;
    msg.depth = 0.610978218484;
    msg.alt = 0.728961571975;

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
    msg.setTimeStamp(0.861492416678);
    msg.setSource(29612U);
    msg.setSourceEntity(31U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.554982244857;
    msg.lon = 0.297208505626;
    msg.height = 0.312326946336;
    msg.x = 0.499891432304;
    msg.y = 0.358385124814;
    msg.z = 0.891685857529;
    msg.phi = 0.314945722902;
    msg.theta = 0.554723206928;
    msg.psi = 0.119275164237;
    msg.u = 0.823190176213;
    msg.v = 0.169488500616;
    msg.w = 0.918609228333;
    msg.vx = 0.207990530665;
    msg.vy = 0.672890849388;
    msg.vz = 0.270376310063;
    msg.p = 0.554563654148;
    msg.q = 0.91294074704;
    msg.r = 0.529540909494;
    msg.depth = 0.591004583297;
    msg.alt = 0.497066055676;

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
    msg.setTimeStamp(0.961492190172);
    msg.setSource(27592U);
    msg.setSourceEntity(35U);
    msg.setDestination(46342U);
    msg.setDestinationEntity(189U);
    msg.x = 0.568725366463;
    msg.y = 0.251269702382;
    msg.z = 0.82431222517;

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
    msg.setTimeStamp(0.700820233858);
    msg.setSource(38431U);
    msg.setSourceEntity(134U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(235U);
    msg.x = 0.26209588197;
    msg.y = 0.193843629834;
    msg.z = 0.172911000276;

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
    msg.setTimeStamp(0.436389668389);
    msg.setSource(4596U);
    msg.setSourceEntity(156U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(134U);
    msg.x = 0.834707688185;
    msg.y = 0.392430445889;
    msg.z = 0.837634134785;

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
    msg.setTimeStamp(0.888254532716);
    msg.setSource(50327U);
    msg.setSourceEntity(245U);
    msg.setDestination(7367U);
    msg.setDestinationEntity(84U);
    msg.value = 0.447495889814;

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
    msg.setTimeStamp(0.761487478939);
    msg.setSource(20221U);
    msg.setSourceEntity(239U);
    msg.setDestination(23828U);
    msg.setDestinationEntity(238U);
    msg.value = 0.361422480446;

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
    msg.setTimeStamp(0.317006106703);
    msg.setSource(55269U);
    msg.setSourceEntity(229U);
    msg.setDestination(32017U);
    msg.setDestinationEntity(227U);
    msg.value = 0.24784975796;

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
    msg.setTimeStamp(0.690039454859);
    msg.setSource(47314U);
    msg.setSourceEntity(191U);
    msg.setDestination(39645U);
    msg.setDestinationEntity(0U);
    msg.value = 0.756665616309;

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
    msg.setTimeStamp(0.704587856828);
    msg.setSource(45632U);
    msg.setSourceEntity(16U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(125U);
    msg.value = 0.495209413482;

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
    msg.setTimeStamp(0.0816055793237);
    msg.setSource(15259U);
    msg.setSourceEntity(188U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(44U);
    msg.value = 0.139231749186;

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
    msg.setTimeStamp(0.744313961919);
    msg.setSource(45602U);
    msg.setSourceEntity(147U);
    msg.setDestination(354U);
    msg.setDestinationEntity(76U);
    msg.x = 0.726522308782;
    msg.y = 0.871064658672;
    msg.z = 0.944269845211;
    msg.phi = 0.942142709591;
    msg.theta = 0.0871702797607;
    msg.psi = 0.223785872987;
    msg.p = 0.494383327645;
    msg.q = 0.60454097922;
    msg.r = 0.410576557841;
    msg.u = 0.458969990484;
    msg.v = 0.190930290015;
    msg.w = 0.285038018745;
    msg.bias_psi = 0.617731016135;
    msg.bias_r = 0.314044288598;

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
    msg.setTimeStamp(0.554773828574);
    msg.setSource(47542U);
    msg.setSourceEntity(187U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(238U);
    msg.x = 0.564109565147;
    msg.y = 0.280108524465;
    msg.z = 0.860181317461;
    msg.phi = 0.193262331819;
    msg.theta = 0.259980428016;
    msg.psi = 0.132066516907;
    msg.p = 0.988069616556;
    msg.q = 0.144070704483;
    msg.r = 0.472723549997;
    msg.u = 0.16522573001;
    msg.v = 0.699525280659;
    msg.w = 0.074685129775;
    msg.bias_psi = 0.503917306071;
    msg.bias_r = 0.393552467775;

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
    msg.setTimeStamp(0.79275064765);
    msg.setSource(6228U);
    msg.setSourceEntity(251U);
    msg.setDestination(61287U);
    msg.setDestinationEntity(32U);
    msg.x = 0.636877898531;
    msg.y = 0.445898581112;
    msg.z = 0.0147197464699;
    msg.phi = 0.722041103983;
    msg.theta = 0.822388795649;
    msg.psi = 0.375339045433;
    msg.p = 0.364229168558;
    msg.q = 0.0764464967929;
    msg.r = 0.926852977634;
    msg.u = 0.856165650517;
    msg.v = 0.0249579518638;
    msg.w = 0.611082380195;
    msg.bias_psi = 0.453864098754;
    msg.bias_r = 0.874185836271;

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
    msg.setTimeStamp(0.469149866957);
    msg.setSource(30915U);
    msg.setSourceEntity(91U);
    msg.setDestination(2538U);
    msg.setDestinationEntity(125U);
    msg.bias_psi = 0.499068497078;
    msg.bias_r = 0.574808579167;
    msg.cog = 0.58581577682;
    msg.cyaw = 0.674696154576;
    msg.lbl_rej_level = 0.698365243689;
    msg.gps_rej_level = 0.526273436431;
    msg.custom_x = 0.286194364012;
    msg.custom_y = 0.894659477891;
    msg.custom_z = 0.34660553272;

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
    msg.setTimeStamp(0.269240931611);
    msg.setSource(29671U);
    msg.setSourceEntity(45U);
    msg.setDestination(57713U);
    msg.setDestinationEntity(74U);
    msg.bias_psi = 0.182852643757;
    msg.bias_r = 0.278361601587;
    msg.cog = 0.589323311854;
    msg.cyaw = 0.183758476981;
    msg.lbl_rej_level = 0.682256472249;
    msg.gps_rej_level = 0.29914696224;
    msg.custom_x = 0.424940542851;
    msg.custom_y = 0.986173867517;
    msg.custom_z = 0.332443925783;

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
    msg.setTimeStamp(0.081147193682);
    msg.setSource(18530U);
    msg.setSourceEntity(2U);
    msg.setDestination(7641U);
    msg.setDestinationEntity(225U);
    msg.bias_psi = 0.872273579232;
    msg.bias_r = 0.512828101553;
    msg.cog = 0.0221989270793;
    msg.cyaw = 0.753192885153;
    msg.lbl_rej_level = 0.688185067698;
    msg.gps_rej_level = 0.936877435409;
    msg.custom_x = 0.446675392114;
    msg.custom_y = 0.409060252277;
    msg.custom_z = 0.861735679102;

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
    msg.setTimeStamp(0.776450250031);
    msg.setSource(6944U);
    msg.setSourceEntity(148U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(244U);
    msg.utc_time = 0.259490955479;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.899731835756);
    msg.setSource(59981U);
    msg.setSourceEntity(213U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(239U);
    msg.utc_time = 0.78268800858;
    msg.reason = 5U;

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
    msg.setTimeStamp(0.045399697492);
    msg.setSource(9501U);
    msg.setSourceEntity(208U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(148U);
    msg.utc_time = 0.609738246504;
    msg.reason = 78U;

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
    msg.setTimeStamp(0.919624221002);
    msg.setSource(28251U);
    msg.setSourceEntity(252U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(106U);
    msg.id = 41U;
    msg.range = 0.908455879337;
    msg.acceptance = 227U;

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
    msg.setTimeStamp(0.906912634897);
    msg.setSource(43682U);
    msg.setSourceEntity(184U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(181U);
    msg.id = 235U;
    msg.range = 0.203941013154;
    msg.acceptance = 9U;

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
    msg.setTimeStamp(0.839746258765);
    msg.setSource(34370U);
    msg.setSourceEntity(30U);
    msg.setDestination(49724U);
    msg.setDestinationEntity(228U);
    msg.id = 74U;
    msg.range = 0.53568598561;
    msg.acceptance = 95U;

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
    msg.setTimeStamp(0.910686627654);
    msg.setSource(1904U);
    msg.setSourceEntity(129U);
    msg.setDestination(13688U);
    msg.setDestinationEntity(189U);
    msg.type = 132U;
    msg.reason = 102U;
    msg.value = 0.113460225062;
    msg.timestep = 0.763594756018;

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
    msg.setTimeStamp(0.886227622686);
    msg.setSource(35901U);
    msg.setSourceEntity(22U);
    msg.setDestination(16657U);
    msg.setDestinationEntity(106U);
    msg.type = 127U;
    msg.reason = 46U;
    msg.value = 0.751988856704;
    msg.timestep = 0.145037428199;

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
    msg.setTimeStamp(0.818877982343);
    msg.setSource(36390U);
    msg.setSourceEntity(141U);
    msg.setDestination(8355U);
    msg.setDestinationEntity(159U);
    msg.type = 21U;
    msg.reason = 226U;
    msg.value = 0.417186147699;
    msg.timestep = 0.228706518865;

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
    msg.setTimeStamp(0.125557085944);
    msg.setSource(3661U);
    msg.setSourceEntity(213U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(0U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HKFJWZYQDTWTMLONLGSBZUSRCYF");
    tmp_msg_0.lat = 0.417702716146;
    tmp_msg_0.lon = 0.722267135125;
    tmp_msg_0.depth = 0.149270667918;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 51U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.296802608228;
    msg.y = 0.0207137518075;
    msg.var_x = 0.428149606256;
    msg.var_y = 0.0252764878525;
    msg.distance = 0.789490969245;

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
    msg.setTimeStamp(0.245011907645);
    msg.setSource(50277U);
    msg.setSourceEntity(238U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZWQAHDHCEXFNRIOLMKVLDOSENBDWLAUVSRHDYVRVNPAVUQGIFCDMHZJNIHWZTRKFWLPUKUOWJQRNOATVBTEYJNCLLIKACGJCBBTZQCIQGCZZBMWUSJZGKXPBTLTWKPVETRIPAHTLWYWAMQEIUBXHFVN");
    tmp_msg_0.lat = 0.660772410535;
    tmp_msg_0.lon = 0.789705517947;
    tmp_msg_0.depth = 0.355321607286;
    tmp_msg_0.query_channel = 246U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 105U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0991589998814;
    msg.y = 0.52989432821;
    msg.var_x = 0.393652068679;
    msg.var_y = 0.740352389624;
    msg.distance = 0.582176126809;

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
    msg.setTimeStamp(0.917320401751);
    msg.setSource(52906U);
    msg.setSourceEntity(150U);
    msg.setDestination(29864U);
    msg.setDestinationEntity(74U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZDBUUPVCZLOKPQFGIBLDJSTACPXZQPGMATRBKYFWYBSXAQ");
    tmp_msg_0.lat = 0.436347858363;
    tmp_msg_0.lon = 0.0517287157078;
    tmp_msg_0.depth = 0.347016361957;
    tmp_msg_0.query_channel = 96U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 147U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.527168610236;
    msg.y = 0.073264351062;
    msg.var_x = 0.690431162708;
    msg.var_y = 0.241139355375;
    msg.distance = 0.0611002273092;

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
    msg.setTimeStamp(0.626484094086);
    msg.setSource(59576U);
    msg.setSourceEntity(91U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(41U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.381934078267);
    msg.setSource(62760U);
    msg.setSourceEntity(39U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(160U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.457288836476);
    msg.setSource(49682U);
    msg.setSourceEntity(222U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(83U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.747347734658);
    msg.setSource(64616U);
    msg.setSourceEntity(27U);
    msg.setDestination(2455U);
    msg.setDestinationEntity(249U);
    msg.x = 0.283700266246;
    msg.y = 0.981881913815;
    msg.z = 0.580473977849;

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
    msg.setTimeStamp(0.385728881443);
    msg.setSource(53075U);
    msg.setSourceEntity(239U);
    msg.setDestination(23795U);
    msg.setDestinationEntity(51U);
    msg.x = 0.373100945193;
    msg.y = 0.0856964298646;
    msg.z = 0.609401685869;

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
    msg.setTimeStamp(0.97555247275);
    msg.setSource(16210U);
    msg.setSourceEntity(99U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(213U);
    msg.x = 0.236096750304;
    msg.y = 0.25459759482;
    msg.z = 0.616091623218;

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
    msg.setTimeStamp(0.690831236171);
    msg.setSource(1509U);
    msg.setSourceEntity(41U);
    msg.setDestination(22134U);
    msg.setDestinationEntity(86U);
    msg.va = 0.690577735804;
    msg.aoa = 0.649429808475;
    msg.ssa = 0.952113986116;

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
    msg.setTimeStamp(0.425290715);
    msg.setSource(37560U);
    msg.setSourceEntity(45U);
    msg.setDestination(53934U);
    msg.setDestinationEntity(199U);
    msg.va = 0.547764016942;
    msg.aoa = 0.730076695307;
    msg.ssa = 0.10295777175;

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
    msg.setTimeStamp(0.437326590205);
    msg.setSource(55176U);
    msg.setSourceEntity(16U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(162U);
    msg.va = 0.731831596967;
    msg.aoa = 0.783498536893;
    msg.ssa = 0.486340596844;

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
    msg.setTimeStamp(0.340700158132);
    msg.setSource(16707U);
    msg.setSourceEntity(185U);
    msg.setDestination(11979U);
    msg.setDestinationEntity(214U);
    msg.value = 0.275332598518;

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
    msg.setTimeStamp(0.62930108291);
    msg.setSource(38374U);
    msg.setSourceEntity(66U);
    msg.setDestination(65476U);
    msg.setDestinationEntity(136U);
    msg.value = 0.097853052015;

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
    msg.setTimeStamp(0.371378756491);
    msg.setSource(44436U);
    msg.setSourceEntity(82U);
    msg.setDestination(64370U);
    msg.setDestinationEntity(0U);
    msg.value = 0.812348872894;

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
    msg.setTimeStamp(0.9046382461);
    msg.setSource(36934U);
    msg.setSourceEntity(204U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(55U);
    msg.value = 0.212245787697;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.688633756844);
    msg.setSource(25050U);
    msg.setSourceEntity(144U);
    msg.setDestination(28173U);
    msg.setDestinationEntity(21U);
    msg.value = 0.200393414357;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.988884634913);
    msg.setSource(35101U);
    msg.setSourceEntity(140U);
    msg.setDestination(1854U);
    msg.setDestinationEntity(244U);
    msg.value = 0.569735932218;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.275521978538);
    msg.setSource(34307U);
    msg.setSourceEntity(8U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(118U);
    msg.value = 0.349562021123;
    msg.speed_units = 213U;

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
    msg.setTimeStamp(0.290706222898);
    msg.setSource(45724U);
    msg.setSourceEntity(111U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(148U);
    msg.value = 0.00543276988471;
    msg.speed_units = 204U;

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
    msg.setTimeStamp(0.35382253959);
    msg.setSource(21157U);
    msg.setSourceEntity(42U);
    msg.setDestination(1962U);
    msg.setDestinationEntity(149U);
    msg.value = 0.468444233038;
    msg.speed_units = 234U;

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
    msg.setTimeStamp(0.27222556058);
    msg.setSource(55201U);
    msg.setSourceEntity(135U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(218U);
    msg.value = 0.25849386475;

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
    msg.setTimeStamp(0.304704944456);
    msg.setSource(43737U);
    msg.setSourceEntity(5U);
    msg.setDestination(19737U);
    msg.setDestinationEntity(138U);
    msg.value = 0.247870290709;

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
    msg.setTimeStamp(0.985947519179);
    msg.setSource(19699U);
    msg.setSourceEntity(187U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(67U);
    msg.value = 0.194290203797;

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
    msg.setTimeStamp(0.88026874958);
    msg.setSource(56745U);
    msg.setSourceEntity(178U);
    msg.setDestination(13037U);
    msg.setDestinationEntity(8U);
    msg.value = 0.378141157841;

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
    msg.setTimeStamp(0.0185097952208);
    msg.setSource(42201U);
    msg.setSourceEntity(11U);
    msg.setDestination(32024U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0083535228816;

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
    msg.setTimeStamp(0.256064120485);
    msg.setSource(28976U);
    msg.setSourceEntity(23U);
    msg.setDestination(55312U);
    msg.setDestinationEntity(188U);
    msg.value = 0.559128747742;

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
    msg.setTimeStamp(0.877346662155);
    msg.setSource(17790U);
    msg.setSourceEntity(227U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(248U);
    msg.value = 0.254752694838;

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
    msg.setTimeStamp(0.621544961015);
    msg.setSource(61226U);
    msg.setSourceEntity(15U);
    msg.setDestination(11724U);
    msg.setDestinationEntity(207U);
    msg.value = 0.512925028926;

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
    msg.setTimeStamp(0.615208934343);
    msg.setSource(60802U);
    msg.setSourceEntity(60U);
    msg.setDestination(58759U);
    msg.setDestinationEntity(205U);
    msg.value = 0.195925466029;

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
    msg.setTimeStamp(0.330476945787);
    msg.setSource(15118U);
    msg.setSourceEntity(82U);
    msg.setDestination(50580U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 2819847411U;
    msg.start_lat = 0.398644963309;
    msg.start_lon = 0.915471273655;
    msg.start_z = 0.643736762943;
    msg.start_z_units = 201U;
    msg.end_lat = 0.27493015456;
    msg.end_lon = 0.0189615295328;
    msg.end_z = 0.873305963909;
    msg.end_z_units = 151U;
    msg.speed = 0.75394669199;
    msg.speed_units = 205U;
    msg.lradius = 0.762443309094;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.668202876187);
    msg.setSource(52179U);
    msg.setSourceEntity(107U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(111U);
    msg.path_ref = 3305311766U;
    msg.start_lat = 0.673528546385;
    msg.start_lon = 0.619806351734;
    msg.start_z = 0.283806431653;
    msg.start_z_units = 219U;
    msg.end_lat = 0.27068442683;
    msg.end_lon = 0.896361283576;
    msg.end_z = 0.428379658655;
    msg.end_z_units = 184U;
    msg.speed = 0.582138872967;
    msg.speed_units = 122U;
    msg.lradius = 0.820734504942;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.221758971794);
    msg.setSource(4923U);
    msg.setSourceEntity(249U);
    msg.setDestination(15049U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 2583112409U;
    msg.start_lat = 0.0129147980887;
    msg.start_lon = 0.72409142639;
    msg.start_z = 0.328640648154;
    msg.start_z_units = 50U;
    msg.end_lat = 0.273272476713;
    msg.end_lon = 0.554616983656;
    msg.end_z = 0.284527236508;
    msg.end_z_units = 205U;
    msg.speed = 0.371094773384;
    msg.speed_units = 230U;
    msg.lradius = 0.078953810496;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.188576552008);
    msg.setSource(48364U);
    msg.setSourceEntity(205U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(84U);
    msg.x = 0.237737245131;
    msg.y = 0.711088957815;
    msg.z = 0.793557233728;
    msg.k = 0.336455156576;
    msg.m = 0.812503152129;
    msg.n = 0.401053910368;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.336946353701);
    msg.setSource(1750U);
    msg.setSourceEntity(0U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(61U);
    msg.x = 0.527010616711;
    msg.y = 0.761124516086;
    msg.z = 0.117039562209;
    msg.k = 0.428257911286;
    msg.m = 0.11816229227;
    msg.n = 0.0578169253333;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.983557347283);
    msg.setSource(212U);
    msg.setSourceEntity(75U);
    msg.setDestination(3376U);
    msg.setDestinationEntity(166U);
    msg.x = 0.170026059722;
    msg.y = 0.374720050786;
    msg.z = 0.151737567834;
    msg.k = 0.96781713253;
    msg.m = 0.702787961995;
    msg.n = 0.595766013091;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.758056871772);
    msg.setSource(33782U);
    msg.setSourceEntity(170U);
    msg.setDestination(24190U);
    msg.setDestinationEntity(32U);
    msg.value = 0.440435781969;

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
    msg.setTimeStamp(0.464165690508);
    msg.setSource(2624U);
    msg.setSourceEntity(148U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(35U);
    msg.value = 0.880493630358;

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
    msg.setTimeStamp(0.0273573363038);
    msg.setSource(9911U);
    msg.setSourceEntity(237U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(210U);
    msg.value = 0.519272066343;

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
    msg.setTimeStamp(0.728000681021);
    msg.setSource(53934U);
    msg.setSourceEntity(112U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(252U);
    msg.u = 0.911838362751;
    msg.v = 0.3757809993;
    msg.w = 0.0220143892925;
    msg.p = 0.724915586639;
    msg.q = 0.234676261936;
    msg.r = 0.98660919964;
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
    msg.setTimeStamp(0.997108364929);
    msg.setSource(5228U);
    msg.setSourceEntity(10U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(190U);
    msg.u = 0.0690503599458;
    msg.v = 0.233046666183;
    msg.w = 0.188332845899;
    msg.p = 0.245816037991;
    msg.q = 0.392198545797;
    msg.r = 0.0473557808002;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.869069978184);
    msg.setSource(45062U);
    msg.setSourceEntity(31U);
    msg.setDestination(34153U);
    msg.setDestinationEntity(20U);
    msg.u = 0.238225659593;
    msg.v = 0.632082007123;
    msg.w = 0.621777202784;
    msg.p = 0.718068040835;
    msg.q = 0.254938441449;
    msg.r = 0.641766939775;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.148980716009);
    msg.setSource(44077U);
    msg.setSourceEntity(240U);
    msg.setDestination(35257U);
    msg.setDestinationEntity(12U);
    msg.path_ref = 801650303U;
    msg.start_lat = 0.83490839779;
    msg.start_lon = 0.845352079112;
    msg.start_z = 0.566261299999;
    msg.start_z_units = 180U;
    msg.end_lat = 0.139672203613;
    msg.end_lon = 0.5684905697;
    msg.end_z = 0.31243522529;
    msg.end_z_units = 216U;
    msg.lradius = 0.309025123509;
    msg.flags = 246U;
    msg.x = 0.990680750028;
    msg.y = 0.451064467594;
    msg.z = 0.0527161081983;
    msg.vx = 0.434646119088;
    msg.vy = 0.705010067589;
    msg.vz = 0.957566300996;
    msg.course_error = 0.127097540202;
    msg.eta = 56439U;

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
    msg.setTimeStamp(0.366729687632);
    msg.setSource(45610U);
    msg.setSourceEntity(220U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(157U);
    msg.path_ref = 1230683926U;
    msg.start_lat = 0.693895194549;
    msg.start_lon = 0.830960947642;
    msg.start_z = 0.0712817615425;
    msg.start_z_units = 17U;
    msg.end_lat = 0.0605238719162;
    msg.end_lon = 0.676793391521;
    msg.end_z = 0.977070448135;
    msg.end_z_units = 142U;
    msg.lradius = 0.46242341275;
    msg.flags = 202U;
    msg.x = 0.819418367884;
    msg.y = 0.297754600906;
    msg.z = 0.760442763603;
    msg.vx = 0.657804235102;
    msg.vy = 0.05266731742;
    msg.vz = 0.55835894652;
    msg.course_error = 0.668544840089;
    msg.eta = 6309U;

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
    msg.setTimeStamp(0.118677332346);
    msg.setSource(54376U);
    msg.setSourceEntity(80U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 1613065840U;
    msg.start_lat = 0.744563511081;
    msg.start_lon = 0.90552509119;
    msg.start_z = 0.0868589162119;
    msg.start_z_units = 149U;
    msg.end_lat = 0.909719226781;
    msg.end_lon = 0.781225526334;
    msg.end_z = 0.0855443016617;
    msg.end_z_units = 167U;
    msg.lradius = 0.456662424224;
    msg.flags = 223U;
    msg.x = 0.902147340926;
    msg.y = 0.681226600935;
    msg.z = 0.742142419592;
    msg.vx = 0.751317211898;
    msg.vy = 0.252498432756;
    msg.vz = 0.14716291908;
    msg.course_error = 0.147944204083;
    msg.eta = 19770U;

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
    msg.setTimeStamp(0.848234316723);
    msg.setSource(25860U);
    msg.setSourceEntity(98U);
    msg.setDestination(7756U);
    msg.setDestinationEntity(138U);
    msg.k = 0.12254891203;
    msg.m = 0.457558083617;
    msg.n = 0.161457265751;

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
    msg.setTimeStamp(0.390568737701);
    msg.setSource(59160U);
    msg.setSourceEntity(26U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(114U);
    msg.k = 0.854940580259;
    msg.m = 0.766895314916;
    msg.n = 0.667406956749;

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
    msg.setTimeStamp(0.24226372367);
    msg.setSource(62206U);
    msg.setSourceEntity(41U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(183U);
    msg.k = 0.627151221303;
    msg.m = 0.636756251915;
    msg.n = 0.114886558027;

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
    msg.setTimeStamp(0.671102388634);
    msg.setSource(25297U);
    msg.setSourceEntity(250U);
    msg.setDestination(1950U);
    msg.setDestinationEntity(173U);
    msg.p = 0.190545920318;
    msg.i = 0.174763523113;
    msg.d = 0.966758704139;
    msg.a = 0.431173172052;

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
    msg.setTimeStamp(0.772838310042);
    msg.setSource(11853U);
    msg.setSourceEntity(163U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(85U);
    msg.p = 0.76474744638;
    msg.i = 0.416415202785;
    msg.d = 0.058064709886;
    msg.a = 0.226894421069;

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
    msg.setTimeStamp(0.251934055732);
    msg.setSource(49818U);
    msg.setSourceEntity(52U);
    msg.setDestination(17603U);
    msg.setDestinationEntity(145U);
    msg.p = 0.163085612533;
    msg.i = 0.670082444633;
    msg.d = 0.710060347971;
    msg.a = 0.774162296095;

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
    msg.setTimeStamp(0.696702942614);
    msg.setSource(28750U);
    msg.setSourceEntity(61U);
    msg.setDestination(23973U);
    msg.setDestinationEntity(154U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.0661750797646);
    msg.setSource(33243U);
    msg.setSourceEntity(72U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(175U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.735234438673);
    msg.setSource(40966U);
    msg.setSourceEntity(94U);
    msg.setDestination(29010U);
    msg.setDestinationEntity(78U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.939812587901);
    msg.setSource(52925U);
    msg.setSourceEntity(202U);
    msg.setDestination(6876U);
    msg.setDestinationEntity(217U);
    msg.x = 0.83941248324;
    msg.y = 0.916396074402;
    msg.z = 0.410899865435;
    msg.vx = 0.613483139083;
    msg.vy = 0.19696511962;
    msg.vz = 0.530705292134;
    msg.ax = 0.0356716271271;
    msg.ay = 0.858696649772;
    msg.az = 0.850774272441;
    msg.flags = 33248U;

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
    msg.setTimeStamp(0.0484456051322);
    msg.setSource(59017U);
    msg.setSourceEntity(184U);
    msg.setDestination(13413U);
    msg.setDestinationEntity(111U);
    msg.x = 0.136420908728;
    msg.y = 0.0805816245433;
    msg.z = 0.190118900606;
    msg.vx = 0.314221521931;
    msg.vy = 0.305528721583;
    msg.vz = 0.227783159578;
    msg.ax = 0.716424050548;
    msg.ay = 0.212848324494;
    msg.az = 0.08561329114;
    msg.flags = 30340U;

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
    msg.setTimeStamp(0.204655731713);
    msg.setSource(57575U);
    msg.setSourceEntity(242U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(102U);
    msg.x = 0.25955636778;
    msg.y = 0.381271883085;
    msg.z = 0.021799001101;
    msg.vx = 0.615318420527;
    msg.vy = 0.944039362316;
    msg.vz = 0.682068415028;
    msg.ax = 0.825269138649;
    msg.ay = 0.490667160292;
    msg.az = 0.195281559222;
    msg.flags = 45249U;

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
    msg.setTimeStamp(0.896822271198);
    msg.setSource(10537U);
    msg.setSourceEntity(74U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(140U);
    msg.value = 0.520942645525;

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
    msg.setTimeStamp(0.793217236498);
    msg.setSource(32827U);
    msg.setSourceEntity(33U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(246U);
    msg.value = 0.552719957928;

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
    msg.setTimeStamp(0.0556308074673);
    msg.setSource(16124U);
    msg.setSourceEntity(248U);
    msg.setDestination(141U);
    msg.setDestinationEntity(100U);
    msg.value = 0.211891784016;

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
    msg.setTimeStamp(0.180041150574);
    msg.setSource(37279U);
    msg.setSourceEntity(169U);
    msg.setDestination(9937U);
    msg.setDestinationEntity(34U);
    msg.timeout = 15000U;
    msg.lat = 0.0283576052213;
    msg.lon = 0.668148908656;
    msg.z = 0.604488042958;
    msg.z_units = 62U;
    msg.speed = 0.427836515055;
    msg.speed_units = 141U;
    msg.roll = 0.496821710015;
    msg.pitch = 0.199465557149;
    msg.yaw = 0.100785975097;
    msg.custom.assign("MWSBRZSOMKGDHMCFAZUJUFZNLONNUTAVGFYNVQANWXIUVRRZXDXKVZMBIOBPNTGRHLYKRAGSKZHKUPEYGENAFLXTXLMUXDXJVQCQXUFYGFFGLCESAZMEOHCIHQOVP");

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
    msg.setTimeStamp(0.0944251432705);
    msg.setSource(28487U);
    msg.setSourceEntity(236U);
    msg.setDestination(50831U);
    msg.setDestinationEntity(162U);
    msg.timeout = 20195U;
    msg.lat = 0.305405661116;
    msg.lon = 0.790306940207;
    msg.z = 0.731552703592;
    msg.z_units = 62U;
    msg.speed = 0.707243807212;
    msg.speed_units = 247U;
    msg.roll = 0.10726822902;
    msg.pitch = 0.334183971983;
    msg.yaw = 0.923785326716;
    msg.custom.assign("BKUEAIIWXBZXSEZFRQYMQQJKTILCVIYYABOQYCZUHRGRRCHDFTVMPTHMLWUOSFUNSKCLXERCYDUEHNJDRBERIUYQOTTFZGKGSSKLPASFNXTBLAMHVVZPPLLGINQOTCPVVRARADFDQLIJLZNEWPOYUMGMHWCXTIBSZGXJQFZBEKVHV");

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
    msg.setTimeStamp(0.271282599653);
    msg.setSource(52440U);
    msg.setSourceEntity(176U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(30U);
    msg.timeout = 63775U;
    msg.lat = 0.458911913163;
    msg.lon = 0.448341020466;
    msg.z = 0.266576282596;
    msg.z_units = 58U;
    msg.speed = 0.877847971591;
    msg.speed_units = 88U;
    msg.roll = 0.586291024389;
    msg.pitch = 0.789417043326;
    msg.yaw = 0.773963133187;
    msg.custom.assign("CWGVAMLXNHQHGJJBIPWIAMKQUNJJDNBRFSBTGRDMMILWISHTIXXFAWKDCVUQZSFJYLTEXKPHFLWNNEZKJBAOPGMGNPCFWQFAKONZGVETEAMEYIQTLOXOZCCZEUFSYSUUVEQCETMSWPDYNIXFGLAWSXRGUAMIKBKVRZHYBCXVZFOBQGJBVT");

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
    msg.setTimeStamp(0.365082284585);
    msg.setSource(39170U);
    msg.setSourceEntity(215U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(55U);
    msg.timeout = 43971U;
    msg.lat = 0.89040557444;
    msg.lon = 0.574540800904;
    msg.z = 0.78445381567;
    msg.z_units = 50U;
    msg.speed = 0.928223119219;
    msg.speed_units = 159U;
    msg.duration = 39007U;
    msg.radius = 0.980259744673;
    msg.flags = 20U;
    msg.custom.assign("LBAGIUMHCQKWREVWRSSSVILUMBDYXNZOUZQYZTMYJVCGETDBTEDCUDTSDEBPBAYUYUBXWZNRKMBARBZOMQANISUFBPJFJGLRAWEVNZZ");

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
    msg.setTimeStamp(0.269938426316);
    msg.setSource(894U);
    msg.setSourceEntity(127U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(93U);
    msg.timeout = 57420U;
    msg.lat = 0.0160802512839;
    msg.lon = 0.535138531736;
    msg.z = 0.112922236233;
    msg.z_units = 228U;
    msg.speed = 0.617626404971;
    msg.speed_units = 93U;
    msg.duration = 20230U;
    msg.radius = 0.657303817283;
    msg.flags = 4U;
    msg.custom.assign("TWKPTDZICFPQQJIFHKPLJZBBNTEWRAMCUGPSNAEEMGLZXERAGFUMQCDOEURNHHSDAXTDFIMRRQLCYYHEVDVRPIMLZXEYFOBNRVQLNHOXWVAGOMMFFJOUPNVMVYXSWSBHUOGYXYGPGCVKWDKAHNBEFJQVKJPCWCDRYANSTIOSUDVOJHYSKIZNKACAEIZ");

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
    msg.setTimeStamp(0.214672322453);
    msg.setSource(48441U);
    msg.setSourceEntity(167U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(139U);
    msg.timeout = 9624U;
    msg.lat = 0.919918122064;
    msg.lon = 0.705710803681;
    msg.z = 0.357497169978;
    msg.z_units = 29U;
    msg.speed = 0.866447864456;
    msg.speed_units = 41U;
    msg.duration = 27776U;
    msg.radius = 0.492644396893;
    msg.flags = 81U;
    msg.custom.assign("WHKZNNEPWUZDCMLZDKQPQCLXTPFNSYNCKPQJPFHBNFPBRUXHGDLSXLDESTAFJNRVVORJYEQGIHTPIVXBINUBWAMYWKDQRHLXRXIMOFBOMTDVOEVHJNOAWTBYEACBKHWZBBFIM");

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
    msg.setTimeStamp(0.471002170838);
    msg.setSource(23946U);
    msg.setSourceEntity(6U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(171U);
    msg.custom.assign("JVPBDSKPOUPXANQUWTZRFSCNSUYOWQUYWAHHNNXHKACKCISVDKRELVFPTYEDKMCNHUBRZIWNGLASEYYJLJLGFJNUOSFRLHDCOECZOOTUBFIAMRHATVILWXLNGOWJFTFYWXQMIEZAHGPYZWXJOIKDMIMZTJLEGAMUB");

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
    msg.setTimeStamp(0.458153748102);
    msg.setSource(39662U);
    msg.setSourceEntity(24U);
    msg.setDestination(15611U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("TOLIUNJDCPQWRLATRLZKYBYOAVDFKDCTOH");

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
    msg.setTimeStamp(0.37744486525);
    msg.setSource(55620U);
    msg.setSourceEntity(201U);
    msg.setDestination(47958U);
    msg.setDestinationEntity(148U);
    msg.custom.assign("KTWFGWLBKBQNNQBPEIOZMDLUVUBCZSZMHKUUQWSOZWZSIRVHTBJAHIEIOJGAMFUCRNNCKDNUI");

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
    msg.setTimeStamp(0.0789677974163);
    msg.setSource(12156U);
    msg.setSourceEntity(67U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(146U);
    msg.timeout = 120U;
    msg.lat = 0.245664214912;
    msg.lon = 0.309702126185;
    msg.z = 0.0356216570565;
    msg.z_units = 136U;
    msg.duration = 63087U;
    msg.speed = 0.71899528019;
    msg.speed_units = 98U;
    msg.type = 137U;
    msg.radius = 0.646141415923;
    msg.length = 0.232143363987;
    msg.bearing = 0.310622848081;
    msg.direction = 152U;
    msg.custom.assign("QSCXZFCSMTFVBGIZONNRYQQDIEWDTSCMXHPTYVHEVXXMFOBJEVNDPGLXOBUGKVQIQRICLWDOLMUPLB");

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
    msg.setTimeStamp(0.0556553455464);
    msg.setSource(54423U);
    msg.setSourceEntity(124U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(54U);
    msg.timeout = 40218U;
    msg.lat = 0.880303876019;
    msg.lon = 0.349401996026;
    msg.z = 0.269159804051;
    msg.z_units = 230U;
    msg.duration = 17515U;
    msg.speed = 0.738394049903;
    msg.speed_units = 197U;
    msg.type = 26U;
    msg.radius = 0.513309419684;
    msg.length = 0.0837900796326;
    msg.bearing = 0.172748361318;
    msg.direction = 40U;
    msg.custom.assign("AAGZHEJFTACXMAIOFSZWYRXLPTZHVKXYPXWGDATTYRLCSJMQOVRYSBYJRDQVMFLQOFGNQHATGANHKYTNDNZCUJKLTDXLZHBJKOICSTSORYPBNGUPFXMGAVVPXICIEFOSBVGBUUSMIWDNOEYCAWYEMZHUWSTWMRUTRLRQUECWJKIDFHVNIFQNSHPPQHKWJFLZIGXWGJYOJKQUQEMBLFBEMUUZBNVEQDILIRCEOCJGBEVBPPMODKRSXZACPZV");

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
    msg.setTimeStamp(0.951269123743);
    msg.setSource(5786U);
    msg.setSourceEntity(181U);
    msg.setDestination(12154U);
    msg.setDestinationEntity(88U);
    msg.timeout = 27572U;
    msg.lat = 0.595166217749;
    msg.lon = 0.0962334183703;
    msg.z = 0.581835780831;
    msg.z_units = 152U;
    msg.duration = 52105U;
    msg.speed = 0.742931191502;
    msg.speed_units = 214U;
    msg.type = 219U;
    msg.radius = 0.190797707836;
    msg.length = 0.961008499889;
    msg.bearing = 0.876236216122;
    msg.direction = 134U;
    msg.custom.assign("KZBYFJZVNWMBPNHLTKAUSJVIUYEHWRAXXPFHOQZKOGAMKLCMVZXAXXONECS");

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
    msg.setTimeStamp(0.730901069741);
    msg.setSource(11065U);
    msg.setSourceEntity(175U);
    msg.setDestination(40096U);
    msg.setDestinationEntity(230U);
    msg.duration = 26010U;
    msg.custom.assign("GVWKKYSGQZNGEGIBIOHXDXDQLVTCNYKAQVPUDVVMNBKHMPTZPOWY");

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
    msg.setTimeStamp(0.687810049321);
    msg.setSource(38855U);
    msg.setSourceEntity(45U);
    msg.setDestination(327U);
    msg.setDestinationEntity(60U);
    msg.duration = 2883U;
    msg.custom.assign("BGRKUFLYDCXVDIX");

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
    msg.setTimeStamp(0.464215345187);
    msg.setSource(59109U);
    msg.setSourceEntity(240U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(128U);
    msg.duration = 62165U;
    msg.custom.assign("HTELIKNPFWVIVXXTHBJJCPYMNVUAFFCNPSKDNTCSLCEYOPAVTCUYMOZ");

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
    msg.setTimeStamp(0.315485819933);
    msg.setSource(26579U);
    msg.setSourceEntity(215U);
    msg.setDestination(64769U);
    msg.setDestinationEntity(107U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.365991452476;
    msg.control.set(tmp_msg_0);
    msg.duration = 27198U;
    msg.custom.assign("MWAFMRIBVRFZDLQHWTUCBLEPQCPCJXMZPFXQJTGZEVDQADGPBNE");

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
    msg.setTimeStamp(0.00965288202736);
    msg.setSource(7157U);
    msg.setSourceEntity(156U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(236U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.846906133628;
    msg.control.set(tmp_msg_0);
    msg.duration = 9432U;
    msg.custom.assign("RILJKRQPQMPWLFDXRCNQQCWKBUMUNDDPYVCBDKOXDTPQDIGFFSTWO");

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
    msg.setTimeStamp(0.856293432641);
    msg.setSource(11021U);
    msg.setSourceEntity(12U);
    msg.setDestination(4355U);
    msg.setDestinationEntity(244U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0424588410738;
    msg.control.set(tmp_msg_0);
    msg.duration = 54018U;
    msg.custom.assign("NXIFZXQTAONWPWKYYVUCJXEABNIZJQPYSWKOWBFRPKNPIGXKLRIUURYIJJINBODAMIZYGYOJICXPHSTOTHQSLUALLGASJDFYYSUDQPWQVWDXREGUVFBHVUHTZNFTOHTJPVEPEMHMUOGDBHCLLVUBSAIFWKMCMKZBGEEZZDZNMF");

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
    msg.setTimeStamp(0.515446427991);
    msg.setSource(5500U);
    msg.setSourceEntity(33U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(81U);
    msg.timeout = 57356U;
    msg.lat = 0.550191648404;
    msg.lon = 0.0745205579732;
    msg.z = 0.0305896931175;
    msg.z_units = 216U;
    msg.speed = 0.0451718192281;
    msg.speed_units = 41U;
    msg.bearing = 0.244478016066;
    msg.cross_angle = 0.467447905925;
    msg.width = 0.00166076362031;
    msg.length = 0.541220668984;
    msg.hstep = 0.751559860798;
    msg.coff = 71U;
    msg.alternation = 71U;
    msg.flags = 164U;
    msg.custom.assign("SKALHCSZQNBILFVTMYYPHJTAEDQIMKYRPQTGZCNENRRXZLOFISFCCRDRDUWUSTQWWXQEBOVOVAPLDVGCCGGSUOUPJZQFROXLMFLVMQVIDKGAJWSXZIZPZAGCMTEDHZLDIGRTKJHNRBAPPVCGJRZSXFHCYGXBHHPQWONNDXRDUALAKFV");

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
    msg.setTimeStamp(0.0952439671694);
    msg.setSource(58186U);
    msg.setSourceEntity(198U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(77U);
    msg.timeout = 10551U;
    msg.lat = 0.478412231449;
    msg.lon = 0.303227883054;
    msg.z = 0.456861805615;
    msg.z_units = 37U;
    msg.speed = 0.385987054521;
    msg.speed_units = 71U;
    msg.bearing = 0.205565188885;
    msg.cross_angle = 0.516320190712;
    msg.width = 0.465371102443;
    msg.length = 0.250378650396;
    msg.hstep = 0.357352499261;
    msg.coff = 89U;
    msg.alternation = 72U;
    msg.flags = 75U;
    msg.custom.assign("GHUWETDYJGGGFQEQUFXWLYWNSGSICAMTTHOVDFHQSCHSXJITDZTMECXMBNWKJMOOCWCQSBJRRKIUSWURFLORIRLLWEUBASYEXBPJCRFXSMJPDVYMBABOVZZKGLKNVOMNTYVTEULYMANAVKOYJVVIKIRRXGYQASOQHITGLZDHZEUPIIFXDZBCWDEUQPLPXDKBFTKPFYHZAOWLLFAWCECJNBZPXNC");

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
    msg.setTimeStamp(0.233941377306);
    msg.setSource(29632U);
    msg.setSourceEntity(193U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(31U);
    msg.timeout = 21444U;
    msg.lat = 0.0230631954197;
    msg.lon = 0.359370649711;
    msg.z = 0.674855028154;
    msg.z_units = 54U;
    msg.speed = 0.956412281052;
    msg.speed_units = 165U;
    msg.bearing = 0.912673071547;
    msg.cross_angle = 0.537588215634;
    msg.width = 0.936729566734;
    msg.length = 0.619784372552;
    msg.hstep = 0.260484881083;
    msg.coff = 58U;
    msg.alternation = 44U;
    msg.flags = 238U;
    msg.custom.assign("TXUZJCQFEMDOPBWCPRCEWHUEJFJDVETEHSPWPCULKJYGDYBTRHHSNHOBKZVN");

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
    msg.setTimeStamp(0.663982852528);
    msg.setSource(31086U);
    msg.setSourceEntity(237U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(134U);
    msg.timeout = 4680U;
    msg.lat = 0.495584162327;
    msg.lon = 0.364224822946;
    msg.z = 0.0224499012806;
    msg.z_units = 44U;
    msg.speed = 0.277006683318;
    msg.speed_units = 171U;
    msg.custom.assign("IIAEWJNHTDIOKEWFOGOYJNFCNVFXKIURMRGGBGCTUXYGFHMNNNQKLHPYEQINUQXGMVZOMYIUSUVKRCNTFDAADEHPWOZBTTMPSTLSBWWXIUACJP");

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
    msg.setTimeStamp(0.934797620086);
    msg.setSource(25101U);
    msg.setSourceEntity(143U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(115U);
    msg.timeout = 50125U;
    msg.lat = 0.901602493356;
    msg.lon = 0.492040921363;
    msg.z = 0.665348997891;
    msg.z_units = 79U;
    msg.speed = 0.65303296967;
    msg.speed_units = 181U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.670911051761;
    tmp_msg_0.y = 0.423164791049;
    tmp_msg_0.z = 0.400760106726;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BNTXBWFIXYULVCFIBUHGSMFMCEIKQAVPQGPZHGRGJJYBZFPBRESEPBYWWZPYGLFOSWPXMITWFQZDWJAKPLJHCKJVKHMRMHEUNACADLQNTTNWOSOGYQANJGONKXTFNNAKIHDITCOVFDJEXLKVCZJURLZPKASIEBRDSIABBWSCDXLRQRKLSMVYRQUTHMHQUMZPMDCFVLKHLSFXJODUUIXYPEUTZBXJH");

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
    msg.setTimeStamp(0.271732506457);
    msg.setSource(30669U);
    msg.setSourceEntity(99U);
    msg.setDestination(13246U);
    msg.setDestinationEntity(247U);
    msg.timeout = 41631U;
    msg.lat = 0.487629941093;
    msg.lon = 0.730237221873;
    msg.z = 0.915787174507;
    msg.z_units = 124U;
    msg.speed = 0.413272223172;
    msg.speed_units = 86U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.71898408843;
    tmp_msg_0.y = 0.0305931575727;
    tmp_msg_0.z = 0.45458800659;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NPMOZTTJDWZAYDDFZCVTYAQSNLFOFOMCESDSXGYKNSRDWHBROAAEHQDDWOTPLWNJRUIRVDYEFQFDKMRKIMHRKFILWYMHQGPJGHUKTVINGWTGMCXXUAWBVLTWLQQTTBLIGUZFCCBJJCZBIREAHNUSKWNZJNFUOVQEVJFBKUUPSKNXIVXVAYIHYRBOYSMJEAEYSACCZ");

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
    msg.setTimeStamp(0.529724930641);
    msg.setSource(7375U);
    msg.setSourceEntity(250U);
    msg.setDestination(855U);
    msg.setDestinationEntity(150U);
    msg.x = 0.0905463390226;
    msg.y = 0.35207687243;
    msg.z = 0.210133359592;

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
    msg.setTimeStamp(0.870111236389);
    msg.setSource(48941U);
    msg.setSourceEntity(34U);
    msg.setDestination(49123U);
    msg.setDestinationEntity(94U);
    msg.x = 0.331138255028;
    msg.y = 0.624960340516;
    msg.z = 0.108042967193;

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
    msg.setTimeStamp(0.324018206343);
    msg.setSource(41596U);
    msg.setSourceEntity(134U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(110U);
    msg.x = 0.696443980231;
    msg.y = 0.370631194188;
    msg.z = 0.104915869839;

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
    msg.setTimeStamp(0.329161719582);
    msg.setSource(19775U);
    msg.setSourceEntity(158U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(241U);
    msg.timeout = 64412U;
    msg.lat = 0.192612655465;
    msg.lon = 0.37810175354;
    msg.z = 0.339974951974;
    msg.z_units = 65U;
    msg.amplitude = 0.814897631726;
    msg.pitch = 0.978976683004;
    msg.speed = 0.221045531209;
    msg.speed_units = 72U;
    msg.custom.assign("YVHMZQTJTYZSZNGTKINKCOPZHVZGWPSDLMGLXCORGIGFSAPFTBJJRIZFARCRMPLZQHYUUJCFUCLSNWAJKSYNADKQEJMGNISKVOZTKAQCXKWVGOUPAVMHCRHVHOLOLYFZLNDQOBUEWUGTPEIWPPVEXEDHJDNKCBXDBSEBUJATTBBVQOBGNTPFESYOLIBRYQYQVJEGXWMXDMXICWFFWHL");

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
    msg.setTimeStamp(0.0500944772459);
    msg.setSource(46070U);
    msg.setSourceEntity(250U);
    msg.setDestination(64495U);
    msg.setDestinationEntity(253U);
    msg.timeout = 57245U;
    msg.lat = 0.982217271609;
    msg.lon = 0.734993296918;
    msg.z = 0.911081865278;
    msg.z_units = 79U;
    msg.amplitude = 0.152650404721;
    msg.pitch = 0.390601474693;
    msg.speed = 0.234760164149;
    msg.speed_units = 91U;
    msg.custom.assign("MSKDWZXWAOROTZVTIYJIUWEXMZSFDCQYLQKZYGMNJKPHZBFQKGUUIPKDBYPHXRTLBVRCDLOIVDNWMEARNGEJSAHAHJCTNRTWBGIYXAYTXBHOEGGNJORDYOMBFJWPDFMVPIGARHLDGSLCGUNMPBVTWWKUIUJLFPOCCZOIWAGRFLBIXLSUCVXRACUEDPZCHYFKQNJHQSQJCHXO");

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
    msg.setTimeStamp(0.857100231429);
    msg.setSource(16724U);
    msg.setSourceEntity(206U);
    msg.setDestination(51514U);
    msg.setDestinationEntity(32U);
    msg.timeout = 5027U;
    msg.lat = 0.896258514948;
    msg.lon = 0.308191623462;
    msg.z = 0.514503995662;
    msg.z_units = 171U;
    msg.amplitude = 0.598570148056;
    msg.pitch = 0.6965722174;
    msg.speed = 0.255116353969;
    msg.speed_units = 238U;
    msg.custom.assign("EGYCAUXXIP");

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
    msg.setTimeStamp(0.285830450511);
    msg.setSource(56223U);
    msg.setSourceEntity(72U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.950109306325);
    msg.setSource(10388U);
    msg.setSourceEntity(163U);
    msg.setDestination(49856U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.524295238498);
    msg.setSource(64286U);
    msg.setSourceEntity(51U);
    msg.setDestination(26795U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.305961890083);
    msg.setSource(19322U);
    msg.setSourceEntity(86U);
    msg.setDestination(46380U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.10518740348;
    msg.lon = 0.611612932473;
    msg.z = 0.334685583935;
    msg.z_units = 120U;
    msg.radius = 0.182633399704;
    msg.duration = 31539U;
    msg.speed = 0.484765701398;
    msg.speed_units = 88U;
    msg.custom.assign("BQFZEUVODRUNZGSPRYXRVDGIQOHXQURAWMCYSDBSQAIISHRJWGHISTEUHHBFQLDJQZLLTJPOEXKVIYAEXRTCMIXZNQWJLTAQAPOLJGZWKLUYCTGEIUKKBXCVSUWYLPCDDBNBCIQFAGVBVRDNCLOEJHMPHFESXCZTBKDRXCGVUGY");

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
    msg.setTimeStamp(0.597641385085);
    msg.setSource(54103U);
    msg.setSourceEntity(175U);
    msg.setDestination(38989U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.492996220451;
    msg.lon = 0.909520574767;
    msg.z = 0.230140051986;
    msg.z_units = 101U;
    msg.radius = 0.178700608964;
    msg.duration = 63724U;
    msg.speed = 0.0815271336207;
    msg.speed_units = 251U;
    msg.custom.assign("MJHEZLXWETYORMDXMVYKBXTGUPUTUWZFJOIGZRXQNVRHMIBSSZYHIGYWYHQONJPADCCYFGAOLUXOBTHCCZKHQQCOCWIARTRVHQUSIDRDFGPWTSGOJBLZBAYBABDVMSCYNBHDEPKSBUWEAXTZQLIQJRUKU");

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
    msg.setTimeStamp(0.975496123336);
    msg.setSource(13682U);
    msg.setSourceEntity(57U);
    msg.setDestination(61412U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.096604044493;
    msg.lon = 0.491750594623;
    msg.z = 0.266232280461;
    msg.z_units = 75U;
    msg.radius = 0.294544366826;
    msg.duration = 47661U;
    msg.speed = 0.609431019495;
    msg.speed_units = 239U;
    msg.custom.assign("XHLDJMWKSZSNSNMKRRATUQBVPZCHSZKFXFFNGAMWMCRYPBYJZUQSGWOEIFGGKBKHAGHTVYOUXPHGAVJLRCWSDIZKTEQAIETVCXOUIGVUILJUVCONUYXJRSEIHYNCCFMCLQIJCBGRRTOPFJQZDLOBQHJOUWIKWSAMTFY");

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
    msg.setTimeStamp(0.52363061786);
    msg.setSource(61495U);
    msg.setSourceEntity(202U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(138U);
    msg.timeout = 27010U;
    msg.flags = 232U;
    msg.lat = 0.467197496845;
    msg.lon = 0.292532881685;
    msg.start_z = 0.285716276742;
    msg.start_z_units = 38U;
    msg.end_z = 0.565824234817;
    msg.end_z_units = 5U;
    msg.radius = 0.117360235076;
    msg.speed = 0.774589766849;
    msg.speed_units = 141U;
    msg.custom.assign("FNAJHGLIFUJOOZIUKRNDRHTQJWUSNXFKKOBJ");

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
    msg.setTimeStamp(0.229496720539);
    msg.setSource(59551U);
    msg.setSourceEntity(112U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(163U);
    msg.timeout = 49960U;
    msg.flags = 49U;
    msg.lat = 0.0428557370203;
    msg.lon = 0.942680861657;
    msg.start_z = 0.196637030045;
    msg.start_z_units = 178U;
    msg.end_z = 0.687608644685;
    msg.end_z_units = 2U;
    msg.radius = 0.920645233276;
    msg.speed = 0.372737469142;
    msg.speed_units = 13U;
    msg.custom.assign("YZEISQOPEGWRMXEMTXMEJGMMVIYLWNFDIPOTRIZTDPXZKNCPFOJLRSMULFNNVYWIARQUKHXRJDLZQCUZSBHXJGXRDSNAZRHHSVTGBASHSJLVYXCBPUBDQWYAWSWGEKNYTTCFJIKMPCDOLIEFYKJPHVZXLHUYBMQGZPEVBBAGWLCAUPKQMWKC");

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
    msg.setTimeStamp(0.665253527177);
    msg.setSource(35246U);
    msg.setSourceEntity(77U);
    msg.setDestination(8508U);
    msg.setDestinationEntity(243U);
    msg.timeout = 24962U;
    msg.flags = 197U;
    msg.lat = 0.675912820548;
    msg.lon = 0.842230517954;
    msg.start_z = 0.332941740722;
    msg.start_z_units = 79U;
    msg.end_z = 0.575746627563;
    msg.end_z_units = 71U;
    msg.radius = 0.174011020101;
    msg.speed = 0.0931893905683;
    msg.speed_units = 121U;
    msg.custom.assign("FWBVEBCFGJFOJJRPBNNLPFUQAOGOLKPUZOFCRBAKCRHYYYEKMFZUQKZALMINCSLFKHVNWTTPVEIFXDUCTQAWNJULMSDWQWMPGOKQUGIOCVBMREHUEDJNCHXPZULAKPSDQSXTGMJJWLTEZQVHNUVAFGC");

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
    msg.setTimeStamp(0.722730546446);
    msg.setSource(17280U);
    msg.setSourceEntity(174U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(34U);
    msg.timeout = 34254U;
    msg.lat = 0.470705601692;
    msg.lon = 0.627287813554;
    msg.z = 0.430418749484;
    msg.z_units = 235U;
    msg.speed = 0.382813835546;
    msg.speed_units = 26U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.894203397202;
    tmp_msg_0.y = 0.539476805095;
    tmp_msg_0.z = 0.923888382025;
    tmp_msg_0.t = 0.383678730758;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PDNDHIPXPIBLAOMTZUIKIDSZAAYQFIXUJWBDVEUNQQACBHRJFMOPYVQYMGWXJFRQCSFCHGUQWTHNKFYZSDXWKMPSVJDAKLRNGYBKJWZTOSTHHEBROGJLVAWURPIVXYMKZCMCOVYEXEUPEWWXUDGCQZORKKIZSADEJXTSEJOPICNSNMXBFNBFOQIMLNTXGBLQLRU");

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
    msg.setTimeStamp(0.558766094075);
    msg.setSource(27111U);
    msg.setSourceEntity(146U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(98U);
    msg.timeout = 10554U;
    msg.lat = 0.398993960108;
    msg.lon = 0.591718744205;
    msg.z = 0.583723172059;
    msg.z_units = 112U;
    msg.speed = 0.00494329187283;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.272598894389;
    tmp_msg_0.y = 0.988165243594;
    tmp_msg_0.z = 0.246555844313;
    tmp_msg_0.t = 0.626434533737;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CJJXTZZPMJBGSOHGXTPYIBXAXOQQBACBTVNKFFZOSTRZULZOYLDFHDNCSEMTQKQHCRAZINIVGAFKVWBECKQGBMTJPMSERGEUKCDJYNLGJDYMXYLXJBGUZFPFEWTLWLBIPIWLDCYVPEHAFWNZQKVMNNRJCATPSEUAK");

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
    msg.setTimeStamp(0.396840077374);
    msg.setSource(45615U);
    msg.setSourceEntity(186U);
    msg.setDestination(64957U);
    msg.setDestinationEntity(156U);
    msg.timeout = 11212U;
    msg.lat = 0.952838931608;
    msg.lon = 0.164327304427;
    msg.z = 0.726637332608;
    msg.z_units = 48U;
    msg.speed = 0.850384678033;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.113845910586;
    tmp_msg_0.y = 0.578616702562;
    tmp_msg_0.z = 0.289810164038;
    tmp_msg_0.t = 0.654043561648;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LVBHMCRPDFZIUOFNLGAVKCNQCSTKJQBKRIOAFIIQYEDVDUGPLKCVFENCQJPBGIQRLHYJYMTYRWBVQCHSHMNUKRWEQYYHYOALFQXLNKAZGWPCSZTSDMZAWHIUOSJKPOKWABXWPRVYNYZIXKMVINFPEGUTGBDERSNJOJLTVOJAXBWHHMFZDWGPVEIEGAOXPUGUNSZMADRXUPRU");

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
    msg.setTimeStamp(0.359010061067);
    msg.setSource(19997U);
    msg.setSourceEntity(196U);
    msg.setDestination(41192U);
    msg.setDestinationEntity(112U);
    msg.x = 0.259549136336;
    msg.y = 0.605363513184;
    msg.z = 0.582269707583;
    msg.t = 0.597822265135;

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
    msg.setTimeStamp(0.91166639153);
    msg.setSource(23467U);
    msg.setSourceEntity(54U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(52U);
    msg.x = 0.685263457277;
    msg.y = 0.162086266401;
    msg.z = 0.941944183047;
    msg.t = 0.640084223077;

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
    msg.setTimeStamp(0.272180101901);
    msg.setSource(1481U);
    msg.setSourceEntity(209U);
    msg.setDestination(22872U);
    msg.setDestinationEntity(145U);
    msg.x = 0.934486718266;
    msg.y = 0.0684242714493;
    msg.z = 0.0451851176208;
    msg.t = 0.261838343185;

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
    msg.setTimeStamp(0.372359794044);
    msg.setSource(53683U);
    msg.setSourceEntity(217U);
    msg.setDestination(62220U);
    msg.setDestinationEntity(157U);
    msg.timeout = 40367U;
    msg.name.assign("LDWLURVDAUBAPQHCJDPZWBAPOLHSWVXBYBESTCTFCNNFLKEDTEHWKQRZFIHWKKIGXWTLANFIGYZCJMEEKILPPTEFMVBFQTDNHDPTJHJJVWVUQIMSUIMKDYUEHGTRGZGAAIZWVNSBJGKDRYPOUAXNXSUFRIIETACYQJZNRJCPBCOGBACFQOYXUUWFQHNZHRMXEKLTDWYAGMZOHLJVVLQMBJRDYSUPVGOQCXSSNIOFEXXOPQ");
    msg.custom.assign("OLCKZZDTEDDFAZSARQNSMLCNFUXWUDPKNCMFGVERKRTWSPRIXJLXAZXPBHHUITZNXJFTUHQVSWFETVVFSXGVGJPYOIGWCQLXWYWURGOQDHJTUAQLRCJEQMNDNIMPKPWENYJ");

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
    msg.setTimeStamp(0.408000698407);
    msg.setSource(39624U);
    msg.setSourceEntity(152U);
    msg.setDestination(56552U);
    msg.setDestinationEntity(37U);
    msg.timeout = 31412U;
    msg.name.assign("KGTIVQNCVYIMIQZLVTOEPZDANKUFFHOCXAUOHDHJPHOBPYTGLDAPJSYBQXTWVGIDOUODRKVTEPBLLLQYDNRLFTOLMMTZCMIUKWRRWZXYCMAVSJZUJQZEIWMSUWYKPBRKXGHEIAPIJVQBHABLNDXSDJGBDSBMPNXVRATWUQHTMJJXCOHXHYPXAGIZONKYFEYZFNVQNRNSFWGKMFWWGKBEKGFBGWJEVFEFPQRTCXICNRMAZS");
    msg.custom.assign("TVHURJWATZFDZVSXHWWXLYPTMBFDLWCTCVJMEIKJSOEMDXPJHYARXQ");

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
    msg.setTimeStamp(0.674636199679);
    msg.setSource(64048U);
    msg.setSourceEntity(157U);
    msg.setDestination(23109U);
    msg.setDestinationEntity(61U);
    msg.timeout = 42157U;
    msg.name.assign("SAGIYMWODDGYSI");
    msg.custom.assign("BBFYFBDGJRAYQHYTNZEXSFEXBYRIKUZCRXKDMANBSWJYFZTIDUWGCXCAYRHMMPEDORYBWDJPXQSDQAPCGNHGVVQRJLPZIIEOCULGGSRLSUNKRUNNLIYPQVXVNEVQOMZJJBTFMIYCVGKIPDQQULWFNNZOFWHXIMHEICWQFMBMKKSLATIEOLSXAHOWKGZYRGPKTFWA");

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
    msg.setTimeStamp(0.174101081305);
    msg.setSource(40571U);
    msg.setSourceEntity(165U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.166182492028;
    msg.lon = 0.833551373597;
    msg.z = 0.0510438643834;
    msg.z_units = 131U;
    msg.speed = 0.774380612584;
    msg.speed_units = 160U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38716U;
    tmp_msg_0.off_x = 0.810730088061;
    tmp_msg_0.off_y = 0.245214306458;
    tmp_msg_0.off_z = 0.69317734424;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.744016906291;
    msg.custom.assign("FYWEAIUBFFTCAEQFJMIGLEJIYYKLKHKIEXYAJVNSZNPUCNUVBJAOAPBPKMVXIDDXRGGLMVZPRBRCIYTZRBXXEZLJDSNJLASSOXQPVOXGZWCMUHHKCWYCFOKHTSQSQLEGRPDQZUCUWGWVUDXNGNTVTPDTUYAHSMCBPAQDCAENFSFHXMWTIU");

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
    msg.setTimeStamp(0.254821174303);
    msg.setSource(62649U);
    msg.setSourceEntity(71U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.00886981111714;
    msg.lon = 0.621900782284;
    msg.z = 0.566513929964;
    msg.z_units = 151U;
    msg.speed = 0.0103361392725;
    msg.speed_units = 103U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.623865846569;
    tmp_msg_0.y = 0.681502332524;
    tmp_msg_0.z = 0.949255264465;
    tmp_msg_0.t = 0.671218013288;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.902554758913;
    msg.custom.assign("EHGJHAZDHOUMCHPKCKGMDIKONFBNSYJLWPVVNONPICPUNUSYDAPWDGQNVFSBCIYFKLTIEBJJAILLRURXESGQAKHUXSSJMVZLFK");

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
    msg.setTimeStamp(0.856170925711);
    msg.setSource(42012U);
    msg.setSourceEntity(102U);
    msg.setDestination(58844U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.384319039123;
    msg.lon = 0.047234992914;
    msg.z = 0.263023731438;
    msg.z_units = 246U;
    msg.speed = 0.994691416403;
    msg.speed_units = 96U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.561011226867;
    tmp_msg_0.y = 0.260464526594;
    tmp_msg_0.z = 0.83376629508;
    tmp_msg_0.t = 0.328070051105;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31461U;
    tmp_msg_1.off_x = 0.34500901134;
    tmp_msg_1.off_y = 0.342445577823;
    tmp_msg_1.off_z = 0.392531110214;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.87005857888;
    msg.custom.assign("MMXEQMBFQZFNDNTECAIURJLRVXWXQUILWDJCLKFRMJVOURYSGDPMQCNHUWUGRFIBFNJLOXHGYTQLJDWLTHSUHMLESSULCZDZTPGHZQPKWLSAPTCSQQYWHOLOXEPIFSZPERJCTUVICVANRXBFEFKXVBBTKSUYNDTYYHTEDVPAOPEYTICWBMOGGAQHOVKH");

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
    msg.setTimeStamp(0.737857635459);
    msg.setSource(42793U);
    msg.setSourceEntity(27U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(236U);
    msg.vid = 40700U;
    msg.off_x = 0.350418118222;
    msg.off_y = 0.849701345099;
    msg.off_z = 0.647469516481;

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
    msg.setTimeStamp(0.637094582429);
    msg.setSource(50635U);
    msg.setSourceEntity(163U);
    msg.setDestination(64834U);
    msg.setDestinationEntity(191U);
    msg.vid = 58967U;
    msg.off_x = 0.38116424066;
    msg.off_y = 0.59328049281;
    msg.off_z = 0.313242357159;

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
    msg.setTimeStamp(0.434218939986);
    msg.setSource(29407U);
    msg.setSourceEntity(60U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(190U);
    msg.vid = 61941U;
    msg.off_x = 0.188196300503;
    msg.off_y = 0.788856221769;
    msg.off_z = 0.0478252621945;

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
    msg.setTimeStamp(0.643045035329);
    msg.setSource(21263U);
    msg.setSourceEntity(135U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.39924231129);
    msg.setSource(28375U);
    msg.setSourceEntity(135U);
    msg.setDestination(45899U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.308565400928);
    msg.setSource(35453U);
    msg.setSourceEntity(26U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.1306634744);
    msg.setSource(8571U);
    msg.setSourceEntity(212U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(0U);
    msg.mid = 9389U;

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
    msg.setTimeStamp(0.333228091888);
    msg.setSource(55950U);
    msg.setSourceEntity(48U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(151U);
    msg.mid = 23899U;

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
    msg.setTimeStamp(0.408010825015);
    msg.setSource(47348U);
    msg.setSourceEntity(158U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(232U);
    msg.mid = 44379U;

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
    msg.setTimeStamp(0.552686689912);
    msg.setSource(36096U);
    msg.setSourceEntity(43U);
    msg.setDestination(1768U);
    msg.setDestinationEntity(5U);
    msg.state = 12U;
    msg.eta = 28464U;
    msg.info.assign("UKJAPLALVYFLHXNBNRILNXEUHZHYOAKJSPZIXPDVFCQTQWZLXOQLKRSUGLUAYOQGNQRMTKMKMDKIMRJIQBPESMGAUGWLHCCVHFTEHIHUTZOMCTJWYFUPFRSQDGEOXCOPTBNBMMOBWNTHDHDFJVARTVNWOCRPBUGRGNNLYWZ");

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
    msg.setTimeStamp(0.533683456828);
    msg.setSource(49312U);
    msg.setSourceEntity(5U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(216U);
    msg.state = 91U;
    msg.eta = 58584U;
    msg.info.assign("EUYBZJWKQHVGRNCYHCJMCFOVTUIXDAOGOCUQAMJCJODWKNNXYKFLJNWVGVPEBUXEWXEVWNSGRUAMUHWAPQPACLPVQLMQOIPZUNDSCTUKVLAELIVBWOEZGBTQAXJXRZLZKPGDWGMXILRJARLAKIROFLTFDBRTOXHJZWSFJVSQANXRBRVPIDTSSGBITQYCMGFYKLNFXTEZ");

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
    msg.setTimeStamp(0.118391789281);
    msg.setSource(42184U);
    msg.setSourceEntity(170U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(139U);
    msg.state = 149U;
    msg.eta = 54913U;
    msg.info.assign("UAPUQJOVDGQMTRJJVCLITKSRVFMEEJDSRJYSCSQIAFORYMJHPLDPEHXESCMOKFVIEQDOYUCUKVGSRVCWZKWUGWHWBDNBGWATGZETBTLDYTNIPNOYAAZPMVFCJLG");

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
    msg.setTimeStamp(0.107047816937);
    msg.setSource(24543U);
    msg.setSourceEntity(141U);
    msg.setDestination(36404U);
    msg.setDestinationEntity(43U);
    msg.system = 35065U;
    msg.duration = 33864U;
    msg.speed = 0.775877474106;
    msg.speed_units = 231U;
    msg.x = 0.454532408399;
    msg.y = 0.795533255435;
    msg.z = 0.289968403179;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.474035400912);
    msg.setSource(56676U);
    msg.setSourceEntity(161U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(247U);
    msg.system = 6265U;
    msg.duration = 27432U;
    msg.speed = 0.915596679086;
    msg.speed_units = 95U;
    msg.x = 0.023443403454;
    msg.y = 0.468817010703;
    msg.z = 0.0885898477313;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.969345654083);
    msg.setSource(25485U);
    msg.setSourceEntity(168U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(235U);
    msg.system = 65465U;
    msg.duration = 6199U;
    msg.speed = 0.530843643272;
    msg.speed_units = 152U;
    msg.x = 0.259134629619;
    msg.y = 0.276384030907;
    msg.z = 0.38688986002;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.0389899080842);
    msg.setSource(36962U);
    msg.setSourceEntity(221U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.497211096999;
    msg.lon = 0.0410117346725;
    msg.speed = 0.968899486528;
    msg.speed_units = 202U;
    msg.duration = 55698U;
    msg.sys_a = 5827U;
    msg.sys_b = 44020U;
    msg.move_threshold = 0.536662414295;

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
    msg.setTimeStamp(0.183570838133);
    msg.setSource(53587U);
    msg.setSourceEntity(65U);
    msg.setDestination(14216U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.839560001093;
    msg.lon = 0.469597873386;
    msg.speed = 0.593452345455;
    msg.speed_units = 9U;
    msg.duration = 14653U;
    msg.sys_a = 13703U;
    msg.sys_b = 13143U;
    msg.move_threshold = 0.137447925649;

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
    msg.setTimeStamp(0.0152042545625);
    msg.setSource(18415U);
    msg.setSourceEntity(116U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.224753427281;
    msg.lon = 0.177646343779;
    msg.speed = 0.636644854781;
    msg.speed_units = 231U;
    msg.duration = 59198U;
    msg.sys_a = 16729U;
    msg.sys_b = 24762U;
    msg.move_threshold = 0.800970831812;

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
    msg.setTimeStamp(0.436204737511);
    msg.setSource(17324U);
    msg.setSourceEntity(12U);
    msg.setDestination(10816U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.0086068454413;
    msg.lon = 0.929801826132;
    msg.z = 0.80706255202;
    msg.z_units = 96U;
    msg.speed = 0.255976221921;
    msg.speed_units = 112U;
    msg.custom.assign("SEZJDYSPWNUZOXINLPSWVJSHYLRIRFWWYMHXROAGKYGMQJULOTEPRXNOPVCVJKZVRUDQOQSYBKDLRBBA");

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
    msg.setTimeStamp(0.74684497514);
    msg.setSource(61256U);
    msg.setSourceEntity(123U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.695945672998;
    msg.lon = 0.242048686117;
    msg.z = 0.234009706522;
    msg.z_units = 140U;
    msg.speed = 0.328255069065;
    msg.speed_units = 19U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0245936150502;
    tmp_msg_0.lon = 0.892147807615;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("POSDRESMPRHKVVMETETYXEUAIMYWQMFNQCWLIFICXDDULAGDSXNXRUZNLHSTXNIJYRSNODJGJDJGFFYUZOOMEXTYWNVDRZPBGADERLO");

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
    msg.setTimeStamp(0.716826214701);
    msg.setSource(1089U);
    msg.setSourceEntity(149U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.282513962966;
    msg.lon = 0.280863058747;
    msg.z = 0.790617736609;
    msg.z_units = 232U;
    msg.speed = 0.786532272573;
    msg.speed_units = 135U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.380777848035;
    tmp_msg_0.lon = 0.0412045756444;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BZXITJHMUYWOPPSONDCLKYRFNWUARDAKVREHCEEGOZPBVVWMKTFYQLQLGFXXWZZYSHEAIFBQZTNMIXVVQRJEFTJMCUSLENYVNGYAPNEJHUOW");

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
    msg.setTimeStamp(0.438311084056);
    msg.setSource(35193U);
    msg.setSourceEntity(209U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.250457220193;
    msg.lon = 0.951059411549;

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
    msg.setTimeStamp(0.509379696055);
    msg.setSource(18422U);
    msg.setSourceEntity(71U);
    msg.setDestination(8494U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.760170802796;
    msg.lon = 0.30173092603;

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
    msg.setTimeStamp(0.0661305584548);
    msg.setSource(18288U);
    msg.setSourceEntity(217U);
    msg.setDestination(14273U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.401797607706;
    msg.lon = 0.410181323807;

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
    msg.setTimeStamp(0.267868281186);
    msg.setSource(52140U);
    msg.setSourceEntity(167U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(139U);
    msg.timeout = 44381U;
    msg.lat = 0.348549132048;
    msg.lon = 0.512263201028;
    msg.z = 0.00337272927081;
    msg.z_units = 7U;
    msg.pitch = 0.31655200903;
    msg.amplitude = 0.745972021464;
    msg.duration = 39672U;
    msg.speed = 0.910499484787;
    msg.speed_units = 86U;
    msg.radius = 0.766757303424;
    msg.direction = 61U;
    msg.custom.assign("EFCSMNZOQMJRAFYCZONGOWVDKCAIKQDPMTANZYKGJMZNETCTTKAOMJFBOBUKFBTVSRPGGOXUICTXYNADUASJLXZSQBBRYCMGFIEEZUBLSBBFVDXUHLPLJJRDHLHAG");

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
    msg.setTimeStamp(0.560015041556);
    msg.setSource(5069U);
    msg.setSourceEntity(226U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(229U);
    msg.timeout = 62506U;
    msg.lat = 0.0368171529165;
    msg.lon = 0.653192387093;
    msg.z = 0.598742685198;
    msg.z_units = 63U;
    msg.pitch = 0.0506854375793;
    msg.amplitude = 0.36779221168;
    msg.duration = 14678U;
    msg.speed = 0.375511028687;
    msg.speed_units = 71U;
    msg.radius = 0.0888226415366;
    msg.direction = 236U;
    msg.custom.assign("IWRZDWSOQBLEBCBQXHIVPLVCXHIWYMDWYVSZAZXYGZTRSSHPUVFARSSJLTTATIKHXGNYZORWRFCKQEOORNECTUBDXKJRCHFMPXKQWJPBOLEVWPYXDZVGIKRUJBGEFSZOTFLICUJQQZMQNGLTMQJSYVW");

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
    msg.setTimeStamp(0.406502733367);
    msg.setSource(54155U);
    msg.setSourceEntity(216U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(148U);
    msg.timeout = 12042U;
    msg.lat = 0.244868554233;
    msg.lon = 0.58216624906;
    msg.z = 0.273958883183;
    msg.z_units = 56U;
    msg.pitch = 0.600184531078;
    msg.amplitude = 0.981241906717;
    msg.duration = 13715U;
    msg.speed = 0.788424608439;
    msg.speed_units = 248U;
    msg.radius = 0.401397774228;
    msg.direction = 147U;
    msg.custom.assign("HHMQJPXRJMHZMZIEREGFOPQXABIFYBWRFNHEFUVGVGJIIAPJLCTNVPFRBCQPMDAZWZLITXFFPCTSWYVALOAGDXCXUQJWECMBLAMVUX");

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
    msg.setTimeStamp(0.633252546665);
    msg.setSource(57506U);
    msg.setSourceEntity(236U);
    msg.setDestination(54617U);
    msg.setDestinationEntity(94U);
    msg.formation_name.assign("LDYKFMWQKFLXJOLYPZQDGBKVVPKQHXDTQLEDGUGFHQZEIXBVJXDJCCUPKTKZTSSZGWWNZNIDMNUEVEOFCRKNQAQRGOWMMZGYHFMMBWJAABXIKST");
    msg.reference_frame = 133U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33448U;
    tmp_msg_0.off_x = 0.526820302154;
    tmp_msg_0.off_y = 0.966463158337;
    tmp_msg_0.off_z = 0.0876971848859;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MRKKYKQLOOHTMPSFVVIAFKLBNHTNXCZVQYJHVVQACVBBKICSPDGOEMXCQRZVPZBFUOIZCSAKFDOUYKSAZAZGYIDYPMDSWJPC");

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
    msg.setTimeStamp(0.748702225138);
    msg.setSource(30200U);
    msg.setSourceEntity(197U);
    msg.setDestination(40179U);
    msg.setDestinationEntity(23U);
    msg.formation_name.assign("SXJDEZQKJNIEDIBHZHOGNCQFAPAJDUNNXHB");
    msg.reference_frame = 142U;
    msg.custom.assign("JOONOTNJTYHWSKCUDUEGVAYKZFBUJAUSWRLQUMFVJTARDUBSTXKRABRPJNXSPMMFEDDPMHUZLXODVNIGBPZVBJOOWKSHIGMQMNCJFYTEHIIAOXKSOKLGYLIIYHSEXGNWQPDIHKTJDLYLSNICNZFYNVNGHGAVLECHCUEQBWEERLKBJXVQXSKDRGRTQQBGHFCXZFIU");

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
    msg.setTimeStamp(0.847412310452);
    msg.setSource(3557U);
    msg.setSourceEntity(228U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("SNMQHPNPEHSHUVJQWBXSNFFUQFTZZZVQXIXAJLZXSXRJZNIGOKGNOADGGRUIRLEZAWWFXSVRKVLYLJDCSWWUJWSAEEOLGIXBETXDLWYCNQJRUMUBHYOADYMYQMIBHNJVGTDLHLZNYVZMADILCTCUWZGKMUFTPBETACMRAKFHGDKWP");
    msg.reference_frame = 71U;
    msg.custom.assign("NNXTLALIVLUQIXENHCZOUOMIDSIUULCEPNTXDHYSSR");

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
    msg.setTimeStamp(0.369892334979);
    msg.setSource(64990U);
    msg.setSourceEntity(161U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("NJUXYZNTUVABQMTEUEKGOKHLCERHOWMBOZDRWM");
    msg.formation_name.assign("GAJFCVJTTEENCZBGRCQVMKAFIMDVM");
    msg.plan_id.assign("TVJFBLMDLMBXAEXUMTCSCEBPORQQJYAVSUYBWRDGHMULENEUKUNKUVOURJDJRRQCJRHADTVDLJALHDZLTYPPPNEAXSAIHPXKIACEUSZFLSCHRSHJAQFQKSIEOFXNZBG");
    msg.description.assign("SHJKGIYEDCFHNQRCVWMTOHYHQSEILTPAEXNJUD");
    msg.leader_speed = 0.7759503354;
    msg.leader_bank_lim = 0.787699466254;
    msg.pos_sim_err_lim = 0.033654236732;
    msg.pos_sim_err_wrn = 0.841179956694;
    msg.pos_sim_err_timeout = 13013U;
    msg.converg_max = 0.161694485988;
    msg.converg_timeout = 29380U;
    msg.comms_timeout = 4252U;
    msg.turb_lim = 0.877751664261;
    msg.custom.assign("PNBVSPYUPNVRWOLCFTFKHHSATIQTRPGEPKYQCCRYXNKWTQUZMZAFFVXKLOVYMQGMILLXUGAJLZZCSPDQGSEWTOQDWSWNIBTXSLQQAMAFNBOKCDRKAXXECOUUHNGGOLXRSCUJSJNUADCDGFPYFMLMNTEBU");

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
    msg.setTimeStamp(0.816654542851);
    msg.setSource(46608U);
    msg.setSourceEntity(225U);
    msg.setDestination(64610U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("KGQCAYITSXBTXWBMQFWUHDDJOFIWQDPRVNOVGTWOHYYBYPPXIFKZI");
    msg.formation_name.assign("PYFEOSMVUYXOETYTABWSKLTPFVMKAZCGNSLXGPIIJGTVNQXVDQFCFIAERVQMGIWQSASZWEHVSULVUZNHLKSIBFJJSTTGNCHEYTCPEUCRCWZQFGIBNYLRZBIBQCNLPYXKIQHOEYWOOQMLADOMDNVVUZWHPSRRMLGQPKFHXMNJQ");
    msg.plan_id.assign("XTCSXWZLNMVCIPQRAXAOCOETVMOSXYFHABZLKGOXKIHNUDEZIJRVWFIEXENDHRG");
    msg.description.assign("KQWLSGQCVPOBHWBOKDRVWXEHXKRFFGCIZMBMECGYLEBQQPUYHLSEMUTCAKMLPTVYEINPZGDHOIFFYYHTBXTSCAGMNPDIWJAWTNDDUJUAHXDXZELJWMMJFMFXSLNJIGHYDZSXINBGOPBTFBIKORKPHJWNR");
    msg.leader_speed = 0.391191062006;
    msg.leader_bank_lim = 0.5858120882;
    msg.pos_sim_err_lim = 0.966033304327;
    msg.pos_sim_err_wrn = 0.966614375733;
    msg.pos_sim_err_timeout = 54181U;
    msg.converg_max = 0.630482681734;
    msg.converg_timeout = 15985U;
    msg.comms_timeout = 15571U;
    msg.turb_lim = 0.582660421011;
    msg.custom.assign("EHEJOHSLBISQCQAVQVIF");

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
    msg.setTimeStamp(0.460037990882);
    msg.setSource(23666U);
    msg.setSourceEntity(160U);
    msg.setDestination(64121U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("QKMRZVOXLXUSOYDZPAQJGWYTGIEKNDGSTAYOIKBKGLHCJLORNAJBWPQXBAXEUYRZWWDELSOCAJMUWDROXBFRWFIIXKJXHHUMPIMYSZUKEYCPVLMGDUEXMDGGEQEVGTNEFXREFSVOTARTVBKUCSYIFZSNINOVHV");
    msg.formation_name.assign("RIPYGAHMNYPIBGCJDILRYSZGWCOUYQDEMRUBRNVXIGYXBTSIQXYEKMOLBJRJKYVTQVOWYUONQIOECOTFR");
    msg.plan_id.assign("YDZXFRKGUXSMVHMZIKNWSWGQPBUABVCQOJKTYMCYBUIATTWXFQASUSEVTIQDFMOLZRLFJYMZIYJKFBRBTKKFRSTHOOWUSCKGVROVETEDXALOZODSLVIYGBPRENXFJTRZWTWDOCSUFEUYNXWYNMHLKQJHCGCHPIRQGDYPQDAYPHRNLBFGLCMHIZFCJMHPLCQEUBPOAJWJINNBGDQVVPVHNXCGITWZDLUPEDMWEEKEX");
    msg.description.assign("KVFLLUERLNSDRKBWWWHCNQGMOIIZYSGXNJCCEHZZGFURLXXVZISKVNACZXYHGNICIVSKDITEOJGGLCYJQDIPDZUXSIMHOUFXEFFFBZZVTYNTFQMQUVXSEFXNVEXYGEQOHWCPARPBUSTUVEBMJYOEHHSKDCNMWJIAZABJKMQSAKPQDMDLMRPAJTBTF");
    msg.leader_speed = 0.127308374566;
    msg.leader_bank_lim = 0.973875845177;
    msg.pos_sim_err_lim = 0.800913811463;
    msg.pos_sim_err_wrn = 0.480815651254;
    msg.pos_sim_err_timeout = 53674U;
    msg.converg_max = 0.339476679005;
    msg.converg_timeout = 29144U;
    msg.comms_timeout = 59109U;
    msg.turb_lim = 0.935533557158;
    msg.custom.assign("HTVKUJCUJGAAUWFSVPMDTWFNYCOAJLCHNTVRYGCMJTHUTGXLZQIZMBBZQQPNDUQXESTROWSQXPNIJXDOGYBPRLWOMFFHJEXRTBESHEBEZPWADPLLZQGJZVHVIMZAESOIBRSVIGDNKSLMUYMNUQKYWYGOFQWXPTOFQSCTVOXEHPWWIVZHFAQUYVFLLAKLTIKCYFEGCHVNSNRXOKAAUKMICLXWRYER");

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
    msg.setTimeStamp(0.258337672477);
    msg.setSource(48707U);
    msg.setSourceEntity(52U);
    msg.setDestination(44816U);
    msg.setDestinationEntity(36U);
    msg.control_src = 44279U;
    msg.control_ent = 136U;
    msg.timeout = 0.601479673688;
    msg.loiter_radius = 0.924826040171;
    msg.altitude_interval = 0.551087075739;

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
    msg.setTimeStamp(0.0649875689537);
    msg.setSource(47796U);
    msg.setSourceEntity(92U);
    msg.setDestination(12252U);
    msg.setDestinationEntity(120U);
    msg.control_src = 41917U;
    msg.control_ent = 45U;
    msg.timeout = 0.355536580129;
    msg.loiter_radius = 0.683311736648;
    msg.altitude_interval = 0.389044540211;

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
    msg.setTimeStamp(0.248108232765);
    msg.setSource(26901U);
    msg.setSourceEntity(240U);
    msg.setDestination(85U);
    msg.setDestinationEntity(212U);
    msg.control_src = 56213U;
    msg.control_ent = 22U;
    msg.timeout = 0.724327458802;
    msg.loiter_radius = 0.384196088517;
    msg.altitude_interval = 0.435269363904;

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
    msg.setTimeStamp(0.0360233085464);
    msg.setSource(37573U);
    msg.setSourceEntity(39U);
    msg.setDestination(30202U);
    msg.setDestinationEntity(120U);
    msg.flags = 50U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.640231658524;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.305633197454;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.525268425638;
    msg.lon = 0.976848226379;
    msg.radius = 0.763402587107;

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
    msg.setTimeStamp(0.663319881004);
    msg.setSource(13646U);
    msg.setSourceEntity(64U);
    msg.setDestination(22103U);
    msg.setDestinationEntity(80U);
    msg.flags = 186U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.699521207527;
    tmp_msg_0.speed_units = 190U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.746185643952;
    tmp_msg_1.z_units = 105U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.809586634729;
    msg.lon = 0.405524110171;
    msg.radius = 0.0196873124557;

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
    msg.setTimeStamp(0.287414841175);
    msg.setSource(19031U);
    msg.setSourceEntity(125U);
    msg.setDestination(5885U);
    msg.setDestinationEntity(205U);
    msg.flags = 78U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.933156217322;
    tmp_msg_0.speed_units = 68U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.471375823402;
    tmp_msg_1.z_units = 229U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0476289594471;
    msg.lon = 0.841150707386;
    msg.radius = 0.798428030224;

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
    msg.setTimeStamp(0.608985108114);
    msg.setSource(18739U);
    msg.setSourceEntity(191U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(198U);
    msg.control_src = 17195U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 222U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.418905928314;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.284348214511;
    tmp_tmp_msg_0_1.z_units = 244U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.115865167605;
    tmp_msg_0.lon = 0.644942459836;
    tmp_msg_0.radius = 0.8375171078;
    msg.reference.set(tmp_msg_0);
    msg.state = 174U;
    msg.proximity = 70U;

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
    msg.setTimeStamp(0.0578841154619);
    msg.setSource(18195U);
    msg.setSourceEntity(253U);
    msg.setDestination(359U);
    msg.setDestinationEntity(207U);
    msg.control_src = 31447U;
    msg.control_ent = 101U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0127911122283;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.903897242139;
    tmp_tmp_msg_0_1.z_units = 222U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15117269834;
    tmp_msg_0.lon = 0.346348072972;
    tmp_msg_0.radius = 0.935858064383;
    msg.reference.set(tmp_msg_0);
    msg.state = 100U;
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
    msg.setTimeStamp(0.41193330315);
    msg.setSource(16051U);
    msg.setSourceEntity(103U);
    msg.setDestination(34983U);
    msg.setDestinationEntity(60U);
    msg.control_src = 55119U;
    msg.control_ent = 231U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 167U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.694218702067;
    tmp_tmp_msg_0_0.speed_units = 233U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.74477648158;
    tmp_tmp_msg_0_1.z_units = 129U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.826902078948;
    tmp_msg_0.lon = 0.691098164988;
    tmp_msg_0.radius = 0.001025285843;
    msg.reference.set(tmp_msg_0);
    msg.state = 38U;
    msg.proximity = 104U;

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
    msg.setTimeStamp(0.446614523393);
    msg.setSource(25847U);
    msg.setSourceEntity(88U);
    msg.setDestination(17735U);
    msg.setDestinationEntity(197U);
    msg.ax_cmd = 0.72420102138;
    msg.ay_cmd = 0.064932695984;
    msg.az_cmd = 0.97897666185;
    msg.ax_des = 0.685426061016;
    msg.ay_des = 0.279120075447;
    msg.az_des = 0.125237681381;
    msg.virt_err_x = 0.397373339988;
    msg.virt_err_y = 0.201607406578;
    msg.virt_err_z = 0.39053212655;
    msg.surf_fdbk_x = 0.755411950273;
    msg.surf_fdbk_y = 0.584178151395;
    msg.surf_fdbk_z = 0.888684531158;
    msg.surf_unkn_x = 0.632169855985;
    msg.surf_unkn_y = 0.613455655794;
    msg.surf_unkn_z = 0.0828146064202;
    msg.ss_x = 0.36015305405;
    msg.ss_y = 0.497132827302;
    msg.ss_z = 0.380325815929;

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
    msg.setTimeStamp(0.0118797924724);
    msg.setSource(17224U);
    msg.setSourceEntity(206U);
    msg.setDestination(5064U);
    msg.setDestinationEntity(250U);
    msg.ax_cmd = 0.875569103468;
    msg.ay_cmd = 0.21452432839;
    msg.az_cmd = 0.368574997271;
    msg.ax_des = 0.856003642808;
    msg.ay_des = 0.952200506818;
    msg.az_des = 0.378458178346;
    msg.virt_err_x = 0.803058165011;
    msg.virt_err_y = 0.579853661119;
    msg.virt_err_z = 0.21844303701;
    msg.surf_fdbk_x = 0.416080252897;
    msg.surf_fdbk_y = 0.578772902473;
    msg.surf_fdbk_z = 0.207793076137;
    msg.surf_unkn_x = 0.74943021016;
    msg.surf_unkn_y = 0.644404907057;
    msg.surf_unkn_z = 0.0266700923784;
    msg.ss_x = 0.435662213361;
    msg.ss_y = 0.177966994312;
    msg.ss_z = 0.0677792292798;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SATGMZOUSYLAJGMUUDIKISYPVCNDWFXMJKTKKQCIDFRSRWHCVNVGQBDTGJFXNVXFWANYPQQYRPDLBGTBFELLHCHHZPNVXDQEXJBRWLBCKTOLFU");
    tmp_msg_0.dist = 0.78190550596;
    tmp_msg_0.err = 0.170171250868;
    tmp_msg_0.ctrl_imp = 0.320845085411;
    tmp_msg_0.rel_dir_x = 0.417981985926;
    tmp_msg_0.rel_dir_y = 0.386315547879;
    tmp_msg_0.rel_dir_z = 0.108457226178;
    tmp_msg_0.err_x = 0.305312072986;
    tmp_msg_0.err_y = 0.550331773713;
    tmp_msg_0.err_z = 0.0566274364835;
    tmp_msg_0.rf_err_x = 0.304807680545;
    tmp_msg_0.rf_err_y = 0.439543344928;
    tmp_msg_0.rf_err_z = 0.352987603185;
    tmp_msg_0.rf_err_vx = 0.981501401741;
    tmp_msg_0.rf_err_vy = 0.555956993224;
    tmp_msg_0.rf_err_vz = 0.477909201676;
    tmp_msg_0.ss_x = 0.505604511336;
    tmp_msg_0.ss_y = 0.851723460899;
    tmp_msg_0.ss_z = 0.35410986126;
    tmp_msg_0.virt_err_x = 0.91195261471;
    tmp_msg_0.virt_err_y = 0.843419219236;
    tmp_msg_0.virt_err_z = 0.418526674867;
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
    msg.setTimeStamp(0.510258315871);
    msg.setSource(32630U);
    msg.setSourceEntity(76U);
    msg.setDestination(27874U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.664773013934;
    msg.ay_cmd = 0.641601539872;
    msg.az_cmd = 0.434329614817;
    msg.ax_des = 0.650960740625;
    msg.ay_des = 0.218197030572;
    msg.az_des = 0.382329804418;
    msg.virt_err_x = 0.916855778231;
    msg.virt_err_y = 0.902888804444;
    msg.virt_err_z = 0.619694113337;
    msg.surf_fdbk_x = 0.862262757063;
    msg.surf_fdbk_y = 0.0322704684937;
    msg.surf_fdbk_z = 0.855472458987;
    msg.surf_unkn_x = 0.958640370342;
    msg.surf_unkn_y = 0.512719255881;
    msg.surf_unkn_z = 0.232522000532;
    msg.ss_x = 0.253700058248;
    msg.ss_y = 0.163950540114;
    msg.ss_z = 0.0840755340373;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GAOZYMHRRURCXKTFKXWYJGRMVXYEGUAZULOJULRCFGYNTQUNQMBFSVVNFDDNUEMFJZK");
    tmp_msg_0.dist = 0.0514172508564;
    tmp_msg_0.err = 0.979755834163;
    tmp_msg_0.ctrl_imp = 0.892439212638;
    tmp_msg_0.rel_dir_x = 0.187788755438;
    tmp_msg_0.rel_dir_y = 0.713725804738;
    tmp_msg_0.rel_dir_z = 0.127991348542;
    tmp_msg_0.err_x = 0.438807172114;
    tmp_msg_0.err_y = 0.11291492525;
    tmp_msg_0.err_z = 0.0714729040405;
    tmp_msg_0.rf_err_x = 0.00505959623434;
    tmp_msg_0.rf_err_y = 0.0344646345369;
    tmp_msg_0.rf_err_z = 0.601202652942;
    tmp_msg_0.rf_err_vx = 0.92502099006;
    tmp_msg_0.rf_err_vy = 0.502259775621;
    tmp_msg_0.rf_err_vz = 0.295061283014;
    tmp_msg_0.ss_x = 0.0956507684904;
    tmp_msg_0.ss_y = 0.134146104788;
    tmp_msg_0.ss_z = 0.901895186772;
    tmp_msg_0.virt_err_x = 0.873878926934;
    tmp_msg_0.virt_err_y = 0.817848507874;
    tmp_msg_0.virt_err_z = 0.996216751372;
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
    msg.setTimeStamp(0.602112286455);
    msg.setSource(5869U);
    msg.setSourceEntity(218U);
    msg.setDestination(6244U);
    msg.setDestinationEntity(147U);
    msg.s_id.assign("IRBARXCTCDODPFGBWIOHCIDKNDRUUEVSDEQTVPYHGOTGEFADWHOAVOUJRZZGKWJZQNYXYNRJRHUXHSJITEOVTEKKSXDWLKLBAPCUAQMQGAMKIHPXFFUFTWYYJXMMBIZMWAYEUGFKPBZWZHPVMJIUUQVVASZRNJIEJHSXZQZBKQLWEFYBGCRXDNMNWDTRTQFXLZECBLUCGKNTJLBYQOLKV");
    msg.dist = 0.457484980408;
    msg.err = 0.847464450378;
    msg.ctrl_imp = 0.981561579224;
    msg.rel_dir_x = 0.859625365969;
    msg.rel_dir_y = 0.631506549569;
    msg.rel_dir_z = 0.623469136529;
    msg.err_x = 0.51277199658;
    msg.err_y = 0.484765770367;
    msg.err_z = 0.930457499057;
    msg.rf_err_x = 0.0313930573637;
    msg.rf_err_y = 0.30701157765;
    msg.rf_err_z = 0.411541792066;
    msg.rf_err_vx = 0.443255134206;
    msg.rf_err_vy = 0.304413816599;
    msg.rf_err_vz = 0.305152685741;
    msg.ss_x = 0.809105046758;
    msg.ss_y = 0.776584114095;
    msg.ss_z = 0.654840949069;
    msg.virt_err_x = 0.439476703532;
    msg.virt_err_y = 0.546512418042;
    msg.virt_err_z = 0.323209779292;

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
    msg.setTimeStamp(0.097443292027);
    msg.setSource(15430U);
    msg.setSourceEntity(0U);
    msg.setDestination(50776U);
    msg.setDestinationEntity(82U);
    msg.s_id.assign("FJEKEZUTZFXMDRQRAXZAOZMOJEYTEJCTVKLKIBXHWKFTWZJSDKWPOSADWLDSVVQDAOXEUBMNYJPGLBRORHJEPALOGGJJIIJDQCTTNHUQNHBLRVNNIMHKRIPSELGTXYZUWDAQTCAIEPPBINGGYIALFXSQVBGGPRYRDVYCUBCUKKIOICSSOWZWCZWUXLSQWYXFHMFCLHDGWKLYAGFBJFMHVYRMDYXHAURFQUPMCSQBPNNOVNUXQVEPMBTEZHFK");
    msg.dist = 0.857214592715;
    msg.err = 0.950719687063;
    msg.ctrl_imp = 0.902995923382;
    msg.rel_dir_x = 0.0774889463128;
    msg.rel_dir_y = 0.902440444084;
    msg.rel_dir_z = 0.290170023808;
    msg.err_x = 0.84858432415;
    msg.err_y = 0.273979472448;
    msg.err_z = 0.566046375305;
    msg.rf_err_x = 0.458101622553;
    msg.rf_err_y = 0.390385667745;
    msg.rf_err_z = 0.748831691734;
    msg.rf_err_vx = 0.587460517659;
    msg.rf_err_vy = 0.498501646838;
    msg.rf_err_vz = 0.895851658677;
    msg.ss_x = 0.390403369035;
    msg.ss_y = 0.130008366425;
    msg.ss_z = 0.703396753513;
    msg.virt_err_x = 0.321464654758;
    msg.virt_err_y = 0.45036089028;
    msg.virt_err_z = 0.827867869442;

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
    msg.setTimeStamp(0.934034583472);
    msg.setSource(56031U);
    msg.setSourceEntity(78U);
    msg.setDestination(55621U);
    msg.setDestinationEntity(174U);
    msg.s_id.assign("YIGJKYSECMEEEZFIDQSXTBNFTHSPHDVVMODFXFDDZBPOZLEFMHLAWDPACVWVJNWTLLFOTXKHCTOEPIUKAUUVJCQNQEFSCZOOBUMTNYYLAJWQKIKAGRRDIRZWTRVJCQSNYWNYGJMXCBBUIXLRGMHSSRWGEPHKKPTPHGKQXWGLLXRZJAHMBKQSSSIXVXUNHDJXVJ");
    msg.dist = 0.0173872541631;
    msg.err = 0.122380932395;
    msg.ctrl_imp = 0.75539827264;
    msg.rel_dir_x = 0.0781566332221;
    msg.rel_dir_y = 0.956716832414;
    msg.rel_dir_z = 0.6581449328;
    msg.err_x = 0.133867372306;
    msg.err_y = 0.455423931037;
    msg.err_z = 0.41642226313;
    msg.rf_err_x = 0.615113504022;
    msg.rf_err_y = 0.072432184869;
    msg.rf_err_z = 0.256577208441;
    msg.rf_err_vx = 0.302748459908;
    msg.rf_err_vy = 0.229865597622;
    msg.rf_err_vz = 0.978504036318;
    msg.ss_x = 0.728801664285;
    msg.ss_y = 0.104681043168;
    msg.ss_z = 0.643391780088;
    msg.virt_err_x = 0.83863145496;
    msg.virt_err_y = 0.482310498182;
    msg.virt_err_z = 0.233914217127;

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
    msg.setTimeStamp(0.905355598942);
    msg.setSource(28341U);
    msg.setSourceEntity(12U);
    msg.setDestination(44941U);
    msg.setDestinationEntity(128U);
    msg.timeout = 25083U;
    msg.rpm = 0.0860098667614;
    msg.direction = 203U;
    msg.custom.assign("XTIMQIPPUPMSEOYCSKRVBAEWJEFVX");

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
    msg.setTimeStamp(0.157138745055);
    msg.setSource(11767U);
    msg.setSourceEntity(103U);
    msg.setDestination(32845U);
    msg.setDestinationEntity(37U);
    msg.timeout = 21929U;
    msg.rpm = 0.0807161219145;
    msg.direction = 197U;
    msg.custom.assign("JZIVGNETPRVWZOHBDVPNYCLE");

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
    msg.setTimeStamp(0.763974823943);
    msg.setSource(52616U);
    msg.setSourceEntity(158U);
    msg.setDestination(17411U);
    msg.setDestinationEntity(114U);
    msg.timeout = 64372U;
    msg.rpm = 0.812248973418;
    msg.direction = 95U;
    msg.custom.assign("PCDQEMHYGSSJWSKGMGRMVEFMUURFEALCCJXLXONKQNMECPLVFSFYKRZNQYEABAROQDUHXKQWMIDBRVBXXJIFGZIBFSRITPOUALHYYSIXJXVIKWLTQHJWAHOKTNWDKGMTCTMZCAGZWVHHISLUFJZ");

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
    msg.setTimeStamp(0.28093769201);
    msg.setSource(41529U);
    msg.setSourceEntity(165U);
    msg.setDestination(28264U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("KFUNZPPDKVZAPNJKBCAOKMQEVEAIJQKVCKGINCEEVXGGHRRDWFMJDFSILDIEPQRPWXEXWHUESYWKMPNMANVSLRXAMHXURRQNMVOVGRASNWSCDMYSIQBZJBIWZBUWQGVTUVMLFJFXOGABXTNZJYFSDJBHYWCQGBDHYRSOTPCOFELMCTA");
    msg.type = 112U;
    msg.op = 75U;
    msg.group_name.assign("JUAMZAMWTPNKVXODSAZHWUPKYIVJGMFBDKASSFEDEPCNXYJKGFYSLJHXMGJRIIEAHHNEPQAFRTJNIUPTFOYNGWIITHFOLFBZMRQWSTIVQBXLZRQCDUPQCYRTPBXMWEXFHMBPMGXDNPWQBEDLMYZNQDYAGNSLUSTAZKCUYRSKRWVORWKTATJKFVEIXJSUCDJICXHOBQGVZNVFGKZERVGWVHB");
    msg.plan_id.assign("ZEDWAPQUMBBUUOADCINLQQEDDRFPVHJWMYFJQECCRSHOUQZVBQNUBIYHPEOXWAPTJGRIACJKPXQGCQBZSBOUSXNCKDMJIRKRBFDGLMPFRCGOYWFVRTVZZVABXPTPIBNQLWXNFHIGMEAZSSOLVDMDZZOGYMJLXVOTHSPIYXHECUGJJTNCOKXURHLETBAKUVFENMHZRGHVWOESKCTEFRFYAXZXWJKAYULTNJDYGDLFLPGKSIHYSYATSWN");
    msg.description.assign("YVXHZVYSEGITHCXRKEQJZNKXVQLHNGZKDNHGPRNIBWNGNFBRHHEOWCIFFAYZKOXLVJJTLMYQREOMBSLHNAUWLLIUQYUUGDLBAKTCWUDLAKJECROZSUIZIHFQJGEJBCVXBSEYDKTJACSUWBKAEZRMBCGQAFVTWCOLPUDXSZIARIQSGDROBISTZJOTPWCOHEWPFPRNGMOMNFBYQGFDDMLNUZ");
    msg.reference_frame = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52364U;
    tmp_msg_0.off_x = 0.875581560212;
    tmp_msg_0.off_y = 0.702775833414;
    tmp_msg_0.off_z = 0.117926947604;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.190017539524;
    msg.leader_speed_min = 0.773365166305;
    msg.leader_speed_max = 0.244353913918;
    msg.leader_alt_min = 0.197958066242;
    msg.leader_alt_max = 0.884579334348;
    msg.pos_sim_err_lim = 0.76745505404;
    msg.pos_sim_err_wrn = 0.764479105768;
    msg.pos_sim_err_timeout = 2809U;
    msg.converg_max = 0.771538920652;
    msg.converg_timeout = 42781U;
    msg.comms_timeout = 22202U;
    msg.turb_lim = 0.834819428371;
    msg.custom.assign("CKIBUMEZOJXXFDOBCOMNTWWCSAFAHVPZVATMDOHRPXEMJVYYEXJQYSRCNQWHRHDZWLTNOTRKTDSNVMLUMBVSSXSXHQMLCNPLBIERPMSDUCLOWXCEISKJGKFG");

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
    msg.setTimeStamp(0.90641340421);
    msg.setSource(60126U);
    msg.setSourceEntity(213U);
    msg.setDestination(14686U);
    msg.setDestinationEntity(184U);
    msg.formation_name.assign("SVTIAJPLQJPGYNRKCLXKBAHGNOSXEVAROYMMKBTPPRCJJMFAPRTVWIDMYDHIZEMI");
    msg.type = 212U;
    msg.op = 78U;
    msg.group_name.assign("JKGGZGXKBUCCEQVJLSOTMXNGAVTUBQWVGAYRHURBYVDROPKWZVHKDZRCYXDUGDPXDEYCIFYCSLGZLYPACGMRNUPPKIJJATSVPUMNZFJXQFWQYLEVIOTEEFNYLTBATLNHZGMBOQIHOYSSBMFOWQZRZVKXUJOPYXMIIWFWSMTHTDNIQJARCHKHUZGRRVAHSJCTOIPNKLQSFKMSADDXAJJMCZWVLLINK");
    msg.plan_id.assign("IFMTTPJDJZMMFCOWXSDKJDFSLRHVBVAXIDJTBLHWEWQGCKFWERZMZOWNSOOSQARRIOIQCCGBNNIQRLYQYYVTKUHVLZVVFNAYKEVYATUUDBNBPZELQSGXEOYCPDGYEXHKQGWBHRCEHZIXHUQHXFCGGEESMLS");
    msg.description.assign("HRBHAYJRQIUSHIFBMCY");
    msg.reference_frame = 73U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60715U;
    tmp_msg_0.off_x = 0.0352040974792;
    tmp_msg_0.off_y = 0.91257881164;
    tmp_msg_0.off_z = 0.625749230055;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.210935884832;
    msg.leader_speed_min = 0.0614470117928;
    msg.leader_speed_max = 0.935515710734;
    msg.leader_alt_min = 0.358544500198;
    msg.leader_alt_max = 0.867224946686;
    msg.pos_sim_err_lim = 0.325383308943;
    msg.pos_sim_err_wrn = 0.149407477295;
    msg.pos_sim_err_timeout = 1029U;
    msg.converg_max = 0.340669883403;
    msg.converg_timeout = 61073U;
    msg.comms_timeout = 12996U;
    msg.turb_lim = 0.721650959419;
    msg.custom.assign("KHCZPTDCOGQPXHTUYCQMBEAXHRJQZE");

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
    msg.setTimeStamp(0.706115649212);
    msg.setSource(45649U);
    msg.setSourceEntity(150U);
    msg.setDestination(26816U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("RLSEFULXUPMUIWITPMTHBAOSNLYNGKLEMCZNDDZKBV");
    msg.type = 211U;
    msg.op = 224U;
    msg.group_name.assign("ALBSPDRKHESBMUIGVLDFSBJTCGLWLRZVOSXHZMBXFTQQDGGGEDKGYVGEQMDCPUWIEEZNNOKVFKBDMQFMK");
    msg.plan_id.assign("ULMRULXHLWTYGAVYNKKQXCOQYCAXCDQBGOBHTJPBGVGQSNDQFUUS");
    msg.description.assign("CGRIWLIZIINWSIISUPYKFAUDVBEWGSNYIBXMQJKYHXMXITCHCVNAPDHPPKNVKFJTBQLSZLCCQHDXJEVAZVOPXIKERVHQHFZQHKBYEBLGWYFZNCZWSWJXQEBWCTKJQHLP");
    msg.reference_frame = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4424U;
    tmp_msg_0.off_x = 0.334118880935;
    tmp_msg_0.off_y = 0.65002638982;
    tmp_msg_0.off_z = 0.366057187827;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.651572279682;
    msg.leader_speed_min = 0.756636378364;
    msg.leader_speed_max = 0.899775073736;
    msg.leader_alt_min = 0.65299201983;
    msg.leader_alt_max = 0.885111658944;
    msg.pos_sim_err_lim = 0.287365358084;
    msg.pos_sim_err_wrn = 0.928998935804;
    msg.pos_sim_err_timeout = 2393U;
    msg.converg_max = 0.344816285767;
    msg.converg_timeout = 26630U;
    msg.comms_timeout = 64431U;
    msg.turb_lim = 0.462535898742;
    msg.custom.assign("QYLSPFXKKKFXJHGYUELRZLSYMRLEIMWQUUYDEQAFLVZQGVDIJBTPFREKHOFGNBSQDWTSTBIAWLYZOISWITZGDNUMXRIAPOXMLCNBFNXBCAKDQGSAOUGGZNJEAYCQJIUQPUNCLPYTLBFSXPDXRMHTRPDWGAPUNVSMJSOMEZKKDUDGMHBWCOYHHNDVOZVIMFRHJ");

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
    msg.setTimeStamp(0.677353935642);
    msg.setSource(43674U);
    msg.setSourceEntity(248U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(227U);
    msg.timeout = 12353U;
    msg.lat = 0.207801025363;
    msg.lon = 0.664602683793;
    msg.z = 0.312112776386;
    msg.z_units = 34U;
    msg.speed = 0.45144637053;
    msg.speed_units = 147U;
    msg.custom.assign("EZWBVRJCYTEGHPOYRUUNUYGNGRGIIHJSWAAFQQOAGCFOMDLNQMYJPXCAVVGVKMVDBUYEBWHMXESPUBIHSQBLXBUOPQRFSLCCLYDVZPQDMCMUJIOZBITWLKAMSSLHLSQBNPZMFYBWAGCJWUNVFCHPPRNDZYWTTQPNDCALRRUOMF");

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
    msg.setTimeStamp(0.0596359705893);
    msg.setSource(1419U);
    msg.setSourceEntity(0U);
    msg.setDestination(32487U);
    msg.setDestinationEntity(176U);
    msg.timeout = 26250U;
    msg.lat = 0.309906651709;
    msg.lon = 0.563598430444;
    msg.z = 0.458219687046;
    msg.z_units = 169U;
    msg.speed = 0.477676734049;
    msg.speed_units = 1U;
    msg.custom.assign("QWPDKIJDGNRJFXJCPCSXHIDCMEGIJANGYKCMLEQKVJLLELNDWUQTTVCOPANSHRMJZLSJDHOADUUUQXTZGLATCAEUBYHYFXQQTBUXYGWHHJWOOOCZFWUYEYTRLIKRHJNSZFLMYMGUXFMBTBUGFERZQGVGPQWYNQVOEZSOIVJNXLDCKMXBQROEZPMPRFXAOWRFTKTIZAXWHTEHAIZFMWSKNCEKIRVIFWKUMZRGANP");

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
    msg.setTimeStamp(0.810641416417);
    msg.setSource(51923U);
    msg.setSourceEntity(115U);
    msg.setDestination(43242U);
    msg.setDestinationEntity(82U);
    msg.timeout = 58816U;
    msg.lat = 0.446386863262;
    msg.lon = 0.533545063961;
    msg.z = 0.432659230386;
    msg.z_units = 124U;
    msg.speed = 0.106188097613;
    msg.speed_units = 159U;
    msg.custom.assign("WMBKCKSTBAXOLAOJNZNTRFUBXRSLHEIENFJNIBZRDQOAWTFYWLQTNQJHQGURLTAMIOQRBSYTUDNEXGMYZVGLCKVPJZGSBZTFGQWMLOYSIVBAWOMSPBKYHFJXAXQCCISFXJITFPZAWVCCMDMUMORWMJUPLEYDYNRTZHAFSHXEXZJIPKVUDQDCURXVPYNYECWPW");

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
    msg.setTimeStamp(0.55752272262);
    msg.setSource(49635U);
    msg.setSourceEntity(26U);
    msg.setDestination(54433U);
    msg.setDestinationEntity(171U);
    msg.timeout = 47643U;
    msg.lat = 0.015760871958;
    msg.lon = 0.498634626608;
    msg.z = 0.795665066635;
    msg.z_units = 96U;
    msg.speed = 0.244031238571;
    msg.speed_units = 63U;
    msg.custom.assign("IVYSWXVTKZBXCGAJMXZKOCPNWVWBTEDSCYMTLUWUMQXPPXZGVNQZAMIATGZPNIRMJUSPFMJSTDEPARMKBTNBREKOTGEHHRFRIHXAVRSAEWKOQBXVNHGKRSCEKDYCYVNNIQHYENFSJLKEYQBGODKFOHBQFTDDXYZMLRWNDIAOAYFUIUDEUFSDEHYTQJCWPWQSQOLCQFVLBGPFALZPIRUHJONUMJDJKOPGLGILWGRJWXBZCZVFHLMUV");

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
    msg.setTimeStamp(0.25622565889);
    msg.setSource(13668U);
    msg.setSourceEntity(236U);
    msg.setDestination(49584U);
    msg.setDestinationEntity(187U);
    msg.timeout = 8212U;
    msg.lat = 0.7137174323;
    msg.lon = 0.548637964219;
    msg.z = 0.860066831221;
    msg.z_units = 246U;
    msg.speed = 0.950341251885;
    msg.speed_units = 20U;
    msg.custom.assign("GHJEWEQCNLTZCWFQDZTEOLIKABCIOAL");

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
    msg.setTimeStamp(0.37078252437);
    msg.setSource(13840U);
    msg.setSourceEntity(222U);
    msg.setDestination(42075U);
    msg.setDestinationEntity(232U);
    msg.timeout = 45819U;
    msg.lat = 0.640133840009;
    msg.lon = 0.298627610603;
    msg.z = 0.727143781079;
    msg.z_units = 21U;
    msg.speed = 0.593651167888;
    msg.speed_units = 30U;
    msg.custom.assign("EMEIAVWBJUYHBNKKKOCFLXHXZRMKEACNVPDFZLCRNRRYIMAGYSQENURGSQFSMXWDSOLGWOJSWAMPHHMPBVDVVUEIXXGZBSEZIHDVJDTKPTZCEARMEUZLQNCJVIUTRHATRDQYUMGWFHIIWJQNJLBNGOQULVJIUEDMRYVIOQCBTNQUBFTFIWBGTOXSYJGZOBAXJGZYZUQSPKKFRPWXSYOCWGXFOVSLHHOPTPYDLAF");

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
    msg.setTimeStamp(0.778331223515);
    msg.setSource(55074U);
    msg.setSourceEntity(146U);
    msg.setDestination(63185U);
    msg.setDestinationEntity(206U);
    msg.arrival_time = 0.746903719275;
    msg.lat = 0.589094117185;
    msg.lon = 0.955859407806;
    msg.z = 0.359329489491;
    msg.z_units = 42U;
    msg.travel_z = 0.0308633877191;
    msg.travel_z_units = 4U;
    msg.delayed = 150U;

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
    msg.setTimeStamp(0.367167007813);
    msg.setSource(54690U);
    msg.setSourceEntity(183U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.334778702299;
    msg.lat = 0.176859447964;
    msg.lon = 0.397828262961;
    msg.z = 0.318852271781;
    msg.z_units = 193U;
    msg.travel_z = 0.392226219571;
    msg.travel_z_units = 95U;
    msg.delayed = 131U;

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
    msg.setTimeStamp(0.834812131352);
    msg.setSource(33344U);
    msg.setSourceEntity(85U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(114U);
    msg.arrival_time = 0.786855384913;
    msg.lat = 0.894406113675;
    msg.lon = 0.0162261514101;
    msg.z = 0.707804075552;
    msg.z_units = 109U;
    msg.travel_z = 0.216044735071;
    msg.travel_z_units = 207U;
    msg.delayed = 206U;

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
    msg.setTimeStamp(0.403714865152);
    msg.setSource(50521U);
    msg.setSourceEntity(131U);
    msg.setDestination(10115U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.142999046728;
    msg.lon = 0.688846195619;
    msg.z = 0.314826004179;
    msg.z_units = 143U;
    msg.speed = 0.695034326665;
    msg.speed_units = 181U;
    msg.bearing = 0.712232399281;
    msg.cross_angle = 0.60379713964;
    msg.width = 0.591922992429;
    msg.length = 0.858627179351;
    msg.coff = 209U;
    msg.angaperture = 0.0842248385145;
    msg.range = 35056U;
    msg.overlap = 149U;
    msg.flags = 114U;
    msg.custom.assign("HBYNVQXOGUNYVKDWKPVNAUCITVFEJYESLYAIGCGZQEKRQVOSGUAIFILMOWKKUXDLGHFOWLTFXDWHFVAKCANOZTHSLLWZZJJYXGKCOIYPTPJQAJPLMDEIUXEDTQYEZRSHCQXXCKMFFRBXYNNMZPRPSDNBIDLEZUIPPTBGASJHIMJPOBBAHRNKDTMGRCTJCHTVUZMUFTXR");

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
    msg.setTimeStamp(0.907393213487);
    msg.setSource(11887U);
    msg.setSourceEntity(101U);
    msg.setDestination(59925U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.711406880184;
    msg.lon = 0.0719564164958;
    msg.z = 0.873661125091;
    msg.z_units = 101U;
    msg.speed = 0.90831920427;
    msg.speed_units = 34U;
    msg.bearing = 0.450616145992;
    msg.cross_angle = 0.191050655151;
    msg.width = 0.40023261612;
    msg.length = 0.14074909733;
    msg.coff = 106U;
    msg.angaperture = 0.836344250157;
    msg.range = 43518U;
    msg.overlap = 131U;
    msg.flags = 172U;
    msg.custom.assign("KOOLWTBMRZNLPGGKQOUXCGTPIMASXQDEBRKFCRPJOFEAZMPEDYREFDNGRTUQKZQZSLZZWDXSBGNCBCKQKWBHIAJJJXIJKAOSAMEHNFMWYGIZKTYYUDAZTBRLVDOCPXJYASGYGIVHNJHLFFYYDRBUMHTCFESWNXMQBIYXCXRWROCOPHWFAYUZVVNVLTFKQUHMAUDACD");

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
    msg.setTimeStamp(0.296311395491);
    msg.setSource(38310U);
    msg.setSourceEntity(202U);
    msg.setDestination(53365U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.979271176045;
    msg.lon = 0.404388190014;
    msg.z = 0.639203451233;
    msg.z_units = 94U;
    msg.speed = 0.647489115415;
    msg.speed_units = 203U;
    msg.bearing = 0.031964021057;
    msg.cross_angle = 0.206986239526;
    msg.width = 0.501269825895;
    msg.length = 0.66988431284;
    msg.coff = 233U;
    msg.angaperture = 0.491927387902;
    msg.range = 45819U;
    msg.overlap = 138U;
    msg.flags = 39U;
    msg.custom.assign("ZJXTMCARYJZWSSOETKGIHBTFSYGOHWUQWBFAWWJABDGBQGBPPNKQUSXXYCJOFCARIVFPBVCRIVZHXCIEHZLBLQHXQLEYDDWFQEATULCHYPJSAYXOZNTLPUGJKEPUMDWKJYNHOUJVQHSONTLGRUUQMFHEEWDVIOKBFRYMNTBXFMACIESTTNYNRVRQZAMAICWTQPDNDVRAIVUHXNFDZRMCKLLDEJZBZIVKVMUWGKSIGOSD");

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
    msg.setTimeStamp(0.414519186965);
    msg.setSource(3323U);
    msg.setSourceEntity(28U);
    msg.setDestination(55016U);
    msg.setDestinationEntity(112U);
    msg.timeout = 54901U;
    msg.lat = 0.983573996565;
    msg.lon = 0.403836128869;
    msg.z = 0.468853227184;
    msg.z_units = 19U;
    msg.speed = 0.703417443643;
    msg.speed_units = 190U;
    msg.syringe0 = 194U;
    msg.syringe1 = 12U;
    msg.syringe2 = 234U;
    msg.custom.assign("GCASWFUJOMXOGKNYTJVTJFNZYIDHISTBFNPDGMBXVCQKGUQDKKJQWZFWXJLUOSLCPRCEAOLXGEIHRASTRHTDXRWRRRIHVVDBWNKIHKIZQRMZHLFWZDVABFGAVDHZQNDJTDONMYGGIOMQK");

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
    msg.setTimeStamp(0.148905703465);
    msg.setSource(44240U);
    msg.setSourceEntity(200U);
    msg.setDestination(34622U);
    msg.setDestinationEntity(13U);
    msg.timeout = 9108U;
    msg.lat = 0.0351849927778;
    msg.lon = 0.643046561582;
    msg.z = 0.16522900114;
    msg.z_units = 94U;
    msg.speed = 0.696919234036;
    msg.speed_units = 224U;
    msg.syringe0 = 136U;
    msg.syringe1 = 136U;
    msg.syringe2 = 221U;
    msg.custom.assign("PHPRWEABDRQKEBPWEFQYKQCKDIWEBIXRADNCVKPHSSUCKFUANTITQZYJAYWZDZXAGSBHJJLTHGVMFEVTFZXJPDKWUMSEPRIHYNZDNYXRFQBDNOJCWCTLESTWHNTIYULGJYHVGPAMFVOEOGILZGQRSLOFKPNCMBMDMCNYAUFUUIMVIQBTKO");

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
    msg.setTimeStamp(0.017750316495);
    msg.setSource(10883U);
    msg.setSourceEntity(181U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(133U);
    msg.timeout = 46497U;
    msg.lat = 0.141904853498;
    msg.lon = 0.042094799052;
    msg.z = 0.378845972589;
    msg.z_units = 225U;
    msg.speed = 0.483415933648;
    msg.speed_units = 124U;
    msg.syringe0 = 149U;
    msg.syringe1 = 136U;
    msg.syringe2 = 113U;
    msg.custom.assign("TYZEGQVLUOSXEWWGMJQYFLHKHNQRKXRWLZRCLGOAWILSTGSGCJAZOWFWGAYLBZRPEZEYHCOBHNCM");

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
    msg.setTimeStamp(0.855963122586);
    msg.setSource(927U);
    msg.setSourceEntity(63U);
    msg.setDestination(63891U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.145450958369);
    msg.setSource(12299U);
    msg.setSourceEntity(212U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.53808460145);
    msg.setSource(42551U);
    msg.setSourceEntity(193U);
    msg.setDestination(9030U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.852023037632);
    msg.setSource(53776U);
    msg.setSourceEntity(217U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.942783101273;
    msg.lon = 0.402254705401;
    msg.z = 0.645025186122;
    msg.z_units = 226U;
    msg.speed = 0.0962775447615;
    msg.speed_units = 185U;
    msg.takeoff_pitch = 0.516295777307;
    msg.custom.assign("FYCJANEDTGREQSWQVKVMLQRHCNBBJMSEUSPIUUUKWZOTRSMIZSX");

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
    msg.setTimeStamp(0.433492672793);
    msg.setSource(26520U);
    msg.setSourceEntity(194U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.657489701469;
    msg.lon = 0.0508979587008;
    msg.z = 0.429319857528;
    msg.z_units = 155U;
    msg.speed = 0.325721543303;
    msg.speed_units = 126U;
    msg.takeoff_pitch = 0.497148618698;
    msg.custom.assign("GAOTLLEPHIOAGJVYSAGMILJJVAAGXZUFHBSSYUKRONBBWKEXHVDKEYSZBIIAXZNCZTKIWCSGHNYJSM");

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
    msg.setTimeStamp(0.421535823111);
    msg.setSource(50679U);
    msg.setSourceEntity(209U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.975226275035;
    msg.lon = 0.0131458326047;
    msg.z = 0.0375769222841;
    msg.z_units = 72U;
    msg.speed = 0.975420616955;
    msg.speed_units = 213U;
    msg.takeoff_pitch = 0.734612174635;
    msg.custom.assign("DJDAEOAKGQRVSWLHBRGULZKMAPTSSNGUMEWDGZMXLJVTQZYRGHSWSOBABDDKVAVJSIDVLWPMJCWKPXAQFSQRDFJGINHXTNYCYHEKGODLDBZJTRBGCXNZOUOYFQ");

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
    msg.setTimeStamp(0.124876513585);
    msg.setSource(30173U);
    msg.setSourceEntity(57U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.706114502931;
    msg.lon = 0.849358678007;
    msg.z = 0.154460036178;
    msg.z_units = 84U;
    msg.speed = 0.8360864847;
    msg.speed_units = 189U;
    msg.abort_z = 0.341738170662;
    msg.bearing = 0.665763054479;
    msg.glide_slope = 179U;
    msg.glide_slope_alt = 0.853045426785;
    msg.custom.assign("CCBKGFRBPLASUWWYLFZMNFFSCAWGLMXDOOJMQVREEMKGTOOMHDTZVDVHSWKUCXHZMWTRTRADMIGQQBWABXQXRNOXLROTTOEUQDKQNSMKTGNVJHAKOUCVPLJEYHUCXCZJNCSVJPNIUGYLDZIYYDWHPIWEPCYEZRPJLMTSIZFNANXNYSYBPLHU");

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
    msg.setTimeStamp(0.191096302381);
    msg.setSource(6313U);
    msg.setSourceEntity(45U);
    msg.setDestination(16335U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.35812653231;
    msg.lon = 0.391259321406;
    msg.z = 0.90087184281;
    msg.z_units = 161U;
    msg.speed = 0.552813384918;
    msg.speed_units = 55U;
    msg.abort_z = 0.463986453098;
    msg.bearing = 0.142359181992;
    msg.glide_slope = 253U;
    msg.glide_slope_alt = 0.416777675885;
    msg.custom.assign("DEPNKMYEQOUEUEWTNSSIYXKGRXZLHZTXGWCUWPDKBORSBPKZCFTUQFMIPIWFVMCVGDTAJLTYYQAVYQZXZNVCNULAPMBZPKJOKFSRJXGVYBSBRBNHZIZGDCVWHHWLSIOHCSEQGTFLIHVFSLEDLFGGEPFDUXRPXMXMPJFURCMTNHNMXQYAILOJQJYDSFYVEPWKRRDXQBTAMWHNBVEIOWBT");

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
    msg.setTimeStamp(0.0256854332864);
    msg.setSource(46399U);
    msg.setSourceEntity(49U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.397565587784;
    msg.lon = 0.560975118008;
    msg.z = 0.321452000345;
    msg.z_units = 232U;
    msg.speed = 0.595437384495;
    msg.speed_units = 186U;
    msg.abort_z = 0.801489883149;
    msg.bearing = 0.983571185426;
    msg.glide_slope = 248U;
    msg.glide_slope_alt = 0.244858133219;
    msg.custom.assign("MJRHGWJPNRDFSQJKZPYFOITBYXKGEMFWUXVOKEZHPKNZBBZZVKDPREDWJWRHHLKGKALTYFYJWPEBJUTEXLUORMGYDBQDGVNPYRXPMOQICUAOGFAJSTIDVLQLNSTBAEGJBAXMYNJZVHVZCHBDUFNPWTMGLWKCCEAELKFMFTZSKI");

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
    msg.setTimeStamp(0.966180760822);
    msg.setSource(50529U);
    msg.setSourceEntity(128U);
    msg.setDestination(14717U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.735354902111;
    msg.lon = 0.996913554695;
    msg.speed = 0.606952412827;
    msg.speed_units = 97U;
    msg.limits = 246U;
    msg.max_depth = 0.907966118599;
    msg.min_alt = 0.468395769993;
    msg.time_limit = 0.931279754942;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.652352405521;
    tmp_msg_0.lon = 0.804959130851;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KCSZKHIPBTILFXMBHMZKSH");
    msg.custom.assign("JNGCSELGZIJVGAMMIHOTBYVWOCKIEMKKXTMCUPSASCYFGBLAOAGXYAJNEHVIZJJMLFUYYIRMVABQW");

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
    msg.setTimeStamp(0.426200989232);
    msg.setSource(43561U);
    msg.setSourceEntity(253U);
    msg.setDestination(29426U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.16744529795;
    msg.lon = 0.154846939721;
    msg.speed = 0.692094141307;
    msg.speed_units = 84U;
    msg.limits = 211U;
    msg.max_depth = 0.537086822824;
    msg.min_alt = 0.779405093177;
    msg.time_limit = 0.0715757579817;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04607867324;
    tmp_msg_0.lon = 0.889044296706;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YANKZVSTGRMGFRISGCDYPGVHGPLZWXMIBPCNHDAUADELKWJPTXVWCIYOXUURQKLJYRFTB");
    msg.custom.assign("WHUNEIQFSAFLVJHGMXRAVLQCQKPITGJDCNLZJGKHWZDKXQAQCLJPLEIQNWXRBAOOKPTGDDLYFHEGBABUSIURWETNPOSALFOGXWPZSDYMZBRQHIUFOMPKCJONYEWJCTJGZYKKEFLUCJOTBTZDGZYUBYVESVMNQKEZMFRTCLXJXOOINRYYBSDUMABPUXIPHWPVFSSHMNVCGMTHADGXQHATYWF");

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
    msg.setTimeStamp(0.687000685454);
    msg.setSource(16128U);
    msg.setSourceEntity(87U);
    msg.setDestination(19452U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.556367770197;
    msg.lon = 0.917071398412;
    msg.speed = 0.778046870489;
    msg.speed_units = 88U;
    msg.limits = 9U;
    msg.max_depth = 0.70316753636;
    msg.min_alt = 0.320087819929;
    msg.time_limit = 0.776327525615;
    msg.controller.assign("JYBYCQSSGAVXLNFFWFSUUAOOXGYYJBBQUHCQVEGZAEYAUCEX");
    msg.custom.assign("HIUJFUNCHOYNOCMNYZWJYKVFRCLTJIUICHXKDKNYPGXKKFV");

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
    msg.setTimeStamp(0.41852133165);
    msg.setSource(27931U);
    msg.setSourceEntity(29U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(146U);
    msg.target.assign("APMKTGJJGTAHXKOPQPLYVEQGZGXSBCBISJEYMWBQRXGMCXHKRHAIBVVNYOXYUIQVBEECJNCIWHXGLDRIXTJEFKRZKOHTRPFRCZRRZKZSBMONVSBCLWJFGFRMAWDJNUDDISLHOSNUUDFTXTMVKNTYUXGPDSLGIICDHEAHOMFPCQD");
    msg.max_speed = 0.789257483848;
    msg.speed_units = 18U;
    msg.lat = 0.758096245434;
    msg.lon = 0.793140274947;
    msg.z = 0.43549927061;
    msg.z_units = 175U;
    msg.custom.assign("FLLKYYTESNMMZMJDUQHGWNDCGSBVOBHXRVCPVTUMPISRKIFVKCCDBLULRLQMYHVMOPYNQSCXAPULAZCFVTZPEORFWTRFBHYWPIEOFLWKDEMYJDFUUGJJNSVKPYJEKOMGBIMUWIAZXGBJSDFQZHAXUSQKIOSBCJVDIHNXYUTWGERZOQXIMRPAQXJAWBZR");

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
    msg.setTimeStamp(0.932687362779);
    msg.setSource(29019U);
    msg.setSourceEntity(235U);
    msg.setDestination(53243U);
    msg.setDestinationEntity(40U);
    msg.target.assign("UHPVGLJZAJQXTEDTDMAIUXHYWHVMYFKOEBTDSWKFTYCTKBPKYKXBIMYCFYLHVWFEEGRDHSGAQWMSNQVOIFZNJXXQJUMPDQWZRFETLYLWQDVOWDVSWIFNIZGQBCCKSOHPNVZUNSBCBZLGCVTJIDACJECKBXPOMAOATWFHNPPSBFRCUQLMNUDDJEVGKMXXATGGEUGZPFLRMIOTAREINXLARKBSOUEMXZHRNOWHPVUZUNJ");
    msg.max_speed = 0.344938186871;
    msg.speed_units = 0U;
    msg.lat = 0.922077590837;
    msg.lon = 0.787162022342;
    msg.z = 0.122170455302;
    msg.z_units = 173U;
    msg.custom.assign("OETNGLHCSSTWWIZKXJAERDUEBDNQFHTCQXFEIHWMRLFJPEJ");

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
    msg.setTimeStamp(0.534456674863);
    msg.setSource(29573U);
    msg.setSourceEntity(25U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(218U);
    msg.target.assign("ZVWFKLASNQHNYGNKLFRLBZYZEAKAMGOMCIKXIIKDDWUEYXUPLCNQQEDQVUCGWUVPKUYNXBYTCEFLQAHERSZGGBBBOPIPMOOHDYKMLCRIQMHVIWUECSWXZTIKHJOMPFVSPJXDVTS");
    msg.max_speed = 0.769596267843;
    msg.speed_units = 130U;
    msg.lat = 0.331612435598;
    msg.lon = 0.780286358843;
    msg.z = 0.427231632635;
    msg.z_units = 224U;
    msg.custom.assign("SSYZMSCPWMVNBJCYFJFLAHMZQAFMOWIIMOFWIVIFNKEZTIGNJVCNQVWDZMYROLTXEDWJMUUDQDXCEKGHHAHWTOBQCSKBGXDZOEZGFYILPKOXUYGHYYZBOQEBFAKZEXSTSNUKECLSKXUBSHFQTYLDZUXGPUJ");

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
    IMC::Alignment msg;
    msg.setTimeStamp(0.279747078716);
    msg.setSource(36414U);
    msg.setSourceEntity(110U);
    msg.setDestination(57174U);
    msg.setDestinationEntity(46U);
    msg.timeout = 10267U;
    msg.lat = 0.244876737789;
    msg.lon = 0.357767864609;
    msg.speed = 0.76627110166;
    msg.speed_units = 80U;
    msg.custom.assign("QDRSACJUPSHUBSLLWKYUOJNOJGBCEWUHYPYKKGLKCIMMDHBGKOMVYNESQRQBINPHLUKKMROUDUZBWGFLAFVVWWZUTTGEDZGECUQWMZDASTACLQMICCFJJJPQRIEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.645579407147);
    msg.setSource(1768U);
    msg.setSourceEntity(115U);
    msg.setDestination(43931U);
    msg.setDestinationEntity(253U);
    msg.timeout = 8231U;
    msg.lat = 0.0716003417504;
    msg.lon = 0.994052413793;
    msg.speed = 0.830168918021;
    msg.speed_units = 200U;
    msg.custom.assign("FMBQZDOXKCMYPYRXAMHNGWVCKSLZFFRFOAKAMJAGQYPQDDSLABURUSYJOWBZUWGSYQBOXXHYTTKXGVQEDIVUPNEGCHWJZRCDDMRJAHMGNSEKFQOIDUSRPTILJXHJTSVVQEFFFZXCSAGQEZAUNNOKRTTCUCKNJIEEWTCDBNFLHWXWYQWRRPZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.172972646884);
    msg.setSource(48915U);
    msg.setSourceEntity(34U);
    msg.setDestination(28520U);
    msg.setDestinationEntity(17U);
    msg.timeout = 46276U;
    msg.lat = 0.462796586424;
    msg.lon = 0.731939839386;
    msg.speed = 0.733820135341;
    msg.speed_units = 243U;
    msg.custom.assign("UBLBEFFBHEWWQRTVRWRKANGMVZILLRXEAMXSCFUKHWPDQWCNOXCJHRCTGCCRHOGHOVSZXIUFYNBWMNPABKEIPZQVQSHAWPBAPEJPKMXYSJUVJUQJMGXJKZOPCFLHXIICNPYPZHTSTLBUYMAOLFJGIDBMQEDASJJDEBSRDRQLYKHNERFFUOULHMZIFZKOYOGMFCNBYUXANTOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.853907306978);
    msg.setSource(24746U);
    msg.setSourceEntity(49U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.361546131077;
    msg.lon = 0.456437260075;
    msg.z = 0.503214533869;
    msg.z_units = 239U;
    msg.radius = 0.312503272903;
    msg.duration = 1353U;
    msg.speed = 0.465371694071;
    msg.speed_units = 13U;
    msg.popup_period = 16055U;
    msg.popup_duration = 17416U;
    msg.flags = 146U;
    msg.custom.assign("GCMRWDCQIRTUITGKRTALAPTYZFUIBBRJHNBFWIUFKGXQVIJBABNCXBARASPQIHMCNWJOYQMDDLXGOPXCJOUHFLTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.8555066282);
    msg.setSource(52396U);
    msg.setSourceEntity(160U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.759316309356;
    msg.lon = 0.627493586367;
    msg.z = 0.0141121392018;
    msg.z_units = 57U;
    msg.radius = 0.154416254067;
    msg.duration = 39843U;
    msg.speed = 0.151315542768;
    msg.speed_units = 254U;
    msg.popup_period = 47476U;
    msg.popup_duration = 46602U;
    msg.flags = 51U;
    msg.custom.assign("OUGUXGIDMHIPASJKVQJXFHSTQLANOADHLTKNESVWAZKBZBVQJOHFUSXIIEMBJYHVSYVGNVPITSWOWKEWRMPFBBMWDHMOTAIYWGCPYFZDHUDGULCZXRCNKJCETOQBNBGXDSDXZCDMROMJQLZKAQMYJZFPTSPHDERYEFCOAIAQWJBYIGTBPVZVXYOTANCDYJFKNKVAMGCQELZEQXUFWPNESIGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.0884374097933);
    msg.setSource(3298U);
    msg.setSourceEntity(57U);
    msg.setDestination(8933U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.288570472029;
    msg.lon = 0.66485891858;
    msg.z = 0.345802595789;
    msg.z_units = 74U;
    msg.radius = 0.300526616714;
    msg.duration = 22337U;
    msg.speed = 0.841499315285;
    msg.speed_units = 20U;
    msg.popup_period = 2231U;
    msg.popup_duration = 19021U;
    msg.flags = 67U;
    msg.custom.assign("IGDJMHNFBEKQEVHGGTPYNEUGJPXPTRBMLEAHGYISQMBRDWQYXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.282856467449);
    msg.setSource(62468U);
    msg.setSourceEntity(214U);
    msg.setDestination(23865U);
    msg.setDestinationEntity(22U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.886597352054);
    msg.setSource(9476U);
    msg.setSourceEntity(243U);
    msg.setDestination(19859U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.601192676805);
    msg.setSource(29873U);
    msg.setSourceEntity(211U);
    msg.setDestination(13026U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.0802717560638);
    msg.setSource(26228U);
    msg.setSourceEntity(128U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(19U);
    msg.timeout = 26732U;
    msg.lat = 0.0279099214044;
    msg.lon = 0.716576409062;
    msg.z = 0.943918723198;
    msg.z_units = 201U;
    msg.speed = 0.394489616068;
    msg.speed_units = 123U;
    msg.bearing = 0.0103453575208;
    msg.width = 0.185750300986;
    msg.direction = 79U;
    msg.custom.assign("ZMCGEJOSWEOPVQEODILVDYBIGZDBUSRMPUIWULQKXVVRLQAYOINLAYTMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.798588657356);
    msg.setSource(24027U);
    msg.setSourceEntity(170U);
    msg.setDestination(10651U);
    msg.setDestinationEntity(116U);
    msg.timeout = 52328U;
    msg.lat = 0.711709910586;
    msg.lon = 0.990967019637;
    msg.z = 0.256789504311;
    msg.z_units = 161U;
    msg.speed = 0.310367789203;
    msg.speed_units = 209U;
    msg.bearing = 0.101831460213;
    msg.width = 0.0589107426883;
    msg.direction = 236U;
    msg.custom.assign("OSUKJLXSJEYWKDKDIIDAAIDYCEMQFYWYHBVGSXHBVERSRXSNNTUZLZJGHTHSNJNPLIXZTKZFXQWXYRHACABQWQTCVGRTZFCOWLGUVPTVURXPOMUFQWGMQSJDMJBRPUTODPWLMAUGXBAJYBZBEJIEIEMIVYHCCQTRZBCGGKAFFYCLONUVYIKIQOZSWIROBRMZNHMLASWUBVHKKHAJCKPLFFMDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.337179366692);
    msg.setSource(864U);
    msg.setSourceEntity(205U);
    msg.setDestination(10585U);
    msg.setDestinationEntity(229U);
    msg.timeout = 20270U;
    msg.lat = 0.93597790153;
    msg.lon = 0.677651695886;
    msg.z = 0.249980040151;
    msg.z_units = 177U;
    msg.speed = 0.384346984561;
    msg.speed_units = 179U;
    msg.bearing = 0.856039810481;
    msg.width = 0.33060673057;
    msg.direction = 243U;
    msg.custom.assign("CTGPOVHCRTPGRFNWHDLFKBRHKPTAUFYJMWIEQMFGEYSVOULRECDKWSXSJZUNLFXYMTCRNQKSQNCOLAEUMJWCSDRFZGIVMQHWWJEPZVEZOEQRHABDKIKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0365584214147);
    msg.setSource(12182U);
    msg.setSourceEntity(74U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(232U);
    msg.op_mode = 104U;
    msg.error_count = 69U;
    msg.error_ents.assign("OIAYKXFLIXYLIDSJIOWOPRCLXPEPROERFDPCSUEHWNBYAYLCFDGXZKTDUUUNYANOBDYCZEJALNIHIMBXHLOZMLNEHIEFWJQDTEGKNQGWZHJNCKXEWMVQREUGHVBZJJDYRROTVHTCAKBLPZMZYWFKYPFPGUQZBM");
    msg.maneuver_type = 27741U;
    msg.maneuver_stime = 0.348738071286;
    msg.maneuver_eta = 1557U;
    msg.control_loops = 3260987893U;
    msg.flags = 169U;
    msg.last_error.assign("OJGEFUUURXTSTMLEOGCQRIYZPDRZEFDOFQWBGIMLAQYOPZAGRUSHHKATADQEHXAPKDCXHFJJCIXXLNHYYCLYQPVWWORKDAKHVHAICLM");
    msg.last_error_time = 0.320093973169;

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
    msg.setTimeStamp(0.737497432663);
    msg.setSource(24116U);
    msg.setSourceEntity(149U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(27U);
    msg.op_mode = 101U;
    msg.error_count = 108U;
    msg.error_ents.assign("HJYRKMCBGGEQLQZCAMDFARCTQSQPVAXDOIWDLRFUWVZJIVUEKRLSYRPIP");
    msg.maneuver_type = 46753U;
    msg.maneuver_stime = 0.839590101046;
    msg.maneuver_eta = 3978U;
    msg.control_loops = 2970323524U;
    msg.flags = 185U;
    msg.last_error.assign("LQOEOVQSUOAEVYJAXAMJAHDTTOQWDQPSEJJVNZSGSXRQZGUHYNYKRAFTVAYWXPNIPXCHYQRUPFEMGJDNFZGOEPDCNTIDUPHLYRZVIQGMBCSCUHISIUTVOLZGAKXCLUVKTKJKBNYMZUFSKPNWDMBZGEACDOTNNWQXRLFMBOGEMBCBZERMKMSZWKTODZIRBVGGHRRAWIWWQDBUEDXSH");
    msg.last_error_time = 0.012765409271;

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
    msg.setTimeStamp(0.62827062918);
    msg.setSource(55406U);
    msg.setSourceEntity(223U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(23U);
    msg.op_mode = 183U;
    msg.error_count = 150U;
    msg.error_ents.assign("EZSRUCMDSWIHZRDOADIXXPUPQLRZUCNWNFEOTLMDKTGGQBYYQODUVNWEJDZVSXVWANROUKCTFUQPELJOAJWMUJHYZIBYOXJRZLMCGCVQFEGWMTGSZANIGYATAJDXIKCYOAYEZPPWQIUPBSFVKBBSXEKVRVF");
    msg.maneuver_type = 31388U;
    msg.maneuver_stime = 0.701219622232;
    msg.maneuver_eta = 60620U;
    msg.control_loops = 429290313U;
    msg.flags = 227U;
    msg.last_error.assign("UXIQIYPZFGYKDPFYVXOWBLYMNGEPHZTLUJNYUPGVMTSEGEFYUHXWYNBYQJBODCREOWDTDSNUXYPYUOCCSVXQMURVODDNKBTZSCOATASGIDIP");
    msg.last_error_time = 0.930694887776;

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
    msg.setTimeStamp(0.66322761274);
    msg.setSource(30127U);
    msg.setSourceEntity(203U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(93U);
    msg.type = 220U;
    msg.request_id = 18216U;
    msg.command = 133U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 57690U;
    tmp_msg_0.lat = 0.0846868662903;
    tmp_msg_0.lon = 0.705807326854;
    tmp_msg_0.z = 0.642612966015;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.465696387846;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.syringe0 = 173U;
    tmp_msg_0.syringe1 = 43U;
    tmp_msg_0.syringe2 = 45U;
    tmp_msg_0.custom.assign("YFAHOPZIIYQKYCTBUVDMDRMKKNYDFQLLZGBKHRUJRUAVNXPEFTYHRFYHZNGBQUCYOOSSNEJTTCIGMANZXCVOEXPHJPPMFZEDLWGJSWGMFKJYWBRGTSDOXCNUIUSLUIISMCUWZBQRLRJKXWG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10847U;
    msg.info.assign("RAJSWHODSNJBNNKAGNWYLRIUHFQRSDICKPXKZQGOGGEVPBSIOTCTWZSDGQAKCPHBGJPGVKMMTYITXEEOFSZMITQXOUJEEKYVPBMHLA");

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
    msg.setTimeStamp(0.625759353306);
    msg.setSource(36736U);
    msg.setSourceEntity(155U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(102U);
    msg.type = 159U;
    msg.request_id = 43409U;
    msg.command = 198U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 963U;
    tmp_msg_0.lat = 0.872549863644;
    tmp_msg_0.lon = 0.865697308333;
    tmp_msg_0.z = 0.141580686455;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.70664799953;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.roll = 0.705138712285;
    tmp_msg_0.pitch = 0.517286594413;
    tmp_msg_0.yaw = 0.643483153964;
    tmp_msg_0.custom.assign("CYLFJPTSVQFKJGNBXEHAVQUPZDLNQTYOWPWBWGGYVUZSREIEWDLOOMTPNUVCPCSIAXHZXUMRTRLELGRRTDGTQVYTDIIYCMKSLJCECYECKX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6859U;
    msg.info.assign("JSCGDUCQGMNUPWQPKVYWSUYTIRQOXWSTYQEVIPJFZRDDGYCKTHIZNYQTXOJFXVFMGGNMMWUANKQOBOHSTRSFPOQKVVJXFIUJOLWXLAHAAMSLVMFPCEBHBWFTUDUZRZKLHUMVNLJSZHQNWGORIZRYAFCCQRZEGKBHUCLXWYSNIVXJHIBHEAJGLXKMEPRPDBTBZBSFDEZEESDNOBHXBENOMR");

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
    msg.setTimeStamp(0.0637985349622);
    msg.setSource(29532U);
    msg.setSourceEntity(215U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(158U);
    msg.type = 146U;
    msg.request_id = 11711U;
    msg.command = 202U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 42330U;
    tmp_msg_0.lat = 0.950390354376;
    tmp_msg_0.lon = 0.498154168252;
    tmp_msg_0.z = 0.798911173302;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.145938426677;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.custom.assign("JUNFSSZBERVHHDHCIIFDTGKWJESOOREAGEMIOPAZLRNZKTKIEKRFGBYLDEQIZLPDJWAURGCSQBMMRGTHOFJUKGWNVORQYLPWSCXQNROHDUTAXPEOLQGZKNTFYUNZXDLPXLMXHVEHXWMBMWEVSYCDBAFDXVBZWZJBSPPVLUVUNAIKWKWETZJXAGCGXZC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53518U;
    msg.info.assign("XBCEXEWIQHOMZGPKLWNBPIISMLFPOIDFUWILWHHJFNZBWCDCBYANGALORVAAGSTQUUIQCODSDIKNYRQGVUTLEOJBNXKOZZJDNXTELHGFWRKVXPNLKXYKLWFUTVPFTSHDZTCSYYLVKXQOZSDQJSL");

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
    msg.setTimeStamp(0.221426845908);
    msg.setSource(35729U);
    msg.setSourceEntity(235U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(64U);
    msg.command = 69U;
    msg.entities.assign("IIWUCJMLGNIBXSFZFWWIYDDAFJBOTNDFEQPLLFAGSVPDEHAMGZZWECMSXMDQNUHYTACQZRRWNYHEQBGQGOGKVCRBZTSZCKQNMBHIGUJHFUQYCWQCPNOPV");

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
    msg.setTimeStamp(0.981470834316);
    msg.setSource(49305U);
    msg.setSourceEntity(136U);
    msg.setDestination(17340U);
    msg.setDestinationEntity(75U);
    msg.command = 158U;
    msg.entities.assign("NXGELDQSVZUPCAMYJQZCSVVJPSFDPSVOYKBPQAZYAJTFAKTZODAFXIHRLHCUJSZJERRMZDUWQGHVTFXEIYJSLUZYURVNCLBBCCCNGGHBLNAKJUMKMAGCTRIINODKMTSTMSDYDXIILXYFWTRWFZOWUYBHRXAPWHVGXORZVPLROMFEMKHXNYWDTQFEBHNDZKBTIPLYLIMNKUFQGQJO");

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
    msg.setTimeStamp(0.739096953914);
    msg.setSource(42228U);
    msg.setSourceEntity(175U);
    msg.setDestination(61956U);
    msg.setDestinationEntity(119U);
    msg.command = 90U;
    msg.entities.assign("NJZPGRVJVNLKPEFSGJKBBHLCOCLWDTCGHGZDIXCNACFZKDSVISXTCRNQVAEWBLBNXZREMZQIMJDRKHFSQYVBQSDAUPPOREBXFLCYWASMVWCTWKQ");

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
    msg.setTimeStamp(0.529497843742);
    msg.setSource(15593U);
    msg.setSourceEntity(8U);
    msg.setDestination(25729U);
    msg.setDestinationEntity(229U);
    msg.mcount = 201U;
    msg.mnames.assign("JDOYVBPXUTHCJAKVWFHZAADASDG");
    msg.ecount = 204U;
    msg.enames.assign("VAMSRMRGRVLLLEKZNZBYOQOIIXXHDCNMEITLYGBJMBJHVVQXZZKPTZDKFFIARYLDDPQWYOHVRJCQKICNEUBNHPTUIDZRUXACYOPWTTEAJTMSVQSAGXFSFZSGELXDBCRHLEUIGVUCFXBPAYTODJFIPZSULWMWQFKYYTHQUCEIDGYZHOSPPQNSGVAEFRXGOCCMWEHWKRWUKURBGEASLN");
    msg.ccount = 184U;
    msg.cnames.assign("PTWBCVRWSTDJCDHFGXKHUDAGBEYYIUUZQLXKNMOWIXRCRXJFTPVAEOVFBONQYSBBWPDXXLUJMZROVLJDAZFEUBUKZFECKPPG");
    msg.last_error.assign("CIVRSUZJUXVDUMLABXGDSOMJNYZDDRYPQRIDLFBTGXFCSDBYFYHAQWZDIRTGXMURMKWKGYVGSLONSQZUSMKOKHPMBICEEAIVHURAHLKBOTNAIUYTWYECPNWPF");
    msg.last_error_time = 0.318391857392;

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
    msg.setTimeStamp(0.266614522808);
    msg.setSource(48595U);
    msg.setSourceEntity(161U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(137U);
    msg.mcount = 220U;
    msg.mnames.assign("LTBIDOXKTETXRQCNOKRZOKSACCYZXSOADOOGYWWCAICMRXWMUFUSWWTHLMZFKUFQPKVQDZMBJVQPYTASFSAPTLHQAGPANLBUZKEUTBJNXWJIRGJVVZEBYDOVQWNPGQGGBLKJARWCTDLYMRKYRITZDORXNAGYFISXZSCOINXQXISPNEYJHFJZLBBFPGLEMPBHIEIKCRJOHSGMUYVKFUMBWSRVJMYCDLTDJ");
    msg.ecount = 72U;
    msg.enames.assign("LVLQTNPDOKLAEXAQKTQKIOZEZRSYMJNUUXOYYAIJCTGMOGMFIUMZRGCYAIXBPMCZSHYLFATJHWZTNPPLFOYRWGESDWFYTYFSUKKVIPGRNUJDYMBYCFNAPDDWFUMSNQWGVIGBHEJNRABLWV");
    msg.ccount = 241U;
    msg.cnames.assign("XOIOKKRVEOOBXJLDZCJTADNLLNPMUDMONUVYMVYSPNUCCBAHFZRCVSTHGLQFQDWKHEEYEWJEHZGFIKOVXLXEFGOXWNEHQTAHSKWMPTFQHYALCUTORPXTNGTNCSCDRYJYFRECZVGAHZRIBAGWQJGLXIMIRQJGDZSANYVMHW");
    msg.last_error.assign("EFGBAMABGENHVPTPNEWKZJH");
    msg.last_error_time = 0.0254585926767;

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
    msg.setTimeStamp(0.360835717735);
    msg.setSource(43925U);
    msg.setSourceEntity(71U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(49U);
    msg.mcount = 89U;
    msg.mnames.assign("VVOMQPFMITFLKGZXKNBMWZARAOLFAKMTOMCJKKVVAECAHSWMENLZTGGYPLCJBUOTFCGKNKYJZHCGHUKRZVWDREXLSGHCHTONTRLXZXQZIYJISPDYLJSWA");
    msg.ecount = 26U;
    msg.enames.assign("EZSYFSTURXIUXAGMMROOSKMBZURCVHILVELWGDOUKFLHTESERVKAPBACKEZKDVDMYWZNNDPAFWNWWNHIIIPKEDJVYIYRBHONCJELENLTMFDDGAZWMHFTCUSHZCSJVYQBXHEN");
    msg.ccount = 235U;
    msg.cnames.assign("DCFWHTASEFJELZKYKAVZKVMOHECWMOXYPQWSOMQMANIJQFZIPNYVBQRKRTECEUAETHWDTBGYHJAIJL");
    msg.last_error.assign("OEMZKAXXZGPHWWQSJWCPMZISBVJZERSQNIDAUNNVHFPYSXRZANXDSMHUFQJCWAXXODSPYYZPVCKIRDBQJYYPIKYMLOJEMFJTJXTLAGCMWEMBRGQC");
    msg.last_error_time = 0.0828747017017;

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
    msg.setTimeStamp(0.841274313667);
    msg.setSource(5160U);
    msg.setSourceEntity(38U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(201U);
    msg.mask = 111U;
    msg.max_depth = 0.116992268307;
    msg.min_altitude = 0.224277943707;
    msg.max_altitude = 0.639080569085;
    msg.min_speed = 0.586626482771;
    msg.max_speed = 0.499217635264;
    msg.max_vrate = 0.662523022217;
    msg.lat = 0.619022435984;
    msg.lon = 0.132506723998;
    msg.orientation = 0.544493701807;
    msg.width = 0.618625033913;
    msg.length = 0.196691286836;

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
    msg.setTimeStamp(0.063940853535);
    msg.setSource(49808U);
    msg.setSourceEntity(54U);
    msg.setDestination(42734U);
    msg.setDestinationEntity(48U);
    msg.mask = 180U;
    msg.max_depth = 0.891901843641;
    msg.min_altitude = 0.879842040259;
    msg.max_altitude = 0.511292328651;
    msg.min_speed = 0.996638096211;
    msg.max_speed = 0.122040730035;
    msg.max_vrate = 0.548208934213;
    msg.lat = 0.252784309911;
    msg.lon = 0.261319104746;
    msg.orientation = 0.345331033571;
    msg.width = 0.338846939023;
    msg.length = 0.138152963896;

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
    msg.setTimeStamp(0.885640042043);
    msg.setSource(65007U);
    msg.setSourceEntity(14U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(97U);
    msg.mask = 176U;
    msg.max_depth = 0.210087736977;
    msg.min_altitude = 0.0846851343652;
    msg.max_altitude = 0.210819520999;
    msg.min_speed = 0.273936871555;
    msg.max_speed = 0.967693651962;
    msg.max_vrate = 0.442883834676;
    msg.lat = 0.38078550267;
    msg.lon = 0.862506949594;
    msg.orientation = 0.386432124097;
    msg.width = 0.760037306662;
    msg.length = 0.303028747818;

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
    msg.setTimeStamp(0.115846611166);
    msg.setSource(57930U);
    msg.setSourceEntity(167U);
    msg.setDestination(25061U);
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
    msg.setTimeStamp(0.939973105351);
    msg.setSource(9746U);
    msg.setSourceEntity(173U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.138318361325);
    msg.setSource(21191U);
    msg.setSourceEntity(179U);
    msg.setDestination(25614U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.585999048136);
    msg.setSource(18547U);
    msg.setSourceEntity(208U);
    msg.setDestination(2770U);
    msg.setDestinationEntity(227U);
    msg.duration = 21071U;

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
    msg.setTimeStamp(0.0041853699129);
    msg.setSource(28113U);
    msg.setSourceEntity(94U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(176U);
    msg.duration = 15074U;

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
    msg.setTimeStamp(0.580898091176);
    msg.setSource(31640U);
    msg.setSourceEntity(253U);
    msg.setDestination(8261U);
    msg.setDestinationEntity(78U);
    msg.duration = 31355U;

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
    msg.setTimeStamp(0.847043964867);
    msg.setSource(32394U);
    msg.setSourceEntity(84U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(183U);
    msg.enable = 36U;
    msg.mask = 2581419991U;
    msg.scope_ref = 4117435512U;

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
    msg.setTimeStamp(0.299308978706);
    msg.setSource(43887U);
    msg.setSourceEntity(52U);
    msg.setDestination(2897U);
    msg.setDestinationEntity(198U);
    msg.enable = 97U;
    msg.mask = 3775622079U;
    msg.scope_ref = 455756966U;

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
    msg.setTimeStamp(0.62383067996);
    msg.setSource(14712U);
    msg.setSourceEntity(28U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(207U);
    msg.enable = 200U;
    msg.mask = 2807673144U;
    msg.scope_ref = 1779898225U;

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
    msg.setTimeStamp(0.221148372976);
    msg.setSource(11596U);
    msg.setSourceEntity(231U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(252U);
    msg.medium = 114U;

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
    msg.setTimeStamp(0.296131422711);
    msg.setSource(25546U);
    msg.setSourceEntity(21U);
    msg.setDestination(36685U);
    msg.setDestinationEntity(93U);
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
    msg.setTimeStamp(0.895136804481);
    msg.setSource(43349U);
    msg.setSourceEntity(95U);
    msg.setDestination(23466U);
    msg.setDestinationEntity(123U);
    msg.medium = 131U;

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
    msg.setTimeStamp(0.268009617489);
    msg.setSource(60911U);
    msg.setSourceEntity(237U);
    msg.setDestination(36974U);
    msg.setDestinationEntity(1U);
    msg.value = 0.523718189966;
    msg.type = 85U;

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
    msg.setTimeStamp(0.605387814426);
    msg.setSource(49711U);
    msg.setSourceEntity(70U);
    msg.setDestination(5679U);
    msg.setDestinationEntity(69U);
    msg.value = 0.602580597817;
    msg.type = 10U;

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
    msg.setTimeStamp(0.537675906088);
    msg.setSource(37091U);
    msg.setSourceEntity(4U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(250U);
    msg.value = 0.685911370829;
    msg.type = 227U;

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
    msg.setTimeStamp(0.0179160114959);
    msg.setSource(366U);
    msg.setSourceEntity(121U);
    msg.setDestination(52258U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.478853719099;
    msg.converg = 0.618340529961;
    msg.turbulence = 0.721616767776;
    msg.possimmon = 159U;
    msg.commmon = 104U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.189006747467);
    msg.setSource(37441U);
    msg.setSourceEntity(15U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(191U);
    msg.possimerr = 0.208356405546;
    msg.converg = 0.214715588282;
    msg.turbulence = 0.452397379397;
    msg.possimmon = 28U;
    msg.commmon = 145U;
    msg.convergmon = 98U;

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
    msg.setTimeStamp(0.459872818861);
    msg.setSource(24890U);
    msg.setSourceEntity(86U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(200U);
    msg.possimerr = 0.430132253398;
    msg.converg = 0.985901640135;
    msg.turbulence = 0.965445824675;
    msg.possimmon = 200U;
    msg.commmon = 58U;
    msg.convergmon = 137U;

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
    msg.setTimeStamp(0.709476254132);
    msg.setSource(54529U);
    msg.setSourceEntity(144U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(144U);
    msg.autonomy = 134U;
    msg.mode.assign("CUXRFUEOBLWKHUAZDXPODJYGJRITVTTZHOPDPDCAMPWMHGGNGNBYLUSLSEOFWPEZADTGKEPAAEESNZCVSQTFLOUYXWMFZKLPQQOMVFBHETICCEMAEZJNOUDIWXJVICVBQAQYMJVBDHZFARWCCSGRYOLASIHNGRYPJMVKOSUDYKSTGUULYIXNUFNKIBMBNLKZCWYBRQXDVWJMXZFXEXJKVGGIFJCOAFKVRHHWTITBJLNBDPZXHQKPLMSWQI");

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
    msg.setTimeStamp(0.521790148851);
    msg.setSource(51208U);
    msg.setSourceEntity(21U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(0U);
    msg.autonomy = 22U;
    msg.mode.assign("HVQLUREBYFRTAKJLCEKOIEONMHNJQERRKWNDKYLWCMBTOXHCONOGBFPVVWJPTDBFUUNACJGALSYSLKWLGDGDEMPGPUUSCMFPSTILIFEIPSJDEXWGXQFSUPJYQTIXDGCXYIMVNXUCGHMORRRZBNASWZBDUVHXRZTWAYDFYRJEQVQHZHGKKTOVOKNTNQAKHLCWIWEZBMFLAOSTIVYPXBIUHCUQZXLPZFDPYGAJCNJQWZYTVXZF");

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
    msg.setTimeStamp(0.747212844779);
    msg.setSource(13174U);
    msg.setSourceEntity(36U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 172U;
    msg.mode.assign("RGPDJEUUJPRBNCPBXUYXQHSQFYFGEOHKIGZXXCUPQXJKOOOJHAUHFWNCCLZQYPWMLGERTMDVIJKNSVKOLXHTNOLOHVOENZYSLAVQBWSFLHATCUYFRRGLTDCVUQBSJTZMXPSHNVAKRBSUMAPQQYTJDUHINDDEWBUTFEIZITQNCQBGIIXA");

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
    msg.setTimeStamp(0.55185055014);
    msg.setSource(27846U);
    msg.setSourceEntity(80U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(230U);
    msg.type = 246U;
    msg.op = 60U;
    msg.possimerr = 0.276420075525;
    msg.converg = 0.450407648936;
    msg.turbulence = 0.967694011755;
    msg.possimmon = 75U;
    msg.commmon = 159U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.891902181545);
    msg.setSource(31190U);
    msg.setSourceEntity(8U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(162U);
    msg.type = 58U;
    msg.op = 252U;
    msg.possimerr = 0.952814858792;
    msg.converg = 0.838507010386;
    msg.turbulence = 0.430764179685;
    msg.possimmon = 134U;
    msg.commmon = 245U;
    msg.convergmon = 136U;

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
    msg.setTimeStamp(0.27465677638);
    msg.setSource(25130U);
    msg.setSourceEntity(253U);
    msg.setDestination(26731U);
    msg.setDestinationEntity(102U);
    msg.type = 18U;
    msg.op = 30U;
    msg.possimerr = 0.239686762841;
    msg.converg = 0.36143390749;
    msg.turbulence = 0.791746832829;
    msg.possimmon = 7U;
    msg.commmon = 58U;
    msg.convergmon = 73U;

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
    msg.setTimeStamp(0.218905337718);
    msg.setSource(51861U);
    msg.setSourceEntity(83U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(193U);
    msg.op = 33U;
    msg.comm_interface = 150U;
    msg.period = 11845U;
    msg.sys_dst.assign("PCHDNQKZGHCXTZCFWERUENMMNMBDAOTEDPQNBAEIWAPZKURZFQUPIMKBSTGUTOCTCVAAFXRWQVZLDWDTFUTXVHIGCJGVOCWESWORFQSAXOKJIZXBSLRTJBKMHOKCLEZIAAVSHTJWROOJDLFPT");

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
    msg.setTimeStamp(0.199762415209);
    msg.setSource(34399U);
    msg.setSourceEntity(52U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(63U);
    msg.op = 45U;
    msg.comm_interface = 5U;
    msg.period = 51618U;
    msg.sys_dst.assign("TVAWBXZHHPAGXXCONWZSLTHDQXWMOLJDWBZSSRJCKULDCWAYQWRIJFGHIMDOESPNZTIDEIIDLTYEDIKXZFNAVWRPLNWCKRBRLUAOFULZIBXBGBUGUFGYPQIVITVBNSYGMOUTYPCYHJOFGJSMREPYMMACZLCOTQDSPFTHXQPKCUMTKJERQRJVMOYTGFXZEWPKNOXWLFUEDMBDZREQKFVJASYGKIXLVBHSAUHSKQUVEQFNMNNQKJPCHHYJNGRC");

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
    msg.setTimeStamp(0.255585089598);
    msg.setSource(30357U);
    msg.setSourceEntity(104U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(19U);
    msg.op = 243U;
    msg.comm_interface = 70U;
    msg.period = 34948U;
    msg.sys_dst.assign("KTMYCLNSGISQFPHDGYCRVMABFWRDSHCCNUDPNKJMAVGWWBHCQGCIHEFRUFBQHSQTMWJGFRWULKDADAAVNUNRELMEUQKVJQQIOOXZAEJMEZVUEIBDUJWDDLEZDSGOYOQKVCZCCFHOKRNGPXAZBHGRSEFAGSYJCUIEXXIKFNRUMFTLHSHBNYWSPMJJSXTYTZQFXMVXVPZYXLMGUXKWNITLYBDWKOBJWXBTPQBLINOYTVRLTZR");

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
    IMC::StateReport msg;
    msg.setTimeStamp(0.541508607297);
    msg.setSource(24263U);
    msg.setSourceEntity(8U);
    msg.setDestination(59148U);
    msg.setDestinationEntity(239U);
    msg.stime = 2746853313U;
    msg.latitude = 0.882225763576;
    msg.longitude = 0.261141403085;
    msg.altitude = 10065U;
    msg.depth = 3609U;
    msg.heading = 26321U;
    msg.speed = 30435;
    msg.fuel = -28;
    msg.exec_state = -45;
    msg.plan_checksum = 54818U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.289236203362);
    msg.setSource(37419U);
    msg.setSourceEntity(97U);
    msg.setDestination(3072U);
    msg.setDestinationEntity(212U);
    msg.stime = 571119485U;
    msg.latitude = 0.218378206556;
    msg.longitude = 0.468368626533;
    msg.altitude = 15707U;
    msg.depth = 9490U;
    msg.heading = 49197U;
    msg.speed = -17415;
    msg.fuel = -117;
    msg.exec_state = 15;
    msg.plan_checksum = 11815U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.693810274052);
    msg.setSource(45791U);
    msg.setSourceEntity(155U);
    msg.setDestination(803U);
    msg.setDestinationEntity(81U);
    msg.stime = 3279121659U;
    msg.latitude = 0.839372188881;
    msg.longitude = 0.55597156211;
    msg.altitude = 55503U;
    msg.depth = 13815U;
    msg.heading = 37510U;
    msg.speed = 20789;
    msg.fuel = 40;
    msg.exec_state = -56;
    msg.plan_checksum = 19966U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.907279182153);
    msg.setSource(58565U);
    msg.setSourceEntity(71U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(100U);
    msg.req_id = 33877U;
    msg.comm_mean = 144U;
    msg.destination.assign("XFZQYGLBSVOTMOGWAIRPJRYUZRKHDYTSKDGWEYWDPOJODMN");
    msg.deadline = 0.0732044587211;
    msg.range = 0.612861546635;
    msg.data_mode = 1U;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 158U;
    tmp_msg_0.angle = 0.251624356993;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VEWGYPBQOKQZTEXTRNFMLNBWYTBWVZRPQYJMNBEMOTXFWBSUOAPHGUAYKJUDTHGSANDUQWKL");
    const char tmp_msg_1[] = {61, -13, -26, -10, -87, -1, -46, 67, -114, 18, -34, -76, -128, -53, 46, 9, -96, 116, -19, 68, -53, -27, 107, 114, -118, 88, 65, 118, 91, -25, -65, 110, -59, 43, -86, 56, 59, -92, -123, 97, 8, 103, -1, 120, -4, -48, -68, 83, -61, 69, 13, 77, -16, 48, 118, 66, 84, 3, 5, -43, 87, 17, -45, -24, 81, 125, 51, -65, 56, 103, -51, -128, 106, 54, -18, 116, -58, 77, -52, -97, -88, -61, -36, -17, 0, -75, -119, -33, -73, -70, -91, 118, 10, -29, -3, 96, -70, 3, -105, -3, -51, -115, -125, -60, -17, -20, 32, 105, 31};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.317890964284);
    msg.setSource(46701U);
    msg.setSourceEntity(212U);
    msg.setDestination(4057U);
    msg.setDestinationEntity(12U);
    msg.req_id = 57027U;
    msg.comm_mean = 50U;
    msg.destination.assign("ZHCFRCLIDEJLFBSVVSGNGCCQLOJUKEHU");
    msg.deadline = 0.869886627213;
    msg.range = 0.0991799480527;
    msg.data_mode = 32U;
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.888210595182;
    tmp_msg_0.lon = 0.649003477258;
    tmp_msg_0.depth = 0.241399798243;
    tmp_msg_0.sentence.assign("LAHFYNNPTBYFWVAVTGCVISCKEXDYNOFEUSHPRGQIGFMSYTYHMRWOFDHSWVLZPILKZWPJJYOEDFMDQWQOMFXERERMHGAUDZDTTKJKZLNMZBOPVNGECRJZVEGWKWLBPKMECPJZOBNLNOSGHJMYTHQRDCNBEKZIOSXSGQCNPLCOBUGBLSDTYTVPA");
    tmp_msg_0.txtime = 0.135245165065;
    tmp_msg_0.modem_type.assign("YQDSIANKLMEQLYWDYFKKZZPGDQPNRWWQBZTTAVFMDVUGLUUIEMHUELJGOXCPDJKWHENYWNLPASBJRESVOZFAXREU");
    tmp_msg_0.sys_src.assign("BMTPKXZUCOUGBLOELTTXIPJCWABNUHGOABEQJWFLRXVBHYFXYLLGJVYNNTIRUVVTYBMMNHDKGEOOASAFLOQDQKUMOFNPPPZDSOIPKGZMFECXFEBRJDAJTQWHHDIA");
    tmp_msg_0.seq = 26854U;
    tmp_msg_0.sys_dst.assign("XFQOHCOFLPRCXSJKPYODSJJSZGOFSNVDKNCWUPIQUUHOLBZAZOBITZXTKCIISWYMKMEIQPFMHINEOMGWUBITZQWBARXAMFKVEXNTTZNRFL");
    tmp_msg_0.flags = 246U;
    const char tmp_tmp_msg_0_0[] = {-70, -76, -79, 90, -20, -72, 118, 17, -58, -123, -102, 126, 40, 50, -19, 103, -104, 114, -88, -18, 18, 8, -78, -45, -5, -78, 48, -27, 32, 101, 116, 19, -50, -34, -90, -62, 83, 104, -3, 65, 22, 125, -65, 86, 103, 3, -75, 113, -80, 99, 81, -100, -114, -60, -62, -43, 28, 84, 29, -67, -112, -49, 113, 62, 14, -88, -72, -1, 103, 39, 25, -94, -3, 24, -6, 15, 35, -21, -62, 10, -71, 25, -67, -39, 114, -3, -36, 25, 4, 97, -120, 78, -57, -92, -84, 126, 56, 15, 108, -88, -8, -105, 109, 27, 53, 103, 61, -59, 123, -68, 47, -124, -103, -90, -55, -48, 117, 107, -51, 116, -85, -111, 116, -64, -94, -18, 74, -87, -23, -127, -105, 101, -87, -13, 101, 6, -9, 119, -105, 76, -88, -45, 96, -84, 38, -102, -30, -79, -126, 113, -126, 29, 69, -96, 61, -104, -47, 10, -116, -3, -75, 115, -6, 49, 24, -57, -12, 108, -44, 16, -128, 120, 31, 55, -11, -111, -110, -121, -10, -87, 104, -52, -71, 78, -15, -55, 109, 45, 55, 7, 55, -37, -60, 71, 23, -117, -128};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KDJDURHTQXGMCRUCAYXXIQLCBWBZNKMCYHBUZZZPIYAHVLESHUAVMBYELBFMVPHBDECWQRJZIFXNCWQFKSOVTWMXLEWJBQZAMKNFKHDCGOMRVLUPUJKHESOBYGIQHJOENCRUNSUADOCFASIMFJFGVQWTGGPJYSVMKATYOPSGLGWZJPY");
    const char tmp_msg_1[] = {-18, 111, 87, -61, -58, 94, -51, 126, -118, 80, 6, -20, -43, 50, -127, -62, 39, -105, 6, -18, 93, 72, -53, -118, 43, 4, -60, -40, -113, -1, -41, 1, -16, 86, -64, 56, -57, -25, -67, 85, -86, -85, -99, 49, -113, -61, -98, -35, 56, -90, -128, -127, 42, 49, -76, -34, 108, -92};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.531971001494);
    msg.setSource(63705U);
    msg.setSourceEntity(226U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(23U);
    msg.req_id = 37129U;
    msg.comm_mean = 206U;
    msg.destination.assign("COQYAXFHBKLUDRHDLUHYBGOPPTIXUWWI");
    msg.deadline = 0.533612778195;
    msg.range = 0.617860355105;
    msg.data_mode = 162U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.158979390495;
    tmp_msg_0.time_next_service = 0.976294455655;
    tmp_msg_0.time_motor_next_service = 0.194205487565;
    tmp_msg_0.time_idle_ground = 0.947950845104;
    tmp_msg_0.time_idle_air = 0.969283816193;
    tmp_msg_0.time_idle_water = 0.883121981008;
    tmp_msg_0.time_idle_underwater = 0.262135035134;
    tmp_msg_0.time_idle_unknown = 0.380638579266;
    tmp_msg_0.time_motor_ground = 0.987627837056;
    tmp_msg_0.time_motor_air = 0.796566464228;
    tmp_msg_0.time_motor_water = 0.36771043736;
    tmp_msg_0.time_motor_underwater = 0.237650988102;
    tmp_msg_0.time_motor_unknown = 0.840557329655;
    tmp_msg_0.rpm_min = 14673;
    tmp_msg_0.rpm_max = 32500;
    tmp_msg_0.depth_max = 0.233532974183;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WHQQFBINMZZJWGBZFUYFECCIKNMXOURZYOZOZYVMEJRUALMYBDDXRDJHBIMISOTPVCNQNXFWAALTNFWHOPAKPCGCMXFWKHBJUDLVTSJZRAIPXUDWHDQAOBLIURCR");
    const char tmp_msg_1[] = {-119, -73, 110, -41, 100, -16, -7, -1, 29, 112, -82, 0, 56, 76, 2, -12, 103, 25, 39, -128, -58, -47, -114, 108, 116, 112, 10, 24, 102, 124, -67, 23, 98, 31, -83, 46, 67, -68, -1, 24, 3, 16, -52, -104, -31, -20, -18, -55, 26, -73, -107, 25, -118, 107, 89, -45, 39, -115, -49, 15, -117, -105, -29, 48, 27, 110, -99, 15, -43, -57, -57, 19, 6, 17, 120, -59, 36, 75, 23, 23, 6, -17, -81, 37, 19, -16, 48, -52, 12, -12, 33, 57, -126, -40, 78, -37, -68, 123, -94, -23, -40, -34, 113, -21, 82, 37, -38, -107, 11, -82, 45, 101, -89, 16, 101, -65, 65, 31, -2, -128, -79, -76, 95, -55, -112, -9, 83, -93, -6, 124, -91, 14, 54, -66, -25, -50, 11, 125, 44, 73, -75, 14, 1, -69, 47, 89, 110, 53, 96, 89, 67, -30, -75, 19, 32, -91, 27, -6, 33, -10, -99, -122, 15, -113, 117, 104, 81, -66, 2, -92, -28, 121, 112, 83, 12, 70, 85, 82, 109, 41, 15, -89, 62, 10, -63, 38, 28, 21, -122, -23, -96, -32, -24, -102, 77, 53, -94, 49, -13, -94, 104, 43, 111, -92, 28, -11, -128, 74, -92, -117, -28, -39, -125, 66, -19, 120, 6, 87, -29, 31, 101, 111, -15, 102, 107, 98, 106, -33, -99, -117, 31, -112, 41, -15, 83, -1, -72, 67, 96, -17, 58, -90, 92, -38, 80, 85, 81};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.0132501317389);
    msg.setSource(35198U);
    msg.setSourceEntity(114U);
    msg.setDestination(55727U);
    msg.setDestinationEntity(188U);
    msg.req_id = 34009U;
    msg.status = 38U;
    msg.range = 0.278963192452;
    msg.info.assign("QFZPGFYEBHQTLZSPXRVFEBGOFMTNZQJGILJBHNSBCURIYYORRJMOEGUPGDWRFRCNRBRIZYZSJSEXXCAPOLWUEDFHXXAHCHSKLSJDVIAPGPPGOKXAAAKNVCAXKXXWIZEJQYFODJLPVTIKEELTMCJQZEGLQWYZLDTHMRNFTHABEQUABDVROKIKVWCFUHOVMONLTGCVUIDPYLJSCTSVQHITYUSYWUNWTMUDYANXZNWMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.390132282981);
    msg.setSource(17182U);
    msg.setSourceEntity(46U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(221U);
    msg.req_id = 51537U;
    msg.status = 229U;
    msg.range = 0.352927960951;
    msg.info.assign("SRJATUSGAWNTCFYVAAYGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.531284638936);
    msg.setSource(52048U);
    msg.setSourceEntity(53U);
    msg.setDestination(25124U);
    msg.setDestinationEntity(148U);
    msg.req_id = 39180U;
    msg.status = 62U;
    msg.range = 0.727612009392;
    msg.info.assign("TMRDOHVNXYCJXNWOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.0336389097716);
    msg.setSource(32718U);
    msg.setSourceEntity(1U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(224U);
    msg.req_id = 4516U;
    msg.destination.assign("EIECNZNJBDFGHOLCPTDUASIXMGXQMUMLASWTFXBCXTKNMAEKQKJSGLRWHGJWZXHIPYCLVEJYHRIOSTBGECVRJQMSFN");
    msg.timeout = 0.616681156435;
    msg.sms_text.assign("BUDATOTUYMITLAOHORQTBCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.644272184469);
    msg.setSource(17609U);
    msg.setSourceEntity(1U);
    msg.setDestination(28460U);
    msg.setDestinationEntity(229U);
    msg.req_id = 43951U;
    msg.destination.assign("BEZDBPSXDBISXSQQMZZHRRPNLTCFEVHROGNLONIMSZAGNCFOJUJXKZJEPTXUHOYGPSEOPMKMRYXKLMWYLSLCTFRCWLGXENAJSXDGKJZDQYJLDHBNNPFIOEYYFRIQTSBLFKUCUKWCFQ");
    msg.timeout = 0.270745361434;
    msg.sms_text.assign("BMADEYKDBQPWSAQJSSKHULDRJUUUYWFNKDLUZMITVOVSXBVJIMOMTMGZWYYORNKBKPBDCYBGRXTNXCWJZPPYBVXZOEROLGAHHNFREMJDHZDCPCNGZAFQWGWNQBNKCIIRHVOTGDFDXIXOSOTVRLJKRIYCHDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.98929177361);
    msg.setSource(44837U);
    msg.setSourceEntity(53U);
    msg.setDestination(30014U);
    msg.setDestinationEntity(186U);
    msg.req_id = 9001U;
    msg.destination.assign("LOJIREJXBKGHMDVKSRGFYGVFK");
    msg.timeout = 0.471057518137;
    msg.sms_text.assign("CJYQOSDJKZZBBOGYELHXPTMAXRWGFWLNNNZSGGGSWPVHMBQJWBPQJKBAKIRIVAROLNJNERMJSXIRZOBVUQIVPFCZMKCSDEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.0589500963973);
    msg.setSource(60784U);
    msg.setSourceEntity(194U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(33U);
    msg.req_id = 14247U;
    msg.status = 82U;
    msg.info.assign("QHAVYWPXHCVCFAVWRWDWASVKQOTFRGFBVYKCJTMNZERAXKYJJSIGJZYUZPJMBUSNZEAXGRRPDFSDEKKDDSTHHOHBEJZNIHUIPOMOLXYBOXRGNHFULZKCQEZMPOTUOPNFILFJDVSZGDOLBVGBPIOCBAEUMKXQIBLTBPORWQVERZWFTCHCTRJYIWWEAFUYGNGESXGCTCXNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.350828316171);
    msg.setSource(4410U);
    msg.setSourceEntity(51U);
    msg.setDestination(41690U);
    msg.setDestinationEntity(217U);
    msg.req_id = 65041U;
    msg.status = 243U;
    msg.info.assign("HXCHFGKTFBAWYEPAGXCOSTVSORTDWPWCIZNNFUELXYTMSWHRVXRBQKWXETFYPHMLDOCDWXTCGKMBRQDHUMGZBKMFDWASIISATCQBQUHFHJNYKMVQIJKOVPPQDVOJCAMDNURSJNMVKWBQYMRXOQLSWPRNICGLEGKSUXUAEUOBYVZFGSOTMOLZJZFPAYZLVLEJPFRUULEYGYCKHZJAWIIANDXSHDRKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.167944266268);
    msg.setSource(32258U);
    msg.setSourceEntity(146U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(238U);
    msg.req_id = 50804U;
    msg.status = 183U;
    msg.info.assign("HXXJGVXENURFSRLQQQEKNYWDNZFZSNTOAMGTHSTWYFPIBWIZOAPNGWAKGDRULKTTUBOKVVEWNBVGVXNMHSOMLZEKNPRKJOYXAYFXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.456518660716);
    msg.setSource(1309U);
    msg.setSourceEntity(239U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(127U);
    msg.state = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.268085711807);
    msg.setSource(36604U);
    msg.setSourceEntity(105U);
    msg.setDestination(12556U);
    msg.setDestinationEntity(95U);
    msg.state = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.843620568734);
    msg.setSource(4998U);
    msg.setSourceEntity(91U);
    msg.setDestination(20762U);
    msg.setDestinationEntity(21U);
    msg.state = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.163414104086);
    msg.setSource(23345U);
    msg.setSourceEntity(85U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(10U);
    msg.state = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.832619067911);
    msg.setSource(22859U);
    msg.setSourceEntity(181U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(189U);
    msg.state = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.511570703378);
    msg.setSource(48006U);
    msg.setSourceEntity(226U);
    msg.setDestination(37981U);
    msg.setDestinationEntity(137U);
    msg.state = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.809164438615);
    msg.setSource(60424U);
    msg.setSourceEntity(177U);
    msg.setDestination(65337U);
    msg.setDestinationEntity(2U);
    msg.req_id = 53972U;
    msg.destination.assign("SILBYYUXNVAFIWTKDZYPLQKZAOGJSKQPHSTGKXPYDSOEWNQLZGCUMYDEBHGEJWJRNRNCPKSUMVEMXNYXCFCZWAXXCBOTLFBMBXFARFEJLJCRMQOUWSPZNXNQXQZIVARGHRLMZVFVIOYUNHRLGDIWQOJIVYSVMEFSKUURBGVGWSFNIKAJMLMCGUPAAOCTZYHFJNQUPIEFDOPBWBCGPLLDQCTMZKHSWVTIOEBBQHDHRDDPEOKJWTDEHTIJHXKYT");
    msg.timeout = 0.933499572415;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 14332U;
    tmp_msg_0.type = 105U;
    tmp_msg_0.status = 139U;
    tmp_msg_0.info.assign("YEXWWPYMFQLNQOUSW");
    tmp_msg_0.range = 0.161097198924;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.79624133009);
    msg.setSource(39832U);
    msg.setSourceEntity(235U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(158U);
    msg.req_id = 50534U;
    msg.destination.assign("XSUFYQGADUJTQZSLWIEKIZYXAANRODKLSUXXPVMFNWJFPYGWDIYXINFGHBERLCKGGFXNQRVTIDJYRTKAJIMHLLAPPCSZSMNWMVGQHDHMUOVPKCKTFWVOCOSGRDCQDBMLBJNIYANRKOVTMUAPBXOEODPVUJZHAWOQRUNIYZCWZEBWRURSXCAHHETNTLXFHADGQYMJFDPSBJMBFJHSQZOCLBCEPNKZKXZOREIBUZHTEVYETBM");
    msg.timeout = 0.791709089869;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 228U;
    tmp_msg_0.flags = 25U;
    tmp_msg_0.description.assign("PCWBJAKHRMICAWJLLTUUVDKUNZYMIXTLVZOZOSTSAEGGZUJNSJTKZGXQPQEWMXMIQXMHEMRBOGHZHTDLNCAEKWLVYGDOJSGJNQIIFBWFTOYFYVKGOMNDQTAQJWUBKPEXDLELCPBSXVDXORWQTCOVFGPKQPCFNKFWQHGHORZDVWTOIKLLMYAYDXASAVGPNBWRINMHHTJFASBHEEVMJSDYCUPRVBXBDYSBKUCRUYEXEUZCQRF");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.543565095488);
    msg.setSource(37543U);
    msg.setSourceEntity(157U);
    msg.setDestination(11688U);
    msg.setDestinationEntity(254U);
    msg.req_id = 8770U;
    msg.destination.assign("RPJDXXGYLEDEOATJIFZICSSDCJAHTATRBTLVIZRPLYHGAXWNSZXIMOGPKTWTQNWYBWHOVCESVUGDVUJPYMIHYGRDQQCOQSBNXUPBYZLINWTQKQTJBKSGSMHGBERYAEFHNFRCNVFGPOFMGEKHCLPUOCRZEWHPSFIWFHJKXIABOVJUPZXSNEUDZPCCDBKVWMFR");
    msg.timeout = 0.163865648553;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("LHDKDHUEWFBGSECTUWJTLDXLTOYLQGULCHMTCCMVZOPEWNYJQGEYOKDRDSUJBBBFMPRLCJHFJFRYSEAIAAKDSVEBPPKWCJNLOJXCOAWYFVRXENRTGIWURVAUBGKONOMCSIYARQPIIYSADVRIXDIGXKXPWZXMLZHNNTJPZMKLZUZQQSSFSJHBYVNXXPFCIMQCEOYSLERKQVQWZGOZVFDHEIVWHBXRTYMHTJMGBIAUNWBVTMTUOPGU");
    tmp_msg_0.action = 129U;
    tmp_msg_0.grouplist.assign("YAQFCBBFLZVOJKYNDCJHBVMCXNIJTYOKVGNMFWFLOQKHGNRPQOBXZDTWAPEYLDITIAQEPEGVOVPAKSNEMSFIELQMLCENZXGXXVTUSGMVIKC");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.717599243983);
    msg.setSource(18189U);
    msg.setSourceEntity(102U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(88U);
    msg.req_id = 53400U;
    msg.status = 80U;
    msg.info.assign("SYTNAYKPTGQWFJZHRHREEDOGUVEJCQGUXZYLDVSRIQKDPWALSBMFPCFMOVQRDICRLDOKXMBQNMUZWZMMXJKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.49342886374);
    msg.setSource(11393U);
    msg.setSourceEntity(240U);
    msg.setDestination(53575U);
    msg.setDestinationEntity(85U);
    msg.req_id = 56292U;
    msg.status = 118U;
    msg.info.assign("WGGYVDZORYJLPXCKLEZKDTXYMFKBGRTBAYBZOMDXBRADZAFWOIAEITUWSMCOXPRUYOMWCPLVLKTCNDVUHETGRNWJUQIDTQFKNMRQSHECJGNSYYQDANFSOXPMWIZGKBSLJIELMGNIIGZKHDMAXMBCXVOHXVUJOQBQWZZSCTQHOEJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.541143139234);
    msg.setSource(12386U);
    msg.setSourceEntity(126U);
    msg.setDestination(11730U);
    msg.setDestinationEntity(7U);
    msg.req_id = 9874U;
    msg.status = 159U;
    msg.info.assign("FXECEBTXBQEBYDADALXTXIXSWJVYUZONIJIYLBTVMVFVHWUPMDHVOTQBXHQDSICXGWYZRREISWOMVJPKFWQNFGLFWNQAFRSJNMTQUUTPCNYCCEIHXGJHSAUAKDHUSRPWAZJXFZGRYWLEXDZDEUYSLFMIHLOCKCZGVMCDLHQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.453046079021);
    msg.setSource(26098U);
    msg.setSourceEntity(55U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(88U);
    msg.name.assign("OKWXXBGVBHAUPKCLZIWREFPKGMDQRXVHEJZOTEDHQCYUGKKNOGOZYPWRSJAGEUFVYLBQLHFBCTDQQUZJAXUUIYFIXTRXIRWZLGDLZBYBFMFEXNXIMUWHYPAHZABEVAKDOTZNQPRHVCEGRCPNGDS");
    msg.report_time = 0.441985388928;
    msg.medium = 8U;
    msg.lat = 0.718945742463;
    msg.lon = 0.516445013891;
    msg.depth = 0.905271590759;
    msg.alt = 0.681098676512;
    msg.sog = 0.374304376051;
    msg.cog = 0.799571938717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.697767519311);
    msg.setSource(12142U);
    msg.setSourceEntity(130U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(82U);
    msg.name.assign("NLNFTWGOEVIPBAHAJYZQJTLNMRVPKMPZSGCDDFHIBKKJDYKWORINVUISMRLABZCPTUJEBPZFIXOSIBLHEMBNXBFFDAMTPZXBIVERARQWOAPEGCPHQLCHZNQJKFASXE");
    msg.report_time = 0.434007395559;
    msg.medium = 129U;
    msg.lat = 0.0140214657424;
    msg.lon = 0.23381403314;
    msg.depth = 0.252174501747;
    msg.alt = 0.974355091134;
    msg.sog = 0.577751933088;
    msg.cog = 0.30415049981;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 7251U;
    tmp_msg_0.status = 183U;
    tmp_msg_0.text.assign("CIDXNWAFFMWWSOMZSTUNRKIUXKZKVOOLKRWYLJZMGFNQEMDJLCPXKQVZKJTUFRDXAVTOXTRERUIEASAPSXAQPUJHVEAHBNJOWCFSPVRDSDGTMJHEPDO");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.122255699545);
    msg.setSource(21752U);
    msg.setSourceEntity(97U);
    msg.setDestination(19035U);
    msg.setDestinationEntity(206U);
    msg.name.assign("DZLSXKYUOQBHTVPEDFKTBSNMRXUGJDWIXYHWGBFROM");
    msg.report_time = 0.787499840511;
    msg.medium = 245U;
    msg.lat = 0.827649287282;
    msg.lon = 0.614441981599;
    msg.depth = 0.789155006717;
    msg.alt = 0.849381319694;
    msg.sog = 0.327555182423;
    msg.cog = 0.940420616081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.935633790579);
    msg.setSource(35957U);
    msg.setSourceEntity(50U);
    msg.setDestination(18590U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.0126274081458);
    msg.setSource(1572U);
    msg.setSourceEntity(87U);
    msg.setDestination(56519U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.45460644866);
    msg.setSource(41846U);
    msg.setSourceEntity(30U);
    msg.setDestination(16601U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.359622883266);
    msg.setSource(50422U);
    msg.setSourceEntity(215U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("UDHUHCPWMEVQLFAZPXITGQPLYSJWIIJVUKBTKTXESCNKVDJBXGFZRTYHQWKNJNBPULUAQOLEIRASZRXYPMOLAOCBVUTULUJZCQDNFIJFJWKANWDNLIIYQRGSHFKNIUHCVYHAQMIE");
    msg.description.assign("KFGKEOSYSQXAHVOZZMYCBCXFUPCYTSFBYRBUAALXJBISIYAYKDCSXRMTADYIOWTDEKMFUHMULOLVAKVRMHWUFIVNMJPZRPJQLLCGJDHNXLADNWVWNCINJIIPZSILCTPGQXETTEYOGWTDBCSUJPFFDZVFHJAWODBTABNJQGFTOQZENGVXOMRQSZZBQICWZVMKENRXSEORATHRQCHGPNZRHKBEFWXURXYMOPLSMVPUGDQVHWLJQL");
    msg.vnamespace.assign("XPNAVCQRSAJJERQSUVEPLWXYYUGDVIBQCFUMDZVJXTLEBIHTRBQBJYZSWXGNSELWEZTLFAKJPMCCQJTYQMWGFKNLHBUEGKLPGXDXCHSIKYIARWKHDZPCFZZXMTZONPNIYOUNFCNHABRMODAXKHYVMDKIJROTOODSCOGBQUVFCHNUJYZFEJOIPVBSQRKIEVGBUPSNXWNGGOHKAZLCIQHBMFWKXZLT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DPFVIYFCPTMBEFKYJVEKQZXUMUBJNIIJCRGIPRCFWMENDSTHLEGLCDFMEHVQJTYCHNFSRABMFPOABSIBURTGXQFTCUCXALUEWWCAVBZVSZWNIQIPPDOBZMKUVLCDAHNCNXSOQYYGPIZ");
    tmp_msg_0.value.assign("WCDOCRYRWJJAQGIUMCBXQRPPASTEINVSBRKQNRYLJFBWVUWAYCAZVGQOZLFJKOHDLVSJMZDRPQGAIUGQIIXMXETVUBMAOFCRJWNAYGTDZODKEFDSHBBHEOISNZUNMZFYLDXKTMSNDFPRUWPLEMTKT");
    tmp_msg_0.type = 239U;
    tmp_msg_0.access = 253U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CWJEEXVISJQKRVTLTVBADSJBGIYLDNVZCEOCEOGICGSPCSBOTSEJSIOYJXSLSKITAKCNQUYRGODZLMJTIKPTZHNITYJKOR");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WLZNWQBGYZRFWGCMOEARRPSKKATHNXKGRFMJPAIZPNIAHYBDAROUDKVTNJFHRKFSHNODTBWEMNQLJKVJXBKQYCFUSQDCODJNUMXDPCUDLJMVDPEHHVVQFRCSLGESRZKLUWGZUICOSTQEJJBYBJDFPYTGXGEIICYVHZHOMQXFPESWAIFBYIWZTGWVVZTLLXXWOIOSBECPXEBAXMJSOIOIATHCGVZPQDTPTLK");
    tmp_msg_1.dest_man.assign("WNNSBVDKUJMGRJSOVPRODFHVVZJOXZVWIYNNJUVBTDNYPMHCLCXUFGBJATTALGGFZQVMKZOULAJNESQOIEJHFVRLQOLGVENEZHXSTGYPYWCAIILEKTERCJEZMRRSXHCYXRBCYMBDMTSEIBISKVDAOACALMIXSQKUXTKTLZKYEHNPWFWPFRUWYQYGPLXUDNFQODWJPBORAWCHAQPMJUHMFGBGFZTXPQKZCCMSWPUIRHFZLQD");
    tmp_msg_1.conditions.assign("NRHRNKMODGCLRDNPXGUBPIQSPQYPRGDXSXMTIRWRXXZOYJKTCJXQCCMGYSJHOUBTEPBWHYZLCNRDHFDQYQIAMGJFUS");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
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
    msg.setTimeStamp(0.404780422171);
    msg.setSource(39098U);
    msg.setSourceEntity(210U);
    msg.setDestination(55012U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("TBTONDHZHEIMGGOILUGMHCXDPVABACRVWNBGASPMQEOQFKIRUUZABRHBYDLMGXZKKAJWQRVINYPNJWLGHWOGTRJSUCNNAHTKZLQXCQXNAXWPJK");
    msg.description.assign("ATODZYVRQXASYQMQBQJSNDKIFIXWTLUXJEHPFBEUFOUBXQVVBVILEKVQTVTCCPGDEDXMBTURGETIEBZSPOYDCXDCEYJSRTMIYIKLBWHQXXKZROSJNQHJYZFFCTYHWKRRWPUGUGVMLVNJLNWKKAUYZNEAIBSMCGPSNLAZFNVLHSSRUAMHAADMDIWGVEJRWXRRZQGCPKISUITKOCCODGYPNFYQTLHNGMWEHXMLPONCAHBWZZPWMPJOJJKFU");
    msg.vnamespace.assign("HGJYNYWNZVIKDXLTNXRMMJTQQPDMMPWCHAJKICBUFUDHEWIQBVTWAVUCJXNMJVWSFMALZAVQSDEPWVMYTCUOIRSRTIRYLTOOVUERBMXGSXAFJOHKDPFHDIECYSWOEEBCUNVTMJOWYKQONAFZCKISROSXSGXURTDZK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XAYJSKOFYVQNHIQIFWVFRCSIKCENJITFSMEIZBPBCHNVHXVKQQGMBBOLTMYJUIOAZROXHVVKODHQTTVRURIWDPRYRULUETGDSNSYUWEFOREHDCZXMYWEGJPK");
    tmp_msg_0.value.assign("PQDJINLPVJPULCJVTNILRLUYOGVCJSGVWBDWTBFCEGPXSIMSOFAUGIIDABYICZFTFOHMOJFCEZBXPEQBSKNGCIFKHOKOALAWJXPDZXTTMVENKRCQVRSWNMJWDDZWSNKHYHGQEOYERZREBNMTQEQIRZAWQYSQFSYOUFJNQDKSNLEMPA");
    tmp_msg_0.type = 171U;
    tmp_msg_0.access = 143U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JSAXEZETNPWUAAOCOKGMFLHLUENBIHUVJCJFYBSOZWPBTIOECHTMYDFVLJEBNMCUCZH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TMXTRHJRPOPIXRYHBQOSVVZTMWKUDLXBIBFBVUGWUEBAHKCUBXISTHJIOAUIZAGFPLGJENRSNOAPCPKXOXNWGKYSXNRZELEFKBRVXDJEXWOSEJALJFZCSWWHZIQDDGGPHZFMDUHVYQGLLRCHSDCVTOGKIYSDCBJCLTOKGKUCKNAYOYQVQMPUTVQTFYYRARJKQBWRALMEVQWHMQBDMSTZADDFVUHPTNOCN");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 46826U;
    tmp_tmp_msg_1_0.name.assign("IGVZOEPNNCTMYLHRLVDBZ");
    tmp_tmp_msg_1_0.custom.assign("RFPBWYHXKJCRMEXQHWKLCXISJRAVEUICIHFSRNEXGZANHBNXXYWJBQFEYXQDCGOJYFTFYLCVZEMCYSOHBHMUSYGXTGBAJHVVMJABZORSHUXRIPDALNJPVNCNDQADOFOYUEKEYCUGTIVVSKTQEIMOZVUFUCPWYLDGNPBLUNZBZDWBDWOTPOTGFCREATIKMQRLZDTSLQKLOKKHA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::WindSpeed tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.direction = 0.218996052052;
    tmp_tmp_msg_1_1.speed = 0.851383281836;
    tmp_tmp_msg_1_1.turbulence = 0.323844855095;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::AnnounceService tmp_msg_2;
    tmp_msg_2.service.assign("DKTMUECDVEQSJLYYHYJSEAEMDXPQHLVQGLWVJSVCQREFXXLTNLPJRQJJQWGPHKGYDWJAFOMNCYISRLWBIAPZWBLYMRXTWVHLOAGIZIYPFWDDVTYHZOHDUAZFUBCSEHOTBDRRPKMSQGARVNPUGQMUPACCJ");
    tmp_msg_2.service_type = 201U;
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
    msg.setTimeStamp(0.966393528877);
    msg.setSource(14711U);
    msg.setSourceEntity(229U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("DKIQDDIMVYCPKZVTIZPVSKVRUBEEGFQTFJHMWAZWNWINBWXJHSXSFHYPLHOSKYJGEWFDQQRLBUJVSPDABCLTQVDCEZNCXYHIHLPMBGULENEIFXAZYANGGFMUZBYSXREBNFXCPKTAORGDPFFHOHMAKUVYJTNYXOYLSOKJVSTWHTADJBLDPQTWRXAOEKKVKSMMCOOULJOGMOUINRLSMZCWIQDVAQGUBWYRJU");
    msg.description.assign("YAFXOTLBSUHNKLYAIYSCHLHNKTVBEWRKVJLWGREKDIQZVXVWBLGHJQAOWTQTDEFJXMLZXLVTZCNJLUMKBUDMHJVISZMNMGVVKOVVPCQGIODZIOG");
    msg.vnamespace.assign("COBXTGMNDTEKJXPLVUXGSOPJXZKAFHRIJAZYPPJDSDWHSWISJYQTSGKLLUDLLTCQFSA");
    msg.start_man_id.assign("FFZDMTUTLVMOPXVKXPXHLSBAGPKPOOCQKIMHGGTPSUFGKDYTCQXKFNLWPSMWCZSVAAENJVTVURLLOUSVDSIQARCUDHYZZGJHHDRYJIBGYZQEYQMEJSEJAQWUOEZDWAKNIBKIBFT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CPVAQRNFODSSTDQYSTUXXAHHLSDJEHCEZIANFJLC");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SaveEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("TUCTQDDCNGRFTZLSPNVZNYAZJRQDFKIHGLJUFGGJRQYKXRDVRJ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AIKUTXFTLDYBKIMWZXRFJNEQNIFJYBGGKXNUWOUYGXMKLIRKYYYWGTYYHPABCTCQEWEUNRONMIZSPRIIVSEXUOORCKFTVBHWFQLAEZEDSPTHJUQTZMVHYPQGGHBATPITXHDQEIGDXJLNGNUNBHDLQPJLHTWFYJDSUNRDPZVCWMVOGJMVASBRCSDCWWBBZCZPCERLPCVZJOUBKOOMRXVFSZ");
    tmp_msg_1.dest_man.assign("LGONKGRVNNLWHYLXFZRAOQVGDIUJUWAWEVMKNQCDEECULPHFRRECNHJRPBHRTCDPBCXDFSSXTIFVMJFFRBDMKEZ");
    tmp_msg_1.conditions.assign("KXAHLIZNWSDBXXJMUZGNORMSPCUKEIYKLYDSZPDTPNFIRTYXTMFRWOBTIRSVCZUBAGCKVSRZTOPLGUALVYGUGTNFEQMCFMYOANHDYHCLIKJBDWHFPONHQAQIERGDCUWVSEDHRJMTYASCAOWJQFNDIXCXLLJBMPXWUXFJEWUIIMVMVSBNQLKZQJJCQQHEALCWQEOYZNKRZWQXUOGZPZMTJTKSPFHHHPY");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 57538U;
    tmp_tmp_msg_1_0.lat = 0.103687225437;
    tmp_tmp_msg_1_0.lon = 0.529953389916;
    tmp_tmp_msg_1_0.z = 0.740933988227;
    tmp_tmp_msg_1_0.z_units = 243U;
    tmp_tmp_msg_1_0.speed = 0.15502628442;
    tmp_tmp_msg_1_0.speed_units = 198U;
    tmp_tmp_msg_1_0.custom.assign("UBEWLYKCEJDWXPNZMDAAHKISFBMVYJLCCIUIIPABLLEYDUWEGPKLGVHMEVXBSKIMUUBTKRZQDEAZFXWGPYBJGHHZGKQTQNORBNOMOJDEBUDRPNZWTIOUZRAQMTWCVPHQATDFQZCFEMKWXIYOKSFASDPYVIXISPFDTQRVAXXFVJZRTWJCSCQPSENBFRSRCFUVQQNNNBJTMRGHXJVAOZXYMLWSJLTCIOMCTAUHGVYFDH");
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
    msg.setTimeStamp(0.0294880195698);
    msg.setSource(4156U);
    msg.setSourceEntity(54U);
    msg.setDestination(14309U);
    msg.setDestinationEntity(3U);
    msg.maneuver_id.assign("TNWPFSBJNHATAMNQNKBKMXHDJSXJSDGCGOX");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 55057U;
    tmp_msg_0.lat = 0.928479664785;
    tmp_msg_0.lon = 0.891829132069;
    tmp_msg_0.z = 0.498035348064;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.speed = 0.388765377809;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.syringe0 = 188U;
    tmp_msg_0.syringe1 = 199U;
    tmp_msg_0.syringe2 = 9U;
    tmp_msg_0.custom.assign("FRYIDDKFKQFGDHKQHLRUZOUYERANGPUNQLMEMARFTFVIMTOUSSVPYPUIAFXAHOCEVPKCHIBLWDOAEDBJLHRWCISOSXZRZRNKTCMBLWJMXAQRDNKAXTVGEHLCCYJEYRDPWPYYWHLEZAFAEQQZSBMKGOBYPQDFTOJOSIPCJULUVPNEOHNLNSIKRGSUXMDCZQGNO");
    msg.data.set(tmp_msg_0);
    IMC::SetControlSurfaceDeflection tmp_msg_1;
    tmp_msg_1.id = 151U;
    tmp_msg_1.angle = 0.0334415126552;
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
    msg.setTimeStamp(0.485064818764);
    msg.setSource(26803U);
    msg.setSourceEntity(144U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(184U);
    msg.maneuver_id.assign("UUCKKDZCBJWNWQRGGYXPLTIQGYNMNZMZLDSZASCWUIFGMIBNENBGAZJVBKWRQKCZHEQAYHSSYSXJSVUABLXBKOHXPOQURPPOBFDFWUIIYQPHLONRDIEZCTLCVLHOHVJFVGNZFOVXPKHZRJEQDOHCCMJTEQTWUQAQTUCADHFEAKBFGNKFMREPXENWGMYXRUZMBYIMWMLWUIPGJRFEGMTLTHTTDOFJYYODXIVSVLPBNKVIOS");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 44125U;
    tmp_msg_0.lat = 0.138203828059;
    tmp_msg_0.lon = 0.245497184411;
    tmp_msg_0.z = 0.0980037514498;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.speed = 0.0108275873246;
    tmp_msg_0.speed_units = 9U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.757424588567;
    tmp_tmp_msg_0_0.y = 0.740672717553;
    tmp_tmp_msg_0_0.z = 0.774500564671;
    tmp_tmp_msg_0_0.t = 0.408290951746;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SDIFOKDSFDCAJCSLXDFMYKCDERULPSAPAIYDIJUCFGIYUYQFXPEBBEWOGQWZMGIDVSBFFYXZPVLXKSU");
    msg.data.set(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.188371944408;
    tmp_msg_1.lon = 0.769904779214;
    tmp_msg_1.alt = 0.228876819217;
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
    msg.setTimeStamp(0.811106533187);
    msg.setSource(61304U);
    msg.setSourceEntity(0U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("GYKKQVIIQXPLEFQSBDOUBCTYEAZNITVOQPSGYSVSZFWTWCNTRMPTNQUYYXPWBJKDGECJPYLMUMYVFNBGEQICTBRNMOROQZIXUVXKIKVEXNALRVWGHXPORWDDDKTCTOLAKHWHNOEDBBCARWARJXTGUCWSZ");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.201734729882);
    msg.setSource(20572U);
    msg.setSourceEntity(91U);
    msg.setDestination(39941U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("MDEIGLOCGLTAWWKNEKHIUCOFFGDEFKRTVVREAWPFSNPHFSGDLMQUQKIFJIXJTIKLMYUDRALXKRAQSQHOBGXJPQLFOBPYMSBVRFUIHEDPVXWYEJGJQMJWRGZHHASXSCCOBPMQKRCQDJTLPZANNPVKMZDFPHNTWYGMRHXYOTXKLUGDZWEBNEUWLQARVYDZZBMSYPACTUBZTZWREYEOVUTCJBCYZHAIUS");
    msg.dest_man.assign("GNUJONBHDFIXTXTCLHUNEYLYYKISVQAIJBIZNYBRUJDGZZJRGVQFIFASFVCERPPSTOTAXDBPXEQKZLPMAPLQOCXQRENLDCJSKHLXOUOGHIJMDBERECKCWOVSBNLWWVMNHHEUDSANREYZQXFFKGWQNYGURWJUDLPGGYWFHIMEBYCRTSWOTFZKPUQSMNEJRVKOXPALCJT");
    msg.conditions.assign("UUOZYTBNKJMYGDIHTOJECHSTBEMJGKKGSHIRXKZVVVWUHJAPQJWKOELWDXSIRSQPXBCXXDWBXBNLEQVSTIKCLMGVQXKNILZSPQWIJQRQGMADCYRIMDIQFKYBFBULWEBOYUZSEIZHEMFPHYVVZLZULWBOURNDVNOQMGCYTVURCCFRYKWAJFTW");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("WUKHCFZYGNXXDIHELNIQIBFLTXSTSIFOHSUWPJPLOZYMBMZWOGPYBLSOWSIHILZJMYJABVZUYVUDBAFIFCUFDWNXGNDPNHQZDRRKMBNSXMVKXDLFYISQEQLSTDGQMKXITQGVTZEQQJVTDAEPEUHCXAYCKCPQQDKGJCTARPWVLFEFJRRJZROSLJNLXDOEMMGHAUT");
    tmp_msg_0.plan_size = 44181U;
    tmp_msg_0.change_time = 0.156102118011;
    tmp_msg_0.change_sid = 54796U;
    tmp_msg_0.change_sname.assign("SXTNPDSYOQJLXCMBNIJHPDHUFKGMFGWSFQXT");
    const char tmp_tmp_msg_0_0[] = {-44, 106, -13, 49, -7, -89, 97, 108, -26, 110, -95, -114, -70, -61, 72, 123, -91, 125, -102, 37, 115, -95, 101, -17, 6, 55, 47, 38, -27, 44, 63, -114, -10, -108, -80, 65, 46, -125, -51, -45, 37, 65, 49, 119, -34, -95, 58, -11, 15, -70, -85, 5, -89, 120, -115, 26, -18, -85, 18, 56, -102, -42, -5, 57, 67, -16, 24, -51, 61, -97, -20, 30, 70, -30, 25, 9, 53, -119, 106, -123, 34, 21, 7, -96, -10, -33, -108, 123, 24, 60, 108, -111, 52, -58, -111, -105, 95, 78, 18, -85, -113, -14, 20, 114, 7, 116, 119, -91, -44, 124, 84, -28, -52, -123, 72, -27, 35, -105, 10, -107, -110, -4, -76, 38, -46, 71, 40, -103, -100, 75, -78, -77, 121, -47, 22, 10, 18, 35, 14, -75, -3, 108, -52, -42, 97, -111, -83, -50, -82, 79, -73, 97, -94, -11, 31, -16, -59, -99, -125, 40, -46, -112, -117, 95, 52, -77, -70, -5, -120, 57, -71, -51, -71, 6, 92, -76, -98, -116, 108, 31, 39, -124, -85, 85, -103, 12, -61, -68, 12, 20, 54, 59, 47, 81, -10, 44, 45, -120, 41, -29, 113, 28, 122, -8, -23, -53, 78, 113, 29, 9, 113, 85, 116, 11, -74, -24, 40, -5, 65, 83, 102, 64, 107, 49, 82, 44, -128, 100, 82, 3, 88, 36, -81, -122, -79, 79, -5, 71, 78, -33, -47, 115};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.665285754795);
    msg.setSource(29372U);
    msg.setSourceEntity(187U);
    msg.setDestination(8176U);
    msg.setDestinationEntity(114U);
    msg.source_man.assign("RQEEFWGSKBMXIXZSIXCLZJTPTBHTGQYTPVFMRLXYNQOUZHAMHYLDDYWWDRTTJVHQXR");
    msg.dest_man.assign("GALFDBMULTHTBRLEHXWOYVDGMASGTRSHXSNIBKVUDJIWVKYUQEWLCJYOSZXSSNDZGRNQOVYCXHCELDFJTREKFFUOSATZDGTRXALGWPWBKQQDXMIVBROGBOPKGAAWM");
    msg.conditions.assign("UQYVPSTYKNRPFLFMEEVCZIUXOJBCBMXIMWQESKDLLYCFWPRCKDZJKEAYBHOMVJBKBDGXJOKEUHYSTNDAADK");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.525458557959;
    tmp_msg_0.lon = 0.161904241305;
    tmp_msg_0.z = 0.448798557165;
    tmp_msg_0.z_units = 222U;
    tmp_msg_0.radius = 0.395357953343;
    tmp_msg_0.duration = 5644U;
    tmp_msg_0.speed = 0.543017401628;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.popup_period = 53815U;
    tmp_msg_0.popup_duration = 10220U;
    tmp_msg_0.flags = 170U;
    tmp_msg_0.custom.assign("NWPTLFPVDINOSSJCVELTYVNDYCICAWAZPXGWORKRMCYSBTWEQKOFGYXXZCOBBSDQERLJAXOQNKPMHPKKJCPZKFXGGTUTTQQUNNFFQZKSIUAESRWXGYLOJMIYXYDVWQWIQLI");
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
    msg.setTimeStamp(0.61922401044);
    msg.setSource(33793U);
    msg.setSourceEntity(215U);
    msg.setDestination(1022U);
    msg.setDestinationEntity(195U);
    msg.source_man.assign("GREUPKGDKZDBIMNNVHNL");
    msg.dest_man.assign("FKCCUBJRWHCCCOEWZUGGZNAJTMIJZHRDPMGVOKVFPLJXAJJTGBNSLQKLMWIPOBNQOQIPDYTLDYNRQKMUTNXDDUVCSSCBXAFSREIFOJGDPIIUTPHFWFLDDYOBVVHOPBZKIHWYAANJVFXNMYQAVUGMTZSYHXGSQLVXBMUABXQJQ");
    msg.conditions.assign("OFWJTSWUMRXZEKFCOONKRLEGTZMMSCOTFUKMDSDXCUCJVNLZAEENHYGBAZVDOHDJIKUCDRREUMPFCODVGIIWSMGIHTBPNDZJGTTTURIXNOQZBJRMRYROVIXHNDGPLFG");

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
    msg.setTimeStamp(0.436227651439);
    msg.setSource(34423U);
    msg.setSourceEntity(32U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(242U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UWOQLJYDNXVXMUHIWCJGAORVGEZIWSUUCRTDMSSARWLTRQGKRZKPDKHNEGDRFDNMOEJGAJAHQLGEXQFJFKIYUTOJONPLEUTDXSRNLHMCVHPYFBJBQETSBMBVRQSHDZUBGFHAOZBGQFPFZDYPEWZXPYWNKOJLHCPAHYWFBUZSXOAVXOKIBPKTGIFZBMCDSQHLNEYEXMRATKMSJLCSTWKGMIP");
    tmp_msg_0.description.assign("LPIATFBNBISPOJRMVBYYFOYAQLDMGEYKDNJKGVYEAPGZRDRSLGDAQWQIJKMFXXPRFUBLSMGWOXEHUFDRMCHJNCLLTACVPVLHVQEZCVLEVRTUBOXHZWIYMGTWYZERDUPXHLLXZZDMVXBQXENQNXGZQOVYFKRGPRNSSCSUIICHPKTRMOFGHZIAKFWMOOWQTDDEJTJBUSKZIBMWKUCIJEZWGACQNXVSJACHJD");
    tmp_msg_0.vnamespace.assign("EJBVMHZUQVHHYMEFANMD");
    tmp_msg_0.start_man_id.assign("WCNIAGKWELQCLHDEIPYLWGZIVCUXBNOHLROXJLHEMMKWFCFFATHODZASOUNZWQUPUKITFPHYAOWNPMSVYUMPJVSQEVDQVPZXTQRTICXSOJUKAUMVZSRBMFCXWJRRYFKQLCNRIGXJGZPEGLJLFTYBJNXQTJAYV");
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 663286095U;
    tmp_tmp_msg_0_0.start_lat = 0.329429646257;
    tmp_tmp_msg_0_0.start_lon = 0.561911075288;
    tmp_tmp_msg_0_0.start_z = 0.565242725462;
    tmp_tmp_msg_0_0.start_z_units = 138U;
    tmp_tmp_msg_0_0.end_lat = 0.964943595852;
    tmp_tmp_msg_0_0.end_lon = 0.83353088101;
    tmp_tmp_msg_0_0.end_z = 0.633266108377;
    tmp_tmp_msg_0_0.end_z_units = 96U;
    tmp_tmp_msg_0_0.speed = 0.861464856851;
    tmp_tmp_msg_0_0.speed_units = 125U;
    tmp_tmp_msg_0_0.lradius = 0.37200641682;
    tmp_tmp_msg_0_0.flags = 241U;
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
    msg.setTimeStamp(0.127352862751);
    msg.setSource(34616U);
    msg.setSourceEntity(179U);
    msg.setDestination(4957U);
    msg.setDestinationEntity(181U);
    msg.command = 93U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PQHSOVKHCAAFVULVEDBRCMUIHQUXKOSZOQUQZRVDCHSSZANTVEODYURYWPHKTGMKIJKLPECCBJNBLXBWBSWFUKZLNEIAEYNLHYSZCPGVKONXM");
    tmp_msg_0.description.assign("QVXSEGYHDQEJTUGCMMHQPIIOKDPMMGHALCBLLUTXQLIEWUPIBRCKXQSRNHQZVMZVHFOYOBHJDKUCPXVTYGUQGZSCTKFXXJPMVYWNNJALWBEIEKFFXPOVSNYRQYPISDVMACRVZRSTRZGDLPXCEETK");
    tmp_msg_0.vnamespace.assign("LAXNVXDQXYMXNDODUCCWZRGAIOKBOPTAFJFPIFCKZYEGMUPCDYQWERLZCLALIBHHEGIROSWKOJIBVHZQTCAZEIAJAAXSKUXYQKVGOLKJRTOMUFDVLNLHASVGDEJSUXLYQNDZMWEEYYMTSJBYZSHNTYUQVPMTURJQIMCTKBHWE");
    tmp_msg_0.start_man_id.assign("WUHUYMZKHPOQLWJHRXNNYMUEEZGVELCSJIXOFSGZWUKXICZFWZGGZUHEENKKYXIYMDFJAUSSGADYNHQLZYDCEJXQIVVGXJGUEARKVSMOZRIVNTOCRKZVAUDOL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("PJCVTRGCQACSYJTAVGGTMIWROZWQMPWABELMQOOHSCXULFKDXJQZSMMHSXFWDXDCUUEZPEOXUOBBSDGMKWEKJRPYVGJILKRY");
    tmp_tmp_msg_0_0.dest_man.assign("XZBUNPGZQGPPUQWOXYFNYKNXFGTDYACEEXOZCEQJCHJWWNJVIBUKHMIGJUPOENRUELXRFFCVZLDS");
    tmp_tmp_msg_0_0.conditions.assign("EXIQCRKMECMJRXSIKVISBBWWEJSGHQPBVVVYFNKQMNTWQFXFDLYADQCQFTPBLYDWYPNPOEWECFJKBOUUXAJOUDLRYOECHELARXIKXKBDJPUHUVSLDMUAZMMEBKMVLUOJRNSXODYO");
    IMC::EmergencyControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 106U;
    IMC::PlanSpecification tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id.assign("ZXPODXIPCCCYQKFGYCTSNBRFDIRJFCSMSUQMBOAUTBZZDKDKVGZZZSDWWBBAVYEVDJSVLXETPGFLQRIURRNCTHJNERRATOEJFGXNCQLKCFQUUQRMHMEQWMYIMQYHBGXGDULFBJEWUPNLVRBGAXVMMXWSYSPUSKTZWPFOUYLKOPYLIPETIMXKOODTHQANZNLIUOWHIKGJTRVACSXPKBHBAWZKOJVCEMNFINEHJVLXWFDHNIDPOQHJVJT");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("WUMFZHWKUKDEVOKTYRDQCHGLPX");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vnamespace.assign("VROQZGBDKYSAPJHJUSJRODNIQ");
    IMC::PlanVariable tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.name.assign("BSWFPSLUDOOUKLQYFIYGVJMSNOGALKCVTEUIZEMZQ");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.value.assign("EOASGQHUALLRGRISKKUOZVJMMWANWLWBLWMVXGFCQZGUGSTSJITMWCRBLANKBNAPEEYCIJHRKIFXCPFATWXZSLQZHKOVUPEFMDYXLAOGFCBHBDCTTMIEVYZEPIUTZWZLXLDORCGHUJEQRRRYSBPIQYHCJDDMQYNNSPYDUBYBXJJDSNGTOTVWUKMIBQHCKEDKJDUQPFELZFZVYO");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.type = 191U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.access = 254U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.variables.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_man_id.assign("JEDNBIYGMUJSWSMQEFEDHLKHZPKLUIJFYCUAXAHBYD");
    IMC::CompassCalibration tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.timeout = 53155U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.lat = 0.0188871135214;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.lon = 0.781404872326;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.z = 0.444761423184;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.z_units = 104U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.pitch = 0.245015180592;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.amplitude = 0.0243817380543;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.duration = 37011U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.speed = 0.28148868338;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.speed_units = 153U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.radius = 0.292476927612;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.direction = 23U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.custom.assign("ANCFRTUPWEDSHAMMPGQDPYCNZJACKBRFBOEDUJIUQIVBGIWFXYXLLVXPWJCUIEQXLGYPQZYZMHKYBFIHHZTVSZXYGLAGYGTSESNRIVKADUNUGOUKSBXHDQEMCFJGIOTWSPHJDMOKWOCNB");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.plan.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Teleoperation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.custom.assign("EBNNPSVURLZXVNERTWFLWUAEDTEKMXCPSVZTQLFWYKHMPFJEHVBEDJJNJQBMBFZELZXAMOOISBWTITCGNQDZAYHOGJWLXMKZRQKABIWBKATYRLCHFQEGUAALKGIKGVVOKPIOXUKGXUJGPEHTOYOTDQHTHN");
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
    msg.setTimeStamp(0.259022074909);
    msg.setSource(36779U);
    msg.setSourceEntity(20U);
    msg.setDestination(22854U);
    msg.setDestinationEntity(110U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ACWMYVNPSJDJKAHHPDQOOIKXEZUHEAUZREIOXFAVTMTONBAJMLJKFTQLZMNAKXFMSWDJOWOVXHCKIUWVNAORITNOGMHLFZICWVUHFWAFDPYYPKPNNAGOJSQLLICCSHKRFETLDPVQCFLQLBXGPRMTUTWLHSNBYEXHEEDUZUUQYFECYCFEZWWYPGJQGMSSIUJBIBNYL");
    tmp_msg_0.description.assign("GFRKAIVZOBRZIMKOXSCUTUMGDQMIHPUXUAYFJRWTSHJWXNDFCFXKIHAGBDNGEJHVUILQIAMAWBKNHCLZXMRKBDCPOMNFHIDYWGUOHVRTLKOEQWPYRSQLDBVSJTVLMJJILNPQYBWAPQ");
    tmp_msg_0.vnamespace.assign("WXLWABKIHDEBDUCGV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WVRKGSINJSXLYJLGPKMUKGWDPAKPIYZACRIGRQHCYEWNATKCREZYDDZQVPHBEAOIFLSGCJQOTMCRXBXJFLWTTRLNUDVLTHDVAZSSQKMVDWGTIZXLUZANFIPVOLGKYYRYXWBNMFKTKYQFUODBZH");
    tmp_tmp_msg_0_0.value.assign("YZLXDXGHTOBDGYD");
    tmp_tmp_msg_0_0.type = 174U;
    tmp_tmp_msg_0_0.access = 113U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZDCRPEYOILKFQTURUNECNPRZCSRCALMLQAHQTJNQXUJQOCOWPUHGMFVFOPDHZPDVSDMNPZYAVVKSOLZYDHHMXISROAMRSHJBCIWMGFEEGIP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PJKLDDZYNMKSTPQAXONXZBPCRJTWXGSXIEUKJJOGJTKIIZVHPVXBNYIWUUHHAXLBUOQZTDGHYJFEAWVLSKTECCHTZMLSYRGOLFQVAPRVQBICFWAYNGJTNSMNKKDYENMESVDVOGZMLPBWNCMIAPQAQJTXCNWZBSURIVHIJLGHGSHFAUDFICMUAWUT");
    tmp_tmp_msg_0_1.dest_man.assign("VIEVZGNTITGWWLQEPBQSHUFXKQXHIAAYJDEZBCNAHWPESTOETOASRPUKKJHHLYRLFZTRKLCXDBOTCMIBLNRLJYXTPYOKSACVKAOQN");
    tmp_tmp_msg_0_1.conditions.assign("ZXLJTOUZLCPYLTCINGRYBTMNKJMDRKMZIQKECFXDPEVXUYKKDLVJDDPWTTUALXPODZVGVMFIQNKIAPEEYSKKVBTWPYRUIHCIPUQOPUXOGZCRFNVRAAHBBSSZFXHCQEJSXGBNEWTWBEWCYHHLTZMGDSFOMVHJHMNBSYUJHFAZBSQZWBSONPWFREWBOKEHYYLAYAQRJEDCITAXLIAFVGTQHJWGRQXRASLXPWKICFSIONFV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0329575882249);
    msg.setSource(25614U);
    msg.setSourceEntity(179U);
    msg.setDestination(1052U);
    msg.setDestinationEntity(14U);
    msg.state = 185U;
    msg.plan_id.assign("DYDXZBPIJFLWQECOADSMUBNESPWNENSAMPMWQQQGGZABVLHYYHEECLHTOAIFGSZMWYSOSFCUOKWCUXHBPEHCYRMRQJMHIIARZ");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.91427744729);
    msg.setSource(13424U);
    msg.setSourceEntity(206U);
    msg.setDestination(45568U);
    msg.setDestinationEntity(134U);
    msg.state = 46U;
    msg.plan_id.assign("BRWLRFJFIWGXCMHKELQVNLVEGIZZIVBJIMRGUWQHXPCXXTDOSINBAGMAOYJFGSIRMMMHABLYGIVUEUWHKZVEBLWNWQJAZYDDKNAXXSBZJMCQFPRTVFMXTDZNPLWXRV");
    msg.comm_level = 11U;

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
    msg.setTimeStamp(0.642310095754);
    msg.setSource(14021U);
    msg.setSourceEntity(76U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(196U);
    msg.state = 137U;
    msg.plan_id.assign("EXINXWELPOQYKTDNUZEDBEJYAWHRPEOZKQSJBFMIZCVNKJLMIAHPDWXICEVXVOFPFXPDMFOKBWIFBLHUVQDJNXRUJXHWGTZKOVSXLJCRCGYFJUTSAQHDGATNOYGHABLWUNRULOCKFFSHYUHGXTZMYODGSUSWJPAYCFRTRJCGAXQSMNOMPDETMRLBNRIJUPMBTPKYZWGDGVDWKZGVYNOVBTSPRCMZCN");
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
    msg.setTimeStamp(0.403035176194);
    msg.setSource(26150U);
    msg.setSourceEntity(75U);
    msg.setDestination(59516U);
    msg.setDestinationEntity(149U);
    msg.type = 23U;
    msg.op = 147U;
    msg.request_id = 36050U;
    msg.plan_id.assign("AGFYSKXBBPHEZWQCKBYKDASDKIDMJTOSEFYUUOQUKRKAWWGQLZVTFJESMQXQYCJLTCVOUGRIZDLMXXRXAUUGYAXQMITNUPBTDLTOZKFNYDPKJOOGNNFJIXSVHATWIHAYCJAOSANFEPPTUMYV");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 30403U;
    tmp_msg_0.plan_size = 2896669059U;
    tmp_msg_0.change_time = 0.0820642212247;
    tmp_msg_0.change_sid = 46165U;
    tmp_msg_0.change_sname.assign("HLDTCOBYFWEUUUJELHARQYDYBPDJLARPINBVZCPRXFDROHCCUXGRMESTHLASSDGAKKACLQKOYKPIDZLPBREJSQKVMYIMFYBRFIOUEWTRXHJWCXDSGYJQBPVFMZHLBTKKLMZUGETFOINJHIJXQNWXFWOVABVZZMQSAPNUYVPYGFMXWT");
    const char tmp_tmp_msg_0_0[] = {-43, 42, 72, 6, 99, -23, 4, -112, -113, 86, -43, -41, -61, -29, 70, -37, -77, -122, -113, 15, -64, 68, -120, -18, -30, 67, 78, -111, 3, -2, 36, 55, -2, -125, -29, 35, -78, 116, 77, -88, -103, -9, 24, -72, 101, -39, 99, 32, 59, -35, -65, -121, 61, -108, -18, -23, 99, 63, -25, -67, 47, 92, -22, 25, 14, 16, 41, -89, 30, 47, -112, -28, 46, -83, -122, 87, 120, -13, -116, 11, -113, 12, -23, -117, 70, 110, -92, 23, 23, 122, -32, 27, 83, 70, 73, 75, 15, -65, -88, -109, -80, 77, 124, 110, 25, -61, -4, 2, -1, 98, -60, 44, -52, 125, 84, -87, 78, 19, 28, -69, 106, -48, -93, 19, -2, 4, -70, -23, 101, 108, 123, -5, -79, 48, -33, -104, 11, -64, 70, 27, 59, -88, -128, 4, -98, -120, 10, -1, 25, 110, -122, 40, -109, -86, -90, -125, 41, -112, 117, 88, 74, -14, -5, -72, -26};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PKOZKQECDUKRGUVLUROYQMDNFILQZETFDUMVNQTMDIXEMFUHWZLSBECPUFUPBMUGYCDMVHLFSOFVTNVRESSAMHGJJZAHAGRYZQNRLDGVLSAACPJRIFVFOBSZ");

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
    msg.setTimeStamp(0.421513296805);
    msg.setSource(41665U);
    msg.setSourceEntity(143U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(5U);
    msg.type = 74U;
    msg.op = 176U;
    msg.request_id = 37179U;
    msg.plan_id.assign("YXSWNANOQJRTXLPOUTSGSEKFYTKXBWQYUPQPLCUVPTXCAJTBJZOJYLCRFHQDNSWYWFNEFOGVMCEQEQZYWZDYNDF");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WUYBOKAAUUCFBVGPMVWNCIDGEPUYJMRWBQIFKTRA");

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
    msg.setTimeStamp(0.728858268844);
    msg.setSource(29600U);
    msg.setSourceEntity(68U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(133U);
    msg.type = 16U;
    msg.op = 146U;
    msg.request_id = 5019U;
    msg.plan_id.assign("THKJSNLQZZUYUZXMCEVYKOSWOPVOSCORWYFQVQXZKRIRGNBUIAHVBQCUEFYAVRCMWVQISPHEDFMFOKANPENVGDBPOXLYLIBMUFKGKLRFAWQJLXGUHHYFWDNDSYGCLRULGDTEJESBSBOZMQYDOJGTZTIMWNHOXZHJCXPJXCVLZZMGKCNADPAXTXJGKGCBFFLAKTRIYBBEEWRQADPVTKAJVINSP");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("ZSEEFMZZHXHRIMZTXQOLMQHETNQGNXITYOPEAOLUNUCKARZGNARJAQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UUWCZIEYPGCLJBGSOEWROLTIKSIXZDZEXZNQFTDLCNHABFTKJWTSABSVCTBAHFDGGHGXPJQZNQCZMLYUKRKRMIIXDKHBYSJIMMEAIBXXDMUOXQQTQLPEHRYQXYLKJSNOZNNMXVAFAYVYTZNTPPAQQTWEOSVBWPIYDRAEKLDGPWCCPGLYNRFZJPCGLFKVMJVUFWHSPBOUJFKRNVWLCZHGWDTMYCEGKVDONQUAHIJRFWREOMUFBVEUDJOHHB");

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
    msg.setTimeStamp(0.373641482569);
    msg.setSource(21092U);
    msg.setSourceEntity(158U);
    msg.setDestination(38389U);
    msg.setDestinationEntity(182U);
    msg.plan_count = 91U;
    msg.plan_size = 3618556478U;
    msg.change_time = 0.514371549705;
    msg.change_sid = 56438U;
    msg.change_sname.assign("VQJVCFCMZMZWXGQPMVNZTXDLXJFQDUCABDVUMDTZNHUBYRPTCLYYGBQZFWIRPFAMZ");
    const char tmp_msg_0[] = {91, 30, 56, 125, -96, 37, -40, 119, -90, 87, 114, 32, 120, 27, -66, -115, 92, 65, 88, -26, 124, 45, 31, -114, -2, 104, 22, -126, 116, -106, -32, -56};
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
    msg.setTimeStamp(0.977063587048);
    msg.setSource(12243U);
    msg.setSourceEntity(166U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 25183U;
    msg.plan_size = 2822266975U;
    msg.change_time = 0.524726104998;
    msg.change_sid = 40451U;
    msg.change_sname.assign("CIWKSGRMNUHVPCZNJDPGWMTMNBEWQQFZFJORNWGYMYBLZUTWWLTRYIPOQSAAOPIRVQBGBXTNCDRANGZHNT");
    const char tmp_msg_0[] = {-89, -67, -122, 27, 3, 10, -68, -39, -48, 45, 36, -67, -28};
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
    msg.setTimeStamp(0.613636025613);
    msg.setSource(3459U);
    msg.setSourceEntity(241U);
    msg.setDestination(15343U);
    msg.setDestinationEntity(200U);
    msg.plan_count = 60186U;
    msg.plan_size = 3933960038U;
    msg.change_time = 0.715149828513;
    msg.change_sid = 6445U;
    msg.change_sname.assign("YRTEGXFXJLQZGXJYFOFDMERBVVHMLYBKOEJDIDNVOJANHPZGCSLEFXYUDZSJENUIMGMYSIEJRPPPGHKFLAJOKPSDACB");
    const char tmp_msg_0[] = {17, -19, -88, -46, -99, 35, 9, 99, 67, 15, -103, -107, -89, 90, -103};
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
    msg.setTimeStamp(0.310778707081);
    msg.setSource(52396U);
    msg.setSourceEntity(9U);
    msg.setDestination(7125U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("HQYXFTUOJSTOMWKMQJTDSVJXSBNWUWHLHXCKFBWTSFPFYXTAOUBZSKEPCCXVPYTLGAGUVJOUUIHBKQOMDYGARQEPJAZEWQDMQYILPFVMPRHCPUGPMKXMJEWBOECOLKSAHEKAJTTVFXLOLGAIEKK");
    msg.plan_size = 40205U;
    msg.change_time = 0.14775438148;
    msg.change_sid = 50374U;
    msg.change_sname.assign("YERJWILDXVLDRTMHLCHYQNRNBIQFQPWFEJFYDV");
    const char tmp_msg_0[] = {-23, -49, 35, -121, 47, 34, -20, 95, -84, -61, 106, -120, 85, 111, -83, -58, 39, -12, -50, -13, 2, 62, -57, -125, -85, -14, -76, 31, -108, 110, -1, 24, 70, 77, -49, 47, -113, -63, -106, 87, 103, -73, 50, 24, -4, -42, -124, 58, -126, -1, 1, 94, 30, 74, -112, -107, 113, 99, -45, -57, -39, 41, 108, 46, 14, -16, 32, -123, 106, -108, 73, -101, 117, -112, -51, 13, -30, 103, -11, -43, -19, -71, -103, -9, 21, 0, 95, -68, 124, -68, -88, -11, 123, 9, -5, 27, 87, 94, -42, -25, 9, 52, -119, -53, 94, -49, -64, 122, 9, -118, -66, -24, 75, -40, 10, -1, -105, 37, 37, 102, -16, -66, -49, -104, -52, -15, -22, 60, -5, 69, 29, -27, 119, 39, -1, 84, 99, 32, -67, -5, -4, -25, -116, 90, -49, 2, -16, 66, -66, -28, 112, 0, -34, -51, 94, -117, 113, -68, -53, 115, -109, 63, -101, -9, -50, 39, -69, -88, -1, 49, 97, -29, 16, -110, -81, 57, 28, -75, -73, -95, 30, 10, 2, -3, 41, -47, 34, 93, -112, 1, 107, 126, -41, -10, 94, 20, 118, -97, -88, -83, 73, 23, -123, -62, 118, 33, -6, 58, 97, -71, 71, 113, 27, 99, -125, -58, -97, -69, 47, -101, -98, -63, 28, 39, -68, -83, 68, 71, 74, -108, -16, -21, 3, 51, -44, 101, -94, 77, -78, 95, -118, 42, -47, 69, 122, -85, -112, -126, -81, -79};
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
    msg.setTimeStamp(0.992224255759);
    msg.setSource(8532U);
    msg.setSourceEntity(199U);
    msg.setDestination(492U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("CDPHBGYIIDMXWICQHVEILMFXVZVRQRKDELPOCLLWWNRQXSTUEUZNAJLA");
    msg.plan_size = 4565U;
    msg.change_time = 0.47686475639;
    msg.change_sid = 41943U;
    msg.change_sname.assign("YTMZUGJWWVUFAYTIQOWOMZTQEPRAVILBSMTYASDFLKPXDOSWYKH");
    const char tmp_msg_0[] = {-80, 19, 1, 115, -102, -68, -74, 115, -111, -124, -42, -76, -121, 105, -74, 64, 27, -74, -86, -123, 55, -103, -47, -41, 102, 35, 20, -58, 106, -126, -41, -63, 84, 72, -115, -77, 17, -49, -68, 44, -51, 34, 68, -63, 114, -100, -93, -81, -81, 121, -58, -16, 61, 77, 119, -20, -127, 12, 125, -66, -75, -58, -28, 13, 54, -79, -13, 120, -122, 118, -96, -97, -37, 86, 104, 17, 3, 56, 55, -89, 111, 97, -80, 115, -17, -124, -37, 52, -41, -26, -77, 47, -59, -16, 47, -54, 86, 93, 92, 3, 52, -128, 97, 57, -51, -50, 124, 23, 53, -72, 119, 47, -80, 33, -77, 78, -4, -95, 57, 1, 114, 91, -65, 106, -67, 20, -93, 88, -55, -8, 117, -120, 123, -19, 121, 72, -22, -88, -90, 64, 101, -28, -24, 24, 90, -77, -74, 6, 46, -102, 46, 44, -92, -78, -44, -73, -11, -27, -42, 22, -100, 44, 26, -106, 36, -9, 3, 20, 65, 90, 25, -27, 63, -126, -100, 103, 77, 35, -4, -31, 55, 33, 107, -99, -117, 20, -101, -113, -76, -116, -11, -56, -72, -93, -75, 67, -55, 103, -28, 20, -40, 18, 7, 83, 100};
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
    msg.setTimeStamp(0.455666775075);
    msg.setSource(61035U);
    msg.setSourceEntity(199U);
    msg.setDestination(20017U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("TKSXOJILRWKCEDLNMVZRNXTAKRVPHKYWRFLAFXKVHLVIOBOKMCUSGQTBHOEZNVGIXNZNZDUADPBUCRIYUUHBGFTGBWCTGRWYBTJLYMQWMIFJTJVEXDWZGQFSBTMBQSJUOQFHSZNWZNUHVOEOTPZPPNPGPESIHRF");
    msg.plan_size = 60223U;
    msg.change_time = 0.324281148696;
    msg.change_sid = 51201U;
    msg.change_sname.assign("IBXFXILKLTRUGRPANYVTVDAAUXTRJNLIPDHQOGLXYAQTWOIGRHTBWGEBBKZHNQFUFLYWUYOUSVUQPXIDPSITIENASZAQKBDPRCQSJUMBKDKCHXNVCZHVKAWJLIH");
    const char tmp_msg_0[] = {-100, 70, -3, -120, -114, -74, 10, 99, 28, -115, -105, -128, -83, -10, -96, 10, 110, 14, -61, -64, -6, 59, 112, 50, 121, 113, 32, -8, 47, -7, -114, 97, 31, 17, 114, -69, 19, 100, 5, 26, -34, 93, -100, -74, -26, 93, -52, 49, -17, -89, 90, -12, 102, 99, 17, 96, -94, -3, -44, 107, 103, 32, -102, -21, -54, -30, 13, -36, 55, 78, 19, -99, -121, 118, -58, -125, 126, 19, 100, -113, -47, -1, 86, 105, 68, 86, -93, 86, 93, -109, 2, -78, 46, 54, -71, 70, -1, 27, -3, 70, 108, 73, -22};
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
    msg.setTimeStamp(0.272462841262);
    msg.setSource(25673U);
    msg.setSourceEntity(170U);
    msg.setDestination(28286U);
    msg.setDestinationEntity(53U);
    msg.type = 190U;
    msg.op = 52U;
    msg.request_id = 40073U;
    msg.plan_id.assign("GRSYVKWDZFAHVVQOADYLPATQCSDGNQDPIBMHTYR");
    msg.flags = 20921U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 134U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TILZLKAGAHJHUJWNMDMQPUXYCWKFIZMAIERTORGKXQPIZQBDCXBFZSXPFYVPJFFGNIYMPTSPMCKOXHSXRZABUEEGUZIBXFJVJFWVYLECTLOMGAJAKUYBFRNLKCKVLBHNHOGQRZUBCCDEQWXQWSJETQJDZMNPQHRUMTLDXYTOHBGZYHDMQAIYPAGVKXBDNSSQELCVLYJKVRKDZWOASSOHTMSYVNTFGNREOWUVDVGBUWFTWII");

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
    msg.setTimeStamp(0.214441157251);
    msg.setSource(30697U);
    msg.setSourceEntity(254U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(25U);
    msg.type = 175U;
    msg.op = 131U;
    msg.request_id = 26421U;
    msg.plan_id.assign("KPNBYPHNDNRGFMCMLIAQUZDNROSUMEAEWSDASSPBKKOGYOYHKTULCWHJHGLMWCMJEAJHRMZVSHLOTNYBWGTZXXWKEQQVMSJPGKWVDNNBIORPTRBZPYCXIJSVFLKQAQXULVCMRROVICPDGBZOIJTSW");
    msg.flags = 53829U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.653638147279;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GUTOLQBXNBGSXJLMEWHFYVVMGKJRBOWFXOPIPOXFQQUPGKNJDVIWUUDCAAZJBZPKLRKXFSIVYWBHSPIMWJVXBYIYVAKDIFNHQJTACFTCLFQMARYTHGNUFYTTUEQECGTBJUZGEPWRQHZYDCIPTOZBNTXDDWMDYSAZNWLJLCURMONPGBEVGNSZECMOQ");

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
    msg.setTimeStamp(0.45978229143);
    msg.setSource(41193U);
    msg.setSourceEntity(34U);
    msg.setDestination(51225U);
    msg.setDestinationEntity(109U);
    msg.type = 147U;
    msg.op = 177U;
    msg.request_id = 65285U;
    msg.plan_id.assign("MZWGFQWAWFEMUHRLZXKFRGKEULWRVNITCQSIWVXBGZSQBAPCQKUIOBLVYGDXTPQJBXIEGSKPNQITAJOZDGOXMNHHENVLDSHIXMYAVGBLHS");
    msg.flags = 45553U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 93U;
    tmp_msg_0.plan_id.assign("AALYVBSZPIKFRJVIJINXADUUYNABBFXCLYKAQFTYVTNRQDTINEXPSMCHKSAFCGCYKEWEJNTUTWMDVJSXOUNZXEPLLIUJPGLUPOGGHSEFOMNDENAUYBFHHVHHUQKIFGFQXDMTNWPEZKHXVIAZESWMZBCLZWGCDKXOKDBJPHZUJUCIO");
    tmp_msg_0.plan_eta = 1973100386;
    tmp_msg_0.plan_progress = 0.238213858437;
    tmp_msg_0.man_id.assign("ZCAENRVAOIVJFQKNV");
    tmp_msg_0.man_type = 65174U;
    tmp_msg_0.man_eta = -1805813561;
    tmp_msg_0.last_outcome = 120U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FWPSZDCLPXFZBLAGZATTFJXQRKINNCVXLTFPQSMJWPYBIGLSZLUKYBDTQYYFLCHHCAMBJIENULWSARQUHOUUXQFOCBYTJVPZKAQVSEYUKSJGKRUIORZIADRMTTKVXMUGP");

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
    msg.setTimeStamp(0.418695040627);
    msg.setSource(64319U);
    msg.setSourceEntity(33U);
    msg.setDestination(28217U);
    msg.setDestinationEntity(194U);
    msg.state = 70U;
    msg.plan_id.assign("IGTNODCVQSAYTOYOVZXRROGGBAKTYVRWZZMETKAUJHTOXUXBZWPQNYKIRFQVQPWBSAEJCBRJJLE");
    msg.plan_eta = -2137656447;
    msg.plan_progress = 0.786070883884;
    msg.man_id.assign("IPFMLRFFXOYTPASZFDOETKDYOUFPNOJMKBQNFDQPHUYEMBAVOBWOCHYSPXHAPUJQWELOXJKBQKKHJMXOCDUZVTYZS");
    msg.man_type = 3905U;
    msg.man_eta = -107588854;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.752845890535);
    msg.setSource(20716U);
    msg.setSourceEntity(34U);
    msg.setDestination(13579U);
    msg.setDestinationEntity(172U);
    msg.state = 107U;
    msg.plan_id.assign("HTHLMORZGLVZTDSLCJWMOASPRFBWLDJMDJNROPHLRCMNGRBQLBHNIXJUYQKVECKHHTKPOKYKEFXAIQWVRUJZZUWBVBCCKYSCNXFVIJTKWTXDKMGOSQBJHSCQIEWSHBGEVXIQFZIVIQYZUUNVUDQALCSASUDZIOTYORMAYCEVDDEAAYFQJSAXLHXEBJGPRNGFUXORGYTDPMAWWYSFJGPWOZ");
    msg.plan_eta = -1451716736;
    msg.plan_progress = 0.124640591357;
    msg.man_id.assign("TFLFVOEZDEYYCRKSIRVPYIWDXJCJVMURZPTDHUANHRXAOWKYDLHBXKPLALLAWGEOVGWHBVNQFSELWGHQBJRMMUCCHIPRIVQRYNTTPUZIJMUNVGVWCQESTVKUAXMECOOKJI");
    msg.man_type = 14967U;
    msg.man_eta = -779423149;
    msg.last_outcome = 250U;

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
    msg.setTimeStamp(0.00956467540091);
    msg.setSource(34836U);
    msg.setSourceEntity(14U);
    msg.setDestination(23615U);
    msg.setDestinationEntity(224U);
    msg.state = 173U;
    msg.plan_id.assign("TIUNZWXDLRMJXTGGZUNDGQSZ");
    msg.plan_eta = -1192058907;
    msg.plan_progress = 0.0104386898392;
    msg.man_id.assign("HHLKRCPCKANKTAIDJAHCSUMLGDJRDQFFDBVSVKIEYIVSIXRCXFDCMWHBLUDVUYRZOKNVAQFAOWKWTCCTLJBGTYJSUJFGXQBGYHAILTGORIUWBVPPOVJFZOQJLMXDOUKXEEATQNPHVNTHNBVXEYLAZMGMERUNPSXRJEDQUUWEJWRBXPGHRZDMOZGIUWWEYBBYWPYZLMCFNPDLZ");
    msg.man_type = 15665U;
    msg.man_eta = 500479923;
    msg.last_outcome = 34U;

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
    msg.setTimeStamp(0.449439268811);
    msg.setSource(7355U);
    msg.setSourceEntity(240U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(84U);
    msg.name.assign("NPGMFQFGCKGBFEVZAISXSQBCUVEOFRGO");
    msg.value.assign("GTZXBOOJWJVFLVJPVHUGISFTZQTFPFUMRSAWKUQENUGYRNXNPOPVSWRBCWIKQPOEXRZACIHHDVGJSWXBRLDMRFGTHQKKIBRNYSMTPAGKGQBVLZHALIDSFPSWUSCNJKTICAMWZUYCSSQGEBFNVLKLXBO");
    msg.type = 194U;
    msg.access = 116U;

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
    msg.setTimeStamp(0.143861127899);
    msg.setSource(55058U);
    msg.setSourceEntity(198U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(208U);
    msg.name.assign("BGZKSEJNXFGPQCZIYRYKLJCVCPBAMNVHUTYDEMJSYJEGHHNPFKVDBRLASGBYLCMROKDMJSBFISFKGIRTANTUZA");
    msg.value.assign("RRZUGSQAXMBWLGCEKVQTESNFVDEYUGOIHRETSDBJPGNWTNILNAXRRHJBYLIPQINATFCYMAUDKWWIZZZBXXCAWOYVUVAGXXMCHVLBPUWFJRNQDTQHQHFMBUFNBYTDIFZCCRESXQHAOZOKZBGKGBSCLZKJTTCWYKNMHQSECWQWVJPMLAHLTLJDOKYYNFSUKDVPGEFSVZUMFECJZQESMRYOOAIAOMDOXJYNJPRI");
    msg.type = 5U;
    msg.access = 239U;

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
    msg.setTimeStamp(0.505740622409);
    msg.setSource(26878U);
    msg.setSourceEntity(164U);
    msg.setDestination(60074U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ARLYKSYUEPNEWCPDVDGDZUTKIMZDTZXOPTUBOUHDCCIAHGISKNXORJMMYBGAAUSJACGMBZIKDXZQGTPMVAVTCGRIYRXOJFLAOCBEWYJFWXKJSLEGOWJNKQEZIKXDXDLSOZNTZEBHTLVIMORPUCWKZTRNGLHLIHHNXQHEFSQAMMBWRMJSDYVRPYTJMSSGNBOHDORHVFKFSCPYFFVJEUAPPFQHQNNVLUCXJGQKERQWZTEYQBWBUIICUVYX");
    msg.value.assign("GEEWKRQPTQILCJOSYYATXSUEHVNXYRGLL");
    msg.type = 247U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.725925442269);
    msg.setSource(51770U);
    msg.setSourceEntity(72U);
    msg.setDestination(45224U);
    msg.setDestinationEntity(95U);
    msg.cmd = 76U;
    msg.op = 98U;
    msg.plan_id.assign("ZHYWQHMGOCNGKNXJNOOEPXSKCBJEAXZPIVBVKVATOGVTBETCSEDAZXWWWYPFGH");
    msg.params.assign("KCLTFIOIXTREGWHXABLWRXXQNBESNSXYPZRCLDVQINWBYIAADZQNDOEFOWHIVUOTCUIKSIISCQJWPRLCUBMGYOQTMXCRTSGRIRVGVYYTSBKGCFVMOUMXLYMWUDPKKNUKMLQWRJV");

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
    msg.setTimeStamp(0.200572897917);
    msg.setSource(49848U);
    msg.setSourceEntity(64U);
    msg.setDestination(50958U);
    msg.setDestinationEntity(146U);
    msg.cmd = 33U;
    msg.op = 43U;
    msg.plan_id.assign("ZWRVLAISSTLDUVVKKASOTSCFYXUFGLUPBQWBJMTNCGSYEZBGRAHWITHRJQXNFEMPKSHELTXEJAALQFFUZMKS");
    msg.params.assign("GVKOXCFEIAHICUKVKRXGDYUVLDNFPKAQMGSEAXHTDPBLQNJNRHKHVPVPRPMQDGZMAKQFJULOAGULIATKEHSJESSYQSBDZNRITOBIAOXSWZWTURVYFWMPUGFJHCXGCBHUVDEGBUJJVANQVRQTFPENIQIXKZTCYKBIRAODOXCKJWTWZMOOWFNSQZILDLCWRYDYEMBWPZFY");

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
    msg.setTimeStamp(0.57740117136);
    msg.setSource(29896U);
    msg.setSourceEntity(25U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(165U);
    msg.cmd = 15U;
    msg.op = 214U;
    msg.plan_id.assign("UNRLUXXOLBQSPZPA");
    msg.params.assign("DSPBFLNCZKPCCCBJUHHEJHLJTXFJKVTOHQJOJBSXCLELKMUDMIYKZWJZKTPRSYGDVSVZPETUXVXYYQIAGLOXEMXAZSEPTOOYFJQGJITVQRSYWRGBQMCKRCNOXMQXWEGEDQPZGBVBLIHKAWRNBFQIZGXUXRBHWWMLCAUNVGZANFEBPVSRAHDIRNIZVK");

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
    msg.setTimeStamp(0.966925249032);
    msg.setSource(65386U);
    msg.setSourceEntity(196U);
    msg.setDestination(15683U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("MFAWOVWPQAVLBHMGYEQYHNEIKATHYFGWVIQHGBVUYJKVPOMCWFTYVFTFJAIJJZDDJKUYPDIXSVROEDCMQJTPGBZQKUWXEEBMJCRADLDZYPPAHYZCKPONONWXTLQHWJBMCUBSLFBOXLSNFCCBDAQUFVNXZVXYGXMGHHBAWRINPMRDUKDMXZRPRSSJXYIKGKICZCASROTELRBGDAIGWUMSKIWRRT");
    msg.op = 126U;
    msg.lat = 0.468398030342;
    msg.lon = 0.540631457773;
    msg.height = 0.371925241178;
    msg.x = 0.766733319239;
    msg.y = 0.650777108134;
    msg.z = 0.418387856577;
    msg.phi = 0.666297388195;
    msg.theta = 0.920466806818;
    msg.psi = 0.295732998174;
    msg.vx = 0.935135594537;
    msg.vy = 0.491461420331;
    msg.vz = 0.631050483248;
    msg.p = 0.436229025511;
    msg.q = 0.0427701550523;
    msg.r = 0.886241901878;
    msg.svx = 0.965864957013;
    msg.svy = 0.982649843223;
    msg.svz = 0.0244678032983;

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
    msg.setTimeStamp(0.896389878854);
    msg.setSource(24080U);
    msg.setSourceEntity(66U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("BGTOVQAXLWFHNVQANFYWUWODEFHPDRTHIBZZBIINGUEXDYTWDMCHXFLMLKIJVNKYJXRMGHWPJRULZMCVEFOKSTVQQMDMBKDXUSQNLRSA");
    msg.op = 179U;
    msg.lat = 0.841405599838;
    msg.lon = 0.638029834046;
    msg.height = 0.376143286418;
    msg.x = 0.90694421276;
    msg.y = 0.222913638846;
    msg.z = 0.372937833423;
    msg.phi = 0.0466104590112;
    msg.theta = 0.806596909337;
    msg.psi = 0.101028418441;
    msg.vx = 0.608771805579;
    msg.vy = 0.0433632505701;
    msg.vz = 0.110482707427;
    msg.p = 0.65863455244;
    msg.q = 0.728487086457;
    msg.r = 0.198679015263;
    msg.svx = 0.600516688791;
    msg.svy = 0.221586389682;
    msg.svz = 0.0565523981796;

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
    msg.setTimeStamp(0.0530092542891);
    msg.setSource(31599U);
    msg.setSourceEntity(165U);
    msg.setDestination(36077U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("HQXYEEFXBUJHKDGIVDFIJKGJJLTRNXUIQXQPWWMHTISDDXLZQFTRYUQKUZREXKLHOENAMLAODNWYKEAGQKNSDRAFHGKECUFDNPSZTOMSJRZBVSRTDCRAPGVRRHUISSYKDQMOCUJCONGFPTXBBZWCVRLEATXOGLJZIDNWLHHPOHZIFPJCLQWWHQEAA");
    msg.op = 34U;
    msg.lat = 0.494761155048;
    msg.lon = 0.561661953791;
    msg.height = 0.864948744357;
    msg.x = 0.357585326973;
    msg.y = 0.327821334212;
    msg.z = 0.777037709422;
    msg.phi = 0.185304680017;
    msg.theta = 0.985221478391;
    msg.psi = 0.652439581181;
    msg.vx = 0.517093666933;
    msg.vy = 0.247212732781;
    msg.vz = 0.270984002304;
    msg.p = 0.860687446858;
    msg.q = 0.798045278564;
    msg.r = 0.588102202441;
    msg.svx = 0.0620173096251;
    msg.svy = 0.0251176921726;
    msg.svz = 0.230572613128;

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
    msg.setTimeStamp(0.042818107645);
    msg.setSource(45211U);
    msg.setSourceEntity(178U);
    msg.setDestination(26965U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("LNELMQJBFRUVTPNBCWVWLYXJMOVFIDZIKQHDFWUQZFBSDOJJHOZOAIZYMKLETSKMMNGBPYWQOMGESLIOIWHZHAHNPVQBOARENZMBJQXBSFTPAIMNTOXNBWKEHUILXGLUDSFJVCUEAZYCFTFXVMGHPXOVKQGRLEUHWRNJPUVYCBYAKVSZYXJFOXEDWXUHEGTGDSYGQCRWDIR");
    msg.type = 90U;
    msg.properties = 23U;
    msg.durations.assign("UTZIWBVIAERLQVTNKNGRQYHZETAGQKPIWNXQMUIBQDGDYEXMDVNXJRPPJJODQSKZHMLMEBSOMZXCAEASBPOACASWMCRTZXFTIBBMZWNQLIIQTGWCVBDXYLKFHLXZBJTWYYONFRARGCKOLWSAXTEDBCLHWTXVSJNKLFEYNYAGBZEOPVQSYSAIZHHUZCEMROHCKUWFOLKFMRFDJVRPQKNCMRDVYHVUJOPEHCJLUJUGPSUNPDWVGYFHSO");
    msg.distances.assign("UQZPLUJETIHLURVECALYJEEUZYXPHYJHVFYWXYOYHSOPTELFIOVJACYTBCTZLQQUUCARZGJGGXMPENVGQDATSRYUFLTMRJOXOYSRMKFVNSICJBNWZJDSZEINDWWABXVAWNGKMZAURAPQFOVBDCTSFWMCKIMLPEEOIGGSKDBRLAROXXK");
    msg.actions.assign("XOQSMPGHWEBJCVLCASVCWKVZANGWPUEEYDUCOVCSAXFHERIHDZUIHXRRHGEWGEVJMENTWJSBSMCOKDPYQVIUCPKLVGHZTODYTQINNTBPXUGQGKHQNUBIUXJLLJSEJXHDXNJBORICMOWOYKZMUTFJMKNNRJZALAANYZPFYAWWSRCOGGSBBWATKRZPSFFFBABFOIYPQXACOHKBKVLZTFRIMEYKYQIHLTPYXDQ");
    msg.fuel.assign("SKECLQJCSVWCJBBELAYOQITMJCEFSKEZPBKBUONSPHHTVUZDAVTWMJBNKXNSJTCQKWRHANUKLOCRFIPCDXZNTNIRGGGXWDAMBENESRXJZZWIR");

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
    msg.setTimeStamp(0.421273169559);
    msg.setSource(30154U);
    msg.setSourceEntity(145U);
    msg.setDestination(52748U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("ANQUOWUHCEXTDXTSAPBPDEJUKDRSUFKZPWHSYJQVFJYCQIMHOODSSZVWQJUSFDGTTERYFHVXRUIZGUZNVDSUEWYFRRQNOLVCDTMCXZJLWIZYLCJUTEOEPCWRGFYBXASJANVBMWLRPNWIRZDKLLFTRVCKMABYKGFFGUEQZCXMYMFTBHKHIKENGMQBPLOAPTXMOVCPOBIBPOSADJXXLHQBVYCJIIPHNEMAYGXBOIHKGDNKRMJZGH");
    msg.type = 211U;
    msg.properties = 138U;
    msg.durations.assign("ZPTHEOAVDRRSUTQCPCFKWOEIDONJTGNGJMJKTBYSHILLMVWWEQLUIEBKZRCFTFIYOXBYELKXAEBZYJWMJSMAUSLFLAD");
    msg.distances.assign("CARLVNRSKXWKMQHFSFYVKXWRYCEVUZRWUTJQFLBLDLASBONIRBDZZXXGNTTZSOWXRONVZTBWVETB");
    msg.actions.assign("FNPJSWEHCOZFXAYJBZWNJGUDUKWJNXYLFNXWLLNKXFELHFVFYRGCLEPBJHFHBSMYYZWECOUGOZUAALBCKMJQCPIADEOKCYGEBBJIUDRRXTWYZFKKITHJMDXYKIPEWHISVMSQYTMPOCKGZBRHVOQGJIYQLVVSFVGBD");
    msg.fuel.assign("CTMROCUIJWFQXKTARTYWYNWOHPJQFMUPWEBSKRNQSTNTXRHSJSOBEJQLJTSMODCZEQFDURCXIQKAABJRDZZDEDRIPOVEYPIBPCFXGHDMVGHRPLZULYWYBFTDXJBENKYVNYNKALMLHQZQOXPKL");

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
    msg.setTimeStamp(0.194436731492);
    msg.setSource(10754U);
    msg.setSourceEntity(210U);
    msg.setDestination(25857U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("HCJFQQTXEKHVDZSHZCPPLXLVDIIBRZAZIEQPFZOVRYYCXUSJIWXSMUDYDHZWECLQPMBHMTZEIIGGNMEFLGLOUKKGVXUFANNYXDILARBGHYXBMWWBGJWUAQNTGREYSAFLQQPUSSMSGTGWKTSHDRARNJOYMVCMYVNUCCJJOUVWSTMHNODRJAAWHDYRPFBFJTEJNNXZUZIOACTGQXPKMDWQKBFUBRYPBTXOO");
    msg.type = 226U;
    msg.properties = 181U;
    msg.durations.assign("GAWJTVGAMQSOBBNXTXQOEEMNFPVCVOWYXUQXCUBHPNZCDIHTAEZOQUBJLFQQXUMGSOYEFJDBVCAZJTHGKVYRWLDDRIFTCKYUHBUTLAXHMJFSAGKMPPSCSRSKVPARCBZRJOPINCENBHKNTLJRVQVYRYTFPWEMULQIWHLIXKWYMOHVUEWLD");
    msg.distances.assign("ACWZDDGVWZASVYGHNOGWOGZBVWQSYPTXBORTNIEIMUCNHXDXEIZUFZYFOWFPBYYNPQXNDHWUTJFKCTODRJJAZALQNBHACLRKKRGVXZSSMZLNKTVILDOHLFUAQEWBHCWRUJZXIAHRFUCKHTIQIPUJSCYUUVABCMVMRYEYPQLPWTQGXZAJOXSPEBDADVVGLCWGJSXJMKQOY");
    msg.actions.assign("MUXHOFNDMFUNPXZLYAEZPYGWGGZVCTTLFHHEPDYQAMDCUUSFIZEQBXMSAHRMMGJJBFQBNRWMCWB");
    msg.fuel.assign("EGSZSUYQSHDALMAWAMGWEJCTKIJVHQUCBODNRNZSGWCOJWRYYZECGEQIDAMKPRJOBMXEWBUVLEUQCLLQQXSQBDTYOKMFYMIDFBXRFTVLKJFJLWDBMTDSVFBWZWXONOPCNGGARUUYSCYVZLFSQOKHRZAKRKWINMXMNKJKXEZIT");

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
    msg.setTimeStamp(0.135916042192);
    msg.setSource(60416U);
    msg.setSourceEntity(236U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.893470099651;
    msg.lon = 0.074441677406;
    msg.depth = 0.554380296172;
    msg.roll = 0.650617187043;
    msg.pitch = 0.796779533485;
    msg.yaw = 0.0095617480747;
    msg.rcp_time = 0.1339491278;
    msg.sid.assign("LVLIEHEYUVRSPCVHWEZOSWH");
    msg.s_type = 226U;

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
    msg.setTimeStamp(0.318557763917);
    msg.setSource(29720U);
    msg.setSourceEntity(75U);
    msg.setDestination(1308U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.227641778843;
    msg.lon = 0.408137419737;
    msg.depth = 0.963969372841;
    msg.roll = 0.74705890285;
    msg.pitch = 0.342380815524;
    msg.yaw = 0.396321440598;
    msg.rcp_time = 0.100814486485;
    msg.sid.assign("FWPOSHFTHDGFKNLVBBJIHGCOQUKOZJIQACDTZEPXZKWYDENLAGWGSEWOYMFAXXSRXIQECDKDDKKPXQJTOVQBKNHVVOGUMYRJNFDRJXUHUNUQUANJZPIBVZREMRVRRBEAPLXYMVSGOUDCACQWRCNPGONIRBHOGSPYFBHFEA");
    msg.s_type = 149U;

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
    msg.setTimeStamp(0.282558515386);
    msg.setSource(32597U);
    msg.setSourceEntity(125U);
    msg.setDestination(6244U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.61459254343;
    msg.lon = 0.184814399357;
    msg.depth = 0.102328688628;
    msg.roll = 0.0549019331873;
    msg.pitch = 0.624823752319;
    msg.yaw = 0.926869704172;
    msg.rcp_time = 0.666519650781;
    msg.sid.assign("XHYZTWHWIFXNBEPCOCGEBVCVOPKBJJBVCWLEWJFGCXCYEOLNXFGITFJUTNYYHKZLRKPTVRDEFCTYDAGOSGNQPHATDUENAMVHADUTMNONRPJS");
    msg.s_type = 97U;

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
    msg.setTimeStamp(0.542831083004);
    msg.setSource(23242U);
    msg.setSourceEntity(2U);
    msg.setDestination(30000U);
    msg.setDestinationEntity(39U);
    msg.id.assign("WRZBBALGAMZTQMAOGLPJKOYPDYHPIXGHJROOWNXXLTIQOZIRNOIKQFSBVEVDYDAUEAREWCFFCNUZJRQSGRK");
    msg.sensor_class.assign("PWQZGZYKJHNXWRSXTEDCRNUBBEZZ");
    msg.lat = 0.643784599868;
    msg.lon = 0.488948403391;
    msg.alt = 0.799683010087;
    msg.heading = 0.423483846308;
    msg.data.assign("SMPFPJSYYUXGADYIEDRAZJNYAWSOFKVBPKCASUDBQWCQXWBLURRTQMPNRIHEJID");

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
    msg.setTimeStamp(0.11114606282);
    msg.setSource(8891U);
    msg.setSourceEntity(234U);
    msg.setDestination(8720U);
    msg.setDestinationEntity(197U);
    msg.id.assign("PKYLNGGEVGGHXKYXFMMITHTTJXQAUEPWKNZDKVFPXEJFHKTYXDKLHWYKCIKDBSOLTWTDUZARQFMBLOVGZFXEVPMSWCHDGEHGYJQSQKXQOCNMBHJJXUFBKMGJ");
    msg.sensor_class.assign("UNHKAWUUPHAEFWBSOLZGUIYTSVCHGPDZFRCVTKBDDLQNDZEKBXQOIVVRGCVOGGQNSPYMTEDSPYLYVOSSFZGBQGCQJYSHWZJIERFVTBMFXXTKAOOWXBUUIANCYFHNCGZPRXEWLPUCFWIRINYYJQHAZPEAMQBZ");
    msg.lat = 0.466832223615;
    msg.lon = 0.264421353428;
    msg.alt = 0.652198325392;
    msg.heading = 0.0908663041756;
    msg.data.assign("AFPEKZYVTWLVJZUDMZMOKPQEQDJXETRMFPSMYUBYOHWCICKHQIZJSKADXOLLRWRLXSTHLDRMDLBHFEQOTXTKFHNOBWYXZMFQAGXONUGBDZPALNHETUAFCNRLSGAVBBMCGSSUIKGMYKPYDNRPSWITNIWFBHIJTJWXBYPMDVRFSOZEOAIVEUQVYRAONKVKJUBRGPIJPEAFJJWJGGCPHWLHRXVAVCBZTMSUUQKHXXGQE");

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
    msg.setTimeStamp(0.342340938254);
    msg.setSource(47474U);
    msg.setSourceEntity(131U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(227U);
    msg.id.assign("ENATQWGZABUXDBYDIGFZNNZKURDCHECKCHLTZSJIXMXGRAGTOSZAULEYKJKJGLBJXTVMEOFUPAMAYCZVDKLBNPRWHWXFFDDYKNQCDFLYSTOHJNXHBQYUOZUHFCSRPAMVMUSVCQWJOLBAQLQOIMMEGSDGYVYQOR");
    msg.sensor_class.assign("IMKJBNPTBRZSLVHTETCCKIHKNXNQQOOSUPEXASMOBPPLZKVRGFWOZCX");
    msg.lat = 0.818277888378;
    msg.lon = 0.275959496248;
    msg.alt = 0.167066015981;
    msg.heading = 0.494632781487;
    msg.data.assign("VOHFGPKXWMWJEBDVJPQYZQGYGULELOBZIDHYLGNWZXAMHKHDTKAYGJBMGPPBJRPDCRWKXJBVTPDAEKSES");

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
    msg.setTimeStamp(0.113326308943);
    msg.setSource(52118U);
    msg.setSourceEntity(174U);
    msg.setDestination(10264U);
    msg.setDestinationEntity(83U);
    msg.id.assign("NAXSVVEAWQSODCSRDUETZFKIZEUNCSWLSOAXYDLDNKBQHPSDUPUYMMJQQFJU");

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
    msg.setTimeStamp(0.62839387366);
    msg.setSource(11664U);
    msg.setSourceEntity(59U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(154U);
    msg.id.assign("RHWVZINFPEDDVUYJTJCLXXLJBOSPQANMPKXGNZLWVGSUBBIIXYHZFRQQXYIIROEBYEWBLAQZEZZQRFPOKPUAWVAKSWTVSFJPFGMORUPWNHVOGQMWDZLMGIAWKKCQIJXCUOHYBMNQJAMMPDKLJCFETKRNNCKIRZDAMXNGYOEVCELDHEEFLDTGUYTYCORVLTQWXTZBZVTHS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NQRXBKJGVBSERGITHURDDWUMKFWGWVONCBTWEILIYHQOVWVMETPSAHKZSBIDJIJWSFEGOLTFRGCKOCEIVKMLYBJEDSEELPZHPQPOVYZPFAWNGUVOOEHWKUUYUZNGM");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 141U;
    tmp_msg_0.rgb_green = 192U;
    tmp_msg_0.rgb_blue = 252U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.699672850784;
    tmp_tmp_msg_0_0.lon = 0.428914258774;
    tmp_tmp_msg_0_0.alt = 0.0871511685501;
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
    msg.setTimeStamp(0.747941321572);
    msg.setSource(25593U);
    msg.setSourceEntity(36U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(205U);
    msg.id.assign("YASMPUIAYTDWPLHPXGIUWCSUDTQFTVEFTELZUJQIPFBWSMUXBKMNMKMGAYBAIEUIUEEAOPISACCWXDHPJNGOQALIWVBRTLYLDREKKRCBYNKTQOZBDBJRQGQQEYYZPFNQJOFKDGRPLXDROHGAWHFOGAZXZGSBOOWVHZEQSCIVLJMLXBPKAIVXCTCKYOZUNRTJHLNKTZNVNCRCUVJSIVJEMXDNH");

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
    msg.setTimeStamp(0.781665517621);
    msg.setSource(28362U);
    msg.setSourceEntity(116U);
    msg.setDestination(63031U);
    msg.setDestinationEntity(238U);
    msg.id.assign("LUAVSQQVGUVFDQEFNQPBPYYGQROXDJEPEUQSKGWSFDLKINMACDXUFTYDNXWPSKEFBCHIOKWOWZJWVSOTLRUPNHSRMJYEEWTPCXXRPPFKBMMMOJIPSAKYWYGM");
    msg.feature_type = 253U;
    msg.rgb_red = 170U;
    msg.rgb_green = 110U;
    msg.rgb_blue = 146U;

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
    msg.setTimeStamp(0.583700079048);
    msg.setSource(49808U);
    msg.setSourceEntity(242U);
    msg.setDestination(45707U);
    msg.setDestinationEntity(105U);
    msg.id.assign("TBBFULLADSARRWIXFERRYGJNZF");
    msg.feature_type = 217U;
    msg.rgb_red = 180U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 122U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.154373673309;
    tmp_msg_0.lon = 0.219226791769;
    tmp_msg_0.alt = 0.0852962504371;
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
    msg.setTimeStamp(0.0846664816963);
    msg.setSource(36672U);
    msg.setSourceEntity(140U);
    msg.setDestination(22643U);
    msg.setDestinationEntity(13U);
    msg.id.assign("RYSPTIHEBOTEOKEXLDOOYUSERDSWFDCVMPGUFNDMHWOXDUVLKYCOIIYOJEXLFFJZJ");
    msg.feature_type = 7U;
    msg.rgb_red = 103U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 96U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.134746486996;
    tmp_msg_0.lon = 0.197579684793;
    tmp_msg_0.alt = 0.596918207757;
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
    msg.setTimeStamp(0.874584545811);
    msg.setSource(31052U);
    msg.setSourceEntity(215U);
    msg.setDestination(45699U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.87207272383;
    msg.lon = 0.298944671413;
    msg.alt = 0.988371762315;

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
    msg.setTimeStamp(0.925293295308);
    msg.setSource(8291U);
    msg.setSourceEntity(141U);
    msg.setDestination(48807U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.864001239994;
    msg.lon = 0.178797578715;
    msg.alt = 0.108148118293;

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
    msg.setTimeStamp(0.00340436778873);
    msg.setSource(55259U);
    msg.setSourceEntity(134U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.35676887022;
    msg.lon = 0.309211476888;
    msg.alt = 0.801038580518;

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
    msg.setTimeStamp(0.750021758854);
    msg.setSource(45323U);
    msg.setSourceEntity(189U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(252U);
    msg.type = 152U;
    msg.id.assign("XDORUVODDBQGQZVRLYAJMLAX");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 64580U;
    tmp_msg_0.lat = 0.661483360765;
    tmp_msg_0.lon = 0.292686270802;
    tmp_msg_0.z = 0.612689477913;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.duration = 27132U;
    tmp_msg_0.speed = 0.508209094934;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.type = 219U;
    tmp_msg_0.radius = 0.367299184977;
    tmp_msg_0.length = 0.697863618349;
    tmp_msg_0.bearing = 0.247553408607;
    tmp_msg_0.direction = 129U;
    tmp_msg_0.custom.assign("DDXVLIBWWSCZHVRPOZFTIUQISDAMZVLFKRFDAZCDKLXEVRLJDMYAZZXKIKPHKKBQJVGMUOIAYAEKI");
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
    msg.setTimeStamp(0.241252199785);
    msg.setSource(10841U);
    msg.setSourceEntity(38U);
    msg.setDestination(14696U);
    msg.setDestinationEntity(171U);
    msg.type = 244U;
    msg.id.assign("CQKIWGNDDLPHBYVDXBJYJJBAASFGBEYTZMLBSOKVBOJWUIVILOXKJVLHQPSCTCGOMCEXYDDTKIVKYLBYTXIQVJVXJYOFNASZNFHAIZWUFULTQZTQELWTLFKXCISGWMFZPJDENZEDQSXSCQZNYRYNEURPQECDCRUPRHWACFIKSASFQEIZEMHURUVUUIHZYGPWWRGTRMDANPP");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 29899U;
    tmp_msg_0.control_ent = 8U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 50U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.444755312423;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 67U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.670014072125;
    tmp_tmp_tmp_msg_0_0_1.z_units = 246U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.354048235915;
    tmp_tmp_msg_0_0.lon = 0.0693183862719;
    tmp_tmp_msg_0_0.radius = 0.951372589007;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 92U;
    tmp_msg_0.proximity = 173U;
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
    msg.setTimeStamp(0.695325214962);
    msg.setSource(10580U);
    msg.setSourceEntity(87U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(163U);
    msg.type = 191U;
    msg.id.assign("ASBPJYRRGUCVXPNLTGZKHTHOTAYIOVYMHIXKERBWEGLKNMHMXQTIWGWQCUHEHJYDMOJJQBVEZZKT");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18400U;
    tmp_msg_0.priority = -118;
    tmp_msg_0.x = 25814;
    tmp_msg_0.y = 26409;
    tmp_msg_0.z = -21868;
    tmp_msg_0.t = -26649;
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 2007U;
    tmp_tmp_msg_0_0.custom.assign("JDSCNMZOCNSBLREVCPBEMXVEJITMEBHPGHDLLGEKJOZQROJAUZPGNIUOIKFQHQCWXIGPCYQJXVMTTNAKLWYMERNLHAVWBSXKWSREWBZSSZHYYDHCRRUCOZFLTPWWORJPYDKHSGHWAXPUAWHKJURXWYZOXOJFTTNIFYGFMGMMXUGVNTQDNXSCQPMVI");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.84112226443);
    msg.setSource(15474U);
    msg.setSourceEntity(226U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(181U);
    msg.localname.assign("SQYROAGCBOWRPBRXOBUVZFNGQPWWKGZNXDEFNWFPOHEDPYMCQOKHMBMLZJSLAFDLEZCAHGIIVEYKFPPYGJRCECHRVYCTNBQFUVJBWBQLGONDUNHDTRMZAYTGQGRHJEXOFTXXKAJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ACQSVGGYNHLLEVYSQHNBMSFVITHUIGMNFOVHVMYRLYOFJDWJPDCFXHEUYLXQFPKBDJUICSLXTEPPNVKGIXBJENGPRQWTGHKDKZTONYJPJJZAZROORFGMGWSRMTHASHRWOZZWLBWEUVFJRRMKIXIQANUNUTIVPOZXZVCRYQHOKBAEGBOLABDHBCQAPZCIXKXTLRTDJMC");
    tmp_msg_0.sys_type = 24U;
    tmp_msg_0.owner = 49246U;
    tmp_msg_0.lat = 0.111413211467;
    tmp_msg_0.lon = 0.738299562831;
    tmp_msg_0.height = 0.515942579626;
    tmp_msg_0.services.assign("DPCCOXTIBVSGQZNGYHTCZCNMQTWLPTEYFWGFPXIZBQIWDKJFJIRXSLEYODKUNCACAHOAMGVOTDULJALUQWEMRJMYSNXVGDAMGWKFLFITOHVYZRZULQYGDAZVJRSNGFMOLSHRRFVEEKBMEBAEP");
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
    msg.setTimeStamp(0.772630170901);
    msg.setSource(6594U);
    msg.setSourceEntity(131U);
    msg.setDestination(13914U);
    msg.setDestinationEntity(235U);
    msg.localname.assign("UNKSRHYOMVJIHAHRHHVDYQFBFAPFXEIA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FBNVIYQNRLBSOMOTHMUHPQUPDDVOIYVIHUPNRNKCCZTGTJPZMWLVKWJSWQPESNJPFQCTSMORWQYKDDGXZXFXZVQMJILKLPOJTTUBGOUYSERHVWLVTADCTGRSYYICDSDZBEGBNWPVZZKGELPKNRGUCXHYLMEYMAXCFBZZUHJKSMYZDJTAYBWRXFJFRXOGCBENGOHXOHLCEEULSRIFAIAEJAQEVJCQALSIAAOVUB");
    tmp_msg_0.sys_type = 57U;
    tmp_msg_0.owner = 33598U;
    tmp_msg_0.lat = 0.212880281144;
    tmp_msg_0.lon = 0.968974692797;
    tmp_msg_0.height = 0.756356109054;
    tmp_msg_0.services.assign("WJZEDWRZAPFHMAEL");
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
    msg.setTimeStamp(0.434119838014);
    msg.setSource(64853U);
    msg.setSourceEntity(87U);
    msg.setDestination(31806U);
    msg.setDestinationEntity(67U);
    msg.localname.assign("IAOODWLGDJXFKXYEMDUWVJNRTWHFDQEHVF");

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
    msg.setTimeStamp(0.694126908821);
    msg.setSource(18659U);
    msg.setSourceEntity(214U);
    msg.setDestination(28403U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("ZWVHYTIXLNJHUHBCQAIAVYHPDHFMYFZVJZQFOIRAYWFBDCTDSFAEBJAFLPKZCKMSFGNQSJTEUDWGEP");
    msg.predicate.assign("WBYBMHACZWQQNEXDIQYYKIDNUUGHHBJFUMPXKMOPABIRTJFSETXJBRKDVGAXTXXSTDIVQPLLPYVAWGFNYGWGXCCZHWRLLSCCQSAPMIRFLZMNUZMZPTFNIVKLHJZKEZHT");
    msg.attributes.assign("YGUHRUTKVZRLYGOLRGSOMTCEOQFJNIQZMDDOUBPJNTOLFATJKXCZVXGGXLIRIVSRQDWEPSIIHUZTAYFHFUWDJNDSYWWCVNXFJLMWPNQCQMFEBWESUAACEIYKHTXJIADWIJNGB");

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
    msg.setTimeStamp(0.53325134693);
    msg.setSource(45507U);
    msg.setSourceEntity(42U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("GCHFSLVLNDIYHWTBPYFGAAUFLJVGSVKNHZXPJDIHVDTCWHYBHPMXXYZNJOGOANMODJFZRLLDBBTWWWUVKQKCQMFPMYLRWOSDOADIZBUOIZTSXLRRPFEBTHYANNTGEEBQKLZQQKMARGQYIUCCXYNQZZWHJFXOPJJURPEUSTKXZGEWMEQMFHRCRVWOUBVXICEUBS");
    msg.predicate.assign("OIPGQUOCVWEJDQCXRIUCNEFDOMOMHHRCIGVWYLDJAAKQJSLLGRZRTAWYERIYOEC");
    msg.attributes.assign("BFRKCSZGAOYPHEEANLMDEMWRKWNBBUYOVEXQENVBCXQBPGIJJYNVI");

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
    msg.setTimeStamp(0.739473760978);
    msg.setSource(22055U);
    msg.setSourceEntity(233U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("DLZKOPCNLYGAWAUODVSUJMWHNUDVKEUJTNNZJXPFXFIDVLQXOAHYOHMJYAQWAAKRFERAYREOLDWEKEGXQWOHVXQBZCPQZVUCQWCQESYPUNOHRSHWTNJFIZZGJRG");
    msg.predicate.assign("JJGCKSGXVBLWVOVLKWZIRDHSAVVZZNQVWUDXRNBQVRORHXZKIBKDIBCMYGMPPPAEXPVQMTUJBRDYUWHHARTJCCFKIPUTMFBBRZZXWACOGEOWQEGXQRYNZLDGDUUFSMNJIRLZCUJKHGOAVGTQBOAXQXGSXPWYHDPSUNJXFLSDHHDYIBCOVKTMEAYZIHLSMKPEIETAEOFCQTWRTANMLFLWQIYAOS");
    msg.attributes.assign("IONNFDMQPQQTEMBDVRUHYSVVCHFKDEXKFIPLLXYTKKWKDOWAZJRMCOTDTWXQXBQLWFQAIDRZUFBEKAAMHXGHKLEVO");

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
    msg.setTimeStamp(0.097886922247);
    msg.setSource(61609U);
    msg.setSourceEntity(92U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(235U);
    msg.command = 175U;
    msg.goal_id.assign("LGUHQLNJYLODFBQYPAHAXZLVPPWOPKDFVHOBRDIVESUAYLKGJMSTSQMUHQMHFZVGJ");
    msg.goal_xml.assign("OIFPIPRGQMGANUUWZYZOSRCWJNKVNOYFHXSCLDFCFGYZFBTOSEOHOWLHAYZYGVPERGHBWEGQVAUPIPWGAEXXTLVXKJMRMNAUZDJEKWQYXIXCMIBJCOQFXQVTXNDVQJUHVKKMDLSENZJVXVGBRAHHNACMDHJSKEOPSLMCWPIBAXJENQMWJSTMYLTCBURJTGRKNDDLDZTMRIBALISDVBLRTSPKPYKSZWNCIQBEFEUUDIR");

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
    msg.setTimeStamp(0.921633292368);
    msg.setSource(64035U);
    msg.setSourceEntity(208U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(80U);
    msg.command = 100U;
    msg.goal_id.assign("SZNAXJGKFRPVIWNLGSQPLUYBIGLQYTCDWHCWFXYLGTBXGTNNUVRGVBDMQKDDMVJCYUOBCQULYOHFUQQBRBPOPQZWNFZDZEHODIZHKZSAQCZLFJYLGKIERYXGPJGJRWVYBSSIWJEURYAQMDDBHXZHUBY");
    msg.goal_xml.assign("IXCVZVKFLJXHWTRICCZQLFIXJESJKQNMNAHWXJJKXAKLNREZHXGEIRIUXYG");

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
    msg.setTimeStamp(0.240408296159);
    msg.setSource(35761U);
    msg.setSourceEntity(159U);
    msg.setDestination(10810U);
    msg.setDestinationEntity(167U);
    msg.command = 159U;
    msg.goal_id.assign("DCPBNPFPXCMRXFTNOAZHFDNYOOEQENBLODFLDBHODBIQAJFKQAHOKANRMABIINTPRSPGLXMMHGJDWOESXGUZNIZRMCTSDYCVLZHAMPV");
    msg.goal_xml.assign("YNYUHXFYASZMSWFCZTKIPZVILEXVZL");

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
    msg.setTimeStamp(0.660398589884);
    msg.setSource(32838U);
    msg.setSourceEntity(207U);
    msg.setDestination(55968U);
    msg.setDestinationEntity(182U);
    msg.op = 234U;
    msg.goal_id.assign("RJLIJWJASAOXZXHIHOGBLTTMLVZFMSUDKUYAYPXONPVSELVFDGFHQDYRNEJSOIUZXFBIGTIWAKGWPPMYNMOARGLWEVGQBKQEDYSQMHHZCEUQQTKJDMICOZZDSDVUPHKUKJZTYWQHZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HQUHZAIYUDTMXBIUVELVEGJGAJDOCJSBRITAVRWOOQXWFENXCULFSHPMBGKHYTVFTFZKEICBSEMDTPFPLDUDFPPVGQWRQLWMQSDPGITGCIKKUNLJGYCHJGZVXYJBIYLCPDNDBSHZPTIDXGTMBENAVNTEJLXKHEWHRAQHYCSRFQODQRSSKZUAKUTWRYAXBLOWRJAFPMZNJFGLOZ");
    tmp_msg_0.predicate.assign("KBACVWOCQPHHZJVMUIYPGKVRWQACIQEYNVOEQNEBRKDJCIPFVNBXJCSIASGPTQDXUEUYZYMTBNMWTFKKYINAUZODTDURNGASFLHTHZXRFHFMASWFRBVGRIZDYSUIIMZZRPTLSSGOQLSGQVOYLTDWVWOSUFRJXVLFB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WGEEJUZBDHCYNRCOLYUWH");
    tmp_tmp_msg_0_0.attr_type = 142U;
    tmp_tmp_msg_0_0.min.assign("KBKUINOBNCHVWZRIIKFNKVPYWCWMTVRBWGPPQQLIEPRRNDCQHFADPQYAYXQDLRELSIHWZNPMERNHWBFBYAIQORKVKIZTGJJGHCLMGJCFL");
    tmp_tmp_msg_0_0.max.assign("DLJFAUWOXXVFMNLCPUXOAPGWZTRHKCNXAEGYJLIXPSRYUMPKNAGJZSGPUPHDBSAWNCJKYSLYEMDZEMHMZWDEUPUGLKAORGMTZIIKJCVIKFNHJGHACMHLQIOHNRXJKOEBRSSLVXCTXQFKADVUEPBEBDWIHMTZXWIORRBBOQWVLPQPYQLTNVQDGQSXUHZWKACRISGZIUJEQBGWVBNJTUTWTCDVROAYZRTYNYFFNDVQSFEYMSQDFTLVJHOMFB");
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
    msg.setTimeStamp(0.91165683283);
    msg.setSource(31302U);
    msg.setSourceEntity(58U);
    msg.setDestination(45270U);
    msg.setDestinationEntity(200U);
    msg.op = 141U;
    msg.goal_id.assign("YMNLQWFNGUGCMUENGYEPHMVYLNFJLDJMKQVZHKFVOSVDEGLR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KYIFOPYMDZCABBNNEOGUPUZCXFGZSBSGUHQCALAQIGVFPZYNIWUKFHDIAEBPJIGQUDDSOESBRPCBOVMF");
    tmp_msg_0.predicate.assign("DDELLZCYIYUAIHDSDNLDLZTSWUVMECKNXGVHPQCDVPWKYWXZHAUK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SFSAJTLCDMWEMDGQGGSPUANCKLTHGJXQBEKITFWASSNLJIZPOTCGXNDFQFZFRBTWNHJRROMAQTPWDSQBHLOEUKUCIMNWBFBMAFRVAQMHHRIONBIHLUPCFXGXKEPVVHDGOFKEOXTYUUVAAADXPW");
    tmp_tmp_msg_0_0.attr_type = 199U;
    tmp_tmp_msg_0_0.min.assign("ZXQPBXWDEODWBLTUSXCLASBEVBXGGHDSYXPKIANMAZLRMIDVYCYDYOIEIWFVDCMQZMPBJIBYUMLPERHBLMEAQSWSHTOIBTRNPTUQTOGSSECCVHGJUJPWAYNRANAEOZDTUTNVFOYWBIHGFGQTMUUKCHWOSGNSGXMJHBNJNXCUVALLJZLKQRPKFKXJDPGHTNIUFZLMKCAQYKVQHLRCXUPIEYRHOZKWOKRWZAVJTOSFDMEZQFNJIYXRV");
    tmp_tmp_msg_0_0.max.assign("QTGAUOBHQQUKDBMKREOXHLQIONKVVGWMNZAMQTWWDBHEICVCJXBDDUKTAOITJKTYLTSSKMBWFYNIDHNFHNBTPUQSSYYAMSZJMDWKYOHGFBCLZYRMYQEOAWQGAOJRZJYVPPZEEVYFIPEISHITSFMVEKUZKPPCDLFOFSSCRRYTBQXOLDDGBNUXHBJGPREXVLPGWCJMXVFHGECWRARSDCMZJUL");
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
    msg.setTimeStamp(0.0773771185336);
    msg.setSource(6879U);
    msg.setSourceEntity(241U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(80U);
    msg.op = 134U;
    msg.goal_id.assign("PXJEFDJNNCBBSCOVRWONCBUPKQJTKCRNCDWLEEZBSEXEDTZRLERDGYCLWBTPNARMKGIJCEFUISVYCUSKBAKUTYEWGJZHALAIYDHPHAGDXMUAPLSWXOXKJPCDHHKFKMNOOWYTOKLIWNIFZEQRLXVGFNUSTHYDQIVGHIFQJMOXMABPZGJXTHXLSRGYQZICSAUNUO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KPCYFFSMGXPUXXJESTRRJYRKXNAZOLPWVGTLOICGEQMLFCUNTIEZMPDNZIVCDYZPCWBHBQHLZQGGVATMBBAYOBDMUJAJZSADYSURPVSNXRKGPFOZMCLYJWPJWDNKBAFUNRYLHKMHQHIELVGHZWODQLJROXRHSCNQVEMUNLOQITTYCSEFSQTWJFTFKUJIWKHASIOGRVTIUMFXZKTEIQKZBGEBAADS");
    tmp_msg_0.predicate.assign("AAHUGTFYKCDVFH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SIQBDLDTUUTSEYNRDEXXASIPHJXYVRVBPCTYEMGL");
    tmp_tmp_msg_0_0.attr_type = 207U;
    tmp_tmp_msg_0_0.min.assign("FJKAMSLIHAONVKGWZXLBWTCXKFDPQXRSZLECZWIYVWWCMSGGPGTHFXWUMZAXJCNVZNHUPJWITMQQSHEBTKSNBPCDYQUCGILJMBIQTRYCKNODOHRYFBFXVLDNRVSVPGJIVRXZOHTDVRBHKGLDZMKESPTAWJDC");
    tmp_tmp_msg_0_0.max.assign("DQDDFQZOUHHRPXFSGABPWJVUNAJUQ");
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
    msg.setTimeStamp(0.46007516596);
    msg.setSource(6965U);
    msg.setSourceEntity(185U);
    msg.setDestination(1867U);
    msg.setDestinationEntity(51U);
    msg.name.assign("GTCEUIUQNMFXUKPPJOLCQLSIIKMOTSSTOUNMDGAHR");
    msg.attr_type = 36U;
    msg.min.assign("MHECKBGCTIPDNBILZCGDDKIUXDWROSXOXQQNKSTIIMSHQQYRANCPVWNTEFEYWDRZJBIYMNQGYYTFHJKMRPRLRWJMFOALMEFZCSGAPIPMOKXVXLK");
    msg.max.assign("NYTBOILTKRAUEZRHATCXQCW");

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
    msg.setTimeStamp(0.685833162831);
    msg.setSource(2570U);
    msg.setSourceEntity(32U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CEWVKNOQRCRAZBQLQIIRFDQRIRYEAIIAIKKRRCHTFMLAPCAMBSLEJSTHHFXSNDCJTDCTPUYZRKOWEDO");
    msg.attr_type = 190U;
    msg.min.assign("HDUIBQZFBXEEGCFZKRKOVQPLHURFPTKMUIVHEBC");
    msg.max.assign("CYPQUVWYSQYIUJBECHZVQVGOVIWHSYACYEKQVPWQHQHLDJFLTPZCPLRHRKHCWIXXNOTRDMMJMOFAXNGQERZGWNKVAJVGQBZMKRSOZUHEVSEROCKFEKGYPDRSXGXUFRTVTOGWSRAZUIRPBZIAAOCIKYPJJFLNYOAMSTETMALDAJNTNLFIXKLGMGCFXNTHHDBEFBKFWALSQPODUITNDPWZBSZLNTCQUESIMJWDJIHBBJDOPYCB");

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
    msg.setTimeStamp(0.985975934745);
    msg.setSource(20112U);
    msg.setSourceEntity(10U);
    msg.setDestination(2719U);
    msg.setDestinationEntity(130U);
    msg.name.assign("XXSJSBWYFFXLJMYQECIAHNJRELZKMPHJBKOAWLYGBKWCZCVIVTKGGSZTLDFSQZHCNZARERZIDFEFGPOPQDZIWXUXLOFMCGEVPBXYNFHHVNXAQRBXTMUTUQGXIXWV");
    msg.attr_type = 138U;
    msg.min.assign("SKOTGBIKQAXKXYOEDZGUWVWRMYXZFGMNQQOIQTTZMUQAHLUEYTWLFCJQQRVYORMFQR");
    msg.max.assign("SXMMQMWYUDVTUCIBDBZZNSAHXWRPPEYTXILSUQBNCAGUTRAFCCUTEYAFENZMIOMRZOSMYBHAKSEPRLDGKSKPYVWRCDVMKLTIPHPAOLVKNZHHKFROPNWJHDJEJDQDBWJAGIHMUPTRDVYUEQEQGEOYDFFMBXZFLHHYSRFNLLCGZAKCGFCAJEKTNOOJFBILCUI");

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
    msg.setTimeStamp(0.812230194495);
    msg.setSource(54710U);
    msg.setSourceEntity(148U);
    msg.setDestination(16419U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("GHYXXAIASYEZSQXGJLVJAFWCDVKYDKBZMDPZCVUWOZQMUSJSCADBOYPTKUTOCHTHIEEALZVYKORTBGSIIJFOTPJKNCRDCQZQTPAUZIFSMEJBXYXCUQFATWFBNVZTCNTMJHONUUHXKPAIQMDLMURQDOSYOEIFTSWENHBMPEEBXLPZHSLBPZLUJEKEQKGLMALCROQBIOKBPLFXYJUMNQG");
    msg.predicate.assign("BHTOYFBGWKWYOVWPCRWQNTIEQTYKTUJPVZHMAQIVPRBBEECQUXEYSHMWHZLEHGZLWJOJARARMKJINDGEFQCSHLALNFQWAESSUYJRGXFXGNBMUPDNAGPYMJQXMVDKOEGARSJBWWRZTIEUETHUTHSDTFHRZCLBZUVIKSLMNIPLJOCCYBVTFAXVRBYUXUDPZDOJMKSFTNSXZRDVOQNLYYIOBIKVCHWLOOPFUPDPGNDKFXAAI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JLWMMFQNZLNCADHXKNMDNPLWEKJVNNYVNRTPMPJGFUASYYWXHFPBZTPZVKUKUYPSOZWYMGOYQCLSICNCCGEMPRXIJLXFRJTLXZVUBCGIXPSSHAQWQSOYZTVVQDJVETOWDDWUZVHSRFTYJNXQBIEIABHUEDBHLHBWBHKDVSBQ");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("ANWEVYRKQNFDNISYCKVSMZMBJIGKNYZMQDXCZKAXEXDUMUFDIRJOCITKGIICRHWSQDLUVCENQFAVVAKIXYHPBTFHPLGCWGNZNTXDXJDJKZBOVUEPSAJZOFWQAASYEHOFHVCYLGBXLTQQUTWWPOUETXHWKLLUGZIQPSFMYDEGWTDDTUOGZJZOPOIBFMVQVWARAOJHSMH");
    tmp_msg_0.max.assign("YPGFXNEKUMUOYSNJHVORRMBHZLINVZVWSKQREPRDWDCYIIFGCVNSNJRSUPIAQIANMDIXPZCYFMXMATUKWCEJWUWAONQTTRJPDCUEAKTIFKCKWKMTJEBBBNDFFXBFZUGXEJRGSRPEVQLXELHIZQDAGLUSZCSYPYTK");
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
    msg.setTimeStamp(0.646974174813);
    msg.setSource(513U);
    msg.setSourceEntity(83U);
    msg.setDestination(64328U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("AZUUKYMJMWXBSRHNEXWMVBOAMCGJVRGVQSNBGGQDBQVZRTUQGEITZRGYVPBFYLOBXXJXFSJKJLECNIS");
    msg.predicate.assign("VRIROKYWBNVEJXIKJDXRKHKBYUXOXBMNZXEUSOESDWWFNPGTJASMAGVHKOECJGFOSVWDWRHAENYTRKAQETYUEFBAIQDZCTZLVBAUPLILDTGBAZMLJFKFTZPQCOJSTFIAPTCFIHQMZRHPQAIDPQMHYWDKCRVEJVWLMSE");

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
    msg.setTimeStamp(0.85878318753);
    msg.setSource(9412U);
    msg.setSourceEntity(82U);
    msg.setDestination(42337U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("RPEYZKBUNGBLCQPCEHUXICQPTDDAZFDKANAMLGZJFDJAXKFDITYVXJFQZYIAWKLNSLVFXSNMKREYRTNPCTLCNQGMVOJREIBZWNARLLAVSFXOOF");
    msg.predicate.assign("SLCYUAKDHGAVSFWVHMFVDAVTZJFZMZRARWOOFFGIUNOLCOWJNFVTCJMPJHTNUPTBKMQRJNLJUEPGREXCEAQZIZWEXNSDSVPNIYTTPDVFMXFXAKWYSKQULAMHLPSDBIEIZOYHGDMQGUPWYGTSEHZDVIXGIMMZTEJIBLXHCNPBRQSNTQAGUOWBKURJOVBJBL");

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
    msg.setTimeStamp(0.718735712699);
    msg.setSource(36659U);
    msg.setSourceEntity(21U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(150U);
    msg.reactor.assign("MZCFLTVIQLMZOTFPBKDYGMTSGADPKSNSPQTXQVZUCWXPZWVAXENEHTENWRFOHTPWAXQZKLRISSNHAMBIOIVVUAOFSPEKSIYBHEIBWRUQOJUYMIXXEKAJCRAWHHXCOOFYOOLGNCEGLJYKBDUGBJZECYMXIRBTPOYZKJLQRBVCHKDISWVGLHRMDBJREFRNYFXTDDRMLPQJCSJGFP");

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
    msg.setTimeStamp(0.591966640266);
    msg.setSource(5341U);
    msg.setSourceEntity(132U);
    msg.setDestination(20867U);
    msg.setDestinationEntity(93U);
    msg.reactor.assign("KTWNJMDOEWIFBUMUMPFNQCJOXUHXVTADFVMZDPKAIOQDQXCMUSJAGRHVQDVKTBEJGAPYBENSUWDOHPJEWOWILLKSIMGIPNWSCCXQMRWBLHJGFBWSUQNPHZXJNFZCQIGVZDAVIAQVBCBCNGIEONKMYZANPRKBGFXZWOJEUCLVGTYSQLEURKLELXOTYCHPETTBAXYGSZLAFKHPREKTYDLVUFJTLYFYSTGKOMSRHJFIDSARHZXNMRHZBCYZQ");

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
    msg.setTimeStamp(0.90639462469);
    msg.setSource(12534U);
    msg.setSourceEntity(134U);
    msg.setDestination(19446U);
    msg.setDestinationEntity(237U);
    msg.reactor.assign("FATDUNROHZMMZMOMKIKMBYDVSZSCUCOLIEEQNVYODNXQZRNQDAWFSHGITZUPPGPJMBPFCVPTJUIQGDIUFZQWTJXBVMBHLVQLANDKSCLIEFEIVYW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DDDVYGTPZUUBSPGNZYLTRZNAIGPAJOWKNWVKQRQXTPIFAKHAKEACXDMXYZECLKMVGFVWPMZYLOPIPXGZCHDNKCXJWSMELNBDNWDIZSFOUQKIOJBYQPCENVBBYFLJUQMHHESKHTCRYEAAMUSFUATOTQIWWLRVVHIEUFJPWBDXFMKRGWSPRJBTNOJSXVXAVCBQUCLORXOJIETLXLZQJUIYSSRRKZMNGSHADNMCOTGWECTQLRFGMFIY");
    tmp_msg_0.predicate.assign("TJJAIHLTMFMNSSANKJDRGWVTEZJZVVKWMKCDPHQGMNQBAXDDIYRDUNUWUAETASPLOVBEOQNFTLHMIRGODHBXOFRAZUPSDSMPOCAH");
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
    msg.setTimeStamp(0.247293357998);
    msg.setSource(12229U);
    msg.setSourceEntity(214U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(34U);
    msg.topic.assign("NUPFJEOKWJWVODMUMGXTHILBCAWBSGAETKTLCXWMGGWELMXRKYIPSAUTVTQZSRFSECZWMQBUUCXPYJYYILBSNOEIIXFMHIUKDDVRLCMXRXDOVJCZPDNQQRTLBSKKUHUGAAVDFZBUFHMGKIYAYPGEDDLFJMTWZPCJVFQC");
    msg.data.assign("OXJPUEVHWIZXUZUSPKPXVBTKQPCZOGDPIBHTDQDMFXWWQURINLGFETAPAHCTIEKDRLUFWIGHIOXQZVSLBYNTFAQLWCQPWNXORQAVMNBSSSTBZYEEYUJXLOQMCJEYEMWSAOCGJDJQKHKXZZVRDFKFJVSOSKSCBCYFHARPNDVCVJTKMKAMKPDYPZGGJEFRLYMTANUUXRZIULAIRNVWGLHIDJBGOWEEWHSYMLZTCNUBNRDMQGHBTOJOLYVYMN");

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
    msg.setTimeStamp(0.986805678476);
    msg.setSource(18673U);
    msg.setSourceEntity(52U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("APODXECLEOKNLHLPBGOHJHXWWTIYIHWQDCZVSCNXCSNVZYUTUNQLSMPJYKRRQRCBLRPVRQIKZWOYNQSUWODTCCTPIRSIYAEMKMPHNWJIWGNQYTZIGDZVNITDKESRFULMHMPKGXCK");
    msg.data.assign("FXBHMRWEXLBXXDHAIMRUYVQKFCEQYLOMMWIQFLINUVKWTSTXOQYUBUKRTDZOJHKVOLPCQECEFBWFECWJRKSJJQENJAFAIMMDDYWGZSVAIHHKCTZDXBASZEETWRJORVTXRMAGYPLYWHTPOCUYFF");

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
    msg.setTimeStamp(0.791143834241);
    msg.setSource(9488U);
    msg.setSourceEntity(218U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(241U);
    msg.topic.assign("TDVNXLWKNGUKABSEZSMFCSRXGNDJJCIPIVELQCHGBYHLKGDKAOTGXDFIQFGADXZDFNFYVVWQPGPRRJKPIOQNUZNERRZCWJBYMPHKJWMVIYYABNHMXPQDOUSBHRQGLJSBHYUXXUUIEISTZUHBBXTMCFDAUAWAZLLRAOM");
    msg.data.assign("FJLOVJEGDKYWQSYIRPANNNIEVIDPLXINICRZVHNFYWDETTFYGKKPMSTKOUQUMPWDPLDBHCBVCUXMWAMVWMGFPWRJLVBETCTRQGQQZLOABCTUKIRVMUJCQFHZFLHKYULMYENXRBGJXDPMOCCZEBBKQNARXXTZIDGXLQYUXWLEOBYQBSSRNVMOSZ");

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
    msg.setTimeStamp(0.796833646099);
    msg.setSource(51676U);
    msg.setSourceEntity(189U);
    msg.setDestination(58124U);
    msg.setDestinationEntity(146U);
    msg.frameid = 172U;
    const char tmp_msg_0[] = {-108, -69, 51, -65, 58, -57, 106, -21, 77, 81, 38, -30, -45, 126, -29, 86, -27, 106, 44, -1, -107, 75, 81, 78, 57, 81, -95, -13, 54, 14, -97, -26, -37, -111, -29, 11, -36, 68, 48, 38, -61, -61, 125, -33, -69, 11, 95, 53, 24, -111, 5, -41, -52, 34, 83, -127, -72, -15, -4, -4, -122};
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
    msg.setTimeStamp(0.412881662065);
    msg.setSource(5369U);
    msg.setSourceEntity(231U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(55U);
    msg.frameid = 229U;
    const char tmp_msg_0[] = {13, 88, 5, -32, 111, -48, 88, -60, 21, 18, -70, -101, 108, -127, 108, -6, 125, 41, -62, -21, 7, -69, 5, -88, 95, -83, 29, -70, 47, 93};
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
    msg.setTimeStamp(0.716758497301);
    msg.setSource(57234U);
    msg.setSourceEntity(23U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(91U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {79, -56, 69, 85, -27, 74, -81, -66, 93, 36, -81, -34, -42, -65, -102, 53, -108, -11, -69, 54, 16, -14, -128, 15, -128, -115, 126, -71, 32, 100, 100, -22, -58, 40, -83, -38, -92, 75, -127, -120, 46, -115, -72, 12, -92, -87, 18, -53, -41, 73, -90, -9, 19, 24, -76, 88, -70, -25, -74, 58, -127, -85, -26, 64, 108, -3, -17, 43, 108, 89, 4, -115, 10, -41, 100, -95, -42, -2, -15, -117, -47, 120, 116, 96, 116, -35, 9, 70, -75, -104, -18, -104, 27, 80, -55, -25, -87, 57, 52, 121, 25, 46, 65, -14, 62, -3, -89, -63, 110, 107, -127, 21, -75, -70, -32, -69, 42, 119, 113, -104, 9, 86, 11, -103, 80, 1, 38, 75, -117, -78, 56, 12, -91, 76, -9, 57, -112, -39, 33, -24, -122, 106, 29, -99, -6, -18, -126, 122, 115, 70, -37, 87, 116, 23, 109, 40, 117, -103, -113, 24, -79, -28, 7, 82, 40, 43, 31, -115, -121, 125, 111, 117, 123, 78, 70, 4, 109, 25, 110, 79, 78, 23, 4};
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
    msg.setTimeStamp(0.0233358255692);
    msg.setSource(14539U);
    msg.setSourceEntity(235U);
    msg.setDestination(41487U);
    msg.setDestinationEntity(150U);
    msg.fps = 51U;
    msg.quality = 22U;
    msg.reps = 201U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.426940133759);
    msg.setSource(35368U);
    msg.setSourceEntity(65U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(35U);
    msg.fps = 236U;
    msg.quality = 13U;
    msg.reps = 112U;
    msg.tsize = 139U;

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
    msg.setTimeStamp(0.789944139027);
    msg.setSource(20602U);
    msg.setSourceEntity(236U);
    msg.setDestination(14883U);
    msg.setDestinationEntity(90U);
    msg.fps = 211U;
    msg.quality = 224U;
    msg.reps = 119U;
    msg.tsize = 234U;

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
    msg.setTimeStamp(0.998261394661);
    msg.setSource(58072U);
    msg.setSourceEntity(190U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.13754467455;
    msg.lon = 0.0555958123291;
    msg.depth = 186U;
    msg.speed = 0.290670262683;
    msg.psi = 0.679835307438;

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
    msg.setTimeStamp(0.382578405821);
    msg.setSource(47350U);
    msg.setSourceEntity(120U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.840419030494;
    msg.lon = 0.0783621392168;
    msg.depth = 133U;
    msg.speed = 0.0568342032402;
    msg.psi = 0.565471132798;

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
    msg.setTimeStamp(0.976833021236);
    msg.setSource(9498U);
    msg.setSourceEntity(94U);
    msg.setDestination(40499U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.0113382374639;
    msg.lon = 0.000666279431251;
    msg.depth = 19U;
    msg.speed = 0.286329926479;
    msg.psi = 0.443552217026;

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
    msg.setTimeStamp(0.333828290358);
    msg.setSource(31251U);
    msg.setSourceEntity(97U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(182U);
    msg.label.assign("OGVJWCCSTVTADKDMFMXFBLHTOXPOCRBMPFH");
    msg.lat = 0.981677895137;
    msg.lon = 0.226756329694;
    msg.z = 0.589191600722;
    msg.z_units = 9U;
    msg.cog = 0.438287157576;
    msg.sog = 0.945308709619;

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
    msg.setTimeStamp(0.427140427528);
    msg.setSource(27290U);
    msg.setSourceEntity(33U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(81U);
    msg.label.assign("FFPQDSHHSBKSESN");
    msg.lat = 0.666769683303;
    msg.lon = 0.717256580821;
    msg.z = 0.169717980093;
    msg.z_units = 134U;
    msg.cog = 0.333691399353;
    msg.sog = 0.533021390358;

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
    msg.setTimeStamp(0.477845997873);
    msg.setSource(53530U);
    msg.setSourceEntity(133U);
    msg.setDestination(32421U);
    msg.setDestinationEntity(49U);
    msg.label.assign("RTIZZTUCCLGBJKGQQSVVNVEDAVDUYYGNWDCZZVKBLIELTNACLYPUZIMQDQKGSIFIDRWPMEKKVVODSCTFSHBJMMWIJXOJSHXEYTAOYKBUFEJLARXFHDIWYLASLWRZGCAVHMMGXTXMAOPFRRNOXMOJHBFENNZUMRNDEUOX");
    msg.lat = 0.997662604888;
    msg.lon = 0.323359586805;
    msg.z = 0.370525283713;
    msg.z_units = 151U;
    msg.cog = 0.644868081527;
    msg.sog = 0.63001799087;

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
    msg.setTimeStamp(0.0600340087388);
    msg.setSource(64384U);
    msg.setSourceEntity(120U);
    msg.setDestination(52150U);
    msg.setDestinationEntity(220U);
    msg.name.assign("MMHPWCSOKJAWNRHWEXZQVSUNZMFCUQSRJTGESCZJYGLVTIXQLOFBU");
    msg.value.assign("JYDPRBIUNDTGAYAOTAVVYZGDVWQQYYGOWTKFOSYUKQBMHQDBMSPVWKHBTYBUQKJGBLRWSGUCEXIXXNEIBRJLVBERSTPVZLAZJXSMFPKQWAHOPNEPLMPVRYJRNZHSTAJTDVKCKCWUWOVALUIIQITZJNEDGFLXISILHFOKKEXIPXDSCAGSEATCDHESQZTXXRYCQRWHRZCJFYJMUUOFMAVRCZCPGHQMZHGZWNFOLFKWFGFB");

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
    msg.setTimeStamp(0.359128682104);
    msg.setSource(50046U);
    msg.setSourceEntity(134U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(219U);
    msg.name.assign("ZQAUEUMICTPLONUZDVXXKUOREIKADETGNAVKADSDLAILAQDUZMWXWJCGBJQYKSNAGHFMRDRITFPNHQEKNLGSPEBOPAYVCSGSHYBPYCSCVUEZCPNRJLGYSZIWRVYMWYMYQMXXAFZFWHKWSNBFMCVLXRBNNUPQBJYSLQKGLHMJOEVBJCWOPTPKOARJDQTHDHUDZVRIZGHINGWWRW");
    msg.value.assign("YSKYHGFGDWWVOMJLGOFSVIHEOJOFACGBQSHCMGAXFLZXTPYEQGFPCTEABHAPVSHKCIUNZHMSECDIKQDQWWMSRXEZUMGRLIZODRTWZUVKPVJJYDCJPGCTYQJAMJRUOKPIOAMNPRRDXBZUIIWKPWIOBQFLVA");

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
    msg.setTimeStamp(0.859037869769);
    msg.setSource(34098U);
    msg.setSourceEntity(25U);
    msg.setDestination(30297U);
    msg.setDestinationEntity(80U);
    msg.name.assign("VLQQWFLPJXCRIVSBCUBQMWNEJFCJLEAHJMBEKJQYLOUHZXPYFOVWMNGWMRHJTHCKUJTGQYCDFMMXRLUZRBBTJJGXWGWAYGVOYMASZYTAEDMJOPTPFICVCLQMLZKSIGZWORFVULISIORCYWQBQQDXKZS");
    msg.value.assign("NZLMMIDFHOJSQMUZALVXNGYRTUJTSJKQIGWRULRBVCQCXEPFLPLUMVGUBFMOHIHHYTC");

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
    msg.setTimeStamp(0.730521279086);
    msg.setSource(21423U);
    msg.setSourceEntity(224U);
    msg.setDestination(55052U);
    msg.setDestinationEntity(204U);
    msg.name.assign("RFIXHJDAUQWOQ");

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
    msg.setTimeStamp(0.724084447864);
    msg.setSource(14288U);
    msg.setSourceEntity(67U);
    msg.setDestination(55212U);
    msg.setDestinationEntity(32U);
    msg.name.assign("USLZIRJAOCWAVAXQYGUJNXVCDAEHZEACJGDWHTSDZWZI");

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
    msg.setTimeStamp(0.964107066746);
    msg.setSource(27486U);
    msg.setSourceEntity(239U);
    msg.setDestination(61675U);
    msg.setDestinationEntity(77U);
    msg.name.assign("TVQPCGZQIXLVKYWERVBZVEBAWLRTEFDUELRLHUUQSUGUCXJHOOZMCXZJHUHQTHBNHPSINTLWGXMYCRFTGTVMGFLBALKHRYEJMJPAEPDEAYDICKMDLCVFOFKHJBPNZRWMNESQLXQBZOZSXFYGOOEKKODVXDMPRGIXGP");

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
    msg.setTimeStamp(0.00713682628908);
    msg.setSource(26893U);
    msg.setSourceEntity(214U);
    msg.setDestination(55709U);
    msg.setDestinationEntity(43U);
    msg.name.assign("XJSWGCDMSUWGXFLIEGSLDMFZHQVDBBPFAQSTVPCKSUVTITVNVHRDRWRQODFTLGVIOCQOZMCAEKWUSHMYMPAVSPOEMILPZHKBZJPLORLGBVAFRHOTEZRJROBHPGSDYOUOTUWDFYNPJRTCMMUXEUBXLQBTYVEXFUEGINXQ");
    msg.visibility.assign("SOMDHVMZOTCAYGKICDEKDNWZVSISVAVXOPKULLKSXYQCGPTTPUIVDGZEEIYFPBHXSQJEZGBZXHBCDWQIUNRAFLDVTACMWNXOUJVT");
    msg.scope.assign("FNMECABJVBXDLZRDGQMVUMHIINGWWJVIIQOYYSEEOOIN");

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
    msg.setTimeStamp(0.414757385785);
    msg.setSource(57647U);
    msg.setSourceEntity(239U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(154U);
    msg.name.assign("CHMYAGGNFERJMFYPWEVDGHJHZJWMJMQMCBMHGFPABSUXCBDWZXRRIVVRIBHPPEVXKCANVURNNQBBNPUHTFJTSU");
    msg.visibility.assign("QFDWGHPSDBQTVNYAQNNUHZPTVQIRMUTRHAWAOVXDKPHQSUUSDBAXRDZ");
    msg.scope.assign("YTTPPXKYRFGIFUEWYUOAUSSYBZIMCYAIBHMLJHUDKSBITFSTDKSXXSEQIDOPDTKGKXMGJGPXJRRUCPWJPKGLVLARMLZEVLRHLQUPYEQEDDLBCCPJRFOHYQHFPQNACNGBDRWRMLAOORXHMXDYBGFGACIMNOCTXEVIBZZFTLONSAZBIBAAQWBHJKJRWZVVWOVKUGECDUSQZM");

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
    msg.setTimeStamp(0.880721404822);
    msg.setSource(15680U);
    msg.setSourceEntity(67U);
    msg.setDestination(4927U);
    msg.setDestinationEntity(197U);
    msg.name.assign("XPITVFEOIRDIRUDJZQLVLACXYINPOVGJGHEKUBJETQZXJZHDIMZSTKVBQOESEBFQTCCHPAKYFUFKGGZMYIXMTXWKHUHRZEQBLSKYBWPWWCPWUGEAAAWAMCLDRMUYSSAOXNQGFSQDGCRXLJIRHPFNWYSLOBHUGJZGNDLZNVDSTPPUKLXVTTNVFRMYYDYQKDJNNHSFHLMYBANWIML");
    msg.visibility.assign("SJJKXKUPOGWUZKHQXNEVTEYARXCPHDFSJPLYRZEZGCLEKZLTBFYBRMIPQHWNWCLUFXYDNPMQPKUSQJJQETIKYHNNKKFRVMCJQBTCTMWPODQIAFSXVMBUWDBGFVOSAWENSVJYOMDGFCTWVYASS");
    msg.scope.assign("FEUGCLUBKKXFDWSSPTMRMEPOEOBPZGUMVBRAVLDNZPZUNQILMVIFBHYTOHQWKIOODQVGPZWYDFLDQDRYZLDCQNIASFSOIRFHXRJJVHEIYKEKJLIQKINHJTYAGTNBYS");

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
    msg.setTimeStamp(0.570419808797);
    msg.setSource(12491U);
    msg.setSourceEntity(70U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(100U);
    msg.name.assign("CHOWCOAVKSBFFURVJVOATNBSJNARHQJFUOUGEGPRLHBPGLXZPWWINMUTOZJGINLZQALMTTXHOSFPFAQDPMECPPRDRRHQIVLFYHDUHYSLCZOTMBZZIAWGBYPXWDSJAQVKGUYHFQBHXCINKECREKITDGSBLVQBZEHUBVFMAYJSEDZSTWGZJOILVYKUMGDKWXREXEGYOLXKTKYURWTRVNCYEZNSOMFAV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RQVHSKURAKYATMUAWTXUXRMRTBLQIP");
    tmp_msg_0.value.assign("ZFXNDJOGJOWUTPZBEFDTVYZNOPOZS");
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
    msg.setTimeStamp(0.428216010784);
    msg.setSource(31660U);
    msg.setSourceEntity(13U);
    msg.setDestination(21800U);
    msg.setDestinationEntity(16U);
    msg.name.assign("CSUNWBEXFDQCPPBLEOLMVMWEQIFMHMGSGODLVXRVWIGNNSHJEQYWDWUVIUEZLQTIRJFZXVPDGRAIQINKOVMVEDBJYGRVOIYYZPADSQYCEGQRSYTODRKKKWN");

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
    msg.setTimeStamp(0.888199358087);
    msg.setSource(33764U);
    msg.setSourceEntity(253U);
    msg.setDestination(10714U);
    msg.setDestinationEntity(80U);
    msg.name.assign("QQLPEOAFJWAUKIYNACBLZCNQQIEXVGZJBZCPBYJQFZYMFLZKOYCSKCXPEJUBLJBFAWSUFXCFXSYOAPVLKURBTVIIBZGNLDJSDRPTIYIHBFOZHWMVYHJBGKKEARQUHMKAUTMNPVSUYDXPE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQCHDLRWFFDAVJGQINFQWVIJJQCMCDYIWBOLFLULIOJADIEKDWHTWCRTVSXOAMGXAMHSBYZDBGQMCYZUDUXPCSRDHTRKJZZJIUOIEPERLI");
    tmp_msg_0.value.assign("LMTHZWMPNJUVGKXBTQANQDYYCKIVRRIHUPCYSCXKEKZVYUEOVSVPRCRCHFIWQKGVGVEEGUMOCZFNWTEKMTUDJNWRDFOKMZNEZSQLUTSZOCFDONJFXMMNVAUAOUDCYREQMNATOFWDDAIJBDMBXWZVPKOLZKXMRLSHQXXPRJEYRTBJGOHF");
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
    msg.setTimeStamp(0.499205583105);
    msg.setSource(735U);
    msg.setSourceEntity(39U);
    msg.setDestination(26892U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MSYWOQWZJPMWMLZNFJUALUAEDCXSTEJANTUNLOPRKCRTOJSLZPJTUVZPUCHVZSNVBKVIEADVFNKIXQFAWFFDKYFXIYPIBKMWLEBGJCWCRYEJYKKFHMIKVUVMJZUTFOOSSXEPEHBILHUSGBIWMHXXPYXGKPHARLYVTARGWBJHYODOTXEQUCCTIWXPBNCECUDMFQAZSGDVQOKJELRRBBNO");

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
    msg.setTimeStamp(0.214969034352);
    msg.setSource(61220U);
    msg.setSourceEntity(208U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(13U);
    msg.name.assign("NBSGETQMUACFNYIAREMCUNYKWWOCDSZFPFKGYXQPLXCXHVXWUPHSMCGQSKGWROSAESK");

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
    msg.setTimeStamp(0.439971502626);
    msg.setSource(63359U);
    msg.setSourceEntity(89U);
    msg.setDestination(52787U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ZPRUIYSDUSVMZTBUCVZFDWNIXQEKYUHLJNHQLWDGJFVRBODYVAQLRRMUYTIYKXBDAAEQCBOZUAWIMMREXKZFPTVPYGXEOFFNOTJLOLKDDNAGKHFTIYNSOQQWWPUCBFYJZGAAGOCEKXWRNHAJPHMJOVZHERQHDLLSHSZESOZPQFWKCXTMSGINNLANJHUUGJIOXCIBHPPKGTVTSKIQDUJSEXVNGBCXLPKSRLWVCMMEJQRDBWEYTFX");

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
    msg.setTimeStamp(0.555512039757);
    msg.setSource(41673U);
    msg.setSourceEntity(236U);
    msg.setDestination(24135U);
    msg.setDestinationEntity(145U);
    msg.timeout = 3396542740U;

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
    msg.setTimeStamp(0.727336258145);
    msg.setSource(41908U);
    msg.setSourceEntity(172U);
    msg.setDestination(57760U);
    msg.setDestinationEntity(89U);
    msg.timeout = 1624652741U;

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
    msg.setTimeStamp(0.824252400769);
    msg.setSource(19209U);
    msg.setSourceEntity(75U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(88U);
    msg.timeout = 1456768290U;

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
    msg.setTimeStamp(0.716993964184);
    msg.setSource(46962U);
    msg.setSourceEntity(25U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(209U);
    msg.sessid = 2165090708U;

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
    msg.setTimeStamp(0.632787414982);
    msg.setSource(7034U);
    msg.setSourceEntity(110U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(68U);
    msg.sessid = 601256756U;

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
    msg.setTimeStamp(0.307016484293);
    msg.setSource(53146U);
    msg.setSourceEntity(239U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(152U);
    msg.sessid = 2408881158U;

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
    msg.setTimeStamp(0.690103885534);
    msg.setSource(33879U);
    msg.setSourceEntity(8U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(96U);
    msg.sessid = 1536742681U;
    msg.messages.assign("EZERCOOCVKMTDQVAU");

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
    msg.setTimeStamp(0.396358475041);
    msg.setSource(35698U);
    msg.setSourceEntity(10U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(177U);
    msg.sessid = 1501636166U;
    msg.messages.assign("KFIYTMZFESSQRCZHIPKCJSAQEYNMDBYGAECRORSVGDKRCKDUZOOWMIZKCIDCUNWCDXGRABWGNJQKGZUWYLCUELXSYYBIUXPLELMRHVDBUGPIWUUVJXOZFJSHUNVNDAWTRTAZDVMMIGPRT");

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
    msg.setTimeStamp(0.764477439245);
    msg.setSource(36719U);
    msg.setSourceEntity(243U);
    msg.setDestination(37552U);
    msg.setDestinationEntity(251U);
    msg.sessid = 1966125435U;
    msg.messages.assign("TKPDPHZPFIJFTAWNHEDWMVSDHTRJBCKOZXGNHR");

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
    msg.setTimeStamp(0.888970379832);
    msg.setSource(43925U);
    msg.setSourceEntity(30U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(99U);
    msg.sessid = 534024167U;

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
    msg.setTimeStamp(0.343588177446);
    msg.setSource(56090U);
    msg.setSourceEntity(232U);
    msg.setDestination(17987U);
    msg.setDestinationEntity(33U);
    msg.sessid = 860252732U;

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
    msg.setTimeStamp(0.652274068383);
    msg.setSource(64954U);
    msg.setSourceEntity(27U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(106U);
    msg.sessid = 1200850035U;

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
    msg.setTimeStamp(0.186698687855);
    msg.setSource(7145U);
    msg.setSourceEntity(114U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(24U);
    msg.sessid = 296338395U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.277456693002);
    msg.setSource(28669U);
    msg.setSourceEntity(152U);
    msg.setDestination(41576U);
    msg.setDestinationEntity(102U);
    msg.sessid = 2928881780U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.494281607379);
    msg.setSource(30942U);
    msg.setSourceEntity(223U);
    msg.setDestination(58096U);
    msg.setDestinationEntity(90U);
    msg.sessid = 3005402434U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.48261817973);
    msg.setSource(60670U);
    msg.setSourceEntity(247U);
    msg.setDestination(42802U);
    msg.setDestinationEntity(97U);
    msg.name.assign("WOARJHZIEBOLJBGOBLJPPIUIESENFMMOKRIVHZKFSUMYOOMFKANQLTNOXCWQAZCIHOBZDKBJHNZPGRVZUDRXZIACHUWFFNAGGLNWGEPPQJKESLMLWPJUJSFWKSBRJNMRZCLGUTYCDLKWEVNQTRTXPTEGIDDLVTQKHTFGVQSSEGIDOUMJQGMBYJCYQVXYBXEEXBCZQDRDSAXSXRWUDKVTBAWOCFMKYUXTFPUAVTCNC");

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
    msg.setTimeStamp(0.110351676073);
    msg.setSource(22561U);
    msg.setSourceEntity(209U);
    msg.setDestination(5227U);
    msg.setDestinationEntity(204U);
    msg.name.assign("GHQEPSQIUYDMRGNXGJZHEITEKA");

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
    msg.setTimeStamp(0.357376339431);
    msg.setSource(21143U);
    msg.setSourceEntity(122U);
    msg.setDestination(5112U);
    msg.setDestinationEntity(241U);
    msg.name.assign("PWJEPPDZHTZVTALYFSMNNKQBBEEPVI");

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
    msg.setTimeStamp(0.156649471667);
    msg.setSource(41890U);
    msg.setSourceEntity(7U);
    msg.setDestination(19122U);
    msg.setDestinationEntity(174U);
    msg.name.assign("ISXRZDTUBKUBOMRQFSMWMWZHUXAYLNOCDLQZLTBKPFLVLEFFBLMRQSDWCZTOIHKUHOBJLQENUEKWFOBMUWZYHVRYZQTSFDJRPYPVCMHNDAXXOHBYOYAEEBOTPAACPGHEMSGIDKJG");

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
    msg.setTimeStamp(0.573469511496);
    msg.setSource(38843U);
    msg.setSourceEntity(155U);
    msg.setDestination(48413U);
    msg.setDestinationEntity(85U);
    msg.name.assign("AUFJJQAKJLLGUNGJFCOBCNBWKIWEPZKEGCSRZZJVWZSZBFMIIYEVYEHWNKRCJKMPOPRZJHOUOSAMDSHVAEDBJWGMCDFBPNGWGFTFR");

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
    msg.setTimeStamp(0.798083287209);
    msg.setSource(10335U);
    msg.setSourceEntity(159U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(244U);
    msg.name.assign("EBHQVXSAFVONDWBCKLAYKWWNPKKSRRZVBIYEJQMPETOVNFSHNRQPIZUQZVJTZTWCJELREHNTUMJGIUONWLFYEMATPXBMLJSYLIZKFBIIOXEMWNDQHSPSQXFXOYWDCHAJTGXMOXCUVPXIGYCZCKJYLIDXFACGGQTFRPLWTSUSKCQAKUBMDAOOYETYNHRV");

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
    msg.setTimeStamp(0.58048447527);
    msg.setSource(15804U);
    msg.setSourceEntity(148U);
    msg.setDestination(54687U);
    msg.setDestinationEntity(236U);
    msg.type = 193U;
    msg.error.assign("RNWFRDUZLNTFMTANIWQTWDVSXBLWRWZRJJICAWARDNQKUCVQEBMSPQXAXZBHGCZEQHUSZNCTXNJDKOYQQEZOZBVCXYTYLJLMHOGQUPGCLKLMPXDSWNEDVJPPIUOHBFYPMOAEYYVAAQITUUZRNQRURPHXBTHYFLHFVKHIZTMSJFKSGOEGOXFIUCXJANVDHDRHSJIVPGBTMYPWOKCRTZPIKSSVOEWLKYCLMNVAAKBMISEGWFBXFGOJMEYDKDJEG");

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
    msg.setTimeStamp(0.023086869864);
    msg.setSource(63035U);
    msg.setSourceEntity(89U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(166U);
    msg.type = 59U;
    msg.error.assign("VICTWVCDGSDOORBIDYZLPSJJPXXDNKCGFVDZMRIPOCOSTEMFQJCZIJUFAASIALMGTJEJWAUPEUHEKQSGQVADZSUJTVOHYVOEKWELZSBFIUWHZYXJTXGVWKXZYHQCZUGQGRFUHQMHCHGPXBJAXHNSCNLRZOWNVAFEKBDNNGIWPYLIYPWFIKLNECYTMQBTVQDRPLJMDUGKVRAMLTHYOYLKSTETPBRNBBKCBKWMXO");

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
    msg.setTimeStamp(0.50580323205);
    msg.setSource(20523U);
    msg.setSourceEntity(156U);
    msg.setDestination(5699U);
    msg.setDestinationEntity(237U);
    msg.type = 143U;
    msg.error.assign("ZKLOFANFPPLKQRYQBTUVMTMDJXGZURXXGOWBKAZWHJSLYGUYASFDAYDUIFCOXVEGRGNZQBXBIGDRRSVSUASXOSGMPPBZFIHLMJEPFAUQWKQRIEJIEUHEVVNNGYYOWRDBRMPFVCIBHC");

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
    msg.setTimeStamp(0.768070703348);
    msg.setSource(64832U);
    msg.setSourceEntity(8U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(228U);
    msg.seq = 7424U;
    msg.sys_dst.assign("TOXDRAGIBMHKLBWFXVABXIWGGPEHMOFOUFVWWHLJPXKJQUZLCTPTKQUSBOMKJDMTQJZSCGLKMQSEIZKLTUTPYVXYWBMSWEZHOLPSJDVVRGIXRZ");
    msg.flags = 126U;
    const char tmp_msg_0[] = {70, -126, -21, -93, -8, 5, 121, 77, -72, -80, -35, -73, -36, -86, 124, 21, -127, -55, 114, 103, 18, -63, 44, -73, 19, -44, -7, -88, 8, -79, -13, 123, -77, 86, 85, 98, -123, 118, 89, 76, -34, -37, 58, -67, -49, 66, 67, 0, -13, -128, -94, 99, 53, -47, 38, 90, 27, -18, -127, -6, 25, -47, 3, -41, -108, 20, 24, -17, -29, -56, -69, 14, -7, 61, 45, -56, -8, -60, 125, 100, -118, -127, 50, -44, -53, 18, -27, 8, -83, 53, 81, -66, -13, 24, 62, 17, -42, 96, 17, -66, 108, -22, -96, -67, 12, 74, 51, 70, -40, -18, -127, 52, -7, -54, 58, -113, -80, -59, -26, 77, 40, 71, -20, 121, -105, -79, 115, 99, 45, -19, 57, -34, 10, 70, -35, -110, 126, -41, 72, -121, 123, -90, -65, 36, -96, 86, 38, -23, 12, 50, 33, 39, 52, -86, 111, 74, -15, -57, 0, 86, -11, -101, 124, -121, 17, -37, -68, -99, -75, -9, 69, 35, 120, -12, 88, 121, -8, -122, -40, -36, -109, 56, -24, -128, 73, -8, 41, -118, -82};
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
    msg.setTimeStamp(0.153730609315);
    msg.setSource(21729U);
    msg.setSourceEntity(85U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(127U);
    msg.seq = 44868U;
    msg.sys_dst.assign("LRDMWDRIMZKEXUXJITGBBRZKJDCLFGTJYUUKSEILYHSISRPRXACFNDH");
    msg.flags = 30U;
    const char tmp_msg_0[] = {80, -10, -126, 118, 95, -35, 15, 125, -2, 15, 108, -98, 11, 41, -81, 18, 117, -84, 15, 24, -7, 1, 96, 111, 122, 45, -95, 5, -15, -89, -5, -74, 83, 79, 98, -71, 82, 50, -49, -105, -84, 39, 114, -80, -101, -4, 71, -36, 124, 77, 65, 97, 78, -55, -22, 56, 83, 109, -58, -4, 87, -80, 65, -111, 108, -123, 80, 110, 99, 15, -32, 55, 28, -86, 46, 84, 99, -31, 73, -98, 22, -121, 66, 20, 64, 109, 27, 10, 80, 60, 119, -7, -7, -101, -12, -50, -2, -81, -14, 61, -55, 124, -1, 48, -89, 32, 58, -13, -128, -63, -46, -23, -38, -83, -102, 101, -26, 51, -103, 33, -58, 88, 79, 37, -27, -81, 27, 43, -61, -29, -55, -50, 19, 32, 49, 32, 25};
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
    msg.setTimeStamp(0.867136204497);
    msg.setSource(10929U);
    msg.setSourceEntity(145U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(63U);
    msg.seq = 7370U;
    msg.sys_dst.assign("UHAOORPHQWOXNCVKIIQRONFQZOLBPVHTHBGLYGPAPIBXOMYEPVKBSFSEKVDBWGUSJPEFIGCHXAAJZKTYZZKJNDDFURIFFNTCZISCSKTARWM");
    msg.flags = 75U;
    const char tmp_msg_0[] = {41, 8, -43, -4, -20, 104, -50, -26, 41, 54, -47, -65, 79, -105, 52, -58, -9, -104, -111, -80, -72, 17, 126, -40, 5, -84, -114, -35, 99, -45, 61, -72, 123, 89, 23, 44, -2, 24, 19, -58, -48, -81, 98, 66, 57, 94, -128, -117, 14, -88, 123, -115, -34, -81, 51, -119, 33, -14, -53, -102, -6, -21, 83, -9, 21, -75, 16, 114, -84, 87, -63, -123, 98, 106, 26, -105, 83, -86, 92, -99, -88, -64, 5, 23, -51, -63, 101, 85, -4, 59, 84, -91, 48, -30, -16, -97, 18, -121, 102, 119, -79, -73, -19, 60, 90, -63, -105, 28, 92, -39, 102, -38, 4, 52, -81, 111, -98, -123, 112, 19, 96, -65, -33, 15, -2, -88, 7, -22, -42, 101, -3, -68, -60, -1, 20, 30, 3, -41, -21, -54, 12, 98, 102, 120, 73, -37, 76, -41, -40, 110, -49, 104, 76, -10, 112, -61, 125, 26, -58, -31, -55, -5, -66, 61, -60, 23, 96, 109, -119, 2, -117, -65, 107, 40, 33, -109, -31, -26, 109, 33, -101, -76, -84, -11, 124, -63, -24};
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
    msg.setTimeStamp(0.0337201093205);
    msg.setSource(10788U);
    msg.setSourceEntity(78U);
    msg.setDestination(57644U);
    msg.setDestinationEntity(226U);
    msg.sys_src.assign("NRSKEPUXPFPKLRXCHRAPDIZKHRSAHPXAPFIZVFBNOTFGJXWCTNNQHADWXWRLJZISL");
    msg.sys_dst.assign("SJBMGNQOGYUDEGLOOKWGBPLMXAMLAOEDGHJBLYQTYTGFEBCMRYEHHMFDIXGBIUNAIUFQXLIBSPNTINDD");
    msg.flags = 30U;
    const char tmp_msg_0[] = {-17, 77, -83, 119, -59, -122, -72, -46, -79, -102, 14, -107, 122, -14, -93, 70, 123, -84, -88, -101, 116, 96, -43, 100, 21, 27, -37, -118, 46, -96, 11, 86, -55, -51, 89, 23, 41, 87, -127, -33, 84, 94, 18, -36, 49, 28, -24, -117, 122, 44, 34, 3, 103, -5, 70, 58, 114, 1, -85, 62, 56, 33, -94, -89, -122, -127, 42, -71, 119, -6, 88, -48, -29, -49, 36, 121, -96, 126, -58, 71, -123, 74, 82, -108, -128, 121, 74, 79, 106, -3, -42, 126, -119, -125, 105, 83, -72, 13, 124, 119, 123, 34, -55, -7, -96, -109, -117, -22, 95, 17, 69, 52};
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
    msg.setTimeStamp(0.856711666568);
    msg.setSource(10497U);
    msg.setSourceEntity(0U);
    msg.setDestination(23856U);
    msg.setDestinationEntity(31U);
    msg.sys_src.assign("CXRAXQOSBNRCZTAPZLCTLOTFKFMUCFZYBETS");
    msg.sys_dst.assign("AWPCUACNGSSLUAACLKVNCUNXOBQKQIWUNJDYSXGQVMTK");
    msg.flags = 225U;
    const char tmp_msg_0[] = {-119, -98, 51, 49, 115, -109, 69, 55, -122, -120, 4, -8, -123, -58, 107, -57, 47, -59, 66, 106, -65, -108, 97, -26, 125, 86, 103, -79, -32, -32, -79};
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
    msg.setTimeStamp(0.117157965066);
    msg.setSource(13020U);
    msg.setSourceEntity(112U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(10U);
    msg.sys_src.assign("XPTWDWABSVVEMVDKJVHHUQZERWCZITXOXNWKPLGQLHCPYOUARBYJIYNJFYUAJERDCRIFPJAKMXTLYGPJCOGKUFFFXWTYLYGRFKWGEGTIS");
    msg.sys_dst.assign("NBUCXTSCPMMNNRILFXRBPCLBUJHHSDROAUMIUPZSWQAYRLTZHGYPFRGKBYDIVBWKHXIURQEWGVHUFPSGHDZAXHOYBENBZCKTOBQTJXMIECEELVICVACZVQMSZTVQG");
    msg.flags = 197U;
    const char tmp_msg_0[] = {9, -62, 52, 16, 80, 98, 114, 3, -65, 120, -100, -72, -44, -68, 85, 65, -98, -44, 17, 5, -20, 86, 7, -107, -30, -112, -11, -100, 97, 43, 69, 47, -61, -22, 58, 117, -27, 105, -56, -9, 86, -15, -89, -59, -41, 33, -26, -80, 23, -106, 111, -105, -119, -13, -36, 83, -71, 99, -11, -46, -108, -43, -83, -71, -23, -94, -77, -77, 84, -21, 9, -98, 2, 90, -70, -58, 103, 20, -52, 16, -13, -55, -32, -30, -54, -69, 83, 6, -113, -90, -57, 22, 10, 32, -93, -55, 31, 36, -91, 15, 101, 5, -61, 46, -54, 27, -94, 48, 8, -112, -20, -82, 58, -70, -109, 60, -100, -21, -110, -111, 69, 55, 99, -94, -79, -3, 103, -118, -78, -112, 53, -105, 111, -33, -22, 104, -35, 51, 126, -76, 101, 93, -104, 75, 37, -15, 14, -19, 57, 89, -73, -32, -53, 44, -25, 8, 77, -63, -50, 61, -61, 125, -76, -72, 14, -21, 52, -101, -125, 35, -31, -105, -105, 126, -62, 28, -67, -126, -81, -42, 65, 68, -21, -19, -66, 107, 112, 107, 70, 57, 50, 8, 13, 115, -49, -20, 48, 42, 61, -114, 64, -44, 11, -112, -56, 75, 114, -79, -25, -102, 95, 112, -115, -48, -19, 40, 40, -76, 123, -18, -10, 106, -10, -80, 121, -42, 55, -10, -75, 24, -62, 1, 97, 40, -118, 125, -92, 76, 100, 1, 92, 119, -66, -1, 92, 57, -68, -35, -38, 22, 93};
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
    msg.setTimeStamp(0.510394150751);
    msg.setSource(34614U);
    msg.setSourceEntity(116U);
    msg.setDestination(5581U);
    msg.setDestinationEntity(96U);
    msg.seq = 61962U;
    msg.value = 114U;
    msg.error.assign("YMJPSAEGYQBRJOBLCGSSWQYIXGZKIKYNHJFXPGQHCUXVLFBXYJHROGZLLIMIJATJMCJTKHKKHQOOHDNIHXFHICEFTDWWNOSFWCZTOFNVDJVWIKPXMGZYAMDWQAKWXVDEVWVNYADDBAWZCYSGCYOKBAREXGNHGNLMTVUSBBTCIETBCPNJUIPCPIBDAKWRXAE");

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
    msg.setTimeStamp(0.253376694238);
    msg.setSource(64806U);
    msg.setSourceEntity(245U);
    msg.setDestination(7956U);
    msg.setDestinationEntity(83U);
    msg.seq = 45614U;
    msg.value = 22U;
    msg.error.assign("HXIIKILGUEHWZJHSFMAVVDTYQNGUVBRYPSSGCOSZIIBTPUTBMGAXNKXJMBYODBZKMDWCDHJCEPCNUTKFNDKAALFACHQMQMBLEALFZHKLHQHNRNOVYLOSJJEOSCXETTOGRMUUSVXIMVRVCYJEOAVEUEYJTSBXWYVQXFGZPWIQUVUBCNIWAMRZPLBJWFDPPNOPXLEFLKWITRQDROHLDYAYRMKPIUFGTBCAQSCJRQKWDDKZXOZTWRZXJZHQWYFGE");

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
    msg.setTimeStamp(0.530596289606);
    msg.setSource(53633U);
    msg.setSourceEntity(105U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(209U);
    msg.seq = 5164U;
    msg.value = 115U;
    msg.error.assign("AOJMJVJCMUDRCRWEJTRBQNBSQCLPOFXVFJYWDZHIPSQIBVHDCKHEHCXNNUNUOMREHPRFSTUGHQIUNOILICDHATSQGJKTEZWKXMNFYWVEGYHPCLUKDBALKDYBXEBALUIBINIHS");

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
    msg.setTimeStamp(0.586516598139);
    msg.setSource(14888U);
    msg.setSourceEntity(150U);
    msg.setDestination(18721U);
    msg.setDestinationEntity(1U);
    msg.seq = 10620U;
    msg.sys.assign("TLYIFVKOPDNWFEZYIRLGNKBFYJZTXQPDWYAHGATTQIJAHJZAPGQLNZEUFQGTCGO");
    msg.value = 0.835517439703;

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
    msg.setTimeStamp(0.224808589065);
    msg.setSource(10352U);
    msg.setSourceEntity(132U);
    msg.setDestination(5931U);
    msg.setDestinationEntity(132U);
    msg.seq = 49566U;
    msg.sys.assign("YTUVKSQFIDAMXENOLZUUXQAEVSDWXFOFNPYRTVDKCJTKSPZFPIHIAKMMWRCVXGWQLHNLKXWNFUTBXOMVPBNEVAZJDHLQAJIWNJZUXVTJBAAMRHMNBYHVEFOSHRZTUWZQEDJXMEYLYRBCTOKDGGSGTEGSOALRNUQXPZXCPBWRESORZFQQJGIWUQTKHWRABIBEHIWNCKYYCZCDBCONUGJMLCMGFJUS");
    msg.value = 0.716743639449;

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
    msg.setTimeStamp(0.921193886985);
    msg.setSource(64355U);
    msg.setSourceEntity(183U);
    msg.setDestination(28523U);
    msg.setDestinationEntity(26U);
    msg.seq = 7702U;
    msg.sys.assign("WFRUCGQTQSGUMLCPBFTPYVOZIEEDRRBDDRYJSMZMJURHXJPWYVKKXIZYXQDKRNOTIVUCAKDAGXSLEHQQPXUTBRUTAVBXWESXOKPNIVNNCZGIGHOHNLKQGIMFZOCVATVLJNFLFDWOOJFMOIWEJFXYTPYMHNNOHAJQBZGLGJDCEIMBRGIAHHVZ");
    msg.value = 0.27846281675;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.468296540712);
    msg.setSource(20426U);
    msg.setSourceEntity(209U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(6U);
    msg.seq = 41547U;
    msg.sys_dst.assign("OHNBGCGQBZEBAHWNZAUDKYJCPIWSQYFCIYZELEQTTOFYHVFIODWJSLJNAOXLVYPWLHLTTKVQNMMRUXXNUJWCLUAMDRUCRVIJIBGHSOEPVBKEQRZDGXYRUWHGTPUEROKMJFSICPLDKIQQFVKAVDARWAFCFMXNWYNGEKVBOVGWRPKYAZDLDBYPHQS");
    msg.timeout = 0.708505442648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.042183493448);
    msg.setSource(30042U);
    msg.setSourceEntity(120U);
    msg.setDestination(26522U);
    msg.setDestinationEntity(153U);
    msg.seq = 44677U;
    msg.sys_dst.assign("ZDSMRFZQFSMXTRRZSLTJCCFECDMOVBYMHXEFKZOCGIJGGDCAAORYQKQNOQIJUKAINPXNJZBPPCEFPTZQLPQVBYXSGOSTHDBPXRHUKVZLBHDXHUXONUUXHYYJRIDCSIMTAGKKWYVWZVUILTTPVLRYGYMAVCZOHEWYWSFJSNWNDBKPERKFRENMJGJQQGTMEFXHDJEWBGNDEABWWKGQHXFIUUPOUALLHSBIAONULZFMCT");
    msg.timeout = 0.792449014984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.395022568045);
    msg.setSource(33957U);
    msg.setSourceEntity(164U);
    msg.setDestination(18642U);
    msg.setDestinationEntity(57U);
    msg.seq = 25603U;
    msg.sys_dst.assign("RJZNOQOCTWSFNNGSIPXJIKPWJIYZLWKIBZXZUSXPRYQGKSRFPCEDJMOCVNLRQLJBZWQFQAGDEHQVGWKSRGJRUULEIUDDMKMBRLNJSKPEIKAFWRQNQBGTEYJVOURNYMYGXCDXNFDWULMFVAIMSMCMHKPLONGWRISSPOFTCHQMIUVBABVHCOBHVLXFTEFXEXLTPZHY");
    msg.timeout = 0.329442478283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.205024392123);
    msg.setSource(56247U);
    msg.setSourceEntity(109U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(220U);
    msg.action = 13U;
    msg.longain = 0.600375953933;
    msg.latgain = 0.466532537842;
    msg.bondthick = 416494625U;
    msg.leadgain = 0.282492201857;
    msg.deconflgain = 0.0341905445421;

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
    msg.setTimeStamp(0.351032551274);
    msg.setSource(28616U);
    msg.setSourceEntity(105U);
    msg.setDestination(22086U);
    msg.setDestinationEntity(81U);
    msg.action = 177U;
    msg.longain = 0.139908605055;
    msg.latgain = 0.559100420536;
    msg.bondthick = 1735599380U;
    msg.leadgain = 0.347373154551;
    msg.deconflgain = 0.252320635197;

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
    msg.setTimeStamp(0.566412815078);
    msg.setSource(14544U);
    msg.setSourceEntity(67U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(70U);
    msg.action = 15U;
    msg.longain = 0.900526507802;
    msg.latgain = 0.513917354239;
    msg.bondthick = 2815901975U;
    msg.leadgain = 0.409535581228;
    msg.deconflgain = 0.0330800376578;

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
    msg.setTimeStamp(0.776456284339);
    msg.setSource(28078U);
    msg.setSourceEntity(185U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(143U);
    msg.err_mean = 0.956687254059;
    msg.dist_min_abs = 0.145649549786;
    msg.dist_min_mean = 0.628933344614;

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
    msg.setTimeStamp(0.305685943076);
    msg.setSource(36785U);
    msg.setSourceEntity(124U);
    msg.setDestination(17928U);
    msg.setDestinationEntity(0U);
    msg.err_mean = 0.721175660028;
    msg.dist_min_abs = 0.235841691674;
    msg.dist_min_mean = 0.457895731331;

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
    msg.setTimeStamp(0.770874742329);
    msg.setSource(24372U);
    msg.setSourceEntity(157U);
    msg.setDestination(56919U);
    msg.setDestinationEntity(193U);
    msg.err_mean = 0.344258964746;
    msg.dist_min_abs = 0.106025431926;
    msg.dist_min_mean = 0.509627494876;

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
    msg.setTimeStamp(0.698692598834);
    msg.setSource(10622U);
    msg.setSourceEntity(136U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(77U);
    msg.action = 254U;
    msg.lon_gain = 0.176022493488;
    msg.lat_gain = 0.242418370514;
    msg.bond_thick = 0.406151407371;
    msg.lead_gain = 0.207355210669;
    msg.deconfl_gain = 0.357863740629;
    msg.accel_switch_gain = 0.889046826458;
    msg.safe_dist = 0.604693190255;
    msg.deconflict_offset = 0.984377969204;
    msg.accel_safe_margin = 0.483728900882;
    msg.accel_lim_x = 0.703778042558;

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
    msg.setTimeStamp(0.0198466933808);
    msg.setSource(33722U);
    msg.setSourceEntity(248U);
    msg.setDestination(20963U);
    msg.setDestinationEntity(36U);
    msg.action = 150U;
    msg.lon_gain = 0.0984831769872;
    msg.lat_gain = 0.0702429547363;
    msg.bond_thick = 0.0707384229913;
    msg.lead_gain = 0.291175384413;
    msg.deconfl_gain = 0.158367055601;
    msg.accel_switch_gain = 0.584873558918;
    msg.safe_dist = 0.93801148217;
    msg.deconflict_offset = 0.372016649372;
    msg.accel_safe_margin = 0.799748239419;
    msg.accel_lim_x = 0.939844753469;

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
    msg.setTimeStamp(0.0508042729264);
    msg.setSource(11697U);
    msg.setSourceEntity(149U);
    msg.setDestination(20294U);
    msg.setDestinationEntity(124U);
    msg.action = 200U;
    msg.lon_gain = 0.492626062035;
    msg.lat_gain = 0.547237089536;
    msg.bond_thick = 0.0268766794033;
    msg.lead_gain = 0.534997241767;
    msg.deconfl_gain = 0.504465361771;
    msg.accel_switch_gain = 0.792441976594;
    msg.safe_dist = 0.819465629998;
    msg.deconflict_offset = 0.714915730679;
    msg.accel_safe_margin = 0.0065186271671;
    msg.accel_lim_x = 0.557338883029;

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
    msg.setTimeStamp(0.33901111762);
    msg.setSource(43203U);
    msg.setSourceEntity(248U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(77U);
    msg.type = 207U;
    msg.op = 217U;
    msg.err_mean = 0.471746096732;
    msg.dist_min_abs = 0.149456373408;
    msg.dist_min_mean = 0.754221154792;
    msg.roll_rate_mean = 0.888077779351;
    msg.time = 0.940292610781;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 1U;
    tmp_msg_0.lon_gain = 0.588218275393;
    tmp_msg_0.lat_gain = 0.0369822035042;
    tmp_msg_0.bond_thick = 0.596178752872;
    tmp_msg_0.lead_gain = 0.443915434735;
    tmp_msg_0.deconfl_gain = 0.0840794705251;
    tmp_msg_0.accel_switch_gain = 0.121440313773;
    tmp_msg_0.safe_dist = 0.409893911055;
    tmp_msg_0.deconflict_offset = 0.829331727617;
    tmp_msg_0.accel_safe_margin = 0.375542948066;
    tmp_msg_0.accel_lim_x = 0.0351169455335;
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
    msg.setTimeStamp(0.350427083896);
    msg.setSource(16816U);
    msg.setSourceEntity(198U);
    msg.setDestination(50097U);
    msg.setDestinationEntity(103U);
    msg.type = 27U;
    msg.op = 173U;
    msg.err_mean = 0.849683303013;
    msg.dist_min_abs = 0.0532218902265;
    msg.dist_min_mean = 0.86678399389;
    msg.roll_rate_mean = 0.147697870521;
    msg.time = 0.029717144453;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.17708915867;
    tmp_msg_0.lat_gain = 0.672045420089;
    tmp_msg_0.bond_thick = 0.400792593834;
    tmp_msg_0.lead_gain = 0.861910885471;
    tmp_msg_0.deconfl_gain = 0.613247204303;
    tmp_msg_0.accel_switch_gain = 0.504316192547;
    tmp_msg_0.safe_dist = 0.313097006822;
    tmp_msg_0.deconflict_offset = 0.269385313775;
    tmp_msg_0.accel_safe_margin = 0.524198320052;
    tmp_msg_0.accel_lim_x = 0.777175077004;
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
    msg.setTimeStamp(0.0733284878566);
    msg.setSource(39603U);
    msg.setSourceEntity(246U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(73U);
    msg.type = 237U;
    msg.op = 179U;
    msg.err_mean = 0.00209758524204;
    msg.dist_min_abs = 0.51045421967;
    msg.dist_min_mean = 0.703416321343;
    msg.roll_rate_mean = 0.938777440911;
    msg.time = 0.433208810266;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 53U;
    tmp_msg_0.lon_gain = 0.952219897546;
    tmp_msg_0.lat_gain = 0.75555342009;
    tmp_msg_0.bond_thick = 0.725001007671;
    tmp_msg_0.lead_gain = 0.317638366596;
    tmp_msg_0.deconfl_gain = 0.508665717622;
    tmp_msg_0.accel_switch_gain = 0.39517702856;
    tmp_msg_0.safe_dist = 0.331435480111;
    tmp_msg_0.deconflict_offset = 0.903759417203;
    tmp_msg_0.accel_safe_margin = 0.718369905737;
    tmp_msg_0.accel_lim_x = 0.732133281663;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.306947390382);
    msg.setSource(33277U);
    msg.setSourceEntity(119U);
    msg.setDestination(38432U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.0752639106404;
    msg.lon = 0.977769238455;
    msg.eta = 4208319243U;
    msg.duration = 53143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.790441436312);
    msg.setSource(62654U);
    msg.setSourceEntity(248U);
    msg.setDestination(30550U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.991753452568;
    msg.lon = 0.780508565944;
    msg.eta = 690374553U;
    msg.duration = 1217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.568579542568);
    msg.setSource(2876U);
    msg.setSourceEntity(41U);
    msg.setDestination(5411U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.350240354272;
    msg.lon = 0.268761951449;
    msg.eta = 3934677911U;
    msg.duration = 1954U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.174907883897);
    msg.setSource(40015U);
    msg.setSourceEntity(146U);
    msg.setDestination(8491U);
    msg.setDestinationEntity(28U);
    msg.plan_id = 32652U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.758469026315;
    tmp_msg_0.lon = 0.573547564436;
    tmp_msg_0.eta = 3760910818U;
    tmp_msg_0.duration = 26303U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.396292587774);
    msg.setSource(61874U);
    msg.setSourceEntity(45U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(23U);
    msg.plan_id = 58132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.64503644925);
    msg.setSource(24156U);
    msg.setSourceEntity(155U);
    msg.setDestination(50470U);
    msg.setDestinationEntity(94U);
    msg.plan_id = 62772U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.159636964091);
    msg.setSource(7433U);
    msg.setSourceEntity(241U);
    msg.setDestination(45084U);
    msg.setDestinationEntity(215U);
    msg.type = 194U;
    msg.command = 96U;
    msg.settings.assign("RFYLEGOJQYAUXYSWLETCWSNPJCIPJWBTFPFZFIUDPJOHXSIUJBYMZREDQGAQEGMVVSURSCOKWLKHPCBUVOXYMCGJOGWPKMGPQRMXMKOUOXFMJRVTMRTEVDNGBINYIHUZZLTNTHNHC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43346U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GSTQPVOCEEVMVOHQJGQKJBPQAUSKFCJLTZMGDCNOAAAENQTYKZFZPLMEYMIOCOJBOAUQJQTSUTLAHDHKUVMVHPBHGEIPMZXWEOYXEGWALVLCGDVAIXNPFXOIXLFRWSJVPWZFXZRMCCPKLWRRMAUWUDXKDNGHRPUYYVYSURRXCFDBHDWBLNIQXWZDTTICBFYEDTFCREBNSJNGNZKYHQNMOTGFIKKLYRNHZDJJEWFSVBPSYTSRBM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.374544184379);
    msg.setSource(47299U);
    msg.setSourceEntity(233U);
    msg.setDestination(19339U);
    msg.setDestinationEntity(75U);
    msg.type = 31U;
    msg.command = 158U;
    msg.settings.assign("ZKQHZDBFGIUNSIGBKOPGXISOBXLRTEMATKHZIZNLMOSKRFBIGFHZUYAMEDJBGYRENODMYQSRJUAPWQGNNVHHIWMUPIABGOUYQVRYWDHXBOFPWHXSNJYDHNOPXQXYLZOJRUSELDFMNBFWPCEAAYKJTDKIPHITFQXMFLAJKSPHZAYECPWLCATEVRTKVRYQKVNUWJGUMQVWLUPRCZGCCTSTFLOJVVKSLAWDOBL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 564U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.414851373847;
    tmp_tmp_msg_0_0.lon = 0.214105617725;
    tmp_tmp_msg_0_0.eta = 4270684726U;
    tmp_tmp_msg_0_0.duration = 10657U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XKMUSCPOSXTZBLPSETYVIKTDYNFGPUTBRLNNJJQVJPQYHOYEWZXUNMXIIWFSJKWWQCGSLQYKFIIITCTRLCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.0947370028491);
    msg.setSource(17509U);
    msg.setSourceEntity(127U);
    msg.setDestination(19795U);
    msg.setDestinationEntity(76U);
    msg.type = 19U;
    msg.command = 63U;
    msg.settings.assign("OODKGMQBGGGCGJRSBMTNNMWCFJTBRPOCFBDDLUVIDDPZMUFYPRMRJJZPLZISHHVQXIVHRGMIQQCAYDNCXKKORYVFZTSKSKRLQWAGISFKNKTI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45340U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OPWSCFXYLXGHRKOURZGKNYCFWIZJOVKPEBNMFBSYOULPYORJAKSFLDMISTBGZEICEUFDQDVHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.443290255496);
    msg.setSource(9684U);
    msg.setSourceEntity(83U);
    msg.setDestination(22355U);
    msg.setDestinationEntity(4U);
    msg.state = 117U;
    msg.plan_id = 61948U;
    msg.wpt_id = 71U;
    msg.settings_chk = 11622U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.342796555388);
    msg.setSource(2850U);
    msg.setSourceEntity(208U);
    msg.setDestination(43971U);
    msg.setDestinationEntity(173U);
    msg.state = 146U;
    msg.plan_id = 22471U;
    msg.wpt_id = 238U;
    msg.settings_chk = 50517U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.927993145972);
    msg.setSource(59299U);
    msg.setSourceEntity(18U);
    msg.setDestination(6508U);
    msg.setDestinationEntity(217U);
    msg.state = 232U;
    msg.plan_id = 1669U;
    msg.wpt_id = 169U;
    msg.settings_chk = 25718U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.523340137794);
    msg.setSource(39230U);
    msg.setSourceEntity(53U);
    msg.setDestination(46000U);
    msg.setDestinationEntity(205U);
    msg.uid = 107U;
    msg.frag_number = 93U;
    msg.num_frags = 243U;
    const char tmp_msg_0[] = {-106, -126, -47, -18, 51, 1, 69, 6, 15, -52, -127, 23, -38, 34, -37, -100, 45, 94, -79, 106, 87, 89, -46, -103, 40, -24, -63, 11, 97, 105, 2, -68, 35, -108, -3, -60, 27, -6, 68, 39, 119, 58, 56, 112, -98, -27, -46, -100, 18, 5, -99, 118, -10, -13, 75, 12, 4, 125, -50, 104, -70, -89, -17, 2, 111, -86, -88, 48, 92, -120, 25, 119, 113, 34, 60, 94, 34, -4, -38, 34, 125, 15, -18, -85, -13, 68, -121, 116, 16, -11, -56, -98, -46, 105, 100, -29, 57, 8, -53, 18, 0, 34, -63, 54, 60, 95, 38, 122, 110, 61, -48, -20, -67, -120, 50, -86, 39, 42, 125, 80, -76, 71, 114, -62, -37, -64, 72, -97, -125, 13, 58, 92, 117, -88, 110, -39, 3, -70, 50, -114, -54, 50, 88, -29, -69, -61, -69, 41, 115, 122, 14, -38, -36, -8, 80, -27, -45, -100, 30, -26, 5, 30, -88, 94, -7, 94, 68, -83, 41, 44, 2, 72, 73, -63, 63, -71, -87, 72, -117, 68, -98, 86, -4, -46, -90, 126, -69, 77, -46, -34, 114, 82, -21, -27, 49, -18, -90, -107, 3, 72, 30, -127, -3, -128, -115, 80, 18, 90, -83, 102, -28, -97, 109, -108, 115, 26, 69, 29, 20, -13, -80, 16, 122, 75, 114, -113, -104, 80, -122, -7, -24, -64, -57, 27, -64, -76, 24, -22, 79, 71, 84, 58, 5, -109, 74, 67, -34, -91, 72, -26, -19, -113, -119};
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
    msg.setTimeStamp(0.176496536406);
    msg.setSource(34850U);
    msg.setSourceEntity(69U);
    msg.setDestination(61515U);
    msg.setDestinationEntity(27U);
    msg.uid = 248U;
    msg.frag_number = 130U;
    msg.num_frags = 249U;
    const char tmp_msg_0[] = {-92, 50, 71, -5, -122, -77, 80, -118, 21, 80, 20, 56, 61, -78, 97, -60, 51, -32, -100, -122, 97, 102, 117, -105, -119, 78, -32, -4, -1, 80, 0, -45, -92, 15, 31, 2, 74, 49, -7, -12, -48, 42, 8, 19, 85, -121, 24, 50, 121, -126, 97, 62, -10, 100, 51, -18, 119, -55, 125, -40, 51, -114, 119, -84, -79, -57, 73, 62, 29, 36, -128, -120, -61, -68, -54, -58, 67, -114, 12, -120, -10, 69, 10, -74, -22, 41, 10, -122, 25, 4};
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
    msg.setTimeStamp(0.634664151374);
    msg.setSource(58745U);
    msg.setSourceEntity(35U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(112U);
    msg.uid = 73U;
    msg.frag_number = 225U;
    msg.num_frags = 124U;
    const char tmp_msg_0[] = {94, 109, -92, 119, -7, -71, -76, -74, -106, -26, 118, -68, -71, -45, 42, -35, -99, -28, 121, -59, 87, -87, -82, -110, 7, 112, 61, -41, 5, 79, 4, 50, -105, -31, -77, -23, -83, 62, -90, 27, -77, -114, -100, -58, -100, -3, -120, 99, 102, 57, -80, -105, -54, 56, -47, -87, 114, 110, -48, 45, 58, 74, 4, -24, -56, -15, 100, -110, -58};
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
    msg.setTimeStamp(0.00945732850651);
    msg.setSource(25059U);
    msg.setSourceEntity(243U);
    msg.setDestination(17916U);
    msg.setDestinationEntity(186U);
    msg.content_type.assign("CMQOOIDKHFUFUVEDPKELJYQFACEBNTIJFMXLSOOPLSZFEVWXWSWOTUDOHWYNKQHPVCIWYRZGUIBLGAAGBDYHXHALXAHFMKZTVNIHUQHZVMSYXCPWAXBQDTNTBUIDHPJYVROVKJVTVLRRYPCSEMRKFCBQZCOOURX");
    const char tmp_msg_0[] = {-23, -113, -111, -78, 61, 78, 4, -18, 13, 92, -19, 66, -61, 119, -21, 114, 20, -16, -105, -3, -57, 84, -49, 94, 49, -65, 116, 40, 47, 66, -60, 75, -89, 23, 81, -65, -124, -79, -49, 104, 103, 105, 67, 83, -109, -13, 25, 126, -87, -19, 110};
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
    msg.setTimeStamp(0.118790363145);
    msg.setSource(42655U);
    msg.setSourceEntity(55U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("EKLRQIVIQWEZNQBQPMWUWZSCMXFCRHRHSJTYEXSSEPEDBYFBUVPVHMXNQOBOULNMWNJCSODEYLA");
    const char tmp_msg_0[] = {-40, -119, -123, 84, -48, -47, 62, -97, -41, 26, -74, -60, 89, 55, 65, 13, 121, 43, -78, 114, -110, -19, 86, -122, 15, -101, -66, 93, 18, -3, 94, 84, -91, 95, 61, 8, -108, -76, 85, 2, 22, -27, 110, -81, 51, -54, 34, 100, -55, -123, 7, 30, -13, 61, 13, 49, 116, 96, 38, -64, -38, 58, -34, 43, 22, 38, -34, -59, -64, 94, 30, -4, 52, 59, -53, 89, -28, 59, 113, -83, -89, 17, 70, -67, 40, 42, 106, -94, 8, 114, -34, -92, -70, 2, -112, 21, 110, -102, 38, 93, 74, -33, 75, -43, 92, 74, -71, -4, 39, 17, -76, -3, -80, -19, 99, 123, 39, -123, -107, -83, 110, 90, 4, 42, -72, -35, -24, 63, 34, -30, -110, -94, -15, -37, -57, 67, 118, -76, -55, -123, 126, -30, -99, 126, 12, 123, 110, -102, 93, 57, 37, -17, 3, -123, 115, -55, 103, -80, 48, -67, 2, -1, 120, -11, 41, -102, 54, 92, 45, 29, -110, -77, -102, -39, 57, 123, -29, 47, 51, -126, -113, 89, -41, -42, 16, -16, 14, -90, 42, -100, -62, -55, -36, 55, 25, 109};
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
    msg.setTimeStamp(0.782452842491);
    msg.setSource(58512U);
    msg.setSourceEntity(192U);
    msg.setDestination(24109U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("QITZDFFYQZPRBHAGWRYZRFVGIENJIQFCUAKYEDBVMLOUKGJMJGUUFDHOXJLMKHZAGBKHTWWIRCYTTSLJZZTERINLQG");
    const char tmp_msg_0[] = {-100, 75, -112, 10, 103, 82, 51, -117, 69, -101, -117, 39, -4, -87, 9, -92, -10, 99, 27, 125, -92, 30, 86, 82, 37, -89, 76, 108, -59, 8, -127, 104, 120, -46, -33, -1, -62, 104, -64, -87, 35, -12, -49, -53, -85, -80, -20, -58, -40, -60, -13, 1, -39, 27, 74, 97, 100, -16, 94, 9, 60, -108, -94, 27, -12, -62, 112, -115, -19, 48, 66, 100, -21, 117, -36, 10, 90, 53, 68, 38, -63, -80, 0};
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
    msg.setTimeStamp(0.812275270784);
    msg.setSource(70U);
    msg.setSourceEntity(180U);
    msg.setDestination(15939U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.525242962978);
    msg.setSource(8162U);
    msg.setSourceEntity(229U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.891122611284);
    msg.setSource(61460U);
    msg.setSourceEntity(93U);
    msg.setDestination(17666U);
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
    msg.setTimeStamp(0.710621961474);
    msg.setSource(39603U);
    msg.setSourceEntity(66U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(231U);
    msg.target = 18178U;
    msg.bearing = 0.606053632545;
    msg.elevation = 0.0149731587403;

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
    msg.setTimeStamp(0.725109917639);
    msg.setSource(48771U);
    msg.setSourceEntity(210U);
    msg.setDestination(59713U);
    msg.setDestinationEntity(209U);
    msg.target = 5343U;
    msg.bearing = 0.479165574517;
    msg.elevation = 0.577133811533;

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
    msg.setTimeStamp(0.879485793601);
    msg.setSource(4640U);
    msg.setSourceEntity(69U);
    msg.setDestination(24835U);
    msg.setDestinationEntity(239U);
    msg.target = 40245U;
    msg.bearing = 0.833019686112;
    msg.elevation = 0.600367673913;

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
    msg.setTimeStamp(0.439520482476);
    msg.setSource(4254U);
    msg.setSourceEntity(61U);
    msg.setDestination(1166U);
    msg.setDestinationEntity(56U);
    msg.target = 37267U;
    msg.x = 0.495159348028;
    msg.y = 0.185381494215;
    msg.z = 0.720207830699;

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
    msg.setTimeStamp(0.803396302572);
    msg.setSource(56045U);
    msg.setSourceEntity(16U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(108U);
    msg.target = 48992U;
    msg.x = 0.727956742147;
    msg.y = 0.0803807187336;
    msg.z = 0.829896731184;

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
    msg.setTimeStamp(0.140249422969);
    msg.setSource(15677U);
    msg.setSourceEntity(242U);
    msg.setDestination(52991U);
    msg.setDestinationEntity(23U);
    msg.target = 12205U;
    msg.x = 0.859929717413;
    msg.y = 0.603000480647;
    msg.z = 0.594880256772;

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
    msg.setTimeStamp(0.775303546509);
    msg.setSource(2396U);
    msg.setSourceEntity(19U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(38U);
    msg.target = 15101U;
    msg.lat = 0.0262214986258;
    msg.lon = 0.0879147345219;
    msg.z_units = 213U;
    msg.z = 0.477579766415;

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
    msg.setTimeStamp(0.0686171012337);
    msg.setSource(9042U);
    msg.setSourceEntity(46U);
    msg.setDestination(339U);
    msg.setDestinationEntity(163U);
    msg.target = 19294U;
    msg.lat = 0.626083730563;
    msg.lon = 0.653300207174;
    msg.z_units = 38U;
    msg.z = 0.553001589231;

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
    msg.setTimeStamp(0.0800478708739);
    msg.setSource(24005U);
    msg.setSourceEntity(140U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(29U);
    msg.target = 50079U;
    msg.lat = 0.664481267739;
    msg.lon = 0.338324390165;
    msg.z_units = 1U;
    msg.z = 0.116428413349;

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
    msg.setTimeStamp(0.0497418451143);
    msg.setSource(44799U);
    msg.setSourceEntity(152U);
    msg.setDestination(38412U);
    msg.setDestinationEntity(77U);
    msg.locale.assign("QAGAPSHZSZZVAWNRDCJTXTLRIYXBTHTKSWEHSYFVLYOUSKCRCAMYFKARMJJOBGQHNJNCPMHFOKVGOQ");
    const char tmp_msg_0[] = {-46, -31, 16, -4, -66, 92, 0, -26, 106, 122, 33, -9, -31, -8, 55, 123, -86, -14, -74, 96, -37, 102, 97, 6, 24, 123, -84, -74, -66, 81, 60, 16, -46, 12, 32, 71, 51, 109, -71, -72, -45, -104, 99, -23, -110, 115, -123, 59, -52, -29, -103, -44, 112, 73, -39, 51, -48, 19, 105, 84, 57, -95, -82, 46, 45, -79, 116, 24, -30, 103, -38, 65, 98, -70, -13, 115, 20, 14, -105, -44, -47, 105, -42, 117, -103, -38, -91, -93};
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
    msg.setTimeStamp(0.202669782328);
    msg.setSource(4946U);
    msg.setSourceEntity(181U);
    msg.setDestination(38142U);
    msg.setDestinationEntity(6U);
    msg.locale.assign("CPJOAYOXIZILXFSIWEJEDBNHQUOPUPKLJPDHGSWDZGFIFXVNESEUVEKUDNEVCVFTKNSSEPPOWMWCMAKZOTCMXQMAPFO");
    const char tmp_msg_0[] = {63, 80, 76, 20, -116, 107, 6, 70, -4, 126, -26, 42, -74, -44, -103, 82, 65, 83, -95, 57, -71, -18, -102, -13, -110, -121, 0, -94, 89, -59, 79, -74, 64, -44, 81, -94, -13, -59, -26, 82, 103, -74, -100, 35, -19, -18, -84, -64, 77, 116, 112, -127, 28, -108, 112, -33, 40, -3, -54, -48, -68, 9, 57, -36, 104, -40, -111, -65, 104, 2, -93, -14, -33, -115, 96, 72, 67, -84, -13, -113, 21, -87, 5, -6, 16, -26, -65, -42, -108, 92, -110, 45, 94, -92, -82, 5, -27};
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
    msg.setTimeStamp(0.819374349069);
    msg.setSource(52583U);
    msg.setSourceEntity(252U);
    msg.setDestination(7478U);
    msg.setDestinationEntity(153U);
    msg.locale.assign("VXQAHRGDGJOKCTQWAAXPFDBGGITIOGUHSZHCXSWJSUWHNZSNXAZVIEKZSOEYWPFRCTJGVIXRVPGHYBQPLNDCQPMFCXDXIKZWMAEFYHPOMJBBGCTCLUYYEKESTBPWIRZOLXDVKSNPMFVZVFONXMJFQUJDSRZWGEIRDGFJRCJIRTZQIJQZTWNKYQMSBHUN");
    const char tmp_msg_0[] = {126, -72, -37, 89, -64, 39, -79, -110, -7, -34, 121, -25, -112, -18, 15, -47, -97, -80, 74, 16};
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
    msg.setTimeStamp(0.367823353878);
    msg.setSource(28175U);
    msg.setSourceEntity(171U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.487876092541);
    msg.setSource(35087U);
    msg.setSourceEntity(202U);
    msg.setDestination(53490U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.0358329882856);
    msg.setSource(7006U);
    msg.setSourceEntity(134U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.233560695591);
    msg.setSource(54697U);
    msg.setSourceEntity(163U);
    msg.setDestination(32656U);
    msg.setDestinationEntity(80U);
    msg.camid = 187U;
    msg.x = 47427U;
    msg.y = 60145U;

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
    msg.setTimeStamp(0.31868972901);
    msg.setSource(57031U);
    msg.setSourceEntity(123U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(113U);
    msg.camid = 166U;
    msg.x = 34149U;
    msg.y = 51151U;

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
    msg.setTimeStamp(0.151926475295);
    msg.setSource(58482U);
    msg.setSourceEntity(11U);
    msg.setDestination(59688U);
    msg.setDestinationEntity(63U);
    msg.camid = 209U;
    msg.x = 42915U;
    msg.y = 33838U;

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
    msg.setTimeStamp(0.376474189699);
    msg.setSource(60682U);
    msg.setSourceEntity(85U);
    msg.setDestination(22955U);
    msg.setDestinationEntity(189U);
    msg.camid = 90U;
    msg.x = 15323U;
    msg.y = 38331U;

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
    msg.setTimeStamp(0.135526663872);
    msg.setSource(63413U);
    msg.setSourceEntity(51U);
    msg.setDestination(24068U);
    msg.setDestinationEntity(154U);
    msg.camid = 239U;
    msg.x = 50780U;
    msg.y = 35464U;

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
    msg.setTimeStamp(0.714105639083);
    msg.setSource(47637U);
    msg.setSourceEntity(2U);
    msg.setDestination(42751U);
    msg.setDestinationEntity(117U);
    msg.camid = 95U;
    msg.x = 28249U;
    msg.y = 60260U;

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
    msg.setTimeStamp(0.898426843532);
    msg.setSource(4817U);
    msg.setSourceEntity(245U);
    msg.setDestination(53771U);
    msg.setDestinationEntity(20U);
    msg.tracking = 225U;
    msg.lat = 0.679716087139;
    msg.lon = 0.984560257774;
    msg.x = 0.970394376545;
    msg.y = 0.765304234114;
    msg.z = 0.814422478957;

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
    msg.setTimeStamp(0.188771794898);
    msg.setSource(10651U);
    msg.setSourceEntity(139U);
    msg.setDestination(51112U);
    msg.setDestinationEntity(173U);
    msg.tracking = 135U;
    msg.lat = 0.0196813314858;
    msg.lon = 0.127487584629;
    msg.x = 0.256794080877;
    msg.y = 0.924266030188;
    msg.z = 0.0146561258175;

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
    msg.setTimeStamp(0.66971545192);
    msg.setSource(1407U);
    msg.setSourceEntity(126U);
    msg.setDestination(51237U);
    msg.setDestinationEntity(117U);
    msg.tracking = 89U;
    msg.lat = 0.557848209717;
    msg.lon = 0.532743756672;
    msg.x = 0.746125093594;
    msg.y = 0.543964490261;
    msg.z = 0.766212671973;

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
    msg.setTimeStamp(0.563607976432);
    msg.setSource(23141U);
    msg.setSourceEntity(107U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(96U);
    msg.target.assign("EZDXOZNUVAAOLMJKAXDODYAUHPCMDTPUIVOWDXNBCGGNFJECTNZREVRZKSN");
    msg.lbearing = 0.854390536709;
    msg.lelevation = 0.682887867958;
    msg.bearing = 0.861473350372;
    msg.elevation = 0.664906002178;
    msg.phi = 0.11132507533;
    msg.theta = 0.205201783162;
    msg.psi = 0.197382339103;
    msg.accuracy = 0.0380053299853;

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
    msg.setTimeStamp(0.568705771912);
    msg.setSource(28811U);
    msg.setSourceEntity(207U);
    msg.setDestination(26501U);
    msg.setDestinationEntity(27U);
    msg.target.assign("MOGACZMZDJDASAJUGRUCWFHXUURBWRFAGYCRZVTKNXOYKRPLTXIZOWQONEKKMFCXCPOBFNYXVPDICZHMNDTSLSQFLHPCJYLGPOSZUFTQQRXNQTQLVARPMAYOFZVPVWLZBPFNDXJEVUXWTXQPKONYWZUBEDIYARTYELMAIEDWVJJBVBCBBJIRCNSHYOWCAEXITGSWHLEFHGRJGGTWJNQGJLHIBMKEHMAUMQVUISOFZLIKUDEEDK");
    msg.lbearing = 0.136793253494;
    msg.lelevation = 0.586305898999;
    msg.bearing = 0.409338242459;
    msg.elevation = 0.916151900223;
    msg.phi = 0.330637312148;
    msg.theta = 0.844077873131;
    msg.psi = 0.214485673582;
    msg.accuracy = 0.636156721106;

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
    msg.setTimeStamp(0.536074575358);
    msg.setSource(46411U);
    msg.setSourceEntity(49U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(73U);
    msg.target.assign("IVSWAVPXBHKKERUWVIOSHPTLRNDFQUKSWDGIFMJBLMMLDZSEVLIGTIC");
    msg.lbearing = 0.259823889987;
    msg.lelevation = 0.661169513723;
    msg.bearing = 0.737078137008;
    msg.elevation = 0.139949819238;
    msg.phi = 0.334843961757;
    msg.theta = 0.554240406446;
    msg.psi = 0.28536481037;
    msg.accuracy = 0.949425696606;

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
    msg.setTimeStamp(0.240751721349);
    msg.setSource(24113U);
    msg.setSourceEntity(96U);
    msg.setDestination(24699U);
    msg.setDestinationEntity(3U);
    msg.target.assign("AFACBVVTLWBRHURJEUEFOGVTBLXKTHOISBSADACGRXQGEFPLDZPZKIZGHZCXLNPFNMUHMWXTUKOCBWQ");
    msg.x = 0.824320417321;
    msg.y = 0.937416768723;
    msg.z = 0.599563646078;
    msg.n = 0.475079622206;
    msg.e = 0.0302792563917;
    msg.d = 0.166606066749;
    msg.phi = 0.846082077303;
    msg.theta = 0.867757010737;
    msg.psi = 0.679337276933;
    msg.accuracy = 0.902153062592;

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
    msg.setTimeStamp(0.682225600072);
    msg.setSource(59374U);
    msg.setSourceEntity(71U);
    msg.setDestination(15555U);
    msg.setDestinationEntity(62U);
    msg.target.assign("TXZHOXXSFIQAAPBFQGEDRWJUNKEFTKIKNODMBTVAACWKZXIRSPQBEZMWMOWPXYTIVJYRNVRCXPAFUPQUJUIRACDEISSQONLEL");
    msg.x = 0.137751818852;
    msg.y = 0.452227730189;
    msg.z = 0.900962746536;
    msg.n = 0.813637073681;
    msg.e = 0.465083654038;
    msg.d = 0.528055881862;
    msg.phi = 0.786584769497;
    msg.theta = 0.801043772276;
    msg.psi = 0.472550695198;
    msg.accuracy = 0.230940609367;

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
    msg.setTimeStamp(0.180578852932);
    msg.setSource(15033U);
    msg.setSourceEntity(132U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(57U);
    msg.target.assign("MBQSFJDUTLCWIHXPZECYVSNIIEJXRNJRHYCZAIAFSSNSUFPUSGQAZXPXIZGKTORFCWPUGLIJVKBCQTXVAHTTUYTKEZQQWVWNPLFZOWAYZDFPXYGBKLLTKVVKKHXOONYNRZRMUUVODQRDYRQHJVEDUJSILWEKRCMHPFNMTDCIQTWLJNYMIALOJOGIOVWQFAZPCMHDESMWLGSBBDGYUAGGKOSBKMLWEXPNVMCEDZGDJBABJNQHPTMAYHXF");
    msg.x = 0.548667605666;
    msg.y = 0.308973348823;
    msg.z = 0.520573905634;
    msg.n = 0.591471086945;
    msg.e = 0.596828803956;
    msg.d = 0.957765058193;
    msg.phi = 0.405561653497;
    msg.theta = 0.798751335775;
    msg.psi = 0.889236155816;
    msg.accuracy = 0.563805226241;

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
    msg.setTimeStamp(0.982190777709);
    msg.setSource(60995U);
    msg.setSourceEntity(81U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(83U);
    msg.target.assign("QDNVTBYLNIFXOWNGIRKBROSCHQHPCTSMNZOCKHPIKZNHCYOWGWAJTHMRDXQSMAXUDIFCWLEFMGWJRDBNQTRLKCNHPDJSKAEVUMWGTRXBQORPMOEAEHJACPZTEFANYMKMFGJVOUJSESFOAUKMBIESZGSQPJRPEWBJTUXERYIYVBOCFZGYDQKVZKYFIYVADAUFLWLCLVDQXDUPXGLFPEVTHHWIXZNZXPGSXJ");
    msg.lat = 0.724650927277;
    msg.lon = 0.672271686493;
    msg.z_units = 207U;
    msg.z = 0.542741095809;
    msg.accuracy = 0.124619448098;

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
    msg.setTimeStamp(0.411629851309);
    msg.setSource(14717U);
    msg.setSourceEntity(14U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(18U);
    msg.target.assign("GVUYRTVGZSBMUMKCNTTMWGELGMPIXVEVJDSIKQBPALZEFBHEYEYJCKCTETLBGBWPYCOHXHLRTKQZOPQWC");
    msg.lat = 0.695140445883;
    msg.lon = 0.0580234554266;
    msg.z_units = 15U;
    msg.z = 0.662444319043;
    msg.accuracy = 0.436986589746;

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
    msg.setTimeStamp(0.743162155245);
    msg.setSource(4855U);
    msg.setSourceEntity(13U);
    msg.setDestination(15770U);
    msg.setDestinationEntity(253U);
    msg.target.assign("YPXGVSYXYTJBQSLKOGYXYVPTQSZSJRGPWHAXHPJQRSDEMLOUDUH");
    msg.lat = 0.550608513339;
    msg.lon = 0.287346332988;
    msg.z_units = 7U;
    msg.z = 0.274051777358;
    msg.accuracy = 0.556559539854;

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
    msg.setTimeStamp(0.712179885073);
    msg.setSource(51244U);
    msg.setSourceEntity(172U);
    msg.setDestination(7265U);
    msg.setDestinationEntity(50U);
    msg.name.assign("QLUWGHMQVYCKDFFEZEXTVTSVXJWPSEXIZSDYLHQGLIWUBCCVKRAIMKTHIHRTIIFGPDJNOCIHQAWZOINRFQLCFAENKRYYQIHCHKHJKEBADZEGJVBTJUHGDMTAWSOAWCOTYAVFTKEPPWRAMORFO");
    msg.lat = 0.360356370751;
    msg.lon = 0.968334883322;
    msg.z = 0.642041183081;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.233319240807);
    msg.setSource(19250U);
    msg.setSourceEntity(131U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(195U);
    msg.name.assign("JXDVKFDESVIHUKZQZMLSSFMANOQDJTGWQYHQQSYNUAGIKOESSPZLPJLREGXWTBNGXFUGSGTMBPVOEIPYETWOIDEHXZDOKNBCUBNACIXBAHWHSYLBZPVFDREQTWKXWBYWZQFIPGAENURRIF");
    msg.lat = 0.66491610192;
    msg.lon = 0.112104775253;
    msg.z = 0.453222489889;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.704955817652);
    msg.setSource(20175U);
    msg.setSourceEntity(249U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(71U);
    msg.name.assign("AKIHUONENXFPBJVMAGKWZEFZKQCSJUPJQGUVDCZBTYPOFNDVJLQWGXIUTEKTFCYODYKTDZOXMWINQFLSVPMPSFAKYUJYKXRFSLJRQMBSFQHULZGCJHSCQEMPLESZQTHLDTDIWEXGZMCRUOYARALUJIKACNEMHSZHBVETORBWGVKNAYUPTATWBJIIIWYLFKRVNVDNHAWDOCRQVVPBSPDZPINL");
    msg.lat = 0.727746934414;
    msg.lon = 0.726710809096;
    msg.z = 0.205095686138;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.496409836112);
    msg.setSource(51920U);
    msg.setSourceEntity(177U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(132U);
    msg.op = 233U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QACANCDBFITIMBDMJZOBPHPNDOAWLQZXGRCIQHRTKZGIEYEDQFMRUVKOBMMFGGOEAOYQIBUDEHDAX");
    tmp_msg_0.lat = 0.790497029988;
    tmp_msg_0.lon = 0.619283024063;
    tmp_msg_0.z = 0.260233342813;
    tmp_msg_0.z_units = 207U;
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
    msg.setTimeStamp(0.0404855120868);
    msg.setSource(2082U);
    msg.setSourceEntity(39U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(64U);
    msg.op = 180U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VFKIZANPATLMIYJOFPFNYHMQBNZUOTCKXRDJWACCGZLGRTYUECTPGXYQUVUNAYVPLZAGWPXNRXRXYISFXGYJJBZUBSLFHPEXSJIUPFMTROVOHGCLPWKPFMSSRNDICKQJOJEWADGSHVZUZXMWZUURQHWYQBFWKDMNBDIHSMCWELZEVNFBSHTVTFLWBEVMBAHYERLKIGAAPEDAYBQLMIKDUWQXODIBSKLEJDGZER");
    tmp_msg_0.lat = 0.067279204981;
    tmp_msg_0.lon = 0.771234835693;
    tmp_msg_0.z = 0.355339013833;
    tmp_msg_0.z_units = 12U;
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
    msg.setTimeStamp(0.467910601303);
    msg.setSource(2307U);
    msg.setSourceEntity(181U);
    msg.setDestination(4125U);
    msg.setDestinationEntity(93U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.0988857258439);
    msg.setSource(28618U);
    msg.setSourceEntity(130U);
    msg.setDestination(6087U);
    msg.setDestinationEntity(101U);
    msg.value = 0.211083507245;
    msg.type = 248U;

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
    msg.setTimeStamp(0.228063279085);
    msg.setSource(28590U);
    msg.setSourceEntity(236U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(175U);
    msg.value = 0.925292987563;
    msg.type = 223U;

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
    msg.setTimeStamp(0.962807540094);
    msg.setSource(45652U);
    msg.setSourceEntity(15U);
    msg.setDestination(36141U);
    msg.setDestinationEntity(34U);
    msg.value = 0.671863914417;
    msg.type = 57U;

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
    msg.setTimeStamp(0.956768274415);
    msg.setSource(21335U);
    msg.setSourceEntity(220U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(244U);
    msg.value = 0.741866315769;

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
    msg.setTimeStamp(0.105715785296);
    msg.setSource(40256U);
    msg.setSourceEntity(252U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(81U);
    msg.value = 0.724381387129;

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
    msg.setTimeStamp(0.268708416934);
    msg.setSource(33885U);
    msg.setSourceEntity(60U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(134U);
    msg.value = 0.443094685872;

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
    msg.setTimeStamp(0.945937506847);
    msg.setSource(18880U);
    msg.setSourceEntity(234U);
    msg.setDestination(30880U);
    msg.setDestinationEntity(67U);
    msg.timestamp_last_service = 0.540944948564;
    msg.time_next_service = 0.413621545943;
    msg.time_motor_next_service = 0.158198798306;
    msg.time_idle_ground = 0.215477013024;
    msg.time_idle_air = 0.885457212328;
    msg.time_idle_water = 0.566513102682;
    msg.time_idle_underwater = 0.989991160655;
    msg.time_idle_unknown = 0.661401369372;
    msg.time_motor_ground = 0.279026713889;
    msg.time_motor_air = 0.922669820123;
    msg.time_motor_water = 0.604399903422;
    msg.time_motor_underwater = 0.557252349389;
    msg.time_motor_unknown = 0.758005760265;
    msg.rpm_min = -22682;
    msg.rpm_max = 29999;
    msg.depth_max = 0.326506359182;

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
    msg.setTimeStamp(0.764486686267);
    msg.setSource(25933U);
    msg.setSourceEntity(11U);
    msg.setDestination(23637U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.84209486957;
    msg.time_next_service = 0.417133529024;
    msg.time_motor_next_service = 0.862011611765;
    msg.time_idle_ground = 0.162837966571;
    msg.time_idle_air = 0.505439089739;
    msg.time_idle_water = 0.776341540242;
    msg.time_idle_underwater = 0.0267095834318;
    msg.time_idle_unknown = 0.165057540045;
    msg.time_motor_ground = 0.0675359895475;
    msg.time_motor_air = 0.0203737976534;
    msg.time_motor_water = 0.684326115777;
    msg.time_motor_underwater = 0.605089067258;
    msg.time_motor_unknown = 0.80458839738;
    msg.rpm_min = 16966;
    msg.rpm_max = -15444;
    msg.depth_max = 0.512066529573;

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
    msg.setTimeStamp(0.393164999117);
    msg.setSource(61969U);
    msg.setSourceEntity(180U);
    msg.setDestination(29263U);
    msg.setDestinationEntity(93U);
    msg.timestamp_last_service = 0.664633421217;
    msg.time_next_service = 0.599888495504;
    msg.time_motor_next_service = 0.949169800743;
    msg.time_idle_ground = 0.51712221349;
    msg.time_idle_air = 0.175396825895;
    msg.time_idle_water = 0.90170247015;
    msg.time_idle_underwater = 0.814247266471;
    msg.time_idle_unknown = 0.776985460287;
    msg.time_motor_ground = 0.48057254588;
    msg.time_motor_air = 0.784290974904;
    msg.time_motor_water = 0.985132922958;
    msg.time_motor_underwater = 0.232488446066;
    msg.time_motor_unknown = 0.363902671511;
    msg.rpm_min = 30783;
    msg.rpm_max = 13707;
    msg.depth_max = 0.164595793107;

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
    msg.setTimeStamp(0.578863304532);
    msg.setSource(23790U);
    msg.setSourceEntity(65U);
    msg.setDestination(29820U);
    msg.setDestinationEntity(131U);
    msg.severity = 198U;
    msg.text.assign("OEOOCXWGMRMDTGYFQAALWWSYRCPIZBRRXUCFEZDVHQDQMPRIVAAKIOETHQWEITAHDLPPMHAURGUSJNLVTPKLBFMJYOFRTHBNORCAZYYCBDFKNBBMDBIPAPJUJBPSMVOFTZIHKMLTIG");

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
    msg.setTimeStamp(0.828275030834);
    msg.setSource(53280U);
    msg.setSourceEntity(239U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(175U);
    msg.severity = 23U;
    msg.text.assign("RWMIDMSMBCATIGFPYJVBBBNJSBALKCCRPDPKHOMEULRYLSMGVCRPALBWRGNQYRGTFIMHGHTHUJWTYKPVKJBUEONIWCSEJVDFYUIIQFRHKRGLCBQXLPSXZPSRYKCTMMUXZBYPSTXVEFWMWGAEVHIENWJGYJXTAZ");

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
    msg.setTimeStamp(0.486809836377);
    msg.setSource(21747U);
    msg.setSourceEntity(48U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(155U);
    msg.severity = 95U;
    msg.text.assign("YYIONWWLJOKNKIF");

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

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.597545158279);
    msg.setSource(24513U);
    msg.setSourceEntity(248U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(208U);
    msg.channel = 83;
    msg.value = -840379803;
    msg.gain = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.760466272736);
    msg.setSource(35584U);
    msg.setSourceEntity(46U);
    msg.setDestination(34553U);
    msg.setDestinationEntity(124U);
    msg.channel = 120;
    msg.value = -1548279443;
    msg.gain = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.569727749142);
    msg.setSource(38054U);
    msg.setSourceEntity(84U);
    msg.setDestination(42700U);
    msg.setDestinationEntity(159U);
    msg.channel = 10;
    msg.value = -332552671;
    msg.gain = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.241789160601);
    msg.setSource(32489U);
    msg.setSourceEntity(142U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(69U);
    msg.ch01 = 0.304095991456;
    msg.ch02 = 0.0401976479128;
    msg.ch03 = 0.96243059298;
    msg.ch04 = 0.513591444463;
    msg.ch05 = 0.219261980011;
    msg.ch06 = 0.978523329917;
    msg.ch07 = 0.699670933695;
    msg.ch08 = 0.471306743723;
    msg.ch09 = 0.207132601653;
    msg.ch10 = 0.743946114795;
    msg.ch11 = 0.43573681384;
    msg.ch12 = 0.197129830705;
    msg.ch13 = 0.303637089169;
    msg.ch14 = 0.816680507396;
    msg.ch15 = 0.988329195931;
    msg.ch16 = 0.93066741535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.195486056051);
    msg.setSource(14213U);
    msg.setSourceEntity(148U);
    msg.setDestination(10401U);
    msg.setDestinationEntity(253U);
    msg.ch01 = 0.642001387359;
    msg.ch02 = 0.400672193603;
    msg.ch03 = 0.258026240754;
    msg.ch04 = 0.872788970636;
    msg.ch05 = 0.380637961154;
    msg.ch06 = 0.114220861673;
    msg.ch07 = 0.0373432911902;
    msg.ch08 = 0.637951062567;
    msg.ch09 = 0.640820996734;
    msg.ch10 = 0.976175813449;
    msg.ch11 = 0.99729015001;
    msg.ch12 = 0.560042560553;
    msg.ch13 = 0.207730465587;
    msg.ch14 = 0.597521948141;
    msg.ch15 = 0.892272917326;
    msg.ch16 = 0.967436900716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.17843513952);
    msg.setSource(31737U);
    msg.setSourceEntity(114U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(111U);
    msg.ch01 = 0.177969818343;
    msg.ch02 = 0.472707742427;
    msg.ch03 = 0.0853046240024;
    msg.ch04 = 0.418428775146;
    msg.ch05 = 0.656778141902;
    msg.ch06 = 0.0234576546275;
    msg.ch07 = 0.915316993503;
    msg.ch08 = 0.802703985534;
    msg.ch09 = 0.927814796251;
    msg.ch10 = 0.0657577893498;
    msg.ch11 = 0.438346980594;
    msg.ch12 = 0.297745414665;
    msg.ch13 = 0.6373230274;
    msg.ch14 = 0.665340315915;
    msg.ch15 = 0.577412712501;
    msg.ch16 = 0.759789657098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.00129869970353);
    msg.setSource(54232U);
    msg.setSourceEntity(65U);
    msg.setDestination(24118U);
    msg.setDestinationEntity(236U);
    msg.op = 124U;
    msg.lat = 0.732041588781;
    msg.lon = 0.849203740721;
    msg.height = 0.871061613188;
    msg.depth = 0.941579214877;
    msg.alt = 0.972457987706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.61413810795);
    msg.setSource(10890U);
    msg.setSourceEntity(66U);
    msg.setDestination(39418U);
    msg.setDestinationEntity(228U);
    msg.op = 34U;
    msg.lat = 0.853932233996;
    msg.lon = 0.354825890077;
    msg.height = 0.717522867708;
    msg.depth = 0.36390385446;
    msg.alt = 0.0903108736484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.506948857704);
    msg.setSource(19032U);
    msg.setSourceEntity(48U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(152U);
    msg.op = 183U;
    msg.lat = 0.974199470293;
    msg.lon = 0.0713545834483;
    msg.height = 0.125473288294;
    msg.depth = 0.446506233504;
    msg.alt = 0.877735998497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.827153660458);
    msg.setSource(9629U);
    msg.setSourceEntity(71U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(45U);
    msg.req_id = 58852U;
    msg.type = 17U;
    msg.init = 1278309940U;
    msg.end = 1772103155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.942920061808);
    msg.setSource(9378U);
    msg.setSourceEntity(122U);
    msg.setDestination(16718U);
    msg.setDestinationEntity(138U);
    msg.req_id = 65170U;
    msg.type = 94U;
    msg.init = 392465396U;
    msg.end = 3685371U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.430541052142);
    msg.setSource(11774U);
    msg.setSourceEntity(12U);
    msg.setDestination(51589U);
    msg.setDestinationEntity(27U);
    msg.req_id = 47942U;
    msg.type = 204U;
    msg.init = 2863151722U;
    msg.end = 3203640000U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.570007494345);
    msg.setSource(21400U);
    msg.setSourceEntity(174U);
    msg.setDestination(387U);
    msg.setDestinationEntity(178U);
    msg.req_id = 26207U;
    msg.type = 39U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("GIJGKFLUMDGMHZPPBMQIXNOENJKKVAJXJWZFRBNNPLRFZYPPHDKUKHAEOAWWOHESZJNUMZSFCTHT");
    tmp_msg_0.frag_number = 39527U;
    tmp_msg_0.num_frags = 5878U;
    const char tmp_tmp_msg_0_0[] = {-59, -49, 7, 79, -2, -13, -20, 105, -69, 47, 67, 26, -35, -57, 7, -100, 14, -94, 89, -95, 126, 95, -89, -84, 121, -59, -22, -67, -115, -99, 14, 113, -111, -87, -121, 99, 38, 87, -35, 31, 42, 102, 19, -112, 110, -96, 109, -17, 0, -26, 57, -67, 20, -28, 33, 63, 26, -35, 20, 104, 68, 47, 70, -69, 70, 66, -128, 83, -25, -109, -48, 75, -119, -30, 73, 65, -4};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.956693834951);
    msg.setSource(3511U);
    msg.setSourceEntity(226U);
    msg.setDestination(10329U);
    msg.setDestinationEntity(241U);
    msg.req_id = 6696U;
    msg.type = 86U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("MVPFRHZCUQETQPTVIDEZTPEHYGTFLVHBVSLIXNMBXYOCMRNTWPSBFOIOYWLBZGSPATMEJLDGMVKEZNPNLPYFWFMKPKCQKBYYHTJZWXVXJGWZJJLXGSGUPTKZJRWASILZIURHUSEXOESUCVYRA");
    tmp_msg_0.frag_number = 39551U;
    tmp_msg_0.num_frags = 2315U;
    const char tmp_tmp_msg_0_0[] = {-78, 37, 1, -1, 56, 78, -65, 26, 77, 68, -57, -63, 73, -83, 83, 116, 115, -24, 120, 66, 52, 63, -35, -53, -123, -112, 81, -91, -122, 85, -125, -49, -55, -42, 6, 62, 123, -25, -49, 94, -84, -53, -32, -60, 52, 2, -99, -37, 40, 96, 80, -63, -97, 0, 51, -67, 105, 77, 110, -19, 4, -112, -58, -110, 11, 79, 48, -106, 8, 34, 81, 48, 96, -42, 117, 7, 102, -14, 30, -76, 19, -75, -49, 29, 15, 40, -71, 44, -67, -10, 86, 44, 3, -6, -17, 56, 108, 84, -40, -19, 19, 50, 17, 120, 57, 55, -13};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.169612447966);
    msg.setSource(13094U);
    msg.setSourceEntity(221U);
    msg.setDestination(17144U);
    msg.setDestinationEntity(125U);
    msg.req_id = 15887U;
    msg.type = 93U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("IEKPTLUWVWKQQMNHFYRIGCSDCXETVPFTLQVGXREGPGZEDGUBMBEUKU");
    tmp_msg_0.frag_number = 28867U;
    tmp_msg_0.num_frags = 22267U;
    const char tmp_tmp_msg_0_0[] = {-93, -15, -83, 84, 89, -69, -82, -49, 20, -80, 81, 63, 15, -2, -63, -44, -63, -85, 39, -25, 28, 122, 68, -87, -102, -25, -27, 124, -47, 5, -104, -89, 103, -125, -30, 56, -6, 43, 55, 45, 122, -27, 110, -94, -88, -40, -96, 69, -67, -104, 73, 88, 2, 66, 54, 54, 83, 92, 105, -37, 9, 1, -100, 20, -83, -9, -72, -92, -106, 16, 84, -16, -30, -89, -90, 113, 78, -79, 65, -125, -71, 66, -31, 17, 3, -96, -117, 120, -46, -91, -92, 13, -106, 37, -15, -84, -98, -54, 31, 124, -50, 123, 126, 85, -58, -94, -68, -1, -110, -118};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.364977824162);
    msg.setSource(21268U);
    msg.setSourceEntity(169U);
    msg.setDestination(24885U);
    msg.setDestinationEntity(139U);
    msg.id.assign("DQQSXTMFUOXMEJHZDCJRWOQVFFYZDJEZVQSRPIFRHKVQTWFHLNMDGBYOFENSVUHWLXABJGFMGGIP");
    msg.frag_number = 33650U;
    msg.num_frags = 62019U;
    const char tmp_msg_0[] = {83, -44, -12, 115, 104, 4, 6, -12, -76, -124, 34, 67, -20, 95, 14, -127, 75, 119, 32, 117, 19, 85, 32, -90, -52, -109, 17, 87, -92, -69, 113, 100, -122, 62, -71, -88, -17, -100, 72, -50, 34, 83, -7, -85, -112, -63, 122, 90, 6, 67, 6, -68, -62, 119, -28, -67, -16, 21, 14, 4, -101, 89, 27, 13, 18, 48, -92, 38, -1, -92, -21, 67, 123, -67, 18, -53, -47, 36, -62, -110, 29, 34, -81, 77, 79, 5, 18, 19, -121, -1, 123, 4, 2, -3, -67, 5, -27, -50, 85, -14, -41, -16, -116, -44, -96, -99, 29, 1, -70, -100, -28, 62, 99, -91, 46, -29, -57, -11, 118, 42, 54, 77, 40, -2, 39, -5, -122, -55, 88, -87, -80, -89, 57, -102, -78, 14, -37, 69, -47, 123, -80, -95, -35, 81, 120, 76, 111, -16, -40, 66, 0, 1, 27, 15, 56, 78, -21, 66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.182043735153);
    msg.setSource(9409U);
    msg.setSourceEntity(134U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(11U);
    msg.id.assign("LNRNKVHUFCCSDNVQTVRYFKBOCPXJHSYXGYSYCVJJEEJWDRPGQDKATOKFBDL");
    msg.frag_number = 8977U;
    msg.num_frags = 13468U;
    const char tmp_msg_0[] = {65, -38, 69, 111, 75, -114, 99, 51, 21, -39, -12, 15, 121, 72, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.643010387759);
    msg.setSource(12902U);
    msg.setSourceEntity(95U);
    msg.setDestination(26777U);
    msg.setDestinationEntity(31U);
    msg.id.assign("INEHVHAXKVXBDBLWISDBXKYMEROUJWXGBSROJGJZXKLYEQUGEMVBNETIEQFUFZSVHWOCGXAMPVLJPQBKRZCGWUUAHXOTOCCFWLMIELCCCYYWJNBRSJFTNEUNAHNZLCUQDVLADNJPNJIAYQGHDIHSWKFQRFMSIZKRSZOKWEDTKVRSVQAFPRMILOPNTRWZSVTGPZUDPPOBFDQYGMYBYKYANOGBKWJAXFPYUTIVMMGJHTAXETXSZTLCLFQC");
    msg.frag_number = 63253U;
    msg.num_frags = 40803U;
    const char tmp_msg_0[] = {49, 126, -19, -31, 112, 116, 16, 123, 58, -62, 118, -119, 25, -72, -52, 111, -12, -60, 1, 22, 114, 109, -101, -14, -12, 27, 21, -128, -104, -67, -45, 119, 77, -124, 48, 21, 43, -21, 13, -108, 89, 3, -3, 1, -12, -25, -113, 110, 49, 12, 113, 61, -19, -74, 115, -100, -57, 4, -4, -105, 106, 56, 13, 71, 65, -41, -10, -76, 49, 3, -116, 111, -45, 4, -84, 107, -25, 122, -10, 121, -118, -56, -34, -50, -117, 81, -53, 24, 5, -43, 48, -78, 43, -124, -122, 84, -77, -101, -73, 55, -54, -111, 29, -117, -53, 7, 67, 92, 65, -38, 116, -88, -75, 37, 19, 94, -77, 57, 118, -107, 64, 67, -55, 81, 117, -45, 107, 110, -125, 20, 89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.821414724964);
    msg.setSource(40914U);
    msg.setSourceEntity(89U);
    msg.setDestination(24873U);
    msg.setDestinationEntity(2U);
    msg.nbeams = 172U;
    msg.ncells = 74U;
    msg.coord_sys = 187U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.0784593161332;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.200022950313;
    tmp_tmp_msg_0_0.amp = 0.704368841408;
    tmp_tmp_msg_0_0.cor = 13U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.499033521622);
    msg.setSource(24280U);
    msg.setSourceEntity(56U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(181U);
    msg.nbeams = 85U;
    msg.ncells = 23U;
    msg.coord_sys = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.311170572958);
    msg.setSource(6564U);
    msg.setSourceEntity(29U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(155U);
    msg.nbeams = 193U;
    msg.ncells = 12U;
    msg.coord_sys = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.319428018462);
    msg.setSource(62858U);
    msg.setSourceEntity(89U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(13U);
    msg.cell_position = 0.0118253705996;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.227446976651;
    tmp_msg_0.amp = 0.545399479465;
    tmp_msg_0.cor = 232U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.593486699334);
    msg.setSource(30144U);
    msg.setSourceEntity(229U);
    msg.setDestination(61298U);
    msg.setDestinationEntity(49U);
    msg.cell_position = 0.714505111946;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.143466477864;
    tmp_msg_0.amp = 0.259681545903;
    tmp_msg_0.cor = 181U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.420964184988);
    msg.setSource(37423U);
    msg.setSourceEntity(185U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(125U);
    msg.cell_position = 0.809007957341;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.313495296509;
    tmp_msg_0.amp = 0.325894199076;
    tmp_msg_0.cor = 59U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.119923307451);
    msg.setSource(54092U);
    msg.setSourceEntity(208U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(132U);
    msg.vel = 0.696959776302;
    msg.amp = 0.917571367297;
    msg.cor = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.358298668318);
    msg.setSource(22462U);
    msg.setSourceEntity(134U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(76U);
    msg.vel = 0.317412368161;
    msg.amp = 0.848276327931;
    msg.cor = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.46013025151);
    msg.setSource(5381U);
    msg.setSourceEntity(137U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(50U);
    msg.vel = 0.973734923124;
    msg.amp = 0.911943779646;
    msg.cor = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.903024355199);
    msg.setSource(10764U);
    msg.setSourceEntity(253U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(177U);
    msg.value = 0.419228694897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.695976235677);
    msg.setSource(10442U);
    msg.setSourceEntity(0U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(205U);
    msg.value = 0.174895026727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.880333458447);
    msg.setSource(17884U);
    msg.setSourceEntity(220U);
    msg.setDestination(51174U);
    msg.setDestinationEntity(189U);
    msg.value = 0.939488668674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
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
