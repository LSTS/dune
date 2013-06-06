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
    msg.setTimeStamp(0.912213948523);
    msg.setSource(29450U);
    msg.setSourceEntity(165U);
    msg.setDestination(52787U);
    msg.setDestinationEntity(168U);
    msg.state = 94U;
    msg.flags = 207U;
    msg.description.assign("RHZECDGHXACGFSHIKAUDLBUESYMCFMJVKEQZPEJTGNTRPVJHYWQLAMUBNSDQMWWDQVPLUISCJKHNNYYSUWVHBACTLAUIRWOOFGEAODIKKXARDNJLYTPIGAGBICOLZMEBTYNRFXKJVFSYOXPDWJOKPDWVVMYKRIOAQTBBLMWQLYHOMFKZBCFQQHNEDQMTSSKOVCIHTTZBRGGXXUNAFIPWLZBRYJUUGHGZRZXMD");

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
    msg.setTimeStamp(0.746595272293);
    msg.setSource(12625U);
    msg.setSourceEntity(53U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(76U);
    msg.state = 163U;
    msg.flags = 231U;
    msg.description.assign("CZRMTDKSQBXXUXYFJYBAPLSNORTJPXXMZEWIMMJDZEPKWAFISIALNPAJSIECOXEKJBZJUNTNCCBTCZHXKHMDTMZYNAAAGPQYRHXVAGHIJVHHOWLNLULYBCWVDMUKGYVJQUEIGPHYQKUVINTBJDYSPOUSVLQYZBU");

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
    msg.setTimeStamp(0.76418004151);
    msg.setSource(33032U);
    msg.setSourceEntity(164U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(24U);
    msg.state = 182U;
    msg.flags = 29U;
    msg.description.assign("ZAYVRSYQAZKJTMLCBCVHLQFHQEMGPVSNKMXKENVLREGANWYCUIUMHQYZPNYBWSFPELOSFAZSKUTTWTOEZGJXDDBBKCQXDDREQDGGGEAMBOPXOWWXFJORSLUVZOCP");

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
    msg.setTimeStamp(0.71678716709);
    msg.setSource(4023U);
    msg.setSourceEntity(64U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.806665401097);
    msg.setSource(32816U);
    msg.setSourceEntity(169U);
    msg.setDestination(59046U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.629002023682);
    msg.setSource(44698U);
    msg.setSourceEntity(118U);
    msg.setDestination(56762U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.328454576922);
    msg.setSource(64778U);
    msg.setSourceEntity(134U);
    msg.setDestination(23173U);
    msg.setDestinationEntity(226U);
    msg.id = 2U;
    msg.label.assign("OODGNZBIKNWKEIVGXGRWYUGHZHGZCAWFPSBQSTMOFCLTRSCLZYTQNBPEPJHYKGGAOUXFKEMLDZYQDMNISPXHVRKXCXDRJICCRYXHQJFZJAGMWUOXNUFFEYTBQDUUPBEJVLPWYNVMARFYSWYGMOEXAQKKTVTFOLWPAEXAIBSAMCENUAVA");
    msg.component.assign("IQXDPMALKFZGBTOWNBX");
    msg.act_time = 26273U;
    msg.deact_time = 6348U;

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
    msg.setTimeStamp(0.313459253327);
    msg.setSource(19103U);
    msg.setSourceEntity(234U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(202U);
    msg.id = 103U;
    msg.label.assign("PJIMVUJZADONROVUAJGVLHCMHURMDOUSXDURWIDCWCSLRXNGQCFUWQPZJHPILRTBPAHYVSLAWLOBYMAFIVKUSHTMPDHNCSSILYWGFZUNPNWNGJZINNGVGTBEKKLBXGVZTDRLYQZNFEFHTJJPCR");
    msg.component.assign("ZUSHSYTUHDJCTMWAOFVKMGNWJGARPYFZKAMZNJZNKLUNCZSRIWVQDOOICBBCNRHVBVHXJDNDTXOAXJTFXPOYXCLCKGWEGGCJOQRVM");
    msg.act_time = 19542U;
    msg.deact_time = 36398U;

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
    msg.setTimeStamp(0.626584724441);
    msg.setSource(29508U);
    msg.setSourceEntity(224U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(13U);
    msg.id = 3U;
    msg.label.assign("DCTSKXYNQGTUFLIUBMKLGJCSAHHXHNEBLXNBXRUYMGTXDDGBYKHMHTCDMQKQRAWWPTSEJDOOKIRTQXUIAWZRVSVTYRJEFMKNYORCZCYPAQWRNGOSJMMCHCEGWNDNJOLADXGIPQOYQKBZZFRAKNMLJVZUZFTBBIOZEW");
    msg.component.assign("CQHFXBOOYXDGFRXBNRKYNKXQHZQDMMFJTPYSCALWMSENDZOFDI");
    msg.act_time = 26067U;
    msg.deact_time = 55160U;

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
    msg.setTimeStamp(0.853989045069);
    msg.setSource(46584U);
    msg.setSourceEntity(86U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(146U);
    msg.id = 201U;

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
    msg.setTimeStamp(0.859247216612);
    msg.setSource(15215U);
    msg.setSourceEntity(201U);
    msg.setDestination(54767U);
    msg.setDestinationEntity(57U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.815001490666);
    msg.setSource(46072U);
    msg.setSourceEntity(186U);
    msg.setDestination(34195U);
    msg.setDestinationEntity(239U);
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
    msg.setTimeStamp(0.333741703828);
    msg.setSource(51832U);
    msg.setSourceEntity(163U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(198U);
    msg.op = 161U;
    msg.list.assign("DDJKFUCMDGYDPFDXCWQMTIAYPEOLAGBKNQGBXUOZENAZHVUOFJKSACHLZZWHBAHVAJUEJJQGUTCKWXRHORVOCIPCECBMOSSKUQPHJBICPKSYQNUJUKPWKLTSHTMELTHVGWGDYLHDAJEMBWPVNNQMCPQLLSMIMYPFZYRYIUTAFVNRFERDOIIWXTEFUORRTIMAFTZXYLQBAIWBNKOMYTCGGGVZONXELEXRQFDWSSJNVDHNSKPXWXVVBYB");

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
    msg.setTimeStamp(0.885306668902);
    msg.setSource(21752U);
    msg.setSourceEntity(247U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(246U);
    msg.op = 107U;
    msg.list.assign("YKVYRZCABTKOJOAFNNQUOKFSUSTESGRHUAKCVFOEIGLLCHQHVJFACDPVIYPSAZYHEURBFINBANZAPDODVKGFZGTSYMMQUOCLRKFMEIUXWQAGMIGCOGRCDTAUMDBMGNKYIWUKWBTFBLHYXVPJNCEJTZWHWLSLRVNVQZLQZPMZSPDJXETOERVSEJSXBICXRBIJPLHEIVZMMCHFMLPDQONAZWTXDJUJHWWTSLQBDUPPHWYNGXOGKEYQW");

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
    msg.setTimeStamp(0.299836880453);
    msg.setSource(39046U);
    msg.setSourceEntity(162U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(169U);
    msg.op = 102U;
    msg.list.assign("DDSAYNBDJABTTSFVXTMMANOIAJUUJYXXCGGPMYDJAUVEIPOMZZHEKHXLOFJQBXUOFLVKUSHKRKIASKGZUQUZIYBNTVYTPYOQEPXRIZBJNWVVHNLTHQLCCWKWSAJLWFNMNCFHPMWTWCUNTERWKYRGAKRLBVADXSIIFYPEHTDCXTJVRFIGFWHLYOZPMKVMZ");

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
    msg.setTimeStamp(0.29980578426);
    msg.setSource(12511U);
    msg.setSourceEntity(182U);
    msg.setDestination(34286U);
    msg.setDestinationEntity(149U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.758361675939);
    msg.setSource(28086U);
    msg.setSourceEntity(70U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(11U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.693799206959);
    msg.setSource(50722U);
    msg.setSourceEntity(140U);
    msg.setDestination(57311U);
    msg.setDestinationEntity(35U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.350081819939);
    msg.setSource(49969U);
    msg.setSourceEntity(193U);
    msg.setDestination(11176U);
    msg.setDestinationEntity(123U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.195460357564);
    msg.setSource(46447U);
    msg.setSourceEntity(175U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(156U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.142696648209);
    msg.setSource(21384U);
    msg.setSourceEntity(186U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(218U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.276347074872);
    msg.setSource(3467U);
    msg.setSourceEntity(243U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(182U);
    msg.consumer.assign("KOOSJVJOKUXVMIVRKNOPRXUAOCUQLBSGAHPTTEQEKDRKMVMGVXDHXOZMWLPJXAIXMDYFLBWIMETTDGWEQGTYLTKFZJFIPANSCBYCGNWPZHDQJSAVCPURZFGEMCYBWXRZFKNRMHOQVAENAWNVPWHGOUWHPERIKZRIEILLYMLNYNJYROUFBDUZFPQLDDBCCZTKGYWSNUXQSVBIWUISTCRHYHBQJQNJ");
    msg.message_id = 19781U;

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
    msg.setTimeStamp(0.394121273349);
    msg.setSource(3115U);
    msg.setSourceEntity(49U);
    msg.setDestination(10398U);
    msg.setDestinationEntity(7U);
    msg.consumer.assign("YGXHIZXEYSGKXFPXYJHREQFMWPRESKNYVLAEVXZDQHLAWRSOBDASOEJMVFKJLBDSNKMZWGIECNYRMWFBNTDPHB");
    msg.message_id = 54863U;

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
    msg.setTimeStamp(0.416547055094);
    msg.setSource(64409U);
    msg.setSourceEntity(68U);
    msg.setDestination(43414U);
    msg.setDestinationEntity(54U);
    msg.consumer.assign("XGILJZHDHJPAMUQITAGOQIZFFKGSYDZORCUTFWVMEAAVFLYKKAYPFHODZXNIGXDXBOLGWKMLBSWPAHRQVJEFUOFIRJCYQGKNVCDCW");
    msg.message_id = 8235U;

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
    msg.setTimeStamp(0.439042637879);
    msg.setSource(23574U);
    msg.setSourceEntity(184U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.0452012962477);
    msg.setSource(51581U);
    msg.setSourceEntity(90U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.409212859402);
    msg.setSource(47649U);
    msg.setSourceEntity(173U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.138097350499);
    msg.setSource(8938U);
    msg.setSourceEntity(207U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(217U);
    msg.section.assign("FEOHXZMNWLDHHDKROFZRZBABNTJIAYIVXFFCDITEBQGJFNARJHIWHQOPZAIRRCMCPDRNEQNTLHOLNQSEXXFPZCGWMGFPECQDRMVVUKBIHTQBOIWSLWLJIOWLUJMINHXNCOVGQWBXOUPAUCASDLZUZLBKJVYYQTCADSYEDNFFZABGQMGLPVMMGTAGYWYMZAHRXJVPEM");
    msg.param.assign("ACKKBWRURVTHMNOLSGNLNMRKCDBWKFLYOETKOCOJHHYQTEFJWDEVBSDLQCEULYMEFRYDXPXYJLJGXFQYSAIKRDANPCXIVZACJFELHUZXHWZFXGYYUUBIDGBOHZRBWWMZJIGYQDUMUXFSTXQDVGVCILJXXHENWAPBMTNGNLAQNBMZOANECWHUOCBJFGOSWZVG");
    msg.value.assign("KYJKMGFUEEIQXWHQZBQTGYMGTTMFGJSPDLLYUYLACWFXMWLXBCCMDNVZALOPXNGURFGRSEECUOKVDDUNHBHWMUINYVQNEVRHYMA");

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
    msg.setTimeStamp(0.509048605966);
    msg.setSource(18422U);
    msg.setSourceEntity(98U);
    msg.setDestination(48157U);
    msg.setDestinationEntity(32U);
    msg.section.assign("DZTGRQZWZSKUWDDBZPIBQHKHEQFHXSRCVPMVOTTZGCJBMWLWOWYOGSBDHKUSLBSVQRXFAU");
    msg.param.assign("BFPANEMZBMQQDYXXYHXFPUQEOOVQRJVGPXZXIFNXAGTDLTHEKASBMUHNZHWHKEISFQEYXCNWWVRNWZFWABCODMSRPHKCIUSAYTVDGGJRFQUHZZADSULWIDXKRFYGOHYQZNFJKCLLGTTRVJQXMCU");
    msg.value.assign("XQBOIIHPSIZGRIIWLGLZWLGQKMOWWAHEOJXMDORETLMSJKAPNBXCFWVRSBSDKBDHHOHFYEASVEQJKRYBCFYVYWAIOXVPQZMJGWTJECKMZFDXMCFCCAKPCTNJWNTXJNUQZWGLYAMAFLZHLNDGGRRNYEMRUPCNVSBXUTTFPVKSLEPKBZTIGUPQKSRAJUPCVFYDNERTZQYYQAONSXQJHBUWESIBUIHLDZDXMUDH");

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
    msg.setTimeStamp(0.877666539522);
    msg.setSource(10482U);
    msg.setSourceEntity(222U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(141U);
    msg.section.assign("DWHHCFSFZXLXWCJAKVNNQGRCPNFYUMOXLFSFHULTYDXKBJZKQDMXSWEDUKPZJVSTVYBZYMRRNZDLRYWOFIXQGFYTDQLNOWSVJLDFOJKLIIEGACFXSEEJPTAAIBKGAPEQMSZBOWHAGCDUYAXIGBG");
    msg.param.assign("EPOJQTSECQXXFSAIGLOTDSLZJZPSZVYRGXLMJLZDMGPRERCDYTLNQTMDZVIOVOVRMIVUAVYHLWWFFHQAUNBMHYJCXURYUGYH");
    msg.value.assign("TSOHDRJHVVBZSNESUEIXRYKJYBETHSNJYKPFOKCCJOLLHDMUZGFONSKTR");

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
    msg.setTimeStamp(0.107565167193);
    msg.setSource(56524U);
    msg.setSourceEntity(160U);
    msg.setDestination(58598U);
    msg.setDestinationEntity(93U);
    msg.op = 149U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ICHBVTRXFPQVHTGPXZUWZNKUMNEEAYMGARDSPQXXCWVFWGDKIFHJUUUTCADAKRPWXNDQDNNZMYKOHELFCOATKJVNZNLMBMDXUVBMLSVBBYZWDKYTNEIHVGFBRXWMLWYRKHEDCRCAHSNTYTXPEPDYSUPBMQMOGRJS");
    tmp_msg_0.param.assign("FESKUPYWTBBFABIAWJIRRMHBKXSEDWCPWWGTAWIWFIBSGTFPLENJAJWUIZVFOZMOSGUVEHAXVZDPNBYHNLXSPVRHQQTTVTEOYNLBIUFZCXKOLTKVZXOXNQATUNVLPNSMDBZNFFBPUMDLSCGDECKZSISMJGLMQQHRMYEHGZHDMVKNIRJGALCQHDDOPDB");
    tmp_msg_0.value.assign("NGVDOUIZJOLSUEIMOFYTOZROPTADWVWELPXKVXOFFJAMCQLNVQVPRAQJLIXCCPRPAEQGEIZHAUYSJGHBTNVQPUHBVTKEONZHKMZDYZEUZVHTIVKLYLBLFWHPLAQSMFKJUZBXYDKBJGBBF");
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
    msg.setTimeStamp(0.0742319938735);
    msg.setSource(54528U);
    msg.setSourceEntity(228U);
    msg.setDestination(6586U);
    msg.setDestinationEntity(238U);
    msg.op = 227U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("WYKEVHWHIPHMVEDTVDNCCENZXIZDKSZGJNVRTRPULQXKIKBFBCMUNHBCACHOPDTODYRNZGMUKSRAQLLEZLGWNSYQARPOBLFPATNHJHZTRMYLSUFBJBIWLZMMXLXEAWFDPSGDOKMQBGJXRJQUIBJARASIOWVOJPGFQVUYAOPABHFRUMEHDPGATWEVUZXLEULVIVTQCVYGQCNKDDSSWIKISUYXYOXNQFNPJGEHCW");
    tmp_msg_0.param.assign("XIHEVSMTGTMWPZKNJIJLAGOAPWOWGYSDFNAIRQLAIZMBDBBEBOHTZKDTVIGLCCAUYKPLFQUUNDASTNPOGFGMMXRRVIMTLKYPZQVNZFYSREKKB");
    tmp_msg_0.value.assign("LDVNQDPTIUJYDXFULTBJRILSQXCVTKBAWSUXBTZKNRBWQDXRTJSSAJATEJWNFRXVPKLHXYVZOKUMRIRDEXCBPHHCGWEDYKLFBLSEYCIKPIACLTIZMZVDOXTHBOWMNKPANWBHQQJNAWJKYRYHVELEZOOIVQPGOWOEJRDFIUJHTSSOCEGZUFKLDOQPQNWGAEPGUUSPHNBGVRFMIANYBKUUYGCYM");
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
    msg.setTimeStamp(0.556963986583);
    msg.setSource(29627U);
    msg.setSourceEntity(150U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(67U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.00217886242069);
    msg.setSource(19998U);
    msg.setSourceEntity(102U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(33U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.312622722308);
    msg.setSource(38633U);
    msg.setSourceEntity(64U);
    msg.setDestination(53561U);
    msg.setDestinationEntity(9U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.777118942759);
    msg.setSource(24964U);
    msg.setSourceEntity(171U);
    msg.setDestination(40946U);
    msg.setDestinationEntity(220U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.523450769781);
    msg.setSource(783U);
    msg.setSourceEntity(27U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(209U);
    msg.total_steps = 108U;
    msg.step_number = 40U;
    msg.step.assign("LQYKEFXWAQPFXAKWKFUZBYZWXSQXQLLFCVFZHZXIAFLXDLITQLSDUXLVSUVJNGQBVRAOSBMXCPAQGIHUVAIDJKOEMFOFHMUBRJHNRNKNBNEJTDCVNTJIDEVIKGPCZJYLWOIJETWTWDOMEHSKJXDFUCEZUNWSZNMOOMBGIAMJEHOGRRVRH");
    msg.flags = 165U;

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
    msg.setTimeStamp(0.14479791131);
    msg.setSource(64418U);
    msg.setSourceEntity(170U);
    msg.setDestination(21058U);
    msg.setDestinationEntity(156U);
    msg.total_steps = 11U;
    msg.step_number = 140U;
    msg.step.assign("JDMFQURLOWJPMGMDOFVOILWPWAQOEXHKDYAGGOYHECZEHCNOAKBRXFDSJGSXFOVIDEVQCCFMFIYCIVSWBRIMMCXATCTX");
    msg.flags = 132U;

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
    msg.setTimeStamp(0.15250993565);
    msg.setSource(36218U);
    msg.setSourceEntity(183U);
    msg.setDestination(38851U);
    msg.setDestinationEntity(130U);
    msg.total_steps = 59U;
    msg.step_number = 215U;
    msg.step.assign("XWUEGPPMOFRRATRTUYZEIQXSYVHCKTNRXONSOUQDZJMPPRVLMNIGKACVIDQBLKQQFXXC");
    msg.flags = 77U;

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
    msg.setTimeStamp(0.0334661606394);
    msg.setSource(30931U);
    msg.setSourceEntity(91U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(89U);
    msg.state = 91U;
    msg.error.assign("OPDORFTLVMAQTPHWNJEXOTKVWSGBMGMIBBXCNQZHDQAPDRLRATNQ");

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
    msg.setTimeStamp(0.671461119476);
    msg.setSource(59192U);
    msg.setSourceEntity(50U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(179U);
    msg.state = 55U;
    msg.error.assign("TQNQWYJPRKREJTRLMSMBMTLGORAIKLRVJJTQGWYBDFJKZOKCMPNSHJGUKDWNPHNWFVUGSOCYWJYMVKCEIVCVPPFXXOES");

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
    msg.setTimeStamp(0.0313397619928);
    msg.setSource(62746U);
    msg.setSourceEntity(143U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(74U);
    msg.state = 75U;
    msg.error.assign("GAUONXINCUVMCLELZWMUZTPRCKKMFNTIAMRDIWERXBQQCTDOLBODWFRJQJXDTUGWCNTDDZROCARHOADPMGOSXZYQWEXXAHHVPKGIVMPIJZWOPSSZVMQWUPKOGPFGQSENYFYJNBOIRHAEDCPHIFEITOPLXBJUSMKVVMIBKLKDYZGCKTNJEUREAYWALNZCGZIYCFSTHEWQ");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.212738873147);
    msg.setSource(30639U);
    msg.setSourceEntity(83U);
    msg.setDestination(43795U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.861668391577;
    msg.lon = 0.510329762996;
    msg.height = 0.875380548887;
    msg.x = 0.640962604307;
    msg.y = 0.182206065005;
    msg.z = 0.637179060481;
    msg.phi = 0.978595041016;
    msg.theta = 0.612005130038;
    msg.psi = 0.613946344119;
    msg.u = 0.843198654515;
    msg.v = 0.718765399088;
    msg.w = 0.453305745978;
    msg.p = 0.408605221564;
    msg.q = 0.409709705637;
    msg.r = 0.814070623723;
    msg.svx = 0.8403781205;
    msg.svy = 0.0852389085491;
    msg.svz = 0.514209150788;

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
    msg.setTimeStamp(0.473231186708);
    msg.setSource(17982U);
    msg.setSourceEntity(179U);
    msg.setDestination(56430U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.80223239071;
    msg.lon = 0.545060747971;
    msg.height = 0.0587660575327;
    msg.x = 0.361480368773;
    msg.y = 0.718179389849;
    msg.z = 0.132122487973;
    msg.phi = 0.818485406517;
    msg.theta = 0.0597199983829;
    msg.psi = 0.0950326600663;
    msg.u = 0.8597445568;
    msg.v = 0.841325622926;
    msg.w = 0.902177116833;
    msg.p = 0.349085515998;
    msg.q = 0.804246483035;
    msg.r = 0.938267285704;
    msg.svx = 0.2761065365;
    msg.svy = 0.635179289503;
    msg.svz = 0.131008964728;

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
    msg.setTimeStamp(0.980100891924);
    msg.setSource(27723U);
    msg.setSourceEntity(119U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.415978504642;
    msg.lon = 0.0199928617825;
    msg.height = 0.888134830514;
    msg.x = 0.482704909944;
    msg.y = 0.838854632667;
    msg.z = 0.577785049781;
    msg.phi = 0.0193397083099;
    msg.theta = 0.748118186089;
    msg.psi = 0.490250848458;
    msg.u = 0.0804639074433;
    msg.v = 0.635996734473;
    msg.w = 0.219518473076;
    msg.p = 0.583993098329;
    msg.q = 0.613995884235;
    msg.r = 0.878940665966;
    msg.svx = 0.949728652308;
    msg.svy = 0.917326551461;
    msg.svz = 0.113117563993;

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
    msg.setTimeStamp(0.0493882495314);
    msg.setSource(2314U);
    msg.setSourceEntity(77U);
    msg.setDestination(38499U);
    msg.setDestinationEntity(172U);
    msg.op = 224U;
    msg.entities.assign("MYHLQDRLWRRMEHCRNEGBKAHBWWGXQNLOMOMGSMUTQIRTZVWBOXUBKXHAGDFXTJCAYMQJNKUOWXJIMQDZFAZFFTJWVFZTGGVUJPNJIDOEXZHSFJYSYGWKSFVKAGQAZULTVWCRKZOECCRDDLDSXUFIOJNRJXPITESMVLTWTKYPZPCCGHOOYYVVHBUGRQUKSMYNVOIHIK");

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
    msg.setTimeStamp(0.390815941151);
    msg.setSource(56153U);
    msg.setSourceEntity(245U);
    msg.setDestination(59987U);
    msg.setDestinationEntity(3U);
    msg.op = 126U;
    msg.entities.assign("FZXERIAVMYBKSYTBWFTPPERGVIEGSZHHZKMEZNQUMYEJZMAGXHEHAKLVQBBQJGVULFGNTQKENXFRZHDMTOQEDSMRLBJ");

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
    msg.setTimeStamp(0.378297587906);
    msg.setSource(20927U);
    msg.setSourceEntity(144U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(63U);
    msg.op = 31U;
    msg.entities.assign("GJTCXLVQIVFKJIHCAQHCJEKLUNYLNKHEFPSCASDTNBYVUHAMFRNIZHFWTPWSMXHDREJIIVBSDZJBKXMDAUVYGRBOXIRQURFXWNYSCUKEMVXGPQZSPRZDMPPLWXSVCDZHBXREVQYQZOSJTNKMMZULTTUTLZDGQUXZMBLGDWMGUOJAOGLPLGCMIYDNESPOCFRYJWWVQBHHRUGAKRCZBBAPFKOLYOINSYJFDTINWTAOEVTWAEBIEYEQF");

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
    msg.setTimeStamp(0.723587182724);
    msg.setSource(22978U);
    msg.setSourceEntity(89U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(19U);
    msg.type = 151U;
    msg.speed = 62734U;
    const char tmp_msg_0[] = {-48, 41, -50, 125, 15, 76, -13, 39, -44, 17, 78, -52, 49, 76, 57, 78, -55, 34, 80, -74, -6, 28, 31, 96, -45, -67, 113, 79, 62, 32, -110, 84, -69, 42, -14, 112, -73, 120, -6, -108, 15, -102, 37, -19, -31, -28, 94, -71, -6, 81, 63, 19, 76, 72, 84, -29, -21, 40, -50, 43, 15, 82, -105, -13, 117, -97, -89, 27, 2, 40, -9, -66, 68, 14, -114, 3, -44, -107, -16, -12, -74, 85, 28, -63, -83, 115, 92, 108, -41, 94, -102, 91, -90, -9, -64, -28, -98, 22, -90, -91, 96};
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
    msg.setTimeStamp(0.31046547922);
    msg.setSource(1901U);
    msg.setSourceEntity(96U);
    msg.setDestination(5097U);
    msg.setDestinationEntity(197U);
    msg.type = 247U;
    msg.speed = 16942U;
    const char tmp_msg_0[] = {42, -120, 119, 86, 62, 81, -77, 19, -69, -2, 97, 88, -121, 30, -68, 88, 38, 39, 10, -107, 64, -19, 115, -102, 20, -50, 83, -8, 93, 61, 105, 89, -94, -128, -103, 15, -119, -126, 87, -66, -119, -100, -8, -127, -128, 11, -3, 65, 59, 98, 58, -80, -56, 13, -109, 74, -112, -24, -68, 112, 40, 91, 18, -125, 1, 65, 26, 62, 17, 26, 73, 100, 95, 25, -16, 118, 79, 50, -110, -103, 118, -100, 117, 33, 117, -35, -23, 105, -66, -105, 40, -33, 2, -2, 52, -28, 19, 53, 105, 94, -51, 66, 32, 32, 65, 52, -74, 6, -12, -27, 18, -42, -21, 14, 93, 5, 96, -51, 102, -69, -9, 21, -101, 114, 19, 116, 108, -7, -26, -59, 13, 46, 76, 67, -5, -79, -16, 123, -113, -93, -55, 104, 33, 94, -36, 100, 51, 116, 84, -47, -13, 73, 62, -75, 61, -40, 44, 16, 96, 39, 17, 59, -4, -97, 19, -32, 34, 97, 6, 57, -59, 65, -17, 77, -58, -1, -22, 32, 44, -45, 93, -56, 2, -81, 81, 102, -70, -113, 8, 67, 104, -100, 108, -47, -12, -124, -67, -83, 10, 40, 64, -95, -110, -49, 6, 104, -28, -95, -18, -40, -33, -78, 59, 93, -122, -28, 52, -88, -105, -52, -102, -128, -10, 7, -124, -6, 10, 50, 63, -71, -61, -1, 33, 12, -18, -94, 117, -87, -1, 107, 126};
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
    msg.setTimeStamp(0.947793243248);
    msg.setSource(39878U);
    msg.setSourceEntity(38U);
    msg.setDestination(2343U);
    msg.setDestinationEntity(119U);
    msg.type = 65U;
    msg.speed = 32334U;
    const char tmp_msg_0[] = {-60, -30, 78, -40, -76, -65, -52, 77, -9, -115, 108, 32, -81, 115, -106, -48, -125, -78, -113, 50, 58, -114, 59, 7, -118, -10, 1};
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
    msg.setTimeStamp(0.435227461876);
    msg.setSource(22413U);
    msg.setSourceEntity(128U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(30U);
    msg.available = 3122701025U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.823404776811);
    msg.setSource(42649U);
    msg.setSourceEntity(116U);
    msg.setDestination(50749U);
    msg.setDestinationEntity(123U);
    msg.available = 3969071718U;
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
    msg.setTimeStamp(0.414986517502);
    msg.setSource(37832U);
    msg.setSourceEntity(214U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(208U);
    msg.available = 2172652380U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.322323985235);
    msg.setSource(29228U);
    msg.setSourceEntity(2U);
    msg.setDestination(21257U);
    msg.setDestinationEntity(27U);
    msg.op = 112U;
    msg.snapshot.assign("JVBTEWIKEAHMOESSNTIPGPNFPQAUJNTWURAYFLBGADTCFKCESFLHLSJKOMAIOVDZWARFMIQLXZHXCETCUNTZTRBYNDKFMHXMSDEYUC");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 146U;
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
    msg.setTimeStamp(0.423266227998);
    msg.setSource(4904U);
    msg.setSourceEntity(156U);
    msg.setDestination(23159U);
    msg.setDestinationEntity(160U);
    msg.op = 88U;
    msg.snapshot.assign("WHQWLCRTZRSITSTCOTXUBDOMAPDIFVVXQRJLLHRQJMYDOAOGCZKXVHHXEOCEFJIUYYAKDSJROZUWABCGGJNEGCXWNDEPKYBSNITHWQEXQCLTHRUMOERLUJJYPAAMWAVSIZUTBZAUNFHOBPFZPNWXSBAEZBPLDFTUFWNKIQGKEARDLBDZZZHLVS");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 22U;
    tmp_msg_0.width = 24190U;
    tmp_msg_0.height = 42108U;
    tmp_msg_0.widthstep = 16016U;
    tmp_msg_0.channels = 5U;
    tmp_msg_0.depth = 236U;
    tmp_msg_0.finaldata = 64U;
    const char tmp_tmp_msg_0_0[] = {-70, 80, -99, -96, -28, 72, 35, 9, 13, 103, -24, 49, -125, -32, 121, 16, -43, -96, -85, 124, -46, -88, -119, 70, -2, -71, 65, 92, -41, 78, 13, 121, 73, 43, -22, 22, -60, 39, -98, -5, -18, 31, 105, -83, -22, 80, 75, -33, 107, -123, 51};
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
    msg.setTimeStamp(0.904264588178);
    msg.setSource(32739U);
    msg.setSourceEntity(66U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(97U);
    msg.op = 225U;
    msg.snapshot.assign("NYZJKNYAISTNZRNXWFFGMVYUUDRBRGCYFZOTNDSQBYPTIEGAXMIDJRPTHFGRIWKOKCEQYBLNVQTDJADFIQLHFVPJAPSPUOZTBUCDHMBZOVZXMEOQKRMIAPJKPTUZUULPHHOMYLLAMBOWLUUDILTIPIEJXHJZCRXCHXXSGWKEAFZYIWYVBECMANASLPVGXGSJFEKHTGZFOCVFEGKMHSMEBQHGNBWCXUWOAWNCRYWOLTLWXDSRQJSVC");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.469232098972;
    tmp_msg_0.phi = 0.0740487997189;
    tmp_msg_0.theta = 0.231281547646;
    tmp_msg_0.psi = 0.519404649239;
    tmp_msg_0.psi_magnetic = 0.526072887819;
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
    msg.setTimeStamp(0.0405278999702);
    msg.setSource(52185U);
    msg.setSourceEntity(5U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(218U);
    msg.op = 189U;
    msg.name.assign("ASWVGCWJCWAWFAOJUIACTVFBFVQBQBIPQMPASGDSIJRURYCFSDJOKHPEOQRIQNIEWTLLPIJOBCTBGZZOZTHAOXSUMWDZVXGBKECLZEGLVXQDXHGVQJQGRZMAFLTPWEQMPPKVXXDEVEHLNHLKJUUUQMMYDTMRZCRBDLDNITK");

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
    msg.setTimeStamp(0.0948454648769);
    msg.setSource(5605U);
    msg.setSourceEntity(76U);
    msg.setDestination(6809U);
    msg.setDestinationEntity(223U);
    msg.op = 192U;
    msg.name.assign("POREQPXVHQJMDROOZTRTNSUMICZAETNGSQEPEWMCOQCPSRBEGFDTYRPYRSKOATMFAIXFXQDFNYTWSNCKBDDSQHENZJBCPWZUBUFWPGIVKICNIGZLBOKZAWQXDWLLCWXJLZXCNLFQBYLGONTTHLISIERBDEKJLBJAAYEQXKOMNONJYFMRVHDIVZFBBDQDJMGLRMVXCKKPFSVVAHJYFPSZHUXAEGJYWHLMYGUUK");

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
    msg.setTimeStamp(0.946839004298);
    msg.setSource(45993U);
    msg.setSourceEntity(167U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(226U);
    msg.op = 25U;
    msg.name.assign("WAHBRLNUFDIOJQVLMPFTBMRBDLQAWQCSYFLOGXSOOZBSRKPSGCJJTHYCAEKYWTKFQHEPYYMTSUNWZLDLPIZUUBXNPVSQUHFSBJMUPIHAWTAANAKGGGWBIIYNFOUKLFSJXQRHJBIJGZHQNKKPVYWXNPMFCCJAKKNZZDYDZOZECYZVEOLDVEERQEREOADIGGXFWIVRTXWQMCSNPRVBTCYJWLVFGVV");

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
    msg.setTimeStamp(0.608327697844);
    msg.setSource(31255U);
    msg.setSourceEntity(150U);
    msg.setDestination(3640U);
    msg.setDestinationEntity(218U);
    msg.type = 200U;
    msg.htime = 0.656486823096;
    msg.context.assign("CAMMRWXJIDYRRUYKVVVKVOUWFUGNOPPSZLYJSWGIBTUCZDBBLPQOEVFVLCRUKFEBOQQKWHQLGSPSWIXAHZVKREDHLNTCS");
    msg.text.assign("QBZFOAVELYITDIDRQNMDVIHHSXFTALJVGWNDCKQEVWRDHVEYVHQRQBOSUSXJBUENCIBZLPRTFCJTZTWEQGPAKIDHRBCITDFHVNLJBLLIPMSLXUVGOBACSKDSPJGPTZMWIOHGVMGJARENLKXO");

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
    msg.setTimeStamp(0.520815191746);
    msg.setSource(45151U);
    msg.setSourceEntity(174U);
    msg.setDestination(48298U);
    msg.setDestinationEntity(58U);
    msg.type = 208U;
    msg.htime = 0.925869817944;
    msg.context.assign("ZKAVHRWSNGFJBGFQWMTZMCCAUTLBYLCNHSUHVNVREZTHASJGGYIVRDQHPPWMVXEJLTBXWTXHMKMWEWYMDYZNGEOQANBISNJUNJFMNIWAIDOVZKGDTLSONCFNZUUGJUEQJCZHUIRMRPKDSXHEUOABVBDSXBYFMPRJIRXPSJTTQXCFRXQZAHQLBOLGIEVLCISCTMZBKZDOLVFVGYFAOQPALKXEOOBGPYKRFUYPUFKADYOWCTDILWJ");
    msg.text.assign("PEMYBMOTSAGNZNEWHKQLPFQHVNDYMDZXQAGSQCFAYVRBQDETXKOHYZHTARPZHUJGGQYDRMYIFOBLJCDICOHJBVJRKXMTIXUSWSVFKXNUJXKZCTLAXSOKGFCIIGWYKFEQGKPLZWJWUVJJEWDGARNRUTCGVPTMTOV");

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
    msg.setTimeStamp(0.695271001746);
    msg.setSource(38851U);
    msg.setSourceEntity(125U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(187U);
    msg.type = 206U;
    msg.htime = 0.48860752095;
    msg.context.assign("JFICWAPCNGQXVCWGTZHGDKPEYBTQTRXJLHKVMDORIRARCDPMMSLBFKUNUSBRGJKXNPTHWFYOJWGVQHFTBQURQWNPGDHYVHSDWSSZAFZYTEUAZCSIYBUDVJHOKRMLZGVAEBRBOQZ");
    msg.text.assign("ZOOEQYHHBQOURSSFKZMJMWPXKFVFZLCEUECKMSXSBNJDXITNKUXGHURQAQXOCUVSYDLYEXESWBPKNTHC");

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
    msg.setTimeStamp(0.824699085169);
    msg.setSource(62825U);
    msg.setSourceEntity(97U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(62U);
    msg.command = 195U;
    msg.htime = 0.186416993739;

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
    msg.setTimeStamp(0.324687581002);
    msg.setSource(13855U);
    msg.setSourceEntity(174U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(119U);
    msg.command = 23U;
    msg.htime = 0.753008862172;

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
    msg.setTimeStamp(0.726610991641);
    msg.setSource(58740U);
    msg.setSourceEntity(30U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(72U);
    msg.command = 241U;
    msg.htime = 0.20050770628;

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
    msg.setTimeStamp(0.246012104469);
    msg.setSource(41760U);
    msg.setSourceEntity(198U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(77U);
    msg.op = 2U;
    msg.file.assign("BZEYELSSHTREZXKFUIAQBBRYMFWCJQGUDVKNGJLXMXPGSZGIVAZQFSMLYHBQQLMDISMHAROBKRNYUILJRROHOTVPVMCYCYYEVZNHEMEWHHPA");

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
    msg.setTimeStamp(0.589213189776);
    msg.setSource(39823U);
    msg.setSourceEntity(103U);
    msg.setDestination(22069U);
    msg.setDestinationEntity(98U);
    msg.op = 58U;
    msg.file.assign("BTATJZEZPEUCHWYTGPJITMSQUGFBVLOYGDXPUQXOVLRJQVEWFWNBXLKZ");

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
    msg.setTimeStamp(0.463575873077);
    msg.setSource(16839U);
    msg.setSourceEntity(159U);
    msg.setDestination(20089U);
    msg.setDestinationEntity(185U);
    msg.op = 89U;
    msg.file.assign("WKLXHUCTUEMPYMLGTQAEZHKSKYJRYCUDHPPSZQEFKZQAFPQVFRPJBWZAQMYFAGDPCKBITJVBARWYWXCHGNZWGTJRGAJLDBHSOXBWGODCDVXIILTNXUREOUMTKMLECOC");

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
    msg.setTimeStamp(0.378124662154);
    msg.setSource(37091U);
    msg.setSourceEntity(22U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(92U);
    msg.op = 133U;
    msg.clock = 0.479880676412;
    msg.tz = 92;

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
    msg.setTimeStamp(0.0121254717143);
    msg.setSource(64786U);
    msg.setSourceEntity(75U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(18U);
    msg.op = 244U;
    msg.clock = 0.68344950208;
    msg.tz = 79;

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
    msg.setTimeStamp(0.955320424);
    msg.setSource(45075U);
    msg.setSourceEntity(75U);
    msg.setDestination(23821U);
    msg.setDestinationEntity(159U);
    msg.op = 178U;
    msg.clock = 0.549861128589;
    msg.tz = 125;

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
    msg.setTimeStamp(0.436383109285);
    msg.setSource(38945U);
    msg.setSourceEntity(193U);
    msg.setDestination(29918U);
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
    msg.setTimeStamp(0.533792957302);
    msg.setSource(36975U);
    msg.setSourceEntity(98U);
    msg.setDestination(13057U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.224934552414);
    msg.setSource(19339U);
    msg.setSourceEntity(92U);
    msg.setDestination(40759U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.24722648119);
    msg.setSource(57312U);
    msg.setSourceEntity(142U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(251U);
    msg.sys_name.assign("DPPYWSKJRDGSVYQXJQELTAHCTPHFAQRLWYCTNYZPLDRFTOEBNIKFGBGMRAWNPFUDXPLZEVUYTDXTXCLVBIWRJCHKNRJUESOOMBWVJNNLUAZXCNYXJEULNGUCOJREOKEFWZQSQRDZBYQHAAZTJTGIAGMJICMLOQTZKBXGHTKV");
    msg.sys_type = 146U;
    msg.owner = 20000U;
    msg.lat = 0.436504973398;
    msg.lon = 0.0364800657238;
    msg.height = 0.0274709534768;
    msg.services.assign("UXBQCVKAXPSHPASGMJWYIHITRDAZXQTCNKLUOOGLGANROVXHMENDBBGIXEOSVDHFTNCLOVFFUOMRZQRLSKOFBHIUZCDHWWWKVBMFNGQJIBNGEWJYOOVELCESKPUUPFAYDBARFBMKPKMJXRWTXHKVFSLSTHACSRIIRIDJQMLNQACPQTJEXDEJQUYXMYWN");

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
    msg.setTimeStamp(0.450579567);
    msg.setSource(19689U);
    msg.setSourceEntity(240U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(218U);
    msg.sys_name.assign("EAAHCLZWCKYYPRHMCPJYDTBZDLODYGKWDUNQCRSXESMNDRVLFLSPFANUTQWEUVXYHNKLXKFQVHATJQXKBATURURWZCWJXSPIERLWJIOPQTMMQMQONLCVIFVIKGRIOAXMYCEGZHZDPZJHSFIFKJEVTQTKTLRAPOGMWZGRYUNOBD");
    msg.sys_type = 26U;
    msg.owner = 57952U;
    msg.lat = 0.915244752179;
    msg.lon = 0.131671940437;
    msg.height = 0.478300547254;
    msg.services.assign("JFJLBSNCSGJHKRSBAFFBWOLEKPMWKZDADZBJFLWEJJNHRLXOOCOXNBRCSPRYWGKQYDMHQ");

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
    msg.setTimeStamp(0.233183505519);
    msg.setSource(49222U);
    msg.setSourceEntity(19U);
    msg.setDestination(40109U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("AMVWWSPOGSEULKFYFUQPTSFVHYBGDNCXAUIKGNCMUXJLFMZTCKESABMPKOJRVUELGKVHBCZKZLPDNLBSJROAEBQNTFQPXEWFJSZNZUNHQQCHVGHRICWOYIGGKCOAINMQDOHBASECTWYXMFGTUTUWKUSZLAKB");
    msg.sys_type = 20U;
    msg.owner = 50002U;
    msg.lat = 0.581713405087;
    msg.lon = 0.271057356821;
    msg.height = 0.645650835159;
    msg.services.assign("MDSHZGRDWWHFHGLUMDVSWBBMWISEZC");

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
    msg.setTimeStamp(0.507715707221);
    msg.setSource(47472U);
    msg.setSourceEntity(5U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(168U);
    msg.service.assign("CRMFWKIKZEPJKOKMVPQSSUJYMENAAJVGTLKOTCEFJHLDYQABYOSSLRXPXRIEVNLHBLELTVAMDYKVQXVMRCWAPBINMQBUUHMNBCTSOJQZWYODYQVINFNYYCFWKFLGSRTXSPGWFBNWTVPDWURLEKXWVSVZFGXBEDRDUKHFAJHOZQGORDNGZNJQBPZKPZEGRZIOXHYYMATAXDCIEZ");
    msg.service_type = 174U;

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
    msg.setTimeStamp(0.164842786012);
    msg.setSource(11206U);
    msg.setSourceEntity(11U);
    msg.setDestination(55100U);
    msg.setDestinationEntity(46U);
    msg.service.assign("SXGRTSIMXKRYWSMHHFFBIYXADFOKSWVQEJNNIIQYCIVJWNEL");
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
    msg.setTimeStamp(0.763604298133);
    msg.setSource(32916U);
    msg.setSourceEntity(241U);
    msg.setDestination(29745U);
    msg.setDestinationEntity(251U);
    msg.service.assign("OFYIIVDCUUCQYEMDKBOQSQDZMWNYWNRHEYHBFUCSNSOCHLPCETVOETBKSJPMOGZJOQTQBUGSDLIBHDWTMIVWWKHAGQZJNZJXRAZMBBDWBMPUREVIAUFVKYVFTVB");
    msg.service_type = 80U;

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
    msg.setTimeStamp(0.474414574338);
    msg.setSource(8787U);
    msg.setSourceEntity(254U);
    msg.setDestination(46502U);
    msg.setDestinationEntity(196U);
    msg.value = 0.720251740353;

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
    msg.setTimeStamp(0.202639823381);
    msg.setSource(27505U);
    msg.setSourceEntity(40U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(246U);
    msg.value = 0.137464933554;

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
    msg.setTimeStamp(0.335637860424);
    msg.setSource(20221U);
    msg.setSourceEntity(39U);
    msg.setDestination(49681U);
    msg.setDestinationEntity(87U);
    msg.value = 0.358901485686;

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
    msg.setTimeStamp(0.35091703018);
    msg.setSource(14273U);
    msg.setSourceEntity(26U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(189U);
    msg.value = 0.532145855767;

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
    msg.setTimeStamp(0.500171857425);
    msg.setSource(56033U);
    msg.setSourceEntity(193U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(241U);
    msg.value = 0.428859104456;

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
    msg.setTimeStamp(0.292819658525);
    msg.setSource(29405U);
    msg.setSourceEntity(251U);
    msg.setDestination(2238U);
    msg.setDestinationEntity(201U);
    msg.value = 0.481224200742;

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
    msg.setTimeStamp(0.736807419869);
    msg.setSource(10550U);
    msg.setSourceEntity(61U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(248U);
    msg.value = 0.763679475901;

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
    msg.setTimeStamp(0.430048878451);
    msg.setSource(46224U);
    msg.setSourceEntity(162U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0773793032785;

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
    msg.setTimeStamp(0.0885207514788);
    msg.setSource(60636U);
    msg.setSourceEntity(163U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(166U);
    msg.value = 0.625257485949;

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
    msg.setTimeStamp(0.65951651749);
    msg.setSource(36794U);
    msg.setSourceEntity(240U);
    msg.setDestination(24968U);
    msg.setDestinationEntity(194U);
    msg.number.assign("BAMGHPHYRPEGGHSPVXXRLGFYICACVXXRPCEGLDJDEIBVALKPVEFQYWJEKZOQNVIGYUCQTLROLKDSSFYRJFRTMDZWXBABCYJXIVDBVCTXDKWCIMMWLXKNAZIJAUEOJOKMERXGZTUZMHSMIVHFDAPKRUPSFDHNMLCWJQXNKTWYLQQKZYOHSMBCFNUOGUJJWOVTO");
    msg.timeout = 20048U;
    msg.contents.assign("KQNXZRWBQHHJLSLSJPAU");

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
    msg.setTimeStamp(0.293530849106);
    msg.setSource(64235U);
    msg.setSourceEntity(115U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(248U);
    msg.number.assign("LVLTKOUBEJWHOYVGWINUZOALOUJEYIFHEAHDSNWIKOEVNOIPTGJTEYGFJVSLZDQUNGUNMFQRCTDHYSMSEKRBETVFVJITAFUFXBXDLHABINXUPFMHCKZFCHCUGMONKNMYMMSYQDATBZUWDBEXGCQWINRPFWFOCMPCKRAPPZLVAJSXYKBAERHRSQLVPSQPQZJDRZDICYWHQIWSEGTILXDMRRUPBDJ");
    msg.timeout = 1697U;
    msg.contents.assign("AVHSAGYOGTZNRLJADSZRIKONPSRKBZAZWWXUBMIRVPOGRRPDISTZEAGPACFHBMPHKLLXXIDZEFGPNBCIDAEWZHJMWEOUYSMFMXJEKQYHQULPTQCGCDEFQCRYLHTZJGCNXBBWEWTSNNMORLFNVZYKGWVOOANKQHWXKZJFKLQIFPUWYJRUXLJQSEDCLKLUXHYJCCOVUPUKBCYDXGMTTHUXVFABOIMR");

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
    msg.setTimeStamp(0.166897075854);
    msg.setSource(19736U);
    msg.setSourceEntity(25U);
    msg.setDestination(45646U);
    msg.setDestinationEntity(197U);
    msg.number.assign("SPQIFAKNTMDGBRVMGANSUXZOFCBGMLAPNTNSBYQYXRTOIHRAFWRBUEUZMLKHQOYGPBFQYSKYETCLAZVNKILVAIENJJJFVSQHYYXT");
    msg.timeout = 3691U;
    msg.contents.assign("QBUPNWNMDWAPQDWEXHPFKICDODVZEXVKEGPJGONXHXFOHWQUGUXEEJHRLZDZLNMKVLZSWYHSCYAVOFWOKTAMMSZMYIGGJSEWRCXJBYGVJNEVMMQPCTRSUQFNURQRTUUILLGZZBOBBVTTVJJMSCOYMEOPSZDFNXIVAFPTADAHXLRAIFTCVAEHDYFCCMNGOKRYCBKQXJJQBWYSDZKJRIFPQLUPLBNBYDHFOTNKGZT");

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
    msg.setTimeStamp(0.252542183931);
    msg.setSource(10217U);
    msg.setSourceEntity(190U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(225U);
    msg.seq = 3960367761U;
    msg.destination.assign("YEMIOBSDIVAZPUOEUITBGZTVJKADWHNOIDOPXGNTGKPXBFYWOQWBGSKXLNXAUIMWZDXHCQZMJ");
    msg.timeout = 31508U;
    const char tmp_msg_0[] = {11, -124, 90, -77, -58, -100, -70, -33, 84, -24, -47, -78, -47, 90, 116, -22, 48, 24, 14, -35, -36, -66, -41, 9, -113, -119, -28, 48, -76, -119, 60, -112, -76, -21, -92, -96, -100, -26, 40, 11, -84, -10, -110, -69, 46, 109, -122, 71, -120, 11, 66, -124, -52, 56, -89, -36, 93, -89, -65, -65, 29, -63, -105, -35, 2, -34, 77, 117, 48, -63, -122, -8, -45, -48, 64, 11, -86, -57, 29, -9, 50, -127, 74, -65, 75, 102, -80, 43, 28, -46, 105, 14, 8, -18, -110, -29, 91, -107, -111, 67, -74, 97, 33, -111, -112, -18, -116, -80, 52, -74, -17};
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
    msg.setTimeStamp(0.747681465032);
    msg.setSource(7715U);
    msg.setSourceEntity(2U);
    msg.setDestination(36980U);
    msg.setDestinationEntity(110U);
    msg.seq = 1694351569U;
    msg.destination.assign("VJGNFTSWKTCIVJNQIZBPLJNRZGEZZXYUSHHAXCRSRGQTZRIBZEEMUHZIPRKKLFDFMJWJTOCVLIRHLFNPYGQTVSAASUQJPFEWMKOODXCMBHCDHEVA");
    msg.timeout = 28967U;
    const char tmp_msg_0[] = {-118, -68, -124, -80, 95, 5, -7, -21, -46, 39, 120, 101, 108, 49, -73, 79, 95, -7, 99, -101, -107, -18, -35, -73, -42, -58, 0, -92, -52, -9, -89, 103, -110, -28, 5, -35, 41, -126, 46, 88, 113, -81, 12, 27, -128, -74, 59, -71, -119, 100, 105, -85, 112, -58, -56, -39, 86, -17, 76, -11, -73, -84, 108, 17, -56, -20, 43, -85, -24, 113, 83, 16, 13, -106, -27, 34, -43, -47, 64, -39, 14, 85, 23, -99, -82, 18, -41, -26, -118, -52, -40, 33, -66, -107, 95, -61, 34, 9, 113, -23, 95, 14, -125, -99, 41, 88, -25, 35, -79, 31, 32, 110, 55, 14, 85, 63, -85, 95, 36, -73, -18, 114, 65};
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
    msg.setTimeStamp(0.683702822864);
    msg.setSource(34146U);
    msg.setSourceEntity(253U);
    msg.setDestination(36051U);
    msg.setDestinationEntity(69U);
    msg.seq = 3008417817U;
    msg.destination.assign("MTBNUTOUHPYMXFIDJWSCHTQMIJXWPFDFFQRRPGSKUZKNMEOYASOHZPPVGWIIPNVZZOJKFSNPWYGOYGJPQQAYTUARVELGHAGWBJGGBRCMMEXXBCMTRAWUBHSVXXUCHJLMLBVTJKNWDKBHMXCSLEHWCSQKBUYTNFQIRGNFVWKXJLQEQBGCTBDQYSRRDNLDDQIYAHPILACLFZONDNVUZJEAVCSYWIXAOSDURLEKKDUJAME");
    msg.timeout = 48122U;
    const char tmp_msg_0[] = {33, 111, -74, -107, 50, 25, -43, 68, 24, -119, -43, -56, 25, 64, 19, 100, 25, -72, -118, 63, -61, -53, -123, -98, 60, 95, 15, 81, 121, 33, 13, 108, 116, 114, 54, -26, -58, 3, -46, -110, 21, 26, -70, 76, 34, -66, 109, 54, 70, 64, -30, -53, -102, 79, -5, -50, 63, -58, -123, -64, 58, 125, -78, -12, -120, -23, 5, 95, -105, -16, -4, 6, -100, -54, -40, -74, 125, -33, -106, 68, 43, 77, -80, 87, 97, -104, -77, -88, 78, 95, -5, 123, -19, -96, 118, 30, 68, -42, 105, 27, -88, 21, 123, -33, 37, 96, 49, 71, -13, 85, 59, -42, 42, -89, -43, -89, -8, -15, -34, -41, 59, -33, 109, -19, -43, 8, 77, -13, -70, -52, -83, -41, -98, -90, -30, 13, 52, 64, -29, 69, 76, -34, -74, 114, -43, -97, 59, 8, 105, -42, -86, -75, -95, 77, -72, 76};
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
    msg.setTimeStamp(0.998850386087);
    msg.setSource(15669U);
    msg.setSourceEntity(158U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(130U);
    msg.source.assign("QREYSVQUIYRTNSVHJHWYSVJKPOYDMZAWNPXMRWQNAVOBGAUQEBBITRTDNRNFZSFIKLXBCALTJZVSLTXYDRQHTUWPZIJLDVHUKWBWBXIAALUXTQXOAPSNDIXIFHUTSILKCFCEPJCOFLAPTPZIUVJ");
    const char tmp_msg_0[] = {-125, 41, 3, -66, 117, -61, -27, 71, -106, -30, 45, -17, 122, -50, -63, -4, 65, 44, 48, 98};
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
    msg.setTimeStamp(0.519014817573);
    msg.setSource(9420U);
    msg.setSourceEntity(137U);
    msg.setDestination(37284U);
    msg.setDestinationEntity(68U);
    msg.source.assign("XPNNDMMZPVJJCFFPTRHNKUIGVYEAPLHZQZJXPKCLQOSMWURWXHGQWNEKTISOQFFQQEDLSJDRWIYTVSUDJZHAQGSBCIUHLSKOAYOCLFGEYOENDNPXRJDBMIUYCCRJUFWASRVNUYZIUPLOMQWJXBOLGIHUINSXDIEDSFHRHBQMLHJYZEZHYOEVBCGFRAPBVLTBBAVRYEMANTCXVVZMO");
    const char tmp_msg_0[] = {109, 25, -81, -10, 112, -36, 17, 13, -121, -102, -90, 79, 52, -84, 20, 33, 65, 86, 101, -78, 84, 13, -78, 71, -120, -2, -96, 112, -30, -99, 38, -97, -86, 118, -81, 23, -57, 114, -6, 62, 22, -40, 65, 48, 27, 109, 16, -24, -30, -38, -123, -125, 29, 66, -104, -100, 116, 89, 62, -52, -39, -110, 40, 31, -111, -20, 105, -62, 14, -34, 52, 44, -50, 87, 30, 90, -1, -75, 88, -30, -119, 75, -49, -51, 114, -86, -99, 66, -68, 112};
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
    msg.setTimeStamp(0.445356017963);
    msg.setSource(39634U);
    msg.setSourceEntity(229U);
    msg.setDestination(16858U);
    msg.setDestinationEntity(47U);
    msg.source.assign("AENVVIOAHFBVEAHLFKRSSXVUPJQAPLXFOJSLYDBHFTVQJWQJWJZCTUONFYCAYSTJIZJRXIQLARYGIZMYAIRSXHMTCHMSBIWDUTDUZFKNCVYXEKAXLTRELUPBQKZQCIGNWSWDKFYSGVLUIVFKOMCYWQXNPPUGOPJCNXMRPNOXQZFQRVNEUKDAPCDNMTWMDOKBKNLRJIBSWEOTEBGLJKMCBHVZUQGHGTZGCFBSOUPLHIHMYEPDYXG");
    const char tmp_msg_0[] = {-74, 43, 53, 69, 126, -55, 123, -67, -51, 13, 105, 99, 41, 107, 66, 66, 63, 54, -87, -41, 107, 20, 0, 54, 49, 81, -84, 101, 13, -53, -49, 52, 39, 64, 41, -102, -85, 85, 72, -119, 49, 23, -48, -41, 66, -54, -17, 89, 77, 111, 100, 54, 33, -37, -97, 105, 12, -24, 3, 7, -44, 102, -58, 121, 20, -92, 66, -68, -88, -52, 34, 126, -108, 28, -53, 110, 125, -35, -21, -17, -72, 8, -27, 22, -66, -51, 42, 108, 118, -22, -91, -101, -26, -5, 104, -13, 73, -42, -42, -27, -89, -74, 101, -57, -6, -107, 90, -45, -45, -57};
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
    msg.setTimeStamp(0.456250302866);
    msg.setSource(23721U);
    msg.setSourceEntity(143U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(166U);
    msg.seq = 657720597U;
    msg.state = 182U;
    msg.error.assign("KYZMFYGAMIIDSBXMNUIFJZGJBBCAWPLDKVXKJDNGVKZOJYERJTWBXUBDJIEJDVBCQOHWPHWLRAPCKIEUBHOFXAZAFCJLHPQHGMSUZTHSKBTUIBWNOYNKPTHSQGVNARZYNVZXQEWSUQCDECNLRODDLEAIUYYZKWLQZDMLOHMWFLXTIQIHMVYUPBTNSOAFULATFIFGFXDUFEVYRCMGVMCRSAEHEJKTGTOCSCJRXXKWSTR");

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
    msg.setTimeStamp(0.325592477853);
    msg.setSource(60993U);
    msg.setSourceEntity(163U);
    msg.setDestination(31726U);
    msg.setDestinationEntity(252U);
    msg.seq = 3391531930U;
    msg.state = 133U;
    msg.error.assign("YCFZDDPYKMGJERRDWA");

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
    msg.setTimeStamp(0.499779041374);
    msg.setSource(35774U);
    msg.setSourceEntity(12U);
    msg.setDestination(9735U);
    msg.setDestinationEntity(140U);
    msg.seq = 1105164359U;
    msg.state = 37U;
    msg.error.assign("UWZTSWDWTBHXIBJMWTPONGTHYGCFARXPMLAELNBQBELIKHSSVQODQDVFCCHMRQXGRAIUNNKWAPDETOZZPFJBEXKZJTFVOKMUTHSPYHLYPSAYQEOHFJFWAGCIPOWRYJOVHVREDVZDRXXUWMBVEDOSWGMNBGBJFAJZGNUEKRGZBHRVTYVSUNMQXYNGMCYD");

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
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.645970681846);
    msg.setSource(25095U);
    msg.setSourceEntity(6U);
    msg.setDestination(62202U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("RPOFDSUHXMKPANUDFYMDQUIRUSITASLFNRTZNMOPZTWVLXZNKECFHNQJKXVXEBTHQXBRXPNHSRTFIRVOTVEHXJHKEBGJWZGADPYQVEDFZBASHVITLHNEPYUPTZNAYZMONUGDCDWKKFJDECOBUQXZXIOYSRJWQGAOCMHSSGG");
    msg.htime = 0.106868006508;
    msg.lat = 0.790299486335;
    msg.lon = 0.507199103236;
    const char tmp_msg_0[] = {-29, 18, 10, -49, -47, -128, -53, 120, -27, -16, 31, 66, -46, -76, 25, 72, -48, -45, -39, 1, 17, 97, -75, -120, -72, 109, 82, 62, 92, 120, -19, 39, -110, 124, 27, -23, -47, 111, -2, -120, -77, 21, -101, 126, 19, 39, -97, -34, -79, 36, 65, -66, -121, 1, -112, 68, -76, 31, 55, -127, 34, 60, -49, 16, -3, -44, -51, 16, 122, 51, -107, 122, 80, -33, -38, -70, -104, 90, 101, -63, -100, 23, 34, 93, 87, 108, -59, -45, 104, -5, -17, -56, -100, 78, 31, -5, 106, 1, -81, -111, 55, 45, 27, -75, 105, 72, -13, 48, 93, 8, 39, -68, -110, 49, -52, 55, -72, -70, 35, 58, -68, 106, 114, -29, 82, 60, -53, -102, -71, 124, -108, -83, -19, -44, -102, -37, -24, 42, 48, -28, -117, -79, 95, -77, 5, 65, -121, 33, 83};
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
    msg.setTimeStamp(0.0152462294321);
    msg.setSource(60655U);
    msg.setSourceEntity(4U);
    msg.setDestination(1373U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("CTUSSBHNCWJFPINLBMZXCIOUAHIMUKVRWFZNHJDDGNFOGUXKSFOMKEKFTVBXATVBRRZERSUTDNYLEBITDDCMEJFOPQIQUHQCAINGVPOGVSBGPGEGOQLFEIAWXSAEFWMUMYFHSANDHUQORZVPDTTXWALYLDJKJMGRHNJLKWLVWOBCZYDPOFLRUKTN");
    msg.htime = 0.195267788093;
    msg.lat = 0.257933876477;
    msg.lon = 0.32740740776;
    const char tmp_msg_0[] = {-77, -81, 112, -44, 27, 75, 101, -97, 38, 89, -39, 101, 61};
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
    msg.setTimeStamp(0.890569871749);
    msg.setSource(52824U);
    msg.setSourceEntity(83U);
    msg.setDestination(57100U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("SANFLHDYIKYYGXJHQGHPMPBMQHCTIZSVKZIVJOMDSUUDRSVDJRPINTLLXZGHNTPSANAPGHHDMQWQPCJYBLFLQZPEUBFOEDLABHBQCESRYTNWZKWTL");
    msg.htime = 0.858730364188;
    msg.lat = 0.0711994247845;
    msg.lon = 0.672187027338;
    const char tmp_msg_0[] = {-110, -46, -120, 64, -36, 18, 112, 12, -19, 69, 85, -115, 4, 121, -108, -45, 43, -57, -121, -64, 41, -104, 119, -102, -96, -42, -11, 77, 124, 120, 60, 31, 2, 86, -32, -5, 126, -18, 105, -84, -58, 104, 123, -18, -69, 27, 78, 11, 86, -46, 64, 79, -87, 2, -121, -126, 34, 90, -125, 125, 86, 19, -66, 42, -102, -25, 79, 95};
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
    msg.setTimeStamp(0.132027473185);
    msg.setSource(5564U);
    msg.setSourceEntity(197U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(63U);
    msg.req_id = 9758U;
    msg.destination.assign("WOVOUTXYDGEBZWLTJDIIFACMPSKSPHEWSEPBUAYZKDQDMLNVHQRYJOERGPWAUFCRDVDBUBHGLHTQSAZRJCJWQYGCRWWNIQWKEPQCXSCNCHBFYLJZWXDMIGQOORYOKZJACINTXSDNZAZGWESGOUGFDSXGJLIXUXAQFTMYKTKLHDK");
    const char tmp_msg_0[] = {-111, 29, 28, 2, -116, 59, 36, 111, 14, -12, 112, -41, 80, -51, -94, -117, -26, 124, 34, -11, -98, -14, -4, -38, -44, -124, 40, -85, -23, -110, -39, 125, 8, -94, 83, 38, -6, -97, 9, 56, 114, -6, 75, 43, -49, 93, -51, 0, 112, -77, 68, -17, -97, 72, 49, -10, 80, -25, -83, 116, 98, 11, 54, 45, -88, -37, -109, -118, 95, 87, -70, 30, -22, -14, 6, -49, 79, -71, -48, 80, 70, -14, 109, -110, -115, 36, -93, -116, -36, 49, 43, 73, -104, -59, -116, -31, -76, -124, 49, -31, -125, 102, 26, 2, -76, 84, -70, -53, -60, -31, -112, 109, 119, -38, 85, -91, 50, 62, -79, 116, 38, 10, 58, -82, 42, 52, -38, -74};
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
    msg.setTimeStamp(0.823552078304);
    msg.setSource(281U);
    msg.setSourceEntity(117U);
    msg.setDestination(59292U);
    msg.setDestinationEntity(157U);
    msg.req_id = 40292U;
    msg.destination.assign("DGLYSPWXIGWMQAOELCSWGBRYDMUVGUCIUDJIRYLXAUHKEXJILCVETGJRQKSFLJTJNQGYFOBIEFZKQRDSTPMIIHEWDNUYAHXQNKUPWOEKZRBFQOT");
    const char tmp_msg_0[] = {96, 98, 98, 24, 56, 123, 104, 118, 14, -111, 14, 90, 26, -86, 18, 61, -12, 125, 97, 105, 107, 90, 73, 60, -6, -79, 43, 30, -96, 72, 68, 4, 72, 111, 68, -64, -52, 96, 33, -39, -90, 124, 67, -49, -118, 111, 91, 58, -12, -107, 16, -70, 113, 62, 29, 105, 7, -108, -16, -15, -1, -108, 106, -21, -81, 106, -42, -100, 114, 17, 87, -22, 79, 79, 43, -103, 41, -89, -45, -79, -99, -48, 79, 71, 47, -89, -7, 115, 56, 3, -46, 48, -60, -66, -118, 4, -59, -106, -73, -64, 126, 62, 104, -22, -88, -35, -55, 109, 78, -72, 115, -6, -50, 6, 20, -83, -84, 68, 75, -30, 45, 52, -58, -63, -28, -28, 86, 69, -89, -121, 67, -23, 117, -121, 112, 92, 66, -55, -57, -57, -92, -52, -126, 98, 8, -107, 124, 69, -6, -128, 22, -10, 82, 65, -51, 49, 35, 86, 51, 4, 2, -96, 31, -45, 31, 44, -105, -104, -53, 102, 102, -11, -10, -102, -94, 45, -65, -72, -104, -91, 33, -17, 52, 92, -24, -70, 4, -78, 41, 76, -95, -42, -97, 48, 113, 11, -60, 124, -73, 9, -35, 102, 24, -5, -88, 98, 68, -124, 13, -119, 29, 119, 60, 15, -62, -50, -34, -105, -106, 77, -53, 66, 99, -74, -77, 25, -64, -89, -68, -6, -37, 38, -72, 22, -62, -23, 99, -9, -88, -33, 9, -104, -74, 45, 6};
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
    msg.setTimeStamp(0.061875465596);
    msg.setSource(25586U);
    msg.setSourceEntity(173U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(173U);
    msg.req_id = 13602U;
    msg.destination.assign("SEQLZZZATBUDKIKNJMMOQCVPJBDRJTVSIUDTVTCQHKRYUATVRFYSOTHFMNBXSGTYEPNYUAPXCFBMRIDTXQGRLBWKGXEKNORCCWQUHLUGZBEHGAXGMPO");
    const char tmp_msg_0[] = {-66, 72, -73, -35, 60, 28, -33, 95, -79, -125, 67, 8, -91, 27, 69, 12, -58, 116, -55, 44, 22, 65, 79, -57, -44, -114};
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
    msg.setTimeStamp(0.844889698343);
    msg.setSource(47232U);
    msg.setSourceEntity(140U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(118U);
    msg.req_id = 65335U;
    msg.status = 107U;
    msg.text.assign("KATDFGISGZQDERPOFXRXROKMCGXHQZWHXEPMVICMEDHBOLJGZYMQPRNCBIHCRHXNCXQHMXPYKBTDOFSVOILGWZJIRYFNWFBRWBNPI");

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
    msg.setTimeStamp(0.842495479735);
    msg.setSource(50281U);
    msg.setSourceEntity(246U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(74U);
    msg.req_id = 7627U;
    msg.status = 60U;
    msg.text.assign("CZFPAXNYULKSOSCQNITMMWBISWQTDSEVGJGAIXMMSPKAZNPTOVS");

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
    msg.setTimeStamp(0.58669581151);
    msg.setSource(532U);
    msg.setSourceEntity(63U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(22U);
    msg.req_id = 43158U;
    msg.status = 102U;
    msg.text.assign("FWLSPCZWUCRIFVARJTGGXJQLZCWJZSLLEJEKGFBBIKSJWWYPXWKDPENATCPYLWRORGGVTWIKSXTSAUYLUVZCMJHPXJLQDGVAQVQQEMDHDNXYQAORNZHDFNULMHAMDSEHAXMFWYB");

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
    msg.setTimeStamp(0.631500461762);
    msg.setSource(23175U);
    msg.setSourceEntity(140U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(145U);
    msg.id = 99U;
    msg.range = 0.846347078912;

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
    msg.setTimeStamp(0.311204340439);
    msg.setSource(25203U);
    msg.setSourceEntity(169U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(32U);
    msg.id = 210U;
    msg.range = 0.673009183006;

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
    msg.setTimeStamp(0.850949067733);
    msg.setSource(40567U);
    msg.setSourceEntity(36U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(70U);
    msg.id = 93U;
    msg.range = 0.026696861584;

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
    msg.setTimeStamp(0.837096355472);
    msg.setSource(64217U);
    msg.setSourceEntity(148U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(176U);
    msg.tx = 239U;
    msg.channel = 116U;
    msg.timer = 53382U;

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
    msg.setTimeStamp(0.399246392052);
    msg.setSource(54197U);
    msg.setSourceEntity(78U);
    msg.setDestination(19238U);
    msg.setDestinationEntity(114U);
    msg.tx = 69U;
    msg.channel = 112U;
    msg.timer = 53006U;

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
    msg.setTimeStamp(0.0900257184034);
    msg.setSource(56938U);
    msg.setSourceEntity(12U);
    msg.setDestination(52111U);
    msg.setDestinationEntity(138U);
    msg.tx = 229U;
    msg.channel = 36U;
    msg.timer = 21684U;

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
    msg.setTimeStamp(0.721525075796);
    msg.setSource(21625U);
    msg.setSourceEntity(215U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(232U);
    msg.beacon.assign("NPYLNTZNHFCQKXFJKSBEIFCARDGHNMHMAUBIMWILHTQUTWTRJVDOLLKQNHXVHCWGWXQDCFORJIKSEKZGJCDIUNAYDTUTQIGYRVSRQUQXQOESESUSZSCGXDUBPPEPTGGBCKWOEHBXFCMYAFBBVZUQFOCJMIMJZLUMOQJJXW");
    msg.lat = 0.462607959417;
    msg.lon = 0.499406896643;
    msg.depth = 0.324216558691;
    msg.query_channel = 204U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 166U;

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
    msg.setTimeStamp(0.233835413768);
    msg.setSource(4407U);
    msg.setSourceEntity(157U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("DLMUBXMTZVWWHJUQHNIVKRMIVZLHWWDHSXCVOYQDZUPRABZTDRXTBMQGXHEQPMOWCLCABIGKPYCQGYEDXJJZI");
    msg.lat = 0.879313009548;
    msg.lon = 0.0595083005729;
    msg.depth = 0.670309948248;
    msg.query_channel = 8U;
    msg.reply_channel = 61U;
    msg.transponder_delay = 154U;

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
    msg.setTimeStamp(0.443433513963);
    msg.setSource(9098U);
    msg.setSourceEntity(26U);
    msg.setDestination(40480U);
    msg.setDestinationEntity(41U);
    msg.beacon.assign("GNSCQTQJCTDQUUJQCYOBMRWIKEUJUQENEHKSSIHCBGUOAHATAFYKNTCWTWJJKNEPVONWIPUZTCESLVMMKCBXJO");
    msg.lat = 0.0707115143135;
    msg.lon = 0.925563931383;
    msg.depth = 0.899819592969;
    msg.query_channel = 94U;
    msg.reply_channel = 213U;
    msg.transponder_delay = 152U;

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
    msg.setTimeStamp(0.557954871393);
    msg.setSource(53033U);
    msg.setSourceEntity(208U);
    msg.setDestination(39785U);
    msg.setDestinationEntity(237U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.741028683246);
    msg.setSource(45889U);
    msg.setSourceEntity(119U);
    msg.setDestination(45444U);
    msg.setDestinationEntity(39U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.96245649159);
    msg.setSource(30982U);
    msg.setSourceEntity(202U);
    msg.setDestination(21092U);
    msg.setDestinationEntity(193U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.573054370732);
    msg.setSource(61651U);
    msg.setSourceEntity(62U);
    msg.setDestination(54559U);
    msg.setDestinationEntity(82U);
    msg.address = 57U;

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
    msg.setTimeStamp(0.340844732882);
    msg.setSource(4128U);
    msg.setSourceEntity(109U);
    msg.setDestination(52046U);
    msg.setDestinationEntity(115U);
    msg.address = 189U;

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
    msg.setTimeStamp(0.448183642025);
    msg.setSource(59698U);
    msg.setSourceEntity(86U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(138U);
    msg.address = 54U;

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
    msg.setTimeStamp(0.0664531918358);
    msg.setSource(21485U);
    msg.setSourceEntity(132U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(139U);
    msg.address = 87U;
    msg.status = 208U;
    msg.range = 0.434426810587;

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
    msg.setTimeStamp(0.650612082327);
    msg.setSource(19064U);
    msg.setSourceEntity(1U);
    msg.setDestination(28774U);
    msg.setDestinationEntity(66U);
    msg.address = 190U;
    msg.status = 139U;
    msg.range = 0.268776953646;

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
    msg.setTimeStamp(0.738352553307);
    msg.setSource(28627U);
    msg.setSourceEntity(63U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(145U);
    msg.address = 51U;
    msg.status = 61U;
    msg.range = 0.409544456388;

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
    msg.setTimeStamp(0.885972049952);
    msg.setSource(17923U);
    msg.setSourceEntity(66U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(172U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.301228839929;
    tmp_msg_0.start_lon = 0.808253729543;
    tmp_msg_0.start_z = 0.755292694589;
    tmp_msg_0.start_z_units = 44U;
    tmp_msg_0.end_lat = 0.29127747946;
    tmp_msg_0.end_lon = 0.627519231722;
    tmp_msg_0.end_z = 0.478986335986;
    tmp_msg_0.end_z_units = 153U;
    tmp_msg_0.speed = 0.0129939695011;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.lradius = 0.572139900217;
    tmp_msg_0.flags = 12U;
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
    msg.setTimeStamp(0.735725192746);
    msg.setSource(22478U);
    msg.setSourceEntity(118U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(188U);
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("LIEUXIBBJFAXSWHCKIBJUCEME");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("OWONACBCAGUGIGVKXFIUJSRRCFHXFNXVAOHLUSXPWAGRLNJYSECSLZWZGMVJQIRQUIUETJSTXHKQHPEHAYDOIIXKCWWEOJMDBADGDPZMTVXEDDYLPZVDACZSTPG");
    tmp_tmp_msg_0_0.feature_type = 132U;
    tmp_tmp_msg_0_0.rgb_red = 83U;
    tmp_tmp_msg_0_0.rgb_green = 164U;
    tmp_tmp_msg_0_0.rgb_blue = 123U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.644625920978;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.509826028894;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.498843920547;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.833056897611);
    msg.setSource(54876U);
    msg.setSourceEntity(86U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(247U);
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4182141057U;
    tmp_msg_0.destination.assign("CFPHTPQETSNGOQDGZSSKQSLTFYI");
    tmp_msg_0.timeout = 27439U;
    const char tmp_tmp_msg_0_0[] = {-2, -12, 0, 97, -32, 1, -77, 73, -69, 40, -128, 95, 17, -91, -49, -125, -104, -60, 117, 96, -82, 106, -66, -21, 30, -14, 37, -34, -21, -82, -49, -95, -7, -82, 8, 21};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.820069477223);
    msg.setSource(35490U);
    msg.setSourceEntity(172U);
    msg.setDestination(63513U);
    msg.setDestinationEntity(27U);
    msg.enable = 18U;

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
    msg.setTimeStamp(0.408993932316);
    msg.setSource(59431U);
    msg.setSourceEntity(152U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(10U);
    msg.enable = 124U;

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
    msg.setTimeStamp(0.275468290567);
    msg.setSource(29352U);
    msg.setSourceEntity(63U);
    msg.setDestination(20152U);
    msg.setDestinationEntity(125U);
    msg.enable = 21U;

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
    msg.setTimeStamp(0.965308848845);
    msg.setSource(26974U);
    msg.setSourceEntity(219U);
    msg.setDestination(54133U);
    msg.setDestinationEntity(206U);
    msg.summary = 72U;
    msg.level = 188U;

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
    msg.setTimeStamp(0.415333820626);
    msg.setSource(30941U);
    msg.setSourceEntity(78U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(189U);
    msg.summary = 58U;
    msg.level = 33U;

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
    msg.setTimeStamp(0.921966472871);
    msg.setSource(8136U);
    msg.setSourceEntity(193U);
    msg.setDestination(16117U);
    msg.setDestinationEntity(89U);
    msg.summary = 225U;
    msg.level = 130U;

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
    msg.setTimeStamp(0.897393544526);
    msg.setSource(40230U);
    msg.setSourceEntity(204U);
    msg.setDestination(30211U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.397175866837);
    msg.setSource(54312U);
    msg.setSourceEntity(201U);
    msg.setDestination(27049U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.76780699541);
    msg.setSource(32193U);
    msg.setSourceEntity(98U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.222938729032);
    msg.setSource(16437U);
    msg.setSourceEntity(94U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.11840997616);
    msg.setSource(10572U);
    msg.setSourceEntity(246U);
    msg.setDestination(14921U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.114229809438);
    msg.setSource(44116U);
    msg.setSourceEntity(130U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.340689754065);
    msg.setSource(25110U);
    msg.setSourceEntity(47U);
    msg.setDestination(16908U);
    msg.setDestinationEntity(210U);
    msg.op = 109U;
    msg.system.assign("PKHJBWWQEVHPFYGJTLKRTNLORAVISITVHYUSGCRZIFZMMRTLKJODYMWBBLIXVPIQXRNYBQZVWGOVEUTZIYMNFOJGDSBOJEMXRSTCBXNZONCHBPFSRXXQMXGAQHTKOKZZNGSUSCQYCYNYT");
    msg.range = 0.771572041422;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GFAKRMJTUDUCEPJLNIIKOBVEENQUTHFJYXDLXELAIGBGUFGBPJHTCHGEFKRBKGNOYKIMVVIJUCHPYRCRZSLJXZAODOPGVJW");
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
    msg.setTimeStamp(0.338475949174);
    msg.setSource(35037U);
    msg.setSourceEntity(118U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(152U);
    msg.op = 4U;
    msg.system.assign("KQUJEEKNZIDXZRMRLITDGOECAAAKTVRTWOUXQGLCQXADTBIGJSJLGIUSWTIUJCVHELGBRTBCFEKHNYLYJPSJYRLSNHRJPFBUQMXBNZCQOKWOFQOVOENYMFGFSKFPYDHEWULVAFJKIVPHOKZLZK");
    msg.range = 0.907003064931;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.0640061488136;
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
    msg.setTimeStamp(0.966584030001);
    msg.setSource(41781U);
    msg.setSourceEntity(124U);
    msg.setDestination(13755U);
    msg.setDestinationEntity(77U);
    msg.op = 148U;
    msg.system.assign("JFIWSUEDWNZIWYTYPDAPGSLHMGUEYREIJQBKORTSLQSNXIEUPQNVICVYXBJOOKITFPDCTDXDZPXUVOGYWFUVZADHNXMAPZARECFNCAJTJMRAEOVOIGSHWCAJBMYJJMDBAKZLBFKXBGYGELFTYHQZNTAPTLHWBCHGVUXKMYGNQUVJPGHIGNLFQKLSTSKJTRWOIZMPRAXHFOYNDSWRCUSCEONRKXE");
    msg.range = 0.93176723304;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.574478155154;
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
    msg.setTimeStamp(0.107557620078);
    msg.setSource(5750U);
    msg.setSourceEntity(156U);
    msg.setDestination(53688U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.235801753267);
    msg.setSource(44437U);
    msg.setSourceEntity(146U);
    msg.setDestination(317U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.346268008035);
    msg.setSource(18765U);
    msg.setSourceEntity(235U);
    msg.setDestination(62620U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.475204201645);
    msg.setSource(21377U);
    msg.setSourceEntity(58U);
    msg.setDestination(8899U);
    msg.setDestinationEntity(106U);
    msg.list.assign("NFUWMVGVWYTFDHGEZIERIPFRA");

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
    msg.setTimeStamp(0.318975379744);
    msg.setSource(51112U);
    msg.setSourceEntity(14U);
    msg.setDestination(47017U);
    msg.setDestinationEntity(48U);
    msg.list.assign("ZGUKSRBVZCNOZCWOEPKJIDHCDUKMHISGXKEYRHCHIQSOSVMOXRMSSSUGJHEUGRXTSUQPWRYLSANPACWWXKQAZFUTVGQTINAUFAXLIJDAWHWBLHORPPTCAWJWIVNZLBBEQXCTVUVJKYMQQHQOJZFBRZDFNDYFJROTAXEKVGTBXZN");

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
    msg.setTimeStamp(0.669120847258);
    msg.setSource(32102U);
    msg.setSourceEntity(16U);
    msg.setDestination(52596U);
    msg.setDestinationEntity(125U);
    msg.list.assign("FYLQZDFSDBNOLBEYDOPWUCOBTLESAZSRJBRZTLZONNLWFPCWRQRUJKYGDJMWDIKNXQFIKRFAHPACAVUMTHMVXGAXXQXZTAZFEMGITHHVAEACVYBZTIKPJDAHRVHFGESNVLQHKHLUJZKDBJCCMBZUQXSYSDBSFCTPPWXRBONMVYLWWESSEMIIJQKMNOAMQEOSHFURJJOFBRGOTXRVC");

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
    msg.setTimeStamp(0.458825376549);
    msg.setSource(32908U);
    msg.setSourceEntity(183U);
    msg.setDestination(22857U);
    msg.setDestinationEntity(189U);
    msg.value = 24824;

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
    msg.setTimeStamp(0.934579770578);
    msg.setSource(8016U);
    msg.setSourceEntity(21U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(245U);
    msg.value = -3004;

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
    msg.setTimeStamp(0.474855669345);
    msg.setSource(4324U);
    msg.setSourceEntity(0U);
    msg.setDestination(11090U);
    msg.setDestinationEntity(10U);
    msg.value = -2330;

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
    msg.setTimeStamp(0.146133899638);
    msg.setSource(48402U);
    msg.setSourceEntity(112U);
    msg.setDestination(63599U);
    msg.setDestinationEntity(14U);
    msg.value = 0.311096075394;

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
    msg.setTimeStamp(0.187541712077);
    msg.setSource(19110U);
    msg.setSourceEntity(142U);
    msg.setDestination(22024U);
    msg.setDestinationEntity(190U);
    msg.value = 0.925331927543;

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
    msg.setTimeStamp(0.697850874886);
    msg.setSource(23139U);
    msg.setSourceEntity(243U);
    msg.setDestination(14845U);
    msg.setDestinationEntity(228U);
    msg.value = 0.818496462027;

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
    msg.setTimeStamp(0.682578220395);
    msg.setSource(16517U);
    msg.setSourceEntity(49U);
    msg.setDestination(26949U);
    msg.setDestinationEntity(188U);
    msg.value = 0.642145246085;

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
    msg.setTimeStamp(0.0770891741671);
    msg.setSource(60907U);
    msg.setSourceEntity(48U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(159U);
    msg.value = 0.907372243715;

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
    msg.setTimeStamp(0.913232416807);
    msg.setSource(31780U);
    msg.setSourceEntity(252U);
    msg.setDestination(38977U);
    msg.setDestinationEntity(129U);
    msg.value = 0.897352015772;

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
    msg.setTimeStamp(0.814674346116);
    msg.setSource(36797U);
    msg.setSourceEntity(106U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(118U);
    msg.validity = 22914U;
    msg.type = 208U;
    msg.utc_year = 59220U;
    msg.utc_month = 91U;
    msg.utc_day = 114U;
    msg.utc_time = 0.955095275189;
    msg.lat = 0.145425506278;
    msg.lon = 0.636467937304;
    msg.height = 0.956835711169;
    msg.satellites = 211U;
    msg.cog = 0.0880601449703;
    msg.sog = 0.855391535262;
    msg.hdop = 0.577825130206;
    msg.vdop = 0.866820285767;
    msg.hacc = 0.155448723767;
    msg.vacc = 0.0101605147763;

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
    msg.setTimeStamp(0.194597178889);
    msg.setSource(36201U);
    msg.setSourceEntity(87U);
    msg.setDestination(1241U);
    msg.setDestinationEntity(40U);
    msg.validity = 13055U;
    msg.type = 168U;
    msg.utc_year = 32559U;
    msg.utc_month = 214U;
    msg.utc_day = 33U;
    msg.utc_time = 0.440266356795;
    msg.lat = 0.118263370651;
    msg.lon = 0.938586040965;
    msg.height = 0.0340315698347;
    msg.satellites = 18U;
    msg.cog = 0.889562577228;
    msg.sog = 0.141388177325;
    msg.hdop = 0.142794482848;
    msg.vdop = 0.889702250865;
    msg.hacc = 0.931723173032;
    msg.vacc = 0.165860418941;

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
    msg.setTimeStamp(0.721179815406);
    msg.setSource(53292U);
    msg.setSourceEntity(207U);
    msg.setDestination(46986U);
    msg.setDestinationEntity(35U);
    msg.validity = 30752U;
    msg.type = 162U;
    msg.utc_year = 50822U;
    msg.utc_month = 12U;
    msg.utc_day = 230U;
    msg.utc_time = 0.579583775255;
    msg.lat = 0.643716388393;
    msg.lon = 0.496154320163;
    msg.height = 0.253728381204;
    msg.satellites = 139U;
    msg.cog = 0.554882365448;
    msg.sog = 0.986240814089;
    msg.hdop = 0.816734297422;
    msg.vdop = 0.951828212272;
    msg.hacc = 0.696592475353;
    msg.vacc = 0.406241914147;

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
    msg.setTimeStamp(0.433777099652);
    msg.setSource(13320U);
    msg.setSourceEntity(246U);
    msg.setDestination(328U);
    msg.setDestinationEntity(72U);
    msg.time = 0.771567441949;
    msg.phi = 0.904658693297;
    msg.theta = 0.668807020539;
    msg.psi = 0.411921309404;
    msg.psi_magnetic = 0.268788246057;

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
    msg.setTimeStamp(0.829498244393);
    msg.setSource(39301U);
    msg.setSourceEntity(247U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(239U);
    msg.time = 0.394559998607;
    msg.phi = 0.936794665158;
    msg.theta = 0.919245411063;
    msg.psi = 0.0455703352067;
    msg.psi_magnetic = 0.0508178388456;

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
    msg.setTimeStamp(0.867056969014);
    msg.setSource(62509U);
    msg.setSourceEntity(20U);
    msg.setDestination(28988U);
    msg.setDestinationEntity(104U);
    msg.time = 0.125201327899;
    msg.phi = 0.0671056270376;
    msg.theta = 0.639686615932;
    msg.psi = 0.563531229851;
    msg.psi_magnetic = 0.61385016363;

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
    msg.setTimeStamp(0.615671257301);
    msg.setSource(41699U);
    msg.setSourceEntity(160U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(159U);
    msg.time = 0.453879215972;
    msg.x = 0.287215780285;
    msg.y = 0.0704599580205;
    msg.z = 0.777509053273;
    msg.timestep = 0.495524375901;

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
    msg.setTimeStamp(0.471607033827);
    msg.setSource(59905U);
    msg.setSourceEntity(145U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(33U);
    msg.time = 0.582964192723;
    msg.x = 0.511371325814;
    msg.y = 0.311391674266;
    msg.z = 0.274347584213;
    msg.timestep = 0.484918809486;

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
    msg.setTimeStamp(0.11705380646);
    msg.setSource(20178U);
    msg.setSourceEntity(210U);
    msg.setDestination(56207U);
    msg.setDestinationEntity(66U);
    msg.time = 0.629070236392;
    msg.x = 0.0571797524334;
    msg.y = 0.376343911685;
    msg.z = 0.559500489714;
    msg.timestep = 0.794142826504;

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
    msg.setTimeStamp(0.89703670496);
    msg.setSource(7971U);
    msg.setSourceEntity(137U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(110U);
    msg.time = 0.341720765463;
    msg.x = 0.840823044097;
    msg.y = 0.169451174433;
    msg.z = 0.712012472822;

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
    msg.setTimeStamp(0.536686328913);
    msg.setSource(7153U);
    msg.setSourceEntity(214U);
    msg.setDestination(43396U);
    msg.setDestinationEntity(219U);
    msg.time = 0.531808080635;
    msg.x = 0.253467416703;
    msg.y = 0.151824548058;
    msg.z = 0.237753384157;

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
    msg.setTimeStamp(0.550747385609);
    msg.setSource(11474U);
    msg.setSourceEntity(98U);
    msg.setDestination(12984U);
    msg.setDestinationEntity(9U);
    msg.time = 0.323833930367;
    msg.x = 0.251578416857;
    msg.y = 0.824210477751;
    msg.z = 0.710160769922;

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
    msg.setTimeStamp(0.735029593401);
    msg.setSource(2792U);
    msg.setSourceEntity(99U);
    msg.setDestination(23066U);
    msg.setDestinationEntity(148U);
    msg.time = 0.126715472168;
    msg.x = 0.197253681526;
    msg.y = 0.547165315528;
    msg.z = 0.0219655592407;

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
    msg.setTimeStamp(0.372545109633);
    msg.setSource(32186U);
    msg.setSourceEntity(64U);
    msg.setDestination(30124U);
    msg.setDestinationEntity(47U);
    msg.time = 0.924542180956;
    msg.x = 0.203370571032;
    msg.y = 0.0497312429023;
    msg.z = 0.284960306163;

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
    msg.setTimeStamp(0.774373860946);
    msg.setSource(39407U);
    msg.setSourceEntity(226U);
    msg.setDestination(43771U);
    msg.setDestinationEntity(233U);
    msg.time = 0.809451181326;
    msg.x = 0.939207873058;
    msg.y = 0.14455147205;
    msg.z = 0.276880784674;

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
    msg.setTimeStamp(0.836384923775);
    msg.setSource(17503U);
    msg.setSourceEntity(41U);
    msg.setDestination(12134U);
    msg.setDestinationEntity(234U);
    msg.time = 0.269822225305;
    msg.x = 0.166655126789;
    msg.y = 0.769906756568;
    msg.z = 0.125338803342;

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
    msg.setTimeStamp(0.0916494851794);
    msg.setSource(23537U);
    msg.setSourceEntity(66U);
    msg.setDestination(51424U);
    msg.setDestinationEntity(50U);
    msg.time = 0.356348433447;
    msg.x = 0.0462018268467;
    msg.y = 0.738642218746;
    msg.z = 0.852839095257;

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
    msg.setTimeStamp(0.160744963257);
    msg.setSource(40637U);
    msg.setSourceEntity(61U);
    msg.setDestination(51623U);
    msg.setDestinationEntity(192U);
    msg.time = 0.577960712596;
    msg.x = 0.497700056576;
    msg.y = 0.00145150800139;
    msg.z = 0.437980507029;

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
    msg.setTimeStamp(0.859154880671);
    msg.setSource(36356U);
    msg.setSourceEntity(203U);
    msg.setDestination(35478U);
    msg.setDestinationEntity(13U);
    msg.validity = 111U;
    msg.x = 0.743616027915;
    msg.y = 0.555409959376;
    msg.z = 0.866774272439;

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
    msg.setTimeStamp(0.952591062889);
    msg.setSource(13385U);
    msg.setSourceEntity(45U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(163U);
    msg.validity = 32U;
    msg.x = 0.552269061665;
    msg.y = 0.377300968234;
    msg.z = 0.115371483853;

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
    msg.setTimeStamp(0.935778573413);
    msg.setSource(7118U);
    msg.setSourceEntity(134U);
    msg.setDestination(5223U);
    msg.setDestinationEntity(242U);
    msg.validity = 226U;
    msg.x = 0.994986197366;
    msg.y = 0.196887705459;
    msg.z = 0.274669389872;

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
    msg.setTimeStamp(0.247483402558);
    msg.setSource(14010U);
    msg.setSourceEntity(154U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(253U);
    msg.validity = 220U;
    msg.x = 0.979837332333;
    msg.y = 0.462108103514;
    msg.z = 0.12118701026;

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
    msg.setTimeStamp(0.919611335525);
    msg.setSource(36185U);
    msg.setSourceEntity(114U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(238U);
    msg.validity = 242U;
    msg.x = 0.497859995622;
    msg.y = 0.544147034706;
    msg.z = 0.239050979423;

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
    msg.setTimeStamp(0.92292633943);
    msg.setSource(3043U);
    msg.setSourceEntity(26U);
    msg.setDestination(35704U);
    msg.setDestinationEntity(32U);
    msg.validity = 174U;
    msg.x = 0.466513044816;
    msg.y = 0.83400213314;
    msg.z = 0.825025044525;

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
    msg.setTimeStamp(0.311444144211);
    msg.setSource(29994U);
    msg.setSourceEntity(170U);
    msg.setDestination(31499U);
    msg.setDestinationEntity(86U);
    msg.time = 0.816709728788;
    msg.x = 0.946523849413;
    msg.y = 0.541323276761;
    msg.z = 0.185309216743;

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
    msg.setTimeStamp(0.723758523538);
    msg.setSource(943U);
    msg.setSourceEntity(244U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(19U);
    msg.time = 0.880558107352;
    msg.x = 0.480026924802;
    msg.y = 0.326092282806;
    msg.z = 0.68636901021;

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
    msg.setTimeStamp(0.222210346387);
    msg.setSource(17504U);
    msg.setSourceEntity(41U);
    msg.setDestination(27503U);
    msg.setDestinationEntity(103U);
    msg.time = 0.986428335839;
    msg.x = 0.716944559952;
    msg.y = 0.857928751263;
    msg.z = 0.402527393913;

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
    msg.setTimeStamp(0.816782541424);
    msg.setSource(30038U);
    msg.setSourceEntity(225U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(69U);
    msg.validity = 140U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.89760083031;
    tmp_msg_0.y = 0.844586363105;
    tmp_msg_0.z = 0.862431991481;
    tmp_msg_0.phi = 0.966958523305;
    tmp_msg_0.theta = 0.647417219497;
    tmp_msg_0.psi = 0.765612713397;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0233565277578;

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
    msg.setTimeStamp(0.412299092165);
    msg.setSource(45649U);
    msg.setSourceEntity(239U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(217U);
    msg.validity = 246U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.638025613255;
    tmp_msg_0.y = 0.154656219601;
    tmp_msg_0.z = 0.947251566524;
    tmp_msg_0.phi = 0.666075008126;
    tmp_msg_0.theta = 0.658970481083;
    tmp_msg_0.psi = 0.502904491759;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.457403473284;
    tmp_msg_1.beam_height = 0.742012337365;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.97087739158;

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
    msg.setTimeStamp(0.945195274784);
    msg.setSource(27820U);
    msg.setSourceEntity(163U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(39U);
    msg.validity = 119U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.650418847244;
    tmp_msg_0.y = 0.399935418304;
    tmp_msg_0.z = 0.679263296463;
    tmp_msg_0.phi = 0.690872270357;
    tmp_msg_0.theta = 0.134624046514;
    tmp_msg_0.psi = 0.648984558916;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0225998111576;
    tmp_msg_1.beam_height = 0.91657936965;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.281384775642;

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
    msg.setTimeStamp(0.249179174667);
    msg.setSource(63301U);
    msg.setSourceEntity(136U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(100U);
    msg.value = 0.716467907624;

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
    msg.setTimeStamp(0.603728957606);
    msg.setSource(45863U);
    msg.setSourceEntity(202U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(31U);
    msg.value = 0.561007407766;

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
    msg.setTimeStamp(0.309922169918);
    msg.setSource(27296U);
    msg.setSourceEntity(154U);
    msg.setDestination(727U);
    msg.setDestinationEntity(105U);
    msg.value = 0.334715725204;

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
    msg.setTimeStamp(0.91761266063);
    msg.setSource(23719U);
    msg.setSourceEntity(197U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(249U);
    msg.value = 0.768316323015;

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
    msg.setTimeStamp(0.86313581278);
    msg.setSource(10604U);
    msg.setSourceEntity(174U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(172U);
    msg.value = 0.795116629057;

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
    msg.setTimeStamp(0.154738629961);
    msg.setSource(40540U);
    msg.setSourceEntity(10U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(27U);
    msg.value = 0.154325827576;

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
    msg.setTimeStamp(0.248096551903);
    msg.setSource(2549U);
    msg.setSourceEntity(229U);
    msg.setDestination(36174U);
    msg.setDestinationEntity(141U);
    msg.value = 0.496149003428;

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
    msg.setTimeStamp(0.114876814973);
    msg.setSource(48995U);
    msg.setSourceEntity(12U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(200U);
    msg.value = 0.217185745104;

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
    msg.setTimeStamp(0.890570313817);
    msg.setSource(40080U);
    msg.setSourceEntity(190U);
    msg.setDestination(2111U);
    msg.setDestinationEntity(89U);
    msg.value = 0.695928919843;

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
    msg.setTimeStamp(0.500021445201);
    msg.setSource(42311U);
    msg.setSourceEntity(132U);
    msg.setDestination(10144U);
    msg.setDestinationEntity(36U);
    msg.value = 0.627466421341;

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
    msg.setTimeStamp(0.733026064077);
    msg.setSource(11294U);
    msg.setSourceEntity(178U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(237U);
    msg.value = 0.668818159137;

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
    msg.setTimeStamp(0.239593305092);
    msg.setSource(47548U);
    msg.setSourceEntity(44U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(9U);
    msg.value = 0.803725440436;

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
    msg.setTimeStamp(0.529030316874);
    msg.setSource(64699U);
    msg.setSourceEntity(77U);
    msg.setDestination(54347U);
    msg.setDestinationEntity(26U);
    msg.value = 0.886838070416;

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
    msg.setTimeStamp(0.74164378828);
    msg.setSource(24613U);
    msg.setSourceEntity(67U);
    msg.setDestination(32425U);
    msg.setDestinationEntity(169U);
    msg.value = 0.365126930794;

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
    msg.setTimeStamp(0.728879217026);
    msg.setSource(14355U);
    msg.setSourceEntity(130U);
    msg.setDestination(44389U);
    msg.setDestinationEntity(50U);
    msg.value = 0.683126415245;

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
    msg.setTimeStamp(0.915487993519);
    msg.setSource(52496U);
    msg.setSourceEntity(122U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(78U);
    msg.value = 0.642815443506;

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
    msg.setTimeStamp(0.780533608112);
    msg.setSource(52024U);
    msg.setSourceEntity(254U);
    msg.setDestination(15001U);
    msg.setDestinationEntity(222U);
    msg.value = 0.748285291394;

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
    msg.setTimeStamp(0.531067958676);
    msg.setSource(298U);
    msg.setSourceEntity(58U);
    msg.setDestination(57358U);
    msg.setDestinationEntity(178U);
    msg.value = 0.851335096391;

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
    msg.setTimeStamp(0.186146194303);
    msg.setSource(46086U);
    msg.setSourceEntity(117U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(61U);
    msg.value = 0.436910422016;

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
    msg.setTimeStamp(0.593461399372);
    msg.setSource(27991U);
    msg.setSourceEntity(106U);
    msg.setDestination(63915U);
    msg.setDestinationEntity(163U);
    msg.value = 0.685791357224;

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
    msg.setTimeStamp(0.298183855884);
    msg.setSource(48883U);
    msg.setSourceEntity(32U);
    msg.setDestination(58724U);
    msg.setDestinationEntity(222U);
    msg.value = 0.478007571581;

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
    msg.setTimeStamp(0.445952565486);
    msg.setSource(14068U);
    msg.setSourceEntity(245U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(137U);
    msg.value = 0.980458189996;

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
    msg.setTimeStamp(0.111022128419);
    msg.setSource(52605U);
    msg.setSourceEntity(154U);
    msg.setDestination(64024U);
    msg.setDestinationEntity(86U);
    msg.value = 0.217971553278;

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
    msg.setTimeStamp(0.649315530639);
    msg.setSource(41936U);
    msg.setSourceEntity(163U);
    msg.setDestination(1673U);
    msg.setDestinationEntity(0U);
    msg.value = 0.986745340127;

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
    msg.setTimeStamp(0.741709937812);
    msg.setSource(18722U);
    msg.setSourceEntity(29U);
    msg.setDestination(40195U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.231221984391;
    msg.speed = 0.515114714429;

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
    msg.setTimeStamp(0.242369321511);
    msg.setSource(25341U);
    msg.setSourceEntity(52U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.470192644519;
    msg.speed = 0.746512053057;

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
    msg.setTimeStamp(0.673290586908);
    msg.setSource(5793U);
    msg.setSourceEntity(153U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.3710005606;
    msg.speed = 0.896626788143;

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
    msg.setTimeStamp(0.195970444664);
    msg.setSource(28012U);
    msg.setSourceEntity(35U);
    msg.setDestination(44033U);
    msg.setDestinationEntity(226U);
    msg.value = 0.234522472905;

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
    msg.setTimeStamp(0.320882449389);
    msg.setSource(30655U);
    msg.setSourceEntity(174U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(8U);
    msg.value = 0.142483359401;

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
    msg.setTimeStamp(0.0212377125037);
    msg.setSource(45310U);
    msg.setSourceEntity(164U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(206U);
    msg.value = 0.202991233684;

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
    msg.setTimeStamp(0.330479536238);
    msg.setSource(59602U);
    msg.setSourceEntity(95U);
    msg.setDestination(1736U);
    msg.setDestinationEntity(123U);
    msg.value.assign("WTYLERKHUQOZFBYPGLAJLBSZQWDZLAOOQWDCHPQVGAEJNKTAGMWTHPFJMUJXDMFYYTOVOXDUCDTESQWYHIYBXVNXJOKQZAPOUYBGCGWNPGMHMQPFRCVM");

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
    msg.setTimeStamp(0.98510386138);
    msg.setSource(62915U);
    msg.setSourceEntity(242U);
    msg.setDestination(27687U);
    msg.setDestinationEntity(237U);
    msg.value.assign("KEXOIRLKOKJIVFXIT");

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
    msg.setTimeStamp(0.727750743184);
    msg.setSource(4268U);
    msg.setSourceEntity(29U);
    msg.setDestination(38597U);
    msg.setDestinationEntity(33U);
    msg.value.assign("KOUORRPAKVFRIYLOOZIUHERZTRTXQVODUFBDDNNVJTDZQPWGDABWMFAOOWYRGJYVWNAXPSWTMEMCE");

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
    msg.setTimeStamp(0.117195724971);
    msg.setSource(10723U);
    msg.setSourceEntity(253U);
    msg.setDestination(38977U);
    msg.setDestinationEntity(162U);
    const char tmp_msg_0[] = {72, 90, -51, 83, 12, -78, -6, -123, 53, 83, 112, 26, 5, 84, 19, 52, 88, -27, 2, 90, -108, -12, 117, 79, -50, -113, 117, -13, 88, -49, 116, 58, -50, -128, -86, 52, -12, 115, -22, -46, 63, 73, 72, -7, 53, 14, 32, -115, -80, -72, -128, -100, 122, -2, 37, -61, -77, 65, 25, -17, -99, -46, -10, 90, 89, 8, 74, 109, -79, 64, -30, -53, 12, -98, 33, -122, -103, -78, 99, 36, 101, 8, 54, 91, 82, 34, 46, -32, 11, -30, 46, -91, -117, -80, 56, -128, 91, -101, -122, -46, 77, 79, 43, -30, -110, -67, -85, -59, -23, 25, 92, 27, -124, 83, -63, -72, 116, -54, 69, -13, -51, 27, -98, -8, -69, -75, 47, -126, 0, -26, -62, 29, 14, 66, -94, 38, 97, 122, -53, 34, -67, 25, -7, 86, -113, -53, -111, -40, 99, -59, -79, 119, -43, -55, -72, 82, 21, 2, 91, 65, 86, 103, -107, 52, -68, -128, -86, -8, -104, 22, 102, -88, 64, -2, -22, 64, -12, -37, 73, 45, -23, -83, 56, 94, -97, -49, -52, 38, -71, 122, -85, -28, -16, -4, -37, -63, -86, 41, -68, 68, 117, 20, 113, -103, 99, 72, 91, -75, 54, 55, -106, -86, -102, -85, 95, -54, 21, 8, 35, -8, -109, 115, 103, 62, -37, -25, -69, 25, -92, 43, 111, 103, -99, -3, -97, -34, -9, 93, 80, 108, -71, 69, -89, 114, -128};
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
    msg.setTimeStamp(0.688381502555);
    msg.setSource(10931U);
    msg.setSourceEntity(202U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(89U);
    const char tmp_msg_0[] = {34, 3, 41, -108, 84, -56, 81, 30, -88, 60, 6, 38, -12, 81, 68, 65, 102, -92, -78, -6, 16, 88, 54, 18, -88, -7, 31, 31, 82, 0, -97, -118, 110, 2, -121, -124, -67, 28, -60, 36, 35, 43, -87, 65, 117, -69, -91, 113, 28, 97, 60, 101, 31, -26, 14, -88, 72, 117, -42, 56, -25, -22, 105, -82, 70, -15, 101, 121, 99, 109, 116, 49, -13, -17, -65, 56, 23, 123, 90, -87, -27, -110, -44, -64, -76, -44, 2, 8, 119, 1, 60, 24, -75, 29, -126, 114, -121, -82, 25, 103, -36, 38, 23, 85, -82, 49, 90, 102, 23, -60, -112, 95, -12, -126, -86, -34, -9, -98, -79, -1, 52, 110, 96, 101, 15, 21, 44, 54, -52, 0, -108, -13, -36, 41, 66, 116, 80, -13, -53, 84, 38, 119, 16, -56, 27, 83, 72, 96, -92, 33, 58, -48, 55, 71, 10, -8};
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
    msg.setTimeStamp(0.350179681962);
    msg.setSource(62781U);
    msg.setSourceEntity(219U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(51U);
    const char tmp_msg_0[] = {69, 93, -45, -96, -51, 79, 49, 2, -56, -8, 72, -122, 110, -10, 60, -72, -48, 116, -51, -105, 105, 67, -108, 80, 17, -70, -94, -22, -32, 13, -75, 11, 3, -107, -88, -51, -103, -74, 51, -92, -87, -94, 6, 42, 102, -45, 32, -59, -83, 11, -28, -1, 65, -102, 16, -6, 9, 20, -126, -2, -31, -112, 87, -19, -79, -112, -28, 11, 18, 34, 12, 30, 13, -58, -111, -100, 108, -70, -49, -125, 80, 26, 26, -13, -35, -40, -79, 97, -98, -9, 125, -92, 85, -50, -53, -122, -34, -34, -62, 104, 33, 87, 107, 111, -89, 5, 65, 16, 26, -88, -57, -65, 98, -13, -39, 73, 12, -89, -112, -56, 119, -57, 92, 49, 2, 125, 86, 51, 5, -30, -81, 52, -124, -2, 64, 63, -103, 78, 67, -54, -85, 119, 60, -77, -20, -70};
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
    msg.setTimeStamp(0.227974197061);
    msg.setSource(50542U);
    msg.setSourceEntity(8U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(226U);
    msg.frequency = 2595857726U;
    msg.min_range = 50667U;
    msg.max_range = 1966U;

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
    msg.setTimeStamp(0.29716689562);
    msg.setSource(3000U);
    msg.setSourceEntity(77U);
    msg.setDestination(31434U);
    msg.setDestinationEntity(207U);
    msg.frequency = 4240666498U;
    msg.min_range = 21945U;
    msg.max_range = 38619U;

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
    msg.setTimeStamp(0.759146572352);
    msg.setSource(10553U);
    msg.setSourceEntity(172U);
    msg.setDestination(7665U);
    msg.setDestinationEntity(78U);
    msg.frequency = 246549593U;
    msg.min_range = 62458U;
    msg.max_range = 55607U;

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
    msg.setTimeStamp(0.273019918144);
    msg.setSource(16397U);
    msg.setSourceEntity(63U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(172U);
    msg.type = 254U;
    msg.frequency = 1095314369U;
    msg.min_range = 31782U;
    msg.max_range = 30909U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.597479292673;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.401083045249;
    tmp_msg_0.beam_height = 0.534794222288;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {39, 123, -60, -36, -40, 110, -41, -64, 79, -63, -126, -102, 28, -58, 9, 58, 77, 23, -30, 38, -5, 33, 120, 33, 115, 65, -62, -19, 106, -48, -79, -81, 90, 43, 31, -105, 14, 82, 31, 90, 48, 54, -107, 8, -119, -100, 16, -58, -43, 104, -66, -75, 51, -12, -62, -44, -117, 118, 76, 31, -84, 93, -2, 87, 72, -15, 31, 122, 79, -9, -9, -99, 122, 17, -67, -87, -39, 85, -121, -69, -61, 126, -99, -43, 18, -25, -100, -96, -1, 21, 66, -65, 76, -76, 78, -23, -45, -68, -17, 71, -120, -89, 94, -104, -26, -5, 112, -114, 25, -17, -93, 64, 14, 90, -44, 90, -3, -59, -40, 71, -24, 4, 71, -29, -2, -41, 57, -30, -49, 87, 2, -110, -110, -74, 25, 29, 84, -26, 97, 5, -65, -1, 112, -128, 85, 89, -3, -80, -104, 114, -44, -14, -35, 34, 120, -95, 70, 12, 31, -103, -65, -94, 32, -59, -79, 17, -2, 119, -31, 6, -25, 86, 73, 23, 37, 111, 53, -60, 100, -93, -67, -22, -96, -116, 22};
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
    msg.setTimeStamp(0.799036464339);
    msg.setSource(14527U);
    msg.setSourceEntity(150U);
    msg.setDestination(54684U);
    msg.setDestinationEntity(219U);
    msg.type = 136U;
    msg.frequency = 3760412794U;
    msg.min_range = 61829U;
    msg.max_range = 9006U;
    msg.bits_per_point = 168U;
    msg.scale_factor = 0.897748946382;
    const char tmp_msg_0[] = {-91, -19, -92, -117, 85, -43, 7, -107, 99, 117, -68, 11, 23, 124, -78, -108, 109, -18, 83, -112, 80, -98, 112, 27, 59, -112, 3, 76, -112, -100, 90, -27, -76, -103, 75, -115, -71, 5, -71, -50, 43, 101, 36, 38, -102, -63, 123, -1, -99, -22, -68, -24, -122, -128, -6, 21, -78, 46, 99, 70, -83, 20, -22, -62, -121, -6, 9, 78, 50, 105, 68, 122, -26, 41, -50, -106, -17, -18, 119, -93, 63, 88, -10, 89, -104, 64, -95, 120, -28, -22, -20, -117, -95, -74, -91, 86, -52, -49, -59, -58, 3, 118, -113, 97, -59, -114, 101, -58, 78, -21, 108, 35, -95, -114, -87, 84, 113, -87, -115, 111, 116, -90, -67, 64, 120, -98};
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
    msg.setTimeStamp(0.609121866028);
    msg.setSource(61093U);
    msg.setSourceEntity(26U);
    msg.setDestination(16496U);
    msg.setDestinationEntity(104U);
    msg.type = 41U;
    msg.frequency = 2326877363U;
    msg.min_range = 9164U;
    msg.max_range = 11503U;
    msg.bits_per_point = 6U;
    msg.scale_factor = 0.822424128153;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.37557009979;
    tmp_msg_0.beam_height = 0.435539162366;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -28, -84, -80, 31, 90, -120, -97, -45, -10, -3, 54, 24, 110, 49, 72, -95, -111, 65, -112, -51, 91, 18, 122, 101, 3, -127, 96, -59, 61, 126, 96, 65, -7, 109, -36, -84, 26, -81, -119, -64, 122, -57, 16, 51, -104, -8, -104, 57, -127, -97, 65, 8, 12, -78, 73, -29, -88, -21, 23, 47, 110, -118, 35, -97, 22, 30, 14, 84, 112, -109, 26, -101, 94, 102, 87, -10, 14, -44, 40, 66, 66, 68, -15, -93, 36, 83, -103, 119, -44, -63, -32, 49, -41, -36, -116, -71, 85, -122, 37, 66, -31, -118, -67, 19, -63, -72};
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
    msg.setTimeStamp(0.547842605647);
    msg.setSource(47718U);
    msg.setSourceEntity(26U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.400396432605);
    msg.setSource(4687U);
    msg.setSourceEntity(110U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.102351190945);
    msg.setSource(64726U);
    msg.setSourceEntity(193U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.560719664158);
    msg.setSource(16111U);
    msg.setSourceEntity(200U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(2U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.404959612721);
    msg.setSource(17447U);
    msg.setSourceEntity(62U);
    msg.setDestination(50339U);
    msg.setDestinationEntity(94U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.0814977160232);
    msg.setSource(6413U);
    msg.setSourceEntity(83U);
    msg.setDestination(18695U);
    msg.setDestinationEntity(67U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.319025755416);
    msg.setSource(23939U);
    msg.setSourceEntity(40U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(212U);
    msg.value = 0.362639214118;
    msg.confidence = 0.400983267681;
    msg.opmodes.assign("HKVUHJYBBHXKILKUXGPJKOBFYJXZZIGSTLNHGKRVAZVDSODNJWTMAQHLEAKPJCIGJWPUDAIBDVZCHOW");

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
    msg.setTimeStamp(0.543832203225);
    msg.setSource(36045U);
    msg.setSourceEntity(216U);
    msg.setDestination(30921U);
    msg.setDestinationEntity(86U);
    msg.value = 0.0858108773313;
    msg.confidence = 0.944405664179;
    msg.opmodes.assign("YHKFQFZXRKMCKNPEXPOTTZESRUDHWPGBYUIOYXGCIUNRASTKXSGWSAHHZSXECOFMCLMYGAFPJHGCMQJJBWCHHNBUMKHWARMMPSYJWQWJKYPXQWPNHLRYRDLAWNSTODQKVBLWVDQGOUMITNNOLTSFRPSSLUUBZIBCZTHGKJDKMZZNOUGVIUJVXAQFGVBNYJLWVOCAITXIVJDFRZFXYJDGLPCULEZIAEIVVIQBOMRKEBECEL");

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
    msg.setTimeStamp(0.382751333773);
    msg.setSource(12851U);
    msg.setSourceEntity(62U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(247U);
    msg.value = 0.824516549667;
    msg.confidence = 0.959414663021;
    msg.opmodes.assign("GXZQQWLTCBOEFFLAXNYRECPLDVNSGRANUGSZSKERNGWJHQYTKQKHIUOMSCWWFLSUYPGTEJJASDJWEBXSAPBFRVIAVZWZNUIDAHHIZVKQQIXFVPUKXLGLJSRXFARRYEGYCLGRKPNCLYNCULJISVYTOPFMBOHAAGKMPYBMDFSJHRZQMGHRCXWXBOUMOIDCKQEYBOZTOJPVKIFONTVTZUUWDDIXKFWDBBMTTCDHIO");

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
    msg.setTimeStamp(0.413039470744);
    msg.setSource(55376U);
    msg.setSourceEntity(78U);
    msg.setDestination(14904U);
    msg.setDestinationEntity(68U);
    msg.itow = 1353477849U;
    msg.lat = 0.548199754861;
    msg.lon = 0.426757303365;
    msg.height_ell = 0.325788853535;
    msg.height_sea = 0.695095774702;
    msg.hacc = 0.620815139144;
    msg.vacc = 0.452021346817;
    msg.vel_n = 0.372477394321;
    msg.vel_e = 0.030084771047;
    msg.vel_d = 0.935540890017;
    msg.speed = 0.0479579157033;
    msg.gspeed = 0.415818046602;
    msg.heading = 0.594883747368;
    msg.sacc = 0.323974355954;
    msg.cacc = 0.0791516313079;

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
    msg.setTimeStamp(0.596338094797);
    msg.setSource(52913U);
    msg.setSourceEntity(109U);
    msg.setDestination(7075U);
    msg.setDestinationEntity(232U);
    msg.itow = 4035318693U;
    msg.lat = 0.779215700731;
    msg.lon = 0.0734124497056;
    msg.height_ell = 0.317343756116;
    msg.height_sea = 0.324113019723;
    msg.hacc = 0.797266176522;
    msg.vacc = 0.957336320383;
    msg.vel_n = 0.960451280602;
    msg.vel_e = 0.224505510131;
    msg.vel_d = 0.999356302169;
    msg.speed = 0.807341620048;
    msg.gspeed = 0.947488967705;
    msg.heading = 0.0938645010507;
    msg.sacc = 0.445205497621;
    msg.cacc = 0.377627358082;

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
    msg.setTimeStamp(0.130280752198);
    msg.setSource(22945U);
    msg.setSourceEntity(28U);
    msg.setDestination(19078U);
    msg.setDestinationEntity(11U);
    msg.itow = 439658516U;
    msg.lat = 0.186473735685;
    msg.lon = 0.409606242309;
    msg.height_ell = 0.000701998042374;
    msg.height_sea = 0.300324842919;
    msg.hacc = 0.381188485696;
    msg.vacc = 0.860074833654;
    msg.vel_n = 0.51727158403;
    msg.vel_e = 0.401332884841;
    msg.vel_d = 0.222907346637;
    msg.speed = 0.710556781367;
    msg.gspeed = 0.0154460504266;
    msg.heading = 0.843829523711;
    msg.sacc = 0.380923126522;
    msg.cacc = 0.1902866107;

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
    msg.setTimeStamp(0.953765805548);
    msg.setSource(25223U);
    msg.setSourceEntity(246U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(101U);
    msg.id = 16U;
    msg.value = 0.754459059809;

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
    msg.setTimeStamp(0.420165299496);
    msg.setSource(42387U);
    msg.setSourceEntity(99U);
    msg.setDestination(28212U);
    msg.setDestinationEntity(115U);
    msg.id = 26U;
    msg.value = 0.0249873434498;

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
    msg.setTimeStamp(0.461081715217);
    msg.setSource(30084U);
    msg.setSourceEntity(8U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(119U);
    msg.id = 252U;
    msg.value = 0.509045839268;

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
    msg.setTimeStamp(0.244802283901);
    msg.setSource(15967U);
    msg.setSourceEntity(167U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(251U);
    msg.x = 0.596809478751;
    msg.y = 0.16920438029;
    msg.z = 0.508542869305;
    msg.phi = 0.361405697859;
    msg.theta = 0.48789631319;
    msg.psi = 0.706003598797;

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
    msg.setTimeStamp(0.177939394442);
    msg.setSource(45638U);
    msg.setSourceEntity(90U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(121U);
    msg.x = 0.697879781939;
    msg.y = 0.219921904477;
    msg.z = 0.697771433683;
    msg.phi = 0.862707857798;
    msg.theta = 0.469054063175;
    msg.psi = 0.526552772501;

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
    msg.setTimeStamp(0.593913747311);
    msg.setSource(37571U);
    msg.setSourceEntity(162U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(162U);
    msg.x = 0.0825799186914;
    msg.y = 0.0767926389343;
    msg.z = 0.373145954471;
    msg.phi = 0.328733274345;
    msg.theta = 0.102042255221;
    msg.psi = 0.971350801533;

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
    msg.setTimeStamp(0.837067558452);
    msg.setSource(44100U);
    msg.setSourceEntity(36U);
    msg.setDestination(52600U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.67578152557;
    msg.beam_height = 0.894836433644;

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
    msg.setTimeStamp(0.203486698557);
    msg.setSource(24727U);
    msg.setSourceEntity(33U);
    msg.setDestination(1425U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.708265087533;
    msg.beam_height = 0.0378608629148;

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
    msg.setTimeStamp(0.215121781203);
    msg.setSource(29028U);
    msg.setSourceEntity(94U);
    msg.setDestination(31356U);
    msg.setDestinationEntity(205U);
    msg.beam_width = 0.219259814873;
    msg.beam_height = 0.997343838625;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.301824093424);
    msg.setSource(22662U);
    msg.setSourceEntity(207U);
    msg.setDestination(10522U);
    msg.setDestinationEntity(115U);
    msg.id = 98U;
    msg.zoom = 54U;
    msg.action = 226U;

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
    msg.setTimeStamp(0.817628994542);
    msg.setSource(50528U);
    msg.setSourceEntity(98U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(161U);
    msg.id = 79U;
    msg.zoom = 196U;
    msg.action = 254U;

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
    msg.setTimeStamp(0.0081079705364);
    msg.setSource(30028U);
    msg.setSourceEntity(190U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(208U);
    msg.id = 214U;
    msg.zoom = 246U;
    msg.action = 20U;

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
    msg.setTimeStamp(0.661249951451);
    msg.setSource(37171U);
    msg.setSourceEntity(226U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(117U);
    msg.id = 144U;
    msg.value = 0.382892048034;

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
    msg.setTimeStamp(0.850433420192);
    msg.setSource(61604U);
    msg.setSourceEntity(88U);
    msg.setDestination(3041U);
    msg.setDestinationEntity(13U);
    msg.id = 8U;
    msg.value = 0.467579778836;

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
    msg.setTimeStamp(0.676520102599);
    msg.setSource(1858U);
    msg.setSourceEntity(81U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(42U);
    msg.id = 149U;
    msg.value = 0.403862071546;

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
    msg.setTimeStamp(0.865939075448);
    msg.setSource(61846U);
    msg.setSourceEntity(78U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(122U);
    msg.id = 37U;
    msg.value = 0.689996783773;

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
    msg.setTimeStamp(0.896084262417);
    msg.setSource(48872U);
    msg.setSourceEntity(32U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(117U);
    msg.id = 51U;
    msg.value = 0.594477737882;

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
    msg.setTimeStamp(0.96102481119);
    msg.setSource(5058U);
    msg.setSourceEntity(157U);
    msg.setDestination(4284U);
    msg.setDestinationEntity(27U);
    msg.id = 8U;
    msg.value = 0.516975622428;

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
    msg.setTimeStamp(0.0386844965086);
    msg.setSource(54670U);
    msg.setSourceEntity(121U);
    msg.setDestination(51188U);
    msg.setDestinationEntity(232U);
    msg.id = 188U;
    msg.angle = 0.385645881071;

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
    msg.setTimeStamp(0.403182852689);
    msg.setSource(12501U);
    msg.setSourceEntity(16U);
    msg.setDestination(23493U);
    msg.setDestinationEntity(88U);
    msg.id = 153U;
    msg.angle = 0.0405536638287;

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
    msg.setTimeStamp(0.855622401696);
    msg.setSource(9317U);
    msg.setSourceEntity(157U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(182U);
    msg.id = 209U;
    msg.angle = 0.913892075744;

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
    msg.setTimeStamp(0.582123735384);
    msg.setSource(39320U);
    msg.setSourceEntity(83U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(43U);
    msg.op = 86U;
    msg.actions.assign("EVRLCTTUPLYKXUEAQEIITBYCBJGZLPOHYIINCFAUVUPCQPMISTVHRDFKWHMJRPZUDAASSWDKJKDURZAGQZBOWAZIXNFLJRDMTGXBZQBFNLOUFSHXACRBNCYGFFPCIENSJEWVKHJPZSTXYHMPHOWIMXQEZAVEYRXHQMJBLNYGMOZRLESBUFBMWOMDFQGXOEDKBJSKXRINZCYUKGYOTGKCDPUNJHOYFCGQXJOHANVMLRWISVVWTQGWSDVKEQT");

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
    msg.setTimeStamp(0.964819653471);
    msg.setSource(59283U);
    msg.setSourceEntity(6U);
    msg.setDestination(27231U);
    msg.setDestinationEntity(196U);
    msg.op = 66U;
    msg.actions.assign("LKRQQAMOKJIWPYIGMPIZYIKIPGEDURZTTDTALXYDVOVSXN");

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
    msg.setTimeStamp(0.817392374108);
    msg.setSource(10703U);
    msg.setSourceEntity(87U);
    msg.setDestination(16091U);
    msg.setDestinationEntity(69U);
    msg.op = 25U;
    msg.actions.assign("CNMIXYBSEJWWQIZIIUXLFWMKNSVKRTJDUSNXIIHBZGKFEAODZKPNPMXYDDPCYLHDZVNMNEGUDCARHBTNAHOGEVASFRMWOQPFW");

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
    msg.setTimeStamp(0.724143302184);
    msg.setSource(16105U);
    msg.setSourceEntity(180U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(203U);
    msg.actions.assign("UUXEFDWNHJTIADLMJFMDMHNAKYMVDBEUYYDIJCCNBWTRYBLHWJXPNIFSAQRRVHOQXEEGWPTWVPKHLCRJZKJOGYKIUNWCTXVSMJBNIRQLMMQZNRKBZGGONBQTQTURKASZXUJLOYFVQOVEYPTSXOHTICMAZNDFBGSCXVV");

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
    msg.setTimeStamp(0.0347013093786);
    msg.setSource(46271U);
    msg.setSourceEntity(205U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(68U);
    msg.actions.assign("FDKGTEEFNMGUKMSNRHDXCMFNLXEZY");

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
    msg.setTimeStamp(0.786197322313);
    msg.setSource(31920U);
    msg.setSourceEntity(157U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(165U);
    msg.actions.assign("GAPVNBZTEJCORWHXBAOHCBRDLUCCVCMREBJWSZFVIVE");

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
    msg.setTimeStamp(0.12336893066);
    msg.setSource(29441U);
    msg.setSourceEntity(211U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(57U);
    msg.button = 0U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.0271924039217);
    msg.setSource(19000U);
    msg.setSourceEntity(69U);
    msg.setDestination(64097U);
    msg.setDestinationEntity(184U);
    msg.button = 19U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.944567699018);
    msg.setSource(10036U);
    msg.setSourceEntity(217U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(129U);
    msg.button = 5U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.640242534645);
    msg.setSource(45425U);
    msg.setSourceEntity(81U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(78U);
    msg.op = 87U;
    msg.text.assign("FYLZEQEWYDGTGYZEYLXYLTZAMPNPZNZML");

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
    msg.setTimeStamp(0.484372512468);
    msg.setSource(38420U);
    msg.setSourceEntity(125U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(219U);
    msg.op = 189U;
    msg.text.assign("DSAISTOPASPVBKUMMGBQFLOOJFBPOVRFKGUWGVAIZPWQCEMYQOPDRXVLIQDYPXVTLISDIXUMTLHAFVACUZDVQXZNHXPZGNBNSUWLCLLADJEHBSSNTLOXNRPUQDMQKGFEZNTKXVVZDZYBMYRYRTNAFWAAFTGKCHOEJAYQLMJCKHCOUJGEXYMNWPSBWJZGNJDKIHREJWMISTGWCLOHSIYBDUHWYBPRZJUIIFRME");

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
    msg.setTimeStamp(0.379243570471);
    msg.setSource(62055U);
    msg.setSourceEntity(0U);
    msg.setDestination(33640U);
    msg.setDestinationEntity(142U);
    msg.op = 71U;
    msg.text.assign("CSWDMEDXEFIEVYGXHNUFTFXMWSUTBMFLTIAYGQHUROYRRJSARIQWPYAAZMOZNPRCDWKVZHOSLGLUNGFWVQJPEALQUQTWKHORBNBVRKVCDKULMAHYCRFLPFEEHTZZJVNHSITRMCAYBCLPZCUVKQTTZIGCGODMPVVMKSWQGCGWYPBKKBESBQNADXFFX");

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
    msg.setTimeStamp(0.0050580793891);
    msg.setSource(44507U);
    msg.setSourceEntity(254U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(16U);
    msg.op = 6U;
    msg.time_remain = 0.577196427579;
    msg.sched_time = 0.255671443041;

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
    msg.setTimeStamp(0.473586796401);
    msg.setSource(4202U);
    msg.setSourceEntity(54U);
    msg.setDestination(29052U);
    msg.setDestinationEntity(141U);
    msg.op = 127U;
    msg.time_remain = 0.295840512141;
    msg.sched_time = 0.325136371399;

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
    msg.setTimeStamp(0.505587998359);
    msg.setSource(8319U);
    msg.setSourceEntity(69U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(218U);
    msg.op = 252U;
    msg.time_remain = 0.75791875734;
    msg.sched_time = 0.57546242275;

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
    msg.setTimeStamp(0.572889522757);
    msg.setSource(9781U);
    msg.setSourceEntity(164U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(166U);
    msg.name.assign("DLQCSOUQRYPPCDRNUTRGIVUXSALBMXEIBBUYHOKPHMLODNLKNKSANOBODDIBDSTICLBCCJAGBQMUMWRZMXYQAFHYWGHEHDISMDRNKPNEULHEHJGOQFPEGZ");
    msg.op = 81U;
    msg.sched_time = 0.988679948695;

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
    msg.setTimeStamp(0.280022743876);
    msg.setSource(19390U);
    msg.setSourceEntity(169U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(251U);
    msg.name.assign("PFRZSFKWFCRQNPQDCYGEYEHAAKHUZOOMITKKXVQFAILWTVYPGMEVHMNGCMELOZLXLTSAKVYVZXPTUJSWXWLDFSOYQAJNUWPHAKXJFSYQBNCIKEUURUYWJLIUAUZRPLORXIXSCVDCKGYGWAIBDOLNUADIRVHBBOIQZVPZA");
    msg.op = 146U;
    msg.sched_time = 0.425943210136;

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
    msg.setTimeStamp(0.21180758208);
    msg.setSource(12108U);
    msg.setSourceEntity(16U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(83U);
    msg.name.assign("AELNRVCWMDRLFTWAUXQDOEUYWKIUWQMFSCCNBIITZBCKOINMLDDEEVPJSNTGCPFAMAVUGLGLJJYOSROHPUNFORDBMQXPTBFVGBBKMIMAHYVBYOTJUQVUCNAICAKMJAXVXNDEWXSEGSZQKPTKOGSPKCKSMHJ");
    msg.op = 14U;
    msg.sched_time = 0.754597536093;

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
    msg.setTimeStamp(0.980043687192);
    msg.setSource(31089U);
    msg.setSourceEntity(170U);
    msg.setDestination(46053U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.627391150348);
    msg.setSource(4773U);
    msg.setSourceEntity(210U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.760763983701);
    msg.setSource(10601U);
    msg.setSourceEntity(99U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.768476792672);
    msg.setSource(572U);
    msg.setSourceEntity(126U);
    msg.setDestination(23489U);
    msg.setDestinationEntity(39U);
    msg.name.assign("QWRGNAFAJWVECQHCUGBXTXPVDFJCTSOXRNKYIZKOJLEOVDIUWIRQKOFCVKALJMDXNXBYGFWCSJJRUGJCBPPKHBEOLDGLQKIZFRSQIVUPUMQDMOFRBVAHIHJVPPNDZAEFKYZHWFLYMSRBSOAVZCGMTKLSETQFNRPMTITISWDANSWUPOTCGKPWMRBWWSYNTNUMBFEUMXSZVJGBLQC");
    msg.state = 82U;

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
    msg.setTimeStamp(0.618609646244);
    msg.setSource(44133U);
    msg.setSourceEntity(202U);
    msg.setDestination(16625U);
    msg.setDestinationEntity(66U);
    msg.name.assign("WEFRYHXVMXHHYVPFJNOMNONKRWHZECQXQMZFXAAEXOYQTCHUCSVPIZXVEPFBDILYGWBUJHTBYMQKUCIRBNLBNJLTOTJOOEKUXRNXFUEPT");
    msg.state = 35U;

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
    msg.setTimeStamp(0.374594095211);
    msg.setSource(54530U);
    msg.setSourceEntity(182U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(9U);
    msg.name.assign("LSVGIIXLRZCNVFWLPTAHNRNKEESQEHCJKXMFTFM");
    msg.state = 101U;

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
    msg.setTimeStamp(0.109297759092);
    msg.setSource(58753U);
    msg.setSourceEntity(139U);
    msg.setDestination(41462U);
    msg.setDestinationEntity(3U);
    msg.name.assign("JFRQQRENVPNAPUAPUYMLGNRBMTIHJOXTOIHFWGZZCTEOXLSBWKVLCIBDQAEVIQXEBWOASVOEVMOLNKRHXNIQDRQENJAAJMQJGAEEWPAGMZXYBCRHMSMGRKCUKZOBFPKINFVFSMSVYNQIYKLYHZHZACBVYRDKEZBQITPKCOXUZFWGWXSXOTDGLMIJFJZTDWJTHWVYCVUTYHMIDCY");
    msg.value = 115U;

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
    msg.setTimeStamp(0.182770920801);
    msg.setSource(4217U);
    msg.setSourceEntity(177U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(37U);
    msg.name.assign("OHWPHWFTRAGEYDOOWUEMODPQULKSCIJZAFIVBDSVKQYONEFURSJMGJBWREBJJWXHJYTLUWEKUPMAYDQHNNCYKCAPDVPSLRQOFFLGENXYFRBFJDMBCAFLLKXOHSPQRCKPAWZALSTRPQLJHIIVBZMXZGBFADUDZNZQSYBSMTAYXJQDIIKNPHESJZGCRMPQQMWIXXINVC");
    msg.value = 225U;

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
    msg.setTimeStamp(0.283789358266);
    msg.setSource(12828U);
    msg.setSourceEntity(97U);
    msg.setDestination(55873U);
    msg.setDestinationEntity(7U);
    msg.name.assign("TSFLYGAOOVTYCDWEOWCJBEEMALPMFVQNISFBTLQTHIWDXNHGSETVLRHMZD");
    msg.value = 189U;

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
    msg.setTimeStamp(0.442797973871);
    msg.setSource(40584U);
    msg.setSourceEntity(108U);
    msg.setDestination(7245U);
    msg.setDestinationEntity(47U);
    msg.name.assign("TOKLODEVAORBDLIBOMHICNJZWFQXUJOCRMYEPGTJLSFVWPSCSQGJTQBQFFEJJXQVBUEQADFLXAWRFFLIPWRZBGIDJFDCBEYUOPNKCVAZRBYBYHHUKDSLHTEAHXWLARPLMMSUZYWYYICARXIJXH");

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
    msg.setTimeStamp(0.489086879462);
    msg.setSource(60100U);
    msg.setSourceEntity(3U);
    msg.setDestination(14194U);
    msg.setDestinationEntity(128U);
    msg.name.assign("KCYPDMJRVWDFOUOZNAFDNUFK");

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
    msg.setTimeStamp(0.30691318446);
    msg.setSource(59963U);
    msg.setSourceEntity(222U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(17U);
    msg.name.assign("ZQLKHCVILTHKXEMNRGDZWABBHCAXNOEMOGGGZYSSAKQIFIPCHDCWCYEVULLXKSJHFVJFQLPBVHAEG");

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
    msg.setTimeStamp(0.934529482983);
    msg.setSource(45116U);
    msg.setSourceEntity(63U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(106U);
    msg.name.assign("VGVXPYSOLNWTJWVWHFOMAGHQCJRGNVXEMRNMJIYUUBGIOKOJXUIXLOPSEWCI");
    msg.value = 71U;

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
    msg.setTimeStamp(0.134196037193);
    msg.setSource(868U);
    msg.setSourceEntity(49U);
    msg.setDestination(34115U);
    msg.setDestinationEntity(150U);
    msg.name.assign("UWDRRIVCSNSJHJHRPTTANNCJTFXK");
    msg.value = 112U;

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
    msg.setTimeStamp(0.834778104098);
    msg.setSource(6064U);
    msg.setSourceEntity(198U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(185U);
    msg.name.assign("KSGQZAHWGXQRCHADRJRHSTYUJBQGIEZOGHAVGIDYS");
    msg.value = 146U;

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
    msg.setTimeStamp(0.505870692038);
    msg.setSource(33411U);
    msg.setSourceEntity(115U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.209087011127;
    msg.lon = 0.292158523409;
    msg.height = 0.413229077966;
    msg.x = 0.758669527297;
    msg.y = 0.449817112169;
    msg.z = 0.0430275482387;
    msg.phi = 0.937946137938;
    msg.theta = 0.584398459767;
    msg.psi = 0.6564380524;
    msg.u = 0.869523477945;
    msg.v = 0.852903862376;
    msg.w = 0.945246486758;
    msg.vx = 0.641542291738;
    msg.vy = 0.127152940004;
    msg.vz = 0.591875272034;
    msg.p = 0.584831951837;
    msg.q = 0.303720715166;
    msg.r = 0.440946418301;
    msg.depth = 0.493628179871;
    msg.alt = 0.419776192232;

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
    msg.setTimeStamp(0.544573116644);
    msg.setSource(15600U);
    msg.setSourceEntity(144U);
    msg.setDestination(57978U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.294197196359;
    msg.lon = 0.717632094829;
    msg.height = 0.179873735973;
    msg.x = 0.948515186775;
    msg.y = 0.43149369557;
    msg.z = 0.713883327363;
    msg.phi = 0.100172729719;
    msg.theta = 0.416210466875;
    msg.psi = 0.133327550439;
    msg.u = 0.68839774106;
    msg.v = 0.741842387938;
    msg.w = 0.511876098753;
    msg.vx = 0.848688656213;
    msg.vy = 0.736805635453;
    msg.vz = 0.42226367048;
    msg.p = 0.0840554548863;
    msg.q = 0.82595768771;
    msg.r = 0.80972015944;
    msg.depth = 0.875747802479;
    msg.alt = 0.78440431335;

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
    msg.setTimeStamp(0.797569062789);
    msg.setSource(47139U);
    msg.setSourceEntity(216U);
    msg.setDestination(6830U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.0965318492324;
    msg.lon = 0.427211709958;
    msg.height = 0.0791745612922;
    msg.x = 0.746533809849;
    msg.y = 0.930317933188;
    msg.z = 0.601600899168;
    msg.phi = 0.445204428204;
    msg.theta = 0.120001559326;
    msg.psi = 0.756556459884;
    msg.u = 0.223485523034;
    msg.v = 0.0142338202095;
    msg.w = 0.278609360007;
    msg.vx = 0.438352071367;
    msg.vy = 0.355868323821;
    msg.vz = 0.623023501665;
    msg.p = 0.346623356455;
    msg.q = 0.747600857173;
    msg.r = 0.410794187474;
    msg.depth = 0.0691071959363;
    msg.alt = 0.21781089649;

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
    msg.setTimeStamp(0.964843712991);
    msg.setSource(60037U);
    msg.setSourceEntity(199U);
    msg.setDestination(27147U);
    msg.setDestinationEntity(181U);
    msg.x = 0.0555543627384;
    msg.y = 0.451641644232;
    msg.z = 0.906164786498;

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
    msg.setTimeStamp(0.338027185946);
    msg.setSource(41147U);
    msg.setSourceEntity(93U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(203U);
    msg.x = 0.669340860844;
    msg.y = 0.893096526851;
    msg.z = 0.845643007819;

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
    msg.setTimeStamp(0.60119741419);
    msg.setSource(16202U);
    msg.setSourceEntity(54U);
    msg.setDestination(1875U);
    msg.setDestinationEntity(44U);
    msg.x = 0.592334240966;
    msg.y = 0.314471730979;
    msg.z = 0.564196170141;

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
    msg.setTimeStamp(0.804925209326);
    msg.setSource(40030U);
    msg.setSourceEntity(121U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(73U);
    msg.value = 0.641970416554;

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
    msg.setTimeStamp(0.505523112677);
    msg.setSource(45678U);
    msg.setSourceEntity(113U);
    msg.setDestination(31805U);
    msg.setDestinationEntity(252U);
    msg.value = 0.626839658432;

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
    msg.setTimeStamp(0.658262926056);
    msg.setSource(47910U);
    msg.setSourceEntity(251U);
    msg.setDestination(3713U);
    msg.setDestinationEntity(184U);
    msg.value = 0.638705352047;

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
    msg.setTimeStamp(0.614641819404);
    msg.setSource(12098U);
    msg.setSourceEntity(51U);
    msg.setDestination(39742U);
    msg.setDestinationEntity(246U);
    msg.value = 0.298017853069;

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
    msg.setTimeStamp(0.347830633672);
    msg.setSource(2044U);
    msg.setSourceEntity(49U);
    msg.setDestination(1047U);
    msg.setDestinationEntity(38U);
    msg.value = 0.764525218535;

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
    msg.setTimeStamp(0.795454727021);
    msg.setSource(65012U);
    msg.setSourceEntity(215U);
    msg.setDestination(56071U);
    msg.setDestinationEntity(227U);
    msg.value = 0.629897756097;

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
    msg.setTimeStamp(0.00434916658397);
    msg.setSource(33640U);
    msg.setSourceEntity(209U);
    msg.setDestination(36541U);
    msg.setDestinationEntity(195U);
    msg.x = 0.798405228143;
    msg.y = 0.596701137632;
    msg.z = 0.753981713086;
    msg.phi = 0.566010760761;
    msg.theta = 0.722086160721;
    msg.psi = 0.514944582904;
    msg.p = 0.578943177353;
    msg.q = 0.270040383723;
    msg.r = 0.91723712626;
    msg.u = 0.585061090918;
    msg.v = 0.161871762707;
    msg.w = 0.971178462189;
    msg.bias_psi = 0.859651867973;
    msg.bias_r = 0.998182617433;

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
    msg.setTimeStamp(0.605149555625);
    msg.setSource(21953U);
    msg.setSourceEntity(8U);
    msg.setDestination(21235U);
    msg.setDestinationEntity(202U);
    msg.x = 0.317759451851;
    msg.y = 0.682459734001;
    msg.z = 0.114979845192;
    msg.phi = 0.899258401182;
    msg.theta = 0.397406765228;
    msg.psi = 0.905618369205;
    msg.p = 0.545736253877;
    msg.q = 0.732857535996;
    msg.r = 0.899456279465;
    msg.u = 0.832982670232;
    msg.v = 0.426301239205;
    msg.w = 0.484008522122;
    msg.bias_psi = 0.24268975197;
    msg.bias_r = 0.158388435672;

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
    msg.setTimeStamp(0.598184914504);
    msg.setSource(33458U);
    msg.setSourceEntity(48U);
    msg.setDestination(13020U);
    msg.setDestinationEntity(72U);
    msg.x = 0.111385261695;
    msg.y = 0.582394243968;
    msg.z = 0.976857509841;
    msg.phi = 0.90841246995;
    msg.theta = 0.132012639426;
    msg.psi = 0.0712846291803;
    msg.p = 0.772489702101;
    msg.q = 0.428006468013;
    msg.r = 0.824512674591;
    msg.u = 0.708764448632;
    msg.v = 0.349776676801;
    msg.w = 0.664130117933;
    msg.bias_psi = 0.65367528487;
    msg.bias_r = 0.873809775506;

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
    msg.setTimeStamp(0.111203462412);
    msg.setSource(26444U);
    msg.setSourceEntity(207U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(43U);
    msg.bias_psi = 0.825712071112;
    msg.bias_r = 0.690293572191;
    msg.cog = 0.600983890773;
    msg.cyaw = 0.663884145965;
    msg.lbl_rej_level = 0.414390629032;
    msg.gps_rej_level = 0.133701159132;
    msg.custom_x = 0.602421899653;
    msg.custom_y = 0.0159230301932;
    msg.custom_z = 0.632831375314;

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
    msg.setTimeStamp(0.415850333607);
    msg.setSource(49974U);
    msg.setSourceEntity(122U);
    msg.setDestination(18906U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.869207342165;
    msg.bias_r = 0.755083834387;
    msg.cog = 0.29680660486;
    msg.cyaw = 0.518754198257;
    msg.lbl_rej_level = 0.871311033141;
    msg.gps_rej_level = 0.208241708204;
    msg.custom_x = 0.607435314316;
    msg.custom_y = 0.0635027049156;
    msg.custom_z = 0.846742646202;

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
    msg.setTimeStamp(0.637143976635);
    msg.setSource(29562U);
    msg.setSourceEntity(233U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.264306611458;
    msg.bias_r = 0.70051881671;
    msg.cog = 0.899357835174;
    msg.cyaw = 0.127484568601;
    msg.lbl_rej_level = 0.243814785707;
    msg.gps_rej_level = 0.337837290587;
    msg.custom_x = 0.398548695383;
    msg.custom_y = 0.833818074233;
    msg.custom_z = 0.958162226839;

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
    msg.setTimeStamp(0.543357481346);
    msg.setSource(31478U);
    msg.setSourceEntity(28U);
    msg.setDestination(10676U);
    msg.setDestinationEntity(214U);
    msg.utc_time = 0.534601278412;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.898273656065);
    msg.setSource(49107U);
    msg.setSourceEntity(99U);
    msg.setDestination(57016U);
    msg.setDestinationEntity(97U);
    msg.utc_time = 0.357378761041;
    msg.reason = 194U;

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
    msg.setTimeStamp(0.311816338241);
    msg.setSource(50040U);
    msg.setSourceEntity(174U);
    msg.setDestination(42690U);
    msg.setDestinationEntity(171U);
    msg.utc_time = 0.547655325041;
    msg.reason = 42U;

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
    msg.setTimeStamp(0.766184119474);
    msg.setSource(12244U);
    msg.setSourceEntity(54U);
    msg.setDestination(23332U);
    msg.setDestinationEntity(228U);
    msg.id = 66U;
    msg.range = 0.397400105732;
    msg.acceptance = 122U;

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
    msg.setTimeStamp(0.165159928061);
    msg.setSource(1312U);
    msg.setSourceEntity(159U);
    msg.setDestination(31500U);
    msg.setDestinationEntity(100U);
    msg.id = 240U;
    msg.range = 0.600120869021;
    msg.acceptance = 219U;

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
    msg.setTimeStamp(0.358919068389);
    msg.setSource(19685U);
    msg.setSourceEntity(18U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(51U);
    msg.id = 94U;
    msg.range = 0.574155305981;
    msg.acceptance = 68U;

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
    msg.setTimeStamp(0.265245883353);
    msg.setSource(39291U);
    msg.setSourceEntity(195U);
    msg.setDestination(9485U);
    msg.setDestinationEntity(89U);
    msg.type = 41U;
    msg.reason = 124U;
    msg.value = 0.748456312689;
    msg.timestep = 0.467255100382;

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
    msg.setTimeStamp(0.495258820958);
    msg.setSource(28800U);
    msg.setSourceEntity(83U);
    msg.setDestination(5499U);
    msg.setDestinationEntity(235U);
    msg.type = 224U;
    msg.reason = 36U;
    msg.value = 0.500253347337;
    msg.timestep = 0.654334238134;

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
    msg.setTimeStamp(0.354137450514);
    msg.setSource(64249U);
    msg.setSourceEntity(219U);
    msg.setDestination(56849U);
    msg.setDestinationEntity(179U);
    msg.type = 33U;
    msg.reason = 62U;
    msg.value = 0.24493332631;
    msg.timestep = 0.0390773233093;

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
    msg.setTimeStamp(0.53498295829);
    msg.setSource(53073U);
    msg.setSourceEntity(58U);
    msg.setDestination(57594U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.699217008526);
    msg.setSource(51416U);
    msg.setSourceEntity(90U);
    msg.setDestination(33203U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.8186492632);
    msg.setSource(45816U);
    msg.setSourceEntity(40U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.61629833635);
    msg.setSource(29067U);
    msg.setSourceEntity(218U);
    msg.setDestination(5271U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("YMVKIWYJBHQCMNRIUZDPUTAZQTMDWUEFDJUVSOWPWZPSSEKXIYXSQTAIKVGYFEALHOHHVNQSKCOORABVBKFNBTHOMXOIOMFQLUEVJWLPRDJGAJKRDIYHPLGQPNBBQRNWBCBLRKNULZGTONFYZCKEYYDUPZHIBIJTCPGNAVERGHCTZWSCMGFXAZZCXFXMBGTNJCVSEOTMPDMRQJGAHKIHLDGNELQKDXSRQVDV");
    msg.x = 0.880132216952;
    msg.y = 0.598542747957;
    msg.depth = 0.922971552044;
    msg.var_x = 0.750002157927;
    msg.var_y = 0.809676274756;

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
    msg.setTimeStamp(0.638211521933);
    msg.setSource(44320U);
    msg.setSourceEntity(47U);
    msg.setDestination(38007U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("HJFFZUTJXEYPYDDIXDCLFFCHIDQCVYEKZCWXSETYFILWNOUUGNOVOVRWSPNGPMRYJCWCELUNGCNPATNTQVIGQKJPDHESVEAXJBQUBSUYEXHMJAHKDRJHGRWQMFTAOQUMOXCYBZFTQBCF");
    msg.x = 0.679969628939;
    msg.y = 0.630225189046;
    msg.depth = 0.709573742536;
    msg.var_x = 0.0686558757251;
    msg.var_y = 0.700421673884;

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
    msg.setTimeStamp(0.0336007946803);
    msg.setSource(33258U);
    msg.setSourceEntity(184U);
    msg.setDestination(1738U);
    msg.setDestinationEntity(115U);
    msg.beacon.assign("KTMHHIXPGUOZTERXNDYYDPJOISQAEIVNFIMPSDSINWWUAFFNOBUSUTKXMPCBTLLALQGJUEACUOGBHTHFVWXLLLSOSQMHKUBBRWMKYAIKHWJBFZGPYYHZKWVWEJZRDXECXMKMWKGJFNEZNYRGCSVDURBPMXHSMKLZOQWAJBXINNVYRETFCXJIOIYXUPQTCAJZEJPFFCRAEWV");
    msg.x = 0.592145643819;
    msg.y = 0.857236466735;
    msg.depth = 0.844915898798;
    msg.var_x = 0.620271390615;
    msg.var_y = 0.0349327119813;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.969616629695);
    msg.setSource(7019U);
    msg.setSourceEntity(8U);
    msg.setDestination(13643U);
    msg.setDestinationEntity(178U);
    msg.value = 0.789408275087;

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
    msg.setTimeStamp(0.525526763883);
    msg.setSource(43584U);
    msg.setSourceEntity(231U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(19U);
    msg.value = 0.635598026582;

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
    msg.setTimeStamp(0.864502984609);
    msg.setSource(60750U);
    msg.setSourceEntity(175U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(6U);
    msg.value = 0.722097349043;

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
    msg.setTimeStamp(0.798525252197);
    msg.setSource(22263U);
    msg.setSourceEntity(242U);
    msg.setDestination(12941U);
    msg.setDestinationEntity(43U);
    msg.value = 0.554130208294;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.984102757217);
    msg.setSource(47167U);
    msg.setSourceEntity(212U);
    msg.setDestination(14861U);
    msg.setDestinationEntity(113U);
    msg.value = 0.00658364629672;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.124123207608);
    msg.setSource(14898U);
    msg.setSourceEntity(245U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(66U);
    msg.value = 0.186607857735;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.323392526841);
    msg.setSource(33325U);
    msg.setSourceEntity(182U);
    msg.setDestination(48523U);
    msg.setDestinationEntity(21U);
    msg.value = 0.922976927916;
    msg.speed_units = 115U;

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
    msg.setTimeStamp(0.73790724465);
    msg.setSource(4037U);
    msg.setSourceEntity(94U);
    msg.setDestination(57249U);
    msg.setDestinationEntity(238U);
    msg.value = 0.323506777823;
    msg.speed_units = 75U;

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
    msg.setTimeStamp(0.326731172787);
    msg.setSource(59429U);
    msg.setSourceEntity(174U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(239U);
    msg.value = 0.774868436118;
    msg.speed_units = 231U;

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
    msg.setTimeStamp(0.188683177788);
    msg.setSource(31598U);
    msg.setSourceEntity(234U);
    msg.setDestination(64654U);
    msg.setDestinationEntity(175U);
    msg.value = 0.217936457168;

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
    msg.setTimeStamp(0.142327905781);
    msg.setSource(18603U);
    msg.setSourceEntity(233U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(222U);
    msg.value = 0.710943258335;

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
    msg.setTimeStamp(0.648610998462);
    msg.setSource(27524U);
    msg.setSourceEntity(38U);
    msg.setDestination(29266U);
    msg.setDestinationEntity(45U);
    msg.value = 0.225864421205;

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
    msg.setTimeStamp(0.932509223183);
    msg.setSource(60191U);
    msg.setSourceEntity(123U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(3U);
    msg.value = 0.207564322534;

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
    msg.setTimeStamp(0.263582944104);
    msg.setSource(65157U);
    msg.setSourceEntity(163U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(104U);
    msg.value = 0.226534615916;

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
    msg.setTimeStamp(0.29445978506);
    msg.setSource(51134U);
    msg.setSourceEntity(32U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(247U);
    msg.value = 0.168031445709;

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
    msg.setTimeStamp(0.712752744638);
    msg.setSource(62857U);
    msg.setSourceEntity(233U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(213U);
    msg.value = 0.896952373264;

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
    msg.setTimeStamp(0.0820831221192);
    msg.setSource(25482U);
    msg.setSourceEntity(37U);
    msg.setDestination(36823U);
    msg.setDestinationEntity(9U);
    msg.value = 0.827990924059;

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
    msg.setTimeStamp(0.115064000433);
    msg.setSource(31187U);
    msg.setSourceEntity(175U);
    msg.setDestination(3522U);
    msg.setDestinationEntity(211U);
    msg.value = 0.821986227641;

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
    msg.setTimeStamp(0.196138093341);
    msg.setSource(46900U);
    msg.setSourceEntity(60U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(90U);
    msg.start_lat = 0.924927434524;
    msg.start_lon = 0.526958584459;
    msg.start_z = 0.19152543876;
    msg.start_z_units = 42U;
    msg.end_lat = 0.565423216083;
    msg.end_lon = 0.564891513737;
    msg.end_z = 0.767185079225;
    msg.end_z_units = 65U;
    msg.speed = 0.907547812875;
    msg.speed_units = 154U;
    msg.lradius = 0.729991831062;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.189687586349);
    msg.setSource(16776U);
    msg.setSourceEntity(20U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(137U);
    msg.start_lat = 0.822104392889;
    msg.start_lon = 0.248778227686;
    msg.start_z = 0.822765978709;
    msg.start_z_units = 209U;
    msg.end_lat = 0.969270782644;
    msg.end_lon = 0.700834621459;
    msg.end_z = 0.879583945505;
    msg.end_z_units = 213U;
    msg.speed = 0.842500593067;
    msg.speed_units = 240U;
    msg.lradius = 0.362738255015;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.632416571848);
    msg.setSource(58709U);
    msg.setSourceEntity(198U);
    msg.setDestination(63854U);
    msg.setDestinationEntity(29U);
    msg.start_lat = 0.191849938884;
    msg.start_lon = 0.744151247082;
    msg.start_z = 0.340223308473;
    msg.start_z_units = 172U;
    msg.end_lat = 0.733022818204;
    msg.end_lon = 0.767222451478;
    msg.end_z = 0.189692484491;
    msg.end_z_units = 83U;
    msg.speed = 0.815085321767;
    msg.speed_units = 78U;
    msg.lradius = 0.832829989218;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.427712431952);
    msg.setSource(16404U);
    msg.setSourceEntity(218U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(145U);
    msg.x = 0.741463499206;
    msg.y = 0.440242844839;
    msg.z = 0.149204325482;
    msg.k = 0.417691379559;
    msg.m = 0.825211175624;
    msg.n = 0.836489117743;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.220490517891);
    msg.setSource(7241U);
    msg.setSourceEntity(197U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(186U);
    msg.x = 0.747664849204;
    msg.y = 0.0234241719531;
    msg.z = 0.167286965918;
    msg.k = 0.699458553155;
    msg.m = 0.246555611413;
    msg.n = 0.393161452859;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.838268890579);
    msg.setSource(53590U);
    msg.setSourceEntity(109U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(79U);
    msg.x = 0.375564088887;
    msg.y = 0.462366110351;
    msg.z = 0.55696071587;
    msg.k = 0.872558401341;
    msg.m = 0.486834596241;
    msg.n = 0.940870472284;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.704355571911);
    msg.setSource(18794U);
    msg.setSourceEntity(17U);
    msg.setDestination(12134U);
    msg.setDestinationEntity(226U);
    msg.value = 0.411223646847;

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
    msg.setTimeStamp(0.528568444446);
    msg.setSource(63708U);
    msg.setSourceEntity(77U);
    msg.setDestination(28867U);
    msg.setDestinationEntity(92U);
    msg.value = 0.226752552616;

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
    msg.setTimeStamp(0.106080358619);
    msg.setSource(37552U);
    msg.setSourceEntity(121U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(225U);
    msg.value = 0.64496659082;

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
    msg.setTimeStamp(0.13825479622);
    msg.setSource(9212U);
    msg.setSourceEntity(85U);
    msg.setDestination(33517U);
    msg.setDestinationEntity(17U);
    msg.u = 0.444228384478;
    msg.v = 0.198509630038;
    msg.w = 0.476677657148;
    msg.p = 0.296705348466;
    msg.q = 0.950635978549;
    msg.r = 0.0925163007196;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.0891805293707);
    msg.setSource(32680U);
    msg.setSourceEntity(179U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(192U);
    msg.u = 0.0739561318223;
    msg.v = 0.261099877123;
    msg.w = 0.610558008993;
    msg.p = 0.235224212046;
    msg.q = 0.407353139062;
    msg.r = 0.999748236462;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.6049799753);
    msg.setSource(43941U);
    msg.setSourceEntity(2U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(227U);
    msg.u = 0.821020374546;
    msg.v = 0.624722576147;
    msg.w = 0.320610688489;
    msg.p = 0.881583183354;
    msg.q = 0.640073478726;
    msg.r = 0.914432456482;
    msg.flags = 133U;

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
    msg.setTimeStamp(0.884913393019);
    msg.setSource(40784U);
    msg.setSourceEntity(148U);
    msg.setDestination(51886U);
    msg.setDestinationEntity(60U);
    msg.start_lat = 0.938250951615;
    msg.start_lon = 0.419639247632;
    msg.start_z = 0.811685003522;
    msg.start_z_units = 30U;
    msg.end_lat = 0.618112446771;
    msg.end_lon = 0.379477350733;
    msg.end_z = 0.82359997209;
    msg.end_z_units = 13U;
    msg.lradius = 0.966522912969;
    msg.flags = 37U;
    msg.x = 0.0490692110634;
    msg.y = 0.769306714196;
    msg.z = 0.207291933;
    msg.vx = 0.432247115679;
    msg.vy = 0.412775996855;
    msg.vz = 0.974975263348;
    msg.course_error = 0.586994353025;
    msg.eta = 33159U;

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
    msg.setTimeStamp(0.537549758326);
    msg.setSource(451U);
    msg.setSourceEntity(161U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(98U);
    msg.start_lat = 0.522543089732;
    msg.start_lon = 0.449317244578;
    msg.start_z = 0.0158226142705;
    msg.start_z_units = 84U;
    msg.end_lat = 0.616674290836;
    msg.end_lon = 0.938011684997;
    msg.end_z = 0.671198066641;
    msg.end_z_units = 30U;
    msg.lradius = 0.547958689634;
    msg.flags = 109U;
    msg.x = 0.775647275396;
    msg.y = 0.0532139644243;
    msg.z = 0.600459985493;
    msg.vx = 0.582701623562;
    msg.vy = 0.0036126467688;
    msg.vz = 0.615022869763;
    msg.course_error = 0.0243985248274;
    msg.eta = 56362U;

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
    msg.setTimeStamp(0.753952899616);
    msg.setSource(22762U);
    msg.setSourceEntity(83U);
    msg.setDestination(25902U);
    msg.setDestinationEntity(145U);
    msg.start_lat = 0.972416010291;
    msg.start_lon = 0.253665735518;
    msg.start_z = 0.675529640554;
    msg.start_z_units = 104U;
    msg.end_lat = 0.644244485116;
    msg.end_lon = 0.967172918277;
    msg.end_z = 0.0888728479082;
    msg.end_z_units = 1U;
    msg.lradius = 0.518711781992;
    msg.flags = 131U;
    msg.x = 0.559196770023;
    msg.y = 0.637494588544;
    msg.z = 0.5567250084;
    msg.vx = 0.690294959684;
    msg.vy = 0.688136830645;
    msg.vz = 0.148208089507;
    msg.course_error = 0.311318930864;
    msg.eta = 46471U;

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
    msg.setTimeStamp(0.356377278605);
    msg.setSource(22394U);
    msg.setSourceEntity(102U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(244U);
    msg.k = 0.821745631101;
    msg.m = 0.752038573219;
    msg.n = 0.0364242736693;

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
    msg.setTimeStamp(0.145192438177);
    msg.setSource(63458U);
    msg.setSourceEntity(10U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(236U);
    msg.k = 0.747728263606;
    msg.m = 0.909021589214;
    msg.n = 0.0476357383582;

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
    msg.setTimeStamp(0.935525043338);
    msg.setSource(22137U);
    msg.setSourceEntity(58U);
    msg.setDestination(49031U);
    msg.setDestinationEntity(95U);
    msg.k = 0.944238536232;
    msg.m = 0.410953061466;
    msg.n = 0.703802805;

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
    msg.setTimeStamp(0.719391819535);
    msg.setSource(38590U);
    msg.setSourceEntity(140U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(208U);
    msg.p = 0.537924027209;
    msg.i = 0.0536218276949;
    msg.d = 0.934080013397;
    msg.a = 0.875078892781;

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
    msg.setTimeStamp(0.892650854128);
    msg.setSource(27262U);
    msg.setSourceEntity(8U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(128U);
    msg.p = 0.322383824841;
    msg.i = 0.227525432957;
    msg.d = 0.398618653671;
    msg.a = 0.152673464349;

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
    msg.setTimeStamp(0.388783314167);
    msg.setSource(49342U);
    msg.setSourceEntity(130U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(58U);
    msg.p = 0.774760160252;
    msg.i = 0.720325159736;
    msg.d = 0.802857036681;
    msg.a = 0.517550481162;

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
    msg.setTimeStamp(0.310526972006);
    msg.setSource(8697U);
    msg.setSourceEntity(198U);
    msg.setDestination(54948U);
    msg.setDestinationEntity(196U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.676068563308);
    msg.setSource(52406U);
    msg.setSourceEntity(184U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(212U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.937850560082);
    msg.setSource(59032U);
    msg.setSourceEntity(39U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(61U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.0757188404365);
    msg.setSource(17928U);
    msg.setSourceEntity(98U);
    msg.setDestination(5165U);
    msg.setDestinationEntity(216U);
    msg.timeout = 32900U;
    msg.lat = 0.797731955784;
    msg.lon = 0.961012346182;
    msg.z = 0.976778186786;
    msg.z_units = 250U;
    msg.speed = 0.0977945953767;
    msg.speed_units = 229U;
    msg.roll = 0.766721037257;
    msg.pitch = 0.991178769272;
    msg.yaw = 0.398168237933;
    msg.custom.assign("AOAXMJQNRPIGPQLBMLSEOGRDVPPOHETDGWT");

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
    msg.setTimeStamp(0.33767887697);
    msg.setSource(36998U);
    msg.setSourceEntity(41U);
    msg.setDestination(25320U);
    msg.setDestinationEntity(27U);
    msg.timeout = 39453U;
    msg.lat = 0.655471091134;
    msg.lon = 0.448999449472;
    msg.z = 0.0949732044236;
    msg.z_units = 99U;
    msg.speed = 0.966625798274;
    msg.speed_units = 197U;
    msg.roll = 0.716378798851;
    msg.pitch = 0.952442313723;
    msg.yaw = 0.378184411297;
    msg.custom.assign("CFWPDRSBGBEJRWVYEQTMMRIQGHCITWVOPBPOVZPAMLONDXYLEJJNANIHSMFQSJIWAKLKZSJSNCGCYKKYDFO");

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
    msg.setTimeStamp(0.849886289159);
    msg.setSource(57953U);
    msg.setSourceEntity(178U);
    msg.setDestination(30776U);
    msg.setDestinationEntity(46U);
    msg.timeout = 60807U;
    msg.lat = 0.440000098815;
    msg.lon = 0.0136291336577;
    msg.z = 0.578297585558;
    msg.z_units = 26U;
    msg.speed = 0.165058871146;
    msg.speed_units = 47U;
    msg.roll = 0.72443043901;
    msg.pitch = 0.381823572752;
    msg.yaw = 0.401923227546;
    msg.custom.assign("WWLNQVJPXIGKVTOHSRXSYPTELHGJUGPGDAUUDMRMTBCCMZOQCSYRCPHNVPXGTSKXSFYBEWXZWZJLXSVHLOCVDFIVVFCKIICVOCUAONGTNYRTBNFGZQPLRJO");

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
    msg.setTimeStamp(0.207527492363);
    msg.setSource(39144U);
    msg.setSourceEntity(102U);
    msg.setDestination(61312U);
    msg.setDestinationEntity(175U);
    msg.timeout = 631U;
    msg.lat = 0.804497764544;
    msg.lon = 0.907503757189;
    msg.z = 0.800235986493;
    msg.z_units = 174U;
    msg.speed = 0.935072180127;
    msg.speed_units = 183U;
    msg.duration = 2546U;
    msg.radius = 0.735288426887;
    msg.flags = 183U;
    msg.custom.assign("JPAKXAWRJF");

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
    msg.setTimeStamp(0.533906058422);
    msg.setSource(20041U);
    msg.setSourceEntity(168U);
    msg.setDestination(16188U);
    msg.setDestinationEntity(38U);
    msg.timeout = 55787U;
    msg.lat = 0.140166762996;
    msg.lon = 0.561776805704;
    msg.z = 0.204232419151;
    msg.z_units = 58U;
    msg.speed = 0.412482746826;
    msg.speed_units = 56U;
    msg.duration = 62549U;
    msg.radius = 0.169415686013;
    msg.flags = 186U;
    msg.custom.assign("KFHFUYJVTERUPODKSWRCPFAOPDHLCPWPAAUIFEKKETSVYOUGHWUCBNJYVQEXPUKVITGKEJKNMOBQMDDLWJVZUODMUBPOLQGGTSXZNGBXLWWTADHGOZHYRIVEQUJRZPQEZXZRXWXCIBTPNATDDTBSVYMSWZQSQQBAMJCAOMAIFEYHHMLLHNGNBGNMWVFXSNNSWSIUZEMNLKXGIROJXOVTJGQCIDYCBPC");

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
    msg.setTimeStamp(0.65865546694);
    msg.setSource(45809U);
    msg.setSourceEntity(31U);
    msg.setDestination(6970U);
    msg.setDestinationEntity(101U);
    msg.timeout = 15004U;
    msg.lat = 0.320083114228;
    msg.lon = 0.580716597608;
    msg.z = 0.174058520565;
    msg.z_units = 157U;
    msg.speed = 0.108515376063;
    msg.speed_units = 96U;
    msg.duration = 42877U;
    msg.radius = 0.537805378926;
    msg.flags = 134U;
    msg.custom.assign("LFRCJXCGBATZJRPNWNNWVABDHWTSOUCCUUJEWQOJNFEVYFUKL");

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
    msg.setTimeStamp(0.509195247866);
    msg.setSource(19033U);
    msg.setSourceEntity(195U);
    msg.setDestination(38746U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("EDGMJMVOEGAEPMEUVCJCGZPMHLGAXHOLXXPKTLFCKDIJASUBZZHKCNXMTQFNEUOLFHDYCQTLMNARKYAUOYODXRTDUBFSLTOSZNJYVBTUYDHGLIEVAFTNUPHKQGAEVRPSSRUEBWQGSZNJKOKHYYQWQDMPGVGLHWXVRWTNHFAOJIQIRWWOEJKIZRIDVQHLYEFAMFP");

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
    msg.setTimeStamp(0.0568574216195);
    msg.setSource(30612U);
    msg.setSourceEntity(195U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("QGHWMDZYQKCBKCHBHTZLDDUDFROZQZRRFCTSJYESANFSCARVACUJTMEALCTVPGJGZETYRUOPNPDNZOJYGXXR");

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
    msg.setTimeStamp(0.290952021815);
    msg.setSource(50332U);
    msg.setSourceEntity(5U);
    msg.setDestination(10885U);
    msg.setDestinationEntity(183U);
    msg.custom.assign("ZENUTZFSRJIDQWALRZSYAVDEYMMXZLOSHHNMHTODPATLQCHXOKCALYESWGBHFSHZXVTIMKXLFBRRSVBYXZCFXUNFOITJEKURZVYFUNDGRKSZWFUWUHGCETGZACDMKBGKSFOJQOJNEMLDU");

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
    msg.setTimeStamp(0.387157916042);
    msg.setSource(41118U);
    msg.setSourceEntity(202U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(17U);
    msg.timeout = 44258U;
    msg.lat = 0.439972020176;
    msg.lon = 0.121012057308;
    msg.z = 0.631321029243;
    msg.z_units = 144U;
    msg.duration = 30530U;
    msg.speed = 0.59126566065;
    msg.speed_units = 110U;
    msg.type = 36U;
    msg.radius = 0.114221569631;
    msg.length = 0.198485355345;
    msg.bearing = 0.616921742307;
    msg.direction = 218U;
    msg.custom.assign("AMLLJXYPLBKDJUVQSXZIRALNTPZIVLBEDVHXUMMECONDDSJGATOHQJRNGBGRNQFOTSOJTBAXKNEYAYBNIKZLVYDZVGRFFGCRSUCZXJTCRXGZHTWECZNAWEOFEQWIGD");

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
    msg.setTimeStamp(0.0369640146675);
    msg.setSource(51161U);
    msg.setSourceEntity(45U);
    msg.setDestination(61099U);
    msg.setDestinationEntity(41U);
    msg.timeout = 9961U;
    msg.lat = 0.111237223311;
    msg.lon = 0.83093729411;
    msg.z = 0.623260348414;
    msg.z_units = 153U;
    msg.duration = 27946U;
    msg.speed = 0.193425847948;
    msg.speed_units = 231U;
    msg.type = 40U;
    msg.radius = 0.309921858967;
    msg.length = 0.698802122667;
    msg.bearing = 0.489313240267;
    msg.direction = 97U;
    msg.custom.assign("JKHLAMTWHIRBZBYMPEYLHTUOZBNQYJUHROOD");

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
    msg.setTimeStamp(0.41945574099);
    msg.setSource(54594U);
    msg.setSourceEntity(215U);
    msg.setDestination(51724U);
    msg.setDestinationEntity(78U);
    msg.timeout = 53242U;
    msg.lat = 0.919970022798;
    msg.lon = 0.401917535369;
    msg.z = 0.812522388322;
    msg.z_units = 228U;
    msg.duration = 32436U;
    msg.speed = 0.981210628033;
    msg.speed_units = 230U;
    msg.type = 250U;
    msg.radius = 0.672689374909;
    msg.length = 0.831226253284;
    msg.bearing = 0.236563437057;
    msg.direction = 22U;
    msg.custom.assign("DKHAKZNRTQESSQJRAPWZLRERBOEBDGIBSADBJVCLMFXZFRUQLXJBYSVOJMZXGOIMFJCUHWIBPIHDYGKDGLXJVVWRNUBOWAKFCNGLYIHQXWECMZTJUNSRDLMUPQBRUAZDFEEJCPMNSXBKHLWDKMWRVIZOYHJAACQNSUFGLL");

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
    msg.setTimeStamp(0.696709026897);
    msg.setSource(43544U);
    msg.setSourceEntity(221U);
    msg.setDestination(24829U);
    msg.setDestinationEntity(111U);
    msg.duration = 51535U;
    msg.custom.assign("NNILTGCFXRLBUUZRWJIQABFPSTVAKMOWHIALAXQBMPMEMONWVKSJCZNHSKCPCUBIRLFOHEDLRGDVVEJWPUZELZRAFPMYETFQZQCEKDFOJOYMPNNRZSTFPHMZRHGXCGAIDQXEWQEKJNXALDJWBHNYGGGYOQCXWLPWMQPKJQODDKYSXUPIHYTBQXKETKZBIKIYGUCVTOULSVVFDOUXWXDTHVAZYUSETJSLABZJACBGSVDIYIFJ");

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
    msg.setTimeStamp(0.208676675476);
    msg.setSource(61255U);
    msg.setSourceEntity(122U);
    msg.setDestination(45389U);
    msg.setDestinationEntity(56U);
    msg.duration = 47757U;
    msg.custom.assign("XMBMOQKOHULITZSLASWOFAPNBFVNHETXKRSBTHFNWVODRDWTWWLEUBHOCYHHLYGMTSEQMRAGLEOSPWIOOSXZYVXRWYBINVHKKZELHSBGCCUCFTLGKAWKFQRWIURYXKHQQGCPANFGVNITMVDFHLKSPWOJUCBPNGOVDFQEJGBIIXEQEJCMQFKNRUBUTDATXEGJDYZIMPLGAXPDJYCBYAIQJMXDTZPJNKZZY");

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
    msg.setTimeStamp(0.676561424464);
    msg.setSource(17909U);
    msg.setSourceEntity(229U);
    msg.setDestination(40047U);
    msg.setDestinationEntity(103U);
    msg.duration = 809U;
    msg.custom.assign("YKVEWITAAVXYDIAYSVKQCMSMNXUWWESJFFXOYHVSFZUDCQEXANIOD");

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
    msg.setTimeStamp(0.923543970336);
    msg.setSource(21307U);
    msg.setSourceEntity(123U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(81U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.217194025926;
    msg.control.set(tmp_msg_0);
    msg.duration = 40916U;
    msg.custom.assign("IMTSSYCXVOORDOYZEVLPOMNRTAZURAKIKAEHMTJFGGXOGRSWQQQDUSMBXGBWXNNU");

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
    msg.setTimeStamp(0.647001089666);
    msg.setSource(9801U);
    msg.setSourceEntity(78U);
    msg.setDestination(33198U);
    msg.setDestinationEntity(128U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.12745953322;
    tmp_msg_0.z_units = 246U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52098U;
    msg.custom.assign("OTDTAFZFMFFZLBXKQJSEDEHWWKZXXYMZPVTTOMGZAOJWRVWXWYBRCFVUDHWMZLJYQKDQLUAAYUBWNYSCHYENBGFPALARAYKCAJKEQKNBLNTAQDMDECPTSPKOREXXZIVSUJOEGGIIREYNKULCIBUKOTHRVXWHPRPJSSIIZOVQRYDMOXCGJHTPGINZVOCSZLJXNI");

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
    msg.setTimeStamp(0.804601336096);
    msg.setSource(55416U);
    msg.setSourceEntity(82U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(85U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0519880212497;
    tmp_msg_0.speed_units = 158U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11393U;
    msg.custom.assign("ENTAFEJKNBXZTKVAVZPJHDTBQYOCFZEVVHBNJLNZJRZQCCGKNIPZLWMCJEKOWBRHFYYHTIUBRXIMYCYOGBPVWXOUIDCWPOFRELQ");

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
    msg.setTimeStamp(0.781400029049);
    msg.setSource(47552U);
    msg.setSourceEntity(228U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(47U);
    msg.timeout = 30955U;
    msg.lat = 0.858818928477;
    msg.lon = 0.4848966899;
    msg.z = 0.192808189293;
    msg.z_units = 253U;
    msg.speed = 0.190214865256;
    msg.speed_units = 110U;
    msg.bearing = 0.512984290548;
    msg.cross_angle = 0.753428895232;
    msg.width = 0.515501747717;
    msg.length = 0.45623155355;
    msg.hstep = 0.699714682042;
    msg.coff = 251U;
    msg.alternation = 142U;
    msg.flags = 3U;
    msg.custom.assign("PMXYQVOPEKJYEVDWSAWGGPFTZBBEUGEDLGCNVSULEZKQCSVPDZTIZXQTNOMCREAQACPLFNYQUWYHQBIHGBCIVNSLYFHFXFSIAIAGKEIJCLYDMWGAXYNKQXUCGTXMCDBDSLELYSQ");

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
    msg.setTimeStamp(0.25343546941);
    msg.setSource(10598U);
    msg.setSourceEntity(222U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(5U);
    msg.timeout = 24798U;
    msg.lat = 0.0913826384778;
    msg.lon = 0.558817900035;
    msg.z = 0.6363434486;
    msg.z_units = 235U;
    msg.speed = 0.397066898171;
    msg.speed_units = 230U;
    msg.bearing = 0.933943618531;
    msg.cross_angle = 0.812942039915;
    msg.width = 0.33658286982;
    msg.length = 0.323717026946;
    msg.hstep = 0.292928460149;
    msg.coff = 232U;
    msg.alternation = 158U;
    msg.flags = 146U;
    msg.custom.assign("BIYEWPITREZYKKFJIIYJRCSRRLXNTCLDVEWLSVYFJANZQYHAZAHJRUUFAQPCXBEMFKGVKTIWTNOKOWBQJQIAFPVZSKLDTSDPCUXDOXFAYNJBGGJRPGHHEXEISSCSMHXO");

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
    msg.setTimeStamp(0.698776003392);
    msg.setSource(4415U);
    msg.setSourceEntity(121U);
    msg.setDestination(46412U);
    msg.setDestinationEntity(174U);
    msg.timeout = 29986U;
    msg.lat = 0.992240071098;
    msg.lon = 0.899722195296;
    msg.z = 0.235942188112;
    msg.z_units = 190U;
    msg.speed = 0.747856856953;
    msg.speed_units = 118U;
    msg.bearing = 0.625151427484;
    msg.cross_angle = 0.197141984934;
    msg.width = 0.580645492752;
    msg.length = 0.319814832853;
    msg.hstep = 0.709508213731;
    msg.coff = 87U;
    msg.alternation = 192U;
    msg.flags = 226U;
    msg.custom.assign("HJGLBKIVGBMFRSNPLUDYBQYHRJGRXLKOTIPXUGUOWSNDIMHFXPPTJTLYLSMRRINPFOHVBHPA");

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
    msg.setTimeStamp(0.933697326051);
    msg.setSource(57562U);
    msg.setSourceEntity(26U);
    msg.setDestination(45121U);
    msg.setDestinationEntity(204U);
    msg.timeout = 3463U;
    msg.lat = 0.717001800353;
    msg.lon = 0.862566319208;
    msg.z = 0.297435761979;
    msg.z_units = 240U;
    msg.speed = 0.218494182539;
    msg.speed_units = 33U;
    msg.custom.assign("LVXPYKYAXMDEQYVWOUVWTSCFXRASITBDBI");

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
    msg.setTimeStamp(0.834095504768);
    msg.setSource(49959U);
    msg.setSourceEntity(21U);
    msg.setDestination(6497U);
    msg.setDestinationEntity(96U);
    msg.timeout = 10752U;
    msg.lat = 0.935457807515;
    msg.lon = 0.703480474522;
    msg.z = 0.476899782522;
    msg.z_units = 108U;
    msg.speed = 0.774235904172;
    msg.speed_units = 148U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.516354001048;
    tmp_msg_0.y = 0.165905480817;
    tmp_msg_0.z = 0.431469757469;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IQAXSRGCYXEVPKMCMWVGSRQOACNIEMBFPMCYBTFTJYCUJAXLIPLCDYAKZHZGMZCUULIVFPHKWICSOZGTZFLNEYQYVJHSIMOMBLSLEKSHORFDBSUXWVIZIIJPQJPTHQXKAVOLDXYMT");

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
    msg.setTimeStamp(0.00698455673067);
    msg.setSource(30727U);
    msg.setSourceEntity(103U);
    msg.setDestination(23828U);
    msg.setDestinationEntity(59U);
    msg.timeout = 38263U;
    msg.lat = 0.0428072785006;
    msg.lon = 0.0789752890129;
    msg.z = 0.333883118207;
    msg.z_units = 17U;
    msg.speed = 0.0207082918069;
    msg.speed_units = 44U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.690740336341;
    tmp_msg_0.y = 0.351269381207;
    tmp_msg_0.z = 0.453375064038;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JEYONRKQOATZCPHSFWWDIHPFDWNQSQTWKPMEXPGIMQTOCHZJVPAHQSXNRDQGLNEHRULAWJVFPKXREOECUIJEYPFWTDKUAFDIZHEDKXWYYCXNIGVFXBLYIRRIJNTOKJIWVZVYVXDSLHKETPLYTNYKTSLDQFBKJGISXHJSVZUORBCUYBFQHPZUFTMGMQOGSEUVAJZCMQALLALCZIZBGNBZBMPUXABNMJLSUOCGSWAXRTMKBCWVHYMERUOMAVRN");

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
    msg.setTimeStamp(0.505511720761);
    msg.setSource(64850U);
    msg.setSourceEntity(40U);
    msg.setDestination(26079U);
    msg.setDestinationEntity(86U);
    msg.x = 0.984285573011;
    msg.y = 0.436802183735;
    msg.z = 0.453150821327;

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
    msg.setTimeStamp(0.641985193922);
    msg.setSource(10390U);
    msg.setSourceEntity(127U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(166U);
    msg.x = 0.583641826491;
    msg.y = 0.862754116512;
    msg.z = 0.0421560526607;

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
    msg.setTimeStamp(0.0443265072559);
    msg.setSource(6197U);
    msg.setSourceEntity(15U);
    msg.setDestination(1126U);
    msg.setDestinationEntity(80U);
    msg.x = 0.550849604165;
    msg.y = 0.646542015424;
    msg.z = 0.500312624681;

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
    msg.setTimeStamp(0.807641070667);
    msg.setSource(19854U);
    msg.setSourceEntity(138U);
    msg.setDestination(24474U);
    msg.setDestinationEntity(233U);
    msg.timeout = 26767U;
    msg.lat = 0.848784287365;
    msg.lon = 0.990617171725;
    msg.z = 0.246372812845;
    msg.z_units = 174U;
    msg.amplitude = 0.52105972838;
    msg.pitch = 0.697151137621;
    msg.speed = 0.48188407399;
    msg.speed_units = 24U;
    msg.custom.assign("PLTLMBLOLSIOFIZUQOQYUGFNSRSPTDHDLPCHCUQXSGZJYNPXFCGWOYKHSXSMUEJMM");

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
    msg.setTimeStamp(0.388763638747);
    msg.setSource(14151U);
    msg.setSourceEntity(143U);
    msg.setDestination(15777U);
    msg.setDestinationEntity(41U);
    msg.timeout = 59734U;
    msg.lat = 0.200779605821;
    msg.lon = 0.823248840531;
    msg.z = 0.0765928501131;
    msg.z_units = 169U;
    msg.amplitude = 0.780258302251;
    msg.pitch = 0.944581983395;
    msg.speed = 0.387087795529;
    msg.speed_units = 165U;
    msg.custom.assign("HPAMVSUQECZZHAJFDFDDDSHTOCBRIPWSRMNPIKESXTXRQAJRRJBWRJBUMVNGWQMKVQGVLELQKYOYKACJISXCZEQYP");

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
    msg.setTimeStamp(0.0648907107218);
    msg.setSource(47507U);
    msg.setSourceEntity(231U);
    msg.setDestination(56586U);
    msg.setDestinationEntity(18U);
    msg.timeout = 14021U;
    msg.lat = 0.473072267952;
    msg.lon = 0.557638234321;
    msg.z = 0.532223042274;
    msg.z_units = 103U;
    msg.amplitude = 0.44156780104;
    msg.pitch = 0.755991723589;
    msg.speed = 0.289828718164;
    msg.speed_units = 144U;
    msg.custom.assign("QCZYMGZIIEAOWMSGRJOADBKOSZOYUERSGPYZQJLQESUWIMFDSPDFNHXGLIJHRRRBFUYIKETGUTLHCOUMYBPRQAKMCWFAOWWTCZEJELBAZZADVLRFCHWETQLPGXLPR");

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
    msg.setTimeStamp(0.0630466370573);
    msg.setSource(17161U);
    msg.setSourceEntity(178U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.496430159784);
    msg.setSource(53286U);
    msg.setSourceEntity(84U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.913202997116);
    msg.setSource(53802U);
    msg.setSourceEntity(83U);
    msg.setDestination(27117U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.97726690016);
    msg.setSource(6326U);
    msg.setSourceEntity(189U);
    msg.setDestination(26250U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.930878217977;
    msg.lon = 0.881206364722;
    msg.z = 0.828839280339;
    msg.z_units = 220U;
    msg.radius = 0.64999856056;
    msg.duration = 4755U;
    msg.speed = 0.124462601494;
    msg.speed_units = 50U;
    msg.custom.assign("ELMYEXMOJXVXNHEHVPFCJAEFFJNRZOLEPTBKYLOFTLXFTHQWOSGLRBUMKUJIBINWRUOYQWTLJBKDZBUODMCCRZYRDWBPUVGBDCVIDNIMIOQMASCYIXFUGSDEUWJOQDXYA");

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
    msg.setTimeStamp(0.542147629332);
    msg.setSource(55526U);
    msg.setSourceEntity(154U);
    msg.setDestination(49345U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.477556492119;
    msg.lon = 0.895702545294;
    msg.z = 0.69572477259;
    msg.z_units = 224U;
    msg.radius = 0.194547194325;
    msg.duration = 46658U;
    msg.speed = 0.669744799955;
    msg.speed_units = 243U;
    msg.custom.assign("ZUJTDDEZUWZEDWAPYRCZKEGZGSOPEMFCKZPMEIVVQCUDNCUQATGYXFYBJIXFLLGUVJQQSSNNFGDKNSMPPCUVZWZSHFJUHGMNXQVBJCRXAJIARKBHLSXXRAHJVF");

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
    msg.setTimeStamp(0.0109777833163);
    msg.setSource(46635U);
    msg.setSourceEntity(209U);
    msg.setDestination(45174U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.937858490517;
    msg.lon = 0.900492252725;
    msg.z = 0.866903528517;
    msg.z_units = 168U;
    msg.radius = 0.688152115029;
    msg.duration = 60536U;
    msg.speed = 0.0345537429496;
    msg.speed_units = 68U;
    msg.custom.assign("XRFZSPRWHIQWUQXOQXTUFMNWIZXHVLRZUJPCSKSOFAOUTVLCWBYHJKFSHNHUZIRBNTRYCFGSPQOGPUUWLXGJEKJKBAYJTDHFTKRGKLDYTCREQEFMNALIVEBEOZVE");

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
    msg.setTimeStamp(0.0715350173132);
    msg.setSource(43187U);
    msg.setSourceEntity(221U);
    msg.setDestination(24503U);
    msg.setDestinationEntity(21U);
    msg.timeout = 28658U;
    msg.flags = 109U;
    msg.lat = 0.687341461152;
    msg.lon = 0.0603323779837;
    msg.start_z = 0.893828054587;
    msg.start_z_units = 66U;
    msg.end_z = 0.185756068204;
    msg.end_z_units = 176U;
    msg.radius = 0.10452735022;
    msg.speed = 0.149296214984;
    msg.speed_units = 123U;
    msg.custom.assign("KIHSUBSRWASHXYUAMDGIHXDZFSNGLOHUYIFKOVFGCWELVRVABJYVPFFKCTKNYCBHDWXERBJBRMEHYKJULRVODSIQRWSQTNBPWQLLCYKHQCXSABETILXUOMMDUMUXSYFTXLEPWJNOJGWPSZ");

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
    msg.setTimeStamp(0.212511834208);
    msg.setSource(42374U);
    msg.setSourceEntity(167U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(40U);
    msg.timeout = 30994U;
    msg.flags = 157U;
    msg.lat = 0.00948864672916;
    msg.lon = 0.721495156489;
    msg.start_z = 0.868570974256;
    msg.start_z_units = 222U;
    msg.end_z = 0.910140904907;
    msg.end_z_units = 254U;
    msg.radius = 0.959579979005;
    msg.speed = 0.0813261892957;
    msg.speed_units = 131U;
    msg.custom.assign("MXBKWVKKIYCFVYMIOGQXKXNOQVAMFSTHGULLOEDISAIZONFMCLDAXAYCIXRXFBNTEFAEAGQSIJCTTKGBOMZDEYDWCWVOZWMNPSE");

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
    msg.setTimeStamp(0.793980975848);
    msg.setSource(45460U);
    msg.setSourceEntity(13U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(39U);
    msg.timeout = 38811U;
    msg.flags = 233U;
    msg.lat = 0.0638868290558;
    msg.lon = 0.314598755777;
    msg.start_z = 0.467476518551;
    msg.start_z_units = 217U;
    msg.end_z = 0.347471589269;
    msg.end_z_units = 184U;
    msg.radius = 0.737829051269;
    msg.speed = 0.26888229106;
    msg.speed_units = 45U;
    msg.custom.assign("OAWETIOLYMYPTVB");

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
    msg.setTimeStamp(0.849857744487);
    msg.setSource(56013U);
    msg.setSourceEntity(142U);
    msg.setDestination(33479U);
    msg.setDestinationEntity(23U);
    msg.timeout = 59267U;
    msg.lat = 0.665082998649;
    msg.lon = 0.805650195459;
    msg.z = 0.677534275482;
    msg.z_units = 9U;
    msg.speed = 0.351466795562;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.234366684819;
    tmp_msg_0.y = 0.795078649296;
    tmp_msg_0.z = 0.0193669868498;
    tmp_msg_0.t = 0.0482026010471;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YVHLCQLZYRIODQZXQLWBTHPXLHMSESUAPMAUOKEGYCOSDRQMOLGNYKTKAYZZLPFQHQHXGIBWSKIMDKZFAFUOIXCJXCZKYNHSXGTMQZESGHYWRECGWIKXVORZTWCNLPUIHDIKCVAEOBMKMZDMMUVDBJJPTARWTJTBJJNRVOHEWBSGDPAYWAPEVNPAGURCSDJFZLBEXVNLOAPCFJISQOERNBXSGFJHTFMWYQQ");

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
    msg.setTimeStamp(0.101094616454);
    msg.setSource(33366U);
    msg.setSourceEntity(202U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(247U);
    msg.timeout = 33176U;
    msg.lat = 0.417064950196;
    msg.lon = 0.802375801906;
    msg.z = 0.266243644379;
    msg.z_units = 202U;
    msg.speed = 0.80621805482;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.532364592496;
    tmp_msg_0.y = 0.5156057124;
    tmp_msg_0.z = 0.709493606076;
    tmp_msg_0.t = 0.61288870914;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SJNYVAQVEZHBRLIZJELXRPXFWSJMKRFCUMTZDMQAWNXBOQYWWSKIGGBYFTPIDFTTRHYMQPXNVHWXIREKUGUKAKIQNCXSFFRKQYGI");

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
    msg.setTimeStamp(0.501552959844);
    msg.setSource(64139U);
    msg.setSourceEntity(206U);
    msg.setDestination(24031U);
    msg.setDestinationEntity(42U);
    msg.timeout = 33555U;
    msg.lat = 0.0428970875088;
    msg.lon = 0.240013569366;
    msg.z = 0.774640730361;
    msg.z_units = 164U;
    msg.speed = 0.0850412445703;
    msg.speed_units = 239U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.18569429888;
    tmp_msg_0.y = 0.573969682494;
    tmp_msg_0.z = 0.152920925298;
    tmp_msg_0.t = 0.544938760846;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XFKYVRCEZHGLIXDYEYDGLIVODSDEZPUUMHSPVJCARVBLQRZJMSCUIKPTAYLUUKDSOQUHEYWCQZXPNROWBCOQEVEMTDBLXLSRRDVHGUMSFTIJSFPQEBTELNFPPEMQUWNIKSWPFGXOZRZKCGDCQICYBFPBGWWYHKNVDWUJMWQOKJMCYQBEHNAKJBD");

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
    msg.setTimeStamp(0.86985639023);
    msg.setSource(57738U);
    msg.setSourceEntity(119U);
    msg.setDestination(58377U);
    msg.setDestinationEntity(10U);
    msg.x = 0.23707762643;
    msg.y = 0.514339413654;
    msg.z = 0.13710112213;
    msg.t = 0.468822207324;

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
    msg.setTimeStamp(0.99059654895);
    msg.setSource(6081U);
    msg.setSourceEntity(186U);
    msg.setDestination(55330U);
    msg.setDestinationEntity(146U);
    msg.x = 0.841948218501;
    msg.y = 0.776813052538;
    msg.z = 0.248703674143;
    msg.t = 0.745096397414;

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
    msg.setTimeStamp(0.355864151697);
    msg.setSource(29146U);
    msg.setSourceEntity(224U);
    msg.setDestination(38865U);
    msg.setDestinationEntity(87U);
    msg.x = 0.719208996163;
    msg.y = 0.0903216981262;
    msg.z = 0.890428372054;
    msg.t = 0.45897143712;

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
    msg.setTimeStamp(0.472824077283);
    msg.setSource(25819U);
    msg.setSourceEntity(122U);
    msg.setDestination(33099U);
    msg.setDestinationEntity(36U);
    msg.timeout = 15548U;
    msg.name.assign("NVKNFRWSORGLZQHVGMNMMOSLQNKERLHAFXYVUOQSYPBXOXUWEZGBUPBFCJUTZUJDBMNASCGTVOEQNMDHUCKEEYZGDYVJPVIILJENWPTJJWLLSJPR");
    msg.custom.assign("ZZJUIWHEJLFIXAOIBSTORMSPQDFESHMFVDACYEWWKRQRMECHVFKHAWNPXQOVAYVZVGBOIMGKNSTIPJPECCRPDYPPFUNCEZVB");

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
    msg.setTimeStamp(0.133957215463);
    msg.setSource(61469U);
    msg.setSourceEntity(171U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(110U);
    msg.timeout = 12469U;
    msg.name.assign("QRMSVGJYXOQZNUAYGUGZTDLXVQVCPPCTQYBJUEWNFSDRWQGZISEHPDUFHPKVAQNMZTATTIDMKUMNNGELRJLMJOUIWULJJTEPXEOKFQKVHDYXSZLITCSDHCCIULWFPBHRFZWNJIRDQBIDBKSMOKFWLOIMYWREBIUWETSYHLBCGVMMXFAKGLOPVEZYEZWTZYDBROHJFLNPCQGSNZNOVKW");
    msg.custom.assign("FPUUVDUNECYCLNSXTLCDHKWBTUFJIIDELETNMDIIUHKVQUVZAXUCQFQPM");

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
    msg.setTimeStamp(0.500511200596);
    msg.setSource(1342U);
    msg.setSourceEntity(131U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(2U);
    msg.timeout = 46281U;
    msg.name.assign("XYLPHQPWADHLEHAWSJTBSPMSVXRTDGVKEJRXBMRQRWGTDRZJKCNDOKCHUCMVTZRUAJODWSCTLGIQMJNWQLPXFZZMBXFDFKDNEOFEXTQISIAISOROUYVUZNTFPLHNZINQAMKCGOCUHEEBEFVQLWMDLCHDZPQKASVNKIYUHYONAKEYTXHWGYVSYGJBCACBPRLFKFJBGWPBEBRUPIFQVVZKYP");
    msg.custom.assign("MXJIHLCINPMUPKDWCAJGIOFOJPTNQSNPFNFQSXELSWKNESUADYSZORWYDGYWJTSTLSMHCMMOMXVSVIHDWGDWMOPUYFZLZQUHDYJPROQTLLZTZIGVOKZJFPDHVLDGAVHLNFXEYFANJHFXMCWJZMBPRTLBKHGIKCZHCWAUZXIOKRBBKDBGTUWKIXTJR");

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
    msg.setTimeStamp(0.737234393763);
    msg.setSource(52151U);
    msg.setSourceEntity(12U);
    msg.setDestination(6205U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.67964754209;
    msg.lon = 0.435918010503;
    msg.z = 0.0243523012515;
    msg.z_units = 68U;
    msg.speed = 0.370107622098;
    msg.speed_units = 103U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.998675028089;
    tmp_msg_0.y = 0.189876788181;
    tmp_msg_0.z = 0.857007030689;
    tmp_msg_0.t = 0.689794928792;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 17331U;
    tmp_msg_1.off_x = 0.198245928345;
    tmp_msg_1.off_y = 0.517963759399;
    tmp_msg_1.off_z = 0.863886685221;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.230576384458;
    msg.custom.assign("JIVXHACRHGUGCIPPREHNVVSJWIKTYSACVHDEFNCQZILUJWLCASGQXCBLHZZFRBORHUQBMVNPKVPBYIAPESASKQTQUPOYQMNZIBTBENWIYDVGMDELEFTDGJOYXXDAWCYCDEKLFRFAXRNZZUYHUXXODLHSGBURLPNGRWUPUFOJMMTQOMYWMFWAXYJDPQCTJVKGEUSVZFLI");

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
    msg.setTimeStamp(0.490528917376);
    msg.setSource(1378U);
    msg.setSourceEntity(86U);
    msg.setDestination(40096U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.668559918728;
    msg.lon = 0.528676117986;
    msg.z = 0.267427861855;
    msg.z_units = 158U;
    msg.speed = 0.572490268538;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.654057826267;
    tmp_msg_0.y = 0.23028695199;
    tmp_msg_0.z = 0.352860851916;
    tmp_msg_0.t = 0.742757917061;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.279977907341;
    msg.custom.assign("RSRRWAOXVVUNKBKKSUBIJWEOYOBDQBLLGPDMDKXKWNWMQCWLTHSPHXEZVHFEJAJYARMTQG");

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
    msg.setTimeStamp(0.588067736791);
    msg.setSource(9611U);
    msg.setSourceEntity(56U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.53268482037;
    msg.lon = 0.0526766571735;
    msg.z = 0.303173353076;
    msg.z_units = 151U;
    msg.speed = 0.698866738788;
    msg.speed_units = 39U;
    msg.start_time = 0.542775641173;
    msg.custom.assign("LYOPWCYHRMNPMSGTHYNABRZUQNCTOHRWEKYEABBTSGZ");

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
    msg.setTimeStamp(0.741978939382);
    msg.setSource(11615U);
    msg.setSourceEntity(252U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(43U);
    msg.vid = 40242U;
    msg.off_x = 0.989105577264;
    msg.off_y = 0.163746312652;
    msg.off_z = 0.642548189232;

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
    msg.setTimeStamp(0.867103003546);
    msg.setSource(40116U);
    msg.setSourceEntity(149U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(50U);
    msg.vid = 41328U;
    msg.off_x = 0.438424112791;
    msg.off_y = 0.968511070135;
    msg.off_z = 0.000694813718973;

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
    msg.setTimeStamp(0.61377905977);
    msg.setSource(21265U);
    msg.setSourceEntity(34U);
    msg.setDestination(59691U);
    msg.setDestinationEntity(159U);
    msg.vid = 23109U;
    msg.off_x = 0.78867019086;
    msg.off_y = 0.874777622323;
    msg.off_z = 0.641908605868;

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
    msg.setTimeStamp(0.625423176558);
    msg.setSource(59364U);
    msg.setSourceEntity(176U);
    msg.setDestination(46479U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.60961932985);
    msg.setSource(41295U);
    msg.setSourceEntity(248U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.415758883136);
    msg.setSource(24160U);
    msg.setSourceEntity(213U);
    msg.setDestination(26863U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.614731729829);
    msg.setSource(49158U);
    msg.setSourceEntity(3U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(26U);
    msg.mid = 56609U;

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
    msg.setTimeStamp(0.7417287626);
    msg.setSource(55236U);
    msg.setSourceEntity(73U);
    msg.setDestination(62396U);
    msg.setDestinationEntity(19U);
    msg.mid = 22341U;

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
    msg.setTimeStamp(0.0382157569514);
    msg.setSource(34150U);
    msg.setSourceEntity(19U);
    msg.setDestination(41615U);
    msg.setDestinationEntity(178U);
    msg.mid = 30449U;

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
    msg.setTimeStamp(0.499555003738);
    msg.setSource(8212U);
    msg.setSourceEntity(143U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(137U);
    msg.state = 22U;
    msg.eta = 33983U;
    msg.info.assign("GBNSRBHOHCPKQMLHYRCMTQWLPEWFGISZOLTXYPFTHNUKLXTUAILWRYZMXWKXZDRQQTCCKZKZOGSYOPDCINITESWKDHEEJHIZXQJCJATVLVFZWXBWGIWBHFHUA");

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
    msg.setTimeStamp(0.18881249318);
    msg.setSource(53296U);
    msg.setSourceEntity(16U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(156U);
    msg.state = 171U;
    msg.eta = 39948U;
    msg.info.assign("EXILQLBKDFNQDWKNTKLGSUDNONOTPJICFIZYFVLBAVUCTJDYKVZJGVGVCFCDPISCWQOQYCRKHMAUXYPKMIYMVPFRYHTKZEBHZFXZGTOJGHSZMAFXRLKAPPRPZNBCBEETILJJOHVUJOHTNRBHMWECWLNXJKUHDPHLYEUSUGTOOQREFZDSKSZRRBAAYVRSMQAPDULDYRBALWZEGXWSSEDIFOTNVABWMQYCXBTIQWAGCOGWIQNMMQUVSFXPMXGJU");

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
    msg.setTimeStamp(0.916952039155);
    msg.setSource(51213U);
    msg.setSourceEntity(156U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(159U);
    msg.state = 28U;
    msg.eta = 31371U;
    msg.info.assign("NKZGUVVJLNSCDYOAVSHQNERQTZQXNMASIENLPAJORKDMABAAGDRFFCBSCVQQAP");

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
    msg.setTimeStamp(0.941075713951);
    msg.setSource(61919U);
    msg.setSourceEntity(239U);
    msg.setDestination(46220U);
    msg.setDestinationEntity(177U);
    msg.system = 50280U;
    msg.duration = 24016U;
    msg.speed = 0.661180391453;
    msg.speed_units = 192U;
    msg.x = 0.661311217426;
    msg.y = 0.98668367298;
    msg.z = 0.055479830578;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.890870368068);
    msg.setSource(39518U);
    msg.setSourceEntity(149U);
    msg.setDestination(32159U);
    msg.setDestinationEntity(217U);
    msg.system = 18611U;
    msg.duration = 37719U;
    msg.speed = 0.650811332325;
    msg.speed_units = 79U;
    msg.x = 0.530226466187;
    msg.y = 0.548284218848;
    msg.z = 0.897082094204;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.520517546879);
    msg.setSource(53757U);
    msg.setSourceEntity(140U);
    msg.setDestination(37531U);
    msg.setDestinationEntity(215U);
    msg.system = 29131U;
    msg.duration = 10606U;
    msg.speed = 0.986163585489;
    msg.speed_units = 97U;
    msg.x = 0.698202936817;
    msg.y = 0.397335680608;
    msg.z = 0.973096921802;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.0132230248047);
    msg.setSource(29658U);
    msg.setSourceEntity(159U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.213193193276;
    msg.lon = 0.139628883396;
    msg.speed = 0.8545437135;
    msg.speed_units = 216U;
    msg.duration = 56502U;
    msg.sys_a = 52785U;
    msg.sys_b = 3670U;
    msg.move_threshold = 0.594324960814;

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
    msg.setTimeStamp(0.240505708451);
    msg.setSource(38004U);
    msg.setSourceEntity(88U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.836693567313;
    msg.lon = 0.796273810919;
    msg.speed = 0.286238863579;
    msg.speed_units = 152U;
    msg.duration = 10520U;
    msg.sys_a = 31824U;
    msg.sys_b = 5780U;
    msg.move_threshold = 0.367296963148;

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
    msg.setTimeStamp(0.256087814395);
    msg.setSource(28523U);
    msg.setSourceEntity(8U);
    msg.setDestination(4807U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.737328209395;
    msg.lon = 0.612050471368;
    msg.speed = 0.927499452825;
    msg.speed_units = 248U;
    msg.duration = 2333U;
    msg.sys_a = 49051U;
    msg.sys_b = 27370U;
    msg.move_threshold = 0.608004428598;

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
    msg.setTimeStamp(0.833140311173);
    msg.setSource(23169U);
    msg.setSourceEntity(253U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.836523915595;
    msg.lon = 0.884326515431;
    msg.z = 0.212160233446;
    msg.z_units = 128U;
    msg.speed = 0.156586147378;
    msg.speed_units = 197U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.841466877205;
    tmp_msg_0.lon = 0.975635942216;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WZSKQNVNHDHJMXQQZQLQIDLXPQRAPFVXJKDNUZTPPCDCVIBYUIMNBMLKWXPSLIKXGPOMJPCRDEOMLRRNEZNRADBSGJZGHIILZYOUCSMHJVFCKYDHBURTEQPLWYCFDVOSPRDOAMAKATOFSBZGBOYTLRAHJNJNAXCUAFSFLYMEGOUEHEVBXIWFFRMLGYKFVBVIJZZVGCSNACVKJTROJUWWKZTSHPBKTECAIGQEIHTFYWWEDSYXTHUYQX");

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
    msg.setTimeStamp(0.602803728592);
    msg.setSource(14162U);
    msg.setSourceEntity(70U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.704513820049;
    msg.lon = 0.75146699428;
    msg.z = 0.620258873131;
    msg.z_units = 186U;
    msg.speed = 0.284679135455;
    msg.speed_units = 17U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.307763220514;
    tmp_msg_0.lon = 0.847303904976;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CSTSWFUFNLRCTBDALHDXPJBJGEKXVZJBYNOZTEKAGGEXGIWBKYSHBPJDXNHLSUBDPCJPFDGNUEVYVMZCMUKMYXFJWBJBVVLYVYMNSLHMADOUOSQZSRIPIY");

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
    msg.setTimeStamp(0.442007172393);
    msg.setSource(16297U);
    msg.setSourceEntity(167U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.214666184284;
    msg.lon = 0.658873761516;
    msg.z = 0.447017044668;
    msg.z_units = 163U;
    msg.speed = 0.875527855659;
    msg.speed_units = 142U;
    msg.custom.assign("SYAVLDCRQTFOHXAOOK");

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
    msg.setTimeStamp(0.804536003113);
    msg.setSource(16554U);
    msg.setSourceEntity(66U);
    msg.setDestination(28314U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.645554826573;
    msg.lon = 0.470886354595;

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
    msg.setTimeStamp(0.855147716406);
    msg.setSource(41086U);
    msg.setSourceEntity(110U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.140257728784;
    msg.lon = 0.145032206323;

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
    msg.setTimeStamp(0.105034630982);
    msg.setSource(6368U);
    msg.setSourceEntity(177U);
    msg.setDestination(52799U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.399838461518;
    msg.lon = 0.398712553324;

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
    msg.setTimeStamp(0.608504271502);
    msg.setSource(13651U);
    msg.setSourceEntity(165U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(23U);
    msg.timeout = 20305U;
    msg.lat = 0.911816699289;
    msg.lon = 0.153655913853;
    msg.z = 0.912972190051;
    msg.z_units = 206U;
    msg.pitch = 0.888345896433;
    msg.amplitude = 0.378477399869;
    msg.duration = 23250U;
    msg.speed = 0.85763046663;
    msg.speed_units = 113U;
    msg.radius = 0.16518598943;
    msg.direction = 9U;
    msg.custom.assign("BYYGGYRJDWNTIRQDNRFSTNQIGCVZRGSWCIOJPOQCKXBFDCLXLOVXFDRUVKLONCDAZHFUQJCWXXUPHNWDMACTNBOESKFB");

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
    msg.setTimeStamp(0.696702684699);
    msg.setSource(55982U);
    msg.setSourceEntity(86U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(207U);
    msg.timeout = 23147U;
    msg.lat = 0.429069205886;
    msg.lon = 0.991254482895;
    msg.z = 0.897490888231;
    msg.z_units = 225U;
    msg.pitch = 0.0784776100514;
    msg.amplitude = 0.915314984079;
    msg.duration = 36646U;
    msg.speed = 0.123289018751;
    msg.speed_units = 215U;
    msg.radius = 0.718089843395;
    msg.direction = 79U;
    msg.custom.assign("QQVSNXZKWLMUZNHSGFFVARQBMDUSYEKHPKFLWAJKOAGODVMAHGMFAFHGKQKIHHOZPEWCUVSVGVNJTPVIRDMVRDTMGLJLZYPREPYSUYYDPTWCNRXXYROCQUDOYSYEXBYXZAKQB");

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
    msg.setTimeStamp(0.802369525574);
    msg.setSource(13492U);
    msg.setSourceEntity(246U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(237U);
    msg.timeout = 64974U;
    msg.lat = 0.344087786149;
    msg.lon = 0.479408568689;
    msg.z = 0.700901466203;
    msg.z_units = 136U;
    msg.pitch = 0.68739702447;
    msg.amplitude = 0.187898245925;
    msg.duration = 46841U;
    msg.speed = 0.0941206278072;
    msg.speed_units = 12U;
    msg.radius = 0.422371739917;
    msg.direction = 196U;
    msg.custom.assign("EOZOJXDHBPMIGLRWGYTUORTOVBDMIKAFLKUVUXSRLDWEAQFTLJRAUYKEJENNITRMIDOCWWEPKZMHITAAYXAWUJGZYHXTHQYBBJZHXSIQOPRGLUVOTMPSLVJMCBSRNDKXLCXOBPVXGQHANLPPDZSUJREPFKBZNMDVQDZBVLFOGCWCVYZBHWVKKCFAXCPRFRGSFWXMNSNHWBYOFTUSIHWUQDMIJGETSUZVSGYEQNNAQGCIQIKZTQAFCLJENKJMC");

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
    msg.setTimeStamp(0.363250747617);
    msg.setSource(1178U);
    msg.setSourceEntity(9U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(45U);
    msg.control_src = 20707U;
    msg.control_ent = 8U;
    msg.timeout = 0.0646928348624;
    msg.loiter_radius = 0.250610002831;
    msg.altitude_interval = 0.0713933468384;

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
    msg.setTimeStamp(0.447892169551);
    msg.setSource(6428U);
    msg.setSourceEntity(74U);
    msg.setDestination(120U);
    msg.setDestinationEntity(100U);
    msg.control_src = 39226U;
    msg.control_ent = 74U;
    msg.timeout = 0.440748687069;
    msg.loiter_radius = 0.603869346166;
    msg.altitude_interval = 0.25292431956;

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
    msg.setTimeStamp(0.428714519715);
    msg.setSource(21713U);
    msg.setSourceEntity(13U);
    msg.setDestination(47912U);
    msg.setDestinationEntity(18U);
    msg.control_src = 666U;
    msg.control_ent = 123U;
    msg.timeout = 0.215209694009;
    msg.loiter_radius = 0.578700026726;
    msg.altitude_interval = 0.165439961865;

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
    msg.setTimeStamp(0.548832920053);
    msg.setSource(65104U);
    msg.setSourceEntity(176U);
    msg.setDestination(2745U);
    msg.setDestinationEntity(219U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.683668269658;
    tmp_msg_0.speed_units = 25U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.980302729405;
    tmp_msg_1.z_units = 21U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.885284877576;
    msg.lon = 0.060466576632;
    msg. radius = 15705U;

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
    msg.setTimeStamp(0.729977484494);
    msg.setSource(23135U);
    msg.setSourceEntity(134U);
    msg.setDestination(16067U);
    msg.setDestinationEntity(28U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5984363311;
    tmp_msg_0.speed_units = 138U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.852705879824;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.34472702353;
    msg.lon = 0.526390902915;
    msg. radius = 14259U;

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
    msg.setTimeStamp(0.0333896980823);
    msg.setSource(31867U);
    msg.setSourceEntity(223U);
    msg.setDestination(21315U);
    msg.setDestinationEntity(204U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.889321664982;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.627443520393;
    tmp_msg_1.z_units = 214U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.525195617415;
    msg.lon = 0.371399527331;
    msg. radius = 19572U;

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
    msg.setTimeStamp(0.925153399396);
    msg.setSource(7356U);
    msg.setSourceEntity(1U);
    msg.setDestination(18728U);
    msg.setDestinationEntity(80U);
    msg.control_src = 36329U;
    msg.control_ent = 131U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.571511123783;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.677361404147;
    tmp_tmp_msg_0_1.z_units = 64U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.768910911616;
    tmp_msg_0.lon = 0.470421572086;
    tmp_msg_0. radius = 10030U;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.674675194681);
    msg.setSource(62202U);
    msg.setSourceEntity(18U);
    msg.setDestination(55937U);
    msg.setDestinationEntity(62U);
    msg.control_src = 59418U;
    msg.control_ent = 178U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 86U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.333496765608;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.556291243215;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.929163027162;
    tmp_msg_0.lon = 0.535145772238;
    tmp_msg_0. radius = 18872U;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 41U;

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
    msg.setTimeStamp(0.875215113152);
    msg.setSource(35527U);
    msg.setSourceEntity(119U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(218U);
    msg.control_src = 64135U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.986800820555;
    tmp_tmp_msg_0_0.speed_units = 22U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0535556310197;
    tmp_tmp_msg_0_1.z_units = 241U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.183819294206;
    tmp_msg_0.lon = 0.102657264818;
    tmp_msg_0. radius = 59146U;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 122U;

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
    msg.setTimeStamp(0.0769527910193);
    msg.setSource(33400U);
    msg.setSourceEntity(101U);
    msg.setDestination(49222U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 76U;
    msg.error_count = 1U;
    msg.error_ents.assign("XYEJSUANQFIVDAVYRODWHBXAAGRJVRPWYEJEDXOWSKRFTOWWJCKZQHIUPJOBPZOWESMESCTSVOMGHUCZVBMTTIYMIQPRYLUZTFNULKQSKZLFJBDMVVLNXYQOFNJULABSSQDRJPYWANNNDXGWNGDZGGUYFICZIZAYPVQVNUHGQCSKMYPBCKTPKPKRUHVTPRXEXGEQEEDFKHDIZURHHBMXCNSLB");
    msg.maneuver_type = 44102U;
    msg.maneuver_stime = 0.00910438367407;
    msg.maneuver_eta = 49486U;
    msg.control_loops = 2648568418U;
    msg.flags = 52U;
    msg.last_error.assign("CXYIWREOQIPZEGDSKYVDFBIVWUFYUVSJCOMANTTNDDNXRRSDWUQRZYAJOIJATHFJACEZJRZDOHOUQPTEMBWKWRVAMHJMHLMXPSDBTSGXQZPIVESBEYQBDNLTMZEQMVAUPKYXRKMNYOXGJCLLONBALWYNESPQHWWHAMGKNLLORFJVQBUFPXEGPLAIFNKHGXKGBXCDFIKCIUNJHFYVDTOBRCYBFURZAIXSKETTCSGVQLPCWSCZMFUGIULWHOVTHP");
    msg.last_error_time = 0.0850294696898;

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
    msg.setTimeStamp(0.985210031545);
    msg.setSource(12577U);
    msg.setSourceEntity(134U);
    msg.setDestination(61864U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 203U;
    msg.error_count = 198U;
    msg.error_ents.assign("HZWEGGETCIXSABJWQKAJXEFUFNDECGIFVJO");
    msg.maneuver_type = 28563U;
    msg.maneuver_stime = 0.49132806742;
    msg.maneuver_eta = 46888U;
    msg.control_loops = 2495759216U;
    msg.flags = 182U;
    msg.last_error.assign("URWNOXGPRQNFDMXTMIWRWRWAMTGJMEBNIYRTDFAGCULEQAVQAYBMUFAWZXOFMDFPKCSYWNIMDU");
    msg.last_error_time = 0.377719156141;

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
    msg.setTimeStamp(0.735513183995);
    msg.setSource(62217U);
    msg.setSourceEntity(72U);
    msg.setDestination(17451U);
    msg.setDestinationEntity(36U);
    msg.op_mode = 160U;
    msg.error_count = 13U;
    msg.error_ents.assign("NLDUPZGPWIYMQWDDLGPPLCCOPBTXIFUAEZRGYOKCWJAXHLYCTRJUCBSDLSUNRWUQCUIFUNEFMAIVEIOTVOQEVZOAEKGHHJNQLAOHPFBHCCZAPBBKAYJGVZKQYFOITIRJCYXKASPZJVXWTIJHXECTWSHPFWTDZNKBLRJWSHPMVOJMMVTSFKVGURWBQQRYBDSYKFEJBKNNMMFNAVDAXLYTSEUXMHSNGWMTGQGZDIQXHGNDEEL");
    msg.maneuver_type = 8376U;
    msg.maneuver_stime = 0.817802429358;
    msg.maneuver_eta = 65277U;
    msg.control_loops = 3871614070U;
    msg.flags = 107U;
    msg.last_error.assign("VZJGMMVSWVRVXGBPPJVPTOLGZQAVCSGVEKLJZWXQDCKOKOOTVZENFBY");
    msg.last_error_time = 0.109479273006;

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
    msg.setTimeStamp(0.0133123472188);
    msg.setSource(36438U);
    msg.setSourceEntity(179U);
    msg.setDestination(3133U);
    msg.setDestinationEntity(131U);
    msg.type = 232U;
    msg.request_id = 49142U;
    msg.command = 149U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 39482U;
    tmp_msg_0.lat = 0.0737393683173;
    tmp_msg_0.lon = 0.343177356667;
    tmp_msg_0.z = 0.318329289838;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.amplitude = 0.945643351919;
    tmp_msg_0.pitch = 0.428271298768;
    tmp_msg_0.speed = 0.39775977118;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.custom.assign("INDDSSSQTOXTZVWKBEKSIKJEBGKSTGUCTDMDRMLCPMALRQWUGPNYYOADAJXHWBNRUNQCSXETAOJEAMBQIFDWBPJQQFGKZSRXXOOMEDJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8323U;
    msg.info.assign("BKJIZYZBDOOHWJRCLMAKECIEIMONFCRNEQXZHSAPLAPKOPPGBWBWQHWXLYKCDIUHUPWVKUQJKNKITQTEWUJWQOSCOTULXDXGVGIUBZGCTGJNYDYFVJOCGN");

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
    msg.setTimeStamp(0.957480030641);
    msg.setSource(6450U);
    msg.setSourceEntity(222U);
    msg.setDestination(58167U);
    msg.setDestinationEntity(133U);
    msg.type = 86U;
    msg.request_id = 41581U;
    msg.command = 193U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 10783U;
    tmp_msg_0.control_ent = 244U;
    tmp_msg_0.timeout = 0.188535958034;
    tmp_msg_0.loiter_radius = 0.986936474129;
    tmp_msg_0.altitude_interval = 0.861846846817;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51378U;
    msg.info.assign("NZNIRACVIWTHWZWBORKJTVIBBLXFQIRGNFXBYFO");

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
    msg.setTimeStamp(0.779901064087);
    msg.setSource(32375U);
    msg.setSourceEntity(174U);
    msg.setDestination(10844U);
    msg.setDestinationEntity(162U);
    msg.type = 163U;
    msg.request_id = 27947U;
    msg.command = 128U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 38731U;
    tmp_msg_0.flags = 71U;
    tmp_msg_0.lat = 0.124820607722;
    tmp_msg_0.lon = 0.722085924179;
    tmp_msg_0.start_z = 0.575534407819;
    tmp_msg_0.start_z_units = 192U;
    tmp_msg_0.end_z = 0.761908946369;
    tmp_msg_0.end_z_units = 247U;
    tmp_msg_0.radius = 0.118377588474;
    tmp_msg_0.speed = 0.878467029457;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.custom.assign("HCFOEFRTHO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7521U;
    msg.info.assign("EQOMTUKJRAZIQHLDMNYJVAIEHCLEMFZYAAGXRAYDIVXPXPGUVJHGZYCVTYSCQRRHKHUXFUOTSTTPNUVVYPEFDEWWWWLWPFRITRVBSIQYOEMCDGNCUGAEXA");

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
    msg.setTimeStamp(0.823884765877);
    msg.setSource(27550U);
    msg.setSourceEntity(103U);
    msg.setDestination(26881U);
    msg.setDestinationEntity(84U);
    msg.command = 88U;
    msg.entities.assign("DGCNWGKCWTCMZLUTFKVXIYEATOOOQLRZHAKXCOB");

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
    msg.setTimeStamp(0.589104959175);
    msg.setSource(16398U);
    msg.setSourceEntity(23U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(219U);
    msg.command = 49U;
    msg.entities.assign("ABHXFXMDSJUZNFESZLPADCXHGHVMQLYGEFZVELWPARXWCKCGYPYVDJVSIROFTKUUNTHOTBOWHDYXYGPXOLBXTQLIFYDHLRBHOISAZFENWNI");

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
    msg.setTimeStamp(0.292539579951);
    msg.setSource(34277U);
    msg.setSourceEntity(93U);
    msg.setDestination(15510U);
    msg.setDestinationEntity(177U);
    msg.command = 68U;
    msg.entities.assign("SUXVRVERMIISKQNQMMXWMCGZZHCSUUCKRDYHXLQWNIAKRBGPHVSMFQHBUWTUYYIAGNGUWBPJKOTPPLHNUTZTYKILEAEXNMSXXOFX");

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
    msg.setTimeStamp(0.692896727272);
    msg.setSource(9535U);
    msg.setSourceEntity(226U);
    msg.setDestination(25678U);
    msg.setDestinationEntity(212U);
    msg.mcount = 87U;
    msg.mnames.assign("BMEYGFQFWRSOIDXGYYYNRKNSZKLNBWXGIBMBKVNAZMQLLURKWDAEZHNKWYCLQGVDASPEJNJFLREZILJBYWHTCQGCHNVCUXMFMQJUIDINDHXAGCSYUWJPVWACEHQTZPQDQZMHGSCSOBPROBAKRZPKZIORLTVQVFAYAGIKTVIESQLLUOHESIUFXO");
    msg.ecount = 100U;
    msg.enames.assign("UVDTHFDSOABNDFVJBTMGFSBMFYXZLCIQOLQFLEHZGJZYVWEQJINUPZXOBAFWHIRXLZHWYHHMDEWDMIJYKVBYPABYJNZKZAGWECLGLONCPZCKKSQERVRLWTGLABXFGXTPXEPOIQTTMBVQCWIDSAIECVWVUPUBZCDNINASTONQMKT");
    msg.ccount = 132U;
    msg.cnames.assign("NIZOLIQGQXJRRMJEMXJKVWZXLPKMTXUUXXTTDOBZGE");
    msg.last_error.assign("MHRLVDJEMXKNTPODKGPIEFESQXFSTIBZTLRDWIIUUDOQEQXCSYZCHKRBFWSVUHWYIVXGGYVWFIAESNGBLKPBQUUBBSCYZMSPPBXFALBCMZUNNAHNJKAWGJVQCTURGWBYPDOIYTXRFWTZZHJFWCTMFAEJQHLKTRPISQKHVDYVXTJRJSULMAGTXZANGAWYHLPRFYKZMAGCPUCFOODYEOJEQUCEZH");
    msg.last_error_time = 0.755183334635;

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
    msg.setTimeStamp(0.982666923547);
    msg.setSource(38439U);
    msg.setSourceEntity(159U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(15U);
    msg.mcount = 184U;
    msg.mnames.assign("XUDBIAUSLMJWMQQMHNOTFMQLDJXBTTDIGYSMEAHFFJEKRSGUNBMMJHZAXWLDTOIDFYVSNHZWYTUABXBGTRNIZIFZARJ");
    msg.ecount = 222U;
    msg.enames.assign("NGMSXEULCMHCVUJUKXVFOUMFNOQHRBFQQJERCYJLCXGFLCUHMAEDXFCSENEBYWAVPZPVKYIFXRXQAMDKAAZZKGCDELBHGPQVUFDYXYKNSZPG");
    msg.ccount = 11U;
    msg.cnames.assign("GZVCTFDMAGTZALGSUATCYIKKRDHXXWFMHLMPFJSNFR");
    msg.last_error.assign("DJLJCKUNUSHKNGJWEOTKDKKJVFVCVWOACYQNBSXOEBEFFBSHYLUNPQCZSXRZASUGBZIACXJODZEDFKPINFAFAVUGUIZRQTIWHUQNYLOXATSNTKQSTONITPDLZGQGHFMEXEIKVXRCRQXBXDPZLRFKMONILTXRWUPDYAHARELYMNJDPVIZGTQBFLGHICMLMWBBPACIYGWWVQGPJYYMVEJGKPPJSRHFDQMXOYTSSMZYTZRBBA");
    msg.last_error_time = 0.818731882599;

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
    msg.setTimeStamp(0.478078656731);
    msg.setSource(41163U);
    msg.setSourceEntity(27U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(125U);
    msg.mcount = 214U;
    msg.mnames.assign("FLPYAIBODCDENKOEDZHX");
    msg.ecount = 10U;
    msg.enames.assign("INUBNPNEJFYJOBECUQTQLYVDXUAWLSYKYAIDFDUGKCWIUCEWZHFTRLEMXELKZUHUIIBSXJZGFJVQOYQVANIWBHGZTUGAYBFSMMTADMONPTZGPJPATFVVLMZXMLDTARLCGTRQFOJYWFTCCNNMQDBHQNBD");
    msg.ccount = 192U;
    msg.cnames.assign("RUJXZXTKBJPUTGBHSYPTSWJNDHDLLKASWRAMYZTWFVKQHEUZWXCSZOVRXIQ");
    msg.last_error.assign("XMDLXPMXTMZSRZJHPFLYC");
    msg.last_error_time = 0.432982879239;

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
    msg.setTimeStamp(0.456646494668);
    msg.setSource(25149U);
    msg.setSourceEntity(136U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(90U);
    msg.mask = 37U;
    msg.max_depth = 0.987447909979;
    msg.min_altitude = 0.286403516589;
    msg.max_altitude = 0.716148185051;
    msg.min_speed = 0.0626175326538;
    msg.max_speed = 0.142121088916;
    msg.max_vrate = 0.414847231703;
    msg.lat = 0.0609301050147;
    msg.lon = 0.112852421703;
    msg.orientation = 0.789277281909;
    msg.width = 0.0387049154708;
    msg.length = 0.901222470108;

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
    msg.setTimeStamp(0.00297709668347);
    msg.setSource(49785U);
    msg.setSourceEntity(58U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(246U);
    msg.mask = 68U;
    msg.max_depth = 0.760177143569;
    msg.min_altitude = 0.549576272439;
    msg.max_altitude = 0.16749666166;
    msg.min_speed = 0.489459795205;
    msg.max_speed = 0.436587934958;
    msg.max_vrate = 0.547811833695;
    msg.lat = 0.0325834840913;
    msg.lon = 0.347304138914;
    msg.orientation = 0.656946922015;
    msg.width = 0.230006022706;
    msg.length = 0.686111382041;

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
    msg.setTimeStamp(0.395691461015);
    msg.setSource(31452U);
    msg.setSourceEntity(110U);
    msg.setDestination(25491U);
    msg.setDestinationEntity(79U);
    msg.mask = 49U;
    msg.max_depth = 0.244453843961;
    msg.min_altitude = 0.180046834591;
    msg.max_altitude = 0.590394277951;
    msg.min_speed = 0.961897848427;
    msg.max_speed = 0.219373915445;
    msg.max_vrate = 0.416644340622;
    msg.lat = 0.807684240424;
    msg.lon = 0.813384117857;
    msg.orientation = 0.164970790299;
    msg.width = 0.706226452732;
    msg.length = 0.378282964361;

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
    msg.setTimeStamp(0.138517495499);
    msg.setSource(28684U);
    msg.setSourceEntity(40U);
    msg.setDestination(59864U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.218056335365);
    msg.setSource(62076U);
    msg.setSourceEntity(53U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.255429202409);
    msg.setSource(52950U);
    msg.setSourceEntity(55U);
    msg.setDestination(41938U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.768118195599);
    msg.setSource(48644U);
    msg.setSourceEntity(64U);
    msg.setDestination(13715U);
    msg.setDestinationEntity(186U);
    msg.duration = 52554U;

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
    msg.setTimeStamp(0.0512123037749);
    msg.setSource(46899U);
    msg.setSourceEntity(223U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(108U);
    msg.duration = 33250U;

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
    msg.setTimeStamp(0.574781350065);
    msg.setSource(63493U);
    msg.setSourceEntity(60U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(2U);
    msg.duration = 19754U;

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
    msg.setTimeStamp(0.8070045977);
    msg.setSource(12097U);
    msg.setSourceEntity(28U);
    msg.setDestination(26385U);
    msg.setDestinationEntity(129U);
    msg.enable = 253U;
    msg.mask = 44567404U;
    msg.scope_ref = 0.425870376459;

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
    msg.setTimeStamp(0.928826782711);
    msg.setSource(26105U);
    msg.setSourceEntity(240U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(225U);
    msg.enable = 153U;
    msg.mask = 741636724U;
    msg.scope_ref = 0.338092745438;

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
    msg.setTimeStamp(0.643660120173);
    msg.setSource(22946U);
    msg.setSourceEntity(24U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(200U);
    msg.enable = 206U;
    msg.mask = 2730765259U;
    msg.scope_ref = 0.0149951196141;

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
    msg.setTimeStamp(0.567060765415);
    msg.setSource(56183U);
    msg.setSourceEntity(109U);
    msg.setDestination(32643U);
    msg.setDestinationEntity(90U);
    msg.medium = 15U;

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
    msg.setTimeStamp(0.117584692206);
    msg.setSource(17884U);
    msg.setSourceEntity(55U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(99U);
    msg.medium = 142U;

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
    msg.setTimeStamp(0.773666770518);
    msg.setSource(23292U);
    msg.setSourceEntity(28U);
    msg.setDestination(12U);
    msg.setDestinationEntity(175U);
    msg.medium = 250U;

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
    msg.setTimeStamp(0.918647466468);
    msg.setSource(16611U);
    msg.setSourceEntity(24U);
    msg.setDestination(27043U);
    msg.setDestinationEntity(49U);
    msg.value = 0.63191204754;
    msg.type = 8U;

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
    msg.setTimeStamp(0.379657229902);
    msg.setSource(43676U);
    msg.setSourceEntity(66U);
    msg.setDestination(5667U);
    msg.setDestinationEntity(191U);
    msg.value = 0.0749025324556;
    msg.type = 81U;

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
    msg.setTimeStamp(0.347844120485);
    msg.setSource(28024U);
    msg.setSourceEntity(191U);
    msg.setDestination(47963U);
    msg.setDestinationEntity(10U);
    msg.value = 0.187300122469;
    msg.type = 75U;

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
    msg.setTimeStamp(0.70945730231);
    msg.setSource(3862U);
    msg.setSourceEntity(69U);
    msg.setDestination(29526U);
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
    msg.setTimeStamp(0.61209132434);
    msg.setSource(9034U);
    msg.setSourceEntity(156U);
    msg.setDestination(14036U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.109646870687);
    msg.setSource(6337U);
    msg.setSourceEntity(71U);
    msg.setDestination(9386U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.818569509309);
    msg.setSource(54762U);
    msg.setSourceEntity(28U);
    msg.setDestination(286U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("ZQZUAWCUVYYGOBVTFALQMJAMKTZRWYECBXHQDWRMLNPEEJXNPWKBHAFJWCKVLQBJTFTCXVWZKGAQNEQRNWETODQATVFZYWBMMUMCMGLDDJVYUJBVCRKRPRHGSISXKVHCSZRCEPOFMNZWUZYYIDOUJGKGPXBSVJHXGHLRNUTVXMQXRDQHHIPXSIQTNSIGXFOOSRUBFOELWTSANCEEHFYDBKECBDZOPFNIN");
    msg.description.assign("ADXHKEOKNYLJZCMHQVNAUYHSXMITUOUTRUDYQLYVAVHCUTEBHIINFYJDYKPCCEGLMWAAXSTIGQUIOPAEJGBIVWRKQZWSEXPMKZTFPPNPSQGGAJAWZBDGTTRSEIIPYXQDTWHTOEWMLYKHVERFJQZFUNJPJCZMRBVSWDOFULQVHJEYZRCOSXZXFRVARRBZNFJMIGKJGXBPWCETXILKSVSHULDLD");
    msg.vnamespace.assign("ECSKEUGMLXOAQATBSZRHGZJDNJVHJNJILHSSMLFQSXWPYXGRXWYOMNAYBODKIPKKRXNDUHYMQITFJLPTFAKZSIRGACIVALPMTCOFOSOVJTYPYHPWABEXKJLFQDVSFEYUMDH");
    msg.start_man_id.assign("EBYCVPXTOUFXXEMUCXGUIUOFKNOJEGNTKFUZRYFBZTWDJFVAGKRG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ISOGPJIULYZJUHBQYFXFMCMVAFGHALVQOPZMJPDAICZXLJOXZYFKQMSWDDUDLQJXSRJAXLTEBAXBUAYGHXFCQULRWAEMSREUEKPQTWDLOZECAHETSCHHJONIJOYIEXVGDFSKTKYCIFCKKZGHDTKMKPNHCNVGUMPNHVDRNMBNVHFQSDGESYLTZ");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 56113U;
    tmp_tmp_msg_0_0.custom.assign("NRVPWXNPWSFLPJVYMDAOSXDPIUZXKNLWF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 2U;
    tmp_tmp_msg_0_1.angle = 0.592818533355;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PKDTIISBHHGNCSURCLQNWOIHKGJYWKLZJHOINPMBVTURTOGTXRFMHSOJAZGYMKUSDZEZEOZJXALLQDLDMAIIWKPTXVFAIDQRPWLJZRHOSCQAHSIRGPVKEBSMLNCXUYUBQTNUQXOBXPCBEESGOPPAVYIDYXZALYXWGDRTHETQFRFCNXKQGUNKBKISFNOWMNGRZA");
    tmp_msg_1.dest_man.assign("VFMVPBMNTPIKWDPMTYUEQHLRUDXIJLJDVOXQVZWBYTHMQMDBOKYEFTOSEFSAFYLAKRSIRJWLBAMGNQXXGGLHTDYGBXMKAORDQNSPECBKTLAUSNLHOPFRAIVNUHUDVUGZCNCZRUJQWWVJQCOKOIIZFCEKOXHLETBFLPPOACSXJHZKYYJVWUJY");
    tmp_msg_1.conditions.assign("IISGTECVQPBQMJOWZKMRIUVRWDLVKIFPSBUFAYOMCHNDJCQGLKVRQJYWFBPYW");
    IMC::SessionStatus tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sessid = 2710505973U;
    tmp_tmp_msg_1_0.status = 90U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanDB tmp_msg_2;
    tmp_msg_2.type = 56U;
    tmp_msg_2.op = 17U;
    tmp_msg_2.request_id = 17102U;
    tmp_msg_2.plan_id.assign("GVWJEROXUNGOJATSTWEIZFHZFUPYPMYRQJMVSHDPMSUGTSHYNBKDIKZQMLPGEIRNEJLFWJWOXKHFYQSQXAIFZZUVPHFVSXHRGKMMRAGAUOGDQSSJBCCUDGNJLEEKLOMSXJVJIVNACQHPFKEBAINWAYNCXRBZLWJQGCURWILSPXQYBMRBUDCLUCTEZOBPLMFOYDINDAIKEXFKRPDGLYKBHVAAVCTRBNWNMVEXDTOL");
    IMC::DepthOffset tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.125934198765;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("GKXSHJZZNVJGAVZZGOEEDLFOIKIYIDGXWFYXZKAUSVMAFBTRLWMCYYQUVUZVDPGIAUVMCVAFWOJPWHEYMUPUMJXCEBSPFNFMTVRZEQY");
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
    msg.setTimeStamp(0.22946456248);
    msg.setSource(6138U);
    msg.setSourceEntity(203U);
    msg.setDestination(47439U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("SMBJMDDHOKGFXUNQCMSWYNVCYKASPGZBFPZLJYRFBUZEQWXHNUTPUWJDDEOCAAZEKZNQEVIQLUORSNLZJYIDJOQFWCHFGOEJRFMNITLJQA");
    msg.description.assign("RQZRVUBUONIFGFPYQBXVLVDMTDGLEXIHSHASNVNTAPWOTFSZBQOHLHWUMDOBAVAXFJLCZLFTJDCSAHCBTJWNKKNWLHMEQJVKASRIHCEWO");
    msg.vnamespace.assign("HMZRJDGSOSTCYLOSXHVWYNPUXCDIIUNMQEMOBSFRIUBXVPAUALXZZDRWGDTRLPXWMPCYCXNELRGQPKIKAZTNLEQQYFKMFQYNJTMBUNRYTVHTJHTOCSOHYSALUABJGHNZWRUAKXWFFIAJOJQEUCG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KAHTEHUNTOXMKNFFWDNDBMZFSXNSOUAWRLVZWWWATMPCQDNJIWBZRQJELQKLYPMGGVUKAPQXLFHGOARNHBHQOCEZVLTCVFLUCPCSFDNDHHVOTUGQBDLTAWFKRJXLJZVUTPCFURVDTAEMSF");
    tmp_msg_0.value.assign("NTXJGOLSPYWVGLRCGNIOQDAUCCEXJVAMIJQEHQGUOEZAVTRCBBAHVGNGUIJRMBXBEUBOXWEHLYGEERKOZSQPNWPLEFIDIOSQVLNLRSVPNYDJIUPMPDLLWMQTFCYAZQAJWCZIHEHJTSDAKJBSQPZZYCHUDDMIVTUOJBTXHZSLWYPKJRWWBMMTVQZFRFRKOXEUAFMKNYNYPXTUHTWVKKIRXV");
    tmp_msg_0.type = 154U;
    tmp_msg_0.access = 103U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IBIWJBAPDKAFAQHXAEPRNQZTXDTGTXZXKRGLQRUBOSOMHOYZCDDGKNV");
    IMC::CcuEvent tmp_msg_1;
    tmp_msg_1.type = 25U;
    tmp_msg_1.id.assign("EVFWSISKJMMNRBFUCOXMUENZWWRMSQUCCXMRWOXTQQQNLAIQGZXRYDDZAEOSLREWJVBKARSYGCIIOLCRVFDXDCGGRATHGWTJIBDQMNMCARZXZUOHUKDWIPUOZYDUZUJFEFKIVRBECPXEVT");
    IMC::DevCalibrationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.total_steps = 59U;
    tmp_tmp_msg_1_0.step_number = 15U;
    tmp_tmp_msg_1_0.step.assign("UFTJECZNLNPVOXVVYVWOLCTAJQHPRFAMDNRMBJRGBROFEOWAMUXSPECGBUGEDURAPOIJOCJJRZSCSSLJBUPCCISLKYDZOUBNTKZDPLBKEDZJLNVNHMZKYERFIQVLEYAHQBUHFZFSNSUCITFYKCTIWHXBGYKWWMFVEDXIWZPQIYJGFMAZRKLYGMWSOTCQAKMXMDLITUKQFHWDZGW");
    tmp_tmp_msg_1_0.flags = 242U;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryLedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("CQFVEIICEXXODQYCCWQGDLGNAQVANOF");
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
    msg.setTimeStamp(0.322546174561);
    msg.setSource(33587U);
    msg.setSourceEntity(185U);
    msg.setDestination(52740U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("QYKHZNDAKWSDEAFBSNJXQTOXEKAUNBWRDJATOILOHLHRIYZYSKFEKBSVTFKUVINOQMITJLDMIWGXDDMLEOZKOUZBLKSUYYCGATGURQDAAZMHXVPVWXWYXLZTHRERBZGQFPYHFCBCYJFSDTICCJWMNBMVIGVGHTQUYUNLPOIVWJNFOMXISFTAJZVMCCLPUWRRTMPWDMNUEJEXKHGDOSUEOFQAQBHPRZAXQCP");
    msg.description.assign("ENEELNLOBDEAOGMKSEE");
    msg.vnamespace.assign("WRRCHXSMCPAVRTNKRIIGGSZSGIFTWHMIWJFUXYCJMPIAZHNOTIBKQWUGSBANAFJOGUCQYVMYVCYLYSMXLULTDWFRKHZRTDAFN");
    msg.start_man_id.assign("XIIBSWEQRUTJSQKPRGQGJGFHBFO");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NPDOTOXSVANKCNMRVJABIBAZRFPXOGYTYVSALHULMYYDLGAIPUSZJJTEGAMJYDPPSPDFWEGSBCRXKQMOUFAJGLETMHIQYUOONNOWTXUFNNMACGWJXLBXLLRBZFIIVKQUPVTGQWDVVHNSUQLBHSCAUQSBFORMZHZBJPMTXWCBQECEICOIXKIVWWEWFHKYKASJQUZYOVKGJSWMHJDGLHZKIM");
    tmp_msg_0.dest_man.assign("MMANWYRQWUJPEYBUXPIAADQFUWXQADJLKIQJNDETFXGSGBIEYAROTAGLDRSYANESWHPVDGSVHBCPRBFZOBGYLXLNKHYXTZUCOQLZWTDVJOXNPXBZJJGQRVIKTHK");
    tmp_msg_0.conditions.assign("GOIZENHEPSUJHPIQMPVDAMSBCATRFYNQSZFFYUHNBYAFIKTOJPXVD");
    msg.transitions.push_back(tmp_msg_0);
    IMC::LcdControl tmp_msg_1;
    tmp_msg_1.op = 202U;
    tmp_msg_1.text.assign("IYINBSIGAZAAEKCNDGFWRJSWQSEGLJPDVVZZFXAPRVVXTHYKECERRUXRESQTIAMBXMWFRPOFFJLQGRFLC");
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
    msg.setTimeStamp(0.395083318727);
    msg.setSource(1731U);
    msg.setSourceEntity(178U);
    msg.setDestination(1016U);
    msg.setDestinationEntity(95U);
    msg.maneuver_id.assign("PTYSFEAAWRNIFXKXCVFXYUIMHQBJACWJEPUUUQNHELENOVBOMOWBHSYANGZVBFMBXIWDKBSZJRUXVHIPZMJDVRBTGMCIMYXHDYCKSYDRQUPPMTFHHSZLKTUDLGWLHGRVGGEYXMRJYQCDRZXDNHCIBSWEVPLOARLJOUJWZNOTGKDQQGDQVYSZMEBDFKALKKWSSXCOBJPRIMCNANPVQWP");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 2882U;
    tmp_msg_0.lat = 0.717903822536;
    tmp_msg_0.lon = 0.691959818927;
    tmp_msg_0.z = 0.344146910736;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.0360244970179;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.custom.assign("NCAKGLBYOXFLIGFPPWCCNYOYNCENVSPTXODUZHPRDXXKDESRFSPTUDTRNNAEUVYZJWORLSRNPWXITTWHTOZFUFZIEGUIQHKQJMQFAQHALMWLXHNWYJDZLJOZQLWZLHPVDIODCABCFSQWXSETISDHBMXBGLRZKXNWYTPQBUJRTVUYGVCOEKZNJFHEVELOMDSUKPWACKB");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.721308537541);
    msg.setSource(8691U);
    msg.setSourceEntity(195U);
    msg.setDestination(56145U);
    msg.setDestinationEntity(158U);
    msg.maneuver_id.assign("CPJBJCQXITFKIXPYHZJXIUMRKJLZATDUYNJDGCHYUNMHFGDKBLPREHIZSLZWAMIUSRVQKWJVIDXPX");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 37992U;
    tmp_msg_0.lat = 0.627625585101;
    tmp_msg_0.lon = 0.361067539667;
    tmp_msg_0.z = 0.386745402487;
    tmp_msg_0.z_units = 48U;
    tmp_msg_0.speed = 0.01543525191;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.bearing = 0.159242307344;
    tmp_msg_0.cross_angle = 0.814939405868;
    tmp_msg_0.width = 0.161791424682;
    tmp_msg_0.length = 0.475263126739;
    tmp_msg_0.hstep = 0.462248483581;
    tmp_msg_0.coff = 17U;
    tmp_msg_0.alternation = 17U;
    tmp_msg_0.flags = 81U;
    tmp_msg_0.custom.assign("SLZQFAQLALQNCUHXTGWKRJDIDJSMAZIFUDTWKXLCZLGEEONGUMWHQ");
    msg.data.set(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.993087735528;
    tmp_msg_1.x = 0.136151150328;
    tmp_msg_1.y = 0.260397048946;
    tmp_msg_1.z = 0.135089570448;
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
    msg.setTimeStamp(0.578197410563);
    msg.setSource(42735U);
    msg.setSourceEntity(80U);
    msg.setDestination(30474U);
    msg.setDestinationEntity(247U);
    msg.maneuver_id.assign("OILTMJGOHAHKOBFFWLFCDGAULMJSHJAQBQIEEDZMDTIEXHZCHXWGYYYPKCLTHQPMRWJALVTFUTECJTGQBSQSWGCVYHXTKRRQECBPJYFUGKVYNUZKMMCVKKNPQTAECFCWPWRNZJDREQAVFLEHUDNGFXBMNYNRKVSXRIDLMZFFURALSPXVTQZIMMPHOSWBTIOXRAGDUUIZIKOBXD");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 2078U;
    tmp_msg_0.name.assign("TNTNZJDUWIVYUEZKXSBNEJPEUGJRSMQDQFAXDOVPVTQFGHMBPVEDKRCBSSWBQTJHVYSXEUHBPAEKMPDWOILFVXVMYPSIVAYRKQUJWELEJOSRLOHBIZFJZCIPNYXCZVYKDSXPIKIWMLTTCHGMGOHUQWDBTYMBNB");
    tmp_msg_0.custom.assign("HTDHSACQTQBCVQAJPJTFZBZEXVLVKKMIIIVPONQTLJNYWPGFBORHMSFRSFIWVAKOYULFEBQWGZSZIWDNYEAXMVBCJBPUALTJEUXLRGAUJUKRKXLPEMYHTHHZHNBOZIZRJWZYOPVQKJOGDCCTDVYXEYQNCTSKMCGRTEANDKOCIHMXDILZSOZESUIVLBUFWGMKRPRD");
    msg.data.set(tmp_msg_0);
    IMC::Map tmp_msg_1;
    tmp_msg_1.id.assign("UACVXMFUFNXMUMJQLLHSOWIABDPJHPBLRTJXUZJCCFSRFODVYVYZSSKIZBGIUCWPNJSQQJVEODWJMTHTJPMBGLGDLXPACADVMKYGTEHTRAOWHRDKXFZWWUMSSUEKISRACOTFGZCLG");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CcuEvent tmp_msg_2;
    tmp_msg_2.type = 126U;
    tmp_msg_2.id.assign("TADOWDMBPKKOHQEKTWKRXICZLXFTZCXHGUVNJ");
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 152U;
    tmp_tmp_msg_2_0.angle = 0.0397971084971;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.942967252418);
    msg.setSource(25792U);
    msg.setSourceEntity(108U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(153U);
    msg.source_man.assign("LCFNKHAUPJZGXDVEFHKRYMTHIVTWGFIDYDSLWYPJGFETGXDJOLUWNWINWNXGAVUJTJRORQXWPRDISALPICVMSUVOCYMJQSEHJS");
    msg.dest_man.assign("GPEUTOUEAHFOJRUFSQIKKRRGJYRYBJQBBVXCTDNAKHOYZZEDKOYYLKJASWEGIYRUBAVCYQWUXAJRZBOQKNLKDDUHM");
    msg.conditions.assign("UVZASGXRAASUTDSDDRXPWHRAWMLQROKKQJNJEIXNSUKTYYDXTSFYFHYAMRGXPQJFXZBMIZHGEIDOBNSLMARSVKJJUHQYBFOLPGMUCFOJELQPZLQLITZOLAYFLIPUOVNGEJNWKIQVDQMLZZ");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.088757920613;
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
    msg.setTimeStamp(0.0502372880524);
    msg.setSource(55793U);
    msg.setSourceEntity(46U);
    msg.setDestination(46174U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("WGFSUIBEEKDETLMSMINMDVEWNHASSHQUZICVJRBFSLXJUGWBJFVMBYCJWVFVNTUPIZMRCLPEDPPZDZDDVAUOLNKBLHFXZJXAUITMFJONRDVEZNQAWWSWVNKKABQYNDMQLAGAZFXCILTFECHZOOEVAGKGKQSZTMSSRIBTHARRK");
    msg.dest_man.assign("UYDBMKBIHNQWXDZKLABSEDMEZBXUPBTFFNCRXXIUWMYAFKMVJIVLKNGTHQZRLKAYXDYEJWFTSTRWOGOLFXZJAPNWMGEFKALLHQSCTVYVDSOIWQCQSMYHLDAOTSHAOJHVFNGEUCJWMKIYNNRKECXRCYTSNXRFUVIIPPNQWOCUJJNZROLBJQYERPBDFVWRRSXCZMIOPPKUZMVIGQHAGEHZPUPOBEBAZUGVBLDYVPGTJ");
    msg.conditions.assign("GUWQWQSFOLFHEJBOZTCHPIKBVLLQZDXRCNUJWNXSOMZBILPQRJJKQFGAFTTRSPAZURKNCAKTRWTHXYEGAFDIDSNGXVADDFRUUSAQI");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 192U;
    tmp_msg_0.goal_id.assign("XGXIMPRCDXJWBMKAZETAWPYHKDQWKBMYDGSALEHFHQBGZRIFIUEISGQDFMSAWTZHKNALBNUCLQPGGLYEKRCDVKLFRCPSYENMMZJODVIPKNTORNCTPOCJIBRUKTXKFNHPFOWQZVAEBJJRGGTEHARABBZVNCXSIBYOWOSYGSGZTYLTDYMTUQNPQADWJ");
    tmp_msg_0.goal_xml.assign("OQWXEQXEKRMBWKGUBXEAVNDNLSZRQHICCRPNLQCEJSMVCMAYWTOKOSFNJLHXZSTIYDNHRTNRIOOZLXACAMQDRPEWSZBWLTCQJRTPCELHMJBVJGKUNYZDDPVSUHJKIFSQ");
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
    msg.setTimeStamp(0.179651825786);
    msg.setSource(26702U);
    msg.setSourceEntity(21U);
    msg.setDestination(19152U);
    msg.setDestinationEntity(0U);
    msg.source_man.assign("DEERYPXDPGDBDDOOCLGWZDVARIXTJHQEIHLGKPCWTLIREYMQNKIWWZCORFONUPBCNPAKYKLJSICVMIVKVYHGUZBYNSPFOJYFDBSYAOQDEMSJHIUAHUFYPEXFTKJKGASOLBJEKLDCZJSUWJWMRHVGYOSMLEOPTFDWLQXG");
    msg.dest_man.assign("ZKDELFFRSWQUEFPSNWUYJDSQNOTHKXCXTUZJPUWPZNRODZJRIBRPHEIKHMOVMFMUDYWCNGYOYVSZSSFCYOLETBQWVYJPKBAGJGRFSNUTZBCQHQTDBREXPXXZAVJBYKLANPNFTICGMZBQHOIKNAFHADBCLGLKDGHXVYMVCMELKWIQDDJTMWLKDFESMJZQLUASBVAQLJGVIX");
    msg.conditions.assign("VHLODNHDXVVAVMKALYYSBKZEGVAAQYQTRWJPBOLDDSUTEWFEJTFQOIYWXFGXOERSDJHNCCHIPTLACDDXECNSULPVGWJQEWJPCKNSRBUXEVFIUTZURFGBLPMYDLNPCMGEDCFMQGGHCBISZKSAGKFIAOFHHVAKZLZSFBXHEPCMJMYVWTTKINBXQBRJHHLBJOI");

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
    msg.setTimeStamp(0.78786448831);
    msg.setSource(13940U);
    msg.setSourceEntity(162U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(144U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CNIPMPLTIIZJSHVQAGGZSRBUQC");
    tmp_msg_0.description.assign("BWMWQURPBDAZRWOTNHEQHWDDVPCPWGNISYCMYEYKFLMWJMLGXMCOSZPCMSWZZKEXUMNKGJJDSQYWBAIHXYRNOPYEYGR");
    tmp_msg_0.vnamespace.assign("ZMPOKLUUFJRMOQFFRIKHGCDTEKYEEBNKSYXGEDOKEJXLNKGVUOPGZNWCMNTSBIRVRONUWVAYBRXJQDQZQAKSMCEIPSJARXXXPDSDISMLQLXZLYTPSJYDIYGGCGTOYUXULHNB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HUJDSVCPGXOXKFYBUNQBEBTQRULRITEZZNEZFEFRZQJKDCGVMTWQVFLMDLVTQWCDCLHRUKNROMLINIOSSPKOZ");
    tmp_tmp_msg_0_0.value.assign("UMPREUHDYSZGVCYEQBQHXXOQVSAIEVGHYPTOMKGZJGKKOCCVQDHNPNVFGKYYCRQMDCZDOWIISIANKEGCBZPUWMAZSVZOLUMBTDRLMNJLFKLXFINCBIHDJBVVJASFSDROJHIJVRIZMKFUAEJKQESBUSTNRYQWQDHWGFNKOWAILOCVEJXYYWYSTCZZACULARBTPGFGPEFMMBRUTLFPTOPSLBWUERWLXJKOJXXBTQWMW");
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.access = 218U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WEGNITKFCOASBHPNFLKDVJGTCGPZJHGHOUISDHKKRYTXWQANVBQXZVABUAKWFBLYFZRGUTOCUNNIBUOCWVBVHBICWXFMRMDSNSFZHAMAPURMYNMCOUEUDCZOAJWJTFGLQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HHAGYQWGXNEAKNQPIHJGIJNTTJFHDXEJQVYNRYHJCFWKTMPWUWAJTZLYMMNVDGCCLNLKOIFSCKHKBGEKIEDVHWQUDPMBLGOAJQJPOOFCOUYPCFJVBZVWZNUYYRDFKCYIMTFQXSZLMXTGTSMHHNVPVADRUSBE");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.524030113919;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 3318U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IPGAJHNICQIPAEQTUZQPHZMDZIDXYLWGEPNJCIBNFMMDXBNRGJRHYTVDVSAUQYXIJSRZGPCXLSVSU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op_mode = 242U;
    tmp_tmp_tmp_msg_0_1_1.error_count = 20U;
    tmp_tmp_tmp_msg_0_1_1.error_ents.assign("KUUNRCGJMUGGKFJVDLKYDIAJNVXAXFNDPAQEEZOWPOHJLSHKEWLSWPGODPUFCZWGNKQJILBZIBFHLDLMVRSOWFMJSHCQTBPAZSYRRCLYXOXKIVIPTWTOYBIRFMXJSRIHYDMECPTAOATZLVP");
    tmp_tmp_tmp_msg_0_1_1.maneuver_type = 35471U;
    tmp_tmp_tmp_msg_0_1_1.maneuver_stime = 0.515115475081;
    tmp_tmp_tmp_msg_0_1_1.maneuver_eta = 1418U;
    tmp_tmp_tmp_msg_0_1_1.control_loops = 1039479567U;
    tmp_tmp_tmp_msg_0_1_1.flags = 93U;
    tmp_tmp_tmp_msg_0_1_1.last_error.assign("LAAHZHPVJFUD");
    tmp_tmp_tmp_msg_0_1_1.last_error_time = 0.393268006876;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ImageTxSettings tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.fps = 54U;
    tmp_tmp_tmp_msg_0_1_2.quality = 163U;
    tmp_tmp_tmp_msg_0_1_2.reps = 201U;
    tmp_tmp_tmp_msg_0_1_2.tsize = 211U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ZYKQOXHJRPKTWMFNXBIMLXCOERGXYFGTCYHTHYWB");
    tmp_tmp_msg_0_2.dest_man.assign("KHQGFGVOBYAODSXQAAYRENQOREQL");
    tmp_tmp_msg_0_2.conditions.assign("VCXXBCUFIPDPLBHLKFEHCCWPCMPBMSJVUHYKZQGZTHWIJLMKSULQMRYSELSVMVXRZFUNVRAWHEWPTXBXEIZONGOCNRKVVWLSBCANZXSODOWEABFOMPSYJLLSPQDRRYYLEPRTNMCQIUHZJYZTEBQVFXJVFHADTCZTYYXTIHMONFENQYAXWMDHNGUGJQAIGWNAUWFSKMYBTIGKLUZDGFPOUOR");
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("YXGZEHGJJVBJOUEXMQTVBPNJKCTAYNCXPHSWCHILMQYSGSZAOUDDBUTDJQRRCNISSHJGMVCAHQTGTPJLSETDHRHONVQGYDEAEWGPHZODYVBMRWKSTSIYZROWCUKVVX");
    tmp_tmp_tmp_msg_0_2_0.visibility.assign("QQCWOVBBEM");
    tmp_tmp_tmp_msg_0_2_0.scope.assign("TOKMFIRCSSTOECKGTIOERHQOPXIKQOGBIEBHCKLVJXCGTJOEOWLFKLHTKBVDKSBTPQUJPBCXRZEBBZAQISAUKBPDWZ");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VehicleFormation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.715207438741;
    tmp_tmp_msg_0_3.lon = 0.41280425095;
    tmp_tmp_msg_0_3.z = 0.770938705381;
    tmp_tmp_msg_0_3.z_units = 99U;
    tmp_tmp_msg_0_3.speed = 0.54924081064;
    tmp_tmp_msg_0_3.speed_units = 63U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.x = 0.078718003529;
    tmp_tmp_tmp_msg_0_3_0.y = 0.392847431241;
    tmp_tmp_tmp_msg_0_3_0.z = 0.813409555257;
    tmp_tmp_tmp_msg_0_3_0.t = 0.0507666533437;
    tmp_tmp_msg_0_3.points.push_back(tmp_tmp_tmp_msg_0_3_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_3_1;
    tmp_tmp_tmp_msg_0_3_1.vid = 11231U;
    tmp_tmp_tmp_msg_0_3_1.off_x = 0.291637933409;
    tmp_tmp_tmp_msg_0_3_1.off_y = 0.469395539886;
    tmp_tmp_tmp_msg_0_3_1.off_z = 0.0530853174952;
    tmp_tmp_msg_0_3.participants.push_back(tmp_tmp_tmp_msg_0_3_1);
    tmp_tmp_msg_0_3.start_time = 0.428977518639;
    tmp_tmp_msg_0_3.custom.assign("VPQZPIXAVDEGUTVJZVKIDKXIXYADNQTYSPVJJAHWMLTXTMPFFXZWRQILCOANHOQPPCDWUYMFHPGDLNZKEDGAITJLIGDXIFWWCNGOSYSXMAVABESUIYORHUCMFLTGJRMWHRBOBKOHEKUYBTWAHVDKSGNYSONYZZZRKRYYZBVFIWDLMSZMJJLREXRORJFQKFLEBGHGAWUBCC");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.0499221782974);
    msg.setSource(24481U);
    msg.setSourceEntity(212U);
    msg.setDestination(18874U);
    msg.setDestinationEntity(113U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WHYYGAAYSWLJLFUZOWNFJFCGCOANGYBXXOSTUEMPHMTTSJSCWOKANWJHDWGFKXCQIWGVOCPEODJZEBOMHMEHFUCXVFKQKZZOCUMGXLXHZUJFAWAKCTQBRIKKIMLLXPBJN");
    tmp_msg_0.description.assign("NBQPEIYUBZQISEWKWAJESXJUMLTZNPQBOSCLQUYUSVVHSNXGTYFRIKLGHIIXDJKHMQOAWYFCMGUPRAQLBZQBBEJEDCLTZMYFFWRBUPRBAGTGYCEXSGIVBAMOQRFUXXNMOZKWOOHYXVWIVIRDTNODANSEJXEHEDRHVHTUZKCJTTL");
    tmp_msg_0.vnamespace.assign("YVSVEAJKIGWERZTCCLVRFUQKZYWGAACDAFQPJIJXZNSPGWWMDXNXIFHKTNINOWJPIVGCZPTQROCIDPMBERKWOTQHEGVHTIOQUSUQBPPFKDHXOEITKJLTAGNVMRRVDSPLKBXAMRRBYDHZTAKOFKKLLFEEHCSBTFUYSDYSHOLQUPMWSNAWUYOEBUNVNHXTLZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LFAJUXMEHLMKGSWJNHBRMWDSOQKULEYCOWANKKPEKMNYUWIGUZCQTMEUKWNJDHEOBREEJCJBINVAGYIOKZQWOZPXIMBHYEHCOJDBYZQKHKZLIMALAWOCYAGDQHWLIUXVDJUJNPPUGTBNXVSFCARITOQPEHCZXTEFDDFIFUFZSTXNQPBARAOTYDGPTFXVZXCNYBPQSLPTLGSWQZRGDYVMRMTJVBAXCXVJZICHGQNPHYIRTFFWSVGOSRUS");
    tmp_tmp_msg_0_0.value.assign("YUFQDOZGVWFHBTYKOZJMXCIQZOQOENLAVOPFBAKGPIANWQTGB");
    tmp_tmp_msg_0_0.type = 141U;
    tmp_tmp_msg_0_0.access = 231U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ISQTOFJJOETCCVPIDBDULKSRVQLKEMCCYZLPCTYJMBGAKJBGQPTTLZWJNJVXXKERFQCRQGZJXLGYNHSVXDNVXROQFYGWAOZUDCBSVGKRGIQGUYBJOWFHNEUUSAMUIIIMYPICZYNEUSDWVHBUTBJGOPXMABNIYPSZTDDOFHKENYHSAMDROHRWKEFTRPHEZPSIELNZWSYHWWLDUXLVAZFZBCAKMAVRPFVCWH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FUPTKYNGKEEHSDQXOPAGBRCPSDUIKXQODSLFLIXRMEGHD");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 13330U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("RMCSJOOVVWSQDEFUCKJSYMZTEHMUUAPXRXLVHFQMLBRAIJVAEMTISNUYYIWTHSVUSKAYZSOVZIMYTKIXOJTZLVWZIDRKOGHCQZBMFPMQIFLAMHYGTQZGJHGNAWCJWDEPGKHXXPCBZBRNLPJOEKUJQGGTEOIMXDABNRCANXUFGJLYFHEBVAODAPXSFTVGSGKUOSHPWQYWFELRUBJZKKKLDNFPNYRZBCWBWLPQIXQE");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TDTMUEITWTWZEWJHKECXSWCZSYTYVUEPOCXJPPYTNBNQBZL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.duration = 6012U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("HVDXROVMKVLBEYRRHVLEUTHOOIHZXFGFBNXWJUARHRPIBETVMUHSYCKYZADYFZXYHZQIEGAWMSXELBPULSQFKTTADIQOTJSNNXALPJGKZMCTWWCLSQPY");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleLinks tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.localname.assign("QOQNKKQVOJYFYZPXERMFQSDEQPMBNMLWPLPAVMNDTJIWKLXPTWOILOJCNBYSQNIQIKONYDHXCCZMGYKDEHYTFVAABWZDCXKQEKXYALLNCXRAYGNAFSCIEEXCWZWBIHTIFPVUVJFHJWRSZTCBNOBBQZEMDULKWRXEIYMHHJXMWAYSDOUEJSCTDFPOWMSGBTRVZFULHTVPDQURSJPVBGKOBUMZTHGAGTSUXFZUSEJILKUOVPGCVRIARUJ");
    IMC::Announce tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sys_name.assign("DAKFCZXPZRUTKEXHWDZAUIQJMFXPYAINZIYZCUJFOPEKSWQLTDRDSBDBFVWVWVJPINZBXMKMQKBQOLCUDSECFUAHDMERLPJMXGEGOMRNQOKRHOHVLCYTHNOSGTMDBNVGLGCWJZXQXPAOQYWFQPCBSJKRZGBNTKIVYLCPZAXJVTBSEOSMILVUCVEUSRUGNLH");
    tmp_tmp_tmp_msg_0_2_0.sys_type = 164U;
    tmp_tmp_tmp_msg_0_2_0.owner = 34923U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.738332447598;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.962106581508;
    tmp_tmp_tmp_msg_0_2_0.height = 0.577776710546;
    tmp_tmp_tmp_msg_0_2_0.services.assign("RKMQDIUAHCILZFVJSTAZHQCMMLJZEXYWUUDICXNHYSMHPWYIRRLTLXITRBTEWGZYNWJSHQUAOKXADEMZHVPGPVGIANVYCC");
    tmp_tmp_msg_0_2.links.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.784631003915);
    msg.setSource(31341U);
    msg.setSourceEntity(57U);
    msg.setDestination(26955U);
    msg.setDestinationEntity(208U);
    msg.command = 194U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GHXBSPQUWDZAIAVEJCMNSOHZGJSHZDSSYWXFEMECJAFSVYSYVNMOULQVPAWAVTHPWMIXVFFMCGIHBBDKKKSRLBWREDXFODCYBNBERUFAJEMCYKKHHDHUETKORJCQGMRYEQRXUDKMATYTBQCPRDZKNPO");
    tmp_msg_0.description.assign("KQBEQKNGOEYQOTINZIVSGPFZCMBNSNGVACBUDUDULFEKKLMIJDHSLZHMCBFSLYZIXMJPAYYYHSYRXUPITYKIOZRANVFVENDJRVHVTKGJPKKHPOWRKTAHAFWZXJQTZP");
    tmp_msg_0.vnamespace.assign("UKXVVKQWXHYZOOTWDYG");
    tmp_msg_0.start_man_id.assign("ZGDIZLPNJFPAKEMTNROBNSCRYRLYWDHPLTRTZPSALNGRESAXQNCUFIHEDNOWUVOIXEVJIGXISLMJKYHCGPVBKCDYCFQWWVTADXPZXDYIUUMEDEASAWVXHJBMEQLSEZKYSJMFBHMHRNRACTWNUHVWQGOCHBJJQUEOKDSVZIZMOGFDRP");
    IMC::DesiredControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.610387431312;
    tmp_tmp_msg_0_0.y = 0.463916984481;
    tmp_tmp_msg_0_0.z = 0.0536250484359;
    tmp_tmp_msg_0_0.k = 0.285067504998;
    tmp_tmp_msg_0_0.m = 0.0685710826483;
    tmp_tmp_msg_0_0.n = 0.683162695069;
    tmp_tmp_msg_0_0.flags = 140U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.583999155712);
    msg.setSource(4116U);
    msg.setSourceEntity(189U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(6U);
    msg.state = 170U;
    msg.plan_id.assign("DOGVZMPCAUIYKXFPCCEGYNOLBJURLHXRYZGXKGQTTVCFLIOHBMUOOJYDPCIYEGWNGAJJTLDRWKDFPHZISXQLSFHXAFTGQCOLQZLDQQRAPCFIRRSSPPEUWDOBSPSNGEMBSRZWWXNYVTKHMNQKYJVNETHZNEXYBUVSTQXLMXANKGIUQFXM");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.425925898178);
    msg.setSource(41115U);
    msg.setSourceEntity(89U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(94U);
    msg.state = 193U;
    msg.plan_id.assign("BJAHKRYZWSEGATPARWYXTILJTXLATVECROEBZXTICUMDLHOXGVZXQCWIOGHSQUVMVNSQPTWDNTXYQDPKSLQGKBUKECUBDLDEZMVSKRMGWUPRPQANUWJCXVSGEISTONNHHBSGJKPZUYONLFQOIFCAHGNWJABSLQGXQLHXUHECWOVNEMTPRRFIZD");
    msg.comm_level = 74U;

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
    msg.setTimeStamp(0.452350263212);
    msg.setSource(54791U);
    msg.setSourceEntity(115U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(185U);
    msg.state = 205U;
    msg.plan_id.assign("ALBQGMRJHCXYDTGEDCVFWNJKXQKFAOVWPTYIILWEEOVPIBILLRARRUWHSOKPGBZHQFMSAOZVAKRBWPRRCRLDXRNKNCTUKFULSPIGTYDYYBTEHMUIA");
    msg.comm_level = 192U;

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
    msg.setTimeStamp(0.127278354057);
    msg.setSource(27274U);
    msg.setSourceEntity(26U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(23U);
    msg.type = 167U;
    msg.op = 182U;
    msg.request_id = 27085U;
    msg.plan_id.assign("RJOARSCUMJUAEIOXKVLIOMTEDQEUXWBTICYMMCVNXVZUPQJEWJRCMUYPUUJYZLSFXFUEBPDGEKSZBEBHHJEGORPBTGVTSOOYYCKGCTWINTZNRNLKAFHHDPQGYNPCSFEDTDDLVJXSJORFHNJMWVDGHGMFOMZLTNFAAHQKSTKSQSFYQVDQMRIBXHKYAILVWNXAQLWZYGFIREDZLKUS");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51934U;
    tmp_msg_0.lat = 0.199313688356;
    tmp_msg_0.lon = 0.779817762892;
    tmp_msg_0.z = 0.612885921441;
    tmp_msg_0.z_units = 60U;
    tmp_msg_0.speed = 0.32518424888;
    tmp_msg_0.speed_units = 211U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.1640938299;
    tmp_tmp_msg_0_0.y = 0.0445947276315;
    tmp_tmp_msg_0_0.z = 0.0596181957299;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LYOOCSFOKPUQPNFBRQKPQKXOMDWXKEELFUSNHHEKOWECAMFNYMUXNXTRJJEMJVZPUWYYGYGUHKQHQDZCUIKWSAIUZSZAQYEVVIRTWAXPIRBQDXGERLKJTRZMWLRIEJCGRGBTLGTNWKSTSHEBDKMOCHTMLOOJURZWBBOOBPTXNHGXBIHPYCGDVNYGLZJVAMVAHDSNFYJIULIJVZFDLCBLAWQPSCAHDXPCBSQIMAZMDJAVYVNQTPDNSGEXIFUF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWUTISCCIYYMWSWTGUNQUBLBOGGERRGDRBJLKFMEANSNVKKWVSOQXOOXNWFIJHRSYAVHHTBQURPLEJURBONBTVXUKCHZDPVWOAUBDHAJCZTIEPYKVREUIWPGSATATXHDTSBPPCFAXFMZDKZQRMADJXLFFHJLIQWFCNFNAXKUSDOXWOFLZEOLYDCJPSZQPKMOGDIVCEZLNMILRNIYCMZGXUDLBIKYXWYFCPAGYEQTVVNQBEHMTGHZRZHQJMMKG");

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
    msg.setTimeStamp(0.0412750198831);
    msg.setSource(3041U);
    msg.setSourceEntity(150U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(182U);
    msg.type = 80U;
    msg.op = 31U;
    msg.request_id = 1383U;
    msg.plan_id.assign("PFFRETKGGQIUGPQLWEZLRDOWVROQDXTITTEZEATZYOKPAMLAVBCRFRIXSTJBWSKYBLUJGKDS");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("RBLAEEJUNKVCNDZZYIFZKXSPFWCGCSATHTBUHDVKERNJSYMCTILQCAPVYRIYSSMYMLACFHJEXWPTWJCCNHNDQNMTXQXSGNGWBTRBGOQRKJTALFVEEJKMSJDZOKPPAOZAKJUZXSMUFBASUGGFVOJOBDZVDKQHHWREXUIFWTYKEDYMZXDBEYWUIXODIRGHNZUGWHXMMLQOVHXPOSBILMIGHVBAWUCENOQPZQLPK");
    tmp_msg_0.lat = 0.181415617548;
    tmp_msg_0.lon = 0.512506231574;
    tmp_msg_0.z = 0.988892032488;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.cog = 0.718193991981;
    tmp_msg_0.sog = 0.819163570382;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VIJESHSJCCHTBWCVPTKHWGNQFRXRNOJVDVYBEHDACPSDXKFRXHCUTMMGXZFQMVOJMYOVNGYYPCGZKOBJJFEQNBIIRENNKWEZLSXLJQVLMONAQXGEYWOSLRTIDQCDDATUPQZZCIVKWJUWQPMALYHCWAHSLGPYABDTRHUOIGFYZFOSABOZPHAUVXEPCFTTDBUKMIDDSRQFKTRO");

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
    msg.setTimeStamp(0.751016333447);
    msg.setSource(56551U);
    msg.setSourceEntity(68U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(185U);
    msg.type = 241U;
    msg.op = 36U;
    msg.request_id = 60131U;
    msg.plan_id.assign("PEKNYBZUHGCPQURWBBZQGLMSIPBEWKFQCJHLIXVIWXZPPGVFDWAHKYUNWUVSCCDBVZDGTKCPBUGUQEHOWOQVWIULCJIZVFTCWJZJYVVALORINSAREFMYANUXYFPQPQSFDROMITNGKRMJDMUTXIOHYJGZLSOYKWBNQMICGFXSXKNAQVEDACEQOHDJOSMFYTLBNLXKLNZKENLYXYEJMFUMPHZWIMXHT");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 177U;
    tmp_msg_0.id.assign("ZLAWSWWLIDSIJKLHWIVECFRKPMKBDSKFITXDPFDQTPOEIPKXCGVUOZOUGLPLUJTGONVRJMGJQZGFHMMSHFNTYQYMWGWJWQXFVZOYTMWRREUEBKEUZQARYKCXTGDFHCX");
    IMC::RelativeHumidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.438551121325;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WAMQNYQWZFLVTONZPMOHKWGTWSHVFBUKJSDYCDSJPIJAOLYPXTBCUGRAKYCHYEBZKKTFBORVUEEXMNZFFCMDNVYLENJAPGSREBGIVIRQNYWOIPAOLTTZOXLFJBVRGQTBB");

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
    msg.setTimeStamp(0.436681182162);
    msg.setSource(19712U);
    msg.setSourceEntity(254U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(245U);
    msg.plan_count = 2017U;
    msg.plan_size = 1048587334U;
    msg.change_time = 0.632931949527;
    msg.change_sid = 5880U;
    msg.change_sname.assign("QNEDHYOUXZRNBSQTJUEPSZCEZZGVQQYJIFERFBMQFWTUJOHDUZLTOCYESLASPSOPXGYLGNXFSNTNZZNTJXDBAMGLRMXJJRPGCRCCKBTWDXPVRICILMKLIMPWQMGNTRQMVUGW");
    const char tmp_msg_0[] = {-60, -24, -87, -8, -17, -33, -118, 120, 71, 3, -126, -55, 24, 67, 1, 93, 28, 8, 50, -121, 8, -63, 118, -78, -80, -68, 66, 37, -32, -124, -42, 27, -95, 37, 27, -100, -113, -59, -53, 65, 52, 8, 73, 103, -76, -74, -120, 105, -128, 40, -13, -5, 113, 124, -87, -40, 100, 96, -29, 28, -66, -78, 99, -96, 5, -33, -17, 27, -13, -18, -71, -88, -95, -47, -101, 125, -115, -23, -112, 52, -71, -95, -85, -104, 88, -115, 74, -39, -98, -85, -100, 10, -123, -22, -14, -92, 1};
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
    msg.setTimeStamp(0.364915417825);
    msg.setSource(14353U);
    msg.setSourceEntity(45U);
    msg.setDestination(83U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 12500U;
    msg.plan_size = 1380462392U;
    msg.change_time = 0.20710221588;
    msg.change_sid = 15486U;
    msg.change_sname.assign("ZSCHWRNVKUMZVDOCTIEUMTNTYLRAPSWLULBPVGAILNYPEMZQNKPYHMDXJHOEXAUBISRTKGAWMQMSXQEKRWIUDNWQRCZXZSKIYDPXDDGTRMDVTRQHRAVJLJFXBSSN");
    const char tmp_msg_0[] = {-3, -100, -7, -44, 44, -17, -4, 108, -51, 21, -81, -15, 117, -84, -120, 41, 34, -55, -86, -54, 32, -79, -51, 126, -77, 106, 51, 28, 53, -4, 15, 86, 114, 44, 67, 124, 102, 95, -118, 70, -19, 37, -109, 16, 11, -86, -14, 52, -22, -15, -102, -65, -53, 121, -50, -44, 108, 121, 75, -27, -116, 49, -33, 96, -50, -40, 123, 60, 21, -28, -87, -26, -49, 66, -115, -16, 11, -79, -23, 25, 67, -51, 39, 106, -111, -97, -118, 123, -77, -6, -12, 32, -100, -37, 94, -120, -61, 27, 77, -48, -36, 30, 105, 43, 73, 116, 88, -51, -80, 31, -52, 75, 88, -75, -97, -38, 124, -98, 85, -43, 30, -5, 7, 89, 61, 118, 53, 108, -50, -102, 120, 106, 111, -99, -91, 0, -102, 87, -15, 105, -57, 17, -34, -1, -58, -5, -76, 86, -23, -16, 4, -97, 22, -115, -57, -24, -96, -41, 43, -83, -74, 84, -102, 62, -64, 77, -74, -87};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("THEAUVOPUDIQOHKZWLPGHROQAQVSCBSNTMETJNIKAVJRSJVIBKMYHJNFZPCSSJVRMDDJ");
    tmp_msg_1.plan_size = 44070U;
    tmp_msg_1.change_time = 0.661165622327;
    tmp_msg_1.change_sid = 7916U;
    tmp_msg_1.change_sname.assign("BDDTZRQDSQYWCLQSOGXKIMDARLUZUHVDZWI");
    const char tmp_tmp_msg_1_0[] = {54, 30, -25, 98, 38, -59, -89, -48, 84, -6, -33, -110, -82, -120, 92, 80, 47, 109, 90, 1, -17, -119, 95, -90, -97, 6, -50, -17, 73, -77, -34, 5, -74, -12, -87, -22, -57, 48, -63, 18, -21, -85, 62, -28, -3, -51, 123, 120, -4, 59, 116, -125, -84, 57, -58, 69, -126, -103, -44, -96, 86, -79, -109, 109, -53, -61, 26, -88, -5, -102, 29, 28, -101, 14, 54, -125, -54, -38, -45, 48, 101, 35, 113, 66, 10, 74, 85, 95, -43, 19, -77, 34, -78, -10, -50, -79, 104, 34, -55, -18, -18, 38, -17, 54, 125, -6, 78, -54, -127, -35, -58, -89, 78, -113, 81, -77, -100, 15, -19, 44, 49, -51, -97, 44, -35, -29, 52, 51, -70, 1, -95, 54, -27, 31, 117, 49, -68, -126, 10, -4, 56, -59, 36, 80, -55, -38, 26, 16, 80, 105, -100, -82, 64, 107, 72, -15, -21, 61, -81, 43, 66, -34, -114, -111, 117, -34, -43, 13, 32, -38, -16, 72, 101, 63, 50, 120, -2, -89, -79, -107, -80, -65, 116, -13, 58, -114, -38, 110, 19, 41, -14, -104, 55, -52, 2, 125, 45, 99, 106, -7, 114, -75, -7, 114, 85, 0, 59, -94, 107, 72, -28, -46, -111, 120, -24, 125, -59, -42, 0, 110, 123, 9, 16, -122, 21, -92, 24, 5, 25, -40, 69, 82, -55, 35, 66, 62, -127, 16, -95, -38, -58, 8, -8, 79, 21, 38, -8, -48, 89, -34, 112, 52, -85};
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
    msg.setTimeStamp(0.691535184536);
    msg.setSource(31259U);
    msg.setSourceEntity(131U);
    msg.setDestination(6783U);
    msg.setDestinationEntity(203U);
    msg.plan_count = 2440U;
    msg.plan_size = 2205947794U;
    msg.change_time = 0.78467570063;
    msg.change_sid = 62235U;
    msg.change_sname.assign("RWZCAXSVQBEUWKDXAFRRLPHGFYVFLOUZWCDPOZGX");
    const char tmp_msg_0[] = {27, -5, 86, -3, -17, -116, 101, -21, 90, 7, -26, -123, 120, 70, -31, -125, -19, 110, 78, 123, 91, -89, 53, 28, -68, -110, -87, -100, 55, -98, 46, -80, -77, -123, -40, 10, -17, -86, 54, -105, -106, 44, -74, 77, -125, 42, 44, 69, 25, -121, 103, 96, -82, 84, 51, -87, -113, 96, 29, -108, -49, -42, 126, 101, -37, 62, 55, 18, 75, -125, 56, -100, 46, 22, -125, -54, -33, 50, -105, 28, 38, 113, 61, -66, -57, 39, -89, 105, -34, 42, -60, 126, 10, -26, 70, -118, -101, -117, -71, -98, -92, -87, 100, -28, 103, -1, 65, 23, 16, 117, 82, -85, -125, 78, -72, 58, 38, 10, -77, -2, 28, -72, 117, 74, -126, -104, -15, 86, -2, 57, 76, -23, -105, -38, -61, -49, 59, 86, -20, -65, 55, 107, 30, 113, -45, -46, -69, -118, 72, 75, -73, -73, 91, 21, 94, 92, -115, 34, -82, 66, 118, -1, -78, 107, -23, 56, 26, -108, -97, -97, 106, -92, -39, 73, -106, 31, 84, 11, 55, -98, -91, -79, 69, 30, -117, -86, 58, 0, -81, 3, 39, -48, 99, -120, 38, -96, 102, 46, -81, 29, 76, 86, -41, 61, 105, 115, -28, 4, 69, 56, 64, -35, 118, -128, -74, -83, 91, 89, 126, 13, -42, -108, -109, -34, 99, 114, -87, -37, -124, -43, -25, 113, -74, 60, -116, -103, -39, -97, 36, -108, -89, -60, -98, -53, 86, 27, -15, 91, 121};
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
    msg.setTimeStamp(0.0732127460848);
    msg.setSource(33722U);
    msg.setSourceEntity(58U);
    msg.setDestination(51679U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("IPVWGDETVHCLXFTNIKAZGQHFHLRUBLLKYZRMVQIZDICSMGIEAOJKIUAYEFWNQFJPYUMASCZPNCFMKANRAJIKZABVMPXTRJJVYARRMNTYUMBGTMVGVRXCDUCUUTZVIYRLSVGEQPBBTUJOHFYPGDXQSYKWQSFOKWJOPYXWVDNSMXKSOFWSBWTEKWZBPEDNIJOTHPXXGHQJDUCBYELM");
    msg.plan_size = 56817U;
    msg.change_time = 0.368144351576;
    msg.change_sid = 18747U;
    msg.change_sname.assign("YCQKCRFDRXKJIVYGIMHJJSJBOQCASSIDPOTNBWZPW");
    const char tmp_msg_0[] = {12, -37, 71, -49, 68, 118, -77, 50, 83, 34, 116, -42, -78, -85, -118, -95, -12, -127, -62, 60, 95, 96, -7, -6, 93, -91, -53, -47, 64, 70, -61, 125, -79, 6, -123, 54, -73, 43, -115, 115, -11, -35, 116, 43, -58, -20, -14, -8, -98, 78, -4, -109, 27, -42, -61, -74, -114, -117, 91, 68, 73, 107, -72, 82, 40, -105, 63, -119, -120, 75, 16, 122, -39, -116, 61, -125, -106, -120, -52, 112, -112, 58, 123, 58, -5, 37, 3, -42, 32, 87, -44, -111, 47, 21, 68, -124, 53, -61, -77, -81, 86, -58, -2, 98, -117, 84, 76, 88, -9, 93, 67, -91};
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
    msg.setTimeStamp(0.0176454068218);
    msg.setSource(58756U);
    msg.setSourceEntity(75U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("NDMNKGGGDJHATUKQGDQRYANPSPSFZBFKAHNUBUSPSYZRVNKFPKTTZVUWXBINLIVNHSXOOSVFHGTPHMBTYLTAXKECPVNLCUGSJMZMWRYRWCVBHMKHXZCQLKEVMBWLIHIYFL");
    msg.plan_size = 51596U;
    msg.change_time = 0.250293702063;
    msg.change_sid = 41822U;
    msg.change_sname.assign("YKIBMHCFOCVOOQRXMNWYYHHGNTQOJZF");
    const char tmp_msg_0[] = {-36, -52, -56, 46, -117, -128, -12, 4, -125, 115, 58, -86, 66, -12, -69, 58, 97, -14, -110, 63, -63, 105, -53, 111, -37, -128, 48, -77, -91, -39, -34, -118, -102, -25, -90, -71, -56, -19, -19, -3, 24, 44, -59, -114, -44, -109, 0, -101, -51, 51, 55, -76, 78, -24, -128, 14, 116, -2, 108, -108, -104, -113, -8};
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
    msg.setTimeStamp(0.283334413126);
    msg.setSource(19486U);
    msg.setSourceEntity(89U);
    msg.setDestination(6360U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("BTYITMWJVGNNRUORWRAJYWAGPQONQUEIGBRWQBOKBXISWAPPDEPILKBZEDSHTHBDMVWSCPMS");
    msg.plan_size = 11945U;
    msg.change_time = 0.147495345774;
    msg.change_sid = 32742U;
    msg.change_sname.assign("CMQBVLOPNMEBMYJXXRMQAYKKVJIFRCLQZUTTFHOBTIIBSFXWQYCZNUPRXZGARFVSMBQPEYDTGLCDWTUPMNAHGLSULVLSRGUBYEDHQAHGWWPNKVHJEWFHOESSITAUNKKYOEOVUFBMZVCUZDLMIAXWQQRSRVDFKOPLPMCOBDKIECGWAGWIUMS");
    const char tmp_msg_0[] = {-119, 96, 108, -48, -55, 10, -82, 84, -38, 64, -68, -25, 125, 120, 37, 16, 33, -51, 22, -104, 14, -60, -103};
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
    msg.setTimeStamp(0.783681604765);
    msg.setSource(33936U);
    msg.setSourceEntity(124U);
    msg.setDestination(55663U);
    msg.setDestinationEntity(111U);
    msg.type = 142U;
    msg.op = 164U;
    msg.request_id = 10975U;
    msg.plan_id.assign("DALYFDVFKPZCXQONIYZHWMFRYQWREFDXKGFYVABJWRFPEPHFZNZMYKRIVJVUWHPCOIHVSQKULMMHRWCYTWPRHQCILGSFDZXNVSGOVSQONLAJJSDFGWYGNJCLMTYWQGBLWUEHMTGATJZEUE");
    msg.flags = 30003U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 170U;
    tmp_msg_0.value = 145U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRKXGJAZQTVDBJWSPZHPUUMFRIVUNGJXAALZHEPFLDMZOSVACXSYECQCGZBYHDDBYKWNXPLJWJOQLGWSTVRVOIHBJIMFTTCPAYSRWOBZYMGLZHXCDXFTWKHVTEIACQEINMBQXWARGKQLIZOH");

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
    msg.setTimeStamp(0.361019340565);
    msg.setSource(28509U);
    msg.setSourceEntity(249U);
    msg.setDestination(44103U);
    msg.setDestinationEntity(124U);
    msg.type = 58U;
    msg.op = 245U;
    msg.request_id = 19672U;
    msg.plan_id.assign("NQTGQGMRIKXKFNNYHJBTYJCDDGSEWBWSPYYLXBELJXLZSZOHKIMUYTFDKLNJBGTDFVMHATHAQGRGYXKPCZRZTJRVCWAMLIVSWFGCAUJMOWQRLFSITJUELQIGNHDWGEKX");
    msg.flags = 39597U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 42628U;
    tmp_msg_0.custom.assign("QUEISERFQQKWHNROGKOHZTAFIDAUPMETJLXMFBVHZMDTYRXHXNKLVROTJMKYVMJSGIPBODURUBJYCABCNAWEPYTDBQFYDVW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HVIBEJCDHMDGDWZZEXBLNTYPHMDKOYYFPWATSNTKZPMEMYPCCZGPINEXEGOVRJHJPVKKXSEZUGGVFSXLGUPSHQJWIBNJKWETDYWSZURQABALMBRJYYZN");

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
    msg.setTimeStamp(0.388030249791);
    msg.setSource(23265U);
    msg.setSourceEntity(250U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(175U);
    msg.type = 114U;
    msg.op = 36U;
    msg.request_id = 46774U;
    msg.plan_id.assign("VDYRDMQNIZROKGUVSISCJEVCABMOWLTFRXTEWAWYGLLSDWIQJWPDKEBFKTCDXNQHZPHHEOFPGYMKQMPEINGUSWFPCOJJHFJVQ");
    msg.flags = 33557U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.939457898206;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FDMWNVYLVNVXHICZQOKSMHPKVPCINNTAVXBQNKGRKUPSLQQGHRFSJMYOEBMLJVGN");

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
    msg.setTimeStamp(0.299659734169);
    msg.setSource(31521U);
    msg.setSourceEntity(204U);
    msg.setDestination(46475U);
    msg.setDestinationEntity(210U);
    msg.state = 231U;
    msg.plan_id.assign("TCLMCRZLWRGMCGKBJLXKDHFSNPWNAMXYIQJORVEHCIZJKSBJJIYYZXMLFAKXNOPQJTDAUGPPTBHQYSAKYRQGZTUEPZHGFTDWQWCWVLKUOEDFINZFVWBBTPPBXEWTLVXOVSNGQSULINKFYZAPMXIGQYRBCMOTCUEEOQSXASIWVCHQNNNDOEHHGBESUXDUBEJVBCSRIVYMHYZDTHJFFR");
    msg.plan_eta = -1146460587;
    msg.plan_progress = 0.735533198083;
    msg.man_id.assign("RPJARFINHCWS");
    msg.man_type = 63181U;
    msg.man_eta = -493180246;
    msg.last_outcome = 215U;

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
    msg.setTimeStamp(0.413414176987);
    msg.setSource(29187U);
    msg.setSourceEntity(110U);
    msg.setDestination(49533U);
    msg.setDestinationEntity(52U);
    msg.state = 76U;
    msg.plan_id.assign("RMGHYEADTYVKRXJVABAPDTWCBQTDOUWOSNPZTKGVSMCXVQTVCQGFJLSGISZDMYJBCMRVUROZYPLDNARHXSKGWJZCMWTQFUPFYTABIQVUKQUSIJTGRCUKBZXERQRUPDMFHJJRJEEYFBSZSJIHXMYYGKVHNPDWZJIKPADNOLLUVMARXWBUFWPLKQASKGCHGWFTPOAXWYPZLECQCTIVIQXECOSFMNHBHOLIXZ");
    msg.plan_eta = 1693793925;
    msg.plan_progress = 0.128900939412;
    msg.man_id.assign("GEHPNGNWXLGWNHLPSZTOYLVWERJZWGPAXGRUX");
    msg.man_type = 34254U;
    msg.man_eta = 651165086;
    msg.last_outcome = 221U;

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
    msg.setTimeStamp(0.893154932983);
    msg.setSource(31715U);
    msg.setSourceEntity(170U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(30U);
    msg.state = 82U;
    msg.plan_id.assign("KIQJFCAVJAIIKXNKLEZM");
    msg.plan_eta = -2023223918;
    msg.plan_progress = 0.629420408419;
    msg.man_id.assign("BOBHHNIJAOGYBQRJJZNFPYOLHQCDDJPUVWRSIRLRIOGMIXCVVQPBZVWTSHLRYKUTSFDANNSAOXTZIDWPDYFZMLSWRCJXXZCZVWMPFHJXXSGECKPQMKGMITVPCDMKQSGFBVYKURNFPXLTTSUJFRAIABHDASVWFEKQGPCJEWMWVYICVAANZBPYHZNUOCLLBXTG");
    msg.man_type = 11934U;
    msg.man_eta = -861413440;
    msg.last_outcome = 54U;

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
    msg.setTimeStamp(0.0129715489204);
    msg.setSource(6553U);
    msg.setSourceEntity(99U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(94U);
    msg.name.assign("XVEYEIHACLKAMJJCUKVOSCKKRZKBFLKZQLHVDNSWVOMZ");
    msg.value.assign("QUKWVVJPMNEVDICLKEFVNZZYPYHZZPEWISWHNVAALEBFIMBKFRNGZSZLBHJCQJPOHXTIGYRUOWDXSVQAUFEQWRIFKJETOFVGYOXSVUQCHTDRHMSEQAOZTFUCSUIIDLPRGMTDBYFUTBWJNGJTLDQOLYTKCNOXAQCJCWHKTYODDKPWACJTMGGBROVGXEXRNXIHUNRJALLQSBMDUKOBWSXAFSPLMIXFPWNYYYPVMMMZX");
    msg.type = 152U;
    msg.access = 177U;

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
    msg.setTimeStamp(0.74195353366);
    msg.setSource(10029U);
    msg.setSourceEntity(156U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(247U);
    msg.name.assign("DNSYWVNBLCTEPPOLHUDBAUGVDDTGWXCYTHKWBQYVHONQNSXZLBEKRRIBWFAOPRKFMONWJKFZQJSVGAMVUDVTWSSVUVRUMCXNZTYRLSMYALNSTXSHGDCU");
    msg.value.assign("SGNIWMUTTRIMGWGEXZLWELWQRKEVPZAUPRCDU");
    msg.type = 127U;
    msg.access = 200U;

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
    msg.setTimeStamp(0.331001529474);
    msg.setSource(42427U);
    msg.setSourceEntity(239U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(185U);
    msg.name.assign("JITJAETJYOLZIQQHLAKCLDMMRFNTCNUFSHRAYOQJBIYNKHDVMDNHYAKZWPHLPJYBHNWBOEEZRTOFGRFXLXREJVLFKGBPZULUIACVHZHQWCOYMPOLZDIQOGDHPMGMUTEWWMXSXQFNGIPWUWJUCKZSXRVNJQEEPNMNYQOVYBSKOTWRZSBRRVICAEAJNUPMFPCDTZGQSAXDBBFSMXVTQVG");
    msg.value.assign("KRYJPSWGYATNPYUIMKGUHRAGLLXPATFYEVRJFJHWZLKPBIFQETSWOMZIZOKDFLGEWWRHTQNYI");
    msg.type = 177U;
    msg.access = 200U;

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
    msg.setTimeStamp(0.759401843325);
    msg.setSource(38922U);
    msg.setSourceEntity(99U);
    msg.setDestination(27946U);
    msg.setDestinationEntity(134U);
    msg.cmd = 28U;
    msg.op = 188U;
    msg.plan_id.assign("OSVYTSZPSGXBTCYUMBWFNUYDOLUNZOLIEDIONTBNIJGKMBZBPIFRWWMNEEZEAQULPWXMZKRTADANCQHBCPIEPKKJCVAVNVBQFYFEMPRROPDPUXSTJDLRVJXGKIMAOARTNHDHHCFMW");
    msg.params.assign("SEVVSCANNMTUXNPUAQIJCPOLZILLAZYWRDUSGRPCIF");

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
    msg.setTimeStamp(0.0370522547099);
    msg.setSource(40547U);
    msg.setSourceEntity(158U);
    msg.setDestination(53937U);
    msg.setDestinationEntity(83U);
    msg.cmd = 139U;
    msg.op = 79U;
    msg.plan_id.assign("LQIFMHYIPJQUODAXIRMQFBSOPXOTXHZINZFELCUJLIJBMVCELHHAZLSKMKDHWAUHUEQURDWYTTFTFLVKZVCZRCDVSICXBMNTFZYZ");
    msg.params.assign("EGIAOAFXKONMFCKWXFDOAKEMBCVIRXRTGJQQMSMUCNWHKTDQILOTMMBTKHVUESQJPZWOJVCRXZMZTJFEBEAWPWYDRFSYYXGBDDURXVDCYTWA");

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
    msg.setTimeStamp(0.7127315111);
    msg.setSource(3743U);
    msg.setSourceEntity(25U);
    msg.setDestination(60361U);
    msg.setDestinationEntity(227U);
    msg.cmd = 190U;
    msg.op = 144U;
    msg.plan_id.assign("MJPSAFAVPVBDNXTCWAPFISIKUXOYUQIQRGFHCJFXACRWCGZBPRPGKLWRSDTYWHAETPHGZQNMTISJSVLMAEMUHNIGSFXOOQEHGDVWJKRRJIRKJTLKNVYTCOVLOOQZBUSEMBWEINOMOYENAWQOXBVIPWBDCCNDCHHMLBENDXS");
    msg.params.assign("FDUACQAUPFWDZBJYPZTPARIDCYTYZQTARMRBQXFRJXXKFIMFA");

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
    msg.setTimeStamp(0.467275484422);
    msg.setSource(9182U);
    msg.setSourceEntity(207U);
    msg.setDestination(30810U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.859099252964;
    msg.lon = 0.449273988122;
    msg.depth = 0.919323494242;
    msg.roll = 0.821824186779;
    msg.pitch = 0.194914529991;
    msg.yaw = 0.604212498127;
    msg.rcp_time = 0.700645159805;
    msg.sid.assign("EEFZXYSLYIVZBEIACOVFFSDDIGOIQOHUBQQDJQSMKGPCYJSWKTBZUFMLNSCGBWSAXYWXJRTCHVAOBWTRKCNBXSERAGFZCRKMQEKGVDHDLILFQVFKIYEYOIHWKF");
    msg.s_type = 244U;

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
    msg.setTimeStamp(0.255090352189);
    msg.setSource(10702U);
    msg.setSourceEntity(151U);
    msg.setDestination(1924U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.799931752043;
    msg.lon = 0.18834172837;
    msg.depth = 0.390158041162;
    msg.roll = 0.0423608916529;
    msg.pitch = 0.667786259482;
    msg.yaw = 0.834793106655;
    msg.rcp_time = 0.353307091605;
    msg.sid.assign("ZUFTMOJFCQLMNGWJSVSGRNOSWLOTYRUWWUZJFKMSDHLGCCGNBVEPXQOPIOLGMRDVALWYVHERHCRXLEJMDBFUWHKEYXDGBYPHSQNNRFDKSAJRFAYOXDKECUYTHIQJGYWQEQOZBTVBLLXGAUEGVISRMKTZLKEFZNLXECCTZZTIDVSPRKNZWFFIDWVJQPACMPUBPMUCNZCIBAOHQPXSHIYPDJAQ");
    msg.s_type = 89U;

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
    msg.setTimeStamp(0.875403153374);
    msg.setSource(43822U);
    msg.setSourceEntity(92U);
    msg.setDestination(40945U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.299715207677;
    msg.lon = 0.614988013841;
    msg.depth = 0.375452282145;
    msg.roll = 0.941888374229;
    msg.pitch = 0.65186243633;
    msg.yaw = 0.301933260509;
    msg.rcp_time = 0.624543752962;
    msg.sid.assign("QKFERCSJPNGVWANYXGSHOEOQFALBJUDPGCLRAIAFVCKFTXIZEUISEOPSATADKELHNQVWHZNHCBQKDKZOSCQMPEDGWOJPWSQZSFFYFZLVBVJALIIWWXKXMOBWJKZEXLSPMPYITJMJGWYSAMXDMPTGJBTGZPYKZMVLUGTVVLNQVEUONKELNNJM");
    msg.s_type = 70U;

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
    msg.setTimeStamp(0.683298742973);
    msg.setSource(45163U);
    msg.setSourceEntity(120U);
    msg.setDestination(24389U);
    msg.setDestinationEntity(97U);
    msg.id.assign("ZWRVKBKULMHHVOSALGOVZNAIXBDIMTJUOBPWQLCTMWHSUKSDAIEXDFPBNYNNJZXRALUXN");
    msg.sensor_class.assign("IRFOQHCYJEAKSXHNPYGTVIBJLWWOLDEULFQFDGPUGGFBXPSOKCAFWQQHRCJNMXNRADZRWXEBTIGVDBMLNQSXJPHEACUDEPIHUZVMPDIYKWUPLBCF");
    msg.lat = 0.375861210548;
    msg.lon = 0.549737571775;
    msg.alt = 0.748582825478;
    msg.heading = 0.419157494248;
    msg.data.assign("OZTDKHVLEQXYCXWFYNAYRYAHSVPALOXYLJLVJN");

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
    msg.setTimeStamp(0.662320233142);
    msg.setSource(47569U);
    msg.setSourceEntity(17U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(125U);
    msg.id.assign("FKVZLXOGLZLSNDARDSNPAJQKRKWRFV");
    msg.sensor_class.assign("WDOWLREMMEKBEVRALCMUDCMXAUGSISIOHICJFFLTSJNOTDZYPPIONPLQENAVYHUNQBVJPYZWDEXYURXPZFDYCCKVQQBRZUFBINLJKEVBXMHBRJVTGXXDFVQOJSJLNWKHBHZUGDOQFWMWARNLDNMJYAQTEVHSBJUFTRMPWKMXCSLYOPHRSCXQHOWGUDEXPZAGUMAELTWDVNAZTBKFSFCRK");
    msg.lat = 0.0214328672331;
    msg.lon = 0.0203031901749;
    msg.alt = 0.103098614871;
    msg.heading = 0.479904761348;
    msg.data.assign("DVEXPTYYQDHPPJZSCEDIEIIFPRKGNGLYKOFAMBDFXHJOZJSQBYPINSSLVMFFBEKJJQXVBTWTMCQBVRVSNFKSUOLGAODUEBWWUYXILOKZOWVTTQSJIGNSBEVMNDWBSLXRYGAADXAEWJIJOGKHIYZOHCUZDQVNIGQGAFUTLANXHRLOKUMJPBNUEESFKCLCZYT");

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
    msg.setTimeStamp(0.891636956436);
    msg.setSource(35329U);
    msg.setSourceEntity(81U);
    msg.setDestination(6172U);
    msg.setDestinationEntity(238U);
    msg.id.assign("XQLRNBOXDFVPNMTYOSIOQMJLLSWAGYUSFKAAXCEFFFKTSNWLAVLJKLCBPAZEKGMWAGDWQRQGVAJTZYGYMOJIHRPZRQLJVKRMVGYDM");
    msg.sensor_class.assign("VYCTJEZBLTTDLUMISSHLTIQLPKTXGUPKUPSYCIJHTHDAJAGBWBSULGEHWOJPQMKGCMHYOGXWMMVVXJFIDMQBQLQUWDAMNHZNELPNKVPUQNRRTAAAYJRCMAJJCNDEEJLPESRYEGUXAGZSFCVFXW");
    msg.lat = 0.606271470893;
    msg.lon = 0.716436379579;
    msg.alt = 0.357795656048;
    msg.heading = 0.8159046022;
    msg.data.assign("PQENTLFMRWOAHFJJCSPUHWLUBSYDAGBSRGJSCXEQQGLTUCJOHGDIMGYIVNAJAIZXXDJVQTRINGKFDOSDSCNFYGPWZPYBXIBPFKTWSUIMAOFJYWRVOXVELTCCRUTNHMXIZRFAKPKIDUDNZMJXKAODEESCLWMQZROVQQVLOOMZSLEYTWGKCBVHYBNLXKYPTTKEMEHUVHWWPLMELOEWZBKJBNZHFIHHCUIRQKTGAFYFSRDABAUVGV");

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
    msg.setTimeStamp(0.346580572453);
    msg.setSource(17744U);
    msg.setSourceEntity(75U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(181U);
    msg.id.assign("REIIPHNHLDDXNUYZUENSDWBCFNNVPJOKGHZBLDNFEGLCFQETFTLTRKQCUDNOKOCCLJLBUJBHGSYOEGMQISRZKANIOXXZCBAPHJFBKLIMFOPHVAWYYZUEAYUKTHRFEHWVKJWMVRWAYPOUSFYSJBRVMISUENKAMRGFJMVXVWVPGWQNDUGLQOZQAKDYIDKTTMTYJTSMWECGRSZSQPJQSBGXAXJWPXZLHDUAPOBWODTXCVMZXRQQFVCHLTE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NJRSLWBELHOUTIXSOEYGRJUEKLDFTEZPJOZVRCGZJADESDMYQKENFFXC");
    tmp_msg_0.feature_type = 5U;
    tmp_msg_0.rgb_red = 38U;
    tmp_msg_0.rgb_green = 181U;
    tmp_msg_0.rgb_blue = 139U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.541895895123;
    tmp_tmp_msg_0_0.lon = 0.998409306001;
    tmp_tmp_msg_0_0.alt = 0.173781754136;
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
    msg.setTimeStamp(0.667506006973);
    msg.setSource(46178U);
    msg.setSourceEntity(196U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(13U);
    msg.id.assign("DAIGWKRPBPVJFTLUZQMXVVZHLEDELUIHQGOTODRJWMFZTNYSBGAINSPNHZAMGQHONSDNILCDCXOYCIFJRFQNILATLENHOSAUPF");

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
    msg.setTimeStamp(0.350610361585);
    msg.setSource(8097U);
    msg.setSourceEntity(43U);
    msg.setDestination(18465U);
    msg.setDestinationEntity(47U);
    msg.id.assign("GKHICXTZPSANXDCBANGKQMJPYFELFUNBCWNGZOCGJTYQSIALJAVHTWPYWPMFLOGDZWBOUUZHCLMQOSMSYUYFUUIJHQAZOJPFJKNMKKJNJFPHULXKYSZLZPEWVUFZRUHMMWBNIWGDLRVCRQBVRNWJFDKBRRSXVVTETIDXXAXETYVLDHIDITKCEIQLKXPXCMOZCSBUTYRITJSOBEGPH");

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
    msg.setTimeStamp(0.208931162278);
    msg.setSource(47202U);
    msg.setSourceEntity(141U);
    msg.setDestination(13271U);
    msg.setDestinationEntity(218U);
    msg.id.assign("SZWPBHLFLA");
    msg.feature_type = 122U;
    msg.rgb_red = 114U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 2U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.940187131839;
    tmp_msg_0.lon = 0.818849441142;
    tmp_msg_0.alt = 0.538360944119;
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
    msg.setTimeStamp(0.0935223269276);
    msg.setSource(11288U);
    msg.setSourceEntity(82U);
    msg.setDestination(35651U);
    msg.setDestinationEntity(228U);
    msg.id.assign("NPXYHRFYQPUWQRDEIKLIVAUMQAMSEDZYDOALHQOUJCCAKKNTWBKQHROLVHSVKDJLHVOXVODLGKATBIMEPYVDPFSBSWEXCQHZDQMGUBCBMIRKPTUYJJIRHCIFETFNMTNMOKVQZIQUCWBDCXYEWJZOFYACUHLAMJOBJTEXNTGGJBXUUEAGRJZPWAVIRSBNIWSGPCSVTQLUJZBF");
    msg.feature_type = 63U;
    msg.rgb_red = 244U;
    msg.rgb_green = 113U;
    msg.rgb_blue = 68U;

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
    msg.setTimeStamp(0.0756894437214);
    msg.setSource(18298U);
    msg.setSourceEntity(35U);
    msg.setDestination(40521U);
    msg.setDestinationEntity(193U);
    msg.id.assign("HBYUVAXRUNBZJOAX");
    msg.feature_type = 115U;
    msg.rgb_red = 27U;
    msg.rgb_green = 22U;
    msg.rgb_blue = 155U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.73185651531;
    tmp_msg_0.lon = 0.841270708643;
    tmp_msg_0.alt = 0.232271229912;
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
    msg.setTimeStamp(0.123105751892);
    msg.setSource(2434U);
    msg.setSourceEntity(149U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.674727260943;
    msg.lon = 0.0390234608599;
    msg.alt = 0.00170445726531;

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
    msg.setTimeStamp(0.992570634568);
    msg.setSource(39899U);
    msg.setSourceEntity(222U);
    msg.setDestination(12774U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.00326140536854;
    msg.lon = 0.882497011747;
    msg.alt = 0.0708945403293;

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
    msg.setTimeStamp(0.316675653812);
    msg.setSource(20074U);
    msg.setSourceEntity(193U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.105460352864;
    msg.lon = 0.275365086861;
    msg.alt = 0.302767554082;

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
    msg.setTimeStamp(0.192596558799);
    msg.setSource(21007U);
    msg.setSourceEntity(44U);
    msg.setDestination(55099U);
    msg.setDestinationEntity(86U);
    msg.type = 139U;
    msg.id.assign("IDREDPMYNFAWBVBDLGILAGNVETH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VKBSWSANYEPIDHVVWMUTXUOOJFTCTKXVFGTELWYGRRTOFJUHCZYLENFAYCSWROQTTWMKFKADFUQPIOKGMZQYAFGJMUVODEDGMJZFQGDBHRTRHMXSKIANTEUECLSMLJYXWCMBERXZPODVYQPUMDHHVQXNBJKOCIJUBFVRBGLQZGIC");
    tmp_msg_0.value.assign("VOFWXWSJPROHKLQPMFULEBJWKIGIDZBUEBCJHWDYDWHJQGASAMESYYAYWMGDABUJLDSGPKYAZCEQDEVJHELKERKUSCNHGHOXWNSXDYFXNZOPOIFPYUTMCFZNQKUEGLZQZZYURVECIKOUQIMIRLOBXVHVFBFKMWXVRRROBGCITCRSWZLDNLJSXNBIXXT");
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
    msg.setTimeStamp(0.0471736026975);
    msg.setSource(24069U);
    msg.setSourceEntity(179U);
    msg.setDestination(57083U);
    msg.setDestinationEntity(172U);
    msg.type = 245U;
    msg.id.assign("DKLYMPUKBCUJSOZHNMIRRZSFLGPZXDJGTFNEKMPFDKNHBUTWJMJIYKSEGFIHLEVTVGMOXOAVLSAIHLYYXGAXCHBORWOQFMXQVAAETHGRIMTTWOTJFUUKBRZNJRSFRWQOCRWGVQIDPAFDBQDWSCECYNWPWIXUBGNZKPQTJVSJIQECCPZKBVBZZSMVVDX");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.458841037695;
    tmp_msg_0.lon = 0.265577664488;
    tmp_msg_0.z = 0.466672036562;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.radius = 0.0518553974091;
    tmp_msg_0.duration = 35839U;
    tmp_msg_0.speed = 0.0973919250248;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.custom.assign("TKSXFRZTDJBJWUAQEXTVNHUEPKQURIEVGCTIMFLGZQKJPVDHZSQRYJFERAPERNEUHUZBVWAMYHSBAYZFBCFLUKHOQNILEMPXUTJZFYTSVXGKASIZKKKSIUNLEDVNNPTXMZROOHRROPTSWCCMETSGSGHINBAGCXXDIDGVPFBQFRVNJPVDQMWARYOZJHLOLWDBQGWOBLOVXWSZLOXJCMMGHWDUDAONGBQYICMPHYJXQWYFIECAWMLUKKC");
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
    msg.setTimeStamp(0.559240358644);
    msg.setSource(45881U);
    msg.setSourceEntity(212U);
    msg.setDestination(26333U);
    msg.setDestinationEntity(12U);
    msg.type = 97U;
    msg.id.assign("GVEJBQKOXDERTIGRQTNKXESJOQDMKYNPAMXXISIUXMUHVRDTIHKIFQFHZBJSUIMEVGKZHSXEGGJGPCTEHBFBAVWTZCDYCXO");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.814017592276;
    tmp_msg_0.y = 0.0934284457098;
    tmp_msg_0.z = 0.278797960468;
    tmp_msg_0.phi = 0.405955358948;
    tmp_msg_0.theta = 0.185495995696;
    tmp_msg_0.psi = 0.0848035751299;
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
    msg.setTimeStamp(0.0151397661904);
    msg.setSource(47702U);
    msg.setSourceEntity(109U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("PLPWMQMGVZVBJHKEHHVPSEUYTDWWJMQEAQRAMEQEXCNSRZDMOVETMPNVOBQAFOVUVOKJIIDNRZYUPSCCMADSIZUNWOXNTAYYBFMTCRURTBSYLFRXJIQJOGFKCKDFYTPATGSGFUEDQCWBKDPLLQSFREGJMRFLJRNTVJCHEWOLZGKNUOGQHJWWUWQCDSPUK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LDTFTURFAEERONKQHHIPXCOSZSTVFMVYTKYPBAUSTKKIEVYGIRXLDOBJMXDFGTWQYGPQRSQRW");
    tmp_msg_0.sys_type = 144U;
    tmp_msg_0.owner = 30084U;
    tmp_msg_0.lat = 0.29798561268;
    tmp_msg_0.lon = 0.68854467298;
    tmp_msg_0.height = 0.478350914123;
    tmp_msg_0.services.assign("ZLCWUUYMMNWPUOKUHKUZRFKZXQJQCMXTGHRGVHUJLMHXKZYZSDCGDKGMRNHQRQHNEBMVNOAAIYCRMSFQAFWBSWBKLENIYZOVIXKDHDVQFEPBQVOFHGUANTIPVKPCYSTNLZFVPMYJAOSVWHIIJWWQDRRYNELFOEICNGRPEPJGZLXXWOTGXAEEDFLFSZJBBPUSDHMCEIYABJSTL");
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
    msg.setTimeStamp(0.884748807674);
    msg.setSource(64479U);
    msg.setSourceEntity(108U);
    msg.setDestination(56924U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("LJCSGYSNIHCXBYFIRZLOKJNOABEDZOZIPKKKHOOIEUDQWENCLNQCIDCFJAIAOQPCPYTWMFZBQJGVAZRXHZAYMXPMCCMFOTKQFLERPTXIBTMXWZPVXBTDHUXYQIULWYAHHWSBSTBVPTHGSQWRNZGFDUVU");

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
    msg.setTimeStamp(0.288855209522);
    msg.setSource(52021U);
    msg.setSourceEntity(51U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(82U);
    msg.localname.assign("VUUSWKOPCADDD");

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
    msg.setTimeStamp(0.469556866633);
    msg.setSource(13761U);
    msg.setSourceEntity(223U);
    msg.setDestination(56923U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("TUBWMHNCZUPDLGELOEUICBSIVTYBFTLOGROKHHOMSSEQKFHKBKYADIOCZQQHNIVYKEGLQCXYPFBTXMPXARQEJDINCFJKACEQPYLJAAWRCGFDMZWXLDGLPUIZMYQYVQVRLKPVDSMMHYWLGXAXUMVFWADWRNQWKFZJSJWVJWFWTJVITTOISI");
    msg.predicate.assign("ZFMIPZTCQNEDRNHJUOSXMJWVXXCWHUENXGTDFCQMOWRUBAOFGLIBKOUGXAEHFRLCTCZMYKTVFHGJMRMKAJKCNSFVWTPLQIALIILJEJTWDVBIHPEWPQJOBKQSIBJLZPDEJDQEAHNFTPQNQCXRQX");
    msg.attributes.assign("RBCYJHSRDVXSUJXMAVTMAIXCQLJFVFHLWKJISKQPLUNLWTVWSASEYMEWTOSHJQPLFDTHGJCKJSETCUXCOOBEK");

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
    msg.setTimeStamp(0.98363961954);
    msg.setSource(63337U);
    msg.setSourceEntity(83U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("LHZZFBLDEWLDFYSPWGLGTQGGAIKWGEEHZWMTXRFSLUQOADCMVTRNRFGLPWECLPPDTBHJRHYIMBVYZZIDLUUCQWJTQKQVVNNSAPYHEAFJVBXKJZUKQSCOIRFISGHZNUTNLXWYIYPOVYOJTPSYBONMCQQIUULMDDERBVXODCQVPGJDPKTVPHUXYJSCHXJDTSWRQNEUNGKMECABBJVMYMARSKMKZUAIEEFMOFXS");
    msg.predicate.assign("MFJDUGVQWCYHPXPDXCNHKZUYMUUVYYNMNXCJADYWIDVXSWLIPJZSSCHTBMXGXBZEFOCBUAM");
    msg.attributes.assign("FMXSLNSQCUVLDDFCAFVKJP");

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
    msg.setTimeStamp(0.170904055429);
    msg.setSource(64254U);
    msg.setSourceEntity(168U);
    msg.setDestination(3672U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("FPDGWORXBSSZSBHGGQPOXHQLVNZKDONFRETOWQNLKYIGVZTBLTRIHUMGOLHKUCUOPCPKBFCOLNZACUNIMVZTNYPXBJDYOAWYPVXCTDVZWUXZHHXUJNUMYSY");
    msg.predicate.assign("IILFLIDCNPIIJQTRBRCJQJHTFNMUUHMZIWEEDXUJGKEPYOAPOPPARYCDJNKAMIFWUNOUMEVCBJVBMMBFGSFPQLESXWZEZXYAFVQYNTBORWUXSOSJYXCSLNOVJPDWYZEFXSKHGOROCLGSLVTQZVXZBYLVAKBHTGFRQPTSXGUVFAD");
    msg.attributes.assign("JKKJHZIRWSHATOEVGLDHWJEVLFCMVPXSWWSLZCOHORWOMUJEYSGYRIFDZMCQ");

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
    msg.setTimeStamp(0.937310679993);
    msg.setSource(4031U);
    msg.setSourceEntity(238U);
    msg.setDestination(22109U);
    msg.setDestinationEntity(187U);
    msg.command = 239U;
    msg.goal_id.assign("XOSFKCTRIQEUGLMBGPCESKKWIJFEWAVSQOXIEXQTJNYBAHXMIZHLYSGFFPTWBJ");
    msg.goal_xml.assign("RGSDKODNWQISOMWETLCUUOSBTQZNMHZSKKVZJYXGQOQHPRJSVNQOVNQDWEHCMVQFBARTYPBLKJZUWHMVZAQAXMIXMITGJBMGGARCAGCAAUYVTHYEZPDKMBYJFTNUPBIIAPPDK");

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
    msg.setTimeStamp(0.533861684529);
    msg.setSource(7632U);
    msg.setSourceEntity(22U);
    msg.setDestination(39134U);
    msg.setDestinationEntity(206U);
    msg.command = 225U;
    msg.goal_id.assign("CBIGTYMRUEEZEAKTGGCDEOSUDTOQPDRYPUKNBQPHGZAKNZVRJBEMCQYQDYOWKUHRCDJAWZTOMNXEPU");
    msg.goal_xml.assign("PMWKVBZIBYZENIPSESONLVZC");

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
    msg.setTimeStamp(0.501082693274);
    msg.setSource(32383U);
    msg.setSourceEntity(108U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(75U);
    msg.command = 135U;
    msg.goal_id.assign("UBXPRGFGEXKSDFXBMEEORHEQNCPHRMGGXEZKBWMWOJZLQQ");
    msg.goal_xml.assign("UZRAFPRLELAETIKVKGJUHDNHIRBUSTNAHTEWCJCCVZMUTQTCQZYMSIKIDENWZOQOUUOBRNNFGBHIJVUMRSQJUXZJSMVKIEALVPZXPRASPNWXDWDQEBKMSLYFQWNHLFBBOIFYVRGKZGGPFKDZJYWPXSBSRCIWEYCWPVYXLXKOGJAHPDXTXJDAXLESBAVLTHLWVTMVFGFDHMGUGCDEYQFYIHYOAO");

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
    msg.setTimeStamp(0.630843373894);
    msg.setSource(55771U);
    msg.setSourceEntity(40U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(107U);
    msg.op = 39U;
    msg.goal_id.assign("SRUAKCPRCRXQJESRBINYPKEBRFPHEFZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HJYXCKHIDYBVUPYIVLMGVWOAXKXAFSRCGQOSTTKOXMBEYJFOIIPEGQLOERZUM");
    tmp_msg_0.predicate.assign("CDCAGOXEGJVSXHNCUSWRTLWRYDFNAYEOUGFYEQIQCYSXSTEOMNCBDGFUGJWHMFZLEDZYJBKR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IKDOQSZOWCJINLPGXYLSVLTWVA");
    tmp_tmp_msg_0_0.attr_type = 201U;
    tmp_tmp_msg_0_0.min.assign("NRTSYXFFUPJZMGZBPXDIDYAO");
    tmp_tmp_msg_0_0.max.assign("KXRRTXKDBNWLAZDPNBCYHEQJZYZOACNCNMMKLLQQIEDFGYCFDQOGNAXWSDEBLXWUTLKFWGJJJHLKIDYJAYZWCHBGUTUGNSQLQOWYJHXHECNOIUWTPNPHIPPMSXQEBAXCNVBZLVGFXWAIRFUXIRUEZMDBQSBSPRKVAHTOSCHLIIZVFTBUDFJXMTTGOUGQNYCMYJPLBHFTKPKKYKWVGUOPTZCEVAMMEGDROQARDVFYSMJOIHVOEVSSJR");
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
    msg.setTimeStamp(0.839084870168);
    msg.setSource(31176U);
    msg.setSourceEntity(76U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(214U);
    msg.op = 141U;
    msg.goal_id.assign("NFPHXLDFCMMNMPHPBCLWUWGJTWNCARDLXRCHOZEIHXVRDFRZMJNWSEUNGFYUDHXFFSKAOOQZDOBAYKBYJHFVPXUINXPRUY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MBVJPNMSLFTFFOPJMBBNYRQJBZIFHLUNPAQBPAXNABISQDPTQIEQJNWXMHHJXMKSFASPICDGRURMXGHRYLUYKFUGLGTRNGRDREKIATDVUTFCPSOWIQCHIQDVMWYGNTTOWJBKYKHYJOBGYIUEDZYLSHCVSEQHTB");
    tmp_msg_0.predicate.assign("FTFIQYPVRMDIKGQSAGIZXVXMENLGFSFKVASLYAWRYAYBBCNRLCOGBXMRMGCZUBXVCOLWMJMPVIPVIYAAVVOWNTRCMUDJHJEGZQRTUXOSSPDSKNFRANDUJQUTMHUBITCSJBJGEOUIYQGKKQXYHWUNDQKPDJXEJQKCCYZZVQHONIOPETZSTBJWZREZBNXBOKZSCWFFUHRLKFMCAGMHUANIKLJQAVFXDPHIPDZXOLDWR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WULYNFZLOLOEGGENAIOIDCUDBJHRUVJDJPFVRXBCTHTBMRUIWLFAEMJBYCWKSWPEXPS");
    tmp_tmp_msg_0_0.attr_type = 77U;
    tmp_tmp_msg_0_0.min.assign("WSYGFHBLXSFMLQICWAVQOU");
    tmp_tmp_msg_0_0.max.assign("TTQGACFDRMASNIXBIBVZOEZREWOOIFNGPSSKTUFUPKHKLYCIHPEKACVEXGZYEUXYUSGDQSCHOTWYCPCKHZEQOZNJSIMJYEXV");
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
    msg.setTimeStamp(0.942608236089);
    msg.setSource(35441U);
    msg.setSourceEntity(99U);
    msg.setDestination(18301U);
    msg.setDestinationEntity(122U);
    msg.op = 46U;
    msg.goal_id.assign("KJQYLDRPFHXYJTMGURSBLRHXLCAGTTFBDOKGJVWNNPEQHJOPQWRKNUUOBOGCZIWYUNRBVGZQQMVMCVVCTANJJCGGKFAHRNYKFJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODXRELAFYBJKMSICIEMCLFRXYHUJXUWYWOAWNSLEXWCKDYLQKXMJHNFBPQDTYKJNJHWVIQSTZTIGWVKVDSBAXIUQOCSBAVSFAGQKHELZFZQPKWLAJDMYSFVORMGOPOXPXBSKYNKBXTRHVCHQTVIBVOTGI");
    tmp_msg_0.predicate.assign("IKQNLIRISWKNMGEYDJXVQCCYWNSFCKVBCQRFOFDKKAHSRCQDREZKEHDFNVXQNYQIJNLTBUMTFGZMMNIWBDEECNBLAPTIGZAYWJUZTQJBLSUDEVCYXMBQRFRVB");
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
    msg.setTimeStamp(0.839478042913);
    msg.setSource(2218U);
    msg.setSourceEntity(30U);
    msg.setDestination(2657U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VKYKLDATPAJYDWTPPFQNGPHXRCWARBSQOBVXGBNUZINFKTDSGSICJNVFHJJAPKDYIZSIXGWMENMURWFSZCTONOOHQOZWEDMCMWMHTIZLVBUAJYRQNLKQERIVGSEKHTKAXQWUXKJJUMXRBVISMYWTVCBHTK");
    msg.attr_type = 187U;
    msg.min.assign("LSETSXIJSBYGRSQYNPACEMXTCGPQXUMUXINYTSHIXBORYELAQRQBEQDPS");
    msg.max.assign("NZGVOUJRFWSBNGGYLWSXWPSNYJMOOIWMPWKHKPNZPXBRJCKFCIMSRTVJMZHGVAGLXMSKNONDFMSZGYOPRIHAIZHKQBBOTPPJVAAJVDKQIATFACGADQLLDBQHQLOEWKVKLNZD");

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
    msg.setTimeStamp(0.164325747746);
    msg.setSource(44U);
    msg.setSourceEntity(0U);
    msg.setDestination(15916U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FVKCMKWCMMXOXLTVSYBEYZBRICHBMILTAGHFTYXOERGXQJYREVJDCKDSDPWTDELHSUDNWIDGSNRGRTMCQUOZTURSUKKNFCRYCYZOXNRXBBGKFEMPO");
    msg.attr_type = 161U;
    msg.min.assign("SOBBAXCECQJBTCOKXYJTTJDGRMGGFQFQEJWBEXNVYPSROIPWPQUVLGTFAYOVAOQLKPEEFGSEYQWKUITVWCKKKZQFZODERNUHZOHFTYHMPKPGHDJULTKYSEBFLAHGDAOZVLJGWIWTDMXLHHZRRCZ");
    msg.max.assign("QRQZAOUWNHFXZWZRRSPBELVTBRXUMCVFSVJYZAVIHJGAPFBGJF");

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
    msg.setTimeStamp(0.353790871445);
    msg.setSource(58136U);
    msg.setSourceEntity(27U);
    msg.setDestination(49946U);
    msg.setDestinationEntity(131U);
    msg.name.assign("GQLQFETOACTUJWQVEYMLSYKBOIYOGMWDJOFYPZIDHREERRBQLTWRISDJDAAPNXDKCRREFGXSEMVDWSXBLMTSVNZGEWGBPJAAKWKYHPMQUSVAZRCPXCLZCGNIUYPPVIQIFDSBFOOQOPQYNITBVJCMWAEWZXZJFJOZKKSZTIHYQTUIFXUDAHMFXOTINCNPZVLRYTNXKXVWCGTCLLUHCBMPJUHDQUHJRLXDASZOLGGK");
    msg.attr_type = 148U;
    msg.min.assign("JWCMZXGYQTFIYQHTASPIPOGSNJMFVCHMJGBXYVDIDSOMVCTBSISZWBFHLKKPLYAGMUEEYJVCSNIKZGXHOVESJXCAGVGYAWAORNLONQQHQKAMNSKPIAKWHLAWHBDWLEZPUEXJIXITBCPNQMZOHXOFZERWLITVTTRFFUDTPCMBJCLZYHVUQDRYDFMTRHCNAQQCGRUFDKKOXUVBKUAMSZBRDGWPOWJZELWPYGPSQ");
    msg.max.assign("RVGPELDUSDZFJBBXUEFJZQLHPVRLBAXYRD");

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
    msg.setTimeStamp(0.516840123253);
    msg.setSource(51815U);
    msg.setSourceEntity(203U);
    msg.setDestination(34949U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("XTAKFOBLUJFSASNPJAESPNWPZBMHMLJPVLGUIHTBSYQRLYAELHJQMORRVOQECDMYWSZBWWAMFQDOCRGNDIGXLNHUPGWJESXQTUNJTYBHURIFUAVMFGPRNYHIJJDKPYMEVQEJPSJUYX");
    msg.predicate.assign("RGGZSCLVCRRXHPFRJUTNEHVYGXKEMEDRTOQTPHQEMTSKBOPMKIDJHCBTQXFFDYLUYSLAWZKBYGMKQNNDYALKCAANHAWSDNTUNGWKLUVXEIPXTFFZWIMSZDEXOXZJMJVIRUZGPOEABONRBMZSZGOAYBUUISULFBRYIQZCTICEOTJACPJDDFBOWPWVOYHS");

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
    msg.setTimeStamp(0.973473060851);
    msg.setSource(29916U);
    msg.setSourceEntity(145U);
    msg.setDestination(42266U);
    msg.setDestinationEntity(5U);
    msg.timeline.assign("VAWERXWSIYRWYAHKYRLBXPXVZTNTGLOBZWQHKPDTVCYBOUSOTKINMMCRJDYZHXKSZHSKJKCIXEVAT");
    msg.predicate.assign("QDXSHUTWTUAVWPMVBNEKYVCGCLFYAWXRIFVPXVBTJCTYKMQQAJSXJGYONGLLWEBCI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RZGYKYWOAVDEBHBSMRWGKKCPG");
    tmp_msg_0.attr_type = 111U;
    tmp_msg_0.min.assign("GYOURUIYMMRCALTNBEEBEJHC");
    tmp_msg_0.max.assign("QSMCAQFJGDBZIGQTECOCKWGNUUNVTMRVMECLGFJYWFGREVCKYPZETXZRJWHOYQGLEPNSHTGIWEEHPVXJBXQRQBTDQSFORNEXADDXOYSBNYVTVFPZETIMAEXDVSKNYLOMOIBUUZXSZHRHWRKZATFMXDJONOMFLPPYDTDSCNXAVHBISHILFCUSGPUAHOACURLQCAJZSXJWGKWOMCJFAKINZFLDYZDKAIUILUGPKWKPWQRMKNM");
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
    msg.setTimeStamp(0.471902507074);
    msg.setSource(45464U);
    msg.setSourceEntity(230U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("NZOEYJPJYMSJNQCMEQGTAKHKUIHNMBYC");
    msg.predicate.assign("PYRKUUWSWCHIYVJXFBMUTSVPSVETLSZOTFLMYVKVURJYEPDBXGBUBCEGHZHBUPSEKHQAXTJDNMBVLQZGGKYBAPYKOFYNVJCIQOJXNQIPGGLASHMALNTNEMYRZZUCDFZMLYDEWDREWJWOEGZB");

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
    msg.setTimeStamp(0.985998952449);
    msg.setSource(61651U);
    msg.setSourceEntity(83U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("RDOZLIJACMWRCKMXSPDQNZUUPMYYHGZVHLFFXHLANMIQZRHMQQVAVSECBXVHXWESOTNFJMITPDMMNIKXNFGBWTQJEFOEDYGMSHWUWVTUTQUKKPZFCAYFTEZLLOKBVQGCPBHOHNIVPFAWATLOEZGTZCRDTWGYGYAXNTAZNPYXRSNDEUNDSBEWIHKRAXZSKBIMBGRJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TJFJQMTAKIXCGYGIKZGIEPEWQTFLMTSBEXQJNMZMQAEYBBPSROPPUVZKJAMNUPIHROGCFZCOLDRIBANLSVDSUMQTSRSFPZCZKRTZYHHUOXZUHQJWONDDJDGEVSIWVPUAOWCRLLXHEDWRQEVYNYFMQVKJYYWGQUDVCNJIMKYEGFJOPRNT");
    tmp_msg_0.predicate.assign("PWCDGXNXYWVYUCASBGBLJVRIZODDWWVKMTPMRNRBWOSKXFZLEWMFSIYGAICRRHQHGQRKHQHAPVODFEUNOGW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KUMLIWZBOJSOZGCDSFWGRPAWQYQNEQPBYQDFECTCTVGJYFZUTPHFVTBRSPAWHAPUWZSKIXDOZRYRYBGNMLVCKAXXQKBQGNJWMZPCAZLIBKTAFJBHSHSSPEVTDRICWVOQVNCUQRNLMIVKODXVIHMNXOONAYPWTRXDFPAXUMCRFHHLJMSLGNYXOMIMOVPHSFHZTHKGLBULKNEDUTIEDNCSKUWJUEFTWQERDIYORGJBYEGGALXZMVKEBAXEJQCIJ");
    tmp_tmp_msg_0_0.attr_type = 167U;
    tmp_tmp_msg_0_0.min.assign("GWIWKHVVSBSTEODJHVUKWOKBSXABMEUJJLXTMXNZMSTRJFJMZVFNUGHTCCDCCVPIARSNCDCXNUYOZIVYNUTYYVPFHDEAXOQTTTHKEIBXFPUJLRADQEGOFEMQMRILIAQAGFRDFMQBOXSCFXNHOSNWUQQYUWAOJZFWYKDLKYRGRJBPLTCQPIXWPLIKPPBGZHR");
    tmp_tmp_msg_0_0.max.assign("IJJAEYISEIOFKVCJSYLTSXCJAGUVQMGIKXTDJNTKYGIIBBWWNGATYLIJOGIFLCADQNDZGZHDSODSLROYFKKNBWMEPBHNIQVOXKPSRXQGSFQPJNVPMZBTZPXVUUUZVZEDQWRFNLHEMFJVCPAUQTKROFYTDHRUZDTHUMVLGHUKWMMCGCDXAGUYM");
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
    msg.setTimeStamp(0.127651005778);
    msg.setSource(61190U);
    msg.setSourceEntity(119U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(198U);
    msg.reactor.assign("GNOOPBCQDWTBFUKUSEFQYSCJHFTBZAWTDMYXWSGPRMAPLRIGJVWBKABYXCSUQUVLHBSSYLWUIIVPVUWEMTHQQXTZFWRNOAJDTMUHWI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WYAGYRZRTUZBOHFCMTRUKPTTRUYSQCBHFXWGVVZHCUGDCIYTLJNGBBHUEEZVSSOXXYJZPDAQWEOQGILRNTZLLYBALPWRHNXPKZPXUHKJYWSGQFINSEALFGSBIFUDCJUHKDJOEDOTAWAJVZNFDRNXDAEW");
    tmp_msg_0.predicate.assign("CJPVQTBXOYZNFKTMFIRYDEFZKROEPTDOZHSWECXNZZQXWHNTOBRBIKELEPDHFMXQIHYRYUGBONZGDXYCHLIYTVJZBHLLTBFURAJAMZICMIXPVHDSOMKGGNWMWLWULWZVKQSATMRQFCFQJCVESAUEOPZHQHABFSSJTGWSQQWICYYHVEKRSPGJJGFVRYRXLIXKNDNJPUUBDSAACLYOUPNBLMTGNRMAWJUDMIUXDN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ELQDBRPAFJYFNJDXCZNFWMRQWWRZQCYYIFPSAYJHAMDDAPCUZFRNIVKUGTCUZIGVAESBSIJVWTHAIJSPXRHMSOQPOUPATMCRIWFHLANTGOEXBKDJ");
    tmp_tmp_msg_0_0.attr_type = 105U;
    tmp_tmp_msg_0_0.min.assign("IDIGYWKMRTNKOBNDJMRWOZBOJECOZURJVIURAYQDKQDDMOUPXNTNAFZSGWRMFSSLVRNIQIQXJPVXAZLXYPFEUHVREULMT");
    tmp_tmp_msg_0_0.max.assign("XIPIJATNNGPMRBKUENWWQZHHXIQGXSZRTOQDDSRVEBJPXLBKWEYXXKAALAGCLPOZHVABRFFKEPILFCZVJLLTWUYMHOWVOWDATIRGYDLJXHUMEKKXDDMZVZTSBSJC");
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
    msg.setTimeStamp(0.0250608246273);
    msg.setSource(14974U);
    msg.setSourceEntity(212U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(15U);
    msg.reactor.assign("GPHCFHPAEGYNRQLOLOTBPJUHBMDCZWLUGEQNJUWZKBFZTIWJICCMWTDQSNOSXGVLGSOQMCFXHKCLVREVWTTF");

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
    msg.setTimeStamp(0.720605833028);
    msg.setSource(54151U);
    msg.setSourceEntity(59U);
    msg.setDestination(4125U);
    msg.setDestinationEntity(68U);
    msg.id = 172U;
    msg.width = 45996U;
    msg.height = 12764U;
    msg.widthstep = 48017U;
    msg.channels = 162U;
    msg.depth = 94U;
    msg.finaldata = 147U;
    const char tmp_msg_0[] = {100, 63, 126, 115, -32, -20, -89, 29, -9, -30, -2, -66, -29, -128, -116, 78, -113, -20, 24, -125, 93, -26, -61, -8, -128, -7, -100, -121, 117, -15, -33, -40, -126, -93, 65, 92, 0, 118, 76, -99, -41, 96, 62, 74, -36, 97, -8, -35, -59, -89, 102, -39, -60, -9, 51, -37, -50, -58, 111, -35, 55, -74, -96, -48, 55, -61, -44, -128, 106, -60, 111, 13, 62, -38, 40, 86, 63, 45, -56, 42, -3, 40, -26, -24, 38, 37, 93, 105, -7, -101, -70, 66, -25, -17, 1, 97, -125, 24, 51, -24, 44, -36, 80, -67, 122, 112, -113, 23, 124, -41, 46, -76, -107, -37, 33, 69, -17, 122, -95, 2, 28, 125, 74, 45, -92, -123, -62, -70, -121, -33, -43, -22, 50, -62, -121, 33, 98, 35, 71, 116, 82, 115, -26, 81, 76, 16, 88, 96, 20, -76, 24, 123, 25, -53, 57, 122, 93, -71, -79, 22, -68, 42, -127, -34, 102, -115, -85, 104, 66, -123, -1, -118, 41, 114, -24, -103, -69, 94, 45, -104, -83, -79, 98, -13, -79, 29, 118, 119, 115, 18, 81, -65, -126, 37, 97, 116, 95, -29, 114, -124, -96, -93, -16, 111, -125, 70, 47, -113, -2, -95, 117, -113};
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
    msg.setTimeStamp(0.0193875230451);
    msg.setSource(34390U);
    msg.setSourceEntity(85U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(131U);
    msg.id = 38U;
    msg.width = 8506U;
    msg.height = 26887U;
    msg.widthstep = 38631U;
    msg.channels = 97U;
    msg.depth = 245U;
    msg.finaldata = 210U;
    const char tmp_msg_0[] = {82, 7, -32, -33, 97, 113, 29, -15, -98, -95, 57, -5, 121, -45, -87, -18, -13, 91};
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
    msg.setTimeStamp(0.534985867235);
    msg.setSource(28736U);
    msg.setSourceEntity(154U);
    msg.setDestination(43309U);
    msg.setDestinationEntity(164U);
    msg.id = 58U;
    msg.width = 3599U;
    msg.height = 33379U;
    msg.widthstep = 21169U;
    msg.channels = 89U;
    msg.depth = 97U;
    msg.finaldata = 58U;
    const char tmp_msg_0[] = {99, -109, -35, 123, 86, 56, -64, -128, 120, -6, -98, 103, -28, -50, 69, -125, -35, 22, 29, -16, -71, 87, 30, 114, -104, -68, 55, -31, 88, -62, 89, -13, -89, -2, 68, -2, 75, -51, 110, -127, -102, -35, 9, 20, -84, -119, 59, 106, 86, 91, -19, -18, 68, -92, 20, 69, 66, -124, 87, -4, -78, 30, 1, 87, 7, 91, 77, -8, 16, -43, -13, -105, -57, -8};
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
    msg.setTimeStamp(0.234364752689);
    msg.setSource(64647U);
    msg.setSourceEntity(11U);
    msg.setDestination(33613U);
    msg.setDestinationEntity(136U);
    msg.width = 60720U;
    msg.height = 868U;
    msg.channels = 89U;
    msg.depth = 197U;
    const char tmp_msg_0[] = {13, -66, 114, 70, 40, -72, 114, -121, -123, -57, 93, -44, -4, -15, 88, -97, 54, -42, -115, -7, -38, -29, -88, 103, -54, 45, -4, -68, -121, 3, -10, 59, 126, -63, 6, -9, -37, 91, 114, -128, 31, 62, 74, -100, 88, 5, 87, -121, -96, 46, -47, 54, -110, -71};
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
    msg.setTimeStamp(0.517860141413);
    msg.setSource(24520U);
    msg.setSourceEntity(104U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(245U);
    msg.width = 48751U;
    msg.height = 41822U;
    msg.channels = 246U;
    msg.depth = 52U;
    const char tmp_msg_0[] = {-29, 18, -84, 109, 9, -115, 0, 101, -89, -20, -32, -98, -94, 120, -44, 46, -101, 13, -6, 60, 46, 126, 81, 95, -45, -58, 115, -70, -63, -35, -57, -90, 14, 91, 10, -27, -61, 85, -26, -55, -17, 11, -34, -127, 85, -106, 121, 106, -122, 104, 83, 67, -26, -58, 81, 114, 9, 106, 99, -33, 36, -67, 19, -13, 15, -109, -63, -121, -89, 126, 27, -104, -111, -64, -75, -119, -85, 44, 121, 3, -43, -83, -2, -105, -11};
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
    msg.setTimeStamp(0.254598718872);
    msg.setSource(61108U);
    msg.setSourceEntity(26U);
    msg.setDestination(17810U);
    msg.setDestinationEntity(95U);
    msg.width = 17967U;
    msg.height = 32405U;
    msg.channels = 79U;
    msg.depth = 62U;
    const char tmp_msg_0[] = {-93, -104, -7, 49, -37, -103, 122, -68, 12, -97, -32, 56, 78, 45, 19, 114, -57, 54, -41, -77, -117, -109, 39, 89, -18, 119, -27, 5, -37, -31, -28, -83, -80, 91, 69, 33, -76, 31, 25, 31, -65, 64, 106, 75, 16, 119, -34, -49, 47, -46, 40, 104, -30, 19, 74, -46, 108, 69, 97, 27, 123, -92, 41, -39, -118, 81, 17, -110, 4, 85, -34, 64, -88, 110, -47, -75, -50, 82, 91, 49, 47, 105, 34, 28, -121, -82, -115, -56, 72, 1, 18, 67, 40, -33, -58, -72, 80};
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
    msg.setTimeStamp(0.918865449842);
    msg.setSource(31131U);
    msg.setSourceEntity(64U);
    msg.setDestination(28894U);
    msg.setDestinationEntity(196U);
    msg.frameid = 180U;
    const char tmp_msg_0[] = {-83, -22, -77, 61, -5, 87, 110, 78, 62, 21, -76, 47, 65, -41, 46, 126, 90, 53, 94, -61, -38, -70, -28, -80, 83, -85, 91, -50, 94, 108, -22, -108, -95, -21, -41, -111, -47, 42, 74, 46, 106, 55, 20, 28, 17, -9, 52, -2, -76, 107, -57, 82, 11, -118, 36, -122, 92, 117, -68, 121, -105, 52, 8, 90, 65, 83, -52, -73, -24, 63, 111, 62, 104, 95, 74, -77, 72, -46, -47, -66, 98, 75, 75, 84, -9, -126, -12, -124, 121, -83, 9, 102, -77, -113, 117, 72, -101, -100, 82, -94, 19, 118, -75};
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
    msg.setTimeStamp(0.428184331806);
    msg.setSource(42810U);
    msg.setSourceEntity(16U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(76U);
    msg.frameid = 139U;
    const char tmp_msg_0[] = {-118, -77, 75, 18, 91, -33, 73, 86, 39, -86, 7, -47, -71, 34, 6, -65, 10, 117, -106, -3, -85, -112, -21, -27, 116, -29, -23, -91, -82, -71, 25, 98, -109, 17, -33, 17, 48, 124, 85, -106, 55, 83, 100, 69, 107, -9, -107, -115, -97, -121, 24, 11, -4, -44, -31, -105, -68, -96, -115, -65, 86, 42, 43, 107, -86, 123, -116, 47, -114, -125, 119, -21, -75, -35, 42, -85, -76, 116, 94, 61, -75, -20};
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
    msg.setTimeStamp(0.478409264);
    msg.setSource(15944U);
    msg.setSourceEntity(67U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(83U);
    msg.frameid = 239U;
    const char tmp_msg_0[] = {-100, 15, -105, -7, -49, -32, 114, -69, -10, 71, -110, 41, 67, 97, -34, -81, 36, -34, -127, -32, -80, -40, 86, -126, 67, -32, 74, 78, -5, 126, 62, 13, -31, 52, 7, -107, 92, -73, -127, 28, 58, -35, 36, 24, -92, -78, -127, 75, 66, 125, -63, 25, 50, -22, 95, -19, 96, 53, -75, 18, 33, -81, 80, -89, -88, -108, -58, -42, 40, -53, 84, 78, 41, -21, 89, -123, 116, 35, -36, -56, -113, 76, -110, 61, -22};
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
    msg.setTimeStamp(0.70488943672);
    msg.setSource(20997U);
    msg.setSourceEntity(63U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(81U);
    msg.fps = 141U;
    msg.quality = 96U;
    msg.reps = 111U;
    msg.tsize = 65U;

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
    msg.setTimeStamp(0.497946188243);
    msg.setSource(51027U);
    msg.setSourceEntity(2U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(80U);
    msg.fps = 18U;
    msg.quality = 174U;
    msg.reps = 210U;
    msg.tsize = 43U;

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
    msg.setTimeStamp(0.179179265346);
    msg.setSource(48295U);
    msg.setSourceEntity(71U);
    msg.setDestination(16999U);
    msg.setDestinationEntity(236U);
    msg.fps = 74U;
    msg.quality = 76U;
    msg.reps = 231U;
    msg.tsize = 89U;

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
    msg.setTimeStamp(0.841848336285);
    msg.setSource(5241U);
    msg.setSourceEntity(109U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.889398210304;
    msg.lon = 0.655009251376;
    msg.depth = 109U;
    msg.speed = 0.596580750235;
    msg.psi = 0.885406011568;

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
    msg.setTimeStamp(0.0629880676583);
    msg.setSource(64333U);
    msg.setSourceEntity(155U);
    msg.setDestination(10694U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.599086611242;
    msg.lon = 0.00427729781951;
    msg.depth = 118U;
    msg.speed = 0.939140049705;
    msg.psi = 0.235832333583;

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
    msg.setTimeStamp(0.883076202776);
    msg.setSource(34638U);
    msg.setSourceEntity(62U);
    msg.setDestination(48465U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.46547794043;
    msg.lon = 0.0407899262755;
    msg.depth = 99U;
    msg.speed = 0.822740694425;
    msg.psi = 0.414239344122;

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
    msg.setTimeStamp(0.21354929292);
    msg.setSource(30540U);
    msg.setSourceEntity(116U);
    msg.setDestination(13017U);
    msg.setDestinationEntity(42U);
    msg.label.assign("EBUKMUIKDVRRQHDQUWEMHYHXGFNIDMBJWSPGOCDNJDEYXLOOLFWXKUIIGZJWNSDQXTTIMBRXFTBSPZJAFDZZHAMRVLIQYAVNTRAOFJCRWPTFOWOZNSDK");
    msg.lat = 0.84307138724;
    msg.lon = 0.552347807926;
    msg.z = 0.706515681944;
    msg.z_units = 107U;
    msg.cog = 0.549110577436;
    msg.sog = 0.533026233253;

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
    msg.setTimeStamp(0.764967725413);
    msg.setSource(56960U);
    msg.setSourceEntity(17U);
    msg.setDestination(26359U);
    msg.setDestinationEntity(248U);
    msg.label.assign("LHJHACFWKUALMENRHPCNRRZXBCQDSBNUMSVTFNNPUEHIKWBFMYOVRRBBTDGCZURVQBDELQVGSYKWFDPEYO");
    msg.lat = 0.688504994552;
    msg.lon = 0.354958854888;
    msg.z = 0.33062784091;
    msg.z_units = 82U;
    msg.cog = 0.228165217361;
    msg.sog = 0.375893887286;

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
    msg.setTimeStamp(0.787962969825);
    msg.setSource(61004U);
    msg.setSourceEntity(200U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(23U);
    msg.label.assign("CTQUAOFFIOLUDIQSJXZPVMFYBMWHKQFYIRRSEAXHEDHWZNCZZCGPNXGSGLDNDARQHRMTLVAMIIVPIXJXXENUGWCFGQYRONGJNMJLSSTHREXTKFQXBSMERBAPBEQTBIGPQUGDHVTLVLKRJTIUBVUKYYAWAPKDCFGZCSNJKFAOUULFANPYHOTJEHTXWVYIHXEKPBZZDEKSQCGKMBOZDOCUJMEYRW");
    msg.lat = 0.748059336756;
    msg.lon = 0.96855580996;
    msg.z = 0.840464425579;
    msg.z_units = 11U;
    msg.cog = 0.169929075109;
    msg.sog = 0.0820360482986;

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
    msg.setTimeStamp(0.0935664635275);
    msg.setSource(47535U);
    msg.setSourceEntity(9U);
    msg.setDestination(43133U);
    msg.setDestinationEntity(30U);
    msg.name.assign("VJQFKRMRWUBWRTAYRVGZABQAEBONVMXQFDCACHVEZFGUXXFYQHLGTVNLXMTARXXOQKCGDOGMKPUXMGS");
    msg.value.assign("FBPAHDQJRBYZMEHCBRWIWSNDBEYYBHDNVWGEFSVFNRUODUPELLUJIVEXUAWYERHBALFXIHJTGDZJCJFZKBAPGVYGEQTSVKVSKRNUXVWDTLJYUAQQKZQQGCZAOZSPOFZJSRMGCNMTLCQMJRMPZITHEPXZMKRDODTYFXPLGBQGYSUOOPCNIFMHLCBWHFTYXGKHRNQOMIDAWKYXNETCWOKIGLNSAUPEJSIMSMADCABVQPIKLCZXILXNKOV");

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
    msg.setTimeStamp(0.0640949983123);
    msg.setSource(33022U);
    msg.setSourceEntity(143U);
    msg.setDestination(23195U);
    msg.setDestinationEntity(89U);
    msg.name.assign("QPOMUWSUXNLPQQVTNMYLPETWZLORLEVHDFFVHCSBNU");
    msg.value.assign("TSVWEDMPUFDPSJAVUINLSSKRGBXJIWFASQOM");

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
    msg.setTimeStamp(0.779265864407);
    msg.setSource(16364U);
    msg.setSourceEntity(164U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(25U);
    msg.name.assign("GWQESXVNTKQLJXBLEHVXTHSNILDBCROYUPPAHSTIPQXPY");
    msg.value.assign("BYOYNAYLNXLNJGFZLKWGJIZCZGMBHIPHABETDZISWHBSZVUOUAFTTBPMDEMCTKNYJTHWLPOCCQSOXUYVIEGDCNDHTBPXVOCFXUYJPMSIADYZKSYEMQSLGAJJFWJPD");

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
    msg.setTimeStamp(0.171372153941);
    msg.setSource(58205U);
    msg.setSourceEntity(54U);
    msg.setDestination(21206U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FZSKICSZAROCULVYAGGMDQQTAGUPWTRWRYESPQDJKZDPGHJTBZINBGAMHLRTJYINDWNCUKFVXLCEKVNURXOJASQMOXVMLHZHYOFKLQUDFUEMVBUHRXSXBJQEFJIXNPQECYUFMTQCWFOMWWCHBLMKJQYSPIOSGPEZRZNHNFAZIICZTNJRSIALXTCQJWGXAHAAGWVOBEKDBUZLRVRTYMYGPBNB");

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
    msg.setTimeStamp(0.831874994969);
    msg.setSource(63019U);
    msg.setSourceEntity(198U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SYXYKYDBDGBTFNLPST");

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
    msg.setTimeStamp(0.254018297883);
    msg.setSource(10845U);
    msg.setSourceEntity(50U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GRVLVTMMAIHGHUTCDNLIJRQIMNFAXTSKOQFMSCUQOPHHRZSCYNSGLJKOMVFBCFXWPSZPWXSRNJNGIGCZWNWUVPOAIXASQKWFKZTDXPIEBWYGETWRREYPOMSXRKEJJQKSGJBHFRNUMBACUDBVBQHNBQXSJYPZDAVVTINTDZZBDORQMLTQCLQFOWHUXMLCWVAUHALXZBDEDLIJUUEWF");

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
    msg.setTimeStamp(0.62957402308);
    msg.setSource(14987U);
    msg.setSourceEntity(161U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(23U);
    msg.name.assign("EUPRENCDJRDPBMYVANRVSW");
    msg.visibility.assign("LGVBDORPNQFFOKVRMIUNQVJUXMZXPAXOMKJYCSHLEKWGHYJEOBDAGLKAOWBTJQLGXHEWZEMWTVSQPXOMLUGOTAHIUGLVZMOEFCZKBJWYBANFDSSFYYRDKNSZQRUQKFFVQXSWYVHMANTMDADNZEHEGMBIUCYRJSBCOCLCNILYTNBDFKCGEYDM");
    msg.scope.assign("ZGHYNEYTVIEHXGGVNFABXVCOVOFUSIDLRLDPUVDVETDRAMQUMHYVKPKBAQFQXOCLWKRZFIGDGNSSWWOSAAXCGJKRSCIITYGAMYYZRWOZNWZWJDUBTJDXNFOSEKHBSJVNMLJFZUSZDMUTUMWYBRTNHQJCHSYXPQCKENXANOLUKCKEWQBDLLPGX");

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
    msg.setTimeStamp(0.123641649138);
    msg.setSource(1431U);
    msg.setSourceEntity(188U);
    msg.setDestination(43200U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ONJAETDWVDVNONUUVWWBGVRSBXVHPVJBBSOYPMGUZUQWKCPVIGQDNZRZWXSLNWDAIJCEJYJXTZPCJYZLZTESIIMLWHUMBXQFRRMFTPFFNN");
    msg.visibility.assign("YISDZCYIWJEFDCJJQSXXNMXITXPCLXRHPLUVCREEEXMPWMOQXPEBSIFWJISLAMYDWZMTWKFCPFIGARKKHBCGUTOYJNMHFBHKFMVMVWZJHAUDTOQBPNPDKXJOPDTQDGOFHWYZJRCNWVBRNUBZPLMDQJSUOETIZADKGSVCVSTGPARGFOVLJWDYZQGIUCNTHQNZTZXOUIAAMRQOALFIQEVNVNCAHLUF");
    msg.scope.assign("MLZSIGDZJOHNEGHBOASJHQKCQKYUQKXWYRIQUOYLJRAXSLPCWRFVTBGVRDEQWRUZFZXGREOLCQHTIOSKFIBOBHIYMFGAZQNVNLQJKGJMJVVTLDFZDOTJAPCBEJCNTXGYKNTFAYIRCKNZQHTVPXVXSBMBSUNNGDIEDXZF");

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
    msg.setTimeStamp(0.919175097306);
    msg.setSource(1948U);
    msg.setSourceEntity(200U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MMKMQJLVPOVQZPOKIDYJCNERFTVLQYGLRJZTPRSQLIHSBRNVVIYZBHDKOGWKWQUMCCGOZZJEDLTDUVAWOARSACNFJLRCLGPMKEXFYBHXGNIATSCAHZYHNPGWMQFKXFXJWDATUWWUFTZJNUOALESEVKZVAYSGQ");
    msg.visibility.assign("PDQZMEHAWNKAOMRXEGBVEF");
    msg.scope.assign("SRRUJVXGUOXTZIRXPMPAETNURC");

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
    msg.setTimeStamp(0.962336002141);
    msg.setSource(32996U);
    msg.setSourceEntity(96U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DGMIEDWLMLGFNRPJBNMFWFUVVRTRCBKHWYHNUUCFXDCYIKJTLHXJAZQCJESBGTOSZAHOC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IRYYMFGWZJIXZEMOVEBVPLUDTMDK");
    tmp_msg_0.value.assign("IVEESNTVGROYZTYQRGELVULSRSKQPFTSBFYQTXARXOIVCACTIDFNCJEKSPXSFJTLZEMUIOIZAUMXMEQRZIUDBXISCNJPOYSBZTAKACZDZUDKMHVPLCGPOIDURAWVNFQBLSFWPNYHWGOBYKLQHFAZWVPGFOAPJBQIBHJRLHCRGMMPPILXECXBTWWJUCJRHWXJYLSDZUFOEDTBAGWDGLDNNHWWYKOMOJ");
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
    msg.setTimeStamp(0.768644807002);
    msg.setSource(4578U);
    msg.setSourceEntity(237U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(7U);
    msg.name.assign("MKLAEZZCIPJSTJNGZSYNXHLOCFOWWSPSJFKQWDEEALCDSEKZOGJIRUCNVUAYLBCTDFLNYQAIFCLH");

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
    msg.setTimeStamp(0.990901797729);
    msg.setSource(16640U);
    msg.setSourceEntity(252U);
    msg.setDestination(20530U);
    msg.setDestinationEntity(108U);
    msg.name.assign("WABDKBNHUSWMPJLEVTZGQOCFYIZZXQIACDGZFXODJFROJQQCFELMJXKNTEZIYRSECOVULLARDUBMAVWDIZXYMEIGLVSUKODHPFXKCUHWTTEVKTBHRYJPHKZTGDQHMYHFNZNENGSOVPDTFGLBITMJVFIRNAJRLQXYWPWBQWOKBWDYMXCYNVZBTSRQKNQGUBMXLK");

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
    msg.setTimeStamp(0.926800281624);
    msg.setSource(49602U);
    msg.setSourceEntity(120U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(178U);
    msg.name.assign("HGKOPYNMLZUVWTNFAGEYZWUYBXMEXIQIFBLRVVKOLOSZIDVLIQJPHAESKOEGOWTVVKVLWFPAZCWSMSNEFGIARNLECUOMDHBAIRFJZAQIJFYQXKBBTSPRRKXGXOCMPUJLUZ");

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
    msg.setTimeStamp(0.315548583327);
    msg.setSource(10483U);
    msg.setSourceEntity(214U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(21U);
    msg.name.assign("UNHOFQALLNDICYHIOPVBQBGYJEKYXZMFOFKO");

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
    msg.setTimeStamp(0.141009324469);
    msg.setSource(36507U);
    msg.setSourceEntity(218U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(75U);
    msg.name.assign("KWVNZHGLYQDHPOLJJAVTIGUUQLTPBVNESJAZYNZQMEDHTTNVGCUGQFTFIAPLFHUXFQABZMIFCOBHJNTIBOSUOORKQMKKKMJXRSYPZVFBDJIRASKWUENXEYQDWZROY");

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
    msg.setTimeStamp(0.853030382615);
    msg.setSource(20915U);
    msg.setSourceEntity(181U);
    msg.setDestination(59828U);
    msg.setDestinationEntity(184U);
    msg.timeout = 4131301767U;

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
    msg.setTimeStamp(0.763273523076);
    msg.setSource(5124U);
    msg.setSourceEntity(160U);
    msg.setDestination(58843U);
    msg.setDestinationEntity(43U);
    msg.timeout = 2301571552U;

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
    msg.setTimeStamp(0.859827722328);
    msg.setSource(48363U);
    msg.setSourceEntity(57U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(115U);
    msg.timeout = 3372737440U;

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
    msg.setTimeStamp(0.0506032373239);
    msg.setSource(24266U);
    msg.setSourceEntity(234U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(113U);
    msg.sessid = 1189448292U;

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
    msg.setTimeStamp(0.151364142439);
    msg.setSource(19607U);
    msg.setSourceEntity(28U);
    msg.setDestination(5303U);
    msg.setDestinationEntity(94U);
    msg.sessid = 3529537164U;

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
    msg.setTimeStamp(0.641921149754);
    msg.setSource(47506U);
    msg.setSourceEntity(132U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(1U);
    msg.sessid = 2569617064U;

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
    msg.setTimeStamp(0.478711694925);
    msg.setSource(8905U);
    msg.setSourceEntity(74U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(77U);
    msg.sessid = 470956829U;
    msg.messages.assign("DPEOREFQSBEASBPKHFJTTNVCIMHHLQHTNUZRJBVNCAGUIIAXPOFRVPDDTLRMOIPMGDGEQATKJFKJNFSXTEUWZLEDUMAXZOHJMBNZMEXCCKXWJLNHTXGHUHDVECLNYRCIZAWFF");

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
    msg.setTimeStamp(0.0614012591524);
    msg.setSource(26298U);
    msg.setSourceEntity(193U);
    msg.setDestination(19087U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3439974967U;
    msg.messages.assign("PHFFZVOCFBCCPHYUZJQKOJHQRVTMKOUU");

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
    msg.setTimeStamp(0.297042024553);
    msg.setSource(40727U);
    msg.setSourceEntity(229U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(206U);
    msg.sessid = 2168929202U;
    msg.messages.assign("VXPCSUJEEPXXRRNLJUJHQHRNQJHTHCOABUHQYGLEEBEYKKPUATPIRWTKOTZDXAFYFBQSOMYVHYEKWKOWTDRNOXRZXYUYZBICGVLUOPGBJJHPMKXDEHFAKMIWSAJUGYLAHPMIIJXTNODJSQVMUC");

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
    msg.setTimeStamp(0.759462388686);
    msg.setSource(42503U);
    msg.setSourceEntity(224U);
    msg.setDestination(33189U);
    msg.setDestinationEntity(171U);
    msg.sessid = 4115579339U;

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
    msg.setTimeStamp(0.221442860018);
    msg.setSource(30805U);
    msg.setSourceEntity(32U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3672477791U;

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
    msg.setTimeStamp(0.44693480106);
    msg.setSource(35421U);
    msg.setSourceEntity(139U);
    msg.setDestination(64194U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1080777560U;

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
    msg.setTimeStamp(0.677534772989);
    msg.setSource(27555U);
    msg.setSourceEntity(232U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(195U);
    msg.sessid = 4273797791U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.438570276638);
    msg.setSource(29305U);
    msg.setSourceEntity(0U);
    msg.setDestination(22167U);
    msg.setDestinationEntity(237U);
    msg.sessid = 417676360U;
    msg.status = 4U;

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
    msg.setTimeStamp(0.545740239647);
    msg.setSource(952U);
    msg.setSourceEntity(184U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(157U);
    msg.sessid = 658106942U;
    msg.status = 81U;

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
    msg.setTimeStamp(0.964159106469);
    msg.setSource(41534U);
    msg.setSourceEntity(87U);
    msg.setDestination(39595U);
    msg.setDestinationEntity(147U);
    msg.name.assign("FEIFLKKSNEQYYTIQGPWHZDFIZFCSLBDZEROKEUCPVPZMSJSJGYVDMBLXDOHCEHBGRIYFLAKLWDNNZMXPMXBHNGBTZPFOJIWMUVUDCOKQOTNMCJZRHKQASIYFSVAGYWJVLQHQSOKBXC");

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
    msg.setTimeStamp(0.057774810218);
    msg.setSource(51869U);
    msg.setSourceEntity(156U);
    msg.setDestination(14722U);
    msg.setDestinationEntity(180U);
    msg.name.assign("GULWMDLWNMJBHJADJCMRPAWYGXRUMUVKTUUHKMZUVVFUEQPHAOTIXFBDDAFIQGCBRTPEOGJFFKSEEMLFLMWGMXWSNYCMRQGXVRZYZDROQBGCWOKPBTTYTZSOVHOSLZIGKPVPIBYKOJNSXSKEPUALKLZDJANKSCBQCLCQPEZDNYEIZREYXOWNBVSGQIUISCMFDAAFQBEYYXNPHIOHQIFHWLNVJAJWJXRZHVWRT");

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
    msg.setTimeStamp(0.106890715384);
    msg.setSource(5216U);
    msg.setSourceEntity(90U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(170U);
    msg.name.assign("SBKMPREIPEQZFQAUWOSFHPURHHWAAWYFQDIEXTZTYCFNPUZOMDFUBAZWBFCCANYVGBWYTJQWSRLILGUEJSCPVEBQJSSNAKYLQRRYQDFCKNLSUCQMGOQVXDFGYUMRDZTKZCLIHDTAPZBJEKUGTIIMNGHJEJKZKSVONANMNMLLZWGHHVSVBPFXXJLMRW");

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
    msg.setTimeStamp(0.679526745308);
    msg.setSource(59294U);
    msg.setSourceEntity(141U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(154U);
    msg.name.assign("KJWGVDCWKERTNQYQHXTVCOQXLVKYCLQBVESILSRUAFSJLDHFUJPLMGMTOXWICCQZFHHUWTPMAYVDLSMHRVIKTWTNDOFBUDSHBJVICPVMQGYYCXEXZXXRGLTOGXFV");

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
    msg.setTimeStamp(0.995638586305);
    msg.setSource(31907U);
    msg.setSourceEntity(235U);
    msg.setDestination(33345U);
    msg.setDestinationEntity(133U);
    msg.name.assign("HRSHIGBDDAGRZNLPTBHIRMYBSNPZMDORIKXEDUQSIPTGSIPNMPJCEUYZFOLENGQUAKLYZPBSQTLVWBHJRINAYIBTRDFPDMOLXVIFEWQKCCVEDXQSAYAWVWYJWWFLP");

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
    msg.setTimeStamp(0.624377909024);
    msg.setSource(58023U);
    msg.setSourceEntity(50U);
    msg.setDestination(47466U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RMXPUATUIPLNFBTEOQ");

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

  return test.getReturnValue();
}
