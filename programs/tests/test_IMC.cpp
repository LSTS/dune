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
    msg.setTimeStamp(0.906250273634);
    msg.setSource(558U);
    msg.setSourceEntity(11U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(127U);
    msg.state = 128U;
    msg.flags = 47U;
    msg.description.assign("YIZYJEDBVMPDKLOUARLHVWABZRSSAY");

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
    msg.setTimeStamp(0.738986280463);
    msg.setSource(19979U);
    msg.setSourceEntity(17U);
    msg.setDestination(19719U);
    msg.setDestinationEntity(184U);
    msg.state = 221U;
    msg.flags = 3U;
    msg.description.assign("SFZRGYJRGFAAMQE");

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
    msg.setTimeStamp(0.723367684904);
    msg.setSource(54297U);
    msg.setSourceEntity(87U);
    msg.setDestination(25697U);
    msg.setDestinationEntity(235U);
    msg.state = 243U;
    msg.flags = 212U;
    msg.description.assign("ZCHPIOJQZNCRZBCXRTDDQCBJMAPUVRFYNIEVGDITPBJLGCZOFEMXTHASLTEXORWDNSLTYVEIMFUJXPMUWQFYADIQIDWSWEGMHLZYVRWHVVARTSKFPYNTQFIFOGCTLSKCQGVSXECPANVWUEBJTYZBAHKEHAWFWELQ");

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
    msg.setTimeStamp(0.549619453572);
    msg.setSource(32481U);
    msg.setSourceEntity(29U);
    msg.setDestination(48855U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.293316249824);
    msg.setSource(8543U);
    msg.setSourceEntity(84U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.0951607401728);
    msg.setSource(20558U);
    msg.setSourceEntity(195U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.600415871178);
    msg.setSource(24767U);
    msg.setSourceEntity(213U);
    msg.setDestination(34568U);
    msg.setDestinationEntity(2U);
    msg.id = 56U;
    msg.label.assign("QRVRHDFUAUVIHXXKNHPHYRLEU");
    msg.component.assign("RALEHHJZMMKNAUVWVMQKTHBERMFXICAQHGJIKDMUKETKPLMLUKLLJBE");
    msg.act_time = 958U;
    msg.deact_time = 48138U;

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
    msg.setTimeStamp(0.946749998286);
    msg.setSource(13052U);
    msg.setSourceEntity(115U);
    msg.setDestination(41278U);
    msg.setDestinationEntity(21U);
    msg.id = 244U;
    msg.label.assign("VCDZFHXJBGXOHIOKITCAKQTHDZLWIUQFTALSIXYVIJRUFAKGMENCGAGUYRPZSLJNTEZKOVLXMPRHWMHAJE");
    msg.component.assign("GLTXBUSKGFUXXHY");
    msg.act_time = 42681U;
    msg.deact_time = 356U;

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
    msg.setTimeStamp(0.771644451194);
    msg.setSource(23376U);
    msg.setSourceEntity(105U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(221U);
    msg.id = 159U;
    msg.label.assign("YROAYRVTXUMWSZECVAFDKPRPKXJOFEAHXRDSDBVCGUVOGZENFEQSVDGJVMQQTZYTMBDWFLOPVQIYSATHPHLQFCUSOGDELONBGERFXMKBRMFSXIULGWIHNYGIZNSDGJBDEZLUTCWNMWYQWBKWB");
    msg.component.assign("WGWCNTTMKOWQVVXRPCDHSXLOZEFOOFKDIHFJNFDECYNBZHEQUDKJYSYYCJDNIBRSVPKHUXCPNIMVMDYCLVJLDLERPHDEIUAZRCXGKVEWFJYLBTQERHGWEWLHBZCSYNQTIUJKSAZHBWCYAVGFTT");
    msg.act_time = 3349U;
    msg.deact_time = 35762U;

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
    msg.setTimeStamp(0.114914620498);
    msg.setSource(46203U);
    msg.setSourceEntity(245U);
    msg.setDestination(64462U);
    msg.setDestinationEntity(252U);
    msg.id = 54U;

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
    msg.setTimeStamp(0.960192659504);
    msg.setSource(25379U);
    msg.setSourceEntity(128U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(66U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.323104649851);
    msg.setSource(31962U);
    msg.setSourceEntity(205U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(164U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.936185854666);
    msg.setSource(30000U);
    msg.setSourceEntity(185U);
    msg.setDestination(963U);
    msg.setDestinationEntity(126U);
    msg.op = 183U;
    msg.list.assign("CMCNFWDYNHORSQDBAZGPYGYKIQAYCFOBRAHYNRGOIKTALQCLQJWSEIORCDINUJMVFYNFRYGTFOFKNLHNMXXXYUCZDWARTJFMTURDU");

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
    msg.setTimeStamp(0.0420178856014);
    msg.setSource(59110U);
    msg.setSourceEntity(63U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(241U);
    msg.op = 99U;
    msg.list.assign("PKCQJLJNJVVDQZDAFHSEUBQTHDFFCRMEEXAAIDWDCMTVNZWRZTBFMKRIOPNVBTEVNWHMVJDFRWNRYMKQOAIQQUMCRPLGLIZJHOXBZOBDEKSVLKWSPACTEBJLBYBUMWQWY");

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
    msg.setTimeStamp(0.963299886157);
    msg.setSource(20298U);
    msg.setSourceEntity(53U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(95U);
    msg.op = 199U;
    msg.list.assign("WULREWYJEHCLYAOOPINCVLZJTPIXOPQYCHICPSDGDJOVABXKGGFYVCOPWZCGCIOJWSFKRDMOBTZDHWWTKMIRVNTXOXZQVCGJNBHFA");

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
    msg.setTimeStamp(0.481237994653);
    msg.setSource(26125U);
    msg.setSourceEntity(208U);
    msg.setDestination(23010U);
    msg.setDestinationEntity(170U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.134190618243);
    msg.setSource(34028U);
    msg.setSourceEntity(103U);
    msg.setDestination(42283U);
    msg.setDestinationEntity(19U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.0306630840181);
    msg.setSource(31770U);
    msg.setSourceEntity(194U);
    msg.setDestination(56319U);
    msg.setDestinationEntity(137U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.733323444157);
    msg.setSource(44117U);
    msg.setSourceEntity(132U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(254U);
    msg.value = 173U;

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
    msg.setTimeStamp(0.455712102145);
    msg.setSource(54507U);
    msg.setSourceEntity(226U);
    msg.setDestination(51225U);
    msg.setDestinationEntity(143U);
    msg.value = 135U;

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
    msg.setTimeStamp(0.779068593353);
    msg.setSource(39903U);
    msg.setSourceEntity(69U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(218U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.659974990601);
    msg.setSource(44259U);
    msg.setSourceEntity(59U);
    msg.setDestination(58841U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("MBINWTXUHSJHFVBQMHHNLRFBTRUSYPVSEUXTXTRZXSOIFDTHNDPEGSBCWZXAAKYKSBCGLLDKVLVZRQLCWEOMAXMTXHCBFAJORGPDPEYCZXQKPTJYCWWHBLVEJULVCVEKNUYRKWPIDQSQFSDO");
    msg.message_id = 18878U;

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
    msg.setTimeStamp(0.182386002601);
    msg.setSource(4146U);
    msg.setSourceEntity(73U);
    msg.setDestination(15138U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("NYOPTTKRJQYSNVGIAMVXRUKKQHVENHWVNKQGXYFFCIZTFOPOLMWRWNJBBEMFWTVWCZGJYINLHVASYMJMFMIZSIUSJUNRYGSBUWPLCJBCROZUVHGBDCMDEDXZEFAVWPHZPDZOYDAO");
    msg.message_id = 4121U;

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
    msg.setTimeStamp(0.0837356301234);
    msg.setSource(61494U);
    msg.setSourceEntity(181U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(225U);
    msg.consumer.assign("BOZHWPSBFCPJSAWTPXYAMFQMCORFECNKOHGHRKCHBOKTEQSYIVSDDZYGLFVXVGOVQMAAJMBJTCOINVXGQNEWLNERXOPJZJAOKXEEGQURQJFZLV");
    msg.message_id = 42761U;

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
    msg.setTimeStamp(0.317923572546);
    msg.setSource(51812U);
    msg.setSourceEntity(145U);
    msg.setDestination(55557U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.490312392842);
    msg.setSource(65146U);
    msg.setSourceEntity(152U);
    msg.setDestination(56112U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.372542332485);
    msg.setSource(13729U);
    msg.setSourceEntity(182U);
    msg.setDestination(36527U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.583939239868);
    msg.setSource(48396U);
    msg.setSourceEntity(169U);
    msg.setDestination(19868U);
    msg.setDestinationEntity(228U);
    msg.section.assign("RMZBFYJZSJUOLEYPMJEDLUKERLQUGQRTVOCCJKBOHZSPQLXEXMJJXGQPCCZBCORMFZOKBQUWXRCIGPUVYTLKMGYAIMPOAIQEHSVKFPWLKANLTNSRWHABODVUNOCNS");
    msg.param.assign("ZBGTVDFDGHRKSGIFULJVOQXTRQIBNDOBFMHHHPAGZWFKKDCJRNMGPXJSKAZERMJDBERABPEZYRDZITVYVSOGONCTWOPJBQCLIBXSIQPUCXEWJYPODQWMXSMEKAWEFUETANYQNGGWZVMTWLYQHXDMNLSE");
    msg.value.assign("NJXHGWQNNIXTPECFYXBSRWGMWLIWZYZDVIJUMYLWHVQMLEZFDVLREZQBCSDKLNUULTI");

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
    msg.setTimeStamp(0.118380398477);
    msg.setSource(47692U);
    msg.setSourceEntity(71U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(102U);
    msg.section.assign("UTNSKUXASKRZYMKVSAIVNBRHNPGKAUIQFHTYLXEIKDZGFZRM");
    msg.param.assign("IFRIKLAHMVCDELEQPKUZFVVJGUHTVWANJYEZKARQXBSEYBINMPVLLESJIYBVPGDYRLFHUMDALIIPGXZMTGDHDZDVZPGJOSJGCBNHRZUUWURZNWEYVZMWKYHDCHUEOXAMMACKNQJLWHPSASPXVXHSRCBTLE");
    msg.value.assign("JQAHFBZZCKZFHRNWXWFDXNHYHSQQAVUBOCGKKPUYXIRSFQALUNLWTRMJZJNOVSXHPXVGWPACLDFJIARJOUEAQXOTDZHHXAZVKYIFNMSRNCWTNSIWRXPYTRGYCBEASMKPJDQKCJBQCGKQYHOCDLMPGUUPRMYVRWTFFCBUPAOZUBEROSSEGYMKDFLSFEXIYHOGEOVQBLINJEKMMJLHLI");

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
    msg.setTimeStamp(0.268643578594);
    msg.setSource(1489U);
    msg.setSourceEntity(53U);
    msg.setDestination(15934U);
    msg.setDestinationEntity(159U);
    msg.section.assign("WADUUWXDOMHWZVAVHFYNMKTNCBPHCKPRYTZSTWFFYWZRBPXXGMJMLONEOMCRINVFSNRLGEAYPUAIESMKJCDESUKZCVKOQQSFCJRKXMXOQQQDYACJHJNUUIMGCXUSFVYTIWSWKGJZKLRBSVIQXNIGRBUTYGZLWPG");
    msg.param.assign("TCYCSNTYKCIKEOVT");
    msg.value.assign("UXDFRKKULQZXCSEYXMTCYCGRQWNAIAZDTXSOZKUVNHKVKSPLROIUJPWICHRLDQXGVRMOXEBX");

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
    msg.setTimeStamp(0.676976216085);
    msg.setSource(40383U);
    msg.setSourceEntity(232U);
    msg.setDestination(3130U);
    msg.setDestinationEntity(195U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.322216488462);
    msg.setSource(57063U);
    msg.setSourceEntity(213U);
    msg.setDestination(8602U);
    msg.setDestinationEntity(114U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.19426564867);
    msg.setSource(17302U);
    msg.setSourceEntity(3U);
    msg.setDestination(14195U);
    msg.setDestinationEntity(196U);
    msg.op = 216U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("CAPUSHQCATPNUPNWKFPRKMR");
    tmp_msg_0.param.assign("DSMXTZSGAVFZNLHQBJSNYVFUWGOBJUFWFDFUCCZWKVFVKGQPLNZIBOLJACTITPANZSOWDKVRGJERZAAHJXKCZOCEPDIHAWWZBQRGFLSIQLFURMKGYHSMMGPCJBAYLYUPTLVRNTWPWATXSUWRQXLKEKAXICZQCUNIDOQIKKPENGFBPDMORVGOXJUMUXWEXYFSTTEMOJYZEJDDHIHTQCOHQEAMUVPBQXVIORHDMMDPECYRSIE");
    tmp_msg_0.value.assign("ADMSFJNLLHBOLBMKNHFNEZFFOTNUCOWTJWIOCVNMVWEHRSPJWOFGARDHRJRASRMAOBUDDHJKOWCAJNZMUUGMYHZJZPQPEERSSMQVUPXNWKVUKPQZMQTUYIESNUFXBJIBYCHSDVKHCQDAVHZULYSRXYJREDEOGQZXFIMXNZYCJOHCQQPLWARUGWTGDALBZAXKPPCTVCDTOFTRGTII");
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
    msg.setTimeStamp(0.545853049709);
    msg.setSource(2444U);
    msg.setSourceEntity(202U);
    msg.setDestination(57303U);
    msg.setDestinationEntity(246U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.635612386399);
    msg.setSource(41868U);
    msg.setSourceEntity(238U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(123U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.0933209254977);
    msg.setSource(11981U);
    msg.setSourceEntity(74U);
    msg.setDestination(60432U);
    msg.setDestinationEntity(247U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.488847292808);
    msg.setSource(9638U);
    msg.setSourceEntity(24U);
    msg.setDestination(23493U);
    msg.setDestinationEntity(218U);
    msg.total_steps = 213U;
    msg.step_number = 172U;
    msg.step.assign("ZSGGXVXQWDVNRULTBXJESGHSZMKDOTGWWPTVUXYALZMSUBVKTZYEDPUAOQNGXYJQJOLOMFPQFBJKYUWDNYCNAIMGSLSWRQEHQAHCRMZNPPRVXMJEDBCXDHJCWUJKTMLBORGLILEPFFFKIZEHQRFMUXOAPTHADWECAYZNRNKAPVNKQGVLDSKHTHFRUTTKBPYZUIQLCGODBBNQJCYFWRUAFPEGWXYII");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.842117533437);
    msg.setSource(51492U);
    msg.setSourceEntity(223U);
    msg.setDestination(54667U);
    msg.setDestinationEntity(121U);
    msg.total_steps = 230U;
    msg.step_number = 81U;
    msg.step.assign("WXRYDGDQNACEJGUCMODSVUQFRPVIRHOSIEEUPNBSWNWULLYRYBYKKCHJXCCIAOXKHSOFRFXTCQ");
    msg.flags = 5U;

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
    msg.setTimeStamp(0.42270204093);
    msg.setSource(58915U);
    msg.setSourceEntity(55U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(29U);
    msg.total_steps = 226U;
    msg.step_number = 136U;
    msg.step.assign("APRIPVQNJBZHYUDBILLAHDDTOLOSGCPXMQEVWJOKIFXVPMDBDUTCVFUHUZYABEYRRXBNSKMEMEVNPWACTTBSJKQSJFFOUWXVOZAEMJAVMOS");
    msg.flags = 129U;

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
    msg.setTimeStamp(0.849838486773);
    msg.setSource(51094U);
    msg.setSourceEntity(190U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(37U);
    msg.state = 76U;
    msg.error.assign("YNUALXQMRDNNEHZBHCQALYBYIVIKMMIUXBKWEDQMAZRKMGWASBQIKEMKCWOHSJEVYGPCBAOECFICXVWHFPGOZZEQQVPRRATAFUSSCFTQOXSOLJRPDWVAPGJOLGWZYUEFKUPLIORGGAGCYFULSNDKXPNXVUDRIJQJDVSRKRVYCZDZLBNYLKWTHXJBTLTBOCLVHRQIXDEUWJXNGTBTVMYHNECNJ");

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
    msg.setTimeStamp(0.725430960338);
    msg.setSource(40573U);
    msg.setSourceEntity(59U);
    msg.setDestination(30526U);
    msg.setDestinationEntity(87U);
    msg.state = 183U;
    msg.error.assign("GUINLLVBTJKCZHCNTYSWPRAYWYMNGFFZPCVRXTEIFSRCXFYWBPBYQAVPLRCTIPDGTSKXNQKDTDTKUERBHJSUSMIKIVZURNLUXMYFILPFLVVTNEKWXGGCAWMKREMCOXRRYLZZCTNJYIWEJYLKWQQWLWPOGGBCHAVZOFUHHQHMAVHABQWXXJAIUBSNBLUANKZIDHFHOVGBQAFORPEZJMQGMBJUNVXEE");

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
    msg.setTimeStamp(0.26830965435);
    msg.setSource(21573U);
    msg.setSourceEntity(244U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(145U);
    msg.state = 234U;
    msg.error.assign("PZOJKCWTXDXFVGJQVBMANMUHRCIFMTRPBVYQGW");

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
    msg.setTimeStamp(0.285879532719);
    msg.setSource(48625U);
    msg.setSourceEntity(94U);
    msg.setDestination(44722U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.855848675884);
    msg.setSource(50028U);
    msg.setSourceEntity(87U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.919007477003);
    msg.setSource(2989U);
    msg.setSourceEntity(177U);
    msg.setDestination(11352U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.0756876398195);
    msg.setSource(9812U);
    msg.setSourceEntity(229U);
    msg.setDestination(42907U);
    msg.setDestinationEntity(43U);
    msg.op = 213U;
    msg.speed_min = 0.0609106194511;
    msg.speed_max = 0.640263737547;
    msg.long_accel = 0.938323595925;
    msg.alt_max_msl = 0.688520981106;
    msg.dive_fraction_max = 0.842228518344;
    msg.climb_fraction_max = 0.200047120307;
    msg.bank_max = 0.787003331495;
    msg.p_max = 0.622377671659;
    msg.pitch_min = 0.538160095563;
    msg.pitch_max = 0.476855805189;
    msg.q_max = 0.0838042626918;
    msg.g_min = 0.993859827216;
    msg.g_max = 0.780896967815;
    msg.g_lat_max = 0.336034550385;
    msg.rpm_min = 0.212834349308;
    msg.rpm_max = 0.924503786166;
    msg.rpm_rate_max = 0.713834484163;

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
    msg.setTimeStamp(0.9937905458);
    msg.setSource(30178U);
    msg.setSourceEntity(112U);
    msg.setDestination(59714U);
    msg.setDestinationEntity(109U);
    msg.op = 41U;
    msg.speed_min = 0.19139128584;
    msg.speed_max = 0.245265997313;
    msg.long_accel = 0.562571165121;
    msg.alt_max_msl = 0.534157948608;
    msg.dive_fraction_max = 0.752300102076;
    msg.climb_fraction_max = 0.335323981374;
    msg.bank_max = 0.552769485102;
    msg.p_max = 0.108152812513;
    msg.pitch_min = 0.113088008187;
    msg.pitch_max = 0.0853934933733;
    msg.q_max = 0.279956289287;
    msg.g_min = 0.869331220076;
    msg.g_max = 0.166598527378;
    msg.g_lat_max = 0.764682042799;
    msg.rpm_min = 0.926902141004;
    msg.rpm_max = 0.376432764223;
    msg.rpm_rate_max = 0.796544377807;

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
    msg.setTimeStamp(0.180319481313);
    msg.setSource(36847U);
    msg.setSourceEntity(58U);
    msg.setDestination(2547U);
    msg.setDestinationEntity(214U);
    msg.op = 210U;
    msg.speed_min = 0.476100676404;
    msg.speed_max = 0.923522078321;
    msg.long_accel = 0.936591335898;
    msg.alt_max_msl = 0.157088542337;
    msg.dive_fraction_max = 0.345471770829;
    msg.climb_fraction_max = 0.440123041043;
    msg.bank_max = 0.428931399684;
    msg.p_max = 0.387909449178;
    msg.pitch_min = 0.102386306833;
    msg.pitch_max = 0.865035393694;
    msg.q_max = 0.43281799481;
    msg.g_min = 0.285694568043;
    msg.g_max = 0.447921770396;
    msg.g_lat_max = 0.962792527463;
    msg.rpm_min = 0.120951033676;
    msg.rpm_max = 0.853511501976;
    msg.rpm_rate_max = 0.146533953574;

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
    msg.setTimeStamp(0.229611094298);
    msg.setSource(44444U);
    msg.setSourceEntity(237U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(53U);
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 62U;
    tmp_msg_0.status = 95U;
    tmp_msg_0.range = 0.467016115354;
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
    msg.setTimeStamp(0.295411476309);
    msg.setSource(26825U);
    msg.setSourceEntity(81U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(39U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.733575418207;
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
    msg.setTimeStamp(0.150967835628);
    msg.setSource(57904U);
    msg.setSourceEntity(33U);
    msg.setDestination(54330U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.900568701706);
    msg.setSource(9392U);
    msg.setSourceEntity(178U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.721422121283;
    msg.lon = 0.482620857461;
    msg.height = 0.588925348217;
    msg.x = 0.892737488357;
    msg.y = 0.56659388391;
    msg.z = 0.795738922145;
    msg.phi = 0.11630139373;
    msg.theta = 0.0716849997063;
    msg.psi = 0.0525961715331;
    msg.u = 0.911561583884;
    msg.v = 0.934114254281;
    msg.w = 0.19495397705;
    msg.p = 0.0881768340316;
    msg.q = 0.922940516874;
    msg.r = 0.492259928916;
    msg.svx = 0.419006010695;
    msg.svy = 0.531944551288;
    msg.svz = 0.0702457423948;

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
    msg.setTimeStamp(0.87681736611);
    msg.setSource(54825U);
    msg.setSourceEntity(17U);
    msg.setDestination(22986U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.762967071761;
    msg.lon = 0.160428141996;
    msg.height = 0.533685370729;
    msg.x = 0.911348645526;
    msg.y = 0.122152889609;
    msg.z = 0.219836352459;
    msg.phi = 0.501639275517;
    msg.theta = 0.171020428903;
    msg.psi = 0.336694196027;
    msg.u = 0.97280063705;
    msg.v = 0.0734730180438;
    msg.w = 0.506573535024;
    msg.p = 0.888629610342;
    msg.q = 0.0704379502646;
    msg.r = 0.890596359174;
    msg.svx = 0.332816897378;
    msg.svy = 0.524578078456;
    msg.svz = 0.497413931297;

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
    msg.setTimeStamp(0.513402039452);
    msg.setSource(25732U);
    msg.setSourceEntity(246U);
    msg.setDestination(16940U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.836145495029;
    msg.lon = 0.269507257458;
    msg.height = 0.391107088308;
    msg.x = 0.0845017293876;
    msg.y = 0.588022052396;
    msg.z = 0.703391964469;
    msg.phi = 0.490522570987;
    msg.theta = 0.831380817138;
    msg.psi = 0.167293797458;
    msg.u = 0.266138211528;
    msg.v = 0.648785860701;
    msg.w = 0.235702742787;
    msg.p = 0.123999562851;
    msg.q = 0.509635832291;
    msg.r = 0.231578755854;
    msg.svx = 0.430655030023;
    msg.svy = 0.385839509411;
    msg.svz = 0.23129935014;

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
    msg.setTimeStamp(0.150654724659);
    msg.setSource(56003U);
    msg.setSourceEntity(86U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(167U);
    msg.op = 230U;
    msg.entities.assign("WGRFUQOFMXZQXDAQTPHFUUVJSVSOQUTLHBOFPRNZIQKECAISLOZTIXHYTKEWLLOHPMXNOJFNXUBUVMVXPCBQTOCVGEAQJYWCRBXMNODWKIRZCHYYUSDIQDYCWACKULPHGXEDMAGAUNEGWGFWJCHJFTSMUIEYADVSWNBNTERJRHTAZSBXEVZYWZKCEBAKCPOTPLMNYFQSHFDOZRVBRMGPDQWGKGHLFV");

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
    msg.setTimeStamp(0.0573370315073);
    msg.setSource(20726U);
    msg.setSourceEntity(145U);
    msg.setDestination(44463U);
    msg.setDestinationEntity(45U);
    msg.op = 127U;
    msg.entities.assign("UNEGCFDLDHTLZQWGHOZJMOQTRZQINGSJWOCPFNREIKHZQMYVUETMGVUYDOXBETPYUOAQIRIEDILLCBCYVFIJWNZWPLDHNCRPAVQGKQGSDAMBGSDDZJPOYSYBEKVKVF");

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
    msg.setTimeStamp(0.150944096553);
    msg.setSource(8417U);
    msg.setSourceEntity(62U);
    msg.setDestination(29801U);
    msg.setDestinationEntity(197U);
    msg.op = 34U;
    msg.entities.assign("FCAGBFBPXGQWTMVDIIKBUEBOWSWANJXQSJWLXLLLHOIGCSRHJLNXEFHKEQYZKUVDVWMQAKMTROUSSNRJAOZCXXLIRNHNTOJZVYCLK");

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
    msg.setTimeStamp(0.3618296676);
    msg.setSource(17885U);
    msg.setSourceEntity(92U);
    msg.setDestination(29U);
    msg.setDestinationEntity(65U);
    msg.type = 37U;
    msg.speed = 53789U;
    const char tmp_msg_0[] = {126, 7, 66, 91, 30, -105, 62, 68, 62, -48, 77, 37, 82, 3, -109, -58, 75, 117, -97, -126, -56, -125, -1, 91, 53, -126, 125, 120, -67, 74, 95, 71, 100, -70, 110, -103, -19, -126, 24, 24, 86, -14, -66, -116, -40, 50, 74, 87, -97, 42, 110, 120, 23, -88, 47, 83, 5, -24, -92, 117, 92, -107, -52, 30, 46, -57, 101, 124, 124, -114, 84, -19, -58, -102, 20, -69, -24, 81, 34, 73, -59, -4, 50, -9, 112, 104, 73, 110, 87, -103, -123, 102, 101, -48, 23, -3, -67, -10, -72, -6, 125, -54, -67, 72, 87, 64, 16, -65, -2, 45, -23, 62, -21, 62, -116, 96, 112, -32, 96, -90, -106, 11, -37, 19, 16, -68, 82, -101, -38, 21, 89, -63, 105, 36, 82, -35, 64, -118, -112, -68, 26, 2, -32, 29, 81, 14, 112, -86, 14, -117, -126, -53, 112, -111, 124, 72, -108, -22, 111, 120, -26, -111, 115, -16, 50, 109, 58, 37, 15, -105, -124, 4, -73, -37, -1, 31, 66, -114, 78, 57, -20};
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
    msg.setTimeStamp(0.870109396927);
    msg.setSource(44396U);
    msg.setSourceEntity(225U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(251U);
    msg.type = 27U;
    msg.speed = 19609U;
    const char tmp_msg_0[] = {49, 104, -109, -125, -54, -47, 115, -116, 115, 95, -25, 125};
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
    msg.setTimeStamp(0.468995856233);
    msg.setSource(9088U);
    msg.setSourceEntity(192U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(92U);
    msg.type = 248U;
    msg.speed = 1874U;
    const char tmp_msg_0[] = {30, -87, -36, -51, 69, 106, -49, 81, 54, -86, 78, -100, -93, -101, -43, -91, 44, -124, 111, 9, 62, 51, -26, 45, -84, 87, -126, 48, -125, 98, 103, 48, 56, 27, 27, -97, -39, -9, 56, 100, -102, -13, 11, -18, 92, -65, -1, -22, -75, 34};
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
    msg.setTimeStamp(0.24184901809);
    msg.setSource(60130U);
    msg.setSourceEntity(164U);
    msg.setDestination(65510U);
    msg.setDestinationEntity(157U);
    msg.op = 39U;
    msg.tas2acc_pgain = 0.524745353218;
    msg.bank2p_pgain = 0.183771873135;

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
    msg.setTimeStamp(0.663381008752);
    msg.setSource(54181U);
    msg.setSourceEntity(188U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(163U);
    msg.op = 18U;
    msg.tas2acc_pgain = 0.796450942469;
    msg.bank2p_pgain = 0.0109802001138;

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
    msg.setTimeStamp(0.930932219129);
    msg.setSource(48738U);
    msg.setSourceEntity(184U);
    msg.setDestination(33604U);
    msg.setDestinationEntity(109U);
    msg.op = 4U;
    msg.tas2acc_pgain = 0.18544600535;
    msg.bank2p_pgain = 0.0743238273451;

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
    msg.setTimeStamp(0.430907649928);
    msg.setSource(31088U);
    msg.setSourceEntity(99U);
    msg.setDestination(43812U);
    msg.setDestinationEntity(237U);
    msg.available = 4022338783U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.0452427733248);
    msg.setSource(34066U);
    msg.setSourceEntity(130U);
    msg.setDestination(26631U);
    msg.setDestinationEntity(88U);
    msg.available = 3047682576U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.602314398536);
    msg.setSource(35148U);
    msg.setSourceEntity(190U);
    msg.setDestination(18885U);
    msg.setDestinationEntity(85U);
    msg.available = 1466298115U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.00997890899093);
    msg.setSource(8764U);
    msg.setSourceEntity(241U);
    msg.setDestination(34547U);
    msg.setDestinationEntity(163U);
    msg.op = 126U;
    msg.snapshot.assign("PXHUISWSTJNMARMCEZVMQIFDDSFOJJ");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 84U;
    tmp_msg_0.x = 0.983904694036;
    tmp_msg_0.y = 0.962773931682;
    tmp_msg_0.z = 0.191676359301;
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
    msg.setTimeStamp(0.477288700083);
    msg.setSource(48480U);
    msg.setSourceEntity(247U);
    msg.setDestination(23388U);
    msg.setDestinationEntity(148U);
    msg.op = 221U;
    msg.snapshot.assign("WZXYHJNGVAH");
    IMC::AbortAcked tmp_msg_0;
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
    msg.setTimeStamp(0.415024972788);
    msg.setSource(57516U);
    msg.setSourceEntity(45U);
    msg.setDestination(22270U);
    msg.setDestinationEntity(35U);
    msg.op = 37U;
    msg.snapshot.assign("ARTRDOZSUWYMKGBBSPQXYCGOYKPWOAGCKBCBYQROWUXTJUFSSRDHQJOMBVQGAKDEVXSQHIGLQCLVNXIQXRDPFDVWOCOFPGIDYAZELIIJHBQMVOXKNBPHWEMUDFECIEXSWLLXBREHTVARMVJCFLZZRALAZJYSZPUKHTPVRJNDJFFUPHEFDNKYYMSLHOEMUKCGNQNUXZAEMGBFIWLICNAPTSLNZIHEMGXFYVY");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.89139975938;
    tmp_msg_0.phi = 0.418344141697;
    tmp_msg_0.theta = 0.798589881675;
    tmp_msg_0.psi = 0.0080541419446;
    tmp_msg_0.psi_magnetic = 0.548301897879;
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
    msg.setTimeStamp(0.0295431443447);
    msg.setSource(62514U);
    msg.setSourceEntity(32U);
    msg.setDestination(17784U);
    msg.setDestinationEntity(34U);
    msg.op = 171U;
    msg.name.assign("FURJMTXKNCGERCQMSNAOYCGCEOHNOUZSOBBNEEQRQUWMBHEXGXUIIKFLFAJYZBPXSZDZMNHGOVTTVQSCWPPAGQWCPHCVRZYPHEOSMDDEFGVKZXVYDDGNXALOOAUSPZLKTKAYFCIFKWRJITYLEDPTYSLWDNKBDBLIGWPKRQBWLIDWJNYSYIXAJQJVWAZNLVUUEPHIFWTMCOBGRMBXQJFRNGFLSKZCVHDXMKVIIOLHFTMZRUVBJUUEXM");

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
    msg.setTimeStamp(0.513341613034);
    msg.setSource(64892U);
    msg.setSourceEntity(12U);
    msg.setDestination(44599U);
    msg.setDestinationEntity(8U);
    msg.op = 61U;
    msg.name.assign("WMNXTJXWYARYUHLDLLKQYLDIKSARPHHRGJDIKNSVBFCZPHJKJQMBIXTMSJMBAZGKAGVUXTTVBAQKCXPOOOUQS");

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
    msg.setTimeStamp(0.0794156374164);
    msg.setSource(1834U);
    msg.setSourceEntity(242U);
    msg.setDestination(23236U);
    msg.setDestinationEntity(184U);
    msg.op = 47U;
    msg.name.assign("JTGANNMBIISIUPUFUXKAYFXVMAVVWSQCUBZCDZRFUPFOKOHPLDEJYMHBSLWKJGXAYEPYLYOARZHDCSCWZRNAGPXHLIFCB");

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
    msg.setTimeStamp(0.487088152506);
    msg.setSource(49516U);
    msg.setSourceEntity(78U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(171U);
    msg.type = 111U;
    msg.htime = 0.956850765421;
    msg.context.assign("RNNJMHUXCVMUNSVHTKNMFGW");
    msg.text.assign("HBDMOYROZWYFTNVKKATNTNUUTVOCRRHGWGGOBMGDHUKQJQWAISQQZXJBLBMGQPCJQXUOTIXRQTFYDDZEESIYLPKHSXPGOQCFPOXNPKUHILWEXARYEFUXNVWCMDYJVZAYXMRSFZBHANIKTJMALVEWIDVBRQINSENYGLFMUNHKOUSBJKSYF");

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
    msg.setTimeStamp(0.165946983145);
    msg.setSource(40133U);
    msg.setSourceEntity(215U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(34U);
    msg.type = 249U;
    msg.htime = 0.174991053213;
    msg.context.assign("MMGNLWUEUDKJPVWMALLFIWQLZTXAOXAHDOJLQENGQMTFRMKRSRFMYWHYXDYRADPEMAFZBSDBOOWCGYTRENHWUICCAZQRNJMWNUUZASSTHKBHGMISPYQMHFSAZOVOQZTBJEQEGJLZSEWGIVBRTCDTXHOKRFDHBXJOCJFPQXNCBBUNFIPIHPTLIOUVSKNDUDGJQZYTVFKVLSXECCWJGYSPX");
    msg.text.assign("EYCJHLDDSXXBHJYLADMFAFBYHOKENPQULBKFZZDQTEJTVFCULKYIPPVKHBPNWEPRMYGGZBJXQUQZJKADOIOPHPYQFUIQFLUINPYUNXTOGGFSYUAAWPHGEKIOZDQZVAVRTTNERORZNSZXFANBVJGSCTOZDXRGHFAMSVMJBXIPLXWTQGIWCRSEYQBIVRGIHHRDAWSZVJWTEMEDNCCOKWNBNUJFLVLRTRKGAVKWELXWCCDSJUITWQC");

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
    msg.setTimeStamp(0.985087465915);
    msg.setSource(52620U);
    msg.setSourceEntity(138U);
    msg.setDestination(10019U);
    msg.setDestinationEntity(155U);
    msg.type = 175U;
    msg.htime = 0.753438060751;
    msg.context.assign("KMSXLNJKSNUITZYUWIMACJB");
    msg.text.assign("TENNVURTQNEFXIKFYYJPMAUPSAVHCNEFGSJIQYZTAEBNFANZECOWQFIWMCLSLOOGPDMYHWTTKWZWZRLMOKTVVWQCPOIGAPDGIJZGQFAPESTYCGUJDPYJIQRTRJMKDP");

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
    msg.setTimeStamp(0.16329273065);
    msg.setSource(51974U);
    msg.setSourceEntity(74U);
    msg.setDestination(28703U);
    msg.setDestinationEntity(201U);
    msg.command = 130U;
    msg.htime = 0.251368455879;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 163U;
    tmp_msg_0.htime = 0.920441017421;
    tmp_msg_0.context.assign("PVMFJRNCWSAGEIJEAQRWUIDHNHAFBBTNQOJCGOZXQMCQMYOFEDNHELRFNXWTBRKREXSFBIOTKSLYMJHWKMTJEGVXGHWPJHBUBVODCXAKGGQZHYDKLOXGDIKRPWBNIDCGUOQZMLCGHRSSWWAULKYMOIONNIBDTSPWYPZAYNPCCZPIFTJGXLZZWYXXRUHZJKJHCVVPEYLTAZSSKUIVLFVCQZUDQEYVBVFLRFDXUVPAYMBEST");
    tmp_msg_0.text.assign("NEAZARDERLHWOFMOCUKHZLQNVOYQEHIPNOHXJGEYHOFEWIYWMQJQLXSLXUWYFAUERTBOCILMXYOERGUSUSFQLEEEBSPXAB");
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
    msg.setTimeStamp(0.804246921632);
    msg.setSource(17183U);
    msg.setSourceEntity(63U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(95U);
    msg.command = 70U;
    msg.htime = 0.825159194422;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 187U;
    tmp_msg_0.htime = 0.613139096637;
    tmp_msg_0.context.assign("PCJMTWUCVHFVZFDCDUNJXOHN");
    tmp_msg_0.text.assign("BFTHWEZHYJETRDAYJXHNAALXUDIQGQNGQPLXLWFJDBBIPVECKFWZJDHEOOMOIUVYHIESCXTPATNBJERVNCIFPWBSSPBQWTMHKDSTZKQSJEFCNUXNKMP");
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
    msg.setTimeStamp(0.58007619349);
    msg.setSource(46146U);
    msg.setSourceEntity(184U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(184U);
    msg.command = 48U;
    msg.htime = 0.383841925465;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 183U;
    tmp_msg_0.htime = 0.254643287102;
    tmp_msg_0.context.assign("YBXAMVJZFVKRWSDZHPIPRCLTXSHXCWWJEBKBGMXSUZPGIGLMFPNQRXKJLRQJNHOAZYITDKOAFYKAFRDHJNXWOOECYBOBJSUDODITYKFZANAKXRNMVRDUIGYRLLIEQGAGXUMPZROZLCHLJCVJZYBTSTBICYPJCFTZTBEMKFDRUCTOLCSAUDTMSHUKHYFVJY");
    tmp_msg_0.text.assign("SZDVQNGFRBPKRIVTKYOUWV");
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
    msg.setTimeStamp(0.0398440042002);
    msg.setSource(5909U);
    msg.setSourceEntity(21U);
    msg.setDestination(17684U);
    msg.setDestinationEntity(156U);
    msg.op = 218U;
    msg.file.assign("PPUMWQOCCIRSSABQCVBPBMOSOQRGAOCWZLNKNPYJYWKJZHUEFARIDJHFIFHWZ");

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
    msg.setTimeStamp(0.936204399514);
    msg.setSource(17070U);
    msg.setSourceEntity(149U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(248U);
    msg.op = 169U;
    msg.file.assign("AAJETRBNMHSIZZIFWMGMLZLATEGTQTMPJWUPCMSFAEHCQBORAXHJIKBFRDQMWRJARKJKUDFRNOIPVAMIPBGPHFAYVNLVDXEJOKNFSHZRPI");

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
    msg.setTimeStamp(0.716791499075);
    msg.setSource(20949U);
    msg.setSourceEntity(169U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(102U);
    msg.op = 43U;
    msg.file.assign("DERBPLFYWIDSKVRREFROCXJKWSZUIFMEZDAFBHWSNCGUCFYUUWXRQMTHGVJXTOVKNLODPNLIEPWZAQRMZBTHLYNHSGFZORUNJAMGOPDNNHHDZROFFCBBAPOAELJWKYHLEYLEXXHVCJXJXPRVPBTHDFGOVQNTQCLZVWJAEBSSTEDGRQJMKLTZQMWBGATBYUENVQSOIKZGHJSDDPIZMICGMNVXIUBC");

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
    msg.setTimeStamp(0.331379489328);
    msg.setSource(20968U);
    msg.setSourceEntity(14U);
    msg.setDestination(49229U);
    msg.setDestinationEntity(151U);
    msg.op = 98U;
    msg.clock = 0.185131370831;
    msg.tz = -79;

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
    msg.setTimeStamp(0.826836274728);
    msg.setSource(48316U);
    msg.setSourceEntity(210U);
    msg.setDestination(42391U);
    msg.setDestinationEntity(21U);
    msg.op = 22U;
    msg.clock = 0.760431374152;
    msg.tz = -24;

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
    msg.setTimeStamp(0.108956817747);
    msg.setSource(53060U);
    msg.setSourceEntity(113U);
    msg.setDestination(3067U);
    msg.setDestinationEntity(25U);
    msg.op = 227U;
    msg.clock = 0.405938111889;
    msg.tz = -122;

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
    msg.setTimeStamp(0.44318783491);
    msg.setSource(57591U);
    msg.setSourceEntity(77U);
    msg.setDestination(24921U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.172203962367);
    msg.setSource(25754U);
    msg.setSourceEntity(214U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.420795288338);
    msg.setSource(11983U);
    msg.setSourceEntity(100U);
    msg.setDestination(63632U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.615232200264);
    msg.setSource(58732U);
    msg.setSourceEntity(117U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(194U);
    msg.sys_name.assign("SVYCJXEIRRHTWUTDTKGBXMLISZPDFYAJKKVJZNGXAPVZICFYISAUSTRGKXHJDXNTRMIAFBOOTUVDEXRSAQFMLLCTVKXYPPUXYMDMJDQHXPENCRARCOVKSPRWCYYMMGEEUMGHQLOPPWHEWLFPDNWNEVNHBKGUJWLTIZVENZKZAAUWFQHHQLIRTFGQAXVLUTDQOZSBDWBMCFGIGRZOJADUWJOIQSCOCQBOLPVSFNNELBBCQKBZZJSMYJW");
    msg.sys_type = 187U;
    msg.owner = 31276U;
    msg.lat = 0.248865302127;
    msg.lon = 0.62367270753;
    msg.height = 0.514477136241;
    msg.services.assign("WTKBIHSGQUMXZWJKMEDXUZIFQHLIMPAVEDEZBSYTDVLRXTUXGDQFXHDKCPSCVGFEIHOSUPWGEARZQHRMUAEUOKBXMAUMIUWPBDOIFGPMORHPYWOQNUPCBFLVLKYDZNGAONJVLCKOGFSE");

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
    msg.setTimeStamp(0.691409014224);
    msg.setSource(43424U);
    msg.setSourceEntity(96U);
    msg.setDestination(56107U);
    msg.setDestinationEntity(14U);
    msg.sys_name.assign("TAYQWRESLHGCFPXUMWZAOSISLRBEMHZAVUQVPTCVQLIFTPPPXFGNXWEMXTVVHBSKSNTPFWXJEKBMGOLIUOUCFUYBJDZBVEIKSOJYMDGQEIWPAYJPWGMNOMQWBSADILMDCVVDUTJRHFOQAFNZYOTQENRADHCRZNLCJKIBNEJRCPOBHEZFUZRQMZDWVYNXSYGQJGDTXMCHUIDGGXNIKQXIEKYVARHLYHYRDPBWCXZLOAGTARKSBFKNSFJWTLKK");
    msg.sys_type = 114U;
    msg.owner = 45098U;
    msg.lat = 0.6709447412;
    msg.lon = 0.600391772648;
    msg.height = 0.327211591068;
    msg.services.assign("BZKOCUORPNLPOWCFCVQGUWXUYYZXEILYWMRJKCLQIFKLDPTHEMEVTHFVIXPFMTUGOOCBPXLTOIJXZPMRHAU");

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
    msg.setTimeStamp(0.813272165029);
    msg.setSource(22300U);
    msg.setSourceEntity(165U);
    msg.setDestination(40059U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("SHWQGPGTFVEOLCLNLWCTTBJNRIXHKDTPXRLKZZKONGGARSMTIYKHCJNXEWIOYXSUXENACAWAOBHKDYLVXOOYTFFACDOHEYZEWFFJPUJJESUDGJCUTENAIKZXMSQSBRNGPYJGTZVTGLUJXKIBVBJQBPZQDZHVSLRI");
    msg.sys_type = 209U;
    msg.owner = 63272U;
    msg.lat = 0.70642601158;
    msg.lon = 0.829861225315;
    msg.height = 0.67685956294;
    msg.services.assign("WCZSGSIPCAOVXTBIZWKKBWNIPOSZWCJZWSFWTOGQRLMUXCCS");

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
    msg.setTimeStamp(0.47268652948);
    msg.setSource(25687U);
    msg.setSourceEntity(72U);
    msg.setDestination(1519U);
    msg.setDestinationEntity(230U);
    msg.service.assign("LRUQYCVBDXLHGDGMLDJTHIXHASWTROZGPYTNBXTWXSLKXHHQUWLSYURXVVDLOHJWOIPMNUZTCYJETJWZAUVENYWPGAZMRLZGCKZKMOKXAYOEUCESFNZVMKBJEEYNFIENRFMCQKWVCLAPKVIXHBYBFPQIRPSFHZHCUPOAJVPQKW");
    msg.service_type = 208U;

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
    msg.setTimeStamp(0.809010158369);
    msg.setSource(7218U);
    msg.setSourceEntity(220U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(79U);
    msg.service.assign("ERPCWNORTMQGJQXZOVLVXHQKPCXQISGZOMWIGXYINTOPUHYRMYFMTHAPOCQRKFCJYALTKYQRARRWFVCDUJHUKNDFSLBEVWLWGEPWEKZVWZCZTYENAJKMKOULTPUWHPJYGFQELUSZSDNBPLHRNIIFISCOCIFFBX");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.855919783763);
    msg.setSource(37003U);
    msg.setSourceEntity(84U);
    msg.setDestination(14464U);
    msg.setDestinationEntity(21U);
    msg.service.assign("QXXAERAAHXECVDQACWARPCMHLRYQBJFXUG");
    msg.service_type = 183U;

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
    msg.setTimeStamp(0.988702200833);
    msg.setSource(65120U);
    msg.setSourceEntity(233U);
    msg.setDestination(17339U);
    msg.setDestinationEntity(142U);
    msg.value = 0.993125655389;

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
    msg.setTimeStamp(0.334597436012);
    msg.setSource(55011U);
    msg.setSourceEntity(32U);
    msg.setDestination(58602U);
    msg.setDestinationEntity(104U);
    msg.value = 0.424818722093;

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
    msg.setTimeStamp(0.788683830413);
    msg.setSource(6550U);
    msg.setSourceEntity(165U);
    msg.setDestination(13061U);
    msg.setDestinationEntity(122U);
    msg.value = 0.627864260602;

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
    msg.setTimeStamp(0.847094565932);
    msg.setSource(44687U);
    msg.setSourceEntity(160U);
    msg.setDestination(24582U);
    msg.setDestinationEntity(168U);
    msg.value = 0.720625160468;

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
    msg.setTimeStamp(0.965773076504);
    msg.setSource(61246U);
    msg.setSourceEntity(29U);
    msg.setDestination(21344U);
    msg.setDestinationEntity(8U);
    msg.value = 0.291123577156;

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
    msg.setTimeStamp(0.304505913557);
    msg.setSource(50479U);
    msg.setSourceEntity(57U);
    msg.setDestination(40195U);
    msg.setDestinationEntity(248U);
    msg.value = 0.472823055577;

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
    msg.setTimeStamp(0.2123001646);
    msg.setSource(34647U);
    msg.setSourceEntity(189U);
    msg.setDestination(16795U);
    msg.setDestinationEntity(12U);
    msg.value = 0.228072861049;

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
    msg.setTimeStamp(0.666216236095);
    msg.setSource(884U);
    msg.setSourceEntity(234U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(157U);
    msg.value = 0.846090606759;

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
    msg.setTimeStamp(0.890133636281);
    msg.setSource(48379U);
    msg.setSourceEntity(70U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(30U);
    msg.value = 0.454954623022;

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
    msg.setTimeStamp(0.660087418625);
    msg.setSource(40846U);
    msg.setSourceEntity(70U);
    msg.setDestination(64645U);
    msg.setDestinationEntity(0U);
    msg.number.assign("FFEADLLVSGWMUAXRKLLOQISDAHZPEJCBBWYISPRTVZVJDHGHKAHBRDMVBLXPBKNFSIMQLMTRZNUZTGWHDGYWVVOAMVOMTSTRQNXUNWXGDKELGGMHCQFKVKCUTPOMUPYWVQGIRSXAPNEUSQJNUMCANYHWBCPUCTZRXJDUYBWQEHRUXCEKIMTQAJJBIKKJJEYOHFIAXZGDRFOFNTORYNWBOP");
    msg.timeout = 65161U;
    msg.contents.assign("SCAOFNKUGTJKMQBOLLACHAJADMPNOREJMVJWKSBTOCWKRWCHOZYBMCEPLDUQBRTXMBVQZVSDUFPTPIYLCHQGWPQJASUMYWKRVDTFYRCNEGFOLHZXQNESKRGPUZCVWISPGFZTQILHPMIFETHWAULQGXYNNYKBTFXSEEUTDCFLFRXHKVYHIVPYVBSEJWJDG");

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
    msg.setTimeStamp(0.234988971743);
    msg.setSource(48465U);
    msg.setSourceEntity(232U);
    msg.setDestination(26381U);
    msg.setDestinationEntity(215U);
    msg.number.assign("SBTSDYRXETGECRURKGGJZHTBSFALFLSZPWORBYIFNMHJNVLNNYRENTMROFTCTZHAMIXXFDCLIBMYG");
    msg.timeout = 52576U;
    msg.contents.assign("LQFBDOVQYSRZBILMZDVXZPXQNKYPFGTMGOQIMHUJRSAHYTNIMEYPCXVHTRFDELDNIJKUJUISUAHWVKWEEZUXTBWBJIUWTEWUQTOZJLJNEVFXHKBMWSGJHSWWFOOMRDYVADCD");

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
    msg.setTimeStamp(0.582341547837);
    msg.setSource(34343U);
    msg.setSourceEntity(138U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(28U);
    msg.number.assign("ECJIUZQTINTTYR");
    msg.timeout = 20547U;
    msg.contents.assign("RRXMBFKYVMVETBSEKERRHZNDFZTSWPRVGBUPFESAECJDAAHTVHQUCGKJNIFGULCOUIPWUASXHAESZKQMZWLJKVDKOLOGMXTBIAHUYZWMIQXTIVMGHGXTNZZVIDYSZHWJOLJHQZOXXMBMTNLLJIRDABNQCKCLCDEGPEWSSCRQFBUYYNYUR");

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
    msg.setTimeStamp(0.661697104571);
    msg.setSource(34705U);
    msg.setSourceEntity(52U);
    msg.setDestination(37628U);
    msg.setDestinationEntity(167U);
    msg.seq = 1826179125U;
    msg.destination.assign("UCJSPSJDCNAYDYGSHODJNTWSKWLLVFFHRITSEIFRRMRWUZMBGORMZIGMBQHKVWAHBKJMEAIYCIAPHPWXEFDJTJOBJJNPODOWZXGUINKXXNJVMDZYKUVLOLWFUEJXPVBOBCRHXUKTZMYEZKTCWLPELPHQIRCKBLQZGECQFABXPIZSGLGRVSFCNQVYSLAYYHUETWUIQWHHFRTXPAVABZOEMVRPEKCNDCOMONAZDQYTMXFX");
    msg.timeout = 42095U;
    const char tmp_msg_0[] = {-45, -122, 29, 8, 89, 38, -58, 59, 125, 114, 4, 1, -75, 41, 113, 116, -75, 31, 97, 54, 29, 68, 46, -41, 0, 65, 81, 88, -85, -83, 112, -103, -51, 94, -108, 32, 79, -8, -50, 55, -17, -19, 55, -10, -78, -55, 31, 42, -98, -27, 19, 18, 2, -89, 0, -34, 14, -124, 123, 63, -63, -48, -83, 61, 20, 59, -16, -39, 64, 108, -94, -4, 24, -81, -54, -29, 122, -41, 125, -48, 101, -3, 104, 70, 116, -42, -33, -32, 83, 62, -63, 27, -35, 64, -86, -93, -24, 82, -112, -109, 10, 115, 58, -26, -20, -78, 95, 55, -126, -15, 16, 79, -121, 32, -81, -50, 47, 54, 123, 108, 46, -70, -102, 126, 77, 110, 56, -60, 43, 67, 110, -123, 51, 119, 39, 93, 96, 67, 35, -124, -119, 101, -74, 75, -117, -12, 24, -123, -32, -81, -42, 28, -49, -128, -126, -24, -20, 76, -2, -10, 4, -56, 51, -19, 62, -56, 5, 103, 11, 92, 33, -79, -107, 98, -97, 125, -6, -3, 20, -70, -64, 18, 2, -41, 26, 53};
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
    msg.setTimeStamp(0.278009713563);
    msg.setSource(42260U);
    msg.setSourceEntity(169U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(195U);
    msg.seq = 3158166291U;
    msg.destination.assign("EAHRAYNWEPDKTSQMYPESBPTJBZEFHTCPTDYKIXYJUKFLKSBLCVVJJMSIIKMYDAKVNWGCCFAGCEUOBVHIMQEJJGTGUHRRYOZCODXMOFEVFZTQNUCLZWHBACSEJIIZLYXOLFWJONHYAZIYRODASXM");
    msg.timeout = 1966U;
    const char tmp_msg_0[] = {-67, -26, 100, -23, 41, 118, 48, -125, -30, 45, -59, -124, -122, 50, -43, 74, -32, 93, -16, 73, 9, 98, 108, -61, 125, 4, 28, 43, -67, 44, -93, -53, -126};
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
    msg.setTimeStamp(0.00790977748414);
    msg.setSource(53252U);
    msg.setSourceEntity(203U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(52U);
    msg.seq = 1819027950U;
    msg.destination.assign("VRVGSCKSDKNIWNZSUWWQHXBCRETNEVLNAXJZCRLYOOXBXNWGIJHMWWVCAOPKIMGEEPDKSTBZZNAVUWLDCSKFJZUFDGQDCASZIMADBGTMPERUUWNEJKMTHRVTPNXYIOBFOHCADMLJGRQQFDHGCOXUILGTPEQHJOFPZKXIIFAYSFFMQIJHOKLMZKZMXJVFUFYABRCLVTUWUYHEPBYRMPYBPVQDSYHLOISSLX");
    msg.timeout = 47859U;
    const char tmp_msg_0[] = {2, -95, 81, -93, 86, 29, -55, 81, 106, -47, -53, 64, 52, -101, 50, -68, 64, -81, 82, -98, 27, 42, -3, 113, -3, -43, 6, -71, -124, -78, -54, -2, 97, 55, -55, 124, 95, 96, 32, 94, 34, 41, -36, 26, -77, -79, 126, -52, -69, -74, 91, -53, -110, -23, 4, -8, -18, 39, 103, -109, -24, 81, -58, 23, -92, -82, 106, 117, -88, 12, -65, -126, -35, -124, 27, -10, 10, 13, 98, 103, -88, -33, -45, 83, 52, -127, -34, 56, 48, -101, 67, -99, 106, 10, -107, -84, 14, -41, -88, 42, 49, -36, 122, 120, -98, 92, -90, -12, -124, 15, 95, -122, 78, -121, -94, 97, -49, 52, 118, -128, 47, -64, -85, -53, -87, 110, -7, -36, 12, 69, 84, -69, 98, 60, -113, 47, 89, 63, -32, 112, -95, -64, 16, 61, -35, -96, -57, 57, 87, -26, 41, -7, -107, -13, 39, 48, 1, -73, 103, 117, -86};
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
    msg.setTimeStamp(0.588027155067);
    msg.setSource(48225U);
    msg.setSourceEntity(113U);
    msg.setDestination(1230U);
    msg.setDestinationEntity(181U);
    msg.source.assign("TNNPSHVOUDOHJBCWVMQIESCDMGKIBEPZHMUZKFQLJFZWFFCD");
    const char tmp_msg_0[] = {-9, -62, -15, 72, -74, -70, -104, 37, -50, 66, -104, 33, 113, 74, 62, 124, -10, -25, 37, 111, 46, 48, 71, 121, 87, 18, 2, -80, 49, -85, -60, 46, 8, 76, -11, 33, 7, 111, -62, -61, -62, -70, 49, -36, 92, -10, -94, -92, -122, 99, -17, -118, 104, 125, -29, 55, -127, -123, 104, 65, -3, 60, 72, 75, 47, 26, -74, 66, -56, -126, -88, -72, -80, -1, -38, 56, -50, -63, 65, -96, -74, 73, -27, 79, 122, -61, 51, -32, 33, 90, 26, 64, -50, 66, 7, 58, -119, -67, 121, -102, 65, -4, -41, -51, -62, -51, 105, 19, -36, 22, 55, 116, -30, -47, 17, 110, 44, 38, -98};
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
    msg.setTimeStamp(0.994933468583);
    msg.setSource(40037U);
    msg.setSourceEntity(186U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(55U);
    msg.source.assign("NOOIRCVHXEZMOHKWOTWKLVZKTNZHXHFFDIIZUYOPJYYUFYLDHBQYIMVXLRFBPYLWSAMVTEDAAVXEHSENKCANTLTM");
    const char tmp_msg_0[] = {118, -59, -82, 43, 1, -125, -14, -111, 86, 20, -7, 59, 122, 58, -54, -122, 12, 9, -94, -45, 75, 111, 44, -128, 105, -84, 86, 26, -75, 56, 14, -100, 90, -59, -27, 68, 67, -108, 41, -124, 93, -15, 77, 107, 92, 12, -17, 78, -108, 108, -37, 125, 80, -38, -2, -112, 87, 67, -48, -53, -52, 68, -95, 56, 59, -6, 26, -109, 119, 36, -54, 62, 41, 106, 120, 107, 57, -13, -89, 24, 61, 76, -24, 55, 81, -128, -9, 79, -7, -44, 80, -127, -76, 117, 66, -43, 88, 70, -113, -40, -55};
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
    msg.setTimeStamp(0.389358933316);
    msg.setSource(400U);
    msg.setSourceEntity(120U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(3U);
    msg.source.assign("SKGWUZXBGASTZPGNRCMYBNKDNDNODDXNFMGLPQBAUEUQIVXRROHRRKITGDVJXEQHKHHOCEESKXHNTLCGZVJHFFIWRTJAQAISKMWCPGYLARKLJVOGKQPRNNUJZBMYUUXOQDZOMJXOQVPZXIGJME");
    const char tmp_msg_0[] = {-106, -18, 124, 84, 19, -13, 103, 80, 98, 1, -56, -24, -89, 31, 95, -45, -91, 61, 114, -43, 60, -91, 69, -60, 61, -15, 39, -84, 39, -35, 6, 33, -18, -62, 11, -69, -35, 98, -25, 57, -100, 6, 35, 79, -114, -66, -28, -68, -100, -114, -76, -107, -61, 68, 16, 62, -33, 95, 102, -23, -108, -121, 122, -64, -33, -5, -119, 27, 84, 70, -36, -80, 44, 43, 116, 106, 94, -86, 27, -115, 41, 41, -122, -116, -117, -49, 37, -114, -60, 123, -44, -25, 39, 62, -121, 90, 47, 35, -13, -35, -87, -53, -34, -68, -122, 7, -73, 109, -120, 116, -119, -38, -42, 83, -98, 42, -37, 71, -126, 11, 90, -43};
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
    msg.setTimeStamp(0.0394855391192);
    msg.setSource(11281U);
    msg.setSourceEntity(142U);
    msg.setDestination(41732U);
    msg.setDestinationEntity(40U);
    msg.seq = 1981876444U;
    msg.state = 24U;
    msg.error.assign("LADXDMOJPEKMLHTVAKCBIPMGIPKSBYXHDNDEBZOPZERSERBTQNKGPWJMJYXZCYVTUASGUIGWRLIFURXUGSDOCKQMFQW");

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
    msg.setTimeStamp(0.343785805725);
    msg.setSource(46705U);
    msg.setSourceEntity(154U);
    msg.setDestination(39575U);
    msg.setDestinationEntity(86U);
    msg.seq = 1590509170U;
    msg.state = 58U;
    msg.error.assign("ZZXBQVMUDBYLBIUZJPJUQOMWYEJCNCFJIDLEPSTXMQBHIAQCTNLBIUHRBIPWTGYWONWGDYQDRFQVAROACOUSSGSLSKLLFPYCATRDGKDD");

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
    msg.setTimeStamp(0.36236684929);
    msg.setSource(1691U);
    msg.setSourceEntity(30U);
    msg.setDestination(42224U);
    msg.setDestinationEntity(50U);
    msg.seq = 2758139442U;
    msg.state = 13U;
    msg.error.assign("LSMBICGRCEZWIDCZEXUEFTNNWJKIPZHDLRDNSWMCSHJKPYDBTTCRVTQESKOVSJDJOEULAPBONWTWVGSMRRUAPNEXHVFWPGONTFFHDUWQLALYGIZSAVNPFADXQUBDYQOHMRKZFCIRNMXIZIVGEJQHJZTLQNJDOFKATUYHBFJSWMKTUGRQVGRBZXLYFPDQBHHGAUXYMZHYWCUEGXZLPNYKPO");

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
    msg.setTimeStamp(0.372353103973);
    msg.setSource(6299U);
    msg.setSourceEntity(30U);
    msg.setDestination(24246U);
    msg.setDestinationEntity(15U);
    msg.origin.assign("WVWBOVNJFDIHESMNEPQVQNFIKGFEQDKTDJBYXMBZSSRLEZCQHRGQVJJVJLWONUZVIKCURKYOCDUITHDECAWXESIMWGYTUZOPZHQGLJNNMTYBVILSNXOGFGMTRRKHEXUQKRFBKS");
    msg.text.assign("VAVNGTMJZLCZGHPUHADFRQEZTAYDERHGPRHLIAGXBMLYZBWYHWWQBIMBTULVFWCKHQAISNMADETGZORIHYCJZOZNORWXIUFYNVPJTQMMQAVKDXCRXKCTBARCQEJXKJEOSUOUKEGNUXLWCPQOGPBZJBEVCBRRSYHPPUEIFLUMWVNAICDKZQGKSEFSWWSSXJMYBCUJBSOTLDOAN");

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
    msg.setTimeStamp(0.0157682537166);
    msg.setSource(16106U);
    msg.setSourceEntity(27U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("JIJOXKWTLMUANTTPJKPCVPQANEODSHAOXFMBPCNTAVNNQCZEXVMURYEFIKFKIUUJHBECGDUXYGIXTJDSREHPVGDUIMCLREFEIPBNCTSGWZKUQZNRRPBZDVWFXQORXAWDAGQBDFUMISTEHZOLHZBQYOCRSRBZALOLSZADVHMAGJAOWQVCFMXL");
    msg.text.assign("VFVEWVGLIMKGAHRXKHJWEXUMDGURONEADNXAKJRTVNPSWCSTOIEMABQLXYXQTBCZRNSTFJAZWPYELLESCZOFHGUIIBUFUPDPHRUCLDICAXNOECWJRGZUGWOPBRAPCWYLSJWQMJKOMNZKSFWVYQQFTLTLDZNLMBVVBHPKRYJFIRUSZOGMTQDGYYOKDLNBCHZFYKFBMUZVSEVIHMSICPSB");

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
    msg.setTimeStamp(0.311027829887);
    msg.setSource(60216U);
    msg.setSourceEntity(192U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("UZAWSKIZUYJFRGDRNJPCQIDCMFZLSMQGBENVCECGYTAEBUQLEXKUIEJCHVTHHPNPTQYWVZVQKIOYKOOUGFLOBMPPEWYGNMYTRUPICHZALERANLNIXSQYIAXPQRLLGPTKKXARMKPXR");
    msg.text.assign("EJGKFXCKRMAGRBYEXQYDZIUNFPSNXHTBKZXMUVCUOAZBHVQDSWORASVXGCRDYWKPVVYFNUGPRFOWBJLNWLBOIJOMIEIUWPQDEJALHDJTFODFQQZNPUAWDZGIVQQTLTLTAX");

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
    msg.setTimeStamp(0.702267895629);
    msg.setSource(5419U);
    msg.setSourceEntity(48U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("YKHOCCEOWANJWULOHYDBYBQJUBUIAPNRDYLZXSPESSRUIJBGSXQFJXZJUJKFHWDQMKRSMGHEJXRCBKZOQGRVLSMIWKSXF");
    msg.htime = 0.825653554542;
    msg.lat = 0.812682847822;
    msg.lon = 0.473153250731;
    const char tmp_msg_0[] = {-2, -15, -92, -115, -98, -52, -115, -56, -43, 33, 86, -22, -9, 3, -31, -69, -3, 29, -5, 27, -97, 93, -78, -55, -115, 58, -96, -6};
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
    msg.setTimeStamp(0.116666424229);
    msg.setSource(13097U);
    msg.setSourceEntity(104U);
    msg.setDestination(38261U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("XHTGMAQOKSVEINGIIBIEHWQENXOGPRIDPZNJGIBMSSJKLYNTGLRLCJHUKOBZWCPMEMFKSSGYABHCCYKHULPZNFWAKAXXODHLCTMBXGMCVYIKKBNVFPWUDMPJWTFXYLGDWFERZACQRVINRATQQPZIYTKFURUHEWCOOFNRFTDQJQ");
    msg.htime = 0.360241912922;
    msg.lat = 0.982381337292;
    msg.lon = 0.725465358359;
    const char tmp_msg_0[] = {-118, -63, -88, -33, 107, -9, -49, -94, -109, -91, 114, 83, -84, 58, -114, 23, 75, -125, -98, 21, 27, 19, 121, -117, 77, -105, 32, 75, 91, -108, -24, -66, 40, 112, 52, -72, -5, 27, 67, -58, -112, -101, 11, 77, 51, 71, 61, -51, -31, -24, 16, -42, -49, 25, 112, 45, 12, -39, -51, -58, -83, -22, 84, 116, -40, 35, 66, -117, -27, -123, -41, -90, 12, 20, 57, -61, 87, 106, -116, -125, 102, 87, 34, -31, 8, 83, -118, 22, 39, -94, 103, 69, -10, -64, 25, 45, -39, -42, 70, 70, 93, 22, 13, 72, 87, 79, 120, -58, -86, -24, -49, -88, 81, 56, 125, -33, 22, -23, -17, 37, -118, -67, 18, 61, -30, 2, 62, 16, -2, 18, -118, 102, -121, 29, 63, -8, 75, 37, -35, -32, -1, -47, 107, -124, -64, 73, 126, -77, -118, -14, 79, -6, -128, 105, -110, 14, -60, -53, -95, 42, -111, 109, -40, 79, -73, 39, 121, 2, 51, 124, 87, -127, -74, -4, -81, 69, 75, -51, -121, -113, -79, 114, 22, 53, -45, -8, -36, -119, 86, 45, -87, 30, 51, -99, 82, -91, 41, 43, -25, 18, -85, -126, -100, 21, -51, -123, -10, 123, 17, -36, -87, -100, -17, -21, -21, 100, -107, -50, -51, 34, 42, -69, -117, 63, 17, 46, 26, -77, 55, 43, 44, 103, -127, -22, -8, -116, -11, 5, -17, -15, 26, -30, -115, -64, -35, -91, -100, -89};
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
    msg.setTimeStamp(0.542690035853);
    msg.setSource(48249U);
    msg.setSourceEntity(247U);
    msg.setDestination(51851U);
    msg.setDestinationEntity(70U);
    msg.origin.assign("EAKIPVLGIWBQGSUIUXISURCDYWWWAOYLKTYLSECKRSDJPODWGHYVMJRXHZJASUMNJJAQXBFPYACXPHBWXD");
    msg.htime = 0.35439762682;
    msg.lat = 0.898016990962;
    msg.lon = 0.362192997045;
    const char tmp_msg_0[] = {-68, -70, -122, -51, 47, -78, 29, -46, -78, -108, 120, -115, 94, 94, -45, 17, 29, 30, 15, -68, -30, 119, 99, 117, -122, 102, -67, -34, 31, 83, -89, -61, 14, 122, 62, 11, -114, 42, -25, -43, -53, -96, 104, 113, 37, -76, -14, -112, -95, -22, 58, 64, 126, 80, -116, 20, 118, 62, 8, -32, -41, 16, -35, -6, 22, 61, 125, -59, -99, 116, -10, 58, 31, -25, 63, -102, 63, 1, -101, -32, -11, 13, 88, 105, -90, -110, 105, 96, -62, 73, 46, 55, 58, -3, 41, 49, 101, 85, -76, -107, -95, 99, 32, 9, 70, -88, -122, 23, 91, -125, -128, 25, -46, -72, 118, -3, -96, 40, 80, -88, 122, -22, -27, -115, -74, -55, -95, 80, 106, -101, -76, -27, -55, 47, 57, -23, 114, -107, -59, -14, -102, 93, -28, 84, -60, 4, 49, -52, 122, 58, 47, -23, 76, 48, -5, 92, 102, 102, -109, 53, 108, 62, -40, 63, -45, 79, 30, -42, 81, 117, -29, -56, -36, 118, 35, -62, 102, 85, -57, -121, 30, 14, 126, 12, -102, 32, 6, -110, -47, 89, -31, -127, -40, -29, -101, 18, 20, 34, 70, 25, -20, -35, -6, 2, 1, -4, -87, -128, 15, 119, -12, -121, -109, 93, -120, -117, 27, -91, 64, -68};
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
    msg.setTimeStamp(0.142415626902);
    msg.setSource(58923U);
    msg.setSourceEntity(65U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(162U);
    msg.req_id = 48436U;
    msg.ttl = 25513U;
    msg.destination.assign("OIGJQTSVRWNYKDLWJXSUZXHLBNMIOFHPRKPJOYVJJMGKYUGNRUSKMZDATNRFHWZOHDQLDFSQUZOLJFXCCITTCPMTQMPSZILMDTUFDZUYVGBKIFHYZAXLZPIXAZEBHVCKJOTQUNXLFEGLUQOCJWEKVMBMSGKCANVFCFQFEUROQDMCASQDWXWTHWVPVRDLPYCGOTVQCPEKGNUNWYOEGXHZYDTAEBWABMJBGBANJEVRIYS");
    const char tmp_msg_0[] = {-110, -35, 104, -31, 125, 64, -93, 115, -98, -30, -41, -14, -118, 18, 98, -84, 105, 40, -106, 88, -117, -128, -9, 89, -18, -68, -31, 35, 117, 81, 45, 120, 62, 26, -29, -101, -99, -57, 61, -117, -63, -76, 48, 101, 66, -85, -117, -52, 89, -20, 51, 104, -17, 74, 99, 24, -24, -90, 124, -62, 122, 83, -57, 58, 56, -35, 68, 106, -85, 124, 13, -86, -75, -29, -33, -95, -2, 11, -38, -1, -72, -112, 84, -117, -10, -88, 25, 101, -10, -107, 32, -97, 21, 27, -10, -71, -59, 88, -7, 118, -34, -25, -47, 32, 113, -101, -34, -51, 3, -51, 86, 96, -89, 97, -85, 78, -10, -14, 54, -115, 69, -69, -94, -15, -96, 18, -91, -25, -28, 105, 103, 86, -14, 27, -4, 97, 30, 76, -91, 17, -114, -107, 78, -124, 89, -111, 73, -105, 119, 65, 13, -73, 64, -24, 51, -85, -128, -46, -66, 80, -19, -122, 32, 87, 106};
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
    msg.setTimeStamp(0.42191403335);
    msg.setSource(28899U);
    msg.setSourceEntity(133U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(97U);
    msg.req_id = 23013U;
    msg.ttl = 30113U;
    msg.destination.assign("TMXXTEGKMQUWUYPVTSDCWMZKXNLYZRNKKWNSBDKMAGRSIRSNHWAWCMSETTNEIAXHBSYEFLVMUYOVFZKGZYDHUOQDDRUKAVQPLTNCYTGKCRTKOOLQOWBOAECZUZUJXWRJKLJAJJLYEFPBBZNQNBHRSRTWEMQZHJYUHIFQGLGNIVJVIQPPAXQLZGDCHATRQZXFGAFLWAEWHVIISHISBDUJPEGVYVNCCFCSYBLM");
    const char tmp_msg_0[] = {-119, 68, 100, 80, -73, -52, 75, -87, -53, 18, 40, -7, 123, -4, -17, -111, 3, -103, 77, 6, 49, 79, 43, -49, 18, -61, -112, 63, 105, 46, -25, -104, -89, 117, -124, -28, -9, -13, -122, -15, -2, -89, -87, 113, 30, -35, -119, 44, 93, 65, -92, -82, -30, 4, -116, -121, 56, -33, -125, 6, 68, 35, 72, 108, -15, -19, -103, -53, -106, 55, 112, -13, 7, 115, 96, -92, 7, -82, -10, -118, 47, -45, -128, 94, -125, -45, 44, 63, 66, 93, -2, -96, -116, 53, 108, -63, 1, -88, 45, -77, 86, 5, -22, 52, -119, 76, -117, 31, -55, -5, 29, 117, -118, 123, 71, 111, 2, 99, -99, -59, 89, 100, 119, -112, -86, -17, -96, 98, -124, -79, -50, 106, 18, 92, 5, 114, 12, 19, 111, 4, -16, -78, 125, 103, -11, 0, -112, 90, -94, -74, 68, 24, -40, -36, -43, -45, 10, 14, -34, -84, -29, 118, -13, -39, 31, -74, 35, 9, -29, 60, -96, 11, -91, -122, 6, 110, 55, -70, 73, 77, -8, 36, 123, 53, -14, 30, 51, -66, 46, -103, -15, -112, 63, -73, -114, 92, 77, -23, -74, -88, -13, -99, -100, 47, 10, -34, 83, 55, 42, 116, -59, 90, -42, -125, -64, -67, -122, 0, 88, -56, -80, 111, -42, 123, 30, 52, 13, -65, -117, -60, -6, -67, 19, 114, 92, -50, -5, 46, -13, -89, -29, -110, 19, 59, 52, -91, -2, 66, -44, 95, -35};
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
    msg.setTimeStamp(0.237421173903);
    msg.setSource(39962U);
    msg.setSourceEntity(94U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(100U);
    msg.req_id = 35705U;
    msg.ttl = 39595U;
    msg.destination.assign("DRVSUTZQALBMHEEUSPVLYQMIGLREPWYYZLKPRGXZFZUKWXQPIIXRLNKICDNWOFHDWUDRLTNVVIUWJFUEBLJRSYCKUHXYCEFDYODNOSSGUMGMNBANJNRKMMUMFJAZOPBSHDACKEVQZVASIEKBTBKJJFJNPMATHXXBIDTEGTHQJHTOAHYOVKMPCYVBFGJTTLRZCWSBNNIOWQOXUYFXFXPCSOJMZQHVZC");
    const char tmp_msg_0[] = {-7, -30, -71, -65, -96, 91, 59, -6, 74, 62, 13, 60, 109, -120, -45, -28, 42, 11, -115, 1, -41, 126, 61, -84, 74, -113, -88, 19, -120, 17, -122, 74, -118, -109, 50, -15, -72, -80, -48, 73, -57, -114, -11, -56, -68, 83, 19, 48, 109, 24, -88, 61, -27, 12, -93, -111, -65, -25, 79, 17, -23, -109, -83, -36, 96, -82, -66, 33, 49, 4, -86, 115, 27, -36, -33, 55, -25, 47, 23, 51, 64, -61, 70, -103, -98, 98, 43, -1, -85, 9, -121, 72, -118, -57, 76, -62, 78, -90, -67, 100, 90, -88, 101, 105, 29, 26, -48, -61, 29, -84, -23, 4, 38, 72, -63, 112, 3, -56, 117, 92, 5, -24, -48, -65, 92, -49, 115, -113, -46, 119, 36, -16, -2, 92, 53, -37, -109, 69, -92, 23, 119, 6, 111, 101, 89, -119, -105, 51, -84, -30, 109, 19, 108, -70, 28, 60, -15, -69, 40, 105, -9, -94, -112, -91, -35, 60, 10, -98, 49, 2, 119, -124, -3, -115, -9, -66, 100, 91, 59, -38, -128, 49, -90, -124, 27, 60, -70, 56, -99, 96, -41, -58, -52, -21, -22, 39, -120, -27, 125, -109, -26, -54, -6, 125, -75, 114, 60};
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
    msg.setTimeStamp(0.599366790653);
    msg.setSource(36737U);
    msg.setSourceEntity(60U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(162U);
    msg.req_id = 226U;
    msg.status = 212U;
    msg.text.assign("LQIINRPTIAMSUMHELWAIXLIWJGJBVDHDOJQMKPOWFOMMADYRNZZEIGDDSPEFGPJBVOJOLPMRMQREDOKUAHWACMPUFHIKDCJSFTEXYNTJKMVDLBQALUYGNFAHWPBYB");

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
    msg.setTimeStamp(0.822866128227);
    msg.setSource(34429U);
    msg.setSourceEntity(95U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(247U);
    msg.req_id = 25979U;
    msg.status = 236U;
    msg.text.assign("QXCYLMBEMBXXFOTBDECMFRUVKWPMGZJBHZHVXTXESXMFOALYDCQFZHEHDOMKUNBSRKVVEIGAOBACVIUDCHQSJKXJJLPTAOSJBRNKSHJGNEWJKHUUWRYEIKJKTTQINQMUPWONW");

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
    msg.setTimeStamp(0.585891705831);
    msg.setSource(20694U);
    msg.setSourceEntity(198U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(233U);
    msg.req_id = 64502U;
    msg.status = 111U;
    msg.text.assign("OYMGVQNOWLENHJAAVMLXKZQJKWLJDTBXFZSRTOJDHNZUNNJRDTURICONDKLVUCZUABRDIEQNLVRISQMSCDCZAKLPGAZLPAKXJMEIUYTIGWXEEMKMODIONUGMFJOYFIBMYGNWPYCBPHZJZTEKPTFPOGDXFQIVZVCFGHXVQGTIKQRKUWZCAUBWROBMELWFRHIPSMHC");

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
    msg.setTimeStamp(0.42469551315);
    msg.setSource(33704U);
    msg.setSourceEntity(164U);
    msg.setDestination(52873U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("WQZBADBSCHTGEFRDAKPTGSIFPMZKDOJYHWNRUIADKQERHLUHPKECBGYAWCONMUKFQFDVUJPBXGAPHSFRIXENHYMKWWDRZIUBIT");
    msg.links = 1612924560U;

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
    msg.setTimeStamp(0.852140999299);
    msg.setSource(55538U);
    msg.setSourceEntity(139U);
    msg.setDestination(59094U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("CFTYAMXFWOQXIKQUCQRCLFQNRGSKDGZSMEJKOYOWTAELWGBYICIMIDBHWBKRYDVREJKLZBWBOGNVFTTDVYIKKNAVRSZBB");
    msg.links = 336151436U;

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
    msg.setTimeStamp(0.38169029363);
    msg.setSource(32220U);
    msg.setSourceEntity(123U);
    msg.setDestination(60533U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("RPYKWAXBYMSAJXFMFJMFKOBNTMXMGLOCKFZOMNTZSSOOIBVWCITZAVKKWMNYCNLVHJQFKWAIOSDXZLCYPNWHWNJURT");
    msg.links = 50968679U;

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
    msg.setTimeStamp(0.396016821074);
    msg.setSource(29582U);
    msg.setSourceEntity(74U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(101U);
    msg.groupname.assign("OZAZIKXPLFZXPYITDUNNLBZUVBWZXUYUTGQTQMNYBSDNSPOFZJUENBOIAZIIYAWCLEDPSZFGPFOGLMEQWTVHWVLLOJMVXCMQKGYEHHGBAVYRVJFOHWFKSGAFVDEPFILTSDHDTRZICBRUROCRJWWETTMQSMJVKRYARGFLWUIQCLAAPQCUGPPHKKQCMDJXAOMCBKIHDNVJUEB");
    msg.action = 218U;
    msg.grouplist.assign("SIVPCLOKQWZZPYSRCTRUBHBBQDFTAPYYACYXHFRVWDIMUKSMNVEUSJSPSXTAEQLSFERYKJENLNUQKCVGVUWTAQDBDIAHFDLZHREBEXDRODSHKEDUGJLGGKCPGFXNWQLBHIPRCTVNNLAZJRLPZJFNZNDSXTAAKIWMVHZGKPXQOIQJPODBOETLUXJOIBVNAQMCIWIMWXOTHXGVJYKWVWGUKLYZOTSCCFJPMRU");

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
    msg.setTimeStamp(0.854464767101);
    msg.setSource(13546U);
    msg.setSourceEntity(157U);
    msg.setDestination(32450U);
    msg.setDestinationEntity(79U);
    msg.groupname.assign("JJGMGEPFSOELAPCVVALPZWEPXFSSSHACVUDNFAGSBTUPMHUGTILDAPEPDIUIKRGDZHXNLNTPMCZNBTZSMAQWENKHQMSIRRRTYBYKGFVJLPCECAJHTDQXEZKOBRXODVKVICXXZHFOZUJRFYQSIGWHBBBJOCKGMUMEXFQRWNRTLIEUDPNKBVZYFJDYLFIDNOYBRWJVWAWEKGQUIFMXGCDWWWMSQYZYNHBZOAVSLUKOCIJMXQQTJNO");
    msg.action = 123U;
    msg.grouplist.assign("ROUFYCDIJWNBLZNNYEHTPQALBWRWKJPRYSSUGLEOQXXPXYOERRQXJRBMFFXOAMFQXRTBCDLOKUJBSQRNAWJJOGCMGNYVTDFVDCHLMGCFQCDMXYZSMCOAGLVVDZGZQWZUGHEWTUJHIEOSUFMSFXXZVAEGTPKCAKICMFGNSDPSYJIIKQTWTREZWANJAWYDNHPGBTUMMYOHEVLUSFQPEKAIO");

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
    msg.setTimeStamp(0.135504878921);
    msg.setSource(7723U);
    msg.setSourceEntity(157U);
    msg.setDestination(13135U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("UOCEIRSISWLEFQILKAEPRLVUZQGKZDNYVIXHKOMYSQEXPFVOIRBSEZQZSXYBEFKQTGGKLHVLTJAXLUKVDNGALIHYONNBWGGKUTJIFMTCKYDSJTPWWDTCLFOHFJJTWHANBUAXGRNHUIVAUMXPXQKWAGZRUJNUYGCMOHYDRWPQTCIWNAOZBZBCVTUSPNPYMQ");
    msg.action = 49U;
    msg.grouplist.assign("KOMZFLTYHFHNQFNEUWGCBGRQJRDVQPULQIDHSYCNYNNJERFFYEHKXDBSBWUKXRIOMLKJXZPQVSVAEPMJSZGJRTIYQPIFZVGRSPWOYLDNKBAVXZAOXZXVGBWYKQTXAVZTPHLVTAIVOIACQJKZYCULK");

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
    msg.setTimeStamp(0.483213463972);
    msg.setSource(5569U);
    msg.setSourceEntity(216U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(13U);
    msg.id = 0U;
    msg.range = 0.646875621117;

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
    msg.setTimeStamp(0.617381471062);
    msg.setSource(28439U);
    msg.setSourceEntity(158U);
    msg.setDestination(18024U);
    msg.setDestinationEntity(148U);
    msg.id = 113U;
    msg.range = 0.413608725457;

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
    msg.setTimeStamp(0.72404183135);
    msg.setSource(56343U);
    msg.setSourceEntity(193U);
    msg.setDestination(1560U);
    msg.setDestinationEntity(130U);
    msg.id = 253U;
    msg.range = 0.828908496218;

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
    msg.setTimeStamp(0.430097347352);
    msg.setSource(48161U);
    msg.setSourceEntity(62U);
    msg.setDestination(7151U);
    msg.setDestinationEntity(192U);
    msg.tx = 19U;
    msg.channel = 245U;
    msg.timer = 41777U;

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
    msg.setTimeStamp(0.103627545828);
    msg.setSource(6822U);
    msg.setSourceEntity(69U);
    msg.setDestination(6754U);
    msg.setDestinationEntity(130U);
    msg.tx = 159U;
    msg.channel = 190U;
    msg.timer = 48529U;

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
    msg.setTimeStamp(0.315359286584);
    msg.setSource(41012U);
    msg.setSourceEntity(119U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(115U);
    msg.tx = 198U;
    msg.channel = 149U;
    msg.timer = 25684U;

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
    msg.setTimeStamp(0.581197717036);
    msg.setSource(28935U);
    msg.setSourceEntity(128U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(113U);
    msg.beacon.assign("DBWPWQZTUPBZXYRMYSGOXYQGNODURFCGJKTSBDFNGRZYZQVYHHZBDNHGNOQSYXPHCFWGMWXWALVORBUBUJIUEYKSJDFAIHEAOZRMJSXFBNKVKMIAFCTEXWDPAJSPOWUHJLORNEILRZTWQVPKICPPIUEAEMVVGEMGLNIRZGFQXEZETMWLZILCLJQGBKHXUHTCUYIVHXDATPJVFUL");
    msg.lat = 0.223343534343;
    msg.lon = 0.940343816201;
    msg.depth = 0.111437088545;
    msg.query_channel = 190U;
    msg.reply_channel = 50U;
    msg.transponder_delay = 193U;

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
    msg.setTimeStamp(0.650183708976);
    msg.setSource(41175U);
    msg.setSourceEntity(141U);
    msg.setDestination(33216U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("GDGKXUSRTOILVMNEHFBNIJLHDTNKRCAMNFCGDHZFZUYGCBEIWMDUPUUNYRTUCAVBCVJAQTVTRXCSWPBMQIKLAZJPNSRUPEKFWQGQMBTPBYEYEGLPJLEKWLHFPIJQVXNAQDSXRIUROWANDKYXTCTCLYOJASEGYMWODMAKHDNGJSHXK");
    msg.lat = 0.180045703027;
    msg.lon = 0.0589170432985;
    msg.depth = 0.576135922885;
    msg.query_channel = 12U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 40U;

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
    msg.setTimeStamp(0.422666429369);
    msg.setSource(33224U);
    msg.setSourceEntity(100U);
    msg.setDestination(33610U);
    msg.setDestinationEntity(221U);
    msg.beacon.assign("AOXAHKWUVMQLXSIRPPMBTQTUOJDMPHTNCSWZSDRZBSIXKQVYCDBOYZGCUBHFFEHUFOSYALGWXNAVJGHVAJMWMBKKCKNWONRNCPWVKXOPLWTTENSZG");
    msg.lat = 0.723137416796;
    msg.lon = 0.700546731068;
    msg.depth = 0.776506904313;
    msg.query_channel = 245U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 54U;

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
    msg.setTimeStamp(0.189695804731);
    msg.setSource(60821U);
    msg.setSourceEntity(127U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(146U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.281208150412);
    msg.setSource(7756U);
    msg.setSourceEntity(226U);
    msg.setDestination(38326U);
    msg.setDestinationEntity(103U);
    msg.op = 26U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UHTGRQQFHAEGQSURVMKNCYWVEISIONNDCPBJEXPBMNPODLULNXUNAGAFPDFWPKLLSJZLXVNLWYZFFUDPCPMXKYUGGLXZOEOJHIZCJJDMLJHKDFUWJPXIMDKKQPRCIHGCFOWWORETTAGEOKJEZYRIHIGAQSWEVSXHBVHRCQTSQAUOXNEUBIMEQFRDDVVQUXSFYAMBZBZCWTBABKZSRJBSDGYVH");
    tmp_msg_0.lat = 0.256512711068;
    tmp_msg_0.lon = 0.652443723439;
    tmp_msg_0.depth = 0.598032691856;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 141U;
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
    msg.setTimeStamp(0.01816317362);
    msg.setSource(57969U);
    msg.setSourceEntity(44U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(203U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.94261883941);
    msg.setSource(59171U);
    msg.setSourceEntity(138U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(83U);
    msg.address = 137U;

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
    msg.setTimeStamp(0.133819949575);
    msg.setSource(46010U);
    msg.setSourceEntity(72U);
    msg.setDestination(19935U);
    msg.setDestinationEntity(223U);
    msg.address = 27U;

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
    msg.setTimeStamp(0.104870963855);
    msg.setSource(58133U);
    msg.setSourceEntity(66U);
    msg.setDestination(1912U);
    msg.setDestinationEntity(152U);
    msg.address = 0U;

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
    msg.setTimeStamp(0.0706028509977);
    msg.setSource(28085U);
    msg.setSourceEntity(90U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(252U);
    msg.address = 77U;
    msg.status = 89U;
    msg.range = 0.878167212364;

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
    msg.setTimeStamp(0.630125825691);
    msg.setSource(11031U);
    msg.setSourceEntity(241U);
    msg.setDestination(4107U);
    msg.setDestinationEntity(115U);
    msg.address = 83U;
    msg.status = 45U;
    msg.range = 0.747487707752;

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
    msg.setTimeStamp(0.914715133839);
    msg.setSource(35918U);
    msg.setSourceEntity(231U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(219U);
    msg.address = 203U;
    msg.status = 75U;
    msg.range = 0.594634729745;

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
    msg.setTimeStamp(0.568720168443);
    msg.setSource(12920U);
    msg.setSourceEntity(137U);
    msg.setDestination(44662U);
    msg.setDestinationEntity(3U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0130151739287;
    tmp_msg_0.lon = 0.762042399463;
    tmp_msg_0.alt = 0.195147290288;
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
    msg.setTimeStamp(0.91986677994);
    msg.setSource(13060U);
    msg.setSourceEntity(103U);
    msg.setDestination(56122U);
    msg.setDestinationEntity(158U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.384618991121;
    tmp_tmp_msg_0_0.z_units = 136U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 22663U;
    tmp_msg_0.custom.assign("VJYUPDOTXHYOADOLCUNXBSBJFSMMKFRWVLGIZEFCMMQWYHUCPIIIOTRWFZZQMJWWUFQXPZBFVJJKTIGJJDERNWORDNATAVCORQCQMIKW");
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
    msg.setTimeStamp(0.848380647673);
    msg.setSource(17447U);
    msg.setSourceEntity(178U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(174U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("DZTOJCNXULGOOJKILQUQTQMJ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("KXJSBTVPLYTFRFLYBOXO");
    tmp_tmp_msg_0_0.predicate.assign("QZZGNDYQISNEZCTFXSJUJNYOWPAKHZPITMBVSEWFXCSHRKJYQXLQOXHAMGZGPQRZWKPFIFOCPIBMNORUGOPVUOOOQQPEPMWLWBAIFDIBHUECHGVSJXVNMLBMKEFWTNTEDWXGU");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.184812370223);
    msg.setSource(57327U);
    msg.setSourceEntity(178U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(90U);
    msg.enable = 39U;

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
    msg.setTimeStamp(0.881333795411);
    msg.setSource(45282U);
    msg.setSourceEntity(205U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(246U);
    msg.enable = 37U;

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
    msg.setTimeStamp(0.085004710783);
    msg.setSource(1905U);
    msg.setSourceEntity(20U);
    msg.setDestination(51364U);
    msg.setDestinationEntity(64U);
    msg.enable = 3U;

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
    msg.setTimeStamp(0.463248974601);
    msg.setSource(41599U);
    msg.setSourceEntity(16U);
    msg.setDestination(45468U);
    msg.setDestinationEntity(170U);
    msg.summary = 120U;
    msg.level = 138U;

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
    msg.setTimeStamp(0.259388621684);
    msg.setSource(37425U);
    msg.setSourceEntity(103U);
    msg.setDestination(9546U);
    msg.setDestinationEntity(148U);
    msg.summary = 153U;
    msg.level = 11U;

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
    msg.setTimeStamp(0.568254917054);
    msg.setSource(44191U);
    msg.setSourceEntity(41U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(74U);
    msg.summary = 37U;
    msg.level = 21U;

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
    msg.setTimeStamp(0.0156148756166);
    msg.setSource(11815U);
    msg.setSourceEntity(93U);
    msg.setDestination(8982U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.329009551705);
    msg.setSource(23618U);
    msg.setSourceEntity(105U);
    msg.setDestination(7578U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.930004433401);
    msg.setSource(17207U);
    msg.setSourceEntity(119U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.6181703445);
    msg.setSource(42407U);
    msg.setSourceEntity(152U);
    msg.setDestination(43445U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.87072852423);
    msg.setSource(60244U);
    msg.setSourceEntity(87U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.606769807414);
    msg.setSource(51887U);
    msg.setSourceEntity(66U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.744033661374);
    msg.setSource(59061U);
    msg.setSourceEntity(84U);
    msg.setDestination(48061U);
    msg.setDestinationEntity(90U);
    msg.op = 143U;
    msg.system.assign("VMNRGNPAGNISCBLCTTESZWMVXYTXLKPYFASCKDUVRXMVUQZGJGAVZOJGFXWKJDAJQTCJEUNCYIWOZQMPWWWISCMFCWZJZMHHBMDKUBLPUOYXGESITPJPBXZOMUUFDNSLTVEDTBUAVREKGRHGHMHWGQHRSTHXIMALOLIAFDFPATNLONYXZCBWFIPFQXQKIBLRJBYJRTOHINNFEZPECVQSKDLDHAZNQQREOSVRQRYCXOJHOUYKAVKEK");
    msg.range = 0.178104330121;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 121U;
    tmp_msg_0.x = 0.236699020955;
    tmp_msg_0.y = 0.437363062108;
    tmp_msg_0.z = 0.95393284413;
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
    msg.setTimeStamp(0.399172990483);
    msg.setSource(1405U);
    msg.setSourceEntity(254U);
    msg.setDestination(372U);
    msg.setDestinationEntity(118U);
    msg.op = 128U;
    msg.system.assign("PCLMWLQNUDNQOEXHACYSEJHAHPDHLRZEQVITTWWKBNAMQVHMRVJHTILUGCKEFLFOKFVXICXRENFLTBSBZKDXVZGWUBGGRVXDICOOJIZGPLTJNSSLW");
    msg.range = 0.245450059184;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RJKEQHXNXEZAECBGNRGBJOVSTTNRCZIBOAMQJLBJDXANVZAKLRGXWJAYFOPSHUKFNRMPGFLSDTCFSLEHKSYIFLDVWWZDPCMQFIBCCLYHAYSRNIVDLXMAUESPQHZXWJSIZFOZQEUJYHOYOMWTMUPNQOAGVUXLTQUFTTTKMP");
    tmp_msg_0.description.assign("OPUCUTLRVQRJMRKBVFMFDETESRUXGDPFZXIKJTTGLMNVMPOZGSTUET");
    tmp_msg_0.vnamespace.assign("XYZLXIREXXLSQATQYFKTBTGZWRLGAUTMOZECMLPUNWCWBZOYKXSAHENHMGNMHFFCJDORRZFOBGCSQSQGUCMHIWRZPCVXWJYHGACMLNPHUETWETKQDJCQFRAVBZPWUET");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KCUDFZKQGKEAZWJDTQCZNTRDISPEOICSBXBFTOONJYAONWYPUOBPJVHPPPKDCYCWEQLJXHILVFZVTHYZOJBTRAHSNMPSJIGHJZOGKHDXXFRQKXX");
    tmp_tmp_msg_0_0.value.assign("BDGQOUARPSJBRYLIDRXCOVORLZHYJIRYIJYLUINKWPLGLSCAUTDGFAMDXITPPQVMZBGCVKPIVGUDTEPLZHSDNSUCPBIXXKMUKYSWLTOHWTRZNUDZMOTFXWQKBYURVIMHAWOFSEZQFKPBBEEDLGARZVAKFCFJCHJYTQBTXNQTIGAZPMODEHASSJDECRJVUNLEOOEBUJZHNCPAKXTEWJYKMFFMRGXFSWOHQQHWIXVSYGMLQNJMW");
    tmp_tmp_msg_0_0.type = 140U;
    tmp_tmp_msg_0_0.access = 50U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZAEHUOJXEJAJKIKQBMPXTBRLVZMFHJJVENPSISZPVBYKRXJFPRSGFORBLTAJZKXBOHCHZEKQYRFOLSGLGVDFRYEWYOIDGLZNGUKEWDAAQTXXPMPLBEFDSPCGZE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JULNCSUMBVEHIVMJYLDITXPFJZGABXOWCKKAYONRCKHDSQZPDLNKUQMIMXFUJNSADQVHDFRL");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57236U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.51068896483;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.976052150016;
    tmp_tmp_tmp_msg_0_1_0.z = 0.925766499449;
    tmp_tmp_tmp_msg_0_1_0.z_units = 35U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.502692067868;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.243637807841;
    tmp_tmp_tmp_msg_0_1_0.duration = 35911U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.197182074591;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 245U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.42051526475;
    tmp_tmp_tmp_msg_0_1_0.direction = 145U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SZBTJSSMCNALZOLJITRRBNMGLQYVOXTQMTQLBSAVLPGZFBTIFSZCJJIYHMWMFCDEVEOKISZATRJPWWBGEDGATACUPKCXGHNGNOFXOOUDDZKNIWSXVRWMXAGLWEBNCUBOHRZRLMQEFFPBFYWERQDPVGOQDLKQXVRFYVLJRFIPUHEHVUCJDHKJMEFCYQTPYNYDTWBDUKZVTVYCJSKXZHLUEBKUYUAOKXPQIPJN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LFXJFHZCDQNAOROTFFZWERTMTCDSTNKNVAIUPOQJSXKDWRTYSAPCSPPKWKXEXVRDAFGAPJYHMDDIUELTVSQPBTYINNLWQCTMUGUXRYEUQMIGMFBKOZDEPGPYGXKJGBHNLJKLAOUDUEBNRPVNWHJHYXMZKNUBWDJJICVZJNVRMCOIGQBSAWHVEWBXHKZ");
    tmp_tmp_msg_0_2.dest_man.assign("GQFETOXOXCBCMEZJJQPUPHPICLGHEYWEMIHOSZJKNVCGXOVKXSNKILEPLRGRVTMDDUUMPBWYERBACCVABQDDODWLVIVBSAVHAYAFGZUCTZZITZOTPLVUXQOBSERNXKUDMJINTWSCMYFTPRNSZHSJBFKXGSMBCGSGAMWDWHRLOSNAYIOK");
    tmp_tmp_msg_0_2.conditions.assign("PNAWDHDTNCGOBTPXVBZLEKRHHAPARHQWVCLXFQRJKXGWDEDGBCKLTSFHPVJOZRCYNFJNRLLPDUZMWLKQQSTFPAUIAKEQFDIUINHDNEJSWLZTCFDKUBRONLZWXTQIYHMXUUIEQCYVUHOGKSWJSJESGEAIQNDKUOAXMMCYVIYXBVWF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredSpeed tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.144779864534;
    tmp_tmp_msg_0_3.speed_units = 1U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.484603892126);
    msg.setSource(16833U);
    msg.setSourceEntity(33U);
    msg.setDestination(22160U);
    msg.setDestinationEntity(113U);
    msg.op = 103U;
    msg.system.assign("WREZNBPMJAZQCDBMGQTVCUDCHXTPGKOTOEFKOMNQYAZOKKTQSLJGBXCUGHNKPMBLOEABIIYRXDPQZTPLBWIVAROKFAYNUJZQNZRJUAIJUMYGHZVNTEVSXYAYHROPSDYJVAKGNFMHSLWFLDXHZOBNPVSOCCFUXGUFHWQWVTX");
    msg.range = 0.877238515391;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("TZNTDZQUXXCQKNGLEZNAHNCFSILOQLUFYFNGQEHHXJGZXOYJNZRQWKDIEEGBKAFEDPRPODKYTVMYHXOWFASFYHGNLOPHGDAUISMJFRZLYDKBMEIEYIGVTIUZURLIRRUTMHMJWHPKKGQUAJBSQOYYWKPWSLLECVXVSVRVWNOSIITZFHJRSOGTBNJJEXLSXHCAPMDBURYPFSCAMPVFOPBDXKVCDUBWTTJBCABBZVJRMOC");
    tmp_msg_0.lat = 0.480359162902;
    tmp_msg_0.lon = 0.702854911131;
    tmp_msg_0.z = 0.942059299598;
    tmp_msg_0.z_units = 217U;
    tmp_msg_0.cog = 0.538618109158;
    tmp_msg_0.sog = 0.154324529337;
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
    msg.setTimeStamp(0.97910146304);
    msg.setSource(59669U);
    msg.setSourceEntity(47U);
    msg.setDestination(8828U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.258539784819);
    msg.setSource(57115U);
    msg.setSourceEntity(104U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.824340787564);
    msg.setSource(29771U);
    msg.setSourceEntity(68U);
    msg.setDestination(11933U);
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
    msg.setTimeStamp(0.537437369309);
    msg.setSource(54278U);
    msg.setSourceEntity(240U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(166U);
    msg.list.assign("FHTYAMVQJWMJYQUHXIWNIJWYFDCTSGPWQUNSYRTQREOOYNKPNSFAJXR");

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
    msg.setTimeStamp(0.855681810443);
    msg.setSource(44266U);
    msg.setSourceEntity(24U);
    msg.setDestination(52362U);
    msg.setDestinationEntity(136U);
    msg.list.assign("YSXYLXKDPHHEGQDKTORPQUMUSEIOYLSRKZVAAOMXPOPLPHKONLGCNUHRLODYYZSYQAZNWMACGUFHXITCTBBTGWIYXTDQVNZMKXRNSSJIHERKQWWUFUDAVNUWNATBBLLCWVTTNQZIWAKARRHDNFGAFPLMWMEGVGDEHZXJVPFGOJDHGREBZFYEOEBXKSRIMVNKQCIITCCYCRPWXBBHCUMMJ");

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
    msg.setTimeStamp(0.31754824881);
    msg.setSource(45931U);
    msg.setSourceEntity(53U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(223U);
    msg.list.assign("RBTSQQLQRRMUHNLZOQDVYAHKLYXQKUMKVKWJRNLOWWYSHOTSVUUFXZGKVVDJKBOIVNGUOCYVHSDNDAHOTVETMWPOYECRDQYEECMZBEDGGCULJGAKFUIISJOYADYNJLKZHPXOFQHEIBJFWTNAMZZMPNSGHLNDGCRTGWFLCNPTAQWWJFTFIMGFCIPINSYGMIZODTRWABXAKLZAR");

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
    msg.setTimeStamp(0.960753683514);
    msg.setSource(14036U);
    msg.setSourceEntity(37U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(247U);
    msg.value = -19054;

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
    msg.setTimeStamp(0.84229964144);
    msg.setSource(13408U);
    msg.setSourceEntity(170U);
    msg.setDestination(40928U);
    msg.setDestinationEntity(59U);
    msg.value = 15403;

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
    msg.setTimeStamp(0.0355482624307);
    msg.setSource(34240U);
    msg.setSourceEntity(216U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(134U);
    msg.value = -21012;

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
    msg.setTimeStamp(0.234020468454);
    msg.setSource(30684U);
    msg.setSourceEntity(149U);
    msg.setDestination(61836U);
    msg.setDestinationEntity(128U);
    msg.value = 0.875749862531;

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
    msg.setTimeStamp(0.367509871759);
    msg.setSource(38824U);
    msg.setSourceEntity(217U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(246U);
    msg.value = 0.409593743972;

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
    msg.setTimeStamp(0.284329210525);
    msg.setSource(43563U);
    msg.setSourceEntity(54U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0351169688323;

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
    msg.setTimeStamp(0.190733473757);
    msg.setSource(52860U);
    msg.setSourceEntity(106U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0654625289423;

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
    msg.setTimeStamp(0.33625948622);
    msg.setSource(48991U);
    msg.setSourceEntity(99U);
    msg.setDestination(2491U);
    msg.setDestinationEntity(0U);
    msg.value = 0.769673501464;

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
    msg.setTimeStamp(0.940392472287);
    msg.setSource(1048U);
    msg.setSourceEntity(36U);
    msg.setDestination(31402U);
    msg.setDestinationEntity(215U);
    msg.value = 0.251554907795;

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
    msg.setTimeStamp(0.784015107086);
    msg.setSource(29501U);
    msg.setSourceEntity(75U);
    msg.setDestination(26204U);
    msg.setDestinationEntity(143U);
    msg.validity = 46698U;
    msg.type = 196U;
    msg.utc_year = 51191U;
    msg.utc_month = 180U;
    msg.utc_day = 239U;
    msg.utc_time = 0.111690976734;
    msg.lat = 0.437462722178;
    msg.lon = 0.0648078033964;
    msg.height = 0.299750309719;
    msg.satellites = 137U;
    msg.cog = 0.806979007861;
    msg.sog = 0.468468805569;
    msg.hdop = 0.627356843439;
    msg.vdop = 0.389193044846;
    msg.hacc = 0.0899127958443;
    msg.vacc = 0.210380439579;

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
    msg.setTimeStamp(0.212065643915);
    msg.setSource(2451U);
    msg.setSourceEntity(8U);
    msg.setDestination(17274U);
    msg.setDestinationEntity(157U);
    msg.validity = 51120U;
    msg.type = 250U;
    msg.utc_year = 58303U;
    msg.utc_month = 95U;
    msg.utc_day = 54U;
    msg.utc_time = 0.961813284214;
    msg.lat = 0.440597174956;
    msg.lon = 0.782999298779;
    msg.height = 0.0497573636713;
    msg.satellites = 12U;
    msg.cog = 0.49066570019;
    msg.sog = 0.364794858982;
    msg.hdop = 0.32556072907;
    msg.vdop = 0.0105293053369;
    msg.hacc = 0.492442000869;
    msg.vacc = 0.325056172204;

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
    msg.setTimeStamp(0.0630616606607);
    msg.setSource(59683U);
    msg.setSourceEntity(7U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(62U);
    msg.validity = 25697U;
    msg.type = 161U;
    msg.utc_year = 33883U;
    msg.utc_month = 97U;
    msg.utc_day = 210U;
    msg.utc_time = 0.959336772401;
    msg.lat = 0.941914983774;
    msg.lon = 0.728984779219;
    msg.height = 0.486739281507;
    msg.satellites = 187U;
    msg.cog = 0.545026339354;
    msg.sog = 0.976327409866;
    msg.hdop = 0.492651488461;
    msg.vdop = 0.707749433449;
    msg.hacc = 0.306203342982;
    msg.vacc = 0.804998351786;

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
    msg.setTimeStamp(0.544407938758);
    msg.setSource(41108U);
    msg.setSourceEntity(213U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(72U);
    msg.time = 0.367719104756;
    msg.phi = 0.308983893285;
    msg.theta = 0.55028653879;
    msg.psi = 0.363321873074;
    msg.psi_magnetic = 0.768216656491;

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
    msg.setTimeStamp(0.615573833458);
    msg.setSource(44418U);
    msg.setSourceEntity(153U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(31U);
    msg.time = 0.624206879552;
    msg.phi = 0.36736787007;
    msg.theta = 0.339923521999;
    msg.psi = 0.663225226252;
    msg.psi_magnetic = 0.743267844918;

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
    msg.setTimeStamp(0.618484726613);
    msg.setSource(8054U);
    msg.setSourceEntity(212U);
    msg.setDestination(21540U);
    msg.setDestinationEntity(1U);
    msg.time = 0.667311919968;
    msg.phi = 0.276543106009;
    msg.theta = 0.898210820341;
    msg.psi = 0.97765657977;
    msg.psi_magnetic = 0.956228433646;

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
    msg.setTimeStamp(0.92357408821);
    msg.setSource(32237U);
    msg.setSourceEntity(94U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(252U);
    msg.time = 0.3466628766;
    msg.x = 0.531980192811;
    msg.y = 0.265829548746;
    msg.z = 0.978304289163;
    msg.timestep = 0.26305097276;

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
    msg.setTimeStamp(0.898241653743);
    msg.setSource(21395U);
    msg.setSourceEntity(76U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(155U);
    msg.time = 0.841229444689;
    msg.x = 0.783335294328;
    msg.y = 0.0572736969827;
    msg.z = 0.378330594268;
    msg.timestep = 0.747515528716;

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
    msg.setTimeStamp(0.279015085268);
    msg.setSource(4398U);
    msg.setSourceEntity(158U);
    msg.setDestination(7476U);
    msg.setDestinationEntity(98U);
    msg.time = 0.994669212875;
    msg.x = 0.00333416674657;
    msg.y = 0.140570565666;
    msg.z = 0.0600053871358;
    msg.timestep = 0.480232799047;

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
    msg.setTimeStamp(0.979833730933);
    msg.setSource(14744U);
    msg.setSourceEntity(23U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(234U);
    msg.time = 0.843075478891;
    msg.x = 0.708036500004;
    msg.y = 0.291150886188;
    msg.z = 0.242702206937;

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
    msg.setTimeStamp(0.436662875444);
    msg.setSource(30096U);
    msg.setSourceEntity(241U);
    msg.setDestination(26226U);
    msg.setDestinationEntity(196U);
    msg.time = 0.0238274553925;
    msg.x = 0.74067966052;
    msg.y = 0.573445253606;
    msg.z = 0.955465928411;

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
    msg.setTimeStamp(0.108969167496);
    msg.setSource(21232U);
    msg.setSourceEntity(149U);
    msg.setDestination(26945U);
    msg.setDestinationEntity(251U);
    msg.time = 0.684832855833;
    msg.x = 0.132798341814;
    msg.y = 0.425623445639;
    msg.z = 0.808678223305;

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
    msg.setTimeStamp(0.439557780965);
    msg.setSource(37718U);
    msg.setSourceEntity(190U);
    msg.setDestination(35470U);
    msg.setDestinationEntity(140U);
    msg.time = 0.920781032768;
    msg.x = 0.193586609109;
    msg.y = 0.352316042399;
    msg.z = 0.027886413161;

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
    msg.setTimeStamp(0.89698238168);
    msg.setSource(65182U);
    msg.setSourceEntity(207U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(12U);
    msg.time = 0.840795533282;
    msg.x = 0.942776031507;
    msg.y = 0.943193844373;
    msg.z = 0.47520413064;

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
    msg.setTimeStamp(0.296354509174);
    msg.setSource(62404U);
    msg.setSourceEntity(82U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(41U);
    msg.time = 0.473200936566;
    msg.x = 0.589611858839;
    msg.y = 0.509008302553;
    msg.z = 0.147617284288;

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
    msg.setTimeStamp(0.0425892509002);
    msg.setSource(5149U);
    msg.setSourceEntity(181U);
    msg.setDestination(9348U);
    msg.setDestinationEntity(173U);
    msg.time = 0.624540235625;
    msg.x = 0.135275060003;
    msg.y = 0.682346287306;
    msg.z = 0.134403174633;

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
    msg.setTimeStamp(0.143784210735);
    msg.setSource(33524U);
    msg.setSourceEntity(192U);
    msg.setDestination(24054U);
    msg.setDestinationEntity(54U);
    msg.time = 0.846498016552;
    msg.x = 0.847076881126;
    msg.y = 0.977170864269;
    msg.z = 0.125535863003;

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
    msg.setTimeStamp(0.370354429721);
    msg.setSource(62055U);
    msg.setSourceEntity(159U);
    msg.setDestination(12316U);
    msg.setDestinationEntity(237U);
    msg.time = 0.756486512133;
    msg.x = 0.777074539925;
    msg.y = 0.14512302041;
    msg.z = 0.00806248130952;

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
    msg.setTimeStamp(0.381727546991);
    msg.setSource(20431U);
    msg.setSourceEntity(202U);
    msg.setDestination(211U);
    msg.setDestinationEntity(4U);
    msg.validity = 4U;
    msg.x = 0.415727504176;
    msg.y = 0.319245705214;
    msg.z = 0.00340771480235;

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
    msg.setTimeStamp(0.291498498954);
    msg.setSource(56476U);
    msg.setSourceEntity(120U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(127U);
    msg.validity = 173U;
    msg.x = 0.876824153986;
    msg.y = 0.408766902038;
    msg.z = 0.35757439376;

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
    msg.setTimeStamp(0.885445742384);
    msg.setSource(40149U);
    msg.setSourceEntity(18U);
    msg.setDestination(13503U);
    msg.setDestinationEntity(126U);
    msg.validity = 149U;
    msg.x = 0.736691448939;
    msg.y = 0.273035136104;
    msg.z = 0.636058788446;

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
    msg.setTimeStamp(0.68071897046);
    msg.setSource(36577U);
    msg.setSourceEntity(21U);
    msg.setDestination(34696U);
    msg.setDestinationEntity(162U);
    msg.validity = 233U;
    msg.x = 0.681911781839;
    msg.y = 0.168215468517;
    msg.z = 0.351048113819;

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
    msg.setTimeStamp(0.492920100923);
    msg.setSource(34720U);
    msg.setSourceEntity(69U);
    msg.setDestination(1422U);
    msg.setDestinationEntity(0U);
    msg.validity = 42U;
    msg.x = 0.955690649045;
    msg.y = 0.396918033177;
    msg.z = 0.857725944935;

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
    msg.setTimeStamp(0.297328686671);
    msg.setSource(57376U);
    msg.setSourceEntity(37U);
    msg.setDestination(28788U);
    msg.setDestinationEntity(215U);
    msg.validity = 222U;
    msg.x = 0.146464573636;
    msg.y = 0.884005978195;
    msg.z = 0.0782310662328;

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
    msg.setTimeStamp(0.809362683544);
    msg.setSource(49738U);
    msg.setSourceEntity(64U);
    msg.setDestination(37314U);
    msg.setDestinationEntity(65U);
    msg.time = 0.0645700482055;
    msg.x = 0.718207340761;
    msg.y = 0.16465714877;
    msg.z = 0.530127759558;

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
    msg.setTimeStamp(0.930941837162);
    msg.setSource(56485U);
    msg.setSourceEntity(119U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(113U);
    msg.time = 0.64723555433;
    msg.x = 0.85035783083;
    msg.y = 0.579387764253;
    msg.z = 0.726028625349;

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
    msg.setTimeStamp(0.80511187272);
    msg.setSource(12802U);
    msg.setSourceEntity(92U);
    msg.setDestination(17883U);
    msg.setDestinationEntity(68U);
    msg.time = 9.25849183262e-05;
    msg.x = 0.575506591341;
    msg.y = 0.0162343547096;
    msg.z = 0.807710285766;

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
    msg.setTimeStamp(0.0654074820805);
    msg.setSource(24935U);
    msg.setSourceEntity(189U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(190U);
    msg.validity = 81U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.681924446865;
    tmp_msg_0.beam_height = 0.712540407691;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.369051579507;

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
    msg.setTimeStamp(0.636134119894);
    msg.setSource(27821U);
    msg.setSourceEntity(12U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(166U);
    msg.validity = 165U;
    msg.value = 0.998761304474;

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
    msg.setTimeStamp(0.167796487764);
    msg.setSource(50262U);
    msg.setSourceEntity(165U);
    msg.setDestination(60274U);
    msg.setDestinationEntity(223U);
    msg.validity = 129U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.287848279108;
    tmp_msg_0.beam_height = 0.882462922943;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.630394638105;

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
    msg.setTimeStamp(0.718840772133);
    msg.setSource(47419U);
    msg.setSourceEntity(201U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(168U);
    msg.value = 0.162067226974;

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
    msg.setTimeStamp(0.980197696045);
    msg.setSource(50086U);
    msg.setSourceEntity(163U);
    msg.setDestination(47454U);
    msg.setDestinationEntity(157U);
    msg.value = 0.738820744425;

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
    msg.setTimeStamp(0.321590643197);
    msg.setSource(50145U);
    msg.setSourceEntity(172U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(119U);
    msg.value = 0.735680561918;

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
    msg.setTimeStamp(0.0854529635499);
    msg.setSource(17186U);
    msg.setSourceEntity(134U);
    msg.setDestination(10914U);
    msg.setDestinationEntity(38U);
    msg.value = 0.873241982697;

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
    msg.setTimeStamp(0.876455282577);
    msg.setSource(16166U);
    msg.setSourceEntity(49U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(54U);
    msg.value = 0.632935954018;

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
    msg.setTimeStamp(0.280096089332);
    msg.setSource(46976U);
    msg.setSourceEntity(208U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(51U);
    msg.value = 0.899431340179;

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
    msg.setTimeStamp(0.32222352333);
    msg.setSource(34827U);
    msg.setSourceEntity(2U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(174U);
    msg.value = 0.503574862014;

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
    msg.setTimeStamp(0.56591840612);
    msg.setSource(5473U);
    msg.setSourceEntity(177U);
    msg.setDestination(45476U);
    msg.setDestinationEntity(158U);
    msg.value = 0.497386953763;

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
    msg.setTimeStamp(0.275285349631);
    msg.setSource(4835U);
    msg.setSourceEntity(216U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(240U);
    msg.value = 0.945322458916;

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
    msg.setTimeStamp(0.425440012404);
    msg.setSource(47841U);
    msg.setSourceEntity(14U);
    msg.setDestination(47020U);
    msg.setDestinationEntity(172U);
    msg.value = 0.567246793408;

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
    msg.setTimeStamp(0.705421055007);
    msg.setSource(20794U);
    msg.setSourceEntity(20U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(103U);
    msg.value = 0.377277925629;

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
    msg.setTimeStamp(0.234628850165);
    msg.setSource(41133U);
    msg.setSourceEntity(199U);
    msg.setDestination(20871U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5392937263;

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
    msg.setTimeStamp(0.881737018189);
    msg.setSource(31365U);
    msg.setSourceEntity(229U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(175U);
    msg.value = 0.497781300708;

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
    msg.setTimeStamp(0.0406439488476);
    msg.setSource(22973U);
    msg.setSourceEntity(141U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(109U);
    msg.value = 0.153839512741;

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
    msg.setTimeStamp(0.0650504862118);
    msg.setSource(14724U);
    msg.setSourceEntity(193U);
    msg.setDestination(32986U);
    msg.setDestinationEntity(122U);
    msg.value = 0.00108529418792;

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
    msg.setTimeStamp(0.117982167668);
    msg.setSource(7883U);
    msg.setSourceEntity(63U);
    msg.setDestination(41114U);
    msg.setDestinationEntity(0U);
    msg.value = 0.936310102702;

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
    msg.setTimeStamp(0.133268242071);
    msg.setSource(7317U);
    msg.setSourceEntity(56U);
    msg.setDestination(111U);
    msg.setDestinationEntity(116U);
    msg.value = 0.975378066682;

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
    msg.setTimeStamp(0.676654843262);
    msg.setSource(29452U);
    msg.setSourceEntity(95U);
    msg.setDestination(9748U);
    msg.setDestinationEntity(75U);
    msg.value = 0.515826917255;

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
    msg.setTimeStamp(0.510634994798);
    msg.setSource(55959U);
    msg.setSourceEntity(241U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(248U);
    msg.value = 0.574518031841;

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
    msg.setTimeStamp(0.590134320708);
    msg.setSource(35507U);
    msg.setSourceEntity(219U);
    msg.setDestination(33068U);
    msg.setDestinationEntity(19U);
    msg.value = 0.49379790853;

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
    msg.setTimeStamp(0.377469651528);
    msg.setSource(60236U);
    msg.setSourceEntity(66U);
    msg.setDestination(54200U);
    msg.setDestinationEntity(6U);
    msg.value = 0.169349283601;

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
    msg.setTimeStamp(0.127918452412);
    msg.setSource(17455U);
    msg.setSourceEntity(216U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(243U);
    msg.value = 0.464543990363;

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
    msg.setTimeStamp(0.709093356261);
    msg.setSource(56293U);
    msg.setSourceEntity(193U);
    msg.setDestination(54932U);
    msg.setDestinationEntity(160U);
    msg.value = 0.211974297056;

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
    msg.setTimeStamp(0.485587734096);
    msg.setSource(43832U);
    msg.setSourceEntity(173U);
    msg.setDestination(10977U);
    msg.setDestinationEntity(107U);
    msg.value = 0.690050491449;

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
    msg.setTimeStamp(0.833106701935);
    msg.setSource(62113U);
    msg.setSourceEntity(161U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.923990332808;
    msg.speed = 0.367569723156;
    msg.turbulence = 0.221786384971;

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
    msg.setTimeStamp(0.193708918908);
    msg.setSource(26145U);
    msg.setSourceEntity(142U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.121163636335;
    msg.speed = 0.15962627089;
    msg.turbulence = 0.281757031464;

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
    msg.setTimeStamp(0.261071235675);
    msg.setSource(63443U);
    msg.setSourceEntity(7U);
    msg.setDestination(41129U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.162446964466;
    msg.speed = 0.777234639875;
    msg.turbulence = 0.79235884053;

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
    msg.setTimeStamp(0.285182137762);
    msg.setSource(11139U);
    msg.setSourceEntity(190U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0389773675441;

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
    msg.setTimeStamp(0.90571597329);
    msg.setSource(16556U);
    msg.setSourceEntity(218U);
    msg.setDestination(48422U);
    msg.setDestinationEntity(16U);
    msg.value = 0.526396397575;

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
    msg.setTimeStamp(0.653051553068);
    msg.setSource(25450U);
    msg.setSourceEntity(253U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(100U);
    msg.value = 0.186842044158;

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
    msg.setTimeStamp(0.720858632671);
    msg.setSource(27815U);
    msg.setSourceEntity(55U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(249U);
    msg.value.assign("UOEKSTABSXMKITIUQNAERLTBVRNUQROIJLQNVCNZQYJLOORZZHTKXTWLKJPZWQVAPWIACTXAMPGENUKAMSUYMFALMUJZMSKREDSEMBIODYNCOYDGHHFIVLCCWRJSPQKHUWGCYSJYGQGWVYKFTHBRRUFXYONNSPUWDLPHDBVZYOAHXTFFCFGLJXZG");

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
    msg.setTimeStamp(0.725819572939);
    msg.setSource(13995U);
    msg.setSourceEntity(209U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(69U);
    msg.value.assign("PAWQNJEOJHDNGHEQRCIZSJAZPMLTGYVKYUWAIBWWUOPDSSXMELDFYTAVADHZTCKJMEPTWABZHWTGHLVOXYULZBRLZRGLKBTNLPFGZRYHVIVFWUAFAIVBLQJCPXDRKUXHNIXXYASYVGSPDRQLRPRNEDCZHBYIXGHQLFCTFOJQKJPGISIUGVUNME");

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
    msg.setTimeStamp(0.994189038548);
    msg.setSource(12162U);
    msg.setSourceEntity(105U);
    msg.setDestination(48262U);
    msg.setDestinationEntity(82U);
    msg.value.assign("TFFCOHKXIZBXDMWLBUZCDWFGNGKZXEUSVDHQSGJGARLDYYHUVZFNRMKQYVGOJRVEHPQPLQMRCTSRICPUSMVINFIHKOBOMRLPKLFCNQRKQQNWPIGAYT");

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
    msg.setTimeStamp(0.56391056144);
    msg.setSource(5259U);
    msg.setSourceEntity(124U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(117U);
    const char tmp_msg_0[] = {48, 118, 80, -48, -66, -122, 48, -87, 64, -113, -59, 24, -30, 47, -9, 37, -98, 101, 34, -16, -55, -52, 7, 5, -108, 116, -53, -58, 27, -55, 79, -80, 53, 81, -116, -15, -14, -42, -99, 34, 97, 12, -85, 4, 13, 121, -100, 100, -108, -120, 100, -42, -91, -117, 32, -50, -58, 98, -61, -9, -39, -40, -116, -71, -122, 73, -87, 23, -15, -116, -119, -43, 76, -76, 49, -117, -84, 84, 34, -74, -11, 79, -3, 98, -99, -124, -70, 9, 104, -23, 95, 13, 68, -24, -40, -35, 105, 100, -50, 51, -39, 88, 36, -88, -31, -23, 11, 30, -39, 54, 63, 14, 67, -123, -93, 6, 64, -84, 5, -47, -54, -74, -43, -103, 86, -90, -43, 26, -93, 95, -6, 57, -122, 18, -116, -3, -21, 31, -37, 48, -101, -1, 98, -75, -53, -67, 50, 10, -33, 57, 51, -9, 122, 58, -110, 112, -34, 100, 112, 24, -114, 63, 77, 86, -7, 62, 65, -128, -33, 26, -122, -35, -31, 7, -114, 87, -85, 43, -29, 110, 14, -105, 96, 16, -50, 79, 81, -70, -26, -46, -90, -15, 59, -59, -63, -13};
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
    msg.setTimeStamp(0.310474866183);
    msg.setSource(59814U);
    msg.setSourceEntity(75U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(154U);
    const char tmp_msg_0[] = {9, 7, -115, -38, 119, 40, 5, 121, -90, -73, 51, -79, 99, 53, -90, 21, -52, -110, 50, 71, 17, -112, 35, 88, 45, -11, -58, 39, 12, -20, -77, 75, 34, 46, -76, -8, -2, 68, 118, -61, -25, 92, 12, -7, 12, -70, -127, 83, -107, 119, -121, -40, 62, -46, 117, -2, 43, 112, 51, 5, 121, 75, -71, -58, -88, 96, -19, -63, 14, 104, 23, -57, -35, -125, 65, -88};
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
    msg.setTimeStamp(0.421249942819);
    msg.setSource(26391U);
    msg.setSourceEntity(35U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(157U);
    const char tmp_msg_0[] = {31, 59, -66, 104, 31, -83, -21, 57, -11, 116, -16, -86, -41, 72, -128, -109, -66, -82, -24, -102, 36, -46, 13, 120, 56, -78, 68, 100, 19, -90, 15, 46, 97, -59, -7, -78, -127, 47, -68, 60, 34, -68, 109, 81, 104, -10, 105, 23, 37, 81, -92, 115, -54, -5, 62, 48, 13, -22, 16, 71, 107, 39, -10, -9, -115, -19, -99, -117, -26, 15, -85, 90, -93, -123};
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
    msg.setTimeStamp(0.457549957983);
    msg.setSource(36601U);
    msg.setSourceEntity(162U);
    msg.setDestination(11166U);
    msg.setDestinationEntity(126U);
    msg.frequency = 1508696041U;
    msg.min_range = 27137U;
    msg.max_range = 65080U;

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
    msg.setTimeStamp(0.551813071897);
    msg.setSource(39009U);
    msg.setSourceEntity(89U);
    msg.setDestination(51308U);
    msg.setDestinationEntity(128U);
    msg.frequency = 2513752857U;
    msg.min_range = 36066U;
    msg.max_range = 4079U;

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
    msg.setTimeStamp(0.18829882095);
    msg.setSource(843U);
    msg.setSourceEntity(136U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(173U);
    msg.frequency = 1463227646U;
    msg.min_range = 23460U;
    msg.max_range = 53649U;

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
    msg.setTimeStamp(0.864272014293);
    msg.setSource(46483U);
    msg.setSourceEntity(122U);
    msg.setDestination(61744U);
    msg.setDestinationEntity(147U);
    msg.type = 42U;
    msg.frequency = 3205707897U;
    msg.min_range = 21497U;
    msg.max_range = 56468U;
    msg.bits_per_point = 186U;
    msg.scale_factor = 0.982887894619;
    const char tmp_msg_0[] = {73, 57, -31, 59, 112, 64, -124, -96, 104, 41, -124, -92, -99, 28, 32, 125, 13, -98, 10, 59, 36, -77, -42, 97, 23, 31, -10, 46, 1, 55, 72, 43, 0, -92, 83, -94, -106, -25, -62, 43, 41, 64, 106, -82, -37, 96, 48, -105, 59, 73, 90, -127, 49, -79, -84, 41, -22, -31, 86, 9, 99, -110, -7, 27, -74, -6, -48, 45, -47, 22, 77, -79, 37, 9, -13, -3, -56, -70, 21, -12, -128, -39, 61, 109, -126};
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
    msg.setTimeStamp(0.126280169315);
    msg.setSource(51197U);
    msg.setSourceEntity(179U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(249U);
    msg.type = 5U;
    msg.frequency = 3163546709U;
    msg.min_range = 22144U;
    msg.max_range = 55376U;
    msg.bits_per_point = 163U;
    msg.scale_factor = 0.428463079178;
    const char tmp_msg_0[] = {62, -57, -68, -22, 66, -20, 44, 76, -118, 54, 1, 99, 95, -64, -27, -90, -29, 65, 93, 45, -3, 24, 86, 67, 23, -35, -12, 90, 87, 66, -33, -51, -115, 51, -12, -116, -68, 123, 68, -111, 117, -32, -109, 96, 110, -47, -17, 69, 96, 82, -20, 90, 81, -72, -110, 0, -85, 97, -127, -42, -92, -31, -38, -91, 73, -87, -108, 62, -48, -39, 84, 96, 23, -2, -13, -65, -44, -56, -91, 13, 103, -86, 14, 94, 108, -36, -111, -44, 83, -112, 18, 99, 42, 88, 104, 125, 121, 83, 114, -105, -15, 24, -113, 113, 45, 36, 26, -85, 120, 34, 62, 5, -109, -47, 35, 19, -78, 0, 99, 90, 113, 40, 31, -96, 38, -32, 28, -37, 57, 93, -16, 37, -87, -18, -53, -34, -2, -50, -41, 68, 118, 122, 55, -64, -2, -11, -36, 82, 88, 54, 94, -72, -115, -95, 62, 43, -125, -70, 64, -89, -6, 32, -44, 119, -37, -1, 28, -74, 79, -36, 33, 67, 59, -99, 62, 52, 26, 12, 86, -71, 119, 15, 98, 44, -123, -7, 62, -104, -20, -106, -58, -50, -12, 107, -102, -110};
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
    msg.setTimeStamp(0.580281991762);
    msg.setSource(45248U);
    msg.setSourceEntity(105U);
    msg.setDestination(29052U);
    msg.setDestinationEntity(56U);
    msg.type = 149U;
    msg.frequency = 249490916U;
    msg.min_range = 41661U;
    msg.max_range = 2460U;
    msg.bits_per_point = 230U;
    msg.scale_factor = 0.617604652838;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.56966010711;
    tmp_msg_0.beam_height = 0.71077230815;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-63, 73, 38, 47, 1, -45, -85, -32, 80, -4, -31, -31, -104, -31, 35, -3, 87, 77, 71, 77, 81, -50, -44, 34, 18, -52, -36, -54, -33, -10, 62, -100, -38, -77, -39, -115, -97, 117, -96, -75, -21, -5, -38, -100, -12, 12, -80, 87, 18, 109, 121, -25, 28, -67, -115, -77, 38, 20, -104, -16, -103, -41, 105, -84, -70, -89, -57, 89, 56, -124, -122, 7, -66, 39, 79, 57, 8, -7, -109, 110, 54, 6, -91, 122, 26, 95, -17, -68, 46, 99, -8, -96, 54, 50, 18, -117, -119, 46, -6, 54, -75, -94, -96, -112, 82, 27, -43, -26, -65, 34, 55, 53, 118, -104, 74, 89, -86, 118, 96, 39, -76, 16, 115, 62, -122, 34, 58, -84, -24, -35, 34, 61, -120, -85, -97, 33, -57, -18, 116, 54, 73, -24, -39, -65, 18, 56, 61, 46, 65, -38};
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
    msg.setTimeStamp(0.416431707947);
    msg.setSource(25262U);
    msg.setSourceEntity(81U);
    msg.setDestination(28162U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.554534250926);
    msg.setSource(5329U);
    msg.setSourceEntity(68U);
    msg.setDestination(44038U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.630374483616);
    msg.setSource(18615U);
    msg.setSourceEntity(251U);
    msg.setDestination(51839U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.986044316512);
    msg.setSource(21883U);
    msg.setSourceEntity(162U);
    msg.setDestination(30691U);
    msg.setDestinationEntity(5U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.731488440774);
    msg.setSource(10546U);
    msg.setSourceEntity(224U);
    msg.setDestination(49148U);
    msg.setDestinationEntity(244U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.0156575449147);
    msg.setSource(33765U);
    msg.setSourceEntity(28U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(48U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.53222387019);
    msg.setSource(10591U);
    msg.setSourceEntity(98U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(229U);
    msg.value = 0.851268986332;
    msg.confidence = 0.367936381618;
    msg.opmodes.assign("YKQFVIXGPYLUNNVDGWSAMTTZMIZFQZBJBIBCQEFWYOHKLYMHOUMYEPWGIRTSYTXFARLWNGVDXLLHQEWAYPFHIABHFCGQSJLSUXESGCBBBZYPWUXNWXHIVADPCXGJOZLRJGFPCSXNRDMLYURUDZEXALDFCBSVBM");

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
    msg.setTimeStamp(0.117357801157);
    msg.setSource(34392U);
    msg.setSourceEntity(52U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(45U);
    msg.value = 0.423621008637;
    msg.confidence = 0.61641244662;
    msg.opmodes.assign("ZHSZKRTQMGZUJGMUWBOKAITYOQZRWHSYAJBZNNHPLUJKOCGYPLOTGPJNXWXRMOSBQTSEOCUDGBADRUWCKSMYHMLMTGOVXYGXJDSJEVXLHFYQSCLPCIKXVHLJNOWFIFFFMXDLUFWJESDIPOQKKQFAERMJSDSHBQGYUEKDOUCUDCEUPEJBCWZLTQCIVHVXTYTXMWRNVAZNRKLIMXRVVFPW");

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
    msg.setTimeStamp(0.35119399091);
    msg.setSource(1731U);
    msg.setSourceEntity(48U);
    msg.setDestination(46628U);
    msg.setDestinationEntity(30U);
    msg.value = 0.857058519647;
    msg.confidence = 0.307282697432;
    msg.opmodes.assign("MNBVXYBFBNXCHDIQZPRQNRAURMAKGSFGEAAYJVUZMHUMKGASJOCLTPOLNRCTQLMSQSZXOWZSNRNRIMJCDFIYUWECZVMKDDCIKYZMTHQKLPUSBB");

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
    msg.setTimeStamp(0.0901651192998);
    msg.setSource(46228U);
    msg.setSourceEntity(107U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(139U);
    msg.itow = 26408159U;
    msg.lat = 0.545884950519;
    msg.lon = 0.622620507809;
    msg.height_ell = 0.409563737947;
    msg.height_sea = 0.601999356947;
    msg.hacc = 0.517786503327;
    msg.vacc = 0.814627315378;
    msg.vel_n = 0.51885112786;
    msg.vel_e = 0.0744413471723;
    msg.vel_d = 0.848785464946;
    msg.speed = 0.304644111326;
    msg.gspeed = 0.78933637942;
    msg.heading = 0.18954079197;
    msg.sacc = 0.127546203092;
    msg.cacc = 0.969068569434;

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
    msg.setTimeStamp(0.0628241849958);
    msg.setSource(20525U);
    msg.setSourceEntity(113U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(247U);
    msg.itow = 196321719U;
    msg.lat = 0.103535141538;
    msg.lon = 0.0755977406096;
    msg.height_ell = 0.15734455006;
    msg.height_sea = 0.593672478812;
    msg.hacc = 0.137698667688;
    msg.vacc = 0.976529533665;
    msg.vel_n = 0.468788252071;
    msg.vel_e = 0.00853981540865;
    msg.vel_d = 0.961833588699;
    msg.speed = 0.48592781175;
    msg.gspeed = 0.988129447003;
    msg.heading = 0.862741569944;
    msg.sacc = 0.400810847157;
    msg.cacc = 0.371159238252;

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
    msg.setTimeStamp(0.5093622544);
    msg.setSource(11289U);
    msg.setSourceEntity(80U);
    msg.setDestination(12358U);
    msg.setDestinationEntity(206U);
    msg.itow = 3191320187U;
    msg.lat = 0.149402966682;
    msg.lon = 0.968763671735;
    msg.height_ell = 0.788693466175;
    msg.height_sea = 0.108122681735;
    msg.hacc = 0.85244440222;
    msg.vacc = 0.812420066918;
    msg.vel_n = 0.371039702156;
    msg.vel_e = 0.761229463024;
    msg.vel_d = 0.283029366662;
    msg.speed = 0.627673747643;
    msg.gspeed = 0.255918944528;
    msg.heading = 0.367836198112;
    msg.sacc = 0.58182229986;
    msg.cacc = 0.575944489732;

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
    msg.setTimeStamp(0.423926935928);
    msg.setSource(6068U);
    msg.setSourceEntity(49U);
    msg.setDestination(18913U);
    msg.setDestinationEntity(71U);
    msg.id = 59U;
    msg.value = 0.879853744718;

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
    msg.setTimeStamp(0.423059716811);
    msg.setSource(34998U);
    msg.setSourceEntity(224U);
    msg.setDestination(5445U);
    msg.setDestinationEntity(62U);
    msg.id = 234U;
    msg.value = 0.0532470239731;

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
    msg.setTimeStamp(0.789375749952);
    msg.setSource(31822U);
    msg.setSourceEntity(124U);
    msg.setDestination(20566U);
    msg.setDestinationEntity(103U);
    msg.id = 234U;
    msg.value = 0.936681214856;

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
    msg.setTimeStamp(0.365453474238);
    msg.setSource(47738U);
    msg.setSourceEntity(191U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(150U);
    msg.x = 0.241122953541;
    msg.y = 0.0785728479386;
    msg.z = 0.392534796735;
    msg.phi = 0.321372705371;
    msg.theta = 0.0862373345725;
    msg.psi = 0.874562983108;

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
    msg.setTimeStamp(0.380984202884);
    msg.setSource(30533U);
    msg.setSourceEntity(229U);
    msg.setDestination(44197U);
    msg.setDestinationEntity(129U);
    msg.x = 0.378610257644;
    msg.y = 0.0887748094507;
    msg.z = 0.723971883468;
    msg.phi = 0.0997363749405;
    msg.theta = 0.731484065836;
    msg.psi = 0.504195077401;

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
    msg.setTimeStamp(0.933080483944);
    msg.setSource(4314U);
    msg.setSourceEntity(144U);
    msg.setDestination(38219U);
    msg.setDestinationEntity(75U);
    msg.x = 0.196520970477;
    msg.y = 0.120988707221;
    msg.z = 0.786191288345;
    msg.phi = 0.436085786113;
    msg.theta = 0.888399751297;
    msg.psi = 0.180336754213;

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
    msg.setTimeStamp(0.51952208128);
    msg.setSource(37883U);
    msg.setSourceEntity(117U);
    msg.setDestination(55323U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.670238472364;
    msg.beam_height = 0.885270397953;

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
    msg.setTimeStamp(0.45523604239);
    msg.setSource(31785U);
    msg.setSourceEntity(194U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.38093948168;
    msg.beam_height = 0.736075837588;

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
    msg.setTimeStamp(0.172494274114);
    msg.setSource(2463U);
    msg.setSourceEntity(126U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(238U);
    msg.beam_width = 0.771518679806;
    msg.beam_height = 0.1881221426;

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
    msg.setTimeStamp(0.436862514701);
    msg.setSource(8447U);
    msg.setSourceEntity(227U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(241U);
    msg.sane = 112U;

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
    msg.setTimeStamp(0.0493604313942);
    msg.setSource(11487U);
    msg.setSourceEntity(117U);
    msg.setDestination(45669U);
    msg.setDestinationEntity(216U);
    msg.sane = 125U;

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
    msg.setTimeStamp(0.468153470781);
    msg.setSource(43941U);
    msg.setSourceEntity(123U);
    msg.setDestination(34988U);
    msg.setDestinationEntity(92U);
    msg.sane = 178U;

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
    msg.setTimeStamp(0.173050876062);
    msg.setSource(49912U);
    msg.setSourceEntity(140U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(52U);
    msg.id = 36U;
    msg.zoom = 47U;
    msg.action = 75U;

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
    msg.setTimeStamp(0.29299846146);
    msg.setSource(11364U);
    msg.setSourceEntity(39U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(177U);
    msg.id = 236U;
    msg.zoom = 23U;
    msg.action = 132U;

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
    msg.setTimeStamp(0.86260892851);
    msg.setSource(41704U);
    msg.setSourceEntity(188U);
    msg.setDestination(60190U);
    msg.setDestinationEntity(225U);
    msg.id = 215U;
    msg.zoom = 55U;
    msg.action = 157U;

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
    msg.setTimeStamp(0.0371280648299);
    msg.setSource(63761U);
    msg.setSourceEntity(43U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(27U);
    msg.id = 58U;
    msg.value = 0.344543583878;

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
    msg.setTimeStamp(0.157762727837);
    msg.setSource(29272U);
    msg.setSourceEntity(144U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(235U);
    msg.id = 126U;
    msg.value = 0.693112460451;

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
    msg.setTimeStamp(0.200634707147);
    msg.setSource(23853U);
    msg.setSourceEntity(75U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(127U);
    msg.id = 132U;
    msg.value = 0.532310613448;

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
    msg.setTimeStamp(0.80104074222);
    msg.setSource(11795U);
    msg.setSourceEntity(214U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(190U);
    msg.id = 115U;
    msg.value = 0.51506323087;

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
    msg.setTimeStamp(0.439359650996);
    msg.setSource(65243U);
    msg.setSourceEntity(139U);
    msg.setDestination(32554U);
    msg.setDestinationEntity(169U);
    msg.id = 114U;
    msg.value = 0.161929444604;

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
    msg.setTimeStamp(0.570197797359);
    msg.setSource(29495U);
    msg.setSourceEntity(79U);
    msg.setDestination(58401U);
    msg.setDestinationEntity(18U);
    msg.id = 160U;
    msg.value = 0.685989778175;

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
    msg.setTimeStamp(0.00198588556771);
    msg.setSource(25591U);
    msg.setSourceEntity(254U);
    msg.setDestination(5640U);
    msg.setDestinationEntity(183U);
    msg.id = 230U;
    msg.angle = 0.43890588353;

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
    msg.setTimeStamp(0.00631359689883);
    msg.setSource(511U);
    msg.setSourceEntity(81U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(252U);
    msg.id = 11U;
    msg.angle = 0.692525322215;

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
    msg.setTimeStamp(0.0399119669577);
    msg.setSource(45079U);
    msg.setSourceEntity(169U);
    msg.setDestination(46756U);
    msg.setDestinationEntity(249U);
    msg.id = 4U;
    msg.angle = 0.860145733596;

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
    msg.setTimeStamp(0.466298246194);
    msg.setSource(32254U);
    msg.setSourceEntity(81U);
    msg.setDestination(57603U);
    msg.setDestinationEntity(187U);
    msg.op = 59U;
    msg.actions.assign("LCHIWFQIHJPTBOGNRZYGGAUGJDEHBAEKFZHZOKQOBFCUHTVKCQW");

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
    msg.setTimeStamp(0.680825009984);
    msg.setSource(51757U);
    msg.setSourceEntity(15U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(25U);
    msg.op = 87U;
    msg.actions.assign("SIXKTGDRACASMGPQXLDJDLPNEMGQQIOTCHOPXPBJUFYWZRSZECTIIXDPYNK");

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
    msg.setTimeStamp(0.687648883459);
    msg.setSource(17648U);
    msg.setSourceEntity(106U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(99U);
    msg.op = 181U;
    msg.actions.assign("ZPHITYUCBHPBOSUNSPGCLMBGYYDJLNNLXEJZFESOEHTDZEADJTHKKVVECRBJEBCDVFZDBMFMXKPRUQRCIUBLRQSQONOGJFFSRZSAWMAKWGFGGWILXAUNKBOUQOMFGVQVDMYTYGCUCZRHXYIDUDWYXU");

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
    msg.setTimeStamp(0.203363368344);
    msg.setSource(23680U);
    msg.setSourceEntity(208U);
    msg.setDestination(37981U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("JZWOBCXZSFTHAFFJMUARQNYUEQMUVKGGLYYLJQKUPOXUAKLTZZCRTZKVZJNPGJAZQEFRTYEKELDBPOAHYWEFLPDVILCCPDULQBGKRHCTJDYOUNMJMQIFNKYNGWFXENDUDTDITXSTBXMVRSIHECRCHWCNJAQGGBPCZWWSSBVNWBNECMODUHVISIVKRVHSPAQBRUWYAORNMXDWGLZVGGKXWSOIKQHAVERHXSSOYLOFIFBYZMPQDIM");

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
    msg.setTimeStamp(0.112190056072);
    msg.setSource(24960U);
    msg.setSourceEntity(158U);
    msg.setDestination(54632U);
    msg.setDestinationEntity(210U);
    msg.actions.assign("KMZZWGXSTGCOZJBUIOQAQHKGKTRCLHVZYMMLNYCYUTJPWJRISEQENHCDVAGPTVIKGQYEDVEPOTALHOZAPAKHJWINBLSAHNBYAPHBZWVEXNWWKCENYGAJRTYFFIFPDBURJAMTUCHWLLOJJNULFFWRBMQIOTHPYGMYVQKGDSIUVXUCPRVWBSMXEBSDONXCIFSRSQXOQVEJ");

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
    msg.setTimeStamp(0.610011741872);
    msg.setSource(53104U);
    msg.setSourceEntity(140U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("VKJFBHBDJTGDPHFUSSMFFQDWZEYCQKJXGYKQYIVVGDUOZDCPUMRQQTBVZJLUYABJRYXAISYOTUCLWMPGYTYHHJAGKOPTNSEMOUZWOCXDZDQSIIWXLZPQ");

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
    msg.setTimeStamp(0.862762878546);
    msg.setSource(58134U);
    msg.setSourceEntity(222U);
    msg.setDestination(7188U);
    msg.setDestinationEntity(15U);
    msg.button = 126U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.635591775817);
    msg.setSource(28742U);
    msg.setSourceEntity(204U);
    msg.setDestination(12248U);
    msg.setDestinationEntity(235U);
    msg.button = 152U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.0320673968871);
    msg.setSource(54858U);
    msg.setSourceEntity(69U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(107U);
    msg.button = 193U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.851619466897);
    msg.setSource(7155U);
    msg.setSourceEntity(244U);
    msg.setDestination(44168U);
    msg.setDestinationEntity(30U);
    msg.op = 53U;
    msg.text.assign("XOPRKFREGBYUHYIZRCFHQDGPLPJOBUG");

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
    msg.setTimeStamp(0.108754567073);
    msg.setSource(19106U);
    msg.setSourceEntity(130U);
    msg.setDestination(39880U);
    msg.setDestinationEntity(186U);
    msg.op = 190U;
    msg.text.assign("WEUEBWBKHZOJRGADPTRFFNVQSLWEABZEFUWHIGMKDDJAZTCOFFCZHFCDSPXDTRZOTBXBATPUNPIGIUQMUOQGBNYRVLQRNAOJDKZNMYGHKGJXALSEBQHQBZVFDELHIPXJCMSPZHKIFVSYTZPHKWLVDWIUMJHGONUWCTLUSXSBT");

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
    msg.setTimeStamp(0.0765360160619);
    msg.setSource(47835U);
    msg.setSourceEntity(246U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(24U);
    msg.op = 206U;
    msg.text.assign("DLTNFQSPZUBHADIABHMIIARJZWQLAYXHTSSBJFPEGPEUUKTCVGNFGQUVOO");

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
    msg.setTimeStamp(0.697702556003);
    msg.setSource(50502U);
    msg.setSourceEntity(140U);
    msg.setDestination(33792U);
    msg.setDestinationEntity(228U);
    msg.op = 217U;
    msg.time_remain = 0.575681019127;
    msg.sched_time = 0.783640456879;

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
    msg.setTimeStamp(0.909065564587);
    msg.setSource(25466U);
    msg.setSourceEntity(128U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(85U);
    msg.op = 32U;
    msg.time_remain = 0.923010678962;
    msg.sched_time = 0.757028573758;

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
    msg.setTimeStamp(0.05563603516);
    msg.setSource(36620U);
    msg.setSourceEntity(75U);
    msg.setDestination(48708U);
    msg.setDestinationEntity(159U);
    msg.op = 229U;
    msg.time_remain = 0.29031061817;
    msg.sched_time = 0.0440741811477;

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
    msg.setTimeStamp(0.402293623607);
    msg.setSource(9761U);
    msg.setSourceEntity(139U);
    msg.setDestination(7086U);
    msg.setDestinationEntity(191U);
    msg.name.assign("BBZUVDSPKRYPKGTQTDXXNEUQWJEJMWAPMWNTZMQGBACPVDNMWZRTFQUVYOCVLMSYJAPWCKSFJIDVLCAVFSCHCFFOOWSHKUHDCMDEAYYLXIRRICWUXOGCOIYZETMLUPNGFQBAWDFKGINTYNOWTNXHFHYGHBQLLEPPRAIVSEGLYXNIWK");
    msg.op = 184U;
    msg.sched_time = 0.802688345413;

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
    msg.setTimeStamp(0.915117039726);
    msg.setSource(33712U);
    msg.setSourceEntity(221U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(116U);
    msg.name.assign("HZSDEWFMTFVQGYDVVHZBCMDWVGMZPWUMUXFOQOUHCRZTRQOXDFALSEGCXSVLHIJMPNKCUREPK");
    msg.op = 85U;
    msg.sched_time = 0.187938827206;

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
    msg.setTimeStamp(0.597295284576);
    msg.setSource(918U);
    msg.setSourceEntity(234U);
    msg.setDestination(22976U);
    msg.setDestinationEntity(187U);
    msg.name.assign("LIETKTCVRQIWUOENWODSFHZIARLTOXBASKPJBEATF");
    msg.op = 7U;
    msg.sched_time = 0.48410157987;

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
    msg.setTimeStamp(0.244671340685);
    msg.setSource(37606U);
    msg.setSourceEntity(234U);
    msg.setDestination(46783U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.828686736994);
    msg.setSource(3120U);
    msg.setSourceEntity(164U);
    msg.setDestination(62332U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.314067795774);
    msg.setSource(14135U);
    msg.setSourceEntity(60U);
    msg.setDestination(6175U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.250858776286);
    msg.setSource(14825U);
    msg.setSourceEntity(13U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(176U);
    msg.name.assign("BZESEALJLHERDLJJGPVMIAQACSLDZDPKHUJXRMNRBYWWGNQZSGRCDFAQUTHWYXNOFAQTQUBVHKHSKZCBOTIOKKGLHZIWTYFXBSUBANOZCPQPTUKJOKHYZGNXNGJIUPPILGPDYMZBCWFSRRLJAGVDVVTPHNKDGCWAUWI");
    msg.state = 42U;

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
    msg.setTimeStamp(0.855004561814);
    msg.setSource(101U);
    msg.setSourceEntity(102U);
    msg.setDestination(54831U);
    msg.setDestinationEntity(7U);
    msg.name.assign("UAOOGGOBPOTWEMZEHIAVMIPCASESVLEEMSUDEJCMGBXALTISAO");
    msg.state = 63U;

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
    msg.setTimeStamp(0.690844537023);
    msg.setSource(23669U);
    msg.setSourceEntity(231U);
    msg.setDestination(1210U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GJUBSHLFUBBGUPUNFGKTZKGDVMVZMZESWTJZAUAKYCJWNCOSVBWNAZDRLTPEGPBJQMYKHBRYWOPFEVIILJBHMHQDBJDOYHDFWXXPULRYYKXMYAVDRZZIKLQSNTOEWADHISDLQVHSQVRURWFNQMXSRGKPFPSAVOCJRXCWONKNEUYATWEGNKUCLO");
    msg.state = 251U;

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
    msg.setTimeStamp(0.982425701559);
    msg.setSource(33909U);
    msg.setSourceEntity(230U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(75U);
    msg.name.assign("ZPNORNVGYXQHVPQKQPVNXRADIIMAPOLIOCANKBXWITJAOPMGLFPWESHZOYEMLJUARTFNRWGUCYVTVQHYMLWSYAODNMIKUHSQKCRISSWCAKSGQDOKIQNBGNHFJZILGCVOYYFUPTOFJMS");
    msg.value = 55U;

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
    msg.setTimeStamp(0.118798931601);
    msg.setSource(54394U);
    msg.setSourceEntity(219U);
    msg.setDestination(46738U);
    msg.setDestinationEntity(18U);
    msg.name.assign("JZWDSUUAYZRTDBKNXVUFFKJEXLEXMETCSJYLSVZVUBKY");
    msg.value = 29U;

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
    msg.setTimeStamp(0.555218735368);
    msg.setSource(40855U);
    msg.setSourceEntity(73U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(103U);
    msg.name.assign("MCDBGDRZKYIXCZSACFONQZVRDSCTMHASGECOXYFPHKVJZPSUMXACOMOGOXBTECNWRLZJURODGLUPMKAKPVVNOVYDBPLVRENEWXDXIMZTIFUUKNJEFITVIYLXPIVNUJFTDBRZMTUOQWFIWTZWTMGYKLSQSWYEKHGJHXALMFBLUVGLHRQEWHLONTXTNIJHLWRYPUEFDJZNXQAASAGFSEQBZSDACRSGKUIFBYYJRJOVCQWHMGEAQHPBHNCY");
    msg.value = 198U;

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
    msg.setTimeStamp(0.772847320837);
    msg.setSource(3110U);
    msg.setSourceEntity(93U);
    msg.setDestination(49528U);
    msg.setDestinationEntity(11U);
    msg.name.assign("LXCXHXVJKFYQZCTHDPOKSADKQJGTIQCTABDTFDJGNJCRGABHKZXOIMUYGOAJTFZHHIWQBXEXPHZMAPAOWUZOCMBGVIPGMIFAFZUAXVDVDMKTEGYLKEPHPIYUFZLQSIETRKFSJAMBTYEEILSJSQOEMRSWKNYQKBVROGETRCYNBL");

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
    msg.setTimeStamp(0.0878579078532);
    msg.setSource(33715U);
    msg.setSourceEntity(15U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(169U);
    msg.name.assign("LVMNZRAUXWOPUNZRMLOEVWWYLIWIXXKRILHHNTQCSEXJNQHFNDDGSCBHPNKWTYLVPCLSQYCNEFXPARKMGMZJEVSZTHTTKNWHGXQOKNEZCRZKUYCAQUJRSOAYXPAUFIAWBPBBDHIAEJAJKBQUGVGYJQVLC");

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
    msg.setTimeStamp(0.984825135654);
    msg.setSource(60098U);
    msg.setSourceEntity(60U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(192U);
    msg.name.assign("GVSZEIVBJSUXPBIGDHLKMVVAPDLAEJYOHMHTONQTJKMZYIWVFHAQXNGMYVBQMPHMHAWYAHYFBXTALXKDSUFKGLRRMRYBTOUQQLILIBEQHFZIQSGXKLFLNGBINYZOAXYN");

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
    msg.setTimeStamp(0.813140089072);
    msg.setSource(35566U);
    msg.setSourceEntity(101U);
    msg.setDestination(6420U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ARMZYVVDGILAYXMCECDDZIMHONPAGZPFTWOMRYESLQRFVDGVJTKTINECQAQSZUBIHTFLCWGTURUORZCLXRXCCYIAHOYMQQECUPSRXMLENLDHWICDUZLKZOXELJVDGYKAGFBHQWYURHXHKUBGQBZMETNSQPVFRHSMW");
    msg.value = 26U;

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
    msg.setTimeStamp(0.703752489211);
    msg.setSource(52251U);
    msg.setSourceEntity(142U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(248U);
    msg.name.assign("RGASIOGAPGBCXVCKCJHSBVLUHFXBWBDYIZDOEFQNCXFQTLHLZYRMPTZAOKHCYEJZNYQORNRFTZBCKCSIASAKSTMJIRGEFMLCXRESMKZVJPHTIDONYYXTRCJEKUOUFHDGVGUWZBPOGUIJZAZYHEKWYZPJOQUDBOJQQSHBFMUPWTMOMPFQWUXBEDRNKHHUIITLPWUVPDIJEBYXDLWI");
    msg.value = 41U;

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
    msg.setTimeStamp(0.383977399021);
    msg.setSource(42147U);
    msg.setSourceEntity(170U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IJKWNSNOUQEFNVWRGKQYZCULIXRVLXVMAQOSTAEMRYPCRDNUDVTYSIJTIQECAFVMTIBOFAGDBZLHJJHAOHXDCZUHWERYLSKCYZHFFDDIHT");
    msg.value = 144U;

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
    msg.setTimeStamp(0.33395691932);
    msg.setSource(58174U);
    msg.setSourceEntity(204U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(125U);
    msg.id = 152U;
    msg.period = 2270228433U;
    msg.duty_cycle = 2351648442U;

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
    msg.setTimeStamp(0.904616230796);
    msg.setSource(15988U);
    msg.setSourceEntity(63U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(92U);
    msg.id = 200U;
    msg.period = 1039172090U;
    msg.duty_cycle = 3002529603U;

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
    msg.setTimeStamp(0.802576402251);
    msg.setSource(41809U);
    msg.setSourceEntity(66U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(139U);
    msg.id = 127U;
    msg.period = 3330082676U;
    msg.duty_cycle = 3261842568U;

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
    msg.setTimeStamp(0.66781517652);
    msg.setSource(38591U);
    msg.setSourceEntity(61U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(37U);
    msg.id = 133U;
    msg.period = 1366142260U;
    msg.duty_cycle = 146609478U;

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
    msg.setTimeStamp(0.309180820363);
    msg.setSource(44663U);
    msg.setSourceEntity(160U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(51U);
    msg.id = 203U;
    msg.period = 3491993340U;
    msg.duty_cycle = 3012162836U;

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
    msg.setTimeStamp(0.978902381095);
    msg.setSource(56832U);
    msg.setSourceEntity(108U);
    msg.setDestination(9807U);
    msg.setDestinationEntity(35U);
    msg.id = 79U;
    msg.period = 4026785519U;
    msg.duty_cycle = 138797720U;

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
    msg.setTimeStamp(0.117384056272);
    msg.setSource(34146U);
    msg.setSourceEntity(166U);
    msg.setDestination(2718U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.79107468786;
    msg.lon = 0.230440806903;
    msg.height = 0.312806534212;
    msg.x = 0.0438178875503;
    msg.y = 0.289133613818;
    msg.z = 0.828207606669;
    msg.phi = 0.117379749826;
    msg.theta = 0.521756855631;
    msg.psi = 0.686745309129;
    msg.u = 0.215999019328;
    msg.v = 0.474008452359;
    msg.w = 0.390128375884;
    msg.vx = 0.0461423528799;
    msg.vy = 0.559180291692;
    msg.vz = 0.698791735106;
    msg.p = 0.85287438604;
    msg.q = 0.30673607904;
    msg.r = 0.702595337303;
    msg.depth = 0.580260666099;
    msg.alt = 0.00354684461122;

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
    msg.setTimeStamp(0.151483017905);
    msg.setSource(7843U);
    msg.setSourceEntity(241U);
    msg.setDestination(34740U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.265956872375;
    msg.lon = 0.851540431557;
    msg.height = 0.0267549767401;
    msg.x = 0.360332501189;
    msg.y = 0.918821869091;
    msg.z = 0.812513911234;
    msg.phi = 0.655587813254;
    msg.theta = 0.52321977051;
    msg.psi = 0.0505103771536;
    msg.u = 0.305749358902;
    msg.v = 0.540403189699;
    msg.w = 0.977800099477;
    msg.vx = 0.180213073073;
    msg.vy = 0.793373681634;
    msg.vz = 0.176730416897;
    msg.p = 0.0672520426022;
    msg.q = 0.993200568795;
    msg.r = 0.372764094389;
    msg.depth = 0.473160266621;
    msg.alt = 0.649426622507;

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
    msg.setTimeStamp(0.185275518694);
    msg.setSource(25854U);
    msg.setSourceEntity(72U);
    msg.setDestination(5233U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.403690236411;
    msg.lon = 0.936013614854;
    msg.height = 0.897765530104;
    msg.x = 0.0606960146029;
    msg.y = 0.546085005198;
    msg.z = 0.370390738181;
    msg.phi = 0.459698840636;
    msg.theta = 0.996442975432;
    msg.psi = 0.486818438415;
    msg.u = 0.704008115293;
    msg.v = 0.557913338125;
    msg.w = 0.0573948721706;
    msg.vx = 0.260910483526;
    msg.vy = 0.476370506604;
    msg.vz = 0.456494930611;
    msg.p = 0.869279116187;
    msg.q = 0.726866900065;
    msg.r = 0.469707888886;
    msg.depth = 0.434007702951;
    msg.alt = 0.67118222568;

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
    msg.setTimeStamp(0.497569281243);
    msg.setSource(12092U);
    msg.setSourceEntity(213U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(59U);
    msg.x = 0.895491450207;
    msg.y = 0.67154647471;
    msg.z = 0.186635659807;

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
    msg.setTimeStamp(0.88870286106);
    msg.setSource(29440U);
    msg.setSourceEntity(96U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(245U);
    msg.x = 0.0492560009037;
    msg.y = 0.28948864949;
    msg.z = 0.266861049413;

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
    msg.setTimeStamp(0.330960560378);
    msg.setSource(28644U);
    msg.setSourceEntity(121U);
    msg.setDestination(60143U);
    msg.setDestinationEntity(163U);
    msg.x = 0.346542190216;
    msg.y = 0.277035226089;
    msg.z = 0.0469046312657;

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
    msg.setTimeStamp(0.831234928738);
    msg.setSource(618U);
    msg.setSourceEntity(114U);
    msg.setDestination(37345U);
    msg.setDestinationEntity(110U);
    msg.value = 0.388132620812;

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
    msg.setTimeStamp(0.128638291522);
    msg.setSource(41564U);
    msg.setSourceEntity(47U);
    msg.setDestination(621U);
    msg.setDestinationEntity(44U);
    msg.value = 0.144306169919;

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
    msg.setTimeStamp(0.626508510556);
    msg.setSource(42946U);
    msg.setSourceEntity(30U);
    msg.setDestination(62531U);
    msg.setDestinationEntity(140U);
    msg.value = 0.109864677586;

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
    msg.setTimeStamp(0.332107409786);
    msg.setSource(61961U);
    msg.setSourceEntity(114U);
    msg.setDestination(8653U);
    msg.setDestinationEntity(144U);
    msg.value = 0.440661563979;

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
    msg.setTimeStamp(0.605681958174);
    msg.setSource(60119U);
    msg.setSourceEntity(206U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(224U);
    msg.value = 0.838383299786;

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
    msg.setTimeStamp(0.768028349022);
    msg.setSource(62500U);
    msg.setSourceEntity(74U);
    msg.setDestination(25373U);
    msg.setDestinationEntity(166U);
    msg.value = 0.345478924811;

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
    msg.setTimeStamp(0.812768780903);
    msg.setSource(30421U);
    msg.setSourceEntity(212U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(83U);
    msg.x = 0.156200355978;
    msg.y = 0.267625699924;
    msg.z = 0.523857952604;
    msg.phi = 0.602321370988;
    msg.theta = 0.272223706221;
    msg.psi = 0.499365643766;
    msg.p = 0.178668491015;
    msg.q = 0.543295708344;
    msg.r = 0.690917235121;
    msg.u = 0.491911905771;
    msg.v = 0.771582647322;
    msg.w = 0.320134030207;
    msg.bias_psi = 0.176141933749;
    msg.bias_r = 0.855230484005;

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
    msg.setTimeStamp(0.770161319749);
    msg.setSource(51805U);
    msg.setSourceEntity(109U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(177U);
    msg.x = 0.490047018196;
    msg.y = 0.602249527093;
    msg.z = 0.109021078429;
    msg.phi = 0.789021097442;
    msg.theta = 0.440876455416;
    msg.psi = 0.846845021788;
    msg.p = 0.354889902634;
    msg.q = 0.754341789593;
    msg.r = 0.240176871951;
    msg.u = 0.0690838491502;
    msg.v = 0.455864387864;
    msg.w = 0.577776539877;
    msg.bias_psi = 0.837001079685;
    msg.bias_r = 0.302708494068;

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
    msg.setTimeStamp(0.921070480433);
    msg.setSource(32726U);
    msg.setSourceEntity(14U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(60U);
    msg.x = 0.987387834212;
    msg.y = 0.163342119463;
    msg.z = 0.663494020163;
    msg.phi = 0.198800700897;
    msg.theta = 0.55819648149;
    msg.psi = 0.872664674708;
    msg.p = 0.903840028507;
    msg.q = 0.22133925979;
    msg.r = 0.250702050348;
    msg.u = 0.470576442541;
    msg.v = 0.0746805344472;
    msg.w = 0.340878179629;
    msg.bias_psi = 0.257016536575;
    msg.bias_r = 0.769418976079;

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
    msg.setTimeStamp(0.192265170941);
    msg.setSource(32260U);
    msg.setSourceEntity(151U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.65413152128;
    msg.bias_r = 0.472650079538;
    msg.cog = 0.843314364905;
    msg.cyaw = 0.455838035645;
    msg.lbl_rej_level = 0.620184444505;
    msg.gps_rej_level = 0.868041487894;
    msg.custom_x = 0.589615133898;
    msg.custom_y = 0.896038311184;
    msg.custom_z = 0.570434139578;

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
    msg.setTimeStamp(0.841917677627);
    msg.setSource(25026U);
    msg.setSourceEntity(19U);
    msg.setDestination(32123U);
    msg.setDestinationEntity(174U);
    msg.bias_psi = 0.418956311417;
    msg.bias_r = 0.846386385646;
    msg.cog = 0.646233366865;
    msg.cyaw = 0.104711200116;
    msg.lbl_rej_level = 0.749300837184;
    msg.gps_rej_level = 0.59696887074;
    msg.custom_x = 0.293734851087;
    msg.custom_y = 0.913442217465;
    msg.custom_z = 0.570535322928;

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
    msg.setTimeStamp(0.407620673962);
    msg.setSource(6404U);
    msg.setSourceEntity(204U);
    msg.setDestination(44616U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.477611184204;
    msg.bias_r = 0.228317751357;
    msg.cog = 0.0155333401994;
    msg.cyaw = 0.886718393301;
    msg.lbl_rej_level = 0.761526174638;
    msg.gps_rej_level = 0.473431984242;
    msg.custom_x = 0.80255503407;
    msg.custom_y = 0.132250351226;
    msg.custom_z = 0.437051769844;

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
    msg.setTimeStamp(0.0386466018185);
    msg.setSource(27289U);
    msg.setSourceEntity(53U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.999893344197;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.167116812876);
    msg.setSource(49441U);
    msg.setSourceEntity(203U);
    msg.setDestination(18031U);
    msg.setDestinationEntity(249U);
    msg.utc_time = 0.535504562829;
    msg.reason = 218U;

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
    msg.setTimeStamp(0.828029299494);
    msg.setSource(2984U);
    msg.setSourceEntity(82U);
    msg.setDestination(20785U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.427633105875;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.53908339484);
    msg.setSource(30280U);
    msg.setSourceEntity(238U);
    msg.setDestination(28247U);
    msg.setDestinationEntity(73U);
    msg.id = 33U;
    msg.range = 0.39590344951;
    msg.acceptance = 109U;

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
    msg.setTimeStamp(0.579280911455);
    msg.setSource(23060U);
    msg.setSourceEntity(131U);
    msg.setDestination(56182U);
    msg.setDestinationEntity(13U);
    msg.id = 168U;
    msg.range = 0.877724931153;
    msg.acceptance = 169U;

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
    msg.setTimeStamp(0.557621040112);
    msg.setSource(6128U);
    msg.setSourceEntity(242U);
    msg.setDestination(64647U);
    msg.setDestinationEntity(44U);
    msg.id = 172U;
    msg.range = 0.765285799185;
    msg.acceptance = 91U;

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
    msg.setTimeStamp(0.176250396972);
    msg.setSource(10124U);
    msg.setSourceEntity(50U);
    msg.setDestination(52449U);
    msg.setDestinationEntity(133U);
    msg.type = 115U;
    msg.reason = 32U;
    msg.value = 0.629422335081;
    msg.timestep = 0.0252854446426;

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
    msg.setTimeStamp(0.99229181107);
    msg.setSource(11747U);
    msg.setSourceEntity(100U);
    msg.setDestination(51772U);
    msg.setDestinationEntity(152U);
    msg.type = 181U;
    msg.reason = 191U;
    msg.value = 0.291750649895;
    msg.timestep = 0.795878143697;

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
    msg.setTimeStamp(0.675721834083);
    msg.setSource(1153U);
    msg.setSourceEntity(117U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(6U);
    msg.type = 148U;
    msg.reason = 100U;
    msg.value = 0.965212920443;
    msg.timestep = 0.018842056338;

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
    msg.setTimeStamp(0.62154266682);
    msg.setSource(30535U);
    msg.setSourceEntity(251U);
    msg.setDestination(52621U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.265291467957);
    msg.setSource(15416U);
    msg.setSourceEntity(25U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.559565354912);
    msg.setSource(47701U);
    msg.setSourceEntity(88U);
    msg.setDestination(50670U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.514125107145);
    msg.setSource(35093U);
    msg.setSourceEntity(170U);
    msg.setDestination(60451U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ATJCRFYPQRVSGQZVEXDFVNZZZJQQZLEUH");
    tmp_msg_0.lat = 0.86578436723;
    tmp_msg_0.lon = 0.186704561323;
    tmp_msg_0.depth = 0.313928238257;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 26U;
    tmp_msg_0.transponder_delay = 17U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.997986117126;
    msg.y = 0.359193287195;
    msg.var_x = 0.22930885031;
    msg.var_y = 0.509466470334;
    msg.distance = 0.108969363811;

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
    msg.setTimeStamp(0.882155702308);
    msg.setSource(29109U);
    msg.setSourceEntity(234U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(156U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ONXLJPXZKEAZLMPNFNPLIQWOWTDGXDOXHBBMPZPSGYQPSVBCTKHWEWTWKJJIQLXOEFWRXLCESGLXVDQKVRUJDBYKRGXMJPIXVRLVPACKYOWXBHKLFEJBQOGTJUANZCWYDIQBJASHCSEGSDDIDBMTHUCQVIPUYSHCRUFAAASYJEMUMTUDYFOWMQERNIMRNGVMWGINRCRPMCOZZJNLBZFRUGIKYVHTEQFNHTLEFHZDOVFQUYFICAAAZTNYSZ");
    tmp_msg_0.lat = 0.113409304768;
    tmp_msg_0.lon = 0.817762206331;
    tmp_msg_0.depth = 0.590711859505;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 119U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.67459254402;
    msg.y = 0.357440080959;
    msg.var_x = 0.218332136973;
    msg.var_y = 0.249587536635;
    msg.distance = 0.863441620992;

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
    msg.setTimeStamp(0.555350079717);
    msg.setSource(25579U);
    msg.setSourceEntity(141U);
    msg.setDestination(39602U);
    msg.setDestinationEntity(145U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UPTORWIGYHHLSGNLFRSKCDPRHHXQBCCJUYV");
    tmp_msg_0.lat = 0.0798829286254;
    tmp_msg_0.lon = 0.886657735357;
    tmp_msg_0.depth = 0.36439025995;
    tmp_msg_0.query_channel = 210U;
    tmp_msg_0.reply_channel = 161U;
    tmp_msg_0.transponder_delay = 226U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.995984607573;
    msg.y = 0.990362867617;
    msg.var_x = 0.726753490588;
    msg.var_y = 0.239914030498;
    msg.distance = 0.30684174514;

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
    msg.setTimeStamp(0.561838160621);
    msg.setSource(48298U);
    msg.setSourceEntity(169U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(143U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.945528011709);
    msg.setSource(51209U);
    msg.setSourceEntity(186U);
    msg.setDestination(16261U);
    msg.setDestinationEntity(175U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.197511409382);
    msg.setSource(56071U);
    msg.setSourceEntity(127U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(126U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.975769485056);
    msg.setSource(63672U);
    msg.setSourceEntity(86U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(100U);
    msg.x = 0.45868348603;
    msg.y = 0.359347198773;
    msg.z = 0.592566260232;

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
    msg.setTimeStamp(0.833162698694);
    msg.setSource(26704U);
    msg.setSourceEntity(102U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(6U);
    msg.x = 0.838667943188;
    msg.y = 0.937796018298;
    msg.z = 0.255180982003;

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
    msg.setTimeStamp(0.839781058161);
    msg.setSource(6771U);
    msg.setSourceEntity(244U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(26U);
    msg.x = 0.632516705225;
    msg.y = 0.813452605405;
    msg.z = 0.380926325488;

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
    msg.setTimeStamp(0.57067658652);
    msg.setSource(6114U);
    msg.setSourceEntity(153U);
    msg.setDestination(29285U);
    msg.setDestinationEntity(93U);
    msg.value = 0.369789133255;

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
    msg.setTimeStamp(0.402132703657);
    msg.setSource(50541U);
    msg.setSourceEntity(111U);
    msg.setDestination(60929U);
    msg.setDestinationEntity(64U);
    msg.value = 0.743952791046;

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
    msg.setTimeStamp(0.553884856523);
    msg.setSource(44724U);
    msg.setSourceEntity(160U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(88U);
    msg.value = 0.303949099498;

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
    msg.setTimeStamp(0.734124921761);
    msg.setSource(60422U);
    msg.setSourceEntity(243U);
    msg.setDestination(6117U);
    msg.setDestinationEntity(229U);
    msg.value = 0.627496979722;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.0711332749591);
    msg.setSource(29793U);
    msg.setSourceEntity(38U);
    msg.setDestination(49416U);
    msg.setDestinationEntity(109U);
    msg.value = 0.141031609301;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.0278867577092);
    msg.setSource(19456U);
    msg.setSourceEntity(14U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(132U);
    msg.value = 0.931928459418;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.408706648293);
    msg.setSource(40496U);
    msg.setSourceEntity(91U);
    msg.setDestination(64555U);
    msg.setDestinationEntity(31U);
    msg.value = 0.811452926817;
    msg.speed_units = 209U;

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
    msg.setTimeStamp(0.255485862493);
    msg.setSource(14713U);
    msg.setSourceEntity(49U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(29U);
    msg.value = 0.400702975925;
    msg.speed_units = 193U;

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
    msg.setTimeStamp(0.38298502174);
    msg.setSource(23268U);
    msg.setSourceEntity(159U);
    msg.setDestination(13225U);
    msg.setDestinationEntity(50U);
    msg.value = 0.881662446991;
    msg.speed_units = 175U;

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
    msg.setTimeStamp(0.859594190811);
    msg.setSource(11366U);
    msg.setSourceEntity(186U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(210U);
    msg.value = 0.787471887544;

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
    msg.setTimeStamp(0.0433933297584);
    msg.setSource(19481U);
    msg.setSourceEntity(59U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(106U);
    msg.value = 0.219596966279;

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
    msg.setTimeStamp(0.283198537954);
    msg.setSource(21307U);
    msg.setSourceEntity(173U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(127U);
    msg.value = 0.919664158691;

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
    msg.setTimeStamp(0.515610911397);
    msg.setSource(51331U);
    msg.setSourceEntity(181U);
    msg.setDestination(33488U);
    msg.setDestinationEntity(7U);
    msg.value = 0.264871740054;

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
    msg.setTimeStamp(0.407366823046);
    msg.setSource(3718U);
    msg.setSourceEntity(121U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(162U);
    msg.value = 0.200764476438;

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
    msg.setTimeStamp(0.0883329605161);
    msg.setSource(31602U);
    msg.setSourceEntity(113U);
    msg.setDestination(63461U);
    msg.setDestinationEntity(100U);
    msg.value = 0.201095697352;

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
    msg.setTimeStamp(0.289065991453);
    msg.setSource(40223U);
    msg.setSourceEntity(118U);
    msg.setDestination(7340U);
    msg.setDestinationEntity(176U);
    msg.value = 0.852161680422;

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
    msg.setTimeStamp(0.447717728757);
    msg.setSource(63110U);
    msg.setSourceEntity(83U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(66U);
    msg.value = 0.27017265657;

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
    msg.setTimeStamp(0.307254730822);
    msg.setSource(9325U);
    msg.setSourceEntity(194U);
    msg.setDestination(377U);
    msg.setDestinationEntity(117U);
    msg.value = 0.992409821234;

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
    msg.setTimeStamp(0.999300850558);
    msg.setSource(33581U);
    msg.setSourceEntity(153U);
    msg.setDestination(53482U);
    msg.setDestinationEntity(95U);
    msg.start_lat = 0.127128114789;
    msg.start_lon = 0.379307507236;
    msg.start_z = 0.541392887995;
    msg.start_z_units = 163U;
    msg.end_lat = 0.691125507921;
    msg.end_lon = 0.246111109836;
    msg.end_z = 0.607820170316;
    msg.end_z_units = 187U;
    msg.speed = 0.848652540763;
    msg.speed_units = 151U;
    msg.lradius = 0.6235954645;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.182764802442);
    msg.setSource(45301U);
    msg.setSourceEntity(81U);
    msg.setDestination(32667U);
    msg.setDestinationEntity(73U);
    msg.start_lat = 0.878978028611;
    msg.start_lon = 0.295143560995;
    msg.start_z = 0.502057301885;
    msg.start_z_units = 160U;
    msg.end_lat = 0.467848409781;
    msg.end_lon = 0.768500480176;
    msg.end_z = 0.911147405783;
    msg.end_z_units = 10U;
    msg.speed = 0.963236074762;
    msg.speed_units = 148U;
    msg.lradius = 0.66952845637;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.454200598949);
    msg.setSource(56409U);
    msg.setSourceEntity(112U);
    msg.setDestination(22600U);
    msg.setDestinationEntity(153U);
    msg.start_lat = 0.128526426065;
    msg.start_lon = 0.17596128191;
    msg.start_z = 0.144663441142;
    msg.start_z_units = 85U;
    msg.end_lat = 0.540579344333;
    msg.end_lon = 0.932409654448;
    msg.end_z = 0.85053379115;
    msg.end_z_units = 29U;
    msg.speed = 0.249120005764;
    msg.speed_units = 180U;
    msg.lradius = 0.771331957997;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.419416260911);
    msg.setSource(59578U);
    msg.setSourceEntity(11U);
    msg.setDestination(32731U);
    msg.setDestinationEntity(64U);
    msg.x = 0.490818533556;
    msg.y = 0.488657700816;
    msg.z = 0.773860642353;
    msg.k = 0.686000548785;
    msg.m = 0.161077439894;
    msg.n = 0.496634258132;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.240438153695);
    msg.setSource(606U);
    msg.setSourceEntity(42U);
    msg.setDestination(50251U);
    msg.setDestinationEntity(163U);
    msg.x = 0.802452880313;
    msg.y = 0.968550267658;
    msg.z = 0.569620656236;
    msg.k = 0.89839749582;
    msg.m = 0.597226222065;
    msg.n = 0.699989601362;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.660442302336);
    msg.setSource(22478U);
    msg.setSourceEntity(70U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(243U);
    msg.x = 0.397740191364;
    msg.y = 0.870044462321;
    msg.z = 0.321586099604;
    msg.k = 0.0339174710559;
    msg.m = 0.614487417516;
    msg.n = 0.982255409315;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.47042394005);
    msg.setSource(50163U);
    msg.setSourceEntity(96U);
    msg.setDestination(50123U);
    msg.setDestinationEntity(30U);
    msg.value = 0.278363117751;

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
    msg.setTimeStamp(0.107758143613);
    msg.setSource(60730U);
    msg.setSourceEntity(136U);
    msg.setDestination(59154U);
    msg.setDestinationEntity(19U);
    msg.value = 0.158296942384;

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
    msg.setTimeStamp(0.918343775505);
    msg.setSource(13717U);
    msg.setSourceEntity(243U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(120U);
    msg.value = 0.833079204819;

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
    msg.setTimeStamp(0.271675123379);
    msg.setSource(50118U);
    msg.setSourceEntity(158U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(71U);
    msg.u = 0.607948120567;
    msg.v = 0.575611459312;
    msg.w = 0.370396149567;
    msg.p = 0.331890418078;
    msg.q = 0.323224389884;
    msg.r = 0.00110522881315;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.19921236488);
    msg.setSource(42368U);
    msg.setSourceEntity(73U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(99U);
    msg.u = 0.652722538858;
    msg.v = 0.088518451876;
    msg.w = 0.160952498101;
    msg.p = 0.882906334522;
    msg.q = 0.457654558604;
    msg.r = 0.104654270752;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.616889981521);
    msg.setSource(58058U);
    msg.setSourceEntity(81U);
    msg.setDestination(42865U);
    msg.setDestinationEntity(142U);
    msg.u = 0.4121344337;
    msg.v = 0.619704458412;
    msg.w = 0.781887325629;
    msg.p = 0.484661760947;
    msg.q = 0.757125074467;
    msg.r = 0.831663897171;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.0061651189984);
    msg.setSource(41823U);
    msg.setSourceEntity(128U);
    msg.setDestination(59121U);
    msg.setDestinationEntity(92U);
    msg.start_lat = 0.968324682986;
    msg.start_lon = 0.492253984355;
    msg.start_z = 0.393119679075;
    msg.start_z_units = 152U;
    msg.end_lat = 0.730915335781;
    msg.end_lon = 0.146869676821;
    msg.end_z = 0.455748708335;
    msg.end_z_units = 185U;
    msg.lradius = 0.539520895035;
    msg.flags = 218U;
    msg.x = 0.225000018846;
    msg.y = 0.439135324682;
    msg.z = 0.933504203616;
    msg.vx = 0.388981596823;
    msg.vy = 0.859857846117;
    msg.vz = 0.638571741778;
    msg.course_error = 0.829508972147;
    msg.eta = 17483U;

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
    msg.setTimeStamp(0.329622216232);
    msg.setSource(8170U);
    msg.setSourceEntity(116U);
    msg.setDestination(42904U);
    msg.setDestinationEntity(54U);
    msg.start_lat = 0.924888661236;
    msg.start_lon = 0.595417704169;
    msg.start_z = 0.512742674353;
    msg.start_z_units = 249U;
    msg.end_lat = 0.295174859998;
    msg.end_lon = 0.236681571548;
    msg.end_z = 0.629497538506;
    msg.end_z_units = 195U;
    msg.lradius = 0.697907990818;
    msg.flags = 183U;
    msg.x = 0.0469513099508;
    msg.y = 0.144066645043;
    msg.z = 0.164174159552;
    msg.vx = 0.187923952773;
    msg.vy = 0.978112421926;
    msg.vz = 0.851155843667;
    msg.course_error = 0.20785830191;
    msg.eta = 50952U;

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
    msg.setTimeStamp(0.88483178214);
    msg.setSource(19075U);
    msg.setSourceEntity(1U);
    msg.setDestination(61565U);
    msg.setDestinationEntity(192U);
    msg.start_lat = 0.361419599961;
    msg.start_lon = 0.0261488471784;
    msg.start_z = 0.00583891350654;
    msg.start_z_units = 236U;
    msg.end_lat = 0.0875093399486;
    msg.end_lon = 0.575892801718;
    msg.end_z = 0.257673791679;
    msg.end_z_units = 91U;
    msg.lradius = 0.824740861401;
    msg.flags = 70U;
    msg.x = 0.889027578541;
    msg.y = 0.781638978247;
    msg.z = 0.110141433958;
    msg.vx = 0.369095708909;
    msg.vy = 0.028747431593;
    msg.vz = 0.258720845261;
    msg.course_error = 0.504263333239;
    msg.eta = 37872U;

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
    msg.setTimeStamp(0.891840389297);
    msg.setSource(59932U);
    msg.setSourceEntity(160U);
    msg.setDestination(40455U);
    msg.setDestinationEntity(33U);
    msg.k = 0.925894461157;
    msg.m = 0.518735282412;
    msg.n = 0.22919436399;

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
    msg.setTimeStamp(0.728266159076);
    msg.setSource(60708U);
    msg.setSourceEntity(152U);
    msg.setDestination(53668U);
    msg.setDestinationEntity(150U);
    msg.k = 0.674840115048;
    msg.m = 0.345954552661;
    msg.n = 0.246397761994;

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
    msg.setTimeStamp(0.00503090635648);
    msg.setSource(18253U);
    msg.setSourceEntity(131U);
    msg.setDestination(9760U);
    msg.setDestinationEntity(47U);
    msg.k = 0.0223283920239;
    msg.m = 0.538290820111;
    msg.n = 0.844302550052;

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
    msg.setTimeStamp(0.315301296496);
    msg.setSource(5148U);
    msg.setSourceEntity(176U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(251U);
    msg.p = 0.481101621077;
    msg.i = 0.469588299163;
    msg.d = 0.178932959888;
    msg.a = 0.490566561449;

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
    msg.setTimeStamp(0.639206040236);
    msg.setSource(56907U);
    msg.setSourceEntity(142U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(103U);
    msg.p = 0.522282208995;
    msg.i = 0.889312567758;
    msg.d = 0.41835364908;
    msg.a = 0.429467471828;

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
    msg.setTimeStamp(0.843828456998);
    msg.setSource(9035U);
    msg.setSourceEntity(181U);
    msg.setDestination(48202U);
    msg.setDestinationEntity(100U);
    msg.p = 0.988212877069;
    msg.i = 0.166214334071;
    msg.d = 0.438379769023;
    msg.a = 0.702109596563;

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
    msg.setTimeStamp(0.0260561947781);
    msg.setSource(36316U);
    msg.setSourceEntity(188U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(191U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.436460582888);
    msg.setSource(13548U);
    msg.setSourceEntity(145U);
    msg.setDestination(13237U);
    msg.setDestinationEntity(11U);
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
    msg.setTimeStamp(0.3404292062);
    msg.setSource(17408U);
    msg.setSourceEntity(205U);
    msg.setDestination(52158U);
    msg.setDestinationEntity(82U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.367444598225);
    msg.setSource(59079U);
    msg.setSourceEntity(188U);
    msg.setDestination(34253U);
    msg.setDestinationEntity(209U);
    msg.timeout = 49821U;
    msg.lat = 0.281644300368;
    msg.lon = 0.569685385938;
    msg.z = 0.645898693987;
    msg.z_units = 23U;
    msg.speed = 0.104983510688;
    msg.speed_units = 150U;
    msg.roll = 0.22057439668;
    msg.pitch = 0.303965256672;
    msg.yaw = 0.597109971967;
    msg.custom.assign("VQOEBPYLBFVCVDEABZEMSFFZJLXSVRWKFEAAOQWLMHZVUYXNDMMGKQINFRBCTKNPRSRSKJNLITDHYEDSYIAGTQXOPDPCZOAZAISTXBJZRJGUJWHQLBWTGLKWXMUQAHBJCADVOJDYVNXRJVZHOQHFFUPJGWGOWYYXLCKDNZJPLDUHMHRSILCRMKWOYZEDUFFIHXGYOFEUTU");

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
    msg.setTimeStamp(0.545905344808);
    msg.setSource(3663U);
    msg.setSourceEntity(222U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(230U);
    msg.timeout = 31577U;
    msg.lat = 0.632149287676;
    msg.lon = 0.954926322734;
    msg.z = 0.16140334909;
    msg.z_units = 244U;
    msg.speed = 0.21067768201;
    msg.speed_units = 249U;
    msg.roll = 0.147518902531;
    msg.pitch = 0.119337506241;
    msg.yaw = 0.260022725708;
    msg.custom.assign("IWYQWZCFWCIMMRDPENQSGKIRGULRHEJOVECWOMISATTUFSFRAALOQZJONUFYLFSMAOXCXTKLPTCVSMHVOLJVLSCTXTNNPXYXNRWGD");

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
    msg.setTimeStamp(0.470761481902);
    msg.setSource(55629U);
    msg.setSourceEntity(51U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(223U);
    msg.timeout = 28278U;
    msg.lat = 0.46643804008;
    msg.lon = 0.530079541152;
    msg.z = 0.429252571262;
    msg.z_units = 118U;
    msg.speed = 0.515126169724;
    msg.speed_units = 75U;
    msg.roll = 0.0340988149189;
    msg.pitch = 0.691030238739;
    msg.yaw = 0.0159321420533;
    msg.custom.assign("TJGEXEXMPEWRUILIZYJSWJNAWFCRYPBDEDOGBGBSIKLORHXVVTIUOGWKJAVFUBCQZEIDCSIWMZJVKQFOFXVMLAHTXQYIXZAQZMZSWLNFRAAZSCUVFUPAONNQBPHRTNEEKGBVLFXPEDNUYYBJSNHDELZHOOSKVYSIHTBYRMHMJUDLJPPKTKDQAPHCR");

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
    msg.setTimeStamp(0.207817099924);
    msg.setSource(51611U);
    msg.setSourceEntity(198U);
    msg.setDestination(57004U);
    msg.setDestinationEntity(208U);
    msg.timeout = 21773U;
    msg.lat = 0.412123222952;
    msg.lon = 0.432650056427;
    msg.z = 0.169763285736;
    msg.z_units = 210U;
    msg.speed = 0.018777319565;
    msg.speed_units = 147U;
    msg.duration = 6760U;
    msg.radius = 0.0238197753939;
    msg.flags = 173U;
    msg.custom.assign("RYLNLMDXKYKAJYWWWYVLZKNGDIHTFUDWZBDRIND");

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
    msg.setTimeStamp(0.214438302269);
    msg.setSource(25821U);
    msg.setSourceEntity(26U);
    msg.setDestination(696U);
    msg.setDestinationEntity(105U);
    msg.timeout = 42799U;
    msg.lat = 0.855763117426;
    msg.lon = 0.60262660358;
    msg.z = 0.550799743754;
    msg.z_units = 225U;
    msg.speed = 0.814321624334;
    msg.speed_units = 118U;
    msg.duration = 38200U;
    msg.radius = 0.788089128279;
    msg.flags = 226U;
    msg.custom.assign("SYJNPKCUODEGRJYFSGEZGCLWSSEYCNPSHMAEHUABFOTBIKXQFHVOFOXSQQXKNALDJPQYLTKHDECRTJQUIZZXEKKVOXLQWFOWYFVBYCWZUYGCIECBXIKOFHWTSMBBQIZBVLVTDMPGXBFOQLBPWNHJDAUHRLA");

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
    msg.setTimeStamp(0.259918454471);
    msg.setSource(46965U);
    msg.setSourceEntity(66U);
    msg.setDestination(22257U);
    msg.setDestinationEntity(57U);
    msg.timeout = 11719U;
    msg.lat = 0.161710886778;
    msg.lon = 0.555177437438;
    msg.z = 0.771579199827;
    msg.z_units = 3U;
    msg.speed = 0.894749238964;
    msg.speed_units = 109U;
    msg.duration = 26395U;
    msg.radius = 0.275609945711;
    msg.flags = 26U;
    msg.custom.assign("YPMOCZSKFBBEGUSSBBIJEQODLMBYKCYDXBFPJHYMVMTJDYCNJYCAGJECUCSZUUBGIRSNPPMTOKBYAYFOFWQGXBGDZICUFUQWIARFVRSVMHJOXCFXVCMVHXKVOKDLSDTCPGVADSDRNSRWQGOFAPZLHMPIRNLEAFMZDWTWWRAKMKNHVKELNZULLWTWKOQPHEQWHVLJRYGTXHKGQXSNARZNPTHVANTZRJXIJIZIFIDTXHBEQNGUU");

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
    msg.setTimeStamp(0.319180065249);
    msg.setSource(13950U);
    msg.setSourceEntity(174U);
    msg.setDestination(26957U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("OMISJGMLFOQYKWRRMRBPJIWVVDSFLBEAHPCJPEPNQDHZSXLNSBUFJCAYTPMXSUMKKIDATBRVPSRXOVSIWFSVCGWLHWHXPKZEYWQHODAFTQYLCMHGJTRIRZICNCYLDCJOOREWBIIQXNFDEBENKNGGUEZYOGUUXIOZBMTCYDYPWFOLKUFYLAHMMV");

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
    msg.setTimeStamp(0.771572158032);
    msg.setSource(48786U);
    msg.setSourceEntity(2U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(190U);
    msg.custom.assign("NRWGHLFKRQJHYEZSVGIMYQNAT");

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
    msg.setTimeStamp(0.0838367364251);
    msg.setSource(12783U);
    msg.setSourceEntity(61U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("CJRQVXMGNTUNQXRSOUJEHPXRRMCTYDAUMIYUSWJJQ");

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
    msg.setTimeStamp(0.548575724461);
    msg.setSource(25297U);
    msg.setSourceEntity(80U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(117U);
    msg.timeout = 21305U;
    msg.lat = 0.303251800837;
    msg.lon = 0.00159033819666;
    msg.z = 0.732548184162;
    msg.z_units = 192U;
    msg.duration = 45969U;
    msg.speed = 0.788037583851;
    msg.speed_units = 41U;
    msg.type = 99U;
    msg.radius = 0.0506718221322;
    msg.length = 0.58573374275;
    msg.bearing = 0.401883436979;
    msg.direction = 86U;
    msg.custom.assign("HGXBQLYNCVAWDMIXALEOGQAIYTJILJICLMCTLVEZVCECVYPWPVPJZWGYODPKYPNRDGLQFRCVTNALXXBSSWNZJBMUSZZVLSFWHXBEJNI");

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
    msg.setTimeStamp(0.641235602221);
    msg.setSource(54523U);
    msg.setSourceEntity(172U);
    msg.setDestination(56589U);
    msg.setDestinationEntity(158U);
    msg.timeout = 18313U;
    msg.lat = 0.649437602397;
    msg.lon = 0.65827823219;
    msg.z = 0.804479096098;
    msg.z_units = 150U;
    msg.duration = 19231U;
    msg.speed = 0.728033000004;
    msg.speed_units = 73U;
    msg.type = 125U;
    msg.radius = 0.726595641323;
    msg.length = 0.844052167449;
    msg.bearing = 0.102738635078;
    msg.direction = 35U;
    msg.custom.assign("KLJNUGPTPQUSCVWJXVSTTWDCWFVPJCLVFYHADPLGZMEZ");

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
    msg.setTimeStamp(0.719793642236);
    msg.setSource(23167U);
    msg.setSourceEntity(57U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(56U);
    msg.timeout = 27104U;
    msg.lat = 0.256586593901;
    msg.lon = 0.555702608173;
    msg.z = 0.271863330443;
    msg.z_units = 234U;
    msg.duration = 62181U;
    msg.speed = 0.0529671783077;
    msg.speed_units = 164U;
    msg.type = 12U;
    msg.radius = 0.0501984367383;
    msg.length = 0.71192387453;
    msg.bearing = 0.529520346212;
    msg.direction = 127U;
    msg.custom.assign("NZHGJQMQJYVRFBSLJYSCBHDGXNTTTXEWSEBPYPJVQGHDRBWCFIOZVCEBPARPZUSBOHXMPFDBIXFJPQNITIFLSTHLLAYQEHAKDMAKNTMVVDFEFOCKFCOCWGKAIKRIYYUMNWKVGTFXJKXDJLLPWJIODAAQYCNSUV");

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
    msg.setTimeStamp(0.507526710387);
    msg.setSource(1456U);
    msg.setSourceEntity(205U);
    msg.setDestination(44443U);
    msg.setDestinationEntity(233U);
    msg.duration = 65430U;
    msg.custom.assign("FBKHXRIBPVXKHBJONAFQLWPIZLMJUICGDDSDLXLWBFDRTBULEKQQSPTKANMSDNQHYRDFVKQIEOBDJEGJMXRUXFUJGAMZELIBNCHYYOGZASJDFZIWFROLMWTCRCMHGGJEUDEUHSGSECMSYXOCYZOVATMFXKCNIOVTQWPPSOKTPYQBZHBTWDALUXNKI");

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
    msg.setTimeStamp(0.539472025716);
    msg.setSource(37407U);
    msg.setSourceEntity(182U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(121U);
    msg.duration = 63674U;
    msg.custom.assign("IUFIPAIZJZJQSZOSNGSOWZICDKKYRLSEQHDLWPBJYMTOSFBUGKJVAYLDWMKXPXVLWAYZCRBPUHMLUHKIAHWAFTAFECBOXFHGUBNWPJPBOTJBETQDVXOZCHLKWXCJITGITREVZDAWRIDMMMTNTXEPOZQHEGKYYZSFRNVEVSVVJTYURXUWQMBMIBVTRNCXYQSGHJCXMOQEUDNCKJNXFFKYADPHANKLHLOGIQZUAEFWOGRQCSLRSEM");

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
    msg.setTimeStamp(0.357456312233);
    msg.setSource(6903U);
    msg.setSourceEntity(156U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(193U);
    msg.duration = 7763U;
    msg.custom.assign("UAPJCSEZJIQFWGEMADPNWXTPFHCNWAFVBOUYEWABHJVHQJUUTRMOZMJEORASKRWKHMSCCGXSYYHHKF");

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
    msg.setTimeStamp(0.781904138237);
    msg.setSource(56066U);
    msg.setSourceEntity(60U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(188U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.318515553614;
    msg.control.set(tmp_msg_0);
    msg.duration = 11729U;
    msg.custom.assign("ELETWSDPHBDXNXFPZOLYWVLJTDRPTTRADLRCIHMVVSUAZRUCOZGDOBMQHGRAZVSMOKYACFKHXWSPWKQOFQENKKCGZRQBYABHEDHULHRUTSTIPFMFEBNOVYHISWUICSGYQGUAEQJPWBNJVLLWJZTEXDDPZ");

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
    msg.setTimeStamp(0.0181621573339);
    msg.setSource(65171U);
    msg.setSourceEntity(179U);
    msg.setDestination(23935U);
    msg.setDestinationEntity(163U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.898101408461;
    msg.control.set(tmp_msg_0);
    msg.duration = 62962U;
    msg.custom.assign("VERBJIZJURLPCQFTISKJZVTJBVQVAHICOCWEEQBSVMNZAIYKOGNGXLXAPVYXHOLMVOEAXNTFJUBTWYKLZYRTOXMASXWQNVEQWOSKIIPDFEQCSDXODBRPCPDLUXGTRNCLHFKINLJYQQUSJ");

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
    msg.setTimeStamp(0.433431692502);
    msg.setSource(10400U);
    msg.setSourceEntity(81U);
    msg.setDestination(13309U);
    msg.setDestinationEntity(70U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.11006849359;
    msg.control.set(tmp_msg_0);
    msg.duration = 17366U;
    msg.custom.assign("ZVBMQXNIOEZOVNJMQMDFOYVGQXALYSUQROTEJKGWFGFIERSXPSSQUANGJICHE");

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
    msg.setTimeStamp(0.536323280968);
    msg.setSource(39270U);
    msg.setSourceEntity(1U);
    msg.setDestination(40065U);
    msg.setDestinationEntity(39U);
    msg.timeout = 22164U;
    msg.lat = 0.977961296163;
    msg.lon = 0.866188452093;
    msg.z = 0.711919323241;
    msg.z_units = 122U;
    msg.speed = 0.510312450589;
    msg.speed_units = 96U;
    msg.bearing = 0.942517913412;
    msg.cross_angle = 0.131029947289;
    msg.width = 0.0143862237732;
    msg.length = 0.937433868565;
    msg.hstep = 0.136912964391;
    msg.coff = 183U;
    msg.alternation = 144U;
    msg.flags = 238U;
    msg.custom.assign("OCEDXEDBYHEQGJQBZQCSLKYMLBXAPHIQHPIODJCBRRSGPFZFGIXVIDDZPOTXMIPZHYFVLFKSJRKZLLVHFTDMOCVMDATUEWJLUVOVEZXEOYTKYFAWUCOF");

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
    msg.setTimeStamp(0.286912135166);
    msg.setSource(54395U);
    msg.setSourceEntity(119U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(122U);
    msg.timeout = 9454U;
    msg.lat = 0.216934373617;
    msg.lon = 0.954675070185;
    msg.z = 0.293718503423;
    msg.z_units = 123U;
    msg.speed = 0.419487576089;
    msg.speed_units = 250U;
    msg.bearing = 0.375984018564;
    msg.cross_angle = 0.653506049081;
    msg.width = 0.319004394616;
    msg.length = 0.422956749416;
    msg.hstep = 0.0563188839642;
    msg.coff = 235U;
    msg.alternation = 26U;
    msg.flags = 214U;
    msg.custom.assign("BUZQPOKCIKAGDNOLWEPIULHBCIWJMVVWSCVSQXHGTBMFEVLVYFPYOJR");

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
    msg.setTimeStamp(0.365923397101);
    msg.setSource(59464U);
    msg.setSourceEntity(172U);
    msg.setDestination(34782U);
    msg.setDestinationEntity(75U);
    msg.timeout = 3807U;
    msg.lat = 0.404641724495;
    msg.lon = 0.228155062574;
    msg.z = 0.937059555081;
    msg.z_units = 10U;
    msg.speed = 0.0875634256248;
    msg.speed_units = 5U;
    msg.bearing = 0.800152178834;
    msg.cross_angle = 0.396777945874;
    msg.width = 0.137552022659;
    msg.length = 0.382766463083;
    msg.hstep = 0.118598404305;
    msg.coff = 142U;
    msg.alternation = 151U;
    msg.flags = 126U;
    msg.custom.assign("CLQDWPVILEGXKPGWFAKNPRDKACEZFZCBPDVQKACOOBCSHNVYUIHBJWSLDCRAJSLIYDHJVGHOCGJVAUMUKOZUYEIGSMEAVXRHQIYRNGIERNTXDYPFOUHZSWSHQLIWQMAURFIBGGJNLWATYFWGUVMFQUFZONVPIFEYJHBTDLQREUASZTOMBDJKQZST");

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
    msg.setTimeStamp(0.557427204554);
    msg.setSource(34161U);
    msg.setSourceEntity(241U);
    msg.setDestination(537U);
    msg.setDestinationEntity(244U);
    msg.timeout = 49198U;
    msg.lat = 0.851159438486;
    msg.lon = 0.883383592389;
    msg.z = 0.724406017696;
    msg.z_units = 32U;
    msg.speed = 0.435910085349;
    msg.speed_units = 103U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.034691482408;
    tmp_msg_0.y = 0.831208755666;
    tmp_msg_0.z = 0.102615116813;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MAQUYWRPBYDNVVALRFHUTSLFCCBEAAYECANVCEMXXHABVKICRVDOQWPPLGWFMD");

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
    msg.setTimeStamp(0.498901526147);
    msg.setSource(62111U);
    msg.setSourceEntity(148U);
    msg.setDestination(29613U);
    msg.setDestinationEntity(232U);
    msg.timeout = 5068U;
    msg.lat = 0.447552818864;
    msg.lon = 0.781793224261;
    msg.z = 0.855429868046;
    msg.z_units = 105U;
    msg.speed = 0.667899335425;
    msg.speed_units = 40U;
    msg.custom.assign("VQXJAIBOAZLBKMMGKLYNMEHOPNQLHQZQDTEMWEPDKEBJFGNUADABASOUGSPXRMVPSEKWQCIGWHYCUBKXSTBPNYDUTCZRLSHQGUVWJSXURJNVFXWHYAYNQOIVLAKIKWBIBGVOTFUREOIEJMTHSUPAPIKNYHTZOVDLTPTVXFCCHBIIGC");

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
    msg.setTimeStamp(0.934963879134);
    msg.setSource(5611U);
    msg.setSourceEntity(149U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(252U);
    msg.timeout = 35889U;
    msg.lat = 0.593269310422;
    msg.lon = 0.168846493446;
    msg.z = 0.90024838848;
    msg.z_units = 36U;
    msg.speed = 0.525555741764;
    msg.speed_units = 129U;
    msg.custom.assign("OFZPAESJMZXZQOPOHGDATSDMCBDUVXAAGRLONNTIERYACLZBBFLUYKFEIGAHJHQFPMKOPAVOJPCUAOLMTXCHFGYZEKFEPCQIQKYVMODWJHIVMBIDRKSKUWEGPJDLVSDVIXLBWMRBJVXPMTOTYUNEWHQRUTGXCLZKWUSWJBHESCSZQYHRKLFPXAIOSYQJZNRSGUPXTNEIMJIBCSVYBVNQWUBTXMWGENIFTRYZQ");

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
    msg.setTimeStamp(0.995011851018);
    msg.setSource(51073U);
    msg.setSourceEntity(45U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(211U);
    msg.x = 0.401979325908;
    msg.y = 0.199816612762;
    msg.z = 0.682264694083;

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
    msg.setTimeStamp(0.262466057981);
    msg.setSource(44485U);
    msg.setSourceEntity(201U);
    msg.setDestination(31279U);
    msg.setDestinationEntity(40U);
    msg.x = 0.31239816474;
    msg.y = 0.155080759363;
    msg.z = 0.787261142764;

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
    msg.setTimeStamp(0.297353715903);
    msg.setSource(20500U);
    msg.setSourceEntity(167U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(51U);
    msg.x = 0.478605487381;
    msg.y = 0.269907717973;
    msg.z = 0.409001485749;

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
    msg.setTimeStamp(0.0143112695352);
    msg.setSource(29018U);
    msg.setSourceEntity(193U);
    msg.setDestination(28445U);
    msg.setDestinationEntity(119U);
    msg.timeout = 41729U;
    msg.lat = 0.71028008088;
    msg.lon = 0.500740427227;
    msg.z = 0.0170642320175;
    msg.z_units = 246U;
    msg.amplitude = 0.239805527141;
    msg.pitch = 0.575005276341;
    msg.speed = 0.117921629264;
    msg.speed_units = 74U;
    msg.custom.assign("XYJALWPVWLZFGMUBUCPKQHKQSMJQBKSYKCZDZLUVZNAWCOZHDNMYJFTWFCDOGIZRTWGCSFIRSNLRGEBIHNDAJHZRFSBHLYYIBOXVLCSDHOYIUQTRATWSPNUFEPLPEGJLZNEZZGHYBBOYXGQCQFVOUXILWMCAKBXMNPXEEDQMRWXJSVGKXCTWTGDOGMMDPDXEBT");

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
    msg.setTimeStamp(0.46510987094);
    msg.setSource(16496U);
    msg.setSourceEntity(170U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(12U);
    msg.timeout = 38813U;
    msg.lat = 0.757976341469;
    msg.lon = 0.360748176654;
    msg.z = 0.819039697691;
    msg.z_units = 206U;
    msg.amplitude = 0.930584541137;
    msg.pitch = 0.356327823291;
    msg.speed = 0.731369402455;
    msg.speed_units = 193U;
    msg.custom.assign("NAIDNXTMBWNFJHIZLZTPKAGNMBBDVOERYSDAPJERBDOXMCFAQHPWIEPVYRSPZTDKISDKHSXZJRQTVIXKFAHLUYWDSKGAWFZEOXTFUROPEDZUZJBFSJXHMPXMIOVYWWBDGGMTCXKEUBBJCTHSCR");

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
    msg.setTimeStamp(0.1944271503);
    msg.setSource(5117U);
    msg.setSourceEntity(70U);
    msg.setDestination(14691U);
    msg.setDestinationEntity(10U);
    msg.timeout = 43640U;
    msg.lat = 0.0843266782876;
    msg.lon = 0.985247080688;
    msg.z = 0.0465691692129;
    msg.z_units = 96U;
    msg.amplitude = 0.0229705848352;
    msg.pitch = 0.540370028262;
    msg.speed = 0.387966677403;
    msg.speed_units = 76U;
    msg.custom.assign("JKADZDGXHELQTTJSRMQUUIRQDKGEHUDEONWOGTKEDWLILLQPMZQYYDJTRZAHSDWRPUQMOGIEPRSQYNVVUIUAVWRPZHVLWDEIWMXKBPXOYKROJMRKJFCWSNTSXPPQVUUZNKULIPCIBSADHTRCELZBUJABLVMNFOHOHPCOYSZXJBDEXWXGNGNGZYSFAFQKTZBLVGSJGOTXFYFOCJHWAFGSTVCMYCHNCBRVQJIBPMKXCVXKFHIBMYZTFAEMENCWA");

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
    msg.setTimeStamp(0.823964914139);
    msg.setSource(2200U);
    msg.setSourceEntity(250U);
    msg.setDestination(11032U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.310331147126);
    msg.setSource(52576U);
    msg.setSourceEntity(148U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.997483936806);
    msg.setSource(30805U);
    msg.setSourceEntity(237U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.711602461839);
    msg.setSource(35886U);
    msg.setSourceEntity(196U);
    msg.setDestination(17512U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.797259960685;
    msg.lon = 0.467405472172;
    msg.z = 0.686239548668;
    msg.z_units = 222U;
    msg.radius = 0.902692675111;
    msg.duration = 22484U;
    msg.speed = 0.281968770156;
    msg.speed_units = 133U;
    msg.custom.assign("YXDEVAKIVRFYYXXUZHUAQZBIAZJNGGALPLLTRBBNDJCBGYEHCGCMKYPITDANFWWQXKFGHIOBFUYJVANVBTQVCSTUEHKQBS");

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
    msg.setTimeStamp(0.857636457267);
    msg.setSource(45885U);
    msg.setSourceEntity(48U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.978827103171;
    msg.lon = 0.180520567035;
    msg.z = 0.47905789569;
    msg.z_units = 202U;
    msg.radius = 0.339273067964;
    msg.duration = 21209U;
    msg.speed = 0.890038750952;
    msg.speed_units = 33U;
    msg.custom.assign("SITRVPDSOCOTMABGFGKTDXHMSBXSZFJOWAEYPGUBZBFTBVZZNWCDZBGSPXDIWWOTEHVEWAEELMJYQXOWIHFIXYKGHMJHLCZBRWLGFCRKFKHVHRGLRLQVLERSMQDODUFBUJFPBAKCMQMHISIOXZPVCJOKPXKTAFLVNEGXJYHYDLENJ");

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
    msg.setTimeStamp(0.899060537737);
    msg.setSource(45940U);
    msg.setSourceEntity(75U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.341473543121;
    msg.lon = 0.931846133477;
    msg.z = 0.268699912199;
    msg.z_units = 134U;
    msg.radius = 0.142941044383;
    msg.duration = 1650U;
    msg.speed = 0.407571886165;
    msg.speed_units = 170U;
    msg.custom.assign("QBPMVURAUSNNDERBFVXDTXKHKJJONXLJLURINYSIZDOAPZGEC");

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
    msg.setTimeStamp(0.680393077956);
    msg.setSource(28586U);
    msg.setSourceEntity(62U);
    msg.setDestination(27911U);
    msg.setDestinationEntity(39U);
    msg.timeout = 7206U;
    msg.flags = 203U;
    msg.lat = 0.388450277479;
    msg.lon = 0.658151236142;
    msg.start_z = 0.150456119772;
    msg.start_z_units = 192U;
    msg.end_z = 0.44915862223;
    msg.end_z_units = 45U;
    msg.radius = 0.138796463291;
    msg.speed = 0.122468381947;
    msg.speed_units = 10U;
    msg.custom.assign("NWDGUVPZLCVFKKQIRCBQUBSZTTYPEFRPJNOWIMFX");

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
    msg.setTimeStamp(0.991208109841);
    msg.setSource(11256U);
    msg.setSourceEntity(121U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(100U);
    msg.timeout = 52233U;
    msg.flags = 200U;
    msg.lat = 0.140789052733;
    msg.lon = 0.110241382439;
    msg.start_z = 0.362450512519;
    msg.start_z_units = 84U;
    msg.end_z = 0.130221671854;
    msg.end_z_units = 17U;
    msg.radius = 0.509801913888;
    msg.speed = 0.591332013484;
    msg.speed_units = 172U;
    msg.custom.assign("QEVIWFNOLBARCYEDJZLUBAGQDRMHXIAJOGQEHAUYATWYHSVUFRDLCGTIFKYTQJQPVBXZLOFALWUOMENUIPIBSPDJPRHWMPCKYONQVMEVGRXHDFTNUKXOJGFSDITQJNYKIKKMPGMRGDWJLRXIBBGTCLGNCJXXKHXGXZPNKSMJONUBZALYOSOEBCEEANFZCKQQZWRHZYWTIUTBTTNBZ");

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
    msg.setTimeStamp(0.265842402695);
    msg.setSource(47265U);
    msg.setSourceEntity(112U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(32U);
    msg.timeout = 31789U;
    msg.flags = 184U;
    msg.lat = 0.481653109585;
    msg.lon = 0.699403871028;
    msg.start_z = 0.11107018687;
    msg.start_z_units = 7U;
    msg.end_z = 0.873933386029;
    msg.end_z_units = 72U;
    msg.radius = 0.533756877469;
    msg.speed = 0.759756489917;
    msg.speed_units = 137U;
    msg.custom.assign("TOEWKSGIEMMXOEQMWSNXHKLYVTWMRMEKUIIHIBPOSQZBUKPOZAIGMHYWSXAGBGQXARSFJVEOZQTRBRFDYRUAMZAYJZZCTUQEHLGSCTRDPDRZGFOKVPCXWHIAVXATJBCJWRBUQUYNIQXFIWLSDTTXENDJZNPKFLBCXH");

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
    msg.setTimeStamp(0.296181927817);
    msg.setSource(13920U);
    msg.setSourceEntity(145U);
    msg.setDestination(4081U);
    msg.setDestinationEntity(190U);
    msg.timeout = 53634U;
    msg.lat = 0.400519183249;
    msg.lon = 0.468675475636;
    msg.z = 0.872703819675;
    msg.z_units = 20U;
    msg.speed = 0.00647012419694;
    msg.speed_units = 211U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.113870329162;
    tmp_msg_0.y = 0.989052717461;
    tmp_msg_0.z = 0.514215602359;
    tmp_msg_0.t = 0.821398363587;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UOOVNKALFXDPKEOGYYHDHMGHXWFHLMPOQBWOWCCDEIHHPBSQUBDTZYJNPQCNYWTMFGGHDQIMEZZEGMJTUFLMEKFUNNKUKNTVAHEVBNSTWRVEWSPPMDLCYRCBRILZJSTARRCJFGZLGYWWTLSIRMADDIBXUTXSFVBLJIYXCAXBGKPQQOOUJVALSJITVARK");

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
    msg.setTimeStamp(0.598464315115);
    msg.setSource(62316U);
    msg.setSourceEntity(252U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(56U);
    msg.timeout = 8067U;
    msg.lat = 0.512059814491;
    msg.lon = 0.679962704501;
    msg.z = 0.10710685056;
    msg.z_units = 114U;
    msg.speed = 0.459772819041;
    msg.speed_units = 122U;
    msg.custom.assign("ZODUXBKMNZKRDARDOMOZKXNVWTKFCDYSQHAQQWVTNYZDGPETBQDHIRNSNCDVXVBJQTUXXZIGFGYPPRCUNLPXXJERBFHHLVKIOJZVQBJSFCOJZXIMAFRQFFWSEWYCMOBUJUCAAWHPMTNELLJSIJBIPUEGUVBGHTQMALKWVWYDKYWHSZAZQENYILAMKPTLBSJGQFTNNLMOIEOUIMHERVZFR");

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
    msg.setTimeStamp(0.201352048419);
    msg.setSource(55933U);
    msg.setSourceEntity(185U);
    msg.setDestination(20945U);
    msg.setDestinationEntity(245U);
    msg.timeout = 37122U;
    msg.lat = 0.721186505818;
    msg.lon = 0.114082948347;
    msg.z = 0.810736820425;
    msg.z_units = 101U;
    msg.speed = 0.731672137132;
    msg.speed_units = 77U;
    msg.custom.assign("RZCLDOPTDEKXJXNWNARCYCDCQLXYIETVBWJZAYAVCRSEEWWMSBZJGDLXMLTPNNBKWIURFGIUYSOYVFFWPRCCVBHUOTAGQPNRQIJISZUDHQVINMOMAQAIJOXPQYINKZEVPMZYGIRPHKFMJJFVZNBOGJFTEKEJLGSKBFLB");

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
    msg.setTimeStamp(0.410730249488);
    msg.setSource(63912U);
    msg.setSourceEntity(194U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(22U);
    msg.x = 0.818633443357;
    msg.y = 0.805565589253;
    msg.z = 0.175597925044;
    msg.t = 0.29467845233;

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
    msg.setTimeStamp(0.629673472347);
    msg.setSource(2456U);
    msg.setSourceEntity(87U);
    msg.setDestination(42771U);
    msg.setDestinationEntity(89U);
    msg.x = 0.346312137658;
    msg.y = 0.468696338331;
    msg.z = 0.413116427481;
    msg.t = 0.812483469595;

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
    msg.setTimeStamp(0.472395342056);
    msg.setSource(7934U);
    msg.setSourceEntity(232U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(163U);
    msg.x = 0.554793284968;
    msg.y = 0.676474101383;
    msg.z = 0.717950275878;
    msg.t = 0.398829886731;

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
    msg.setTimeStamp(0.401068426185);
    msg.setSource(32288U);
    msg.setSourceEntity(3U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(182U);
    msg.timeout = 1390U;
    msg.name.assign("EFLIBXGTSWRZYXURQLQYVPAUMGITIEXZWCYVAYHQSQPDBEFHWYTUCWQRRLUTMSNAEHGWIZHAMJRNQMLBNYVBZUQLPRCVDLTTCBYJRLVDEKWKSXBWXKZASOZKPTWHRKGINGRBNHBOOPOPEMKFHDOAWMLBF");
    msg.custom.assign("IHZPXVKPCJHQWSFVDFDCEKMYUHEBVSUHYQVTNSTKSWUEYDIGQNFXWJQZHPTEINJBHBAOOXWQLUYKMVOYGIIDEZNTRARKZOEMTNHHRAAESKMELBJASMSWVDAIPLMGLVJLYADFRQOYXNWXZAGNNWOCLGNPOTBUXEAGQDBCRIWHFMKWOIIKBLGSJYKURUQNDRQZHU");

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
    msg.setTimeStamp(0.403971161004);
    msg.setSource(49935U);
    msg.setSourceEntity(189U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(20U);
    msg.timeout = 52788U;
    msg.name.assign("CSPXMVEBBBHJGRINGMNRVUKHBTYHNCPMPXSKBTTLTFOSKMDNNMUOJIGEZGQKQHDSLIOWEGK");
    msg.custom.assign("ZXYTKUSWDPMUNZNLGOADQXYFSVYMEGEKWJWUKHTDMJQPLHIPORNDJIGKQPTBWLEPZAVWCQKGWDRVCZFFJAFEOHXBUHLDBRFTYYXARJONOIFTKPK");

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
    msg.setTimeStamp(0.0151985220822);
    msg.setSource(33206U);
    msg.setSourceEntity(98U);
    msg.setDestination(9601U);
    msg.setDestinationEntity(7U);
    msg.timeout = 4905U;
    msg.name.assign("CTLIOVXWCCUKSSLSIZHCIIDQPNTZSJETNIJEYOGYELNMFVUALOFQJQNDXXYWPRPORPUYNYEBHKMOPDQTYLUVZRFMCXSFXMUVFEUUDQQTDAARMXDGZVVRWQSEDABEGUSZOBQSKWJKF");
    msg.custom.assign("GVDHFECBTZLAPCOFKQBNEGGZBRQUTYDCINOUXPDECWGYTRTSJDROCJVPVLFOEXZRKYD");

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
    msg.setTimeStamp(0.556807176518);
    msg.setSource(51893U);
    msg.setSourceEntity(27U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.33382955655;
    msg.lon = 0.333145411139;
    msg.z = 0.492094577558;
    msg.z_units = 155U;
    msg.speed = 0.780298588061;
    msg.speed_units = 220U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.57450233762;
    tmp_msg_0.y = 0.587237015138;
    tmp_msg_0.z = 0.104096630224;
    tmp_msg_0.t = 0.13558296595;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 49057U;
    tmp_msg_1.off_x = 0.287657009112;
    tmp_msg_1.off_y = 0.397039305307;
    tmp_msg_1.off_z = 0.876745382496;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.839729393871;
    msg.custom.assign("NEDTABBCXRFFJWTQSMIZIEPBUODAZNHQWWFPLBQCYHEQTCBVILIOXGZKIERXDWZCMRKHKLMQSPAFYVEAIWZZHNUHAMCL");

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
    msg.setTimeStamp(0.884639653629);
    msg.setSource(2383U);
    msg.setSourceEntity(30U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.513175533958;
    msg.lon = 0.379431300253;
    msg.z = 0.756775189447;
    msg.z_units = 176U;
    msg.speed = 0.337001482337;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.67225161156;
    tmp_msg_0.y = 0.566322914831;
    tmp_msg_0.z = 0.455303107047;
    tmp_msg_0.t = 0.275275983542;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 50039U;
    tmp_msg_1.off_x = 0.116002679153;
    tmp_msg_1.off_y = 0.854962441523;
    tmp_msg_1.off_z = 0.0151560071636;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.835951677727;
    msg.custom.assign("JQHRKNIEOXE");

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
    msg.setTimeStamp(0.229652166881);
    msg.setSource(48875U);
    msg.setSourceEntity(152U);
    msg.setDestination(59014U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.988608600261;
    msg.lon = 0.115932067446;
    msg.z = 0.334403861741;
    msg.z_units = 108U;
    msg.speed = 0.502219690955;
    msg.speed_units = 203U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.702915743548;
    tmp_msg_0.y = 0.452981299683;
    tmp_msg_0.z = 0.32142406839;
    tmp_msg_0.t = 0.683104859381;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 25417U;
    tmp_msg_1.off_x = 0.908478044118;
    tmp_msg_1.off_y = 0.779977665449;
    tmp_msg_1.off_z = 0.231896186283;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.84090951398;
    msg.custom.assign("OJAANPNKYFNNFNTLISTAUCEPQDREVFWRPKUYUZOQHHOZZATBIZWNLIPKPXSTDRJCZMBJZSDTXKJHGHOXFQBLVHWRTRCWQMLLBIXQLESALDGCHUEKZYVTCPZLPCSEJXEDEXCNTQJZFAIIVGUVJOMXHEMYWHBQOJPXVQIDBLACWUVPGJMGJMFEIOYDUSPDCZQSOHGKAYAQFGMIEWYAROKOVGNMUVXKBUFBGRYDWWKSGBRSI");

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
    msg.setTimeStamp(0.0252661174881);
    msg.setSource(36499U);
    msg.setSourceEntity(50U);
    msg.setDestination(20426U);
    msg.setDestinationEntity(182U);
    msg.vid = 22445U;
    msg.off_x = 0.217874633162;
    msg.off_y = 0.424233925799;
    msg.off_z = 0.987703252151;

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
    msg.setTimeStamp(0.948550467379);
    msg.setSource(15002U);
    msg.setSourceEntity(170U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(221U);
    msg.vid = 54816U;
    msg.off_x = 0.129640199839;
    msg.off_y = 0.889022343356;
    msg.off_z = 0.930105910353;

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
    msg.setTimeStamp(0.781607369932);
    msg.setSource(56073U);
    msg.setSourceEntity(45U);
    msg.setDestination(20960U);
    msg.setDestinationEntity(219U);
    msg.vid = 12677U;
    msg.off_x = 0.984179626037;
    msg.off_y = 0.680360492232;
    msg.off_z = 0.92673829123;

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
    msg.setTimeStamp(0.0643160242114);
    msg.setSource(38045U);
    msg.setSourceEntity(243U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.421888152843);
    msg.setSource(31292U);
    msg.setSourceEntity(109U);
    msg.setDestination(20374U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.640394567369);
    msg.setSource(15321U);
    msg.setSourceEntity(54U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.0789622349238);
    msg.setSource(52039U);
    msg.setSourceEntity(139U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(161U);
    msg.mid = 39043U;

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
    msg.setTimeStamp(0.759259776469);
    msg.setSource(32423U);
    msg.setSourceEntity(242U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(130U);
    msg.mid = 62976U;

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
    msg.setTimeStamp(0.855563186996);
    msg.setSource(9393U);
    msg.setSourceEntity(168U);
    msg.setDestination(64667U);
    msg.setDestinationEntity(203U);
    msg.mid = 64570U;

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
    msg.setTimeStamp(0.967047809226);
    msg.setSource(21085U);
    msg.setSourceEntity(1U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(108U);
    msg.state = 219U;
    msg.eta = 43452U;
    msg.info.assign("VHBHRXPWTKJVAZFCGKSGXHFMTISYOJHKPANWWPGKKTRANQILOOZWUMYBGWZEEAQQXZSUZPLJRHNXBDNEXSQFCPWLY");

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
    msg.setTimeStamp(0.073244362567);
    msg.setSource(45978U);
    msg.setSourceEntity(196U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(59U);
    msg.state = 61U;
    msg.eta = 45012U;
    msg.info.assign("XMQZUKPWLJEWBBVHOJWFTNUZKXHMKPUODLKLLGMYLPWAJRZBFMQCIBQJXZSCRDYRKOGULCXXDGKVRGPATCDATNPAOSHSDFTNNTGWYTCEENZQDSVIVTLZBNHVTWRCNPEPMUXBDOQIQMFSSUOJR");

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
    msg.setTimeStamp(0.736010407047);
    msg.setSource(16348U);
    msg.setSourceEntity(213U);
    msg.setDestination(7288U);
    msg.setDestinationEntity(161U);
    msg.state = 68U;
    msg.eta = 48473U;
    msg.info.assign("XLPGYNKQQLBYJUJPQSGDHJGUAFBMLNRVIKVXNDRXWFHXCAPQCW");

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
    msg.setTimeStamp(0.581319731615);
    msg.setSource(63129U);
    msg.setSourceEntity(151U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(185U);
    msg.system = 32488U;
    msg.duration = 17467U;
    msg.speed = 0.104227231652;
    msg.speed_units = 122U;
    msg.x = 0.341456089116;
    msg.y = 0.17500500515;
    msg.z = 0.524934498517;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.323594078518);
    msg.setSource(42434U);
    msg.setSourceEntity(96U);
    msg.setDestination(3964U);
    msg.setDestinationEntity(100U);
    msg.system = 58918U;
    msg.duration = 55052U;
    msg.speed = 0.0819528208672;
    msg.speed_units = 103U;
    msg.x = 0.927851426675;
    msg.y = 0.972432469552;
    msg.z = 0.228812856443;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.410902467578);
    msg.setSource(48738U);
    msg.setSourceEntity(81U);
    msg.setDestination(23287U);
    msg.setDestinationEntity(237U);
    msg.system = 20130U;
    msg.duration = 8917U;
    msg.speed = 0.335668422962;
    msg.speed_units = 44U;
    msg.x = 0.290882789983;
    msg.y = 0.0588210164136;
    msg.z = 0.287898927895;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.367938775656);
    msg.setSource(14249U);
    msg.setSourceEntity(57U);
    msg.setDestination(28859U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.982773907685;
    msg.lon = 0.622412473927;
    msg.speed = 0.113859460939;
    msg.speed_units = 172U;
    msg.duration = 24365U;
    msg.sys_a = 59941U;
    msg.sys_b = 44912U;
    msg.move_threshold = 0.0557867782199;

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
    msg.setTimeStamp(0.257231459908);
    msg.setSource(63256U);
    msg.setSourceEntity(94U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.508705002617;
    msg.lon = 0.245113756469;
    msg.speed = 0.605224560922;
    msg.speed_units = 67U;
    msg.duration = 38182U;
    msg.sys_a = 15799U;
    msg.sys_b = 47539U;
    msg.move_threshold = 0.713046410555;

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
    msg.setTimeStamp(0.206218982635);
    msg.setSource(23245U);
    msg.setSourceEntity(228U);
    msg.setDestination(25618U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.80513630942;
    msg.lon = 0.785697508687;
    msg.speed = 0.511225266046;
    msg.speed_units = 0U;
    msg.duration = 7611U;
    msg.sys_a = 14832U;
    msg.sys_b = 56233U;
    msg.move_threshold = 0.349240800661;

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
    msg.setTimeStamp(0.0424360409778);
    msg.setSource(64329U);
    msg.setSourceEntity(152U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.000137660316598;
    msg.lon = 0.424132409063;
    msg.z = 0.299614031825;
    msg.z_units = 181U;
    msg.speed = 0.99306354419;
    msg.speed_units = 129U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.211468216075;
    tmp_msg_0.lon = 0.466430419419;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UICJYIJHWIJWTPBIGYMYOXAWTDVDYIHUXQIKSASUJERKFNNREPPNKZUVODVTDCGQIVIBRGKBDEKHMVQELFTIBHDUYZOPLXCREDBKPBNVJSPSOSVNYOWPUAQJXYWSXOUJNFSZFQHOXAWTAEHLXHHCELWCSWMZYYZQKXOGTQLSLKACMLAMFUJERPCNWATKTACFGRNZMMKMRQTTGBLXCUHGVZQVMXABBWPJDPRZGHMNEUGDC");

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
    msg.setTimeStamp(0.293777465437);
    msg.setSource(28922U);
    msg.setSourceEntity(128U);
    msg.setDestination(13964U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.898886358646;
    msg.lon = 0.949759140836;
    msg.z = 0.104843160995;
    msg.z_units = 156U;
    msg.speed = 0.294130053558;
    msg.speed_units = 99U;
    msg.custom.assign("FSCOYJHUUFTQVNLCXJVKFREYGDUANBKSKBFNQDEXDMIAARLWNGRBFKUSZLRGUCXJBYRKQBMRTZQPAEHDEHTGACOWMBJDZOXEFIPBRYSNWZGDVTLKFLCVUVXBNYROTYSQVFAICYUHFJWNSJLZRTCPIXIQWSRFWQKVMPOJNBIEDHKZLOZGYAPCMTCKSCATPLWTOAXDH");

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
    msg.setTimeStamp(0.499749704206);
    msg.setSource(19252U);
    msg.setSourceEntity(250U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.920957882322;
    msg.lon = 0.564771041366;
    msg.z = 0.191778209436;
    msg.z_units = 164U;
    msg.speed = 0.683751360231;
    msg.speed_units = 177U;
    msg.custom.assign("FEPBTRKUMSDYJCAZDPHZNRBLACYBKLIQYRVGX");

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
    msg.setTimeStamp(0.65384487684);
    msg.setSource(39957U);
    msg.setSourceEntity(168U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.305202520443;
    msg.lon = 0.413658178565;

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
    msg.setTimeStamp(0.202940855005);
    msg.setSource(38835U);
    msg.setSourceEntity(196U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.279451635137;
    msg.lon = 0.577300071065;

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
    msg.setTimeStamp(0.358673536309);
    msg.setSource(27591U);
    msg.setSourceEntity(161U);
    msg.setDestination(64813U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.653061197185;
    msg.lon = 0.758313778865;

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
    msg.setTimeStamp(0.0309363893895);
    msg.setSource(30066U);
    msg.setSourceEntity(188U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(70U);
    msg.timeout = 52042U;
    msg.lat = 0.305289735896;
    msg.lon = 0.695527606775;
    msg.z = 0.789988105457;
    msg.z_units = 136U;
    msg.pitch = 0.286522102513;
    msg.amplitude = 0.147679743689;
    msg.duration = 44045U;
    msg.speed = 0.00653618763208;
    msg.speed_units = 61U;
    msg.radius = 0.562525631128;
    msg.direction = 209U;
    msg.custom.assign("JYFIUMWUIPNKNPBTSLDAAOGUSVEHEEYRFAJBXPNQTXXOXRFIFHUSTOLZMLTGLZK");

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
    msg.setTimeStamp(0.875682348313);
    msg.setSource(19588U);
    msg.setSourceEntity(112U);
    msg.setDestination(2540U);
    msg.setDestinationEntity(151U);
    msg.timeout = 27999U;
    msg.lat = 0.930296429072;
    msg.lon = 0.64560150843;
    msg.z = 0.907131128574;
    msg.z_units = 70U;
    msg.pitch = 0.041446179396;
    msg.amplitude = 0.219118386455;
    msg.duration = 584U;
    msg.speed = 0.863212618212;
    msg.speed_units = 116U;
    msg.radius = 0.511776416935;
    msg.direction = 237U;
    msg.custom.assign("LXLJGHMQIRUQHLOVVOQTKEAMSZDDDERFQGASVCOFVFNWOROETIJHGCLUGAYTWYRLRCTZAKJAAUKMKZCHFIFOKJYQXVSDUKVINMJYZALNBCWSWWFBXBCIHXSNOSRGYJXMEFLVMHVEJUYEJGSJRCBPEAYXQEECNTBZJOWKPRYQBLWFZIA");

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
    msg.setTimeStamp(0.41702922584);
    msg.setSource(20147U);
    msg.setSourceEntity(53U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(164U);
    msg.timeout = 60804U;
    msg.lat = 0.0409226027762;
    msg.lon = 0.909015269571;
    msg.z = 0.176611505885;
    msg.z_units = 230U;
    msg.pitch = 0.819950599729;
    msg.amplitude = 0.272535953556;
    msg.duration = 50548U;
    msg.speed = 0.930640519396;
    msg.speed_units = 161U;
    msg.radius = 0.779680583133;
    msg.direction = 85U;
    msg.custom.assign("WYTXCFDJNT");

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
    msg.setTimeStamp(0.368270641064);
    msg.setSource(65061U);
    msg.setSourceEntity(85U);
    msg.setDestination(58884U);
    msg.setDestinationEntity(231U);
    msg.formation_name.assign("WWQVZOVLXKXNLOOAIGDMVDCCEENIOC");
    msg.reference_frame = 25U;
    msg.custom.assign("GUVLCUFWRRMJMODJEJJERZVOCDFOJPZMMIOPEVANYKPLGOMIAITEUQTWUBGWPITLNMZZQABKRLHSTWINDQMUCBIFGFMAZCXQLLOQNSRFDTIGYOBKMRLZHUXZEPXW");

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
    msg.setTimeStamp(0.701676724812);
    msg.setSource(11636U);
    msg.setSourceEntity(50U);
    msg.setDestination(61534U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("AKJQIHCSTCXLSOAECHUMBWAMPOETWGDSLAUJONRLXNUBEAOYTXQGVUMPZKFCNTWGPWJBFZKQAOSRNFKOWX");
    msg.reference_frame = 231U;
    msg.custom.assign("RBIOAIIATWAIPVHREQXXEWTWVKOLFXEQDIMYVDSMKAKONBSYKSTFPNRXYZHPLUXNMGRPJVTIOGINGHZYTTLAZ");

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
    msg.setTimeStamp(0.153354063681);
    msg.setSource(58108U);
    msg.setSourceEntity(45U);
    msg.setDestination(36612U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("QADVDGRIHOMQLFJKWZRAZZROCLKORBOBUJSAJRGPIZPXKLNVNORABGHIUYLMNXNJXZHTEGGQYQJAIWZMAKIDEETJNXTYMAHQYHJFPVSVCHVQFCZPSGUDHGKHMNICIEYLSSUSQKTDCXBLXVSLIFNEWVPVBOEWZDAKGYRJWNLZZKRIMCNWPXPSFOUHWJWKRYDUASYNUTPGXVFTCUMODGSLECVCXPTBTFDFTCQFWBTQBAODKFYEORXEU");
    msg.reference_frame = 223U;
    msg.custom.assign("SBILGCOZHDZWHPJXBCBOQXHWZIHVYZOLRJURVHEBCMEQICWYSNMUQGTPEYQPVKNPNQFWVHOCWJYSYWUSCHAFFUQILKYIPPXFFFRXTSJDGGXBGJVZGCSTEAJHUWADCMXYDOSLMUBIKMREAGKEWCJTFKSRVOOTFZULTOVNNKPTRNBKADBWXQEEKHIOTRDQITFREVXNKPYUEILGVLJPSZDORJVAJYGHMBMD");

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
    msg.setTimeStamp(0.43036286786);
    msg.setSource(48541U);
    msg.setSourceEntity(250U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("DYRREPGYKCMJCALRPFFMGFOTEBAMGRBYLWAZCNVYHNIQVUZHOIWVOGBBOUJPQXVFXPPFFQNIZPPUNACERHY");
    msg.formation_name.assign("IKZQVCPHLNLFCZVPFYAQKJULE");
    msg.plan_id.assign("UGGAXPTCWMEBQASEHXKEMMKWLSPEBHYTOFYIWQAYJJSRBAFVOYLPAQIFRBUXDDOPIIHRFCNPSGBFCZKCWOKSTNKWWEVLSFPLRPJLAXLVJNZEMCVXZZNJOIEGKZRUZAZQVNHQUNZLNSPXEQJHSGNAYHFDHWKCIVBTCFEGOYODJRDUWMYTUFDPKWUDVMBIRKRQQVZHJHDOOCBAGKQQUDYJFYGUAMT");
    msg.description.assign("ORHMEGTHFBPVDJQVEELOKLSCTREOZRTTBBDKUOIANILWHPJFIMKRIWBXCCYSRYDWFTAAEJFGNRICLNWRUXMWSQZPPVTUNMOSJZMKSFPGTSYOXEXYZBUVELQNHJWPDHRRCFZUCIEBIUDPYAQCCXJSWZZKVVYPILSLAQJNINZMOGZWZTDAVEGPDWFQFMBHMJDXILRGKKNTTHQGVUUEMCSNBKAQHOXDYCXXAGAGY");
    msg.leader_speed = 0.330710923057;
    msg.leader_bank_lim = 0.92367695112;
    msg.pos_sim_err_lim = 0.0415132723706;
    msg.pos_sim_err_wrn = 0.332771306707;
    msg.pos_sim_err_timeout = 40004U;
    msg.converg_max = 0.967252226194;
    msg.converg_timeout = 35559U;
    msg.comms_timeout = 52226U;
    msg.turb_lim = 0.253777473763;
    msg.custom.assign("FTGCIKOEYKZNNUXXNPRFAIVDEFGQYULFLKCTJOXMMSTDWGIHWIVOMUCBQNZVSIWEHGFKPLUBPPLUBMIWPSLGZVRADDZOBQHYMVRTBYDESUZIAKXEBFIFVEQWYTMHAKZNWYGTEQCCSLDSILRJFUBLPXUTHPJYATPOWORROGDNQNJOCHXODUKLTAAKESVRWPJGFRHKATLGIUNJJCJGHNXAZZXZHRNMQMVQVHCSSXEOFDQDASYMYBCWXR");

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
    msg.setTimeStamp(0.386619048053);
    msg.setSource(31348U);
    msg.setSourceEntity(30U);
    msg.setDestination(17255U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("ZDSACQHNNIMLSQAPZIDZHZCHIZUOGIJYEDFGMCWPDXRVUVPWSQZAGKBNPRAEUYMOOBTPRGKBQAJEAJEMGYSKCDFXRZYAECWCJVTNGILOYMXABLNOSDWPWXFTYYQFFEWUKCXKDHPILQUIGVVWLBAHRXTE");
    msg.formation_name.assign("UIFGMANOIYVQFEHDJNIQBQYBHXAWSOFVYVWONBGTREHIPSWSMCUPPWJKCCGHNCWXNCGNYOUNTPUAORATXDSHOGMDCILMRJWDNZPVPBKLSBACROKXYXHBAVGEYCRMETZQDTXVDDHMCJILDOZUTIJQGVYVOKPIERWJXGTQOQWRWLZKMKDPMFUSAGKVLMHVZBKTIFSASAULUERYXFIHP");
    msg.plan_id.assign("ZBMDNXKYQFGDGOIHYEJBRKJEPCZYVYQRVPVKQAVMLOPFMRIACBSBXRGJLQNIPETKNETMJSCRWVCAKEYOIUPUTPINEWWOXQLGMZLEJMDWUPSIGSOBQGLAJHTIQWKZHVGONUJHSCTNDQFKXSOYWHBRCBHTESCAHKRBDSDOQMFDPNNMDUIOOFUXBUJANTXRXTNVLQGFMRWPLZIGWZAZDAEYDHALTVJIXHCFZ");
    msg.description.assign("XIHHNZNPXJAJFRDVRSFLUB");
    msg.leader_speed = 0.686497195384;
    msg.leader_bank_lim = 0.265152182756;
    msg.pos_sim_err_lim = 0.328775570308;
    msg.pos_sim_err_wrn = 0.161026736596;
    msg.pos_sim_err_timeout = 33657U;
    msg.converg_max = 0.547179552139;
    msg.converg_timeout = 62485U;
    msg.comms_timeout = 57349U;
    msg.turb_lim = 0.181302731892;
    msg.custom.assign("JNQIYSHJTDATXZMKDJVGKUUFPLROAHLLVOVLXGAZPWKAWAJWQNFGHSKRWEBCVUCYVSMRYMOOWEHMQNOVIKSSEZPECWATGIOMJIJUYZACZBXNVFJYXRGIAWDINBTIBWBNLUQLZYBXGTSH");

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
    msg.setTimeStamp(0.48576331731);
    msg.setSource(5774U);
    msg.setSourceEntity(238U);
    msg.setDestination(9050U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("XJODWEYPLNANUVLAAXXPVSUIHNDFUUBBEHLQRAISYMEYZNVXPLXTQMCMBVFHALAJNERDIEYQRNZMYWJHHCLHHWRVPXIDZGQOOSLZGQCISGHWRJKINOQYJDLFTDSKMURRGITCXYWZKCNWEPXEVUKFGKMXKMZLFZKAISSCOFTSRTJOURBNOMWJWFGZGCTGBDIRXVTCNOUVYPP");
    msg.formation_name.assign("LLCCQYAHTJPZNJBJAXKZBKBEUDZFIBCMTBJWGVMDRNLQWMUXSMRBKFXLCPKWXDSSPGTOABPIQENJQTMGJPJUYAXTHCNXKGWRSCVBBDVTZSVIRZXDZBLGNNOXTEUHORGFIRCGOMMMQDHFYOIIYWLHOWGNEIRESZVH");
    msg.plan_id.assign("YPATZUMUGQLNIXDSOYGUKQWNBPBFUWRSGZXHOJWRHBFWHMLAYFZCWOEHREZTNKXQLXAVNOKKTLKDUIFADNBWYSFBFLEACNUXWIJEEPIXVAEKQEHWKZYVMGIPPHCXRTRHMKRDKPCIQJVUTICFESGJQUZKLWPAZTMCGJBYBULUJHYSPFRNXQDQNMFHOWPYLGSVBDQMECCADZJMOF");
    msg.description.assign("UGLGFJWDREPECJZKHCUVCVVXOASNCSEGJLIVLGAOZYVFQKBNTMFSZWPTPREQRAUSIGRLWBBCCYKTMJIPBDRRDPHZVFXNRYITKXANSYWCTXUUMD");
    msg.leader_speed = 0.956138981188;
    msg.leader_bank_lim = 0.995789621679;
    msg.pos_sim_err_lim = 0.848576846763;
    msg.pos_sim_err_wrn = 0.461515552403;
    msg.pos_sim_err_timeout = 8928U;
    msg.converg_max = 0.240111628764;
    msg.converg_timeout = 14164U;
    msg.comms_timeout = 42377U;
    msg.turb_lim = 0.628694016511;
    msg.custom.assign("PKUOQXGOSTGEBIYUHOGRGYNMZLWKYIQPFPLCPICZUCZSFBKLWTKJJVTXEKQRYKGSZHKKMITCFOAEDADCENRSHYLGHPMXCQQADSFBJDUWBJFNVRVKWBIABHEIZEPKULEHNXYJFLMVRWNXGNOTLJMZU");

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
    msg.setTimeStamp(0.941051276813);
    msg.setSource(50849U);
    msg.setSourceEntity(18U);
    msg.setDestination(38143U);
    msg.setDestinationEntity(38U);
    msg.control_src = 40998U;
    msg.control_ent = 190U;
    msg.timeout = 0.264157395085;
    msg.loiter_radius = 0.681387018463;
    msg.altitude_interval = 0.989895303067;

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
    msg.setTimeStamp(0.868609138419);
    msg.setSource(23020U);
    msg.setSourceEntity(69U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(6U);
    msg.control_src = 37191U;
    msg.control_ent = 182U;
    msg.timeout = 0.48767527553;
    msg.loiter_radius = 0.367474722373;
    msg.altitude_interval = 0.54450001433;

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
    msg.setTimeStamp(0.786335650894);
    msg.setSource(60264U);
    msg.setSourceEntity(206U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(78U);
    msg.control_src = 36921U;
    msg.control_ent = 138U;
    msg.timeout = 0.563877671804;
    msg.loiter_radius = 0.761751919864;
    msg.altitude_interval = 0.737073485214;

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
    msg.setTimeStamp(0.917502553509);
    msg.setSource(13862U);
    msg.setSourceEntity(82U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(192U);
    msg.flags = 126U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.840780887152;
    tmp_msg_0.speed_units = 16U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.398887301731;
    tmp_msg_1.z_units = 24U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.970133758241;
    msg.lon = 0.422812376747;
    msg.radius = 0.236685818076;

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
    msg.setTimeStamp(0.537554142523);
    msg.setSource(51748U);
    msg.setSourceEntity(79U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(122U);
    msg.flags = 168U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.809854241039;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.689866915779;
    tmp_msg_1.z_units = 59U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.646965596212;
    msg.lon = 0.0468540929511;
    msg.radius = 0.912730059999;

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
    msg.setTimeStamp(0.430861679949);
    msg.setSource(56619U);
    msg.setSourceEntity(35U);
    msg.setDestination(11403U);
    msg.setDestinationEntity(109U);
    msg.flags = 223U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.307157073539;
    tmp_msg_0.speed_units = 239U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.451023604272;
    tmp_msg_1.z_units = 92U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.258276513452;
    msg.lon = 0.460207070011;
    msg.radius = 0.330065407486;

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
    msg.setTimeStamp(0.89530193206);
    msg.setSource(11926U);
    msg.setSourceEntity(199U);
    msg.setDestination(43870U);
    msg.setDestinationEntity(142U);
    msg.control_src = 22762U;
    msg.control_ent = 222U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.192678408194;
    tmp_tmp_msg_0_0.speed_units = 56U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.982850977004;
    tmp_tmp_msg_0_1.z_units = 188U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.274843418483;
    tmp_msg_0.lon = 0.0756346422591;
    tmp_msg_0.radius = 0.180076297126;
    msg.reference.set(tmp_msg_0);
    msg.state = 41U;
    msg.proximity = 2U;

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
    msg.setTimeStamp(0.64147025161);
    msg.setSource(1488U);
    msg.setSourceEntity(157U);
    msg.setDestination(3751U);
    msg.setDestinationEntity(38U);
    msg.control_src = 11243U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 117U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.755900686003;
    tmp_tmp_msg_0_0.speed_units = 60U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.875887337305;
    tmp_tmp_msg_0_1.z_units = 65U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.590986499165;
    tmp_msg_0.lon = 0.132471581488;
    tmp_msg_0.radius = 0.163136257218;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 173U;

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
    msg.setTimeStamp(0.0974483193265);
    msg.setSource(18602U);
    msg.setSourceEntity(186U);
    msg.setDestination(64171U);
    msg.setDestinationEntity(113U);
    msg.control_src = 20615U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 155U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.651134107849;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.566836559724;
    tmp_tmp_msg_0_1.z_units = 171U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.42316891671;
    tmp_msg_0.lon = 0.759754110311;
    tmp_msg_0.radius = 0.677334840482;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 167U;

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
    msg.setTimeStamp(0.278929666343);
    msg.setSource(25860U);
    msg.setSourceEntity(167U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(148U);
    msg.ax_cmd = 0.889655535065;
    msg.ay_cmd = 0.0914600107755;
    msg.az_cmd = 0.0109484801173;
    msg.ax_des = 0.278243111974;
    msg.ay_des = 0.957200926765;
    msg.az_des = 0.034014198594;
    msg.virt_err_x = 0.351383414828;
    msg.virt_err_y = 0.926055075703;
    msg.virt_err_z = 0.974125790687;
    msg.surf_fdbk_x = 0.270326508875;
    msg.surf_fdbk_y = 0.406109434346;
    msg.surf_fdbk_z = 0.194611539098;
    msg.surf_unkn_x = 0.788315413962;
    msg.surf_unkn_y = 0.702427312744;
    msg.surf_unkn_z = 0.771408053314;
    msg.ss_x = 0.680628613214;
    msg.ss_y = 0.58404111651;
    msg.ss_z = 0.393642916022;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RIPJPSVMPRGSBSKDTEXWBK");
    tmp_msg_0.dist = 0.488730678223;
    tmp_msg_0.err = 0.487737082933;
    tmp_msg_0.ctrl_imp = 0.522531959489;
    tmp_msg_0.rel_dir_x = 0.552834990385;
    tmp_msg_0.rel_dir_y = 0.41873843977;
    tmp_msg_0.rel_dir_z = 0.900018061718;
    tmp_msg_0.err_x = 0.336974133777;
    tmp_msg_0.err_y = 0.0648837643201;
    tmp_msg_0.err_z = 0.428033474876;
    tmp_msg_0.rf_err_x = 0.43690426432;
    tmp_msg_0.rf_err_y = 0.131388487127;
    tmp_msg_0.rf_err_z = 0.74059224257;
    tmp_msg_0.rf_err_vx = 0.994969389195;
    tmp_msg_0.rf_err_vy = 0.143888619228;
    tmp_msg_0.rf_err_vz = 0.515258268238;
    tmp_msg_0.ss_x = 0.84468326869;
    tmp_msg_0.ss_y = 0.070240424784;
    tmp_msg_0.ss_z = 0.643693669057;
    tmp_msg_0.virt_err_x = 0.800068064075;
    tmp_msg_0.virt_err_y = 0.614463269831;
    tmp_msg_0.virt_err_z = 0.801228409332;
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
    msg.setTimeStamp(0.968672283976);
    msg.setSource(41536U);
    msg.setSourceEntity(37U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(92U);
    msg.ax_cmd = 0.0152874515121;
    msg.ay_cmd = 0.758310495438;
    msg.az_cmd = 0.244266934584;
    msg.ax_des = 0.796593865468;
    msg.ay_des = 0.787261820464;
    msg.az_des = 0.137597517191;
    msg.virt_err_x = 0.676739123971;
    msg.virt_err_y = 0.416798337458;
    msg.virt_err_z = 0.423318869574;
    msg.surf_fdbk_x = 0.419279359618;
    msg.surf_fdbk_y = 0.502216534675;
    msg.surf_fdbk_z = 0.302164234394;
    msg.surf_unkn_x = 0.109929739209;
    msg.surf_unkn_y = 0.46640638424;
    msg.surf_unkn_z = 0.611306942943;
    msg.ss_x = 0.200968215441;
    msg.ss_y = 0.467388528788;
    msg.ss_z = 0.134596531733;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IEOMADLWVOPBRAWKNNILKJNEOBIYFKDJYWBJPEXBLAFQOOHBGEAVQBWJFKVTMGEASYTIBXMSZDMAQLCUJCGVBSVLWSGTAYVUDCSFTJUUHOQFMSCZKGHONGHMFZYIZHDHGJBJTRZPAEWRQYEZDRXUNCKVLOHXLFUNPZBYSXQHRJWVXKIIHZTFXUNEH");
    tmp_msg_0.dist = 0.814443085576;
    tmp_msg_0.err = 0.523322589176;
    tmp_msg_0.ctrl_imp = 0.560086898988;
    tmp_msg_0.rel_dir_x = 0.367762014147;
    tmp_msg_0.rel_dir_y = 0.430076537691;
    tmp_msg_0.rel_dir_z = 0.828643360986;
    tmp_msg_0.err_x = 0.996413348768;
    tmp_msg_0.err_y = 0.862192964641;
    tmp_msg_0.err_z = 0.321607460748;
    tmp_msg_0.rf_err_x = 0.821062906138;
    tmp_msg_0.rf_err_y = 0.320043699124;
    tmp_msg_0.rf_err_z = 0.953263179664;
    tmp_msg_0.rf_err_vx = 0.657021545197;
    tmp_msg_0.rf_err_vy = 0.33120072892;
    tmp_msg_0.rf_err_vz = 0.227909597996;
    tmp_msg_0.ss_x = 0.96788000592;
    tmp_msg_0.ss_y = 0.959569892222;
    tmp_msg_0.ss_z = 0.499960211519;
    tmp_msg_0.virt_err_x = 0.507040241306;
    tmp_msg_0.virt_err_y = 0.656974071173;
    tmp_msg_0.virt_err_z = 0.593972160541;
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
    msg.setTimeStamp(0.678491025811);
    msg.setSource(50186U);
    msg.setSourceEntity(147U);
    msg.setDestination(23812U);
    msg.setDestinationEntity(33U);
    msg.ax_cmd = 0.436217955364;
    msg.ay_cmd = 0.923544106936;
    msg.az_cmd = 0.132762582544;
    msg.ax_des = 0.826690328171;
    msg.ay_des = 0.0829218917754;
    msg.az_des = 0.305796626578;
    msg.virt_err_x = 0.937647391159;
    msg.virt_err_y = 0.599371284673;
    msg.virt_err_z = 0.270465566916;
    msg.surf_fdbk_x = 0.761580831271;
    msg.surf_fdbk_y = 0.0187441182469;
    msg.surf_fdbk_z = 0.0838808545872;
    msg.surf_unkn_x = 0.962416153406;
    msg.surf_unkn_y = 0.598876374109;
    msg.surf_unkn_z = 0.545185335782;
    msg.ss_x = 0.191438182157;
    msg.ss_y = 0.0530498600155;
    msg.ss_z = 0.684327551405;

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
    msg.setTimeStamp(0.19728515148);
    msg.setSource(3424U);
    msg.setSourceEntity(19U);
    msg.setDestination(62179U);
    msg.setDestinationEntity(20U);
    msg.s_id.assign("URJMEZJYVYTOCJHMFDHILYONEUFFIGUQBZJUMOFQFRRPBYKRQHTVNTIOSLPQWXZAUTOOGPDYMBMICRLCKSJVFATCJRHFQJSUOEHXNNIWMGUXDEGSBDZBXVIZ");
    msg.dist = 0.698756136381;
    msg.err = 0.650847456285;
    msg.ctrl_imp = 0.705608669202;
    msg.rel_dir_x = 0.676828445928;
    msg.rel_dir_y = 0.304415859502;
    msg.rel_dir_z = 0.0456817359777;
    msg.err_x = 0.0556725892064;
    msg.err_y = 0.444249416898;
    msg.err_z = 0.633445597647;
    msg.rf_err_x = 0.108821264935;
    msg.rf_err_y = 0.561317295797;
    msg.rf_err_z = 0.634372790877;
    msg.rf_err_vx = 0.546879338729;
    msg.rf_err_vy = 0.324374105615;
    msg.rf_err_vz = 0.589124939732;
    msg.ss_x = 0.851970758576;
    msg.ss_y = 0.610277039483;
    msg.ss_z = 0.51944010704;
    msg.virt_err_x = 0.556435427001;
    msg.virt_err_y = 0.531395882376;
    msg.virt_err_z = 0.944160234201;

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
    msg.setTimeStamp(0.980384372);
    msg.setSource(23520U);
    msg.setSourceEntity(127U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(223U);
    msg.s_id.assign("CMDQDCZRXKYJBVXYRMOSKTEDMEAZNADLPZAYZAPSZPIEDSVFKEOTPTWFGKJBJEIJEUTIRWXKTYOWUUFJOWGTCGYOTQFHRCIPLXQBAZVUNHEYKQKQCQVZRBMBMVPRNLQYGYNCOXICALEQEJULBVSPPWVWWULXTPRVNXQHBCLNUSXQTMFGAPBIDELSSHJMWZWSRXBNUVYAGSKMMGUOFHMYJCFJHKFLCNROGKJZAIRFNGNLIHBV");
    msg.dist = 0.30361832612;
    msg.err = 0.82695018012;
    msg.ctrl_imp = 0.920120617422;
    msg.rel_dir_x = 0.434071946489;
    msg.rel_dir_y = 0.209633822522;
    msg.rel_dir_z = 0.680281975568;
    msg.err_x = 0.408481239534;
    msg.err_y = 0.37697324935;
    msg.err_z = 0.359443336399;
    msg.rf_err_x = 0.170854615538;
    msg.rf_err_y = 0.0918930480061;
    msg.rf_err_z = 0.910385722588;
    msg.rf_err_vx = 0.976643908613;
    msg.rf_err_vy = 0.0704835280114;
    msg.rf_err_vz = 0.185856832045;
    msg.ss_x = 0.273035175268;
    msg.ss_y = 0.803403863234;
    msg.ss_z = 0.299671836727;
    msg.virt_err_x = 0.331547766585;
    msg.virt_err_y = 0.403382914307;
    msg.virt_err_z = 0.777717197994;

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
    msg.setTimeStamp(0.486617711855);
    msg.setSource(36075U);
    msg.setSourceEntity(51U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(216U);
    msg.s_id.assign("EKOWPPCKLPHFVLYZNAXJVGJGEUFUKWFYTBMXWNXBXIIWCBAOQDCJMMZTBIUTGXJKQRSHAOBQYSUOASTXGZECPLHNXEQDSGKLKLOEDBSWATYVUJDYRXYUIFTMOPEVIMSVMEXPRHVQKVNZDNKZDRGIRBNPDYOJLQWDIFVUBH");
    msg.dist = 0.473927444911;
    msg.err = 0.615723698181;
    msg.ctrl_imp = 0.774061626019;
    msg.rel_dir_x = 0.503835121222;
    msg.rel_dir_y = 0.555639200614;
    msg.rel_dir_z = 0.516176284521;
    msg.err_x = 0.260942766286;
    msg.err_y = 0.595312431432;
    msg.err_z = 0.833947854902;
    msg.rf_err_x = 0.477453813618;
    msg.rf_err_y = 0.135022014591;
    msg.rf_err_z = 0.610243554389;
    msg.rf_err_vx = 0.271184439877;
    msg.rf_err_vy = 0.98522227089;
    msg.rf_err_vz = 0.203874253217;
    msg.ss_x = 0.589145807326;
    msg.ss_y = 0.274212794058;
    msg.ss_z = 0.520859278104;
    msg.virt_err_x = 0.864582996036;
    msg.virt_err_y = 0.109725619306;
    msg.virt_err_z = 0.594324234665;

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
    msg.setTimeStamp(0.061498032136);
    msg.setSource(13106U);
    msg.setSourceEntity(36U);
    msg.setDestination(2681U);
    msg.setDestinationEntity(72U);
    msg.op_mode = 130U;
    msg.error_count = 166U;
    msg.error_ents.assign("HAHEPAMPQJMUSVFKUGFJYRNNQZGJTDLPJHUYQETIJWIQUVVVHNWLRWOGHTWUDWGNXJXLKBAGLOOPJJFIGCTDHLOKUMYIDXCVMNBECRKWHYDITIZJUCRKSMRMPDFFOSFLSYRQYAISCUZLMKUXTUKRTAZMIOPEFNFNKZZRNMODXEEAIKBGQBZDBTOGCFXPHV");
    msg.maneuver_type = 44804U;
    msg.maneuver_stime = 0.11313170926;
    msg.maneuver_eta = 7392U;
    msg.control_loops = 929167450U;
    msg.flags = 23U;
    msg.last_error.assign("OATOLUIIJOVKNGAXGHDCZJCIIRZAPTKDPXBXMWGRYOCPURMPZEHCJYHMRHFIVQLDKROBFFJIHEOTZDDXTVPFZVLZEHNRGIHMFHNLNQYYVYWGKGWAOXUAMMAKSEKSDUAMNFTCUTWUBEMZEHXQ");
    msg.last_error_time = 0.985524077135;

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
    msg.setTimeStamp(0.986476087654);
    msg.setSource(21164U);
    msg.setSourceEntity(99U);
    msg.setDestination(30193U);
    msg.setDestinationEntity(195U);
    msg.op_mode = 76U;
    msg.error_count = 217U;
    msg.error_ents.assign("LANWJLWGGUMKNTDPHQUJAZJMEEKROSHUCJZDXQTOTVVJPJEZXWGTGS");
    msg.maneuver_type = 25230U;
    msg.maneuver_stime = 0.749207273772;
    msg.maneuver_eta = 46501U;
    msg.control_loops = 646535228U;
    msg.flags = 97U;
    msg.last_error.assign("OAWJCFQDMQUAGMUG");
    msg.last_error_time = 0.0543300455454;

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
    msg.setTimeStamp(0.177425796855);
    msg.setSource(9410U);
    msg.setSourceEntity(79U);
    msg.setDestination(23911U);
    msg.setDestinationEntity(3U);
    msg.op_mode = 244U;
    msg.error_count = 141U;
    msg.error_ents.assign("RGQOYYYAUQCBHRZZJXAGXQAGELSLILBTNGNCWKOTSOLSUH");
    msg.maneuver_type = 37997U;
    msg.maneuver_stime = 0.0996091706794;
    msg.maneuver_eta = 18404U;
    msg.control_loops = 3889315076U;
    msg.flags = 96U;
    msg.last_error.assign("BMIPFMLJQAYGHIUXVZRYQHRDCPBNFTIAEJDSLDKLYZHQIAWLLOICVGUUYJWUFYQENDNTMVBCPHUTUGGSYAEAFGKGNJZXJXMJDZUNQUXROKSTZKVCDVPJBHBPZKSFWWSWEECWCLAZSMBXWEDQQMTCTLMRVFNAENVNKOMUR");
    msg.last_error_time = 0.293452459403;

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
    msg.setTimeStamp(0.327784434531);
    msg.setSource(21547U);
    msg.setSourceEntity(155U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(249U);
    msg.type = 9U;
    msg.request_id = 53955U;
    msg.command = 171U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("OPTHBSCEOWRVFXQZVWM");
    tmp_msg_0.formation_name.assign("RZYIQJUZLZLGJRNVOOMLSRXILNIERKPBHQXCZDJBZPOVWRJBPVZG");
    tmp_msg_0.plan_id.assign("QECVTPCOWABLARFTFKKORMRRUINVSCSQVKYPQNVBAZEPGXJYLUKFWCYDGYOHDSBWHELIMZWPDRNFPNXHUWQIVOLOIBPETJSGVMTKTPCIBANYKXXEGHZOURQOHJMTHMQMROLAPCYS");
    tmp_msg_0.description.assign("QJHKEAKVGWPPDVGHDLORAJYPLGDTPRLICSFUHZIOLGNAZFMJARCXMBDNEBEPYEBRNIWYRXUFLYBYOXJRJTIFONCNZLUMNXMGGZFGZQFJWBWBDJXIGPCUVASZC");
    tmp_msg_0.leader_speed = 0.573380284987;
    tmp_msg_0.leader_bank_lim = 0.902890981471;
    tmp_msg_0.pos_sim_err_lim = 0.310735099439;
    tmp_msg_0.pos_sim_err_wrn = 0.534072138757;
    tmp_msg_0.pos_sim_err_timeout = 52295U;
    tmp_msg_0.converg_max = 0.921845645098;
    tmp_msg_0.converg_timeout = 11411U;
    tmp_msg_0.comms_timeout = 58317U;
    tmp_msg_0.turb_lim = 0.195691069392;
    tmp_msg_0.custom.assign("EMKABRHZZTSXOVRSLVJAVTGXMHMJNLTBZFCGTXGNUTJKDKSNGTBRWJGCDDTYJSLDNYHOIWIGFOYHUWPOKYUIEAIQFDHNXWUENQTACQEDOBBQVCYEVGMQGAUAUREBVHVQOZRUVYZOEZRXZJKNSRCVURBLZGLPFMZPBQSRMTCYLLAJXHMJNLIHCFCSPFPOXIIIWSYEIPOUHKWMXPDVYXFFSOQQWGMERKFNKPCWADU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43661U;
    msg.info.assign("LQMTRBPUMDJEJFQKLUNPLDXHJYEWHQWNPHREGSKSJGBVURICH");

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
    msg.setTimeStamp(0.0521645503368);
    msg.setSource(58248U);
    msg.setSourceEntity(223U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(29U);
    msg.type = 109U;
    msg.request_id = 21605U;
    msg.command = 47U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.22322266342;
    tmp_msg_0.lon = 0.609669092756;
    tmp_msg_0.z = 0.818233946303;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.radius = 0.214636225022;
    tmp_msg_0.duration = 17643U;
    tmp_msg_0.speed = 0.78931577136;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.custom.assign("CLCGVJZAQKLGVSOMFNUYYCFNMZTOTWCPHDVIJSGERYRQIBLMMEXQXPTBQISIYXKAUYHEKMLPRTEOJUBCFGKNVIFZFOXPKSARPCBBAZZGYUKCTABPUJVADNWGJSYIBOSWZRMULQHRAIBNOVTULNXWDVENICMIIWERNTKWYQLPDGFDFOZKWEHEWMFYWAENKDKQGOFTGCJTBUOROHMJHHZFWXZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51703U;
    msg.info.assign("TZSGQGAVLNXKYZNHBXNFXOBWJEWSTAZCMDWDTNCDIBPFUUVAVEDAPEVRPZCXWDTVMJGIHQHGRFQXACCESAUWRPLBLIIBOEUFKMXTJHTDLRYQSCRWBHUQJVYGSGYMEXINCHMAPTLSAYFYDHE");

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
    msg.setTimeStamp(0.242609285248);
    msg.setSource(42323U);
    msg.setSourceEntity(15U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(61U);
    msg.type = 117U;
    msg.request_id = 40103U;
    msg.command = 96U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45847U;
    tmp_msg_0.flags = 220U;
    tmp_msg_0.lat = 0.783579486861;
    tmp_msg_0.lon = 0.0915165407966;
    tmp_msg_0.start_z = 0.764274075295;
    tmp_msg_0.start_z_units = 114U;
    tmp_msg_0.end_z = 0.609524293719;
    tmp_msg_0.end_z_units = 228U;
    tmp_msg_0.radius = 0.82842208223;
    tmp_msg_0.speed = 0.879899205027;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.custom.assign("OOEKVLQSJHTNQTQASWSTQABXZRXNNHIDELCCDMGBOJXJMWAWBDBURXVIESTYOIJWVKHPAZEHVRTUDPWKLSVYGCZMJWKDLYQZCLJTRRRAIOJROGLFYFODYFWJSZGXAXEZUTBAVFGGNITKZEBPVTMDGNEUYFRWCISNZEUACXCKGNAYSIFPBKRSUMJHUIWTHP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18241U;
    msg.info.assign("DOFAQBLRQSZUYMZQYTPVQSJNMXFUPZWOESUYGVJYGUWMWNIMSBYLUNWVNWBQOEXCLJEJWTEDSRIBPGGEGJABPXDCVKQYXGZPSMHGNBIEURSRRJUUKJHHCHENYLXROMCVJTDNDCIMKQPNKIZDFKAJLBZXWHZHCLFDAVSVTXRPTRSKIUAWVPIVKHJBDOSBIOZURPFGBCHYTMRKFLPZGKTCQLOOACOZXXFFLVFLHAI");

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
    msg.setTimeStamp(0.134771252443);
    msg.setSource(17855U);
    msg.setSourceEntity(87U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(4U);
    msg.command = 253U;
    msg.entities.assign("NPJAPNWAMYLBDIPLHQYTQDLPQPGVBYYAJXVSWJSFGJXCNFERLWBITGKHCCNMGHOUZROTNQKGI");

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
    msg.setTimeStamp(0.23515500882);
    msg.setSource(378U);
    msg.setSourceEntity(189U);
    msg.setDestination(47804U);
    msg.setDestinationEntity(81U);
    msg.command = 88U;
    msg.entities.assign("OQFYWDESMZPVKDDSCHGNYTBRIPZVLQDTVOUXIPJCEVNAXZQURJMWPFPRSLPAGTFHKBNZHXBIMUTIENEJEGOQVRKIXGQHCNSFGCGEMXALYN");

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
    msg.setTimeStamp(0.738669121332);
    msg.setSource(51577U);
    msg.setSourceEntity(98U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(146U);
    msg.command = 90U;
    msg.entities.assign("WSGZPKOTXABGEVZMMGOMLFAVYNMEDYATREHLDLWOFLWJUDWSLRBSUWPIWQYLMJMQVJXOQYLJURURXCNBUDEVVIUEKORUBUWFPSXHAMHVTDHSCXZEFICSNAZZEJXQGYDANGCPNIWXCEMKBNNWTHQGZDYYGHKKJVQTGCHZGFYHFKRKLJKIRSHLOYZSPRMBUBWBNBFIZIJTJGBDSVOCIAPEJAKQORNZLFHVOAQIPTXYTDPDXTC");

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
    msg.setTimeStamp(0.469185376325);
    msg.setSource(43787U);
    msg.setSourceEntity(79U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(231U);
    msg.mcount = 112U;
    msg.mnames.assign("BQMUSZTLQSJUHORUQQSZEBFGMYBXMVLQWHTTHQMGFFPIUGJPWYJDYGVSGFROBAZMLIZIELLDOPNSNIJWPJAGKYEZDSBUYWSANCEVHVBHCKYFYUWLGEVOXCREIDHTRXDDDFYZENJWGIRFHUNDVTUKKMQBMLPLOSPSCAYQ");
    msg.ecount = 18U;
    msg.enames.assign("UAXGEDVCYOPZJTXIRGRUCNWPFFVIOQMQNSBDSYXVNBPSFITBEAUUVMMZDRAWMRJHWHWWSZVOPMLYGOEKRWCWMVLTFRJMENGFJHQLSJIHAZCUNSZRKSEQAADLDGGQACHJAYBECUDLWCQHEOPYKNOKVDKCYIXJVSOESQIKFCGMVGFXLUNHGFMOSDFBIYHHGLABFJZXUNRQUEEZPQPAZUTBQPDYJBTPWTTIDTTXNWHNZJTXXO");
    msg.ccount = 91U;
    msg.cnames.assign("WNQOMTXYGFRMQTTSAYXEORQNYLMAXFBPENUYTNXCBBLPHAZLDAFVZLMZVNEIRMPBJKIKYWXRMXSVWNHLKUDDHNZHSSEUPGCPNHGRXUGYBHMVERVIFFFBCDTJVLEBGISJJFTNFWGOYMRSGJXZYCDWAOCLQZTUTKWOKEAAALG");
    msg.last_error.assign("RGVHMGLLDTBYHKHREYCIBJNSRIKPKEAUMYQQDIRCWDSPLKUXOOHYSEZNXBHZJITZFZZUSUJZWOWMWCGOVNMECRFOGWITBRCAIALUJGAFUSDCBRHOWMEGUGJZCGVTESNFVBTKZNLLEQCSJUNOKNUXBXVYDPAKVTTJA");
    msg.last_error_time = 0.551893139436;

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
    msg.setTimeStamp(0.217055720088);
    msg.setSource(12983U);
    msg.setSourceEntity(40U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(49U);
    msg.mcount = 10U;
    msg.mnames.assign("ZFSYMTOMLAPZJFGPTCSWVDEIXXXLEBIJDAAHNJMRTYUEKJBCHJFUBKLBIYBCRTKNRXFCNMLPVQSUFMPQNCBROPZAUGZKMUYJVOLVXCFOAEQAUWMEVSCNKZAOSNBPSJKENYXOIQZGTYWSRHLWNDWIQPMJYZEER");
    msg.ecount = 46U;
    msg.enames.assign("TXHUSKFQBADDIBZIVXXTIATVXWPGWY");
    msg.ccount = 45U;
    msg.cnames.assign("IIVQQNVOUEGLLIYNVCWSKXNBHWFTISJRJMHUJOVXZYWYDLFDGPLZKAMKPEBASL");
    msg.last_error.assign("XBYFHUSZYNFAZUNNWDCIJGDVUBXZFBQW");
    msg.last_error_time = 0.811110264396;

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
    msg.setTimeStamp(0.749698144378);
    msg.setSource(6279U);
    msg.setSourceEntity(181U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(217U);
    msg.mcount = 112U;
    msg.mnames.assign("UMZTTIRBKOTCQHXLKMHTDAYWCKOQKHXXWTXJEBSIICLLGRGZZJTQYSVJAZBGOFUZVVRBBYNKGFNCWIOQFZFFKDBOARQWUPNSXZAPCRXGULGREPDNYGUSEYHFPZMHATJNLMZIUQLWGBMONYUCOKEFBKSRPHWEVALDSEYDOUKISYMEVFGZDUMHVILPNIGL");
    msg.ecount = 240U;
    msg.enames.assign("WYGVKRMXCNEODZYSUMJRBQPJHGASVBJAWHYLGKVUOHQSSMKDR");
    msg.ccount = 54U;
    msg.cnames.assign("TTTATSMKRYAPJVXUBZWFNMGQFCMJIEYPRJWCPFIICHSQGGIHMCEXGIWDFPOVLMZKWKHNVWTXFPUQZJFDHNYHFSDWQKJFMOOGXSQQAKRENRGCRLZOVSUYWNXKSJULBCOPESIXUYHTKGXZNLFILDJYBGBZAEQTISPXLAACWSODNLZDERZAUIBOCROMPHZTYVQ");
    msg.last_error.assign("REKAHQDHADGXTZXALPFPLUOVGRFXDFQQVPKPOQODXNVEAXXZLKGNWBFQEWZMADSRHVKGWYKRDCBONWDEXNFUBPPLMCZWSCINATYJIJYBC");
    msg.last_error_time = 0.426381944975;

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
    msg.setTimeStamp(0.348714333067);
    msg.setSource(7617U);
    msg.setSourceEntity(146U);
    msg.setDestination(48045U);
    msg.setDestinationEntity(90U);
    msg.mask = 218U;
    msg.max_depth = 0.204126120542;
    msg.min_altitude = 0.0501029462641;
    msg.max_altitude = 0.165855260758;
    msg.min_speed = 0.469704306798;
    msg.max_speed = 0.440656113549;
    msg.max_vrate = 0.148512341612;
    msg.lat = 0.621267091482;
    msg.lon = 0.156227945038;
    msg.orientation = 0.963770653223;
    msg.width = 0.322438173352;
    msg.length = 0.0174134706843;

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
    msg.setTimeStamp(0.503694364121);
    msg.setSource(17745U);
    msg.setSourceEntity(62U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(174U);
    msg.mask = 185U;
    msg.max_depth = 0.187517809403;
    msg.min_altitude = 0.432235949937;
    msg.max_altitude = 0.49677127936;
    msg.min_speed = 0.0400784535832;
    msg.max_speed = 0.641384468436;
    msg.max_vrate = 0.429154288582;
    msg.lat = 0.32341752;
    msg.lon = 0.109791734535;
    msg.orientation = 0.312896638593;
    msg.width = 0.0893608492708;
    msg.length = 0.180940406082;

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
    msg.setTimeStamp(0.935319869251);
    msg.setSource(6170U);
    msg.setSourceEntity(77U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(73U);
    msg.mask = 4U;
    msg.max_depth = 0.0451696857157;
    msg.min_altitude = 0.357991782545;
    msg.max_altitude = 0.320591487966;
    msg.min_speed = 0.0106884888389;
    msg.max_speed = 0.200236665204;
    msg.max_vrate = 0.0490516770043;
    msg.lat = 0.578543472494;
    msg.lon = 0.214736685103;
    msg.orientation = 0.588513943344;
    msg.width = 0.367485588539;
    msg.length = 0.683950389787;

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
    msg.setTimeStamp(0.52257794086);
    msg.setSource(20570U);
    msg.setSourceEntity(154U);
    msg.setDestination(25471U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.61460184525);
    msg.setSource(459U);
    msg.setSourceEntity(141U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.551881867109);
    msg.setSource(19241U);
    msg.setSourceEntity(251U);
    msg.setDestination(12804U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.682254138039);
    msg.setSource(41630U);
    msg.setSourceEntity(107U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(208U);
    msg.duration = 15017U;

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
    msg.setTimeStamp(0.722293779921);
    msg.setSource(40731U);
    msg.setSourceEntity(11U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(202U);
    msg.duration = 13115U;

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
    msg.setTimeStamp(0.166683627568);
    msg.setSource(23726U);
    msg.setSourceEntity(235U);
    msg.setDestination(54504U);
    msg.setDestinationEntity(126U);
    msg.duration = 51729U;

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
    msg.setTimeStamp(0.676426814897);
    msg.setSource(4677U);
    msg.setSourceEntity(5U);
    msg.setDestination(21359U);
    msg.setDestinationEntity(58U);
    msg.enable = 245U;
    msg.mask = 2307526322U;
    msg.scope_ref = 2144743083U;

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
    msg.setTimeStamp(0.513966191286);
    msg.setSource(63075U);
    msg.setSourceEntity(198U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(193U);
    msg.enable = 74U;
    msg.mask = 1686361771U;
    msg.scope_ref = 2422817152U;

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
    msg.setTimeStamp(0.745279086033);
    msg.setSource(1596U);
    msg.setSourceEntity(107U);
    msg.setDestination(62924U);
    msg.setDestinationEntity(8U);
    msg.enable = 72U;
    msg.mask = 320859173U;
    msg.scope_ref = 4286740855U;

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
    msg.setTimeStamp(0.598651299898);
    msg.setSource(38313U);
    msg.setSourceEntity(136U);
    msg.setDestination(22614U);
    msg.setDestinationEntity(61U);
    msg.medium = 112U;

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
    msg.setTimeStamp(0.514539664693);
    msg.setSource(15946U);
    msg.setSourceEntity(112U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(162U);
    msg.medium = 109U;

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
    msg.setTimeStamp(0.741020255897);
    msg.setSource(12536U);
    msg.setSourceEntity(201U);
    msg.setDestination(46039U);
    msg.setDestinationEntity(25U);
    msg.medium = 215U;

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
    msg.setTimeStamp(0.705952513436);
    msg.setSource(55071U);
    msg.setSourceEntity(194U);
    msg.setDestination(32724U);
    msg.setDestinationEntity(193U);
    msg.value = 0.544782267601;
    msg.type = 59U;

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
    msg.setTimeStamp(0.492778735602);
    msg.setSource(32205U);
    msg.setSourceEntity(136U);
    msg.setDestination(9597U);
    msg.setDestinationEntity(195U);
    msg.value = 0.172790771363;
    msg.type = 127U;

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
    msg.setTimeStamp(0.585627358986);
    msg.setSource(8420U);
    msg.setSourceEntity(89U);
    msg.setDestination(34694U);
    msg.setDestinationEntity(213U);
    msg.value = 0.656656329039;
    msg.type = 192U;

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
    msg.setTimeStamp(0.925062052813);
    msg.setSource(34331U);
    msg.setSourceEntity(172U);
    msg.setDestination(4441U);
    msg.setDestinationEntity(16U);
    msg.possimerr = 0.52608986196;
    msg.converg = 0.684945184245;
    msg.turbulence = 0.712656711989;
    msg.possimmon = 4U;
    msg.commmon = 206U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.656212892658);
    msg.setSource(43500U);
    msg.setSourceEntity(26U);
    msg.setDestination(58941U);
    msg.setDestinationEntity(28U);
    msg.possimerr = 0.190668010745;
    msg.converg = 0.603564849617;
    msg.turbulence = 0.890467403262;
    msg.possimmon = 72U;
    msg.commmon = 237U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.423575025261);
    msg.setSource(36352U);
    msg.setSourceEntity(230U);
    msg.setDestination(13352U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.591017802584;
    msg.converg = 0.535976188004;
    msg.turbulence = 0.709453031427;
    msg.possimmon = 99U;
    msg.commmon = 42U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.247838833656);
    msg.setSource(10748U);
    msg.setSourceEntity(92U);
    msg.setDestination(16106U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 239U;
    msg.mode.assign("SVSNZQCWYODHJHIFVCTMFQMLUPXEZITXGRDPLEIGIWYKJKHGYMCMXWGYTJZFCOYMGXUUERQQAFJIRKCBSSKAYYYDPBXMCAAHDKNBEGPXOJVHBA");

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
    msg.setTimeStamp(0.572279930766);
    msg.setSource(6606U);
    msg.setSourceEntity(43U);
    msg.setDestination(29586U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 212U;
    msg.mode.assign("JPGYLXBDTZTJBLDVIQIGWZLFJOOONWCKGTHXZAEFBHIUKFDOELJILASFTPKYGXAAHWCDPKCRUTWDUXGHINRFRMWKKRSIBMEVFUSKDUMJERCQMFTQZQEALPZDVDIEPRFUBBZMEKOCSSVSLYXTGRXCGYKPVVMFYGMPCHPUACRLOJNSWVKHAQYJSEMQYIXNQEOQQUBZSNUIJGUNJVOZBWCXYBMTSARAWZMDNFHHTQYLJOXXNCVDZHBHWEOV");

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
    msg.setTimeStamp(0.25534378982);
    msg.setSource(41902U);
    msg.setSourceEntity(2U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 182U;
    msg.mode.assign("KWLMWQDNRFWOUEHIGYLUAZQPYMTFRRHLOGAKQEIKYEPHPRJMORAHFZFMPBEUNWLHGDHXZEDRAPHWTENMPQLOJAXJDGCPMCBQSCXGPWMYENVXYYVJM");

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
    msg.setTimeStamp(0.164112873615);
    msg.setSource(16662U);
    msg.setSourceEntity(202U);
    msg.setDestination(50388U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.167455491106);
    msg.setSource(60847U);
    msg.setSourceEntity(154U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.879915501545);
    msg.setSource(22006U);
    msg.setSourceEntity(139U);
    msg.setDestination(29161U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.342657941607);
    msg.setSource(47233U);
    msg.setSourceEntity(177U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("PEVZJMUHRZIYNFXKUMRNJEUEEGGEKSBLVKLLHCQQTMCNITQOIIHRCFLTQXYPOGSPABHMOLWXNAEWTSRVENYUBHDMKMAHJCWPTXGKOZUDWCISVGNKTCSNBNXCDPLQGCORSFTYKDQTUAESPUXDFYYGKWWALUZUJSA");
    msg.description.assign("FBCUHYSRPMOXJTYQZOGDKNYKEWGJFUNHEZDZEILEGHJBWBPWIZUTKADYKTHRANWMUSMPZ");
    msg.vnamespace.assign("LDEEOXDLEVQZRLZKSSOGNNBVBDIMAJFYGVFNZXMULAFFAFXREJUQQONOWZIZKPPWMIATFXCPHZRFJRCQTMCYNTJGQHOTTKGURBULTSMVODFVIZJTHAEJKNXSPECMYHJJZCDDNUVPYDKIWNBZCTTYPAESBGELRSAC");
    msg.start_man_id.assign("SJSYUTYBZKLTDLHJUTMVUSYPXMNRVKLVQMQWVPLEIPVBMOJKQUCJDQPAUTYIZBZOMSPQRJWRCZRFTS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AOADXWCMMNQKUYLVIOJDVJVPGWCPJUNXBXKHXGIGZHALKKMPNRRADCSQEWKEIVTAHBSSZSWYCJNFJGMAZEPGIIZRAGNSDYLWKJNJBLTQXHQLIWFILEEEH");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 55421U;
    tmp_tmp_msg_0_0.lat = 0.0620818059749;
    tmp_tmp_msg_0_0.lon = 0.355419041668;
    tmp_tmp_msg_0_0.z = 0.870840556694;
    tmp_tmp_msg_0_0.z_units = 103U;
    tmp_tmp_msg_0_0.speed = 0.45873931965;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_tmp_msg_0_0.bearing = 0.385094764708;
    tmp_tmp_msg_0_0.cross_angle = 0.697025200004;
    tmp_tmp_msg_0_0.width = 0.676332214024;
    tmp_tmp_msg_0_0.length = 0.841800576129;
    tmp_tmp_msg_0_0.hstep = 0.867836176756;
    tmp_tmp_msg_0_0.coff = 29U;
    tmp_tmp_msg_0_0.alternation = 241U;
    tmp_tmp_msg_0_0.flags = 37U;
    tmp_tmp_msg_0_0.custom.assign("GRZYTOJEXDKRWWTBOJQWFQYOQGIAVXUPUXJJRZNBAXRQEQHDUPVMZJSTFPOGKEOSHFRPISTUCBLDURXKZCVMUASVMLFZWWYYLFIHSLRANQXTJSHWYLFDCXPPNJKDGQLAIUGFYOWERHKDXNUAEVQONYBHAGKMFVIHHEKBGHNAZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SessionSubscription tmp_msg_1;
    tmp_msg_1.sessid = 2313439457U;
    tmp_msg_1.messages.assign("IKCOFBUWPLFKGGBLGTRZRDYLIZPIYADESNEHOEJEXGXHNYKRFJDGVEIYOAQLHABSIRDEQKMGRFVVGMMZEWPHATCODSUHPLZUXHCTWTHEDJWOQQFFYFTWISNMWOTBNFSUIWTBMPCJIVETWUWZRLUSSZBCQJCJPRVYCPKBAAETBMJTMUDYPXHBNYZJPRXAKQXXWQLDFSIBNALVUQYKIVAONLRSOJGNQCXZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamTxFrame tmp_msg_2;
    tmp_msg_2.seq = 41169U;
    tmp_msg_2.sys_dst.assign("HUSFTMZROLOAQYUENNROGEVWPXWTCNFXRLMYEGJMMOHMLBVFXBKBCZXDMZSFZWQDTEETPGIRWUCVTISOIRUCJEJTBKBZCDEVRQMWCPNLSJHTTPSXYALIXSSWXCIYZSQADOGFRWXYAOBZDPZNKAFAKRLQGHJDSNVZGBGDPVYPAWREUGOCXJNCAFVHQPHTTUKNKYR");
    tmp_msg_2.flags = 154U;
    const char tmp_tmp_msg_2_0[] = {103, -110, 52, -25, -31, 105, -17, -50, 2, -46, 119, -83, 12, 24, 105, -103, -27, 94, -9, 71, -71, 44, -55, -55, 38, -87, 31, -75, -39, 38, -36, -103, -96, 124, 94, -76, -16, 29, 53, 88, 50, -111, -42, -114, -39, -61, 87, -56, 7, -89, 10, 24, -96, -69, -32, -115, 124, 43, 25, 122, -11, 54, 47, -71, 69, -94, -4, 58, -19, -128, 96, 95, 70, -21, -52, -30, 75, 59, 11, 0, -80, -84, 84, 94, 85, -47, 23, 104, -50, 28, -128, 74, 72, 115, -72, 42, 57, 7, 24, -102, -94, -74, 52, 8, -44, -27, 47, 113, 96, -106, 44, 90, 34, 89, -105, 42, -39, 17, 81, 55, -33, -81, 22, 14, 110, 46, -80, 101, 17, -10, 117, -103, -59, 50, 117, 121, 116, 113, 30, 78, 56, 94, 103, 39, -5, 72, -12, -15, 26, 97, 32, -4, -38};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.940468321806);
    msg.setSource(48566U);
    msg.setSourceEntity(28U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("QUZKQSARPTIEYYBNGAOGDBOVVNDIFJXPFDQFZHXTKVAOLDIYABBJWOMRQCJQWVXQPCXWGYJMPYAHEKZDUSTHUMOVSOXEFKDUFKNOSHEMQKQAORZNGMOBLPLMUETWPP");
    msg.description.assign("EKNPXYBQIBDZEZATHDVVLSYJBMVFJIGSQNDPGFIRCPCKHNHNMQTJPDUEDIRMMPWSGOOEGTTCRTLTXOIWWGENXZQBFQUFGPJEQLTNCLFVIURBGUGHOBLEGXCDLY");
    msg.vnamespace.assign("PVLCPVSWSIDWWBQREXUYOLMAQNJDEBMKVGBGFUAKAUNLQIDVOMMESSBOPGMHVMUFCTXRTRXBGNNWLUNTKNCQXJEGGMESLTFXOPBVHZEFPJXHZRFTIYVPYJBYAUTVCTOWISIBQPBZDCZBHZDHUUAFEKLWTDKZCCNMHDWAFYTEAQLTRXRWHMIKRRNCPNJRJLXHHFXQJVWSZQDFLIXMGGNKWQODUGGRJIOPEZDKUYFCSHAJZVSZO");
    msg.start_man_id.assign("VMXSZAINDZMVKOZFSVRTQIHMVMCEJVMOJUXNBRLKEZHBCNPIZSDSRYWFFDECPETJNYSWPQMOLGAMCLRRN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XVGWLYTUFKVVJYCFADEOYKSOOVQKWNNILPYNNBOMUEALRLYTPKUQHKCJWMQTLFONBHGAZEGBECGJIHRCDYIUWXWCZAOQMJQTVDIMJLHQHFMPZPNCYZKZHVARHDSTXURWQQSURFCUGSECMOVBLEVYMIPAJFJXJTBQYBGKHSHLZUNTLFOJPUCM");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("CRKSPCDEZWWKXZWXRDDOEEEJSMWPQGHOTMZONGUBEIIMKTUYQPQANAUVSMSIPQYZBUTEUFR");
    tmp_tmp_msg_0_0.formation_name.assign("EHPMYYABDCDSSKOANZWLBWRMLTSJSSZIIZIBXQNLEYCUOZDXKURPXEFZGFLBGABLZRHVFVHTDQKU");
    tmp_tmp_msg_0_0.plan_id.assign("DECXFFUKPEACLKDPICQGBKHSRICJIUXAPBWLMELBJECIKWUVRRYUZYVIKJIOMFXJUBWPGLNAXEQLFZZKAMXQEDWRMLAQHXOTHCNEDTQBQFMXVPVZTGOPNJFHTTYFAYZEBNWYOFPROCBGKJVQISSSXETUIBVOEDTUSUNXZLABYJTQCHDLSWLMZUDOTNWDWGYCKPQVONVCHXPMSQGMOHBIRSJDKLFGMROF");
    tmp_tmp_msg_0_0.description.assign("DINTKXKNDTJWIUNUYSDUMSJAOOFPHAQWTGYPSTOXLNVVSTRMYBFSAOEFVCMHOHVNHJKYSAWTEQBKGLJPBAEHZLGPARCIKRWBUWNAEHGLHFOUVGLKGEFAUBTBMLEELR");
    tmp_tmp_msg_0_0.leader_speed = 0.969807451786;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.424697374083;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.155457670925;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.872129315356;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 43581U;
    tmp_tmp_msg_0_0.converg_max = 0.328828796743;
    tmp_tmp_msg_0_0.converg_timeout = 37417U;
    tmp_tmp_msg_0_0.comms_timeout = 55459U;
    tmp_tmp_msg_0_0.turb_lim = 0.0649335441417;
    tmp_tmp_msg_0_0.custom.assign("GIYTAYWLXBSWXDQVANKOJWKSJIMDMLSDRHRELGIHFDJTEDRGFBQUEORGOOCSVNDNPJMAWANCMUKXNZKZPFDNSUNJIXGCWXHESUZYPEYVPGAQFOFQSZTNQPOMZUINOBCQYBEDGIYOBMTOSAHRREZPYKPYCLMHRWITQWHWPMLAZLFKLKVORHRAZBUGPJJA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TeleoperationDone tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Reference tmp_msg_1;
    tmp_msg_1.flags = 133U;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.00821894972069;
    tmp_tmp_msg_1_0.speed_units = 18U;
    tmp_msg_1.speed.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0546606084619;
    tmp_tmp_msg_1_1.z_units = 13U;
    tmp_msg_1.z.set(tmp_tmp_msg_1_1);
    tmp_msg_1.lat = 0.255161522777;
    tmp_msg_1.lon = 0.132425648087;
    tmp_msg_1.radius = 0.787143212809;
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
    msg.setTimeStamp(0.979985097625);
    msg.setSource(7956U);
    msg.setSourceEntity(112U);
    msg.setDestination(3728U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("YSUGGGFLGRMLDGCNHBHUXBEPVDITDUHIXQNWEXV");
    msg.description.assign("RGELPIEKFUBKCGKGNRACXMBXJZUWHSYLJVMAAOAFSDFIFBWOOVJNRHVUNEFSDZTFNPWKAVHMMMZWTZZNRHOYTNXRGKYSDYCWRINCYIVLMOUGQFOZEDEDICPJEIYDAHDBK");
    msg.vnamespace.assign("PSUAQVAXVIPZWNCKMNDJDQSBBCGSXZLOGVYLDSGYYCPMDKIKFYQFCEBEKZBJHBGXXXTWUQBKWFQXPRVWLOQJSHHZZXRBLTZVLBUIZNUTFTAVNRWJFU");
    msg.start_man_id.assign("FBRXIDAABSXJSTOGVPOKMOQPSFJUOBXLFBGMIDQOGWNILEBDWGQMRDHYTLWANIEKCEIJ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WSBWMAJHEHQSVQCQBRBQZWJXEGPKFODLIHFZLVRWVKFOMCAXIHNYHJLAYXXEPZUCLODEDKIKRBCUBNWJDTDPHZRJMZOQRKUFKSSUTGNVUJOQIBXPSTKRJECIGNMMMRNRDSAGGVXFIOT");
    tmp_msg_0.dest_man.assign("WHQAXLMOZVSTHNYGWEBSYNWMQASZOGHTGDULEPGCNRPOWALDYMGXNODCIJEZEVKJYABFSOSFQUEZEZTRUFIIWCXNHJOCQSSEHDBTRGLRCXJFVQPTOEYKKILYNBWLI");
    tmp_msg_0.conditions.assign("MSJAREPRYICTDGQFWDLGODXQPHDQGFLJYWVEZADZUCPGKNRIBMFNSCT");
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
    msg.setTimeStamp(0.145975934297);
    msg.setSource(36382U);
    msg.setSourceEntity(100U);
    msg.setDestination(14366U);
    msg.setDestinationEntity(69U);
    msg.maneuver_id.assign("UCFYZLCOSSATHXYCMHNPJQTUAFYVYLVHKMLWIWUMKXGEJMKZPAYQWMWTFQMBDNSCAUKSRJCLSEWVXHKONOMPRTUPJFLX");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 9993U;
    tmp_msg_0.lat = 0.411137233941;
    tmp_msg_0.lon = 0.464329279196;
    tmp_msg_0.z = 0.48793800398;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.speed = 0.910994721724;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.custom.assign("YMMNDLIPIMCFDFTZFOOEOWRYSNGTTETAGQYEZKXUNXTKMCWRCBXHHWQWPEABUTRNEAJAPSJGCYCRCKYKDZMEOAYEQDSVRNN");
    msg.data.set(tmp_msg_0);
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("TKEGFAMSNYYDRWJSQHJQUCFB");
    IMC::Announce tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_name.assign("PFEOFEMKHMYSHPSYKLQBDFZRHMCNTPBNLBLGNROWOIBOSFHYDZUWSQXMXOCCVYQPWIWXXVVMZUKHQZCDKYXKMVHTSJISDPXGARRKGGVJRBRWTLPQPAJDDIELMMAHZKMIJABUXECHGJIOAVFDZJFJAEFGUCUYQJPNTANUEETYWIRHOOTXKCSLMUGZZUWAOZUDKVKRNJETPBT");
    tmp_tmp_msg_1_0.sys_type = 234U;
    tmp_tmp_msg_1_0.owner = 56891U;
    tmp_tmp_msg_1_0.lat = 0.766587457956;
    tmp_tmp_msg_1_0.lon = 0.363716366843;
    tmp_tmp_msg_1_0.height = 0.383895930697;
    tmp_tmp_msg_1_0.services.assign("ZAGWNEGLALFWTQIWZZHRHEYVEYJNVXRQFGSRJJOKHLABOXQYBCOACAYVMGSQLABDKWUOVFWHZXTVAXJNIRKNENJFBKJZOBGNZINIMDJWGMXANEIQUPZTMSFPGKLYVTGZRIZFPNXDUXFJDYLIRSQPSVQWTORECKRTMGIHBDPCTPEFMMTDLEHOQBXUSSPSBCXVZYHABU");
    tmp_msg_1.links.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.150621388693);
    msg.setSource(9201U);
    msg.setSourceEntity(187U);
    msg.setDestination(50161U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("BJIAIOTGBTEWPIFTYKDATWQRUETPKYVHTHHSVPAQTKKWIFLYLXDKEDPPFIFOGPGFEQUMNLLDQLLAGBJNSMQDVOJXFHXZMIKNRZSRKCNUZLUSOJBCUFDWRXNAYHEGGPWBEWUSDJPZARBAWAQTDXOROYHUJMQPCV");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("GQICHBTNIBXNXMEYVCLQPDOUUPIHCDWZBUTANYMVBSCAKUGCRZQGNXREVTORDTIGYBNVMEWDGSHZRTKHWTYSHLQMXDBMAQSDZPJGPWJEZTFOJIYYVWLPVFZKFUTXRFKHXIY");
    tmp_msg_0.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 6536U;
    tmp_tmp_msg_0_0.off_x = 0.189210905107;
    tmp_tmp_msg_0_0.off_y = 0.760098858574;
    tmp_tmp_msg_0_0.off_z = 0.0688670879253;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VVFRSNLQPXAYEZJLXJFBTNQUZESMUYCJWKJQHOSMIPAZQRYDQOKTARAEMHNKRBWAMFXQGGKJLDBNESHITXCHONPYBZCIOTHRGZXSFUPNDGQFVLXCEVYAQRYKUDABIGVBEHLLMIPWAFOVQSJWLGUHEBONUVMSNTXAPXWZBMRDC");
    msg.data.set(tmp_msg_0);
    IMC::SessionSubscription tmp_msg_1;
    tmp_msg_1.sessid = 2377119565U;
    tmp_msg_1.messages.assign("WIHASEXTUDWJJHHWYSPLIMTRCRKVPETKVGWWMOPQNIMZEDAAANGNFXSVJAKYFBKGDLHHYSQTBLCCUEUJMGZVSONPDUEAPQHMTFBYGNSHWPEIOFHTKQUODSBXGVVCXOZQCGKGWMXLGFZMWLNFMODSPLYUORJBRAJAPLHFYBKYWIDOQJGTCTLUXOMZBFFWQBJENFNDVZRDIIDASRRVBPIPJC");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AutopilotMode tmp_msg_2;
    tmp_msg_2.autonomy = 235U;
    tmp_msg_2.mode.assign("PNWGUEOPQUNAFRTQDPITYJJANMHWXNSIRYACKXWUCKZMMJERSBKBCLZAWWOAHIJVDUYEFOSHVJRWPEOWZFXESFFKGYZBPEAMJYXOPGRQNCJMIGLTVXUIWUBEGTTUQGVPHGKUHXKSMSGBTGQZJKFLSNAOYRTRDQYYTBFPLKDVNVLLNBCOLXVLIFQSABMMMDARVVTBCGDQPLXIHWWQDDZYCTIICFUSYFXEXVKCQHKZLRHAMDCPOEZIRHODHU");
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
    msg.setTimeStamp(0.277683013782);
    msg.setSource(4431U);
    msg.setSourceEntity(203U);
    msg.setDestination(43579U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("BZPAMHACTHCGRJHTJIXKYONOFPBAHVKIMTDLELRRHWKRELLGJGQWCPYSEYQAEMSKQYFUNXOUQAMXNCSHQMZ");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 34825U;
    tmp_msg_0.lat = 0.118309688267;
    tmp_msg_0.lon = 0.835386282694;
    tmp_msg_0.z = 0.764534151493;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.amplitude = 0.272517348463;
    tmp_msg_0.pitch = 0.936849325643;
    tmp_msg_0.speed = 0.63574128045;
    tmp_msg_0.speed_units = 187U;
    tmp_msg_0.custom.assign("EUQVERRYYGKILHYOXUMWXBTZHQUZTYAGVACSZAOCZUUNJIATXJVRDEBLCLKEXNBDNSEBRLUFNNGRUBDWFBDKIPFMYCQKNJMLSIQTFDAMEDNTQFPBIZGZRLNAQFKMWJOHFDSZTVEHVFTWQMWOEWOAODAOHWCUMYRSPCKKGXTTJPCPJXROSPHSMAYJFDOVCISLIWABNQHMGVVRGNIJLHOIGJYZLIZRWTCXXSUPCPY");
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
    msg.setTimeStamp(0.0747573821467);
    msg.setSource(25783U);
    msg.setSourceEntity(90U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(141U);
    msg.source_man.assign("UGOVVZFHRIJTTELDIQLIRKUEOOCYNDVFZJQPRRPKKDSUUKOVGGZEJAGTIYETAFRRLQCEFKBCLHBJKYSWWFCLHAODSEAWSLCHPPBNPXUJYCKWIFWDUHXLATGMVDAZVPENQPCMHZXDRCXKBYNMOJDXBNRBZMUIGGAHXQKOHAXHEKBNTMNMGMXUZTBVPWSWBEGJXQZNVITPSPQWYWLRMSBDUJSIXGZMLYVSZNJFLUYISOCEDYHAJWFTQYQQFOC");
    msg.dest_man.assign("RCISCATGANCGXVKMJHXDWKNDHSHKRFYFTSUBNNZKGWIOATEEPLQWZIYHEYEPMRSAOVBDIJEWSHTLFZXDVTDSMOMFLFNQECREYVQMMHRSKUQTCQPKWIGPQSYBOPQUIBGCPLLZZOUOELOFSKVRDDDJZPLXPNUGKXJJYOIAGCK");
    msg.conditions.assign("XHDTYHSZTGIPHMMLNUJJSFXLYUYVWESYJOOWFAKQVFVNWSDDXDHKERQNERUWXQJHGGTTBQONCXJMXAVFGULRNWDRNWOZQLOJOZUPKEKJZBAGSHSZPKQLMVDYXATHJTCTEENILMHAUDPRFLOIPGCTQRAGRBCYIEAHIWYQTCYEKKGINSSVOBBCSZDRATDRBNMZBKFBBFR");

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
    msg.setTimeStamp(0.101391580289);
    msg.setSource(6858U);
    msg.setSourceEntity(18U);
    msg.setDestination(530U);
    msg.setDestinationEntity(163U);
    msg.source_man.assign("YNVHTZMTALCGOOIIISOJRFXVBZWQQDGGFIXZACTPUUGOPCDVLYMGSXCVYLHMKAAIFWXNYILRGQZUHVDCLSOWCLUJNBTIZURSQDHPWKUPXTLGIIGETDPFXBYKNFBYVCKFSQULNARDPOVHNXNDKVCSRU");
    msg.dest_man.assign("GVARWPXVJUMTSHXGJOFHLQDXHWRWCULOFIUFJNCVHGQZQOIXUPFDAHIPKUSMMYTEEKSGSNBECJDFXLYHITJURBZJWEEKXTQOMEARSAINFSDAQRDBPHRNVCOJGBDDMXYZNPAJTWUEVWRZHIFDAWULXTIMIETNPGNLNFMXJMMOYLQIBFZNTLKUZWYWYGERAZQORVOGFQCRNESSBTLSPLUQAPGKGVZDZCPYYWZCVKKCXO");
    msg.conditions.assign("TZUSDJKHOIPVL");

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
    msg.setTimeStamp(0.554015038904);
    msg.setSource(50463U);
    msg.setSourceEntity(38U);
    msg.setDestination(43228U);
    msg.setDestinationEntity(240U);
    msg.source_man.assign("EXVBIIKSDTKZKQHPGYTBLQNFZGYIGUPXPIYQOCELDQKWFRJWSVMTWABWSMOKSYXMNFBCCUGPQWRHHAMNSEJFCRIBLVJUGIDMKSHLDCREBAJXNOSJFXCVIVSKUALCOKNRWNFPLQADRMEYEPEQTTZYRBAZHFIONTJRIRUDTBCJYNAQUGWUVIVNQXOULHMLWDPHPLHJH");
    msg.dest_man.assign("IWZFZDVJJPHLHYDKMBXMLGPWNROMDTKDQIMCEKDRNVNKBKRTXYMJNXKQA");
    msg.conditions.assign("ZSDXVQFWEAUZBQXQHETGFWHNXSAKRHRUVOWABDCPRQBZSTHTKXDPIAZUGCURTAZISF");

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
    msg.setTimeStamp(0.432075725481);
    msg.setSource(4029U);
    msg.setSourceEntity(73U);
    msg.setDestination(18192U);
    msg.setDestinationEntity(38U);
    msg.command = 236U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TJKYEGWZMBDKFAUXLIMSDMCFPAPOGLIODRIGZPCLUOFDVZAXFFEMFGJXVWGPIZDFMYBKWHMRQHECHNXKTSCVRDRPOGLQFEVBHQCOAPVRQXKUMOFBIJOLCSPQQLEYWWZAZBSAIMMDUWNNHTWWTJGERGGRJYNSVOSEUQSKXBWQAJYIDXOZCKPVSYHJUNQUEHNATQHPLKTZJAYGESVOCTNBLLYELKZXYHIAVBDUTBJNUXURD");
    tmp_msg_0.description.assign("JAKQUAGTIULYYMZMAGTDWMHSDYCDVQXQRSZGDXLZOESFISWGGUUKMJRMAENLJHKLABLYHHKOFWOTVTJDYWBHPNAZEESTCZFXNBMCDXIXBGPKVIVRCQLBJEFPHUDSRNXOVFUWQHTTBVXEGZOBCBYKPLFYSQDMIWZMH");
    tmp_msg_0.vnamespace.assign("FKWEOECAWLEZVZDWNIYVUZOVQFXXIWPSOAQBROXDGETE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QYQEJIFKBKODGMZAWD");
    tmp_tmp_msg_0_0.value.assign("JEJNWBISURTSRZKKAPDYCRPLHZQTSGMBELLXZMABHWBBRPRLRJQJQLXNKAQDVKLWASGJQORGCQPEBSVHAMCDEFOUXBYPVIKJUYFDUWGVDOOCHNZJDCWMCXXWQKWBNJXYFUZIZ");
    tmp_tmp_msg_0_0.type = 25U;
    tmp_tmp_msg_0_0.access = 121U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OWAGVFDAJFPQRCXHGTHLUPBRXHWGMLQRVQKNBAEYCXLSKQDYPEQBOMKOXDRPDOCYJVGKHJHVJHWTIWRNXJEUGRUILOQBZUABONIQH");
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.start_lat = 0.206735100643;
    tmp_tmp_msg_0_1.start_lon = 0.165669120604;
    tmp_tmp_msg_0_1.start_z = 0.608933620169;
    tmp_tmp_msg_0_1.start_z_units = 41U;
    tmp_tmp_msg_0_1.end_lat = 0.0615793340739;
    tmp_tmp_msg_0_1.end_lon = 0.69955071809;
    tmp_tmp_msg_0_1.end_z = 0.425835070852;
    tmp_tmp_msg_0_1.end_z_units = 55U;
    tmp_tmp_msg_0_1.speed = 0.308322548549;
    tmp_tmp_msg_0_1.speed_units = 21U;
    tmp_tmp_msg_0_1.lradius = 0.430477256804;
    tmp_tmp_msg_0_1.flags = 84U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.401167383653);
    msg.setSource(44729U);
    msg.setSourceEntity(232U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(247U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OVUAGITFEEKXJFQZHMACHSRZNQPBNDOTJWAVCYCZ");
    tmp_msg_0.description.assign("DIYMCDZJYSDNMJBCIRFICMAPEMBZSSWSTEMOGRJMZXDVRCXINJACDVBHLEQFXLVLOQXDEFMWYDOFTBHIRDKZTKJUUBKNJBTFEHGHWGLHQWYJNGAVZ");
    tmp_msg_0.vnamespace.assign("OTEELYLJNNBDKXHXPCSNBWASBZWYHUWTQCPDNRJYRARNTRVEIOUMPSQWXUPSMTPUZTTLKJCICMHQFYRNGPYJIAYKHXEBSFKRTVBZEHFXCIFOPAMJUHXNKRSZZOUHWLWZKXIARKDEDTSHYGRHZJBTAODWXXCOTKGDALNQYGOPZEMSSZCMQFVGEVUNFVFPNWLCBKRVUDAWQGQMDLFSCGYVYHF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LUKAMNNGKCYPGLJRVCRZDMZVYQODLSSGAONSHJWUVHPLCWVFJXQGTBRTUZEQLXKPADCGGOKZFWZFWCQCPYLIKFSPQVWSNYEHNPWBYQJT");
    tmp_tmp_msg_0_0.value.assign("DZCBXTQUGDVIIODRBLRKXCUSFVIJWXSOAEBMOISDIJAJHUZMGOGKSXHRTCIMIPILPCYXAKDWRJGMQFQNFQAXRXYCACARWQZRCGPYPYFLPOTRUPFPOZJVVNHKQODSGJUMVLUYSFVDNWZBHNWNDWXOMRQSJEVBBWMCHCUVCZHPNKL");
    tmp_tmp_msg_0_0.type = 75U;
    tmp_tmp_msg_0_0.access = 141U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CTYGXCGOCIGDILSNAPJSTINBWJZFMXTIZIBHIPKTRBFSDEJHJTKRCFJVTAWGVQCHDZBQGYCZXBHFIOBWYKRXJNUPGFUJVOUZIOEQSRXWPLAXUMCJFUOVLPOYEEQGTEODEXESPQZNZDOKHSKDLWEAKJKMHHQBUVFVQAYLUFPZEAVXNXMSRNWVINAYOVMRRQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YUCUIMENFG");
    tmp_tmp_msg_0_1.dest_man.assign("BSABVJLLWOPEYHNOCKVDGKSEHCZKZFDVMWJBK");
    tmp_tmp_msg_0_1.conditions.assign("CAHRWLQGOILVIKZYIVNBWUTGMNNEGOTRDSKHYQIOFJQRPPOKNSXGUFLNGFWGJXVJCKMBQIDZJUASTDXROTFAPYGHOKZLWMAAVLYELIGMBMMFJDKYUHWKRDTPBLIHPSKJBFPTZXYYYULOBIAVEWPVMFZGPVXE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::IdleManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.duration = 25695U;
    tmp_tmp_msg_0_2.custom.assign("HZOSBDATHZLOZZITARFJOUQYBSFSKYIVWKXEXHCFJCDLTWRIXPIZQRWFDQWYGWIGLOVJMNFRBSHBDQBCTCPHMIQUWUYKFCHRMKVDNEKXPUBDOPAM");
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
    msg.setTimeStamp(0.192512600782);
    msg.setSource(57484U);
    msg.setSourceEntity(160U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(119U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TONNSFARSFDHOBVNEQNBCHCSYHQQUDLSKFLITTLGPTWXYYXWIVLGYIKTQWOBQEAMBVNRCIPPFSZHBUZJKOTWJCUSGEWRHNQQPTOMALUDXKDUHZFGZJFAGPWIHKWPRCWGQVVNHGJNMDWDUAVYXJKKRBZOXRFYYPYZEQBRVMJIOJPXZSMXOOKHYVENAVCMUAFRLCMRECCPGMYTLCGDQSIULJFZBZEFAIVXXAURAESMDZMJDDJSHOKX");
    tmp_msg_0.description.assign("PMRTVHQCPFVYBULNEJNHITLOCSUQAYKZCAZDGZRHLUJWMQSCWFUCTSVTNSXKWIIUITEARJSTXDNMBDQGFBAGHKZQMWQXCDHUSZAOJNIPADEMYBEGAYEOYIDBXPHGPFODALRQZXBSTXFQDLKMWAYFFNHDVNNEEKJGSUEKYBOLZCTXMGQHYQBPXBYKMRGVZXWVWOJEZWWOJGOYKIAPVNRJHWTUCGCOKVCXFNHZFMI");
    tmp_msg_0.vnamespace.assign("JCQQJPNXRCWHUKVBOCGIGMQZDENVDVSBIYBUTOMMOXQKSRFEDFULEVPFBGLLOLOTFWUBDCIPMKOWAQCZDEUXYBKHSYTWHORMMTHWYEXRXBETXFYYSIRSNHMXAMAEQURNZQWDCBAEXJUXSGPFGECYAULVAVSGHTAZUTUAROZLROVXWFHQCRVJFNILKGJDJFGAZNWLG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZPXDHFOJXJIIEZXQPRQUSYMDTJKEYWPWRZIYMRWASRJSOVUFCWMKOALOH");
    tmp_tmp_msg_0_0.value.assign("MJEXPPWOVKCITXPDUNJTPLVIYSPKWTBOBBQFRJHOMLZAWEMZGOMQKDMWCVQZRDUTPWETTQJHHIMSZOQICZKXYSHEADDAYLNCXLELFRFMYGSGWRBOICATCGUSIYJFDZQUVFIQXOLRSSYONZFUBXKSAHCYT");
    tmp_tmp_msg_0_0.type = 203U;
    tmp_tmp_msg_0_0.access = 153U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MALOMWFMXQFWMYPSNYTKRCKTHXXKIYTDZYNCQPJKWHYVWNCRQNLAYPFATIVRHDPGJRLEHBEUGEEJRMSUUNOZPPJJHFAVSBWUJFTMXHIVZKLLUHXWRRA");
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
    msg.setTimeStamp(0.279753121416);
    msg.setSource(55267U);
    msg.setSourceEntity(198U);
    msg.setDestination(51199U);
    msg.setDestinationEntity(125U);
    msg.state = 42U;
    msg.plan_id.assign("VBETIDBGMWWLASBYZXCJXZXRITJTVSNMZUXFFTSYMPFAZJNFPMJVUUDEQWAHROQ");
    msg.comm_level = 63U;

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
    msg.setTimeStamp(0.094495958194);
    msg.setSource(33647U);
    msg.setSourceEntity(139U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(234U);
    msg.state = 121U;
    msg.plan_id.assign("FLSUVRZJHEPJLKFXASYONSF");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.143251890245);
    msg.setSource(32021U);
    msg.setSourceEntity(253U);
    msg.setDestination(33186U);
    msg.setDestinationEntity(9U);
    msg.state = 67U;
    msg.plan_id.assign("ZRXDZJFPLAITHMFMVXYVYVCHLKHUGEWXXAHNOUOFGQRNWJEAJNDEDWITKBAOFEIOPGSGLZEQHTGMZVHQCBODJBMSHLNVKZMMXMCWDARGPIOBYTYVKVSRLYARKSQCILGWZIGIEGCJPABRDJHERMSQQUJHJZYAGBTFWOPUNIZBBLDBEANTJRFSBVPQWUQPAFEQPSKCHYPCYQPYFXRXKINIKCYCLXTXTNWT");
    msg.comm_level = 189U;

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
    msg.setTimeStamp(0.829845080644);
    msg.setSource(36387U);
    msg.setSourceEntity(230U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(79U);
    msg.type = 109U;
    msg.op = 176U;
    msg.request_id = 43941U;
    msg.plan_id.assign("CZEINUXJWZGMEZDWXBSOASQLTYUMPZCIAUHDYFJIVHREKLDKVLNCYWBHHZPRDSFBOXRZUXRJVYJSJWZTOBORNNLEKFGPSUNGXVYVZFDTKGSHZMITEEOGJMYQUXAIHWKEQVBOYVTTBLVTHQNUMRIWWHPQYNCLIBEJDPRFVGPGLQKEKUPGCKNPXSUOMCYDBWZQAHUMQDFJNJTFXCLAWBXCMAJATICSXBMOOALAHLERSPY");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 70U;
    tmp_msg_0.error.assign("KXEPTEFLHPBZTYWKSUBZUVDFDJOKCERTDWGEWQZBKCRUW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IQMWNGEKYWWFJGEHMPTLYPZNGXOEAXUFLLTBQOVNJNIUCCDDRBSAFJCRCRQKDUVNVXMNDHZOMJUXFRJPTARTSMDCEZVZYGDBUICGAXYGSXYIHDAPWTTFPYKJYBHGEUCROQRLQQZUHHJYIWRQEXKEWIKTLBTVNT");

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
    msg.setTimeStamp(0.788769722771);
    msg.setSource(1310U);
    msg.setSourceEntity(218U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(163U);
    msg.type = 120U;
    msg.op = 120U;
    msg.request_id = 15279U;
    msg.plan_id.assign("XOMZQAJWXAZNLUNSIBEXEFKGUBMJTVYFSFGIBCCDIVXKRUIEQNJWKMWQWCVMAWBTZGGBZRXSNZVOIYEPLWKBAMROTZONJCQKFHEARCMMZVIYTD");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.965595921763;
    tmp_msg_0.lon = 0.489456701092;
    tmp_msg_0.depth = 99U;
    tmp_msg_0.speed = 0.417690924676;
    tmp_msg_0.psi = 0.850542618123;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWRIVFBREPNJTLMVFSAVNOEBNKRXBGLMUHJVPDKDBSYUTAQGNWLHLDXIYNDOGLAUZCSXFZOEGHZEMRCDMTAAAJCVTQO");

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
    msg.setTimeStamp(0.189721188987);
    msg.setSource(35718U);
    msg.setSourceEntity(146U);
    msg.setDestination(41180U);
    msg.setDestinationEntity(15U);
    msg.type = 195U;
    msg.op = 148U;
    msg.request_id = 59773U;
    msg.plan_id.assign("NBRHVXRZMGJMWGCUAEMBBZCHHZHDXOQIESJPUXHCSEGTMAWOAMYARTINPMWROFOGVLDEPYZWEPAUKZNNMGJRUXREQNTJKQXGZRFYATACQHGLOHKSOBKQVRSPQPIFYBHTWKOOAYDUUCWBNDZOHLDVUCLTDJEIKVLCVPETXVSBTKNDYILRLYEYOKX");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VBSLUCBELIDBDMTHQOXYYZTFKRAYYNBJULJBHGDWAXOSEVXBXKMPNAKFMVJUOQTTJXMCFWAGGLSBZKCYXOCTWKYRGKJCRGCPVTFVUXNTURMNCWSZNSJUVWIUPIESPVOEQUKRZHZVIDWT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OHIKGLLIVJBBINZQRGKCRVVEQZYCJDAXGYSBLBMWGKINUDPZXKTPKNBBQUZSAIXSAEJCTZECZQIGJTFXUFGPHHLUOILMBVSFKDWRXZJPHCDAFBYNCTRRRVDJZPHXLPBAFESYOSAADFWEWMEGQMVWPQQOUPXFRDJWLTUUYOKWOANTMMEZRWPYTSSNHAQYFFISUODXMZOOHHRBVELOLUPHLINKQCQXVWYFRYT");

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
    msg.setTimeStamp(0.775567756634);
    msg.setSource(38723U);
    msg.setSourceEntity(122U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 49839U;
    msg.plan_size = 573011612U;
    msg.change_time = 0.339292450821;
    msg.change_sid = 62339U;
    msg.change_sname.assign("NITPQEIYDDKRVTVOULWUBFDPVNZMVCZOJUISMRMBGNCDGSSGEOCH");
    const char tmp_msg_0[] = {51, 67, -102, -103, 57, 86, 102, -74, -45, 96, 48, 31, 0, -82, -74, 78, 3, 123, -54, 0, 69, -93, -48, -104, 83, 71, -4, 110, 113, 45, 1, 14, 10, 29, 26, 74, -90, 98, -128, 11, -44, -85, -78, 4, 67, -50, -15};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KDIHDKGQHPSTBKIZR");
    tmp_msg_1.plan_size = 8560U;
    tmp_msg_1.change_time = 0.630672010972;
    tmp_msg_1.change_sid = 33907U;
    tmp_msg_1.change_sname.assign("SAXMYMNTDRDWNDJLHWTNSKORXJPOVSHBAKQILXGUJCVNBQPPMZLQRJLLSYNMKJETOEUACHNXASHIEOFIRUYCPFZARADREBRYZVHDLJYBHHWXICKFAOGTOXQUDTTMCVAVAUTGQPVUKPHOKMYKZOEWFW");
    const char tmp_tmp_msg_1_0[] = {-27, 47, -121, 48, 61, -55, 28, -37, -58, 72, 25, -46, 83, 25, -120, -104};
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
    msg.setTimeStamp(0.141236402915);
    msg.setSource(432U);
    msg.setSourceEntity(48U);
    msg.setDestination(38897U);
    msg.setDestinationEntity(198U);
    msg.plan_count = 7215U;
    msg.plan_size = 3316837263U;
    msg.change_time = 0.632271395064;
    msg.change_sid = 49328U;
    msg.change_sname.assign("VWVDFKWEDKPSEDBXCHGNUZHXPKZVRYKPWRJHQDFORYECNEUIPOVJAXXFOORBFNLJXNJNEGURAVJLZMYXXTQGUFOWTBRQQINEBRHAIMCLIWLQKMMAZBYDYNSZGMFAXVKSBNOYHCTCSDLGSCOHSVRIIWBOMYKCPVDHMFENTUCQUHLKGJCKETAZQDIWTDPGFSJITPRXIZFPEBLBALQJYZYEFKHQQAXLUNSDJWPZJBPV");
    const char tmp_msg_0[] = {44, -36, 66, -41, -61, -19, 73, -67, 123, 101, 98, -20, 90, 38, 86, 17, -114, -51, -118, -53, 60, -123, 35, -105, -52, 21, -56, 71, 125, -72, -70, 23, -58, 13, -82, -90, -84, -19, -1, -123, 73, 3, -91, 61, -18, -26, 49, 2, 18, 123, 4, -53, 76, -21, -81, 28, -49, -119, 122, 82, 107, -106, 18, -11, -54, -33, -88, -6, 121, -101, -112, 50, -52, -2, -93, 102, 69, -38, -54, 114, 0, -72, -37, -113, -100, -123};
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
    msg.setTimeStamp(0.377750848573);
    msg.setSource(64486U);
    msg.setSourceEntity(246U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(203U);
    msg.plan_count = 3987U;
    msg.plan_size = 477638589U;
    msg.change_time = 0.0330303251583;
    msg.change_sid = 29962U;
    msg.change_sname.assign("XYLTKPZGPVBLUELFBAHYUNAXODDLWNQJDYWNMZGGUWROUWVPXCQCOVWFQFRYHPMSBYGYNWEQLOALFZEQFSCCEDVTMWORQSEGEJCJYKBZSUUJJMTGKLIHPXNRANVDASPOVHLHOVTYFHUZSFIJHILMQAFTKPGTHIUDSZIFMJROIRANZRHKXBMSBELXE");
    const char tmp_msg_0[] = {17, -104, 34, -98, 19, -95, 122, 68, -73, -49, 120, 107, -64, -11, 17, -54, 70, -9, -119, -78, 94, 103, 14, 91, -27, -11, -1, 71, 124, 8, -119, 85, -37, -48, 85, -45, 20, 102, -79, 102, 65, 1, 66, -113, -54, 79, 103, 78, -89, -21, 67, -67, -28, -83, -84, 99, -13, -46, -86, 38, -34, -19, -16, 74, -21, -125, -88, -111, -124, -37, 82, -109, 56, -42, 91, -15, -114, 21, -128, -87, 37, 55, 27, -90, 45, -54, -76, 82, 46, -26, 8, -22, 43, 103, -100, -41, -19, 102, -16, 12, 30, -97, -6, 11, -1};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PSJBHGVNEBFGGMWNRIQSHMHHWRES");
    tmp_msg_1.plan_size = 47108U;
    tmp_msg_1.change_time = 0.366119982483;
    tmp_msg_1.change_sid = 39578U;
    tmp_msg_1.change_sname.assign("LHDJBDIQVAECVOIBHNMOIEUCUGVWXSLSZQOKFSLWTGEHSJD");
    const char tmp_tmp_msg_1_0[] = {-116, 11, -70, 10, -112, 28, 15, -19, 69, 16, 80, -108, -36, -124, 98, 123, -112, -6, -97, 112, 45, -78, 32, 22, -9, 68, 61, 38, 6, -47, 78, 72, -82, 32, -10, 37, 4, 112, 19, -67, -2, -60, -21, -127, 65, 117, 13, -79, -71, 41, 88, -73, 8, 32, -126, 49, 22, 102, -7, -91, 18, -55, 69, -69, 113, 125, -104, 23, 77, -48, -24, 54, -83, -77, 22, 17, -17, -82, 76, 78, -36, 44, -82, -109, -58, -85, 93, 118, -30, -97, -66, 80, 89, 0, 42, 117, -30, -24, -68, -101, 101, 45, -45, 102, 89, -33, -94, -46, -118, 105, -7, -7, 34, -15, -87, 114, -107, 7, 89, 74, -10, -116, -58, -123, 122, 118, -93, -83, -126, -79, 42, 50, 53, 38, -106, 126, -76, 12, -57, 62, -27, 21, 63, -121, 101, 72};
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
    msg.setTimeStamp(0.521019444202);
    msg.setSource(64208U);
    msg.setSourceEntity(234U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("ANUERZURNSHYEBROOIMMDMEBTHZFOKGSDFNHLNFXJEWFASAHYBVUKIELDGXKNAFGRHUWXOKBJYJDNCWPQOCOWIJPFZDFMRZJZPDISEWKKBWHYCTBNLPDVSQXATVJQYIBRZJBFMYWYVGLVNIPCIPMGTCSXHMCYXSTZURQEWSUBQXQPWLUVGKDSQELHEOTCUVZHKAJRQISNGVULPMLTTIJWOIECAGBQAVJFORDONXLCYKARMMGLTFZPUGP");
    msg.plan_size = 34945U;
    msg.change_time = 0.977264354237;
    msg.change_sid = 19001U;
    msg.change_sname.assign("DEORXAICFOLRIGKMREHISSLP");
    const char tmp_msg_0[] = {36, 20, -121, -88, -39, -55, 67, 92, -102, 85, 118, -72, 9, 93, 13, 81, 125, -11, 116, -105, 6, -109, -65, -86, -33, -60, 56, -83, -122, 78, 120, -5, 78, -34, 37, 15, -39, 62, -50, 56, -117, -29, 19, -32, -84, -17, -90, -91, 77, -86, 108, 63, -112, 36, -92, -82, 95, -101, -89, 26, -51, 51, 23, -43, -51, -11, 108, -51, 12, 47, -16, -12, 86, 85, -69, -66, -1, 76, 94, -10, -51, 43, -125, 70, -52, 57, 89, 99, 49, -70, -119, -115, 50, 95, 26, -127, -89, -26, -56, -18, -74, -72, 3, 21, 122, -24, 121, -83, -118, -55, 102, 100, 9, -59, -80, 42, -44, -93, 65, -23, -67, 22, -88, 28, 50, -4, -119, -83, -23, 48, 37, -70, -14, 72, 111, -57, -54, -67, -125, -95, 60, -113, 15, 125};
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
    msg.setTimeStamp(0.422275777908);
    msg.setSource(37252U);
    msg.setSourceEntity(198U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("KVGOXRFSPSBKEYLDLSYMVGEPULADUYNNAYOEAT");
    msg.plan_size = 56382U;
    msg.change_time = 0.848041460483;
    msg.change_sid = 34306U;
    msg.change_sname.assign("CZNOEANNLNQGSJPGRYYLRZJDCDVPRKWXHVAPCIVITMBMNRBITKVNIPOFKAETXBHWGMEOVKHNXMODFDPQCPJQKQQHMXWFCGXPADETBMOMVHUHIXMZSCFBLGEQOLLPWLSIQQVIZTEFFSYUHQRZGSKWYCBBYAEDGOBUCRRULGCHJVAIXOUNJHSUITSZWBFKRWEAASPZCVRMZLKW");
    const char tmp_msg_0[] = {-11, 108, -10, 84, -117, 2, 96, 125, -1, -20, 123, -84, -14, 113, -70, 39};
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
    msg.setTimeStamp(0.867110976657);
    msg.setSource(9501U);
    msg.setSourceEntity(206U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("VRPAOUKZVXEELEJQZLVODINTBHSKUPSJPRFWZRHHMQEMUYUPKWZXSICARDAXJZVPGBDXLDNVOIVQATEFKASAMJBVZPGCXXCDTUFFZRSNLTYM");
    msg.plan_size = 48726U;
    msg.change_time = 0.592166110287;
    msg.change_sid = 52895U;
    msg.change_sname.assign("XZTOVNYYFCIVIS");
    const char tmp_msg_0[] = {118, -103, -92, 112, 19, -65, 15, 94, 112, -103, -12, 125, 69, -106, 90, -35, -86, -14, -30, 90, 25, 48, -128, -37, -25};
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
    msg.setTimeStamp(0.0303049948649);
    msg.setSource(48313U);
    msg.setSourceEntity(222U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(132U);
    msg.type = 226U;
    msg.op = 70U;
    msg.request_id = 12636U;
    msg.plan_id.assign("RINUNKQXCOUBWIGOGALEZZTZRFGUTYKSEWSGNMNCLQTQIKTHCEGCQLKJOWHARNMFXDGMPZOSZJMKRYB");
    msg.flags = 30933U;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 15U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EBJJKJYSKOZVWQPXXUHKBDISGMIJNKCPCPPOGUMOOSIWWLNZQMQUJSJTIVGVGAXBWLFKYBBLFZDITITIVUTATXRYFKJGDBZSZNLCDDYNCTEJZFZYKFSCMWMAANLPCUKRQWEAQRUWGUOROHHLQEMVHMYRVFLLPWNNCTRZOXJVSGYBPEPU");

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
    msg.setTimeStamp(0.31360143837);
    msg.setSource(7879U);
    msg.setSourceEntity(234U);
    msg.setDestination(19743U);
    msg.setDestinationEntity(126U);
    msg.type = 202U;
    msg.op = 231U;
    msg.request_id = 11863U;
    msg.plan_id.assign("NVHAOLCYXBOXMVFNPNLJGCMZISGHYWNFMHXBIZSIDHTWBDTGGAKHFQWDEDLQDZIGLBKNTXDVYOZMNYQZWRCQZKWQBRPRZWHIUNEELPPKAEDRZ");
    msg.flags = 8626U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("NQQODOQRUBPSWZAYXVSD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GAYWWJYFUMHSXJLMVRNSGHVFEADDIH");

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
    msg.setTimeStamp(0.937215394966);
    msg.setSource(12584U);
    msg.setSourceEntity(228U);
    msg.setDestination(30656U);
    msg.setDestinationEntity(239U);
    msg.type = 63U;
    msg.op = 228U;
    msg.request_id = 15037U;
    msg.plan_id.assign("HFBAPBVXCGLWIXDEHHJFHVAINHRPTKHSEQWVNRVVQTYDKXPXLRPCTFIFQITIMWSNGXWOYFPJKWKTKRCAOMPLBJKDFPLJURUMYHNXANGUMOULYMCEKSXXQBVLMZYJELYSRRLSNSBYLIJOBRCOOQIAQZVWUZZOGTGVBJSTDTMUPMSTNIUGDOBNQDGOKDZNAYVCZSHERE");
    msg.flags = 20537U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VQSVAMZICLIICOJGVDOUPKAAXJMGRPXOFWGPHLOSOHEZTTSHJJBCVFKHSLGVNPFTBMMFJVWIIBK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RVMXDEWPFOIRUQROCGOFGAMFVJSPKMKSILNUBTESVKRZROMJEYUKUTFPBAKVPXUDQFPZYHDEWVRWGAOCEEPRADQIHFCDVBHATILNPJBWGONEJQMWFOUEGYKEN");

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
    msg.setTimeStamp(0.790318641297);
    msg.setSource(45212U);
    msg.setSourceEntity(206U);
    msg.setDestination(13260U);
    msg.setDestinationEntity(99U);
    msg.state = 139U;
    msg.plan_id.assign("AFGGZCDRGOAUPZFVHLGFRIOGEODALB");
    msg.plan_eta = 1409625297;
    msg.plan_progress = 0.991940873774;
    msg.man_id.assign("YNCIJFCWAPTCCJMKYZWDXGJRFODMPAIZPOKKBBOISWOZJPOSWDRJICLPFVLMFUPNKKGVG");
    msg.man_type = 18102U;
    msg.man_eta = 1015310340;
    msg.last_outcome = 218U;

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
    msg.setTimeStamp(0.0952729703549);
    msg.setSource(34008U);
    msg.setSourceEntity(144U);
    msg.setDestination(62398U);
    msg.setDestinationEntity(183U);
    msg.state = 248U;
    msg.plan_id.assign("IOALACVBRASRYEUFVOMGBXSMQPDWZVQNEGJGAORZWWGPHKTMELTHQNJOZNZMWELDSXQSXYTENVRBHIFDFSCTYDLBDYZRBVNPFPEUNYAWUVQUIAOTYTKLIQQXDSNCWIJALBGZPVWUKFABMEKMUMFYZIXLLDHEZJONJZQKCXGVAEUIGOPLIWMXEFRCCKKHTVSJDGHGRKDTIXMTCYVKQJSRPYAPUFNHDPOYWXJR");
    msg.plan_eta = -1529675785;
    msg.plan_progress = 0.977487855093;
    msg.man_id.assign("BMGVQDPYMPBYFNVYLKFDUMAWSMCGJRGKIGTDZGZWHROPWLYLJEBHUXTQFSXRSEOYFKTPBUMBIADHTJEQMZLNJZXEUOGT");
    msg.man_type = 12820U;
    msg.man_eta = 2009762526;
    msg.last_outcome = 111U;

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
    msg.setTimeStamp(0.032996060344);
    msg.setSource(30669U);
    msg.setSourceEntity(155U);
    msg.setDestination(40478U);
    msg.setDestinationEntity(109U);
    msg.state = 77U;
    msg.plan_id.assign("TJTJLCHQZSQECMUXZPKGSDPESRLLGTIIKKIOSVAFWNDAJJFXYOBYQHOOTELKZVRWQRZEDSUGMKHQVYMNWKHHZEQXDHPWRCDFSUFXGLZDYKOSIGRCUAJTVZNTMLFKPPSTATVWWQDITQLHDABHEMADZFCVYXXASJCKGJMDWYYVLCECONFMNRRBHAYJEMUGG");
    msg.plan_eta = 1371594348;
    msg.plan_progress = 0.249957585968;
    msg.man_id.assign("VLWAERLTSIPOOZTERAKACPZFPQXWDNIHCEZIBWBYEBTGHNNXHCLUOUNQVQRJJJIFOSNWDMECSBUWGMDHNSQDFOAMZWLMIAMOXYJQXYFKZQYJOAFSFGQPDHBAUJETFEPXMGZU");
    msg.man_type = 28396U;
    msg.man_eta = 623579890;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.716588003624);
    msg.setSource(17977U);
    msg.setSourceEntity(249U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(101U);
    msg.name.assign("ASNWFLMTBWGSZGNQZTFVGCHGNSQFPOQNODCNIIVZFPEXTFDBLYPTZXEXUXXLBPMJDJYOQYCSWHDGZORCVKTABOUSWRNVWAHOKTOZEOXYRPYIULOEQRJZSWWNYYGXDEGUTZBIKJIUNBEAMPASMCE");
    msg.value.assign("SSRYDYZOGLPUXFQGRFWUQHIEDYKIGKKEUMJHCFVFIUBBXAFEMNBXGNLBVNJVRKPLOUVJZXVEPWUFCIXREXLBOCQZOAPNPJRPFMUUTFSKSOWSNYQSRHPSTTIDQDHYXZIOZAHKGTVJWJ");
    msg.type = 125U;
    msg.access = 38U;

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
    msg.setTimeStamp(0.986753893945);
    msg.setSource(32155U);
    msg.setSourceEntity(102U);
    msg.setDestination(23215U);
    msg.setDestinationEntity(127U);
    msg.name.assign("CKWRWXQTJBJNJMNTOCAQPDODBCOLVWQVSPULEEZTDIPQRLKZHBPNZJVWEUSYXDGCYIVPFGKZEKOIEQFTEARIOPGLEDOFUALSYGJUWJZGNFIZVUVBWSFNYBGXPTIFMYJASLDMPNUDNODHQXLPRUBYYRIMQKKZRIRSNEFESJFMOMPTHAKMRZISEBJKHAGAZHRMNGLGTXYXCQYJQWSFKCKYBLCTQBXUHURGDMSWCMCLTIC");
    msg.value.assign("PMVBOPXAFGLRPADVJYECHDYNGUKXAQKUDWPKYFDJICPUWDHSDTJUITBCIFXAEHCNVDFPBRHCPUCYQNRFNNDCAZMNLTRYZRKTNFAJQWVQJJYJZLKMLIUIKZSTVLQSSIEOJGFOFBZXOLIBSGWHQDEKRJRRBLGHEEWMGXJXI");
    msg.type = 29U;
    msg.access = 198U;

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
    msg.setTimeStamp(0.831660744635);
    msg.setSource(41938U);
    msg.setSourceEntity(230U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(181U);
    msg.name.assign("FRSYALTCILWSAWFXPHPSTAIIIFFFIVHBWPBHOAPJSRLAYTAQNUTPKHKEYVNTGPVJESSKSXMYYECOODDURHBLV");
    msg.value.assign("WMDCVRGEKCIAKCIROUADSJWCTGXTUKSCOZDNTFSDAZIIFDSTTUVHGLDPJQRRSKEEQHELBBYQJXXURZQLZPKZSDXCAWIN");
    msg.type = 42U;
    msg.access = 123U;

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
    msg.setTimeStamp(0.567358783201);
    msg.setSource(46970U);
    msg.setSourceEntity(61U);
    msg.setDestination(25372U);
    msg.setDestinationEntity(97U);
    msg.cmd = 13U;
    msg.op = 81U;
    msg.plan_id.assign("FQPAWFIZAICQTZWDEBAFGLBOSPPCBTBUQIYEHCCKYCUFBMHXQDSTSGALLZTLMAKJNBDZWNWLYPMLNASMOSRHRPSTUGCQBVQFODGUISCYTOFTXEBCLEJLRNBQHPRIVNDPKWGSI");
    msg.params.assign("THVNLDJXIVPDRTNTLXOXOSXORHWARIOMUWBS");

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
    msg.setTimeStamp(0.10259217535);
    msg.setSource(39508U);
    msg.setSourceEntity(113U);
    msg.setDestination(1510U);
    msg.setDestinationEntity(243U);
    msg.cmd = 220U;
    msg.op = 198U;
    msg.plan_id.assign("RANWHYKRPKRJWNUMCWDFDIFFOJAWTRCDTGLBGMOGAOPJJGWSALDKEJHMNOCAEYTDQCHYNAIEFMEPYVPRVXJITZGCZTLMWQMVTIBZPXYFHQUZPKZSYRKJVJZEO");
    msg.params.assign("SXJZKBRHOFCBRCBMNA");

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
    msg.setTimeStamp(0.924859175617);
    msg.setSource(10943U);
    msg.setSourceEntity(74U);
    msg.setDestination(60606U);
    msg.setDestinationEntity(129U);
    msg.cmd = 82U;
    msg.op = 231U;
    msg.plan_id.assign("GECXSPVCZJAOI");
    msg.params.assign("WMLAAKNQOMIODKIPKOYSRPUDKGKZHMDPQYPXLUJDNOQDZGLBHHRTANXRCZCXYWOWFKPRGKJCFVMXPYOEIAWUPOVICBLFHJGUFADCHUCNRVCVJJOISJFQCIMBYVEAMIEGWVNTUIPTQUABFMODCBRLBXYRSUZERXIPBEFKEHLTRZQKLIQAVFBNZNJBFYNGNDWHTRGKAHMOUQD");

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
    msg.setTimeStamp(0.790782239812);
    msg.setSource(33003U);
    msg.setSourceEntity(77U);
    msg.setDestination(60066U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("VHDWXSGUYPZ");
    msg.op = 110U;
    msg.lat = 0.526978336813;
    msg.lon = 0.965425864624;
    msg.height = 0.870869288589;
    msg.x = 0.0844180714797;
    msg.y = 0.0756152646479;
    msg.z = 0.772862614756;
    msg.phi = 0.850920044656;
    msg.theta = 0.757939188461;
    msg.psi = 0.757684972189;
    msg.vx = 0.272808226545;
    msg.vy = 0.326296229436;
    msg.vz = 0.730105944628;
    msg.p = 0.913754264614;
    msg.q = 0.88773055856;
    msg.r = 0.481113927198;
    msg.svx = 0.937204617943;
    msg.svy = 0.817091315826;
    msg.svz = 0.0865005373167;

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
    msg.setTimeStamp(0.0302305869474);
    msg.setSource(45608U);
    msg.setSourceEntity(34U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("WFPMZQMTNIGPLRUZWGGBPOAZIBFHTDYDOIYGKKVOVPQAUTKTG");
    msg.op = 13U;
    msg.lat = 0.25898047346;
    msg.lon = 0.705692642785;
    msg.height = 0.500817080422;
    msg.x = 0.469258932007;
    msg.y = 0.141958832529;
    msg.z = 0.340214095719;
    msg.phi = 0.833877116301;
    msg.theta = 0.473237898447;
    msg.psi = 0.783003585735;
    msg.vx = 0.20714280581;
    msg.vy = 0.697246935704;
    msg.vz = 0.0853015448677;
    msg.p = 0.0501536827812;
    msg.q = 0.511303907352;
    msg.r = 0.511879027695;
    msg.svx = 0.105562552986;
    msg.svy = 0.64949524584;
    msg.svz = 0.677782979328;

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
    msg.setTimeStamp(0.651678766197);
    msg.setSource(41626U);
    msg.setSourceEntity(92U);
    msg.setDestination(53751U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("OYONAOSALCZYQOZLGMCFAXEWYVJZYAEAFJEUJOBAJNEDRPG");
    msg.op = 13U;
    msg.lat = 0.579347510065;
    msg.lon = 0.108774709253;
    msg.height = 0.123368742396;
    msg.x = 0.247249253134;
    msg.y = 0.312167926082;
    msg.z = 0.0268683733354;
    msg.phi = 0.00243712116737;
    msg.theta = 0.474906924136;
    msg.psi = 0.605128741672;
    msg.vx = 0.0900481767066;
    msg.vy = 0.311573698382;
    msg.vz = 0.48269426403;
    msg.p = 0.594305924623;
    msg.q = 0.756087335349;
    msg.r = 0.461397901172;
    msg.svx = 0.614706831426;
    msg.svy = 0.0803151691204;
    msg.svz = 0.846449263716;

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
    msg.setTimeStamp(0.382071337459);
    msg.setSource(26193U);
    msg.setSourceEntity(137U);
    msg.setDestination(39687U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.528797360433;
    msg.lon = 0.517065454396;
    msg.depth = 0.532918291993;
    msg.roll = 0.214592364072;
    msg.pitch = 0.284482616456;
    msg.yaw = 0.00566717788099;
    msg.rcp_time = 0.544153725344;
    msg.sid.assign("VWTKCYMGPRHLMGDELJQBBWJAVTEISGJXSHBDVCNEDRIEAQBMRZKMWGOGBEKSCCCXPSXKDRILUWYZSWBCIGOQHOTORNDVOTVQYFXIHDKFEVYULXWDNNMRTFAMEFNZONIDZGZFVSAAXVPYZFLCJKUKTPSTWHPYBPS");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.159030147971);
    msg.setSource(33390U);
    msg.setSourceEntity(164U);
    msg.setDestination(3411U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.789263372006;
    msg.lon = 0.0845906943751;
    msg.depth = 0.977263095477;
    msg.roll = 0.640138088141;
    msg.pitch = 0.222394016595;
    msg.yaw = 0.06677021878;
    msg.rcp_time = 0.581131446845;
    msg.sid.assign("YEZPXONKSLKEZTKHZHWYWKBQIMVJRTEHBGFOCRRVXAFSNCXFNNQLSNXNRFGBQZDMNDQOTPAJVHQLOSVRKIHQZBPTPTDJOKJXMBYRJQLINZGGNUQIFFTHVESCBGHRWEFJFUVCIUMIMEWIRSXUATIOZQURVYDMUIGGDAVAYZFDNAWUYOPMXXLATAOLHCMGUPKEKXURBWPWOPYTDCQJPLGWJCGDSEVSHYADOVDCWYLT");
    msg.s_type = 229U;

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
    msg.setTimeStamp(0.404761884031);
    msg.setSource(7410U);
    msg.setSourceEntity(181U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.268980551411;
    msg.lon = 0.591482999403;
    msg.depth = 0.988186008544;
    msg.roll = 0.193408779148;
    msg.pitch = 0.115052038712;
    msg.yaw = 0.674512114418;
    msg.rcp_time = 0.286090795034;
    msg.sid.assign("NMFCGPFKXOLKFVREJESYZWCDLH");
    msg.s_type = 94U;

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
    msg.setTimeStamp(0.762737410233);
    msg.setSource(15620U);
    msg.setSourceEntity(222U);
    msg.setDestination(34908U);
    msg.setDestinationEntity(153U);
    msg.id.assign("EDQCUOEFSKSHLMQSIRBWQWSFRGOQBGYGALJVAMPWOCUHXGMCATJZBODHKUWEVNYQXITCMVCIEFVVPDDBIILWKJUKDOFKINHKKFQNPBXJHYLCPRXCEFESJQNYDICFTVTQGEPULOVGARZRRZMJFIGYLWJBRPNDJ");
    msg.sensor_class.assign("QWLXEVVJMIISPNPFZRRETR");
    msg.lat = 0.0516047911389;
    msg.lon = 0.919273698827;
    msg.alt = 0.129799361671;
    msg.heading = 0.442002825695;
    msg.data.assign("HIVMFFNVOKOQXZQUTDTMOWFLFDGIXZWNIHCJZIBARLMX");

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
    msg.setTimeStamp(0.802065462488);
    msg.setSource(31852U);
    msg.setSourceEntity(119U);
    msg.setDestination(43562U);
    msg.setDestinationEntity(134U);
    msg.id.assign("JFYYTAAKAWJTDVCPKEUHZHIEEAUHUBSNYGSJREUSQKEPZRTHIZPLRYGNCWMZTXVODDYSPQUUGMKKSSIAHIZYACNBWCZAEHWFALONUDLQSIUB");
    msg.sensor_class.assign("FSLPCOXXASYPJKTTVLJTZUTISMPHNVTARKYEYHINLBAYJHUEOWCAREXDWAWHMMWNPVUFQBCPQKVLBRXPWFGMUSQXAFBBDOTEBHUDPXTMZQVNQTYKOPYKZNZKGONFFILGFABPZBNNWUHJEOKGRXXLCDIZUSGJUIJJKDMEKVUCSWIUNTOGVWRGAEZHIXWRVLOPLTRK");
    msg.lat = 0.755848755839;
    msg.lon = 0.885525792032;
    msg.alt = 0.842579611846;
    msg.heading = 0.0949539580084;
    msg.data.assign("MSHWXDROXYDIYCLHNQLCUSPBJZLQXYGICWDHEUBILLZEQPTCWGQHCEAIPOXLEHSGBZKFQYWJGEVFVAQMVEDAOKJAONWFTFBQOMAIFWKSEWUJNIUTNGRBORUTZFMVNMHALISZEYCYPNRTMNGUNTIAIXHCJISKFLZCFBEZWTKAPAJMUMNOXOPRZTWYDVDRBKUMXCRXLR");

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
    msg.setTimeStamp(0.947379702494);
    msg.setSource(56622U);
    msg.setSourceEntity(85U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(63U);
    msg.id.assign("ZAHTCBUYFXHUAUBSHWFVQBNPEGXMBKCEKAUFRIANKLWBGBTKZUTOVQVUKSGOPWSDWEMHJTXICDLJYACKNLESCPVUVEUOXYBYIZIRALDIJFKIGGTUYNBQJLSARCFQDGXAPHDFLKCZDVUIGMRGGRMTQDDFWSMJSZODNYQAASVIJEOCXWZTNQLXOYTRPSZMIXEVRKENJHFCLQOGYVHQMWRW");
    msg.sensor_class.assign("PETHYGOFONDQAQBNKGPNDGITZZXPCDRQRAYBLUJJYLDIBASCRFPOEMUTLZKTRWCCFSTXMIUDGVZNWRIBROOLMNPMUKRXVPFGXJKJIFFRESIYOKTHIHPUTGIYXCMEKAGBAKWEFPKPLXWWWDYVJZSZQVHMDMOLCEEHDTLHGWRUDGBNJCZQJBWLQTXZUKZVAMNTSAVIBHFFXJNQUUMEJQWZSPVSHS");
    msg.lat = 0.0643711156792;
    msg.lon = 0.574827988411;
    msg.alt = 0.838337656058;
    msg.heading = 0.267470261772;
    msg.data.assign("RQZUOXTWKFLVDOYLGDFDNBSTRMLVQWCHBHENQSAAMENOZFMWVTIQTPDQYJGDJELHZRYWVXTZGAUPPGTQYQXUDBUPFLBESROAZGOCINAJC");

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
    msg.setTimeStamp(0.113091263694);
    msg.setSource(55069U);
    msg.setSourceEntity(107U);
    msg.setDestination(28065U);
    msg.setDestinationEntity(134U);
    msg.id.assign("EBUCVBCKMRZWSQQUAVCPYYIYAXYLMCUZMIOQKNOAEFVPLOMQXOJUWJTFVDLOSBGZOZGWROREXIXXZQSHXPHTTSKEJJDIHEQQVHKWOWGULNMXGUGUYZFQCTYIGJFHQTDEENMVEHMWKWMZWSHBRPYBDGSSTJJRLKAFMEYDCNJXZXHWLXDIPNBPRBZYABUSUGFDACFANGFHN");

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
    msg.setTimeStamp(0.194116122309);
    msg.setSource(49488U);
    msg.setSourceEntity(254U);
    msg.setDestination(15392U);
    msg.setDestinationEntity(217U);
    msg.id.assign("LMBRDOSDXXWTQXTXDZIBDHJHYBGGGAOMGAQSJJZWMPKVPWDEULGGFJAZKSQZCPUPNVWLFCCPYOINCGWAUIUJBQJJCOGENXCHBBOZIFFYFAVEFZTMECNRXSQYVOWVVCNQTRJQPLZUUHZDODHYTKJTBYNAAQBEUWAUNTPOHXSIPKIR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KMZGTHAMZFQJQNAEIWUQMAERDTSRZLZVIPGKFJOOSBMGJQNHIROJWLPQRIZEVFWLODHGTBGKZUXXKXUHFPSBIXUVYYOCRCLCLUXLSSLVDKSIAD");
    tmp_msg_0.feature_type = 151U;
    tmp_msg_0.rgb_red = 67U;
    tmp_msg_0.rgb_green = 78U;
    tmp_msg_0.rgb_blue = 18U;
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
    msg.setTimeStamp(0.202933833677);
    msg.setSource(7712U);
    msg.setSourceEntity(227U);
    msg.setDestination(62898U);
    msg.setDestinationEntity(86U);
    msg.id.assign("UUIEXBDWUTMJSKYVVSBGBOTZFWWLCSNELUUOACHRJOKUOGXNFGVBETCWPRMKOCRVKYCKRNCKJPJBPZONGZWIYCAFUJDYLAQSUIXFKZVPRBSRYTQGHHHPMBMETAIDWDAMTDQGVOLKTFENDPWULCFEMCVPQRLBHNIASZN");

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
    msg.setTimeStamp(0.706415089594);
    msg.setSource(45459U);
    msg.setSourceEntity(144U);
    msg.setDestination(41166U);
    msg.setDestinationEntity(25U);
    msg.id.assign("OCMGSZEFXJXOVUJPHHMCZAPTVHURHMQOZEHLRXYICSOSPUBFDVPJORFFQNANWEEHVYHDUINSUNXRZHIOLYHVFQSZQGVGZICPNDFWODSMKIYKLDUUASBNEQONE");
    msg.feature_type = 93U;
    msg.rgb_red = 133U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 157U;

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
    msg.setTimeStamp(0.43624345058);
    msg.setSource(57083U);
    msg.setSourceEntity(182U);
    msg.setDestination(60037U);
    msg.setDestinationEntity(73U);
    msg.id.assign("ORIBEGJLASDAKAEZBAZGOCKZHWUSPMEFRWKQBWFQALUNEVUXKNFNJKZD");
    msg.feature_type = 216U;
    msg.rgb_red = 41U;
    msg.rgb_green = 191U;
    msg.rgb_blue = 121U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.33642767325;
    tmp_msg_0.lon = 0.200312466213;
    tmp_msg_0.alt = 0.296309781842;
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
    msg.setTimeStamp(0.647922429327);
    msg.setSource(14913U);
    msg.setSourceEntity(24U);
    msg.setDestination(2181U);
    msg.setDestinationEntity(139U);
    msg.id.assign("GNPOFHFCVXEINVVTJVPDNUEAOJXDIUZDHWAGUTKOEJIYBKMBBFUYDJKCZYNHGNKQTHBROTMYDRTAUTMLHMGURZSGGVSFFDKCXWJOXRJJGOYPLAHTZPNIERKMIRBVCKAWEMGDIAAGJAIWQRNZFWBYHTSMCLYQLDCMPWEBQLMEHHPASQXLEYQCTOSZDSANNUZOECBQHFSXLBICQJLSQKGPXPK");
    msg.feature_type = 58U;
    msg.rgb_red = 76U;
    msg.rgb_green = 220U;
    msg.rgb_blue = 129U;

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
    msg.setTimeStamp(0.518175998679);
    msg.setSource(17357U);
    msg.setSourceEntity(252U);
    msg.setDestination(47910U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.0742566743549;
    msg.lon = 0.409910542557;
    msg.alt = 0.670425768614;

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
    msg.setTimeStamp(0.0153453253076);
    msg.setSource(28246U);
    msg.setSourceEntity(184U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.316699133141;
    msg.lon = 0.890539138278;
    msg.alt = 0.436781191595;

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
    msg.setTimeStamp(0.384318153906);
    msg.setSource(8353U);
    msg.setSourceEntity(25U);
    msg.setDestination(43218U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.891462327321;
    msg.lon = 0.0729771234141;
    msg.alt = 0.0905370012884;

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
    msg.setTimeStamp(0.0163235742384);
    msg.setSource(64711U);
    msg.setSourceEntity(142U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(170U);
    msg.type = 177U;
    msg.id.assign("FGNUUGFVPNZVMTRYHLMUICUTFTRDXCSYPJHOLWFXFKWHPDOYTUQDANXQLIVCCBKGBRUEMMGMBOWLYYSADIWYIXGPPZOEJRQEDDSGZSRXHJRPALRZCOTULS");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 121U;
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
    msg.setTimeStamp(0.212407237899);
    msg.setSource(16372U);
    msg.setSourceEntity(129U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(216U);
    msg.type = 115U;
    msg.id.assign("JROUMMYTPAADLIRLLJDQGPAMATDZ");
    IMC::AcousticMessage tmp_msg_0;
    IMC::FormationMonitor tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.ax_cmd = 0.978893212018;
    tmp_tmp_msg_0_0.ay_cmd = 0.455380167406;
    tmp_tmp_msg_0_0.az_cmd = 0.392513556581;
    tmp_tmp_msg_0_0.ax_des = 0.028670663987;
    tmp_tmp_msg_0_0.ay_des = 0.963628669392;
    tmp_tmp_msg_0_0.az_des = 0.349327010395;
    tmp_tmp_msg_0_0.virt_err_x = 0.621448470638;
    tmp_tmp_msg_0_0.virt_err_y = 0.14565581724;
    tmp_tmp_msg_0_0.virt_err_z = 0.405916776651;
    tmp_tmp_msg_0_0.surf_fdbk_x = 0.96975225405;
    tmp_tmp_msg_0_0.surf_fdbk_y = 0.431821664462;
    tmp_tmp_msg_0_0.surf_fdbk_z = 0.597897633231;
    tmp_tmp_msg_0_0.surf_unkn_x = 0.773895550534;
    tmp_tmp_msg_0_0.surf_unkn_y = 0.657473911996;
    tmp_tmp_msg_0_0.surf_unkn_z = 0.166813352336;
    tmp_tmp_msg_0_0.ss_x = 0.866072094595;
    tmp_tmp_msg_0_0.ss_y = 0.901445562176;
    tmp_tmp_msg_0_0.ss_z = 0.879213040068;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.247760830281);
    msg.setSource(23187U);
    msg.setSourceEntity(42U);
    msg.setDestination(4706U);
    msg.setDestinationEntity(239U);
    msg.type = 29U;
    msg.id.assign("QVLCHVEVQDHAUJFRVMFOAQIEGXWWOGADGQOKUFJCCZMHSXBSDHODPKSFTCBASXYZPPOUESPHUITKMKZIZQTJVLVTICIRBQPXTJJNHLLUABJMYYSQIWYLEWUGATCBRCENRMHENAKUXCQXUFGLNFMDKRNGSLXLAPLZHXWHXSDNIMYVOBGYWFBTIBZCOYGGPWZQHV");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.792260066385;
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
    msg.setTimeStamp(0.647776771741);
    msg.setSource(26022U);
    msg.setSourceEntity(200U);
    msg.setDestination(39481U);
    msg.setDestinationEntity(70U);
    msg.localname.assign("TVIGAEJUSCDRDTYOKPLQXHRWWZTILSPWQNWHZDDFNVQBIMAESFOOIHXEXEKFUTHYHTIOPIQCAXCBZPZYFZYXCMOJWRWDFFXKASRYTZUEADIMLXPNBXQODGVVQFSULJAASBTCWEGUQVCVLZJOGPHRNEGLJJ");

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
    msg.setTimeStamp(0.000673748484005);
    msg.setSource(28662U);
    msg.setSourceEntity(44U);
    msg.setDestination(59555U);
    msg.setDestinationEntity(134U);
    msg.localname.assign("UNZQFGIFXUJNGQKQDBAUYJFLFBPJAEPVMBUWCVFREFJDIRLGBQBPNZZRLRSWADIVLESXTAGRLTRYIUVLTVGVOJXTXEHHORUBGSWDOPXAWIZKNKKDSHJWCOZVAEWMDOTYSMANNSCVTEXXVDWTIIYARPBZKWCFCHXIVQODMGYSXLQKAYMEOGQZHEELGCMJEYKWUDPCPXQSCIMTIRQTHSOTYMPBZZHYKORNYF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JECMJNZWXQHBSJXCBXOSOITJDKCLPILDHBVEWFWYLIZRUSCFXOFFWKBAETWD");
    tmp_msg_0.sys_type = 46U;
    tmp_msg_0.owner = 62430U;
    tmp_msg_0.lat = 0.309667826641;
    tmp_msg_0.lon = 0.97829930858;
    tmp_msg_0.height = 0.56266713616;
    tmp_msg_0.services.assign("EYHBCGACOQB");
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
    msg.setTimeStamp(0.885658592972);
    msg.setSource(5958U);
    msg.setSourceEntity(123U);
    msg.setDestination(36617U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("LLHPKJKRQVAJQMAATCFMKPJKFRTEUSBNCJXXWHFIALTPGAWZNDQZIHWWVHVZYYDTEHLVIHGOJBUPIGBYBYYHVBXUUPMODNWNEOAMTINKRZOERZIAOXUDWTTPGQYGCPBXVKRFQMLWEJBESFMTSCXBIQQHSLWQYEHDVUSCXAVGFNUVKSECSLFRXYZMNVTYFTSKZGAECXBSRRGONKZRMWFHGMUJCCQQFIJEJBWULJYDOLPGUPDRDOSDNK");

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
    msg.setTimeStamp(0.92642642209);
    msg.setSource(23664U);
    msg.setSourceEntity(78U);
    msg.setDestination(6045U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("AQWIUUPXLWFTVQNAXYSBQBCKNUYNKKGKCVDOGPLQTAXWWJBSYWDRADEDATVVUZEZMTCBJAHMOTBIQDXHOYPKYIPLVDFWWAUKEMHSLRQOIPBOVZCGNMXUGJNLBCNNIETIMHN");
    msg.predicate.assign("FIKENRKPVPRNYHWTPEJFADOGOCRWOOWJBPOLRGHMNWQCONUQUNAATADGVJKZRQWKNIGYKOYZJMLOSLQUJMDQ");
    msg.attributes.assign("JNSUEZOFHAIBLZFYYUXLXNJYOLJYAJHDZQDGEQSSVLBDUCEXCRGVQHOKSLHSBCUODPXETODTHWAJYJCZRENVIKJMAZRPAZWCMBLMZGPTERLRPAUAKPAKJGILHYWNVNIWFGPHCUEVTAXUSVB");

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
    msg.setTimeStamp(0.761886082433);
    msg.setSource(59690U);
    msg.setSourceEntity(122U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("ULFRAYLFHZDGFZEKOONTONPVGNBBRYAHBHCTJDVK");
    msg.predicate.assign("ANUUFWEJOCMPTPJLRHDJMYCXHOKOXSDOELSZQIYCGFXQWENXMWQTXBGDCLQCZORIPVYNNPNYFOVYUHFBFCJTZGGESDUYZUDELZVBDSTYSQGLIIKAXXVKIPPWDKCCPMHZQGTJZEHSTQVRNFDJERHGAXLKJJVISBHHTKWJONKAFUBRE");
    msg.attributes.assign("JDDXRARYHRTNJPJMTTWHQQEFYGHGAXARVZUOCKCFCRZKJIVWAJHOSQNDRETDQRKBYMFVDSYPHRAHEXKLCZUGZNHTPQXVGXJZWBQWXIKMALLTLYZXNMAKZNJZNCOEEBZLITOGSEPVFPVZYMMFGWYIIBCHSBYUSRNFATCPNOLXKSQGDICIWIMDYWGLHOCSOFUQBLGNHOWDUSDEUPTUEWOSVQKLBVNFB");

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
    msg.setTimeStamp(0.756670646596);
    msg.setSource(26271U);
    msg.setSourceEntity(172U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("RIGGNKZSPCYRDDIAPIVWEMPOTBBPZTLAUUYEYWDEHQAZHHCICBJTMH");
    msg.predicate.assign("UIDDAVOSZBQNCKOUYPMULKPPKDFDLBSUWSEUIGJHQPEQNBPXTKULQVYCNNMDFMYCMIADZDWINCTINIOUBUGTMOWFTPEJXDPF");
    msg.attributes.assign("CWZYRCAWPSKGCIESJFVUBZXGHZIZQOPVHMBDFDCDYGYBXMTETSALMEUICSWNWPXIWTTIAEHRAFYLKETCPWAPMOCXYNGPBGENVUIQJJAZLRHZOVXZQNTFLLHYJFQGKAXRBXVLCOJRSWUKSFJZNDAFMWBKKCRQTBZRHGUDNCSGMSDRVHOGUPNLERWLJMYEXQVZNDUALQXKBRKIVOEEVMHYUQONQFOPWTHB");

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
    msg.setTimeStamp(0.314597449814);
    msg.setSource(29482U);
    msg.setSourceEntity(156U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(150U);
    msg.command = 11U;
    msg.goal_id.assign("WTLANBOMMYEBZVMCBBGVUMNRMIGOPNJXKWESPIYJFWVVZTWCYGPNUVWSSQHHKBUTZGAEUCFDXKALQRIHLBYKIWQODERWPDCOMQKFZUODSUYSCFSBXMJIYOTVGTBIRDUCRZXEDEZRUECWOXFQXTGVMNJZASVBDRPGLJGRLJNYNJCCZEFKLTCVOBPFAQPJAJKGYDZAYRXSXMOYKHAXHFOINALHVUHSQHIGQXMWNTELDHL");
    msg.goal_xml.assign("OBNBQBHCVJZHOPFVOTU");

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
    msg.setTimeStamp(0.993316371785);
    msg.setSource(49329U);
    msg.setSourceEntity(231U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(71U);
    msg.command = 15U;
    msg.goal_id.assign("QFGXVMAGHMIAETQMCFXBIZXULIOGLKEWYHSGNAOJJJEEUFWKCVDXHYMTNUXSVAJSDZITHIOUUQMZODYXBWNPOLSNQDTWPJPLKTRYMWPQZCQ");
    msg.goal_xml.assign("QQDHMWKBEKAZTLEVZOGVEKUWOHN");

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
    msg.setTimeStamp(0.918019705687);
    msg.setSource(2622U);
    msg.setSourceEntity(211U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(190U);
    msg.command = 174U;
    msg.goal_id.assign("XTJVUORXZDAJJLXITNVAQGUHKMOFEPIRBEFKREMBAFAKXELOTWZIRHCTNKBRCYGXYNDJXYWGSAZCXPHPCKCWWHQQPYLFKZJSYFSEOCHEMMRAENJCNIFLQSHI");
    msg.goal_xml.assign("FIJPRDXDTUAQPIMLUSWZXOQNCZHTYWPDMHGFZUCZXZIRKSMPEXHFNKENQJWVKJUTTAMBWRXGRYVIVLYACODZUOQINSSBLGFZHCHYVJCEAXEIUEURSFDEVVAYFPRTRSQDCWFSENFVWTHQQJKNJLKYHQIQZMNGLRPVEGKJLMBHCMBATHGNRDKZSPJDFAYEBWYNVKSXGIGAMLLJOTMPOCUBOPARPTHCJ");

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
    msg.setTimeStamp(0.415183871831);
    msg.setSource(20187U);
    msg.setSourceEntity(68U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(135U);
    msg.op = 237U;
    msg.goal_id.assign("SWSZOFLBJJR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AQWCWTQHMSCOKEBVECBEDJEVNIZCKXDNUGDVCQTMFOVLOAWESYBFDIXRSKMSDKCPWIVUZWXIFDALRPPTYKCHSGYDLEAVYUJZDFBRTWCHGAFEZYXINGSHHQSB");
    tmp_msg_0.predicate.assign("ZBIYBLUSSAPUWASDTZCIEPRYYBBOBZPFYMPGDGHUDRWCLGQPOLRWDQQEXNSUQXKCINTWNZPZRMFNXDRBCSQMJTFDVUHWVNXKVCLXQSKETCAPOIJWEDFIGAXKVRHQGOJMHNLYYGRFONCEKMUNTSQMKWGBAXYTBHBJRKQCNFWFMUXDOJMO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LHDHJKRXDXTORHNQNSTSKGTATFQFVMGEXUPGZCEMMNJBUGYBGHMHMLJLICOXUAVFLKDQHPDKYFXBIWFANDBYENOFXYEGQAUW");
    tmp_tmp_msg_0_0.attr_type = 45U;
    tmp_tmp_msg_0_0.min.assign("EAOBUKIRZPKEFOBCMAPGWRNLJQAIJDMNUOQLERTVXTBNZVNVKIQEAWIOHYJSUXBYKHJLDVFFQFFALETDJNARFWUXOYRYMLQXRAYMFFVHCHTUGQSYLQGEMZDCYZDGXIEGPKPUTVXCRLDJJYGQIPCYYVHHDEWOPKBVHOWSKGCZJWPIDXEIBNDDKBSFUKWGMNWRSNSWPBZMSATTHBZOGAUV");
    tmp_tmp_msg_0_0.max.assign("BGLEUCPRDJAIXFIPWOKHBSFJZWZIRJVTXTNPPVNCSGTLMZWAKOODKHKCBRGQCSLMUKBIWCQYMPFJLZDAQHAAJJKAAYNRHYETFOPTUDICSAKYXOQLGONODPXXDZVYZPMAZWFTBHWOGERSZVFYHNSDXLHGCMNFIQDSAOURXJROQCGHQIEVJKQD");
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
    msg.setTimeStamp(0.918011414667);
    msg.setSource(42880U);
    msg.setSourceEntity(14U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(193U);
    msg.op = 24U;
    msg.goal_id.assign("OLEGYKFHERDRTCPPKRDQVMBNRYIZELUFRUSEWBNXAEQJOBQRIFJOHWLSNFOVZZDIAGFFEEZTJTMWVFVZVSCZPRVNXDXCOACTNBXYWDEEBHQSNWAVVLUZRQGQBJPWQDYUNPWUSGDGCHABBXFKVJQAHSIPLPUAKNMP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BTXEQVBTVLQMIMNQNJZPMCRUKYOEBYRPOOPVYKMLLXGZYRJNTCKKDFTWYLEDRFAXCPJIMLZEZRDBCAXOESAZJKKHTITAWICYUOBRMNPAGRIWQUQSTCWIFEODXSFDWWVLVHZGPWJFCNDWPTXRJKHLMIBCGFWDSYSRHFVAJSKHGOCSHFPBHXZERSFSTQUGZDECPYQEBXEXMVJKONNHKABIVNUUMJGHDA");
    tmp_msg_0.predicate.assign("PBGUFUKKCGYLFBNFWJOGIMSTACXXDBZIOQZNKPVLTFZRTQVJNMPOGAQVIEOKKNNOUEHVYWSHYCCQHBYXORTPHWJFRIMKCLXBQGZHVALTZSDAEXMPDJNUFKTBFZIJIQGNSXWZXQGSAQRXXHEEKMKLASOQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FZORLSBFBZNDCHVENTEOOBOLDODLISAHPEMZZKAURTRDQVENAQHKCWKSZMXJWIYWJAFYTUWSAHSBPDYMVSTQKIQFLPXTFWZHUJSWYIIPKEYKTUXDOHTIEWOYRCISLWGEZCQNJEULNIDBCLTXGIKJGFOQAJMCAEMPRGZNPURDNQQKBMNJYBJHVRLR");
    tmp_tmp_msg_0_0.attr_type = 244U;
    tmp_tmp_msg_0_0.min.assign("XKFRLTWEBKSZSKFZPKLOCEITHKCGJOVDLIVERCCRBIUWDMHQAEQDUTUIXMXZISJMTJZSYJNEMCJFQZZSRMKQMUOQJLLTXOBNDFFGPUWW");
    tmp_tmp_msg_0_0.max.assign("RTQSMDTBKQXUBKOSWNBUCYLJYLPWXQGVZGCILWUETXPOGGPBDHOKOXCFLQADPGGHLYMSRMENIQVHJYVFCOHXOIFZPQAT");
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
    msg.setTimeStamp(0.00833143326851);
    msg.setSource(58666U);
    msg.setSourceEntity(177U);
    msg.setDestination(26123U);
    msg.setDestinationEntity(221U);
    msg.op = 220U;
    msg.goal_id.assign("CFQQOPLERQYSBLFVGGCYZZEWTGABEDKAIRKHDTNBOXJWTZGDRPLHXFSRMZHCSDDMVUTAUUYDFOFCOAYEBJHKMCLGIJXPBXLNOPDCTQNSWVQVUUVHHRHFRFZUYVXJXAPRQYEAJYCCQKSEHGEBKJXITIFBCPDDOXAUHEOMMZIMUUSFNTPJOSIDXWGSPZAONVNVIIBPHL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SEJXTMFDUAIZIBUSSVEOLOYWKXMZFWUCDLPZCQGRXNJWPOVATCVCGYMIJDHFHIHIBUDBQQJCTGVREPHZAIAVYPRTPEXG");
    tmp_msg_0.predicate.assign("BWRNEQUMYAFMABNPKQNKSMCOTJGOBOQGRQOZFVEMEVNPLSIKHHUZTTVNGIHYWIJPDBEAETCMKJHGZECXAZQKXFVPDTHAYGSLFCBBBVIYTWCXUYGAUFOWMRWRAKKKTIXYECKVXAXZLJUUYGDMTNWYNEZYDJVAJTMLDFPFLDCUPHZJQPCBULUQTVDRHJEGBPHNLIEDRSFAROIGRHMRSWFQOSJD");
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
    msg.setTimeStamp(0.398386394648);
    msg.setSource(46322U);
    msg.setSourceEntity(55U);
    msg.setDestination(39902U);
    msg.setDestinationEntity(179U);
    msg.name.assign("MDCVSONAIQDPELNTRPQGPGPVSBICVHZWISAWMJAZXPSLOWNZVIQFEKTGHUOAWKHOZGRGROZFJJPHPRDJACWDCQKRTUBZUSKBOBMBMHN");
    msg.attr_type = 163U;
    msg.min.assign("FQGXZQLVPNKMHDXAMJPIHCDZCXMRRVECYUIIULVGGWXODPICCTGSKEYUIZLYNSSJRKYAJGMEKAOCPSVOGPKQSPBQSNUWRFRAFDCSZKXIVHGJBQMQJVZXEMOFJMJTWOYKUDOLHRZWAZXEFZUDNADVBWFBIVPOKSEMFXWFSEIVOGGRYHJQZRNLBAHHTRHLHEDBNBN");
    msg.max.assign("ICIXXFVMRKOTKUNTAZDBFXUAVFWYTVOIUYPDDGQBIGCEPTVWRLBFDAGKSGKJEYQDCJKJOJMKZNJLXSCCHYFZTQJVBSODIEECRNGJMQMDSHBEAVXAFKKMIOSSZQWBEODPGHIUZLYSOHHZMQHLULWWFVYENUGPQCTVXNHTCPHGARPZSAAINNQTLVOX");

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
    msg.setTimeStamp(0.581253714467);
    msg.setSource(55377U);
    msg.setSourceEntity(15U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ALCEWRDWBCWSYYUDRGHRTPOXMLQMV");
    msg.attr_type = 45U;
    msg.min.assign("LHAOGWCHFREZUVNQQVKXJIRVDNLPJSEOWDHGEYFPKIBZSGCNBQVSWNPTAGVILBLQIYBQTLOHXBHPKYDPKZOGJTDKKKXHLVKMIOSEKAQMJQAEHMIRJTSUQRFGGOYIALJZBUNFDUVJGSTDVEHGMZFDHBWXDYJAFNYEXOWNKZLBZAMNFXYGOTCWBRQCLSCUZMPPDURITZTURLURWCIFASRRCMHZEEWNMYTIPWFPXVNXCEUJVTJOBCOCWMDQY");
    msg.max.assign("FOIDWZUTAFYEKJPESRXIICETFBQUGNEHGKBHUUSDSMUNPCJNKIAWQNITPHJECVVYFQKKFUCSGKHGDJOGXLRHEKGVZCWSCEOXIFMYRYTOKWMQBNFVBDXNYULQMTWPWGRNYXCXJHSFOZIQZTTZJKXHXFWTRBPUZMLMOZTRQAFCRWCYIJMNRWUUDVRPOHNSOAOTVVBXADALGSDYBLBVWVDGYMSEDLQLPL");

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
    msg.setTimeStamp(0.708842078466);
    msg.setSource(35200U);
    msg.setSourceEntity(151U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(73U);
    msg.name.assign("OQSZRGUODJGMGLGVNEJPVHBUPRLTNCGNZDHOHISYJIHTI");
    msg.attr_type = 167U;
    msg.min.assign("IKMASDGJEPWQUKFPCVDMZQSRVZLHQXHTBUKWHE");
    msg.max.assign("ENXOUCTUVCPC");

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
    msg.setTimeStamp(0.722912893051);
    msg.setSource(30388U);
    msg.setSourceEntity(61U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("TUIWDFFRLTBWEPOCHNKOCKWGYKCSXMGZMNWNRMEVVDQPFOTIUX");
    msg.predicate.assign("TRADTTWLUHEFNXETQPUKQAPFQNBWJRVXOSOZWXLLWWTSPVLNQAYICEGEXNTGMDMRPRXHKJXYVGISVOQXRRKNDQCVYIBGZIUJAFDYQBBWHO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XLLWVIBGUWRURMMQHAILFHDFIGXUSKHRMYBGLJJWCCVPZWPMAZQLJDNFONALBBIGIBSXENZGEVOXJTIVERBQRSBMQMZZDSPZTREATFBIMWOKRJASEOAKULKGQKOYDCCFXHO");
    tmp_msg_0.attr_type = 15U;
    tmp_msg_0.min.assign("WXKHNRGHDUESKOUGNFVCOVGACLBJBHQTVEFCEGZJWNZVHGXVATHFKZXPHBJPDSWDPRTWOIIYQKCHIOBLMUQOSKQYJVSIXSCHXKJMMTAMATGDWBGOYHEPMYQRZORSIALTPZBDVNCRQDYUXLCPODZNNYCEERDWRSMEMXJJANXEFQGFZBPWMGLAZP");
    tmp_msg_0.max.assign("ZZPVKXJIQQICHWRFVIOBAUQNOYAHGONXREAMPNIWBUDFUKRZWMOVPSJSPWWUREMKKSGFLMQJCLZXCDSBSGPDVRACZXFNQSFOUBRIZJQIIQUAXYZHSMZAWHKBKHENRTONLETVACFRUGRDYGFCTJCTAFPVKWXASYWLRXYEOCJPQCKDPJLUYLQHKVUDULBIYGSLIENTTPFJKBMOWDPQYESFWH");
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
    msg.setTimeStamp(0.381564149956);
    msg.setSource(25916U);
    msg.setSourceEntity(75U);
    msg.setDestination(9640U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("CDDVNITZQLERRFKYGMBZHXRXCQNPWMGAWMEGEXTYCESTJPGHLDTJBASPHHVITEMJMVKFXLEPKHLAPWSRNVZUNHEOZAOJXNWTMIMFQOSEIANNGOYJGYELXBKQLJIOGGZXBWDCMJQJMWBTAUUPNKUWFYDBZFXTIRSBADEYUVIZY");
    msg.predicate.assign("EKNRVQCVMYSHBPIDXZFZNZFLUUQBUCWTJFOFMOSITCUWOPPUFHIGBBNSWKNLOYWYPRMRBEAEFERQCESOTZSGQVGOXOIVMZVGYSBTEJMVIIPZXSJILCKMAXYFYBFEHIFXHDBJCEXWYHUYNPRTHFNLPRAXZHYMMBNTQALVQJQNHMUAJJSAKIZVKPSBGQNJDW");

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
    msg.setTimeStamp(0.241498622819);
    msg.setSource(51016U);
    msg.setSourceEntity(49U);
    msg.setDestination(9024U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("PYKNPJKZCGGDWYAEFQUKQTQRYPEYYHTEEWGPGUWRHMDOMLKQBWQFMHAALINDAMFFXNSSLVPKCFCPOSLDZTXIRUAJRFHEZYGBIPHTDNEOCZSRYEWUOXSVISSAVNNENPOKQVTXQWCTVXWRSACMUSHMAVBTLCXJ");
    msg.predicate.assign("AZFXXQONDQKENIYXTWVJILWACWCERPFAYOAMOPKEWTRLCZRMMDGCXYYIHSURGGSVSVXBYHLYJFFPHVPSAQHUYUGHQNSNXBVHZWEPLBKUJAUJLDEMAZCTFRZPYMTPZBVOXLTOKPQMXKNSYTUKQDDJRCGNODNEJAJHGZLCNIBQQUEGZWFLVFPRRTJQBRDTHSXKDVMGSDIFAMIMLBONWLOIVIHAEXUF");

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
    msg.setTimeStamp(0.224160863795);
    msg.setSource(17662U);
    msg.setSourceEntity(212U);
    msg.setDestination(32742U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("DEACCYMEOEVTZWWTZZZWERCMLWEBYPNXBRVWHQSSKETCZSXUIUIBIAKOOW");

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
    msg.setTimeStamp(0.857732786421);
    msg.setSource(28232U);
    msg.setSourceEntity(164U);
    msg.setDestination(42091U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("FSWBYXHVFCNVKKYRVIRRFQB");

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
    msg.setTimeStamp(0.367026426989);
    msg.setSource(10029U);
    msg.setSourceEntity(156U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(49U);
    msg.reactor.assign("LQLJIETHNOCPUPZFHVYBXIAMNHBWCJITCKZAGWHUXAIBYOUYYOAOYCONUIHMINVARCFZDMUKMDIJWCSMKBRUFOVMGNIXEXCHFUWWQYKLUKG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LQPTTMXWBAJCEPFJOKXPYYNULQCGBEILGFZMIESYBMHKXIARQQAAVVKHUKCKYNOFWZEBORXYFGDGXAZHJMDKTOSWHPNZCMUFRMBWLMWUTTGCOPDNWUUBLPEGHJKHFULTDNDWTUVKWUJRHVEJBHVYGZZHUZVVQTEIXCZGAPFSISRVIXPPQRCFRYOSACVRMEFEBD");
    tmp_msg_0.predicate.assign("GSVWSFFJMOZQSRYULRZRBTTFDIJFVJKBEKQJZPBMVYYPXDBQZYUWETHGIIHGEYWV");
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
    msg.setTimeStamp(0.643741881087);
    msg.setSource(21666U);
    msg.setSourceEntity(69U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(212U);
    msg.id = 90U;
    msg.width = 51812U;
    msg.height = 8737U;
    msg.widthstep = 12571U;
    msg.channels = 63U;
    msg.depth = 127U;
    msg.finaldata = 52U;
    const char tmp_msg_0[] = {111, -33, 79, -124, 71, -61, -103, -91, 82, 86, -53, 84, -6, 79, -126, 109, 112, 97, -82, 93, -125, -120, -19, 14, 9, 22, -127, 111, 61, -3, -85, -72, 56, -60, -66, 114, -91, -68, 24, 7, 93, -113, 85, 107, 95, -111, -95, -36, 41, 9, -71, 101, 8, -78, 35, -98, 76, -107, 87, 23, -107, -12, -11, -58, 37, 23, -79, 40, 92, 67, -37, -109, -71, -113, 81, 109, -29, 106, 93, -32, -124, -101, -101, -4, 68, -40, 11, -21, -56, -111, 17, 40, 12, -32, -62, -116, 88, -77, -77, -113, 20, 64, 13, -97, 56, 109, -89, -95, 88, 13, 42, -121, -7, -120, 34, -57, 124, 33, -2, 98, -55, -107, -100, -105, -47, -54, 19, 99, -8, 124, 26, -12, -34, 24, 3, -105, 120, 77, -54, -12, -91, -42, -34, -20, 79, 118, 8, 26, -94, -70, 108, -113, -62, 63, -56, -92, -45, 110, -113, 67, -22, 119, 115, 10, 125, 9, 32, -14, 84, -46, 12, 94, -25, -52, -38, 9, -65, -35, -1, -34, 110, 57, 49, -64, -40, -128, -91, -44, -36, -115, 71, 38, -115, 79, -96, -62, 41, -75, 83, 7, -18, 119, -60, 51, 3, -107, 121, 46, -84, 19};
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
    msg.setTimeStamp(0.43548716196);
    msg.setSource(42648U);
    msg.setSourceEntity(155U);
    msg.setDestination(17074U);
    msg.setDestinationEntity(211U);
    msg.id = 166U;
    msg.width = 40187U;
    msg.height = 46502U;
    msg.widthstep = 19117U;
    msg.channels = 219U;
    msg.depth = 177U;
    msg.finaldata = 18U;
    const char tmp_msg_0[] = {115, 34, 91, 70, 27, 63, 39, 37, -52, -107, 23, 121, -25, 65, 0, 35, 34, -96, -36, 85, 110, 57, -80, -38, -49, 35, -48, -80, -98, 72, 109, 117, -45, -23, -104, -36, -119, -90, 68, -18, 98, 63, 83, -125, -2, -99, -125, 59, -74, -76, 112, -68, -37, 25, -107, -62, -5, -27, 50, -68, 40, -80, -53, -26, -101, -68, -32, 83, 63, 43, -107, -105, 71, 4, -46, -69, -98, 28, 84, 82, 56, 36, 8, -74, 18, 59, -122, -112, -113, -3, -110, -41, -11, 82, -36, 26, 123, -45, 14, -6, -68, 93, 58, 91, -120, -75, 44, -45, 45, 109, 1, -105, 68, -126, -92, -71, -122, -111, 20, -63, -58, 105, 116, 21, 60, -47, 20, 7, 67, 1, 107, 2, 22, 49, -52, -57, 30, -78, 1, -119, -10, 29, -14, -75, 35, -119, 1, -107, 92, -43, -103, 112, 6, -101, -112, 108, -115, -29, 17, 24, 98, -66, -29, 103, -2, 92, 3, 121, 95, -93, -41, 22, 23, -98, -64, -109, -16, -81, -105, 11, -88, 74, -65, 0, 90, -83, -36, -59, -38, -18, 17};
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
    msg.setTimeStamp(0.131997725982);
    msg.setSource(37175U);
    msg.setSourceEntity(181U);
    msg.setDestination(48392U);
    msg.setDestinationEntity(236U);
    msg.id = 237U;
    msg.width = 22506U;
    msg.height = 11064U;
    msg.widthstep = 1056U;
    msg.channels = 217U;
    msg.depth = 102U;
    msg.finaldata = 215U;
    const char tmp_msg_0[] = {98, 67, 89, -14, 82, -19, 2, -113, 76, -115, -90, -51, 59, -34, 103, 5, -87, -50, -23, -102, -42, 28, -73, 60, 115, 96, 98, 113, -9, -122, -104, -34, -4, 99, 66, 39, 13, 46, -42, -110, 56, 21, 50, -123, 89, 43, -25, 38, 15, 118, -100, -14, -64, -79, -44, 0, -68, 115, 47, 111, -12, 69, -59, 113, 17, -37, 125, -64, -51, -40, 54, -15, -116, -47, 33, 68, 24, 77, 50, 74, -25, -58, 126, -79, 68, -39, -49, 54, 34, -11, -48, -102, 112, 94, -12, 69, 65, -70, 48, -48, -53, -121, 37, -19, 86, 112, 9, -88, 40, -71, 51, -106, -118, 5, -15, -63, -54, -11, -12, 5, -126, -89, -21, 121, -54, -119, 23, -90, 3, -81, -110, 101, 70, 31, 1, 121, 61, 57, -49, -18, 90, 99, 51, 34, 53, -4, 109, 96, -117, -48, 40, 59, -40, -19, -113, 16, -55, 121, 113, -114, -2, 17, 65, -71, 100, -81, -83, -93, -97, 21, 108, -6, -13, -77, -92, -23, -123, 67, -52, 103, -128, 84, 37, 74, 119, -30, 43, -64, -28, 54, 72, -42, -47, -85, -101, 99, -102, 42, 51, -126, -41, -41, -120, -119, 15, 38, 111, -2, -51, -89, 3, -112, 44, -79, -56, 70, 57, -39, 16, 77, 59, -62, 36, -38, -123, -113, 5, -127, 11, -31, -81, 21, -20, -78, 67, 25, 29, -69, -60, -114, -55, -5, 95, 42, -103, -106, -66};
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
    msg.setTimeStamp(0.866408005377);
    msg.setSource(20104U);
    msg.setSourceEntity(158U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(94U);
    msg.width = 12597U;
    msg.height = 61177U;
    msg.channels = 11U;
    msg.depth = 50U;
    const char tmp_msg_0[] = {67, -18, -53, 70, 121, -69, -100, -42, 47, 125, 103, 25, -76, 47, 7, 38, -96, 25, -15, -27, -69, -70, -112, -32, 42, 64, 94, 36, -111, -56, -74, -94, -53, 48, 93, -106, -38, -55, -80, -89, -2, -116, -32, -39, -62, 74, 109, 101, -70, -89, 3, 36, -8, 115, -88, 67, 125, -55, 78, 57, -59, 54, 41, -87, 76, 107, -89, 69, 33, -96, -55, 13, 29, 18, 27, -65, -50, 39, -73, -95, -65, -15, -19, 71, -114, 23, -53, -20, 48, -103, 73, -19, -36, -77, 88, 110, 78, -14, -56, 95, -60, 35, 25, 80, -54, -26, -78, -61, 21, -78, -79, -124, 16, -58, -115, -69, 27, 69, -39, 35, -125, 75, -73, -77, 22, -46, -91, -109, -38, -115};
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
    msg.setTimeStamp(0.297637106059);
    msg.setSource(3432U);
    msg.setSourceEntity(245U);
    msg.setDestination(7679U);
    msg.setDestinationEntity(13U);
    msg.width = 59819U;
    msg.height = 6103U;
    msg.channels = 202U;
    msg.depth = 77U;
    const char tmp_msg_0[] = {52, 60, 20, -88, -62, -4, -28, -104, 91, 63, -44, -45, -38, 71, 65, 118, 116, -27, -104, -35, -52, -6, -128, 34, 2, 78, 58, 96, 35, -22, -101, -122, -61, 23, 64, -40, -18, -53, 68, -126, 19, -4, 78, -33, -43, 119, 50, 4, 82, -42, 71, -19, -2, -117, -115, -16, 52, 125, -11, 97, -127, -75, 110, 40, 15, -122, -3, -78, -21, -57, -79, 103, -72, 124, -104, 31, 63, -24, -25, 126, -126, -77, -104, -123, 108, -92, 2, 18, -111, -87, -60, 103, 94};
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
    msg.setTimeStamp(0.627999253497);
    msg.setSource(24390U);
    msg.setSourceEntity(20U);
    msg.setDestination(8085U);
    msg.setDestinationEntity(75U);
    msg.width = 20250U;
    msg.height = 7746U;
    msg.channels = 142U;
    msg.depth = 59U;
    const char tmp_msg_0[] = {10, -24, -25, -86, 67, 119, -91, 72, -48, -111, 90, -65, -120, 21, 45, 46, -4, -46, 66, -58, 91, 63, 59, 81, -49, 69, -38, -79, 88, 60, -44, -25, -38, -22};
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
    msg.setTimeStamp(0.887440706249);
    msg.setSource(22663U);
    msg.setSourceEntity(173U);
    msg.setDestination(56538U);
    msg.setDestinationEntity(96U);
    msg.frameid = 238U;
    const char tmp_msg_0[] = {65, -72, -2, -68, 124, 38, -50, -53, -2, -102, -2, 103, -58, -66, -44, 18, -56, -54, -68, -121, -69, -15, 27, 56, 116, 97, -53, 88, -91, 52, 32, -31, 3, -23, 12, 79, -20, 103, -28, -8, -95, -17, 33, -78, 25, -79, -24, 94, -98, 54, -120, -73, -83, -106, -81, -55, 18, -73, 102, 1, -26, 31, 7, 48, 102, -16, 86, -107, 69, -72, -99, -105, 11, 10, 61, 14, -119, 6, -98, -12, -94, 46, -119, -42, 82, 5, -78, 120, 19, -43, 77, -23, 74, 31, -108, 29, -58, -65, -119, -34, 8, -34, -98, -113, 65, -13, 107, -92, 51, 87, 54, 25, -78, -51, -39, 77, 66, -82, -78, -50, -70, -28, -7, 62, 114, 79, 104, -118, 55, 18, 17, 96, -61, 115, -16, 82, -47, -71, -59, 8, -107, -60, 18, 99, -104, 116, -125, 58, -15, -24, 108, -67, -14, -105, 14, 21, -122, -120, -84, 98, -36, -90, -78, 120, -35, -49, -24, -72, -68, 53, -120, -93, 20, 56, 28, -5, 6, 120, 95, -1, 56, 2, 10, 60, 17, 59, 24, 25, 118, 67, 4, -18, 93, 116, -91, 61, -28, 89, 94, -38, -121, 20, -91, 7, 52, -113, 68, -125, -89, -114, 94, 122, -20};
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
    msg.setTimeStamp(0.131447385961);
    msg.setSource(12318U);
    msg.setSourceEntity(5U);
    msg.setDestination(29227U);
    msg.setDestinationEntity(215U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {-105, 124, -89, -33, 110, -103, -90, -70, 42, -126, -72, -128, 58, -86, 95, -81, -40, -73, -69, -70, 54, 110, 26, 30, -99, -11, 76, 90, -13, -125, 122, 125, -98, 125, -54, -100, 18, 34, 5, -104, 44, -102, -58, 72, 80, -106, 43, -116, -18, 47, -71, -1, -75, -46, -72, -111, -100, 33, -72, 54, -79, -25, -28, 107, -56, -97, -99, 89, 79, -52, 9, -75, 104, -15, -71, 35, 103, -70, 42, -87, -12, -126, -99, 71, -88, 40, 53, -70, -63, -14, 59, -55, 22, 14, 83, -51, -36, -36, 70, 109, -76, -99, -115, -31};
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
    msg.setTimeStamp(0.868069418718);
    msg.setSource(54190U);
    msg.setSourceEntity(116U);
    msg.setDestination(50477U);
    msg.setDestinationEntity(116U);
    msg.frameid = 174U;
    const char tmp_msg_0[] = {-126, 19, 19, 110, 60, -112, 43, 94, 83, 6, -69, 82, 121, -100, -21, -44, -127, 59, 101, 112, -51, 0, 53, 100, -27, -83, 123};
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
    msg.setTimeStamp(0.00119630417783);
    msg.setSource(1098U);
    msg.setSourceEntity(86U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(121U);
    msg.fps = 43U;
    msg.quality = 183U;
    msg.reps = 56U;
    msg.tsize = 72U;

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
    msg.setTimeStamp(0.745311531144);
    msg.setSource(26858U);
    msg.setSourceEntity(113U);
    msg.setDestination(40243U);
    msg.setDestinationEntity(127U);
    msg.fps = 17U;
    msg.quality = 117U;
    msg.reps = 184U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.31513248833);
    msg.setSource(1980U);
    msg.setSourceEntity(59U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(34U);
    msg.fps = 109U;
    msg.quality = 128U;
    msg.reps = 100U;
    msg.tsize = 60U;

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
    msg.setTimeStamp(0.449296322657);
    msg.setSource(32683U);
    msg.setSourceEntity(99U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.990043343063;
    msg.lon = 0.489202502722;
    msg.depth = 208U;
    msg.speed = 0.518648226941;
    msg.psi = 0.0490433404655;

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
    msg.setTimeStamp(0.0870149157662);
    msg.setSource(49652U);
    msg.setSourceEntity(96U);
    msg.setDestination(2448U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.410906656001;
    msg.lon = 0.741532045131;
    msg.depth = 0U;
    msg.speed = 0.517406347877;
    msg.psi = 0.706076365359;

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
    msg.setTimeStamp(0.208261444186);
    msg.setSource(9565U);
    msg.setSourceEntity(55U);
    msg.setDestination(22635U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.839390848898;
    msg.lon = 0.20666776146;
    msg.depth = 167U;
    msg.speed = 0.799533200769;
    msg.psi = 0.457804124748;

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
    msg.setTimeStamp(0.00798744342723);
    msg.setSource(2633U);
    msg.setSourceEntity(21U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(152U);
    msg.label.assign("EWDMKWKOWQSMMOYCHDATYZCXQSGKOVZUCMFOMSGTFZQRSCSRKVSFLYAACGWGXBPBLBKGHIQKZRPVMLJEGBATMPUNDFAUQWVWEQUHEOPXDKWFUWWBKPXVTWCJFUZOEXNBHIVPIIEMBTQNNRVUGRXTJJJDXFIDDH");
    msg.lat = 0.706001219771;
    msg.lon = 0.00777484770486;
    msg.z = 0.511348260276;
    msg.z_units = 82U;
    msg.cog = 0.570025054995;
    msg.sog = 0.817386476116;

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
    msg.setTimeStamp(0.179406822002);
    msg.setSource(43888U);
    msg.setSourceEntity(94U);
    msg.setDestination(39207U);
    msg.setDestinationEntity(158U);
    msg.label.assign("NKIJMTCCEGZRZVMPEPHWOISSTDHKFOQYXYZMSFWLAGGSBNCETEFMPXIVOFUGGUYPUKOPWXGFCARBQLDVNOVKOMEGERVHUJTDCHYIZTUPOTLDXSDYJUYFMTVQJTSNLMNGEYNVLSZAQWZMWZDSHIXFFYREHOHKYKQDUCJAREZVBSRBBKRIXVLTDLUYESRLLPAAUBONDKQJZQHIJADXHGHOMWTRCNAKRXUJJFXBWNZNKFCAQVBGPPWB");
    msg.lat = 0.916491704832;
    msg.lon = 0.95126824604;
    msg.z = 0.663537057745;
    msg.z_units = 119U;
    msg.cog = 0.375438664403;
    msg.sog = 0.0919927777178;

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
    msg.setTimeStamp(0.455186293221);
    msg.setSource(24732U);
    msg.setSourceEntity(237U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(57U);
    msg.label.assign("CLPJSTSNYRBLDOYKYJROWPAFCVXEOPSABEWWUDEHFSGAMKKJPBARLFMKSBZTJMNRPPQTHACSMGVEZZEJGJOHNJVMZDLQNQ");
    msg.lat = 0.416603597315;
    msg.lon = 0.963258532008;
    msg.z = 0.824848123784;
    msg.z_units = 86U;
    msg.cog = 0.445366975699;
    msg.sog = 0.27144415757;

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
    msg.setTimeStamp(0.303792510189);
    msg.setSource(30460U);
    msg.setSourceEntity(218U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(139U);
    msg.name.assign("NEBGUFYOVLQRMPTHJLJGCBXQS");
    msg.value.assign("FYAWTYLVAFEHYZIOTNSTVVIWLUEWCVDUFKNLJWLXGMKMQRXCVBK");

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
    msg.setTimeStamp(0.804026017998);
    msg.setSource(34943U);
    msg.setSourceEntity(115U);
    msg.setDestination(22552U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LWSVKHGLHZTQAYETCHCGDMKRKPZTNGCZXLPILVYDJEUTQPIFBSFEDWDRNZKLSOXAFVRHLAMGYQFNNFUIBZEYCTKXC");
    msg.value.assign("YOTARDPKKCRYQHTCFLAFGOOFLIVEAXZZUUFVIQXFWFDCLEAFKEYGYUKVJZCLMXMIYIDZFHGTJ");

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
    msg.setTimeStamp(0.431823702041);
    msg.setSource(27749U);
    msg.setSourceEntity(9U);
    msg.setDestination(11656U);
    msg.setDestinationEntity(249U);
    msg.name.assign("FAVOPHZETTDKRHXWEACNFWYHZJEXHNKPDCIYJEQGESIYKKGCVDOQASDMAXDJURJLLGLLZWJMZBBGXZHMMDXTZEISRIQYLAZGYOVTHBZCMVSPALMMQBFAOWUBQNXBMZPWSVEPNLWUDYNMRGKSUXTOCAJSPERVKLVEOFTSNBBUXUBITYQVENQDQHIHFVAKKMRSDIOFRNNJGJLFGYWUQOTLGPVDCPCSFWFTJRUCQOUHRWIOAXCIHTNPP");
    msg.value.assign("BRSJKBPDGIOKNRIFTXMLIRYXNCKPNSSUGQALUISWRKHFPOYCAXQOPRPFJMEXWPZNDYHZHCXHOKGJNAL");

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
    msg.setTimeStamp(0.657046188884);
    msg.setSource(53446U);
    msg.setSourceEntity(43U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(156U);
    msg.name.assign("MLDDWZHZZUTJOFSYGCTEKWNOTKTOPQLJUYGVYKRSWEHWDLRCEZTQDSUVINYJBXHXXROWVRTFCNVHDHMTYMCQSGAYLOGASCPWJAXKYWFJECVOIIGOYHQWIRKKQQPDNCSLSBZRFOCEVAPCOTFZPNCIKDZKUDJQXXWENBR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HXNVUEOKGRADYKJLDLZCYGXUESYSMEUKJQVJBRBRJIFSLPOQMNZUOGOJEGQPHNPFIINHAQCXBJAHNXHRPAGWQDUEATXEKHMTDWZFXFUKBDSZKCADIODXYLERHUSYGMQHZBCVPUBYLTLCJARNVGCPPCSOMQUKLKGGYFMSIWWFZYLVBNHZMSFTARAWMBOWMZIDJWBDBLKVTICQOOIZVPEYZJDVYVRPIXCTFMFSRNWWNGITCTF");
    tmp_msg_0.value.assign("LVNEYXPIQYDQCVRDXWCYYTKVYCXGLPQVAUYILORQPNXCKTSWFACMZPFWXTRKQAWFNODSLWLIQZVUZRCZDIFHPTFPOSVTMGATWYCJIUNHLIPJJDREAERGQPYBKWHKCLXVUTSGGBUNEARBDQXCXXOEN");
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
    msg.setTimeStamp(0.924123655463);
    msg.setSource(20658U);
    msg.setSourceEntity(26U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(156U);
    msg.name.assign("BHFCMRCLASKZMUXREHDFPRCLNSQNWKHQHIFKLDWSVYLGPPPKBIEPXGTZVIBTBBJANVJOKYSVWCJJJOKJUAZTQXCGMAHRKGOIPSRMBQENUHFOTNCTLZXTKAOSUOYAXMDHIUIGCYYWNZCSMZAOWOGITGZVCMMIZEVQRHDWKFPTXFBLBVVRJNRDDYDNMPTLMOESGWGEDZBUUQIPQXDOSJXQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IVZRDNAWWLSJXVUXUVYVFXGXDNVWYLCSDIPHSCAZWUWJHNOQHTKFVLALWMWPMSKQCCRSDPFZRGFTNITJMKKVAQOIWZBEGZMAVPHXLJHTNLIYXETSPBSEFHCCEUFLTUHYXK");
    tmp_msg_0.value.assign("ZACHTJKKCSMVJMLZOWZIQJWBJYWKRYKNMZFSUDYVPC");
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
    msg.setTimeStamp(0.72129726406);
    msg.setSource(15640U);
    msg.setSourceEntity(77U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(151U);
    msg.name.assign("MYLKPYKBVESDSQT");

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
    msg.setTimeStamp(0.756333177236);
    msg.setSource(62630U);
    msg.setSourceEntity(142U);
    msg.setDestination(41842U);
    msg.setDestinationEntity(230U);
    msg.name.assign("RMVRSXLYVGEBLDSBOREXKNCTWTKPYOTUKQIUJUFOVCCYHPMDQVGMISDLARFDBGGVDKOIUDJTXONGIXFQIXZMHYJ");
    msg.visibility.assign("OPMYZEDMBPKVFODRWVWHXGTOUFDUITYRPRTQVIMABCYMKKUN");
    msg.scope.assign("VODSUDGSZETCXMNIHXFFFBVENHHSIFUDHHGBBLJXBLXDDRCAHISQP");

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
    msg.setTimeStamp(0.380179699487);
    msg.setSource(36828U);
    msg.setSourceEntity(250U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(123U);
    msg.name.assign("IFLJARBNXLKQIPWWVDJWNQNXYXSFYECETUMYRWQLAPPBEQLCRUSCYLFEOTEJFHMVCOSLVLFJABAMHDVCGSTGBMDHOAGCX");
    msg.visibility.assign("NADVAFPBKXMGEQUGLJOCTUUGWLWFRDDVVLYXUBZGTZCFVXSTMRIVZRTNCOMZBLWUEREFMSDHWLQJWZRNMBBTKWCPYWKEDHIOATPRVWDIFGOVXMACHAIMJPPHKYFOOEXQFCTSKCSHSLYJZEMKGPEIYRQSUMOJNGCZRGUHYIJFUHADNJMBDHZGLZFBVQDSJIYUYXWWOYEAABASTOQRGTQCNQOKDVKKFESNEQB");
    msg.scope.assign("JWFBNCMXVOQBCONPUWPUFCDFYASSCLHURKFRHEMXDWYDIUPVEMIHOTFVOMBDWAHJWDBXEBGTYICHOMNRFDPVSTJKO");

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
    msg.setTimeStamp(0.187212230563);
    msg.setSource(65278U);
    msg.setSourceEntity(113U);
    msg.setDestination(23323U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GLPHRXSKGOQAKKUAQJSSFTBHZWJIATGDENDRIDNCPZOFJELNNYRTSMHGGTBEMOCQLCFOJOFGONAYRPZAQBEWUYDDTLKTUPLRVVJUUXCYWEMZOGDAGSPHZCHBLFPUIZXCRNECFXTKOXNJYVJWKVMPUDVSJELNFWVTZICDWQQQVMZNAHSXPWIQOPSMXKALJJAEXBLCIAHWQVWXHIEKLKTRMRBGYOIMYRYUYUBEBZP");
    msg.visibility.assign("ZVYEPODMDYZICKVQNJOGWMPLJRDQTDMHIXIPAMLSIIFQRTCLKHFTOWXQMENGIWTEUZPLDMBTRQTGIPBIPQZLFBEDACECONSGEICNHNNLQKYOKKVRVGVNH");
    msg.scope.assign("OFDVVVTNXCDWSOXVELTWPOQZSFSGVRMAONDXMBBNBYPWJMXDXCHKCHAGUUJZIQLHNGSIZXUOFKCATRYFGMYAHDAYIZQRSDJLWKPUVZRTWHTCKKJIITTJEAKMRZPXCALBYEJSRPVWPPBFSJOKUIPQETZQGOBCNHYUMIILNVMMEFZC");

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
    msg.setTimeStamp(0.530627732514);
    msg.setSource(3287U);
    msg.setSourceEntity(36U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(82U);
    msg.name.assign("KHUUDKNFATFXAQOMNYFYCUVKUDWDDEKLTMRHWRVOFHVHABMIZQAYWKEMLQQEUPFAXMSBGCVJGQRCOQYRRFLHRIPKQJAUEBZXMHZDVZMWXPYGPOZMYPBSKHXLJNLDHNTNGAIKCERGBJDCXJSWIPJMSUDEPAYUEIZWTTYVPRCGISXLYINZSQIWKIJUGSPXZSDNTLOIABDCOFVGVRTZHQOSWNFBSZXMVOONWJTBQLUEVBRBKFCEOGLCLGWPFTTYAN");

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
    msg.setTimeStamp(0.701124687732);
    msg.setSource(26305U);
    msg.setSourceEntity(160U);
    msg.setDestination(17445U);
    msg.setDestinationEntity(43U);
    msg.name.assign("RJXZFQVEVFCMYBKNXTHNRVMAMHO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QNHXAGHNGRWGRSDCXVCNARJWQZAMIBTXJKNCIETRXYJBIGJLDLFXQCZCMDVBPVIGFKJUNYPLOSRZPLWZUNDOVMAECLDFFSMTTNULJKANSHEADRVMYYULDSGKKPVQMCQIHGKWIMNUMBIPWCBTDERSMZOZGHXTBTFUOYWWBZTYQQ");
    tmp_msg_0.value.assign("FZWEMANGEPJVRHAHRFXVGSKVCWPAQFBTFOZHSPTRWNKZQAOGCCHSKLCBRDJPMEJJXEOPFEJIBDBPYRRXWCYHKXUSOIEVUKJXLXCZAQOGTUSFMIXCFBMXNUMPKTFQIL");
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
    msg.setTimeStamp(0.153260579702);
    msg.setSource(20720U);
    msg.setSourceEntity(105U);
    msg.setDestination(17986U);
    msg.setDestinationEntity(65U);
    msg.name.assign("SLODCVCKYNROOHOFURBTLXHINAEBLDXVTYENHFYFASXBDYPUGGSXJUMRIBMXIHHUODQPMAMUINMSJVZQMQGKJAHXGTFWUPPTRQCPKRSMMKOPGFYKSXOEDALIJCGEWEJZLIWTUDOAATQHYVUNAWSBTLUZDCJIQPNVGHWDZEFEJQKTZZXLKNRUNTEICBZCGJBEOFYRGQQBAVIVFWWTYPKDCZCVNRNH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YCUAISYHHOAGBRDBFXZAKMGTQBSJJGAWFFYNNRSVWEVGQLPETKYXOQMJRQPWFXSQPCALUBZDTHJNIKUIPMMPTDSNIZAMUWKZKSJSSOTDZJOLTWLSOKGGBUZUHEEHJZVYMYODZFTDZXLICPEIXAULRLMEZMVRBLPQVSCBNNMYENCQRUVWGQCBURWQJXTHUXTYAGBOVBCWALFYWNQOMGKEHNIVNHHKGDPRXFVIODPJRECOYCEPXVHKIFTWA");
    tmp_msg_0.value.assign("QMDSJTHYZYIIYNSPVFEMNLZBVAOCUBMCKRGAEDXTRWLLVTADJYCPCWPENUUKAXGIZHWKQIVOQDQNULPYFQBSODURAXDXVCSAQTZQHOZJFWYHXKLQCQSRVBTXYWHBPKTWGPBLGYDETLJSNNMNVTCRLPRUILOVFAIOOMWGGJMOXRMZUIUIXIWAOERWVTHTAEEFUPYKJPJMNZJSKFZQFSGKBLENGMZXSHNVGYXKE");
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
    msg.setTimeStamp(0.484862143138);
    msg.setSource(8635U);
    msg.setSourceEntity(243U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(51U);
    msg.name.assign("JANTLGPDNTBZHFDGXAVGARTIDCLKTCXQYXDNZXJYFHANCFSNCRUAJQLYMBVCEROUDFNZPIRBQFQWDEKWUNZFUVJSUBEIHAIOMQIQPCODPRYZBOGDGBRNLATLGNJTLWHLWJTXMZROAAISCIKVPGEXZMYYPESQWMOIRUJGEFSSSKVLBKOSEHYHHWMDJXEREBSYLULOJMWSBPM");

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
    msg.setTimeStamp(0.797634429197);
    msg.setSource(1628U);
    msg.setSourceEntity(162U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(103U);
    msg.name.assign("SHJSFYNGRTSSNQNKSKMOFFPQWHSNTRZZVWRCQAZWWAOFXEUSGXEPOEOWDDXVHJJBTAJDAFJWUKALZGWKRCPOYEVEWJZQOZMYLMHBNTKTPTPHNBDTQYBPRJCBUOHAEXMNPILVIALISLRGYVVBTMRIMZIXCGRXLDHIMQQQHXDVPELBIUBIPMJVPCVYMEXUKBNROHZUYQZUUJFCXGCSGCB");

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
    msg.setTimeStamp(0.992355084835);
    msg.setSource(2057U);
    msg.setSourceEntity(191U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XQWVUKPOJCVCCSUOWZICEFEESPDNXGEMQHKEXHBTAXDFEDHSJJIIGBPNFVTBTHYPIXBWYZRANCMYEKTRZGAKETHIPVOVFSUBLPIOVKVANKNJQRQWSZMJPMKAFYODOJKODWHJMLDSUITGRKQYOUGQUESLGLGCIUGLUBDAHDX");

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
    msg.setTimeStamp(0.620045441552);
    msg.setSource(60757U);
    msg.setSourceEntity(14U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(194U);
    msg.timeout = 3157449397U;

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
    msg.setTimeStamp(0.551802307845);
    msg.setSource(54438U);
    msg.setSourceEntity(132U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(234U);
    msg.timeout = 2577118279U;

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
    msg.setTimeStamp(0.603853280792);
    msg.setSource(63222U);
    msg.setSourceEntity(36U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(229U);
    msg.timeout = 889541674U;

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
    msg.setTimeStamp(0.742376060783);
    msg.setSource(36570U);
    msg.setSourceEntity(6U);
    msg.setDestination(28272U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3284230634U;

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
    msg.setTimeStamp(0.140164873312);
    msg.setSource(16171U);
    msg.setSourceEntity(217U);
    msg.setDestination(35303U);
    msg.setDestinationEntity(198U);
    msg.sessid = 1786885888U;

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
    msg.setTimeStamp(0.484984556423);
    msg.setSource(50159U);
    msg.setSourceEntity(173U);
    msg.setDestination(21304U);
    msg.setDestinationEntity(91U);
    msg.sessid = 195509095U;

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
    msg.setTimeStamp(0.0500888123479);
    msg.setSource(23100U);
    msg.setSourceEntity(233U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(106U);
    msg.sessid = 4039979412U;
    msg.messages.assign("AINUOHPCQTBVEGLWFKKWGZVAUZNXROOUTRMMZMHHDINCQCIOOKIYEBIFVDERFOTWNORMYRZBGGTXSDJZDYKXAOICD");

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
    msg.setTimeStamp(0.915351401594);
    msg.setSource(42133U);
    msg.setSourceEntity(153U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(250U);
    msg.sessid = 702758885U;
    msg.messages.assign("XJNRYAJAMRWIMGBMIGVFGZGOQQZWPUBAZJSEJGGLTIMHXPCRSLDBDGWAWPKKZPNLHMBDLHUOXNPIDCJHKVAERWZEUQUJQHIWNXEVZHV");

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
    msg.setTimeStamp(0.613000202948);
    msg.setSource(18006U);
    msg.setSourceEntity(103U);
    msg.setDestination(30689U);
    msg.setDestinationEntity(231U);
    msg.sessid = 2246297658U;
    msg.messages.assign("UGZPHAKESNBIVHMEVTHILEECGJZOMXRJGVPOWFMQXNPOHKNBMNRXUCWERLAYJLYOXUXJPBCABYTEFNTALYSVOJFSHCOYPUJOAVECYSSCRVQGSFKOXEFUKGVKZSECICNSAPVTGBDWRWQBLIYVJOTZPNEKBDXH");

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
    msg.setTimeStamp(0.528905499554);
    msg.setSource(53275U);
    msg.setSourceEntity(240U);
    msg.setDestination(60224U);
    msg.setDestinationEntity(68U);
    msg.sessid = 2575219910U;

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
    msg.setTimeStamp(0.0593154100901);
    msg.setSource(32824U);
    msg.setSourceEntity(224U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(34U);
    msg.sessid = 1549476697U;

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
    msg.setTimeStamp(0.178098530361);
    msg.setSource(30813U);
    msg.setSourceEntity(29U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(111U);
    msg.sessid = 560272929U;

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
    msg.setTimeStamp(0.845403842695);
    msg.setSource(2804U);
    msg.setSourceEntity(85U);
    msg.setDestination(30065U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3521044141U;
    msg.status = 243U;

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
    msg.setTimeStamp(0.903798872843);
    msg.setSource(47956U);
    msg.setSourceEntity(36U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(0U);
    msg.sessid = 3252695597U;
    msg.status = 77U;

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
    msg.setTimeStamp(0.96063261012);
    msg.setSource(56963U);
    msg.setSourceEntity(112U);
    msg.setDestination(64028U);
    msg.setDestinationEntity(220U);
    msg.sessid = 4192547494U;
    msg.status = 159U;

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
    msg.setTimeStamp(0.376698756889);
    msg.setSource(693U);
    msg.setSourceEntity(84U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ODIMFYQYLTDRELZNJSKVRLOQOHLKEWIRZGBEJVIHTDBMDPAAGHYLFFFGJTNMHUVNIOEFCTWSNIANXMZTWWLGWHPKITKXRSEUZADIZAPQUOTUUPULHTJSXBWFMRBKCGHWFXZYOFJUEDSPCZB");

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
    msg.setTimeStamp(0.755754351283);
    msg.setSource(24898U);
    msg.setSourceEntity(119U);
    msg.setDestination(54120U);
    msg.setDestinationEntity(55U);
    msg.name.assign("DLVWYSGSGMMJYIHHETLXKCEUMNPYCIKAQQKUCBNRHIIYSCOBOVHHSQEFWRMJU");

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
    msg.setTimeStamp(0.523022586313);
    msg.setSource(10277U);
    msg.setSourceEntity(45U);
    msg.setDestination(35866U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JSKWJCHXVYJNMEEKIQEEFFS");

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
    msg.setTimeStamp(0.412087212364);
    msg.setSource(51230U);
    msg.setSourceEntity(169U);
    msg.setDestination(254U);
    msg.setDestinationEntity(81U);
    msg.name.assign("GRSXXEKIBRZBQBUXGOHMTVCKTVGMHFXBWPDPAFRQVEAFQRGDTQXHIOBGZFTYOABPKDVMAYTYJZVLNDQWLSZEJGBWSRCPNLSPDNUDKYVROXMFUYCZNBACJSGWJO");

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
    msg.setTimeStamp(0.309677562344);
    msg.setSource(33871U);
    msg.setSourceEntity(61U);
    msg.setDestination(40566U);
    msg.setDestinationEntity(64U);
    msg.name.assign("NDXRCTLBAGJUZPGDLWKFREKUOMZQYXVDKFJGHWUYPWLKOVEJKQDJJUJTWIBBYEELKAODFWMHEYRCFTCKXOFBBHGOMXNPSQICNKQFJOXIWTPXICAMIRZXRQMPVFKCGALVBZAWOVYLJAZJPNSBPWZCROBRBCMTYSORVIATXYIYHNUSTEVAZGHTFDSHZDGRNQUSHLLNUAYMYXVNLHNCBKSQ");

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
    msg.setTimeStamp(0.742205882673);
    msg.setSource(22870U);
    msg.setSourceEntity(160U);
    msg.setDestination(57391U);
    msg.setDestinationEntity(142U);
    msg.name.assign("QDAQVIDPYJJTJBEXTNZKJEZHOENHWBLKVGRTWGSKNTGGVMAWYEFLUGNLBJUJQOMPMDWLNGIEZKZDMWIBTMSWUXQSVHYFUKRYVHWRXYMIJPXWRYLOBAOMYGRVNZOBRYQXZBCCEQAUXVQMUNFCDWCTYZATKDSJYNRVUIQSFMHITBIEHMFRQLGOOGTJDCLXFXTLZCIERPCDVKRXLACGJOPKSPBHHFNU");

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
    msg.setTimeStamp(0.425635939145);
    msg.setSource(19527U);
    msg.setSourceEntity(43U);
    msg.setDestination(6155U);
    msg.setDestinationEntity(74U);
    msg.type = 140U;
    msg.error.assign("JOTTAQCHGJKTMDEBWLEFDSOEVGAHWOIUGDJXLWKNKVEZNJQQPBRUPONWZILHCAIWMDOKGLVBIQYLCUGXJNRZSFNVJXSKVCRKXIUPCODOHLSUPPDZAOSAPILSVZRHXEUZNLCIWNMIKCCJSBPFXR");

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
    msg.setTimeStamp(0.0698099823314);
    msg.setSource(49138U);
    msg.setSourceEntity(114U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(69U);
    msg.type = 175U;
    msg.error.assign("FTCGWOMDAUMIPLBVCBGLKMPAQKNJCPIKDRUXCZHVKUCAOBHOFNLRGCAZECITXNSFGSMEYJDOUYWCWQTUSKDOQNRXVXZPDPYLBMNETNUYMCHHORFAJYEBMICPRDOHSQJKGGNPKIRDUXQYKOEZJTEMLZRSJWIBKGTRDTAVSVGMHIXNLJXVYEBJMGKWWLHTPOANBSFUBZFYPSEFQZLHAHWIRIHVQQPFZEZT");

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
    msg.setTimeStamp(0.879455081602);
    msg.setSource(46538U);
    msg.setSourceEntity(239U);
    msg.setDestination(24301U);
    msg.setDestinationEntity(227U);
    msg.type = 124U;
    msg.error.assign("TQKQIULPERIGRXISTZPUXWLWYOLTGMIYJMHPTKCZPQHBVWRGVKAPHDFUEOYMMDJIBSWFCVESRBYHYM");

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
    msg.setTimeStamp(0.0575761035597);
    msg.setSource(18153U);
    msg.setSourceEntity(142U);
    msg.setDestination(30613U);
    msg.setDestinationEntity(123U);
    msg.seq = 1938U;
    msg.sys_dst.assign("RBGDXMPMXDTUCPUWCZMMOFYOFVFIPBIHSTXXCUHEWTJNJUIJQETPAQCGHBLKGWCKDBJYFARJGVOQSZZSQYJKIKTOBXPFESROZICZXNALDGLRRENROHLPQVTYRPFAFYHKHCLUOMVRMRRDDKSLABGSWIGTNJQJSYIZMZHAPKXYBYBUWFBQDSCNFDJLVXCVDUEAQOEQWUKUHNP");
    msg.flags = 51U;
    const char tmp_msg_0[] = {-124, 92, -56, 40, -75, 47, -92, -88, 117, -20, 32, 105, -4, -51, -35, 14, -12, -9, 97, -111, -116, -107, -22, -79, -73, -15, -120, 53, -112, -68, -103, 5, 24, -102, -73, 91, 51, -40, -126, -63, 70, 99, -110, 17, -18, -85, -90, -67, -78, -111, 1, 74, 72, -103, 50, -75, 58, 39, -92, -16, -96, -101, -44, 78, -81, -108, 32, 18, 118, 84, -126, 2, -12, -97, 27, -60, -128, 93, -54, -46, -126, -3, -42, -88, -117, 27, -29, -113, -80, -120, 30, -6, 56, 15, -53, -51, -128, -32, -83, -108, -119, -63, 66, -80, -108, 81, -119, 0, -64, -30, 40, -63, -120, 100, -95, -107, -32, -35, -43, -110, -81, 100, -126, -13, 94, -34, 45, -71, -116, -100, -15, -85, -127, 66, 30, -77, 26, -127, -46, -25, -47, 115, -30, -110, 100, 3, 67, -102, 121, -9, -33, -113, -122, 106, 102, -126, -38, 64, 86, -115, 56, 4, -78, 69, 20, 60, 76, 88, 108, 115, -122, 118, 76, 3, 118, 51, 63, -126, -82, 11, 31, -123, -93, 86, -128, -27, 57, -124, 94, -21, -56, 69, 62, -56, 90, -66, -76, 3, -115, 88, 44, 63, -21, 90, 37, 1, -55, -10, -122, 7, -96, -91, -103, -17, -89, 92, -99, 69, 8, -41, 34, -9, 108, 37, 115, 123, 112, -49, -63, -85, 124, -27, -93, 87, 33, -106, 117, -20, -24, 103, -125, -36, -108, 6, -22, -40, -1, -46};
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
    msg.setTimeStamp(0.754873194952);
    msg.setSource(33316U);
    msg.setSourceEntity(214U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(159U);
    msg.seq = 33126U;
    msg.sys_dst.assign("GUUZXBLFPBRNSCYBZ");
    msg.flags = 84U;
    const char tmp_msg_0[] = {104, -30, 15, 50, -6, -86, -1, -34, -21, -89, 11, 16, 105, 51, 52, 80, -28, 116, -43, 3, -56, -44, 76, 80, -92, -70, -74, -128, -17, 59, 58, 79, -105, -43, -2, 37, 118, 110, -37, -28, 22, 98, -95, 21, -71, 12, -49, 12, 74, -96, -64, -38, 9, -14, 97, -100, 60, -7, -7, -26, 93, -17, -7, -97, 99, 116, 6, -30, -74, -75, 52, -64, 74, 77, 106, 75, 58, 26, 119, 1, 47, 67, 111, 75, -43, -50};
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
    msg.setTimeStamp(0.683547045533);
    msg.setSource(1956U);
    msg.setSourceEntity(53U);
    msg.setDestination(7820U);
    msg.setDestinationEntity(81U);
    msg.seq = 45605U;
    msg.sys_dst.assign("VBSTRCVFYMDAYDOGIVQXGUIXACNXQXUBZCTWELGHNDAAKUCOX");
    msg.flags = 189U;
    const char tmp_msg_0[] = {-95, -110, 103, 62, 122, -7, -80, -9, 4, -89, -18, -7, -24, -87, 50, 80, -92, -30, -83, 83, 31, -108, 56, -83, -66, -105, 79, -10, 71, -79, 87, -97, -75, 40, 104, -20, 17, -74, 47, -28, 110, -76, 48, 89, 121, -5, 26, -4, -17, 91, 72, 17, -54, -39, 59, 123, 122, 112, 5, 84, 12, 46, 123, -86, 102, 33, -63, -75, -116, -10, -21, 75, 37, 92, 8, 117, -121, 80, -99, 75, -117, 13, -76, -2, 66, -119, -120, 52, 36, 111, 98, -104};
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
    msg.setTimeStamp(0.929966591797);
    msg.setSource(16992U);
    msg.setSourceEntity(238U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(82U);
    msg.sys_src.assign("VLDEWRZGDMYJKZWSDOVXPFMRMHTJRBDNRJHQGTMMELHKOFWQRPTAPIMHIMBFVHKUOJMCPJHMQIQDYSTGMIGZZCLRBIFOVCGNUTSOAENPNXJNQBVGXKLOPWSIOWNBBBHIJVPUPAKUKDWBJEXOBLVXXWCYVNCEKESTRHWZLDXCUXSGFWYKBJU");
    msg.sys_dst.assign("XCPRHEMNLSNTZRWNAIDQSAYBFINUMXIKGWVLZWUKUAPQPAJQKBNAJVWESHSWMSAMPM");
    msg.flags = 16U;
    const char tmp_msg_0[] = {69, -58, 54, -52, -73, -64, 51, -57, 17, -17, 18, -27, -51, 69, 122, 21, -12, 48, 110, -109, -100, 67, -11, 93, 74, 26, 58, 24, -91, 32, 10, 105, 6, 75, 87, 119, 57, 3, -11, 97, -91, 108, -47, -63, -48, -88, 49, 85, -46, -35, -40, -30, -52, -23, -86, -82, -4, -46, 70, -98, -27, -42, -109, 102, -84, 33, -44, -103, -16, -49, -45, 57, -27, 13, -93, -62, -23, 48, -20, 113, 112, -89, 1, -91, -40, 102, 96, -118, -116, -101, -81, -106, 96, -97, 67, -46, 39, 123, 100, 124, -16, 98, 23, -29, -35, -78, 103, -113, -39, 50, -93, 66, -116, 119, -91, 14, -118, 89, 65, -45, 125, 2, 22, 15, 125, -37, -7, -108, -54, 93, 97, -22, -66, 70, -81, -16, 62, -25, 40, -111, 109, 22, -90, -36, -46, 85, -117, 34, -16, -10, 80, -114, -36, 2, -59, -50, -97, 12, -128, -65, -11, 30, -55};
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
    msg.setTimeStamp(0.460384826424);
    msg.setSource(45704U);
    msg.setSourceEntity(132U);
    msg.setDestination(23600U);
    msg.setDestinationEntity(107U);
    msg.sys_src.assign("ZZOZQCHOOAKAYSYSXXEJCWIRCJKUFAWRJHPUKEGBKHRMVPQMOLFEWGRRQPYVQGLOZFDBJRBUWAFXNVWKGSTISVSECDANBNPWEOIWCXGQNJUWZXSLSTOBJIHAPKHZZMLDGOSUAYE");
    msg.sys_dst.assign("LBFXSVWJSWUJBJWAURFUTYIYLDHDEZMISLCNGVHUDBFCJUDFQRZNODDTTCYZFXOLPSCNAMEUXHHMJKFNOEPYXFGUBCPEAZVGVMJWDXBBLZPTEYQCNSFUTRKCYHMEOQRHGIQYSVNZXXVBKMQKRWPMIPNJAWWAIUMVFQZLRDXGKVTSQZPHCWLXQBKATSZOYWOWQJGUOTMGEVLYGPLFILRMXBNQICR");
    msg.flags = 62U;
    const char tmp_msg_0[] = {103, -17, 40, 71, -81, -56, -46, -123, -37, 120, -15, 122, 56, -67, -34, -90, 17, -92, 10, -97, 107, -125, -119, 55, -50, -52, 48, -40, 15, 69, 71, 96, 76, -22, -105, -53, 61, 31, -56, 7, -8, -48, 0, -14, -27, -12, 94, 27, 107, 36, -44};
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
    msg.setTimeStamp(0.298210682299);
    msg.setSource(25462U);
    msg.setSourceEntity(80U);
    msg.setDestination(5437U);
    msg.setDestinationEntity(22U);
    msg.sys_src.assign("KXUJFIGKIJYRYMQNXWJAZNJFAENWKXOUIVSOTAFPQGHLIDYKQLOTMUQTEACPGELLLUROVSITHIYCWWJZUYSPJGVJKZBBEYUDNSVCZQWPMTYMDSYVHNSW");
    msg.sys_dst.assign("RQACXKCPVRGLTILCUGUILUGCMRCQSUUINCPFNZVVQXPAIGROHFWZNLOYBIXXWGNSAHNJBANVOYRTKYBIKVPYMXMSDBAAVEHFLZBBWZRNJDIMPZTYJWHYEXKWBEJFTBWXWJCODXSOATGTDUMDFUZPR");
    msg.flags = 113U;
    const char tmp_msg_0[] = {-78, 44, -74, 53, -89, -58, 24, 76, -103, -32, 91, 3, -13, 51, 43, -4, 4, -2, -62, 62, 65, -67, 33, -126, -7, -127, -113, -49, -107, 70, 81, -68, 105, -90, -102, -120, 31, -63, 29, 83, 10, -54, 52, -79, 34, -43, -68, -75, -52, 124, -38, 55, -1, 98, -32, 86, 94, 5, -37, 10, 56, 110, 3, -113, -48, -35, -34, -59, 104, 33, -95, -39, 117, -78, -41, -103, 26, -32, 20, 86, -78, 95, 79, 104, 109, 66, -97, 37, 6, -10, 109, 110, -16, -59, 88, 5, -122, -128, -29, 37, -38, -83, -38, -1, 79, -6, 80, 117, -84, 15, -104, 110, -122, 114, 118, 67, -33};
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
    msg.setTimeStamp(0.24610606611);
    msg.setSource(38318U);
    msg.setSourceEntity(31U);
    msg.setDestination(46088U);
    msg.setDestinationEntity(155U);
    msg.seq = 46395U;
    msg.value = 237U;
    msg.error.assign("OTBPDXIGNOATHVFZRCDCFFKYTQZGWCVQNLDZCISOLYBTTETMGW");

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
    msg.setTimeStamp(0.427646485442);
    msg.setSource(38039U);
    msg.setSourceEntity(62U);
    msg.setDestination(44760U);
    msg.setDestinationEntity(54U);
    msg.seq = 40936U;
    msg.value = 41U;
    msg.error.assign("LVYUBPEKGIUUNXJDUGAYURHCSEGHZLJEIGEQTWIUMQALWNQNPEKCIQOKPUHLORTKOWQZCXXGPGTBFTSVLORPJRUCWZDJCZERHWRMJDJQKAJSZHYJ");

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
    msg.setTimeStamp(0.727018865239);
    msg.setSource(59839U);
    msg.setSourceEntity(103U);
    msg.setDestination(26853U);
    msg.setDestinationEntity(234U);
    msg.seq = 63724U;
    msg.value = 44U;
    msg.error.assign("JQMJJNKNPGASQBITMNCHRKLXUL");

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
    msg.setTimeStamp(0.856970009327);
    msg.setSource(62861U);
    msg.setSourceEntity(21U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(1U);
    msg.seq = 19968U;
    msg.sys.assign("FJJDKUWYUHTBRPGPDOSDMDIMJLGEVMFVQZWNHQELPRFOVBGGEZYGAKEZEGWTOSUNTIATOVPJCVXTAVNPGYDILZLBRXICSHILTRYZSPXQTLKXFDCAFHLNNDHUHGBQDJYBYHWUCAGCXJREMKLBSAWDNOQOBKDMXKUCLQMACXRTHIVJGSAIWWKRZXBPYZQESSVOIMJKAKCBSFMQNNJTUZFJMOYTMUFKWQBHWFRUIPLCEPEVHYPZ");
    msg.value = 0.457510292634;

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
    msg.setTimeStamp(0.207863391382);
    msg.setSource(47766U);
    msg.setSourceEntity(32U);
    msg.setDestination(52954U);
    msg.setDestinationEntity(17U);
    msg.seq = 17733U;
    msg.sys.assign("QKIJKFXRHNLIZYONHXVCVYVRLUUIWASZEIXUAJXQZXYJDUCTXTKQFWJKDPFRLMWZSKUZDVZPPQHLHWEBMCNLLLDJRCBQSMDRMJGKOZROPIVNAIWEKOFEFTQTZOJEIDMPEWLDPFCGTOOBYUJTYFRTRAEPANDHUVJLHGBUGCBFDTXHVAQNBPSMY");
    msg.value = 0.53052308346;

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
    msg.setTimeStamp(0.530822924538);
    msg.setSource(44992U);
    msg.setSourceEntity(134U);
    msg.setDestination(21178U);
    msg.setDestinationEntity(97U);
    msg.seq = 53331U;
    msg.sys.assign("ULEVQBWONIJZDIIKPZLG");
    msg.value = 0.309566783542;

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
    msg.setTimeStamp(0.577262268761);
    msg.setSource(19349U);
    msg.setSourceEntity(103U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.839115666274);
    msg.setSource(33459U);
    msg.setSourceEntity(14U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.172219133584);
    msg.setSource(283U);
    msg.setSourceEntity(146U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.218900262169);
    msg.setSource(30586U);
    msg.setSourceEntity(82U);
    msg.setDestination(25022U);
    msg.setDestinationEntity(168U);
    msg.action = 219U;
    msg.longain = 0.0107553280753;
    msg.latgain = 0.292147994507;
    msg.bondthick = 1257906214U;
    msg.leadgain = 0.546069411329;
    msg.deconflgain = 0.248110766033;

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
    msg.setTimeStamp(0.47152931001);
    msg.setSource(52356U);
    msg.setSourceEntity(51U);
    msg.setDestination(61244U);
    msg.setDestinationEntity(10U);
    msg.action = 175U;
    msg.longain = 0.26191076682;
    msg.latgain = 0.0373533355245;
    msg.bondthick = 4045326585U;
    msg.leadgain = 0.939956415432;
    msg.deconflgain = 0.206094485811;

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
    msg.setTimeStamp(0.329218556161);
    msg.setSource(24679U);
    msg.setSourceEntity(142U);
    msg.setDestination(44906U);
    msg.setDestinationEntity(250U);
    msg.action = 242U;
    msg.longain = 0.616269270557;
    msg.latgain = 0.301750974213;
    msg.bondthick = 2238471017U;
    msg.leadgain = 0.231234429474;
    msg.deconflgain = 0.529267109487;

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
    msg.setTimeStamp(0.905648718246);
    msg.setSource(36972U);
    msg.setSourceEntity(75U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(122U);
    msg.err_mean = 0.801479548126;
    msg.dist_min_abs = 0.452067279077;
    msg.dist_min_mean = 0.746558197644;

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
    msg.setTimeStamp(0.499484279439);
    msg.setSource(60264U);
    msg.setSourceEntity(176U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(132U);
    msg.err_mean = 0.693051184784;
    msg.dist_min_abs = 0.287812827872;
    msg.dist_min_mean = 0.513975749984;

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
    msg.setTimeStamp(0.964104076728);
    msg.setSource(29315U);
    msg.setSourceEntity(210U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.491706826967;
    msg.dist_min_abs = 0.608574973324;
    msg.dist_min_mean = 0.274906121184;

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
    msg.setTimeStamp(0.326868048137);
    msg.setSource(63305U);
    msg.setSourceEntity(189U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(28U);
    msg.uid = 194U;
    msg.frag_number = 232U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {-66, -32, -13, -91, -120, 14, -33, 123, -68, 72, 74, -42, -8, -32, -1, 4, 53, -116, -114, -108, -43, -125, -128, -112, -3, 16, -49, 14, -100, 107, -30, 16, -14, -69, -69, -26, -26, -70, -41, -11, -2, -97, -27, 36, 53, 101, -12, -125, -68, 114, 92, 70, 92, 91, -92, -60, -60, 46, -34, -74, 106, 75, 28, -114, -62, -58, 2, -9, -23, -35, -83, -62, 9, -112, 90, 51, -117, 34, -4, -116, 48, 43, -88, -73, -58, 117, 64, 14, -21, 121, 34, 72, -89, -35, 49, -51, 7, -81, 3, -25, 50, 117, 27, 60, -111, -83, -36, -107, -89, -58, -2, 32, -58, 11, -127, 27, -100, -1, -127, -2, -123, -3, -20, -41, -69, -85, 59, 76, 109, 66, -11, -102, -118, 15, -12, 40, 56, 78, 90};
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
    msg.setTimeStamp(0.589594169697);
    msg.setSource(3639U);
    msg.setSourceEntity(103U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(226U);
    msg.uid = 194U;
    msg.frag_number = 74U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {-68, 34, 16, -106, 22, -87, 3, 46, 106, -90, 103, 30, -97, 3, -66, 24, 116, -115, -46, -39, 124, -72, -2, 107, 95, -120, 96, -5, 0, -35, -64, 97, 61, 58, 56, 68, 83, -121, 30, 75, 59, 87, 102, 59, -124, 21, -98, -49, -123, 116, -36, -117, 101, 1, 11, -3, -6, -66, 113, 121, 69, -19, -14, 44, 81, -94, -65, 22, 114, -122, -54, -98, -41, 33, -99, 33, -122, -43, -46, -89, 18, -52, 93, -83, 126, 13, 58, -41, 24, -2, 118, 126, -91, -36, 71, -113, -80, -109, -83, 115, -79, -66, 77, -23, -96, 91, -21, 93, 88, -3, -113};
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
    msg.setTimeStamp(0.792502356885);
    msg.setSource(26565U);
    msg.setSourceEntity(112U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(171U);
    msg.uid = 11U;
    msg.frag_number = 143U;
    msg.num_frags = 145U;
    const char tmp_msg_0[] = {-93, -95, -67, 124, 69, -32, 18, -68, 117, -104, -85, 43, 72, -8, -37, 52, 27, 103, 112, 121, -16, 82, -120, -40, -36, 116, -23, -47, 113, -1, -118, 46, 88, 81, 99, 98, 99, 109, -98, 90, 117, 117, 112, -36, 118, 5, -20, 122, -42, -63, 35, -19, -66, 71, 109, -116, 47, -69, 8, -21, 1, -108, 85, 15, 91, 22, -8, -50, 120, 61, -63, 10, 120, 98, 5, 81, 39, 108, -121, -86, 25, -16, 66, 45, 25, -6, 98, 57, 76, -68, -2, -41, 49, 39, 98, -63, -95, 44, 63, -113, 7, -11, -114, 122, 12, 110, 2, -29, -51, 63, -93, 30, 60, 42, 109, -87, -45, 72, 51, -27, 85, 68, 99, 76, -113, -50, -78, -57, -113, -66, 99, -112, -11, -120, 81, -86, -34, 34, -33, -12, 13, 24, 13, 29, 35, 33, -72, -83, 123, 93, -100, -60, 110, -81, 122, -99, 38, -11, -43, 1, 52, -76};
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
    msg.setTimeStamp(0.0293640607791);
    msg.setSource(3287U);
    msg.setSourceEntity(35U);
    msg.setDestination(18078U);
    msg.setDestinationEntity(180U);
    msg.content_type.assign("WXKJIWVAVFKNFTZYAIENTICZXNSCMJGAOQUUHOQYRFFLABMGVZJODPPTPENALKAJBOUJHYWFFKELNGSAY");
    const char tmp_msg_0[] = {40, 41, 90, 126, 16, 78, -12, -49, -35, 58, -90, -58, -2, -126, 25, 47, 56, -55, -98, 93, 107, -114, 93, 88, 76, -70, 114, -58, -101, 100, 100, 65, 99, 63, 84, -69, -43, -17, -67, 0, 39, -72, 2, 0, 53, -58, -8, 23, -90, 98, -6, -50, 66, -35, -127, -59, -33, -82, 50, 60, -72, 40, 95, -76, -50, -98, -60, -74, 108, -69, 31, 91, -48, -66, -34, -32, 96, -63, -92, 58, 63, -32, 107, 12, -23, 72, 30, -73, -106, -105, -104, 26, 21, -62, -23, -71, 95, 17, 115, 3, 98, -5, -8, 59, -99, 3, -56, 89, 56, -53, 16};
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
    msg.setTimeStamp(0.493603253202);
    msg.setSource(17191U);
    msg.setSourceEntity(241U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(168U);
    msg.content_type.assign("KLKYDRCRHMHKOYBNUSTXLEMRBMEEFTQCBPOBCVWMACZIXHUYDITBYJNPSQBRAOBHSJLILZMZESDXMUOIWSNJIQQSKQNJRYZLNOIIWGKTMAZJVTZAPKURWVNRUYUBYLAFLJRWB");
    const char tmp_msg_0[] = {-23, -87, -108, 27, 46, 26, 3, 4, 16, -115, -47, 64, -15, -33, 121, -49, -78, -7, -63, -120, -82, 109, -11, -111, -71, 7, -122, -104, 1, -55, 98, -91, -34, -57, -54, 88, 124, 97, 12, 60, -52, 48, -85, -13, 4, -92, 103, 79, 18, 69, 100, 68, -123, -25, -111, 63, 123, -94, -61, 94, -55, 115, -108, 42, 107, -90, 31, -83, 14, 81, -58, 2, -25, -17, -44, 81, 96, -5, -1, -105, 42, -66, 10, 123, 78, -34, 88, 84, 86, 74, 51, -49, 27, 26, -57, 49, -14, -104, 115, -76, 62, 33, 56, -31, -11, 35, 27, -86, -33, -38, 108, -86, 54, 1, -4, 37, -2, 39, -40, -115, 5, 21, -55, 106, 102, 81, 3, 27, -125, 12, -7, 61, -36, 110, 106, -91, 78, 2, -30, 120, -106, 91, 41, 59, -13, -122, -90, 70, -35, 10, -3, 113, 58, 11, 93, -122, 76, -117, -31};
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
    msg.setTimeStamp(0.757614337651);
    msg.setSource(17185U);
    msg.setSourceEntity(41U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(241U);
    msg.content_type.assign("VXMPFOGEKFVOBPYTNHWPTSAAZUWLLBUAJZVKROAJZUVYSLTFNCEPTPZNQWXMMGKRCMEXNLWGTC");
    const char tmp_msg_0[] = {89, -68, 44, -65, -48, 52, -35, -98, 118, 75, -116, -52, -17, 87, 107, -8, 108, 13, 122, -83, -110, -49, -48, -4, 18, -61, 16, 125, 112, -45, 109, 35, -4, -30, -7, 90, 108, 8, -36, -93, -92, -93, -5, 29, -127, -64, 108, 41, 101, 70, 48, 76, 20, 13, 61, 34, -2, -3, 84, -28, 92, 45, 87, -12, 71, 80, -24, 57, 29, 108, 20, 52, -37, -124, -57, 21, -83, 78, -121, -75, 113, -98, -56, -4, 124, -26, 71, 121, 107, 13, 59, -126, -10, 1, -113, -123, 117, -33, 73, 71, 7, -53, 88, 85, -42, -128, 95, 72, -104, 107, 94, -126, 45, -94, 58, 36, 92, -14, -5, -49, 0, 123, -1, 93, 35, -103, 65, 125, 43, 90, 52, -107, -68, -110, -88, 102, 56, 76, -103, 61, 118, 6, -61, 51, 50, -95, 0, -36, 114, -112, 83, -36, -98, -119, -60, 29, -46, -108, 56, 71, 20, -4, -62, -80, -70, -38, 37, -12, 0, 57, -39, -57, -41, -63, -94, -34, 39, 89, -77, 53, -95, 74, -2, -55, 53, 77, -24, -28, 79, -56, 24, -102, 91};
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
    msg.setTimeStamp(0.545279914905);
    msg.setSource(52044U);
    msg.setSourceEntity(230U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.287295080458);
    msg.setSource(52292U);
    msg.setSourceEntity(61U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.177029320203);
    msg.setSource(10536U);
    msg.setSourceEntity(196U);
    msg.setDestination(9396U);
    msg.setDestinationEntity(46U);

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
