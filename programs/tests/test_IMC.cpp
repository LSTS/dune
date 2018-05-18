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
// IMC XML MD5: 66a9fcd055dc1d1843f251836a38c6bc                            *
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
    msg.setTimeStamp(0.286109065745);
    msg.setSource(7201U);
    msg.setSourceEntity(144U);
    msg.setDestination(32614U);
    msg.setDestinationEntity(248U);
    msg.state = 220U;
    msg.flags = 228U;
    msg.description.assign("LJPPZGZECQHLTRRJZFVUSPCBCSMBIDHGUNRVQSQFSYIJSAGDKRXYTKEWROJTCIXNAJLOUTJIOKVVLECOHZESMAFZZODPNLYUBSNREFCONAUAQYSDWXQ");

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
    msg.setTimeStamp(0.399651188529);
    msg.setSource(50502U);
    msg.setSourceEntity(116U);
    msg.setDestination(34436U);
    msg.setDestinationEntity(212U);
    msg.state = 61U;
    msg.flags = 75U;
    msg.description.assign("PYAYPMTBAPJPYOQEATISAIIUYVMUDMCLWDURKZPWIMEBQHFRCWOXOIBARGDNEFIGEQLVGRNBRUOGD");

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
    msg.setTimeStamp(0.579433555217);
    msg.setSource(61118U);
    msg.setSourceEntity(5U);
    msg.setDestination(18074U);
    msg.setDestinationEntity(235U);
    msg.state = 113U;
    msg.flags = 92U;
    msg.description.assign("TOOQHROCKWPDOGPKCSQJNJDZFBNAWUDGYMXGPBSIZUTMRZQQMDMESQEJJLECTGRRBLQGHLANYAXAKZCXUHUNOSSOUSRFGNPIRQOJXGTMBMJELYDHMYPESWPCIHCQTLZUVFRMYVKFYCJABBZAXIZUMECYIEYVJSKXDWLDGDCFXWEEVVEVOOLWHYFTJKFADOPYIZPIIBVXKAIUTBPQFNKH");

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
    msg.setTimeStamp(0.707410590387);
    msg.setSource(43049U);
    msg.setSourceEntity(57U);
    msg.setDestination(731U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.523282639327);
    msg.setSource(48195U);
    msg.setSourceEntity(254U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.409113661395);
    msg.setSource(30251U);
    msg.setSourceEntity(0U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.742656616984);
    msg.setSource(40406U);
    msg.setSourceEntity(15U);
    msg.setDestination(681U);
    msg.setDestinationEntity(95U);
    msg.id = 36U;
    msg.label.assign("JXPQTBKPXURMXMBBRIJCBRVTIHBUAVLOAGSJJWOMPSXFLLDVHEUBLICYSMCWJHBLONDGRHGFFDFPPYT");
    msg.component.assign("CFGYJIRSQBFWDEWWYUTWCGMOQNMQRHAAJMAADDWKQWIJKIHZHFDPAHZEOSSXTXAGTHNUYIBNYLZSXKEUKUYVLCSXWMSNZBVZCMFIFNOEPPKYIXEQOADBLKBJPNJTUYULRLFDCUVYSFGGLBYMPSQJXSIOTC");
    msg.act_time = 4446U;
    msg.deact_time = 20231U;

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
    msg.setTimeStamp(0.86590914333);
    msg.setSource(28205U);
    msg.setSourceEntity(149U);
    msg.setDestination(37110U);
    msg.setDestinationEntity(198U);
    msg.id = 53U;
    msg.label.assign("WIIGTTRUKMZQQLOPJBILDAPWKURZFRCYMPBGABMCIKQVACEDEOWVNOTLSLJXKXLOXIYMAZZKRMUGHUKHSDAYBUDFEWQYEXPLXTDMORYWBXRFJKYHMZIKKCCQGDNJSFJRYBNWYXPXETVGCNY");
    msg.component.assign("NVSZLETTGJIKPIYPURQCAEMMFBQQTGUGGQICCWFRXOAJRVJAWKBKZCDHYQTFGJIDLIWKRQKUIOIXETFHQBOBYZMJQEHZDWOZJPLSPUCODVOADUXBCDVDACYLZGVHHHELANRLYISFARWODXPDOTCGTMHKBXYJTLFENNYZNZMPKANBHXXJQWLXWISZWETCVZEBGYSJOXFKSQKSOJUUNXKVWPSP");
    msg.act_time = 14094U;
    msg.deact_time = 25273U;

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
    msg.setTimeStamp(0.557289374369);
    msg.setSource(23793U);
    msg.setSourceEntity(29U);
    msg.setDestination(59908U);
    msg.setDestinationEntity(221U);
    msg.id = 167U;
    msg.label.assign("QHOEPKODAJDJBFYHZVDADMRDPCGBEQEUJMYQTJORYMEGYNGWLCZZSCHQEQRBYAZFINCSQWRALYZDGMXNWWLXCSWGFPLNXCYCMNMHFIOXWKZADNHHFHDXOOVPPMDVJTVLESYIZLKKJIPPESAPABOCW");
    msg.component.assign("OIWWNMXRFRFSTYZCEKMQXYGLUFMVHEMTCEUFGEWZHIADRBMCRSPPKLQQPBDUNKRPEHBSFVZIOGNJRLHQSYLSIXDTAYJAOTXZEFCTQCLBXXKLUYCWGONHJGXUFYJDKENKOKFDCDLHDJECVPMYUYBIIAVVIWOLURAZKWJXFAUMALAIOIGNIVPEXKMHJGJZJSSNRJNDTEWZB");
    msg.act_time = 37891U;
    msg.deact_time = 20878U;

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
    msg.setTimeStamp(0.911359092059);
    msg.setSource(42222U);
    msg.setSourceEntity(206U);
    msg.setDestination(29629U);
    msg.setDestinationEntity(11U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.0518637755155);
    msg.setSource(60180U);
    msg.setSourceEntity(189U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(8U);
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
    msg.setTimeStamp(0.185353591065);
    msg.setSource(44601U);
    msg.setSourceEntity(51U);
    msg.setDestination(32686U);
    msg.setDestinationEntity(183U);
    msg.id = 6U;

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
    msg.setTimeStamp(0.435853604917);
    msg.setSource(59625U);
    msg.setSourceEntity(46U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(81U);
    msg.op = 111U;
    msg.list.assign("BMVWOENJXTTNLORQMCOGMABVWNZUJTKHXSMJZBMLCXLGJZZVOFQYKWKGUEQVJKWVTSULKPAQBCWOSOFCJWNBBIHDFMHOGLAUGQEEJLTWRDXREHUHIYSDKBHPFNXFQRPVKDIBXCLPHFILUHJSZYRICGTESRYHICJIBPAQAXBDMPNTZXVOZGSAYRFMCUDQDNUMJGVNYEAPYOZSZYDYYOAAWPWSRLRUUNGKEDQXCTQFLEEWZCIDTKPKFINVAPXI");

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
    msg.setTimeStamp(0.707452922059);
    msg.setSource(2709U);
    msg.setSourceEntity(236U);
    msg.setDestination(7161U);
    msg.setDestinationEntity(153U);
    msg.op = 17U;
    msg.list.assign("VAHGOFEOBGUZ");

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
    msg.setTimeStamp(0.0631758242215);
    msg.setSource(35543U);
    msg.setSourceEntity(144U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(29U);
    msg.op = 131U;
    msg.list.assign("GYOMGDJBLRKLZTVFAXDYTSEDI");

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
    msg.setTimeStamp(0.303171213128);
    msg.setSource(61176U);
    msg.setSourceEntity(252U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(122U);
    msg.value = 190U;

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
    msg.setTimeStamp(0.861313235124);
    msg.setSource(59361U);
    msg.setSourceEntity(19U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(120U);
    msg.value = 222U;

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
    msg.setTimeStamp(0.0556794260797);
    msg.setSource(36502U);
    msg.setSourceEntity(153U);
    msg.setDestination(15197U);
    msg.setDestinationEntity(0U);
    msg.value = 119U;

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
    msg.setTimeStamp(0.633467012464);
    msg.setSource(29661U);
    msg.setSourceEntity(46U);
    msg.setDestination(39269U);
    msg.setDestinationEntity(201U);
    msg.consumer.assign("SJZUPUFXDSUOVTXSHYYKQTSHYFLTCLVWKPHIOETM");
    msg.message_id = 51684U;

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
    msg.setTimeStamp(0.843820453755);
    msg.setSource(46497U);
    msg.setSourceEntity(15U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("EACIBTURFZERBWPSKDXNTLNAFQZBMVPGCDCWADVPJSMANOBCFYMAAXAWLTZFCMVKYPHGABWCSEKBQNHUWXHHONLWOULUUECTYEIARLYGUXWCLEOJDOKDHJRWLSCSDZVYUPKSRXFXQKRCGOSYMIPQMJTYIVJAKYBMKXOHPDIMNFUQMIOLGETIDRBBIQEGRUEWHZNUJLFPPG");
    msg.message_id = 12630U;

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
    msg.setTimeStamp(0.345555729366);
    msg.setSource(29112U);
    msg.setSourceEntity(86U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(40U);
    msg.consumer.assign("WJFORPKKSVXPLUQ");
    msg.message_id = 27831U;

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
    msg.setTimeStamp(0.693110629461);
    msg.setSource(4397U);
    msg.setSourceEntity(51U);
    msg.setDestination(58812U);
    msg.setDestinationEntity(69U);
    msg.type = 216U;

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
    msg.setTimeStamp(0.0277066036988);
    msg.setSource(59542U);
    msg.setSourceEntity(78U);
    msg.setDestination(61809U);
    msg.setDestinationEntity(222U);
    msg.type = 42U;

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
    msg.setTimeStamp(0.365264321299);
    msg.setSource(65401U);
    msg.setSourceEntity(94U);
    msg.setDestination(11908U);
    msg.setDestinationEntity(188U);
    msg.type = 242U;

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
    msg.setTimeStamp(0.00332009590546);
    msg.setSource(28037U);
    msg.setSourceEntity(235U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(29U);
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
    msg.setTimeStamp(0.421291652264);
    msg.setSource(50973U);
    msg.setSourceEntity(3U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(62U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.711179574884);
    msg.setSource(57224U);
    msg.setSourceEntity(88U);
    msg.setDestination(45727U);
    msg.setDestinationEntity(111U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.573173063433);
    msg.setSource(134U);
    msg.setSourceEntity(223U);
    msg.setDestination(39029U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 104U;
    msg.step_number = 162U;
    msg.step.assign("XASGQNHEWMEGWSFRCTMSJTXAZQBMINVGXAKMFWJJVYZKGRMADVRLWVADFSLJDOMHURUZUDDBXOOLWFUZIWVLQYSKYESIJBOAPEZLEDQWRRGUCUOOLELCTYNZTBWXHGKPKIAUAPPONPCNYGZHEADKWXJGIKZCFLRIDJMNAXEEYTOMBEXIJCPKTQPCBTODUHYRJQNMJQSCZVNBRYGGILHN");
    msg.flags = 127U;

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
    msg.setTimeStamp(0.224959895779);
    msg.setSource(14760U);
    msg.setSourceEntity(62U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 25U;
    msg.step_number = 40U;
    msg.step.assign("QWEXQYGPRBOHPZLBIUSAJZRKPPXKQOWQGQHEYADONZIPRTVAFTRLODIXYAXIEMMJUULUELRZWETEVVNLSTATNIPKGAGVNKCWXOWTSBWHLJJAQXXGRYYFHPRWSIHZJLFKUCDFQDDQSHRZDZDNTWASZOVKBPFOFFUFIVL");
    msg.flags = 57U;

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
    msg.setTimeStamp(0.54679121171);
    msg.setSource(39746U);
    msg.setSourceEntity(77U);
    msg.setDestination(60601U);
    msg.setDestinationEntity(101U);
    msg.total_steps = 228U;
    msg.step_number = 51U;
    msg.step.assign("RMDMJMCZFSKOMSVPVNTBSZ");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.76094869608);
    msg.setSource(499U);
    msg.setSourceEntity(4U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(15U);
    msg.state = 185U;
    msg.error.assign("YHQBRIOXHFXT");

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
    msg.setTimeStamp(0.662044212885);
    msg.setSource(8525U);
    msg.setSourceEntity(146U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(108U);
    msg.state = 191U;
    msg.error.assign("HKDFPCWZURJXKDZVFIZOUMMNBPPIWXJEGNSZBKWNOLTLQYBSSAIDFFBHJQVVWJCPGMPOIORHYLSNIONPDHTWQYRAUCWBYNTVTGLSXFDRLTUMGVYNPOALKACEEZMCMVJIJGCGFKUGQWKRWXLEPZIETWTCJUDHSRXGOUKSZQQBEYXRAOBAOYKJHSBAIXRTBQMFDNQUQFCHLINKTPVFMEHSXLMNDMDECGAYSYQRXUD");

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
    msg.setTimeStamp(0.0381341523154);
    msg.setSource(20808U);
    msg.setSourceEntity(20U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(118U);
    msg.state = 245U;
    msg.error.assign("FKMKNWCLIWZEAELLHWHTRXJFWXBRHEREIOPEFONVRBBKZBKHQDHFJUMLXVYGUSANXBWEXOACQDHKJFCGAYSPRVYTWJGUCXXKVFNDSNCDSPDUURXTRGRLHELMNIONGFAMSFJZLJSUDZTMHYSPZYZJKOZZQOVIQYNGCBLMAUCSVJHQHTDKBTEOUURDTDTQQYIIMNVBPOMLFCGEQASXMZKPJWYGPQWFTLCMVIIZWBAJGOEVPUVYAPRWD");

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
    msg.setTimeStamp(0.657348911658);
    msg.setSource(21514U);
    msg.setSourceEntity(244U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.14612621996);
    msg.setSource(56005U);
    msg.setSourceEntity(161U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.47130070429);
    msg.setSource(13611U);
    msg.setSourceEntity(6U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.533987265576);
    msg.setSource(4328U);
    msg.setSourceEntity(164U);
    msg.setDestination(43543U);
    msg.setDestinationEntity(11U);
    msg.op = 29U;
    msg.speed_min = 0.185495355129;
    msg.speed_max = 0.198560184007;
    msg.long_accel = 0.20937950546;
    msg.alt_max_msl = 0.149567479222;
    msg.dive_fraction_max = 0.839541478673;
    msg.climb_fraction_max = 0.663242103722;
    msg.bank_max = 0.143555421355;
    msg.p_max = 0.102737108884;
    msg.pitch_min = 0.0792359660316;
    msg.pitch_max = 0.831199183854;
    msg.q_max = 0.769639435089;
    msg.g_min = 0.82926571824;
    msg.g_max = 0.819058555078;
    msg.g_lat_max = 0.386819621793;
    msg.rpm_min = 0.0584922472388;
    msg.rpm_max = 0.0936399331862;
    msg.rpm_rate_max = 0.141809826305;

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
    msg.setTimeStamp(0.765954009853);
    msg.setSource(35069U);
    msg.setSourceEntity(110U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(102U);
    msg.op = 101U;
    msg.speed_min = 0.24295443284;
    msg.speed_max = 0.258502848276;
    msg.long_accel = 0.99697812825;
    msg.alt_max_msl = 0.593548519913;
    msg.dive_fraction_max = 0.272687308462;
    msg.climb_fraction_max = 0.949831939223;
    msg.bank_max = 0.463089594785;
    msg.p_max = 0.478636992932;
    msg.pitch_min = 0.0261032095934;
    msg.pitch_max = 0.046595697585;
    msg.q_max = 0.193647937981;
    msg.g_min = 0.672111123318;
    msg.g_max = 0.736939273268;
    msg.g_lat_max = 0.719136799791;
    msg.rpm_min = 0.22421665982;
    msg.rpm_max = 0.726618980478;
    msg.rpm_rate_max = 0.0343347914302;

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
    msg.setTimeStamp(0.676023719009);
    msg.setSource(64276U);
    msg.setSourceEntity(27U);
    msg.setDestination(1552U);
    msg.setDestinationEntity(126U);
    msg.op = 230U;
    msg.speed_min = 0.397200837166;
    msg.speed_max = 0.138493184546;
    msg.long_accel = 0.229763059405;
    msg.alt_max_msl = 0.456523293874;
    msg.dive_fraction_max = 0.259552650701;
    msg.climb_fraction_max = 0.593138162582;
    msg.bank_max = 0.568570001798;
    msg.p_max = 0.566689786634;
    msg.pitch_min = 0.0122263667782;
    msg.pitch_max = 0.626381861553;
    msg.q_max = 0.710641801542;
    msg.g_min = 0.292329815968;
    msg.g_max = 0.866094727358;
    msg.g_lat_max = 0.3662838848;
    msg.rpm_min = 0.493824858455;
    msg.rpm_max = 0.729351528829;
    msg.rpm_rate_max = 0.145317186123;

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
    msg.setTimeStamp(0.239615179556);
    msg.setSource(174U);
    msg.setSourceEntity(212U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.658508435919);
    msg.setSource(4238U);
    msg.setSourceEntity(201U);
    msg.setDestination(32069U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.712227798306);
    msg.setSource(28722U);
    msg.setSourceEntity(156U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(196U);
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.377092641323;
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
    msg.setTimeStamp(0.891045069474);
    msg.setSource(7180U);
    msg.setSourceEntity(148U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.122422300225;
    msg.lon = 0.923546112537;
    msg.height = 0.192989957777;
    msg.x = 0.571302574937;
    msg.y = 0.344848470002;
    msg.z = 0.210774470784;
    msg.phi = 0.147283257474;
    msg.theta = 0.781496534697;
    msg.psi = 0.570888443538;
    msg.u = 0.911306725894;
    msg.v = 0.277777695836;
    msg.w = 0.152261107358;
    msg.p = 0.128846611347;
    msg.q = 0.991248132002;
    msg.r = 0.213377254454;
    msg.svx = 0.0481868171885;
    msg.svy = 0.0540310382335;
    msg.svz = 0.328051950102;

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
    msg.setTimeStamp(0.338850346395);
    msg.setSource(31337U);
    msg.setSourceEntity(197U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.887065395478;
    msg.lon = 0.392335562203;
    msg.height = 0.267649327239;
    msg.x = 0.377922544204;
    msg.y = 0.686640911081;
    msg.z = 0.672578095553;
    msg.phi = 0.311695613827;
    msg.theta = 0.772768086978;
    msg.psi = 0.292158791765;
    msg.u = 0.860346446082;
    msg.v = 0.787548175725;
    msg.w = 0.940187462578;
    msg.p = 0.160507147375;
    msg.q = 0.525205315495;
    msg.r = 0.563562836049;
    msg.svx = 0.977292005388;
    msg.svy = 0.916094737183;
    msg.svz = 0.772999429577;

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
    msg.setTimeStamp(0.914743911833);
    msg.setSource(29580U);
    msg.setSourceEntity(180U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.866887299857;
    msg.lon = 0.334407666226;
    msg.height = 0.316010181481;
    msg.x = 0.867904484741;
    msg.y = 0.848666827725;
    msg.z = 0.554064402833;
    msg.phi = 0.780109679844;
    msg.theta = 0.417888325032;
    msg.psi = 0.0251812446582;
    msg.u = 0.207174820958;
    msg.v = 0.896085020207;
    msg.w = 0.684166581269;
    msg.p = 0.428814645338;
    msg.q = 0.520438856027;
    msg.r = 0.0145895256356;
    msg.svx = 0.771787366419;
    msg.svy = 0.256097459555;
    msg.svz = 0.618432374159;

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
    msg.setTimeStamp(0.958065796074);
    msg.setSource(33598U);
    msg.setSourceEntity(86U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(54U);
    msg.op = 196U;
    msg.entities.assign("CJFVDINMCYNETKYRXOAWCYHPBRISWCTQBPVRXWNZCGSVUNLOJCTKZZOAIFRLBASBPMEPIXDFVORVXAGYTCIDRJT");

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
    msg.setTimeStamp(0.873662490074);
    msg.setSource(25986U);
    msg.setSourceEntity(36U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(225U);
    msg.op = 79U;
    msg.entities.assign("WBOYHGXRKVZJQHNFHIRHVEWTQMWEMFJQJIFCGRLHHTJRCXUTSLIXSCMTPIIOQAANGNVNZBCZHFHSVRQALGDMDTLWUORBQFPIBKSPLANLOOYSPCKTLZRAZJPKGMCYCWAPTNKUYLEMIHBYDETRSBXSYBOGUXCZVAMGAEDNCZTYIJXZPFMUWPZNWVODLVQEWAFRGMJBVYFYWRTFQCSUUXXZDKXPJEUKSXSDOOAHBOVEIKNPIKFEGQELUVM");

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
    msg.setTimeStamp(0.353854756977);
    msg.setSource(12582U);
    msg.setSourceEntity(165U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(243U);
    msg.op = 104U;
    msg.entities.assign("XGRECMHLUROTLRSOAVXGGUQNGAPTDCCSEHWXHGFDYRHWLBHVONPUVLDXMZTUZPSKUHNG");

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
    msg.setTimeStamp(0.912908998025);
    msg.setSource(25399U);
    msg.setSourceEntity(110U);
    msg.setDestination(50767U);
    msg.setDestinationEntity(50U);
    msg.type = 153U;
    msg.speed = 23417U;
    const char tmp_msg_0[] = {120, 115, 81, 9, 87, -122, -87, 126, -44, 84, 19, 117, 5, -62, -127, 104, -121, -47, 93, -61, -127, -20, -128, -86, 18, 113, 27, 34, 21, 0, -51, -57, -108, 123, -121, 89, -111, -44, 105, -26, -122, -60, 62, -103, 6, 0, 96, 69, -108, 33, 32, 96, -42, -18, -111, -56, 50, 65, 69, 32, -64, -79, -126, 45, 21, 10, 72, -59, 99, -69, 56, 91, 118, -41, -121, 93, -81, 112, 88, 118, -123, 118, 85, -69, -10, -51, 10, -15, -105, -116, -27, -109, 24, 41, -38, -109, 26, -35, -100, -94, 42, -41, 50, -91, 119, 51, -39, 27, 91, -67, 47, -40, 50, 86, 70, 78, -42, -121, -103, 58, 64, -107, -61, 15, 45, 105, -39, -29, 63, -72, 103, -26, 16, 33};
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
    msg.setTimeStamp(0.167680305543);
    msg.setSource(22523U);
    msg.setSourceEntity(180U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(217U);
    msg.type = 28U;
    msg.speed = 54922U;
    const char tmp_msg_0[] = {-25, 42, 101, -75, 65, 35, 90, -77, 86, 81, 42, -107, 72, 100, 116, 98, -3, -81, 30, 36, -49, 96, -7, -94, -121, -62, -82, 83, -104, 10, 60, -16, -80, -5, 0, 26, 6, -85, -68, 23, 81, -79, 114, -110, 98, -114, -99, -47, 14, 54, 116, -44, 80, 66, 85, 2, -9, 50, 20, 85, 93, -67, 38, -78, -49, 92, -118, -121, -78, 19, 68, 43, -111, 33, -85, 8, -100, -53, 61, -48, 41, -9, 116, -66, -29, -30, -83, -82, 126, 38, 60, -66, -63, 42, 23, -75, -6, 39, -84, -35, -27, 20, 123, -77, 31, -33, -121, -92, 93, -104, -83, -108, 101, 104, -127, 104, -11, -21, -3, -50, -89, -74, 27, 16, -109, 57, -21, 73, 44, -58, -77, 65, 28, -70, 91, 105, 75, 105, 122, -1, -26, -33, 11, 6, 94, -35, -71, 29, -16, -37, 93, 82, 35, 100, -107, 123, 41, -61, 80, -14, 90, -104, 125, -122, 119, 11, -128, 36, -21, 56, -18, -75, 90, -34, 64, -48, 15, 42, 97, 83, -98, 5, 115, -76, 10, -39};
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
    msg.setTimeStamp(0.242685329234);
    msg.setSource(49832U);
    msg.setSourceEntity(215U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(125U);
    msg.type = 107U;
    msg.speed = 33397U;
    const char tmp_msg_0[] = {-97, -76, -12, 84, -98, -128, 70, -97, 120, -101, -23, -76, 52, 29, 57, -121, 48, -127, -11, -80, 11, 97, 16};
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
    msg.setTimeStamp(0.963734047963);
    msg.setSource(43429U);
    msg.setSourceEntity(90U);
    msg.setDestination(6193U);
    msg.setDestinationEntity(186U);
    msg.op = 195U;
    msg.tas2acc_pgain = 0.794391171119;
    msg.bank2p_pgain = 0.650698460912;

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
    msg.setTimeStamp(0.384316789395);
    msg.setSource(20588U);
    msg.setSourceEntity(86U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(189U);
    msg.op = 126U;
    msg.tas2acc_pgain = 0.381420424382;
    msg.bank2p_pgain = 0.0872329774394;

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
    msg.setTimeStamp(0.139843422892);
    msg.setSource(39732U);
    msg.setSourceEntity(19U);
    msg.setDestination(21487U);
    msg.setDestinationEntity(140U);
    msg.op = 10U;
    msg.tas2acc_pgain = 0.498051787158;
    msg.bank2p_pgain = 0.945483779178;

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
    msg.setTimeStamp(0.886816983463);
    msg.setSource(43308U);
    msg.setSourceEntity(227U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(155U);
    msg.available = 3845127636U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.420219598819);
    msg.setSource(8906U);
    msg.setSourceEntity(209U);
    msg.setDestination(149U);
    msg.setDestinationEntity(233U);
    msg.available = 1607082703U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.751374031228);
    msg.setSource(10714U);
    msg.setSourceEntity(244U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(107U);
    msg.available = 2842690923U;
    msg.value = 213U;

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
    msg.setTimeStamp(0.439489821879);
    msg.setSource(22369U);
    msg.setSourceEntity(54U);
    msg.setDestination(2560U);
    msg.setDestinationEntity(154U);
    msg.op = 191U;
    msg.snapshot.assign("ILGELOBJBFWGISUYCZFTBAXGRAYCKSCIKZFRDUVJJHBFALZNKXJYFORJRCOLUEYTPFHYDDSTTXMMQTQGFSXLPWQBTSOWHBUBXSNXPEZJMSQDZRYGSGHAANYRCDDISVETEJEDKOHAEHQINGOCVZNZRKMJKEWKIIYFPQ");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.608557578035;
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
    msg.setTimeStamp(0.651014333021);
    msg.setSource(53240U);
    msg.setSourceEntity(214U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(178U);
    msg.op = 217U;
    msg.snapshot.assign("TPGJPKQBWAEXOBLDYPHSCJVNSHXUGFIEABSWBHNEUTICZYXURXFUKCUMXGGHRIWISYAXPQBQZJDQFZWVLJOZLKNALAJTVMHEUDYUSPTLFNDXYRTJHGGGFFMPATQZVONFHGPNYMKSI");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.770367838636;
    tmp_msg_0.lon = 0.873105310698;
    tmp_msg_0.height = 0.992306861807;
    tmp_msg_0.x = 0.125064922107;
    tmp_msg_0.y = 0.478177096642;
    tmp_msg_0.z = 0.5084559733;
    tmp_msg_0.phi = 0.706977880537;
    tmp_msg_0.theta = 0.244946887824;
    tmp_msg_0.psi = 0.774001978521;
    tmp_msg_0.u = 0.987946800382;
    tmp_msg_0.v = 0.338743990825;
    tmp_msg_0.w = 0.343901086618;
    tmp_msg_0.p = 0.0448311121281;
    tmp_msg_0.q = 0.781711011018;
    tmp_msg_0.r = 0.94351670499;
    tmp_msg_0.svx = 0.00537876063797;
    tmp_msg_0.svy = 0.779233492664;
    tmp_msg_0.svz = 0.564362625287;
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
    msg.setTimeStamp(0.847849798798);
    msg.setSource(4891U);
    msg.setSourceEntity(217U);
    msg.setDestination(62950U);
    msg.setDestinationEntity(18U);
    msg.op = 52U;
    msg.snapshot.assign("RIXSJBTXJZZQXGFAZOQZZOLHWBTUAXVNNMJQOQCBVQEEMNGPMLLUJGSGYPMYVKLMHEGLPDTTBRDDUOVKAGXQNPVAOHTUYLNZKIVAZYEYWIYJRWFIUBIZJQHTTETUHYJWMHLAVHIGOYWPAEWEXJEKTOSGBQXIKXIPUFNFDSABSCBNOCKUDEPOPBBDHRKDNDUZWFWRF");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.689581286343;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 37937U;
    tmp_msg_0.custom.assign("VKELCYISMKLHINFXGBQFLLNPEQRRVBIFYKPZOPFJVBAP");
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
    msg.setTimeStamp(0.342939310252);
    msg.setSource(4465U);
    msg.setSourceEntity(194U);
    msg.setDestination(22341U);
    msg.setDestinationEntity(217U);
    msg.op = 246U;
    msg.name.assign("LHLCTGYVWZPJUOUACJBWXTYNPTKKMGVBUJNFWVUTZVLDFUAIKLHBIMTBIWCFMIQSSEXESWRGAKDSTAZNKVRRODHBDLEPDESDMECTIISOMOGURLGPRANUMZJCVPYNWXFYOAQWLFEMXQGIXNCYWYJQSAAXRTHSLFTRKLQBQYBMNK");

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
    msg.setTimeStamp(0.911701183801);
    msg.setSource(1845U);
    msg.setSourceEntity(234U);
    msg.setDestination(28170U);
    msg.setDestinationEntity(195U);
    msg.op = 193U;
    msg.name.assign("CMYPRTTGLXULMOXBMQVHURTIGSUJDZORVZQCFMQVFAIARPGNSJSASACVNZXIHOROBKWQIOLJIAFFBGJNTCNATMVSKWHXYQ");

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
    msg.setTimeStamp(0.716655028694);
    msg.setSource(56061U);
    msg.setSourceEntity(205U);
    msg.setDestination(16786U);
    msg.setDestinationEntity(108U);
    msg.op = 26U;
    msg.name.assign("RQHZXPJOHJFZVQNCYYIPAUZYYSTCSHLVWFYVCDWWUXHNLRRTPOEAEFGRXXPKB");

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
    msg.setTimeStamp(0.438818212753);
    msg.setSource(23653U);
    msg.setSourceEntity(104U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(5U);
    msg.type = 107U;
    msg.htime = 0.0794225503539;
    msg.context.assign("MKMVJGNAUDQAMJUQVBEYOTVKDHUBTTZAPZGAIOSRXMGXUMHCPYELWBILRBXOGZLSBSZBYNMNLJIRSBGVRUZADFVXNTWWFCULSQLQJEMIELO");
    msg.text.assign("TBNZULJEZQXSOWQRQYTXAGGQMFPEMFLKZSPYTYJ");

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
    msg.setTimeStamp(0.177452843025);
    msg.setSource(23806U);
    msg.setSourceEntity(185U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(39U);
    msg.type = 109U;
    msg.htime = 0.114294741685;
    msg.context.assign("QIUOMARATFMFNDLVOARCXRTRPNQVGSBHUHVPWHLZEXWDGKEGNIPRRBLQBNNXFKNFQLWAOMSALHSTDYDEQOHRQGEYEPUBSIKM");
    msg.text.assign("ZHUIADFKBOJSAOGDTSZQLDWZGGBSHVKVHUYGLPCZMMORODNUWOCKCDNGHJFRIUIOJHMJJLNTIQWBVQFHITLQYWIKWCGGTRNSDYAOCJFBWYDXEMUEOSMAEICTBNKRNID");

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
    msg.setTimeStamp(0.190332233204);
    msg.setSource(13960U);
    msg.setSourceEntity(51U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(183U);
    msg.type = 172U;
    msg.htime = 0.284120828565;
    msg.context.assign("TIOKWCKYPDWJHUVZVIRSYUPEEPMZFRYIZORWLKQORJWFIVOYBEGXALVXJZXKMWSTZFVSNXAECFRBZHZCMWMLWWVRUNHBTZDTQGALUQIHQTDCGLNSUOUPGSGNUABJBUAKBCGSBZXFHFHMFLSQMYOPKSGGUYETSVXYXNAPAAYWKXMLJSOTLJDUGFQEQIPIVTXDTMCNDDVCODCLKAHGEHIRECCPLDEQYVE");
    msg.text.assign("HQRBNCETYMUATQZW");

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
    msg.setTimeStamp(0.992329620399);
    msg.setSource(60607U);
    msg.setSourceEntity(217U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(101U);
    msg.command = 236U;
    msg.htime = 0.0237987883806;

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
    msg.setTimeStamp(0.108251100659);
    msg.setSource(51287U);
    msg.setSourceEntity(75U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(226U);
    msg.command = 184U;
    msg.htime = 0.502389191816;

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
    msg.setTimeStamp(0.806048776223);
    msg.setSource(29814U);
    msg.setSourceEntity(102U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(147U);
    msg.command = 187U;
    msg.htime = 0.308901283526;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.232081715158;
    tmp_msg_0.context.assign("YRZYJIUNIJDTKGVBLOHVBEZLAFUEDRCGMMPXUHDYXLJTJOQLONDSFBRKKITOISCKYZYJSHJRFMCTEDTKSTZFGELATFC");
    tmp_msg_0.text.assign("THABCTVAIKMVGRXHKKQMZSNLAPTYBZPDKOUDEUQAYLILUNFQJYFLEVGJCPIRVSOBPOJSRB");
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
    msg.setTimeStamp(0.491006888431);
    msg.setSource(40386U);
    msg.setSourceEntity(229U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(125U);
    msg.op = 7U;
    msg.file.assign("PLWDDRSYBSTQAKNMBORWUCTMDIAPCUCCIBVZMYUUJBITRFESELDGRSYOVZRPCMAYFFXQGUXSYFDZENVDHGDMUJKVXHIIGZMRJFXWLUZVMYETAMXZHJGYPWPSGNEAVTPGFOQJCKDKTOOKQTQFINSBEMRFQBLSABHKRPHGUWABWHOPNZAGOXLKVNUKNDQXHIMCCEJALGRHIVWJTSCJDONTLEJWUPXEWBTNFQYIKHJEQNXZZLLPQVRO");

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
    msg.setTimeStamp(0.848648486768);
    msg.setSource(1554U);
    msg.setSourceEntity(209U);
    msg.setDestination(28451U);
    msg.setDestinationEntity(124U);
    msg.op = 154U;
    msg.file.assign("DBAGTLUKADEDOLLNKBRUVOBYDJHQHCHBZB");

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
    msg.setTimeStamp(0.0833026906126);
    msg.setSource(6189U);
    msg.setSourceEntity(117U);
    msg.setDestination(26594U);
    msg.setDestinationEntity(243U);
    msg.op = 185U;
    msg.file.assign("CUWRSGKDZHBWVPYFKUIAURBIZQVUHGVGFTCECNMMMNSEWEIYCCNSBKSSTDYDRRVREPYLQYLXXPGBLXSHPTVFTZHBASVIHNTQIVTJPKFSBAUYMXWXQYJVR");

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
    msg.setTimeStamp(0.883374889163);
    msg.setSource(27023U);
    msg.setSourceEntity(54U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(247U);
    msg.op = 192U;
    msg.clock = 0.0168722308688;
    msg.tz = -17;

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
    msg.setTimeStamp(0.24456420693);
    msg.setSource(8825U);
    msg.setSourceEntity(27U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(231U);
    msg.op = 77U;
    msg.clock = 0.607941224378;
    msg.tz = 118;

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
    msg.setTimeStamp(0.739943487292);
    msg.setSource(26858U);
    msg.setSourceEntity(72U);
    msg.setDestination(28068U);
    msg.setDestinationEntity(26U);
    msg.op = 215U;
    msg.clock = 0.582845621086;
    msg.tz = 23;

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
    msg.setTimeStamp(0.719072494143);
    msg.setSource(62944U);
    msg.setSourceEntity(153U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(82U);
    msg.conductivity = 0.538040183405;
    msg.temperature = 0.839027594032;
    msg.depth = 0.167448624091;

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
    msg.setTimeStamp(0.50871729114);
    msg.setSource(19300U);
    msg.setSourceEntity(200U);
    msg.setDestination(48756U);
    msg.setDestinationEntity(158U);
    msg.conductivity = 0.38324828594;
    msg.temperature = 0.748082031636;
    msg.depth = 0.582011657183;

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
    msg.setTimeStamp(0.970431568784);
    msg.setSource(29338U);
    msg.setSourceEntity(178U);
    msg.setDestination(62933U);
    msg.setDestinationEntity(114U);
    msg.conductivity = 0.158063894613;
    msg.temperature = 0.140443526142;
    msg.depth = 0.990964725336;

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
    msg.setTimeStamp(0.236344301497);
    msg.setSource(30456U);
    msg.setSourceEntity(21U);
    msg.setDestination(38631U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.29708290615;
    msg.roll = 18456U;
    msg.pitch = 56103U;
    msg.yaw = 37131U;
    msg.speed = 19426;

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
    msg.setTimeStamp(0.219475271925);
    msg.setSource(44794U);
    msg.setSourceEntity(12U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.889206988639;
    msg.roll = 53044U;
    msg.pitch = 37556U;
    msg.yaw = 26397U;
    msg.speed = -10826;

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
    msg.setTimeStamp(0.612379757353);
    msg.setSource(5012U);
    msg.setSourceEntity(93U);
    msg.setDestination(33871U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.905076658292;
    msg.roll = 55593U;
    msg.pitch = 38738U;
    msg.yaw = 5343U;
    msg.speed = 11756;

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
    msg.setTimeStamp(0.625169994987);
    msg.setSource(19537U);
    msg.setSourceEntity(178U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(216U);
    msg.altitude = 0.848612177442;
    msg.width = 0.984681291789;
    msg.length = 0.947421998011;
    msg.bearing = 0.063104792107;
    msg.pxl = 820;
    msg.encoding = 30U;
    const char tmp_msg_0[] = {-19, -56, 108, -16, -78, -45, -42, -8, 14, -34, -115, 68, -86, -75, -18, -61, -26, 125, 71, -96, 23, 15, -23, -2, -68, 112, -14, -51, 85, 79, -40, -63, -23, -122, 107, -25, -79, 106, 112, 94, 109, -121, -99, -93, -72, 39, -127, -114, -25, -46, 106, 98, 124, -80, -80, -126, -112, -34, -69, -70, -44, -89, 38, 36, -122, 80, -48, 106, -115, -2, -11, 33, 0, 36, -126, -119, -3, -122, -5, 40, -113, -105, 58, 97, 8, 21, 122, -116, 107, 116, -64, 47, 77, -78, -92, -29, 49, -57, 40, -40, 77, 53, 58, 27, 64, 114, -41, 5, -42, -73};
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
    msg.setTimeStamp(0.130349041174);
    msg.setSource(27245U);
    msg.setSourceEntity(161U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.029823800186;
    msg.width = 0.138400588734;
    msg.length = 0.272148320363;
    msg.bearing = 0.0700726891469;
    msg.pxl = 5372;
    msg.encoding = 147U;
    const char tmp_msg_0[] = {-83, 39, -99, 116, 115, -7, -74, 53, 126, -1, -93, 36, -25, -112, 67, -96, 84, -64, -101, 57, -28, 3, -40, 54, -15, 90, -30, -60, -31, 52, -123, -19, -66, 74, -16, -43, -97, -101, 100, -47, 2, 110, 30, -35, 36, 84, 5, 105, -53, -15, 103, 120, 104, -84, -39, 120, -44, -64, 93, -104, -76, 12, -51, 110, 23, 91, 29, -116, 32, 42, 119, 110, 68, 82, 57, -74, 89, -16, -26, -73, -18, -70, -32, -44, 24, -115, -62, -117, -121, -94, -121, -44, 19, 53, -9, -11, -78, -102, -76, -95, -2, -19, 66, 103, 114, -53};
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
    msg.setTimeStamp(0.511426249753);
    msg.setSource(44672U);
    msg.setSourceEntity(128U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.328498709113;
    msg.width = 0.729064528501;
    msg.length = 0.595055809906;
    msg.bearing = 0.855843643413;
    msg.pxl = -13669;
    msg.encoding = 27U;
    const char tmp_msg_0[] = {79, 121, 115, -16, 90, -23, -30, -85, 107, 89, -29, -41, 116, 105, -26, -22, 37, 34, -12, -25, -111, -97, 19, 19, -55, -7, -77, -54, -55, 37, -62, -2, 19, -28, 33, 27, 17, 87, -78, 77, -86, -25, 86, -13, 107, -31, 116, 103, -77, -122, 85, 54, -107, -8, -64, 121, -73, -15, -66, -33, 4, 38, 52, 77, -27, -47, -40, 35, -49, -95, 70, 46, -2, 22, -119, 121, 97, 42, -110, 84, 18, -54, 118, 92, 39, -41, 124, 32, -64, -71, -21, 23, 77, 45, 5, 97, -61, 100, -125, -23, -88, -14, -39, 118, -68, -21, -37};
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
    msg.setTimeStamp(0.182014559222);
    msg.setSource(21236U);
    msg.setSourceEntity(44U);
    msg.setDestination(33063U);
    msg.setDestinationEntity(56U);
    msg.text.assign("PZZQWDPQWOBEHMDEXECTCZIOCKCLDNASIQZSBAYBHRUZWKDYGZQNTKOVWJRFYNEVKVXHHUPASHHXEAXLJPPEXRXPMVRILJGUOVTJYSFQWIJAKCKOUFTZLYEXI");
    msg.type = 220U;

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
    msg.setTimeStamp(0.80629817901);
    msg.setSource(23847U);
    msg.setSourceEntity(183U);
    msg.setDestination(19115U);
    msg.setDestinationEntity(64U);
    msg.text.assign("POZOWDJXYEPENFHIISNOUAKCSJEIUMBFYWERJTZBEWSRACNH");
    msg.type = 15U;

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
    msg.setTimeStamp(0.259771473663);
    msg.setSource(48371U);
    msg.setSourceEntity(43U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(60U);
    msg.text.assign("OZNFJAXRDYPDREGARSCZOFVSATDFYJACJHPRIXNQHVTCTYCLZXDBPSHTEMOKSNNETKRHULMLVBQZDSZZSGBUKRPOXMHGTIWJQIBXVAKUNBAJYOODXQHDELIRPVPKBTBZVKBLNNJWWRHURJFIEGYCEZMKUGIOPIPRXPGXWZAFGVFTQKJKVPUEOXKTNWZCXQQUSYDCVLDCTCMIBIHSHUJLQWMYGWWDNYAFFVSHWJQMMAWUCLBLMFYOQGEUMLSAE");
    msg.type = 142U;

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
    msg.setTimeStamp(0.493954176381);
    msg.setSource(29017U);
    msg.setSourceEntity(71U);
    msg.setDestination(36888U);
    msg.setDestinationEntity(66U);
    msg.parameter = 69U;
    msg.numsamples = 123U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 9245U;
    tmp_msg_0.avg = 0.52461436089;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.135666460031;
    msg.lon = 0.534532562538;

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
    msg.setTimeStamp(0.237776831786);
    msg.setSource(42736U);
    msg.setSourceEntity(37U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(251U);
    msg.parameter = 45U;
    msg.numsamples = 61U;
    msg.lat = 0.544482692136;
    msg.lon = 0.756321017666;

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
    msg.setTimeStamp(0.146673529981);
    msg.setSource(9470U);
    msg.setSourceEntity(2U);
    msg.setDestination(22230U);
    msg.setDestinationEntity(198U);
    msg.parameter = 164U;
    msg.numsamples = 42U;
    msg.lat = 0.839947006883;
    msg.lon = 0.932505850104;

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
    msg.setTimeStamp(0.923063258483);
    msg.setSource(60855U);
    msg.setSourceEntity(69U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(11U);
    msg.depth = 36890U;
    msg.avg = 0.156975136532;

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
    msg.setTimeStamp(0.203981589233);
    msg.setSource(34470U);
    msg.setSourceEntity(60U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(218U);
    msg.depth = 13139U;
    msg.avg = 0.584766046539;

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
    msg.setTimeStamp(0.980654630825);
    msg.setSource(38957U);
    msg.setSourceEntity(236U);
    msg.setDestination(33659U);
    msg.setDestinationEntity(73U);
    msg.depth = 19568U;
    msg.avg = 0.726461377246;

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
    msg.setTimeStamp(0.089268397334);
    msg.setSource(42825U);
    msg.setSourceEntity(82U);
    msg.setDestination(6836U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.0826592005173);
    msg.setSource(64486U);
    msg.setSourceEntity(166U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.910264266689);
    msg.setSource(65025U);
    msg.setSourceEntity(143U);
    msg.setDestination(14778U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.649706479913);
    msg.setSource(41169U);
    msg.setSourceEntity(17U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("OINBPEURGBYTUKGEGMGGWXHTEGEADZDVNMJZYOUAQCGUOKYIWMCFPDKWSWZQILNXVXCAOZPJPAYTWCFFSDKFJFVSNPXPEBYMDQNAAZMSJZDFWPJFELRQXKXOCPTQSYKOXKVXLRU");
    msg.sys_type = 186U;
    msg.owner = 33710U;
    msg.lat = 0.0441301478125;
    msg.lon = 0.444804184335;
    msg.height = 0.858432846897;
    msg.services.assign("EPSYPYKVJHSSNMYVQCICKZESDXXASEQJBCBWNMHSRQAAVRUKZPVUZLREEJDZVKJUZOGJNMKQLTYCQPPFVWXGUEQRIAWMMNWPNMUOBBCTHFAHIMFXYDODOFSNNRRHAEAPHLGWXFJTDFQDFRGRHXHELBZLYKOWOKXTQOWGVITEDNUIWYGJYBZKNQDFCQSOIXXKVCTRWMDDEIOLGSUTYCMLFPXVHPUTSMBOLZRJKNYAAGTAGFPI");

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
    msg.setTimeStamp(0.579020623679);
    msg.setSource(49316U);
    msg.setSourceEntity(199U);
    msg.setDestination(3903U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("RWPWRVYZJUCFSJFKDADBDVLPUHFCTBCKJNUORKDEWWYNTTTLREJAXAIAACABUSGTMRLWOEIOSKODNEOAMGVYXMROKLJWONXTKOPEUSUQPBFUTPHNGSDKBTHDGILJVTIUXWFHHYUEZRQXMIVNFJHYNBGBMMQAEHZBXFZILJYCQBFNVSPPZPEVQBWZZYKHXUDN");
    msg.sys_type = 126U;
    msg.owner = 38591U;
    msg.lat = 0.311939282152;
    msg.lon = 0.269528834694;
    msg.height = 0.327322749394;
    msg.services.assign("KEGECKTLBFPGJIWSRPXODTKTMLALDHK");

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
    msg.setTimeStamp(0.838698669215);
    msg.setSource(8841U);
    msg.setSourceEntity(127U);
    msg.setDestination(58488U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("EAJDGDERFKMQBGWOBSLCLBOOSSGCNQVDILXCBIOXVAPQVSRVNNXLBDUDD");
    msg.sys_type = 239U;
    msg.owner = 4655U;
    msg.lat = 0.659516468728;
    msg.lon = 0.086252797555;
    msg.height = 0.790295209106;
    msg.services.assign("KFYJNHBQZCUSDINVQGFELFT");

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
    msg.setTimeStamp(0.0886764410425);
    msg.setSource(22134U);
    msg.setSourceEntity(220U);
    msg.setDestination(15934U);
    msg.setDestinationEntity(62U);
    msg.service.assign("RQUSFWVMSQMDYRKSCQITXAYWLAAXHYWPZKANIXFMSDIEVIYJKIZBEDHKMXMRLERWNBBJTOUCUYYTLJRPCSGODMGLBMAFLHWZNNFUKZISAZUTFOGJFRXCHFYBXZXVLMBCSPSG");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.901999580097);
    msg.setSource(42064U);
    msg.setSourceEntity(136U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(29U);
    msg.service.assign("OMACPBTMHXOLFKFLOYTNIXPBSTZLLLQJUKQGZOGVQTPGVVUNXDPBXICFCKJHNKRIMURKPWLXGYFHSXJPECKSTFYUR");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.917390113129);
    msg.setSource(18805U);
    msg.setSourceEntity(90U);
    msg.setDestination(40155U);
    msg.setDestinationEntity(85U);
    msg.service.assign("TCLXGLEEGCSSNXEQGTBJSCNOECFDWGPGNPSUUHAQDZHQMOMSVBUPZKXFDIZXQMDAWFITNDWALKBMZJOEHJHPRWGRTVYSAJOMILVISQFWHFYFFAVGRKXEATYEZUFSYJNPPAIUFHUHYUWXMTYIODGYSBLIQKPYQVCNNCCOZLCUYWHYTBIGNARODJVQKMOREPLRQNIBTDBXUXKXRZBPAPGRSZIZJK");
    msg.service_type = 155U;

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
    msg.setTimeStamp(0.972019593695);
    msg.setSource(59339U);
    msg.setSourceEntity(100U);
    msg.setDestination(57073U);
    msg.setDestinationEntity(220U);
    msg.value = 0.446768481636;

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
    msg.setTimeStamp(0.666347620101);
    msg.setSource(42688U);
    msg.setSourceEntity(4U);
    msg.setDestination(61974U);
    msg.setDestinationEntity(204U);
    msg.value = 0.666248721363;

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
    msg.setTimeStamp(0.401843517608);
    msg.setSource(58245U);
    msg.setSourceEntity(92U);
    msg.setDestination(65473U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0954472848103;

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
    msg.setTimeStamp(0.313484554151);
    msg.setSource(13545U);
    msg.setSourceEntity(135U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(178U);
    msg.value = 0.168244053617;

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
    msg.setTimeStamp(0.162119344223);
    msg.setSource(23200U);
    msg.setSourceEntity(188U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(105U);
    msg.value = 0.855039383956;

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
    msg.setTimeStamp(0.994720511038);
    msg.setSource(46395U);
    msg.setSourceEntity(151U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(218U);
    msg.value = 0.467062883764;

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
    msg.setTimeStamp(0.738616469374);
    msg.setSource(17439U);
    msg.setSourceEntity(191U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(57U);
    msg.value = 0.131583546927;

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
    msg.setTimeStamp(0.282529702437);
    msg.setSource(30110U);
    msg.setSourceEntity(12U);
    msg.setDestination(31486U);
    msg.setDestinationEntity(187U);
    msg.value = 0.278787753588;

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
    msg.setTimeStamp(0.191850305423);
    msg.setSource(35086U);
    msg.setSourceEntity(10U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(209U);
    msg.value = 0.416593121887;

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
    msg.setTimeStamp(0.49579720346);
    msg.setSource(36478U);
    msg.setSourceEntity(117U);
    msg.setDestination(26778U);
    msg.setDestinationEntity(224U);
    msg.number.assign("HZGVLOWXREFGJSUNSPZWWWSOVRQBHELFAHJOBFJKFHELQKWKQRRERQYCJWCQFITSKLRWYEAPNVTHCCKXPDQMBXZDIBGFMXHPNQDWRUBESOZUUOOMUDJDBTPEYYYLAPWFKCUUOJKMKGHNPVCVZTESOFNTXSSAIHLDOIAKLLIJBJRHL");
    msg.timeout = 14402U;
    msg.contents.assign("IACUSQXETJIBTCMFHWRSJTHXJJPHZPIQFHDWPXGDNGZHOEWYQVPGSNBZASETDUEYTVMGZUPLIYJRXBNTESYLYJPCQFYU");

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
    msg.setTimeStamp(0.513997046367);
    msg.setSource(27002U);
    msg.setSourceEntity(194U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(104U);
    msg.number.assign("OIRZLRRLXWQKOLSVIZANSTDNWRXDWQHXVKEMRGOVCBMBKEMNBCXUGLKVYSAOAZWUPCHHQBOCINQLJER");
    msg.timeout = 57550U;
    msg.contents.assign("EFUGAULBWIKTDFDEZEWBZXCQMVINPKAQSOSUCQMKNGWPYYQIFWPDVCVAAFNGSOFLDPRIXHSCKFXDWTZMHUVXTZXWOBHLAXPQBVDYPLYRRZMSBUGEXQLEDNRDXHURLICJRNPCUOWMZGIUJYAUPNWHPAGDTFIOLIKSMYOKNYLVKZEOANDN");

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
    msg.setTimeStamp(0.259881847924);
    msg.setSource(42290U);
    msg.setSourceEntity(218U);
    msg.setDestination(10348U);
    msg.setDestinationEntity(98U);
    msg.number.assign("GEFPNFKFAQWNAVTNDNTCNKASOZZTRWJMGSDXFPEYSSELMAIGGXHISMARLRGZ");
    msg.timeout = 56584U;
    msg.contents.assign("BQBFFGVCHAXWTXHCJJIUOTKOYRKUMIFZUHPRXYTCSICUVNWCQJNEDSSNPYNFEOWCLJPOFPRTAEQHTTSNIJVLTVHUGMEENVVZIKRKGDZFGLLIPCDMQMOSIODKYMDOYGQRKFBYMKQWLPLQXDUPYXXIALVRDFUHLTMIBSNEKPZCWIJYHGXSBCEWMGXBJDEYVCGGDWR");

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
    msg.setTimeStamp(0.353010643499);
    msg.setSource(7244U);
    msg.setSourceEntity(160U);
    msg.setDestination(32310U);
    msg.setDestinationEntity(205U);
    msg.seq = 4025656230U;
    msg.destination.assign("RKAAUHLBMVFDJECTPRELMWSOEVSZWHAVWAPHONLJUGTAMWNUIUXKMXQDKNGEHOKAFXENPRIBXFFRNIASCISFRQBLXYTOFMKHOXUZFPJSJAUCFNTMRVWLLHUHOCQDLQ");
    msg.timeout = 35518U;
    const char tmp_msg_0[] = {-90, 11, 81, -39, -102, -128, -111, -49, 110, 73, 11, 76, 63, -30, 126, 124, -15, 45, -30, -127, 63, 45, -66, 44, -54, -44, -58, -84, -83};
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
    msg.setTimeStamp(0.648104977922);
    msg.setSource(57816U);
    msg.setSourceEntity(34U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(210U);
    msg.seq = 1079767186U;
    msg.destination.assign("RYQXWQHMQCKIPTQGKSUNXQAMBJNKPKRRBETBAWIDICNLOVWVTUIACINJGWKYPDOFJANPHLPPDELPOVXXHVNHOHLEWVCGFENGSHZFURIWMCZSUUUERJCRMWWPRHXWYTYBVOTVRDQGTCTAJZLKSFXHBDZUMGVSDNSYDOXKTKJFOJSMSMLGLZE");
    msg.timeout = 57445U;
    const char tmp_msg_0[] = {-108, 39, -64, 66, 126, 81, 89, -44, 42, 89, 76, 27, -104, 44, 88, 110, -43, -115, 105, -10, 120, 53, -48, -50, -77, -28, -47, -51, -2, 0, -19, 64, 9, -1, -53, -18, 23, -27, 96, 29, 42, -121, -45, -33, 39, -45, -113, -6, -16, -39, -35, -61, -96, 110, 58, 35, 5, -117, 119, 84, 38, 82, -2, -10, 2, -39, 118, -33, 50, -57, 31, 9, 1, 70, -43, 37, 125, -34, -44, -70, 78, 90, 90, -58, -121, -53, -103, 8, 28, -47, 11, -29, 89, 23, 45, -27, -43, 83, -68, -42, 84, 110, 112, -92, 126, -38, 63, 52, -37, -79, 9, -21, 80, 62, 5, -91, -22, 58, 96, -38, 105, -91, -16, -95};
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
    msg.setTimeStamp(0.990895674482);
    msg.setSource(58766U);
    msg.setSourceEntity(26U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(88U);
    msg.seq = 3962443279U;
    msg.destination.assign("EDTHQABAJMRCZFVWMRUQBGOWEWFTDMVQNGISEIPHGLZNUSEMACDORVRUZCGWNEHNTPVBURCXBCKSPXPBTJIBIDNQOALCFWLJHYVAOWQLLLPHKTDFYDRLFOGKZEUVIKSLAHPXZJJVPBIJTYGGXKMKOVPNNQDQLKYMCAZTXSUFMYNZXOIYDTVTISWLOQMNQXEWG");
    msg.timeout = 33219U;
    const char tmp_msg_0[] = {-89, 46, 7, -46, -80, -4, -32, 108, -23, 125, -32, 46, 41, 78, 1, 8, 86, -119, 97, -67, -16, -17, 104, 64, -69, 78, 91, -112, 103, -52, 10, -107, -127, -31, 98, -42, -46, -60, 47, 9, -86, 63, -42, -51, 103, -16, 12, -35, -74, 52, -41, -10, 17, -21, 57, -49, -71, 123, 93, 89, -23, -72, -26, 54, -96, -63, 31, -90, -125, -59, 110, 33, -31, -7, -57, -64, -81, 68, -24, -94, 62, 106, -121, 36, -30, 28, 7, -101, -93, -67, -112, 27, -123, -47, 84, 0, -127, -82, -51, -8, 27, -87, -124, 23, 112, -114, -50, 112, 82, -41, -64, 83, 22, 93, -18, -56, 108, 46, -34, 26, 83, 94, 40, 6, -81, 43, 49, 43, 28, 42, -99, 87, -17, 107, 14, 4, 29, 111, 69, 100, -103, 2, 30, -72, -57, 56, -40, -68, -69, -80, -33, 37, 102, -108, -114, -39, 9, -109, -12, -61, 100, -65, 60, -108, -38, -116, -43, 91, 43, -81, 1, 98, 24, -5, -6, -32, -39, -103, -64, -40, -13, 65, 102, 118, 33, 14, 13, 33, -25, -122, -47, 57, -5, 119, 79, -77, -34, -73, 1, -117, 54, -84};
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
    msg.setTimeStamp(0.623754246487);
    msg.setSource(9968U);
    msg.setSourceEntity(133U);
    msg.setDestination(45739U);
    msg.setDestinationEntity(245U);
    msg.source.assign("ARJYXDBRMXTXVYOGIYGEIBIVLMSJMXWEUEGMPCCTSSFKVQBJIUDMJBRMSBHUKQTVDLGWKRGTIHOFECCSBRWFHYVHQJHPTSQOQENEZOEXEZQKLKKBYRWBUUMIGYZICAVSRBTZMKIWZMHRNUWOAZLPDFQKQJYUQYPRIZHXPDDNVYHNOGFLPGCIKCUWPNAXRJJZAKZZWSFLTLHNENFDJFGA");
    const char tmp_msg_0[] = {60, 49, -79, 121, 99, 66, -119, -115, 22, 65, 7, -42, -30, 64, 41, 34, -81, 119, -20, -7, -39, 38, -108, -38, 0, 38, 89, -122, -32, 64, -122, -94, 123, -44, -83, 100, 68, -94, -22, -56, -87, -106, -97, 4, 86, 59, -49, 110, 80, -120, 19, 62, 40, -53, 43, -73, -40, -47, 69, -95, -105, 34, -96, -72, 61, -94, -9, -5, 123, -49, 59, 61, 69, -72, 0, -114, 44, -52, 69, 109, 10, 44, -87, 34, -73, -103, -108, 13, -73, 14, -57, -103, 30, 32, 114, 113, 5, -88, -40, 77, -113, -23, 40, 109, -21, -109, 64, -61, 93, 67, -122, -55, 87, 100, -117, 33, 63, 9, -71, 4, -30, 39, -8, 110, -34, -89, 98, 22, -4, -125, 52, -37, 62, 40, -124, -109, -60, 57, -1, -87, -73, 116, 46, 67, 45, 4, -117, 118, 122, 64, -100, -29, -41, -42, 35, -4, -23, -11, 8, -62, -92, -49, -28, -78, -83, 69, 82, -71, 107, 100, 117, -71, -31, 70, -2, 67, 37, 0, -120, 105, -90, -72, 62, 19, 74, 77, 19, -32, -39, -47, 20, -50, -115, 98, -58, -65, 54, -85, 5, -90, 106, -56, 54, -36, -2, 124, 73, -120, -19, -14, -78, 123, 34, -39, 83, 125, -48, 64, -40, 68, -44, 48, 58};
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
    msg.setTimeStamp(0.707955537823);
    msg.setSource(25577U);
    msg.setSourceEntity(170U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(224U);
    msg.source.assign("STCQXUFBZHKLDTBIXNWDSFSLDWKOMVPHUURJAHXVOWYJOFTKMARJVRNTNWQOYNEOHPRTDANYMUOGKHJGCPZQBCYGKBJCQBGPQLEWQCILKDQTJHIFNLEVNLZVCBIDZJBPABBKHULGWXLRHVDLMPESAEGKEJUSRXXMUWPNMKSERAXIFSSOZCDIMIYMYXZXLDGXTJZQIZFVHAAVHYTITTMWGUOMCGUAKERNRZGNQVPSPPYBUDRFJVWOYICSQA");
    const char tmp_msg_0[] = {63, -89, -3, 27, -113, 69, -107, 19, -10, 15, 86, -9, -57, 88, -50, -7, -20, 20, 124, -66, 95, -9, 64, -112};
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
    msg.setTimeStamp(0.18562242751);
    msg.setSource(58811U);
    msg.setSourceEntity(58U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(200U);
    msg.source.assign("UYPUZAPEBQZKMSYBSRYGQCHRZJIZOXLBGFKCVRXWTFTVXXEPSXNUWREVSIPISRDUDBWSIPALCYZDQEWVMXWBTUJEJKDFNKVLBDZEMMXEBUYMWLCTDOGHIAKHAMEGVS");
    const char tmp_msg_0[] = {-68, -94, -112, 84, -109, 49, 14, -61, 117, 118, -95, 64, 123, -113, 21, -69, 71, 27, -120, 105, 85, 0, 5, -22, -48, 71, -25, 25, 44, 106, -71, -75, 40, -93, 96, -49, -120, 118, -72, -33, 11, -110, 38, -78, -46, -98, -21, 84, 37, -75, -80, -70, -70, 118, -22, -29, -20, -79, -27, 44, -5, 82, -54, -10, 49, -123, 6, -122, 24, 100, 103, -119, -111, -30, 57, -32, -1, 1, 108, 59, 124, -60, -91, -79, -60, 56, 106, -44, 102, -58, -31, 89, 92, 68, -11, -64, -43};
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
    msg.setTimeStamp(0.162331600247);
    msg.setSource(44739U);
    msg.setSourceEntity(72U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(5U);
    msg.seq = 3716564434U;
    msg.state = 248U;
    msg.error.assign("YLMJWZFVUGHIDLBPYZPSFABWPIMVBCOQMXOLOMZWKYYDAQ");

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
    msg.setTimeStamp(0.0227228542329);
    msg.setSource(414U);
    msg.setSourceEntity(236U);
    msg.setDestination(57809U);
    msg.setDestinationEntity(172U);
    msg.seq = 1185467186U;
    msg.state = 230U;
    msg.error.assign("PQUQWRCMDNGEDKFVFONSOWKWYIWPTBPQCIJBJWXZTVJKQVCDNHIQOCKMGYXYBTSPYOKDGVCDXXXMKZUWTTPITRPCODFYQEXJCHFJJASELTDLDUAMCLGHN");

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
    msg.setTimeStamp(0.236644276468);
    msg.setSource(18818U);
    msg.setSourceEntity(148U);
    msg.setDestination(17635U);
    msg.setDestinationEntity(237U);
    msg.seq = 2775255455U;
    msg.state = 149U;
    msg.error.assign("XMHOCQVMFKJSAWCCJOXTQQXHNTLCDJFMYGPSPDGIEFDLKKLETOGWLHLONVMYJIZKBKGELRFUSGJIXXAHFRXBNTHXT");

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
    msg.setTimeStamp(0.300259361982);
    msg.setSource(61354U);
    msg.setSourceEntity(246U);
    msg.setDestination(11397U);
    msg.setDestinationEntity(225U);
    msg.origin.assign("XTDHPODPWWSNSVYNDYYKYXCABVOABRGDWXTILCKMGFHUUNQCYKFDEPQYWNQXBIBABFZYHRLMIRLXLNEMLZFRTBWEPHNFWLSNQARFDIWOUQLSLCGZGALSNPEKITCPVSROVKPSJZTVBOE");
    msg.text.assign("AJUYTEXWJWVOQLHOGCCPKSCAXIDZPHWRMDLPOLYNKMTRTXSTBQQHXTBOYMCUBTGMBBTSBTFTSPNBVQIOSDYUMRSECXZOWMVVZQRDZBEAIEGVKWZGGNFLBFCGWEJMJRQFSNHNPVOJFRRANBAQXIXLPIDXZQDYDYPGSHJGHJRIXWUPKULLKQY");

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
    msg.setTimeStamp(0.478335107712);
    msg.setSource(24162U);
    msg.setSourceEntity(104U);
    msg.setDestination(15672U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("ZSIXSQKVBXLBLRRNBRGPDMPFNOTEMKQIIRKRMWIFYMCCFZTPYHPPYETENKFWQRSXSWHYAHTSKOPUSGXAGXKDLGTJVTMSVWOCKTJNBQYLUB");
    msg.text.assign("FKHNIYWXANTKHABDZDJRJQCPHECJIEZBCHNTYRLJBDPOFQPDXNMKJBFYJVMZCMQVFOSKPBBQCNXKOOLLOCRDXDZCQSGEWTYSWCKNFHVGNIOFOUBRKMLVCAELDTEPZERUPUNWYIZAISNGBSQWHWMGPK");

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
    msg.setTimeStamp(0.420492852283);
    msg.setSource(34853U);
    msg.setSourceEntity(252U);
    msg.setDestination(47194U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("SPFAVWXHYYNRAOZWKQGBAINVNSXYJLPBWECOHDOZYBAVZGQPQNEFVLDRSWQKIMTTVFFXBQTSCBVIMIWRHOAQHCDNCNDPGCMOYUYF");
    msg.text.assign("JBAVKLDCFHDIOGDQWFXGFNYKVZTQLQGHCRFNTISIGFDMIWDVCCAAYUOJWKQRHLHDBLWNFRPZNNHYFPXIBIDCZUWYXRVCUARVLOUMSLSLEEIITSAPSWHCRDIEEKVOJTXUQKQAMTMQYJXOQPUKKWJMBDGSQJEMVZJTAHXQHRBYVBPNTGJNZERZMUFOUAPXFRYCPJPTMEHESUIZAYTOXYWOMJLNFLBZCEZRBOTWECAOXSGKPSUNSVLWZNBYMGDG");

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
    msg.setTimeStamp(0.929239545042);
    msg.setSource(11224U);
    msg.setSourceEntity(173U);
    msg.setDestination(10293U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("NMBYUOBAHNDCEAGLZEXRHZQGZANILTVYXIKXVSNSXEPIPDALULABWGQNTDSFPDELGZWXOUBQPPJOLLVKHYWLIKMAITWWISQCQCKHVAAWRBZVTPJKFVEMFOFRYBONFKDEXCTJTZMJCZROWGEWYUJKCMPTBSOMSMKWARIRFFDZIRQPUVBBEHZPLGFXXDVYQRTDOYGLSJHKMMCGONNJCJAUQYSIFG");
    msg.htime = 0.630936731496;
    msg.lat = 0.797474628262;
    msg.lon = 0.620413236895;
    const char tmp_msg_0[] = {116, -79, -25, 0, -90, -71, 9, 35, 4, -5, 74, 17, 61, 19, 122, -69, -95, 49, -51, 124, 74, 113, -80, 49, -14, -103, -123, -20, -72, 73, 14};
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
    msg.setTimeStamp(0.461961170126);
    msg.setSource(37679U);
    msg.setSourceEntity(159U);
    msg.setDestination(45901U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("RHRJTMTFEZAJGZZUKYDNEOSLNAUCNJGIWYMNIWVCNCDVBGUWYCJIEMKIJCBSVXEYBMEFULBAXIVLFKWAPMQRJVQSXOOTDZGDSTGRVG");
    msg.htime = 0.282648834561;
    msg.lat = 0.619569274626;
    msg.lon = 0.206283387098;
    const char tmp_msg_0[] = {31, 88, 32, 14, -85, 21, 18, -1, 7, 73, -65, 90, 23, -100, 15, 107, 117, -85, 107, 9, -119, 55, -80, 9, 103, -96, 89, 94, -22, 109, 105, 121, 124, 29, 102, -19, 85, 103, -87, 13, 2, 7, -74, 111, 75, 40, 97, -12, 45, -52, -32, -112, 112, -27, 108, -91, 77, -54, 84, 28, -63, -127, 59, -128, -68, -113, 66, -122, 23, 9, -66, 3, 103, 69, 119, -96, 0, 33, 68, -110, 58, -93, -128, -98, 2, 113, -8, 125, -112, -22, 49, 23, -25, -6, 50, -112, -41, -31, -107, -15, -61, 59, 66, 2, 100, 39, -116, -120, 86, -125, 117, -25, -5, 54, 47, 55, -74, 83, 12, 124, 91, 37, -69, -112, 20, 24, -30, 53, -101, -109, -94, -82, -67, 88, 107, 10, -97, -120, -73, 14, -89, -128, -106, -25, -108, -31, -53, -10, 84, 116, -118, 6, 119, 91, -102, -123, 23, -76, -1, -27, 32, 10, -79, -48, 33, 111, 10, 0, 0, 41, 22, 47, 55, 4, 91, 25, -117, 15};
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
    msg.setTimeStamp(0.834505249708);
    msg.setSource(40926U);
    msg.setSourceEntity(166U);
    msg.setDestination(24391U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("MSMXLXURYDPYKBWAICUOAMDJHQJE");
    msg.htime = 0.991613599433;
    msg.lat = 0.366994582272;
    msg.lon = 0.239573469305;
    const char tmp_msg_0[] = {97, -109, -94, 48, -92, 32, 38, -17, -104, 73, 104, -116, 125, -116, 32, 16, 35, 41, 28, 33, -100, -43, -103, -12, -94, 52, 38, 58, 7, 42, 33, 110, -27, 122, 70, -119, -85, 48, -62, 7, 77, 85, 69, -34, -91, 113, -122, 49, -74, 48, -24, 124, 97, 29, -5, -61, -20, -28, -110, -91, -65, 100, 16, 111, 80, -117, -118, -86, 94, 125, 88, -75, -39, -64, -21, 77, -21, -126, 32, -30, -50, -21, 115, 19, 49, -25, 109, -117, 78, 45, 77, 107, -65, -115, 35, -118, 97, -66, -89, 72, -109, 100, 20, 38, 87, 108, 112, -37, -58, 17, 34, 12, -73, -90, -43, 37, -34, -6, -3, 58, -68, -99, 11, -34, -37, -128, 15, 63, 90, -80, -47, -20, 117, 100, -96, -110, -55, 112, -67, 69, 55, -26, 58, 46, 126, 87, -58, 61, -11, -49, 120, -13, 25, -38, -116, -29, -91, 57, 90, -5, 105, 57, -115, -80, 32, -86, -40, -118, -121, -116, -90, 19, 64, 40, -37, -101, 71, 121, 18, -38, -45, 21, -43, 85, 108, -20, -68, 1, -22, -36, -22, 109, 7, 79, -83, 124, 95, -128, -109, -70, -91, 80, 105, -117, 105, 49, 88, -90, -19, 126, 0, 91, 19, 31};
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
    msg.setTimeStamp(0.851344961135);
    msg.setSource(21282U);
    msg.setSourceEntity(235U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(245U);
    msg.req_id = 29863U;
    msg.ttl = 27052U;
    msg.destination.assign("WTBABAREMUSEXODWHPMVPBIBYMXFDTOZIIRRPZENKMHLVWHRZNVASFSUODCGXHINZQG");
    const char tmp_msg_0[] = {-120, 47, -19, 1, -22, -106, -1, -30, -26, 7, -97, 114, -33, -56, -19, 0, 99, -87, -81, -73, 40, -18, -55, -24};
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
    msg.setTimeStamp(0.959198765121);
    msg.setSource(33297U);
    msg.setSourceEntity(225U);
    msg.setDestination(23400U);
    msg.setDestinationEntity(226U);
    msg.req_id = 36821U;
    msg.ttl = 9625U;
    msg.destination.assign("DTSFEBIFZIPHLRXDPWNMZRLUJQYHQAJWFUMHKPVJNZVDRJMJZWVRDNFDEMPYWTKYUOGWLTACLWZACSPMZRHGYGFNBPFDCBKAUUECWOQNSGAUHUMVXRKOOKPTEEHNGUSCALCDJBKPVIXUAY");
    const char tmp_msg_0[] = {32, 78, 109, -6, 90, 3, -30, -1, -96, 21, 28, -107, 49, 122, 120, 90, -34, -94, 52, 2, -20, 118, -48, 9, -7, 11, 47, 19, -10, -93, 89, 0, 48, 37, 5, -49, 10, 77, -45, 65, 71, -38, 15, -27, -2, -113, -94, -94, 60, 118, -121, -27, 33, 9, 53, -128, 86, -89, -60, 52, -4, -8, 5, -7, 82, 125, -53, 30, -90, -69, -116, -117, -11, 33, 22, -39, 79, 96, -25, 7, 54, 45, 68, 114, -88, -64, 45, 99, -101, -123, 20, -59, 103, 11, 44, 44, 81, -39, -2, 19, -68, 10, 21, -128, 22};
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
    msg.setTimeStamp(0.649462437832);
    msg.setSource(34699U);
    msg.setSourceEntity(58U);
    msg.setDestination(32615U);
    msg.setDestinationEntity(48U);
    msg.req_id = 2938U;
    msg.ttl = 46597U;
    msg.destination.assign("WORYDCSZQNSFWUNGPMOZZKELNZKKJSFKCOGUPTAISXCUFTWOEXLPCQPQDSODWHZOJFEAPIVHGRBGPNTSKZTBDXCNLLHUMRAKJYBVXYHOZRNICJLIUJMXLDFIES");
    const char tmp_msg_0[] = {83, -3, 45, 60, -65, 113, 100, 81, -13, 123, 24, 84, 4, 101, 100, -82, -66, -46, 73, -9, 109, 117, 19, -83, 84, -73, -106, 79, 12, -32, -44, 118, -80, 50, 71};
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
    msg.setTimeStamp(0.823342945226);
    msg.setSource(13130U);
    msg.setSourceEntity(240U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(183U);
    msg.req_id = 61924U;
    msg.status = 117U;
    msg.text.assign("AQCMNWRSUIEXCGMVGZZBVRQAAZKUMFWFBNKJORTQODZDBNWUVAJFWFDYYIKWAHQHPYSQTRCQRAGYLWMZPLERBFHOHZDMJSOSVKPOWMFRDWJJDVVXZGZINBXJUSGLBNICBTJMNIECGLICPBFIWTZWIPHYMCRQXXONEKTCTUHTLDCXNIFYGKERXTXNOSOEVSGLGTQJQXFVMFELDPUEUSXPYHUE");

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
    msg.setTimeStamp(0.171276034263);
    msg.setSource(25783U);
    msg.setSourceEntity(119U);
    msg.setDestination(53263U);
    msg.setDestinationEntity(40U);
    msg.req_id = 35861U;
    msg.status = 233U;
    msg.text.assign("VIAQNTMHEWUJFFTBSVPIZTZGJVPYZFWIOTLRGGMFVHCSPSJTWYLLCHFYHD");

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
    msg.setTimeStamp(0.133133311014);
    msg.setSource(36437U);
    msg.setSourceEntity(109U);
    msg.setDestination(59643U);
    msg.setDestinationEntity(146U);
    msg.req_id = 35440U;
    msg.status = 193U;
    msg.text.assign("KMIVDQSOGHJGMNXHEDBUXSZPEXIUQLOZUWMPLHRXQRUDTWTFNVCYMNKIBQRFXFVTKBEFHVFDLEXPZHNOBAWDTSRWWYCPSLTZAZXAKOEZKVHTOGRSYMCDKYQTSQHBVGRWBKMLXHBJCMEFVLGSQAIIAGISGWCRERFTFYONYQUZTDINZEGADXLQMCSBYBNCENUZJFDNRADWIKAHKTJWHWOCNOIJXZKGJVPYPIVMBJOPFJVCCPUYPRQJPLMY");

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
    msg.setTimeStamp(0.317594013866);
    msg.setSource(45167U);
    msg.setSourceEntity(149U);
    msg.setDestination(29301U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("WXYUIMDBLDXTIRMXEZPTBWLCGPSKKZUOLFZGNRMRGSVUPEQSXHNGANOGYXEUEFCKOVSHDWZUGAVZSVAHTYJERQTFHVQJQPLHLZBYFMPQOKJNNFBCBZEWHOSLGV");
    msg.links = 2533715941U;

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
    msg.setTimeStamp(0.999126787265);
    msg.setSource(2267U);
    msg.setSourceEntity(141U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("JTYKDCFOCAAWGBOFDFBSIOGBMDYTXCGNSYCHLFO");
    msg.links = 2800329626U;

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
    msg.setTimeStamp(0.991004152103);
    msg.setSource(49770U);
    msg.setSourceEntity(153U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("VQDNKEOSLITPHKCSCGXWQXONDUMYDJRUZLYLSKKREJFXLEUEXNFMWLGXNAMPBXLMFNODMNGLHLUOPZFMGRMHDZYTFTYVFHHBERRCCOQSWBGNZURWTXTLRECYOKVWVUPXJZRQTFDIGTAJZTWXPBHIUEHIRKMDHBNPQRWTQYUAEQGGAYUAIPIDLW");
    msg.links = 2585667483U;

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
    msg.setTimeStamp(0.00709090661643);
    msg.setSource(32574U);
    msg.setSourceEntity(78U);
    msg.setDestination(63592U);
    msg.setDestinationEntity(154U);
    msg.groupname.assign("GFVTFIRKJTRXAJHGGSAZYMFCSREKBIKHZQYNUHLICIBWELXBWVBFGLVYAIFJIFDPACJWJIKLURPWETOMNZSFLOURDSMZTNCZPAEUMUDZKQLUMPTKXBTUUQBKDVVCSDOIOSWGMRRESOZORGQSQBUZOZYLNLCMJITDLXVQOAJNFAADOSWCVESMXRQDYYJBHEGWAYLVPPVBGZJPWHEQXTPHGPHPYDKTFNXXNHHYJKXQANWTIWBNOYU");
    msg.action = 43U;
    msg.grouplist.assign("CWIYFLHJDMRSNLEBWBTPEAOACMSRVVUGQGOWZDEDFWISBPWCCBOBUACMPJXGHHJGWCLUABXNHLNTEPIQEGVZLIUVQVOIFLFLOWFZYFXCNUHGJDTRXPPHXKVNIXB");

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
    msg.setTimeStamp(0.376309767529);
    msg.setSource(24234U);
    msg.setSourceEntity(55U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("ECCLJSDWMXQSVCGVNBHAJZFIAATMEPVKPXHWYHOVECZUHYFMMEDBWVMGJBPFWKYQOSKYMAKZZVJIUIHSXYGXSDIGZLBRRLXABGYHKUEWABVFXCBFPIPHRXCELYNPZFJDQDDOAKNOKTNIWNPXBJFOSDMVDKMOCBRKVNGHCTENJUDXSZQGNMJLWTFLXORRGCSIYRTSZUOUYELVFTEPTUJOPGANIQYTNRL");
    msg.action = 223U;
    msg.grouplist.assign("YXOJELZABKFEVTPXZNQVFVBHDCWPSIMMVEHVFLNQUYEWREBBECXNWYDGPHHPKO");

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
    msg.setTimeStamp(0.434407487522);
    msg.setSource(5203U);
    msg.setSourceEntity(87U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(45U);
    msg.groupname.assign("OGYHOFQZXWGGWVMKHZDAEYKTNBVDGSTSPADTLMUIPVNPZHHNMQOABOYJSSKCXUOYUPVSGSIFVBYTYLZKJDQBIEEWEPGZZCNKNUSAAMMEOCMCV");
    msg.action = 58U;
    msg.grouplist.assign("YCRREDWLKKWEFNBXTAFYVHUCRRPUKZSPJNWNJEMLSFMBOUTHSQUTKAEPOUKWGQPPPQVFRDDKZCBWTBMHVSGVOIQLKEVTSYLOYKTEDZQYCBWMLDHEZTENGADNMLQBXJCAUINLGGSFOWRJXEGAYCDWJNIXOZFVMPOGTPXXYQYHPICFARJRMVLSJIUVBAOWHABIBTSEQTPOHAHXMXUUNGKNZAQFMQCCUS");

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
    msg.setTimeStamp(0.45190332094);
    msg.setSource(9931U);
    msg.setSourceEntity(222U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(96U);
    msg.value = 0.631525363586;
    msg.sys_src = 34324U;

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
    msg.setTimeStamp(0.341613940075);
    msg.setSource(56805U);
    msg.setSourceEntity(211U);
    msg.setDestination(45333U);
    msg.setDestinationEntity(207U);
    msg.value = 0.789963540037;
    msg.sys_src = 8546U;

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
    msg.setTimeStamp(0.47878684085);
    msg.setSource(49340U);
    msg.setSourceEntity(237U);
    msg.setDestination(9850U);
    msg.setDestinationEntity(240U);
    msg.value = 0.238135254559;
    msg.sys_src = 50545U;

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
    msg.setTimeStamp(0.584950699659);
    msg.setSource(50104U);
    msg.setSourceEntity(100U);
    msg.setDestination(20600U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0806943663523;
    msg.units = 1U;

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
    msg.setTimeStamp(0.710569389203);
    msg.setSource(33275U);
    msg.setSourceEntity(78U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(131U);
    msg.value = 0.395760233398;
    msg.units = 210U;

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
    msg.setTimeStamp(0.00334022903348);
    msg.setSource(19279U);
    msg.setSourceEntity(225U);
    msg.setDestination(58219U);
    msg.setDestinationEntity(71U);
    msg.value = 0.539953234344;
    msg.units = 17U;

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
    msg.setTimeStamp(0.0763941269288);
    msg.setSource(43581U);
    msg.setSourceEntity(5U);
    msg.setDestination(37396U);
    msg.setDestinationEntity(1U);
    msg.base_lat = 0.0565542221208;
    msg.base_lon = 0.845015572797;
    msg.base_time = 0.836369006982;

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
    msg.setTimeStamp(0.657405339122);
    msg.setSource(27550U);
    msg.setSourceEntity(248U);
    msg.setDestination(53985U);
    msg.setDestinationEntity(110U);
    msg.base_lat = 0.112555434368;
    msg.base_lon = 0.619496028418;
    msg.base_time = 0.200455334081;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 15806U;
    tmp_msg_0.destination = 59530U;
    tmp_msg_0.timeout = 0.247960535529;
    IMC::CcuEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 251U;
    tmp_tmp_msg_0_0.id.assign("NKBQZTUBXSLEGDCDTQSRPEGYZXQCQGLCSAHHPNMUALZQSJMUVPFOTJTOPECNVYWKENNDADHNNQFFAEIBGGYYTVUKDRVPEXWSLPFRADGJDUXGBVMIEKVAKWXNJOXAWCZIPXTRPJBHGRIPTCTSRZYAQHJFXNOOLBCOLUIKHDHLSPSKFWWEBRBU");
    IMC::EulerAnglesDelta tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.932793260223;
    tmp_tmp_tmp_msg_0_0_0.x = 0.594080496198;
    tmp_tmp_tmp_msg_0_0_0.y = 0.116658432092;
    tmp_tmp_tmp_msg_0_0_0.z = 0.405784872395;
    tmp_tmp_tmp_msg_0_0_0.timestep = 0.0285146254524;
    tmp_tmp_msg_0_0.arg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.453231303302);
    msg.setSource(18764U);
    msg.setSourceEntity(57U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.709292765628;
    msg.base_lon = 0.554579807325;
    msg.base_time = 0.974359492282;

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
    msg.setTimeStamp(0.00520461370473);
    msg.setSource(557U);
    msg.setSourceEntity(223U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(22U);
    msg.base_lat = 0.393171456997;
    msg.base_lon = 0.86321758175;
    msg.base_time = 0.198422563389;
    const char tmp_msg_0[] = {-51, 95, 58, 106, -2, 46, 75, -120, 15, -106, 94, 104, 96, -70, 48, -65, -120, 123, 102, -113, -2, -30, -95, 73, -124, -90, 70, 115, -52, -95, -27, -106, 95, 13, -120, -46, -76, 88, 51, 43, -110, -6, -10, -59, 63, -108, 74, 41, 22, -122, 102, 69, 47, -103, 7, -75, -18, 112, -112, -82, 1};
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
    msg.setTimeStamp(0.193933519821);
    msg.setSource(56489U);
    msg.setSourceEntity(97U);
    msg.setDestination(59234U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.570700678152;
    msg.base_lon = 0.518164327932;
    msg.base_time = 0.82028387575;
    const char tmp_msg_0[] = {-15, -105, -28, 87, 49, 38, -13, 77, -92, 59, 95, -127, -92, 41, 106, 17, -42, -67, -71, -55, 22, -26, -64, 30, -64, 6, 35, -11, 15, -68, -34, 57, 119, 57, -56, -104, 18, 24, 85, -50, 119, 106, 124, 125, 67, -48, 66, 54, -113, 124, -77, 105, 52, -25, 54, -24, 57, 112, 63, 50, 110, 105, 54, -76, -104, -23, 75, 12, -75, 16, 97, -49, -45, 96, -28, 79, -73, -16, -92, 13, -31, -122, -106, -5, 114, 14, -85, 11, -1, -88, 88, 67, -39, 109, -9, -54, -68, -49, 22, -5, 56, -25, -4, 16, 121, 46, 120, 54, 36, -61, 94, -15, 85, 46, -43, -96, 79, -31, 61, -61, 23, -17, 54, 33, -95, -97, -75, 98, -72, 23, -56, 56, -9, 100, -28, 13, 64, -21, 31, -123, -4, 58, -16, 9, -1, -45, 120, 91, 65, -61, -99, 61, 25, 72, 110, 62, -21, -42, 18, 7, 40, 89, 98, 98, -25, 82, -110, -26, 66, -43, -17, 86, -28, 25, -7, 17, -51, 116, 103, 13, -92, -2, 21, 32};
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
    msg.setTimeStamp(0.199621395391);
    msg.setSource(9009U);
    msg.setSourceEntity(219U);
    msg.setDestination(40316U);
    msg.setDestinationEntity(89U);
    msg.base_lat = 0.630221440517;
    msg.base_lon = 0.155069703252;
    msg.base_time = 0.686983944259;
    const char tmp_msg_0[] = {-89, 29, 54, -73, 30, -43, -49, 24, 70, -4, 80, 1, -93, 108, 10, -72, 95, 22, 34, -113, 81, 14, 114, 78, -5, -51, 99, 37, 7, 120, -26, -62, 106, -91, -8, 50, -9, 86, 121, -12, 20, 48, -100, -45, 24, 10, 28, 38, 31, 17, 74, -55, 110, 92, 56, 43, -59, 97, 100, -100, 103, -7, 12, 61, 76, 9, -65, -80, 121, 32, -101, -29, 5, -128, -13, 73, -29, 2, -11, -66, 113, -53, -88, -105, -107, -7, 113, 52, -113, 26, 46, -49, -108, -75, -23, -112, 34, 79, -124, 63, 105, -91, 30, -124, -34, -28, 51, -61, 44, -103, 36, -111, 113, 88, 86, 43, -81, 110, 74, -28, 28, 64, 99, -99, -22, -6, 56, -109, -99, 34, 60, 48, -17, 108, -78, -117};
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
    msg.setTimeStamp(0.700743134901);
    msg.setSource(45061U);
    msg.setSourceEntity(5U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(31U);
    msg.sys_id = 62595U;
    msg.priority = -127;
    msg.x = 5433;
    msg.y = 6766;
    msg.z = 4780;
    msg.t = 22304;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("WGOICMTRIVYEBZBIFFKPNEZMIGWJLFUBMVPCPCIGMVYAATXDQTRTCWTNZIYQJLPNEEVKYOARNHCAFFSSBXHXIPCLXKQMVLDUBODVHXQLVNAWQAOPFFKSMWEGJMZOKEIJCOUXF");
    tmp_msg_0.message_id = 50835U;
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
    msg.setTimeStamp(0.23386813321);
    msg.setSource(60634U);
    msg.setSourceEntity(101U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(208U);
    msg.sys_id = 33634U;
    msg.priority = 48;
    msg.x = 29375;
    msg.y = 19497;
    msg.z = -3660;
    msg.t = 15356;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.694038575361;
    tmp_msg_0.units = 42U;
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
    msg.setTimeStamp(0.155594257499);
    msg.setSource(41445U);
    msg.setSourceEntity(115U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(148U);
    msg.sys_id = 11686U;
    msg.priority = 17;
    msg.x = 20098;
    msg.y = 18892;
    msg.z = 1707;
    msg.t = -29416;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("PNAJFNVIQKJPWZOULGQSTNCIOSLQBGYWUKLSZCHPLSDPYHTLZDOHMZUZRPTVFEBFVKAUIEZKCJUJRXKDXAMMKFMCRMYAVYNQJQXVCFVXXGBTYCPBRIBLEACWXJHBSLRNRIRDFHWMGCKBTOLDWQFNVPHQDCTFOYYQOSTKROBMNHFEWPIATREQSNIMAITPSJFOGEGGUMBHL");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("YMQVXLVRBJLXUWOXVPJNQSOCCFZJDVFKSTUXCDNUHOUQFXFNRZJBOIZGOMUWARROSHOKYXPDJJFWAHYZLZKGNNFZMUDIPCSLQNZPYTMHGWHBTQHLMUKRKWGOFNPEISPENHBPBKYQUWSBRDIVGTIK");
    tmp_tmp_msg_0_0.predicate.assign("SSHEDNLAKJXJFRTILEQEEOMEKVZSVQOMQZOBBFUGFRGDSNXJFLURTLXMEKEVSFDUCIOGOWDWIQCKGWYKYJGCUVQICWATGFRBMRQLQMRYHHVZMYBJOAQKLXHJPXUTNPVQBZDAGHIFZYBOAHMIZHPRPPGKNISPXUYWKXAPTNWCJFFLOSHSAWYZPYTNWB");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.240330317304);
    msg.setSource(23142U);
    msg.setSourceEntity(129U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(36U);
    msg.req_id = 599U;
    msg.type = 156U;
    msg.max_size = 30517U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0389603139069;
    tmp_msg_0.base_lon = 0.976546922211;
    tmp_msg_0.base_time = 0.122450240227;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 38833U;
    tmp_tmp_msg_0_0.destination = 26505U;
    tmp_tmp_msg_0_0.timeout = 0.786144328439;
    IMC::Drop tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 38209U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.99755916816;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.706678129127;
    tmp_tmp_tmp_msg_0_0_0.z = 0.00739191589882;
    tmp_tmp_tmp_msg_0_0_0.z_units = 150U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.00937477562711;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 222U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XNBLMRNJXZLOJOFETGBAZXCUFSLMCQFDQXDKKJYEWGFHEFFYKKJTZNMMSNRUQXRRSSIONPHEBPBQBHV");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.383407823449);
    msg.setSource(38940U);
    msg.setSourceEntity(171U);
    msg.setDestination(17435U);
    msg.setDestinationEntity(180U);
    msg.req_id = 6797U;
    msg.type = 195U;
    msg.max_size = 54202U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.253021750841;
    tmp_msg_0.base_lon = 0.124768029033;
    tmp_msg_0.base_time = 0.578538043488;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 39992U;
    tmp_tmp_msg_0_0.destination = 58511U;
    tmp_tmp_msg_0_0.timeout = 0.342161753325;
    IMC::UsblAnglesExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("UWFCVDZMSUASIETVHAOGOPRXQFLEDNSDORJMLGWKNHFOXLCUWJNWOYJFZYIQNBBXQBJZJTDIBBZVCVMIDVACPAUWULQSAZMBJHYHZJSRVJMPUFLOSRZSKLODVFXCXZGWTVYYBNVUGHUPKBXVQYPKA");
    tmp_tmp_tmp_msg_0_0_0.lbearing = 0.865654449239;
    tmp_tmp_tmp_msg_0_0_0.lelevation = 0.3300410981;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.533276381276;
    tmp_tmp_tmp_msg_0_0_0.elevation = 0.590930052429;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.944262464245;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.400794139298;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.930201852407;
    tmp_tmp_tmp_msg_0_0_0.accuracy = 0.377573591888;
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
    msg.setTimeStamp(0.369578033986);
    msg.setSource(17433U);
    msg.setSourceEntity(229U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(110U);
    msg.req_id = 60968U;
    msg.type = 37U;
    msg.max_size = 47726U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.757624083967;
    tmp_msg_0.base_lon = 0.753860677687;
    tmp_msg_0.base_time = 0.837933448746;
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
    msg.setTimeStamp(0.769227337132);
    msg.setSource(21141U);
    msg.setSourceEntity(88U);
    msg.setDestination(46496U);
    msg.setDestinationEntity(118U);
    msg.original_source = 64941U;
    msg.destination = 25359U;
    msg.timeout = 0.0476058799587;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("EZYKPZBBVDSSD");
    tmp_msg_0.plan_size = 33223U;
    tmp_msg_0.change_time = 0.360353733114;
    tmp_msg_0.change_sid = 52691U;
    tmp_msg_0.change_sname.assign("XJBQXRIDWNPYFNIPFNHHXMKVETDWDMYLYWHNITKQRSOUUUPAZAICWONTRXIGAFEFRJVV");
    const char tmp_tmp_msg_0_0[] = {42, 96, -93, 88, 90, -85, 29, -95, 33, 125, 39, -79, -90, 41, 7, -76, -32, 113, 6, 98, 43, -128, 84, -31, 30, 15, 103, 49, 0, 9, -71, 35, -73, -116, 57, 30, -47, 75, 118, -119, -24, 42, -84, -107, -91, 82, 57, -56, -84, -105, -30, -116, 71, -97, 117, -37, -3, -72, 25, 25, -63, -84, 74, 63, -57, 11, 100, -30, 37, 110, 81, 53, -102, -118, 1, -20, -90, 57, 78, -127, -2, 42, -15, 46, -94, -110, -66, -66, -75, -28, -62, -48, 18, 126, -114, 83, 99, 28, 53, -90, -3, 57, 94, -94, -40, 109, -99, -73, -35, 29, -17, -64, 33, -114, -109, -128, 52, 55, -45, -84, -44, 65, -116, -87, 9, -48, -10, 45, 72, -103, 102, 57, 102, -82, -29, 41, 78, -65, 4, -31, 51, -18, 51, -31, -106, 51, 26, -18, -90, -124, -42, 112, -18, 14, -68, 87, -76, 30, -94, 21, 1, 29, 82, -108, 59, 4, 21, -58, -121, 1};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.548896591772);
    msg.setSource(44110U);
    msg.setSourceEntity(230U);
    msg.setDestination(44839U);
    msg.setDestinationEntity(106U);
    msg.original_source = 63462U;
    msg.destination = 32296U;
    msg.timeout = 0.232403849214;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 230U;
    tmp_msg_0.x = 49763U;
    tmp_msg_0.y = 47102U;
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
    msg.setTimeStamp(0.323456194256);
    msg.setSource(42162U);
    msg.setSourceEntity(36U);
    msg.setDestination(33674U);
    msg.setDestinationEntity(160U);
    msg.original_source = 41929U;
    msg.destination = 65179U;
    msg.timeout = 0.548286239929;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.280878157235;
    tmp_msg_0.y = 0.158065812367;
    tmp_msg_0.z = 0.219749642251;
    tmp_msg_0.vx = 0.488079662128;
    tmp_msg_0.vy = 0.0587642636633;
    tmp_msg_0.vz = 0.843826170537;
    tmp_msg_0.ax = 0.0709887342121;
    tmp_msg_0.ay = 0.676479611178;
    tmp_msg_0.az = 0.381559350443;
    tmp_msg_0.flags = 65052U;
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
    msg.setTimeStamp(0.508692247861);
    msg.setSource(4507U);
    msg.setSourceEntity(179U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(121U);
    msg.id = 227U;
    msg.range = 0.719441188833;

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
    msg.setTimeStamp(0.506400738117);
    msg.setSource(56714U);
    msg.setSourceEntity(245U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(206U);
    msg.id = 208U;
    msg.range = 0.611063755655;

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
    msg.setTimeStamp(0.711104455448);
    msg.setSource(27205U);
    msg.setSourceEntity(52U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(241U);
    msg.id = 78U;
    msg.range = 0.0348593735723;

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
    msg.setTimeStamp(0.22771860375);
    msg.setSource(31794U);
    msg.setSourceEntity(31U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(210U);
    msg.beacon.assign("KHJYZWSEYNJMHURLNGYPUJFMLYYPCUTPKGZXARRIRAEIGOMYVGXAGZCJRWSDZDRAFBYSIMSUIQVEIEWNZBTVOMMRXQIPBPQTCVHMXBQNWLHGVEGIKFFHBJFSAEDLSQLMNDPIOQKLKOTDCPXNAVXLUHLOSJZDCCTPGJOOQYURQQIXXOEAEKVBTMUNVHDQHBZZSTFNFKTBPYYSUCSTUGAUAHWBJWD");
    msg.lat = 0.645410981937;
    msg.lon = 0.803829229046;
    msg.depth = 0.958431120522;
    msg.query_channel = 184U;
    msg.reply_channel = 29U;
    msg.transponder_delay = 96U;

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
    msg.setTimeStamp(0.583011635599);
    msg.setSource(21118U);
    msg.setSourceEntity(109U);
    msg.setDestination(45456U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("EIJWQCMTJVTBISGIBDFWGUUMRVJRJFKYRQKVPEYOMCEZZOHADDHKCURPSDYRJMGCGBQCZVFJGKERTAZUHUIHHBCLAMXWLXBODGVWRNHXSFBYZTHXLABSMVXFAMNRAQPBODQCNKFIGXCPQOMWYWAMMILECSTAGOHWFHBZLXJUXQUPPGCKDWSLQIPFWSEPJRWHOUTODS");
    msg.lat = 0.113335631806;
    msg.lon = 0.832733405442;
    msg.depth = 0.658960019989;
    msg.query_channel = 209U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 210U;

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
    msg.setTimeStamp(0.0183190984309);
    msg.setSource(47731U);
    msg.setSourceEntity(91U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(55U);
    msg.beacon.assign("CIWBUXEYUSLSFTDRJRTYNJHMOQRFZGGCAAOMOTEJHQMSBIKRWDCDJPEERKFRXGISYCIPZTJLAIDVQWVMKDHFPMWFGYNUHENEAYFZDCCQBFCESTZGOYVKAIMHABGFUECIBQRTOSAJ");
    msg.lat = 0.510321281605;
    msg.lon = 0.370579551949;
    msg.depth = 0.522768877808;
    msg.query_channel = 21U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 195U;

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
    msg.setTimeStamp(0.961137343489);
    msg.setSource(42724U);
    msg.setSourceEntity(200U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(85U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.638281885337);
    msg.setSource(21534U);
    msg.setSourceEntity(233U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(34U);
    msg.op = 170U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JVAGFMKKPTOYPWPNSLKTGPQNIMHMZQUYEYTZWBJNCOWJRGKQUVNKNPDQADYSOZILLYHKFXPPYVJLATPQXOHHEOYZTJTOXDXJDAPSBJCGPLZRWFHKBEKLTICYRWYBCOGVMLMRVSHRKUISTECSGAXDFNBRGHUMWFVVNHZHUMXASKEXLFQNJOARVZUUTCRRYIDGWNOMWABILIUCJQLEUIFBM");
    tmp_msg_0.lat = 0.528884338217;
    tmp_msg_0.lon = 0.191524303448;
    tmp_msg_0.depth = 0.203243200963;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 179U;
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
    msg.setTimeStamp(0.60671657402);
    msg.setSource(18047U);
    msg.setSourceEntity(87U);
    msg.setDestination(56313U);
    msg.setDestinationEntity(132U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.0159221014729);
    msg.setSource(50839U);
    msg.setSourceEntity(195U);
    msg.setDestination(47709U);
    msg.setDestinationEntity(159U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1199366123U;
    tmp_msg_0.start_lat = 0.636426204818;
    tmp_msg_0.start_lon = 0.741458296471;
    tmp_msg_0.start_z = 0.710404409171;
    tmp_msg_0.start_z_units = 141U;
    tmp_msg_0.end_lat = 0.0872945509301;
    tmp_msg_0.end_lon = 0.681766964919;
    tmp_msg_0.end_z = 0.958010513129;
    tmp_msg_0.end_z_units = 239U;
    tmp_msg_0.speed = 0.818326457661;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.lradius = 0.164141047891;
    tmp_msg_0.flags = 222U;
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
    msg.setTimeStamp(0.472641255006);
    msg.setSource(14300U);
    msg.setSourceEntity(186U);
    msg.setDestination(65310U);
    msg.setDestinationEntity(93U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 47175U;
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
    msg.setTimeStamp(0.532042526194);
    msg.setSource(25423U);
    msg.setSourceEntity(170U);
    msg.setDestination(1807U);
    msg.setDestinationEntity(110U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 4232U;
    tmp_msg_0.sys.assign("GCRMEOJTUPESRWXDAQHDPGJZEOVVDIYSSBJDBUIMJKCNHYRLRUEADJKHYSRRTFNHEWYFZGCCQPXCBZZWXECPOBANHTJETKILJZBLSMYXUCDYWI");
    tmp_msg_0.value = 0.127421124254;
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
    msg.setTimeStamp(0.571826895687);
    msg.setSource(22709U);
    msg.setSourceEntity(57U);
    msg.setDestination(53934U);
    msg.setDestinationEntity(240U);
    msg.op = 176U;
    msg.system.assign("SXCJSYCSBYNYQEPFUMGLDWIGSEFZAZUMYXOHKOKACDZLSWCWGJIUNARHRGPEPZOFOYZKUHDGQVWXDYRJVQCMVOSBKWRDXTLKHPIBNTDHISKWTVVXXBAOTJYJLLREGESADHTWMEGEIUNJY");
    msg.range = 0.893000530326;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("WSICVKWVGPIPUSYJLFATUQTNRYWSOHXEJSOVXTPFVEHMNRAIIOJXQCOYHTKFIPSVDHGBAL");
    tmp_msg_0.state = 25U;
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
    msg.setTimeStamp(0.622570356975);
    msg.setSource(60686U);
    msg.setSourceEntity(48U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(41U);
    msg.op = 171U;
    msg.system.assign("DUEHJZEMHDSMDMIKDMBOYEGOAGKGAMFHBQCNDDOUCCYELPKWUQXQYYLLFNGTNNBLPACVCCNCIASVUHVVVINUMJHWSOVQJUDBWXXQPEWCZXRPVJZVABJRLKQYLEPNBGITAZWEGLUSMJRAMSTQIJSTLOPRPRKCFHQIKNWTFMDZZJPMKAGKEVWIHLOTTKOBW");
    msg.range = 0.1299753292;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 167U;
    tmp_msg_0.period = 3707551698U;
    tmp_msg_0.duty_cycle = 2452105706U;
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
    msg.setTimeStamp(0.767981535523);
    msg.setSource(48142U);
    msg.setSourceEntity(152U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(75U);
    msg.op = 212U;
    msg.system.assign("BFZFTKDNSENNJTYEXXBYDYWMUMNLSAGOIZAYAFIOCHWIMVUVXNGEOYGRBLIDRIJHCEOJPDPMSLDLGZBOPJEAEHZRSSDSIVFCYGKYGUNVHPSKAPQNZIVFIARUQFXVCSBMAUDJVVAQBPXLCPDRJRKBRPQSKHNWKDWMQRXEAEGFXUNVCFLKGWKGOY");
    msg.range = 0.720812028459;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("TSPEOUWOBGTVSLIXJPFVDYXYIUIIMEWBGSNXAIEFQNJLMWMZMMKRDJSTCSPMQQBRBRVWYKDQAKLGKZGKATQKMJAGVCXCYTIEUHPTEUZH");
    tmp_msg_0.rssi = 0.237197958021;
    tmp_msg_0.integrity = 41219U;
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
    msg.setTimeStamp(0.478594223046);
    msg.setSource(40258U);
    msg.setSourceEntity(135U);
    msg.setDestination(6871U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.0193557168179);
    msg.setSource(24713U);
    msg.setSourceEntity(129U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.0526486493385);
    msg.setSource(182U);
    msg.setSourceEntity(68U);
    msg.setDestination(31626U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.0323647936748);
    msg.setSource(21159U);
    msg.setSourceEntity(119U);
    msg.setDestination(65343U);
    msg.setDestinationEntity(111U);
    msg.list.assign("RSZVQLHUPOFPRBCMXJXDUJJKIIEJONWPEEIFCZZJXWWLIGSOVDNOOKCCYGYLKQOMYGZAGMAZFOPZFNFZCFDUBN");

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
    msg.setTimeStamp(0.747215923421);
    msg.setSource(11341U);
    msg.setSourceEntity(39U);
    msg.setDestination(34609U);
    msg.setDestinationEntity(40U);
    msg.list.assign("JHCTBUPEZJMRDLYHWEDIQLTJAHHFKLMEHKORTXTFFYSXTAEWWMSFCLBDCBUSQSDMEPIQMNNHTEWWKNKESRCRYOXOGPDJIGJURONACNRPZQLUUVKWHPZKPKYWMBSIPZNQRPJJDMBVXMUXAPYNDAGHIYUFYCAIKQOQGJLJWGCSDUFIHZGKVCYBLKOGCBOFMVZFAEXNEOVVSPZBNBMABTVSXXTRUAULXIXFDZIYRSFQDVTIWZGGLYCRTNEZQGAJ");

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
    msg.setTimeStamp(0.584626537682);
    msg.setSource(8198U);
    msg.setSourceEntity(151U);
    msg.setDestination(58779U);
    msg.setDestinationEntity(110U);
    msg.list.assign("TRQXWCSBZJQGCRLIGXDZZSNDZGKVIMSJGFZQEQABMUXXHPDWTYOOUPCFCACRLVTDTWUEJYOOLAUDKWSBXZFXIMCDYXAYDROALZMITFYWJBKCLEVLUSHAMGIABFJUO");

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
    msg.setTimeStamp(0.656395269559);
    msg.setSource(25370U);
    msg.setSourceEntity(98U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(116U);
    msg.peer.assign("RZYEFPBOYPPNKODDUWFFMNRBVTZOHGIENTMYUMCCRXZISIIRZUAPEBGVNLKNQGYHWNUTORJSPWEQVQTKQHERBXDLBMTHABUDZCCUKQFXACLWPZVRIYUFLEVELAGAOLFQDVVQYOQBKWOXZXCZNXRXOPJCEGLTUCMJWAKSGELVJBHIGRXJKDUGNBSYYMJHGASJHHKWFYLEWDCAMMNMXMSVLRISCZSIPFOSIGADXQO");
    msg.rssi = 0.262330109443;
    msg.integrity = 29844U;

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
    msg.setTimeStamp(0.893734787219);
    msg.setSource(6196U);
    msg.setSourceEntity(95U);
    msg.setDestination(52983U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("EKTVLEIANPRISAHVCQYIXXTKBBTCYLQGEWTGENXRAAKKCWIFLRXICZBDLSWUUPYPQSWDBTMCHRXDSEAUQAJRSZLYHDGFONSKLEJFZCBGOSEANVDTMVUBUAKIBTMMZHDOYNJZUOCOBOPWZNLYRHQZPCFWXMKZI");
    msg.rssi = 0.917167780453;
    msg.integrity = 10060U;

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
    msg.setTimeStamp(0.537717131136);
    msg.setSource(30972U);
    msg.setSourceEntity(227U);
    msg.setDestination(19232U);
    msg.setDestinationEntity(239U);
    msg.peer.assign("MBHUKPDBXDKEYSESNKJYHXHSCNDWKMABIPEUUTFMYGYYEGDQSPOLNZSGRVIPWVTWQDYQPETNQHHLMZCUOWHIKORPKPZAVSDMJZIOYJCUPKBHNYGILVDTJWYAJTQACOBMVZZQBTMPQUOHZNLEVOZJGAQTCCRKKVTWFFLJGLGBZXIXGFZNFFJRXEACXSIFQBCANBREEKGAUWLDUFMGTIRHLTLSOBOE");
    msg.rssi = 0.109884049111;
    msg.integrity = 58952U;

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
    msg.setTimeStamp(0.536296456183);
    msg.setSource(20552U);
    msg.setSourceEntity(218U);
    msg.setDestination(37391U);
    msg.setDestinationEntity(83U);
    msg.value = -8335;

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
    msg.setTimeStamp(0.459476178843);
    msg.setSource(65159U);
    msg.setSourceEntity(59U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(173U);
    msg.value = -15690;

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
    msg.setTimeStamp(0.419311525519);
    msg.setSource(44377U);
    msg.setSourceEntity(121U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(1U);
    msg.value = 7628;

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
    msg.setTimeStamp(0.160514882423);
    msg.setSource(4415U);
    msg.setSourceEntity(20U);
    msg.setDestination(48340U);
    msg.setDestinationEntity(61U);
    msg.value = 0.292559366638;

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
    msg.setTimeStamp(0.400982402841);
    msg.setSource(62210U);
    msg.setSourceEntity(208U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0156752703731;

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
    msg.setTimeStamp(0.751615937264);
    msg.setSource(29575U);
    msg.setSourceEntity(125U);
    msg.setDestination(58058U);
    msg.setDestinationEntity(68U);
    msg.value = 0.951539565145;

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
    msg.setTimeStamp(0.00253917744048);
    msg.setSource(44792U);
    msg.setSourceEntity(243U);
    msg.setDestination(35769U);
    msg.setDestinationEntity(129U);
    msg.value = 0.751763232943;

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
    msg.setTimeStamp(0.384702382979);
    msg.setSource(11700U);
    msg.setSourceEntity(227U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(228U);
    msg.value = 0.652187914035;

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
    msg.setTimeStamp(0.410564178816);
    msg.setSource(20696U);
    msg.setSourceEntity(73U);
    msg.setDestination(37678U);
    msg.setDestinationEntity(139U);
    msg.value = 0.234561651808;

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
    msg.setTimeStamp(0.747340660832);
    msg.setSource(52449U);
    msg.setSourceEntity(215U);
    msg.setDestination(59180U);
    msg.setDestinationEntity(155U);
    msg.validity = 14841U;
    msg.type = 182U;
    msg.utc_year = 55249U;
    msg.utc_month = 26U;
    msg.utc_day = 96U;
    msg.utc_time = 0.488344676951;
    msg.lat = 0.613647660243;
    msg.lon = 0.897196923308;
    msg.height = 0.122018394841;
    msg.satellites = 93U;
    msg.cog = 0.270269777133;
    msg.sog = 0.599726781918;
    msg.hdop = 0.496010238675;
    msg.vdop = 0.44971179534;
    msg.hacc = 0.155969591724;
    msg.vacc = 0.17591938276;

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
    msg.setTimeStamp(0.42800583281);
    msg.setSource(2239U);
    msg.setSourceEntity(222U);
    msg.setDestination(58764U);
    msg.setDestinationEntity(223U);
    msg.validity = 17729U;
    msg.type = 149U;
    msg.utc_year = 11541U;
    msg.utc_month = 157U;
    msg.utc_day = 200U;
    msg.utc_time = 0.692096861596;
    msg.lat = 0.519399619877;
    msg.lon = 0.21302764618;
    msg.height = 0.489372635346;
    msg.satellites = 180U;
    msg.cog = 0.671250433669;
    msg.sog = 0.260920767033;
    msg.hdop = 0.930389405276;
    msg.vdop = 0.250050116438;
    msg.hacc = 0.403423816142;
    msg.vacc = 0.335302412418;

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
    msg.setTimeStamp(0.509946728396);
    msg.setSource(42983U);
    msg.setSourceEntity(159U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(106U);
    msg.validity = 58107U;
    msg.type = 124U;
    msg.utc_year = 33030U;
    msg.utc_month = 95U;
    msg.utc_day = 29U;
    msg.utc_time = 0.614557864624;
    msg.lat = 0.35168423379;
    msg.lon = 0.542267877371;
    msg.height = 0.149073139206;
    msg.satellites = 13U;
    msg.cog = 0.768886608797;
    msg.sog = 0.546640359835;
    msg.hdop = 0.869813460171;
    msg.vdop = 0.375237247711;
    msg.hacc = 0.0876467313631;
    msg.vacc = 0.368821253739;

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
    msg.setTimeStamp(0.251951587291);
    msg.setSource(50110U);
    msg.setSourceEntity(33U);
    msg.setDestination(60797U);
    msg.setDestinationEntity(139U);
    msg.time = 0.309558180603;
    msg.phi = 0.00363027573483;
    msg.theta = 0.0261268142119;
    msg.psi = 0.514267208327;
    msg.psi_magnetic = 0.889705136387;

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
    msg.setTimeStamp(0.573782759002);
    msg.setSource(2080U);
    msg.setSourceEntity(69U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(99U);
    msg.time = 0.634944622404;
    msg.phi = 0.0462331051178;
    msg.theta = 0.907987213552;
    msg.psi = 0.605200617374;
    msg.psi_magnetic = 0.0910667180633;

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
    msg.setTimeStamp(0.916719781016);
    msg.setSource(49718U);
    msg.setSourceEntity(60U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(64U);
    msg.time = 0.634674986997;
    msg.phi = 0.382283612406;
    msg.theta = 0.0267663689184;
    msg.psi = 0.492209258484;
    msg.psi_magnetic = 0.211515461793;

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
    msg.setTimeStamp(0.953290036399);
    msg.setSource(55688U);
    msg.setSourceEntity(120U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(87U);
    msg.time = 0.514357201059;
    msg.x = 0.395513302829;
    msg.y = 0.936208022972;
    msg.z = 0.84913863089;
    msg.timestep = 0.00373873435974;

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
    msg.setTimeStamp(0.542636382714);
    msg.setSource(15638U);
    msg.setSourceEntity(32U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(74U);
    msg.time = 0.245226317264;
    msg.x = 0.331662996482;
    msg.y = 0.412369935185;
    msg.z = 0.894367157798;
    msg.timestep = 0.923031179107;

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
    msg.setTimeStamp(0.225467312615);
    msg.setSource(39120U);
    msg.setSourceEntity(242U);
    msg.setDestination(64064U);
    msg.setDestinationEntity(234U);
    msg.time = 0.405393270736;
    msg.x = 0.437882003952;
    msg.y = 0.390532987132;
    msg.z = 0.440626615796;
    msg.timestep = 0.974924421813;

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
    msg.setTimeStamp(0.887047962625);
    msg.setSource(53070U);
    msg.setSourceEntity(71U);
    msg.setDestination(34210U);
    msg.setDestinationEntity(121U);
    msg.time = 0.476292537307;
    msg.x = 0.272159785254;
    msg.y = 0.603447732252;
    msg.z = 0.63557212094;

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
    msg.setTimeStamp(0.264324358336);
    msg.setSource(49573U);
    msg.setSourceEntity(245U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(80U);
    msg.time = 0.0159678729216;
    msg.x = 0.545076314414;
    msg.y = 0.950406638574;
    msg.z = 0.750205046123;

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
    msg.setTimeStamp(0.635728817599);
    msg.setSource(44371U);
    msg.setSourceEntity(175U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(91U);
    msg.time = 0.505025096021;
    msg.x = 0.153310691219;
    msg.y = 0.317168577902;
    msg.z = 0.731041314841;

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
    msg.setTimeStamp(0.225428411272);
    msg.setSource(52343U);
    msg.setSourceEntity(25U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(96U);
    msg.time = 0.175470049654;
    msg.x = 0.845154069417;
    msg.y = 0.406858320294;
    msg.z = 0.904463625062;

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
    msg.setTimeStamp(0.691984274054);
    msg.setSource(9186U);
    msg.setSourceEntity(213U);
    msg.setDestination(64321U);
    msg.setDestinationEntity(176U);
    msg.time = 0.102695965883;
    msg.x = 0.603531281273;
    msg.y = 0.00396137875682;
    msg.z = 0.412726715083;

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
    msg.setTimeStamp(0.742818165091);
    msg.setSource(45897U);
    msg.setSourceEntity(232U);
    msg.setDestination(56422U);
    msg.setDestinationEntity(39U);
    msg.time = 0.5104090662;
    msg.x = 0.268700051107;
    msg.y = 0.970355076389;
    msg.z = 0.460163215529;

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
    msg.setTimeStamp(0.424408327702);
    msg.setSource(17120U);
    msg.setSourceEntity(202U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(73U);
    msg.time = 0.89999585117;
    msg.x = 0.246839136876;
    msg.y = 0.806130996137;
    msg.z = 0.417179403702;

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
    msg.setTimeStamp(0.925083665278);
    msg.setSource(30006U);
    msg.setSourceEntity(251U);
    msg.setDestination(14297U);
    msg.setDestinationEntity(159U);
    msg.time = 0.993390184384;
    msg.x = 0.0904069803506;
    msg.y = 0.575370825789;
    msg.z = 0.172124669843;

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
    msg.setTimeStamp(0.530730645232);
    msg.setSource(2031U);
    msg.setSourceEntity(100U);
    msg.setDestination(15731U);
    msg.setDestinationEntity(63U);
    msg.time = 0.253116668235;
    msg.x = 0.0652143090722;
    msg.y = 0.421257389031;
    msg.z = 0.24607319339;

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
    msg.setTimeStamp(0.0010341652833);
    msg.setSource(58148U);
    msg.setSourceEntity(1U);
    msg.setDestination(44151U);
    msg.setDestinationEntity(220U);
    msg.validity = 21U;
    msg.x = 0.79394630405;
    msg.y = 0.720885992915;
    msg.z = 0.776752406205;

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
    msg.setTimeStamp(0.487960624456);
    msg.setSource(46152U);
    msg.setSourceEntity(182U);
    msg.setDestination(16135U);
    msg.setDestinationEntity(49U);
    msg.validity = 208U;
    msg.x = 0.290641229048;
    msg.y = 0.6194318582;
    msg.z = 0.375265559164;

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
    msg.setTimeStamp(0.448637288084);
    msg.setSource(16662U);
    msg.setSourceEntity(100U);
    msg.setDestination(41845U);
    msg.setDestinationEntity(75U);
    msg.validity = 140U;
    msg.x = 0.557150552256;
    msg.y = 0.130067922913;
    msg.z = 0.942482994024;

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
    msg.setTimeStamp(0.814005013188);
    msg.setSource(31901U);
    msg.setSourceEntity(38U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(109U);
    msg.validity = 67U;
    msg.x = 0.83795210146;
    msg.y = 0.334502842675;
    msg.z = 0.0794292662722;

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
    msg.setTimeStamp(0.173233144351);
    msg.setSource(14765U);
    msg.setSourceEntity(122U);
    msg.setDestination(20851U);
    msg.setDestinationEntity(40U);
    msg.validity = 138U;
    msg.x = 0.587005489022;
    msg.y = 0.171357100172;
    msg.z = 0.400084709479;

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
    msg.setTimeStamp(0.758498071198);
    msg.setSource(35383U);
    msg.setSourceEntity(216U);
    msg.setDestination(28538U);
    msg.setDestinationEntity(164U);
    msg.validity = 15U;
    msg.x = 0.422968537649;
    msg.y = 0.79211378203;
    msg.z = 0.170220592826;

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
    msg.setTimeStamp(0.26649030815);
    msg.setSource(44432U);
    msg.setSourceEntity(208U);
    msg.setDestination(46348U);
    msg.setDestinationEntity(184U);
    msg.time = 0.103476304769;
    msg.x = 0.362712210834;
    msg.y = 0.782067595167;
    msg.z = 0.416483541986;

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
    msg.setTimeStamp(0.901780816414);
    msg.setSource(56391U);
    msg.setSourceEntity(111U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(134U);
    msg.time = 0.472076306625;
    msg.x = 0.524251615489;
    msg.y = 0.921278872899;
    msg.z = 0.0356962198513;

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
    msg.setTimeStamp(0.571651671531);
    msg.setSource(41693U);
    msg.setSourceEntity(209U);
    msg.setDestination(4858U);
    msg.setDestinationEntity(127U);
    msg.time = 0.995266894858;
    msg.x = 0.632030020088;
    msg.y = 0.129133932582;
    msg.z = 0.932816159999;

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
    msg.setTimeStamp(0.827763865919);
    msg.setSource(42483U);
    msg.setSourceEntity(44U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(220U);
    msg.validity = 90U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.598708890955;
    tmp_msg_0.y = 0.76205706153;
    tmp_msg_0.z = 0.587122313751;
    tmp_msg_0.phi = 0.377704597173;
    tmp_msg_0.theta = 0.0442061889467;
    tmp_msg_0.psi = 0.875789166089;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.993829742182;
    tmp_msg_1.beam_height = 0.665327195625;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.991735703894;

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
    msg.setTimeStamp(0.294987092932);
    msg.setSource(2988U);
    msg.setSourceEntity(58U);
    msg.setDestination(4143U);
    msg.setDestinationEntity(241U);
    msg.validity = 221U;
    msg.value = 0.457828551646;

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
    msg.setTimeStamp(0.851652227707);
    msg.setSource(27736U);
    msg.setSourceEntity(50U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(18U);
    msg.validity = 91U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.970374086768;
    tmp_msg_0.y = 0.95077091524;
    tmp_msg_0.z = 0.583774294908;
    tmp_msg_0.phi = 0.88154538404;
    tmp_msg_0.theta = 0.692512664225;
    tmp_msg_0.psi = 0.367632926541;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.776971701264;

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
    msg.setTimeStamp(0.633811900116);
    msg.setSource(27566U);
    msg.setSourceEntity(8U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(114U);
    msg.value = 0.955083969792;

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
    msg.setTimeStamp(0.229695555163);
    msg.setSource(62199U);
    msg.setSourceEntity(32U);
    msg.setDestination(42669U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0420199641897;

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
    msg.setTimeStamp(0.494112851053);
    msg.setSource(18612U);
    msg.setSourceEntity(81U);
    msg.setDestination(62683U);
    msg.setDestinationEntity(31U);
    msg.value = 0.355537656441;

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
    msg.setTimeStamp(0.43245455903);
    msg.setSource(598U);
    msg.setSourceEntity(130U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(170U);
    msg.value = 0.450365619547;

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
    msg.setTimeStamp(0.04934204239);
    msg.setSource(14300U);
    msg.setSourceEntity(21U);
    msg.setDestination(14378U);
    msg.setDestinationEntity(175U);
    msg.value = 0.239416366854;

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
    msg.setTimeStamp(0.535394755441);
    msg.setSource(39093U);
    msg.setSourceEntity(160U);
    msg.setDestination(4762U);
    msg.setDestinationEntity(180U);
    msg.value = 0.761693464263;

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
    msg.setTimeStamp(0.547827301267);
    msg.setSource(48603U);
    msg.setSourceEntity(227U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(226U);
    msg.value = 0.153221644075;

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
    msg.setTimeStamp(0.867234403227);
    msg.setSource(47439U);
    msg.setSourceEntity(55U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(96U);
    msg.value = 0.21930087406;

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
    msg.setTimeStamp(0.825990251671);
    msg.setSource(22660U);
    msg.setSourceEntity(115U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(205U);
    msg.value = 0.687849890561;

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
    msg.setTimeStamp(0.665118244479);
    msg.setSource(18101U);
    msg.setSourceEntity(168U);
    msg.setDestination(47719U);
    msg.setDestinationEntity(253U);
    msg.value = 0.603106671161;

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
    msg.setTimeStamp(0.225549667741);
    msg.setSource(29490U);
    msg.setSourceEntity(10U);
    msg.setDestination(12324U);
    msg.setDestinationEntity(206U);
    msg.value = 0.683330519847;

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
    msg.setTimeStamp(0.285382478303);
    msg.setSource(1248U);
    msg.setSourceEntity(218U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(243U);
    msg.value = 0.776923541141;

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
    msg.setTimeStamp(0.486274228927);
    msg.setSource(53846U);
    msg.setSourceEntity(23U);
    msg.setDestination(21156U);
    msg.setDestinationEntity(14U);
    msg.value = 0.12107090633;

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
    msg.setTimeStamp(0.0752878923527);
    msg.setSource(41758U);
    msg.setSourceEntity(149U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(15U);
    msg.value = 0.720992893767;

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
    msg.setTimeStamp(0.971752454318);
    msg.setSource(39462U);
    msg.setSourceEntity(79U);
    msg.setDestination(3849U);
    msg.setDestinationEntity(108U);
    msg.value = 0.912323762411;

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
    msg.setTimeStamp(0.916551910853);
    msg.setSource(41605U);
    msg.setSourceEntity(223U);
    msg.setDestination(3600U);
    msg.setDestinationEntity(17U);
    msg.value = 0.164424614269;

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
    msg.setTimeStamp(0.906319876103);
    msg.setSource(27963U);
    msg.setSourceEntity(83U);
    msg.setDestination(61245U);
    msg.setDestinationEntity(164U);
    msg.value = 0.961731708123;

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
    msg.setTimeStamp(0.0117456692805);
    msg.setSource(2512U);
    msg.setSourceEntity(227U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(2U);
    msg.value = 0.591202764686;

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
    msg.setTimeStamp(0.958176890321);
    msg.setSource(58619U);
    msg.setSourceEntity(67U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(145U);
    msg.value = 0.359794025344;

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
    msg.setTimeStamp(0.389407576151);
    msg.setSource(46076U);
    msg.setSourceEntity(208U);
    msg.setDestination(42120U);
    msg.setDestinationEntity(131U);
    msg.value = 0.991179010315;

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
    msg.setTimeStamp(0.051804656047);
    msg.setSource(3662U);
    msg.setSourceEntity(184U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(158U);
    msg.value = 0.211808569639;

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
    msg.setTimeStamp(0.597010994093);
    msg.setSource(29469U);
    msg.setSourceEntity(93U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(98U);
    msg.value = 0.647502894367;

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
    msg.setTimeStamp(0.350493578244);
    msg.setSource(34538U);
    msg.setSourceEntity(11U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(61U);
    msg.value = 0.861308893589;

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
    msg.setTimeStamp(0.713460644428);
    msg.setSource(46793U);
    msg.setSourceEntity(26U);
    msg.setDestination(11229U);
    msg.setDestinationEntity(119U);
    msg.value = 0.445336761549;

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
    msg.setTimeStamp(0.872807001438);
    msg.setSource(16281U);
    msg.setSourceEntity(68U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(133U);
    msg.direction = 0.64105050788;
    msg.speed = 0.803139424519;
    msg.turbulence = 0.0916216952293;

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
    msg.setTimeStamp(0.292224182726);
    msg.setSource(60161U);
    msg.setSourceEntity(91U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(173U);
    msg.direction = 0.886912161195;
    msg.speed = 0.320464303246;
    msg.turbulence = 0.490455092626;

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
    msg.setTimeStamp(0.713009031488);
    msg.setSource(64282U);
    msg.setSourceEntity(150U);
    msg.setDestination(65261U);
    msg.setDestinationEntity(31U);
    msg.direction = 0.373206512726;
    msg.speed = 0.0858557002451;
    msg.turbulence = 0.0914948391722;

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
    msg.setTimeStamp(0.954507093319);
    msg.setSource(54083U);
    msg.setSourceEntity(42U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(253U);
    msg.value = 0.665704310272;

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
    msg.setTimeStamp(0.968937916242);
    msg.setSource(62861U);
    msg.setSourceEntity(204U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(148U);
    msg.value = 0.581426940461;

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
    msg.setTimeStamp(0.19080154701);
    msg.setSource(12287U);
    msg.setSourceEntity(33U);
    msg.setDestination(2043U);
    msg.setDestinationEntity(94U);
    msg.value = 0.82388444854;

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
    msg.setTimeStamp(0.25953555194);
    msg.setSource(11399U);
    msg.setSourceEntity(164U);
    msg.setDestination(1743U);
    msg.setDestinationEntity(106U);
    msg.value.assign("SCXYWQJHNNVLPOZJPDFFISGYJHDCUJHQZYJFHUBKQZTLSJDELIVIEXMEVKEOKZTTWWHQIWULWAUCDQITVXANXIVFFPJLYCAORULEZGXTHZCFKBYTADAFXZFPHGRCRNKSNRODPQQGUURBMEYDGOQZVOFLANSMRMBYDMBPCGIOCBQRLAXBXWVPTVCUYEUPZHGRDHBNJGESMT");

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
    msg.setTimeStamp(0.249560053515);
    msg.setSource(62805U);
    msg.setSourceEntity(10U);
    msg.setDestination(1239U);
    msg.setDestinationEntity(52U);
    msg.value.assign("EFLMVOOHVQGNFLMRNGYRQSUCOVEUVDBAIVZDYYFAZKTPJCSQEHHBEMYEXXIQFNGVGBZL");

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
    msg.setTimeStamp(0.58699974867);
    msg.setSource(14389U);
    msg.setSourceEntity(7U);
    msg.setDestination(15220U);
    msg.setDestinationEntity(94U);
    msg.value.assign("BINUUYPABNEQDWRMMCXSLSTLIRIUJRNCKSAQQINUKSHWZRPTQNFJDQFTFEJYZVRFGSOYWAXZTPFOLSGUJRUJKEWPFWV");

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
    msg.setTimeStamp(0.0451630711473);
    msg.setSource(50046U);
    msg.setSourceEntity(29U);
    msg.setDestination(46164U);
    msg.setDestinationEntity(126U);
    const char tmp_msg_0[] = {-112, 18, 108, 107, 6, -59, -38, 28, 23, 91, -26, -67, 81, 11, -14, -35, -50, -80, 70, -34, -49, -128, 23, 119, 49, 121, 83, 95, -30, 1, -26, 62, 38, 61, 40, -125, -41, -43, -85, -16, 49, 24, 91, -123, 69, -113, -22, -36, 114, 72, -71, -76, 76, 42, 95, -7, 62, -40, 80, 37, 6, -6, -107, 76, 124, -39, -90, 44, 102, -64};
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
    msg.setTimeStamp(0.877230196176);
    msg.setSource(45471U);
    msg.setSourceEntity(155U);
    msg.setDestination(9902U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {-11, -47, 43, -79, 34, 68, 36, 1, 38, -32, -17, 82, 19, -128, -30, -72, -85, 123, 34, 84, -93, 33, -112, 101, 91, 84, -19, 35, -71, 51, 108, 17, -63, 117, 126, 10, -103, -38, 121, -59, 18, 2, 4, 115, 88, 111, 106, -102, -12, -125, -107, 123, 89, -116, 17, -117, -31, 96, 93, -40, 12, 3, -89, -67, 7, -57, 53, -26, 15, 38, 119, 87, 90, 79, -127, -102, -45, -1, -60, 15, -1, 58, 77, 57, 79, -124, -107, -75, 101, 79, -10, 105, 29, 34, -104, -35, 59, 84, 38, -24, -31, -91, -60, -14, -115, 0, 103, 67, -115, 100, 77, -95, -76, -23, 78, 69, 5, 119, -113, 53, 109, 67, -128, 76, 124, -123, -116, 48, -112, -87, -90, -28, -2, 110, 92, -115, 100, -5, -118, 76, -109, 0, 54, 91, 12, -70, -9, -84, -41, 84, -21, 57, 34, -68, 103, -5, 123, 69, -17, 8, -39, -88, 25, -61, 43, -126, 53, 6, 102, -67, -8, 63, -111, -115, -92, 124, -104, -85, 39, 23, 118, 46, -3, 97, 71, -20, -102, -10, -127, -30, 114, 44, 19, 6, -117, 118, -57, -25, -73, 105, 116, 104, -87, -119, -66, -86, -43, 101, -82, -128, -6, 55, -14, 0, 62, -82, -117, 56, -53, 28, 5, 81, -85, 81, -17, 43, -102, 76, 95, 108, -72, -99, -39, -41, 25, 51, -104, -112, 5, 114, 57, -39};
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
    msg.setTimeStamp(0.647248086307);
    msg.setSource(2541U);
    msg.setSourceEntity(114U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(207U);
    const char tmp_msg_0[] = {118, -113, 86, 50, -32, 2, 81, -32, -125, 108, -114, 6, 96, -113, -69, 114, 77};
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
    msg.setTimeStamp(0.914483421001);
    msg.setSource(32459U);
    msg.setSourceEntity(71U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(82U);
    msg.value = 0.786736117925;

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
    msg.setTimeStamp(0.490121369318);
    msg.setSource(57079U);
    msg.setSourceEntity(167U);
    msg.setDestination(38411U);
    msg.setDestinationEntity(33U);
    msg.value = 0.339948814483;

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
    msg.setTimeStamp(0.667356543582);
    msg.setSource(1984U);
    msg.setSourceEntity(164U);
    msg.setDestination(63779U);
    msg.setDestinationEntity(206U);
    msg.value = 0.209417938047;

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
    msg.setTimeStamp(0.555203825547);
    msg.setSource(65083U);
    msg.setSourceEntity(190U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(222U);
    msg.type = 49U;
    msg.frequency = 3822194935U;
    msg.min_range = 49848U;
    msg.max_range = 27753U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.955784658738;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.08968687877;
    tmp_msg_0.beam_height = 0.693263874195;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {34, -59, 62, 92, 114, -121, -85, 25, 114, -88, 78, 56, 89, 65, 66, -59, -31, -104, -100, -126, -98, 20, 1, -80, 1, 29, 68, 108, 69, -3, -112, -51, -104, -21, 44, 6, -87, -5, -38, -78, 64, 33, 117, -18, -107, -57, -75, -101, 103, 61, 87, -110, 62, -71, -61, 76, -99, -72, -101, 14, -69, 92, 20, -78, -80, 49, -5, 37, 80, 116, -89, 1, -38, 69, -79, -73, 104, -29, -78, 113, -113, 118, -110, -41, -25, 83, -19, 118, -74, 113, 15, 79, -125, 105, -25, -79, -88, -25, 106, -11, 91, 57, 59, -112, -77, -37, -65, 117, 109, -96, -53, -89, -112, -31, -63, -31, -26, -28, 76, -6, 105, 64, 123, -49, 64, 13, 2, -47, -56, 117, 88, 70, -13, 59, -115, 58, 104, -63, -110, 74, -111, -107, -116, -66, -97, 62, -36, 45};
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
    msg.setTimeStamp(0.778213527941);
    msg.setSource(27607U);
    msg.setSourceEntity(117U);
    msg.setDestination(54836U);
    msg.setDestinationEntity(64U);
    msg.type = 12U;
    msg.frequency = 3130674218U;
    msg.min_range = 58583U;
    msg.max_range = 7359U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.199009422627;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.66937921358;
    tmp_msg_0.beam_height = 0.574385094015;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-65, -56, 48, 90, 21, -50, -94, -89, 53, -99, -109, 78, -22, -22, 24, -30, -19, 24, 61, -56, -120, 114, -39, 55, 61, -2, -49, -26, -74, 72, 5, -13, -1, -70, 105, -9, -82, 97, -60, -2, -83, -7, -124, -56, -24, -107, -119, 113, -16, -41, 73, -1, 23, 118, -30, -57, -100, 116, 0, 45, 45, 79, 1, 35, 25, -100, -40, -63, -57, 22, -84, -6, 110, -49, -120, 96, -83, 0, 38, -68, -111, 24, -97, -108, -45, 9, -23, 5, 122, 125, -25, -109, 18, -109, -95, 103, 108, 114, -80, -70, -93, 40, 32, 66, 75, 31, -80, -33, -102, -122, -15, 64, -68, 78, -108, -72, -61, -122, -64, -106, 104, -100, 102, 87};
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
    msg.setTimeStamp(0.717165611113);
    msg.setSource(49403U);
    msg.setSourceEntity(150U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(199U);
    msg.type = 65U;
    msg.frequency = 1278788502U;
    msg.min_range = 40551U;
    msg.max_range = 54071U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.705313939502;
    const char tmp_msg_0[] = {-127, 59, -7, -122, -52, -59, 105, 38, -100, 60, 117, -16, 87, -128, 22, -27, -6, 64, 104, 62, -77, 80, -98, 64, 115, 46, 28, -100, -110, 47, -3, 34, 45, -126, 110, -95, -53, -43, 23, 81, 0, 14, 117, 87, -65, -92, 58, 31, -121, -97, 32, 105, 87, 31, 108, -67, 89, 89, 56, 10, 90, -94, -10, -4, 74, 91, 1, 120, 3, 126, -20, -112, 68, 109, -44, -91, 109, -124, 66, -36, -28, 111, 29, -33, 46, 110, 0, 116, -13, 1, 56, -102, 12, -85, -46, -68, 51, -82, 58, 38, 78, 31, -68, 0, 64, 79, 19, -111, 53, 64, -62, 14, -100, 84, -114, -30, -8, -68, 46, 116, 0, 108, -78, -8, 126, -111, -25, -70, -5, 79, 29, -6, -84, -96, 11, 108, -47, -49, 6, 72, 114, -88, -71, -64, -106, 104, -106};
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
    msg.setTimeStamp(0.743130205427);
    msg.setSource(23342U);
    msg.setSourceEntity(80U);
    msg.setDestination(5120U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.327492387785);
    msg.setSource(29171U);
    msg.setSourceEntity(218U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.279255345672);
    msg.setSource(23745U);
    msg.setSourceEntity(220U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.630942398994);
    msg.setSource(34750U);
    msg.setSourceEntity(20U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(243U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.74210225001);
    msg.setSource(7659U);
    msg.setSourceEntity(102U);
    msg.setDestination(4125U);
    msg.setDestinationEntity(76U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.643146115497);
    msg.setSource(49489U);
    msg.setSourceEntity(8U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(158U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.456436071715);
    msg.setSource(41540U);
    msg.setSourceEntity(226U);
    msg.setDestination(23267U);
    msg.setDestinationEntity(110U);
    msg.value = 0.799195159275;
    msg.confidence = 0.586562270471;
    msg.opmodes.assign("NGXYKVMXBUIINJRJDFEWFKHJIILYMIOCOEAHZFXDKUCAZRKNKLYQMLEYTADSTSAVCFCBYUUKXFKTAUDRIPDRWCMBSLFAQNNVLHRMPOGPWBKZJRWMHYGZLVHNVBSAYWPUUIGWQUPNSMYDQESPYXYQXSP");

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
    msg.setTimeStamp(0.0514078597409);
    msg.setSource(25738U);
    msg.setSourceEntity(73U);
    msg.setDestination(24574U);
    msg.setDestinationEntity(62U);
    msg.value = 0.681196453582;
    msg.confidence = 0.291922630901;
    msg.opmodes.assign("NPAUYHSGMFURJOLDSMNHGFIYTAOBKEYLALKURCCLDRINPABMFJQQEIZQOSJJPWXPZOUTEXEZSCBWZDSBXCNZHVPNWJHVWMEUFUTURXFENCBDKMGYNSBRHTIOGJHLVQYREKTASNCFIUBPPJDLILHAVZXXXOATXIXPFYPEWKAVG");

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
    msg.setTimeStamp(0.65220406723);
    msg.setSource(62079U);
    msg.setSourceEntity(191U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(39U);
    msg.value = 0.537571279157;
    msg.confidence = 0.152786565876;
    msg.opmodes.assign("IEJVBEOJTNOCHQZAKKIJZYWTSGPZOAYLCUKLMKUYVNBCKUTMIJUBAQSDGADAGPXSMEBKPBFZTFRQHVBNWDSMQDYAVZHHDSABPNGWLFTJ");

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
    msg.setTimeStamp(0.855148024994);
    msg.setSource(17924U);
    msg.setSourceEntity(14U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(109U);
    msg.itow = 626446823U;
    msg.lat = 0.215354823915;
    msg.lon = 0.568790179604;
    msg.height_ell = 0.00775754715626;
    msg.height_sea = 0.389846092701;
    msg.hacc = 0.522520099558;
    msg.vacc = 0.0663857542306;
    msg.vel_n = 0.372397494142;
    msg.vel_e = 0.198511416835;
    msg.vel_d = 0.291972739619;
    msg.speed = 0.262356646714;
    msg.gspeed = 0.263718425872;
    msg.heading = 0.135517854527;
    msg.sacc = 0.226229243918;
    msg.cacc = 0.294572044593;

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
    msg.setTimeStamp(0.310603470886);
    msg.setSource(3030U);
    msg.setSourceEntity(170U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(189U);
    msg.itow = 1611207060U;
    msg.lat = 0.507696223443;
    msg.lon = 0.925440056279;
    msg.height_ell = 0.628320389216;
    msg.height_sea = 0.58467118604;
    msg.hacc = 0.284601374809;
    msg.vacc = 0.656109463423;
    msg.vel_n = 0.0446829388398;
    msg.vel_e = 0.739155237496;
    msg.vel_d = 0.894678995473;
    msg.speed = 0.737699601816;
    msg.gspeed = 0.476524677967;
    msg.heading = 0.856871632469;
    msg.sacc = 0.407286630655;
    msg.cacc = 0.237654498761;

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
    msg.setTimeStamp(0.647621105969);
    msg.setSource(57785U);
    msg.setSourceEntity(5U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(102U);
    msg.itow = 977740855U;
    msg.lat = 0.219645936167;
    msg.lon = 0.145640633009;
    msg.height_ell = 0.198795110098;
    msg.height_sea = 0.955260509381;
    msg.hacc = 0.417969282115;
    msg.vacc = 0.397712195135;
    msg.vel_n = 0.0987646427793;
    msg.vel_e = 0.00946263092975;
    msg.vel_d = 0.31451893238;
    msg.speed = 0.726393553614;
    msg.gspeed = 0.845410192188;
    msg.heading = 0.966851711041;
    msg.sacc = 0.929434194265;
    msg.cacc = 0.974738153454;

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
    msg.setTimeStamp(0.780110575674);
    msg.setSource(43729U);
    msg.setSourceEntity(13U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(85U);
    msg.id = 251U;
    msg.value = 0.964546393092;

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
    msg.setTimeStamp(0.894010870732);
    msg.setSource(7970U);
    msg.setSourceEntity(230U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(195U);
    msg.id = 51U;
    msg.value = 0.487978668243;

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
    msg.setTimeStamp(0.989825011672);
    msg.setSource(40528U);
    msg.setSourceEntity(251U);
    msg.setDestination(30502U);
    msg.setDestinationEntity(133U);
    msg.id = 188U;
    msg.value = 0.417774131656;

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
    msg.setTimeStamp(0.8733314322);
    msg.setSource(5566U);
    msg.setSourceEntity(17U);
    msg.setDestination(36399U);
    msg.setDestinationEntity(233U);
    msg.x = 0.234187939677;
    msg.y = 0.711151573283;
    msg.z = 0.53072061878;
    msg.phi = 0.646281464064;
    msg.theta = 0.548814870921;
    msg.psi = 0.760624768619;

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
    msg.setTimeStamp(0.997081820897);
    msg.setSource(5843U);
    msg.setSourceEntity(125U);
    msg.setDestination(57884U);
    msg.setDestinationEntity(105U);
    msg.x = 0.24261137445;
    msg.y = 0.65908810083;
    msg.z = 0.139414603298;
    msg.phi = 0.771211716431;
    msg.theta = 0.783501480521;
    msg.psi = 0.833040237078;

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
    msg.setTimeStamp(0.516114255893);
    msg.setSource(18924U);
    msg.setSourceEntity(160U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(62U);
    msg.x = 0.113378706703;
    msg.y = 0.267996783147;
    msg.z = 0.678873890507;
    msg.phi = 0.357716326241;
    msg.theta = 0.256748653188;
    msg.psi = 0.879548331879;

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
    msg.setTimeStamp(0.146040225325);
    msg.setSource(11400U);
    msg.setSourceEntity(72U);
    msg.setDestination(360U);
    msg.setDestinationEntity(154U);
    msg.beam_width = 0.124337794397;
    msg.beam_height = 0.54685926137;

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
    msg.setTimeStamp(0.518197024019);
    msg.setSource(24908U);
    msg.setSourceEntity(148U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.183204311965;
    msg.beam_height = 0.473669335078;

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
    msg.setTimeStamp(0.969537048085);
    msg.setSource(21703U);
    msg.setSourceEntity(38U);
    msg.setDestination(34976U);
    msg.setDestinationEntity(87U);
    msg.beam_width = 0.512605534495;
    msg.beam_height = 0.0845807934478;

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
    msg.setTimeStamp(0.972398489071);
    msg.setSource(35690U);
    msg.setSourceEntity(92U);
    msg.setDestination(51800U);
    msg.setDestinationEntity(64U);
    msg.sane = 39U;

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
    msg.setTimeStamp(0.232400569757);
    msg.setSource(51437U);
    msg.setSourceEntity(214U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(254U);
    msg.sane = 154U;

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
    msg.setTimeStamp(0.785500099591);
    msg.setSource(55211U);
    msg.setSourceEntity(126U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(85U);
    msg.sane = 47U;

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
    msg.setTimeStamp(0.231233501197);
    msg.setSource(56112U);
    msg.setSourceEntity(51U);
    msg.setDestination(4202U);
    msg.setDestinationEntity(214U);
    msg.value = 0.783263605806;

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
    msg.setTimeStamp(0.470956159203);
    msg.setSource(30201U);
    msg.setSourceEntity(109U);
    msg.setDestination(64463U);
    msg.setDestinationEntity(72U);
    msg.value = 0.202125536188;

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
    msg.setTimeStamp(0.432428171946);
    msg.setSource(22682U);
    msg.setSourceEntity(61U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(141U);
    msg.value = 0.756324040908;

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
    msg.setTimeStamp(0.0881948717416);
    msg.setSource(47277U);
    msg.setSourceEntity(66U);
    msg.setDestination(14728U);
    msg.setDestinationEntity(43U);
    msg.value = 0.848932137629;

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
    msg.setTimeStamp(0.261955479012);
    msg.setSource(20782U);
    msg.setSourceEntity(68U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(235U);
    msg.value = 0.46522444736;

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
    msg.setTimeStamp(0.626988652824);
    msg.setSource(35241U);
    msg.setSourceEntity(164U);
    msg.setDestination(48129U);
    msg.setDestinationEntity(54U);
    msg.value = 0.310015098449;

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
    msg.setTimeStamp(0.0478821958735);
    msg.setSource(26989U);
    msg.setSourceEntity(69U);
    msg.setDestination(36923U);
    msg.setDestinationEntity(41U);
    msg.value = 0.788703493674;

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
    msg.setTimeStamp(0.0833265622869);
    msg.setSource(23643U);
    msg.setSourceEntity(248U);
    msg.setDestination(2056U);
    msg.setDestinationEntity(171U);
    msg.value = 0.790554405238;

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
    msg.setTimeStamp(0.0396212118442);
    msg.setSource(63847U);
    msg.setSourceEntity(72U);
    msg.setDestination(12893U);
    msg.setDestinationEntity(134U);
    msg.value = 0.887642429707;

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
    msg.setTimeStamp(0.470586424211);
    msg.setSource(45446U);
    msg.setSourceEntity(231U);
    msg.setDestination(56318U);
    msg.setDestinationEntity(218U);
    msg.value = 0.444431650437;

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
    msg.setTimeStamp(0.433428323649);
    msg.setSource(54064U);
    msg.setSourceEntity(122U);
    msg.setDestination(10550U);
    msg.setDestinationEntity(106U);
    msg.value = 0.801263802033;

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
    msg.setTimeStamp(0.617396193319);
    msg.setSource(53390U);
    msg.setSourceEntity(131U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(254U);
    msg.value = 0.461163748225;

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
    msg.setTimeStamp(0.851148843804);
    msg.setSource(10186U);
    msg.setSourceEntity(251U);
    msg.setDestination(40085U);
    msg.setDestinationEntity(63U);
    msg.value = 0.378309868463;

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
    msg.setTimeStamp(0.747194692187);
    msg.setSource(53650U);
    msg.setSourceEntity(64U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(79U);
    msg.value = 0.852520827839;

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
    msg.setTimeStamp(0.0975124698422);
    msg.setSource(20249U);
    msg.setSourceEntity(1U);
    msg.setDestination(62847U);
    msg.setDestinationEntity(73U);
    msg.value = 0.680663930398;

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
    msg.setTimeStamp(0.990092812499);
    msg.setSource(23222U);
    msg.setSourceEntity(163U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(88U);
    msg.value = 0.133284075123;

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
    msg.setTimeStamp(0.535388075989);
    msg.setSource(31499U);
    msg.setSourceEntity(46U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(104U);
    msg.value = 0.469226725935;

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
    msg.setTimeStamp(0.429901543678);
    msg.setSource(19098U);
    msg.setSourceEntity(44U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(186U);
    msg.value = 0.830466432048;

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
    msg.setTimeStamp(0.60588767795);
    msg.setSource(41375U);
    msg.setSourceEntity(149U);
    msg.setDestination(37517U);
    msg.setDestinationEntity(222U);
    msg.value = 0.762021858383;

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
    msg.setTimeStamp(0.189529192218);
    msg.setSource(17444U);
    msg.setSourceEntity(143U);
    msg.setDestination(32985U);
    msg.setDestinationEntity(51U);
    msg.value = 0.997397289289;

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
    msg.setTimeStamp(0.459229685792);
    msg.setSource(15877U);
    msg.setSourceEntity(207U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(37U);
    msg.value = 0.632938991478;

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
    msg.setTimeStamp(0.348820656221);
    msg.setSource(41841U);
    msg.setSourceEntity(37U);
    msg.setDestination(13159U);
    msg.setDestinationEntity(49U);
    msg.value = 0.567641709625;

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
    msg.setTimeStamp(0.00407501456351);
    msg.setSource(27937U);
    msg.setSourceEntity(180U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(179U);
    msg.value = 0.620910486934;

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
    msg.setTimeStamp(0.258839864092);
    msg.setSource(61580U);
    msg.setSourceEntity(199U);
    msg.setDestination(16272U);
    msg.setDestinationEntity(225U);
    msg.value = 0.411679104716;

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
    msg.setTimeStamp(0.313190319226);
    msg.setSource(3136U);
    msg.setSourceEntity(104U);
    msg.setDestination(13838U);
    msg.setDestinationEntity(57U);
    msg.validity = 49519U;
    msg.type = 20U;
    msg.tow = 2740003718U;
    msg.base_lat = 0.50848658001;
    msg.base_lon = 0.157434445782;
    msg.base_height = 0.185096353194;
    msg.n = 0.156239059379;
    msg.e = 0.105653064989;
    msg.d = 0.39083098511;
    msg.v_n = 0.847693946851;
    msg.v_e = 0.00761893502735;
    msg.v_d = 0.15170003718;
    msg.satellites = 106U;
    msg.iar_hyp = 43549U;
    msg.iar_ratio = 0.675267557006;

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
    msg.setTimeStamp(0.653314752591);
    msg.setSource(16086U);
    msg.setSourceEntity(127U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(75U);
    msg.validity = 29558U;
    msg.type = 161U;
    msg.tow = 1434008209U;
    msg.base_lat = 0.813886325759;
    msg.base_lon = 0.988825796388;
    msg.base_height = 0.941204701052;
    msg.n = 0.134384811885;
    msg.e = 0.34376650879;
    msg.d = 0.766181350886;
    msg.v_n = 0.804053855434;
    msg.v_e = 0.78631990198;
    msg.v_d = 0.0747291746277;
    msg.satellites = 223U;
    msg.iar_hyp = 59805U;
    msg.iar_ratio = 0.873075246858;

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
    msg.setTimeStamp(0.459374603748);
    msg.setSource(47431U);
    msg.setSourceEntity(240U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(83U);
    msg.validity = 60714U;
    msg.type = 226U;
    msg.tow = 2712016536U;
    msg.base_lat = 0.956414344462;
    msg.base_lon = 0.856128118678;
    msg.base_height = 0.20410051615;
    msg.n = 0.710270023304;
    msg.e = 0.574669837147;
    msg.d = 0.124624434395;
    msg.v_n = 0.635598349697;
    msg.v_e = 0.592177512451;
    msg.v_d = 0.91807029428;
    msg.satellites = 24U;
    msg.iar_hyp = 44652U;
    msg.iar_ratio = 0.960989114551;

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
    msg.setTimeStamp(0.305156578486);
    msg.setSource(25871U);
    msg.setSourceEntity(119U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(87U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.903169858654;
    tmp_msg_0.lon = 0.169172022137;
    tmp_msg_0.height = 0.554926614323;
    tmp_msg_0.x = 0.926388536065;
    tmp_msg_0.y = 0.973157200557;
    tmp_msg_0.z = 0.879114794653;
    tmp_msg_0.phi = 0.302714877434;
    tmp_msg_0.theta = 0.953335410996;
    tmp_msg_0.psi = 0.657607980521;
    tmp_msg_0.u = 0.32157962986;
    tmp_msg_0.v = 0.0773790713638;
    tmp_msg_0.w = 0.524565398811;
    tmp_msg_0.vx = 0.757627153755;
    tmp_msg_0.vy = 0.191281047399;
    tmp_msg_0.vz = 0.629528378092;
    tmp_msg_0.p = 0.838481408573;
    tmp_msg_0.q = 0.345046975073;
    tmp_msg_0.r = 0.624674427847;
    tmp_msg_0.depth = 0.266365291705;
    tmp_msg_0.alt = 0.71917858262;
    msg.state.set(tmp_msg_0);
    msg.type = 105U;

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
    msg.setTimeStamp(0.841277670035);
    msg.setSource(48611U);
    msg.setSourceEntity(242U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(16U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.275861819717;
    tmp_msg_0.lon = 0.0737538224906;
    tmp_msg_0.height = 0.0599905236746;
    tmp_msg_0.x = 0.766684645271;
    tmp_msg_0.y = 0.0302446042756;
    tmp_msg_0.z = 0.996876680941;
    tmp_msg_0.phi = 0.73160887279;
    tmp_msg_0.theta = 0.823405025551;
    tmp_msg_0.psi = 0.483248687054;
    tmp_msg_0.u = 0.0992950765067;
    tmp_msg_0.v = 0.572619601445;
    tmp_msg_0.w = 0.472621616105;
    tmp_msg_0.vx = 0.709737976213;
    tmp_msg_0.vy = 0.706426206664;
    tmp_msg_0.vz = 0.00698050170324;
    tmp_msg_0.p = 0.58163639725;
    tmp_msg_0.q = 0.976477021394;
    tmp_msg_0.r = 0.684122169834;
    tmp_msg_0.depth = 0.27466146318;
    tmp_msg_0.alt = 0.516256160969;
    msg.state.set(tmp_msg_0);
    msg.type = 191U;

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
    msg.setTimeStamp(0.131391313794);
    msg.setSource(32779U);
    msg.setSourceEntity(202U);
    msg.setDestination(20649U);
    msg.setDestinationEntity(31U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.194201743018;
    tmp_msg_0.lon = 0.471017953815;
    tmp_msg_0.height = 0.902644077682;
    tmp_msg_0.x = 0.381674133613;
    tmp_msg_0.y = 0.893259893827;
    tmp_msg_0.z = 0.253221981123;
    tmp_msg_0.phi = 0.947514517899;
    tmp_msg_0.theta = 0.931000064092;
    tmp_msg_0.psi = 0.0337085595591;
    tmp_msg_0.u = 0.602375834717;
    tmp_msg_0.v = 0.469520754985;
    tmp_msg_0.w = 0.318104253929;
    tmp_msg_0.vx = 0.634825017173;
    tmp_msg_0.vy = 0.565007422224;
    tmp_msg_0.vz = 0.0688939346008;
    tmp_msg_0.p = 0.92453955868;
    tmp_msg_0.q = 0.594709041769;
    tmp_msg_0.r = 0.681682325091;
    tmp_msg_0.depth = 0.950298973439;
    tmp_msg_0.alt = 0.578946989073;
    msg.state.set(tmp_msg_0);
    msg.type = 147U;

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
    msg.setTimeStamp(0.209922552306);
    msg.setSource(1130U);
    msg.setSourceEntity(59U);
    msg.setDestination(49496U);
    msg.setDestinationEntity(116U);
    msg.value = 0.677847293376;

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
    msg.setTimeStamp(0.116955532469);
    msg.setSource(7236U);
    msg.setSourceEntity(150U);
    msg.setDestination(8488U);
    msg.setDestinationEntity(17U);
    msg.value = 0.568881963814;

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
    msg.setTimeStamp(0.244866364337);
    msg.setSource(61019U);
    msg.setSourceEntity(115U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(8U);
    msg.value = 0.758221439382;

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
    msg.setTimeStamp(0.386404852318);
    msg.setSource(38968U);
    msg.setSourceEntity(105U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(228U);
    msg.value = 0.546259163645;

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
    msg.setTimeStamp(0.635156949998);
    msg.setSource(17088U);
    msg.setSourceEntity(71U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(241U);
    msg.value = 0.234743718541;

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
    msg.setTimeStamp(0.396938083343);
    msg.setSource(18371U);
    msg.setSourceEntity(148U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(50U);
    msg.value = 0.198863938978;

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
    msg.setTimeStamp(0.800380672734);
    msg.setSource(62396U);
    msg.setSourceEntity(93U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(243U);
    msg.value = 0.52328961714;

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
    msg.setTimeStamp(0.908669628227);
    msg.setSource(5838U);
    msg.setSourceEntity(204U);
    msg.setDestination(32648U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0758047283077;

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
    msg.setTimeStamp(0.281446531885);
    msg.setSource(65166U);
    msg.setSourceEntity(84U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(34U);
    msg.value = 0.770328511229;

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
    msg.setTimeStamp(0.689570470205);
    msg.setSource(22468U);
    msg.setSourceEntity(108U);
    msg.setDestination(33119U);
    msg.setDestinationEntity(54U);
    msg.value = 0.819815873426;

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
    msg.setTimeStamp(0.809538505054);
    msg.setSource(36913U);
    msg.setSourceEntity(93U);
    msg.setDestination(48471U);
    msg.setDestinationEntity(4U);
    msg.value = 0.625591316248;

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
    msg.setTimeStamp(0.219231579158);
    msg.setSource(60353U);
    msg.setSourceEntity(104U);
    msg.setDestination(51109U);
    msg.setDestinationEntity(241U);
    msg.value = 0.711565872337;

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
    msg.setTimeStamp(0.188541627185);
    msg.setSource(63992U);
    msg.setSourceEntity(69U);
    msg.setDestination(51653U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0866384241313;

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
    msg.setTimeStamp(0.808677346541);
    msg.setSource(1694U);
    msg.setSourceEntity(209U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(77U);
    msg.value = 0.211697485878;

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
    msg.setTimeStamp(0.27127381583);
    msg.setSource(35365U);
    msg.setSourceEntity(2U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(175U);
    msg.value = 0.143488082959;

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
    msg.setTimeStamp(0.203497362545);
    msg.setSource(14574U);
    msg.setSourceEntity(57U);
    msg.setDestination(32451U);
    msg.setDestinationEntity(48U);
    msg.id = 198U;
    msg.zoom = 49U;
    msg.action = 14U;

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
    msg.setTimeStamp(0.571012083907);
    msg.setSource(24417U);
    msg.setSourceEntity(42U);
    msg.setDestination(45505U);
    msg.setDestinationEntity(208U);
    msg.id = 75U;
    msg.zoom = 121U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.485095073164);
    msg.setSource(9207U);
    msg.setSourceEntity(73U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(41U);
    msg.id = 39U;
    msg.zoom = 168U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.841000209827);
    msg.setSource(41402U);
    msg.setSourceEntity(254U);
    msg.setDestination(61822U);
    msg.setDestinationEntity(253U);
    msg.id = 175U;
    msg.value = 0.0530914405537;

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
    msg.setTimeStamp(0.679875755718);
    msg.setSource(12002U);
    msg.setSourceEntity(196U);
    msg.setDestination(29711U);
    msg.setDestinationEntity(196U);
    msg.id = 173U;
    msg.value = 0.934770127555;

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
    msg.setTimeStamp(0.975018660632);
    msg.setSource(24780U);
    msg.setSourceEntity(88U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(135U);
    msg.id = 64U;
    msg.value = 0.420664863131;

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
    msg.setTimeStamp(0.432762629349);
    msg.setSource(57840U);
    msg.setSourceEntity(230U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(221U);
    msg.id = 80U;
    msg.value = 0.745321616659;

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
    msg.setTimeStamp(0.934784751835);
    msg.setSource(42043U);
    msg.setSourceEntity(186U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(171U);
    msg.id = 11U;
    msg.value = 0.0215015875911;

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
    msg.setTimeStamp(0.0517747671358);
    msg.setSource(10276U);
    msg.setSourceEntity(147U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(212U);
    msg.id = 34U;
    msg.value = 0.612313645095;

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
    msg.setTimeStamp(0.978676620692);
    msg.setSource(31248U);
    msg.setSourceEntity(201U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(31U);
    msg.id = 116U;
    msg.angle = 0.544848650695;

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
    msg.setTimeStamp(0.942023374338);
    msg.setSource(43862U);
    msg.setSourceEntity(212U);
    msg.setDestination(55602U);
    msg.setDestinationEntity(11U);
    msg.id = 40U;
    msg.angle = 0.120581116542;

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
    msg.setTimeStamp(0.17885565805);
    msg.setSource(58499U);
    msg.setSourceEntity(175U);
    msg.setDestination(35270U);
    msg.setDestinationEntity(95U);
    msg.id = 226U;
    msg.angle = 0.129112397456;

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
    msg.setTimeStamp(0.915235036433);
    msg.setSource(46755U);
    msg.setSourceEntity(127U);
    msg.setDestination(7459U);
    msg.setDestinationEntity(168U);
    msg.op = 170U;
    msg.actions.assign("PEVMTKFBYUZXM");

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
    msg.setTimeStamp(0.17410537994);
    msg.setSource(65404U);
    msg.setSourceEntity(7U);
    msg.setDestination(38390U);
    msg.setDestinationEntity(128U);
    msg.op = 229U;
    msg.actions.assign("OHVLUWNHAIFZUFKCPCEQGRDKRLLGHGNPRTIMDJWRUNUDBTIOQPZCHYOJPRAYPOLR");

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
    msg.setTimeStamp(0.152151711765);
    msg.setSource(60435U);
    msg.setSourceEntity(229U);
    msg.setDestination(60453U);
    msg.setDestinationEntity(103U);
    msg.op = 149U;
    msg.actions.assign("PAATJYQUOPKFQWLIZQKVLPCULXKDMHNTHEQVNGJYYNUANVKCODUSOWUEVQDMRLFPIOZOAIGD");

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
    msg.setTimeStamp(0.57146158558);
    msg.setSource(48424U);
    msg.setSourceEntity(151U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("UYAOPTLAFMTMMNBSDAYHJHNQEXZRYEGQJBCJETQNHNKGNHATNDSUJTBOTPMGELWVHAQDXCYFSVRGIFWRLTLAEUFMHCZPXOUGIVGMQLPPZBDDOSIHXSEKKKIQUUNGDQWWWVRRFPXRAIACMOOJPOUDBLFQNBJVPXMWHJLKWCVDBUKPZYSHBVFNXIWHAYCIQJKNZVOEKZQCTZXELIPIUFWSSLCDKJGZURACBZXETR");

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
    msg.setTimeStamp(0.00417063885253);
    msg.setSource(31952U);
    msg.setSourceEntity(23U);
    msg.setDestination(51649U);
    msg.setDestinationEntity(189U);
    msg.actions.assign("UGIJARBMKPPIPYSIEYCXAKOEBZXUZUVISUAPWNKQMFWMQWHJJFAYSOTMHBBEXSJOWSUHBFXTPRWJFHXUKVXOTCKKBXTABQ");

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
    msg.setTimeStamp(0.0608743093525);
    msg.setSource(37750U);
    msg.setSourceEntity(149U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("XNCPDNTSHJRYPEXNPCGXXBLNTKMZNQSFGGBVBDHLMHVLFELAXUNDRDROKJQQVYLISRNVFYHWAWOMZHJCWMISMOMCOCNQYVAPUAYSVFTCUWZYCGCBUWGGDMXBALWYWUKRTPQRSUJUKQDRZPNZMGEVIDGWIIBTOIXLVEFHMLEKOQKJRTIMOPZQLSJCQWFRFCBKHVBHGKKZZJBTZETFZHBNUAYEJAPSEVTJXXGOFP");

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
    msg.setTimeStamp(0.945808415479);
    msg.setSource(28655U);
    msg.setSourceEntity(146U);
    msg.setDestination(21332U);
    msg.setDestinationEntity(104U);
    msg.button = 132U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.38304934753);
    msg.setSource(25223U);
    msg.setSourceEntity(127U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(37U);
    msg.button = 56U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.769454490124);
    msg.setSource(2614U);
    msg.setSourceEntity(167U);
    msg.setDestination(25075U);
    msg.setDestinationEntity(58U);
    msg.button = 59U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.163881109472);
    msg.setSource(27710U);
    msg.setSourceEntity(52U);
    msg.setDestination(8017U);
    msg.setDestinationEntity(161U);
    msg.op = 182U;
    msg.text.assign("XWLCLHCGPXNMMAMASRQSEDOTFATDYDOWGMHLSMBZSFWOIULGFDKGEINJONPBUNGFRSBGTBTEFHPBFXCPHVGQIKXAWEPHAQNUXPDMYHKRVPUAQJAYIEBYGCJECAVTQWVVNDUZZAUUKRQCUEXVJSDBFYODTHBLSROOKJJLDIWUAWSJQCITVWJYRQQJBXYNKIZV");

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
    msg.setTimeStamp(0.96402310668);
    msg.setSource(16328U);
    msg.setSourceEntity(165U);
    msg.setDestination(30090U);
    msg.setDestinationEntity(158U);
    msg.op = 169U;
    msg.text.assign("XGAEDKEJKZACASVCYASPLAWKIPUSSFUUQWLKPHZOTFFQMNLDDSUQYYMAJGETUWWERLIKTQDHBXVHWOZOKWNNTZMSVZPRNTZMHDFHEYKRFVPYWILWRVJXWFXICOTNMRTNGMFHGLGHGUDACJANLDMTCRLPXKGQECVPJJSUFCBZOPBGFERBGOT");

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
    msg.setTimeStamp(0.92018313754);
    msg.setSource(32600U);
    msg.setSourceEntity(165U);
    msg.setDestination(30961U);
    msg.setDestinationEntity(144U);
    msg.op = 68U;
    msg.text.assign("DDTFFMUZWWDCUNSLJQYPTPWRTNJICURYLXFNJEBYCRWKTSKZGALKJKQPGYBSMEMVBZKSRJFQCAIWMNAKFYREZSVFOEHFQZNHAYOCJVCHOODBVYBJELBXUBPIGQTHKZWWAIQITSCRJODXBSUMVCGNSYECOKBVGNPVDVPXPLUEHEFKSOFZHHUXTYMUNRXUHPAFLAAKUANEGVADMRPOWBGMRXXZGTGEHIRHJODMXINLGIITTPWZDOJQYQIVQSML");

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
    msg.setTimeStamp(0.318527922025);
    msg.setSource(2086U);
    msg.setSourceEntity(145U);
    msg.setDestination(9650U);
    msg.setDestinationEntity(95U);
    msg.op = 62U;
    msg.time_remain = 0.616555741827;
    msg.sched_time = 0.356184798489;

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
    msg.setTimeStamp(0.836429047721);
    msg.setSource(43450U);
    msg.setSourceEntity(176U);
    msg.setDestination(47072U);
    msg.setDestinationEntity(250U);
    msg.op = 235U;
    msg.time_remain = 0.456275518391;
    msg.sched_time = 0.584798322249;

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
    msg.setTimeStamp(0.887994470569);
    msg.setSource(55014U);
    msg.setSourceEntity(94U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(180U);
    msg.op = 29U;
    msg.time_remain = 0.353856243359;
    msg.sched_time = 0.448842551887;

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
    msg.setTimeStamp(0.369231905728);
    msg.setSource(59638U);
    msg.setSourceEntity(98U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(211U);
    msg.name.assign("INJCKBVTHJYYZOQIJRKRDZAMUOIMTSIXONPBSAJNOBXAJEWDXGSLUWTGTWACBYWHZO");
    msg.op = 39U;
    msg.sched_time = 0.516921200163;

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
    msg.setTimeStamp(0.0983140722191);
    msg.setSource(62874U);
    msg.setSourceEntity(97U);
    msg.setDestination(59775U);
    msg.setDestinationEntity(76U);
    msg.name.assign("NJIJXVKRROUXWCMJUDKYLQVTNNBKCMNAROYKXPNGKULSOSEYNCHBENZP");
    msg.op = 201U;
    msg.sched_time = 0.97809119359;

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
    msg.setTimeStamp(0.517131904803);
    msg.setSource(4421U);
    msg.setSourceEntity(218U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(63U);
    msg.name.assign("KEDLTFIWWLBZOVHTLGQYPCZFMUFVFHZYMDWYTPXDUMUJLVIHKNRKQUSSBCUEORVAXPYZWIBBXJCEZXUGBKXJQGIDEDSYOSSFCUTKDRVWJVEMITVAXROMHWDGJLQGWOQISRKOIOAHNRKFKOLNJDLFCMBRYGYUIJLWKXYXHNGFBAINTEPUAPEJET");
    msg.op = 210U;
    msg.sched_time = 0.971911736287;

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
    msg.setTimeStamp(0.0810235792463);
    msg.setSource(20676U);
    msg.setSourceEntity(19U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.790984601056);
    msg.setSource(55673U);
    msg.setSourceEntity(70U);
    msg.setDestination(35127U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.400929931494);
    msg.setSource(50568U);
    msg.setSourceEntity(36U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.350335976337);
    msg.setSource(48981U);
    msg.setSourceEntity(90U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(54U);
    msg.name.assign("KIQNUDJETUHBMXAAACSWCKFZOREULCCVCLLJUZIVRVPRTXOYBDPVXPNSYSIBTRZSIGTZIBKKQTVPRKXEVZPFQDBUNJNOGATQJGJGCGVFGXNSHHCOFFGZLWNAHEXFRRYSHTTWLKIDBSDSOOCYIDR");
    msg.state = 223U;

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
    msg.setTimeStamp(0.578909582917);
    msg.setSource(27866U);
    msg.setSourceEntity(40U);
    msg.setDestination(30929U);
    msg.setDestinationEntity(62U);
    msg.name.assign("RZFYFMHYBSMVPSSLPYYPXBWVOLRZPAUOEJRVNOWVHPLVRUSWQRBHFWTLYGCXCXHQEKLVNGXQDNAAFGIUHUBZJAIKKM");
    msg.state = 209U;

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
    msg.setTimeStamp(0.86806460414);
    msg.setSource(47218U);
    msg.setSourceEntity(14U);
    msg.setDestination(7255U);
    msg.setDestinationEntity(153U);
    msg.name.assign("QSQHOESLFWFHSSMOXKCGIAUTSLSJONBQSCMHEYRHBLRMYOUEZYVBQZTICBXKNKHZDWNEIDKFDVKDRMPXQCXRFDHIXWWASJGPJIEFMCHNIZZCBEEQVWDOVZ");
    msg.state = 4U;

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
    msg.setTimeStamp(0.704975534861);
    msg.setSource(6153U);
    msg.setSourceEntity(221U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(105U);
    msg.name.assign("LHTFYCCCNMVTKOCFRWKIGRWVM");
    msg.value = 222U;

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
    msg.setTimeStamp(0.985865044224);
    msg.setSource(42136U);
    msg.setSourceEntity(54U);
    msg.setDestination(25884U);
    msg.setDestinationEntity(92U);
    msg.name.assign("QHJWRPUZGJMJAVQVKOPBRPKFMJUCFTHEIGTUAEGEPSAIVQJXYZCALAXLOCJNZFKWMEOGSYGUKSCRMPHLVNQEOISRCNIXZWHTVXHAFWCLSMDINOZ");
    msg.value = 3U;

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
    msg.setTimeStamp(0.728794437292);
    msg.setSource(5412U);
    msg.setSourceEntity(134U);
    msg.setDestination(54944U);
    msg.setDestinationEntity(218U);
    msg.name.assign("HMJBQKPSZIYFESLNREEIRPKHURYIENHNAUHKOYTSRGOXPDSURCUOOTQCEJLXSCPPXZCHJVEXPZEKNQQIKGNYVBGMKTCWZMCFVYI");
    msg.value = 253U;

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
    msg.setTimeStamp(0.729464039913);
    msg.setSource(38382U);
    msg.setSourceEntity(235U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(154U);
    msg.name.assign("SMPFXSQUONUWKJJIBFGRJZVAJZZECDLPMLERBUTTRWKWHXVYEVDFGGSEAFN");

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
    msg.setTimeStamp(0.354019020371);
    msg.setSource(21909U);
    msg.setSourceEntity(103U);
    msg.setDestination(61742U);
    msg.setDestinationEntity(54U);
    msg.name.assign("UGXCOZEAPHMMFUJQZIRWZUMTLHCYLOWJNMZSOMNKVYNZRAGVRUNOYDPSSNVSGZOJJKRXVJJRQHMVABEPBBQTDFPCTOGSB");

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
    msg.setTimeStamp(0.602291142668);
    msg.setSource(1636U);
    msg.setSourceEntity(23U);
    msg.setDestination(30983U);
    msg.setDestinationEntity(137U);
    msg.name.assign("WBFQVOHAOKTSVYPZNRDRAYFVMRWFACTIGMUISLSNOLQJVFAFVZAQYPN");

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
    msg.setTimeStamp(0.352577675728);
    msg.setSource(10505U);
    msg.setSourceEntity(30U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(208U);
    msg.name.assign("CURUSBGCPHFZQMGPPHBAPDKGDXIFBPMRNNNZZKMWWKPJONGCCUKJSQITFYLXRBJEWSGFCPXWUPTSXGVVCHUIZZSZQSKRMJIZQCYYIOFANIOSTLAEQAJZYRDXEMFRAWBXUTVHJHCYWWAEMGLDJTQIDQMVEVGTLERHIQEJZQYNIUUMBSBONKWYVBUVHALIDENQHXOKTO");
    msg.value = 151U;

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
    msg.setTimeStamp(0.713252824691);
    msg.setSource(50514U);
    msg.setSourceEntity(189U);
    msg.setDestination(15734U);
    msg.setDestinationEntity(174U);
    msg.name.assign("TZBKJXOUAJMMULURGKNFNMRZIDIBSXHMQDCLKPYJJDEYHHMEOAGPSVWTQWTIZZWVCCYXEZAWLSVUEOBJCRLFRBSYNZQWAFIURVYNMWUDSDTYXCGETGOHTPZFACPDWPFIJYYLXJLRDNGLQATYOSQGHKIFUPTVEOKAZKVQRXFQCZBCPFJSSGEEMFHWKWUIDDKMVOTNHIXBJCNRLAMYKBUHJVROXEBAPUGBOLQFSQVNASCX");
    msg.value = 148U;

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
    msg.setTimeStamp(0.0971589644164);
    msg.setSource(7597U);
    msg.setSourceEntity(83U);
    msg.setDestination(4119U);
    msg.setDestinationEntity(106U);
    msg.name.assign("KLEPFIJGZOBKCISOURXBDGRDVCBARU");
    msg.value = 180U;

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
    msg.setTimeStamp(0.302046630596);
    msg.setSource(18374U);
    msg.setSourceEntity(73U);
    msg.setDestination(102U);
    msg.setDestinationEntity(83U);
    msg.id = 133U;
    msg.period = 44831830U;
    msg.duty_cycle = 1310344692U;

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
    msg.setTimeStamp(0.0957637723559);
    msg.setSource(28616U);
    msg.setSourceEntity(238U);
    msg.setDestination(41389U);
    msg.setDestinationEntity(162U);
    msg.id = 221U;
    msg.period = 2688623914U;
    msg.duty_cycle = 2382972874U;

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
    msg.setTimeStamp(0.377226810392);
    msg.setSource(5235U);
    msg.setSourceEntity(142U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(232U);
    msg.id = 61U;
    msg.period = 9423087U;
    msg.duty_cycle = 2445623315U;

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
    msg.setTimeStamp(0.0433940420422);
    msg.setSource(19089U);
    msg.setSourceEntity(29U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(72U);
    msg.id = 133U;
    msg.period = 1452126076U;
    msg.duty_cycle = 2925082610U;

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
    msg.setTimeStamp(0.939372927723);
    msg.setSource(32796U);
    msg.setSourceEntity(189U);
    msg.setDestination(1469U);
    msg.setDestinationEntity(215U);
    msg.id = 243U;
    msg.period = 3196086U;
    msg.duty_cycle = 3550822578U;

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
    msg.setTimeStamp(0.654836628064);
    msg.setSource(43864U);
    msg.setSourceEntity(215U);
    msg.setDestination(15374U);
    msg.setDestinationEntity(225U);
    msg.id = 219U;
    msg.period = 2498654211U;
    msg.duty_cycle = 2415782854U;

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
    msg.setTimeStamp(0.516282967124);
    msg.setSource(53838U);
    msg.setSourceEntity(67U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.533201882715;
    msg.lon = 0.808101778553;
    msg.height = 0.129913931947;
    msg.x = 0.40310100347;
    msg.y = 0.554830186746;
    msg.z = 0.0500999960485;
    msg.phi = 0.692441270347;
    msg.theta = 0.668968261764;
    msg.psi = 0.336072252656;
    msg.u = 0.242884228786;
    msg.v = 0.99990807246;
    msg.w = 0.618826757949;
    msg.vx = 0.707503659045;
    msg.vy = 0.160018281311;
    msg.vz = 0.655806430059;
    msg.p = 0.387047427878;
    msg.q = 0.945241551046;
    msg.r = 0.620289421971;
    msg.depth = 0.47329165943;
    msg.alt = 0.0653594523866;

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
    msg.setTimeStamp(0.794489618195);
    msg.setSource(48523U);
    msg.setSourceEntity(89U);
    msg.setDestination(27929U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.150239273233;
    msg.lon = 0.697320058392;
    msg.height = 0.528458767689;
    msg.x = 0.324201409956;
    msg.y = 0.00781816325913;
    msg.z = 0.782526516017;
    msg.phi = 0.807811775221;
    msg.theta = 0.783284392898;
    msg.psi = 0.113188449202;
    msg.u = 0.63575743952;
    msg.v = 0.0901553583224;
    msg.w = 0.85891303382;
    msg.vx = 0.712864461046;
    msg.vy = 0.750775103116;
    msg.vz = 0.997828537007;
    msg.p = 0.971069723861;
    msg.q = 0.394630993137;
    msg.r = 0.636986167053;
    msg.depth = 0.592076579567;
    msg.alt = 0.181608785146;

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
    msg.setTimeStamp(0.103903042606);
    msg.setSource(26534U);
    msg.setSourceEntity(210U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.00738329163548;
    msg.lon = 0.117048533264;
    msg.height = 0.144075762692;
    msg.x = 0.0870535636192;
    msg.y = 0.202452968726;
    msg.z = 0.388593900684;
    msg.phi = 0.923620645056;
    msg.theta = 0.0514614986131;
    msg.psi = 0.622757564851;
    msg.u = 0.748546705878;
    msg.v = 0.407218730123;
    msg.w = 0.309254653907;
    msg.vx = 0.210266309429;
    msg.vy = 0.147731371342;
    msg.vz = 0.700093861288;
    msg.p = 0.625650690016;
    msg.q = 0.272632081765;
    msg.r = 0.242891987582;
    msg.depth = 0.525698491156;
    msg.alt = 0.000452856962456;

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
    msg.setTimeStamp(0.214669645371);
    msg.setSource(31269U);
    msg.setSourceEntity(85U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(36U);
    msg.x = 0.782319967456;
    msg.y = 0.453209084542;
    msg.z = 0.778877168246;

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
    msg.setTimeStamp(0.475335536373);
    msg.setSource(28073U);
    msg.setSourceEntity(202U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(144U);
    msg.x = 0.189959868037;
    msg.y = 0.160871681815;
    msg.z = 0.150010930403;

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
    msg.setTimeStamp(0.877210938277);
    msg.setSource(27413U);
    msg.setSourceEntity(143U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(62U);
    msg.x = 0.421772306711;
    msg.y = 0.841909742656;
    msg.z = 0.363870529937;

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
    msg.setTimeStamp(0.978290034818);
    msg.setSource(26740U);
    msg.setSourceEntity(169U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(162U);
    msg.value = 0.802169678793;

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
    msg.setTimeStamp(0.564712910689);
    msg.setSource(12574U);
    msg.setSourceEntity(128U);
    msg.setDestination(8532U);
    msg.setDestinationEntity(173U);
    msg.value = 0.738770456528;

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
    msg.setTimeStamp(0.433032438846);
    msg.setSource(55366U);
    msg.setSourceEntity(193U);
    msg.setDestination(1659U);
    msg.setDestinationEntity(240U);
    msg.value = 0.631441485076;

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
    msg.setTimeStamp(0.686900339694);
    msg.setSource(46698U);
    msg.setSourceEntity(175U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(142U);
    msg.value = 0.481773176351;

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
    msg.setTimeStamp(0.706658261452);
    msg.setSource(39639U);
    msg.setSourceEntity(7U);
    msg.setDestination(36214U);
    msg.setDestinationEntity(215U);
    msg.value = 0.823359254473;

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
    msg.setTimeStamp(0.345952719666);
    msg.setSource(20038U);
    msg.setSourceEntity(16U);
    msg.setDestination(34380U);
    msg.setDestinationEntity(58U);
    msg.value = 0.789259165074;

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
    msg.setTimeStamp(0.0633925481302);
    msg.setSource(8376U);
    msg.setSourceEntity(219U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(99U);
    msg.x = 0.153641725603;
    msg.y = 0.257728954473;
    msg.z = 0.298016444558;
    msg.phi = 0.255978548951;
    msg.theta = 0.155183189477;
    msg.psi = 0.519198967522;
    msg.p = 0.970703555152;
    msg.q = 0.388337110892;
    msg.r = 0.296157037384;
    msg.u = 0.0528307698868;
    msg.v = 0.746309170801;
    msg.w = 0.353361036174;
    msg.bias_psi = 0.295551375152;
    msg.bias_r = 0.864051616097;

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
    msg.setTimeStamp(0.932245536781);
    msg.setSource(274U);
    msg.setSourceEntity(50U);
    msg.setDestination(46149U);
    msg.setDestinationEntity(65U);
    msg.x = 0.884072205077;
    msg.y = 0.912924487729;
    msg.z = 0.322547266075;
    msg.phi = 0.984529837808;
    msg.theta = 0.659753021711;
    msg.psi = 0.926153284901;
    msg.p = 0.563595300623;
    msg.q = 0.83473711385;
    msg.r = 0.885291410682;
    msg.u = 0.176911040468;
    msg.v = 0.590075605689;
    msg.w = 0.466095100823;
    msg.bias_psi = 0.763001023282;
    msg.bias_r = 0.368466995026;

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
    msg.setTimeStamp(0.265019977217);
    msg.setSource(32529U);
    msg.setSourceEntity(46U);
    msg.setDestination(10096U);
    msg.setDestinationEntity(210U);
    msg.x = 0.13442174929;
    msg.y = 0.193089173905;
    msg.z = 0.729939555758;
    msg.phi = 0.325413946472;
    msg.theta = 0.435775336447;
    msg.psi = 0.979503604133;
    msg.p = 0.281782022759;
    msg.q = 0.722978239147;
    msg.r = 0.493751659561;
    msg.u = 0.6375776911;
    msg.v = 0.567368948233;
    msg.w = 0.889202367005;
    msg.bias_psi = 0.988637023007;
    msg.bias_r = 0.169962923951;

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
    msg.setTimeStamp(0.797432829723);
    msg.setSource(15735U);
    msg.setSourceEntity(148U);
    msg.setDestination(58853U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.740555644918;
    msg.bias_r = 0.751467961824;
    msg.cog = 0.697712871168;
    msg.cyaw = 0.477907470182;
    msg.lbl_rej_level = 0.722397016755;
    msg.gps_rej_level = 0.56283868646;
    msg.custom_x = 0.581292003776;
    msg.custom_y = 0.318442400384;
    msg.custom_z = 0.235239780433;

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
    msg.setTimeStamp(0.745701913002);
    msg.setSource(17346U);
    msg.setSourceEntity(215U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(111U);
    msg.bias_psi = 0.0762346723596;
    msg.bias_r = 0.149744432954;
    msg.cog = 0.958905171244;
    msg.cyaw = 0.508571979965;
    msg.lbl_rej_level = 0.152443704942;
    msg.gps_rej_level = 0.865210965468;
    msg.custom_x = 0.410375434515;
    msg.custom_y = 0.815802360323;
    msg.custom_z = 0.110229601845;

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
    msg.setTimeStamp(0.74807168039);
    msg.setSource(27142U);
    msg.setSourceEntity(70U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(69U);
    msg.bias_psi = 0.596123040432;
    msg.bias_r = 0.470313642985;
    msg.cog = 0.890261579104;
    msg.cyaw = 0.665401183305;
    msg.lbl_rej_level = 0.403993602381;
    msg.gps_rej_level = 0.642652924135;
    msg.custom_x = 0.624804052792;
    msg.custom_y = 0.513222938826;
    msg.custom_z = 0.125616995858;

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
    msg.setTimeStamp(0.89005865536);
    msg.setSource(59363U);
    msg.setSourceEntity(126U);
    msg.setDestination(24958U);
    msg.setDestinationEntity(17U);
    msg.utc_time = 0.912072689033;
    msg.reason = 90U;

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
    msg.setTimeStamp(0.105094374435);
    msg.setSource(50267U);
    msg.setSourceEntity(5U);
    msg.setDestination(53751U);
    msg.setDestinationEntity(18U);
    msg.utc_time = 0.730595690524;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.674261551013);
    msg.setSource(35435U);
    msg.setSourceEntity(165U);
    msg.setDestination(62398U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.330472078759;
    msg.reason = 76U;

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
    msg.setTimeStamp(0.144011813862);
    msg.setSource(40753U);
    msg.setSourceEntity(176U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(196U);
    msg.id = 83U;
    msg.range = 0.35189131261;
    msg.acceptance = 53U;

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
    msg.setTimeStamp(0.154831485531);
    msg.setSource(53462U);
    msg.setSourceEntity(111U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(65U);
    msg.id = 142U;
    msg.range = 0.953878151837;
    msg.acceptance = 172U;

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
    msg.setTimeStamp(0.822556432427);
    msg.setSource(16752U);
    msg.setSourceEntity(160U);
    msg.setDestination(19767U);
    msg.setDestinationEntity(164U);
    msg.id = 187U;
    msg.range = 0.975056028241;
    msg.acceptance = 155U;

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
    msg.setTimeStamp(0.32057834818);
    msg.setSource(24557U);
    msg.setSourceEntity(78U);
    msg.setDestination(9437U);
    msg.setDestinationEntity(2U);
    msg.type = 99U;
    msg.reason = 189U;
    msg.value = 0.798000767476;
    msg.timestep = 0.414228867182;

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
    msg.setTimeStamp(0.989563052772);
    msg.setSource(55643U);
    msg.setSourceEntity(178U);
    msg.setDestination(41718U);
    msg.setDestinationEntity(226U);
    msg.type = 187U;
    msg.reason = 186U;
    msg.value = 0.728374154683;
    msg.timestep = 0.323637622818;

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
    msg.setTimeStamp(0.492723998447);
    msg.setSource(9877U);
    msg.setSourceEntity(74U);
    msg.setDestination(9774U);
    msg.setDestinationEntity(227U);
    msg.type = 230U;
    msg.reason = 53U;
    msg.value = 0.893778015417;
    msg.timestep = 0.858563532898;

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
    msg.setTimeStamp(0.194653628492);
    msg.setSource(7331U);
    msg.setSourceEntity(177U);
    msg.setDestination(23902U);
    msg.setDestinationEntity(238U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NLCYZPNZXKBUECSIPMOAACRMZFCILSGWAYVVOKTQGBNDIYHXKTEMQIDMOCPCVSQTALEYEADIOJZYXJQFHGBSQJCAPJAHEPTSTVHPCAYURSYYOVNEPLUDWWGF");
    tmp_msg_0.lat = 0.0580349939005;
    tmp_msg_0.lon = 0.319603986706;
    tmp_msg_0.depth = 0.740598843077;
    tmp_msg_0.query_channel = 101U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.132354942205;
    msg.y = 0.0526260172755;
    msg.var_x = 0.780745241737;
    msg.var_y = 0.212276709727;
    msg.distance = 0.84811565777;

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
    msg.setTimeStamp(0.0221167792102);
    msg.setSource(48170U);
    msg.setSourceEntity(142U);
    msg.setDestination(28356U);
    msg.setDestinationEntity(22U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CLEEXMYFSNBTZOGYUCSAMVRGHDAUXRKCXWRPVPJXHGTWJTKBIKNMMFJXBLLGRXGQZLVWTYRDSPPVQYNAQZNSQUATZVJDBNOSBLHRJHKAUMIOUGCHICREQWPUUCDWEBZYVWFOOKHTPQUSUNPKFYKLDEXQIQPJPUMH");
    tmp_msg_0.lat = 0.963247633463;
    tmp_msg_0.lon = 0.952352334387;
    tmp_msg_0.depth = 0.813506486681;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 130U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.933750626838;
    msg.y = 0.822645523701;
    msg.var_x = 0.346265617658;
    msg.var_y = 0.716262335051;
    msg.distance = 0.0207990709957;

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
    msg.setTimeStamp(0.518715163177);
    msg.setSource(63189U);
    msg.setSourceEntity(169U);
    msg.setDestination(58138U);
    msg.setDestinationEntity(8U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EPHLGSTLBFPMEVZGRKVPBZKJPRAJTFMIYYRVVCWNADHMJJESNUZQQXWDFOFNKVLZIVIFOJLMXMFBZGYMHVOOVJHEKISAQCWQULLIRSRB");
    tmp_msg_0.lat = 0.740781227403;
    tmp_msg_0.lon = 0.781901095623;
    tmp_msg_0.depth = 0.42200191963;
    tmp_msg_0.query_channel = 211U;
    tmp_msg_0.reply_channel = 62U;
    tmp_msg_0.transponder_delay = 74U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.999728626155;
    msg.y = 0.605704977226;
    msg.var_x = 0.364429911336;
    msg.var_y = 0.52539296821;
    msg.distance = 0.130616147459;

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
    msg.setTimeStamp(0.433697244945);
    msg.setSource(59337U);
    msg.setSourceEntity(180U);
    msg.setDestination(64814U);
    msg.setDestinationEntity(127U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.322952196941);
    msg.setSource(37582U);
    msg.setSourceEntity(152U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(43U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.401276757472);
    msg.setSource(50233U);
    msg.setSourceEntity(200U);
    msg.setDestination(57720U);
    msg.setDestinationEntity(20U);
    msg.state = 188U;

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
    msg.setTimeStamp(0.285285417275);
    msg.setSource(1858U);
    msg.setSourceEntity(251U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(236U);
    msg.x = 0.354357477556;
    msg.y = 0.803397366309;
    msg.z = 0.857094955136;

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
    msg.setTimeStamp(0.821778192243);
    msg.setSource(41787U);
    msg.setSourceEntity(108U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(25U);
    msg.x = 0.6833539922;
    msg.y = 0.819485620101;
    msg.z = 0.875376802309;

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
    msg.setTimeStamp(0.460038199444);
    msg.setSource(13704U);
    msg.setSourceEntity(238U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(70U);
    msg.x = 0.339406858949;
    msg.y = 0.232910724294;
    msg.z = 0.699464763919;

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
    msg.setTimeStamp(0.520785254465);
    msg.setSource(12559U);
    msg.setSourceEntity(169U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(92U);
    msg.va = 0.0987304021264;
    msg.aoa = 0.953788536243;
    msg.ssa = 0.0315734893276;

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
    msg.setTimeStamp(0.862909492553);
    msg.setSource(54226U);
    msg.setSourceEntity(44U);
    msg.setDestination(33980U);
    msg.setDestinationEntity(126U);
    msg.va = 0.262205258308;
    msg.aoa = 0.83700416142;
    msg.ssa = 0.869958014831;

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
    msg.setTimeStamp(0.483324241271);
    msg.setSource(35863U);
    msg.setSourceEntity(51U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(56U);
    msg.va = 0.399292760307;
    msg.aoa = 0.239488810641;
    msg.ssa = 0.885616635261;

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
    msg.setTimeStamp(0.771397805474);
    msg.setSource(24468U);
    msg.setSourceEntity(126U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(159U);
    msg.value = 0.983491532606;

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
    msg.setTimeStamp(0.46648996969);
    msg.setSource(12961U);
    msg.setSourceEntity(80U);
    msg.setDestination(45030U);
    msg.setDestinationEntity(150U);
    msg.value = 0.812824064515;

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
    msg.setTimeStamp(0.0674141319977);
    msg.setSource(55712U);
    msg.setSourceEntity(239U);
    msg.setDestination(45290U);
    msg.setDestinationEntity(69U);
    msg.value = 0.201625469838;

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
    msg.setTimeStamp(0.960486018929);
    msg.setSource(61285U);
    msg.setSourceEntity(135U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0637185838559;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.150463441821);
    msg.setSource(57648U);
    msg.setSourceEntity(90U);
    msg.setDestination(23070U);
    msg.setDestinationEntity(208U);
    msg.value = 0.108418458368;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.0256477073011);
    msg.setSource(19260U);
    msg.setSourceEntity(59U);
    msg.setDestination(36985U);
    msg.setDestinationEntity(58U);
    msg.value = 0.485394114708;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.543091092448);
    msg.setSource(3158U);
    msg.setSourceEntity(253U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(166U);
    msg.value = 0.980778947978;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.72398170363);
    msg.setSource(36219U);
    msg.setSourceEntity(218U);
    msg.setDestination(21016U);
    msg.setDestinationEntity(88U);
    msg.value = 0.215992123008;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.311764031822);
    msg.setSource(59156U);
    msg.setSourceEntity(90U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(164U);
    msg.value = 0.427606385235;
    msg.speed_units = 55U;

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
    msg.setTimeStamp(0.65349165559);
    msg.setSource(25309U);
    msg.setSourceEntity(73U);
    msg.setDestination(42172U);
    msg.setDestinationEntity(112U);
    msg.value = 0.227676581975;

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
    msg.setTimeStamp(0.509649969211);
    msg.setSource(34733U);
    msg.setSourceEntity(113U);
    msg.setDestination(41586U);
    msg.setDestinationEntity(248U);
    msg.value = 0.56940836058;

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
    msg.setTimeStamp(0.38824205933);
    msg.setSource(33069U);
    msg.setSourceEntity(142U);
    msg.setDestination(30861U);
    msg.setDestinationEntity(192U);
    msg.value = 0.98967912857;

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
    msg.setTimeStamp(0.119996913598);
    msg.setSource(58071U);
    msg.setSourceEntity(55U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(20U);
    msg.value = 0.59274662811;

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
    msg.setTimeStamp(0.618289377456);
    msg.setSource(33068U);
    msg.setSourceEntity(52U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(26U);
    msg.value = 0.714177035921;

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
    msg.setTimeStamp(0.754997524759);
    msg.setSource(29639U);
    msg.setSourceEntity(61U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(92U);
    msg.value = 0.12723671584;

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
    msg.setTimeStamp(0.268650625087);
    msg.setSource(56390U);
    msg.setSourceEntity(143U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(141U);
    msg.value = 0.414942626543;

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
    msg.setTimeStamp(0.953970687627);
    msg.setSource(9561U);
    msg.setSourceEntity(229U);
    msg.setDestination(38899U);
    msg.setDestinationEntity(118U);
    msg.value = 0.782619360596;

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
    msg.setTimeStamp(0.841348310177);
    msg.setSource(29237U);
    msg.setSourceEntity(96U);
    msg.setDestination(60043U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0215299617943;

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
    msg.setTimeStamp(0.780302421709);
    msg.setSource(14596U);
    msg.setSourceEntity(183U);
    msg.setDestination(44427U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 2412588348U;
    msg.start_lat = 0.0992010390073;
    msg.start_lon = 0.0691396646109;
    msg.start_z = 0.371744349832;
    msg.start_z_units = 123U;
    msg.end_lat = 0.519691503222;
    msg.end_lon = 0.948258825884;
    msg.end_z = 0.80703060679;
    msg.end_z_units = 4U;
    msg.speed = 0.202291671633;
    msg.speed_units = 169U;
    msg.lradius = 0.43659002931;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.49328863094);
    msg.setSource(36022U);
    msg.setSourceEntity(234U);
    msg.setDestination(2111U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 602932757U;
    msg.start_lat = 0.417687496345;
    msg.start_lon = 0.478806597507;
    msg.start_z = 0.181987440882;
    msg.start_z_units = 247U;
    msg.end_lat = 0.0261799175354;
    msg.end_lon = 0.944077985507;
    msg.end_z = 0.839758817668;
    msg.end_z_units = 89U;
    msg.speed = 0.533221259966;
    msg.speed_units = 232U;
    msg.lradius = 0.183847593788;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.923522382378);
    msg.setSource(21634U);
    msg.setSourceEntity(53U);
    msg.setDestination(38527U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 468872879U;
    msg.start_lat = 0.766670024975;
    msg.start_lon = 0.547336485692;
    msg.start_z = 0.539109785488;
    msg.start_z_units = 134U;
    msg.end_lat = 0.565920893235;
    msg.end_lon = 0.920825264771;
    msg.end_z = 0.479754213753;
    msg.end_z_units = 240U;
    msg.speed = 0.869088460993;
    msg.speed_units = 70U;
    msg.lradius = 0.907736219774;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.89909346711);
    msg.setSource(38421U);
    msg.setSourceEntity(172U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(238U);
    msg.x = 0.259935047335;
    msg.y = 0.367983966186;
    msg.z = 0.817189755411;
    msg.k = 0.660199881248;
    msg.m = 0.577995197877;
    msg.n = 0.125025467192;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.787905025484);
    msg.setSource(14947U);
    msg.setSourceEntity(152U);
    msg.setDestination(55461U);
    msg.setDestinationEntity(131U);
    msg.x = 0.855256483994;
    msg.y = 0.736856896751;
    msg.z = 0.558939440397;
    msg.k = 0.966522995321;
    msg.m = 0.055192221872;
    msg.n = 0.210621203651;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.0482845196318);
    msg.setSource(57832U);
    msg.setSourceEntity(96U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(11U);
    msg.x = 0.704015813213;
    msg.y = 0.285395585225;
    msg.z = 0.667323127924;
    msg.k = 0.669803935541;
    msg.m = 0.140163432874;
    msg.n = 0.317392016719;
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
    msg.setTimeStamp(0.579917046801);
    msg.setSource(17175U);
    msg.setSourceEntity(195U);
    msg.setDestination(17709U);
    msg.setDestinationEntity(209U);
    msg.value = 0.805460003001;

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
    msg.setTimeStamp(0.749789866867);
    msg.setSource(56035U);
    msg.setSourceEntity(210U);
    msg.setDestination(44708U);
    msg.setDestinationEntity(253U);
    msg.value = 0.738943319447;

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
    msg.setTimeStamp(0.650012225735);
    msg.setSource(10803U);
    msg.setSourceEntity(225U);
    msg.setDestination(24562U);
    msg.setDestinationEntity(31U);
    msg.value = 0.979233812717;

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
    msg.setTimeStamp(0.0618588034164);
    msg.setSource(62760U);
    msg.setSourceEntity(140U);
    msg.setDestination(36350U);
    msg.setDestinationEntity(44U);
    msg.u = 0.598057693693;
    msg.v = 0.454241386201;
    msg.w = 0.951708628915;
    msg.p = 0.697699127165;
    msg.q = 0.456346176341;
    msg.r = 0.960262820119;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.877980825779);
    msg.setSource(31924U);
    msg.setSourceEntity(58U);
    msg.setDestination(3528U);
    msg.setDestinationEntity(2U);
    msg.u = 0.755036159782;
    msg.v = 0.831622772373;
    msg.w = 0.589998611611;
    msg.p = 0.860887357773;
    msg.q = 0.726477207322;
    msg.r = 0.716875217076;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.662720703208);
    msg.setSource(22519U);
    msg.setSourceEntity(205U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(133U);
    msg.u = 0.654235600883;
    msg.v = 0.98448017614;
    msg.w = 0.572169446751;
    msg.p = 0.382649716319;
    msg.q = 0.694166501161;
    msg.r = 0.471472807044;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.717244295465);
    msg.setSource(41299U);
    msg.setSourceEntity(77U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(150U);
    msg.path_ref = 510775968U;
    msg.start_lat = 0.397705451628;
    msg.start_lon = 0.629128124462;
    msg.start_z = 0.0691643169219;
    msg.start_z_units = 136U;
    msg.end_lat = 0.706604722385;
    msg.end_lon = 0.648656374004;
    msg.end_z = 0.228804469108;
    msg.end_z_units = 51U;
    msg.lradius = 0.267211628132;
    msg.flags = 76U;
    msg.x = 0.893568780912;
    msg.y = 0.384522578828;
    msg.z = 0.517997452462;
    msg.vx = 0.0289310842456;
    msg.vy = 0.216883098527;
    msg.vz = 0.563527992672;
    msg.course_error = 0.350855903225;
    msg.eta = 32127U;

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
    msg.setTimeStamp(0.0261592862772);
    msg.setSource(14245U);
    msg.setSourceEntity(5U);
    msg.setDestination(49762U);
    msg.setDestinationEntity(151U);
    msg.path_ref = 1813297489U;
    msg.start_lat = 0.743497558942;
    msg.start_lon = 0.463323224711;
    msg.start_z = 0.857281132558;
    msg.start_z_units = 149U;
    msg.end_lat = 0.236988389149;
    msg.end_lon = 0.756859564797;
    msg.end_z = 0.473479906888;
    msg.end_z_units = 207U;
    msg.lradius = 0.516008860091;
    msg.flags = 112U;
    msg.x = 0.191794215152;
    msg.y = 0.824998804554;
    msg.z = 0.407530489444;
    msg.vx = 0.711744860939;
    msg.vy = 0.448258276334;
    msg.vz = 0.457638921371;
    msg.course_error = 0.223761433017;
    msg.eta = 13094U;

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
    msg.setTimeStamp(0.853672831833);
    msg.setSource(42053U);
    msg.setSourceEntity(111U);
    msg.setDestination(30864U);
    msg.setDestinationEntity(68U);
    msg.path_ref = 402903408U;
    msg.start_lat = 0.100565094047;
    msg.start_lon = 0.682955391251;
    msg.start_z = 0.713174097264;
    msg.start_z_units = 25U;
    msg.end_lat = 0.106038046965;
    msg.end_lon = 0.751495799208;
    msg.end_z = 0.350793712199;
    msg.end_z_units = 196U;
    msg.lradius = 0.635752971489;
    msg.flags = 238U;
    msg.x = 0.275629214986;
    msg.y = 0.791033005358;
    msg.z = 0.196087584542;
    msg.vx = 0.119439651677;
    msg.vy = 0.857288255025;
    msg.vz = 0.788182251923;
    msg.course_error = 0.714179163389;
    msg.eta = 12065U;

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
    msg.setTimeStamp(0.0847298611088);
    msg.setSource(36541U);
    msg.setSourceEntity(166U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(227U);
    msg.k = 0.0166794879023;
    msg.m = 0.895172013306;
    msg.n = 0.543972740352;

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
    msg.setTimeStamp(0.600543224209);
    msg.setSource(64315U);
    msg.setSourceEntity(249U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(46U);
    msg.k = 0.111837784159;
    msg.m = 0.071647435649;
    msg.n = 0.961138334238;

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
    msg.setTimeStamp(0.396115233994);
    msg.setSource(43971U);
    msg.setSourceEntity(181U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(134U);
    msg.k = 0.306300690364;
    msg.m = 0.249929509453;
    msg.n = 0.169834627077;

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
    msg.setTimeStamp(0.128734572676);
    msg.setSource(38531U);
    msg.setSourceEntity(208U);
    msg.setDestination(33124U);
    msg.setDestinationEntity(43U);
    msg.p = 0.0755716464709;
    msg.i = 0.341947258583;
    msg.d = 0.0756208492405;
    msg.a = 0.49889852381;

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
    msg.setTimeStamp(0.953691466111);
    msg.setSource(44785U);
    msg.setSourceEntity(10U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(237U);
    msg.p = 0.239496883484;
    msg.i = 0.930918480461;
    msg.d = 0.722819563044;
    msg.a = 0.832808065444;

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
    msg.setTimeStamp(0.0687698402329);
    msg.setSource(48694U);
    msg.setSourceEntity(138U);
    msg.setDestination(41854U);
    msg.setDestinationEntity(217U);
    msg.p = 0.653479967294;
    msg.i = 0.698784535421;
    msg.d = 0.605056025989;
    msg.a = 0.954758505838;

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
    msg.setTimeStamp(0.147465391817);
    msg.setSource(24830U);
    msg.setSourceEntity(158U);
    msg.setDestination(37072U);
    msg.setDestinationEntity(40U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.893195805714);
    msg.setSource(35346U);
    msg.setSourceEntity(48U);
    msg.setDestination(46747U);
    msg.setDestinationEntity(110U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.892827208434);
    msg.setSource(24992U);
    msg.setSourceEntity(179U);
    msg.setDestination(37484U);
    msg.setDestinationEntity(71U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.598795405573);
    msg.setSource(44617U);
    msg.setSourceEntity(113U);
    msg.setDestination(60881U);
    msg.setDestinationEntity(195U);
    msg.x = 0.0736381975222;
    msg.y = 0.0298059026875;
    msg.z = 0.023589755048;
    msg.vx = 0.499407902641;
    msg.vy = 0.274810642495;
    msg.vz = 0.33536180565;
    msg.ax = 0.382210406582;
    msg.ay = 0.126689517737;
    msg.az = 0.296909304223;
    msg.flags = 27682U;

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
    msg.setTimeStamp(0.312882403912);
    msg.setSource(11080U);
    msg.setSourceEntity(66U);
    msg.setDestination(275U);
    msg.setDestinationEntity(250U);
    msg.x = 0.38438534081;
    msg.y = 0.692718897588;
    msg.z = 0.326079089681;
    msg.vx = 0.486098645109;
    msg.vy = 0.677533152371;
    msg.vz = 0.247857373667;
    msg.ax = 0.534124189714;
    msg.ay = 0.115180630683;
    msg.az = 0.525937026578;
    msg.flags = 24651U;

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
    msg.setTimeStamp(0.900625511818);
    msg.setSource(48013U);
    msg.setSourceEntity(87U);
    msg.setDestination(24096U);
    msg.setDestinationEntity(82U);
    msg.x = 0.337582578683;
    msg.y = 0.445168900966;
    msg.z = 0.537774586076;
    msg.vx = 0.379328228244;
    msg.vy = 0.779513466545;
    msg.vz = 0.578153053689;
    msg.ax = 0.258603146885;
    msg.ay = 0.121746321407;
    msg.az = 0.278790912792;
    msg.flags = 38800U;

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
    msg.setTimeStamp(0.140300328095);
    msg.setSource(12470U);
    msg.setSourceEntity(165U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(30U);
    msg.value = 0.112879708325;

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
    msg.setTimeStamp(0.393102625933);
    msg.setSource(33543U);
    msg.setSourceEntity(214U);
    msg.setDestination(52471U);
    msg.setDestinationEntity(68U);
    msg.value = 0.725914000205;

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
    msg.setTimeStamp(0.886679957894);
    msg.setSource(40998U);
    msg.setSourceEntity(111U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(70U);
    msg.value = 0.450416716352;

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
    msg.setTimeStamp(0.622453356558);
    msg.setSource(16603U);
    msg.setSourceEntity(176U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(226U);
    msg.timeout = 38928U;
    msg.lat = 0.503473414053;
    msg.lon = 0.0605425304872;
    msg.z = 0.65624744845;
    msg.z_units = 53U;
    msg.speed = 0.672004870823;
    msg.speed_units = 109U;
    msg.roll = 0.561399100914;
    msg.pitch = 0.943537981357;
    msg.yaw = 0.0398788135281;
    msg.custom.assign("ECYDJHZDVPBFTJOCJLXIJDBPODHKXFJGYWBRVKHAEKIGVABMXVEXIYWRUJBEQJGHFRLNSTKNNQGXTCIWLUHOSPLBJRQFSSPQRGHPKUMXLVMTSZQZZWRMFAEGNOQIBUKNLGDMEVZLWFUCFXYOGKSOEVPEZDOFCHPSIMPCYXIAVTKWADUFMAZQACCJJGI");

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
    msg.setTimeStamp(0.737215218439);
    msg.setSource(26849U);
    msg.setSourceEntity(72U);
    msg.setDestination(48925U);
    msg.setDestinationEntity(184U);
    msg.timeout = 30002U;
    msg.lat = 0.0955943524741;
    msg.lon = 0.828424526354;
    msg.z = 0.765858968084;
    msg.z_units = 70U;
    msg.speed = 0.321659107971;
    msg.speed_units = 41U;
    msg.roll = 0.769821381951;
    msg.pitch = 0.0304782940092;
    msg.yaw = 0.151731843243;
    msg.custom.assign("SWCJXRTARKJOVHYBJZITCLZEXKVWLFGFDRTUVTNBLFIRKFXHXCIRFUSUIHOJHACDBUEVZYYQBCGUMDDMEPAQXVZZKAFJWLOAKZVZJQXLDMTAIWEOSOSQGBGOPHUWYYGSZEDBKTQNMNFOWQAOTCQMIQPZIBTPMJNNLOXQAPYKMIZUGVLPWWS");

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
    msg.setTimeStamp(0.952340544549);
    msg.setSource(4084U);
    msg.setSourceEntity(73U);
    msg.setDestination(58095U);
    msg.setDestinationEntity(214U);
    msg.timeout = 62902U;
    msg.lat = 0.958705013018;
    msg.lon = 0.707842288131;
    msg.z = 0.351813787756;
    msg.z_units = 48U;
    msg.speed = 0.510467675291;
    msg.speed_units = 50U;
    msg.roll = 0.15304730147;
    msg.pitch = 0.987789913906;
    msg.yaw = 0.477763196257;
    msg.custom.assign("RKFEUOUVTXDRMVRRQWRMTWEGQBFNDVDSMNKPPMDVFUKABATHJDIJHRSFQPKPSDYZJTSYKAIPEJBVUIXUXDCGJGDFCLUAOMJIZCLXQZBCNEXFZXYHZALKIOIMHCMXNZHLOSDHWBRUNMOXYMKLPWAYDTWVQTMCCJNGCGZIZVFYSYWRANROVXWTQEVEWJISBWQOEPQNJRLQYSFEPOEOOQAFBBJNEIGLKSGKVKHSGZAYGALUYBLZFWT");

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
    msg.setTimeStamp(0.538051508038);
    msg.setSource(59348U);
    msg.setSourceEntity(212U);
    msg.setDestination(16315U);
    msg.setDestinationEntity(87U);
    msg.timeout = 64797U;
    msg.lat = 0.901027541125;
    msg.lon = 0.291318069837;
    msg.z = 0.0950660934977;
    msg.z_units = 45U;
    msg.speed = 0.21875337368;
    msg.speed_units = 100U;
    msg.duration = 32871U;
    msg.radius = 0.0936496394302;
    msg.flags = 106U;
    msg.custom.assign("ACXGSFNZOQTRZGBTKXDPUPVDJORYZKIQTDXWCHNVWGLBRAFWDHKNJQKIZTRPTMVFOEPKUQVLPINRXXTKVZKVAETJPYBEYQUNNLPGLHGGJYKCHZQTBOGZREWQESBJNOOASBSIEZSMXWTDVDEMMQFPUFRFPQYZHJVDMXCHYMOYWYXUDSCEJAGBO");

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
    msg.setTimeStamp(0.585016318141);
    msg.setSource(35077U);
    msg.setSourceEntity(15U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(215U);
    msg.timeout = 43185U;
    msg.lat = 0.889285287204;
    msg.lon = 0.3307674798;
    msg.z = 0.576889463861;
    msg.z_units = 48U;
    msg.speed = 0.817040430636;
    msg.speed_units = 46U;
    msg.duration = 19548U;
    msg.radius = 0.247524523273;
    msg.flags = 20U;
    msg.custom.assign("TDMTAUIHNQZJPSLYSMMSFTODRQKXBLWAJSPTZCUIYGTXBMGBM");

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
    msg.setTimeStamp(0.925492115567);
    msg.setSource(39567U);
    msg.setSourceEntity(111U);
    msg.setDestination(23325U);
    msg.setDestinationEntity(51U);
    msg.timeout = 932U;
    msg.lat = 0.43230970062;
    msg.lon = 0.655170334087;
    msg.z = 0.809139536379;
    msg.z_units = 136U;
    msg.speed = 0.442998834614;
    msg.speed_units = 108U;
    msg.duration = 32522U;
    msg.radius = 0.375790739341;
    msg.flags = 113U;
    msg.custom.assign("KLTFECUJRYDGXXIQZTXPZIZPODSZFSWZYNBLJASMQVGSVZTDIUUNVCMOARMHRPHTUBHTQAVMCJSLEHHYKCSOSGBYKBLSHTPFNWFCK");

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
    msg.setTimeStamp(0.487624622619);
    msg.setSource(37569U);
    msg.setSourceEntity(102U);
    msg.setDestination(50401U);
    msg.setDestinationEntity(236U);
    msg.custom.assign("SHPXWWYLOTGYKIRVCBWAZIHKVBNUYKZZTPYXLQCIQQCGOKEXLDFEBKYZQAVQMJUJKLRSXYXXJUPMEOVRVXVBPXCDYZFMGHMHKXZFA");

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
    msg.setTimeStamp(0.522049359571);
    msg.setSource(53285U);
    msg.setSourceEntity(59U);
    msg.setDestination(35461U);
    msg.setDestinationEntity(5U);
    msg.custom.assign("LSYAQPGZBRMEKIWVPTSUC");

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
    msg.setTimeStamp(0.401684609851);
    msg.setSource(7572U);
    msg.setSourceEntity(24U);
    msg.setDestination(5546U);
    msg.setDestinationEntity(74U);
    msg.custom.assign("OJHSGELBEWOSVJKKPXTVPOPVWHKTLZTZPROQNKCNUGXPZSNCBDCTXMLZVVCYLRWUAAXMYFFAGZYMUJOKIIAOACMQSFAWHVWEPYZCBSODZYPBJFUMSNXECLITEBMFQNMCFWHUXDEQUXBFQKGICOADGDCTYYTJXEARISNQRGAXKYAPEMSNYBVLBKTWEGHZPODKVFLHUJLOURIWW");

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
    msg.setTimeStamp(0.0923716040231);
    msg.setSource(44288U);
    msg.setSourceEntity(95U);
    msg.setDestination(61533U);
    msg.setDestinationEntity(128U);
    msg.timeout = 42739U;
    msg.lat = 0.151588711127;
    msg.lon = 0.828165500944;
    msg.z = 0.0617923403499;
    msg.z_units = 92U;
    msg.duration = 54385U;
    msg.speed = 0.325821648504;
    msg.speed_units = 235U;
    msg.type = 160U;
    msg.radius = 0.127186040373;
    msg.length = 0.246081960725;
    msg.bearing = 0.103059834207;
    msg.direction = 78U;
    msg.custom.assign("VKQZGAJSYSJSWQWABPGMRQHDKUNQOOCGYXWIKPNARNALYNFCDVSPFESQHMGIIKPJTHTABWPARQ");

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
    msg.setTimeStamp(0.604350686299);
    msg.setSource(47717U);
    msg.setSourceEntity(179U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(165U);
    msg.timeout = 39218U;
    msg.lat = 0.671748944923;
    msg.lon = 0.389277932737;
    msg.z = 0.199509702307;
    msg.z_units = 206U;
    msg.duration = 5658U;
    msg.speed = 0.0723687942754;
    msg.speed_units = 105U;
    msg.type = 58U;
    msg.radius = 0.120697556435;
    msg.length = 0.864532138505;
    msg.bearing = 0.959102918932;
    msg.direction = 233U;
    msg.custom.assign("LKWWBTHVDGQMCRBDTM");

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
    msg.setTimeStamp(0.783807203918);
    msg.setSource(9565U);
    msg.setSourceEntity(248U);
    msg.setDestination(37305U);
    msg.setDestinationEntity(230U);
    msg.timeout = 43778U;
    msg.lat = 0.881146267807;
    msg.lon = 0.223727884178;
    msg.z = 0.906034971081;
    msg.z_units = 61U;
    msg.duration = 40355U;
    msg.speed = 0.928867843933;
    msg.speed_units = 175U;
    msg.type = 22U;
    msg.radius = 0.589133090255;
    msg.length = 0.6943379937;
    msg.bearing = 0.613278858738;
    msg.direction = 194U;
    msg.custom.assign("JZMOQHVHAQXRLLGCHSY");

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
    msg.setTimeStamp(0.817382982401);
    msg.setSource(58412U);
    msg.setSourceEntity(188U);
    msg.setDestination(968U);
    msg.setDestinationEntity(174U);
    msg.duration = 15494U;
    msg.custom.assign("WFGNVILBOTXHTYGVOVLCPGCFKEZKKCODYQSBJSMWQDAUYXDCFFRPNAYKXNMBAQUSBVRGEVDZUOVBREIDCZTYCHMDETEPLKUDQYYJVNVOSZABZCPCKJXUBWEMHNKNRGHLNLWRKPGTYCXCJLJJHIHOSLFPRUMTFZIQDTSAUIWYBRONAOKJMQERNWZEXKW");

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
    msg.setTimeStamp(0.552227457239);
    msg.setSource(37690U);
    msg.setSourceEntity(176U);
    msg.setDestination(12659U);
    msg.setDestinationEntity(218U);
    msg.duration = 5996U;
    msg.custom.assign("UGZTCTXAFJHKKPVGNAYVLJTCWDWDRYKZJUZXMNDJAIRHOBIUARYPWMRJUIOYFHSWMFBDBGVNHZAUDWCEMOTYMRGSQGOAJHEFUEOXKVSYNGLYPEKNGNQVSYWEL");

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
    msg.setTimeStamp(0.508143365141);
    msg.setSource(64610U);
    msg.setSourceEntity(224U);
    msg.setDestination(46173U);
    msg.setDestinationEntity(243U);
    msg.duration = 6413U;
    msg.custom.assign("RLWAIKMLSKZCXVHISFXMNBLZMEQNCTRDEGDVACVDPGWWFESFHOJTM");

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
    msg.setTimeStamp(0.646528603386);
    msg.setSource(11110U);
    msg.setSourceEntity(238U);
    msg.setDestination(1833U);
    msg.setDestinationEntity(18U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0131687285108;
    msg.control.set(tmp_msg_0);
    msg.duration = 65329U;
    msg.custom.assign("TNBBUOHQKTPNSEONOBQSEDLWGUSAWDIMANYABPCTVWMWCVPJQBGGJZXJFUICVSKOMFQIWQVEIJXMLOJUQXGHKIPKDSESSLZVAVLKQNNSJRZYEWRRSNJFYJZUBDBKUHXTUENWHAODXUCWXIFOXQPCIRKXFDRNPFFCZZCOIPTFFSOGMEQCJDMGLYXRBEIDTK");

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
    msg.setTimeStamp(0.301155301605);
    msg.setSource(47142U);
    msg.setSourceEntity(164U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(72U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.917806734526;
    msg.control.set(tmp_msg_0);
    msg.duration = 1352U;
    msg.custom.assign("QEXKNISJJSXOFHFDJZNBAHLLWFOWZOINKHAVKHIOGABOZRTXSVTUYUW");

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
    msg.setTimeStamp(0.708288444761);
    msg.setSource(16593U);
    msg.setSourceEntity(75U);
    msg.setDestination(40264U);
    msg.setDestinationEntity(23U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.590357055112;
    msg.control.set(tmp_msg_0);
    msg.duration = 36052U;
    msg.custom.assign("TVUQPDUSNYSPYOTJGNADBLVLPKPJXLSLGOIMBISIYVCEOHIZMZLSTSJWFJSHGZRALJWJPMYFHMFWOYO");

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
    msg.setTimeStamp(0.00847506447085);
    msg.setSource(47772U);
    msg.setSourceEntity(43U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(6U);
    msg.timeout = 26950U;
    msg.lat = 0.544065819293;
    msg.lon = 0.155139224599;
    msg.z = 0.963796842053;
    msg.z_units = 99U;
    msg.speed = 0.60900497677;
    msg.speed_units = 125U;
    msg.bearing = 0.339410873042;
    msg.cross_angle = 0.135760829673;
    msg.width = 0.875229277133;
    msg.length = 0.682182793357;
    msg.hstep = 0.336732619288;
    msg.coff = 206U;
    msg.alternation = 178U;
    msg.flags = 191U;
    msg.custom.assign("DFSFLRNSMOSVJHVBZQQZIETXUBPRWJGRVMNPUYQFJIDKLRZNDCCAPSLAVBRVTJZHQLYQGZEHKJFTLOWBEDGACIPCLANOPMOTCBEHSSGWMUHPKDXCHDZFSCQUYVBBMUXOOLFAVXWNBZQAHKKGXZU");

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
    msg.setTimeStamp(0.289686067615);
    msg.setSource(41279U);
    msg.setSourceEntity(74U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(158U);
    msg.timeout = 57655U;
    msg.lat = 0.704193817044;
    msg.lon = 0.0329239064076;
    msg.z = 0.227699001749;
    msg.z_units = 0U;
    msg.speed = 0.0988805713205;
    msg.speed_units = 250U;
    msg.bearing = 0.0470954492127;
    msg.cross_angle = 0.933414640972;
    msg.width = 0.731766856667;
    msg.length = 0.366183713825;
    msg.hstep = 0.339638218992;
    msg.coff = 197U;
    msg.alternation = 155U;
    msg.flags = 120U;
    msg.custom.assign("RUCCWTYCIKDQXPXHJGLXLMVQUPAMOLSWTVIHJFLLMJPSXYBIWDGZQTRGNEHKWPSDPVFEDLSABAXVVGTMNANAQSVSDZYCDPUZQ");

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
    msg.setTimeStamp(0.974685044755);
    msg.setSource(12144U);
    msg.setSourceEntity(143U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(79U);
    msg.timeout = 33643U;
    msg.lat = 0.528867022463;
    msg.lon = 0.406724902091;
    msg.z = 0.403069228886;
    msg.z_units = 223U;
    msg.speed = 0.524136062917;
    msg.speed_units = 10U;
    msg.bearing = 0.615514442709;
    msg.cross_angle = 0.878163244164;
    msg.width = 0.801495580649;
    msg.length = 0.710515499578;
    msg.hstep = 0.783720259684;
    msg.coff = 13U;
    msg.alternation = 233U;
    msg.flags = 94U;
    msg.custom.assign("BUIWIUFSWUOBTSWNNVDQVISEONKRYFMAMOBGDFSMLHYTXDHKIJCMITSQRPYWPZYDTLBNTWJEGJKAULNUBYAT");

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
    msg.setTimeStamp(0.479551356474);
    msg.setSource(21084U);
    msg.setSourceEntity(37U);
    msg.setDestination(16689U);
    msg.setDestinationEntity(16U);
    msg.timeout = 57523U;
    msg.lat = 0.395385817463;
    msg.lon = 0.772202414423;
    msg.z = 0.941530967259;
    msg.z_units = 198U;
    msg.speed = 0.314623262836;
    msg.speed_units = 81U;
    msg.custom.assign("ZJJXZEKHHKIIPBQMLSBTVTPWHUYJXNKRYAOGGMTMZBENJNQKBDAIUGHJALVRPYFMTVMOHWECGYVRDZIPOIQHXGFSEULAXXWGTJSB");

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
    msg.setTimeStamp(0.894634788103);
    msg.setSource(52278U);
    msg.setSourceEntity(189U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(120U);
    msg.timeout = 62347U;
    msg.lat = 0.405008848469;
    msg.lon = 0.945402031345;
    msg.z = 0.661896860284;
    msg.z_units = 48U;
    msg.speed = 0.093510935143;
    msg.speed_units = 252U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.531563075354;
    tmp_msg_0.y = 0.275429414047;
    tmp_msg_0.z = 0.235814603343;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CBROVKVYXQBWBEOIAJNOAYYLYCEEUHZNRSXLJNBZQCDIHBBWSPIOHUWPQHFDAVRKYWHSLHQPMTPEJITVYWUGVDAPCWPCXJKRUTQEKVZFZSJDTGITGUIH");

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
    msg.setTimeStamp(0.535160498763);
    msg.setSource(61438U);
    msg.setSourceEntity(38U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(250U);
    msg.timeout = 51924U;
    msg.lat = 0.446624070168;
    msg.lon = 0.987177719981;
    msg.z = 0.119928793147;
    msg.z_units = 158U;
    msg.speed = 0.347757039978;
    msg.speed_units = 21U;
    msg.custom.assign("TGKWJIXRFCNBUQZATAPGFGAWGPYDRZHQQZTGVHPAILXCHQHBPERFOQBTXMXXIDCVHGLSBIBPZLULJHNTEYWLSZJVXVPIYMKOEEERTWOEMQHUREDSKWAUJOYBRVLNLDQLWKVTCOSOFACXYNZOYXKDYCJMYPGEBQSFOLDBPILBGDMIRNTCTNGDSCKYWCMAVEDIASWRYVUUTCZXUZAIJQUSMDPGMHQFUXJPNJ");

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
    msg.setTimeStamp(0.0839955024234);
    msg.setSource(54368U);
    msg.setSourceEntity(120U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(100U);
    msg.x = 0.485819191986;
    msg.y = 0.456827949395;
    msg.z = 0.648301168175;

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
    msg.setTimeStamp(0.316435755014);
    msg.setSource(43843U);
    msg.setSourceEntity(142U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(197U);
    msg.x = 0.476239046872;
    msg.y = 0.178662757824;
    msg.z = 0.283834734615;

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
    msg.setTimeStamp(0.0275138287493);
    msg.setSource(33955U);
    msg.setSourceEntity(154U);
    msg.setDestination(13794U);
    msg.setDestinationEntity(134U);
    msg.x = 0.79881552379;
    msg.y = 0.138225180255;
    msg.z = 0.714753426049;

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
    msg.setTimeStamp(0.984046359355);
    msg.setSource(347U);
    msg.setSourceEntity(120U);
    msg.setDestination(28415U);
    msg.setDestinationEntity(86U);
    msg.timeout = 38400U;
    msg.lat = 0.713849353557;
    msg.lon = 0.44681800552;
    msg.z = 0.934577541448;
    msg.z_units = 83U;
    msg.amplitude = 0.737577577087;
    msg.pitch = 0.192243992971;
    msg.speed = 0.300281614265;
    msg.speed_units = 184U;
    msg.custom.assign("NZPHWTCVRHAEQATUFCCEXIMPMNVYAAYNXPDSUIUNMJVQABKBKCBSWWGNUJUBUYWMAWOEAQQTGGTIYPUXQROQGKZXAKSSUVHSJPCIFDRFKNJYBOKRI");

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
    msg.setTimeStamp(0.386356623124);
    msg.setSource(61848U);
    msg.setSourceEntity(168U);
    msg.setDestination(64144U);
    msg.setDestinationEntity(26U);
    msg.timeout = 17455U;
    msg.lat = 0.606074759208;
    msg.lon = 0.170788525761;
    msg.z = 0.363072811292;
    msg.z_units = 123U;
    msg.amplitude = 0.898254907996;
    msg.pitch = 0.269398951418;
    msg.speed = 0.739990864289;
    msg.speed_units = 189U;
    msg.custom.assign("TVOCLJKLAGUWGKJRDBBYGOMWFCKVHGDQPQBWKTSVBAGAICOPJHHZHOSWLPVBFHHGZSWUYKLTMXTZUXSUVQVEMLEIQRYNIIQRNEFSMHIMPUVVWEACSUCEJYPFLMGOJBLPTQPVLDUNPXLBDRFXXYRDTNSRSRZBEAQYHPWJNKCAOFFIKIWOBOCAGDNJFZUYUJTS");

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
    msg.setTimeStamp(0.469404916636);
    msg.setSource(34845U);
    msg.setSourceEntity(215U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(249U);
    msg.timeout = 26724U;
    msg.lat = 0.992172396938;
    msg.lon = 0.00458064197791;
    msg.z = 0.439422706859;
    msg.z_units = 202U;
    msg.amplitude = 0.132814747813;
    msg.pitch = 0.18891072677;
    msg.speed = 0.673263594326;
    msg.speed_units = 227U;
    msg.custom.assign("ABJFLKEWGSDJOBATSYUJLNVHUFZUCNSHJSCOGEJLIZDQHVWYOETKWGUABIKVASFOYMCIAIMCEZTHTM");

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
    msg.setTimeStamp(0.0313919734052);
    msg.setSource(3069U);
    msg.setSourceEntity(226U);
    msg.setDestination(25697U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.625579094682);
    msg.setSource(57612U);
    msg.setSourceEntity(58U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.0428773398141);
    msg.setSource(51928U);
    msg.setSourceEntity(93U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.208362845775);
    msg.setSource(53915U);
    msg.setSourceEntity(141U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.224205951423;
    msg.lon = 0.799396264377;
    msg.z = 0.584098347151;
    msg.z_units = 98U;
    msg.radius = 0.320567297856;
    msg.duration = 53472U;
    msg.speed = 0.21992048778;
    msg.speed_units = 93U;
    msg.custom.assign("XSXCTHGDMNHHZEXWBVCMJYRLKARHEWYAWUAVATNKIMCXFSTHBIQRBVFSEDYVEGXSOGAHRPKTBJIQMDDTPEOIZDPLNBYHCYLLFIWLWYEZBKYJNHOJISTGUFUVOTKIPYVFKRIJDQRXGSXCKZFOGQWDCVLBBKAGJFSZGMBCMRKYELJCOTAJMUPDZCNOVOLNIUHANAUFMGNJCIGESSPASFXXWUWJQPTDR");

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
    msg.setTimeStamp(0.120559065998);
    msg.setSource(59076U);
    msg.setSourceEntity(14U);
    msg.setDestination(53694U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.481549147005;
    msg.lon = 0.221673736049;
    msg.z = 0.342983352698;
    msg.z_units = 118U;
    msg.radius = 0.624328799114;
    msg.duration = 19510U;
    msg.speed = 0.041328423426;
    msg.speed_units = 186U;
    msg.custom.assign("ZCTLATNXWGHERGIPERDYJACSXAMRVRYLLDZOVPUCSGUGUECIZBLFDOTWONTYPUSVPNRYEQDTGJFCZCFBQMXRLAWKJXRIPXNISOWHHKYYZBWGIJVVLYUPSKXBJAHJEBGMYDEKPBZKIFUDDFZKOSHDTCMYMDRUONQQFBNTEELUKFAIEDMKALFGNCCBOVNJWVTCZWXOYQUKPPNWGHONTATMXKIZQASQAHUJSFMS");

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
    msg.setTimeStamp(0.831666946966);
    msg.setSource(64590U);
    msg.setSourceEntity(5U);
    msg.setDestination(4246U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.16302902262;
    msg.lon = 0.110719987729;
    msg.z = 0.401722166786;
    msg.z_units = 198U;
    msg.radius = 0.371367001451;
    msg.duration = 19562U;
    msg.speed = 0.932946798028;
    msg.speed_units = 13U;
    msg.custom.assign("BLMTUSQBUHYXCSJCZREFZVPPOCGTSEKMZKMVGIVZOHDWLNQZUCSKVNAPFAAUFIYNAKHXDGKGUHQUILENBOBHYWHCGWBQWQTVFWEBOTSJIDDPGTJEHPGMZPYSAEAWRKOBRTMLJEFIBRCNYJJSWAHNKIJYJDRNSLGYOYHBRVDINZXDFXMLDXKQ");

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
    msg.setTimeStamp(0.314936558354);
    msg.setSource(59110U);
    msg.setSourceEntity(175U);
    msg.setDestination(4691U);
    msg.setDestinationEntity(244U);
    msg.timeout = 3071U;
    msg.flags = 1U;
    msg.lat = 0.553875786018;
    msg.lon = 0.300799812525;
    msg.start_z = 0.77203541256;
    msg.start_z_units = 34U;
    msg.end_z = 0.62256655093;
    msg.end_z_units = 14U;
    msg.radius = 0.313904957298;
    msg.speed = 0.441426226991;
    msg.speed_units = 169U;
    msg.custom.assign("MBUVPMSPUNRVJYWVESFYFDDLOANGZQPAAOTRQCZTEDFDVSGEXUHXSCQXYGOIDFDGBKSVNPPWTTKVEUJCXUCRDHYRQJLWKTWMDCSKGPLZNCMIEQEYLBOQQAMTROYLJ");

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
    msg.setTimeStamp(0.819292181661);
    msg.setSource(39434U);
    msg.setSourceEntity(212U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(86U);
    msg.timeout = 57275U;
    msg.flags = 243U;
    msg.lat = 0.998454475929;
    msg.lon = 0.485472163931;
    msg.start_z = 0.810969052349;
    msg.start_z_units = 7U;
    msg.end_z = 0.968080281025;
    msg.end_z_units = 53U;
    msg.radius = 0.529021379343;
    msg.speed = 0.427664870754;
    msg.speed_units = 141U;
    msg.custom.assign("DNFAGSLDTKWFLIUZSTAPWWABTCRUMRWWINUKYLJUPTZQLZMBABXZJYSYMIIHOHTIGJKVPYPFKSMQTLKIQD");

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
    msg.setTimeStamp(0.135252304009);
    msg.setSource(45702U);
    msg.setSourceEntity(5U);
    msg.setDestination(595U);
    msg.setDestinationEntity(114U);
    msg.timeout = 18714U;
    msg.flags = 3U;
    msg.lat = 0.983832825215;
    msg.lon = 0.10388972767;
    msg.start_z = 0.903289195375;
    msg.start_z_units = 188U;
    msg.end_z = 0.797274637875;
    msg.end_z_units = 157U;
    msg.radius = 0.309443646254;
    msg.speed = 0.967385739779;
    msg.speed_units = 51U;
    msg.custom.assign("CWZGUKLMYUCOEXREKDMOOHDNTWIZPHSWLBRDMQWYTKXEMUWFQUSUYHMBITZOHUMBIHWQUXIAARMLPTJRJEVACLGSYPDAJQNAPAQFBEOGYPKVXCKGDDPQXYFOZRJCGOZAQBIGRXEFYPCVLKNBZLWFNVRHNONVTTIKRGVCRHXFCPU");

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
    msg.setTimeStamp(0.870055887142);
    msg.setSource(51231U);
    msg.setSourceEntity(216U);
    msg.setDestination(39871U);
    msg.setDestinationEntity(6U);
    msg.timeout = 36232U;
    msg.lat = 0.537898853544;
    msg.lon = 0.120018577169;
    msg.z = 0.174124783672;
    msg.z_units = 140U;
    msg.speed = 0.101190027404;
    msg.speed_units = 140U;
    msg.custom.assign("LZHCQVYMHAHLBDDBYZORFNSJWYMUMHEKHLIXMSPMKWYVICLQIJTORWBYUWWYSJDIIDPZVPXVEAFELWXQPXCLJGPDVVXRNTJKE");

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
    msg.setTimeStamp(0.991220184753);
    msg.setSource(16525U);
    msg.setSourceEntity(103U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(77U);
    msg.timeout = 15000U;
    msg.lat = 0.584773810598;
    msg.lon = 0.554050164879;
    msg.z = 0.0490242697511;
    msg.z_units = 188U;
    msg.speed = 0.62099194924;
    msg.speed_units = 140U;
    msg.custom.assign("YFVBUQDUJOLLSWRTCROFGTTSLWLI");

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
    msg.setTimeStamp(0.393844986726);
    msg.setSource(4733U);
    msg.setSourceEntity(75U);
    msg.setDestination(28668U);
    msg.setDestinationEntity(40U);
    msg.timeout = 60800U;
    msg.lat = 0.0193290944809;
    msg.lon = 0.499286596354;
    msg.z = 0.302230881325;
    msg.z_units = 194U;
    msg.speed = 0.660804194549;
    msg.speed_units = 185U;
    msg.custom.assign("AOKUXPTOTMMPGPYIEMRVJLFGEGOUKININBRZZNOFJOXAKEFOGRHCIMWGJSUBNVFZHMRZSVYSSSAQESHIUDVJWPCPLRBZHAWTILYVDHRECGXUYVIUTLHCXYBHAEFDUFTWHN");

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
    msg.setTimeStamp(0.0553244821958);
    msg.setSource(37943U);
    msg.setSourceEntity(98U);
    msg.setDestination(54020U);
    msg.setDestinationEntity(175U);
    msg.x = 0.187711931361;
    msg.y = 0.651194927314;
    msg.z = 0.876919126878;
    msg.t = 0.647110564848;

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
    msg.setTimeStamp(0.0171469582225);
    msg.setSource(23546U);
    msg.setSourceEntity(162U);
    msg.setDestination(13561U);
    msg.setDestinationEntity(9U);
    msg.x = 0.204382335681;
    msg.y = 0.936984663503;
    msg.z = 0.291207381844;
    msg.t = 0.621173808675;

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
    msg.setTimeStamp(0.855256657474);
    msg.setSource(11066U);
    msg.setSourceEntity(13U);
    msg.setDestination(34171U);
    msg.setDestinationEntity(73U);
    msg.x = 0.332104919196;
    msg.y = 0.753604181109;
    msg.z = 0.113064967938;
    msg.t = 0.730566191214;

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
    msg.setTimeStamp(0.123108064022);
    msg.setSource(53227U);
    msg.setSourceEntity(71U);
    msg.setDestination(5989U);
    msg.setDestinationEntity(16U);
    msg.timeout = 51874U;
    msg.name.assign("HLQRCJGNHRYDKGSOZUUPEZDUGJDMFFKKARAFVMYSSJJQAAJJMLTPLIZHJGSUXAIKYQFQZKCWTLRUDCHNQEIHORPPDOWCBVNGZWOGYIVRWDWNJOTOKQNWCTVBGHTMPCE");
    msg.custom.assign("CAAIUDUSFAOADUKQZLTHWQMUMEMHIBWOBTLTRERPXHQQMXOJPNCZJXTGGXKYVFDYKIXBWYQEKSYXPMHRONFUTYPNXPIUGMHNMAESKKQMTFAARHSYTFGFZTDOPHRNLEZVWSINHFBVMCBJYCOQ");

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
    msg.setTimeStamp(0.903298053551);
    msg.setSource(51034U);
    msg.setSourceEntity(163U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(146U);
    msg.timeout = 14777U;
    msg.name.assign("RKNUYFIKEAUQLRVGVVGQLVNWJILJEFRCUQXHOSYDDJBMMHQDLTZSYPAGBKERWGFWUZHFXEOUOAHJABJRHJETVFMBDEXNTZYYCZBWZXMQENQBFPLERYZOSDLWDLAQRTCPPAAHGTXLTCFITPXBWIGTJUYZMIBNR");
    msg.custom.assign("LOKRDPHGEKMGYFMOPDFAWUDZMLKZOXEQYJGJBZWTVLRBPZAVZPWQMEIBYRXKSRETBRCAIGQCYFFNYUEUVXHETQMCCNHDIGVMGMSSYWANWLNDKJSRSNKOHQHMQPRPOERGNIFCIEKXFVIUOTJBACAKLLGLSXFHE");

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
    msg.setTimeStamp(0.625887508185);
    msg.setSource(18477U);
    msg.setSourceEntity(177U);
    msg.setDestination(9530U);
    msg.setDestinationEntity(104U);
    msg.timeout = 37482U;
    msg.name.assign("QWBUJCSOTRBYMADYCICSBRWXOHILTDX");
    msg.custom.assign("JPUDJVTLHETOPILKMEPXSSNMWETVNLNUJDAKIFWPTIPFZPVRHHZXCHJRUVKUJSICAGRMLWAVQVSVAZEYLIVDUAMNNBWOQDBW");

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
    msg.setTimeStamp(0.788920649402);
    msg.setSource(12577U);
    msg.setSourceEntity(155U);
    msg.setDestination(13493U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.863400089266;
    msg.lon = 0.671387917672;
    msg.z = 0.525247147498;
    msg.z_units = 54U;
    msg.speed = 0.679705976568;
    msg.speed_units = 90U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.117029498926;
    tmp_msg_0.y = 0.270788831296;
    tmp_msg_0.z = 0.979098280013;
    tmp_msg_0.t = 0.622455119969;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.56153690677;
    msg.custom.assign("AOXUHPXNKIRFFHSYTWBOQSALQ");

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
    msg.setTimeStamp(0.875211523987);
    msg.setSource(52356U);
    msg.setSourceEntity(33U);
    msg.setDestination(63557U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.877479472647;
    msg.lon = 0.601899219936;
    msg.z = 0.756442633217;
    msg.z_units = 124U;
    msg.speed = 0.778760609487;
    msg.speed_units = 229U;
    msg.start_time = 0.531217731037;
    msg.custom.assign("SBVECGGDMHLCPPEHPOJDCVVFITWIZLJSTTMKAYIYMHSHJTHMGQMMNUZRHPGRXBVTSRNPWOPWKSKQNDIOPBCWXNWFNOULGNWZNYAAYHHXZCQOKBTBHLUZIMCLARXTQBXQEFJBDRICEPRLAMUVQJIYCDCETFCLYAQYVKHWGOIWZREMZOSVEYLREMEDGDSQGWFKGBKFOABIXJWKQP");

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
    msg.setTimeStamp(0.206618859853);
    msg.setSource(49779U);
    msg.setSourceEntity(36U);
    msg.setDestination(28435U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.467931892748;
    msg.lon = 0.814358399243;
    msg.z = 0.855422552892;
    msg.z_units = 173U;
    msg.speed = 0.933916295977;
    msg.speed_units = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51448U;
    tmp_msg_0.off_x = 0.19955067598;
    tmp_msg_0.off_y = 0.806215689379;
    tmp_msg_0.off_z = 0.987460151124;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.92048210077;
    msg.custom.assign("XWHLBNFSOPTNVQUEMJVGMWRDQJRNPTLEHPBMZLCUX");

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
    msg.setTimeStamp(0.101460262298);
    msg.setSource(57424U);
    msg.setSourceEntity(154U);
    msg.setDestination(52068U);
    msg.setDestinationEntity(136U);
    msg.vid = 34631U;
    msg.off_x = 0.246103251739;
    msg.off_y = 0.420054432351;
    msg.off_z = 0.404325196673;

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
    msg.setTimeStamp(0.461494845934);
    msg.setSource(25399U);
    msg.setSourceEntity(239U);
    msg.setDestination(58010U);
    msg.setDestinationEntity(156U);
    msg.vid = 63707U;
    msg.off_x = 0.170979378495;
    msg.off_y = 0.944555923296;
    msg.off_z = 0.156472378655;

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
    msg.setTimeStamp(0.207429225065);
    msg.setSource(8063U);
    msg.setSourceEntity(91U);
    msg.setDestination(59137U);
    msg.setDestinationEntity(51U);
    msg.vid = 54628U;
    msg.off_x = 0.206962932317;
    msg.off_y = 0.70311094169;
    msg.off_z = 0.569720428764;

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
    msg.setTimeStamp(0.677833271345);
    msg.setSource(32097U);
    msg.setSourceEntity(24U);
    msg.setDestination(26800U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.925690145892);
    msg.setSource(22521U);
    msg.setSourceEntity(139U);
    msg.setDestination(22446U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.418713818562);
    msg.setSource(53134U);
    msg.setSourceEntity(87U);
    msg.setDestination(57820U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0818188578586);
    msg.setSource(29207U);
    msg.setSourceEntity(89U);
    msg.setDestination(63198U);
    msg.setDestinationEntity(20U);
    msg.mid = 24564U;

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
    msg.setTimeStamp(0.857921624181);
    msg.setSource(15519U);
    msg.setSourceEntity(102U);
    msg.setDestination(31414U);
    msg.setDestinationEntity(146U);
    msg.mid = 53511U;

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
    msg.setTimeStamp(0.381193513619);
    msg.setSource(60764U);
    msg.setSourceEntity(218U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(179U);
    msg.mid = 42781U;

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
    msg.setTimeStamp(0.111448814509);
    msg.setSource(58938U);
    msg.setSourceEntity(177U);
    msg.setDestination(53405U);
    msg.setDestinationEntity(1U);
    msg.state = 203U;
    msg.eta = 9245U;
    msg.info.assign("XUYUDWHIGWIHDOXQNCVAVLQTNVIBZOTQVOWKMNDTQHWIODFJCWBTEVRXYTLHTCNEHFQIGBQKCPSCMAAALSSRHBDXZPFFJRGCNMPYRLSBNSZINZJWYTIOQLJYYUBJMPFUDDZSYEOAIEHWVWKMSQUWCNCZATEHQBP");

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
    msg.setTimeStamp(0.905329997735);
    msg.setSource(30401U);
    msg.setSourceEntity(247U);
    msg.setDestination(33994U);
    msg.setDestinationEntity(132U);
    msg.state = 109U;
    msg.eta = 27587U;
    msg.info.assign("JHAGETUSSNJRKBJDQWOTMSGIHAYVXYCVBBHKYMUUMLTCJXDXAOJPRZXPNNQZXWAOECMWQRBFSRROXVDVPDCGTDFR");

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
    msg.setTimeStamp(0.240112426063);
    msg.setSource(55556U);
    msg.setSourceEntity(94U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(67U);
    msg.state = 2U;
    msg.eta = 59212U;
    msg.info.assign("PIOQBJWTJYYACFNIVRYIOHEITNIUYXJVIFCNTVOLJCXPIKKDRETCPGQUUNWMBBZLGRRNVXSHIBLLKRKSHQQQSSDWJANWFGASMFVHTMPZXJKMSRGZOWHLPKUYQGGPBMGADFHUEAWTWXCABDWMWAPTENGCEZMZSDYMHCCAAOFSQLTJCUXGKOELUKDQYJXZVJSMEZFTOVXDFBUNVWDJNELXGMQQIXPYPKOLEZRVRPBUDZBOFRL");

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
    msg.setTimeStamp(0.57919317217);
    msg.setSource(46966U);
    msg.setSourceEntity(198U);
    msg.setDestination(10121U);
    msg.setDestinationEntity(124U);
    msg.system = 53522U;
    msg.duration = 18926U;
    msg.speed = 0.647928840008;
    msg.speed_units = 129U;
    msg.x = 0.652679230268;
    msg.y = 0.218722263295;
    msg.z = 0.623822859644;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.482695306723);
    msg.setSource(35509U);
    msg.setSourceEntity(25U);
    msg.setDestination(30470U);
    msg.setDestinationEntity(14U);
    msg.system = 29187U;
    msg.duration = 27841U;
    msg.speed = 0.19760920745;
    msg.speed_units = 204U;
    msg.x = 0.0391046812142;
    msg.y = 0.405438955405;
    msg.z = 0.199506178573;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.0248741629213);
    msg.setSource(11201U);
    msg.setSourceEntity(165U);
    msg.setDestination(22179U);
    msg.setDestinationEntity(164U);
    msg.system = 16798U;
    msg.duration = 43725U;
    msg.speed = 0.365895968304;
    msg.speed_units = 140U;
    msg.x = 0.436589852942;
    msg.y = 0.250560354111;
    msg.z = 0.66742489581;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.390782415534);
    msg.setSource(35250U);
    msg.setSourceEntity(153U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.642427055913;
    msg.lon = 0.407566456832;
    msg.speed = 0.0481099830999;
    msg.speed_units = 250U;
    msg.duration = 28507U;
    msg.sys_a = 34642U;
    msg.sys_b = 54415U;
    msg.move_threshold = 0.541760816077;

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
    msg.setTimeStamp(0.395608804788);
    msg.setSource(22057U);
    msg.setSourceEntity(208U);
    msg.setDestination(42741U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.312154548956;
    msg.lon = 0.920654309122;
    msg.speed = 0.867267832457;
    msg.speed_units = 96U;
    msg.duration = 8452U;
    msg.sys_a = 4575U;
    msg.sys_b = 14208U;
    msg.move_threshold = 0.040736439486;

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
    msg.setTimeStamp(0.447194676945);
    msg.setSource(35451U);
    msg.setSourceEntity(178U);
    msg.setDestination(58380U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.496027953512;
    msg.lon = 0.942904960776;
    msg.speed = 0.0376977114632;
    msg.speed_units = 124U;
    msg.duration = 2035U;
    msg.sys_a = 43583U;
    msg.sys_b = 10447U;
    msg.move_threshold = 0.291702049682;

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
    msg.setTimeStamp(0.190535952657);
    msg.setSource(11213U);
    msg.setSourceEntity(165U);
    msg.setDestination(26091U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.644748639359;
    msg.lon = 0.472574223176;
    msg.z = 0.145747343672;
    msg.z_units = 17U;
    msg.speed = 0.714615676416;
    msg.speed_units = 7U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.112404014014;
    tmp_msg_0.lon = 0.78358084566;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GNRRTRTHFDMGOESYBWHQQPJLBEEHWKDZNLTUFYISKXFQZOSYKMEVVRGIPFYOCOVWXHHMZAUJ");

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
    msg.setTimeStamp(0.539288900802);
    msg.setSource(42965U);
    msg.setSourceEntity(195U);
    msg.setDestination(55879U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.699425181951;
    msg.lon = 0.346682716041;
    msg.z = 0.661949112945;
    msg.z_units = 178U;
    msg.speed = 0.507184479258;
    msg.speed_units = 212U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.285633823607;
    tmp_msg_0.lon = 0.803109731836;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OEVCUCYOEJFW");

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
    msg.setTimeStamp(0.0870173689946);
    msg.setSource(47541U);
    msg.setSourceEntity(192U);
    msg.setDestination(59432U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.796912780603;
    msg.lon = 0.12058299728;
    msg.z = 0.421720067091;
    msg.z_units = 95U;
    msg.speed = 0.33123298515;
    msg.speed_units = 173U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.274583225911;
    tmp_msg_0.lon = 0.333305253545;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DAJVLHXNZQEGXQBIUQKENJTUNCWDBPSSGYZSEVYJZXFSWUARUJVWRKAMMMHZTIEWWVSCRCDLODIRGTFCKGPQKATQUUNZGWCDOMBRBGIWIQLTKYNHIOXHSJXZAWOYILBUGHBFXOWKKVJDTSFQJLIPVSEKYMNTCJ");

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
    msg.setTimeStamp(0.272568743322);
    msg.setSource(63354U);
    msg.setSourceEntity(178U);
    msg.setDestination(4949U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.640713639996;
    msg.lon = 0.171225313881;

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
    msg.setTimeStamp(0.0722246270694);
    msg.setSource(16468U);
    msg.setSourceEntity(85U);
    msg.setDestination(52028U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.391084341477;
    msg.lon = 0.029706767761;

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
    msg.setTimeStamp(0.521165031894);
    msg.setSource(11457U);
    msg.setSourceEntity(237U);
    msg.setDestination(27374U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.0561792476158;
    msg.lon = 0.126992239119;

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
    msg.setTimeStamp(0.484893412781);
    msg.setSource(17514U);
    msg.setSourceEntity(138U);
    msg.setDestination(12699U);
    msg.setDestinationEntity(146U);
    msg.timeout = 4426U;
    msg.lat = 0.286260729727;
    msg.lon = 0.101704297321;
    msg.z = 0.593373549393;
    msg.z_units = 70U;
    msg.pitch = 0.463036589106;
    msg.amplitude = 0.574245438159;
    msg.duration = 58451U;
    msg.speed = 0.602112495846;
    msg.speed_units = 202U;
    msg.radius = 0.810846809747;
    msg.direction = 155U;
    msg.custom.assign("VZBNMANGYNLRIKMCAVXFPTVUSSXQWZEJLWZHBWUKRJSEQOOVJILUMIIXCUVCNCICLPHFBSLDDBJDZMSAIKCZFEGUVSTFAPOQSUHABJAOGYEWUVJRRQQRYLEEFRHTUFJAIZKSOJOWCPFNTUKLQ");

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
    msg.setTimeStamp(0.0811742747757);
    msg.setSource(42439U);
    msg.setSourceEntity(27U);
    msg.setDestination(56478U);
    msg.setDestinationEntity(132U);
    msg.timeout = 24037U;
    msg.lat = 0.0612696193972;
    msg.lon = 0.856338326592;
    msg.z = 0.243715560441;
    msg.z_units = 37U;
    msg.pitch = 0.860319505723;
    msg.amplitude = 0.468493451034;
    msg.duration = 41245U;
    msg.speed = 0.914288455265;
    msg.speed_units = 64U;
    msg.radius = 0.0637969875004;
    msg.direction = 51U;
    msg.custom.assign("ALEQYVKPNIRFBYBOJZAECOUJBZSFKEUYSDNWZIUJCMDXICTPMLIZTLHINKGMQNVLUOOIQTORPJQUJVMSEQAMGQJKEZTIMHYFTOFGDMMYXUFO");

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
    msg.setTimeStamp(0.110207993113);
    msg.setSource(5852U);
    msg.setSourceEntity(119U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(180U);
    msg.timeout = 10772U;
    msg.lat = 0.660403890636;
    msg.lon = 0.10859064321;
    msg.z = 0.472839061938;
    msg.z_units = 173U;
    msg.pitch = 0.42915546565;
    msg.amplitude = 0.261631538586;
    msg.duration = 51207U;
    msg.speed = 0.987779919762;
    msg.speed_units = 52U;
    msg.radius = 0.331591958391;
    msg.direction = 123U;
    msg.custom.assign("TMTDLKLSXOFIUJUQBJWVTAGRKIEYGQKDRJPQUSCFGPBEPRYQENUKOAMTIMATLOKUEFSOYVP");

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
    msg.setTimeStamp(0.839847032135);
    msg.setSource(22219U);
    msg.setSourceEntity(62U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(93U);
    msg.formation_name.assign("RBPIRJMVVKEYODNUHGFHNXOWZTNDUKCFUYJXARCPJTLYNIQGHWJTSNQJELLRMAQAOXDDOZEVFZVEFAEYIQXQFQPKCJBFRRPHXGVBWRLSYKPAFERWWDXVNMJQZFDENVKTMYSVXMMGKACDJARGQSTZUTOZNHUGYSLI");
    msg.reference_frame = 151U;
    msg.custom.assign("TMEEHODUJSJICQAVXEKVHCONLTQYAEXSTHCGWIZVURZGAKNCUILMNHXHTIOYQYZSPBKJPNNTANMVACJNBWFUCKVTMISPHFBZZVMHXQQYOWCJKBSDAFJVXTCOBRTDRGERDQQMBKSXDAFBJURYZLPEAGWWRVQWWLZMKUZOYPRPGTBFOAIUELRSHPNWEIHSUKOCWGEYLN");

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
    msg.setTimeStamp(0.0731436994913);
    msg.setSource(23973U);
    msg.setSourceEntity(129U);
    msg.setDestination(27097U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("BTVFZZSYCWLABRFOCCNQEKDXUQKOPUOLHRLEJTEWDOZWJLVHBRIKWVYOATNCVZNGPYE");
    msg.reference_frame = 94U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36958U;
    tmp_msg_0.off_x = 0.934201652826;
    tmp_msg_0.off_y = 0.577411864137;
    tmp_msg_0.off_z = 0.248733950012;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NVYLWPRGGLOZGJZPMWJVHNUGTQYXBCOZNVCBVXJLHWAEOXJMQRRJPWIZPREWOPRGFIKSIKDNDXGWMASSIEKMFQEPKEIGTLECTJQQYZAOUDHKHMVANVBZPXMUWAIAGYEYCYL");

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
    msg.setTimeStamp(0.107983637328);
    msg.setSource(29959U);
    msg.setSourceEntity(129U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("ZHNZRYIYJHXXJWOULKYSQDTAPZEECJKXVZBTNHKIGQGWUJGUXCVPIYATNYGAOQSZPIOLWLRIJJNRKTDQVGMUIPDIXEQWDFHVOVPNFZBVSEKLXYPHZRFTUFBDFRPMQSJCMBQRKDMLTEAOECXNLQTCWCERDOFWPYFF");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52526U;
    tmp_msg_0.off_x = 0.588309561172;
    tmp_msg_0.off_y = 0.821242112735;
    tmp_msg_0.off_z = 0.727253109499;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CFFCSEMIEKMKSNGHIEERVUYROMOXSEHJSGQIZJMRVTAHNIOPHGEBJPMRYMTFDTFJGAXADWFUWLXOTERCGKZWEXMPBGCSIUJZMBY");

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
    msg.setTimeStamp(0.211158273867);
    msg.setSource(32010U);
    msg.setSourceEntity(180U);
    msg.setDestination(27746U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("KPKDFMIZPREIRQDMGZBFEOWDHPRFUHWKVYOLMJPZAOIVALYBOVNXWWOGHQTVECYMTJBOBRJUCCUUOKLLBDJSJHSUPIYOHVQUHIWNMXETXDTCVUBQTHYTJZDPFFSIYITQUNDEGSBKGDBXGGNJEJNWNALMMYFAQXXHATS");
    msg.formation_name.assign("DSQRLJWWVYVOWJDFCHATFCEQZMSCNXPXAPTZFBNDIWSDLQLRJKBIDTYTYCUUNMPFKPQRHEFWZPTAMNCGJNPIZDJNCFVOAFHTPABCXZMYAONBMGSEBQMREKPMBUDEUGHFGPRUWYCMDVVMGKSYLVXOHXVASWKKKKXFCJZN");
    msg.plan_id.assign("QKAUWBEENIKBOOQBXPTBDAQIMJYMJIXYJSUKIACVRPCZQBICUJUTSTOVSGCGCJUPKTYLAVEWRVLGUFZNDTUMVTWQGIBHOHPXPHXUZHZOPVG");
    msg.description.assign("HLFJPWBWVKWJMEIUACSZNWAVNXGDIQNGIGMUPQKFOXSXSCBEAJHZLDYODCNXKYFUGMAUKHQKOMLMMNSWXORZSZGNIPEJYFBNHKBIBMWRCDQDZTPYAGFHXSEJTFETBSCKQJGRUGDZVCFQAFIKUGHVR");
    msg.leader_speed = 0.252839209465;
    msg.leader_bank_lim = 0.405517309242;
    msg.pos_sim_err_lim = 0.434946984701;
    msg.pos_sim_err_wrn = 0.921987136766;
    msg.pos_sim_err_timeout = 38788U;
    msg.converg_max = 0.263000228283;
    msg.converg_timeout = 30531U;
    msg.comms_timeout = 21488U;
    msg.turb_lim = 0.880113728909;
    msg.custom.assign("WUIXVOZAQRDEPGHRPAXJBFSDPEWPYJURTOQRUFGFGHNBIHVOABDK");

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
    msg.setTimeStamp(0.445751020683);
    msg.setSource(47663U);
    msg.setSourceEntity(133U);
    msg.setDestination(24152U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("WIUZYREGRPZCOMIGJTDFMRZQNNRAXOSNYBDJLADPZDSJVLTXVNRJQPLIEOVXQAINSRIOEHXTPUUNLWQBSMNCJJHEFVCFGXHCKDGKBPISKPCQGZSCZGRYOXWAMAHDKTGHWFNMFWCBL");
    msg.formation_name.assign("TMMLARIVHAEGZSGYMOCYKTBCPYMCAMRWOIDAIJAYNVQOFJICRQCGROYNFAVJLLRUJIKRDCDZHGXTTFRCUUUNZAJBXXUKQQXDGUTQQNVELJEWQMSIGFONDXJZFTIOZWPIHHOBPZSEYBXRCWXZHFKLDBCPKWKPRWJFYD");
    msg.plan_id.assign("WCINPGEDFIJSOKPCRRFMHPTLWUWKVSTGALWIQDYBUYDRGCVMOWUJZZODNTAJOQGCLXSAULVWEQYTBO");
    msg.description.assign("WGDVNGQQKLQBNZTYKGRAHPLJSSGLWVRINRHUREETKMKCFCXDRPRUXRIMGXUYS");
    msg.leader_speed = 0.938635323867;
    msg.leader_bank_lim = 0.531363315693;
    msg.pos_sim_err_lim = 0.827322320001;
    msg.pos_sim_err_wrn = 0.00495076565214;
    msg.pos_sim_err_timeout = 10362U;
    msg.converg_max = 0.81352049418;
    msg.converg_timeout = 33569U;
    msg.comms_timeout = 12589U;
    msg.turb_lim = 0.60349627768;
    msg.custom.assign("XMVWAJMDHFWCIVQBRWCETAHCNFDXNVGYMCHNJLKLEUWNPGPLIQSNALJFAYMQRHYVIECFFUQEHKONHTYBAGPUKAQZUJXXHZBXUHYOGVROKVGPMWOPPRJOQZISSFQRHVZIWZUJFEKVRBEMIXALXDRAJCQQKYDNKYRTINHWQLODBWKSVFSOYYUOPACBMTTRPSIUGNUXOSNLFTWCTJLDDMGDYBMXRMXBCZVEWDPEBSLGZKB");

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
    msg.setTimeStamp(0.079067844597);
    msg.setSource(16854U);
    msg.setSourceEntity(186U);
    msg.setDestination(10595U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("HORBEIJNSVRDALIBKMSKLKWADYQCVKUWGVIQVEZNXWFORFZKLJHXQDUCDZMRAXPGSCGCJCEWQLZUIKMKOZPRHISVMFLGNGJIHOJYYB");
    msg.formation_name.assign("KUPTYDMLXZNDNWDRDJWUFCAKFXWJSWSCNLUJRGGJFVRVCWUVULTZBESNPPYICUTNETZZOPXBMCDBEBKLMAHIXANLVMPZZSGYTZGISAFGZNQRBARDKQTKCVXDHEANIFSKKJGMISRCBFRIMSERYAYRIQUWFVUIHXLGHOJKTYLIH");
    msg.plan_id.assign("MCTMSZXRWKWXYULDEYEAEFUMTZEGNPMLVCSJYBGSFMBJXNCPIUWTHICZZUJGGNUNKVWYIFMBKQPKRINJIVJKCTPVWQOPYGMJEYPCTOKABIRHOGORQMRHYGFRCZWSNBOQROELAIPTALIDDRBFXSJXZBZQKTAQHSPLDXLCXENOLQYBULWSAGEGLQQXCKRVKHAPMF");
    msg.description.assign("FOJNSZNQSYPVICOZBHZCLNIWAEWKMMQXEBYVHPJBPEZWJFGQILQEHQNYGSCZVMGUUVCTMMPWTRPZRNIPDALMNEAHBJZDJTAMKNIOWSHEGRBABOGFLEPLTGAYFUDXHCVFTZSTBENTBXPJDSIGQIKQVXALRBQBXKECWDLOFVESVUCUYMZOIDAQYHCOVNWYRSXUCNWCRDUOHSAKXKOLJQAMWHOPJHGZYUJDFXRKRFM");
    msg.leader_speed = 0.00265306880482;
    msg.leader_bank_lim = 0.890130200783;
    msg.pos_sim_err_lim = 0.811440303981;
    msg.pos_sim_err_wrn = 0.685957202714;
    msg.pos_sim_err_timeout = 19788U;
    msg.converg_max = 0.123835545873;
    msg.converg_timeout = 14660U;
    msg.comms_timeout = 42555U;
    msg.turb_lim = 0.363583165759;
    msg.custom.assign("AMBKCKXRBYZHRBCJYMCNTFUWLNKNHOJSPTFZUDJPYVPJJCTIKMTJOLMUSSGTAFRVDJIWEKCRWIPRLBZRZEXQDOXQXDWFLSMSJCWJUZYOITQZDGGOGQTEHGVUAAKFHCEHMNEMOECKELDWBYOUHRZWWDKBWYPOAQUFDAAAFMOXNUNXFQPLKBHMLOPSS");

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
    msg.setTimeStamp(0.679149613528);
    msg.setSource(25388U);
    msg.setSourceEntity(133U);
    msg.setDestination(59052U);
    msg.setDestinationEntity(70U);
    msg.control_src = 51262U;
    msg.control_ent = 34U;
    msg.timeout = 0.269942927012;
    msg.loiter_radius = 0.932792099293;
    msg.altitude_interval = 0.650484429096;

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
    msg.setTimeStamp(0.728463271453);
    msg.setSource(35102U);
    msg.setSourceEntity(110U);
    msg.setDestination(43578U);
    msg.setDestinationEntity(216U);
    msg.control_src = 29449U;
    msg.control_ent = 10U;
    msg.timeout = 0.695740689794;
    msg.loiter_radius = 0.137897707865;
    msg.altitude_interval = 0.120459881804;

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
    msg.setTimeStamp(0.40743838583);
    msg.setSource(2531U);
    msg.setSourceEntity(175U);
    msg.setDestination(45504U);
    msg.setDestinationEntity(226U);
    msg.control_src = 61006U;
    msg.control_ent = 177U;
    msg.timeout = 0.62527603594;
    msg.loiter_radius = 0.274242878066;
    msg.altitude_interval = 0.764844876902;

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
    msg.setTimeStamp(0.543117537935);
    msg.setSource(62888U);
    msg.setSourceEntity(76U);
    msg.setDestination(19620U);
    msg.setDestinationEntity(9U);
    msg.flags = 164U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.246347139468;
    tmp_msg_0.speed_units = 173U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.481907114877;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.369823538289;
    msg.lon = 0.207493917773;
    msg.radius = 0.52172520055;

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
    msg.setTimeStamp(0.874428157267);
    msg.setSource(17576U);
    msg.setSourceEntity(152U);
    msg.setDestination(5414U);
    msg.setDestinationEntity(249U);
    msg.flags = 224U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.611450423663;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0299055803649;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.926857957165;
    msg.lon = 0.685843426736;
    msg.radius = 0.665248860964;

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
    msg.setTimeStamp(0.0524438655144);
    msg.setSource(11793U);
    msg.setSourceEntity(68U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(53U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.356951129713;
    tmp_msg_0.speed_units = 145U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.431328287113;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.803455178414;
    msg.lon = 0.0301845856795;
    msg.radius = 0.273424587397;

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
    msg.setTimeStamp(0.936282092966);
    msg.setSource(19905U);
    msg.setSourceEntity(53U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(4U);
    msg.control_src = 22575U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.371740054092;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.416701745634;
    tmp_tmp_msg_0_1.z_units = 154U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.555209351124;
    tmp_msg_0.lon = 0.463205040519;
    tmp_msg_0.radius = 0.8751578051;
    msg.reference.set(tmp_msg_0);
    msg.state = 223U;
    msg.proximity = 8U;

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
    msg.setTimeStamp(0.117203662929);
    msg.setSource(15178U);
    msg.setSourceEntity(120U);
    msg.setDestination(62735U);
    msg.setDestinationEntity(174U);
    msg.control_src = 11703U;
    msg.control_ent = 105U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 224U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.577472728894;
    tmp_tmp_msg_0_0.speed_units = 250U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.989088280772;
    tmp_tmp_msg_0_1.z_units = 185U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.395297112281;
    tmp_msg_0.lon = 0.810323052041;
    tmp_msg_0.radius = 0.0174069941732;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 121U;

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
    msg.setTimeStamp(0.632207030849);
    msg.setSource(40669U);
    msg.setSourceEntity(219U);
    msg.setDestination(56953U);
    msg.setDestinationEntity(14U);
    msg.control_src = 49950U;
    msg.control_ent = 238U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 182U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.299699518033;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.304820675198;
    tmp_tmp_msg_0_1.z_units = 75U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.416739876684;
    tmp_msg_0.lon = 0.601828840583;
    tmp_msg_0.radius = 0.68731499065;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 89U;

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
    msg.setTimeStamp(0.538004378255);
    msg.setSource(35351U);
    msg.setSourceEntity(31U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(165U);
    msg.ax_cmd = 0.518746988511;
    msg.ay_cmd = 0.957337234685;
    msg.az_cmd = 0.811167249225;
    msg.ax_des = 0.0773932655748;
    msg.ay_des = 0.444226112287;
    msg.az_des = 0.846459001914;
    msg.virt_err_x = 0.482301589752;
    msg.virt_err_y = 0.301784992593;
    msg.virt_err_z = 0.211442739847;
    msg.surf_fdbk_x = 0.388647474916;
    msg.surf_fdbk_y = 0.437233072317;
    msg.surf_fdbk_z = 0.805539271058;
    msg.surf_unkn_x = 0.882990058965;
    msg.surf_unkn_y = 0.685355625604;
    msg.surf_unkn_z = 0.707470664491;
    msg.ss_x = 0.0458651238761;
    msg.ss_y = 0.455971422148;
    msg.ss_z = 0.954203944015;

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
    msg.setTimeStamp(0.780405154682);
    msg.setSource(38902U);
    msg.setSourceEntity(193U);
    msg.setDestination(49396U);
    msg.setDestinationEntity(239U);
    msg.ax_cmd = 0.929015829398;
    msg.ay_cmd = 0.960615208957;
    msg.az_cmd = 0.209270834347;
    msg.ax_des = 0.673431854244;
    msg.ay_des = 0.611049048769;
    msg.az_des = 0.421638974917;
    msg.virt_err_x = 0.608180346568;
    msg.virt_err_y = 0.96382242045;
    msg.virt_err_z = 0.111521321644;
    msg.surf_fdbk_x = 0.538083818159;
    msg.surf_fdbk_y = 0.390358152107;
    msg.surf_fdbk_z = 0.129177930018;
    msg.surf_unkn_x = 0.117244620474;
    msg.surf_unkn_y = 0.822580899744;
    msg.surf_unkn_z = 0.121818846524;
    msg.ss_x = 0.263386221266;
    msg.ss_y = 0.229048106301;
    msg.ss_z = 0.992965549525;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UAMPTOGEXSTBTDVSQFBPMALGEJSWJLEYPUQIDVEDMQGUPWFTGIJFGIWZORIWANVGPBMZLJTYRZBBFHHOHKMHDGXWECOVKUCULNPUBMMQERLZKGYIQWCIWIXDHXRBNFLJHXRDARCPMPEURKWPCH");
    tmp_msg_0.dist = 0.945893768982;
    tmp_msg_0.err = 0.465793348224;
    tmp_msg_0.ctrl_imp = 0.512529790543;
    tmp_msg_0.rel_dir_x = 0.95898882664;
    tmp_msg_0.rel_dir_y = 0.877438457021;
    tmp_msg_0.rel_dir_z = 0.938859510076;
    tmp_msg_0.err_x = 0.0611019993675;
    tmp_msg_0.err_y = 0.25122184848;
    tmp_msg_0.err_z = 0.056120703644;
    tmp_msg_0.rf_err_x = 0.877493471062;
    tmp_msg_0.rf_err_y = 0.233335306459;
    tmp_msg_0.rf_err_z = 0.69512846704;
    tmp_msg_0.rf_err_vx = 0.762854652625;
    tmp_msg_0.rf_err_vy = 0.632306048995;
    tmp_msg_0.rf_err_vz = 0.527665262769;
    tmp_msg_0.ss_x = 0.842974939502;
    tmp_msg_0.ss_y = 0.966574032276;
    tmp_msg_0.ss_z = 0.309535259697;
    tmp_msg_0.virt_err_x = 0.381493994106;
    tmp_msg_0.virt_err_y = 0.295704757024;
    tmp_msg_0.virt_err_z = 0.32389960575;
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
    msg.setTimeStamp(0.192724114464);
    msg.setSource(32105U);
    msg.setSourceEntity(183U);
    msg.setDestination(345U);
    msg.setDestinationEntity(62U);
    msg.ax_cmd = 0.797555027271;
    msg.ay_cmd = 0.219835990855;
    msg.az_cmd = 0.958869291083;
    msg.ax_des = 0.519637671022;
    msg.ay_des = 0.11537410508;
    msg.az_des = 0.681484158146;
    msg.virt_err_x = 0.754173823889;
    msg.virt_err_y = 0.0454213217055;
    msg.virt_err_z = 0.00875547946466;
    msg.surf_fdbk_x = 0.994070877384;
    msg.surf_fdbk_y = 0.345700777189;
    msg.surf_fdbk_z = 0.950796567836;
    msg.surf_unkn_x = 0.565471646754;
    msg.surf_unkn_y = 0.577164530208;
    msg.surf_unkn_z = 0.738331555546;
    msg.ss_x = 0.769303777213;
    msg.ss_y = 0.335056545796;
    msg.ss_z = 0.710554407186;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SSMMLTMQXVNMCYFWZTIXDMXJMTTRSZQOLYNLCGCMFYATPPFGSUBDEEAZPJNJLUPHLCPUWMLHIEKOBNABIWKUXQWKRRIWOJZNKIEYKWOJNLJCQTUUYTERWBOIABBGRXTCGEAFZXFDEQWHAPKQBGYUVHDXPGSZWCZZJBFOZPISYPDGSNQQJGBHULTPAXFLRMUHERDSKALC");
    tmp_msg_0.dist = 0.441395792014;
    tmp_msg_0.err = 0.353331839588;
    tmp_msg_0.ctrl_imp = 0.745715139852;
    tmp_msg_0.rel_dir_x = 0.928134039022;
    tmp_msg_0.rel_dir_y = 0.829026447104;
    tmp_msg_0.rel_dir_z = 0.431098007372;
    tmp_msg_0.err_x = 0.653740954211;
    tmp_msg_0.err_y = 0.847000035042;
    tmp_msg_0.err_z = 0.486849663013;
    tmp_msg_0.rf_err_x = 0.595862907437;
    tmp_msg_0.rf_err_y = 0.372332511382;
    tmp_msg_0.rf_err_z = 0.0375182140898;
    tmp_msg_0.rf_err_vx = 0.882365839032;
    tmp_msg_0.rf_err_vy = 0.00329888333171;
    tmp_msg_0.rf_err_vz = 0.170395826525;
    tmp_msg_0.ss_x = 0.661187616348;
    tmp_msg_0.ss_y = 0.360006094791;
    tmp_msg_0.ss_z = 0.421523058586;
    tmp_msg_0.virt_err_x = 0.280009335962;
    tmp_msg_0.virt_err_y = 0.146463460154;
    tmp_msg_0.virt_err_z = 0.668523724052;
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
    msg.setTimeStamp(0.469303287104);
    msg.setSource(27362U);
    msg.setSourceEntity(183U);
    msg.setDestination(1745U);
    msg.setDestinationEntity(202U);
    msg.s_id.assign("WRNRJDPKDEYPJOCFXOSWRVEVWIRYQZAQWMGMLUNLSBUNOQBKKWAUMOFPIBJJDUYWYGWYWNTUSABDULRHIPVXGPUSTXZMAXCL");
    msg.dist = 0.681391814815;
    msg.err = 0.247546182259;
    msg.ctrl_imp = 0.667044035738;
    msg.rel_dir_x = 0.0436826271626;
    msg.rel_dir_y = 0.302424679477;
    msg.rel_dir_z = 0.00886724915169;
    msg.err_x = 0.905439263647;
    msg.err_y = 0.34676424009;
    msg.err_z = 0.737666645595;
    msg.rf_err_x = 0.863841679038;
    msg.rf_err_y = 0.229785355525;
    msg.rf_err_z = 0.527877133742;
    msg.rf_err_vx = 0.203509960042;
    msg.rf_err_vy = 0.666662109319;
    msg.rf_err_vz = 0.377102702554;
    msg.ss_x = 0.00218338532545;
    msg.ss_y = 0.806019876847;
    msg.ss_z = 0.798471911951;
    msg.virt_err_x = 0.523223038288;
    msg.virt_err_y = 0.776713396178;
    msg.virt_err_z = 0.808808993992;

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
    msg.setTimeStamp(0.652055929329);
    msg.setSource(37813U);
    msg.setSourceEntity(118U);
    msg.setDestination(53945U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("ANFURXZABBELCXINVVMBEMBWACQDDZCISUUJKYPOPLSXTUFYFBJIYPMDMCFKVUQUCOZSVJFXCORDFWXZKKSAXIHZEMEILCVVHOLGPRYRUAWIGOBJQZKINNJHMTKAGFTGBLSWYMSXOHUXZBH");
    msg.dist = 0.443485083739;
    msg.err = 0.613778076936;
    msg.ctrl_imp = 0.431907637294;
    msg.rel_dir_x = 0.479657353732;
    msg.rel_dir_y = 0.292913082744;
    msg.rel_dir_z = 0.436608306187;
    msg.err_x = 0.730718389811;
    msg.err_y = 0.50348864002;
    msg.err_z = 0.232378558121;
    msg.rf_err_x = 0.933683498766;
    msg.rf_err_y = 0.441612220159;
    msg.rf_err_z = 0.577677462107;
    msg.rf_err_vx = 0.349312986101;
    msg.rf_err_vy = 0.133792033995;
    msg.rf_err_vz = 0.896912078725;
    msg.ss_x = 0.370069711415;
    msg.ss_y = 0.361357532092;
    msg.ss_z = 0.241974465099;
    msg.virt_err_x = 0.235661568598;
    msg.virt_err_y = 0.887746509218;
    msg.virt_err_z = 0.554251607047;

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
    msg.setTimeStamp(0.448199971215);
    msg.setSource(58397U);
    msg.setSourceEntity(128U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(204U);
    msg.s_id.assign("FMDWGUNMBZHZEMBXRSGJYUZMNMGDMXRFLGKNEEHTIPVZIIHGTUAQATRUWCDONNTMECKEBFXWPDVJAUCVJGOJBCDTYPWMQZSKQSKCGEZRIKTYLAVUVTRY");
    msg.dist = 0.236887077817;
    msg.err = 0.246872591972;
    msg.ctrl_imp = 0.00825021782564;
    msg.rel_dir_x = 0.232834173077;
    msg.rel_dir_y = 0.0486776045668;
    msg.rel_dir_z = 0.89936649213;
    msg.err_x = 0.459756992927;
    msg.err_y = 0.43676575426;
    msg.err_z = 0.846660030433;
    msg.rf_err_x = 0.476366854799;
    msg.rf_err_y = 0.118482726104;
    msg.rf_err_z = 0.762795397578;
    msg.rf_err_vx = 0.828704908049;
    msg.rf_err_vy = 0.745408205727;
    msg.rf_err_vz = 0.654216025875;
    msg.ss_x = 0.848548241068;
    msg.ss_y = 0.139882979502;
    msg.ss_z = 0.773966332952;
    msg.virt_err_x = 0.194037940072;
    msg.virt_err_y = 0.71066763054;
    msg.virt_err_z = 0.473376678593;

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
    msg.setTimeStamp(0.42695119712);
    msg.setSource(62393U);
    msg.setSourceEntity(17U);
    msg.setDestination(58993U);
    msg.setDestinationEntity(164U);
    msg.timeout = 57880U;
    msg.rpm = 0.0451593493647;
    msg.direction = 73U;
    msg.custom.assign("NOXMGPAESSNDUEGSLNFJSHVYBTYSVJQKMWQUITDGJHKIAWCHBWRPQCVPPDMFMXSVSMJKJIPUHYSKZEYXWDIGBVVAGTBJHBODPNKANTFHFBMMWLOIGNSTAXEGCXTENRTOPAJELYLYARWNRFTRYBRCRFXJJFMEOLLTLZKQUAEZDNPQUOUQUZQBIIMHXAKCALZDRSUTWLRBGHNPWMDZOLKDJXVIHCKOUHUZYGEYIQVCZQOYZ");

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
    msg.setTimeStamp(0.654103183278);
    msg.setSource(59224U);
    msg.setSourceEntity(81U);
    msg.setDestination(11533U);
    msg.setDestinationEntity(41U);
    msg.timeout = 8671U;
    msg.rpm = 0.112838331404;
    msg.direction = 133U;
    msg.custom.assign("LEDCNHUAVSVCFRUOOQNNRRDVWMMGYKPGGKTHTKDUDDHTRIYBQGJLWSXGXEQHTWCMBFIMADWYEHACLJNALZVLTUIKORIFEIXXJUYMSYLMVOGSFBQFKEITLAYJQSESXBOUVTWBNUXHYUVEMADGNJJIOHFKOTFGHZLRBZVQPRVFYCCUSMFPCDGTREN");

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
    msg.setTimeStamp(0.947590578367);
    msg.setSource(20695U);
    msg.setSourceEntity(52U);
    msg.setDestination(19769U);
    msg.setDestinationEntity(223U);
    msg.timeout = 63960U;
    msg.rpm = 0.760851487822;
    msg.direction = 66U;
    msg.custom.assign("STYBCYDCAFDPYYKLGPSQIMNOSEKBVWQVTGWTKTDQAUGGRQVXZVAGDQHFMCSDOXLIRHDJFXSYBEZFQCJRZLMWIUUDRKNKWCTXNAOTXLEPUVCXTHFQPLHOPXNDWYUJYJ");

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
    msg.setTimeStamp(0.67601295941);
    msg.setSource(53926U);
    msg.setSourceEntity(240U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(201U);
    msg.formation_name.assign("LXSGXDKNEVZITFZLOBDFJNHGURVKAYMAABNTIUDRROTFYLVCCMUFRZBJOQOISKVRXFAXJAGSMJTCDZDFPKHPQBZQWVAIESCSCQATKMANWDFCPMUERQQEVKBOBYJJPZKYOYQMNSMEZGYMGCNVZNPTBJKKTLGFDRWURGEPWIXZUFCTNRITHVPOXBJXRYZPIWYHHUIJXLULBWHYLSX");
    msg.type = 203U;
    msg.op = 230U;
    msg.group_name.assign("OJRCYBLCAHTECJWNIUSKSGUTBEHRMQQSAXXOZPPUXDUEXSMHIOZETRGTSMKFNFLKAGPHGTLNOEZQWGJRVUPQHVPKNLSGRQMDYTSSTHLIIJPJHVFFCMDYWQWATWNW");
    msg.plan_id.assign("KWZNGZGJNJVDYVQHASJHYMROXPRDTHIHSXGJFCCJSAXDDDZILKHKFFIQKCTLXBZHKOYRQPWUMRLABVEYDIOTFBPVUZLFHOEALWRVZQBOHMLUHWJWSUMAFXLCM");
    msg.description.assign("QPXPKOHPQBLTFHYXUWLIODCXFJVSDIDOBRFSMZJYKJPRGDXQZAAIOBEMGULOUVYFSDCSCJKIYTZXRYLJKTRMQEZIQXTENXXQLRFLTHPFUCKZJM");
    msg.reference_frame = 30U;
    msg.leader_bank_lim = 0.792617937535;
    msg.leader_speed_min = 0.866647103882;
    msg.leader_speed_max = 0.917244951952;
    msg.leader_alt_min = 0.887473844461;
    msg.leader_alt_max = 0.186470020302;
    msg.pos_sim_err_lim = 0.611750420273;
    msg.pos_sim_err_wrn = 0.597406554495;
    msg.pos_sim_err_timeout = 31524U;
    msg.converg_max = 0.175557934652;
    msg.converg_timeout = 5979U;
    msg.comms_timeout = 59259U;
    msg.turb_lim = 0.685342014718;
    msg.custom.assign("UQGQZKBOJHQWWYLQUDJAREYZWDEVGUWVMHJKS");

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
    msg.setTimeStamp(0.689764961046);
    msg.setSource(382U);
    msg.setSourceEntity(55U);
    msg.setDestination(43127U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("YKRXRBURFDWQIBAWNVKXYWLKZAJFQQYJRKXM");
    msg.type = 187U;
    msg.op = 184U;
    msg.group_name.assign("FMALEAHNROXMZIMMLHEGSMNDJOZFDBFRMNTPZKARHNLRLOQJVQDVSTFBZTNZNICGDYAHYUWVPTQOHUQRSXHYDPQGETPLYXLCOZKCPWVVYUKIRAJFTEDOJASWITPKOO");
    msg.plan_id.assign("LAFZBYIZVTBAQCXXBPQEOTFEULWJEPHXRHYOZAOJQQAKZSXMAFQFWDAXMLIAKYOOQBOUWSMMAHRHOKLSLMWDVLKNHYIETRJYVRKYIVTJQBQKSUPUMUZYJTMCRPTD");
    msg.description.assign("OOQCNBKDRFFKOEEXFPNJZZLSNWAYUWIEZTWKGLDGILUUIRGXVGRGBTLEDLMRPMHBNPDBKVQUKHLHHUKNTNNSYXSRMXAATTUEGJFCEUCKLMMXVVAZYPJTBIBPWBHHTCMWSQNJQBCSYTLSIOKDDEYBXRQOOFUWHAMYCGQYQZIZADSFFVWEWTPZPYDCQC");
    msg.reference_frame = 238U;
    msg.leader_bank_lim = 0.845788405909;
    msg.leader_speed_min = 0.632876252646;
    msg.leader_speed_max = 0.971527041647;
    msg.leader_alt_min = 0.104335325472;
    msg.leader_alt_max = 0.536579966342;
    msg.pos_sim_err_lim = 0.550165670561;
    msg.pos_sim_err_wrn = 0.226205432724;
    msg.pos_sim_err_timeout = 41752U;
    msg.converg_max = 0.995041624912;
    msg.converg_timeout = 59888U;
    msg.comms_timeout = 4036U;
    msg.turb_lim = 0.63103735123;
    msg.custom.assign("HLUJMSKWIUWKXMAFJPEORVQVRYCTDBUIEQDWLFLUGHHUKOFFXPBVR");

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
    msg.setTimeStamp(0.515065766447);
    msg.setSource(14665U);
    msg.setSourceEntity(146U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("OYTRDCOBUGNMNNCEHVROXVELVFJMOKMTLXVKOGJLCFPQLQFATPRJFPMFESYXKSSSKOMUTLTRZPDNEZLZEQKSWKZMIEIXXVSQBENPGQJIWLTBCHKCJVGTURGUWDUUAHJJLOYKATXY");
    msg.type = 140U;
    msg.op = 4U;
    msg.group_name.assign("GURQLQKHQZTUOJWOIBIQQXPKBANCCYGCIJRWKOBQWEACGZVPWPMBUZVPYIAPKZGVUAOCXFFTJKMREHPWNCELMNIJYYASUVVUYZBZSAJSTEYXAHXTFDFFQAMHMLRZDZGDBTJKMYNVSWEXXOTFDLELRUSGHLHPEZWXUINQVDXSIXSHXFCMPDCDVMTSADUIGEOCZBYMHNMNTNRPSYJBQKOFO");
    msg.plan_id.assign("PGGHFDRXIAOUBGGIOMWBETPJQQDJDOIBHWKOPGXXIQXYEOMBLMGFMDYALXYKMUNIUNVBCSHAHEZCJAQIYPKUCCTDEKHWOFVOLRMZMKQ");
    msg.description.assign("ANYBXLJPYCWLXVGLYENWKNVQKRSZVZEXAKIHUZXBIALIUZHPQLTRWBPEYFKQUWPKPEIOSNOCOSFBQQQTVRTISTEMATAJSTHMDQLMINOOJCFFLQCGAFJBDHDZRRPIOEBZECCHKSRKUSVRDXKCBOTBGIJGDPADYSQMTEZQNICUYZMYJHILHWUVOMRDWUGVWDVPJVBNJXXDGGXDWZYWU");
    msg.reference_frame = 198U;
    msg.leader_bank_lim = 0.493655741988;
    msg.leader_speed_min = 0.987334625793;
    msg.leader_speed_max = 0.445230033529;
    msg.leader_alt_min = 0.106636006161;
    msg.leader_alt_max = 0.10153952499;
    msg.pos_sim_err_lim = 0.653122302509;
    msg.pos_sim_err_wrn = 0.0793852655113;
    msg.pos_sim_err_timeout = 11282U;
    msg.converg_max = 0.241846018075;
    msg.converg_timeout = 56890U;
    msg.comms_timeout = 15703U;
    msg.turb_lim = 0.463541359708;
    msg.custom.assign("SPXHDHBOKGCKYSLPPXMHFXOWXKVHNLUVPJJICYZNASLTXDIAUBSVPWRCJTUUJKSBUAARZIZHYGKEBYFAORYMWKZWPFOWBTLFWJYCWMSNZQQEYVIKCQJNNQ");

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
    msg.setTimeStamp(0.28727364191);
    msg.setSource(36568U);
    msg.setSourceEntity(139U);
    msg.setDestination(53382U);
    msg.setDestinationEntity(209U);
    msg.timeout = 35205U;
    msg.lat = 0.411177334434;
    msg.lon = 0.914091339287;
    msg.z = 0.0445861822896;
    msg.z_units = 74U;
    msg.speed = 0.0623906874636;
    msg.speed_units = 228U;
    msg.custom.assign("NVPAHJIUBROSQFDBBVMAHPFQDFMZHFGRZMGR");

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
    msg.setTimeStamp(0.725077366137);
    msg.setSource(27504U);
    msg.setSourceEntity(129U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(33U);
    msg.timeout = 3487U;
    msg.lat = 0.949754847116;
    msg.lon = 0.648299633068;
    msg.z = 0.634464470689;
    msg.z_units = 97U;
    msg.speed = 0.88179988324;
    msg.speed_units = 5U;
    msg.custom.assign("RDFJMHNDQRXFZAZGXIOEJKEKMWFVLBBFFCKYTYNJLXBGI");

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
    msg.setTimeStamp(0.0876126959848);
    msg.setSource(23630U);
    msg.setSourceEntity(1U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(156U);
    msg.timeout = 21598U;
    msg.lat = 0.343881142298;
    msg.lon = 0.182846896893;
    msg.z = 0.806361147065;
    msg.z_units = 250U;
    msg.speed = 0.132608147528;
    msg.speed_units = 108U;
    msg.custom.assign("YKKSQXCYSTSHEVSPGRAAP");

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
    msg.setTimeStamp(0.266781757893);
    msg.setSource(56570U);
    msg.setSourceEntity(68U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(160U);
    msg.timeout = 62551U;
    msg.lat = 0.309165011698;
    msg.lon = 0.705094503306;
    msg.z = 0.88122171692;
    msg.z_units = 140U;
    msg.speed = 0.546742177132;
    msg.speed_units = 129U;
    msg.custom.assign("VUXWLJNXLEIDJFZENNQQOPAFWTBCPMNOVSKUCGQI");

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
    msg.setTimeStamp(0.250760040057);
    msg.setSource(8692U);
    msg.setSourceEntity(87U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(191U);
    msg.timeout = 46222U;
    msg.lat = 0.904532257834;
    msg.lon = 0.68958227279;
    msg.z = 0.924216463192;
    msg.z_units = 30U;
    msg.speed = 0.800432613342;
    msg.speed_units = 34U;
    msg.custom.assign("QRSHVEUATQMJDUDMQJKCLHCLPNZMCYITNYODDPUGUSIBBRQWZHCZHLRLCYVMPELAIGKEFYHCURQIY");

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
    msg.setTimeStamp(0.510011392972);
    msg.setSource(61764U);
    msg.setSourceEntity(165U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(111U);
    msg.timeout = 54362U;
    msg.lat = 0.837511748221;
    msg.lon = 0.533060392657;
    msg.z = 0.912863954634;
    msg.z_units = 92U;
    msg.speed = 0.612068488654;
    msg.speed_units = 191U;
    msg.custom.assign("QXBYICBXJLNWGEJEUPYTKFPOZJQZIQCUMHFPATMDHSUOJSRHYFWXCBDYBCVBKYNRTOOVCBKGTVLIULBLRTRMJVPGZQICWTKADZMGUCWXUTIMTILNEUYQLOVRZEQEQEDXUMHOWNSAKRSMWGECQFYUIKKHZSHHFMSJBNMVSPKYZFPWGDNKSOFGIXVDEPCIANNWHGPQBXDAPHGF");

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
    msg.setTimeStamp(0.0562879554291);
    msg.setSource(13980U);
    msg.setSourceEntity(122U);
    msg.setDestination(17442U);
    msg.setDestinationEntity(186U);
    msg.arrival_time = 0.38984167229;
    msg.lat = 0.585502381136;
    msg.lon = 0.951029413813;
    msg.z = 0.370635816293;
    msg.z_units = 150U;
    msg.travel_z = 0.577453620412;
    msg.travel_z_units = 227U;
    msg.delayed = 194U;

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
    msg.setTimeStamp(0.362961087347);
    msg.setSource(59685U);
    msg.setSourceEntity(137U);
    msg.setDestination(27932U);
    msg.setDestinationEntity(5U);
    msg.arrival_time = 0.818467645292;
    msg.lat = 0.234761081702;
    msg.lon = 0.168717711803;
    msg.z = 0.785302868729;
    msg.z_units = 199U;
    msg.travel_z = 0.967024288729;
    msg.travel_z_units = 25U;
    msg.delayed = 6U;

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
    msg.setTimeStamp(0.676224515948);
    msg.setSource(11124U);
    msg.setSourceEntity(141U);
    msg.setDestination(13166U);
    msg.setDestinationEntity(150U);
    msg.arrival_time = 0.0783182611573;
    msg.lat = 0.307400999844;
    msg.lon = 0.0985178683604;
    msg.z = 0.686925792235;
    msg.z_units = 77U;
    msg.travel_z = 0.910559110466;
    msg.travel_z_units = 117U;
    msg.delayed = 122U;

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
    msg.setTimeStamp(0.470512918341);
    msg.setSource(29650U);
    msg.setSourceEntity(133U);
    msg.setDestination(762U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.014597651071;
    msg.lon = 0.548380963055;
    msg.z = 0.679975790571;
    msg.z_units = 195U;
    msg.speed = 0.121314855949;
    msg.speed_units = 26U;
    msg.bearing = 0.756078908609;
    msg.cross_angle = 0.185719399722;
    msg.width = 0.895760674754;
    msg.length = 0.9905987119;
    msg.coff = 221U;
    msg.angaperture = 0.417599983266;
    msg.range = 46615U;
    msg.overlap = 153U;
    msg.flags = 159U;
    msg.custom.assign("TQKHEKMWCRXIXLJFGTWVAVRDQYPUBPUBEYVANTNPIOQPZQMMBGLFKZRJYHJRDVHGWFGSDYNFGMDGKKWSWZXXEINKGBDHPLQIOYCCKNYMLUSZSWJCQUROLBMUCPAJDTGTILFDVVDGXBWCVTVQOXJATWLEIXDRVMSHEEYPSCLRSFXYOAUNINIU");

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
    msg.setTimeStamp(0.356561273132);
    msg.setSource(21572U);
    msg.setSourceEntity(149U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.153895284736;
    msg.lon = 0.564293662543;
    msg.z = 0.227518047659;
    msg.z_units = 69U;
    msg.speed = 0.189930270862;
    msg.speed_units = 174U;
    msg.bearing = 0.982236550013;
    msg.cross_angle = 0.516119759639;
    msg.width = 0.613417487494;
    msg.length = 0.287247740766;
    msg.coff = 170U;
    msg.angaperture = 0.15316606425;
    msg.range = 31992U;
    msg.overlap = 47U;
    msg.flags = 62U;
    msg.custom.assign("ZYMFXJNXYZXGBSNQVXVQPLMFOKBWCFKMAXSPKIRANSLQNJVCZWHJDYWGLAUAMHNRHURN");

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
    msg.setTimeStamp(0.0412043832393);
    msg.setSource(19299U);
    msg.setSourceEntity(190U);
    msg.setDestination(6392U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.843136402654;
    msg.lon = 0.442405616084;
    msg.z = 0.21444449641;
    msg.z_units = 13U;
    msg.speed = 0.0446110250293;
    msg.speed_units = 35U;
    msg.bearing = 0.0675784218591;
    msg.cross_angle = 0.935585774094;
    msg.width = 0.969126801854;
    msg.length = 0.270249014057;
    msg.coff = 83U;
    msg.angaperture = 0.510598713618;
    msg.range = 30774U;
    msg.overlap = 76U;
    msg.flags = 102U;
    msg.custom.assign("BRODQYYUQECIEGIZNPGJHECWOUQCPXFZJEKDEZMUCNZYVZLOLPQTTYCQUPAOWJMNRWTBYKGAIQOUITRJWUVDNAKMNNRGUMJKKXXGIVTMSOXKVSFGSRQOFPOPOEHSUAOUFSIHMCBLSSSBKRWGLZAWJEPHQWUXYJBVNRMDXZCLHBEPMSYDXZBIAERANNKTDCJTHVJGHXWBDZQFHPNVACWYLRYMQFGTMILBFTXTKFDCKHHYVDZVLAAIEDPVLLFW");

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
    msg.setTimeStamp(0.914484138655);
    msg.setSource(27212U);
    msg.setSourceEntity(107U);
    msg.setDestination(10799U);
    msg.setDestinationEntity(123U);
    msg.timeout = 26086U;
    msg.lat = 0.0113028486651;
    msg.lon = 0.266763468704;
    msg.z = 0.840875116018;
    msg.z_units = 14U;
    msg.speed = 0.1751124234;
    msg.speed_units = 226U;
    msg.syringe0 = 47U;
    msg.syringe1 = 75U;
    msg.syringe2 = 236U;
    msg.custom.assign("EBOICZSWSRJDPGLWSYVXUARXBQYRESFJVYCNNLHVGKWVOVNDBIDIEGCZQHHDLABIZURPKIKZXGWTGTBEMGOJRMCKULDXMONJPRLTRUXFTTYSSEZPWUIALUMVXCMNCKPRUZWFWIUNJJHZKTLIKUFWYQOJFSEXQDRCGRAVAJLVMOFLDDCEFZSOCKTNYCVFDNHPXTQMFQYYEFIYMUAHJOXGHILNGAPPBBQQGYHAXPAZB");

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
    msg.setTimeStamp(0.971489387418);
    msg.setSource(4423U);
    msg.setSourceEntity(140U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(231U);
    msg.timeout = 51157U;
    msg.lat = 0.521464210052;
    msg.lon = 0.617248628407;
    msg.z = 0.278267486195;
    msg.z_units = 213U;
    msg.speed = 0.278445984279;
    msg.speed_units = 76U;
    msg.syringe0 = 9U;
    msg.syringe1 = 127U;
    msg.syringe2 = 13U;
    msg.custom.assign("LWOMOIGPPPRBTZYXJNYSBSDTHJGXKIGGAHZRMXLXAPUNEEQGYTMPLMFEILC");

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
    msg.setTimeStamp(0.608594870492);
    msg.setSource(33061U);
    msg.setSourceEntity(91U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(116U);
    msg.timeout = 3821U;
    msg.lat = 0.534054520084;
    msg.lon = 0.592650850713;
    msg.z = 0.0617088179841;
    msg.z_units = 144U;
    msg.speed = 0.231777250671;
    msg.speed_units = 164U;
    msg.syringe0 = 115U;
    msg.syringe1 = 215U;
    msg.syringe2 = 2U;
    msg.custom.assign("HYYDJABYJGDCPPNIRUGYCNWKVFPGPJIVWDHGIQZAVCFHADKQISNTTOEPSUUTTLDXZIFPSXCZBBEZBSWARWYNQIJUAQLMFRXFOSKZFEGIBXHUHLJDRODAGXVLEOGTXKFKFVSFMIXNWBYCJMEAUWTNYZFKZIMHHRHZCMBVROUCROBXUDTEVEKECKNRNTXOHAEQOGAQ");

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
    msg.setTimeStamp(0.504875760093);
    msg.setSource(16043U);
    msg.setSourceEntity(160U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.0227479827);
    msg.setSource(50492U);
    msg.setSourceEntity(10U);
    msg.setDestination(47305U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.16521872611);
    msg.setSource(6349U);
    msg.setSourceEntity(215U);
    msg.setDestination(58849U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.0317427288555);
    msg.setSource(43239U);
    msg.setSourceEntity(173U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.358660222794;
    msg.lon = 0.858647128928;
    msg.z = 0.792015330892;
    msg.z_units = 117U;
    msg.speed = 0.980101463202;
    msg.speed_units = 130U;
    msg.takeoff_pitch = 0.0905572064001;
    msg.custom.assign("QRCMGMZGLRXWIBVBECAJXHJYUCKHYELHUTMNWUSUBXMAQACCJXRXSCBBPIMZDYVEISBLQVWUDFRPOKNXLRTGBZXFVVJDVOLSGDRVUEPZDSUWQMNDWIITFNHMQURATZQKZFYYSTKMKGVZLHKAWEEBQDFF");

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
    msg.setTimeStamp(0.859430238028);
    msg.setSource(60553U);
    msg.setSourceEntity(137U);
    msg.setDestination(50858U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.479082235387;
    msg.lon = 0.968011946615;
    msg.z = 0.388920040869;
    msg.z_units = 168U;
    msg.speed = 0.778232894819;
    msg.speed_units = 151U;
    msg.takeoff_pitch = 0.236390523729;
    msg.custom.assign("ZQTUEDZRURISXTJZJEBFEIOHSMBUVYJMBGHPPMPQQGTGHUWTYNVSUBBDXYFOOLUXED");

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
    msg.setTimeStamp(0.765399886657);
    msg.setSource(15087U);
    msg.setSourceEntity(123U);
    msg.setDestination(37585U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.887982313247;
    msg.lon = 0.572808071705;
    msg.z = 0.778634576734;
    msg.z_units = 155U;
    msg.speed = 0.530996343712;
    msg.speed_units = 154U;
    msg.takeoff_pitch = 0.538192315542;
    msg.custom.assign("XOJKXXBIOHAESWKXSRVVXMWIZTOJIPCCJURSADNEADVLTQRUBIHOZANLNKJJVXWMZAKWUCBDTNYABTTWFKGALEMGGCSVPUXEYQUOFRRQSVMHRVCPZIWDUPQTUGYXYFCRFENHLMJYMPIDS");

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
    msg.setTimeStamp(0.587598466925);
    msg.setSource(48477U);
    msg.setSourceEntity(28U);
    msg.setDestination(47877U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.324672314324;
    msg.lon = 0.719440627767;
    msg.z = 0.187380143124;
    msg.z_units = 204U;
    msg.speed = 0.177463679547;
    msg.speed_units = 115U;
    msg.abort_z = 0.535404383253;
    msg.bearing = 0.456443743211;
    msg.glide_slope = 156U;
    msg.glide_slope_alt = 0.908928792081;
    msg.custom.assign("BACQDVLUIOFKTMEKTWDSGDJPLKHWVSFBNZHFSCVJGVZNFKQUGRUDJXUBRRGOWDSEZYVVXMEZLSMNTDLTGELGBFPOFVCOOAOHJSJ");

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
    msg.setTimeStamp(0.400789003492);
    msg.setSource(41874U);
    msg.setSourceEntity(52U);
    msg.setDestination(51431U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.944053583743;
    msg.lon = 0.0413862474779;
    msg.z = 0.518215727219;
    msg.z_units = 27U;
    msg.speed = 0.869636842043;
    msg.speed_units = 236U;
    msg.abort_z = 0.361093058391;
    msg.bearing = 0.186601543455;
    msg.glide_slope = 40U;
    msg.glide_slope_alt = 0.274360049922;
    msg.custom.assign("GEVVGWRDRQZJQVIQLPENPEMTARIYUNKGZXKOSMZNWFDSTCBXDQSJOJAAJAWKHJPYBNOZMNXPKFOVYMMHYUEPFIURZYUWWFUBXIRHYUIXLVGQCJXSOKXZNKHSVZYFUPJRBGRWJRUBQSQVVSRLIIIFHTVFNDMULEMUGGCCBTEKODNMTHTT");

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
    msg.setTimeStamp(0.364485274672);
    msg.setSource(54859U);
    msg.setSourceEntity(95U);
    msg.setDestination(27013U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.328456047682;
    msg.lon = 0.0032948602287;
    msg.z = 0.296578549002;
    msg.z_units = 164U;
    msg.speed = 0.720845086552;
    msg.speed_units = 189U;
    msg.abort_z = 0.408044509108;
    msg.bearing = 0.536586750721;
    msg.glide_slope = 176U;
    msg.glide_slope_alt = 0.140367926385;
    msg.custom.assign("CFKMUKRCIPNQUWFVLUTHCTV");

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
    msg.setTimeStamp(0.841979708171);
    msg.setSource(32859U);
    msg.setSourceEntity(27U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.668032459707;
    msg.lon = 0.737017999362;
    msg.speed = 0.349286301956;
    msg.speed_units = 164U;
    msg.limits = 108U;
    msg.max_depth = 0.190565812782;
    msg.min_alt = 0.776462399345;
    msg.time_limit = 0.0537574944741;
    msg.controller.assign("MNMUFYEXKQAECIZWAHCZGYWBLLLCXEXYNGYOEUQBSCKSEGXJRHVWBOWBPCNTRODZFXXZIPPHSNBQHITPQCFFERSLLNVQYRXOYPUHKGDVYFNMYDDJNVWIOBIGDVWZEDTRELQRWSVLJQTZFVLPKAGSKXDJUZGIPMQTAHPCJYBAUTSUMUVXHPADRQOAFSXIMFNGMKKCJTRLJZOBIBMZKAVQJE");
    msg.custom.assign("ZESAHNLDMFUTSSFYSAVNNHIMEDCIASTXJBPPMEOEFZIXHYFUPBTGVUI");

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
    msg.setTimeStamp(0.611712657304);
    msg.setSource(54856U);
    msg.setSourceEntity(215U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.432283515331;
    msg.lon = 0.455508503977;
    msg.speed = 0.38081108303;
    msg.speed_units = 120U;
    msg.limits = 199U;
    msg.max_depth = 0.43668205392;
    msg.min_alt = 0.880223223989;
    msg.time_limit = 0.668237129799;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.848088516062;
    tmp_msg_0.lon = 0.136617045082;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("QTKWUUPHFQJHIBQEBDDPSRJBQYUFGBRSYEFPXEPATAVMVCRXJXYKILSHSBSEHZEFFAVVLBAKOORZYHGNISGCKCCALFVYOTFYYMCHUZHSUXIDOJBLMSRLKWGTJTIZJANXMXUDWYYESTUUDFDNOWZPMNEDJLAIZIYGXZKPCNIZQDMWWEVJKPWNGCOXNNZLETHWHTIR");
    msg.custom.assign("PRXXRPIAOCWMAUPWCKDDJNZGLCURWFCLYTORYUHZMGEBVATMBNFKQQRAMVIHVKZYU");

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
    msg.setTimeStamp(0.0862574447048);
    msg.setSource(57868U);
    msg.setSourceEntity(30U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.624372212249;
    msg.lon = 0.623734601868;
    msg.speed = 0.832568908889;
    msg.speed_units = 68U;
    msg.limits = 190U;
    msg.max_depth = 0.647208099241;
    msg.min_alt = 0.838864065953;
    msg.time_limit = 0.780508636959;
    msg.controller.assign("ITLVIJROHMOTSSIAMKXAICYMVONUHXQTEYKA");
    msg.custom.assign("KGXORXGBIJIGEKWCQLQYBVSEFQWHZZGAAYQSBCKSBYLNETLNMHONFVPXOICATGWLBCWHCMFILQBDIDFZJMVMNIUUALYJUOSKDWOUFGGRWJXVHKBTSLOFEDGYFXJPIOCNZKTRVHYYXRJAIMUDQYQVUSZDHYVMBHXAYXZSPLOZRRAQCIRPTKBASEJTWVDHNMHFTCUINWERPXSVMDDFO");

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
    msg.setTimeStamp(0.503748917631);
    msg.setSource(48860U);
    msg.setSourceEntity(147U);
    msg.setDestination(54870U);
    msg.setDestinationEntity(242U);
    msg.target.assign("YHUQHBDOJBTYZBBEORGSSMVYPEOUKFQUOIFHBDGVTWHSKNAIFNHVCTTQCREWJKMVLKWBASIEFJQIOIZJEISRMEKLCUGMUQZGXJCSXMLLPIWPNUVAULTCT");
    msg.max_speed = 0.225563293514;
    msg.speed_units = 184U;
    msg.lat = 0.976861176185;
    msg.lon = 0.65822958827;
    msg.z = 0.0101011061353;
    msg.z_units = 152U;
    msg.custom.assign("NKUVFTNTIWAXEPEHQQAMSBABXNCCZEIBCBSILPTWKVRZAGAVZCXWZDAENGTRSHZHKWLOPJNLGIPHDXDXLMSTRWDOWCQRLGEZVSMKYZDUJFNKQFWGVEUFHOLGXXFNTSFMESHHOYMBUNILJSHYSVWFITKPYKQIXJSQUJYTWZCIGYEFRODDBPPC");

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
    msg.setTimeStamp(0.675662464782);
    msg.setSource(37442U);
    msg.setSourceEntity(153U);
    msg.setDestination(36086U);
    msg.setDestinationEntity(107U);
    msg.target.assign("YESQSZLSIJQXLIJDRGGGBVNIAMFZSTHMCVORAXOONHCTUUXXPNWNIZVVMAKETPQMLJRNWQFGZHPUKPEUOCGLBY");
    msg.max_speed = 0.0620253349852;
    msg.speed_units = 186U;
    msg.lat = 0.976670703106;
    msg.lon = 0.396270963518;
    msg.z = 0.39942201856;
    msg.z_units = 239U;
    msg.custom.assign("GRENXKRUONPTPLLIIRVZFIGWJXKMXCFXATCODUPDHRWY");

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
    msg.setTimeStamp(0.155752371629);
    msg.setSource(32704U);
    msg.setSourceEntity(173U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(108U);
    msg.target.assign("MDHUFVOAAGPICIXDVMUEFGEQVDCCFLOHWSMAJNPPRBIXZJEKWOLUWASOQGIYFHBYMGTWEDEOORDCXCWEFJJJSCMSSFVVRW");
    msg.max_speed = 0.964693655669;
    msg.speed_units = 82U;
    msg.lat = 0.258568036678;
    msg.lon = 0.717385398554;
    msg.z = 0.889192906421;
    msg.z_units = 222U;
    msg.custom.assign("JASAWIRNMWFYGXFIBYJWYMNALOTXPKIZHODAMWKGCLWPTDVRSEBJQDTCVLHJKNRAQPRPZDYDPQXSNVCUCTYUVRGZLBVZDJTTIJ");

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
    msg.setTimeStamp(0.416125059308);
    msg.setSource(47280U);
    msg.setSourceEntity(245U);
    msg.setDestination(17407U);
    msg.setDestinationEntity(58U);
    msg.timeout = 47516U;
    msg.lat = 0.255611836961;
    msg.lon = 0.209185412294;
    msg.speed = 0.616863962138;
    msg.speed_units = 51U;
    msg.custom.assign("BUJDQTPJNVILIEHOYXFXJYQOKREDDUWAMBAGXPPQGMKCJADYWISXBUWLOEWCIEPLPYVIWEBXSCSQHRGGHPCQOKSRJUMJORUVJKXAMHDVFSOFWFFOLCOHKGPZAZLLSB");

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
    msg.setTimeStamp(0.729175219899);
    msg.setSource(41366U);
    msg.setSourceEntity(170U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(33U);
    msg.timeout = 13935U;
    msg.lat = 0.317986536259;
    msg.lon = 0.829188159482;
    msg.speed = 0.358569409559;
    msg.speed_units = 20U;
    msg.custom.assign("OXITEPAGSBLLNCDUECAQPNKDUJKOIITVUABPJBGJXTJHTHJOHZNUVZUYK");

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
    msg.setTimeStamp(0.805581700195);
    msg.setSource(27685U);
    msg.setSourceEntity(196U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(180U);
    msg.timeout = 17723U;
    msg.lat = 0.0470005957911;
    msg.lon = 0.0681566352066;
    msg.speed = 0.265830627772;
    msg.speed_units = 12U;
    msg.custom.assign("IORDJIOTYGBGPJIPKQCRLPKDVVJGJDPMMABSNCZJ");

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
    msg.setTimeStamp(0.934865362883);
    msg.setSource(207U);
    msg.setSourceEntity(161U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.121616785125;
    msg.lon = 0.729041633679;
    msg.z = 0.554308163612;
    msg.z_units = 244U;
    msg.radius = 0.35764742627;
    msg.duration = 38434U;
    msg.speed = 0.963487849146;
    msg.speed_units = 147U;
    msg.popup_period = 29307U;
    msg.popup_duration = 64739U;
    msg.flags = 66U;
    msg.custom.assign("COBANERYIJZSGWGEHVZJXCMQWZOMOIINTBOJJZCGZWSAFBSPCFDBZLMEGAKYULCGWVRNIPEOQVBVRJULVQEVAXSFOEDJKDJQOZUMKDXMUZPDJLCKDDTMGGCUHSHTDLFFPKXHUYYKAIYNLPZPTIEFSMPKJUHEMJKPWYOLOGBNQMTTHTW");

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
    msg.setTimeStamp(0.681600647076);
    msg.setSource(42081U);
    msg.setSourceEntity(105U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.954472598624;
    msg.lon = 0.428054768667;
    msg.z = 0.165124673524;
    msg.z_units = 111U;
    msg.radius = 0.644339787636;
    msg.duration = 27891U;
    msg.speed = 0.443905275579;
    msg.speed_units = 8U;
    msg.popup_period = 16501U;
    msg.popup_duration = 49973U;
    msg.flags = 38U;
    msg.custom.assign("KEDJWEFDRISYQUMQLQJWAMTCLJMAKXOUYMMCDEKDARGZXKBOTZHRXWXUCSKHWXFDICHMBJGJUFFQYENYMVTRQLNQBATXQLYPKREMTVZRLOJVBPAYZLDROJAJWWJZYAFUGQEUNBBSVNNHOGPSWBVCDUIKIJHIVHDTGFNIBALHHLCPUUVOAMDSPFVRWCBHENHTCX");

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
    msg.setTimeStamp(0.421515138689);
    msg.setSource(44128U);
    msg.setSourceEntity(89U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.027916308594;
    msg.lon = 0.411664967591;
    msg.z = 0.903744610287;
    msg.z_units = 227U;
    msg.radius = 0.665277198058;
    msg.duration = 29299U;
    msg.speed = 0.980597164622;
    msg.speed_units = 167U;
    msg.popup_period = 26028U;
    msg.popup_duration = 62066U;
    msg.flags = 68U;
    msg.custom.assign("XYQHGHZIZVZMNMLQBCTPVNHFYUMXZ");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.570496003815);
    msg.setSource(42085U);
    msg.setSourceEntity(153U);
    msg.setDestination(22846U);
    msg.setDestinationEntity(119U);
    msg.op_mode = 153U;
    msg.error_count = 39U;
    msg.error_ents.assign("ODABWUMHCRPJTBBVYWXKAYW");
    msg.maneuver_type = 25086U;
    msg.maneuver_stime = 0.473757558216;
    msg.maneuver_eta = 57833U;
    msg.control_loops = 811470021U;
    msg.flags = 153U;
    msg.last_error.assign("XYHRKZJZNBNGQHFZXDPZLMIUXIPCDWWEHUMHUUYXIBILUODRFLFSFANPHRYZYVAXXCVJMWKRCAJKGTGGUQTMAFHBVSSBWOPVAZSOOKKGMCQDWFOUAAOGPGKKXTMLWYDQLPTMFJOKGDFHJWADONQWZETIQBJIRIQ");
    msg.last_error_time = 0.892834472324;

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
    msg.setTimeStamp(0.930672319289);
    msg.setSource(44863U);
    msg.setSourceEntity(190U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 106U;
    msg.error_count = 159U;
    msg.error_ents.assign("TPRVMUSMWRLXBGVUYIFDENXZFCDHWJBUMOTULAJYLGXRVOWBNQIZJNNQSHQJEUPDORBQACXZMQEPAGTXYUSTKYWYKPRQDEAUPQWWDPYJGEAJGCDK");
    msg.maneuver_type = 22222U;
    msg.maneuver_stime = 0.185804100057;
    msg.maneuver_eta = 58002U;
    msg.control_loops = 290930324U;
    msg.flags = 210U;
    msg.last_error.assign("ZNJFVFURSFMDARWLXYLOKCMEROEQNOPYIUOMDCIHQJHHZSANHFMOIAEECPIKWRGUHSSXXBGKNHLFE");
    msg.last_error_time = 0.548348371826;

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
    msg.setTimeStamp(0.176897527419);
    msg.setSource(52338U);
    msg.setSourceEntity(202U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 76U;
    msg.error_count = 143U;
    msg.error_ents.assign("YXOPNROUMCQFTDCDKBBPJDPRESXMWQKZCRAIDYJRIJFHQKBOASTFHNQLOBRAALUNXEDQTGLMOJBGYUROGFYXEFTCLUHLBKOYDDUVTWZWVTA");
    msg.maneuver_type = 600U;
    msg.maneuver_stime = 0.5756616966;
    msg.maneuver_eta = 50389U;
    msg.control_loops = 1586841457U;
    msg.flags = 222U;
    msg.last_error.assign("ZUVZLTRHUPDUZTJIZRDHIQEXRGAAYLLCYDLRZYMHYUWFGBDM");
    msg.last_error_time = 0.974556242596;

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
    msg.setTimeStamp(0.33834881977);
    msg.setSource(42752U);
    msg.setSourceEntity(145U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(86U);
    msg.type = 145U;
    msg.request_id = 22846U;
    msg.command = 143U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.498967888045;
    tmp_msg_0.lat = 0.14973393459;
    tmp_msg_0.lon = 0.807022388816;
    tmp_msg_0.z = 0.611691600949;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.travel_z = 0.749333134093;
    tmp_msg_0.travel_z_units = 116U;
    tmp_msg_0.delayed = 110U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18696U;
    msg.info.assign("ALLTWVGWEMRSHVPJHEIVQGGBZRMAJPNIFYQXDFNFZLQNOKUYGASZMGFDMZXLSZHQJMTXCBVXHRANXQWUFNUHUWJXYHBUMBDCZREJTRTVPKZJJEESGLQRYTDTKVOKWEXJONOJWGXLNPWAUAAUWCIARYOCCDAVEUBWBFPRKYCTMMBHMQFDNIBHPDLYTXSHCYUDWS");

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
    msg.setTimeStamp(0.189472652525);
    msg.setSource(13297U);
    msg.setSourceEntity(221U);
    msg.setDestination(6702U);
    msg.setDestinationEntity(54U);
    msg.type = 59U;
    msg.request_id = 53079U;
    msg.command = 170U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.694407071064;
    tmp_msg_0.lon = 0.12272667017;
    tmp_msg_0.z = 0.552382215568;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.speed = 0.176456887423;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.takeoff_pitch = 0.547110801316;
    tmp_msg_0.custom.assign("NDDMXQPKYNXQFLYQYIWGAZXLWGTUCCAKHMEXOGIGSVVJIFYEECIGFJRAMNVPCQJDCIXPALQBAODOEFDOBNTITVWBBPEFQGMBLEKXNTSOBSOWZCGCTDOSRJATCUQNJBXTUEUSGKGRKRTVMPBSD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59877U;
    msg.info.assign("UJTHFLALBXTMXJVTJUHHRODNBKANKRPWVQUDBIAVALNKUOMYSFGQXMEXKVNDPKNCVSDIUWZOTFQIQDSRLWXIJKCHYDGZOMGEYNMTPSDWGFZAAUXIJSVLOWZCEIMOTFYUJIYUJCPDRLAMKPMPZCRBZQTZQNIPKQXWLYRFBMYBAHXGTRRQPCGVEZBOKGSVRTRHJXVSHNOFQPOWLEWLJEEIYKHAWEOWGFTMJGBP");

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
    msg.setTimeStamp(0.298203019613);
    msg.setSource(2924U);
    msg.setSourceEntity(161U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(195U);
    msg.type = 92U;
    msg.request_id = 52917U;
    msg.command = 173U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.695487722657;
    tmp_msg_0.lon = 0.254255244211;
    tmp_msg_0.z = 0.846488773384;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.518114667595;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.takeoff_pitch = 0.266345212731;
    tmp_msg_0.custom.assign("ZFNOOONVTPCJMIAIMDDMJVABRELHVQQQGEKLIDDSLXCNISKGAVRGSJXROLZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54950U;
    msg.info.assign("ZRBLXBMPUDGWUWFVTYRNTOXPSEYVHDRJIYTDGUUHIJTZEATJFLYBGCXMOFSEQSRQNVPWCIOJIEVYCGQLUQLKMXQNMATGGVXJLJXODULNTKKEDFKQINJACRMPEUPIAMPRDSCNNKGEYCTRNXRKFAISTIMZBONYDXOBLVOPWINBWJDKTJMZVBHEWXSCZFRCZEAUBGKHZDFHOLMHOHAPYKVVSFHJFXBGZQWHRISYKQWGVWCUCZOALZPFLSAESHAP");

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
    msg.setTimeStamp(0.436449402032);
    msg.setSource(59213U);
    msg.setSourceEntity(107U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(78U);
    msg.command = 194U;
    msg.entities.assign("NOXDGDWCMEYMHRUALIQFFSYWZZAVEHJISUCATHKNAWYIEJOHSXILIKPRMJOAZPXRLOGBQNPTIEMXQFEMFOSDSIMYEZBXGUQTLFAGERLHKZSBKZHKLODGFWWWIVCPAXTSWFLRDDOARNWFQUQWNKMPTYSPNJVXHUDGYAXGPXKVCIIYPTVUZWDJZTYUMTBVQCJETUCNSRLVGFZBNHKQGPB");

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
    msg.setTimeStamp(0.647618712394);
    msg.setSource(722U);
    msg.setSourceEntity(143U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(151U);
    msg.command = 173U;
    msg.entities.assign("TARPVQKSFHNBSRPPIAD");

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
    msg.setTimeStamp(0.606439390563);
    msg.setSource(27859U);
    msg.setSourceEntity(175U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(188U);
    msg.command = 129U;
    msg.entities.assign("RPGLVNHMPZUSEREAYBKFMLCGRDIOPANSHCZAQGTZSQQNEVGVRDWHVFMYKKPFXHVIIQJGOEJHHFSALAUMEIVDNCNSUTVKQTGZTURVSUEJKKPBHGZJZFYAARETJQZSBUNWAJNBMODHFOTPXGKXCPDVWJFZBIGQCNYYTUIBBLZFMKAWCSJ");

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
    msg.setTimeStamp(0.824186946729);
    msg.setSource(54191U);
    msg.setSourceEntity(51U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(176U);
    msg.mcount = 161U;
    msg.mnames.assign("SUTJQQMIRFOSDEXTNJPYPCFEMLFYDXAUYSBRAJTVCYHNUXHEUXOAOLORYBRGLOJVUUKCHRYSWXLEGDNWJHZIDFQVYGHMAHAQSKJICRBKRTPFWQGWBMTTGVAZKKGPHIQBSEMNDXRISQMGQPEQZAUWTZFQVEOFLZCPSJJGBNCXOEKPWZIHFKWNILUDFNTCVCYDBORVDTMWBVLZOPZTNIJBVCKDHNAHMJSCIVWYIWEXMPXFLBGZEKDXGYKLOUZNP");
    msg.ecount = 211U;
    msg.enames.assign("YLONPVVKPQUYJNDGEICSQDNAQONMSCSBFGUWFHKQUEERHFNOLFQVMEHZIMVTCDZHTYAZMWWODRRVEJTABBWPFPYSQXICVDWORQJBSIIDPXSSUIMCMYNOKVEXWRUPTFRRSCRXBWOLODXUGRYPDAKLTOFBGRJQHFEAYXVYOLMYGGXCHPBNXMWCUNJZSZHGUBUQWSIZTMGBILIZ");
    msg.ccount = 46U;
    msg.cnames.assign("SGYHJKQVPNDPQOYJPXTVAUAFNDECSHCTHLIMPEXPTPGIRUDWRNJOHSFDVQAGZFFHWURBWOVOZRUZXBKIOIGOQLKZTKRDNIZTYENNTGYBGOWLFVSBHQJGMJADLRMUYMTLXMAEPLNBDMVAAWOKXXJCNOBGGFEPCMHXXTMEUZEJLFSKBUQVCMAZHLNIAWITKWVQQKLVSJDWZRWFCB");
    msg.last_error.assign("NRVOCJABQUPZIRHMQFVGEAZAHXWPUDVJDOYPAFRDOFUUBZDJTZEGBLEPWNQXKCAEKZXDLMHLCDIJYQSNXMORJUGISRGKNNAUOFGGMWPBTWBXMCAPIWVBHFQFOPMONGTJDTIWRIBCOLDWKEQVQRNSLWEOLJTJPCDKBHHHKYIFTTHUCNNGLLMEXVICHQKYRHVFRGXBVAFS");
    msg.last_error_time = 0.551723352629;

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
    msg.setTimeStamp(0.879919453019);
    msg.setSource(64756U);
    msg.setSourceEntity(51U);
    msg.setDestination(42359U);
    msg.setDestinationEntity(210U);
    msg.mcount = 19U;
    msg.mnames.assign("SQECPKDCOBWTDNZHQAZKMULFQVRLBEKQPDRBSGWHHBZXKKKLSIQIATJTRUPAYZDZAIFXEMVBMGBVCGRORPNYHJPMFOASMJEEGIZEFIXFOTGIWVCIYFFRLLTHCEVDNRATFUQDFATQMDRXPSYYWICLWLGCOZBSJDZZGOJVYQYTWGNPMKWZJOCQEJVOVXEAAMDBBLIOWUOQBHAWTKNUPXXIMHYNCLJSUUCJG");
    msg.ecount = 180U;
    msg.enames.assign("ZVNSAPHXKKVKRLQXKCXVTQMKRXBPQPIUTSYAECRIJLMAUWLZYZFGKYBWJBOHTRFDPPWINAWNBXKMHDXGGEAHLDPGLJUXQISUWDSMLDOTYBWCHFFMPAWFGQSMRQXOJUVNCJDOHAHCXAWGLVEBY");
    msg.ccount = 221U;
    msg.cnames.assign("WXVSUEGVRLUWVACIBUCDKTHBBQCNJHNQZRPLSQ");
    msg.last_error.assign("DXITYCFUEDBMNEDOPCQFIKRAROQNVFJLPQHOCUJZXJVVMWHKVYTDCPTKRUDOWOXSFAJCRNEXSZCOIMPQIXHPGYXQLFWIXYYKRYOYEHVIADBMMQARGETVPKMLAWOSVVCUKPZGAQHTFWAEWUFSVGPSSBSBGQHMEUGJKMFGTCHDRYIRWZISZGNXZYSYCSLLPNZMDBNFHLTPGEKQOJBUHINLUALZTKBNL");
    msg.last_error_time = 0.881171751966;

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
    msg.setTimeStamp(0.739135612082);
    msg.setSource(21181U);
    msg.setSourceEntity(181U);
    msg.setDestination(3055U);
    msg.setDestinationEntity(105U);
    msg.mcount = 246U;
    msg.mnames.assign("DNJSYKBENIPQRKKTLRVABUXREMWHOHGTSIXUEVPEBLMEPILCLZQWGGQCDOPECSSMEMVOYCTWJMVAKKNYSOICYMAMUEGXTTCBBVFAUITXGHDJFAIBWNXUBRXYDJIRJQADLFZLZYHSZRDPJWVNFLGYCZHCODWXRKTLPQUUNVXNYUQRDMWWCKGONDTFZXHJLIFJYSAPRBZIZGEIDHOHBQWHTPBOYMOSJQAVLKTPNSNHUPJ");
    msg.ecount = 72U;
    msg.enames.assign("NUQJQNAGFFJHPAUQXFQVETGSDBQNFQBTYYOHEHTNGJLY");
    msg.ccount = 217U;
    msg.cnames.assign("YUTHMJNCIFVHUNXJSSRNSRCGDUPVFFBTDCKZCXAXTFWWIIYBOUZMUHDUKCLVZNUILTDPAAOWZSLQPWQENNEDZZESKNNAKDGAVWTBEQMPYZYWCEOJJHLGRUURLGACUZVJJCXFLXRPQBQIRPGLCTJHWTJVLSZAOBODORGLPGJHTFHEMYOIBHYABQKITMEQYVGCHMSWXQYQQVLVMOXDDTDIAFIKKWXBYMZNGPJWOMMYXSANRRIEK");
    msg.last_error.assign("BFCYKEMQGPLGGZDWCEIOSEVQEAQAFCHSKLJOFDQTLJQKQTLYPVCEDUAITWDXYOFXHRRBYUKAWKPHWBOULM");
    msg.last_error_time = 0.1533408187;

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
    msg.setTimeStamp(0.589863888756);
    msg.setSource(1521U);
    msg.setSourceEntity(166U);
    msg.setDestination(14249U);
    msg.setDestinationEntity(119U);
    msg.mask = 249U;
    msg.max_depth = 0.505562107505;
    msg.min_altitude = 0.703084503604;
    msg.max_altitude = 0.845344688995;
    msg.min_speed = 0.191053201428;
    msg.max_speed = 0.575056880777;
    msg.max_vrate = 0.876463920969;
    msg.lat = 0.0672174177178;
    msg.lon = 0.388255965138;
    msg.orientation = 0.502498269192;
    msg.width = 0.842629920812;
    msg.length = 0.0713637791911;

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
    msg.setTimeStamp(0.320486809165);
    msg.setSource(52189U);
    msg.setSourceEntity(106U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(116U);
    msg.mask = 211U;
    msg.max_depth = 0.128565356492;
    msg.min_altitude = 0.808368076803;
    msg.max_altitude = 0.0332755119404;
    msg.min_speed = 0.92601075606;
    msg.max_speed = 0.725403292094;
    msg.max_vrate = 0.420271223697;
    msg.lat = 0.691150133287;
    msg.lon = 0.853408831105;
    msg.orientation = 0.0851342442456;
    msg.width = 0.693520093128;
    msg.length = 0.454106648986;

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
    msg.setTimeStamp(0.19678685524);
    msg.setSource(40994U);
    msg.setSourceEntity(143U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(99U);
    msg.mask = 177U;
    msg.max_depth = 0.952898022771;
    msg.min_altitude = 0.366245922646;
    msg.max_altitude = 0.325433704218;
    msg.min_speed = 0.991573853935;
    msg.max_speed = 0.10231316973;
    msg.max_vrate = 0.739271457668;
    msg.lat = 0.251496644027;
    msg.lon = 0.147485692664;
    msg.orientation = 0.592688951607;
    msg.width = 0.39171438531;
    msg.length = 0.0713658808586;

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
    msg.setTimeStamp(0.236134076382);
    msg.setSource(21699U);
    msg.setSourceEntity(29U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.173712041717);
    msg.setSource(2545U);
    msg.setSourceEntity(211U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.543858139922);
    msg.setSource(12419U);
    msg.setSourceEntity(109U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.797715692273);
    msg.setSource(43748U);
    msg.setSourceEntity(163U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(77U);
    msg.duration = 34631U;

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
    msg.setTimeStamp(0.63327519677);
    msg.setSource(6841U);
    msg.setSourceEntity(253U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(123U);
    msg.duration = 60514U;

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
    msg.setTimeStamp(0.148110986986);
    msg.setSource(7950U);
    msg.setSourceEntity(242U);
    msg.setDestination(9756U);
    msg.setDestinationEntity(241U);
    msg.duration = 7569U;

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
    msg.setTimeStamp(0.333725675368);
    msg.setSource(17388U);
    msg.setSourceEntity(147U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(114U);
    msg.enable = 183U;
    msg.mask = 277133434U;
    msg.scope_ref = 516785241U;

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
    msg.setTimeStamp(0.0420765132562);
    msg.setSource(39641U);
    msg.setSourceEntity(158U);
    msg.setDestination(16767U);
    msg.setDestinationEntity(149U);
    msg.enable = 22U;
    msg.mask = 2203823496U;
    msg.scope_ref = 2691159715U;

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
    msg.setTimeStamp(0.370829639449);
    msg.setSource(54943U);
    msg.setSourceEntity(207U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(149U);
    msg.enable = 217U;
    msg.mask = 780900523U;
    msg.scope_ref = 1197360305U;

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
    msg.setTimeStamp(0.714510167173);
    msg.setSource(24091U);
    msg.setSourceEntity(215U);
    msg.setDestination(25984U);
    msg.setDestinationEntity(3U);
    msg.medium = 99U;

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
    msg.setTimeStamp(0.323167483569);
    msg.setSource(6005U);
    msg.setSourceEntity(52U);
    msg.setDestination(14718U);
    msg.setDestinationEntity(23U);
    msg.medium = 29U;

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
    msg.setTimeStamp(0.710332014434);
    msg.setSource(20082U);
    msg.setSourceEntity(29U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(171U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.441842551831);
    msg.setSource(47084U);
    msg.setSourceEntity(149U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(10U);
    msg.value = 0.919592738756;
    msg.type = 27U;

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
    msg.setTimeStamp(0.693613142081);
    msg.setSource(55878U);
    msg.setSourceEntity(169U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(6U);
    msg.value = 0.713626387604;
    msg.type = 70U;

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
    msg.setTimeStamp(0.6045102217);
    msg.setSource(11370U);
    msg.setSourceEntity(249U);
    msg.setDestination(2934U);
    msg.setDestinationEntity(23U);
    msg.value = 0.880306177068;
    msg.type = 226U;

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
    msg.setTimeStamp(0.00673070044445);
    msg.setSource(64314U);
    msg.setSourceEntity(33U);
    msg.setDestination(49769U);
    msg.setDestinationEntity(233U);
    msg.possimerr = 0.269921546651;
    msg.converg = 0.432992919269;
    msg.turbulence = 0.213110837505;
    msg.possimmon = 197U;
    msg.commmon = 27U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.912714266541);
    msg.setSource(56464U);
    msg.setSourceEntity(122U);
    msg.setDestination(58401U);
    msg.setDestinationEntity(66U);
    msg.possimerr = 0.207494049123;
    msg.converg = 0.837584525501;
    msg.turbulence = 0.84612229558;
    msg.possimmon = 67U;
    msg.commmon = 101U;
    msg.convergmon = 96U;

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
    msg.setTimeStamp(0.0640482140242);
    msg.setSource(15207U);
    msg.setSourceEntity(117U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(251U);
    msg.possimerr = 0.105750355107;
    msg.converg = 0.525069133959;
    msg.turbulence = 0.886749841406;
    msg.possimmon = 84U;
    msg.commmon = 161U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.86528293559);
    msg.setSource(7325U);
    msg.setSourceEntity(239U);
    msg.setDestination(43753U);
    msg.setDestinationEntity(30U);
    msg.autonomy = 184U;
    msg.mode.assign("PIWINDISRGKGRKDNQMOQHBI");

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
    msg.setTimeStamp(0.924754800091);
    msg.setSource(10429U);
    msg.setSourceEntity(153U);
    msg.setDestination(23882U);
    msg.setDestinationEntity(19U);
    msg.autonomy = 25U;
    msg.mode.assign("VZOUMCKOKPGKYHNQDEODPWEBLQSTQUROZTMTCKXVQKAXVHHCLSCPXYIBLUEKAAAATVKGGIMEIURUJKIQNWBJTVDUXLEEDRMNSLXHBXTRNNMZXHCZXUWSHYJMYHOQXWVJBYKGBREGQKLDNSPFBHOIJWIQJNSCUYLOWYDPTFAWAIVDSZFTFLCTPOHYNGNCLPGFIPCEWVGFXQROBROVDYHZDAFASLRMWWDPZQJS");

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
    msg.setTimeStamp(0.335630390626);
    msg.setSource(12697U);
    msg.setSourceEntity(239U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(222U);
    msg.autonomy = 239U;
    msg.mode.assign("OAXLGYYKECJRSBPBKJKQATRNDJDALUQHBABFEIDABTMTLIQNBHZVSVCZSUJOKKGZPUQHXYXROUWWQFPGBCHRHJMHVXMAKWULWDPCSMWEYBIDIFWFEFOHOGJJJKGTXNUCIPNDZDLTPPLRMDXTAFZFXTCWYLYCINXGBDFGQ");

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
    msg.setTimeStamp(0.41333790509);
    msg.setSource(32976U);
    msg.setSourceEntity(139U);
    msg.setDestination(52253U);
    msg.setDestinationEntity(101U);
    msg.type = 165U;
    msg.op = 97U;
    msg.possimerr = 0.449193631603;
    msg.converg = 0.123429976869;
    msg.turbulence = 0.709037549368;
    msg.possimmon = 74U;
    msg.commmon = 27U;
    msg.convergmon = 67U;

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
    msg.setTimeStamp(0.743091026443);
    msg.setSource(64913U);
    msg.setSourceEntity(213U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(183U);
    msg.type = 142U;
    msg.op = 61U;
    msg.possimerr = 0.0781669530112;
    msg.converg = 0.652744427269;
    msg.turbulence = 0.429748382671;
    msg.possimmon = 216U;
    msg.commmon = 167U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.0346753755501);
    msg.setSource(59029U);
    msg.setSourceEntity(237U);
    msg.setDestination(45505U);
    msg.setDestinationEntity(192U);
    msg.type = 36U;
    msg.op = 247U;
    msg.possimerr = 0.907686337036;
    msg.converg = 0.57279578509;
    msg.turbulence = 0.43984068073;
    msg.possimmon = 203U;
    msg.commmon = 9U;
    msg.convergmon = 164U;

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
    msg.setTimeStamp(0.50459909394);
    msg.setSource(34678U);
    msg.setSourceEntity(195U);
    msg.setDestination(50771U);
    msg.setDestinationEntity(217U);
    msg.op = 35U;
    msg.comm_interface = 123U;
    msg.period = 17625U;
    msg.sys_dst.assign("PQKRVBPGXZRYJVQALEZGNLDWEEEHPXRUIEFEOUGRMAFVUWCJWFPHBYGCXSZCMVYJYYTOMKKIYSWLVDWNNBGUXPRSAEVSTKFQYDUJRKWVMZVQEGPIGNMQODBTHXASZARCXUUKNCMCTGRACNTBFNYSIPTMWILCUOGTXMAVFHFHWDSZBJPHBLIKDCFNUOLQOOKSZYOWKNASMATFJHGZQZTPAJDDDNJLRQTZLCLEX");

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
    msg.setTimeStamp(0.0511778439683);
    msg.setSource(48077U);
    msg.setSourceEntity(20U);
    msg.setDestination(63828U);
    msg.setDestinationEntity(166U);
    msg.op = 87U;
    msg.comm_interface = 65U;
    msg.period = 63939U;
    msg.sys_dst.assign("FGAUODADSOBVTPZMIOTIHURZBWWEUSOTWSZLVRNCWDCLLAMNBGYSHKVYSEWFTONXEOLRCXUORTIXPQSDPFKWKEHAJFZYGYKXNYUDNUHNPENZJDDPRGQLTOJEGJYJYIM");

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
    msg.setTimeStamp(0.172338485854);
    msg.setSource(18499U);
    msg.setSourceEntity(48U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(169U);
    msg.op = 156U;
    msg.comm_interface = 105U;
    msg.period = 35166U;
    msg.sys_dst.assign("MYEFCVXIBDRHGMHZANXULLSVGLVHHIWGCQQUUEIXQONIXSUPAZCJJGDTRQTSYMTWOZNASXMTGIBEBMWYTNYDSKJVQSWQOVAGEOKHBCKRQPYMIDORYXUWIYSKPEAPJKLLJHPAORRTKRSLMPZCFBPUJZFFBQVYXBCNBLJGUODOFUDDVWMEZWRKVTFAHNHGTLTWDMXQQDFFCKAAVNBEZZVIFJTCUHXEXCECMJRGNDZJLFHYNSPO");

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
    msg.setTimeStamp(0.155383178827);
    msg.setSource(9720U);
    msg.setSourceEntity(135U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(32U);
    msg.stime = 1990533003U;
    msg.latitude = 0.342118479063;
    msg.longitude = 0.882235635381;
    msg.altitude = 61691U;
    msg.depth = 12322U;
    msg.heading = 36895U;
    msg.speed = 30929;
    msg.fuel = 85;
    msg.exec_state = 109;
    msg.plan_checksum = 1562U;

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
    msg.setTimeStamp(0.729042225704);
    msg.setSource(2058U);
    msg.setSourceEntity(158U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(102U);
    msg.stime = 2023715508U;
    msg.latitude = 0.177289268028;
    msg.longitude = 0.695750053569;
    msg.altitude = 39527U;
    msg.depth = 15761U;
    msg.heading = 37464U;
    msg.speed = -12240;
    msg.fuel = 108;
    msg.exec_state = -20;
    msg.plan_checksum = 36648U;

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
    msg.setTimeStamp(0.398164664831);
    msg.setSource(54022U);
    msg.setSourceEntity(57U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(206U);
    msg.stime = 3343485032U;
    msg.latitude = 0.093884730457;
    msg.longitude = 0.57014596447;
    msg.altitude = 2161U;
    msg.depth = 212U;
    msg.heading = 14224U;
    msg.speed = -1134;
    msg.fuel = -121;
    msg.exec_state = 75;
    msg.plan_checksum = 45995U;

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
    msg.setTimeStamp(0.368150435243);
    msg.setSource(35183U);
    msg.setSourceEntity(47U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(134U);
    msg.req_id = 57042U;
    msg.comm_mean = 151U;
    msg.destination.assign("OVFCQASVGIMWTFDKSKMKEBGWTAIWFNPZJYVQAJGJBRQUHDFGOSNLHUBSOFSPLLLTMFWWQLDBLPFGGYTXQYPYQHOUGVIKVCWOAQEIUOCVOBMQWDCLWEDIQIPJCPRKJGYXRBNAADZIIXXRZVGYATZJOSMPZBCNHZRNXMACJEGMXIKRJCAJKULEPSDTCQRZYMNKFSAXVTUBZETYEXNWHKUHRLHHETJFZDFXEPHMUNZNYLBUVHR");
    msg.deadline = 0.240476128301;
    msg.data_mode = 196U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.0755076522157;
    tmp_msg_0.lon = 0.273852919315;
    tmp_msg_0.z = 0.556208280579;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.radius = 0.965889738283;
    tmp_msg_0.duration = 50676U;
    tmp_msg_0.speed = 0.0929856926735;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.custom.assign("HCGBOLFFWZMHZZQEHINJRDDNPPBQEOQLGTKRNSJETVVCHBINWUOJXMAQOYASSCQRQSKOYNENUFWXKIQHPYCKVTDHDUKAVLZKPBXHMWALJWVGGVUYFBYYOYSBTGSRLMVODHBTWQOFMPZPXXE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XHPXZDPIZYYOR");
    const char tmp_msg_1[] = {-40, 75, 89, 29, -70, -105, -11, 65, -40, -113, -128, -73, 118, -19, -23, 82, 87, -3, -113, -24, 23, -68, 65, 7, 63, 84, 110, -106, 126, -115, 117, -93, 92, -82, 0, 125, -106, 119, 57, 116, 94, 67, -79, 49, -33, -70, -66, 119, -105, 30, 106, 6, -57, 10, 115, -52, 64, -30, 52, 26, -78, -128, -12, 110, -99, -32, -54, -16, 56, 75, 46, -100, -37, -73, -112, -90, 123, -104, 37, 20, -113, -125, 75, 24, 112, -121, 93, 83, 37, 34, -121, -49, -60, -112, 71, 113, 33, 114, -27, 0, -82, -87, -11, -9, 84, -96, -111, -75, -36, -87, 0, 119, 115, 72, 42};
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
    msg.setTimeStamp(0.521914365031);
    msg.setSource(28545U);
    msg.setSourceEntity(15U);
    msg.setDestination(48415U);
    msg.setDestinationEntity(201U);
    msg.req_id = 25198U;
    msg.comm_mean = 185U;
    msg.destination.assign("BXDUBJZWBZIEWOOMVHCYNZBKBYZGWAAFYESSODEVLASMLGWTGRSFKVSQNUEUCLYFJAHRRNPXZVYSAMHKEROYMUJHYNFZIVRCKIXMNDJRPGGPUXZTICHERCQLZDXDXKRTWGWQIVEMGNSIHKCXXWPDMNYZHQVLYXJIPOKPWCFCOJMVUWHKSERNOCDOKPAKQQBHEDDBUMQOXUTVLPJTQFFIGBGZJVNTTQD");
    msg.deadline = 0.739696680183;
    msg.data_mode = 64U;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 67U;
    tmp_msg_0.comm_interface = 195U;
    tmp_msg_0.period = 24493U;
    tmp_msg_0.sys_dst.assign("RGUERULYQLAIIYFWWTXGCSXLUOZZFWHBVBQITOOCUAPUNBQVDCHFEHKESSJAXXINXOHDNXFZYEVPCBANFTQFKLQBKPDLQPHJBRTZWHGAABNDTYUKDYVVSTNXWHIRWGTMSMMHYWSFOVKMEPZCRXFNRGRWAAOJKEBIDZLCVRGMYZMMXJIMOLPNGQFHUCPHKJTZNRMQYJZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KBSPMRUGYVQKWMQHPDZTBLBTNSBOAVXVCAYYRWGLLVLLOCZXXZYXNECWRGQSNQJRLFCUKNDIHPPZHPUNZHEKQJBWRORVJJPHJKZTYHVYWMLCBEIUGUAXDWDVMMF");
    const char tmp_msg_1[] = {-42, 3, -104, -127, 42, -103, -2, 82, -16, 87, 34, 113, -63, -29, 25, -114, 110, -76, 80, 63, -45, -114, 114, 116, -22, 87, 98, -104, 122, -128, -28, -59, -65, -10, 11, 114, -97, 99, 68, -21, -73, 34, 97, -59, -50, -41, -30, -125, 11, -86, -96, -28, -46, 82, 84, -78, -126, -109, 0, -14, 86, -112, -38, 14, 68};
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
    msg.setTimeStamp(0.0310881678233);
    msg.setSource(19057U);
    msg.setSourceEntity(65U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(97U);
    msg.req_id = 6273U;
    msg.comm_mean = 57U;
    msg.destination.assign("ZERSILMPCAAGWOJZXKBS");
    msg.deadline = 0.664364368501;
    msg.data_mode = 106U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PPSMQNWNXVKSYVNHGDUQWRPKQLZXIUZFZELIDINSNRAKEHIUJBDWYJGOMEIHPKVHNWOBSOEZZWTYIYGLOZEEYFIUCXQVCRLVRTCTYFKGUPOAMLXPBAPSMEKHMQSVGSHTWBBYTANJHIALOUCPDHTEAMZJWJGXYNFBXVTRDCHAFDSR");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XMXDRIHUWKIMEBRTIJFTKTGJVDPFMQHLWYDFDPWADOGALCRAYKNRZLQPBXYUSMTBEOLLGHVNMC");
    const char tmp_msg_1[] = {110, 17, -101, 25, 109, -125, 116, -51, 55, -20, -68, 86, -59, 111, 21, -86, -31, 77, -69, -100, -13, -118, -99, -86, -108, -66, -87, 50, 92, 96, -59, -119, -105, 80, -69, 9, -22, -23, 71, 98, 31, -44, -6, -21, 72, 19, 115, 59, -75, 69, -105, -86, 125, -121, 121, -83};
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
    msg.setTimeStamp(0.0444702792912);
    msg.setSource(24995U);
    msg.setSourceEntity(167U);
    msg.setDestination(40825U);
    msg.setDestinationEntity(93U);
    msg.req_id = 41104U;
    msg.status = 122U;
    msg.info.assign("RNSMKWCTMWNKUFPMMLBVXHCWXBHUTQEKQCENQTYJNDAAFOAUPCBRPQZNWITTFWKMADXMEDIADDQXYYXIRSPPZIRMOFLURLBTERTNHEXHZDVBHGMKZOZCFOOMVQLESWGFKUVVHBFPYELJASSHUOEHZAGVGBLUWONWDKZADPWGXJOCJL");

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
    msg.setTimeStamp(0.862801669113);
    msg.setSource(9806U);
    msg.setSourceEntity(249U);
    msg.setDestination(18229U);
    msg.setDestinationEntity(17U);
    msg.req_id = 8428U;
    msg.status = 130U;
    msg.info.assign("QQXWFSIPSLKLVVQUCCSGESYBWMKLUFKCMABMOFIXGQVDTJZGKUTBYTRWFTZPBNXYXPVIJIHWUEJXFBDJEQYZDILICGGXAWPVIMSVYGVXALOGHLZOOWWPTNIMNVHGJNTKQWCDVAAW");

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
    msg.setTimeStamp(0.769820057837);
    msg.setSource(3763U);
    msg.setSourceEntity(18U);
    msg.setDestination(35667U);
    msg.setDestinationEntity(124U);
    msg.req_id = 52776U;
    msg.status = 121U;
    msg.info.assign("MBOBGEKBAAQGPGZJLFSHSSZDOZNCBDFNIXXODXFKXVFAVPCURUHVRYBPHGPPCMHQLGIAUHJGVE");

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
    msg.setTimeStamp(0.776126218538);
    msg.setSource(30782U);
    msg.setSourceEntity(47U);
    msg.setDestination(63795U);
    msg.setDestinationEntity(117U);
    msg.req_id = 57558U;
    msg.destination.assign("EMOQALRXSKXFDJFAMCNZLCEKEFPCBNWJQZWISGVFCSKFYTVPVPDVKCRWAPTICYTPZVIFSDHBHZBWAENHUKXIQDXREBZGUXPZNOVJYJTKQLOASRZSVBSKTROIXQUYXUMBFGUHHLRAWILVJNSNYWDASCXUNMGGTTMDIWTCKYNMWQKOIWWE");
    msg.timeout = 0.969210636613;
    msg.sms_text.assign("XERAWCRZAXPTVCBKJTYCJDQEBGWYDKRAQSOQMIDKHFZXVPDMSHHADBJMLJPSSYBPRKHSFEAVZDOUDTLIPNYCLERBTFGVJGOEUQODXMNOLQFCBMQUIWFGYZSGVJTKHXKTIGMAPVTSUQGMFOUNIKPNAVKWTVRYJNZHYNMWJOQAIHDRZHCEUQELXSRYYOFRMOWUEHPZEXLCVXJPIEIBAULSNKPBQWFCIWXLVNONKCNZFZGFLTRJGY");

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
    msg.setTimeStamp(0.624980883907);
    msg.setSource(58468U);
    msg.setSourceEntity(13U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(9U);
    msg.req_id = 10655U;
    msg.destination.assign("JIUYXYFHIZKAHWKYRVHEYCTZAAFDPCEMPJGKZHUXIDSMDTMGGONVHETUQEWFTBKBIIDUHBUEMGNFBKOIEXDPAQSJRSRVJZAJWCMDVUGW");
    msg.timeout = 0.0708132338831;
    msg.sms_text.assign("VHVVMPVTKZRGFFMZMKTLBKRWMLFQUIOGBHEVGYXAKWYBNTPINLYDAINEDTPDKWBJDXCMUTRNGUOYMDCETFCDABALNKXANJDMSKOCJJMWWUUISRGJQCNQQSXZUQEHGBEZVTJAIPEYLJWVTQRBNGWIPESTQYGLYFGLZXSYQFDDCIHJAPVIEMHZOVESLDIIOKRFUYTQVWMWZAPXWXZNFJOCLOHSOHEFLCFHQKUSOHNZPHXPASSZPRRYUXXBOKRBB");

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
    msg.setTimeStamp(0.670937392828);
    msg.setSource(53076U);
    msg.setSourceEntity(62U);
    msg.setDestination(5934U);
    msg.setDestinationEntity(6U);
    msg.req_id = 57104U;
    msg.destination.assign("XNRZJZXCQPEKTFKIYURRNUMKHGFJCXUYBHVWXHBJLDSJRIRJLIIMNTZEPNMUXMQKCNBTTZSTKTOWHBWHOQFS");
    msg.timeout = 0.556315759231;
    msg.sms_text.assign("LEULFZBBQBDGWTTM");

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
    msg.setTimeStamp(0.133097108972);
    msg.setSource(48349U);
    msg.setSourceEntity(41U);
    msg.setDestination(14168U);
    msg.setDestinationEntity(3U);
    msg.req_id = 32964U;
    msg.status = 141U;
    msg.info.assign("HYMCCLWQIGHIXATZBXLBVPLZZNKTXYRQWNYFODMDHPEYPMEXNRIUCKHFRQSRINLOHMAVEWUAOJKLINRTMSWPDDKALKP");

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
    msg.setTimeStamp(0.182575836131);
    msg.setSource(15045U);
    msg.setSourceEntity(217U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(244U);
    msg.req_id = 16390U;
    msg.status = 130U;
    msg.info.assign("NELVCYQUSKVHEXDIGOGBJRECAUFAZJYSYFEGDTTZDKWBBTIAVODDSWIWPAPSLRWLXKJCRRCXQFZMNIDXNLSZUDKTUTFNOKMFZIAXPBAARACLQVQXLJJKHBPWGBGGNVVJNGW");

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
    msg.setTimeStamp(0.89845612727);
    msg.setSource(51361U);
    msg.setSourceEntity(65U);
    msg.setDestination(33285U);
    msg.setDestinationEntity(31U);
    msg.req_id = 2242U;
    msg.status = 254U;
    msg.info.assign("SXCAESTDNEEQQZYEZWZBNVKPHVFWNMWATLRSYWBSWXEFJVEMRGLUCFXZPRHGNPJTSORMZYTOMBNYAGXZELLDFUTTMTCOZMLNKZOHGHOXLGDKWVTLKPYIKDIVCOADAYWBWZVGQOMKDMQJOAMVARGMSUNNXHKSHUJUPPHJIOFVYIDIBIBQZUQFGJWBKPFUCRNAPRUPDSUQJYDPIIXVTRLYCQWFQGAERHLOFTAIL");

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
    msg.setTimeStamp(0.302184595266);
    msg.setSource(12130U);
    msg.setSourceEntity(148U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(31U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.554938086056);
    msg.setSource(14291U);
    msg.setSourceEntity(17U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(36U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.0858581087123);
    msg.setSource(1386U);
    msg.setSourceEntity(185U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(156U);
    msg.state = 206U;

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
    msg.setTimeStamp(0.0894807953476);
    msg.setSource(33437U);
    msg.setSourceEntity(155U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(143U);
    msg.state = 127U;

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
    msg.setTimeStamp(0.0577260933179);
    msg.setSource(63118U);
    msg.setSourceEntity(155U);
    msg.setDestination(28783U);
    msg.setDestinationEntity(46U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.167512110964);
    msg.setSource(30366U);
    msg.setSourceEntity(120U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(223U);
    msg.state = 209U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.440698706853);
    msg.setSource(17455U);
    msg.setSourceEntity(169U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.156124793039);
    msg.setSource(36216U);
    msg.setSourceEntity(101U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.55029095561);
    msg.setSource(13168U);
    msg.setSourceEntity(109U);
    msg.setDestination(19184U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.443840244394);
    msg.setSource(37573U);
    msg.setSourceEntity(42U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("ZJGUCEDFSPLGHKNADIDUWUEIJLQRMXIOKWZBJYPFKQMKMNIXRWQORCHSEHOHGUGTGWXHPIUYROMMPCBVCOAZHRELI");
    msg.description.assign("UAFCFGEBZIQXHDES");
    msg.vnamespace.assign("HGTBIPUFTZJLQWWAZWLPTFPVRJQVYRMBUGDSAQQWUTYCGALIZJHQLJHEAGUHRRISBXNMIALHWGNJYYHOXPJKQNCNESOHOOMXARXSGDJWPKXMGWVYCEFIFNCDWDCWUYRFUJDKIYEGSMCMBZIANERDT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HTTJWRBXCA");
    tmp_msg_0.value.assign("ZLASPXUYBPNIJLEGLUDZZOCOKVKPHRCADBRAGDDXSBXDVFZMWPMGBBSQHYUNNTCXHEKNSWUZCITFWIDIPEVSMIFLYRICMHUQZJDTLESVNJGQWZYCAYKVQMELYSYRCPWQBITIUBBAHLYZHPRFMWCGOVTXGEJHGRSEIJNQXOFJFWMXHDOOTGQHABEPTVO");
    tmp_msg_0.type = 44U;
    tmp_msg_0.access = 73U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PUCPODZVSPRVEVQOOYJRLYWRGHOABKXYRLIQOMUTCXOGLKVNJZISYSZDMDDMLCRAXGXTAUIIZDCXQYJIOBMCXJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JQCZDPZJAWOJTYLWINUHKSNUTGVQIEBLMBIGAOKXTKYUXOVZVDSEOKSVFMMFWHBDTDITXJSRRWKJGQDXMTAKNWHMMSQGHQJRLXFNSAEGRHZDZSLNLWUIHALACJPKXGLRFRDDZCRQXQYFQGKVEYERCCCFCHYBREZNABCLZPQUYUVEHPYGFOACYHOJNPTUOGKPCAIGIIATSWUPOVNBSBTBPNPKLNIDW");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsRx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.source.assign("RXFZMCAKRYBWKJVJHNCFCJZONQVVWECQKBKARMMBQLYWEUIOGXUTDPDHAIMEFVKDIASYNRYLPYSDBZZSVCCLZZJAJVYJUFNOBXPIYUSXCSATPLBMFHOWZJGGEWDKXCIYHRNDMEGBWUSMDSJXVTGPHZRQHDZQLANMKVNCTWYEFOVHAXQWTPPAZ");
    const char tmp_tmp_tmp_msg_1_1_0[] = {82, 105, 18, -27, 48, 75, 55, -75, 116, 37, 55, -39, 123, 85, -25, 99, 100, -92, 72, 123, 55, -103, 75, 126, 29, -56, -20, 15, 110, 89, -59, -60, -113, 53, -108, 51, 112, -12, -58, -58, -55, -64, 64, -108, 105, -37, 54, -124, 51, 28, 37, 66, 30, -113, -80, -124, -79, -31, 80, 43, 76, 42, 86, -92, 103, 86, 105, -86, -29, -71, -101, -17, -51, -21, 105, -39, -99, 96, 119, -97, 82, -11, 121, 52, -104, -123, -10, -117, 91, -9, 105, 62, -78, -106, -70, -26, 71, 48, 70, -64, -96, -27, 68, -31, 52, 55, 23, -12, 35, 16, -65, 61, -82, -9, -21, -117, -81, -45, -117, 41, -58, 50, -70, -57, -69, 72, -27, 53, -39, -96, -69, 82, 87, -43, -69, 36, 20, 44, -91, -84, 14, 38, -116, -52, -29, -111, 68, -120, -31, 6, -67, 29, -106, 18, 70, 115, 116, 117, 45, 78, -107, -112, -39, -105, 124, 122, 65, 3, -12, 44, 3, -80, -66, -91, -117, 122, -13, -30, -94, -82, 11, -118, 82, -19, 27, 75, -41, 2, 25, 78, 41, -83, -57, -74, -117, -51, 77, 5, -89, -1, -14, 62, -14, -32, -23, -120, 84, 36, -79, -65, -72, 43, 60, 22, 36, 4, 13, -95, 36, 15, -12, -46, -122, 22, -112, 3, -77, -41, 124, -35, 97, 103, 88, 68, -10, 51, -121, 20, -54, -23, -41, 54, -4, 123, -1, -92, -12, -118, 24, -39, 103, -54, -31};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("JYJEKRDLWYSUEUAVZBBGUQCNRILMLSZGFHMOVSBEDT");
    tmp_msg_2.dest_man.assign("QORQMRDZEBMFJSHGCSYWKWUSDPXQLYEQBTEZYLYGNGEVZMYDRAUFKVFZJN");
    tmp_msg_2.conditions.assign("OPSNMWTILZEDSGAXCWGHVQPVZLRUAKVYULDSGWLLJRWBONCBJQAIFCGOQDUBVJKXDDPQIBCGPKYZZHQFKHN");
    IMC::UsblFix tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.target = 2099U;
    tmp_tmp_msg_2_0.lat = 0.288529850193;
    tmp_tmp_msg_2_0.lon = 0.281951407918;
    tmp_tmp_msg_2_0.z_units = 48U;
    tmp_tmp_msg_2_0.z = 0.45455074122;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::DevDataText tmp_msg_3;
    tmp_msg_3.value.assign("CKAOGISHUOKNDZHSTKSAVVLZHWLNNAPFMNMXKBFVZNALZRNBBLSRIYHIFJTRC");
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.698650654494);
    msg.setSource(34750U);
    msg.setSourceEntity(211U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("PQZIDTACFNHPSAGMNRZKPRISTGHCMQBLLGCQRDUOZURIZTYGFICSURDKXZLEEFQWVWCAW");
    msg.description.assign("OZZANCUBEJDVHKZGXWACUCFRMOJLNBYXNDIFRBMVCETJTBEIYDYJUTSGIBNMKCYLLDJHPDMMSSYIMDWOHGYITFIGDQJLPAZSORXHUQXXWZJSXDZGHEXMUXGGPKJPWLWTTAAEUKKLRQFFLHKZVPBFICOWRBPHVWUTJSTNUPIWNGCEV");
    msg.vnamespace.assign("CZSBCPRNEADIOFAKLAAEQINWZPMEZJKJCFUVHDKFDJPSTJEWZPDLGQGGHTIJSHUKSTCKBIWBAWRPXFDQFHAYTQXYAVYSINVUGEQXQLL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XRNCWAAFGRFQWPCVDPAQHYIKJHRVNXHUQHLEZTFKWMTPLDQUGBGTNORIEVGKLPJPMAXYJKCNWJNKFHTNYBYHLVHAVQGMXNAFZXPQVUIZESKBFGCCIZUVASUDYMLBTHYKQMIXBZTEQDEBDVNJGCWQRTKSB");
    tmp_msg_0.value.assign("TMOBLQTODDEMWXSQBZUCWIHOQDCYQXMXRSZAYAPFDUVBRHMIOHPVEKEFLFREWGLPOOBGIIVLNKRZAZSYYMBIVNYOQNBAFEPDKKBHFSPGMVSBPEUEKMWJNTJGMLXIEFMJAOFYHPLGUZRQUCPRITUDRZQDQHKIUJCDFXKJJOWCVSDTTAKEQZGLPKHURJVOYRARHDNWVNNXVWGWFLCXAJGEZHMTSSWIBSYGTWXUJVXCKCCNHJZY");
    tmp_msg_0.type = 203U;
    tmp_msg_0.access = 253U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PCYMRDVQNXGQFEMBGOHODIJAHCMTLIAIMTSORAKPCILTGFMBHIUEVVWJFJZLFODWXQJBUZGTGVUGUCYIKKMWSNRZATNOUEPHMLGAUKEEDROCFHLJSYUZIFSRRNYRDAEHSCLMGRVXKBOVVMKXTFUQYKIPNRNXDWQHVOWXXZGDMJSIPHEEWCTKSPTPTVSAZSBLFJUJAFPQYFHNZPGTCZAEWQWQQWZHELXADBKBBIVDLBLCBYOYWXPDYJSNXNQZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IKBTUOVFBCVYJNDJLNFTVQWBMFRTHPYPQLFZMXHDWWFSBIQWIJHCJKEMVBRVVRQLSAIOZYIHBNDZFXVUXCZSAAGEKQMLVCUPNGZJRDWJBUYALDTPAFQANSPTGWURIKJZTMYCWQLTTDHAGEGDCHOHOXGQUNAPUVHAPIGMLPSUIREKYXSRKGHKIKANOXZYZCBLECMNDTJXWIQB");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("YGAJYREAAWFFSYDXPPYUCCRFNPNGNGQUOEVOMOFDOIUUDMPEHKODBMGXMRCVSPIBVXRLEUTLQFQCWAKUIWBPQZHJSSRTXSDQVVQJYNEOMVWEWWMJQWJBTJDHNYDDANQIPQUTIXGYJLTOUFPUYZJILOZKRIKSZACXQHJAGCVHSFHTCEZGWXKGNYROKZAMIBMMPKZVVCRLDSEVKXNKLLNZXFMRTBAILZHDTFCLKHWSRXGUGZLICYB");
    tmp_tmp_msg_1_0.formation_name.assign("YZQJHKBUQDWQHGOLZFBQEUXABGZDSRTXJEKVZQXHFVZZYNASIMTZTFPTHGYDGLQCYYNJPCWTAHYJBCWJWEYEXASAJXLXUZPTKWDHOUNRRBYQONLSPPBKRDUWMVNTUWJYONURRAPIMWLEVELDPIKAVIMQNSILCCVOFYQOSOCMIGRUKFRGTRIBLOJPPCICZHUAVGCD");
    tmp_tmp_msg_1_0.plan_id.assign("FJTHOUBZYDQSHWFTCEHGTXXQLPVPWCRFOFYGEXYIQRQVHJLDDPWDRGGJNRUHNECMTSAXCNQBIMGUDOZCVQGNVBCLMBJAYZKQAOHIVNCTEMLMDZXIHT");
    tmp_tmp_msg_1_0.description.assign("VPAYHSYKCCMAALQNBHPURNWVJUWOTKOITJJEMKQNBXFEINCKVXWOEOTVFNZGVZMWHKNCZPBMXEKCREGJYEQUVXRDBCTWLNPSUWYQXIZHYAVILOULITMYDKGINLMVPZLDMCWBDAIYOJHVLTRHDTGGZJDUBSMTZXSKURTBZPHKFGFHAZPDRSUJIEOPQOIQHAGMJYQBYZEXOLCXFMWAHGGQJXLEPQTSXFWPFKDAULSSRASJNRRYQBUSCNFBRIVWGO");
    tmp_tmp_msg_1_0.leader_speed = 0.869162271774;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.685786468707;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.540453055319;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.825073148411;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 50339U;
    tmp_tmp_msg_1_0.converg_max = 0.914406564882;
    tmp_tmp_msg_1_0.converg_timeout = 19522U;
    tmp_tmp_msg_1_0.comms_timeout = 24670U;
    tmp_tmp_msg_1_0.turb_lim = 0.863385957944;
    tmp_tmp_msg_1_0.custom.assign("HKJMMMBOEIRLGFIYCYDKJHLYVNTEQPZQOYWTUXOZUILTDRQZBFIKAHKFSOAJYOCHLUGUNBUNFUXRBKVMXWPFJRNSHGWEHFXQQDGPNIUTSZKMBUSSCSYYLFPNLJLRXCXIRYGVBACENTOPIZOJJLWCZTPBGXKKBVDPWVDDJMVEHESAJSVDA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("PJTVVFSFFELTVQUNNRQMQGMPTPZKWSQTPDBGILNKAHGQQDIDOHARYLEHSEBANXSUQCDCDCNOULYWOTHMVJKQFRLZBYSSRVXYWPNJGGZORZUOZXKMJXWYBKLCCAOTXKKKRZWECJWBLOFXILMMKANZOLZYUTPEYSBEFSVIXMKM");
    tmp_msg_2.dest_man.assign("TOAXIDRZYJMMWOSFLOLKUXWKQEUFITVOQLUEHFJCIVEFCPAQAATGGVFIWJZSVGIQHVZBTYXSTANRNPKRWUSEXYKDMNQDGULMXMTCOYBCKQPCATRPCYQEIPERFIZOHBNWSRDVNXEPJWUXULGLLROIARPUGICXJXYDVHCIRGZHOJXHFHWWQFRYZWYCQBBUDDNBOBVELLWSESYFSGAGNDMTFB");
    tmp_msg_2.conditions.assign("FDYZHLNMEIBZPVCARXQMGZGSHKGXZUNAIFRVEYZOJBIIHBYXAWSXPAQRJADUDVKRDGTQWZSPYQCBXFQZUCMKJHTBGJ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::UamTxFrame tmp_msg_3;
    tmp_msg_3.seq = 47425U;
    tmp_msg_3.sys_dst.assign("NSDMXQBSMKHFGXVHYDCQGGWYILPRFCRSEJFDUGFKPBFFNPRZMKZYSWDTLLBOYYRNACDCECPOLHAFBJEZZDQVPBUTTDGFZJZRXFTJXCPWQBTCCEZJEBWYSPLMTUXXKXVAIXINBIOTUAB");
    tmp_msg_3.flags = 47U;
    const char tmp_tmp_msg_3_0[] = {-79, 40, -98, -14, 3, 47, -79, 106, -35, -14, 64, 47, -126, 102, -51, -114, -28, 12, -91, 119, 41, -83, -47, -109, -11, -30, -7, 96, -55, -44, -35, 80, -96, -60, 98, 31, -94, 108, 35, 2, 102, -101, -43, -32, 60, -69, 102, -123, -68, -45, 31, 114, -80, -47, 62, -53, 36, 13, 74, 7, -19, 5, -76, -84, 27, 25, 122, -9, 119, -12, -126, 51, -7, 104, -24, -109, 117, -49, -57, 21, 87, -60, -44, -71, -26, 77, 77};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);
    IMC::ControlParcel tmp_msg_4;
    tmp_msg_4.p = 0.622032110546;
    tmp_msg_4.i = 0.426531750373;
    tmp_msg_4.d = 0.187653038432;
    tmp_msg_4.a = 0.769848852382;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.894290333405);
    msg.setSource(13854U);
    msg.setSourceEntity(143U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("RCWQLMSRQKTYJR");
    msg.description.assign("VWMBLQUDWAXXPRCTZPUFOUMDFOBFVITNYZEZGWYJKLYIRHYHUYFLIDAERKSCTUBGNESDNUDAQNXVKDOIIMKLTGOXHPGIGEXOYSXGBFVFQPTTSZNBXDPOMEBOJGSHSKOKSBAWFUMQLZWCIKTCEAYJMUGWZLPSDCQJF");
    msg.vnamespace.assign("FJCKLPAOOERMLXESCLXGNFKHQZLOMLMTRMQGFDKKAAELSCPVETUOIBFAWHBRAEEVDIRVHMJRATUWINXYJLPHAFBHXDZQQKYRUHVHWZGCJBPSYUXJIYQAIISGTJXZOQFSCTHDRZHQMOBWXPZHCKQWGUYNIPIWWQNTSMRGKNNNUGZOVBZEFUZYPISKW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AMUGGAUPANNEAEJIKPJDMSFHBIWLRYLQHDZKCIWMQSQDKNIKBUOROQZUPVOGJXNRIGXMDSRDERZVKZQOATGEXVSFFNXNPNDQSKYHLBACVYSBBGMTLMEYZHFXIOZOYSC");
    tmp_msg_0.value.assign("PIPLNFNONYCLMCCIVYRTKKNQPVHATWOULNUKXXXTONLHWKJNEXBAFDJDOFMKSOZCABUVRVPPGCWZLSAHQGQVFO");
    tmp_msg_0.type = 35U;
    tmp_msg_0.access = 125U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BZKTNQAAXBKDZEYLTVROKPHZNZHAR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HYOZKAEJVSYHDUFYABXTMVFUVGPOWDFSAMXCTYLXONHRFGKMEBRDSMLQCBWQZQZUHTBGSPBEVANNHDNTOBRGXKVHVQKSCPICEGOLLRYTFRIZSPYFWQQACBMFULIVWRNJEZEQTNFOGISDMVWNDIGPJTDTCOZHBLAKWWA");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.897692887186;
    tmp_tmp_msg_1_0.lon = 0.338798516326;
    tmp_tmp_msg_1_0.z = 0.0947391601201;
    tmp_tmp_msg_1_0.z_units = 31U;
    tmp_tmp_msg_1_0.speed = 0.0624413582984;
    tmp_tmp_msg_1_0.speed_units = 32U;
    tmp_tmp_msg_1_0.start_time = 0.31098999123;
    tmp_tmp_msg_1_0.custom.assign("NKQTPMOARQJPAICTOJOGXJVSTQAZSBAMYOMHDLXJADBVVIWFHERKIQOTVISSJVKYYWEBWYQEZEACHFZIQRYCHRGDYBNRNQJFWPXCBKMQZJUZUFMDWEORAEAY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UsblFix tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.target = 11428U;
    tmp_tmp_msg_1_1.lat = 0.636366809462;
    tmp_tmp_msg_1_1.lon = 0.672082611456;
    tmp_tmp_msg_1_1.z_units = 180U;
    tmp_tmp_msg_1_1.z = 0.643054761621;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CUZFSEIMRTPSBRQWOVFKXSXROOPCHNHPKGVYMXDGZATKOVVZBEZEVPLJXGTLRSVJWFLIUJOANDOSLPUVHKHNNFHTOQLWDMEHZJPUSAOYUFNBAHGVCMYWWMKIQTXZFPDEJBCBJEIAAIBENPFLSQTBKFHNAYUCBLUMXLXLVWFNIQZPBKGLGDCERRKEGYDYZRQGSSQIYTW");
    tmp_msg_2.dest_man.assign("BKKTOVJPYNPBJLPEAIDVZCHAQGRUTDICXWSEVVEWJICFPAWGMBYGV");
    tmp_msg_2.conditions.assign("XWZBFKNDFWGGZREINEFCMRJTMOCKLN");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.2711653668);
    msg.setSource(50724U);
    msg.setSourceEntity(38U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(115U);
    msg.maneuver_id.assign("UQCKUOIZAVSPBMTKPFDLNHHAJQKOLYCKMFSREKYJOZEPWYHTZCBGNQEELJNTMEGXCJITYQTDFVFJHAAWIDFQMPPSWRXRPXBWAEMCSRQMADHSYTJPVXLDORJXKQSIWRGTKNVETQUXNZGMLSDSBIGNAVBHBDWOHGWRGYZEHZXHFNRLVFRUVAWIMLUOPWNYOZHYIIOOPUDZIZCUIV");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 9093U;
    tmp_msg_0.lat = 0.861234780746;
    tmp_msg_0.lon = 0.95249080688;
    tmp_msg_0.z = 0.740989565301;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.speed = 0.553386781389;
    tmp_msg_0.speed_units = 61U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.270537842775;
    tmp_tmp_msg_0_0.y = 0.479943208398;
    tmp_tmp_msg_0_0.z = 0.372137222627;
    tmp_tmp_msg_0_0.t = 0.419472532294;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YJEJOEAWRSDMHGXGFNUDPJEHICYSPEFTLQMDRKVEXSSQUMCRPKUJIAZWFORTYOXIPHYHZCPDPABNEKDZDZQFMOTBNAMCPGNUGVWQDBXWOIZADIEVKFLMDBBXS");
    msg.data.set(tmp_msg_0);
    IMC::ScheduledGoto tmp_msg_1;
    tmp_msg_1.arrival_time = 0.0632858129118;
    tmp_msg_1.lat = 0.944045515993;
    tmp_msg_1.lon = 0.481487409159;
    tmp_msg_1.z = 0.188733348178;
    tmp_msg_1.z_units = 14U;
    tmp_msg_1.travel_z = 0.593500926861;
    tmp_msg_1.travel_z_units = 53U;
    tmp_msg_1.delayed = 132U;
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
    msg.setTimeStamp(0.712149731588);
    msg.setSource(28183U);
    msg.setSourceEntity(137U);
    msg.setDestination(24804U);
    msg.setDestinationEntity(167U);
    msg.maneuver_id.assign("INIJYAOBMMOTPNPWNMDGPDYAFXLUXSIFVIJLWZNRHUOKCHABBFVRAFCHKUSYXXIPHCHRBBHGKKYNVDCQLOZJVTQJJZNIDDSRGDERDECRVZBMFVMQTTSWUQMKBSHTQIZTYORWUCQFAEDGHJNBORWVLECGMIXTVZFOTOPNUSTPEVCBAUANGJWZIQLARCPPQXMBJGHWGEQIPEEJKYSJFYXULLMZKKUQAFDAXXKOTKHLVRGDSWLENZESGWW");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.0624210926208;
    tmp_msg_0.lon = 0.626119155185;
    tmp_msg_0.z = 0.856884365408;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.radius = 0.955113632217;
    tmp_msg_0.duration = 14743U;
    tmp_msg_0.speed = 0.182385122851;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.custom.assign("EAZHTNPRDFOXRLZEPUWTUBPVHCUINWJGCTLIXJNZKMMSPCEYKYGDXDSHMHAIGXCVAMMUASQWFEWJBXZSAHFXHCQOBRCLIQUODOZPEOMCBAZVJONRMTLXVPYIQJVEYKORDGJTIYTEKWFPGONDHTYZQFYIYCGUGDNQVUQLQKWHBKVSVALKQZEOGGYJBLRUBWHXJLPBPSNWFPDLN");
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
    msg.setTimeStamp(0.11767392614);
    msg.setSource(44639U);
    msg.setSourceEntity(0U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(71U);
    msg.maneuver_id.assign("CCBIJPMRYWVZUTQWKNUAOXNDEIVQSURBTEPBZZYMAOGHCLPBDOWXOAXXNJBWFRKUIIKHDLJDOYLMROCWPBLJGOFAYVKUCOEMFGKZGJQGCVJRGGEANLZUMKZVJTTFHCSZAWZRGNPMQHNPGTXEQNPAIHVOTRVFJDYIDPSWAHKHMYSTXKWHUMGIES");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 32893U;
    tmp_msg_0.lat = 0.253110114028;
    tmp_msg_0.lon = 0.449465113373;
    tmp_msg_0.z = 0.310531133644;
    tmp_msg_0.z_units = 5U;
    tmp_msg_0.speed = 0.757078036708;
    tmp_msg_0.speed_units = 142U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.535678760742;
    tmp_tmp_msg_0_0.y = 0.31938990132;
    tmp_tmp_msg_0_0.z = 0.127814141538;
    tmp_tmp_msg_0_0.t = 0.892068284137;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IGXIAAHFYYDNLGEPVSCEVFRDBMFVDHZPJRGKONNQARIEVJWPPBZ");
    msg.data.set(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 182U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleOperationalLimits tmp_msg_2;
    tmp_msg_2.op = 246U;
    tmp_msg_2.speed_min = 0.656649771067;
    tmp_msg_2.speed_max = 0.711632504445;
    tmp_msg_2.long_accel = 0.764241812745;
    tmp_msg_2.alt_max_msl = 0.948270524478;
    tmp_msg_2.dive_fraction_max = 0.694424856268;
    tmp_msg_2.climb_fraction_max = 0.317778891217;
    tmp_msg_2.bank_max = 0.830248753135;
    tmp_msg_2.p_max = 0.345126672523;
    tmp_msg_2.pitch_min = 0.697088395068;
    tmp_msg_2.pitch_max = 0.888755666803;
    tmp_msg_2.q_max = 0.836312361668;
    tmp_msg_2.g_min = 0.183343986458;
    tmp_msg_2.g_max = 0.872349519467;
    tmp_msg_2.g_lat_max = 0.636911332229;
    tmp_msg_2.rpm_min = 0.477873668962;
    tmp_msg_2.rpm_max = 0.518010415538;
    tmp_msg_2.rpm_rate_max = 0.744205743829;
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
    msg.setTimeStamp(0.357614164356);
    msg.setSource(14937U);
    msg.setSourceEntity(114U);
    msg.setDestination(63691U);
    msg.setDestinationEntity(115U);
    msg.source_man.assign("FNAKUWEPHFEBMQBRJWEHJLBFYYTERMNWIKFSFZQRPOHGWYTNLXJVCAQIBQGUIVNRGGFRXB");
    msg.dest_man.assign("DWGSDYAPXTAEQISGHXZTAPCDHCYXMHJADWSKAVBKXYBUMOLSWWMDUGDVKJGHOOMUKTUPWRNITOJAQGCDMYBYFNGFLYBHVEJINBZEZUJFKMZSWVPWNJFHYZLIXPLZECSC");
    msg.conditions.assign("IQUSMRIFWJFVIPWAWOKSRLUNCFDHIDIMVMIPSSPVUNVMFGKYKPNEBHWCLPMUOL");

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
    msg.setTimeStamp(0.698138031925);
    msg.setSource(39333U);
    msg.setSourceEntity(126U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(58U);
    msg.source_man.assign("KYZIACESLRXYPHBPNWLSTAHTADHMHUHAXGQAAIWMGRNMMACFIVYSXRTUHTZRCJJHDEXLNCENYLMVFOUAWXFDMCDYQYEKBRDKSKUZJNLVDKZTUOFRGHLSUQWLLTPFVISFIXWBVWREZPRDJQFEV");
    msg.dest_man.assign("FKJWNCVNVMKMLTXRELLFAJBVLCDXQGUVMUOUZWPEPQLICPGAHKCYTHLESSXBEEMQJGLDRPGAHLFYIWELVVBSTAIRSKMHADHRSEQMPCRTOCHHDWGESQHV");
    msg.conditions.assign("UJOBSNNRIUPZMTIHCZDPKPDJPTVCYXGLVFRZEHUOHFRTYOLBJAPAMNMLTDELAMKRJAOHGDLFYAQXFKCOSIUZIKEYQKYGWNQGXAVTUBXEBSDLSXOFXERBUNUFPNFGUWFEGYVIBNFRXLSIHKYXZWVYOACHJRCHPCZPBKLZHDTNVZXWGIBNODDMOIATCWWJMWJWKQFECSUPMYMQHSQRSX");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.260177885437;
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
    msg.setTimeStamp(0.95842777346);
    msg.setSource(58034U);
    msg.setSourceEntity(90U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("DEWWSXRROXMXYFRXWLLUCOOVLVXNSFGMZFEQLPFHYLVJRASYGROZKRNKQTIWAKKUDNQYPHUABUZQOPIDHIURBPVNFVUCTPKBAWIDMEEHAHSYNCNFYJVTMUAUSJYVYCEKZWGISJXTQQCEITGJXOJYHGZVTEIMNGCCMJFNBFNDWETFHUILDCSWTZHPMIBHBAJKLGEDBZQMFSXHWXXQRVPGCMDDKROSRBJ");
    msg.dest_man.assign("KLJZIHSJNNQKTXBVZKHWMNTFLJPYOKRZCBCTWFQCUPHVQ");
    msg.conditions.assign("FQBBZVLDLBPVWKIGCJUMNSPUFCPCAEBVRXTJKFRZNYGVTRTBRGNREJGACMYYEBPCMNQLQOSUPQICDFHAHPEADRXOMNQDDOVGWLLQPFSIZAROZETVPYDTWFGZVIHOCMWJUWWBXKUBDMHGRHYXUCFOZSVATZUYKXHINLKCYXQEGSNFSYHEMZKSHAGQPFSKVDPATILOLLDATFZQYMWLJGXKWCTNIDNZREITMJWQOBXXMIEKASRJ");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 46U;
    tmp_msg_0.label.assign("WYDYNEZDPHGMIGSEBQWXIZLBXZFPXQBKDBNHPTGGYUELEWJHRIMPJSBMKKNRLZSDFZDJIGOECRAYAHQGEOZCFAOBYNBSWFDKCCHGNGLMUKQJFAMIVCLUWSVPOTYLXURNNQSHTFDJWPDIYPYLVRQQZOURTSBKRYAEPOJNLGYMTWQAKOXMTTJVEORFPCVIAQZMBDUJXP");
    tmp_msg_0.component.assign("AUWTWQWCEPVRVSIXAGWDWACJKYCTSOJQOSAJOGMROFNOANPMANKFRUNBENXKOVBTIHIMPANUHFTCHSSAWHHXPRPGDHS");
    tmp_msg_0.act_time = 11071U;
    tmp_msg_0.deact_time = 2591U;
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
    msg.setTimeStamp(0.190288934625);
    msg.setSource(30158U);
    msg.setSourceEntity(133U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(126U);
    msg.command = 221U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TBHGDFVCSOYHINOHLEICXPHBPNTYYPGJMGSLJSQFVJLCWPWWPIYJLZCSVYZCBCMRZADHLCDVEECFPEDMXMDPZQYFBQTDISQAFOGEPNAJRIKUOTUKRTQGMDRXDL");
    tmp_msg_0.description.assign("VORIPPFETBRUKJAJAXRHAZXQFUALMLZOWQHHYCXPUOFSHQEOVYRNUHWUQBHQJVYCKZVGIRNZYMZGFLZEGTGCJAXJZWONTXSINFFONLPYAMDBKUMVDWIEZATQGGQJTEQADVIVETBBIDKNGDHUXLBWTPROFNCYZSOWJPSHLSSCY");
    tmp_msg_0.vnamespace.assign("ZJICCAOHBEDIAFHDNFGMLESKTBVMYYEDMNPGCWTBWWXCBCAROURPPDAONQTOYHMAKSDZQTDHXDVQZLZAGKPLKFLBTSXVFJZMUPEMYMWCLTINITRSIWTYOSBEN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VTDRMRWTIWJEOFAYCIZPLDURBZUKUMPGILKNNRYNZPECOTANLTLWPGRSPGJMMWXLQMIJOXNPZQXPBUDCRHVTJGFHMUTIHVUEBHKHVGCJNBRCELAQVUOSESLNEYBCGATJHABQJATGYXBSDHFWKFVWIYWJCPQOQZBGSDXBEESKAZXOXWZXLHIYDWCSFTQYPCQUNDLSMVIYOQEREHUSFFVKCJLYQHWVDPRRAZKDJGXAYVMSXMTOKZDOGAMKKIZ");
    tmp_tmp_msg_0_0.value.assign("SVENZJXPPFETFBRDWXHFLT");
    tmp_tmp_msg_0_0.type = 190U;
    tmp_tmp_msg_0_0.access = 189U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EQHLNKXEQQJMSJAMNMXDNRWWY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YNPCIJAMOGXQFOPHVUNSHONWVJLKNAHXIBJXPFKLWGXBQWJMRTSLITMMNXSTLIYTZEPUIDVUZESMDCRVFKTNGOOSRQPMFAYN");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 27223U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("EQTSIJCGENCKYRDMXPWFWPUJTDMCOFLWLSXASMIWPBETUQLUATDFPFNTBQKFOGZSBIGEJPIXNNGZAPUHROQSGLTURGGGMFUHNAZOCWVMRPNKVYEOMVXSAPZAXBFVNJMCTDYQHAMLZTZBXLYZFCBHDVKJIIYBQBWIKIROIDVNHUSTJVWCXTJDVKVEPREKZYIYUWJXLNHDMQHSOYEQQKPXECRNOLCGRVOKCWJXDJBHAYZZUHFLELKBQD");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OTBEIRJZLCTDORXRLPKPAIYNBCWECFYFTNVYCOJACCJBIWUWGTTALYPXWFMSVGEJXAFJNSPNRVVZKGMJQUEISFMQRANBLMQPZKDNSDWFCAGLZEPBDFQOOGDQIVTUUZYQHTPHOJUKVAYGRACHUIYJWKHHYFKMSGYJEQICRHREKINTNQOKVOHXLLAWUPDSDMKXUUAIEZBXDNVZRHQCTMVHDBPWKBZMGSFESTJESYBGZXWZPNLV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ServoPosition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 223U;
    tmp_tmp_tmp_msg_0_1_1.value = 0.383764022367;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Aborted tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::MapPoint tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.463957305962;
    tmp_tmp_msg_0_3.lon = 0.653790818565;
    tmp_tmp_msg_0_3.alt = 0.803267506776;
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
    msg.setTimeStamp(0.75146120695);
    msg.setSource(9629U);
    msg.setSourceEntity(53U);
    msg.setDestination(47365U);
    msg.setDestinationEntity(124U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ERKFHOLRLYUZWZHE");
    tmp_msg_0.description.assign("IPPFUTVJELOUHBPPZSGYHDNHCCVLPKGQOXLYOTQMEAFUYZSNTKHQLMZQAWSGIILDHZWDWFBQGSZZJNCHDZKJTXYTYFBTPMNPLINOBJHQYNRGRADZJJKXCIPVOCUNXYCWGQMUQXNKMOJOXXEIFZFSZYBDWEFRVWRQGIESXKPWVBAVIEUJYMVYATUXUCKCSSRBUAWBVRKTAVS");
    tmp_msg_0.vnamespace.assign("KVWWGNPTLLNAMKMRMEDCYZIKSBUZIPEMPEVVIMIJFRBSEHMVGHQQRHVNEYICPCAZCYEYOJEIZYCATGTPLZZTBOLVXXPZTAYKBPQGUTURNRLQPHQH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NCINXODUDJARNVPJTYCJXVHCKTKZNGFRWZQROHJGFCMPBEIIEMGYMHOMQRAZPHSKOXNWMVZVVYBDBYDFCJHOZYPUKHPZZMVXOQTYBFZNRKLRAHWTXULLGGCDWCDXGYDQKKTDIMEUULAEKMHPQVSHWSRBLAKSOSNEHPTIBGZXELJLMFDXBAIFVESFVGJQCWRIFNCZPLUEAAKWQVGRTLJCOTNIN");
    tmp_tmp_msg_0_0.value.assign("BTSJRCMAODHJVWAPVBJOYXPQMRSCTNGXLMKUOUTHJCRFERLLVTLXMWEKRHPPVMDLFGCREEIKWINBSUEUCLDUXQFQZBDSGWLUASEPEGYXKTSDZVBQQYIOKSANSEDGHMUYA");
    tmp_tmp_msg_0_0.type = 132U;
    tmp_tmp_msg_0_0.access = 98U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SDJBGJEPKAJETUZNFRXCSOAXEBVDVFUIKVTZESETVGZGBSQRZNXMKJDQMBWLCKRAGSIPHWEOTZHODCHMPAYBUVVQHCYUNOLHRNXHZPFLRJXQIJJAIHAM");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SKLKZCTSJFYEECPVJJWFGLALDQPKZPJEGIJWIUWPRBEUEAJZAZFPMHFCRAWSIBBKBYTOHOIFIWOWZLNQNMIQXTHKNKUDBHTUAHFWPYGUFRGKVZWOTQUJGDMCVAXUWPCRCUNHTFFEMQCQSBXADDYHBOEEDGONBSISTMBHPMROLJTNQBA");
    tmp_tmp_msg_0_1.dest_man.assign("QCLJDHVYMYZKGXPFTRGSYXWFRCOSKPTBWJZNRNDAQNUTEOIVPMULGVJOO");
    tmp_tmp_msg_0_1.conditions.assign("RMSJRXVDBCXHISNSMWABRDMOMGM");
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.seq = 903U;
    tmp_tmp_tmp_msg_0_1_0.sys_dst.assign("BRDVLONZSFKMAAOGVVEPRPRABCALXNCQMTWDXALUWBBWMOPJIAUESSQWNONSVHQJNGIXVYDTZHRPJFPNSPWJPWSOQY");
    tmp_tmp_tmp_msg_0_1_0.flags = 76U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {40, -80, 101, 119, -89, 97, 10, -10, -119, 103, -74};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CpuUsage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 45U;
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
    msg.setTimeStamp(0.15992023946);
    msg.setSource(59887U);
    msg.setSourceEntity(92U);
    msg.setDestination(35358U);
    msg.setDestinationEntity(148U);
    msg.command = 54U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KABMCCZGPKWTNSGPORUZTCLRYSZBCDJYBOLQTNSSJOFMBTXOLDKGNEBJWDHOHQYBARQBYHGSEKYSGUKFVWAZEXFZUIVJGMVJXHZVGVNEXASTPOIELYZCRSGQWAHIUTFBVEUIWBHPMLGMYKNDVLJQCNVENMDRZWZTFBONIXSPKHTJPEWFAXRXKDAHARADKXNXRMHLIUYCQ");
    tmp_msg_0.description.assign("UOCNJMLKFRQXPEOVPATDYIPGKTCTQAOHMEGUKZJQZFWVRZGYOYSPCTEVVVKPMLZGM");
    tmp_msg_0.vnamespace.assign("LSLHQVEITIMNEAOAALJBGHRPFZNHBSDYLRPIRITZSTJROAWGNSPULAMTZWPCDTRVOGBUEFCVVCDSKAYJNXJPEPRDTOYTYWJALHYTERUZAMXHVIK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HYDJAKZOUPIWYMCNZEPROLGQCZMVIGRVQIONZFQPIJAPHSPGTBHSYVNGWRRHESLGFSQRXRABUCHMCYTKXOVNOTDKZBJVQBEUCXNBLFOBTIFDNJILDXW");
    tmp_tmp_msg_0_0.value.assign("SELMAUBZKAVZJBWUEBWGLTVNQGTFXHSSDYROXLJMAIQYCEVUIWEZYFNJXDPOVVPBRAVZDOISYWDNWYZPXGXWEYQRQVNDFKHKSCMLDIOEEKCGBFGOQPYCSKGHCBACWUXTQGHXRMTTCBCQVBOHGMJTILHUTTIZAVZEFHGWSSFMLEIOLYFKJZMYDTRDFQNBHXFIKZPDPAPISNLLVAROBJKIJUHGTMNXREFKYORKDWRZS");
    tmp_tmp_msg_0_0.type = 127U;
    tmp_tmp_msg_0_0.access = 49U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JINXFNZKSCUUBAKHLWTDKZAJNUYTSXWUDZKOXIDHHYXIPKLSTPDYHTGLZVMDIOVPXYGKEBMMEKAWVUQVRRRSVAHTRMBGBTFXCAOIRPNYTWOBQGGSFQKFEPLODLLMWTINNNRFVLKMQYJAQLDKWIZOIQSXFSYCVHRRPAOOSABPDMGFHPZNPFWBFEZYLCIUFGHAHECTIUELVQXNBCEUBWMJOQACQUTCXDJZRZSGUEDJHZGCMYEJYJQPSEJVVJRN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HHEFICEHZZMLBSTOZRWXATUSAVMDPMSJBVTBP");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 51059U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.529938584625;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.308484054945;
    tmp_tmp_tmp_msg_0_1_0.z = 0.317797359259;
    tmp_tmp_tmp_msg_0_1_0.z_units = 196U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0237643845028;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 62U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.392532225733;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.763804181452;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.88733492477;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.44043308756;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KQQLASVYHMFPAHFEKTGYXSUOOIWGAQLWDKDYQXXQMHBNKCZZTWJOSNGVLNBJSBPIXYEHNRBUZNGBSRTB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.638311849493;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TrajectoryPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.609573129943;
    tmp_tmp_msg_0_2.y = 0.603689044454;
    tmp_tmp_msg_0_2.z = 0.0547750512931;
    tmp_tmp_msg_0_2.t = 0.846774437199;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.601928937485);
    msg.setSource(32433U);
    msg.setSourceEntity(6U);
    msg.setDestination(46941U);
    msg.setDestinationEntity(175U);
    msg.state = 37U;
    msg.plan_id.assign("NGDJMLYVYGBRMQFECKNIVYRIPOMWVEJTOMWTCSUSHZPUWDAKCBNGGUZLLIVNJJASFRMEPORXFTAUHFHCCVRKPMAZVGZTVJPARCSAWFEOKJXDOUVHBLNXETWOQDWSRJNTXSEFRTPZZOLTYLZPPMDDZICIQARNLHPK");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.0237488497719);
    msg.setSource(30289U);
    msg.setSourceEntity(18U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(159U);
    msg.state = 158U;
    msg.plan_id.assign("FSZNFGLSWOOWQZRKGUXKWBKOFOJKVCNWIOHTACERISBJZHZFWEGCGDX");
    msg.comm_level = 219U;

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
    msg.setTimeStamp(0.27282630806);
    msg.setSource(10514U);
    msg.setSourceEntity(225U);
    msg.setDestination(21151U);
    msg.setDestinationEntity(51U);
    msg.state = 60U;
    msg.plan_id.assign("EQZFYZPQLZOZIMJOGMHPSGERSPXLTIF");
    msg.comm_level = 201U;

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
    msg.setTimeStamp(0.208278307976);
    msg.setSource(32957U);
    msg.setSourceEntity(13U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(74U);
    msg.type = 189U;
    msg.op = 29U;
    msg.request_id = 46878U;
    msg.plan_id.assign("SIXGOLSQOLRAMYFLQTVCQJMEHMYIQFVJBLKNOMCBRHTMXYCBOQHDFTNKSXTYPTBRSENFAFDEYEAMGRVWGSIUHCILNNQDKOYKGNHVNITVEQDTZOQPCPFKAUDJTIUHRPPZFXBEXXRSICWHUYLWCJUVHYRPAWEAOSDXJNVQQMVCFFCLGVEI");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.641326830668;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FOOUCEZRPNZIDUKMDNIALWLCWDRBADLQUEBJGYHFDQQBPPCRCDALSARZIUOZZNNPJLOVNSFEHORQFASYBTUVTGXZAHCQIHOIWKFYVWZOYQYFPUXEEYXBMZCJFJDG");

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
    msg.setTimeStamp(0.523108972559);
    msg.setSource(9452U);
    msg.setSourceEntity(33U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(146U);
    msg.type = 203U;
    msg.op = 87U;
    msg.request_id = 48143U;
    msg.plan_id.assign("QMJRCZXDECKHCAMBSHTRIUZYPGKUANSGSBPMCMVFDXINWPAMTLQGINVBIUWKLYYRZCNNENQJYXPNILJBGGCYBZNYTIQKUROLWKXJFOLPUBAFUPCSMQHPOHGWTTUQHIWT");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.764498955413;
    tmp_msg_0.lon = 0.0145474009168;
    tmp_msg_0.height = 0.626131920757;
    tmp_msg_0.x = 0.670328296329;
    tmp_msg_0.y = 0.974583383781;
    tmp_msg_0.z = 0.0181295422192;
    tmp_msg_0.phi = 0.807877508971;
    tmp_msg_0.theta = 0.245825013445;
    tmp_msg_0.psi = 0.414507911987;
    tmp_msg_0.u = 0.0829369912038;
    tmp_msg_0.v = 0.495856830551;
    tmp_msg_0.w = 0.68561565193;
    tmp_msg_0.vx = 0.0728662707965;
    tmp_msg_0.vy = 0.352263638836;
    tmp_msg_0.vz = 0.744342390669;
    tmp_msg_0.p = 0.895004001186;
    tmp_msg_0.q = 0.8201562101;
    tmp_msg_0.r = 0.725150103287;
    tmp_msg_0.depth = 0.171969659108;
    tmp_msg_0.alt = 0.960578526711;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XPPLROKGILSVLGWZFYNYQBZIGCHVZICEITHGPFXTWCGDAVNUHWVJXDTEHNVD");

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
    msg.setTimeStamp(0.70213262747);
    msg.setSource(12956U);
    msg.setSourceEntity(211U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(99U);
    msg.type = 53U;
    msg.op = 175U;
    msg.request_id = 10300U;
    msg.plan_id.assign("YUPUJCGOOPMDLMQDPQHTIZRCKUYRVCRWGXGUINAZSBZSKRQLZAYURKDVGJHQBGAVGZAFLTEQBSFPZDKSEMWYOINQHYGNGUWNBONIAQIVXVBRYNCSGJLRDHCTTVZMJTEXNPDSECAYFCJRXOHDJWTLHORVTSVDMBHWSPPZOMMPGCFLKJKEHCLIUYXXTZSMTJAWQUCRPMFBYOBKDNA");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 126U;
    tmp_msg_0.op = 14U;
    tmp_msg_0.plan_id.assign("SGGSMYJLUUAKDWPUOKFZKCKRUVDAVQXFNOCAKFOZUJEUXVFLZGJSRYYEHVPBFYFUCDTSQTVEAZHXFKYWNXBRJYWXNMWYVBEGPBCXLPRUJHUMDIEHIOEIVAWGBSEGNCATNETMYTARDQBXAZCKHOBSLSIWWKM");
    tmp_msg_0.params.assign("JXDQOOMXQSYBYUWRAGSZGUIJUJIBNEDSYHEEEFJXPWUNDOASXFJYNRUIGSVFMQZGITIFQZWJDVYJPXKORDBWHGDQQODWDHJKQZAUVMMLEUOYMYISYFEVWLPGRAVKZCEXCNBNFAAFEQVBGUNHPMSKTNBPICHCXWVHUPSRTFPMUMRLETBAOKXJGBWZDIVAIHOWZRTTKLDXCJXNTBKNCZCKTRAMHPVLLPVLLRGCKHCBPRQSL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBRDVENZTFXLYMJNAIJUCQRNWOJMYSTGAUUBJTFSWYWOGOSDKHFQISYZKFAYAZDARMALEDRNHFJYRSPVGKICHGHSROXEWVPNSNFLXQBPUKVKHTUMSBDXLQCEHOLILWEQATGXTJKXVWIEMMGCVYEJEVQITNZMGQIGVLZKHMZXTZCXPXWNIFXBZIREDKHQPOMBQTDDUZRUJOYPQFAKCLNGYUCPFSV");

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
    msg.setTimeStamp(0.0953805719238);
    msg.setSource(53138U);
    msg.setSourceEntity(233U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(250U);
    msg.plan_count = 48774U;
    msg.plan_size = 3800455280U;
    msg.change_time = 0.495963242005;
    msg.change_sid = 47282U;
    msg.change_sname.assign("TXLNZRVUVXAXPXFOGVTUEMASVBPXIHMDAGQDIOJKDPFLYBIQRMRBGAEBJSVFQHTKCESHJIZVKWMYCSGLLFWLMFNREKPJBJQOKNPFWLMLOJTIYBBSBOVFNDXETHZ");
    const char tmp_msg_0[] = {-14, -46, -26, 86, -23, 95, 11, -26, -102, 53, 44, -45, -114, -64, 114, -23, 64, 27, -92, -112, 121, -24, 16, -80, -13, 117, -23, -107, 105, 97, 34};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MXQAPOFYFJ");
    tmp_msg_1.plan_size = 27135U;
    tmp_msg_1.change_time = 0.211329574185;
    tmp_msg_1.change_sid = 49022U;
    tmp_msg_1.change_sname.assign("IHNSOGDRDCRXORMHZRMAAWRQODKTXYIPZZXQOPAWXITSVGHQUVODHZJTDCINETRIKBDBOLKUMPKFEVYZEULRYBCNTVEKNCOCAIJQUTQKTAOBMSFTABLNWHSGSVJRLKNKQPHWLJXWMFXPHUDLROEEIYXHB");
    const char tmp_tmp_msg_1_0[] = {-33, -36, 84, -5, 29, -110, 56, 40, -104, -89, -22, 45, 38, 9, 78, 60, -76, -39, 90, 118, -36, 96, 114, 72, 42, 48, 24, -12, 20, -110, -76, -72, -109, 64, 15, -36, -29, -94, 116, 93, 1, 93, -115, -117, 32, 104, -86, 14, -61, 59, -103, 115, -83, 17, -56, 3, 73, -25, 41, -110, 0, 62, 34, 18, 29, -3, 15, 58, -83, -105, -80, 122, 112, -120, -50, 95, 18, -65, -52, 65, 125, -124, 37, -21, -23, 6, 116, -101, -72, 90, -29, 78};
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
    msg.setTimeStamp(0.644541043761);
    msg.setSource(47099U);
    msg.setSourceEntity(70U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 12258U;
    msg.plan_size = 527031976U;
    msg.change_time = 0.0383355500198;
    msg.change_sid = 53018U;
    msg.change_sname.assign("WFXQOYZNPLPGOULQQCMJTKTVBKXFTYWYVNRPMILQUAEHWBENYOYKDMHJPXJHVESVBYTTTFJTFSTAWMJLBWDUGVBSHKMJLAUMEERUKXDNXCHSNIGIBXFIIXQCCAXBROROYZADGZWRSSYTGQSVVUKZFGDAHDNRNLHHWOICAHSQIOIVZTEMFGKDFIPBCMDAQVKKJZDIYJHLUXYZQS");
    const char tmp_msg_0[] = {-33, -61, 101, 103, 30, 24, -102, 94, 97, 81, 92, 55, 31, -89, -5, 89, 85, -23, 95, 106, 7, -44, 46, 23, 108, 60, 114, -8, -84, 81, 16, 95, 20, 117, -42, 90, -94, 41, 55, 55, 126, 70, 22, 40, -75, -49, 121};
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
    msg.setTimeStamp(0.00602178752868);
    msg.setSource(7891U);
    msg.setSourceEntity(162U);
    msg.setDestination(64454U);
    msg.setDestinationEntity(250U);
    msg.plan_count = 10650U;
    msg.plan_size = 3704221411U;
    msg.change_time = 0.287860455858;
    msg.change_sid = 49759U;
    msg.change_sname.assign("EWVNIOSBONQIVDSUPBVVRDBJGMYQHINT");
    const char tmp_msg_0[] = {-69, -38, 11, -104, 62, 61, -121, 120, -32, -52, -73, 77, -4, 42, 19, 114, -113, 13, -34, 50, 104, -60, -2, -93, -84, -78, -2, 23, 67, -33, 102, -103, -36, 72, 7, -119, -92, 117, 60, 108, -20, 53, -83, -58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GAHAMDRVZPJFLUMQSKRYDOQEIXEMWVWJVOPCWRHVGTERGKUOGBLLWOIIQMHXNSLSACKIKNJPGRXCDDVE");
    tmp_msg_1.plan_size = 16118U;
    tmp_msg_1.change_time = 0.416428916932;
    tmp_msg_1.change_sid = 32798U;
    tmp_msg_1.change_sname.assign("WCBZLFGKNMFQSKISSHMQHZUOTWUONQHXXKEPMBOCTJCIJUNSJGCWROFIWKIZVUBINGSZHLTTUAUO");
    const char tmp_tmp_msg_1_0[] = {31, 118, 115, 111, 1, -64, 13, 4, -128, -29, -95, 58, 61, -89, 86, -120, 71, 62, -111, -88, 10, -55, -73, 67, -87, 45, -13, -2, 126, 1, 13, 79, 120, -102, 112, 75, -127, 42, -72, -114, 107, 13, 17, -118, 100, -55, -55, -20, 45, 10, -105, -114, 106, -64, 113, 109, 37, -115, 87, 121, -108, -37, -18, -40, 123, -61, 49, 110, 85, 47, 56, -115, 71, 122, 103, 120, -46, -20, 4, -105, 11, -104, 23, -102, -81, 18, -125, -7, 51, 98, -122, -97, -118, -105, 110, -7, -127, -50, -43, 16, -11, -49, 64, 39, -96, -38, -23, 97, -47, -33, 77, -115, 98, -63, -101, 62, -16, 83, 120, -29, -3, 65, 102, -78, 125, -57, 8, -36, 43, 75, -28, -118, -38, 93, -76, 5, -73, -89, 32, 122, 43, 2, 29, -71, -36, 28, 35, 8, -120, -23, -40, -2, -62, -79, 125, -45, 19, 9, 76, -38, -49, -40, 3, -113, -106, 47, -61, -126, -98, -63, -4, 16, -127, 35, -85, 27, 98, -110, 89, 16, 93, 48, -103, -114, 93, 76, 60, -87, -43, 22, 39, 106, -6, 22, 5, 113, -111, 113, 25, 58, 19, 2, 112, 49};
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
    msg.setTimeStamp(0.772819602514);
    msg.setSource(21676U);
    msg.setSourceEntity(36U);
    msg.setDestination(15150U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("APHZTMVXHYEUOSPPKNMNFVDASEKJMHCEANIZEFYLJWFWNOLPWONUUJPTWTQMVFNQARCBXZNQGWZVOIIOUHSGWRVQANKYQXQPBDGLLBPJZVEFXRSQISZNYUKJULTZXSCMHXENTIRUYHQXATHRVMDJQDKIOGELXCW");
    msg.plan_size = 62550U;
    msg.change_time = 0.231802272872;
    msg.change_sid = 25164U;
    msg.change_sname.assign("MTWDQHMJVZEGKKAAXJYAWNWQVFNPHDBQJEUDLPKVAUGVWVNUGHG");
    const char tmp_msg_0[] = {78, -110, 24, 110, -27, 110, -126, 88, -18, -75, 2, 44, -40, 14, -90, -123, -1, 26, 51, -48, -1, 16, 74, 109, 62, 24, -49, -21, -115, 58, -29, 55, 43, 9, 46, -11, 53, 40, -99, -64, 72, -64, 10, -90, -42, 13, 65, -31, 111, 21, 126, -43, 118, 47, 56, 97, -77, -44, -15, -14, -111, -56, -17, 40, 75, 13, -22, 70, 92, 55, 62, 33, 122, 6, 107, -100, -79, -33, -58, -33, -34, 115, 49, -104, 113, -33, -18, 100, 88, -18, -118, -6, -120, 95, -124, 57, -12, -52, 114, 115, -5, -110, -27, 18, -42, 78, -71, -45, 15, 46, 101, -113, -45, 20, -52, -18, -66, 17, 51, -102, 85, 91, 9, 60, -104, 85, -97, 82, -48, -13, -66, 57, -71, -1, -75, 62, 115, -74, -42, -51, 45, 83, 5, 101, -97, -58, 69, -100, -50, 20, 45, 74, -62, -31, -7, 65, 57, 118, 105, -11, -65, -39, 102, 18, 41, -119, -126, 86, 64, -37, -7, -15, -126, -87, -22, 97, 87, -39, -107, 48, -49, 81, -88, -28, 42, -22, -12, -47, 32, 114, -122, 97, -26, -125, 66, -72, -97, -57, -73, 64, 10, 29, -49, 40, 8, 85, 80, -91, 56, 108, -58, -84, -42, -63, -100, -59, -28, 81, -45, 34, 29, 50, 5, -48, -100, 83, -45, 44, 99, -1, 64, -89, 59, -62, -10, -78, -26, -40, -64, 16, 73, 17, -76, -111, -76, -41, 111, 46, -11, 46, 75};
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
    msg.setTimeStamp(0.351927612382);
    msg.setSource(34768U);
    msg.setSourceEntity(198U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("TQRCESFWYBEPOGTEBWVTDJRRNLJVUSUHCFDMQASGSGXVMFPUVKKQHLZYZXEBNBXWCGNTXXOTQIBHBVDRGELKLORTEFDXIYWDNFDSBCIKADPNKJLWUCWJUXHKWAJEYJKMRNTFSHZOUMJWWQDGXMCZUCRJBAKYSIMSIHFVWDJVFGFPMOGBUPZTHLPAOZPNLQLLHAQZCURDSYQEMIZARHKQYYEI");
    msg.plan_size = 49694U;
    msg.change_time = 0.0677555505381;
    msg.change_sid = 60141U;
    msg.change_sname.assign("SXCXBPOZRFJCJODVSPWUMSIHIGBIUIESZMFLHSPXQRPRDXNYBEMYWINFEXRYYBBVEGECDMJKYAWWCUXXCMNRMWJRYVUSCIHLQKHYFGOQKOUDJDKWZMDIDKBWELJMYPQJFYZKQCZKZUEFSXKCTRGVPJGFVLLZ");
    const char tmp_msg_0[] = {120, -93, -86, -97, 29, 99, -65, -106, -75, -16, 93, 89, -92, 97, 1, -111, 48, 91, -100, -46, 70, -80, -121, -73, -103, -11, 70, -89, 121, 62, 92, 58, 63};
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
    msg.setTimeStamp(0.555421867244);
    msg.setSource(16600U);
    msg.setSourceEntity(166U);
    msg.setDestination(18885U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("VSJLMWMZFRJDVRPZGDIWCXMXINRGIDMKLUYOUOLXFCLCNAHLMQDSAPNDPJQFRDYEEIOLRTNOBVPBBUNPBOWABZBZCQDEXHZBMIEUJJPOATFLRFGBEWGSOXSUGUKI");
    msg.plan_size = 63850U;
    msg.change_time = 0.367371336839;
    msg.change_sid = 42130U;
    msg.change_sname.assign("JAWCSFROIFJPQBEIOTHWYQCWEJAMGOCWPSGELZTOGZIYHOIBPFERDRJVXDHRNHYWREQTFTPGDNAXCGWMVBQNVCSUJRDFQPKNKAFXPBMDJFTZAAKHIWBBXSZFOPOVYYKQURZAHJUZAMXETKYIQZLOSJQSGVL");
    const char tmp_msg_0[] = {-2, -40, 103, 25, -57, 7, 107, 67, -127, -51, 4, 59, 1, -85, 33, -23, 6, 47, 64, -8, -71, 102, 125, 32, 92, -28, -126, -48, -61, 16, 15, -59, 9};
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
    msg.setTimeStamp(0.433831715791);
    msg.setSource(51681U);
    msg.setSourceEntity(98U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(73U);
    msg.type = 98U;
    msg.op = 17U;
    msg.request_id = 27348U;
    msg.plan_id.assign("TASDKVFKGBWOZPVGVXWEXR");
    msg.flags = 7675U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 190U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWCLDOVMYKQZDVUBURBIRFFNWDAABTHAGGMZCJJMYIGBOPYVJHHJURKILVHSRQEPZRZGNZELTQKQZOUIDOPBXQINHDTYUXGWROIYPXOVIGUTCUFEEPQXSGHXPIKDVECNZZKEXSCIURBNHTNLMAAWLZSRNCFQKWBDCTWJSLMLTPISRCTYMFBRJCLKEVTHG");

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
    msg.setTimeStamp(0.10365021352);
    msg.setSource(9371U);
    msg.setSourceEntity(21U);
    msg.setDestination(383U);
    msg.setDestinationEntity(204U);
    msg.type = 174U;
    msg.op = 80U;
    msg.request_id = 32041U;
    msg.plan_id.assign("OFGLNSIGVAGLSASDFFSRGGRLOUQYTXGLTNBWLYGTFEHMZNDMVRNJOCKNBNKUZSTKMCZMBRSQCKACENFHWGQZVSADGZIEQOGCWTEWQPSZZEINCAOTKPNFPBJRQHWUOBJJXNJIAACLXCMWXXVWJQYPYCJPIXHMLKIAEHUJHOBBERXHLYVQXWMPOURBADR");
    msg.flags = 36871U;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.462675581333;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKGOVYCDIHETLGQLGRPLXTVBUPRAUZPUNCGJDFIMOXAWO");

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
    msg.setTimeStamp(0.93076736439);
    msg.setSource(49108U);
    msg.setSourceEntity(235U);
    msg.setDestination(43497U);
    msg.setDestinationEntity(106U);
    msg.type = 82U;
    msg.op = 199U;
    msg.request_id = 17442U;
    msg.plan_id.assign("OQYAUGRRJVIJWHUQHDIEKLCNCAJKNNGOOMUEVFJYTXSZSJDIZCUEAEXPLBQJUAGSLDUOMEBKCPXIGRTAACYCKFFPGAZZRNWLQBLJVHWBWDMHKZXMYGGKAPHYLIXVESMHDYGOMDGURQXHQNPVYTEXRCBWOONYWQYUDAFFPPEOJLZFLKLWZPRHQKZRICS");
    msg.flags = 513U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CMOGWAAXXUZVUTDQVAAJYSSGYMILZEZIDPQNAXIHGPOOUDYM");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38203U;
    tmp_tmp_msg_0_0.lat = 0.402933514683;
    tmp_tmp_msg_0_0.lon = 0.418996321842;
    tmp_tmp_msg_0_0.z = 0.928592933416;
    tmp_tmp_msg_0_0.z_units = 165U;
    tmp_tmp_msg_0_0.pitch = 0.550429897306;
    tmp_tmp_msg_0_0.amplitude = 0.686581861872;
    tmp_tmp_msg_0_0.duration = 63426U;
    tmp_tmp_msg_0_0.speed = 0.607848870229;
    tmp_tmp_msg_0_0.speed_units = 53U;
    tmp_tmp_msg_0_0.radius = 0.511493120997;
    tmp_tmp_msg_0_0.direction = 83U;
    tmp_tmp_msg_0_0.custom.assign("FGABJIJMVVGAODCEEOCTGXBRZMHCNTTRLCSGUSKIOUXCVLPNAORUTDYDIYKXEUHJQGWRLKVICFQHJEFKMBNPTPOIRGLQZJXHGOIWNWXSUZWDCZDBSDYHXONZDAZBVZIPJQLBFNHKYUOJWFKBYMDXADSVAQAJSPBDSLFKQWGWTISAPFZQRLQUSPMIR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LeakSimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 42U;
    tmp_tmp_msg_0_1.entities.assign("QYNYYSHOYRJECORMDAZJGCJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OACKFRXLSWPIJDZHXANERYZQGEGWGCYYIVZORMNXH");

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
    msg.setTimeStamp(0.236132911914);
    msg.setSource(58111U);
    msg.setSourceEntity(52U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(48U);
    msg.state = 40U;
    msg.plan_id.assign("JIZHHMRMPKUHCSHHJEBKNFIZASUNUWVRLBUOKKOGTDFVUJDOCZGPXYDXIAWRFXITHAVOFYLPBCRMXFKJSGETNFXPUDAQULZONIXGGRZURQZBOORBSFGQAMUYMSVEQKAZECPBLTQZVXSEMQLDYQDDSJHUCBEGAQWKLBLWGDVIINMJHTBYGYXIRFZSWJQ");
    msg.plan_eta = -752306105;
    msg.plan_progress = 0.148971560114;
    msg.man_id.assign("TARLVFIITVLYEYIOAZSHBSOANGOFKBKUQEXDFWKROPVXQYAUEXRZDRSJFMRMTCCFTVPSMHWJBQQKMFCJIKPQJWTHGHDZGXNROHNNPTKXJULAYJAKVLINMMHFPEBZXUIEMQRGXDOYBGICJLTWAOHPBYVDHYWYVQNM");
    msg.man_type = 57412U;
    msg.man_eta = -1945564650;
    msg.last_outcome = 188U;

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
    msg.setTimeStamp(0.0419335381977);
    msg.setSource(27629U);
    msg.setSourceEntity(27U);
    msg.setDestination(13190U);
    msg.setDestinationEntity(30U);
    msg.state = 77U;
    msg.plan_id.assign("UYNVPRYEBHILBEZUOMSDKIVDDZKDXUFBZIPZTMBSCUWBMSIAYSQQGARGDPJJYEADAQZOG");
    msg.plan_eta = -1224994045;
    msg.plan_progress = 0.848442841531;
    msg.man_id.assign("MMZMFISOQARRCKABJUGSWHXSJVUCFNXTBWVYWNHTRWFBNPSWOCDIDKUHCOVFDVTLWSSLJYNXJRMQFQGXDPYQYOXBUQUZIUTFSAEXBEIBTUTHTXVGJQRUVHDRQDZIESRILFZGCLWLYEDZJWKWDOAGYLONRDLBFSENRKLCGQJNWYPMXZYSBCZXAKDZEZFNBNLXMVJAIELYIPPIIVVGMJRPAQFAKZHEHCUBOHGTPCPPTUGNAYKMMKEOKHE");
    msg.man_type = 4847U;
    msg.man_eta = -1758533958;
    msg.last_outcome = 18U;

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
    msg.setTimeStamp(0.264548151993);
    msg.setSource(28307U);
    msg.setSourceEntity(72U);
    msg.setDestination(25583U);
    msg.setDestinationEntity(27U);
    msg.state = 143U;
    msg.plan_id.assign("FRZMJMWBMXPBHTNCDYGHMZJYTNIKLYXVWQQMZHDJSUDAEKIADNVRIKHNXJKWNFVVJEUGHHUFKRRBEHUEFBYRVNXDPGRZLACOUESNPYFDDQBPOZXQSTVTCDWCNTIYBGKWGTOIKFGIJLPAUBFRAXULQPTPHIJWGZPFZFUGGHOPXTAEVKDSYOBXISSNACVOYOJAMKJQWQOTBMRSMRQWVSHEMVULSYSTZECJQDLZXICLWFNQBCXLZLLI");
    msg.plan_eta = -1912338215;
    msg.plan_progress = 0.884237190668;
    msg.man_id.assign("NCTHIPLLHTATWQITVMJSDWFNGYYKKIGSPZCZUNIYCWMOJWOCEDCFHHITVQCXGNZFCNPMSEIIPBNOFRRHBNUDJSQMFGOVLLQMAMHFPGJTTDSZZXDPERVCYVKMOJBMLQYOIURWVVHXZAPIBBFOKFETIUKTDRAKSKRQZTUQGESBHLZAWXXQNFYDYUWRGJJENXSRQDLUQBKBBACJXAPMOPHRYDYNVVWLKGXSZYPGSOBMCELZAXJV");
    msg.man_type = 47282U;
    msg.man_eta = 1108127985;
    msg.last_outcome = 59U;

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
    msg.setTimeStamp(0.820340884613);
    msg.setSource(45519U);
    msg.setSourceEntity(179U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(172U);
    msg.name.assign("LLUHTDVFODJBIDYISBMWCOMKIVLHEHQSQNYRBRDBFYYAQDPQGGUWBZEXGXTUNXMFRZALGUPEXTGECFFAIWERCOFITLJGTBTQDPRCLEMYYCHPZCYPGVHPOQENKMWFENUUAVVSJFHRKUZWNRCMKSMXPNTAXCZZXIKNIAJWVQSVNOPCASAJKVQGHBGPAOQLJMWKEHFRDNWSDBSKDNZVRJHBOO");
    msg.value.assign("RZKGMEVKWHZIZRMVSGYJUDXUQEITIYOTBLUKCQWMDTEPKYFBAJLYLQWOCJHXZUMFFKTLJRPXEUPYHZZCAHRHSBFQQGWVSJLNRJLIEWGQEPBQPYSRMJDTZSRICIOCNJLAUHVAGDVQFRDCVKYZIXJFHHGNJGVXCMWWRXZGBNNNTFYXWWYMFAZIETUIAKOBTUKNVAOSMFOLCNPKQDAVGUMMVXBCTPBSDO");
    msg.type = 151U;
    msg.access = 96U;

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
    msg.setTimeStamp(0.23129929788);
    msg.setSource(40150U);
    msg.setSourceEntity(70U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(250U);
    msg.name.assign("HXYPGOXWHLAGQKRJTMAQCMNBJXHUNPXFLMRTXIIGIRUDSWQLPSSCTXVPFTABYGRBIYUCSQISOZWZMMFDNGKUVLRMUZKTNDZPZAEUQBKHIOGHFZOVGOKTJPSNMELTECWLBGDWPPIZMBUYJAJYUUQFQVREOFXCBCAHOFHZXCCRWGJNHOGKWZEKPDJ");
    msg.value.assign("UMHOVOAKFKGVZLZCEVRGBDOIQRILRZJEYWSXNLPSYYILSCMATKCJDXHXYBQFRDIZTEAUCZPTXGBNNWZRHPNQUETNGQWZTVKFVLMHSUMJSYOFRTKFJGOCKFHMFOPELLWAWODPDMUNCJQBXRFYDZUIMFXEEZJBOIPTMLEGHIVMBSRQONDHAXWKBGNWSPMDJQHTWCXGYKEKVHNCJLAYQSTRFAPCSHSPLIRCVJBVAPDDOWBXZUAIAQKGTQBUIUYWG");
    msg.type = 140U;
    msg.access = 202U;

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
    msg.setTimeStamp(0.413820992582);
    msg.setSource(59022U);
    msg.setSourceEntity(197U);
    msg.setDestination(6414U);
    msg.setDestinationEntity(185U);
    msg.name.assign("SXXLJEYVZAKSWLJKJQSWDTGPFURBQZTOKLYSMKRJXUDBDDPKLUCBIMGIFRALKXTCZVOIRWZUYRVDFTUSWALZZIJPHYBZYRVPSYKGTHLJDYFXIQNBIGNYZCEVYTHJTJNOUBGXDDXEDBBGAFNOMXOTOPEGPNJUUVZHHMWELUWPSBQQAQICKCJNMRFCWDAWAFSPNOWRVFNTKMHEXHIEHVSFAMLQEAQPOLVGHOEOQHC");
    msg.value.assign("DYVTGUYSXGWXEYXZVKNEHFBPMVMGXJDMPJGTL");
    msg.type = 112U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.768733723771);
    msg.setSource(59952U);
    msg.setSourceEntity(91U);
    msg.setDestination(27504U);
    msg.setDestinationEntity(175U);
    msg.cmd = 147U;
    msg.op = 119U;
    msg.plan_id.assign("YGGVIIRPLCXCBUPNGNTLTFXSBBOXCVMXJDSAVDILAGSOKMCJWJWPZTWUBRUMDQBLYKEJLSHHQXBHASLGODAYVPGDATKUHURFQVMFWZENKMFRCBIJCLMGUJOZC");
    msg.params.assign("RJYGOZKUUNIOCSTFKPVPYQUAWMFHOVZZGVBYRNPMKXRIJBQDAHVFTDIFGOFRPKLSQNJLYDHARVQETVAZLLFPHMOOTWQBTKDJLIEIUYTCSXZUUPPGKHLEMQWXMGBBVEMHLFCJRTGOICQAJAAYZWQYXHMCLRTXQKBFWNWNTXH");

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
    msg.setTimeStamp(0.201606214941);
    msg.setSource(27351U);
    msg.setSourceEntity(5U);
    msg.setDestination(9506U);
    msg.setDestinationEntity(84U);
    msg.cmd = 124U;
    msg.op = 19U;
    msg.plan_id.assign("SIUXLLWAPVCFVEQFGZDKNWOHIMNTWVEMEKMVEYTYNTEJDSHRLCZVMMHAPQSBPXNZXJEVSKDXNSHBMMUXIKTFDXWUUBWHLCACKQBSGPGCZYMTWFTIDNGJJVNPBBPLRPYFHTBKISAWODCGL");
    msg.params.assign("PIOAIQQRSIPXSECPNTZOCLMBREIOCRCHALIZEFQEJMZFVQHERJQNDYDWSFZYYWETRAXWONMBYYOLOKUDUXUIZFXKALHAJBGWUUFNWWMWWFGV");

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
    msg.setTimeStamp(0.772117454986);
    msg.setSource(44689U);
    msg.setSourceEntity(181U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(130U);
    msg.cmd = 205U;
    msg.op = 59U;
    msg.plan_id.assign("YGIDQLLJMIRHIKIFPWGUHVBVLCDFONUUREFXBZKNXVGTCOIATVSEMXZEKJIOKPVYRDVSOWRAEZNHRLJHKDWSGEDCEPYDMPGNENBCDKXXXBJPBBQQZPWWCWAXQMTTEERDLNXYFYSAIYZMFHMUCTYAKPLPITJJRPZVRAQRPH");
    msg.params.assign("EVDARJFKKPPWNJDEZNXNCZQITTSZCICVESUCTSQVYKLSPOUBCKYGGLUIGYBAXM");

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
    msg.setTimeStamp(0.482594219484);
    msg.setSource(40939U);
    msg.setSourceEntity(200U);
    msg.setDestination(22870U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("PNPXHCXTGZRJSXKSBSLUUWCDSONXQLWMPHRXQJMGKZBCXXGVPWEZAJLDOKDKSFKOJAKVTYPYTUQLREUZTVVMAFEQNU");
    msg.op = 152U;
    msg.lat = 0.777860374842;
    msg.lon = 0.859171762983;
    msg.height = 0.159471777885;
    msg.x = 0.173673697397;
    msg.y = 0.831803044262;
    msg.z = 0.707518551013;
    msg.phi = 0.941076064281;
    msg.theta = 0.198771407441;
    msg.psi = 0.861879345014;
    msg.vx = 0.99228500655;
    msg.vy = 0.873586662732;
    msg.vz = 0.928742003623;
    msg.p = 0.590136039674;
    msg.q = 0.833045485794;
    msg.r = 0.80891123946;
    msg.svx = 0.415519714581;
    msg.svy = 0.00435143894139;
    msg.svz = 0.917584884553;

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
    msg.setTimeStamp(0.0695110341291);
    msg.setSource(18343U);
    msg.setSourceEntity(55U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("OYOCXMYDASRHZEOLPRZUOHYJTWLWWLQPGSBDYWHQGSTWCBLJYGMDTROTGPKINPDWNPZGUUHJNWFQXHKCTVEXVHCOFAVZPQLJGDSBYPUDEFMHCVIMEIAFXSTNSSVKIYLBTADLWUSCAANTNCIQKOEHBBFIYBJVAZNUIFRKMJKIRCSVJ");
    msg.op = 230U;
    msg.lat = 0.576800620038;
    msg.lon = 0.217495890807;
    msg.height = 0.566209592914;
    msg.x = 0.335211242243;
    msg.y = 0.696693281358;
    msg.z = 0.945887185624;
    msg.phi = 0.0400381732057;
    msg.theta = 0.753509612274;
    msg.psi = 0.984335752274;
    msg.vx = 0.493015860681;
    msg.vy = 0.503810537119;
    msg.vz = 0.832427642434;
    msg.p = 0.599530292633;
    msg.q = 0.704818752086;
    msg.r = 0.0359896709673;
    msg.svx = 0.900492625731;
    msg.svy = 0.269078598237;
    msg.svz = 0.423751425435;

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
    msg.setTimeStamp(0.850424369716);
    msg.setSource(60687U);
    msg.setSourceEntity(199U);
    msg.setDestination(16807U);
    msg.setDestinationEntity(40U);
    msg.group_name.assign("VJDXSVGPDNHGZQCNFRZEQTZR");
    msg.op = 81U;
    msg.lat = 0.996277486129;
    msg.lon = 0.903629194391;
    msg.height = 0.509504689506;
    msg.x = 0.769959844587;
    msg.y = 0.889767015645;
    msg.z = 0.248419733191;
    msg.phi = 0.568321557533;
    msg.theta = 0.229244048698;
    msg.psi = 0.21124489205;
    msg.vx = 0.113814620344;
    msg.vy = 0.267781825345;
    msg.vz = 0.154116756592;
    msg.p = 0.938199572024;
    msg.q = 0.566799621394;
    msg.r = 0.650609045625;
    msg.svx = 0.0167387320856;
    msg.svy = 0.80938355768;
    msg.svz = 0.385593358373;

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
    msg.setTimeStamp(0.836451856676);
    msg.setSource(22257U);
    msg.setSourceEntity(195U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("UABSMIHJVOQTYTMMWLXNUKEHUGFZLQEUMEEJSLTRYSJJPZBIRAMVDKCVFDRBHODRMWVEDFJUBOLAYZCDKSOGXQJFNJBKCTBULEPTNAA");
    msg.type = 180U;
    msg.properties = 69U;
    msg.durations.assign("YGMKKAERFBTHJNCTIMBDFWPRHEVJWOIYQSJBIXEKHDGJHIGTTCCCBIEVLLYVLNAGGOSXRPUKTRXSCOBOECAZMVUPUTGZRPXIDOJJFQEYZKOYXFQLALEKEMXLWSRUPXRFWNXFNUWSNXLPJCWDVUBZODBSZVPJBXHWVMZHFRKAACGDUISODCAQMYDYSIFWUMT");
    msg.distances.assign("XAMHMZWVJAFUPFNLWBLHDREDXTJJTNLFISWYLDCLDFZLOAGYCYZVEZSOSMT");
    msg.actions.assign("IEKVMYJZFGLUXKUXNJBPEHOFHQA");
    msg.fuel.assign("HMWVPHITFJVUZWAOTDSCMVLBYNOZQXADCNZLZNDCZYGDXEOLVHDROTKRQJWMQJFUSTBUPJVBPUDMBOSRKNZPAGAUFPOUEQJNYHWPLCXOLFPIYIJOEWVZTZEREMKGRMSKCYYQHFCBNXVSXDK");

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
    msg.setTimeStamp(0.469388088737);
    msg.setSource(49595U);
    msg.setSourceEntity(35U);
    msg.setDestination(2244U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("ATJTLOXVOAYEOSMCDSUAWVZKNTVMZRASGNEQFFJRLVVIOPCTBZFBGPWGKJVQCCQTWPKLYZRHPGGPMFEHNBSEIAUDTBHHPJGKWDEWIOZXD");
    msg.type = 247U;
    msg.properties = 180U;
    msg.durations.assign("LRCLHCZPRYFMOECIUZXVQVCIXOILNLEBSRPZDPNKFFXEDAHQBSUHNMYXDNDEQEHMKYTHFNYIGCYKSYDCME");
    msg.distances.assign("TRBIHTHFBPDDAGWQOSERWMDZXQDAKZBQPFXNOZCLNFSUJAUKMPHQGIUMPTEOVBAYIIPQNXYBTVSGNBOEBHDNCLMLYTYKNUXVIGTSR");
    msg.actions.assign("BTSNAKWOULOYOCTIQMMRKQBDPIZCTDUXGWUIPHJLQDIHRZAVKJJ");
    msg.fuel.assign("CFNYRXCLVVIADEIECGMDJFVYBWNCCFHQWFBOVXBMBXCICJSKAONQEHMZSHETJWKSNPOAIDSPQRTFTDYWYMBZQENLWAWTLWAIGGJUOTODJMMLLRGRUPBUQPRJPQWVRPZGIKDFUGHYYUXVHZTEDEBXHEYRUSKFZ");

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
    msg.setTimeStamp(0.741104864976);
    msg.setSource(61787U);
    msg.setSourceEntity(45U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(56U);
    msg.plan_id.assign("VBPZDAFFFBVMIGKEZCTLAPJERIFFMKGASWZUVWCFUQBORVLBPHIVHERTSZYVDHKCCVUZGSMJSYYUBUQTTFKDXTUSAYGLHGRMQPDZZLTVSSPWYCPNLPNXBQPBTWYAUPKHCEXFRGFGLHDANZKKJIOJRXKJOSWDXIJG");
    msg.type = 147U;
    msg.properties = 62U;
    msg.durations.assign("FTKBDGOVWUGONZJYINYWRSASOIXUFZSNOLFJKICHMUJMBGHPXPCPXFUAVICOHKAOMXVDLTXRXRQTGEHKYVDZNMZGWPYAWRESCERDZEUEWJQOIRIGWPWJEMIBEKGJJUPVMTLNYUGHZBNKTAQSFLHTHFCSMTWQZYKNBKQORLUQXKXUNJSRNQDEGSOZTSBCPDV");
    msg.distances.assign("UJCOAAXASZAQOIZNCKYVVMGCNPHGFCMSVNDHLMHSSDTKDZEF");
    msg.actions.assign("VVPICTADRBRNRJZRAQPFMCZCCYFENZMELVTOEMXSTJHGKYQEYEUWUXJGVGSRLNISHEKQXXSIZCATUOBGUFCVHBDHBTDKERWDIYIPELZVDSJYWLHVOLWXMKLUWYSHGZKHIOIQYROSIAFWWPMPQONHJGQWURJFKUPHWUUNBCSKZAIDAZMFXQXLERZBQQLTRSADQTHBGTNBNDA");
    msg.fuel.assign("PDJDWWRMUSKCJUVXLIUAVGUEXWVFPYYXXNBZMNZHGTCMGBOSTIEDOUGXSORHRFRLJAFJITOWSDMFABILUVURDIZKRZCVRSCKFRZTQMHTQKMJPPLSYTWOLWAHABMQLYDXAXQPBETUJTNMWPBESZFCNCQHEBUVSPVEQCLFDTHLIOYBVPZHXNSKKWHNOYYRPXQKIKBXVQWLGGNSGFHGHQOYEAAI");

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
    msg.setTimeStamp(0.970409418143);
    msg.setSource(29185U);
    msg.setSourceEntity(188U);
    msg.setDestination(13996U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.777695078035;
    msg.lon = 0.731935534497;
    msg.depth = 0.33232237933;
    msg.roll = 0.122943904797;
    msg.pitch = 0.287223268898;
    msg.yaw = 0.621332442312;
    msg.rcp_time = 0.720870586347;
    msg.sid.assign("VUZQSCVPCDSLLPNZT");
    msg.s_type = 165U;

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
    msg.setTimeStamp(0.81813740762);
    msg.setSource(14411U);
    msg.setSourceEntity(170U);
    msg.setDestination(14721U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.960032112598;
    msg.lon = 0.872893055806;
    msg.depth = 0.336714692031;
    msg.roll = 0.812201596084;
    msg.pitch = 0.0214083616555;
    msg.yaw = 0.487361036881;
    msg.rcp_time = 0.445899874638;
    msg.sid.assign("PIUJDXJNJBFGZUWNFNMRXGVRPRQVXOMHILZAVAWEKKLWEKYIGTQZWRLQEZFWSTDRPCUTMOHWAPDCPSETLOHJBGVCJDYKAWJVZLPABRHRCIAIQMVKJYXGIOJWTYKHDFQSNSNMCFKLUFXISCNHPSEUPTOQBDCZHYEDMFXE");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.643406760171);
    msg.setSource(17165U);
    msg.setSourceEntity(143U);
    msg.setDestination(43333U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.586238122408;
    msg.lon = 0.308741825123;
    msg.depth = 0.807509260588;
    msg.roll = 0.719261442684;
    msg.pitch = 0.368977917495;
    msg.yaw = 0.688593580134;
    msg.rcp_time = 0.552215777004;
    msg.sid.assign("UMZTLMWXNZGODTSOFUEVAPFQZBKYYLPPWPDRKENXZJFHOBMNNHKIDLSZCUWFECCRGEZTCDZEZOCHLUMQYPIDULDXQLBNBTEIRJAYWFYNWOIDSUWZJGQRFGJNUMEIQULKBMKVAHDEAWCSRIAUHYPSBJIRGWAKHSTWKEKVOJNHBWPJTXYNGLYXIVMKPTPIAOVYQOTZVARDVQTLAEHGMCXNSGVQS");
    msg.s_type = 104U;

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
    msg.setTimeStamp(0.345370178275);
    msg.setSource(61094U);
    msg.setSourceEntity(133U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(246U);
    msg.id.assign("BNSALTAAGSOKWIBIXYWSJMRIPDAHYOXENSIALWVFUNRFMORFXTVIQTCBDFQPRWWMLZVCZCHULMRKQSDDQPMHMVEBBFAJENATDZGRMCVQMNWEZFUJQVJCILEQOHPQAUDJNVCLBKWREZUUHTRHVBYZNYOGTIQQXVJOWSKKSJPHNYPCRHCXJXJKTHSUKYFUDGSBBOAZEYGXLWZPIOXZPVCZUEYE");
    msg.sensor_class.assign("GVLWUYSEKMYVZGDPCJFYRACVKWXDGTLOYRGOFILTRRABBNEKUOQCHOWJIGTHMUHAVITXMOSCGWZNYUDOFJIFIVKBOL");
    msg.lat = 0.345311386114;
    msg.lon = 0.54382547319;
    msg.alt = 0.170333257449;
    msg.heading = 0.924213420378;
    msg.data.assign("PNNCDMBOMRJCCVQBMKBYMAKYTXTVBBJNMLWUYQVEMHBSCGGWWXGCRTUJEVIIRZALKUZNJKLKQZAPMDWFEGIHGSZCNJNEDFPFWZSGIBLDGJMCZLTYIXADGHLJQTYCFOSQWITIHHHMUFPNRAZVUPSROSSJYUQXULSEKVTEXUNOFRBYDEQVEQZOOASDXWZPTTIATLQVZYDHVPRNDKFPGDBAFXMLILKNKJSCRPXYBWGQCORKOXEXO");

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
    msg.setTimeStamp(0.826752470758);
    msg.setSource(46085U);
    msg.setSourceEntity(171U);
    msg.setDestination(30086U);
    msg.setDestinationEntity(253U);
    msg.id.assign("BJLJFBHYHIIEMOOICAOXBUFIWDKLNDSQSOTYSQHDFTYEHNWVYDIGQHFCRVNJSUUXUKXATQNPKYXGOMDDGTVYDJATPWNIQNSVGZEDAYMVLAWTRMSUXPLJIZKORUFNZFOFMDLZMJBTZPDNNQMAVZJPRGUEMUBNEYQBTRVWAAGLRRLAITKPIHPQWVBFWASRFOWVHEGLKYSPBPLICXXCQCJKCJEBE");
    msg.sensor_class.assign("QEPKDIEUAUYFSDYXVYIZOZYIWHPMBNBZSBQLXDPRTDCVOZLPFOKFBVBTPMURSJBZTQVUYBQN");
    msg.lat = 0.245644850043;
    msg.lon = 0.848307630224;
    msg.alt = 0.793131419605;
    msg.heading = 0.260173477224;
    msg.data.assign("AMEOSATGRHTNKSPMBMHFHBALGQPVVXCIZUXXRLDJVNWNYUHPMXJNFRRDYYHTRHOFAWTSETOSXCOFHBZBZAYLLXGNVEFYCJWTITKUFZQLAIYBBQSDCMVQLXJPYWVJSQORUGDZIDOJEJZDOHEQPQUEACMZAKHNSANEWWLPVZOUJBCYGTXWMPUWWKVKCNICPZDFTCWBJAUKFJQNXUGSKYNISUEDRKIMIGIVZKEEBHFXICLDOLSRQGDFR");

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
    msg.setTimeStamp(0.937995123732);
    msg.setSource(59341U);
    msg.setSourceEntity(200U);
    msg.setDestination(29507U);
    msg.setDestinationEntity(151U);
    msg.id.assign("JOCWORXQKEHXJVLSSQXAVHIFNFBXIEZJWBANSPWFBMAGAFPYLWTRDTBDLTF");
    msg.sensor_class.assign("FQDDLOGBXSNXVERIMWEJHVLKKOQ");
    msg.lat = 0.980281615624;
    msg.lon = 0.303352861329;
    msg.alt = 0.0746322319764;
    msg.heading = 0.535368035876;
    msg.data.assign("IGCVVSNOSRGOCEUHTVVILAEYBQJWFUXWERMMKYYAXNQSFJFTBLPIZCBYJAYEGHMEKABUIYPZELUVHOKPWMFZNFDOTVDUIVXXSQTSTMFHCXRGVBTTIZXYOPFAPQWLQILUXHZKZHWEPJDAMCJTGJVZJFXQQPLQGSOKKSPZLWFGHUKWEZNFNBIDNYYREGPQDIRSKUCTBCIOLVDO");

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
    msg.setTimeStamp(0.69692564446);
    msg.setSource(42215U);
    msg.setSourceEntity(0U);
    msg.setDestination(15049U);
    msg.setDestinationEntity(181U);
    msg.id.assign("AUAMCKIDQGQQOMRQSCJEMPDGNFWJWMZOECAJATDZNWXOUUWIOFHCNBFYVFYVJPYHPKRFNIXUNYUMDYVGPFMZXCJQZOTUKMWRXPOOBKIDBVHBGHLXLSNJBTIHKSMSDTCELRXZYSAIVDQNPRCJKYTUSNPGLEVBTQEWTEEUVIGXHGZANRYFOCBSOWELEGHTLXFBRMZPH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PLXNHSKMDMRKCWBIXWXEJNLMEVZROYOEJJERWUAFFOXLVVMGPTUGVROIZQGRAYDLEJIDXZQXRCETNBAUKKSTPNYJGHQODKDKNATIDTSZFIYUQZFGXSSTCBWBJLJFKWQQPAMHLTUOAAVBXGHCHCFFVDNUAPGYWJPPMEWMXMFRAERUKJFOVBSSKSGI");
    tmp_msg_0.feature_type = 140U;
    tmp_msg_0.rgb_red = 119U;
    tmp_msg_0.rgb_green = 233U;
    tmp_msg_0.rgb_blue = 60U;
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
    msg.setTimeStamp(0.716229022723);
    msg.setSource(7246U);
    msg.setSourceEntity(198U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(27U);
    msg.id.assign("TFWVIMKIJJEDSPLVJKWGWQHWUNFUHWZRKBVYKSFRIRPQKJXZOYOTJQNTBQMQSTORJXUCKZXYEHPBCNOPNQXUWBQHVRLGTYITECDHOBMXGRRVOMAOAGPXQMQJKTHMKLCDGWFZPHNVBCALSXPLUFYNMDAEAALKGHCELS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DALLQTXFKMDCATOTWARYQFSVFRLOKXJZFCTOIIAPCLBZHIOUMRGILEYYFTRHKKEMNJXKGKIDYMZANQBRKNTTABQRVXOCLHFUBVHLPYZXBQMJSCUX");
    tmp_msg_0.feature_type = 81U;
    tmp_msg_0.rgb_red = 156U;
    tmp_msg_0.rgb_green = 219U;
    tmp_msg_0.rgb_blue = 122U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.621677615338;
    tmp_tmp_msg_0_0.lon = 0.194243983405;
    tmp_tmp_msg_0_0.alt = 0.46135636763;
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
    msg.setTimeStamp(0.255974278796);
    msg.setSource(32324U);
    msg.setSourceEntity(184U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(161U);
    msg.id.assign("XQGFNNKVPRFYLENLRRJVIQRDYOMUQBKEHPZZEHXDZEEGVXAZWVJOGAUOYFFJKOIUBCSTTTTGFBJILZQIHNFAUZSLKUOELIVVKPSBINDRCPEYWVLHEOBNRXAGSSHOPATNCWVMZZKOAIPMTCPDJMZUDATDCHSEWWTXWGXFQAIDKSYFGSKZGPXYLRWYLHCLVAOPCFTMKNMLYJDMSBXUWYGENCXTBQMWJUQNBPQIBJMAJBJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JBDAVGGSQXJJRZLFFBWIZVZXMPGJNLACCWTAMDDEJZLOLIHZBNIRPXJJVBCOXQMWLOEVEILGDHKTTPDUAURWQNUDSXCNKIPFFGZXBKNFNCLFSVOXREMQWZVMVCHSRYAVTSZTOQETSYQCJSICAUNFEUSQGEWCIAPOHIKWDHJMAGRKTQSLTHIMPLHBMYBUFZFPCYTOKNZVESHKYREGURNAWJBUTDVOIKANFWYWHDEXOYYHRR");
    tmp_msg_0.feature_type = 183U;
    tmp_msg_0.rgb_red = 41U;
    tmp_msg_0.rgb_green = 235U;
    tmp_msg_0.rgb_blue = 129U;
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
    msg.setTimeStamp(0.8122728358);
    msg.setSource(14578U);
    msg.setSourceEntity(184U);
    msg.setDestination(61410U);
    msg.setDestinationEntity(186U);
    msg.id.assign("DIDATHMCSPEMRNRYBUFJSYFJSQCXTRRJXFFWFDBSHWGSUEVOWROLQPUZQOVJXJCJGMNLKYMLUEILLQJILDNFKHEMBDYKXDGNVUPIQXJFWYMHTUGCKDZNIABEFGKSPQB");
    msg.feature_type = 213U;
    msg.rgb_red = 99U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 69U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.761070707576;
    tmp_msg_0.lon = 0.799699146178;
    tmp_msg_0.alt = 0.599892266798;
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
    msg.setTimeStamp(0.047511940225);
    msg.setSource(28815U);
    msg.setSourceEntity(131U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(201U);
    msg.id.assign("RKBPFGEDCPRXCMKVXOOFCFLAYHJRQIFMWXUGZAVUSWVAKUSUTXGVBHTEYOEZIZEICDRVZZWYIKOVDOSRHZJEHCKGLCXSSJLWWEEHNGGELIXLDJCRAKSNUQMOLXVENQBJENABMNKUXNPAKHHCMGYPPAVZUIHRGKLINGIDFQSYDMLKVYNYBFMHMNBQFMQWUIYTRJGIUPJRBWYMANOLQRZTTCOVQBOTCJDYHUSWTJWDAJWPPD");
    msg.feature_type = 203U;
    msg.rgb_red = 50U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 24U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.918465875603;
    tmp_msg_0.lon = 0.168095048267;
    tmp_msg_0.alt = 0.763056136768;
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
    msg.setTimeStamp(0.724795624414);
    msg.setSource(62388U);
    msg.setSourceEntity(97U);
    msg.setDestination(41512U);
    msg.setDestinationEntity(216U);
    msg.id.assign("RZDBWNFHIRVMKDDLXVYGZXDOPMOMRPZTUFNATRUEINASZIKVWDCQIXEOWFEVBGQYVMQTUOYUGLBISSTEILIYZQABQEJFWKKBQMCANRYZXOGXGUVTMHRISVDPKDTCNDHXHPGRJDKMHUNEKJBLIEOBGSFXQJJYAFPAWJGAWPSLGSCWTUSSPCZLPKTFLLOBFQYMVPFOUUHVEGKJJJFYCPWTCCOSYEJWQZAWQIZXRXXKAZVLCRNRNOTBNC");
    msg.feature_type = 94U;
    msg.rgb_red = 89U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 226U;

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
    msg.setTimeStamp(0.660955004803);
    msg.setSource(44820U);
    msg.setSourceEntity(136U);
    msg.setDestination(5694U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.657622072632;
    msg.lon = 0.566557179621;
    msg.alt = 0.203456422058;

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
    msg.setTimeStamp(0.903889142489);
    msg.setSource(40266U);
    msg.setSourceEntity(201U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.711209150169;
    msg.lon = 0.573656016521;
    msg.alt = 0.393892535783;

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
    msg.setTimeStamp(0.47542446273);
    msg.setSource(52358U);
    msg.setSourceEntity(146U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.851375880756;
    msg.lon = 0.237799308905;
    msg.alt = 0.935350034454;

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
    msg.setTimeStamp(0.203138124445);
    msg.setSource(46716U);
    msg.setSourceEntity(50U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(221U);
    msg.type = 139U;
    msg.id.assign("VUMEOEYJZLVFPTAOBVZWGPJAAYRMXNHGKDFFVBEWJUMSIUNR");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 16U;
    tmp_msg_0.eta = 47594U;
    tmp_msg_0.info.assign("WDBEYTRPALKKSCNLTLFCPBMQQHKTFVXHBECOFNLSOPLDDSEAXXQQYFNETJFZMMNLQREXIPCUGHGIKVADIGBHMBBUQQDZNXLVPJYDHZFXWKEJYPFARETIHODUWIKPGKJEXCQWDUUINQOIVAZZAWPAOEDVOOTJYHFKWYCQHGCLJSDNROYSUMBNULOSFNMYZYHAGBBPIVJGCVMASXTGMCGROGXJWVJRZIAWUVSS");
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
    msg.setTimeStamp(0.0177390991432);
    msg.setSource(20700U);
    msg.setSourceEntity(130U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(215U);
    msg.type = 11U;
    msg.id.assign("DPMYVXUJNOVPAJFTZCLPFKFWBBYCLGLCUYDXGZAXEUGKLAWGJWIGYGTPHUMORKXSSFLCHJTKZDSIMKFRBGTHUCEZAXPBCZDMVOMIIVEJKYOSMUENOQWONKSMNADBIHOWUVYSDVRUWNXIWRAGJEMQYFUVKSQTZTNDRTRAQQHJNXODJHRVYRHMHSCQZXAYDLYXVLUWEPEBZQLNCCTADR");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 45462U;
    tmp_msg_0.type = 40U;
    tmp_msg_0.max_size = 7815U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.395814291179;
    tmp_tmp_msg_0_0.base_lon = 0.364734826115;
    tmp_tmp_msg_0_0.base_time = 0.11176786299;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 40286U;
    tmp_tmp_tmp_msg_0_0_0.destination = 50275U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.100147732619;
    IMC::UsblAnglesExtended tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.target.assign("OVZHFBECSIAJQGEGUOLDTDEHHYIXSXJMAQBLVTEHPLOZVZCKMJQWPTRWJSUQTKXYNJTNPFYJDXYEIWBKTUDNAQICMBQLYLQFDBORTIYVDGVMLERVXKNEMDPNNYHVAGVROPSTODUVIJFBULPQBRIPMZKWUGEXAGJZNZQTSFCYZWJPPKCXOMWKAIWGASAHTCXQFFEGHUYSRZNFIUFGWNLRRMLNHWOSD");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lbearing = 0.0452795788789;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lelevation = 0.176627638046;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.bearing = 0.417612622489;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.elevation = 0.848904739261;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.phi = 0.230974395874;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.theta = 0.57914954783;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.psi = 0.11330301262;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accuracy = 0.175235107899;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.132111195524);
    msg.setSource(39021U);
    msg.setSourceEntity(208U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(214U);
    msg.type = 187U;
    msg.id.assign("YPTQUZBEQKGCVHPYZBQZHBDPMSVAOUBWCVTUKLCTNKPUWFHLHPTNCMZDAPCLYEFEJNIRXDKFQXKUGOROXEGNFREISSMHEOZVNDGFIIXWYJFSMIFIJPLLECEYKZAQQYSHCOOBKXEWLADKPVTJQRBGQXNOTSMXTRXGWMLOAMPTDJHDAQEBUACCSKUIYWBZYAWZNMRYIZOSZWHAK");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 619649026U;
    tmp_msg_0.messages.assign("UAHIKJAEWHQPLBOPKNGDRJKESNSOSRPUMAJKGTNCJFDLUEUZSDOBPCIYRXLKWTDZZMWFNDTZCUOGSNBVEANIIEHZMXWFNS");
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
    msg.setTimeStamp(0.475145984541);
    msg.setSource(64593U);
    msg.setSourceEntity(146U);
    msg.setDestination(26239U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("MDYIVXSHMFHAEALXEIDDEKOVPDBHAYYJOIAZ");

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
    msg.setTimeStamp(0.207226097032);
    msg.setSource(33834U);
    msg.setSourceEntity(42U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(238U);
    msg.localname.assign("WELYGFBLWWNRYZQRWGAFHZNPOUJHROOAEACAIHBFPHSHIYELUTJQGCFWKJZVVXLMEDBGHPXEVXMUPTSMAINKEPTHGBOOMIXZOKTUMUPFYJWLUERNHRGROXCZWTQBOKJFCXFRDIDWSKQDGXKHRXNHVEUIGQMVMMCIQLYYJTZRUDMJBKDBSXATWQNN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BQKXVDNBOCHJSTOATDMQFQZNRFMWAUYPWNEQKORDDBZCIPI");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 33613U;
    tmp_msg_0.lat = 0.917678480898;
    tmp_msg_0.lon = 0.486846761763;
    tmp_msg_0.height = 0.877258227798;
    tmp_msg_0.services.assign("QFITCFSKCGQSYXJBINQCQCMRFSAVKSNCJZLZKNKWZMDBAYRDCMMWBFIIKIRPXSGFRHOTLVRCYTJFVONYDHEYWJKAQCZWGNVWPUBUDNNWVQNRHBGMBJOPOGHIMAATDVTPBDKJFLXNRQVEOIJBYEXESHHEKYTOOUASLPWTHGUHZHUJLZMNGAAUMVPYKHIZPDSBMWXXEGCIYQAUUCQWKAGJPDQGSLMDORJLRBRDVXULVZLWSTOTZFFPPXXLEY");
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
    msg.setTimeStamp(0.34787570531);
    msg.setSource(16765U);
    msg.setSourceEntity(99U);
    msg.setDestination(29651U);
    msg.setDestinationEntity(23U);
    msg.localname.assign("SDTTKNEVJOBREQFYIGGESONGFYYBVYCEODZHLLSRHMZYLTWKICISPTLXFYCUDQJETEDWKNXGVAKBNZHPPGMBCOTSDUTUMRZNMQPIBJAJBRUOMYFUUHPIBQZBSSPDQUVJXEWWRZQWLFXKZANLHVJGCWKYPPAVFIHCREZKXAASBIHPCLARGDWQWAFFNHOVMXGZDJTDJEIKSWJMXURXVVGMOHDHWTRRBZPCXONIFQMNKCLVYCIYFOA");

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
    msg.setTimeStamp(0.645888869261);
    msg.setSource(42817U);
    msg.setSourceEntity(52U);
    msg.setDestination(37530U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("GLODORINPGTTNQUHHSCZWAYRXVSQZZCKMJIIYRVVWMIERKARVULTJEXSFIPKXHKQ");
    msg.predicate.assign("YZPHRBVMUWJGUFYDEYOIZURBHBSVNHESTIXKNSWCUATDVAQURIUISAKCYSKXRRZWFNDGMOCVNAYCWSHJSDLNZGGXDUTKONXJJGGDFOAWYHEXFMVJJJVBIBPYPPCORZNFWQBEQGCHMTLVWAOLKFDATPFIBTWICHQTZLBPMVDOXJGQOSNBRHCLLWQEZKBELAIXCLPVVRUXGXPMFIFYNGQLANOHHILYAEZ");
    msg.attributes.assign("CCCGAPPFRKEUBJD");

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
    msg.setTimeStamp(0.245372658397);
    msg.setSource(65028U);
    msg.setSourceEntity(133U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("XSJNVUWWDZGCEFVDKR");
    msg.predicate.assign("CWESRPXKNZGHKOLHQZXTSTHUXFZLRQPFPJXVQUNFDFOIFEMDITSMPQQDYAWHNZBSCAJGJXTEQODUXAEIMIWFQWGPJYJBUNJAOKWKWGLSOSGZNDCINTELEKXCHSAZVXRQBULXYOQTVBACFJOAHFZUAWNYDPROBMRZSCLIPVQMMFVDRBOKVFOGNENEYUIGJRCVJTICLCGKTVHWLKRVUPMZLNXYDZIHWAGDEEYBSPMIB");
    msg.attributes.assign("OIJDHBSECELTILIWZIGCJMPITYWRVXDZMLVWBMUREEUUCIBVGNYYIWXTFDFAUPEHMSSRJYBTJSADZWWCMMOYQWVABJCXNSENSTOCGBWDBLHKQZQVAANPUGVVHHKXUOOBYCRXHFFOWZSRRBTDFPTZLNDIKZMTRKLQJMOHUSQYNCPZRCQCVQTGUJJVROOGKYXHZAAT");

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
    msg.setTimeStamp(0.847495721309);
    msg.setSource(56381U);
    msg.setSourceEntity(149U);
    msg.setDestination(18669U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("KROMLBPZMKGQMXITTXRZVOSLZHTDIDGPGEFQDDZLTQSFBUUVNWKMAATAEBAHIQYHXXVJQFGRRYHXLJRXABDLNSFCZCWCZZAMRNJECPUVGJXEJWBZMQPWOSEZWOSUUODDIUBDAKODUNPSLUHAJOSQVGNOKPYMGHNBRXYACGWRELYTKNVAUELPWIFCMTGLWFSBJVCPJQQMCTBHNYLPUKJFOTIPOCHHDWXMQIWIVZNYEFCJ");
    msg.predicate.assign("HFWCJKWVQCNUVAUHUQMK");
    msg.attributes.assign("MMPMVUWJUPJNPFZKOEGOQDFUCEHXWKXAOABHJAUEERUTRCHSURVTYLNOWVUD");

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
    msg.setTimeStamp(0.339250676001);
    msg.setSource(9006U);
    msg.setSourceEntity(156U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(176U);
    msg.command = 160U;
    msg.goal_id.assign("XUOFWAUWEYTSTGZWLNTZMVODFNAHHGHUSGQZHKVBGBVQAJKUQPOTXFRSYUFCMMAXVUJKNWLBTVFCRPRERPIVSNJKOPAKMVCSXIGJCURZIUAPIILFXCWFKSEZYQLBDLBFALCPSOSAZINYGZPVCSTKLYBONMOYIMDJJUMMGYBYEGNWLNXBQXMKRHGQOCTPHTPEABNHVJWLJRS");
    msg.goal_xml.assign("GKLTNFOHQCGM");

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
    msg.setTimeStamp(0.795673176558);
    msg.setSource(23952U);
    msg.setSourceEntity(105U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(53U);
    msg.command = 34U;
    msg.goal_id.assign("WWOUASGMBAFXMTDDLSTFIMKETUIFPASPKWOZDCHXSHJZYUECDMIFWROQQXVUEEBKRJAWQMQGVRVVXOSUKRTLBQBGFZOXEVMKRTISZHJJEIAYVKNGRTZLFAPYABEYVSYKBILDNCYZIHQNWCUOENTHAPPPGOTUMBHOUMLXNAPGLZJJQCVOECVBIGWPHHPZHSPDYJYJUFNTDQCZKCGYSNXDBLXRAKKGIMNONMGXEFWRN");
    msg.goal_xml.assign("DRIBNHFHAFNXWEBPXDPVLWALQESRHBYQUGLHYYLCNADSZRFGEXTFIPIFKBXDOQSTRHVUKRUMKEHYASODOXLJCMOJWWGRTDVPTOXBGKYURYUWZPUZSHYMGRPXFMNVROJPICQJGBCGIIJKQTVASTNKXOWGIZCAMSEPTFYMCW");

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
    msg.setTimeStamp(0.111379384601);
    msg.setSource(46365U);
    msg.setSourceEntity(69U);
    msg.setDestination(23090U);
    msg.setDestinationEntity(162U);
    msg.command = 36U;
    msg.goal_id.assign("RVAAWVUCJQRWPUHWPEJNEDMCEWUJOCULNGIQLMFVSYBYL");
    msg.goal_xml.assign("PCSPDHERKCSSHXMLDTKOBIVHIHMON");

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
    msg.setTimeStamp(0.779228438717);
    msg.setSource(32976U);
    msg.setSourceEntity(109U);
    msg.setDestination(43486U);
    msg.setDestinationEntity(43U);
    msg.op = 120U;
    msg.goal_id.assign("ZKSODVHTQPFLSMSIQZSCHXTPQGRTRMRZMWLNBHRQFECVGNXHWNUFNFXUYADVEKNPBEORDPXENGCPVHMWYKHFYVCNBYGKGQIFBUGKEXACWVDDYXJWQTAQACEONAUIFOJAWKTTJSYBJVCZQDYULCIJAHFOZOUEYDBLESPAXTGLZXTIZYKVALEZBINPKTWVSJFDUJRQDORJIQYWKLAGJDPVSFLMGUBIMPOIS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UUQJPYZQNGNRQTJDBBTJTZEZQHXWZEGKCYPNOFZILEADQGGIXOMQMBRRJLOSAPRPBCKGDWSIOELOXKEUXWFAJUMTEKTZRHGHEVIWAKJVFLWZU");
    tmp_msg_0.predicate.assign("VMNNIWMNPZKODHAXA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SFFLFTYMEKTXECPCPEKGKJGFWJLHMSKFGZFYZAGGLVACUJRPTYQSZXOQDKFNUGLLLIYNKOWKDCPEJMJ");
    tmp_tmp_msg_0_0.attr_type = 140U;
    tmp_tmp_msg_0_0.min.assign("KKWXTIKMZPOXKFJOAYGHRBWUAHBKZXVLTLJUBHVQGOQHTSVNKJDEQFYJJBZEJYPVNBRLPUOFXRKSLFIPJZGUBWHXSCRZJDOFSSTCEGKLXMLLMDVFJHEPAIWOBYSTTAXLLYZTHJQBRNLCAIIUAWAUAQNIZMQOUNZFODNERPZ");
    tmp_tmp_msg_0_0.max.assign("PFQKZEZYSCRVAGYTNAKMIMHAXQLJXCSPHUEUWBMGIPEXKIHSREAYCYOXOTHJXHLWFHUCBBBFWEVRPDZMGLXXIAFAIYDBRZRNZFHVQUMESKKIWYHBEOKGLMXMLXSRLASGOBNDZPXBYTBWIERNNVNIVUOQWTLJWSAKJTKCDDLGDFFKVJTCI");
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
    msg.setTimeStamp(0.0566734509471);
    msg.setSource(9381U);
    msg.setSourceEntity(46U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(174U);
    msg.op = 134U;
    msg.goal_id.assign("VEULEMDISHTDEQGAICJULCNKPNSDQWPKEDWGZCNCIXTODNWKYLRSXGCOEDGARFCGDZKTCSSZFUGHBEAJYJGIQATZHEJVRHFOTGBSM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IUFODMUCXHFJCRFSWBKXTHOUMQAVBDXQAHHEWIHVSBHKXNEDNPVFRIWTTBFUOBWDXWFCZVGRSUYZBOIRAAILHGQEOCXODPPZWATSSQNZOAIBNBPIMKCMZGTCHXSARZRADYNGWURMSADMBFUYYKS");
    tmp_msg_0.predicate.assign("MIMLLWIXAPHXURXOUCDVQRAWKGZJKISGPQUSNQYGEQOCHYIAUYWQOBGYVSLFTIDBJGPTMJZSPVNZUECYHXOFZRACNUWEVPPSTKRKBRTHJHQMUYRCMAFFKOZQUWMW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EWTXPCGFBMRYNUZIJVDBLWQTHPAQDKBVOHSHYXGSEAWMGMONXXCFVMSZLYQRRUKRSIPOMHZWSJIBBHPOCAQRLUIMJYBOKVJEONDVPHSFITEKDTFXBDCEDCTBGFWITGXZQRSPZKDZIALLKRBDWNTSONHCAVRCFUTUQFYJGC");
    tmp_tmp_msg_0_0.attr_type = 60U;
    tmp_tmp_msg_0_0.min.assign("IAQACXOPRUWJCOYZARWVALUNIYURWWCPJXUGJKFDMNGNKFVZTPEFMRDMHIJCZTIYXZJZWSTXXXQIIORTSBVLHJEPYKAXSFTRMOTDKYUBPZHKOZTDGOKNKNBKOQEHFYUDYLQDBFIEGSGTEVM");
    tmp_tmp_msg_0_0.max.assign("KSZUVRFXQNPBLTWLXFFZEIIMVNWORKQMKAISFUUIAGTXEJSHHLDFKAORRAOBNMPJCRRCKGOKMUMBUNQCDNEMVMXCWEYDDUUVXOYQDVALRZOVBYREDUOYXYELYBBQWXTXZOACEHQZTLGSJXEJCLGWFBENAZWVEFPZJPKWZAQINKJBMYTIGGGJXTPKVLQDSLTKGLSCDWHHOSQIIUHQCVJCURDSPNYYZVTBFMTH");
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
    msg.setTimeStamp(0.924516811028);
    msg.setSource(22818U);
    msg.setSourceEntity(47U);
    msg.setDestination(61098U);
    msg.setDestinationEntity(38U);
    msg.op = 4U;
    msg.goal_id.assign("JMVDOPDLNRPAOVYYLAXZITAMZGOWUWZXSTQLSXPHRTSGDMKOFUBNDWNZIGTTNWURAUZPDMMTKGEWGYAREWSPDFGONFZCQSHRXDJOHFTACBTWKMUNBGEVQJDHVDHERXFIMUACLMYENSLWKCWSLIQHGNYHJZARSAOAXBKYVIEIUCHYNQXZXWCYZZRTPKPUOFIKFVSEGEUIJKPOCRVLXFQMDBJKJOPBHI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UNBOXAAXOYIXJWXEQNJJVNFJZHWTQVBULCGMRUNCFSGMHIGYSEMGRDHBPPZUOEDZOLBBKNSTWHHWMGRTDCGIZHKTRGYRAWOSEYETIFZFNNVGQPOFVJJCUUEUWSC");
    tmp_msg_0.predicate.assign("JAGJAMXPWVEXJMQOHBZMRDBMIBKZEGXVSRJZJVWQRCXIDAYWFZFDTVIPTLIOBWHWUYKUKBAQDYXTUIRLYRHFDVRPLHXOYWZKNHGEQNZTUIOGURCSSFHTDXFJMQOGEYKALNDAHFNLTTMURENUXGMTQOHPWCMSKKBJGXSYVELZYBPRAINHGZOFJQMCYQSQEBOMZLLWRTLTESQONKANICVCEFFJCKVUAHVCKIBNJEXSSCNYLPIPFP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XUTPJMOZGEYNPHCAFESCDVOHFMTGQJBLZDSYFMBGWIBBKVTAZUZHKVISXOYIKIJWORHAJUNKPYQMHEMDMDHRQLDXEZKRCUSPKQQPWOGGFCQNAQVLUHRVGISNGCVLEMTUQPKIZDHYLWJJYWUYCGCMLGYAETLGFHTOSVXCLOLANCQFFJNEMOVCBLTW");
    tmp_tmp_msg_0_0.attr_type = 184U;
    tmp_tmp_msg_0_0.min.assign("URIFDKMESBCJNOEHZFMHFWBHGALHRNWGCOPHAQXINZAPIUISJSDKLHSPAHOGROVQYENWDZFJVUCYGXWFCITPYVZDBYGJPQKTXRIALMRRBXKOTBZCNRFNPMEFUMDEEUXOXLIHCKKOGWHULCAYDSXTLKQBEPCUUQNBDNTTZEKJBDLETVVPRLXQXIYSJCTSDFVPBGPWGQFNJJTIMAROZYBSAOVNMGEMGTMCUJXYAUSQMLWWLAIZVJYORVFDS");
    tmp_tmp_msg_0_0.max.assign("IDHPKFOJCVLUUNCEGLXUWSGRXAPAHOLALYUSROMZBLXFBOVNFGGYMJJUNBKZZKDJ");
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
    msg.setTimeStamp(0.204653326959);
    msg.setSource(62610U);
    msg.setSourceEntity(185U);
    msg.setDestination(58561U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DFZGOJVBOLETTTRKMREUJNIKTBQBRNHIWWHPDUXKQSTYIBOCADKVPOQXLPXIHVGJJFTDPOXSBUSFLRCZQDZBGLFEASKCPUGGHFUYUAYGAHXQTZVB");
    msg.attr_type = 6U;
    msg.min.assign("RUCTCJGJFMYUNXZPILYLALMJOTPXFESDYKNGDBROPNMGQVQASDKEHLIUXSGTMOHUWGEVQKZTPTUBWDDSRCMXAOZNTEBYLINLMUXNBYQYCFFXF");
    msg.max.assign("MOBBQZHTWSRDJVRGQCRLMCBYNVXCIDVOGFQDTKYTEQTELLZJXPSYEFJQBUKTVMPLSHINQAJWTVFXGRKYWFKDHFALUZJHNTDUIOXETBXGBQPVLLPQKLJEWKABOPHOWFWYPOIIJBPOWZKRKPRIRNZSYZZICDFAXQAOGYJNXCWURPAHHUABCUR");

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
    msg.setTimeStamp(0.886438270258);
    msg.setSource(19299U);
    msg.setSourceEntity(40U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(144U);
    msg.name.assign("EQHCHQDAEFRYMBTSBJVGFOQWLOLRVOCIGDCSZXHNIVAIJAVKXOLXGSYDAABGJLRTECIWMMIXJYWBZVEJCLXYAWJQFNMUPAPXKCUHEXDMVGICTPFMMSBWZURHFNZJOVLXUNKNRHTEQUPQFTNGBMOQFYCIVPYTDKMDFBEPDKUBONOYJKGUXWVVEZHUHATGKIWIPDRZLRDZNYNYSTZKTLKPRTKOYXZQESSGHUQLZCBNUWAOEFSLIM");
    msg.attr_type = 149U;
    msg.min.assign("SOQKHLZVFYAEJXBHTLFDXNMTRYGGKVUTILZLGKNWJOXEKLZMTBGOQRRWWEPTVEAWHNQJPALXMIVPDHNGXMONWILYGAPBNTJIFGTTWYOAXQJJHEUFYGSKCBCUTBMCQTMCBEF");
    msg.max.assign("XRMXXXELRHELGGSEPIPAYWUBNPQPSZVNHGRUSDMIDVKIYTVMMTBQFCLTZKJWYMCLOUZCJJOUF");

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
    msg.setTimeStamp(0.184628134486);
    msg.setSource(19167U);
    msg.setSourceEntity(57U);
    msg.setDestination(51661U);
    msg.setDestinationEntity(86U);
    msg.name.assign("HJJEJIJZLVFRGBXMPAXEDEHWDGBXDGDTUWCPTBTKKXVFAEBYMMTAZKNQIK");
    msg.attr_type = 25U;
    msg.min.assign("FYYOGIKUHXUZYDXSPCPUJZTTNKHKVHEQLIHXFSZBEOZFLNXEPSSLFYOXRZWMDPFVLCXJQKZTGNPRNVPXVGKTDVCERXWAIAECORQSMMMSDWT");
    msg.max.assign("FATUGDVFXGEDNJSEWGCVPHOQSUNYFOIJGVXDYJLBXIOPPKMZGHUHCVDZQJZBQTPPEFCFTCYDKWBDRAAKEQAJTVCJPWYMGLQAUEYRLNQFGEAZTAAIESBVMJOLLITBSMLGUKBYBRRWKDSGEXPRNOKSZFVW");

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
    msg.setTimeStamp(0.0907811994432);
    msg.setSource(15221U);
    msg.setSourceEntity(143U);
    msg.setDestination(62473U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("YQKBHQSPLAUZHXYLIZLVMZTRBKWGDEXKOQGKCXMJXIUWACVGSUVFANSHDFTBWWOINGPOXJBAGIYFRWPOBCRVSWEXZLVIPVZJUUAKHNLYZWLDFQXRPYKQESMWTTJUIMBKMMPNKIITOHGBLSTHJUMDAQLFNKVJNQAUVWYYRCRKBJWXO");
    msg.predicate.assign("FSNHGWTWJVRYVYDGBCSDMZHWFQIKIFYBINODQEMOZHKGTEQZQWMYDPTTBLUEKFVGGUWISDKHHLFNBQCTGUZTLQP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AOHMKWRKGFEVVHLEBZZKFPBHEPFAZWTSEGDBSKKAGRZHMIBYPABCXVBWRAYFCCYNIVPHQATLPQCWSJQUXPDXQGAZPKEQJKNWEFVEMSSHNZOWGUFSSWBTTLMYMDYFRSQNOKAVCJEIDJYVWSIUMDLXNQUUWJQHLFMGXCURTIXTUNNQAIHEBBNUEULIRTGVRMYNJKUPMOYRDQGLGXHDTZJICXHTFDRALIONBXRIYPOOZMCOV");
    tmp_msg_0.attr_type = 202U;
    tmp_msg_0.min.assign("GPUQTWKEDKIROVVTDMZBIPHFNNDOUCLVUXHAYRYVMVAZGPJUUQSFMFGIJHMDSRYBOUFYMRSOEIDNCAJMTQLJMEAODPNKKMLBODSHKSHDGNHLBCSPSGWQXQQYVRJEZXYGPZYJRXIPFBDFPULBFTPLWRMKARZITJFPMHXCWBERCZTTNVEHNNZYFOOTQWSTCZSYXWNEZLIBVIEJXQOUXBGGAKFWENKAXKLWIJXH");
    tmp_msg_0.max.assign("HOGNIUEOEWMXMTOHDCVZRLRLPOIXXTFVLJVYCMNUICPXFBYSGHWDZUBADPQNIRVYWNQZCILGONNTSGKTESBXVBMZHSHUEXXJWQAOLKZMDNYKWPFAJQTCIWBVCFLJABZZYGRFWYUKYIKWSJSKRCNVUSJQAGCMQADLZGOHYVSBIUJFYUAOEIUEJWDMFMTXYRLFQNPEDHQEOAGREZLQDPBBHZAPAP");
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
    msg.setTimeStamp(0.39630217465);
    msg.setSource(18124U);
    msg.setSourceEntity(157U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("WJAZXSQCPKVWWLPMVTGQRZMMZIUJWUXEOAXMCEKDAYGYLUYNRINACBETIDCMVWUXCRTNCGYEDGLSSCQSYUUJKKATLHEMVNFGGRNQOFOHOZJELKKJDZCUHWADRZGIWMKMUOSDFORKYPWLIEOBAIPTII");
    msg.predicate.assign("VKADLFPVWETYUIVTNIWGUDGKCJIMLNPEMQFLLKOORKIDZYYVQGVTJQZFMHBSOEDRPLDABZDMYDPLWHFGCQLJOGCLZYSQFCQKRFCXMAHJUPJVAHZSIGIBVCYRKMNUSBDUBURNEJZQOAZDWFXSHXAZUSVPXHRWJOPEFYBJVAMTFIUOOKOWMYHXPEFWGICOYKTKGEJPISXATUBWB");

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
    msg.setTimeStamp(0.361915318192);
    msg.setSource(35987U);
    msg.setSourceEntity(7U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(158U);
    msg.timeline.assign("KRCBOWLWPOEXQJMOFIMVKLXUHQRUAHKMDQGGEV");
    msg.predicate.assign("TXBQLZUDSHTFHPHXTBDUTUKUDBZEMMIJROXEKQZIJNEJHLGOAJCTFR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AMNFTSCDXZEJIBQCDLAOFYPUUKHJIDQQRATOYRMMUBLWJSOBLIDZCRQVJXWKQFNBGUTFLUIIWZFURRTIXWVDSCHNNOKXKMEETPWSCRAFN");
    tmp_msg_0.attr_type = 33U;
    tmp_msg_0.min.assign("BJTBHXTVSLPCQLRJLOZDKICDXGAKHZPHYOCDMEUYFMEXEFWIPMRTEVVEHUIPNVSZRDBHDSALVKJWJTMGIJFFIALHEJRBMYYFMSSLWBOOVASUKGZTSCBQNDPTGYGQUYUZFPCXAHOYQNTGJIRUDFALKNCNXIGZGHQWCFMRVHUQYMCIZEQLZBUKANKXDEPLINPPSCFENJAWKRPRDCTLIROMJBRAXSYG");
    tmp_msg_0.max.assign("QBVBUVKWAQZFUTYNMAIIOMQWQUDMSPPWXVSKNPZLFMQNZFEPEYVZXZWJRAWFOBFRXDHGGLHUUSACUTOI");
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
    msg.setTimeStamp(0.811752192289);
    msg.setSource(51050U);
    msg.setSourceEntity(154U);
    msg.setDestination(53003U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("EVGJPKEPKSHZOWTXFXOOXUESUNPXPNPDDUHPWKHWWRC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TJCBHYEGJJ");
    tmp_msg_0.predicate.assign("VYTLSEPPPQVTGKGQSMHELNNFUCHQOGAKQLDWCSPYGKGPBINQJHAJLQKTKIEIDYVXNYUIUKTMYIIFUBFBVZCRJEEIMVREJNXJTBOOIJUOFMONSBHVGYADSLULWYVZZDXSEYPVCRRFWAHNHGOBZPYDBXBZXFMVZIOHMNJRWCTCRCLXFJDBNUKMIATSKMC");
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
    msg.setTimeStamp(0.0260471220366);
    msg.setSource(34562U);
    msg.setSourceEntity(237U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(79U);
    msg.reactor.assign("AXQZQOKLAVFNJLMNUDMZJKDREGUURMIYETHRPLYWKCAVBLVFUZWZOCRKDYOZJDGXQJKG");

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
    msg.setTimeStamp(0.312116763659);
    msg.setSource(31201U);
    msg.setSourceEntity(30U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(116U);
    msg.reactor.assign("PDOGSXJAYIOPYGWVECKBBSENZHWMVXDTMUTJPFIBELVJRQFZPAGQXHGORQAISZZWBZRFJVJRVXXRUSYLGNXYWJIMIMBLOQOUSSBRUWDTRMJTOP");

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
    msg.setTimeStamp(0.0850021766144);
    msg.setSource(18452U);
    msg.setSourceEntity(248U);
    msg.setDestination(30248U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("MMVAZRAMDHVFVCUYJLSEMUFWONHHCSTNPXMPAKPADWESTGIRHPYUUZABZKNSOUBKRTCQRZQLRGZHXIQFOUOIHNKOMWENGVTROEIXCTCDFSUWUDYBLXBVCCGXDSDIXTNVZEMWQLLGLDTMJOQYGWSBTHJKTPEHACIFIQJLHLYOGMBDPRBYXCK");
    msg.data.assign("BMYHRKOMNKWZGQQDITRASTEPFPAGXCOFCERQJYEHNSZOYTJSISLZYLOLWVXJXDPHKIQUZMLHIVNVHDLQPVGHXHJDJKIUPYWFZDAXMEGNKZPMAUBLWXWTTLAGKRDCURXHYZVQMBEVFNOJHKDLHQCSEAXVWCDPIVCMODRRRFDTNJYBBF");

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
    msg.setTimeStamp(0.806637860586);
    msg.setSource(22431U);
    msg.setSourceEntity(186U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(58U);
    msg.topic.assign("ZZAUQDQMISFBCXEPGNJGULBVBJLBYWLWKAZBVXZOHEGREOJBHCFCOSMVPEXTXYCDFQXVSMPQOCPWEQYAKZRRASUHBUYWUWVOINWRYGFEDHLTJSGVBIYNKXVYOWFJ");
    msg.data.assign("EAYYDNLWIUEFVRFHUSIRWJDLNGSVFVQIDBCNXDYBNSUCRZDEHOBYMBLPQKWSMKWZCVGAQKEXLOVGIWIOLZX");

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
    msg.setTimeStamp(0.846690465564);
    msg.setSource(23337U);
    msg.setSourceEntity(95U);
    msg.setDestination(46535U);
    msg.setDestinationEntity(244U);
    msg.topic.assign("PAHLIOFDSICNXTOHKCPFNPQJECIHOGLSRWQRUVPCYKVKOSNYJBDYVXUFFOKIRWDPRTHEQDTLMXHDCUTZVBHJQJMQJZVWWPUGSWVAWDSNEMAXCMLEIWLDFAYXMXWKNEATLUZBXEGSFPMXKULSAOGGEZ");
    msg.data.assign("XRGIUFTFAGWRDEXFDDYXNQKVSOILSEWPRXPCOZYYZLIGJPEUJZASAZNCKJMQUCJLWJEVDOCFTQHVERIARTUTMXOBBPDPHLUKINWZZZABZUQOXLGC");

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
    msg.setTimeStamp(0.45052449184);
    msg.setSource(30777U);
    msg.setSourceEntity(147U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(55U);
    msg.frameid = 23U;
    const char tmp_msg_0[] = {-128, -46, -90, 83, -75, -103, -97, 52, 60, -112, -111, -44, 21, 109, 122, 24, -91, 51, 120, -9, -5, -2, -14, -112, 57, 115, 78, 79, -123, 120, 44, -12, -47, 32, 91, -35, 126, 117, -75, -57, -48, 99, 25, 117, -109, -29, -7, -102, -99, -115, -52, -12, -108, 27, -124, 39, 83, 103, 105, 2, -84, -18, -52, -6, 112, -13, 121, -40, -63, -122, 48, -86, 23, 95, -7, -123, 4, 13, 73, -50, 52, 59, 98, -121, 32, -19, 4, -28, 34, -86, 72, 115, -101, -3, -16, -89, -36, -63, 117, 24, -66, -32, -35, -22, 32, -47, 110, -1, -1, 112, 2, 118, -55, -51, 10, 26, 42, 104, -50, 82, -71, -121, 27, 36, -30, 97, -42, -116, -47, -85, 34, -114, 27, 43, -97, -23, 31, -107, 14, 19, 50, 0, -67, -108, 19, 102, -113, 105, -76, 75, -80, 21, 95, -106, 82, 105, 78, 38, -58, 53, -90, 100, -109, -43, 11, 83, 40, 23, 6, 103, -76, 75, 102, 124, 101, -43, -47, 52, 99, -81, 83, 10, 117, -14, -121, 119, -59, 41, 124, 6, 32, 52, -49, 59, -105, -117, -73, -25, -119, 19, 37, 117, 63, 83, 14, -91, 30, -98, -28, 83, 111, -45, -115, 9, 70, 119, -26, 126, -104, -102, -48, 48, 49, 54, 79, -102, 10, -30, -89, 79, -19, 44, 116, 34, 31, -79};
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
    msg.setTimeStamp(0.035756285509);
    msg.setSource(62895U);
    msg.setSourceEntity(27U);
    msg.setDestination(62683U);
    msg.setDestinationEntity(244U);
    msg.frameid = 45U;
    const char tmp_msg_0[] = {11, 73, 89, -125, 25, 41, 27, 108, 14, -16, -64, -33, -112, 61, -99, 121, -24, 1, 55, -13};
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
    msg.setTimeStamp(0.278493072399);
    msg.setSource(34840U);
    msg.setSourceEntity(29U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(65U);
    msg.frameid = 237U;
    const char tmp_msg_0[] = {-19, 94, -17, 61, 52, 102, -61, 21, -32, 23, 9, 67, -34, -101, -22, 8, 46, 25, -23, 99, 6, -88, -1, 58, -63, 106, 123, 3, 48, -100, -21, 85, -85, -53, -81, -19, -124, -96, -88, 110, 29, 60, 114, 91, 1, 117, 45, -109, 46, 117, -113, -42, 110, -86, 79, 67, 22, -83, -22, -37, -50, -68, -7, 44, -90, 109, 37, 109, -73, -54, -80, 46, -50, -1, -99, 119, -121, 111, -73, 109, -89, 82, -38, 8, 29, -95, 76, 126, -38, 91, -66, -97, 11, -41, 50, -62, -3, -69, 87, -113, 112, -104, -44, -106, -45, -126, 71, 86, 28, 6, -66, 119, -111, -42, -83, -10, 115, 106, -65, -47, -21, 28, -108, 74, 108, 92, 71, 100, 100, -13, -102, -2, -12, 92, 122, -111, -48, 82, -118, -40, -113, 62, 17, -125, 40, 48, 14, -50, 24, 46, 7, 12, -53, -58, -60, -112, -82, 6, -40, -22, -14, 6, 12, 91, -45, 104, 38, -47, -12, 46, -125, 80, 78, -100, 28, -22, 36, -126, 1, 98, 113, 49, 95, 13, 58, 100, -41, -41, -124, 51, 6, 115, -67, 53, 14, -38, -114, 4, 117, 8, -65, -106, -75, 87, 99, -51, -109, 18, -11, 39, 11, -36, -45, -85, 103, 84, 126, 12, 112, 46, -118, 62, 58, -104, 94, -117, -55, -64, -88, 118, 16, -118, -46, -21, -108, 107, -101, 8, -78, 85, -21, 118, 32, 33, 111, -88, 40, -78, 37, 39, 20, -61, -65};
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
    msg.setTimeStamp(0.938216567847);
    msg.setSource(53558U);
    msg.setSourceEntity(138U);
    msg.setDestination(15062U);
    msg.setDestinationEntity(10U);
    msg.fps = 249U;
    msg.quality = 180U;
    msg.reps = 172U;
    msg.tsize = 168U;

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
    msg.setTimeStamp(0.69094824029);
    msg.setSource(47580U);
    msg.setSourceEntity(186U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(61U);
    msg.fps = 101U;
    msg.quality = 9U;
    msg.reps = 71U;
    msg.tsize = 31U;

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
    msg.setTimeStamp(0.0262098172604);
    msg.setSource(5534U);
    msg.setSourceEntity(40U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(6U);
    msg.fps = 154U;
    msg.quality = 244U;
    msg.reps = 144U;
    msg.tsize = 223U;

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
    msg.setTimeStamp(0.14460952836);
    msg.setSource(29253U);
    msg.setSourceEntity(74U);
    msg.setDestination(36854U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.181764037432;
    msg.lon = 0.824913268938;
    msg.depth = 50U;
    msg.speed = 0.596522534527;
    msg.psi = 0.404291353978;

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
    msg.setTimeStamp(0.140923911464);
    msg.setSource(28127U);
    msg.setSourceEntity(177U);
    msg.setDestination(50116U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.649464668027;
    msg.lon = 0.859398898873;
    msg.depth = 208U;
    msg.speed = 0.48607793895;
    msg.psi = 0.822605209961;

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
    msg.setTimeStamp(0.924767574695);
    msg.setSource(2971U);
    msg.setSourceEntity(63U);
    msg.setDestination(19782U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.421063951688;
    msg.lon = 0.655146662949;
    msg.depth = 28U;
    msg.speed = 0.827544629713;
    msg.psi = 0.44274750405;

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
    msg.setTimeStamp(0.409291876529);
    msg.setSource(6250U);
    msg.setSourceEntity(46U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(103U);
    msg.label.assign("SKDTOLZXCWFEPAELUWGJNDCEGWGHLZCAVSOWRYNQKYGQZXFEYYRBFBEFDGRUWGKJMLQHZSDPXNOHWJHEHJDLMZCBPJMAHGRCNXYSTEMKHQBNVKQCRTPLGXDQXMXXBVEIWTJKAUOWKIVUMRPIFLADSKUIAXVIQTMBJKRRRCOUNTFAZCCLUGYBSOIPOBNLMTHFPYVRVWJDDFTAW");
    msg.lat = 0.815762396347;
    msg.lon = 0.796611912009;
    msg.z = 0.753955472875;
    msg.z_units = 42U;
    msg.cog = 0.455087068656;
    msg.sog = 0.236260855157;

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
    msg.setTimeStamp(0.338724818213);
    msg.setSource(21311U);
    msg.setSourceEntity(55U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(151U);
    msg.label.assign("XTLQYNBJEWPEMWCKVGLSBHNFACPHCKPVOTOQPXUFMAICIEVSWYMTMIZZJPRLJSGJLRFOLBVIRLHMCFNVNEEADUOXDAKJPUPKGUFVSHPGWFXUHXKMNFROHTOOXYEUYQISSAMTRQGWLQZJJKYIYDXADRQDGEDQFZIHSZMRJXZCQRY");
    msg.lat = 0.054068326865;
    msg.lon = 0.223460331495;
    msg.z = 0.401052790886;
    msg.z_units = 11U;
    msg.cog = 0.960681354682;
    msg.sog = 0.183246290678;

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
    msg.setTimeStamp(0.70137527335);
    msg.setSource(4177U);
    msg.setSourceEntity(103U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(196U);
    msg.label.assign("QQTVALIOGCIXLAEXXWOHVUVATPQYWHDPJRZKBZAKGDDVEGPXZOONXQNIQLWBBVUSYAALCKJICRKSHHFWRKLBFYIBGAWSREVPYXSLTSGTHDJKGQMMDJLUNEMNUBQPYWYPMXFHDOCPWECZMBYULJZREUFQVWDUZETROZTHOYEWFUUXIIDGFXOCSXPNFCOSMBROHECSKWJFPHRZNJBBYA");
    msg.lat = 0.8162326389;
    msg.lon = 0.442624174159;
    msg.z = 0.922993629481;
    msg.z_units = 252U;
    msg.cog = 0.252706344614;
    msg.sog = 0.18499436972;

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
    msg.setTimeStamp(0.0754817830207);
    msg.setSource(41109U);
    msg.setSourceEntity(92U);
    msg.setDestination(46557U);
    msg.setDestinationEntity(145U);
    msg.name.assign("UIHHLTZLMLOQRAATEXEVFYWOAQZEFYNAWRWXWKBJTNKSHYVYEFNYIHZPKEJDCMFGUMKPQCDNPPKDRPGBGMWIVZRMTESJCFRLXBQCDDITKVYJKIJWOZJFGETOTIWUQXBSOLBJDOKJAONHXCIGRMVDVHDNMUWOZASSCYPBHGLCOZGREYZPTIFUETBDQFXQMWQDLOPPRHABXXTQQIFCSVLKMSFUINZCJSWGKENBHRVABZMUCAVXSYL");
    msg.value.assign("PIUNELNLEJRKNTDTVHUCWZFHOWLUTAPSHZAZZAQUEMOOXMOTQGHJBRWZXCUXFJZIGIORVQJVDDIMAEVTHGGHHXRCPRSYKKDITAQBYCNPNWCPIEPFHGBPEGWXLWLKOMNYKYKVYNOQGNCCCBSWXYXRJKWKUSUMLSSRTEXTRBYADMH");

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
    msg.setTimeStamp(0.564238299609);
    msg.setSource(58034U);
    msg.setSourceEntity(182U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(81U);
    msg.name.assign("XYEMBVHPOOMRQJWXDWFBCRLNEIXLLUVYMLDPQBCCSGIKHNFFIMIHUUKLZYCZSTUGPELAMV");
    msg.value.assign("XWJOOQQZGGVCEWTFVWVIYPGNNFVSOTRHUTKDFJSLTRGLKXUCIMJUDFDSNCXQHKABOZGSHUAKFKHARQGMKAHTDTW");

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
    msg.setTimeStamp(0.037265031284);
    msg.setSource(236U);
    msg.setSourceEntity(234U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(252U);
    msg.name.assign("RIMSDTZJLJKEKTSAAKGZSZFMPGDCMVTHMZXNCJNMKATUQDUPXPPRLGOJLCCYVWTWQWHHVQHNSWVNJOLXVGZZPJYFIVUYBXSKCDGFEXVFYWVQALJBRDXNKKSOSMIGUEENSCODFLNSFRHFEHFWTAGQPQTKACRXKRAVQUSRIIYPLYOPZXDWOBMZPOIURELIMMHKXNCENAQYNJHRCWDWEU");
    msg.value.assign("SCXLOQMJHDRMSSCPXOIVKOGJRTDUJBOKLKZRMAYGNGVNQBFLJZSINEGDHAWRBTOKOKNPUGEOXXGCCKNCBJJA");

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
    msg.setTimeStamp(0.147626525241);
    msg.setSource(1801U);
    msg.setSourceEntity(134U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(129U);
    msg.name.assign("NSQKXMJFRJNDISMJQYNSBTDKQCXEUZQPGFOVKNXNTEYKCLHPVVLWYFELFGLITUOJUCIRPTKFRUIHIZBXAMLOBJTPBCPRCDJTGAAYELVYWXEFDFSNHAOAXWMNKAEKZVWTUGMCLNTPCVTHASBZVEPYRIUYROGDERLMYDEJWDSNWMAZZFUHOPMYKQIXFZGZPOQWSRCDVOKRBSGDAZYTHDBMLBIWJHUOBJG");

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
    msg.setTimeStamp(0.625285421986);
    msg.setSource(59792U);
    msg.setSourceEntity(246U);
    msg.setDestination(61585U);
    msg.setDestinationEntity(120U);
    msg.name.assign("FAACOCQNFPTIJMWBORBJWYDJMXRGFGAKHENQDHXEFPDRHTOFDLIUGMJNOEZJLZKGIKFUNMQAZYRPNYVTUVJLSOKIBUCHVVLBJUGILWHBXDDDZHISNTZEUROIAKQYKYETKEZLZZHQWPMSDFRMOFHMBNOBGLVDSFXUMJQGJXNJCXDSKCQQUARSLAIVPEYEIHGTXTYWSRCCSMWTRMUKXFOWCTPUQBLYBOKAGWC");

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
    msg.setTimeStamp(0.177832933953);
    msg.setSource(3953U);
    msg.setSourceEntity(41U);
    msg.setDestination(45449U);
    msg.setDestinationEntity(104U);
    msg.name.assign("NGSCEXZLXCYLDEZOOTAMFXQMKPHDLWHRIDJWRVIRLMLYXBMOBYCVCRJBIJDYIZLQGDDRITNVALQMNDVONAOFAYGHPWAIFGJEPKYZATZQAGBZVMWICGXIUHDCUPHUTXEUQYYTBEWJLHHTUZKURPPXCFTSAGSVWPNKXIUDBMNENZPTJNFCOOTSNFMKDSRGAFU");

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
    msg.setTimeStamp(0.530080335149);
    msg.setSource(38252U);
    msg.setSourceEntity(77U);
    msg.setDestination(23606U);
    msg.setDestinationEntity(158U);
    msg.name.assign("TAFZGFKXXUKWUVZKZPQWCAQRXYPLACKTIBSJENWKANJTLTBSXCMYF");
    msg.visibility.assign("JVPYLJDAOBWNIYDLFNOMDKWVRCRNWCJEGHXYDMDEAVRAKLYPHWPGQFHROISSXCTQVIPBKRUOAQKDARLVBLDTZUSJLFKPYWPNRNMSHCUTGFSNZSMXPDSZGZCONTGFHJMGEEJCBAUOJFTMRWKALXYFCHQUPKJBYLUWIGQSMQWYWJVFUQDYN");
    msg.scope.assign("HEPQKWXMBBFEANOPURSIDKPLLGZQBRTPJUWXECKFUGNWIEBTUGAADEWIMDPFOBVUOBLNAP");

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
    msg.setTimeStamp(0.965836970738);
    msg.setSource(31870U);
    msg.setSourceEntity(131U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(5U);
    msg.name.assign("AVMTEGOFANHEZMRHPSKYUFSIXDKBHQTTWHJQYGCWMMNSRMVZOBVALYEGEJDMJRNKYZXAEWFA");
    msg.visibility.assign("VVBEOETNAPLYGTKLSGOUEBXCCQRYAVYVFUVZCWMHQTAHDPRRPEOIPPAKXHWNVNWMNTZGXHTMTFHLORGLKYENTZLIEBCUXMMOASOWKZSNRPYZXKILGPUGDFZIINQBJUVKCTPWNMYSGABQTIBHBSKFFZKUFODJJDDZVEMSWCDPOQJJKXBWFDIDQDQHWUOEHRMEIUXBLXCQNSRPSAUCJUAZGQRLHSLFBJR");
    msg.scope.assign("IUTGBLAMEEPORYTBEVRSLFFWQVGNFMNRPRQCDVKRSAZDKCLDFJUJFIIJDIXSWHAEHXDPTGBNAVG");

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
    msg.setTimeStamp(0.777412753147);
    msg.setSource(52769U);
    msg.setSourceEntity(196U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(137U);
    msg.name.assign("MWTUMPOJSKHDUBCJGKZZNTQPCIDELKPUOGCJJVKXJFBPIMLYNCSYQVZFKUDEUBCVKAFRCHNUMEIQWAFIJDOVQEDTFSEXN");
    msg.visibility.assign("NXTQONSHWDQXIOFEEUND");
    msg.scope.assign("CFVUKBWYOMOUWYNDKCRNTQZXOERQWVMVLPQLTPPNMKDLIQQLAUTSNPGH");

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
    msg.setTimeStamp(0.449576268762);
    msg.setSource(13923U);
    msg.setSourceEntity(60U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(46U);
    msg.name.assign("INFFCSHDITLAXMTYNRWAOLRAGSF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BVZNLDAQPLNMTEXJUYKQPQWQMIGLWLMUOJGGZKQOXPKQCLKMHZBAXENBRAJUDSRMYHVGIDHBHISBTCBYRVROPSAXFHBZNBVIYRYHAVJQJJKITFEINFJCTKJJAZGTLDAQCFGRFWRIQHEZYPSVMCUTCKXWIZEOCYLMTUUNEGP");
    tmp_msg_0.value.assign("GTDZMWJMTPNWAPMYTCAMTLEVHJZLFKWTYOLNJXOUEZEUXTXPSFHHKREDPJCIIDEJFBHMETSJXSBHRBDDADLYIKZWAZNRHOCRHVDLEFJFYPIQGXYREPAZSSBAXULYPCQVGACFJOKHAIVNKGEFDBRWOQUGRPBUSKSCIJQNXOBFGTCVYUMBZWLOISIGUYRDKUGN");
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
    msg.setTimeStamp(0.605409827452);
    msg.setSource(854U);
    msg.setSourceEntity(99U);
    msg.setDestination(62173U);
    msg.setDestinationEntity(82U);
    msg.name.assign("JHSVVVGQJZNXVELCMFLMEYMJPEVAUCVBWYLHDCOXTNUCADOKZKEDCQGKBJSSRUCAQMYQZGNXPPWBIJVZPRHTUSVYKTDFHBCHOLNHIPRELUOUWJAPPAI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YVTUWXYKTMHALSEYTIOZRUHSHYNNZERSITEKZCJAQJHIDTHKGJZCDMBPKZOAYGQCQUUTITWVBPYQZJPNDLXRWJLOWDYHUUQUMHRXKRVNCMBUIURPVLBMVLDOKHZEROBUXJMOWSZQGRWTEVIVNLCGSXBMVSBFGAKRTAFELEFABYAFTWPNMSIGXHQXKMGFXLCLGXSAFHAGNDVDOISVPMBFZQPFPJFEDRCIGJBLONFOCNEDKCJSNACJYE");
    tmp_msg_0.value.assign("MCXBCVOGWTPSVECANJUPZVBGSJRHTFVUANZCHRSLZXYAGLESWMFPQFEFQGOIGDXSIBKQNZRZFLZGGZPTRHMMIPCTKDWHDULPGQUAYWBJECSAIGVEVYVNKPWFOBPQOIYSVDBHSIQXZTUJOJCODIHTKAYMBFWPQEICDKMQYUUWL");
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
    msg.setTimeStamp(0.241948793056);
    msg.setSource(54438U);
    msg.setSourceEntity(146U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(106U);
    msg.name.assign("NNXEDQYRMNVWOFWGVHSVETVWBWCOLXHIKXTSJZOHTMNRSTDAGGJIMNMNMZRYZGSC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ROOJCCWPVWMJPZFUBSVAGSADTMXDMHYOLAIMHPUEEQSYVDBVZGZFDNPNREEKLWGTRKDFIAPOXGFRHKLTFMZRNIYYOEIELRQCAJSNXEEJPGVJRYPKRTAKSQFNBRDAQUXYLQJUBHJRMBDTVZPIWVCMZOIGONWSHUTIFUDNGMLKLSUSTASHAUQCXGFGAEWPKMZBQCQDY");
    tmp_msg_0.value.assign("JGXZRNBVAHWAHDYPIVJVHCNTOWSFEYRNXGCZJGRUTYAFVIWNVULOHYXSMMYHLLLGXHQKZXEBFJOFMWBKCPJWUOKFSQUJBPPSBUROSLUCLYXNVAQZKYEEDLSKYOAQILKWUHOZPSRCQOABRH");
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
    msg.setTimeStamp(0.490368074091);
    msg.setSource(24480U);
    msg.setSourceEntity(37U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DMFTCREVNYZOPBZKJBKUSTNZSGIVLBPIIEKLFMVBXORTHXBIGBYFJHILSWVLQAKRDKMJKGDUGNVPQHUESCQT");

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
    msg.setTimeStamp(0.503728201573);
    msg.setSource(48906U);
    msg.setSourceEntity(200U);
    msg.setDestination(21388U);
    msg.setDestinationEntity(166U);
    msg.name.assign("DPZHZBPXPDLDVDXOYNTFDFLWOHAGAYNOFTTMKIFAPBQGJPGOFNKFJYRAIZMHZHCGVAKOWRLZSEDWE");

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
    msg.setTimeStamp(0.917836328305);
    msg.setSource(41187U);
    msg.setSourceEntity(191U);
    msg.setDestination(386U);
    msg.setDestinationEntity(88U);
    msg.name.assign("DJRSEOXZITRVPHIKMOMJNCJJSROHFCGNVGKYURHKIYQJPWUTMVJJUFHQAXDGYGGGADMHCZXADPMBZAQSNDUQPHEXFCFUCEVUNMQLVADEQVKKGKPFWOZVTARMXCWPHOLYXVXPRDLRZTGZGTSFLJJXWQIDRCYIO");

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
    msg.setTimeStamp(0.703939782553);
    msg.setSource(39749U);
    msg.setSourceEntity(138U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(162U);
    msg.timeout = 1860290500U;

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
    msg.setTimeStamp(0.127458976286);
    msg.setSource(65339U);
    msg.setSourceEntity(181U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(79U);
    msg.timeout = 2101961191U;

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
    msg.setTimeStamp(0.556619916303);
    msg.setSource(38307U);
    msg.setSourceEntity(212U);
    msg.setDestination(15721U);
    msg.setDestinationEntity(65U);
    msg.timeout = 1853986756U;

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
    msg.setTimeStamp(0.871815029831);
    msg.setSource(49530U);
    msg.setSourceEntity(111U);
    msg.setDestination(15974U);
    msg.setDestinationEntity(186U);
    msg.sessid = 4095658408U;

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
    msg.setTimeStamp(0.640200182957);
    msg.setSource(15933U);
    msg.setSourceEntity(186U);
    msg.setDestination(26297U);
    msg.setDestinationEntity(156U);
    msg.sessid = 2397146140U;

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
    msg.setTimeStamp(0.651948680538);
    msg.setSource(14752U);
    msg.setSourceEntity(108U);
    msg.setDestination(761U);
    msg.setDestinationEntity(88U);
    msg.sessid = 4248642543U;

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
    msg.setTimeStamp(0.183224819948);
    msg.setSource(15328U);
    msg.setSourceEntity(162U);
    msg.setDestination(677U);
    msg.setDestinationEntity(243U);
    msg.sessid = 2181641898U;
    msg.messages.assign("OTANNKAGKPEOGDJEFAAXEXLFTICYUFUISDMZZWTYVVJVVXMEZLCVPQHNMCVHPGKDYOGCSAWHUHEJSNSOGURFUXDHETNELDWKCCJUFZHUJT");

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
    msg.setTimeStamp(0.0869392323544);
    msg.setSource(40710U);
    msg.setSourceEntity(61U);
    msg.setDestination(38605U);
    msg.setDestinationEntity(176U);
    msg.sessid = 3783520316U;
    msg.messages.assign("TSSRMOLHUKPFKCYIJBINIXPHHAZINUWHOTOUIQRZJMKSGRJPBAIVRBNUKZOFHXMYUGKTYHJTWVAWHZDQFKAPEWUJOXCNDEASAPMXAYGSNISDFKWPBTRRTBEEPFYEXVBLCPXLVTNNEZAZATMQFMHEFOWYYIPLHCBQIWSVCXDUYKVQBXHCVUJLDTECEVYRMDSJROJFDQRNWLFBLQLDPUCGGZQWZOYOCUQRIKZGGVQBWFADLGSGKMTOZCE");

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
    msg.setTimeStamp(0.83996107287);
    msg.setSource(58548U);
    msg.setSourceEntity(86U);
    msg.setDestination(57999U);
    msg.setDestinationEntity(22U);
    msg.sessid = 4280139358U;
    msg.messages.assign("KPEJOZSSMTKKNZHLKWFITHNGZTGXTLZTHWNMHFOPZBKQAYZVYOXNAIOJPDNBBSWDCUMYLQMGBIKPMQLTAASAUBMVKJFPNUACCYARMLZWWDLJXIXHPYFKVYDELNJWDFE");

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
    msg.setTimeStamp(0.452062053382);
    msg.setSource(14006U);
    msg.setSourceEntity(51U);
    msg.setDestination(33388U);
    msg.setDestinationEntity(196U);
    msg.sessid = 3239723161U;

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
    msg.setTimeStamp(0.0513266435861);
    msg.setSource(37923U);
    msg.setSourceEntity(176U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(208U);
    msg.sessid = 974785013U;

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
    msg.setTimeStamp(0.717049414421);
    msg.setSource(56173U);
    msg.setSourceEntity(201U);
    msg.setDestination(44081U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2997274585U;

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
    msg.setTimeStamp(0.302436998577);
    msg.setSource(28197U);
    msg.setSourceEntity(216U);
    msg.setDestination(27122U);
    msg.setDestinationEntity(182U);
    msg.sessid = 978189859U;
    msg.status = 241U;

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
    msg.setTimeStamp(0.593885715605);
    msg.setSource(47739U);
    msg.setSourceEntity(171U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3672635003U;
    msg.status = 196U;

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
    msg.setTimeStamp(0.421603677564);
    msg.setSource(29454U);
    msg.setSourceEntity(139U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(3U);
    msg.sessid = 2595378472U;
    msg.status = 183U;

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
    msg.setTimeStamp(0.673402862958);
    msg.setSource(3227U);
    msg.setSourceEntity(131U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(92U);
    msg.name.assign("KQBJWMPVDFCKOILAVWRHCTCTZFSZSMPJVKRZTBUUMPTASJWOHWA");

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
    msg.setTimeStamp(0.233571588193);
    msg.setSource(27825U);
    msg.setSourceEntity(171U);
    msg.setDestination(31271U);
    msg.setDestinationEntity(108U);
    msg.name.assign("RQWOSKYHXYRGOYHFZCFOZAVCVZNSJYFYJQJVWIVQOSL");

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
    msg.setTimeStamp(0.829927165994);
    msg.setSource(10742U);
    msg.setSourceEntity(200U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(221U);
    msg.name.assign("FVWCUJJBSEDXGARBRQHAYEQFAKMYPSIMKDAALPZZHPTNGQTYVPUJVGKTULMQKVBMCOEEMFPIVJICMSXFNZVOEERXWMDDWCRWHXJCUHJXOUZVFORSBFQBQQOCGDYNLFECHRJCWGKYDEDIBBIGLSIJVJUUFGXRLMFAOYURZK");

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
    msg.setTimeStamp(0.319161504103);
    msg.setSource(6750U);
    msg.setSourceEntity(213U);
    msg.setDestination(19521U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ZTFXWAIPEFWDYHYQLDTEBXIRXTCAZJVUSGLCKFVKIHISLWRZMSAYDCSYVOIRWWZXTTPGQGTMXMGOJECBVPGQSFBZBJHQRLROWCUVXPSE");

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
    msg.setTimeStamp(0.423147859691);
    msg.setSource(9048U);
    msg.setSourceEntity(84U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(153U);
    msg.name.assign("XEOTHSYRZVMMHMBSALSKLHWCTFDFHYHDWRNMQTITPAFEMFPREGJGQTAFWIBXBN");

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
    msg.setTimeStamp(0.570517273605);
    msg.setSource(21749U);
    msg.setSourceEntity(253U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(175U);
    msg.name.assign("OQBAQAIJSITAGZJEMFFESLTWVHBLGXGDJZXTSQKAGCFOEIAAKPOOBRSYIKVGYSJLQKDMNELRLQXWWEWVLCRGBCUPTJQVCEHDHTUBFDEWVLJHQOZTQFFZHTDXYUWNHIUJMIPPXBPPKNAXLNUGHCKUAJDMYNIVZOWPHCEURZUSMENMMBVDTRZPLUJYKWXNRQUODIFCKZRDZFCOFRCYSSFXSZSINTHBHCXPYANVJKMRAEWVMGBNVBMDI");

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
    msg.setTimeStamp(0.0791324443352);
    msg.setSource(25863U);
    msg.setSourceEntity(69U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(33U);
    msg.type = 106U;
    msg.error.assign("PHYBCQSKVREFTAEWPOPNLMICJUZXEKIWAZWLEBDWBDAVBIAAWRATPDQXIGPRNBLUNDPUYLOTHIFDGLNX");

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
    msg.setTimeStamp(0.570771512994);
    msg.setSource(64387U);
    msg.setSourceEntity(5U);
    msg.setDestination(14416U);
    msg.setDestinationEntity(238U);
    msg.type = 253U;
    msg.error.assign("NVPMPKUUCJEKLAQEITKDXJNHFOUAOATROCIIPIENDPRSAYCHJGLRFJWTGKCPZSIQALQLGE");

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
    msg.setTimeStamp(0.739989761896);
    msg.setSource(34062U);
    msg.setSourceEntity(122U);
    msg.setDestination(11654U);
    msg.setDestinationEntity(250U);
    msg.type = 78U;
    msg.error.assign("EHLUNAELCTXHOOGCJSULMHLDJTGKFDCMPTGTEFXSYARJZHMWWFNJTC");

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
    msg.setTimeStamp(0.874259097447);
    msg.setSource(21199U);
    msg.setSourceEntity(84U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(46U);
    msg.seq = 42156U;
    msg.sys_dst.assign("RSJTIJRLCMHNDHATJOGMKBZLVPCEXWYJZGSQJNYLKNPOYCJDMIKFQGLOHVTRCUVZQORADUVPXWFCBKXQHRSQQLEZCJRKUZISIHNIVFWVOQDNSBEEMBXAPMTLVAPHEPPCNPYU");
    msg.flags = 70U;
    const char tmp_msg_0[] = {-127, 8, 80, 0, -62, -84, -102, -83, 17, -66, 8, 67, 113, -7, 6, 14, -5, 33, 60, -49, -47, 35, 99, 32, -88, 39, -74, -123, 4, -125, -31, 112, 62, 5, 7, 119, -111, 101, 76, -66, 114, 27, 4, -24, 115, -87, -51, 47, 56, -72, -120, -35, -127, 92, 31, 77, -95, 29, -89, 75, 79, 100, -120, 44, 116, 56, 19, -116, -45, 80, 33, 98, 94, -47, 76, 112, 54, 17, -25, -9, 93, 41, -37, -10, 81, -127, -18, 18, 67, -66, -30, -29, 8, -114, 126, 125, -13, -76, -90, -10, -72, 50, 126, 106, -5, 92, -88, -29, -116, -68, 86, 4, -24, -66, 19, -78, 92, 68, -43, 47, 4, -105, 111, -95, -121, 64, 86, -126, 65, -42, -74, 40};
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
    msg.setTimeStamp(0.231107490193);
    msg.setSource(43769U);
    msg.setSourceEntity(219U);
    msg.setDestination(29444U);
    msg.setDestinationEntity(245U);
    msg.seq = 30554U;
    msg.sys_dst.assign("SANMIQTFLPJSBVYJIEKYTMSIWWDQOQNUAFRQICXRSZREKDWDOUWRVMOZNFXFASHGBCRXIIEPVURXAPAPPPMCOQBHNTDZQFAMSXTQTXDWOSEEFMZJMUOLRPBNBBOKRZYNYLYVFBEDCCHQCLXQDHIDSCIKTHGVLTZUFONNGVLYBYWPENKJDZUIYFYMJKLIWNGAZALVVHRGBEJQFCKTUXZUSW");
    msg.flags = 224U;
    const char tmp_msg_0[] = {61, 47, 22, -120, 56, 45, 61, -39, 89, 7, -71, 117, 65, -121, -29, -92, -38, -41, -113, -25, 122, -101, -117, 14, -52, -96, 108, -33, -124, -36, 105, 68, 112, 80, -47, -51, -87, 8, 90, 14, 103, -78, 109, 92, 18, 83, -21, -27, -58, -22, 98, 24, 120, -10, -18, 43, 101, 25, -38, -12, 122, -25, 120, 61, -118, 65, -93, 74, -115, 44, -85, 65, -96, 56, -44, -37, -82, -118, -100, 124, 68, 64, -27, 9, 110, 65, -12, 123, 27, 71, 48, -1, 59, 19, 116, -80, 117, 11, -14, -22, 86, 119, -45, -49, 78, -19, -74, -47, -55, 45, 86, 101, 41, 114, 52, 71, -33, 71, 43, -44, -18, -19, 63, 124, -35, 0, 109, -38, 77, -122, -121, -57, 78, 45, 70, 41, 68, -92, -7, 38, -18, 28, -102, 9, -70, 48, 2, 86, 74, 84};
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
    msg.setTimeStamp(0.516462722331);
    msg.setSource(64173U);
    msg.setSourceEntity(134U);
    msg.setDestination(31039U);
    msg.setDestinationEntity(24U);
    msg.seq = 30708U;
    msg.sys_dst.assign("VWIDRYPXNMWQEZACGFHTGAUGSFQHOSRKUOOGYEYVEQPXNYCUBPJSNWGBTZZIIDZCPRAATVEKCZPLRNJQEFYKHYQYMJPXUWDNHKXJDSLNOELVLJLNUVCKFOFSHVKNJDGGYABGNBMBBVRTUOZZWXORUXMOAQTDFQTVHAVEJWTWZFDYWAZILEIGEISXSPTRSKLHQMUPIMSKRIJGKKJMMDFCMWRBIHUOPXXPBYCMQRFHV");
    msg.flags = 12U;
    const char tmp_msg_0[] = {92, -120, -49, 108, -42, 93, -42, 95, 88, 6, 41, 78, 2, 14, 31, 96, -4, 99, -115, -97, -60, -8, -81, -20, -120, 49, 22, 26, 48, 116, 68, 69, -90, -102, -120, 68, -119, 17, 61, 19, 19, -105, -71, 23, 78, 5, -34, -123, -66, 84, -34, -60, -9, -70, -108, 52, 63, -19, -109, 37, -96, 13, 120, -59, 47, -59, 9, -101, 45, 119, 77, 43, -9, 39, -19, -35, 26, 125, -72, 114, -17, 82, 101, 32, -31, 40, -54, 27, -33, 43, -120, -45, 7, 55, 80, 56, 42, -122, 60, 102, 67, -14, -64, -37, -3, -90, 77, -103, -74, 107, 18, 117, 47, -19, -104, -110, -33, -3, 49, 48, -103, -11, 58, -122, 73, 81, -6, -15, 45, -48, 44, 40, 125, 70, -53, -128, 125, 48, 82, 30, 14, 79, -83, 50, 16, -94, 22, -79, 36};
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
    msg.setTimeStamp(0.0374389569885);
    msg.setSource(31449U);
    msg.setSourceEntity(2U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(186U);
    msg.sys_src.assign("VQOKLXCZQKVMGKXFLGWDIINYA");
    msg.sys_dst.assign("PJGFDAVILNXHPJUCDVWWBHYESJAODSVYEHFXVOTCQGCONSCXCQHCAROUMZAUNRDYBSEPWTZZYBILAHGELVYNFOXFMCZMF");
    msg.flags = 213U;
    const char tmp_msg_0[] = {51, 108, -57, -27, 71, -86, -95, -71, 92, 46, -109, -116, -59, -8, -76, -34, -122, -24, -110, 67, -94, 3, 125, -73, 21, -20, 32, 32, -21, -47, 59, -90, 106, 61, -109, -85, -127, 31, 87, 85, 28, -82, -104, -28, -51, -118, -68, 51, 126, -8, 32, 99, 126, -36, 67, 16, 12, 24, -32, -22, -56, -119, -101, 8, -19, -39, 74, -17, 93, -14, 113, -103, 15, -57, 120, 14, -113, 97, -11, -119, 39, 77, -60, 71, 20};
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
    msg.setTimeStamp(0.914520943222);
    msg.setSource(10441U);
    msg.setSourceEntity(0U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(250U);
    msg.sys_src.assign("CTFSPWPKCOMOWKAHPPTLGXQ");
    msg.sys_dst.assign("PUNSXWGMQIACCTFMJKUVAFBMPTXXHNHSZELFYPMIFIWDLANHVBGSDYRRJREIAZUARBLKVSDDKIDOKOVMBDPIWDQJCJOSROMUGWPQGNVNQYICSGKZEYJZDRTGNPQAETCINTLVVCVPEZTWBORJMWEBRVHYYTKCUXSQXUCNRLBEZGJBOQYLNPHMMVYCEXZSTGSXDXISQYAZKJKZFGQYIOLRPHEEOXFWWZXHGPL");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-43, -48, 25, -33, 84, 98, 123, -110, -42, 90, -40, 76, 12, -123, -27, -57, 92, -78, -19, -64, 44, -44, 94, -117, -11, 38, 89, 36, -124, -121, 123, -83, 115, 108, -39, -27, 79, 88, -47, -18, 109, -75, -16, 42, -54, 111, 38, 97, 72, -98, 100, -88, -52, -1, 28, -42, -110, -42, -62, 46, 106, 55, 77, -18, -126, -113, 29, 28, 119, 19, 6, 124, 4, 88, 17, -120, 28, 80, -35, -79, -82, -41, -73, 31, 42, -100, 55, -62, -123, 89, 30, -115, -106, 124, -59, -40};
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
    msg.setTimeStamp(0.857687920161);
    msg.setSource(8045U);
    msg.setSourceEntity(69U);
    msg.setDestination(36442U);
    msg.setDestinationEntity(147U);
    msg.sys_src.assign("WEDCLEGEHBMDWQFYPQZJOLUSKBVLQEYYQJVWEFUFTMUXWSCSMX");
    msg.sys_dst.assign("NBAYRMCQVYCYQWVKOBPXTFCMOJWMYQSWXJPJHDTLJSVSCLYFRWXWNXMIEBWARNNPI");
    msg.flags = 191U;
    const char tmp_msg_0[] = {-64, -14, -114, -114, -99, 75, 107, -97, 66, -63, -72, -91, -27, 90, 92, 38, 28, -91, 33, 123, 31, -11, -55, 51, -73, -101, 51, -54, 56, -116, -101, 21, 124, -123, 0, 83, 69, -100, -14, -42, -30, 106, 124, 45, -52, 97, -12, 45, -11, -48, -124, -85, 95, 117, 23, -90, -56, -41, -120, -39, 63, -88, 76, -75, 73, 46, 55, -76, -80, -117, -95, 81, -67, 24, -47, -31, -83, 65, 69, -108, -97, 64, -84, -75, -111, 70, -26, 113, -62, 104, -91, -90, -13, -27, -89, 76, -74, 69, 29, -69, 69, -42, 117, 3, -128, 45, -80, 95, 125, -67, 105, 2, -6, 14, -85, -110, -47, 86, 101, 99, 64, -111, -82, -52, -94, 60, -10, 117, 79, 124, 115, 85, 44, -95, 84, 107, -45, -77, 51, -67, 1, -45, 47, 30, -85, 97, -70, 115, -41, 9, 75, -114, 95, -44, -35, -119, -71, -11, 82, 109, 22, -123, 94, 51, 37, 85, 67, 91, -120, 61, -60, 93, 46, 77, 126, -95, -25, -72, -92, 94, 40, 54, 122, -47, -126, -40, 94, 123, -85, -64, -111, -47, -59, -114, 120, -56, 107, 21, -30, -20, 52, -50, -125, -81, 94, -29, 53, -16, 104, -10, -114, 36, 33, -126, -93, -9, 60, 74, 26, 82, 10, 78, 87, 3, 50, -108, 74, -125, 67};
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
    msg.setTimeStamp(0.827802373364);
    msg.setSource(61814U);
    msg.setSourceEntity(216U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(252U);
    msg.seq = 60987U;
    msg.value = 164U;
    msg.error.assign("PAAZNAIILSMQFPBDDFLJTWWYTLXPHFUXGRQGMFNOVNRCYZUWOHHZJEQXTEZSKIGWMOJEDLBNKSDKHCKWSRDQVWWJCNVPLIEMYCOSBQGUZRCNZTCSXAOQEPLIRPCWGAGKJJXTVXUPZDJVPOATMPVYETZYIKRHFLTYQIIWORYSZJOHOCVSLKBBVLVQTFUDZHGUXMBNJYDETSXNYHDCMMUIKDGERMBFGPJAUNKSLVB");

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
    msg.setTimeStamp(0.291899459262);
    msg.setSource(22251U);
    msg.setSourceEntity(120U);
    msg.setDestination(30525U);
    msg.setDestinationEntity(103U);
    msg.seq = 64785U;
    msg.value = 150U;
    msg.error.assign("RLEYVUQINFQKZCISBVUWUOSYEGIRAZOFNJIDASTPEYTSGTLTQRLSSZBVDCLDTTLKXGLWJYPXYBQFWEQNWRSQTFXQVKWIWFHXYYPIKKWOBJNDQGO");

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
    msg.setTimeStamp(0.554085044903);
    msg.setSource(21653U);
    msg.setSourceEntity(17U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(31U);
    msg.seq = 61840U;
    msg.value = 254U;
    msg.error.assign("NEJQFDAHHENXQMHMKDHSGRHNHDAAHYNWCJQUDMLQASEEJXAPOVBQEGWCMKGLFIZBCIRTBFIWRFRAPTXSZPO");

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
    msg.setTimeStamp(0.12436794599);
    msg.setSource(61425U);
    msg.setSourceEntity(105U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(49U);
    msg.seq = 47466U;
    msg.sys.assign("EHRBPHEKNHLVBIDFTMFEONTDZYQDOXKUGEADOWPBBFLAXQFITNFXNBHUFVEWSRMAZIPJGYBAZKICWRNYECAKSEDQUSLCVWGWYZNIUGKKKPPRZYYLGGTHVJDGGRRJRJSHFZXEVBRWCDTMQK");
    msg.value = 0.739449722273;

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
    msg.setTimeStamp(0.00207725529806);
    msg.setSource(9279U);
    msg.setSourceEntity(197U);
    msg.setDestination(57203U);
    msg.setDestinationEntity(111U);
    msg.seq = 60882U;
    msg.sys.assign("DCWRZSMONZAECGCPOINSTRNIABYQNJJMBMOZKCQXQUYITQWVZVDBKLZEPPMIOLLZHSUKJOJSENF");
    msg.value = 0.239651674736;

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
    msg.setTimeStamp(0.25742029944);
    msg.setSource(45743U);
    msg.setSourceEntity(54U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(117U);
    msg.seq = 21499U;
    msg.sys.assign("UYDKOVNZYGXSZHVGUBUYDBUFWOZDQFNTXURKDYNXXBJWMFEQKFDHLQIPHFXVHXNZOMMAIOQNWCSKRRIMDFZTRXSSQICPHPULJTGKGOKJXFLLGPBCJFTONMLKSUEPUBIEZGWLVTCOMVMSVARYUICRAWKGNSMUXZALWJBKIBZHGCLMPJAEADSVCTVRGRIVAEYJQHFNRAMXYCENEIEQPEIYAZAWSYQJFJHRNJDYLHPVOOTLOWQTSPECTBBPGD");
    msg.value = 0.177495590265;

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
    msg.setTimeStamp(0.362255313804);
    msg.setSource(13479U);
    msg.setSourceEntity(69U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(36U);
    msg.action = 139U;
    msg.longain = 0.226006306605;
    msg.latgain = 0.589729348139;
    msg.bondthick = 1825661236U;
    msg.leadgain = 0.972830866625;
    msg.deconflgain = 0.550226132732;

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
    msg.setTimeStamp(0.282359039318);
    msg.setSource(30389U);
    msg.setSourceEntity(72U);
    msg.setDestination(54096U);
    msg.setDestinationEntity(25U);
    msg.action = 24U;
    msg.longain = 0.751336767958;
    msg.latgain = 0.254028217275;
    msg.bondthick = 428387737U;
    msg.leadgain = 0.388727766535;
    msg.deconflgain = 0.844715340263;

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
    msg.setTimeStamp(0.682529194101);
    msg.setSource(62694U);
    msg.setSourceEntity(149U);
    msg.setDestination(64791U);
    msg.setDestinationEntity(82U);
    msg.action = 160U;
    msg.longain = 0.347806178095;
    msg.latgain = 0.382948672571;
    msg.bondthick = 4204579726U;
    msg.leadgain = 0.471626421744;
    msg.deconflgain = 0.258693684074;

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
    msg.setTimeStamp(0.627129487941);
    msg.setSource(61257U);
    msg.setSourceEntity(173U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(37U);
    msg.err_mean = 0.593238341213;
    msg.dist_min_abs = 0.410590960358;
    msg.dist_min_mean = 0.709864736022;

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
    msg.setTimeStamp(0.972636004284);
    msg.setSource(8607U);
    msg.setSourceEntity(17U);
    msg.setDestination(28693U);
    msg.setDestinationEntity(231U);
    msg.err_mean = 0.238591955494;
    msg.dist_min_abs = 0.755588284331;
    msg.dist_min_mean = 0.530368809105;

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
    msg.setTimeStamp(0.665665207416);
    msg.setSource(39121U);
    msg.setSourceEntity(69U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(37U);
    msg.err_mean = 0.0176698177904;
    msg.dist_min_abs = 0.130806683044;
    msg.dist_min_mean = 0.330296197641;

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
    msg.setTimeStamp(0.224241339617);
    msg.setSource(58502U);
    msg.setSourceEntity(195U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(57U);
    msg.action = 253U;
    msg.lon_gain = 0.0536899216098;
    msg.lat_gain = 0.883871173272;
    msg.bond_thick = 0.142272150704;
    msg.lead_gain = 0.352467898717;
    msg.deconfl_gain = 0.58777900329;
    msg.accel_switch_gain = 0.946502812715;
    msg.safe_dist = 0.928188414124;
    msg.deconflict_offset = 0.214393712288;
    msg.accel_safe_margin = 0.112705995924;
    msg.accel_lim_x = 0.358235984409;

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
    msg.setTimeStamp(0.760971980867);
    msg.setSource(11516U);
    msg.setSourceEntity(172U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(35U);
    msg.action = 182U;
    msg.lon_gain = 0.0954672004338;
    msg.lat_gain = 0.637815078815;
    msg.bond_thick = 0.946709872049;
    msg.lead_gain = 0.902675126734;
    msg.deconfl_gain = 0.586274165842;
    msg.accel_switch_gain = 0.938604609231;
    msg.safe_dist = 0.444223686408;
    msg.deconflict_offset = 0.746596186349;
    msg.accel_safe_margin = 0.538882774362;
    msg.accel_lim_x = 0.081512081058;

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
    msg.setTimeStamp(0.516586720191);
    msg.setSource(33532U);
    msg.setSourceEntity(134U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(211U);
    msg.action = 122U;
    msg.lon_gain = 0.313303254054;
    msg.lat_gain = 0.988021935791;
    msg.bond_thick = 0.114909861047;
    msg.lead_gain = 0.396883730721;
    msg.deconfl_gain = 0.156050192563;
    msg.accel_switch_gain = 0.259184765519;
    msg.safe_dist = 0.0366785799387;
    msg.deconflict_offset = 0.758369004488;
    msg.accel_safe_margin = 0.325823636616;
    msg.accel_lim_x = 0.0239393650467;

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
    msg.setTimeStamp(0.109633164649);
    msg.setSource(6881U);
    msg.setSourceEntity(82U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(64U);
    msg.type = 52U;
    msg.op = 136U;
    msg.err_mean = 0.553656775717;
    msg.dist_min_abs = 0.643053070163;
    msg.dist_min_mean = 0.318628584934;
    msg.roll_rate_mean = 0.556794603609;
    msg.time = 0.209382306764;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 161U;
    tmp_msg_0.lon_gain = 0.0231773199547;
    tmp_msg_0.lat_gain = 0.980193690174;
    tmp_msg_0.bond_thick = 0.0143689695649;
    tmp_msg_0.lead_gain = 0.517715147401;
    tmp_msg_0.deconfl_gain = 0.738655082498;
    tmp_msg_0.accel_switch_gain = 0.976581576922;
    tmp_msg_0.safe_dist = 0.785826504072;
    tmp_msg_0.deconflict_offset = 0.43238566423;
    tmp_msg_0.accel_safe_margin = 0.555689822766;
    tmp_msg_0.accel_lim_x = 0.914520918838;
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
    msg.setTimeStamp(0.333525771786);
    msg.setSource(34942U);
    msg.setSourceEntity(216U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(242U);
    msg.type = 127U;
    msg.op = 5U;
    msg.err_mean = 0.112635531986;
    msg.dist_min_abs = 0.0980952401314;
    msg.dist_min_mean = 0.165633594781;
    msg.roll_rate_mean = 0.599727266905;
    msg.time = 0.507788289038;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 19U;
    tmp_msg_0.lon_gain = 0.312978571047;
    tmp_msg_0.lat_gain = 0.393914674265;
    tmp_msg_0.bond_thick = 0.729187681648;
    tmp_msg_0.lead_gain = 0.155086695418;
    tmp_msg_0.deconfl_gain = 0.410007783222;
    tmp_msg_0.accel_switch_gain = 0.980106002443;
    tmp_msg_0.safe_dist = 0.542098106864;
    tmp_msg_0.deconflict_offset = 0.0239120962669;
    tmp_msg_0.accel_safe_margin = 0.828332817316;
    tmp_msg_0.accel_lim_x = 0.981228854745;
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
    msg.setTimeStamp(0.100389721862);
    msg.setSource(56184U);
    msg.setSourceEntity(44U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(206U);
    msg.type = 160U;
    msg.op = 143U;
    msg.err_mean = 0.229458596732;
    msg.dist_min_abs = 0.952631915715;
    msg.dist_min_mean = 0.299739927317;
    msg.roll_rate_mean = 0.851787477089;
    msg.time = 0.648769026094;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 102U;
    tmp_msg_0.lon_gain = 0.216744975172;
    tmp_msg_0.lat_gain = 0.619794230543;
    tmp_msg_0.bond_thick = 0.63662048614;
    tmp_msg_0.lead_gain = 0.367650570036;
    tmp_msg_0.deconfl_gain = 0.131892334025;
    tmp_msg_0.accel_switch_gain = 0.280080061241;
    tmp_msg_0.safe_dist = 0.545784360529;
    tmp_msg_0.deconflict_offset = 0.0885110246409;
    tmp_msg_0.accel_safe_margin = 0.609324737791;
    tmp_msg_0.accel_lim_x = 0.522311973067;
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
    msg.setTimeStamp(0.323390112925);
    msg.setSource(50363U);
    msg.setSourceEntity(202U);
    msg.setDestination(4549U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.166438616489;
    msg.lon = 0.96250890869;
    msg.eta = 2528835264U;
    msg.duration = 51840U;

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
    msg.setTimeStamp(0.265975701856);
    msg.setSource(62120U);
    msg.setSourceEntity(138U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.274394130227;
    msg.lon = 0.79602417642;
    msg.eta = 2745173632U;
    msg.duration = 30147U;

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
    msg.setTimeStamp(0.44651762718);
    msg.setSource(21122U);
    msg.setSourceEntity(2U);
    msg.setDestination(42373U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.101899027495;
    msg.lon = 0.0718085820246;
    msg.eta = 4101587130U;
    msg.duration = 57469U;

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
    msg.setTimeStamp(0.480363023349);
    msg.setSource(11363U);
    msg.setSourceEntity(146U);
    msg.setDestination(42496U);
    msg.setDestinationEntity(117U);
    msg.plan_id = 20989U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0489046143509;
    tmp_msg_0.lon = 0.867939764315;
    tmp_msg_0.eta = 3041899457U;
    tmp_msg_0.duration = 44985U;
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
    msg.setTimeStamp(0.520697821953);
    msg.setSource(15177U);
    msg.setSourceEntity(21U);
    msg.setDestination(38686U);
    msg.setDestinationEntity(160U);
    msg.plan_id = 13732U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.52312698445;
    tmp_msg_0.lon = 0.320823896459;
    tmp_msg_0.eta = 8552757U;
    tmp_msg_0.duration = 49656U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.203101040461);
    msg.setSource(42821U);
    msg.setSourceEntity(28U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(234U);
    msg.plan_id = 53672U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.686520702618;
    tmp_msg_0.lon = 0.957981817618;
    tmp_msg_0.eta = 521160893U;
    tmp_msg_0.duration = 26770U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.648915726089);
    msg.setSource(4516U);
    msg.setSourceEntity(222U);
    msg.setDestination(4814U);
    msg.setDestinationEntity(98U);
    msg.type = 47U;
    msg.command = 89U;
    msg.settings.assign("ITDZZXSKLTUZMRQPSZCSNRDBKKYBFYHHPCMOMUKSXVVDAXQLBOBIOMHOPEFLJPFCTHLRQKXXTATDHTBCSJACBNFUKZIJIVRXTHVFRKTPWIEMGJOIPWCMQSDNRQBGYFLRVGNEUHJWVKBSEIOEXHZIGNMSSFJBUDVAKQUAWYJGGGTVNEPECNOUIWLDYUPAWYUCYAZGQOHWPGISQVRQLCMDYOBNUFCZZAXRWEYEYA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45731U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PUGAZMEMILWGTMVREKQWURWPTIUTWLCYPRFEFXCHNZCNAVGSCJVNXOZOMXHMPEZSHHUKFKOJNDGQVBLHFOQGWDBDJFHMXVNMYAWTWHSZKJEYCIFMAWJTKDXVNFSIJAKQKNZCWSGJPNQNMQPVUXNPHUDUARYECXTCDDLCJPQBABHQVSOTRUBSUJJAYHSKGBDTYRFGBLGLLRUOLRPXZDDFIREVLTQXOSAIQXKTOB");

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
    msg.setTimeStamp(0.619175813041);
    msg.setSource(3370U);
    msg.setSourceEntity(99U);
    msg.setDestination(47360U);
    msg.setDestinationEntity(139U);
    msg.type = 94U;
    msg.command = 15U;
    msg.settings.assign("LLXTMBEGFNBIMPFSSLUOB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62289U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JRZTOWOVNRVKUFGDUYVWZCLSMKSHKPCJNBLRVQPYBHYUHNHUUILAPDTGVQGEDXTBKJJSZELIIGMDEWEQ");

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
    msg.setTimeStamp(0.238453694272);
    msg.setSource(25009U);
    msg.setSourceEntity(238U);
    msg.setDestination(26374U);
    msg.setDestinationEntity(208U);
    msg.type = 57U;
    msg.command = 93U;
    msg.settings.assign("CNGBZHPDEQYITEMTWNYHMRQREWKLGNQOBCOHWRAIJJJDVKIAQWGUCWJPPCZVIFHNPVXGBTZXWXNMYYPEQDLFFMGTUEMXRDSWOZRTSYZEPDXU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57910U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LKRTFTUZFKYDCFAOMMHOGWTSTLIMNISISNWTQOHYEDXPBPTIMZIRRJJHWLPOVJHLMRZGFTLMHJDMYDCXGTYXDEJKYXVPGYPUSXWEQBYASHICNDHKQKNWWPMDQDESJKBIDWIBJVR");

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
    msg.setTimeStamp(0.0769982846039);
    msg.setSource(13565U);
    msg.setSourceEntity(70U);
    msg.setDestination(3239U);
    msg.setDestinationEntity(42U);
    msg.state = 2U;
    msg.plan_id = 50895U;
    msg.wpt_id = 82U;
    msg.settings_chk = 62310U;

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
    msg.setTimeStamp(0.68858164653);
    msg.setSource(5015U);
    msg.setSourceEntity(151U);
    msg.setDestination(33810U);
    msg.setDestinationEntity(117U);
    msg.state = 229U;
    msg.plan_id = 54072U;
    msg.wpt_id = 77U;
    msg.settings_chk = 45822U;

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
    msg.setTimeStamp(0.862607140537);
    msg.setSource(48948U);
    msg.setSourceEntity(20U);
    msg.setDestination(1662U);
    msg.setDestinationEntity(179U);
    msg.state = 209U;
    msg.plan_id = 63648U;
    msg.wpt_id = 135U;
    msg.settings_chk = 12965U;

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
    msg.setTimeStamp(0.85279056055);
    msg.setSource(55693U);
    msg.setSourceEntity(249U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(34U);
    msg.uid = 163U;
    msg.frag_number = 247U;
    msg.num_frags = 146U;
    const char tmp_msg_0[] = {-20, 56, -90, -79, -83, -81, -46, -20, -127, -118, -29, -89, -94, 117, -66, 50, -81, -11, -126, -113, 82, -43, 75, 13, 24, -8, 22, 48, -20, 118, 96, -42, -3, -54, 121, -16, -86, -126, 0, 36, 111, -50, -47, 94, -69, -47, -90, -74, -10, -83, -100, 26, -69, -61, 90, 121, 39, -37, -56, -2, -21, 110, -96, -4, -55, -29, 64, -102, -121, -87, 99, -61, 12, -51, 53, -118, 22, -127, 83, -105, 57, 61, -80, -64, 32, 109, -100, 0, -11, 118, 93, -96, -29, 16};
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
    msg.setTimeStamp(0.703968105202);
    msg.setSource(31147U);
    msg.setSourceEntity(169U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(12U);
    msg.uid = 188U;
    msg.frag_number = 169U;
    msg.num_frags = 105U;
    const char tmp_msg_0[] = {-71, 55, 18, 20, -54, 104, -74, 122, -87, -22, -17, 118, -44, 29, 91, -79, -23, 41, -73, -98, 58, 37, 22, 14, 80, 53, 112, -84, 38, -16, 45, 24, 31, -39, -45, 98, 99, 70, -80, -111, -82, 81, -31, -25, -36, 3, -126, -39, 23, -20, -46, 115, 52, 9, 45, -128, -41, -80, -24, 17, -113, -21, -22, -78, 36, -117, 63, -26, -25, -29, 62, 9, -68, -84, 19, -14, -107, 9, 55, -18, -106, 84, 54, 124, -20, -49, 84, 9, 92, -27, 120, -117, 10, 3, 92, 97, -36, 31, 64, -32, -15, -92, -3, 47, -11, -13, 38, 30, 0, 2, -62, 61, -105, 70, 83, 96, 41, 90, -87, -85, -47, -85, -55, -100, 112, -58, -44, 58, -58, -38, -12, -4, 4, -70, -128, 61, -60, 117, 8, -19, 93, -105, 55, -128};
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
    msg.setTimeStamp(0.649931487573);
    msg.setSource(13595U);
    msg.setSourceEntity(60U);
    msg.setDestination(14143U);
    msg.setDestinationEntity(64U);
    msg.uid = 16U;
    msg.frag_number = 196U;
    msg.num_frags = 218U;
    const char tmp_msg_0[] = {64, 83, -87, -56, -7, 9, -4, -5, -23, -12, 85, -85, 122, -28, 120, 62, 97, -119, 10, -121, -64, 71, 50, -116, -81, -59, 118, 124, 39, -26, 42, 16, -81, 60, -9, 61, -27, -41, -6, 5, -38, 99, 21, 99, 97, 42, 48, -33, 31, 55, -4, 115, -36, 31, 11, -66, 25, 106, -124, 116, 55, -49, -23, 120, -2, -94, 117, -125, 12, -53, 88, -6, -47, 71, 16, -56, 37, -97, 121, -10, 82, 56, -98, 110, -32, -9, 123, -72, -121, 68, -76, -71, -120, -123, 80, 91, -105, -41, -57, 68, -107, 36, -17, 96, 27, 109, 86, 69, 86, 2, 56, 114, 106, 26, -17, 89, -91, -13, 100, -95, -18, -84, -41, 88, 94, 104, 88, 72, 49, -60, -16, -106, -114, 66, -36, -93, 4, -11, -2, 35, 64, -124, 67, 108, -34, 89, 90, 70, -99, -107, -127, 115, -46, -50, -58, 38, -52, -110, -14, -11, -37, -93, -41, -12, -125, -126, -63, 15, 0, -16, -91, -94, 9, -64, -48, 94, -108, -85, 118, 37, 14, -116, -88, 62, 27, 107, 93, 36, 125, -107, 78, 48, -128, -126, 96, -20, 40, 13, 72, 93, -57, -2, -71, -9, 8, 31, -56};
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
    msg.setTimeStamp(0.717568481437);
    msg.setSource(5677U);
    msg.setSourceEntity(235U);
    msg.setDestination(42337U);
    msg.setDestinationEntity(244U);
    msg.content_type.assign("CJDQANIQHDPMUOFKSRLPZNAHJQLXYYNMQJIOCFODJDNPWPIEBHMABYQAIKZESCEUFOJIBEFYMGZGQGGVPYTXOBRRMVEWLHLJWVKSTBONUTYETHJHWRQTQDCHMRRSXKYKAGGHWTAPVXFUNDRPSNFWCAIDAAFYXVYOXCITWLFIWSJLAITCBQBOKCCDNNZUZUTMUELFWRYZOVZSGJGIGJSFTBLCELHQVRZBRKMKXMPDUZWEGPEZ");
    const char tmp_msg_0[] = {-42, 112, 72, 106, -17, 55, 2, -62, -76, 21, 126, -16, 26, 31, 96, 58, -50, -117, -44, -6, -121, -44, -85, 33, -46, -115, 119, 81, 111, 79, -108, -46, -26, -54, -112, -103, 92, -73, -15, -70, 112, 9, -51, -105, 78, 58, -92, -57, -47, -85, 53, -91, -101, -127, -90, -80, 100, -95, 105, -45, 117, -121, -110, -119, -27, -58, -84, 55, -95, 14, -21, 37, -46, 88, -88, -55, 49, -34, 59, 32, 43, 110, 31, -78, -62, -13, 56, 67, 25, -115, 123, 2, 27, -76, 49, 9, -122, 75, -14, -43, -101, 110, 64, 115, 2, -39, 10, -70, -11, -24, 19, 57, 121, -53, -116, 80, 89, 88, -94, 95, -127, -71, -107, 110, 90, -121, 40, -112, 3, -74, -84, 114, 61, 95, -95, 81, 89, -98, 24, -118, 110, -46, 116, 61, -102, 110, 100, -13, 47, -10, 102, 69, -8, 19, -90, -119, -45, 110, -72, -61, 55, 120, -22, 122, -98, -68, -71, -70, 60, 100, 46, -113, 6, 28, 28, 50, -96, 14, -19, -57, -71, -104, 98, 123, 96, -83, -106, 84, -65, 25, -72, 29, 121, 71, 28, 1, -126, 92, -47, -14, -128, 68, 59, 59, -24, 2, 97, -100, -123, 64, 113, -95, 68, 14};
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
    msg.setTimeStamp(0.0356485665317);
    msg.setSource(29839U);
    msg.setSourceEntity(230U);
    msg.setDestination(18419U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("HWVNQEJWRNYWDBFKGCXHPXRXMMPUEBDLQOVHCXVQOGUADBTOQMTJLCPQBOGSDOIM");
    const char tmp_msg_0[] = {103, -52, 115, -7, 25, 116, 123, -9, -103, -119, -118, 18, 20, 117, 7, 75, 44, -98, -41, -31, 101, -107, -94, 41, 112, 3, -17, -96, 105, 19, -106, -84, -116, -74, 25, -73, 32, 109, 54, -91, -80, 9, -127, 5, -1, -31, -49, 95, -3, -46, 90, 97, -100, 4, -112, -93, -17, -61, -42, 114, 103, -22, 35, 125, -57, -74, 126, -61, 2};
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
    msg.setTimeStamp(0.64237727485);
    msg.setSource(39463U);
    msg.setSourceEntity(180U);
    msg.setDestination(47921U);
    msg.setDestinationEntity(103U);
    msg.content_type.assign("JNSTPVSCIZNQMGCXHWVOMIYTNGJXTPJCORBFQLXTPGEOVEUDWBAGRNIGNSEVWOMWYCVMLUMKWMZAAFXWVWVQZZFQTGPJPAIBTKAFNEFUEIYSPXKHUXCSILSOTYRKFDXEBBMQEALDQTUSXQBDYOEWFKMPBIKHYHEGLFYRBVJCZ");
    const char tmp_msg_0[] = {-122, -43, -20, 12, -110, -90, -7, 61, 58, -21, 101, 89, 35, 98, 0, -25, -2, -86, -97, -38, -66, -69, -17, 99, -119, -32, 36, -22, -128, -111, 96, 15, -25, 18, 100, -7, -121, 39, 126, -9, -100, 34, 19, 70, -66, -124, -5, 82, 14, 111, 79, -97, 113, 94, -102, 109, -7, -103, 78, 118, -40, -26, -61, 103, -45, -12, -68, 36, -100, -18, -111, -43, -121, -66, -93, 61, -3, 68, -68, -84, -115, -88, 28, -81, -12, 53, 54, -31, -127, 54, -124, -18, 9, -55, 53, -85, 7, 124, -80, 75, -115, 81, -6, -18, 64, 95, 122, 101, -98, -128, 67, 83, -80, 106, -100, 59, -111, -17, 55, -17, 114, -28, 80, 7, 121, -2, 64, -21, 10, -9, 70, 97, -75, -10, -10, 67, -128, 120, 68, -1, 8, 99, -28, -11, 53, -20, 90, 109, 37, -88, 114, 81, -113, 68, 106, 9, 117, 58, -90, 18, 121, -74, -88, -38, 101, 60, -10, 1, 39, -21, 6, 95, 80, -117, -48, -47, 15, 49, -95, 83, 21, 65, 109, 125, -106, -75, 12, 76};
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
    msg.setTimeStamp(0.892901376354);
    msg.setSource(21956U);
    msg.setSourceEntity(117U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.211136444585);
    msg.setSource(7941U);
    msg.setSourceEntity(8U);
    msg.setDestination(21044U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.268338030653);
    msg.setSource(40403U);
    msg.setSourceEntity(112U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.85010006386);
    msg.setSource(16961U);
    msg.setSourceEntity(184U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(160U);
    msg.target = 14292U;
    msg.bearing = 0.674499130344;
    msg.elevation = 0.830734629444;

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
    msg.setTimeStamp(0.602090275166);
    msg.setSource(60037U);
    msg.setSourceEntity(13U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(1U);
    msg.target = 43289U;
    msg.bearing = 0.498101407532;
    msg.elevation = 0.899571287921;

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
    msg.setTimeStamp(0.189376880356);
    msg.setSource(14514U);
    msg.setSourceEntity(122U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(110U);
    msg.target = 35630U;
    msg.bearing = 0.753885580807;
    msg.elevation = 0.444316331694;

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
    msg.setTimeStamp(0.689801054071);
    msg.setSource(54728U);
    msg.setSourceEntity(108U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(202U);
    msg.target = 33030U;
    msg.x = 0.138194211671;
    msg.y = 0.968362735115;
    msg.z = 0.507326406879;

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
    msg.setTimeStamp(0.456081858726);
    msg.setSource(15782U);
    msg.setSourceEntity(138U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(18U);
    msg.target = 33953U;
    msg.x = 0.679853028821;
    msg.y = 0.107945587495;
    msg.z = 0.715671524408;

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
    msg.setTimeStamp(0.422991955437);
    msg.setSource(8887U);
    msg.setSourceEntity(167U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(134U);
    msg.target = 53170U;
    msg.x = 0.0454198032046;
    msg.y = 0.892747565355;
    msg.z = 0.0906213485042;

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
    msg.setTimeStamp(0.604209747462);
    msg.setSource(21455U);
    msg.setSourceEntity(29U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(38U);
    msg.target = 25202U;
    msg.lat = 0.403589419671;
    msg.lon = 0.550633289124;
    msg.z_units = 251U;
    msg.z = 0.159101278232;

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
    msg.setTimeStamp(0.0333185364505);
    msg.setSource(54611U);
    msg.setSourceEntity(132U);
    msg.setDestination(52521U);
    msg.setDestinationEntity(123U);
    msg.target = 45072U;
    msg.lat = 0.054456157469;
    msg.lon = 0.825614758211;
    msg.z_units = 29U;
    msg.z = 0.868207862988;

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
    msg.setTimeStamp(0.556120824259);
    msg.setSource(26897U);
    msg.setSourceEntity(135U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(0U);
    msg.target = 65514U;
    msg.lat = 0.230462569431;
    msg.lon = 0.150925097812;
    msg.z_units = 207U;
    msg.z = 0.394718386315;

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
    msg.setTimeStamp(0.582026390496);
    msg.setSource(28102U);
    msg.setSourceEntity(156U);
    msg.setDestination(24501U);
    msg.setDestinationEntity(189U);
    msg.locale.assign("OJKQMWVBHPMDVQGFAVULBYFCYWDKGNAJMZYTSLLXNSMFYGEBQMSVKXPTUHHAUHZHPSUUDGJZBNWXOSWAGOQDGBPCIQVQCYORQDRCRBEXEJMFECTTYDHRQFDIUINMMVO");
    const char tmp_msg_0[] = {15, -115, -103, -31, -48, -85, 74, 119, -119, -88, -2, -66, -18, 86, -47, 119, 52, -114, -81, 81, -67, -84, 28, -87, 19, 69, 80, -2, 67, -92, 32, 0, 104, -90, 74, -48, 78, 45, -42, -110, 37};
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
    msg.setTimeStamp(0.259902992619);
    msg.setSource(42124U);
    msg.setSourceEntity(175U);
    msg.setDestination(62252U);
    msg.setDestinationEntity(132U);
    msg.locale.assign("QWTIBYLHREETVAZLEBGUOXEKYYFDJOHPPFGHRYCBDQLNXLSKUUTDPHKVZUXTKUQKVOWFZQXQWNGAWMAFPGCVSZSJPUKEADIOHICBTTIPZROZNUUDAFQMSCXGEKXAWYWQLNIR");
    const char tmp_msg_0[] = {101, 13, 56, 15, -93, -35, 118, 98, -12, 119, 56, -54, -100, -101, -123, -46, -23, 18, -52, -101, 15, -84, -63, 67, -23, 15, 98, 104, 85, -93, 64, 42, 53, 8, 57, -34, 111, -89, 6, -58, -44, -65, -86, -59, -107, 114, -109, -28, -60, 18, 64, 46, -55, 125, -41, 126, 47, -5, 27, 52, -118, -15, 8, 120, -54, -120, 14, 111, -67, 70};
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
    msg.setTimeStamp(0.362279803296);
    msg.setSource(12872U);
    msg.setSourceEntity(13U);
    msg.setDestination(61927U);
    msg.setDestinationEntity(177U);
    msg.locale.assign("UAPNSREWOTCRBHPQKVVFFFDKPBOBDMEDZNGAVZGUZBAKFFELMMFU");
    const char tmp_msg_0[] = {97, -110, -88, -14, -43, -66, -116, -15, -74, 9, 46, 71, -124, 12, 27, 97, 117, 71, -70, -35, -28, 102, -37, -117, -116, -118, -18, -88, 55, 81, -88, 39, -29, -8, -50, 79, 105, -95, -30, -35, -48, 58, 79, 48, -60, -3, -82, -82, -28, -65, -96, -84, 107, -19, 28, -95, -106, 101, 49, 116, 87, -10, 120, 28, -27, -96, -122, -63, 94, -63, -14, 34, 54, 113, -75, 79, -79, 106, 104, -1, -119, 84, 12, 103, -40, -112, -103, 65, 100, 80, 0, 118, -66, 104, 121, -24, 9, -112, 105, 40, 106, 3, -5, 79, -90, -92, -95, -79, 45, -5, -36, 33, 41, -68, 38, -72, -112, -41, -61, 29, -32, -46, -33, 14, -35, 90, 5, 87, -13, -77, 86, -94, 102, 101, -123, 85, 114, 17, 28, -28, -92, 86, 124, -37, 66, -13, 81, -102, -43, -58, -7, -66, -49, 49, -88, -120, 111, 31, -62, -15, 9, 35, -126, -60, -76, 68, 80, 93, 8, 85, 23, -84, 50, 46, -39, -23, -22, 16, -33, -83, -124, 39, 46, 101};
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
    msg.setTimeStamp(0.291176865281);
    msg.setSource(27660U);
    msg.setSourceEntity(48U);
    msg.setDestination(50438U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.627899838133);
    msg.setSource(33927U);
    msg.setSourceEntity(5U);
    msg.setDestination(426U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.794154713013);
    msg.setSource(17444U);
    msg.setSourceEntity(133U);
    msg.setDestination(250U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.638602819077);
    msg.setSource(42727U);
    msg.setSourceEntity(238U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(80U);
    msg.camid = 148U;
    msg.x = 930U;
    msg.y = 43354U;

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
    msg.setTimeStamp(0.703291194021);
    msg.setSource(41924U);
    msg.setSourceEntity(107U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(254U);
    msg.camid = 95U;
    msg.x = 47674U;
    msg.y = 37971U;

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
    msg.setTimeStamp(0.0742771080351);
    msg.setSource(36960U);
    msg.setSourceEntity(198U);
    msg.setDestination(60882U);
    msg.setDestinationEntity(158U);
    msg.camid = 238U;
    msg.x = 59049U;
    msg.y = 57001U;

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
    msg.setTimeStamp(0.145823163953);
    msg.setSource(3886U);
    msg.setSourceEntity(124U);
    msg.setDestination(21797U);
    msg.setDestinationEntity(12U);
    msg.camid = 36U;
    msg.x = 37654U;
    msg.y = 10290U;

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
    msg.setTimeStamp(0.00501696818016);
    msg.setSource(16497U);
    msg.setSourceEntity(176U);
    msg.setDestination(8793U);
    msg.setDestinationEntity(188U);
    msg.camid = 179U;
    msg.x = 49319U;
    msg.y = 61147U;

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
    msg.setTimeStamp(0.518871328991);
    msg.setSource(29523U);
    msg.setSourceEntity(114U);
    msg.setDestination(15030U);
    msg.setDestinationEntity(168U);
    msg.camid = 219U;
    msg.x = 5532U;
    msg.y = 61546U;

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
    msg.setTimeStamp(0.77215110869);
    msg.setSource(41257U);
    msg.setSourceEntity(138U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(197U);
    msg.tracking = 166U;
    msg.lat = 0.802446078877;
    msg.lon = 0.25308252762;
    msg.x = 0.257854068559;
    msg.y = 0.390895752794;
    msg.z = 0.523863216754;

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
    msg.setTimeStamp(0.983229411351);
    msg.setSource(47048U);
    msg.setSourceEntity(38U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(239U);
    msg.tracking = 65U;
    msg.lat = 0.670894059233;
    msg.lon = 0.306271542201;
    msg.x = 0.00823372238321;
    msg.y = 0.745506846997;
    msg.z = 0.749248354522;

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
    msg.setTimeStamp(0.950460244384);
    msg.setSource(63455U);
    msg.setSourceEntity(93U);
    msg.setDestination(40955U);
    msg.setDestinationEntity(191U);
    msg.tracking = 213U;
    msg.lat = 0.862070507012;
    msg.lon = 0.290743844338;
    msg.x = 0.539901902285;
    msg.y = 0.106970928798;
    msg.z = 0.208267239486;

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
    msg.setTimeStamp(0.809768323586);
    msg.setSource(53939U);
    msg.setSourceEntity(185U);
    msg.setDestination(20281U);
    msg.setDestinationEntity(0U);
    msg.target.assign("LUBREIGEOLXSZVTCUOKJRSDSCBSVCEUQKWQOLYNFUWHKTCINLBXTJLVDHUJGDDGRCHIMDXMGKWFMWPZJGRLVNRQINGOZVPAZCDTFYZMIOPXKBEHVMGFOAVZZBANSBNFQQFWMQQNVY");
    msg.lbearing = 0.754035939142;
    msg.lelevation = 0.745823635155;
    msg.bearing = 0.682131100523;
    msg.elevation = 0.417556548838;
    msg.phi = 0.857167593412;
    msg.theta = 0.579406583347;
    msg.psi = 0.99341518877;
    msg.accuracy = 0.990166125803;

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
    msg.setTimeStamp(0.423822754622);
    msg.setSource(18305U);
    msg.setSourceEntity(29U);
    msg.setDestination(64621U);
    msg.setDestinationEntity(48U);
    msg.target.assign("MCERPBQCEDDSFJWWZKADLPJHYWHDMQJCDNZNESKBWPKRIFTXQNFNIQGUIMULFPXOVVMHPLMEUCFEGXREWMP");
    msg.lbearing = 0.701470249315;
    msg.lelevation = 0.0983996391636;
    msg.bearing = 0.948392608911;
    msg.elevation = 0.98812759304;
    msg.phi = 0.0315802042014;
    msg.theta = 0.177761945101;
    msg.psi = 0.66993802199;
    msg.accuracy = 0.182663140154;

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
    msg.setTimeStamp(0.990360465216);
    msg.setSource(2683U);
    msg.setSourceEntity(218U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(16U);
    msg.target.assign("VRMAZMXHJWEVAYGRQRAGNUVWMMZHXIACKECRYWKPEOUUGHFCT");
    msg.lbearing = 0.361796224145;
    msg.lelevation = 0.191278458589;
    msg.bearing = 0.992998435318;
    msg.elevation = 0.888457209507;
    msg.phi = 0.364345386611;
    msg.theta = 0.369014496903;
    msg.psi = 0.962902476739;
    msg.accuracy = 0.875566901608;

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
    msg.setTimeStamp(0.0477412802573);
    msg.setSource(32740U);
    msg.setSourceEntity(98U);
    msg.setDestination(44329U);
    msg.setDestinationEntity(105U);
    msg.target.assign("NIWDHNCVJAXXCQFRBNUEXVWOZLWOJZATCAJMNVEOHUROSTKIKDRJHMDNJHCLONKQUIGZQUUGNUTAHNNXGQDHHKYZPPUZRCGYZSDJFZXVPNTAWCQZMLAEOHWKSIQEJTRLBIMRJZHCSRBLTFLVPKYVPUAGYYFBWIPWGITEYKTQF");
    msg.x = 0.332384826749;
    msg.y = 0.279447381203;
    msg.z = 0.499248644335;
    msg.n = 0.874245494531;
    msg.e = 0.198161867186;
    msg.d = 0.410491264099;
    msg.phi = 0.878033857655;
    msg.theta = 0.884797845986;
    msg.psi = 0.855849388477;
    msg.accuracy = 0.353261840416;

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
    msg.setTimeStamp(0.377935130536);
    msg.setSource(30235U);
    msg.setSourceEntity(97U);
    msg.setDestination(21812U);
    msg.setDestinationEntity(16U);
    msg.target.assign("LBWMEJCXSFQXJFIATNNGXPWIUFUNAJODNPHEKMTFPTGJDEZNERDMVZULYAZJEMCHRBPDQJSTREVZOXQD");
    msg.x = 0.0544378325078;
    msg.y = 0.0823243093189;
    msg.z = 0.846774465887;
    msg.n = 0.466091124589;
    msg.e = 0.59162115805;
    msg.d = 0.04144679298;
    msg.phi = 0.705455742514;
    msg.theta = 0.771634817662;
    msg.psi = 0.543201815127;
    msg.accuracy = 0.791188368681;

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
    msg.setTimeStamp(0.214003440161);
    msg.setSource(5128U);
    msg.setSourceEntity(111U);
    msg.setDestination(7933U);
    msg.setDestinationEntity(50U);
    msg.target.assign("GJAIGBDTPMOHDJWITKMKOXYPZLHZACMNGGPXVS");
    msg.x = 0.692193804394;
    msg.y = 0.40547638834;
    msg.z = 0.168102333673;
    msg.n = 0.799792121564;
    msg.e = 0.765653190857;
    msg.d = 0.255294831514;
    msg.phi = 0.0836235530091;
    msg.theta = 0.559750914566;
    msg.psi = 0.214049496128;
    msg.accuracy = 0.018041696997;

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
    msg.setTimeStamp(0.401600423199);
    msg.setSource(62001U);
    msg.setSourceEntity(85U);
    msg.setDestination(12571U);
    msg.setDestinationEntity(156U);
    msg.target.assign("SCOMBNJUYMNVMSOGUDQDAIXZKHUVSYONACHXIIIPRGLFITJYEVYULNZCQWQFNBEQJXMNCVZPQXRSRFAPZAEWTKKOOZKELTICBNTAEMJQFHUXTXJWLPTRRPAKBDAXWHJVCPEWYIPTAOYRXMD");
    msg.lat = 0.987651086886;
    msg.lon = 0.392840005403;
    msg.z_units = 193U;
    msg.z = 0.906650937172;
    msg.accuracy = 0.156484744855;

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
    msg.setTimeStamp(0.144312493774);
    msg.setSource(8411U);
    msg.setSourceEntity(27U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(57U);
    msg.target.assign("JEKPNZXHUSLWHHNPLJXSAQPBBYPIRWASCJCDGTWUONYZGCGBINSYFRMKMKHESOZKDUJVARJTBLGFLFOVOEHNXPIQONVDUHPWDSTCKOEYPFKTZLBHXMBIMUGMOZOEMYMQDRHCCAXGVZRUNSPR");
    msg.lat = 0.776874783979;
    msg.lon = 0.375311967514;
    msg.z_units = 76U;
    msg.z = 0.739045551663;
    msg.accuracy = 0.873855703492;

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
    msg.setTimeStamp(0.424901024435);
    msg.setSource(57137U);
    msg.setSourceEntity(156U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(235U);
    msg.target.assign("XGTTBNYBYLJKKACEWFZFDNKSHTNLUADWYMSADWFLCYRINHWJVUC");
    msg.lat = 0.121601555285;
    msg.lon = 0.564774028049;
    msg.z_units = 20U;
    msg.z = 0.545031730296;
    msg.accuracy = 0.183915089854;

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
    msg.setTimeStamp(0.473271951402);
    msg.setSource(8555U);
    msg.setSourceEntity(3U);
    msg.setDestination(36675U);
    msg.setDestinationEntity(57U);
    msg.name.assign("OBQDMGEIKVRHMNSXBMGPVZBRFSMFWDVJBATAQGDHHYOKZKZAGWQFZVBLSGWXBUMEWJIJWZUYIPSHIITULXXLTOLKWBWCCVCRKJZDSMZFTIELSOSEYPYIMFGHYNADPFRARPJQCRHUPKUFDENFCPXNK");
    msg.lat = 0.0320323963768;
    msg.lon = 0.202311017599;
    msg.z = 0.484825972245;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.983823896288);
    msg.setSource(18892U);
    msg.setSourceEntity(66U);
    msg.setDestination(20694U);
    msg.setDestinationEntity(153U);
    msg.name.assign("APGDGWXFWFQJHTNVSGIXQYBKTTNIVFHSSBXHWICPFJTTIGEFUCGNEKCFHUQLPAHDKMUDVRJYZUXMLPUOSMDQMPKZRQWYRJGYKLSHKVEANZXYFRWWPOOHQNZMYIXJVPKMWADXSPTERVDFLLELBCFWCK");
    msg.lat = 0.930938334376;
    msg.lon = 0.316402915581;
    msg.z = 0.829524860112;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.0869007953206);
    msg.setSource(26812U);
    msg.setSourceEntity(219U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(168U);
    msg.name.assign("DQRQFQFXKLTVWNFXYSURKJTNPWDZRPJKKFAVJIFWBVUXRMSOMCIHVGXKZZBQXZOXHDEMAIOSJKQLUITYEHYBSAVEFE");
    msg.lat = 0.226378605926;
    msg.lon = 0.302813620134;
    msg.z = 0.104789161236;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.482952274979);
    msg.setSource(27449U);
    msg.setSourceEntity(181U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(105U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.801269577363);
    msg.setSource(51784U);
    msg.setSourceEntity(207U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(167U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.420084971081);
    msg.setSource(18441U);
    msg.setSourceEntity(63U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(65U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.70741416517);
    msg.setSource(36626U);
    msg.setSourceEntity(109U);
    msg.setDestination(22369U);
    msg.setDestinationEntity(170U);
    msg.value = 0.827685915081;
    msg.type = 211U;

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
    msg.setTimeStamp(0.142039178096);
    msg.setSource(49656U);
    msg.setSourceEntity(253U);
    msg.setDestination(39626U);
    msg.setDestinationEntity(215U);
    msg.value = 0.743819003621;
    msg.type = 170U;

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
    msg.setTimeStamp(0.65573270038);
    msg.setSource(32561U);
    msg.setSourceEntity(44U);
    msg.setDestination(29460U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0774329490359;
    msg.type = 215U;

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
    msg.setTimeStamp(0.603336026212);
    msg.setSource(55480U);
    msg.setSourceEntity(209U);
    msg.setDestination(52940U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0638227820946;

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
    msg.setTimeStamp(0.281682134175);
    msg.setSource(40879U);
    msg.setSourceEntity(179U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(69U);
    msg.value = 0.549283269105;

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
    msg.setTimeStamp(0.68632491155);
    msg.setSource(20141U);
    msg.setSourceEntity(38U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(75U);
    msg.value = 0.144668196165;

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
    msg.setTimeStamp(0.323610960157);
    msg.setSource(25491U);
    msg.setSourceEntity(249U);
    msg.setDestination(54313U);
    msg.setDestinationEntity(146U);
    msg.timestamp_last_service = 0.637991825484;
    msg.time_next_service = 0.257664791359;
    msg.time_motor_next_service = 0.321526624267;
    msg.time_idle_ground = 0.543692348135;
    msg.time_idle_air = 0.468218622727;
    msg.time_idle_water = 0.789043868915;
    msg.time_idle_underwater = 0.168677068001;
    msg.time_idle_unknown = 0.646168982825;
    msg.time_motor_ground = 0.153719890848;
    msg.time_motor_air = 0.287198431651;
    msg.time_motor_water = 0.535273983484;
    msg.time_motor_underwater = 0.288996689369;
    msg.time_motor_unknown = 0.420789879707;
    msg.rpm_min = -27392;
    msg.rpm_max = 21170;
    msg.depth_max = 0.114752571324;

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
    msg.setTimeStamp(0.105944263952);
    msg.setSource(26838U);
    msg.setSourceEntity(9U);
    msg.setDestination(24694U);
    msg.setDestinationEntity(51U);
    msg.timestamp_last_service = 0.744755281119;
    msg.time_next_service = 0.82936855428;
    msg.time_motor_next_service = 0.579582565283;
    msg.time_idle_ground = 0.0742354150065;
    msg.time_idle_air = 0.405427061772;
    msg.time_idle_water = 0.512056276618;
    msg.time_idle_underwater = 0.357741392509;
    msg.time_idle_unknown = 0.80321230336;
    msg.time_motor_ground = 0.952001322375;
    msg.time_motor_air = 0.165933537209;
    msg.time_motor_water = 0.977405043354;
    msg.time_motor_underwater = 0.587975649434;
    msg.time_motor_unknown = 0.359450781806;
    msg.rpm_min = -22093;
    msg.rpm_max = 13029;
    msg.depth_max = 0.748735890144;

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
    msg.setTimeStamp(0.336112557809);
    msg.setSource(10884U);
    msg.setSourceEntity(227U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(38U);
    msg.timestamp_last_service = 0.503908485022;
    msg.time_next_service = 0.156150307601;
    msg.time_motor_next_service = 0.0101637546062;
    msg.time_idle_ground = 0.561378995387;
    msg.time_idle_air = 0.872125215612;
    msg.time_idle_water = 0.370919707516;
    msg.time_idle_underwater = 0.527632731689;
    msg.time_idle_unknown = 0.501488628192;
    msg.time_motor_ground = 0.0414917322209;
    msg.time_motor_air = 0.870286348429;
    msg.time_motor_water = 0.155715423169;
    msg.time_motor_underwater = 0.824952855149;
    msg.time_motor_unknown = 0.765382173018;
    msg.rpm_min = 17181;
    msg.rpm_max = 6059;
    msg.depth_max = 0.373400856878;

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
    msg.setTimeStamp(0.351489106244);
    msg.setSource(4930U);
    msg.setSourceEntity(7U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(45U);
    msg.severity = 163U;
    msg.text.assign("GWDOCFYSSJYANAQZDEGZDFDRQNRPWZHNYGFZMTWVFIKSEOKAQMZUKRVABZZICRUBDCYFBJIJHVPLOKSTNOIRGDSNRCSFYHOXKIMMTYLRMPUACXACWPMNMTBVL");

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
    msg.setTimeStamp(0.535098550105);
    msg.setSource(23449U);
    msg.setSourceEntity(226U);
    msg.setDestination(63898U);
    msg.setDestinationEntity(172U);
    msg.severity = 142U;
    msg.text.assign("RTGRVOSQPVARZGOIUFTQUVGWXYTIKDJEHXCFFOZKZPIZPECOENJVGWBJPJNAYYFYYONYYQMPFADKNNTLJQRXKZYDUMWVIWSSLCSDPNLRKIIRWQHSUMXDPEDEYVUJJPMHKJLBECKEGTRIQSHFNQRWXJLCCWOXCWFZQEBASHMKJCZVMMBXGSUBFLTXTRVBZISFBQLR");

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
    msg.setTimeStamp(0.789234333388);
    msg.setSource(52158U);
    msg.setSourceEntity(224U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(117U);
    msg.severity = 53U;
    msg.text.assign("HVYSQARJAHYKHGYVEBILIZYOPLNHZSWCUDDAEECPEUIMQTXATMKMNNVXONDJKBEIEOADXTPRTSRDDQSFMWNFHAPLHMUICGHXZBWDNBNVWJGRZCQCFKJMFUZRMIMURPQASOAYXIICPGQPOPWYWBNSJFUHBZWLCZXRTXKNUIFFKYTSBKRLYMFKGFWNFVGLVQCGJTEGBOTAVJRYOOZDJWXHARKTCSVQDWGPUJXXQJSLVIELBHLLZUTED");

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
    msg.setTimeStamp(0.974814574897);
    msg.setSource(18193U);
    msg.setSourceEntity(87U);
    msg.setDestination(39350U);
    msg.setDestinationEntity(233U);
    msg.channel = -11;
    msg.value = -1021954866;
    msg.gain = 195U;

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
    msg.setTimeStamp(0.997250424518);
    msg.setSource(27300U);
    msg.setSourceEntity(205U);
    msg.setDestination(44702U);
    msg.setDestinationEntity(133U);
    msg.channel = 29;
    msg.value = -386724021;
    msg.gain = 63U;

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
    msg.setTimeStamp(0.827043936863);
    msg.setSource(56789U);
    msg.setSourceEntity(91U);
    msg.setDestination(10747U);
    msg.setDestinationEntity(241U);
    msg.channel = 56;
    msg.value = -975048617;
    msg.gain = 121U;

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
    msg.setTimeStamp(0.821480491859);
    msg.setSource(54191U);
    msg.setSourceEntity(76U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(91U);
    msg.ch01 = 0.350853491046;
    msg.ch02 = 0.88513346417;
    msg.ch03 = 0.624650807467;
    msg.ch04 = 0.789563799469;
    msg.ch05 = 0.106659657703;
    msg.ch06 = 0.86689177502;
    msg.ch07 = 0.429711380277;
    msg.ch08 = 0.522999918372;
    msg.ch09 = 0.556986208916;
    msg.ch10 = 0.698667378799;
    msg.ch11 = 0.485189043228;
    msg.ch12 = 0.279838462821;
    msg.ch13 = 0.35224238607;
    msg.ch14 = 0.779205472742;
    msg.ch15 = 0.972199932312;
    msg.ch16 = 0.924792167625;

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
    msg.setTimeStamp(0.764049428698);
    msg.setSource(11537U);
    msg.setSourceEntity(19U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(27U);
    msg.ch01 = 0.823301924135;
    msg.ch02 = 0.630922695985;
    msg.ch03 = 0.940394959953;
    msg.ch04 = 0.759689715442;
    msg.ch05 = 0.11422860778;
    msg.ch06 = 0.949108265742;
    msg.ch07 = 0.382110546893;
    msg.ch08 = 0.962025796209;
    msg.ch09 = 0.732671432989;
    msg.ch10 = 0.510977967518;
    msg.ch11 = 0.323652379701;
    msg.ch12 = 0.980613841285;
    msg.ch13 = 0.0682675388146;
    msg.ch14 = 0.01796602213;
    msg.ch15 = 0.137614507003;
    msg.ch16 = 0.290801992235;

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
    msg.setTimeStamp(0.854444201207);
    msg.setSource(44706U);
    msg.setSourceEntity(200U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(208U);
    msg.ch01 = 0.133249058141;
    msg.ch02 = 0.49295160489;
    msg.ch03 = 0.629847994451;
    msg.ch04 = 0.135661537694;
    msg.ch05 = 0.735723650858;
    msg.ch06 = 0.846193002344;
    msg.ch07 = 0.662328700575;
    msg.ch08 = 0.19955427928;
    msg.ch09 = 0.932272062392;
    msg.ch10 = 0.555080089695;
    msg.ch11 = 0.741202685325;
    msg.ch12 = 0.441299386103;
    msg.ch13 = 0.0447751755341;
    msg.ch14 = 0.112203634017;
    msg.ch15 = 0.889001851364;
    msg.ch16 = 0.764172128612;

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

  return test.getReturnValue();
}
