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
// IMC XML MD5: 9f058a9a44384ead46ff6f5d948a34c5                            *
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
    msg.setTimeStamp(0.7989297806993289);
    msg.setSource(8257U);
    msg.setSourceEntity(242U);
    msg.setDestination(60746U);
    msg.setDestinationEntity(92U);
    msg.state = 220U;
    msg.flags = 197U;
    msg.description.assign("DXZAKQFXAWMEWMTCNNERKTRUULQKBKAMYGROSZTMLUHYHTITGQAEDZLPXYNRCCTPULXQTAFSNODQUKLFU");

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
    msg.setTimeStamp(0.9298022681722249);
    msg.setSource(11386U);
    msg.setSourceEntity(82U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(151U);
    msg.state = 171U;
    msg.flags = 237U;
    msg.description.assign("INHBAXXLJARDYFWOTEVXLBJPPYZMJGOGVYQPWUABBUZCQWHKSYRVODCRMYBEHFZJURW");

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
    msg.setTimeStamp(0.27001289257451433);
    msg.setSource(20038U);
    msg.setSourceEntity(83U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(48U);
    msg.state = 233U;
    msg.flags = 216U;
    msg.description.assign("EOAPVQOGTEPJRMOQTECZMFZJLCRLDUZVAYNSD");

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
    msg.setTimeStamp(0.5945379738708948);
    msg.setSource(1793U);
    msg.setSourceEntity(216U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.587433763065682);
    msg.setSource(58790U);
    msg.setSourceEntity(3U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.9942676291304132);
    msg.setSource(35526U);
    msg.setSourceEntity(219U);
    msg.setDestination(22192U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.6943301468159468);
    msg.setSource(1082U);
    msg.setSourceEntity(33U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(217U);
    msg.id = 39U;
    msg.label.assign("OTSXDKOKQXOFVDXLEDZSWSEZKERWTUVCPGTYFUBVNFBYOQXVOBBUWAWBYPEHRWSMAGRPLUIKYETHSDXLCMKQVDMELRTUAMZAHRTZVCQGHXHCQOQEUZRFAKACNZCTQOLAKIZEFMYNHPFNXBHMWQJKZBDNXCSB");
    msg.component.assign("LFBIYKTAIYSZHBXYKWXCWRWASXIJF");
    msg.act_time = 46730U;
    msg.deact_time = 34785U;

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
    msg.setTimeStamp(0.40440617643855226);
    msg.setSource(29054U);
    msg.setSourceEntity(165U);
    msg.setDestination(35251U);
    msg.setDestinationEntity(54U);
    msg.id = 44U;
    msg.label.assign("IOHTJGSTBXXDXUEOHHWBNSTBKCJPRRFUECGXHRIYHPIZQIKECFMZEIYMGDJOZJGYAOSRUVDGPEVCKHUCKSVLLGXDBWZJUZFXWDAQIIZCXXMSANOMYYOWFTRHXYRSETVQQFRDWZNODLVFQZORSTLQVWPNBLQKUCPFEVIFKPVWMKEAYTRQWPAJLQBNNBURLCBZDZOCYLOEJGQLA");
    msg.component.assign("JPNARIVGSEPDSTYODANIXIIWGBBDVQESGGURFSXRYSXSLLGFDAOLYVJFDTTNEEHMFONCLLQBTBZXOHPTAQJDRZXWYJHSMZFZXCMKMSRMJFEBUDVHPTPLCRUZCBCHFQJTNJXOVLWZUUGCFBAYOJVZAXOKYDPPELNFLHYNEVHWENLKDGEBKCMFINQ");
    msg.act_time = 48701U;
    msg.deact_time = 4940U;

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
    msg.setTimeStamp(0.17688385506036308);
    msg.setSource(32414U);
    msg.setSourceEntity(58U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(153U);
    msg.id = 81U;
    msg.label.assign("CYGTYLDDHREUUSOHGQFBTYLNWIMLLNZQAPAZOEVKIMARXEOPMJZNKHUEMBVZ");
    msg.component.assign("XDFAVNKFXVCJMEQKXIOHLWGGHEMVFGNSULDRRQVZNBIKVCJZTOQNXADUORPMHZNMEQFREXQBBYYVADBCDHHVSBJAJRLWEWSMKKGEZNHISHRDVDJCHTLPWW");
    msg.act_time = 48160U;
    msg.deact_time = 34091U;

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
    msg.setTimeStamp(0.8297358316334588);
    msg.setSource(35138U);
    msg.setSourceEntity(54U);
    msg.setDestination(57772U);
    msg.setDestinationEntity(120U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.14632861990731172);
    msg.setSource(42871U);
    msg.setSourceEntity(168U);
    msg.setDestination(434U);
    msg.setDestinationEntity(147U);
    msg.id = 216U;

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
    msg.setTimeStamp(0.16929033920124348);
    msg.setSource(56082U);
    msg.setSourceEntity(153U);
    msg.setDestination(14614U);
    msg.setDestinationEntity(109U);
    msg.id = 232U;

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
    msg.setTimeStamp(0.12336913867408272);
    msg.setSource(60966U);
    msg.setSourceEntity(73U);
    msg.setDestination(6236U);
    msg.setDestinationEntity(85U);
    msg.op = 184U;
    msg.list.assign("KGHLLYPRJLTEVTGYBBFLHMGGAYVIMQLVZMYJQGTOUMOZRFUZCXWJOPJPZIHFBDEUNONHBENCUSYDWQIDCCKJDRWMKQSAQJBPLZQUCVPMLCATALRGXDUMYFTZHUTHXYGCRTORIVEGANMFWFEEYXZNZWORBWNBBYSFRAGVSDQJDQPEWDPPAOINFHAXYAHZLESXVOVJQ");

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
    msg.setTimeStamp(0.8677622464848742);
    msg.setSource(21391U);
    msg.setSourceEntity(217U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(83U);
    msg.op = 9U;
    msg.list.assign("JEVOJODCBLHTAIXGSIMVYOXBJMDGYYSOZQIVZWREZKPGMUJERWZNXFQQHOVJULKFAQHRYBKWWMQQZIKWCHCDAFKZ");

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
    msg.setTimeStamp(0.02660324576695683);
    msg.setSource(14470U);
    msg.setSourceEntity(73U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(52U);
    msg.op = 179U;
    msg.list.assign("MDICWVOEUJYXGHLBJNYRUQHNIOGSYFFALPYAHRTNVPTZBLWFQWMKCCDENTMJMXLQIVHKRBHBVZKKWCGXVSGIATMDEQGJZEISCALWFVPMSSBWYSLWUIUWZCRXXJLMQUUUTYAXLNFBZDDILFBDDZB");

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
    msg.setTimeStamp(0.5379973247374931);
    msg.setSource(35733U);
    msg.setSourceEntity(223U);
    msg.setDestination(26760U);
    msg.setDestinationEntity(18U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.9173225176232706);
    msg.setSource(26639U);
    msg.setSourceEntity(189U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(245U);
    msg.value = 104U;

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
    msg.setTimeStamp(0.279348796511644);
    msg.setSource(60923U);
    msg.setSourceEntity(54U);
    msg.setDestination(37072U);
    msg.setDestinationEntity(1U);
    msg.value = 132U;

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
    msg.setTimeStamp(0.6340592907124931);
    msg.setSource(60688U);
    msg.setSourceEntity(234U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(155U);
    msg.consumer.assign("KZXIAYCXRFVPFKUDDALBYTEJEHVSPPGZSOFXXPKRHVMNEELKWCYLAVOYGBFYTJPQGQWRHOYLEUXQKUZLTENTBCITNCBIKFVLGQZFMYSTKDGXRVJSSDDAOZLVJJEWTQOWJHQCRGLIKAOYNXMGMYOCDMYPNDXBHRVBJCKTUWHPMCNIHROADBXSPMNSRNIZIJWZHBU");
    msg.message_id = 28101U;

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
    msg.setTimeStamp(0.6255523861429318);
    msg.setSource(61749U);
    msg.setSourceEntity(235U);
    msg.setDestination(61191U);
    msg.setDestinationEntity(0U);
    msg.consumer.assign("YFGHNKRLNKNAZCFPHMSTBUXGOCFXQZSYGMOADJEYONDSJAASZEEAYJZPTWLUGIZLIWPFOHDEQVANKAHXMAPIBFIXYCORRDEXJSFGNCJSIPIFLSZHDYDXNTWWHIUNTKLQLTMUQOTPBLBXTCVNFFXIWEYOVJKKSVEBUUGZHTOKJTMCVVEDBFIUJIQBWHUEALTWYGCSMKUNDBVLQVRKZORQACWPVRGMOJBYMRLRWME");
    msg.message_id = 43736U;

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
    msg.setTimeStamp(0.9584361950282442);
    msg.setSource(29603U);
    msg.setSourceEntity(88U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("ZPVDBRDQPRSFIKBEIMPYLNPRITRQCUVLZWNKITJEJGEECZFAZJBXTHNRBLEQDMUOTNVLEQOWKX");
    msg.message_id = 27401U;

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
    msg.setTimeStamp(0.9019888065217163);
    msg.setSource(18469U);
    msg.setSourceEntity(67U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(192U);
    msg.type = 206U;

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
    msg.setTimeStamp(0.4489312856223664);
    msg.setSource(55483U);
    msg.setSourceEntity(36U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(119U);
    msg.type = 95U;

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
    msg.setTimeStamp(0.9578846821139336);
    msg.setSource(60488U);
    msg.setSourceEntity(68U);
    msg.setDestination(38261U);
    msg.setDestinationEntity(219U);
    msg.type = 77U;

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
    msg.setTimeStamp(0.6593334259395608);
    msg.setSource(47303U);
    msg.setSourceEntity(251U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(190U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.3936130792026109);
    msg.setSource(40260U);
    msg.setSourceEntity(39U);
    msg.setDestination(21483U);
    msg.setDestinationEntity(118U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.9481307744716841);
    msg.setSource(45315U);
    msg.setSourceEntity(97U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(218U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.9623408945791008);
    msg.setSource(37230U);
    msg.setSourceEntity(74U);
    msg.setDestination(36128U);
    msg.setDestinationEntity(165U);
    msg.total_steps = 248U;
    msg.step_number = 63U;
    msg.step.assign("FSRLRVARHVTKRMJIUQDLPDHWFQHNXSBQQKWPMMUZZHTIYVACSOYFSRFRSKDWNYPXYLRUGUDGQTAXMFKBPGFIWHJZYMCINKEDGWECWFIJHILOBUTCEAKAQGEQCQDFPCYLOOWNIAAJBUSVGMJSUDKXTAOILBVXKNCVBHNOIRXQYEYDLMWXP");
    msg.flags = 39U;

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
    msg.setTimeStamp(0.16675123009626958);
    msg.setSource(42233U);
    msg.setSourceEntity(228U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(188U);
    msg.total_steps = 241U;
    msg.step_number = 160U;
    msg.step.assign("GPSNPBZBIHLLCCJSEBNWSHQDYPJPHIFHQXDBLAGYQWATTRIODDXYEGJWUGYZMFHOTHRNQPUQVWMRWYFTETOC");
    msg.flags = 100U;

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
    msg.setTimeStamp(0.688571947939779);
    msg.setSource(23675U);
    msg.setSourceEntity(114U);
    msg.setDestination(32768U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 52U;
    msg.step_number = 129U;
    msg.step.assign("AHSHQHESGOJHLUZCMHGZFTMZBWIDZKSWSGXKQVUHZIMNRIAOKTCWPTBEXQPNQPJFRWOSQVCWSUGBLHIERXWVLYEN");
    msg.flags = 210U;

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
    msg.setTimeStamp(0.8819457613501213);
    msg.setSource(42791U);
    msg.setSourceEntity(2U);
    msg.setDestination(51760U);
    msg.setDestinationEntity(88U);
    msg.state = 9U;
    msg.error.assign("IDIOHSEVNFHPSPZPTGUSGISOTEQHWWBVMLSJAREFKZIUXAMLOQVXZDCYWSSPLQTAVPTECIBFFDGXOLVNOXEQCDUDGCUAJWJCZNGOMVNFPNKBAYFMQBIKNVHEUCYUHLJKNOXFDDEWCECMELRAZXUWILMWAURYPSLHODYVJABHRKWXZZMBKTDKKRCLRQWPSVYBJYQWFPBTTHMKHXUJJLPAURTZIDBMFJNBVRMROG");

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
    msg.setTimeStamp(0.4568678267400029);
    msg.setSource(46717U);
    msg.setSourceEntity(107U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(143U);
    msg.state = 35U;
    msg.error.assign("WSELXVOAIELOGZINVLVEUZHUDVJZTCQGYAGOTABKOFZPKTSNVSIGAMSECPIXHKNINOMJOWCMHBPYWMNEFFXEO");

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
    msg.setTimeStamp(0.899695895200904);
    msg.setSource(12182U);
    msg.setSourceEntity(195U);
    msg.setDestination(58301U);
    msg.setDestinationEntity(210U);
    msg.state = 251U;
    msg.error.assign("WOIPHGDKCYBEIPEFINLRFEAFBWVQXRDVQKUEZWAVYYGOLXJRMHSKXYTGWNBGAILKQWXBHBTEFREDADUSLNJLQGBDNYJBOGRCZGFNRUDXOHPBDBDNUEIKSUAXSCMDGHHUORCPZFKZTUSZAQRWXUDOQOPRPASTZLSYXINMJISIYJBZOI");

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
    msg.setTimeStamp(0.9800695437887724);
    msg.setSource(52354U);
    msg.setSourceEntity(140U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.6323156817310227);
    msg.setSource(57598U);
    msg.setSourceEntity(62U);
    msg.setDestination(8805U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.42295824021301864);
    msg.setSource(12336U);
    msg.setSourceEntity(49U);
    msg.setDestination(24745U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.9414173073034882);
    msg.setSource(51829U);
    msg.setSourceEntity(161U);
    msg.setDestination(60525U);
    msg.setDestinationEntity(10U);
    msg.op = 29U;
    msg.speed_min = 0.617053925364839;
    msg.speed_max = 0.6739338906178546;
    msg.long_accel = 0.3391545195135932;
    msg.alt_max_msl = 0.72580551925023;
    msg.dive_fraction_max = 0.8457687969849973;
    msg.climb_fraction_max = 0.5837196611499288;
    msg.bank_max = 0.5173057238574693;
    msg.p_max = 0.3828105658166735;
    msg.pitch_min = 0.5188500534933992;
    msg.pitch_max = 0.2675419298609749;
    msg.q_max = 0.6165216978997038;
    msg.g_min = 0.7788393500367569;
    msg.g_max = 0.8307864221198235;
    msg.g_lat_max = 0.10921309082506259;
    msg.rpm_min = 0.8508334976003082;
    msg.rpm_max = 0.28930127253306726;
    msg.rpm_rate_max = 0.2639783754216971;

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
    msg.setTimeStamp(0.35030186776756755);
    msg.setSource(58233U);
    msg.setSourceEntity(115U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(204U);
    msg.op = 75U;
    msg.speed_min = 0.19844248937536046;
    msg.speed_max = 0.1581774663773361;
    msg.long_accel = 0.7480408639232022;
    msg.alt_max_msl = 0.7075673735271422;
    msg.dive_fraction_max = 0.7393040161907088;
    msg.climb_fraction_max = 0.07358493705053659;
    msg.bank_max = 0.8066102546029252;
    msg.p_max = 0.7618193260616888;
    msg.pitch_min = 0.8444265767714239;
    msg.pitch_max = 0.04031404933629534;
    msg.q_max = 0.7361403181164539;
    msg.g_min = 0.6120710408573973;
    msg.g_max = 0.7186764526092817;
    msg.g_lat_max = 0.6282281744402546;
    msg.rpm_min = 0.7230241544047701;
    msg.rpm_max = 0.999806055235247;
    msg.rpm_rate_max = 0.951135593533335;

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
    msg.setTimeStamp(0.6607509407327311);
    msg.setSource(23924U);
    msg.setSourceEntity(199U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(46U);
    msg.op = 250U;
    msg.speed_min = 0.2653534931599655;
    msg.speed_max = 0.3788841688379164;
    msg.long_accel = 0.03904065270697321;
    msg.alt_max_msl = 0.720325780896057;
    msg.dive_fraction_max = 0.23905679431169602;
    msg.climb_fraction_max = 0.5768911711716712;
    msg.bank_max = 0.7070858360509165;
    msg.p_max = 0.6327423275431674;
    msg.pitch_min = 0.5967240109932028;
    msg.pitch_max = 0.21801977998906952;
    msg.q_max = 0.6697685423201964;
    msg.g_min = 0.7780620685403664;
    msg.g_max = 0.7284395750486031;
    msg.g_lat_max = 0.1860462698168205;
    msg.rpm_min = 0.4451988887412628;
    msg.rpm_max = 0.19243504825979074;
    msg.rpm_rate_max = 0.2956560677179477;

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
    msg.setTimeStamp(0.37369945975962626);
    msg.setSource(38652U);
    msg.setSourceEntity(246U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.4975403642084534);
    msg.setSource(42136U);
    msg.setSourceEntity(70U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.7178699288948195);
    msg.setSource(50172U);
    msg.setSourceEntity(55U);
    msg.setDestination(52441U);
    msg.setDestinationEntity(115U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("BOJXBSNCLTPGNEESQOHADHVVZYXRFLYWLFTIGLZQOWUGRKDFIMYBNKPBVALVDKUCVDQUAZRPISVFEOYJ");
    tmp_msg_0.plan_size = 34243U;
    tmp_msg_0.change_time = 0.09304662409777653;
    tmp_msg_0.change_sid = 45883U;
    tmp_msg_0.change_sname.assign("XYEOZDGXMEEBFECEAPSGZAHQLYHPGJCCMTTNQBULSXUFDNTEEZUEKVSKKZRGOKCBLBACVJXIXFNDUQNIXTOJQWOHDRKWWZHSEMTAWKWVLMDAVNBDFTCTAUFVUJGPNFYPXHFILIBUHQQSQWARRRDTOOMQMOYGMWPFOATSJQONVDRMDZBWKG");
    const char tmp_tmp_msg_0_0[] = {-103, 13, -114, 88, 39, 84, 122, -92, -29, 67, 39, -9, -38, 71, 23, -66, 113, -14, -59, -76, 7, -37, -102, 27, -48, -76, 64, 63, -42, 103, 85, -24, -55, -43, -57, -104, -67, -7, -85, -46, -7, 29, -50, -65, 103, -43, 60, -20, 58, -62, -55, -79, 90, 107, 56, 39, -82};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.024259693732912924);
    msg.setSource(30300U);
    msg.setSourceEntity(3U);
    msg.setDestination(14125U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.02818586269093215;
    msg.lon = 0.415024121889325;
    msg.height = 0.5691973968273675;
    msg.x = 0.06353646074139285;
    msg.y = 0.053542527945476204;
    msg.z = 0.6227145272745946;
    msg.phi = 0.47414868901659535;
    msg.theta = 0.06997682554513218;
    msg.psi = 0.8683873104000347;
    msg.u = 0.6891700122894797;
    msg.v = 0.652488132648472;
    msg.w = 0.611944093569656;
    msg.p = 0.43680994728566525;
    msg.q = 0.04997097060421207;
    msg.r = 0.9549887713934979;
    msg.svx = 0.25504066093379685;
    msg.svy = 0.7481085119178872;
    msg.svz = 0.10702030630269721;

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
    msg.setTimeStamp(0.5837194550616812);
    msg.setSource(57339U);
    msg.setSourceEntity(67U);
    msg.setDestination(18604U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.3184082180077594;
    msg.lon = 0.388010423968735;
    msg.height = 0.22346927079712853;
    msg.x = 0.2935492430656419;
    msg.y = 0.5977851448320463;
    msg.z = 0.9675215801563984;
    msg.phi = 0.2598843284323019;
    msg.theta = 0.8357745211436338;
    msg.psi = 0.4608419137848403;
    msg.u = 0.19871248989505874;
    msg.v = 0.9477355478251586;
    msg.w = 0.10866190383838015;
    msg.p = 0.6353529654491846;
    msg.q = 0.6536531951498561;
    msg.r = 0.02480842899909652;
    msg.svx = 0.9292162215238887;
    msg.svy = 0.4133509315262709;
    msg.svz = 0.31344072921811994;

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
    msg.setTimeStamp(0.6435083650421454);
    msg.setSource(60749U);
    msg.setSourceEntity(186U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.3423031836215036;
    msg.lon = 0.0026900176658415376;
    msg.height = 0.33662652650332003;
    msg.x = 0.07511624284064722;
    msg.y = 0.38852062407234833;
    msg.z = 0.06232932369797284;
    msg.phi = 0.8690924350164421;
    msg.theta = 0.8776921661669027;
    msg.psi = 0.2610046102201682;
    msg.u = 0.3525492620549323;
    msg.v = 0.14016806503713675;
    msg.w = 0.9406931420491135;
    msg.p = 0.25002037553706435;
    msg.q = 0.6427743263934034;
    msg.r = 0.8217963893001101;
    msg.svx = 0.4686223377368145;
    msg.svy = 0.6974613379508993;
    msg.svz = 0.22342292673396646;

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
    msg.setTimeStamp(0.8102057052476282);
    msg.setSource(16710U);
    msg.setSourceEntity(156U);
    msg.setDestination(62679U);
    msg.setDestinationEntity(101U);
    msg.op = 190U;
    msg.entities.assign("REOWBPTXOITGDROHKRKEKVMYKHKHSBGAIUYJTLOQVCEJZTSMNMERXDQHPWPYFQVKHTHENNEZUXGILHUGWJNWMZZXELEDAZBMXRWFNZTBWKOCITSFCQSHZVPIUBIBSMDCTLQEJJPOQUYPSNOLZFLSRMVRWJOGUYGWMAULJRUDITNQVCXXGOIASAGAFUZJDEBIKCQDBLWSCKNLSDDFWFGMYIRYQLPRCXADCA");

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
    msg.setTimeStamp(0.7645803726247404);
    msg.setSource(16706U);
    msg.setSourceEntity(157U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(222U);
    msg.op = 58U;
    msg.entities.assign("HJEHWSPLQVYZXBAMFHWHLIBMVZQSXRXTJDAVELENLONPAMGFDTONWJIWWFDNBWHTMOYJXDOAXVGEN");

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
    msg.setTimeStamp(0.008139591963312376);
    msg.setSource(1667U);
    msg.setSourceEntity(45U);
    msg.setDestination(46176U);
    msg.setDestinationEntity(53U);
    msg.op = 104U;
    msg.entities.assign("DMVBPMISILWYAQCFLTIUWXEDOVHIDQVMPMQFVLKXTAJTHAHYBUATQEHXQCFCEXKKZFDYZLDRSHXTKMFHBVLYZIGUUPW");

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
    msg.setTimeStamp(0.014402487461448454);
    msg.setSource(43089U);
    msg.setSourceEntity(143U);
    msg.setDestination(997U);
    msg.setDestinationEntity(139U);
    msg.type = 24U;
    msg.speed = 40256U;
    const char tmp_msg_0[] = {-115, -61, -28, 67, -54, -107, 66, -127, 29, 95, 114, -81, -49, -73, -88, -19, -75, 65, -88, -104, -57, 33, -12, -57, -69, -78, 22, 32, 19, 10, -50, -63, 76, 29, -122, 102, 5, -117, 123, 56, -70, -98, -31, -104, -48, -76, 67, -122, 75, -100, 57, -43, 19, 96, -22, -106, 117, -113, 45, -72, -98, -18, -80, 42, -81, -52, 120, 70, -87, 73, 19, 12, 62, 1, 88, -80, 35, -96, 21, -42, -31, 118, 92, 62, -63, 31, 116, 60, -80, -116, 67, 126, 60, -23, -83, -126, -116, -112, 117, -90, -30, 27, 31, 25, -115, -21, -76, -49, 29, -128, -22, -63, -48, -83, -28, 86, -125, 103, -17, -26, 77, 25, -12, 73, -21, 18, 88, -127, 27, -88, -53, 73, -94, -116, -20, -12, 116, 20, 37, 10, 90, -11, 114, 82, 70, -115, 62, -128, -68, -69, 32, 24, 69, 47, -43, -120, -13, -27, 12, 109, -126, -89, -23, -57, -93, 50, 122, -44, 125, 52, 86, 20, -63, -24, 72, -38, 72, 49, 83, -1, -95, -103, 62, 10, -91, 29, 6, 5, -46, 11, -11, 56, 91, -110, -103};
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
    msg.setTimeStamp(0.9491002924524954);
    msg.setSource(10666U);
    msg.setSourceEntity(247U);
    msg.setDestination(10680U);
    msg.setDestinationEntity(86U);
    msg.type = 66U;
    msg.speed = 32086U;
    const char tmp_msg_0[] = {-118, -45, 35, -87, 9, -77, -86, 126, -18, -95, 110, -50, 77, 73, -116, -31, -64, -98, -61, 24, 118, 63, 70, 123, -85, -23, 81, 22, 94, -118, 56, -52, -3, -120, 38, -78, -117, 15, -17, -31, -80, -30, 32};
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
    msg.setTimeStamp(0.6092615522819673);
    msg.setSource(7668U);
    msg.setSourceEntity(187U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(180U);
    msg.type = 226U;
    msg.speed = 54435U;
    const char tmp_msg_0[] = {-102, 15, 117, -74, -28, -27, 102, 45, 84, 1, -17, -4, 63, -2, 110, 30, -111, -45, 6, 27, 38, -128, 71, 20, -65, -115, 37, -52, -46, 119, -25, 117, -87, -126, 12, -72, 102, -71, 73, 56, -70, 42, 126, -9, -40, -121, 68, 109, 125, 70, -94, -1, -6, 82, 5, 97, -9, -120, -125, -50, -64, -9, 39, 98, -25, 59, 109, 116, 105, -54, -114, -114, 119, 123, 124, 84, -44, 96, 95, -35, -18, 7, -14, 58, -36, -59, 7, -65, -83, 109, -52, -117, 105, 88, -36, -1, 43, 25, 73, 8, -23, -59, 107, 69, -91, 110, -58, 65, 42, 30, 47, -17, 72, 75, -92, 90, -122, 97, -117, -50, -86, 56, -61, 90, -96, -34, 75, 43, 46, -11, -45, -87, 89, 76, -117, 53, 64, -30, -20, 55, -10, -111, -128, 35, 36, -79, 61, -84, 56, -68, 9, 44, -8, 65, 99, -53, -77, 29, -97, 58, 103, 65, 67};
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
    msg.setTimeStamp(0.4144264839838513);
    msg.setSource(55317U);
    msg.setSourceEntity(189U);
    msg.setDestination(12559U);
    msg.setDestinationEntity(57U);
    msg.op = 35U;
    msg.tas2acc_pgain = 0.5520834215794853;
    msg.bank2p_pgain = 0.7512202436345053;

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
    msg.setTimeStamp(0.1411597318835589);
    msg.setSource(36370U);
    msg.setSourceEntity(198U);
    msg.setDestination(23319U);
    msg.setDestinationEntity(250U);
    msg.op = 72U;
    msg.tas2acc_pgain = 0.10385788549360964;
    msg.bank2p_pgain = 0.8040405899405489;

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
    msg.setTimeStamp(0.4613948386967296);
    msg.setSource(38713U);
    msg.setSourceEntity(51U);
    msg.setDestination(48194U);
    msg.setDestinationEntity(88U);
    msg.op = 197U;
    msg.tas2acc_pgain = 0.8490322427273689;
    msg.bank2p_pgain = 0.33241746925752724;

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
    msg.setTimeStamp(0.28380991486067964);
    msg.setSource(33494U);
    msg.setSourceEntity(104U);
    msg.setDestination(46065U);
    msg.setDestinationEntity(72U);
    msg.available = 2404199245U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.6619356422390928);
    msg.setSource(35084U);
    msg.setSourceEntity(205U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(71U);
    msg.available = 1613374725U;
    msg.value = 9U;

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
    msg.setTimeStamp(0.25226988147884766);
    msg.setSource(54098U);
    msg.setSourceEntity(115U);
    msg.setDestination(58865U);
    msg.setDestinationEntity(153U);
    msg.available = 3076376627U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.6639765038932282);
    msg.setSource(16308U);
    msg.setSourceEntity(184U);
    msg.setDestination(59020U);
    msg.setDestinationEntity(229U);
    msg.op = 89U;
    msg.snapshot.assign("KPMLDEXTEVYRTYJMHHQCXKBRXFOKUSCLLBZYGSDJICEGPXC");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.7465134927525509;
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
    msg.setTimeStamp(0.6729277006897308);
    msg.setSource(3535U);
    msg.setSourceEntity(189U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(160U);
    msg.op = 209U;
    msg.snapshot.assign("UDWZOAQFYKYUSBJFJXKFEBOZBTLWXMKEVFKSUCUOURIVGKCOBMHVMGPETKZGYRIINJHDUBRTDNXPGQBJPHLKIQIXSGHJXRYCBASJAATLKNWMEENVSLDTCCGRVCHWOZOYJYRSVKDIRLLRJZCMAQMEYICGPVQBGZGBDRQJHLAXWXKYOPZPFWHQEIFMEUVLDXTNLVNNLOTZDSANITQHSCWZP");
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.5765637259259554;
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
    msg.setTimeStamp(0.7735240475659072);
    msg.setSource(58722U);
    msg.setSourceEntity(125U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(108U);
    msg.op = 58U;
    msg.snapshot.assign("SCLDGZJYXXIJGOBPMUIQLYI");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.7589974309257997;
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
    msg.setTimeStamp(0.9364225231855428);
    msg.setSource(19257U);
    msg.setSourceEntity(141U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(56U);
    msg.op = 173U;
    msg.name.assign("AKKIIGWLCIWULCAFSHKJONCYWPSGBPOJKZBGNNBIEXW");

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
    msg.setTimeStamp(0.8297445210351941);
    msg.setSource(40321U);
    msg.setSourceEntity(16U);
    msg.setDestination(1351U);
    msg.setDestinationEntity(145U);
    msg.op = 49U;
    msg.name.assign("POKOTWHMQDNJJOHUNPULSXJCNIMSJVIYUACZNLGDJIHIWVBZVVZYWXGAYTZFLSUETCHBYAUFSFZWMGFRXKWEENCQDYQVSLOIPFBUDCDTVOLFBGXTXGRNNAGOKHYCYYCIWMELJHABGCRHZKIBDBABMRPMVWKNDJDBOMZSHMRTJRTAFXKTOPKQEFYWOXEQUDIEWSSQPGAPRUKQBZKRXPCSUZIQVR");

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
    msg.setTimeStamp(0.30905221663054105);
    msg.setSource(52672U);
    msg.setSourceEntity(197U);
    msg.setDestination(10856U);
    msg.setDestinationEntity(121U);
    msg.op = 238U;
    msg.name.assign("GWPRNCAUAPNMHFHPPAGJDYMTRTKSJPACNXRFYVZSJHAAVFLIDKWTZDTQIYXLQJIRMVUSEEEAHIVQLKWWIKCDJTOPCOEZPBIBLYABVUSWYJFYCMECHQDCRLTMISXLMLDFKZTJZHZLDNAWLEQQOXBGUXXOLVHOKKKTNTNWIYGOUHENWRBZSXGFBRGQQB");

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
    msg.setTimeStamp(0.9525655293136799);
    msg.setSource(6500U);
    msg.setSourceEntity(134U);
    msg.setDestination(24722U);
    msg.setDestinationEntity(25U);
    msg.type = 76U;
    msg.htime = 0.33615254450105236;
    msg.context.assign("FNEEWQLIUGGHOHVFZRZSNHSVMQEBVMSXUKMYCSAJMFDCQSBCMESRLHYIRMHMUXZKABWRZFN");
    msg.text.assign("NAEUUDFUWJDVANYNUAZWVMUTZROLWGLAMSOGYGVLSPDDVSIVPIFZRZQZGHILHDIQTSKCGCTBWNOJAUTWRNPBCYUQJEZRA");

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
    msg.setTimeStamp(0.8164543010676755);
    msg.setSource(54956U);
    msg.setSourceEntity(196U);
    msg.setDestination(42099U);
    msg.setDestinationEntity(69U);
    msg.type = 34U;
    msg.htime = 0.5467945223784607;
    msg.context.assign("EEVEAHWTJNBZEDYUANVRTWZBTNGNMSMTMYQ");
    msg.text.assign("AYTOCTXGJTMGKTQGDZZRVKLVWBJMIIPUUCGFBXSLPDQFSOUZEYIUFYNCBEKAMAOWVDPPKNENAMJV");

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
    msg.setTimeStamp(0.5479973966626832);
    msg.setSource(17175U);
    msg.setSourceEntity(27U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(144U);
    msg.type = 88U;
    msg.htime = 0.6283781776185171;
    msg.context.assign("JCQCOWMVDFOLJYLJXXWUQPSOUIHXDMDDLHBRFPRRAUKHHQKWNTKNDFGOBVNUNOLGQARBYDJGCJJSAPZAJMYOWNKTUCZNGWBLEPWHECUZYABVSMHGBLFZLIPIBYSOKPUQQCVMNCXEGZSGTHSMIVDJEUAXXXYXXJKACFIMQHIZQSWGMLFFIVTDWKWDCTTRZF");
    msg.text.assign("OMHTTJKYKEVLBVFCPLVTJVGUKJGVYZS");

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
    msg.setTimeStamp(0.936982642329627);
    msg.setSource(34526U);
    msg.setSourceEntity(176U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(183U);
    msg.command = 104U;
    msg.htime = 0.4637330954012645;

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
    msg.setTimeStamp(0.2947517643023235);
    msg.setSource(53009U);
    msg.setSourceEntity(124U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(39U);
    msg.command = 38U;
    msg.htime = 0.2695331169185954;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 211U;
    tmp_msg_0.htime = 0.2592151579533978;
    tmp_msg_0.context.assign("LBZLMMYCPWKTVLGHPLOGLBZUXMGOCDIVNBLUWJDNNVSAIBFVSEPKVEAMKTNOZUFXASDVGEQHCKYJURMVGRUOXFCLOSEYPKHJLWJYSYCDMTZCAWFEBTUWKKQLHWHYZAJDCJJBOHPGYNZIOXZETEARUISGBTQIHRFGVOWTDQBTRJAQCEWTQFXDZKEMDPAMKPXCSSQRSZLQIVIIMUGHRRSPRNIFGNU");
    tmp_msg_0.text.assign("DJIEKDFUIVNDOXUARUTYKOCBMGPHEZTZFBK");
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
    msg.setTimeStamp(0.25729289137112854);
    msg.setSource(38477U);
    msg.setSourceEntity(173U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(208U);
    msg.command = 67U;
    msg.htime = 0.8329910792043362;

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
    msg.setTimeStamp(0.4561607058203422);
    msg.setSource(64910U);
    msg.setSourceEntity(37U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(142U);
    msg.op = 226U;
    msg.file.assign("WLXVXLMOFHWJRYAFQJHPUCPICJSTNDITMWBGBNXDFEIXWARLCQM");

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
    msg.setTimeStamp(0.3907381967090233);
    msg.setSource(47951U);
    msg.setSourceEntity(241U);
    msg.setDestination(28391U);
    msg.setDestinationEntity(39U);
    msg.op = 96U;
    msg.file.assign("OROPHTUEXYLOMXLWRQLFZYOFBRLWSGFIDQAKFVYCSYYSCEDXBFZQMRCSVFVQCWWVVQJRLKBTWZOCIIHWWMYZNJIJAAMIQXPJAPNHVKCHENBGHIQZOFMQCOTYKNZISNQDOUNGEXJSZAUBRBJLNBVPKGHFXVPCTBDEKZVJEKBTHRTNTVOSWKUYRPE");

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
    msg.setTimeStamp(0.8525837392126887);
    msg.setSource(63714U);
    msg.setSourceEntity(205U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(36U);
    msg.op = 72U;
    msg.file.assign("MKJOGVFWMWDIBKJEESACGETNKVXSJZSNXPAGMUERMHWASGUOSDOOWTLLJEIXWEPNROBRWMCANHRNDEYFHEGXKHBCPKYFNQOPDTRCVBWUXSLVOYPUIRSERWFQIBTUZRBADXIDHIUVQFLNXAZCAVKUZF");

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
    msg.setTimeStamp(0.20520410471212325);
    msg.setSource(28948U);
    msg.setSourceEntity(122U);
    msg.setDestination(46920U);
    msg.setDestinationEntity(233U);
    msg.op = 18U;
    msg.clock = 0.45146683036388846;
    msg.tz = 86;

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
    msg.setTimeStamp(0.828421241547724);
    msg.setSource(1076U);
    msg.setSourceEntity(240U);
    msg.setDestination(41989U);
    msg.setDestinationEntity(25U);
    msg.op = 32U;
    msg.clock = 0.11842301192780702;
    msg.tz = 52;

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
    msg.setTimeStamp(0.1736324684748568);
    msg.setSource(13318U);
    msg.setSourceEntity(22U);
    msg.setDestination(27107U);
    msg.setDestinationEntity(212U);
    msg.op = 56U;
    msg.clock = 0.11146765329024644;
    msg.tz = -110;

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
    msg.setTimeStamp(0.08354519201754451);
    msg.setSource(12615U);
    msg.setSourceEntity(136U);
    msg.setDestination(48869U);
    msg.setDestinationEntity(233U);
    msg.conductivity = 0.1253135329746481;
    msg.temperature = 0.6999337813757261;
    msg.depth = 0.1355978594202425;

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
    msg.setTimeStamp(0.30817894981386607);
    msg.setSource(6899U);
    msg.setSourceEntity(145U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(105U);
    msg.conductivity = 0.5547906084409024;
    msg.temperature = 0.11195429334316587;
    msg.depth = 0.5022994153914644;

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
    msg.setTimeStamp(0.971662529757317);
    msg.setSource(49931U);
    msg.setSourceEntity(190U);
    msg.setDestination(24544U);
    msg.setDestinationEntity(209U);
    msg.conductivity = 0.2958291277534949;
    msg.temperature = 0.26415875029472147;
    msg.depth = 0.22350785609852397;

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
    msg.setTimeStamp(0.7830253825078416);
    msg.setSource(55150U);
    msg.setSourceEntity(229U);
    msg.setDestination(62250U);
    msg.setDestinationEntity(30U);
    msg.altitude = 0.1141473950819275;
    msg.roll = 19479U;
    msg.pitch = 12127U;
    msg.yaw = 397U;
    msg.speed = -4458;

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
    msg.setTimeStamp(0.1073739112776636);
    msg.setSource(25523U);
    msg.setSourceEntity(143U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.8391322119073865;
    msg.roll = 14713U;
    msg.pitch = 34317U;
    msg.yaw = 64437U;
    msg.speed = 30965;

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
    msg.setTimeStamp(0.3800645185717938);
    msg.setSource(35058U);
    msg.setSourceEntity(22U);
    msg.setDestination(48712U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.38820494497290214;
    msg.roll = 8531U;
    msg.pitch = 5162U;
    msg.yaw = 8358U;
    msg.speed = -16786;

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
    msg.setTimeStamp(0.8151104235721105);
    msg.setSource(62511U);
    msg.setSourceEntity(202U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.29026718944319385;
    msg.width = 0.49902300602952365;
    msg.length = 0.6522922616826058;
    msg.bearing = 0.9290067249324941;
    msg.pxl = -5427;
    msg.encoding = 202U;
    const char tmp_msg_0[] = {-48, 31, -126, 8, -57, 95, -52, 64, 105, -112, 12, 24, 99, 38, 85, 8, -95, 57, -96, -83, 121, -15, 103, 16, -49, -112, -25, -78, 124, -74, 102, 125, -42, 121, -90, 123, -98, -94, -118, -17, -52, -41, 123, 79, -10, 5, -60, -109, -38, -7, 72, 112, -113, -93, -119, 125};
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
    msg.setTimeStamp(0.29670890949958006);
    msg.setSource(6253U);
    msg.setSourceEntity(42U);
    msg.setDestination(55293U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.6424618633778792;
    msg.width = 0.6664671307888131;
    msg.length = 0.1429616271506876;
    msg.bearing = 0.08658065187337216;
    msg.pxl = 22576;
    msg.encoding = 231U;
    const char tmp_msg_0[] = {-35, -114, -51, -98, -3, 98, 76, -102, 91, 92, -79, -109, -2, -87, 47, -24, -52, 124, -127, 40, -95, -10, -42, 22, -36, 55, 41, -67, 106, 81, 47, 104, -20, -62, -55, -88, 48, 28, 102, 11, 71, 20, 74, -74, 10, 33, 108, 34, 91, -92, -1, 2, 14, -66, 105, 38, -93, -84, 59, -9, 1, 47, -34, 96, 106, -106, -116, -55, 90, -84, -51, 34, 70, 119, 83, 62, -99, -116, -95, -97, 120, -76, 27, 31, 46, 51, -13, 20, -99, 18, 30, -80, 102, 94, -103, 35, 3, 29, -19, -42, -13, 124, 80, 62, -44, 75, 21, 97, 120, -89, -13, -104, -119, 68, 93, 47, -59, -67, -79, -70, 57, 42, -102, 60, 89, 33, -128, -7, -120, 110, 83, -111, 65, 35, 31, 111, 44, 53, 8, 83, 105, -73, -70, 76, -55, 72, -110, -100, -121, -31, 78, -67, -109, 63, -11, -25, -99, 36, -11, -49, 117, -101, 45, -40};
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
    msg.setTimeStamp(0.25311014769684603);
    msg.setSource(19353U);
    msg.setSourceEntity(103U);
    msg.setDestination(39996U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.5811322419615677;
    msg.width = 0.9653734168228524;
    msg.length = 0.22390026640383387;
    msg.bearing = 0.10283832623884193;
    msg.pxl = 30549;
    msg.encoding = 67U;
    const char tmp_msg_0[] = {119, -97, -122, 12, 103, 56, 97, 83, 82, -97, 75, -123, -20, 120, 32, 34, -5, 122, 54, 37, 56, -120, 86, 109, 16, 122, -24, -8, 60, 105, -40, -108, -90, 58, -56, -45, 76, -94, 71, -19, -57, 12, 83, -105, 109, 36, 109, 117, -69, -67, 113, 92, -125, 49, 125, -128, 14, 59, -127, 123, -96, 89, 17, -26, 49, -125, -75, -123, -48, -121, -24, -102, -29, 117, -65, 59, 125, 49, 21, 104, -89, -79, -27, 32, -125, 45, 36, 80, 81, -64, -57, 48, -57, -52, -81, -25, -28, -60, -81, 29, -82, -44, 62, 122, 104, 95, 108, 108, 71, -117, 24, -122, -14, 113, 79, 101, 28, 102, -41, -57, -21, -21, 14, 104, 25, 56, -92, -26, -37, -41, -113};
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
    msg.setTimeStamp(0.973798703797728);
    msg.setSource(28856U);
    msg.setSourceEntity(175U);
    msg.setDestination(24419U);
    msg.setDestinationEntity(20U);
    msg.text.assign("NWZUTDRWEGYWZLHCYWXBPNFVMTRJFQPHVFWKDCPRNRAIINQTXERWDPQVM");
    msg.type = 226U;

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
    msg.setTimeStamp(0.9681811210902107);
    msg.setSource(16343U);
    msg.setSourceEntity(66U);
    msg.setDestination(21487U);
    msg.setDestinationEntity(50U);
    msg.text.assign("QANIWOFKSTYRREZWYUMGOFMYXEUJVNICHFI");
    msg.type = 166U;

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
    msg.setTimeStamp(0.18317806321979235);
    msg.setSource(60775U);
    msg.setSourceEntity(48U);
    msg.setDestination(4207U);
    msg.setDestinationEntity(123U);
    msg.text.assign("VDLGPMCJIJPBKZFSYGDTSREDSKPUVLLRMOHFRWSBBDLWTYOCGUVKCLKPRHQITLZQXQZD");
    msg.type = 27U;

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
    msg.setTimeStamp(0.38485043250884354);
    msg.setSource(2286U);
    msg.setSourceEntity(180U);
    msg.setDestination(62615U);
    msg.setDestinationEntity(70U);
    msg.parameter = 36U;
    msg.numsamples = 94U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52098U;
    tmp_msg_0.avg = 0.8684204303717816;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.00979298204485779;
    msg.lon = 0.8150001942837332;

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
    msg.setTimeStamp(0.05204849845165649);
    msg.setSource(57790U);
    msg.setSourceEntity(38U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(140U);
    msg.parameter = 150U;
    msg.numsamples = 120U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 46556U;
    tmp_msg_0.avg = 0.6622753953318113;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3687537523641107;
    msg.lon = 0.08355361000133577;

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
    msg.setTimeStamp(0.9951002612936316);
    msg.setSource(23677U);
    msg.setSourceEntity(126U);
    msg.setDestination(16759U);
    msg.setDestinationEntity(46U);
    msg.parameter = 192U;
    msg.numsamples = 201U;
    msg.lat = 0.8790100187437803;
    msg.lon = 0.6975243218034292;

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
    msg.setTimeStamp(0.5427999668024908);
    msg.setSource(57286U);
    msg.setSourceEntity(180U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(242U);
    msg.depth = 32901U;
    msg.avg = 0.4731106436463681;

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
    msg.setTimeStamp(0.097922552944113);
    msg.setSource(36220U);
    msg.setSourceEntity(23U);
    msg.setDestination(19953U);
    msg.setDestinationEntity(54U);
    msg.depth = 34391U;
    msg.avg = 0.8178438184896608;

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
    msg.setTimeStamp(0.07151969968978689);
    msg.setSource(59774U);
    msg.setSourceEntity(123U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(44U);
    msg.depth = 33091U;
    msg.avg = 0.7195555851590469;

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
    msg.setTimeStamp(0.20385453013564914);
    msg.setSource(9768U);
    msg.setSourceEntity(232U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7300183540237621);
    msg.setSource(57306U);
    msg.setSourceEntity(239U);
    msg.setDestination(16523U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.3905911907126789);
    msg.setSource(50812U);
    msg.setSourceEntity(196U);
    msg.setDestination(42902U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.9709738688986372);
    msg.setSource(2540U);
    msg.setSourceEntity(106U);
    msg.setDestination(4251U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("CWNDRSTRQAQPWACGQXEBMFWVOGAHSVBIKIYEGRDWKPOIXGOFLHEZTHOBJDQPNNKTTBGUSXYOBLGNZJWELQOSVQKYOBTNEGLVCUYPHDEFRTFHJISHGBGDCWOLAOSMXTMBMDFASZNULNDEUYQKPMOVUIIRYIXCZFFCPTXPWPZRGBVZAUVMHDALMNMKRFIXVWZFCJKVJJEMKXWRPAZQLSNBNYARAJCZJDWMJIHCLUKPRFEZJET");
    msg.sys_type = 215U;
    msg.owner = 44829U;
    msg.lat = 0.9717937532202795;
    msg.lon = 0.8887158295326155;
    msg.height = 0.26599572261906446;
    msg.services.assign("LJUSTVIWLFERLNXYLMFDZFYVCYEXGXTJOHFGMGFPXIQOTOHABQXNNWQDHDUZCHKLTRDPFTVWKURHQTSYPMAVRRKUUCIDWRCGPHYGSZSZOWSNIUNMHABVJKNCBJAZOTLKTOZPGLESTIEWVAOUZNYIVPCBSOIXYMLDZWADYALUPMESFQJBJKNCSZEYOBPFUWGIIJTQXDWJNMKVQKMVNERBPRERRGVABHXQQFEHGLOXFAMZBKABS");

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
    msg.setTimeStamp(0.6189067720471159);
    msg.setSource(45625U);
    msg.setSourceEntity(14U);
    msg.setDestination(1754U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("KTJCFEOPSLZWCTWROUHQOMPZNSGJATDRIWBKVPWZOAEXHGFXSBFFMDAHXGVSEVIJMLQUAKYUSOXTWJWQMTCQTILQLUU");
    msg.sys_type = 239U;
    msg.owner = 40052U;
    msg.lat = 0.0825274935832947;
    msg.lon = 0.4716236325939678;
    msg.height = 0.2420214810925011;
    msg.services.assign("RNFUUQAOZMBKKLITCDWEWSKXTRHKWMJRTSVPIJKZQWSBKBTKVYWTDQNWMLTREAJXOSGOWDVLTNGVLYFEMNLGVNGDIWRQIWDSYDUMOYAMEV");

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
    msg.setTimeStamp(0.04436766155528116);
    msg.setSource(65455U);
    msg.setSourceEntity(69U);
    msg.setDestination(47270U);
    msg.setDestinationEntity(239U);
    msg.sys_name.assign("OESVKPFEBEDTTZUKTBNKPVYDDZNHCJHDSYUKKAWTXGQHHRFWESXNCDIDWJXUWBXIPQGGQFQSVFKLZICDRHWLKXTAKQOYESRLUAFWEWRSDJVBXZBQFGEIHLZGJDPVUMCYBITPIGVFCUGTHZUMMLURLALQSFQVJAENTCCZYVKANZWMPFVACOMOPXZJQIBQYCNSPJYHOUSXOFIYHGXEJLUZCMOBNOEHBAIPWOYVKRBPAITYMAJMORTNGDGRWL");
    msg.sys_type = 169U;
    msg.owner = 46496U;
    msg.lat = 0.13943837325785458;
    msg.lon = 0.9287524619071704;
    msg.height = 0.6591163275823921;
    msg.services.assign("AAMFYBOPUUJCASJGOUNSUFDVVLTLIYXZZFYRBOEMWVJRQLLXOKJWWHJPGCDLKREKSEXPJHAFVHWMPMSMRPSQUGCOKXBMKXLYEYUGENNXRNEXCURSQVIFQIWFQI");

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
    msg.setTimeStamp(0.9244936102693029);
    msg.setSource(4853U);
    msg.setSourceEntity(121U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(55U);
    msg.service.assign("BMFVZSKFPEZILHXAVHRXLUHIEVTKGGEURFYCOLTSTSLMOPULZQAVUPTHZXUJXQMYDXEDZRMMBAGYNUIWONMJFDTGDEJRFRPINLKUTDVWNEXZXPLFJOIQODQWZHPOVDRQKCBWCJQPRAGSRWBYSOYJDLVMANKYUOBPE");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.8710236627174068);
    msg.setSource(44904U);
    msg.setSourceEntity(158U);
    msg.setDestination(34349U);
    msg.setDestinationEntity(101U);
    msg.service.assign("YKHAJJLYCSKRYXJYMXSWOUHGPGXZPLYGGKXAUKLZMMGKWTENYOZNOVAUHQCRXFKMHVAPSRUMAHGYMSWGCMKYZSRXIBLXFNBTLEENSRPUQSPZFTQOIKZCBIJHAUWGAKSIPFZWVPQVCWJCDVFFOYJMCQYQLVKDEGSDXADT");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.24436361377987958);
    msg.setSource(34866U);
    msg.setSourceEntity(174U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(109U);
    msg.service.assign("AEUQUKYXVIPKYJTQYNLJMLSFHGIBXLRMUTRDISXAGNNJFDDDJFVFQHINAWWTQCWNIOWAZEFSGGSPOGRYBLZDJSETRUOIBUVOLLEKMRNGSUFPCYJIBLTSSGHCNOJTXKUPJEDMHYXMCBCVYXTPPTOQKKTRRCJMQHAIZXVNEHORDRNLEVVADQFBUCMRFXUHYFSOUMETEHQWBWKLGCWLPCGHOVZHICKWWFX");
    msg.service_type = 1U;

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
    msg.setTimeStamp(0.4270076560046555);
    msg.setSource(4925U);
    msg.setSourceEntity(178U);
    msg.setDestination(25653U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5155512281352884;

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
    msg.setTimeStamp(0.5637466571463787);
    msg.setSource(6693U);
    msg.setSourceEntity(188U);
    msg.setDestination(12263U);
    msg.setDestinationEntity(1U);
    msg.value = 0.07888931744669014;

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
    msg.setTimeStamp(0.007806403606818613);
    msg.setSource(63917U);
    msg.setSourceEntity(155U);
    msg.setDestination(1363U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7981605369622671;

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
    msg.setTimeStamp(0.0889143926072502);
    msg.setSource(10050U);
    msg.setSourceEntity(217U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(212U);
    msg.value = 0.34745550463900565;

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
    msg.setTimeStamp(0.6518959677978167);
    msg.setSource(59468U);
    msg.setSourceEntity(36U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9327276373051111;

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
    msg.setTimeStamp(0.5261573752941929);
    msg.setSource(15832U);
    msg.setSourceEntity(10U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(108U);
    msg.value = 0.2978124387102016;

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
    msg.setTimeStamp(0.6618463898522824);
    msg.setSource(25058U);
    msg.setSourceEntity(182U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7090416892684793;

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
    msg.setTimeStamp(0.5733463302974372);
    msg.setSource(7691U);
    msg.setSourceEntity(101U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6842317588148263;

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
    msg.setTimeStamp(0.6496308762308498);
    msg.setSource(36610U);
    msg.setSourceEntity(15U);
    msg.setDestination(7988U);
    msg.setDestinationEntity(144U);
    msg.value = 0.500393774783576;

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
    msg.setTimeStamp(0.6507404675930888);
    msg.setSource(64038U);
    msg.setSourceEntity(147U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(4U);
    msg.number.assign("BAPNYXPKASTIFIUTKLYKSXUHLAPVLKDGQMGOSHPQBIUDZBYHQFMLFTZGRBTOUNATGWCBPZLZUXNSRCZQVPRFA");
    msg.timeout = 41434U;
    msg.contents.assign("VRLGMFCIWMLQHIUZFTNLXBSAQHGEMCBJMHSUWVDJESSFDFMGBEEXVEKCZWRMMMWYHDBYWDFSXNPKMXKPCSHZAVRQUYRYUDZALAYSBJEVLNUONWSOODLMJTLCCRXVSGTPRKJWLKEVWBQ");

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
    msg.setTimeStamp(0.9515283231900663);
    msg.setSource(41552U);
    msg.setSourceEntity(20U);
    msg.setDestination(61095U);
    msg.setDestinationEntity(56U);
    msg.number.assign("TDHBGCPFMAIOKYRKIJYUHTFMOSCMDOGKQYQEOJQCQMTVBYXXMDBELSWVLEBCSEZZFWBLEEUVSDOLIJTKRIF");
    msg.timeout = 43169U;
    msg.contents.assign("GOQOHYTIKOOCXAQUWQYFCLTHCBSJWQOXUTIYNRZIVIHYJWXPHGFBMIAEPZODWEWUXPDQZDLHPEEKKYEFVJTDDICUMCHATRISOPXQCJSUVGQKUBRGGFUJHWNTNCZMNDARXSEAWOY");

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
    msg.setTimeStamp(0.5653167892134167);
    msg.setSource(18077U);
    msg.setSourceEntity(215U);
    msg.setDestination(44871U);
    msg.setDestinationEntity(14U);
    msg.number.assign("LKNRFQAMHDOMKAWDGPOTJEBXAXDORCTXVJAOCMWFBDEVYCFLSSWGWJLVPUSCTZTYWQCHQZSPLBYPFJOWDVBXRRVNSJSKGJOQYMPNHASCJY");
    msg.timeout = 35117U;
    msg.contents.assign("QUSJLTNHSUJPVXEQNJPUEQBGHYOFMPLCRQKAPRBUAWZSJQDCNOLJCBZDRCEFITAEPDAKUWMEBWGKROWZVWKDTOGLMHVFWKHAIEYQWUTXXLNDHFMCIPIJKFROZWLNIHRYQANINRJELYZHDYDKOPTKXBADLXEJGYIZKYWZETNMLMZVGGCGTSRT");

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
    msg.setTimeStamp(0.7443998905969633);
    msg.setSource(50835U);
    msg.setSourceEntity(83U);
    msg.setDestination(47042U);
    msg.setDestinationEntity(41U);
    msg.seq = 1828219237U;
    msg.destination.assign("SVVIPVPETHBICUFSQMQWAZBJTNVBIDEYSTGPGTCUVNMHHVQDKZAXBEJWLVGWFSM");
    msg.timeout = 41345U;
    const char tmp_msg_0[] = {52, -68, -108, 37, -45, 91, 26, -4, 3, 19, 58, 99, -47, -31, -10, -39, 65, 76, 108, -34, -47, 104, 8, -78, -15, 125, 23, -3, -29, -75, 17, 114, -5, 42, -74, -23, -104, 110, 67, -81, 40, -111, -71, -88, -98, -31, 112, -71, -55, 68, 44, -66, 14, 34, 112, -71, 77, -56, -87, 9, -9, 115, -11, -12, 123, -20, -76, -46, 48, 19, 23, -14, 60, -100, 17, -73, 93, 126, 10, 117, 120, 17, -53, 95, 70, -99, -6, -58, -35, 113, 31, -94, -52, 82, 2, -23, -52, -95, 77, -120, -88, 66, -116, -23, 35, 74, -47, -121, 58, 88, -51, -107, 61, 85, 47, -39, -88, -50, -31, -2, -11, 115, -95, -55, -128, 43, -44, -121, 23, 4, 73, 81, -69, -34, 122, -70, 125, 27, 40, -114, 31, 10, 33, 11, 84, 68, 101, -39, 54, -33, -126, -72, -10, -128, 16, 111, -116, -70, 101, -2, 93, -36, -126, 74, -41, 59, -124, -82, -49, 92, 89, 95, 7, -79, -123, -112, -125, -116, -89, -123, 118, -9, 81, -34, 97, 23, 93, -85, -94, -30, -48, -125, 45, 27, -104, 19, -83, 113, -15, -27, -9, 91, 49, 19, -18, -53, -55, 24, 88, 67, -22, -100, 121, 43, 1, -66, -29, 117, 71, -35, 47, -19, -27, -32, -125, 32, -12, 79, 106, 98, -105, 1, 9, -121, -43, -17, 120, -102, 87, -21, -4, -98, -63, -119, -127};
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
    msg.setTimeStamp(0.6507157079140208);
    msg.setSource(26736U);
    msg.setSourceEntity(245U);
    msg.setDestination(36398U);
    msg.setDestinationEntity(67U);
    msg.seq = 59856487U;
    msg.destination.assign("IGCJMZDZUDHGTXSNLEDFQACPRUBOVIHKHFCELKEGACXQJKXOSTWNAAGZTDMRGVPWXWSORHABIPWVQATTVCBKXUBLXLYNHJYQANIJTCTRHSCPWPXVU");
    msg.timeout = 1260U;
    const char tmp_msg_0[] = {-77, 33, 87, 40, -85, -123, -103, 125, -82, -18, -107, -88, 9, -90, 72, -104, -80, 70, 69, -74, -84, 125, -27, -40, -91, 0, 97, -6, -88, 63, -8, -88, 85, 69, -50, 11, -128, 57, 104};
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
    msg.setTimeStamp(0.48140576975365457);
    msg.setSource(55691U);
    msg.setSourceEntity(11U);
    msg.setDestination(49317U);
    msg.setDestinationEntity(155U);
    msg.seq = 2529122811U;
    msg.destination.assign("OGCJCDRWSWNHRUKRODWBZXFEHXEIDAOBUPTLROTDSQESIRYZPTNJX");
    msg.timeout = 953U;
    const char tmp_msg_0[] = {-111, -53, -12, 20, -77, -112, 38, -22, 101, -14, 32, -18, -7, 109, -25, -15, -55, 107, 101, 13, 19, -126, -46, -56, 102, -47, 44, 19, -72, -52, -51, 47, -11, 18, 93, 46, -52, -91, 98, 100, -70, -9, -38, -11, 13, -87, 1, 59, 119, -72, 42, 51, 90, -110, 38, -113, 19, -17, 99, 5, -93, -64, -63, 23, 87, 28, 50, 31, -117, -40, 116, 16, -100, -40, -75, -16, -121, 9, 48, -50, -122, -26, 11, -92, 30, 122, -41, -53, -27, -7, 11, -18, 66, 121, -23, 108, 49, 26, -85, -95, -117, -23, -70, 84, 35, -37, -105, -88, -98, -112, -17, 17, 122, -70, 0, -34, -9, -84, -83, 31, -28, 26, -104, -120, -118, -66, 67, -7, -23, 97, -67, 57, 23, -121, 66, 35, -83, -69, 17, 78, 93, -38, -12, 123, -120, -116, 11, 97, -16, 27, 64, -11, -81, 32, -14, 25, 19, -43, 58, -104, 37, 64, 25};
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
    msg.setTimeStamp(0.8265797528696798);
    msg.setSource(60045U);
    msg.setSourceEntity(148U);
    msg.setDestination(53308U);
    msg.setDestinationEntity(174U);
    msg.source.assign("BIDRQGRDHKYSAFJDERMURFCCVGQGMUFTXWPQWDLFVNUGUXFMEBGYQHCJTLQMNKAXBQFYEUSOFBTXYRXYPAWAIFBPIPNLKNTPIZWVDGTXWNQIRETNOMCLOYYOBGTUIUYLMEYRZBBKACEPDNHVKWNKCUSXRZXKEVTPIZWNSAHCIOAPKDMJWCSQ");
    const char tmp_msg_0[] = {73, -109, 113, -124, -127, 15, 3, 71, -77, 126, 111, -114, -113, 95, -51, 90, 120, 15, 51, 72, 52, -103};
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
    msg.setTimeStamp(0.7735052994335664);
    msg.setSource(64057U);
    msg.setSourceEntity(32U);
    msg.setDestination(7557U);
    msg.setDestinationEntity(142U);
    msg.source.assign("RGBONTYIMSICSGIPVLUWPJAHDNCDUQKIIOOENBYSHWPSMXUFUEVXXSZMHPHLLMRGTGVZTONPZPSHZZNMNJSCFJIGDXCAHKDMTIGZNVYCUYRLYNRRTHEJWQUQLZCLHBRYEYZAWSAAXPOOQKXPQTKOWHDWKOFQBXDUBGCPLWJETFLND");
    const char tmp_msg_0[] = {-94, -109, 84, -44, -97, -17, 98, 68, 5, -33, -92, -36, -80, 60, -105, 17, 33, 77, -11, -28, -76, 82, -79, 81, -61, 123, -95, -74, 52, 76, -32, -68, 79, -8, 79, 9, 94, -80, -76, -90, -64, 27, -17, -4, 85, -109, 60, -14, -30, -51, 78, 112, -3, -116, -38, 40, 106, -12, -14, 86, -40, -101, -67, 63, -22, 106, -1, -50, -89, 14, 63, -96, 73, -66, 38, 115, -113, -96, 73, 90, 17, -7, 37, -39, -9, 48, -22, 114, -111, 102, 44, 4, -86, -69, -126, 116, -126, -41, 109, 61, 10, -37, 37, -75, -52, -2, -87, 42, -76, -127, 38, -121, 107, 69, -40, -12, 2, -25, -116, -39, 40, -69, -70, 117, 46, 116, -15, 4, -63, -121, -110, 50, 44, 118, -69, -84, -104, -37, 90, -46, -69, 65, -88, 101, -31, 22, 119, -72, -44, 78, -67, 108, 37, -114, 72, 67, -95, -52, -101, 16, -120, -3, 76, 47, -9, 84, 58, -58, -54, -80, 78, -102, 7, 12, -58, 48, 109, 56, 42, 82, 54, 49, 99, -122, -62, -48, 79, -67, -71, 58, 69, -20, -66, 71, -100, -76, -3, -103, 78, -63, 91, -56};
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
    msg.setTimeStamp(0.1505560742168539);
    msg.setSource(25504U);
    msg.setSourceEntity(173U);
    msg.setDestination(46796U);
    msg.setDestinationEntity(144U);
    msg.source.assign("IPVCQCUSJFWYMVLYIUYCEDDNRBSKTT");
    const char tmp_msg_0[] = {-92, 77, -45, -66, -81, -6, 78, -123, -62, -97, -7, 28, -108, -111, -2, -89, -90, 8, -61, 41, -50, 74, -72, -3, 51, -78, 117, -56, -1, 51, 36, -17, 54, -24, -4, 41, 87, 34, -53, 82, 53, -114, 80, -31, 100, 64, -43, 61, 18, -127, 103, 69, 67, -14, 104, 100, -114, -46, 63, -52, 83, 30, 106, 47, -72, 48, -78, 51, -108, 103, -44, 20, -3, 59, -6, 11, -123, -127, 70, -124, 35, 5, 40, 66, 117, -76, 21, -113, 93, 87, 58, -105, -96, -74, -67, 6, 118, 61, -115, 1, 89, 54, -71, 109, -44, -33, -113, 59, 27, -92, -83, 85, 13, 47, -57, 26, 26, -90, -81, 31, 123, -79, 50, -44, 94, -107, 5, 19, -45, -127, 92, 29, 24, 23, 119, -64, -64, -80, 116, 13, 57, 124, 59, 110, 110, -49, -99, -56, 117, 13, 17, 31, 22, -59, -75, 40};
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
    msg.setTimeStamp(0.41831857505973635);
    msg.setSource(52717U);
    msg.setSourceEntity(253U);
    msg.setDestination(37679U);
    msg.setDestinationEntity(79U);
    msg.seq = 1098167569U;
    msg.state = 28U;
    msg.error.assign("NZLIAQJSOQHGDVYWTPZFCJOKYCKEREGPQYREDYYALOKJBFYCLKRVELNWXMZTMU");

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
    msg.setTimeStamp(0.785894711298197);
    msg.setSource(31470U);
    msg.setSourceEntity(214U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(123U);
    msg.seq = 3407462480U;
    msg.state = 219U;
    msg.error.assign("BBVCSSPNDLQSSCKQEIFVMPGXKMYGQXLRPUSXHFNJNTEFCVANYQJDZBHIUGGZNTMDCUKJBTXNOLWBYXSRUUBH");

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
    msg.setTimeStamp(0.6197150488981553);
    msg.setSource(22760U);
    msg.setSourceEntity(191U);
    msg.setDestination(2844U);
    msg.setDestinationEntity(166U);
    msg.seq = 2373593980U;
    msg.state = 125U;
    msg.error.assign("JXQAGLLHTEAIUKDFXLZGDOMRBBJUKIRCAIGWCVKIGPNFRNUJMHJVTFZYXYEXSTBQWXMCUTGHQQPYZJDFNYHHLVFVOLZOCTUKSJYLCDOBLCMUAVWSJYHKYVRWBOEEPWRXJWST");

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
    msg.setTimeStamp(0.2805094039963729);
    msg.setSource(55606U);
    msg.setSourceEntity(120U);
    msg.setDestination(23909U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("NPLLXUKYFIXUEY");
    msg.text.assign("FFGFPZTQMOKXIQERMHSVIJVYPOZAXHIHTLYBJUAZVKTTGAQBPYSR");

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
    msg.setTimeStamp(0.6724342358591474);
    msg.setSource(26391U);
    msg.setSourceEntity(34U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("TELRKJDERYPBLYYRHHCGSNPX");
    msg.text.assign("HXCZQOMKURLOVFTGXMVCZVHOUEUSWZCBTGAATDPTCXZLWXHNCOQYQBIGZANBFBPOFNXJNELYLWTFDNBEHIMKPRDIVKKPDXVQPIUHCYFDSSNRJWYKBXKWVDCTWFJYAJRLFQWVMJMEXEDBJPQSQUDHEHPG");

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
    msg.setTimeStamp(0.776599816744623);
    msg.setSource(32077U);
    msg.setSourceEntity(44U);
    msg.setDestination(55108U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("VSGHZYUGVAPHIAWFXSRFQTGECKYRKNPQZMIFJOMUBMPHQOLCFNCPALQZWBHLZNOPDZICVUDCMPUQQDGUAKNYTJLEVIQZM");
    msg.text.assign("BEIKYQUFPOCMNCVYEMNMOZZHFPQEHXTXGAKJIJZCHYMVANWHKDWTAFSJLBLLJCLIUTOGRDZUJRSTISOPOVHRXDVBPDGIXAHLNXKRQGDOUKZWSHDUQMNBQESLJUSLIWCITYXEDAGYJHPKRFQVCBWEXWZGAJXVRLBYECNATMZSMPONWGRSKSRB");

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
    msg.setTimeStamp(0.4804796627132871);
    msg.setSource(52813U);
    msg.setSourceEntity(23U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("YZQCQQXWDUFNVOALWGVVFNBPOHGFRARXMIBUZIHUJLXGVSQICXWTLUKAWGAMYFEZHBFWIJDGWSTQDTGYKJSHIQSTHSROYPTZBCERMGRNWJPLQPNUXOEIFTSMRVKYCETDJYGTKSNBPOUXJMMLIFCRJHSJBDDFLGMVLBUAXXWHXWJJOIAZQHUSIVUXATCZMEPLMTUOVGKYCPDKYE");
    msg.htime = 0.8249551391519896;
    msg.lat = 0.9337727754211705;
    msg.lon = 0.17590078900110628;
    const char tmp_msg_0[] = {-12, 17, 91, -72, -121, -24, 20, 15, -59, 110, -95, 60, -7, -84, 71, 6, 106, 21, -25, 110, -67, 124, -93, -9, -86, 38, 125, 51, 94, -42, -71, -88, 39, -113, 5, 46, -44, 75, -99, -11, -47, -105, 12, -42, 108, -84, -81, -72, 56, -63, -128, -22, 118, -98, -119, 71, 116, 38, 88, -69, 76, 113, 31, 73, 113, -44, 110, 84, 70, 39};
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
    msg.setTimeStamp(0.020178440792247287);
    msg.setSource(21806U);
    msg.setSourceEntity(254U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("PBWZDRMCZOSXQRLFAVPTULDJWNLYOKSBWPZEZNRXHDUSEBEDWUUMGKFPQRWMVQVCFNHLWNEDTEALFWVQVPHPTTCAIJGJQWRQWPBFKSQATHQU");
    msg.htime = 0.10897375830843137;
    msg.lat = 0.6907852284289916;
    msg.lon = 0.593331134391351;
    const char tmp_msg_0[] = {-58, -116, 95, 40, -11, 27, 31, 32, 13, -85, -44, 60, -43, 92, 63, -128, -8, 57, 17, 70, 97, -114, -13, -79, 47, -30, 61, -19, -115, 65, 99, -60, -107, -86, 102, 42, -10, 83, 84, -31, -40, -118, 88, 96, -54, 113, 111, 74, 10, 5, 21, -49, 81, -27, -47, -18, -73, -89, -91, -121, -49, 67, -35, 118, -124, -81, -35, 47, 22, -128, -114, -92, -34, 51, -126, 2, 92, 121, 49, 24, 19, -105, 1, -40, 97, 109, 92, 105};
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
    msg.setTimeStamp(0.7857398573629176);
    msg.setSource(22857U);
    msg.setSourceEntity(173U);
    msg.setDestination(39424U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("SQHWQYPWKMTHEMQCKWGOTYWYVAWSYBNJBMYKVUBFSSDAYYRUFQEFGRFXPMLEWHNVJIHQKVKMUXTHCCZZYOBUNLFBPFTXAPJVLCWCHCODQMVZJHDFLQNRJFKCNERKPNXMYDBBRZKPAYPOUJSCEJEHEEJDZADLTIGLUPIXGURXSSZNKTIRCGVOMGIXXGXQUDLPIRTZFHHLNAKFWGOBITRTQVDUJTBSRSVXDIALMDQAOZA");
    msg.htime = 0.010220833501697113;
    msg.lat = 0.8411802841424527;
    msg.lon = 0.7016110976558114;
    const char tmp_msg_0[] = {-48, -74, -4, 112, 62, -54, 4, -119, -89, -39, -84, 79, -121, -104, -107, 25, -77, -18, 1, 76, -128, -100, 106, 56, 61, 27, 69, -3, -87, 104, -46, 18, -35, 91, -19, 126, -64, 115, -39, 84, -49, -118, -27, 74, -127, -24, -54, -84, 62, 103, 56, 93, -1, 32, -95, 11, 72, 63, -75, 110, -55, -47, 112, 14, 54, -18, -49, -84, -67, -43, -32, 107, -8, -9, 103, 51, 111, 0, 103, 121, 34, 92, 68, -84, -11, -68, -106, -120, -39, 99, -94, -70, 94, -79, 104, -109, -78, 119, 26, -13, 26, 104, 13, 19, -24, 108, 32, -113, 71, 43, -115, 50, -9, -40, -105, 109, -50, 63, 51, -66, 102, 6, -54, 78, 114, 103, 82, -8, -17, 27, 54, -89, -88, -35, -84, -113, -96, -121, 32, 105, -11, -128, -53, -10, 55, -60, 125, 48, 2, -88, 16, 54, 74, 70, 49, 73, 14, 31, -37, 117, -124, 117, -38, 86, 85, -5, 13, 113, -44, -127, -65, 19, -59, -116, -54, -11, -77, -101, -60, -83, 72, 76, 48, 111, -88, 22, 78, 120, 67, -22, -54, -1, 73, 113, -63, -73, 62, 32, -112, -111, -25, 70, -91, -36, 22, -96, 112, 69, 43, 5, 24};
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
    msg.setTimeStamp(0.7892095375132614);
    msg.setSource(44797U);
    msg.setSourceEntity(210U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(10U);
    msg.req_id = 61364U;
    msg.ttl = 14489U;
    msg.destination.assign("AQLBXXXZCFKOSMBMZZPXAARSFVFJTYXDGKHCTDNJLOHJFYLUUDUPQSZCFJLYLLHKDSGVQEVCHVSPNZQICWHIPYWEJHIIHEIFVBUNRPRCQPIHGBFFLTTUORYEYRRBKXWZUICJNDZKYUGSMIRLEOWTFBKSUGOEWVCYZTMSQDIBEOPGMBJ");
    const char tmp_msg_0[] = {18, -46, 37, -94, 92, -128, -28, 76, 45, -42, 72, 54, 126, -116, -96, 76, 15, -35, -78, 113, 2, -38, -118, -13, 4, -127, -36, 110, -76, -9, -45, 125, 40, 77, 94, -37, 80, -61, 85, -98, -25, 63, -12, 83, -92, 88, -65, 1, 15, 44, -49, -66, 31, 115, -106, 68, -90, 83, 85, -15, -110, 110, -26, 52, 64, 125, 20, -51, 106, -89, 73, -128, 5, 32, 101, -49, 105, 26, 75, -45, 61, 36, -26, -69, -40, -117, 80, 118, 21, 51, 69, 7, 74, 118, -17, -9, 33};
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
    msg.setTimeStamp(0.09113575880891966);
    msg.setSource(33353U);
    msg.setSourceEntity(168U);
    msg.setDestination(9091U);
    msg.setDestinationEntity(244U);
    msg.req_id = 61116U;
    msg.ttl = 44689U;
    msg.destination.assign("ZUJTGIZFQDTXCBYHJKTXWEYUWMNPEFXUVZFVKUZUQYUYSTWLMFSVAQBVNRDC");
    const char tmp_msg_0[] = {104, -56, 58, 4, -61, 116, -62, 107, 70, 70, 96, 45, -95, -19, -41, 9, -50, -45, -113, 54, -14, 110, 13, 119, 76, 86, -66, 16, -26, -103, 76, 7, 10, 56, 90};
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
    msg.setTimeStamp(0.24307426462331383);
    msg.setSource(37286U);
    msg.setSourceEntity(96U);
    msg.setDestination(11265U);
    msg.setDestinationEntity(204U);
    msg.req_id = 42794U;
    msg.ttl = 21212U;
    msg.destination.assign("QURTVTOGQXQPONXSWLZDOUFDKDESCGZVEHSNALSMCFIAQUYKPUJFUPMCLGTIZITJTHNQPWPBKDPDCBLCGCVEARVIUBCYWGGXLYIXZSTAMZMZTBYBBQBLEDYEFEFHHQKKKVONYEHXKRNGPGNYONNHJFXLJPAEHWMJKTNQMSIMRZVIUEJDRSHWVZLCUWOXWBYDJALAIHRLEOGVMKJYPWWODGT");
    const char tmp_msg_0[] = {17, 66, -45, -106, -108, -11, 36, 86, -106, -102, -74, -13, -110, -79, -77, 2, 93, 48, -28, -63, -43, -52, 70, 102, -117, 12, -91, 48, 20, -61, -70, 56, -10, 125, -40, -94, -39, 87, -47, -114, -15, -60, 67, -76, -82, 42, -123, -94, 17, -79, 53, -8, -57, 86, 57, 73, 80, 76, -92, 89, -116, -27, 72, 93, -15, 44, -26, 34, 118, -17, 68, 59, 30, 11, -40, -70, 43, 73, -33, -27, 69, 92, -4, 32, 106, -117, -95, -114, 112, 85, 86, -70, 125, -1, 84, 118, -98, -28, -1, -123, -63, -18, -111, 20, -105, -115, 86, 101, -62, -84, 71, 59, 70, -30, 99, 74, -5, 61, -103, -71, 101};
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
    msg.setTimeStamp(0.6972016098334446);
    msg.setSource(60894U);
    msg.setSourceEntity(250U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(186U);
    msg.req_id = 31840U;
    msg.status = 140U;
    msg.text.assign("PBFDUYPESYXSHRXVIVEFSOQGIECVTGJJWTAUEPCNTFHJXHSVDGVSJAHBFUEZNAFPNLAURAWNVNRCMYCUQPHJQIIQOPZLPQHTZDUWCQIYJOKRKFYMOQRBEGOVJDXXBKGLWFEHZTKMGUBVQIZ");

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
    msg.setTimeStamp(0.6329677474520423);
    msg.setSource(18629U);
    msg.setSourceEntity(23U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(49U);
    msg.req_id = 35514U;
    msg.status = 205U;
    msg.text.assign("UAQKUAUGACEPNMNPZBDTEXHPMQWQDUVECBXEXSTSMDYRRPUFOGKDBWHKLKIDVBOILWZHSKFDPSTRAJHTUBQHJZESLVVJOMZFOXABCQYDWYOGPZPIMPKGJQKUDKYVELZTJFYRNQZJBTDUONPLOYFGUGLRICFHDWNFNJEIFTRGWIVVCZWSXLCYQRTAHNSQMMWMXCBCZOVPQKUCCNITJEOSRXSAXLH");

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
    msg.setTimeStamp(0.9919603048911082);
    msg.setSource(64654U);
    msg.setSourceEntity(154U);
    msg.setDestination(42934U);
    msg.setDestinationEntity(116U);
    msg.req_id = 46892U;
    msg.status = 125U;
    msg.text.assign("AGMOAHUCLZVFBLBQAYJYBDUSCCVYHQMCCXTZCYBSXAWWQZTFVLIKRSPPGWXRFQZJQPYOBPUVXLNISNCFTEJBIJTBCPYQUIIEMLBWDOWUPPYWNGHSKFSWLS");

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
    msg.setTimeStamp(0.8531654122441797);
    msg.setSource(8207U);
    msg.setSourceEntity(167U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("RUBVVUWKGHUIJIYSQMVSRAATODLNORPHASONFQCSTNPOVNJUIGEGCQDEKXTEILDLCDANMUGICQMBCLYWXNURFIXLQKFYQHJETMGNTOOQPEJVHAAJQXWRCZQTBPMCKVTDDHEMLWEFSXKCDWOAMUKJGNJZPSBXBZIMSGWRUPZGSZLPZPOWKYJLNRMKVLKZHFRYFBTJGWUHNIWBZBHASFRCOPDKYHQVXHYYUTGVXDLZFDEFMZOJXSR");
    msg.links = 3354669027U;

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
    msg.setTimeStamp(0.10656563317485701);
    msg.setSource(64103U);
    msg.setSourceEntity(192U);
    msg.setDestination(23779U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("SIVAZZPYOBDBEBYAMJERAUIVUJTQXSYKTIZQKUCMMPRFVXFHZLKAUXEDSXUSDTMDLOVPMSHLCJEWCEAGLGODRREENZJRVQFDVCIPTCFLPRZJTVHHLJSJDHPWNJQWAYHUMNWAYCXFPONUGVNGWBAQBMUNHCHGYCRKZKWOOABKCSBBRWGQOEOPSDYEJILGKWIQQGVSUWCKLOWFYOPHFKUTBK");
    msg.links = 3836788981U;

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
    msg.setTimeStamp(0.1391452396355789);
    msg.setSource(48655U);
    msg.setSourceEntity(218U);
    msg.setDestination(32697U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("DRPSXQRRKMCTQJYAWSZZQNGBZFKDAMKFBMKDXHJOFGQSLIIYLCYVSUVNNPTFMKVEMDUXZHVMGPVYPVQMPREFWGHABRHRIOOYSEMEMYPSJLIOJGODVLGLZETTWBOJWOHIRYJDLQKBECEPNVRPUJEOHIWXXGADAFLWNQJCSUDFCBURTABTWZVTUXLINLWUDZA");
    msg.links = 2644394839U;

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
    msg.setTimeStamp(0.14531780814322903);
    msg.setSource(8292U);
    msg.setSourceEntity(1U);
    msg.setDestination(61206U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("PYVZVVYPOUOQRMXKYRMPSNKZCJZWIMGHRTVAJNTIZDRBCHTBKCEFSXZTFVJOEJACXQCLIQWGYDCSTOJEQQARFPHYYLDQSCVYQPAOOEUFAPLXNJLTMGZVSMALJNGZIMNWAITTYDCBDCGSLUIPLGWSOUXNUPJIYXGEDZOEUKKIWTN");
    msg.action = 248U;
    msg.grouplist.assign("ZUIHMEGNEQCHIPYDRTAHVBSCRYSNNWNYJZKRGWTALMRLZFSORCLKKJEWXZRKVJDWHLFWBDMULAWQGDNVGFZUCXUHTFKDDNLYAJGXUXQGTJJSUFMIZVGNTFOTICVBNVXCEHBMSEVWQXERJOBAWCPDPKIIGFSPFVNIXJPONA");

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
    msg.setTimeStamp(0.613749884134998);
    msg.setSource(10004U);
    msg.setSourceEntity(140U);
    msg.setDestination(38481U);
    msg.setDestinationEntity(196U);
    msg.groupname.assign("OSJLHODYEKNRQNZLQHHVLRCBDWONBWYJMPGUAFVIMCURTMRMZWXQIVTZVAIVEHJRQXFUWFUXDPGVDAFURHKEKTWWZOCTBCIZTDCBKLJOSZAMXRIOOLSVOPJSKXAPTFCTFPYCFHZDXGWANQKUDPUFXGQPIGNZJNPBQAOXVLRMYSBLYLGKSVYSTHRDEFTAGJWEBVUKABLCDKMDSYUSEYSHYEZKPEQNLWQH");
    msg.action = 58U;
    msg.grouplist.assign("JCAKKJYBSBKQJVRYDPNT");

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
    msg.setTimeStamp(0.16981365656850111);
    msg.setSource(2737U);
    msg.setSourceEntity(82U);
    msg.setDestination(9007U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("HTUOFNLSNMRHBUTEQFWOZZXQVXQSWCMRKYSADYUTATHIKUDVSGSQOCGCNFSRZJETVSELXZDYZDXCVYGKHFEBZFINIMQPYTMHGVMDLWUQPBRQYZNYEGPAKWKBYDJHVFOIJQCJJPQGAHWYJLIOLOWTPUZNCHRREQDBTTTNSWYPFWESUIROKKVUUKHKBCEJWMFRUALAVSPOPCIIMFNIKPRBLMNOMDACCPXAEOLENAGHZFAGGDJBXLBJMXVX");
    msg.action = 93U;
    msg.grouplist.assign("VJCQMKRJNRZSAPGOFTVWRHHJNBPKAVSXAENFZOWZEWLUYNRCI");

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
    msg.setTimeStamp(0.8077271026633456);
    msg.setSource(60046U);
    msg.setSourceEntity(210U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8323066665350806;
    msg.sys_src = 27142U;

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
    msg.setTimeStamp(0.3497321159445542);
    msg.setSource(49885U);
    msg.setSourceEntity(116U);
    msg.setDestination(63354U);
    msg.setDestinationEntity(39U);
    msg.value = 0.2761614623130877;
    msg.sys_src = 65125U;

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
    msg.setTimeStamp(0.4719621621914267);
    msg.setSource(7298U);
    msg.setSourceEntity(95U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(83U);
    msg.value = 0.2495208987633083;
    msg.sys_src = 54950U;

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
    msg.setTimeStamp(0.8698053019267591);
    msg.setSource(25779U);
    msg.setSourceEntity(202U);
    msg.setDestination(3536U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6840943468599174;
    msg.units = 194U;

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
    msg.setTimeStamp(0.303667767355847);
    msg.setSource(49974U);
    msg.setSourceEntity(107U);
    msg.setDestination(54852U);
    msg.setDestinationEntity(107U);
    msg.value = 0.5318493320212042;
    msg.units = 24U;

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
    msg.setTimeStamp(0.4251363195943719);
    msg.setSource(26123U);
    msg.setSourceEntity(200U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(110U);
    msg.value = 0.19961653398245527;
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
    msg.setTimeStamp(0.8043015306009763);
    msg.setSource(384U);
    msg.setSourceEntity(246U);
    msg.setDestination(52145U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.7254790773169666;
    msg.base_lon = 0.7730359073766876;
    msg.base_time = 0.21629055776451778;

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
    msg.setTimeStamp(0.5035648691897192);
    msg.setSource(12628U);
    msg.setSourceEntity(150U);
    msg.setDestination(7438U);
    msg.setDestinationEntity(232U);
    msg.base_lat = 0.8986633541567578;
    msg.base_lon = 0.03901216936230578;
    msg.base_time = 0.3180168925924848;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 30456U;
    tmp_msg_0.priority = -39;
    tmp_msg_0.x = -16864;
    tmp_msg_0.y = 6588;
    tmp_msg_0.z = 22336;
    tmp_msg_0.t = -23291;
    IMC::CacheControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 8U;
    tmp_tmp_msg_0_0.snapshot.assign("OEBAWQDUXPJIQRUHZWSJRGVRCDYGIBQDPZXXROXSASLXXGUTARSZRFGKWGRNDLZPZLBYEYCNMHMLPHVTUKBGPCNYGWVFNYVQKSIVARJJKIKWTOGFKQMJYHZIFIAHUBDRIZKVXTUJPCCIOSDEQBNKICXPHXGYEURZEUSVOKFTNOEYQFBSOEM");
    IMC::SessionKeepAlive tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 204087313U;
    tmp_tmp_msg_0_0.message.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.11389154098703969);
    msg.setSource(57222U);
    msg.setSourceEntity(205U);
    msg.setDestination(34008U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.3363015989538246;
    msg.base_lon = 0.9127224802368612;
    msg.base_time = 0.619510809808413;

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
    msg.setTimeStamp(0.3883257691180386);
    msg.setSource(42382U);
    msg.setSourceEntity(4U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.4114618362467569;
    msg.base_lon = 0.7015682531091083;
    msg.base_time = 0.09020174716883533;
    const char tmp_msg_0[] = {0, -47, 26, -121, 78, 117, 19, -117, 78, 49, -113, 71, -90, 41, 78, -95, 40, -128, 119, -26, -124, -63, 7, 40, 110, 31, 109, -109, -89, 118, 68, 118, -9, -106, -84, -46, -74, 42, 80, -21, -57, 85, -4, 64, 62, 105, 53, -81, -106, -9, 113, -36, 78, -52, -63, 55, 69, -45, -94, -52, -68, 35, -48, 9, -66, -124, 50, 27, 83, 17, 76, 74, 17, -68, 122, -20, 54, -108, 85, 6, -28, 35, -85, -16, -30, 107, -38, 76, 47, -24, 72, -69, -12, 119, -21, 17, 45, 80, -10, 27, -30, -87, 6, 15, 29, -42, -70, -125, -33, -25, -100, -11, -30, -100, 79, 53, -16, 33, -85, -46, -35, 37, -22, 40, 17, 28, -82, 57, 117, -18, 11, 123, 66, 126, 11, 81, -65, 46, -51, -96, -7, 52, 121, 70, -64, -45, -60, 48, 126, 73, -19, -103, -112, 24, -24, -3, -12, -82, -15, -4, -18, 93, -12, 61, 13, 119, 125, -30, 76, 16, 98, 4, -68, 102, -33, 111, -33, -128, -15, -72, 12, 104, 13, -73, -78, -12, -35, -25, -44, -32, 60, -51, 29, 102, -117, 50, 60, -25, -117, -37, 24, -110, 71, -2, 97, -51, -19, -89, 44, 53, -65};
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
    msg.setTimeStamp(0.9739831391143073);
    msg.setSource(55283U);
    msg.setSourceEntity(195U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.01661694998252361;
    msg.base_lon = 0.8698842439311897;
    msg.base_time = 0.16776228955240768;
    const char tmp_msg_0[] = {-9, -57, -40, -13, 121, 87, 97, 35, 80, -60, 123, 60, 86, 84, -69, -87, -17, 83, -50, 8, -26, 71, -2, -102, -101, 120, 91, -26, 33, 81, -73, -120, -51, -7, 38, -125, 55, -58, -43, -55, -14, -7, 29, 101, 35, 69, 33, 98, -30, -104, 35, 126, -21, 97, -48, 35, -77, 54, 98, 86, 71, -121, -67, 66, -79, -17, 65, 95, -41, 6, -43, -15, -69, -17, 61, -86, -58, 99, 57, 107, 12, 124, -82, 96, -104, 109, -109, 105, -81, -61, -100, 33, -7, -37, -15, -113, -13, -9, 65, -68, -66, 44, 57, 24, 57, 30, -24, -84, -7, 61, -27, -16, 71, 58, -107, 57, 61, -90, -97, 10, 82, 63, 99, -42, -108, 85, -29, -22, -108, 116, 18, 83, 89, -125, -17, -41, -19, 25, -5, 76, 48, -60, -92, 114, -128, 35, 66};
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
    msg.setTimeStamp(0.6791826637580625);
    msg.setSource(7367U);
    msg.setSourceEntity(178U);
    msg.setDestination(37676U);
    msg.setDestinationEntity(136U);
    msg.base_lat = 0.4200931171341613;
    msg.base_lon = 0.0060058859002015685;
    msg.base_time = 0.6107114933931197;
    const char tmp_msg_0[] = {-92, 36, 22, -90, 106, 110, -117, 117, -49, -16, -22, 13, -105, -73, 83, 10, -104, 15, -125, -5, -43, -54, -78, -68, 69, -103, 26, 96, 97, -94, -112, 8, -110, -10, -111, 80, 37, 101, -98, 81, 52, -75, 64, -18, -55, 2, -75, -12, 21, 52, -99, 59, 98, -58, -87, -81, -116, -32, -99, 13, -81, -112, -23};
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
    msg.setTimeStamp(0.106080993904201);
    msg.setSource(18541U);
    msg.setSourceEntity(186U);
    msg.setDestination(16648U);
    msg.setDestinationEntity(41U);
    msg.sys_id = 63903U;
    msg.priority = -52;
    msg.x = 10927;
    msg.y = -21370;
    msg.z = -28538;
    msg.t = -3779;
    IMC::TypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 224U;
    tmp_msg_0.request_id = 2374335373U;
    tmp_msg_0.entity_name.assign("QFNLAYWOIEZZJMWKFGETZAHGIETHQLKPRFHXFNSVBXCWKDUKREDJGLXINUBZSVRDNTWGVXUBTDLGSUDORFIMVKCNIQYDKMPHOPEGHWYXXJBQOROCBRYACVFIFYCHARMHZHLTOMHZDYWUMPGTWLVHVCSSJXTVSNSGSZTMJUQUUQEJYCKPEAKROPDFITCTKCYJWVBGZAILZBRQVALE");
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
    msg.setTimeStamp(0.7109171056055827);
    msg.setSource(53316U);
    msg.setSourceEntity(42U);
    msg.setDestination(37249U);
    msg.setDestinationEntity(197U);
    msg.sys_id = 58856U;
    msg.priority = -65;
    msg.x = -2678;
    msg.y = 21022;
    msg.z = 2027;
    msg.t = -933;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 12022U;
    tmp_msg_0.priority = 110;
    tmp_msg_0.x = -10418;
    tmp_msg_0.y = -9755;
    tmp_msg_0.z = 32739;
    tmp_msg_0.t = -6825;
    IMC::RemoteState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9801407913079211;
    tmp_tmp_msg_0_0.lon = 0.613162734132773;
    tmp_tmp_msg_0_0.depth = 78U;
    tmp_tmp_msg_0_0.speed = 0.7815331684666253;
    tmp_tmp_msg_0_0.psi = 0.7333700069395462;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.49152879603515487);
    msg.setSource(27634U);
    msg.setSourceEntity(185U);
    msg.setDestination(20383U);
    msg.setDestinationEntity(212U);
    msg.sys_id = 63145U;
    msg.priority = -25;
    msg.x = -11520;
    msg.y = -14924;
    msg.z = 12242;
    msg.t = 3247;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.reason = 234U;
    tmp_msg_0.value = 0.8036719795425958;
    tmp_msg_0.timestep = 0.1257186158908723;
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
    msg.setTimeStamp(0.73650040812146);
    msg.setSource(4902U);
    msg.setSourceEntity(240U);
    msg.setDestination(61081U);
    msg.setDestinationEntity(186U);
    msg.req_id = 45675U;
    msg.type = 51U;
    msg.max_size = 52045U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9538562099392465;
    tmp_msg_0.base_lon = 0.1739146626902699;
    tmp_msg_0.base_time = 0.7367759188467021;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 16548U;
    tmp_tmp_msg_0_0.priority = 49;
    tmp_tmp_msg_0_0.x = 27880;
    tmp_tmp_msg_0_0.y = 9852;
    tmp_tmp_msg_0_0.z = -28348;
    tmp_tmp_msg_0_0.t = -31640;
    IMC::TypedEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 132U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 3544690593U;
    tmp_tmp_tmp_msg_0_0_0.entity_name.assign("MXSCJSISRWATPKUAPRSTKBOFCUARZPOMZIMOKCCGYDGBXKQIATZUOFFJPZTNSHGFNGYMPZZGQZEWOPHUWQKEUQQLCHQLYIDHOFAJUFQKSWESFKVMMLAYEAZEHKHCQVKNAOMHALCJDVYRVNVDXPRWWMYTXDUNGXBWLRGECJPVIBDZRYIRWUBJTPLGRUCHNXBHQMENSIBVDQYBVGFRP");
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
    msg.setTimeStamp(0.7222703768034124);
    msg.setSource(11811U);
    msg.setSourceEntity(46U);
    msg.setDestination(55253U);
    msg.setDestinationEntity(103U);
    msg.req_id = 6239U;
    msg.type = 122U;
    msg.max_size = 36767U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.31902010151674476;
    tmp_msg_0.base_lon = 0.8169915012843867;
    tmp_msg_0.base_time = 0.006775075212025361;
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
    msg.setTimeStamp(0.00174761176323035);
    msg.setSource(62653U);
    msg.setSourceEntity(233U);
    msg.setDestination(23205U);
    msg.setDestinationEntity(70U);
    msg.req_id = 16830U;
    msg.type = 61U;
    msg.max_size = 24353U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.47650738710273244;
    tmp_msg_0.base_lon = 0.5988727498668479;
    tmp_msg_0.base_time = 0.41981243608803365;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46115U;
    tmp_tmp_msg_0_0.priority = 121;
    tmp_tmp_msg_0_0.x = -14056;
    tmp_tmp_msg_0_0.y = 16434;
    tmp_tmp_msg_0_0.z = 6635;
    tmp_tmp_msg_0_0.t = -17768;
    IMC::ReplayControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 254U;
    tmp_tmp_tmp_msg_0_0_0.file.assign("KTFSXVJAEYVEBVAFIOSKFPANTHMQHFSHFGNRLVMRLCHNKTVLVZMHJYHQDUNEBZZGZSBKEANLUXQWRCVCEUPXXUSFYMQJOPMJHEDPWAOYCAJOKQTYAUKWBJIBQKMLYYDIJWFDPBPONZTINBKCQUVXMLAEQQWTWZCSTBWIKIYZMRFYJC");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.3994688082115211);
    msg.setSource(42951U);
    msg.setSourceEntity(195U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(121U);
    msg.original_source = 378U;
    msg.destination = 37132U;
    msg.timeout = 0.8667066709149165;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 145U;
    tmp_msg_0.value = 0.6039191557404161;
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
    msg.setTimeStamp(0.9088250731670979);
    msg.setSource(34851U);
    msg.setSourceEntity(56U);
    msg.setDestination(63567U);
    msg.setDestinationEntity(237U);
    msg.original_source = 10473U;
    msg.destination = 39675U;
    msg.timeout = 0.5444364318559561;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 137U;
    tmp_msg_0.entities.assign("ASTMCYMEHBRLZKZKJZUPWHIYPJRMATXQNOUIPAVKYJZMXLOOAYALQUGTXAUAJUEZJZXJPRGGINEBRLSDGCFHFPMECFUEETNNPHSWBBGIWVUSHGKJJUQVBEZLTYBSOOKIHIDZXJRLFNYAPBDOGOEQCQUHDVDWCLRWCHVGDKMGTATQTSPKFSSKZWQIRILMNKOVKQRNOYFXAXQRBIFXYNNCTMFYFDW");
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
    msg.setTimeStamp(0.9345347182978073);
    msg.setSource(36791U);
    msg.setSourceEntity(251U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(210U);
    msg.original_source = 39015U;
    msg.destination = 19849U;
    msg.timeout = 0.49545357800195466;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.command = 0U;
    tmp_msg_0.settings.assign("CWOGQLNZEXUQRENCPJUZOZLRKGJUQGXJAKFHCPUDOCZL");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 54085U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8393494585440172;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9142822280016044;
    tmp_tmp_tmp_msg_0_0_0.eta = 2479039777U;
    tmp_tmp_tmp_msg_0_0_0.duration = 57681U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VNGQNRUPSEUGUWRMLAVUBTKNJFABHBDUEXFDCSDHGWLMPCTDNBWTJIPHOVRIHRSRHITFENWXZUDYHEZQGWNCFFAN");
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
    msg.setTimeStamp(0.6195870655055198);
    msg.setSource(31551U);
    msg.setSourceEntity(234U);
    msg.setDestination(33070U);
    msg.setDestinationEntity(81U);
    msg.type = 245U;
    msg.comm_interface = 45399U;
    msg.model = 8242U;
    msg.list.assign("FGYSGHQWCATCBKYSNXAJICGPFNGJYSNKETCHSWCZVCBWUDFOMJFBDHJCKIVMVTBZPLJXVCDGBNNOSQWDLZHIVNYRKDWSPBKYZVTDTEMPJLDDPYIKFRFHQUSOSKRYEMAGVZWGGFIPRVKRMBTXZSXRHJUCZXDMUAPMIWWTFJORFUAOHOQTZURXMWPVZNQEHAMJQLKXEAA");

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
    msg.setTimeStamp(0.6677792211100071);
    msg.setSource(64705U);
    msg.setSourceEntity(124U);
    msg.setDestination(49256U);
    msg.setDestinationEntity(83U);
    msg.type = 217U;
    msg.comm_interface = 28367U;
    msg.model = 7365U;
    msg.list.assign("RYCFPGIAACWKAPSXEBK");

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
    msg.setTimeStamp(0.7483483003504396);
    msg.setSource(64823U);
    msg.setSourceEntity(180U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(201U);
    msg.type = 71U;
    msg.comm_interface = 14797U;
    msg.model = 37961U;
    msg.list.assign("QNNBXDMDMSTVCGAZXSHLPLZARFONFKOHMYNKILFKPXQDMNZKCPFGFOLLASPVHJMQNWWGJZUZUSSFCAGVIXWOJYWXVQZQOFAWOYULOBKUMHURIJABMAYRIDDEEUCZAIRKJXCBEFHRSXTDPEMNHXAWLURBWDBVQRGIYVELMESFITXHKRJUZHJQIKRWWNPDBBTGENSMRQPZCHLYAZTNYVBSSH");

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
    msg.setTimeStamp(0.928814875726605);
    msg.setSource(56870U);
    msg.setSourceEntity(107U);
    msg.setDestination(59867U);
    msg.setDestinationEntity(167U);
    msg.type = 221U;
    msg.req_id = 1573094497U;
    msg.ttl = 59244U;
    msg.code = 201U;
    msg.destination.assign("VDIPEUCRANBNVQIUPHDRQDZXSYSMBNJFNTUWWVOYTELCKWHQKWLTNTGZCGEUVMWBLOJFSXBXRAOJPQWHHFKQJFVKYIXGYYQTHOVSELZVIRCGAAOGUIWBDNUEASFMJDPRIBHDVBMUILKWWDHFEKSQDPORUXJCYYNGBGGNFTLMMXALXUEZOBUPIHZZXMOXDZQATRXOYFRJSILPJHOMKAAKCEETYIJWLCZBCGNRSMGASFPCYLRSZCHMN");
    msg.source.assign("YHMLIQYYDFUMBTGIEURVFAVSLHAYODCOWLSEFQIJJYZTIXWHJZJKZBZSBLRDUQNGXKLCNFKEWOXQCSQVRXGEZRKMBPOJZSNHEAADLNRKZXWDTATHIKMOWZBXBWJUGVHRKAMPLUVDNKVVPFXGTBXEMYCFAIPFGUIHWVPJIPYGHQQPWOHIUEAISDDNTMPMJSSTHTVNGZOMUWCOQBCUKRFOTNWELFTPVYQAYLNDKZRMORCPSJSCDNGCC");
    msg.acknowledge = 222U;
    msg.status = 122U;
    const char tmp_msg_0[] = {114, 61, 63, 110, -37, -33, 62, 18, -108, 34, -120, 7, -9, -85, 82, -72, 22, 90, 101, 70, -74, -41, 50, 21, 91, 8, 75, 18, -31, -111, -66, -15, -73, -66, 10, -126, -90, -104, -116, 10, -22, -38, 2, 109, -81, -20, -64, 6, 31, 74, 102, -120, 49, 61, 65, 78, 16, -110, 36, 9, -50, 84};
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
    msg.setTimeStamp(0.47887121377632536);
    msg.setSource(2883U);
    msg.setSourceEntity(245U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(211U);
    msg.type = 33U;
    msg.req_id = 1333004266U;
    msg.ttl = 37419U;
    msg.code = 96U;
    msg.destination.assign("RSBWDNUISBIZJTQEWACODBXYMETQDRUBGXXSBCYELTPVLCYHZHWEVQZXUFPVZKLXIQMLIVFCULNZDHJPDLBWPRM");
    msg.source.assign("NUWPHXJRAWSOHPAZCLOZUHSYYSAJFZNDUNFEMZGAQQNLLEKTUXIRKPQI");
    msg.acknowledge = 25U;
    msg.status = 200U;
    const char tmp_msg_0[] = {-104, 77, -98, -60, -114, -105, 112, -1, 90, 106, 76, -45, -10, -18, -121, 80, 125, 52, 99, -106, 16, 2, 94, -37, -56, -127, -53, -96, -114, -89, -46, 90, 113, -54, -100, -112, -1, -77, -95, -125, 123, 47, 50, 126, 28, 72, -119, -102, -58, 84, -120, -116, -67, 6, -100, -5, 86, -90, -76, 91, 10, 38, 96, -14, 63, -30, 79, -123, -29, 22, -26, -113, -102, -106, -9, -110, -79, 11, -22, -111, -110, -106, 100, -116, -64, 103, 27, 52, -100, 121, 94, -108, -88, -21, -94, 36, -46, -106, 63, -17, -99, 76, -11, -128, -13, 34, 7, 83, 3, -127, 49, -88, -107, 34, -35, -42, -36, -86, 86, 94, -73, 12, -116, -52, -117, 85, -24, -31, 4, 126, -26};
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
    msg.setTimeStamp(0.40507976614980323);
    msg.setSource(44632U);
    msg.setSourceEntity(230U);
    msg.setDestination(858U);
    msg.setDestinationEntity(169U);
    msg.type = 141U;
    msg.req_id = 1543708030U;
    msg.ttl = 41932U;
    msg.code = 24U;
    msg.destination.assign("FZBMYWTXHPDOGGQHZIUZIFBWKHLWCSWGVZBFDIDYHWTQUNWOREVTFSCMZHPMNPASGHAEDBXKPREJDIOSSLFGIVRAACQCLINTNBTWZWROLPA");
    msg.source.assign("TIIPTUULZXRMYWZXFIGOASLBDLHVMSFSYQLPFBI");
    msg.acknowledge = 149U;
    msg.status = 65U;
    const char tmp_msg_0[] = {-107, 120, -88, 39, 27, 90, 14, -49, -75, 8, -101, 95, -85, -75, -66, -14, 51, 88, -46, 66, 125, -34, -124, 4, -127, 78, -102, -127, -30, -73, -19, 98, 104, -68, -90, 15, -48, 13, 121, -35, 12, 101, 96, -36, -13, -104, 114, -21, 72};
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
    msg.setTimeStamp(0.28449359350214265);
    msg.setSource(19302U);
    msg.setSourceEntity(151U);
    msg.setDestination(2422U);
    msg.setDestinationEntity(74U);
    msg.id = 145U;
    msg.range = 0.7625367474332465;

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
    msg.setTimeStamp(0.515996593697587);
    msg.setSource(59804U);
    msg.setSourceEntity(20U);
    msg.setDestination(62011U);
    msg.setDestinationEntity(114U);
    msg.id = 110U;
    msg.range = 0.8875222831128263;

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
    msg.setTimeStamp(0.7394525681000129);
    msg.setSource(35690U);
    msg.setSourceEntity(121U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(50U);
    msg.id = 100U;
    msg.range = 0.029731343141467526;

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
    msg.setTimeStamp(0.49653324800480325);
    msg.setSource(18920U);
    msg.setSourceEntity(184U);
    msg.setDestination(50531U);
    msg.setDestinationEntity(248U);
    msg.beacon.assign("XTOSGTVAASURPYOTIOZJWEFHUJHAZKPPRQTNLGTBCALBNNQXQIKZFCKFOEZDAXRPPXWICQIDEXWEGXQPMPWSQPVDGUJOYABHEJMYNUVUDEKZWGWRLMCJGVLBJIRWJENYVHLUC");
    msg.lat = 0.06879621841741113;
    msg.lon = 0.31297884159936684;
    msg.depth = 0.2964691595620492;
    msg.query_channel = 40U;
    msg.reply_channel = 121U;
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
    msg.setTimeStamp(0.2672551710355159);
    msg.setSource(27585U);
    msg.setSourceEntity(249U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(208U);
    msg.beacon.assign("KUWBYHGBRLKFZNWRSLCXQZLTGOSFUQYPZILBENTPTESOVNXRUGJVSWRCMBQJBZCVCIGFEZHRHMUHHJFYBDWCJPCTKLQVJASAISDWAXXZUSGVHPKACYABSCXPOVUYEODPYQANNIYBG");
    msg.lat = 0.4485100101967533;
    msg.lon = 0.9888588400768307;
    msg.depth = 0.904719057503607;
    msg.query_channel = 81U;
    msg.reply_channel = 88U;
    msg.transponder_delay = 93U;

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
    msg.setTimeStamp(0.4653794655891319);
    msg.setSource(13772U);
    msg.setSourceEntity(97U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(235U);
    msg.beacon.assign("PVMZCMUKEBAKQHGAGSXLDBOJTCHKGJQYCVAZTOVUHLPCCQKRDSNTINTJFYQFNJWFDGRWQBXWEWOLWWOTMNUROLWRECKMYMJNYHPODIGBXYXTQIUXUAHIBRZTAEJLBVDCISEJHLSNAESEXWWUECUKZVZTBSGVAHNSZSDQQAUJNLTJQPSGOMDVERNZTZVSYGYZPVFIYO");
    msg.lat = 0.738985942034154;
    msg.lon = 0.31062420453501305;
    msg.depth = 0.44218211190527945;
    msg.query_channel = 61U;
    msg.reply_channel = 28U;
    msg.transponder_delay = 225U;

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
    msg.setTimeStamp(0.24247872977985951);
    msg.setSource(32692U);
    msg.setSourceEntity(238U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(172U);
    msg.op = 242U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TJCPWTIOFUUWBABPXHYFLZXMBHUALQVESZSCJPREHCNDJDINTDEDQTNAILOAQWIOPTANXLPUGDWIQWOCZCDVNTAAJFYQVUTQP");
    tmp_msg_0.lat = 0.3420891276624748;
    tmp_msg_0.lon = 0.872976390606227;
    tmp_msg_0.depth = 0.054503865551016384;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 88U;
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
    msg.setTimeStamp(0.7547246271196886);
    msg.setSource(25503U);
    msg.setSourceEntity(91U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(165U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.18463257193426275);
    msg.setSource(29023U);
    msg.setSourceEntity(56U);
    msg.setDestination(49056U);
    msg.setDestinationEntity(59U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.8460695656981918);
    msg.setSource(42173U);
    msg.setSourceEntity(43U);
    msg.setDestination(19432U);
    msg.setDestinationEntity(137U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.6264914802792456;
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
    msg.setTimeStamp(0.825445675837526);
    msg.setSource(40238U);
    msg.setSourceEntity(190U);
    msg.setDestination(50759U);
    msg.setDestinationEntity(107U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.22614336696569193;
    tmp_msg_0.reason = 67U;
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
    msg.setTimeStamp(0.005954087160559451);
    msg.setSource(41029U);
    msg.setSourceEntity(125U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(109U);
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.3547529304100028;
    tmp_msg_0.temperature = 0.5552912933310451;
    tmp_msg_0.depth = 0.6077587774539432;
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
    msg.setTimeStamp(0.2405707508256426);
    msg.setSource(44490U);
    msg.setSourceEntity(12U);
    msg.setDestination(27362U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.1176560092475466;
    msg.lon = 0.6581159672486158;
    msg.depth = 0.8690077001223191;
    msg.sentence.assign("XPMWEVXQYYDTMTRLIFRZHWUHAFDMGVRWVHELVLDNGJUJBTOUOABEGKGKXLPYDMHJJMBKEJVOQCXWZRWMEORBEBINZVBFASNQFJAWIUPAVZQUFLMYHYZFHVAPISBQCLWECZNOGMTQXGJDZNVEROLUCTLOJPMSPYPPQAZDSISLNCGHRQRHZIIGUPNFOVOXUKBM");
    msg.txtime = 0.20960741878835742;
    msg.modem_type.assign("BVQLSXBQHIJODDCLPXFMOWUJUYQLEZOFRXEFFMTSGGVVNSLFCSJGAOQYGHPCZBEGBNPFDCGBGJCEQWFALWGOJWMVOCAZRXUIKGPYVWJPXHIRENKKSIVBZFSQNTALCTMYTOZJWYANDSELDOYILKAYRPPEBVSGULCMXRZFUHHHYUHPAMVRTJDAYDTUCAALKMXZURQBMJNTDZPNNXBTTEQMQKYWIHSRDVZKNSOKKVUIWEHQDROINEXXWWFICMPRJT");
    msg.sys_src.assign("SUIXKEHQBYAVABBSFCOTOHALOKQIHBLGXSKAQWUKDYUTJHFXURVVVBIEUBDPYPFGXWJEZSWDUYQYNCFMGLZPCJBNGZVJPPOUGHXQIOAOUCWEJQTRZDGJCVIPCTCTXKDZLWRHXYGMNHEMTHVPOQL");
    msg.seq = 19632U;
    msg.sys_dst.assign("PXMHHTQDZRZXWPXKKJKSJTLMGCXS");
    msg.flags = 83U;
    const char tmp_msg_0[] = {85, -14, -76, 38, 13, 78, -86, -52, -51, 8, 91, 92, 43, 71, -16, 123, -60, -108, 104, -19, 43, -59, 51, 20, 24, -50, 74, -32, -108, -92, 115, 7, -39, -91, 38, 119, 37, -25, -12, -2, -17, -25, -15, 22, 3, 95, 125, 124, 67, 83, 80, 68, 111, 37, 55, -124, 85, -127, 49, -98, -44, -4, 104, 61, -52, -54};
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
    msg.setTimeStamp(0.7661934523369234);
    msg.setSource(34660U);
    msg.setSourceEntity(104U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.48648714972195817;
    msg.lon = 0.07636533139355006;
    msg.depth = 0.9141268579516849;
    msg.sentence.assign("SFDNLDLZZJHPMVCPWFYVYFKYWIUAEESKCUJYGOSOLWSITBTGHKDQXKADGLQDVSOCNHZOWMCQNQPXKAMAFODSZGMETPLKEZBOAIWREJRWYHJRXTNCFYRJEWJGXBVCDRZBPNCVVHBMUHLMPXKLWMRQZESTAGLXYIIIRIFQGONROAAHRRUPBVYNGETBVJQYKSFXNLUXKICIMWAVUBGYMDZOHPTKCVAHXMHEFNQGTIQJUJUQLFZCJXSBPTU");
    msg.txtime = 0.49749417326396694;
    msg.modem_type.assign("PBOLDOPUZNDRMYLTAEMVCMPWZEXRHVPPQOLMFWJNYICXFAQUKVUBTIRSDGMZPYGUSMPOQFTNHZUBCFKRNNHCSJDVFWWXDEBKBQXSTYIRVTYKNXBQSRWDEQKLUCGJMKGAJITAJRZTZGYKHYBTITVXOJNWJEDVUOGDRFCAWMLRZEB");
    msg.sys_src.assign("GXDFEZQDDTYUWFFFEVOTLTARWAIGMXWOIIKRVPCBHZSGEGVGVVK");
    msg.seq = 54535U;
    msg.sys_dst.assign("DVNQMTJHVRQGJNXHOKRIJVXUQDOCZLHCAPYUNMYRFPRSSULKKBCUFEMTNKSZRAZAFXX");
    msg.flags = 159U;
    const char tmp_msg_0[] = {-89, 17, 51, 70, 98, -53, -27, -128, -86, 77, -116, -89, -80, -115, -48, -88, -40, -26, -70, 49, -36, 97, 28, 2, 44, -94, -36, 105, -38, -95, 77, -10, -14, -97, 44, 20, 22, 40, -56, 58, -95, 79, -22, 53, 37, 49, 71, -87, -123, 20, 26, 21, -99, -126, -7, -58, -13, -112, -97, -104, -22, 75, 22, 99, 110, 52, 68, 56, -68, 73, -28, -77};
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
    msg.setTimeStamp(0.6249869406859004);
    msg.setSource(56022U);
    msg.setSourceEntity(181U);
    msg.setDestination(16949U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.21181995812437426;
    msg.lon = 0.8705919351552599;
    msg.depth = 0.6724891435603585;
    msg.sentence.assign("PWHQDLYMRQKFLHRSZEHIIFELWLCTZEZFSEEMEIYRCGSHJLPNIOVVAJWSRHHPKVJCRKTJHISCGMLZ");
    msg.txtime = 0.015840035769042138;
    msg.modem_type.assign("UUHFNMJYGGHRQNFOFISSVAFYFUDSIEZQRMPTQCGPCXSYWHABWXPARGXIOZKDTTSKVTZAZHOCBM");
    msg.sys_src.assign("BPLCVMSMQWINYBVDOVZKZNUXEGSLIMFOKUGNPNIYWXXBHQAFHDXIKILHTLTWTABVMSOTAMCSGPPZGFDKWKSRYYOVDAJVVUDAYC");
    msg.seq = 16867U;
    msg.sys_dst.assign("AXWWYCTMIEFMGHBSETRRUYWQLLZGFTROQSILFRSUPGWYIAVPBQKRYOTBXTUSLQZEYGBADBQKHPMCQSUD");
    msg.flags = 252U;
    const char tmp_msg_0[] = {56, 35, -63, 86, 28, -44, 78, 61, 44, -109, -112, 108, -108, -101, -98, 1, -28, -82, 21, 119, -51, 81, -46, -22, 119, 90, -79, -71, 96, -36, -107, 74, 25, -93, 94, -96, 6, -47, 35, -126, -73, 57, -6, -53, -61, 1, 24, -124, -41, -65, -33, 40, 2, -7, 77, 37, 90, -100, -45, -96, -36, 1, -19, 119, 32, 15, 54, 91, 99, -1, -1, 108, 2, 126, -105, -43, 105, 98, -110, -42, 113, -28, 14, -126, -29, 65, -98, -100, 23, -120, 23, 20, 85, 62, -60, 60, 23, -7, -9, 49, 16, 35, -38, 5, 100, 100, -43, -35, -103, -118, -13, -65, 116, 30, -13, 23, 0, 40, 106, -27, -88, -9, -88, -4, -76, -42, -107, 39, -43, 12, -23, -19, 15, -68, -29, 56, 118, 54, -105, -119, 60, 56, 42, -117, 121, 92, -66, -85, -40};
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
    msg.setTimeStamp(0.9753344311617936);
    msg.setSource(10660U);
    msg.setSourceEntity(116U);
    msg.setDestination(3502U);
    msg.setDestinationEntity(195U);
    msg.op = 102U;
    msg.system.assign("ABLJCIXARYTICGJOEDETSQWZSBQXLHFZKMSXIEINLYNLHVNZXYEABPWCJMUJQTGSFXURZDVQVWAOUPCSMLXZWAYQGRDWUTVNGJNNBBFPHIDJFQSFPLGHLQWMWAKIFLOZGSYASVVKFVHYPGHOLTUBVTTDVXMZSJUQPXEOKDBEKCQCCXKCKEZPEMYUOLJPTJHONBHGBICIYKAMMNUZFMKQZRDEWWHPRPD");
    msg.range = 0.8127872305090813;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 63003U;
    tmp_msg_0.lat = 0.11774395627287415;
    tmp_msg_0.lon = 0.5075097262211098;
    tmp_msg_0.z = 0.17296803524123316;
    tmp_msg_0.z_units = 60U;
    tmp_msg_0.speed = 0.7026868846778019;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.bearing = 0.5584747057261534;
    tmp_msg_0.cross_angle = 0.6684665442006104;
    tmp_msg_0.width = 0.1902653037869444;
    tmp_msg_0.length = 0.5474633202108441;
    tmp_msg_0.hstep = 0.2322914694893633;
    tmp_msg_0.coff = 14U;
    tmp_msg_0.alternation = 94U;
    tmp_msg_0.flags = 3U;
    tmp_msg_0.custom.assign("JCFERWGPUZMAVPMSOYJJUDSLHGOYZTSMIPNWNATAA");
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
    msg.setTimeStamp(0.8465071651299207);
    msg.setSource(62740U);
    msg.setSourceEntity(107U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(114U);
    msg.op = 16U;
    msg.system.assign("JPJXABMLQYBTAPZDFORWPUOFHUJVSVDRGWCIQMGQSKRHORLJXUMHQE");
    msg.range = 0.6311837156593353;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.051196159261737595;
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
    msg.setTimeStamp(0.7725650702307999);
    msg.setSource(14109U);
    msg.setSourceEntity(96U);
    msg.setDestination(18381U);
    msg.setDestinationEntity(182U);
    msg.op = 251U;
    msg.system.assign("JJESAMQIEAWAHHFUPBVBAVFABERPUFAXBKGMUGNCSULCWKODKMCPPYRKNGOOWZELZGVTNSMXGKBHJDOFGGBZVKDHTJJANYCTNVXMJNDYIEURXMTVKMRWHPSIZQRVPFKLXRIIASHLFJISWUJHDWTERYN");
    msg.range = 0.05947451965071204;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49025U;
    tmp_msg_0.off_x = 0.3022221090266526;
    tmp_msg_0.off_y = 0.02264683363961728;
    tmp_msg_0.off_z = 0.16166009956320126;
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
    msg.setTimeStamp(0.6396554203858192);
    msg.setSource(22554U);
    msg.setSourceEntity(146U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.6067008129067849);
    msg.setSource(64671U);
    msg.setSourceEntity(243U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.25950928949289975);
    msg.setSource(41059U);
    msg.setSourceEntity(214U);
    msg.setDestination(14140U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.6917675833658393);
    msg.setSource(58828U);
    msg.setSourceEntity(18U);
    msg.setDestination(60135U);
    msg.setDestinationEntity(69U);
    msg.list.assign("YDDPJRVZWMQQVYQJTJCJEYSCEFJMVLXHEHEHNXCONFZO");

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
    msg.setTimeStamp(0.36025738208040603);
    msg.setSource(54448U);
    msg.setSourceEntity(195U);
    msg.setDestination(16780U);
    msg.setDestinationEntity(222U);
    msg.list.assign("PDAYLMOQUVOJZIZTSFCYGMZJZNMWVFLKVTTBYWQSGRXFOSKAJAZPJPETVNKSFUTEWFLDIDRDJTEBKHWUUNEDUVGX");

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
    msg.setTimeStamp(0.4180398812807269);
    msg.setSource(13072U);
    msg.setSourceEntity(200U);
    msg.setDestination(21116U);
    msg.setDestinationEntity(186U);
    msg.list.assign("FLCPXHLPYCOONQNRHLPWWJBRNMSVKRGACSEILQMVYZFWLGTRYFPLGSZVJUOPJGZZSMIUSZAXOSYFHQNBDUGPBMXQKMOWDKE");

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
    msg.setTimeStamp(0.9799696462118846);
    msg.setSource(44089U);
    msg.setSourceEntity(243U);
    msg.setDestination(50189U);
    msg.setDestinationEntity(13U);
    msg.peer.assign("CFBTPFCAIGTJOCSJQXRIVUDQBHGELGENBGANJNVFJWPWOGPMPLCAXQRCFTYDYVBUETTNKRFXVYBXOUQWIHUGKDTLUHDXBRCWIMMIMZJWZSWFRYGUBSYBAHRDUYKNJMNHLRRSVVMBDPNZQMQWLSGVFKHJOAPPVCXEBZLLSCGQVSN");
    msg.rssi = 0.28878634937650194;
    msg.integrity = 64446U;

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
    msg.setTimeStamp(0.492012089199404);
    msg.setSource(9119U);
    msg.setSourceEntity(65U);
    msg.setDestination(53367U);
    msg.setDestinationEntity(155U);
    msg.peer.assign("VMVZDKIWOKCSCJUYGDFJCZWICGNMAZHJQYFWXBQPRXTJSOBKPJJDNIJIAHGUWUXTYESEPPZDZWVNBYNCHGCBRFYMSUKPHKLPOFBPLTGRXGBYEOZFINWQTAHOFNMSQLROYPVCIRCNSKQFXLIEOGITNYHWMQBZUYPCAAWSXMKBKGDIHRLPUQTLLUBDVCLZOMSKDZVFJEVZTQDFEWN");
    msg.rssi = 0.043848426364570314;
    msg.integrity = 47471U;

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
    msg.setTimeStamp(0.15277358098002014);
    msg.setSource(56970U);
    msg.setSourceEntity(47U);
    msg.setDestination(23712U);
    msg.setDestinationEntity(119U);
    msg.peer.assign("KSDENOZEGHUADLSAZFQONVAVWRMWLPNAXJVKXRJIYXJGELSKWBKPKBQFTZTFMPXBMKHDHFZJSNJJCIHTFDACMPAQTVCOZGVNWXRWPUDXWNRALZJCUOEHGCMR");
    msg.rssi = 0.9468846229813982;
    msg.integrity = 32638U;

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
    msg.setTimeStamp(0.4753206570813673);
    msg.setSource(22673U);
    msg.setSourceEntity(176U);
    msg.setDestination(25727U);
    msg.setDestinationEntity(221U);
    msg.req_id = 18311U;
    msg.destination.assign("WWLGLMDDGNVOAJQXAQFTEOWQIJHZJSAKPNLMUPFHUQGUCOTJFMRBXVVLTIKYLOGSSFRSIEHWEWECZPRGDRYXDBRQZKPOXTWXW");
    msg.timeout = 0.49515404101616345;
    msg.range = 0.2336573823151722;
    msg.type = 95U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 166U;
    tmp_msg_0.period = 2900202538U;
    tmp_msg_0.duty_cycle = 2322335827U;
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
    msg.setTimeStamp(0.46563561855429403);
    msg.setSource(9706U);
    msg.setSourceEntity(192U);
    msg.setDestination(49241U);
    msg.setDestinationEntity(69U);
    msg.req_id = 42949U;
    msg.destination.assign("EKUTKLLGISESYOAWVBGRJBXKNWDEPQPHTZQPQXGFPRAVLFMATLFXBREBVQCHOMYMPBYXJVRSHXLJNJDSPDWELDVMEFEGPMLRWYDVKSWDBWOBRUFJOOZIMQYYPRGYAFYCXZVBTTXDBJVKCFZGWHHCUNQMZKIFLCTHNPJZWWRAOTAZOSXQJKFUIKQRUOAFKESVJQNLTINHCSEGGACHNYBTEJGDUMOCMKNCTQCDIHGPZAUODIILIZUWR");
    msg.timeout = 0.9437550682591165;
    msg.range = 0.7000257220628098;
    msg.type = 156U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("KXKAIXFIKUYVJRBZQUDXANFHRWFEUDFMLHJOPQLQKTSCSOKUFQKVCGWYYEJUDZ");
    tmp_msg_0.reference_frame = 11U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 27814U;
    tmp_tmp_msg_0_0.off_x = 0.4249460426988044;
    tmp_tmp_msg_0_0.off_y = 0.24512133390381485;
    tmp_tmp_msg_0_0.off_z = 0.6956335769492558;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BPNSCBATPHDHLKZAXELGNDHYYNERUIWRLV");
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
    msg.setTimeStamp(0.04979113323753637);
    msg.setSource(34935U);
    msg.setSourceEntity(52U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(120U);
    msg.req_id = 19661U;
    msg.destination.assign("YUXZCTPZVEKOWTQELPIHOYNBGQKQKTOLBXNHGZPUBFVJLMVLJGVQI");
    msg.timeout = 0.4604140100655948;
    msg.range = 0.23387516625742777;
    msg.type = 67U;
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.3177896735558061);
    msg.setSource(55441U);
    msg.setSourceEntity(172U);
    msg.setDestination(60573U);
    msg.setDestinationEntity(228U);
    msg.req_id = 59998U;
    msg.type = 134U;
    msg.status = 20U;
    msg.info.assign("MKUZOGJOVKCFNIBEXRAGKVTLYJFHH");
    msg.range = 0.8603415238137246;

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
    msg.setTimeStamp(0.47331741671672045);
    msg.setSource(909U);
    msg.setSourceEntity(238U);
    msg.setDestination(56058U);
    msg.setDestinationEntity(250U);
    msg.req_id = 23920U;
    msg.type = 19U;
    msg.status = 42U;
    msg.info.assign("AAUPHSMLTZXF");
    msg.range = 0.8755433397717978;

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
    msg.setTimeStamp(0.3854228832976101);
    msg.setSource(5884U);
    msg.setSourceEntity(123U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(64U);
    msg.req_id = 50424U;
    msg.type = 101U;
    msg.status = 218U;
    msg.info.assign("VOAECRCWPSOSDAZOQEJMZKSVBLLPDDJTCGPZQKBZKMPHR");
    msg.range = 0.16063505306771564;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.5979917315399973);
    msg.setSource(39501U);
    msg.setSourceEntity(241U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(27U);
    msg.value = 25696;

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
    msg.setTimeStamp(0.3319483870004438);
    msg.setSource(19403U);
    msg.setSourceEntity(148U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(232U);
    msg.value = -28707;

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
    msg.setTimeStamp(0.4950622145282336);
    msg.setSource(13463U);
    msg.setSourceEntity(231U);
    msg.setDestination(58162U);
    msg.setDestinationEntity(224U);
    msg.value = -30854;

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
    msg.setTimeStamp(0.6207356211568593);
    msg.setSource(1507U);
    msg.setSourceEntity(175U);
    msg.setDestination(7515U);
    msg.setDestinationEntity(148U);
    msg.value = 0.4889958118472787;

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
    msg.setTimeStamp(0.23677779103040042);
    msg.setSource(32761U);
    msg.setSourceEntity(150U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(170U);
    msg.value = 0.35739751465228176;

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
    msg.setTimeStamp(0.022077632293201588);
    msg.setSource(14135U);
    msg.setSourceEntity(190U);
    msg.setDestination(47946U);
    msg.setDestinationEntity(36U);
    msg.value = 0.17019547768737708;

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
    msg.setTimeStamp(0.5212640551968857);
    msg.setSource(15234U);
    msg.setSourceEntity(136U);
    msg.setDestination(55398U);
    msg.setDestinationEntity(38U);
    msg.value = 0.677334837701836;

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
    msg.setTimeStamp(0.15841607599525442);
    msg.setSource(32472U);
    msg.setSourceEntity(148U);
    msg.setDestination(30822U);
    msg.setDestinationEntity(185U);
    msg.value = 0.24097164725309006;

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
    msg.setTimeStamp(0.929776307458214);
    msg.setSource(58359U);
    msg.setSourceEntity(25U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(115U);
    msg.value = 0.1736041770175618;

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
    msg.setTimeStamp(0.3963994744478002);
    msg.setSource(44793U);
    msg.setSourceEntity(100U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(227U);
    msg.validity = 20944U;
    msg.type = 107U;
    msg.utc_year = 23443U;
    msg.utc_month = 82U;
    msg.utc_day = 23U;
    msg.utc_time = 0.3342157102806873;
    msg.lat = 0.5946510096829991;
    msg.lon = 0.4816690604440049;
    msg.height = 0.8102596647894025;
    msg.satellites = 58U;
    msg.cog = 0.39768160332765645;
    msg.sog = 0.9406930400477764;
    msg.hdop = 0.684168718007117;
    msg.vdop = 0.9172954858829837;
    msg.hacc = 0.23743391207104358;
    msg.vacc = 0.05170047341710926;

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
    msg.setTimeStamp(0.6723223534397531);
    msg.setSource(43216U);
    msg.setSourceEntity(141U);
    msg.setDestination(14020U);
    msg.setDestinationEntity(225U);
    msg.validity = 19104U;
    msg.type = 126U;
    msg.utc_year = 13173U;
    msg.utc_month = 7U;
    msg.utc_day = 219U;
    msg.utc_time = 0.7490910291964303;
    msg.lat = 0.1623789023940566;
    msg.lon = 0.08724804019679544;
    msg.height = 0.5738279088383621;
    msg.satellites = 252U;
    msg.cog = 0.46533205676620826;
    msg.sog = 0.22611296381394375;
    msg.hdop = 0.2976849990475001;
    msg.vdop = 0.9486309354839154;
    msg.hacc = 0.7472305067988323;
    msg.vacc = 0.45374206814779194;

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
    msg.setTimeStamp(0.9209843737345569);
    msg.setSource(25276U);
    msg.setSourceEntity(125U);
    msg.setDestination(2033U);
    msg.setDestinationEntity(155U);
    msg.validity = 30924U;
    msg.type = 254U;
    msg.utc_year = 63657U;
    msg.utc_month = 190U;
    msg.utc_day = 215U;
    msg.utc_time = 0.42022464879301846;
    msg.lat = 0.1926774783329196;
    msg.lon = 0.9040212444884619;
    msg.height = 0.8141581782068275;
    msg.satellites = 171U;
    msg.cog = 0.08002045434440597;
    msg.sog = 0.9495158887535913;
    msg.hdop = 0.3244843559859383;
    msg.vdop = 0.5250649810892652;
    msg.hacc = 0.5644258904691213;
    msg.vacc = 0.8380403817677353;

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
    msg.setTimeStamp(0.7930873616054703);
    msg.setSource(328U);
    msg.setSourceEntity(141U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(52U);
    msg.time = 0.022449778849372493;
    msg.phi = 0.11965481129320699;
    msg.theta = 0.8472950284090026;
    msg.psi = 0.8284262990143001;
    msg.psi_magnetic = 0.13048712156448516;

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
    msg.setTimeStamp(0.7633712898118016);
    msg.setSource(56802U);
    msg.setSourceEntity(54U);
    msg.setDestination(38942U);
    msg.setDestinationEntity(117U);
    msg.time = 0.4612710712108602;
    msg.phi = 0.8287827746328013;
    msg.theta = 0.4440302194717912;
    msg.psi = 0.6364075079319277;
    msg.psi_magnetic = 0.956050778280095;

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
    msg.setTimeStamp(0.146253504151433);
    msg.setSource(49516U);
    msg.setSourceEntity(253U);
    msg.setDestination(10448U);
    msg.setDestinationEntity(204U);
    msg.time = 0.767923722712222;
    msg.phi = 0.11782880710532995;
    msg.theta = 0.6873313042328576;
    msg.psi = 0.9101762277634633;
    msg.psi_magnetic = 0.15354837499917995;

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
    msg.setTimeStamp(0.012096176719458285);
    msg.setSource(1792U);
    msg.setSourceEntity(176U);
    msg.setDestination(26393U);
    msg.setDestinationEntity(14U);
    msg.time = 0.6555539837212028;
    msg.x = 0.4231315213424748;
    msg.y = 0.040980250905334636;
    msg.z = 0.7931889755780905;
    msg.timestep = 0.9037364847897553;

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
    msg.setTimeStamp(0.5773892344121473);
    msg.setSource(22043U);
    msg.setSourceEntity(151U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(28U);
    msg.time = 0.20888589717131933;
    msg.x = 0.2641356160005047;
    msg.y = 0.8112940190506841;
    msg.z = 0.7561482710351384;
    msg.timestep = 0.5193266695233776;

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
    msg.setTimeStamp(0.312605250758331);
    msg.setSource(26001U);
    msg.setSourceEntity(89U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(181U);
    msg.time = 0.3687621936167996;
    msg.x = 0.6275961109154636;
    msg.y = 0.5742312804498141;
    msg.z = 0.896869334490628;
    msg.timestep = 0.48352748945211077;

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
    msg.setTimeStamp(0.2777340427879478);
    msg.setSource(17952U);
    msg.setSourceEntity(230U);
    msg.setDestination(59659U);
    msg.setDestinationEntity(172U);
    msg.time = 0.9044568531450866;
    msg.x = 0.25294411868458266;
    msg.y = 0.5911594332163502;
    msg.z = 0.2907535849388543;

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
    msg.setTimeStamp(0.8586073981679228);
    msg.setSource(17829U);
    msg.setSourceEntity(233U);
    msg.setDestination(36773U);
    msg.setDestinationEntity(142U);
    msg.time = 0.40343350938186373;
    msg.x = 0.4532967286703712;
    msg.y = 0.1924773917868492;
    msg.z = 0.7243065093409753;

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
    msg.setTimeStamp(0.21576014824776613);
    msg.setSource(42185U);
    msg.setSourceEntity(99U);
    msg.setDestination(35453U);
    msg.setDestinationEntity(143U);
    msg.time = 0.3860639240583479;
    msg.x = 0.9225857790413216;
    msg.y = 0.35958048875849236;
    msg.z = 0.4688420433702897;

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
    msg.setTimeStamp(0.6166292566364272);
    msg.setSource(44168U);
    msg.setSourceEntity(112U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(222U);
    msg.time = 0.6172060617510277;
    msg.x = 0.8781667944775565;
    msg.y = 0.8882543859796176;
    msg.z = 0.9789021506476583;

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
    msg.setTimeStamp(0.9961548282317197);
    msg.setSource(61183U);
    msg.setSourceEntity(225U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(123U);
    msg.time = 0.1885232527593439;
    msg.x = 0.34463457376393614;
    msg.y = 0.38251506039871463;
    msg.z = 0.9457765015701101;

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
    msg.setTimeStamp(0.9236053424449567);
    msg.setSource(17386U);
    msg.setSourceEntity(21U);
    msg.setDestination(52997U);
    msg.setDestinationEntity(62U);
    msg.time = 0.9855810408339262;
    msg.x = 0.8173737928805475;
    msg.y = 0.25479703524543784;
    msg.z = 0.392414013988996;

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
    msg.setTimeStamp(0.227409821412226);
    msg.setSource(15525U);
    msg.setSourceEntity(41U);
    msg.setDestination(40497U);
    msg.setDestinationEntity(188U);
    msg.time = 0.9988959878339966;
    msg.x = 0.8554868405331923;
    msg.y = 0.2716576219284319;
    msg.z = 0.9414174689375691;

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
    msg.setTimeStamp(0.454905468274147);
    msg.setSource(1878U);
    msg.setSourceEntity(215U);
    msg.setDestination(27704U);
    msg.setDestinationEntity(21U);
    msg.time = 0.7183567774206362;
    msg.x = 0.9364683163639904;
    msg.y = 0.6052947662534953;
    msg.z = 0.39550067749766604;

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
    msg.setTimeStamp(0.176085892138942);
    msg.setSource(12758U);
    msg.setSourceEntity(61U);
    msg.setDestination(56544U);
    msg.setDestinationEntity(79U);
    msg.time = 0.9000476928706037;
    msg.x = 0.4114269497481611;
    msg.y = 0.5675845378537437;
    msg.z = 0.6208248814214586;

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
    msg.setTimeStamp(0.32452445569519006);
    msg.setSource(55123U);
    msg.setSourceEntity(46U);
    msg.setDestination(62391U);
    msg.setDestinationEntity(228U);
    msg.validity = 14U;
    msg.x = 0.8209418021210293;
    msg.y = 0.45693567988577377;
    msg.z = 0.5343624687202373;

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
    msg.setTimeStamp(0.023373031442796233);
    msg.setSource(21261U);
    msg.setSourceEntity(183U);
    msg.setDestination(47421U);
    msg.setDestinationEntity(83U);
    msg.validity = 90U;
    msg.x = 0.9907644364077971;
    msg.y = 0.35519237462413933;
    msg.z = 0.7881971176379492;

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
    msg.setTimeStamp(0.10197806330914472);
    msg.setSource(49559U);
    msg.setSourceEntity(35U);
    msg.setDestination(15114U);
    msg.setDestinationEntity(66U);
    msg.validity = 1U;
    msg.x = 0.01272219934222818;
    msg.y = 0.827390339035163;
    msg.z = 0.6385889768141575;

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
    msg.setTimeStamp(0.3767382527578834);
    msg.setSource(44390U);
    msg.setSourceEntity(140U);
    msg.setDestination(6138U);
    msg.setDestinationEntity(44U);
    msg.validity = 70U;
    msg.x = 0.6314636620009032;
    msg.y = 0.14312313007729416;
    msg.z = 0.8016392213104894;

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
    msg.setTimeStamp(0.23540911856520486);
    msg.setSource(9422U);
    msg.setSourceEntity(172U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(113U);
    msg.validity = 229U;
    msg.x = 0.09482070081591143;
    msg.y = 0.9739813827802483;
    msg.z = 0.2576026789243383;

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
    msg.setTimeStamp(0.784167485787158);
    msg.setSource(54022U);
    msg.setSourceEntity(115U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(9U);
    msg.validity = 51U;
    msg.x = 0.954108751778378;
    msg.y = 0.04439770668668519;
    msg.z = 0.1958193559952882;

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
    msg.setTimeStamp(0.16878194688209125);
    msg.setSource(15328U);
    msg.setSourceEntity(121U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(219U);
    msg.time = 0.7227226379536148;
    msg.x = 0.935467787141939;
    msg.y = 0.18948896305213647;
    msg.z = 0.3386728223905231;

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
    msg.setTimeStamp(0.26150478972528524);
    msg.setSource(53095U);
    msg.setSourceEntity(71U);
    msg.setDestination(280U);
    msg.setDestinationEntity(72U);
    msg.time = 0.4672487045179139;
    msg.x = 0.6209621919141665;
    msg.y = 0.22661979707791946;
    msg.z = 0.24646662439168343;

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
    msg.setTimeStamp(0.5254508361838179);
    msg.setSource(22037U);
    msg.setSourceEntity(111U);
    msg.setDestination(23580U);
    msg.setDestinationEntity(167U);
    msg.time = 0.0798979755594772;
    msg.x = 0.19034885924845124;
    msg.y = 0.861775617644857;
    msg.z = 0.45620284966009084;

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
    msg.setTimeStamp(0.17790962572895208);
    msg.setSource(37763U);
    msg.setSourceEntity(61U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(80U);
    msg.validity = 220U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9414425840851379;
    tmp_msg_0.y = 0.6912263270433423;
    tmp_msg_0.z = 0.6949445106645981;
    tmp_msg_0.phi = 0.3848983297370273;
    tmp_msg_0.theta = 0.9290165724024263;
    tmp_msg_0.psi = 0.6815690446638103;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.11104295849540402;
    tmp_msg_1.beam_height = 0.5613174389005324;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3616096999014736;

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
    msg.setTimeStamp(0.4704885113658953);
    msg.setSource(7277U);
    msg.setSourceEntity(47U);
    msg.setDestination(20274U);
    msg.setDestinationEntity(105U);
    msg.validity = 135U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.35433454481210447;
    tmp_msg_0.y = 0.39552277894589594;
    tmp_msg_0.z = 0.7451367048527243;
    tmp_msg_0.phi = 0.0938089460224929;
    tmp_msg_0.theta = 0.42481389686960025;
    tmp_msg_0.psi = 0.809898056937282;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3332335826145295;

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
    msg.setTimeStamp(0.7298979391773681);
    msg.setSource(878U);
    msg.setSourceEntity(189U);
    msg.setDestination(20511U);
    msg.setDestinationEntity(212U);
    msg.validity = 171U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9801505280136895;
    tmp_msg_0.y = 0.678432294348623;
    tmp_msg_0.z = 0.0016247645379755538;
    tmp_msg_0.phi = 0.13798265427481737;
    tmp_msg_0.theta = 0.5405222710608645;
    tmp_msg_0.psi = 0.0029305685801794823;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9815161445739993;

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
    msg.setTimeStamp(0.625964192058301);
    msg.setSource(44233U);
    msg.setSourceEntity(45U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(17U);
    msg.value = 0.35361553496499676;

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
    msg.setTimeStamp(0.22011098288004016);
    msg.setSource(11873U);
    msg.setSourceEntity(131U);
    msg.setDestination(13524U);
    msg.setDestinationEntity(234U);
    msg.value = 0.919446845169316;

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
    msg.setTimeStamp(0.22649425830703018);
    msg.setSource(36545U);
    msg.setSourceEntity(2U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9422376036553775;

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
    msg.setTimeStamp(0.28802773117285696);
    msg.setSource(2697U);
    msg.setSourceEntity(228U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3969860455371296;

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
    msg.setTimeStamp(0.18099304010522177);
    msg.setSource(14308U);
    msg.setSourceEntity(130U);
    msg.setDestination(22702U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9414487188774197;

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
    msg.setTimeStamp(0.8656892887953459);
    msg.setSource(13846U);
    msg.setSourceEntity(208U);
    msg.setDestination(38524U);
    msg.setDestinationEntity(217U);
    msg.value = 0.6943081088602908;

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
    msg.setTimeStamp(0.4558737967082519);
    msg.setSource(825U);
    msg.setSourceEntity(199U);
    msg.setDestination(49416U);
    msg.setDestinationEntity(119U);
    msg.value = 0.28811017081969925;

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
    msg.setTimeStamp(0.23272302583346882);
    msg.setSource(43852U);
    msg.setSourceEntity(52U);
    msg.setDestination(21323U);
    msg.setDestinationEntity(251U);
    msg.value = 0.2723607252410175;

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
    msg.setTimeStamp(0.8972545318977131);
    msg.setSource(48013U);
    msg.setSourceEntity(57U);
    msg.setDestination(55556U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6068457711032931;

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
    msg.setTimeStamp(0.2002587606255508);
    msg.setSource(6147U);
    msg.setSourceEntity(242U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(114U);
    msg.value = 0.1931112992029712;

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
    msg.setTimeStamp(0.2712848061319211);
    msg.setSource(49050U);
    msg.setSourceEntity(151U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8071708678171206;

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
    msg.setTimeStamp(0.4103260679865398);
    msg.setSource(34658U);
    msg.setSourceEntity(192U);
    msg.setDestination(42050U);
    msg.setDestinationEntity(48U);
    msg.value = 0.21079854368587025;

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
    msg.setTimeStamp(0.18507549128656975);
    msg.setSource(32643U);
    msg.setSourceEntity(17U);
    msg.setDestination(16863U);
    msg.setDestinationEntity(156U);
    msg.value = 0.43924925813042137;

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
    msg.setTimeStamp(0.5016493340995329);
    msg.setSource(18045U);
    msg.setSourceEntity(122U);
    msg.setDestination(3971U);
    msg.setDestinationEntity(116U);
    msg.value = 0.2146244688308313;

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
    msg.setTimeStamp(0.23790876438731157);
    msg.setSource(40608U);
    msg.setSourceEntity(225U);
    msg.setDestination(44941U);
    msg.setDestinationEntity(27U);
    msg.value = 0.35977864363689194;

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
    msg.setTimeStamp(0.26887950214114686);
    msg.setSource(37830U);
    msg.setSourceEntity(200U);
    msg.setDestination(997U);
    msg.setDestinationEntity(183U);
    msg.value = 0.548270644354037;

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
    msg.setTimeStamp(0.27108586661290146);
    msg.setSource(51729U);
    msg.setSourceEntity(169U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(248U);
    msg.value = 0.3312257564023299;

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
    msg.setTimeStamp(0.17570468091997182);
    msg.setSource(63758U);
    msg.setSourceEntity(247U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(227U);
    msg.value = 0.827680532088445;

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
    msg.setTimeStamp(0.768210442813784);
    msg.setSource(7880U);
    msg.setSourceEntity(39U);
    msg.setDestination(378U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5059140672829205;

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
    msg.setTimeStamp(0.15471695342410896);
    msg.setSource(4036U);
    msg.setSourceEntity(98U);
    msg.setDestination(24267U);
    msg.setDestinationEntity(228U);
    msg.value = 0.15648742608575472;

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
    msg.setTimeStamp(0.5853885399068838);
    msg.setSource(12017U);
    msg.setSourceEntity(170U);
    msg.setDestination(9189U);
    msg.setDestinationEntity(181U);
    msg.value = 0.48235304019699143;

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
    msg.setTimeStamp(0.5280257456685439);
    msg.setSource(48595U);
    msg.setSourceEntity(147U);
    msg.setDestination(9384U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6913445483912845;

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
    msg.setTimeStamp(0.7996751934069899);
    msg.setSource(57884U);
    msg.setSourceEntity(192U);
    msg.setDestination(29234U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9164383420344173;

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
    msg.setTimeStamp(0.40380728399977617);
    msg.setSource(34341U);
    msg.setSourceEntity(151U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(194U);
    msg.value = 0.471431438235672;

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
    msg.setTimeStamp(0.9628166931280198);
    msg.setSource(45729U);
    msg.setSourceEntity(8U);
    msg.setDestination(53844U);
    msg.setDestinationEntity(218U);
    msg.direction = 0.48134482419528846;
    msg.speed = 0.01733043345732055;
    msg.turbulence = 0.5368436617571044;

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
    msg.setTimeStamp(0.11794367998762367);
    msg.setSource(33576U);
    msg.setSourceEntity(176U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(138U);
    msg.direction = 0.333527226917923;
    msg.speed = 0.525365553084953;
    msg.turbulence = 0.2867047174563646;

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
    msg.setTimeStamp(0.6510634067029152);
    msg.setSource(39734U);
    msg.setSourceEntity(23U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(6U);
    msg.direction = 0.7969819592863754;
    msg.speed = 0.06316087526539005;
    msg.turbulence = 0.15999838493138108;

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
    msg.setTimeStamp(0.35847800838008237);
    msg.setSource(45241U);
    msg.setSourceEntity(105U);
    msg.setDestination(29209U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0018363359003624735;

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
    msg.setTimeStamp(0.43974016288073325);
    msg.setSource(23474U);
    msg.setSourceEntity(96U);
    msg.setDestination(29550U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8413047647559436;

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
    msg.setTimeStamp(0.9040539303834403);
    msg.setSource(11209U);
    msg.setSourceEntity(14U);
    msg.setDestination(26430U);
    msg.setDestinationEntity(2U);
    msg.value = 0.9995521823406226;

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
    msg.setTimeStamp(0.6862675419042488);
    msg.setSource(54447U);
    msg.setSourceEntity(243U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(186U);
    msg.value.assign("LZUBHKVUIHCOZVMYPFQRKOKUEJXGAFYRDDZRUUYFDEDWCXGQYCNHWKTNOJMZ");

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
    msg.setTimeStamp(0.7239227619199511);
    msg.setSource(56437U);
    msg.setSourceEntity(24U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(81U);
    msg.value.assign("KRKQNFFDVSKWEARCWHPTQSSBSRPDXYLTNJEZMACYXNJKMJMUJRHMICMHXEHWCXIZQPZXTUQGZCWGKLURGKASGFLIWFLAVKWGTFUSIRHEQDVOCKGEYIQNNLJVZAFSAODGZMLKNTDVFANWTCVLAVWXBXIVBORFXYYQBXYTPYPNLBGSVDLPIPQFDTGODEIMECRMERMCHJBOGRJZTOBSWLBD");

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
    msg.setTimeStamp(0.6008558451454589);
    msg.setSource(58563U);
    msg.setSourceEntity(137U);
    msg.setDestination(2930U);
    msg.setDestinationEntity(227U);
    msg.value.assign("SRFMJPWHNNLBAMZLOVYYDEHIVSSNUMKFQTFPUYZBTUBRNPKWNRAYWIWSBXVECNVHESTUVIBEQXKPOPFVWNGWMXKKDWLQGCJHXRRTEWSGSUOZEEEPHUHVTO");

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
    msg.setTimeStamp(0.3553487627266868);
    msg.setSource(24062U);
    msg.setSourceEntity(191U);
    msg.setDestination(6669U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {-100, -65, 1, 43, 34, 117, -61, 37, 9, -35, -63, -83, -52, -8, -79, 42, -5, -42, 45, 65, -75, 96, 37, 70, 3, 116, 44, -127, -59, 50, 50, -7, -51, 73, -33, 7, -63, -30, 5, -55, -75, -116, -20, -64, 56, 108, 101, -80, -79, -13, 89, -30, -63, -128, -91, -101, 99, 63, 60, 46, 62, 67, 8, 113, -30, -87, -41, 23, 104, -17, 75, 49, -91, -7, 109, 54, -40, 22, -74, 90, 4, 33, 16, -63, -62, -104, -117, 58, 70, 56, -1, 3};
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
    msg.setTimeStamp(0.45696842044949926);
    msg.setSource(38113U);
    msg.setSourceEntity(131U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(33U);
    const char tmp_msg_0[] = {83, -43, 37, 99, -127, -10, -75, -87, 98, 26, 8, -3, 71, -38, 29, -11, 93, -71, 60, -55, 84, 80, 112, 72, -67, 98, -98, 71, 82, -51, -22, -82, 31, 55, 76, 122, -38, 39, -106, 125, -88, -44, -2, -33, 8, 0, 77, -126, 87, -67, -23, -84, 14, -60, -15, 71, -67, -114, -5, 76, 16, 63, 50, -120, -72, 34, 82, 55, -84, 113, -100, -116, -76, -93, -7, -68, 55, 56, 99, 112, 64, -121, -59, 14, 121, 37, 114, 126, -30, -1, -76, 84, 37, 88, 84, -31, 48, -105, 115, 23, -30, -119, 112, -45, -7, 8, 115, 0, -53, -101, -114, -102, -46, -127, 14, -15, 59, -58, -102, 37, -53, -34, 6, 58, 99, 77, -75, -67, 57, 61, -119, 65, 111, -74, 123, -1, 72, 59, 14, -11, -33, -74, -25, -10, -37, -105, -61, 63, -4, 65, -88, -34, 102, -85, 102, 52, -95, 85, -111, -26, -85, -118, -27, -75, -72, 11, 88, 61, -103, -109, 80, 30, 87, 96, 26, 35, 121, -42, 124, -12, -11, 91, -2, -128, -1, 43, -79, -94};
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
    msg.setTimeStamp(0.5531789899331733);
    msg.setSource(35168U);
    msg.setSourceEntity(26U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {93, 10, -33, 37, 83, 69, 101, 25, 116, -35, -83, -39, 43, -88, 109, -83, -90, -87, -5, -118, 114, 14, -37, -52, 122, -48, -32, 117, 83, -66, 9, 66, 121, -70, -48, -109, -14, 85, -125, -55, 89, -82, -115, 94, 85, 71, -48, 25, 14, -118, 65, 0, -61, 84, -12, 50, 33, 68, -49, 70, -83, 93, 104, -108, 4, -111, -77, 111, -12, 120, 61, -43, -35, 21, 58, -105, 110, -16, 71, -121, 74, -63, -63, 27, -85, -4, 13, -57, -15, 36, -17, 79, 69, 51, -94, 118, 35, 83, 88, -126, -101, -73, 63, -87, -59, 33, 121, -55, -98, 80, -54, -44, 37, 81, 4, 122, 55, -122, -30, -65, -108, -21, -66, 95, -68, -8, 21, 87, 33, -57, 2, -36, 76, 77, 60, -45, 45, 54, 118, -67, -116, 0, -60, 47, -69, 49, -109, 35, -55, -100, 11, 93, 125, -64, 44, 40, 83, -28, 34, 47, -33, -107, 64, 88, -117, -80, 47, 4, 18, -90, 27, 43, -48, 54, -49, -32, 43, -79, 34, 21, -78, 19, 39, 38, 68, 5, 7, -120, 45, -83, -10, -84, 57, -37, -28, -91, -54, 75, 102, -66, -84, 114, -27, -52, -118, -6, -110, 104, -49, 38, 14, 118, -47, 105, 14, 10, -78, -14, 19, -75, 73, -4};
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
    msg.setTimeStamp(0.32487088529314223);
    msg.setSource(25246U);
    msg.setSourceEntity(150U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(116U);
    msg.value = 0.12277193042754508;

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
    msg.setTimeStamp(0.40929920108110107);
    msg.setSource(63385U);
    msg.setSourceEntity(230U);
    msg.setDestination(42761U);
    msg.setDestinationEntity(248U);
    msg.value = 0.150838780149527;

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
    msg.setTimeStamp(0.8154318295414568);
    msg.setSource(15434U);
    msg.setSourceEntity(95U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7991516377707454;

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
    msg.setTimeStamp(0.7602126156388835);
    msg.setSource(63140U);
    msg.setSourceEntity(15U);
    msg.setDestination(32414U);
    msg.setDestinationEntity(162U);
    msg.type = 90U;
    msg.frequency = 1589026087U;
    msg.min_range = 33782U;
    msg.max_range = 42281U;
    msg.bits_per_point = 23U;
    msg.scale_factor = 0.29685146931876316;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.23251695078949797;
    tmp_msg_0.beam_height = 0.847865321097684;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {10, 39, -42, 51, -101, 107, -36, -41, 86, -20, 59, 46, 100, 123, -72, -93, 54, -77, 11, 13, -6, 48, -114, -70, -62, -117, -63, 90, -16, -31, 111, -46, 43, -95, -111, 18, -26, 16, 4, -112, 61, -112, -103, -90, 81, 82, 108, -108, 120, 73, -118, -82, 60, -14, -59, 75, 125, -21, 39, -76, 27, -25, -126, -118, 110, 38, -26, 97, 126, -94, 79, 51, 125, 30, 12, 46, 22, -123, -51, -22, 68, -114, 83, -94, -62, -55, -96, 65, 62, -7, 123, 122, 24, -54, 114, 71, -28, 71, 106, -39, 39, 60, -31, -25, -57, -100, 78, 61, 11, -48, 66, -64, -102, 102, -112, 16, -6, 74, 93, 125, 117, -1, -59, -28, 102, -19, -103, -60, 29, 100, -117, -71, -14, 112, -8, -23, -45, -19, 101, -27, 82, -124, -46, -91, -27, 24, 75, 93, 68, 42, -101, -51, -79, 1, 112, -5, -15, 36, -27, -49, 124, -29, -92, -84, -106, -34, 84, 27, -72, -43, -119, -60, -98, 120, 51, 15, -29, 59, -82, -67, 83, 18, 43, -72, -86, 70, -93, -114, 81, -17, 62, 65, -47, -126, -108, 56, -98, -74, -68, -99, 16, -6, 71, 41, -89, 29, 125, 41, -48, -49, -17, 109, -33};
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
    msg.setTimeStamp(0.8852391860827241);
    msg.setSource(44367U);
    msg.setSourceEntity(230U);
    msg.setDestination(21562U);
    msg.setDestinationEntity(103U);
    msg.type = 254U;
    msg.frequency = 3748898592U;
    msg.min_range = 41464U;
    msg.max_range = 14570U;
    msg.bits_per_point = 229U;
    msg.scale_factor = 0.09689922922506333;
    const char tmp_msg_0[] = {109, -30, 15, 28, -2, 15, 53, -36, 45, 29, 82, -72, -70, -94, 91, 120, 102, -53, -28, 97, 13, 92, -66, 52, 126, 106, -115, 64, -3, -96, 16, 97, 40, -12, 119, 97, -51, 108, 109, -92, 111, 87, -54, 3, 74, -35, -14, -93, -72, -47, 121, 88, -77, -49, -123, -1, 37, -37, -21, -48, -105, 13, 86, 24, 36, -68, -45, -85, 71, -26, -95, -46, -73, 44, -94, 101, 44, -106, -45, -55, 58, 22, 101, -91, -6, 60, 69, 118, 13, 64, -36, 9, -85, -44, -20, -43, -50, -90, -114, -58, 65, 110, -70, -109, -44, 113, -110, -29, 73, 13, 20, 76, 39, 4, -50, -98, -19, -115, -121, -116, 92, -35, -11, -126, 25, -17, -121, -70, -76, -115, -83, -85, 23, -52, -78, 49, 102, -14, 38, -38, -64, 66, 55, 49, 3, -46, -89, -71, 49, 21, -37, -81, 122, 115, 117, -19, -94, -81, -12, 44};
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
    msg.setTimeStamp(0.7208254209568549);
    msg.setSource(39146U);
    msg.setSourceEntity(241U);
    msg.setDestination(44676U);
    msg.setDestinationEntity(64U);
    msg.type = 35U;
    msg.frequency = 251447564U;
    msg.min_range = 65443U;
    msg.max_range = 58880U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.23094787905037273;
    const char tmp_msg_0[] = {84, -33, -87, 12, -49, -57, 120, -66, 83, 18, -62, 67, -9, -68, -85, 85, 98, 63, -39, 33, -96, 53, -85, -96, 107, -69, -65, 34, 34, 98, -83, -124, 46, 23, 125, -51, -67, 30, 59, 114, -71, 59, -41, -87, 28, -85, -61, 117, -43, 83, -107, -28, -120, 52, 33};
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
    msg.setTimeStamp(0.7519736538227343);
    msg.setSource(3637U);
    msg.setSourceEntity(204U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.8055573563659603);
    msg.setSource(22686U);
    msg.setSourceEntity(90U);
    msg.setDestination(51934U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.6455862316456732);
    msg.setSource(12360U);
    msg.setSourceEntity(153U);
    msg.setDestination(21970U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.16893061124974929);
    msg.setSource(27867U);
    msg.setSourceEntity(119U);
    msg.setDestination(59548U);
    msg.setDestinationEntity(198U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.3042314353177876);
    msg.setSource(6122U);
    msg.setSourceEntity(152U);
    msg.setDestination(22520U);
    msg.setDestinationEntity(125U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.9418570146096168);
    msg.setSource(60911U);
    msg.setSourceEntity(208U);
    msg.setDestination(42685U);
    msg.setDestinationEntity(138U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.6211090199951974);
    msg.setSource(46201U);
    msg.setSourceEntity(204U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(160U);
    msg.value = 0.19247787539338745;
    msg.confidence = 0.8416933853514554;
    msg.opmodes.assign("BMCSZGERWABJIVDAXFNAHVZBMBAIVAJNVJVDDMRQWSYROKEOQKHPHLQYFOWMOPHAGDFKGLQKTIWOCSRGBHLVUGCCVHUIXLKIZDDOFWANTZQHNWXIWUNRGMMWQXQJJMKUXPUTJHZYIQYKZSZEFBRTLNNTGPOXYDSPMBKZCKWLSPPYYLDMNMLKXFLJJWPESETRVOSGQTUZCIDTUXCHOVSPIRFCYFGZRESEBTEFDAHTIFAUJQYBVROUJCUEXE");

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
    msg.setTimeStamp(0.7286743815295876);
    msg.setSource(59304U);
    msg.setSourceEntity(136U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0942174608652695;
    msg.confidence = 0.5562117699680402;
    msg.opmodes.assign("UOVHCXBVIRRJSPDPUOHUZWREFTCSWFMIRUKBFWLLOTSNCNQXIZNQGEKRJPHALZXJSMQZLDHUYEYJFTQPFIDOQXQPSBBEILJQHUDUZCLOZGRVPEYEKEVU");

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
    msg.setTimeStamp(0.24710521864215684);
    msg.setSource(1093U);
    msg.setSourceEntity(128U);
    msg.setDestination(40243U);
    msg.setDestinationEntity(100U);
    msg.value = 0.24049974538295826;
    msg.confidence = 0.8403604832973598;
    msg.opmodes.assign("SPLLXPUZRKNGNEJHOYVDMTWAUBLNCJGAVTFZWMOBUDVYTCAVIWHIZKMOFXFMCCZQOXRJIAFSNXTFGYDQFYKRFDDYQZIZBZWISWBSZHOMTJQLVBUAMNWSGFBTLRQVPRIUNPTCCDPWKHFEPNQCMVSQYRHGOHLFPUYQJGGOOTJPUAXGIXEVELNEZSHHAILKNTJSXKGKLXUJAAIRKEAVUBMKZCWEQBDSBWIGJJEKDBRMTMC");

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
    msg.setTimeStamp(0.8943500228798262);
    msg.setSource(32802U);
    msg.setSourceEntity(61U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(119U);
    msg.itow = 2113398895U;
    msg.lat = 0.011368002819246659;
    msg.lon = 0.7932551363305723;
    msg.height_ell = 0.7533113784717305;
    msg.height_sea = 0.8885750721470341;
    msg.hacc = 0.7307097417840945;
    msg.vacc = 0.4052447266875946;
    msg.vel_n = 0.7436227400446075;
    msg.vel_e = 0.8530577363124944;
    msg.vel_d = 0.014350326503215216;
    msg.speed = 0.1154511377775378;
    msg.gspeed = 0.3326293857524618;
    msg.heading = 0.03871929258661588;
    msg.sacc = 0.5129680940664638;
    msg.cacc = 0.6295581959478942;

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
    msg.setTimeStamp(0.1635151992508761);
    msg.setSource(8243U);
    msg.setSourceEntity(166U);
    msg.setDestination(37548U);
    msg.setDestinationEntity(225U);
    msg.itow = 295850077U;
    msg.lat = 0.7962595519720316;
    msg.lon = 0.3302845362138598;
    msg.height_ell = 0.1833822017528488;
    msg.height_sea = 0.7708011203420108;
    msg.hacc = 0.2922506894561311;
    msg.vacc = 0.24473335548430597;
    msg.vel_n = 0.7714931201631493;
    msg.vel_e = 0.13734977399780068;
    msg.vel_d = 0.18063076790744093;
    msg.speed = 0.9827125224128763;
    msg.gspeed = 0.3671116970182188;
    msg.heading = 0.48233368125323905;
    msg.sacc = 0.36807376493978383;
    msg.cacc = 0.02495760269119096;

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
    msg.setTimeStamp(0.7417083366535698);
    msg.setSource(44599U);
    msg.setSourceEntity(97U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(156U);
    msg.itow = 4160459467U;
    msg.lat = 0.4909069075804887;
    msg.lon = 0.32562611766616123;
    msg.height_ell = 0.21008673288829371;
    msg.height_sea = 0.6860840495212819;
    msg.hacc = 0.7849414069365234;
    msg.vacc = 0.06438275229916735;
    msg.vel_n = 0.39740202702099625;
    msg.vel_e = 0.5831932015808609;
    msg.vel_d = 0.15968873299958575;
    msg.speed = 0.22664701984298352;
    msg.gspeed = 0.15851019947391243;
    msg.heading = 0.4858075722105125;
    msg.sacc = 0.09864142794873298;
    msg.cacc = 0.9402545288778349;

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
    msg.setTimeStamp(0.12225551341432195);
    msg.setSource(47887U);
    msg.setSourceEntity(151U);
    msg.setDestination(31270U);
    msg.setDestinationEntity(43U);
    msg.id = 92U;
    msg.value = 0.26150004073907296;

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
    msg.setTimeStamp(0.9849132565413541);
    msg.setSource(31567U);
    msg.setSourceEntity(117U);
    msg.setDestination(41727U);
    msg.setDestinationEntity(146U);
    msg.id = 8U;
    msg.value = 0.2988689903463533;

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
    msg.setTimeStamp(0.5843380215438451);
    msg.setSource(55530U);
    msg.setSourceEntity(54U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(219U);
    msg.id = 229U;
    msg.value = 0.3466510082441381;

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
    msg.setTimeStamp(0.2427269005683006);
    msg.setSource(40376U);
    msg.setSourceEntity(152U);
    msg.setDestination(64375U);
    msg.setDestinationEntity(191U);
    msg.x = 0.708659618431789;
    msg.y = 0.5690156195181822;
    msg.z = 0.551287420774747;
    msg.phi = 0.7416868663862025;
    msg.theta = 0.9495011921860134;
    msg.psi = 0.41122803781655204;

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
    msg.setTimeStamp(0.6542461787085913);
    msg.setSource(12751U);
    msg.setSourceEntity(228U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(2U);
    msg.x = 0.6724280171078201;
    msg.y = 0.5747688663427366;
    msg.z = 0.6646848109532192;
    msg.phi = 0.1455315034711624;
    msg.theta = 0.45317954767785673;
    msg.psi = 0.8624820708901081;

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
    msg.setTimeStamp(0.6761197879677527);
    msg.setSource(42252U);
    msg.setSourceEntity(243U);
    msg.setDestination(27762U);
    msg.setDestinationEntity(149U);
    msg.x = 0.9839055514080884;
    msg.y = 0.34614290602128783;
    msg.z = 0.1933695088184949;
    msg.phi = 0.7946709102996904;
    msg.theta = 0.7823331948646209;
    msg.psi = 0.6163883067986174;

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
    msg.setTimeStamp(0.38609393565407246);
    msg.setSource(3019U);
    msg.setSourceEntity(227U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.12082721982416766;
    msg.beam_height = 0.791436551976777;

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
    msg.setTimeStamp(0.7746810910311388);
    msg.setSource(19129U);
    msg.setSourceEntity(58U);
    msg.setDestination(50645U);
    msg.setDestinationEntity(10U);
    msg.beam_width = 0.10766473291136891;
    msg.beam_height = 0.9332799332616342;

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
    msg.setTimeStamp(0.7516379554206429);
    msg.setSource(18743U);
    msg.setSourceEntity(167U);
    msg.setDestination(65298U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.6159148348329552;
    msg.beam_height = 0.6463136465797924;

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
    msg.setTimeStamp(0.6529803075053672);
    msg.setSource(44192U);
    msg.setSourceEntity(40U);
    msg.setDestination(56621U);
    msg.setDestinationEntity(246U);
    msg.sane = 103U;

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
    msg.setTimeStamp(0.6589641312617176);
    msg.setSource(39229U);
    msg.setSourceEntity(122U);
    msg.setDestination(62384U);
    msg.setDestinationEntity(183U);
    msg.sane = 86U;

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
    msg.setTimeStamp(0.05771144953868956);
    msg.setSource(14294U);
    msg.setSourceEntity(29U);
    msg.setDestination(56020U);
    msg.setDestinationEntity(246U);
    msg.sane = 224U;

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
    msg.setTimeStamp(0.2702203832486134);
    msg.setSource(33889U);
    msg.setSourceEntity(151U);
    msg.setDestination(32762U);
    msg.setDestinationEntity(81U);
    msg.value = 0.09336110993649505;

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
    msg.setTimeStamp(0.8123680258982413);
    msg.setSource(2926U);
    msg.setSourceEntity(166U);
    msg.setDestination(26828U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6858332594424111;

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
    msg.setTimeStamp(0.7115272743891518);
    msg.setSource(9209U);
    msg.setSourceEntity(176U);
    msg.setDestination(49910U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5178577029973976;

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
    msg.setTimeStamp(0.9432405820959218);
    msg.setSource(58127U);
    msg.setSourceEntity(181U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9981342273078175;

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
    msg.setTimeStamp(0.08193255807811728);
    msg.setSource(50644U);
    msg.setSourceEntity(17U);
    msg.setDestination(50934U);
    msg.setDestinationEntity(90U);
    msg.value = 0.29278335236892816;

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
    msg.setTimeStamp(0.8238761723368249);
    msg.setSource(44941U);
    msg.setSourceEntity(60U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(55U);
    msg.value = 0.95528518716722;

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
    msg.setTimeStamp(0.8934277984157957);
    msg.setSource(20470U);
    msg.setSourceEntity(108U);
    msg.setDestination(54087U);
    msg.setDestinationEntity(33U);
    msg.value = 0.3375853632740444;

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
    msg.setTimeStamp(0.5038770039354674);
    msg.setSource(9601U);
    msg.setSourceEntity(188U);
    msg.setDestination(41164U);
    msg.setDestinationEntity(172U);
    msg.value = 0.6523140606456588;

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
    msg.setTimeStamp(0.29893448316994264);
    msg.setSource(49587U);
    msg.setSourceEntity(29U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5927872589094116;

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
    msg.setTimeStamp(0.39885860382361793);
    msg.setSource(20315U);
    msg.setSourceEntity(69U);
    msg.setDestination(6010U);
    msg.setDestinationEntity(233U);
    msg.value = 0.7097886617339453;

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
    msg.setTimeStamp(0.25131975007143215);
    msg.setSource(39347U);
    msg.setSourceEntity(85U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(8U);
    msg.value = 0.32013889674639995;

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
    msg.setTimeStamp(0.12449934426612208);
    msg.setSource(3090U);
    msg.setSourceEntity(189U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(30U);
    msg.value = 0.2990655516684968;

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
    msg.setTimeStamp(0.3506024376261425);
    msg.setSource(64239U);
    msg.setSourceEntity(140U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9214074485704062;

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
    msg.setTimeStamp(0.5813293197295508);
    msg.setSource(24229U);
    msg.setSourceEntity(159U);
    msg.setDestination(62046U);
    msg.setDestinationEntity(209U);
    msg.value = 0.04085736662437223;

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
    msg.setTimeStamp(0.8026658436641921);
    msg.setSource(8221U);
    msg.setSourceEntity(180U);
    msg.setDestination(36303U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5100741717935517;

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
    msg.setTimeStamp(0.7852468999325924);
    msg.setSource(35208U);
    msg.setSourceEntity(201U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(15U);
    msg.value = 0.1259183752341414;

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
    msg.setTimeStamp(0.47711009117391956);
    msg.setSource(6702U);
    msg.setSourceEntity(44U);
    msg.setDestination(14131U);
    msg.setDestinationEntity(179U);
    msg.value = 0.44818703071941823;

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
    msg.setTimeStamp(0.31198904107375847);
    msg.setSource(30365U);
    msg.setSourceEntity(224U);
    msg.setDestination(16584U);
    msg.setDestinationEntity(144U);
    msg.value = 0.7306360627141885;

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
    msg.setTimeStamp(0.9757456823508959);
    msg.setSource(59362U);
    msg.setSourceEntity(240U);
    msg.setDestination(23574U);
    msg.setDestinationEntity(29U);
    msg.value = 0.24088684295362606;

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
    msg.setTimeStamp(0.235047936890321);
    msg.setSource(59232U);
    msg.setSourceEntity(118U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7748913780246026;

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
    msg.setTimeStamp(0.2169385515433776);
    msg.setSource(58271U);
    msg.setSourceEntity(183U);
    msg.setDestination(48953U);
    msg.setDestinationEntity(208U);
    msg.value = 0.24231746580568048;

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
    msg.setTimeStamp(0.7368024026606197);
    msg.setSource(61U);
    msg.setSourceEntity(111U);
    msg.setDestination(31054U);
    msg.setDestinationEntity(1U);
    msg.value = 0.20526885017059338;

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
    msg.setTimeStamp(0.4251634681310229);
    msg.setSource(36924U);
    msg.setSourceEntity(86U);
    msg.setDestination(9344U);
    msg.setDestinationEntity(126U);
    msg.value = 0.7676306021102779;

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
    msg.setTimeStamp(0.4724274776056835);
    msg.setSource(32131U);
    msg.setSourceEntity(183U);
    msg.setDestination(57117U);
    msg.setDestinationEntity(160U);
    msg.value = 0.516524887919042;

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
    msg.setTimeStamp(0.47427500720956417);
    msg.setSource(33465U);
    msg.setSourceEntity(162U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(112U);
    msg.validity = 15497U;
    msg.type = 163U;
    msg.tow = 2787861760U;
    msg.base_lat = 0.15265373322086828;
    msg.base_lon = 0.6203409496865016;
    msg.base_height = 0.12584782137865325;
    msg.n = 0.7626010817861418;
    msg.e = 0.12081082082172356;
    msg.d = 0.8450477436519624;
    msg.v_n = 0.9591955881936802;
    msg.v_e = 0.95789858247613;
    msg.v_d = 0.06542767658292126;
    msg.satellites = 41U;
    msg.iar_hyp = 63211U;
    msg.iar_ratio = 0.25785159666594615;

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
    msg.setTimeStamp(0.42123986167410865);
    msg.setSource(29204U);
    msg.setSourceEntity(119U);
    msg.setDestination(32148U);
    msg.setDestinationEntity(122U);
    msg.validity = 27484U;
    msg.type = 74U;
    msg.tow = 376015142U;
    msg.base_lat = 0.015277667357260105;
    msg.base_lon = 0.1377141696827161;
    msg.base_height = 0.28802017661485335;
    msg.n = 0.4347860958958716;
    msg.e = 0.06913213828246212;
    msg.d = 0.41888414627352577;
    msg.v_n = 0.8359228145042585;
    msg.v_e = 0.5291501244964536;
    msg.v_d = 0.6579451438431735;
    msg.satellites = 227U;
    msg.iar_hyp = 47047U;
    msg.iar_ratio = 0.09846302898981751;

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
    msg.setTimeStamp(0.21932858908080288);
    msg.setSource(25010U);
    msg.setSourceEntity(238U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(97U);
    msg.validity = 15928U;
    msg.type = 156U;
    msg.tow = 3993663889U;
    msg.base_lat = 0.6431776770487491;
    msg.base_lon = 0.9431714769440692;
    msg.base_height = 0.28840312558749204;
    msg.n = 0.5544515446441093;
    msg.e = 0.814297320088154;
    msg.d = 0.17479817710392231;
    msg.v_n = 0.8704587904783736;
    msg.v_e = 0.6776142114608253;
    msg.v_d = 0.388200091319588;
    msg.satellites = 64U;
    msg.iar_hyp = 59613U;
    msg.iar_ratio = 0.36967106964464036;

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
    msg.setTimeStamp(0.2876648008687863);
    msg.setSource(20424U);
    msg.setSourceEntity(32U);
    msg.setDestination(36498U);
    msg.setDestinationEntity(70U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6229794302671682;
    tmp_msg_0.lon = 0.2125137876485772;
    tmp_msg_0.height = 0.1073677323154485;
    tmp_msg_0.x = 0.5472363352005476;
    tmp_msg_0.y = 0.4875918790953565;
    tmp_msg_0.z = 0.5566351893369451;
    tmp_msg_0.phi = 0.3268369223037487;
    tmp_msg_0.theta = 0.873772440419288;
    tmp_msg_0.psi = 0.27616363930700927;
    tmp_msg_0.u = 0.8301560465381024;
    tmp_msg_0.v = 0.1822849400176626;
    tmp_msg_0.w = 0.26234734837135554;
    tmp_msg_0.vx = 0.7612949766828242;
    tmp_msg_0.vy = 0.6742368125637166;
    tmp_msg_0.vz = 0.6045592652862644;
    tmp_msg_0.p = 0.18151229190836637;
    tmp_msg_0.q = 0.08817702149446882;
    tmp_msg_0.r = 0.7094800206380777;
    tmp_msg_0.depth = 0.024871483252625892;
    tmp_msg_0.alt = 0.861527456150036;
    msg.state.set(tmp_msg_0);
    msg.type = 52U;

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
    msg.setTimeStamp(0.11313319591957549);
    msg.setSource(49044U);
    msg.setSourceEntity(14U);
    msg.setDestination(14973U);
    msg.setDestinationEntity(229U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8431553840288374;
    tmp_msg_0.lon = 0.10161211890562605;
    tmp_msg_0.height = 0.749786359713849;
    tmp_msg_0.x = 0.06543791444514602;
    tmp_msg_0.y = 0.3736352280763131;
    tmp_msg_0.z = 0.5315405089541319;
    tmp_msg_0.phi = 0.8842469821738302;
    tmp_msg_0.theta = 0.0789826610298594;
    tmp_msg_0.psi = 0.016383309776705768;
    tmp_msg_0.u = 0.32582936273449936;
    tmp_msg_0.v = 0.2481530041315667;
    tmp_msg_0.w = 0.7302451064227844;
    tmp_msg_0.vx = 0.6811503074907759;
    tmp_msg_0.vy = 0.23622041988172626;
    tmp_msg_0.vz = 0.15446886831288964;
    tmp_msg_0.p = 0.09178267470477552;
    tmp_msg_0.q = 0.717417184445708;
    tmp_msg_0.r = 0.3049358438975711;
    tmp_msg_0.depth = 0.4032484431455998;
    tmp_msg_0.alt = 0.6515783949292359;
    msg.state.set(tmp_msg_0);
    msg.type = 66U;

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
    msg.setTimeStamp(0.11626507297889122);
    msg.setSource(113U);
    msg.setSourceEntity(185U);
    msg.setDestination(2502U);
    msg.setDestinationEntity(181U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6331663823262806;
    tmp_msg_0.lon = 0.3227710631976589;
    tmp_msg_0.height = 0.5802705191211962;
    tmp_msg_0.x = 0.0007982778055574125;
    tmp_msg_0.y = 0.6925420010094838;
    tmp_msg_0.z = 0.43788506468465915;
    tmp_msg_0.phi = 0.8059279357127352;
    tmp_msg_0.theta = 0.448217649755955;
    tmp_msg_0.psi = 0.02749154775943763;
    tmp_msg_0.u = 0.27648329682100814;
    tmp_msg_0.v = 0.8475341622157622;
    tmp_msg_0.w = 0.795269508735729;
    tmp_msg_0.vx = 0.7390936197774259;
    tmp_msg_0.vy = 0.07558306808735349;
    tmp_msg_0.vz = 0.44000560459032567;
    tmp_msg_0.p = 0.3648575196851618;
    tmp_msg_0.q = 0.21754821052678963;
    tmp_msg_0.r = 0.3704268049145548;
    tmp_msg_0.depth = 0.03636587992528317;
    tmp_msg_0.alt = 0.5206700468282148;
    msg.state.set(tmp_msg_0);
    msg.type = 173U;

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
    msg.setTimeStamp(0.8062359244017744);
    msg.setSource(52164U);
    msg.setSourceEntity(147U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(72U);
    msg.value = 0.858253636163925;

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
    msg.setTimeStamp(0.49121451643660596);
    msg.setSource(55920U);
    msg.setSourceEntity(205U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5833580829348748;

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
    msg.setTimeStamp(0.3269422807310558);
    msg.setSource(43342U);
    msg.setSourceEntity(125U);
    msg.setDestination(14903U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8045513794098722;

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
    msg.setTimeStamp(0.37343963390581403);
    msg.setSource(29883U);
    msg.setSourceEntity(233U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(96U);
    msg.value = 0.12527000606001926;

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
    msg.setTimeStamp(0.27083305936333146);
    msg.setSource(42705U);
    msg.setSourceEntity(133U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(35U);
    msg.value = 0.16045212961652278;

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
    msg.setTimeStamp(0.2610210857490576);
    msg.setSource(58690U);
    msg.setSourceEntity(227U);
    msg.setDestination(23543U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8652824460060005;

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
    msg.setTimeStamp(0.16008285150178247);
    msg.setSource(33037U);
    msg.setSourceEntity(158U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6711431918358067;

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
    msg.setTimeStamp(0.6374176196221453);
    msg.setSource(254U);
    msg.setSourceEntity(241U);
    msg.setDestination(12088U);
    msg.setDestinationEntity(36U);
    msg.value = 0.46642269457103647;

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
    msg.setTimeStamp(0.8795613059601031);
    msg.setSource(23137U);
    msg.setSourceEntity(219U);
    msg.setDestination(26770U);
    msg.setDestinationEntity(5U);
    msg.value = 0.701924739601792;

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
    msg.setTimeStamp(0.8434589231809589);
    msg.setSource(38743U);
    msg.setSourceEntity(249U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(120U);
    msg.value = 0.23365059539316946;

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
    msg.setTimeStamp(0.36628823353939033);
    msg.setSource(36117U);
    msg.setSourceEntity(93U);
    msg.setDestination(31112U);
    msg.setDestinationEntity(237U);
    msg.value = 0.3193094857835811;

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
    msg.setTimeStamp(0.7540950274564097);
    msg.setSource(19711U);
    msg.setSourceEntity(64U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6097019275879632;

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
    msg.setTimeStamp(0.8680304854447144);
    msg.setSource(19000U);
    msg.setSourceEntity(182U);
    msg.setDestination(44197U);
    msg.setDestinationEntity(82U);
    msg.value = 0.45677348008598595;

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
    msg.setTimeStamp(0.18495958723655692);
    msg.setSource(22121U);
    msg.setSourceEntity(116U);
    msg.setDestination(32548U);
    msg.setDestinationEntity(78U);
    msg.value = 0.33307667480332037;

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
    msg.setTimeStamp(0.17340817448717805);
    msg.setSource(40480U);
    msg.setSourceEntity(219U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8133656133736257;

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
    msg.setTimeStamp(0.38500514638041694);
    msg.setSource(30845U);
    msg.setSourceEntity(195U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(38U);
    msg.id = 133U;
    msg.zoom = 32U;
    msg.action = 219U;

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
    msg.setTimeStamp(0.019963892803608108);
    msg.setSource(19580U);
    msg.setSourceEntity(160U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(139U);
    msg.id = 77U;
    msg.zoom = 119U;
    msg.action = 152U;

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
    msg.setTimeStamp(0.08992610331644502);
    msg.setSource(4628U);
    msg.setSourceEntity(162U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(160U);
    msg.id = 67U;
    msg.zoom = 93U;
    msg.action = 185U;

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
    msg.setTimeStamp(0.3094663722485086);
    msg.setSource(62209U);
    msg.setSourceEntity(19U);
    msg.setDestination(9170U);
    msg.setDestinationEntity(192U);
    msg.id = 162U;
    msg.value = 0.49990295101534277;

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
    msg.setTimeStamp(0.2119919903455647);
    msg.setSource(54232U);
    msg.setSourceEntity(53U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(246U);
    msg.id = 213U;
    msg.value = 0.8435467625323883;

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
    msg.setTimeStamp(0.5410165895036169);
    msg.setSource(9435U);
    msg.setSourceEntity(93U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(121U);
    msg.id = 38U;
    msg.value = 0.8537163069028316;

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
    msg.setTimeStamp(0.7428137523710397);
    msg.setSource(58261U);
    msg.setSourceEntity(122U);
    msg.setDestination(23573U);
    msg.setDestinationEntity(94U);
    msg.id = 162U;
    msg.value = 0.08712877291797805;

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
    msg.setTimeStamp(0.103464482021845);
    msg.setSource(19405U);
    msg.setSourceEntity(229U);
    msg.setDestination(39969U);
    msg.setDestinationEntity(2U);
    msg.id = 123U;
    msg.value = 0.7863961389539377;

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
    msg.setTimeStamp(0.1713933663031173);
    msg.setSource(34589U);
    msg.setSourceEntity(79U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(143U);
    msg.id = 109U;
    msg.value = 0.9053663565146829;

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
    msg.setTimeStamp(0.4400685741010064);
    msg.setSource(7392U);
    msg.setSourceEntity(50U);
    msg.setDestination(25451U);
    msg.setDestinationEntity(217U);
    msg.id = 193U;
    msg.angle = 0.9001035286740812;

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
    msg.setTimeStamp(0.31223687187822313);
    msg.setSource(51621U);
    msg.setSourceEntity(164U);
    msg.setDestination(35928U);
    msg.setDestinationEntity(216U);
    msg.id = 164U;
    msg.angle = 0.5651708232773192;

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
    msg.setTimeStamp(0.9138575925874588);
    msg.setSource(40634U);
    msg.setSourceEntity(51U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(37U);
    msg.id = 133U;
    msg.angle = 0.01785761913479489;

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
    msg.setTimeStamp(0.7366389551977828);
    msg.setSource(33856U);
    msg.setSourceEntity(61U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(45U);
    msg.op = 113U;
    msg.actions.assign("OOTFYHCIPTQNQEKDXWYROGTVNIOREVLJSHKDZFXQUYJXMDYXFRJVZPQKYKTZIGBLSETBCBQCDBMMAIQLMUUOAFZYKRWOUGLAERMCI");

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
    msg.setTimeStamp(0.7799972876896758);
    msg.setSource(28908U);
    msg.setSourceEntity(147U);
    msg.setDestination(37830U);
    msg.setDestinationEntity(36U);
    msg.op = 100U;
    msg.actions.assign("WIKPRUELVMRCHZAVAIVLLQHHCDLWZJJIHUOXFKODGPSMCYZXQBZQJYKVVIWELMDEPCECRVFKLQSNGBYJXKNAHSDDOGHWXODMSTEZRYBCB");

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
    msg.setTimeStamp(0.030062369090023355);
    msg.setSource(32668U);
    msg.setSourceEntity(207U);
    msg.setDestination(50898U);
    msg.setDestinationEntity(118U);
    msg.op = 170U;
    msg.actions.assign("WPBLUDUPTBWLIYMCZKXKUCJCMRKKZGDDXCORFGYGBMIGYVWOQDSSJAOSVHVHJEHCXQ");

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
    msg.setTimeStamp(0.1993745854998462);
    msg.setSource(49723U);
    msg.setSourceEntity(37U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(152U);
    msg.actions.assign("SLYQQUIDPETVVYQPAKNAORBZDDSVNYCEINLZVPRAOMGACKQVEEHGJBKZCTRDNUABKYVILIKWGOQSKPTYEJOMDIWOJRQSZXFBAHOCYKELWFYXUVLEETIADGYTPSPHCFLZNXHJCIPVQUFIMIPLHIOJHUSMTJGBBURCHQMJBSXSFHWCFNFVMJDFRHGEMKNZAFLMWW");

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
    msg.setTimeStamp(0.4115176993245169);
    msg.setSource(61465U);
    msg.setSourceEntity(202U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("UDXHALLNOPYLLIPWYTSBZDDNZZYXKQPRQNCMNHXWVITVJUEOFQKRZMFGXEPKRCALHKBSRRFJTCECJOFZUFEBGUCKTSMZSGQRWYTBPXHIMWXTIBQNFNJIYTMEWWCNBGXSVPYEHGDLXAKEJSSWMTVFUVPSYYIZDXKNNDHJIMQCDMSHIKWVUAUBAXKGFUEBGSLVEODQPKOGH");

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
    msg.setTimeStamp(0.07646264714140716);
    msg.setSource(12653U);
    msg.setSourceEntity(100U);
    msg.setDestination(37707U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("ZGELNATWYMJWIQXNMRDMH");

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
    msg.setTimeStamp(0.7482298116876718);
    msg.setSource(38278U);
    msg.setSourceEntity(85U);
    msg.setDestination(58895U);
    msg.setDestinationEntity(46U);
    msg.button = 135U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.40563760150743766);
    msg.setSource(31710U);
    msg.setSourceEntity(228U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(140U);
    msg.button = 229U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.32187624141300575);
    msg.setSource(31619U);
    msg.setSourceEntity(165U);
    msg.setDestination(29022U);
    msg.setDestinationEntity(205U);
    msg.button = 169U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.6378726870673802);
    msg.setSource(51662U);
    msg.setSourceEntity(131U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(200U);
    msg.op = 31U;
    msg.text.assign("OTPATNNLXEULDTKZPFUZHBYPUTVXJ");

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
    msg.setTimeStamp(0.5639420502589952);
    msg.setSource(37977U);
    msg.setSourceEntity(5U);
    msg.setDestination(942U);
    msg.setDestinationEntity(197U);
    msg.op = 228U;
    msg.text.assign("LTAAKHXFSCVVDNURWDTJRLYYCOZYUNGOHEQSXAJPCTBYDCNEHSGVUQCVO");

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
    msg.setTimeStamp(0.5390912412723753);
    msg.setSource(32589U);
    msg.setSourceEntity(89U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(91U);
    msg.op = 186U;
    msg.text.assign("VINYVYCCSJALCUOGGKPNWYTMWWZCOPDFPIHRPBQURWXMNFDJIGEEVHFHPHADOHJLQCEVRHOERNJVAIQVYSXWPBGAEAMMPTRKKDYKZIJBGX");

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
    msg.setTimeStamp(0.6332334154457223);
    msg.setSource(18212U);
    msg.setSourceEntity(170U);
    msg.setDestination(39682U);
    msg.setDestinationEntity(89U);
    msg.op = 238U;
    msg.time_remain = 0.17256134159693526;
    msg.sched_time = 0.26235428747216105;

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
    msg.setTimeStamp(0.722305135281914);
    msg.setSource(59543U);
    msg.setSourceEntity(36U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(171U);
    msg.op = 210U;
    msg.time_remain = 0.6796449386845712;
    msg.sched_time = 0.019985383280040958;

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
    msg.setTimeStamp(0.7712980716801379);
    msg.setSource(15554U);
    msg.setSourceEntity(86U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(64U);
    msg.op = 161U;
    msg.time_remain = 0.06311547668605877;
    msg.sched_time = 0.14228167191450147;

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
    msg.setTimeStamp(0.35114160139134354);
    msg.setSource(10441U);
    msg.setSourceEntity(95U);
    msg.setDestination(43914U);
    msg.setDestinationEntity(77U);
    msg.name.assign("ADMZPBFNOVTPAK");
    msg.op = 143U;
    msg.sched_time = 0.7431552039103101;

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
    msg.setTimeStamp(0.013041986419433216);
    msg.setSource(5967U);
    msg.setSourceEntity(219U);
    msg.setDestination(63236U);
    msg.setDestinationEntity(203U);
    msg.name.assign("BNOOBJXVDJJKHUWEEXXLPSNBUJMDXIHXBQCDMUERTZEGWHDLFKQWIYOWSLFTLAHOTUZSYIEVZIHPMMQGKTVVQLAOSYEDCNJXZNAMRFHPJCIFXWCSYPISACNCRBEKPLXTGYGHLRBCANNBHYAKJYPJZELJLUDTGOZKTDFHGMXALQNVR");
    msg.op = 179U;
    msg.sched_time = 0.13480612897739197;

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
    msg.setTimeStamp(0.21744735655573932);
    msg.setSource(34774U);
    msg.setSourceEntity(236U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(4U);
    msg.name.assign("TUTBAYKZSYMSWQFUEDJTCAHGZLTCIOVAXGGDKIFEYBMNCFYTNHJLJDMXHLHGCBULYMJW");
    msg.op = 89U;
    msg.sched_time = 0.06766149389269405;

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
    msg.setTimeStamp(0.322476191911357);
    msg.setSource(5642U);
    msg.setSourceEntity(72U);
    msg.setDestination(60996U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.8866351851595934);
    msg.setSource(33194U);
    msg.setSourceEntity(111U);
    msg.setDestination(15152U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.40897702870130737);
    msg.setSource(34066U);
    msg.setSourceEntity(160U);
    msg.setDestination(9866U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.6599111731316403);
    msg.setSource(4454U);
    msg.setSourceEntity(159U);
    msg.setDestination(45774U);
    msg.setDestinationEntity(165U);
    msg.name.assign("EKPDCLYURJPKJSNRQVFPYOICDULGUEABKLMMMFCHPEDYNAFFOYAGUXNWGXQDYIQUANWHSIOGLSPTNOBDVHKSFKSZDBVVXPQDKIFVXQNNNUYLIXSRJXSTATEKQWZEAABKMAFWPRXGUHWJCDFWELJKUUBZRNZAZTBRJLTTKHHBC");
    msg.state = 216U;

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
    msg.setTimeStamp(0.9304569536788873);
    msg.setSource(29209U);
    msg.setSourceEntity(90U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LYGQTRPQTJZCOOOXMXSFQSNPUVWNGHPMVYYWNKBYJQLPCIYGGTLLZAWQNJRSERWSXONWWOEWSJEVUSNJDLNLRPCKLTSKAXAVWOPZJHXTKEHRGUHABFFXBI");
    msg.state = 2U;

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
    msg.setTimeStamp(0.45637167915708243);
    msg.setSource(42909U);
    msg.setSourceEntity(228U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(131U);
    msg.name.assign("XGQNTFIVRNMKKIKIOZMYQAXLKUVUMUMHCBPRMPJVCPGOUNNHJAWDZFVDLSYTLUAPWBHJIAYEEQBZDQCOHLFWZZDZZYXPSFZJPRJBLFDILDGSKSFOCQQBQGOJITDWLGKSJTAJROWYBUERFCIVOUVPEKDNNSNPXKXMCGZYHRHLRMVSTBTUOIPEVMAQTFOWSFVDUUMXKVHJNEPGYZGXWFNNL");
    msg.state = 220U;

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
    msg.setTimeStamp(0.7147193698694871);
    msg.setSource(58779U);
    msg.setSourceEntity(253U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(120U);
    msg.name.assign("XKLHEPWGGRGZXAZQZJHBQEJVYYZUNDOCRHLDORXJBFYITOMSMWMUHDKTDGGVNDUUSNHEBFKTXTBCRDQVTQWUZJKFQFKZAYGZYDVZMIJYWSONGSMDNCVBWACTIIGECKKJL");
    msg.value = 242U;

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
    msg.setTimeStamp(0.3918015105243702);
    msg.setSource(4482U);
    msg.setSourceEntity(201U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(227U);
    msg.name.assign("VDVAJLYIHJEBMJLONFAZOVPMDEZCGZDHPKSOZRUNTRQCAWNXDM");
    msg.value = 78U;

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
    msg.setTimeStamp(0.6027264469798317);
    msg.setSource(28251U);
    msg.setSourceEntity(207U);
    msg.setDestination(16677U);
    msg.setDestinationEntity(12U);
    msg.name.assign("VLWNOPXBSLEBNBONRTFEMUKHUZTRCKAVXMOVEZMFBGPQSEMBNZDGSNAHTQUFFLJJLJRZSEJHAUIXCRGSDUZGMOGLDKAXWYVTFFYVXCPXZZQACKAWLEMHMQJWHMKOISRYYYJABCONURTFCWZRCSQDPJRFPEYASIGDABLMCKRTIPDROHQJKPTXLW");
    msg.value = 139U;

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
    msg.setTimeStamp(0.7253503540665283);
    msg.setSource(3799U);
    msg.setSourceEntity(252U);
    msg.setDestination(10219U);
    msg.setDestinationEntity(207U);
    msg.name.assign("EJITHMJWGCZETDVCAIQULUPKSVKNOTDCYQKNXQPIQMMSKRNHVBUORHLY");

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
    msg.setTimeStamp(0.86463681024039);
    msg.setSource(4980U);
    msg.setSourceEntity(90U);
    msg.setDestination(524U);
    msg.setDestinationEntity(47U);
    msg.name.assign("BRFRQJPAADLNERDNTOJUFRUCQBDGLSYGHKYPZNQLGZBZXKIURFXVGISMCGBQXCUYELUSQQHMNSFXR");

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
    msg.setTimeStamp(0.20723417435355873);
    msg.setSource(44037U);
    msg.setSourceEntity(165U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(181U);
    msg.name.assign("HTQOSLZGVOJBDKJOZGTBVFMDPIYJZKKAOPICQGSTWHKQMGXLAERMDMEENVDCIIYSHHRGQDLLPDKVMCSZXTFFCICZNJMHZPFLPNWQOHYEOWNPOVTIKLYUUBNDXJAEBMCXQLMHGMHVNRUWISFXMISIFCYEEWU");

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
    msg.setTimeStamp(0.13531636926983115);
    msg.setSource(56838U);
    msg.setSourceEntity(182U);
    msg.setDestination(4091U);
    msg.setDestinationEntity(136U);
    msg.name.assign("FKRPPOAMLPWDUUKIDJDFINTJIBRZCLZUOE");
    msg.value = 164U;

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
    msg.setTimeStamp(0.4249838068620191);
    msg.setSource(54237U);
    msg.setSourceEntity(127U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(91U);
    msg.name.assign("HNHWEZWZGLYVLVYZYNQDYDQERBOGPBTMQFKRK");
    msg.value = 30U;

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
    msg.setTimeStamp(0.47135432786773024);
    msg.setSource(25120U);
    msg.setSourceEntity(165U);
    msg.setDestination(55729U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NUZZEOIDLIHXTGDIIKRJBWWASPNVVXQYXSDKTXGGBKDJVEUMYVOEQQFRSHPWNQXLFDJLVIGYCTCCRCMFVNIHKMAIEYZQXIWZPWMFHUHAKMOUAHNRGOMNTUAARAGKKNDHFQPZRWDKEHCMOFYAXCLRRTLEJBGDNYUDESWMRPYTGKFCZWXPYBSJSQEBUELDNPBFOCUBBJNOEBQOTOOWIBLPFVFJYLVLZWQTMZTHGTGPAQUCKVSHSZXYVSUR");
    msg.value = 239U;

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
    msg.setTimeStamp(0.5652861216658384);
    msg.setSource(24124U);
    msg.setSourceEntity(57U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(145U);
    msg.id = 204U;
    msg.period = 166376151U;
    msg.duty_cycle = 3563390879U;

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
    msg.setTimeStamp(0.32034359691936665);
    msg.setSource(30254U);
    msg.setSourceEntity(48U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(246U);
    msg.id = 0U;
    msg.period = 1542655579U;
    msg.duty_cycle = 557414739U;

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
    msg.setTimeStamp(0.11513017704395268);
    msg.setSource(35695U);
    msg.setSourceEntity(63U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(14U);
    msg.id = 162U;
    msg.period = 3238286111U;
    msg.duty_cycle = 3450406410U;

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
    msg.setTimeStamp(0.059626323182822794);
    msg.setSource(44037U);
    msg.setSourceEntity(22U);
    msg.setDestination(17972U);
    msg.setDestinationEntity(49U);
    msg.id = 251U;
    msg.period = 3730514403U;
    msg.duty_cycle = 1748838500U;

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
    msg.setTimeStamp(0.2139924510661828);
    msg.setSource(19774U);
    msg.setSourceEntity(248U);
    msg.setDestination(72U);
    msg.setDestinationEntity(75U);
    msg.id = 70U;
    msg.period = 392475808U;
    msg.duty_cycle = 1331639842U;

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
    msg.setTimeStamp(0.8410567215851039);
    msg.setSource(41607U);
    msg.setSourceEntity(202U);
    msg.setDestination(60329U);
    msg.setDestinationEntity(38U);
    msg.id = 208U;
    msg.period = 2707578642U;
    msg.duty_cycle = 3840195028U;

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
    msg.setTimeStamp(0.6483107176744037);
    msg.setSource(58502U);
    msg.setSourceEntity(69U);
    msg.setDestination(30530U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.1912331831007753;
    msg.lon = 0.5535448133465909;
    msg.height = 0.1390379343593906;
    msg.x = 0.39783151690873075;
    msg.y = 0.6668377396101599;
    msg.z = 0.5129753749101436;
    msg.phi = 0.9352889957835819;
    msg.theta = 0.5659605901994069;
    msg.psi = 0.015501946699288394;
    msg.u = 0.6360073121630974;
    msg.v = 0.7667690910034031;
    msg.w = 0.2571676878190001;
    msg.vx = 0.12599451227549474;
    msg.vy = 0.7914348981058085;
    msg.vz = 0.7797830615911887;
    msg.p = 0.6557519529796517;
    msg.q = 0.42963470590612307;
    msg.r = 0.7338820704940342;
    msg.depth = 0.7472092237747481;
    msg.alt = 0.11095223878221672;

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
    msg.setTimeStamp(0.22121583078756335);
    msg.setSource(41182U);
    msg.setSourceEntity(48U);
    msg.setDestination(14839U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.6010072234626487;
    msg.lon = 0.7056968298301259;
    msg.height = 0.34623198462435556;
    msg.x = 0.4925238153881434;
    msg.y = 0.6686026150607711;
    msg.z = 0.21607252150389944;
    msg.phi = 0.010002011965252966;
    msg.theta = 0.9326979398029348;
    msg.psi = 0.007636172193099533;
    msg.u = 0.7329799321428646;
    msg.v = 0.22986452745021868;
    msg.w = 0.21519039720664457;
    msg.vx = 0.0865096593127812;
    msg.vy = 0.6092801990854586;
    msg.vz = 0.6356430143010326;
    msg.p = 0.4394043814416;
    msg.q = 0.5837910325531989;
    msg.r = 0.21536613101608904;
    msg.depth = 0.34240839994708583;
    msg.alt = 0.8086643422853166;

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
    msg.setTimeStamp(0.8145584093035442);
    msg.setSource(51098U);
    msg.setSourceEntity(29U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.5946869108321516;
    msg.lon = 0.4226441834911665;
    msg.height = 0.46925394946114496;
    msg.x = 0.7970663012954758;
    msg.y = 0.06906393598871208;
    msg.z = 0.09409675938932172;
    msg.phi = 0.0128527417022275;
    msg.theta = 0.9734943972402167;
    msg.psi = 0.8682160149654329;
    msg.u = 0.829126486208693;
    msg.v = 0.9583567322340043;
    msg.w = 0.5481359775083617;
    msg.vx = 0.1519879525189084;
    msg.vy = 0.2799198036786138;
    msg.vz = 0.5508678183885174;
    msg.p = 0.2898831411514633;
    msg.q = 0.962275862208624;
    msg.r = 0.5541918433862444;
    msg.depth = 0.4916581462422218;
    msg.alt = 0.6063344235752807;

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
    msg.setTimeStamp(0.22109030064436364);
    msg.setSource(3552U);
    msg.setSourceEntity(221U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(80U);
    msg.x = 0.495515730396496;
    msg.y = 0.09932034374748633;
    msg.z = 0.4735954962461728;

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
    msg.setTimeStamp(0.9954945631083106);
    msg.setSource(30735U);
    msg.setSourceEntity(77U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(95U);
    msg.x = 0.6089995004552821;
    msg.y = 0.9835253696721247;
    msg.z = 0.5278725719027747;

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
    msg.setTimeStamp(0.38368907639489325);
    msg.setSource(45833U);
    msg.setSourceEntity(11U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(10U);
    msg.x = 0.31537813916076973;
    msg.y = 0.8513815170615119;
    msg.z = 0.9359025208482578;

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
    msg.setTimeStamp(0.7534498155943378);
    msg.setSource(2505U);
    msg.setSourceEntity(91U);
    msg.setDestination(569U);
    msg.setDestinationEntity(139U);
    msg.value = 0.10565788044557356;

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
    msg.setTimeStamp(0.5165821769505169);
    msg.setSource(61942U);
    msg.setSourceEntity(162U);
    msg.setDestination(50654U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8399481537552348;

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
    msg.setTimeStamp(0.8291268892312488);
    msg.setSource(47885U);
    msg.setSourceEntity(151U);
    msg.setDestination(12733U);
    msg.setDestinationEntity(246U);
    msg.value = 0.13906965790748027;

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
    msg.setTimeStamp(0.721743179676615);
    msg.setSource(54575U);
    msg.setSourceEntity(62U);
    msg.setDestination(24863U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9671275987801958;

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
    msg.setTimeStamp(0.8169004508861535);
    msg.setSource(31352U);
    msg.setSourceEntity(120U);
    msg.setDestination(17591U);
    msg.setDestinationEntity(42U);
    msg.value = 0.20792852652106675;

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
    msg.setTimeStamp(0.9826010764064043);
    msg.setSource(23496U);
    msg.setSourceEntity(93U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6205417228004426;

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
    msg.setTimeStamp(0.3616107693168029);
    msg.setSource(29428U);
    msg.setSourceEntity(17U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(185U);
    msg.x = 0.05387800922907082;
    msg.y = 0.08296884649204772;
    msg.z = 0.44972757333360913;
    msg.phi = 0.29923004969655587;
    msg.theta = 0.5175251601701825;
    msg.psi = 0.058397815829774324;
    msg.p = 0.144352755083067;
    msg.q = 0.7402831692244689;
    msg.r = 0.3013754971732314;
    msg.u = 0.0892884757279665;
    msg.v = 0.3069040270692984;
    msg.w = 0.044076167689168444;
    msg.bias_psi = 0.09875129386031056;
    msg.bias_r = 0.7589745824665489;

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
    msg.setTimeStamp(0.647388162736811);
    msg.setSource(28153U);
    msg.setSourceEntity(185U);
    msg.setDestination(33367U);
    msg.setDestinationEntity(230U);
    msg.x = 0.8573936536453792;
    msg.y = 0.40069028227634196;
    msg.z = 0.6167278962469026;
    msg.phi = 0.13625644385013513;
    msg.theta = 0.13776004246957663;
    msg.psi = 0.014902947433825142;
    msg.p = 0.7151698203770782;
    msg.q = 0.9751435287747744;
    msg.r = 0.7383447843852318;
    msg.u = 0.7886180311636548;
    msg.v = 0.20933662486884308;
    msg.w = 0.784822135148602;
    msg.bias_psi = 0.9991351591557817;
    msg.bias_r = 0.8777685464418926;

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
    msg.setTimeStamp(0.3319031521255923);
    msg.setSource(3770U);
    msg.setSourceEntity(2U);
    msg.setDestination(65393U);
    msg.setDestinationEntity(163U);
    msg.x = 0.20695561645500704;
    msg.y = 0.32636632158457546;
    msg.z = 0.7467313114978679;
    msg.phi = 0.8994739763186093;
    msg.theta = 0.6495846288733641;
    msg.psi = 0.4668933560605476;
    msg.p = 0.451976956073569;
    msg.q = 0.2656589322996682;
    msg.r = 0.16305177763597078;
    msg.u = 0.5215549452636195;
    msg.v = 0.2826962331634214;
    msg.w = 0.21816078527296967;
    msg.bias_psi = 0.01929418852114484;
    msg.bias_r = 0.6732049125515367;

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
    msg.setTimeStamp(0.42710906797433146);
    msg.setSource(45732U);
    msg.setSourceEntity(167U);
    msg.setDestination(33103U);
    msg.setDestinationEntity(188U);
    msg.bias_psi = 0.14677901415616967;
    msg.bias_r = 0.3219348198337991;
    msg.cog = 0.9695023475606079;
    msg.cyaw = 0.6450262384509997;
    msg.lbl_rej_level = 0.1331268973687857;
    msg.gps_rej_level = 0.5563537167233868;
    msg.custom_x = 0.4170895602565282;
    msg.custom_y = 0.7724739033084569;
    msg.custom_z = 0.5407539339065089;

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
    msg.setTimeStamp(0.9585886023654476);
    msg.setSource(62109U);
    msg.setSourceEntity(162U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.8529768658860406;
    msg.bias_r = 0.3351916984463704;
    msg.cog = 0.9955278328185372;
    msg.cyaw = 0.9336409266294077;
    msg.lbl_rej_level = 0.6906090461822353;
    msg.gps_rej_level = 0.761202708544521;
    msg.custom_x = 0.3321089289154846;
    msg.custom_y = 0.9434364103419572;
    msg.custom_z = 0.15749437978990533;

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
    msg.setTimeStamp(0.06631244326168606);
    msg.setSource(1110U);
    msg.setSourceEntity(41U);
    msg.setDestination(9887U);
    msg.setDestinationEntity(120U);
    msg.bias_psi = 0.6590214346352977;
    msg.bias_r = 0.6758267443518892;
    msg.cog = 0.6541966549402418;
    msg.cyaw = 0.30891706379666595;
    msg.lbl_rej_level = 0.3167860729090911;
    msg.gps_rej_level = 0.7084392097210682;
    msg.custom_x = 0.7446963865942698;
    msg.custom_y = 0.19282463929393034;
    msg.custom_z = 0.09427785953723422;

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
    msg.setTimeStamp(0.4484454494654768);
    msg.setSource(37004U);
    msg.setSourceEntity(144U);
    msg.setDestination(54512U);
    msg.setDestinationEntity(146U);
    msg.utc_time = 0.7881089832743275;
    msg.reason = 161U;

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
    msg.setTimeStamp(0.5576495251548154);
    msg.setSource(55814U);
    msg.setSourceEntity(142U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.01434396701566587;
    msg.reason = 170U;

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
    msg.setTimeStamp(0.26548298213906496);
    msg.setSource(63388U);
    msg.setSourceEntity(218U);
    msg.setDestination(52493U);
    msg.setDestinationEntity(158U);
    msg.utc_time = 0.8445679111070062;
    msg.reason = 203U;

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
    msg.setTimeStamp(0.6362630415520606);
    msg.setSource(3221U);
    msg.setSourceEntity(111U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(60U);
    msg.id = 121U;
    msg.range = 0.437536968489346;
    msg.acceptance = 142U;

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
    msg.setTimeStamp(0.5648337186522117);
    msg.setSource(24484U);
    msg.setSourceEntity(6U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(27U);
    msg.id = 141U;
    msg.range = 0.10681065498811548;
    msg.acceptance = 117U;

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
    msg.setTimeStamp(0.060052933223188165);
    msg.setSource(43380U);
    msg.setSourceEntity(46U);
    msg.setDestination(25747U);
    msg.setDestinationEntity(166U);
    msg.id = 95U;
    msg.range = 0.5469546646162905;
    msg.acceptance = 210U;

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
    msg.setTimeStamp(0.20288102965535282);
    msg.setSource(37406U);
    msg.setSourceEntity(198U);
    msg.setDestination(50823U);
    msg.setDestinationEntity(107U);
    msg.type = 189U;
    msg.reason = 92U;
    msg.value = 0.1266095170198983;
    msg.timestep = 0.16655654134388775;

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
    msg.setTimeStamp(0.6439971547849013);
    msg.setSource(41468U);
    msg.setSourceEntity(156U);
    msg.setDestination(62870U);
    msg.setDestinationEntity(98U);
    msg.type = 166U;
    msg.reason = 203U;
    msg.value = 0.07090947100710199;
    msg.timestep = 0.1591164272369553;

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
    msg.setTimeStamp(0.10005750088612797);
    msg.setSource(11686U);
    msg.setSourceEntity(113U);
    msg.setDestination(35044U);
    msg.setDestinationEntity(13U);
    msg.type = 218U;
    msg.reason = 151U;
    msg.value = 0.20794969759305038;
    msg.timestep = 0.6568075276822868;

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
    msg.setTimeStamp(0.5747579035476869);
    msg.setSource(39029U);
    msg.setSourceEntity(102U);
    msg.setDestination(41298U);
    msg.setDestinationEntity(168U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BQHPPSIBLQIJLPZDRNAMNXVIHYSKRRAZBBCFESFEOJQWXIIEXZKTWRONYJLDSQHPXNOJV");
    tmp_msg_0.lat = 0.08471041642888111;
    tmp_msg_0.lon = 0.45424241750405403;
    tmp_msg_0.depth = 0.20777747275954883;
    tmp_msg_0.query_channel = 240U;
    tmp_msg_0.reply_channel = 111U;
    tmp_msg_0.transponder_delay = 106U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24139929929740334;
    msg.y = 0.8453297172427039;
    msg.var_x = 0.9075323805992808;
    msg.var_y = 0.20828246754468538;
    msg.distance = 0.5842034640238036;

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
    msg.setTimeStamp(0.005833507991004905);
    msg.setSource(32281U);
    msg.setSourceEntity(147U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOVPWGDFLZQUZBOHVEFNFLRGAQEQIKOXAMYMTSOWFLVHVSVXDECIBYDPRBHOIHEDYTVIWSBXFIESTNKMPBABZKQQBKZCOIWGJOCGGAUQ");
    tmp_msg_0.lat = 0.3277413600933835;
    tmp_msg_0.lon = 0.4902427303928316;
    tmp_msg_0.depth = 0.8239668053300039;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24098382433393595;
    msg.y = 0.5379444730332504;
    msg.var_x = 0.2641737685197987;
    msg.var_y = 0.1278206290155648;
    msg.distance = 0.592607693070037;

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
    msg.setTimeStamp(0.4837139120291447);
    msg.setSource(29339U);
    msg.setSourceEntity(190U);
    msg.setDestination(43484U);
    msg.setDestinationEntity(218U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZGNPFFUOMBJVDXFTSEYAVKNELAF");
    tmp_msg_0.lat = 0.33721604981457354;
    tmp_msg_0.lon = 0.9453916051045326;
    tmp_msg_0.depth = 0.7528015830569421;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 228U;
    tmp_msg_0.transponder_delay = 46U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5550322837706616;
    msg.y = 0.11504758437479379;
    msg.var_x = 0.5449169675422478;
    msg.var_y = 0.9767648690722692;
    msg.distance = 0.36740130253964864;

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
    msg.setTimeStamp(0.023123925050782312);
    msg.setSource(8383U);
    msg.setSourceEntity(240U);
    msg.setDestination(15027U);
    msg.setDestinationEntity(54U);
    msg.state = 116U;

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
    msg.setTimeStamp(0.06323697153788543);
    msg.setSource(57701U);
    msg.setSourceEntity(39U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(39U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.7500669042866899);
    msg.setSource(54616U);
    msg.setSourceEntity(84U);
    msg.setDestination(44280U);
    msg.setDestinationEntity(74U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.5093365527457405);
    msg.setSource(45076U);
    msg.setSourceEntity(13U);
    msg.setDestination(26573U);
    msg.setDestinationEntity(248U);
    msg.x = 0.9259732245082001;
    msg.y = 0.357794641958766;
    msg.z = 0.5254323934897995;

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
    msg.setTimeStamp(0.3865711541881355);
    msg.setSource(53642U);
    msg.setSourceEntity(116U);
    msg.setDestination(24164U);
    msg.setDestinationEntity(188U);
    msg.x = 0.13981496106096303;
    msg.y = 0.9834784010107628;
    msg.z = 0.34735632608038036;

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
    msg.setTimeStamp(0.043001598563983556);
    msg.setSource(24691U);
    msg.setSourceEntity(83U);
    msg.setDestination(65013U);
    msg.setDestinationEntity(204U);
    msg.x = 0.9056519283204406;
    msg.y = 0.3520236120165431;
    msg.z = 0.06943187149397145;

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
    msg.setTimeStamp(0.21819510292112276);
    msg.setSource(2853U);
    msg.setSourceEntity(51U);
    msg.setDestination(23569U);
    msg.setDestinationEntity(111U);
    msg.va = 0.8671437938207022;
    msg.aoa = 0.7506565316252937;
    msg.ssa = 0.12805059845465372;

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
    msg.setTimeStamp(0.6674004514228701);
    msg.setSource(37459U);
    msg.setSourceEntity(134U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(137U);
    msg.va = 0.259364419819898;
    msg.aoa = 0.5807233606051543;
    msg.ssa = 0.18384367600714324;

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
    msg.setTimeStamp(0.03136695227008768);
    msg.setSource(3119U);
    msg.setSourceEntity(58U);
    msg.setDestination(19814U);
    msg.setDestinationEntity(253U);
    msg.va = 0.39176247229358707;
    msg.aoa = 0.435141677438754;
    msg.ssa = 0.8284722674582999;

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
    msg.setTimeStamp(0.13942698842388213);
    msg.setSource(63138U);
    msg.setSourceEntity(78U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6546969148025541;

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
    msg.setTimeStamp(0.9518729276130382);
    msg.setSource(4309U);
    msg.setSourceEntity(95U);
    msg.setDestination(22314U);
    msg.setDestinationEntity(104U);
    msg.value = 0.6874101722315513;

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
    msg.setTimeStamp(0.8064714185254628);
    msg.setSource(8805U);
    msg.setSourceEntity(7U);
    msg.setDestination(28426U);
    msg.setDestinationEntity(58U);
    msg.value = 0.2986993117168486;

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
    msg.setTimeStamp(0.006250051345504493);
    msg.setSource(23216U);
    msg.setSourceEntity(241U);
    msg.setDestination(36728U);
    msg.setDestinationEntity(101U);
    msg.value = 0.06193039336545336;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.14843361146392142);
    msg.setSource(13213U);
    msg.setSourceEntity(81U);
    msg.setDestination(62031U);
    msg.setDestinationEntity(104U);
    msg.value = 0.01838478242206132;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.4261042172550029);
    msg.setSource(55945U);
    msg.setSourceEntity(85U);
    msg.setDestination(49392U);
    msg.setDestinationEntity(162U);
    msg.value = 0.7396665048284163;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.20025127862247694);
    msg.setSource(61699U);
    msg.setSourceEntity(205U);
    msg.setDestination(11376U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8630709954646182;
    msg.speed_units = 208U;

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
    msg.setTimeStamp(0.2668909126486181);
    msg.setSource(36458U);
    msg.setSourceEntity(173U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(109U);
    msg.value = 0.5408622664110291;
    msg.speed_units = 43U;

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
    msg.setTimeStamp(0.2260016836604627);
    msg.setSource(23601U);
    msg.setSourceEntity(90U);
    msg.setDestination(52809U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5254198888507403;
    msg.speed_units = 98U;

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
    msg.setTimeStamp(0.10349572211557212);
    msg.setSource(4636U);
    msg.setSourceEntity(249U);
    msg.setDestination(20110U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7749568958571764;

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
    msg.setTimeStamp(0.8971161422259247);
    msg.setSource(60297U);
    msg.setSourceEntity(79U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(117U);
    msg.value = 0.16487609813159454;

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
    msg.setTimeStamp(0.9599155755025637);
    msg.setSource(18057U);
    msg.setSourceEntity(109U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5193604035799229;

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
    msg.setTimeStamp(0.4194234758747296);
    msg.setSource(53680U);
    msg.setSourceEntity(141U);
    msg.setDestination(16722U);
    msg.setDestinationEntity(147U);
    msg.value = 0.09131853400165679;

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
    msg.setTimeStamp(0.19885190622115745);
    msg.setSource(64407U);
    msg.setSourceEntity(204U);
    msg.setDestination(62744U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4757132368754684;

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
    msg.setTimeStamp(0.6794257646312698);
    msg.setSource(63675U);
    msg.setSourceEntity(153U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9960055369587575;

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
    msg.setTimeStamp(0.6363814256223875);
    msg.setSource(64270U);
    msg.setSourceEntity(158U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6728066689864769;

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
    msg.setTimeStamp(0.049921327085772016);
    msg.setSource(12081U);
    msg.setSourceEntity(179U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(14U);
    msg.value = 0.7401522269583575;

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
    msg.setTimeStamp(0.6103448613078505);
    msg.setSource(55942U);
    msg.setSourceEntity(63U);
    msg.setDestination(37433U);
    msg.setDestinationEntity(198U);
    msg.value = 0.46175678950412025;

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
    msg.setTimeStamp(0.44403737877782334);
    msg.setSource(5610U);
    msg.setSourceEntity(197U);
    msg.setDestination(25676U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 577591472U;
    msg.start_lat = 0.22888113603004445;
    msg.start_lon = 0.8932767629946322;
    msg.start_z = 0.2646424582870667;
    msg.start_z_units = 37U;
    msg.end_lat = 0.7031510414730798;
    msg.end_lon = 0.6005934106916436;
    msg.end_z = 0.40742207606740644;
    msg.end_z_units = 158U;
    msg.speed = 0.5670061753526019;
    msg.speed_units = 78U;
    msg.lradius = 0.22407924942532487;
    msg.flags = 250U;

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
    msg.setTimeStamp(0.4303510042732377);
    msg.setSource(50282U);
    msg.setSourceEntity(5U);
    msg.setDestination(18082U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 2051122465U;
    msg.start_lat = 0.8156316474630294;
    msg.start_lon = 0.7348458201531212;
    msg.start_z = 0.00995886682328806;
    msg.start_z_units = 9U;
    msg.end_lat = 0.20996640532317012;
    msg.end_lon = 0.9865822553182146;
    msg.end_z = 0.6167244279954659;
    msg.end_z_units = 169U;
    msg.speed = 0.7488561621487141;
    msg.speed_units = 164U;
    msg.lradius = 0.20455955503356216;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.3650963428100924);
    msg.setSource(22311U);
    msg.setSourceEntity(31U);
    msg.setDestination(10396U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 313708529U;
    msg.start_lat = 0.09290955239715526;
    msg.start_lon = 0.3024850959642472;
    msg.start_z = 0.42776305095374856;
    msg.start_z_units = 177U;
    msg.end_lat = 0.1099507271750888;
    msg.end_lon = 0.5762765542027004;
    msg.end_z = 0.20395453381959872;
    msg.end_z_units = 248U;
    msg.speed = 0.30570774894383523;
    msg.speed_units = 26U;
    msg.lradius = 0.896681576545618;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.14223461166621387);
    msg.setSource(29338U);
    msg.setSourceEntity(215U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(43U);
    msg.x = 0.7455812304123105;
    msg.y = 0.4967557739176821;
    msg.z = 0.08473387456861614;
    msg.k = 0.5522613246166963;
    msg.m = 0.3178346132675641;
    msg.n = 0.3164199657619269;
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
    msg.setTimeStamp(0.8614405094173073);
    msg.setSource(58141U);
    msg.setSourceEntity(40U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(76U);
    msg.x = 0.3307479274381201;
    msg.y = 0.2126560400146288;
    msg.z = 0.5016127235014394;
    msg.k = 0.45972699922698623;
    msg.m = 0.970773951008009;
    msg.n = 0.7417768983334653;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.1517892771545567);
    msg.setSource(13355U);
    msg.setSourceEntity(151U);
    msg.setDestination(3408U);
    msg.setDestinationEntity(243U);
    msg.x = 0.7746028544758986;
    msg.y = 0.43638869663727065;
    msg.z = 0.25785704303914714;
    msg.k = 0.3509172254824723;
    msg.m = 0.9046101881645395;
    msg.n = 0.7927548434826267;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.6101842548254832);
    msg.setSource(21606U);
    msg.setSourceEntity(86U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(232U);
    msg.value = 0.5131927066920956;

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
    msg.setTimeStamp(0.15853388248465783);
    msg.setSource(5236U);
    msg.setSourceEntity(6U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(30U);
    msg.value = 0.13490367907239142;

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
    msg.setTimeStamp(0.8095299372516267);
    msg.setSource(63979U);
    msg.setSourceEntity(103U);
    msg.setDestination(28439U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9364820202547013;

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
    msg.setTimeStamp(0.39159913368764676);
    msg.setSource(10589U);
    msg.setSourceEntity(95U);
    msg.setDestination(60141U);
    msg.setDestinationEntity(188U);
    msg.u = 0.23980249520482266;
    msg.v = 0.17613632074519925;
    msg.w = 0.9907328922743541;
    msg.p = 0.46488357219374754;
    msg.q = 0.0510417582565762;
    msg.r = 0.7675621458509554;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.9743213280692408);
    msg.setSource(10778U);
    msg.setSourceEntity(46U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(232U);
    msg.u = 0.2421007642261377;
    msg.v = 0.8293064390784999;
    msg.w = 0.885665172947184;
    msg.p = 0.05532642995184489;
    msg.q = 0.28932926903789635;
    msg.r = 0.02792861137627034;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.13410292429608806);
    msg.setSource(39694U);
    msg.setSourceEntity(182U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(198U);
    msg.u = 0.7935533761297126;
    msg.v = 0.6587269130414688;
    msg.w = 0.5075350606807607;
    msg.p = 0.3019415085812208;
    msg.q = 0.38864693221381896;
    msg.r = 0.8736315781760888;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.6968101703558971);
    msg.setSource(45552U);
    msg.setSourceEntity(213U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 2978011057U;
    msg.start_lat = 0.3669920793516811;
    msg.start_lon = 0.6559231945227166;
    msg.start_z = 0.05595502655296658;
    msg.start_z_units = 198U;
    msg.end_lat = 0.8754034125375048;
    msg.end_lon = 0.29675851390924346;
    msg.end_z = 0.5944068085288465;
    msg.end_z_units = 124U;
    msg.lradius = 0.20745669753204077;
    msg.flags = 102U;
    msg.x = 0.23154547840122164;
    msg.y = 0.12325417876191169;
    msg.z = 0.799900067112215;
    msg.vx = 0.12616295103552388;
    msg.vy = 0.033082529945718475;
    msg.vz = 0.023053257363459312;
    msg.course_error = 0.20687338278391343;
    msg.eta = 39490U;

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
    msg.setTimeStamp(0.8778189029764415);
    msg.setSource(12815U);
    msg.setSourceEntity(166U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(208U);
    msg.path_ref = 51362268U;
    msg.start_lat = 0.4714747200878736;
    msg.start_lon = 0.5651871093776168;
    msg.start_z = 0.3798273653898262;
    msg.start_z_units = 9U;
    msg.end_lat = 0.3242470835430973;
    msg.end_lon = 0.49895939688865176;
    msg.end_z = 0.07524178294388806;
    msg.end_z_units = 110U;
    msg.lradius = 0.7091583524506766;
    msg.flags = 133U;
    msg.x = 0.6980766800386976;
    msg.y = 0.23141480712837637;
    msg.z = 0.19866361469782745;
    msg.vx = 0.10686147860898776;
    msg.vy = 0.7267940461001512;
    msg.vz = 0.06784845582674726;
    msg.course_error = 0.06482973589831365;
    msg.eta = 32883U;

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
    msg.setTimeStamp(0.06267391618829965);
    msg.setSource(46139U);
    msg.setSourceEntity(140U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 1631987477U;
    msg.start_lat = 0.7763056949031959;
    msg.start_lon = 0.7998125533648317;
    msg.start_z = 0.6069068742171404;
    msg.start_z_units = 169U;
    msg.end_lat = 0.8645830260288734;
    msg.end_lon = 0.7064832687309769;
    msg.end_z = 0.3843962914489579;
    msg.end_z_units = 234U;
    msg.lradius = 0.8004404076026429;
    msg.flags = 244U;
    msg.x = 0.970733839168326;
    msg.y = 0.37997097313991346;
    msg.z = 0.12271847109205136;
    msg.vx = 0.30232054578702017;
    msg.vy = 0.8853691687285122;
    msg.vz = 0.03643848898540614;
    msg.course_error = 0.8790480771524971;
    msg.eta = 59295U;

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
    msg.setTimeStamp(0.18927642237048303);
    msg.setSource(10092U);
    msg.setSourceEntity(54U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(63U);
    msg.k = 0.6241319935911697;
    msg.m = 0.30254378070565013;
    msg.n = 0.283520145861507;

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
    msg.setTimeStamp(0.6227127253835273);
    msg.setSource(20261U);
    msg.setSourceEntity(33U);
    msg.setDestination(64897U);
    msg.setDestinationEntity(224U);
    msg.k = 0.17341482231219307;
    msg.m = 0.6089801096132814;
    msg.n = 0.9698046592997956;

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
    msg.setTimeStamp(0.013775692373537929);
    msg.setSource(7441U);
    msg.setSourceEntity(123U);
    msg.setDestination(53348U);
    msg.setDestinationEntity(148U);
    msg.k = 0.9477666460137555;
    msg.m = 0.9363855128082229;
    msg.n = 0.7512738233150853;

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
    msg.setTimeStamp(0.2718673669410505);
    msg.setSource(47858U);
    msg.setSourceEntity(208U);
    msg.setDestination(60730U);
    msg.setDestinationEntity(219U);
    msg.p = 0.5997332801582508;
    msg.i = 0.2878776057298331;
    msg.d = 0.750365992378161;
    msg.a = 0.22519184004480353;

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
    msg.setTimeStamp(0.4560234249625629);
    msg.setSource(15192U);
    msg.setSourceEntity(224U);
    msg.setDestination(47609U);
    msg.setDestinationEntity(51U);
    msg.p = 0.714558287369638;
    msg.i = 0.5112426513235059;
    msg.d = 0.88774980806087;
    msg.a = 0.38320386422390584;

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
    msg.setTimeStamp(0.37317678925252673);
    msg.setSource(447U);
    msg.setSourceEntity(36U);
    msg.setDestination(39917U);
    msg.setDestinationEntity(85U);
    msg.p = 0.3849567884358719;
    msg.i = 0.47496759645094444;
    msg.d = 0.8656629564127425;
    msg.a = 0.8515385926710178;

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
    msg.setTimeStamp(0.6043352902654834);
    msg.setSource(51231U);
    msg.setSourceEntity(204U);
    msg.setDestination(44035U);
    msg.setDestinationEntity(241U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.7315808856061368);
    msg.setSource(36724U);
    msg.setSourceEntity(153U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(179U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.8659767010183368);
    msg.setSource(23358U);
    msg.setSourceEntity(74U);
    msg.setDestination(19484U);
    msg.setDestinationEntity(2U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.1425320626561548);
    msg.setSource(30602U);
    msg.setSourceEntity(89U);
    msg.setDestination(32567U);
    msg.setDestinationEntity(17U);
    msg.x = 0.10870618845133262;
    msg.y = 0.6442149044036252;
    msg.z = 0.6492001962044914;
    msg.vx = 0.12673938503617777;
    msg.vy = 0.32086151097620685;
    msg.vz = 0.9443287867327304;
    msg.ax = 0.7266101955023891;
    msg.ay = 0.31886693591621207;
    msg.az = 0.17307900832077272;
    msg.flags = 21156U;

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
    msg.setTimeStamp(0.6442363697142324);
    msg.setSource(83U);
    msg.setSourceEntity(201U);
    msg.setDestination(35136U);
    msg.setDestinationEntity(96U);
    msg.x = 0.025725951277804082;
    msg.y = 0.14242790347591872;
    msg.z = 0.4314366512066933;
    msg.vx = 0.032211905834292565;
    msg.vy = 0.3851840689981221;
    msg.vz = 0.1363116860821838;
    msg.ax = 0.037411033406613003;
    msg.ay = 0.5013802810566115;
    msg.az = 0.895214517086857;
    msg.flags = 43619U;

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
    msg.setTimeStamp(0.5638651991329251);
    msg.setSource(41448U);
    msg.setSourceEntity(147U);
    msg.setDestination(54289U);
    msg.setDestinationEntity(201U);
    msg.x = 0.10420095955619524;
    msg.y = 0.8546286410346992;
    msg.z = 0.7707697813900414;
    msg.vx = 0.762493435932073;
    msg.vy = 0.3308930580886158;
    msg.vz = 0.12378460001088276;
    msg.ax = 0.24808840142293254;
    msg.ay = 0.6013683196402846;
    msg.az = 0.046493986023356526;
    msg.flags = 21244U;

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
    msg.setTimeStamp(0.8958771694118939);
    msg.setSource(63572U);
    msg.setSourceEntity(240U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7012786309063522;

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
    msg.setTimeStamp(0.5952960300530356);
    msg.setSource(37800U);
    msg.setSourceEntity(131U);
    msg.setDestination(36205U);
    msg.setDestinationEntity(125U);
    msg.value = 0.9094898780686655;

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
    msg.setTimeStamp(0.2864946571274366);
    msg.setSource(4450U);
    msg.setSourceEntity(63U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(225U);
    msg.value = 0.13928005071732574;

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
    msg.setTimeStamp(0.48638520245399397);
    msg.setSource(26518U);
    msg.setSourceEntity(97U);
    msg.setDestination(63189U);
    msg.setDestinationEntity(231U);
    msg.timeout = 64453U;
    msg.lat = 0.4182128102058652;
    msg.lon = 0.4978101195418617;
    msg.z = 0.7583601614839448;
    msg.z_units = 152U;
    msg.speed = 0.023142688184502935;
    msg.speed_units = 127U;
    msg.roll = 0.97430373568736;
    msg.pitch = 0.05378136051059623;
    msg.yaw = 0.5689692187312461;
    msg.custom.assign("CRVLWMZVDHBCGXHJDUTKRFVBJIFXNKDGVBRAYQHZBBZKESHHNHOLEMNTGAPSLOAUTCDPMVLQFOYSJYTRSQLERNKBOHYWCAYYFLFWURMYIEVLQZMPGUWPGKQATWKESAUPGTMXXZZIZZNBSURSDAGUKJIDKLRMNZJJBTGMOEOTPAWPMBSCGXVKRGHNW");

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
    msg.setTimeStamp(0.408739444088035);
    msg.setSource(1029U);
    msg.setSourceEntity(143U);
    msg.setDestination(248U);
    msg.setDestinationEntity(78U);
    msg.timeout = 53369U;
    msg.lat = 0.3813045805737739;
    msg.lon = 0.45622155988573687;
    msg.z = 0.9744579759024098;
    msg.z_units = 136U;
    msg.speed = 0.7736895877722646;
    msg.speed_units = 127U;
    msg.roll = 0.6199365758674191;
    msg.pitch = 0.6026125907297413;
    msg.yaw = 0.09866526070758941;
    msg.custom.assign("DPOFOOWRULSIQBMATLUYFHSBIHCUCAFTMNSXDZMEDPBDNCLZZNXHQSEYPJESQJXSXNKYQADDKCSKZMWNHKNAZWRWPIKBAVYNADKBMTGQL");

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
    msg.setTimeStamp(0.7545343234560525);
    msg.setSource(60613U);
    msg.setSourceEntity(57U);
    msg.setDestination(25395U);
    msg.setDestinationEntity(83U);
    msg.timeout = 29843U;
    msg.lat = 0.8754206204348239;
    msg.lon = 0.6890950973266375;
    msg.z = 0.6448689832625183;
    msg.z_units = 56U;
    msg.speed = 0.5446390329176823;
    msg.speed_units = 59U;
    msg.roll = 0.8297300774257024;
    msg.pitch = 0.708692325693887;
    msg.yaw = 0.17907530958417228;
    msg.custom.assign("DDPZMOYATBNNMLGELCRWQSCHTGDAKBKUIIUVZPXYVYOFTIZRFSFVUUNQEVBJUXZYHJCKADNPMABIXVILVFQGSHAXSKEHGBFRQMAEJHQCOGXMWOVBWTAJMKYSWIEFXSHFWVCWYIAGFBPJBPZTQQRXRSXTGNUMLDC");

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
    msg.setTimeStamp(0.8463281872968696);
    msg.setSource(24655U);
    msg.setSourceEntity(62U);
    msg.setDestination(50128U);
    msg.setDestinationEntity(226U);
    msg.timeout = 22828U;
    msg.lat = 0.9793507207687663;
    msg.lon = 0.8915788531623187;
    msg.z = 0.2730409117090108;
    msg.z_units = 110U;
    msg.speed = 0.1662236581698422;
    msg.speed_units = 55U;
    msg.duration = 38356U;
    msg.radius = 0.7884199988784907;
    msg.flags = 165U;
    msg.custom.assign("UWWRXQOCZVFIZPRSHVNTGEWBWTAUYWYEPKMGIVONCCPEDWRNYBQZOMTNXOKQSSJKCWYKNZIBAPFPUXJYBMMALBSTPGSQFEPTICXAWWHILAMEERZTRSVHVLNBANLHUKJPCJYVJTLSRCLTYPXOHNKDFFOKZRJCNMIVBJHXFYLSYGMARDFXFZVFMPXGHROEQWDHQJH");

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
    msg.setTimeStamp(0.31521624388815217);
    msg.setSource(14062U);
    msg.setSourceEntity(83U);
    msg.setDestination(7985U);
    msg.setDestinationEntity(248U);
    msg.timeout = 51951U;
    msg.lat = 0.9752924785516384;
    msg.lon = 0.7498252926121701;
    msg.z = 0.34415343347373073;
    msg.z_units = 57U;
    msg.speed = 0.5459035614330667;
    msg.speed_units = 129U;
    msg.duration = 58228U;
    msg.radius = 0.26820736391348843;
    msg.flags = 156U;
    msg.custom.assign("RQDWLBAPQALTYYPHLKHRRSYMVYYJTTGWRVZGBUXZIBSXCWIBVOLLZMNJOFQYMSBCRJIASKWIGDDVHQFKTFKKVBTKHFEXEOCPEAEVLUISCLMACMJZXUZRRFZIOAZVXYNSSMNZJXQUJZUXBBXWHYNLZTPPVBSEEUHTVJKGRUMPJAGXUAAJSDGFUDOFCOCIQBTWPTKYHWFNGSMGNCOIQGNWFPMDEEGMJDXQEYENNITRIH");

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
    msg.setTimeStamp(0.3280978044377989);
    msg.setSource(55324U);
    msg.setSourceEntity(246U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(156U);
    msg.timeout = 3012U;
    msg.lat = 0.30301613751436296;
    msg.lon = 0.11126400610795395;
    msg.z = 0.5070666250740063;
    msg.z_units = 246U;
    msg.speed = 0.2807482283715733;
    msg.speed_units = 17U;
    msg.duration = 25594U;
    msg.radius = 0.08384298956816127;
    msg.flags = 51U;
    msg.custom.assign("GEFRJRDGCNSFMLBGSEAJTLUSWEZQBBINWSSCWCUIXHSTPGZVQCSNDAXKEZNOGAYIRPEZDECRVMVFRLRBITOYKDMLHQHPNXZAROTXLWRGCPUFYPVZAUDFIKUIJGVLQZVDRFNCOIHJMQYFWXYBSVGYMDBAHKPHJJITAEHDSRVXHKIMCOSQNBKTGOPVAUUAQWYWTYCPQXOZYMQADEFLLNTZ");

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
    msg.setTimeStamp(0.35449184410669055);
    msg.setSource(52492U);
    msg.setSourceEntity(253U);
    msg.setDestination(48389U);
    msg.setDestinationEntity(54U);
    msg.custom.assign("OKKKCIQTLFLUXENXGJGERMQPHPFULLPIWGJZCSRGMHZUNYPWXSEYWZFEVKFDD");

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
    msg.setTimeStamp(0.3938046692426368);
    msg.setSource(53824U);
    msg.setSourceEntity(7U);
    msg.setDestination(26463U);
    msg.setDestinationEntity(146U);
    msg.custom.assign("SGYXBFWLPMLHAPLZOPHVJLEEHOILNTQTNGOBKICQAIWLOBEGKRKDHXBFIICWZNFXSMZXROMIMUYKYZRUCVACDVKWWEZCUNDDMISGHSAEMHAEPDKGJNMDABKHUGMYFTZWLYUCBYECRAQJLQJJZPSPECGSNOEXHAGYTJHTFQNUQDPQTKQRBDXXBVWYQLUWYRPVVKWOVZHEMNFGJJRUZ");

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
    msg.setTimeStamp(0.45729375402449257);
    msg.setSource(48947U);
    msg.setSourceEntity(208U);
    msg.setDestination(24814U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("QUJEBAPFJNDMABJCCWTPYLHEHOWQPBWNRNGVMVPKTJIZMJFDNMBSUONZTXHSUFBVVFZUQEVKDBGIYSBBPROMQZOISTZHLLKZPGUPMZRAZFMXXPTGONVALCOTLAADYRBCQKDWRPUHSFXEDEVZOKCEJINRIYXEOJOLLMPBGGTJNDIALVCAUINKSLW");

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
    msg.setTimeStamp(0.15385343555211273);
    msg.setSource(5281U);
    msg.setSourceEntity(190U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(58U);
    msg.timeout = 54610U;
    msg.lat = 0.601900939361511;
    msg.lon = 0.635770082816482;
    msg.z = 0.5018885505589175;
    msg.z_units = 123U;
    msg.duration = 63416U;
    msg.speed = 0.36893210796251463;
    msg.speed_units = 150U;
    msg.type = 158U;
    msg.radius = 0.001469830444287834;
    msg.length = 0.013251591299254462;
    msg.bearing = 0.6489220941853824;
    msg.direction = 240U;
    msg.custom.assign("CUBRSEFQRCKIJOTHTRMGGNMCJNDFWJILEOWLYNRQJYFDAPHAFMWWLRPZDXKBFDASQSBNRKPRSITRVXZUXXCQJEFQZDEOTOAUHGPAAHBHYDPVGZYNCTAVKPUIGDAR");

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
    msg.setTimeStamp(0.03157636814659426);
    msg.setSource(63379U);
    msg.setSourceEntity(233U);
    msg.setDestination(9180U);
    msg.setDestinationEntity(141U);
    msg.timeout = 14167U;
    msg.lat = 0.04989090332159185;
    msg.lon = 0.6488709860647879;
    msg.z = 0.5799947341551731;
    msg.z_units = 252U;
    msg.duration = 64570U;
    msg.speed = 0.1404935784602912;
    msg.speed_units = 23U;
    msg.type = 242U;
    msg.radius = 0.6143978794523667;
    msg.length = 0.45416560853120147;
    msg.bearing = 0.33753447532956926;
    msg.direction = 43U;
    msg.custom.assign("VKDVLQEYFOPRDQHEFXWSVTHCXMNQYCXUYQLKUNCZONIRWYIJJGSOROYFZYGEBSVNTGITPDNDA");

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
    msg.setTimeStamp(0.3735504145688968);
    msg.setSource(43094U);
    msg.setSourceEntity(234U);
    msg.setDestination(5053U);
    msg.setDestinationEntity(252U);
    msg.timeout = 15242U;
    msg.lat = 0.23051780313941617;
    msg.lon = 0.8984952082952117;
    msg.z = 0.4879487874668652;
    msg.z_units = 223U;
    msg.duration = 14697U;
    msg.speed = 0.7486059642770562;
    msg.speed_units = 20U;
    msg.type = 221U;
    msg.radius = 0.3134179827602458;
    msg.length = 0.8567297482503247;
    msg.bearing = 0.028696645517176878;
    msg.direction = 99U;
    msg.custom.assign("JGPRDNVPZIBNGLIXMZEDYZCFZNGQYWAHEFNLMWONWBKHABHGVARPYSKNKBIGKPDRERCZPJSGDSTPEHQFUXBZNMTAAUNZGQXLEMDFLYOJRPUCVRTMWMSMHZDTWAYONCTELYTSJFMBJHVPLIWJIUGVCJEZYXKLMPLXTWRJFIWLVQQUOOFIAAHAXRCRYUDQSIYUAVDWLTTPFOIEODBKJQOSB");

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
    msg.setTimeStamp(0.46125176105409305);
    msg.setSource(50303U);
    msg.setSourceEntity(52U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(95U);
    msg.duration = 36507U;
    msg.custom.assign("WXDSVYKKQHZBGWBNCIALLGIPSIWFSUUXRCYMDSHFVVZSRAJVSPIDWURQERGHAXMWOOLDCINALHXITARJTPTXEELIFMVJGXDMQZNJZMDSUBYYSZUWQTOKQLYJUKALGYSHHCNGKBVCNMCOOCBVHUZBGIXTD");

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
    msg.setTimeStamp(0.07278213878984519);
    msg.setSource(19209U);
    msg.setSourceEntity(30U);
    msg.setDestination(57011U);
    msg.setDestinationEntity(78U);
    msg.duration = 55451U;
    msg.custom.assign("ABZBYGGQKZFTOHRVBSVVAXOVIYBNTHKAWNNYUFYHSIITEKIZKYZLHDZCRJDUJPFAKMDGDOVMURCTXEEEPXFIRDLKVBPUWYHL");

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
    msg.setTimeStamp(0.378109993995409);
    msg.setSource(18029U);
    msg.setSourceEntity(19U);
    msg.setDestination(53237U);
    msg.setDestinationEntity(36U);
    msg.duration = 41463U;
    msg.custom.assign("LPOQDVYIDNWEUHEAARIEAODRIZZAOLICOTFCYTTXPBYNUZSUCWRWVNIAFPGMHAUKCWVDQHPPUETPSLRVIXBAKFCQJJCWHYGGHQDIZLEMNWJGYIJKHKEMACGMTFVOODSD");

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
    msg.setTimeStamp(0.434893797531273);
    msg.setSource(40097U);
    msg.setSourceEntity(97U);
    msg.setDestination(55020U);
    msg.setDestinationEntity(247U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8914944157821888;
    msg.control.set(tmp_msg_0);
    msg.duration = 1958U;
    msg.custom.assign("JLKZJJOKUILYMLHJDQODIWVJMKABEHVASFOMFSMVCYIGFLJXQGNZBVUULFZDDAKCRAPPYRJHTWFYRBPEWHFLMVGCZNWQAXWEBJSVTPRFYPGNIIBNCVLPVVREMAOEBXDSZXAURXWGTEISGXKHYINMCRGRNRHEXUKOTUTWAEOAUTFIJMBAYZQPMQNQEKNITBCYHDCGSOSHJDUFLKDZHEPOBOHSQUSYGLFNTWCWVZIQZPQTRCXBZKPGX");

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
    msg.setTimeStamp(0.9909104029447187);
    msg.setSource(6194U);
    msg.setSourceEntity(92U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(218U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.9236179079195751;
    msg.control.set(tmp_msg_0);
    msg.duration = 58418U;
    msg.custom.assign("REGAWCAHSVFCDTUBBTEAQIRSQXGYHCEZJOBNERWAWYRDUG");

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
    msg.setTimeStamp(0.7229454810979299);
    msg.setSource(38404U);
    msg.setSourceEntity(153U);
    msg.setDestination(64814U);
    msg.setDestinationEntity(98U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4294701777U;
    tmp_msg_0.start_lat = 0.42368977809413155;
    tmp_msg_0.start_lon = 0.6614361988334888;
    tmp_msg_0.start_z = 0.879288306524671;
    tmp_msg_0.start_z_units = 239U;
    tmp_msg_0.end_lat = 0.5063301855277362;
    tmp_msg_0.end_lon = 0.5854363458638147;
    tmp_msg_0.end_z = 0.8981834614193539;
    tmp_msg_0.end_z_units = 38U;
    tmp_msg_0.speed = 0.3809472277486722;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.lradius = 0.13628432669102652;
    tmp_msg_0.flags = 182U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62879U;
    msg.custom.assign("YRYKDBSETPSMOEWFEKVBHXGSPCDIPGKJHVQUIJPWUCNQQLEZWQBCMKGBNAFGJAJQTTVPSP");

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
    msg.setTimeStamp(0.555789414812783);
    msg.setSource(55887U);
    msg.setSourceEntity(250U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(232U);
    msg.timeout = 65456U;
    msg.lat = 0.9395130190595261;
    msg.lon = 0.2991372883183515;
    msg.z = 0.09047835593506426;
    msg.z_units = 202U;
    msg.speed = 0.22177261342434562;
    msg.speed_units = 46U;
    msg.bearing = 0.6810219780333001;
    msg.cross_angle = 0.8138983153354598;
    msg.width = 0.802560199197032;
    msg.length = 0.4244422496947934;
    msg.hstep = 0.8283860769410292;
    msg.coff = 160U;
    msg.alternation = 213U;
    msg.flags = 201U;
    msg.custom.assign("NJUYMDXUXTJILEGXVTSAURDEYGRKBDKTJDPQEQNQIQALOGXEZXQIOZVLBIDIGSPUESAEMFHCJLZARHDBVRNCVCBHYRXAFTXJSWUQOKMUONTKAANMZQCSUFPGSIPXQMGMPJHFBYOVRZEKTOR");

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
    msg.setTimeStamp(0.5987272227122024);
    msg.setSource(28930U);
    msg.setSourceEntity(138U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(101U);
    msg.timeout = 28372U;
    msg.lat = 0.2951474361374815;
    msg.lon = 0.6287071662434942;
    msg.z = 0.3860014157495609;
    msg.z_units = 7U;
    msg.speed = 0.21152968596613875;
    msg.speed_units = 80U;
    msg.bearing = 0.32933950374572163;
    msg.cross_angle = 0.6678587372696747;
    msg.width = 0.22354544824657652;
    msg.length = 0.8631858547901584;
    msg.hstep = 0.8207810880773634;
    msg.coff = 179U;
    msg.alternation = 226U;
    msg.flags = 79U;
    msg.custom.assign("DTFTLUYXZNBHUODLDFXCVVWNXSTJHAWERPFJSLODTYGMKKEAREPEIUFIGGANGYMFQFQROKKMNNBEWCNJVNXWIBMJIXDNTKLQKAOYVYOXEXHLWGUMDOWBJTSDPYVNLYSHHVQDXMSUJCBFUPKFQGVELCRJIZSAHQZZZBWJPTCMWLPFURZPSIBIWWGPZMEKO");

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
    msg.setTimeStamp(0.6011484690777366);
    msg.setSource(40465U);
    msg.setSourceEntity(237U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(206U);
    msg.timeout = 38885U;
    msg.lat = 0.6835898127729125;
    msg.lon = 0.046178791925789;
    msg.z = 0.8186276786120484;
    msg.z_units = 222U;
    msg.speed = 0.4071136840891134;
    msg.speed_units = 6U;
    msg.bearing = 0.42020410007477516;
    msg.cross_angle = 0.50065255250218;
    msg.width = 0.9878555968091585;
    msg.length = 0.16279448598722246;
    msg.hstep = 0.13681099746010295;
    msg.coff = 232U;
    msg.alternation = 210U;
    msg.flags = 166U;
    msg.custom.assign("TRTLNMKOUCCUWTAVQAQGJOYQPWHGPXECCDONGCXSAUGOFWQCZZGURSPTRMPUZODYBYIMSTZWMTJCEEKNFZXGFKSBV");

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
    msg.setTimeStamp(0.8379447653233044);
    msg.setSource(22590U);
    msg.setSourceEntity(85U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(59U);
    msg.timeout = 35533U;
    msg.lat = 0.7909806256920364;
    msg.lon = 0.5688648862874567;
    msg.z = 0.17493865326449565;
    msg.z_units = 234U;
    msg.speed = 0.9164108730711438;
    msg.speed_units = 165U;
    msg.custom.assign("DHPLWLATXPOMJSPNWOCNVHGDLJDYIIVDUMPHAXVLNWNPVSCKCYAKMQYGFXNGIZDJYOLIHNALOWLWUWXVFTPYDXIGKOOZSTKPMSIMLLRRQQNBEHISZCRFFXWARZTSUWWSMRAVIYJXLUEBQJUZSTEAFGODEPGSREVRJBYMCUJOABHKKZQZIBEXATEBJZUWQYQFCMFEECTUDSJBCNHOHFBEARVZGHMUBRCFNXBKQGIXGRJ");

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
    msg.setTimeStamp(0.6288965363428233);
    msg.setSource(48679U);
    msg.setSourceEntity(205U);
    msg.setDestination(9389U);
    msg.setDestinationEntity(33U);
    msg.timeout = 54609U;
    msg.lat = 0.9097345076407568;
    msg.lon = 0.07391002698682547;
    msg.z = 0.13956920090978964;
    msg.z_units = 87U;
    msg.speed = 0.18353374023028224;
    msg.speed_units = 176U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8850476119152246;
    tmp_msg_0.y = 0.26641020761947753;
    tmp_msg_0.z = 0.21961401606727404;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AESWMUNBNYQFEHJBSROPDANVEXYGJUOXSYMOZZZKXDVOZNGKKCWMGPROVKEEYULUVSOUEUADVAXDQXMBQUMTKRTWFDLYLJDUBLATOHVCUIRQJIAQIBDEPJZNZHCUZRHNTPPIMCTYLSSPTQRDOCVFWRDMHWSWGOPNFJWFHBZHCVZKCWGBAXAJFLINYTMZQHAFDRVPIGTG");

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
    msg.setTimeStamp(0.40128974111405336);
    msg.setSource(58372U);
    msg.setSourceEntity(19U);
    msg.setDestination(11289U);
    msg.setDestinationEntity(39U);
    msg.timeout = 42922U;
    msg.lat = 0.3299418048305296;
    msg.lon = 0.8598030130402253;
    msg.z = 0.4006167121165135;
    msg.z_units = 197U;
    msg.speed = 0.8002132289527587;
    msg.speed_units = 32U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4644899940784455;
    tmp_msg_0.y = 0.4241129700037862;
    tmp_msg_0.z = 0.8252394265916841;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VOWMWANINJRHQTUWIKAOZQSMENLHEFDBJUCIIMPDBSOSQGNIUBPCIOMJOVKAXWWRUABAEHNSXSMGRTXFDQIOCNYTVRXTJFVYZEDHDBPUO");

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
    msg.setTimeStamp(0.9453749778114531);
    msg.setSource(46962U);
    msg.setSourceEntity(64U);
    msg.setDestination(59679U);
    msg.setDestinationEntity(74U);
    msg.x = 0.6531527211566317;
    msg.y = 0.7746743049642213;
    msg.z = 0.558042313405765;

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
    msg.setTimeStamp(0.3850882219009234);
    msg.setSource(32118U);
    msg.setSourceEntity(196U);
    msg.setDestination(8450U);
    msg.setDestinationEntity(211U);
    msg.x = 0.6703382268303508;
    msg.y = 0.5127745474373958;
    msg.z = 0.3623567980175587;

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
    msg.setTimeStamp(0.38573123464246595);
    msg.setSource(60683U);
    msg.setSourceEntity(84U);
    msg.setDestination(41815U);
    msg.setDestinationEntity(183U);
    msg.x = 0.6487644136424442;
    msg.y = 0.7956819860503989;
    msg.z = 0.09883350982913863;

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
    msg.setTimeStamp(0.44204850351326286);
    msg.setSource(38190U);
    msg.setSourceEntity(54U);
    msg.setDestination(13513U);
    msg.setDestinationEntity(149U);
    msg.timeout = 6562U;
    msg.lat = 0.9885008774479501;
    msg.lon = 0.9634394918654692;
    msg.z = 0.5619023123167753;
    msg.z_units = 46U;
    msg.amplitude = 0.15758494958872715;
    msg.pitch = 0.6462095906643796;
    msg.speed = 0.4595837126900706;
    msg.speed_units = 212U;
    msg.custom.assign("SCUBZCLDKULGZYRQVFVMAUHSLETMNBUMTLPGWCTYMWMENACPYHXBVTAFAXYSXZRDFIHVJNUZVPMWRLKIHFSPJOKODEYWCSDNWEROWGHPWABYPHXDZXEQDAWOPXPDCTFKNZELPIHRJRXEVAOOPENUUZ");

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
    msg.setTimeStamp(0.632249372741886);
    msg.setSource(24548U);
    msg.setSourceEntity(67U);
    msg.setDestination(8595U);
    msg.setDestinationEntity(72U);
    msg.timeout = 28251U;
    msg.lat = 0.6855757253692181;
    msg.lon = 0.972718157246149;
    msg.z = 0.6520416545302049;
    msg.z_units = 1U;
    msg.amplitude = 0.9631539790732554;
    msg.pitch = 0.7712741864084038;
    msg.speed = 0.4935395045329609;
    msg.speed_units = 146U;
    msg.custom.assign("QEVEUAFHCEBQ");

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
    msg.setTimeStamp(0.8528183816239576);
    msg.setSource(30772U);
    msg.setSourceEntity(117U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(193U);
    msg.timeout = 30564U;
    msg.lat = 0.9264424447424888;
    msg.lon = 0.18699761820497107;
    msg.z = 0.9959027057220452;
    msg.z_units = 80U;
    msg.amplitude = 0.5946087661595227;
    msg.pitch = 0.09834193875217145;
    msg.speed = 0.8701534788847543;
    msg.speed_units = 157U;
    msg.custom.assign("UOLOCEZSBCHRAELTIDHVIOLVYOTBPADALFJMCBFFGOSOHTSPVNUYG");

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
    msg.setTimeStamp(0.7097753864127821);
    msg.setSource(35367U);
    msg.setSourceEntity(189U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.1493551561239045);
    msg.setSource(49821U);
    msg.setSourceEntity(166U);
    msg.setDestination(33924U);
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
    msg.setTimeStamp(0.9284033708794083);
    msg.setSource(30162U);
    msg.setSourceEntity(137U);
    msg.setDestination(41623U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.4228467145641327);
    msg.setSource(39730U);
    msg.setSourceEntity(97U);
    msg.setDestination(26656U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.8859260433933355;
    msg.lon = 0.2238341656045113;
    msg.z = 0.8108925467600521;
    msg.z_units = 73U;
    msg.radius = 0.7285381292726365;
    msg.duration = 1304U;
    msg.speed = 0.5732770676005031;
    msg.speed_units = 235U;
    msg.custom.assign("GRJFCBNVTZM");

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
    msg.setTimeStamp(0.38912886147168224);
    msg.setSource(9505U);
    msg.setSourceEntity(197U);
    msg.setDestination(31956U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.4605580344768755;
    msg.lon = 0.8639739833953319;
    msg.z = 0.5494365551805125;
    msg.z_units = 222U;
    msg.radius = 0.07681125305336434;
    msg.duration = 65417U;
    msg.speed = 0.9790574102639789;
    msg.speed_units = 194U;
    msg.custom.assign("ZBRAMENYTWBIPMRMSXUUJADCJHFXVYWOLDIZSEPWVPNUKIGCFAWHREKMNEPPWVJRFOESYZCETFOGHGGAXVVDFZSAVNSNEZHTAXILPSWRVTLKTFIIQAJDMQOTLWUYTOYNSWHHKGQDCSRWKFAZEJZEPZNGYOYBDUSGMCJ");

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
    msg.setTimeStamp(0.29074712216932064);
    msg.setSource(4662U);
    msg.setSourceEntity(238U);
    msg.setDestination(65152U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.6457405342521928;
    msg.lon = 0.07677783740955102;
    msg.z = 0.3944916882181302;
    msg.z_units = 242U;
    msg.radius = 0.22144045141551238;
    msg.duration = 12903U;
    msg.speed = 0.7320063353818272;
    msg.speed_units = 110U;
    msg.custom.assign("BAZFVYCEZSULZJIEEUMJNECRHYNMALPLXXJDBOIKDNAWFAPQVCPGASWRPNGIECITIWCYXXOBYZTQBHMMVYSGZTNXGWHQNIHCLAKIGRDTZPQZXDPFPJAKQNWUGTDRGBMCUQYFJHCGMTHOKJVSLJOSFQP");

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
    msg.setTimeStamp(0.360960122936801);
    msg.setSource(56319U);
    msg.setSourceEntity(153U);
    msg.setDestination(28202U);
    msg.setDestinationEntity(13U);
    msg.timeout = 3076U;
    msg.flags = 131U;
    msg.lat = 0.8662973949779732;
    msg.lon = 0.7818836396950313;
    msg.start_z = 0.5793023853081319;
    msg.start_z_units = 119U;
    msg.end_z = 0.867293936566689;
    msg.end_z_units = 194U;
    msg.radius = 0.8147684735345951;
    msg.speed = 0.8299319416469793;
    msg.speed_units = 119U;
    msg.custom.assign("MLZVKYNCJNMDGKBNVWSXQEXYDHUVLTIKAQHLGBJPCDOVRGQXVMGRRROZQKBLRLLBOPIFFRBRHMTJFIADAOTZCERIO");

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
    msg.setTimeStamp(0.0007930134193960825);
    msg.setSource(49076U);
    msg.setSourceEntity(178U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(82U);
    msg.timeout = 11797U;
    msg.flags = 99U;
    msg.lat = 0.6104242219704388;
    msg.lon = 0.035102446792312114;
    msg.start_z = 0.6521578992790856;
    msg.start_z_units = 185U;
    msg.end_z = 0.1333201703456024;
    msg.end_z_units = 29U;
    msg.radius = 0.5995622247364357;
    msg.speed = 0.43861786977575745;
    msg.speed_units = 237U;
    msg.custom.assign("HFGLNPLOPRGCOYGKWBILFYPTHEZXEUDMSTDNPJPQBMITZGQWGBLARPDLCZAKYCBUWDFSNRIKMYKGEAQXAGFKQUKAOSMJCJAJOLFEYOOWLCQVDBNZVYZEUKDHCFMWUNXUMJQTHZHGNLDXNHJSOZUVTZTVFYOQIXXERMPWHILIMSWHDDSVJRFGCJKSRXNHVGTZSTQCXAYVMOFQYEJLWVXQJIIATMKWPECVYBVANHIABWUZEUKRRRSBXBFUBD");

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
    msg.setTimeStamp(0.40994752160625514);
    msg.setSource(56419U);
    msg.setSourceEntity(72U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(11U);
    msg.timeout = 61658U;
    msg.flags = 38U;
    msg.lat = 0.10091435332799659;
    msg.lon = 0.7884455171597702;
    msg.start_z = 0.8105300583016695;
    msg.start_z_units = 234U;
    msg.end_z = 0.8009639989376622;
    msg.end_z_units = 173U;
    msg.radius = 0.28099666650257604;
    msg.speed = 0.8737593215520724;
    msg.speed_units = 77U;
    msg.custom.assign("NYXQQUPAIXGZBHFDOLBTVGIKHZMABGPECMOSRSJEDRCHFQSUIQEWMSEHWBKCVVBOIPCWDSFSJXIXUZGUYGPEENCWHMXMROHOLKSZLFSNYYWRLMOSEGRFEZLAIATUQACCODXYKTJTWTBQVNPRTARRPXFQVPVTRZHKGBYSADAITINIWMJQLIXHCYGJUBCDUMNFFOULWJPLZEUQHLNLXKBEODJCAJGXKZDUZTQNYKRDK");

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
    msg.setTimeStamp(0.5856370783914724);
    msg.setSource(31039U);
    msg.setSourceEntity(64U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(199U);
    msg.timeout = 21474U;
    msg.lat = 0.8108262212715087;
    msg.lon = 0.20196261878965494;
    msg.z = 0.2346077190882333;
    msg.z_units = 178U;
    msg.speed = 0.40769186862760054;
    msg.speed_units = 244U;
    msg.custom.assign("ZMZHLNYIBDUAPIGVNKVTSDCPKMHENCRJVNSFSWXWQRAHEIFWRUXPLGHCQIDNUHWBXYEFZRMSCUJVGJLAXVLMDHCFFQNFAGQBEDTBS");

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
    msg.setTimeStamp(0.9911086315024282);
    msg.setSource(62010U);
    msg.setSourceEntity(97U);
    msg.setDestination(52316U);
    msg.setDestinationEntity(50U);
    msg.timeout = 30631U;
    msg.lat = 0.5910598786624238;
    msg.lon = 0.9575780734533424;
    msg.z = 0.7130525776665149;
    msg.z_units = 16U;
    msg.speed = 0.3477111759999306;
    msg.speed_units = 167U;
    msg.custom.assign("FSMNFOIBWTWOVNYSGUCNFZZYBLFARWSUPQLMFLXMBVPJYPYXNVLQCE");

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
    msg.setTimeStamp(0.8456457965269634);
    msg.setSource(49477U);
    msg.setSourceEntity(41U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(240U);
    msg.timeout = 56326U;
    msg.lat = 0.5661834041673836;
    msg.lon = 0.34982003732369715;
    msg.z = 0.09253231541688234;
    msg.z_units = 85U;
    msg.speed = 0.778321395036325;
    msg.speed_units = 81U;
    msg.custom.assign("NPUZJTYKARSNNJEGHNWLIDWMLLXYXCFXMRLTCDSLDGYKFWONDTPGDFRRMPTRZYDIAGGALYZILG");

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
    msg.setTimeStamp(0.3017500116227533);
    msg.setSource(39860U);
    msg.setSourceEntity(15U);
    msg.setDestination(24266U);
    msg.setDestinationEntity(170U);
    msg.x = 0.14480857790457224;
    msg.y = 0.07974508495841026;
    msg.z = 0.01154311052565593;
    msg.t = 0.33639473205663395;

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
    msg.setTimeStamp(0.5228287379253113);
    msg.setSource(44152U);
    msg.setSourceEntity(15U);
    msg.setDestination(31129U);
    msg.setDestinationEntity(205U);
    msg.x = 0.06863954742539446;
    msg.y = 0.9360001799738722;
    msg.z = 0.48108807260700936;
    msg.t = 0.8175323413703036;

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
    msg.setTimeStamp(0.14933608498524276);
    msg.setSource(30508U);
    msg.setSourceEntity(49U);
    msg.setDestination(49917U);
    msg.setDestinationEntity(114U);
    msg.x = 0.16506620537084837;
    msg.y = 0.22302282345946;
    msg.z = 0.09023844910558754;
    msg.t = 0.2041459895182539;

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
    msg.setTimeStamp(0.6736156476145031);
    msg.setSource(41179U);
    msg.setSourceEntity(245U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(154U);
    msg.timeout = 11318U;
    msg.name.assign("WFILEKUNWPMRUHFOVXOGCZIUIYCSXFBKBYXLOVZOOAWQLWPBBKUNAFNVRGTKZMPDDMWYFNBSAJYJGHDGUAYAERUPHJBUTXRYIAQOTDFWYGAQWEQAOYHHKYKUCVYLZIRKEXCJLTEORILCHEKH");
    msg.custom.assign("GGQVJKNPRSDOMRUYXFMOKQLHQKINLBDHWUZKJZUGNFDSOEGFXISVJPPERHSCMZFQXJQKDSFQJTJMFTYHKFGHOBWLWRZHCKRJMVYDONAOFNNITWDQXUISTEECRGRGDLZIASPEBVDTQQMBUAEKZMWJUECHIIAUZUFIPOYLAWYCWWTADLKBVPYBSXUMAUPOJVAELGVVSXPNMBIXPWAOZTPCBCXCZYYLIB");

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
    msg.setTimeStamp(0.7532860457976001);
    msg.setSource(41144U);
    msg.setSourceEntity(203U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(101U);
    msg.timeout = 19443U;
    msg.name.assign("QSSMYDTMBNUXIHEJPEWWTOTDTNSYGCBBXTUNSCNTVVPSZCJCANTYBRWXQZPTOIXPPLJKEQEDXWURHOZEAINECQYXRIIUNRZBVWBGLLZSCHPAAFZWRQUGULRVVWKFUOLQVNPTKUDMOFVMHUXAGQJFEMOOSBICRDXKJBMIHQCQAASSYZGFKVOZNZKAMXIKPHLYPFGIKG");
    msg.custom.assign("RURZIETZUNQDGRSQXVXNA");

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
    msg.setTimeStamp(0.15333778700359668);
    msg.setSource(10485U);
    msg.setSourceEntity(120U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(26U);
    msg.timeout = 53350U;
    msg.name.assign("EKWVEVIQDGIMXEBZKFXCBBHYVDKOUWNYZMEPZRDWOMFVPPUUAXTODMPFYDQGMGVQYLGWFTRWNGGJJHZYTZAQSEUNXSEOWP");
    msg.custom.assign("JCTMMGORXZIFZJBMEALWZUZHKPKVNURQEMIYERXUWXPQXKHHQWVRDHYIKRJZOVJRMTGAOGQTNJYVCAIWCEOLSAUPXPBMGFGFEEHEUYPWOTNGGJTCAKNKFVISHHALRIRTPQCOXNUBTBXLWZTDQDEHDCUJSVULOBCWSUFMVVDLMSDPCTYNFGNWHCGJQYNOTUBNZIALK");

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
    msg.setTimeStamp(0.27085010218733285);
    msg.setSource(20342U);
    msg.setSourceEntity(31U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.474675364739483;
    msg.lon = 0.7455508557138778;
    msg.z = 0.43880545642998925;
    msg.z_units = 81U;
    msg.speed = 0.046049848816865024;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6080292411596728;
    tmp_msg_0.y = 0.6739954294306904;
    tmp_msg_0.z = 0.17858477537218131;
    tmp_msg_0.t = 0.6079917502779904;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5331986449590366;
    msg.custom.assign("HKOHVDYTRXFQMGXMFLYIIDLAELLUOAMVFEGKQIXQICUNLMWOIRNDKVTHBHEBOVEHPHKJSKPCKVFZAYBNTANBQMPMZTSASDMGTLFVYAYIEWJLFDONNHBCQJAPRTUWFGXGBSEXRQKIFWNWBLJDCURUJPGATYQZCWTOPXJUIMWWPBVQLKRYXXJXYUPHHDWVUWKMKOHOBTCFOZZJAVUEZQCGCEQJGYSUSIEIMZGRRRDEGDSXJSFVAZNZNC");

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
    msg.setTimeStamp(0.27441649581295324);
    msg.setSource(13044U);
    msg.setSourceEntity(148U);
    msg.setDestination(42516U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.4479626614024669;
    msg.lon = 0.7565952181101367;
    msg.z = 0.8654209562420258;
    msg.z_units = 102U;
    msg.speed = 0.8000783686353091;
    msg.speed_units = 16U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6999333523618444;
    tmp_msg_0.y = 0.5239689395044673;
    tmp_msg_0.z = 0.834729602689456;
    tmp_msg_0.t = 0.24197574461991134;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 43711U;
    tmp_msg_1.off_x = 0.9177456522292751;
    tmp_msg_1.off_y = 0.4141898866112814;
    tmp_msg_1.off_z = 0.752544801494796;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5553407796928264;
    msg.custom.assign("RHZGYVUPMCVWTRHZZMNJHQEHGGZCIYTBFRCFMPPIFJEITUTGIVQBNPHMPEPABNKXATILBUDLXHCMIALQKJRTOWDFDOYMFKCFEMRZJFTGYIUGJEBUHIGGONYMQGLCNEPRAKOHXUVEXQWSJEQNWVZXSMGZFSCRDHJVQYQLKAKTBRAXYJYWXHPSSDA");

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
    msg.setTimeStamp(0.6712452045368213);
    msg.setSource(33348U);
    msg.setSourceEntity(172U);
    msg.setDestination(56216U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.9792232702663756;
    msg.lon = 0.7494923472293581;
    msg.z = 0.7395084944320419;
    msg.z_units = 77U;
    msg.speed = 0.7148627778377954;
    msg.speed_units = 44U;
    msg.start_time = 0.9458049303580199;
    msg.custom.assign("CJGYAUPRXEKMHKGDFESLOIJQSMLANUSGSVBIFXSFVZUUBHZODP");

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
    msg.setTimeStamp(0.6130595040710368);
    msg.setSource(40604U);
    msg.setSourceEntity(34U);
    msg.setDestination(8084U);
    msg.setDestinationEntity(200U);
    msg.vid = 12046U;
    msg.off_x = 0.6802478299714533;
    msg.off_y = 0.3138936756824441;
    msg.off_z = 0.7312949716190444;

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
    msg.setTimeStamp(0.41429024437367923);
    msg.setSource(64097U);
    msg.setSourceEntity(162U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(175U);
    msg.vid = 26391U;
    msg.off_x = 0.2398387111236251;
    msg.off_y = 0.18081634479766462;
    msg.off_z = 0.8857853545597375;

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
    msg.setTimeStamp(0.4206600979456836);
    msg.setSource(35258U);
    msg.setSourceEntity(207U);
    msg.setDestination(16893U);
    msg.setDestinationEntity(217U);
    msg.vid = 36317U;
    msg.off_x = 0.684787961950004;
    msg.off_y = 0.3179602139078881;
    msg.off_z = 0.7684283718170938;

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
    msg.setTimeStamp(0.8899081088826005);
    msg.setSource(8460U);
    msg.setSourceEntity(51U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.313498884412136);
    msg.setSource(49109U);
    msg.setSourceEntity(43U);
    msg.setDestination(24838U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.7493021719475278);
    msg.setSource(62704U);
    msg.setSourceEntity(145U);
    msg.setDestination(31875U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.32351920358925434);
    msg.setSource(23716U);
    msg.setSourceEntity(251U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(189U);
    msg.mid = 40603U;

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
    msg.setTimeStamp(0.8751857778967278);
    msg.setSource(31979U);
    msg.setSourceEntity(238U);
    msg.setDestination(717U);
    msg.setDestinationEntity(217U);
    msg.mid = 12167U;

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
    msg.setTimeStamp(0.010977401959762378);
    msg.setSource(38551U);
    msg.setSourceEntity(3U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(11U);
    msg.mid = 56522U;

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
    msg.setTimeStamp(0.19511172032665447);
    msg.setSource(37804U);
    msg.setSourceEntity(51U);
    msg.setDestination(48583U);
    msg.setDestinationEntity(130U);
    msg.state = 246U;
    msg.eta = 31284U;
    msg.info.assign("GFINHQVLRLMKRAXHJNWTXOQMQGGKNSEHECXNAAUIFIJHAMGEQRLMZISNSORXOHYBJDPTXXIBYHYRCSKTMBKWIQJULACBSQOJWYELPKYWQDTDMZZJCRFIDMTVOXZPIMNFPLTCVWRGUAUCGVDGHCRZBXYOQ");

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
    msg.setTimeStamp(0.6827734730696355);
    msg.setSource(44583U);
    msg.setSourceEntity(254U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(50U);
    msg.state = 227U;
    msg.eta = 34214U;
    msg.info.assign("VBXKLLSCSSSZOIJCEOIMRCARFARCKJGTNROXMPXRQDUTLJHKFESCWYREMJWRCOWQYHUKPFTJJWEMLDYIMEZSVINMEFYUEYBGIZHVJUTNNMLBBSAWIBJKOHTNYWZVODNGUDTTGNHKIFMZ");

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
    msg.setTimeStamp(0.13663928485746202);
    msg.setSource(5849U);
    msg.setSourceEntity(46U);
    msg.setDestination(45455U);
    msg.setDestinationEntity(178U);
    msg.state = 72U;
    msg.eta = 47448U;
    msg.info.assign("YBDDOICWLRHIUKJKEUTZTPRSMJTWFFDXNNZAVBWCLDVATTPNEEFKBIAOGKRWPPUZWKFQVRHGUCDUSBZVCLYMEV");

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
    msg.setTimeStamp(0.45818508191000107);
    msg.setSource(55426U);
    msg.setSourceEntity(218U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(31U);
    msg.system = 29592U;
    msg.duration = 23221U;
    msg.speed = 0.6577482487351635;
    msg.speed_units = 218U;
    msg.x = 0.3789943074523501;
    msg.y = 0.9921722334859392;
    msg.z = 0.1982749447188743;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.40686198778265603);
    msg.setSource(30922U);
    msg.setSourceEntity(82U);
    msg.setDestination(48159U);
    msg.setDestinationEntity(231U);
    msg.system = 14423U;
    msg.duration = 34442U;
    msg.speed = 0.9925321719638749;
    msg.speed_units = 100U;
    msg.x = 0.8104375660433636;
    msg.y = 0.35513711072946164;
    msg.z = 0.6560388454817464;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.3084348415934608);
    msg.setSource(51797U);
    msg.setSourceEntity(142U);
    msg.setDestination(44689U);
    msg.setDestinationEntity(66U);
    msg.system = 46731U;
    msg.duration = 11416U;
    msg.speed = 0.6321268471865195;
    msg.speed_units = 10U;
    msg.x = 0.12479091230422645;
    msg.y = 0.4485217766948657;
    msg.z = 0.6880557358293415;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.6763119709041828);
    msg.setSource(25134U);
    msg.setSourceEntity(149U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.5430002515270062;
    msg.lon = 0.2405577373389821;
    msg.speed = 0.5850058838723686;
    msg.speed_units = 29U;
    msg.duration = 43114U;
    msg.sys_a = 39651U;
    msg.sys_b = 6480U;
    msg.move_threshold = 0.39272248894708517;

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
    msg.setTimeStamp(0.8557914807881226);
    msg.setSource(36149U);
    msg.setSourceEntity(200U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.9950102115996661;
    msg.lon = 0.47082309486762974;
    msg.speed = 0.23969272717625623;
    msg.speed_units = 170U;
    msg.duration = 23932U;
    msg.sys_a = 14767U;
    msg.sys_b = 34759U;
    msg.move_threshold = 0.1883685010103302;

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
    msg.setTimeStamp(0.767857964024604);
    msg.setSource(2432U);
    msg.setSourceEntity(135U);
    msg.setDestination(25958U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.6939387458634302;
    msg.lon = 0.9424445898363366;
    msg.speed = 0.3031179679868956;
    msg.speed_units = 129U;
    msg.duration = 26918U;
    msg.sys_a = 6U;
    msg.sys_b = 7146U;
    msg.move_threshold = 0.7254706650697124;

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
    msg.setTimeStamp(0.011325232685288511);
    msg.setSource(26021U);
    msg.setSourceEntity(188U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.8075863247396449;
    msg.lon = 0.41291646651297054;
    msg.z = 0.4886235286717272;
    msg.z_units = 74U;
    msg.speed = 0.021846848191347412;
    msg.speed_units = 242U;
    msg.custom.assign("RCMUIYYKNAWHUDMXDPJVLOPZHNEKIJNKTDNGVQBWEVJZSKMQIZIWNCNSPABWYZBBFOTJGPFOLXCBDSVBLGJLURKHFIGDUADLRJKJFMRDAHAGJSIHRALTBVYZZQNBQPTCEURQYEANFTODGUEUOEXWQOHIVSXQHFLBZHCY");

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
    msg.setTimeStamp(0.8862121281282248);
    msg.setSource(6428U);
    msg.setSourceEntity(219U);
    msg.setDestination(21621U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.4088260098716493;
    msg.lon = 0.88780731129013;
    msg.z = 0.20102506188348535;
    msg.z_units = 149U;
    msg.speed = 0.19377414205637056;
    msg.speed_units = 109U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.019655516669628392;
    tmp_msg_0.lon = 0.19738354099217814;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MSJKFNMKZNGYO");

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
    msg.setTimeStamp(0.7868742539585312);
    msg.setSource(20553U);
    msg.setSourceEntity(135U);
    msg.setDestination(25373U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.9367489493841783;
    msg.lon = 0.9893984891532033;
    msg.z = 0.9163544939846696;
    msg.z_units = 143U;
    msg.speed = 0.6114149588318671;
    msg.speed_units = 148U;
    msg.custom.assign("SXLXIHXEWQJMJBJCAGBFGRROHTLRBZVYFCTNWLYSQARJZEOJSRYOAFCTGHJHFFDWZDYPRGHMBRJUKVKFAOEEMXKNZSDIGDKTVTEIYPEABMCVZHQKKPTYMDUILQKLLGNCBYVSDNJMZXIQPOVTCMWTPPPLXSNFKVNIAGVWUUDECOVBUBWGPITHJROGBNSHUECOIAXSNGLKBIIM");

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
    msg.setTimeStamp(0.9599194879523834);
    msg.setSource(11261U);
    msg.setSourceEntity(202U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.3744940528712756;
    msg.lon = 0.19203311588509797;

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
    msg.setTimeStamp(0.984833024662974);
    msg.setSource(21470U);
    msg.setSourceEntity(12U);
    msg.setDestination(27194U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.013556442734307117;
    msg.lon = 0.7136662776534869;

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
    msg.setTimeStamp(0.5146382631378599);
    msg.setSource(14385U);
    msg.setSourceEntity(68U);
    msg.setDestination(37409U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.176478747516707;
    msg.lon = 0.03635066433702483;

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
    msg.setTimeStamp(0.12092969721083124);
    msg.setSource(62868U);
    msg.setSourceEntity(20U);
    msg.setDestination(2255U);
    msg.setDestinationEntity(71U);
    msg.timeout = 20867U;
    msg.lat = 0.32518676738564445;
    msg.lon = 0.18359843511232388;
    msg.z = 0.9582300644797179;
    msg.z_units = 117U;
    msg.pitch = 0.5415866862342568;
    msg.amplitude = 0.03158801432912928;
    msg.duration = 37579U;
    msg.speed = 0.6312085587795886;
    msg.speed_units = 62U;
    msg.radius = 0.6720274773032892;
    msg.direction = 73U;
    msg.custom.assign("GREPUBHLFKSJHEYBUPJOYZOLMDIOQKMYNWUVYIQWWRPZFVCKZIXJADEJHEYYDOQGRDINVWGIGGVIIQQLPSUINFSTVCGTOVKJKLSAMHSKTSLELAZUZLJXKWFHTZBBFRBTAJPHIYJFSGXUKALBVFNZGPRNVYOMHWFRTOQGXCWAFECZPRCFMOOSJNPSRDCGDXCXUDTCKYXNDMXZUUHKHQBMARBMUXW");

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
    msg.setTimeStamp(0.22016212036725546);
    msg.setSource(39542U);
    msg.setSourceEntity(229U);
    msg.setDestination(29939U);
    msg.setDestinationEntity(253U);
    msg.timeout = 18950U;
    msg.lat = 0.16039410910709162;
    msg.lon = 0.4814565549626463;
    msg.z = 0.46130169861578096;
    msg.z_units = 225U;
    msg.pitch = 0.020677331258245557;
    msg.amplitude = 0.5418827859637309;
    msg.duration = 11130U;
    msg.speed = 0.10186764072434973;
    msg.speed_units = 4U;
    msg.radius = 0.07255875877231155;
    msg.direction = 171U;
    msg.custom.assign("FFMPMURBKUZNSUKYTXBSJODPCZVHPGTFULDVWGMIBWDAVQELHNSI");

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
    msg.setTimeStamp(0.2904860131291427);
    msg.setSource(11805U);
    msg.setSourceEntity(227U);
    msg.setDestination(23728U);
    msg.setDestinationEntity(247U);
    msg.timeout = 58731U;
    msg.lat = 0.6110719918274327;
    msg.lon = 0.19815699428166933;
    msg.z = 0.26521816024956757;
    msg.z_units = 149U;
    msg.pitch = 0.9408811731268345;
    msg.amplitude = 0.20904061765353932;
    msg.duration = 5622U;
    msg.speed = 0.3895446197335527;
    msg.speed_units = 218U;
    msg.radius = 0.18010137069550425;
    msg.direction = 68U;
    msg.custom.assign("UIPGQIDXKQUADNPTQDGRLFHOXPLLUAFXCRVFRQFGPAVXCODQLELKPSYRHGTQLZHVYSUCIOQIIDGYKZTJUZVQSSEKMTCDJMTZKBITORKEVM");

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
    msg.setTimeStamp(0.6534918962006442);
    msg.setSource(1629U);
    msg.setSourceEntity(254U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("SULCFSIQURVNFHPDWXYYVKVXIVSGNPHDDXTHOKULEEQSHDZGDCEEHGQFXOCNWSNAZAAXRBOGCIWKVEOHRKJEIFQLWGTVRMYBEMYVSNUZCVJLOXOYQPTPFSGZLCRUCOGWNMKAWQXSRKGYNQCITLFJAKBINJIBHEUDBMZ");
    msg.reference_frame = 202U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8465U;
    tmp_msg_0.off_x = 0.24180178752743942;
    tmp_msg_0.off_y = 0.6347130433540248;
    tmp_msg_0.off_z = 0.5903902425220018;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LPDUFKEEXHTONVSJATMUBIJQWWTXJNPYYNABJFNBQIVLVPPWWLHHVEZHTMOGAMCBGVLCWFYWPQFBBIYXVSQOXTPGUQEPELGXGJXRVCMBDKPYJNONHOKFG");

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
    msg.setTimeStamp(0.4379613006221881);
    msg.setSource(37764U);
    msg.setSourceEntity(232U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("OOGXLEHICJAVWMBPJBNAZPETXGVMUSJSGYPDKILGNVGXFKKHWCNOBNXWLOBFTHOYVQPTMZLJGAWQDKUPVRYXSVEMCSPRIYYIUVFFIYLOHNXWNJBRQJIQBEPQKSUCUFCZTAGAZSLNMHBCCOTLGZIDKNUFLLMJZXVEHPZQEWFKWZBSYEYYVHWRIXQQRDJRMIEMXSU");
    msg.reference_frame = 60U;
    msg.custom.assign("ZTFALSOVVIIRAMFSIMMNLCDDHFZVCKKSIVJPLXRUECNQJKGKVFCDQAGGZOAQYLTDBCXC");

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
    msg.setTimeStamp(0.33254298743068733);
    msg.setSource(35543U);
    msg.setSourceEntity(231U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("UEBYRCKVHXZPWMEKAOODTEFDRSSKRSFIYN");
    msg.reference_frame = 37U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59171U;
    tmp_msg_0.off_x = 0.6638316361847275;
    tmp_msg_0.off_y = 0.10318500565079514;
    tmp_msg_0.off_z = 0.5858538282835065;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WWGFYSYVPNSQQJNZQRJOBIPGBAQSEVXZQZGSPUITGFNABHD");

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
    msg.setTimeStamp(0.19564425696755605);
    msg.setSource(40935U);
    msg.setSourceEntity(24U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("NWMSKWLUXVRSUA");
    msg.formation_name.assign("QQSJWEHBNIAVJIKNBYLOZQXQHFJYVPXXAJKAKUDVSRDPFKCSULTGLYZFWVAATRTWDFISNNWIRPCQTXNEGWKMDLXGSYOJGYTPDOZYFUOTLEMBVSOVADBGTQCAMHROFHILHYFGPMZXPWKWUKBYUSLELOJHNIUNXRZHJVXRPQIBZNTPJEBRVEJZQEMCWXOCMUGMBDODKZQAIMUZTECGEAJRZLYSDANIBVPRHYCGSOPWTVUH");
    msg.plan_id.assign("AIRQMECPKKYKILDCXXUDXVFNJLVVGFFFJEYHFPNOIDJPWONDIAZYATKCEXNCBWJBJYDSMEOVEFUOZEFTUGWPPNYGFRHWVHUKZFEDMHQWYRITIXRPRLIAMHCYXMDJEUQBBEOHRRDBMLQQOQTWVNTJUCWLHDXZXCMQKNHZIAVAALYLCTZZJPBOKRTPGVBAYVSQULPKSBUTWUGZEJACBRSOOMIQGHKATOLMGNGZDNSJWGSLYU");
    msg.description.assign("IAGAPZJIYKCGWKQKZLOUQMLIMOVQMRK");
    msg.leader_speed = 0.395439165749338;
    msg.leader_bank_lim = 0.41389480273276624;
    msg.pos_sim_err_lim = 0.9480403090243449;
    msg.pos_sim_err_wrn = 0.695364924444993;
    msg.pos_sim_err_timeout = 50663U;
    msg.converg_max = 0.7698562260481221;
    msg.converg_timeout = 7771U;
    msg.comms_timeout = 16059U;
    msg.turb_lim = 0.2651343289120338;
    msg.custom.assign("DIBRSLMWGYEWLZMBUKAGQXRQRITYBHYDPXMZLVWXCCZMVIYSOWEDJYGMONFDMAJQTOETPZIARCLIBJFCBUPPWAKVPTSRTOONQDFSSOLXVFITTVWNZKWNZXFOXECPBFRAEGLJUNBJHOKGKEBQRZMJFUKJNXERVPGHXLKHSCIZIFZGDVUDSHAHVQYKN");

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
    msg.setTimeStamp(0.02929811650233516);
    msg.setSource(19295U);
    msg.setSourceEntity(167U);
    msg.setDestination(717U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("JLITPKIOZXRAECQRQGTKMMXKRJPDABYXGEKALKIVMKANWTCSDBSTBILRIFZKC");
    msg.formation_name.assign("AVOIPOCZTGDXWZUPYPSWVCTXUXEHMUVAKBIZEZLJPNRVTYQJTVYFNNYDDNJRYMVVNLZGDEIKOMMFHZVBGFDYKJSMBGJLDXEVCCRWKPBOQ");
    msg.plan_id.assign("EOLLUIFAACEIJMNQHSBTBVXXNTGVDEXZMRQJSKXTSEIZSGPOKJTXSOEUMIWVVZDBCIPAJGKCLJWOYKNEYWWJRY");
    msg.description.assign("ZUBNKLYJVPBCRGLUUHSJVBGVTIELJJXFXKFLWPAITDQBLZEXEMUISPVP");
    msg.leader_speed = 0.9479132029769879;
    msg.leader_bank_lim = 0.8012622794361989;
    msg.pos_sim_err_lim = 0.7343911648429227;
    msg.pos_sim_err_wrn = 0.2709101996383644;
    msg.pos_sim_err_timeout = 3783U;
    msg.converg_max = 0.7038305999715753;
    msg.converg_timeout = 59951U;
    msg.comms_timeout = 64844U;
    msg.turb_lim = 0.9650985115496397;
    msg.custom.assign("GYNTNGNDDITJABFMKWKBLYDUDAMIGMMTOBRBVWKGQERVYMZUZBVNZXOTNFBVRAXAIHYPXQNSSJXPHPZQSDHDYTCJXOQKRAXZFFUVKURILOJVUDMRFMWCPCVOWSJKHVPVCLGPVOAJECCMFNHKDLPJGBSSSQRICWLSWHBFRBHXKIQTZYJOWDGATWYE");

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
    msg.setTimeStamp(0.930947840750161);
    msg.setSource(62366U);
    msg.setSourceEntity(119U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("NITHDRJWIDHVGH");
    msg.formation_name.assign("AGKHPGRCKXDYNWBOZRMONVEWLIRYEJQKUXLPLRGOFVXJYPMNLBMKURSHPMSNQWDDAWAAPYDCSZUTRZBAISKJTQSOPYFICVIGVWDWJXLXMKSMUJNFEQNVFNCXGVVPIZTTVHAJEZIFROEIKLU");
    msg.plan_id.assign("SSQDRSULFBLN");
    msg.description.assign("MXHQJVMVELMPWDCCGRDUZWNXLRFBGQGJZHFKWSUJGSULVPIHYYJJKRVSWCJIAEDBZNSHUTCCYUONXHSGTDSOMSQUYORTGZFMCSZVFHJHJNCBGMLPIUBEBLDBPCUELTNMTRRVRLODAKVKIFZYAISIQUAWTQORISRTEYXEYDZFPEFLKOWTXQQKAEWCFPQVVPOTIIBXANODPERXAUAVFHZZKMJNOBGWKJXTXOMBFWYNWAMDCNHYGEPGLQKY");
    msg.leader_speed = 0.29404400367713424;
    msg.leader_bank_lim = 0.09452717181045334;
    msg.pos_sim_err_lim = 0.8128929318226896;
    msg.pos_sim_err_wrn = 0.3364387117228522;
    msg.pos_sim_err_timeout = 8628U;
    msg.converg_max = 0.1762191558383459;
    msg.converg_timeout = 39552U;
    msg.comms_timeout = 41918U;
    msg.turb_lim = 0.2721594534796604;
    msg.custom.assign("XHHPVRIXXARVOYSCLCRMMXUTZURQYQALZVABLRFPLIEGUZNDGMYYEYHEEDQQLSTOFVTDQBNSKTCBSVQZNGFFSXJIWEBZVNDWJJNZPOFWEPFRTGLDJPTSHALHNGPFUHUOFSWFWPYCEYKLDSKKKOXJXGKRBTVJAKNCIMUVYNMTWGWUEUXDIQOWRTIRMDUJCODEQJIHPKRCECM");

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
    msg.setTimeStamp(0.5678748465139968);
    msg.setSource(6099U);
    msg.setSourceEntity(169U);
    msg.setDestination(48072U);
    msg.setDestinationEntity(172U);
    msg.control_src = 52992U;
    msg.control_ent = 84U;
    msg.timeout = 0.5504988646534714;
    msg.loiter_radius = 0.41433878839128735;
    msg.altitude_interval = 0.8170120726442128;

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
    msg.setTimeStamp(0.5598546166447144);
    msg.setSource(55954U);
    msg.setSourceEntity(30U);
    msg.setDestination(22390U);
    msg.setDestinationEntity(161U);
    msg.control_src = 30209U;
    msg.control_ent = 237U;
    msg.timeout = 0.5093083397807351;
    msg.loiter_radius = 0.2895975138663135;
    msg.altitude_interval = 0.7661795809150341;

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
    msg.setTimeStamp(0.7087421408668018);
    msg.setSource(49177U);
    msg.setSourceEntity(80U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(98U);
    msg.control_src = 11373U;
    msg.control_ent = 10U;
    msg.timeout = 0.6740306964675276;
    msg.loiter_radius = 0.25072018045413136;
    msg.altitude_interval = 0.4423938335175638;

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
    msg.setTimeStamp(0.19853218118427018);
    msg.setSource(44891U);
    msg.setSourceEntity(155U);
    msg.setDestination(51018U);
    msg.setDestinationEntity(157U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5020730644093416;
    tmp_msg_0.speed_units = 221U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09510997531971699;
    tmp_msg_1.z_units = 19U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.63542666106434;
    msg.lon = 0.18945516221017122;
    msg.radius = 0.12824550614334596;

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
    msg.setTimeStamp(0.2738494501551685);
    msg.setSource(40886U);
    msg.setSourceEntity(115U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(147U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9130741051020026;
    tmp_msg_0.speed_units = 168U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14167729665832318;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5157384813404176;
    msg.lon = 0.604254569508847;
    msg.radius = 0.46861198663811676;

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
    msg.setTimeStamp(0.011740601573825948);
    msg.setSource(40703U);
    msg.setSourceEntity(114U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(26U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1441586571643858;
    tmp_msg_0.speed_units = 80U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.985674799494614;
    tmp_msg_1.z_units = 253U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6042871232478599;
    msg.lon = 0.600486052956679;
    msg.radius = 0.04070284682761405;

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
    msg.setTimeStamp(0.5509982425840375);
    msg.setSource(25191U);
    msg.setSourceEntity(84U);
    msg.setDestination(24542U);
    msg.setDestinationEntity(246U);
    msg.control_src = 43958U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 74U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5511831768569205;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7810769713266629;
    tmp_tmp_msg_0_1.z_units = 52U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.659091369517009;
    tmp_msg_0.lon = 0.9659308835375158;
    tmp_msg_0.radius = 0.8140602673501531;
    msg.reference.set(tmp_msg_0);
    msg.state = 63U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.8048938566741702);
    msg.setSource(13009U);
    msg.setSourceEntity(75U);
    msg.setDestination(56986U);
    msg.setDestinationEntity(211U);
    msg.control_src = 37601U;
    msg.control_ent = 250U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 221U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5090028019593479;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9565132665144982;
    tmp_tmp_msg_0_1.z_units = 165U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7415387709866665;
    tmp_msg_0.lon = 0.48556133239615096;
    tmp_msg_0.radius = 0.8100459307713969;
    msg.reference.set(tmp_msg_0);
    msg.state = 156U;
    msg.proximity = 240U;

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
    msg.setTimeStamp(0.3969506316430621);
    msg.setSource(14280U);
    msg.setSourceEntity(120U);
    msg.setDestination(39066U);
    msg.setDestinationEntity(238U);
    msg.control_src = 56277U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 57U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11360916493806394;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8090461989228754;
    tmp_tmp_msg_0_1.z_units = 201U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4218121148284214;
    tmp_msg_0.lon = 0.4083078324614742;
    tmp_msg_0.radius = 0.7202371319166909;
    msg.reference.set(tmp_msg_0);
    msg.state = 224U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.9003585049349964);
    msg.setSource(17089U);
    msg.setSourceEntity(28U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(115U);
    msg.ax_cmd = 0.4701956183943413;
    msg.ay_cmd = 0.5372425928763341;
    msg.az_cmd = 0.7049716296866776;
    msg.ax_des = 0.49274908691976316;
    msg.ay_des = 0.6811133456802722;
    msg.az_des = 0.9285220355633558;
    msg.virt_err_x = 0.27194272448270673;
    msg.virt_err_y = 0.3243530077073232;
    msg.virt_err_z = 0.1311157084392668;
    msg.surf_fdbk_x = 0.9653357901366935;
    msg.surf_fdbk_y = 0.9121461313202264;
    msg.surf_fdbk_z = 0.5650095769983274;
    msg.surf_unkn_x = 0.6811616792253193;
    msg.surf_unkn_y = 0.5897087873144267;
    msg.surf_unkn_z = 0.91264383420908;
    msg.ss_x = 0.7702938447825824;
    msg.ss_y = 0.6466557373636519;
    msg.ss_z = 0.8697890467276327;

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
    msg.setTimeStamp(0.7193769600937128);
    msg.setSource(57203U);
    msg.setSourceEntity(152U);
    msg.setDestination(48891U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.20771298469905275;
    msg.ay_cmd = 0.08550905805747488;
    msg.az_cmd = 0.3900125151791214;
    msg.ax_des = 0.8606970463016933;
    msg.ay_des = 0.934549750698848;
    msg.az_des = 0.8382571091108488;
    msg.virt_err_x = 0.5326470197447358;
    msg.virt_err_y = 0.7716855934543432;
    msg.virt_err_z = 0.08278481487554978;
    msg.surf_fdbk_x = 0.1803152884072482;
    msg.surf_fdbk_y = 0.3326368237263585;
    msg.surf_fdbk_z = 0.934891814509971;
    msg.surf_unkn_x = 0.828937926723491;
    msg.surf_unkn_y = 0.10835218933894664;
    msg.surf_unkn_z = 0.9843243043428502;
    msg.ss_x = 0.5166010942975583;
    msg.ss_y = 0.1983701390487682;
    msg.ss_z = 0.37140024556237106;

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
    msg.setTimeStamp(0.08938110060615378);
    msg.setSource(49327U);
    msg.setSourceEntity(109U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(232U);
    msg.ax_cmd = 0.1134406455453758;
    msg.ay_cmd = 0.3281380434493071;
    msg.az_cmd = 0.8763225277883708;
    msg.ax_des = 0.48630844383661187;
    msg.ay_des = 0.45888128364150405;
    msg.az_des = 0.5097991359039155;
    msg.virt_err_x = 0.6996804046673496;
    msg.virt_err_y = 0.44600817334612475;
    msg.virt_err_z = 0.08849899522376481;
    msg.surf_fdbk_x = 0.44845575675878613;
    msg.surf_fdbk_y = 0.8974513197025192;
    msg.surf_fdbk_z = 0.43823261279208336;
    msg.surf_unkn_x = 0.14928835130472484;
    msg.surf_unkn_y = 0.7548470853491939;
    msg.surf_unkn_z = 0.7722382830749214;
    msg.ss_x = 0.9736234621376884;
    msg.ss_y = 0.7465224985396824;
    msg.ss_z = 0.7242178952224222;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TDQYCJSCZXZACEAI");
    tmp_msg_0.dist = 0.575390363691941;
    tmp_msg_0.err = 0.5805802672577889;
    tmp_msg_0.ctrl_imp = 0.5123123841662848;
    tmp_msg_0.rel_dir_x = 0.5001951504628196;
    tmp_msg_0.rel_dir_y = 0.3445938611855821;
    tmp_msg_0.rel_dir_z = 0.11557317986593096;
    tmp_msg_0.err_x = 0.6777616833107418;
    tmp_msg_0.err_y = 0.5899656297125841;
    tmp_msg_0.err_z = 0.04527598698121815;
    tmp_msg_0.rf_err_x = 0.3642073865487777;
    tmp_msg_0.rf_err_y = 0.06299012359199252;
    tmp_msg_0.rf_err_z = 0.052808607928183426;
    tmp_msg_0.rf_err_vx = 0.23571457280192687;
    tmp_msg_0.rf_err_vy = 0.6947724407749296;
    tmp_msg_0.rf_err_vz = 0.3690621703217516;
    tmp_msg_0.ss_x = 0.6614088798010618;
    tmp_msg_0.ss_y = 0.8729071415433411;
    tmp_msg_0.ss_z = 0.9979976235014465;
    tmp_msg_0.virt_err_x = 0.6331869646750204;
    tmp_msg_0.virt_err_y = 0.05631861099197699;
    tmp_msg_0.virt_err_z = 0.8039162887604223;
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
    msg.setTimeStamp(0.5919382857075803);
    msg.setSource(15410U);
    msg.setSourceEntity(89U);
    msg.setDestination(49440U);
    msg.setDestinationEntity(20U);
    msg.s_id.assign("YZLKMZQYGEJCTVIUKTTFQRQEABABYLFJBAQLNUZNZSEPYIGSOULWMDIGWBQZVUKDOAGWJZFVGEUNYBXBFMVPSZZTRITYSPLDDKFJVFXIYUGVJMENIXWCZNDXTDOXSKQHHYIKXFRENHOZTURWDLUAFGTPEJVRMVHAWYCEBCXHJLXPQSOVRJISPWGRRFNAPHNBXFEMAGSVKMEDCIAKQWRJBYPJLSRWTBHIPOCCHMLMQCLWMNQONDKSHCCPUKOOX");
    msg.dist = 0.41006529612971987;
    msg.err = 0.1256325553571881;
    msg.ctrl_imp = 0.9691944400019675;
    msg.rel_dir_x = 0.19181786138014645;
    msg.rel_dir_y = 0.7070601464328642;
    msg.rel_dir_z = 0.4783222110065577;
    msg.err_x = 0.3153132013582671;
    msg.err_y = 0.029178201059238518;
    msg.err_z = 0.486764705353393;
    msg.rf_err_x = 0.7526154045640279;
    msg.rf_err_y = 0.65255552136197;
    msg.rf_err_z = 0.13570190391744696;
    msg.rf_err_vx = 0.3129422712355706;
    msg.rf_err_vy = 0.9096229415366728;
    msg.rf_err_vz = 0.35058104370880416;
    msg.ss_x = 0.10770243613624153;
    msg.ss_y = 0.7089706371259898;
    msg.ss_z = 0.7010634939492046;
    msg.virt_err_x = 0.8528842481507166;
    msg.virt_err_y = 0.47525645463023636;
    msg.virt_err_z = 0.28815214664649336;

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
    msg.setTimeStamp(0.2419431269778367);
    msg.setSource(65478U);
    msg.setSourceEntity(37U);
    msg.setDestination(61541U);
    msg.setDestinationEntity(56U);
    msg.s_id.assign("KTEGDXMZXHDTUSDNUIUZAJQYXPFXDJOQDOC");
    msg.dist = 0.3477799700606776;
    msg.err = 0.073376166272351;
    msg.ctrl_imp = 0.3228465830032573;
    msg.rel_dir_x = 0.7490772786085363;
    msg.rel_dir_y = 0.5827029399147184;
    msg.rel_dir_z = 0.7201602662013042;
    msg.err_x = 0.28661333498476194;
    msg.err_y = 0.15541131658959118;
    msg.err_z = 0.3732414842348839;
    msg.rf_err_x = 0.8358597776685593;
    msg.rf_err_y = 0.7288555158358772;
    msg.rf_err_z = 0.8272696322205487;
    msg.rf_err_vx = 0.017274347732177953;
    msg.rf_err_vy = 0.4482665427162479;
    msg.rf_err_vz = 0.6983507512674153;
    msg.ss_x = 0.0586073657618138;
    msg.ss_y = 0.7263845994776782;
    msg.ss_z = 0.178529029069041;
    msg.virt_err_x = 0.495194591834899;
    msg.virt_err_y = 0.8069714116804919;
    msg.virt_err_z = 0.9423588569689028;

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
    msg.setTimeStamp(0.8715402154387789);
    msg.setSource(11819U);
    msg.setSourceEntity(48U);
    msg.setDestination(35789U);
    msg.setDestinationEntity(14U);
    msg.s_id.assign("OKTVANFMKZLDCDWKNWLDWRNXKYQEURGGWKXHADBRLCGUMYRQWZFCRAEHZPCAWJMYKJ");
    msg.dist = 0.8167851959242157;
    msg.err = 0.05646456753787421;
    msg.ctrl_imp = 0.1686412310695522;
    msg.rel_dir_x = 0.6401753642484954;
    msg.rel_dir_y = 0.11661622666236382;
    msg.rel_dir_z = 0.7206611288887161;
    msg.err_x = 0.5602538570643252;
    msg.err_y = 0.6654478845515223;
    msg.err_z = 0.11688365091721509;
    msg.rf_err_x = 0.9661018117114561;
    msg.rf_err_y = 0.023921072604298987;
    msg.rf_err_z = 0.8708567935858053;
    msg.rf_err_vx = 0.117692974188496;
    msg.rf_err_vy = 0.587659356842989;
    msg.rf_err_vz = 0.5692321833810072;
    msg.ss_x = 0.5361766652127622;
    msg.ss_y = 0.8776185401996266;
    msg.ss_z = 0.5476333651298301;
    msg.virt_err_x = 0.3759729293269132;
    msg.virt_err_y = 0.7036966155181602;
    msg.virt_err_z = 0.43731413262937113;

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
    msg.setTimeStamp(0.9120137958401378);
    msg.setSource(16052U);
    msg.setSourceEntity(217U);
    msg.setDestination(32100U);
    msg.setDestinationEntity(154U);
    msg.timeout = 11309U;
    msg.rpm = 0.6709469255502856;
    msg.direction = 254U;
    msg.custom.assign("SZUNYJPJXBVUQLAEAUMGGMVMWHWXTJLVJCWBQVGJCTWTYNFDFLHHCENYTSFGWGOEXHGDPBKHROHYNUNHCKWSULNSMUEKYZLZBCBEAOWABKFURAXLXTMDQUWAVQSKBZANTPDISKRRNPODOYGRIDPDYGPFXNPAMSSCSPIFAQMMFLCMHBCQBEPWDZYDSIARMJECWIXVXHBFKOVTXRJJJTZKZIIVLUYJNIEOOIVEZQOZGFLLEQORZKFCDQVPURY");

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
    msg.setTimeStamp(0.36986881666782223);
    msg.setSource(28467U);
    msg.setSourceEntity(154U);
    msg.setDestination(20270U);
    msg.setDestinationEntity(150U);
    msg.timeout = 60802U;
    msg.rpm = 0.8323425056078273;
    msg.direction = 195U;
    msg.custom.assign("KQWATEULMHZWLCKGUEMPTKBTZQHNGFSCNECCDKNZIOMWETOWKYMNEODXFDVPAUIJSZWFIEGTZSPWSLUQRNHCQIFBKERARJNDWGJJGTSJFNXRPUIOIJYAPOXJWXRDVMMFJXLOKUHAUMHGKOVRYPH");

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
    msg.setTimeStamp(0.8598910122879174);
    msg.setSource(20128U);
    msg.setSourceEntity(249U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(198U);
    msg.timeout = 38699U;
    msg.rpm = 0.01613802978726353;
    msg.direction = 148U;
    msg.custom.assign("SQWWHUPCQSBLMBVRIMQQSICFPMYHWEIRCYZRVYPMSAUBGWTUEHHQAHQVFGTZZALMPGJEONLBJOFNTTLFUGCOFMOSNDQKLUWUCDHRYYEAANTFSIXXDJSSMNXXMJFKZWDEYIBLWMEKAIXQMHIZOTFDEOUWKLPGYRNVSXLVJJTXZETDODPBCASPJQKQNCKVCJLPXHKKWXTOUBJJVIKABZ");

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
    msg.setTimeStamp(0.49085952101814334);
    msg.setSource(60036U);
    msg.setSourceEntity(173U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("ZRDMHDVPIMZEIFPFYQZWJJGTILUFMALXLOBJDWKIUCWWAVIGJTYFC");
    msg.type = 54U;
    msg.op = 194U;
    msg.group_name.assign("QZKDCSFOVBNTBVUZEZUTLBSVWUSJRRBEWBAFQOUDPOGWCOPEKJGMBTZUCZJHKQZQKUAMORIZNOKWPRPYKXOCRKHVMNUBJVLIFCEIYURNBGEXIW");
    msg.plan_id.assign("RNGTIPAFJCKRWJOKRIETHUMVYIZXGIXPTNVWUDTVVZDZDLPSLQBBDBADJHOPCOEPXZWEIGSJPXLRIRLOGAUVEVSIBYBUYMUDJTTDGFRHJUGPQKTYKCATWQHALUFXFFTKISSZWQASBECXASRZDHWLMJDDHSNCVQFSWRMN");
    msg.description.assign("WCMJGAAIZDSNFCZDHDBDQVSTQZZVVHVBIKXHLZLUAFOKVGJSIDJREATQJELBVXDNMLLY");
    msg.reference_frame = 57U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26531U;
    tmp_msg_0.off_x = 0.4308303783347701;
    tmp_msg_0.off_y = 0.17605534929361943;
    tmp_msg_0.off_z = 0.5107249785597832;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3433839345248363;
    msg.leader_speed_min = 0.2681630568929285;
    msg.leader_speed_max = 0.1529287446112637;
    msg.leader_alt_min = 0.40656486110095946;
    msg.leader_alt_max = 0.047826561073176954;
    msg.pos_sim_err_lim = 0.8566925348870501;
    msg.pos_sim_err_wrn = 0.1391623429277027;
    msg.pos_sim_err_timeout = 63072U;
    msg.converg_max = 0.8042310784706788;
    msg.converg_timeout = 27352U;
    msg.comms_timeout = 16261U;
    msg.turb_lim = 0.18131187501118207;
    msg.custom.assign("TBELRZJRUTVPULKVPOAVGQBYETFVBZUCMDNE");

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
    msg.setTimeStamp(0.9709798577206947);
    msg.setSource(10982U);
    msg.setSourceEntity(140U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("ZNHVBIWUYOOZJJRTYVWYDOBBWRRTIQFGXEAPRKVRCELYDCEDLXILDZNKCPKTZOXVYUTVLTJFVTNFQVZMZCOLASCBWUPZGMIEXBCXHCQJNGDSXCPLAYTKEBMLMVQIBSHHSM");
    msg.type = 6U;
    msg.op = 107U;
    msg.group_name.assign("PBVEZHEALZMYJHQEDYZPCNBBKXTFIHFFHGQWIWXQFCHCMUXTKGRGZIWEZPRBMCWZUMSZAFGKWICZJKANFQDREYNJOVACLFMAKNDIPURONSUJVSWVUBRLDTPTDINTFCVDWAVHQSXDMLJPSOSISJMYERIWQRZAYXTIUWTXMKBBGYERNUYHJLOLALNMXGEVLPMCSGBGQQJKKTLYJJEUPTHHNGWVTBHAZIRUO");
    msg.plan_id.assign("CVKKLNRWHRDBHFTSTYJYONBGXSTFGPDRATPPOBDBREKQWLHTEQJIFALBMGEGTAKPGQDAVFAGFTKHWLXCTIERQDJCOXDOGHLBMVMJMHPEKQFUJOWSOCMZEUUMSRXTNHKRUZXSEH");
    msg.description.assign("SWKNZCWYKANIYYDJVXILSUUPEVYUHUMCQXLFVTOVLPCXHBXRROQZXENKFBQNPWZAPTWSRVFBJPPOQPHQBDAZAWYMILC");
    msg.reference_frame = 101U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58017U;
    tmp_msg_0.off_x = 0.9898590169922193;
    tmp_msg_0.off_y = 0.5360446544141849;
    tmp_msg_0.off_z = 0.2772165003483327;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.13418312786780062;
    msg.leader_speed_min = 0.8162490238319922;
    msg.leader_speed_max = 0.7123129416919646;
    msg.leader_alt_min = 0.12844124023674408;
    msg.leader_alt_max = 0.3075771753540969;
    msg.pos_sim_err_lim = 0.21231840834601312;
    msg.pos_sim_err_wrn = 0.3232541710410062;
    msg.pos_sim_err_timeout = 16362U;
    msg.converg_max = 0.4243430825139797;
    msg.converg_timeout = 64848U;
    msg.comms_timeout = 23211U;
    msg.turb_lim = 0.5658826606795079;
    msg.custom.assign("NZCWTOLYFSGUSQQXTWUSKDMNKLVNBUTMRCYFQGNWVFXPUEJYIWCAPTJDKLGBETCYVHKBALCOORDUFXLQMRMOPIEW");

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
    msg.setTimeStamp(0.3646437676916132);
    msg.setSource(50759U);
    msg.setSourceEntity(111U);
    msg.setDestination(26988U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("XAPIQPTLNIMHZHYYHVNCFWNYORCPFKDHGWIJOQCASGGVAXHCBAKEQLIFWENOTMENRMVSCRFVHNDNPKMNEYCJQBZZTYPHQOUDMGOYIGDJMDPAAQWVYLKBJKCWHWTVSWBNBSUZQTRDXZNCXRWMZBVLBVWMGBEXKXBDRPGIVURMALSTXKCPFJOHEDLCFE");
    msg.type = 151U;
    msg.op = 101U;
    msg.group_name.assign("OWFIRKPSBLAMZYPYXLIKYIDOKVVJEXJAXLGRYLTFJRQLZHCKBUJHOCVHCTOTCDMTKYKBDLACWNXWJGXZDEWLROLCVLCEBFENEHGPJBSSSAOFAEASVQHPXMNVGHBZWIUPAUIPZRZXMDDGUOQXQILGNTNUSXUNAKIVCMIUNFMRETSKXPWUY");
    msg.plan_id.assign("ZYZFXIEGHCXOVVHMTZJJWUMQMBFSALXVUAWKCDRKXSUIGNYAMQOQHUDEKGHEDUKTNOVPIQFGMBZWFBJLRCCCPUXIBSXWHSZDQNZKDSOVYYKWVLBUQAITMNAFWIOEZEVEOOSLPTLPJMARUSGZCQJWAXMFRMZDJQBBTGLVAAPBORITSLIJYVWJSEZTWPUOEYDDRLXLNDYAUPOJXGVGJTBCNSMEDPQCTHPRYHKLHNBFX");
    msg.description.assign("DJCONYIPKSZSCCBEPRFXLOBBJWSJDRLROZAGMJDYWKQGVLZIBUDGMCDHWRQTHRTXKGFMAMRTD");
    msg.reference_frame = 63U;
    msg.leader_bank_lim = 0.4987942409298167;
    msg.leader_speed_min = 0.08444768433851546;
    msg.leader_speed_max = 0.7290911055853906;
    msg.leader_alt_min = 0.32497762157808996;
    msg.leader_alt_max = 0.47400302994938415;
    msg.pos_sim_err_lim = 0.8169045073716849;
    msg.pos_sim_err_wrn = 0.28198720743994155;
    msg.pos_sim_err_timeout = 44128U;
    msg.converg_max = 0.762303842600559;
    msg.converg_timeout = 40331U;
    msg.comms_timeout = 44650U;
    msg.turb_lim = 0.3406162925639409;
    msg.custom.assign("WKFSYNTHOCFIKEUSSSBYBYRDQIHDYOUWFRUSNODQJBMUCWYAGFXQKAUOGQBOAOPDGZWTGPSEXEINKHGNQZNLCJEZXFSNQLUYNERPRRERZWBYEWZJMXLBAHHZCNHCMTUODXLHSFIXJMUIVLVAWAUGXTVVBPACBDDIJKTAKFKPSK");

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
    msg.setTimeStamp(0.3185514655762165);
    msg.setSource(52373U);
    msg.setSourceEntity(112U);
    msg.setDestination(60514U);
    msg.setDestinationEntity(75U);
    msg.timeout = 22312U;
    msg.lat = 0.7561254708380318;
    msg.lon = 0.02452632825200718;
    msg.z = 0.4998362048031222;
    msg.z_units = 115U;
    msg.speed = 0.7162594607245817;
    msg.speed_units = 223U;
    msg.custom.assign("UFOTZRCOGBBQIWBQEQSXAKAPXGQTJPPFDZWUNNKIWLOLVWVMWJPQOKDFIUHEUYRLEOQMTHIARYYKJHBEDNTZCVFWHGHXZGLEEGVDTHFYIWHSKYVSRDXNXOCAFMCLVDLXNPMQYGLZFTRDPHXICCDASTAEMOMMVSUYMKVRTALOCEYAVYPSMQM");

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
    msg.setTimeStamp(0.42912021757203567);
    msg.setSource(42301U);
    msg.setSourceEntity(194U);
    msg.setDestination(35260U);
    msg.setDestinationEntity(21U);
    msg.timeout = 32527U;
    msg.lat = 0.440956489072859;
    msg.lon = 0.05774335172139289;
    msg.z = 0.08377874156412168;
    msg.z_units = 36U;
    msg.speed = 0.022274110878860887;
    msg.speed_units = 206U;
    msg.custom.assign("TCJPPBJJNFLMCOCZPGTBVEXPYUWGNAKFNZVMJIYHJLDVLOOTQQFDEDZ");

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
    msg.setTimeStamp(0.8468847199019188);
    msg.setSource(24957U);
    msg.setSourceEntity(155U);
    msg.setDestination(1584U);
    msg.setDestinationEntity(218U);
    msg.timeout = 42263U;
    msg.lat = 0.5896205247818498;
    msg.lon = 0.9477335139955578;
    msg.z = 0.1961828623912545;
    msg.z_units = 148U;
    msg.speed = 0.3302068871168312;
    msg.speed_units = 36U;
    msg.custom.assign("RSHEZYCUQGSPNDQSIHFXEBPBKNESSBCKBHMQHOXFHUUMGGROKGYFZWHPGAELVUFVUEYORCNMINIRWBDVTDSRMCORAWTCUZFGAVZYUQMITTCYMDMXUPYVSJWJXPGYPQJLXVFBDALNLNJLSGRRWCDZJAWSCKQPXVDLZWPXXQPCVOZWYLSKA");

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
    msg.setTimeStamp(0.25703058040008486);
    msg.setSource(6276U);
    msg.setSourceEntity(130U);
    msg.setDestination(15502U);
    msg.setDestinationEntity(135U);
    msg.timeout = 50123U;
    msg.lat = 0.9299194538057116;
    msg.lon = 0.3976461411291745;
    msg.z = 0.10272839290054592;
    msg.z_units = 93U;
    msg.speed = 0.8223878173235771;
    msg.speed_units = 132U;
    msg.custom.assign("JFUTXPSCFTUCKYAZLPRNZZUOFBYENIEMJNFPPAORUXUGWGFTHDCAYQKHDIXGZHCVKANQPNYEYLMNIWOSVXTEVWLCBOPULXUJLMDIGAEDTMSOR");

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
    msg.setTimeStamp(0.3710679936439907);
    msg.setSource(17037U);
    msg.setSourceEntity(171U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(66U);
    msg.timeout = 6701U;
    msg.lat = 0.5002912027119291;
    msg.lon = 0.31845748132643403;
    msg.z = 0.604491800464986;
    msg.z_units = 199U;
    msg.speed = 0.9664764181492028;
    msg.speed_units = 103U;
    msg.custom.assign("GUVYHSSCDULEHUZRJBZFHTQWYGBQXDORCAQSPIUHINKUCYMVRULMRRYHCWPGFCZPFNPOJIFFWEKKGIWIXTOVNJKJDYXOEHPDITWNKDUSNVGJLZOAFBHBSSAGYAURLMMQCAECAEAZGBNLDPBFXFMNEVQJJVTUFDKWIHRIMOKGEYGCGVHTSLOAAOPCNJEWVKYXLJLPKOSZYIZSPDETVLQPZZEDQSOHIB");

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
    msg.setTimeStamp(0.9059627202981493);
    msg.setSource(28797U);
    msg.setSourceEntity(253U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(13U);
    msg.timeout = 39543U;
    msg.lat = 0.22986212693181451;
    msg.lon = 0.4314490949403573;
    msg.z = 0.6982116450364516;
    msg.z_units = 131U;
    msg.speed = 0.5891942146140807;
    msg.speed_units = 230U;
    msg.custom.assign("DBZGIEKNPXCPLCOAPUELRXYSGWWDXSNYQSEEFNZOUUFEIDRSTOBMTRYWMHZPKTKJCVCWFGQYKIFPCIXMJJEKDXNTVSRGHZONUWOURXNPLHWJPBPACGZLEQHMLQJDOGVOKVFJBDUAFQAIZVAVYFGCVMVXABXLYWUKEFJGRCRQLXAQDMYNSSRGHTIBDFED");

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
    msg.setTimeStamp(0.09297797600063173);
    msg.setSource(14051U);
    msg.setSourceEntity(176U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(157U);
    msg.arrival_time = 0.7660763760773267;
    msg.lat = 0.8444475854338281;
    msg.lon = 0.18368045485317486;
    msg.z = 0.6911502204826275;
    msg.z_units = 193U;
    msg.travel_z = 0.48696711876165844;
    msg.travel_z_units = 241U;
    msg.delayed = 38U;

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
    msg.setTimeStamp(0.6627993804356735);
    msg.setSource(1827U);
    msg.setSourceEntity(30U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(190U);
    msg.arrival_time = 0.3530725380473333;
    msg.lat = 0.28237400270986424;
    msg.lon = 0.32881797961313897;
    msg.z = 0.33320156459441663;
    msg.z_units = 183U;
    msg.travel_z = 0.8644496038339343;
    msg.travel_z_units = 254U;
    msg.delayed = 112U;

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
    msg.setTimeStamp(0.673803274790164);
    msg.setSource(13876U);
    msg.setSourceEntity(103U);
    msg.setDestination(30038U);
    msg.setDestinationEntity(198U);
    msg.arrival_time = 0.900949451266191;
    msg.lat = 0.04253117302428444;
    msg.lon = 0.5248316856892783;
    msg.z = 0.6818952548521625;
    msg.z_units = 108U;
    msg.travel_z = 0.25589188464151624;
    msg.travel_z_units = 162U;
    msg.delayed = 106U;

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
    msg.setTimeStamp(0.6966931420749706);
    msg.setSource(394U);
    msg.setSourceEntity(4U);
    msg.setDestination(34142U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.9271031604018058;
    msg.lon = 0.5126992329487778;
    msg.z = 0.16802755947486303;
    msg.z_units = 182U;
    msg.speed = 0.2712902152661245;
    msg.speed_units = 82U;
    msg.bearing = 0.440107595457646;
    msg.cross_angle = 0.3595763347158777;
    msg.width = 0.3735296403449069;
    msg.length = 0.5097725335790302;
    msg.coff = 154U;
    msg.angaperture = 0.3174813300492678;
    msg.range = 27582U;
    msg.overlap = 0U;
    msg.flags = 83U;
    msg.custom.assign("BBTWGYUSNYDYWRJVUAKQQXTINDJUZABGIIIJTIRMVGFCMIUVRXOPOJAMMG");

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
    msg.setTimeStamp(0.1066667785155142);
    msg.setSource(25335U);
    msg.setSourceEntity(196U);
    msg.setDestination(29898U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.13710415805838017;
    msg.lon = 0.834018350941789;
    msg.z = 0.46038229676682096;
    msg.z_units = 176U;
    msg.speed = 0.4937124224146556;
    msg.speed_units = 207U;
    msg.bearing = 0.015610133958837147;
    msg.cross_angle = 0.5250664549130547;
    msg.width = 0.7030229775419781;
    msg.length = 0.6100912339124619;
    msg.coff = 162U;
    msg.angaperture = 0.9157068248887835;
    msg.range = 45764U;
    msg.overlap = 94U;
    msg.flags = 208U;
    msg.custom.assign("VHAAJTJDYPHIHLCWJFJXKWFGMLAIYLTGWZTTYLNNCQVLQAPSUGQUOQUZHMSRKYBKMMJNEJGQCZNGKRKXNADDYRVRUSEFQVXHETQBQWVWSBPDSTUSKOCBLMIPNBSETRIXCATFZIHMMIVRGACXLUDFAMFALVIKHRFBEWSXZHLPPUDOJIHVCJNFVOLCDMPYROPZBJ");

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
    msg.setTimeStamp(0.9944853021773618);
    msg.setSource(49061U);
    msg.setSourceEntity(78U);
    msg.setDestination(60564U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.15743445787634058;
    msg.lon = 0.5153501981425574;
    msg.z = 0.903614583038845;
    msg.z_units = 15U;
    msg.speed = 0.6834059146427727;
    msg.speed_units = 7U;
    msg.bearing = 0.37777099436595674;
    msg.cross_angle = 0.37256933812821447;
    msg.width = 0.24087894245591412;
    msg.length = 0.3781462051411725;
    msg.coff = 158U;
    msg.angaperture = 0.7015600567985661;
    msg.range = 61455U;
    msg.overlap = 133U;
    msg.flags = 77U;
    msg.custom.assign("NTEYAHWFBDEWAIIAZSPCMPFOLYEGIDJDETXPLKSOPASCCHZMEUJCMINSUZLPLGUBUGIAGMAUGQZATXYFVRZRNHVFJAWXSTTQOXZB");

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
    msg.setTimeStamp(0.895858371956222);
    msg.setSource(17420U);
    msg.setSourceEntity(170U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(48U);
    msg.timeout = 59417U;
    msg.lat = 0.034450763807672646;
    msg.lon = 0.9586507243224764;
    msg.z = 0.7803912269649106;
    msg.z_units = 237U;
    msg.speed = 0.9130466996547969;
    msg.speed_units = 200U;
    msg.syringe0 = 143U;
    msg.syringe1 = 123U;
    msg.syringe2 = 253U;
    msg.custom.assign("PUEFVPZSPXAVWTVZLNARMPYIOYHMJEZTBWIEAGYASFQNNSXBUXNASFWOHKFU");

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
    msg.setTimeStamp(0.7624837329352796);
    msg.setSource(63801U);
    msg.setSourceEntity(180U);
    msg.setDestination(44023U);
    msg.setDestinationEntity(80U);
    msg.timeout = 44983U;
    msg.lat = 0.28670043690741454;
    msg.lon = 0.3815094761462702;
    msg.z = 0.7816821861502149;
    msg.z_units = 229U;
    msg.speed = 0.19033547410449303;
    msg.speed_units = 13U;
    msg.syringe0 = 160U;
    msg.syringe1 = 214U;
    msg.syringe2 = 129U;
    msg.custom.assign("TPCGAVQDDQVRZQSTRLGIHSCPNEEREPJHAPUZUKEKUOUBDHZTJTTTB");

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
    msg.setTimeStamp(0.2824335044256838);
    msg.setSource(27954U);
    msg.setSourceEntity(179U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(151U);
    msg.timeout = 15813U;
    msg.lat = 0.5561050229818527;
    msg.lon = 0.27663633551159195;
    msg.z = 0.5626687588913437;
    msg.z_units = 72U;
    msg.speed = 0.7115250503757656;
    msg.speed_units = 16U;
    msg.syringe0 = 65U;
    msg.syringe1 = 7U;
    msg.syringe2 = 238U;
    msg.custom.assign("KXNOATXZAFQSFBGHSADJBXFCANIWPKOJLJMUGWXMEIQNTOBL");

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
    msg.setTimeStamp(0.5443169675166145);
    msg.setSource(26333U);
    msg.setSourceEntity(146U);
    msg.setDestination(45661U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.9246652616417439);
    msg.setSource(18213U);
    msg.setSourceEntity(40U);
    msg.setDestination(59375U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9056549672196247);
    msg.setSource(8938U);
    msg.setSourceEntity(140U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.47144783105119725);
    msg.setSource(62560U);
    msg.setSourceEntity(122U);
    msg.setDestination(6324U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.9860337030589554;
    msg.lon = 0.7830796820586967;
    msg.z = 0.7532345756835606;
    msg.z_units = 36U;
    msg.speed = 0.08649125241669742;
    msg.speed_units = 148U;
    msg.takeoff_pitch = 0.669728213390935;
    msg.custom.assign("NUZYNUPJKCKIFQUYODWWYXYFKGOLQWECWEACCJQPINXODLSAMNGQXAJHJTVTYUELRKXSHCDLMHRUHHJOMMREGFDDKEXOAMMYRPBNZOQNFATYETZRXKXMSXUKZLXSDGCVRFLAFUAOGZZGPAQHGAKEVBDLRCTTNCBNWLVQXIVUVEHIVYOTJSYCBPINBLRGDZHWIFCRJBKBPSABIVQVJWQUSJZMEGWBSIIT");

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
    msg.setTimeStamp(0.4489655362676911);
    msg.setSource(47315U);
    msg.setSourceEntity(139U);
    msg.setDestination(52673U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6531683458416786;
    msg.lon = 0.051704591075250494;
    msg.z = 0.5627148361812732;
    msg.z_units = 232U;
    msg.speed = 0.4678513683187935;
    msg.speed_units = 6U;
    msg.takeoff_pitch = 0.5276726156830066;
    msg.custom.assign("QKIJOFDNIXJEBSUHUZGBMWXYWCSIGAYUMTEIKHVZYLIRZPEYVTPRZAQBDWGHNEXATRHGSXTQMODQOCTLCNEEABFUCZIMHZEX");

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
    msg.setTimeStamp(0.43853790583162977);
    msg.setSource(58337U);
    msg.setSourceEntity(26U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.017470018858738;
    msg.lon = 0.34774804786550784;
    msg.z = 0.2722407024512423;
    msg.z_units = 241U;
    msg.speed = 0.4094171169615748;
    msg.speed_units = 94U;
    msg.takeoff_pitch = 0.0018551166198149671;
    msg.custom.assign("OIYQLMPVZPCLNOYQIAWTWIZJOHXQGFOUOTCZDGZBFFXBLEBLGWLXLCFDIBHXIWCO");

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
    msg.setTimeStamp(0.5158978700681555);
    msg.setSource(8496U);
    msg.setSourceEntity(156U);
    msg.setDestination(3525U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.9403000203512624;
    msg.lon = 0.0008967679622158276;
    msg.z = 0.10579867219604089;
    msg.z_units = 235U;
    msg.speed = 0.7727549633776397;
    msg.speed_units = 137U;
    msg.abort_z = 0.4925164138257824;
    msg.bearing = 0.004408389460746065;
    msg.glide_slope = 52U;
    msg.glide_slope_alt = 0.3626309895523677;
    msg.custom.assign("MWAUFIOTBDSCAOATTBVKGKGTVENYZMHANBNCHKQKVRIFLLISDFTJJKTFBMNZYHCHXXYMWOSLHJBQZNJNDIZUIHAFQGCMCIJQAKBLJGVRMRYQCHWUVYRVSODROJIDKLEILJFAXUYFOXFYNGIQRJHRGPDHPLPJSUYZLEVWCTZDVDWXCQZXGUFNSKZSZSAGPX");

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
    msg.setTimeStamp(0.36240511998074176);
    msg.setSource(32475U);
    msg.setSourceEntity(63U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.9901431784644479;
    msg.lon = 0.6718498471046831;
    msg.z = 0.24062493835790388;
    msg.z_units = 219U;
    msg.speed = 0.8498309109096406;
    msg.speed_units = 104U;
    msg.abort_z = 0.4684529700771185;
    msg.bearing = 0.34750156408615085;
    msg.glide_slope = 119U;
    msg.glide_slope_alt = 0.7367416722854497;
    msg.custom.assign("SYXRFLGVIJKRHILGZTJWDDOLEMUTDSVBFDG");

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
    msg.setTimeStamp(0.7488934593577684);
    msg.setSource(40763U);
    msg.setSourceEntity(8U);
    msg.setDestination(26324U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.5519902887691687;
    msg.lon = 0.4793036423489877;
    msg.z = 0.2681941136841801;
    msg.z_units = 64U;
    msg.speed = 0.997469269018858;
    msg.speed_units = 185U;
    msg.abort_z = 0.909783253619262;
    msg.bearing = 0.707664440761201;
    msg.glide_slope = 21U;
    msg.glide_slope_alt = 0.40368174998708384;
    msg.custom.assign("UMPSPSRZDGZJPDQWNJOIAHATMAQBFJAQYIXYESASRLQELTBTVTXKNEAONNXVZGFJFZWXLJXUKDKCEPVBTHQICIGBKSMQJHZVHYEYXCUOFUFUKCSIEAHRCLVTYCWSLONWWGLQUVRFX");

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
    msg.setTimeStamp(0.5718783163825351);
    msg.setSource(22188U);
    msg.setSourceEntity(25U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.6117247597751282;
    msg.lon = 0.2431348760973432;
    msg.speed = 0.7381993284129877;
    msg.speed_units = 138U;
    msg.limits = 250U;
    msg.max_depth = 0.4940805825152723;
    msg.min_alt = 0.6492961126863673;
    msg.time_limit = 0.47766734759657825;
    msg.controller.assign("DRBJBSZGFORJTGSSCMNKJCNXACFW");
    msg.custom.assign("OSNBSKJISPGKOQKSHUUUUIGGCQAXDITWMMBYFJEMBNFGJYHQZWPDFQDJJMSZRHZOSCRHLLRBMMGVYVXXVALWRZRXIZFWQMXPCCTPAHNKVEJQDAEGNIHUHIAOZJUDYYLCTTDENCCDKTWG");

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
    msg.setTimeStamp(0.139517691520182);
    msg.setSource(39561U);
    msg.setSourceEntity(72U);
    msg.setDestination(53473U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.010015374259601528;
    msg.lon = 0.25805265823228374;
    msg.speed = 0.44942017929489997;
    msg.speed_units = 97U;
    msg.limits = 146U;
    msg.max_depth = 0.9872007647832196;
    msg.min_alt = 0.9230122842026123;
    msg.time_limit = 0.40516507522411394;
    msg.controller.assign("CVDXJIALOEOYJXQKSNBDZJUBAPRZQRNKUPOZODPCGYUFCBWYSTWHCAOXNASWFMTZJRLAHHTLDDMOUFIGIWZSZQEMQWKRVQZKVETTXUKNLYBRTUCGDFURWOMJBQGXDZOIEBMIVPMFDTBRPEMLHJLYBNALPRFRLNTSQHIHGNWJAYXXQHKPHWQKCIUOIFYZLSESCJMHSZVMFSEJGDVKNCYKGFUXICYXPNLVQCTDMAGPFGUEOK");
    msg.custom.assign("YZCPIICYNQUQRYXAONBEKONRDOUXNYRAYXCJUZLNWNGKHSSRDVCZLDZGG");

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
    msg.setTimeStamp(0.5917990108976044);
    msg.setSource(43194U);
    msg.setSourceEntity(3U);
    msg.setDestination(49787U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.49368510203596294;
    msg.lon = 0.4069880579739159;
    msg.speed = 0.3385595726624565;
    msg.speed_units = 96U;
    msg.limits = 16U;
    msg.max_depth = 0.6128699571210248;
    msg.min_alt = 0.8354721073884785;
    msg.time_limit = 0.39051413005806;
    msg.controller.assign("WACQWBQSFLPMXGVEHKNIPXONFILGHVOTYRXUDNCCDMWEQGPZLYXIOEQYMZXBRRZXQHJXSOYVWSETSVCSEKFNUAPTZFATDSJVVHJDVRCMNUIEZOTAYFHRIHQRJUERXAEDLMJPKHPEHOWIWLLTBJU");
    msg.custom.assign("PIYERRMNEAFVNXXXEFDVYMPDDICTTJVRKOXEAZIKAAPXWLGLYGHHCQZSOOXHVDIAAPBRUJVKMCOZKSQHEUXFHCBSPVBZRELGHFPDNJZSWKWSOWOIWZWQDMFHRFNZNOCGUPSTOCCBTRJTLMVIXEMCIIYUUQWAKDLBGWZUBJQPKUFSCGGMPTFQAGWMJOYKGDYISVERYKYMFIBK");

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
    msg.setTimeStamp(0.29536087167173253);
    msg.setSource(34846U);
    msg.setSourceEntity(176U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(247U);
    msg.target.assign("HRWMWCZPISYVTGUOIJDUGLMMWUJEEQTWRJWKFKMKSLRVXQCZAYURTBCHYGNIEMVNHZIJIE");
    msg.max_speed = 0.3980106632444076;
    msg.speed_units = 201U;
    msg.lat = 0.7633492774935037;
    msg.lon = 0.25342221574598245;
    msg.z = 0.06586027129094085;
    msg.z_units = 174U;
    msg.custom.assign("CMYBNCMPGMTMWTWPNLVEKHHFSXFMCFXFCKFJGSKLIVWQGNMRWNOQXESXWAQUGEWKJRGUKDBJYIZVTZNBRDZFAUKEPZNJSXVJZOELOOAVGPHGTJYQKKFASIRBSYIEPWIWS");

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
    msg.setTimeStamp(0.350716734361774);
    msg.setSource(48068U);
    msg.setSourceEntity(180U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(195U);
    msg.target.assign("PIKHQPVCIYGNLLBGDCEZATMZYNSALAXGRXJMIKNAORDPYDLAMHZFKRBCMPGHMEKBVECWBMRNUWJCKQFGCHXSTTEHHWTXOFEZZRIDBYHNTGIVQMMJSSQWVWNCOEJUCX");
    msg.max_speed = 0.7965480511805558;
    msg.speed_units = 2U;
    msg.lat = 0.024984718793290783;
    msg.lon = 0.19300784767520984;
    msg.z = 0.9399622698414468;
    msg.z_units = 7U;
    msg.custom.assign("BTHHBMOLLKRPILYXQGHDNJRNREHOXUZZYBWUDZLWCKNVFWNYWXRMPAMCKRQVAMYLAKJBBZBZMIEVXCFNHCXGQTYJYKIOEAOIHWDL");

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
    msg.setTimeStamp(0.4861293311484509);
    msg.setSource(40973U);
    msg.setSourceEntity(38U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(137U);
    msg.target.assign("UHZKPWPLRVOBDHDUADADZQGEIWPAWVZWGQRMEPXGVHNVNGCGTEZDLOEQFFJXXBMFCRYSHNBOZKJVYHJZCRGNKSIKBJRYEXONCQAOATBAWDWUPYFKQKWFUTMLGFTIIGXEFSMXHPETBLIHUCBRQTSMKXVBOJZDNLNSQYLINJIDAUCOCUTA");
    msg.max_speed = 0.017251428516068756;
    msg.speed_units = 195U;
    msg.lat = 0.23064632007630248;
    msg.lon = 0.20780586719236815;
    msg.z = 0.7258985552358918;
    msg.z_units = 196U;
    msg.custom.assign("FXBRZFQLQCCGMOIVFCNWRLRLWUNAIENKJCTDDKZOIENCBLVRAFIQVWWXZSYPOVMXRCYBKUEVDJIKDWOWNAPGNCEYPABNPHLSJITKAMHSVOIOYYZBTCIEJAORCQGIXQSORABLXYQZAMFWHHYFLGTBXUZVD");

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
    msg.setTimeStamp(0.4620678574777525);
    msg.setSource(63502U);
    msg.setSourceEntity(214U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(77U);
    msg.timeout = 38278U;
    msg.lat = 0.25295475810988466;
    msg.lon = 0.6331502805913581;
    msg.speed = 0.14012232098374577;
    msg.speed_units = 5U;
    msg.custom.assign("TBLFJJWADFVUBDAWEUAXZHNNPYSZTVPHCHYSSICASVUKGRPTBJMKLGHLVIQRSYESNXKCDQZNBUZMGVCTCTH");

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
    msg.setTimeStamp(0.6895177440413447);
    msg.setSource(48186U);
    msg.setSourceEntity(32U);
    msg.setDestination(45320U);
    msg.setDestinationEntity(184U);
    msg.timeout = 64171U;
    msg.lat = 0.5196240437864138;
    msg.lon = 0.3234535182743592;
    msg.speed = 0.42128583468722935;
    msg.speed_units = 213U;
    msg.custom.assign("DRJLISJLJQAAFPBZMLDKOXCSWTLNOBGFGHSWHEPWYWQXWIQZZEDKSKOQYIBBVFMCDAMJIDPMHNRUIAIXGCGZDXMKSKADRFIILTEVUPHORWQHTGEYPOVIYTNECQKPUSAEBUGHUCVQVPSTUEZACVKKNZZNBNZLWAOJL");

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
    msg.setTimeStamp(0.2902205956280228);
    msg.setSource(19419U);
    msg.setSourceEntity(236U);
    msg.setDestination(23496U);
    msg.setDestinationEntity(112U);
    msg.timeout = 56393U;
    msg.lat = 0.8472537081666222;
    msg.lon = 0.7447098032563829;
    msg.speed = 0.22028945883305495;
    msg.speed_units = 139U;
    msg.custom.assign("WQTUWVIMKQOREQBCEIKGTVRZCUAFULHZXEGVPAXREMYVKUPXPKHDSOAQMNYSXXQUDLZLDZXGMWYETAUDNVSBLFCXWSFPIOIFEKJMDPVBBCKHMDLROSNBMHCAJCWKBAIOWHRJDJHGDOMOLQWSTIZIRIUNEAAPYNSHSEYFKYSKNQDNZAHREPGUZGVUIQLGOXYTOBHTCCPRNBZJZFNFMJTCWVQWBIRSVWFLDGKOTUBEGHAVXXPPTJQYYYTFFJ");

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
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.12882753531443136);
    msg.setSource(63375U);
    msg.setSourceEntity(236U);
    msg.setDestination(45247U);
    msg.setDestinationEntity(35U);
    msg.control_src = 11669U;
    msg.control_ent = 0U;
    msg.timeout = 0.04814418346560523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.09743352195346178);
    msg.setSource(3052U);
    msg.setSourceEntity(248U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(122U);
    msg.control_src = 13620U;
    msg.control_ent = 78U;
    msg.timeout = 0.44716083738432877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.13864435992191593);
    msg.setSource(20545U);
    msg.setSourceEntity(183U);
    msg.setDestination(29310U);
    msg.setDestinationEntity(126U);
    msg.control_src = 24328U;
    msg.control_ent = 69U;
    msg.timeout = 0.8936834860458861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.9648557987796776);
    msg.setSource(35677U);
    msg.setSourceEntity(87U);
    msg.setDestination(10475U);
    msg.setDestinationEntity(178U);
    msg.flags = 39U;
    msg.speed = 0.7810689592646878;
    msg.z = 0.21744483510175994;
    msg.heading = 0.8821097413737706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.5691167581141227);
    msg.setSource(29598U);
    msg.setSourceEntity(190U);
    msg.setDestination(11094U);
    msg.setDestinationEntity(23U);
    msg.flags = 80U;
    msg.speed = 0.42674513381399604;
    msg.z = 0.4030287256055689;
    msg.heading = 0.5312433362655173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.5126978557753848);
    msg.setSource(49524U);
    msg.setSourceEntity(35U);
    msg.setDestination(44946U);
    msg.setDestinationEntity(2U);
    msg.flags = 35U;
    msg.speed = 0.10693880373215414;
    msg.z = 0.61159590572505;
    msg.heading = 0.4797203032586329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.4892863870668611);
    msg.setSource(20189U);
    msg.setSourceEntity(73U);
    msg.setDestination(12730U);
    msg.setDestinationEntity(43U);
    msg.control_src = 27059U;
    msg.control_ent = 71U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 166U;
    tmp_msg_0.speed = 0.7747111005741626;
    tmp_msg_0.z = 0.1914944261822924;
    tmp_msg_0.heading = 0.6713674135090464;
    msg.command.set(tmp_msg_0);
    msg.state = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.3097343846091474);
    msg.setSource(24232U);
    msg.setSourceEntity(222U);
    msg.setDestination(47345U);
    msg.setDestinationEntity(157U);
    msg.control_src = 1705U;
    msg.control_ent = 78U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 180U;
    tmp_msg_0.speed = 0.15389346877277743;
    tmp_msg_0.z = 0.7746270878114266;
    tmp_msg_0.heading = 0.9253512407040116;
    msg.command.set(tmp_msg_0);
    msg.state = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.12421068184239559);
    msg.setSource(53840U);
    msg.setSourceEntity(126U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(78U);
    msg.control_src = 12874U;
    msg.control_ent = 85U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 111U;
    tmp_msg_0.speed = 0.7820589381952507;
    tmp_msg_0.z = 0.8497502944032209;
    tmp_msg_0.heading = 0.7213866530464608;
    msg.command.set(tmp_msg_0);
    msg.state = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9657098194968521);
    msg.setSource(65412U);
    msg.setSourceEntity(189U);
    msg.setDestination(42092U);
    msg.setDestinationEntity(243U);
    msg.timeout = 13431U;
    msg.lat = 0.9981163516745521;
    msg.lon = 0.5767301870826457;
    msg.z = 0.5256819981486835;
    msg.z_units = 166U;
    msg.speed = 0.46867198751902106;
    msg.speed_units = 190U;
    msg.bearing = 0.8674022461429466;
    msg.width = 0.6525069072218401;
    msg.direction = 132U;
    msg.custom.assign("YGZBSVPYCEGCCYIIDMKMHNZZYZTRKKZYWBHTRNUWXBVQMTJVIVRUEPUMDYUAEIMJFZJVVDDYFJVRGGGSZNFFMBKJDEKJQREASNPNEFTVHRXNTCWGCFASEUXXSAYBGTPKWKSURNKDHTDDLBPFEZOXHHQBXLQOBPCXTYEOPWNLCKJ");

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
    msg.setTimeStamp(0.9598163262843695);
    msg.setSource(16587U);
    msg.setSourceEntity(225U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(151U);
    msg.timeout = 53632U;
    msg.lat = 0.06451152777354463;
    msg.lon = 0.50390582127176;
    msg.z = 0.8298387147864691;
    msg.z_units = 152U;
    msg.speed = 0.017296462995295303;
    msg.speed_units = 147U;
    msg.bearing = 0.17344937267331728;
    msg.width = 0.3260583078845859;
    msg.direction = 111U;
    msg.custom.assign("WJCZFZFANECQYOESUKLDGCXAVQLTQCRNHPRTWOKTGDMQVVCKTOZCHGNODAUSXQSDAAUIQWQMGYWXDBNNHXBLQSPUEBPRSXXK");

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
    msg.setTimeStamp(0.5791907765958977);
    msg.setSource(24226U);
    msg.setSourceEntity(210U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(241U);
    msg.timeout = 59172U;
    msg.lat = 0.3843210001256345;
    msg.lon = 0.9014524525966499;
    msg.z = 0.22040080034465703;
    msg.z_units = 120U;
    msg.speed = 0.8351287388246635;
    msg.speed_units = 134U;
    msg.bearing = 0.1476975935815763;
    msg.width = 0.4457973043834069;
    msg.direction = 65U;
    msg.custom.assign("TXUBCDNXJILKOCJTOYTGIOVTES");

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
    msg.setTimeStamp(0.6197180264394208);
    msg.setSource(33899U);
    msg.setSourceEntity(179U);
    msg.setDestination(42017U);
    msg.setDestinationEntity(12U);
    msg.op_mode = 151U;
    msg.error_count = 230U;
    msg.error_ents.assign("UQOPSHKLIBXMQGRVSFFJVZLYHOWKVSCDOLXBMLDJHNEROZRKYENCMFQBSYCXQPFHULZIEIUKQAAGWWSYUAGSLHGKDWJKKUVYEVUAZUWXWTZDGIHYYAFQMEITTPJVGMTXBULUJLKEAJVOPPNICRYORCLNXLQVAHPRYTZQGGHIKBTMODNPJEWZCVJFQMDZWKCGDSMDNWRTSCIJRE");
    msg.maneuver_type = 2938U;
    msg.maneuver_stime = 0.8030370834742884;
    msg.maneuver_eta = 3301U;
    msg.control_loops = 3125203360U;
    msg.flags = 182U;
    msg.last_error.assign("NGJUGHKOFUCYGYTVIBXLVHHNQVJDPPLRFUVCBKBSKNRIWKKPEDFRCHXGHH");
    msg.last_error_time = 0.114520087537897;

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
    msg.setTimeStamp(0.4704672702251831);
    msg.setSource(28797U);
    msg.setSourceEntity(136U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(136U);
    msg.op_mode = 157U;
    msg.error_count = 89U;
    msg.error_ents.assign("XTSRRZZMNAJNNQUETGKQOHOONGWEWPKYFZLCCXZLKQQDHPKFQPBIDITVZSDVCUOJPWVGOSNVAAMZGMWMQUYYNDEGBFPAWJFOCABJFEPOFOMJBGBSULCKIUVXJVCHXLKGOGMULZWXECZLSBEYJXMVRQXYCRUSFXAHVSYRIWDGLLEZDMK");
    msg.maneuver_type = 12638U;
    msg.maneuver_stime = 0.5240504997800303;
    msg.maneuver_eta = 8757U;
    msg.control_loops = 272293032U;
    msg.flags = 178U;
    msg.last_error.assign("VGWYDETGFZDCVOLYQUHLRJSOSKCMLLJHFTFTZWCDQYYNYSIQZAQEUKFTKRVBGISAJDJXINMLCMAOTFDWUHPQFYHIBRPXJKBTORVOIBAGIPBJQWYHMETGXFXXXOBDCUOLSNAALJUYOPJQTEEGTRQCMKMMDBDCIEGAIZHNHVLKBPZEFSNVGWNUZBBXIVIONYTEZZWUGRVZUDJKRWRSYWZUQXFRKPJVMNLVGMHEFMCKCHCSHWDPSQWASOULPX");
    msg.last_error_time = 0.4143661656176484;

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
    msg.setTimeStamp(0.03922854726394309);
    msg.setSource(12326U);
    msg.setSourceEntity(189U);
    msg.setDestination(60190U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 106U;
    msg.error_count = 122U;
    msg.error_ents.assign("GIEEMBHWYXYPBTWKJCGDLYZEWILEJHLENVPSHOGWVEOPXNIPEBWH");
    msg.maneuver_type = 53431U;
    msg.maneuver_stime = 0.3136165933216366;
    msg.maneuver_eta = 7775U;
    msg.control_loops = 3217563268U;
    msg.flags = 55U;
    msg.last_error.assign("QHYILUPHFCHAJGEYQXXXNPQMYYWSIWNQNBUSMVXJKIGPLJQWZWXRRHADSEELTOTDTPOZRKCVBTWRLNZUOHTIYPIARDEFPDEABKCCQSFDLGEAJJCWGBASMSFJPBZPCHNIRIKXGVTKMFDTKFAIRMABOAROXECZYNGWPSQNVVXDMLCZA");
    msg.last_error_time = 0.31410912559126436;

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
    msg.setTimeStamp(0.6029119968587718);
    msg.setSource(1766U);
    msg.setSourceEntity(180U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(247U);
    msg.type = 54U;
    msg.request_id = 8547U;
    msg.command = 218U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("VJBTJTKOWKIXFCMYXGO");
    tmp_msg_0.max_speed = 0.052791537546800216;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.lat = 0.6464841290829438;
    tmp_msg_0.lon = 0.0448286229165501;
    tmp_msg_0.z = 0.0633196015463825;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.custom.assign("MRHYAKFRZAPHRGOQZHQFJBCDCLYUUQNOHVYAKXLGTUHGPVUTOCCUDBYJZIGRPONBAOKKXXZBLFWIJDMUBEJJIYHGGGVILESGMYFSVHZFOIVACPFPDOBIFQN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28747U;
    msg.info.assign("OQZWIPMXOAYGYZKYRQWOBFVGDWRXDUVRERAINAPKCLXYNQMDLSYMXXSDCPMZNTTIVVISJXCNZAWOPOXMSJCWNJVUAVBHQGIOIAALICHHXBBZZCHRDYYNKLTABIFSFLEZMA");

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
    msg.setTimeStamp(0.9819088811436112);
    msg.setSource(34283U);
    msg.setSourceEntity(92U);
    msg.setDestination(63046U);
    msg.setDestinationEntity(219U);
    msg.type = 151U;
    msg.request_id = 36228U;
    msg.command = 134U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62965U;
    msg.info.assign("UYCBZSYTIWZPXFWLZHBSHDHOKULPWCLQBPFLRDMWQMASWREUBXINXJHNRXUCDKABWMYYDETJBOVJKAFGNLIPSREQVCHMFLEILKIASCGHKYPODEXUHNEAMIHGLDEDYSGUKZDZIOM");

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
    msg.setTimeStamp(0.2691193898500619);
    msg.setSource(9361U);
    msg.setSourceEntity(145U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(102U);
    msg.type = 166U;
    msg.request_id = 11977U;
    msg.command = 113U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64719U;
    msg.info.assign("EYTXLHFSUFJLIHKTIHPQLWEEFGUXZIZRJVCCIPGQRRJOCVKGTNAQEZBZXWTKYUCDPRJBMYSMXNQMRCBVNDXTDNBAPLLSHWQYOIJEVNMMLSQQKMBMRJHZCWIDDAFEJBIYYQUFXGSOVGGWEIVYXGAHBCTOFPXZTSOSVKGDRYZKXWNGLMCORDGIKOTNAAUWHJUFHSDDAXNREBFEVTYUOZQMWJFSUPNPEPVJSZPVHATCKFCRBIYLOZKUUAPLAWWKMO");

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
    msg.setTimeStamp(0.4001987410728731);
    msg.setSource(38006U);
    msg.setSourceEntity(166U);
    msg.setDestination(52394U);
    msg.setDestinationEntity(80U);
    msg.command = 7U;
    msg.entities.assign("QTWNQZBMYNDXHMRVRIMTMZTIRSZZKHIECPU");

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
    msg.setTimeStamp(0.5251217458986217);
    msg.setSource(28053U);
    msg.setSourceEntity(128U);
    msg.setDestination(1809U);
    msg.setDestinationEntity(235U);
    msg.command = 223U;
    msg.entities.assign("GMBLXSKUVJKVPJHKFORBAXWCRINGTACRQVWWONQJDPFFIJNVTNWCTFEUKEJLACYGTSRHJQHSUSATSQETDMRNLAQKYALMMCNTELHZWYYHVOJTSRZQRJLVXIVIDLGQQJPKXAIZDWXRPKEBURCUUYHBQOCSYDMYGAKDMXSFVNGZOZHBWHEXPEFEXNGLZCPODASBOIKIDUMN");

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
    msg.setTimeStamp(0.07857125293804446);
    msg.setSource(44686U);
    msg.setSourceEntity(136U);
    msg.setDestination(29696U);
    msg.setDestinationEntity(207U);
    msg.command = 237U;
    msg.entities.assign("SUWAJKHUNMCTQLFJZQSJYDTXXXICHTYAAFDBWIWABVIGIBEIRKJHDKOZRLOWJSQTOOIQMCLSXQZMMUNAVYXRSGPUSJQUVEKGBYGVBURDEOJAGVOPQXFFURFNBTZDHDWFDTTJPTXMZVLCXCKCEEVNKLASMYLQLGYMZQHVFLGNGPKHPFOIIVWZMPXOEEAANCYGJHWRDGKJEBCNDWYOPQCREKV");

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
    msg.setTimeStamp(0.5652069712762616);
    msg.setSource(21743U);
    msg.setSourceEntity(40U);
    msg.setDestination(64181U);
    msg.setDestinationEntity(204U);
    msg.mcount = 204U;
    msg.mnames.assign("SVWHJQLXAWIQRYPPHOFRNBNNTDGAHHCDJS");
    msg.ecount = 89U;
    msg.enames.assign("BJSEAKCTINADWPHPZTLENMRKRJQCPFHBQSMVJYXYXHOKRHGMJXUCRUUSBBZEYHPNMUIINVYYPDJZBVWOD");
    msg.ccount = 20U;
    msg.cnames.assign("YWZZDYQTUSMFLKLOWHTNUPPTFFDIRGHMFUKCKNGGJHZUCXFMX");
    msg.last_error.assign("TLFUEHJBDUWXXEXCYMHWRQXBTWKNRMCOPVGJWUVYWOQUMSLTOXNQKLPJYIJGGKYVTDZOGRZIIUVFLUNIIBRPQMHACKYMONEWGCY");
    msg.last_error_time = 0.7529991000958873;

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
    msg.setTimeStamp(0.8980667010296138);
    msg.setSource(21495U);
    msg.setSourceEntity(17U);
    msg.setDestination(46792U);
    msg.setDestinationEntity(129U);
    msg.mcount = 183U;
    msg.mnames.assign("ZCYDHHOWTEAUVPBHCYJZ");
    msg.ecount = 162U;
    msg.enames.assign("VECBAZYGMZPJERBMLRHVCBJ");
    msg.ccount = 105U;
    msg.cnames.assign("MFMNILIHHHBUDMKGFZVVGWEGNLECGGLJTHJERVLLBBQFNMBEHXYOCRICHWKH");
    msg.last_error.assign("HUEQESCNKBCTWQRKXWBWAZGZCOLHPKFXTJLHROYHLYPEXTIKNJLYYZIMLOERWNDSTUTMVZKUCEJXQDORJIYUEKYNIFTRQAVJKWRGTLSHMBOSNPBBHOUDFCNTVVSGTUHIATGZSNEIYGYFXMCBOPMPUWPNGJXLVSVQXPZDGHHVQBQAUHJNAJDCBRDGWJIWIYPAZPYMFFVRFMWZSZNXLXWMGRLJGMEEERZSIF");
    msg.last_error_time = 0.9249929498650588;

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
    msg.setTimeStamp(0.3453299386297707);
    msg.setSource(55378U);
    msg.setSourceEntity(120U);
    msg.setDestination(26313U);
    msg.setDestinationEntity(129U);
    msg.mcount = 239U;
    msg.mnames.assign("VTXRJXMJRBLLUWNCOWUDDPXUEBMICIMQRWPSFNOQJBGYLMEEVKAGKDQLTBCQNEYZKSPVAAMRUJFAQVTTLOIZLWSZSDLXFIZGLXSYHKTQAMOSRGCGFHPPTXBUKRYDNQYXGZBCKNAWCHLIWAFIRAFJVQEOEVEPIYKHNJXQAHQTVOIUTRCRYWHSGXWZCTBPUDLDKUSGHNPHOXJIZJMFNFCNMEZVDCVUKDOVFIGHTBUMPF");
    msg.ecount = 34U;
    msg.enames.assign("QVKQJOGRGNFIOXHCKMQJDMLFYUATBBKSOSMVPDGJS");
    msg.ccount = 244U;
    msg.cnames.assign("VLEWSBESIRDILAGBIFTUXYTWODKDCQNLFJHISKXMDRCXHYKGZQAREBTGPQHDKPQMOTRHVCEHXKBUHOMBJLXOAUIKXJWNGWXARYVIWPOVNNXBCPDISIRQSURU");
    msg.last_error.assign("BKUZNHHDRTMFFKNJLUPYMCQLFUCCJYXBPQKBDTJTXLKJQGQXSUUKVWBQFIBSWDRICVECRFVMNWNCAFQRXCXGZSEZFOQGDTXRZSJATSPOAVLSYKOEOJSBWMFCYVYYWBNPGG");
    msg.last_error_time = 0.67928494670112;

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
    msg.setTimeStamp(0.13698174547181186);
    msg.setSource(59735U);
    msg.setSourceEntity(148U);
    msg.setDestination(21777U);
    msg.setDestinationEntity(135U);
    msg.mask = 197U;
    msg.max_depth = 0.8424303582891866;
    msg.min_altitude = 0.4979730917311368;
    msg.max_altitude = 0.7162454976400654;
    msg.min_speed = 0.8384116806707426;
    msg.max_speed = 0.2099508085384021;
    msg.max_vrate = 0.8291412314937185;
    msg.lat = 0.829720102154647;
    msg.lon = 0.7308549890303582;
    msg.orientation = 0.16591096376552084;
    msg.width = 0.12864428156523;
    msg.length = 0.1602639091013487;

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
    msg.setTimeStamp(0.8785143622209667);
    msg.setSource(27359U);
    msg.setSourceEntity(14U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(48U);
    msg.mask = 238U;
    msg.max_depth = 0.26058379432543144;
    msg.min_altitude = 0.07414873558438084;
    msg.max_altitude = 0.13363160972496135;
    msg.min_speed = 0.8155564042586152;
    msg.max_speed = 0.006002229754684341;
    msg.max_vrate = 0.33135715154286394;
    msg.lat = 0.6434064228770727;
    msg.lon = 0.6099458758666751;
    msg.orientation = 0.8857862216810327;
    msg.width = 0.22805001917139323;
    msg.length = 0.6620580564258776;

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
    msg.setTimeStamp(0.4909476803415549);
    msg.setSource(58173U);
    msg.setSourceEntity(3U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(151U);
    msg.mask = 246U;
    msg.max_depth = 0.1760962185348789;
    msg.min_altitude = 0.10386955744119131;
    msg.max_altitude = 0.10103034589686011;
    msg.min_speed = 0.9813497055523832;
    msg.max_speed = 0.4930881522616831;
    msg.max_vrate = 0.8262378470156688;
    msg.lat = 0.7203309100726447;
    msg.lon = 0.39888113677908155;
    msg.orientation = 0.082825264960532;
    msg.width = 0.33691189065021865;
    msg.length = 0.8123183194914485;

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
    msg.setTimeStamp(0.02317347754372434);
    msg.setSource(57787U);
    msg.setSourceEntity(233U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.5738501055391281);
    msg.setSource(4622U);
    msg.setSourceEntity(159U);
    msg.setDestination(43661U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.7097213356808711);
    msg.setSource(25530U);
    msg.setSourceEntity(232U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.13056805391058668);
    msg.setSource(10629U);
    msg.setSourceEntity(3U);
    msg.setDestination(177U);
    msg.setDestinationEntity(11U);
    msg.duration = 24170U;

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
    msg.setTimeStamp(0.8922693911426343);
    msg.setSource(4170U);
    msg.setSourceEntity(6U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(153U);
    msg.duration = 49372U;

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
    msg.setTimeStamp(0.9897175135616311);
    msg.setSource(23158U);
    msg.setSourceEntity(186U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(147U);
    msg.duration = 23401U;

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
    msg.setTimeStamp(0.9353370295939403);
    msg.setSource(21958U);
    msg.setSourceEntity(74U);
    msg.setDestination(38879U);
    msg.setDestinationEntity(194U);
    msg.enable = 78U;
    msg.mask = 2188935043U;
    msg.scope_ref = 1273972282U;

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
    msg.setTimeStamp(0.45870833976856673);
    msg.setSource(15703U);
    msg.setSourceEntity(213U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(53U);
    msg.enable = 248U;
    msg.mask = 419941153U;
    msg.scope_ref = 3945458958U;

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
    msg.setTimeStamp(0.35499906050731544);
    msg.setSource(32517U);
    msg.setSourceEntity(192U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(189U);
    msg.enable = 9U;
    msg.mask = 1340441097U;
    msg.scope_ref = 2876096863U;

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
    msg.setTimeStamp(0.37595638776388307);
    msg.setSource(58297U);
    msg.setSourceEntity(58U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(203U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.6165207743412945);
    msg.setSource(27881U);
    msg.setSourceEntity(44U);
    msg.setDestination(40438U);
    msg.setDestinationEntity(151U);
    msg.medium = 173U;

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
    msg.setTimeStamp(0.20648319069513033);
    msg.setSource(357U);
    msg.setSourceEntity(141U);
    msg.setDestination(313U);
    msg.setDestinationEntity(34U);
    msg.medium = 201U;

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
    msg.setTimeStamp(0.25768855551757086);
    msg.setSource(53681U);
    msg.setSourceEntity(250U);
    msg.setDestination(52592U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7270671972087117;
    msg.type = 97U;

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
    msg.setTimeStamp(0.18128244464093235);
    msg.setSource(33276U);
    msg.setSourceEntity(195U);
    msg.setDestination(8817U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6585655404415566;
    msg.type = 0U;

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
    msg.setTimeStamp(0.12464143553176521);
    msg.setSource(6118U);
    msg.setSourceEntity(250U);
    msg.setDestination(34313U);
    msg.setDestinationEntity(219U);
    msg.value = 0.33175733793184214;
    msg.type = 232U;

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
    msg.setTimeStamp(0.9622468063744568);
    msg.setSource(37421U);
    msg.setSourceEntity(159U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(218U);
    msg.possimerr = 0.533864796888231;
    msg.converg = 0.9688233462457269;
    msg.turbulence = 0.15571750019891606;
    msg.possimmon = 241U;
    msg.commmon = 150U;
    msg.convergmon = 115U;

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
    msg.setTimeStamp(0.14674151251548295);
    msg.setSource(12619U);
    msg.setSourceEntity(169U);
    msg.setDestination(27115U);
    msg.setDestinationEntity(120U);
    msg.possimerr = 0.7008961886069683;
    msg.converg = 0.051301917418752896;
    msg.turbulence = 0.028442583305628766;
    msg.possimmon = 72U;
    msg.commmon = 229U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.9896342960501874);
    msg.setSource(31515U);
    msg.setSourceEntity(143U);
    msg.setDestination(15409U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.9341518232452297;
    msg.converg = 0.149702369110166;
    msg.turbulence = 0.9623373189660307;
    msg.possimmon = 188U;
    msg.commmon = 244U;
    msg.convergmon = 143U;

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
    msg.setTimeStamp(0.05838872056525657);
    msg.setSource(52224U);
    msg.setSourceEntity(45U);
    msg.setDestination(47695U);
    msg.setDestinationEntity(252U);
    msg.autonomy = 135U;
    msg.mode.assign("FXHIYSMHXUASHABXDWDNKCXEFUPJHEHQCQRLAJRINDXVYYVCQEYBTMLKWVBGYKZIUBCYMZWJGIWDKUKINRLJHZHEUDPNLCENYTPOOEXQFKTZCVQRKRWMTOWSXAICERYNLPRTAZKPOVWPRVABCDUVOAGZSZQRNQHJLLOSJ");

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
    msg.setTimeStamp(0.2277108204109407);
    msg.setSource(16608U);
    msg.setSourceEntity(196U);
    msg.setDestination(42674U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 181U;
    msg.mode.assign("CZPWYJAKXGUMBRVFIKYICECYOOHRPHKDWLCXTJYTSOGRTNLVYVMHWUXEWBCDBMLZKNMASOILFFCUFOENYUHRLTYKZFSEMNKHOHVGTTGIRHSEWCASWIRVIJTTXODBQKNZPWDFATVUFEZBSKEEBDBWAEVRCGPJVDYYKMHTOQKBPLICALQIQIAVLLONMJXJEVHDQXSPUQZJPQMMSXQDGNYJNFRFGGNPA");

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
    msg.setTimeStamp(0.7479085690637658);
    msg.setSource(51539U);
    msg.setSourceEntity(50U);
    msg.setDestination(4336U);
    msg.setDestinationEntity(111U);
    msg.autonomy = 230U;
    msg.mode.assign("SYOCOHGWEZBJOBVFTMIHYUFBBUSPQKJEDKBODFFVXECMXEIRNCIXMRXHZMVVAMHHGLKMZWZGPUIKJKLGQWCQGANGUFNGMZXQLXPRRBOCPYJWYYPIPKLWBDRDAOSXMSIYSWYTNJMJQIRKPKOZZTNIASRAVWHCDCHFAHHUEQUNJXYECNNOLWDDCUZTBDJOQBPFP");

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
    msg.setTimeStamp(0.85329386819991);
    msg.setSource(2000U);
    msg.setSourceEntity(190U);
    msg.setDestination(19581U);
    msg.setDestinationEntity(246U);
    msg.type = 175U;
    msg.op = 110U;
    msg.possimerr = 0.8354438665112719;
    msg.converg = 0.4623471506647838;
    msg.turbulence = 0.5366402142940332;
    msg.possimmon = 228U;
    msg.commmon = 100U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.9535830448972211);
    msg.setSource(51816U);
    msg.setSourceEntity(242U);
    msg.setDestination(64924U);
    msg.setDestinationEntity(168U);
    msg.type = 211U;
    msg.op = 94U;
    msg.possimerr = 0.7873977915028822;
    msg.converg = 0.0699355768266523;
    msg.turbulence = 0.37054343766152364;
    msg.possimmon = 55U;
    msg.commmon = 210U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.3856993744035716);
    msg.setSource(6394U);
    msg.setSourceEntity(220U);
    msg.setDestination(22820U);
    msg.setDestinationEntity(158U);
    msg.type = 28U;
    msg.op = 97U;
    msg.possimerr = 0.026015694518972343;
    msg.converg = 0.890929219345972;
    msg.turbulence = 0.9998609610527357;
    msg.possimmon = 230U;
    msg.commmon = 93U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.7080812371411401);
    msg.setSource(61183U);
    msg.setSourceEntity(73U);
    msg.setDestination(321U);
    msg.setDestinationEntity(86U);
    msg.op = 211U;
    msg.comm_interface = 216U;
    msg.period = 23653U;
    msg.sys_dst.assign("GQVAHEMVPBERRYTLDITRBZTPCWOKYXUJGVFVJFUNACTLPWFDMNLGXXBKWNPXUYUNQRKXHCUSBLIPDEVEYRJTBNHQHFJKTGEUNDWWPQ");

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
    msg.setTimeStamp(0.7437999521842444);
    msg.setSource(62121U);
    msg.setSourceEntity(89U);
    msg.setDestination(60791U);
    msg.setDestinationEntity(156U);
    msg.op = 61U;
    msg.comm_interface = 100U;
    msg.period = 54909U;
    msg.sys_dst.assign("CGFLQDBWPJRCIDFZMCEZABPHTZSKATSUCGSWHWIJTALIRQKRGPKKKNNWBSYRGDABLBVRZTRVBLUJIUTOLOEYIHOHEILXMZCPYQZFOXWURMQSOIEJAWXHVYVVEDIFTNUVKCXGGYNIMN");

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
    msg.setTimeStamp(0.3511330142115757);
    msg.setSource(45919U);
    msg.setSourceEntity(126U);
    msg.setDestination(2751U);
    msg.setDestinationEntity(91U);
    msg.op = 171U;
    msg.comm_interface = 60U;
    msg.period = 48069U;
    msg.sys_dst.assign("WUXLAKBEORBWRYUVIFXYNBHRIRKSFVVNGAEQJAFYMCJQFCYBDQJRXHRFWKOYNLFZBVNNQHHAASOXHBGOGWLKGPDHNWWPGEEMSYWTAWCYYTZJSZZJJWHTCVEFXRVMPPKMEQUSNCDVBDVQKEJDPPXPOICQMMAZFDTFAYSLIITCZGUTSHIFLZQAWIGNCXDZCMQRJTINDSHOERVUBUM");

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
    msg.setTimeStamp(0.2758911719039695);
    msg.setSource(30742U);
    msg.setSourceEntity(55U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(4U);
    msg.stime = 3799416989U;
    msg.latitude = 0.06500825634155838;
    msg.longitude = 0.9791394928248097;
    msg.altitude = 10643U;
    msg.depth = 44829U;
    msg.heading = 62481U;
    msg.speed = -21771;
    msg.fuel = 0;
    msg.exec_state = 63;
    msg.plan_checksum = 492U;

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
    msg.setTimeStamp(0.40960178991608087);
    msg.setSource(55496U);
    msg.setSourceEntity(148U);
    msg.setDestination(15876U);
    msg.setDestinationEntity(231U);
    msg.stime = 1533797476U;
    msg.latitude = 0.15684714980248593;
    msg.longitude = 0.510966299310822;
    msg.altitude = 26051U;
    msg.depth = 8556U;
    msg.heading = 13362U;
    msg.speed = -5981;
    msg.fuel = 86;
    msg.exec_state = 44;
    msg.plan_checksum = 4521U;

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
    msg.setTimeStamp(0.4118234902920844);
    msg.setSource(29774U);
    msg.setSourceEntity(222U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(48U);
    msg.stime = 2910802865U;
    msg.latitude = 0.7157220655941258;
    msg.longitude = 0.6110031627333274;
    msg.altitude = 47297U;
    msg.depth = 42716U;
    msg.heading = 9937U;
    msg.speed = -19050;
    msg.fuel = -102;
    msg.exec_state = 79;
    msg.plan_checksum = 45703U;

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
    msg.setTimeStamp(0.7057100747176467);
    msg.setSource(12431U);
    msg.setSourceEntity(185U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(79U);
    msg.req_id = 40289U;
    msg.comm_mean = 235U;
    msg.destination.assign("ZDCQMSQHGJISGUYSUMPAWFRUHMUNDFSOXZPQDQMVOIWQPNEGJBSDOONKHSZBJVWRISGOUXLPVQBWZZFNFUSLKLBVUDMUXJAGTFXOKCWKLZRIXBTFHVXBBIJYRNEAVJRCXYKACMCHDKHYHDHNJNXTLXCRIMETUVELBAJEPPTTZPCQBFGTDLGWOZLYTAHYLKRIQQDJWVKNAALGEERTOEWFWY");
    msg.deadline = 0.06327780655831738;
    msg.range = 0.28432362237027253;
    msg.data_mode = 115U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.7264929525380747;
    tmp_msg_0.v = 0.17809532461373345;
    tmp_msg_0.w = 0.008829640657046944;
    tmp_msg_0.p = 0.020073555579987246;
    tmp_msg_0.q = 0.125571098878966;
    tmp_msg_0.r = 0.22865616826403767;
    tmp_msg_0.flags = 60U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GLXOWELVQYFGVSCZBDZHFEMLROQCXCEKCUJKUNKQVZBZGMRKTSSJJIMDGUVRNUDOAGQESZQAMAEMJFHVTPKCZHDBWAJKHGWSJQHKXUCJLLVWTTPYNHLRPIUXACRVKWHBXXMONFFPIDBFLYSRDHZBAPORBVUSQGJJTCOTHMAEQNXLARYIQWOAPRHWLOMYADGINZDYCNUUXNIJSPEFBBWEEEIMNYWYWKS");
    const char tmp_msg_1[] = {-98, -3, 55, -45, 87, -80, -48, 33, -104, 1, 45, -47, 100, 81, 17, -115, 44, 9, -84, -58, -93, -94, -120, 107, -36, -13, -16, -4, 35, -59, 5, -66, -57, 122, -41, 4, -127, -3, 26, -11, 115, 91, -41, -31, -79, 74, 20, -11, 125, 71, -83, 3, -123, 64, 49, 113, 24, 65, -76, 111, -10, -33, 9, 48, 34, 109, -61, -31, -4, 100, -44, 80, -128, 115, -56, -110, 5, 10, -58, 10, 71, -58, 54, -57, -103, 89, -39, -100, -98, -20, -4, -105, 113, -71, -120, 106, -88, 65, -5, 67, -76, -5, -92, -70, 90, -55, 3, -119, 94, 78, 77, 86, -43, -114, 91, -66, -109, 35, 31, 56, 46, 114, -16, -2, -37, -93, 49, 39, 4, -106, 49, 76, 45, 27, -30, 61, 71, -124, -5, -101, 19, -73, -29, 117, -61, 84, 20, -17, 89, 61, -119, -69, -91, -34, -117, 99, -21, -52, 70, 126};
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
    msg.setTimeStamp(0.03951494758279783);
    msg.setSource(16188U);
    msg.setSourceEntity(157U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(147U);
    msg.req_id = 5870U;
    msg.comm_mean = 92U;
    msg.destination.assign("SBYZIUNXOXCNHJLZ");
    msg.deadline = 0.2803807772956355;
    msg.range = 0.24636158511666828;
    msg.data_mode = 246U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 62U;
    tmp_msg_0.htime = 0.6444376962593662;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 245U;
    tmp_tmp_msg_0_0.htime = 0.8245992636327429;
    tmp_tmp_msg_0_0.context.assign("OJCLRFVWBKNYVBXWHFPBPKDFXNIGGIGGEDXLQBUTTVMALIKFACDQREVRG");
    tmp_tmp_msg_0_0.text.assign("NQJMILBNFPZHJIJXRZJNITRRZMIMSVLYUOUEOJUZQWJDWQUDOFDDFJFTXHUEFRQCIAXBDIQQRDRSYORIJNLYKKVJTOIZCPNYGQTRARVTGBQZZELLPOLLBBGVATCBOCOGSJQZCWWOFKVBTAQTSXXGESYAEKYHKYNWCGF");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UGSNNUDCZXZGVTFEPUSOJGBDYDZLFRFVWYIAZSFKPQZNILTMWLXHSAQMDQVVXXJUBQBBDCWRUMBFLEXQHIGAPBSAWTQJRNCWEKCCZBOILQYSNOROEJPAOSJNFYGKVJGHPHJUVDUIHJWFDAEDBNYMPCIFNXPJTYTHQKGTEXKEXIPFMAZOHVMHJZDZYBSERWXMKMLCZWOVGOCYOYLAIAHWRAUGLTVICKUBILKMPLRNWRTXC");
    const char tmp_msg_1[] = {-40, 1, -100, -50, 18, -3, -10, 73, 38, 4, 77, 88, -111, -34, -120, -22, 90, -69, -55, -86, -1, -120, 117, 40, 32, 104, -50, 20, 14, 105, 104, 48, 36, -57, -86, 122, -8, 47, -39, -72, 38, -8, 24, -99, 45, 92, 67, 47, -102, 39, 69, -17, -108, 85, 21, 118, 1, 40, -12, 95, 111, -113, -125, 10, 110, -109, 1};
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
    msg.setTimeStamp(0.7178360048579456);
    msg.setSource(47962U);
    msg.setSourceEntity(146U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(158U);
    msg.req_id = 53166U;
    msg.comm_mean = 3U;
    msg.destination.assign("CPCKRYDOUONXRGUVJXOMVYJETWMMLUHDHFXGOAORKECTCOGRAOESVSZXIQPDIHZAAQCIJBEINVIBHWOBMPEQWTOKZBEXDPGJDFCXTAWAIVQBKHIFFYRNKTVIRNZKPJMAYZNBJJMRSUHDGYWMGRVHAC");
    msg.deadline = 0.47036974050971847;
    msg.range = 0.7028552470061851;
    msg.data_mode = 110U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.7678237199124119;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OSAYBQKSUVMZCAWTXWIZCMIVBYUIBUMDFGEAI");
    const char tmp_msg_1[] = {-5, -20, -81, -125, 8, -23, 100, -21, -90, 100, 93, 28, -23, 13, -52, 9, 61};
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
    msg.setTimeStamp(0.35023566604669276);
    msg.setSource(17690U);
    msg.setSourceEntity(236U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(67U);
    msg.req_id = 2087U;
    msg.status = 241U;
    msg.range = 0.3201106946232314;
    msg.info.assign("UJDAQTWSBUXHMPWCFNZCYTLIQYPOROBBXRRCZEVCBTECWLGOGQFXKGJNQKZOWKKBIAHAUJOJIVDDBYMTIFSAWHYQXOJINFEYAFEAHUAPXXZVNYINMXQFKEMYQPGURUIQYNHNWMDTYHTDZOGJDHRVNEPMUIOMLEVLJMJGTXCFLKKHRMGSJSHVLPMORWXCDSOVBCRLASWTUFXEK");

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
    msg.setTimeStamp(0.6249608197087094);
    msg.setSource(15212U);
    msg.setSourceEntity(113U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(208U);
    msg.req_id = 53834U;
    msg.status = 89U;
    msg.range = 0.7347447579756332;
    msg.info.assign("CDMUSQVUJDCFMDLZWOEYTOPQBMKZSXIWZCKJEAJPDGYYVJUMNMEVQWZOMQTAQWIXDURHELEYSUAFRWLNUBLWBYHPIDGEROLZPSQONJRIJRXOFPYRMMCSPBPRXWTJKVIDCANAGQFYGAP");

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
    msg.setTimeStamp(0.6903130309304114);
    msg.setSource(49676U);
    msg.setSourceEntity(36U);
    msg.setDestination(26643U);
    msg.setDestinationEntity(15U);
    msg.req_id = 55832U;
    msg.status = 209U;
    msg.range = 0.044792364382700844;
    msg.info.assign("VRUXUIIRGUZRCFAJBJVMUTYXRPOBGJLPOVNXVKGLRACJ");

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
    msg.setTimeStamp(0.6805908730248392);
    msg.setSource(45010U);
    msg.setSourceEntity(211U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(72U);
    msg.req_id = 52544U;
    msg.destination.assign("ZFWHYCKHBKJCRKDGWEOUXYMOPYECOFTRLGHBMVSKVCNWYFAVOJHMORIABCQAZTNSCUDITFEDHIOOEZSNKDKNAVRLCDXYW");
    msg.timeout = 0.08207392467726193;
    msg.sms_text.assign("YLUULZVCBJPYVUGHUQMTZEXDQIBWQCBYWWBZZNSADGIDERCUVTLJLNLXIJREITVPPXXAJHNPIPXFNLFFHQMYGUNCQGJDUKZGIDVRZMXPVGYASCTANDBCQYKYATMSNOFFSOZWVODXAJRXDRJERWSAQKLLYWHOBCBMABZVKBHETSTXKPRAHGFIEGH");

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
    msg.setTimeStamp(0.7101364301849981);
    msg.setSource(26520U);
    msg.setSourceEntity(160U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(122U);
    msg.req_id = 61768U;
    msg.destination.assign("RNPCBJQJHTJPHWXRZOSWKOXLVFCICHDMTIPXMESRROALRCMAQJVXQEFSDVQZXVBIKCTSEXDELBOXQIKBGWAOJVVYKRVGBMCSQYVEDIGGXRVEMUGUTNTL");
    msg.timeout = 0.8163536015047977;
    msg.sms_text.assign("WINERTDQPZAMWEVLTJOAWONUQCJVODFJGMVGSGQFAVHOLNKQHXEAIRIKZHQQLVTFSOHYBSXYZJIHYZLDNCSUPDPVWMMMIBNGSARUVTTCOARJZBGCLFKWXDF");

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
    msg.setTimeStamp(0.3736001137510745);
    msg.setSource(54656U);
    msg.setSourceEntity(5U);
    msg.setDestination(1160U);
    msg.setDestinationEntity(18U);
    msg.req_id = 30223U;
    msg.destination.assign("AIWSDEXICPZDZMZEECVHEJLSDWQJVFLGWEMPVBJZGDMYHDRNZBEWTRCGYBSMSQYSQLPJINJQRQGKFCAAYBPIWFIPVPIPLRUQBNKWXGGKBDHOPUMFZVUHRUUFEVLNJLJUNLPBOHJVOTHWCHXRCWOMIMDLNXBACUXJ");
    msg.timeout = 0.7923229386111347;
    msg.sms_text.assign("MSIWPTLWHLLNCINPVQSUPXNJAHSBIDAPUTCCSZQKUZCOERBWUCZTHBJFSPIJMKPYMYNEUDLRHYMYEGFZGWMQMDHHTQSLKOGJXKORKJJOLAJCVQABPLDKXRGSRNXFWOFMGHALYFWHTBERFNTGEBACWUIKCXZADWUNBZRSSDIOPVUTYDOXVDJJTNVWZSFRXBXAQZDEVOEXKVMILXZVJVFGGFKGFAWHQVBOTOHEAILZYNCYYQBCIRUTIM");

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
    msg.setTimeStamp(0.7702066989283234);
    msg.setSource(32180U);
    msg.setSourceEntity(163U);
    msg.setDestination(52564U);
    msg.setDestinationEntity(159U);
    msg.req_id = 48U;
    msg.status = 180U;
    msg.info.assign("GUZWLRSAOPNMFCNQTRKQSQPUKDUKAUJJDNIUGVBUBUFSOYQGD");

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
    msg.setTimeStamp(0.22072601566929062);
    msg.setSource(57807U);
    msg.setSourceEntity(251U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(145U);
    msg.req_id = 43049U;
    msg.status = 27U;
    msg.info.assign("BCPWYPXKOQHFTEEOYFPTWDEIMRYZVVKSDAGGUGKVMWDMLJIBUMZFFXAIXK");

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
    msg.setTimeStamp(0.7659981823463571);
    msg.setSource(9876U);
    msg.setSourceEntity(41U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(128U);
    msg.req_id = 63238U;
    msg.status = 50U;
    msg.info.assign("WDHTODJWHSWLYNQUEZEBSAUBONXICPJZUVKQIDOFGLMREXXTNNZRJUNYJSBIBNFOEOGLASOMUFBCYKHRBUGSOZRGNBTGWMVAEMMMFULATDYCYBJWLSNKVPIYGXEHMIKMPXHJTYURAELCTCMNVPQRAZVJTKIBKRFHOSDKPIJDRZVGTQGLVLH");

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
    msg.setTimeStamp(0.3659657555620245);
    msg.setSource(36093U);
    msg.setSourceEntity(167U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(120U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.18246647739367883);
    msg.setSource(28924U);
    msg.setSourceEntity(86U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(13U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.9553799961139162);
    msg.setSource(21156U);
    msg.setSourceEntity(249U);
    msg.setDestination(4578U);
    msg.setDestinationEntity(137U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.8963688394819658);
    msg.setSource(17839U);
    msg.setSourceEntity(37U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(184U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.04568811519703375);
    msg.setSource(33067U);
    msg.setSourceEntity(195U);
    msg.setDestination(25506U);
    msg.setDestinationEntity(195U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.9631082633350619);
    msg.setSource(61220U);
    msg.setSourceEntity(129U);
    msg.setDestination(50380U);
    msg.setDestinationEntity(44U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.02045147620390808);
    msg.setSource(48756U);
    msg.setSourceEntity(50U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(71U);
    msg.req_id = 57882U;
    msg.destination.assign("JDDFTNSJOQIQOOOLDSURUCJVCLEVXNCNUWIAIFZNJMXHYQEWTUTZDFJPBFZXSBPHJZDKRRMYLUTALXJBCNGAQLK");
    msg.timeout = 0.4388580800132921;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("EYTFRLYHYADJTMLUSRSIEBYXNLYEGFCIZQSEIIOIQQRLKDPTMFGDIKHVXDLDNDAEEOVNGCCNYWUGHBNOMRCRUVWVILKDBCTFWOCKGG");
    tmp_msg_0.message_id = 36823U;
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
    msg.setTimeStamp(0.9345056851258373);
    msg.setSource(64562U);
    msg.setSourceEntity(56U);
    msg.setDestination(29124U);
    msg.setDestinationEntity(229U);
    msg.req_id = 29471U;
    msg.destination.assign("SIVDZDJWMGQJSWAHOSCYVBSBHURLFNFKVTYMYUQVUMEJTOODETZWSZGLODJXNIXHXRQORFAWXCFFHHGBAHWCYWUNMBQDEKGWMOABPJNNSHUVZNDFQFPRRKQGMJROGKAIUTVVAYXLQGAHTEWLISLOXJSSCDHIWAKCBYUFZPSPIMZUYHNKIXFCEEXUOOLRYYCLTRVENYADPJRMLXIDRLMMPUTDCJCTKITNNPVGCPGWGXEQKJZF");
    msg.timeout = 0.8375753991597975;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.5630985761781827;
    tmp_msg_0.lon = 0.06464746621189066;
    tmp_msg_0.depth = 211U;
    tmp_msg_0.speed = 0.10198984056165505;
    tmp_msg_0.psi = 0.6654815217923029;
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
    msg.setTimeStamp(0.7363486905235268);
    msg.setSource(25034U);
    msg.setSourceEntity(27U);
    msg.setDestination(38252U);
    msg.setDestinationEntity(144U);
    msg.req_id = 52871U;
    msg.destination.assign("HGLELWYWNGHYSUNHPKCIKOSXQJKDJKXGIYXPYPBFEUKMVBRSDWSXCQUUOAHXQUALRHTFJCEXOYLHSKNFQ");
    msg.timeout = 0.17334370124831233;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.10616274267374026);
    msg.setSource(59871U);
    msg.setSourceEntity(158U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(207U);
    msg.req_id = 45905U;
    msg.status = 179U;
    msg.info.assign("BIWLZHKXRBNQFWHCPJAQPCCCQRPZTHAZLLCDIIBWUSRMUKCPFXZJQAWJKNKEMSIVOYJGUTNDXWNJNAFKBBGBRSSEHEQYLZIFKLTVIFTUVMVEPTKDMYIAZNMMEQFTPVORZWUBUDEGQMVHXBDTNEFFSUVYORGGBICINWNYGRLFZSOCGDHQWYYYAEADXCRXYZLBRAUWNWXHLVLYASVPLSVOHTHRGFOMEAUGXDC");

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
    msg.setTimeStamp(0.23037917123643603);
    msg.setSource(38953U);
    msg.setSourceEntity(59U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(131U);
    msg.req_id = 48282U;
    msg.status = 195U;
    msg.info.assign("NDAGKKGNVKTFVMEIZZWXJEPLGNHPIJDGHDWGUMXSITCVLZCNPFPSUXRJLTPRECZRZJUIYQWCIMREUDIXAPQEJXHZYF");

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
    msg.setTimeStamp(0.8800285153497518);
    msg.setSource(25645U);
    msg.setSourceEntity(41U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(50U);
    msg.req_id = 23695U;
    msg.status = 59U;
    msg.info.assign("WVQELGLVHFPMJHFIRARSPCYJVUVGYFSULMOTKYLJ");

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
    msg.setTimeStamp(0.04435246017178973);
    msg.setSource(24634U);
    msg.setSourceEntity(87U);
    msg.setDestination(20972U);
    msg.setDestinationEntity(28U);
    msg.name.assign("RMJWPJNSCVUBQSSIQUPFIQNIDOXRVXLEGHPSPSBIDMTQJNHAECOMTCVLQABMDOISDEWZTNKRATHTGEEVOWFWYRUXEKTCJCMTLXFWMCBOTONVNVYCKKDSTMYQWYAHFGGJRXKYJPQNALIFMQFOXLERYYBUUGOVKQZIOVGKIJZKCRZYIXGZFXDI");
    msg.report_time = 0.7356965737728602;
    msg.medium = 90U;
    msg.lat = 0.9184426819725087;
    msg.lon = 0.4737035259296998;
    msg.depth = 0.08531770058019794;
    msg.alt = 0.5307078621299247;
    msg.sog = 0.8274972348656133;
    msg.cog = 0.32552442063418274;

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
    msg.setTimeStamp(0.03449680855376147);
    msg.setSource(53805U);
    msg.setSourceEntity(252U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(100U);
    msg.name.assign("FQAUBUZCGMXZSBDVHEAZEAGHMAGPZPQKWMFSPBMIWCPRYKTWVYVGIWQCVKTIPHLTXQUOXBIIOVWONBVEOOALRYMYFJUFCNKRFZUCDWRSIDMAYTXDKENSOVTHEHRXDLVJXDFPCNUQWEYYNHCDKLRJBAQLTDXTAFRARJYSWELELVBUREQIQSSUUIIZKZSLCJHGOGJNXNFOBWPKUTYZKBYCMJOGHMQPNLSRZWXNXPLGGDTKHDVNJJJPSMZEA");
    msg.report_time = 0.47468567575457443;
    msg.medium = 100U;
    msg.lat = 0.6724431835298877;
    msg.lon = 0.7141107493124929;
    msg.depth = 0.7753241300649995;
    msg.alt = 0.666013111772555;
    msg.sog = 0.45769433606977783;
    msg.cog = 0.8271934684775327;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 31333U;
    tmp_msg_0.lat = 0.9141718517530656;
    tmp_msg_0.lon = 0.017658287052500055;
    tmp_msg_0.z = 0.43807496545613833;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.speed = 0.362840759267402;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.roll = 0.5002598420257881;
    tmp_msg_0.pitch = 0.5906235869082763;
    tmp_msg_0.yaw = 0.7573806518220435;
    tmp_msg_0.custom.assign("RXCSOPZTRNYBJDFJZQTQLWNUQDVUAVXYDJIZGWJJJWCXITDNQKYZOOBLMQDCBSFBPCGZQKNSUXSYHDNMFNYAIIOMQSTEHVHZRUMFVPDHXZTKEUHKGEXBJHEBAWJGVOOGEPVKRALVIMQYSCXDHRPXELJSQYPFTRABYIQBLVS");
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
    msg.setTimeStamp(0.2921692343112403);
    msg.setSource(59704U);
    msg.setSourceEntity(173U);
    msg.setDestination(43220U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QQVKBGYPHOXEXZVOEGZXUWPSOHQGQRJKGZTWMRLKTFBBUWYCLRFXOEGUTLHKWWTTLESVGBFXGRJACZOWDGCAMVMMAIXUHDXUBPVKPBSKEADZYQKOVETSRPTNVIELXWSJQYFUTMUSHPNKDWXVBNSCJANUHBCGCYHDIJIHRCYIFHZEJSDFEYLVAUSROFMAIZCCUMNGINZITFF");
    msg.report_time = 0.909176924697642;
    msg.medium = 60U;
    msg.lat = 0.6055489194227753;
    msg.lon = 0.9943900535880359;
    msg.depth = 0.7252942227008863;
    msg.alt = 0.29876805311529187;
    msg.sog = 0.42434121554393;
    msg.cog = 0.07172604584381315;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7557761042379968;
    tmp_msg_0.lon = 0.8393348169073288;
    tmp_msg_0.eta = 2973304059U;
    tmp_msg_0.duration = 62966U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8783332706418475);
    msg.setSource(20104U);
    msg.setSourceEntity(238U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.3155617790178693);
    msg.setSource(30090U);
    msg.setSourceEntity(80U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.702338593446212);
    msg.setSource(23958U);
    msg.setSourceEntity(150U);
    msg.setDestination(11647U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.3744895311927907);
    msg.setSource(8249U);
    msg.setSourceEntity(117U);
    msg.setDestination(29525U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("JHKVPXVRKMLLTXWSUTXBUGIKVAMRHSFEUGEVWKJTUACOXGDBHDOICNJCCWXQWFLRSZWIQZZREEISQZAKGVNILHMBULQYKMBP");
    msg.description.assign("IFRGKGONCZZXIAIIYYRWVMPHSRJJPIGSRTCGQLLTITEXMYBUZMKRCHDMEJNJOZJNOOCGXTRJQEVFPMBGYVDEUAANJBXQLDAFPDSGFVOGYSBXRTOZASNPTJRZCGSVBFDZNZAZVTLCPSXKTL");
    msg.vnamespace.assign("FVTNZXVFCWOWMHILUVTMNRXBALUZQFMJCRILPOTEIOTLPWGZNVMGGIGFWPBWPBKCJCOQQDZDAKHMSGSXEQPPHNEFXKNEMQYTQAZTUXFYHEQDUOABBYMJCXLQPJOQICRWESXHNDPYCUURNDHRNEWLAYHEAGDJGMIUSAIYDWTJNXILISGTGWRCSOGCJBZXBDYLVMYKEVUKXRNLHFDDHSBKVSBOKAKROOAZABIVS");
    msg.start_man_id.assign("RPMOJMTJDFRSNUIJPMWBCTVKNXNAASGXUWGMGDLRZXEBPEMOOKHAORABRNBBARTLVHEEAXOHMYWCLDNSYCKBKLQJSTFDJYVSUJIHZXFQJUITOQLOPCZYEPTRPIUJXEMULVPGCSFGMQGYYBZINTKVYHDBUIGKMGZFAQZEWVYHAUAWRDVNNRAXDHHSUDRLFBIEOPZZCXXPCTOGCKLFWLIPYWFWLTIVQDUVSCNHEWWQTOM");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("MZBLVLTUUYTNBCWLTSKIFRDKZBOYDRBSECCBHHQGKO");
    tmp_msg_0.dest_man.assign("OKIRNFIGAHZJOJTISWUTWBJELSAKHIBHUAPMWUFOSRBFSBCPNMVESQZGBDBYCNTJHSHZYGDRKCMVUDLIWBNXEJQCHMXDJTPZMTMRCXKFNJTEHCQCESFZWLVRDDYYYOYQSLKJRLMMIJZGXIYORKNPLPKFYBZUGLAQWEJAGDCXTYUXNGDSYWXMQEGZLTEOEWRPRNXOAFF");
    tmp_msg_0.conditions.assign("ISTYFCRKZXUFGLIUVAEXJWCNSTVBOCUDHFCVBKWULYNORVJOLADKKQDMTVUIUIAWUUYOSDGPHYHFSFCIZUGNBVQRPWQEXHMCPLBEOTEAQGJJOKVZQEBAODZIYDFHSMPGTXHBRYNHQHLRWKZZBWSMQRISJDHIJCNLIQPPMJBFKZYGMENRPWLKGCRNXLAXWJQPSLOYEAKMMENVDSPTQCIVAOCANSTFOE");
    IMC::Turbidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5657329618760548;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::PathControlState tmp_msg_1;
    tmp_msg_1.path_ref = 881659497U;
    tmp_msg_1.start_lat = 0.014439883291051059;
    tmp_msg_1.start_lon = 0.5458936053937948;
    tmp_msg_1.start_z = 0.7902980148365877;
    tmp_msg_1.start_z_units = 14U;
    tmp_msg_1.end_lat = 0.33166557031042987;
    tmp_msg_1.end_lon = 0.4571614785749385;
    tmp_msg_1.end_z = 0.27333462909058337;
    tmp_msg_1.end_z_units = 241U;
    tmp_msg_1.lradius = 0.5855919899403578;
    tmp_msg_1.flags = 57U;
    tmp_msg_1.x = 0.4850636836738298;
    tmp_msg_1.y = 0.061198183040415244;
    tmp_msg_1.z = 0.09089087011878993;
    tmp_msg_1.vx = 0.5065761028057479;
    tmp_msg_1.vy = 0.04407343228042593;
    tmp_msg_1.vz = 0.30539902919090434;
    tmp_msg_1.course_error = 0.5186208683173187;
    tmp_msg_1.eta = 24764U;
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
    msg.setTimeStamp(0.07227443717724524);
    msg.setSource(6322U);
    msg.setSourceEntity(64U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("RGAEBQMOVAFB");
    msg.description.assign("ZWNLDGHDFGRLUGYIGMXVUDAJXAYOJLIRJYDSPBIFBXZOSGOHVYBTGYKLRNJIVKBTGTOCWZTAPDNMVKVUEMFQYSNKDNCTWCGIWMNMWJPKVUIIALCKXKARFSBEERXAWDOHBNPZMGCCXNQVCLZTJVDHEZHUABPJXNYRFOPXXCQFUHVUQ");
    msg.vnamespace.assign("HWKDXOUBSHUMVLVYLPDAUEBIRCKAEQTCNTWIEFGHLITZXNEQSMYSAXBKRILKRGBLMTYNIBGWSBTCWGWDEFKS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DJMJFNSWPQWUKSYARJCMCZIPQSSMHQYTYEWLNZRMFPBXSPGDRBJCTAYWSHUBFQGONGOVPOQVQLOINIUYABBTWRODXIKBTZMRLAOXPELNGOYYPRXUFCUCHBGLTVTBHMNPJLNZQIYDJYEXXVHMKVSKGQFTSDOEWAWGQCTMZJYHDRXCFIZAWWFSKJDZVAKAVFIPZEDHZNKGUMXHCVQJFHGPVFAZTW");
    tmp_msg_0.value.assign("BBXAYEUGSPTWKCZSJDRXYHJTEZPOBJNDHYMJDPROESBLXLQQZRNFDIJIHXHZEAJPVDOTIQPAGBJGJHTFYRYKMBUXZAFDIWUTYIVLMSMC");
    tmp_msg_0.type = 155U;
    tmp_msg_0.access = 170U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZOJZAMKWWKGEFDUSPKSZBYACXXSNVFUOWSIGTGZBTLXFANLSUGZYDLRIXVAONAECZBIGIHHCKHPPZNYSDUFJDQIVEMQTRCJMIPWCBHLVKOFLYETJKOXLTVOJMWVMBGCQLVPTENUBGKER");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GHPXDEJTEMESXYIEKYNA");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("UPNRQIQEDOHIHPOTZDBZJWXEYPGWEMGUGGQDOIEFVKWDUMHYENZFFQF");
    tmp_tmp_msg_1_0.formation_name.assign("EPAATBLSCKNBMIEOCHCCEHCQCZKBPJSYYIUQMDKQAXQRPJNTRWQVUMKUIJFNEWLYDACMSUVLUWMJRXDIVSGDXGNPVHMMEAFUXBBKSBHWTNDKYAFHTZPWWUJZLFXTYBGLHSZSAOSJEIJFGGVXBZGKWL");
    tmp_tmp_msg_1_0.plan_id.assign("VVSQWJUPIAJVTBCSNDGIRLCQZMGKPORCQXHFLHNZ");
    tmp_tmp_msg_1_0.description.assign("MDWGFFHODJXVORQRDBWNBZSZVYDPVWCIKFSWPWZNBGPIFXROOETZRZNQCELHFKDCQOQJHFZCLIEAJRGGGGTTKYJPFNHSKIZVXCTKHCIBRLNSWNUMGTIMTUHHQYJOYSOQSAJXBWSPUONXMUXBPYQXUGFYRVYKDWVNPVACLUYAJTPLADDDLKVXKLCGZESCAQJWMIPONKLMXXAMEFJTQBHBHBNTUAPIQYHEBETDRAAEVLMEJECGUSFMZYORMIVZW");
    tmp_tmp_msg_1_0.leader_speed = 0.04257880876182685;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.45431281188075223;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.6225611197800635;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.4491664247311419;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 62159U;
    tmp_tmp_msg_1_0.converg_max = 0.17903868748336094;
    tmp_tmp_msg_1_0.converg_timeout = 33517U;
    tmp_tmp_msg_1_0.comms_timeout = 24461U;
    tmp_tmp_msg_1_0.turb_lim = 0.38745580537109525;
    tmp_tmp_msg_1_0.custom.assign("SEWRMRLHFULSUPLWMLTQTJHTUGBIWRUJQISFCOUWSAJGFLKUKXBMZUBZHGCVHWQZBMQDAKVRKZCYYWLAWEGITPYPYEDPNPQKEEGXNCJRIFMNSEDPCWBYTBSRYOSQVXANTPOVDTDUQQNRTOXSEBOOLJEVTXQFNCGHJSUZZDDZHCFHMFOVCNAGDKHKLIVWBZYCSXAJZFMXQLIRKTWAYPHMIRGXAAEPEHXPOKGFGBX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredVelocity tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.u = 0.7170678750156306;
    tmp_tmp_msg_1_1.v = 0.9575250138106254;
    tmp_tmp_msg_1_1.w = 0.5756895927591076;
    tmp_tmp_msg_1_1.p = 0.3523830414694198;
    tmp_tmp_msg_1_1.q = 0.9903594541538537;
    tmp_tmp_msg_1_1.r = 0.44465756066001516;
    tmp_tmp_msg_1_1.flags = 120U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("UMDNOHXCIIRBKTQBQEBGKHKPVVAITQCOGDFCWUXYQMWXDIANJYVUKASAVGXEPIFPWLHIOEFYHJWJAVFVZUTOOZEQLRYLRVCAIWJBGSWCFBXSRTUNMUSUXJRPMRQXOSGCXWDTILPEUWONFNBTZANJEVQJLGFOTKGQKRAHTSWHDOHYZLSSZEDSHXCBRPDI");
    tmp_msg_2.dest_man.assign("CIGRDOICTGVHXOJCTIFNUDBNJPDAGLJBVVMYFWROACBGDYOVYTWTABSHVTUWHPQHNFKKBXPFJZIJQXOJZRHEWQEQAAOTWSLJMUXELDYUAWICPQOJNEIYFCUBUUYLYDCLZZYFKMAHPNSWVM");
    tmp_msg_2.conditions.assign("XWYQSAQCAKAZBPOINNCXFREYZGIPDEXLSOERMGZTMUCPKSYGXLQVQUIFHJFRANOMBHOOMMLGDKJOWEULIRVFFPUHUGDOLSSSMFXPSDPUQORPTJJHAWRH");
    msg.transitions.push_back(tmp_msg_2);
    IMC::TextMessage tmp_msg_3;
    tmp_msg_3.origin.assign("IBKWCFVUKJEROBJXPYVSCMXHMYUQESHWGXPOLDPHSPLXZHRDUNRXLLOXLCCFOARDSBHGTFNSJVVAKTLIFOMYFMXJKEFHJTUGHCNOPADYPGVJHM");
    tmp_msg_3.text.assign("VIZGFFLVGG");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.1202365086465389);
    msg.setSource(47971U);
    msg.setSourceEntity(13U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(68U);
    msg.plan_id.assign("TNXGAODNLQEPPSSVUOKTMHPSKBYATOQVUHCGGTDLAJDBCXLTWQWUZNTIFSCXLVDPPWVOJROVBAPYNFXRYZKXIBYUEHCOOBUSTJDFVDCLRHELJJFHJPZYMMBMRRSUZYMRASMRFN");
    msg.description.assign("TRNYSYVDDCKKTQEMGXBQOGHBHCACCRXLGBNOJKAJBSD");
    msg.vnamespace.assign("ERDZXHXRLPAPOGYCZTFDFRSOFYSRVCBSMSBIYABMFALIKHFMLDHNYZZLUGFTXHGINSYHQBPQTGUBRGZQIWJOYMLEUVNAKOMXWKXNKWSXCKDJJLJHVRBUVEDMVTVKBOZGPJISUXHUNEUKPCMESLGCQMJZJXRWHKESWLGYBGBAVAJUVJTEJEWIXUOZPQDMKGDVYPRVZLOHTAIFFTHIDNNFCYIPRFLBTDTCTCEKZAOEWPCQQDNMWIQ");
    msg.start_man_id.assign("OJTMSIRYGNLOCHMREYOZPZNXXOPRWNRYDWWJENKWFUXZEHFGPHTTURJRNIDPNPYUTKSVNHGMEKUEALLGAQLHGXJDEHBONDRMLBFAKFMHMLVZDCLTBRQFJALSZRDGCDYQTIEISZFSQMYHCNXWBOHVNSOBQOIKWJUTVKATCCWYKXIVDCXUJCVKVJDQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WNUNDSVRLFLARZJSZQLMKBHIUBRTCPTRENMCBCDRLWM");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("ETFWPEVNZYSLHN");
    tmp_tmp_msg_0_0.formation_name.assign("XIRBRTJDFMONPJXSNQOQRDPPRHIKZWRGEYATSUBBSCDCZBWEDCTFIOYHRKANUUPHHKIGUAJWRZFTEGDOMSFGMNJBHRZRCVWCNPKYYJDGQIQTMPYHWXXGGAGILLAOQSMULFVHEQTCSVKLOTKVFJMQVPAYCLEXEBYOUCWBSNAAGFUBBAZSMMC");
    tmp_tmp_msg_0_0.plan_id.assign("HLWLQHNCUUBGFVEROPVUGLMTYGUBPRKXOESRSRINHSFCUANGMDBZRVBOHSSFEJYAUHIIDYTFLOZYUOKDXQPDGTZKAGIOVWXNMJTLSNEILIJXZXNATHQKWBGFQVQXJICCPZDHTWRSVZMASXWYKCEYFWUKHMRJVULEOGOOTPQREBYVJWCKCLPADBJDKVTNAVTNWMMAQZNCAYHJRZMJS");
    tmp_tmp_msg_0_0.description.assign("JLSKPDNEJFNFIBSROZAOYGBZHVKUMVXBQNJTVRLYUTXCALKGSJZKWOAGJBFRWDAASYTQSPAIHOMXQ");
    tmp_tmp_msg_0_0.leader_speed = 0.9960590175257299;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.17801560731542998;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.7006816632905394;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.7158492111156322;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 26921U;
    tmp_tmp_msg_0_0.converg_max = 0.847654104199532;
    tmp_tmp_msg_0_0.converg_timeout = 48846U;
    tmp_tmp_msg_0_0.comms_timeout = 50563U;
    tmp_tmp_msg_0_0.turb_lim = 0.1847404680584549;
    tmp_tmp_msg_0_0.custom.assign("AQCFEKXXAFNLLGNJWBJGXIOUAGVYTYRMQSSTVDCONWVWRGATYILZHEPNCSIMDRPFDMGKOZXPABTVUKOIJTYSLJQMNMFGYCYSFYRPFTDURQLNUGHIUPIIJEBLZOHKGHWSADQRDLZUYQVWXWAGNBIDUVMWFPNFBEWXBCSYXDSVXTDMJXXUIJCKPNJOFOECMAZZEKMUJQBRWHVRZOKRPUAESBFI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VtolState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 210U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("QFNYIKSBJCCCIUWLYHDPNUXJWSQXNJZRTPXCFNBHNSVXXFPYMGYOAMJJZJGVDKWJSVNOTVYEHCKQBARPJICGEHPAAGNEBRZMTALMOMDVBGIUPLSZMCYKRMYHBVEZREGILBKUCLZEDAZYIPOJYSXUALKPDOXTOQQDHLLXQP");
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
    msg.setTimeStamp(0.09513394571211087);
    msg.setSource(52331U);
    msg.setSourceEntity(193U);
    msg.setDestination(7092U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("ACVBSRAHTWVDFQAVRHJRDEGU");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("NERZXWJFAELNSMNXYYVSIKBOZULZSTNRIJTWTVEUOQGPMWDSWQLOVHXSMRDPLDMOEIHPBKIAGLBRYLTGHAFMTFBUPZFSMBUXAWHTAKRIFDLVXPJICUCQRXOIDBXECRNVGIQLVZFEHRAZUENQMMKLKKTVSDNMFBGHAGDHZWKYITYFYNWJHZCUNOKHYSYTJFCGQUDCQUJJQOLRPZVBAYUBCJOGXQCIKCVWPE");
    tmp_msg_0.formation_name.assign("DWJLWFPKUOJULCTRLFTXGZPSWNQQCZNRNGNQXLHQXGOWRNVWCXTKOYYSAJFAVIPADMHJXPJEHQPMTBIZHGAGIUZMCBTYSNSCNTOTMWHGBIDEQWMOKDMKZUEYQEVLJDGHAVHYAHKYREELWDBMYQKSSEGARDKXCJPLPTRDSUPREMJNUUCFXCWZPMTLALBQTNABIZYVRHIUAVOXKODJYVMI");
    tmp_msg_0.plan_id.assign("YEQVGWVFFKADVYISKINFIBPSDYEOPIOVETHNGFCYXAMXBTSCPRWJNPLVZOLWIHJVJCRFMDDGFGKLYXEAQINKIHSUBQLVQCRBXULQDBTGTOXMBCBEXSBZNJJPTJXHCMPRRHFEGIJVCLLUUWZJEPPNCLTJGWTKOKTAUOFOGUNDVUDKRXWSWAZQXCRMSIAMDWRNKGAQWSM");
    tmp_msg_0.description.assign("EEZTBLGVAATFJQJEBPGRFPRVDR");
    tmp_msg_0.leader_speed = 0.5003317948095618;
    tmp_msg_0.leader_bank_lim = 0.31656942540491084;
    tmp_msg_0.pos_sim_err_lim = 0.30892531545208135;
    tmp_msg_0.pos_sim_err_wrn = 0.06122135512311866;
    tmp_msg_0.pos_sim_err_timeout = 10838U;
    tmp_msg_0.converg_max = 0.4522379641480231;
    tmp_msg_0.converg_timeout = 47902U;
    tmp_msg_0.comms_timeout = 48050U;
    tmp_msg_0.turb_lim = 0.3931981653926211;
    tmp_msg_0.custom.assign("EQSSWDNTNLCCSBCCYIPTVVPIZNQEBSQRDULWRXZIIARNAFLGAEUSDSKKQTFHZRHEHHECPPFWBOEGGTJSOJYALUPXGAXZLOWKJFJFGUUHDTVBXEBHEMMADEPXTMMXOZGINRVUAQYUPUDIAUGXBBBRGMPYWKDZHBXCZFYVLKTOXSIZVVCGJTMRFKYYQCQBVM");
    msg.data.set(tmp_msg_0);
    IMC::TrexOperation tmp_msg_1;
    tmp_msg_1.op = 225U;
    tmp_msg_1.goal_id.assign("ZFGQBHEUMRAHFRDYWO");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("QFIKQBGVMRXMHKISDWHMJXSCLJUVAPVOWHOEFCRGXVCAHHDZQXXLFWKGPPSZUXYUTISKUUDIFPAHUXZRTOLZNSABDKNSKLTYDALRGJWPKHMDCBITUKPGXZJJWONSNPJDZYNZFGJECEWRROFYJLMAGGOPGLQXZYICBFMREYQIQSVRDLTTZVLRYKPENGJWYOVBWQTRXMBOCZSVTWHIFOELE");
    tmp_tmp_msg_1_0.predicate.assign("WVZKWINHVMGGZUMDGODCWLBYVZZLVQXPUVUEHFLWYCWQLOACASUYJSGSXDLBHXWNETPKSVCOOOEBJTNCCSAYDYSFNAPOWMIEUFBAAQKWFYMIFQXTGRRPPVUXBFAXJSZKPZI");
    IMC::TrexAttribute tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("JWHBGRESPCBEDCJTUWQXEMXRQDCZZGELNSORHVMZRPJYGYIDAUHIHMQPZFKDDNVFJMTYFPCGEIWRDPSLBOUJD");
    tmp_tmp_tmp_msg_1_0_0.attr_type = 184U;
    tmp_tmp_tmp_msg_1_0_0.min.assign("ZUWHYKTSBOXFUUQCTIVRYNHOAJWDDSUMFDTOEBXZSXSWVYKLZHSWVOFSIIGNCM");
    tmp_tmp_tmp_msg_1_0_0.max.assign("VFJUZUIRNDZKPYDUFOKTBMCSSVTLUKOZECEIEERGFRKPQ");
    tmp_tmp_msg_1_0.attributes.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.token.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Takeoff tmp_msg_2;
    tmp_msg_2.lat = 0.6656242121456922;
    tmp_msg_2.lon = 0.5561226794848886;
    tmp_msg_2.z = 0.9186247406580917;
    tmp_msg_2.z_units = 43U;
    tmp_msg_2.speed = 0.7146425737438502;
    tmp_msg_2.speed_units = 211U;
    tmp_msg_2.takeoff_pitch = 0.973908395659113;
    tmp_msg_2.custom.assign("BMBKFRVFRGGSFKYHBHQIAVTQ");
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
    msg.setTimeStamp(0.5401591313856537);
    msg.setSource(65487U);
    msg.setSourceEntity(107U);
    msg.setDestination(13520U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("GMZGEOXHYBVDMQNSTXPFLCTRJCYJVLAAQCBCOSDTSBIIFHTKQEZMPRJVTYQBFPURJZMVITHFRXSVRGRVHCFFLGNTDCMEJVWUBPULHWYOPDNRMKDZOSVKUXTIHSZQHXUENAWGKUQIXROWNAQ");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 45452U;
    tmp_msg_0.custom.assign("TDSBVPBYLVJIBTDVZXXXHPPSVIYOKAMBNECSCXFFHHWJVIRJUQQFOJYQMNEYXGCPZEKAXNWIABKGKRMVABPUGLKOEPJEZFGIGVGSJLNYUBQSETURZDDMLQEMZGYQUCKRFPAYKCYDHFEWCHRTJACONYOEIWYNAJRHXFBXWJCNOQIUWQPJHABKBPSRNHTDAHMWIOSDUOFREQHSZFTUXOUOTINUK");
    msg.data.set(tmp_msg_0);
    IMC::Sample tmp_msg_1;
    tmp_msg_1.timeout = 49435U;
    tmp_msg_1.lat = 0.028965203942564632;
    tmp_msg_1.lon = 0.8680284304914324;
    tmp_msg_1.z = 0.2016781561522566;
    tmp_msg_1.z_units = 81U;
    tmp_msg_1.speed = 0.46570309184589764;
    tmp_msg_1.speed_units = 196U;
    tmp_msg_1.syringe0 = 6U;
    tmp_msg_1.syringe1 = 45U;
    tmp_msg_1.syringe2 = 102U;
    tmp_msg_1.custom.assign("RDBQNHZKMJUYGWSFRTWXKXFARLSHOWJZJTFKZVBTPONYAMMXWIBISUGUGCDHXOGHXUSQJDPRTCLPAUJVURBGCCLMAXCEASEVANVQQWYHIHTBITDYAQOIQKQYZLKXVEPROMLWIYEWFFSPVPTGJWIPSCPMFUXMYVBHNGCHJENZUREEDNKIGPZOAHJSDXVKIOUFAZBECLNVTDHKKOODRLEUA");
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
    msg.setTimeStamp(0.9180874406834962);
    msg.setSource(40975U);
    msg.setSourceEntity(213U);
    msg.setDestination(27300U);
    msg.setDestinationEntity(125U);
    msg.maneuver_id.assign("NCLBAMCQKLEERVKOWQRBRCOXDTWPASZFRYJJMECFDKHVSYBHBSOSHXOAWNSHEHZNDBLNOKTMYXVUXMRGZTKYHPFJEBXFFWZKBAOQKBVEDIQFNWAQWSNVIKPJZVPUIOYUGHGZLDTIHDXWTCNLJSBRGQJMEPJYYCYJQPYEDRUTGXSACLNCQVAAGPZWMIZ");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.21602247602900737;
    tmp_msg_0.lon = 0.4675254345637232;
    tmp_msg_0.z = 0.167602570418521;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.radius = 0.7974088630992827;
    tmp_msg_0.duration = 52458U;
    tmp_msg_0.speed = 0.2988057903602538;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.popup_period = 448U;
    tmp_msg_0.popup_duration = 46175U;
    tmp_msg_0.flags = 121U;
    tmp_msg_0.custom.assign("NZJJTGDBFVGWVEOSGEPBRBPQVVKFZWFXRLQYUHYTCBIAPMVIQIXLXAILMNDTPAIDBLKWYYDHPZXTEQQOPCSGQMZSZTAXXROUHOGKPHCUEQHLVXFXCRENJUHIGSVRQYYCMTUHXSSYHRZBFWNNIONQAANUJXBWCFDJJSKEUBSSOFGUYTAPFMAVDLFKYECHKMTDDJWJRTHZFZIQRKISRNWOKOPNDDBPCMUEMGNAL");
    msg.data.set(tmp_msg_0);
    IMC::Turbidity tmp_msg_1;
    tmp_msg_1.value = 0.8950567283734397;
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
    msg.setTimeStamp(0.6709389274585492);
    msg.setSource(30674U);
    msg.setSourceEntity(191U);
    msg.setDestination(30193U);
    msg.setDestinationEntity(133U);
    msg.source_man.assign("IJWFCIFXHRDLOSIVURSXOHNATTODWGMNBRBSYKYNUVRNQPROOZFBMGTJTFPQKMVKNFFFMEAQJDKRPYCLEAP");
    msg.dest_man.assign("KDRIPPJCKRMWBYHYEVHSKPAAPSIDFGYEWGFHXFQLUPSWLDJMMNNHAVBQNHNBIJRJRKMSAOIE");
    msg.conditions.assign("GSAWZRGRGUCRAJWUIDPIJDWAOAZUGMLMFNPZJBSHBLCGVCOCVRVPCRZDWNLSUHDZQIXSOEKMSMKEGKQKJSQNYMPJTNLGQYFZCODOQJZB");
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 6003U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.027165715947850555;
    tmp_tmp_msg_0_0.lon = 0.6248686823956519;
    tmp_tmp_msg_0_0.alt = 0.1458518574546297;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9549189309551724);
    msg.setSource(60691U);
    msg.setSourceEntity(233U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(236U);
    msg.source_man.assign("DIPVVADMQKSWYSNSWUBIYHXLRBEOUQHOJMWCCQJACDXVGFKIZFLJHJLGNL");
    msg.dest_man.assign("WXFSCFCJBILSTFZDXPVXUPPUDDRKTZQUAISNAODWTGJCCNSAWTVBMNUHWEMRYTSMQWYDBJFRFAKXNFGJWYNYDOLADWIVKYYQIRTJEAHSXCQOBJNOHEPTGHKICZFKBVZFHGNDEOYTRGOZBCYMGCEXRJLBGIRNBSSAPPRZJZHEXLJULNPZUEXCSPAGPEWVFWLOLTKMDZIHLVWULNOGMUGFARMYXESJMHOLKMKMBOCXQQVUQ");
    msg.conditions.assign("GZKGDLGAVDSGEKVXXFTIUCCZOAYAOZSCFOVSYNARBLETXHPDRJGQGXAXSTUKBYHDANPZQCDESTCUFLIWXLJKKHIGKLPVLEWORSJMQAGNFNIYDQVFZSIRYKTKMBXEAUZJEWURMJPXFNMHBHXCOEDJ");
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 69U;
    tmp_msg_0.reason.assign("FOSPSLJNJIURFBAJKZZJTSBTXZPCBZHXOAZQABYWRMVQNQGSFKANFTQGXVRGUVQYIPVKXXNIEQQTSKMEGRONINDGMSCEGHIVVRKJKPLBJMPSOIKZWPYOEGEDSWVDJYDTROU");
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
    msg.setTimeStamp(0.025228561666189475);
    msg.setSource(11893U);
    msg.setSourceEntity(178U);
    msg.setDestination(18145U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("MXPWOEGCMHKHRHDQYEMLSVOPAXHXEVTDTJMSUMNOOUIWSTKARVHIBCCSZLWFWZCCZLKWLAMSBPUZLNGQRQCAVEPIQBJHFPCKBQJSGIYDXYLNWORNJVFUXDKOEPSFVGJMCWOQYXFDRAHIRBKGYQUBIQDBNFBZOYDSLDFJRFJLAVQFWUMYNZZUUFHSBTHZGPEN");
    msg.dest_man.assign("DUAMFZCDJVQSHZNIUSDOCVBRELIYHNJUKMPZEEGQTMFIUKCPWOWTBDJMIMYTLAABDESXTOLKIXYQWSCNWJVTPVANEGDZSGHJEXOTPYSMQZVLTBOLGNZRIHRQGBFRRPPIARFGRYMVALXBQAKUDFNDPWHKFQMEWFCRPWBTLXVNAHJJ");
    msg.conditions.assign("DBCTDPOBXFNSQTPURBXGOLNWTARQAKDRDMOBQPEHFVZVUXKKMRHGOQIYPMHIPMOSHBFJUXYNWUCUCJXHDAVNLRVZPRGSYFLTRKXALQNWKRJUSIAMYUKSLFHVKQATEJGJLJEKCPDCWICIIZNPFYIPDILBSPEIBTGGTBEVAJJTXBNDHWSZTYDOZTLQSWGGWHZBX");
    IMC::AcousticMessage tmp_msg_0;
    IMC::GetImageCoords tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.camid = 127U;
    tmp_tmp_msg_0_0.x = 59870U;
    tmp_tmp_msg_0_0.y = 23326U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0037730362765309167);
    msg.setSource(59281U);
    msg.setSourceEntity(144U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(102U);
    msg.command = 247U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LOYWEJWATFAGNDFUSMSYAYBOJAHELJBFXBDVKXRRMSBTNIZMIQTXYDDPUFYMKKOHMINPQJNEHOXXEVCPWSKTCDXNRBSRZSOVCMXWLHL");
    tmp_msg_0.description.assign("VMCFJTMMWFRJYALXFWGGMEQAAAYARKRHLCRTFLDIDUQQTPNHNVNPCVWF");
    tmp_msg_0.vnamespace.assign("LOHZHMTFUNWHYVOHTCSPBUPEGSEFRPTIIVKFRGIUIRIAZSGARDMJATZSCXJKKMLJLQRIEUWADXVZEAKFHCZJFXONBBJDCYYNUXWAXNMFWOTXDJLERFDLQDCLISCDMHKEIXPVYETUAGDGYGLALQFHQEYXYRBMVPDWNVTCBFBZCLQKPCNJSICVTQBJQSYITMGQWYNHLUNOHGASVEHQZABWPWNFUXXBSQKZDMZOVMR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YUTBLXSSMDPUMLHTHKVQFEWRUXYGQFSPJATYCWUJETQRRQEZKJBJHHZRVQFJRZLGC");
    tmp_tmp_msg_0_0.value.assign("MMUVENTRVWJBXDNEZZBCIUDETGSDWVIXDBVXYCNTGWFMCTWVTJJQXYFLEFAPOKVVTXAJJPBQUKRUVHLGCXRCTAMUQYMEHKJSOADAWXBICORZJOZBEEABAOGXFAKKLQLXFNNDOZUYSHAPFQIVWKDEPDF");
    tmp_tmp_msg_0_0.type = 15U;
    tmp_tmp_msg_0_0.access = 103U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CEBRNOSTKCWKNMBKMZVJLYRTPOEGTWQLWDOSQAMZXFQMQHNICADGFHANSNYTBWRYBYORGDWGULBRNJZWHRDVJGXHQVLSIKIJDJKZIIDIWSSXKUSTNQABIDAUXFMMHGFGBKHDTZUMELVMAXVJT");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SMXUCCVIPIDEWGTWQEELJBXFUFUHRDENZZBZJCHDKARBMGJQLSQLRFWKWKFANKXGZPEHJQOPTTUUMDAHYOCSTEQFCVXERYRQJCUMXWAJWJIAYAFTPGXPZNBYJVQXQNKYROHZGYYHBLLKPGDSRUOCNTSYRLFCSF");
    tmp_tmp_msg_0_1.dest_man.assign("VFZOPJFITRATNDNPKOVVGXNZLFBDOQRTRIGYUMEAYUFBFPWSLLJIXBKHMTYXMIIKPRPCPYVLZQWUWWQRRORDOGZVSDATEEDCXGOCTPEZATSNBUKHWCRUHVXJRETBHICUVLXAJTHOKXZNAOTHHIENSSSQYUPAXXYAYMSIOIWYCKQBLSF");
    tmp_tmp_msg_0_1.conditions.assign("DBGTAQMGBDEFUUMJBPMSRSPMKIXBAUMWLLHOGQUXAUGOOQWYRLGYRIBOIWWKNNSHPTYVUCDTWJGMASVCICQEBIPZPHTWJRAZAFLOVIBNVPUOELKTNLXKZREUQNQECSTHKBCRXNFZLFFIBDIOPWRVXDOFIHJUCKRLVGJMFSSTJVMHMNOD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblPositionExtended tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target.assign("ZRNHJQIOJVYALBSJMVYIVIPEMCVOJGWAPTLUBJCXROGOJITUEBHOWQGWCRSDUTSPLRRYKOFSGCMQCYLFJFFGUANMWDLTPYDSYHNWPNDSPVRWCXWXURIOUAAKLHFTEIMQBYSVMETVCCSUSMRHQXWVWXKMVBXHMEOR");
    tmp_tmp_msg_0_2.x = 0.9539778683603642;
    tmp_tmp_msg_0_2.y = 0.9027773911360504;
    tmp_tmp_msg_0_2.z = 0.5871539561980046;
    tmp_tmp_msg_0_2.n = 0.6557877643372788;
    tmp_tmp_msg_0_2.e = 0.6869971940893207;
    tmp_tmp_msg_0_2.d = 0.39772385386880726;
    tmp_tmp_msg_0_2.phi = 0.7103666449750026;
    tmp_tmp_msg_0_2.theta = 0.9926598330684223;
    tmp_tmp_msg_0_2.psi = 0.8141612454337592;
    tmp_tmp_msg_0_2.accuracy = 0.4326542884492751;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::StorageUsage tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.available = 4058209787U;
    tmp_tmp_msg_0_3.value = 29U;
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
    msg.setTimeStamp(0.46965777905924533);
    msg.setSource(8580U);
    msg.setSourceEntity(10U);
    msg.setDestination(51964U);
    msg.setDestinationEntity(20U);
    msg.command = 236U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NXLKZSDSLWFWSBRTVYPURQKAMFSXYNKRDLHNFPVQGOKQFLKBHWNEEWHRUJTOHWZAHFEQZRKESVBLHVPJPMGNAFMYQYDYGCJZRWJETZNGEZJZFKNEIJCHOIMWOGMMIIDCEGLLBPKULADBTRIXXJQBMUX");
    tmp_msg_0.description.assign("GYTCBQAGJCFRSZWUPMKUBTLTNYFXFOCCFVNSHQBHAZIBOIXKEMPCKLRREARRRHEHUEKMSYIGGPNYBDZWYOWGYXPMKWXAVMPONDHBJFPGLNFTAWAPGCXJKBSADPRHTVJQEKBPURNGTTWECVRMLXK");
    tmp_msg_0.vnamespace.assign("AOJDHMMIWDCVWPCJMGELWRQPGWAHOSWGFJSAXDUEXMRHQHYRXRGWQQKIPFTRETBQLPCSAZATHUDINMDZIKQSOKVPZUKKREUUCXLGYCEYOZVFZZAYGUBRYUNRRTWLI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OKIFWCOMQDPIPJSLTZSVCVKYNYLFZJZBHFCPQRKRALCSVSZIDVMJUPQEJMSXTBYAEQLGIOZJOPOITTYEJGAFLRAQRDYBNXQDAWTSWJRMXYDJYRBBAHNQGHS");
    tmp_tmp_msg_0_0.value.assign("TMVYUEWMLQVQIZDDZMYJBKWBVJPPNRRWSXGEEWHOPEIWNECVLSKXYNOVLBUFBWCRDCCGQJJJLOFUHVHOKGLLSDYPISHBSIUAEFTTEZSZAPKMZROUAANTQMPVMAZOLPALECKJFHLCWVKXJTOYZFGBIDARXACNBKOYWYDUMNXQBWQLICHQNPDEIMH");
    tmp_tmp_msg_0_0.type = 87U;
    tmp_tmp_msg_0_0.access = 6U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IOBCDASPULTCDQUVCOLNKZUBPGMFWADIJYEGVAFVPA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LYNDXQLVSQDKAHOGSUYCOWSEUJPBUTNALDRTISAGUXOCGFH");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 62572U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("SYTLNQRLNVESDEDQLEBNGAXFFMQRZICIDCSPTTMHPUXCETMDNPDVCVJF");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KVIGRFAWXSEHMMYIAFSMJPDSCRQBAXKHEIVWTFOZOVLHUQEJKSVTOCXSOL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VSWR tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.6542417611955397;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.plan_id.assign("GEONXXZDLQDRIVOFASNSPVRLKWWRRFGANUDHBQPVLJAIPYPTQBSJVDKOCANONWESGHICDMZMHDGPJXEGZMHEUSACOUYWTNDZLZRYIMMEUEBYLKGBTOEBDRDABOITISBPQWUWPRISZFKCSJXVLFJWMHQBGLMJLRVJKMCJYXYCKELJYHKFCZICPMGUSSBZOHJVDTOIHQEOZTHXERWPVPTQNNMWXAUYTFYXFAQLQGWKXTKTGFNUUC");
    tmp_tmp_tmp_msg_0_1_2.plan_size = 40098U;
    tmp_tmp_tmp_msg_0_1_2.change_time = 0.38204307474784693;
    tmp_tmp_tmp_msg_0_1_2.change_sid = 32842U;
    tmp_tmp_tmp_msg_0_1_2.change_sname.assign("PUFZMJDBCAKTAGYMQXGURTOROULKAFQTSJYJZKCHKRTCIARDFMXJFIYPFVQBHUDIDVOXZUPWWYNSWGRRDZOQCXHEGCLIPEBDGTJGXPSNANIHBTLZKTKSFAXEWJSQDPVYILMTGHVRDNRJJIHKQCSOBODUMDCHRXOATFMXGPEBBJEVAYAEOZUEOEAVKYNFXSE");
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {-75, -70, 0, 64, 72, -82, -41, 13, -26, -44, 30, -84, 57, -100, -10, 27, 89, -117, -122, 118, -36, -37, 18, 2, 99, 48, -12, 51, 56, 22, -106, 69, -21, -96, -72, -61, -71, 89, -46, -128, 1, 10, -6, 23, -97, -63, 64, 120, -4, -96, -69, -47, -94, 83, 58, -47, 100, 49, 109, 44, 108, -99, -68, -65, 30, 79, -89, 53, -8, 104, -123, -56, 41, 0, 114, 43, -54, -10, -108, -117, 117, 48, -1, -128, -84, 107, 102, 71, 113, 46, -18, 102, -68, 54, 118, 121, -102, 119, -123, 124, 24, 92, -120, 4, -54, -47, -105, 51, -14, 87, -67, 122, -60, 105, -80, 45, 66, 57, 90, -50, -40, -128, -56, -36, -29, 12, -7, 39, -120, 118, 115, -59, -11, -95, 69, 25, -55};
    tmp_tmp_tmp_msg_0_1_2.md5.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::ProfileSample tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.depth = 20161U;
    tmp_tmp_msg_0_2.avg = 0.5472073019485112;
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
    msg.setTimeStamp(0.2505166686952357);
    msg.setSource(45083U);
    msg.setSourceEntity(232U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(17U);
    msg.command = 109U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NEWNQKDBYVROTZGHVODDBBFIPYXUVBTUCFAZQUWARDBXWUCCQJFVWORMJITTMDYLLLQKYGGIJEPJNVRPEPTLWTGNEIGLCMHK");
    tmp_msg_0.description.assign("HVVZWONEYSEYYEZCKGQUOKSHHQBLQMQHKGTGAKSOZEZTVXPMPNMQLGFUIDJNTNDUAZHVWZVRJMJILGKWGDSCMWOTRPNBXKPILACDRSNFICXXUSDEARERUFERNYJLWVJMMPB");
    tmp_msg_0.vnamespace.assign("JSYMXQFERTRIHKXZAKZMIUSSYLKGLMNYONQEAHDRQZYNRVXQKTVMTFGSLHUAFBEJXBOBIXOZMNHAOAQXRGDYGPCGEYIWZPVPQFYCSAEMULCTZRKOJLRHNMUWXQTWRCDGBTLILCZALJXIOBGPBHDWPGGNCATDLYNWNUEZUUVVVEQJFXACTKNPJYDRFXWHQQEWBTMMRHBFTVVSPJIOEPFCWDV");
    tmp_msg_0.start_man_id.assign("VJZRZGXJRDIHMKUCYOTDZFEQMQYDYIXZTRWQCAGUHWSAFPBHPCAZSGUXNGDWNKFSBDGVCKQUZSXXCRSETENQYTCACAPYIKHVPZALEIRFOIJDMQGLFMNEXHNZNAUNZVFOVPKLTGNOLHXLSFUMFAYKLYWLJPEJGAYFDOXQMCKWMJBBHUQRINTCHLPCXUYEWWDBWBIXGWETIVVVHQWSUAOPOJPKZMTLYROPBMB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LDIBUTKSSUSLXFTQOZLLQSNCCOIMCFHAYPRUSJEMKBUVJYOIHGHHRMORECTPQT");
    tmp_tmp_msg_0_0.dest_man.assign("YOSKQAGARWLJKPPCINKIBLCTJJRVRCQRDKULXPFHKAUBAEVTSWYJXWGLHUYSISGJPIWZSUYEBSANIPUMLWDDVELUZUQRIDQVXZTLCRFVPNGVLGHVZXKCHMMJWBRKP");
    tmp_tmp_msg_0_0.conditions.assign("TICSGQINLFWCXSKEPPOSKHOVYRBPOSEBJMKSWYLBWKXJUWDSRBJACTUWWGDJLWCROLRLDVJAPRSHPTXMFIQQVUMNJKHMBYHUYMWVYGUDKYDZVOQIUXKEAOD");
    IMC::SimAcousticMessage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9818653835577742;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.17438791390132768;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.8852978782467592;
    tmp_tmp_tmp_msg_0_0_0.sentence.assign("LLRYAIUQVNBTROOZTPYHAQMZKXQPENVDDCTWJXPMKNWOVLCIKLFTYPMLUEXNOFICBDHHJOQVFSTGZHVXCEWCSUHRHXOTYXRURAYQBZUVFMQDBWIEKEBSNNANZICPWGXEGJJGTBWMEUAFOCAFNLCMTECZ");
    tmp_tmp_tmp_msg_0_0_0.txtime = 0.6234727795191134;
    tmp_tmp_tmp_msg_0_0_0.modem_type.assign("WJRMYCOFJVARMQZHQRVEORCXPRZUIGPBTJONJGRXZAQSHAGSYCFPYJGTVKYK");
    tmp_tmp_tmp_msg_0_0_0.sys_src.assign("DMJPIFQKECMIPXVENBQMOSAPEIGZJILVLSFUQWTCCPCMRLUABWJJWTDBNVURFNNQCUZJBLRHOKQMCDPOFJQMGKDVAXXISTZWPEVCGVKOYNVTUWKEHOZMQQNMXPRFENUDZEGBJSITOEORPFLBTKZYDJSDUNBPGAEZNWZEGQUHXTHVULMLZAFSCKOOVVUFIKIHH");
    tmp_tmp_tmp_msg_0_0_0.seq = 56083U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("TXPCKMVFLWVMCKEWOIRJJGZGPHLNOPSKBXEETQOHITNGPRFVGHJKLZWHJUNERTPSQYKNARQTZIXMSUZAXKQHSXTMCBXZHRELCMDCUYHDUAABSVBBIOLDEJSNZLQDNOOAHQPNBIPFSMDGGZQEVKUEYOAFDLVTRSGFWTXUWWANYWYAAFJCYSGHFB");
    tmp_tmp_tmp_msg_0_0_0.flags = 160U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {77, -89, 55, 40, 97, -76, -92, 33, -35, -54, -77, 84, 31, 3, 0, 82, 114, -69, -55, -57, -100, -21, 30, 121, 111, -14, 100, -98, 18, 3, -40, -4, -17, -121, -39, 60, -32, 73, 105, -5, 26, 65, -69, 41, -71, 65, -125, -103, -26, 104, -57, 106, 71, -118, -77, -82, -69, 12, -115, -112, -34, -85, 20, -32, 51, 79, 87, 49, 73, 25, 9, 29, -17, -93, -89, 28, 17, -54, 27, 45, -85, -114, 123, -42, 97, 123, -26, -110, 87, -87, 8, -111, -2, 106, 2};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::LblRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 216U;
    tmp_tmp_msg_0_1.range = 0.3980038463689686;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SynchTask tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.task_id = 34814U;
    tmp_tmp_msg_0_2.feature_id = 33529U;
    tmp_tmp_msg_0_2.time_window = 28669U;
    tmp_tmp_msg_0_2.deadline = 0.6501301834415715;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.5465213781947348);
    msg.setSource(6313U);
    msg.setSourceEntity(111U);
    msg.setDestination(61330U);
    msg.setDestinationEntity(247U);
    msg.state = 124U;
    msg.plan_id.assign("QXHNHWYOPGRAPDDIJBXGNPMKSKVGGJPBEBEFVDKIOFHERIMELCGK");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.9207019406030468);
    msg.setSource(6830U);
    msg.setSourceEntity(85U);
    msg.setDestination(56503U);
    msg.setDestinationEntity(169U);
    msg.state = 76U;
    msg.plan_id.assign("FMLVAUBWJLYQANJDJFZGZADLHTLOVCKIDRCUXPQGZMTXWXJAHFNAHSSWVPIEPXHAEYEQEBVPDTVQVLQCAQOQOFJNDMOUGZHBFPIWLMEATKYRKD");
    msg.comm_level = 131U;

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
    msg.setTimeStamp(0.7834666554333816);
    msg.setSource(50561U);
    msg.setSourceEntity(59U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(32U);
    msg.state = 202U;
    msg.plan_id.assign("IFTREVEAQHULWIWFSLIXAPWVUCNHJIUCVNFADHZTFPJWGHRIBSLGZTLEBPFODBESJQMRLSNAGPUKBMZXWWZRKEXWJJDNNCBDTOGNYGMYTADKEPCCZSWLSOTBPAFQNYYZHYPZSADPCLXPXHDMRDNQEWOZKHCOIUVGHFARJHOGKBJXZQUMMOCIOGVFOVRB");
    msg.comm_level = 60U;

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
    msg.setTimeStamp(0.592520246882371);
    msg.setSource(21287U);
    msg.setSourceEntity(14U);
    msg.setDestination(64127U);
    msg.setDestinationEntity(104U);
    msg.type = 121U;
    msg.op = 43U;
    msg.request_id = 44355U;
    msg.plan_id.assign("SBPELHKZTQMITAYNUGIHVVBAQASRXMLERCUULSAOSBDVPGFFHWCLAMZXHCBHVDWUXTMZAKHDVILUCWMJTQOMGBMIKMGPNKOOKLLRXQORIOZWHZYNDHYVPEAFPTQCTGJGMWENPWDRCRBNDUIEENZGKAJTMFXFUBFSNPVWILOSIJYYSBECZ");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 41U;
    tmp_msg_0.mode.assign("CPABIRDAOYEEMNAFAXJWACEKSKVVQELKNPIFDUBXWSGCYEHREPOXOXQVPTVDJKOBGAQDCKHMQJTSJAZXDJWTTDRGEXVHXQYLLZOUXZBSYLFELZRICOUPRWHIAHUFJGHDZNMNGUSHNIPNYUQWOYPGFEHTWHLMBLTYTJUZGICMSNIJBRBVSUCIQWQPNBBGVRZMORWXXTZDKWUCJTKDACUODIMOPJKQFRVYVYFHLYLFEZFFBAISSZWSVLRGTCK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GFCCNNZFNLNLIKIWQCYIEFZVRESLQTBWQKFSOISPEELZHJDKGQKLMGZXAZDYANOHXBOKTT");

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
    msg.setTimeStamp(0.5495013756657673);
    msg.setSource(61093U);
    msg.setSourceEntity(57U);
    msg.setDestination(47085U);
    msg.setDestinationEntity(115U);
    msg.type = 201U;
    msg.op = 31U;
    msg.request_id = 9848U;
    msg.plan_id.assign("VSQBLRYRSIDIYACAEIUWTZSZDJRNJZXUUVKBZFWHRTMGBQCYMKWOALOBNCEPSKPUUJMTDJDNHMNDPACLFZDVNABRGONQUBPEJYREOFKYYUJXGHDWYGAQBXTBHZXCKOAOJSISFFIOFKPEXMGLLVCSSGPHJLXREWKFLHOBMTVKIXEQ");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.005002784458369214;
    tmp_msg_0.roll = 60965U;
    tmp_msg_0.pitch = 18941U;
    tmp_msg_0.yaw = 41572U;
    tmp_msg_0.speed = 11994;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AEXKVJTRPUVEDVLUNBYJXDXAZHQROKETFPDUHJEOHYTGI");

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
    msg.setTimeStamp(0.04953012760883302);
    msg.setSource(62815U);
    msg.setSourceEntity(35U);
    msg.setDestination(41839U);
    msg.setDestinationEntity(114U);
    msg.type = 57U;
    msg.op = 251U;
    msg.request_id = 28690U;
    msg.plan_id.assign("KAYGQJLGHXSDAHTGURMMRXZCAENUNCGWKEJZYSUTKTPY");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 233U;
    tmp_msg_0.error.assign("CVOALIWZUNXHOEVKWXFTYPPXOPSCAENQNTICYQGZGNXLVAMQYZWDHBAHMHFNUINNTSGNFIVGEKNRSDMCRSOHJLSFGFYMUIEEKTGFAUBCOGSYUELKRJRLZHPDGBBZRLXIZYWZFVERLWCRJHVRJBCQVLSXUGJGJDKYOWZDEPOFDQQELCNBBDZJOQTMFSWAQZPCHIAMXTOAUMHVBPYOLE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXFPDJITAEGUJOGZRTYOBEWZUHRWWSGBPAUAZNOIBHNIKDJUIKXSGBQFTRIUYMMBSYAQSYPJMJSKENYELWLJVQRPOEHAVVALCTNXDQZXJLKGLBDQQFDVNIXXNAZSZI");

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
    msg.setTimeStamp(0.03470730992201998);
    msg.setSource(61183U);
    msg.setSourceEntity(251U);
    msg.setDestination(39791U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 57493U;
    msg.plan_size = 1215100998U;
    msg.change_time = 0.6475551732599919;
    msg.change_sid = 59107U;
    msg.change_sname.assign("RUOLPIQSPABWJULAKGKDQLRSEMELAXIIWGVXIBCDQTVHQPURJCSNOLZHGAEWWKUGTIGYMCNDKELCPMGMMIXXWUSXONURUVZEQLEDWFUZQYDASNQOVSORVVANLKKGTOOZBSHZFKJYRMYFECQFIYYWZTINOSFFZHBDBKAWIFVNZMUGJTTYSTPTGVMHBJELHEMPPJXPHBUCWEWXXVYJKANTHD");
    const char tmp_msg_0[] = {108, -111, 124, 112, 69, 62, -96, 23, 20, -106, 23, -9, -70, 48, -26, -91, 85, -67, -63, -64, 47, -83, -18, -6, 115, 109, 21, 100, -93, 12, 115, -18, 48, -79, -26, 109, 40, -25, -35, 37, -4, -50, -26, 81, 123, -119, 54, 48, 22, 34, -58, 10, -57, 34, 50, 110, 30, 52, -9, 8, -44, 86, 70, -10, 97, -23, -47, 107, 114, -93, 119, -38, -81, 121, -29, -113, -32, 102, -44, 113, -34, -54, -103, -7, 71, 23, 12, -123, -63, -123, 93, -6, -67, 33, -80, 109, 26, 63};
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
    msg.setTimeStamp(0.8072230622388088);
    msg.setSource(18644U);
    msg.setSourceEntity(73U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 59681U;
    msg.plan_size = 4108246447U;
    msg.change_time = 0.8241521907167446;
    msg.change_sid = 60434U;
    msg.change_sname.assign("LLDGNXJHBIPVYBFOOJNHECAP");
    const char tmp_msg_0[] = {-61, -61, -50, -103, -22, -120, 125, 97, -98, -51, 31, -38, 56, 13, 42, 12, 17, 78, 84, 20, -23, 122, 76, 81, 35, 63, -71, -90, 32, 79, -127, -99, -99, -31, -109, -36, 1, -69, 63, 59, 75, 52, 2, 52, -34, 37, -70, 26, 69, -54, -70, -88, 85, 13, -63, -24, -107, 113, -44, -66, 62, 20, 98, 27, -11, 31, 69, 49, -123, -102, 122, 9, 113, 36, -9, -67, 113, 33, -25, 58, 5, -30, -69, 63, 87, -70, -25, 25, 59, -119, 26, -38, -99, -116, -53, -103, -13};
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
    msg.setTimeStamp(0.7366959380918838);
    msg.setSource(61547U);
    msg.setSourceEntity(76U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(210U);
    msg.plan_count = 54092U;
    msg.plan_size = 2987118554U;
    msg.change_time = 0.2618510163296651;
    msg.change_sid = 52797U;
    msg.change_sname.assign("LBNFGABEIQJUTROHHLHTGMPV");
    const char tmp_msg_0[] = {40, 15, -37, -96, 82, -58, 81, 66, 23, 85, -68, 2, 29, -20, 90, 52, -128, -8, 26, 74, -79, 39, -26, -49, 18, 75, 30, 122, -10, -90, 67, -19, -102, 46, 62, 109, -89, -122, -69, -27, 67, -70, 39, 120, -101, -14, -27, 120, 126, 46, -103, 97, -51, 20, -34, -123, 5, -6, 69, -93, 123, -69, 124, -34, -32, -9, 97, 19, -69, 106, 26, 48, -113, 63, 101, -46, -4, -35, 39, 31, -71, -127, 103, -100, -76, 0, -68, 40, -105, -13, 96, 98, -20, 3, -109, 9, -84, 86, 79, -104, -28, -37, -15, 59, -44, -12, 19, -11, 66, 87, -112, 110, -29, 81, -28, -63, 115, -81, 120, 45, -28, -126, -100, 83, 43, 57, -114, -113, -28, -119, 21, -2, 55, -70, -3, 111, 126, 120, -26, -101, 62, -45, 111, 113, -120, -92, 1, 74, -116, -65, -67, -116, -48, 82, 108, 111, 122, -67, -87, -2, 70, -26, -53, -24, -103, 58, 78, 40, -8, -59, 9, 59, -66, 118, 58, -46, -12, -65, 57, 113, -110, 71, -84, 70, -13, -114, -42, -110, -74, 58, 25, 12, 22, 15, -59, -28, -81, -66, 92, 78, 102, -86, -86, 65, -37, 24, 103, 67, -13, -6, 98, 49, -121, 39, 47, 35, -96, -83, 7, -9, -28, 57, 96, -105, -60, -2, 2, 75, -91, 67, 62, -36, 116, 38, -83, 83, 82, -58, -108};
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
    msg.setTimeStamp(0.6501601958603388);
    msg.setSource(50614U);
    msg.setSourceEntity(71U);
    msg.setDestination(43871U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("AYQNLFJWMKMRIETVLSTXHRSNONICIUQRLQCEPWYDTMMEEDOPVESJQBUTPJYTHWZTCVIAOUPAYNYLUKDKBSBKMZLOZPEFUANFRGOXJUECAHWXGSRDGNYOCAFOQJMQHZICZKBFDLNHRJPJPLGWWVGHDEXHFYWDUZGAJCMCVTVYJKN");
    msg.plan_size = 8535U;
    msg.change_time = 0.4827066145329242;
    msg.change_sid = 26333U;
    msg.change_sname.assign("LACMTWCXYXYLRNSQKCJRLWWKWSIRJNZFCLBDDAHEHLGOELOTTIWJZJADEDMOFVKVZVJVCHMKVIXNJY");
    const char tmp_msg_0[] = {-55, -113, -24, 39, 28, -55, -124, 47, 8, -61, -54, 126, -114, -1, 36, 80, 56, -95, 121, 119, 122, -82, 42, 101, 93, 1, -15, 125, 117, -12, -60, -21, 115, -57, 68, 0, -89, -67, 23, 95, 91, 95, 37, -124, 35, -67, 36, -32, 60, -53, -72, -5, 25, -102, -114, 13, 49, -115, -113, 64, -64, 12, 94, 115, -8, 67, 16, -126, -54, 59, -59, -13, -90, -14, 96, -78, -72, 103, -43, -27, -50, -115, -33, 81, 36, 48, 26, 38, -91, -122, -64, -8, -116, 111, 81, -29, 32, -43, 5, -91, 61, -118, -38, -114, 54, -19, -65, -44, -2, 32, -40, 12, 8, -117, -99, 90, 100, -50, -97, 37, 59, -122, 5, 120, 89, -21, -128, -3, -71, -39, -11, -110, -3, -88, 111, -76, -4, 46, -41, -64, 100, -85, -47, 113, -14, -27, 106, -86, -6, 49, 94, 4, -6, 45, 114, 25, 102, -101, -115, 64, 6, -124, -29, -55, -3, 88, -87, -79, 102, -124, -24, 22, -78, 12, 32, 69, -13, -36, -20, -47, -73, 83, 21, -78, -57, -88, 32, -97, -44, -101, -78, -44, 63, 60, -39, 121, -93, -37, -87, 87, -74, 93, 65, 20, 56, -97, 41, 120, 21, -33, 94, 61, 80, -32, -127, 18, -117, -76, 16, 20, 8, -11, -50, -7, 81, 17, 33, 10, 32, -125, -30, 80, 48, 31};
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
    msg.setTimeStamp(0.568270773841331);
    msg.setSource(38425U);
    msg.setSourceEntity(242U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("XRSSYSLLCIMCJINGOMUWHYAGISJGPGAAGCWUORULQAREMOMYPRULHKSHQJNFIZPLVRZEGZPNYTYGOJELIDKKLJMTHYPIOOTCCEROZNZBBMRCVVYWEETFCVTKRWPJXKBUUFDLHVWJXGPDNBZZKWNTFDULVQFYMIFKXPQCRMTXHGWVYAIZJRAWMOUBZLSMFEXBFAOQFHSDBQJAVQDXNTISVJKQTBNDHSVIBQFEXOHDDPU");
    msg.plan_size = 33211U;
    msg.change_time = 0.48769224782968024;
    msg.change_sid = 12640U;
    msg.change_sname.assign("VBPWCHLGXGDGGATPZQEXXSLFBZWEFKFHYRUPAAHICCZFRJEDOMCKPRJGYFDOOWBXITBISMDYLAVX");
    const char tmp_msg_0[] = {33, -118, 19, 61, -66, -84, -49, 50, 104, -44, 112, -58, -43, 67, 95, -27, -118, 116, 103, 77, -52, 4, -122, -127, 108, 73, 94, 40, -74, -85, -14, 23, -74};
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
    msg.setTimeStamp(0.004498091297943652);
    msg.setSource(46256U);
    msg.setSourceEntity(207U);
    msg.setDestination(46049U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("JKTBBORKKKRCNZAGLHVZHSFELRCVESOSMTXXLNMVKYGTZDRRPVJHBYLJECGZNGWSAMSTMRAUBZSPKEBBCDXGFQFSDACIJVGUTEZAHTBUONNLOEUXCKDTWFXXHFCFYQWXSQOYGNOMDHHGGXVLZTUIIETJIDSYURWQINAZGVEBYPJDACAQBUMLPRU");
    msg.plan_size = 15384U;
    msg.change_time = 0.5705971719583267;
    msg.change_sid = 14655U;
    msg.change_sname.assign("HNJMEPRQKUCSLVZXDSBSKZTCXHJMTXUAJEHNUEKQJTBQIYPWWFDNOPPVMPMIIXUHNSELR");
    const char tmp_msg_0[] = {-11, 26, -93, 0, -89, -8, 108, -37, 82, 115, -8, -44, -25, -58, -20, -54, -96, 58, 2, -67, 86, -3, 122, -4, -8, 47, -68, -40, -93, -105, 111, -11, -68, 103, 114, 15, 94, 43, -72, 53, -43, -29, -38, 78, 114, 48, 58, 87, 73, 65, 48, 43, 29, 30, 111, 124, 118, 39, 15, 21, -22, 96, -58, -57, -110, -12, 89, 40, 123, 38, 118, 57, -121, -46, -86, 81, -29, -59, -48, -114, 114, -106, -26, -81, -113, 16, 37, -28, -21, -47, -34, -89, 43, 16, 63, -14, -111, -33, 36, 4, 113, -124, -96, -24, -72, 1, -114, 107, 97, -124, -112, -69, 14, 77, 27, 110, 18, 77, 22, 76, -91, 21, 39, -122, -56, -120, -73, -37, -102, 98, 22, 28, 58, 6, -16, -38, -100, 78, -101, -68, -61, -24, 95, 37, 27, 72, 46, -105, 19, -126, 22, 8, -72, 47, -121, -13, -107};
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
    msg.setTimeStamp(0.6327704464601887);
    msg.setSource(50431U);
    msg.setSourceEntity(217U);
    msg.setDestination(43131U);
    msg.setDestinationEntity(218U);
    msg.type = 106U;
    msg.op = 253U;
    msg.request_id = 33401U;
    msg.plan_id.assign("GAQFHNEYULNXJUZSCJTYKCMNJDJCNFUKRPELHRIKXFLSCSDATSWNOPEUTJKDLIVXLTYSHQXBNDJNOCGQBHNLWEZVAGDYXXAWXRQBYCGSGUVZAJOYZRQMQIDCTTMWDWRFZWMIDXVTRQPHRGEKRBIENZVZAXORWQQKCPLBETKEBUPBDAVLSMYFGOIAUKJVQCIOEZGSJNBFOHHDWHIVJPFWMUGYTAFTSKUPL");
    msg.flags = 54257U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.8892053497099353;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OMBKTAVPDRSIXXKDUPKBEKHPOCAKNQSVBMPMBJIPKCXGLEJIEYCWDEMXWMZFUGEGBRBQUQSEWFDAGHIHYUNZGLHJOZ");

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
    msg.setTimeStamp(0.4715972272025535);
    msg.setSource(32623U);
    msg.setSourceEntity(93U);
    msg.setDestination(12538U);
    msg.setDestinationEntity(121U);
    msg.type = 206U;
    msg.op = 253U;
    msg.request_id = 59947U;
    msg.plan_id.assign("DIHCIVFCYNQZRNWURZPLJEXVANJVTUUMDCBDIWFNKMSQMTVYBRJOTHIDKWGYSOXMQSGBSBFBGJCTXHTOTEKFXYLCJHOUXNQFPQXROPZHWYYOALWEGNAEENDSGSKQFNDJIOTTWEPACXUXMAXHVHJGGKCXUZARVWSSPRIFVBHIMAYAYYIOFZDQWSHVLVLUMKZIJPRBBPVLMZSDPYLCHOCAPNGWGLKEAIETFK");
    msg.flags = 36902U;
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.19538406751496007;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDFJLFHQBLNGNYP");

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
    msg.setTimeStamp(0.48573468909542505);
    msg.setSource(25425U);
    msg.setSourceEntity(58U);
    msg.setDestination(18125U);
    msg.setDestinationEntity(40U);
    msg.type = 69U;
    msg.op = 51U;
    msg.request_id = 11646U;
    msg.plan_id.assign("XYFIQNEMGMHDRUYSJICVGGBUUXDUSYIOFKPUCTQZACFYKEBZOPZKSDTYAUXTPXPDFSDZGRDCEEKECSQXHSPGLFAHAQLUWMBPJOXVKFJTHANIMNJPXDDBYLHQAMKVCPLHWVRFAXCJUNNIKSMWYIABNB");
    msg.flags = 39411U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.16229066507058176;
    tmp_msg_0.lon = 0.9064113558251254;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WAVTJETOJDCAXCXORSYKNUGSXRUVOYNSXWGBDBVJSGTUKJSVTLHFGMTAWBKISEEXPPNJOFZZJQLLCPQUIBRMFKCQOTGGGLCHIX");

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
    msg.setTimeStamp(0.8183253760228989);
    msg.setSource(25042U);
    msg.setSourceEntity(128U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(76U);
    msg.state = 215U;
    msg.plan_id.assign("GKWWIUGFWUDVUNYOCRSWTBPKUQHPUFVNOBDDEAHUIHMEJOSLKKYRSGKAUTDJCBYQEPWJXVOTYOQIAC");
    msg.plan_eta = 218203143;
    msg.plan_progress = 0.8773632570970723;
    msg.man_id.assign("DSOILQYCQABQAYKHZBKQAFRVEPLIBGMUHMUBFRSOAAFCXGU");
    msg.man_type = 8995U;
    msg.man_eta = -434925430;
    msg.last_outcome = 115U;

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
    msg.setTimeStamp(0.9257931959189333);
    msg.setSource(12280U);
    msg.setSourceEntity(15U);
    msg.setDestination(18462U);
    msg.setDestinationEntity(230U);
    msg.state = 56U;
    msg.plan_id.assign("NYCBBGICVPXKQLYWFKJITVQWYWUNZJEPJVURWWFMUDTFTQAETYMVVJWBJIOYRZMHZSQEUJAQTHRTMMEMAGSHNCTWIGASMVZYQHKOGMHAUFEXSCRETVOBDUKPIHKIXDLPZDHNKCNCBCUAXRJSICXHOWAABWNJEOZVQDVTLLZRBVDIXLOYRD");
    msg.plan_eta = -1426639230;
    msg.plan_progress = 0.6623497545657779;
    msg.man_id.assign("DDTEZBHXWYBQWPMDYBMZXBGBQUKFMQRSJKSMVJVRAZDTZRJVOJEACROXNKTDENSTDQWZTCDUGVOAAKVCUZFVUVUBIBGHPONSOYXKWENOABYRZVFMHTFWLUXSLIBQNTVMJIROYOPRLFHMUQKJHPMCLGGCJSZYVPSAKIAEPKNLHHYFPICJYWICFNUFWJYEQIIQBXCIUNCSLEHOWDPDTWEHLXTJAEQARMGOZNUPQSYZKAMGDPXIFL");
    msg.man_type = 50033U;
    msg.man_eta = 1687144610;
    msg.last_outcome = 86U;

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
    msg.setTimeStamp(0.567793587255135);
    msg.setSource(17385U);
    msg.setSourceEntity(126U);
    msg.setDestination(44474U);
    msg.setDestinationEntity(46U);
    msg.state = 46U;
    msg.plan_id.assign("GTOIKJNQVYALMUFNYEMHTYDWSVBNJHLNAXMXEGJRKMPYLRKAEZCVEUQBZEOKQBIVXBGFNCPCACQECFHDDWJGJWJHWDJTKMAVVBPZMNYCDLHIGXTPOGPGAWYOKJYHSH");
    msg.plan_eta = -353252261;
    msg.plan_progress = 0.6309760743786692;
    msg.man_id.assign("YWATRNNVUBORLBVSLUOYPWDEHTPRXJNDZDKBVKSNYKIYLSHQKPYFHLZIPHQVSXSWOSSARIAOBVBMIOWVVREWZABIVCTKMLIDCYOJGGWWTALJSDQQKFSFXFEGXPKMUNKCHBFCXGTWBVOYYIFZYTOULBNWANUSCCPJHGQXRMTEZLQQMMTUGRTE");
    msg.man_type = 34621U;
    msg.man_eta = 1161840406;
    msg.last_outcome = 47U;

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
    msg.setTimeStamp(0.3530561651704084);
    msg.setSource(23964U);
    msg.setSourceEntity(131U);
    msg.setDestination(13113U);
    msg.setDestinationEntity(39U);
    msg.name.assign("KVFHQSJJTOSRILZZAVBDTYHRSERCYNSWHKCNXMMXUCABRKXTZIGKGONOGWIKLRUUQVNGERUWAOEPKQOTLQKFDNEHOLFYXLBQESGQUTDPYBATTPCQMPDVYZDMEJRLOOGTYFSEQCHHJBSZNPFZIGHGCXFYWMB");
    msg.value.assign("DZSGRAHJGPXMKFYHHXHUDQCPRURVAORJPEFYTKSEVVUDZTMLWIIDCOVXLEHBNUWDIFYHQFMUSJDGRLAFITSBIAYECADXUQEWPVNLNIFNZGJFVQMYRPFZMKEPNXBZVWHLVOZJWLEQQAUGCRURDTLJEZWBXNTQTGMSSIYIKCJWXCTKBGLVKBNGLYQECOJJHHKFAMGRQHACSOPOYANZWZOGCQTAZRTWUBBEWPNLIOJIBKN");
    msg.type = 85U;
    msg.access = 254U;

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
    msg.setTimeStamp(0.4536805415829901);
    msg.setSource(56623U);
    msg.setSourceEntity(50U);
    msg.setDestination(19779U);
    msg.setDestinationEntity(84U);
    msg.name.assign("HMDIJGZCLNDTODVNQEWISANQZTWKZIKCLKLDPHVPVUOHWLMEAYPMCMPOWEZRCUVBBSAJAMOAKFGARNESJSSBOIDJKFITLWEMRRFGRLUEZKQGUIDOXXHNNGFTAWNZYPYPIMGSTOWQEKYGEATZFGTUHCJKPQIFCDSYPGUJUUZYRQWBBLREFRGQSCXPHLFCXNOTYXBYBVUXLPVSZKXCIQTVEUHQMLDIWWNSBRFTACNDZQVMXH");
    msg.value.assign("PJAVOQJBSEYRWATGKWTNQZAWWBWGUCCTJSYPONWSBTGEAFPVUYEFXRINTHRJLCDANYTMLJYHRZXYPHKLVLZVVHBJUOBQSFWBMKHRSYFPNVIYEWHDUOLLXDKZGMXMPQQLCLIACEDGSXIGZTOPDBUXHVNNYKUXDMJKNSTSQXEPLUHZVRRFIWIGT");
    msg.type = 124U;
    msg.access = 172U;

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
    msg.setTimeStamp(0.09333686937639374);
    msg.setSource(44366U);
    msg.setSourceEntity(159U);
    msg.setDestination(25840U);
    msg.setDestinationEntity(32U);
    msg.name.assign("SSRAXUDCSHQDKMVYRWJCEIADOZRBUTBLIGVXZXVMRJWMPVAURULOJBDGGNXGSBBMRKTLEVLFKCEJOOGRRBIEAXFEQNIJBHGZXPOWFQCUVBWZFNJQDLQHLPFHAGYZIQFPLBPJPCCZUQAVXDVLENHZXEGICVDIITYSWPBOTVWQGSQOSRUOYKPADTQ");
    msg.value.assign("IIWCILATQGNRQEJMQUKYAESFZ");
    msg.type = 175U;
    msg.access = 122U;

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
    msg.setTimeStamp(0.13815655111590364);
    msg.setSource(34450U);
    msg.setSourceEntity(140U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(252U);
    msg.cmd = 241U;
    msg.op = 77U;
    msg.plan_id.assign("MMYFCLVUGCCVQWCLIVMRLQHRXZWZSRTCYSHFBIJDUTMEGVPBDMLXYIYFLKJTSQAKKFBHDTNWMKVPQTTMRQEIIJUQIIDOSULBLZOACZYPBAEXWXJJXOWCOWPNBYAWPUFCOZRXRDZPKIKVRXRWNVFTGKGVHJKQCNYWPBENSAJPSJVHCOXHAEFIHNHVXAUBQNGGSTIBUOHUGZZTAEEGPDMLHYUSGKTALSOFLRF");
    msg.params.assign("QEZPINFLZCCSBFCGYKALWSJVAIJRENZMUWSVGXBTKXENYSJFDUXVGMOVALAKUZAODHZTTFCQAQRZJPAVBKBGODWDCJPRRMZNKIQEMRTEWDHCTMYVDZTQHNAEKOSVPFHCJCIPOQTBDSYWWPPDUPPKOBWTHSKHHXUVTONKRBMLBAXWPLFQNROHBZBYDNMXQIIUEIMJRFMQDXXHYLLTIXHNVEUJKGMRQYFFYGOEECIXUGJU");

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
    msg.setTimeStamp(0.22409743683811978);
    msg.setSource(57063U);
    msg.setSourceEntity(21U);
    msg.setDestination(18649U);
    msg.setDestinationEntity(51U);
    msg.cmd = 61U;
    msg.op = 144U;
    msg.plan_id.assign("DOYURWYHUWEBZESLDNLOMIKUZJPYHWZSMGPNQBRHPBIFQAEXFCZUSEOLMAKQDNLLMFSASUIZSXHFYXTHCXOGHSTWBFPVKXMKJNBRWXOJONQIMVSKCFAEJJONDVERVAZFUAMVJQPGDXENWVDRGCQJTRKMZPLTIQFDRBSPUGHHFTBXQQRXUAKCTYZMTCPKUGPDIAWOERIAHYCYGLTNJYBIENGWKIILAYDSPBLJKUJ");
    msg.params.assign("QDEQIGFFLWAMWTLOVRKTUUHQCZLEMTIZFLUBGNQKYJPVAVUBCVPSXIFOYAFNZHGDBVHWNVJSORGBRTGTSRCSYVENIDSZASXWIHFSTBMQYKCPDOEJAGZJECMDREPEIPBXLCRKJXQJBTLWDAIHSPLPOENZSKZYFFUZULYWHXMCOGOBNQETHAIJMXNFVFWJWUXQTMIYOZKRGHQBCCOLSKDTRDGZIMAYMDHUYKJYQKRKJXCAXW");

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
    msg.setTimeStamp(0.46418661984094967);
    msg.setSource(56921U);
    msg.setSourceEntity(37U);
    msg.setDestination(3887U);
    msg.setDestinationEntity(166U);
    msg.cmd = 6U;
    msg.op = 114U;
    msg.plan_id.assign("XRTOAWIAOHWZTCJOIVJUDTKPGPAOFINKMYAQMFUSDNWDNYEUJCYJXBPCSRDLZWUJMQVPQEGKWQEXHRRBVTALMHNUQYLZRDXTIEFKUULNWNLRYLSSGNKXPTTKAHKFCIMJVBHGJTGVYDSNAOYVRSDE");
    msg.params.assign("FCOBCWLOLUFPQANXYSMCSSGBRZQKGVREWGLSOEMOTLJVKBIEVQFVGWNCAWOIULKUEGBVPAPYYOXAHFMQAIYFPFJHYJSTHUGGVNTILMTMMVHJNZUMROP");

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
    msg.setTimeStamp(0.41663687362233137);
    msg.setSource(56148U);
    msg.setSourceEntity(145U);
    msg.setDestination(5334U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("KGHFUNQSDEIPNRQGC");
    msg.op = 25U;
    msg.lat = 0.36038436361111614;
    msg.lon = 0.28086518841061847;
    msg.height = 0.1876411542277251;
    msg.x = 0.8363407911208433;
    msg.y = 0.7146595388958874;
    msg.z = 0.7200611799271021;
    msg.phi = 0.6622391456918522;
    msg.theta = 0.6128953496004843;
    msg.psi = 0.7626759586873099;
    msg.vx = 0.6202084640806814;
    msg.vy = 0.140171448838462;
    msg.vz = 0.27694535922111707;
    msg.p = 0.3168833678883801;
    msg.q = 0.9791777857619782;
    msg.r = 0.5289866964220975;
    msg.svx = 0.9385134304574803;
    msg.svy = 0.97859272489056;
    msg.svz = 0.4682291289996381;

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
    msg.setTimeStamp(0.7484546515197171);
    msg.setSource(61406U);
    msg.setSourceEntity(208U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("KHFPXGRTCZNKOSHTFJLHCNDGOFPNVUGOXAOVJXEJOIPABLZHQQLPRJEJRYRKYRHDGKEQLVMYTIRXXQXKYMBUMWTIBYTUIPXCPKEUEYGKDQSZQAMZDZTLWU");
    msg.op = 234U;
    msg.lat = 0.7241405242070347;
    msg.lon = 0.6916877573918786;
    msg.height = 0.991923854700075;
    msg.x = 0.0047915604153490055;
    msg.y = 0.6666044671509177;
    msg.z = 0.8244113259821744;
    msg.phi = 0.9930121383741913;
    msg.theta = 0.13849453224831487;
    msg.psi = 0.5643621130864785;
    msg.vx = 0.1631942860757808;
    msg.vy = 0.7650652098997739;
    msg.vz = 0.1905512997430805;
    msg.p = 0.6172025241633778;
    msg.q = 0.15793672417637883;
    msg.r = 0.9128910690798857;
    msg.svx = 0.21122752006183232;
    msg.svy = 0.0775393218833017;
    msg.svz = 0.9066948139887417;

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
    msg.setTimeStamp(0.035039969341224);
    msg.setSource(34743U);
    msg.setSourceEntity(125U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("QSEFVGQEHTCCXOWXISWPCFLIBWQSICKCMHMSPXKLMLFAUSJRVBVOKNTKZOUOPCZNGQUHYGZPODSCALRXNTGOZJGDQXESYHEWIAFVHDBNINXLRLCWJJIKBBXIQIRRRBJUUQY");
    msg.op = 55U;
    msg.lat = 0.8670438035041185;
    msg.lon = 0.7470175761443008;
    msg.height = 0.8029458752448395;
    msg.x = 0.03567658159654796;
    msg.y = 0.5962777626072694;
    msg.z = 0.06589673712748823;
    msg.phi = 0.8017300746961807;
    msg.theta = 0.8780507809833746;
    msg.psi = 0.4732160173462524;
    msg.vx = 0.7892531222947355;
    msg.vy = 0.9127171421846257;
    msg.vz = 0.5310940435903675;
    msg.p = 0.040954383457262655;
    msg.q = 0.6872373573443069;
    msg.r = 0.7342527199489808;
    msg.svx = 0.03181480043808338;
    msg.svy = 0.6632487326316071;
    msg.svz = 0.19098380869235687;

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
    msg.setTimeStamp(0.2683857786004463);
    msg.setSource(16024U);
    msg.setSourceEntity(74U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("MOOJMKMLIHCCUQHMFFLXQBBUTKDWSHJUONWLYXRCKWDBQIOCBQXCWYGBUCPFHAGQPGPVEHSKAZYZOTLPTYNDFZBHMRNPTXPRBAYNOJOUFDTUFVDGQRCXJIDIAEVIHJQZAWYEXFPVSZECGVLEZQTLWMHVTSKQUEFJMGHRAYNAVSRKWUNXDZGSPMOZMCENRNKIXLKIUYYXADSZBJKLOGSWXTMLIPWGIJEATRSFAERNTUFQJWPBVLGVDROSJV");
    msg.type = 126U;
    msg.properties = 247U;
    msg.durations.assign("QLJTETQLJIZRXZFFTCSXAGORCPZZGQFTLOWKSYPRCPGCMQIIAFGBOZ");
    msg.distances.assign("WHEOQHJUKUMRWTGPOVINMPYZVMRMABVQEFBDRSWIIEPMETXOSQDMOSDLQFKJCOEKGJUYXHAIEXNBQCDAAHFOXJGMAVPKEOTKVJUQGPWLKCZTGHFBJRJJLYYVICQIBYUGDRWVRUPPLYARSZFCRCGSZEABTNLAQZIDQTCNSNSXXXIHZCZHKTQBZWNVZPEPUFLYGOZ");
    msg.actions.assign("LDIUBBWSMKWWQGPFHHTCNXQCFOPLYYNACWCWLSQAWFSMHOEAPLZJDVIEFPSKSJGKMMQYNHFENLPHYXJIUEJNSXDCCRBLIZAKDTOBIFDERT");
    msg.fuel.assign("ZXQDYVGTZGWYMMTVFYSRHPNGKNXVWPAFRWYBNOJCEKHGBVDWSKFBDINDTOJEXWUQSKPKIDIVAFEMJOQCUSLMGBIARSBOWLMNEYTYJCQKXGDHJTKXCGJCLHNUILOPULIEAQVCAAKSDZZWZCFZQDPOXVYUTZCXAGCUFPMOWZHXTHAFLTAKGJBSWEREFPYVKMLBUQHJARRCMQUIRSQDEOILTPNEJIXRNBPMYVRIPTGZDY");

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
    msg.setTimeStamp(0.3305837123530819);
    msg.setSource(25552U);
    msg.setSourceEntity(188U);
    msg.setDestination(22499U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("MUUBETDEUBACECVHJZZJJUWMTXRPABGZLXWBOZYVQBZBMXJFKNHJAJCRIWQTGWERJSWNECQFPISOROHRLEAYKIXCDGBKRPAIVNCXNYOOPVRPMOYFMZDERHQXXVQNOYRNDGAWSBGLMEGLSPQFXL");
    msg.type = 28U;
    msg.properties = 17U;
    msg.durations.assign("LQSWEOASWAIDULMFPDIJKLWTDGQUNEVHVQUGXLBTZTUTFHKAJFGBMBGAPYLBPUWTLBCRQICRNPTGIWVHGCKVDZYOTSNQHDMEUFSPUXFWDZGKZDKHROJNHESKACMABVTCVNMNISRLXTHZPBFJOXLJAMQJPEUYOVVEMDTFBHCYMFN");
    msg.distances.assign("QADLVDILGWPDNEJAWDKECVEEBGLMJWWANDMCPIDYRUSXBKGXBGRISZVCLPREWSJPDTOAUMIPPJTWMKGFAZROLOXQRWMUCEAXFJLQOMULVJGYWKNOFXIEFRQUVSBHWKGBFDRLCANUHCXOKTHGBHQEVMYKHJSY");
    msg.actions.assign("LXTPYUBYUOTPNHPIWYBIKFAAGXZSAGQOKGQJTFEDYJNOTDMWLJGFZNPZEOSHKKQDUQWJHKBBXLBRXZEQMPZVZNZXSLUODJYVVRVYARPDLNVJPGUOTANPEQNDGKSSRFVCPMSUEDTEVKBKWOGCZQBRNFSLXWVHMAIIRTGWTKFXWABAGZCHYCECIMWDHMZYOJCIIVWUJILBHYAETOFCEAKMSPRTBCULHXUR");
    msg.fuel.assign("HUPNPXTXSADLDRBORMKEATEYRZHZC");

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
    msg.setTimeStamp(0.14100943561221202);
    msg.setSource(43306U);
    msg.setSourceEntity(3U);
    msg.setDestination(20497U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("VALEUUCXFTMAZRFYNKWFWHGGAJLGIQSMTQBXKAUPABXCLSHFZPOKUYOPVRGJUIUBLRYCXBRPBROSLVQUNTYSQQWHTCWXRIZMSDKMWLXVTVOYVWXLGRPNNYNSFJHEOEBJNANKBIAWEKPNDEWKDHASRDIGIDVHDSMTJSQZPFPPQCRKM");
    msg.type = 26U;
    msg.properties = 42U;
    msg.durations.assign("FVNEFAUWLIHPSYBXKQXLYGAPJBWJJSGXIZT");
    msg.distances.assign("ABAGWOWICYLUYPSJKGMPPVHDZBPVVVBZBSNHFDRMQWFJBMLBGSTQQNOETILURLGUTITORQKFZXUXWLDXDFUQEIRLPOCPJEOZCEARTJGYKHAKICGNXGKDZDVFACSVMOWOPLQXQKJMUNHYAFIABZRUIWMJKSTJNLADGFYXDFXIKSNPCAAYBOGI");
    msg.actions.assign("BQNPTUIXWYAIADZZGFMKRAGEQQCHEGJNNNMLTEGDAHZHQHOIVYCYLDTLPTNJCWOKOKIRCXJQJVQUYYTPVIMEXTRWSNWJBRIAMYFZXVAUBUISXAQSWYVSKEYSDWVHVZBHIXFLETBFZBHQJSMRWATOFUGJZKXMGFOILKBFDMCQJGUXVXNOH");
    msg.fuel.assign("CGSOXDBHDYWFDHBENFBSUUQEQAUHPCQRKHUPJLWZREMAXIQZUEIPBPYNVDNZXKXRHZBXWVJZVQKTJOWKLRSM");

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
    msg.setTimeStamp(0.031505706455161486);
    msg.setSource(4509U);
    msg.setSourceEntity(52U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.9371429254684069;
    msg.lon = 0.7468597913886552;
    msg.depth = 0.20050527254867834;
    msg.roll = 0.3096172111002512;
    msg.pitch = 0.15300699308504895;
    msg.yaw = 0.39081040778601983;
    msg.rcp_time = 0.8463985766639492;
    msg.sid.assign("ZQCDDGFTLWAXLKJVBADPATSIGWNWZUTAXHPVNDMODNRFVPVMREBQOEBUBCIJGMGEMNBQACFFHYEKSPXGUZLHMFIQXUNGYIUCYHEDYOESMMKJIQVAJUKVOUUQJQOJMWOCROIYGSEKVXXKQKAGKRREVNFNNUSHZFMPWBVCNHYALLSRBQSCZFISNWKUYTQ");
    msg.s_type = 138U;

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
    msg.setTimeStamp(0.710767482824514);
    msg.setSource(7976U);
    msg.setSourceEntity(26U);
    msg.setDestination(14260U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.6685295469717042;
    msg.lon = 0.2979763854456511;
    msg.depth = 0.8467009089477995;
    msg.roll = 0.9630130216129027;
    msg.pitch = 0.6565881668661525;
    msg.yaw = 0.3888799593516159;
    msg.rcp_time = 0.12945926164376254;
    msg.sid.assign("TTNOXCIDZLTMHOBKNDAJWPUNRQVYGAZVPJLROEBYVRVOQAZHFWWAJHUUHZXKKUUZXVTYRQDSXKRRPCJBWBEHDSLXLSJIUSFUSNXFGXDWOUIPYNLEEZNMSFYWNUGYATDLQGJGQMCKXRSQMIMFKQEEBOQRTVYCNHGEVLSJCGXAFNPDACBHCCNGJMKTAHHIMFOVZBJXOTWJPTCVKFYDETKAIYGPYIUBGERCMKPWQOPBSDZMPIOWDRZ");
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
    msg.setTimeStamp(0.20180647118469153);
    msg.setSource(13190U);
    msg.setSourceEntity(35U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.4967141016735708;
    msg.lon = 0.09558788015476893;
    msg.depth = 0.8368503403150134;
    msg.roll = 0.9127497294764609;
    msg.pitch = 0.22737768458205365;
    msg.yaw = 0.7988707284275277;
    msg.rcp_time = 0.34684636132991864;
    msg.sid.assign("WAIVCXEBVZLUAOIHVDLURBKSMPDDSSIWBLKQMJLDPUIDUQUPVZEOWDGQJVSUXEBGZFPTQWSXNLHYSSDRFUANCNHOLYQJWENGXYEAGQAFKICZKDMKTMLUZKJSE");
    msg.s_type = 31U;

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
    msg.setTimeStamp(0.677522025100435);
    msg.setSource(18188U);
    msg.setSourceEntity(116U);
    msg.setDestination(52847U);
    msg.setDestinationEntity(17U);
    msg.id.assign("WBJYBAOUUJGADWHSTMBTICSLESHNANCCZJPNEYCTEFGMMQGKHKGNOWKLAKUMVVKYORJHQCTJZZXTINJDOTAFOBLVOXXAPJTBLCZMSQRJTESTMDGUKFYCSXIDPQQUXYBWAMUOIKCDRJRZDWPHIXVPSLIHUREHBZTNLVBYWWFQXZGAECJPDERIM");
    msg.sensor_class.assign("OBELKRHAPNELSOIHSTLVKBTZJRKDXTFXHUNIODTSXWPOADKWIKGZVXHUAMIDQWHJPKFQYQAJABGUWNMXJVZRKPMFXEZAGMYUCXMZJINQOQECWFVUZXKQSLMQGMMUURLBHCPBYFTCDWPHDNIRPCINNEEBLVCRFCJDZARGBCOGJXETKVWWUNCDGYZWRDSPFLWOBSBTPEHYTBMIHSPKOSJQSJTRYUYYUNMHOFAVLACASI");
    msg.lat = 0.7899389755699631;
    msg.lon = 0.8377427029740554;
    msg.alt = 0.8219505925848797;
    msg.heading = 0.619960584146979;
    msg.data.assign("KKSOUOYGVNKPJRYMYWZKYLMORCQZBJWYPEPSLTPTEXFQSNXDXWJRGCPVREUUUTGAFCSZOTJXRGAVDMGJZKMFNKIINAVFNWFYTGQYJHRKHISZRUFAFEEGDGUIHQWONTHSLWLQTCVQQHHAWANEVLWDVBDEHYBAPTUJLSRNOIIXDNOLYRBQZMXECKHIAKFDT");

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
    msg.setTimeStamp(0.6640221663364262);
    msg.setSource(12255U);
    msg.setSourceEntity(215U);
    msg.setDestination(53261U);
    msg.setDestinationEntity(2U);
    msg.id.assign("CEJYHPTMLQGZXWISEENCMQAQUSOKWJOBNFLDVHCQVJWPUSMLUNWXISSIIFVIJWNNZUOGCFRYCDJIOQOJHWDTNTDIBYRAFFYUADGDMGQCEFGPGMOPXCXOKYZRNFJIJPSZYLBJVYUQUBZDUPGKLQKQSWVLCARBFREBCTXGBJQYRYVASWMERUZLAKVCHSZTUANHROSZWAEBKYKTDATMRNVBKEDLHHRZZOBGPIXXKPIFX");
    msg.sensor_class.assign("SYQGVQGCIVXCTIWEMBSDWDROAZOJSIHOFZOPMGULUASLNELXSZGKZEEBMSNAPQYXSPDCAERHGNDCBACJWYXSGKIMUONQ");
    msg.lat = 0.8789609303837224;
    msg.lon = 0.0641518001636483;
    msg.alt = 0.9966467546909435;
    msg.heading = 0.7525422602190993;
    msg.data.assign("IIYSAHORYLBEEIAHUFTDZYTFPWKXMMNAQBBJSYVDIDPKXWNKWTCPDMCPYZOKSAGXWOXSAVIFOXXVBTUGNKYMGRLNQPEQVYEPJUILJSCJCKRKNRQBNZYTAVPVXPHZQHUZOUKTWBCXKTFDJQWEHYREGDF");

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
    msg.setTimeStamp(0.18538704820845953);
    msg.setSource(48939U);
    msg.setSourceEntity(227U);
    msg.setDestination(52135U);
    msg.setDestinationEntity(14U);
    msg.id.assign("DNPPBOECNEGSTFWFNVZKZZBGQJLIBASSCXPLZNFICNRMOPSLARFWGSVSHOTJOWGMRROMDDOBBGCYMXRXJDVIHAVACHIUBQOAEKYTXKMWEQJUOMCULUXDBPGPNMZBDGHIXQUYXIQPZFXAKGUYUQLYFEAOQGMRZAIRQELYRVF");
    msg.sensor_class.assign("WWOBZYISOBYCPCQGZJYXEYRRRIFSXLJCKGUHKLGAAVLJHCHSFQXDXLYCUEUJTJVINHQTEQPYWXVIPDSQPSROSMZGRUTOKHMKPBOKXFOALUTXUOLZFTZEBZHJZBONWMMYIXQK");
    msg.lat = 0.5850773115537812;
    msg.lon = 0.5139383816052212;
    msg.alt = 0.24392815050217143;
    msg.heading = 0.07025280376926957;
    msg.data.assign("AUNUPEKHNOTRWIVNDFUXFNAXWAVTRTZTAJNECGSKZAHGFSSEKQBFNIRKZLJIOJHZCUXPYFQHFELXYTSCOBGWJJLYHTBIEBVPGBRHLVQRTAAWHDKDQHJKCKLZDVZJUTMYXOEGKGDQZXPBCQVMMFWLMWZAIFSVMMPBYADQD");

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
    msg.setTimeStamp(0.2229206879555149);
    msg.setSource(59752U);
    msg.setSourceEntity(224U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(157U);
    msg.id.assign("ESFCJVKZCXNHEXZHMTSUDVBIDMFWAAEWTKDPRBVYBHAAUGWFOQQGABPTQINPOCDVPSJOHSJYTQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KCRZLQMJWYVIXGZSUORQMFLJVHLOJPKJBQJVWKDEIBRJBWCTMGHMUXQHSCTYADBAPWVDORKZQWDSYWAKHDDQMRGI");
    tmp_msg_0.feature_type = 234U;
    tmp_msg_0.rgb_red = 12U;
    tmp_msg_0.rgb_green = 195U;
    tmp_msg_0.rgb_blue = 102U;
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
    msg.setTimeStamp(0.14797056116186535);
    msg.setSource(46216U);
    msg.setSourceEntity(249U);
    msg.setDestination(2083U);
    msg.setDestinationEntity(64U);
    msg.id.assign("LTMNVGBHDRUSRJWIRGETFFXODTKHPAPFWGTXQSBYLKCHYRNFPDJPBHA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WAQGAWQNOJGYBQHAXFHFLLSKHCSUPCTDVEMLPKUYKABSQPYKWRPPGWPMPKGJPIHJBQPJGSDYIRTZJACXIACZ");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 124U;
    tmp_msg_0.rgb_green = 59U;
    tmp_msg_0.rgb_blue = 151U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.558745212229262;
    tmp_tmp_msg_0_0.lon = 0.9788772722187514;
    tmp_tmp_msg_0_0.alt = 0.8283647873504012;
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
    msg.setTimeStamp(0.43892838778771215);
    msg.setSource(41024U);
    msg.setSourceEntity(245U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(133U);
    msg.id.assign("CXQRESWNRZSEBLPUZUUUYQVMBBNZLOJAXLRFDBVPXOTVXIFPHMZWEIGDARWRLTJNTVTMXKFCGIECVUDJRJKDYGPPLVOKWCOSUJNLXYSFZNFJYAJEUTICPVSIUNRBLMQUQKOMVWDGZFCTYLCHWBSYTYFCHHLDNVSIDXIEGUMKPOBRMIWHIALZTBHXSOARTTBQZGKMEMEDHFWDXSKQYQJCDMKZHQGA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YRZKIBAPKLZCRFEHFFWNZSCFPXWGDPQCXLWHRHBMCMEQNCLKKEQTPJEUVQIRO");
    tmp_msg_0.feature_type = 32U;
    tmp_msg_0.rgb_red = 220U;
    tmp_msg_0.rgb_green = 17U;
    tmp_msg_0.rgb_blue = 96U;
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
    msg.setTimeStamp(0.2334311756964157);
    msg.setSource(17989U);
    msg.setSourceEntity(3U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(3U);
    msg.id.assign("FHHQGNFDQTIMWJJUYKESTMDQKDHWKQILJOSACRQBEGQFGOWXDCBHEDLRTGMVFGWQHLAUIXNBLIHRWNYYGUKBLZRSP");
    msg.feature_type = 243U;
    msg.rgb_red = 100U;
    msg.rgb_green = 132U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.28499698385105254);
    msg.setSource(50022U);
    msg.setSourceEntity(124U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(169U);
    msg.id.assign("RDNMQCJDJQWEHZOLSCTOEHCUYLDOLOFOGFYTVKPELNRZKYRWQNTYIKSUURTGS");
    msg.feature_type = 166U;
    msg.rgb_red = 185U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 79U;

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
    msg.setTimeStamp(0.1721367220166986);
    msg.setSource(61335U);
    msg.setSourceEntity(200U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(111U);
    msg.id.assign("KSLYPGCXJWELMJVNRRIDRXWRXNAVHCAOJQYIFIIBKFQNAVNVKVNZSMWTCBVOEYCH");
    msg.feature_type = 33U;
    msg.rgb_red = 148U;
    msg.rgb_green = 66U;
    msg.rgb_blue = 226U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4572975387104974;
    tmp_msg_0.lon = 0.7595090475056333;
    tmp_msg_0.alt = 0.5025497575860101;
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
    msg.setTimeStamp(0.5851347492123625);
    msg.setSource(26459U);
    msg.setSourceEntity(66U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.1480952088577583;
    msg.lon = 0.8423964406438957;
    msg.alt = 0.3619549239215565;

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
    msg.setTimeStamp(0.7791040748410601);
    msg.setSource(23211U);
    msg.setSourceEntity(213U);
    msg.setDestination(34791U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.8387694138368463;
    msg.lon = 0.16441323891494464;
    msg.alt = 0.3958333758654893;

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
    msg.setTimeStamp(0.4580196481250739);
    msg.setSource(47107U);
    msg.setSourceEntity(226U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.44683754169563716;
    msg.lon = 0.9850212173803721;
    msg.alt = 0.6761489610620973;

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
    msg.setTimeStamp(0.49279268408998056);
    msg.setSource(1428U);
    msg.setSourceEntity(195U);
    msg.setDestination(560U);
    msg.setDestinationEntity(240U);
    msg.type = 172U;
    msg.id.assign("ZUKOQXJHRYSCHSXYNYLINEKGHUUBMTGQALAMFEYNHQIALPCZTMGUKPLIBKOUFFURZNEVJLTTDE");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GABQEBMFSOJBXVPTSWUURZEKTXQXBLWEVPCEISXVCINOCNLOXFURIRENPNJPNQNBVGDFQAMQSGHPGPHPWOTOQKUROOKLEFNBKGYWDINCFUBIEHASYDHAJEILYJYWMWOZMEWCBNQVMGGJUZDDYPLCUDZKRJ");
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
    msg.setTimeStamp(0.19615845412887345);
    msg.setSource(24356U);
    msg.setSourceEntity(219U);
    msg.setDestination(40740U);
    msg.setDestinationEntity(243U);
    msg.type = 133U;
    msg.id.assign("GUISJDFKBXINPEOPCACMTJXGVNDETNSAGWWSHXNZHWMJCMMCVBHNJBEFMGNOUGFUGHVKNTNIRZMRYRHJBHGXISAOOFNVVAHJEUEQGOGVKDZPKYQHBDTFMMWLZUJWVHPPTWLMRDUTUIZXRYRDACDZBIPBIYYLSKK");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 42U;
    tmp_msg_0.zoom = 82U;
    tmp_msg_0.action = 67U;
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
    msg.setTimeStamp(0.6526255119021962);
    msg.setSource(27745U);
    msg.setSourceEntity(172U);
    msg.setDestination(6574U);
    msg.setDestinationEntity(187U);
    msg.type = 197U;
    msg.id.assign("FGVXKIUKZPOEKGGAZDVREMQPDPEOXKBBHAKRIUUQKSQZJEBYISECQOANFCKNQCASHMFOHJJQVYSLXZ");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 57;
    tmp_msg_0.value = -2055537519;
    tmp_msg_0.gain = 104U;
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
    msg.setTimeStamp(0.09480731926201247);
    msg.setSource(26252U);
    msg.setSourceEntity(225U);
    msg.setDestination(27888U);
    msg.setDestinationEntity(88U);
    msg.localname.assign("EOTDDOUCVUVPTSAAYWWVKYLJRDNJWAADCQSDLUMKUHRXKWWERXROOXEFATVZUHHULYOMNVJPTLFCHOKMAKDIYWXSAYZTRFVNYNYEEGHBOBDNXIIBEOMZDFOAMJLJDHEGJBEMRZPPZBCBJQJGGZQPVZIQKIFPDGVKGGXIWHLUMEZCXSQMCMRN");

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
    msg.setTimeStamp(0.19200638864448383);
    msg.setSource(13845U);
    msg.setSourceEntity(117U);
    msg.setDestination(60607U);
    msg.setDestinationEntity(16U);
    msg.localname.assign("STBWJRVQBEWRCGQGLBLMBMFOCHAOSIBPJRLEYKIMRDNPKPDDAUXPSLUJNEPGGTABXIQODPJIEYFJQTWCFO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WJQQPGOTLBRBJFUYUWADRHIYVBCDGRUUTKSCCKHWDXOGFSLZGQYVANWKJTBOEMGKNSBQIMRYVBMTCTDFWTUCFVLCIVUEQXNRFIXEIUNOJRJPBPJYFIKTHGPREYVZAPMHQDVSESELQQHYSPGWZPJGJCPEFJWA");
    tmp_msg_0.sys_type = 244U;
    tmp_msg_0.owner = 60918U;
    tmp_msg_0.lat = 0.695100637125961;
    tmp_msg_0.lon = 0.19300394470198834;
    tmp_msg_0.height = 0.9472070799883812;
    tmp_msg_0.services.assign("FTGVYTQQHKUQUXAJEMKZLZWOGLPYFHVYDQGKXRIMJEYHXIWDAGQSKRNVFOEFQRWUVBPCCUKZHJJOJTREFWYWQPXIPNBVPSYKUVQZUMEQLBSOHXEMORVXA");
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
    msg.setTimeStamp(0.48727080268216116);
    msg.setSource(18269U);
    msg.setSourceEntity(240U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(246U);
    msg.localname.assign("YLXQQXFBTITQBMDERRYFZFLRQHNMKDPGSGBZIYXLBEMCOHDKITAVHRYDMFNPLCAAZPZOCKGCBGMFXWBCKXVGWWWVJSJNVSWADJQQCHQSGLESKCDUWEHZBVEZTJYVJIXOWBTOAYZEAGDCERMUFIIAQMHJGMUEDPXVSOJVCHXTUUWOSPDYTJFEVHYOJLIKWOGTDLJVQZEYRGSZNFTPYINTCMFNSOILHPXUUAUPKUU");

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
    msg.setTimeStamp(0.6877653581121409);
    msg.setSource(5776U);
    msg.setSourceEntity(88U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("LRHCBBTOTUNBGOLEMTXYTGXQFCLBSXRCFMKYJVUYZDUQGCFZNJETLICZHJKIUAHZOEEUBOWKNYKBSRQMPUFAIPJPYNJBRRKXWSAEGDBCMAYGWYDMSBMDEJIHW");
    msg.predicate.assign("GLQJXUXROJMHVNBCOPRWNMCYAEWZVNQMLSRPDYOAEFIZJD");
    msg.attributes.assign("RWLYLZCXOCMVNPPLDCFBKKIZEKUALIACSTEVPVSCAQWCZSYQYEJMKXDMYPUYFGNBIDSXNDLNRDMMZKBQAWXMBOBGSMVGJZYHHZKZGUHWRRGYHQTEEFIARUTNWGOWBSKKTLBWOBZJDERVLGUPOGTAIQOEQFXIWASXIYVRZQYCLPJTDWUNTCPBXLRVZMUOREFNXXKXSIQATTHHMFJNJBOHCUVKDDIHSAFEAEISTMGPWJNU");

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
    msg.setTimeStamp(0.6692222091399436);
    msg.setSource(43263U);
    msg.setSourceEntity(5U);
    msg.setDestination(4566U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("SYVEBWCQEKBHROTCZTVYPNDYAEUPFITETFVROOTDKNNAKHQXGUJZXRWSPLAOAXMDWRVTHBRAH");
    msg.predicate.assign("FAFCUPNTJXRMSVPPGKAYNIIMZZVEREUURWEBGUJBCVEKQFANUEZTAJGIWOCPHRQALXXVZZYBFAEJFDNIRBLCEJXJMPBGZMLGIHYUPAKQLYHNPXDVFDMUGMDWISZPADVUKMOQFDPKGRUHRXCPTOVEWBXHDQQYGVSYALBLSCUTWMSNNZRTHIWMJYJBGCOXYVMVICKBOLSEYORSOBDNNWXGOOTWCLKFLDRTKOZJHLS");
    msg.attributes.assign("KGKKJIPKOLHAZIIUBRMEAT");

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
    msg.setTimeStamp(0.7035850419060953);
    msg.setSource(12094U);
    msg.setSourceEntity(81U);
    msg.setDestination(22601U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("AOVHTCISQYGQHFOLPGYOTVUWJWNWQJMWPVZTVOADEUTOCESGVJCHDLLYMGQLINUTLXGPFMQMPZKKYKLJSNNYSQAIYNHDOJHBDWHHFIREFJLCTSFFTKSDXHQVPJOAZWKQXUUCOTMMCNERZGGIBWSMIVXSRSHBFPXSDNJQKRMEEBXIXDUWVCWUMBARRBNGFB");
    msg.predicate.assign("HOVZOWDIJFODEFRQDTCVOSWUNTOGIAKBSGVEKAMMFNMGYPUPPLCVTIDAVGJFUBAIXCFTUZAJXGMQIPRREGOLKPXYWRHFVNUMRZUZHJYXIDQALKZWXRXOSLEAYEMDKINEOPPRI");
    msg.attributes.assign("XLJEDHEHNBUYIWPEOFZMFMTASTZWQVMCDHBJBOAEUKRDLUYYTXCBSOTRJGIZHUZICSGWDKGWLNRQMHKVOMKCQFQUPTQYSVKJMOFLMP");

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
    msg.setTimeStamp(0.9957638664509368);
    msg.setSource(35681U);
    msg.setSourceEntity(138U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(12U);
    msg.command = 122U;
    msg.goal_id.assign("CTBKZVZATUVXBSKRPVTHKPNJKPIUDLHRQUGXIGLYIPHFKSNAMYQVWGFCGSYOBYSEYCUYJDTLOSQC");
    msg.goal_xml.assign("RNASULQFBUHNGFGXTPXUHAPVGSYBMXEGPDSGMVCMBHRXRQHZHLNSWWOIAFCLURIZMJTQMHHLYWIDYERUWSBIHDVDNHQLRKYOWVDBKI");

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
    msg.setTimeStamp(0.17277173832127812);
    msg.setSource(23129U);
    msg.setSourceEntity(121U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(132U);
    msg.command = 177U;
    msg.goal_id.assign("PLPXSOQZPKJIIDYEIFBCAFZJDJGTZFGJEFDSEHQXCWURDRASODVSSEGYOOTOJLPAMDZCAYLBEVGHLKQLKEEARJMKFXZGRYHQGURPNVXYUNVZBEOYKTTMVTYMZDSFMMIWMQBFSWEOUBCRPHCUCBWCAHCSGYQIRFOGVWDRFNVPYKTNCLTIXNOUBAKHTBRXBPVQLAWFUUTSKAXWPWWWXIKN");
    msg.goal_xml.assign("IHUXYIVCOFMRJUYKQIQTKGFUQDSXCMOXNGWVZNRGECVTAKCGWQRXKKYZQYNNGJLNSAEXUUCTOOJWBPKHXYUFAJOWWTIACCMWZOXPGBZATKXQFMDLKZETIFPQVERLZSLRBSHLLYHPJDEMVRJNSREIJ");

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
    msg.setTimeStamp(0.6488030163699413);
    msg.setSource(27888U);
    msg.setSourceEntity(44U);
    msg.setDestination(35730U);
    msg.setDestinationEntity(235U);
    msg.command = 96U;
    msg.goal_id.assign("JKHLYXNBAIXXLHWYO");
    msg.goal_xml.assign("HINDWBUNJKMUXMLJTRQULICLHNPYIDSQFWCVIFMLHJPHHUTOKBAURWGFBFQZVPVWZQOPNNSPCVJFMOYUZZBUAEEMXKVXIZBKABIZSHVDWCJEQPFMBGRTJOJDZCBAOSPSOEKOHZVALLLWEXRNKHTTUUTRGCRXXKJYAYDKAEMORHIVSDFXCRSDTGNQYLIROXMRWAGXNLNFAOGDSBEGYPWWKQNDTM");

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
    msg.setTimeStamp(0.21214111693747706);
    msg.setSource(49696U);
    msg.setSourceEntity(157U);
    msg.setDestination(7523U);
    msg.setDestinationEntity(29U);
    msg.op = 206U;
    msg.goal_id.assign("IULPPLAQFJKZTBMQJHYBCVHHDRAUFUTDJMEAMKYYKSVCEBUISZGZMKRZWAHJTXXNPVVHLRWXDDDWJFOQNXLSBPZTNGLACNUCNDLOKSRNPFWBDEISPYMTUIVCWSKGBFPRFWBAJTJDITRSLKEGBEBWRNSTKMZOUNNPMHWEOQYIXEVFIQQPYHOJZOCAWDQJBPIEKEIHIAOFXO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UZJQQKBDHHYJMKEBIOEWJAHIPXEOUFGGXGABSFNYQNDZVLGTYGXCCBSNPWDVXHIJDFFVOUHXKPUYTIWVMVQCPCOEOXWBMFRNNLWUTEUXSQKPCTCGT");
    tmp_msg_0.predicate.assign("NFWETPXRIAEOQRCMGSEQFOGWCZRQDVTRCXXULQAOJYLXILYYUIFJAOFHWZMZYKPKQHVMKGHBLXWRVCHOQCMJRYSRJMPTETZTNDJEELTA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XJXIUJCFHKKITMCMDLCEMUKTULXSVIACGZQLDMLYRGDOVNEKWOLNOURJOSIFKJEVHXSXYCZQDABNFDCPGVMYXUHXBEPTTIBMQTANBUCHDGAFRESEBYLTNRLITGSUAOAQNHZIEOCBDKWZUZXGPUBAQKRCSWDWHYDVZZYWOJRCIFRRJPWTYSSFAOEYWPSPZBBVUKLVKMFWQQAVJJVQYJEHMHKGZPNTWIRRFQAXIYFLNMETGHBGVJPMNZDFGOS");
    tmp_tmp_msg_0_0.attr_type = 242U;
    tmp_tmp_msg_0_0.min.assign("DHKHFQUDBIPAZBKSQNOLZUJQRZJCRHYQ");
    tmp_tmp_msg_0_0.max.assign("KSYWEPYMLMUUZSHEZPWAFWHOFCHBCKXUNGYZLHHBIZDUNTMDFCAXXZPRGOPMIRAKIKTSIEXWOBJPTSHLGNGJAWKEAITEFVKUGSAASBRAPQEMUFCKNMQVUYDKLZEICIJQCJZHYLQBDGBGFVTYERGSWLLURZYLOTMJJRVWJXMTLACEHDWNRGO");
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
    msg.setTimeStamp(0.9284772422449572);
    msg.setSource(3868U);
    msg.setSourceEntity(22U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(77U);
    msg.op = 97U;
    msg.goal_id.assign("VAOREJJSRXDZWDUDKVJAIYGIYCHDITXOJPUKSXZVLMLOOUFUCPBKRNWXCDYFIEVRZMSLEAFSWZBIPRFWFMOAHGSJBTCCCMZXAVXMMBBQVQJBNKNEVGOMIAZTZLNNEUSVZJMQPTFYRKOKRTFADUHILBHRHHTQQTLSPUWCYQMPHQISABYIEFGZWKPYPXCHDGLORKNQYWWXNDTMLVTJGIYTNONPYKBPHDXOWFVNEAUGDQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DZOYSCXPTFGT");
    tmp_msg_0.predicate.assign("DFPPSWIDOENTXYBJWRWLXIBJEIKSNAUQUANIOUGFSTEXTBIZBWQXMBALDPLOVAIRDHMVWYTDVIEEMLGDYGWJSCPKZBZHOUUZCZFSKV");
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
    msg.setTimeStamp(0.19269805148946284);
    msg.setSource(57110U);
    msg.setSourceEntity(6U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(22U);
    msg.op = 118U;
    msg.goal_id.assign("RCKLOHTADAJXDAPVEEVDVUUYNROQQMMOKFBIIVLENRUHTFUZFZCDCVZSSWBMZZFGPCOXNITFBJRSYOYHBQCTXAVRIAGRDYKYPVYMNIISWBQMHICLOQHUQJSW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EEBZNSCBKXYTGNHEPGOM");
    tmp_msg_0.predicate.assign("NATZUDNKFUMBOCNIKKZSSMBEEFBCDDEGBQZBJHQSKCVTUDHPELMUUVVXBVBHMFLORJCNLGROAMFLWOPJTJEWSXXXTTQKINRAYFLCSJVZFP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RPSGNYBDUMXUWEZFBUGSMTHVSEXGVNWTKGEOHNGNKSFHFBPGMKMTAGRERYQTOYQOAEHLUWOYSTSMBAMTVCBLCCIRQSFQEJCPNFXVAIXPCJYCYKDDIBIIPDZBFOV");
    tmp_tmp_msg_0_0.attr_type = 91U;
    tmp_tmp_msg_0_0.min.assign("ZTGFVOUDGPWZLPEJUEMNUJYHSPXTJIIODSACSAKEHQTGPGIRMLPDVQNIRUTYEROGYLWRTBDRULHERNKJWFCSWMSJOWBNZNVDUWCCGGQMYXSAWPBDCHBFEZOKVVNKXYLFJFXPCUAGGCBUQHQLFHIBFNZHRNTXDSJPVIYRTWSGEVQABYWNKXDIZOKBXERKQAWCQMQ");
    tmp_tmp_msg_0_0.max.assign("BSNEVIMAIBRPJIEWXSFBXDZVNSTAVYILSKVNGPYQLYQPRYHKXKUWGJR");
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
    msg.setTimeStamp(0.5295253933226991);
    msg.setSource(50046U);
    msg.setSourceEntity(141U);
    msg.setDestination(16539U);
    msg.setDestinationEntity(231U);
    msg.name.assign("CWJPJKCOBURTFQUOOSFHHZBKACDXHMCALMSJQTKNVWPEEFWSULFZRXRNVUFSVTUFAEQGDJKKNDZRMTYMFRWDQXXJGUZVSPCDIVTMUNVXWZUQIYGBDPQNWRZWLSNMUALENYHCARSLYPGMOAEXLOCYIGYOPLTGAGGRCEIEDJHRXISKVBBKWHLQBAHJNVKAVOKTEFCMFXBIZTYBQOWPKIYJVSMSIOZWDCMEYTFDQRDQNIEBJZBGXYOLPUPATJH");
    msg.attr_type = 219U;
    msg.min.assign("VDXEPLQFGNVIISGVMZHTZEUOKJKVXCAFLLDVZTBZWTSALGDMBTOJKGPPHNJJXLPDPUXPNHARGQKJXQDKMLTNCCNTNYQHWBSMSCHDWRTXWYYORBSJUUPQWILKOJCVXEPUF");
    msg.max.assign("UQUUGNMDPTOOXHFGWTZYHFSBXGLEVEAYHOGAJUPDFFKLYDUGNQTAUFKWURBBZTPWT");

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
    msg.setTimeStamp(0.7275996155605153);
    msg.setSource(20406U);
    msg.setSourceEntity(102U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(11U);
    msg.name.assign("FINEBJSRTGWZWYEFKPZDKHM");
    msg.attr_type = 93U;
    msg.min.assign("EKUWSIHEOUPEHQXOUDJAHCOGCILTNIVJYMZCOMWIFXURGEUMWVGNYQORXNLUFTFQYLSAPEVRJRYNCXPKWNJDTHROBALMVWEPAVFLSDICXIQMPMLBTPSEYBNXGVBDFUTOKQUPLZSJNYYLDDHHDZFGTCCJVJCXQOBFBGTZATLMDZYKWRTVVUKWCMZSBIUHNKGILSREBZNXGAYCZZWKAVAMNPXEHBGDFBAG");
    msg.max.assign("NSOYTNVBZLQDRIWSHZKPTIQXPNIBVXQHOMKMYCIPJOHXGAWYWWKKUTPDLDWQWVRQJABMMYYCVLGFTPNODGVUIDROSRXVILGWABYMCTSZFPNNSMQXBOCUXMLKPGQOTEDDRBGJNWBJUT");

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
    msg.setTimeStamp(0.00538518133853616);
    msg.setSource(43661U);
    msg.setSourceEntity(73U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(218U);
    msg.name.assign("PFTVOQKHUTEZOVOODDQNYCVIFZHAQLWSWDNFFDWVMZORSLPFSARVBBLUZNLFAMSTKURKIMYPQDXQBJABCZYMSIEPBWRILFLWPIAIYJJCFHYFQJZMXYDXERNUWHQRXEBKHZDOHWOXETKJDAQHCMTVWMIALPSXJTOTPIHXWUTUELCGGFZNNBKUZTOVWGNJPHLBG");
    msg.attr_type = 121U;
    msg.min.assign("RUMMEOFXYLKKEEJYUSDIVPCSANGEWVKYWSWQAIWPCTLAVPETQCYTDCBKBFQLJGDLAHXLUZGANFKZUOBSIYUTBXSMBTWFRPSOMGBOORKGDIQSUMUAJQDLTQGVVHDNPZCCOEZXMYIHRNAPFWASGBYGWKCLHZKEVZJXSJQITFRDRIMDRVVSCZUCTNXGUEYNJHMHPLMXBPJHBMBTILHIPNONQADOGLXXWEFDXHOHQRIRVAFTEFWJZCYQNWRNPF");
    msg.max.assign("WVAHOVMLKTVHJHGBEOSQCQUNNMATSXQTBPKQZTGRKGUJUAEBO");

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
    msg.setTimeStamp(0.4260777884625352);
    msg.setSource(43093U);
    msg.setSourceEntity(19U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(44U);
    msg.timeline.assign("JBAZRZNXSKZTMYAZDGYFHMXYJWBRMPWMLDBMIJAQUGGNZHTMBTMCETPYBWUWJXFTTVRLJVYSURFSDONVHOOZZDCBHQGEWFSTMPOVKQCNXXAFULKOEGXPGKCBDWCVZYJIIUSATMEIKJGWT");
    msg.predicate.assign("WMPRHGYVCX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GHXAFYCSNVLNYQKPNTGVKZII");
    tmp_msg_0.attr_type = 112U;
    tmp_msg_0.min.assign("NXUWGQWKCLATDOYUSAYVVMTOHWEGECRGRVLEURFNCYZVYFTVKXYAKNGMLMXSAMKPIJSZVAEGVTRDBFFOBLFKQIHZXEQBPWUSCZLJCAZEOUUTMSFAZCDZHSMDXPOXDHSIJWDBWQUKLWYOILPZKXXHSU");
    tmp_msg_0.max.assign("JSSUKOCFECUQEEZZMDOROVN");
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
    msg.setTimeStamp(0.21029201319454405);
    msg.setSource(9732U);
    msg.setSourceEntity(224U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("RMEIZPUHMRHPVLNEOJKIFYBTIRGGTZHWKASMJPBURUHVTLVWBGSSABXQGWVOTMVDGWSBSATLCNBRWYKZKOAARVABZBFTPESYDKU");
    msg.predicate.assign("RANZONZEFEOZBQUATMKNKMLGENEVLQISKJVGKILBELUPNTCXVKWINJSAUFJOWHRHGAVTWWYGASCKNUBPRGMWTBHFQUSEHVOPARAZWOIFGRYKGMGXADQMQIHXTCYWCWDYVYQPMUKTVQHXAPDREUHCJSZHFCUNCEDYDECMZLDWIDYDSSRSYPZVRHBMVOEMTNQZFLJZOLYGSFLQOXBAJKWITFXRPHQIZCJXTBF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GSDMYJHFBFMGUMMLYYEMLMLUHNUQFZGKZRLTYVOVVHMRPAVYBIHZQOKSQUNREGVLOYWATIBUJQXVLASBNADUFCEKOGOCNXPDSDTDBKGZWJKRUETPTOLXAQNHFNWUDVRZCRRAGHWXZQAFCECPWLIFQTITQTKQSSCGNVNPZBJCEBKSYXMPNEICFWZLAAWBIJYPIJRKEVFNPASIJWOFYZJDESSJHGXBJGH");
    tmp_msg_0.attr_type = 169U;
    tmp_msg_0.min.assign("DUJAMRCFSWLTVMTUGAKOOYWUPEIRVJEKWXBJBEMXMYLTPXEUQDGYAVZZABJZEBDSUPABDFGWGZPIUNTFJYIUHJGPRYSXVUTCHSFEPFLWIRVCZMCQTNQFOQTFSJVNNMCWEDTEMLGDSBPXNFLYS");
    tmp_msg_0.max.assign("FLCYKFEXPGBAAQAVCWXLERWWSMGRKBPGPPAQVHHRJPEUVQAFKKYISWOLYJIBCELZBTEYGBUDHWZQJUMFCXLELABXKBNXEZTFSCYJAMPZIRCHZTNZWQGTCESDAHMJRGVBAWIOUTFUOIXBWD");
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
    msg.setTimeStamp(0.6870495393633058);
    msg.setSource(1492U);
    msg.setSourceEntity(90U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(248U);
    msg.timeline.assign("QLWSLQAHMJXECIVTJZFZHMNIILXTNHBISDRNVPJFPVOPITEWBO");
    msg.predicate.assign("NCQNMHUTFLHVOEJTGFZYSKPXMBGVWQNKGVJIZOQXTGXFMZFEAKHUJEJWOREUCXWJNMVYIPRLNBLZDXDBMUMEAJRMQSYCGGQCUAMZYHXUSQLWRPTNQSHEGTPBKAOOWFEDJZWFOLIKJUTUKPDCSHSYHICPBFLDEGAVPRPQLAHOFDRSIQDAAYWFXMWRIVNJXCMDZSBNKCZCBVRDY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XTSXWWMGWVRXAWCFHHUNJZTQQOOCJANREFAXADCNBKIMVZLUKEOUTLRUKSSSPANEQDHICJDYQRPQFUHRVXZIVXYTZYFWBBQDOLZCEMOIRPIRPLKCKAUSNGFYC");
    tmp_msg_0.attr_type = 80U;
    tmp_msg_0.min.assign("GCALXDGUNVPAEFOEYKIALPSQILTUYTGBREYXOBDDKCMTPCFHUZYJXQZOHLMMKJWMRKZVGBXWSZNPLXZHTIOUPOEXWWYFODOPQEZHKFVWVVMLKXCINMGRASUHZXRKJQJWJOPWNIBSZSYBKBNHCMUGNXDLFCLQUDNVVHGYACYFREYNEEOQDJTPAAGF");
    tmp_msg_0.max.assign("CIKJBRMMXKDUYHCESXGDPHRIQNVQLWYPKCQZTBVIUVLOFMJXXHALOSPMEZAWDPUNPRELDIPFBYTZBJFFACTVWUOGSUGGCRRKIEEDGTJXLWXYFHAJBSZOXFHOYWNZCOJQD");
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
    msg.setTimeStamp(0.12329950572768056);
    msg.setSource(37427U);
    msg.setSourceEntity(109U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(172U);
    msg.reactor.assign("ZRIDBRUHYWPEKZIAMRGZQUZQYJFWDLGDQSLIDQFKNBTOAULDTRQRHWYYITNJMLPLTIAXYGAGRHIRTGUEUDOIVJQTEHBCEAYMNNPGPOBXIKCGSQVVVXKDSMLVNYJSJXXRFCZTKESSWCCDPYSAOJOU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NCDSYYBQMUKLWSXGRFDWXPPHRNGZXKVSDAQPICTUZMOUHOJNBHZFWNZVXZQUBHMIDWIGIMTPVMIZSBCLKDLEIKFIJQKGDAFMHEGSRGATXWAUUXVROLFYJAPXIOTVFJECXWOPPCDULCSXRTPZJRYEFBHP");
    tmp_msg_0.predicate.assign("IARWZWXIPPTPVODBPTFHHAQCXKTMLTKTMSGYQOCAMVLVUGWSKSSQBUSNDIAHYTNLCJFHMKQGZVCERWGRIIKAWMSJTFZRHXNXDEBI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DIKCLNSEPGWCDXGNWLSNAORZAATNQQITRYYXBRMOKXJKKXLNFEANSJVUFDZXHFPWBZFKEASRLCZDBIYXRYUYYVJTGIHPTFAOQWJHXIXRJUVPRQFBGDOACNWOHGSEMACOZHVFVOMETTOBNQWTJPGQLCLLDGPTUTLACSKEMULUQVIZIDGIZXEWMUZQETFFFBRBUHJHDOYUEMGPZVDVPHCMIKBWGMBKZMPWIOJYH");
    tmp_tmp_msg_0_0.attr_type = 53U;
    tmp_tmp_msg_0_0.min.assign("BJQJMFMBGYKFKPPUZVLMTPSNXRHAX");
    tmp_tmp_msg_0_0.max.assign("SYLOIXCUSPEROOLHNAECVZUMMQFIFPZKXZHHQRQEJRUIBWKSFDVKAVWNGNWMQTXJTLLLIXYCNRLAZUZWROQGJGWIMHGOESWYSMLDSGXGVOQEIEYXRPPHEQSDFKLR");
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
    msg.setTimeStamp(0.15961837937502654);
    msg.setSource(43471U);
    msg.setSourceEntity(166U);
    msg.setDestination(51800U);
    msg.setDestinationEntity(162U);
    msg.reactor.assign("SHVJMWHQBGUFTTRJZNDNEJMKVFCAGIMBZZCKPBBUUWOZTLRQJAZELKFHQFPTGIGIWRAXEWNLDNAMIKJEVCQEURPTHBB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YYXTJHFFHSDZUPWLSJIJNEPCWFTYKFRQUBKGKRSQNOWMNFUDMGTAAXQYQLAZRSRIDEIAIVQBYNWVZRXGENABLBXUB");
    tmp_msg_0.predicate.assign("IAHQSKDXUHLRJOY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DPALKJNFONLPCOSPTQYSDQUFEUMWBJMGXMTVXXBAKWIZZYUMYEZNHMROFCCBSZZXQVKOEDLOAIITVYGUKGFPOWKSNNPDPRCWERBIQZHAFJHHLALTRBECTBCMNFGITYBUSSLHPBZBVKDPMQGASTYDTODCKJNELOXVEWIDFRNVTRSGYJJSCCJS");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("IXICAPZHBEWGCKPFNMYER");
    tmp_tmp_msg_0_0.max.assign("SBZMVEQEYCEFMNIFKGEXJMKRTSDALLYYJVPFZPUEWOBTLIUHTKUMYKPACVWFZFQIMNHLLNYYLQKRWVOHVGYYFJQHHUBAZMAHBNFBGBCVAKSXKATIUFTVPZWKQRYCODKNPIU");
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
    msg.setTimeStamp(0.7342615516175727);
    msg.setSource(57568U);
    msg.setSourceEntity(208U);
    msg.setDestination(9510U);
    msg.setDestinationEntity(39U);
    msg.reactor.assign("VPPAEGQRKVQCAZHNIOUNMZRYWXIAWKEZOTUIJ");

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
    msg.setTimeStamp(0.1418075190499012);
    msg.setSource(34066U);
    msg.setSourceEntity(188U);
    msg.setDestination(24092U);
    msg.setDestinationEntity(239U);
    msg.topic.assign("NYAAENAXZJUWWTPKMIOYGXWVGOSJCJXONDFMUGQQIUBOTZJXEUJCP");
    msg.data.assign("CCHCOAIEVFEAIJ");

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
    msg.setTimeStamp(0.1298028694304839);
    msg.setSource(48817U);
    msg.setSourceEntity(100U);
    msg.setDestination(16136U);
    msg.setDestinationEntity(77U);
    msg.topic.assign("GEXDOKXNVZIYNEBMBOTLVUIOECSHAFCINXDMLXZQVNVKARMSNJSOVYGMMXKBQGMLAJRDBJWTULTGFCYNRRUSYRAKVSHEOFPLZIPZPZCWPWMGBSWLPBQADNJOXKASPFHRWVNXKGGCQHFVYEZ");
    msg.data.assign("NFMQTULUWQRRSTFAGOUXTARXIJLFVEWDKCZWIUBIHFZAGGFIMANMZIFJYCCCLSQLHTHPEIUOEASIRPDMOFRTWZDGEYGMFTJSMNLXNRNZVJIEMXSBXRQQXHCKUEXBOEVSXLSYATGWVVHDNVDAPBBWSUZMJCFOYHXSIRIKABVYLNVOONFEQMBSPYUVYHQKOPLQZJETJCUALGGXDWKBYOCHDKWRK");

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
    msg.setTimeStamp(0.47194509042638233);
    msg.setSource(8962U);
    msg.setSourceEntity(36U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(17U);
    msg.topic.assign("KRQRNUHZVWWSWYXOILSGNSMRFYLZODNQEOMZBCKQVOGUEMWFCSBB");
    msg.data.assign("YFXFVCUSYMAKAWSXDCYBUWKIKROLSQLXEBDPELINZIS");

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
    msg.setTimeStamp(0.6717759097155284);
    msg.setSource(56786U);
    msg.setSourceEntity(93U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(120U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {-73, 19, 93, 20, 118, 78, 96, -72, 8, 119, 42, -120, 75, 46, -11, 111, -65, 49, 82, -38, 72, -110, -10, 95, -63, 70, -112, -109, -98, -126, -9, 42, 111, 18, 36, 106, -2, 96, -65, 115, 104, -73, 6, 72, -43, 111, 4, 80, 40, -44, 28, -63, -127, -23, -79, -45, -120, 108, -96, -32, 85, 124, 8, 81, -97, -51, -118, -60, -82, -32, -79, 32, 84, 96, 119, -55, 56, 0, -31, -106, -115, 70, 122, 93, -110, -128, 58, -77, -104, 91, 4, -44, -114, -80, 114, -67, -125, 33, 8, -47, -99, 126, -9, 2, 18, -111, 100, 9, 36, 109, 78, -60, -111, -115, 37, 99, 124, -58, 66, -119, -48, 90, 35, -48, 23, -74, -96, 101, 98, 48, -12, -41, 119, -49, 49, -67, 100};
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
    msg.setTimeStamp(0.7300762234918285);
    msg.setSource(65038U);
    msg.setSourceEntity(169U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(239U);
    msg.frameid = 154U;
    const char tmp_msg_0[] = {62, -48, 78, 80, -10, -103, -119, -98, 1, -127, 64, 108, -117, 120, 13, -58, -39, 91, 26, 26, 72, -42, 99, 101, -98, -70, -85, -109, -26, -92, 91, -35, 109, 18, -65, 12, 50, 42, 92, -108, 30, 13, 64, 103, -62, 50, -83, -95, 37, -59, 116, 102, -32, -91, 84, 79, 126, -126, 94, 126, 32, 74, 83, 32, -93, -66, 42, -31, 110, -112};
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
    msg.setTimeStamp(0.05541586975448565);
    msg.setSource(34004U);
    msg.setSourceEntity(207U);
    msg.setDestination(60420U);
    msg.setDestinationEntity(244U);
    msg.frameid = 117U;
    const char tmp_msg_0[] = {5, 53, -61, -60, -108, 121, -96, -111, -43, -63, 126, 78, -60, -15, 26, -99, 99, 15, -61, 77, -77, -32, 46, -44, -31, 126, -87, -28, -103, 18, -17, -60, 116, 62, -70, 39, 123, -58, -52, -105, 118, -55, -125, 58, -115, -34, -21, 97, 28, -54, 71, 19, 123, 78, 117, -11, 110, -30, -8, -15, 24, 106, -57, 9, 3, -34, 71, 104, 94, -116, -8, 4, -15, 77, -11, 58, -47, -44, -116, 0, 5, -10, 52, -47, -60, 3, 70, 101, -22, 74, 48, 77, -27, 105, -84, 18, -7, 89, 107, -118, 41, 30, -6, 43, -104, 53, 3, 32, 75, 79, 91, -64, -4, 11, -100, 104, 117, -46, 90, 29, -21, 106, -3, -27, 5, 28, -58, -5, 87, -108, -103, -3, -34, -112, 55, -99, -17, -3, -78, -56, 118, -51, 50, -102, -70, 64, 60, 36, 32, -37, -120, 70, -118, 41, 47, -33, -24, -44, 9, -32, 14};
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
    msg.setTimeStamp(0.3745378653474193);
    msg.setSource(53841U);
    msg.setSourceEntity(53U);
    msg.setDestination(43051U);
    msg.setDestinationEntity(192U);
    msg.fps = 114U;
    msg.quality = 171U;
    msg.reps = 250U;
    msg.tsize = 210U;

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
    msg.setTimeStamp(0.8177228157126876);
    msg.setSource(15265U);
    msg.setSourceEntity(235U);
    msg.setDestination(40842U);
    msg.setDestinationEntity(36U);
    msg.fps = 153U;
    msg.quality = 245U;
    msg.reps = 183U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.6043288889457591);
    msg.setSource(23554U);
    msg.setSourceEntity(7U);
    msg.setDestination(4901U);
    msg.setDestinationEntity(91U);
    msg.fps = 252U;
    msg.quality = 228U;
    msg.reps = 187U;
    msg.tsize = 164U;

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.74974696007503);
    msg.setSource(3885U);
    msg.setSourceEntity(28U);
    msg.setDestination(49915U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.0251070617120015);
    msg.setSource(33127U);
    msg.setSourceEntity(10U);
    msg.setDestination(11418U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.6990842855746723);
    msg.setSource(51120U);
    msg.setSourceEntity(250U);
    msg.setDestination(12556U);
    msg.setDestinationEntity(202U);

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
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6788184690954916);
    msg.setSource(22851U);
    msg.setSourceEntity(131U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8362104605491988;
    msg.lon = 0.6082916580554213;
    msg.z = 0.6398412460588744;
    msg.z_units = 185U;
    msg.radius = 0.5198244671210933;
    msg.duration = 27874U;
    msg.speed = 0.5020923323801819;
    msg.speed_units = 106U;
    msg.popup_period = 35779U;
    msg.popup_duration = 1858U;
    msg.flags = 40U;
    msg.custom.assign("SMVUAVPFDMZDCMCHUPIBGRFOVDKWVPFXHVRJCRGKEZJDVXJNYKOHKUKFRBPVSEZUUMNGCRTSMPKLYIKNWOPYQQONOCCXXJDOYEOTPKAIFGVRBVSLNAMNFQUILXJYQWZLSHWALOJTMHFSXQCLLIGYCHJGHNPRAWIRUIATOHKIYPUMDWOFBBGITLXTA");

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
    msg.setTimeStamp(0.39779209269402593);
    msg.setSource(64562U);
    msg.setSourceEntity(118U);
    msg.setDestination(28686U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.8107074469689346;
    msg.lon = 0.7646279769981539;
    msg.z = 0.39977469963502654;
    msg.z_units = 217U;
    msg.radius = 0.058828751940982915;
    msg.duration = 20786U;
    msg.speed = 0.6005901065943687;
    msg.speed_units = 127U;
    msg.popup_period = 57918U;
    msg.popup_duration = 15969U;
    msg.flags = 100U;
    msg.custom.assign("FUHQMRBZJOJMMWKFJGUNYWEPKAYCQVXABGVEOPVUFSTGLTOIVBACIKSGFNXIYOIOOJMQNCDZRWSJHBFDXWDGC");

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
    msg.setTimeStamp(0.5360562767912119);
    msg.setSource(363U);
    msg.setSourceEntity(220U);
    msg.setDestination(467U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.8985118094938654;
    msg.lon = 0.6954517046632219;
    msg.z = 0.1028399412712151;
    msg.z_units = 206U;
    msg.radius = 0.8248887303462396;
    msg.duration = 22459U;
    msg.speed = 0.6292231622848333;
    msg.speed_units = 31U;
    msg.popup_period = 17425U;
    msg.popup_duration = 44783U;
    msg.flags = 136U;
    msg.custom.assign("ZOUENBUDFVGDWYHXAUGUHVKVPOZYTNZEZFVSHGNNDYTEXTDJTUQYCLRHQMJ");

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
    IMC::RemoteState msg;
    msg.setTimeStamp(0.3238920756660024);
    msg.setSource(41204U);
    msg.setSourceEntity(23U);
    msg.setDestination(52733U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.8311324550581828;
    msg.lon = 0.5969091273854084;
    msg.depth = 150U;
    msg.speed = 0.007453172600730862;
    msg.psi = 0.40210334563576255;

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
    msg.setTimeStamp(0.4449425470976769);
    msg.setSource(9231U);
    msg.setSourceEntity(13U);
    msg.setDestination(20860U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.25362591878783214;
    msg.lon = 0.6030921275635601;
    msg.depth = 221U;
    msg.speed = 0.691429747131743;
    msg.psi = 0.21847939884320022;

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
    msg.setTimeStamp(0.6712472181978159);
    msg.setSource(13093U);
    msg.setSourceEntity(159U);
    msg.setDestination(2111U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.14408778690497426;
    msg.lon = 0.03728989959444018;
    msg.depth = 16U;
    msg.speed = 0.8689656887091014;
    msg.psi = 0.8691844492769194;

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
    msg.setTimeStamp(0.5719906470792011);
    msg.setSource(3710U);
    msg.setSourceEntity(8U);
    msg.setDestination(39635U);
    msg.setDestinationEntity(179U);
    msg.label.assign("JNTNDKWCVIJZDEKOYALKFCXMRWHHOJMNZLJTFEKKVJCLARQQDAMOUAXWPDZRMMSGKWEZCIYQHRSZVHHFNQDGFGGIOXIFNOAHVCGTEUMBYPWSKNYMXFYIGXKUJPELJKDSQOUSIJPHBIFPPOERQQVAFYEBERLZVRYTMMJTSNUUST");
    msg.lat = 0.6142723369696049;
    msg.lon = 0.3699174089820769;
    msg.z = 0.15075567399099765;
    msg.z_units = 237U;
    msg.cog = 0.8007862203297583;
    msg.sog = 0.9035505094587912;

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
    msg.setTimeStamp(0.32937385003047326);
    msg.setSource(38243U);
    msg.setSourceEntity(159U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(6U);
    msg.label.assign("UUOJATCWORMVLCKDCLJVBLOMMBICSUFRRHJNCYYOMUXFRHRBIDCNSZGNEJPQVZIVOSMYFPDPPGHWGKOE");
    msg.lat = 0.26250222065163464;
    msg.lon = 0.718398352936088;
    msg.z = 0.14509988111918237;
    msg.z_units = 104U;
    msg.cog = 0.4352119225028178;
    msg.sog = 0.7781634473160667;

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
    msg.setTimeStamp(0.6746254684417476);
    msg.setSource(10035U);
    msg.setSourceEntity(74U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(30U);
    msg.label.assign("ZAZRRXDTKPOZUQAPWJJRSTGEMJVTYGMTZMHRDNHBGNCKCPMYVKUXJMWUHCWLBAXEKCIDOKJQYXKWGLMFXGKVSAXVQGLSHODQDSDEREDOSPJCFLBLHTNTEUXYRLTWBNCCLKFYYZMWYQNMQFQSKUEEXNOBVEYPWRTHPGEUBLA");
    msg.lat = 0.07042863673793565;
    msg.lon = 0.8909313996313841;
    msg.z = 0.6533210976974269;
    msg.z_units = 66U;
    msg.cog = 0.6658502571157348;
    msg.sog = 0.8542201364586675;

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
    msg.setTimeStamp(0.05405463872590932);
    msg.setSource(57646U);
    msg.setSourceEntity(218U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(181U);
    msg.name.assign("AXBVRTHJEKMVYZPIKIKLCXWTXPMCRTGUWHPRFEPYBTRLKQDOABCOGDDUOFJPCSTQCZGULBMGJWDOVQHJSBKYBXRIOIKKSBQMNLEZLQIUOYOVVXJIZAPJBOPZCAFWZQLGNZMNRNPZEYUMFZHFVYGYFFAQMEEPDMKAGDSNJRRQWHFLIB");
    msg.value.assign("JHFSBGLGHCGPPKULAOCECWZACMOHKUYTMFHYBUEMNFCMQOFEVAJBTLAJYRDXPRJCQWTZHXWPHZVKEOYSPWRTRBAIPBIUNAJOQMIDGYWPLZSSXSIVUHUNQXJBFDDDWQKYXVYXYXGCRTFWSCETLMWYOQRNVMZLVELXQAUGXOARAOFJGKUHDIINYCJERSVDDWHDEVGQQTJTQKZNBRLECILR");

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
    msg.setTimeStamp(0.849880897087631);
    msg.setSource(64448U);
    msg.setSourceEntity(31U);
    msg.setDestination(41710U);
    msg.setDestinationEntity(149U);
    msg.name.assign("OFBQZQCAONBAXMDYCSQVRDLZBUULXVHDOEWQKNGJIXKKLQGITYNPQIPYJDTCHXALUOZZUZIQVGNUSSGAPPDCYAWMJFXUQEENOEWIYGWIZRTJMCFZLRS");
    msg.value.assign("ZNCKTFOTOHSAZYHGKMNVJPETXPICOKDIWRRRZFVHZJELURKSWPTGFNMLDHMBHTJYXQMPPRGKSJBIBNBMAWOQHKDOGPQCLCGAQVCDUILWPNJFZPEISHOPTOVRSJNYZWOSESNJCLVIXLATORMJUOGXHBBHUMCIDBQFDTDYLRZAYUMZMISSLNXZULBYYYKAQNVLXXEVUKXKGVZWEWRVEEDRQYGJUFCFFXIUGBAEFASYJKTBQ");

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
    msg.setTimeStamp(0.6627892480464738);
    msg.setSource(58625U);
    msg.setSourceEntity(48U);
    msg.setDestination(23411U);
    msg.setDestinationEntity(74U);
    msg.name.assign("TYNRSOWYQPYJVCSZUESBOCRVBXFCWSUHDGEUYAIXFFZZZKPUDVXMSXIPUMIEDRHGNBGYJQGFKAAIREHKJFLRNPMARLXPMMTRFWMAFLNFTC");
    msg.value.assign("BGPEXUOIMQHBMMWNUWFFXSQLBDEUYQCNFIJVNRCHXYVHWBCGEAFYXUPJEIGKSZDWZLPZXMRJMEBRGAJOJCQVNRVNLCTKASAJSSAOPUKQIPDGBZLXVGQRANGUCUFEJTUQHEDADQGONZFLLQGHDXTVV");

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
    msg.setTimeStamp(0.8064086036826658);
    msg.setSource(15321U);
    msg.setSourceEntity(66U);
    msg.setDestination(62973U);
    msg.setDestinationEntity(177U);
    msg.name.assign("YGPEUBMPUETSLBVZMMNFZOAIDEBWIVWZIGKIVNMWSIZKLPKNYYOFXFNQQRYXEHNFRJCCHCDUGSHTABMBFLHPDUUQWPJRVOOKNKRYLFFOMWMYEIAKJVQZBBJO");

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
    msg.setTimeStamp(0.9985660358277383);
    msg.setSource(30184U);
    msg.setSourceEntity(31U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DIVZMWBXFTUFPBQKLLVJNTRVBEPBCXGZONKVVGOAYJCDHSXKNJYLNFEQPWEAPAYHGKQCJJURSLZNSBSRJFQLUROFPWNZBXHPMBFMOXJPHQUUSNHLKAPOEIAOFRLGQWWYOTMVTDWOMWQDAVERZULIIHSCVLCUXVSWXCTZCAFNDQDEHLNUYPKK");

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
    msg.setTimeStamp(0.5508042870364354);
    msg.setSource(50559U);
    msg.setSourceEntity(157U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(24U);
    msg.name.assign("DBLYZHVZKMBWMYOXARTWXPYAQFCRNHGMYPHN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OVJREMPOWWQTABPEKPIUYEBHANVNHNAKHVVBFCNJUBQUQNOYEIRVKOBZHTFTIPDBFDAPJBQCCEARYDCPGJELYHQTAXRFZWXJTMJGXFSSUDCSWSSLKOTZMQFQAKINLQMMPQZEFKTDKOWBXMNCOG");
    tmp_msg_0.value.assign("FMLKFYEJKTCCKBWVWHHVOIYZKAXCAAUZRSPGVHISSWDNONXECTC");
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
    msg.setTimeStamp(0.7439361525644079);
    msg.setSource(34066U);
    msg.setSourceEntity(29U);
    msg.setDestination(10566U);
    msg.setDestinationEntity(221U);
    msg.name.assign("AYFBXOUNMKDVXBYEFIPWGIRPKVMHTKQHEVVTZORJMSSWCXTJBPJQENDQLXA");
    msg.visibility.assign("EBZVLWZAZMMZAJGQNYGMPVJMWLRQBVWEJBMTBNPTRGLNDRPXDCWEAJCWKKUHMSACXIONVQLWCTBUWLXJYIYTPWDCOCGPNDRCXFYGOSUPXIKGTOLZSHMLVZDSTFNXCQMSJIPYRPEUTKODODGBBGOIRFEZAZDFMSGBE");
    msg.scope.assign("ASHMCAVPADKFZEWSBJMEEHWAJZIAJTEPMVRYM");

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
    msg.setTimeStamp(0.025583556885180214);
    msg.setSource(61115U);
    msg.setSourceEntity(74U);
    msg.setDestination(2874U);
    msg.setDestinationEntity(146U);
    msg.name.assign("OVEIATBYOIZVGPKNCOEDKWDAGLUQGZNCRRDYUP");
    msg.visibility.assign("NJSCVPWRMGXJYSYJUWUOHXVSZYIVAHQSLICYZTXZFKRCWRDTPNWKUTBUPDCXLAODJODZHTAEOUDLQPRQKHVJYONTSVHHYEKYMRHKXECTMPYOPRVPLXULQDVJMJRLGXXBCJXITWBFKGDPBHGQZFZBMUCGOFKGITUBZNFKQONIQWACMFLKLNMHASARWTDBIEGVEFJQPYVNGJ");
    msg.scope.assign("NFZYSJPEDLFGEOYHLJEZBGSZDOVUAKMWDTTSQNLBASWESOAEDTEHIGMVGMSWPPPFCNXMPOLZCWKWQTXOCVFVPLUTNCSYFABJBREVINCLQNJWQPUAGSGHDCWXVWNHKMLIFJRZKHSJNBDHVYOQHYBMNASNRAKOKYUEMQMRRUPZOYDZVQKKAXOQMLQKBKVFFTGTETUXGYIICMECUHLZAHVYDIZRWIPGYRQJIAJXRXJXBFUPCWZJUFXBRGLOUIX");

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
    msg.setTimeStamp(0.04768962798769505);
    msg.setSource(12261U);
    msg.setSourceEntity(109U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(173U);
    msg.name.assign("TBWINVTETBJUXPXNOOJNKHXNYLYKWJRLWQZTSWEDXGWLCFSIPDQUPUZQGDMIPRDCOVQLYSSZBAKBUAPRATVMNBYHEYKAYROPWMFVVKPXFZIXCDXGAQRHUJEXBHZKTSBBMHTKPBACZWAWNJWOCOFRFNORJWMDYINAHN");
    msg.visibility.assign("AXQPUPCRZSHZOCELPIICENYHGVAFVFYAODFGZBNNNKYUJZKDXRYUVYKMFWHZPLSJVUCQJCAVJRSESBDAC");
    msg.scope.assign("POZTHLPNVUALTUUNMTCJKCEASXZXGZAOCHWCXRMYHEAZAQCJBOBKHWGUDAEICSVROIZERPKESJMYQOUNLUDIMAGUTRJUIDRPWQFAILLRYNEPKBXDPXWYSVKPIGBFJNCPDBDBKKIQDEGVWFEYJWYNZXTQHHFOGLFGHYDRSOKBMGKVILUMTPBSMRJZCWTVVFFLJSAXJFXSQCFNLTHKTGZNQBOLYONGINDSHZYBWVQMZXRMQW");

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
    msg.setTimeStamp(0.20552593186334134);
    msg.setSource(63638U);
    msg.setSourceEntity(138U);
    msg.setDestination(13329U);
    msg.setDestinationEntity(36U);
    msg.name.assign("PYBGSZOTEHEJOVSCCNHMVSZIWQGAFQMMAJCAJMRWDNZNSPXHQWQTWJPPWIBADRRUJSFIFDHCWFHEIBYNKOOSFNPXMYFQBKHXIJBTTXCVEU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZGGVEDSEAKLFWSJCDFXUJIUNAYRPWYFKAYGXQADZWVPLOLQTCQZSWFMNMCQFHZKWFRE");
    tmp_msg_0.value.assign("OZRFADTFFJMHLYFNHDULFRWMIOTFEITQPVWXZXRVIQZJNJCVEYQRRGMGMAOBHPNKXDXURLGRNTLNISBBKMYFNAUWIVWUHBSKDSVLXTIUZEDMBXRGTSWLZNAANDSUQZJICQES");
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
    msg.setTimeStamp(0.278646443724872);
    msg.setSource(25732U);
    msg.setSourceEntity(34U);
    msg.setDestination(49122U);
    msg.setDestinationEntity(201U);
    msg.name.assign("ZGZUPFKWAEACATEBWGPLNCZURQUOLCLSVKAWSJMKUNMMVJKIJJEXGIZPTXRORRBHTTOCFENLMBACOWVGHKOSKJYMUXTVHOONGOJAGDPNXSXELIDWYQLITXMAWDKRUWPBNBPRHFLMWJAVSZKHCQFCVZHYCETIYMXLEHGRDBRFLVPQUHQQFIOIQJRLNFVPDPBWNCMDTYXIPAZBTVTDHYFED");

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
    msg.setTimeStamp(0.04200932855323558);
    msg.setSource(55109U);
    msg.setSourceEntity(124U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WPAZAHSHBI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MYEXPBKSBDAHUUGYZJWVTTBFPKNZYDBPGPDUXXCMOAHCSWOMPXNHFDJVKBVQWKZQGSJRJHCQUDOYYAEDAWVIOVZACLBSDOHHOTAUATXTFRK");
    tmp_msg_0.value.assign("PVIOALHGXVABICLDDNGAYMHDMOWOEKIOQEBOZKLQYITRQDRVIXDXXOLFCYUOWUVCFSDTPEVXGDHEXZBJFTZNJQRJCKQMTEEFCHOGRMPHUSSWQEDILYZJUPUZABHBHIKSZYSOTNUNETCOLMVQAAJYGYHSGVGTSQ");
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
    msg.setTimeStamp(0.7111226436533583);
    msg.setSource(49832U);
    msg.setSourceEntity(144U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ZMQYPKOOJOTPGXTQGPGAUVYDTNAMXMBC");

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
    msg.setTimeStamp(0.8738267847530434);
    msg.setSource(7456U);
    msg.setSourceEntity(61U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(4U);
    msg.name.assign("RBZSFDRRUXMNWUZUASHXQCWTNDSXAURDCIFOHIWYNRFRBHSPUZTQEMDOQNXHGXMPQTKCKTLWTYRIVIMOLPBENSDMJLPAGQHDGFJRJWYAZNTWBGHGTSKULFGPAJOHQGFPYMZIUJACBPBEQOUAYPWTMVLXXCMEDKGVIXJNBVNWQAKUCOELZJVGEWCZZVDLRK");

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
    msg.setTimeStamp(0.019990420623221206);
    msg.setSource(35313U);
    msg.setSourceEntity(80U);
    msg.setDestination(14796U);
    msg.setDestinationEntity(43U);
    msg.name.assign("IFAIWCXHMNDGRZIOSWXAGFWVOUMPKDUCQMHYIGZNIXGZJHBQXCLFRVWOJXKDWANPQJQFBJRIELDHIJPPHBTMBVKZJYNNEVZEAHVBGSEDNJRKEQPCOWYPDSNATGASUELTXWULXVLFUORKUWKPOLDCYZBYKITGPOSPVDTLTYGYKYUUYCEKDXIHROFSERSZJTQZMNIFURBGMPGTFCZZFBMOOBEXVCJETXQLBYAHRNACLSVDMTJWQNK");

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
    msg.setTimeStamp(0.7293470210240067);
    msg.setSource(49057U);
    msg.setSourceEntity(58U);
    msg.setDestination(34300U);
    msg.setDestinationEntity(15U);
    msg.timeout = 988282332U;

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
    msg.setTimeStamp(0.24477661665490413);
    msg.setSource(29762U);
    msg.setSourceEntity(152U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(165U);
    msg.timeout = 4245148196U;

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
    msg.setTimeStamp(0.6477993456427158);
    msg.setSource(61394U);
    msg.setSourceEntity(19U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(161U);
    msg.timeout = 3213187691U;

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
    msg.setTimeStamp(0.16378098110723205);
    msg.setSource(20032U);
    msg.setSourceEntity(207U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(126U);
    msg.sessid = 2786231938U;

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
    msg.setTimeStamp(0.5006515870730902);
    msg.setSource(7268U);
    msg.setSourceEntity(235U);
    msg.setDestination(17423U);
    msg.setDestinationEntity(202U);
    msg.sessid = 2878519632U;

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
    msg.setTimeStamp(0.5442794366913488);
    msg.setSource(19797U);
    msg.setSourceEntity(238U);
    msg.setDestination(9340U);
    msg.setDestinationEntity(183U);
    msg.sessid = 157209412U;

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
    msg.setTimeStamp(0.02008708132777204);
    msg.setSource(22508U);
    msg.setSourceEntity(162U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(239U);
    msg.sessid = 455202562U;
    msg.messages.assign("UTWMQXXPRQGAERNDEYOCVZXAVPEMADPGFASPYPTZPYUOHSUFHTKKGWVRXHXBMTKUNIQVSBDLUWBRNLUJOJYZMWTXYWAEAWLMSPKECIMXWJLPHBZERKBCNKNECLFPBUJTEKGRPXNXDGSSXFLTGDOJFOILDFUMRUOZJTQKMILIOZHNJZKDOHMW");

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
    msg.setTimeStamp(0.4946845498998711);
    msg.setSource(6632U);
    msg.setSourceEntity(142U);
    msg.setDestination(60601U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2547329408U;
    msg.messages.assign("IVWCJBTSPWTOZQSTPTMODZEVLQKXNGKNXSDLMKJEZVZRTSWIHLMWFGDIWJQXOURF");

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
    msg.setTimeStamp(0.2183839881893157);
    msg.setSource(41246U);
    msg.setSourceEntity(166U);
    msg.setDestination(9459U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2775520591U;
    msg.messages.assign("UXHXYIZDHCEEVGPAWEYQKSYWXNHZIQBGYDIWVUHBEZPPMTRGGFIEFXGJADRPHOADQEVOPYGMJSLGWONEPPQWCIKNMKGXMGXDASKIRURCOYWOEVDOWRXAGALSTUFQOJKZOTWYSFVCQUVHYDOMLKPBZZABDZN");

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
    msg.setTimeStamp(0.24575547678735277);
    msg.setSource(44883U);
    msg.setSourceEntity(2U);
    msg.setDestination(47836U);
    msg.setDestinationEntity(106U);
    msg.sessid = 41583118U;

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
    msg.setTimeStamp(0.5721269450776951);
    msg.setSource(59792U);
    msg.setSourceEntity(126U);
    msg.setDestination(57225U);
    msg.setDestinationEntity(79U);
    msg.sessid = 4037257032U;

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
    msg.setTimeStamp(0.8964462889304732);
    msg.setSource(41683U);
    msg.setSourceEntity(85U);
    msg.setDestination(1625U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1077682447U;

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
    msg.setTimeStamp(0.5252095707869819);
    msg.setSource(13850U);
    msg.setSourceEntity(154U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(131U);
    msg.sessid = 636659729U;
    msg.status = 234U;

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
    msg.setTimeStamp(0.3053936016327058);
    msg.setSource(58461U);
    msg.setSourceEntity(236U);
    msg.setDestination(59938U);
    msg.setDestinationEntity(26U);
    msg.sessid = 219896184U;
    msg.status = 167U;

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
    msg.setTimeStamp(0.2551605705854131);
    msg.setSource(14421U);
    msg.setSourceEntity(210U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(160U);
    msg.sessid = 3798316633U;
    msg.status = 127U;

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
    msg.setTimeStamp(0.42594632516309827);
    msg.setSource(15082U);
    msg.setSourceEntity(108U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(141U);
    msg.name.assign("GIMVCTSQYNUOZJVBGHBPALHOHKBXNDFTELQTCBVGYZAZXVPDLSLZZCVBIECTSCBAVMFGWRFRMWVSUICEMOBQAKBFHVOFWOIFQDCNDCYEPOW");

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
    msg.setTimeStamp(0.46714753772631523);
    msg.setSource(23451U);
    msg.setSourceEntity(32U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(73U);
    msg.name.assign("HKJSCYEEUXDWZVYXWCQHILRKOI");

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
    msg.setTimeStamp(0.7310838443079818);
    msg.setSource(62693U);
    msg.setSourceEntity(120U);
    msg.setDestination(4291U);
    msg.setDestinationEntity(24U);
    msg.name.assign("UVNHKMDSGXDXKLZLMEKGHZRNSO");

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
    msg.setTimeStamp(0.779240628895926);
    msg.setSource(57970U);
    msg.setSourceEntity(118U);
    msg.setDestination(33306U);
    msg.setDestinationEntity(253U);
    msg.name.assign("PGMOZOCTDRJEHHJLAEZPGQIYSJKMJFWVQJLUVHRSCKDTLWEASXIMRPULNZDNXBVFLNCDNHQBTVULKWPTKHRFIPEVFZDMZILGKRLOWCBONFFBENOJ");

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
    msg.setTimeStamp(0.44653484042634306);
    msg.setSource(27215U);
    msg.setSourceEntity(232U);
    msg.setDestination(25911U);
    msg.setDestinationEntity(83U);
    msg.name.assign("TTOGELGHPUPXHSUJYGUOKHDOMLKHMBBSANDNOWVUSOEDGPEKQOBXNAEIYJYMXFIAJCCZARMUQQHJRDARRAEMHFRNPWYJL");

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
    msg.setTimeStamp(0.13267564786491848);
    msg.setSource(6696U);
    msg.setSourceEntity(62U);
    msg.setDestination(10193U);
    msg.setDestinationEntity(80U);
    msg.name.assign("VQEPPVESMQZKWUXAFYAHFABNRPAFVVUHMOUBOJTLBYTXOJFTJTMDCTBDYJRRSTLGSGWJMTONDLPEVGAXLXUGECTYZIHCZKAKSSPLZVDHXEKQFPCOBEGUOJWVYAGU");

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
    msg.setTimeStamp(0.7304369481277603);
    msg.setSource(39188U);
    msg.setSourceEntity(233U);
    msg.setDestination(52801U);
    msg.setDestinationEntity(153U);
    msg.type = 80U;
    msg.error.assign("CZSWHUOUIIPPKLSRUASTVBRWQJMLSCYKMVJADYVWYETXNDUQUXSMKYQNITGGAX");

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
    msg.setTimeStamp(0.17121288184879357);
    msg.setSource(1046U);
    msg.setSourceEntity(22U);
    msg.setDestination(58261U);
    msg.setDestinationEntity(180U);
    msg.type = 145U;
    msg.error.assign("PYTWNLEGCMRKSYIECPLLGPIPZLIFQPTPGLXWCPMHVZZYYDNURAQAWIIBCYKACYZXWOFUYESKDTOUAAHIZFWPATRVQHFUQFSMKWULVFXTMXJKFVJXYBIEQUMHSIWGJNNHXCTBZCXKHJZRMSRMHKOUDUDFRVKAZGKBTMNGQBVLOBPVJEENREBLONLQGWZJOBQJWMQZVCDOEXDKAYWYCGXRNSBIDMEPJRTSISQUOJXHJBVDERTHNODCSASFDHVLO");

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
    msg.setTimeStamp(0.8079552185381607);
    msg.setSource(62550U);
    msg.setSourceEntity(36U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(213U);
    msg.type = 2U;
    msg.error.assign("RQDVLGDGIYEHZUBETBZMJTCMSWTWWKCLHFQDNPUBYJYZKBKTIOTLENIJFUKXPVKCFQOXZVHEXNHAFPBDDCSUEMPSIXRNUKWLVGCOIOFJYNPLQGXVORZVPUYRSYXAJTQKWUFQNJAPULEEXSWOMVMVJGBZLAEDHAYGCSVSYFTYVDWRSKHILBQWEWFHBMDZANKGIFAHLSGNQDKJORPOXL");

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
    msg.setTimeStamp(0.40428741052036465);
    msg.setSource(14615U);
    msg.setSourceEntity(94U);
    msg.setDestination(57584U);
    msg.setDestinationEntity(26U);
    msg.seq = 7246U;
    msg.sys_dst.assign("PJLSLACMHDPPAAYWYQFIZSSFNHOGJPRDHCWMJSNCVEZIODGDJFNOSMFBZQQZHZSSTJHRDLVCTUOKPVSMIVBSOXUHDXFMSBNKWFPRLXPLUUJITTYYVJ");
    msg.flags = 116U;
    const char tmp_msg_0[] = {120, 126, 76, -126, 99, 87, 83, 44, -107, 6, -34, -29, -5, 8, -92, 37, -66, 108, 11, 48, 104, -40, 103, 21, -104, -47, 115, -112, 29, -83, -110, 86, -12, -44, -27, 66, -46, 92, -17, 33, -123, 34, -21, 125, -81, 81, -89, -106, 98, -8, 26, -39, -88, -94, 103, -1, -68, -123, -29, 43, -53, 69, -48, -124, -55, 31, -100, -8, 44, 111, 27, -18, -93, 9, 106, -77, -33, 100, -13, -56, -127, 117, -81, -34, -11, 103, -8, -80, -40, -4, -12, 104, 105, 30, 88, -102, -88, -102, -43, -34, 115, -111, -33, 49, -84, -88, -45, 115, 52, -110, -127, -75, -63, -45, 99, -65, -13, 106, -96, 88, 120, 23, -3, -38, 75, 64, -49, -82, -120, -100, -4, -83, -99, -33, -128, -49, -91, 113, -83, -63, -116, -38, 7, -62, -59, 32, 97, 18, -5, 46, 123, 48, 96, 46, 3, -86, 24, -13, 7, 3, 56, -87, 53, 109, 99, -90, 101, -70, -81, 114, -107, -84, 33, 12, -62, -66, 49, 17, -36, 49, 46, 82, -96, -4, -48, 79, -16, -75, -32, 18, 4, 93, 88, -96, 83, 121, 52, -56, 49};
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
    msg.setTimeStamp(0.3654346472403258);
    msg.setSource(48949U);
    msg.setSourceEntity(52U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(170U);
    msg.seq = 53146U;
    msg.sys_dst.assign("ZBRMABAEUGGZOTQJGL");
    msg.flags = 204U;
    const char tmp_msg_0[] = {126, -15, -88, -94, -89, -81, -93, -17, 56, -61, -93, 56, 40, -100, -38, 119, 113, -14, -2, -95, 43, -113, -55, 96, 22, 117, -126, 98, -123, 24, -109, -3, -30, -94, -50, -57, -51, -51, 116, 12, 118, -105, 21, 69, -26, -79, -52, 79, -15, -11, 111, 117, 6, -43, 112, -38, -98, 57, 50, -12, 81, 100, 76, -69, 75, 60, 100, 45, -101, -12, 87, -5, 98, 70, 8, -115, 10, 101, -118, 83, -29, 102, -47, -124, -45, 103, 114, 82, 36, -115, 23, -62, -30, 77, -107, 91, -10, -12, 34, 36, -16, -67, 17, 16, 46, 68, 47, 112, 34, 102, -95, 62, 109, -30, 23, -119, -110, -60, 84, -82, 59, -100, 33, 41, -2, 23, -92, -104, 2, 103, 76, 28, 106, -10, 6, -30, -13, 68, 37, 120, -53, -70, 56, -48, 39, 80, 62, -38, 20, 24, 10, 111, 30, 1, -20, -63, 23, -39, 111, -57, 59, -50, -21, 91, -94, 85, 9, 71, -38, 83, 70, -78, -58, 104, -58, 14, -34, -122, -72};
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
    msg.setTimeStamp(0.3097355366736265);
    msg.setSource(24376U);
    msg.setSourceEntity(127U);
    msg.setDestination(48646U);
    msg.setDestinationEntity(237U);
    msg.seq = 37254U;
    msg.sys_dst.assign("ZMZWDIBTCYUFMXBJTYFTVDS");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-35, -39, 9, -52, 77, 6, 67, -90, -50, 85, 21, 79, 28, -105, -74, 66, 6, 52, -80, -70, 61, -82, 26, 59, 48, 62, -96, -75, 112, -106, -36, -45, 55, -128, -74, -2, 54, 117, 86, 87, -26, -127, -67, -35, 3, 118, -108, -55, 102, 36, 112, -77, -108, -64, 97, 34, 5, 115, 99, 116, 62, -94, 60, -105, -64, -106, -125, 46, 102, 26, 88, 98, -100, 2, 15, -74, 28, -60, 60, -67, -96, -9, 36, -92, -113, 84, -33, -89, 98, 7, 36, -114, 87, 125, 119, -8, 70, -19, -41, 41, 2, 45, 47, -115, 66, 82, 126, -24, 116, 3, 99, 112, -78, 36, 18, -66, 53, -120, -91, -45, 78, -105, -107, -77, 31, 120, 2, -75, -25, -115, 124, -29, 48, -56, 45, 117, 69, -46, -106, -9, -82, -58, -94, 36, -30, 73, 108, -83, 55, 88, -57, 70, -62, 88, 10, 25, 26, -32, 18, 33, 37, -12, -41, -111, -114, -39, 68, 28, 98, 70, 21, -112, -119, -11, -34, 98, 4, 89, -49, 123};
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
    msg.setTimeStamp(0.9239394432258402);
    msg.setSource(49012U);
    msg.setSourceEntity(97U);
    msg.setDestination(44662U);
    msg.setDestinationEntity(26U);
    msg.sys_src.assign("HDQDUHLGONMOFONHRGEBLMMOIUOKUFKRUDYPYJFCXMIWAWEPYMUYJBOAFPJLKTJTGUQLPZJJOTBNVESRSOQHNZVXYDJSAVTKZKRQFSUTCVEAGCMCZDIDKAWMY");
    msg.sys_dst.assign("ZCAIPKIQBVTLRPLDHVMVBLJS");
    msg.flags = 182U;
    const char tmp_msg_0[] = {105, -38, 57, -5, 81, -66, 22, -89, 81, 23, 70, 67, 126, 28, 114, 114, -11, -93, 76, 19, 23, 108, 106, 121, 1, -46, 60, -70, -99, -106, 30, -37, 42, -115, -87, 49, -105, -111, 1, 92, -64, -106, -51, -19, -16, -63, 99, -82, -8, 101, -44, 37, -118, 77, 94, -58, -4, 78, -78, -34, 33, 94, 37, 87, -63, 57, -1, 60, -79, -89, 22, -32, 100, 19, -72, 60, 66, -61, 104, 20, 98, 30, -97, -75, -68, 4, -59, 104, 62, 122, 88, -17, -92, 92, 0, 38, 57, -48, -60, 2, -66, -11, 77, 22, 25, 85, 95, -13, -83, -37, 55, -41, -56, 61, -8, 52, -6, -103, -100, 85, -28, 122, -76, 30, -18, 88, 125, 59, 64, 84, 65, 80, 29, -56, -78, -5, -43, 15, -29, -72, -73, 59, 15, 112, 126, 86, 105, -111, 88, -125, -36, 84, -27, -117, -127, 16, -85, 6, 82, 45, -98, -57, 96, 85, 82, 111, 12, -53, -7, 106, -40, 12, -72, -117, 61, 4, 47, -118, 20, -119, 73, 52, -78, -35, 29, 8, 4, -100, 71, 10, 108, -43, 6, 0, -93, 13, 59, -39, 76, 51, 111, -80, 39, -77, 71, 114, 27, -31, -59, -49, 117, -33, -3, 36, -2, -94, -103, 16, -109, 30, -45, 122, -50, 43, -72, -80, 100, -31, 25, -125, 83, 102, 27, 51, 58, -14, 98, -97, -121, 122, -37, 66, -118, 11, -42, 62};
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
    msg.setTimeStamp(0.02269491210319463);
    msg.setSource(56747U);
    msg.setSourceEntity(45U);
    msg.setDestination(4444U);
    msg.setDestinationEntity(24U);
    msg.sys_src.assign("WVZJDLCRGBSKWFRYSSHIHZZCNXJOEGVVFBZUBNLNHDMUSCNQWLYCDAQYEAJWKQLNUCYAMOFQSEOZEUGASNQGIJTLIKPSFHHNMYMNDWWMSFQLZCHDXODTMTZKTEQGWPRJIIKIYFAYSGYLPNODCZWTZAJQPKPJWEOMOATCYQEIELGIKUGMRBMVZRPUOCCVOLPRIJPRDGQKHUJVRXBUBLGVXADEXRBRYKWPUVHATVXDVJBFFANPBUKHTOFTEHTF");
    msg.sys_dst.assign("LGVGXFCNLLDTKAJFBVPDEVYWVFXXUQSHIH");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-62, 73, -56, -97, -119, -52, -102, -21, 91, -25, -3, 34, -95, -19, -39, -55, 39, 85, 26, -74, 44, 50, 12, 72, 19, -110, 90, 70, -82, 61, 85, 43, -93, 20, 87, 46, -23, -2, 8, 105, 45, -30, -30, 43, 103, 17, 1, -26, 35, 13, -83, 91};
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
    msg.setTimeStamp(0.16611682022948138);
    msg.setSource(52507U);
    msg.setSourceEntity(17U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(17U);
    msg.sys_src.assign("YTTOQMPKETQQFHBTZINPCYDCYWRIWTJBWOEAHUYSOZNROGFKSHBAHSJPMDBCPPZWORSDLWICVJJHEWCEIILNOXGGMMDRNGIWFXUMXZADPUHZQRIBJUREQTUYNKDAYAUSVNFWFLAYIRYKKNZYQFNTQLUGZAHICKLPNXJDJ");
    msg.sys_dst.assign("VMFSXSURBXBZLWLZTJMGRFBVCKUYZUQWOPXYGNMYHLAAWEBPHGECECKIUJTHEHEPQPJDAHQBRMORQPKLZMX");
    msg.flags = 219U;
    const char tmp_msg_0[] = {64, 88, 108, 32, -69, 52, 100, -48, -115, -88, -121, -89, -10, 101, -46, -19, 94, 38, 57, 90, 116, 117, -13, 68, -18, 99, -101, 20, -54, -2, -64, 71, -119, -100, -55, 10, -14, -57, 20, -91, 85, -31, 72, -62, 10, 94, -93, -59, 53, 90, -78, 40, -53, -57, -84, -17, -98, -105, 36, 34, -75, 4, -61, -21, -115, 106, -52, 108, 87, 52, 10, -8, -127, -28, 25, -4, -37, -73, 62, 53, 34, 30, 68, -5, -33, 27, -96, -59, 40, -40, 77, 4, -53, -50, 67, -120, 23, -102, 31, 11, 5, -110, 14, 112, -36};
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
    msg.setTimeStamp(0.28017354414512885);
    msg.setSource(24684U);
    msg.setSourceEntity(179U);
    msg.setDestination(50013U);
    msg.setDestinationEntity(102U);
    msg.seq = 22632U;
    msg.value = 128U;
    msg.error.assign("UQHZTCWCEGSASTDIAGMMZJITMAPHLHQNTXJIMEPAXVCBOSGTYWVEKCBOCXYJFNLGBJVFDOTZLOHJBYDDJQXSGGKYNLFBFFUXHDSFOPWYNRLXKXADOIEYVEYEZARSOFBKSRRWDBHDOREYHXAITVKUMTFROPTGKNWQMKRMVCWR");

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
    msg.setTimeStamp(0.8059448224084538);
    msg.setSource(17647U);
    msg.setSourceEntity(96U);
    msg.setDestination(10160U);
    msg.setDestinationEntity(223U);
    msg.seq = 23014U;
    msg.value = 54U;
    msg.error.assign("PBJPDUTFVCBWSBJILXFHRRZRDFMDXYWLIZMFHSEYEUZNPKGUYZOFHHHVXZEUNJALERVXSJNHUWTKTCSTMBHCZQQYUSGKBMLPRUVAMTXWLQSIGNTFTHAHANCBBMQIGNOSVBIXGUYEZJ");

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
    msg.setTimeStamp(0.8629837442563506);
    msg.setSource(8077U);
    msg.setSourceEntity(118U);
    msg.setDestination(39136U);
    msg.setDestinationEntity(210U);
    msg.seq = 35070U;
    msg.value = 129U;
    msg.error.assign("BBAQVSPULTPQCOPOOACFNCNSSGXCJZIUIUABXLGAMLGVBYZFJIZNWPGMSMMFBZAABNVXFIDBVYWCSCXQLYARLQKDQYVEJZIVTXQEIMDDVYTPUSBRKTMRRENSHOXZAEHKNJKHPRSYGXEDJCKKPMGYMOBRXDCUKTJQWIWEFHFTVDYHSQBAWEPEFEFIHGUUHWAUDJHZXGZOSTWQFKWJXL");

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
    msg.setTimeStamp(0.4567045542738266);
    msg.setSource(26707U);
    msg.setSourceEntity(203U);
    msg.setDestination(531U);
    msg.setDestinationEntity(21U);
    msg.seq = 18490U;
    msg.sys.assign("PZBSATEXEEZFYGFJBASQGKTDIRMEMRCSRIJTYXFRTCLKERGOHWIUNQDHMVHYCEQFLUXYHELAUIPSOABDNIHCVBQIZIPJGWEALUUQLSJMRCTXJJQMTBTVOFZHVVUATNFITFSMOLHRNMMVVFAOQZLRZWLYEOSXPCTNLNCMOKGDGSQZBSDVWKDKUQKWJHJDYXBMABNAGPXXHJPHJWZYWVCVPBZCPWFUKWADUNCLKSQPRUKFINDOIWXBZG");
    msg.value = 0.8636189723003606;

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
    msg.setTimeStamp(0.994697268834054);
    msg.setSource(63318U);
    msg.setSourceEntity(11U);
    msg.setDestination(61817U);
    msg.setDestinationEntity(6U);
    msg.seq = 33313U;
    msg.sys.assign("ONXANDXKYMYMLMTDKIURFWGGGUPABVJFNFCBYHVSXHODUKOXWFUJJJEEPUQOWCXKVGOJSNXWRPLQMTQNNPTUSCAFVBIRHFHRPNILTIWBIBHZWJWXIZLKXSQFQTVMJEVUUCLKQYTZJGTAFPLAEWFSGWHTDCUREDRJOFEPEMZICRMBRGPZEUADYLSZVHZNOQAZOXGHCNESMGIYAVKVBHEVQRLKWYIQLMXZLTCYQDOCGDKKTAODPSDNSAYZRPMJHS");
    msg.value = 0.07085892620853596;

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
    msg.setTimeStamp(0.6721862482188474);
    msg.setSource(62438U);
    msg.setSourceEntity(249U);
    msg.setDestination(33598U);
    msg.setDestinationEntity(168U);
    msg.seq = 27954U;
    msg.sys.assign("KKLQXSFKBITTMROICSNLQFSKIREYVHGLMDVWIDYTGJJAKVBWWWKNDZMGLUQQMDYQHTOAFRUYACDSUTJRYGNOPVDROVFGVZMOXHCCXFWGOQHXUPUVFRDZHCEEPJCAEXYMNNSNNMIJZICEAGHPUVIKJYWDZTSTNIOAQXMXTFALEIPERPTCAZNYKVPLMMNBWAQERVGRSWTFWUJSXSZQYLEOZLGBHBQYEBBWBHBOUBJJPZZ");
    msg.value = 0.9294016520230233;

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
    msg.setTimeStamp(0.8420189948913345);
    msg.setSource(17412U);
    msg.setSourceEntity(166U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(247U);
    msg.seq = 59687U;
    msg.sys_dst.assign("TEXSZSHTWPVBIFCVIKOFPTXUO");
    msg.timeout = 0.37909301678813956;

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
    msg.setTimeStamp(0.9445445742795201);
    msg.setSource(55256U);
    msg.setSourceEntity(156U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(21U);
    msg.seq = 9078U;
    msg.sys_dst.assign("BHAAESBWQFXRUXLREOVMNILAPEBSDCCKMMGKCAIFHKUUJUQLPOCECBOECGDUARVAFKEQCGDCVZLASWDPWQKQOONYTYEDWRJELMGPHNTSBYBFJNXRONAYWUDUCVZNWVYWFUPLAFZHXP");
    msg.timeout = 0.42751734720580004;

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
    msg.setTimeStamp(0.6285322701648327);
    msg.setSource(45882U);
    msg.setSourceEntity(196U);
    msg.setDestination(282U);
    msg.setDestinationEntity(21U);
    msg.seq = 28901U;
    msg.sys_dst.assign("IWNEATUDEOMSUQZMCLFFAPEVPSEXGTTSUEWEOZTWUXLVCLOZBDWKOYGXQZNRRHBAKEMOZUJINNFGJJQEPLDOONZCTQFPTBKMWYKFFKPJBDYHCQQUMPRVLHYSDAWAFHUJWEHQGFVHSYVKXVCIDANGGKCIXGRRLKSXCHSCJPWIZIBWSPKOLTTXQLNMVDBGBUZNFNBRWMHIQBIZMYIDLRCAYLNACFSMPXJRDJRMYAUOXGYIYVVE");
    msg.timeout = 0.36289813036782315;

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
    msg.setTimeStamp(0.6875230066316824);
    msg.setSource(42114U);
    msg.setSourceEntity(115U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(252U);
    msg.action = 68U;
    msg.longain = 0.5212852302814988;
    msg.latgain = 0.2416790729150461;
    msg.bondthick = 5914582U;
    msg.leadgain = 0.011117343776996358;
    msg.deconflgain = 0.9373689739697649;

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
    msg.setTimeStamp(0.9048579837309557);
    msg.setSource(39640U);
    msg.setSourceEntity(87U);
    msg.setDestination(19275U);
    msg.setDestinationEntity(201U);
    msg.action = 33U;
    msg.longain = 0.9860416700341209;
    msg.latgain = 0.1345389088264325;
    msg.bondthick = 3650341740U;
    msg.leadgain = 0.31905000852098664;
    msg.deconflgain = 0.7439867162735285;

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
    msg.setTimeStamp(0.5428856227500843);
    msg.setSource(12443U);
    msg.setSourceEntity(89U);
    msg.setDestination(4187U);
    msg.setDestinationEntity(114U);
    msg.action = 127U;
    msg.longain = 0.2802138189335518;
    msg.latgain = 0.6095965165057143;
    msg.bondthick = 723416654U;
    msg.leadgain = 0.4899870801952484;
    msg.deconflgain = 0.8167125987439134;

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
    msg.setTimeStamp(0.32782984230704204);
    msg.setSource(46085U);
    msg.setSourceEntity(118U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.19917813290903086;
    msg.dist_min_abs = 0.7265931503265963;
    msg.dist_min_mean = 0.02396017574990783;

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
    msg.setTimeStamp(0.28374804476021953);
    msg.setSource(23711U);
    msg.setSourceEntity(240U);
    msg.setDestination(60227U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.7187208253087901;
    msg.dist_min_abs = 0.9388655789217552;
    msg.dist_min_mean = 0.6533924564412497;

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
    msg.setTimeStamp(0.3650813969352886);
    msg.setSource(3732U);
    msg.setSourceEntity(63U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(19U);
    msg.err_mean = 0.5114737387726834;
    msg.dist_min_abs = 0.9983634816813858;
    msg.dist_min_mean = 0.2717735860606588;

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
    msg.setTimeStamp(0.5781748101367858);
    msg.setSource(55620U);
    msg.setSourceEntity(202U);
    msg.setDestination(24990U);
    msg.setDestinationEntity(64U);
    msg.action = 32U;
    msg.lon_gain = 0.4831948653545085;
    msg.lat_gain = 0.5768178026555685;
    msg.bond_thick = 0.2928511765946217;
    msg.lead_gain = 0.8505146740076833;
    msg.deconfl_gain = 0.037353852394307996;
    msg.accel_switch_gain = 0.4262520068738468;
    msg.safe_dist = 0.6952526143601766;
    msg.deconflict_offset = 0.5215282551105146;
    msg.accel_safe_margin = 0.9063878059258419;
    msg.accel_lim_x = 0.537220583578157;

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
    msg.setTimeStamp(0.7578428618921663);
    msg.setSource(18817U);
    msg.setSourceEntity(227U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(90U);
    msg.action = 221U;
    msg.lon_gain = 0.2086012790932058;
    msg.lat_gain = 0.321686675312269;
    msg.bond_thick = 0.8284300231443167;
    msg.lead_gain = 0.07603054825543043;
    msg.deconfl_gain = 0.18094387447736826;
    msg.accel_switch_gain = 0.8083838758489035;
    msg.safe_dist = 0.4126497474030565;
    msg.deconflict_offset = 0.370683430200172;
    msg.accel_safe_margin = 0.7761489452421371;
    msg.accel_lim_x = 0.8242274251439629;

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
    msg.setTimeStamp(0.5511444474059727);
    msg.setSource(2308U);
    msg.setSourceEntity(129U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(43U);
    msg.action = 33U;
    msg.lon_gain = 0.2838031911114217;
    msg.lat_gain = 0.5628050730114726;
    msg.bond_thick = 0.8763716031693204;
    msg.lead_gain = 0.7387442557983027;
    msg.deconfl_gain = 0.6020995020295135;
    msg.accel_switch_gain = 0.09037343001869025;
    msg.safe_dist = 0.40881432489333647;
    msg.deconflict_offset = 0.27745266275387614;
    msg.accel_safe_margin = 0.8246223143261681;
    msg.accel_lim_x = 0.9542480595450987;

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
    msg.setTimeStamp(0.2929701759529414);
    msg.setSource(47566U);
    msg.setSourceEntity(100U);
    msg.setDestination(65247U);
    msg.setDestinationEntity(219U);
    msg.type = 98U;
    msg.op = 222U;
    msg.err_mean = 0.9623481048708062;
    msg.dist_min_abs = 0.8688218197225692;
    msg.dist_min_mean = 0.19673233107468824;
    msg.roll_rate_mean = 0.057138461375122684;
    msg.time = 0.4406387438092979;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 241U;
    tmp_msg_0.lon_gain = 0.06198822555685157;
    tmp_msg_0.lat_gain = 0.9870918055979563;
    tmp_msg_0.bond_thick = 0.1826667928532214;
    tmp_msg_0.lead_gain = 0.18951054336655426;
    tmp_msg_0.deconfl_gain = 0.9540140619594453;
    tmp_msg_0.accel_switch_gain = 0.6833201201818001;
    tmp_msg_0.safe_dist = 0.7369893395049003;
    tmp_msg_0.deconflict_offset = 0.16269906940400025;
    tmp_msg_0.accel_safe_margin = 0.6967122919376242;
    tmp_msg_0.accel_lim_x = 0.6663503535104537;
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
    msg.setTimeStamp(0.38478088534336674);
    msg.setSource(10117U);
    msg.setSourceEntity(177U);
    msg.setDestination(32722U);
    msg.setDestinationEntity(113U);
    msg.type = 197U;
    msg.op = 23U;
    msg.err_mean = 0.8967181115432796;
    msg.dist_min_abs = 0.5392394069395021;
    msg.dist_min_mean = 0.5063580817991167;
    msg.roll_rate_mean = 0.36904095774310086;
    msg.time = 0.9848625912974325;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 201U;
    tmp_msg_0.lon_gain = 0.7408621541833229;
    tmp_msg_0.lat_gain = 0.9143523696368441;
    tmp_msg_0.bond_thick = 0.34903743331167925;
    tmp_msg_0.lead_gain = 0.6200179315694655;
    tmp_msg_0.deconfl_gain = 0.8040576493108578;
    tmp_msg_0.accel_switch_gain = 0.27169645165201095;
    tmp_msg_0.safe_dist = 0.638084932730255;
    tmp_msg_0.deconflict_offset = 0.3946101608481919;
    tmp_msg_0.accel_safe_margin = 0.5609901623241058;
    tmp_msg_0.accel_lim_x = 0.38273545381705787;
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
    msg.setTimeStamp(0.8333180857503569);
    msg.setSource(42832U);
    msg.setSourceEntity(182U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(219U);
    msg.type = 179U;
    msg.op = 1U;
    msg.err_mean = 0.296203181521408;
    msg.dist_min_abs = 0.828728510883525;
    msg.dist_min_mean = 0.33665997086833965;
    msg.roll_rate_mean = 0.8221095921450912;
    msg.time = 0.8053370147408672;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 94U;
    tmp_msg_0.lon_gain = 0.3683195182809197;
    tmp_msg_0.lat_gain = 0.834474063415789;
    tmp_msg_0.bond_thick = 0.6048941378716418;
    tmp_msg_0.lead_gain = 0.0050329485047470035;
    tmp_msg_0.deconfl_gain = 0.44233928394853894;
    tmp_msg_0.accel_switch_gain = 0.11081552327851307;
    tmp_msg_0.safe_dist = 0.5297214988482039;
    tmp_msg_0.deconflict_offset = 0.051986341969849637;
    tmp_msg_0.accel_safe_margin = 0.8389366812530147;
    tmp_msg_0.accel_lim_x = 0.47173017998585365;
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
    msg.setTimeStamp(0.46986326140643797);
    msg.setSource(46477U);
    msg.setSourceEntity(50U);
    msg.setDestination(40414U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.17041911247157027;
    msg.lon = 0.9356857848888537;
    msg.eta = 2226548831U;
    msg.duration = 35503U;

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
    msg.setTimeStamp(0.7168717485054449);
    msg.setSource(29304U);
    msg.setSourceEntity(254U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.45835126172507845;
    msg.lon = 0.8947483722703597;
    msg.eta = 3934833634U;
    msg.duration = 31699U;

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
    msg.setTimeStamp(0.8046885704967065);
    msg.setSource(62756U);
    msg.setSourceEntity(183U);
    msg.setDestination(41926U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.31900338661106853;
    msg.lon = 0.6722696060278739;
    msg.eta = 3793640189U;
    msg.duration = 37946U;

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
    msg.setTimeStamp(0.3577899135030931);
    msg.setSource(1725U);
    msg.setSourceEntity(48U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(187U);
    msg.plan_id = 48124U;

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
    msg.setTimeStamp(0.49238566048626653);
    msg.setSource(4919U);
    msg.setSourceEntity(96U);
    msg.setDestination(2715U);
    msg.setDestinationEntity(215U);
    msg.plan_id = 11106U;

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
    msg.setTimeStamp(0.5796167113394086);
    msg.setSource(16048U);
    msg.setSourceEntity(225U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(15U);
    msg.plan_id = 30966U;

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
    msg.setTimeStamp(0.42833125082307355);
    msg.setSource(5572U);
    msg.setSourceEntity(36U);
    msg.setDestination(39165U);
    msg.setDestinationEntity(222U);
    msg.type = 22U;
    msg.command = 164U;
    msg.settings.assign("LNGLVLTHLDAWORRJQTJZSLZAPYCVPGMDDSFWBQUOTERWBVIOEVHWIVRCPNHDNNXLGRYFSWYESXOXPIHZMGDRQKUGXTHFMZPLBAVVTJUKGZIAXZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10689U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TOCTROKSCGAUDURVYBQMZOPFOGBCALDVNBLYBSSEYTIUBFJYHRWKMCJBRULYSAECNEPCWGKMLHCTHCCPHDZWBAWQRWGQDQWQHKLZHTXAOBSLVGLFZVOJQTFFHYRZTZZGWYPKSENEGUVCPBEPNYUODOWIQXMIMZSWVJFUFKPGZNSQVIYOUHIIBMFDOPFXATGSWAXRHQZXAJKEREHNILNMKVXAIRJXDMXNXYLEVJIGKNAPXSDINFM");

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
    msg.setTimeStamp(0.9289354724882005);
    msg.setSource(32057U);
    msg.setSourceEntity(5U);
    msg.setDestination(61630U);
    msg.setDestinationEntity(116U);
    msg.type = 35U;
    msg.command = 240U;
    msg.settings.assign("ADLTFEMGXXEPEXFRTROJMOTXQBZPUJORRNIKMTPFRJWCVYSHHVUJUAIFWEWXVM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5891U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IJLCMRIPLYHWJVSFUTZGPOSXXSMJKQVUBJNVUFTXNZJWRWCRWAHJZDACDAAXYDLZMXHODTPBGWGJGEYKRQWQMZPMWVHHNYBKNUJRAWZVNVFDZAKELGPVIJSBFETEZVQKGVDBRDYJTATHYNEWBFFUBKLQMIZOTMPOIHPOOFLPBCSSQBIQXXONKKYUGWAXLEFFSIXCSRTADXQN");

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
    msg.setTimeStamp(0.05876585594164674);
    msg.setSource(25691U);
    msg.setSourceEntity(92U);
    msg.setDestination(50877U);
    msg.setDestinationEntity(127U);
    msg.type = 70U;
    msg.command = 188U;
    msg.settings.assign("RSIRBPXYFPGLWOAIYHLWINNXYSAOVTFRSNTFENCUYCXMQPGIAOEMOKDVKFGJVIMLGUUJILGZASRGPKAWHBDODPXYWAWTAJAMDWMJYFZVVDCVYLABIOXICGRFJCSPNXXRKZMWJCQVXRQUTOBH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22295U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9092452165361937;
    tmp_tmp_msg_0_0.lon = 0.9343325741852252;
    tmp_tmp_msg_0_0.eta = 1424075724U;
    tmp_tmp_msg_0_0.duration = 6485U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UAXYDZXKTDKROMYGQKYLCVHAEAIPEYWUSVHWYBXCRSVZXOAFHPOPSFEVCBNCVZRAQSTMGLPYSMMIHDVNVOZFEYMSFCRLSLUBBDJMQHZNRFDUMQCQYKDODRNAMEOETTZUASKGBMJOLAMPQELUNWNXJHNTEIJGRHWGWCIX");

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
    msg.setTimeStamp(0.7785175236338909);
    msg.setSource(25004U);
    msg.setSourceEntity(3U);
    msg.setDestination(11608U);
    msg.setDestinationEntity(19U);
    msg.state = 33U;
    msg.plan_id = 24092U;
    msg.wpt_id = 178U;
    msg.settings_chk = 3229U;

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
    msg.setTimeStamp(0.37288445561332384);
    msg.setSource(9480U);
    msg.setSourceEntity(223U);
    msg.setDestination(29554U);
    msg.setDestinationEntity(219U);
    msg.state = 208U;
    msg.plan_id = 63410U;
    msg.wpt_id = 32U;
    msg.settings_chk = 18584U;

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
    msg.setTimeStamp(0.1978522495526217);
    msg.setSource(48902U);
    msg.setSourceEntity(41U);
    msg.setDestination(4197U);
    msg.setDestinationEntity(82U);
    msg.state = 239U;
    msg.plan_id = 50671U;
    msg.wpt_id = 28U;
    msg.settings_chk = 36861U;

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
    msg.setTimeStamp(0.0835783984938604);
    msg.setSource(41268U);
    msg.setSourceEntity(85U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(251U);
    msg.uid = 219U;
    msg.frag_number = 50U;
    msg.num_frags = 109U;
    const char tmp_msg_0[] = {-42, 66, -91, -89, -76, 15, -112, 18, -60, 70, -102, 68, 118, 77, 19, -85, 37, -74, -19, 90, -27, -51, -8, 0, -113, 104, 18, 91, 117, -95, -51, -60, 95, -112, 76, -41, 59, 9, -50, -115, 7, -81, 22, -80, -27, -7, -1, 75, -128, -9, -96, 113, -84, -46, -101, -74, -125, 12, 26, -115, -21, -91, -60, -64, -85, 81, -51, 119, 91, 80, -73, -6, -56, 31, -68, 40, -70, -41, 109, 44, -86, -127, -78, -36, -127, -66, -89, -80, 91, 37, -116, 19, 74, 93, 105, 68, -76, 75, 83, -124, -45, -22, 121, -20, -59, -99, 121, 34, 87, -118, 82, 94, 38, 95, -126, -76, -20, 2, 71, 85, 32, -76, 15, 16, 78, 60, -95, 35, -95, -2, 57, 61, -84, -55, 8, 4, 110, 114, 38, -71, -87, 100, -48, 124, -71, -76, -99, 31, -96, 24, -114, -69, -6, -118, 37, 112, -8, 15, 11, -32, -17, -44, 13, -19, -25, -49, -48, 101, 91, -27, -58, 50, 59, 90, -25, 2, -72, 62, 101, -97, 49, 27, 105, 81, -82, 67, -8, -86, -6, -18, 78, -118, 110, -46, -6, -50, -32, 104, 83, 73, -127, -117, 57, 126};
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
    msg.setTimeStamp(0.4431262112462312);
    msg.setSource(11506U);
    msg.setSourceEntity(98U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(82U);
    msg.uid = 251U;
    msg.frag_number = 61U;
    msg.num_frags = 51U;
    const char tmp_msg_0[] = {-113, -113, 92, 10, -18, 82, -57, 80, 5, 109, -31, -107, 81, 72, -2, -90, -102, -115, 62, 100, -73, 83, -115, -127, -21, -31, 91, -98, 32, -63, -87, -87, -22, -48, -11, 108, 3, 100, -37, 23, 25, -78, -90, 23, -125, -30, 55, -34, -97, 20, 97, 44, -51, -111, 48, -80, -109, -75, -94, 36, 74, 25, -57, 78, 100, -68, 51, -86, 121, 113, 50, 90, 114, 56, -110, -27, 10, 53, -118, 31, 101, 101, 57, 70, -127, -76, -6, 69, -76, 63, -108, -85, -112, -34, -74, 48, 18, -20, -100, -1, -84, -37, 85, -57, -8, -86, -23, -103, -63, 67, -14, 50, 41, 117, 15, -73, -4, 118, -83, -75, 10, -49, -100, -82, 11, -35, 7, 113, 19, 44, 88, -108, -12, 121, 79, -116, -87, 28, -126, 122, -78, 83, 119, -84, 59, 39, -27, -123, 76, 5, 84, 16, -21, -10, -110, -69, -87, 73, -50, -70, 103, -37, 55, 84, -22, 93, 52, -84, 58, 50, -115, -96, -32, 46, -124, 87, -106, 108, -93, 50, 11, -71, 86, 107, 94, 88, -75, -51, 16, 8, -17, -125, 46, -106};
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
    msg.setTimeStamp(0.19328156625384663);
    msg.setSource(10524U);
    msg.setSourceEntity(195U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(137U);
    msg.uid = 235U;
    msg.frag_number = 19U;
    msg.num_frags = 140U;
    const char tmp_msg_0[] = {29, -35, -98, -77, -107, 121, -37, -122, -93, -45, -88, -55, -119, -28, -72, -12, -77, 14, -110, 70, 86, 6, 8, 96, 64, 92, 124, -31, 98, -30, 58, -65, -54, 1, 23, -11, -75, -99, -30, 94, -2, 28, -2, -70, -80, -94, 31, 15, 14, -68, 58, -47, 126, 33, -20, -6, 81, -10, 81, -27, 9, -120, -102, 113, -57, -118, 46, -13, -93, -5, 70, 92, -61, -63, 49, 74, -4, 15, 10, -121, -8, -22, 70, -63, 76, -40, -91, 67, 30, 99, -76, -57, -24, -5, -40, 84, -99, -1, 35, 104, -114, -111, -75, -19, 15, 92, -123, 104, -14, 30, -58, 83, -69, -34, 29, -65, 87, -108, -94, -64, -57, -32, 121, 87, 16, 50, 105, -86, -72, 126, 1, 40, -90, 45, -28, -114, 91, -5, -115, -31, -47, -120, -88, 94, 21, -55, 18, 31, 69, 77, 55, 39, -93, 52, -107, -107, 107, 21, -12, 59, -48, -59, 118, -52, 67, 24, -128, 24, -63, -25, 96, -90, 73, -89, 50, 2, 38, -18, -60, -110, 10, -77, 64, -104, 107, 114, 48, -12, -64, -47, -12, -4, 82, -107, 108, -7, 19, -60, 81, 41, -9, -47, 64, -70, -13, 15, 2, -89, 58, -63, 70, -102, 61, -67, -53, 21};
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
    msg.setTimeStamp(0.6817608692196558);
    msg.setSource(31728U);
    msg.setSourceEntity(126U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("OGPOYPPNRIFVLDUXMGPQF");
    const char tmp_msg_0[] = {-9, -70, 126, -45, 12, -125, 61, 75, 82, 109, -29, 119, -17, -81, -22, 45, -29, -24, 62, 61, -105, 110, 82, -119, 72, 51, -73, -37, 95, 90, 54, 86, 54, -16, -120, -125, 31, -117, -66, 0, 73, -20, 102, -127, -91, -52, 112, -91, -29, -123, 19, 82, -85, -104, -8, 5, 82, 32, 104, 74, -123, -24, 40, -62, -35, -60, -33, 67, -86, -121, 71, -56, 20, 36, -68, -17, -18, 98, 80, -84, 28, 88, 106, 121, 24, -10, -126, -22, -96, 105, -24, -60, 38, 72, -53, -98, 82, -11, 14, -57, -80, 113, 14, -24, -88, -87, 100, 101, 51, 65, 90, -39, 57, -113, 41, -25, -108, -42, -78, 26, 112, 12, -59, -49, 106, -87, 88, -20, -9, -46, -102, 46, 118, 117, -53, 43, 13, -128, 119, -63, -73, 35, -26, 111, 124, 19, 57, 57, 39, -97, 17, 19, -65, 0, 97, -43, -113, 108, 8, -106, -52, -56, 96, -74, 33, 81, -13, -105, -72, -124, 59, 39, 57, -54, 92, -29, 113, 125, 124};
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
    msg.setTimeStamp(0.2979853731172142);
    msg.setSource(44607U);
    msg.setSourceEntity(6U);
    msg.setDestination(2503U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("KTWSAFNIUSPZEUEWFVDKKKKXJCCCYOLSKXZRHOZUXJACWHESRAQTGXFINBQWOQLWBPAPXDRUGHDAWOYEDBMLTKWDJFTXVXGBPZSROBHDZBBJHRZNTLFFWECTIYXZSNIRWQGICQWJHMJVVQN");
    const char tmp_msg_0[] = {113, -121, 52, 25, -12, 19, 14, 94, -46, -83, 84, 31, 30, -68, -57, -35, 51, 44, 80, 120, -109, -47, -79, -51, -36, 24, 82, -42, -106, -115, -47, 119, -89, 27, 88, -81, 51, -59, -33, 98, 66, -23, -98, -16, 37, 105, -104, -1, -27, -44, -95, -51, 36, 38, 108, -40, 113, -32, -56, -60, 32, 2, -72, 78, -103, 55, -36, 112, 55, 50, 17, -31, -93, -53, 26, -3, -103, -99, 109, -113, -125, 86, 49, 2, -69, -1, -116, 73, -88, 36, 102, -125, -47, 20, -6, 108, -17, -114, -117, 16, -127, 12, -6, 83, -79, 125, 29, 21, -43, -7, 35, -39, -20, 8, -109, -125, -71, -128, 85, -80, -107, 95, 83, -116, -113, 56, 74, -89, 77, 28, 68, 37, 0, 114, 21, 16, -115, 62, -88, -73, 86, -74, 120, 126, -95, 87, 83, 76, -65, 96, 30, -125, -77, 2, 13, -19, 65, 43, 24, -39, -31, -29, -31, -70, -68, -75, 28, 89, 19, 79, -85, -81, -28, 7, 83, -41, 113, -11, -70, -27, 15, 46, -89, -17, 105, 100, -7, -16, 73, 85, -33, 8, 45, -51, -50, -49, 35, 71, -7, -41, -82, -22, 26, -2, -13, -91, 61, -20, 63, -36, -99, 61, 51, -14, 51, 117, -118, -85, -79, -68, -126, -123, -90, 69, 99, -59, -62, 29, -68, 120, 73, 42, 14, 40};
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
    msg.setTimeStamp(0.5438194559870657);
    msg.setSource(46220U);
    msg.setSourceEntity(159U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("MQMUOUESPNYFSOHUXCRIEVLERKOGWOLBBDEDACTWZMCFSDYCHBHWJPUNSMZSJSZYLAXUGBRWYH");
    const char tmp_msg_0[] = {67, 88, 87, 50, -47, -30, 87, 58, 76, -108, -70, -4, -34, -22, 4, 110, -4, 99, 61, 81, -48, 56, 77, 122, 52, 19, 46, -91, -60, 93, 40, -108, -124, -47, 95, 104, 91, 57, -104, 80, 103, 52, 31, 22, 7, -90, -70, -26, 67, 60, -99, 61, -113, -40, 46, -17, 124, 85, -123, -109, -92, 52, -88, 13, -40, -45, -1, 28, -18, 96, 37, -89, -110, 67, 50, -49, -80, 12, 101, 32, 66, 15, 100, -61, -71, 89, 82, 4, -31, -40, 31, 30, 81, 115, -40, -98, -53, 116, -25, 78, 92, 46, -95, 93, -41, -50, 64, 50, 124, -48, 6, 102, 12, -71, -125, 73, -34, 54, -82, 104, -119, 125, -86, 111, -100, 62, 3, 74, 9, 49, 19, -61, 105, -1, -26, -59, -113, 84, 70, -36, -108, -57, 112, 0, -37, 69, -30, 26, -96, -26, 44, 49, 16, -126, -68, -36, 102, 123, -121, 27, -54, 111, 67, 101, 86, -73, -45, -25, 74, -55, -32, 99, -15, -7, 81, 115, -79, -76, -34, -29, 64, -47, 7, 47, 38, 55, 25, 59, -45, -105, -15, 83, 35, 100, -65, -64, -126, 63, -77, 42, -74, 80, -7, 108, -40, -23, 38, 93, 83, 105, -53, 31, -29, 98, -10, -86, 105, 125, -105, -109, -31, 85, -103, 75, -11, 98, -9};
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
    msg.setTimeStamp(0.8251386259064183);
    msg.setSource(20847U);
    msg.setSourceEntity(29U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.34718337314332903);
    msg.setSource(62290U);
    msg.setSourceEntity(199U);
    msg.setDestination(8698U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.5486385386226379);
    msg.setSource(12851U);
    msg.setSourceEntity(188U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.5618895860499464);
    msg.setSource(23456U);
    msg.setSourceEntity(188U);
    msg.setDestination(57184U);
    msg.setDestinationEntity(245U);
    msg.target = 6631U;
    msg.bearing = 0.9450892994123513;
    msg.elevation = 0.9349188036097065;

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
    msg.setTimeStamp(0.6449601810364861);
    msg.setSource(29575U);
    msg.setSourceEntity(169U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(214U);
    msg.target = 21074U;
    msg.bearing = 0.4160432343626571;
    msg.elevation = 0.05083432474907423;

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
    msg.setTimeStamp(0.0828876622951854);
    msg.setSource(18875U);
    msg.setSourceEntity(53U);
    msg.setDestination(7470U);
    msg.setDestinationEntity(182U);
    msg.target = 33963U;
    msg.bearing = 0.25129035240324515;
    msg.elevation = 0.8235828263018992;

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
    msg.setTimeStamp(0.000533330128903331);
    msg.setSource(60482U);
    msg.setSourceEntity(119U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(202U);
    msg.target = 64736U;
    msg.x = 0.4552166208557108;
    msg.y = 0.8089205413092816;
    msg.z = 0.2094144226196546;

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
    msg.setTimeStamp(0.36984295894313624);
    msg.setSource(18081U);
    msg.setSourceEntity(156U);
    msg.setDestination(27988U);
    msg.setDestinationEntity(183U);
    msg.target = 40448U;
    msg.x = 0.31448246219094256;
    msg.y = 0.4311781647354963;
    msg.z = 0.5692460528006534;

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
    msg.setTimeStamp(0.1693005467109675);
    msg.setSource(61834U);
    msg.setSourceEntity(4U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(145U);
    msg.target = 43823U;
    msg.x = 0.6213275801326431;
    msg.y = 0.5215994420237464;
    msg.z = 0.9303874376702319;

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
    msg.setTimeStamp(0.6407849542027683);
    msg.setSource(28829U);
    msg.setSourceEntity(185U);
    msg.setDestination(45151U);
    msg.setDestinationEntity(78U);
    msg.target = 55872U;
    msg.lat = 0.2204842797536012;
    msg.lon = 0.2502938727766022;
    msg.z_units = 98U;
    msg.z = 0.3196216380154969;

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
    msg.setTimeStamp(0.03374739324824516);
    msg.setSource(52870U);
    msg.setSourceEntity(26U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(199U);
    msg.target = 35238U;
    msg.lat = 0.2774539091961532;
    msg.lon = 0.43244549335563276;
    msg.z_units = 112U;
    msg.z = 0.8960459251462797;

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
    msg.setTimeStamp(0.7674794127788498);
    msg.setSource(36690U);
    msg.setSourceEntity(247U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(121U);
    msg.target = 39107U;
    msg.lat = 0.44426906738807026;
    msg.lon = 0.905844379497827;
    msg.z_units = 170U;
    msg.z = 0.9159214219804984;

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
    msg.setTimeStamp(0.15992785191197967);
    msg.setSource(56523U);
    msg.setSourceEntity(248U);
    msg.setDestination(26210U);
    msg.setDestinationEntity(125U);
    msg.locale.assign("ADYVEPBHZJFAWHVQBICGQEYVYHFJXOLAXIPMXTYXVFRBWOFNLXZMDEQYDGNRWOVEAFOQNKKUDGGOTWFACKBHEZXCLJCUZUISKBCHYRNQSOSOULGTLAUPBVOULGVFMWAIFRZDEEZHXZIBLWKOOWCVUJCINPAKIKBWTQEJTLPUHRYLWMAJYVVJZDKCMZXLDQDKTPCDPSNTD");
    const char tmp_msg_0[] = {-96, -48, -15, 7, -54, 101, -76, -71, 122, 16, 115, 108, -28, -20, -70, -1, 41, -19, 108, -4, 32, 11, 104, 42, -97, 87, -115, 0, -54, 84, 8, -128, -95, 125, 99, -92, -29, 33, -24, 100, 89, -128, -127, -45, 112, 126, 112, 93, -110, 43, 111, 2, -76, 0, 104, 15, -32, -15, 17, -6, 106, -117, 99, -116, 107, 10, 2, -66, -119, -39, 67, 4, 98, -4, -41, -60, 52, -74, -79, -73, 29, 72, 12, 114, 112, 74, 58, 52, 114, 3, 36, 115, 110, -1, 120, -27, -96, 122, -58, -123, -101, 19, -62, 10, -22, -61, -103};
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
    msg.setTimeStamp(0.7962339043555494);
    msg.setSource(9076U);
    msg.setSourceEntity(29U);
    msg.setDestination(11966U);
    msg.setDestinationEntity(131U);
    msg.locale.assign("PFYMEMBRTZOAVGMOGBCRIUCQOIPDFMWTQIPOGQKZVXCUATPSVPZJQSRKAYHTZMQLXHBGMDHSGOKQXFFUKECSITZWLJCLAOYCKFLWEOEFIWRDZBXDXBLITHZDSYHPEHWAHLANGIXPECGWQDVVTIOVIVJFAJJZXXEUNOPBJANKGNICVNUJHNURYMBSDGRUVLYJKTURYLUBWNWLBYAFEXKDRQTEPCQJNTZAWDSWMQEGMLSNMDKSSPUR");
    const char tmp_msg_0[] = {17, -95, 104, -94, 111, -26, -125, -9, -110, 90, -49, 67, -82, 108, -124, 1, 30, 7, -124, 69, 89, -8, 19, 58, -117, 99, -15, 123, 24, -108, -113, 110, 93, -91, -51, 100, -37, 31, -84, 67, -112, 107, 15, 34, 126, 69, -90, -83, -53, -56, 111, 21, 24, 19, 12, -83, 42, 26, -86, 4, 46, 102, 9, -95, 29, -75, 118, 68, -114, -83, -107, -74, -24, 116, 94, 121, -108, -22, 93, 101, 29, 2, -23, -61, -65, 83, 99, 45, -122, -9, 111, 4, -21, -47, -60, -59, -60, -127, 20, -8, -2, 102, -97, -75, 40, 31, 89, 15, -17, 8, -28, -60, 78, -109, 1, -123, 72, -79, 110, 74, -107, 56, -29, -8, 119, -93, -90, 19, -128, 7, 47, 38, -40, 121, -111, -90, -37, -28, 58, 97, -69, 82, 6, 25, 69, 24, -57, -10, -111, 63, -55, -96, -24, 109, 58, 0, 28, 111, -63, 57, -8, 114, 47, 22, -78, -10, -62, -39, 110, -89, -74, 122, -34, 19, -34, -42, -117, 54, 68, -37, 121, -37, 54, 23, -21, 29, 47, 94, 16, 9, -37, -27, 44, -106, 106, -121, -65, 95, 102, -114, 27, 62, -102, -126, -102, -91, 120, -6, -107, 105, -89, -57, -88, 103, 58, -69, 96, 126, -49, 125, -88, 73, -70};
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
    msg.setTimeStamp(0.9824088222040127);
    msg.setSource(312U);
    msg.setSourceEntity(25U);
    msg.setDestination(4663U);
    msg.setDestinationEntity(32U);
    msg.locale.assign("KZUSKGRFTSOOIBVXCKNSSTWSPZYCEELYA");
    const char tmp_msg_0[] = {94, -7, -69, 103, 110, -116, 7, -37, -17, -43, -46, 95, -66, 13, 58, -53, 107, 45, -110, -100, 48, -101, -48, -49, 28, -128, -10, 121, 126, 1, -124, -48, -56, 69, -66, -103, 102, -77, -89, -99, -90, -110, -105, -72, -88, 46, 112, -83, -14, -102, -37, 40, -72, 65, -5, 120, 92, -104, 12, 60, -4, -86, 46, -107, -61, 67, -1, -30, -43, 65, 20, -36, -54, -57, 101, 36, -71, 85, 57, 12, 8, 105, 27, -128, 40, -111, -59, 53, 28, 98, -19, 35, 1, -25, -109, -4, -104};
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
    msg.setTimeStamp(0.06472195769622835);
    msg.setSource(56382U);
    msg.setSourceEntity(225U);
    msg.setDestination(10795U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.23985379949863606);
    msg.setSource(51539U);
    msg.setSourceEntity(52U);
    msg.setDestination(58834U);
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
    msg.setTimeStamp(0.03891116856683097);
    msg.setSource(43134U);
    msg.setSourceEntity(49U);
    msg.setDestination(55045U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.3772097805892911);
    msg.setSource(54034U);
    msg.setSourceEntity(48U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(227U);
    msg.camid = 226U;
    msg.x = 52984U;
    msg.y = 36276U;

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
    msg.setTimeStamp(0.31495435917375136);
    msg.setSource(44501U);
    msg.setSourceEntity(102U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(90U);
    msg.camid = 124U;
    msg.x = 31328U;
    msg.y = 14819U;

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
    msg.setTimeStamp(0.4784304743455292);
    msg.setSource(8283U);
    msg.setSourceEntity(196U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(162U);
    msg.camid = 252U;
    msg.x = 2797U;
    msg.y = 2740U;

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
    msg.setTimeStamp(0.34085306502493684);
    msg.setSource(8349U);
    msg.setSourceEntity(99U);
    msg.setDestination(24457U);
    msg.setDestinationEntity(252U);
    msg.camid = 41U;
    msg.x = 40093U;
    msg.y = 65519U;

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
    msg.setTimeStamp(0.22275172536758336);
    msg.setSource(53020U);
    msg.setSourceEntity(226U);
    msg.setDestination(64376U);
    msg.setDestinationEntity(195U);
    msg.camid = 195U;
    msg.x = 9472U;
    msg.y = 7392U;

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
    msg.setTimeStamp(0.25546956297189927);
    msg.setSource(4579U);
    msg.setSourceEntity(247U);
    msg.setDestination(3910U);
    msg.setDestinationEntity(221U);
    msg.camid = 232U;
    msg.x = 17496U;
    msg.y = 23249U;

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
    msg.setTimeStamp(0.6470436672994444);
    msg.setSource(34837U);
    msg.setSourceEntity(152U);
    msg.setDestination(3506U);
    msg.setDestinationEntity(40U);
    msg.tracking = 138U;
    msg.lat = 0.0004573221202496258;
    msg.lon = 0.30974281967496353;
    msg.x = 0.9804537893635548;
    msg.y = 0.15147850549487984;
    msg.z = 0.1341017966848106;

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
    msg.setTimeStamp(0.36607222520730975);
    msg.setSource(21657U);
    msg.setSourceEntity(60U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(232U);
    msg.tracking = 108U;
    msg.lat = 0.912812033674515;
    msg.lon = 0.03506616293013032;
    msg.x = 0.22578462281733525;
    msg.y = 0.24219516056967472;
    msg.z = 0.7157376169872736;

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
    msg.setTimeStamp(0.8503079055544822);
    msg.setSource(22976U);
    msg.setSourceEntity(142U);
    msg.setDestination(12314U);
    msg.setDestinationEntity(93U);
    msg.tracking = 40U;
    msg.lat = 0.46500589932480496;
    msg.lon = 0.8151730702413835;
    msg.x = 0.17854772192179946;
    msg.y = 0.5412584381775395;
    msg.z = 0.6786538747294037;

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
    msg.setTimeStamp(0.2708558459935668);
    msg.setSource(37634U);
    msg.setSourceEntity(137U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(239U);
    msg.target.assign("KUNZPBTROXIDPTSRNPURSXWCZMNENBOZFZBOPQQWUUKJGXEHFFVLGCSPBAQSNCNZLYJICAHHSZZTVDDKUWYHMXRNWEFIJRHTAFCFMBDZBNQKPHPDVYRIMORLIWVDTDASQQAUUXULMJZDGDJSOAWLLXVPWTHFGMXIOFPIANXCXZTEKTJVCXCOHWGBYEQLCREAJ");
    msg.lbearing = 0.4825645947331656;
    msg.lelevation = 0.08780093761543073;
    msg.bearing = 0.2834528791578289;
    msg.elevation = 0.11565502317903542;
    msg.phi = 0.5365546302382107;
    msg.theta = 0.7446910945988163;
    msg.psi = 0.6714858778231789;
    msg.accuracy = 0.041019357515000965;

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
    msg.setTimeStamp(0.6259710446257605);
    msg.setSource(16632U);
    msg.setSourceEntity(189U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(190U);
    msg.target.assign("IXFDRFXVCCFXOWGQYWDQUMEZIDMOLTAFOEGBZRRGVYLQOVOVQKWPLHITNXTYHUICYDDXDNLAFSXVAEMPUYKTFDPTUZAOJPQRJBDXATKJUKZFHCNPYYTAQMEWBUNTBRGJGISPLVMYJSUGWJIZHBSOYPURBNXCOSSVLDFMPZIHVGZWYTERDHCHHJURNARJEZBOSICMHECPQTLHALXNMCCKNJNAABZFJKKB");
    msg.lbearing = 0.5241443289695644;
    msg.lelevation = 0.8813006180571709;
    msg.bearing = 0.42414726378994205;
    msg.elevation = 0.7871390238924183;
    msg.phi = 0.4401548193259237;
    msg.theta = 0.23472420045736642;
    msg.psi = 0.7307450273353089;
    msg.accuracy = 0.265463670835965;

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
    msg.setTimeStamp(0.4427680743403586);
    msg.setSource(43971U);
    msg.setSourceEntity(87U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(109U);
    msg.target.assign("JPBHKNSADNNWUOMJQJKGRHBJEOZOEWJGFEDXWTVHSSXBICTTRDWIBMKPGKKMRZXIMNYMSLIGDHMJUIQCROXUIZBPKOVOSCGTUUKTSKHCVAWHYEHNXAEGGAZQTDQBTYJLRCYDENRTALMALCQBADHYXUYWIPXVLGZ");
    msg.lbearing = 0.6493112214002976;
    msg.lelevation = 0.02724732572203914;
    msg.bearing = 0.12173520297065477;
    msg.elevation = 0.25262231867101437;
    msg.phi = 0.21240519231238175;
    msg.theta = 0.929856013232833;
    msg.psi = 0.9823195132407159;
    msg.accuracy = 0.5739922241850074;

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
    msg.setTimeStamp(0.3878806244385882);
    msg.setSource(61084U);
    msg.setSourceEntity(213U);
    msg.setDestination(60949U);
    msg.setDestinationEntity(186U);
    msg.target.assign("CAMRLUMSUIPIYQQEAXKOOJSGCGHKSNUDJBHNPRJOHRTEJPFIOVTAZPAZETBZQTOSMFYOCRHDLWLTMUFEIWUPATANIBMDTBGVKJZXACICVMEFKGKXZRWOSEYLQZGJCDFOATYS");
    msg.x = 0.41634849355055115;
    msg.y = 0.3373071212729193;
    msg.z = 0.8898555107805622;
    msg.n = 0.15558059597273577;
    msg.e = 0.7537022600607345;
    msg.d = 0.5781456984461902;
    msg.phi = 0.6657401667986672;
    msg.theta = 0.04528162871377195;
    msg.psi = 0.9976147097496114;
    msg.accuracy = 0.4392486517208273;

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
    msg.setTimeStamp(0.7521689095963383);
    msg.setSource(53521U);
    msg.setSourceEntity(152U);
    msg.setDestination(19303U);
    msg.setDestinationEntity(128U);
    msg.target.assign("BGFUHLGWEAHPDJTNKKJIAMSCGMTQVMJSFBIRNKEBEVLVHVZLGOHFOBCOMJSYZIFEIAIM");
    msg.x = 0.5775272116227169;
    msg.y = 0.7762598316141073;
    msg.z = 0.26166405357086964;
    msg.n = 0.36819552646321685;
    msg.e = 0.7674717087506797;
    msg.d = 0.11681853305097045;
    msg.phi = 0.8985207603609995;
    msg.theta = 0.4586010184360606;
    msg.psi = 0.6589460884446998;
    msg.accuracy = 0.3624258269447439;

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
    msg.setTimeStamp(0.5213349840843421);
    msg.setSource(45714U);
    msg.setSourceEntity(228U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(104U);
    msg.target.assign("JYEFXYIUYLOGCVFVASPWSRNTGHCBYLGXFSJZCEWMGMAHISIMQCDTGBQHVAQOUJCEJDSYEHJQATKZRRRBXSFEGHTMJOKIOVIZCWJFHSNSNTEUBZXWXNMBUEWNPCQYHHAYCVPQZZSNVLROMPKGKGAXOBAEYWAKXPSUMKOWABVHUBPLKRODGMDVVIHIDGMQVJPRQTETDTJYLINCWQNKPUUNBYLFFLPZXAUNILFOFXOUDJTRZ");
    msg.x = 0.5613789502000693;
    msg.y = 0.8788549880716935;
    msg.z = 0.9645709458593354;
    msg.n = 0.6994742190228793;
    msg.e = 0.428083335638211;
    msg.d = 0.32020360718389473;
    msg.phi = 0.8256975583105887;
    msg.theta = 0.8602973491236414;
    msg.psi = 0.41788388575613344;
    msg.accuracy = 0.7123793563199784;

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
    msg.setTimeStamp(0.8482112970968692);
    msg.setSource(39236U);
    msg.setSourceEntity(48U);
    msg.setDestination(43241U);
    msg.setDestinationEntity(179U);
    msg.target.assign("GURQKQQFCFABVHEBYZUVJKXQKFTFGLLDQOERCAWRGQSZBGMLJWSVUJLYZEMISUGXKTIIYNLTUNRMXFOPAAVDOHRRWFEVMYXCRHZDBKNWBJBYFJANXTPTVHPHOHYCIHKDMSWWVCUPYOCJDOILEJGULPWUNQZXSOZUCDPLOERXAKHMYPVSDOXTHVCGCQDEIPEUWVINPTODCSZINXZRASLGLAR");
    msg.lat = 0.934706382733064;
    msg.lon = 0.5622794190111972;
    msg.z_units = 115U;
    msg.z = 0.9959215711281646;
    msg.accuracy = 0.90101642411694;

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
    msg.setTimeStamp(0.16483564881640567);
    msg.setSource(2319U);
    msg.setSourceEntity(177U);
    msg.setDestination(692U);
    msg.setDestinationEntity(11U);
    msg.target.assign("PEWIDYBRBFVFKKIPHGAJCJCOUEKYLZCLTFWWQPSZOGSGEPDAOUJTVLWOYUPXMOYLUSTKIUUMARTEDSJBCTBMZJBXGKRMKSXDSSVEMYJALIJADPD");
    msg.lat = 0.5341435445466302;
    msg.lon = 0.45566091423957733;
    msg.z_units = 133U;
    msg.z = 0.6211608146238213;
    msg.accuracy = 0.9824450221092823;

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
    msg.setTimeStamp(0.4163060336341904);
    msg.setSource(32902U);
    msg.setSourceEntity(107U);
    msg.setDestination(6699U);
    msg.setDestinationEntity(73U);
    msg.target.assign("RFEOVBBHQODMFTRCKMSDLKUJMZYCAVWSWQXGEXVZCRBAWPMBKBKXMZPHHAGTTTIFKILSUDCXOGVNGEDAHQSVCEQSIMCOEPGMTHBRXKJLHSLPZBFYMMINFQNPLNXDFOCQLTCLUXSYBRZAWKZFAWJOXUNTUZPRTDBGHGRGEOMNNZGEYZJHTXKQBRRYOCYFPOWT");
    msg.lat = 0.6682660993689632;
    msg.lon = 0.5021521818523388;
    msg.z_units = 72U;
    msg.z = 0.3093372830722779;
    msg.accuracy = 0.4875273832642901;

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
    msg.setTimeStamp(0.7789760992431801);
    msg.setSource(41326U);
    msg.setSourceEntity(52U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(101U);
    msg.name.assign("TRRKUKRPVBCYZQYWELZWDEOMSJPXKJACXHAVPWTNTACYMSPFUUPETNTUIBNSDZQBNLRAYNBZVIVOPJMXFDFQGKNBEADPSSSHFOIVMMPCYSWHDHLQYZHKAIBFSCISGOOQRORWZOQMEUGUOXYEOVTUYIGJPQFCWHFFMZWBAEBJJZHLUFTKJC");
    msg.lat = 0.9468846455326259;
    msg.lon = 0.7646375992671507;
    msg.z = 0.16417590484659728;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.217735247723718);
    msg.setSource(30241U);
    msg.setSourceEntity(206U);
    msg.setDestination(6655U);
    msg.setDestinationEntity(169U);
    msg.name.assign("UKCVTOBRJFELSUONYBFFSHDRUSXDJWXBMPCWVIQOIAOZBVULGWXMQGQEAMSFIMXHPVFXREZHGKCKMIKAGFSJVKZRKSGHRCMMLQRLZPJRJYBTOAECNRIJXZEKTTDTFZLMOHCIOILQEDLUULIEDHNDFYSBQQWYNLGPCUDVXPBHOIZBGJNXNNYWTOTEAZ");
    msg.lat = 0.1694739484219665;
    msg.lon = 0.6574121418774572;
    msg.z = 0.5608974792639919;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.07106797912859719);
    msg.setSource(41824U);
    msg.setSourceEntity(53U);
    msg.setDestination(45783U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FLIWCOXFNSLCSMSNKFATQZQGRNSPABUWRIMHCUVOCQBCFSBZPQMVLIRQHAGRPYGTGSGJHZFBEUCXATEJJOVQJDHMKCAKIUGTSDNICHWWIYMDBXOKDFYEBAZJAVFNYPXPEPUVTINUGKVCWRDNOTDMTZZLRUWEYFJRI");
    msg.lat = 0.833913021079636;
    msg.lon = 0.0861424222870869;
    msg.z = 0.7668458520096381;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.1895840509139286);
    msg.setSource(41387U);
    msg.setSourceEntity(208U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(11U);
    msg.op = 57U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TYLQOVIOQMMHWHRXGBEALZPZIYUJJZDLXOTEJTMNFXJNMEZJZEJRUGUWAPBYQFACDOGCOCJYQPPVXUQDLWNSGWSDFVGJJTNABOBARIZKAIKHFWHSXYYSOVXHXDPORUKTOURPVLQETZQKJWQKPLIXMYIBPVKUZQTNKAMEWDSRNPVDBCCB");
    tmp_msg_0.lat = 0.8210516690712709;
    tmp_msg_0.lon = 0.9409944617172022;
    tmp_msg_0.z = 0.8654215997531123;
    tmp_msg_0.z_units = 31U;
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
    msg.setTimeStamp(0.3601081163126365);
    msg.setSource(4421U);
    msg.setSourceEntity(84U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(217U);
    msg.op = 154U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BMLIVLUARGMQXQPUQZABBWGLNUYUYLBTKKJXOLRDZHQSOYDCASIMBOKYFBYPPQCFACPWYGFVOLRSIKHHHYFNOSYBLEXBEWJEHWJNJFXWI");
    tmp_msg_0.lat = 0.9518291370762828;
    tmp_msg_0.lon = 0.6943799304941295;
    tmp_msg_0.z = 0.4812992624031158;
    tmp_msg_0.z_units = 74U;
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
    msg.setTimeStamp(0.041267938337641086);
    msg.setSource(60352U);
    msg.setSourceEntity(52U);
    msg.setDestination(10924U);
    msg.setDestinationEntity(193U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.17568218715654682);
    msg.setSource(39811U);
    msg.setSourceEntity(88U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9484929778590763;
    msg.type = 178U;

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
    msg.setTimeStamp(0.9912033841280582);
    msg.setSource(16346U);
    msg.setSourceEntity(72U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(0U);
    msg.value = 0.09759072934977664;
    msg.type = 87U;

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
    msg.setTimeStamp(0.09272257765894432);
    msg.setSource(24778U);
    msg.setSourceEntity(197U);
    msg.setDestination(57672U);
    msg.setDestinationEntity(77U);
    msg.value = 0.36289342938766667;
    msg.type = 121U;

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
    msg.setTimeStamp(0.8883266050464899);
    msg.setSource(61623U);
    msg.setSourceEntity(177U);
    msg.setDestination(20116U);
    msg.setDestinationEntity(171U);
    msg.value = 0.1627724069352915;

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
    msg.setTimeStamp(0.23780989181232703);
    msg.setSource(26067U);
    msg.setSourceEntity(21U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(51U);
    msg.value = 0.33446926548345235;

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
    msg.setTimeStamp(0.0005715632602734111);
    msg.setSource(479U);
    msg.setSourceEntity(132U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(33U);
    msg.value = 0.38582526765936753;

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
    msg.setTimeStamp(0.3191296172474595);
    msg.setSource(1675U);
    msg.setSourceEntity(125U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(254U);
    msg.timestamp_last_service = 0.2893250993180724;
    msg.time_next_service = 0.6852375093088247;
    msg.time_motor_next_service = 0.6804045717729483;
    msg.time_idle_ground = 0.8157617955671478;
    msg.time_idle_air = 0.552948290955217;
    msg.time_idle_water = 0.16897345745610404;
    msg.time_idle_underwater = 0.0783693986796502;
    msg.time_idle_unknown = 0.7705177519910485;
    msg.time_motor_ground = 0.1415421261801365;
    msg.time_motor_air = 0.7386417355025929;
    msg.time_motor_water = 0.37073989866936785;
    msg.time_motor_underwater = 0.35950087364495387;
    msg.time_motor_unknown = 0.09546124189147598;
    msg.rpm_min = 20765;
    msg.rpm_max = 29667;
    msg.depth_max = 0.6709691224794064;

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
    msg.setTimeStamp(0.7065009897338703);
    msg.setSource(40212U);
    msg.setSourceEntity(165U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(189U);
    msg.timestamp_last_service = 0.7307148695523709;
    msg.time_next_service = 0.9538109750002318;
    msg.time_motor_next_service = 0.98129302491274;
    msg.time_idle_ground = 0.6285508712351937;
    msg.time_idle_air = 0.37475107505044536;
    msg.time_idle_water = 0.7723889457592609;
    msg.time_idle_underwater = 0.9808576733197285;
    msg.time_idle_unknown = 0.1567128747416897;
    msg.time_motor_ground = 0.2714840089530527;
    msg.time_motor_air = 0.6817263830362912;
    msg.time_motor_water = 0.930421395823127;
    msg.time_motor_underwater = 0.35197365621322474;
    msg.time_motor_unknown = 0.9554093174053185;
    msg.rpm_min = -20301;
    msg.rpm_max = 13930;
    msg.depth_max = 0.48434311757846726;

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
    msg.setTimeStamp(0.35668360753901573);
    msg.setSource(48121U);
    msg.setSourceEntity(99U);
    msg.setDestination(63478U);
    msg.setDestinationEntity(32U);
    msg.timestamp_last_service = 0.492059557718718;
    msg.time_next_service = 0.868650717669152;
    msg.time_motor_next_service = 0.9050289070321003;
    msg.time_idle_ground = 0.9966051742592176;
    msg.time_idle_air = 0.9006075892019115;
    msg.time_idle_water = 0.8415262586501558;
    msg.time_idle_underwater = 0.6610633875163252;
    msg.time_idle_unknown = 0.8258526741276135;
    msg.time_motor_ground = 0.2984486755608764;
    msg.time_motor_air = 0.5169833962248874;
    msg.time_motor_water = 0.13334718085955377;
    msg.time_motor_underwater = 0.04058802534858852;
    msg.time_motor_unknown = 0.8735656388843174;
    msg.rpm_min = -23685;
    msg.rpm_max = -4225;
    msg.depth_max = 0.25063193941168915;

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
    msg.setTimeStamp(0.5961208182090901);
    msg.setSource(32152U);
    msg.setSourceEntity(138U);
    msg.setDestination(20769U);
    msg.setDestinationEntity(204U);
    msg.severity = 142U;
    msg.text.assign("VCZADGRWJNKZFXIQRBURDDWEPFCQSQBTNTDUAHHSZOVIHKXTGDQSWQJVUEABFOUVDKFFOOVCBZZHKZUUAYRGMBMCTNAEXQYLRJNXCYJTXYGVGFHYOSBUDMFSYVWKGUAICLTLMSMLYGMUNMDYIOGAHPAMKLONBVLPERWBOKGFLWIMUETCZQIXNBTQJDLPHOOASRKXE");

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
    msg.setTimeStamp(0.34868277164454);
    msg.setSource(25652U);
    msg.setSourceEntity(131U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(136U);
    msg.severity = 240U;
    msg.text.assign("KDFQBDTOVEMJZNWULJYQYXZYNFOIOKXOBEOUQVXFEMTLGXBKHRVNJXCSYMSKRSAAPUGRWRNRPKDHCWAWWZCXIAIFIDNYKSUKONEHLCVZVVPZJNHHDGJDSRUVPH");

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
    msg.setTimeStamp(0.7690465602535246);
    msg.setSource(12421U);
    msg.setSourceEntity(99U);
    msg.setDestination(24009U);
    msg.setDestinationEntity(146U);
    msg.severity = 164U;
    msg.text.assign("WULCMNGEVZTWDOKLDLVIYTDRLSPBMUPSJNGURPPYLWGRYBDQJWQSFTWXVUNEMNEOFAVJFVVTCQQPALOHKCY");

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
    msg.setTimeStamp(0.8819144648249994);
    msg.setSource(48648U);
    msg.setSourceEntity(64U);
    msg.setDestination(21396U);
    msg.setDestinationEntity(141U);
    msg.channel = 6;
    msg.value = 1414289998;
    msg.gain = 66U;

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
    msg.setTimeStamp(0.26127857726936554);
    msg.setSource(37995U);
    msg.setSourceEntity(203U);
    msg.setDestination(28732U);
    msg.setDestinationEntity(186U);
    msg.channel = -42;
    msg.value = 1364560431;
    msg.gain = 224U;

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
    msg.setTimeStamp(0.925824760204437);
    msg.setSource(7252U);
    msg.setSourceEntity(213U);
    msg.setDestination(58733U);
    msg.setDestinationEntity(1U);
    msg.channel = -127;
    msg.value = 1454655106;
    msg.gain = 49U;

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
    msg.setTimeStamp(0.5207592632720677);
    msg.setSource(62830U);
    msg.setSourceEntity(95U);
    msg.setDestination(2120U);
    msg.setDestinationEntity(126U);
    msg.ch01 = 0.33902827409579217;
    msg.ch02 = 0.11851414167356655;
    msg.ch03 = 0.3994467115174961;
    msg.ch04 = 0.05568880560019951;
    msg.ch05 = 0.16575591644152166;
    msg.ch06 = 0.10364287691090857;
    msg.ch07 = 0.5490551863937502;
    msg.ch08 = 0.6552711815679574;
    msg.ch09 = 0.9849124395247565;
    msg.ch10 = 0.2460761942417854;
    msg.ch11 = 0.8927676763068496;
    msg.ch12 = 0.3867507848156977;
    msg.ch13 = 0.307980226825739;
    msg.ch14 = 0.019688917289046093;
    msg.ch15 = 0.18111698184771097;
    msg.ch16 = 0.1385952765431665;

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
    msg.setTimeStamp(0.7074307460752165);
    msg.setSource(36222U);
    msg.setSourceEntity(222U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(20U);
    msg.ch01 = 0.20377237146432015;
    msg.ch02 = 0.8794096919366202;
    msg.ch03 = 0.0032550941783917597;
    msg.ch04 = 0.549780400694955;
    msg.ch05 = 0.7041917357534258;
    msg.ch06 = 0.8814368182184553;
    msg.ch07 = 0.4137571825941422;
    msg.ch08 = 0.9460256076469759;
    msg.ch09 = 0.47421502558561335;
    msg.ch10 = 0.479959794530891;
    msg.ch11 = 0.49116910070110076;
    msg.ch12 = 0.2227238677975305;
    msg.ch13 = 0.38708444861990643;
    msg.ch14 = 0.9237739313938167;
    msg.ch15 = 0.03964130291528922;
    msg.ch16 = 0.6589540189831006;

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
    msg.setTimeStamp(0.6539075417040736);
    msg.setSource(58010U);
    msg.setSourceEntity(131U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(46U);
    msg.ch01 = 0.36837116768121414;
    msg.ch02 = 0.15842826260536969;
    msg.ch03 = 0.3425257961925331;
    msg.ch04 = 0.39519661863272704;
    msg.ch05 = 0.8642270091781;
    msg.ch06 = 0.838552454180481;
    msg.ch07 = 0.4707065693971163;
    msg.ch08 = 0.014712045350187442;
    msg.ch09 = 0.6945560315530289;
    msg.ch10 = 0.6971059897490497;
    msg.ch11 = 0.3836514775391674;
    msg.ch12 = 0.7779032214710286;
    msg.ch13 = 0.8328428559065317;
    msg.ch14 = 0.7925147267129418;
    msg.ch15 = 0.15534509507136063;
    msg.ch16 = 0.589201265867814;

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
    msg.setTimeStamp(0.7755920794021322);
    msg.setSource(33057U);
    msg.setSourceEntity(110U);
    msg.setDestination(39819U);
    msg.setDestinationEntity(179U);
    msg.op = 207U;
    msg.lat = 0.37757680301433816;
    msg.lon = 0.4586586502678509;
    msg.height = 0.9141643262344941;
    msg.depth = 0.015542023192100296;
    msg.alt = 0.29169816902744383;

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
    msg.setTimeStamp(0.6886886741756482);
    msg.setSource(27303U);
    msg.setSourceEntity(253U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(49U);
    msg.op = 17U;
    msg.lat = 0.1277978942384882;
    msg.lon = 0.9612225039608957;
    msg.height = 0.5935268214984605;
    msg.depth = 0.5179431083892323;
    msg.alt = 0.8020450521465828;

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
    msg.setTimeStamp(0.16505360849927275);
    msg.setSource(8529U);
    msg.setSourceEntity(17U);
    msg.setDestination(29862U);
    msg.setDestinationEntity(247U);
    msg.op = 117U;
    msg.lat = 0.6926081040931209;
    msg.lon = 0.7186473448522038;
    msg.height = 0.7344773040493886;
    msg.depth = 0.03644409506521451;
    msg.alt = 0.6471448549442483;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.045197658693801435);
    msg.setSource(5235U);
    msg.setSourceEntity(188U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(2U);
    msg.nbeams = 209U;
    msg.ncells = 56U;
    msg.coord_sys = 149U;

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
    msg.setTimeStamp(0.8805542529988516);
    msg.setSource(27084U);
    msg.setSourceEntity(161U);
    msg.setDestination(8311U);
    msg.setDestinationEntity(5U);
    msg.nbeams = 244U;
    msg.ncells = 231U;
    msg.coord_sys = 81U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5411395247464429;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6788799179716168;
    tmp_tmp_msg_0_0.amp = 0.3618146341963988;
    tmp_tmp_msg_0_0.cor = 3U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6836255397254368);
    msg.setSource(41704U);
    msg.setSourceEntity(48U);
    msg.setDestination(6652U);
    msg.setDestinationEntity(245U);
    msg.nbeams = 105U;
    msg.ncells = 134U;
    msg.coord_sys = 195U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4941435787795653;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9109958200395577);
    msg.setSource(24888U);
    msg.setSourceEntity(6U);
    msg.setDestination(34390U);
    msg.setDestinationEntity(108U);
    msg.cell_position = 0.3274097938459861;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.21893158915214628;
    tmp_msg_0.amp = 0.7559526938754896;
    tmp_msg_0.cor = 199U;
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
    msg.setTimeStamp(0.5381108947790607);
    msg.setSource(19803U);
    msg.setSourceEntity(104U);
    msg.setDestination(23925U);
    msg.setDestinationEntity(103U);
    msg.cell_position = 0.6162366705842901;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.637372701931265;
    tmp_msg_0.amp = 0.9566841127626357;
    tmp_msg_0.cor = 4U;
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
    msg.setTimeStamp(0.22533795937062417);
    msg.setSource(63580U);
    msg.setSourceEntity(149U);
    msg.setDestination(58102U);
    msg.setDestinationEntity(105U);
    msg.cell_position = 0.8142506519391257;

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
    msg.setTimeStamp(0.37840235105498243);
    msg.setSource(2746U);
    msg.setSourceEntity(53U);
    msg.setDestination(864U);
    msg.setDestinationEntity(0U);
    msg.vel = 0.0016121189251373513;
    msg.amp = 0.45063152584288646;
    msg.cor = 18U;

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
    msg.setTimeStamp(0.44713654612236386);
    msg.setSource(54508U);
    msg.setSourceEntity(20U);
    msg.setDestination(57081U);
    msg.setDestinationEntity(217U);
    msg.vel = 0.2611270770193227;
    msg.amp = 0.9755226514752464;
    msg.cor = 218U;

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
    msg.setTimeStamp(0.6875446590992734);
    msg.setSource(32625U);
    msg.setSourceEntity(251U);
    msg.setDestination(33108U);
    msg.setDestinationEntity(46U);
    msg.vel = 0.5105296207512832;
    msg.amp = 0.9159593817722229;
    msg.cor = 89U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.872119984999403);
    msg.setSource(65019U);
    msg.setSourceEntity(236U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(117U);
    msg.name.assign("WUDIWEOCAKRVGLRUPWTPPESOZZQDYMXPHHUYKLLOYOBZLAGQROUHGLTVJXJXSYCANKEFNDKHIPKKWCOXZNCOCMDNWFQDMCMSMNUNHRFQRZTZQUALMYVTNYUTJFSMBDRVOGXDJFEFVBOSTLTHSUSOSYYXAHGPTIBHSWTPQAHHEZIZLBKKBPWDCXEGIJAVLMERWXLJXBBMVCJIRRIPFU");
    msg.value = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.7487349703857821);
    msg.setSource(10020U);
    msg.setSourceEntity(26U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(69U);
    msg.name.assign("HZFEBDPYBLTLKWCUMJDVOSRVKARAWUYKRGFIBEBLOOWHBMDRPZRSMPYHQWHDVXJBOIDUXJWNOTPCOWFNXBWEYZVQRAWJZNVPOXQGVG");
    msg.value = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6988709113429881);
    msg.setSource(32570U);
    msg.setSourceEntity(64U);
    msg.setDestination(2484U);
    msg.setDestinationEntity(232U);
    msg.name.assign("SRUWVLHUPLBQJNEXRUSWMEMDGDUMVFKUKOTOXFCLXAOQNTHSRELYWZSTTGJDCGPZAKYRIBG");
    msg.value = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.9562019295734436);
    msg.setSource(59966U);
    msg.setSourceEntity(226U);
    msg.setDestination(63215U);
    msg.setDestinationEntity(84U);
    msg.name.assign("CGBMYGQREUEWQICIZCZYEKFYMCVVJVKBBAOFZKSRTPGRXURTJLNOTPWYFFOPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.4557239267366482);
    msg.setSource(35737U);
    msg.setSourceEntity(243U);
    msg.setDestination(58989U);
    msg.setDestinationEntity(240U);
    msg.name.assign("LBHQPXHTIIEJNUAFXJRTBSKTVJZSNRUQYZNCVVZKSSXMDKMGELUDRPIWFWGCBQNWTZHBJFAWPTSOJNSPACXIBJXDQCUPNLOCEZBIEGWTRUTUXLHYGKKFIFVQAEIWBWMRXKRMIUUYPBCDRTFEAEOHUWAAEPOOOEOYMNLVNQDHYHFYARMONPPDJVGRMGDLZJTZBGQTAYBXIMXKHWKVQLQIDOQADYYGFLGSKLZXFMCKHSMPOSCRVNSLZGFHCYUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.47294789519611147);
    msg.setSource(21997U);
    msg.setSourceEntity(126U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(250U);
    msg.name.assign("CSDJOQVCKISTYBHVDZTRLIPGBAGRSNNPYGMFAFMSGLZCQJLXAIXYXAYOVLIQDDRBZNBCJXQWPEMPEVYGIYXCJTYTXXQABS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7235155363516882);
    msg.setSource(17890U);
    msg.setSourceEntity(62U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(57U);
    msg.name.assign("XDWLPZRMEXTPAWKYNAURFGWZOXTDRERSVYJPXVEBBYSIGLSOMHDUUNCCCUSNDGKPHPGFAZARJHJVLOXFMRYEUBJIGITUBVWQVNKKJXEYLWIHCVDBYFATRHFQSCNPWBEEWQTNSUKZQTJHWTEYGHMLYAJHDHQLBSVUAUQOVMEDAIGOKDNQGPMPMNZTGXXDLLHNUBMXLVNZOMYGKDBZEIKCCFFCYFIQSQBIJJROFQKWPRLOTOZMFIRTJPIO");
    msg.value = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.8275962879100103);
    msg.setSource(52618U);
    msg.setSourceEntity(183U);
    msg.setDestination(14231U);
    msg.setDestinationEntity(7U);
    msg.name.assign("OEXAWBKKNHGWEFASVTJCYZSJDARRLFLUUNMBYVKSHQJIJPYOTRUFWXNFAQROZGKGXTBHWFYGEQHSQEDYLEYPMCHQUYGXKMPEVAPWNMXMHZUJMZTVMMWQOUUOQKLCBXVXGPQNKFVCAABQJTCCJUILMIZIZONISLWBNJFOUNR");
    msg.value = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7382841175578059);
    msg.setSource(49540U);
    msg.setSourceEntity(99U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(86U);
    msg.name.assign("NDSTZBGGMHGAFHBWETRTNKXGNBCKFFDXBQGELQWXNPVTBNICEWRMUWLUBXNYDDTSBLWAQCFZIOFYJQZJOTRHXTJMJZIUJLYYLPRAJOLLGOIHACQXKZDSUHPHMCLFKXZSSEEIJRFFNPVOEMSHA");
    msg.value = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.08794638854060266);
    msg.setSource(40291U);
    msg.setSourceEntity(228U);
    msg.setDestination(55273U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8907265062886721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3716305336377388);
    msg.setSource(63465U);
    msg.setSourceEntity(228U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(30U);
    msg.value = 0.29613136480927427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09159158574701531);
    msg.setSource(4988U);
    msg.setSourceEntity(2U);
    msg.setDestination(6255U);
    msg.setDestinationEntity(14U);
    msg.value = 0.46474974522697843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7276304171569253);
    msg.setSource(33951U);
    msg.setSourceEntity(90U);
    msg.setDestination(38496U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5600747680623297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9146451738362127);
    msg.setSource(61145U);
    msg.setSourceEntity(34U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(28U);
    msg.value = 0.03492856580619852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9610149931414438);
    msg.setSource(38036U);
    msg.setSourceEntity(236U);
    msg.setDestination(45096U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6805175005084676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.8440175214902875);
    msg.setSource(9250U);
    msg.setSourceEntity(181U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(178U);
    msg.req_id = 5080U;
    msg.ttl = 6230U;
    msg.expiration = 2379579671U;
    msg.destination.assign("EWHXAHIAMQKYOAAXJTVELFGRKCJHZCGKDTLYDNGAUIUPJIEREPDUVLVTZGCMNISGYMLMERONGAWZQZCBKIBQZGHPQAFMUXMCJVOCHZQHOELSNQZBLZFHFIQYTVSWCAEXVSJPTUIPRJKDAWYDOWDOIOSKONNLULMDRNVXPCEATMWZRFHJVKCMOHRBBTPGIXBMJFFWOYYDISS");
    const char tmp_msg_0[] = {-35, 32, -59, 84, 72, 85, -27, 95, 78, -31, -114, 70, 120, 0, 117, 45, 47, -42, -64, -78, -49, -82, 41, 88, 79, 34, 10, 96, -64, -43, 108, -128, -62, -8, 49, 34, 34, 82, 40, -33, -29, 67, 58, -100, -112, -9, -18, 86, 2, -45, -104, 17, 31, 4, 111, -12, -49, 37, -98, -26, 123, -95, 88, 13, 117, 85, -88, 70, 37, -126, -108, -110, -111, -2, 84, -96, -90, -68, 107, -121, 40, 108, 122, 117, -128, -87, 65, -19, 87, 83, -24, -27, 11, -58, -86, -67, -95, -112, 45, -54, -8, 68, 17, 69, 26, 40, 65, -51, 68, -24, 50, 45, 34, -103, -118, 83, 40, 73, -114, 75, -23, 60, 11, -45, -45, -122, 59, 30, -55, -63, -44, 95, -113, 82, -96, 65, 78, 19, -17, -5, 41, -120, -31, -17, -90, 80, -15, 1, -5, -45, 17, -111, -96, 30, 123, -115, -64, 84, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.27773279755284896);
    msg.setSource(30301U);
    msg.setSourceEntity(48U);
    msg.setDestination(16961U);
    msg.setDestinationEntity(39U);
    msg.req_id = 59206U;
    msg.ttl = 18695U;
    msg.expiration = 870707658U;
    msg.destination.assign("KNYPIPCIAFTXMZXTPISOWJUIANGZMUHBRREOBCQWVQWFJFRKSPLIMLY");
    const char tmp_msg_0[] = {-78, -67, -93, 86, 28, 67, -94, 34, -82, 99, -12, -127, 93, 7, 81, 4, 126, -74, -123, -128, 13, -47, -82, 90, -83, 11, -78, -18, -83, -20, -118, -66, 86, 109, -20, -61, 112, -126, 16, -97, 23, -43, -47, 42, -39, 79, 13, 83, 64, 100, -42, -123, -65, 85, 55, -56, 79, 102, 39, -56, -94, 46, -9, -6, -27, -91, 125, 97, 95, 8, 83, 16, -66, 17, 122, 8, -35, -56, -59, -57, 39, 103, -35, -62, 98, 83, 92, 29, -127, -19, -100, 60, -36, -1, 104, -74, -19, -49, 80, -75, 99, -98, 79, 32, -4, 104, 88, 42, -68, 68, 126, -102, 103, 40, 123, 6, 108, -5, 75, 18, 66, -114, 4, -102, -8, -114, -32, 87, 73, -63, 40, 126, -39, -25, 50, -23, -11, -40, -61, 76, -94, -21, 62, -62, -64, -104, -109, -13, 119, -104, -4, -16, 46, -13, 24, -79, 93, -127, 0, 115, 54, -73, -37, -50, 55, 14, -118, -46, 20, 32, 60, 92, -56, 32, 80, 81, -12, 7, -8, 23, -82, -98, 0, 10, -62, 15, 23, 0, -51, -58, 118, 104, 58, 26, -47, 87, -119, -72, 81, 70, -16, 9, 48, 62, 8, 58, 26, 16, -117, -79, -13, -70, 19, -47, -98, 58, -19, -50, 107, 46, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.29123954941039776);
    msg.setSource(62451U);
    msg.setSourceEntity(50U);
    msg.setDestination(20308U);
    msg.setDestinationEntity(243U);
    msg.req_id = 15882U;
    msg.ttl = 19127U;
    msg.expiration = 1653731561U;
    msg.destination.assign("JUINXGTIFGMSKKWTGHOGBMNUDSSIBEABSRHAAIFIMGVDMAQRZTZJULOCQSOYRPNVHYUOKAZPMRCLXZORPWURCXYNNVHBSJTLOZINYETSWPSYSZDDBTLYEJQDVMDWACWXHZKORCFMCTVPTDVGXLZGLJHQTRPLKYGJYEIGAWJHHBPKFMDVXKDKSJYLXJCWFVFRZKUWNPQFVCZYNOWEPWXIOQFUFLEPAUKOENIQVQBDJXAEQCETEHUBANBFUMICQG");
    const char tmp_msg_0[] = {-115, 22, -70, 26, 41, -5, 81, -63, 108, 89, -120, -102, -95, -84, 97, -28, -74, 118, 66, 60, -75, -112, 105, -106, 122, -80, -26, -57, -27, 62, -103, 63, 106, -65, -60, 27, 63, -105, -64, -53, 42, 103, 39, -20, -9, 52, -33, -62, -104, -37, 61, 29, -50, 14, 7, 79, -107, 38, 104, 22, -2, 102, -42, 15, 89, 3, 74, 101, -29, -1, 3, 112, 29, 41, 48, 53, 28, 76, -119, -49, -22, -45, 69, -29, -3, 93, -46, -41, 99, -9, -64, -23, -97, -51};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9060826278011893);
    msg.setSource(63340U);
    msg.setSourceEntity(23U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5353204400757422;

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
    msg.setTimeStamp(0.28145882893687);
    msg.setSource(44031U);
    msg.setSourceEntity(141U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7171137648021144;

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
    msg.setTimeStamp(0.18022570259160287);
    msg.setSource(51804U);
    msg.setSourceEntity(107U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6882442767106033;

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

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.41228534942601425);
    msg.setSource(19175U);
    msg.setSourceEntity(157U);
    msg.setDestination(49367U);
    msg.setDestinationEntity(191U);
    msg.type = 165U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.op = 221U;
    tmp_msg_0.request_id = 35067U;
    tmp_msg_0.plan_id.assign("WWLBBUFOLXPBAKHYPIWWPJCGXQZXAMZUVJQDAQQQBKVHBIKFNOGZXWEMHEGADKSSRSSZDXYJLMZKJVJKLNUYGBCGNPRGATRFHITYEWTMHPMBOTZQMXYRCYBMCRTTSRPPDOVQJCHVFFSUESOLTJIWABJUGBIYLAEFLTUYCCTHOQXPKWDKOQONWUNNOYVRAEKHCY");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.14437856016244932;
    tmp_tmp_msg_0_0.lat = 0.5159366552454872;
    tmp_tmp_msg_0_0.lon = 0.6913844085862642;
    tmp_tmp_msg_0_0.z = 0.9712411332381647;
    tmp_tmp_msg_0_0.z_units = 224U;
    tmp_tmp_msg_0_0.travel_z = 0.02470068209523224;
    tmp_tmp_msg_0_0.travel_z_units = 224U;
    tmp_tmp_msg_0_0.delayed = 123U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("UQYZYMVHTEKUOIGCNFJFNXOGDJCTABTPGRMOMHJRAHCMDQXRKFRMYUYEAUKWQYZJEUUXXABNCDCFMBDTS");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.5050737415591066);
    msg.setSource(30033U);
    msg.setSourceEntity(34U);
    msg.setDestination(51298U);
    msg.setDestinationEntity(96U);
    msg.type = 250U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 69U;
    tmp_msg_0.op = 89U;
    tmp_msg_0.request_id = 60098U;
    tmp_msg_0.plan_id.assign("ISTJALPXUEKXBLDVXQDFTTVTBPJNVRTHOKAKGPOFAFRIGFSSYWVNQHULBUVGKWBBRRCPQZTILLUFYQTBPJSJIEXRVDAZRSOFUZQQUCDJHXPAPABWKPWJDGAQNGINXOGCNZVZSBEYDKMJLZSWQMMGYPWLWHHC");
    IMC::Current tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6995102408861423;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("MCOGCHVEWHDUZAOSWLFGWZGBFVIRKQZHUOKIXQPPWDVLKXFKWWPNRRWTHVWSOQFNHSZLEQNBZEVLQUVLCJJCJNEJTIQXFHEDXHOMOJJTBCGRBZNAWTNQONOGCEBSKDPOMUGDPSLKEMANVCFADGPYILRNAIYCEYXFMKZYXMEXPYMHZVZRSJBWAQTATYUD");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.904726400500803);
    msg.setSource(10237U);
    msg.setSourceEntity(80U);
    msg.setDestination(58550U);
    msg.setDestinationEntity(227U);
    msg.type = 128U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.op = 69U;
    tmp_msg_0.request_id = 10124U;
    tmp_msg_0.plan_id.assign("MXFMKESIYSLBJFFQRZHZWNWQTIEAAOMKKNQMAWDOGOPZXZJLGXVXIACFCMCBABFGGRREOKMKRSQUEYLMGHUPNZMHUTPFXRGOWCXTJSLAZYDXUUWUYBIEBGTSLXIVZUHFTWIYYDJQLCEIPXOWDJTYHJGSCKZDBOAVBIDZQUOEJJWZEPTTQCNCSCBVHNGLSVFAKYINSHLMMRVHETDNTQPFPQJUKWRXQRGNPIFLPRDRHBNVVCEOAYH");
    IMC::Fluorescein tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5940072401228991;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FLYLYZCURZSQVFTNOWKKFWYJZMN");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.8396886801667482);
    msg.setSource(9587U);
    msg.setSourceEntity(212U);
    msg.setDestination(24082U);
    msg.setDestinationEntity(60U);
    msg.name.assign("HKPGFMZYIEXKQRBINWNGQMAAJAYPMISLGDJLCVOYTRLDZYVRTPVXFOMPJNSFLSSRUUMBFSCOGXPXJCKCNVRYBFUECJHQDUEUCOK");
    msg.type = 86U;
    msg.default_value.assign("ODDTXQNSSZCRSXHVMKNRLVQHTANEASBODBEFFNUIYQDZRMXELEYCHIITAQAKPNZTEFIWADJWGZJOOZVBZUAYEBIDLTKKMYBPBWTLIWUAKMZMYNSKVQQCVQWJGOIFKWMJLXCPSWCFQJHENJREGLYVHJTBJPGGFYMZF");
    msg.units.assign("NGUTLDJIXCEGNHOUVAZVDMLSEORGKBMSNTIWPFATRMCPHMNDTNFXTLHCTIQDOCOMXVBQZFWAXRXIUDPHNAJWPTOJQGOHDREFZJAZABSLWYYTUCFYWVSORKYRVMFLSPJPKBGGAEKHQVXUZRBVEYKLFUEQZCYJMSNGGTLCQPFSEQXTLOYHBNKPSMBVJQJWVGMDIKFOINBHMAUAWYIENSZQXXIPZHIDZDCKBEO");
    msg.description.assign("BRBVDXKZIRCBQIQLMEYNFUWSMGMGMLLBKRQZKPOEWZJIPJSMFPSELZHWEPUJUXJAVOQABJYAYHDWGJFEXIHWONFCTSYWOHQFLGJKRRFAVJKCRRUXUHLKQPCUNSMJKIDTD");
    msg.min_value = 0.9526596550708947;
    msg.max_value = 0.1071551708080567;
    msg.list_min_size = 3538681451U;
    msg.list_max_size = 1899615032U;
    msg.visibility = 226U;
    msg.scope = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.9820551253637149);
    msg.setSource(15189U);
    msg.setSourceEntity(21U);
    msg.setDestination(38876U);
    msg.setDestinationEntity(50U);
    msg.name.assign("BXGKAJKJDMRXESXZIFELSWSEPOMAPOAUNHZPIGTOLNMCHKKPUWVYNJWEZQVDRVDFCQZOBYNCYHGVBKBIKBWHTESUHOURJSEMJEIBDIXHZYGYQSJYQLCRGDNNRCYWTFTQDKTMHSDBUOAZTSAITYRQAYIEUHLHVBRCZOFUCTPNNCDWKMZDUFQVQLWKYWGPPIVJEMSRENQTUJBWOPMJLIRXAFGMVOHUBIPMGQLFRCTALFAXKGXPSCLFJVXZADGWF");
    msg.type = 197U;
    msg.default_value.assign("OCPAYCZVGJHSAYROAJLICDGVMMIVGQASLSICSQDLDLVQKFWRTZKZNRXXMYY");
    msg.units.assign("EDOHYMHBJDFPNFXBRODNFVCROUOJYWRXBKYCQEVDNMZIXLTJNIVWWOUBHSVWUQLXAATFAQERXODASBXLIINSSEKJEMRMLKUHLZRJ");
    msg.description.assign("PZXXMPWWLSFZYUHUNRKYBVFOGYCXSPKRXLRIEJBKZIHDFOMQWDHDMCKVEGSNARANLALEOFMOFKGPTVDXYUTJDMNOFBDBPRPIZDEFWOJPBDNAGXUCZTTYAAHRVEISKXVGSTIBXKWFFHUSAHNPBGAQQHQNTTAVOSVKHICIRKJGXZWJMYHMMYCJZRXZGWSQRLNUWNJJVRILUWMGJECOBQASFQQQLHVGTCZECOOPLEWLBI");
    msg.min_value = 0.9985591252828736;
    msg.max_value = 0.9371227448979029;
    msg.list_min_size = 1409051678U;
    msg.list_max_size = 1907554306U;
    msg.visibility = 10U;
    msg.scope = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.6178627807735365);
    msg.setSource(11771U);
    msg.setSourceEntity(152U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ZGORRGZJATGMYJZXPBNANMSEPHUBAQYLCZRIQXZBASEJNHOLFYNMWMIOPQRRARMLGOIRSCBWGMXGTDEVQWCFZBIDFIRQDX");
    msg.type = 162U;
    msg.default_value.assign("QACIDKUCGWPRWLOCQBHGZGWERVMSWDDHLEASOOJPZXWFFPGRVEKJPQFVVLKPAWYNCCOQJQEYEQGEVBDYNZNTTQYWHSOHGNOOCYKDPFFBJJSIVFEKZMB");
    msg.units.assign("VVEUTGJMUJPS");
    msg.description.assign("VUXTUSHEQNMCBOZBCTKVOUBWHGAXUHILEMILINRXAREFZHEGOLLHOYAMDBTQLJRWPYMRYR");
    msg.min_value = 0.3267112277288208;
    msg.max_value = 0.16529396412419195;
    msg.list_min_size = 2408721425U;
    msg.list_max_size = 25664710U;
    msg.visibility = 244U;
    msg.scope = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.05408500963756235);
    msg.setSource(62464U);
    msg.setSourceEntity(129U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(5U);
    msg.op = 107U;
    msg.request_id = 3821913066U;
    msg.entity_name.assign("ZSLDDVRWKEAJKBAFJSVGVRNLTECBQIQYWYUZSJWNUJPGPZROTPKBZEDHMRPNUATUROAYVWEFRACXHMNYIUVBKWEEUHIYPXPX");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CFGKPQMPGUPHTCXAEFWRXUTKVENYEQFNQBQQFWWZDXGG");
    tmp_msg_0.type = 70U;
    tmp_msg_0.default_value.assign("YKDUIULWPMZKWXFUWLSHVCORUBCCSUMXCPRPZUWBFEVTFUJIWNMKTVCZGLQEUAHWJGKVGNQBACJEZSEYLLRWUKMXYGRVHNGQIFNYWWXEBHTNVOLUPMZADHGSQMFYZQJVJYPQGYGTZLTDDLFEBHQIXIMPORCXAYZLMSAQETOENBBHNTRKQJOC");
    tmp_msg_0.units.assign("MRVXLEQJYTHUHRWTUHIRWDMFFNFUQSEPCXAONUZLGXOTAIGCLHMVXPEYVJIEXCHQKNBODPGJGVJOKDCDCWSMXHPCZOOKMZBBSLWECYKIRSLF");
    tmp_msg_0.description.assign("WPSGWVJXCBRGVUAJTZXDUVBQWCPDYAHGDNENORZYPYOYPJFBAHYZZVEQFIMRNGVTTCEZFFOXISUYJWSSNKDYVINQSQVOSWQHAAOWRWAPIFUTSLIALCIKLCZNNTGCEGTZXTKOPKQJGBNUFPBJEBTHHFLEJG");
    tmp_msg_0.min_value = 0.7813892359532331;
    tmp_msg_0.max_value = 0.13382976920161171;
    tmp_msg_0.list_min_size = 3324143891U;
    tmp_msg_0.list_max_size = 3226248571U;
    tmp_msg_0.visibility = 101U;
    tmp_msg_0.scope = 35U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.25270587786757104);
    msg.setSource(25343U);
    msg.setSourceEntity(144U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(134U);
    msg.op = 104U;
    msg.request_id = 1468139335U;
    msg.entity_name.assign("YQGPNFRDGCIJLCJWXGYYZSUTVGOWCXXBGQVLRIBKSPWBIVRHJQMQXOTHANWLXDRZZWDRIFMNAHPCBVUNPIVABXTLFOSPEKHAOEZFOHOJLSREFKCAZEBQJEUXZTEGLGAFIVHGSFYBOXJCADFBTTSQLCHIUEOMYWETYPSUSSWNZPZTQPMHQUDIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.45764403388762087);
    msg.setSource(33592U);
    msg.setSourceEntity(241U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(253U);
    msg.op = 31U;
    msg.request_id = 1230781409U;
    msg.entity_name.assign("HONJIUELBXMJNBSLJYAWUOLZKXKGOYZZCFEARHQHXFXZNVYMMCJYTEFWEUEAWJNKYLPNVTBVIOQVSKJKAQRYSUEGMPUHMMFJTROALRGQHFLFPWS");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YQJSGPRKUCVPKEBNFRMROBVWYXSZXCCPGSHYSAGMFNXIPBJNCHIDDRSYCMAVKVRAJFJQWZFARHUQOQLUCWRJAVGJYETLGQX");
    tmp_msg_0.type = 179U;
    tmp_msg_0.default_value.assign("LNGZAWYXFHLADMEVDDMTRTBSYWRXBUBUUMYAL");
    tmp_msg_0.units.assign("JQOSCITYJWCVVEYKIAIAPQASHSQWXGIKDBWRPVYEONENFSEDCZHFVJONNELWFSJEJPGGMMUKSPVJMBDGHDWPHNGMAQXPLVDOLDOXZIPLSTWALIUXPJLFFBQQOZTYRXOCMTYQFKESHTUOKURVPIMJFUCRECAIRUZEBDTBFVVXHDLBGUJCUH");
    tmp_msg_0.description.assign("OQBVPSJTNGTWDATFFJNKSQVMDZVOPAHQLQMLKUEEACUCPKELGNBCBGOCZSBXYIWBWRJCQLEFVDRXUBRSXSDIIARZFGXBJZQHYWTIVGGMUZ");
    tmp_msg_0.min_value = 0.603162240393603;
    tmp_msg_0.max_value = 0.09342810882360919;
    tmp_msg_0.list_min_size = 4042912365U;
    tmp_msg_0.list_max_size = 949780387U;
    tmp_msg_0.visibility = 179U;
    tmp_msg_0.scope = 231U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.21159475137039563);
    msg.setSource(25565U);
    msg.setSourceEntity(116U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(168U);
    msg.restriction = 219U;
    msg.reason.assign("LWIXQVXIWLHTAWIYLSHTIWENIGMMUMXDRBKQVFXBUAQEWESRZFNIHWYGQOUEVVIKFJYIGKANMAGGCJKDQVJHJXMSPNNGKPCALZNVJMFHLEAZRTNDRZUZQJQCTWFJOKPGCROBRLTFTIFIKHGDCCBOJCPPBUUHYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.15805732541418938);
    msg.setSource(21228U);
    msg.setSourceEntity(17U);
    msg.setDestination(59307U);
    msg.setDestinationEntity(203U);
    msg.restriction = 60U;
    msg.reason.assign("SLHLYVNGXKKNZQCUNLSQSGMAAROAWIHZXMDTCJEDRXEJYAUTPOXHJIGBPCYEPKIDRXUWCHXIEDOLWAIJTRNOAPFXHHDFBQXZWXRUPRJCTNWDOMCSPRDVOHJQOBUQDQSJTMVFTPIEDCILGYABTGBITKRETWQPHCFFOGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.966892354508662);
    msg.setSource(11760U);
    msg.setSourceEntity(222U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(223U);
    msg.restriction = 60U;
    msg.reason.assign("RRHTISRLCKOHYDPOEHZAIGMVYXEDTENTOMLOFEWAKYNIVDVOKGDSFEBWUPLCZZTNUXCTOLBVJDSMWYRJQIPAGEJYFIKNNLSAQXKFRVSZXIVLCNARKECFYGOCWECBGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.40113679592109996);
    msg.setSource(12785U);
    msg.setSourceEntity(234U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(143U);
    msg.mac.assign("QXHTOLHFXNFDMEOUIBNGRGCUPMWQSJZKFJKCOEUSUFUPNWHBZBDRPLXFYZZBJTZIPOKACWTLYYDAYAR");
    msg.ip.assign("IYYSYFZCRVWRFAWEWXKGVNCMNRIAE");
    msg.ccq = 117U;
    msg.noise_floor = 24846;
    msg.signal = 24384;
    msg.rssi = 57429U;
    msg.rx_rate = 18059;
    msg.tx_rate = -27031;
    msg.tx_latency = 4258;
    msg.tx_power = 12201;
    msg.rx_count = 3056179188U;
    msg.tx_count = 683769072U;
    msg.distance = -15925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.9977632160187146);
    msg.setSource(5080U);
    msg.setSourceEntity(9U);
    msg.setDestination(49892U);
    msg.setDestinationEntity(67U);
    msg.mac.assign("PQTWUPKWYFZSRTLXKPHEKQZTUNIALAGVGFAWYXJSVVVZSBIZIQXGYFYLIDVVKLWVFMYDFHUBKPHWXAXDIVORPWKIOTFQVSRMQPRYEQFEMJKTOBJGSJFBMVACHCXGRMAZCNOSCUBXUZRPKIDLXGBADJQOZLLSRHCWPNUE");
    msg.ip.assign("QYPMYXGEDKTMBTTAJAUFPXUVGFSXHTBQXZVCLEZZYNRLPQTIKFIIEEYKBJWQJPY");
    msg.ccq = 44U;
    msg.noise_floor = -13868;
    msg.signal = -14804;
    msg.rssi = 41494U;
    msg.rx_rate = 9456;
    msg.tx_rate = -29332;
    msg.tx_latency = 18707;
    msg.tx_power = -30080;
    msg.rx_count = 3524672517U;
    msg.tx_count = 1361707369U;
    msg.distance = -17475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.32573243789137907);
    msg.setSource(33024U);
    msg.setSourceEntity(164U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(110U);
    msg.mac.assign("AYAJIDGTRUMLVUSGWQWGRSTEZZCNESQQLPYTNSZNGPPXRIJSXTVEVHDWEBVMOAKJEQDNVHSOXIMTBRLUDWTOHWALMYGEMCKXOPCZJAMKQRSGIKBIC");
    msg.ip.assign("PBOCPDHILFASHVFPPRCQKGTGRJQYWKUCOTNYSXQHOWSUDRRJYNNXYVLWCAUFKTZQWRBNKSZXWXWYXGABZMWEZQJLSZKZEOELKETLICDAQGSERGSFOMDHNJUOGQYBNHICAOJPURQOZTHIUKBURVDUSNJCYCDIABD");
    msg.ccq = 182U;
    msg.noise_floor = 30041;
    msg.signal = 13687;
    msg.rssi = 50508U;
    msg.rx_rate = -21995;
    msg.tx_rate = 4179;
    msg.tx_latency = -31121;
    msg.tx_power = -14706;
    msg.rx_count = 3631404102U;
    msg.tx_count = 2307767931U;
    msg.distance = 2908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.3008718279848548);
    msg.setSource(42505U);
    msg.setSourceEntity(146U);
    msg.setDestination(27013U);
    msg.setDestinationEntity(252U);
    msg.essid.assign("KIKTLMBVKFRNBGKUOPGDBFGATGUJPSNAHEYOADOVIQHAQYGYXYSRZIFYCCSKHFHJZGSVKQYLTURPLNSOHJXUYESGVPUFXEZQCIBJQBDBDONQDECCH");
    msg.mac.assign("IOGUWXMQSDFEADULHXSPIEBDDVUJEUTYVSNKHDBCOOGTKHLJCZFYOAOAVTOVQCSTWMTMBGIMBDLCOHHQKUXACDKCRTZNCEWAXOKZFZJHSCNYYGVPNJEZMSGWLOJWRTSQPVXOXSEFUVBQIWBXRZKYKPRWFULZCKRGHKZKIUJRQFBRNAZBNLYWUIDALQMPFPLXFPNPLXJ");
    msg.signal = -1467;
    msg.noise = 1309;
    msg.ccq = -104;
    msg.channel = 1U;
    msg.freq = 0.9421694544938091;
    msg.security.assign("FIFCTQEIJHHVZCWOWGTBIUVNUBHBRJAJUHPXAGFMSAHRERPJSTYQKQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.8657901237340492);
    msg.setSource(53558U);
    msg.setSourceEntity(25U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(108U);
    msg.essid.assign("EJQXPNDHPKIVPHTNGXMUGRSJVFTDGNCEDTBXEHUHWPOZJDSBMIFQRVUNYLWYQKIJIPESNQABNRMUHWPCMHPPVWXYYGFBXBSAZTZEEKFQEQZAHUZAAKTZCAECCJU");
    msg.mac.assign("ERWCQTARKFTYGLPQMYDITKFGRUF");
    msg.signal = -27598;
    msg.noise = 26083;
    msg.ccq = 110;
    msg.channel = 41U;
    msg.freq = 0.23394782174828688;
    msg.security.assign("GDUGXBKFXCSKLCJIDOOQDENWIUNQEHIESOEHAFQYDBICZMKHWBLFVVLHQJBWFXXGANKAQWSQTMJGTDZSCPQUOHYKIITQWVTQLCJVBRMMGATMESPKXUIUZSLBIXDLRYDFGRNRKLYMEPOLNBYTUNWZUEWLITPRMMVOKHEFRJYEKOYAEZVARYVJCFZOJRMIHVJMJGPCTCOSXHSOCWTANPZAVPNUPAXFBBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.8837496922130602);
    msg.setSource(39317U);
    msg.setSourceEntity(43U);
    msg.setDestination(39897U);
    msg.setDestinationEntity(21U);
    msg.essid.assign("MEKHUPHCZBXZSUWYPRVXJQODFWDWNWNNDUPNBHMMTWHZMFMNVYZKLQBHHGJBHVZGJFSCJZAQISUBEFKFKADQCQOERDLTQASQJUEAHMMOLXVQVACVIXMVIXDXCFGRDBUNRJFCXQOEEWIFKIXXZQECTIARCMNYPNDUNIPLGEODLOOESKJNRYYLKOBEMFFIGGYSYPCTBKUZTAKTGSTOTJBZGIKLL");
    msg.mac.assign("MOTUQEVGAYCVWUMTQUAJUXGNFDHWZBDTYWOMFZIYUKPNZLDRCCJPRKFFNWAUEXTZFRCBSECMBUHEFWDAAVOZNPDPGEGXSKHQTBAMCOLEIUPKYZQKNITHHNLLUGNXLHLKNZLJDYTOHJIIETRPHIJFJQWTPBRSUN");
    msg.signal = -13176;
    msg.noise = 3467;
    msg.ccq = 105;
    msg.channel = 47U;
    msg.freq = 0.28462156696989527;
    msg.security.assign("YUYZIMFYIPXLHXWTUCQKBHZQZVAWWGSFDTTLARLHKOPHVSBWACPWFKBLQFMGHMTRJIWHQEIYWERTZHSQITEBXKFAMZGJGVULGDMHJOZCCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.7511582230079674);
    msg.setSource(13372U);
    msg.setSourceEntity(7U);
    msg.setDestination(56681U);
    msg.setDestinationEntity(246U);
    msg.frequency = -1016803532;
    msg.pulse_length = 1957045664;
    msg.time_delay = 1569841477;
    msg.simulated_speed = -1093932761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.7799956831997759);
    msg.setSource(8722U);
    msg.setSourceEntity(46U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(103U);
    msg.frequency = 20793942;
    msg.pulse_length = -842003417;
    msg.time_delay = 941351853;
    msg.simulated_speed = -377327517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.2342797289544094);
    msg.setSource(26322U);
    msg.setSourceEntity(45U);
    msg.setDestination(25197U);
    msg.setDestinationEntity(206U);
    msg.frequency = -550383404;
    msg.pulse_length = 287309507;
    msg.time_delay = -1176838373;
    msg.simulated_speed = 1042532679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.36327637316548334);
    msg.setSource(46695U);
    msg.setSourceEntity(173U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(203U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.49998935323924454);
    msg.setSource(24730U);
    msg.setSourceEntity(199U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(85U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 58629U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4654258957135783;
    tmp_tmp_msg_0_0.lon = 0.24874624100191012;
    tmp_tmp_msg_0_0.alt = 0.670189375710892;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    msg.geo_features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.5436399115342615);
    msg.setSource(27049U);
    msg.setSourceEntity(79U);
    msg.setDestination(33404U);
    msg.setDestinationEntity(23U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 20662U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3094150660769178;
    tmp_tmp_msg_0_0.lon = 0.13369129711854955;
    tmp_tmp_msg_0_0.alt = 0.00023214002155214075;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    msg.geo_features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.7884126457820829);
    msg.setSource(42502U);
    msg.setSourceEntity(40U);
    msg.setDestination(65335U);
    msg.setDestinationEntity(71U);
    msg.feature_id = 13318U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.08766621590631352;
    tmp_msg_0.lon = 0.9774025258170838;
    tmp_msg_0.alt = 0.9315567441845317;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.054957939349819296);
    msg.setSource(65361U);
    msg.setSourceEntity(116U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(243U);
    msg.feature_id = 40044U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8239234756395526;
    tmp_msg_0.lon = 0.7998256548481432;
    tmp_msg_0.alt = 0.760303281341963;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.18669000738492747);
    msg.setSource(56853U);
    msg.setSourceEntity(207U);
    msg.setDestination(1025U);
    msg.setDestinationEntity(85U);
    msg.feature_id = 38646U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3598845991855696;
    tmp_msg_0.lon = 0.05830997045745545;
    tmp_msg_0.alt = 0.6899523012573896;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.8635533038888578);
    msg.setSource(15483U);
    msg.setSourceEntity(98U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(39U);
    msg.feature_id = 59501U;
    msg.state = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.7761909557951612);
    msg.setSource(3926U);
    msg.setSourceEntity(108U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(81U);
    msg.feature_id = 62726U;
    msg.state = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.6201291687668221);
    msg.setSource(37892U);
    msg.setSourceEntity(120U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(17U);
    msg.feature_id = 54113U;
    msg.state = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdmin msg;
    msg.setTimeStamp(0.830419679938819);
    msg.setSource(22742U);
    msg.setSourceEntity(166U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(11U);
    msg.tid = 5698U;
    msg.op = 128U;
    IMC::MoveTask tmp_msg_0;
    tmp_msg_0.task_id = 14072U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0320044432868789;
    tmp_tmp_msg_0_0.lon = 0.10889809515623217;
    tmp_tmp_msg_0_0.alt = 0.18143186217035567;
    tmp_msg_0.destination.set(tmp_tmp_msg_0_0);
    tmp_msg_0.deadline = 0.3044578649361416;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdmin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdmin msg;
    msg.setTimeStamp(0.26235778422708034);
    msg.setSource(51402U);
    msg.setSourceEntity(72U);
    msg.setDestination(39602U);
    msg.setDestinationEntity(125U);
    msg.tid = 44875U;
    msg.op = 156U;
    IMC::TaskStatus tmp_msg_0;
    tmp_msg_0.task_id = 8036U;
    tmp_msg_0.status = 144U;
    tmp_msg_0.progress = 243U;
    tmp_msg_0.quality = 187U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdmin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdmin msg;
    msg.setTimeStamp(0.8709965931552504);
    msg.setSource(30452U);
    msg.setSourceEntity(71U);
    msg.setDestination(42707U);
    msg.setDestinationEntity(140U);
    msg.tid = 29568U;
    msg.op = 16U;
    IMC::SurveyTask tmp_msg_0;
    tmp_msg_0.task_id = 29905U;
    tmp_msg_0.feature_id = 18889U;
    tmp_msg_0.sensor = 90U;
    tmp_msg_0.resolution = 0.850289988821008;
    tmp_msg_0.deadline = 0.5615569800363737;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdmin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.7390510914225047);
    msg.setSource(62155U);
    msg.setSourceEntity(101U);
    msg.setDestination(27220U);
    msg.setDestinationEntity(161U);
    msg.op = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.30570345689277345);
    msg.setSource(251U);
    msg.setSourceEntity(223U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(47U);
    msg.op = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.17966552386999435);
    msg.setSource(29756U);
    msg.setSourceEntity(172U);
    msg.setDestination(18786U);
    msg.setDestinationEntity(225U);
    msg.op = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.6706136766730779);
    msg.setSource(29507U);
    msg.setSourceEntity(202U);
    msg.setDestination(56633U);
    msg.setDestinationEntity(205U);
    IMC::CapabilityPointSurvey tmp_msg_0;
    tmp_msg_0.sensor = 72U;
    tmp_msg_0.resolution = 0.30020534084900474;
    tmp_msg_0.duration = 0.2591373112736275;
    msg.capabilities.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.9419264131732095);
    msg.setSource(17193U);
    msg.setSourceEntity(76U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(39U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.47144275486036635);
    msg.setSource(56501U);
    msg.setSourceEntity(62U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(97U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.9868260913004732);
    msg.setSource(11447U);
    msg.setSourceEntity(171U);
    msg.setDestination(12937U);
    msg.setDestinationEntity(87U);
    msg.sensor = 138U;
    msg.resolution = 0.9061195647325169;
    msg.res_bathym_factor = 0.9505520103369232;
    msg.cov_rate = 0.22826519929897238;
    msg.cov_bathym_factor = 0.8303633460454694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.11239894282898544);
    msg.setSource(56237U);
    msg.setSourceEntity(32U);
    msg.setDestination(25629U);
    msg.setDestinationEntity(169U);
    msg.sensor = 221U;
    msg.resolution = 0.6311928358106512;
    msg.res_bathym_factor = 0.7083482787310849;
    msg.cov_rate = 0.025115818297763548;
    msg.cov_bathym_factor = 0.49591767649292395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.9777690945869756);
    msg.setSource(36033U);
    msg.setSourceEntity(28U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(36U);
    msg.sensor = 253U;
    msg.resolution = 0.6147973413998825;
    msg.res_bathym_factor = 0.5254954103117921;
    msg.cov_rate = 0.9833430324164039;
    msg.cov_bathym_factor = 0.787770677245843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.17059930537932044);
    msg.setSource(31163U);
    msg.setSourceEntity(75U);
    msg.setDestination(51502U);
    msg.setDestinationEntity(132U);
    msg.sensor = 160U;
    msg.resolution = 0.9351431212893659;
    msg.duration = 0.6928837259569418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.19203628539291628);
    msg.setSource(7251U);
    msg.setSourceEntity(199U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(54U);
    msg.sensor = 183U;
    msg.resolution = 0.5375710843982688;
    msg.duration = 0.7429610953318794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.16142791103222953);
    msg.setSource(54393U);
    msg.setSourceEntity(254U);
    msg.setDestination(39912U);
    msg.setDestinationEntity(190U);
    msg.sensor = 69U;
    msg.resolution = 0.7339142818319312;
    msg.duration = 0.7600154208359494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.763379744706804);
    msg.setSource(50553U);
    msg.setSourceEntity(190U);
    msg.setDestination(34851U);
    msg.setDestinationEntity(131U);
    msg.speed = 0.5961576519970667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.04892356102874906);
    msg.setSource(4066U);
    msg.setSourceEntity(159U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(241U);
    msg.speed = 0.1297591362342031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.05313956818698018);
    msg.setSource(37434U);
    msg.setSourceEntity(91U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(29U);
    msg.speed = 0.3299550077618921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.7868194033587242);
    msg.setSource(23114U);
    msg.setSourceEntity(222U);
    msg.setDestination(5040U);
    msg.setDestinationEntity(36U);
    msg.task_id = 11690U;
    msg.feature_id = 8096U;
    msg.sensor = 139U;
    msg.resolution = 0.25204637059458657;
    msg.deadline = 0.02659812156801944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.11420792313192585);
    msg.setSource(42683U);
    msg.setSourceEntity(161U);
    msg.setDestination(56542U);
    msg.setDestinationEntity(194U);
    msg.task_id = 44793U;
    msg.feature_id = 45457U;
    msg.sensor = 11U;
    msg.resolution = 0.6454717161570706;
    msg.deadline = 0.0017216920514565581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.2462195028752575);
    msg.setSource(1876U);
    msg.setSourceEntity(29U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(211U);
    msg.task_id = 7875U;
    msg.feature_id = 32684U;
    msg.sensor = 13U;
    msg.resolution = 0.356667336181413;
    msg.deadline = 0.8888132621926268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.06611661309666439);
    msg.setSource(5111U);
    msg.setSourceEntity(225U);
    msg.setDestination(47003U);
    msg.setDestinationEntity(16U);
    msg.task_id = 32658U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.12207091218767219;
    tmp_msg_0.lon = 0.9585225868205861;
    tmp_msg_0.alt = 0.5315637535606687;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.4928887313876634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.7010315572525454);
    msg.setSource(834U);
    msg.setSourceEntity(58U);
    msg.setDestination(33511U);
    msg.setDestinationEntity(112U);
    msg.task_id = 46067U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8061154095971703;
    tmp_msg_0.lon = 0.6501434326074899;
    tmp_msg_0.alt = 0.7940019063312311;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.08937971654039334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.5446444481783005);
    msg.setSource(33011U);
    msg.setSourceEntity(211U);
    msg.setDestination(49085U);
    msg.setDestinationEntity(154U);
    msg.task_id = 33470U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7344796074112087;
    tmp_msg_0.lon = 0.040442856760967705;
    tmp_msg_0.alt = 0.37533729069011623;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.8080957460391187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.5360874473276562);
    msg.setSource(33518U);
    msg.setSourceEntity(173U);
    msg.setDestination(29967U);
    msg.setDestinationEntity(170U);
    msg.task_id = 7388U;
    msg.status = 242U;
    msg.progress = 56U;
    msg.quality = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.31283287840300134);
    msg.setSource(47201U);
    msg.setSourceEntity(149U);
    msg.setDestination(34645U);
    msg.setDestinationEntity(145U);
    msg.task_id = 61209U;
    msg.status = 202U;
    msg.progress = 8U;
    msg.quality = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.9983714001108664);
    msg.setSource(3807U);
    msg.setSourceEntity(132U);
    msg.setDestination(29550U);
    msg.setDestinationEntity(30U);
    msg.task_id = 3737U;
    msg.status = 197U;
    msg.progress = 168U;
    msg.quality = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.32804319985155506);
    msg.setSource(23730U);
    msg.setSourceEntity(164U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(161U);
    msg.task_id = 31526U;
    msg.feature_id = 31748U;
    msg.time_window = 41422U;
    msg.deadline = 0.06661596848634632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.9440766886833847);
    msg.setSource(55097U);
    msg.setSourceEntity(52U);
    msg.setDestination(64495U);
    msg.setDestinationEntity(178U);
    msg.task_id = 64257U;
    msg.feature_id = 46831U;
    msg.time_window = 8139U;
    msg.deadline = 0.8609539516625668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.47955414433471655);
    msg.setSource(42140U);
    msg.setSourceEntity(52U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(144U);
    msg.task_id = 34476U;
    msg.feature_id = 59266U;
    msg.time_window = 28634U;
    msg.deadline = 0.9466874245110747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #2", msg == *msg_d);
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
