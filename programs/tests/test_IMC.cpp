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
// IMC XML MD5: 5bfe1a693e9fcbf67bf6175e44375d8c                            *
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
    msg.setTimeStamp(0.537143071948);
    msg.setSource(14448U);
    msg.setSourceEntity(1U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(191U);
    msg.state = 164U;
    msg.flags = 100U;
    msg.description.assign("HCOIMCFDGJPEKMGKNUSYLAHCSLIGVWHDAGDRDLCDBTNZYYOEOEDRNRQLJKHZKMHEMN");

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
    msg.setTimeStamp(0.0232052420934);
    msg.setSource(50243U);
    msg.setSourceEntity(31U);
    msg.setDestination(29853U);
    msg.setDestinationEntity(85U);
    msg.state = 84U;
    msg.flags = 144U;
    msg.description.assign("FEVBUZPSGVDBOICGODDGFCBSDLIHXHWRFDFSXTNCHFCAQDOIZGBRJUDOPAZAWSKYJNQSQYYTK");

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
    msg.setTimeStamp(0.946924314528);
    msg.setSource(34879U);
    msg.setSourceEntity(136U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(116U);
    msg.state = 127U;
    msg.flags = 19U;
    msg.description.assign("MEHRWSVDVGFWTKUEAVCUGHPLBPORUPJRKZWGBNUJLAYFFOCJPILTHTDQCTBXMKYGFASXVKQASZOHOYAAJEEKNEXGHFPZBWANPOHDWDEMQNHCGBJLIVQNGFDLVEJSNUUKLSCMJONJRWOZXQYYIKMFOZCADYXCRYFBZAWILXJTFXXVZMFPNKYYOASHDVBSX");

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
    msg.setTimeStamp(0.124962919808);
    msg.setSource(558U);
    msg.setSourceEntity(167U);
    msg.setDestination(15669U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.535516886176);
    msg.setSource(34407U);
    msg.setSourceEntity(2U);
    msg.setDestination(35637U);
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
    msg.setTimeStamp(0.192235428986);
    msg.setSource(55677U);
    msg.setSourceEntity(125U);
    msg.setDestination(1414U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.511081248065);
    msg.setSource(8146U);
    msg.setSourceEntity(77U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(182U);
    msg.id = 77U;
    msg.label.assign("RZKMTLSXVRIIGXUOCSVGDZFNUDHMWQTE");
    msg.component.assign("VFHYSOGYQIMRHNPVPSSARWWJDCYOKZSJGZBKHCQZIXESLHDGYSSITDFXDDYKPJLHZCEKRTZAHAWVMOYAYWNWGDVUUINVKRABWXOENRWFPLCTNERNJOMFEMGQJINHJCBGWXEVDYMKAJFGYPFZFFESHZIAQGXBHZKELXTNCHLQZIWQGOPUWKXQLUFAVX");
    msg.act_time = 9264U;
    msg.deact_time = 12295U;

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
    msg.setTimeStamp(0.0169697738821);
    msg.setSource(33031U);
    msg.setSourceEntity(210U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(50U);
    msg.id = 160U;
    msg.label.assign("DRYAPUTPBXEGPVRDQUSYWEHMPWWCGRE");
    msg.component.assign("BBEKIXLCXDSJPCGWVVRWQSZLYOFUWNMBP");
    msg.act_time = 15316U;
    msg.deact_time = 49425U;

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
    msg.setTimeStamp(0.65836808596);
    msg.setSource(222U);
    msg.setSourceEntity(32U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(96U);
    msg.id = 134U;
    msg.label.assign("LHTNGXOZCRXAXEAONEIRCHMSFCRMVRDLGGOLAUNIYTWBYMREBQDPWWUVZYELGYVODFFJOUZHWNIXJZCOHJBWN");
    msg.component.assign("MFOADCONPRXESJDKAUWPRQIFYIKJYGPLPTVMYEJJCVDUAXAPCQHFPGGNLTXTDOGECZBGIWMOY");
    msg.act_time = 1484U;
    msg.deact_time = 48989U;

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
    msg.setTimeStamp(0.0625692195696);
    msg.setSource(56926U);
    msg.setSourceEntity(200U);
    msg.setDestination(747U);
    msg.setDestinationEntity(190U);
    msg.id = 218U;

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
    msg.setTimeStamp(0.284360288723);
    msg.setSource(28117U);
    msg.setSourceEntity(213U);
    msg.setDestination(40251U);
    msg.setDestinationEntity(167U);
    msg.id = 170U;

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
    msg.setTimeStamp(0.490929419987);
    msg.setSource(50597U);
    msg.setSourceEntity(137U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(209U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.519594377059);
    msg.setSource(41031U);
    msg.setSourceEntity(165U);
    msg.setDestination(51445U);
    msg.setDestinationEntity(186U);
    msg.op = 55U;
    msg.list.assign("WWZDBPSJURVMOKQWOZAGHXYGUCBLJFOWCKXCLENRHPREFXBIYXTUDIVBMILLLEGLQSADFENGVUICCERVMWRAOQIVIFTSKIPMQDHHSZTVAJRBRJQMXYFOLZNWMGHQKBPZHBZBELFESPDCPZFTNDSMTJBVNYKYCSAVRRIKCJJZMWHHUVQAOQXC");

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
    msg.setTimeStamp(0.726013903263);
    msg.setSource(37858U);
    msg.setSourceEntity(99U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(0U);
    msg.op = 165U;
    msg.list.assign("XDFGKMIPDZFXPEY");

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
    msg.setTimeStamp(0.281974988517);
    msg.setSource(16295U);
    msg.setSourceEntity(101U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(20U);
    msg.op = 132U;
    msg.list.assign("DEFWGGGXQEXUTYPNRWVCOEOVWSJVGTMPDAJGSZRFAWXPYRPPLDICLGTDVFPTUJAKNNBB");

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
    msg.setTimeStamp(0.968774064996);
    msg.setSource(13477U);
    msg.setSourceEntity(203U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(93U);
    msg.value = 232U;

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
    msg.setTimeStamp(0.586453869581);
    msg.setSource(62700U);
    msg.setSourceEntity(235U);
    msg.setDestination(52552U);
    msg.setDestinationEntity(202U);
    msg.value = 110U;

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
    msg.setTimeStamp(0.679893951005);
    msg.setSource(32567U);
    msg.setSourceEntity(188U);
    msg.setDestination(13764U);
    msg.setDestinationEntity(176U);
    msg.value = 139U;

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
    msg.setTimeStamp(0.768072547115);
    msg.setSource(1948U);
    msg.setSourceEntity(252U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("HQVHDPSVOBPPGU");
    msg.message_id = 33855U;

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
    msg.setTimeStamp(0.489011663097);
    msg.setSource(13961U);
    msg.setSourceEntity(91U);
    msg.setDestination(1143U);
    msg.setDestinationEntity(169U);
    msg.consumer.assign("COJKGGVVCLTJDYLMLWEWEIHCTDEIGKFKTAXLDZIIOZBSVBBSVTFRGKDYCJVTPQUIKYSHZJXOCNIUQALLLFIXTMDDEUPJOWRZICVSWXPOYYMQQLEZRJFKHPBVQBRSZYJKNSRAKTR");
    msg.message_id = 8820U;

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
    msg.setTimeStamp(0.644222798311);
    msg.setSource(35604U);
    msg.setSourceEntity(10U);
    msg.setDestination(64577U);
    msg.setDestinationEntity(76U);
    msg.consumer.assign("QAWROBZUVCPLNIUZVVJLYBJIUBASFWBPQCWGSJMLPUMXDZNCRHDAPZHKCEHHCEAXWCEIFIKCLXQELNWDHYRCJTZGQSDUKUVKBENIZXOICJHBRGFIGZTOBPQMTITOLR");
    msg.message_id = 17419U;

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
    msg.setTimeStamp(0.129424052796);
    msg.setSource(17329U);
    msg.setSourceEntity(86U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.618136163887);
    msg.setSource(15837U);
    msg.setSourceEntity(169U);
    msg.setDestination(1394U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.560802810053);
    msg.setSource(22396U);
    msg.setSourceEntity(88U);
    msg.setDestination(6185U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.147538881793);
    msg.setSource(56822U);
    msg.setSourceEntity(120U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(110U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.676665043216);
    msg.setSource(28690U);
    msg.setSourceEntity(197U);
    msg.setDestination(57442U);
    msg.setDestinationEntity(96U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.805208928786);
    msg.setSource(51570U);
    msg.setSourceEntity(117U);
    msg.setDestination(20562U);
    msg.setDestinationEntity(28U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.0169185255305);
    msg.setSource(12822U);
    msg.setSourceEntity(123U);
    msg.setDestination(49893U);
    msg.setDestinationEntity(155U);
    msg.total_steps = 205U;
    msg.step_number = 198U;
    msg.step.assign("WSPMGNADZDJI");
    msg.flags = 250U;

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
    msg.setTimeStamp(0.983039206513);
    msg.setSource(17124U);
    msg.setSourceEntity(90U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 39U;
    msg.step_number = 74U;
    msg.step.assign("TPYXTSFRCFBRBXNXFUHJTZWOMISWBWGZOKEIFGYGCVLOQNFDYHUMXBZZKALAZWDXWRXVPYGKBQAJIVLNKKLKOZJWGBSQSZFNPBDJIRKHYOODEUIJWOYMEJVAHEZESMGHOHGFEOCWPUCBPQRPLZTQVJEQ");
    msg.flags = 128U;

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
    msg.setTimeStamp(0.0662197809775);
    msg.setSource(1325U);
    msg.setSourceEntity(173U);
    msg.setDestination(49270U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 253U;
    msg.step_number = 27U;
    msg.step.assign("RXPSZAXJEACEEYSLKMDBPILWBWGVNZARZGMVQLPTTICFXLFUDKSUWFXABJJNIVWRTWROEPGCORDPFGHTKQHKFXQJOFHXJOZFWIUMQTJDKZEKCMIBCCNRHVXDNLPYBFUYGMKPVYSMQVYAAAXQJTRPISNHAFIMCHTZIUDQRLUYOHQOEMGHUOYIUJSWBSRNUSJLWYKYBNOGOCECBDZENICZVRVDKPHELEWTQSUBN");
    msg.flags = 202U;

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
    msg.setTimeStamp(0.0564504186719);
    msg.setSource(24098U);
    msg.setSourceEntity(126U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(132U);
    msg.state = 133U;
    msg.error.assign("JVSLBZBPKRHHBYOYUAECDPXGSRI");

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
    msg.setTimeStamp(0.569912568434);
    msg.setSource(16507U);
    msg.setSourceEntity(11U);
    msg.setDestination(46119U);
    msg.setDestinationEntity(231U);
    msg.state = 124U;
    msg.error.assign("YPOEUGSBBIRJUSWZHAHZHOJQJHTNCFMGACBDJAKJQLEFETEYCVPSN");

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
    msg.setTimeStamp(0.56530483898);
    msg.setSource(47005U);
    msg.setSourceEntity(184U);
    msg.setDestination(10997U);
    msg.setDestinationEntity(170U);
    msg.state = 244U;
    msg.error.assign("HUYXSZAENMJVZASSVXMCIGMDQIBOOTBVQKSYHZRJUHVIMFJGVGEZTQPYXJBVYJIGWRKHWGAOWNDTKTCXVKRYUQNHLWURGLSLXTCOLORNQWTWAIOMLIDBDYCJZIHKPLAMHJSBQYBBNUDCFPAMDSPLJZPRLQCXFOLZSITMZZXKKJYAWMPAVERLXEEBVGIPCAFXWNUWKHFBIKYCSOHYXEDUFAGEQBFGFDUNFRTENFCNQRU");

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
    msg.setTimeStamp(0.942199885642);
    msg.setSource(54119U);
    msg.setSourceEntity(198U);
    msg.setDestination(65498U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.3425287765);
    msg.setSource(33447U);
    msg.setSourceEntity(2U);
    msg.setDestination(49773U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.953957151574);
    msg.setSource(56431U);
    msg.setSourceEntity(122U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.445800611846);
    msg.setSource(62536U);
    msg.setSourceEntity(16U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(100U);
    msg.op = 31U;
    msg.speed_min = 0.700505858318;
    msg.speed_max = 0.57379654078;
    msg.long_accel = 0.363457163445;
    msg.alt_max_msl = 0.87120287627;
    msg.dive_fraction_max = 0.534652103056;
    msg.climb_fraction_max = 0.510543925927;
    msg.bank_max = 0.567538854763;
    msg.p_max = 0.999571333886;
    msg.pitch_min = 0.1743610842;
    msg.pitch_max = 0.68510165337;
    msg.q_max = 0.805699606193;
    msg.g_min = 0.0926247071232;
    msg.g_max = 0.775205232645;
    msg.g_lat_max = 0.491629085029;
    msg.rpm_min = 0.784142031919;
    msg.rpm_max = 0.759195823451;
    msg.rpm_rate_max = 0.714479769501;

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
    msg.setTimeStamp(0.10756782221);
    msg.setSource(14219U);
    msg.setSourceEntity(97U);
    msg.setDestination(757U);
    msg.setDestinationEntity(49U);
    msg.op = 79U;
    msg.speed_min = 0.903103467813;
    msg.speed_max = 0.962738745088;
    msg.long_accel = 0.153090881181;
    msg.alt_max_msl = 0.815719136434;
    msg.dive_fraction_max = 0.427561661356;
    msg.climb_fraction_max = 0.503186105226;
    msg.bank_max = 0.985295585249;
    msg.p_max = 0.456450968839;
    msg.pitch_min = 0.952419826118;
    msg.pitch_max = 0.221204780789;
    msg.q_max = 0.516397931083;
    msg.g_min = 0.675445723185;
    msg.g_max = 0.743588646279;
    msg.g_lat_max = 0.968099745885;
    msg.rpm_min = 0.945893553861;
    msg.rpm_max = 0.236925554343;
    msg.rpm_rate_max = 0.827895909686;

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
    msg.setTimeStamp(0.170054007322);
    msg.setSource(23304U);
    msg.setSourceEntity(219U);
    msg.setDestination(57328U);
    msg.setDestinationEntity(32U);
    msg.op = 27U;
    msg.speed_min = 0.611778238978;
    msg.speed_max = 0.364497599298;
    msg.long_accel = 0.119755432147;
    msg.alt_max_msl = 0.363031331503;
    msg.dive_fraction_max = 0.880193058072;
    msg.climb_fraction_max = 0.101892537256;
    msg.bank_max = 0.400537782545;
    msg.p_max = 0.00655783633016;
    msg.pitch_min = 0.56015302635;
    msg.pitch_max = 0.0321481382817;
    msg.q_max = 0.257892883352;
    msg.g_min = 0.308201063145;
    msg.g_max = 0.498676353912;
    msg.g_lat_max = 0.602475784069;
    msg.rpm_min = 0.893515191265;
    msg.rpm_max = 0.0764395993775;
    msg.rpm_rate_max = 0.176868463651;

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
    msg.setTimeStamp(0.429801954854);
    msg.setSource(15025U);
    msg.setSourceEntity(245U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(211U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 29U;
    tmp_msg_0.goal_id.assign("HIIPAPEWRQQUYWYBFSRDLHUQMBLGOGASIHOYKERTNJZEHEYYJFQVLHZCILTPSBTHTXXHNTENXRWKKHOILPVWCXAZVXVRFSDSGXPIZMGDCAMTWIDRFCMUQRBJZLUDWRVLJFFYZHNOFHJUOREVJXKDMDMKFOSCAMLOSGDZQSIKIPXWCNECOXCVUSPTDOQZVIDBUYAACN");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("KDWQLMWSWMNHOCEWJRERVYRKZSLKOLDXFRELLXAWBRNJKCSFRHUHTAEPAAVIGZQEMSGFNVPHIXGTXFOJIAVANCJSDGBTQAKZHUDQUSHDMQIMDSZXUFKUGIUBZFLJZLCPVFQKIYMFFNZRYEHBHWBYJBWJTPOBNCXEAKDBMPGCQMVHQOEXGYUXAOLKOOCV");
    tmp_tmp_msg_0_0.predicate.assign("EQIPHXNVEBHOYLCSDLBYERZUSNRKBBPDDKXOCJZLWGAIJRCQFWGATWTWG");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TVXJZIZUEAEAYWCYUIMHRMDKIJKFIOGRNLQWNZYDNBBFOGWWKXSAOJFGZYDVBLKSYQLVMAGZXGMNRANAHOWOFTDWYRLCBPPNQGAXSOT");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 214U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("DORQVDTIQGECXRPURVLDKWPEKRXZZIWVXVBVHKPWAOBZMCJPTEMVALAHXWJSSSPJWFUSOMCKLFBOTEJGCFBHYYRU");
    tmp_tmp_tmp_msg_0_0_0.max.assign("ALJZXFZGVMYNBDQCDYVLHIECOUROOUKASSHNKQXQMTLHPOFFVXMGLLLHOCEETBMMDORRCIPXSLO");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0256767784285);
    msg.setSource(49979U);
    msg.setSourceEntity(222U);
    msg.setDestination(37024U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.783222957463);
    msg.setSource(43072U);
    msg.setSourceEntity(244U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(15U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 157U;
    tmp_msg_0.plan_id.assign("MGRIGPNNNRFXKGXLKZZSOGZTJZWUGRVYDYVMVSWEFBWZZDCMPSUJMILPCKAZQEMQOZUETUUDHHNJYYGRRVQTEJKUKYFWOGWVTNLAAQWVSVXKLHDKJFCPOQVXLQSEBBDQUXINXPHSOIWTLCSZGBRYTDFISJUXQUAXNZMOPHHWMMQCRDBBTDPYPNCDEHIBHJMAIAKR");
    tmp_msg_0.comm_level = 183U;
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
    msg.setTimeStamp(0.275222962959);
    msg.setSource(58560U);
    msg.setSourceEntity(62U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.416122685514;
    msg.lon = 0.911041463111;
    msg.height = 0.402942781054;
    msg.x = 0.424876821231;
    msg.y = 0.128037555149;
    msg.z = 0.00288913840481;
    msg.phi = 0.0876250310548;
    msg.theta = 0.52895027439;
    msg.psi = 0.633188976753;
    msg.u = 0.299023239513;
    msg.v = 0.326346969341;
    msg.w = 0.58062868807;
    msg.p = 0.464480801619;
    msg.q = 0.446660888312;
    msg.r = 0.199792519195;
    msg.svx = 0.562744345432;
    msg.svy = 0.629076610688;
    msg.svz = 0.092499257081;

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
    msg.setTimeStamp(0.42483578277);
    msg.setSource(8624U);
    msg.setSourceEntity(252U);
    msg.setDestination(17722U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.260724896519;
    msg.lon = 0.829606398591;
    msg.height = 0.548118396977;
    msg.x = 0.86284196024;
    msg.y = 0.978828619882;
    msg.z = 0.0185052133974;
    msg.phi = 0.33689699606;
    msg.theta = 0.0508823343969;
    msg.psi = 0.920649141249;
    msg.u = 0.139330553517;
    msg.v = 0.377687356569;
    msg.w = 0.363455335738;
    msg.p = 0.636656205338;
    msg.q = 0.0595082411998;
    msg.r = 0.951260290118;
    msg.svx = 0.835689740909;
    msg.svy = 0.488576942811;
    msg.svz = 0.329555677283;

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
    msg.setTimeStamp(0.868607632472);
    msg.setSource(12883U);
    msg.setSourceEntity(93U);
    msg.setDestination(3058U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.260605132213;
    msg.lon = 0.325935790949;
    msg.height = 0.819626983255;
    msg.x = 0.553819494292;
    msg.y = 0.568365653937;
    msg.z = 0.579907628065;
    msg.phi = 0.998416036679;
    msg.theta = 0.22415119133;
    msg.psi = 0.00348605658467;
    msg.u = 0.25047396004;
    msg.v = 0.369966220778;
    msg.w = 0.447147371424;
    msg.p = 0.813688969975;
    msg.q = 0.0795724852599;
    msg.r = 0.566302920665;
    msg.svx = 0.835889938736;
    msg.svy = 0.521787771889;
    msg.svz = 0.373290718036;

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
    msg.setTimeStamp(0.43973351228);
    msg.setSource(52538U);
    msg.setSourceEntity(149U);
    msg.setDestination(63352U);
    msg.setDestinationEntity(167U);
    msg.op = 196U;
    msg.entities.assign("VFOUISGAQSWLTPVVUTPVODJQOMGJZXEKNUIZJFHJOMJYCNGTIAFPSIHHAVPCYJSLODKAABCFCBKLKCARFOTUJZXPZLMQNCVZZWOJKRFBWITBQNQWHKXXGQBDRLUTTBWYNFIMZSAMHAMSKUDGVGRCVMLTZBCKSFTNEDHLBSMORASBMUPLNPEYDIDEDKAHRZLGRPZYQECHXYNQUCDTORPGQUQVWJYFWOXXRSEDELRE");

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
    msg.setTimeStamp(0.131991347275);
    msg.setSource(42433U);
    msg.setSourceEntity(249U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(41U);
    msg.op = 226U;
    msg.entities.assign("OOQDCRFXZFRYEYLWWZZNHKJZAZRDMINIDBAYMLLQKOLAPXORNRQEYRBGTTNNUSQYHPBTPNRGCJMWMKWPMPKQHMVMXBGRBIVYAUHQPOSVOLSSGNAQEKOSSSICUIKEZYRXNNBPTBHITCTXOBWIXKLXHLJFMEDYJFHQCGMJGQQCPGJUPVVTUGJTALZBFXIESWE");

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
    msg.setTimeStamp(0.995387166885);
    msg.setSource(60123U);
    msg.setSourceEntity(124U);
    msg.setDestination(50489U);
    msg.setDestinationEntity(228U);
    msg.op = 243U;
    msg.entities.assign("VRABBPLTSOADCUSVUGJEDBLHERPRXRFVUWDVMPWMKWIWACHGIVLUEFTZCIXYIZYKAAFDTQQNPJJRZAUKNHMIDOYGSXKQLXESGQMKGCYBQRMSACEBJZPMWPOMDOMRN");

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
    msg.setTimeStamp(0.720900501225);
    msg.setSource(3474U);
    msg.setSourceEntity(253U);
    msg.setDestination(51099U);
    msg.setDestinationEntity(0U);
    msg.type = 134U;
    msg.speed = 46625U;
    const char tmp_msg_0[] = {-75, -81, 68, 117, -16, -85, 115, 99, 40, -31, 91, -125, 69, 64, -69, 64, -41, -8, 8, 11, -40, 83, 59, -97, -116, -62, 25, -78, -39, 123, 31, 63, 32, 61, -120, 62, 22, 49, 14, -59, -2, 89, 125, 58, -32, 113, 23, -5, -60};
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
    msg.setTimeStamp(0.201577714074);
    msg.setSource(36211U);
    msg.setSourceEntity(194U);
    msg.setDestination(52812U);
    msg.setDestinationEntity(112U);
    msg.type = 28U;
    msg.speed = 32735U;
    const char tmp_msg_0[] = {-38, 50, -123, 46, -8, 21, -12, 55, -56, 1, 43, -54, 50, -92, 98, -34, -61, 100, 9, -115, -118, -23, 108, 90, -36, 113, -115, -15, 67, -82, -68, 39, 84, -26, 123, 111, 4, -3, -8, -71, 51, -52, -121, -53, 82, 34, -62, -95, 9, 53, -31, 89, 9, -105, 30, -78, 99, -85, 8, -1, 20, 80, 44, -68, 86, 0, -49, -98, -92, -20, 16, 119, -48, -106, 96, -108, 74, 88, -121, -91, -90, -92, -64, -124, 121, 111, -104, -8, -19, 96, -74, -103, 49, -75, -88, 76, -75, 19, 103, 1, -33, -112, 100, -33, 5, 39, 11, -117, -64, 117, -111, -80, -34, 115, -95, 81, 28, 60, -3, 71, 107, -3, 55, 14, 67, 71, 85, -64, 40, -120, 67, -71, 2, 11, -82, -19, -82, -79, -43, -103, 61, 6, 37, -81, -13, 63, -32, -11, -9, 97, -17, 60, -23, -18, -41, 88, 122, -74, 54, -117, 93, 84, -43, -81, 31, 94, -26, -40, -99, -125, -60, -47, 13, 90, 44, -105, -18, 70, 60, 105, -26, -110};
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
    msg.setTimeStamp(0.422316623955);
    msg.setSource(35708U);
    msg.setSourceEntity(96U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(7U);
    msg.type = 146U;
    msg.speed = 46138U;
    const char tmp_msg_0[] = {-101, 27, -99, 16, 19, -88, 94, 100, 28, 77, 106, 44, 66, 65, -127, 46, 79, 53, 38, -127, 63, 48, -86, -72, -97, 126, 110, -72, -14, -49, 14, 126, 63, -119, 102, 58, 70, 124, 40, 94, -90, -42, 53, -62, -112, 12, 53, 16, -90, -37, 7, -78, 65, -87, 98, -27, 126, -94, 88, 114, -128, 73, -46, 112, -82, -109, -87, -3, -35, 95, -64, 4, -113, 55, 70, 0, 26, 15, -48, -30, 9, -35, 6, -67, -46, -49, -45, -61, -80, -24, 33, 54, -20, -85, 49, 89, 68, 22, 50, -2, 3, 72, -114, -46, -70, 6, 93, 6, -25, -25, 98, 119, 4, 34, 25, 114, 70, -106, 71, 8, -112, 102, 36, 102, -115, -63, -81, 34, 13, -39, -77};
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
    msg.setTimeStamp(0.0929910370353);
    msg.setSource(15735U);
    msg.setSourceEntity(139U);
    msg.setDestination(7233U);
    msg.setDestinationEntity(175U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.0481518589787;
    msg.bank2p_pgain = 0.647606162988;

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
    msg.setTimeStamp(0.911732203654);
    msg.setSource(2858U);
    msg.setSourceEntity(244U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(251U);
    msg.op = 178U;
    msg.tas2acc_pgain = 0.638218719867;
    msg.bank2p_pgain = 0.708927795584;

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
    msg.setTimeStamp(0.619619952847);
    msg.setSource(9874U);
    msg.setSourceEntity(200U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(87U);
    msg.op = 61U;
    msg.tas2acc_pgain = 0.122345913371;
    msg.bank2p_pgain = 0.416333195837;

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
    msg.setTimeStamp(0.944628548312);
    msg.setSource(37078U);
    msg.setSourceEntity(57U);
    msg.setDestination(34543U);
    msg.setDestinationEntity(224U);
    msg.available = 3681661729U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.545819427557);
    msg.setSource(41058U);
    msg.setSourceEntity(85U);
    msg.setDestination(32313U);
    msg.setDestinationEntity(55U);
    msg.available = 3272477127U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.898251527743);
    msg.setSource(13993U);
    msg.setSourceEntity(228U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(25U);
    msg.available = 3161095939U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.205921826383);
    msg.setSource(40519U);
    msg.setSourceEntity(116U);
    msg.setDestination(31440U);
    msg.setDestinationEntity(47U);
    msg.op = 196U;
    msg.snapshot.assign("ORBIWYHPECQADLFHRXZNJTKDETHQDRWUJIIFKYCQOGFHMPQGORUKMYPBRQPBSTNBBSYUUABXCAXCPROFNSGETSIXSVWMQTLCOYKNPHWKGNSTZODUBCAFMIXCFWUFLHZSQ");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.id.assign("ZGIMKEBISSRXZTEAWQDBRCJTOLTAMZNIUJGOANZONFYVXEOPRUAAQLZMGDRKYSRYSNSJWCQQNGHNDYWPHFPEOBKGBQUAKMIQDKOEWVFHZWCZKHTDOSBJPUIKPAPGHGJCLXZJPJENFCIMYBRPIKXSHKIGVSJDWCVBMYVDFEUYNTXHEYRLXLGTCRQXYRUTZQLV");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15448U;
    tmp_tmp_msg_0_0.name.assign("JDYJCXMREOOSJUHRBIQDGTMAWQINNRYNIBHVJHWKZTPUUZSHGXXMXYZEGUKJASTCXTANAUPOVYVZQGQOUTXMQLMCZVKFUCLWGVPNNYSFQFBAOWDWYTMNEMECEIISPAMKHRKWKZHHLXVORSTKVLVFOFWFJILZOYLKUFTFPIZDDAPGBYKHDYONOWGMZEQBPDWFSQLBDFKTWRJALQQDXHSCMIEAEPJBXBCDESBPNIGRRGNSUJVHAJVGCPR");
    tmp_tmp_msg_0_0.custom.assign("NOIJGJRXYAEHTRQZTTWMGMBIXSRMWGWAUCWXNPOUNKUCEFJMVTSNFXJFPIBLPQEITVLXVDYKURFNSLVODURBQTPYNKLYTOZMXNGYFDFDEBIOMVZCGKGLGHEACWSBUKJATURZHABQOOLLYPJCSYYWHPBMPCPYBXQJKFUIHBLOABSMVEXQICDQGEMEVRRKLUNZHSQEVAZANNJCVO");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.40028382775);
    msg.setSource(32097U);
    msg.setSourceEntity(129U);
    msg.setDestination(33136U);
    msg.setDestinationEntity(153U);
    msg.op = 213U;
    msg.snapshot.assign("FHKUARWYDFXTPJKSIMBTIJFGZDKMBYIMBUAIOIGVTQRMWYNRNVHLJWASIWHVWEBZPDXFOVVMNTKEBYJP");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.388399348908;
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
    msg.setTimeStamp(0.687489263397);
    msg.setSource(60553U);
    msg.setSourceEntity(94U);
    msg.setDestination(1861U);
    msg.setDestinationEntity(148U);
    msg.op = 116U;
    msg.snapshot.assign("UQUZVLSDRSIJKMYNEPBAFJLAMAUNBUVQDSYIJWWCVPARLZOHCXKOHNRLDRYNGPEFDTTYCOSMZXQNWVVXJKCJXFFVELGBWYILGUNUIKOHMLNXDZHOGRAPKNGJHEOMKFIQSBIPCECPIFTSKAMBCREXTQMCTYWJQFEAKHBVIOVWQIJSEHRWVUBTIPMPYYZGDADVFGRWOCJSPQXTFMDBHNAXLHW");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 63981U;
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
    msg.setTimeStamp(0.279977457456);
    msg.setSource(36681U);
    msg.setSourceEntity(19U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(8U);
    msg.op = 41U;
    msg.name.assign("TJVFBPVSTHLXBPYFQNRRDEIJJZQSCRQZPTALA");

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
    msg.setTimeStamp(0.423975905354);
    msg.setSource(64913U);
    msg.setSourceEntity(134U);
    msg.setDestination(51754U);
    msg.setDestinationEntity(18U);
    msg.op = 231U;
    msg.name.assign("QVTOWBQSUEJIFAZCQYUHJCNNSNKMFWWRAQGSSFMZCEIVKPTIIOCXTVVPCESJMPYLRANTRIWHRWCVLHODRDYQHHCBAKCHXLIGJNEQPYZYSBLONONXSYVKZCWMESUDAJZKVTHAGQTIVFBGENZRXFDUBFYLIOXPOBOMRWTAZGXMIFODKURUARDVQGDPPGMTXNFHKVGSPTLWYDOJGFHKLXUBZWPQUKKLDE");

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
    msg.setTimeStamp(0.420974755359);
    msg.setSource(8879U);
    msg.setSourceEntity(204U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(246U);
    msg.op = 172U;
    msg.name.assign("YCXYRIQMBFGVXSAPPIEBDHPUWMQCSJZNLMQKMSAJTYLFGEBKZRBNTDNGMILBDXOYHNMFLDCGLWJOVICFDZRDJFYVMNPRUGJSQOVTCBPLGERKNUWPKFKHYGHOXQSOKEZRIEVZUYEUJJXXVDAAVCJKNEZLMISOLLXNADHVANYQUOZTTBIUZYC");

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
    msg.setTimeStamp(0.217169378053);
    msg.setSource(112U);
    msg.setSourceEntity(22U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(77U);
    msg.type = 117U;
    msg.htime = 0.147256169107;
    msg.context.assign("RINFGFKXBQJLUNXOXUZDTMCSNSCOAYNOSZKLPAPMEUOYNXARVJNUEMBCHXPWMGAIWIDJUAIKUIKDMEJFVHLFZKKOWRTFCJPZZGWWPPVYWFVRFBHBEBQETAEAHCHLARVLBMSEGHHLFXZXAGOCDPTYIYTGBZOHPLSQAHOJHXRJDUNZERDMIDPYOMUGCXKNTKUYTYVCMVQNQJTDLYUVNEPQFTDORQQVWSYLZDVIMQGZIJBJW");
    msg.text.assign("UFEIIWGPZAXZWMWJZIYJGDZACBUTRDNWOQEBBKCJWCYRWZGTLULE");

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
    msg.setTimeStamp(0.494794810543);
    msg.setSource(44542U);
    msg.setSourceEntity(34U);
    msg.setDestination(53519U);
    msg.setDestinationEntity(210U);
    msg.type = 184U;
    msg.htime = 0.48806112329;
    msg.context.assign("ICXERGQVKWTWOZIMRBGOUFQAWIONWRNFBZVLHEVYTDHPAUOPBKHVWNRRHYRFGLPTFSQMTEQILICPJVYXMJPDCXMXOHZLLHNRMBCCQYKSAIMITRFGEAAWATSXCXOOGDZAFJMWVDUJCGBHXYGULRXCJKQSFHSVJUBIQZYEAKBNEQUPSPXECS");
    msg.text.assign("DWESTADKJJNNSIQUFWXUIDRXYQDNDKKRCSVGUBJERXQA");

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
    msg.setTimeStamp(0.547638802242);
    msg.setSource(41316U);
    msg.setSourceEntity(205U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(222U);
    msg.type = 151U;
    msg.htime = 0.235218772989;
    msg.context.assign("HOBTXSWLPHCVJWSHTBOMQBHLFRDULPYSXFQ");
    msg.text.assign("TSRSKQXAULMTQPBCAOCBOGBYDLEIHXXOPUDIWFVFCMJHMZYMSJVQYCSNCXKPDOVBBRUSZEGTHWQXNUDAQGQJJFJLPSYRAY");

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
    msg.setTimeStamp(0.046683556551);
    msg.setSource(54405U);
    msg.setSourceEntity(39U);
    msg.setDestination(28721U);
    msg.setDestinationEntity(28U);
    msg.command = 231U;
    msg.htime = 0.573453218577;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 85U;
    tmp_msg_0.htime = 0.456642137015;
    tmp_msg_0.context.assign("UQKSHVVNYABOWFJRBRWKZDCOOQECXVVLNLGYPZKJGHCFFJPNROGPHUMRWKFHYAKVDZIMTXOEXZEJCLSUMJOEVMLEQDXOAMFGJPTDZUJGWTCMZJYSEQSNHANXSWNBHDLPUGAKTDSHXGCPBQSWIQBICEFJSITJGIKVZZWVABMUXPUUYMFLKSEFXDDHBCMLAH");
    tmp_msg_0.text.assign("JLYDJAIUMNQUPTIDFSZASZMIZNVQZNPNBBOPZBDGZXNKOYLQXXHSZEENQVPONDOPMXBIDAQCM");
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
    msg.setTimeStamp(0.703757335222);
    msg.setSource(54814U);
    msg.setSourceEntity(161U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(153U);
    msg.command = 165U;
    msg.htime = 0.678404512555;

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
    msg.setTimeStamp(0.776812268096);
    msg.setSource(62200U);
    msg.setSourceEntity(69U);
    msg.setDestination(60807U);
    msg.setDestinationEntity(75U);
    msg.command = 202U;
    msg.htime = 0.97012643803;

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
    msg.setTimeStamp(0.498556700328);
    msg.setSource(4618U);
    msg.setSourceEntity(208U);
    msg.setDestination(64749U);
    msg.setDestinationEntity(214U);
    msg.op = 33U;
    msg.file.assign("WEJDDRJCXUWOSGPZBPADNJXZDHDLEIVYOJADXWSYJXOVOGIKQSTHBVMSUHWOLXIHUTCIQRBCYJNERZPJNUCESYVZHEGXMQAWAAUTWCGUICLKBYHQQVZIBTOXXPYFFGSDAVERZKWPKFRMNUYSYLENKTC");

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
    msg.setTimeStamp(0.376977733444);
    msg.setSource(40609U);
    msg.setSourceEntity(170U);
    msg.setDestination(31833U);
    msg.setDestinationEntity(238U);
    msg.op = 116U;
    msg.file.assign("PLYXOMGVXNOLJHBLORSAFNKKUVECEHWNJQXZWUFFMXBIMGOUAOFXNZWIHLKZTDMSJFUJROCQCBRUZVTNARUMEVRPNINCYOAIGHGUXYBZSSQMLQV");

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
    msg.setTimeStamp(0.30359646554);
    msg.setSource(63438U);
    msg.setSourceEntity(209U);
    msg.setDestination(25665U);
    msg.setDestinationEntity(74U);
    msg.op = 73U;
    msg.file.assign("YTLTZEWWFKYJZTXZQSWXHEWIXCKYGUDAMXHPUGMDCQIDSQFKNBJSNANIWBPCCYENFZZNHBQEJVUDRXGUHALWMMAYFTRFVOPUKCEJTTROXNECGIGFAOXZQPPETHARVIAPBPOOWRNUVKHQBUAODLYBTCFVULRSBHPYGVDUXMKSIJKQVOGMMLRJOJZGNRDHNIZSRQEHDKJRTPGDYMNJVLFXIFFLEDBVIBMXUOLYTWQLZEWCIQLJVSCPS");

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
    msg.setTimeStamp(0.193472433039);
    msg.setSource(37528U);
    msg.setSourceEntity(228U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(6U);
    msg.op = 179U;
    msg.clock = 0.712450348174;
    msg.tz = -91;

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
    msg.setTimeStamp(0.38849424576);
    msg.setSource(38130U);
    msg.setSourceEntity(126U);
    msg.setDestination(34333U);
    msg.setDestinationEntity(252U);
    msg.op = 233U;
    msg.clock = 0.124595845646;
    msg.tz = -71;

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
    msg.setTimeStamp(0.464929319608);
    msg.setSource(43580U);
    msg.setSourceEntity(145U);
    msg.setDestination(58101U);
    msg.setDestinationEntity(103U);
    msg.op = 116U;
    msg.clock = 0.81387817558;
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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.239791264582);
    msg.setSource(63331U);
    msg.setSourceEntity(203U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.462583380127);
    msg.setSource(45785U);
    msg.setSourceEntity(254U);
    msg.setDestination(64238U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.692939718593);
    msg.setSource(8793U);
    msg.setSourceEntity(210U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.656724068193);
    msg.setSource(14641U);
    msg.setSourceEntity(207U);
    msg.setDestination(6365U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("PCWCTJQILTBHSHCZHUAMDHPPRMADMVWJRRVKTRBKFYTZIJHGBTDBUCDISIATPASOFYAJEPECWZWWRCQMBNVKNSMPGEJFTMIAXOXKHUGOKYKAQLRQFVMKUXDFAPXTVF");
    msg.sys_type = 35U;
    msg.owner = 1423U;
    msg.lat = 0.842296264038;
    msg.lon = 0.884992973669;
    msg.height = 0.191346106954;
    msg.services.assign("YLVYMWFNPXSIDFXUWMZJTEYSCZEYJFHZYCNMIUGMYOWDXGIRFLPVHWHKJFBPUTDZMBMYQLMZERJSCKROVNDIRBNXEJSAOWTKXMHKNUZIPQOKNWPRFTAXZBXYZKXAVPRKAFLPIOHDGBOHUZFQQGDVJOGAWTIRHQTEREBKTXUGH");

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
    msg.setTimeStamp(0.777622665023);
    msg.setSource(49781U);
    msg.setSourceEntity(187U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("KPCMXZAEBSHIODLKAYBPNAUIFNWTMPHMOLUKDJRWIVAWULRGTGYPLCYWSJVQOOBSGLCMAEZFBQHRYRONZIUEXPUQJPXFLQEHBWBYOXKJVEHMTFXTCRXZDPTAGZYDLTGOKKJDRHINDFLCYFVXTQVJEPNSRMNWGROTFWMMFQCDLYQGJSIVCAITAHDEDVVSNEINB");
    msg.sys_type = 18U;
    msg.owner = 6451U;
    msg.lat = 0.0582492644413;
    msg.lon = 0.468762252124;
    msg.height = 0.985873501957;
    msg.services.assign("UMOQWVDTJPDMTQNOAESLTCGRIESRXATZGPHBYPNQPUWSHKPAVBMPNUELBFYTSJAFWPZSDMBZEWAAPVRNMUHUBKFBXNKKTZDTELKSBUJHDNYCQYODBZEYETSEHCXSNQRZQGXDHZLJFXGMLF");

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
    msg.setTimeStamp(0.454464214808);
    msg.setSource(63187U);
    msg.setSourceEntity(230U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("QNKSBKHMQHRIOVQATGLWSZWNEKFFTHWLDTSBFPWKUFOSPFGTJNZZNHNIGYDDATWOAUHIQEBDEYHDMRKQNDUPZWEQSNSKSEXHCEGRUIYZODLRPZBJBTGGIIJWYPAYNILKURSJZFCMABRDTORQXIGWDJEVCTVJVZUXHUAKOCBWLBOUMQVMOFGMLHIPYNEXSUAGR");
    msg.sys_type = 168U;
    msg.owner = 50238U;
    msg.lat = 0.0834306742267;
    msg.lon = 0.295010817006;
    msg.height = 0.610106256246;
    msg.services.assign("URIHHWOAQEECVJYIXTKJPETDTIKFLUGOPFGQQXDWIQFBNTJSKUMOBDSBHYWLZXVHGIEYAMMXCKWXAOEXMLDSGAHRUGZUMFYBWGYVZSJCRLJSDYKORHQKUZHJVDJZTCKIOBWEGKCVTLGZOFESBLITBANRNFEIUHEZSIPCXXORLKNL");

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
    msg.setTimeStamp(0.505277453981);
    msg.setSource(49926U);
    msg.setSourceEntity(76U);
    msg.setDestination(23740U);
    msg.setDestinationEntity(53U);
    msg.service.assign("EUXQRLFDUULNYMCYPXJRMZLZXXSBCKGIJTGDFZBYVEYTIWNKKUNRTRYMZEQUMLFLHQGCVZEDVIUJGDWHPSHIZKHCAPDKBMNDGSTWIVLUVNAXSEHAPSDXETLROMNDUQYBIHSTSPAQAGTRHJYFOKEQJZHPOTPNYCFVCINRDJ");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.531305789994);
    msg.setSource(9925U);
    msg.setSourceEntity(118U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(117U);
    msg.service.assign("FOQNCBYIJSVUXNMVD");
    msg.service_type = 210U;

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
    msg.setTimeStamp(0.990506004738);
    msg.setSource(3882U);
    msg.setSourceEntity(160U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(235U);
    msg.service.assign("MFVNISMNKUUITXUTPVWAMSSZOTKZKBLWAWEFGPNVWKIAMLLWHLXQGLHGJTFCEAVTJGXIFAOQMHWRHMYAYDEBKLMTSIJSPAVSDBOEQRHDWPHZCRNWBPLOTOJXOBKPYVJHYNXUYJEMIIAIQFYRVTLKXPQBGCVGYDPCRHQOZSRBLIBZUPSTZARDRINOYRNZNHMZNCCSHBGCBGJLEDKUREUDPCXCOQS");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.470533019964);
    msg.setSource(6961U);
    msg.setSourceEntity(28U);
    msg.setDestination(38887U);
    msg.setDestinationEntity(102U);
    msg.value = 0.654848530591;

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
    msg.setTimeStamp(0.478187294318);
    msg.setSource(5600U);
    msg.setSourceEntity(2U);
    msg.setDestination(53991U);
    msg.setDestinationEntity(33U);
    msg.value = 0.291060924206;

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
    msg.setTimeStamp(0.847467689708);
    msg.setSource(61190U);
    msg.setSourceEntity(43U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(104U);
    msg.value = 0.841004714421;

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
    msg.setTimeStamp(0.357353974437);
    msg.setSource(52138U);
    msg.setSourceEntity(134U);
    msg.setDestination(15351U);
    msg.setDestinationEntity(97U);
    msg.value = 0.45926076677;

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
    msg.setTimeStamp(0.271955348371);
    msg.setSource(28657U);
    msg.setSourceEntity(66U);
    msg.setDestination(22192U);
    msg.setDestinationEntity(225U);
    msg.value = 0.717165144444;

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
    msg.setTimeStamp(0.250304626402);
    msg.setSource(5577U);
    msg.setSourceEntity(44U);
    msg.setDestination(58382U);
    msg.setDestinationEntity(17U);
    msg.value = 0.184233279438;

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
    msg.setTimeStamp(0.468492951229);
    msg.setSource(46520U);
    msg.setSourceEntity(66U);
    msg.setDestination(31932U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0823539819488;

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
    msg.setTimeStamp(0.77283166684);
    msg.setSource(48214U);
    msg.setSourceEntity(192U);
    msg.setDestination(29275U);
    msg.setDestinationEntity(238U);
    msg.value = 0.489728196544;

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
    msg.setTimeStamp(0.399675287187);
    msg.setSource(31836U);
    msg.setSourceEntity(57U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(116U);
    msg.value = 0.721706077058;

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
    msg.setTimeStamp(0.891643068853);
    msg.setSource(45450U);
    msg.setSourceEntity(133U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(147U);
    msg.number.assign("MIJAHJURDUYYJVZPVNOZLBNMBTHVFYXIRAPHYRTCVNCLHDEPXNDGYATEOFXVZSOHFMRWEQYTXHWQPXEMWUAOCJCTPNUQCVGDFNRSFCGBTFILYZBWZCNLIMFJHS");
    msg.timeout = 20864U;
    msg.contents.assign("DHZUWXAYLMAJLSHSNBIMHUFQJBUXBFJRIPLQKRYCLWBDWVIOHHZFRTZJCTQPPWCGFMJFXSJXNPZBDYAATPCUNTCRDTELSRYMMRFZZVSRYDWOZNFUUOIW");

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
    msg.setTimeStamp(0.531263784253);
    msg.setSource(64182U);
    msg.setSourceEntity(23U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(171U);
    msg.number.assign("CUVTDOBTLIUKCRZKYMPWDBOIGRFCQVUMJEFYTAPFIAHELBCHNDJNELXHRSACJBMSZDBPILOE");
    msg.timeout = 14865U;
    msg.contents.assign("QUQJLAEGBSLOQBMCHZUTDEBYAEUJMWQPMQSFHDJMIHGYFHEXNGVFWSKKULLOIOUTASCKYALJNSTVYTXBRDLXCVLDZHMUGKNFIPOJXFGIFXNOONMPWZBXMIQTRQQNDHGVSRTE");

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
    msg.setTimeStamp(0.31241961755);
    msg.setSource(55189U);
    msg.setSourceEntity(38U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(18U);
    msg.number.assign("HMFGQOARWUWRIIBMGHWMPDFUGMSVXSNJDVEXOQUOQDKIBRSNAABGTCHHZWBFGARHWULIXVNNEELEKWZXPAUSDLZFCUYPGYNFYQIPNVZMPLHJFBTZKPBTDAJCILAZXXRUSOVCTHDPYCJLZQYTBBMKWVUIVTKBDBDCDUMSGRWTFROCNLMAAVNRFKPQVKPCQLJTW");
    msg.timeout = 13454U;
    msg.contents.assign("XAJRAGFATCSN");

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
    msg.setTimeStamp(0.590394382382);
    msg.setSource(7556U);
    msg.setSourceEntity(77U);
    msg.setDestination(40184U);
    msg.setDestinationEntity(31U);
    msg.seq = 3305873866U;
    msg.destination.assign("RXDWENSVLBJHRMVDSVGTZYVVJMAKZPXTQFJGYGRAQCRQILGQHGUKOWNOQOFPTOCEFXDSUJLPHVSQYPFHDAHZAGKUXOEYTXTDIUXIRPSIYBCEFPJEWJUFFZWKGEOWZSCAUBOLVRMNHUOIQRWODP");
    msg.timeout = 46850U;
    const char tmp_msg_0[] = {3, 14, -88, 17, -88, -124, -42, 42, 44, 21, -79, -116, -61, 16, 76, -19, -85, -67, 34, -108, -55, -16, 19, 77, 94, -81, -96, 104, 54, -41, -82, -66, -11, 119, 122, 21, -98, 54, -36, 68, -109, -17, 100, 73, -104, -82, 71, 123, 70, 37, 8, 37, -3, -122, -13, -115, 46, 67, 65, 87, 71, -75, 6, 119, 111, -115, 125, 119, -120, -58, 57, 71, -29, 86, -41, -75, -5, -63, -98, -67, 48, -111, 26, 84, 122, -93, 67, -92, 35, 72, -47, 120, -111, -39, -106, 123, 35, 52, -114, -48, -9, 51, -18, -70, 5, -85, -90, 100, 40, 20, -4, 102, 107, 12, -122, 53, 32, -114, -111, -87, 96, -53, 113, 62, 87, -123, 34, -115, 115, 99, -30, 13, 53, -97, 121, -71, 1, -65, 44, -64, 74, -58, -50, 24, -120, 57, -45, 67, -4, 88, -39, 93, -81, 10, 17, -117, 69, -7, 27, -32};
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
    msg.setTimeStamp(0.777612608335);
    msg.setSource(31398U);
    msg.setSourceEntity(163U);
    msg.setDestination(5002U);
    msg.setDestinationEntity(15U);
    msg.seq = 405797637U;
    msg.destination.assign("FJYUYGQISUSLLTRPXBEGGOGQ");
    msg.timeout = 8533U;
    const char tmp_msg_0[] = {42, -46, 97, 112, -42, -44, -93, -75, 5, -18, 49, 7, 17, -61, -71};
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
    msg.setTimeStamp(0.587496822149);
    msg.setSource(18582U);
    msg.setSourceEntity(181U);
    msg.setDestination(119U);
    msg.setDestinationEntity(154U);
    msg.seq = 3468328973U;
    msg.destination.assign("UFSJGOGXPAGLO");
    msg.timeout = 49676U;
    const char tmp_msg_0[] = {112, -15, 74, -60, -8, 113, -58, 82, 100, 27, 9, 14, -44, -72, -39, -96, 77, -32};
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
    msg.setTimeStamp(0.877960814173);
    msg.setSource(29197U);
    msg.setSourceEntity(38U);
    msg.setDestination(44959U);
    msg.setDestinationEntity(55U);
    msg.source.assign("DWJHJXQSINBWTFFAIENVDVEUXERWPJSCGPMALLCUGWPDVOGUWWCOGKNOMXOVQWFAUXYYEJPKZMACMCAYMPKHCYUBSMSBLWTQHFKMTIHNQDOLHUBRRNZTKDPMGUXVHWNGTPHQRAWUQEZJEFYRJBIEHLOAALZBJDFXYBYRLETPKQGHGUFNYAYBKNTDYVSRKDEFOTUXTPMFQXIZSIBOLJDVVGNPCXJVZKZMXKCSSA");
    const char tmp_msg_0[] = {-36, -122, 2, 10, -82, -17, -61, -83, 12, -52, -33, 24, -16, 88, 101, -113, -41, 5, 85, -17, -15, 57, -120, 125, -55, 71, -26, -53, 105, 7, -104, -115, 19, 44, -45, -46, -119, -54, -70, 1, -73, -104, -9, -56, 41, -9, -23, 124, -82, -27, 10, -51, 105, 0, -69, -118, 81, 71, -60, 91, -99, 2, -100, 74, -107, 119, -119, 91, -82, 112};
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
    msg.setTimeStamp(0.177317769089);
    msg.setSource(13361U);
    msg.setSourceEntity(77U);
    msg.setDestination(46019U);
    msg.setDestinationEntity(66U);
    msg.source.assign("OOYYAXEYLQHLIFJGQDVKSCGBIMTOZYGBPBSORVKNOGSXRJWNCBIVEPOWZVQCMXWHZMFOIHUXNQLWNVHLFYZGKJUPEHANGRSVPZSNRFDRPUXHXMMBKLXWUJZLJDYOAWTVMLMJZXKPMFTHTDECEQTJBCYWKXQYJCACPUNSSZAGSFJAIONCEVUCTTHXVDLDWEUFTIELMJBDDGFQVTSCRDAZRPIFMUNUIRE");
    const char tmp_msg_0[] = {-14, 79, 91, 68, 117, -124, -34, 14, -82, 106, 45, 96, 70, 123, -28, 111, 87, -19, -66, -4, -88, 59, -38, 108, 56, 11, 24, -15, 6, -98, 63, 102, 35, -10, -95, 121, -121, 78, -115, -70, 88, 32, 125, -8, 114, -110, 15, -18, 52, 47, -68, 14, 74, 37, -62, 106, 88, 1, 90, 68, 121, -24, 88, 117, 18, -32, -44, 53, 100, 67, 57, 62, -6, 4, -124, 111, 113, 109, -29, 112, -65, -7, -11, 16, 76, -1, -100, 89, 40, 114, -15, 52, -109, -80, 12, 50, 111, 34, -112, 28, 20, 49, -21, 11, 87, -103, -120, -13, -52, 21, 101, -123, -97, -33, -2, 19, 106, 7, -24, -106, -29, -71, 68, 77, 86, 124, -1};
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
    msg.setTimeStamp(0.44444394055);
    msg.setSource(59843U);
    msg.setSourceEntity(171U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(246U);
    msg.source.assign("FVSZQGOSAFEXYCFSLAFDAWQRKRSDLOIITUXZBRTLQHMEZPXWNJANIWTZJVWKLRMCJJPLBVHFROJTENURNHAQQZPSYYNGPEBQKHTNBYACIRDWBCJXJYGUOCDXAFUEDMBESUYZLCCMJMLKTLVADXJPFUPFNZERBOGPFBWGVXMGDYOSCRKKTTSLHQPKNOIGYBXVAGTIANXMVOOVUFQDPKWWIQPSIMGXSVTUEVEHQNKMCHHZZBWDODMUGYZRYH");
    const char tmp_msg_0[] = {24, 99, -41, 123, 71, 107, -2, -80, -13, 55, -43, -87, 26, -120, -98, 2, 11, 85, -1, 8, 49, -87, 104, 110, -100, -89, 83, -8, -47, -11, 45, 17, -55, -49, 72, 85, 79, -48, 31, -54, 58, -48, 34, 102, 88, -76, 27, -6, -91, -120, 115, -85, 87, 11, 90, 14, 37, 124, -64, -31, 91, 16, -7, 90, -36, -80, 51, -75, -49, 79, 113, -53, 91, -107, 119, -117, 40, -60, -83, -95, 108, 90, 93, -93, -99, 67, -117, 6, -81, 90, -34, 75, 30, 114, 100, 54, -125, -110, -72, -96, 2, -18, -110, 37, 30, 111, -13, -23, 38, -56, 28, 2, 69, -114, -117, 24, -73, 119, -39, 18, 109, 24, -17, -109, -79, -64, 82, -28, -3, 93, -19, -53, 73, -115, 5, -52, 92, 61, 114, -84, -10, 7, 73, 121, -62, -115, 94, -1, -40, -53, 94, 109, 80, -26, -64, 74, 101, 47, 0, 122, -94, 72, -107, 116, -127, 74, -29, -117, -91, 35, 121, 89, 111, -90, 100, 12, -112, -92, 39, -53, -76, 120, -60, -70, -105, -17, -120, -56, -128, -18, -103, 27, -90, -28, -79, -72, 71, 118, -60, -119, -65, 20, 95, -96, 27, -114, 66, 122, 56, -91, -127};
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
    msg.setTimeStamp(0.0975548979968);
    msg.setSource(36642U);
    msg.setSourceEntity(149U);
    msg.setDestination(31477U);
    msg.setDestinationEntity(230U);
    msg.seq = 2349523037U;
    msg.state = 232U;
    msg.error.assign("UYQBICOICROLNLDKNPNVACXTNJHGDJYZDTHTNRZAEMWCQIUPAOGXOFDMFWIVETIPBETZEITZNJKIMCYWSASRZUOHLQRQKVQDAZLYFGATXCUKWAQSEFBVYVHHPXLSBQJWGYABVJUFBKVHXPBULDFUZMKGZVNJYYEREINQOHJEPBRLDCJSCFWXSTQAVLJSSLFSZPYFHDCEOGPOFGWMKKMTRCWXKXPUV");

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
    msg.setTimeStamp(0.990578254791);
    msg.setSource(12064U);
    msg.setSourceEntity(77U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(22U);
    msg.seq = 1650841973U;
    msg.state = 249U;
    msg.error.assign("EUFUAUOHAAJPAUTWRBVSYKQJLOEUOGCJAFNDPBQCWGCLVXSGQHONXHMWVAXBIOPZAFLTVYKCKKDDNJEIIDKTVJRGXYNPAQNFHTPYTDJTWVFNIZENLZK");

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
    msg.setTimeStamp(0.330835512999);
    msg.setSource(53218U);
    msg.setSourceEntity(141U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(109U);
    msg.seq = 303330172U;
    msg.state = 183U;
    msg.error.assign("FKRLZBZDGVGFQAVAJDQPLHWMCYLZKEQVWRDUGUYCBXCUCHNJTGUGTGTPHFIPMSTXJYZBLOWMOTPIKNWFWJFJEWEBDHFQFHGQTZCNPSRSXZIEXZTCQQNHZVGQSUMSCRCOANKIDRSEIUVREMLSYCIDSOLRGXHJREUBTCYKRNAKKOLHFWVLAJLOPIIBDLVPYRFZUNIJNOOTVTHMOJGJAEXUBVVQEMH");

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
    msg.setTimeStamp(0.944719675784);
    msg.setSource(17165U);
    msg.setSourceEntity(221U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("SRUUMDSCTQQUZZHIKAFUKRFLVKLOHCMOYXAMTVLXVKYXMDUQBNOPJGFJDYCDWFNOGERHINOXRSREVPPUSQEOHZRXFUWDKZJSBNDFHOTTMBNWAIP");
    msg.text.assign("EUBSDYANQLFMMVSXUFLKZPFMBIACSWQXVEFJSSPWHBVTMXZXHJULHBWQAYIDRPPMUYVULXBQQASNJRJGNVTFWGO");

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
    msg.setTimeStamp(0.376312714089);
    msg.setSource(23286U);
    msg.setSourceEntity(182U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("RXUCZPUOIEOAWORMHAPYQBXVPBCDJVTZORTEJFLDOFVTKTMANGZWSXDGZMEYYUNRCJWQDPKSNRUEJLBDNMKRDZCLMBAJMKNILYPPQIPAPLVUVXJGSUSVYB");
    msg.text.assign("OAVBHFUEUBFMPCTRPJNSTXICYOXNCKHYIBNBTQADNYFSJJJFBZVWCNRHDZDQEQRZUAFGCLAWBZYGWZDELKASXICGGFZFKALDHHDCL");

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
    msg.setTimeStamp(0.335339090755);
    msg.setSource(5749U);
    msg.setSourceEntity(74U);
    msg.setDestination(41476U);
    msg.setDestinationEntity(232U);
    msg.origin.assign("QTIRXOSHRCECAJQUSTOPBDZPYNZLXUFCUINVNVXXNVZAPNGGRPRMUMFZYAPUOUMFLQABJTJJGIEEWJJEJODTKTYSCQIHEMYKTOGFWBHDGEWURDOCMPNKYKRSUXNV");
    msg.text.assign("YZZZMQAVXIGHMUNDBBY");

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
    msg.setTimeStamp(0.452698162873);
    msg.setSource(9989U);
    msg.setSourceEntity(181U);
    msg.setDestination(23985U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("GAPNNNYJJQHTVEFQIVULAMVZRYYQOICUUFVEFBNKBEQYRILVXCYVTUKIENLXOXERDOJEZIRNKLRHDFCGNGBORHXOZZCWZITOMFXRUPSGQEFXMPOBLMZGJHCBDTYYTFWLIWJVLMMWSXOTATHATIWGVEFDXHWNAQSKWJJTLTDDLPDPGBPUHXASDNBJYCFWWHLKKVFAMGSASARDZDCBPHVBHEZCSOJXEUYQMYMGAMRSUZNBRZ");
    msg.htime = 0.0529440251624;
    msg.lat = 0.182938642995;
    msg.lon = 0.373837808952;
    const char tmp_msg_0[] = {105, 99, -77, -65, 56, -93, 92, -82, -101, -55, -76, 62, -82, 26, 26, -1, -106, 74, -82, -22, -96, -21, -121, -69, 31, 78, 94, -5, -76, 122, 84, -103, -84, 108, 115, 18, -74, -49, -21, 121, 70, -81, 8, -73, 43, -75, -29, 117, 42, -60, -14, 94, -78, -47, 88, -116, -32, -122, 63, 1, 88, -123, 84, -36, 91, -1, -65, -100, -20, -37, 8, -123, 44, -7, -67, -42, -124, -18, 5, -107, 87, -70, -86, -86, -56, -105, 61, -16, 48, 116, 13, -84, -114, 112, 57, 79, 60, -58, -18, 55, -96, 37, 59, -53, 118, -7, 87, 114, 43, -107, -88, 83, 39, -103, 70};
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
    msg.setTimeStamp(0.0178154520061);
    msg.setSource(10760U);
    msg.setSourceEntity(198U);
    msg.setDestination(58800U);
    msg.setDestinationEntity(172U);
    msg.origin.assign("RSPCYLPYBVEPMAHIDOIYETTMBVSRCVJMZOFDXMFQTWFNZYJAGMJGXFASGR");
    msg.htime = 0.402541211256;
    msg.lat = 0.779218905635;
    msg.lon = 0.852359984155;
    const char tmp_msg_0[] = {-54, 116, 30, 74, 15, -88, 20, -47, -32, 64, 37, -49, 89, 106, -16, -54, -117, 20, 57, -21, -14, -35, 95, 63, 70, 25, 47, 17, -127, 87, -63, 54, 74, -79, -59, -106, 126, -116, -126, 79, -44, 12, 112, -127, 97, 19, 123, 120, 75, -48, -33, 62, -68, -35, -34, -41, 115, -8, 30, -128, 68, 32, -80, -8, 9, -72, 116, 80, -80, 24, 7, 29, -7, -89, 16, 93, 2, -20, 32, 58, -33, -25, 48, -47, -3, -32, -103, -40, -114, 104, 1, -22, -93, -89, -103, -47, -88, -17, -52, -49, -19, 18, 36, -71, 63, -114, -77, -102, -14, -35, 93, 45, 41, -7, -82, 9, -84, 75, -79, 62, 47, 18, -118, 35, 82, -47, -29, -126, -62, -49, -36, 22, -103, 1, 73, -91, -114};
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
    msg.setTimeStamp(0.0550229929081);
    msg.setSource(44819U);
    msg.setSourceEntity(201U);
    msg.setDestination(21894U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("JPRNGIDCMCLPRLFQGSBQSBEQKPDURNOAJPFZGFETGWPDWEIDJRFDXTIHZDZIJVUAUXWJLAYMMZCEOVSYZVQNAENDXHTVCSGLKBIEPYNXIIJLSGWKTRQCOAOYQCRBEMRSOXFXDWLOHWIRGAXZMIMVZBJJKLEDHVEYWTMTSYYUQXJYKOOWKZKTFIHOQBLUMNDKGFHXFCELUTHBAZXYAKUNATSNQGLBSHSANVNOYHJCFCFPVBGCZMPKWR");
    msg.htime = 0.130010646232;
    msg.lat = 0.206670355621;
    msg.lon = 0.285744890098;
    const char tmp_msg_0[] = {-93, -20, 7, -117, -10, 97, 102, 12, -26, 24, -25, 61, -70, -91, -3, -128, -70};
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
    msg.setTimeStamp(0.755477678027);
    msg.setSource(38622U);
    msg.setSourceEntity(61U);
    msg.setDestination(16410U);
    msg.setDestinationEntity(207U);
    msg.req_id = 26621U;
    msg.ttl = 25500U;
    msg.destination.assign("ZMMGAKURHVCHRZGLFSDPTJPWJRNPQPFYAOKMGYDWFXTQDXKSUGUNKZIJMYDNMPLZEDTDIOHSPIYUEBEESBEHSYFVDMTAWYGNZVGCATSUVHZBYUJ");
    const char tmp_msg_0[] = {-11, -126, 92, 44, 18, -90, -12, -37, -35, 30, 9, 27, -102, -92, -108, 62, 3, -62, 121, -6, 97, -21, -111, -109, 18, -43, -89, 46, 101, 107, -118, 99, -109, -63, -59, 83, -116, 103, 23, -126, -77, 72, 64, -88, -80, 66, -68, 36, 107, -79, 67, -33, -8, 4, -83, 34, -81, 91, 79, -49, 79, -10, 115, -126, 2, -63, -44, -98, 34, -116, 54, -66, -102, -11, 105, 21, 38, 63, -20, 49, -113, 3, 65, -67, -21, 106, 117, -13, -97, -108, 103, 53, 76, -18, -73, 35, -34, -58, -43, -33, 23, 84, 108, 49, 50, -9, -46, 95, 2, -38, 123, -6, -128, -11, 14, 35, 71, -11, 75, -13, -7, -21, 123, -34, 20, 58, 9, -120, -66, 62, -74, 63, 51, 13, 30, -122, 106, -106, 0, -53, -16, 33, -74, -108, 48, -41, -14, 64, 95, -39, -42, 111, -50, -125, -103, -22, 104, -9, -77, 85, 78, 24, -36, -51, 112, 39, -71, 22, 77, 82, -32, 49, 112, -74, 83, -56, 76, -29, 109, 107, 67, 37, -113, -106, -127, 23, 7, 75, 85, 96, -10, -87, -102, -21, -86, 22, -24, -39, 117, 23, -44, -113, 44, -4, -35, -14, -77, 116, 108, -87, 15, -64, -104, -2, -119, -112, 25, 40, 14, -117, 44, 70, -26, -6, -99, -41, 80, 104};
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
    msg.setTimeStamp(0.525749652262);
    msg.setSource(5844U);
    msg.setSourceEntity(245U);
    msg.setDestination(48631U);
    msg.setDestinationEntity(67U);
    msg.req_id = 44001U;
    msg.ttl = 407U;
    msg.destination.assign("GAGTVHZAIVPTGCNSRMAHNHMCJXOUOYUZSKKAXXLTMJMHMNGOSXUHMIUBGPMCHPRJRRFSZCDPFMZNDQAYARCQGWJMKLFOWRSCFUNDPVBSNPNOFKAJBXIQVEYUEIQBTZELIBEBLSKWWWTVXJTECEKOBTLUDPXKYQIWYRSBFLGNFKAOXO");
    const char tmp_msg_0[] = {-12, 45, -64, 38, -91, 49, -22, -2, -41, -33, -71, -10, 51, 3, 83, 8, 66, 109, -11, 45, -66, -9, 66, -29, 66, 0, 115, -77, -43, -85, 72, 1, -61, 24, -30, -78, 10, -127, -25, -83, 10, -100, -112, -18, -90, 75, 118, 108, 3, 119, 42, -12, -87, -42, -70, -67, -111, -33, 53, 34, -33, 46, -34, 28, 97, -122, 28, 93, -84, 122, 7, 38, -116, 2, -103, 78, 64, 13, -1, -33, -128, -80, -59, 102, -101, -10, -96, 87, -79, -121, -110, 23, 101, 9, -2, -26, 66, 88, 83, -121, 84, 65, 99, -28, -11, -52, 1, -67, -11, -20, 113, 43, 109, -66, 106, -89, 7, 115, -82, -36, 79, -84, -47, 93, -43, -105, 53, -77, 7, -12, 118, 38, 85, -122, 36, -2, -25, 61, 59, 36, -101, -24, -127, -43, -75, -42, 27, -65, 21, -21, -14, 107, 38, 56, -82, 96, 12, -6, -21, 22, 90, 22, -31, 120, 70, -72, 57, 116, 11, 18, -5, 56, 43, 51, 77, 55, 27, 11, -28, -22, -117, 34, 72, 116, 63, -47, 77, 67, -20, -58, -40, -106, 17, 4, -50, 90, -111, 1};
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
    msg.setTimeStamp(0.0303894585264);
    msg.setSource(31925U);
    msg.setSourceEntity(102U);
    msg.setDestination(45991U);
    msg.setDestinationEntity(197U);
    msg.req_id = 43688U;
    msg.ttl = 618U;
    msg.destination.assign("NAIUYRLAAXVHZHWIDFSVHYGSBVNZMTLVSNPOCWQMQGPVEGBTDERGGCHXHRGEJBQLDJLYWOYAWEGLMHRDMFI");
    const char tmp_msg_0[] = {-71, -18, -16, 109, -69, -27, -112, 106, -76, -111, 57, 10, -80, 77, 83, -11, 92, -88, -113, 4, 116, 50, -60, -107, -20, -55, 35, 64, -11, 122, -105, 94, 58, 3, -75, -21, -49, 63, -32, 47, -104, 57, -111, -68, -73, 10, -111, 2, -119, 114, -115, 101, -13, 83, 25, -123, -79, 70, -11, 71, 49, 40, 73, 79, -85, 22, 1, -67, 47, 5, 94, 8, -37, -100, 33, 85, 84, 45, 93, -7, 104, 126, -21, 41, -87, 9, 64, -87, 124, -79, 79, -98, -33, 54, 57, 88, -96, -125, -110, -4, -19, 65, -92, 84, 8, -127, 115, -71, 68, 68, -17};
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
    msg.setTimeStamp(0.100780828081);
    msg.setSource(23983U);
    msg.setSourceEntity(178U);
    msg.setDestination(49235U);
    msg.setDestinationEntity(4U);
    msg.req_id = 21659U;
    msg.status = 3U;
    msg.text.assign("CEXFKCRKCJELSQUWNWQWJYDBKZZEODHMZRVJIYKGABRNOHJFWZBUIWOTMYPYBPRVFKVMAFSNUEGXK");

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
    msg.setTimeStamp(0.0151675023623);
    msg.setSource(3717U);
    msg.setSourceEntity(234U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(90U);
    msg.req_id = 46481U;
    msg.status = 195U;
    msg.text.assign("HAUEOEZCLNMUFNGNGHIIDDOAGFEPFKSUGQVRJR");

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
    msg.setTimeStamp(0.0145017200456);
    msg.setSource(53576U);
    msg.setSourceEntity(223U);
    msg.setDestination(46990U);
    msg.setDestinationEntity(179U);
    msg.req_id = 2149U;
    msg.status = 250U;
    msg.text.assign("PRJAYWRFBTZCILOFQTZRTLXLIINDJPBRAOCKRTBWFXXBHDABQCAITROMGXLNMVPAMUJZKPQPZNYYOOZD");

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
    msg.setTimeStamp(0.643993818767);
    msg.setSource(28355U);
    msg.setSourceEntity(245U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("WQIOABQOKDERCMMBOHFOURTSYNPZXICCOQEWAEJYSMFTVQSWKBKMNLVDSPSGJLVAAEFHKMLBFHNUXGOWPMBMCBEMPXRHE");
    msg.links = 1772392303U;

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
    msg.setTimeStamp(0.0851429692893);
    msg.setSource(22197U);
    msg.setSourceEntity(249U);
    msg.setDestination(38640U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("KZAHYIEJBMAZYLXCOEVQHJTRPUNSOPTMVCOYAONMJIEVBTZCDCU");
    msg.links = 1599838896U;

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
    msg.setTimeStamp(0.0354182440334);
    msg.setSource(5356U);
    msg.setSourceEntity(92U);
    msg.setDestination(41646U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("ILHWZUJLLTRCNVGFCEJSPCOJXXAEVFVXTERLYHABCPRQBSQJLAJYMKOEEXKMZRTGIBILDKIXDZYWOQLSVKIDKPWATMVNDTEIWOWEHUNKTTIQCHPJFFOMWRLEWUKHGGNZFCZTALPQJWFNNYGBCYHMSIYBXZKONXU");
    msg.links = 1032355159U;

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
    msg.setTimeStamp(0.292013418291);
    msg.setSource(48044U);
    msg.setSourceEntity(9U);
    msg.setDestination(52197U);
    msg.setDestinationEntity(220U);
    msg.groupname.assign("DDZYMEQXTBIQWARTGVJVSURZGZZMGFJFTSPCHQHMHQIAWDORWFEUKDXEYPTCOTPZNNDYYIOKJOMRDRWSVMK");
    msg.action = 19U;
    msg.grouplist.assign("RPNVDPWQBEDTXDVHJVFBRXCSVJMKPBWUELOSPDUOCZIXCZAG");

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
    msg.setTimeStamp(0.0929696998933);
    msg.setSource(8700U);
    msg.setSourceEntity(87U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(163U);
    msg.groupname.assign("VKFOSSLXRMFCRBYNBCLUJDYMBHJXXBRNRNWETKDIJQRYTKQHQUCBQJKKDXIGQYYXZCACEKVCUHXCHWNPGFOVJVPFJWZVSCONOQLYIDFWMSFPPGHSUBOKIMTAJWGKKAEDPRPAAIYULSRLBV");
    msg.action = 0U;
    msg.grouplist.assign("JCIJVWYHHHDWSQPJOMNZJKOVCNAGARPNSUQKPKTEWPMYQBIXAGFGLPOVIMWTUXECIANDZUJLTSTJRMLZTPEKKGSEDAUSKDCQJFRLERSKZXVWTKCWJSYBGHHNGHMWEMIUYYYPGQXKFMVBNZEJEVHYOFZAXFBBBUSGJEOMQLICVLQIZXNFXDAVEYOICWZMDMVUPTTRCOQRRLSIWSCBBHOBXLVBUHNFOXTPOWYLUTAIPRLGNZGDRNFKAQYRFFDAX");

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
    msg.setTimeStamp(0.32255235049);
    msg.setSource(40329U);
    msg.setSourceEntity(247U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(158U);
    msg.groupname.assign("JHKOXTCRYTAIRKOCDYLVCZDGOVZUFZOANDJRSQPHFAIFHLOLIHCHZRVUWGSBJEHHZBDOPGJIPMQSEGAOOUOGBRGDNUQWJGSBIEPOBNFK");
    msg.action = 51U;
    msg.grouplist.assign("OZSYJMUGBMUKPDFFMZYJKUXRICQGNIVOWXNNAXSMVWMBTZFKDLQODGBNAPCWMARVSWMRLAJ");

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
    msg.setTimeStamp(0.467731254912);
    msg.setSource(35702U);
    msg.setSourceEntity(118U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(153U);
    msg.value = 0.984395361647;
    msg.sys_src = 59722U;

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
    msg.setTimeStamp(0.467432846351);
    msg.setSource(64553U);
    msg.setSourceEntity(122U);
    msg.setDestination(32994U);
    msg.setDestinationEntity(117U);
    msg.value = 0.44088231838;
    msg.sys_src = 8367U;

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
    msg.setTimeStamp(0.887737526995);
    msg.setSource(48426U);
    msg.setSourceEntity(251U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(219U);
    msg.value = 0.132536127167;
    msg.sys_src = 152U;

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
    msg.setTimeStamp(0.611757518387);
    msg.setSource(46874U);
    msg.setSourceEntity(99U);
    msg.setDestination(31522U);
    msg.setDestinationEntity(210U);
    msg.id = 5U;
    msg.range = 0.211748653187;

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
    msg.setTimeStamp(0.462211369886);
    msg.setSource(22391U);
    msg.setSourceEntity(161U);
    msg.setDestination(30679U);
    msg.setDestinationEntity(0U);
    msg.id = 252U;
    msg.range = 0.607456157453;

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
    msg.setTimeStamp(0.00835579080191);
    msg.setSource(19088U);
    msg.setSourceEntity(187U);
    msg.setDestination(13694U);
    msg.setDestinationEntity(187U);
    msg.id = 191U;
    msg.range = 0.969021374969;

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
    msg.setTimeStamp(0.477380031504);
    msg.setSource(22044U);
    msg.setSourceEntity(150U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(190U);
    msg.beacon.assign("OWCJXYJJLZUFXPINSNQSJQUPRLNEMKEOTQSWKHHRKTLSMCRFCSYDANBITEOXQGNRBNJYFAXRKPMVKALZQWUMYOXOGJRPAVNMYVHRPSNCQVZTAAZYJMWWHUACQOLDVROIPWA");
    msg.lat = 0.0273093502077;
    msg.lon = 0.208327991991;
    msg.depth = 0.822803132713;

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
    msg.setTimeStamp(0.815071744324);
    msg.setSource(39137U);
    msg.setSourceEntity(164U);
    msg.setDestination(20170U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("JSBOELASSSXGIIZCAOMLWJPBQRPCRIQRYQGLKXUKYXPKOWJRZQHHSEPCDGUSRUEFHVXMXNJNHZBMDMCKIAKZVUKYIVOGWTJDTJNLWSOAVYUPWSFANVREGABYTGLBHLFNUTOGPMINNIWEMUQEQEQPKFTXVA");
    msg.lat = 0.685409397315;
    msg.lon = 0.134415706814;
    msg.depth = 0.71694656863;

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
    msg.setTimeStamp(0.27866154236);
    msg.setSource(5889U);
    msg.setSourceEntity(122U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("CMPJYIRDUOOUJHRWQOJVESTYDQYZJVPFDBEMTYQVVACQESFGKCILHCJXTOLADWNNVOPGMMGLPDAXRTPWMLNPRRUANOYJXJSQNPBSHLRGWGNUFIXKHMUBBKJWSKSUNOQXUDZCZHOZECKAQBYIAXKRFEHCCHEFIVZIPWTYETGXGWEHUHVGSNOMPBJTLXUAFSKZBQGOIBEYLFBRFPINIKLBFFVASTJNMDCKCWDTAAZZMWQYDRGEX");
    msg.lat = 0.809254876215;
    msg.lon = 0.0354778779539;
    msg.depth = 0.338922762518;

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
    msg.setTimeStamp(0.470594429738);
    msg.setSource(7616U);
    msg.setSourceEntity(50U);
    msg.setDestination(33243U);
    msg.setDestinationEntity(84U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.378424573818);
    msg.setSource(55809U);
    msg.setSourceEntity(168U);
    msg.setDestination(29906U);
    msg.setDestinationEntity(120U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.367780079315);
    msg.setSource(59376U);
    msg.setSourceEntity(185U);
    msg.setDestination(56993U);
    msg.setDestinationEntity(19U);
    msg.op = 31U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RSYLEFSDOQKIQXVINTVHOXSBTXSCOFNMCJTUXZQRAIGABBYHWRBZHUOUJWMYGLERWSEBASFZLJXAWHKGBCTGNHKKZKLYWPYWNXVVUAPAUJRNDUJREOFGFAHROMAPXNFIKZFTDGQNQBWJXLZIHBWEGUPVHGMCMJLPTQWJDMJDQCOILQKFCZTMFCCCLEELIXYEULWMVNSMSVOFDQDGVKKTYDYIYNHZKRP");
    tmp_msg_0.lat = 0.836347049748;
    tmp_msg_0.lon = 0.153000862593;
    tmp_msg_0.depth = 0.034390808866;
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
    msg.setTimeStamp(0.00717588513604);
    msg.setSource(18877U);
    msg.setSourceEntity(236U);
    msg.setDestination(65344U);
    msg.setDestinationEntity(45U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WBDVFAZSLLOYOPBQRFAMHIIMQAMMTMDDCKAARWUFWDCSBWFKENVFQXPVPXZIOWTLAZPCTUSCXTFLKUEXBIYOSRXIXJUMRSKHNENPGWCAPJETTVFJSBPGDULZOJMRGTHDLEKKQCBVWNXXMWUTJCMRIUPHVZEYCOPTJHHYZC");
    tmp_msg_0.value = 250U;
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
    msg.setTimeStamp(0.627845606181);
    msg.setSource(28034U);
    msg.setSourceEntity(46U);
    msg.setDestination(28117U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NKTYYUUTSAHQWDGEKWCZDLXFHKRZSKTQXPVNNSFRYDIEEHXQNKQANV");
    tmp_msg_0.lat = 0.686962160613;
    tmp_msg_0.lon = 0.876928044229;
    tmp_msg_0.depth = 0.00582355399497;
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
    msg.setTimeStamp(0.323834342564);
    msg.setSource(23526U);
    msg.setSourceEntity(145U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(186U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 19287U;
    tmp_msg_0.custom.assign("HMWTKSRGKDWNGSAJQZPXQVRCSMELRUYDSOTIGHMMOJBLNQJGRPXXMLYVTNZBAYKZCWVFQQXHROTXPBRZLJHJPLRVIHPCIPYSESNOCOLNDPONRVITU");
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
    msg.setTimeStamp(0.736880319391);
    msg.setSource(2348U);
    msg.setSourceEntity(54U);
    msg.setDestination(23258U);
    msg.setDestinationEntity(1U);
    msg.op = 177U;
    msg.system.assign("VWSEPZHLGLAERHWRNGKFLYEMPLSRGMILNYQAQBMCTWMPMNDSUJRVYAMJDNMRZDCBSJTPPPISZCHIYMDKYTLXGXDVOLGDNKYWBBOSNWCGACONUEIUUUYHIRCPQHBLRJFUDGVOAQXRWHIZ");
    msg.range = 0.786996020345;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 10947U;
    tmp_msg_0.name.assign("WVXWIUFRVDNGKMOKXEEBGCXSCQLITASXGRZCJXPMWMSKHJKQPXREZGFPPOQQDRJBQGCDEPUHRNIVSXKVGFVPDWNYWFXULYBY");
    tmp_msg_0.custom.assign("ROVLBTSEARNUJCZXZXSXFDGEYWHJMLGDRIUEQJYWKVIBEDGKSYQJOUVVEXTLPGFTCHPHWWMRLVIAQFKKYVVFIJQBGXWWXMCQNNJPHHCEDDMHDKKTZTBTMLZSUPOUOGGLFAAAESWXZPQUZBTZOIBPDPYJKHEFCOLSKRV");
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
    msg.setTimeStamp(0.770958757745);
    msg.setSource(52546U);
    msg.setSourceEntity(144U);
    msg.setDestination(57167U);
    msg.setDestinationEntity(143U);
    msg.op = 249U;
    msg.system.assign("KVIIIWTRLSFLXYPUEMRVJLDHCZORKNTPMGFFUVBSDECVTCEUQGHHXKGTXZSTFYXKITKOOPIABCRAVKFPZSAXQZEERLMNYDDHNZDDYAOPYZGBXDVBBQGIWYSNHUDWAXOTGAJMJPJIYXQEMFSTCCCFNPHBMSNLAOJUNQLNRVZWHURISLJJWQJXMOVERWOGZYWNPUFWQLG");
    msg.range = 0.992863339822;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 120U;
    tmp_msg_0.value = 0.0869303604169;
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
    msg.setTimeStamp(0.0712440035146);
    msg.setSource(45349U);
    msg.setSourceEntity(149U);
    msg.setDestination(46416U);
    msg.setDestinationEntity(219U);
    msg.op = 213U;
    msg.system.assign("TFGPTQOCLLJUYAEYOXQZHBQSCRYNQZAJENLPWKMKWVVBJBOAXNGVMDFDNQU");
    msg.range = 0.52482977912;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.127769774031;
    tmp_msg_0.y = 0.652224435447;
    tmp_msg_0.z = 0.00445824365764;
    tmp_msg_0.t = 0.454002545326;
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
    msg.setTimeStamp(0.650517890606);
    msg.setSource(9916U);
    msg.setSourceEntity(42U);
    msg.setDestination(60066U);
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
    msg.setTimeStamp(0.895736279276);
    msg.setSource(25490U);
    msg.setSourceEntity(175U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.685010706456);
    msg.setSource(39955U);
    msg.setSourceEntity(90U);
    msg.setDestination(45442U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.609397620043);
    msg.setSource(29797U);
    msg.setSourceEntity(5U);
    msg.setDestination(5277U);
    msg.setDestinationEntity(33U);
    msg.list.assign("ASJEZZIWGSHTPUOCHOADINLKFDFMJXEUU");

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
    msg.setTimeStamp(0.526329644916);
    msg.setSource(55880U);
    msg.setSourceEntity(251U);
    msg.setDestination(46066U);
    msg.setDestinationEntity(229U);
    msg.list.assign("IWPGKBIZNSBMJOGGEYENJPNGFLITQCJABSPDBMRJVFJDHJUIOCPOVWZXVSYGIAARUVAZUGGZQOSRWPOKDZYLSHLYZUPWTARNUDUTCKNKFBXSFFEBGEJKWHXVMQJSKTRURYUDJLQMERVIGYHXOKMUPCFELLMHZZOOAWODQRXHBBCDCAIZNSBRTEIMTEBQGKXNELPXQRQSPWOFNFCKNQVLTYAVLMWIFHNMXXDZTMDFACCPTWYUCKHHYEJIVATWHV");

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
    msg.setTimeStamp(0.387472387357);
    msg.setSource(25847U);
    msg.setSourceEntity(112U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(39U);
    msg.list.assign("UQFUTLVYATULPDHPOAGXEXSFCCAXIJZOHHCOTUJIZRNARPRDYMKRUGJVJIMVMTVIINVLZPEMLGDRQGHLVPYZEG");

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
    msg.setTimeStamp(0.851442446829);
    msg.setSource(2864U);
    msg.setSourceEntity(135U);
    msg.setDestination(60356U);
    msg.setDestinationEntity(187U);
    msg.value = -11267;

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
    msg.setTimeStamp(0.0396740587627);
    msg.setSource(23606U);
    msg.setSourceEntity(215U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(170U);
    msg.value = -23055;

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
    msg.setTimeStamp(0.849317165149);
    msg.setSource(43326U);
    msg.setSourceEntity(86U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(163U);
    msg.value = -2210;

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
    msg.setTimeStamp(0.261840982587);
    msg.setSource(366U);
    msg.setSourceEntity(169U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(95U);
    msg.value = 0.245134663315;

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
    msg.setTimeStamp(0.461970262034);
    msg.setSource(52539U);
    msg.setSourceEntity(61U);
    msg.setDestination(13490U);
    msg.setDestinationEntity(179U);
    msg.value = 0.593000389613;

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
    msg.setTimeStamp(0.747279045387);
    msg.setSource(43113U);
    msg.setSourceEntity(28U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(114U);
    msg.value = 0.844679330267;

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
    msg.setTimeStamp(0.916636520698);
    msg.setSource(19990U);
    msg.setSourceEntity(91U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(197U);
    msg.value = 0.405304723653;

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
    msg.setTimeStamp(0.682240985158);
    msg.setSource(63644U);
    msg.setSourceEntity(219U);
    msg.setDestination(41960U);
    msg.setDestinationEntity(72U);
    msg.value = 0.553540980452;

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
    msg.setTimeStamp(0.956206838365);
    msg.setSource(14192U);
    msg.setSourceEntity(198U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(68U);
    msg.value = 0.21379977309;

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
    msg.setTimeStamp(0.301544841011);
    msg.setSource(21792U);
    msg.setSourceEntity(107U);
    msg.setDestination(52329U);
    msg.setDestinationEntity(47U);
    msg.validity = 61418U;
    msg.type = 4U;
    msg.utc_year = 64796U;
    msg.utc_month = 203U;
    msg.utc_day = 227U;
    msg.utc_time = 0.850303912745;
    msg.lat = 0.47102554478;
    msg.lon = 0.211422754916;
    msg.height = 0.024262577472;
    msg.satellites = 195U;
    msg.cog = 0.170007441982;
    msg.sog = 0.353651684044;
    msg.hdop = 0.210391857821;
    msg.vdop = 0.578389156589;
    msg.hacc = 0.523581956698;
    msg.vacc = 0.901955862942;

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
    msg.setTimeStamp(0.258525311055);
    msg.setSource(8454U);
    msg.setSourceEntity(57U);
    msg.setDestination(31135U);
    msg.setDestinationEntity(84U);
    msg.validity = 3804U;
    msg.type = 189U;
    msg.utc_year = 21524U;
    msg.utc_month = 202U;
    msg.utc_day = 87U;
    msg.utc_time = 0.0298530323304;
    msg.lat = 0.267387225866;
    msg.lon = 0.83357890842;
    msg.height = 0.178104339225;
    msg.satellites = 48U;
    msg.cog = 0.228005580402;
    msg.sog = 0.346692421621;
    msg.hdop = 0.895224644746;
    msg.vdop = 0.688462574029;
    msg.hacc = 0.704503941122;
    msg.vacc = 0.279589998551;

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
    msg.setTimeStamp(0.533048607407);
    msg.setSource(25047U);
    msg.setSourceEntity(89U);
    msg.setDestination(24881U);
    msg.setDestinationEntity(63U);
    msg.validity = 29547U;
    msg.type = 71U;
    msg.utc_year = 51788U;
    msg.utc_month = 166U;
    msg.utc_day = 88U;
    msg.utc_time = 0.961727378087;
    msg.lat = 0.336797498764;
    msg.lon = 0.490234885767;
    msg.height = 0.61897016661;
    msg.satellites = 228U;
    msg.cog = 0.443496258508;
    msg.sog = 0.0780913532273;
    msg.hdop = 0.484056045274;
    msg.vdop = 0.328474362317;
    msg.hacc = 0.857766178945;
    msg.vacc = 0.311358076506;

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
    msg.setTimeStamp(0.833155104711);
    msg.setSource(3712U);
    msg.setSourceEntity(100U);
    msg.setDestination(48839U);
    msg.setDestinationEntity(207U);
    msg.time = 0.2094627431;
    msg.phi = 0.0876374915945;
    msg.theta = 0.639665526054;
    msg.psi = 0.41243141221;
    msg.psi_magnetic = 0.962754390581;

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
    msg.setTimeStamp(0.489729345514);
    msg.setSource(51614U);
    msg.setSourceEntity(35U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(60U);
    msg.time = 0.752733938488;
    msg.phi = 0.475979426266;
    msg.theta = 0.0392899260077;
    msg.psi = 0.611142224215;
    msg.psi_magnetic = 0.216411103538;

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
    msg.setTimeStamp(0.259470782266);
    msg.setSource(63238U);
    msg.setSourceEntity(202U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(123U);
    msg.time = 0.251924221787;
    msg.phi = 0.344732853602;
    msg.theta = 0.0882861477658;
    msg.psi = 0.145525901684;
    msg.psi_magnetic = 0.944086857211;

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
    msg.setTimeStamp(0.71396117334);
    msg.setSource(27820U);
    msg.setSourceEntity(138U);
    msg.setDestination(19174U);
    msg.setDestinationEntity(247U);
    msg.time = 0.0937619877279;
    msg.x = 0.0476765250921;
    msg.y = 0.194581204209;
    msg.z = 0.233639831533;
    msg.timestep = 0.377944711241;

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
    msg.setTimeStamp(0.585695783302);
    msg.setSource(60351U);
    msg.setSourceEntity(177U);
    msg.setDestination(56460U);
    msg.setDestinationEntity(118U);
    msg.time = 0.296688444919;
    msg.x = 0.36269321005;
    msg.y = 0.901017568558;
    msg.z = 0.458014341046;
    msg.timestep = 0.833484624785;

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
    msg.setTimeStamp(0.791815392464);
    msg.setSource(43082U);
    msg.setSourceEntity(171U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(15U);
    msg.time = 0.786660648054;
    msg.x = 0.443738841546;
    msg.y = 0.344285446924;
    msg.z = 0.372183924337;
    msg.timestep = 0.700978889017;

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
    msg.setTimeStamp(0.544025018488);
    msg.setSource(6955U);
    msg.setSourceEntity(133U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(28U);
    msg.time = 0.780235411881;
    msg.x = 0.0494032800595;
    msg.y = 0.443107795739;
    msg.z = 0.673028662423;

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
    msg.setTimeStamp(0.179542672934);
    msg.setSource(44636U);
    msg.setSourceEntity(107U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(236U);
    msg.time = 0.661953050992;
    msg.x = 0.969621552984;
    msg.y = 0.00741850247875;
    msg.z = 0.0503820488333;

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
    msg.setTimeStamp(0.830621915744);
    msg.setSource(28274U);
    msg.setSourceEntity(47U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(182U);
    msg.time = 0.697214082586;
    msg.x = 0.640401148958;
    msg.y = 0.614284972553;
    msg.z = 0.847722544511;

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
    msg.setTimeStamp(0.193615542852);
    msg.setSource(12948U);
    msg.setSourceEntity(91U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(132U);
    msg.time = 0.63919974502;
    msg.x = 0.86374499477;
    msg.y = 0.0634064470951;
    msg.z = 0.457537481791;

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
    msg.setTimeStamp(0.23896322051);
    msg.setSource(40224U);
    msg.setSourceEntity(231U);
    msg.setDestination(13739U);
    msg.setDestinationEntity(149U);
    msg.time = 0.193815589792;
    msg.x = 0.41305517015;
    msg.y = 0.338997120855;
    msg.z = 0.252981079245;

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
    msg.setTimeStamp(0.169860144524);
    msg.setSource(63506U);
    msg.setSourceEntity(64U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(224U);
    msg.time = 0.225192957586;
    msg.x = 0.573456809456;
    msg.y = 0.310760616093;
    msg.z = 0.604851430044;

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
    msg.setTimeStamp(0.640454810377);
    msg.setSource(34579U);
    msg.setSourceEntity(159U);
    msg.setDestination(7357U);
    msg.setDestinationEntity(60U);
    msg.time = 0.813438101852;
    msg.x = 0.13609127414;
    msg.y = 0.611335506072;
    msg.z = 0.912733534551;

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
    msg.setTimeStamp(0.139521305989);
    msg.setSource(24956U);
    msg.setSourceEntity(126U);
    msg.setDestination(467U);
    msg.setDestinationEntity(16U);
    msg.time = 0.27467403572;
    msg.x = 0.191088348373;
    msg.y = 0.578929402326;
    msg.z = 0.874549635373;

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
    msg.setTimeStamp(0.803737832744);
    msg.setSource(64752U);
    msg.setSourceEntity(82U);
    msg.setDestination(56416U);
    msg.setDestinationEntity(60U);
    msg.time = 0.754297008619;
    msg.x = 0.881156081;
    msg.y = 0.784231656861;
    msg.z = 0.157469382421;

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
    msg.setTimeStamp(0.535642797899);
    msg.setSource(14159U);
    msg.setSourceEntity(89U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(67U);
    msg.validity = 245U;
    msg.x = 0.784807296982;
    msg.y = 0.99942235087;
    msg.z = 0.498971844889;

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
    msg.setTimeStamp(0.791966014196);
    msg.setSource(59322U);
    msg.setSourceEntity(244U);
    msg.setDestination(21747U);
    msg.setDestinationEntity(96U);
    msg.validity = 25U;
    msg.x = 0.226155273743;
    msg.y = 0.488794773667;
    msg.z = 0.442657848779;

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
    msg.setTimeStamp(0.0733262715913);
    msg.setSource(3921U);
    msg.setSourceEntity(97U);
    msg.setDestination(13474U);
    msg.setDestinationEntity(135U);
    msg.validity = 235U;
    msg.x = 0.859598431292;
    msg.y = 0.866838637574;
    msg.z = 0.357591890476;

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
    msg.setTimeStamp(0.343607617046);
    msg.setSource(34402U);
    msg.setSourceEntity(114U);
    msg.setDestination(13419U);
    msg.setDestinationEntity(125U);
    msg.validity = 74U;
    msg.x = 0.974256767466;
    msg.y = 0.409287418426;
    msg.z = 0.888456102;

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
    msg.setTimeStamp(0.594445765315);
    msg.setSource(5919U);
    msg.setSourceEntity(35U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(109U);
    msg.validity = 116U;
    msg.x = 0.831724939128;
    msg.y = 0.833220341016;
    msg.z = 0.74873676959;

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
    msg.setTimeStamp(0.378125572129);
    msg.setSource(42768U);
    msg.setSourceEntity(53U);
    msg.setDestination(30528U);
    msg.setDestinationEntity(131U);
    msg.validity = 122U;
    msg.x = 0.286824098397;
    msg.y = 0.855347418082;
    msg.z = 0.184540449834;

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
    msg.setTimeStamp(0.0719966668315);
    msg.setSource(5385U);
    msg.setSourceEntity(70U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(223U);
    msg.time = 0.16145216431;
    msg.x = 0.493529988722;
    msg.y = 0.474151241401;
    msg.z = 0.238672231399;

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
    msg.setTimeStamp(0.411082947239);
    msg.setSource(49603U);
    msg.setSourceEntity(153U);
    msg.setDestination(13352U);
    msg.setDestinationEntity(60U);
    msg.time = 0.780097126786;
    msg.x = 0.383334301462;
    msg.y = 0.346660363114;
    msg.z = 0.63529372704;

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
    msg.setTimeStamp(0.994877756661);
    msg.setSource(45529U);
    msg.setSourceEntity(165U);
    msg.setDestination(52252U);
    msg.setDestinationEntity(111U);
    msg.time = 0.942275528568;
    msg.x = 0.567181004371;
    msg.y = 0.0540113452605;
    msg.z = 0.779249787027;

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
    msg.setTimeStamp(0.687093455353);
    msg.setSource(52955U);
    msg.setSourceEntity(103U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(210U);
    msg.validity = 177U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.506432881942;
    tmp_msg_0.beam_height = 0.103711629831;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.383574492279;

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
    msg.setTimeStamp(0.942632930099);
    msg.setSource(17309U);
    msg.setSourceEntity(189U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(214U);
    msg.validity = 145U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.114284116768;
    tmp_msg_0.y = 0.786426371067;
    tmp_msg_0.z = 0.0190557376924;
    tmp_msg_0.phi = 0.0340963133668;
    tmp_msg_0.theta = 0.782379083133;
    tmp_msg_0.psi = 0.190974776415;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.807884777293;

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
    msg.setTimeStamp(0.625158612515);
    msg.setSource(57440U);
    msg.setSourceEntity(40U);
    msg.setDestination(42863U);
    msg.setDestinationEntity(120U);
    msg.validity = 222U;
    msg.value = 0.328485463842;

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
    msg.setTimeStamp(0.394406254724);
    msg.setSource(45117U);
    msg.setSourceEntity(132U);
    msg.setDestination(60211U);
    msg.setDestinationEntity(175U);
    msg.value = 0.402415960476;

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
    msg.setTimeStamp(0.802316008811);
    msg.setSource(32456U);
    msg.setSourceEntity(84U);
    msg.setDestination(54161U);
    msg.setDestinationEntity(114U);
    msg.value = 0.396703101242;

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
    msg.setTimeStamp(0.907290777828);
    msg.setSource(59385U);
    msg.setSourceEntity(198U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(243U);
    msg.value = 0.432461844301;

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
    msg.setTimeStamp(0.325096032076);
    msg.setSource(37651U);
    msg.setSourceEntity(214U);
    msg.setDestination(30658U);
    msg.setDestinationEntity(156U);
    msg.value = 0.565288516999;

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
    msg.setTimeStamp(0.502447825551);
    msg.setSource(56808U);
    msg.setSourceEntity(64U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(54U);
    msg.value = 0.728227155153;

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
    msg.setTimeStamp(0.311085351088);
    msg.setSource(34437U);
    msg.setSourceEntity(144U);
    msg.setDestination(56691U);
    msg.setDestinationEntity(115U);
    msg.value = 0.856129879599;

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
    msg.setTimeStamp(0.761923051055);
    msg.setSource(28776U);
    msg.setSourceEntity(228U);
    msg.setDestination(3751U);
    msg.setDestinationEntity(186U);
    msg.value = 0.501795979556;

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
    msg.setTimeStamp(0.105554652907);
    msg.setSource(17682U);
    msg.setSourceEntity(75U);
    msg.setDestination(6464U);
    msg.setDestinationEntity(157U);
    msg.value = 0.575930658597;

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
    msg.setTimeStamp(0.889256255523);
    msg.setSource(58578U);
    msg.setSourceEntity(19U);
    msg.setDestination(1938U);
    msg.setDestinationEntity(117U);
    msg.value = 0.212384485564;

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
    msg.setTimeStamp(0.617274930838);
    msg.setSource(44267U);
    msg.setSourceEntity(239U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(227U);
    msg.value = 0.526058753916;

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
    msg.setTimeStamp(0.547326301956);
    msg.setSource(56878U);
    msg.setSourceEntity(165U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(114U);
    msg.value = 0.448958518979;

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
    msg.setTimeStamp(0.337614220703);
    msg.setSource(18460U);
    msg.setSourceEntity(98U);
    msg.setDestination(33630U);
    msg.setDestinationEntity(205U);
    msg.value = 0.291422225002;

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
    msg.setTimeStamp(0.661419629615);
    msg.setSource(51472U);
    msg.setSourceEntity(234U);
    msg.setDestination(62474U);
    msg.setDestinationEntity(195U);
    msg.value = 0.499592824975;

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
    msg.setTimeStamp(0.740351261272);
    msg.setSource(64582U);
    msg.setSourceEntity(129U);
    msg.setDestination(15077U);
    msg.setDestinationEntity(213U);
    msg.value = 0.00710292361606;

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
    msg.setTimeStamp(0.866775400585);
    msg.setSource(23360U);
    msg.setSourceEntity(236U);
    msg.setDestination(52553U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0499833740708;

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
    msg.setTimeStamp(0.074396675624);
    msg.setSource(14820U);
    msg.setSourceEntity(17U);
    msg.setDestination(21230U);
    msg.setDestinationEntity(241U);
    msg.value = 0.981894840995;

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
    msg.setTimeStamp(0.262851984749);
    msg.setSource(50966U);
    msg.setSourceEntity(61U);
    msg.setDestination(26739U);
    msg.setDestinationEntity(40U);
    msg.value = 0.70830906116;

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
    msg.setTimeStamp(0.752042079963);
    msg.setSource(14309U);
    msg.setSourceEntity(126U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(11U);
    msg.value = 0.321059063917;

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
    msg.setTimeStamp(0.872726053607);
    msg.setSource(28720U);
    msg.setSourceEntity(233U);
    msg.setDestination(62112U);
    msg.setDestinationEntity(66U);
    msg.value = 0.961532633392;

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
    msg.setTimeStamp(0.30453802396);
    msg.setSource(58488U);
    msg.setSourceEntity(68U);
    msg.setDestination(63081U);
    msg.setDestinationEntity(128U);
    msg.value = 0.627725893195;

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
    msg.setTimeStamp(0.159034494707);
    msg.setSource(8385U);
    msg.setSourceEntity(70U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(106U);
    msg.value = 0.980470425711;

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
    msg.setTimeStamp(0.740047550737);
    msg.setSource(43284U);
    msg.setSourceEntity(160U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(9U);
    msg.value = 0.29319344038;

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
    msg.setTimeStamp(0.98679614114);
    msg.setSource(36355U);
    msg.setSourceEntity(144U);
    msg.setDestination(46230U);
    msg.setDestinationEntity(44U);
    msg.value = 0.110037426269;

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
    msg.setTimeStamp(0.640451316625);
    msg.setSource(14391U);
    msg.setSourceEntity(59U);
    msg.setDestination(1544U);
    msg.setDestinationEntity(38U);
    msg.value = 0.619459195112;

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
    msg.setTimeStamp(0.399853462211);
    msg.setSource(27395U);
    msg.setSourceEntity(102U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.51032046286;
    msg.speed = 0.548252818479;
    msg.turbulence = 0.87176416569;

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
    msg.setTimeStamp(0.118319255715);
    msg.setSource(1447U);
    msg.setSourceEntity(150U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(174U);
    msg.direction = 0.993719011695;
    msg.speed = 0.353184400164;
    msg.turbulence = 0.337913537913;

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
    msg.setTimeStamp(0.996812752539);
    msg.setSource(18595U);
    msg.setSourceEntity(182U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.418821658417;
    msg.speed = 0.889195497338;
    msg.turbulence = 0.555019934566;

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
    msg.setTimeStamp(0.361676505493);
    msg.setSource(63698U);
    msg.setSourceEntity(32U);
    msg.setDestination(52520U);
    msg.setDestinationEntity(153U);
    msg.value = 0.802474795155;

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
    msg.setTimeStamp(0.614120736884);
    msg.setSource(25393U);
    msg.setSourceEntity(157U);
    msg.setDestination(49147U);
    msg.setDestinationEntity(20U);
    msg.value = 0.202404224991;

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
    msg.setTimeStamp(0.67231130781);
    msg.setSource(2789U);
    msg.setSourceEntity(130U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(48U);
    msg.value = 0.429508816356;

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
    msg.setTimeStamp(0.975302792073);
    msg.setSource(46287U);
    msg.setSourceEntity(57U);
    msg.setDestination(1946U);
    msg.setDestinationEntity(112U);
    msg.value.assign("PPWFGWNTMNCMAUWUPFJRXNSCSTAQWKKLGWLQVPUBYDYMPIFAGTAVCMEVOCHYCSXSHBERBWSKEKMZYBZDOYGOIGRNZNSZEWBGZEUAYPJXTEVLXBYSAHQDTDQTOUIYEZSUKDRFUVJYOXAHHLGJCVJQFOFNMUVHBMEXSZPZGJIMIJIBNIWPOVTLWUOTQOLCNINHH");

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
    msg.setTimeStamp(0.136722161486);
    msg.setSource(6996U);
    msg.setSourceEntity(218U);
    msg.setDestination(50126U);
    msg.setDestinationEntity(135U);
    msg.value.assign("CEGJCLTXZLTDQZDDMBLLAHRPBGBWTCDORMSKJJ");

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
    msg.setTimeStamp(0.279667485907);
    msg.setSource(29660U);
    msg.setSourceEntity(225U);
    msg.setDestination(5101U);
    msg.setDestinationEntity(22U);
    msg.value.assign("SYTKTPYYICSD");

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
    msg.setTimeStamp(0.358388168529);
    msg.setSource(64341U);
    msg.setSourceEntity(17U);
    msg.setDestination(5726U);
    msg.setDestinationEntity(81U);
    const char tmp_msg_0[] = {32, 60, -51, -115, -26, -92, 33, 49, -12, -29, 62, -48, -39, 96, -36, 119, 6, -44, 36, -119, -48, 116, -39, -38, 63, -117, -106, 34, -59, 116, 102, -110, -70, -22, -81, -94, -33, 119, 73, -91, 17, 35, -92, -38, 57, 102, -24, 121, 29, -38, 20, -118, -88, -39, 2, 87, -89, -30, -3, 107, -113, -127, -102, -96, 125, 122, 94, 63, -73, -105, -79, -67, -125, 10, -114, -113, -68, -29, -45, -24, 71, -29, 21, -128, 107, -113, -21, -63, -35, 93, -51, 86, 52, 81, -39, -15, -93, 80, -9, 103, 13, -123, 111, -68, -78, 110, 19, 34, 57, 110, -46, 55, -28, -25, 16, 74, 65, -40, -13, -55, -60, -100, 90, -122, 118, -15, -103, 78, -123, 5, -71, -108, 38, -76, 106, -103, -21, 29, 43, 56, -46, -8, -69, -40, 0, -19, -64, 10, -107, -68, -93, 16, 62, 26, -23, -28, -100, -32, 114, -11, 55, 125, -53, -61, 42, 78, 50, -41};
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
    msg.setTimeStamp(0.601704443339);
    msg.setSource(57940U);
    msg.setSourceEntity(63U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(183U);
    const char tmp_msg_0[] = {69, -89, -18, 17, 9, 20, -29, -23, 22, 72, 33, 85, 17, 61, -115, 70, 71, -74, -76, 3, 103, -6, 4, 113, 0, 116, 117, -124, -127, 121, 68, 53, 117, -109, 76, -39, 83, -39, 33, -29, -104, 126, 87, 90, 90, -7, -58, -101, 15, 43, -78, -34, 31, 76, -117, -88, 3, -88, -16, -58, -20, 72};
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
    msg.setTimeStamp(0.341031091139);
    msg.setSource(2166U);
    msg.setSourceEntity(69U);
    msg.setDestination(37676U);
    msg.setDestinationEntity(153U);
    const char tmp_msg_0[] = {6, -116, 26, 13, 99, -6, 90, -81, 67, 94, 31, 124, -54, 79, 107, -117, 52, 117, -116, 84, 112, -60, 65, 118, -87, -59, 67, 30, -93, -45, -86, -33, -76, 102, 61, -102, -10, 11, 85, 40, -15, -107, -43, 96, -42, 123, 97, -40, 17, -95, -18, -35, -116, -96, -64, 52, -98, -121, 2, -104, -79, 90, 79, 7, 123, 72, -108, 4, 106, 107, -67, 109, -100, 66, -51, -29, 55, 111, 47, -115, -111, -121, 23, 104, -23, 40, -73, -59, 81, -64, 107, 92, -88, 75, -45, 67, 69, -105, 69, 63, -8, -55, 73, -4, 7, -59, -121, -24, -107, -87, 109, 10, 62, 14, 67, -111, 0, 70, 46, -87, -44, -83, 85, 46, -13, 22, 36, 110, 75, -7, -98, 4, 49, 123, -113, 42, 92, -114, -2, -106, -111, -80, 108, 73, 69, -76, -95, -27, 56, 21, -106, 80, 108, -102, -49, 119, 105, 86, -36, -53, 78, 81, 122, -57, 42, 11, -51, 15, 12, 126, -7, -116, -3, -16, -106, -63, -67, 51, 85, -4, 119, 22, 31, 92, 59, 75, 66, 16, -127, -111, -6, -117, 28, -119, 24, 21, -10, -102, -72, 1, 61, -123, 63, -114, 76, -48, -110, 78, 92, 109, -96, 78, -12};
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
    msg.setTimeStamp(0.598471552956);
    msg.setSource(33874U);
    msg.setSourceEntity(44U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(177U);
    msg.type = 168U;
    msg.frequency = 413212913U;
    msg.min_range = 46118U;
    msg.max_range = 20871U;
    msg.bits_per_point = 76U;
    msg.scale_factor = 0.287992392328;
    const char tmp_msg_0[] = {96, 113, -58, -85, -99, -126, 89, 75, 7, 8, 82, 44, 62, 87, -51, -78, 75, 84, -78, 37, -20, -79, 29, -111, 37, -57, 30, -1, 4, 12, -112, 34, 78, -44, 29, -6, -43, -23, -88, 21, -108, 119, 44, -58, -123, -70, -27, 44, -20, -46, -51, 54, -60, -79, 99, -99, -113, 104, -23, 59, -100, 91, 75, -39, 105, -28, 73, 29, 78, -39, 118, 102, -48, -31, -22, -95, -29, -47, 7, -91, -73, 98, -123, -9, -91, 108, 65, -83, 80, -18, 3, 72, 71, -21, 79, -34, 6, -25, -111, -8, -65, 72, 39, 47, 108, -22, 32, 81, -74, -103, 98, 99, 46, -33, 103, 21, -32, 89, -124, -115, 120, -7, 73, 75, -113, 75, 45, 63, -123, 104, -66, 52};
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
    msg.setTimeStamp(0.402047106865);
    msg.setSource(2782U);
    msg.setSourceEntity(128U);
    msg.setDestination(55637U);
    msg.setDestinationEntity(239U);
    msg.type = 141U;
    msg.frequency = 609151756U;
    msg.min_range = 4546U;
    msg.max_range = 11572U;
    msg.bits_per_point = 247U;
    msg.scale_factor = 0.390586365202;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.552461594639;
    tmp_msg_0.beam_height = 0.0993908043155;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {105, -47, 111, 90, -59, 10, -10, 107, -88, 46, -122, 54, -97, 35, -123, -88, 49, -43, -82, 31, -117, -81, 91, 104, -117, 7, 26, 49, 9, -92, -114, -57, 95, 98, 82, -83, -25, -73, -27, 6, 26, -112, -2, -81, 34, -33, -51, 116, -62, -120, 113, -89, 17, -46, -114, -81, -58, 121, 64, 126, 29, 112, -85, 25, 79, 52, 0, -128, 20, 40, 44, 87, -38, 65, 78, 55, -88, -30, 37, 9, 105, -24, 57, 72, 58, 7, 44, 27, 32, 106, 28, 6, 111, -97, -92, 104, -81, 72, 0, 45, 51, 58, -25, 101, 82, 106, -121, 39, 40, -85, -76, -80, 26, 43, -55, -10, 34, 81, 33, -108, -57, -117, -42, 36, -20, -30, -62, -45, 103, 45, -119, 19, 33, -7, 7, 26, -96, -16, -93, -75, 100, -63, 28, -73, -80, -42, 19, 13, 120, -40, -20, 29, 101, 69, 61, 31, 90, -3, -99, -23, -109, 4, 33, -51, -48, 87, 2, -38, -97, 79, -110, 74, -35, 9, -109, 5, 106, 54, -63, 89, -40, -102, 0, -91};
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
    msg.setTimeStamp(0.722584799187);
    msg.setSource(9103U);
    msg.setSourceEntity(43U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(170U);
    msg.type = 91U;
    msg.frequency = 1998360138U;
    msg.min_range = 8867U;
    msg.max_range = 53575U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.364600128578;
    const char tmp_msg_0[] = {-3, 53, -47, 121, 54, 45, 59, 1, 28, -8, -1, -123, -14, -5, 5, 85, 67, 98, 96, 36, 46, -104, -52, 20, -76, 33, -112, 99, -109, -76, 37, 82, 91, -106, 7, 117, -87, -94, 52, 90, -97, -59, -43, -29, -88, -37, -100, 45, -72, -121, -51, 32, -32, -49, -120, -125, -28, 77, 32, -62, -9, -106, 102, -52, -70, -61, -22, -107, 88, -70, -83, -71, -90, -13, 2, -99, -102, 67, 37, 106, 9, -32, -94, 115, 34, 58, -47, 110, -3, -12, -105, 22, 99, -68, 92, -47, -53, -70, 61, 53, 94, 112, 8, -28, -125, -27, 17, -3, -101, 52, -118, -128, -52, 36, 58, -52, -39, -26, -89, -85, -97, -101, 19, -19, 111, -104, 117, -69, 77, -9, 114, 92, -56, 104, 61, -29, 43, 120, -10, -52, -124, 3, 51, 90, 42, 61, 32, -120, -5, -107, 80, -95, 34, -51, 64, 64, 44, 73, 114, 122, -44, 0, -76, 89, 105, -47, -85, -100, 40, 33, -94, 50, 122, 16, 0, -112, -36, 123, -7, -58, 77, -43, 52, 122, 41, -20, -91, -62, -9, -9, -82, -81, -86, -102, -127, 52, 50, -79, 34, 32, 89, -106, -92, 85, 27, 92, 106, -8, 3, -98, -1, -15, -76, 55, 110, -26, -77, 60, -123, -59, -114};
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
    msg.setTimeStamp(0.887548283869);
    msg.setSource(35139U);
    msg.setSourceEntity(175U);
    msg.setDestination(18255U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.608033197515);
    msg.setSource(53221U);
    msg.setSourceEntity(184U);
    msg.setDestination(8963U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.34052452461);
    msg.setSource(28682U);
    msg.setSourceEntity(145U);
    msg.setDestination(62377U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.250280477569);
    msg.setSource(59715U);
    msg.setSourceEntity(17U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(46U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.618595095553);
    msg.setSource(13048U);
    msg.setSourceEntity(233U);
    msg.setDestination(63133U);
    msg.setDestinationEntity(197U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.703483889141);
    msg.setSource(31720U);
    msg.setSourceEntity(10U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(86U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.185920396122);
    msg.setSource(3156U);
    msg.setSourceEntity(225U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(109U);
    msg.value = 0.442861463455;
    msg.confidence = 0.502143141039;
    msg.opmodes.assign("FPQELNZIPGNGJEBPQBEHIQGSNOAARCDXNVVVGFWTCMVRRTMWUNYADGODYWWPXPCUCFVXHTMBOFJHUZJIDWNASLXFILZROHWYIUTMJMPKEQWZAHLMCCGSTJQSQDYRBLEFITUYZBIKDFJAHEUCRVPTSTPHLJOSXKFQCMYDVRNDKXXLKYEZOSSDOTKNLDCTASYVPGAXKQIGKLXGCZIQOUWHZKFBXBMJKOAEMJRVQUZNI");

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
    msg.setTimeStamp(0.0520756014424);
    msg.setSource(55544U);
    msg.setSourceEntity(14U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(122U);
    msg.value = 0.346802039494;
    msg.confidence = 0.0653215143568;
    msg.opmodes.assign("UYANFYZMXWXKKJONHMKACIACNGYTJTLFLOBPKGRVIJNBHLVXQYVPMFLJCJBQTNRLHKQYAXDXWZIEXNRSKMWCDGUASDAPPRQBFPGFRCYBSQSLBAEZZGHRZDDCINRSOOOUBMEHDYWIOQETBKHIMVHDAWUEQ");

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
    msg.setTimeStamp(0.821083531147);
    msg.setSource(9848U);
    msg.setSourceEntity(89U);
    msg.setDestination(23620U);
    msg.setDestinationEntity(5U);
    msg.value = 0.821116565575;
    msg.confidence = 0.0680111756814;
    msg.opmodes.assign("VEMOFJRYLCUNSDZRKMYODEPROHVSSYIKVXKHZPXHMNKPNUTPTSRPIJ");

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
    msg.setTimeStamp(0.108756943942);
    msg.setSource(18332U);
    msg.setSourceEntity(68U);
    msg.setDestination(33842U);
    msg.setDestinationEntity(13U);
    msg.itow = 2003603605U;
    msg.lat = 0.846445373686;
    msg.lon = 0.527785176563;
    msg.height_ell = 0.235326236435;
    msg.height_sea = 0.876718090307;
    msg.hacc = 0.134510383567;
    msg.vacc = 0.986362705811;
    msg.vel_n = 0.770710359044;
    msg.vel_e = 0.974487731551;
    msg.vel_d = 0.023150256009;
    msg.speed = 0.0390299881145;
    msg.gspeed = 0.465684403199;
    msg.heading = 0.621266799814;
    msg.sacc = 0.960881489942;
    msg.cacc = 0.313643006691;

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
    msg.setTimeStamp(0.811081934128);
    msg.setSource(47506U);
    msg.setSourceEntity(6U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(22U);
    msg.itow = 582465183U;
    msg.lat = 0.040680763818;
    msg.lon = 0.989940835329;
    msg.height_ell = 0.296681303479;
    msg.height_sea = 0.0381163204179;
    msg.hacc = 0.241286891355;
    msg.vacc = 0.345810434391;
    msg.vel_n = 0.74228164652;
    msg.vel_e = 0.576962084229;
    msg.vel_d = 0.0460146866546;
    msg.speed = 0.624871422019;
    msg.gspeed = 0.196499352304;
    msg.heading = 0.839810938993;
    msg.sacc = 0.430882105655;
    msg.cacc = 0.157306722639;

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
    msg.setTimeStamp(0.393536859603);
    msg.setSource(39254U);
    msg.setSourceEntity(44U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(158U);
    msg.itow = 2701054803U;
    msg.lat = 0.33062123235;
    msg.lon = 0.524646020851;
    msg.height_ell = 0.87821270066;
    msg.height_sea = 0.429818245423;
    msg.hacc = 0.298147912311;
    msg.vacc = 0.161786771908;
    msg.vel_n = 0.0176678277485;
    msg.vel_e = 0.75553851672;
    msg.vel_d = 0.281044223813;
    msg.speed = 0.0102273370238;
    msg.gspeed = 0.521355539662;
    msg.heading = 0.557523338484;
    msg.sacc = 0.880019939623;
    msg.cacc = 0.199607454234;

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
    msg.setTimeStamp(0.644721797006);
    msg.setSource(10507U);
    msg.setSourceEntity(111U);
    msg.setDestination(15855U);
    msg.setDestinationEntity(117U);
    msg.id = 25U;
    msg.value = 0.657691586927;

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
    msg.setTimeStamp(0.637641686484);
    msg.setSource(46048U);
    msg.setSourceEntity(231U);
    msg.setDestination(46788U);
    msg.setDestinationEntity(18U);
    msg.id = 85U;
    msg.value = 0.874149301734;

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
    msg.setTimeStamp(0.804332492131);
    msg.setSource(36819U);
    msg.setSourceEntity(67U);
    msg.setDestination(6166U);
    msg.setDestinationEntity(204U);
    msg.id = 140U;
    msg.value = 0.317318577697;

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
    msg.setTimeStamp(0.0858127935728);
    msg.setSource(61103U);
    msg.setSourceEntity(185U);
    msg.setDestination(59207U);
    msg.setDestinationEntity(197U);
    msg.x = 0.304949416961;
    msg.y = 0.861547719453;
    msg.z = 0.872408730311;
    msg.phi = 0.185239402696;
    msg.theta = 0.373175185182;
    msg.psi = 0.670268197787;

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
    msg.setTimeStamp(0.197999810683);
    msg.setSource(54396U);
    msg.setSourceEntity(237U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(239U);
    msg.x = 0.190549154192;
    msg.y = 0.0802088672975;
    msg.z = 0.683653049931;
    msg.phi = 0.733541089818;
    msg.theta = 0.53580653313;
    msg.psi = 0.456431538792;

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
    msg.setTimeStamp(0.164105429563);
    msg.setSource(54179U);
    msg.setSourceEntity(35U);
    msg.setDestination(52016U);
    msg.setDestinationEntity(74U);
    msg.x = 0.41836818471;
    msg.y = 0.0136531094672;
    msg.z = 0.0887150224065;
    msg.phi = 0.69316728621;
    msg.theta = 0.482358799364;
    msg.psi = 0.630575909958;

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
    msg.setTimeStamp(0.660875863037);
    msg.setSource(48060U);
    msg.setSourceEntity(175U);
    msg.setDestination(58662U);
    msg.setDestinationEntity(96U);
    msg.beam_width = 0.649619709858;
    msg.beam_height = 0.355837446758;

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
    msg.setTimeStamp(0.652395064603);
    msg.setSource(37179U);
    msg.setSourceEntity(102U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.782604711697;
    msg.beam_height = 0.0768912699431;

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
    msg.setTimeStamp(0.937959008144);
    msg.setSource(53491U);
    msg.setSourceEntity(162U);
    msg.setDestination(54980U);
    msg.setDestinationEntity(40U);
    msg.beam_width = 0.194136279275;
    msg.beam_height = 0.337201221544;

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
    msg.setTimeStamp(0.433985569259);
    msg.setSource(63798U);
    msg.setSourceEntity(86U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(169U);
    msg.sane = 223U;

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
    msg.setTimeStamp(0.97455727557);
    msg.setSource(178U);
    msg.setSourceEntity(65U);
    msg.setDestination(53550U);
    msg.setDestinationEntity(183U);
    msg.sane = 220U;

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
    msg.setTimeStamp(0.728539251515);
    msg.setSource(4195U);
    msg.setSourceEntity(242U);
    msg.setDestination(10149U);
    msg.setDestinationEntity(46U);
    msg.sane = 122U;

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
    msg.setTimeStamp(0.558633724113);
    msg.setSource(9317U);
    msg.setSourceEntity(163U);
    msg.setDestination(3235U);
    msg.setDestinationEntity(36U);
    msg.value = 0.886593606894;

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
    msg.setTimeStamp(0.0409758331036);
    msg.setSource(13490U);
    msg.setSourceEntity(209U);
    msg.setDestination(29868U);
    msg.setDestinationEntity(125U);
    msg.value = 0.0407431248701;

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
    msg.setTimeStamp(0.752385805641);
    msg.setSource(47830U);
    msg.setSourceEntity(114U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(1U);
    msg.value = 0.241656986996;

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
    msg.setTimeStamp(0.725612900417);
    msg.setSource(30212U);
    msg.setSourceEntity(62U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(199U);
    msg.value = 0.82759204653;

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
    msg.setTimeStamp(0.617813183814);
    msg.setSource(23324U);
    msg.setSourceEntity(193U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(221U);
    msg.value = 0.261572326293;

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
    msg.setTimeStamp(0.962161418836);
    msg.setSource(41378U);
    msg.setSourceEntity(33U);
    msg.setDestination(20400U);
    msg.setDestinationEntity(106U);
    msg.value = 0.888612038571;

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
    msg.setTimeStamp(0.967777292509);
    msg.setSource(27692U);
    msg.setSourceEntity(209U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(145U);
    msg.value = 0.978764445854;

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
    msg.setTimeStamp(0.757513496217);
    msg.setSource(38022U);
    msg.setSourceEntity(52U);
    msg.setDestination(36607U);
    msg.setDestinationEntity(98U);
    msg.value = 0.815267876815;

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
    msg.setTimeStamp(0.00672836353913);
    msg.setSource(62473U);
    msg.setSourceEntity(214U);
    msg.setDestination(53916U);
    msg.setDestinationEntity(202U);
    msg.value = 0.221487242839;

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
    msg.setTimeStamp(0.651480586366);
    msg.setSource(47855U);
    msg.setSourceEntity(50U);
    msg.setDestination(29108U);
    msg.setDestinationEntity(47U);
    msg.value = 0.628529283724;

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
    msg.setTimeStamp(0.866441964027);
    msg.setSource(26876U);
    msg.setSourceEntity(203U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(149U);
    msg.value = 0.601748132076;

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
    msg.setTimeStamp(0.426844256457);
    msg.setSource(23955U);
    msg.setSourceEntity(37U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0741897188528;

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
    msg.setTimeStamp(0.311297375137);
    msg.setSource(35667U);
    msg.setSourceEntity(142U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0583780549879;

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
    msg.setTimeStamp(0.204076315914);
    msg.setSource(10986U);
    msg.setSourceEntity(26U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(179U);
    msg.value = 0.270871665156;

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
    msg.setTimeStamp(0.0288676282413);
    msg.setSource(3520U);
    msg.setSourceEntity(141U);
    msg.setDestination(57581U);
    msg.setDestinationEntity(95U);
    msg.value = 0.916591254119;

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
    msg.setTimeStamp(0.590735414846);
    msg.setSource(53131U);
    msg.setSourceEntity(152U);
    msg.setDestination(12530U);
    msg.setDestinationEntity(194U);
    msg.id = 239U;
    msg.zoom = 218U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.078194762922);
    msg.setSource(6553U);
    msg.setSourceEntity(247U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(27U);
    msg.id = 116U;
    msg.zoom = 158U;
    msg.action = 101U;

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
    msg.setTimeStamp(0.911445377037);
    msg.setSource(37412U);
    msg.setSourceEntity(236U);
    msg.setDestination(8059U);
    msg.setDestinationEntity(15U);
    msg.id = 39U;
    msg.zoom = 98U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.879288091336);
    msg.setSource(60939U);
    msg.setSourceEntity(61U);
    msg.setDestination(16973U);
    msg.setDestinationEntity(165U);
    msg.id = 102U;
    msg.value = 0.42700649853;

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
    msg.setTimeStamp(0.707647909821);
    msg.setSource(27786U);
    msg.setSourceEntity(130U);
    msg.setDestination(10816U);
    msg.setDestinationEntity(195U);
    msg.id = 185U;
    msg.value = 0.362181106971;

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
    msg.setTimeStamp(0.396954617215);
    msg.setSource(22979U);
    msg.setSourceEntity(61U);
    msg.setDestination(57762U);
    msg.setDestinationEntity(127U);
    msg.id = 97U;
    msg.value = 0.750123390821;

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
    msg.setTimeStamp(0.984313498507);
    msg.setSource(33488U);
    msg.setSourceEntity(62U);
    msg.setDestination(62064U);
    msg.setDestinationEntity(8U);
    msg.id = 209U;
    msg.value = 0.336098945713;

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
    msg.setTimeStamp(0.236581576347);
    msg.setSource(42308U);
    msg.setSourceEntity(41U);
    msg.setDestination(12824U);
    msg.setDestinationEntity(53U);
    msg.id = 65U;
    msg.value = 0.283122626919;

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
    msg.setTimeStamp(0.554509919599);
    msg.setSource(26325U);
    msg.setSourceEntity(11U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(107U);
    msg.id = 192U;
    msg.value = 0.170070178169;

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
    msg.setTimeStamp(0.57846336224);
    msg.setSource(60422U);
    msg.setSourceEntity(90U);
    msg.setDestination(29968U);
    msg.setDestinationEntity(230U);
    msg.id = 231U;
    msg.angle = 0.129904866877;

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
    msg.setTimeStamp(0.865647311026);
    msg.setSource(61950U);
    msg.setSourceEntity(52U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(47U);
    msg.id = 85U;
    msg.angle = 0.645471371943;

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
    msg.setTimeStamp(0.214473279538);
    msg.setSource(58788U);
    msg.setSourceEntity(92U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(207U);
    msg.id = 107U;
    msg.angle = 0.308180684635;

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
    msg.setTimeStamp(0.687061492379);
    msg.setSource(22294U);
    msg.setSourceEntity(114U);
    msg.setDestination(53969U);
    msg.setDestinationEntity(28U);
    msg.op = 42U;
    msg.actions.assign("ZAIASKPGOVQZV");

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
    msg.setTimeStamp(0.0117035046058);
    msg.setSource(27640U);
    msg.setSourceEntity(26U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(140U);
    msg.op = 213U;
    msg.actions.assign("KCIKULTYYTSLDSTFGHQEMHVVZKBLVJBMYFNPIZUPGIAKWOORBGNUCYJWOQEJBYLMNTJVOWEWQUOLTHWVRUZNHEKLNSFSRIHBEDGXADQFGBWVWZQJTYHIE");

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
    msg.setTimeStamp(0.600767037218);
    msg.setSource(24136U);
    msg.setSourceEntity(95U);
    msg.setDestination(22682U);
    msg.setDestinationEntity(130U);
    msg.op = 28U;
    msg.actions.assign("QRNOGJMTCWSJTVOPQYWGFSUUGQZODLHUVDXWYELM");

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
    msg.setTimeStamp(0.134442357685);
    msg.setSource(6559U);
    msg.setSourceEntity(143U);
    msg.setDestination(38325U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("EESVUXCVWRMNXGQLPGFPMBZEVJTYRSINUKVNYIHJFHAPTUYGSKLXJNDFLLCCKWZIVOEHWOHYUOFOVBVTUOAKPFMHIZNLNIDNBZQDKRHPCAQQXKUQPOYPCOZCCHUCQSTYKBATRAOALJLCRRBT");

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
    msg.setTimeStamp(0.729171224901);
    msg.setSource(33039U);
    msg.setSourceEntity(27U);
    msg.setDestination(14474U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("GWDFNOEIYDMRXYCTQAFBHLGLOQOHWBCTFHYTAPFOKDQRNMCIBXDKGSOHVDIUUZMLPAWFUOGDMYSSJHGYBHJAPESQFMXWBSAEFYTYNLVZHZYUVTFKJOBRWPTVMUGZANOKAMVBKUEIHYTPRWPHGGWPMZDZLZTENMXRXDPSSQZANCIUZFZCKQNJRJDXWKIRJXBRNCMCBIPOQCUEQXGEAIULIEKAWXY");

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
    msg.setTimeStamp(0.916538911799);
    msg.setSource(26128U);
    msg.setSourceEntity(105U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("OOAWUEYRZXOZMRUZFWIQHVNSCDEIJOLEGWLJQTBHJTYJGTZSCRYAIPXGGTCFWCPEXIHOJASKKSRDVSRQSYQADPSBMRWLMKMCRIPBYAYVBA");

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
    msg.setTimeStamp(0.374875017738);
    msg.setSource(48662U);
    msg.setSourceEntity(36U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(184U);
    msg.button = 181U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.44519979138);
    msg.setSource(54873U);
    msg.setSourceEntity(115U);
    msg.setDestination(39168U);
    msg.setDestinationEntity(131U);
    msg.button = 136U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.92830764507);
    msg.setSource(55293U);
    msg.setSourceEntity(230U);
    msg.setDestination(10581U);
    msg.setDestinationEntity(253U);
    msg.button = 233U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.286283982423);
    msg.setSource(1004U);
    msg.setSourceEntity(138U);
    msg.setDestination(14747U);
    msg.setDestinationEntity(8U);
    msg.op = 50U;
    msg.text.assign("JYWSTIANKOYOFPHKZLJPDCTNBHPLMODRLKFLSHHVCBPCRUAGBCFXNDSUWREDNWIEISITOFJNAFDRJVYQZCDWOEXMUVMFSGVZZVLOPOLKPNBNUDVWGKTEMLPTXCGESIDXIAZ");

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
    msg.setTimeStamp(0.990017850246);
    msg.setSource(60284U);
    msg.setSourceEntity(90U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(98U);
    msg.op = 164U;
    msg.text.assign("LOIEDFCNEDLAMSVVFYKQPYYNXRZFRZZHMPQEBDXMCAMUWJSU");

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
    msg.setTimeStamp(0.397251058532);
    msg.setSource(59323U);
    msg.setSourceEntity(134U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(27U);
    msg.op = 150U;
    msg.text.assign("YCMSYMKLLIBLIBZDPXRRVORGSIUUEAWTSANDCPUSJGBQMMWNSOHALDQCOJLATXBUSWZTLIDGTCNRODQRMRPKFUPFNHHLKLVKNAEVEOTXAZWJHUVEQKDHFVIVOZJDGQKFONMXBCXEQVTBZWUYFDYWMSAJKEHFTKJGQWTVZYIPOYFQLZXNMEEQSPJXHHYZBFNSZJQXEGAVYOTCEOXHJIUAMCHBTCPYWYGMPPDNP");

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
    msg.setTimeStamp(0.945612785677);
    msg.setSource(43913U);
    msg.setSourceEntity(25U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(241U);
    msg.op = 242U;
    msg.time_remain = 0.548914080196;
    msg.sched_time = 0.657937868928;

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
    msg.setTimeStamp(0.65046717451);
    msg.setSource(56587U);
    msg.setSourceEntity(37U);
    msg.setDestination(27870U);
    msg.setDestinationEntity(106U);
    msg.op = 3U;
    msg.time_remain = 0.785637074405;
    msg.sched_time = 0.518898407932;

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
    msg.setTimeStamp(0.148040154982);
    msg.setSource(17402U);
    msg.setSourceEntity(96U);
    msg.setDestination(44140U);
    msg.setDestinationEntity(98U);
    msg.op = 227U;
    msg.time_remain = 0.890160800961;
    msg.sched_time = 0.668105263508;

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
    msg.setTimeStamp(0.36925604063);
    msg.setSource(49173U);
    msg.setSourceEntity(5U);
    msg.setDestination(33817U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JQWVZWOVGUXWOKVVUKANELWVSPNGCOQUOQMBXQKMKMXTDOJVIZFHYTMBUNRDEKHFSUYPDXQRNAQJDXHZVNRMYDWOLGUXFYHVUXDLRTHLLKCDBYQYFZIJPLPBORIWCILZMLIMFANRVIUXBRJTWFCSZPFSQAGHEJZEBAJTNASOJBIYCYNWMCYIOHEAPTZSDFEVZPYMGBPFNDRKS");
    msg.op = 6U;
    msg.sched_time = 0.303823987933;

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
    msg.setTimeStamp(0.182846917366);
    msg.setSource(64327U);
    msg.setSourceEntity(84U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(12U);
    msg.name.assign("KAGIAFSEVIEMWPMJFXRPQHPSJZLGRZLCQMVQUXUVGOGPFHYBKXUIJIBCSROEAVOJRKDBFRGDONNYDZHHQDB");
    msg.op = 17U;
    msg.sched_time = 0.57086404996;

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
    msg.setTimeStamp(0.488503740187);
    msg.setSource(6862U);
    msg.setSourceEntity(77U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(157U);
    msg.name.assign("WWWGLFGVUAUVFBMNOLPZCJFLDADGJSRXOEKBRERGGVTBXPTWTTRXUIJOQOCLIWFPJDTDMSGBRSVMETDKHUZQPFUSXZSGONN");
    msg.op = 138U;
    msg.sched_time = 0.588865643659;

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
    msg.setTimeStamp(0.49664552302);
    msg.setSource(13622U);
    msg.setSourceEntity(30U);
    msg.setDestination(7245U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.708736560872);
    msg.setSource(24227U);
    msg.setSourceEntity(168U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.647490705223);
    msg.setSource(12628U);
    msg.setSourceEntity(70U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.741033306001);
    msg.setSource(23564U);
    msg.setSourceEntity(52U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NSYTVXWXXTOPGMAZUAKUKEKDYINIELPDUZUXQGPDVWFAQVUFEZFOEXRRFXBDHCGJLFJJJQPKNEEXIMRHJGAFWEQYZJRJVDLKZ");
    msg.state = 74U;

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
    msg.setTimeStamp(0.492637322552);
    msg.setSource(56629U);
    msg.setSourceEntity(254U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(166U);
    msg.name.assign("AWNXDJXRVISNEQTUYYCDEGMPKJMIFFLSVMWNMZDSKRUQJAZAWUMIIQGMRUCNLCZCNTCACBSYMOPYHMCJLPDPD");
    msg.state = 199U;

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
    msg.setTimeStamp(0.463550018821);
    msg.setSource(23784U);
    msg.setSourceEntity(80U);
    msg.setDestination(57093U);
    msg.setDestinationEntity(28U);
    msg.name.assign("OWEIPDYRYJHJNBZUIULLJCMAZVDXKGMPSRTQJHFNUMUILJNFKHESDWCEMMBPZQBJITLTSXBRRZAIGPXLOFQAVNVXUBCZGRDHYFXAOSEFUGIKWMKGGOTVCNDKBXVWFCGVYWCZMJPEDBWIIRSNXTEAHHDSUZRWZQYVPXECVFDQUEAKLRUKAWQOEAMLPTKHYNGBSOCAJRKSQAHYNOVVTDPXCQGPWFECHOXZTBJSBFLYZQLMOPODLTNGJUI");
    msg.state = 219U;

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
    msg.setTimeStamp(0.0591878329902);
    msg.setSource(18571U);
    msg.setSourceEntity(47U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(108U);
    msg.name.assign("YKUTIVPDHLWYCHVDPZEAGKEACSQKXLEFOAAAJENYXOAWXAXMPSJJKFEXNWOUYIQRJBZVPDSSOBISIKNARIIOCDHTCPUXNFUZQZFNQDZRGNRBETRXMOZSBYXCCHONHIHLYNUQQBYVLIFNVWSQRDWTULGYAPGPMITFCBXHBZPKDAROOMZXCQTORBJWTEKLGWJRDVDMHSNFUVUPGVJUU");
    msg.value = 135U;

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
    msg.setTimeStamp(0.240151970102);
    msg.setSource(6614U);
    msg.setSourceEntity(17U);
    msg.setDestination(64452U);
    msg.setDestinationEntity(3U);
    msg.name.assign("ZEPWSIKKISQZRMBHCZAHQSQDXHMDVIYWFZXKPQUDKOZJAFCOANAUYFYZBMGHNHSDNOCSTRZWXYNRIPLAEXWRPEUFFJEFYBWVODJJEDLCWXRFQWBTDYHRQCPKQGPPZGZDLKIEBUQHYNMULEIJLCGUASOUKLAUVAEGAVVTMMXTBVGJVMSEOPUNXIVOKHTKOLZCNJGHFFNJILXDENRCTDQBYTAXJRKMXOSLHTIGYBROILWQGSTNRVTCWVFBWYM");
    msg.value = 151U;

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
    msg.setTimeStamp(0.871160124657);
    msg.setSource(8661U);
    msg.setSourceEntity(214U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(191U);
    msg.name.assign("SGTELKEYYKEIAVLVLLMKWVWRZBLJTXNZCANIXFSKMSSDJJUFMHHODZDGQCIVCAQKGEIHHGCJMJIFUYWWSHCGBQZUKYRWZHZORRVRVPVPGPGUEXRRACWNGULXBDLKDBCPWBEEOHDONWVFNVIIHPZSMYHACYEHJRXFBQUFEJMXDOMPTDAUTQYOZOMUSUNNTIRGQTUOBSBWNTZTKBAXSPCOFPDNFFPQLAKXAXERATJJMBIYQZYJQWSKMPNIXLLVY");
    msg.value = 53U;

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
    msg.setTimeStamp(0.402038611017);
    msg.setSource(32731U);
    msg.setSourceEntity(99U);
    msg.setDestination(56892U);
    msg.setDestinationEntity(243U);
    msg.name.assign("VAHAKPCOWGUFBJJBUFGIYDSBPMZSQPVECDSGJYOSKHSVPHTJXFRWYOBMIDIKQTCUGBYWZHWXZAAZVM");

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
    msg.setTimeStamp(0.395574937316);
    msg.setSource(44459U);
    msg.setSourceEntity(143U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(13U);
    msg.name.assign("FTUTXPFZJCWKSLDAOLCRYH");

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
    msg.setTimeStamp(0.832753559689);
    msg.setSource(43591U);
    msg.setSourceEntity(185U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(154U);
    msg.name.assign("CNHOQAJIRSIBKSNFPBJIXGHIKWEVAMYKHXBEMHMWBUPUYQBDPLBFOUHRKVYZDKWMAPBLLWZDALHKTPRLNXIRAFCZBXCOSXIFZSDMRQQMGYVGFDQTJKDAJIOCHWQPWAPTHKTREYMMJTGVEFVXFDXEZUUCUCVGNYSJNUADZCJEFEWKHLLKONORGDWWNPQRZVIVOXXZCBNSQYZTSOTMVBLJWQSUGGPHXULIATRSUEENJQNFJTFGYAZOCETSY");

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
    msg.setTimeStamp(0.258251291338);
    msg.setSource(34313U);
    msg.setSourceEntity(7U);
    msg.setDestination(8363U);
    msg.setDestinationEntity(74U);
    msg.name.assign("PCSRMMLDVJYKRJQXMUMAYHDQVKQQLJHTEAOYG");
    msg.value = 104U;

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
    msg.setTimeStamp(0.0290485177401);
    msg.setSource(18160U);
    msg.setSourceEntity(76U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(56U);
    msg.name.assign("NFAEMJFCDFEMTRRXYLYZYNWKGEPAENIUMTPIFQYUQQWXWAQLZFCIBATRRLOGUHLOKSHUOLKDNUTLNULWJIRJZWMYXSDTOSHUZEXDVHBKSTQMAGBZJSMGWQZLQYUDPHYPNV");
    msg.value = 116U;

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
    msg.setTimeStamp(0.572071641101);
    msg.setSource(35629U);
    msg.setSourceEntity(95U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(90U);
    msg.name.assign("MIPEDIPVDUXFNOOXIHODRCRCGJPULXALYTAOMHKTGBNGLLGFCOYNYKSJBTUNWCKUAIQIZBMFRFCRJBXHLVBQHGQLVTQCDGIUOPWAAQEWZLCPAWZFODEBMKSTPGQAKURQFVVGMRDTILORSSLHKKJBBGDYJNSINYIRSZUFIWJNUEOWNAQGPKAHPPSBMMJOZQSNVHPX");
    msg.value = 79U;

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
    msg.setTimeStamp(0.603750957894);
    msg.setSource(53873U);
    msg.setSourceEntity(75U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(71U);
    msg.id = 48U;
    msg.period = 14397871U;
    msg.duty_cycle = 324653451U;

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
    msg.setTimeStamp(0.0457782696458);
    msg.setSource(24899U);
    msg.setSourceEntity(161U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(18U);
    msg.id = 31U;
    msg.period = 1298233265U;
    msg.duty_cycle = 2798679729U;

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
    msg.setTimeStamp(0.270917614132);
    msg.setSource(52592U);
    msg.setSourceEntity(46U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(100U);
    msg.id = 5U;
    msg.period = 1347769816U;
    msg.duty_cycle = 63086975U;

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
    msg.setTimeStamp(0.744192953362);
    msg.setSource(37629U);
    msg.setSourceEntity(178U);
    msg.setDestination(62958U);
    msg.setDestinationEntity(0U);
    msg.id = 135U;
    msg.period = 1449393718U;
    msg.duty_cycle = 3418920692U;

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
    msg.setTimeStamp(0.346965767504);
    msg.setSource(35282U);
    msg.setSourceEntity(104U);
    msg.setDestination(54577U);
    msg.setDestinationEntity(243U);
    msg.id = 115U;
    msg.period = 3629434556U;
    msg.duty_cycle = 3132500155U;

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
    msg.setTimeStamp(0.226298658758);
    msg.setSource(19542U);
    msg.setSourceEntity(180U);
    msg.setDestination(54333U);
    msg.setDestinationEntity(219U);
    msg.id = 174U;
    msg.period = 541152075U;
    msg.duty_cycle = 3348652447U;

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
    msg.setTimeStamp(0.140366815498);
    msg.setSource(53474U);
    msg.setSourceEntity(108U);
    msg.setDestination(7057U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.473946363991;
    msg.lon = 0.944331955468;
    msg.height = 0.670296723434;
    msg.x = 0.744980048146;
    msg.y = 0.173116659692;
    msg.z = 0.144859874255;
    msg.phi = 0.476940518219;
    msg.theta = 0.438317464711;
    msg.psi = 0.366124454512;
    msg.u = 0.114476758991;
    msg.v = 0.46793039805;
    msg.w = 0.697910403373;
    msg.vx = 0.130093636255;
    msg.vy = 0.730202598387;
    msg.vz = 0.205652673569;
    msg.p = 0.397109003757;
    msg.q = 0.615845967625;
    msg.r = 0.340356980052;
    msg.depth = 0.463898723902;
    msg.alt = 0.737266196313;

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
    msg.setTimeStamp(0.736789178466);
    msg.setSource(43821U);
    msg.setSourceEntity(11U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.133189838234;
    msg.lon = 0.787544870855;
    msg.height = 0.812150212694;
    msg.x = 0.589761789156;
    msg.y = 0.0236625681804;
    msg.z = 0.225943324655;
    msg.phi = 0.470145046092;
    msg.theta = 0.609811536106;
    msg.psi = 0.150537063735;
    msg.u = 0.566910407153;
    msg.v = 0.748961467316;
    msg.w = 0.16027484718;
    msg.vx = 0.440825876858;
    msg.vy = 0.973111996392;
    msg.vz = 0.235761614692;
    msg.p = 0.288622441741;
    msg.q = 0.200333867133;
    msg.r = 0.653710920251;
    msg.depth = 0.945464931346;
    msg.alt = 0.713890778929;

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
    msg.setTimeStamp(0.464376356495);
    msg.setSource(30915U);
    msg.setSourceEntity(236U);
    msg.setDestination(25146U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.537388781103;
    msg.lon = 0.186181809349;
    msg.height = 0.797705999811;
    msg.x = 0.536469485304;
    msg.y = 0.119104706217;
    msg.z = 0.791052246809;
    msg.phi = 0.561293090161;
    msg.theta = 0.303043827553;
    msg.psi = 0.283877864515;
    msg.u = 0.176822414606;
    msg.v = 0.966436070817;
    msg.w = 0.898790493273;
    msg.vx = 0.453718907873;
    msg.vy = 0.122223251513;
    msg.vz = 0.397291833191;
    msg.p = 0.859921211006;
    msg.q = 0.765873882622;
    msg.r = 0.454305688628;
    msg.depth = 0.620644728042;
    msg.alt = 0.0871212769879;

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
    msg.setTimeStamp(0.21699615533);
    msg.setSource(28422U);
    msg.setSourceEntity(105U);
    msg.setDestination(23769U);
    msg.setDestinationEntity(89U);
    msg.x = 0.129115423041;
    msg.y = 0.622801373507;
    msg.z = 0.355291663603;

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
    msg.setTimeStamp(0.902101932276);
    msg.setSource(48210U);
    msg.setSourceEntity(227U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(163U);
    msg.x = 0.348650037211;
    msg.y = 0.922254172249;
    msg.z = 0.147274618466;

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
    msg.setTimeStamp(0.906993296131);
    msg.setSource(8341U);
    msg.setSourceEntity(89U);
    msg.setDestination(19617U);
    msg.setDestinationEntity(163U);
    msg.x = 0.732327800538;
    msg.y = 0.415667559789;
    msg.z = 0.266730075861;

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
    msg.setTimeStamp(0.904423971377);
    msg.setSource(52707U);
    msg.setSourceEntity(209U);
    msg.setDestination(1702U);
    msg.setDestinationEntity(223U);
    msg.value = 0.307084120895;

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
    msg.setTimeStamp(0.0527911987194);
    msg.setSource(6555U);
    msg.setSourceEntity(76U);
    msg.setDestination(43013U);
    msg.setDestinationEntity(31U);
    msg.value = 0.875412190073;

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
    msg.setTimeStamp(0.502018324811);
    msg.setSource(55746U);
    msg.setSourceEntity(102U);
    msg.setDestination(16422U);
    msg.setDestinationEntity(191U);
    msg.value = 0.656182867083;

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
    msg.setTimeStamp(0.367076063431);
    msg.setSource(35435U);
    msg.setSourceEntity(253U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(74U);
    msg.value = 0.403469289227;

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
    msg.setTimeStamp(0.553200073487);
    msg.setSource(29458U);
    msg.setSourceEntity(10U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(25U);
    msg.value = 0.849123683658;

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
    msg.setTimeStamp(0.863513493561);
    msg.setSource(23111U);
    msg.setSourceEntity(87U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(41U);
    msg.value = 0.520815080096;

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
    msg.setTimeStamp(0.973259674466);
    msg.setSource(51530U);
    msg.setSourceEntity(218U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(71U);
    msg.x = 0.107077180925;
    msg.y = 0.488292159285;
    msg.z = 0.279541160142;
    msg.phi = 0.794193089339;
    msg.theta = 0.207263653883;
    msg.psi = 0.892195533163;
    msg.p = 0.979020227211;
    msg.q = 0.0345230768686;
    msg.r = 0.416654619147;
    msg.u = 0.442799502274;
    msg.v = 0.00204319935263;
    msg.w = 0.208441268868;
    msg.bias_psi = 0.108015925333;
    msg.bias_r = 0.686373192578;

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
    msg.setTimeStamp(0.858514248099);
    msg.setSource(14625U);
    msg.setSourceEntity(199U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(9U);
    msg.x = 0.575215540945;
    msg.y = 0.94403137694;
    msg.z = 0.772625752173;
    msg.phi = 0.291999760829;
    msg.theta = 0.648176509021;
    msg.psi = 0.974715625966;
    msg.p = 0.219446164016;
    msg.q = 0.638569173172;
    msg.r = 0.197060107831;
    msg.u = 0.682844303363;
    msg.v = 0.633326581968;
    msg.w = 0.730264731923;
    msg.bias_psi = 0.467015716465;
    msg.bias_r = 0.0103817752936;

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
    msg.setTimeStamp(0.217308741402);
    msg.setSource(37472U);
    msg.setSourceEntity(85U);
    msg.setDestination(35735U);
    msg.setDestinationEntity(226U);
    msg.x = 0.643378596771;
    msg.y = 0.618138442378;
    msg.z = 0.715808222739;
    msg.phi = 0.123912521952;
    msg.theta = 0.314833016641;
    msg.psi = 0.917259229794;
    msg.p = 0.401163272588;
    msg.q = 0.0232133527889;
    msg.r = 0.663637715571;
    msg.u = 0.783696795862;
    msg.v = 0.4194639298;
    msg.w = 0.74144619027;
    msg.bias_psi = 0.124981181738;
    msg.bias_r = 0.367356889829;

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
    msg.setTimeStamp(0.982835620667);
    msg.setSource(36709U);
    msg.setSourceEntity(96U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.803032565189;
    msg.bias_r = 0.526089805587;
    msg.cog = 0.524383896006;
    msg.cyaw = 0.611294066604;
    msg.lbl_rej_level = 0.228129871191;
    msg.gps_rej_level = 0.998361073644;
    msg.custom_x = 0.317366758343;
    msg.custom_y = 0.722488649161;
    msg.custom_z = 0.226909717928;

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
    msg.setTimeStamp(0.0799194804446);
    msg.setSource(21647U);
    msg.setSourceEntity(8U);
    msg.setDestination(42389U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.778295223409;
    msg.bias_r = 0.455767905854;
    msg.cog = 0.213836673103;
    msg.cyaw = 0.805377665506;
    msg.lbl_rej_level = 0.0539983168094;
    msg.gps_rej_level = 0.889899238625;
    msg.custom_x = 0.322876712177;
    msg.custom_y = 0.465005231906;
    msg.custom_z = 0.395114023775;

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
    msg.setTimeStamp(0.455502517638);
    msg.setSource(63065U);
    msg.setSourceEntity(86U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.746065254213;
    msg.bias_r = 0.930531108272;
    msg.cog = 0.651452184245;
    msg.cyaw = 0.939732987387;
    msg.lbl_rej_level = 0.0427820747632;
    msg.gps_rej_level = 0.209471604574;
    msg.custom_x = 0.790084113387;
    msg.custom_y = 0.936021943575;
    msg.custom_z = 0.872720063729;

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
    msg.setTimeStamp(0.0213951157973);
    msg.setSource(62792U);
    msg.setSourceEntity(181U);
    msg.setDestination(11468U);
    msg.setDestinationEntity(65U);
    msg.utc_time = 0.704807604837;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.593450447141);
    msg.setSource(20379U);
    msg.setSourceEntity(119U);
    msg.setDestination(42146U);
    msg.setDestinationEntity(227U);
    msg.utc_time = 0.229965189352;
    msg.reason = 140U;

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
    msg.setTimeStamp(0.0944795538032);
    msg.setSource(33960U);
    msg.setSourceEntity(92U);
    msg.setDestination(36714U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.716165518065;
    msg.reason = 232U;

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
    msg.setTimeStamp(0.678226957832);
    msg.setSource(8580U);
    msg.setSourceEntity(95U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(123U);
    msg.id = 108U;
    msg.range = 0.250390599804;
    msg.acceptance = 240U;

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
    msg.setTimeStamp(0.41685812693);
    msg.setSource(44368U);
    msg.setSourceEntity(190U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(184U);
    msg.id = 27U;
    msg.range = 0.416495878952;
    msg.acceptance = 77U;

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
    msg.setTimeStamp(0.298836992466);
    msg.setSource(27855U);
    msg.setSourceEntity(159U);
    msg.setDestination(16420U);
    msg.setDestinationEntity(128U);
    msg.id = 100U;
    msg.range = 0.902440185173;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.539765944672);
    msg.setSource(29433U);
    msg.setSourceEntity(215U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(243U);
    msg.type = 206U;
    msg.reason = 72U;
    msg.value = 0.226316523587;
    msg.timestep = 0.798245410019;

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
    msg.setTimeStamp(0.319009277848);
    msg.setSource(27104U);
    msg.setSourceEntity(87U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(46U);
    msg.type = 170U;
    msg.reason = 182U;
    msg.value = 0.28873083685;
    msg.timestep = 0.108459560746;

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
    msg.setTimeStamp(0.589479871617);
    msg.setSource(1149U);
    msg.setSourceEntity(56U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(216U);
    msg.type = 146U;
    msg.reason = 242U;
    msg.value = 0.188544287146;
    msg.timestep = 0.521758946994;

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
    msg.setTimeStamp(0.0372823723065);
    msg.setSource(14036U);
    msg.setSourceEntity(120U);
    msg.setDestination(13269U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AHRZUDMXOMXFTESJOGGANLFKFBFRZEAINXDTCGOLHJOUYZEMIMWHKMPTIACDSDHVHKNUQWPGJXQJOCVDVZSTOXBNYKPPKOCWGTHUVWDRBERUPZPNGLCHESPPOYFMMWXUZSFNRYBQPGFYBLEASJPICDDWORLGT");
    tmp_msg_0.lat = 0.316428196899;
    tmp_msg_0.lon = 0.508931585958;
    tmp_msg_0.depth = 0.543810896655;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.925549665194;
    msg.y = 0.225542905281;
    msg.var_x = 0.800450262576;
    msg.var_y = 0.139646445983;
    msg.distance = 0.0934399875655;

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
    msg.setTimeStamp(0.142023410196);
    msg.setSource(5774U);
    msg.setSourceEntity(30U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VSZDWPAZNNXCUMYOVQRJYWGHDCEUFKFHOCZPQKUSZHTFTVYCXAKWMIATGTAWXYGGALZPURTORZVQPDYKJKWTFBMUOHMXDNPFGQMXHTEJQHKGIHSIPYSEPFQUHOJWKLASMDJBARVMLSIEEUODGVQLZOUYJFWLNGAXEJXREN");
    tmp_msg_0.lat = 0.565597221937;
    tmp_msg_0.lon = 0.681189332252;
    tmp_msg_0.depth = 0.637148797711;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.99803511982;
    msg.y = 0.954733714063;
    msg.var_x = 0.206594232856;
    msg.var_y = 0.0205720646439;
    msg.distance = 0.151880795682;

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
    msg.setTimeStamp(0.367046504457);
    msg.setSource(47517U);
    msg.setSourceEntity(208U);
    msg.setDestination(46331U);
    msg.setDestinationEntity(203U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DPZGFWMUUINAXDVLCTEMYPTXAFTVOXVTSTTBZTXIEYSSYOFUHTKFHJRVULSXBZFWOKALABJWNUGLRAASZNNSQVJWGBQJGCAKPNIXDPYCLSQGPSIUQPIVYOXJFENRMOKEPDGAUNNBMOSEXHMHHLBZMEZDRGVHRQWEBTZJVIGURMQWCLCCXEZDDRJFAEPCOCWVLDOZNRGYIMSYYRLEHKDH");
    tmp_msg_0.lat = 0.602743364998;
    tmp_msg_0.lon = 0.0634825472206;
    tmp_msg_0.depth = 0.370032609571;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.806644305979;
    msg.y = 0.279252326692;
    msg.var_x = 0.876340292841;
    msg.var_y = 0.952761827267;
    msg.distance = 0.553385048453;

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
    msg.setTimeStamp(0.332825391932);
    msg.setSource(9527U);
    msg.setSourceEntity(82U);
    msg.setDestination(34208U);
    msg.setDestinationEntity(88U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.860610423577);
    msg.setSource(15463U);
    msg.setSourceEntity(198U);
    msg.setDestination(11551U);
    msg.setDestinationEntity(226U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.903393240656);
    msg.setSource(3212U);
    msg.setSourceEntity(136U);
    msg.setDestination(21231U);
    msg.setDestinationEntity(191U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.553208195533);
    msg.setSource(61342U);
    msg.setSourceEntity(178U);
    msg.setDestination(10201U);
    msg.setDestinationEntity(93U);
    msg.x = 0.978904442829;
    msg.y = 0.914239338017;
    msg.z = 0.390367273498;

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
    msg.setTimeStamp(0.620344858778);
    msg.setSource(18356U);
    msg.setSourceEntity(173U);
    msg.setDestination(51503U);
    msg.setDestinationEntity(10U);
    msg.x = 0.240545814089;
    msg.y = 0.131857104003;
    msg.z = 0.949118713619;

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
    msg.setTimeStamp(0.389630153807);
    msg.setSource(35211U);
    msg.setSourceEntity(169U);
    msg.setDestination(18550U);
    msg.setDestinationEntity(232U);
    msg.x = 0.603590692444;
    msg.y = 0.280477955548;
    msg.z = 0.0664770186395;

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
    msg.setTimeStamp(0.849873940547);
    msg.setSource(39210U);
    msg.setSourceEntity(251U);
    msg.setDestination(41879U);
    msg.setDestinationEntity(168U);
    msg.value = 0.215385435706;

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
    msg.setTimeStamp(0.00648949849462);
    msg.setSource(2695U);
    msg.setSourceEntity(202U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0813891788315;

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
    msg.setTimeStamp(0.724227917204);
    msg.setSource(39572U);
    msg.setSourceEntity(86U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(129U);
    msg.value = 0.904021966498;

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
    msg.setTimeStamp(0.148833251629);
    msg.setSource(40126U);
    msg.setSourceEntity(25U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(151U);
    msg.value = 0.764815453115;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.242958878509);
    msg.setSource(4143U);
    msg.setSourceEntity(68U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(183U);
    msg.value = 0.514635250365;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.37954186238);
    msg.setSource(19259U);
    msg.setSourceEntity(48U);
    msg.setDestination(30002U);
    msg.setDestinationEntity(174U);
    msg.value = 0.353525804379;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.0752197012973);
    msg.setSource(4664U);
    msg.setSourceEntity(105U);
    msg.setDestination(47404U);
    msg.setDestinationEntity(139U);
    msg.value = 0.976413364764;
    msg.speed_units = 231U;

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
    msg.setTimeStamp(0.0886007385378);
    msg.setSource(25759U);
    msg.setSourceEntity(66U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(225U);
    msg.value = 0.106349384708;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.870213519658);
    msg.setSource(61961U);
    msg.setSourceEntity(88U);
    msg.setDestination(42502U);
    msg.setDestinationEntity(66U);
    msg.value = 0.054033810723;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.830633882686);
    msg.setSource(23468U);
    msg.setSourceEntity(244U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(75U);
    msg.value = 0.791728495547;

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
    msg.setTimeStamp(0.783427769199);
    msg.setSource(7646U);
    msg.setSourceEntity(119U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(190U);
    msg.value = 0.78235468112;

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
    msg.setTimeStamp(0.562490828787);
    msg.setSource(44913U);
    msg.setSourceEntity(98U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(211U);
    msg.value = 0.932575919195;

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
    msg.setTimeStamp(0.369098033963);
    msg.setSource(64538U);
    msg.setSourceEntity(162U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(191U);
    msg.value = 0.38575434001;

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
    msg.setTimeStamp(0.732712603939);
    msg.setSource(14479U);
    msg.setSourceEntity(79U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0746184898457;

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
    msg.setTimeStamp(0.510663053221);
    msg.setSource(2569U);
    msg.setSourceEntity(169U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(40U);
    msg.value = 0.214730763695;

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
    msg.setTimeStamp(0.776694936782);
    msg.setSource(3186U);
    msg.setSourceEntity(87U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(246U);
    msg.value = 0.422667688555;

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
    msg.setTimeStamp(0.998059692147);
    msg.setSource(33532U);
    msg.setSourceEntity(67U);
    msg.setDestination(43598U);
    msg.setDestinationEntity(218U);
    msg.value = 0.337783788857;

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
    msg.setTimeStamp(0.242770745309);
    msg.setSource(48091U);
    msg.setSourceEntity(114U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(13U);
    msg.value = 0.85444171583;

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
    msg.setTimeStamp(0.0372649439704);
    msg.setSource(2204U);
    msg.setSourceEntity(130U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 2467312257U;
    msg.start_lat = 0.890718426314;
    msg.start_lon = 0.816001576962;
    msg.start_z = 0.430773678211;
    msg.start_z_units = 224U;
    msg.end_lat = 0.227807185795;
    msg.end_lon = 0.0132175784435;
    msg.end_z = 0.441414506659;
    msg.end_z_units = 214U;
    msg.speed = 0.174825263029;
    msg.speed_units = 244U;
    msg.lradius = 0.420443988323;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.966827637481);
    msg.setSource(6U);
    msg.setSourceEntity(141U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 500613435U;
    msg.start_lat = 0.926817163129;
    msg.start_lon = 0.772232529631;
    msg.start_z = 0.308512193479;
    msg.start_z_units = 144U;
    msg.end_lat = 0.820074158811;
    msg.end_lon = 0.54138472408;
    msg.end_z = 0.574446449533;
    msg.end_z_units = 150U;
    msg.speed = 0.0582583508559;
    msg.speed_units = 170U;
    msg.lradius = 0.758605625794;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.774102778599);
    msg.setSource(55889U);
    msg.setSourceEntity(96U);
    msg.setDestination(57365U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 142308882U;
    msg.start_lat = 0.0808790183428;
    msg.start_lon = 0.474967576832;
    msg.start_z = 0.703676664027;
    msg.start_z_units = 131U;
    msg.end_lat = 0.275475610279;
    msg.end_lon = 0.715440994439;
    msg.end_z = 0.922931077787;
    msg.end_z_units = 61U;
    msg.speed = 0.443464820061;
    msg.speed_units = 239U;
    msg.lradius = 0.42909547255;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.618664100484);
    msg.setSource(20453U);
    msg.setSourceEntity(33U);
    msg.setDestination(64600U);
    msg.setDestinationEntity(181U);
    msg.x = 0.217169291649;
    msg.y = 0.739525304328;
    msg.z = 0.67867245801;
    msg.k = 0.345879530529;
    msg.m = 0.484533069798;
    msg.n = 0.829303494842;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.39233205839);
    msg.setSource(42941U);
    msg.setSourceEntity(42U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(141U);
    msg.x = 0.248228040479;
    msg.y = 0.80684701101;
    msg.z = 0.0371371730419;
    msg.k = 0.431226636803;
    msg.m = 0.75873630286;
    msg.n = 0.73662429793;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.427809993623);
    msg.setSource(31532U);
    msg.setSourceEntity(208U);
    msg.setDestination(21077U);
    msg.setDestinationEntity(37U);
    msg.x = 0.530082338612;
    msg.y = 0.396530731842;
    msg.z = 0.567142698114;
    msg.k = 0.5794386949;
    msg.m = 0.36789469501;
    msg.n = 0.717660240811;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.820464447353);
    msg.setSource(51901U);
    msg.setSourceEntity(141U);
    msg.setDestination(33712U);
    msg.setDestinationEntity(173U);
    msg.value = 0.285773206141;

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
    msg.setTimeStamp(0.851128512944);
    msg.setSource(32534U);
    msg.setSourceEntity(146U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(3U);
    msg.value = 0.0621729236606;

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
    msg.setTimeStamp(0.612506015505);
    msg.setSource(33271U);
    msg.setSourceEntity(192U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(95U);
    msg.value = 0.639337772676;

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
    msg.setTimeStamp(0.51775659904);
    msg.setSource(37919U);
    msg.setSourceEntity(20U);
    msg.setDestination(36710U);
    msg.setDestinationEntity(43U);
    msg.u = 0.365518566538;
    msg.v = 0.747795545299;
    msg.w = 0.344381791429;
    msg.p = 0.22438794225;
    msg.q = 0.424462401767;
    msg.r = 0.916610906291;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.132308637631);
    msg.setSource(47680U);
    msg.setSourceEntity(26U);
    msg.setDestination(20149U);
    msg.setDestinationEntity(85U);
    msg.u = 0.505618021054;
    msg.v = 0.625271147719;
    msg.w = 0.225255142279;
    msg.p = 0.216690708564;
    msg.q = 0.150797649695;
    msg.r = 0.394088721795;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.615252877487);
    msg.setSource(46895U);
    msg.setSourceEntity(133U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(209U);
    msg.u = 0.306558027319;
    msg.v = 0.639075492214;
    msg.w = 0.233917569447;
    msg.p = 0.471251873793;
    msg.q = 0.78684851893;
    msg.r = 0.631716777903;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.870229839178);
    msg.setSource(24890U);
    msg.setSourceEntity(62U);
    msg.setDestination(64028U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 4119736722U;
    msg.start_lat = 0.0514888114357;
    msg.start_lon = 0.28150051853;
    msg.start_z = 0.0462357879224;
    msg.start_z_units = 247U;
    msg.end_lat = 0.901855231614;
    msg.end_lon = 0.460605820661;
    msg.end_z = 0.270013597249;
    msg.end_z_units = 27U;
    msg.lradius = 0.637310785269;
    msg.flags = 43U;
    msg.x = 0.170361911133;
    msg.y = 0.119070125937;
    msg.z = 0.664739318737;
    msg.vx = 0.616615047854;
    msg.vy = 0.865066110407;
    msg.vz = 0.181503840599;
    msg.course_error = 0.53683673526;
    msg.eta = 47352U;

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
    msg.setTimeStamp(0.529118880254);
    msg.setSource(11432U);
    msg.setSourceEntity(19U);
    msg.setDestination(33103U);
    msg.setDestinationEntity(234U);
    msg.path_ref = 4039647456U;
    msg.start_lat = 0.22046086478;
    msg.start_lon = 0.185039057309;
    msg.start_z = 0.283444985292;
    msg.start_z_units = 172U;
    msg.end_lat = 0.836668096751;
    msg.end_lon = 0.211243974732;
    msg.end_z = 0.904229492756;
    msg.end_z_units = 80U;
    msg.lradius = 0.218526194823;
    msg.flags = 138U;
    msg.x = 0.773904986409;
    msg.y = 0.933062728504;
    msg.z = 0.491197712533;
    msg.vx = 0.502485250308;
    msg.vy = 0.197009607105;
    msg.vz = 0.843263330494;
    msg.course_error = 0.776451559304;
    msg.eta = 64977U;

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
    msg.setTimeStamp(0.722539014476);
    msg.setSource(45337U);
    msg.setSourceEntity(198U);
    msg.setDestination(59558U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 2883647638U;
    msg.start_lat = 0.763829842638;
    msg.start_lon = 0.075243359183;
    msg.start_z = 0.443933096302;
    msg.start_z_units = 181U;
    msg.end_lat = 0.587782711808;
    msg.end_lon = 0.760201416728;
    msg.end_z = 0.327203576113;
    msg.end_z_units = 152U;
    msg.lradius = 0.350437887113;
    msg.flags = 121U;
    msg.x = 0.791717686293;
    msg.y = 0.739726257746;
    msg.z = 0.872321212756;
    msg.vx = 0.242380210366;
    msg.vy = 0.119912713738;
    msg.vz = 0.894526796952;
    msg.course_error = 0.6457565577;
    msg.eta = 59141U;

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
    msg.setTimeStamp(0.543960735912);
    msg.setSource(21132U);
    msg.setSourceEntity(128U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(36U);
    msg.k = 0.907818426252;
    msg.m = 0.0708592008791;
    msg.n = 0.577629483895;

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
    msg.setTimeStamp(0.290483964553);
    msg.setSource(14633U);
    msg.setSourceEntity(201U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(154U);
    msg.k = 0.443308465516;
    msg.m = 0.20559779561;
    msg.n = 0.144224873416;

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
    msg.setTimeStamp(0.839180866824);
    msg.setSource(21490U);
    msg.setSourceEntity(121U);
    msg.setDestination(60347U);
    msg.setDestinationEntity(6U);
    msg.k = 0.00239217810078;
    msg.m = 0.597473426347;
    msg.n = 0.125330835496;

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
    msg.setTimeStamp(0.102519043276);
    msg.setSource(28059U);
    msg.setSourceEntity(152U);
    msg.setDestination(45762U);
    msg.setDestinationEntity(49U);
    msg.p = 0.183620926913;
    msg.i = 0.349452739784;
    msg.d = 0.191270683182;
    msg.a = 0.24567499107;

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
    msg.setTimeStamp(0.511730327132);
    msg.setSource(34779U);
    msg.setSourceEntity(24U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(24U);
    msg.p = 0.0524276037181;
    msg.i = 0.145358965105;
    msg.d = 0.472675602838;
    msg.a = 0.638418384088;

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
    msg.setTimeStamp(0.381398241001);
    msg.setSource(6238U);
    msg.setSourceEntity(105U);
    msg.setDestination(46414U);
    msg.setDestinationEntity(99U);
    msg.p = 0.339251997253;
    msg.i = 0.213788109795;
    msg.d = 0.902831416632;
    msg.a = 0.759390641936;

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
    msg.setTimeStamp(0.950429793247);
    msg.setSource(26515U);
    msg.setSourceEntity(247U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(198U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.905066556179);
    msg.setSource(25292U);
    msg.setSourceEntity(4U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(147U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.898813176122);
    msg.setSource(41825U);
    msg.setSourceEntity(76U);
    msg.setDestination(43365U);
    msg.setDestinationEntity(182U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.018655753493);
    msg.setSource(42734U);
    msg.setSourceEntity(196U);
    msg.setDestination(27222U);
    msg.setDestinationEntity(42U);
    msg.timeout = 59388U;
    msg.lat = 0.0666057964543;
    msg.lon = 0.0889008043668;
    msg.z = 0.69406055569;
    msg.z_units = 13U;
    msg.speed = 0.804837825393;
    msg.speed_units = 244U;
    msg.roll = 0.0740202180014;
    msg.pitch = 0.775585299209;
    msg.yaw = 0.409272335686;
    msg.custom.assign("VBIUVTEBGAWWFYJSLEYZBHVXGROJNNIGOTTYSWXMHDRLIYZUSFCLLVIAZDDJKKFGEPIDBGYMBMRGQZWUCOPPMXKSSOSQODTEXBPKXMTWMIKQPQIECQJXNXUHHKALDYFVFAJXBBVNZHPLGQNDVFZHZCRNKRVEPRAYJXOYHAPSZOAEQIEJCVAUSMLFDSMGFKTJTEYHDRPILUQNWTBJINJGVROS");

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
    msg.setTimeStamp(0.206469928493);
    msg.setSource(43207U);
    msg.setSourceEntity(11U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(176U);
    msg.timeout = 6319U;
    msg.lat = 0.990226899447;
    msg.lon = 0.241416104092;
    msg.z = 0.391283004448;
    msg.z_units = 146U;
    msg.speed = 0.715048639099;
    msg.speed_units = 141U;
    msg.roll = 0.107682806119;
    msg.pitch = 0.695328863255;
    msg.yaw = 0.641370034704;
    msg.custom.assign("YYFOWSKHFOZMTLNEONJA");

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
    msg.setTimeStamp(0.898555768833);
    msg.setSource(51720U);
    msg.setSourceEntity(96U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(146U);
    msg.timeout = 14768U;
    msg.lat = 0.763856135427;
    msg.lon = 0.134412154781;
    msg.z = 0.458272433308;
    msg.z_units = 167U;
    msg.speed = 0.421611234909;
    msg.speed_units = 29U;
    msg.roll = 0.0242197169874;
    msg.pitch = 0.827279943146;
    msg.yaw = 0.309015497126;
    msg.custom.assign("XNZGTFEPTKUDTZCMZCQUOGTWMSHOYBDKWLHFYXHIUWY");

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
    msg.setTimeStamp(0.40058167003);
    msg.setSource(7361U);
    msg.setSourceEntity(54U);
    msg.setDestination(31746U);
    msg.setDestinationEntity(54U);
    msg.timeout = 30107U;
    msg.lat = 0.544664719366;
    msg.lon = 0.100113646333;
    msg.z = 0.535285190192;
    msg.z_units = 181U;
    msg.speed = 0.205437638274;
    msg.speed_units = 87U;
    msg.duration = 46919U;
    msg.radius = 0.68140023803;
    msg.flags = 86U;
    msg.custom.assign("ATAMLVJPUXNOCTXTRPGCJYNWKEBGNJDGKTQVMEYVMSLUKMXMAQOIIHTKBFQYRHTYCOWGWRCEQGQJZJMJIUBZHSLRFATJNEHZQAKCVUWIHVRDAYHWSGVIKIIMVCQGDRTDZWRZXDYUYLNMPIUSSNQQSOESASX");

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
    msg.setTimeStamp(0.949101886622);
    msg.setSource(47567U);
    msg.setSourceEntity(104U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(240U);
    msg.timeout = 32997U;
    msg.lat = 0.452312925496;
    msg.lon = 0.582556968829;
    msg.z = 0.85218194285;
    msg.z_units = 38U;
    msg.speed = 0.406440530845;
    msg.speed_units = 134U;
    msg.duration = 8431U;
    msg.radius = 0.707381523744;
    msg.flags = 57U;
    msg.custom.assign("KJHMFCUFBCSXY");

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
    msg.setTimeStamp(0.725686241293);
    msg.setSource(61727U);
    msg.setSourceEntity(170U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(8U);
    msg.timeout = 5597U;
    msg.lat = 0.0844326509657;
    msg.lon = 0.0244164660193;
    msg.z = 0.287928226157;
    msg.z_units = 85U;
    msg.speed = 0.532328343358;
    msg.speed_units = 228U;
    msg.duration = 62705U;
    msg.radius = 0.0808708446117;
    msg.flags = 178U;
    msg.custom.assign("LCIAEKUUOUTXOGXFSRAPTDRYJRBWAQPVATCQMZRNADMQDLKUUFZJRPNJMNIWYYPAHPTKBMSIWLNNCTBYHMKPVZYJLNOMENHCBTWQPVDUMOOZGOCTNHEJSVQFRGBUHHVX");

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
    msg.setTimeStamp(0.318261561279);
    msg.setSource(9693U);
    msg.setSourceEntity(151U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(131U);
    msg.custom.assign("STHVQOWNYJBXMNADHIPPSEFXXIBSCGFNMTYAHNZHAIKJICBIOEZJDMNUUXOXEYA");

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
    msg.setTimeStamp(0.667689084854);
    msg.setSource(59737U);
    msg.setSourceEntity(46U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(243U);
    msg.custom.assign("BKMQYJXNHSMYVKYCQRZTHDMPUPLBILZVSCKLFDIKERUWAMAHLKVMJIGBBNPPLZSVZLBYHYOWGAIZTFZKCJNRFZVCPHDWLYLOSTNARAGTDCMOXYTQGXKWPBUEVQEGJADQJXSFAAHFDOUSPANFWOIUBUEIGGOKBSXYQNFCYDWJUQWCXTEPITJRPWQQPMHCZMNWRBTDJJOEYDLKMHVFSHOXUNCEZROZSEOQENXUBJFINCLSVTAUIVRTXMGHEFRXVK");

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
    msg.setTimeStamp(0.886543182073);
    msg.setSource(37747U);
    msg.setSourceEntity(178U);
    msg.setDestination(51544U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("OTVPEXPZMQKNEBFBXOPIJXXRHXLCBEJHGOJEHSQMWCJVUAQDUKZIMNUJNAXCGKWOVSYDZYHDCFAJDOAYZCRQZNFRWTYLEG");

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
    msg.setTimeStamp(0.168473141464);
    msg.setSource(36175U);
    msg.setSourceEntity(120U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(238U);
    msg.timeout = 17334U;
    msg.lat = 0.308962011763;
    msg.lon = 0.431915423072;
    msg.z = 0.510615092544;
    msg.z_units = 230U;
    msg.duration = 17605U;
    msg.speed = 0.628595734603;
    msg.speed_units = 206U;
    msg.type = 109U;
    msg.radius = 0.120545960965;
    msg.length = 0.309895378728;
    msg.bearing = 0.720481437171;
    msg.direction = 38U;
    msg.custom.assign("KZPGQTTABFJGYVDZSCJHBGFVQUIZELTYIDAYYRGAGKCIJIMRHNWAJTMESXAEAOTKKTNLWETQFXOKZPXUXCVQNVWFMNOXNLUWNKPBSOOMWHMVQCUAPPEBSSQYYQJZQHLKCQTLXSLBUGPTYHJDVRCTG");

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
    msg.setTimeStamp(0.35812783319);
    msg.setSource(63112U);
    msg.setSourceEntity(246U);
    msg.setDestination(51453U);
    msg.setDestinationEntity(27U);
    msg.timeout = 60636U;
    msg.lat = 0.0496319915779;
    msg.lon = 0.5046281028;
    msg.z = 0.26067751333;
    msg.z_units = 174U;
    msg.duration = 51815U;
    msg.speed = 0.689029933018;
    msg.speed_units = 152U;
    msg.type = 163U;
    msg.radius = 0.168898540078;
    msg.length = 0.0821641705068;
    msg.bearing = 0.866146215293;
    msg.direction = 54U;
    msg.custom.assign("SLUAKHDXACACGQCVJRVLVHRZVBYRMUMWDEOZUAGKLWPPSGNGEHWFXXOQPHFZXVGMWYXPDCNNWWRBPXITCPANZQWFUCQBKFJLZVGFIMOEOKJNMEYTPNCMKHREDYVDQOYCLTDSSHLAQGZPFIENKZFTJOUHURBMWUSWDFVBINSBIJKYZSJHAQQM");

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
    msg.setTimeStamp(0.428469504505);
    msg.setSource(18684U);
    msg.setSourceEntity(217U);
    msg.setDestination(59340U);
    msg.setDestinationEntity(188U);
    msg.timeout = 59009U;
    msg.lat = 0.461934268292;
    msg.lon = 0.306567729724;
    msg.z = 0.373719578821;
    msg.z_units = 144U;
    msg.duration = 19599U;
    msg.speed = 0.807283696555;
    msg.speed_units = 164U;
    msg.type = 44U;
    msg.radius = 0.386283595599;
    msg.length = 0.303849925221;
    msg.bearing = 0.20815712217;
    msg.direction = 19U;
    msg.custom.assign("KDLNVXSSLMNYTWYMIMFXMUPQBQHAOZYBJGJ");

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
    msg.setTimeStamp(0.437045161367);
    msg.setSource(47789U);
    msg.setSourceEntity(253U);
    msg.setDestination(26597U);
    msg.setDestinationEntity(49U);
    msg.duration = 35978U;
    msg.custom.assign("AURPYRGBROKKIISJCCXWOMDNDKNFWNHQAQYYCHMLFZLYZPODDVXAUTNNVRAPQZSLRDBRCZSFBMUBBUIPQVJEUIRXKGJFOLSIXVFTIKKEGOAHTQETHJMBEWFSSNAQQZJXDGGXWCPAKNNUXTMNOGAYLJDUIELZAEPWYPVCVGX");

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
    msg.setTimeStamp(0.749014232106);
    msg.setSource(20358U);
    msg.setSourceEntity(42U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(8U);
    msg.duration = 64573U;
    msg.custom.assign("BUKSGZPURXLRADGVHHPDOTLNYUNWEAUKAJLDMKOMZZFISVMKTEHVCOZSQTKWGZAJCSXRBQLXTOXHIMHPECURPQLVNIYBZOUIAGNEUBBFWIURFUCSRF");

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
    msg.setTimeStamp(0.995729112839);
    msg.setSource(44065U);
    msg.setSourceEntity(244U);
    msg.setDestination(3637U);
    msg.setDestinationEntity(17U);
    msg.duration = 7834U;
    msg.custom.assign("XMGAEVWEGWDXXRVNYTRFOQMLLJOIJTVJOZZQNIEWKBYGSORVYPZQEADERJFAHJXIZJXCCPBCGFABTLIRVCBXTUQCBUFLGD");

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
    msg.setTimeStamp(0.976628754687);
    msg.setSource(27175U);
    msg.setSourceEntity(74U);
    msg.setDestination(89U);
    msg.setDestinationEntity(70U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.482819216317;
    msg.control.set(tmp_msg_0);
    msg.duration = 33065U;
    msg.custom.assign("APVAMZKPSOETQMYQVWIQRCAUYTRLJKFJRQRTUBAKJCEIOVFWTOQAFJTIGRPVLYKMWLSDNVJBTAWUKTKZQDEFHNIDVZPXWCIEXDKEHPULYGNPSFLGHGXYXXYYRWGAEXIUYUDFDSOQXMJWVEBVZDNIORZVSMDCBGHGSPGMXGZRTAPCSJJSTINHWMWYO");

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
    msg.setTimeStamp(0.482418705088);
    msg.setSource(55694U);
    msg.setSourceEntity(213U);
    msg.setDestination(13244U);
    msg.setDestinationEntity(9U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.951985786586;
    tmp_msg_0.speed_units = 199U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42923U;
    msg.custom.assign("LZVPYNULMWKXVEXGXHLIRHMMZIRYMSTCWTUQCFEUIQMHJEOOHDBDXWJEEJWBTMTWDBCXRFRPQKBIEJOONDJYVBUAMNNWPAPEPRGMVCXRTLAIJRGPNIVAZGHCNKVVZYAOUPKFGNFXAKBVCSXSUYZSERIUCAGFXOUVBSH");

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
    msg.setTimeStamp(0.909271581528);
    msg.setSource(60028U);
    msg.setSourceEntity(205U);
    msg.setDestination(53075U);
    msg.setDestinationEntity(115U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.806040798856;
    tmp_msg_0.z_units = 201U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28628U;
    msg.custom.assign("DJYINVMBEKYHZ");

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
    msg.setTimeStamp(0.94882253708);
    msg.setSource(29722U);
    msg.setSourceEntity(237U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(70U);
    msg.timeout = 63403U;
    msg.lat = 0.0212027379169;
    msg.lon = 0.527155406496;
    msg.z = 0.678925814472;
    msg.z_units = 1U;
    msg.speed = 0.0693233439711;
    msg.speed_units = 142U;
    msg.bearing = 0.306173164242;
    msg.cross_angle = 0.413079394492;
    msg.width = 0.778110903347;
    msg.length = 0.724527101142;
    msg.hstep = 0.237718110708;
    msg.coff = 76U;
    msg.alternation = 133U;
    msg.flags = 221U;
    msg.custom.assign("GOOTLLANBWJMVPXQJKSYFWXUELYDUEBXWYIKEVHUEFGRVRVKDACJBIZTWVHRJPYDGCVSSWKVMMCFBKPABMQXAAPZNDENOZDIVIAFCMDELRLWMRTQJLOSEKCIRPZOTNRKRXRJQIDOASZUNBCEJXZGNQBFMGHDQJGSLMPTYOQBCHTUWTMTOLACKHQQSDUYCRJFYKXSXDBVEHULIGZUZGYINTWTVAJHF");

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
    msg.setTimeStamp(0.595566182076);
    msg.setSource(53037U);
    msg.setSourceEntity(248U);
    msg.setDestination(61777U);
    msg.setDestinationEntity(111U);
    msg.timeout = 23230U;
    msg.lat = 0.328768981073;
    msg.lon = 0.734845608359;
    msg.z = 0.158544254565;
    msg.z_units = 57U;
    msg.speed = 0.848708153197;
    msg.speed_units = 75U;
    msg.bearing = 0.991489202619;
    msg.cross_angle = 0.0826777933623;
    msg.width = 0.330035585472;
    msg.length = 0.0778516179513;
    msg.hstep = 0.534718861306;
    msg.coff = 29U;
    msg.alternation = 28U;
    msg.flags = 3U;
    msg.custom.assign("IFXJKQUMESRPOHDNXJZYPGAWQSFQNAYHEAALTOJNNSHYNXKJHKILJJHUGYQEQQMLGRXPTZBUTRLYWPTHEFFOPXMWQYNEJWJVIYCFICGVOPQHMKWKACFZMBNDZEEBYJMYSRTTVTRDIQDZXCRGRZXIXXKOEHWCKMBEDTQAUIWVILUCNLVDWUGZTJDAOPZRDKCBVMNODBFSLUZLIVSABWLGUU");

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
    msg.setTimeStamp(0.308693760623);
    msg.setSource(31324U);
    msg.setSourceEntity(111U);
    msg.setDestination(5560U);
    msg.setDestinationEntity(225U);
    msg.timeout = 33284U;
    msg.lat = 0.0213746131058;
    msg.lon = 0.0499497447088;
    msg.z = 0.754955107932;
    msg.z_units = 239U;
    msg.speed = 0.116354562277;
    msg.speed_units = 137U;
    msg.bearing = 0.390472046388;
    msg.cross_angle = 0.363152721926;
    msg.width = 0.282270404409;
    msg.length = 0.490960038565;
    msg.hstep = 0.856475171208;
    msg.coff = 187U;
    msg.alternation = 142U;
    msg.flags = 176U;
    msg.custom.assign("XOICOPPFHGQRUGNQKMMMFVZUVHZHMPGDXEMDRRYJIADKZEOTQBLJ");

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
    msg.setTimeStamp(0.289938691144);
    msg.setSource(13340U);
    msg.setSourceEntity(195U);
    msg.setDestination(56892U);
    msg.setDestinationEntity(247U);
    msg.timeout = 44231U;
    msg.lat = 0.550409953504;
    msg.lon = 0.673953013118;
    msg.z = 0.251709312505;
    msg.z_units = 58U;
    msg.speed = 0.732121749733;
    msg.speed_units = 43U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.672907563567;
    tmp_msg_0.y = 0.135977268603;
    tmp_msg_0.z = 0.128767261884;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WFWCKAIAWZLNQQNSIPPRVZQKVDIXMFXVNPMNUDHFZUECGPHWLG");

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
    msg.setTimeStamp(0.0248248406153);
    msg.setSource(7231U);
    msg.setSourceEntity(134U);
    msg.setDestination(33165U);
    msg.setDestinationEntity(192U);
    msg.timeout = 20272U;
    msg.lat = 0.0313635211944;
    msg.lon = 0.915959658722;
    msg.z = 0.534454836649;
    msg.z_units = 20U;
    msg.speed = 0.668836806215;
    msg.speed_units = 163U;
    msg.custom.assign("RFSZDMWIEOHJMTACXAESDHHOVBNVMFK");

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
    msg.setTimeStamp(0.877532917831);
    msg.setSource(58937U);
    msg.setSourceEntity(213U);
    msg.setDestination(36498U);
    msg.setDestinationEntity(150U);
    msg.timeout = 61501U;
    msg.lat = 0.49519173785;
    msg.lon = 0.694705243034;
    msg.z = 0.541553396786;
    msg.z_units = 0U;
    msg.speed = 0.232597739986;
    msg.speed_units = 33U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.697014163283;
    tmp_msg_0.y = 0.658677807633;
    tmp_msg_0.z = 0.401425510538;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LSKXOFMDGDELGKJXMCQPKUOZXUZHRQRTIVBWYJTTJEHWELDOQNPMRACSTYROLAVMFNRUZTJBXNUZZJXZUCAIYIXQVVCIDAOZGEQKZVLIPWHUBPSKRFCKTRLPVGIISYCGEPOTFUSIQWNBDDWOAGUWFWFBVDNAXKJF");

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
    msg.setTimeStamp(0.352215924531);
    msg.setSource(55688U);
    msg.setSourceEntity(155U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(22U);
    msg.x = 0.520915755972;
    msg.y = 0.809414635652;
    msg.z = 0.0882607216621;

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
    msg.setTimeStamp(0.298344156899);
    msg.setSource(65508U);
    msg.setSourceEntity(8U);
    msg.setDestination(41739U);
    msg.setDestinationEntity(89U);
    msg.x = 0.430814958007;
    msg.y = 0.982412977436;
    msg.z = 0.439817433952;

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
    msg.setTimeStamp(0.20130659146);
    msg.setSource(32031U);
    msg.setSourceEntity(212U);
    msg.setDestination(6490U);
    msg.setDestinationEntity(241U);
    msg.x = 0.430384800021;
    msg.y = 0.644766813353;
    msg.z = 0.0511554472967;

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
    msg.setTimeStamp(0.768360993934);
    msg.setSource(51920U);
    msg.setSourceEntity(128U);
    msg.setDestination(26912U);
    msg.setDestinationEntity(81U);
    msg.timeout = 27442U;
    msg.lat = 0.425663623515;
    msg.lon = 0.409584135501;
    msg.z = 0.750288481692;
    msg.z_units = 81U;
    msg.amplitude = 0.206884274835;
    msg.pitch = 0.0848240535853;
    msg.speed = 0.389943458001;
    msg.speed_units = 162U;
    msg.custom.assign("DNNAMCULWLCQNYANVGBMOEQXXKTKBZVOPLOVQWERSIBJWKTUTTYAOTFJUSFANDJZQADSCKFGMEYMWBPDHWDFBSOMLKZHPMYXFLHNSCIFRSZZDGXCIRPCLKIPESKRGHHFJEPGZMAPVRHYZYUOGIRIYNMIABLF");

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
    msg.setTimeStamp(0.243086119068);
    msg.setSource(7864U);
    msg.setSourceEntity(85U);
    msg.setDestination(59058U);
    msg.setDestinationEntity(146U);
    msg.timeout = 26675U;
    msg.lat = 0.314458767835;
    msg.lon = 0.389685160817;
    msg.z = 0.103466997493;
    msg.z_units = 0U;
    msg.amplitude = 0.354716017812;
    msg.pitch = 0.443524883632;
    msg.speed = 0.492263000683;
    msg.speed_units = 173U;
    msg.custom.assign("QVBAWCEFEWZUGMRPNMIVYJYPUDIOLIQSFZIQTGNWOMKXJHLSMDCPRBYTTBOFRFNOMSGQNMZLWYCYYZLPTVYQBIZNVWYAHEXUBEMXKTKULSIVWJJARUBVJGUKUFXDCENLZHFKUQASJDVTANNRN");

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
    msg.setTimeStamp(0.136973057248);
    msg.setSource(37723U);
    msg.setSourceEntity(199U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(7U);
    msg.timeout = 48071U;
    msg.lat = 0.815570505421;
    msg.lon = 0.136754157112;
    msg.z = 0.282032844906;
    msg.z_units = 43U;
    msg.amplitude = 0.499221059873;
    msg.pitch = 0.0643906642758;
    msg.speed = 0.558541390282;
    msg.speed_units = 93U;
    msg.custom.assign("HJTOMUKNAEJTKWEHRNFNAXYUCMQPZJPYLFDFHWWTUOTRMOACSXZU");

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
    msg.setTimeStamp(0.788771128617);
    msg.setSource(44808U);
    msg.setSourceEntity(202U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.527663464089);
    msg.setSource(16441U);
    msg.setSourceEntity(236U);
    msg.setDestination(31688U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.762963080022);
    msg.setSource(38155U);
    msg.setSourceEntity(186U);
    msg.setDestination(49364U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.682945576112);
    msg.setSource(31683U);
    msg.setSourceEntity(153U);
    msg.setDestination(4947U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0770921841636;
    msg.lon = 0.170762838893;
    msg.z = 0.302660316721;
    msg.z_units = 221U;
    msg.radius = 0.364449607368;
    msg.duration = 56876U;
    msg.speed = 0.57300937811;
    msg.speed_units = 24U;
    msg.custom.assign("RDELHQJPJXJFCZMYVSCCKFDRISBRUPVMIQYXHPZEYHSFEBCSHLWQGVTWGKKNJKBBNYSQOTKXMWPGEPQBIIPBANEVSTSOOLILPTQXGFNWULIPREMHVVDGGVAAUWTASENZHPOEDULQCRZJBCVXFLALAHMHISRWFAAWZRIKYTYLATRFVMJCDCWZQBVLDQ");

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
    msg.setTimeStamp(0.116098927772);
    msg.setSource(54283U);
    msg.setSourceEntity(140U);
    msg.setDestination(16315U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.153031147464;
    msg.lon = 0.665614790124;
    msg.z = 0.500672817012;
    msg.z_units = 204U;
    msg.radius = 0.486145938985;
    msg.duration = 20654U;
    msg.speed = 0.284513311075;
    msg.speed_units = 244U;
    msg.custom.assign("AQIDRXJVBZSHRITSFRTSEMXQFPKBBAUPNXTVNDLAASZHNUHODXTWIHSMJYTZNVLJXKCVBZWLVGDJE");

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
    msg.setTimeStamp(0.207388737982);
    msg.setSource(2681U);
    msg.setSourceEntity(78U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.853479419388;
    msg.lon = 0.00980115676565;
    msg.z = 0.680859863199;
    msg.z_units = 57U;
    msg.radius = 0.196351202841;
    msg.duration = 45786U;
    msg.speed = 0.532057579753;
    msg.speed_units = 123U;
    msg.custom.assign("PMCTUHDNUSPEPZGEWJUFYMMFGEIYNVTGUHIPQIBWPGPSZZYVZOXKKJOEZJXNZKSBEUYFALBNULRVQTBWXWILHWOWRVARTWQKZCMAQLGNWVQDBDIVFXQHKTTKRQGALDDTVMANLINZLILCTKJINEYOSDKDXA");

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
    msg.setTimeStamp(0.39994854714);
    msg.setSource(24423U);
    msg.setSourceEntity(138U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(62U);
    msg.timeout = 32326U;
    msg.flags = 110U;
    msg.lat = 0.705583698069;
    msg.lon = 0.438048387519;
    msg.start_z = 0.531327743091;
    msg.start_z_units = 3U;
    msg.end_z = 0.386302112681;
    msg.end_z_units = 199U;
    msg.radius = 0.351603687791;
    msg.speed = 0.706124306302;
    msg.speed_units = 161U;
    msg.custom.assign("BPYLIJOUVFROANPVHVVMSISLIKKJUNKULTLJCYYBEGJYUCKKXRSDRZLENXMTFDRGFIHAOASOWAGQEDPXCDUPZRTRWXZTZUTBXUQMCOPVXKPWONMAUAMQUHXSDEJWITSFZYPUQKEZRGJDMOCETOFRALXEXDNVDYSFJZPBHIGOCVRYSRHMHCGACFMVGGYQBLLPGQFIFJJNHHWSDJCBQFDTILKWYBYWICNNWESEQAHMKXN");

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
    msg.setTimeStamp(0.0171722813085);
    msg.setSource(36561U);
    msg.setSourceEntity(249U);
    msg.setDestination(31957U);
    msg.setDestinationEntity(75U);
    msg.timeout = 62400U;
    msg.flags = 161U;
    msg.lat = 0.676105504731;
    msg.lon = 0.903761731447;
    msg.start_z = 0.587078754439;
    msg.start_z_units = 154U;
    msg.end_z = 0.923044191092;
    msg.end_z_units = 206U;
    msg.radius = 0.746809820489;
    msg.speed = 0.890712246753;
    msg.speed_units = 136U;
    msg.custom.assign("ZTITSZWXAWXDSCQVAKDVYPNSWKLCHDSPSQALGQFEPRTQWNBZLUGDXRWOQUV");

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
    msg.setTimeStamp(0.796465745632);
    msg.setSource(49929U);
    msg.setSourceEntity(93U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(235U);
    msg.timeout = 41119U;
    msg.flags = 98U;
    msg.lat = 0.479097806097;
    msg.lon = 0.219442866352;
    msg.start_z = 0.86657387308;
    msg.start_z_units = 233U;
    msg.end_z = 0.137260191412;
    msg.end_z_units = 101U;
    msg.radius = 0.839487554424;
    msg.speed = 0.76176029116;
    msg.speed_units = 210U;
    msg.custom.assign("LLPQJIJWXUNCSGCCFTASOWYULINZPARARDESWEUIFQMGYXPMJFAWDKQJDSSKUWREBGXVOFAGHPWBPTGJUMJVEKWCXKJHPLIXYFGPWCLIONQTCKGTWKBQODRFCMZXKNDGZSXZHOMUSFLBCPGLBCRXBAYLVFOBNRIHHKWYHHNUVTZTRUHEYONTRDIVVPC");

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
    msg.setTimeStamp(0.0291875322181);
    msg.setSource(27464U);
    msg.setSourceEntity(120U);
    msg.setDestination(58386U);
    msg.setDestinationEntity(166U);
    msg.timeout = 40163U;
    msg.lat = 0.7857488241;
    msg.lon = 0.989707195698;
    msg.z = 0.931626610453;
    msg.z_units = 91U;
    msg.speed = 0.328376744347;
    msg.speed_units = 161U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.842296970962;
    tmp_msg_0.y = 0.909491504832;
    tmp_msg_0.z = 0.345651733884;
    tmp_msg_0.t = 0.882884720691;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FWKPNUZGFRWYBLGUADPGRLDPAZMOBTCVODICVIWWAXMCTHJXPEKQTLMWULERJGSTJBPAUDCMPJASIVJECFSGLYDXQDJMZZPKCHXNTVACKNNRSKNTYZRKTIPQFYKEJYOQXFAZXRVVNEYRLSBOCKPRXIDLMYYQQMZGUQBFOAILASHZIXBTOBUOOBFVHVWMHJFCUWUJSZNEFKYNWEPBIQL");

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
    msg.setTimeStamp(0.9418933849);
    msg.setSource(58099U);
    msg.setSourceEntity(27U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(95U);
    msg.timeout = 53511U;
    msg.lat = 0.160849574021;
    msg.lon = 0.563142532238;
    msg.z = 0.960956944963;
    msg.z_units = 169U;
    msg.speed = 0.653608660982;
    msg.speed_units = 100U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.761940405382;
    tmp_msg_0.y = 0.408644883362;
    tmp_msg_0.z = 0.177653434886;
    tmp_msg_0.t = 0.301791645383;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QYPAMHTYNLUMQDIYAKCMIVXXTUJWLHZKYLJAIXMSKKVTD");

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
    msg.setTimeStamp(0.277165788244);
    msg.setSource(9439U);
    msg.setSourceEntity(162U);
    msg.setDestination(45814U);
    msg.setDestinationEntity(205U);
    msg.timeout = 43310U;
    msg.lat = 0.607153132568;
    msg.lon = 0.363084858872;
    msg.z = 0.293795889396;
    msg.z_units = 67U;
    msg.speed = 0.700590369428;
    msg.speed_units = 253U;
    msg.custom.assign("YSLKAPNLZGQPTRPWIEQWUZMTNPYOJFLPPQWJHZDJKRUDRPYQBVBKPEYXTSOZRGSRJIUUMTHNUENFTHNJIFLJAADCNIZWGNVZOJYDPSOEZMDITMAVIGTHEXLWWBQ");

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
    msg.setTimeStamp(0.907183809984);
    msg.setSource(27939U);
    msg.setSourceEntity(7U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(135U);
    msg.x = 0.437886621414;
    msg.y = 0.438306351863;
    msg.z = 0.112443913468;
    msg.t = 0.249117216013;

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
    msg.setTimeStamp(0.45948525449);
    msg.setSource(19537U);
    msg.setSourceEntity(44U);
    msg.setDestination(19788U);
    msg.setDestinationEntity(206U);
    msg.x = 0.0053957405921;
    msg.y = 0.886982128975;
    msg.z = 0.396640451092;
    msg.t = 0.62279310376;

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
    msg.setTimeStamp(0.50015177588);
    msg.setSource(11490U);
    msg.setSourceEntity(94U);
    msg.setDestination(4716U);
    msg.setDestinationEntity(180U);
    msg.x = 0.808207715843;
    msg.y = 0.619586107174;
    msg.z = 0.55849700893;
    msg.t = 0.0817019376589;

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
    msg.setTimeStamp(0.473071919466);
    msg.setSource(3893U);
    msg.setSourceEntity(212U);
    msg.setDestination(53672U);
    msg.setDestinationEntity(253U);
    msg.timeout = 34213U;
    msg.name.assign("QIOWKTRPKCGDPEQXJOYVXLLXHZJEJNWEPOSSXQKZISEJDJCQXEDMDCNALVVGKHXRNPWHLMRTBMQIKFHOLSVDPBMRTQJTSBVEZOWCJWRTNAAM");
    msg.custom.assign("IKNFFZOBVJGJMNHWTYLUWYEOZTAGCBIGAOGARMRPLKPXJMZELJIMLKSVMIADDSTXMDKPPLIONHDVQPOYTINWLRRDLGMFVOJETKLMEKZXUMSYVXLYQPZUHCPYANAEBHKVJZHSVRRTCSQZOCYSFURKSWWQRNVQOUXHBNTTACFWYUQTGJAHRCFENXIHE");

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
    msg.setTimeStamp(0.353387173863);
    msg.setSource(56751U);
    msg.setSourceEntity(21U);
    msg.setDestination(34197U);
    msg.setDestinationEntity(157U);
    msg.timeout = 57801U;
    msg.name.assign("MNHCKUZFZJHXDTZJUYRNTVJACUWDVHMIBWGXEBIKEDOXDXSELLKAOLUXOQLEVPFCKUASOIOGWEDIRCGVFGXWQQEXPJYPJDALWFTTJDYOUYNLJMKCSQSJIMTMSWERUHTZBQKKONVRLBLIVYYBXHCUTXZITMSFMMZTWAFMWKAZVFGC");
    msg.custom.assign("ZJVAGLQSRZOXENKILWJXNZJSUAIBYAIZOOOZUWFGOXXMWILBHQRQWRYUXHEGZYMKDFCATSCBUWGXYKDFEOVQXGJKJRLKDBAHTVGMSFBILIXHQXORMCRHQPUKWRHNFSLHTZHCERTW");

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
    msg.setTimeStamp(0.346106184925);
    msg.setSource(60563U);
    msg.setSourceEntity(164U);
    msg.setDestination(60530U);
    msg.setDestinationEntity(175U);
    msg.timeout = 18492U;
    msg.name.assign("SAZPWDAOJPJGEQORIHJCQFHYKVCVQFTMALHM");
    msg.custom.assign("DKUQKHRKNGEPKZSWVAWMUHCQAZYHLNW");

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
    msg.setTimeStamp(0.126558986945);
    msg.setSource(10806U);
    msg.setSourceEntity(186U);
    msg.setDestination(11978U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.144776305194;
    msg.lon = 0.861832772207;
    msg.z = 0.212174384042;
    msg.z_units = 194U;
    msg.speed = 0.911875153305;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3863200872;
    tmp_msg_0.y = 0.722904693756;
    tmp_msg_0.z = 0.224085381376;
    tmp_msg_0.t = 0.203021567486;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 23642U;
    tmp_msg_1.off_x = 0.937674608853;
    tmp_msg_1.off_y = 0.763966757619;
    tmp_msg_1.off_z = 0.975757391475;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.243813999175;
    msg.custom.assign("IYELNAMUWTFNEWKFHJDOZTPZFFOYTGFWNMBJRGHBIXUKHAOKHSIUHZGEAZXYSDMEHCOSDKEVRMOVPLVREFJIJLTXXARMVCQQWCYNDRLXPAHTBGZAVDEIZDWVKJNPYMUELJPRPKPKCQXZJHYWXZRUBVXCOLXURNQIEKTZCAJGWWCTGBOQIFGSNGDLNUJZFBDGARWSKRIQVHFTBNTM");

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
    msg.setTimeStamp(0.617267268076);
    msg.setSource(36233U);
    msg.setSourceEntity(86U);
    msg.setDestination(27863U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.794517666861;
    msg.lon = 0.45176147624;
    msg.z = 0.0575386622582;
    msg.z_units = 239U;
    msg.speed = 0.87210856143;
    msg.speed_units = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6508U;
    tmp_msg_0.off_x = 0.20829559219;
    tmp_msg_0.off_y = 0.819955438903;
    tmp_msg_0.off_z = 0.93172504756;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.804814880984;
    msg.custom.assign("ZFQPZACPXFXDEACMGMGWRBVBNJRGYQGMJVBXGVOVDTCMIKVOOUIDDDZWNOMGTKRKSLYTORRBNLNQFIDPIAUCOEPRPOWHNLVVOUDVE");

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
    msg.setTimeStamp(0.100209032033);
    msg.setSource(10727U);
    msg.setSourceEntity(105U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.694870447333;
    msg.lon = 0.489382286917;
    msg.z = 0.739849713486;
    msg.z_units = 51U;
    msg.speed = 0.790214235603;
    msg.speed_units = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43714U;
    tmp_msg_0.off_x = 0.14122695178;
    tmp_msg_0.off_y = 0.962464480108;
    tmp_msg_0.off_z = 0.780837446149;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.386571905329;
    msg.custom.assign("ANBWCFPKGAUKUAORLHDCZXMAFRPUXSGFVQJQFNDKVIKPPRVORYHFFUNRBNJHNPIGWVSJXDKEOQWGMGVXHSXDADCQWFLJNDOOUEYDHEMLIXJIFIUYWQPRXMENJBSOTTITOMTUSLASQUYCJCBPCDZHAHPXWYSBVXHNBIEWQLGQYUWQBHTDLDEUYCVMZEAWEMLTZJPRG");

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
    msg.setTimeStamp(0.643181050931);
    msg.setSource(24774U);
    msg.setSourceEntity(137U);
    msg.setDestination(14215U);
    msg.setDestinationEntity(252U);
    msg.vid = 15725U;
    msg.off_x = 0.897343363663;
    msg.off_y = 0.151302988124;
    msg.off_z = 0.211834615052;

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
    msg.setTimeStamp(0.236475487824);
    msg.setSource(32111U);
    msg.setSourceEntity(56U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(185U);
    msg.vid = 36804U;
    msg.off_x = 0.921307833742;
    msg.off_y = 0.202474155812;
    msg.off_z = 0.691863754944;

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
    msg.setTimeStamp(0.693691125251);
    msg.setSource(54825U);
    msg.setSourceEntity(62U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(101U);
    msg.vid = 5511U;
    msg.off_x = 0.523687023595;
    msg.off_y = 0.519193787055;
    msg.off_z = 0.289796454284;

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
    msg.setTimeStamp(0.413546047252);
    msg.setSource(1829U);
    msg.setSourceEntity(155U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.661954353306);
    msg.setSource(38919U);
    msg.setSourceEntity(121U);
    msg.setDestination(42784U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.430984370212);
    msg.setSource(27872U);
    msg.setSourceEntity(49U);
    msg.setDestination(22861U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.393923848022);
    msg.setSource(17303U);
    msg.setSourceEntity(60U);
    msg.setDestination(55544U);
    msg.setDestinationEntity(3U);
    msg.mid = 47103U;

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
    msg.setTimeStamp(0.465367895559);
    msg.setSource(38357U);
    msg.setSourceEntity(71U);
    msg.setDestination(39770U);
    msg.setDestinationEntity(153U);
    msg.mid = 49688U;

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
    msg.setTimeStamp(0.570192559012);
    msg.setSource(56407U);
    msg.setSourceEntity(6U);
    msg.setDestination(53193U);
    msg.setDestinationEntity(201U);
    msg.mid = 59376U;

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
    msg.setTimeStamp(0.713244072491);
    msg.setSource(11712U);
    msg.setSourceEntity(207U);
    msg.setDestination(63244U);
    msg.setDestinationEntity(154U);
    msg.state = 74U;
    msg.eta = 29924U;
    msg.info.assign("ZZEGFBUHQNAWBACWQZHALXHDVMOKLZMQYUZKOXVTGQUDCBFCYSLDSXQQEVPMISANMCNSUVGGLPMRUOVDQSPICPXRJTKLSAZBYYTEPRBPSNZIIWTSPRIFPIDKLXBPEDAOOBBW");

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
    msg.setTimeStamp(0.510221980694);
    msg.setSource(54258U);
    msg.setSourceEntity(192U);
    msg.setDestination(60003U);
    msg.setDestinationEntity(61U);
    msg.state = 82U;
    msg.eta = 32406U;
    msg.info.assign("UFFPDOIALOQDZIEHJKKAKTIIAPKG");

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
    msg.setTimeStamp(0.79660674897);
    msg.setSource(17928U);
    msg.setSourceEntity(135U);
    msg.setDestination(11405U);
    msg.setDestinationEntity(219U);
    msg.state = 228U;
    msg.eta = 16549U;
    msg.info.assign("GEWMTAAWFUITRJEBWUZVZHJVXMQFUNZCMQHFAYBDMTLQUDLFBJQDIHGGHWXIYLZZKZVFWDCIKLXCJXRAACWTMHNJLOCEIMGNGLTIXPJSRKZUXKKKVQICVSCJKZMSSLHWAOYDMJUAFQVAHEBPPSTZVTVNNUFPOCOMPFNYBFWXD");

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
    msg.setTimeStamp(0.631957121005);
    msg.setSource(25322U);
    msg.setSourceEntity(221U);
    msg.setDestination(4305U);
    msg.setDestinationEntity(128U);
    msg.system = 46396U;
    msg.duration = 23089U;
    msg.speed = 0.492942390638;
    msg.speed_units = 83U;
    msg.x = 0.399405788663;
    msg.y = 0.755687324523;
    msg.z = 0.928800767915;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.712735490257);
    msg.setSource(17521U);
    msg.setSourceEntity(63U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(205U);
    msg.system = 5417U;
    msg.duration = 16084U;
    msg.speed = 0.9336788039;
    msg.speed_units = 195U;
    msg.x = 0.0630281792324;
    msg.y = 0.621879839846;
    msg.z = 0.774628204834;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.0253105778427);
    msg.setSource(24778U);
    msg.setSourceEntity(194U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(29U);
    msg.system = 58868U;
    msg.duration = 16187U;
    msg.speed = 0.835923996188;
    msg.speed_units = 130U;
    msg.x = 0.0320863217861;
    msg.y = 0.799565104554;
    msg.z = 0.857683878793;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.552510198109);
    msg.setSource(44340U);
    msg.setSourceEntity(48U);
    msg.setDestination(10075U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.149897899999;
    msg.lon = 0.600474532069;
    msg.speed = 0.758254381563;
    msg.speed_units = 175U;
    msg.duration = 38917U;
    msg.sys_a = 35855U;
    msg.sys_b = 23046U;
    msg.move_threshold = 0.525830911703;

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
    msg.setTimeStamp(0.578175681694);
    msg.setSource(12033U);
    msg.setSourceEntity(67U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.273030069654;
    msg.lon = 0.979851465967;
    msg.speed = 0.82422925281;
    msg.speed_units = 200U;
    msg.duration = 5091U;
    msg.sys_a = 30084U;
    msg.sys_b = 37876U;
    msg.move_threshold = 0.13859546895;

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
    msg.setTimeStamp(0.313407430156);
    msg.setSource(32855U);
    msg.setSourceEntity(51U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.785887748969;
    msg.lon = 0.266431292201;
    msg.speed = 0.314542707317;
    msg.speed_units = 74U;
    msg.duration = 19300U;
    msg.sys_a = 31531U;
    msg.sys_b = 45511U;
    msg.move_threshold = 0.354318495522;

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
    msg.setTimeStamp(0.933364678578);
    msg.setSource(25833U);
    msg.setSourceEntity(58U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.876286104279;
    msg.lon = 0.880199936392;
    msg.z = 0.701056256682;
    msg.z_units = 117U;
    msg.speed = 0.117498775664;
    msg.speed_units = 61U;
    msg.custom.assign("SVURJHCAVOAGEIZMFALYEKWGUJTDHZVQMWDGTCYZFMDMHAOKTWPOPZHSZAKNNTYYUUGHVFHEUMOJXYEVDJINMMCNVRGSBWBGGQUCLPQTSFJXUHFJHCPRGESYHXEFRXELN");

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
    msg.setTimeStamp(0.838260709285);
    msg.setSource(63194U);
    msg.setSourceEntity(11U);
    msg.setDestination(29383U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.230171913374;
    msg.lon = 0.51977553196;
    msg.z = 0.364924871252;
    msg.z_units = 148U;
    msg.speed = 0.85623017654;
    msg.speed_units = 182U;
    msg.custom.assign("NEPUPGAANANDBQKDBTESLJQVYUWDQSFDKGGZLTRNSAAJJWJNNUBXRCQJSRVBOXDTUPECQHZPUTTLZRWQCUAUZMFTZLRHVIEFMWYFPVMOOFMHASCTVADCYEQHXOYLBBCGGVOMEOBHPEDKYLWJEPWBPQFEJIWZCINBPINIQLMSWDHXKLRCMIURIAGHFYSTYGVXALGSOXDIGJXKKROWYYVXCOBUKDNEL");

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
    msg.setTimeStamp(0.112096245601);
    msg.setSource(8452U);
    msg.setSourceEntity(148U);
    msg.setDestination(20820U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.564026771996;
    msg.lon = 0.143594793625;
    msg.z = 0.716120519842;
    msg.z_units = 176U;
    msg.speed = 0.792671822901;
    msg.speed_units = 175U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.848189756224;
    tmp_msg_0.lon = 0.129953335101;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UPTHXLTIVZGXYCUUSBWZWYORJJTDOQTHTKHMMVHGTNAYGZEOKHPYJQFBVDDZFECFWDBMMNBKTGAHQJIF");

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
    msg.setTimeStamp(0.0493824444207);
    msg.setSource(6454U);
    msg.setSourceEntity(7U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.447519058189;
    msg.lon = 0.358149619018;

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
    msg.setTimeStamp(0.804441897047);
    msg.setSource(22307U);
    msg.setSourceEntity(12U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.368578002658;
    msg.lon = 0.700638842803;

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
    msg.setTimeStamp(0.317856777014);
    msg.setSource(36586U);
    msg.setSourceEntity(135U);
    msg.setDestination(101U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.915159545879;
    msg.lon = 0.148018060665;

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
    msg.setTimeStamp(0.50750537419);
    msg.setSource(29698U);
    msg.setSourceEntity(67U);
    msg.setDestination(7488U);
    msg.setDestinationEntity(15U);
    msg.timeout = 53654U;
    msg.lat = 0.221283792403;
    msg.lon = 0.470530977224;
    msg.z = 0.282568966098;
    msg.z_units = 54U;
    msg.pitch = 0.654622567669;
    msg.amplitude = 0.0429322920795;
    msg.duration = 2091U;
    msg.speed = 0.832098710184;
    msg.speed_units = 246U;
    msg.radius = 0.346594928448;
    msg.direction = 124U;
    msg.custom.assign("KYDDYXVPEFKHIHZCENXOYIITIYGLUCXCPMIZUOOXQBWYHXAAWMEBEUSTFLKLVWJHKKXFVNAOFDOJEEKTWVQSQJTGPYDNEGQYQASKDDXURFUSFLIQZBZYJAINOBUNZRLEQRTMPATGLWUHZUTVGGBHPBFTPTVRNFYALJSXAQVONWR");

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
    msg.setTimeStamp(0.547250672299);
    msg.setSource(51397U);
    msg.setSourceEntity(208U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(164U);
    msg.timeout = 27907U;
    msg.lat = 0.769777502177;
    msg.lon = 0.997057843728;
    msg.z = 0.259724854439;
    msg.z_units = 193U;
    msg.pitch = 0.638747125609;
    msg.amplitude = 0.705123084353;
    msg.duration = 21756U;
    msg.speed = 0.757348478056;
    msg.speed_units = 249U;
    msg.radius = 0.0274323966107;
    msg.direction = 114U;
    msg.custom.assign("BPBVCEKXPKVDOUUDKRZXAZMKOQZMTIIKTDQMXBXGSPUJTANKBBZAGOCZJEAOZCGFLFBVHCFHQGCBRZIWBNPIUFURXKYJYTLRD");

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
    msg.setTimeStamp(0.956166279534);
    msg.setSource(18282U);
    msg.setSourceEntity(6U);
    msg.setDestination(18369U);
    msg.setDestinationEntity(74U);
    msg.timeout = 48234U;
    msg.lat = 0.606797057751;
    msg.lon = 0.300039179097;
    msg.z = 0.359185443458;
    msg.z_units = 166U;
    msg.pitch = 0.69158290343;
    msg.amplitude = 0.527290267331;
    msg.duration = 7741U;
    msg.speed = 0.703465645229;
    msg.speed_units = 151U;
    msg.radius = 0.570785340865;
    msg.direction = 85U;
    msg.custom.assign("KUBOUHRXXJRVZXHKMTDZEVOCBPYPWAQNRIVVBGBMLFOPHYYDNFLVOQMHBHGNANN");

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
    msg.setTimeStamp(0.180538691267);
    msg.setSource(19080U);
    msg.setSourceEntity(108U);
    msg.setDestination(29536U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("GSZLDCDGXPTBKHPWARVXORWSIWLNNYCXKEUDUMMLHUNXURZIFGDPLVGFLQGYHKRPOICBCJAOFHNBMHO");
    msg.reference_frame = 13U;
    msg.custom.assign("EDDYQKWJMCXWHCZBYXXCGPJGVKGMEAPIWCQIIJTMKFOEBSZDJBDOQFJQFSOKALZQP");

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
    msg.setTimeStamp(0.218447749314);
    msg.setSource(25946U);
    msg.setSourceEntity(66U);
    msg.setDestination(52248U);
    msg.setDestinationEntity(32U);
    msg.formation_name.assign("UEFRMHZOWOBJEOXKJPSFNRPUCKOKUZGOQDICWYWQEIHJSENZVCKJRFCHMXKUTPBPJFJTZURCNERSGBKDSVHRMPAXFGOGHXEZAFNICIGPTWVRGWLPLNFZSOTYMHIBQTNAPRXGYIAMQHGBXSLKXDSTFLRLGUNVUDLUQDXMED");
    msg.reference_frame = 206U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13025U;
    tmp_msg_0.off_x = 0.364204339219;
    tmp_msg_0.off_y = 0.0388506284585;
    tmp_msg_0.off_z = 0.196144772024;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PGIRDECAQLGKUKZKJNHCEHTTGOREUXRYOYYHIRWPWATLXUDYMVFOQUGICHRQBMLPSSGZRYDVPHMMVKESPJKTRKUFQDWTMPBTFVSIHQJKMPIWGTJKNLYRIZJPNLVIFUXXNOWASCNCTZCTCJRSXXO");

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
    msg.setTimeStamp(0.0584040176385);
    msg.setSource(25298U);
    msg.setSourceEntity(93U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(97U);
    msg.formation_name.assign("CHZHFSJIGORECFUWPUINFOHMBRKQZDKYZTZURXDFQBGICJEQEBYJBBPMEFXWJSHRGSCLGNVRGCNDVOYCFGNXYQVABHPAXHAOFWZVPOGTKKMGTMHGBPULIXXDAJYOWLIKAJ");
    msg.reference_frame = 134U;
    msg.custom.assign("HZUWPGQBXFJBLTMACGDLNNYXCTCTKRALMSMGQSEYWBHRDBRIWNJFAQHOFQNNUI");

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
    msg.setTimeStamp(0.985572058314);
    msg.setSource(17292U);
    msg.setSourceEntity(121U);
    msg.setDestination(38695U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("BVVCNZHQUGDHQCTJTJPKUEGUXWKMNWYCGGKUGIIZCPEJYCMNIVFYPDDYRUSXWYURLMBYHMXRHPJNTDSTVWDSAODABGLAZQFQDKWBTJJXFMIKJOFIOSETSNCMQEJLJXZTUYNVYLOOKTGN");
    msg.formation_name.assign("VQDZDFURZTKVDCIUGBRLPOWJYOEOZESZDNSIXMHJTNDUMJILRVHPBOFAELSLJVSHEKKQGHGBZBWFNAYQROCECQSIXLFELQFVAJQPQGWRMUWFBNYVEOCTGXKRGMIYZGMZIXUGRVUAWNWBMOAPPMPVXTLTJYDSUEHCSPMVKFDHLBFEBICSRBOMHIMVKFYWPUWTNGYXQKHJCWYAKJLTJPTRIJIWYZYNHRZ");
    msg.plan_id.assign("LRIAJJWUJSDGXRYDZYNFVQTROOLDPJNUXITQSDDXSMABWKPAPAEQHEAGJJXTRMUHHGEEHNVRPOQZGOMEHBMNSDCKFYVEAQETCL");
    msg.description.assign("XRRFNAIRTNMPQREQYJBAZNFGUIPYETLQNEZVKJQFUFSWJNACANECTKRVGIZONZMMMPGMUYYTDLVVFJDZJBPHLUXQGOCPSZBYTKCVDEPJBFVOHGAMGHEDUFULOWDHKJKQBYPWLGEDZCUFSQWBTFBMKCPZOIXSAWORVZWKTHODNCPNCUCHSAQOLXWHVIJAXUDVBNEYRKC");
    msg.leader_speed = 0.7331051902;
    msg.leader_bank_lim = 0.705518845414;
    msg.pos_sim_err_lim = 0.864180704301;
    msg.pos_sim_err_wrn = 0.650825212939;
    msg.pos_sim_err_timeout = 51291U;
    msg.converg_max = 0.121023555534;
    msg.converg_timeout = 5095U;
    msg.comms_timeout = 18878U;
    msg.turb_lim = 0.778953124516;
    msg.custom.assign("EIXNFOKZURXNVQRHTJEMBUJNXPNEFSWBGDNIWFVAZQQKFS");

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
    msg.setTimeStamp(0.648146429263);
    msg.setSource(7058U);
    msg.setSourceEntity(60U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("IPPFMPXHKZPRDQSJGDOACRRNCPFTUVZQADERXDDBNDJPRKNZEFJTYCAIGVHKGFWMJMAYABWEQDEQHVTSFOXWGXRAONQ");
    msg.formation_name.assign("LCZYJHACEXYDEETKPKYURVHREAZXVEBTUIIRXEDDW");
    msg.plan_id.assign("QDZJCKSROXPKDPPNRVYONTZBWMDLHLZSCNAFCOSEEAIZWRMOJPPXCKVZKAGQKTWRYFJCLMKSPYWGLNTHGBCGXPRYMUFG");
    msg.description.assign("YINULOWAEJBYBUZWEIGPHZLQRXFLEOYVTGFWFRLKCVSYNTTKDGNSRQJBLKBTFIMSNFDNEBXPMDXWBITZVTMXATR");
    msg.leader_speed = 0.309085821027;
    msg.leader_bank_lim = 0.884012334345;
    msg.pos_sim_err_lim = 0.464216138098;
    msg.pos_sim_err_wrn = 0.981071286186;
    msg.pos_sim_err_timeout = 11119U;
    msg.converg_max = 0.79862389393;
    msg.converg_timeout = 50517U;
    msg.comms_timeout = 33605U;
    msg.turb_lim = 0.0460501008226;
    msg.custom.assign("TVOCAZJBWMCHUAAFTZZOSBYEJLELMALVHSQFXXMMSKONSCZRKKXHNLFQIZGYWKNWURUNDPECVPCXVMRWLRI");

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
    msg.setTimeStamp(0.697067493306);
    msg.setSource(4385U);
    msg.setSourceEntity(103U);
    msg.setDestination(54778U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("ASKZKHXTILNMUTAASPQ");
    msg.formation_name.assign("JCFQSHKHMZAYPBHBATTIWQYIMCUAATHDEFNPHVSDQOHGJIJB");
    msg.plan_id.assign("HGGYJLWDOAARIFAKQDYMBERZIYWHHOYYNXZEFDHHURAGZMQXMIZWPNBCIAHJVBJAQKACKOFUPXPKWTSCECFVLGQSFODLSMQLCGLFEBOXIWDJAKPXDUSMXRFNT");
    msg.description.assign("EOCBDUZRXV");
    msg.leader_speed = 0.56336381537;
    msg.leader_bank_lim = 0.896144044441;
    msg.pos_sim_err_lim = 0.862739860499;
    msg.pos_sim_err_wrn = 0.258450253404;
    msg.pos_sim_err_timeout = 62090U;
    msg.converg_max = 0.925987211435;
    msg.converg_timeout = 56554U;
    msg.comms_timeout = 58075U;
    msg.turb_lim = 0.759483302966;
    msg.custom.assign("FROJBPIUZFSPDMYPPEGUMHNJIUWOCGOVMTEHZSKFIPKFESWYYYPDIISDSMLTFMKWMLZHAQJFRJTVSXERGXAKNE");

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
    msg.setTimeStamp(0.841371811054);
    msg.setSource(26718U);
    msg.setSourceEntity(145U);
    msg.setDestination(3388U);
    msg.setDestinationEntity(67U);
    msg.control_src = 47984U;
    msg.control_ent = 126U;
    msg.timeout = 0.452484928127;
    msg.loiter_radius = 0.294996179753;
    msg.altitude_interval = 0.932401482102;

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
    msg.setTimeStamp(0.849215296586);
    msg.setSource(24737U);
    msg.setSourceEntity(78U);
    msg.setDestination(23828U);
    msg.setDestinationEntity(55U);
    msg.control_src = 19369U;
    msg.control_ent = 86U;
    msg.timeout = 0.502052719945;
    msg.loiter_radius = 0.839027443645;
    msg.altitude_interval = 0.93665515403;

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
    msg.setTimeStamp(0.0974169653975);
    msg.setSource(28157U);
    msg.setSourceEntity(143U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(173U);
    msg.control_src = 60438U;
    msg.control_ent = 21U;
    msg.timeout = 0.309760334546;
    msg.loiter_radius = 0.557944958855;
    msg.altitude_interval = 0.958575191717;

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
    msg.setTimeStamp(0.998139960336);
    msg.setSource(35041U);
    msg.setSourceEntity(53U);
    msg.setDestination(4472U);
    msg.setDestinationEntity(133U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.928511923447;
    tmp_msg_0.speed_units = 230U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.583865919098;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.260312898466;
    msg.lon = 0.453850779583;
    msg.radius = 0.996297645957;

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
    msg.setTimeStamp(0.257949407155);
    msg.setSource(12506U);
    msg.setSourceEntity(157U);
    msg.setDestination(37052U);
    msg.setDestinationEntity(68U);
    msg.flags = 209U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.187799382235;
    tmp_msg_0.speed_units = 125U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.261094606297;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0344360938698;
    msg.lon = 0.521736031726;
    msg.radius = 0.271927645105;

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
    msg.setTimeStamp(0.626812771821);
    msg.setSource(49908U);
    msg.setSourceEntity(60U);
    msg.setDestination(62967U);
    msg.setDestinationEntity(153U);
    msg.flags = 249U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0655815317096;
    tmp_msg_0.speed_units = 40U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.525446145495;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.47782958959;
    msg.lon = 0.98207142477;
    msg.radius = 0.548748844874;

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
    msg.setTimeStamp(0.10996333805);
    msg.setSource(12957U);
    msg.setSourceEntity(162U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(245U);
    msg.control_src = 43173U;
    msg.control_ent = 9U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.266559060084;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.956273294442;
    tmp_tmp_msg_0_1.z_units = 164U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.087485704857;
    tmp_msg_0.lon = 0.898917560486;
    tmp_msg_0.radius = 0.187272688194;
    msg.reference.set(tmp_msg_0);
    msg.state = 64U;
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
    msg.setTimeStamp(0.580068830024);
    msg.setSource(50451U);
    msg.setSourceEntity(233U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(25U);
    msg.control_src = 23374U;
    msg.control_ent = 41U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 13U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.54094697087;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.866598530539;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.442598538441;
    tmp_msg_0.lon = 0.475635394013;
    tmp_msg_0.radius = 0.892558483911;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 14U;

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
    msg.setTimeStamp(0.388146630436);
    msg.setSource(26368U);
    msg.setSourceEntity(222U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(83U);
    msg.control_src = 25942U;
    msg.control_ent = 65U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 177U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.418572235395;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.305428525164;
    tmp_tmp_msg_0_1.z_units = 207U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.410728969755;
    tmp_msg_0.lon = 0.60832353921;
    tmp_msg_0.radius = 0.730821743179;
    msg.reference.set(tmp_msg_0);
    msg.state = 194U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.925840924147);
    msg.setSource(12656U);
    msg.setSourceEntity(35U);
    msg.setDestination(4388U);
    msg.setDestinationEntity(3U);
    msg.ax_cmd = 0.664955264338;
    msg.ay_cmd = 0.580088123099;
    msg.az_cmd = 0.285541324878;
    msg.ax_des = 0.830227892625;
    msg.ay_des = 0.472222977602;
    msg.az_des = 0.159803064309;
    msg.virt_err_x = 0.146400723152;
    msg.virt_err_y = 0.828401525008;
    msg.virt_err_z = 0.126167253539;
    msg.surf_fdbk_x = 0.0775730879724;
    msg.surf_fdbk_y = 0.703865178388;
    msg.surf_fdbk_z = 0.0817936080961;
    msg.surf_unkn_x = 0.846402344235;
    msg.surf_unkn_y = 0.459361712523;
    msg.surf_unkn_z = 0.699935666712;
    msg.ss_x = 0.88973582922;
    msg.ss_y = 0.892691074799;
    msg.ss_z = 0.385782965922;

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
    msg.setTimeStamp(0.785854467817);
    msg.setSource(13535U);
    msg.setSourceEntity(195U);
    msg.setDestination(39439U);
    msg.setDestinationEntity(52U);
    msg.ax_cmd = 0.73242531898;
    msg.ay_cmd = 0.293610608914;
    msg.az_cmd = 0.882094536886;
    msg.ax_des = 0.312242017197;
    msg.ay_des = 0.55377478045;
    msg.az_des = 0.824700329066;
    msg.virt_err_x = 0.0911920429065;
    msg.virt_err_y = 0.291651159711;
    msg.virt_err_z = 0.909753842462;
    msg.surf_fdbk_x = 0.479772494244;
    msg.surf_fdbk_y = 0.579022595463;
    msg.surf_fdbk_z = 0.281883431502;
    msg.surf_unkn_x = 0.756101872969;
    msg.surf_unkn_y = 0.829788422868;
    msg.surf_unkn_z = 0.832175423683;
    msg.ss_x = 0.0641927408948;
    msg.ss_y = 0.118769956048;
    msg.ss_z = 0.837901728902;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MIQDYCYPRTSJRIGEWISYPEOXIPKZHXLPWUQFKJUTXJAQTMTFFWQRRYBLCGLLLYNZZIDPQWIEUKBVXDMLJOMAHHZGXNGOTWOKNPEENSTXCUKOEHKVYNTJBIUCBUMAFCGSRPIXIOVLBKGYGCRNDAFVRWDKMHHRSSMNGKKMDPLZJYCQOEUZANVPVFAUZSAQFBMHBNDWQBGJLCRXAIFNYUCJDPOTERZBZVTUDA");
    tmp_msg_0.dist = 0.261484221778;
    tmp_msg_0.err = 0.588738655662;
    tmp_msg_0.ctrl_imp = 0.626151212516;
    tmp_msg_0.rel_dir_x = 0.49677394734;
    tmp_msg_0.rel_dir_y = 0.419087728535;
    tmp_msg_0.rel_dir_z = 0.747396338692;
    tmp_msg_0.err_x = 0.00981428126693;
    tmp_msg_0.err_y = 0.414475702831;
    tmp_msg_0.err_z = 0.467500697929;
    tmp_msg_0.rf_err_x = 0.922469738991;
    tmp_msg_0.rf_err_y = 0.664322075997;
    tmp_msg_0.rf_err_z = 0.837604823617;
    tmp_msg_0.rf_err_vx = 0.702294064718;
    tmp_msg_0.rf_err_vy = 0.842051097307;
    tmp_msg_0.rf_err_vz = 0.932607171234;
    tmp_msg_0.ss_x = 0.365198109271;
    tmp_msg_0.ss_y = 0.14487757408;
    tmp_msg_0.ss_z = 0.56049816184;
    tmp_msg_0.virt_err_x = 0.265003915312;
    tmp_msg_0.virt_err_y = 0.11285302858;
    tmp_msg_0.virt_err_z = 0.45351207058;
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
    msg.setTimeStamp(0.67056556499);
    msg.setSource(3423U);
    msg.setSourceEntity(240U);
    msg.setDestination(10991U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.491526969503;
    msg.ay_cmd = 0.342461381993;
    msg.az_cmd = 0.563047550792;
    msg.ax_des = 0.412132328811;
    msg.ay_des = 0.159863348603;
    msg.az_des = 0.330414207157;
    msg.virt_err_x = 0.787011195042;
    msg.virt_err_y = 0.415054464086;
    msg.virt_err_z = 0.619952727046;
    msg.surf_fdbk_x = 0.394328983184;
    msg.surf_fdbk_y = 0.919092873071;
    msg.surf_fdbk_z = 0.378175625767;
    msg.surf_unkn_x = 0.448866571256;
    msg.surf_unkn_y = 0.287406121926;
    msg.surf_unkn_z = 0.155904233769;
    msg.ss_x = 0.436783702737;
    msg.ss_y = 0.996439462424;
    msg.ss_z = 0.668337640418;

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
    msg.setTimeStamp(0.389982470111);
    msg.setSource(29798U);
    msg.setSourceEntity(235U);
    msg.setDestination(26356U);
    msg.setDestinationEntity(114U);
    msg.s_id.assign("CZGQAMECDECIJSDUBWHXFMNVAYVGVDUZSYYOOQEZVTOWIKHVEWBRYNRONYOGUGNDIUJSPXLOMKLKQALIGIJVBQLFTKMVTEBRFOPXSHJKMFPSMPWZQRWXRNNIFDEPEGXHFWASVZIANVULZWSQZNKJXGYUDQKHDLPPMPYGDLFZXXJNODTCKOWYNRTDBIWLBJJOLHGCMTECVYXIARQXEARSABTQUUSZTRFEJMBHUCCFGKJHYABRQTTFPIPLCCSHHA");
    msg.dist = 0.589664451743;
    msg.err = 0.534804962311;
    msg.ctrl_imp = 0.626037938416;
    msg.rel_dir_x = 0.179163969172;
    msg.rel_dir_y = 0.0731102588564;
    msg.rel_dir_z = 0.802464994231;
    msg.err_x = 0.397638155128;
    msg.err_y = 0.322882345946;
    msg.err_z = 0.577897198814;
    msg.rf_err_x = 0.458280537331;
    msg.rf_err_y = 0.80886724655;
    msg.rf_err_z = 0.314382075017;
    msg.rf_err_vx = 0.498883597998;
    msg.rf_err_vy = 0.236667278049;
    msg.rf_err_vz = 0.566938622424;
    msg.ss_x = 0.0148876562673;
    msg.ss_y = 0.690222690547;
    msg.ss_z = 0.673116659641;
    msg.virt_err_x = 0.784928110505;
    msg.virt_err_y = 0.185883191761;
    msg.virt_err_z = 0.112294598894;

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
    msg.setTimeStamp(0.177453075468);
    msg.setSource(36056U);
    msg.setSourceEntity(131U);
    msg.setDestination(36710U);
    msg.setDestinationEntity(1U);
    msg.s_id.assign("NRDRTAOFFJUZKUAGAFYIPMCBCYRALZYLTWNOTCMXMGWYDIUDBPSGHTENFICWKYHBMVNNGLJGORBSZEWWQMCKDRHRTALEHDADPCSKMYXXSJFVOLWNQTPZUXSIJHQTGZAVCOFUOUMAEQQQLSGVQEVRRQJATO");
    msg.dist = 0.244786786771;
    msg.err = 0.359151303056;
    msg.ctrl_imp = 0.0182924967151;
    msg.rel_dir_x = 0.543589812824;
    msg.rel_dir_y = 0.190452611426;
    msg.rel_dir_z = 0.0823452286021;
    msg.err_x = 0.096214515714;
    msg.err_y = 0.277577217007;
    msg.err_z = 0.706584996153;
    msg.rf_err_x = 0.256417701097;
    msg.rf_err_y = 0.101182758773;
    msg.rf_err_z = 0.182466089977;
    msg.rf_err_vx = 0.619850222944;
    msg.rf_err_vy = 0.287516170997;
    msg.rf_err_vz = 0.223000829717;
    msg.ss_x = 0.331850363688;
    msg.ss_y = 0.77565878717;
    msg.ss_z = 0.733491959068;
    msg.virt_err_x = 0.139709620217;
    msg.virt_err_y = 0.744246580339;
    msg.virt_err_z = 0.212868609193;

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
    msg.setTimeStamp(0.419166280957);
    msg.setSource(6174U);
    msg.setSourceEntity(22U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(169U);
    msg.s_id.assign("OERWCUFBMLVSAQHOLHXKROFVEQRGVOBYNVFUSDXANZKPEBSINJNTLJDXROQYRJYZYQSBNIZUAECLEXCXECDUYDDIMJGISPXJTYBHXGFTGZZZVPMOKSCFNOSXQXYNKPTOVIKPWAEBOCIBIUHAGRPKJ");
    msg.dist = 0.0935638065604;
    msg.err = 0.398844958363;
    msg.ctrl_imp = 0.904528670936;
    msg.rel_dir_x = 0.738515645361;
    msg.rel_dir_y = 0.30087620387;
    msg.rel_dir_z = 0.386278708045;
    msg.err_x = 0.525949580287;
    msg.err_y = 0.0286820027612;
    msg.err_z = 0.127342538906;
    msg.rf_err_x = 0.633602426471;
    msg.rf_err_y = 0.592045245896;
    msg.rf_err_z = 0.408636168127;
    msg.rf_err_vx = 0.372402513535;
    msg.rf_err_vy = 0.339494956135;
    msg.rf_err_vz = 0.212168281618;
    msg.ss_x = 0.212734892487;
    msg.ss_y = 0.131039001652;
    msg.ss_z = 0.616236446234;
    msg.virt_err_x = 0.126315067587;
    msg.virt_err_y = 0.82797775132;
    msg.virt_err_z = 0.324774917796;

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
    msg.setTimeStamp(0.849328606343);
    msg.setSource(17677U);
    msg.setSourceEntity(238U);
    msg.setDestination(48228U);
    msg.setDestinationEntity(150U);
    msg.timeout = 27323U;
    msg.rpm = 0.271645748301;
    msg.direction = 216U;
    msg.custom.assign("HVGIMNUAKHLSNJCTRQEFWYEDQBSNKSFITAXFGAXQLWGZKNWEGETKCATYEFDFKUDPBHFMSPTXTOCROBZMOSFERZJRNJYMDLGKPUSOPQNHEBVZXDXDQMDHIPGWXUZJSDCBUNMXQIVODJWHKLVYLTJLWLBCUKOHIUYXZBAHZIHZORUQAWACOVIQYMBZVONACNXVLJSSRCERVWYENPLPPDJBWRRYTIUYV");

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
    msg.setTimeStamp(0.611890799399);
    msg.setSource(50634U);
    msg.setSourceEntity(159U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(219U);
    msg.timeout = 4515U;
    msg.rpm = 0.150419853953;
    msg.direction = 24U;
    msg.custom.assign("OCILLMNJGDFOVAJNSAYKDPJSEUKZBXMRNCBEYHUKWXDTFVONQMPRWXQDBQETSMXXXSCIUIAAIGZSEHFRQBSUEZIPCIADFYVKARGVNKJEBTONVVIRLRLYLYQFRHUVKOAWGXKOVLYMXCPPLJBYMNQPTRWDCTNSA");

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
    msg.setTimeStamp(0.00401527885357);
    msg.setSource(28569U);
    msg.setSourceEntity(90U);
    msg.setDestination(51959U);
    msg.setDestinationEntity(66U);
    msg.timeout = 5822U;
    msg.rpm = 0.35761826144;
    msg.direction = 215U;
    msg.custom.assign("LLCRJWODOEORGFZJNNVHGXKQYMLIXKFWDICYECQLYBVMIBWOZQNTFZUNBJXKWTSPMCGBJHEKDQUHMJZTSZQMDPMDQVOZTUBBWAVNGXKAYHRXVREFJPPEZHUOVUNIAIWPDCSYYGAWWEJATTLJAPKUREUMCFAXRXEVYLTXNBYCTSSFAPLAHKYHMHEHXZMDKLSRTYPRCRSOSKXGHNVOLIBRWLUBNIQBQOFMPGWUZJFSIVCFDIV");

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
    msg.setTimeStamp(0.536902440592);
    msg.setSource(34159U);
    msg.setSourceEntity(130U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("CMUPHQSGHPFWRJDKBAJLUCFFXOZSNLJYYURTSZPTURGODUVILHHYCLNERQZFRVNWYMIOKWHKYUFKYXKUWAYBXNATTDYUVIWFLWPSAEHEXZIGYOTZIUQCCILMFOASEHETVPTJWHMZLDRDIEWJKQJMOAXZZDAGPLRNJESGNRBWBTXWKHMJINDRBXSOGOXOQCKXNQZMECKGCTJPENJQVVBVPUGEGAIMBSFMBKMVNPCFDZBTAIQQBALRPSYLVDXHO");
    msg.type = 185U;
    msg.op = 99U;
    msg.group_name.assign("VJDDHYQNZESGEYILNWRJJXTCNUNQWLHWSBBMHMNKGDFGNQTMZRAKTZQUORDV");
    msg.plan_id.assign("UZHMLJGZFHACJFHSJLGRMIRBGYMGOEYMTLMSNHNDVRVXJZNCAYDTSSKQKJLGSIPAVPOPKZJYUOFSEBZZXKULGPVWQWDZBIIXMLQXJBRDRCYQEODNNCBSQUETOXKSVING");
    msg.description.assign("BLDOXOHCYBMQFJQUPGILRVKHBDZFRAFMHZFETNGZPYVHEMLOQEZNNLAOMDLLPDWEABIMUJXOAVSCJKCWZOIUTWOOEKDTMFRNDHICTIVIGPAZVSKCZASUNBUMBCYGGVHDYJDPJWWSUVNFTSFAYTTRSXBP");
    msg.reference_frame = 69U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27030U;
    tmp_msg_0.off_x = 0.807672384953;
    tmp_msg_0.off_y = 0.296398128537;
    tmp_msg_0.off_z = 0.247809684087;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.755338691376;
    msg.leader_speed_min = 0.162279122961;
    msg.leader_speed_max = 0.072699442533;
    msg.leader_alt_min = 0.672216994513;
    msg.leader_alt_max = 0.238184928084;
    msg.pos_sim_err_lim = 0.42295390425;
    msg.pos_sim_err_wrn = 0.991904946785;
    msg.pos_sim_err_timeout = 26571U;
    msg.converg_max = 0.207980843795;
    msg.converg_timeout = 42031U;
    msg.comms_timeout = 49678U;
    msg.turb_lim = 0.817882104472;
    msg.custom.assign("ODMIOIKYSQYEXHKLYOHHQKCOOZHWPJSHSXNUFJHJLRNRGZGFFCIJMGELLQSPDQMNAEFTXIQAUDLTCACYWBMFBMUPEKZETZBVIPAWYTVYRSYIPTFUAWXTDVACSFJRHNRUNKGCNWVXTBDQZJSBMXQLVDKRUUMWTQOEDNBKUIBPGCPOGJZUNOFUYNAYZXRMLKVBODRVJSSMLWHCYGEIIWXNKTHEIVOWLAT");

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
    msg.setTimeStamp(5.09991158127e-05);
    msg.setSource(21386U);
    msg.setSourceEntity(203U);
    msg.setDestination(48162U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("SKQIUKMVCCGHXUFPGLZLTJNKWSEWOBLWUXPKXLBRHENGOTFYOQYWDQJMOJBDEDGEXFPPIA");
    msg.type = 14U;
    msg.op = 229U;
    msg.group_name.assign("FSWUTTREHJVLSVDYJYZDUMMLHWICLSCZMAXKZUOPJZFCIXKBHCLBXCAZGNKECYTXLPVNOIPFNRWGVYPGMWHRXCNZJLASMKFNSRAODAQYWEQYKVTXVKTQGPSGDSVJMEXOXFNNVTWUBBOIEGZOTDQUEHCUXDBJQFBZRYWKRZONEVGNQMDUAMACPKAHJJONZTRBGCUAQMBGPUITWDYOLWKFERJLIRQSLPTIYKQIQ");
    msg.plan_id.assign("VNHUENBJMTHAXRDJGYJMYZDJCSHILQAWVEWROEXSFSIEDGSTUNYISFYUSTBVRQTCFGAKKAVTBGZGHMYPPMKHBYFNLGVFWXQVITZHXFQACEMJZRKLXRJSOQTRWPPBQWICQLBUEVPRNUTAHXEZNWPFNO");
    msg.description.assign("FHZUCTBQQLFPWVTFBCIKVTKQBFZXRVDAISJHHFXZTQBPPANYRCIYAXMOHDOLBEEYQXEZMGNULWMPWKVQLDWUTWMAI");
    msg.reference_frame = 119U;
    msg.leader_bank_lim = 0.613474832147;
    msg.leader_speed_min = 0.830222137912;
    msg.leader_speed_max = 0.433092377156;
    msg.leader_alt_min = 0.725826252326;
    msg.leader_alt_max = 0.263111267558;
    msg.pos_sim_err_lim = 0.101417997926;
    msg.pos_sim_err_wrn = 0.527621081803;
    msg.pos_sim_err_timeout = 55004U;
    msg.converg_max = 0.235690145589;
    msg.converg_timeout = 7240U;
    msg.comms_timeout = 46811U;
    msg.turb_lim = 0.185991932234;
    msg.custom.assign("KKXDWVIAGDUCQZLXUVNEYUWJGEFGPJEZZUTDABCONZAFCGHHBBIJRQJOIXAXBLATEKMSV");

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
    msg.setTimeStamp(0.134802341355);
    msg.setSource(42809U);
    msg.setSourceEntity(94U);
    msg.setDestination(55869U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("EHYSXBQOAQKAMAVRWJXFTVJWEIVVCHVINDOQAAHECIIATCCYUIYHYNDZLQGSLMDEZEYHSWPXFVPEDKZNEBIMOYILUCJDFDUQPCTTQBOZUQTMCSVYFSAUIQWPLMKOXSGFASGWRZPBNGXJCQURBUOQVPMKBONFBWDWZFHNAHTTNGGHLXYJLUUJMGRVRPZTDKOGVJURWIRRMFTIBEFWDSBAPMDHLPWCC");
    msg.type = 116U;
    msg.op = 138U;
    msg.group_name.assign("YVBKGVCPOPLUZSUQTX");
    msg.plan_id.assign("BCTTHFAWCZTJBBCHZAXBMGUUMYMRFSZSIINILFINJNXTAKUOJHYDEHHFNUKDRTEMNQMWXGFSDAKDAVZXPSVQMRHLNGDCHCPOBTORCJJXCXEQZORWERSITLLCEAQOYXSLZLVNNYFFKRTHOUKVUGWAOZJXPPVVBMHRJNBLWPIWTOPAQGQSJLPJMGQGEWFPCVWNDOUVVBWETQUDEPAQSXKIRSYEMGSJA");
    msg.description.assign("DJNSNUQTPIGTPSECECZECOZPOPDASZYQHUDMRDABVPJRLVMOSDKGBWHYMZLZTPXZPMGJIJZERFGIXKMMLFFBOEXIRFWCOXRFLPSUWTBWRXRBUNPJHGUWVNTMROBFHWJHLATKLANEKI");
    msg.reference_frame = 63U;
    msg.leader_bank_lim = 0.728265728639;
    msg.leader_speed_min = 0.378572668523;
    msg.leader_speed_max = 0.576552889768;
    msg.leader_alt_min = 0.51014208616;
    msg.leader_alt_max = 0.588881110995;
    msg.pos_sim_err_lim = 0.81752951393;
    msg.pos_sim_err_wrn = 0.34672605523;
    msg.pos_sim_err_timeout = 2790U;
    msg.converg_max = 0.699736904103;
    msg.converg_timeout = 7256U;
    msg.comms_timeout = 11245U;
    msg.turb_lim = 0.794988008287;
    msg.custom.assign("GNHVDLKBCDLITXLFHNGCJSOPUCEPFGMSMOZLULGDJS");

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
    msg.setTimeStamp(0.333851363636);
    msg.setSource(48958U);
    msg.setSourceEntity(88U);
    msg.setDestination(40627U);
    msg.setDestinationEntity(37U);
    msg.timeout = 38475U;
    msg.lat = 0.882666067308;
    msg.lon = 0.307076670437;
    msg.z = 0.663119734121;
    msg.z_units = 210U;
    msg.speed = 0.832791975649;
    msg.speed_units = 53U;
    msg.custom.assign("JEGBAKQDAXNTF");

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
    msg.setTimeStamp(0.711113618841);
    msg.setSource(64610U);
    msg.setSourceEntity(254U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(141U);
    msg.timeout = 11153U;
    msg.lat = 0.788747122025;
    msg.lon = 0.864849766127;
    msg.z = 0.371501595042;
    msg.z_units = 185U;
    msg.speed = 0.478368542438;
    msg.speed_units = 141U;
    msg.custom.assign("SPUPBGZZMPIRRDJCDTVTNKUQNSFEANGSBVLCZPZTLWTQCKJQYTSHQWYROSGHQIBMCBKXDLZEQGRMYFHVNYNCIWUPMODTIYOQXJNXPEZHXVEBMGLMREKLPMEDXICMRZASWQVBLUFAKKVXVKCNEZTSSGWDWJJORWDYXYUGUITQVBJOLAFVGAFCTULKCEYBYAUL");

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
    msg.setTimeStamp(0.875907342074);
    msg.setSource(8210U);
    msg.setSourceEntity(132U);
    msg.setDestination(47098U);
    msg.setDestinationEntity(147U);
    msg.timeout = 27486U;
    msg.lat = 0.304126623944;
    msg.lon = 0.537170996238;
    msg.z = 0.948562385887;
    msg.z_units = 113U;
    msg.speed = 0.130584249988;
    msg.speed_units = 241U;
    msg.custom.assign("RHVXKCLYPFFXKLOFVOKINCDKMGYLWNZYDQCCMBAUKDPGISVZEDHJTQVYDXRJGHSNLUJGEWAHLJCAZMHRBWKSERMRHCWTCOFWJJRAQVRNMBNMPMEXDYOUDBLWSSWVTEKIAPNMSOSKSBTFPTNEDTFOAGUQCYAGMWQVEIELRHXXVVJIEAAQIAJXGYXJTMSSIOKFBYWPUQTYLFGGWRQUVPPHJLFPIUZTYZQBRUCBIDKZLGHUXUXOZD");

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
    msg.setTimeStamp(0.713395553016);
    msg.setSource(13836U);
    msg.setSourceEntity(9U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(231U);
    msg.dist_min = 0.50488387669;
    msg.ax_cmd = 0.564432252083;
    msg.ay_cmd = 0.18852976376;
    msg.az_cmd = 0.290939662061;
    msg.ax_des = 0.680863450201;
    msg.ay_des = 0.0821744871976;
    msg.az_des = 0.707903341389;
    msg.virt_err_x = 0.596568988489;
    msg.virt_err_y = 0.737043681151;
    msg.virt_err_z = 0.0175026206411;
    msg.surf_fdbk_x = 0.27140816886;
    msg.surf_fdbk_y = 0.607189179414;
    msg.surf_fdbk_z = 0.446602549973;
    msg.surf_unkn_x = 0.653171350077;
    msg.surf_unkn_y = 0.678185126033;
    msg.surf_unkn_z = 0.645618115364;
    msg.ss_x = 0.325064245489;
    msg.ss_y = 0.252240596937;
    msg.ss_z = 0.55513718121;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OQLETJDTBCJDHGSKFBGJRSWXGTGHVQDPKZJLWAYWFVPQBIMAURKEDQYCHRFTSPNHLKSQUVLESRTZQJWYPAUJZHKNHBFYGX");
    tmp_msg_0.dist = 0.435860483905;
    tmp_msg_0.err = 0.94114511122;
    tmp_msg_0.ctrl_imp = 0.463145628228;
    tmp_msg_0.rel_dir_x = 0.321836226362;
    tmp_msg_0.rel_dir_y = 0.845708192536;
    tmp_msg_0.rel_dir_z = 0.6560659306;
    tmp_msg_0.err_x = 0.629577691698;
    tmp_msg_0.err_y = 0.136222499835;
    tmp_msg_0.err_z = 0.398327255329;
    tmp_msg_0.rf_err_x = 0.979239437039;
    tmp_msg_0.rf_err_y = 0.35879172198;
    tmp_msg_0.rf_err_z = 0.606845014761;
    tmp_msg_0.rf_err_vx = 0.931592730824;
    tmp_msg_0.rf_err_vy = 0.144776854533;
    tmp_msg_0.rf_err_vz = 0.663064334609;
    tmp_msg_0.ss_x = 0.138676429804;
    tmp_msg_0.ss_y = 0.374601625974;
    tmp_msg_0.ss_z = 0.724969209883;
    tmp_msg_0.virt_err_x = 0.662111729465;
    tmp_msg_0.virt_err_y = 0.813508524079;
    tmp_msg_0.virt_err_z = 0.256815007109;
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
    msg.setTimeStamp(0.322586450877);
    msg.setSource(39678U);
    msg.setSourceEntity(98U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(45U);
    msg.dist_min = 0.336784157322;
    msg.ax_cmd = 0.493891273632;
    msg.ay_cmd = 0.346126275827;
    msg.az_cmd = 0.601287687001;
    msg.ax_des = 0.351467910752;
    msg.ay_des = 0.0262090947274;
    msg.az_des = 0.430639881768;
    msg.virt_err_x = 0.679237510226;
    msg.virt_err_y = 0.48900913022;
    msg.virt_err_z = 0.634900648367;
    msg.surf_fdbk_x = 0.833589866848;
    msg.surf_fdbk_y = 0.949933484579;
    msg.surf_fdbk_z = 0.67311624494;
    msg.surf_unkn_x = 0.669610632481;
    msg.surf_unkn_y = 0.73734278494;
    msg.surf_unkn_z = 0.824561313904;
    msg.ss_x = 0.413302768404;
    msg.ss_y = 0.198527109713;
    msg.ss_z = 0.841871962695;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TMQLXMYIFOZJXAXUYNAMOFOWSSRGLNCJNYGSBHWYNUYQDHBRLWARBCGUVAZNNRIBHHYAGZKQVDCTYUQXIINBDIQAFTFMEXTSUFEIOEMFDGRDGPEEZQSQLRVKSHDAIHKOUCRVIJGOAMBSPVPPAEBDLDBPOLHHKTUJLXYCEXXCNJKZETBITCKWPVKVWMLZOPUJGPXJZYLWNSQGHZCKKMQFQVRTMGTSZRMBRUUOFN");
    tmp_msg_0.dist = 0.147394931174;
    tmp_msg_0.err = 0.423205548963;
    tmp_msg_0.ctrl_imp = 0.248536876367;
    tmp_msg_0.rel_dir_x = 0.553252690848;
    tmp_msg_0.rel_dir_y = 0.531598147241;
    tmp_msg_0.rel_dir_z = 0.64223924158;
    tmp_msg_0.err_x = 0.398627189035;
    tmp_msg_0.err_y = 0.510896180866;
    tmp_msg_0.err_z = 0.608706685251;
    tmp_msg_0.rf_err_x = 0.648663939673;
    tmp_msg_0.rf_err_y = 0.496476266293;
    tmp_msg_0.rf_err_z = 0.0289605500108;
    tmp_msg_0.rf_err_vx = 0.125505203588;
    tmp_msg_0.rf_err_vy = 0.567256776232;
    tmp_msg_0.rf_err_vz = 0.279027485958;
    tmp_msg_0.ss_x = 0.369077727146;
    tmp_msg_0.ss_y = 0.59790523729;
    tmp_msg_0.ss_z = 0.102565247372;
    tmp_msg_0.virt_err_x = 0.0774558543743;
    tmp_msg_0.virt_err_y = 0.521858438254;
    tmp_msg_0.virt_err_z = 0.855865807604;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.432614079496);
    msg.setSource(24081U);
    msg.setSourceEntity(249U);
    msg.setDestination(56625U);
    msg.setDestinationEntity(198U);
    msg.dist_min = 0.541703997202;
    msg.ax_cmd = 0.984315444871;
    msg.ay_cmd = 0.492431919327;
    msg.az_cmd = 0.51823421345;
    msg.ax_des = 0.103206836117;
    msg.ay_des = 0.701224987668;
    msg.az_des = 0.619018577215;
    msg.virt_err_x = 0.313038273005;
    msg.virt_err_y = 0.244030959685;
    msg.virt_err_z = 0.608719709479;
    msg.surf_fdbk_x = 0.388520645829;
    msg.surf_fdbk_y = 0.1873335587;
    msg.surf_fdbk_z = 0.255828272077;
    msg.surf_unkn_x = 0.225791435197;
    msg.surf_unkn_y = 0.880170114685;
    msg.surf_unkn_z = 0.391963967294;
    msg.ss_x = 0.0537829559923;
    msg.ss_y = 0.0355260534439;
    msg.ss_z = 0.833983596974;

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
    msg.setTimeStamp(0.885363759729);
    msg.setSource(2126U);
    msg.setSourceEntity(79U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(109U);
    msg.op_mode = 143U;
    msg.error_count = 164U;
    msg.error_ents.assign("EQYAVLIUCLAXVMWWXFVUDBDRVKOBLPDTIWNPHCARMXPFXNSFAKMRKCPJQJELXOULSAIOTANDCEBQHIGSATBDDOWRQJTFXKSPHYVEYPRCDNWTOXJJKKFKENYIMLFAINGRJRCFN");
    msg.maneuver_type = 41059U;
    msg.maneuver_stime = 0.565546198432;
    msg.maneuver_eta = 8584U;
    msg.control_loops = 591733048U;
    msg.flags = 122U;
    msg.last_error.assign("KAEAHIMUCFCLWDBEXZLJRONVMJSFYYQDQPAUWSOKTBUXJIEWGCAGUVXQDLTNSGDDGBNVGVNDCOFLIAPQDOKKI");
    msg.last_error_time = 0.0831525619833;

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
    msg.setTimeStamp(0.271567392753);
    msg.setSource(14057U);
    msg.setSourceEntity(167U);
    msg.setDestination(138U);
    msg.setDestinationEntity(156U);
    msg.op_mode = 135U;
    msg.error_count = 181U;
    msg.error_ents.assign("FKGTOXGXXQQQHMPSCSAKOHYUFWLDFLKMDGFWTWIHNVXGGZYAWQABVGTIPIHAYUEHLMMSEONOSACKQUGXMRICMJCBJQJCKNKPDABISKVOHO");
    msg.maneuver_type = 29013U;
    msg.maneuver_stime = 0.329077896922;
    msg.maneuver_eta = 34553U;
    msg.control_loops = 2326657236U;
    msg.flags = 159U;
    msg.last_error.assign("MMDPVJOMRQEGCLXGBSMYKGUETBVMPXVSLXGTILDHZWPFWJAIXI");
    msg.last_error_time = 0.612747867589;

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
    msg.setTimeStamp(0.970231797136);
    msg.setSource(40179U);
    msg.setSourceEntity(230U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(119U);
    msg.op_mode = 202U;
    msg.error_count = 79U;
    msg.error_ents.assign("SYTICAYSIBOSJFHNYQXIPKUFMTFDYPCMOIFOKJGRVQEBSBNLSUNEFUGUHQTZDVZBSIEOWQLKVEAFVIRNHZXDCLMOLGUDWEGIVYPXKXFQLISHNXCUEPRVODWAJHEZXWVOKJLKMVHPCQARYRZQNPRXDPJTTULEUNXCYGDJBJNFVHHCANADTLTXWDSZRMOSHWCPETYJPKRRYGWMDEAOBCZIGNM");
    msg.maneuver_type = 56525U;
    msg.maneuver_stime = 0.744041571816;
    msg.maneuver_eta = 5237U;
    msg.control_loops = 2749988301U;
    msg.flags = 116U;
    msg.last_error.assign("UMLVCDNVUZQORTEAELPBJAQQNQEXYNAIJWOEQDYEKVVHZKUJXOGVSBMUATUPPEKOGMXIJSYQTJKTY");
    msg.last_error_time = 0.541457238128;

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
    msg.setTimeStamp(0.486483669886);
    msg.setSource(24182U);
    msg.setSourceEntity(250U);
    msg.setDestination(14979U);
    msg.setDestinationEntity(203U);
    msg.type = 45U;
    msg.request_id = 3130U;
    msg.command = 192U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 6745U;
    tmp_msg_0.name.assign("XMGTSXHGTVEESZRRAPCKLHVYINOJNQXEQLASTEQXRVJCWLFQGIRJIGDFKHEZVVCWZYMVSBAQHFZUDYTDFPRHULCNSPSGPJOGMOBAWDNAHOFQYTOBPMMUUYLXYBENJKWBYMRQW");
    tmp_msg_0.custom.assign("HIVAGERRWXYWIGBOMKVPZKNSKJMPCFMOUORSLJTVYJFNXUAQIEJUNUVFPJHWUCCBBIPBSZQVFWGQASZLDZMFCYEHTLDZHGQXDMQEYTNCWNOAIDFNRRJTKDSTLKIMCPFSMLLCGDVCEHVWDBSMDIBXUHTWAGTSBHCQUNZCIMBXPEOVOJYWGYENHWAKJRZDBAKVEXUKYGTQFPMXAQLQJOFIFVOK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64920U;
    msg.info.assign("FVXSMYPBHK");

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
    msg.setTimeStamp(0.0521381280216);
    msg.setSource(37259U);
    msg.setSourceEntity(52U);
    msg.setDestination(51046U);
    msg.setDestinationEntity(87U);
    msg.type = 180U;
    msg.request_id = 47443U;
    msg.command = 117U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 54181U;
    tmp_msg_0.lat = 0.817678802663;
    tmp_msg_0.lon = 0.968935900787;
    tmp_msg_0.z = 0.16247065725;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.duration = 28524U;
    tmp_msg_0.speed = 0.941716880767;
    tmp_msg_0.speed_units = 231U;
    tmp_msg_0.type = 159U;
    tmp_msg_0.radius = 0.6716203332;
    tmp_msg_0.length = 0.678921930639;
    tmp_msg_0.bearing = 0.0970236639353;
    tmp_msg_0.direction = 1U;
    tmp_msg_0.custom.assign("BEZTVHLMUFLWJDQYAVZUGPMJOVQRKXFZVBNXBMVULRQQZGBHKOYUVSSQZYWLLTNBQGANHEADAIKLECTNTXMFHWAGJFDDXIOOKEFUA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14192U;
    msg.info.assign("NGCEQLZGCHG");

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
    msg.setTimeStamp(0.905980739159);
    msg.setSource(15429U);
    msg.setSourceEntity(54U);
    msg.setDestination(17090U);
    msg.setDestinationEntity(67U);
    msg.type = 243U;
    msg.request_id = 28138U;
    msg.command = 121U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QGGRRZNQMLOXGTUVGGWFHGCMRSMKOGJAFIEIFBWMUHUERQAYJDIUVITBZLUSJOFOFYMKKIISKNOBYFGERZKTWTME");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43968U;
    msg.info.assign("XSTJTCXBROTWZHNIGGBRWBY");

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
    msg.setTimeStamp(0.67267253442);
    msg.setSource(31625U);
    msg.setSourceEntity(97U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(148U);
    msg.command = 166U;
    msg.entities.assign("CTZSKNZIGDQYLRUBMEHFGWLQEMOTWQILKFIOZLXBVORDBWQONCPSGRAUZMBPQGQRZSUSPXFEFHAMMUWBNYHGIZFOJINICEUXTOBGUMMVNIQSFFYYFKDXWJXMLZHYEPGXHAOWSKLUGTHCAZVVBDJXVCNDIKJYYVCHDGDWJSYJTASXEECUPTJJOPKBRERVRPNDSWQNCRCEUF");

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
    msg.setTimeStamp(0.22699802464);
    msg.setSource(16366U);
    msg.setSourceEntity(80U);
    msg.setDestination(2097U);
    msg.setDestinationEntity(161U);
    msg.command = 131U;
    msg.entities.assign("JJMEIXYSYDAWZZYKFDVAIGBZBKUIRJQFCLONKDTBLLPABPXLPXNACVRRZUQWGCIDGWWYQVMAGJNUHVJNEVJPIDPSQKCTRTU");

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
    msg.setTimeStamp(0.656327196128);
    msg.setSource(25380U);
    msg.setSourceEntity(228U);
    msg.setDestination(38931U);
    msg.setDestinationEntity(206U);
    msg.command = 30U;
    msg.entities.assign("WTYDKJREDDBYRQBDWYKVEOVOISUZADRLXXKKPCFWUBFJPZMSMJQKXHBEGZAVIHFDPUGUMCMLBDQNXWQXGZSVVDLBOIJIIPNRRANHYCVHCCFLQEEWAVWDYL");

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
    msg.setTimeStamp(0.0472327112922);
    msg.setSource(25717U);
    msg.setSourceEntity(32U);
    msg.setDestination(63365U);
    msg.setDestinationEntity(78U);
    msg.mcount = 37U;
    msg.mnames.assign("AMRSZCERACDTEKAUVPHLVWKNNWJFALSSUI");
    msg.ecount = 140U;
    msg.enames.assign("PIOXESAVULMGXCILKHWEVRDSACEHIFCSSRQTUDEQOUQWYPDYGMEQMUVXRJOJZWPISYKYYWTYWNYPBTQQJOZLMLWHFIBMNUBGFGJTFGWSHWSAUGHZLYQJUT");
    msg.ccount = 226U;
    msg.cnames.assign("RTJIKSGGYSJCQDMQXESLGQADURQCNAQUTVHMITXDNMSDLBAOWKHEFYLSTMXDAW");
    msg.last_error.assign("DYHKWCAIKGMZZURNIOCKLVLFSEBEWDQHRFLWCFDTXWGOMMSDFVPHQTOYQAYXRPSSCJKTCWNTUVYPBAWILUNXFZLYKOUVDXIRIMTCRKSPBDHREQUSSJPMBNFZZDUZIZOEGOHLFSJXJENJCXJBLVMQQXXKEMWKAEPVBDCRGAXOAUJAJONLGWAUNGIRYGLYBESPXWHHBFZEIGRDGQYUTMVIWFYFNPTNHV");
    msg.last_error_time = 0.457021917896;

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
    msg.setTimeStamp(0.729697293531);
    msg.setSource(31750U);
    msg.setSourceEntity(68U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(54U);
    msg.mcount = 91U;
    msg.mnames.assign("KWVKWHRUMHFUUDLHIDCYTDIHKVOYTCEBTTEHEAKDMGSYRGAIEDVNWSMCRYIYQJJWOAWPAJ");
    msg.ecount = 83U;
    msg.enames.assign("GCDPAMSUFOGLOTPREWYVGZJTSTXIYYDGHJDGEMXKLHGVKFFVCBNIPTSLRYZTSAIMARZRLLVKMDLBQNDPMIWLBAOPPUUIDGGSQJHAMWSZRIWFJQBZEQQWXN");
    msg.ccount = 13U;
    msg.cnames.assign("SZRMRYEFIUMAIUREAEOHAGGOQDGIYGFKSFCHAMTETAWOVYJTEOKBLGSICTWGXQSWPNOWDSLZXRIFPCVWVAEYZEMXQRFVQCAVMNULWYXJKPTPTMRFBDDNJURZKLZZUYJBLFWNDUCOHBRBKYQWNQXZLKJVHHLWKIXCNAIPFORMFZETXNVKEPDSZVPICCBBMNHBQGDVHURPY");
    msg.last_error.assign("WSFKVHXVQZMZSBGECZOQZZIXGYWQJHLOEITLPNQKNVIOXHJLDTLSMEUVOIMZFORLVNMFKVIFUTGYYEEMKSHFMNUJIVWFGSHHJCEMDTU");
    msg.last_error_time = 0.50999304106;

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
    msg.setTimeStamp(0.356129448689);
    msg.setSource(58773U);
    msg.setSourceEntity(9U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(233U);
    msg.mcount = 36U;
    msg.mnames.assign("QQUQMBIIULUKA");
    msg.ecount = 182U;
    msg.enames.assign("AETQDCSJGJZTULUIBXGHWSOJVJKIGNKPNPCXRLXXDWIBZFHXTMRUCALBVBGXWMASYDOIVPSJKCOFZQWZHDDGIXGEFYGYCLNFPIWDWCBENFGFZLMTVRDVUYQTOYDRPUOBRCCEFSHSSYIKOPZJQLEJERFCVPOHGPNAHXMLPUABOQAEHRRIIRWKYWEYNBVBMMWDOMTJQXTOZ");
    msg.ccount = 254U;
    msg.cnames.assign("TOSVZEGEBFQWJWTGRLQLXBKTNJBEMQGTJXARNONTICUJROIKURSUDNVAZXOFMKTAWZAYSXRXUZHGQMHYUHAWBMEDPCMHHLDNCPPVZGPFDVEEWOCOIBNPKKLUADGSYVXDWIJBNWAUECFNFSTHACBLBZWCVYPKLMOYVJPDM");
    msg.last_error.assign("YUJZQDDYIVRBWUMIZUPAHLJEDUNXEMPWKZWOOYWWSKTIJXBVVIXGGZAURAFNHWFEQUCSJIKJLFOOXSIXBVMTCZNGSGQPDIXUPTELAOZHXNAWRSMIAJOUOSGHMZRSRTKBEEBBLCQILYNVCDRZFGLYTAYCXXWDOLDDAAPGKLNXRTJBMYWRCDHQTLIKCTNFQPDKVQTEOVSHEMPPJALYMHUSVGSBFYGECZRVQWHNHPZUQNFMKRFQPYFVJMHCCT");
    msg.last_error_time = 0.48165810119;

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
    msg.setTimeStamp(0.600704027919);
    msg.setSource(27948U);
    msg.setSourceEntity(184U);
    msg.setDestination(63903U);
    msg.setDestinationEntity(45U);
    msg.mask = 152U;
    msg.max_depth = 0.981573960385;
    msg.min_altitude = 0.0175844880662;
    msg.max_altitude = 0.0529246851427;
    msg.min_speed = 0.880528689557;
    msg.max_speed = 0.416878013831;
    msg.max_vrate = 0.458859592088;
    msg.lat = 0.285065636252;
    msg.lon = 0.585733365567;
    msg.orientation = 0.903044334508;
    msg.width = 0.0526263350098;
    msg.length = 0.034757437112;

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
    msg.setTimeStamp(0.334164650171);
    msg.setSource(57659U);
    msg.setSourceEntity(129U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(237U);
    msg.mask = 239U;
    msg.max_depth = 0.344744464994;
    msg.min_altitude = 0.171966480925;
    msg.max_altitude = 0.0839088310986;
    msg.min_speed = 0.291447582135;
    msg.max_speed = 0.443183020875;
    msg.max_vrate = 0.998622552467;
    msg.lat = 0.980602680899;
    msg.lon = 0.182278768863;
    msg.orientation = 0.256633670372;
    msg.width = 0.505131617119;
    msg.length = 0.0862646979725;

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
    msg.setTimeStamp(0.286223125519);
    msg.setSource(10660U);
    msg.setSourceEntity(86U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(245U);
    msg.mask = 168U;
    msg.max_depth = 0.166102501643;
    msg.min_altitude = 0.0231628031505;
    msg.max_altitude = 0.720344903629;
    msg.min_speed = 0.716309168493;
    msg.max_speed = 0.20551136444;
    msg.max_vrate = 0.499729037782;
    msg.lat = 0.74053563414;
    msg.lon = 0.376745159265;
    msg.orientation = 0.64800244033;
    msg.width = 0.627771091861;
    msg.length = 0.202531814453;

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
    msg.setTimeStamp(0.435616107734);
    msg.setSource(25866U);
    msg.setSourceEntity(91U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.473949012061);
    msg.setSource(1909U);
    msg.setSourceEntity(68U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.682831222472);
    msg.setSource(25794U);
    msg.setSourceEntity(235U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.979427709652);
    msg.setSource(5348U);
    msg.setSourceEntity(57U);
    msg.setDestination(20200U);
    msg.setDestinationEntity(90U);
    msg.duration = 16516U;

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
    msg.setTimeStamp(0.913404922339);
    msg.setSource(16934U);
    msg.setSourceEntity(49U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(138U);
    msg.duration = 65420U;

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
    msg.setTimeStamp(0.617146626986);
    msg.setSource(40701U);
    msg.setSourceEntity(60U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(189U);
    msg.duration = 18926U;

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
    msg.setTimeStamp(0.642669302625);
    msg.setSource(21927U);
    msg.setSourceEntity(51U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(13U);
    msg.enable = 6U;
    msg.mask = 3948702446U;
    msg.scope_ref = 2907921970U;

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
    msg.setTimeStamp(0.863783132988);
    msg.setSource(5170U);
    msg.setSourceEntity(98U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(139U);
    msg.enable = 93U;
    msg.mask = 4111242192U;
    msg.scope_ref = 1595252607U;

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
    msg.setTimeStamp(0.682311518259);
    msg.setSource(46861U);
    msg.setSourceEntity(52U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(126U);
    msg.enable = 199U;
    msg.mask = 563952743U;
    msg.scope_ref = 2219018435U;

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
    msg.setTimeStamp(0.612343143875);
    msg.setSource(14695U);
    msg.setSourceEntity(226U);
    msg.setDestination(63942U);
    msg.setDestinationEntity(173U);
    msg.medium = 46U;

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
    msg.setTimeStamp(0.163009266709);
    msg.setSource(54078U);
    msg.setSourceEntity(180U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(130U);
    msg.medium = 100U;

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
    msg.setTimeStamp(0.814168707472);
    msg.setSource(63665U);
    msg.setSourceEntity(124U);
    msg.setDestination(55837U);
    msg.setDestinationEntity(20U);
    msg.medium = 67U;

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
    msg.setTimeStamp(0.683071487581);
    msg.setSource(54020U);
    msg.setSourceEntity(250U);
    msg.setDestination(60122U);
    msg.setDestinationEntity(132U);
    msg.value = 0.168416427448;
    msg.type = 240U;

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
    msg.setTimeStamp(0.958567057625);
    msg.setSource(8337U);
    msg.setSourceEntity(208U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(116U);
    msg.value = 0.701256189997;
    msg.type = 240U;

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
    msg.setTimeStamp(0.254366936047);
    msg.setSource(59634U);
    msg.setSourceEntity(55U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(94U);
    msg.value = 0.437510366506;
    msg.type = 95U;

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
    msg.setTimeStamp(0.238745148028);
    msg.setSource(62711U);
    msg.setSourceEntity(158U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.861028055745;
    msg.converg = 0.534051151119;
    msg.turbulence = 0.288482757112;
    msg.possimmon = 249U;
    msg.commmon = 246U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.619015798323);
    msg.setSource(18395U);
    msg.setSourceEntity(171U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(86U);
    msg.possimerr = 0.617927343202;
    msg.converg = 0.915827704775;
    msg.turbulence = 0.937596987237;
    msg.possimmon = 188U;
    msg.commmon = 241U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.769030528802);
    msg.setSource(50085U);
    msg.setSourceEntity(239U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.349393609331;
    msg.converg = 0.505434948767;
    msg.turbulence = 0.84731861339;
    msg.possimmon = 237U;
    msg.commmon = 0U;
    msg.convergmon = 116U;

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
    msg.setTimeStamp(0.313058921185);
    msg.setSource(61914U);
    msg.setSourceEntity(140U);
    msg.setDestination(55313U);
    msg.setDestinationEntity(19U);
    msg.autonomy = 29U;
    msg.mode.assign("KGSHOLBSYDMBXZJJQFPZHQJRAADVOXDIIGXBDQKN");

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
    msg.setTimeStamp(0.882631741709);
    msg.setSource(64461U);
    msg.setSourceEntity(103U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(178U);
    msg.autonomy = 160U;
    msg.mode.assign("HBBEBLVHKPJZTISFUQQYJACIGQICIRVFSUHKAGPIAWMWZJKPKLDYINTIHTWOCXPPMHZJYHBBVLUVHMRFEDICXWRBSZWDQSOYQKUAJTSCYRMLTCFEOZHRYCUIHLNGENSPJLZCGKANAXOBTHQOLWWKEODRMESOPAPYUAVFSDRRGNMVISEOWYTGOXUYPOUBTLUFD");

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
    msg.setTimeStamp(0.79762828773);
    msg.setSource(56064U);
    msg.setSourceEntity(55U);
    msg.setDestination(24687U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 176U;
    msg.mode.assign("LXBPUBFHXJTJQZMLGVAOGCMVNDXFHDSXNRCEEOPKVICLXUAIHWEIDHSNULLJQRYEOMHNGOVIVWITLDKJQVBRFRGWRPUZGKPFVJAYFPRLDNPGSHOTDUYATKZQWMCSBGPORYMZVUJYBJCAECYLPUMIBSDOTEEVYTQMHQLQNODBMUIAEURAGQFXKSYTPNZXSWUEIYOBCXFFJS");

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
    msg.setTimeStamp(0.610799181373);
    msg.setSource(63358U);
    msg.setSourceEntity(239U);
    msg.setDestination(22903U);
    msg.setDestinationEntity(237U);
    msg.type = 245U;
    msg.op = 45U;
    msg.possimerr = 0.827401151224;
    msg.converg = 0.814419700422;
    msg.turbulence = 0.852273953589;
    msg.possimmon = 245U;
    msg.commmon = 170U;
    msg.convergmon = 141U;

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
    msg.setTimeStamp(0.135741296493);
    msg.setSource(19130U);
    msg.setSourceEntity(50U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(67U);
    msg.type = 117U;
    msg.op = 171U;
    msg.possimerr = 0.825305744315;
    msg.converg = 0.504646491971;
    msg.turbulence = 0.358205847787;
    msg.possimmon = 46U;
    msg.commmon = 99U;
    msg.convergmon = 87U;

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
    msg.setTimeStamp(0.570021713388);
    msg.setSource(3960U);
    msg.setSourceEntity(61U);
    msg.setDestination(18771U);
    msg.setDestinationEntity(130U);
    msg.type = 113U;
    msg.op = 28U;
    msg.possimerr = 0.425681075242;
    msg.converg = 0.961610685735;
    msg.turbulence = 0.618852400836;
    msg.possimmon = 31U;
    msg.commmon = 30U;
    msg.convergmon = 191U;

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
    msg.setTimeStamp(0.517012097478);
    msg.setSource(24431U);
    msg.setSourceEntity(215U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.155632054916);
    msg.setSource(15110U);
    msg.setSourceEntity(37U);
    msg.setDestination(20808U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.41518572507);
    msg.setSource(53451U);
    msg.setSourceEntity(123U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.106966338383);
    msg.setSource(2365U);
    msg.setSourceEntity(224U);
    msg.setDestination(50514U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("SRYRQVXQUJUQAIZGSXCYNMINTBYQNCWJFQEHERJHCAHBPVGDT");
    msg.description.assign("GXSQINAIFLEISTLDHUYDVFJKEYOEUEBZGPGXKBUREBMSEZCCUWRLFSOWEHICDRWLDQXPV");
    msg.vnamespace.assign("GVKDGXNATGMPPSHYXMFHKEJHFAQIJMXTJIRRHKLVBBAYJYWOZAUJFLOPCTPQVXIEVYGSZXXILDHXDSLLTAEQOTZEBUPUFMNMVRLRGHSWIQCVOKRKTANGNWGDQNBUEFCQVJFMZNMEOZHUCIUNYBAPXSQHIRCASWYLZJAZGCJMGYPPDQJUPOWTCR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AYRUUJKDQXZEZIDCNKMLAGNPVRSEMPTDFGITZXHOHJISGDYXDWJVETLABDXGPVTHZTGFBTNNGAKDCFJYSBCSFCWZJRBLYFSRXOINIZCHSNBOKOEFWPVFWWHWIUHOWMTKLAIBGOCAFOJZURNDEAMAZ");
    tmp_msg_0.value.assign("DOFWSGBIYKNDFFHPEMVEDYKLBTVGTRISCEVRVB");
    tmp_msg_0.type = 151U;
    tmp_msg_0.access = 183U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FHQUOHISJTZLSWSNTSGMKBADIAGTAQKYCRWQHMJVVRQVPKQUJXVSRPKYAPRKCEVKUBUBGXGJDRISBZXOLAQHRUZDBUZCCWYZABNXLPOMKOTETODHRCXFXLNCEEVMIHMYHEMNOWCVGFIWZJFJDMQEJHUWBOKYXAFOMKJVLLRJNYUXEHGCGDMOKIIZRDNMSWPYFLFNNTFBZQGOEQBCCTTDZAFPJDVIGDEYBTX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GXPPWYDITCIJMMZWXHZZUOTQQRCRWCNOQVAHPRJAIEESRXDDAGNUOE");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 35552U;
    tmp_tmp_msg_1_0.name.assign("HKENYQJRQBDRRPGLCNSFUQRYDJLYQYCJFMEMLWBSHMTHSNKYWEIYIQSXPOMERFRETORJGZGHDJOFLTYTWOKLCAMUEUZDPXHWNKXRIVIOKQKGSTBDVMZGGNTAMADUHTLMXAYFCUXDSPIFKSWGZPGYSSXYCASBJAHVCDBAGVQEV");
    tmp_tmp_msg_1_0.custom.assign("HRKWBBDJYJEOHSMTLBUESOSBIRUTADSJIDJWNJGPKAXVVYJPZGIMLTBFNFWXLMVWTIHQSRCRUWKAICIUVLFWHDQQPLRDPXHMUEAFCEOJKAYXMZYARYOCCCKYUNJGOTQNZTMCYFPFXUBBHXZORXIATBTDFKLRSFPZMCYL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SessionKeepAlive tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sessid = 3741553192U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SetServoPosition tmp_msg_2;
    tmp_msg_2.id = 147U;
    tmp_msg_2.value = 0.472929421611;
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
    msg.setTimeStamp(0.556021175137);
    msg.setSource(23133U);
    msg.setSourceEntity(105U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("JKQPGZEVRPTBYCQNFDYKLFOGVESXKFQIIECCWMUVZIFEWZNIUHFJLOGCNQCZLETUJIOPYDDPHHMAHAAJXZHBYKZTMMQQKFGXCAWIOSWOOEBBFGHOKJLOGAREUMSCKBPHHYBSIWVPFXZLITWXMDANQSTCK");
    msg.description.assign("LTJDWHERXRLJCZXQBKRNSKUPQLAZSMLIZAWJZJCTUBEUJKBYKQEMWLAZGGZFIDOWEHEJSGSIHVMUXIOGH");
    msg.vnamespace.assign("SNLGVUNCAHUYDUKMEUQAXJPNFKMXDJELCJDLQCRLFO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EJWERTWQAQCXMOVZSHHDFATMUWZFKQTZHVFRUQXYGBIDCKISFVRPXNPPVYNOTUTTEYHJDNMXESARFCBKZZPMFEWRGEBHQZSEXQJONWYTNUHXYXUKBTNDLEMVANVJGDPHJFOPGITIQRUGUYBWEXCRCFYJMAWSLKAEJPZGNAXDOUQIDKALBBJBWVNMOCPLOJKH");
    tmp_msg_0.value.assign("HUDTRVKEARWWGBYNVBOBXLYHBDQNVVSEDUIJQERAAOQNSZTQLOIEGMRZMYKZFJTAVOJPGSTKAKCIZQHCWHHJTSFLVJPGNRBQOYQWLSEXVZBUWUOLPSHBUJFRSTXVUUMYMFFHODJIMNZIMQCROY");
    tmp_msg_0.type = 94U;
    tmp_msg_0.access = 101U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KVIYKMXQHTHVTWDFLXSZBMPYIOWMCDJOPAVLFJGUAZEYVHTXQYJRNJWXKSPLKQMEVXMSIAMDQRYBRUGKOZRA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BVJJMSPNEATEIABMMBSXQKHVDPNLSXSYBOOSOCLFJIDWREGYUVKBFYNTMSFSTMDHKUIVEFNBHTIUZAKRTFWOMKQVEYIPLEUKIFFMHYPABDCGLCGMRQHCXQHUATULYOXOTFVGAIQQYHAJWMEGICVTHGIQGYRZSUTJVYGRZXFNRQJDWLRWJGACULUGZIYCPRRLCVOLDHNXJWZJDVKXABQSWNLEF");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.800560646546;
    tmp_tmp_msg_1_0.lon = 0.867049073261;
    tmp_tmp_msg_1_0.speed = 0.316440286623;
    tmp_tmp_msg_1_0.speed_units = 151U;
    tmp_tmp_msg_1_0.duration = 7809U;
    tmp_tmp_msg_1_0.sys_a = 17514U;
    tmp_tmp_msg_1_0.sys_b = 39709U;
    tmp_tmp_msg_1_0.move_threshold = 0.322236032686;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RemoteSensorInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id.assign("JCNPDGYARPSTCJSKIBKWDJUUHYNRAXACEVFPTBTIAQQILPYBVMGFHLHRBRLRHCYWDHDGDZCOGFVFJHOOELMHGXLGELCIAIBQJQXLNBAKWZN");
    tmp_tmp_msg_1_1.sensor_class.assign("HJFPAFGBNKNJKSIENRAKDXKZUSBRYDWHZCRKMJSQPLCUVUFZUEPEFLKAPAEAXPGBHRRPBOWYFLZMTOLMVCSACCTIDGPOWVBYZMYJMYVSDIZOEVPUWQNUFHLGGOZGTAXQPDCXMCKMDQHBFTQHTLJQJNJWXQNLWDLPDBKEMZNYACVEIRVHZESTMDNTFOXVGWINZWCXHOOBKFQTVXSREXJIORCGHTTWISRAUUWU");
    tmp_tmp_msg_1_1.lat = 0.780923310515;
    tmp_tmp_msg_1_1.lon = 0.885260289839;
    tmp_tmp_msg_1_1.alt = 0.98484383887;
    tmp_tmp_msg_1_1.heading = 0.81191403508;
    tmp_tmp_msg_1_1.data.assign("GCOTSITWBSUCFVCOVAOLXLTMVTRRNXXQLPFAHEMHXZIVWODKMZNU");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Event tmp_msg_2;
    tmp_msg_2.topic.assign("GUUOIHRIUGOWUJJWWANLISYHUDDHEBZQGUUSTVMHYBNVZRWMRPPSIZXXRPMVZIXNRZKRQDOVDKYFYUNBMYNSQIPSJHBARPFSGNKCDGQDCBLLKKPAGOOTWMOUDLTBVQJIVKHLBFMOWRIFYADARFGIXDWSXEGPFLONEACYJEBCWOJKEZJLWTHACK");
    tmp_msg_2.data.assign("THXLDVFEGRCBCQXEHZNIKNRPOJQDJOKQUDFGWTIJDLXAAAOUAYYWQJYVQQGOJOZAFEJSMCZPOKRKLNFNUTUHEYQWWTYFPVNOXOIJFPZCDCVVRAMQRTODXRPPBLHCNCESNLKSQCMVUCIMVTMNLJDAIVUBLVZTGYDGUHQSRZWMDMSUEEBNYXBBXHEMSPYBMGASTPKPGXSSRRCHZFWXOZFYLIKUGHBKAKIUWBFWLEZRZI");
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
    msg.setTimeStamp(0.237095993775);
    msg.setSource(48941U);
    msg.setSourceEntity(178U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("HUSJULMXVFSADLRMDCNECHEQYBPRBLTAWXKYFTSVGCNM");
    msg.description.assign("BPPISHBLGGFBPDEDPPSKJMAQEVKJUKQIFGOQMZQJWRXNKCAPVVCDLVCYLSIUXRKSOBWYSQIAUJMTXUJHYTNHYWUKIMXITDNNZXLTVPDUGTJBSMKDZCEOWGEQWGDMITBRTOYLOTSXFRADKUFALAVOBEHBNQJBNMYIOBDQLCTJVMNNUGZKGXRRJYEWCMAMQTWAOXAHHWOFPVXEJZOUEGIWVSFNHL");
    msg.vnamespace.assign("VMNMTWMCRNSHSWWPDYCINQRZXJIMGTXTXYVUCIEAXUKZDSUKPSSEQYUKLVOYKXJAOTFZMSRIGBTZXYAYROZKNTJWAPNKNRUEURJZLETKJCABELCZLCEHUFFBDTGVPHDBCVLSPQBQLODBKSZDQQYGECGJQFZSHFYNVTERINUAERRPJNPBDXHDWOFEAHNGBV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UGWLJJOFXCKKHZZTMOEPMOYBCVXGQSUMLEPRVDFDZQGGKCAFWONTJAXHPRQOLSHBZQKOXAVBSYVTTADPEAYLVREUVIIZZJRIUIBMISZXUWWWLFHEOUHXKTC");
    tmp_msg_0.value.assign("QVWGEAFWOSXPJWKTKOYCSNNCTEGDYGQOTGSZU");
    tmp_msg_0.type = 164U;
    tmp_msg_0.access = 47U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZEZESBBNVRYQFIZRUJDEWTHUSUDVWKIQAIIOFOMTIGDF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JCISTIDMFYSQHLOHPUNATPMEAJNLWMJTUJBDCVRKRYHQJFFABMTZELPQQYPTWZJEGGNPUKOFKTRUPKYQDBSSTBZSSHJKQYIELOTGFXFRBQBVYUKLYXVPVMBHHSECCYFKXCGBLRHXAROZIWOSRKDBZAVUIEDGIGNWIQPLJFWNJXZG");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.390208744096;
    tmp_tmp_msg_1_0.lon = 0.780397822974;
    tmp_tmp_msg_1_0.speed = 0.12284117961;
    tmp_tmp_msg_1_0.speed_units = 23U;
    tmp_tmp_msg_1_0.duration = 41956U;
    tmp_tmp_msg_1_0.sys_a = 49095U;
    tmp_tmp_msg_1_0.sys_b = 18712U;
    tmp_tmp_msg_1_0.move_threshold = 0.965657537756;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CompressedImage tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.frameid = 89U;
    const char tmp_tmp_tmp_msg_1_1_0[] = {-20, 99, -87, -87, -99, -126, 15, -106, 26, 98, 2, -109, -92, -42, -92, -124, 109, 86, -47, -127, -40, 93, -2, -44, 98, 79, 81, 46, 87, 57, -126, 57, 126, 99, -93, 8, 60, -9, -1, 35, -80, 124, 57, -107, 50, 119, -103, 73, -6, -19, -19, 15, 45, 108, -125, -126, 9, -120, 100, 103, -15, 39, -98, 2, -15, -5, 74, 102, -30, -1, 88, 39, 77, 73, 108, -69, -63, -109, -114, -109, -65, -8, -49, -10, -32, -107, 102, 59, 77, -104, 112, 97, 34, -11, -96, 24, -99, 43};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LWJPIYLKIYVMGVTOMCLBWFHMSIZYALZZMRUDXHCYTZTJVOFWBYIZAFNMEWOSXVRNGOKLKSQPRTODRJFEDBIVWCMHCZSVIEWXKUPTFRLDETMLKUAEGNBHDFJQGHNSWOZZQGCSDANYRBKESRXQBHLBUDJCRGRQQPJHJUBBHCIP");
    tmp_msg_2.dest_man.assign("MPEORJVKAMICSNBSUNMSUHWVFDBTYLPGQKCLFDLOOICNSXZQHFVLSPEOSQVQTLCE");
    tmp_msg_2.conditions.assign("GUEPQONLIEOEVMHYGSOASNTBNUROCBDUITVBVADWZHYVENACNUGMLLCPUFOWCHBIWIDXJMLEQKFRCAGYSRFTAKLYRGTGXTRVIPZW");
    IMC::Abort tmp_tmp_msg_2_0;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::Target tmp_msg_3;
    tmp_msg_3.label.assign("AZKKKUBADEJIQPWGJNMTYNOBYYSICTFCUBEYYNGYRHAJDMYTCRQZSJCEYZCHNHDRQXETWZOCEEXUWHBKGPWDSKWJJIMXBVIVTVLXTQZFHQZQUUSDLEPVPPRFRFXOZNCKHMLWTVZAACOBLMIAMAWUEKZVHMROHLILQDFBIU");
    tmp_msg_3.lat = 0.288844315093;
    tmp_msg_3.lon = 0.945331322589;
    tmp_msg_3.z = 0.69870352183;
    tmp_msg_3.z_units = 160U;
    tmp_msg_3.cog = 0.80823183525;
    tmp_msg_3.sog = 0.820297694288;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::EulerAngles tmp_msg_4;
    tmp_msg_4.time = 0.82674843867;
    tmp_msg_4.phi = 0.236756971393;
    tmp_msg_4.theta = 0.479979892194;
    tmp_msg_4.psi = 0.251765796589;
    tmp_msg_4.psi_magnetic = 0.982712490057;
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
    msg.setTimeStamp(0.518957234996);
    msg.setSource(9933U);
    msg.setSourceEntity(145U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("WPPKCKSMSGMWHCYFSQOUVCMTIHWZIRORJVEGLWACZKCWNJRJLZDDAEURGDPIIASTQTLDYGOOIMUQDPJVKKQQNNHLHIIAHYORREFJOVMGQFQFSSTLXHGVAZJNDEKCTIZHB");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 54593U;
    tmp_msg_0.lat = 0.245912414216;
    tmp_msg_0.lon = 0.0958295366922;
    tmp_msg_0.z = 0.288697904649;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.duration = 3453U;
    tmp_msg_0.speed = 0.629767236466;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.type = 66U;
    tmp_msg_0.radius = 0.246481627743;
    tmp_msg_0.length = 0.0261375779803;
    tmp_msg_0.bearing = 0.857927375719;
    tmp_msg_0.direction = 78U;
    tmp_msg_0.custom.assign("UCKDNSXJHRERSZPPAQFZYYZMIHORDMKRNIEOLGZGEGNTCHTTWHJSFVOUYFGOFADOUVRLLQYNIWIPQJG");
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
    msg.setTimeStamp(0.684007187264);
    msg.setSource(32245U);
    msg.setSourceEntity(71U);
    msg.setDestination(11561U);
    msg.setDestinationEntity(3U);
    msg.maneuver_id.assign("ZNLZNCCQNDYIXXRHPXZKUCZBWAEGVRLIBYWAWSBSTPQVYFRTEAULVYKORDDPZNVUBYGEZNJKGOVBCMIOKKNFPQASHUGKGJGIWRRQIWGQWILIFIMKXPTHXSENCTXGJWB");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.705350004949;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 16746U;
    tmp_msg_0.custom.assign("GTZNHDJDZBGEXTBHLCFXJICRVEUBKXVGAZPBZKOUDKKSGFUUWICTNCVUMDYNRBRAWTRLHEURWOSGHPXZX");
    msg.data.set(tmp_msg_0);
    IMC::EntityState tmp_msg_1;
    tmp_msg_1.state = 148U;
    tmp_msg_1.flags = 254U;
    tmp_msg_1.description.assign("EJHZOIPKTQYTOSIRVYNRXCGFRXWZYCQPSSANDAZUDCCOSWYKHRSIONXLYVMAJALUTVNBICLHPJAAPGBNHGNMUBTPAKKFBKUEHPDRJUMRZWKBZKPKDXFOTJNFIOVQWCTMCNVTXZVDWGMBSOKWHIIUUKUVXWETGFJAFMBMJPFRLBGMRSJNJLQCVEQGAU");
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
    msg.setTimeStamp(0.821015773957);
    msg.setSource(62757U);
    msg.setSourceEntity(4U);
    msg.setDestination(9637U);
    msg.setDestinationEntity(17U);
    msg.maneuver_id.assign("TULKAKGMPABYGOHTGJQRZZLTEIEACSJDUJDNYEESYXMHNTSYGAQMUMUURQYFCHWKRFVNLYXXKGAWCWSVODUICPIPWLZLFGXLOFIYVNQXARNLPEIOEBEZQOHHUBGJVXISBLASQPTQZRCFOUGDFBBZKFNJGCKQSMCRPXCIRMOFXOPTMYBZAIHUIVSFSZE");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 40536U;
    tmp_msg_0.lat = 0.989443692355;
    tmp_msg_0.lon = 0.561263382006;
    tmp_msg_0.z = 0.898951506746;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.pitch = 0.246394139218;
    tmp_msg_0.amplitude = 0.0190416496499;
    tmp_msg_0.duration = 41235U;
    tmp_msg_0.speed = 0.518373096215;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.radius = 0.660119418527;
    tmp_msg_0.direction = 226U;
    tmp_msg_0.custom.assign("UVISQYXATNOXJENVCWSHISPKHVELRQMZSUDFCMTHPVIRJGCVZYRJXTCDGKQWBHEKZRCMMVZFFTHHAYXKPQJBSFCUAOZBNUBLQWSZFXMSNDSDWBLITODBLQLGKPHXKGUNWQSMIPBLLWRFEEVYROHBNQFEYJVIYMUJAKRIEFLYMOCAQZOPJFGHZDJUEFDYUOWPYJYWN");
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
    msg.setTimeStamp(0.623488245277);
    msg.setSource(32245U);
    msg.setSourceEntity(247U);
    msg.setDestination(61148U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("CHEVUFHGEUSTERECEBLVADNONGWVBXQLFLWISEZHFQM");
    msg.dest_man.assign("DPQLXYEKNOEGMZLVHAYKZ");
    msg.conditions.assign("SIDQYXWPMBHWKTBPXXHOYVWIDKPBRCVATRZVFQJYSMMUGDMUPWQVJKJGZDYADMYDHCZUICOZVRCXFFPTNYOOJLCKYVEPNBTUUASJIQTRNGQXGBZGLXKESIVFNXJQHAGRBKFPOELKALWFJOTZWVCVPBORLWSRCOCAFIQRLYNEELVDMIJQWENSGUWHSLOMTBWLCUEFBHAESNPIXIZUZYDMMURXJHBOFSPCDNNEUQEYADGAGTKTHFMKJLKSHARH");

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
    msg.setTimeStamp(0.164840296149);
    msg.setSource(36094U);
    msg.setSourceEntity(100U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("TELZLUUVPOKUQKEXCDQYXZRNMRVYFFLSLYYXANSOHRTCZSMCIKPEDSKNLHBCSKUOIMWXTBRFEECLPTEVLDAPENXOJTQAKRZZWKDWHKNGZWYYGVCHNUAOIIHGSAMMPZRCPEBJAUEMPQJNWOHWXIWGIJQBXPNOUXBQRLBGCFNGLVVVAGTVIZXBOFTFJPJWDSW");
    msg.dest_man.assign("WIOWCKVRUTFKPPMYIMIUQDACYUFNMYRBKYOLWTSNVJCSDJKLMWQQMIELKUFVYZVTKBMNNLBNQHXGDWVWJHWGVHZFHSZAPZPJUOPEAQQZCXVNHUXCTYIEKSTFRBDBRYFTWXUZFMCGFVLPKAGKNWSGOQTCJESTJ");
    msg.conditions.assign("ZFFVJSXPMPNDSDLVQKFJKHCPZAUPUUSBBJNGODBYTYOARRMWBXZJDWCSFTXJNHRUMEQXRWMCKMZJMKYVEMXUFILLHXXREMGCVNMTHAREKSVFBBDPDAYKLGQVAYYCOLQRLPUTZPIKEJLXTYDIULNRSOWIKRGQGDXXONTYBNFIVHSEKQHLUJGQOAYWEBGITGG");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 77U;
    tmp_msg_0.step_number = 199U;
    tmp_msg_0.step.assign("HEPMUUWMOUJGAQUPGRAKIJSLEMTCTVOKQLUZJRMYDMTGGPGFPODEMMZUCLBYDJEJLNVZADIUTBWANQSYWRHEWJVBLFSHOL");
    tmp_msg_0.flags = 127U;
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
    msg.setTimeStamp(0.450362369452);
    msg.setSource(61507U);
    msg.setSourceEntity(93U);
    msg.setDestination(62063U);
    msg.setDestinationEntity(225U);
    msg.source_man.assign("JSUILNGLUPZSXIWYXRTCEZDMZNMQWVEZYBDHBFJJLPUMQKYGOMTWPXZDUDVSPTFLKDTSEMRAKYGCVHBQHSCTCYQVEIKAIFHDQNTXIKPWJOHRAWBFRKHTSSXVYCWEAWPTUQLJCKQLBWOXMJPMDJGXPSPONOSQCHEPEAWAZSYKUGGYUIOMKVNVXQGRFNLZZRZCVQJMD");
    msg.dest_man.assign("BPQMQLDWCBHBTZOTKPNZWVFIXJZSIGPEOZQEZABROTPFZWPRJLIBNEGURINBNNGRFLUKOJGSYXSCUYJAMOWCJUMHXRKNAHVRIYCDMFMLPCEWAIZADJYRZXPRLCNXYCUZTFRFKNDAFAKLACWQLUTISMQKQAJXVYVCACTNFDMSKNVOQIYMJVPKVDUXSUUHYBOHGYSXRBPEGGDDDXFTYEESVEJQOTHHKBLISBTUMFVGTGOHODVMHXEWGQWELP");
    msg.conditions.assign("TRIKZYHWLELXKGYHKFOHKYAH");

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
    msg.setTimeStamp(0.0440176762326);
    msg.setSource(32418U);
    msg.setSourceEntity(184U);
    msg.setDestination(58315U);
    msg.setDestinationEntity(137U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PDADEUVWEVHMYJH");
    tmp_msg_0.description.assign("QLZJRRBUBWQJAAXDXMCAIUVATCVVDTHXTMVNSQYGNORSQKSAANTXFRCYSUVJTLQBEHSLKLMZVEROPFSCPMPBRYPEDKEOSJZKHEUUCGCHWBQZYIWQIQYJGRBOOYEIFNADPKTPJBPFXHKRITOFORGBDYMCNUUFIDXZDTAIOWJHIWQPGFIHKVGZFWOCGZYWGWOVE");
    tmp_msg_0.vnamespace.assign("LBRCOALVCCAMNBPDHWBSRVMCNXOUSIEZLMZKYDHGTIATZXLKDNNYNUJFUAJJQNGECUGNVKMOSDJNNECVZLXWMVKWKTRVUOQWACZJJCGYZGZPOWWIFTOELJZJFYBOPRYFPFMYVGSSPTTFF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XDOZDNFEQIMDSBZTFMNHZYKLVEQHAUZCGKOVMKUXMGNWXVEKSNWOUGDRSTPBNJITUJOBTWVSHABQXQNMAH");
    tmp_tmp_msg_0_0.value.assign("VHLSNYSJPPJATXBVVPXMKVQREZNUORYMJOBOCRAEZEEKPTFWEATIXURHYEJQZN");
    tmp_tmp_msg_0_0.type = 58U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FTIOKHFXYTA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZZTJBCJETWGFALLNPHQKOKYQTHPJUMUSNLOZJWHZJWNIXOBQJCDGOMVANEPVDNSGJYQNDWEYLVXPKKIQBUPHOF");
    tmp_tmp_msg_0_1.dest_man.assign("QFTDJPBVPACSYTDBFXJMMLCTFGGLJQVWBEBVQIYSIYTOLNVFFMWDPTZCSRSFZIBMPGAHEZYAUWAOEJWWTCCOHXVIKSPLKMYREBLSLEQJQSSPSUQAXFAXWNIJKXQNOYTMDMOCDCYHHEPHHNZVLCQEXVRKKROIBHGRTPNDJV");
    tmp_tmp_msg_0_1.conditions.assign("JPLKKHZQQROJFSIKZLTCWCDFPYHBMPQCTSAVWYYFSURQREQJLFJCWWPFJHEUGXTMVAGQIMURMEODPAXSLNEEFOXEZOGNVMAUIBVWTKGULOXIVGOLXPHYRTCNHOBDXUBUBSTWBFSQEAIQKKNSXRTJNMIWDBGKDGXZOIZDNMRJYVVMYHPNFQGGIZARUNLPHMJSWAVDBLMSZDCTADHXNKWANJEYCESVTHFULGYZWBUZCPY");
    IMC::VehicleLinks tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.localname.assign("DOGUWSMYAZSTUHMIWPGOGXTMWWMMBHNMCDLOILADXEQYKFPQNRZNIBHPSIAZUAVCEDJFFJDNJGLWJCCIMCGKZOVYLIHXSVLIXMPXSTWJRYEURLQVJAUXXBVUCOQKAXAFSQHFBBRF");
    IMC::Announce tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.sys_name.assign("IMBYQBQPQRBSZAKQHOSHYKPJGGDMOEUIQFKCMWIRTPDMZBNJJCDXHXSUWFYRFEIVDLPLTLOGGUEYGKQTFHAKLUSNHHDESYMBUYIJCECNDXMK");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.sys_type = 115U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.owner = 62770U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.765927295342;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.0402541391097;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.height = 0.484622897478;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.services.assign("NZFYWCCKVJIYOIKTWRUDXSTCJEWPOXDHFKBNUPHMVFOANTBFGVXHVXUKDSIATJLNGXQXAIQGQVANHSPVYOSKBQWVIERQHRXLT");
    tmp_tmp_tmp_msg_0_1_0.links.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.755995995599;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 124U;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 20548U;
    tmp_tmp_msg_0_2.custom.assign("YBMCPDINJKAJAAVVSTCKOVWVCYEMXIUZZBTXQDJAPWSUJTKECIBZHSPNODFUFPQQTLXHRFIFLBUNGWEXGWMAHUTNAJUYYGINOLBMQNLMXNKH");
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
    msg.setTimeStamp(0.187097186879);
    msg.setSource(14715U);
    msg.setSourceEntity(217U);
    msg.setDestination(7104U);
    msg.setDestinationEntity(170U);
    msg.command = 216U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZFAHTZMICESAQVRMZGJONJGWIJMSPSSMQIJMDABLKTLHIXLHBAWDMXFWZZUOC");
    tmp_msg_0.description.assign("HJQNEXNKFDDHEOMOEVQXDMNTOUPLPQGDARHBQUCXWGTMNUJIQJIXAKFEIGCUPFTRWKDLBWSEUDMOIAOTHXIFKVAYOCKBIGYGMIUVGHWFKRLUJXCMXYQYMDNNPKZREFDSVKWSIPTCQSBWRNWPCWLNSUYYZJKEKRGXEEHVLBOPMYVPTVYBLBHJMJFYAOYSLVXPRFSLMOAFUBZSTT");
    tmp_msg_0.vnamespace.assign("NPUQFRSYKIMWMZYJDWRPSLEOBVYLFFKUJUZPRPPRLTZYOOSCDMJIRFGEFENGRTONRJRAGQGJVMBKIVWKZMCMNSICIZNQELSZXHVHKOECKEDUXHCWGUBYWHBBYDXTFVWHAQIRZDUFLJNRJQSTXTPWCQTNZZCTBJXHZXPAIVADCALLQDDIPVNLJVGTDNVHXAMMYMPUBEEQBQXSUJFPFDSI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FMMFHOIPKQOVKJGBNAVRICJKZWPZZTZXDQEJRHCDRNUQALJSCWMUTPUOMNVBZTALWZPFIVXWVBMUQXCEVZUIXOLXXHHZEQGBQCKFGIRSYMVNGOJISXJDURCSYHGFYSHTYATLOAKUXWGHNNQLIDBOPLJEPNJCUBDRJVBGFZUEOBRQDFMDSLQYPSEKYNZR");
    tmp_tmp_msg_0_0.value.assign("SGKNJHWMGSOOZURVVQVWINZIHFDVQKKLRFOZAIMUROJOKQPQDNPYXSBIGBHFESASVCUFXWHSPOZEJAQFBTEBGXLFECTIAAXBAQNYPOTMNADPWOHYCMPUZCIDUCOKQLUNYKJYWVTIXBVFXLRWLQUIJHDNQBBLVEUHCM");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 154U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VWVSXCQQAHJUTWZUYGYJFLRTTGSKHHABQBIVWTMCBAZHQOJGTWLRGKPMBEBROOZECKKAX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BGYUIEOPAVBLRVKIZQXHIRHDWSUOHSWYFZSAVXNICBSGTDEANQZHRVGMCSLXCQQSAUVFIHTYFFYYSYMOCRMEEHGVCQWLBKQCPANLVXKWZBYDIZWIUNSOLWMUBBZKKMRZPEGPMRPJCJPJZAXTDXQDJMKIEKUIOUDNJSKTLGCWENFZMJWAAYHYTIVBDKJXJTUDGPVT");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 29485U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.852909667781;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.35253110427;
    tmp_tmp_tmp_msg_0_1_0.z = 0.223517411778;
    tmp_tmp_tmp_msg_0_1_0.z_units = 193U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.580992668257;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 215U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DQBDGGPIAKAEATAOFQNLHYRATHTISUOVUCWFMKVYCUBYQRLWA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DeviceState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.0682379763479;
    tmp_tmp_tmp_msg_0_1_1.y = 0.428687958665;
    tmp_tmp_tmp_msg_0_1_1.z = 0.819538906888;
    tmp_tmp_tmp_msg_0_1_1.phi = 0.320039746805;
    tmp_tmp_tmp_msg_0_1_1.theta = 0.953541643732;
    tmp_tmp_tmp_msg_0_1_1.psi = 0.061733421722;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("YOROOTMSBTEIHDNTSCAOXGSIVUOPCPKWWMSPFFHIILKXJIIBOHOUXYRYNLFDYBMFZLUZQNMEZRPQUJMAUCWOGQZZLVSAWDTDUVOTRJRGAJFJKIXVFQVSFNLZIQCYXCMAPDHHUMSBWHMZNTMKXEKUECXWIXNHDLXGFCGUASVEJVRHPBYFTGLERZKEHYNJRYQKBPVK");
    tmp_tmp_msg_0_2.dest_man.assign("EBCNKLWAPRGTQXOAZZFUWUXAXFPKPSLTKWJHXJYYOMDZDXDYTWCEFGCBJHEOANDSRJDCWLMENAJCMOYCTEJJNJZPSSDRXBHLKNBVQRFPVTIXFPMVYBFEGXICLDZHIPIPASLHYEKGKQDSMOVOHQHVIBFPMVMSQL");
    tmp_tmp_msg_0_2.conditions.assign("FYWBGEOUOKHAXJZJYSJVXKTLVLEEYKEOPTIKQGQRWZMQPVFMFNFSNEUGCCMODWLMQCASTKZJVKFSNHQVZSDQXYODFYAEUBHGVADXSTGIZRAJWKILPWARHBDBYWILZHXUXCLIKNUQNZRZTRPTGPGGMQFCEUZNBWYMITTGLTUQHKPYXDCUSOKRWCVOUSSFVAJMBIRMBRNHXOPDYHOWHITMVIDJRPNNPSDCXIPAOAEJVLMLJJAFBHBFRU");
    IMC::ExtendedFormationMonitor tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.dist_min = 0.699968293728;
    tmp_tmp_tmp_msg_0_2_0.ax_cmd = 0.715270782721;
    tmp_tmp_tmp_msg_0_2_0.ay_cmd = 0.704204734994;
    tmp_tmp_tmp_msg_0_2_0.az_cmd = 0.642334938042;
    tmp_tmp_tmp_msg_0_2_0.ax_des = 0.836671583982;
    tmp_tmp_tmp_msg_0_2_0.ay_des = 0.10392220812;
    tmp_tmp_tmp_msg_0_2_0.az_des = 0.41386417691;
    tmp_tmp_tmp_msg_0_2_0.virt_err_x = 0.581911245613;
    tmp_tmp_tmp_msg_0_2_0.virt_err_y = 0.252232767553;
    tmp_tmp_tmp_msg_0_2_0.virt_err_z = 0.170898381412;
    tmp_tmp_tmp_msg_0_2_0.surf_fdbk_x = 0.10152105188;
    tmp_tmp_tmp_msg_0_2_0.surf_fdbk_y = 0.101027922566;
    tmp_tmp_tmp_msg_0_2_0.surf_fdbk_z = 0.394391925142;
    tmp_tmp_tmp_msg_0_2_0.surf_unkn_x = 0.0370012431366;
    tmp_tmp_tmp_msg_0_2_0.surf_unkn_y = 0.679473116491;
    tmp_tmp_tmp_msg_0_2_0.surf_unkn_z = 0.808704036633;
    tmp_tmp_tmp_msg_0_2_0.ss_x = 0.0523803532767;
    tmp_tmp_tmp_msg_0_2_0.ss_y = 0.194638643303;
    tmp_tmp_tmp_msg_0_2_0.ss_z = 0.0829470896682;
    IMC::RelativeState tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.s_id.assign("SYXPWSEWIXDBOBHLBLCADAULGCMMTGFVUCMYAHSJPJJUPJURIENAUKNEINVCJMALVSPZWTFSFVXQNVKCTWBKOEYRAARWY");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.dist = 0.860166781953;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.err = 0.698483644548;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.ctrl_imp = 0.941347272898;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rel_dir_x = 0.569988112174;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rel_dir_y = 0.0418934075571;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rel_dir_z = 0.303082385944;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.err_x = 0.549800520886;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.err_y = 0.672342962811;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.err_z = 0.0205996512026;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_x = 0.195508454045;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_y = 0.600835516501;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_z = 0.914834653187;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_vx = 0.13246642259;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_vy = 0.493801408558;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.rf_err_vz = 0.385965151374;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.ss_x = 0.747158182058;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.ss_y = 0.626903095836;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.ss_z = 0.17175916781;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.virt_err_x = 0.490534558942;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.virt_err_y = 0.0899453293312;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.virt_err_z = 0.743149272434;
    tmp_tmp_tmp_msg_0_2_0.rel_state.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.797452451067);
    msg.setSource(57918U);
    msg.setSourceEntity(83U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(171U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ODZGNKEUZEVOBXGCTTRGUCYTIVLYQCJHAPHKKODPEGEDOYJTDEKHVWGSWOTZVDYNHCGASXLWNSMGURXYIPLORAQFCIQEQDDIQQIVNNQRSFWIFMBTTMJXAZYBVXNBIBSLJODZKIASBRSEKBBWTXHROVSLXMVQOCQNCFUWWNSURKJPJWFERWLGJHBNMAQ");
    tmp_msg_0.description.assign("GYGYROFZVCMVEJDOBJUBBFXLVCPI");
    tmp_msg_0.vnamespace.assign("BKFFWHDOXKHQJQNTNJRWTSSOFNJOLWGKAFQEVABTGNWSCQFEXUVIDMGCHFNCPEWNYQTWDTUYLZZQLVKCBOYLDSVZTXRXSRCRYDMOAMZWMQPFXFGRSVEZIOEPGAVHOSTHAWJDKMKWIWJMKIMNEGJEFMVAVDZUMCNSYVZTSNIRYPDUXIBHAK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PEAGWCJHBEJARSBOTDZDUSCCTFFIJPUUGVEBXGXNCODPZAHYXJQQKQBTFQGCKTAYPNUQOMZESBPQDWMIANUILNGYUMRMZXLVYPKTFNAJFWPQGWPUYBQIRRFN");
    tmp_tmp_msg_0_0.value.assign("OKZHHIOZYFMZJEQCIRDBSNBOJNPIBHVJOZLEBEWWAKWHMTYNOGHAMMLORFROUMRNNUTHHLAQWSZYYUMILEKQXPDNWTFQCGWCZZFFIBSVTFSBGBVMEWNXOXFQTMVJNQZLDAFSJSZSXSLKJFTBEOVVUDSPCGBWLAEYPKX");
    tmp_tmp_msg_0_0.type = 125U;
    tmp_tmp_msg_0_0.access = 163U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YZGWOQHPMTQNUPCFIWUCBLUBVOEWMWLXPDWAVLTYFVXXKFGSMFSJGYNSHPMPHCRDYNDKOVIBOLFTLNPCTKOYNKGLLEAAMMFAZSZISVCTFTSMOECLCPAOBMJHGHEKRGQUNYVFPQEDNQJBJOSJBPREHAICENSWEZGRDBUZVIWPDAJNKSHYD");
    IMC::RelativeHumidity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0780716584028;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.391941213187);
    msg.setSource(49534U);
    msg.setSourceEntity(200U);
    msg.setDestination(61439U);
    msg.setDestinationEntity(186U);
    msg.state = 53U;
    msg.plan_id.assign("CZFTKPAFGRTTRWVYGTEENVZEDLNXEFZKCJFLXAWLTWTPVKKPYQSJXUQRDIMDJNWVCMUTSGZHU");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.639618432816);
    msg.setSource(43120U);
    msg.setSourceEntity(11U);
    msg.setDestination(20024U);
    msg.setDestinationEntity(119U);
    msg.state = 44U;
    msg.plan_id.assign("MRGYBWXYNZSXRBHUODCGEKXYFQYPSNWLFNOZFYMUBOQRATQSSSZJKQHVRMIIFFGPFNWNVBDGCYHIAUFJEHMVOZSACHGVRUTNYHVMCPCKPFJBKVLTJWGTJNGLAOUOJWEXETRLNZJPQZXZTWEZPILDRISMLOJYDUJIKZAEHGACDDDLBBIEQDBMQRSWXPRLPSCUVTYXAGKOQVXVUEDQIPWJWXHBXNARTTFCEBGEWKMNUDZPASOOUYQLFMVAHKIL");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.637808414998);
    msg.setSource(45751U);
    msg.setSourceEntity(12U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(84U);
    msg.state = 128U;
    msg.plan_id.assign("RTNTSSBIDNQWWPSJSFFUQIEHKRCAOWMFZEPAVLUAGNALQCNMTOMQKXFPUUVRFUDMXVDVPXMJCRUHATGLYHLRNFBBBSKVZWJEWJBYMZQVBWQYEBGQDDIPHSQOMMCHNXHCFEORIKBNIYPAGL");
    msg.comm_level = 79U;

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
    msg.setTimeStamp(0.69916613419);
    msg.setSource(30596U);
    msg.setSourceEntity(59U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(217U);
    msg.type = 114U;
    msg.op = 71U;
    msg.request_id = 20613U;
    msg.plan_id.assign("WSMNKDOPBXNBMTSJLNOMJDIHIRBXEAYJCLXCCQKHVUKCJBVVMNHUZXCRTVMZMGTFPIRTKSPYACOWBGPTOFHGCFTFBWLLGIOUBATPEJXJIDPHAAAQEEESZAYACQZGMUTDRSISZUVNNIHWBPQEXGWYWGDDWTQHWWYQERCZNGXPLNJGNIHVMLCVKKVABFJIEQZHOFXVXRYIZYJLHRRDUKKQZNKWMPSUDOOBSURFP");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.923718726937;
    tmp_msg_0.m = 0.307955656413;
    tmp_msg_0.n = 0.146429874606;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LNDPXOQXONKRUCKFHDKGHHERYLFENCPQRZIIFXCCEQBJSUKDJTCBSXHYJOBGVNTGYPHNLSNTZLKMTHAJSKMBCKJBCYEOXXSMMYEPQQOINFLOOMVSRVFQNVBWGRWALBAOXWBQFZWFMZUTSAWQYDUIGEETWIOZXGHUFJJLEKHAUDMLL");

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
    msg.setTimeStamp(0.065880282009);
    msg.setSource(43696U);
    msg.setSourceEntity(60U);
    msg.setDestination(47959U);
    msg.setDestinationEntity(206U);
    msg.type = 201U;
    msg.op = 95U;
    msg.request_id = 2511U;
    msg.plan_id.assign("RPHYVNZIFLQDVCFHZIEMNSWNTVEYKUSVSFK");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 6180U;
    tmp_msg_0.flags = 250U;
    tmp_msg_0.lat = 0.985280292276;
    tmp_msg_0.lon = 0.863414590794;
    tmp_msg_0.start_z = 0.996233827106;
    tmp_msg_0.start_z_units = 154U;
    tmp_msg_0.end_z = 0.145553249356;
    tmp_msg_0.end_z_units = 223U;
    tmp_msg_0.radius = 0.985108883687;
    tmp_msg_0.speed = 0.208539276993;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("ADZWHWZZJUOOCLZXQJHFYIUJLYRTVDTKXUSTAZJTTCEDXBQCDJFSEZMFVQWNAXALQGOYDTKBBCMBCTRGWFXLCTCBRZCLDKQFKHFGPHVYUNGSYSNXYOANTEAGPDZCUYNVNWVLKUMKMRKJXBVNKFJDSNHAZRQRUIEPYOMFXFRQIOIZBYDLBSJPVIMBHUHOIYIJEHGSQWEAOBNEPJHMFPIIKKGQSUXGWDQLVAPSLMCSHEWEPWEIR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DBTPWUGJWFKRXHQSGYIFYMKYYCFOETAXCXNSWYZLLQZFKMBJCNJGZMPGLE");

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
    msg.setTimeStamp(0.647558105542);
    msg.setSource(32246U);
    msg.setSourceEntity(233U);
    msg.setDestination(41633U);
    msg.setDestinationEntity(66U);
    msg.type = 243U;
    msg.op = 223U;
    msg.request_id = 54966U;
    msg.plan_id.assign("FWRPNUJYYGGNDIMTVRSKYZZIMGVH");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.969025026413;
    tmp_msg_0.x = 0.221912872901;
    tmp_msg_0.y = 0.457878843891;
    tmp_msg_0.z = 0.00121540695128;
    tmp_msg_0.timestep = 0.0850108706983;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CTDYPIDSQBEOKBHFTWHCPSFFFVGJJIVZFQJKOXDJIGEJRFFIHJMHIFHDELOKEOVXATBDHFSUUGDBDZLACUAWNJBVFELHYCPNMPGSPGHQKHKNI");

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
    msg.setTimeStamp(0.88237277381);
    msg.setSource(32723U);
    msg.setSourceEntity(95U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 49310U;
    msg.plan_size = 1910168970U;
    msg.change_time = 0.603742546672;
    msg.change_sid = 44548U;
    msg.change_sname.assign("RLRKVCWZZEBGIZNWTRWCWKUYGFCIPQUHPYSBIDSWOKJRBXYLUJNNNAIVKKOQCZZPOWUFIRFNIMRQTRMLKYAHGGJVWVRFMBAUQIRHTQZHADUOVJT");
    const char tmp_msg_0[] = {103, -62, -21, -105, -88, 82, 40, -2, 126, -79, -7, -44, -26, -19, -90, -33, 80, 92, 76, -113, 116, -12, -34, -25, -71, -102, -54, 6, 11, 52, -36, -93, -127, 41, -12, -68, -37, 82, 16, -96, 54, 110, -92, -82, 19, -57, 94, 74, -121, 125, 86, 30, 42, 6, -18, -7, 5, 12, 110, -40, -123, 86, -12, -80, 123, -28, -78, 53, 100, -2, 21, -3, -82, -3, 62, -67, -5, 91, 99, 99, 36, 99, 29, -85, 109, -79, 72, -39, -39, -43, -26, -91, 45, 85, 108, 85, 64, 4, 15, -89, -23, 18, 82, -21, -105, 44, -100, 32, 41, 92, -34, 41, 48, 45, 51, -43, 46, -9, 5, 109, -69, -87, 104, 83, 106, -106, 30, -127, 78, -117, 83, -31, 19, -125, 103, 3, -49, 107, -73, 57, 109, -87, -8, -46, -117, 96, -101, -46, -30, -66, -30, -125, 79, -122, 104, -23, 83, 8, 31, 36, 92, -21, -81, -68, 118, -126, 74, -109, -121, 62, -89, -74, 34, 23, -36, 11, 115, 66, 86, 86, 88, -109, -90, 12, 67, -22, -58, 49, -43, -27, -90, -80, -14, -43, 85, 12, 5, -89, -46, -78, 126, -29, 44, 107, 124, -108, 19, -6, -60, -104, -25, 63, 7, -82, 110, 113, 102, 44, 89, 67, 78, -77, 95, -48, -44, -106, -64, 121, 44, 56, -32, -28, -82, 70, -15, -91, -36};
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
    msg.setTimeStamp(0.984268030973);
    msg.setSource(20446U);
    msg.setSourceEntity(22U);
    msg.setDestination(20782U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 11747U;
    msg.plan_size = 1248063446U;
    msg.change_time = 0.0285604222387;
    msg.change_sid = 33913U;
    msg.change_sname.assign("CKWUPAVOLSABANKFGCOFBFCSCIRCVXJALWIDHXTFIARUHUZDKBMYXARLFGMRYCJOSZYTEWILBRPVMIZXNVNSDPQKSUWJGDGINYIXWXUURRMHHAUNJYMZKXGSZGMJSRNJDIWZTHTXOMSEQTYFPECTQMWOZBVUVTBETFFO");
    const char tmp_msg_0[] = {58, -27, 76, 95, -52, 111, -67, -99, 57, -59, 30, -98, 14, 46, -23, 30};
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
    msg.setTimeStamp(0.479121561893);
    msg.setSource(30755U);
    msg.setSourceEntity(20U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(23U);
    msg.plan_count = 11092U;
    msg.plan_size = 3939205823U;
    msg.change_time = 0.685363875979;
    msg.change_sid = 39485U;
    msg.change_sname.assign("CHTLFQSDRIFODVCBUYBNUCWVWIEQCKLPMZAQ");
    const char tmp_msg_0[] = {54, 88, 80, -125, 112, -60, 119, 87, 62, -104, 12, 15, 3, -86, 105, 107, 0, -32, 7, -124, 89, -48, 72, 13, 103, 20, -104, 53, 72, 2};
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
    msg.setTimeStamp(0.5709706352);
    msg.setSource(9928U);
    msg.setSourceEntity(236U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("XUBJAOEDWFGPQIJMJUCFYPLVZONPHQBDGQTGXSTLCUHZMNBWSNQGEIOEZJYADUTBWFRSISKKBBJRUGQMA");
    msg.plan_size = 36946U;
    msg.change_time = 0.284686500792;
    msg.change_sid = 34585U;
    msg.change_sname.assign("IZQAGAPORHMXVQYERVSKMPIPLIKCLFTAYDFCZBEUOIVJUHGEPMILCJAZXBOAWPRMWYQHWKWDRTJUSBDMOOAJEKBSDISHOGNRLHRNYMHBV");
    const char tmp_msg_0[] = {-32, -90, -69, -117, -125, -13, -114, -60, -24, 116, -30, -25, 65, -35, 72, -54, 47, 13, 35, 104, 21, -116, 80, 99, 8, -60, -13, -69, 102, 37, 35, 97, 102, -52, -123, -126, 50, 0, -103, -93, 112, -113, -120, -88, -15, 83, 12, -72, 74, 69, -82, -42, 120, -65, 71, 97};
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
    msg.setTimeStamp(0.610391997236);
    msg.setSource(23436U);
    msg.setSourceEntity(207U);
    msg.setDestination(21617U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("JGECIEGPQWSVMGWCTSLZDEHWYSVIAAKKOPEYJIUNAHNFOSQVRFXWLREUMODCFCPQQDVMZDMUJHLXITZBUHROZLOAPLEPCFLHKSJHYUSAYEBMGVRPWFFWHVUDTTSMWYGHBLSTEZJOHBPXBNNRQYYNDEITTOUQMCMVXAXIJWMJNMBYKZDDXNJGFCIUTRBFKKRRNQSTJZPOOZVLBICWXNLIBDPUBSZUWKIFKV");
    msg.plan_size = 52364U;
    msg.change_time = 0.293979530635;
    msg.change_sid = 50142U;
    msg.change_sname.assign("ESVXSRJXZKXNVGHJWEDKPEZRMUKLYDZDPICHDPRYJFVNDSPACQDUKNONKOWUEQWDFYGHJTZLEYZCLTJSXMTONRBWKASMOPQARLBFRTERHYCZPQHOBXWXUCNLWCKABDFBX");
    const char tmp_msg_0[] = {-53, 85, -52, 10, -55, -85, 54, 33, 47, 14, -71, 114, 101, -126, 37, -82, 61, 39, -103, -124, -56, 40, -69, -99, 24, 62, 115, -91, -79, -44, 51, -98, 86, -116, -73, -61, 84, -15, -37, -72, -49, 87, -64, -31, 42, 73, 5, 88, -30, -107, -2, 118, -61, -117, -123, 91, -72, 105, -25, -95, 89, -51, 115, 115, -121, 53, -121, -114, 81, 84, 26, 66, -11, -82, 124, -22, -87, 68, 114, 70, 51, 113, -118, -46, -33, -67, -92, 103, 120, -64, -50, -66, 43, -95, -45, 23, 24, -103, -5, -10, 59, -61, -94, 18, 91, -10, 126, 74, 21, -55, 17, -32, -114, 44, -36, -93, -70, -5, -18, -60, -113, 64, 65, 124, 93, -69, -102, -15, 104, -84, 93, -77, -10, 64, 59, 18, -64, 18, -19, -48, -65, 27, -74, -73, -112, 2, 116, 60, -37, 85, 26, -118, 67, 72, 35, 77, -40, 70, 97, 48, 96, 64, 99, -64, -32, -120, 59, -109, -1, -54, 55, 27, 50, 31, -39, 111, -46, -109, 84, -115, -25, -52, 121, 19, -111, 8, -101, 57, 110, 40, -6, -20, -8, 37, 32, -124, -5, -17, -73, -48, -113, -9, -88, 8, 45, -89, -113, -1, -24, -54, -101, -36, -38, 32, 21, -15, -2, -12, -28, 22, 100, 57, 95, -114, -32, 62, -72};
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
    msg.setTimeStamp(0.00837562749553);
    msg.setSource(42401U);
    msg.setSourceEntity(174U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("IJLJVRIIGRDFREFVGRRUNUATDTSSQQZPROQMUBHFOEEGYPKHDECUKGNAFWJUKOYCYFLDHBANWSANNBKZBTOGYFSXINLZTJOGSAFBHVDVWRJXPIBZLQVRSXGCVOAJEQGHW");
    msg.plan_size = 57066U;
    msg.change_time = 0.514412604226;
    msg.change_sid = 24573U;
    msg.change_sname.assign("IIYDEVYSULRJYVGYSLLKERTZFMNSIINGDJBCYCQODNMUDXQTZANHOGOOZSCPCFLBXGDWZZAPVTWJEMWZQYKWTVZZOWBXUCIOOBKBAEGVZANEGXCXKVKAFOLWUYPKIGNDVLKPDXRUDQSURJNHTEPMKWFEHFTYHGFBOIJEBQNHVLHQRRXHRQSNBNBQUIPPFGTQPMQJAEYTECBSLMRXMHUPYRSSCMHJXVDKPIVJUUWKWJCGAISMFM");
    const char tmp_msg_0[] = {-58, 60, -19, 81, 115, -83, 55, -83, -102, -54, 49, 27, 115, 20, -115, 93, -70, 7, -32, 110, 29, -31, 94, -11, 2, -116, -78, -125, -95, -22, 73, -48, -17, 0, -107, -112, -104, -23, -118, -90, -3, 81, 31, -94, 5, 117, 83, -62, 101, 74, -49, -110, 96, -15, 63, 58, -90, 48, -25, 32, 100, -76, -75, -47, 121, -68, 24, -63, -33, -81, 28, -111, -75, 96, 70, -108, -67, -49, 81, -80, 87, -25, 66, 103, -60, 45, 11, 118, 95, 64, 20, 76, 6, 79, 99, 60, 106, 105, 91, -53, 72, 109, 32, -92, -93, 66, -55, -107, -63, 54, 57, 86, 82, -115, -19, -58, 29, -12, 47, 108, -68, 76, -85, -95, 53, -109, -53, 109, 39, -14, 56, -16, 67, 122, 76, -92, -63, -108, -114, 59, -113, 43, 10, -39, -93, 27, -81, -17, -114, 64, 81, 114, 100, 10, -12, 40, -114, 89, 115, -21, 10, -87, 24, 65, -26, -50, 22, 116, 49, 104, -115, 79, 119, -51, 43, 105, -66, -35, -90, -41, 75, -4, 19, -87, 115, -61, -72, 13, 18, -24, 52, 96, -64, -32, -90, 8, -38, 122, 96, -119, -99, 24, -114, -94, 109, -1, -11, 26, -75, 126, 121, -44, 0, -56, 45, -67, 84, -65, 39, 45, -86, 95, -6, 125, 104, 112, -42, 11, 56, -75, 124, 46, 115, 109, -60, -27, 84, -90, 1, -93, 29, 49, 18, 96, 108, 17, 26, 74, 62, 63, -46, -79, -29, 119};
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
    msg.setTimeStamp(0.828185852539);
    msg.setSource(55249U);
    msg.setSourceEntity(184U);
    msg.setDestination(13295U);
    msg.setDestinationEntity(31U);
    msg.type = 122U;
    msg.op = 163U;
    msg.request_id = 43533U;
    msg.plan_id.assign("IXGPQBAFZSEBUIXIUNPKBDTRVHCWOCDXXNWNEMOANHFELHLAOTCJGIUMPGIFSCKLEAYRT");
    msg.flags = 28830U;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.288896386088;
    tmp_msg_0.x = 0.284793314852;
    tmp_msg_0.y = 0.670690582804;
    tmp_msg_0.z = 0.371436896329;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CMIWTXEKPZEXSOQUROLBUOAWOKOSBCAGBXVDAVPIXZNQGUWVRVNLTKRNJNEQTBVRFVTPKZCKSVMPCHJCBSARJZLZJDURYNKCYAVEDPQJHPKICMMEAEWUNNYDIGIEKZMZYNTUSYMBFLTLGPOIKQDBGKBCEQTCIHMGNYWJFURBGJTOPASJJJAAXUUTXZGV");

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
    msg.setTimeStamp(0.0103300334505);
    msg.setSource(60499U);
    msg.setSourceEntity(17U);
    msg.setDestination(31379U);
    msg.setDestinationEntity(22U);
    msg.type = 253U;
    msg.op = 121U;
    msg.request_id = 21957U;
    msg.plan_id.assign("HGICKWWWTNWRYCVVQKMPCEJMLQEJJBRZWWUCCHBBLDGDYODKZNUNXHADXZMWKNJNRYUTOYPUMQZELYIQPXPZRRILMJZASXPTSARTQFVCZSUUTOZLFBDICSXQSFLVGRIKGWXHBYKTEBVDXCXPQICBEFHHOSIRPSUAFJHUBEYTAFFEQVMYATQAUXIMHGBNJGJOGMKIXDOLNOPZKWFVYOTESSHNLKNTJERVDULGWGAMAJOFDBGFCRAKPEPSDHYVV");
    msg.flags = 36703U;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 82U;
    tmp_msg_0.mode.assign("ZBUKBXXQDMWBETRLSWQZEIZYISQXLBKLKWFRJXVIMMWJDGPVDDUSNBCAAJSTOMVTDGTDFFHGMTXHEECSPQLANCAOUQYZYVAOLEIXHEULOPSRUKPNZNJNRORTUEFQJVZARLYTZNARGYHXJNMCODMRBVJQFOPUNUYMGJHSFXCBAWBCRSIEPOMNUPDBKSIITLIFZFZK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ABUGKYUTBANRMRHFFGXUQUDLRSTENTEHOGNCFWCWKOARNHPKBSXEPTLZIRPDQYHBOMMCQHVKVZPZOLSCFYIGRGEUQRPCIMJVACEFZXPPOBIESBLXTJHOCMFCCOFFDVDYCWOSBNTRNWMRTADWUGSJRJNMLXKAASGTZSALBZJTXSQFHKHXIKGMMNDAYZWJLNLXYPWEETSGXZQXJGIWOJZVAZ");

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
    msg.setTimeStamp(0.210780473045);
    msg.setSource(2288U);
    msg.setSourceEntity(200U);
    msg.setDestination(36734U);
    msg.setDestinationEntity(126U);
    msg.type = 231U;
    msg.op = 58U;
    msg.request_id = 55532U;
    msg.plan_id.assign("BDDUXJPSNXBTVOXKABPTZADBMZFBSTSXNYRWOTDBQRQJGDVCYGMIATLAPAHIETVHSNFYYWQWCUKZEXUJJZXBFHOXZJCUGBCH");
    msg.flags = 34420U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0781771513686;
    tmp_msg_0.lon = 0.272636336446;
    tmp_msg_0.height = 0.0858990332492;
    tmp_msg_0.x = 0.411940691286;
    tmp_msg_0.y = 0.259766284158;
    tmp_msg_0.z = 0.572405583374;
    tmp_msg_0.phi = 0.568846471761;
    tmp_msg_0.theta = 0.569791283616;
    tmp_msg_0.psi = 0.330207808638;
    tmp_msg_0.u = 0.531225619704;
    tmp_msg_0.v = 0.813888055705;
    tmp_msg_0.w = 0.960684743571;
    tmp_msg_0.p = 0.365260656773;
    tmp_msg_0.q = 0.566205757686;
    tmp_msg_0.r = 0.913058104224;
    tmp_msg_0.svx = 0.534125541575;
    tmp_msg_0.svy = 0.352720110242;
    tmp_msg_0.svz = 0.158886121124;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EQPXNNKJDISZKZYMVKKUTXBSUPZCTBHDMDMADFHHRFECTWVHPOIPWUGOYVBXDOFJVPASZRWGGIDKAFVFMPSRZPKSODKDYEQTMWBYMSVRCQEQSGNJLJNTLXRILARZCUBUJIHSALZCAGAYVEFWUMARLMHELYQQYWOHCMXKKBNBPQH");

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
    msg.setTimeStamp(0.205709453213);
    msg.setSource(55716U);
    msg.setSourceEntity(47U);
    msg.setDestination(31355U);
    msg.setDestinationEntity(18U);
    msg.state = 163U;
    msg.plan_id.assign("CFSYLJGGUVFBUAJLPKNHEYWFZNYRCGEKUHDQLETWLNJIVZXVDOWMMWUDJMCXQJPZIHHRWYDSMSRPOTACIXVBNCZGUTPBSBATPFUNKWYSGSGWJDVAUYPXQOTFIRYIAAREMDZZHHCSJFKISKURRWSHBGKUCXCOQOLGPRCIRMLXNGGRMVYWVFOTZVXKQFWXIEJFTV");
    msg.plan_eta = -943724709;
    msg.plan_progress = 0.716778957612;
    msg.man_id.assign("XVYROYNUGVNIPXUIINHHSNJJPKTVXUJWDSZHBQBKWWGNOLSNJQCMAMFUEFSCUNAKUOLBAFIYJLFVHHFPZRCJDOXYXOQTDKLHGYLKZGCZVBOZPCTWPAZGLPRSJFYE");
    msg.man_type = 64511U;
    msg.man_eta = 411493080;
    msg.last_outcome = 230U;

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
    msg.setTimeStamp(0.595374432301);
    msg.setSource(1736U);
    msg.setSourceEntity(216U);
    msg.setDestination(18897U);
    msg.setDestinationEntity(192U);
    msg.state = 77U;
    msg.plan_id.assign("VMZDBGNYBZBXGXXMQIAVOWIRENZWQSRPXLDJMCGNPQJDHDRJBXRTDYIFNTVHDOMULEFJBKLTCVSREPEDEWDPPTXOUYNQRGFPMJMHLIFWLSYTFIMTCQECZWVHUCFBMRPPJPILEKSBDVYROYBMLYAGSLNGOGHGZDNCKJTYOQMHNKXXQHQSOFIZUWETZHKYXHAOJSZCAVJFNLIUJQKAUURVZSKY");
    msg.plan_eta = 1008350681;
    msg.plan_progress = 0.291672577514;
    msg.man_id.assign("LWYYTQHSJSDYHUTRFZVBVXLMTAVLVUAKTASSWSZRCHERHAAHEPFEJIBWIZJSMFICPTKKZMMJROQMIGQRNDYJOTJKLZQLJVBFZXLNJP");
    msg.man_type = 17516U;
    msg.man_eta = 1606596413;
    msg.last_outcome = 196U;

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
    msg.setTimeStamp(0.445700510655);
    msg.setSource(47437U);
    msg.setSourceEntity(84U);
    msg.setDestination(56162U);
    msg.setDestinationEntity(86U);
    msg.state = 60U;
    msg.plan_id.assign("TOGOSJBAXUGHLCTAQORLAVGHMACIMDHJUOIPLNRQJTQBCBTAUYHKHYJX");
    msg.plan_eta = 148152472;
    msg.plan_progress = 0.409680963264;
    msg.man_id.assign("JSMYGYUCIOPJDUGFLJHHJRBWOCLAXPIRAENRNIQHXMEIYDTBQPBTKYSSTZONGDHOJZERDJTAEVUIOUMOPVQOIFDAENZMTLGUDKNRFDOFMCZKPQOKAPRTKSPXQBSLI");
    msg.man_type = 39235U;
    msg.man_eta = 1187575554;
    msg.last_outcome = 246U;

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
    msg.setTimeStamp(0.373808843412);
    msg.setSource(21405U);
    msg.setSourceEntity(113U);
    msg.setDestination(47819U);
    msg.setDestinationEntity(112U);
    msg.name.assign("DYTYWEHAZFUOXQNTXLXMVAJPEGGFHOMBEEBQSQOWVEYLTRZWCMAYYKUQQOSOFMQUMAQPCDTHOCHVCIDJLNIHSAMYIBXUTIKKHIJZEHWRVXCDYSQKGGYCFIWLUXYFCAFFGZKNILTXMXDVSGZTIUZBNCFNNUROWAFPKHDDBRPGEZBNJVRVLPYGTKRXBNJJESLKXOEOUPNQKOAPCRRVD");
    msg.value.assign("GPERYUJKLYNZM");
    msg.type = 161U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.342632602387);
    msg.setSource(12821U);
    msg.setSourceEntity(1U);
    msg.setDestination(50128U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DDTJXUMJBQKUKHQMGKIYKBAKYRWQAEOWNDQBXVUJCFIMEPFFICFHHWOLCTLSVGUZFSAOQLZTMV");
    msg.value.assign("QQVPZDFQUFKAYMGTVOZXYYVSXIXBODRSYVHRPTHOOIPNSXPQWESCOMRBSEGBWRZASLKRCCCGOFINTCPYAHLJVPRDAKLYZUYLBQMMHUTJVETQKFXUBOTFMMNMJDAJJAUGHTRYVIFSEJGHFUEGJTVBXDNCWGZIBECAKDPNLXELFKMSPWNZIPNAAKHLDWWCQYQXJXLIIBKRNMYVUEZQRIGEVAKIGHCHMLWWBTF");
    msg.type = 10U;
    msg.access = 132U;

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
    msg.setTimeStamp(0.796322692845);
    msg.setSource(55207U);
    msg.setSourceEntity(210U);
    msg.setDestination(9483U);
    msg.setDestinationEntity(163U);
    msg.name.assign("UHINOGBSHNZAMSVSZDNNFXIXZTUWXOGFWEJFNVPHFJMVKNAYOACMCOREUSGAPPCQNYRMXTQWTEAUFDBZJDBMBLECMCBTDIVSBVKKPJXHMKYHKVXDPUCJYHITOLKLIEBWEZDGFMDZWGFQUSOHLMQGZAFREDCLLCVBXYOISPW");
    msg.value.assign("WFDGEHJMXTPFDILZKKGCYQQLEBRWHVAJSGCBZJXTEZCIRAABQEWEGENIJZDSIRJCJWNQVYHYGUKGPHLGMZKSBQKUIOXDFSFDLNQZKRBQHKVLYVCFUQZNHXVFAJEMWNKLFMEUBPIMLHODUDBVXYDQAJXTTZEOFRYTSIVOTRVULNWGSPPSBIFPDPHTIRUMYL");
    msg.type = 205U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.544167197447);
    msg.setSource(13690U);
    msg.setSourceEntity(55U);
    msg.setDestination(799U);
    msg.setDestinationEntity(253U);
    msg.cmd = 209U;
    msg.op = 148U;
    msg.plan_id.assign("SFTLGUQLRXCLSBLOLWNPTYTDTHARCQASWATLIHWYCTPQTPTHQUOTXPJIYQLFLBXICSZUPOIXYCEKDHKUNHDOKVSIHUEJMRVGHGXZUVKZWFABIGKPRNASCJRDDGGBZNMUQZQHBPVRRCIKAQOMOZDASRCDONBM");
    msg.params.assign("QPIXZPGBJNAITZHOJPVWULZKWTUGPFEZJBILSCEYLDSZFNXYQVVWCDCEUXJVXRFDOMQWXXKTBQDLLNDVURBUPRFAZYHHUDFQLNTIKOONVSDSF");

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
    msg.setTimeStamp(0.285034414681);
    msg.setSource(8122U);
    msg.setSourceEntity(155U);
    msg.setDestination(12918U);
    msg.setDestinationEntity(117U);
    msg.cmd = 12U;
    msg.op = 183U;
    msg.plan_id.assign("ZPOZZEXNERGNORFPALQEXCUAFCUTJTFDNMHYZZQOFILISZCFNKDIDAUTVSTVWGNMTEGICHGHORNDYYWYECXQSLQUGJBRJEALHYAJSGHPXBVDDBXTDPQUUJAPUOIWALRXVLK");
    msg.params.assign("TPUYOLPZVYWLFBIZYIDDOHBMSHQZMLNYFJOJHGCNQJFKXGXGNMWADJXAQAYPSIWRVEUVTUQUGUKMGNDEWRTOHBVFGDPIHCTYKWBGUXINHAVBQFQLHQNCDNBOLVIZTDSNJOBSCPFIRVSZPVLKLKTRMAUYEEWFXCZUBREOKAVWXCINXIDESJETAJKECTRZT");

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
    msg.setTimeStamp(0.417121157298);
    msg.setSource(11663U);
    msg.setSourceEntity(66U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(106U);
    msg.cmd = 186U;
    msg.op = 57U;
    msg.plan_id.assign("ASIIESEWWHPJVFHFUFUYXFIRJUDOHVQUSOUPJGQWNXCNJHZMBWXPLUSMYKYNXODSJGPLIOEOAQZRMZEAMXRNTQDPKTWYZBXQGRLNDRLFGCSXQNRWJNCKKUJ");
    msg.params.assign("RYNHPAIEYTFLLHTROEZOSAWOVRMIIXXNHQRUVEXKECYPGYDOYKCVJJTBFCHFKLQNHBNIJNMYAUVITFXGZWRGCDLDQMLJBPEUCDWN");

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
    msg.setTimeStamp(0.242652535434);
    msg.setSource(37469U);
    msg.setSourceEntity(93U);
    msg.setDestination(19607U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("VIGXORHADUSJAEEKZNXFAYGNTUFDHWSQTOZFNCQBAWFJYDEVYSNZLFPLMLGHSKTLYXPTGCRXRMZBXVBYEANWVBMDCOKESNLLRIUWIZWQNKHPBFPIVLUEZBMCXNOTRQKUMVXADNUFVVTPYLJTDHQMYCGOZBSJAEROYXDISMIWBOLNDSRJFZIDWBGQIGOKFTZQQRGUJFEGQEWCMKOECMKHJQTYKHPGJW");
    msg.op = 53U;
    msg.lat = 0.20736400447;
    msg.lon = 0.867741190379;
    msg.height = 0.366929131739;
    msg.x = 0.178295485093;
    msg.y = 0.734634474472;
    msg.z = 0.716280070712;
    msg.phi = 0.817849466467;
    msg.theta = 0.0667202475251;
    msg.psi = 0.918564827296;
    msg.vx = 0.297366230521;
    msg.vy = 0.719081278523;
    msg.vz = 0.127361104518;
    msg.p = 0.72514458768;
    msg.q = 0.382758436135;
    msg.r = 0.62206059782;
    msg.svx = 0.385137124519;
    msg.svy = 0.287964011307;
    msg.svz = 0.8944923771;

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
    msg.setTimeStamp(0.779959014258);
    msg.setSource(57267U);
    msg.setSourceEntity(117U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("WEXQHANVYAADXAXYGIHKCZGGCVMVUZVVKLZNBMXDCWUCPNBJOFIWF");
    msg.op = 221U;
    msg.lat = 0.684046099565;
    msg.lon = 0.263565079754;
    msg.height = 0.438098490398;
    msg.x = 0.978300279384;
    msg.y = 0.550877083778;
    msg.z = 0.59737580525;
    msg.phi = 0.00445088872648;
    msg.theta = 0.0420718459717;
    msg.psi = 0.0421975587312;
    msg.vx = 0.594580170773;
    msg.vy = 0.510275478646;
    msg.vz = 0.928690893356;
    msg.p = 0.177585179141;
    msg.q = 0.0750762440478;
    msg.r = 0.668339418601;
    msg.svx = 0.578423565657;
    msg.svy = 0.239582914519;
    msg.svz = 0.319909984865;

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
    msg.setTimeStamp(0.968421311178);
    msg.setSource(5516U);
    msg.setSourceEntity(143U);
    msg.setDestination(805U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("JOOKZFHDPLONURNFEIRKJXSWRWTMBBHGBRKZNULMJKDWLCGBXITEUPHCQFATVSEWEYOPZQPBYJCLZAHOIKHGLKJVIVFYGPMRBIUSXDDYWYDDIBMIAYACRMTPESRNXHPEEACZQFXFFVKUXYBDBN");
    msg.op = 7U;
    msg.lat = 0.934725485999;
    msg.lon = 0.738420912232;
    msg.height = 0.0863311401864;
    msg.x = 0.48570782631;
    msg.y = 0.0539094914995;
    msg.z = 0.0974184819514;
    msg.phi = 0.364703047046;
    msg.theta = 0.863526843057;
    msg.psi = 0.151466936865;
    msg.vx = 0.255441727282;
    msg.vy = 0.0971002844544;
    msg.vz = 0.333564429257;
    msg.p = 0.240966819355;
    msg.q = 0.310663342;
    msg.r = 0.0975531847391;
    msg.svx = 0.329652792102;
    msg.svy = 0.814565507412;
    msg.svz = 0.87342760072;

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
    msg.setTimeStamp(0.48904188329);
    msg.setSource(52971U);
    msg.setSourceEntity(177U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("MIUWIQFNXELDNBBJZCWVAYCSVOLVXUKDSATIGPCYPVMJWINCGDHMCHNABWHRPRUAZFOLEHEMVKDZGYSPYWLKZGUNJGTBBRXDPXEJCCAENWFKILRQRSFACTIIVEJWYETTGCZNTHBXGFUEIPDTRSQMTTJOXDFPIYXLJLZCLLQMMSKZWUORQVBHUBKKTPDRKNKOFHSJMVOYAXEFQEFSBUNDJSALOVOQGZQRPXQSOZZAYGYPYRVBHDUF");
    msg.type = 69U;
    msg.properties = 232U;
    msg.durations.assign("LZMXYHDVXMIB");
    msg.distances.assign("JVWKNYSONNKTXAZYRBQYMUKLKKGAFEGCKFSQWFLFJGBFRVEXOVKSTEXECCVMFQLRXPPQJTIVJDINNYSHMWKBUFBMHOHCVPVIJZJBLCN");
    msg.actions.assign("QDDVYZJHNOFTVTSRUZYGESLNKNXMOHQBYUTAZTORPWQHCJVHKQMKAKNCXFLZGOZFPUWHYRWTEIIKPKIDQYGRXQSOCWHCQEHIPFXBGLKNPQLFSAD");
    msg.fuel.assign("VJLAKTLUGNDZZIYHIHHQDTUZLQJDYNBNM");

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
    msg.setTimeStamp(0.528487533133);
    msg.setSource(42039U);
    msg.setSourceEntity(230U);
    msg.setDestination(5063U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("SDIMDHYEHLTRKWAWTZKSKWSLSUDEFVWKAVQHPRCMPVWGTQYIHIJZEDEYUDAFJQNRWXVJVBSHPBENNRGZTDXMGBJJFMKWNKWVQRZCCFCOMCBXQPHRONUBKXTFILRPQTMYLLTIUXDQLDCDIHAAOLXTYPEGLMUAZARQRYHEAWNNQINJBYGTGOACFGOYZPXNPSLJQGSPUTZMABRWUYEXZXJDMUOSZKOSOEBVHOBZGSKFLGH");
    msg.type = 199U;
    msg.properties = 28U;
    msg.durations.assign("CMACRLAHIWYKWVWDOTJ");
    msg.distances.assign("ISNYWCNKAGUAOBWQVEUNTIGRAIVDNCMTRFBBDSKZGIYWGFETPJRMOTQDZTQUDVPLYACVKEGSXYDBJODYAUUWRPQTHFQPBRBBSVSAZJFZYKRVCYRSNVILXMMGQLHMQ");
    msg.actions.assign("TMENUEJVTACOYFMJTRDVJAJZODFNLMUOWCKFKLLSZQZYUXFKQXJHEZTUSDIPPOKPIHBSWBGHRHJQOAZG");
    msg.fuel.assign("UINPHTNYIOZGRQFFMZAXWNTVWCMDNEYAIIKGWZIDGMMGLNOTEMYMPKRWXBQLIMOXASLSKZQBZUVVYCHROEDZBHVXXDXKCRTHJGEHYTSFAZQHCHSBAOYSRLGFELQRXPEFE");

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
    msg.setTimeStamp(0.754327555973);
    msg.setSource(3728U);
    msg.setSourceEntity(162U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("ESSYTPVLFAVFGPFFXDJVSEBPAJZRBVOQKRQQRAFCZKXMULQJAV");
    msg.type = 211U;
    msg.properties = 216U;
    msg.durations.assign("SKZOTTHKFCHYWFUMENXGCTBGFZOAEBPCCCQQZJRJGTIHYTZSLRAEZXRRNSLNMESDMNTEPUDBGRTPEMYZSSNAKOOJAFZLDGXBHFMWAYBIPIJLUZLGAVLFKFEPSPDFHOUIFIXRGSPCJNJBDWREYULIIQGNABKDJCVVANILXXVWWWBONAUGDQKMFKVPJMKJGAVLHUVRPXUOQWTEHXVNCDWRMOVQEWSHVHBPIBWXUQX");
    msg.distances.assign("TSKOQDBBVCWLISMIMKCSAJCITROLHRJOHZVEONXDVGYGZBPKGFXIGWZUYPS");
    msg.actions.assign("UWACDROIJIHJZPBUQVFVDINSBRFCLKMEHCRUY");
    msg.fuel.assign("GANEXYPEZDURUZAIUQYBDUWXZXSALNAFOGQXSY");

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
    msg.setTimeStamp(0.660343846786);
    msg.setSource(55168U);
    msg.setSourceEntity(74U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("GNYXHBTLDTLSVOMBQBALSDNKKUYXFDAQMZYFNGPBWDROJEOVXEFNRUOHOREGSPPZJHMKMZZHVLFBSWZCBGVTYJCQXGCQTSHRIDKEKPKAHLFVWMNYAFVTWHUIGSIRAQWEPXYUPALGUKALMQISVOHYGAJTXSRCQWYWFVDKBOCNUSOIFFCMPBBPXXUICRELRHIJRAKJBPQIRWEDMEFTCZWUZUYWMV");
    msg.lat = 0.539979005138;
    msg.lon = 0.876736205495;
    msg.z = 0.755610103038;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.0967050356789);
    msg.setSource(63354U);
    msg.setSourceEntity(223U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("UGPMWUDDNYMJXORFZNUSTNORQYWACZGKLMVFCMSRNQXUTCITYKRHIXBODEBIXULOPPXWCKEUKOBJEMYWZLNEUMAXMSWKNFGIBABSQDJQGJAJKELEVIQNRXGVDTZTPDLCTHITXHYHHZYKODCPUKIKXAOLEVSQVOGZAAFOGZDNLSYWCJFALHKIVMBNVUZRLVJIRRTJHFBBSNDCACWTLOWGVSQFGMPYEYTQSWSHAJZUGQEHFP");
    msg.lat = 0.959216686129;
    msg.lon = 0.0488043355945;
    msg.z = 0.919130462785;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.575886873324);
    msg.setSource(35321U);
    msg.setSourceEntity(128U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("LHCEQJKGXVIGUCRSYRXNJPQCBXCZCZNTYOWLMZISBCLIOTXIQDNDKKIUNDGZFUSSGRTGAAVJVEAXEOABHFXQVITZFBRMGJWRNBHZVYWLEBLFIMWWUWQRBMLHJWPQSBFFGUAJHKWZDYUKDMPKUVZLJCPHPEVNSZCTHNPRCFXRSGYOROZPVNHQDIAOOXOQYLBTCEDIAYWLMXTONVEJDUMAEXIJRMDAHPEHGPSBTV");
    msg.lat = 0.791943569643;
    msg.lon = 0.897415399556;
    msg.z = 0.455694262996;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.880951070004);
    msg.setSource(49206U);
    msg.setSourceEntity(195U);
    msg.setDestination(6945U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.392818376644;
    msg.lon = 0.666480211309;
    msg.depth = 0.743490681885;
    msg.roll = 0.3654840112;
    msg.pitch = 0.119301693522;
    msg.yaw = 0.826329824992;
    msg.rcp_time = 0.72599726874;
    msg.sid.assign("IWUNBLTFPAVUFLPMCHKQJQTWTMOSMVBLYPHSAEURWDRXHYCEYTUKUBQZTQOOKJGLABBHVCGRWPNNBYZZIAAFGLAGYMKFCWRHYUYXDD");
    msg.s_type = 85U;

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
    msg.setTimeStamp(0.033174210857);
    msg.setSource(53116U);
    msg.setSourceEntity(166U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.991921797744;
    msg.lon = 0.606000649043;
    msg.depth = 0.580536760612;
    msg.roll = 0.705444711174;
    msg.pitch = 0.174700726363;
    msg.yaw = 0.460900221228;
    msg.rcp_time = 0.0913948115364;
    msg.sid.assign("UFEGYQRQALQKVIZUXHMDEMXBYOCCGJBLGLVTEEDPNHEGWRONNSNTSJIKVQZZTPBNCKTWMWOCDHLADARVXBPUKHOETPVBICLSSAPQZWYVTHHDBWMAUCGBYNHMRPWIUTGBISILUJDDJYLHXKSIRCWYBEVYKIMULOYRQUHXXZDXM");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.540143206767);
    msg.setSource(42644U);
    msg.setSourceEntity(79U);
    msg.setDestination(27342U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.396699921888;
    msg.lon = 0.330625162597;
    msg.depth = 0.322702949923;
    msg.roll = 0.892157608921;
    msg.pitch = 0.430507698503;
    msg.yaw = 0.293117775588;
    msg.rcp_time = 0.0650605487264;
    msg.sid.assign("GJNVLPZSCWZGWNXS");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.414211063313);
    msg.setSource(4386U);
    msg.setSourceEntity(215U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(204U);
    msg.id.assign("XYZEFFPZISFYVZQZCAIFIKMJEUHPNFBVPKZNTOVVLCOCCXAPMEGQFWLJKLCDBLPITHILEWZFQVGOEQPOCMJWCJHSHGWHJOLJNABVRDQWKBTMPTAUMYWDCBXZGFJBIAAGYEZEBNVSUDRR");
    msg.sensor_class.assign("GLPBRKOOOEBBXZVLFWAYIHSWJADZYHTOLEWTUEWPBNCCYYDKXVWUTZCTPVXNDYHEIMFKRXYZEYLYWKMHMJPMSQIKOUOWZAHTSKRZSDJVGNBJIGTIVDISDDJCDNVWFAEGPGQULRMNAIRGEQMXDPFBTGGJCQTFCFAELBJLFOAGRKSKRQUBIPPXSCQKZXFMSYTQWUGLTJMRNEVZ");
    msg.lat = 0.200469850419;
    msg.lon = 0.754434108966;
    msg.alt = 0.382933299035;
    msg.heading = 0.996680524373;
    msg.data.assign("WAJOXBXLQQHGIQGEWAMNHLBPWOLVDFZSYAKVMDPRYDJYDZKVYFXLWPLIKGTFBKDJHUSITTLWNUDOJIPCNXJQNNNZQHUOGQPCHYOMRUBGEOTUWUPKRDRMTYREPYVCCXIWJMZZSARMJFGEMTVRLDGBGOXYBVGNIFJSSWBNEHFDSRGAFWCIRYBKAXZZESRVNECQKJPVQSTTLZBMOXFHXSPUPAIHIKEUAQ");

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
    msg.setTimeStamp(0.749867394764);
    msg.setSource(642U);
    msg.setSourceEntity(184U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(36U);
    msg.id.assign("DQBJKENTQASCWHZTEAOCTDPXRWGETUICGMOWYWDMDCHUXNPDUIFOBBVEKLNVNPVEKZFYVXZPJINMFMCOVAFNFOGAP");
    msg.sensor_class.assign("KWMYTWPDENRJRQRWLHBEVLSVBSADHIVECWNRXWBAVQIJPMQUEYPVRCZR");
    msg.lat = 0.280654251741;
    msg.lon = 0.466223941059;
    msg.alt = 0.80165440186;
    msg.heading = 0.508269929342;
    msg.data.assign("ZVYKYDTSSCASIXCNBOHIPCWADZWDBNWQYHTPRQPMXBMLDRGSTTEDUTMOHNLVSOQPSIPFAFKRKFGKLBLXRFPWGHHOFAFAQHVHSGJZWGIQGNOPLDWICFRTRERJGUKBKXJQMLRREBQVNUMKEULUGFUIJDMEMEWTQGYYZUAAWMONJBNJZVXLIFIXPKWXPYOGUIBAYSULCXBYHUVENAJIJHCNNDS");

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
    msg.setTimeStamp(0.988906059009);
    msg.setSource(9714U);
    msg.setSourceEntity(116U);
    msg.setDestination(26740U);
    msg.setDestinationEntity(115U);
    msg.id.assign("BZMGYPCHGASVJTGSIQPZMFWWTOYEQBWMTRDNBYCLOWASZYCDMVZZFTNUVMPETGEXNILTBU");
    msg.sensor_class.assign("CWBVTOGULCRPWNHATNBQUTNHLPSPOPTQJCGKPDKENHWGORMITDMRLMGUYYYFSNVNKE");
    msg.lat = 0.155789103342;
    msg.lon = 0.00156949671868;
    msg.alt = 0.480941374081;
    msg.heading = 0.321676132757;
    msg.data.assign("DMVACIHRPIPCOWIVYYYDUKNQZVVITMJADQJDOWAVGINZVGSNOSZQYASRHPMFCVXBZPSVKXVULICLSNTOAAHYJRLTZEZULYAHCHDEOTBODDYXIKJMEYHWQTUBUNMWQPPGDIOFCKXTBXBWESSCHZAGJLALUMTJYFFOQVAWZTGCOEGQXMFKRGEJFRINMGEBNWOPTKYEGPLZBBRRSBESGKXUQLN");

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
    msg.setTimeStamp(0.925987361039);
    msg.setSource(3519U);
    msg.setSourceEntity(37U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(109U);
    msg.id.assign("ASWIKPTHAPONQYYSBPGHFUUVIBQUHJAJMZLRAPXLVVOHXQENBKEETMMWHHKWSTGRRQYNTUZIGLVMAYXCJIUKLVSFLAWCTCGCSAVNYEKBYDZOPJHEUDQKVQZTRAJPROEMNDUKTNCJOLGWPMUPFRJOVHDBOPZCFFSBADXDBXIWMWQWYSFUJVYKHDQ");

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
    msg.setTimeStamp(0.1687170613);
    msg.setSource(23044U);
    msg.setSourceEntity(51U);
    msg.setDestination(1509U);
    msg.setDestinationEntity(186U);
    msg.id.assign("ZQHJHJWKXGJWMXMBPEVPPRYDZWYLOYSDSYJNRSFOPNYDRNMHJZPBHKKGCAWGSWGMTQJFYDQRHDJHJTEAOXQUIIKKOZLQEXGLSWQIRVAQWTNILOTZUGDXFUZHFSPWMNCUJCQZAIOTOXCUYVVNGFNAEBEPNUEGPUIRLLCGEQOMTHMALCLMTVSBEDHNBFLKXBVKEODXSUPI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CVMEOOWKJSBAFXMBPJNTYHYFWUXMQQDTWFCPFGWQKNQILSOLXVSIIEWJEZGKEUGXKGLHUELTIOMHZNZRK");
    tmp_msg_0.feature_type = 163U;
    tmp_msg_0.rgb_red = 123U;
    tmp_msg_0.rgb_green = 97U;
    tmp_msg_0.rgb_blue = 24U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.827900050358;
    tmp_tmp_msg_0_0.lon = 0.867006429326;
    tmp_tmp_msg_0_0.alt = 0.685830289652;
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
    msg.setTimeStamp(0.197404320864);
    msg.setSource(45U);
    msg.setSourceEntity(122U);
    msg.setDestination(58645U);
    msg.setDestinationEntity(118U);
    msg.id.assign("XZCLZONRJIOMKBQPQMBYZIHBKDGNIVXFMYSQUCAWSSWQWVIABTYEKDI");

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
    msg.setTimeStamp(0.174250824979);
    msg.setSource(25405U);
    msg.setSourceEntity(135U);
    msg.setDestination(48574U);
    msg.setDestinationEntity(108U);
    msg.id.assign("XSGHEDNJWROMRUYTYRHYOSGVSIVQQDPEHEVRAHJLBSAFOCIXAOYJNETMBWTJTLKPQBXJMOPUUMGMDHBSIGKGKQAYQFKRXPKTKADWCZNYBFGUHFMPPFIZDWLCLKOBWSVLLLVNEYMTXWGMZKNHAMVCSZLWURQXJGECUFWFFWNUEOGZRCNPADYILAUEBBQNSWXNTEAJISRXKTVFIVYOCKOCDZHIPJLQGMB");
    msg.feature_type = 8U;
    msg.rgb_red = 90U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 83U;

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
    msg.setTimeStamp(0.297234917576);
    msg.setSource(15911U);
    msg.setSourceEntity(6U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(85U);
    msg.id.assign("SZPIWZJRKMYQTMRXFSGXREFFCJJZUWDBZELGOROHHBUQRDCBUJQPHVWIAGIAWFSACQBIEKSFWEEANPALATDYFSTCYANUWJIQOBGZPZUSQHRSEIPYVDULPNGXFCORVXMYIWTGTCMPZPSHTBGGUUHKBVWYKQOXUYNRKDKDMRXZFMCCVZMKLVHOACJWOJJHLOQKNBVVFMQG");
    msg.feature_type = 33U;
    msg.rgb_red = 92U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 130U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.815049070967;
    tmp_msg_0.lon = 0.540139776985;
    tmp_msg_0.alt = 0.88114247667;
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
    msg.setTimeStamp(0.935504370191);
    msg.setSource(40036U);
    msg.setSourceEntity(38U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(0U);
    msg.id.assign("FCUYXVDBDWNJLUZFNNTNFK");
    msg.feature_type = 40U;
    msg.rgb_red = 242U;
    msg.rgb_green = 162U;
    msg.rgb_blue = 222U;

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
    msg.setTimeStamp(0.358702992945);
    msg.setSource(41942U);
    msg.setSourceEntity(229U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.629313290305;
    msg.lon = 0.332218753827;
    msg.alt = 0.0361511474523;

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
    msg.setTimeStamp(0.0831537959935);
    msg.setSource(23278U);
    msg.setSourceEntity(34U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.0862199306972;
    msg.lon = 0.598848520722;
    msg.alt = 0.765899536271;

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
    msg.setTimeStamp(0.661237435807);
    msg.setSource(49082U);
    msg.setSourceEntity(188U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.88328052949;
    msg.lon = 0.0470765365794;
    msg.alt = 0.543300038063;

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
    msg.setTimeStamp(0.711477888814);
    msg.setSource(48992U);
    msg.setSourceEntity(177U);
    msg.setDestination(62472U);
    msg.setDestinationEntity(32U);
    msg.type = 219U;
    msg.id.assign("WACLNBEIPUPBVGFCNBRKRTQCLVUVAGHSDHOJUWTESKOEBAMMSYRKYUZSFWIOHRXXTIAVPMGPHNKMJZPMBGWATARNLYDQVJNSPEEUKRHYZSONMB");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1122646641U;
    tmp_msg_0.status = 84U;
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
    msg.setTimeStamp(0.900578909214);
    msg.setSource(7345U);
    msg.setSourceEntity(254U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(189U);
    msg.type = 240U;
    msg.id.assign("KMPQONYGAAICUMAESCQOXCYGFYJPKEOXLFACNSKBIYWUHDLDFHZQSFMDTADZVULIEUWIVQKZGNFJTFLORBDWQNSTOEPXPBDWMHGZRZOUSSVWVAFUUYHKYIOJEYIRRRSPHHBGQEYVQCIBJMKTJRLCMCDUXJMXARMSHGREXDHIATDZENNDGYVHVJJNGLCXTLLOINGZPXZUROWSFEERYPBAJKKOCBFZWPLMTBSQGPFTTXVLKVWIQ");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 162U;
    tmp_msg_0.list.assign("YVBUNTDGDGBKEXZFGDMVAWRWTNWOQBSTWQGKUSJUFZZKPAQJAJHBVXKFCAWJUDAEIVKEIBGYFORQKOEKTGFFSPMTZTHSRQMHHRICPBYZAFYBSXDHLNMPBWPDNJVCRXEFCXELNLLUEYXJIUCEXLAMABMQCMPOLYVFHGYWKDWHMBCUPOHZOYOAARMLKPTQISSWNVXXQUIHIZCNZPURIOQZJITRYQVRTJROYDVSHNGDOMJTDPSUWGNVJIZLE");
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
    msg.setTimeStamp(0.951914814816);
    msg.setSource(19638U);
    msg.setSourceEntity(38U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(174U);
    msg.type = 127U;
    msg.id.assign("HMPJKGSJWVQB");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.931142927906;
    tmp_msg_0.lon = 0.278055664632;
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
    msg.setTimeStamp(0.759449243994);
    msg.setSource(47823U);
    msg.setSourceEntity(94U);
    msg.setDestination(61521U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("TCYVWQEZQVACQLIXGTVKXLDXYCUPXKRUDDHMFFHIWEDWALGTGLTKCQKSDIZBOMOGEPVMWUROQRCJEUOUFBVBBIOXFFNSQKSOSUMHZSWAIFXZMSZPHWRZWJQYWHCATBJJVPJLHCCIINYFKFNPNLVWPLGZEVVILRWTTI");

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
    msg.setTimeStamp(0.820793373423);
    msg.setSource(9867U);
    msg.setSourceEntity(135U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("BGPFZRDMKEJQTWUWZKXPAJYMJOKRVRSFHMBFFZPRMGIEMAVUBXYDEHVHYDGADDUQVEBNTYUODJZGFLCUCAQXDRRIERDBHKSKOHPSXCXSPSSRVELCWOGYTYSKQZBJSBEIPLATIIWQPNZNDVHUNWMNUVIUNCTQVEBLILIYQQOAGLOPPFWZG");

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
    msg.setTimeStamp(0.233102242587);
    msg.setSource(36298U);
    msg.setSourceEntity(114U);
    msg.setDestination(43863U);
    msg.setDestinationEntity(82U);
    msg.localname.assign("JBXOGEXAVGLFWKXMGNQTCSJAEXWFYVZF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AOEWTDBJBCUHESHOCAAZMMONHADCYRXYWZHTIIFREGFNORZLFZVKOUWXKMPKKLCYVNBRIFARLXUBQBKIWGRYPCJZJHEMOLWDDTPVVJOSBCEGLRLZISSSMAKHXWTUKCRMIPFZTYVUYMDEINC");
    tmp_msg_0.sys_type = 201U;
    tmp_msg_0.owner = 39162U;
    tmp_msg_0.lat = 0.810089199202;
    tmp_msg_0.lon = 0.517620641983;
    tmp_msg_0.height = 0.432926351725;
    tmp_msg_0.services.assign("OJPLAWAHUIUYJGIWVUIEFCAJHYAICZDVGLVHCHHGFFNIBEXMGAJULOMGQDDPTBDFJKEAYZEUPQHXQKLWRARXSFXDYCNNOLBHFLWUNFXXUNWKWCJYPCFBSPKCROMXWTGSPJHCEFZGKNITSGQRDFZOLQWNVPGEVRLMKMZPGUSAPDMWXUIOQEYXNCEBTMOYZERYKRHAQWDYUJQVZVKZSHMOLCSISBMYDANRBIBESNVTTBMXRLSJKTQIZOPRTBV");
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
    msg.setTimeStamp(0.0192513740274);
    msg.setSource(38364U);
    msg.setSourceEntity(19U);
    msg.setDestination(22871U);
    msg.setDestinationEntity(89U);
    msg.timeline.assign("ITXJLCKSCWBUNOONCKAVGVLSXEFRXMQSIFUOPJTEZTHKZKTGIAUFAMOWVTQSJMCIBWMIAIJXBUEHEWKFRVODSMBAYBYRRLAWAYJVVZNKXTZPDAGXFGQNOJPWKKFNZTEIEUSWPFSMVDQHOWJOREDUHHAXAJLRJCHZYNFUDPOSGO");
    msg.predicate.assign("OUJYNPJMGMQUXWGNHIPUFHGARNBOAFXLTMPQSOZCIYDHNOQMXDPFMIOGETOAUVZGURVABBDFTKZVRLYERKKOWUBAQTVHKUBEVTECSABJOJC");
    msg.attributes.assign("DVWWGBGZJEMCOQNHPPVMYSCTBPFWUGAKHDORHUUMGZTNACQPOKWLJKIPATOXHUAUIEPRSCENAEVXYIFTNJMFLDHKMGFSCWZSJDSMYYSBXNUYSFUYOCVAFXCBBLLASXQZZBTHOEJFIZCPPKQKGJSEIOVLGJMRVBPTTDNMORCIHDIUKRJEEZVBRNWKGKGMKQBYQVLJDFHCJXLEAXX");

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
    msg.setTimeStamp(0.521021733074);
    msg.setSource(17494U);
    msg.setSourceEntity(224U);
    msg.setDestination(53376U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("UXIBMNXRCAZWJBDLLCYBIDWIBOGMFZTXCFPAKIMQFMNLTKRPPZGFTXPVYQYRHWKZOKETAMQOMBPCVDEQJYVUHAVEAJGYCZHSFINGFSOWWMOJJNEZDSTETOPRUGASNHPHNRDNOCEKQGILEITKLHYYHYLWTSQUXGJBWLYYOLEJXNFARMMQUUMKIDFVBRDAJSHCTZCXNQBHUPPUESILCO");
    msg.predicate.assign("DLEHAIQCDQHXDNDSHSWJDLTOTNZLHTFTXGZTSZQULIOKOBFEWUJRGOWFYALRIBYLCGCOSZMSNLNAWKQVTVBLZNMZDNVVUYBUVIPIA");
    msg.attributes.assign("RXXFFNQLNDOXQYBJZXXYTZ");

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
    msg.setTimeStamp(0.932471990292);
    msg.setSource(60552U);
    msg.setSourceEntity(146U);
    msg.setDestination(33683U);
    msg.setDestinationEntity(212U);
    msg.timeline.assign("CENEERVGIBCUBABWIXBDZHEXUGJAITMDRLGGRUKXASUWSPNAYBVLICYFTHKYKPJANEMWLDAVFFMSOPXWMCROFRGWNAEQNERHFWGURUYVFZPVYFQACGBQNHAQMJTPSDOIIPZQSJKVTCO");
    msg.predicate.assign("MGJDZIYYCHLMOJHTEKQNLPYGMOSMGDGFXOREGMXCAOZQZTONHTLCHYVVWFXMLPNVIBWERSQOQZTSPRNAWAMPXAAZDLFGXFTBUEIKYQRBUZMWESSJUSICHOYFSRKHDDERQEPCVHTBIPJLPPZ");
    msg.attributes.assign("LOSNNZIMJICYTCNTUTDSNFBAWDGVIGUHWHMFGYXWZKVMKUVXEIKBDNMXGTPVUWEECZSQJCDNMQLHUCZZVDABPQSDTBCLTVJSZIQVDDQEOTWLQWBSFIACUVMDPEMXFHLAXJMSSBOPFWHZOGBHNLFKOIIMGKMYKIJLARYRYZCHEIZOQGRGAEOHTTAZRJXOPRRPPQXRQUWUAYXAAJSPROWXGKRYPCLBOFYBNUEKKXFJC");

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
    msg.setTimeStamp(0.882618330268);
    msg.setSource(62642U);
    msg.setSourceEntity(48U);
    msg.setDestination(43634U);
    msg.setDestinationEntity(231U);
    msg.command = 48U;
    msg.goal_id.assign("AHEIACLOMCCSVQXSKVFVOSPRTIGFENQHMUZ");
    msg.goal_xml.assign("QILCBAKUSIIIIWTKZSHNEFHKLVIMJHAPFDKLQMRQPUZDTYRZCERWWGNTOMCGQTDLHTUGIKAOARMNOUCXVECMZOTOFNPAENBPVOOVVWMAFCGYANJMLJXCKAYPFSBQXMBYUZXZTSRBLRJLNFAKHZRQVXYUVYDJHYXMWBHQQSCEWYGDZPIIBAQDDLTOECFJSZGEDJRSSTYNRYWOKPHGUSLGKWDNXXBVJVKEH");

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
    msg.setTimeStamp(0.766464980935);
    msg.setSource(7776U);
    msg.setSourceEntity(181U);
    msg.setDestination(18482U);
    msg.setDestinationEntity(234U);
    msg.command = 190U;
    msg.goal_id.assign("RHCIUAYODNJOSIGAIFKDPCNSDVIEYGINEKNBJPULPACUZVVNHJVFWKFGPRTVXPRSPZXQCRAJRTLKKBFYLNWUADXTUMAYTSMEZMDLRLHMPIRWNZKXLCJBWHGCJIBQENPHQDLFETHVLEABQXQLSFKOSOZKTOCSGRVZGQEWU");
    msg.goal_xml.assign("KNDZZHFYSSXXZDOWMSWQYHFKBDSCWMURVJOUEHRLGFBXCNDEQOHKHGNCUTRBMOYVNKGIAIBJGLBBUJCPZNDPLTTARLOHXWNOMAJUGVACKPTREIAPN");

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
    msg.setTimeStamp(0.919303056738);
    msg.setSource(50906U);
    msg.setSourceEntity(205U);
    msg.setDestination(61976U);
    msg.setDestinationEntity(208U);
    msg.command = 72U;
    msg.goal_id.assign("KVVVAAMTEZJUBHFMTPLSGZKARDHYXRCGWTVYNLEFJVGXIQGXSSLCBOMBZDBJHUPOKOYJXADBPQSWFIRDVOZNLIGEUSEGLMACZKLLORIFOMWYRVPECIXYISNEJYRWEQRKUBCXPDNTWATXYJG");
    msg.goal_xml.assign("UJCIOCTEPAZXZYITCLMGOSRJNXWBQAZNKMWTTIAPAVFCXDKGLWUXPWHPFZPDHKGNIBNYHSWKRVVEMMYUROXYBWVABHCGDGYOBCKZEELRZDGBNUKCLSAUZWSIVLFVOM");

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
    msg.setTimeStamp(0.117668869335);
    msg.setSource(32749U);
    msg.setSourceEntity(34U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(76U);
    msg.op = 207U;
    msg.goal_id.assign("DNBHDHSSOZIGZNRQGJLIIXYYALDGXOXSWOHJFNAOAKHORUQHUGGVAITEQOHGIOVJPMMTXQYQHEFVMDRRFFRADHQLKCIZJFOWVTEZTUREPNUKUYMTYWYQYNEBPXIUAXEUCAAYFVCLCFTGPCFKDPQBTPICMGEGNALILMZMWLTABKMZZUSKIKYGKRTXXLBZLLPSSODVWZWPPJUSXJCDOMVBTRRBSCYWWWJKN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FGNLHPIRSLZRVVRQSEBVXOVKUDMSDHPMANYFHGKPWDJWIEVXAJTCGKNZMJBWFTMEAZMHKXALZOJSFPIETRAYFKZTOFBKLENXQTAVKJSQLKRWTQZUQDFGZKYCGCZOUBCMWIJYGJCOLYPSGHMWFNBVMLETOJTUECRBTWADVBUHRWKXXNMFGPDEIJPSZVSRVOLLCUYJOUCEDPIHQUPAEXTNIGQBWMPQGZIOLYOFQWYRDDNHY");
    tmp_msg_0.predicate.assign("QRSNVBUFPEVZMHWSEPREMFUFIBTHLUISNMWGQFDWXYNXYOZETMIOJJVTABSCLYHNLWDRGCPUSXGMDIKVQMUCOLDCSFOXZNVUZWSZAIADBIWXKDBPXOJPIALHWSBQYFJTRUEGQMGLEGCHHNIOBYOHLAZRKKPXZPDUEHGRMHWQLSTSJXBUCVFDYKCVJLCRPYMKWPIOLJMGANJQQKDQZERQFRKTYVNBOEJHNYGTANKPEAUVCZOKRAWADITXF");
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
    msg.setTimeStamp(0.240070928926);
    msg.setSource(54717U);
    msg.setSourceEntity(96U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(169U);
    msg.op = 25U;
    msg.goal_id.assign("UFSKMMMSKXZFAKJVJMDQIUCHUBWNIPTHWQLPFLBQNVNRLHQZRFCGENENGHZWIWIPVABHRYELRXHNWBF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TDEUOEGJRVUIVQDRPXMYUZUVYFFQYXGPQVSASOGSAOCLDYZREQISHSTDCDBDNJBPSZNPOC");
    tmp_msg_0.predicate.assign("BMAAOKYFANPITRMXMZBDOSPFDYNYIQWMHYOWYECB");
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
    msg.setTimeStamp(0.168790699566);
    msg.setSource(38385U);
    msg.setSourceEntity(66U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(46U);
    msg.op = 170U;
    msg.goal_id.assign("LMKDVZXKVFGCXLBNNFPRGQWXPOGBTOBUDDVCNCZXRGFZHNJVZQWSX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OCBWFQARKABCZYHBZKHQIKJVQVDEMDOCKAWGZIXTFDPXPUMTHXUDVCPBJGACVJZVGQZHJYFWOGME");
    tmp_msg_0.predicate.assign("LSOCSKSZEJNIFOOHFDMDGAZVXMXIUGXPOKTSJHUSBBTZVYKTCRTFEBPJYVCQDXKTKLWWNGGIFWHPTAJZJFINUPNWZSMSABGEKAUCAOMNGFWWRRYBPTLVCYRAC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XHDDBMFCRKLGEEJOUVJYXJOLEFEJNCWOGUVZZQHMUESCWMDIOMYLMGLBLOXAWFSBUATRRNHRFYTWHBFKHNOAYEKMYZPRQQXITNCBVEAKLIUNXEPUKTIPIWUJPICPQMNYVQEBJAZPHQXDUGNZMTBEBLZDZ");
    tmp_tmp_msg_0_0.attr_type = 227U;
    tmp_tmp_msg_0_0.min.assign("FWHABGCSGJJBVWTOREUCNAVGGYPTNSWLRXJKCOPHGWGEKIVLHEEHVSXQSSKVZKCXUKPZMXLFQQIOAHKRIQFCFYAPJLGYEZTZEMVWUDQXYXYBTFOMQVLZUDLBCARBAJDWPLJDCYQWNGQEPIUKBZHHMWLFURB");
    tmp_tmp_msg_0_0.max.assign("EXKWITYBGFTHFGUQEZCBKWPGIQHCJPHUOHOAEUSWCEGSJNLGZYUIIGNKTAQOIZJZREQJPWAZQCIFNAXMXMSE");
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
    msg.setTimeStamp(0.189087606895);
    msg.setSource(54463U);
    msg.setSourceEntity(219U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(14U);
    msg.name.assign("BCASETRSWMDIWLQTDVZDDBBIMUJVSU");
    msg.attr_type = 86U;
    msg.min.assign("YPOBYJOWGBQDTDQVQURHEIJIORASXTYOCZHLUQPUAYMWSLMZRDEVUFAJZTQPMPPDMEKDXIEQBFRBIZGRBZQGCRNRHJNDWEIBBWLLEDEXTGUGJSFSXUYNRBUCYIYHHXSLZONPFMXGLLKVTFBKXACZKURVQNJVANVHVCFUWOCS");
    msg.max.assign("AGGZSRQVXGHVUKCDGDCJSGQLMWFKZPWLYTSXSZJMAITYQLHPWIODKILOLBCXMMNFNDNLJHKHMDQEQ");

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
    msg.setTimeStamp(0.542567533667);
    msg.setSource(14692U);
    msg.setSourceEntity(126U);
    msg.setDestination(28606U);
    msg.setDestinationEntity(188U);
    msg.name.assign("MUYJVCCYPNEJLOCXIUNASLVFTZCXNSJCNMTREUZFVGOZCBMGLKEDTQDUOXHGBOFBMSQIXYKSMJMZKGBWDHOEMVHSLQIIDORRSQWFZDKPBRQTURNUVCEZQXBFPRJHVZLEOTYNLHKLPNVQTJJEKWAVKTCQZIWGLXGCRRMNYKJJOYBBAMJDXSDRGUKGUIWTDWPFWTBATGHHWIVPBLPQPCPQWAANFHYGLDYASNU");
    msg.attr_type = 202U;
    msg.min.assign("ZQCBVMXKWKHXIFBUHVZQVXUNZFDTUXUCABRMNYZTSYPERADJAGJHDCLOXGBLWPSJKPQGKNWXRIKZOIFBHGELRUGZLSTEFZMZHWJRQUCFZTNIFOHCANPHLGKOVCUXRBGJIIPFKVDGUMYWLZJDELQBSSYILNUCHYQKWOEBVATDBMRRHIPYPEEAUJCXTTLRNWDMXMEYNEKYPTRODIQNVOVNWVYJEOCGMSXAITCDPS");
    msg.max.assign("BFMHKNSEKZGZFJOXLKQIFAHWLABVICJVKPWDKHAIEOZFXGDMLBVORSRQLAGCXYMRTNSYPCSMVYJIEJQVDHQJDETTQSMIPTXNQGXHXEPWYBLRVQOOPSNZXCPZQLRLHABGFEIDBGTUAUWXOVOPEHHDJYEJHCCIAJZFQRMFCWISINUMAWSWDVNCWKPUGTN");

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
    msg.setTimeStamp(0.370715469709);
    msg.setSource(55203U);
    msg.setSourceEntity(4U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(80U);
    msg.name.assign("RESWTTWSGJJLOZIYZWVRJAPEMTIZMMRXENODLZKBGGPC");
    msg.attr_type = 120U;
    msg.min.assign("AVGZVYTJOYOXBCHIHBPLWMGJQEZTMOWCIUCFJAOJEAFSIACZJUXSVLKVUVARDCIROVDSWCGINTMBZMAYHHVKQJMBDBTLHDYOEZPSHWBZXWLESNLPLZDPWLTQB");
    msg.max.assign("DFUYAMQDCGKIHYHUBVZVTPFGMCVKZRHLFSSPWRPOEQZEHWWCUZTALJSFBYXAIVCGPYVNRMRXASLTRAGJZVBRRUDQGDYFUZOLQLPCJMWPWFYTSNRVJKFUWKEQEPBEBKTIVDGZAEJOLJHKEQVXOJJNOGPESZUNPAMIGCISLYCKOXXPFGOTTOSOZVXGQTXNAMMOAIMLKNKQMINUXIFHCBUNLHTTYRDKZCDEBILHHRDBCJAEYXJ");

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
    msg.setTimeStamp(0.597417840868);
    msg.setSource(34529U);
    msg.setSourceEntity(236U);
    msg.setDestination(36403U);
    msg.setDestinationEntity(79U);
    msg.timeline.assign("BDXADFOCEVRHYUNIATQZFCODRMUWQDWFLDTAURFYOTLKBMHIIYRNFVZAGAICQXIBTPOSTPIOJSWRWFDJOELMFQSMNUUVXNHUJCQDNPTQZCTEJLOYKRSBQKAZBEMPKUAJZQBL");
    msg.predicate.assign("QDLJPIBQCPNHOOALWDLRRCGGIYXYRSJVMEPXOFFFJJBQJTNDAWTEISUWAETGCHJUKFPZUQQBGOJPVIFSUIZDTRPAXEMUUBMLECSVMDWIOZTUCNKRKKLDMUMECOXCSFTJTHZTVVHNZHXYBPHWYREQKSWKNHXIXYLFVNQFPNOJKWOACRIRAZVGMXRBGBTXZYWZAA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BIUHYNMFUPCTKUTBAKOHLOPKOCVUOYSHOTLE");
    tmp_msg_0.attr_type = 12U;
    tmp_msg_0.min.assign("YSCNYWKMCMNEPJFBVAQHPIJETOZDNXBBGUWHJHFKWEIDX");
    tmp_msg_0.max.assign("BVUBIDGIFPTVKOVYNESXHNVBGZCMTMNDHPTTBAYZFLVROUBTQXIDHGGQONROFDSLJXDLOFGCWQSWUJJALYYVTAIZHGTUMIDCJWIRRXBCNQEOJSHKERTNHEAJLMVBZZCQKQXWFMLYPPKSTNHXEXOIJZDMLJBHDSCYYKFFKSDWEDRQKQCWCRSZYROJUSNAVAEUOMWCEMLEARHKSGJMBLIBAMXFLGUPHZIYKGKZPPCPOQYNUWVGQF");
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
    msg.setTimeStamp(0.462569769727);
    msg.setSource(40773U);
    msg.setSourceEntity(98U);
    msg.setDestination(38291U);
    msg.setDestinationEntity(203U);
    msg.timeline.assign("YAIKSTFIFBCQZYIOJMNPYDQCYMPWCZVJCNDZUESRAJSCJTBMNPXOAXWOMSHJUHUPXVRZGTAIOTAYINGWPOCHFFWLHDIR");
    msg.predicate.assign("OHRCXXZHWBLYNIPUEDIBNBJOGBCKVFLXZZTWQAXSCMOGULEPSNFTGRRPHKKVLPWDTVISUEWEJEUTPJGKHEIYYYLRXCRVCDPIUZGCNFAMLNJMKEAOFOMXUJCDAPEMVGTFVMYFJUHIBRZLKQUTTWPZMIORXXSHHESOYWFTAJNZAMJLBTYVQKCYNNI");

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
    msg.setTimeStamp(0.381138456476);
    msg.setSource(45480U);
    msg.setSourceEntity(129U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(91U);
    msg.timeline.assign("RAKRTVLQFZNWSZNFVQYORHQXKRVSXJFUHHNBUWCCQYDTUVVZJSIEJTLBJMOFOPXFNPMGDOQHQVEPGWOUZDRAUCWSQWFLBMIPXFHKBXARBRWSKPMGESJNALCZJAQJCAXDJXRSWOUEJPZCAHELDGKMOILBJMBGHBUFSPLPEECLZYPYBWEITYITTTVDWTHENDKOFFZQICZRHYNDMOZTGUOMNXWYDYIKKAVUIAMDX");
    msg.predicate.assign("WVITTJNNNYGYXSREHNEPVDBWUIBJLQWAX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JXSEMEIJKWUODRRFPNARXWMOQMTGIFXGKATIPAMFWBAEMBSURSV");
    tmp_msg_0.attr_type = 160U;
    tmp_msg_0.min.assign("XUIFWYNPAYMDTLEQBORVODFAZECZSIMPPVKAGCGUZNAVODXOKJVJIKFIQWHDSJOOLMAHLBLSEUYXNYXMKOTSTZQEDSBUMGAXTUKRNKFFQARCNTCJUCVRHVFSMZIMUPDCBLHJWZXEPKDLSTCUAEQWSJKGGIPUPLGFROVLNWBNVZYJDIEPWMUPQLXMHSI");
    tmp_msg_0.max.assign("QPXUBYSVLYGMARDKOQPYZEBDGHTRUNIEEKSVSRTRJQIDNEGVCCRVPXMYZDLBCBCMEOSHISXDZNKWGJKT");
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
    msg.setTimeStamp(0.353500443407);
    msg.setSource(35930U);
    msg.setSourceEntity(211U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("CFMAJDZDMFICUVJYIOWVQTUAJXKBPHNKTBGIVNZKCHDPDGBHEVUTKBITUPALRERBBYBHKMJESUQPQEHZMLYNJUWLACQHXFVSKNDKXZRSGJRDXSKREICNPOCJDNCOS");

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
    msg.setTimeStamp(0.80625778168);
    msg.setSource(2110U);
    msg.setSourceEntity(73U);
    msg.setDestination(8389U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("YUCOWZXHAWQGJSNJYVYIBEXFBRF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TNKQNYAVUHEYTFGLHPYCPFVYTFQNWTSMUJRGUSINBBONVACWKIEOCHXULEJETWMKUNRVNXKCSTBDLRVGDNLWLVXWBUQDPHHGOJAXVPYZITKUCRPMQOOBLCSLGLGPQNLK");
    tmp_msg_0.predicate.assign("JLIBNDCEHCYRQPSIPAMODNQMNSIIPS");
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
    msg.setTimeStamp(0.979527305901);
    msg.setSource(20993U);
    msg.setSourceEntity(121U);
    msg.setDestination(11710U);
    msg.setDestinationEntity(39U);
    msg.reactor.assign("LDUTFCRBDUPRVXWPSZQGQQETEWULXPAEFDZSLRGIHYGLFNDKCAVCLIXKZMUZNMSIHOIYUVSCTRWSMLMBBKSOQQKBNX");

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
    msg.setTimeStamp(0.921309846291);
    msg.setSource(49310U);
    msg.setSourceEntity(184U);
    msg.setDestination(799U);
    msg.setDestinationEntity(90U);
    msg.topic.assign("RLRAPTTTZOVSRXYBZFADOQJUOPKPOQZEWIJGAIJPILEZKXWHNBEVLAPMYTCMHUDYKEIBOCVRJFTQRQETZCBWLUNLSMZORVMQIVCGYMTQZEIHBYBEKAWRGAYK");
    msg.data.assign("SSQSBCBXISXOGHBTKUNHCNHKKLDGWLUUZYAZBZJDCBUCARKPXFIYPQZEHPFZILNXFHPQWVVCTARJEPZZACYBJBMEMUGIHSOFFNRMJZHWIOANRWSZDYXEOUEXKDYTNVFGKMBMWTMIRBHPDGPMNZKJOXXJLQJWHOFVVOPBGTJNYTLEKKXWGDVCTVIRAQNUSGAGYRFYGTDOETWVUMWRWCKLRVAOYQUJMQEODLS");

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
    msg.setTimeStamp(0.57479978006);
    msg.setSource(35713U);
    msg.setSourceEntity(172U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("HAROCVHYPEQQPPQQBBFCWCMFTOSEWLAVYHXMAXUHJLAEMDJUTXZYZVGAQYUTMZCYHQNAWQNDWWILTSUFJMCFGNWDQRISHUKBZVTUHOENZDANTIY");
    msg.data.assign("HHJEXFSLQPAYPYIZTMXPXLVBGTGQBAKMENXOAWWXYNWC");

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
    msg.setTimeStamp(0.730781339975);
    msg.setSource(41721U);
    msg.setSourceEntity(152U);
    msg.setDestination(37793U);
    msg.setDestinationEntity(79U);
    msg.topic.assign("FTMFTUNAJKACZVEMNTGEWBHKRJYQMXLXVORFLPWMRUXAYMGXWKFGBYEQORZYJO");
    msg.data.assign("RLHAFIKHNZEUQBPIJGCRHWUUKEMOTBEOXJVQVKLFANGBTZWSPCLLPXWVFYLKWUMJFBIYGGOTVX");

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
    msg.setTimeStamp(0.176644760964);
    msg.setSource(37138U);
    msg.setSourceEntity(11U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(24U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {-97, -69, 99, 14, -69, -50, -51, 74, 54, 15, -110, -84, -101, -87, 9, 6, -116, 41, -99, -82, 22, 120, 66, 71, 15, 114, -90, -65, -36, -103, 120, -11, 15, 65, 24, 54, 70, -10, -14, 120, -108, 25, -118, 91, 110, 32, -104};
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
    msg.setTimeStamp(0.637439847518);
    msg.setSource(30872U);
    msg.setSourceEntity(50U);
    msg.setDestination(2741U);
    msg.setDestinationEntity(14U);
    msg.frameid = 161U;
    const char tmp_msg_0[] = {-35, -13, -71, -41, 73, -28, -24, 83, 4, 104, 69, 37, -22, -92, -38, 43, 61, 69, 39, -6, 68, -16, 2, 119, 3, 59, -26, -101, 70, 49, -64, 76, 15, -115, -86, 28, 87, 65, 85, -75, -81, 30, 12, -92, 56, -89, -10, 38, -111, -59, 24, 114, 2, 108, -9, 39, 47, 118, -85, -119, -6, 65, 117, 45, -104, 120, -117, 75, 100, -10, 37, 6, -109, -83, 41, -63, -17, -20, -96, 73, -109, -55, -95, 107, 86, -42, -52, 14, 52, 56, -42, -49, -124, -42, 21, -24, -55, -68, 9, 92, -127, 9, 10, 77, -10, 13, 60, -45, 63, 7, -32, 38, 0, 26, -102, 9, -36, -93, 14, -69, 56, 41, 50, 80, -54, 19, 117, 122, -115, -68, 67, 32, 53, -47, -41, 95, 101, -45, -25, 67, 102, 22, 35, 67, 100, -64, 17, -45, -123, -70, 102, 90, -52, -49, -46, 54, 6, 102, 50, -64, -14, 118};
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
    msg.setTimeStamp(0.114308707861);
    msg.setSource(46774U);
    msg.setSourceEntity(127U);
    msg.setDestination(46347U);
    msg.setDestinationEntity(75U);
    msg.frameid = 158U;
    const char tmp_msg_0[] = {0, 112, 119, -60, -16, -94, -8, 30, -32, -59, 87, -52, -108, -81, -87, 96, -110, 33, -103, 111, -34, 96, 35, -49, -76, 79, 2, 100, -102, 28, -112, -40, 36, -29, 108, 70, -1, 44, 107, 68, 79, 7, 46, -1, 25, -38, 111, 61, 115, 6, 45, -80, -31, 57, 59, 87, -35, -117, 0, -58, -124, -105, 50, -96, 113, -11, 8, -55, 2, 83, -40, 68, -37, -86, 52, -41, -72, -1, -77, 62, 74, -52, 90, -11, -18, -33, 44, 113, -110, -113, 57, 1, -65, 75, -16, -17, -80, 122, 111, 79, -62, -62, -19, 107, 26, -2, 45, 103, 91, 45, 27, -13, 117, 91, 66, 87, 32, -126, -54, -95, 83, 73, 26, -82, -111, -82, 121, -6, 103, -75, 125, -8, 107, 71, 87, 121, -96, 99, -53, 72, -31, 71, -87, -22, 64, 55, -22, -58, -41, -105, 69, 34, -56, 119, 54, -127, 84, -89, 84, 108, -7, -7, 61, 12, -90, -114, -90, 45, 42, -105, -6, -53, 85, 66, 35, -90, -93, -87, 21, -2, -65, 41};
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
    msg.setTimeStamp(0.868795887802);
    msg.setSource(14191U);
    msg.setSourceEntity(56U);
    msg.setDestination(23124U);
    msg.setDestinationEntity(17U);
    msg.fps = 111U;
    msg.quality = 64U;
    msg.reps = 198U;
    msg.tsize = 84U;

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
    msg.setTimeStamp(0.281472175508);
    msg.setSource(27558U);
    msg.setSourceEntity(177U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(254U);
    msg.fps = 197U;
    msg.quality = 46U;
    msg.reps = 191U;
    msg.tsize = 151U;

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
    msg.setTimeStamp(0.507050771723);
    msg.setSource(38310U);
    msg.setSourceEntity(139U);
    msg.setDestination(49987U);
    msg.setDestinationEntity(90U);
    msg.fps = 79U;
    msg.quality = 203U;
    msg.reps = 45U;
    msg.tsize = 67U;

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
    msg.setTimeStamp(0.202674179452);
    msg.setSource(8715U);
    msg.setSourceEntity(195U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.952529159311;
    msg.lon = 0.367927334212;
    msg.depth = 134U;
    msg.speed = 0.814656584654;
    msg.psi = 0.497068057081;

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
    msg.setTimeStamp(0.492827682659);
    msg.setSource(41199U);
    msg.setSourceEntity(179U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.0115791708767;
    msg.lon = 0.901210207121;
    msg.depth = 129U;
    msg.speed = 0.862132360518;
    msg.psi = 0.696561679682;

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
    msg.setTimeStamp(0.733185172673);
    msg.setSource(30474U);
    msg.setSourceEntity(144U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.825267660038;
    msg.lon = 0.540566997022;
    msg.depth = 156U;
    msg.speed = 0.433801751778;
    msg.psi = 0.6225517615;

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
    msg.setTimeStamp(0.76125073052);
    msg.setSource(10951U);
    msg.setSourceEntity(140U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(55U);
    msg.label.assign("TMLLSRCOJZIIHREUZZBEVIQMQHGEAOVYGSGDVDPGSQNGRBFXNYGUGPSRKFMDFLNGTEJETKXUKDAIDOTGTIHPAZNNWWBGZZSBNBHKJKPMOZWMKVXCTDQHPUAKAVFELCBRFAVCODFKFNTKEPWAJYMESZVIOSHJHCNCLIBJTQRJ");
    msg.lat = 0.698210976861;
    msg.lon = 0.565073985281;
    msg.z = 0.734843144633;
    msg.z_units = 108U;
    msg.cog = 0.995347069738;
    msg.sog = 0.480965253248;

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
    msg.setTimeStamp(0.622441638168);
    msg.setSource(1369U);
    msg.setSourceEntity(246U);
    msg.setDestination(11942U);
    msg.setDestinationEntity(123U);
    msg.label.assign("SHBCPVXCMLNQQOUWDTZJESBFJEXOJWCSGQROLJFATRTSJISUKNZRBZQXACSEPAPVOKFRZDWIELAPALUYVQKCPGIFHBOPXKIMR");
    msg.lat = 0.122830603051;
    msg.lon = 0.394863299124;
    msg.z = 0.411067059413;
    msg.z_units = 164U;
    msg.cog = 0.743905779012;
    msg.sog = 0.33300555413;

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
    msg.setTimeStamp(0.866181286941);
    msg.setSource(46267U);
    msg.setSourceEntity(219U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(176U);
    msg.label.assign("YWKPBJXSFLCZXHZLKITUFGBESJPLPFLQYPHCXHTLXWWJCDEHSDRFKWQSDCPPWPBEOUHSQQHJZOBRSVLOQFZGGJKVFAOTKMQNXYHFGNRKMGKYGXOZWAWETCRGIEBJVGLCWUVECKNNTOINUYLSHYLTMJLHXRCGHIKDJEERQFAYYZMC");
    msg.lat = 0.716315536631;
    msg.lon = 0.494212606091;
    msg.z = 0.420721731782;
    msg.z_units = 153U;
    msg.cog = 0.97035821311;
    msg.sog = 0.855843991565;

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
    msg.setTimeStamp(0.589186718057);
    msg.setSource(17752U);
    msg.setSourceEntity(214U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(61U);
    msg.name.assign("GIEMXLJAVTUCHLGLXEQNYAVVOJZIZFTXPQIOHHNREQNDUERXLBDRWLTATBRKMECJTDEQVFLQPMRMFYIBLPYIGAFSXHMCUTJDZPLQOKMSUBWAZBUGJDQWNCHRIURKCSWSHZGSAHFAYPZJORYVFAQDYKNMUGVOOQJFBYD");
    msg.value.assign("DTKPTJWMUTHZAKRFECVYRVQAELNVUHLIZTKCUBFABLAOJZJCYXNMREXDUSPCIPXLTIXDCMIGQOQDQBOCCIO");

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
    msg.setTimeStamp(0.830587518933);
    msg.setSource(19295U);
    msg.setSourceEntity(154U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(217U);
    msg.name.assign("OGGGYXDWMBVZDEFGBMBSNWIMPVOHCBQAMXWLYAIKJIYMTCTRASJMLULYZKRDYFKWOGCEJHDHGLAETPCAPXXDJRSXMERZSVBNFVTPLHZOVIPJWNCIFBMCIZVTUKWJYDBJWIYTFVZHRLROZGLKMCUTNDSPZOXYKTEZOSSGDQGNKTCUMQRXJZAPUWHUFPEQNDHNQEBWHCFUYSLQGQTNVXOSEUANAKSC");
    msg.value.assign("JQZXGWKCKWBWLNRBHIJMVUYCWFPZKCRLOVUPB");

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
    msg.setTimeStamp(0.899539436817);
    msg.setSource(58945U);
    msg.setSourceEntity(91U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(60U);
    msg.name.assign("UXUTMMNZOTWMIFBDFNJFCZCYLSJFRDHVOZIWGMUKVARWAJGQFFPAEIEWMTQCOC");
    msg.value.assign("ZMNLSAWNBYPEYZLUBHDVWCNGGOCGSRGZVLPUSCZKFYHIJVRYLNZKHXLSXAJMFFDQUTRLNQVAPRHHGFCPPBFEBDLYZONHZABAWWMBUIBCRCDMTLDOHOTNHRQXEKFFGEMKSQQYOAFVTVTNSPS");

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
    msg.setTimeStamp(0.960257338331);
    msg.setSource(48122U);
    msg.setSourceEntity(203U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(121U);
    msg.name.assign("NUSGXUMXPEYPWYVQJZYRXNAVTKJNRZVYDAMEHARGBGHFTSHVUUUYQGYDIZTRPGTVERAFRCKFNBCCRLBDISFGSVATKIMYSHJNTCDSIEAZLJPPMSTIVAXWKSYPIWDNKGIVHDLQDOLJ");

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
    msg.setTimeStamp(0.0324119099109);
    msg.setSource(13099U);
    msg.setSourceEntity(144U);
    msg.setDestination(49971U);
    msg.setDestinationEntity(175U);
    msg.name.assign("SDIKDNPORCEHPOPFVCKGPYYREYQAOKWFSERPZLILSXPMZJKBDCUWHAXAKQKENWEIASQNQZUUJUXNMVGVVOXQORZMTMMQHHMYIIXLGBCPBYFEMOHZKQWSTQFBZOZGJTFDYSHUXILMLTDSZDVLTKLDCYIUIFLYTDCGIJCLOVBWQJFGWWYTANCOSFWTKVJRBNNHJRXBVVG");

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
    msg.setTimeStamp(0.424876038626);
    msg.setSource(64464U);
    msg.setSourceEntity(39U);
    msg.setDestination(29373U);
    msg.setDestinationEntity(225U);
    msg.name.assign("YVYNHNICQYKWOULEJXMVCXQBRUIUTWLLERBDVCZGEERNYVPSTVFJCFVVOJCXAYHIQXFCBRROEHQGUAAUQIEXIMSNZWHOFJCIWSZVUYBTDMUWSEGSKMPAGQRDNPJVKMPPJMLEPWCBRWDBAOWIYBKDYDMNTZWGHNCJSQLLVKQHEZKNMHBBASLFOENKZGDDGTXKOWAP");

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
    msg.setTimeStamp(0.153356145194);
    msg.setSource(21571U);
    msg.setSourceEntity(99U);
    msg.setDestination(47228U);
    msg.setDestinationEntity(89U);
    msg.name.assign("XBTGRHUXQXFKONZCWQBVYOFQIZHQYNSETCUAAGIDSRJZDMEYNXSSBKWSCKZPVEUVZXUPAQJMWFXSTNAIODTPIYGWHIMFPXDDOUCWFGESATGLMCCEWGQEBX");
    msg.visibility.assign("SUMTEMIKGZPRQFIUVKKDUERTFBVTEBODATPSLJDIVNFZALQWEQLDOKLJJJXCWEGLTDMFNYREYKJUNMOYCPOD");
    msg.scope.assign("DOSJCVAAMLXHETKZYLLNHACIRNSQLXHNDOSDYJWCBFXKKYMLRUMAPMUAHRNISBTWDTYJMURQLESADKFKDUWQFWCOZWJMKVYYNPPUBWBV");

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
    msg.setTimeStamp(0.664155031466);
    msg.setSource(27360U);
    msg.setSourceEntity(202U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(147U);
    msg.name.assign("KBTZUTZJONUCRIXWVIOMNCVFBEOADKWSSUUGEEZJGWRVHRLFEWIPPRQKOESPCXUALYYMQIZQQMJPAMNIWACDTTGHRSMSTPGPNBYVKCCDLGQHDNYJGNSLENHZTCJGJQXBDUPNCAKUQOIPSLGFDIAYUEXVKPWOIBJDOBWLXCDEFWYHVVYDSFF");
    msg.visibility.assign("YQWARFCSEAPPJVOQYNEWSBZLMHGZLUOPRFXDNTBQHJCWTMKSDKVQVWEVRINGAEHJJZEXZHDXPBOPDZWQINMRXLQCNATRFFXJGOFSOOXGKVQSYXADBCXCRUFMPDBM");
    msg.scope.assign("HZZACMJRUZQQUDXCJZOSUDVI");

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
    msg.setTimeStamp(0.538384838812);
    msg.setSource(65436U);
    msg.setSourceEntity(119U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(155U);
    msg.name.assign("MOBFTBPKWUDKSBKGKHYCIIMZCATPMYHZJHQURKACEERYWUWUUOIMTAHXFSTGCXSRDRW");
    msg.visibility.assign("JCHOAGMFSCTRULSODLFWDSTYQKBTLKBWBVNDMYVWFTYVRBUMNEVRKCAINAUVJXLPHWSRXQTWRORUNHTMXSGJXWGNGKNVPEPAXVBSZSVABPRCJFKXIURSWBLYJDPCPQDQLGGQAXIZKAYZBEXECOUZDNKDFXOAFIXABHJZZF");
    msg.scope.assign("LJXDLQYMWREVPBUUVRDEWPIEIELOQBLORZJGMLHAPVIRNGTRXCMFFAVDGXOYYBFZWAXLKAPNLCUMFHSNKVKWYXDRBCTMHCSDGANOIWBVGIQERZKMDFAXBCDPRKINHAJKPTYDOUQFOSXKTSNCUFJZZMNQTISGEZZCUMJOTFPZFJNXSETIEJJCTRQESUKSWPVJAHHWVCKVFOQ");

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
    msg.setTimeStamp(0.213235620092);
    msg.setSource(47672U);
    msg.setSourceEntity(145U);
    msg.setDestination(14673U);
    msg.setDestinationEntity(72U);
    msg.name.assign("YMZLOXCLYNHROOEYZRJKDUTMBSNDAYQWUDKPFNEHQLKTRKOSQEVTJAUMMHTQEGNRMFDAUTWEFSFMPTZSBGCHHVZJUZUQLBCWWICLZKLCXFOKRSFWUIVJYWRMMXDZVNVIPYOTUNOQSZEZIPXRFGPCCUAARWQFHTOCJCPGDPEQNHIJBANPYXYDNIFPGVEWKMJA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KVOGOEHZOKJIJTQEXMBKYFHARBNMCWPOWEINACIZLVIUUPUV");
    tmp_msg_0.value.assign("ZYNAUMZQRWDFPCFFITOYUOFVXMXQBJGROHQDPLGRKVTINQPZNJVRQRNSMMWOBWWLHOAEZSSAKFLSPEAFAYXRBNSDOGWZCIWCBLDMEIUPHXMKEYJHNVDLWGCRPUNHHAIKOTVBEHFXSFWZLSEXUDJCYINHDDXPPLIVBWUKSBYXJGVRBRWTVGPZJIEGKQBEJYYKU");
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
    msg.setTimeStamp(0.139906979252);
    msg.setSource(41655U);
    msg.setSourceEntity(97U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ROPCTAMEEMJQBXHNPGHIASCYHLDTDZPJWCTFRGQKAZMWSTQSOQSAXDDTMVBPAOBWKUAZFIXVPHYNBKGJANQVURZBARGOVNNFNQIHGNXISDQIOHNMYYQIJHVEDOHWZSZYGCSBCGLBGPILURQKTDKZXXFWUFOFWVFOIEHUVWKEZJCVJJECWZTMUTKKDPNDRRISRPRKVLOWKSEOFECBYLMZLXCAJNMCEFSJEXLDBTUHPPRMYUWGYUL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SYBKRCHHZPAERICDDEF");
    tmp_msg_0.value.assign("QOQZJSDEYFNAIDGIHWBIRNDKBATBHHRPKYLUBODZUICGSQXSVEMGOTQWTRLYFHPHJIZHUYDNLWTPSJVTNCQUCDGLOMSRULVYBCTTBWMZVLKCABXMXDJSCECAWASOOEJXWZMYZNKCKTENJFYEKFWVXFBVUAYLKUEKGSRREXHUVBNRRGPBXJHLAQDMNPOGQD");
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
    msg.setTimeStamp(0.884236321981);
    msg.setSource(14980U);
    msg.setSourceEntity(225U);
    msg.setDestination(16346U);
    msg.setDestinationEntity(134U);
    msg.name.assign("QFEFXSEJVKZPUJIOISGNIRCFG");

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
    msg.setTimeStamp(0.814911534373);
    msg.setSource(50424U);
    msg.setSourceEntity(241U);
    msg.setDestination(36017U);
    msg.setDestinationEntity(221U);
    msg.name.assign("NPVEPJIBUTHSVKWTMJXMZJLZOGSRIFCRBIFKTZEPQLCSIETKACYIBPGKKDRLVDZNVBFWKDUDSSCJSYTHGRSECQUZGWENTZHEAONLQAJWWVUWTAOMYHWNMCO");

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
    msg.setTimeStamp(0.626087706383);
    msg.setSource(1757U);
    msg.setSourceEntity(80U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XEXWDFOCWBBTISASJCDPMYWHLDYXENGPVZRSWJXEIMGLHVFDFZKGQIXHFCRGFUCWTQPMIUWHQJSDUSRVZLLQWOHAGHUCGBBECOMFAZKTCBUQSQVAMNJCEKDWTWHOVUYPMZRCLBBDGULJOIXZHQILTYENJZMNVXZATXJEFKYNMWNEGMVRNX");

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
    msg.setTimeStamp(0.224388979304);
    msg.setSource(56969U);
    msg.setSourceEntity(127U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(211U);
    msg.name.assign("PWVFJJDTRCKWSNBMEYWIRMFNSOUBICOWBAZPZBDDXJZMELHAGLXDSVGJXGWKBZYOWOQODEZSMPPSQGIYKQRUHAKTJDLAULLQJYIEFHSQTURGFFVKVH");

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
    msg.setTimeStamp(0.317257536017);
    msg.setSource(59278U);
    msg.setSourceEntity(15U);
    msg.setDestination(11923U);
    msg.setDestinationEntity(151U);
    msg.timeout = 2695830673U;

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
    msg.setTimeStamp(0.864186357511);
    msg.setSource(412U);
    msg.setSourceEntity(73U);
    msg.setDestination(25310U);
    msg.setDestinationEntity(123U);
    msg.timeout = 2303867812U;

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
    msg.setTimeStamp(0.458151144874);
    msg.setSource(35851U);
    msg.setSourceEntity(64U);
    msg.setDestination(11279U);
    msg.setDestinationEntity(162U);
    msg.timeout = 3944614274U;

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
    msg.setTimeStamp(0.30875984977);
    msg.setSource(36653U);
    msg.setSourceEntity(30U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(233U);
    msg.sessid = 1770255547U;

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
    msg.setTimeStamp(0.447284580096);
    msg.setSource(35945U);
    msg.setSourceEntity(147U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1338964049U;

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
    msg.setTimeStamp(0.489839523809);
    msg.setSource(379U);
    msg.setSourceEntity(28U);
    msg.setDestination(35618U);
    msg.setDestinationEntity(177U);
    msg.sessid = 346867641U;

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
    msg.setTimeStamp(0.729672634766);
    msg.setSource(56860U);
    msg.setSourceEntity(36U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2851556496U;
    msg.messages.assign("FHQRMWNTOQSEMRQVXRUDZXOAVVSTUWUZZITSAYIJWKAILYXMACXPGHLAFGSKJPHZKPJCPSJJUYBNWLBLTVTCSCTHQMOYYUIKVHYKIBNKDDWNQDCQJRWXVORFGBENQVXZJFZPDAFGZLIGFNFNTMGFMKQNOPSDMBAOEJLFYZGEPEBCEQMLSMEHEYC");

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
    msg.setTimeStamp(0.15773896492);
    msg.setSource(22432U);
    msg.setSourceEntity(181U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(156U);
    msg.sessid = 3461254377U;
    msg.messages.assign("JAUMDSJFOUMZTCMYIPSKEFDSKSCDNTILQJQYUZQZAYAMUJXTOXEJPAZBCNVDZZYXGHHNIRHRLWPXQGGHZQHTCVGFGYENJCUWBDXYCSYGNWMSZSTVPHRZYKRBOIVFWBFNLIOUVRPJILVAXNHEKTMOLVDMNSTAKNXGQUOKJITIBAELBCAXBUQBLLHLSMFRHKVEKRTUZUYWWQWXMROKPDWNOFSGVHEOCIGFWXJYFAFEPJBGVKDPPEBQITRPODW");

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
    msg.setTimeStamp(0.92616716657);
    msg.setSource(37529U);
    msg.setSourceEntity(118U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(11U);
    msg.sessid = 2415900601U;
    msg.messages.assign("HEKONURYECRNOTVLWRSXDHFMDFBWVTTZEMJFRLBCJMWAXLIIS");

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
    msg.setTimeStamp(0.829072614957);
    msg.setSource(26119U);
    msg.setSourceEntity(15U);
    msg.setDestination(46777U);
    msg.setDestinationEntity(218U);
    msg.sessid = 1449044361U;

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
    msg.setTimeStamp(0.414611805183);
    msg.setSource(1727U);
    msg.setSourceEntity(17U);
    msg.setDestination(50018U);
    msg.setDestinationEntity(217U);
    msg.sessid = 3209436436U;

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
    msg.setTimeStamp(0.512729974736);
    msg.setSource(28976U);
    msg.setSourceEntity(69U);
    msg.setDestination(1295U);
    msg.setDestinationEntity(216U);
    msg.sessid = 3148375062U;

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
    msg.setTimeStamp(0.637395960136);
    msg.setSource(17541U);
    msg.setSourceEntity(229U);
    msg.setDestination(61729U);
    msg.setDestinationEntity(172U);
    msg.sessid = 1248777385U;
    msg.status = 16U;

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
    msg.setTimeStamp(0.906184430788);
    msg.setSource(19992U);
    msg.setSourceEntity(231U);
    msg.setDestination(41405U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3321230117U;
    msg.status = 169U;

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
    msg.setTimeStamp(0.664074384763);
    msg.setSource(17756U);
    msg.setSourceEntity(206U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(89U);
    msg.sessid = 3112132383U;
    msg.status = 85U;

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
    msg.setTimeStamp(0.305078839955);
    msg.setSource(30154U);
    msg.setSourceEntity(125U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QHZEMCJCHMIWDTTIDZGPXQIJSHWBZTUKJZANGBFNOILVWFLLWTDLDJVQ");

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
    msg.setTimeStamp(0.272671814909);
    msg.setSource(63725U);
    msg.setSourceEntity(73U);
    msg.setDestination(42260U);
    msg.setDestinationEntity(10U);
    msg.name.assign("HIWYNBLBAABMIXTQMJHMUPCAZFJWKESDXSQFNMWQFTJYSAWXROTSVTBUXIKCDJBSGYQXOAYSUYQDHAWCGUNUFZKRLZHKPDBUZVEEKWJCZPRVMPYKGVVORNJRAWNZEYOLOVJXDNPIUUOKSLZKDOAIELGSUDZELGRJCNCGROJIMLGIVJFBPEKSYBFMHHVRTMIGXKHOEXMXEADHBZFPQNTQSVUTXPNC");

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
    msg.setTimeStamp(0.239594162334);
    msg.setSource(31419U);
    msg.setSourceEntity(50U);
    msg.setDestination(32168U);
    msg.setDestinationEntity(15U);
    msg.name.assign("CYDPDELWDCOHMFQSLBLXFYVAXJFEMRTVKFJMKTABHOIUMRQR");

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
    msg.setTimeStamp(0.908341772845);
    msg.setSource(57478U);
    msg.setSourceEntity(191U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(152U);
    msg.name.assign("EHUTGGYOCBFQGHDTBILVCUSIWCYBUQDMRWCBFJZJIILRKQCRGYRLFASRMVTUOVFZSBTWXLXSJPEWGMIPQCDVBTCTGDXCHOLKLNKENRPVBAKBPMUYMAWAXVKJHFPSRHOEDIAIHOTKTHWUSXCKJ");

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
    msg.setTimeStamp(0.222399248495);
    msg.setSource(14815U);
    msg.setSourceEntity(80U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(178U);
    msg.name.assign("XBZHPMLDRBGLHEWWZVPWBTZKGKFSQUPIHJXEMIYTGBXCDHZAAKFVVCIHYRFPGROXCMBYLLJNSYWRNVBIIJLYJWWQZEEEFKKIWQYDIQDUSUHPKONMPFLOSXRJVEQNXLZKTQQLBNIXFYLE");

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
    msg.setTimeStamp(0.754266564838);
    msg.setSource(23989U);
    msg.setSourceEntity(112U);
    msg.setDestination(54285U);
    msg.setDestinationEntity(154U);
    msg.name.assign("RFBJVPHZTEGQDZQXFCXJTSLCNRBZCTTJVEMARQNUCFHUXVHSKDFORLZTZEYSSQUIVXYJPHVWLLNMATGINFCNGOKYYKVDJNBHENUXUEUWQHQDXPHGEUQZKDTYQPZDYTKSSMQERWOFSPOGJRVBLBUIMEONAPCAFADLZXDFEMFJHAVGMIDYNXAIIGWDVISGIIOLLRWKKMOESBZGPWOSLMJBKPHWWCJNXR");

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
    msg.setTimeStamp(0.107755368322);
    msg.setSource(34136U);
    msg.setSourceEntity(75U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(63U);
    msg.type = 201U;
    msg.error.assign("FBQBYCTKVDBLOFHMUSPQWWXSLYQIOGKJPCDNKYOHDXZRJBAUGRZUIM");

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
    msg.setTimeStamp(0.22502862807);
    msg.setSource(27650U);
    msg.setSourceEntity(46U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(79U);
    msg.type = 156U;
    msg.error.assign("ICTSWOUCXMBVRLWIHBWHOLLGDQWYKYJZFHUDYSUZXKPXFKBYSDMPDKLAXGUYIRTXHNUEVZPJFBNMHQWOJZVSESSGHAYVELDCIKBFECAFJCIGPVPMXTDOSFRORRZDIARUNEPAMTBQZRCFRHXMSIGGLXPJPCOMJQWHYQKVGSOFZAWNDRNEGBTDTNAOPAEVLQXNGJWLZTTBTORSVHECONWYUEBKWKP");

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
    msg.setTimeStamp(0.221137826329);
    msg.setSource(59984U);
    msg.setSourceEntity(206U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(143U);
    msg.type = 112U;
    msg.error.assign("HARDCKHMEYVLDUUFKYDIYQOZIEPEYSODXPLUUHTQQZYZPKGTVSPRYBXGIZLUBHSRISALCADZUEIEIVAODZJOCWJFVAGGPRRWHNOBKLRUQGMVNMALMDGBPZKRKCQGSQMDONYFBJLVMJTBUPCNPCJBOXQUNJVNINJFFKWTTAWXXKVWVAWMSNFRHZXDZJQWVFPSRCHWZPD");

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
    msg.setTimeStamp(0.608247178751);
    msg.setSource(21856U);
    msg.setSourceEntity(11U);
    msg.setDestination(63410U);
    msg.setDestinationEntity(69U);
    msg.seq = 15569U;
    msg.sys_dst.assign("XJUBLLZVEKBMDVYEYWCUHDTSAYDRVBQ");
    msg.flags = 235U;
    const char tmp_msg_0[] = {104, 44, 90, -50, -78, 105, -39, -8, -122, 123, -34, -107, 13, 33, 122, -105, -30, -47, -117, 15, -46, 18, 56, -125, 126, 1, 53, -122, 122, 38, 33, 112, 24, -50, 12, -73, -89, 4, -81, 91, 67, 124, 69, 61, 123, 46, -112, -29, -40, -44, -16, -124, -73, 123, 56, -36, -29, -79, 1, -22, 8, 24, 41, 117, -114, 107, 18, -118, 121, -48, -12, 78, -43, -54, 59, -40, -61, 113, -20, 61, 92, 51, -115, -28, 85, -9, -27, -85, -5, 124, 53, 123, -116, 83, 93, -53, -28, -113, -108, 80, -87, -16, -118, 32, -53, -41, 31, -37, -68, 99, 22, 75, 96, 25, -20, 113, -75, -100, 99, 56, -99, -126, -121, -116, -56, 106, 65, 57, -8, 22, -112, 22, 39, 62, -27, -120, 45, -89, 41, 120, 111, -122, -33, 73, 68, 69, -70, -98, 99, -99, 35, -24, -103, 84, 19, 77, -121, -86, 1, 37, 8, 22, 68, -108, 59, 88, 121, -23, 39, 113, 98, -6, -67, 48, 60, -120, -14, -27, -116, 44, -5, -57, 0, -114, 81, -23, -65, -7, 23, 80, -57, -107, -63, 111, -62, 106, 88, 52, 85, -73, 37, 3, 52, -61, 82, -39, -124, 70, 106, 31};
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
    msg.setTimeStamp(0.478667779641);
    msg.setSource(47930U);
    msg.setSourceEntity(165U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(59U);
    msg.seq = 51961U;
    msg.sys_dst.assign("ZXSUIAKCOVZQUIKYHVDIMBWCXDTRPMDGZXRVALLALSTFSBVKYWESMFQHJZCYUHPDNYIEDTRLQZJWAFLAZANSW");
    msg.flags = 91U;
    const char tmp_msg_0[] = {117, -94, -101, -83, -6, -27, -109, -56, 119, -105, -31, -65, -70, -52, -56, -29, 102, 76, 95, 124, 6, 11, -92, 24, 126, 97, 91, 44, -20, 100, 74, -51, -53, -33, -118, -112, -16, -27, -45, 83, -98, 47, 107, 17, -61, -10, 10, 71, -78, -103, 116, -38, 63, 19, -70, -81, 83, -79, -7, -109, 25, 4, 20, -26, -81, 25, 119, 91, -76, 94, -75, 70, 94, -54, 38, -48, 125, 27, -43, 97, -3, -101, -14, 50, 26, -57, 71, -32, -16, -29, -99, 38, -25, 19, -118, -87, 112, 60, -99, -68, -96, 50, -111, -45};
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
    msg.setTimeStamp(0.849771928601);
    msg.setSource(40268U);
    msg.setSourceEntity(53U);
    msg.setDestination(28572U);
    msg.setDestinationEntity(106U);
    msg.seq = 3800U;
    msg.sys_dst.assign("ZELLONXIWDHSZCJXSVELOMXQUERNGDTYXGBDTHXYFXJKQPJCMLPHNWCYFBSPXIQBJRVUADBKDERGZZHQESQBGUTPWAKLIOPSCUOUSPNQMGOSWMWICGFVOALYWQVIAWNYDFJWESIJHPKOTKFRRQKVUIRIMRJAMMFAKVTTMUYVZAGHHDNYZJGILPUKACOERVCKCTAUBTEMAYDJRDZEXPKSBGYVFZEQXYSHVLNRCWBLNHFU");
    msg.flags = 244U;
    const char tmp_msg_0[] = {32, 64, -58, 113, 121, 56, -82, 1, 112, 40, 99, 72, 1, 3, 44, -9, 125, -119, -126, 82, -88, -50, -43, -83, -77, 31, -54, -51, -61, 76, 42, 52, 21, 25, -38, -19, -34, -21, 120, -104, 126, 93, -117, -84, -110, -81, 107, -101, 28, 40, -8, 114, 21, 126, -120, 89, -114, -47, 102, -91, 80, -1, 19, -113, -115, -17, -63, -127, 77, -92, -32, 14, 22, 64, 100, 86, 126, -104, -93, 87, -42, 103, -101, 27, 32, -83, 121, 6, 3, -92, -117, 72, 54, -115, -86, 43, -32, 70, -76, -13, 62, -31, 68, -77, -86, 126, 86, -100, -11, -24, -3, 27, -23, -89, -41, -13, 36, -56, -29, -10, -70, 110, -40, -81, -59, -55, 78, 103, 93, -98, -48, 86, 19, -48, -90, -73, 96, 108, -56, 64, -69, 35, 82, -126, -108, -120, 117, 75, -126, -76, -76, 8, -109, -125, -26, 1, 119, 57, -66, 107, -52, 37, 85, 36, 71, -114, -92, 102, -118, -11, -125, 2, 91, 83, -71, 28, 67, -50, -81, -58, 36, 125, -23, 63, -93, -28, 112, -108, -54, 39, 69, 66, -91, 40, -20, -19, -30, -68, 76, -127, 102, 103, -63, 59, 116, 86, 11, 8, -104, 116, -32, -81, -18, 45, 1, 72, -114, -113, 57};
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
    msg.setTimeStamp(0.652491330687);
    msg.setSource(44889U);
    msg.setSourceEntity(32U);
    msg.setDestination(33233U);
    msg.setDestinationEntity(156U);
    msg.sys_src.assign("DSNORAHLLMVUAENPIYYECIAOWIRVLDVWKSQJKAHBIELEYHKPCFZQKDJXRLXFFJGMXYEQKWOVCQWPJWOMUZWQNXEGFGEQHZNFHSNANEIOVTTGBHMBUIYPUPQU");
    msg.sys_dst.assign("GLPDTHXDWJTTRCYCQEWLBUCDDEZYULVCPENJIOVSZGYNPYIHEBWVYUSTFQHMBKLRRJCQXBQNGIJSAUCFHDAQRMXFKZCMWLPIXMUMKBZHZUGTCAHMNTW");
    msg.flags = 161U;
    const char tmp_msg_0[] = {33, 59, -116, -7, 44, 94, 10, 21, 67, 126, -22, 27, -79, 54, 28, 64, 33, -29, 15, 56, -22, -119, 112, 84, 74, -1, -3, 125, 3, -38, -11, 108, -99, -41, 90, 14, -94, -39, -34, 26, -51, -9, -82, 0, -64, -7, 107, -74, 110, -93};
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
    msg.setTimeStamp(0.20660580233);
    msg.setSource(16101U);
    msg.setSourceEntity(32U);
    msg.setDestination(38255U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("XGNQDTTLSGVRSPDYHSDZMMSMVVLPRAOGFZKOMXREJWVBDIKFRINVSREYCVNEISDFFJNYMZWZYUFVALTZGFNSAUCUEKANOQZZJIQKUDFPNJBYEHWYVYHLXLUTPXXRHADHUZXRJLFQQWFKHTAGEOHIIDQDJMDBGOQMCTEXZPJRONYHWCPYPEWCJEACKISTMWCUTTINWZNQPWGKAUCQIMBKWCXBPBOSIYGLMTUGPHFQACJLOSGBJRHVXOBB");
    msg.sys_dst.assign("BYRMWUBCTPVGSGPMUZDFNABHXISOTPSDIEIFZVTUUZPQDKGGOQZNZGJHYTCPQBONRXEYJPFGMVAVDKAEOMTXFWPKDSJFWNCCDLLCRTMELMHJLTTZHNIQWAYOJLYOYQWUKGKBGJILGVBQZI");
    msg.flags = 86U;
    const char tmp_msg_0[] = {-90, 83, 15, -63, -76, -127, -51, 92, 113, -84, -6, -55, 96, -103, -80, 24, -74, -8, -37, -84, -83, 98, 84, 35, 36, 87, 102, -11, -28, 114, 122, 30, 53, -100, -27, 24, 100, 51, 103, 41, 63, 23, -18, -79, -86, 112};
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
    msg.setTimeStamp(0.417951038805);
    msg.setSource(64416U);
    msg.setSourceEntity(233U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(83U);
    msg.sys_src.assign("BRWFPQVFQIRCFFMAHRGAQXIROOEKPONGYJCVNXMMALTVBOEIUUZNTHBKVCANXHXZPELOSJUQPJYYSDYNZQKJOHKFKURQNBY");
    msg.sys_dst.assign("QKOPXINWZEYSJXQAQEXXKUGZHWFVYYCWFEPVZSRQRVXDLIPHQTEVKLBSLNYYFULODEBKZPUBMAASSSDCGFJEWIXRGDDELLOPDGVJCTWFZDVJONSCKZCPZOANUJIXXIERMFIRTOYYMNDCALGPUKXYJIBGUKMOVQLHINRNZIQPKMRQCWHHDJUHZSFIKMHLUYCJMHLUQOWOYGMGOBDSEAKHATSTEBFB");
    msg.flags = 108U;
    const char tmp_msg_0[] = {4, -77, 75, 38, 52, -31, -34, -32, 16, -78, -66, 17, 64, -33, -117, -124, -9, -32, 33, -124, -113, -67, -92, -52, 55, -74, 76, 26, 72, 14, 98, 114, -16, 15, -21, 63, 107, -79, -50, 73, -107, 26, -71, -86, -37, 84, 103, 47, 63, 33, 41, -92, 126, -95, -124, 95, -25, -15, 83, 27, -78, 92, -62, -10, 94, 83, -89, 70, 86, 27, 6, 85, 27, 106, -119, -103, 49, -115, -90, 76, -57, -109, 77, 10, 62, 39, 34, -63, -43, -83, -99, 76, 13, 48, -71, -9, -70, -72, 35, 91, 125, -85, -109, 49, 1, 42, -114, 114, -90, 108, 40, -123, -81, 84, -10, -72, 5, -128, -119, 62, 24, -115, 41, -83, 37, 109, -2, -7, -12, -68, -78, 22, -82, -33, 104, 14, 13, 118, -57, -51, -114, -29, -46, -3, 27, 61, 96, 120, 31, -64, -89, 27, 78, -19, 27, -123, -97, 115, -97, -89, -28, -78, -65, -94, -112, 54, -7, -22, -90, 120, 105, -26, 23, -118, -43, -61, -48, 3, 114, -58, 69, -88, 35, -100, 18, -27, -23, -120, 67, -105, 107, 103, 80, -59, 103, -124, -29, 48, 104, 116, 102, 1, 94, 15, -12, 92, 107, 86, 0};
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
    msg.setTimeStamp(0.191833949231);
    msg.setSource(47815U);
    msg.setSourceEntity(15U);
    msg.setDestination(10822U);
    msg.setDestinationEntity(23U);
    msg.seq = 31660U;
    msg.value = 164U;
    msg.error.assign("NNRUMISRRNTBUBJVKGSUBUWHCYCXHGKYQZDWSRFYEFZDDPKRRWNMFPV");

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
    msg.setTimeStamp(0.506682822312);
    msg.setSource(48740U);
    msg.setSourceEntity(57U);
    msg.setDestination(52020U);
    msg.setDestinationEntity(200U);
    msg.seq = 54055U;
    msg.value = 70U;
    msg.error.assign("SOLHBLPQXRUHPLKVYNXSYSMTCXPOKYNAVKPUHSZWXWVBWXMIIJAEHYZJDAYGNSYUVTDZGSOFDQLIETRPVXQQIWTSGEFABYEMUKNOPQZGGJMWKXCWQCHTRDCTKVJRJNLZZOZFUHDRKWILVRQSFHIKDMNXRJAIVEQWNGTAFCMBBBJQSFSHOMFNCHMQKJEOEIPIOJPGUUEMFKAAWDOBADJBLZPTGEXCPNYDUYCWLRZ");

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
    msg.setTimeStamp(0.849634666392);
    msg.setSource(22706U);
    msg.setSourceEntity(179U);
    msg.setDestination(5895U);
    msg.setDestinationEntity(203U);
    msg.seq = 64032U;
    msg.value = 82U;
    msg.error.assign("NLHUQJHVJDCCTBFOGMPGKZFRDMWXVPKUKBSSPQNGNIVTVYJIHJYCMXONHSXBMUNTOXSTAEEWFQPEJODFLZABWIFXFJAFMAOWDIZWCDYWSPUNEQWIZEHBLTOKZMYDXJLGSDSNNGPDEYVAMOGZRBCUULCAVQWCIVZQIZVXQJQMWYMFUHPCAWKDRKQCHUBMDIXTIRESUAKBKGEVSXFLTPNRGAOKXRLPGRLLVUYKRRJPLRHCESHZHTFTZOBYQNYGYE");

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
    msg.setTimeStamp(0.721958021403);
    msg.setSource(60435U);
    msg.setSourceEntity(70U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(92U);
    msg.seq = 57051U;
    msg.sys.assign("MKAIHTSBJUDFPUWPHEAUQUYAIGBYCOKLRPMPKVXBRXNRFTYHSQYQQJRGGHUVWMMRJEQVMIEZOELDTIUXYDGRCEDATLUGWZ");
    msg.value = 0.151463833358;

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
    msg.setTimeStamp(0.344565425178);
    msg.setSource(53563U);
    msg.setSourceEntity(93U);
    msg.setDestination(51730U);
    msg.setDestinationEntity(171U);
    msg.seq = 51410U;
    msg.sys.assign("ANBVHVAXWPZJFGDQTZDHSSSWXGYMSXVKOQSFICKCCBQVWOTYCRLWSAJ");
    msg.value = 0.776646310231;

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
    msg.setTimeStamp(0.954582922046);
    msg.setSource(43868U);
    msg.setSourceEntity(136U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(234U);
    msg.seq = 62739U;
    msg.sys.assign("XWWXQZLRUPPJGXVXRUSYBKQNXABNMGOKVHQIZTFECMRUZB");
    msg.value = 0.122201916795;

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
    msg.setTimeStamp(0.535672746523);
    msg.setSource(8434U);
    msg.setSourceEntity(104U);
    msg.setDestination(59275U);
    msg.setDestinationEntity(184U);
    msg.action = 244U;
    msg.longain = 0.0161438140237;
    msg.latgain = 0.865324481708;
    msg.bondthick = 1749941312U;
    msg.leadgain = 0.601426038922;
    msg.deconflgain = 0.890020868991;

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
    msg.setTimeStamp(0.989477548094);
    msg.setSource(23855U);
    msg.setSourceEntity(235U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(109U);
    msg.action = 75U;
    msg.longain = 0.731379671631;
    msg.latgain = 0.933741720289;
    msg.bondthick = 1181980532U;
    msg.leadgain = 0.012380753917;
    msg.deconflgain = 0.885983824006;

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
    msg.setTimeStamp(0.259802117156);
    msg.setSource(998U);
    msg.setSourceEntity(139U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(60U);
    msg.action = 175U;
    msg.longain = 0.755399689228;
    msg.latgain = 0.151587113071;
    msg.bondthick = 2242821768U;
    msg.leadgain = 0.611959637057;
    msg.deconflgain = 0.604279039832;

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
    msg.setTimeStamp(0.962760753144);
    msg.setSource(46629U);
    msg.setSourceEntity(74U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(196U);
    msg.err_mean = 0.546462010222;
    msg.dist_min_abs = 0.856225998644;
    msg.dist_min_mean = 0.469452095199;

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
    msg.setTimeStamp(0.952880410455);
    msg.setSource(22957U);
    msg.setSourceEntity(164U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(233U);
    msg.err_mean = 0.782954226108;
    msg.dist_min_abs = 0.955943897858;
    msg.dist_min_mean = 0.700184877765;

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
    msg.setTimeStamp(0.0917644260892);
    msg.setSource(16949U);
    msg.setSourceEntity(163U);
    msg.setDestination(2724U);
    msg.setDestinationEntity(82U);
    msg.err_mean = 0.547636694706;
    msg.dist_min_abs = 0.89122278104;
    msg.dist_min_mean = 0.372682298263;

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
    msg.setTimeStamp(0.661635397844);
    msg.setSource(28627U);
    msg.setSourceEntity(80U);
    msg.setDestination(20941U);
    msg.setDestinationEntity(15U);
    msg.action = 219U;
    msg.lon_gain = 0.316775027153;
    msg.lat_gain = 0.0244463702513;
    msg.bond_thick = 0.711992081425;
    msg.lead_gain = 0.434051487834;
    msg.deconfl_gain = 0.608492198684;
    msg.accel_switch_gain = 0.374242211104;
    msg.safe_dist = 0.729435999408;
    msg.deconflict_offset = 0.440824679951;
    msg.accel_safe_margin = 0.556166527291;
    msg.accel_lim_x = 0.540802581992;

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
    msg.setTimeStamp(0.897595547716);
    msg.setSource(33176U);
    msg.setSourceEntity(208U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(124U);
    msg.action = 193U;
    msg.lon_gain = 0.673480153196;
    msg.lat_gain = 0.255606453265;
    msg.bond_thick = 0.678761173112;
    msg.lead_gain = 0.568631077349;
    msg.deconfl_gain = 0.280259259739;
    msg.accel_switch_gain = 0.218413058866;
    msg.safe_dist = 0.747387535235;
    msg.deconflict_offset = 0.811840804222;
    msg.accel_safe_margin = 0.960399363036;
    msg.accel_lim_x = 0.0967796505754;

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
    msg.setTimeStamp(0.818593904641);
    msg.setSource(61230U);
    msg.setSourceEntity(194U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(2U);
    msg.action = 88U;
    msg.lon_gain = 0.46094474158;
    msg.lat_gain = 0.160035073253;
    msg.bond_thick = 0.367073917555;
    msg.lead_gain = 0.995921287187;
    msg.deconfl_gain = 0.858074006732;
    msg.accel_switch_gain = 0.172670735329;
    msg.safe_dist = 0.048591078735;
    msg.deconflict_offset = 0.568902069783;
    msg.accel_safe_margin = 0.104084643648;
    msg.accel_lim_x = 0.326866081951;

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
    msg.setTimeStamp(0.951153920177);
    msg.setSource(11975U);
    msg.setSourceEntity(140U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(80U);
    msg.type = 225U;
    msg.op = 90U;
    msg.err_mean = 0.815939152229;
    msg.dist_min_abs = 0.804102934034;
    msg.dist_min_mean = 0.377651891011;
    msg.roll_rate_mean = 0.0870715393867;
    msg.time = 0.834910883485;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 146U;
    tmp_msg_0.lon_gain = 0.715012660096;
    tmp_msg_0.lat_gain = 0.800569156066;
    tmp_msg_0.bond_thick = 0.120100768448;
    tmp_msg_0.lead_gain = 0.361227903002;
    tmp_msg_0.deconfl_gain = 0.489537140012;
    tmp_msg_0.accel_switch_gain = 0.0591464976848;
    tmp_msg_0.safe_dist = 0.782537443641;
    tmp_msg_0.deconflict_offset = 0.524614858937;
    tmp_msg_0.accel_safe_margin = 0.986893060526;
    tmp_msg_0.accel_lim_x = 0.27036959935;
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
    msg.setTimeStamp(0.290428251204);
    msg.setSource(47805U);
    msg.setSourceEntity(55U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(35U);
    msg.type = 217U;
    msg.op = 50U;
    msg.err_mean = 0.695697440543;
    msg.dist_min_abs = 0.511615169419;
    msg.dist_min_mean = 0.674059383546;
    msg.roll_rate_mean = 0.155081342909;
    msg.time = 0.244727722509;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 17U;
    tmp_msg_0.lon_gain = 0.300123676648;
    tmp_msg_0.lat_gain = 0.0323228213631;
    tmp_msg_0.bond_thick = 0.506803437778;
    tmp_msg_0.lead_gain = 0.0635972379699;
    tmp_msg_0.deconfl_gain = 0.957818412005;
    tmp_msg_0.accel_switch_gain = 0.176863439597;
    tmp_msg_0.safe_dist = 0.167271853516;
    tmp_msg_0.deconflict_offset = 0.945779607173;
    tmp_msg_0.accel_safe_margin = 0.511227949328;
    tmp_msg_0.accel_lim_x = 0.140534870719;
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
    msg.setTimeStamp(0.267293050693);
    msg.setSource(27173U);
    msg.setSourceEntity(50U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(223U);
    msg.type = 185U;
    msg.op = 44U;
    msg.err_mean = 0.683359383556;
    msg.dist_min_abs = 0.705938555054;
    msg.dist_min_mean = 0.514148301122;
    msg.roll_rate_mean = 0.309688781276;
    msg.time = 0.805101906616;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 6U;
    tmp_msg_0.lon_gain = 0.667322447082;
    tmp_msg_0.lat_gain = 0.760739679251;
    tmp_msg_0.bond_thick = 0.302181770987;
    tmp_msg_0.lead_gain = 0.540144351221;
    tmp_msg_0.deconfl_gain = 0.926135414013;
    tmp_msg_0.accel_switch_gain = 0.795331773214;
    tmp_msg_0.safe_dist = 0.982522078606;
    tmp_msg_0.deconflict_offset = 0.795513423835;
    tmp_msg_0.accel_safe_margin = 0.349829247253;
    tmp_msg_0.accel_lim_x = 0.48426675605;
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
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.584117431604);
    msg.setSource(43645U);
    msg.setSourceEntity(85U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(202U);
    msg.type = 43U;
    msg.op = 192U;
    msg.err_mean = 0.96304758053;
    msg.dist_min_abs = 0.69325087487;
    msg.dist_min_mean = 0.822388975437;
    msg.roll_rate_mean = 0.692858767346;
    msg.timespan = 0.377494284886;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 196U;
    tmp_msg_0.lon_gain = 0.669371296862;
    tmp_msg_0.lat_gain = 0.514680337552;
    tmp_msg_0.bond_thick = 0.669043877663;
    tmp_msg_0.lead_gain = 0.910164688092;
    tmp_msg_0.deconfl_gain = 0.374549337348;
    tmp_msg_0.accel_switch_gain = 0.786006880422;
    tmp_msg_0.safe_dist = 0.764850633316;
    tmp_msg_0.deconflict_offset = 0.955829624966;
    tmp_msg_0.accel_safe_margin = 0.948209254304;
    tmp_msg_0.accel_lim_x = 0.311517299446;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.957665591078);
    msg.setSource(48936U);
    msg.setSourceEntity(49U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(145U);
    msg.type = 53U;
    msg.op = 88U;
    msg.err_mean = 0.46476596216;
    msg.dist_min_abs = 0.157872366014;
    msg.dist_min_mean = 0.750762036888;
    msg.roll_rate_mean = 0.385705164335;
    msg.timespan = 0.151185258028;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.84441085324;
    tmp_msg_0.lat_gain = 0.235334059582;
    tmp_msg_0.bond_thick = 0.0340293880227;
    tmp_msg_0.lead_gain = 0.327694883113;
    tmp_msg_0.deconfl_gain = 0.42636866195;
    tmp_msg_0.accel_switch_gain = 0.196215732267;
    tmp_msg_0.safe_dist = 0.102824904088;
    tmp_msg_0.deconflict_offset = 0.646836091427;
    tmp_msg_0.accel_safe_margin = 0.249511754681;
    tmp_msg_0.accel_lim_x = 0.528022586304;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.2077448648);
    msg.setSource(10178U);
    msg.setSourceEntity(130U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(222U);
    msg.type = 30U;
    msg.op = 30U;
    msg.err_mean = 0.869971894436;
    msg.dist_min_abs = 0.712398088628;
    msg.dist_min_mean = 0.492389801483;
    msg.roll_rate_mean = 0.549056525631;
    msg.timespan = 0.630480587177;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 123U;
    tmp_msg_0.lon_gain = 0.536846955598;
    tmp_msg_0.lat_gain = 0.0775530465242;
    tmp_msg_0.bond_thick = 0.0630781344681;
    tmp_msg_0.lead_gain = 0.835043484869;
    tmp_msg_0.deconfl_gain = 0.330478688953;
    tmp_msg_0.accel_switch_gain = 0.177548110449;
    tmp_msg_0.safe_dist = 0.033138701624;
    tmp_msg_0.deconflict_offset = 0.0627945583765;
    tmp_msg_0.accel_safe_margin = 0.535931391067;
    tmp_msg_0.accel_lim_x = 0.00602537185416;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.278585198382);
    msg.setSource(61950U);
    msg.setSourceEntity(108U);
    msg.setDestination(58772U);
    msg.setDestinationEntity(116U);
    msg.uid = 101U;
    msg.frag_number = 241U;
    msg.num_frags = 120U;
    const char tmp_msg_0[] = {-1, 5, -114, -6, -115, 6, -20, 126, -117, -94, -108, -36, -11, 98, 71, 3, -91, 17, -47, -62, -41, 10, -123, 69, 13, 88, -65, 13, 104, 37, -111, -27, 102, -63, -79, -75, 5, 7, -78, 54, -37, 80, -9, -16, -120, 72, 115, -15, -83, 79, 88, -20, 55, 22, -75, 54, 28, -50, -38, -88, -59, 61, -121, -112, 99, -124, 0, -7, 9, -14, 112, 87, 47, 57, -81, 45, 112, -43, -65, 14, 41, -1, -86, 46, 6, 50, 119};
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
    msg.setTimeStamp(0.588929639841);
    msg.setSource(42297U);
    msg.setSourceEntity(194U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(55U);
    msg.uid = 235U;
    msg.frag_number = 192U;
    msg.num_frags = 201U;
    const char tmp_msg_0[] = {-36, -60, -116, 123, -73, -126, -15, 78, -16, -36, -80, -66, 108, 112, 42, 37, 93, 20, -54, -60, 34, 39, 33, -8, 125, 15, 109, 80, -102, -12, 54, 16, 88, 41, -117, -113, 90, -59, -30, 88, -111, -38, 52, -107, -63, -78, -100, -45, -30, -28, 102, 89, 108, 105, -42, -49, 42, 109, 9, -127, 25, -25, 67, 53, -112, 102, -104, -109, -110, -23, -31, -90, 46, 64, -79, 14, 27, -110, -110, -73, -95, -92, -54, 100, 33, -63, -29, -46, 66, 72, 16, 102, 74, 8, 92, 20, 79, -97, -34, -126, 89, 114, -5, -49, 120, -45, 104, -99, -33, -58, 75, -6, 115, 14, -79, 23, -19, 53, -58, -37, -109, -39, -85, -93, -56, -37, -33, -89, 35, -78, 26, 66, -80, 118, 110, -82, -7, -66, 110, 25, 0, 47, -55, 16, 35, -12, 73, -103, -63, -41, -119, -80, 104, -12, 2, -87, 87, 108, 29, 23, 100, -78, -11, 48, -87, -111, -46, 71, -79, -126, 104, -107, -13, 68, 99, 41, -6, 65, -84, 94, -28, -70, -22, 17, 45, -70, -128, 120, 60, 113, 80, -113, 86, -30, 61, -67, 55, -63, -89, -94, -124, -62, -85, 8, -15, -13, -55, -109, 96, 52, 8, 51, -99, 11, 48, 49, -36, -11, 50, 34, -109, -25, -38, 77, -109, -43, 87, -103, 17, 105, -77, 112, -25, -65, -90, -21, 59, -22, 25, 54, 47, -20, 32, -47, -3, -99, 27, 111};
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
    msg.setTimeStamp(0.919628724318);
    msg.setSource(27124U);
    msg.setSourceEntity(89U);
    msg.setDestination(23217U);
    msg.setDestinationEntity(41U);
    msg.uid = 124U;
    msg.frag_number = 147U;
    msg.num_frags = 233U;
    const char tmp_msg_0[] = {-63, -61, -87, 45, 13, -58, 97, 12, -72, 45, -27, 30, 40, -112, -1, -27, -84, -123, -116, 126, -59, -81, -71, -64, -27, -75, -112, 66, -34, -121, 87, -108, -96, -42, 70, 61, 114, -11, -93, 92, 73, 55, -10, 17, -75, -80, 53, 112, -27, 83, -45, 122, 121, -26, 99, -111, -13, -16, -41, 103, 58, 28, 48, 52, 99, -17, 1, 91, -77, -23, 89, -107, 118, -3, 89, 78, 60, 50, -74, -66, -65, -38, 16, -53, 107, -57, -9, -46, 111, 87, 122, -19, 58, 50, 78, -66, -88, -66, -52, 8, 0, 52, -4, 8, -41, 24, 56, -43, -75, -85, 57, 2, 47, 7, -115, -69, 14, -3, -1, 45, -88, -117, 107, 75, 121, -84, 4, 34, -125, 126};
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
    msg.setTimeStamp(0.160034050245);
    msg.setSource(32762U);
    msg.setSourceEntity(50U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(108U);
    msg.content_type.assign("WMJYBSZRLFWPXVHKIMFOVIUJLXKBVKUHSXHLXOCBLMERQCPIDHRSSHCGPPNHAYZFLPYSCMXUGZPXRDEIBZKCOJQOMETJLMOUEOFKQVGAKPZTDBWYQXUJGSYTPTBQSFSJLASFYWFJIMAENAHKPHIJHGZCAVQNNJEORGUUAWZNYNZXRBFMDZCCDD");
    const char tmp_msg_0[] = {57, -115, -17, 126, 16, 80, -20, 84, -51, -97, -57, 65, 95, -47, -62, -48, 74, 41, -41, 84, -70, -79, 119, -95, -59, 114, 69, -63, 125, 54, 3, -22, 96, 63, -44, 50, 30, -34, 51, 74, 3, -56, 122, -128, 88, -118, 72, -75, 109, -55, 78, -125, 65, -111, 87, 125, -104, 99, -105, 43, -95, 52, -79, -104, 67, -26, -70, -109, 52, 48, 68, 35, -18, -48, 24, -95};
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
    msg.setTimeStamp(0.515081309913);
    msg.setSource(31898U);
    msg.setSourceEntity(254U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(248U);
    msg.content_type.assign("JHGHZGFDDYECMSKQXWUTBRWNFBTLNYCQWMCBVBE");
    const char tmp_msg_0[] = {-70, -47, 78, -84, -64, 51, -90, -80, -25, 53, -49, -14, 114, 74, 78, -86, -79, -56, 121, -118, 5, -100, -75, -24, 103, -115, -64, -121, -68, -60, -9, -39, 46, 20, -95, 42, 89, 103, -65, -105, -47, -41, -7, 108, -104, -56, 119, -101, 18, 18, 9, -40, 0, -70, 97, -122, -96, -122, 24, 115, 93, -92, 45, 121, -86, -108, -81, 119, -28, 27, 25, -80, -107, -70, 52, -78, 70, -87, 36, 30, 24, -21, 19, -99, 85, 72, 20, 58, 13, 10, 66, -25, 57, -62, -78, 79, 70, 45, -46, -20, -3, 26, 61, -93, 119, -60, 19, 98, -11, 24, -55, -13, 122, -12, -20, 114, 21, 59, 117, 36, -43, 56, -34, 53, -100, -84, 67, -31, 78, 100, 31, -37, -4, -14, -16, 93, -9, 40, 22, 121, -69, 24, 27, -124, 98, 37, 99, 72, -2, -93, 115, -76, -108, -56, -79, 13, 70, -47, -5, -105, -84, -115, 19, 70, -78, 41, -24, -126, -69, 118, 49, -84, 2, -41, 45, 37, 60, 21, -116, 52, -6, 93, 22, 4, 101, -49, -126, 5, 124, -46, -43, 50, -108, 115};
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
    msg.setTimeStamp(0.0467080072907);
    msg.setSource(1488U);
    msg.setSourceEntity(122U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("PGNWFXMFQAXDBONIWJSDEMJMYWIUIZAMOKCGIHPRVSFZIMWZSQICLXUV");
    const char tmp_msg_0[] = {-2, 42, -118, -35, -93, 75, 14, -41, 66, 59, 49, -4, 103, -61, -5, 48, 108, -34, -110, 75, 69, -128, 120, 32, 126, 53, -61, 25, -119, 33, -33, 33, 108, -106, 119, 103, 39, 72, 39, 0, 118, -70, -43, -106, -34, -107, 90, -41, 14, -95, 117, -55, 29, -38, -37, -118, 98, -90, -62, -34, -55, -106, -62, -23, 81, 102, -25, 24, -18, 106, -41, -122, 84, 70, -96, -15, 16, 58, -42, 83, 54, 125, -85, 63, 95, 0, 35, -59, -33, 112, -14, -42, -113, -73, -4, 8, -62, 54, -118, -112, 51, -99, -79, 111, 121, 57, -55, -3, -8, 0, 119, -16, -112, -8, -51, 22, -74, -94, 59, -71, 71, -37, 12, 71, 38, -6, -18, -43, 48, -119, 101, 40, -122, 83, -81};
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
    msg.setTimeStamp(0.835683005364);
    msg.setSource(51707U);
    msg.setSourceEntity(175U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.356492020299);
    msg.setSource(14179U);
    msg.setSourceEntity(204U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.61538971086);
    msg.setSource(38748U);
    msg.setSourceEntity(244U);
    msg.setDestination(62645U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.278564574965);
    msg.setSource(61017U);
    msg.setSourceEntity(245U);
    msg.setDestination(20776U);
    msg.setDestinationEntity(140U);
    msg.target = 31729U;
    msg.bearing = 0.874344685118;
    msg.elevation = 0.00237720371653;

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
    msg.setTimeStamp(0.505980018244);
    msg.setSource(2000U);
    msg.setSourceEntity(163U);
    msg.setDestination(8819U);
    msg.setDestinationEntity(195U);
    msg.target = 28287U;
    msg.bearing = 0.493892063196;
    msg.elevation = 0.205363047406;

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
    msg.setTimeStamp(0.0555641290314);
    msg.setSource(17481U);
    msg.setSourceEntity(64U);
    msg.setDestination(23749U);
    msg.setDestinationEntity(207U);
    msg.target = 17470U;
    msg.bearing = 0.314047277249;
    msg.elevation = 0.950413497863;

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
    msg.setTimeStamp(0.196165888898);
    msg.setSource(58254U);
    msg.setSourceEntity(130U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(85U);
    msg.target = 11207U;
    msg.x = 0.00515623352252;
    msg.y = 0.475617731262;
    msg.z = 0.834223016278;

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
    msg.setTimeStamp(0.7506895752);
    msg.setSource(64567U);
    msg.setSourceEntity(155U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(234U);
    msg.target = 40142U;
    msg.x = 0.946389167022;
    msg.y = 0.423723536361;
    msg.z = 0.586491346921;

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
    msg.setTimeStamp(0.89114381493);
    msg.setSource(57237U);
    msg.setSourceEntity(242U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(124U);
    msg.target = 36928U;
    msg.x = 0.675312241671;
    msg.y = 0.971764571461;
    msg.z = 0.456893292258;

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
    msg.setTimeStamp(0.626821151497);
    msg.setSource(37028U);
    msg.setSourceEntity(60U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(243U);
    msg.target = 33100U;
    msg.lat = 0.0348023353982;
    msg.lon = 0.158319669863;
    msg.z_units = 207U;
    msg.z = 0.979944907211;

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
    msg.setTimeStamp(0.8950564365);
    msg.setSource(18048U);
    msg.setSourceEntity(211U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(174U);
    msg.target = 20064U;
    msg.lat = 0.95767936631;
    msg.lon = 0.00746286365651;
    msg.z_units = 41U;
    msg.z = 0.800013804586;

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
    msg.setTimeStamp(0.426390188688);
    msg.setSource(2937U);
    msg.setSourceEntity(200U);
    msg.setDestination(36919U);
    msg.setDestinationEntity(155U);
    msg.target = 21282U;
    msg.lat = 0.163462403937;
    msg.lon = 0.224038611599;
    msg.z_units = 230U;
    msg.z = 0.535575242619;

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
    msg.setTimeStamp(0.431072956111);
    msg.setSource(16313U);
    msg.setSourceEntity(75U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(123U);
    msg.locale.assign("RYAXRCDDDLQKSJLNMPOFUBHTNUOOYZHCLIRHZBICTXLIAPKFTMKSNDEKQSZISIZVWYBCOVZMHPXIXJAORMPWUBQBYUCRMXBQMDHTJRESNQSQJVFS");
    const char tmp_msg_0[] = {-87, -111, 24, 123, 65, -71, 82, -100, 70, 87, -27, -106, 96, 108, -39, -89, 110, -125, 85, 95, 14, -50, 35, 82, -76, 122, 117, 121, 115, -7, 87, 114, -114, -86, -128, -109, -124, -64, -36, 71, 43, -13, -83, -101, 75, 90, -116, 86, -29, 11, 38, -71, -60, 89, 101, 69, 13, 15, -94, -56};
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
    msg.setTimeStamp(0.813217398067);
    msg.setSource(13184U);
    msg.setSourceEntity(244U);
    msg.setDestination(63321U);
    msg.setDestinationEntity(50U);
    msg.locale.assign("ZHNSUUXWJKRWKUQVHFMEGJBDRPCSDCZKEEZNNFGIRHMIFTVIVEMEFATCTBJSQJZLQWDJYWPNPRVEQXUPZHWEHLZZJEFKRXJTYKJMTFIYM");
    const char tmp_msg_0[] = {-125, -79, -76, 117, -75, 4, -64, 111, -82, 64, -34};
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
    msg.setTimeStamp(0.166717035999);
    msg.setSource(23231U);
    msg.setSourceEntity(142U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(21U);
    msg.locale.assign("ZWNTFCVZHBQIBCTSFRFAUDRLKIIOXQXMXZVMMKVWKWJUNQYSICHQGPBDWSPCEQISEHQAYODSZPSELXKWECFVPCPTLZGCWGDTGJABRRMJOEUOZBMJJQODTEHOYQAOPJFYDLLWWGPXFKOVXOHBSJVRAATMBMGPXYY");
    const char tmp_msg_0[] = {-16, 50, -85, 49, -77, 5, 18, 78, -61, 93, -57, 70, 63, 65, 28, -94, 87, 100, 1, -109, 78, -110, -110, -18, 124, -12, 66, 58, 106, -17, -44, -43, -70, -61, 114, -65, 76, -13, -85, 110, -7, -34, 48, -56, -98, -39, -90, -63, 86, 114, 49, 67, -67, 61, -115, -15, -34, -5, 44, 102, -27, 98, 119, 91, -66, 124, -52, 69, 119, 108, 65, 6, -14, -74, 7, 38, -113, 75, -44, 103, -58, -91, -113, 61, -58, 30, 77, -108, 68, 41, 61, -50, 41, -84, -111, -88, 14, 34, 38, 43, -77, 65, 43, -98, -99, 62, 18, 123, 91, 11, 53, 15, 101, -112, -1, 112, 10, -82, 36, -29, -55, 92, 25, 74, -117, 73, 89, -104, -50, -95, -54, 77, -74, -38, 54, 56, -91};
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
    msg.setTimeStamp(0.909443538235);
    msg.setSource(48163U);
    msg.setSourceEntity(29U);
    msg.setDestination(58425U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.170119928942);
    msg.setSource(28936U);
    msg.setSourceEntity(74U);
    msg.setDestination(34668U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.741768176379);
    msg.setSource(12637U);
    msg.setSourceEntity(198U);
    msg.setDestination(44017U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.573601093055);
    msg.setSource(53818U);
    msg.setSourceEntity(201U);
    msg.setDestination(31047U);
    msg.setDestinationEntity(220U);
    const char tmp_msg_0[] = {-85, 41, 92, 22, 51, -98, 66, 21, -85, 6, 30, 96, -10, -39, 85, -119, 104, -32, -127, 51, -52, -7, -128, -86, 20, -126, -82, -101, 33, 105, -114, -107, 61, -29, 17, -19, -103, -113, -93, -120, -120, -126, 64, 2, 122, -57, 73, -67, -13, -22, 79, -6, -87, 7, -36, 65, -7, -9, 51, -95, -4, -120, 4, -21, 76, -13, -98, -56, -14, 55, 66, 85, 61, -72, 84, -4, 22, 100, -19, 63, 22, 0, -9, 79, 4, -80, 95, -52, 96, 11, -11, -11, -76, -64, -127, -2, 64, -121, -18, 61, -107, -73, 99, 31, 5, 26, -74, 60, -60, 76, -56, -76, -114, -22, 71, 28, -98, 72, 114, 20, 107, 75, -122, 56, 64, -33, -117, -119, 111, 82, -34, -42, -33, 15, -24, 65, 83, -113, -84, 121, 14, -88, -10, -93, 44, -18, 118, 41, 71, -72, 3, 123, -70, 77, 37, 50, -15, -1, 87};
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
    msg.setTimeStamp(0.494505719132);
    msg.setSource(16786U);
    msg.setSourceEntity(56U);
    msg.setDestination(513U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {-24, 10, -84, 79, 36, -60, 72, 17, -22, 91, 40, -114, -33, 20, -29, -37, 11, 80, 2, 107, 44, 126, 29, -1, 79, 81, -57, -23, -47, 116, 55, -97, -63, -122, 27, 48, 19, -108, -55, -44, -123, -64, 49, 2, 85, 30, -35, -98, -80, 31, -47, -107, -8, -47, -50, -104, 80, 84, -102, -24, 30, 87, 3, 67, 114, -91, 89, -78, -107, 36, 103, -25, -115, -117, -96, -66, -101, -108, 118, 54, 7, 103, -99, 124, 0, 64, 107, 4, -93, 19, -62, -34, 6, 21, 59, -81, -70, -74, 61, -68, -41, 7, 33, 95, -29, 16, 48, -49, -127, -100, 12, 44, 93, 108, -12, -40, -40, 31, -56, -8, 107, 86, -58, -88, 32, -6, 121, -103, -124, 106, 64, -73, -82, -42, -127, -55, -6, 114, -24, -57, -56, 111, -27, -112, 3, -100, -29, -15, -76, -12, -62, 30, -61, 68};
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
    msg.setTimeStamp(0.259695471355);
    msg.setSource(2570U);
    msg.setSourceEntity(221U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-57, 46, 66, -126, 23, -108, -84, 88, 61, -8, -125, 25, 57, 124, 65, -18, 60, -16, -122, -44, -40, -39, 38, -128, -50, -39, 94, -39, -94, 69, -72, 29, -116, -11, -86, -99, 80, 126, 71, 35, -80, 33, -33, 114, -91, 86, 117, 114, -32, 56, 8, -61, -11, -30, -81, -26, 63, -100, 41, 41, 94, -110, 117, -18, 34, 101, -48, 35, -42, -73, 26, 67, 35, -65, -74, 42, 98, -60, -69, -7, -22, -15, 118, -41, 2, -127, 108, -67, -117, 55, -33, -124, -114, -47, 97, -53, 6, 6, 72, 40, -18, 96, -5, -42, -26, 84, 88, 37, -68, 7, 34, -41, 104, -46, -114, 76, -94, 48, 80, 36, 57, -120, 115, 94, -25, 65, -70, 38, -12, 50, -89, -128, 92, 108, 95, 117, 1, 0, -113, -104, -107, 84, 98, -125, -117, -12, -74, 101, 49, 9, -117, -89, 123, -98, 122, -79, 89, 3, 90, -71, -64, -58, -108, 42, -95, 3, -53, -45, -115, 88, -121, 2, 121, 103, -96, 104, 89, 26, 61, 11, -102, -103, 45, -98, -59, -114, 31, -81, -81, -75, -99, 50, -85, -5, 105, 75, -42, -36, -51, 114, 122, -69, 121, 20, 103, 98, 83, 60, -128, -9, -4, -56, -101, 22, -78, 50, -99, -111, 111, -30, 45, 80, -35, 30, -84, 43, 124, 46, 48, 76, -115, 14, 118, 32, -122, 48, 125, 30, -67, -91, 101, -61, 60, 14, 11, 109, -79, 14, 126, 7, -97, -62, 76};
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
    msg.setTimeStamp(0.446525068068);
    msg.setSource(16989U);
    msg.setSourceEntity(208U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(126U);
    msg.json.assign("UNWWLAFVYMTKHNRJNZCQQOFRXSOIENJNPSXGGXKIDHTHGTSCJCVFVVSBTMQSJREXNWLBLWPYUYUEZQRTADEFZVXYDRFAMMORIHUHUNWOJSOLZQLDAEYMZKXMNCDPGODNIB");

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
    msg.setTimeStamp(0.444796359112);
    msg.setSource(43637U);
    msg.setSourceEntity(77U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(93U);
    msg.json.assign("QULWUVSIFIYHNHUDAFXKPTMAPRCRMCRGGBUTVGYUSGKPDIKVTHGVSMJSFBGZRFLZPKHEBOCWHAOOAKKFOEXZPJEXXMLEZCXMOWINDTIDWQLTCUJJJDWIGWRKJSNESRXZZQQVFDEOACLLETFPWRFZMAMKEXSYWYDYLQNVBIVSBQHYYLQNSMNIUFKYAWOJZBMYUNLNAEBPZMCONXZWGKCGDPVRNGJHTFPJHSHCQRRJQATCDDXIOVXLITEQV");

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
    msg.setTimeStamp(0.378888664677);
    msg.setSource(36966U);
    msg.setSourceEntity(57U);
    msg.setDestination(24958U);
    msg.setDestinationEntity(138U);
    msg.json.assign("QMKWZOXDUATGICMYABJVSCNFEUWWVZANOTGNHQNMVQZLNALDHVPEURDKIDWTTKNBLCNRRWJVIZMGOYXQLZBXOEN");

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
