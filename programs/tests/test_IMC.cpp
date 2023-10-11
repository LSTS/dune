//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 6c1a70a8b3383d6342fe5d5e3fa7e994                            *
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
    msg.setTimeStamp(0.29184206535278745);
    msg.setSource(63193U);
    msg.setSourceEntity(76U);
    msg.setDestination(36999U);
    msg.setDestinationEntity(2U);
    msg.state = 98U;
    msg.flags = 120U;
    msg.description.assign("CRLEHKWFZBHXUYMBLLJNPCCMGDOISTSEJGVPZDAQFKSKOSWNPNXDGRJAZWIVZDMNVOMMOHEXFXWBUXDSYIXKPDHGINNREOUVGTIASYHJVAWPBUCHFDBONPLOAOLNYKRZPGA");

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
    msg.setTimeStamp(0.8615646605150736);
    msg.setSource(6690U);
    msg.setSourceEntity(70U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(182U);
    msg.state = 140U;
    msg.flags = 79U;
    msg.description.assign("CGSRLKPGOCUYTYLICIERNJGBFPJTSTWKFUOZBBWAOUEZPTAVZOHVNYSEVQAFAIDJJDLLALPSTKDCYFBFIDXGVYXKNMMLFMOCSYFCLPYQYRQJGHZKTSEXCSMURMWNQUXTAXJEAHRPUONMDHDWXXPGJ");

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
    msg.setTimeStamp(0.8771429817903483);
    msg.setSource(30477U);
    msg.setSourceEntity(26U);
    msg.setDestination(17012U);
    msg.setDestinationEntity(105U);
    msg.state = 207U;
    msg.flags = 117U;
    msg.description.assign("IPQBGOUCYNBDFOAQFAOQCSTFHJXITGDEJYWESSTDVOBKYIWTPVVONICOAAEFQQLFHEPMUDQUWX");

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
    msg.setTimeStamp(0.3665959045237829);
    msg.setSource(2879U);
    msg.setSourceEntity(194U);
    msg.setDestination(41435U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.4762611516178694);
    msg.setSource(39091U);
    msg.setSourceEntity(35U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.27711236068781087);
    msg.setSource(25288U);
    msg.setSourceEntity(219U);
    msg.setDestination(4915U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.846743527981295);
    msg.setSource(31877U);
    msg.setSourceEntity(105U);
    msg.setDestination(5329U);
    msg.setDestinationEntity(32U);
    msg.id = 18U;
    msg.label.assign("PMVMXILPCUGDJRZUFEBAJZIMNPJUSCFPWUNRIWAUWQXWKCFAAHNQIIWHSQRFFGZMVSXVBABEPXQAMTKYDRROFZRGRYONFEYNKUGJLIXLPKEGLNUAUZTORWOKYHYYFBWPZLSVCDTOODRQYVSLEPBHGQVDMPGKPHHIMDXHWLSHXONSBJKLXJBEAGZKVJLWCXCETGZBSEJDHZYCNAFSGOCJUUIKQTFOYANTTQ");
    msg.component.assign("RFYNMCSVMBHFTJISSVLWBBXJQQEVCTAEBAXQIOJLHOPLFXKJICYYOQKWBGDNAWXIFYEGYSHHUVPRRIPOATDLBYXVIXFDKJBJZSRIWKNHXLVCMPUITRNVJGPNUNGYGYFCGDLJTACPYRZYEDZOQSAMDUJOQWWDQUVGEXJZBZACHMUMZWMCQSGLUBAVTRPLXXDIPSNOQTK");
    msg.act_time = 7990U;
    msg.deact_time = 32825U;

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
    msg.setTimeStamp(0.9410716276107327);
    msg.setSource(65145U);
    msg.setSourceEntity(83U);
    msg.setDestination(59543U);
    msg.setDestinationEntity(152U);
    msg.id = 245U;
    msg.label.assign("ZSIMUHYYRECGAFGHZPUILBTQHHJNBIGHHVUEHPAOAFDXEXFSCLNDWPD");
    msg.component.assign("TJWCYIEKZMFBHYPIDLSVIXVRSIUBZHDPYIPBCDYSMYVMCEC");
    msg.act_time = 2287U;
    msg.deact_time = 1345U;

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
    msg.setTimeStamp(0.6227842876061914);
    msg.setSource(42955U);
    msg.setSourceEntity(201U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(147U);
    msg.id = 5U;
    msg.label.assign("ZCYAYMUZZDPJEAUECDJQAQLSRKHTONPETNDVNNFHUQQKCXNMBFWAXGNWYIZKEAWXHO");
    msg.component.assign("UHNKZDCULUTHTHVIWGJRCPBGXABMSKFWR");
    msg.act_time = 3738U;
    msg.deact_time = 25883U;

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
    msg.setTimeStamp(0.29154132351966444);
    msg.setSource(43984U);
    msg.setSourceEntity(77U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(218U);
    msg.id = 112U;

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
    msg.setTimeStamp(0.08793422992277466);
    msg.setSource(14765U);
    msg.setSourceEntity(60U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(240U);
    msg.id = 8U;

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
    msg.setTimeStamp(0.5986409881613007);
    msg.setSource(10638U);
    msg.setSourceEntity(217U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(91U);
    msg.id = 114U;

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
    msg.setTimeStamp(0.6512638807380825);
    msg.setSource(47217U);
    msg.setSourceEntity(129U);
    msg.setDestination(43800U);
    msg.setDestinationEntity(89U);
    msg.op = 67U;
    msg.list.assign("WXPCGRNDUZDFHCXQHZWNXKUZOXPEARBQOSTCVTINTHJULOESAQGQKBFBLQECPTOUWPAHWKJENHXZBXWRUIBSJOGQDLLMMEWUHNICJULMNBXNHPJGQUPAJGYNZLBKCOFEKTYKFKSDRRTIRGSKPDCVMQAF");

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
    msg.setTimeStamp(0.4309615005302332);
    msg.setSource(8246U);
    msg.setSourceEntity(92U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(204U);
    msg.op = 213U;
    msg.list.assign("UBYSJFMQEKNTZWXKFIUWOAPAZDDFLXJMVLDCPXDSHBULSJPQJYBEFCQGTERLKWCSZZJIGNJLEGRZYWBSAGETBCRFKSHTHUWVXHBIIUIDTOVOIMKFXIERRCLTDQFPDQQFMVXKVUXPHKTPZCYPNONGEGYWUB");

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
    msg.setTimeStamp(0.2203739509050362);
    msg.setSource(46618U);
    msg.setSourceEntity(79U);
    msg.setDestination(7400U);
    msg.setDestinationEntity(84U);
    msg.op = 48U;
    msg.list.assign("JSWPRXHDYMEKHSNRHKHQCUSCPYYNSWCLTEJZPORJLLNHIUVSUQHPHUMGGKLTWSKWOYJBXMLBXBHSDEQLJAPEPEVDSHKGOFNVXQQZGAWGURHDFSCIMNVUZZBFPCXOOMCJVVBQNCMRAIFWYXOJEYLNTDIQZ");

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
    msg.setTimeStamp(0.8353844493676016);
    msg.setSource(50881U);
    msg.setSourceEntity(35U);
    msg.setDestination(60496U);
    msg.setDestinationEntity(172U);
    msg.value = 70U;

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
    msg.setTimeStamp(0.7555987119235259);
    msg.setSource(50273U);
    msg.setSourceEntity(127U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(67U);
    msg.value = 249U;

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
    msg.setTimeStamp(0.7991452288370293);
    msg.setSource(41467U);
    msg.setSourceEntity(163U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(76U);
    msg.value = 133U;

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
    msg.setTimeStamp(0.4427476290624226);
    msg.setSource(34137U);
    msg.setSourceEntity(247U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("TJJAFBSBCMAXOYGKFPNIYZKJIZVMPQPPRHETUHLPYVJUOSLWIRUGPGJLGKNDHAPNVQQAIJFEYNXHLQVEIDHKYZXEUGZVNXVQUJHNQEKMXUSPAGVAXRRUSZWHDSOGRDOTBETIMXWCQCGUKMFWFZRZFSWRYOLBDSLRDFHDFBYUPMMCSDNCIANKEFOYAAWLQMTTZGHKBNQXPCRCCZKTMGRLBWOQDXYLZEBMVLUOVTTVOEWECIJICJJDBSBOYNW");
    msg.message_id = 45297U;

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
    msg.setTimeStamp(0.41981160209048374);
    msg.setSource(14891U);
    msg.setSourceEntity(57U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("VMTDEBHSRCVGEEZFADBURGRKFLTCFRYMPRDXXWPHGCMAAAEBUPCISDTDVVWROOLBQGSCGPBJJWTGTLSISNLZSXYFKVKUKXMLAQKANAZEZQTEBCSVTKCLENGWZHFPWCODFJAPJCIXQBJIOIGSMUONYHAFGTAJJHLMYDPMYWHGFSIDVKNUCPPNIQXJXLKSBTHURYRZDQHHVXPLXMZFKJEBWNWOJUYYLI");
    msg.message_id = 3655U;

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
    msg.setTimeStamp(0.5128813280229624);
    msg.setSource(65366U);
    msg.setSourceEntity(170U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("EAEYVXHCFVGRJSPNSMYDXAHGNHJJOKMHYCUYXAWNIZOGBRVILOVQXRWLSVPPYDZMIORODELMFTUIHGCKNZBXAWQUFKUSCIAOOPMZCAHWQILZFGSGTCQKXGQYPJBPYXJNUJXTRQVLIMCDWSDSGTOZAKAJXHM");
    msg.message_id = 20445U;

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
    msg.setTimeStamp(0.5565437500560827);
    msg.setSource(42373U);
    msg.setSourceEntity(168U);
    msg.setDestination(7589U);
    msg.setDestinationEntity(98U);
    msg.type = 86U;

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
    msg.setTimeStamp(0.6715245455505661);
    msg.setSource(8426U);
    msg.setSourceEntity(87U);
    msg.setDestination(55203U);
    msg.setDestinationEntity(75U);
    msg.type = 139U;

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
    msg.setTimeStamp(0.40512300189226225);
    msg.setSource(26796U);
    msg.setSourceEntity(123U);
    msg.setDestination(7012U);
    msg.setDestinationEntity(135U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.7683026524386258);
    msg.setSource(36883U);
    msg.setSourceEntity(26U);
    msg.setDestination(58391U);
    msg.setDestinationEntity(219U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.4224437436015879);
    msg.setSource(44545U);
    msg.setSourceEntity(217U);
    msg.setDestination(6296U);
    msg.setDestinationEntity(31U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.6617088583321448);
    msg.setSource(42858U);
    msg.setSourceEntity(22U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(154U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.46154076395974664);
    msg.setSource(44656U);
    msg.setSourceEntity(107U);
    msg.setDestination(22443U);
    msg.setDestinationEntity(119U);
    msg.total_steps = 227U;
    msg.step_number = 118U;
    msg.step.assign("EYROOPUOOALLIJHXJXRSLOTEAJCXIFMGBNZZDYNTRYJBPBICCXGMUNLXECOWVKPFPIWKUVVBEFXOFWJACLYISSHNSZZVWRDLPHGMHHEBCJRVNFVSVGJXIBEPDYUNGFGIQCMUMRNIBEYDAWITBPSAJXKCQWOQCUSCGHTQWUPQPUGADWZJNTMDLHSTKYYGTKLXL");
    msg.flags = 237U;

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
    msg.setTimeStamp(0.1441924294090161);
    msg.setSource(60127U);
    msg.setSourceEntity(229U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 135U;
    msg.step_number = 40U;
    msg.step.assign("GTBNBRSWDEJQJZTQREJLBDMGZHLZXYXWSWLBFMYMZRSYEDDVANTLVVHMSZUVNQOYDUIRKYONVOOIACHEGWZWLUPDRYETDIJAVWDJWAVOBTATLYFSUXDJUSKOBMXLGSYPMROXCKKZSKHCPHADIGSAMKHIIEFZURZRKEKFXQBAQCWACPHGTUPFNPBJOFGTVCKLBSRAXBCQMGXMEPHUJN");
    msg.flags = 146U;

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
    msg.setTimeStamp(0.7778413768129645);
    msg.setSource(13069U);
    msg.setSourceEntity(151U);
    msg.setDestination(16601U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 214U;
    msg.step_number = 161U;
    msg.step.assign("MCZZQNXQTSOHFZFBFSPFSM");
    msg.flags = 41U;

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
    msg.setTimeStamp(0.7700370200406804);
    msg.setSource(12536U);
    msg.setSourceEntity(35U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(64U);
    msg.state = 69U;
    msg.error.assign("BNDQXYETHHKBHRZZPVWQWOTOVFVIMIOJCZUKUSCPMJGHXRWVYVKXLOOWYNGZYZMUKJLYRBEANCEYUXOWCINPDSAJLAWURDTXFEEEIDVCFYLQSVHSBQHLTDFIMQWXNKAMTPIZUOZFJGLLFHOMXGNFWEAZREXABROFFMCLQJGBSNDPSITAGSPNNGQMACWTBWLQQVPHMUV");

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
    msg.setTimeStamp(0.2793757390387408);
    msg.setSource(20777U);
    msg.setSourceEntity(79U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(23U);
    msg.state = 61U;
    msg.error.assign("HPDIBGNXUBTIVICWTTENQYIAMYXNSMULQSRRVTBHLEKZXMYYPACNYHUOFXTAAUTALJNKDFPDWVGGNDZRBROZCZFAHMJMPWTQGXOZVQSCZBQLGSRULFVVDRJPSCHTJSSOFZVVZBIQBYOZAUWFYDOFGZMAIEUMLALQCYJSCQNKMPWEOVGNHLXFDTWEVP");

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
    msg.setTimeStamp(0.24355323195528245);
    msg.setSource(39876U);
    msg.setSourceEntity(132U);
    msg.setDestination(60210U);
    msg.setDestinationEntity(77U);
    msg.state = 224U;
    msg.error.assign("MWGVAUJXPNCHWMKVYMEFSVKYXNXUENNDMOTZVOVFRVUJFRWDNFWYCBIZOHUCQLODLFGSWOYCIHVZQROTTQRRPADUMNASWIITDRPNFBGKXTHKKOISLSUBZRIOPKGHJQGEKQYFKFYXBDSGMBXGSDCACTWJJHVLLDYMVYCRXAUTEXLMSRZAAGSHJJCBXBIGPJESACUTOQPIFEPNXWQBPLVTIKNPUZDJLB");

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
    msg.setTimeStamp(0.3695942777790979);
    msg.setSource(11853U);
    msg.setSourceEntity(82U);
    msg.setDestination(62670U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.32327572563672924);
    msg.setSource(25779U);
    msg.setSourceEntity(140U);
    msg.setDestination(36922U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.9706746409565208);
    msg.setSource(21444U);
    msg.setSourceEntity(190U);
    msg.setDestination(16647U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.2172772918083209);
    msg.setSource(54580U);
    msg.setSourceEntity(146U);
    msg.setDestination(18160U);
    msg.setDestinationEntity(153U);
    msg.op = 38U;
    msg.speed_min = 0.8818881450044648;
    msg.speed_max = 0.5336874895243207;
    msg.long_accel = 0.07603451672853867;
    msg.alt_max_msl = 0.8358459426957627;
    msg.dive_fraction_max = 0.7260345679825171;
    msg.climb_fraction_max = 0.40963174620639076;
    msg.bank_max = 0.6656176087381553;
    msg.p_max = 0.2478064065326474;
    msg.pitch_min = 0.514928127801687;
    msg.pitch_max = 0.046950250565215734;
    msg.q_max = 0.731044181444031;
    msg.g_min = 0.20463369042090596;
    msg.g_max = 0.30474599449673356;
    msg.g_lat_max = 0.2794205961107453;
    msg.rpm_min = 0.7632411076508834;
    msg.rpm_max = 0.8998977970212545;
    msg.rpm_rate_max = 0.6214218455946224;

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
    msg.setTimeStamp(0.7966004848257501);
    msg.setSource(31119U);
    msg.setSourceEntity(157U);
    msg.setDestination(5647U);
    msg.setDestinationEntity(58U);
    msg.op = 59U;
    msg.speed_min = 0.5205564692813973;
    msg.speed_max = 0.14990481342290296;
    msg.long_accel = 0.8564008528142052;
    msg.alt_max_msl = 0.5069293691882001;
    msg.dive_fraction_max = 0.35342529829018254;
    msg.climb_fraction_max = 0.5293274616641446;
    msg.bank_max = 0.20015495119973647;
    msg.p_max = 0.08317763737154649;
    msg.pitch_min = 0.9709377643320234;
    msg.pitch_max = 0.6040006814182227;
    msg.q_max = 0.5544852233254338;
    msg.g_min = 0.1644429753298;
    msg.g_max = 0.6104291042274471;
    msg.g_lat_max = 0.7772780738313456;
    msg.rpm_min = 0.2765134368364446;
    msg.rpm_max = 0.13325554710887233;
    msg.rpm_rate_max = 0.4668958799796432;

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
    msg.setTimeStamp(0.9795891599233634);
    msg.setSource(26559U);
    msg.setSourceEntity(250U);
    msg.setDestination(37093U);
    msg.setDestinationEntity(251U);
    msg.op = 158U;
    msg.speed_min = 0.1954988437580798;
    msg.speed_max = 0.22164571093378937;
    msg.long_accel = 0.8721951513479892;
    msg.alt_max_msl = 0.22297097320760573;
    msg.dive_fraction_max = 0.048257734169319;
    msg.climb_fraction_max = 0.4147487624976153;
    msg.bank_max = 0.6498599243758634;
    msg.p_max = 0.9914167340552678;
    msg.pitch_min = 0.12461238443290457;
    msg.pitch_max = 0.36737522263479694;
    msg.q_max = 0.009263285408684374;
    msg.g_min = 0.21599935672864634;
    msg.g_max = 0.6694111811778332;
    msg.g_lat_max = 0.6606072974577334;
    msg.rpm_min = 0.62225116637694;
    msg.rpm_max = 0.2597251991959666;
    msg.rpm_rate_max = 0.46064534655420586;

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
    msg.setTimeStamp(0.23630026741414567);
    msg.setSource(65211U);
    msg.setSourceEntity(51U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.31977820654343514);
    msg.setSource(57972U);
    msg.setSourceEntity(229U);
    msg.setDestination(20644U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8086615560974318);
    msg.setSource(1249U);
    msg.setSourceEntity(112U);
    msg.setDestination(47129U);
    msg.setDestinationEntity(74U);
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CEUWNRODMSARDMFRFTYXMMZEFAOPAKSUKUJVKCXMGBEUTKWXTJJGNYKNNAVNEXYJIZETWXRTNJNCSOGDPFCMYPRQHNCWQBQRLGBYIVEZC");
    tmp_msg_0.lat = 0.3012295225183327;
    tmp_msg_0.lon = 0.4176525478570279;
    tmp_msg_0.z = 0.2861388872687778;
    tmp_msg_0.z_units = 128U;
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
    msg.setTimeStamp(0.5800887001566909);
    msg.setSource(62009U);
    msg.setSourceEntity(229U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.25338669855159346;
    msg.lon = 0.3009840761084416;
    msg.height = 0.062084059231263033;
    msg.x = 0.6916740311873817;
    msg.y = 0.0818647963780873;
    msg.z = 0.9384839523566392;
    msg.phi = 0.9256776525372724;
    msg.theta = 0.6645819006626885;
    msg.psi = 0.8699851174917703;
    msg.u = 0.6668175710147949;
    msg.v = 0.6457215659271102;
    msg.w = 0.4175077224753272;
    msg.p = 0.6903325207651431;
    msg.q = 0.005573154644607836;
    msg.r = 0.05368505735409046;
    msg.svx = 0.04945502939023827;
    msg.svy = 0.5301735982409254;
    msg.svz = 0.07061371599070432;

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
    msg.setTimeStamp(0.9542417139088916);
    msg.setSource(20020U);
    msg.setSourceEntity(108U);
    msg.setDestination(33506U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.8319372119052774;
    msg.lon = 0.6562113221059778;
    msg.height = 0.7144152691422903;
    msg.x = 0.487193187696249;
    msg.y = 0.1934704120268993;
    msg.z = 0.9401994616515756;
    msg.phi = 0.25344825464144727;
    msg.theta = 0.7643262042396421;
    msg.psi = 0.5975865616795393;
    msg.u = 0.028808342437743883;
    msg.v = 0.23978138164353124;
    msg.w = 0.32477216908711903;
    msg.p = 0.9944711152732532;
    msg.q = 0.640043248455637;
    msg.r = 0.8030325057738444;
    msg.svx = 0.07752696985128471;
    msg.svy = 0.7981656092938937;
    msg.svz = 0.8051863287008809;

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
    msg.setTimeStamp(0.24138514478273054);
    msg.setSource(34740U);
    msg.setSourceEntity(5U);
    msg.setDestination(5839U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.5280240460179416;
    msg.lon = 0.7557831775077957;
    msg.height = 0.009113594992819718;
    msg.x = 0.9537990612484729;
    msg.y = 0.6430643274665868;
    msg.z = 0.7139550027213819;
    msg.phi = 0.8579734814360849;
    msg.theta = 0.3252075344181997;
    msg.psi = 0.5636732177324939;
    msg.u = 0.14972404348490964;
    msg.v = 0.5912553378934522;
    msg.w = 0.049659228985978965;
    msg.p = 0.9067954116480343;
    msg.q = 0.17815211165457945;
    msg.r = 0.7848325926634919;
    msg.svx = 0.4985837488353071;
    msg.svy = 0.4906876865225227;
    msg.svz = 0.9908578703806775;

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
    msg.setTimeStamp(0.9065461247366409);
    msg.setSource(56011U);
    msg.setSourceEntity(192U);
    msg.setDestination(37324U);
    msg.setDestinationEntity(155U);
    msg.op = 8U;
    msg.entities.assign("OVHTEJYLKULCAMZREGOKXKRQQPBJFWSPSCTPDAVLSIBGLVPBLYTIYRYWFSMNODPMMHITTAWIUNWKRWIYUCIHVOTMHMZNDKHUTMBGNF");

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
    msg.setTimeStamp(0.7143801827912245);
    msg.setSource(64575U);
    msg.setSourceEntity(44U);
    msg.setDestination(50790U);
    msg.setDestinationEntity(52U);
    msg.op = 254U;
    msg.entities.assign("CZQIWPFXEVSCKIQNUWXQXCVYJMFIAQPTTPSGIGQGBYTXVSODTYPGGUXIBLILFWPUAYGTNHYKHHOJMVAMYOUEJFXUOWDLIPERDAZSVYEIJHCFNXOKXQWNWNGBLKUCJLM");

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
    msg.setTimeStamp(0.5402288504734362);
    msg.setSource(14877U);
    msg.setSourceEntity(241U);
    msg.setDestination(10191U);
    msg.setDestinationEntity(153U);
    msg.op = 165U;
    msg.entities.assign("GRSDCPXAGBOUJMDLWFYINETONFEWDSGYVQHTMMSQIHNBLXQYFIMVJHMDNTVLCBKHAYHYXZGOAJDKTMBUNDUPLOWPNOAUEHNPGTRNZMCZVOZCEVPCWFIQQJREVIUCGDKHJJKXIJLLSTWLHZMAPUZSFAKFTQJXKUIKLWDOCRCVNYZKWQD");

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
    msg.setTimeStamp(0.2292538311881679);
    msg.setSource(45608U);
    msg.setSourceEntity(46U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(3U);
    msg.type = 121U;
    msg.speed = 47114U;
    const signed char tmp_msg_0[] = {-93, -127, -96, 69, 14, 72, 52, 116, 87, 1, -51, 2, 100, 1, -40, -90, -58, 55, -36, -78, 69, -18, 114, 10, -3, -72, 71, 63, -12, 70, 82, 62, 73, 68, 1, 113, -71, -98, -112, -84, 67, 18, 68, -122, 54, 50, 100, -50, -92, -32, 2, -3, 90, 81, -84};
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
    msg.setTimeStamp(0.0911048182519747);
    msg.setSource(13390U);
    msg.setSourceEntity(213U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(146U);
    msg.type = 48U;
    msg.speed = 25341U;
    const signed char tmp_msg_0[] = {74, -56, -82, -25, 15, 18, -63, -59, -2, -75, -81, 17, 64, -118, -49, -102, 21, 63, -46, 68, -13, 43, 45, -37, -21, 35, 90, -64, 60, 95, -83, -47, 86, 35, 26, -31, 10, 41, 54, 35, -54, -115, -7, 50, -59, 70, -43, 61, -26, 31, -31, 40, 91, 31, -31, 79, -53, 43, 64, 89, 81, 4, 97, -86, 101, 94, 92, 53, -29, -26, 50, 46, -83, 114, -25, 53, 109, 82};
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
    msg.setTimeStamp(0.946006665619554);
    msg.setSource(31314U);
    msg.setSourceEntity(95U);
    msg.setDestination(49233U);
    msg.setDestinationEntity(116U);
    msg.type = 94U;
    msg.speed = 27167U;
    const signed char tmp_msg_0[] = {-56, 13, 64, 115, -77, -96, -11, -84, -118, -80, 17, -30, -98, -72, 3, -22, 112, 92, 36, -72, -54, -16, -55, 43, -121, 41, -113, 98, 93, 121, 81, -81, -85, -73, -35, 41, -42, -13, -14, 95, 3, 71, -43, 76, 94, -112, -120, 20, -83, 2, 91, -90, -66, -111, -78, -56, 55, 6, 0, 58, 108, -42, 118, 3, 16, 81, -33, 61, 3, -15, 11, 52, 41, 64, 103, 80, -38, 21, 14, 7, -26, 13, 80, 104, -122, 7, -106, -118, -17, 79, 114, -90, -77, 98, 25, -39, -29, -117, -24, -38, -81, 58, -73, -37, -16, -60, -101, -53, -82, -78, -26, 52, -127, -41, -109, 107, -88, -115};
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
    msg.setTimeStamp(0.3556267781994429);
    msg.setSource(42193U);
    msg.setSourceEntity(210U);
    msg.setDestination(629U);
    msg.setDestinationEntity(239U);
    msg.op = 178U;
    msg.tas2acc_pgain = 0.667261904196007;
    msg.bank2p_pgain = 0.08343943134964737;

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
    msg.setTimeStamp(0.32617104688773235);
    msg.setSource(4222U);
    msg.setSourceEntity(242U);
    msg.setDestination(27581U);
    msg.setDestinationEntity(244U);
    msg.op = 136U;
    msg.tas2acc_pgain = 0.7921819092903152;
    msg.bank2p_pgain = 0.8335442835093725;

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
    msg.setTimeStamp(0.5161905921560593);
    msg.setSource(216U);
    msg.setSourceEntity(203U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(29U);
    msg.op = 84U;
    msg.tas2acc_pgain = 0.47067545960102763;
    msg.bank2p_pgain = 0.9337798503049027;

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
    msg.setTimeStamp(0.13636995696461418);
    msg.setSource(24954U);
    msg.setSourceEntity(230U);
    msg.setDestination(20488U);
    msg.setDestinationEntity(86U);
    msg.available = 2793302611U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.4953932266320046);
    msg.setSource(38629U);
    msg.setSourceEntity(48U);
    msg.setDestination(14307U);
    msg.setDestinationEntity(202U);
    msg.available = 661318043U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.40711156754153766);
    msg.setSource(60442U);
    msg.setSourceEntity(178U);
    msg.setDestination(52432U);
    msg.setDestinationEntity(133U);
    msg.available = 2021723199U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.04155214481266423);
    msg.setSource(53684U);
    msg.setSourceEntity(190U);
    msg.setDestination(20387U);
    msg.setDestinationEntity(223U);
    msg.op = 109U;
    msg.snapshot.assign("DYCILAKABHJAROGVDFDALRMZESNJREINUM");
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 29824U;
    tmp_msg_0.destination.assign("QROCFBKSJBARBKVZYQMNLMXDDCJVTCSDNNMAZQNGPUTWAKWOSPNEDQGYOUMMEQJSMAHKDZPKWVIBXBGUDGIUSVLTJVPMLQSSPSZYTLHWEOICYQHMWOBUXTJYQBJFPRCXWPATGIEHRELLGRWGXHHIQOJUKRYTRILZVSXNZLUVRAUTWHDNKHMZVQOVZVFDNTGHDWPEYPJ");
    tmp_msg_0.timeout = 0.28060845577980575;
    IMC::RemoteActionsRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 234U;
    tmp_tmp_msg_0_0.actions.assign("YWOTTJIJQVZRDRLVSFXQSBVTXEXYQIKFUERRICFCVLJZXGSZIKHYKQTKHRGKDXQNUZWHGMPEQVENCOGFICMORUAHLAENWBMSVNZHDAVPSHZJDNGAEFPIUWHBWMOVUIJKUCSEDLMXZKUODJCEYLDAFLLAEKTQCBQULWYJWHZMNSSIJIFJYLUOGBWOGUHAGMVWEKGTHKBZOTBMNDPXBFQPJYPAYBCXYTPAZLWPXMPIGAR");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.44172168510070287);
    msg.setSource(8481U);
    msg.setSourceEntity(45U);
    msg.setDestination(19616U);
    msg.setDestinationEntity(187U);
    msg.op = 107U;
    msg.snapshot.assign("QWNLPROFIDYUABHMQKPKNSPGKYYDLGHADUTRVIGKBQKZSGCWMHZFJFNFLPXCXOMXCIJUCIKCZVUKJBPWVNVBXQOIATGUBPJMZZRQDNJKSDWYYWQTOLFXOT");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("YYKEQTEGDACHGWRKSTJRFGZNNRNMDDCCQAGLYESFUZUBIAYKAUWMWAOJAXBIIJVRVSBXYCGZVPNRHIWFFQPEWISTHAYRIZBLUTV");
    tmp_msg_0.type = 68U;
    tmp_msg_0.properties = 43U;
    tmp_msg_0.durations.assign("WKWBOMNAZSRTPJGDRPFWNQCHAHLMCELPWPZHZESJQOTELITNQGIXVWUIYQQNEDMATSRVBTNCMAVIVSYYMLQJAFATYOGOFGRZVUBROW");
    tmp_msg_0.distances.assign("NMEHMCJVBFOZCXENJCRVBXIYZIRFGDGZWBTREXPGALASRQOORKIYYPXJQMQJWSQLXHIGLTFHYHQHNXVUCKJBKGZOWSYPJMWJKMRDXFMCDPBQXWTXSYTIQNPJKFOUNFHCULCBYBVEHLDDOHDNJLKWTUPZ");
    tmp_msg_0.actions.assign("AKOKRABLNCEZDPHXDJUNOXJUHYXPZUUAREYHHVMBTSEWLIRMTWTMIANDOKVGNQMVDPMTGOVQCTPYZPSGVITWFIZKJEKMFUBZSTEYFLLNOKHHBPBGHQUXWLIYSVBIHYKWGSBABJMEXXSYOGBNJSONVZPGKGDPFNZDHABMQSUWERIFCEQRCDKOOTNLFXUDUUIACWGJNJYJSLQPFWCXTKITHMJODLQJXLRAZQVAGRCZEWCAVF");
    tmp_msg_0.fuel.assign("ZJUIYRNIUCDEOPPGRBKPTFNOANIICFPG");
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
    msg.setTimeStamp(0.6766857944381274);
    msg.setSource(3510U);
    msg.setSourceEntity(203U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(31U);
    msg.op = 86U;
    msg.snapshot.assign("KBYDTUXCWSGJPOWMOAAKSZJEDCUVFHIXZEBGHMZMGVWTMIXQLYEFZAARQUOBOPTYGNTRTAEIEQGZQHNDKTEKAYLSQRIFQPFAMRJRXVDXSBHWELDHHXOECRDLFBFASULCLPS");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("UBAWYHOVIVHACXJZCEFIMRRSESULMRMHMNXVKGOPDWOLAAMAKBOSEPQSWWWNDONAYIFLXGKSYGELFUMQCVZENRLZHSABFPNDIECEGJFTTHADHDJTTPKDJXDXUIEHLTLSTJXVPGIBOWQVTTFAMNQSRVIJWHCGZYXBNZSZLQJYJZGCYTVQKWPQUZNMP");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("JSLEQRZYVVZWHWGWCOCMDXYLVGBVGKIJBHCQCKCXMXBTMEOTOQNMIROPPKYKELQSSFANAULZJMFTIHRLQMCBNATARBMTTPNBDUSGGDKJXGBTSZCQ");
    tmp_tmp_msg_0_0.feature_type = 39U;
    tmp_tmp_msg_0_0.rgb_red = 156U;
    tmp_tmp_msg_0_0.rgb_green = 6U;
    tmp_tmp_msg_0_0.rgb_blue = 51U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.17710989462516957;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8467758309608374;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.049662472732201035;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9287383728822377);
    msg.setSource(4727U);
    msg.setSourceEntity(176U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(231U);
    msg.op = 44U;
    msg.name.assign("EDXQUKMDDDQLJRWAMEKQKXNZGTJZEIYPKDUTHOZVWVVKEHARCUYCAKXRQJRUFNYQNMZFRGFFHQJHXBJYXIBLIZATLLBMPUPHDYJTOVPENGTIKSJSASHFYCERGNQWKSOEFVPGBOLEVOLIXNDUSS");

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
    msg.setTimeStamp(0.5533562457284449);
    msg.setSource(32024U);
    msg.setSourceEntity(133U);
    msg.setDestination(38425U);
    msg.setDestinationEntity(91U);
    msg.op = 121U;
    msg.name.assign("ENBDGOIUADMYUNKVSBAZZNUHUVFZGLOILFUPLYRFCXEOCQILHITJACSWSUHBTNTRCADSRTBVNPRNELNSCGHZURGYTKZFSDTPMAMWXGKWTGIJHXWYPHCHYNVJTQDJIPKRWANKWBAVLGXCRVEEBMBMMTLFJFFEDLYZQQJOAEDBJCIYRQHQMXMFGHAXWVPKFGKQOJK");

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
    msg.setTimeStamp(0.27879112370501147);
    msg.setSource(29370U);
    msg.setSourceEntity(196U);
    msg.setDestination(5098U);
    msg.setDestinationEntity(143U);
    msg.op = 104U;
    msg.name.assign("FZAEZQZJVOHJABAEGTHQZJYJIHNQSGWHCANFXVTXMIHSNCSOVOKTLYMYVWPHPSKLWBMGNTELFBJ");

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
    msg.setTimeStamp(0.6025991049113085);
    msg.setSource(10895U);
    msg.setSourceEntity(127U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(237U);
    msg.type = 67U;
    msg.htime = 0.7009929042491395;
    msg.context.assign("QAJWFIHMRZKTICVMFNITANWOMBNJFEWDVNMZISHBORGSDUVECHORHKBXEQCGRPPDCFQTMVGHCSFJGIYDJTABBKXBJYLYWUYLGWKZAVGXHFFXCYYPQLNMHMPQNVOUBWEHLZSTPIUYKSLCPLSIRSAOUYPXTXWASPEKZXWLPTAEGVRYHUEAZOJJNXQEXVJNDZVDIZUWZQDYZVSNKCBRWORQJUEIUST");
    msg.text.assign("WFXXNJFEPTFUKHJHRBBQIOLJMCAZUPRFWOXBAEGIYYNQFPGJMDNCJGLKBVUNCYYTOBVTACDPRMAKCWDKZBLHVVWYGQCDSLZYVPOQCZQDVSXWGYSWOMNYJVBCHBASXBPLLJNIDIESKNVGMSTKRWEIHSQVOWHXJY");

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
    msg.setTimeStamp(0.6376056790235146);
    msg.setSource(51524U);
    msg.setSourceEntity(126U);
    msg.setDestination(51059U);
    msg.setDestinationEntity(108U);
    msg.type = 124U;
    msg.htime = 0.7311959137204885;
    msg.context.assign("ZJGDUBALXBLQPMFOYQSMQSEDCTQAZNSACTNLUMQVXQFVFPWDMIDDEBEZKDNDVUZXJMPWUDGRJBWHHOVYYGLVWCMZCJARBBVURYHEUSZJCNFEYTAOGKWGBLQXZJTHKXXHONFHQOOEGERRKITSGJWJFIFTSWNYCXPIXZPYVMJEPUKQDORIUKAAKNHEHSRRYIZTCTUODQLBOOMFHVZMAYEKVARAFCIBIYRSPHNPWTFNSI");
    msg.text.assign("AUDBGNVZEMJQDXWYHKSMGBTVYTMOQUNZPNPMUUZCSALGTSDHFGLKSRKHNMOFJEBFAWRTFYHVDPIKZXGABLEMNKSDXBIPWADFS");

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
    msg.setTimeStamp(0.9637787469417034);
    msg.setSource(26589U);
    msg.setSourceEntity(57U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(155U);
    msg.type = 16U;
    msg.htime = 0.3205851650767825;
    msg.context.assign("ISEMAMXXOCVRVKYIXMDONDHPTHSIWWPCQDTQQPYWZOLWVQYNAKNYLTPTQZFKXNFFJPRPUALCRLBYFPBGRGJTKXATTVNTKMQWOGZYOYGZNLRHEWSESFCGUJPZMDFKIRAHRCBXOSSCLLCIMJOGUEYGBQODYEMUMEKUOGB");
    msg.text.assign("DMZJJSOSZXREQXHNSFHRXJEKTDACXRWKHAAYSODNGPISNLXVWLAVGYEKQWTVRTCOHWVEUPOEZFMXQDQNRPWFGWBNNUYTUFFHYOIXCMIXDECUBCFYHDCSQPVPMEERYYPJTNCVKDMKLGGOIFDHFWLHKMTBLSJGZRDGKS");

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
    msg.setTimeStamp(0.3221864802733798);
    msg.setSource(12513U);
    msg.setSourceEntity(202U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(171U);
    msg.command = 94U;
    msg.htime = 0.8268311103121433;

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
    msg.setTimeStamp(0.4566977145494526);
    msg.setSource(35344U);
    msg.setSourceEntity(234U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(21U);
    msg.command = 117U;
    msg.htime = 0.32453995781630274;

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
    msg.setTimeStamp(0.9469101194687697);
    msg.setSource(57471U);
    msg.setSourceEntity(238U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(251U);
    msg.command = 44U;
    msg.htime = 0.678726418332117;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.htime = 0.491429649443772;
    tmp_msg_0.context.assign("VFIRWZALWOKVSIZBOYKLNJXNPKLBHSQTRYYQWGRPGYMDKCRWXUERNJFFOZZVTBSVTMDJLJRIZUDOMAWOFDGGSYZXSHWYDNBEKLMNNDOZIOUTLYABPSAQGBCKFDKPFNTUQQEYUOUVKFJUDEEXLZRPHPSPYFLBXSJMCWXARHLRAVHDMIGPOEHSBITITXXTYTCUNEXWSVVOUQGBBQMQPJZIIQGCWKQMFCZXMEFICKWTEAEMHGAHRNULVPC");
    tmp_msg_0.text.assign("TQPJOFVKFMJLAGRYETFAKUNBIYHZWSXRSNEMSLZMHJQCEEZLCWXYMMKPIYJXDPCHDZTGWWIGWOLGASWRHAQQKDHBDDPGIKTRHVFVEWOESYUMXMAJHZLGRXBHNBDTUSIOKPJNXYNOEVZXMUFRTBEVOVSMHWIANDBCYRTDQXLPGAWZZJASRJCVRKOLBFCUOGKVYXUUTB");
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
    msg.setTimeStamp(0.8378216339420786);
    msg.setSource(38480U);
    msg.setSourceEntity(124U);
    msg.setDestination(35563U);
    msg.setDestinationEntity(86U);
    msg.op = 50U;
    msg.file.assign("KUTEEHSIUXGXLIKZKMBSJRQLVIZBJSJNYKFAIXMXTLFTBUEFNNWNOWZIELCSCALQNFRXQHQUTBWOYMFWFNCDRCHDRURZUMVZZVDOOIBOQCLIPSRENLHZPPGGTOQSSPFAHQG");

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
    msg.setTimeStamp(0.7286815742646444);
    msg.setSource(51082U);
    msg.setSourceEntity(178U);
    msg.setDestination(36724U);
    msg.setDestinationEntity(52U);
    msg.op = 205U;
    msg.file.assign("VXGMJGCGJVAKNZUPWXQWSQPZBEKSLJOJEDZALNJPPMBIIRZJRUVUOBCH");

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
    msg.setTimeStamp(0.7351705567046857);
    msg.setSource(36034U);
    msg.setSourceEntity(105U);
    msg.setDestination(52330U);
    msg.setDestinationEntity(200U);
    msg.op = 75U;
    msg.file.assign("ADHBIGRLMUQGWRRJADZVUYCCCZEYSIEPBNFOIYFVHQOXWQSXBARWQIHGIHKMAJKWATXWIKFRPDTPLUJNZQTFLXKRJJQADCDTLOYBPGRHOSIPJJDHTXDHF");

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
    msg.setTimeStamp(0.7879139735497869);
    msg.setSource(61919U);
    msg.setSourceEntity(71U);
    msg.setDestination(46506U);
    msg.setDestinationEntity(161U);
    msg.op = 62U;
    msg.clock = 0.55185467383647;
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
    msg.setTimeStamp(0.7327336796682176);
    msg.setSource(32897U);
    msg.setSourceEntity(155U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(6U);
    msg.op = 175U;
    msg.clock = 0.7388059979660525;
    msg.tz = 101;

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
    msg.setTimeStamp(0.46176096788743404);
    msg.setSource(12816U);
    msg.setSourceEntity(190U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(52U);
    msg.op = 11U;
    msg.clock = 0.3386465803543154;
    msg.tz = -56;

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
    msg.setTimeStamp(0.6139301677276999);
    msg.setSource(65052U);
    msg.setSourceEntity(164U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(215U);
    msg.conductivity = 0.6700323747810193;
    msg.temperature = 0.1888600732290726;
    msg.depth = 0.6470048242967844;

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
    msg.setTimeStamp(0.29947280937366405);
    msg.setSource(13644U);
    msg.setSourceEntity(216U);
    msg.setDestination(21143U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.5363393716131754;
    msg.temperature = 0.0658206948014145;
    msg.depth = 0.058386895100567604;

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
    msg.setTimeStamp(0.14406999838727852);
    msg.setSource(48629U);
    msg.setSourceEntity(140U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(16U);
    msg.conductivity = 0.08393846233374114;
    msg.temperature = 0.4967079243666519;
    msg.depth = 0.2933942883256584;

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
    msg.setTimeStamp(0.070107612575525);
    msg.setSource(42708U);
    msg.setSourceEntity(42U);
    msg.setDestination(26286U);
    msg.setDestinationEntity(17U);
    msg.altitude = 0.781389558092293;
    msg.roll = 4491U;
    msg.pitch = 47127U;
    msg.yaw = 58469U;
    msg.speed = 27312;

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
    msg.setTimeStamp(0.5785658249431664);
    msg.setSource(51798U);
    msg.setSourceEntity(55U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.9562027191375723;
    msg.roll = 63173U;
    msg.pitch = 7298U;
    msg.yaw = 34245U;
    msg.speed = 25933;

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
    msg.setTimeStamp(0.7287033691636814);
    msg.setSource(32937U);
    msg.setSourceEntity(249U);
    msg.setDestination(7735U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.866739966902891;
    msg.roll = 53312U;
    msg.pitch = 27961U;
    msg.yaw = 38933U;
    msg.speed = 3096;

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
    msg.setTimeStamp(0.21726104686003156);
    msg.setSource(41175U);
    msg.setSourceEntity(219U);
    msg.setDestination(17772U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.6542758155341766;
    msg.width = 0.6297571091794653;
    msg.length = 0.7264860351601181;
    msg.bearing = 0.20863832548548278;
    msg.pxl = 20849;
    msg.encoding = 252U;
    const signed char tmp_msg_0[] = {-78, 19, -94, 33, 88, -30, 57, 23, 74, -115, 43, -27, -65, -19, 117, 90, -112, 106, -36, 28, 98, -68, -27, -101, -112, 47, 32, 50, 40, 92, -87, 6, -33, 109, -51, 81, 118, 72, -59, 49, 9, 79, 109, -72, 26, 18, -59, 74, -84, -35, 28, -25, -18, 32, 36, -76, 48, -64, -54, -53, -28, -2, 11, -75, 6, -67, 23, 123, -125, -127, 118, -73, -65, -109, -58, 64, 43, -9, 120, 3, 57, 47, -46, -48, 119, -49, 83, -13, 39, 109, 85, 122, 75, -5, -85, -24, 35, -91, -69, -126};
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
    msg.setTimeStamp(0.777192907936553);
    msg.setSource(3967U);
    msg.setSourceEntity(202U);
    msg.setDestination(34170U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.8748239060793107;
    msg.width = 0.7789871319614482;
    msg.length = 0.9974117774913762;
    msg.bearing = 0.9441172779227568;
    msg.pxl = -28937;
    msg.encoding = 165U;
    const signed char tmp_msg_0[] = {-80, 90, -11, -68, -103, -30, 91, -52, 98, 102, -44, 117, 72, -36, 108, 2, 40, -37, -52, 37, 71, 92, -38, -92, -127, 107, -26, -8, -90, -89, -107, 124, -25, 90, 110, -80, 47, -87, -45, 8, 1, -62, 48, 46, -19, 32, 91, -1, -41, 74, 53, 80, 20, -100};
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
    msg.setTimeStamp(0.3219458273418935);
    msg.setSource(13036U);
    msg.setSourceEntity(116U);
    msg.setDestination(64345U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.3522059257806497;
    msg.width = 0.09084162466255608;
    msg.length = 0.9867991492679411;
    msg.bearing = 0.878715965335189;
    msg.pxl = -9580;
    msg.encoding = 52U;
    const signed char tmp_msg_0[] = {-40, -19, -92, 14, -120, -81, -84, 71, 99, -90, -76, -32, 89, 117, 122, 103, -70, 43, -112, 41, 108, 91, -122, -105, -90, 73, 66, -7, 47, 123, 126, 51, -31, 41, 79, -55, 106, 38, 39, -84, 58, 119, -22, 89, -21, 92, -114, -118, -22, 33, -37, -4, -54, -122, 110, 118, 63, 44, 52, 3, -14, -123, -19, 19, -82, -1, 26, -71, -92, 120, 98, 87, 22, -71, 58, -29, -93, -124, 116, -123, 95, -111, 60, 73, -29, -108, -96, -98, 5, 100, -65, -64, 110, 52, -124, 46, 11, -52, -66, 32, 120, -88, 8, 70, 63, -84, -79, -14, 75, -50, 69, 45, 90, -98, -10, -38, -90, -113, -5, 92, 5, -101, 16, -126, -68, 122, 18, 85, -121, -86, 114, -61, 47, 96, 21, -123, -64, -92, 89, -68, 100, -107, 9, -80, 79, -27, -44, 39, -13, -33, 68, 126, -19, 125, -84, -50, 87, 98, -95, -22, -1, -127, -35, -84, -62, -127, 74, -2, 44, -21, -52, 65, -87, 77, 18, 2, -95, 12, 105, -44, -14, 68, 28, -103, -19, -69, 121, 12, -44, -1, 119, 105, 79, -49, -58, 62, 8, -128, 93, -68, 90, -109, 14, 120, -81, 86, -6, -27, -35, -49, 30, -22, 27, -65, -41, -105, -122, 89, 67, -78, 125, -28, -69, 56, -83, -78, -76, 20, 119, 44, 68, 104, 67, 4, -53, -69, -60, 114, 47, 74};
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
    msg.setTimeStamp(0.18702082250468655);
    msg.setSource(23277U);
    msg.setSourceEntity(69U);
    msg.setDestination(11754U);
    msg.setDestinationEntity(108U);
    msg.text.assign("FZHQDTYJFYBSKPGEHLAVEBIDWCQXVEXRFUHDOUUUGJAZLZFVCLAVOKVBHSWOQIKNUNMQWIDLTLCONIGOPFTINHVTWTBSZREGZBTJOBSMMAECZWE");
    msg.type = 219U;

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
    msg.setTimeStamp(0.2869477360599848);
    msg.setSource(50443U);
    msg.setSourceEntity(147U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(208U);
    msg.text.assign("YFEPAQHDECLTAKIXJHYGOSFZPVQFMBGRHCSXADPUPNIFLKJXEQUFIMZOCDNSRWUYZCSBBERNMDEGQEQQGSRUNGRFBYSTRRJOHOMYOSTIWQAIQRPJTFIFWVYIMDCLZSVBPGYBICYLPWNWVHVFKNVIQHDUWDBEKMKAVOYGCPHXCLZWEOKZOKPJTLUNAKVNLPBUWGJLXTTTGUTAVAHOSMJZDAKGSZMEZJCDHXXVUJHNCL");
    msg.type = 192U;

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
    msg.setTimeStamp(0.5120611228100435);
    msg.setSource(44510U);
    msg.setSourceEntity(4U);
    msg.setDestination(51729U);
    msg.setDestinationEntity(51U);
    msg.text.assign("XQBRQVUJTNCXYOYJDMELAXJTYCWKKEXQUGJSKWDNAJLGGXFDKNPEYWVIKJRQYUOP");
    msg.type = 37U;

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
    msg.setTimeStamp(0.9496532516098839);
    msg.setSource(756U);
    msg.setSourceEntity(104U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(29U);
    msg.parameter = 15U;
    msg.numsamples = 59U;
    msg.lat = 0.7049660134415127;
    msg.lon = 0.5097014683551049;

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
    msg.setTimeStamp(0.4261075139163032);
    msg.setSource(32470U);
    msg.setSourceEntity(164U);
    msg.setDestination(2802U);
    msg.setDestinationEntity(65U);
    msg.parameter = 61U;
    msg.numsamples = 102U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 56862U;
    tmp_msg_0.avg = 0.006748719738758457;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.965777482839623;
    msg.lon = 0.20982514286692278;

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
    msg.setTimeStamp(0.32618075346138264);
    msg.setSource(45040U);
    msg.setSourceEntity(58U);
    msg.setDestination(20849U);
    msg.setDestinationEntity(210U);
    msg.parameter = 193U;
    msg.numsamples = 53U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 61440U;
    tmp_msg_0.avg = 0.9026031475856164;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.003426563580170683;
    msg.lon = 0.8112649094263255;

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
    msg.setTimeStamp(0.5218522526775213);
    msg.setSource(11242U);
    msg.setSourceEntity(167U);
    msg.setDestination(8436U);
    msg.setDestinationEntity(47U);
    msg.depth = 436U;
    msg.avg = 0.8668425399399636;

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
    msg.setTimeStamp(0.6937295234031685);
    msg.setSource(40360U);
    msg.setSourceEntity(16U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(241U);
    msg.depth = 9258U;
    msg.avg = 0.023573917807487188;

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
    msg.setTimeStamp(0.18685317758977626);
    msg.setSource(42206U);
    msg.setSourceEntity(214U);
    msg.setDestination(48663U);
    msg.setDestinationEntity(183U);
    msg.depth = 19389U;
    msg.avg = 0.178455227385937;

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
    msg.setTimeStamp(0.6174753564106025);
    msg.setSource(5851U);
    msg.setSourceEntity(136U);
    msg.setDestination(37575U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.04351652437690867);
    msg.setSource(54509U);
    msg.setSourceEntity(161U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.43467624603772625);
    msg.setSource(57186U);
    msg.setSourceEntity(228U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.8431386079579416);
    msg.setSource(57099U);
    msg.setSourceEntity(226U);
    msg.setDestination(13337U);
    msg.setDestinationEntity(221U);
    msg.sys_name.assign("QDUUMCFUFFKTGZWVGNRVIUWFPXVTFAOMVQJIHYLDCCCYLYCOMLGAMPSUBZGBSUNFDEBIYNRHRZONPUEQGMGKESRBO");
    msg.sys_type = 171U;
    msg.owner = 37619U;
    msg.lat = 0.5160085005473581;
    msg.lon = 0.38818883863272724;
    msg.height = 0.15022474976563616;
    msg.services.assign("BJFEHLWZNUKXAGIOWUSQGTLXGAPYHQUFEFLBVXIFJDZRYQTOOPHJWNEGBRFQINNBYJWPNTJKHPCQSRFYRDLEQCAWOCCELSZZRCBJIAMHOGCNY");

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
    msg.setTimeStamp(0.049351179208442564);
    msg.setSource(8924U);
    msg.setSourceEntity(163U);
    msg.setDestination(16802U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("RHNKGVYPVNMIOFZJWQOQLSSVYEZOKICUGEZRVQKWVZUNDYDBTYDJTALCNZDCXGIEVJAMSLBHTQXOKROCSABCALXNHWZFIHFRDFZMJBBUMXOLKAMAAWHYKURILDJMMPPOTSDMRKGBAPTZBYNEFYUFIGIIXQUEGAQOKWIDQQGPEJXPXKWXSSRKPYVEEXFWCPLTCNJHGRUWFGZQYORNEIXSHJEMSUHYNMPJTVUFVSWBCPFHWHB");
    msg.sys_type = 0U;
    msg.owner = 42495U;
    msg.lat = 0.423019317254443;
    msg.lon = 0.9530924857220122;
    msg.height = 0.6113000210008344;
    msg.services.assign("FLOFWDPLVGPQXYCUWIKIXOZQHSXCVDNKDRUNKMGTKNLQQOQQWVTPFTAOTDOICVZJHEKJPLRAWGGWIJPDFJOBSJHTJMMSCEXCMLKZGASACHQYBDUOUQEFBZXYIMZBEP");

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
    msg.setTimeStamp(0.42089078622565224);
    msg.setSource(35058U);
    msg.setSourceEntity(246U);
    msg.setDestination(40967U);
    msg.setDestinationEntity(103U);
    msg.sys_name.assign("DNUXKDTUXBQAAHECWQYBFNMNZFAPIPDTKCLCSCVYTAJXAOHUXMMHVGOMPNRZPJJKZDNSRVBLLEUPTAFCTSFEWFBXPNUBLQBJNKWWADGPVZNZDZSIHYFIITYFSIJWJYRQMGEOKEIRZPUYLXYWAJZLXDUBMDXSRSOKJRETWCSHUMTGGWVGFWTHOKIQJEQYEMDOJOCQGUQXKYGOBRQIPIHOG");
    msg.sys_type = 70U;
    msg.owner = 17843U;
    msg.lat = 0.6628561680262613;
    msg.lon = 0.07642121057873696;
    msg.height = 0.13353541178327732;
    msg.services.assign("TQLYYGBXDUASLPZLPICDEDYHRSRWTJKVUOFDZCPWWQVUAWJHZZNSKDQKPJKNIWVOBFQPYBALVVLGQIIFEIFIJFYMBXRUHZGOXEAJFWDXRFZIXNW");

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
    msg.setTimeStamp(0.8921832219083553);
    msg.setSource(22644U);
    msg.setSourceEntity(169U);
    msg.setDestination(12601U);
    msg.setDestinationEntity(122U);
    msg.service.assign("ZAEQDTDLUSWWHVBUPTCQHIKEFGVQASXXUCXSYHOAXLHSMGUBHQNYTGRGNQWULOBMJFYGUJPOKZYHVJLIMYROFZKZEWUYBDTOEVVNNKPAGTOBJIMLRMSCTXFJKZIBZNFEAHSCYBPKXPIPAMHODKLPGVFUTIVHBEZVWGKQXHMPYSWJLUCMXQ");
    msg.service_type = 121U;

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
    msg.setTimeStamp(0.28933749113504925);
    msg.setSource(50193U);
    msg.setSourceEntity(229U);
    msg.setDestination(63291U);
    msg.setDestinationEntity(90U);
    msg.service.assign("AJXDEVITTHYINAKUTYHXOIUITZBUVCVUBFPFXOMHDOPPBCVKUAKAITZVSWLHQXJJBRYNYNLARHOJESHSQXFEJIPUABJ");
    msg.service_type = 95U;

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
    msg.setTimeStamp(0.8597933138145692);
    msg.setSource(42123U);
    msg.setSourceEntity(215U);
    msg.setDestination(15339U);
    msg.setDestinationEntity(18U);
    msg.service.assign("OHILDNNODPBTNSNXZMAPLRRZAYBWUTANKYYQKPELVURIQYZZCIVRDKQFQRWIGLULBMAROTKJXEFCIYVKTM");
    msg.service_type = 41U;

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
    msg.setTimeStamp(0.7172319599834251);
    msg.setSource(19495U);
    msg.setSourceEntity(3U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(4U);
    msg.value = 0.03213808921802741;

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
    msg.setTimeStamp(0.6776378572996584);
    msg.setSource(15259U);
    msg.setSourceEntity(151U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5373405082324704;

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
    msg.setTimeStamp(0.9547776669955782);
    msg.setSource(15428U);
    msg.setSourceEntity(239U);
    msg.setDestination(57182U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6637235362106911;

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
    msg.setTimeStamp(0.2562780526213392);
    msg.setSource(40504U);
    msg.setSourceEntity(68U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(207U);
    msg.value = 0.3350538493738946;

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
    msg.setTimeStamp(0.627387717779733);
    msg.setSource(50403U);
    msg.setSourceEntity(59U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(16U);
    msg.value = 0.828690201055987;

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
    msg.setTimeStamp(0.09821126237818445);
    msg.setSource(19768U);
    msg.setSourceEntity(234U);
    msg.setDestination(7272U);
    msg.setDestinationEntity(3U);
    msg.value = 0.40816657783205557;

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
    msg.setTimeStamp(0.009128869718900479);
    msg.setSource(58043U);
    msg.setSourceEntity(180U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(92U);
    msg.value = 0.19590968685078136;

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
    msg.setTimeStamp(0.8689316775713782);
    msg.setSource(56896U);
    msg.setSourceEntity(57U);
    msg.setDestination(3440U);
    msg.setDestinationEntity(176U);
    msg.value = 0.10489386216058405;

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
    msg.setTimeStamp(0.541963708624763);
    msg.setSource(55128U);
    msg.setSourceEntity(180U);
    msg.setDestination(7081U);
    msg.setDestinationEntity(181U);
    msg.value = 0.20551318064836976;

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
    msg.setTimeStamp(0.2893804125051451);
    msg.setSource(61956U);
    msg.setSourceEntity(159U);
    msg.setDestination(14175U);
    msg.setDestinationEntity(6U);
    msg.number.assign("HWWJYSFSBXLJWKALMXZYWNQOXMSOACXWVCOOCAZ");
    msg.timeout = 11642U;
    msg.contents.assign("WQRWYUCGXRWHKCJVOH");

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
    msg.setTimeStamp(0.488186462379989);
    msg.setSource(3891U);
    msg.setSourceEntity(11U);
    msg.setDestination(38740U);
    msg.setDestinationEntity(13U);
    msg.number.assign("QMCLGESRYUJRIZDAMHTHTJXBOIASAWSMNHDGQKWDRKABL");
    msg.timeout = 5357U;
    msg.contents.assign("OUQEHZHAEUKZCDNFKPDVQAGGVQKIDRMQUEWVIVPRXRNQWGTTRAWGVRHOGVBFXCBKWTMNIGWTBPRZJQTAACLMDVRVGHSYIHKYCPXQWXUUTSHLWTLUITNLCOLNPJNBSFCRNAXYPGULSUWEJEWODPOUUDWZFSQBZMFXJKHHEYNYJQMNAFEDSLLCJMZIEAVJSRAYJIDFZDLZFAMGXJZKYEIKFEBBXIVSXPBZTNKPDYHMJYKG");

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
    msg.setTimeStamp(0.27955591241907185);
    msg.setSource(38845U);
    msg.setSourceEntity(55U);
    msg.setDestination(60917U);
    msg.setDestinationEntity(10U);
    msg.number.assign("ILMIRILNDWETANQBQGHGJRTF");
    msg.timeout = 50108U;
    msg.contents.assign("AJGQQXSKGEUHWMUUXZBCUSRSRYFZWVBFNWFLG");

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
    msg.setTimeStamp(0.27222068969790636);
    msg.setSource(44440U);
    msg.setSourceEntity(89U);
    msg.setDestination(51392U);
    msg.setDestinationEntity(30U);
    msg.seq = 1540273605U;
    msg.destination.assign("HWEAPRSTHXDMQRSOFTMBTCGYSUAVMZGEQYEPSCWMLSFSEKCZNPILVOOXBKQWUZOMYYIQUCXNJUFNIGQKZAGZFFLSDUEWLCVPCOT");
    msg.timeout = 3034U;
    const signed char tmp_msg_0[] = {-70, 73, 92, 112, -50, -106, 69, -26, -125, -87, -32, 21, -50, 47, 120, -88, -27, -74, 102, -73, 44, 120, 15, 108, 106, -37, -47, -25, 116, -35, 67, -127, -59, 74, -51, 0, -3, 45, 39, 27, 70, -82, 96, -127, -84, 105, 97, -88, -55, 26, 39, -45, 99, 80, -31, -44, -29, -82, 29, 97, 23, -1, -107, -100, 96, -9, -118, -81, -14, -56, 12, -38, 3, -57, 73, -94, -17, -48, -3, -76, -9, 102, -60, -97, 103, 26, 10, -71, -73, -117, -73, 31, -9, -99, 104, -31, 35, 68, 14, -113, -93, 121, -55, 45, -57, 1, 60, 53, -38, -25, -61, -117, -9, 115, -77, 119, -66, 47, -25, -28, -11, 108, 102, -17, -61, 122, -127, -11, -122, 57, 116, -85, -24, 115, 126, 86, -44, 11, 11, 73, -29, 116, -20, 87, 108, -2, -53, -106, 9, -66, 1, 5, -43, 13, 92, 55, -78, -85, -11, -6, 14, -9, 72, 98, -29, 32, 63, 72, 11, 61, -87, -97, -99, 20, 28, 53, 62, -97, -117, -85, 89, 34, 105, 87, 22, -115};
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
    msg.setTimeStamp(0.949675579491968);
    msg.setSource(40023U);
    msg.setSourceEntity(6U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(245U);
    msg.seq = 950789679U;
    msg.destination.assign("YJCPVOTQPNHXSJVLUGIOVJPGWEDAAQSYGHBFROAYEKKWCRKJMTVPTIYSABUUUPSBXSRTXRWPEWAQACEQWTYROZMDLCJLNBPQYOPTCXUAMFDMEZOKVWTFFYHHLFNBBIFHXDMMWEHGAZLVIQABGLLDJXDRKRDNCKNIFQBCRSWUHILIGCVVTTESVPGTVJQUZFY");
    msg.timeout = 27136U;
    const signed char tmp_msg_0[] = {-74, 79, -19, -13, -75, -21, -22, -107, 86, -69, -40, -25, -35, -85};
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
    msg.setTimeStamp(0.268836444780976);
    msg.setSource(24255U);
    msg.setSourceEntity(154U);
    msg.setDestination(48667U);
    msg.setDestinationEntity(106U);
    msg.seq = 1313976930U;
    msg.destination.assign("UWBWWQQPXDZZJBQVWLLNBCVQDVFDEUMDFJNAGXHOJWEGVGJFQ");
    msg.timeout = 37237U;
    const signed char tmp_msg_0[] = {-84, -24, 94, 26, 28, 113, 106, -74, -100, -88, -42, 61, -75, 22, 119, 103, -15, -125, -109, -44, 44, -17, -60, -12, -92, 20, -60, 118, -7, -13, 55, 43, 89, 6, -81, -3, 68, -74, -122, 118, 3, -113, -4, -69, -69, -68, 81, 8, 18, -32, -7, 42, 59, -123, 97, -25, -56, 80, -53, 37, -94, -75, -35, 97, -125, 23, -72, -123, -76, 50, -64, -26, -106, -99, -23, -21, 105, -117, 106, 3, 82, 43, 78, -4, -121, 113, 34, -79, -26, 103, -3, -74, -120, -119, -25, 56, -34, 35, 28, 105, -61, 5, -112, -55, 110, -72, 115, -21, 12, 12, 58, -47, 49, -94, -63, 34, 67, -113, -1, 118, 120, -33, -114, 103, -8, 47, 110, 61, 4, 12, 101, -120, 22, 77, 101, 59, -19, 29, -39, -48, -13, 83, -4, 10, -71, -35, 66, -63, 90, -105, 117, -66, -125, 101, -85, 60, -10, -108, -65, -98, 101, -116, 31, -115, 48, 38, -3, 54, -56, 48, 51, -93, 54, 6, 58, 125, -1, -44, -102, -104, 109, 90, -3, 24, 108, 31, -29, -125, -30, -6, -121, 101, -119, 27, -18, -33, -114, 112, -67, -6, 120, -13, -42, 53, 101, 18, -65, 9, -60, 121, 69, 38, 88, -66, -81, -94, -85, 38, -11, -80, 38, 38, 85, 85, 4, -46, -25, 4, -105, -23, -51, 59, -79, 123, 5, -51, 60, 59, -47, -34, -68, 99, -128, -19, 81, 88, 13, -3, 76, 60, 49, -95, 59};
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
    msg.setTimeStamp(0.8002741359600052);
    msg.setSource(25409U);
    msg.setSourceEntity(3U);
    msg.setDestination(64415U);
    msg.setDestinationEntity(67U);
    msg.source.assign("ODTOCNTSEKCLYMBZKJRTKXCGLBSUTAAFQNWZLGHJRPJTGNZSNPPOPXEEJKKLNINUPMULUHYYUGRMDDQXTBDTIPOHAWKZJSMNKHAVSWOIEQHUIQVERSOLIHJAUXXCYLFKQZCHLYIGUZVWXQMREFFJGPWWGVAFAFCMQXODYFVSONVXCPYRDBJRRRZBEBMSEJKWKBHFHMGFCBTVIDNZXSVA");
    const signed char tmp_msg_0[] = {-39, 6, -85, 0, -64, -108, -50, 122, -21, -13, 64, 18, -120, 59, 39, 108, 40, 36, 95, -14, 88, -113, -60, 43, -96, -93, 3, -2, -93, 19, -107, 93, 24, -24, -10, -100, -57, 115, 57, -71, -111, 54, 109, 98, -106, -36, 69, 36, -4, 98, -94, -114, -123, 87, -70, -30, -114, -19, 57, -11, -81, -18, -68, 78, 87, 69, -34, -57, -55, -61, -28, -97, -127, 115, -25, 115, 88, 109, -127, -51, -125, 113, -56, 41, -2, -93, 78, -78, 115, -47, -99, 91, 71, -5, -99, -93, 28, 6, 93, 34, -1, -81, -51, 5, 19, 119, -28, -57, -99, 83, -96, -47, 90, -99, -84, -77, 110, -22, -69, -109, 72, -13, 97, -52, 46, 53, 70, 120, 48, -30, -37, -103, 64, -2, -30, -38, 83, 32, -13, -59, -12, -46, -115, -49, 50, -97, -118, 78, -122, -17, 52, 106, -122, 26, -87, 68, 34, 55, 5, -10, -17, 77, -60, -97, -38, 26, 31, -23, -102, -116, -5, -64, 1, 106, -9, -36, 66, -113, 29, -56, -77, 96, -51, 57, -113, 41, -84, 79, 117};
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
    msg.setTimeStamp(0.06909069566893378);
    msg.setSource(36791U);
    msg.setSourceEntity(82U);
    msg.setDestination(43074U);
    msg.setDestinationEntity(209U);
    msg.source.assign("QKEAPXYRJSODTSYMIPTUXUFXUSCXQBURPKYPDHIIXGDFNJMKZIWWFDBEQWJSUOZCAGFTDPWRBLHBVRHOEACNZLYNVMEUJSNUQTVZYSIBQHTSEKMKMZWKVOWYAGWVHIFXSBMRMFGFLWCVXNRVWHJCYAATQQMKACOFIOFVIELPRCDGLEUSUEPPDGDLGTHTHCHTGIDZXJ");
    const signed char tmp_msg_0[] = {-35, 56, 109, 13, -61, 39, -66, 12, -97, -17, -65, 56, 90, 94, -11, 46, 106, 34, -27, 116, -111, -75, 62, -107, 19, 26, -16, 67, -117, 17, -68, 44, 97, -9, -41, 104, 39, -8, -81, 77, -88, 0, -55, 66, -103, 110, 87, -50, 8, -99, 126, 45, -34, 84, 122, 119, 55, 113, 34, 46, -30, -61, -7, -128, 7, 33, -27, -80, -33, -27, -24, -54, 10, -7, 19, -97, -82, 49, -121, 9, 47, -77, 25, 117, -56, -116, 72, 80, -23, -23, -45, 19, -78, 3, 31, 90, -4, -32, 7, -75, -22, -105, -92, -98, -97, 97, -120, -57, -64, 95, 12, 82, -69, 79, 51, 98, 41, -26, 44, -33, 23, 37, 102, 110, 68, -2, -52, 98, 70, 69, 6, -99, 115, 96, 47, 95, -82, 16, -24, -80, -45, 8, -13, 76, 81, 13, -32, 106, 80, -113, -38, -109, -57, 2, -93, -85, -78, 42, 2, 108, 10, -40, 55, 106, 78, -105, 106};
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
    msg.setTimeStamp(0.8734058324121564);
    msg.setSource(6300U);
    msg.setSourceEntity(37U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(147U);
    msg.source.assign("TDZLEYKWOJOWSLCYXXSLJVKDWHUYVENVINQYKFGAPMOIAUVTZSRKOAWABHMMCBIDRETMJFWHRYL");
    const signed char tmp_msg_0[] = {79, -19, -71, 76, -65, 49, -51, -57, 108, -23, -28, 65, 34, 0, -17, 12, -52, 55, 26, -45, 98, -75, 64, 20, 66, -42, -102, 105, -88, -60, 17, 109, -1, -95, 29, -22, 9, 46, -58, 66, -13, 104, -97, -127, -67, -63, -60, 1, -97, -58, -126, -21, 56, 74, 11, -60, -40, 69, -105, 82, 41, 99, -40, 102, 99, 58, -92, -117, -103, 7, 39, 38, -43, -97, -47, -12, 51, 86, -35, -42, -99, -51, 45, -78, 12, -52, -73, 46, 123, 68, 13, 58, -6, 72, -109, -18, -41, 8, -24, -50, 10, -27};
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
    msg.setTimeStamp(0.32518516817921983);
    msg.setSource(62697U);
    msg.setSourceEntity(142U);
    msg.setDestination(15585U);
    msg.setDestinationEntity(62U);
    msg.seq = 194214996U;
    msg.state = 205U;
    msg.error.assign("LOSIQKGKKBKLHBCOZGHNZSNEAGWANUKBFTRFMESOPIIUPTZFJWXQFPQFMIOOYYKYVTPUZVKYJIBQNPDCATG");

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
    msg.setTimeStamp(0.37149746208742385);
    msg.setSource(61199U);
    msg.setSourceEntity(132U);
    msg.setDestination(24776U);
    msg.setDestinationEntity(161U);
    msg.seq = 2816043042U;
    msg.state = 239U;
    msg.error.assign("QBKDEVLKAFCGVZKDHWABSPURSXNQUUEMJPIRCRENWCNRQDYCMGSWRLKPCIKOLBZGKDIBFYJTLMQNAXIZEQFWRXHH");

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
    msg.setTimeStamp(0.04710326219128236);
    msg.setSource(20164U);
    msg.setSourceEntity(162U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(146U);
    msg.seq = 3169016058U;
    msg.state = 97U;
    msg.error.assign("SCRVJFLOPHGJMRGELACRWRXBOEPRFJADRNBCCJGPYCDFEOB");

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
    msg.setTimeStamp(0.3882593646391026);
    msg.setSource(8891U);
    msg.setSourceEntity(105U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("AUUOSYKGNXWKCXZZRMMHLNDHZVFQIAOQZZWEDFFVWQKBVBMPKSAXSEYNMHRUCTUCAUBYUEFUALJBZNJVXIFONWIGE");
    msg.text.assign("FCWUBVVQGVFU");

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
    msg.setTimeStamp(0.5276870661826356);
    msg.setSource(10750U);
    msg.setSourceEntity(41U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("OQGDMAUJDMSHGCSKDEGBXTERQDROVSFJUUKVWJMBIRLLPMBRBNIAIOBKDSAFHRWYFPYTKNNHNKVISXYNNUMOFHMOPPQJKXTPDGCCWVJTQNXLJYVNGNOILGWHWQZCRCIGQEAQTHBVETIXGVWRFWJOJLDISFLPWMTPLQLCDPXAUGFTSKHXZGUWQXEZBROEOTVPIZVYJZF");
    msg.text.assign("NXDCYZTOBJRPQEUUKNLYFWUONIBDRXJLZWVIWJNDLHADONUJOISPLSCOKXISRXRJAGDPOCRLKDHABBBZWQSEGEHFBFGMBCVJTCCNLXIANPT");

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
    msg.setTimeStamp(0.1253021078335521);
    msg.setSource(52284U);
    msg.setSourceEntity(209U);
    msg.setDestination(42466U);
    msg.setDestinationEntity(230U);
    msg.origin.assign("HBUIHZYZXSCIJORPUOMRAQKSFLAAIEUVKNXLXUPENYWKGDDABEGVQQNIIXUJTJNWALESSDSVRPLOWEPHWFMQWYJPQTGLIBIFKZUGELHVSA");
    msg.text.assign("DIUWAUHGFBIEORAJQRCTZWXYXVCMDKDXRNDOBPKVOFNMCSKNKPVFSCGYBSJYNHESMAZSLPUXJTUNKWERPZLVSJUPIIMPZBXIJENA");

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
    msg.setTimeStamp(0.2524956562536925);
    msg.setSource(1022U);
    msg.setSourceEntity(169U);
    msg.setDestination(10127U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("AHRKODXBTNKBEWLJVIJCDOBJMVGLWKISYCQHICVWQRVVGHMRIKMAUVBMPMNYHEHVHIUCMGFJHEJZKYSSYNPBNNATWAGXZDGECBAXAYJUNZJRLMXTBCNRHRKPFETTLPPMOJFFGQOQJLFXWSQDBAEYFXWXGSSOYUIYQOOSNFLQPDESIBNDGMDWLKTRDBXTPPDAWKWTVINECPZUEZGUZQTSKMPXKURFXDCIROHTHZOOUGIYLWRQA");
    msg.htime = 0.035965183009368684;
    msg.lat = 0.18003838742292466;
    msg.lon = 0.5040663747561384;
    const signed char tmp_msg_0[] = {-53, -2, -94, 91, 81, 40, -37, 10, -9, -24, -83, 69, 79, -63, -78, -65, -59, -4, 2, 56, 121, 117, 13, -52, -92, 12, 80, -18, -124, -83, 97, -56, -87, 55, 73, -20, -35, -15, -89, 109, 99, -72, -95, 25, 25, -39, -102, -63, 115, -19, 111, 36, -69, -37, -52, 67, -23, 69, 51, -123, -92, 96, -43, 94, 74, -62};
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
    msg.setTimeStamp(0.7005326907449808);
    msg.setSource(56693U);
    msg.setSourceEntity(206U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("SKUYPBLJHYTDEEEMPNWXGSWPMZWMIXYAVMSSIINGGKJQMKQRMOPWBZWVTXFATKFCQHUOOWCZTIHIDICTVIFEAONWXDVUQGBLZNAUOQXEHPDRBFLZJSAWFMTUDZXJYSAJHDQCTZYFEEQNKVWDFIXRUP");
    msg.htime = 0.5463966310317688;
    msg.lat = 0.5722086494918317;
    msg.lon = 0.09771922299354197;
    const signed char tmp_msg_0[] = {13, -58, 93, -107, -28, 97, -33, -85, -12, 123, 102, -120, 40, -118, 12, 126, 46, -121, -16, -12, -95, 25, 117, -18, 56, 30, -109, 44, 19, -25, -92, 101, 99, 33, -96, 11, 112, -87, 76, -53, -23, -90, -20, 108, -51, -111, 90, -14, -86, -23, 9, 125, 44, -127, -119, 40, 119, -112, -89, -92, 17, -54, -51, 30, -23, -11, 17, 47, -118, 123, 23, -105, -42, 8, 37, -107, 75, -24, -18, -120, -5, -76, 89, -108, 110, 83, 101, 92, -119, 29, 24, -72, -107, -31, -75, 40, -113, 121, 116, 55, 93, -64, -57, -9, -90, 125, 108, 57, 83, -5, -45, 47, 87, -53, 33, -48, 29, 15, -108, -110, -38, -39, 100, -31, 24, 27, -96, -66, -89, -45, -81, -110, 125, 116, -64, -101, -37, -49, -54, -20, 25, 99, -8, -36, 55, 112, 81, 68, 37, -61, -99, -1, -31, -54, 81, 36, 85, 81, -13, 63, 71, 102, -109, 86, 68, 61, -76, -43, 90, -97, 36, -122, 16, -127};
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
    msg.setTimeStamp(0.8787750977879549);
    msg.setSource(8501U);
    msg.setSourceEntity(239U);
    msg.setDestination(45114U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("WSSJXEFJZKVQGNPLROCTYHNKANVOISHCSEYDSCJTAPENTBVBTRJLHTWWTMQBSKRDUIFKOPFJQFDNZOTBDIZBRQIQOLVHGAXTOACJZDZLPZAVWOREFOBGTZKBLPUNXNWWFGDWLLVIJYPXXBWKLRGYOHGCSDBMCELQF");
    msg.htime = 0.9539967719650314;
    msg.lat = 0.023289555524686034;
    msg.lon = 0.3011967286694949;
    const signed char tmp_msg_0[] = {-16, -55, 116, 0, 33, -113, -64, 115, -92, 0, -21, 58, -103, 45, 59, -84, -21, 63, -68, -58, 10, -4, -83, -95, -32, 47, 13, 0, 44, -8, 9, -48, 70, 86, -111, -44, -14, 59, 87, 67, 122, 32, -116, 123, 84, -21, -100, 97, -51, 11, -76, -58, -30, -81, -45, -57, 6, 23, 44, -1, 65, 73, 56, 67, -10, -120, 50, 47, -1, -58, -36, 82, -14, -103, -19, -123, -110, 125, 2, -85, 56, 7, 126, 7, -70, -26, -7, -96, -74, 96, 45, -112, 113, 5, -36, -32, -86, -41, 74, 124, -56, 16, -110, 77, 42, -109, 117, 105, 119, -26, -58, -108, -53, 21, -98, 77, -76, -17, -33, -53, -39, -12, -37, 61, 72, -120, 106, 78, 59, 118, 41, 125, -117, 111, 75, -122, 65, -126, -124, -68, 68, 11, -122, -10, -57, 80, -29, -66, 68, 23, -123, -91, -122, 5, 86, -79, 14, -65, -77, 14, 84, -18, -65, 103, -105, 81, -78, -111, -61, 73, -72, 27, 3, 79, -118, 6, -90, -67, -11, -92, -20, 108, -57, 118, -90, -15};
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
    msg.setTimeStamp(0.9805799572700896);
    msg.setSource(41159U);
    msg.setSourceEntity(149U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(105U);
    msg.req_id = 64360U;
    msg.ttl = 57361U;
    msg.destination.assign("ELPIYCUXZOPWIBXIECRFFSMNMDFQDCLDRZCJFTFHVDFXMEPNJFKDGDGSOUKGFNIAGLMGXJRGTQSZHPHVQBSHDUXKQLTTZLMMJSOTHCCPJARWYEWKTYAAPEZSZBWUKLZLSSXIBETUZMYFSTAMCKUONSUHZHHNMKWKBHYJNVBOVWQYAJMNYPIKTRYNENWPIFKAVGPJDWOXUBCVCUAQGZQJYODIWRIUXCDLRJAQGVBNLVBHRRIRPLWYVVOOE");
    const signed char tmp_msg_0[] = {123, -57, -116, -127, 55, 21, 110, -101, -5, -38, -93, -9, 57, 106, 21, 1, 19, 77, -25, 4, -31, 108, 89, -12, 31, -7, -116, -105, 1, -68, 61, 103, -56, -94, -98, -113, 73, -6, -54, -83, 64, 48, -61, -96, -46, 17, -108, -127, -20, -92, -112, 82, -48, -29, -22, -1, -26, -94, -125, -109, -4, 5, 0, 69, -98, 27, 100, -18, 50, -33, 21, -54, -123, -26, -36, 57, -44, -119, -69, 1, -127, -100};
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
    msg.setTimeStamp(0.34838044462903994);
    msg.setSource(1095U);
    msg.setSourceEntity(213U);
    msg.setDestination(23002U);
    msg.setDestinationEntity(129U);
    msg.req_id = 18539U;
    msg.ttl = 30917U;
    msg.destination.assign("DCBSMXSRKVRQFPCEJXUFQSSMUTZQBBNZRFCRHFGEPNYGESGIVDKXGJOKOIYIQSWMXBHLHTWLXPDUQJTGOGZAPQWGMGJVHSHBJYCITIOZLEEPYFTATOKWJBQULLFXYY");
    const signed char tmp_msg_0[] = {-39, 94, 18, 46, -58, -55, -27, 48, -113, 9, -46, 45, 0, -121, -110};
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
    msg.setTimeStamp(0.21690022294356426);
    msg.setSource(18363U);
    msg.setSourceEntity(72U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(4U);
    msg.req_id = 64233U;
    msg.ttl = 35806U;
    msg.destination.assign("FXONCBLSRRJPTMQUUBKZLHQMHFHZYBFMUNVWTRRNAXCYSQJODPWAIHWXTKGTLOUVQVIPVHZYOIMALWVEAYUAPKXGKETKQZOKUPQYGIGJSZOCRMMOIJRFAVENDFBWTGXIFUHZNEJFMPQIRYXOBBHYDFPPCUAMCLSGHLWJUWIJXTEGHNCHXAASTASUDSSDYEKDSTXNOLWCYCWKZBTVGJGCIENKBGZXLWNMQJFSLNVB");
    const signed char tmp_msg_0[] = {-43, -13, 4, 30, 2, 62, -16, 110, 111, 56, 61, 113, -3, -94, 96, -93, -108, -33, 15, 115, -46, -27, -37, 124, -70, -109, 32, -127, -85, 114, -120, 113, 58, -33, 9};
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
    msg.setTimeStamp(0.4665204689569894);
    msg.setSource(51942U);
    msg.setSourceEntity(21U);
    msg.setDestination(18266U);
    msg.setDestinationEntity(13U);
    msg.req_id = 2313U;
    msg.status = 230U;
    msg.text.assign("TYDFXMGSEGUHVQOODBRTRMBHXKWCD");

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
    msg.setTimeStamp(0.4933890364229475);
    msg.setSource(39471U);
    msg.setSourceEntity(45U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(143U);
    msg.req_id = 17960U;
    msg.status = 4U;
    msg.text.assign("PXKFUZWOTBCZBXJJDNYKTITQLOKLZATLHNUQGGIYVRXKKMMBBPSUCAFROAVTR");

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
    msg.setTimeStamp(0.5592914663570494);
    msg.setSource(40992U);
    msg.setSourceEntity(21U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(168U);
    msg.req_id = 22588U;
    msg.status = 145U;
    msg.text.assign("YJBSZXAQNKPGJGPYCVFHHZAUWTYMPOOXBJKTRXTVDU");

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
    msg.setTimeStamp(0.6139827168237262);
    msg.setSource(6834U);
    msg.setSourceEntity(83U);
    msg.setDestination(30506U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("RCKUFVEOVYLAKHTNZZZMQQCACDXBHMNGJZBWO");
    msg.links = 163298830U;

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
    msg.setTimeStamp(0.022573844589825698);
    msg.setSource(14327U);
    msg.setSourceEntity(174U);
    msg.setDestination(61548U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("DVUZVBAHAUJGDHMNGBTSKWFXQHDFLCNVSZDSABGMHPAHOWQKXIIWYXOISRXSLYPFNKNGOBCRAEVISJDEEPHCQLEVTUKVACPAJYSZMWHGPSNZQNQFTHRLJWPTYAIGLFMUZCODTPYGRBTZVDRWEYBXNYUISFIUKVUKCMMX");
    msg.links = 49238583U;

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
    msg.setTimeStamp(0.25514205046798766);
    msg.setSource(64232U);
    msg.setSourceEntity(172U);
    msg.setDestination(19401U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("KIZWVDPLMQDRKPSIVBZFAFAYXOLNYCZRIJCUMESCYLNFZVRUYXSVLHYABOJIBIFXMRFRTCWFNPJQOQNIVNZEJMBTGOCTKEXHWWEACDUQVBVVNKUARTDPLMNRXIRNDOOYUDKAIQGSXZHJHHNETGAZKDAPZZWKQOUJMJWHWGEPQTFNGCCCQPOUSLMFU");
    msg.links = 3363056652U;

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
    msg.setTimeStamp(0.0016882292613821237);
    msg.setSource(44037U);
    msg.setSourceEntity(152U);
    msg.setDestination(22064U);
    msg.setDestinationEntity(168U);
    msg.groupname.assign("DFVATLRCVJBXFBXBLSSSPTAKVTEMIUDJZIDNQZQPDTSIESYGUNIPYTERNKWBAKOOEOUGJEZKTSTZFDHEMWMOLULWKKLBNGHLVAZGMNUUIHGETJGJYIDZFWNJWODPQVEONBWAQZQZRRYPYUHHTPBRVMRSCUDKGRKCOXBKHJPHFAHMGCBDLEJVNXK");
    msg.action = 94U;
    msg.grouplist.assign("TERXWKVFVBKZEAELYUZWNMMYEUMFRUHHNCDOFDUYGKLUNCFFRMJZQBSDYFJIHCFRHDQIAMXKXPFAZMHNXUUIPZCGYRPBNLOPUTPRLABABRUGGNJQCXACDJVDMJMLCSLBEPOIDIDASWVSAWQWUPJCPXQANQVNIGKSB");

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
    msg.setTimeStamp(0.008169439721889882);
    msg.setSource(2393U);
    msg.setSourceEntity(141U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(170U);
    msg.groupname.assign("SPVVPCAMQWGTLRYGJASHJBEMSBQWTRFREWQUIXYXUQVSLYKVBWHEPKRHCBWJUXFMKACZGOFAZFKDQFMVVJHEDF");
    msg.action = 112U;
    msg.grouplist.assign("WRITHMQCOGRIQYVNKXGHQZOXJYKNJOGIHGZFGPNBHBM");

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
    msg.setTimeStamp(0.24609214761508147);
    msg.setSource(28455U);
    msg.setSourceEntity(139U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(86U);
    msg.groupname.assign("IJDZVUOZMUUGSOIHFUHDI");
    msg.action = 135U;
    msg.grouplist.assign("ATWJZDIULKGILWFGCMTNDSVBMXVOJRXNZDHUYQFMBKSQXLAJCWYOTXFDOYUDIFSNRUKERFUBJVJRWHQZGPPLTDLOMJFUWNGI");

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
    msg.setTimeStamp(0.46921151227010727);
    msg.setSource(1403U);
    msg.setSourceEntity(53U);
    msg.setDestination(55555U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7134642459389955;
    msg.sys_src = 32225U;

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
    msg.setTimeStamp(0.12346823108831873);
    msg.setSource(58502U);
    msg.setSourceEntity(55U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(37U);
    msg.value = 0.2535614535184001;
    msg.sys_src = 31909U;

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
    msg.setTimeStamp(0.9965169670043174);
    msg.setSource(44202U);
    msg.setSourceEntity(139U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6677538246199434;
    msg.sys_src = 47805U;

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
    msg.setTimeStamp(0.09996351132251302);
    msg.setSource(32752U);
    msg.setSourceEntity(236U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(80U);
    msg.value = 0.9780587552518745;
    msg.units = 215U;

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
    msg.setTimeStamp(0.2691414464136864);
    msg.setSource(46739U);
    msg.setSourceEntity(252U);
    msg.setDestination(14047U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2744154615961899;
    msg.units = 17U;

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
    msg.setTimeStamp(0.8636680462354792);
    msg.setSource(63421U);
    msg.setSourceEntity(7U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(147U);
    msg.value = 0.21925911798452968;
    msg.units = 146U;

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
    msg.setTimeStamp(0.05494860741196783);
    msg.setSource(17701U);
    msg.setSourceEntity(170U);
    msg.setDestination(8124U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.5493827314883349;
    msg.base_lon = 0.5184022862688776;
    msg.base_time = 0.8094050429150158;

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
    msg.setTimeStamp(0.12072320600966302);
    msg.setSource(55282U);
    msg.setSourceEntity(253U);
    msg.setDestination(41821U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.8417237182467893;
    msg.base_lon = 0.42104378219916505;
    msg.base_time = 0.154500559914166;

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
    msg.setTimeStamp(0.09487032235356407);
    msg.setSource(58925U);
    msg.setSourceEntity(172U);
    msg.setDestination(1189U);
    msg.setDestinationEntity(113U);
    msg.base_lat = 0.09316806231963692;
    msg.base_lon = 0.47682447058593125;
    msg.base_time = 0.5304600933380703;

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
    msg.setTimeStamp(0.7285776007910143);
    msg.setSource(640U);
    msg.setSourceEntity(89U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.5685447750846974;
    msg.base_lon = 0.1404261832097533;
    msg.base_time = 0.8302900710827406;
    const signed char tmp_msg_0[] = {103, 90, -20, 91, -13, 71, 65, -32, 40, 40, 33, 31, 90, -19, -33, -48, 48, -62, 67, -120, -59, 9, -45, -11, 101, -52, 24, -26, 33, -29, -109, 60, 73, 108, -66, 61, -71, 17, 39, -117, -119, 97, -107, 117, -128, -119, 101, 11, -73, -112, -51, -103, -72, -15, -110, 115, -1, -116, 59, 7, -66, -15, -100, -119, 53, 39, 118, 13, -5, -48, 94, -49, 32, 60, 14, 63, 12, 8, 67, -125, -96, 29, 96, 95, -104, -12, -35, -114, -44};
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
    msg.setTimeStamp(0.8156138630348165);
    msg.setSource(1938U);
    msg.setSourceEntity(174U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.8275528642635145;
    msg.base_lon = 0.4153975773126114;
    msg.base_time = 0.20757336655346026;
    const signed char tmp_msg_0[] = {66, -56, -125, 123, -73, 41, 88, -101, -19, 99, -71, 102, -55, -127, 67, 111, -112, 56, -31, -41, 11, 89, -85, -19, -2, 51, 101, 92, -90, 54, 57, 20, -61, -90, 61, 22, -62, 107, -40, 82, 116, 110, 97, -31, -81, 52, -77, 60, -71, -74, -4, 73, 61, 48, -96, -38, 57, -30, 22, -121, 120, 83, 37, 97, 24, -96, 81, -27, -55, 36, 43, 76, 67, 55, -100, -6, -119, -96, 63, 0, -48, -104, -61, -69, 71, 88, 77, 82, 40, -81, 49, -60, 61, 10, -104, -86, -85, 9, -120, -115, 28, -27, 82, -30, 102, -58, -41, 75, 5, -60, 0, -17, 107, -31, -31, 28, -84, -34, 25, 42, -41, 14, 27, 42, -18, -91, 6, 54, -23, 123, 24, 51, 115, -45, 4, -35, -77, 65, 34, 48, -95, -77, 75, 27, 101, -6, 59, 56, -52, 37, -123, 79, -27, 116, -107, -33, 52, 29, -83, 19, -15, 50, -63, -114, 99, 82, 87, -85, 38, -104, -22, -79, -78, -14, -13, -16, 30, 106, 7, -16, -109, -6, 71, -75, -46, -124, -107, -72, -90, -74, 41, -30, 73, -64, -8, -110, 61, 49, 94, -68, -2, 23, -41, 86, -56, 36, -99, 67, -4, 101, -66, 17, 54, -82, -84, -54, 61, -9};
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
    msg.setTimeStamp(0.4749520664324799);
    msg.setSource(25030U);
    msg.setSourceEntity(178U);
    msg.setDestination(1882U);
    msg.setDestinationEntity(251U);
    msg.base_lat = 0.7453664613559177;
    msg.base_lon = 0.5194599602166291;
    msg.base_time = 0.8045232515176308;
    const signed char tmp_msg_0[] = {-49, 93, -31, -111, -102, 82, 85, 99, -36, -82, -28, 97, -106, -8, 5, 117, -72, 20, -113, 73, 92, 11, 103, -119, 117, 4, 49, 7, -89, -8, -44, 79, -74, -80, -4, 18, -32, -107, 39, -55, 109, 37, -34, -102, 85, 60, -4, 7, 58, -92, -105, 103, -92, 102, 119, 81, 115, 110, 76, 82, 92, 92, -20, 37, 114, 112, -128, 102, -55, 17, -90, 65, 13, -126, -25, -79, -123, -61, 4, 29, 95, -49, -71, 74, 68, 45, -81, -63, 57, -81, 99, -85, 120, 99, -26, 60, -31, 57, -55, -126, -52, -100, -40, 104, 67, 44, 40, -120, -23, 24, -49, -29, -33, -40, -57, 121, 53, -92, -45, -74, -57, 38, -17, 98, 18, 97, -20, -39, -23, 5, -16, 0, 16, 26, -104, 106, -26, -22, -68, 23, -123, -29, 43, -4, 36, 49, 123, -59, -112, 115, -108, -75, -10, -94, -12, -121, 18, 19, 120, -78, -62, -70, -42, -125, 82, -47, -30, 12, 74, 5, -58, -43, 54, -59, -53, 0, -44, 109, -7, -24, -88, -90, -51, -125, 126, 77, 72, -123, 105, -49, -84, -27, 78, 88, -51, 77, -79, -54, -83, 39, 30, -33, 64, -48, 58, -19, 89, -55, -79, -102, 102, -58, 42, 115, 77, 3, 69, -113, 39, -21, -92, 121, -46, 59, 60, 8, 13, 57, 37, 4, 7, 117, 40, 27, -36, -105};
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
    msg.setTimeStamp(0.316408125503698);
    msg.setSource(29610U);
    msg.setSourceEntity(33U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(194U);
    msg.sys_id = 20651U;
    msg.priority = 97;
    msg.x = 21106;
    msg.y = -1026;
    msg.z = 11437;
    msg.t = 12629;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 41493U;
    tmp_msg_0.destination = 13666U;
    tmp_msg_0.timeout = 0.026615696712847248;
    IMC::PulseDetectionControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 42U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.840810601576601);
    msg.setSource(7250U);
    msg.setSourceEntity(65U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 5555U;
    msg.priority = 80;
    msg.x = -12850;
    msg.y = -2554;
    msg.z = -18678;
    msg.t = 7925;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 25911U;
    tmp_msg_0.comm_mean = 166U;
    tmp_msg_0.destination.assign("URINDUIFMIDXOCJRTNEYSADZJUBOLYQOPODRRGYZRYDWJJEJGZHBQRJB");
    tmp_msg_0.deadline = 0.2507188157513325;
    tmp_msg_0.range = 0.9080833563806514;
    tmp_msg_0.data_mode = 148U;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 800U;
    tmp_tmp_msg_0_0.priority = 23;
    tmp_tmp_msg_0_0.x = -23955;
    tmp_tmp_msg_0_0.y = 23089;
    tmp_tmp_msg_0_0.z = 27903;
    tmp_tmp_msg_0_0.t = -159;
    IMC::Formation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("QKKGYAKRHWYZBDKQXBLZFWTPSXXFOQCAO");
    tmp_tmp_tmp_msg_0_0_0.type = 24U;
    tmp_tmp_tmp_msg_0_0_0.op = 199U;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("DRELPVQOCAYEJLXFFAHDPGXULZQJIVIUQFOPVGBRVVAASXPWIJDSBKOXLZAAJMHGEGTFPOFTOQKNBMKGFXDPBUXMOWWDLMRQSXOKVPNYRTHNCLCBX");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("ZCQTPTVSOOUWSMJPTUWGKGKNSOWVFKGCRHZIPKGQHLZPMEQDWDKGSDTJIGOAKZBSXHLVJFZRELUMREOZAFBXXGRWEZDCRFYECSWLVNTJJDZSZMSEIMYUAPBVOPMVQXBYCYCTAFOJUMICDFQLPPMGXCPYOJE");
    tmp_tmp_tmp_msg_0_0_0.description.assign("BNNRXHPJDWQHMPHEVPVFGSIUYBOVMKIHOQILLEFXGTFDNTRB");
    tmp_tmp_tmp_msg_0_0_0.reference_frame = 2U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vid = 57434U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_x = 0.8231867093377604;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_y = 0.008917809023080037;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_z = 0.8863479923973355;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.3649325748880744;
    tmp_tmp_tmp_msg_0_0_0.leader_speed_min = 0.6472030221938195;
    tmp_tmp_tmp_msg_0_0_0.leader_speed_max = 0.36747266929909794;
    tmp_tmp_tmp_msg_0_0_0.leader_alt_min = 0.44657543663297483;
    tmp_tmp_tmp_msg_0_0_0.leader_alt_max = 0.6117119903162767;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.26651334276692507;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.01800040915507628;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 28063U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.5355499725591961;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 37118U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 26438U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.149938771203734;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LJGMCCWTQEOZFSKGYQCZLTOFHVHIPBVUKKLJRXA");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("XGPXXOYITXBVJOKWBDRJFGFUVUWTWDRZETDIZOFLJIPPRAGSMBTTK");
    const signed char tmp_tmp_msg_0_1[] = {-96, -102, -53, 96, 64, -49, -47, 126, 97, -31, -56, 18, 0, -79, 82, -35, -123, -23};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.12398158267946191);
    msg.setSource(39688U);
    msg.setSourceEntity(96U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(119U);
    msg.sys_id = 19333U;
    msg.priority = -15;
    msg.x = -30416;
    msg.y = -15139;
    msg.z = -4275;
    msg.t = -6631;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7459036381438842;
    tmp_tmp_msg_0_0.lon = 0.5118442479647826;
    tmp_tmp_msg_0_0.height = 0.3708127196556885;
    tmp_tmp_msg_0_0.x = 0.4525147570806898;
    tmp_tmp_msg_0_0.y = 0.07966348511632193;
    tmp_tmp_msg_0_0.z = 0.0012163654189397688;
    tmp_tmp_msg_0_0.phi = 0.9576939326366295;
    tmp_tmp_msg_0_0.theta = 0.6642507900647181;
    tmp_tmp_msg_0_0.psi = 0.4112583611451014;
    tmp_tmp_msg_0_0.u = 0.879694846639501;
    tmp_tmp_msg_0_0.v = 0.6300666250090347;
    tmp_tmp_msg_0_0.w = 0.8858889883366013;
    tmp_tmp_msg_0_0.vx = 0.6955603782596813;
    tmp_tmp_msg_0_0.vy = 0.9933115023191077;
    tmp_tmp_msg_0_0.vz = 0.04252461212123637;
    tmp_tmp_msg_0_0.p = 0.3792304096338063;
    tmp_tmp_msg_0_0.q = 0.7419442105162468;
    tmp_tmp_msg_0_0.r = 0.0761401224124989;
    tmp_tmp_msg_0_0.depth = 0.2430833871095217;
    tmp_tmp_msg_0_0.alt = 0.8919890489717809;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 31U;
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
    msg.setTimeStamp(0.9349940347807468);
    msg.setSource(18907U);
    msg.setSourceEntity(71U);
    msg.setDestination(45784U);
    msg.setDestinationEntity(138U);
    msg.req_id = 13684U;
    msg.type = 217U;
    msg.max_size = 64866U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8383769502702622;
    tmp_msg_0.base_lon = 0.7941018291475397;
    tmp_msg_0.base_time = 0.07402955741329453;
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
    msg.setTimeStamp(0.35333657475148683);
    msg.setSource(33992U);
    msg.setSourceEntity(208U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(253U);
    msg.req_id = 23256U;
    msg.type = 57U;
    msg.max_size = 15241U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8611040655612144;
    tmp_msg_0.base_lon = 0.4839497457043217;
    tmp_msg_0.base_time = 0.24494515787355864;
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
    msg.setTimeStamp(0.9576874478224381);
    msg.setSource(36447U);
    msg.setSourceEntity(133U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(11U);
    msg.req_id = 28592U;
    msg.type = 29U;
    msg.max_size = 57388U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.16301438977205107;
    tmp_msg_0.base_lon = 0.7205342934660155;
    tmp_msg_0.base_time = 0.05076574925022481;
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
    msg.setTimeStamp(0.353295874817911);
    msg.setSource(1214U);
    msg.setSourceEntity(179U);
    msg.setDestination(12777U);
    msg.setDestinationEntity(87U);
    msg.original_source = 52267U;
    msg.destination = 59700U;
    msg.timeout = 0.7138064977124129;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.03589055499530136);
    msg.setSource(64312U);
    msg.setSourceEntity(52U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(126U);
    msg.original_source = 60183U;
    msg.destination = 41438U;
    msg.timeout = 0.8399344685016843;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 186U;
    tmp_msg_0.actions.assign("ECROXAQQMJNKWYWKRNRVHCUXLCSBFUIMHFLKIDSPLCEAXWZRHAPSNZCVPIFJQYDVBJGCFCGYPSODMCIDYBPITAOSJVRBMEQXRVHQILGUJOFUZBXGWFQUBGDNZJDKOUGZSUBQXETKESASBEHDOQDPMMWTWKEETLOFZFVOICHTXYGHHANYFYLRDYMWWXAEYNDCQLMKGWERRLVUTBWFKXAPJTOMQSJOJPGLTNAMZZNSIGKTIZY");
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
    msg.setTimeStamp(0.9713474327417634);
    msg.setSource(25136U);
    msg.setSourceEntity(60U);
    msg.setDestination(22098U);
    msg.setDestinationEntity(199U);
    msg.original_source = 15140U;
    msg.destination = 26067U;
    msg.timeout = 0.5062429976142355;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 59U;
    tmp_msg_0.x = 30703U;
    tmp_msg_0.y = 43456U;
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
    msg.setTimeStamp(0.7993149835917064);
    msg.setSource(35712U);
    msg.setSourceEntity(213U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(22U);
    msg.type = 14U;
    msg.comm_interface = 21922U;
    msg.model = 43918U;
    msg.list.assign("OYUUWLOCIPJNZMKQMFEPTBNPEUHYFOWMTZHLVRBBDXJCHWCTJVUUANISIADCIVKZZWVISKDXLFPVBLKWAEYNMCXPYQHVQLJJCICBHXHRXCDMYDFETFUGFKYSULGQFFEPWBTETTEBRRQWNKFNAGSXGLUUWAFTYUSOPJOODICXPDGRBXRJCONDLIGSRDQIGXETPOHSTKEOJRZZWHQN");

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
    msg.setTimeStamp(0.12192150268683455);
    msg.setSource(63776U);
    msg.setSourceEntity(4U);
    msg.setDestination(62881U);
    msg.setDestinationEntity(112U);
    msg.type = 50U;
    msg.comm_interface = 47352U;
    msg.model = 34020U;
    msg.list.assign("BPELCSRCXMKGERGVPRVWJDXVNECJOEDMGZSUHMIXQMDRVHSARIKPTFDYYJNEZBFSQBUAFBRIYDPHBRUGCVLVRFPJUUOJOUEJKOXABZGKGJASYZGLZMNIO");

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
    msg.setTimeStamp(0.9091044824594883);
    msg.setSource(20416U);
    msg.setSourceEntity(99U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(147U);
    msg.type = 126U;
    msg.comm_interface = 41740U;
    msg.model = 29792U;
    msg.list.assign("YSGTCABRVIEQZYYUBBKAJRQRDVJNRMIEYKLYGOCYDICHJAPNPBHLEPSDZOGTFAFOQTQRNKTEFCRWWTWT");

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
    msg.setTimeStamp(0.6378125779562193);
    msg.setSource(24073U);
    msg.setSourceEntity(73U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(158U);
    msg.type = 48U;
    msg.req_id = 549872867U;
    msg.ttl = 12283U;
    msg.code = 142U;
    msg.destination.assign("QDCBJKJAFCNWRJPXNGZXDKAMZXGCLEXEMLIADWXKQHMLQEZRDCPVKRSQPJRIPNMTCIVNLWPDEPJEYBOSGKZBAQGIVZIMOMFYSUAU");
    msg.source.assign("IOXKETHZYMMKUZRGAHKPY");
    msg.acknowledge = 17U;
    msg.status = 157U;
    const signed char tmp_msg_0[] = {85, -55, -16, -95, 59, 126, -64, 71, -58, -20, 77, 5, -68, 75, 36, 24, 94, -70, -68, -11, 28, -29, -95, 66, -72, 123, -95, 2, 9, -18, -48, 65, 58, -94, 45, 2, -45, -48, -2, -15, 2, 10, -40, 37, 30, -17, -43, -54, -5, 25, -94, 21, -38, 57, 77, 82, 12, -3, 15, -96, 48, 58, -42, 66, 116, -104, -21, -110, -121, 96, -98, -128, -94, 48, -52, 21, 12, -58, -28, -81, -19, 5, -7, 68, 25, -32, 56, 108, -71, 56, -46, 0, 41, 45, 23, 9, 110, 18, -127, 30, -121, -88, -92, -91, -1, 87, -66, -33, 106, -116, -45, -59, -73, 73, 83, 24, 110, 105, -21, 54, 41, -9, -32, -99, 84, -104, 110, -83, 75, -86, 85, -5, -64, 3, -30, -125, 108, -75, -47, -112};
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
    msg.setTimeStamp(0.9736633636745448);
    msg.setSource(65093U);
    msg.setSourceEntity(214U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(13U);
    msg.type = 85U;
    msg.req_id = 2294218914U;
    msg.ttl = 6523U;
    msg.code = 144U;
    msg.destination.assign("LEDCNKRNLPNBQYHXXAXBXCDOHGFJRROLYSCGUZCZQUIYQPQMBGFUQJCTRAGKMSZTPBSKXXXPMIWDHIHEZHHNTLABWMFORVWZVLYOVDOFAOHVIOBJMFAJSCOTUSAWVVVLUWLRKFUPOWQEYKJRPJCGRDINTMEHNBXKEVAYTPTUKFSEZYVOTPCGXTAJKRYSWYJGIIJGGWZWDJSNQYMNMSNEVCTPDZAZPUSDIKZN");
    msg.source.assign("WTLDPDRTSILYPQJBONTDLCVIHMYWGKRXECWRYVTPZILQUCPIIQRKVFKSJGUSFWOYCEEOUYQFAMVAFNFWMNIHVWTSVMXVGEEQBISZQNLPGYYPHXQDOJUJIKPJOONUQDAFHWOUJGGJWWXCRDUABJUNEHSJXLERYTNKBCFKUZTFKABGYXEZFCTZLZZNBMVRHHYSZUXMBMNAABNQPVZCIDHVBMPXBWKH");
    msg.acknowledge = 157U;
    msg.status = 118U;
    const signed char tmp_msg_0[] = {-69, 114, 48, 74, 81, -109, -39, -107, 46, -27, 78, -2, 118, -84, -34, 51, 105, 17, -36, -46, 115, 76, 58, 92, -122, -76, -7, 76, -122, -26, -2, 27, 41, 73, 52, -90, 37, 53, -9, 123, -103, -54, -97, -61, -47, -17, -123, 55, 109, 125, -2};
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
    msg.setTimeStamp(0.09635960962197776);
    msg.setSource(50498U);
    msg.setSourceEntity(75U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(8U);
    msg.type = 109U;
    msg.req_id = 563068175U;
    msg.ttl = 37944U;
    msg.code = 80U;
    msg.destination.assign("MQRDVYNPOHWSWUGRVBJFQMLVEGNMEHKTKIJSZNFUUAKGQHOFOERLJXPBGDBYBDCOLHONZAYZQMJSNSFWNFNPLXZZVBQOGWUKHATEMDQIGAUBKRHPLTRVYWTSXSDYWJPCLVUIFOBQZFQFRBTIFMSXYVCYSJINLHWEATECEKCEZBPPAYKKLIZKCKVXUXROYDHWHITUSWXVDUAXGQAATNMDDRXJVWLQIPG");
    msg.source.assign("UWCXJUXBCFHOXRUYSQJBNQPZXKTXBEKNZDHKLLHWZQXTHHTEZGKZFZKNLYWKMJSAADDQBGUVADVAGHKSCRVVGQASHDWIUROHNRJIBNQVTAMJBQEPELRGRAUOVTJJKCLKYLCIXSHIWEFXPDL");
    msg.acknowledge = 190U;
    msg.status = 120U;
    const signed char tmp_msg_0[] = {78, 82, 51, -55, -100, 20, -107, -73, -66, -15, 94, -42, 33, -108, 16, 106, 116, 39, 98, 41, -114, 22, 119, 16, 82, 57, -28, 114, 103, -109, 89, 22, 1, 26, 89, -15, 52, 35, 125, 2, -105, -75, -75, -91, -125, -7, -72, -45, 27, -125, -35, 47, 79, 112, -107, -47, -33, 83, 58, -67, 50, 6, -12, -54, 113, -14, 83, -32, 17, -24, 17, -47, 79, -2, 66, -92, -21, 14, 60, 110, 3, -21, 72, 98, 21, 12, -126, -52, -62, -19, -20, -78, -77, -8, -61, 118, -93, -84, -91, -122, 100, -6, 38, -113, -28, -6, 33, 96, 117, -34, 76, -63, -127, -67, -20, 31, -123, -36, 77, 109, -25, 89, -3, 6, 115, -34, -28, -6, -93, 126, -122, 80, -96, 54, 81, -34, 1, 111, 92, 22, 114, 126, -42, 101, -87, -25, -26, 16, -98, -30};
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
    msg.setTimeStamp(0.373374328213568);
    msg.setSource(18901U);
    msg.setSourceEntity(166U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(98U);
    msg.id = 169U;
    msg.range = 0.28272378752287686;

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
    msg.setTimeStamp(0.3572705929454625);
    msg.setSource(757U);
    msg.setSourceEntity(6U);
    msg.setDestination(42727U);
    msg.setDestinationEntity(129U);
    msg.id = 197U;
    msg.range = 0.8068494858480293;

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
    msg.setTimeStamp(0.09945700387219603);
    msg.setSource(59785U);
    msg.setSourceEntity(176U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(250U);
    msg.id = 189U;
    msg.range = 0.8197561133403473;

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
    msg.setTimeStamp(0.6836130265332946);
    msg.setSource(47740U);
    msg.setSourceEntity(89U);
    msg.setDestination(49394U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("GDQZFOHPNJNWKQKRRLVIDKXZEJJCPUIWHQNSJVMLCHYZBORTQUXCCOCXPGDBXAIKSYEYUAMYVFFOQPTCFIJYLIXNPLSHTVUZSLJMUEOWETVZJTOGDNXFEUWJNHFLRUTRFWBVDIMEYLBKUHOXUQEZPXWDIMPRANLRAGDYNVARVQDTAYWBSZJKWQHAOQZZFRDVGMLSFPOXMSGBKHLABUHSIRMYVKOPBCEMWPGDSJNSXBEAMNKIT");
    msg.lat = 0.7453802066314343;
    msg.lon = 0.8652183263006301;
    msg.depth = 0.078426273582613;
    msg.query_channel = 116U;
    msg.reply_channel = 57U;
    msg.transponder_delay = 65U;

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
    msg.setTimeStamp(0.8015974468625795);
    msg.setSource(10215U);
    msg.setSourceEntity(185U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(252U);
    msg.beacon.assign("WZMCYXSSPJAGVOPETBNQKCQPWLHWAADBWVGZFVVAHELJTASRPCQCTJTGUCBXPMQGTQSMVOEQFSHANQQFFBEZRNUUDMILLZTHWXMUVHRNAJMFXWTDXNOZRXWXNIVCKFODQHZOLFNOKOSOEXCPKZNTEFUQKPAUGPZZYNTBGUWRJISDXEECYKYIVFRFIHVJVKJYSDYMGZLBIDRIRJMEILIHYLU");
    msg.lat = 0.22206614332115404;
    msg.lon = 0.5461840695830997;
    msg.depth = 0.15774231017380125;
    msg.query_channel = 78U;
    msg.reply_channel = 25U;
    msg.transponder_delay = 84U;

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
    msg.setTimeStamp(0.6506265334360711);
    msg.setSource(59079U);
    msg.setSourceEntity(6U);
    msg.setDestination(60317U);
    msg.setDestinationEntity(167U);
    msg.beacon.assign("AVMLVPSUDHZMYVBTHEYMWAPXNNLKKFTJYEPFRUAFBPLSVYQQXICBQOEDZEHJDHMBWZWLPHDLMZFQRSZZQXFZLDGIYFMKRYC");
    msg.lat = 0.655222448871344;
    msg.lon = 0.15297449380632644;
    msg.depth = 0.8412109779045744;
    msg.query_channel = 139U;
    msg.reply_channel = 92U;
    msg.transponder_delay = 65U;

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
    msg.setTimeStamp(0.6274588264400153);
    msg.setSource(25904U);
    msg.setSourceEntity(251U);
    msg.setDestination(16644U);
    msg.setDestinationEntity(165U);
    msg.op = 29U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QSSAUQQOMVTZKFTLHUFDUWWJTNPKLVARDEVMEMUCRGSEFCZTOHRCAYYTYJYNMNQVBLPVKQTBSHLUBEGIDOAYZFUZUNDNYUMKPFXHYXHCAWIVINGFROZQBPOUHIEBZTLXFRWSLSRYWDHMLKIWBPZVEOSWPVNCLQPHFXAOUCKTGPOYGBDHSCSNRVRQZGANDTEBFMPKAKHKELIDIXCDYTFCKGNSCWJLJGPEZ");
    tmp_msg_0.lat = 0.5804999688057336;
    tmp_msg_0.lon = 0.7597433485743947;
    tmp_msg_0.depth = 0.3929013821952597;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 197U;
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
    msg.setTimeStamp(0.9652266420768584);
    msg.setSource(64264U);
    msg.setSourceEntity(229U);
    msg.setDestination(97U);
    msg.setDestinationEntity(19U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HUGPIGKVZWZCBHSGZMJYMJHQPLZWTRJBIXNYLAKQRFDIBWZNESTSJQDFOHGTOUE");
    tmp_msg_0.lat = 0.9593158228107197;
    tmp_msg_0.lon = 0.7796206842122146;
    tmp_msg_0.depth = 0.7454890637716588;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 241U;
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
    msg.setTimeStamp(0.27924030672043043);
    msg.setSource(37693U);
    msg.setSourceEntity(21U);
    msg.setDestination(12399U);
    msg.setDestinationEntity(142U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.2830419487228796);
    msg.setSource(48976U);
    msg.setSourceEntity(46U);
    msg.setDestination(17021U);
    msg.setDestinationEntity(143U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("APGOWQEMENXWBHMFOEYCBLU");
    tmp_msg_0.value.assign("UKTPGWZDQNHGELVVQTOIDTNTRVLUMOCQYHLAEJXPFPJYZKWAOYFVMSXQWIMKSETPDQUZMONNANNAWLTWFYDXACXCQYFKSBOX");
    tmp_msg_0.type = 154U;
    tmp_msg_0.access = 135U;
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
    msg.setTimeStamp(0.9266983355419068);
    msg.setSource(63537U);
    msg.setSourceEntity(87U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(49U);
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 235U;
    tmp_msg_0.period = 1297285004U;
    tmp_msg_0.duty_cycle = 1486511824U;
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
    msg.setTimeStamp(0.6210651421848487);
    msg.setSource(3308U);
    msg.setSourceEntity(171U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(149U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 49429U;
    tmp_msg_0.ttl = 5159U;
    tmp_msg_0.destination.assign("GIUPAPELGJJOSIDLXGOIEUOGAXDGRIJDFVPHJUCWMLXZRIWKPINYFTTLVTBHGWXHVBKRDWKZDPJQMCHGSEMVSXGKWUUANCBNLYBXZMQNNBWYFYCCASUSRILRWO");
    const signed char tmp_tmp_msg_0_0[] = {-94, 122, 26, 3, 42, 125, -56, 25, 33, -102, 47, 32, -15, -92, 35, 53, 39, -13, -127, -28, -117, 24, -19, 45, 83, -93, 16, -67, 28, 111, -46, 13, 73, 22, 8, 4, -41, -105, -32, -122, 71, 106, 125, 109, -3, -34, 105, -7, 21, -121, 54, 72, 95, 113, 60, -72, 30, -93, -54, 54, -46, -101, -49, -18, -83, -31, -96, 73, -59, 22, -66, 25, -64, -6, 35, -112, -116, -41, 63, 22, -24, 95, 83, -109, -44, 88, -114, 100, 33, -109, 64, -72, 62, -15, 117, -43, -16, 54, 121, -87, -4, -42, 51, 32, 109, -58, -78, -9, 71, 100, 91, -124, -71, -4, 10, -20, -104, -21, -67, -97, 95, 28, -48, 5, 102, 35, -44, 119, -51, -98, 7, 77, 74, -64};
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.8924662462825697);
    msg.setSource(60649U);
    msg.setSourceEntity(235U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.197709890987963;
    msg.lon = 0.9228718358449359;
    msg.depth = 0.6411063861908405;
    msg.sentence.assign("RDVSXHTEULHRDARTHTGOSALGCXOXPCNDNZNQZFLTNEEOWXPZLPZYBWJOCKFDKFKFSWOWGLXABVQVICLN");
    msg.txtime = 0.30056795472897524;
    msg.modem_type.assign("WXQGOSTMSEENUSXRKBJTMSMIVXEHCMURKOIFGNFRRCVKZXSZTOOHDJWUBJRUTATJSNPVIDWUNBTYPBVFOXDSJWUARKZYKSCPQOCXQQXNPJTFLXYRPHKHOVGWVDDUWVDKDKVIPEGOHYZMLAWN");
    msg.sys_src.assign("ZDIJTGKTDSDSTXFPMTOKLWGHQCMWPZRRGBMPNERJ");
    msg.seq = 56747U;
    msg.sys_dst.assign("EIDNWNVKZNJYGKJLHTHCVECZAUJBJMQUXKLXFBTOQIRNABGSWFIKGZCZIAAAGEBDJPW");
    msg.flags = 34U;
    const signed char tmp_msg_0[] = {124, 120, 90, 72, -99, -79, -96, 61, -70, 56, 64, 35, -32, 95, 20, 123, 103, 108, 53, -22, -95, -25, -29, -13, -31, -24, -121, -41, -33, -85, 15, 97, -124, -30, -97, 5, 126, 44, -21, -91, -21, -97, 116, 79, 61, -71, 1, -36, -120, -65, 42, 92, 96, -6, 67, 33, 57, -5, -97, -30, 54, -23, 6, -33, 48, -94, 74, 27, 77, -49, -76, -90, -112, 121, -128, 91, 39, -112, 48, -103, 83, -75, -79, 28, 60, -26, -93, -81, 100, 50, -128, 108, 3, -66, -125, 74, 68, 113, 121, 88, 117, 99, 15, 96, 69, 13, -74, 41, 34, -47, -122, -85, -87, -111, -125, -74, -51, -91, 33, -55, 111, 104, -80, 2, 44, 126, -81, 52, 8, -33, -51, 60, 123, 42, -16, -81, -114, -18, -9, 52, -79, -125, -105, -104, -86, -42, 69, -53, -7, -102, -29, 6, 69, -79, 32, -101, -124, -65, -119, 9, 32, 102, 36, 49, -109, 82, -41, -115, 90, -113, -86, 5, 100, 44, -84, -103, -70, -90, 95, -90, -48, -117, 25, -112, 25, -29, -20, 15, -29, -55, 103, -124, 51};
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
    msg.setTimeStamp(0.20474562872507662);
    msg.setSource(23027U);
    msg.setSourceEntity(244U);
    msg.setDestination(59179U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.7090544090130493;
    msg.lon = 0.33293417103791545;
    msg.depth = 0.82503869895185;
    msg.sentence.assign("JSWKJVUMZXCAIBUADPORNVUKJQLANFDDLWAKFKWTTCBMVVOIRZWCOKZULRMCOUTYOURMWCDHGXDYDITEVIEPMZRNJRGFFPOKIWTLSLGFQTEIEZPVWNLYNBNZEJRTCWMFOOAUPMYJTFPNCYGLSHHASDZTXQSWEWQFQEDK");
    msg.txtime = 0.713232421764266;
    msg.modem_type.assign("SHTERTLNVLNICABTMVSJDXGHSWYYEKYYUEUFUSLJHGFERGCVWZ");
    msg.sys_src.assign("SEALJGSEDVXLLXWEXKFIVPW");
    msg.seq = 13733U;
    msg.sys_dst.assign("GZICZVBJXWROBQOYQLQVQUXFRSLJGDIKAAGIMEJBYPEXPSHMOSUSLGNUODFMEZIQSFLEKXSESAZZKVPMMYFIRWMJHKDLIZOTUBVYBC");
    msg.flags = 12U;
    const signed char tmp_msg_0[] = {20, 66, 18, 81, -35, 7, -92, -56, 88, -93, -110, -61, -87, -70, 39, -57, -82, 17, -44, 43, 16, -61, 112, 95, 35, 112, -102, -85, -17, 55, 78, -18, -107, 77, 23, 67, 80, -8, 34, 22, 46, -125, -50, 116, 79, -6, 57, -95, -73};
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
    msg.setTimeStamp(0.20253594816401688);
    msg.setSource(63859U);
    msg.setSourceEntity(108U);
    msg.setDestination(41243U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.6896834443771999;
    msg.lon = 0.15514787963537602;
    msg.depth = 0.008531433122213827;
    msg.sentence.assign("XSWVPWIYHGHDNZMHACYERJWXTKZ");
    msg.txtime = 0.19655383901371548;
    msg.modem_type.assign("FTWZQQJISKGVBJKYBLWPPCEIMZVBEMBMHKNYCTI");
    msg.sys_src.assign("ZFGLMMXPMFBEPVOHVOWHISDQOJDWLVRNXIPHSMZRAPVRHDKVQLVZIHBMSNFJYXCAKAPAEJELCKNNTHAKSGUUZCDYXQQZHUMZKIDXUBINCLVZUBGLLUE");
    msg.seq = 34567U;
    msg.sys_dst.assign("SFPCRYZTRJIGPLTTOTFJFRNUPKOBGNNCSELHUZQYDCOMPXDDWZUUNEREMJIMBZKMPASVTVWKCS");
    msg.flags = 3U;
    const signed char tmp_msg_0[] = {-74, -66, -37, 72, 99, -118, -122, -80, -126, 23, -33, -60, 7, 83, -51, 79, 100, -120};
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
    msg.setTimeStamp(0.6671583699349275);
    msg.setSource(48646U);
    msg.setSourceEntity(248U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(46U);
    msg.op = 93U;
    msg.system.assign("HXXEHQBDXBVAISKYHFWITPZMPTPBUJZAKRBJXGZMHUOMPNTSLSKEQMZYYOCCUMVIERUDQQINGTVQLIABACJTALQXIQTOJOHKSCNEMZWSIRVMIZBXOAJOOEECZGASPGLRDEGQNFVYRRTEPFKJLKGMWSZQWNWXSYKUDFFJVVVBNIRFLXYLGKVBVCZPBYWHFNFEJHDNCCXMODHDCPKRLFHDCQGLXTIJJGOYDMZTUUAHLWRYYAOPPNRWUBWGWAS");
    msg.range = 0.32203309312382933;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.9742879300562602);
    msg.setSource(20964U);
    msg.setSourceEntity(168U);
    msg.setDestination(61820U);
    msg.setDestinationEntity(138U);
    msg.op = 182U;
    msg.system.assign("EXZXCTDZZSHPSMTMPEAGHLDSIQXQAHVLFGFHDQWJUOEAZIZJKNCHTRSOJWQNSKYEQCESHGBNDQMPQCCRKGIDNTODKWNXRWZGOTIKPTUYELYRNKYVIZAAWUBGUBTLBJZJFFYPYJPGIKFSMRPUTA");
    msg.range = 0.6356851568143802;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6250039154744368;
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
    msg.setTimeStamp(0.2911837012484483);
    msg.setSource(44906U);
    msg.setSourceEntity(101U);
    msg.setDestination(10855U);
    msg.setDestinationEntity(196U);
    msg.op = 143U;
    msg.system.assign("TKDFKBXXWCSQSHRRHNUVIXFEFLPLGFOPFEOPEOIKEIIRJSOONKUZMLUKIZSRFREEQBBICUMYVVCNSFIXYBZABEDWSPYBFDYHLTPUXRAQCZMHMVUMWNPKXEPMHJOYCHAHDGLNTMYSAYJOQJYVWVGIZBXLGCAHGOKVUDPJNWVXTAAJUMJBTKBWUTBNNHITDMPDPLCHJNJWALSWZQ");
    msg.range = 0.587825333007787;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 143U;
    tmp_msg_0.zoom = 212U;
    tmp_msg_0.action = 144U;
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
    msg.setTimeStamp(0.8079014964058442);
    msg.setSource(1026U);
    msg.setSourceEntity(76U);
    msg.setDestination(47789U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.7576699287677878);
    msg.setSource(30264U);
    msg.setSourceEntity(134U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.5517055321426902);
    msg.setSource(43097U);
    msg.setSourceEntity(117U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.2645172470588004);
    msg.setSource(20374U);
    msg.setSourceEntity(252U);
    msg.setDestination(23450U);
    msg.setDestinationEntity(154U);
    msg.list.assign("IAZNRCKLQBOZQDXCGPAMYWEROBYZXDPMYYEEUNZGUDDXSVWUULSESTXWVHMJWNVMCKUUOLHMOTCJJUEORTZZLPYSADRSCEBCBPJVLEIUOYTRYSHQGLDSMZZGRPBOXNTRVEULFJANRFPDHHSVXYPMKXFGCWDGRWQGSVHIJRNQS");

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
    msg.setTimeStamp(0.7783593593215472);
    msg.setSource(15515U);
    msg.setSourceEntity(180U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(109U);
    msg.list.assign("APAXACDONELEWVWKSMGVVFKCJXNDFCZINEFJUGJVQPJGKLSQDBPCOJGCDHOWBTYEOIBTNRHHUKHUTYHSMABETKVMHERMGXDXHCCQTTFAJDBGFQWQIRYNWUXS");

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
    msg.setTimeStamp(0.11964876508830624);
    msg.setSource(56791U);
    msg.setSourceEntity(128U);
    msg.setDestination(26915U);
    msg.setDestinationEntity(173U);
    msg.list.assign("GIWYQMEFCOOUGXBYZEDXKIXSUAIVBAIVGHAWHHAMSQAOVLPSELXSTXNWONLVMRHNCZVECOLBEGPJDQWNMDMTIFRQLFCNTPAINQXOTURUZTQSBLOYSUFA");

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
    msg.setTimeStamp(0.8250185408669751);
    msg.setSource(27508U);
    msg.setSourceEntity(145U);
    msg.setDestination(19223U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("KZRVVPGQIPTAWYEXAKWTUUMIYSCOAHIUHKPYSXLVEEGTQQVIGMBLOFGSCQUQMGDOBTACTDYMVOY");
    msg.rssi = 0.8000339034737859;
    msg.integrity = 29701U;

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
    msg.setTimeStamp(0.20514851025245406);
    msg.setSource(47379U);
    msg.setSourceEntity(44U);
    msg.setDestination(7002U);
    msg.setDestinationEntity(86U);
    msg.peer.assign("NDCPCILAKGDYHXOOEGXMZTRAJJLHDDGQBHLRCFIOJUXRZHQDYVGRFNPSPHITWTH");
    msg.rssi = 0.013884535994422409;
    msg.integrity = 45078U;

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
    msg.setTimeStamp(0.7794591026158091);
    msg.setSource(10553U);
    msg.setSourceEntity(80U);
    msg.setDestination(15395U);
    msg.setDestinationEntity(134U);
    msg.peer.assign("PNLGKVDWIIRSZWVTBGUXBPHRRIZTJKXLUPVAYTWPVNORFIULPFNYZVXALCVPNMBHSMAJXQOCRIVQTZATKHRFKDPTMSVFDPGXYYMUCWZWQUYAOTSACSCIGKERYGGGENQUMEHMJJGFCDSVKLHUCSBPLEONFKOHNLYHXDXTOBTEFXKWNQZRYHMZJWJAZZEEDHRWBZOPQUOLSQIQFICKWFOBBYGQQDDACMYB");
    msg.rssi = 0.9099343646258461;
    msg.integrity = 55798U;

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
    msg.setTimeStamp(0.5933803143776611);
    msg.setSource(47530U);
    msg.setSourceEntity(57U);
    msg.setDestination(32363U);
    msg.setDestinationEntity(11U);
    msg.req_id = 20347U;
    msg.destination.assign("LQYIPGDWLMJBIQEUZYYCBAZYWACTILTVDVXQNCSNNKFJWOMMISAJFHEXASHCKLMGNFVQPMFUHVIFGMYKGUIOIAAAIKOSWEJAHTBPCFLDOLPSU");
    msg.timeout = 0.5502846219854949;
    msg.range = 0.2263866059170615;
    msg.type = 77U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.2757372021465603;
    tmp_msg_0.lon = 0.9599714795705515;
    tmp_msg_0.z = 0.5027614203448403;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.5629710511666143;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.abort_z = 0.8078985415578015;
    tmp_msg_0.bearing = 0.1926194545930605;
    tmp_msg_0.glide_slope = 12U;
    tmp_msg_0.glide_slope_alt = 0.4608442690422444;
    tmp_msg_0.custom.assign("PXFAVZVVQSDNHTSZIYRJJYWTDCSKYEWBODFSQELBTGTFNBCWXNLDSUGDQHHHMZHYSUKWURKXKFRGDTXWHKELUOWREKDCPLFDIKORJPFEPTVKLWMQYOUBQOVAZHVBGQZCTRIGHTZEXJQLWUSIMBAGXOPEJYYJOIQSVIO");
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
    msg.setTimeStamp(0.6407816844052617);
    msg.setSource(39108U);
    msg.setSourceEntity(100U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(199U);
    msg.req_id = 36434U;
    msg.destination.assign("IHLSOZWTFOBGPEAPMHBLPKGTXNQJBBPJHTRDLDQUOSWSICLJBMOIHGYLOPSGEFBJYDWHLTLIZXDYVIYXIVTXVQHHUWZMFUTPEAJSNRCCDAKCNTESZVOBBOVYJZNFIAUMCRIEYFGATOWIVVZHVNRQKFDEJRKCRGWDPALKFU");
    msg.timeout = 0.982138688503343;
    msg.range = 0.6330444497737417;
    msg.type = 246U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.28742701779251345;
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
    msg.setTimeStamp(0.20437094386677768);
    msg.setSource(10697U);
    msg.setSourceEntity(127U);
    msg.setDestination(54396U);
    msg.setDestinationEntity(221U);
    msg.req_id = 55636U;
    msg.destination.assign("QEBBXXESCFRQZKDNNOIHSPHBTAEZVUGNPNEXUQMCXKVZEZOHPSSTLOKTSYDBAWQYFIDIJQTKONLFGDUMEQDDSTALPPZMIIYWKYCWUUHVWRLNJGMCFCXBRPDXHZXTACSFPKWFNYTQRGAQIQOOQVJGIJWTYHCNUVOLCIWPKNYZTBSRDJR");
    msg.timeout = 0.8134153596966551;
    msg.range = 0.7860362421013541;
    msg.type = 211U;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.38703753696058973;
    tmp_msg_0.m = 0.5092853509396308;
    tmp_msg_0.n = 0.10598181984598665;
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
    msg.setTimeStamp(0.9732636651485038);
    msg.setSource(5756U);
    msg.setSourceEntity(70U);
    msg.setDestination(3953U);
    msg.setDestinationEntity(211U);
    msg.req_id = 48175U;
    msg.type = 56U;
    msg.status = 111U;
    msg.info.assign("CDKCEBOUZVZDRWNGYDBYQLJVEJVRIKIQCCQWMVLALGOWBUSXNZEEIWGGSHFDKNPBBTRKQHJRNFFQBZPLYVPEHOQZHOQHCUXTSYAIMVAKQFJTWPISWWASGPGNNFAZMXXVGWRCOVBGKVFKLZQZEYLUEMTXAWMRJWHTUUILTSAFMSKAHXIESTFRJDNRSYQMCUYRBNXDC");
    msg.range = 0.8645268340846832;

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
    msg.setTimeStamp(0.09014218369755189);
    msg.setSource(43349U);
    msg.setSourceEntity(204U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(109U);
    msg.req_id = 42879U;
    msg.type = 113U;
    msg.status = 127U;
    msg.info.assign("MGTOHOVVDQGAQPXQJEOAHUTJWLCTGFMGXZSLKPEOFJYJOLIFJNCOBJWDUKVKFQMHDSALQLTWPSNMNMSIWTZUXZVXSFVLXAKZGPORDIWYUKIDBLZRSVHEYUHUFGYHTQ");
    msg.range = 0.036404199178814656;

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
    msg.setTimeStamp(0.4125323838972871);
    msg.setSource(20142U);
    msg.setSourceEntity(139U);
    msg.setDestination(34022U);
    msg.setDestinationEntity(88U);
    msg.req_id = 17220U;
    msg.type = 197U;
    msg.status = 227U;
    msg.info.assign("VLUHRTFJUZZGRSDCUPTSMDBAXXIFJOSPJLEBACHEZCSYQMAKWLHYOWJISMSIGZWRULWWPSEZGKDNCZQENBVNMBAPGRRRTADZJVYJXQMAZFPHGDXHHQGLVKQKSORHFHOVYJLYFQCQYNQLXYBVNGXTUXWFVTRLRJMIYVPHLWACBOTOVKNZIITBAYYICMINXOBXBJMGFADWATTSRITIEFFULUKOENMPEOFNJCKPGHKEOEDPWMUB");
    msg.range = 0.6427156859028643;

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
    msg.setTimeStamp(0.4858285598503538);
    msg.setSource(5912U);
    msg.setSourceEntity(179U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(58U);
    msg.system.assign("CTKVJPJHWTJFMDZKLPYLBUBHGHNXBEEPRDYFQKHNJIAMAAQKTDGNCCIZYLQOOCWDRJOWXIDLXWBPHUSTNCOMGOMBFFIQLUUENKJGFRLMYGALHOPGCTTWMBXOSPZSNSVOAYJWKYXJQNZRAVUFYEXBZGTFPWVKSDTW");
    msg.op = 3U;

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
    msg.setTimeStamp(0.41245371497645844);
    msg.setSource(24050U);
    msg.setSourceEntity(99U);
    msg.setDestination(7843U);
    msg.setDestinationEntity(180U);
    msg.system.assign("XDWWGVTAUQHWIYFFTWLCUOEYEOKFIGZTIJZSPLEXUCNHMVSBMMSKQYVVKVVONLFXDMBYBNVJXIQQUBWTYYXDIAESZRMZKTPBAOCTCDHGYGLEKMGYJKSDJFWGQMOAHPUSBF");
    msg.op = 162U;

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
    msg.setTimeStamp(0.5110447121910725);
    msg.setSource(28705U);
    msg.setSourceEntity(63U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(29U);
    msg.system.assign("BVWZOZDGFBAEEHKQUVQWISQLUIJUVMOMPPWMTHOP");
    msg.op = 208U;

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
    msg.setTimeStamp(0.24747309892429237);
    msg.setSource(8153U);
    msg.setSourceEntity(232U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(155U);
    msg.value = 5259;

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
    msg.setTimeStamp(0.9046805773063802);
    msg.setSource(38896U);
    msg.setSourceEntity(153U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(198U);
    msg.value = -18576;

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
    msg.setTimeStamp(0.18901527938756268);
    msg.setSource(17851U);
    msg.setSourceEntity(164U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(194U);
    msg.value = 25219;

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
    msg.setTimeStamp(0.5875722173005096);
    msg.setSource(56293U);
    msg.setSourceEntity(171U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9319251851982264;

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
    msg.setTimeStamp(0.1938115004815978);
    msg.setSource(42774U);
    msg.setSourceEntity(66U);
    msg.setDestination(36599U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9747314827102322;

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
    msg.setTimeStamp(0.7797603850008795);
    msg.setSource(19260U);
    msg.setSourceEntity(238U);
    msg.setDestination(42525U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5348615428573774;

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
    msg.setTimeStamp(0.4140712204395208);
    msg.setSource(33562U);
    msg.setSourceEntity(36U);
    msg.setDestination(63279U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9456668325628134;

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
    msg.setTimeStamp(0.6645953069470556);
    msg.setSource(25148U);
    msg.setSourceEntity(120U);
    msg.setDestination(22538U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7550495550598793;

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
    msg.setTimeStamp(0.929975740265504);
    msg.setSource(12963U);
    msg.setSourceEntity(90U);
    msg.setDestination(56222U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9551882907007857;

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
    msg.setTimeStamp(0.8473571276169608);
    msg.setSource(8405U);
    msg.setSourceEntity(145U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(163U);
    msg.validity = 60840U;
    msg.type = 254U;
    msg.utc_year = 14490U;
    msg.utc_month = 191U;
    msg.utc_day = 51U;
    msg.utc_time = 0.18353504629043127;
    msg.lat = 0.25784798878664883;
    msg.lon = 0.04837117050005724;
    msg.height = 0.35500817537513585;
    msg.satellites = 225U;
    msg.cog = 0.9430548272039054;
    msg.sog = 0.45004843690781404;
    msg.hdop = 0.6800886118912366;
    msg.vdop = 0.38113356874170956;
    msg.hacc = 0.9573807904058659;
    msg.vacc = 0.8985520785625903;

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
    msg.setTimeStamp(0.34241878082918364);
    msg.setSource(60261U);
    msg.setSourceEntity(31U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(33U);
    msg.validity = 37358U;
    msg.type = 74U;
    msg.utc_year = 33515U;
    msg.utc_month = 78U;
    msg.utc_day = 1U;
    msg.utc_time = 0.5756980152901283;
    msg.lat = 0.04245735553118146;
    msg.lon = 0.341505163588701;
    msg.height = 0.16124307389227088;
    msg.satellites = 45U;
    msg.cog = 0.3437086294596239;
    msg.sog = 0.5893691440782529;
    msg.hdop = 0.7007702123707428;
    msg.vdop = 0.0424112694276888;
    msg.hacc = 0.715470223752872;
    msg.vacc = 0.6164182620098347;

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
    msg.setTimeStamp(6.336773126924822e-05);
    msg.setSource(37223U);
    msg.setSourceEntity(32U);
    msg.setDestination(35134U);
    msg.setDestinationEntity(161U);
    msg.validity = 60089U;
    msg.type = 72U;
    msg.utc_year = 51594U;
    msg.utc_month = 135U;
    msg.utc_day = 248U;
    msg.utc_time = 0.16080939392498106;
    msg.lat = 0.026813044456129753;
    msg.lon = 0.7505022100667688;
    msg.height = 0.9296299198203133;
    msg.satellites = 223U;
    msg.cog = 0.9106409910662308;
    msg.sog = 0.20385121030129694;
    msg.hdop = 0.030807532152022143;
    msg.vdop = 0.17966687952350913;
    msg.hacc = 0.05568227588145802;
    msg.vacc = 0.6345396849487955;

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
    msg.setTimeStamp(0.6274824245902546);
    msg.setSource(8475U);
    msg.setSourceEntity(2U);
    msg.setDestination(46045U);
    msg.setDestinationEntity(34U);
    msg.time = 0.7946629443394158;
    msg.phi = 0.7143284763424294;
    msg.theta = 0.7350788668134;
    msg.psi = 0.054764389362382926;
    msg.psi_magnetic = 0.47720297390480293;

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
    msg.setTimeStamp(0.404750920548246);
    msg.setSource(62632U);
    msg.setSourceEntity(116U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(143U);
    msg.time = 0.7102777921860254;
    msg.phi = 0.3979792317822173;
    msg.theta = 0.3313619670046607;
    msg.psi = 0.2752652555302376;
    msg.psi_magnetic = 0.5021341631883613;

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
    msg.setTimeStamp(0.32805725024138976);
    msg.setSource(43431U);
    msg.setSourceEntity(113U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(240U);
    msg.time = 0.2500122303717781;
    msg.phi = 0.8853652982498247;
    msg.theta = 0.7607884440296978;
    msg.psi = 0.3660011103599148;
    msg.psi_magnetic = 0.6230741032937192;

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
    msg.setTimeStamp(0.3815035835700751);
    msg.setSource(34213U);
    msg.setSourceEntity(31U);
    msg.setDestination(23096U);
    msg.setDestinationEntity(149U);
    msg.time = 0.5439957029579472;
    msg.x = 0.0757758840140802;
    msg.y = 0.4002801262231883;
    msg.z = 0.12366098037504214;
    msg.timestep = 0.3681027558357408;

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
    msg.setTimeStamp(0.9804698700584564);
    msg.setSource(41727U);
    msg.setSourceEntity(200U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(81U);
    msg.time = 0.09553658313417746;
    msg.x = 0.3699757041946975;
    msg.y = 0.6323621968623347;
    msg.z = 0.9801053119319165;
    msg.timestep = 0.2452546842762353;

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
    msg.setTimeStamp(0.8031660028811765);
    msg.setSource(26269U);
    msg.setSourceEntity(228U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(57U);
    msg.time = 0.8765886351853008;
    msg.x = 0.3439113707877516;
    msg.y = 0.7535116526855471;
    msg.z = 0.8812197013308845;
    msg.timestep = 0.5831450806772797;

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
    msg.setTimeStamp(0.5599121866351205);
    msg.setSource(23727U);
    msg.setSourceEntity(248U);
    msg.setDestination(2380U);
    msg.setDestinationEntity(139U);
    msg.time = 0.4946457655157911;
    msg.x = 0.9334453829640391;
    msg.y = 0.8729394880608317;
    msg.z = 0.5775554500529223;

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
    msg.setTimeStamp(0.8668912551122754);
    msg.setSource(1307U);
    msg.setSourceEntity(131U);
    msg.setDestination(248U);
    msg.setDestinationEntity(188U);
    msg.time = 0.4035488069682973;
    msg.x = 0.14746602641308038;
    msg.y = 0.9410481234171286;
    msg.z = 0.5923240487042237;

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
    msg.setTimeStamp(0.49621192716259144);
    msg.setSource(35974U);
    msg.setSourceEntity(173U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(0U);
    msg.time = 0.5263222117655474;
    msg.x = 0.8104292800798291;
    msg.y = 0.8149521219095625;
    msg.z = 0.2568891501833366;

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
    msg.setTimeStamp(0.5695757243327625);
    msg.setSource(31676U);
    msg.setSourceEntity(149U);
    msg.setDestination(27016U);
    msg.setDestinationEntity(29U);
    msg.time = 0.9689857164714575;
    msg.x = 0.010730380846822873;
    msg.y = 0.47391701365937744;
    msg.z = 0.15408346673228746;

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
    msg.setTimeStamp(0.5125042583361606);
    msg.setSource(32636U);
    msg.setSourceEntity(51U);
    msg.setDestination(1210U);
    msg.setDestinationEntity(108U);
    msg.time = 0.5581472935614834;
    msg.x = 0.6952122326133684;
    msg.y = 0.8197998496065593;
    msg.z = 0.5319147712424368;

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
    msg.setTimeStamp(0.040346054448375135);
    msg.setSource(61398U);
    msg.setSourceEntity(216U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(1U);
    msg.time = 0.6841351351345201;
    msg.x = 0.6046271521856602;
    msg.y = 0.14272013218828472;
    msg.z = 0.4904026371594843;

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
    msg.setTimeStamp(0.7749183966634359);
    msg.setSource(36622U);
    msg.setSourceEntity(227U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(101U);
    msg.time = 0.5987342377771128;
    msg.x = 0.53093989246982;
    msg.y = 0.7964294479435868;
    msg.z = 0.2656167678595973;

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
    msg.setTimeStamp(0.9873640138037648);
    msg.setSource(20786U);
    msg.setSourceEntity(231U);
    msg.setDestination(26623U);
    msg.setDestinationEntity(70U);
    msg.time = 0.09750024021545556;
    msg.x = 0.2330613661028138;
    msg.y = 0.03083025166873732;
    msg.z = 0.7544987004541233;

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
    msg.setTimeStamp(0.043047591726708356);
    msg.setSource(11303U);
    msg.setSourceEntity(218U);
    msg.setDestination(37U);
    msg.setDestinationEntity(137U);
    msg.time = 0.4819203789743354;
    msg.x = 0.15638069992961223;
    msg.y = 0.5040549326733059;
    msg.z = 0.4968770654229695;

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
    msg.setTimeStamp(0.08250934311811153);
    msg.setSource(51140U);
    msg.setSourceEntity(71U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(94U);
    msg.validity = 131U;
    msg.x = 0.3817935706155835;
    msg.y = 0.7532767043654215;
    msg.z = 0.8779985830183953;

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
    msg.setTimeStamp(0.1395166177623013);
    msg.setSource(32456U);
    msg.setSourceEntity(107U);
    msg.setDestination(30529U);
    msg.setDestinationEntity(177U);
    msg.validity = 95U;
    msg.x = 0.9389437504210298;
    msg.y = 0.282146486436885;
    msg.z = 0.6587267518475495;

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
    msg.setTimeStamp(0.44933618175767354);
    msg.setSource(10120U);
    msg.setSourceEntity(60U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(54U);
    msg.validity = 234U;
    msg.x = 0.7636181490212446;
    msg.y = 0.480837803090582;
    msg.z = 0.5398266111459937;

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
    msg.setTimeStamp(0.2745334722221302);
    msg.setSource(28730U);
    msg.setSourceEntity(78U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(209U);
    msg.validity = 192U;
    msg.x = 0.6519237194640143;
    msg.y = 0.5427593187228887;
    msg.z = 0.8407771553358054;

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
    msg.setTimeStamp(0.1707171204628385);
    msg.setSource(52179U);
    msg.setSourceEntity(64U);
    msg.setDestination(8008U);
    msg.setDestinationEntity(243U);
    msg.validity = 18U;
    msg.x = 0.9426127654663905;
    msg.y = 0.03763280716514805;
    msg.z = 0.05119558163433324;

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
    msg.setTimeStamp(0.43169456063814504);
    msg.setSource(3420U);
    msg.setSourceEntity(50U);
    msg.setDestination(12521U);
    msg.setDestinationEntity(156U);
    msg.validity = 18U;
    msg.x = 0.3812018448216973;
    msg.y = 0.8500618437590086;
    msg.z = 0.15550860642997189;

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
    msg.setTimeStamp(0.5761026136093922);
    msg.setSource(565U);
    msg.setSourceEntity(104U);
    msg.setDestination(5952U);
    msg.setDestinationEntity(168U);
    msg.time = 0.006337744386914035;
    msg.x = 0.2659204434328676;
    msg.y = 0.6287937781547848;
    msg.z = 0.6807841259585357;

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
    msg.setTimeStamp(0.8720404107381827);
    msg.setSource(34527U);
    msg.setSourceEntity(70U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(224U);
    msg.time = 0.9050455159866102;
    msg.x = 0.7900421532007835;
    msg.y = 0.8206627693866279;
    msg.z = 0.7416929482461836;

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
    msg.setTimeStamp(0.08961910972912779);
    msg.setSource(16944U);
    msg.setSourceEntity(113U);
    msg.setDestination(64016U);
    msg.setDestinationEntity(207U);
    msg.time = 0.09819555587006956;
    msg.x = 0.30766244003873977;
    msg.y = 0.7961684682124021;
    msg.z = 0.12805675365879177;

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
    msg.setTimeStamp(0.10695197714423899);
    msg.setSource(47908U);
    msg.setSourceEntity(65U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(104U);
    msg.validity = 7U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.20443508582227776;
    tmp_msg_0.beam_height = 0.5382763502471772;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.07064003293287724;

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
    msg.setTimeStamp(0.8775555752479839);
    msg.setSource(47382U);
    msg.setSourceEntity(230U);
    msg.setDestination(26211U);
    msg.setDestinationEntity(109U);
    msg.validity = 193U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5306431853309935;
    tmp_msg_0.y = 0.1701244522940879;
    tmp_msg_0.z = 0.9360078525873066;
    tmp_msg_0.phi = 0.6193321074349535;
    tmp_msg_0.theta = 0.12492974096831966;
    tmp_msg_0.psi = 0.12275998194889892;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.027506536524234404;
    tmp_msg_1.beam_height = 0.20396608963934781;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8908210538799491;

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
    msg.setTimeStamp(0.618338304513486);
    msg.setSource(12635U);
    msg.setSourceEntity(120U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(49U);
    msg.validity = 230U;
    msg.value = 0.8037799488242487;

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
    msg.setTimeStamp(0.29177329016902);
    msg.setSource(45667U);
    msg.setSourceEntity(219U);
    msg.setDestination(10300U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4304126577034445;

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
    msg.setTimeStamp(0.45479168567629047);
    msg.setSource(56955U);
    msg.setSourceEntity(62U);
    msg.setDestination(52711U);
    msg.setDestinationEntity(128U);
    msg.value = 0.14682830121652635;

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
    msg.setTimeStamp(0.9889653890214738);
    msg.setSource(14283U);
    msg.setSourceEntity(68U);
    msg.setDestination(43043U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8109764934895524;

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
    msg.setTimeStamp(0.8317529575296823);
    msg.setSource(35247U);
    msg.setSourceEntity(9U);
    msg.setDestination(8181U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7025240380865084;

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
    msg.setTimeStamp(0.935405628937179);
    msg.setSource(1421U);
    msg.setSourceEntity(47U);
    msg.setDestination(39933U);
    msg.setDestinationEntity(50U);
    msg.value = 0.7942963818234315;

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
    msg.setTimeStamp(0.34421638500929497);
    msg.setSource(163U);
    msg.setSourceEntity(155U);
    msg.setDestination(9723U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9519318637988375;

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
    msg.setTimeStamp(0.6772216270239376);
    msg.setSource(36880U);
    msg.setSourceEntity(166U);
    msg.setDestination(25328U);
    msg.setDestinationEntity(54U);
    msg.value = 0.782240574151257;

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
    msg.setTimeStamp(0.9133882423367444);
    msg.setSource(9628U);
    msg.setSourceEntity(23U);
    msg.setDestination(43896U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3333056197332539;

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
    msg.setTimeStamp(0.06373083651147937);
    msg.setSource(55284U);
    msg.setSourceEntity(225U);
    msg.setDestination(47151U);
    msg.setDestinationEntity(115U);
    msg.value = 0.943360088044924;

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
    msg.setTimeStamp(0.004957850089066906);
    msg.setSource(31682U);
    msg.setSourceEntity(35U);
    msg.setDestination(31099U);
    msg.setDestinationEntity(107U);
    msg.value = 0.7096158182487335;

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
    msg.setTimeStamp(0.40381059287376775);
    msg.setSource(63779U);
    msg.setSourceEntity(32U);
    msg.setDestination(57560U);
    msg.setDestinationEntity(241U);
    msg.value = 0.47523101796804623;

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
    msg.setTimeStamp(0.5792174882896031);
    msg.setSource(45764U);
    msg.setSourceEntity(155U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(180U);
    msg.value = 0.06930019858791014;

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
    msg.setTimeStamp(0.22134817029467024);
    msg.setSource(34148U);
    msg.setSourceEntity(175U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(25U);
    msg.value = 0.3423832351168954;

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
    msg.setTimeStamp(0.09611953012160557);
    msg.setSource(16493U);
    msg.setSourceEntity(246U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6254070213779368;

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
    msg.setTimeStamp(0.8474980570683297);
    msg.setSource(53941U);
    msg.setSourceEntity(180U);
    msg.setDestination(37314U);
    msg.setDestinationEntity(242U);
    msg.value = 0.2639856038562962;

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
    msg.setTimeStamp(0.5118737917380201);
    msg.setSource(15018U);
    msg.setSourceEntity(169U);
    msg.setDestination(32727U);
    msg.setDestinationEntity(14U);
    msg.value = 0.32237261671275097;

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
    msg.setTimeStamp(0.1747059700745679);
    msg.setSource(41178U);
    msg.setSourceEntity(75U);
    msg.setDestination(10171U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9451434884309551;

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
    msg.setTimeStamp(0.2817938755194668);
    msg.setSource(46724U);
    msg.setSourceEntity(219U);
    msg.setDestination(21835U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3298397911578942;

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
    msg.setTimeStamp(0.5028831642681323);
    msg.setSource(42803U);
    msg.setSourceEntity(120U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6603130948297358;

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
    msg.setTimeStamp(0.39759864884919927);
    msg.setSource(26669U);
    msg.setSourceEntity(187U);
    msg.setDestination(55983U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5509788287895354;

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
    msg.setTimeStamp(0.14054153670383096);
    msg.setSource(34907U);
    msg.setSourceEntity(183U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(85U);
    msg.value = 0.9461601812581724;

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
    msg.setTimeStamp(0.658102340551589);
    msg.setSource(63456U);
    msg.setSourceEntity(57U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4474507548578489;

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
    msg.setTimeStamp(0.5792443271654317);
    msg.setSource(31875U);
    msg.setSourceEntity(213U);
    msg.setDestination(59046U);
    msg.setDestinationEntity(64U);
    msg.value = 0.7542662219933293;

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
    msg.setTimeStamp(0.3070233725602778);
    msg.setSource(17580U);
    msg.setSourceEntity(160U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5480831289999788;

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
    msg.setTimeStamp(0.18201884648384903);
    msg.setSource(10451U);
    msg.setSourceEntity(144U);
    msg.setDestination(8025U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.8096187480060851;
    msg.speed = 0.6854474003422822;
    msg.turbulence = 0.5417819386551488;

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
    msg.setTimeStamp(0.8271279322361539);
    msg.setSource(40051U);
    msg.setSourceEntity(96U);
    msg.setDestination(26462U);
    msg.setDestinationEntity(180U);
    msg.direction = 0.6681590697600559;
    msg.speed = 0.3246306122421392;
    msg.turbulence = 0.27800498484956815;

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
    msg.setTimeStamp(0.7330088400211827);
    msg.setSource(52716U);
    msg.setSourceEntity(68U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.9441574917953234;
    msg.speed = 0.4292906099523198;
    msg.turbulence = 0.14185034742269054;

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
    msg.setTimeStamp(0.21279977703312347);
    msg.setSource(58406U);
    msg.setSourceEntity(49U);
    msg.setDestination(7211U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5648674382246343;

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
    msg.setTimeStamp(0.012194787021897358);
    msg.setSource(49795U);
    msg.setSourceEntity(49U);
    msg.setDestination(731U);
    msg.setDestinationEntity(84U);
    msg.value = 0.48043801861291946;

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
    msg.setTimeStamp(0.5315448747893601);
    msg.setSource(25912U);
    msg.setSourceEntity(84U);
    msg.setDestination(40875U);
    msg.setDestinationEntity(166U);
    msg.value = 0.04087163740413191;

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
    msg.setTimeStamp(0.47876496516739075);
    msg.setSource(24623U);
    msg.setSourceEntity(163U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(195U);
    msg.value.assign("DMFXOODOJSZGQODFTEIMNTVAHFWWFZZYPLBSNUZUPFUREMIMJUXNQSJYKTVYPGAZQJLVHODVKZPENJRHQIHNCSIQHABHDFGKGMRGAIYNDRRLHCEMSXFPFOJXUCUCWMOGYZAICAFSGEHCTJRGPXJLXPMWNOCCBAWILVBBEBQDDHDQLIWUMKWTSTXOZZNTBPEQXGYJAKRJKGYTCL");

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
    msg.setTimeStamp(0.40162376523549614);
    msg.setSource(25159U);
    msg.setSourceEntity(9U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(199U);
    msg.value.assign("BKNBWPSOQDZVBGXSIDJZUKDEYXKXDGPONGFIUPAYUMMXRSAEWTUPVPLWCBCHMHSATJENJANWIEZFRCCSZFQMAAJWAWOJDFMZVHVQTIBKQFVGZHKGNTQZEICATYCSNHXHVPQEPLXUIRUWNWRYIXYKJUUODQRQZMFKHSXOBRABBFNQLVDPCMSKWTFYNMSJEOLHXBWCOETBYQPMLGPXYJTHGELNREDATDVCLRDJJTIVLGYHGZF");

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
    msg.setTimeStamp(0.024883579660468724);
    msg.setSource(62426U);
    msg.setSourceEntity(236U);
    msg.setDestination(55160U);
    msg.setDestinationEntity(175U);
    msg.value.assign("BBNDKRGTAHXZQCCFAIHYCUEZBNCTKJIEQZXJINNKXLOTDFYB");

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
    msg.setTimeStamp(0.9726926918159401);
    msg.setSource(42767U);
    msg.setSourceEntity(154U);
    msg.setDestination(49886U);
    msg.setDestinationEntity(67U);
    const signed char tmp_msg_0[] = {-76, -125, 58, 33, -1, 12, 95, -125, 125, 77, -104, -69, -60, -14, 14, -99, -110, -79, 118, 106, -113, 89, -84, -100, -28, 17, -100, -33, -66, -90, -93, 20, 77, -55, -95, -82, 111, 71, -72, -35, -122, 53, 33, -125, -100, -96, -26, 40, 76, 8, 54, 32, -33, -113, 38, -121, 125, 98, 90, -97, -97, 118, -91, 119, -90, 20, -80, 84, -107, -14, 69, -107, -35, -76, -37, -114, -86, -70, -64, 107, 30, 34, -67, 87, 81, 112, 69, -2, -79, -8, -100, -25, -74, -36, -97, 107, 2, 122, -121, -125, -68, -34, 97, -67, 114, -100, 53, 21, -32, 31, 2, -121, 76, 126, 41, -31, 56, -22, -104, -40, -120, 36, -20, -117, -58, -105, -82, 5, 10, -47, -84, 56, 75, 2, 95, 44, -77};
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
    msg.setTimeStamp(0.23352524628882398);
    msg.setSource(50475U);
    msg.setSourceEntity(203U);
    msg.setDestination(12341U);
    msg.setDestinationEntity(235U);
    const signed char tmp_msg_0[] = {26, 75, 8, -96, -21, -44, 37, 73, 38, -70, 99, 65, -19, 13, -90, 32, 117, -56, 44, 24, 1, 72, 121, 26, 9, -106, -128, -32, 79, -77, 0, 120, -107, 27, -121, 57, -34, -15, -63, -96, -4, 38, 35, 50, -36, 23, 40, -55, -105, 98, -24, 43, 97, 118, -9, -40, -78, 111, 84, -96, 29, -4, 53, -66, 93, 46, 114, -90, 49, 63, 19, 52, 80, 14, -61, -5, 113, 92, -28, 51, -101, 59, -94, 71, -104, -54, -124, -49, -126, -128, 46, -79, 64, 105, -74, 104, -41, -54, -24, -126, -110, 64, -12, 48, 80, 64, -125, -102, 55, -96, 126, -2, 28, -9, -82, -5, -1, -101, 102, -66, 85, -60, 106, 100, -63, -28, 21, -24, -60, -68, -30, 83, -49, -85, 28, -25, 77, -44, 107, -89, -94, 3, 35, -58, 79, -26, 93, 96, -112, 114, -46, -47, 2, 117, -113, 61, 108, -105, -18, -86, 24, 93, 12, -79, -123, 111, -123, 103, -7, -62, 57, -128};
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
    msg.setTimeStamp(0.2633530852368594);
    msg.setSource(45808U);
    msg.setSourceEntity(102U);
    msg.setDestination(53809U);
    msg.setDestinationEntity(59U);
    const signed char tmp_msg_0[] = {84, 57, -85, 49, 10, -96, -114, -11, 125, 53, -85, -60, -56, -122, -109, 67, 49, -114, -41, -91, 111, 67, 125, 18, -56, -11, 54, 32, 5, 83, -71, -12, 117, 37, -74, -21, 14, 45, 30, 43, 22, -40, 12, 56, -109, -70, -121, -111, 75, -128, -11, 86, -3, 40, -87, 81, 60, 57, 48, -12, 40, 116, 37, -18, -54, 99, 73, 65, 70, -7, 42, -124, 47, 46, 80, -127, 76, 30, -12, 92, 16, 66, -12, 52, -61, 71, 20, -25, -25, -6, -6, 29, -120, 121, 120, -15, -123, 112, -8, -28, 84, -87, 40, 69, -83, -67};
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
    msg.setTimeStamp(0.2975781062445151);
    msg.setSource(4630U);
    msg.setSourceEntity(96U);
    msg.setDestination(65397U);
    msg.setDestinationEntity(166U);
    msg.value = 0.7871709939933822;

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
    msg.setTimeStamp(0.4785762594722822);
    msg.setSource(3332U);
    msg.setSourceEntity(147U);
    msg.setDestination(52919U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8238085676412986;

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
    msg.setTimeStamp(0.17968167498826848);
    msg.setSource(43862U);
    msg.setSourceEntity(191U);
    msg.setDestination(3604U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6297620613110367;

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
    msg.setTimeStamp(0.014788828780231134);
    msg.setSource(59787U);
    msg.setSourceEntity(60U);
    msg.setDestination(41788U);
    msg.setDestinationEntity(156U);
    msg.type = 141U;
    msg.frequency = 756774940U;
    msg.min_range = 9662U;
    msg.max_range = 19709U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.17658978083739096;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.874059463606763;
    tmp_msg_0.beam_height = 0.86719096624116;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {126, -100, -76, -109, -80, 9, -48, -116, -112, 101, -8, -32, -4, -78, 2, 75, -97, -9, -48, -18, -105, -28, -74, -24, -116, -34, -46, -84, 70, -84, 21, 118, -15, -50, -73, 101, -62, 106, -67, 64, -2, -12, 26, 85, -56, -36, 113, -49, -68, 23, 100, -88, 53, 11, -56, -119, -36, 50, 15, 15, -106, 92, 29, 73, -83, 5, -88, 109, -41, -96, 59, -44, 76, 54, 77, 44};
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
    msg.setTimeStamp(0.25984301478993077);
    msg.setSource(59223U);
    msg.setSourceEntity(148U);
    msg.setDestination(39576U);
    msg.setDestinationEntity(76U);
    msg.type = 69U;
    msg.frequency = 3132301998U;
    msg.min_range = 10676U;
    msg.max_range = 57486U;
    msg.bits_per_point = 22U;
    msg.scale_factor = 0.17135720865682547;
    const signed char tmp_msg_0[] = {-111, -55, 72, 95, -44, 47, -76, -108, 30, -116, 38, 126, -56, 14, 93, 6, 3, 88, 27, 97, 107, -42, -115, -105, 92, -122, 18, 107, -15, -67, 47, 10, 110, -93, 25, 56, -78, -103};
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
    msg.setTimeStamp(0.561908134361907);
    msg.setSource(43656U);
    msg.setSourceEntity(99U);
    msg.setDestination(50057U);
    msg.setDestinationEntity(143U);
    msg.type = 28U;
    msg.frequency = 1475013460U;
    msg.min_range = 6278U;
    msg.max_range = 5771U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.7433092839285772;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8685187562568547;
    tmp_msg_0.beam_height = 0.7540241726793397;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {3, 36, 24, -110, -39, 105, 98, -19, 20, -128, -40, -20, 84, 126, -40, 62, -42, 46, -29, 56, -65, 80, 31, 126};
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
    msg.setTimeStamp(0.6353021806168475);
    msg.setSource(36493U);
    msg.setSourceEntity(165U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.9153145563945272);
    msg.setSource(42630U);
    msg.setSourceEntity(141U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.20622135558136145);
    msg.setSource(34166U);
    msg.setSourceEntity(192U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.17878294172303177);
    msg.setSource(3329U);
    msg.setSourceEntity(8U);
    msg.setDestination(17583U);
    msg.setDestinationEntity(126U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.515335750320655);
    msg.setSource(33248U);
    msg.setSourceEntity(72U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(228U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.9194755116435784);
    msg.setSource(1840U);
    msg.setSourceEntity(82U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(232U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.34800127823130644);
    msg.setSource(326U);
    msg.setSourceEntity(1U);
    msg.setDestination(45170U);
    msg.setDestinationEntity(175U);
    msg.value = 0.7065155999624779;
    msg.confidence = 0.6317911007842507;
    msg.opmodes.assign("PACEXQYLIWK");

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
    msg.setTimeStamp(0.3914311317958269);
    msg.setSource(27676U);
    msg.setSourceEntity(119U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(111U);
    msg.value = 0.9221143489834599;
    msg.confidence = 0.8612408989668986;
    msg.opmodes.assign("FDJEYTAZWNZMGGKFM");

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
    msg.setTimeStamp(0.6039847257365185);
    msg.setSource(13735U);
    msg.setSourceEntity(73U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(114U);
    msg.value = 0.18448300297017084;
    msg.confidence = 0.37646434071335444;
    msg.opmodes.assign("KKPHEYRNJJJCOGYBKFODWOOJRWKRLQYANHMHWGLEBJGEFILNARHAAKTTUGIFTBYPCAESDTCXHSMVRKSOIHVZZVUWUBMEBNFPOYAMRTRKGLVMSTXUOJUGLJRPQWZCLZIR");

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
    msg.setTimeStamp(0.4630024402195486);
    msg.setSource(12407U);
    msg.setSourceEntity(192U);
    msg.setDestination(25306U);
    msg.setDestinationEntity(99U);
    msg.itow = 1368031072U;
    msg.lat = 0.13799993018990941;
    msg.lon = 0.7528853254465143;
    msg.height_ell = 0.7010652912981404;
    msg.height_sea = 0.8690104907403053;
    msg.hacc = 0.10424646359723044;
    msg.vacc = 0.21542340580810038;
    msg.vel_n = 0.638327975924179;
    msg.vel_e = 0.7966706664355315;
    msg.vel_d = 0.7150884585292135;
    msg.speed = 0.20987474210495582;
    msg.gspeed = 0.9766629956679359;
    msg.heading = 0.46291867406307563;
    msg.sacc = 0.819479533253639;
    msg.cacc = 0.8810093836587494;

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
    msg.setTimeStamp(0.08250299591452803);
    msg.setSource(16552U);
    msg.setSourceEntity(223U);
    msg.setDestination(48076U);
    msg.setDestinationEntity(124U);
    msg.itow = 596753413U;
    msg.lat = 0.507348141620246;
    msg.lon = 0.5365586279265282;
    msg.height_ell = 0.6830566914206825;
    msg.height_sea = 0.021194597167271345;
    msg.hacc = 0.24666890551144383;
    msg.vacc = 0.25261772064090426;
    msg.vel_n = 0.9200447019470379;
    msg.vel_e = 0.1701179338159321;
    msg.vel_d = 0.21364547580906612;
    msg.speed = 0.7087558408134308;
    msg.gspeed = 0.8042089385899702;
    msg.heading = 0.14910754501784995;
    msg.sacc = 0.030820806794576106;
    msg.cacc = 0.6406322597049585;

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
    msg.setTimeStamp(0.5996947761358955);
    msg.setSource(42332U);
    msg.setSourceEntity(9U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(201U);
    msg.itow = 712901921U;
    msg.lat = 0.8464910065229483;
    msg.lon = 0.5268464814695539;
    msg.height_ell = 0.8500269177848878;
    msg.height_sea = 0.7512591851618473;
    msg.hacc = 0.24749468834635457;
    msg.vacc = 0.9015691009356864;
    msg.vel_n = 0.675588380649061;
    msg.vel_e = 0.23167404564203953;
    msg.vel_d = 0.3233186574942314;
    msg.speed = 0.2501405011096821;
    msg.gspeed = 0.7406683747932359;
    msg.heading = 0.010858752654810955;
    msg.sacc = 0.31675511519131483;
    msg.cacc = 0.6186474801112524;

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
    msg.setTimeStamp(0.08994912215643602);
    msg.setSource(47231U);
    msg.setSourceEntity(26U);
    msg.setDestination(53290U);
    msg.setDestinationEntity(7U);
    msg.id = 192U;
    msg.value = 0.15817260660176313;

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
    msg.setTimeStamp(0.35930470853520713);
    msg.setSource(1559U);
    msg.setSourceEntity(119U);
    msg.setDestination(62490U);
    msg.setDestinationEntity(65U);
    msg.id = 8U;
    msg.value = 0.41831226628343654;

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
    msg.setTimeStamp(0.10350299821675635);
    msg.setSource(17948U);
    msg.setSourceEntity(192U);
    msg.setDestination(3909U);
    msg.setDestinationEntity(211U);
    msg.id = 49U;
    msg.value = 0.19093388979480108;

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
    msg.setTimeStamp(0.09764392526877785);
    msg.setSource(57738U);
    msg.setSourceEntity(42U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(24U);
    msg.x = 0.825335079345066;
    msg.y = 0.798647775980261;
    msg.z = 0.2994846778050452;
    msg.phi = 0.010655080411608453;
    msg.theta = 0.019752983690984216;
    msg.psi = 0.5008771838760084;

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
    msg.setTimeStamp(0.17681949083378445);
    msg.setSource(19291U);
    msg.setSourceEntity(168U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(12U);
    msg.x = 0.5291980848653887;
    msg.y = 0.07262635235833448;
    msg.z = 0.2150621363034374;
    msg.phi = 0.1497682859808277;
    msg.theta = 0.07666180151969715;
    msg.psi = 0.6388087384604816;

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
    msg.setTimeStamp(0.4086164019002956);
    msg.setSource(38777U);
    msg.setSourceEntity(11U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(36U);
    msg.x = 0.5925289756905213;
    msg.y = 0.9075382845253602;
    msg.z = 0.06600368383117816;
    msg.phi = 0.47349423012675507;
    msg.theta = 0.6990500055495527;
    msg.psi = 0.6372257789640369;

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
    msg.setTimeStamp(0.18120580680240106);
    msg.setSource(58018U);
    msg.setSourceEntity(125U);
    msg.setDestination(24778U);
    msg.setDestinationEntity(222U);
    msg.beam_width = 0.006852212415891734;
    msg.beam_height = 0.6891659321608967;

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
    msg.setTimeStamp(0.29409801412615055);
    msg.setSource(59676U);
    msg.setSourceEntity(134U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(10U);
    msg.beam_width = 0.3811663116435333;
    msg.beam_height = 0.2755734888905286;

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
    msg.setTimeStamp(0.47613854932871624);
    msg.setSource(18910U);
    msg.setSourceEntity(213U);
    msg.setDestination(31297U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.6352965266292319;
    msg.beam_height = 0.5582829593851698;

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
    msg.setTimeStamp(0.07668827441329196);
    msg.setSource(37349U);
    msg.setSourceEntity(200U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(80U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.02249622826259501);
    msg.setSource(35501U);
    msg.setSourceEntity(27U);
    msg.setDestination(39493U);
    msg.setDestinationEntity(223U);
    msg.sane = 173U;

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
    msg.setTimeStamp(0.8475899189455418);
    msg.setSource(9465U);
    msg.setSourceEntity(3U);
    msg.setDestination(53202U);
    msg.setDestinationEntity(130U);
    msg.sane = 253U;

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
    msg.setTimeStamp(0.10965406306433512);
    msg.setSource(9152U);
    msg.setSourceEntity(64U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(228U);
    msg.value = 0.3385731307900597;

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
    msg.setTimeStamp(0.27302377253724186);
    msg.setSource(58829U);
    msg.setSourceEntity(130U);
    msg.setDestination(64573U);
    msg.setDestinationEntity(122U);
    msg.value = 0.9838982476247029;

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
    msg.setTimeStamp(0.8995006818668285);
    msg.setSource(58634U);
    msg.setSourceEntity(188U);
    msg.setDestination(9085U);
    msg.setDestinationEntity(69U);
    msg.value = 0.9678741324996148;

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
    msg.setTimeStamp(0.9979490553586582);
    msg.setSource(42394U);
    msg.setSourceEntity(111U);
    msg.setDestination(57682U);
    msg.setDestinationEntity(123U);
    msg.value = 0.5408285639670498;

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
    msg.setTimeStamp(0.8494363044667795);
    msg.setSource(16135U);
    msg.setSourceEntity(128U);
    msg.setDestination(30772U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8538537278013899;

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
    msg.setTimeStamp(0.28471000948780756);
    msg.setSource(26618U);
    msg.setSourceEntity(87U);
    msg.setDestination(6302U);
    msg.setDestinationEntity(249U);
    msg.value = 0.40414613456408066;

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
    msg.setTimeStamp(0.11309885979734657);
    msg.setSource(62475U);
    msg.setSourceEntity(33U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0019146555762833417;

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
    msg.setTimeStamp(0.32829458904560715);
    msg.setSource(3727U);
    msg.setSourceEntity(144U);
    msg.setDestination(44767U);
    msg.setDestinationEntity(55U);
    msg.value = 0.15493576993706948;

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
    msg.setTimeStamp(0.501356811818763);
    msg.setSource(17165U);
    msg.setSourceEntity(64U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9850253919067483;

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
    msg.setTimeStamp(0.5316214585645886);
    msg.setSource(60901U);
    msg.setSourceEntity(68U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7984614733217837;

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
    msg.setTimeStamp(0.32734451659524855);
    msg.setSource(48760U);
    msg.setSourceEntity(54U);
    msg.setDestination(63533U);
    msg.setDestinationEntity(241U);
    msg.value = 0.3094012321333842;

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
    msg.setTimeStamp(0.30008536532905683);
    msg.setSource(47336U);
    msg.setSourceEntity(22U);
    msg.setDestination(7719U);
    msg.setDestinationEntity(161U);
    msg.value = 0.818099548822757;

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
    msg.setTimeStamp(0.9003364530820106);
    msg.setSource(19749U);
    msg.setSourceEntity(204U);
    msg.setDestination(45993U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6523519492760164;

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
    msg.setTimeStamp(0.9166601348267189);
    msg.setSource(6846U);
    msg.setSourceEntity(96U);
    msg.setDestination(56335U);
    msg.setDestinationEntity(193U);
    msg.value = 0.9739526346580735;

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
    msg.setTimeStamp(0.6782683893382491);
    msg.setSource(59311U);
    msg.setSourceEntity(186U);
    msg.setDestination(10915U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8909120641469415;

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
    msg.setTimeStamp(0.5002169082589573);
    msg.setSource(33463U);
    msg.setSourceEntity(109U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(117U);
    msg.value = 0.28634713072810236;

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
    msg.setTimeStamp(0.3493344912344518);
    msg.setSource(33725U);
    msg.setSourceEntity(70U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(122U);
    msg.value = 0.2747874045388875;

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
    msg.setTimeStamp(0.08367456465937706);
    msg.setSource(42019U);
    msg.setSourceEntity(178U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(129U);
    msg.value = 0.999887431272711;

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
    msg.setTimeStamp(0.9831188296300839);
    msg.setSource(30995U);
    msg.setSourceEntity(1U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4197323230900627;

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
    msg.setTimeStamp(0.48784159098350166);
    msg.setSource(56917U);
    msg.setSourceEntity(194U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(26U);
    msg.value = 0.2670114518440776;

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
    msg.setTimeStamp(0.6150853236494633);
    msg.setSource(64832U);
    msg.setSourceEntity(228U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(22U);
    msg.value = 0.2738948505288702;

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
    msg.setTimeStamp(0.0384666236255542);
    msg.setSource(36400U);
    msg.setSourceEntity(217U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3922888003237138;

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
    msg.setTimeStamp(0.30545577190566486);
    msg.setSource(37070U);
    msg.setSourceEntity(244U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(208U);
    msg.value = 0.675501771524745;

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
    msg.setTimeStamp(0.463552145501708);
    msg.setSource(29170U);
    msg.setSourceEntity(98U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(166U);
    msg.value = 0.4610198659927809;

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
    msg.setTimeStamp(0.858759689789713);
    msg.setSource(56927U);
    msg.setSourceEntity(19U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(104U);
    msg.validity = 48032U;
    msg.type = 210U;
    msg.tow = 1735648413U;
    msg.base_lat = 0.8918500388207845;
    msg.base_lon = 0.37096671705202977;
    msg.base_height = 0.8835758115467532;
    msg.n = 0.08767003025013798;
    msg.e = 0.5976858544421901;
    msg.d = 0.8601779612221068;
    msg.v_n = 0.6252275525887112;
    msg.v_e = 0.26350455061554956;
    msg.v_d = 0.47476387281304566;
    msg.satellites = 71U;
    msg.iar_hyp = 44302U;
    msg.iar_ratio = 0.3950811812910051;

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
    msg.setTimeStamp(0.5061320347410035);
    msg.setSource(32295U);
    msg.setSourceEntity(6U);
    msg.setDestination(35104U);
    msg.setDestinationEntity(250U);
    msg.validity = 31746U;
    msg.type = 51U;
    msg.tow = 67699185U;
    msg.base_lat = 0.07532970218398771;
    msg.base_lon = 0.35469142235858153;
    msg.base_height = 0.4535042552886063;
    msg.n = 0.6575849605449794;
    msg.e = 0.4912813428973396;
    msg.d = 0.18194360217905725;
    msg.v_n = 0.016901923052406786;
    msg.v_e = 0.38754171757247746;
    msg.v_d = 0.11349513180800452;
    msg.satellites = 183U;
    msg.iar_hyp = 62739U;
    msg.iar_ratio = 0.8087641268891818;

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
    msg.setTimeStamp(0.6731089664993324);
    msg.setSource(7991U);
    msg.setSourceEntity(165U);
    msg.setDestination(7354U);
    msg.setDestinationEntity(65U);
    msg.validity = 58760U;
    msg.type = 159U;
    msg.tow = 3884473855U;
    msg.base_lat = 0.8699026984523572;
    msg.base_lon = 0.82972576721786;
    msg.base_height = 0.568180026911318;
    msg.n = 0.380062407224353;
    msg.e = 0.687553800394104;
    msg.d = 0.56315614866146;
    msg.v_n = 0.33021121306095425;
    msg.v_e = 0.8339685672339772;
    msg.v_d = 0.6308143568321984;
    msg.satellites = 117U;
    msg.iar_hyp = 10399U;
    msg.iar_ratio = 0.5577801293112543;

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
    msg.setTimeStamp(0.6243694709403821);
    msg.setSource(47686U);
    msg.setSourceEntity(179U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(245U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4248471717346751;
    tmp_msg_0.lon = 0.3801523379257522;
    tmp_msg_0.height = 0.29196264391969873;
    tmp_msg_0.x = 0.21268753726782452;
    tmp_msg_0.y = 0.5731385398953794;
    tmp_msg_0.z = 0.5291356709364635;
    tmp_msg_0.phi = 0.21733703096403412;
    tmp_msg_0.theta = 0.3601156510073116;
    tmp_msg_0.psi = 0.9347962109437434;
    tmp_msg_0.u = 0.09435338501754731;
    tmp_msg_0.v = 0.5375666162930174;
    tmp_msg_0.w = 0.5550424101478951;
    tmp_msg_0.vx = 0.5329616934925469;
    tmp_msg_0.vy = 0.19506053775473864;
    tmp_msg_0.vz = 0.9657363187964149;
    tmp_msg_0.p = 0.31064463614966;
    tmp_msg_0.q = 0.4159888270022096;
    tmp_msg_0.r = 0.55057132872344;
    tmp_msg_0.depth = 0.31056910865965204;
    tmp_msg_0.alt = 0.04305386954252577;
    msg.state.set(tmp_msg_0);
    msg.type = 61U;

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
    msg.setTimeStamp(0.41600663039984864);
    msg.setSource(64631U);
    msg.setSourceEntity(238U);
    msg.setDestination(28938U);
    msg.setDestinationEntity(247U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9464396176238159;
    tmp_msg_0.lon = 0.28050843044362717;
    tmp_msg_0.height = 0.18837215192591006;
    tmp_msg_0.x = 0.7048543660743539;
    tmp_msg_0.y = 0.7783559581728816;
    tmp_msg_0.z = 0.42908516052853063;
    tmp_msg_0.phi = 0.36550874914933895;
    tmp_msg_0.theta = 0.42056951610879156;
    tmp_msg_0.psi = 0.42546675434462733;
    tmp_msg_0.u = 0.9402455932830278;
    tmp_msg_0.v = 0.879949455987896;
    tmp_msg_0.w = 0.2487815979040917;
    tmp_msg_0.vx = 0.8652815218085715;
    tmp_msg_0.vy = 0.506992134255713;
    tmp_msg_0.vz = 0.896961710876962;
    tmp_msg_0.p = 0.723788446775427;
    tmp_msg_0.q = 0.6823037075008361;
    tmp_msg_0.r = 0.05270854691008575;
    tmp_msg_0.depth = 0.20074939473708076;
    tmp_msg_0.alt = 0.9891141216613417;
    msg.state.set(tmp_msg_0);
    msg.type = 65U;

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
    msg.setTimeStamp(0.05358464742097779);
    msg.setSource(31927U);
    msg.setSourceEntity(88U);
    msg.setDestination(13469U);
    msg.setDestinationEntity(116U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9915405148623986;
    tmp_msg_0.lon = 0.39792488141556803;
    tmp_msg_0.height = 0.6867192305716884;
    tmp_msg_0.x = 0.3229860396192835;
    tmp_msg_0.y = 0.5783192003368043;
    tmp_msg_0.z = 0.9008235290043078;
    tmp_msg_0.phi = 0.7036958537200606;
    tmp_msg_0.theta = 0.34365407487034927;
    tmp_msg_0.psi = 0.06264509498656101;
    tmp_msg_0.u = 0.5335956839132238;
    tmp_msg_0.v = 0.5377703215466515;
    tmp_msg_0.w = 0.43558422915402006;
    tmp_msg_0.vx = 0.07580091338528316;
    tmp_msg_0.vy = 0.20599571987082776;
    tmp_msg_0.vz = 0.03205022012880754;
    tmp_msg_0.p = 0.9309750950409676;
    tmp_msg_0.q = 0.46233537415915205;
    tmp_msg_0.r = 0.5004579070600733;
    tmp_msg_0.depth = 0.03443387368271689;
    tmp_msg_0.alt = 0.4012932098733054;
    msg.state.set(tmp_msg_0);
    msg.type = 109U;

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
    msg.setTimeStamp(0.9369360888081171);
    msg.setSource(18367U);
    msg.setSourceEntity(236U);
    msg.setDestination(25051U);
    msg.setDestinationEntity(169U);
    msg.value = 0.47428645277812864;

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
    msg.setTimeStamp(0.25434368540384245);
    msg.setSource(20875U);
    msg.setSourceEntity(66U);
    msg.setDestination(47087U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9859174997064593;

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
    msg.setTimeStamp(0.9265197929989715);
    msg.setSource(9514U);
    msg.setSourceEntity(36U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9259750119749475;

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
    msg.setTimeStamp(0.5833753769021253);
    msg.setSource(37144U);
    msg.setSourceEntity(227U);
    msg.setDestination(7411U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7109019469786821;

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
    msg.setTimeStamp(0.06950120510466173);
    msg.setSource(25524U);
    msg.setSourceEntity(186U);
    msg.setDestination(38406U);
    msg.setDestinationEntity(91U);
    msg.value = 0.26683751601773187;

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
    msg.setTimeStamp(0.33189348413231123);
    msg.setSource(23249U);
    msg.setSourceEntity(197U);
    msg.setDestination(44794U);
    msg.setDestinationEntity(160U);
    msg.value = 0.4114192776080903;

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
    msg.setTimeStamp(0.4442586656220483);
    msg.setSource(177U);
    msg.setSourceEntity(33U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(111U);
    msg.value = 0.07798504161926156;

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
    msg.setTimeStamp(0.2944349195470457);
    msg.setSource(15914U);
    msg.setSourceEntity(59U);
    msg.setDestination(63452U);
    msg.setDestinationEntity(150U);
    msg.value = 0.6647129886661732;

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
    msg.setTimeStamp(0.4728345570697089);
    msg.setSource(58858U);
    msg.setSourceEntity(75U);
    msg.setDestination(12023U);
    msg.setDestinationEntity(57U);
    msg.value = 0.23876404729087597;

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
    msg.setTimeStamp(0.678662513267792);
    msg.setSource(50098U);
    msg.setSourceEntity(3U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4108107604856426;

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
    msg.setTimeStamp(0.3457867826941846);
    msg.setSource(50378U);
    msg.setSourceEntity(165U);
    msg.setDestination(54260U);
    msg.setDestinationEntity(224U);
    msg.value = 0.14382167225694553;

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
    msg.setTimeStamp(0.12734559163860137);
    msg.setSource(62176U);
    msg.setSourceEntity(145U);
    msg.setDestination(33183U);
    msg.setDestinationEntity(124U);
    msg.value = 0.00636097005934233;

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
    msg.setTimeStamp(0.6840594639125054);
    msg.setSource(49657U);
    msg.setSourceEntity(168U);
    msg.setDestination(39190U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6744096065465264;

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
    msg.setTimeStamp(0.7292479143478845);
    msg.setSource(55356U);
    msg.setSourceEntity(233U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9004778703240467;

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
    msg.setTimeStamp(0.8051599495884815);
    msg.setSource(36634U);
    msg.setSourceEntity(102U);
    msg.setDestination(48442U);
    msg.setDestinationEntity(54U);
    msg.value = 0.1628429073264671;

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
    msg.setTimeStamp(0.1535063855770913);
    msg.setSource(40412U);
    msg.setSourceEntity(235U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(237U);
    msg.id = 226U;
    msg.zoom = 193U;
    msg.action = 12U;

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
    msg.setTimeStamp(0.6151015858713399);
    msg.setSource(25755U);
    msg.setSourceEntity(203U);
    msg.setDestination(7657U);
    msg.setDestinationEntity(208U);
    msg.id = 62U;
    msg.zoom = 54U;
    msg.action = 214U;

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
    msg.setTimeStamp(0.3838578621762695);
    msg.setSource(58517U);
    msg.setSourceEntity(65U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(142U);
    msg.id = 13U;
    msg.zoom = 166U;
    msg.action = 208U;

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
    msg.setTimeStamp(0.9654807125816314);
    msg.setSource(5577U);
    msg.setSourceEntity(226U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(250U);
    msg.id = 250U;
    msg.value = 0.8348018941827114;

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
    msg.setTimeStamp(0.4982858394617544);
    msg.setSource(44007U);
    msg.setSourceEntity(156U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(192U);
    msg.id = 24U;
    msg.value = 0.1285625868892617;

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
    msg.setTimeStamp(0.5265025650690711);
    msg.setSource(13070U);
    msg.setSourceEntity(127U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(8U);
    msg.id = 26U;
    msg.value = 0.2513590947780704;

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
    msg.setTimeStamp(0.6249487305299449);
    msg.setSource(56555U);
    msg.setSourceEntity(214U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(95U);
    msg.id = 242U;
    msg.value = 0.5384966990936788;

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
    msg.setTimeStamp(0.10424045069815613);
    msg.setSource(20576U);
    msg.setSourceEntity(161U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(63U);
    msg.id = 223U;
    msg.value = 0.1502746435837743;

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
    msg.setTimeStamp(0.40505693908019114);
    msg.setSource(59074U);
    msg.setSourceEntity(144U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(138U);
    msg.id = 63U;
    msg.value = 0.310795491701948;

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
    msg.setTimeStamp(0.26496247366723125);
    msg.setSource(56914U);
    msg.setSourceEntity(68U);
    msg.setDestination(38137U);
    msg.setDestinationEntity(71U);
    msg.id = 67U;
    msg.angle = 0.9921983322355428;

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
    msg.setTimeStamp(0.2801587672721648);
    msg.setSource(40295U);
    msg.setSourceEntity(249U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(136U);
    msg.id = 50U;
    msg.angle = 0.5758357510287602;

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
    msg.setTimeStamp(0.32704062750791896);
    msg.setSource(56947U);
    msg.setSourceEntity(11U);
    msg.setDestination(17632U);
    msg.setDestinationEntity(182U);
    msg.id = 99U;
    msg.angle = 0.16021489394801158;

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
    msg.setTimeStamp(0.2215984272524052);
    msg.setSource(45428U);
    msg.setSourceEntity(236U);
    msg.setDestination(40044U);
    msg.setDestinationEntity(240U);
    msg.op = 67U;
    msg.actions.assign("UVCVPEQAZGNPNPFKXSDJJTWNHLRKUGJFPEZTOJUMERQVLHNHSZMIJTMWUIFPTMJSACNUTFCMCHAXLONDZCOOAXBDPYKAIVUEIGBAZH");

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
    msg.setTimeStamp(0.24885580992314915);
    msg.setSource(35719U);
    msg.setSourceEntity(203U);
    msg.setDestination(34633U);
    msg.setDestinationEntity(24U);
    msg.op = 112U;
    msg.actions.assign("XDOQGMTPFHZZEBTZTVLHGZVRTFVYEORNIBGXUUCWLXWUEORUMIWWFSVSJIMVTSMRCLDYLQSBFNLKTNAQFAKBTKIVIVJBAAVLAOSJKANDMXPDZUOYHQYBNQEFHQWPSCJZ");

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
    msg.setTimeStamp(0.18973153026971323);
    msg.setSource(1773U);
    msg.setSourceEntity(26U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(197U);
    msg.op = 16U;
    msg.actions.assign("EHWUHPQKPWMKPKCRP");

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
    msg.setTimeStamp(0.06816142684460946);
    msg.setSource(33884U);
    msg.setSourceEntity(174U);
    msg.setDestination(22528U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("AKCNUOYXNNEMZQGCCIPUORDWYHHIYUMFLZNWPEBRXIVZUJMXIQHAERQMTGWVUUDPQMYNABODPGJJRLLOITFAQSCNLGIRMRFFKVVRJKDCSYXDCTTYGTLTWEXCBGHGXZJMMQWGTUFPVNKZQKKSHSULDNFZWKXWFJDXQHVKHORZYXPKHJEDENFLKVFLJNPZZSURIIVSSHJDQPVWAYBOABIYTWEPWCFOBCBHREAZ");

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
    msg.setTimeStamp(0.18375918442895633);
    msg.setSource(52562U);
    msg.setSourceEntity(164U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("HWTBJBKGPADMYINDKJPKKMNMMJARWZLDGIFFQTDUEEQCFSPMSQLOKESRQBOHCSYFQOLNFZNQGXIMSIFBDZWWFECHWEOZDXNWQTVIVCMAUTBZCANLUXRYTRYYUCVIPBGAENOJXRHAOCAKXJLYRPYZPLGAHNTOYV");

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
    msg.setTimeStamp(0.5472915026235017);
    msg.setSource(42023U);
    msg.setSourceEntity(165U);
    msg.setDestination(3191U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("KFSPXVRAXTYYJPAJWXUOQCRZUOCFSWHSZYDGVQAFLMYQPRHBUNIUNBGMOREZOPHTODTHYCBDVULWNMUWZAPBQQUUNLYXFBWCUWLZYGGOEVXQALYISZCCLGQPIJWJNQKSOTZMHEMOXNTCJWRJBEDRCGELASXFSKFKHJVTVHHPEHIPNGAMKZATKEYFKMSMTBXHBRCILNRKOVGIGPDIVOESTQDVVCLIMKFSBWFDDJRJZFGXEWDAENUXZIPIT");

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
    msg.setTimeStamp(0.04008472072293934);
    msg.setSource(19942U);
    msg.setSourceEntity(73U);
    msg.setDestination(8429U);
    msg.setDestinationEntity(103U);
    msg.button = 5U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.2687813681289566);
    msg.setSource(8701U);
    msg.setSourceEntity(105U);
    msg.setDestination(12801U);
    msg.setDestinationEntity(55U);
    msg.button = 238U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.0551620851485064);
    msg.setSource(52900U);
    msg.setSourceEntity(96U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(186U);
    msg.button = 134U;
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
    msg.setTimeStamp(0.25642542787771994);
    msg.setSource(40449U);
    msg.setSourceEntity(39U);
    msg.setDestination(50906U);
    msg.setDestinationEntity(128U);
    msg.op = 56U;
    msg.text.assign("DXZVZPCJIEHAHFPPGEMZTCRMJOKHAWXRNYJDLMJQRSAIESXHGCXTMHUFVSCSUHNMWYYLEZRTRMGKQQJABIWNLULMISTPHWUDUEQOAGYP");

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
    msg.setTimeStamp(0.4870207333072901);
    msg.setSource(57797U);
    msg.setSourceEntity(174U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(139U);
    msg.op = 120U;
    msg.text.assign("HYJRWFSGPEMLUSTDMHYUFXTZAMYWNGJCNAJXKAVQSRBWXNQNNVNIIYCTRJGAKTRZKCPJOSDTRKMEYCCLVESPYMILGZNUFDBZYTSPUPERQAXGTBZEXSCIEXAXDOEBUPVOWIRTGSEJBFMGRUZQCVDLKVGKBJHOOJWSDTUYPKCPQOZWHZHGFCHJPMLIQQDQEZTASDQFXKWFVNUOFLIVHDOICANKN");

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
    msg.setTimeStamp(0.5845031632390237);
    msg.setSource(1254U);
    msg.setSourceEntity(84U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(15U);
    msg.op = 74U;
    msg.text.assign("NJEFPPGLHZDBUPFMTDVJLPSLHYMGGOPUNBCVIIRUODOCCAMZNPGTRILWOCQTHAWDLNJJSQGSOOXHNCMGJOTGXMAQFBFKZDSMDTEEQXPHURJAYRY");

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
    msg.setTimeStamp(0.24990409541499037);
    msg.setSource(9655U);
    msg.setSourceEntity(219U);
    msg.setDestination(50572U);
    msg.setDestinationEntity(56U);
    msg.op = 20U;
    msg.time_remain = 0.08722380844397137;
    msg.sched_time = 0.996230573458574;

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
    msg.setTimeStamp(0.822079610790659);
    msg.setSource(42435U);
    msg.setSourceEntity(30U);
    msg.setDestination(62824U);
    msg.setDestinationEntity(175U);
    msg.op = 47U;
    msg.time_remain = 0.9639835026985742;
    msg.sched_time = 0.7668941499322329;

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
    msg.setTimeStamp(0.0580472024021248);
    msg.setSource(6825U);
    msg.setSourceEntity(184U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(192U);
    msg.op = 77U;
    msg.time_remain = 0.47823919238503954;
    msg.sched_time = 0.40222614656045574;

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
    msg.setTimeStamp(0.4671020676975576);
    msg.setSource(53518U);
    msg.setSourceEntity(206U);
    msg.setDestination(6319U);
    msg.setDestinationEntity(60U);
    msg.name.assign("ISDDHVOQSFZCJMXWSKWXLPBUXVTRGTJCCWCIPQOAUYUOWZDWFQOGUGLRKAYXGXZIRKDQDESGBVJJLSVAWBZEPPTGHYHDURBAOIPPNOSAUZTCNOCEGNYFLHNXTGSNLVPKVQUYHASMJCCEBEFKNMBKWTNQHMDEMGQWMYCZXJIIONIKEZQLPTEYSBRWFVRHFWLM");
    msg.op = 11U;
    msg.sched_time = 0.04444064493168842;

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
    msg.setTimeStamp(0.03704082481434379);
    msg.setSource(18399U);
    msg.setSourceEntity(21U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HTAIQLQAWFCFZAKFRWTOVBKKSDKOIVWYYVEMOHBJDIMVWJSCOLHNDHICDTJYM");
    msg.op = 39U;
    msg.sched_time = 0.35574494834756754;

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
    msg.setTimeStamp(0.7620225489532508);
    msg.setSource(16087U);
    msg.setSourceEntity(40U);
    msg.setDestination(40000U);
    msg.setDestinationEntity(209U);
    msg.name.assign("AEVOFMZHSQHUWHWDEDGUXXQTCOCPXOEVAZVZRRAKZDABWYWKGYNPEAFHJZOGNRUDCGIUGETCCGYFYGWSVHIBKMRYYIPMJTJXUSBWESGHQPLOHDGVUDSSYALBUUIGOAXLOJSTKJTL");
    msg.op = 87U;
    msg.sched_time = 0.17329701311643697;

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
    msg.setTimeStamp(0.4581102063242537);
    msg.setSource(46752U);
    msg.setSourceEntity(95U);
    msg.setDestination(4227U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.09694907374431527);
    msg.setSource(20605U);
    msg.setSourceEntity(118U);
    msg.setDestination(16017U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.6244180685954834);
    msg.setSource(33345U);
    msg.setSourceEntity(43U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.9165279205271271);
    msg.setSource(42347U);
    msg.setSourceEntity(212U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FTOVSVNFGDUPKHDIWIGOGDZXPTHMOVQKSUXXIAKNDCTMRFOHBNTMWBAPGMJWPA");
    msg.state = 242U;

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
    msg.setTimeStamp(0.15949146202781106);
    msg.setSource(9213U);
    msg.setSourceEntity(114U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(213U);
    msg.name.assign("LKBOZPYUHKFLMEXAQKWSGXWBGZDOETWFQFRGONJHRPNYEEZKLGMSPTTILCJCIASTMGDJGHRUBWVBUXFRDLTCCYFIJIFMLQJCDWQQKUMGUPDOZWPXOOMJRIXQDYIWNTEZNZGTSKWEYCWBVJSQPSZAZRQSVIMDHYNHOPBHUYERFMOVRHRDVAHINRU");
    msg.state = 90U;

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
    msg.setTimeStamp(0.48651475125330623);
    msg.setSource(32128U);
    msg.setSourceEntity(22U);
    msg.setDestination(15487U);
    msg.setDestinationEntity(127U);
    msg.name.assign("WLEPRBHTXKDXTKGKUUMTLNQAXOFBIBOWOZNYJQTWVCQDLSKOLSEEPAIKJUPTTVCYSSSRBVBNSIWXEYCMZJFWHCJGVSNGCNBGURYROQZXIQRZFEYYVJKXGHFNJIQTALMACBEEORZOZMGLJXTDWBXDLPVHJIUWRQRPFCGDGAUDFBUARUMNLMPPLNHELKOIKCZPMGHIWQGEFZYHWZZUPMSA");
    msg.state = 132U;

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
    msg.setTimeStamp(0.9038832033105806);
    msg.setSource(25768U);
    msg.setSourceEntity(208U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(221U);
    msg.name.assign("LIMAGVQHQSVEMSLULJMIBXLQNOXSPFULGHGKIPTMLDVDFLXJUPSSTUROABHWKOMXKLEZTSVZZVABXENRTNAZDQWBHDYIIUXUXMSDHECRXPCGNPAWPKGBUOJHEWVPERPJTCCITRWZVAOQJDKKZGDFRVONYOCWCJCFAIWJJQHGGRADBSARZQDNNFLKSUBOMYKWWAQGCUZNFYPHBCTFIYBYKFQDIMRMMYHJVHSOUELKXJYZNVGFQNYTE");
    msg.value = 18U;

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
    msg.setTimeStamp(0.8758305340010943);
    msg.setSource(14268U);
    msg.setSourceEntity(2U);
    msg.setDestination(55527U);
    msg.setDestinationEntity(185U);
    msg.name.assign("HOWZIWXNTAXETZGDYVDKLESHLXIRFYVMBZSEIYAHEQZSUUXPHTLVZKQKDXHWDCTGRDTRTCZXQTSCJMVWKOLPQOUGMHRUU");
    msg.value = 28U;

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
    msg.setTimeStamp(0.616446553080286);
    msg.setSource(8892U);
    msg.setSourceEntity(189U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(22U);
    msg.name.assign("JAKWMGRTWUUQCWBOWRHIBVNKUIWPNRHMLFCCGZOMHMXFXEFMPICEKRLSEHRVKLWZCXJJBFGOSHLQKUUOASUQGBCDQWPBYMYYFDYPVLVDYQCJLIOJKOEDFXSYXTGIRZNISKQSZDYQBZFUNJKPROVWTPUISSRNSPTXMFVEEAALZBGTWSLYAYNEVHMBNRTTZOGGZNDOUC");
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
    msg.setTimeStamp(0.8647490750754973);
    msg.setSource(6877U);
    msg.setSourceEntity(210U);
    msg.setDestination(39523U);
    msg.setDestinationEntity(146U);
    msg.name.assign("IRCABRHWPAYZQMBWEHUOXABZMQUGWICJZHASTVERNNEYFIYOUFGCGVMCSZDZXPQXKOEFGNVPFFTIJBBJUXGEDCCWNFDHXARNKKPHUERWUFOHTAMNKFESJLDFXLYZXZGSSYBXVHLZMEGKHCVIIORBLTCDYSKNIBYLYMUTGOPVXMQKGGMOAMQYQSBPVWEUCEBPKZLHRLQKDPQJATOWULQIDIXRS");

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
    msg.setTimeStamp(0.0010608178223177056);
    msg.setSource(40498U);
    msg.setSourceEntity(229U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DXJMGKFDQQVGDUMCGAKOZHFZFCSOXSXFENVBWTNQLAWNVFEQYMBYWXURPAMSARHKNVVVKGYEORUZLCSBMZKIDSZEPTKHOUVHTHFIJQBWSHOLTECPBXUCRPLLCAZANDALBCJWZXRRLOHYCZNGMYFUIPTTTEJOMIDQGSCUAJVKYXQKNZNPSIPUBIWPMFBEPYXPODCIITEWRODHERGVKVGNAX");

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
    msg.setTimeStamp(0.2925284785744974);
    msg.setSource(63331U);
    msg.setSourceEntity(5U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KSJGSFBONXIQUWCREQXYIHIGPGFOQYIFEFWNGUIZYCPTUMIPRNGDOAECWDONEDMPEXUXIHNWACEMVVGXWTQP");

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
    msg.setTimeStamp(0.5837077992924443);
    msg.setSource(1104U);
    msg.setSourceEntity(218U);
    msg.setDestination(11145U);
    msg.setDestinationEntity(140U);
    msg.name.assign("CYNXQRPWYSGYQCDZCPRNJXS");
    msg.value = 31U;

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
    msg.setTimeStamp(0.6733096106602153);
    msg.setSource(52312U);
    msg.setSourceEntity(54U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PJNKQZSUCWMCVJBIPFXXPEDAYQLJMIITJWOLMGNMCSSVEILLAVYRAZNJTWHTONDRFTESEGFDWFLWXFLTPFNRQQOCPHXHXAUEHHYPYDGUWWDFGEQELJDCOBKITAPPOBLRYEZVBGPVITBSFSYUSGMWUMABOMZRLJHAQRVQXUUKHKGTSNZOEQPZQVNVNWYOASIZLYOI");
    msg.value = 220U;

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
    msg.setTimeStamp(0.6876800453574874);
    msg.setSource(6408U);
    msg.setSourceEntity(132U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(24U);
    msg.name.assign("CIYGFRUSULQMUFHSGUGWBRJAMROBUCXGCOPETQKEXNAWWUJZDNWGSQ");
    msg.value = 249U;

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
    msg.setTimeStamp(0.8810530458825271);
    msg.setSource(28831U);
    msg.setSourceEntity(41U);
    msg.setDestination(39630U);
    msg.setDestinationEntity(76U);
    msg.id = 159U;
    msg.period = 3149740775U;
    msg.duty_cycle = 2721033000U;

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
    msg.setTimeStamp(0.5762754590409901);
    msg.setSource(37338U);
    msg.setSourceEntity(187U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(193U);
    msg.id = 45U;
    msg.period = 16644435U;
    msg.duty_cycle = 3046274622U;

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
    msg.setTimeStamp(0.850523065126643);
    msg.setSource(20652U);
    msg.setSourceEntity(67U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(97U);
    msg.id = 11U;
    msg.period = 1226636325U;
    msg.duty_cycle = 475112711U;

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
    msg.setTimeStamp(0.15146233760285555);
    msg.setSource(63733U);
    msg.setSourceEntity(78U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(211U);
    msg.id = 98U;
    msg.period = 3161819613U;
    msg.duty_cycle = 2697175730U;

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
    msg.setTimeStamp(0.2048597426710589);
    msg.setSource(61028U);
    msg.setSourceEntity(96U);
    msg.setDestination(11823U);
    msg.setDestinationEntity(45U);
    msg.id = 3U;
    msg.period = 3804787847U;
    msg.duty_cycle = 2621294046U;

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
    msg.setTimeStamp(0.4471417762717427);
    msg.setSource(32924U);
    msg.setSourceEntity(126U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(249U);
    msg.id = 190U;
    msg.period = 428256964U;
    msg.duty_cycle = 228799407U;

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
    msg.setTimeStamp(0.08791133980542432);
    msg.setSource(64143U);
    msg.setSourceEntity(94U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.96266328263287;
    msg.lon = 0.2936058062485445;
    msg.height = 0.9270094235579913;
    msg.x = 0.05057027970748107;
    msg.y = 0.5098287427206123;
    msg.z = 0.5356121918098923;
    msg.phi = 0.589480642313231;
    msg.theta = 0.09425261777009164;
    msg.psi = 0.7663524374608737;
    msg.u = 0.014151538053990387;
    msg.v = 0.9053752202986484;
    msg.w = 0.8524321312905309;
    msg.vx = 0.8715947529444721;
    msg.vy = 0.09284351949782266;
    msg.vz = 0.5692018821218733;
    msg.p = 0.5656878720468751;
    msg.q = 0.3005079802559095;
    msg.r = 0.6814795328006177;
    msg.depth = 0.37078853647956134;
    msg.alt = 0.6076746107236536;

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
    msg.setTimeStamp(0.8765220762261453);
    msg.setSource(8222U);
    msg.setSourceEntity(71U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.536153097207875;
    msg.lon = 0.22961139142470544;
    msg.height = 0.6727128101952666;
    msg.x = 0.11376785117156685;
    msg.y = 0.6661252468801006;
    msg.z = 0.2785821849667358;
    msg.phi = 0.7939177746940466;
    msg.theta = 0.9059832120818043;
    msg.psi = 0.7693511523663977;
    msg.u = 0.8952226387236994;
    msg.v = 0.004061427996751021;
    msg.w = 0.6034409998843139;
    msg.vx = 0.4415286860535549;
    msg.vy = 0.417905226180351;
    msg.vz = 0.4876612103233232;
    msg.p = 0.4986421732549817;
    msg.q = 0.2545992410246024;
    msg.r = 0.7756991535567468;
    msg.depth = 0.9348180717749629;
    msg.alt = 0.4737440179109801;

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
    msg.setTimeStamp(0.1584666663034202);
    msg.setSource(18705U);
    msg.setSourceEntity(4U);
    msg.setDestination(23805U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.3175150242603032;
    msg.lon = 0.18158780319468315;
    msg.height = 0.5036131609185932;
    msg.x = 0.49704875162866635;
    msg.y = 0.3523251439776013;
    msg.z = 0.7348622022204737;
    msg.phi = 0.4583193182073144;
    msg.theta = 0.4698091130299963;
    msg.psi = 0.21161440285774158;
    msg.u = 0.34908973957422174;
    msg.v = 0.44146280076157063;
    msg.w = 0.5905188251830582;
    msg.vx = 0.8005111869971565;
    msg.vy = 0.9436533794273769;
    msg.vz = 0.715259173455039;
    msg.p = 0.12004484436220642;
    msg.q = 0.5136551921306068;
    msg.r = 0.976698299397054;
    msg.depth = 0.21417104703330714;
    msg.alt = 0.46926908542496903;

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
    msg.setTimeStamp(0.019086780785434687);
    msg.setSource(9656U);
    msg.setSourceEntity(104U);
    msg.setDestination(20449U);
    msg.setDestinationEntity(136U);
    msg.x = 0.16608203757109297;
    msg.y = 0.11026174760986573;
    msg.z = 0.7551604049888896;

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
    msg.setTimeStamp(0.4055255739113325);
    msg.setSource(32397U);
    msg.setSourceEntity(99U);
    msg.setDestination(37525U);
    msg.setDestinationEntity(126U);
    msg.x = 0.7350893823291513;
    msg.y = 0.5421302489680137;
    msg.z = 0.4031848643765785;

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
    msg.setTimeStamp(0.04408444410732393);
    msg.setSource(62628U);
    msg.setSourceEntity(26U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(227U);
    msg.x = 0.005507059728139363;
    msg.y = 0.7888615657109108;
    msg.z = 0.6456070547313959;

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
    msg.setTimeStamp(0.5058678734977361);
    msg.setSource(39105U);
    msg.setSourceEntity(130U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9070840992900263;

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
    msg.setTimeStamp(0.013413756606223126);
    msg.setSource(3021U);
    msg.setSourceEntity(138U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(16U);
    msg.value = 0.951878218688529;

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
    msg.setTimeStamp(0.38190832921396733);
    msg.setSource(31505U);
    msg.setSourceEntity(3U);
    msg.setDestination(10003U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8930339960174751;

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
    msg.setTimeStamp(0.9651029167913651);
    msg.setSource(35605U);
    msg.setSourceEntity(229U);
    msg.setDestination(34133U);
    msg.setDestinationEntity(236U);
    msg.value = 0.6443794562262394;

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
    msg.setTimeStamp(0.47529279572480987);
    msg.setSource(37276U);
    msg.setSourceEntity(213U);
    msg.setDestination(163U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5653661680809068;

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
    msg.setTimeStamp(0.428341456555128);
    msg.setSource(1522U);
    msg.setSourceEntity(243U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6762160535163121;

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
    msg.setTimeStamp(0.6834345737210497);
    msg.setSource(47195U);
    msg.setSourceEntity(92U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(42U);
    msg.x = 0.03672538667216119;
    msg.y = 0.285873255022946;
    msg.z = 0.5236382776270141;
    msg.phi = 0.8297090536874857;
    msg.theta = 0.40169987073578717;
    msg.psi = 0.4168838925332766;
    msg.p = 0.11597697764660964;
    msg.q = 0.33822122029146706;
    msg.r = 0.47509188137299896;
    msg.u = 0.10345227633505194;
    msg.v = 0.17987680344123025;
    msg.w = 0.977209675763265;
    msg.bias_psi = 0.756345751711924;
    msg.bias_r = 0.5019522660099525;

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
    msg.setTimeStamp(0.703621155719494);
    msg.setSource(25323U);
    msg.setSourceEntity(247U);
    msg.setDestination(8425U);
    msg.setDestinationEntity(248U);
    msg.x = 0.4032423039012516;
    msg.y = 0.42247282247866447;
    msg.z = 0.37128324675710056;
    msg.phi = 0.6018031024414408;
    msg.theta = 0.6112574555346032;
    msg.psi = 0.13121917358239987;
    msg.p = 0.9363411794322603;
    msg.q = 0.026655571851622373;
    msg.r = 0.5697790331866389;
    msg.u = 0.39430244050558816;
    msg.v = 0.5073531270285249;
    msg.w = 0.8432604753188748;
    msg.bias_psi = 0.6730133616626887;
    msg.bias_r = 0.5160524686353604;

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
    msg.setTimeStamp(0.30355346164234);
    msg.setSource(52212U);
    msg.setSourceEntity(81U);
    msg.setDestination(41454U);
    msg.setDestinationEntity(196U);
    msg.x = 0.8805915132921041;
    msg.y = 0.870500367207834;
    msg.z = 0.4456957428249887;
    msg.phi = 0.257439476625586;
    msg.theta = 0.9580146669715147;
    msg.psi = 0.38890615881295476;
    msg.p = 0.8993716082783021;
    msg.q = 0.5936787148668247;
    msg.r = 0.11381211293309124;
    msg.u = 0.0840761594966225;
    msg.v = 0.26773715403882914;
    msg.w = 0.46991118695867107;
    msg.bias_psi = 0.8624622451209779;
    msg.bias_r = 0.8507661857750617;

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
    msg.setTimeStamp(0.8879627294255391);
    msg.setSource(14402U);
    msg.setSourceEntity(137U);
    msg.setDestination(406U);
    msg.setDestinationEntity(108U);
    msg.bias_psi = 0.5217668039370997;
    msg.bias_r = 0.8785847613376625;
    msg.cog = 0.02496301035822812;
    msg.cyaw = 0.7371568320397912;
    msg.lbl_rej_level = 0.7881491175090293;
    msg.gps_rej_level = 0.23648549553350595;
    msg.custom_x = 0.3248406345834892;
    msg.custom_y = 0.4477511145242734;
    msg.custom_z = 0.6567401921817883;

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
    msg.setTimeStamp(0.8815010188747028);
    msg.setSource(48022U);
    msg.setSourceEntity(8U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(235U);
    msg.bias_psi = 0.17981959259351576;
    msg.bias_r = 0.6120977725770401;
    msg.cog = 0.512548204778675;
    msg.cyaw = 0.6259715803566777;
    msg.lbl_rej_level = 0.39198893671822543;
    msg.gps_rej_level = 0.42731785926386867;
    msg.custom_x = 0.5825985400714;
    msg.custom_y = 0.2334904295582143;
    msg.custom_z = 0.3981239057355448;

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
    msg.setTimeStamp(0.2662073280663376);
    msg.setSource(4243U);
    msg.setSourceEntity(158U);
    msg.setDestination(57438U);
    msg.setDestinationEntity(60U);
    msg.bias_psi = 0.667587542106169;
    msg.bias_r = 0.2334355911270839;
    msg.cog = 0.13224357863337488;
    msg.cyaw = 0.44864116886506666;
    msg.lbl_rej_level = 0.41541754403193976;
    msg.gps_rej_level = 0.09168084443026125;
    msg.custom_x = 0.3415652725798469;
    msg.custom_y = 0.6824321110901675;
    msg.custom_z = 0.599099791673575;

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
    msg.setTimeStamp(0.04610238504064634);
    msg.setSource(10211U);
    msg.setSourceEntity(160U);
    msg.setDestination(34337U);
    msg.setDestinationEntity(229U);
    msg.utc_time = 0.711756836880427;
    msg.reason = 116U;

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
    msg.setTimeStamp(0.8074587695302692);
    msg.setSource(47124U);
    msg.setSourceEntity(153U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(89U);
    msg.utc_time = 0.04774249193147784;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.9376260423719139);
    msg.setSource(13090U);
    msg.setSourceEntity(161U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(105U);
    msg.utc_time = 0.139415727025067;
    msg.reason = 93U;

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
    msg.setTimeStamp(0.7561256824778115);
    msg.setSource(45038U);
    msg.setSourceEntity(251U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(125U);
    msg.id = 23U;
    msg.range = 0.6070527148540263;
    msg.acceptance = 22U;

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
    msg.setTimeStamp(0.4106265565086358);
    msg.setSource(58529U);
    msg.setSourceEntity(183U);
    msg.setDestination(7441U);
    msg.setDestinationEntity(31U);
    msg.id = 212U;
    msg.range = 0.9047332207532582;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.047151647578262956);
    msg.setSource(53604U);
    msg.setSourceEntity(32U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(170U);
    msg.id = 83U;
    msg.range = 0.684152670521532;
    msg.acceptance = 25U;

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
    msg.setTimeStamp(0.041211018349031736);
    msg.setSource(5981U);
    msg.setSourceEntity(90U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(145U);
    msg.type = 30U;
    msg.reason = 216U;
    msg.value = 0.06724915405254184;
    msg.timestep = 0.61753851646401;

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
    msg.setTimeStamp(0.635773040608491);
    msg.setSource(28113U);
    msg.setSourceEntity(126U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(109U);
    msg.type = 253U;
    msg.reason = 29U;
    msg.value = 0.567413992802664;
    msg.timestep = 0.0798996086203222;

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
    msg.setTimeStamp(0.9624907881799653);
    msg.setSource(55825U);
    msg.setSourceEntity(214U);
    msg.setDestination(22953U);
    msg.setDestinationEntity(28U);
    msg.type = 123U;
    msg.reason = 166U;
    msg.value = 0.3348888897203004;
    msg.timestep = 0.4282474963317233;

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
    msg.setTimeStamp(0.2518063305300886);
    msg.setSource(38160U);
    msg.setSourceEntity(240U);
    msg.setDestination(29693U);
    msg.setDestinationEntity(85U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EHJVTARIXVDVMVCKOZKADLQJUVGDAJNRVDTSSUWRGCPQABNOPBDYCBGTTQPRIWBSUWWRQGZ");
    tmp_msg_0.lat = 0.309868563587121;
    tmp_msg_0.lon = 0.597345022360394;
    tmp_msg_0.depth = 0.957666067090035;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8517968177350345;
    msg.y = 0.6998171743429105;
    msg.var_x = 0.9117800129116207;
    msg.var_y = 0.9212878782789765;
    msg.distance = 0.21182995244813052;

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
    msg.setTimeStamp(0.32209849370711374);
    msg.setSource(22919U);
    msg.setSourceEntity(42U);
    msg.setDestination(62976U);
    msg.setDestinationEntity(117U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CRSOVVZFESOKHIHYOPNKRKTMAVSXPYYPEGLUQLCKVTEMCQDANPRYGNFDWEOTRZTVDJGTCXIWRMKAZIFBJBUTZIFGGSUWDDMYJWVTINSNFLWIDPZGPAWDYULQYYTGFNMJBWITRXAPCAJUEAMHJWSNO");
    tmp_msg_0.lat = 0.6488648127874018;
    tmp_msg_0.lon = 0.25907551938875895;
    tmp_msg_0.depth = 0.6438742271522068;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7276144534922705;
    msg.y = 0.41579139909817664;
    msg.var_x = 0.3672747141418238;
    msg.var_y = 0.9734976930653293;
    msg.distance = 0.8499647233459583;

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
    msg.setTimeStamp(0.5673971238760086);
    msg.setSource(64291U);
    msg.setSourceEntity(171U);
    msg.setDestination(11236U);
    msg.setDestinationEntity(198U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CJPITUHZFEVANYVLZQTCPPISYIOCZVEBOIVDAFKHGVLUPLRLZJMCRUEHIWCAPZYEDQSTVIQGJJSLHSBDSAWEIWUOKZEYWMB");
    tmp_msg_0.lat = 0.9403025539383703;
    tmp_msg_0.lon = 0.9555683966059011;
    tmp_msg_0.depth = 0.9862172681108545;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 18U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24659096702608796;
    msg.y = 0.1429613881278925;
    msg.var_x = 0.34395161219397496;
    msg.var_y = 0.1702259060873772;
    msg.distance = 0.28772469037391735;

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
    msg.setTimeStamp(0.7642888445295406);
    msg.setSource(43321U);
    msg.setSourceEntity(147U);
    msg.setDestination(64045U);
    msg.setDestinationEntity(163U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.7454417233657458);
    msg.setSource(55241U);
    msg.setSourceEntity(241U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(105U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.5001939860010594);
    msg.setSource(28641U);
    msg.setSourceEntity(205U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(20U);
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
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.5779242086714753);
    msg.setSource(42124U);
    msg.setSourceEntity(27U);
    msg.setDestination(28773U);
    msg.setDestinationEntity(180U);
    msg.x = 0.3384692531571165;
    msg.y = 0.7620864791890156;
    msg.z = 0.23136717173140087;

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
    msg.setTimeStamp(0.4550350761192592);
    msg.setSource(47427U);
    msg.setSourceEntity(207U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(128U);
    msg.x = 0.8375471045393532;
    msg.y = 0.7604418744770932;
    msg.z = 0.28856662473832206;

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
    msg.setTimeStamp(0.5936852322600943);
    msg.setSource(7965U);
    msg.setSourceEntity(98U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(1U);
    msg.x = 0.7578472395206262;
    msg.y = 0.9609741794476981;
    msg.z = 0.5971789750633679;

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
    msg.setTimeStamp(0.4926870150700957);
    msg.setSource(17987U);
    msg.setSourceEntity(109U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(232U);
    msg.va = 0.7063485523753621;
    msg.aoa = 0.4741423729518107;
    msg.ssa = 0.34589876173323664;

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
    msg.setTimeStamp(0.9082339239202086);
    msg.setSource(2999U);
    msg.setSourceEntity(73U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(100U);
    msg.va = 0.5460309203602857;
    msg.aoa = 0.42041638554379446;
    msg.ssa = 0.8261603929279013;

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
    msg.setTimeStamp(0.8857005743128706);
    msg.setSource(37055U);
    msg.setSourceEntity(117U);
    msg.setDestination(44206U);
    msg.setDestinationEntity(87U);
    msg.va = 0.7748419650471565;
    msg.aoa = 0.5249211101264605;
    msg.ssa = 0.46193573633243856;

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
    msg.setTimeStamp(0.822012731357307);
    msg.setSource(8941U);
    msg.setSourceEntity(218U);
    msg.setDestination(40449U);
    msg.setDestinationEntity(196U);
    msg.value = 0.06093697030298251;

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
    msg.setTimeStamp(0.2862069567952541);
    msg.setSource(39553U);
    msg.setSourceEntity(213U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0938585498559138;

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
    msg.setTimeStamp(0.5764412447052913);
    msg.setSource(38309U);
    msg.setSourceEntity(63U);
    msg.setDestination(57469U);
    msg.setDestinationEntity(204U);
    msg.value = 0.319523111525129;

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
    msg.setTimeStamp(0.9452806857979517);
    msg.setSource(56556U);
    msg.setSourceEntity(138U);
    msg.setDestination(7271U);
    msg.setDestinationEntity(143U);
    msg.value = 0.3121010209938745;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.790469049688626);
    msg.setSource(24501U);
    msg.setSourceEntity(72U);
    msg.setDestination(14033U);
    msg.setDestinationEntity(67U);
    msg.value = 0.3296612075674241;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.7748269691233656);
    msg.setSource(29767U);
    msg.setSourceEntity(79U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(194U);
    msg.value = 0.20627431681809483;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.5657402829636072);
    msg.setSource(20509U);
    msg.setSourceEntity(88U);
    msg.setDestination(33835U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9466196053462375;
    msg.speed_units = 199U;

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
    msg.setTimeStamp(0.6134827123822761);
    msg.setSource(31627U);
    msg.setSourceEntity(84U);
    msg.setDestination(47739U);
    msg.setDestinationEntity(31U);
    msg.value = 0.019127175242972805;
    msg.speed_units = 30U;

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
    msg.setTimeStamp(0.07844091951202947);
    msg.setSource(46084U);
    msg.setSourceEntity(16U);
    msg.setDestination(32461U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6207824467984084;
    msg.speed_units = 154U;

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
    msg.setTimeStamp(0.5823680561047325);
    msg.setSource(2462U);
    msg.setSourceEntity(221U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7833932642612517;

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
    msg.setTimeStamp(0.9122612747740786);
    msg.setSource(60736U);
    msg.setSourceEntity(153U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(80U);
    msg.value = 0.07144528979294873;

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
    msg.setTimeStamp(0.9488113521580922);
    msg.setSource(3139U);
    msg.setSourceEntity(246U);
    msg.setDestination(6145U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6467146379633176;

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
    msg.setTimeStamp(0.4671499679505029);
    msg.setSource(16012U);
    msg.setSourceEntity(133U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8647098310077687;

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
    msg.setTimeStamp(0.7779152390726749);
    msg.setSource(2430U);
    msg.setSourceEntity(226U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(205U);
    msg.value = 0.26945124274209964;

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
    msg.setTimeStamp(0.8461575700922006);
    msg.setSource(21658U);
    msg.setSourceEntity(131U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4327962665323418;

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
    msg.setTimeStamp(0.3753602408286649);
    msg.setSource(20924U);
    msg.setSourceEntity(189U);
    msg.setDestination(19560U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6411987354430816;

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
    msg.setTimeStamp(0.45704881179921863);
    msg.setSource(37637U);
    msg.setSourceEntity(179U);
    msg.setDestination(14870U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2989010309656751;

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
    msg.setTimeStamp(0.5308149020033739);
    msg.setSource(47377U);
    msg.setSourceEntity(219U);
    msg.setDestination(3648U);
    msg.setDestinationEntity(33U);
    msg.value = 0.6686046221315662;

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
    msg.setTimeStamp(0.39618549149820215);
    msg.setSource(61698U);
    msg.setSourceEntity(73U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 4120562351U;
    msg.start_lat = 0.7594729852287929;
    msg.start_lon = 0.7050815836455954;
    msg.start_z = 0.6665830642120488;
    msg.start_z_units = 65U;
    msg.end_lat = 0.7305197157984018;
    msg.end_lon = 0.8260822620850723;
    msg.end_z = 0.5206468577402948;
    msg.end_z_units = 133U;
    msg.speed = 0.43775275500985544;
    msg.speed_units = 63U;
    msg.lradius = 0.6158263840550113;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.018509465957602944);
    msg.setSource(51021U);
    msg.setSourceEntity(18U);
    msg.setDestination(59397U);
    msg.setDestinationEntity(15U);
    msg.path_ref = 1791971810U;
    msg.start_lat = 0.061327077920983575;
    msg.start_lon = 0.7682697277156164;
    msg.start_z = 0.8770580357657869;
    msg.start_z_units = 103U;
    msg.end_lat = 0.8985070630164801;
    msg.end_lon = 0.6886201585832592;
    msg.end_z = 0.5996596038495912;
    msg.end_z_units = 167U;
    msg.speed = 0.12966978906674742;
    msg.speed_units = 210U;
    msg.lradius = 0.3970232436550194;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.41601264386914527);
    msg.setSource(34788U);
    msg.setSourceEntity(225U);
    msg.setDestination(59511U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 326536888U;
    msg.start_lat = 0.10044579747529314;
    msg.start_lon = 0.7923616635450936;
    msg.start_z = 0.48057869476137305;
    msg.start_z_units = 96U;
    msg.end_lat = 0.9726278108652046;
    msg.end_lon = 0.8398995980293947;
    msg.end_z = 0.8043031201536756;
    msg.end_z_units = 180U;
    msg.speed = 0.23713679377017416;
    msg.speed_units = 43U;
    msg.lradius = 0.1442528751535691;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.8045764622585398);
    msg.setSource(8818U);
    msg.setSourceEntity(146U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(7U);
    msg.x = 0.0239649373205586;
    msg.y = 0.5741672207881163;
    msg.z = 0.23265520392462424;
    msg.k = 0.6518862615754741;
    msg.m = 0.3736659341195948;
    msg.n = 0.014459586698134408;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.37632512539435314);
    msg.setSource(6286U);
    msg.setSourceEntity(89U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(142U);
    msg.x = 0.7946635305643267;
    msg.y = 0.5022840934002402;
    msg.z = 0.7036751188657673;
    msg.k = 0.2676695548379976;
    msg.m = 0.13107088324210348;
    msg.n = 0.8764743719250044;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.048499033339587716);
    msg.setSource(26057U);
    msg.setSourceEntity(215U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(28U);
    msg.x = 0.6467389833107375;
    msg.y = 0.0002506425237138732;
    msg.z = 0.12748598001760725;
    msg.k = 0.1755570802947698;
    msg.m = 0.20026988362194853;
    msg.n = 0.0742930104332784;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.9671690069647746);
    msg.setSource(520U);
    msg.setSourceEntity(23U);
    msg.setDestination(13796U);
    msg.setDestinationEntity(46U);
    msg.value = 0.46245930502699506;

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
    msg.setTimeStamp(0.20815329985453945);
    msg.setSource(64542U);
    msg.setSourceEntity(202U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(245U);
    msg.value = 0.16573136168477065;

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
    msg.setTimeStamp(0.0374959618723677);
    msg.setSource(6601U);
    msg.setSourceEntity(19U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(151U);
    msg.value = 0.21642835913098502;

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
    msg.setTimeStamp(0.8997765522680798);
    msg.setSource(46473U);
    msg.setSourceEntity(70U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(51U);
    msg.u = 0.5181025759337994;
    msg.v = 0.25242068241129556;
    msg.w = 0.3938955237247246;
    msg.p = 0.1180876926168899;
    msg.q = 0.30174026012999966;
    msg.r = 0.7088832748424306;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.3301276437772175);
    msg.setSource(6099U);
    msg.setSourceEntity(11U);
    msg.setDestination(61987U);
    msg.setDestinationEntity(141U);
    msg.u = 0.215364070446324;
    msg.v = 0.6643210614370908;
    msg.w = 0.2323095711439882;
    msg.p = 0.9734474610506304;
    msg.q = 0.04522773534574509;
    msg.r = 0.7653066197267527;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.5166305078816205);
    msg.setSource(61505U);
    msg.setSourceEntity(50U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(60U);
    msg.u = 0.2871786697950013;
    msg.v = 0.8783997658967873;
    msg.w = 0.03119909058421111;
    msg.p = 0.5296043873004846;
    msg.q = 0.7614175412039631;
    msg.r = 0.7444260484987595;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.6218135935773068);
    msg.setSource(11270U);
    msg.setSourceEntity(183U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 3458291102U;
    msg.start_lat = 0.645776348956201;
    msg.start_lon = 0.8647393845980834;
    msg.start_z = 0.8111077366863292;
    msg.start_z_units = 136U;
    msg.end_lat = 0.8745651663582418;
    msg.end_lon = 0.09414782717516401;
    msg.end_z = 0.0413340361542468;
    msg.end_z_units = 95U;
    msg.lradius = 0.5556472228720346;
    msg.flags = 89U;
    msg.x = 0.44790583794480265;
    msg.y = 0.01171476819621875;
    msg.z = 0.5557136472547117;
    msg.vx = 0.03408464360392127;
    msg.vy = 0.5806890858351234;
    msg.vz = 0.9755003347851656;
    msg.course_error = 0.46062989908699103;
    msg.eta = 34378U;

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
    msg.setTimeStamp(0.3185483191421715);
    msg.setSource(59103U);
    msg.setSourceEntity(121U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 2078246085U;
    msg.start_lat = 0.9878467549148661;
    msg.start_lon = 0.19926616889756366;
    msg.start_z = 0.8160511852199437;
    msg.start_z_units = 119U;
    msg.end_lat = 0.22043821620555182;
    msg.end_lon = 0.7978234694063461;
    msg.end_z = 0.8928949612942029;
    msg.end_z_units = 154U;
    msg.lradius = 0.04810441848503777;
    msg.flags = 152U;
    msg.x = 0.9499820458706765;
    msg.y = 0.7783156184423133;
    msg.z = 0.12484086667301775;
    msg.vx = 0.9730999982849642;
    msg.vy = 0.747944336454715;
    msg.vz = 0.4179063966073996;
    msg.course_error = 0.378113348198013;
    msg.eta = 1222U;

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
    msg.setTimeStamp(0.8807128961860503);
    msg.setSource(8995U);
    msg.setSourceEntity(116U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(139U);
    msg.path_ref = 3553162206U;
    msg.start_lat = 0.0663861320658885;
    msg.start_lon = 0.9332306516391053;
    msg.start_z = 0.37362370612047724;
    msg.start_z_units = 194U;
    msg.end_lat = 0.932512094782262;
    msg.end_lon = 0.9455227992974161;
    msg.end_z = 0.8018619274017009;
    msg.end_z_units = 44U;
    msg.lradius = 0.6917786320225868;
    msg.flags = 87U;
    msg.x = 0.7640094488236171;
    msg.y = 0.8653166360635738;
    msg.z = 0.9184060401367881;
    msg.vx = 0.5661147705363612;
    msg.vy = 0.30936202627046394;
    msg.vz = 0.8760241397925788;
    msg.course_error = 0.2315464339299308;
    msg.eta = 46617U;

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
    msg.setTimeStamp(0.10001756639832615);
    msg.setSource(14394U);
    msg.setSourceEntity(52U);
    msg.setDestination(30129U);
    msg.setDestinationEntity(248U);
    msg.k = 0.30713133833977935;
    msg.m = 0.857235068883873;
    msg.n = 0.6195432824944551;

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
    msg.setTimeStamp(0.6842209778370321);
    msg.setSource(20120U);
    msg.setSourceEntity(213U);
    msg.setDestination(32411U);
    msg.setDestinationEntity(222U);
    msg.k = 0.2832577130002807;
    msg.m = 0.41537856722532207;
    msg.n = 0.13487073336523103;

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
    msg.setTimeStamp(0.17367249810375274);
    msg.setSource(11882U);
    msg.setSourceEntity(164U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(3U);
    msg.k = 0.7476313725651718;
    msg.m = 0.5068391895896045;
    msg.n = 0.8075693619112116;

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
    msg.setTimeStamp(0.4729038024347999);
    msg.setSource(12029U);
    msg.setSourceEntity(130U);
    msg.setDestination(31392U);
    msg.setDestinationEntity(20U);
    msg.p = 0.6019782328635448;
    msg.i = 0.6100190544400003;
    msg.d = 0.7938271886177757;
    msg.a = 0.8574660050440849;

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
    msg.setTimeStamp(0.48958235948816065);
    msg.setSource(11997U);
    msg.setSourceEntity(83U);
    msg.setDestination(43663U);
    msg.setDestinationEntity(207U);
    msg.p = 0.5010856006107134;
    msg.i = 0.6152790821038551;
    msg.d = 0.9622330407665489;
    msg.a = 0.5390877429286882;

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
    msg.setTimeStamp(0.6911547682032912);
    msg.setSource(12198U);
    msg.setSourceEntity(93U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(161U);
    msg.p = 0.19991723262922012;
    msg.i = 0.3400069146233068;
    msg.d = 0.19141869834465786;
    msg.a = 0.9149630203613871;

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
    msg.setTimeStamp(0.6977445672647963);
    msg.setSource(38197U);
    msg.setSourceEntity(71U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(94U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.5770712892221951);
    msg.setSource(63176U);
    msg.setSourceEntity(145U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(60U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.8892249731980156);
    msg.setSource(43516U);
    msg.setSourceEntity(187U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(135U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.31802900938166334);
    msg.setSource(35756U);
    msg.setSourceEntity(182U);
    msg.setDestination(35150U);
    msg.setDestinationEntity(198U);
    msg.x = 0.06858582642585065;
    msg.y = 0.7136186067529865;
    msg.z = 0.3353621758130305;
    msg.vx = 0.47181937922895845;
    msg.vy = 0.10150265222082655;
    msg.vz = 0.21537961541483985;
    msg.ax = 0.899475684722511;
    msg.ay = 0.5305452003415341;
    msg.az = 0.1567515123235067;
    msg.flags = 32116U;

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
    msg.setTimeStamp(0.8760730914445694);
    msg.setSource(57332U);
    msg.setSourceEntity(238U);
    msg.setDestination(64640U);
    msg.setDestinationEntity(175U);
    msg.x = 0.654853013415955;
    msg.y = 0.6440083078147922;
    msg.z = 0.654993367189041;
    msg.vx = 0.8411567158918104;
    msg.vy = 0.6365562505583885;
    msg.vz = 0.20854817086769217;
    msg.ax = 0.8958758605983622;
    msg.ay = 0.23317001912558732;
    msg.az = 0.23444423991087027;
    msg.flags = 47859U;

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
    msg.setTimeStamp(0.9702236008596344);
    msg.setSource(19466U);
    msg.setSourceEntity(22U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(132U);
    msg.x = 0.6924209321106966;
    msg.y = 0.43776453140772265;
    msg.z = 0.6387367017180595;
    msg.vx = 0.8088636391074135;
    msg.vy = 0.6564632948932712;
    msg.vz = 0.28326187590594465;
    msg.ax = 0.9695046956593883;
    msg.ay = 0.6997693447399217;
    msg.az = 0.9563038389319459;
    msg.flags = 35050U;

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
    msg.setTimeStamp(0.3767269839138754);
    msg.setSource(31728U);
    msg.setSourceEntity(132U);
    msg.setDestination(20249U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5556447946089845;

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
    msg.setTimeStamp(0.520712220298738);
    msg.setSource(19433U);
    msg.setSourceEntity(115U);
    msg.setDestination(49489U);
    msg.setDestinationEntity(150U);
    msg.value = 0.761439336656351;

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
    msg.setTimeStamp(0.21576611838049775);
    msg.setSource(2836U);
    msg.setSourceEntity(125U);
    msg.setDestination(25937U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9346056491637353;

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
    msg.setTimeStamp(0.17004617508917153);
    msg.setSource(54760U);
    msg.setSourceEntity(2U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(28U);
    msg.timeout = 15186U;
    msg.lat = 0.6344904608239428;
    msg.lon = 0.9217648091803062;
    msg.z = 0.42603416296497054;
    msg.z_units = 185U;
    msg.speed = 0.2341162295502579;
    msg.speed_units = 41U;
    msg.roll = 0.6238413126295964;
    msg.pitch = 0.5324894705023102;
    msg.yaw = 0.7386993904799358;
    msg.custom.assign("PWJWKNDMIOQAALWGTXYXMUOGZMIETKCMWRXAUWGHICECFNYPSWBKBGQJLQCHHYAMMJPMUBTTODIZWFYIV");

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
    msg.setTimeStamp(0.8548549325193365);
    msg.setSource(14242U);
    msg.setSourceEntity(102U);
    msg.setDestination(21221U);
    msg.setDestinationEntity(159U);
    msg.timeout = 12338U;
    msg.lat = 0.2956026486403128;
    msg.lon = 0.10902928087500408;
    msg.z = 0.13931770384834363;
    msg.z_units = 158U;
    msg.speed = 0.9013266217426736;
    msg.speed_units = 250U;
    msg.roll = 0.627554781551052;
    msg.pitch = 0.6628438042736314;
    msg.yaw = 0.3078415489666776;
    msg.custom.assign("RDACUBXRPJDHMZLALYEIKHCYDEVAZBCOMQRSPRRRREOPYNFEHLQZCIPAWTQOSTADIPMHTQBRWOWFEPGFLUZQUKMJHWJKVQCDTXQKGZNVLVFQOPHQKITXSN");

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
    msg.setTimeStamp(0.523735786917294);
    msg.setSource(30418U);
    msg.setSourceEntity(221U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(216U);
    msg.timeout = 62312U;
    msg.lat = 0.3808124991510037;
    msg.lon = 0.34109691797332187;
    msg.z = 0.11760073290928919;
    msg.z_units = 149U;
    msg.speed = 0.13044244861501508;
    msg.speed_units = 208U;
    msg.roll = 0.5765387195536222;
    msg.pitch = 0.8627878346622692;
    msg.yaw = 0.690761098817849;
    msg.custom.assign("CVEJELELVPOBYKJBOXKDNFURQAGHUWIWIJGTFNMANPGDZPLKMXJLAMPZZCCGLXKREZKSTRCFBPWKRZSQAYHGITGMMBSGXRCJCPFWTPTWZEHLQRISAOYRCKJSEHJAFCLYDMQGFWVHQODVDVTSDUHFOPKBVQ");

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
    msg.setTimeStamp(0.6241100901893885);
    msg.setSource(41109U);
    msg.setSourceEntity(163U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(140U);
    msg.timeout = 49563U;
    msg.lat = 0.9668253904432982;
    msg.lon = 0.7207518293374532;
    msg.z = 0.7999623874553304;
    msg.z_units = 225U;
    msg.speed = 0.6031116478700435;
    msg.speed_units = 57U;
    msg.duration = 35891U;
    msg.radius = 0.4573545153341595;
    msg.flags = 248U;
    msg.custom.assign("PBLKSBMXNANNWFBRAOHFNAPHJZWOHBEBGIBSMXNTLJEHHFDYUXUSDUMOHTAGMRQSRCMVOXSRTWLUKHZZEBWKXHJUJXFTZVLWARJEFZMDZYLXCHPFRCEAKKGPWCFFIWRUXKICYVYTOAGPAGPORTGTKYDTGISLNSVEDGYADQ");

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
    msg.setTimeStamp(0.3327830522688626);
    msg.setSource(284U);
    msg.setSourceEntity(224U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(205U);
    msg.timeout = 13475U;
    msg.lat = 0.8140519951560548;
    msg.lon = 0.9270288111379196;
    msg.z = 0.6047692119817467;
    msg.z_units = 71U;
    msg.speed = 0.37997522271200357;
    msg.speed_units = 227U;
    msg.duration = 48633U;
    msg.radius = 0.9139266657322621;
    msg.flags = 218U;
    msg.custom.assign("NNDVDGCXXOXTRVCWFITNOGUMOHPCSEYLAHXJEFNWQEHIAZDCKRVZUZVBEJGSKOYFUROLWVUMSWQLLLDJWHEZEUUIIBPRDGVFLJVQTTSMYJOLNMAAIPCYGDLBVCIBGPQUKBFQDJSX");

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
    msg.setTimeStamp(0.5847303095463584);
    msg.setSource(29051U);
    msg.setSourceEntity(101U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(136U);
    msg.timeout = 45737U;
    msg.lat = 0.4600119121538848;
    msg.lon = 0.7562810267225687;
    msg.z = 0.3514053666568471;
    msg.z_units = 120U;
    msg.speed = 0.6141177608959241;
    msg.speed_units = 219U;
    msg.duration = 59508U;
    msg.radius = 0.9141482140701084;
    msg.flags = 239U;
    msg.custom.assign("OSAMSJHNMNQUSSLOESVYZHAKAZIIVDYTEADYJJYJNWWRJOGTMFTDGUVUPGCZIFPPQNWAZAPHQCPBFDKUKVBBZTGTMWGXXIRVJLHHIFSIEHMZOFEDOLXNBWDLIJMREGKUOKCCYSDCCFWFWSPBZORAKQPABCLYEXHEYAKIJNFHQBMCEYDRWVSUJQLFHDMMHLTSWXGQQPNABDXTBXMU");

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
    msg.setTimeStamp(0.1438480347594162);
    msg.setSource(40356U);
    msg.setSourceEntity(233U);
    msg.setDestination(38866U);
    msg.setDestinationEntity(230U);
    msg.custom.assign("LHXJJGYJFJEZWKACQNMBDXHYTRMFLQYUPULFDSMQPJZXEEEDGZCKXMGRUQXNMMTRLTWSFXOFRTJVFWPODPQOWNZKBAOTSUZULVPNOBVYLURBZGYPEFASBVEUSTTVBHSRCKIQDIQSONIJVHNBCIEIWNGKRWZAHIHHKIVJNXCNZAZCZQQHAKPXOICYFDEKWFPHLHCPMRRXLUCTJASKBMYWOBDKAVVYNYSFALQXEDGJAUGMURMIWEOVBT");

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
    msg.setTimeStamp(0.050861145807302166);
    msg.setSource(57281U);
    msg.setSourceEntity(222U);
    msg.setDestination(62882U);
    msg.setDestinationEntity(195U);
    msg.custom.assign("CDEWRTKBGFOHQPINZBXOCTVCTRWPPEYUNAVYYNTUDKLYRZVYNBQALOVMRUSBFZKXCYIAHEDQZEKFBDFGJSLFQXEIHOIWAPCJXKUZNJFZAEQKJGMUIAJSGFLUKYWTG");

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
    msg.setTimeStamp(0.1783499381346384);
    msg.setSource(15575U);
    msg.setSourceEntity(74U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(136U);
    msg.custom.assign("JCWJEITEOHTEXCSFJMISOHMRIKCVRZNHPNMLIOYKXLDVBCDEGUQBXZQDSYNCJFQNXITCLZOFUAGOVAQAGKTLDKFMVRGFSNLHYKZZTBRYXMHKAJYUYYXHWSZBHPQKWWUDNE");

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
    msg.setTimeStamp(0.36618283591452916);
    msg.setSource(63752U);
    msg.setSourceEntity(250U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(157U);
    msg.timeout = 16167U;
    msg.lat = 0.7170657270057741;
    msg.lon = 0.009439168662058295;
    msg.z = 0.11942457186418187;
    msg.z_units = 39U;
    msg.duration = 7186U;
    msg.speed = 0.7301850196863291;
    msg.speed_units = 98U;
    msg.type = 122U;
    msg.radius = 0.40607437656587597;
    msg.length = 0.17803587565203416;
    msg.bearing = 0.14767512821515638;
    msg.direction = 31U;
    msg.custom.assign("ANSBERDAKOQYANOYMSBTSFPLEAUHL");

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
    msg.setTimeStamp(0.12103106217846704);
    msg.setSource(9063U);
    msg.setSourceEntity(75U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(176U);
    msg.timeout = 58993U;
    msg.lat = 0.7471622369923326;
    msg.lon = 0.7403115815520545;
    msg.z = 0.004799719286246007;
    msg.z_units = 206U;
    msg.duration = 52592U;
    msg.speed = 0.6853523981829068;
    msg.speed_units = 27U;
    msg.type = 32U;
    msg.radius = 0.3915825242620734;
    msg.length = 0.8347756544666218;
    msg.bearing = 0.12274264382021283;
    msg.direction = 196U;
    msg.custom.assign("LFKOIDFFLONEDWSFWSOFPWRUCHQQQMBBZTUPMWITBAPTNHVDKJOUMKREOIOEAOAUJLBVOSYDVHJZSTBGXMCVYVPKGDNRCKLZYF");

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
    msg.setTimeStamp(0.32045556464946034);
    msg.setSource(54382U);
    msg.setSourceEntity(190U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(35U);
    msg.timeout = 50649U;
    msg.lat = 0.32886211012830846;
    msg.lon = 0.6654453785243769;
    msg.z = 0.8161484649358159;
    msg.z_units = 228U;
    msg.duration = 13072U;
    msg.speed = 0.4191700969492106;
    msg.speed_units = 106U;
    msg.type = 50U;
    msg.radius = 0.7221346245052263;
    msg.length = 0.003871743427947716;
    msg.bearing = 0.9368865836952062;
    msg.direction = 233U;
    msg.custom.assign("WLQXJTFQZZAABDFJPUF");

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
    msg.setTimeStamp(0.37104581658894353);
    msg.setSource(62147U);
    msg.setSourceEntity(104U);
    msg.setDestination(31921U);
    msg.setDestinationEntity(23U);
    msg.duration = 63092U;
    msg.custom.assign("FWEPSSHZJKZZJOKVVWFYWKPAXMSZHLTURFXCITRFFYQILDQEUAFQRLOHGKRDGDVJUNYJETVJNOLOGMNOGIJLMHPGWHYOJJNJCRZOFXBHDEMGAXOPIQYGAMIACAMRQBTLLLDLMUDNGMDHWMDVEANGYNTVRVCSDLKTBCCPITSWYEPZGBSFRAATIXBBNPTXWVHSUTVBCARZHQPWSVQKISOZFJZKURHYPYNKMEUKWWFZIBYBEBQCNUDXUECKPXIQXO");

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
    msg.setTimeStamp(0.3590788014115208);
    msg.setSource(41731U);
    msg.setSourceEntity(41U);
    msg.setDestination(1105U);
    msg.setDestinationEntity(111U);
    msg.duration = 54540U;
    msg.custom.assign("AQWLILCYFRVXBKZDGCKSLU");

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
    msg.setTimeStamp(0.7919726197517825);
    msg.setSource(21794U);
    msg.setSourceEntity(60U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(50U);
    msg.duration = 31629U;
    msg.custom.assign("EPYEBQSXJQRFAVTXANUOBPPDPQOICTSEPWXITBEHTHWROXGNKUWLNHMGIYFLQAPDQOSQGGKRZZKIKAFUCUDDMSXJLZVMYQAKAMIQLTSVHWJSVTWXKIAOXEUOJAAPJRVVCCJKZICZVHIWRURHMLZLZSOMBNGGQEVOOVURTPMKIBCJXZTINBFBSSFBHFDHEHRWWZLNDYFJLHYZJNEKWCJK");

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
    msg.setTimeStamp(0.72168650105047);
    msg.setSource(49648U);
    msg.setSourceEntity(189U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(20U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3886524161U;
    tmp_msg_0.start_lat = 0.6015278415265699;
    tmp_msg_0.start_lon = 0.4991295235550681;
    tmp_msg_0.start_z = 0.8671588995264011;
    tmp_msg_0.start_z_units = 240U;
    tmp_msg_0.end_lat = 0.8250104313945151;
    tmp_msg_0.end_lon = 0.8321098804255381;
    tmp_msg_0.end_z = 0.08542938381767096;
    tmp_msg_0.end_z_units = 186U;
    tmp_msg_0.speed = 0.4389515945461291;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.lradius = 0.05944967676401314;
    tmp_msg_0.flags = 81U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24021U;
    msg.custom.assign("QNGBAWAKCTDUSTUDXNYSXKOFGIYFYKOJTWRNMRNXTIGUKNHLCOOOSEIVQZQJVCHYHPYROZMPRTRBRRAUANJXZHSVOLTOMHEFUHYGDZKZVWUJFUCAYAHUJXZZBXYQGBQPSYVNPAGLNMKPIWIWTDKFLEHQEIBCBKWPMMLLLNCJCZXPLJVMZSRGYIISCAQCMDVWV");

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
    msg.setTimeStamp(0.7555832116592751);
    msg.setSource(48071U);
    msg.setSourceEntity(77U);
    msg.setDestination(50215U);
    msg.setDestinationEntity(128U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3233841293U;
    tmp_msg_0.start_lat = 0.008155389729364693;
    tmp_msg_0.start_lon = 0.45559756565099496;
    tmp_msg_0.start_z = 0.3183888191309131;
    tmp_msg_0.start_z_units = 224U;
    tmp_msg_0.end_lat = 0.4363150712673477;
    tmp_msg_0.end_lon = 0.09472533447234621;
    tmp_msg_0.end_z = 0.4651031180745182;
    tmp_msg_0.end_z_units = 106U;
    tmp_msg_0.speed = 0.8540490549801597;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.lradius = 0.8926750906330468;
    tmp_msg_0.flags = 42U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25381U;
    msg.custom.assign("XIUBJLFBWVTRFXFQLQQWIKRLJCOUDXOUVAINDPOEEHISHNTBMBCXMZSLRBPAILIOVAXDBETGEEVOYYZXVZKGLYYUHYXJTTWWPSXGKSKCHHPJWKSQVQCAUKQKHAAITCVSQNWLNE");

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
    msg.setTimeStamp(0.44538920974762686);
    msg.setSource(22401U);
    msg.setSourceEntity(93U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(250U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5009554034242596;
    tmp_msg_0.z_units = 80U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25409U;
    msg.custom.assign("XOFCLMQQKIISFEAWCZYUXHQCJPENFFTDPBIIBZEBXAACDPCSLKCZRTFGVKSZYYOTSURKOUBXSVJLJMWGBPXDTGASWGEENFAUZHEYUTHAGONQWWCKHRZHLNYZDKIBTTRCHGFTJCNQJMVZOYFFNUUXLTPM");

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
    msg.setTimeStamp(0.14785843410948718);
    msg.setSource(58045U);
    msg.setSourceEntity(115U);
    msg.setDestination(3787U);
    msg.setDestinationEntity(120U);
    msg.timeout = 30426U;
    msg.lat = 0.3599910521751567;
    msg.lon = 0.8400379286629062;
    msg.z = 0.9105942970581893;
    msg.z_units = 167U;
    msg.speed = 0.9736899112017051;
    msg.speed_units = 148U;
    msg.bearing = 0.4340354713607678;
    msg.cross_angle = 0.6667590150579157;
    msg.width = 0.5103509918979002;
    msg.length = 0.08328802777060806;
    msg.hstep = 0.4095989973624341;
    msg.coff = 129U;
    msg.alternation = 58U;
    msg.flags = 52U;
    msg.custom.assign("QMMIPYTJBTLPUVKPZHCETHCVKEFVGFTFSGE");

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
    msg.setTimeStamp(0.5283861371951948);
    msg.setSource(51666U);
    msg.setSourceEntity(85U);
    msg.setDestination(58172U);
    msg.setDestinationEntity(206U);
    msg.timeout = 17202U;
    msg.lat = 0.3594787050800349;
    msg.lon = 0.4378289520799865;
    msg.z = 0.7790618307042707;
    msg.z_units = 110U;
    msg.speed = 0.8116481760893145;
    msg.speed_units = 155U;
    msg.bearing = 0.7025952027049073;
    msg.cross_angle = 0.9291383605774083;
    msg.width = 0.5389180361713856;
    msg.length = 0.0412153467769204;
    msg.hstep = 0.35974106028234965;
    msg.coff = 93U;
    msg.alternation = 183U;
    msg.flags = 238U;
    msg.custom.assign("XCVLXKWOYOKVWPTIAPQLIZDOQRODXOQODCLVQCXYBUZQWJHKITVWEHVNXKEMTDBNPIAFMYZDZNUPKWXACOBGFXGTFRQBQGHSTKEFUUOXWKQLXVABGIJSTWXLSTIEJZJQJGVAHFPECMCYECHMBRTSPGADMGWIUASNYRRFGVJHAEMYNHTFTNSYUUGCMNNHZDGJELOBYDPRPUAMIRLFVFA");

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
    msg.setTimeStamp(0.8688814137950552);
    msg.setSource(2100U);
    msg.setSourceEntity(96U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(60U);
    msg.timeout = 34205U;
    msg.lat = 0.8978026744968294;
    msg.lon = 0.9452990256804749;
    msg.z = 0.38995507228221415;
    msg.z_units = 65U;
    msg.speed = 0.6196710947916152;
    msg.speed_units = 30U;
    msg.bearing = 0.7944945582297345;
    msg.cross_angle = 0.7828131127199993;
    msg.width = 0.4692671214468572;
    msg.length = 0.5203421638012409;
    msg.hstep = 0.16735120213630772;
    msg.coff = 236U;
    msg.alternation = 115U;
    msg.flags = 127U;
    msg.custom.assign("YRTQJRJKHLANESJCXWSFCXMRAONLTEMWPDXFQDTIYOWNLPCB");

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
    msg.setTimeStamp(0.049973458448892116);
    msg.setSource(3942U);
    msg.setSourceEntity(120U);
    msg.setDestination(9114U);
    msg.setDestinationEntity(142U);
    msg.timeout = 30174U;
    msg.lat = 0.7531124635314588;
    msg.lon = 0.7480229735571837;
    msg.z = 0.5424904182810917;
    msg.z_units = 169U;
    msg.speed = 0.295720041061709;
    msg.speed_units = 208U;
    msg.custom.assign("DTAWAKKYNZPFEFPVSUTMHQVIDFZNGUDJDCWVEYXCYPSBFEVZXWPOXICCIZKTCGMETQYIZNLOPMBNUCQLQUVBVLHZBAJFXYGAQ");

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
    msg.setTimeStamp(0.8643855245593502);
    msg.setSource(50604U);
    msg.setSourceEntity(76U);
    msg.setDestination(14536U);
    msg.setDestinationEntity(100U);
    msg.timeout = 63561U;
    msg.lat = 0.4499569202766712;
    msg.lon = 0.9914825812583203;
    msg.z = 0.10989775189924789;
    msg.z_units = 3U;
    msg.speed = 0.1678367688840341;
    msg.speed_units = 8U;
    msg.custom.assign("QCMKMHQVYJTHRTJGNVRYKRGLKZQLOLBJPAXCGNRBZDBYMPCVIYSEUHXHECEPQKZHJIYUIAOSOGVAWPZBKFAXORWDWOSFXDSDVJIELBREKVPJHSFIKLLFQPMYPVCKVJTOFNUASHNRXUBWIPUEHWXZYWVAEZNPNUEFUBFKSXQMTTGNDCCFDUTOPAGAYGSMGHMKFILDYYNIXDVLWLQTOJEMQWOCSMNGEWRMRCAXUQZIBBNJQIRGCDWAOFS");

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
    msg.setTimeStamp(0.18516108806927756);
    msg.setSource(60730U);
    msg.setSourceEntity(253U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(36U);
    msg.timeout = 63397U;
    msg.lat = 0.9757614776258517;
    msg.lon = 0.04760033828161214;
    msg.z = 0.26029057895459107;
    msg.z_units = 201U;
    msg.speed = 0.35210081531883053;
    msg.speed_units = 154U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1709726046286003;
    tmp_msg_0.y = 0.6522932393108603;
    tmp_msg_0.z = 0.08860285486811181;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LQCONLFCPQGJNEFYCMGCETCARDLDNTFSOKBTYPRZXNTPPPXNLSYIZIQRDJRAQOSSWLSXRSDKJWPHKEFAKEPBGKMWFAVVDHUMASCVHIVZCUBGPSKKQHHXXALAJOHTJIEMOXXWBFZUVRTBTJNUUFXEJOT");

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
    msg.setTimeStamp(0.6328256058569646);
    msg.setSource(4070U);
    msg.setSourceEntity(10U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(191U);
    msg.x = 0.8315827672713131;
    msg.y = 0.8869018933135766;
    msg.z = 0.803589226629326;

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
    msg.setTimeStamp(0.618745031377872);
    msg.setSource(50170U);
    msg.setSourceEntity(244U);
    msg.setDestination(60230U);
    msg.setDestinationEntity(212U);
    msg.x = 0.47609232660792145;
    msg.y = 0.9808301176793931;
    msg.z = 0.4638393849168071;

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
    msg.setTimeStamp(0.6030712251323946);
    msg.setSource(973U);
    msg.setSourceEntity(224U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(14U);
    msg.x = 0.769468270716014;
    msg.y = 0.29872461016871354;
    msg.z = 0.6401867727101862;

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
    msg.setTimeStamp(0.4672357706040048);
    msg.setSource(17563U);
    msg.setSourceEntity(146U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(163U);
    msg.timeout = 16553U;
    msg.lat = 0.06617752552178113;
    msg.lon = 0.26367864659486273;
    msg.z = 0.9880572501909829;
    msg.z_units = 163U;
    msg.amplitude = 0.44855077196087967;
    msg.pitch = 0.44194854327098776;
    msg.speed = 0.030454024002873892;
    msg.speed_units = 109U;
    msg.custom.assign("QOCGCQWHSVMEUTXTFSGHKTHFZNODNREXDSBOZSUJMZZWOYUTYMAIDXHVXYKTBXQWBHHRDYEXQWSJTUKPMCJXJQINHHDYNQLZMEGYNWPNKDSEMKLWOCCCCIIRVPAOEABZWTRKQTFBPNOSWLSYRRAZBCGTJBUAEGFVZLQRQYUMKHEG");

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
    msg.setTimeStamp(0.09322193702893067);
    msg.setSource(13664U);
    msg.setSourceEntity(138U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(218U);
    msg.timeout = 42546U;
    msg.lat = 0.3822017612897741;
    msg.lon = 0.47431994263050914;
    msg.z = 0.1756656594125744;
    msg.z_units = 15U;
    msg.amplitude = 0.9828560166976739;
    msg.pitch = 0.3913720997455342;
    msg.speed = 0.7976764031530919;
    msg.speed_units = 71U;
    msg.custom.assign("IGXEJGNYWHYPYHBJUKZQQTALYXFOZMSBWZJOSTUZOPFRZCHCAGOHTIVBQXCNIWJJVVFGBWMHTDYM");

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
    msg.setTimeStamp(0.9864625723295227);
    msg.setSource(61041U);
    msg.setSourceEntity(199U);
    msg.setDestination(35012U);
    msg.setDestinationEntity(180U);
    msg.timeout = 16479U;
    msg.lat = 0.3247756974830469;
    msg.lon = 0.033107321554711966;
    msg.z = 0.9197474996380129;
    msg.z_units = 47U;
    msg.amplitude = 0.09605465628654353;
    msg.pitch = 0.7988215728150074;
    msg.speed = 0.3586489457425758;
    msg.speed_units = 114U;
    msg.custom.assign("IJCYKRBEQHTIALWOINDPDQFCDHWIPVPBDU");

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
    msg.setTimeStamp(0.007677252830061265);
    msg.setSource(4208U);
    msg.setSourceEntity(94U);
    msg.setDestination(28726U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.5091723465589839);
    msg.setSource(42467U);
    msg.setSourceEntity(92U);
    msg.setDestination(11102U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.36541232266721646);
    msg.setSource(23952U);
    msg.setSourceEntity(40U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.7159420770766017);
    msg.setSource(56384U);
    msg.setSourceEntity(59U);
    msg.setDestination(39891U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.29018363842649486;
    msg.lon = 0.8349941072455493;
    msg.z = 0.5849774153609748;
    msg.z_units = 42U;
    msg.radius = 0.3414937851555293;
    msg.duration = 8948U;
    msg.speed = 0.9169896423456532;
    msg.speed_units = 104U;
    msg.custom.assign("LVBFQMZDVSSGDYNKZYWAAFIMGCDUCSXOFOHKLIWOBBJNBBXQZEETYMORMJTNOAJIJPCHUMXHQVTDYVDHZREAKUNEADPKBIBQUGQGHFCXFXENFWIKZPCWNYFGVFKKVORKRIXXJHLYZYCTWSOPWSBXCPZRCMULGGNGVYENVDSBCAQEQUORPMPPIJUHSCVMEATEYZTVDTOWDALIUBROPYGSLXJQKTUUKQJNZAIPALNLWRLXIJSLGDWFR");

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
    msg.setTimeStamp(0.24527789265052347);
    msg.setSource(2413U);
    msg.setSourceEntity(220U);
    msg.setDestination(41829U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.18220406227848684;
    msg.lon = 0.6363718034270955;
    msg.z = 0.8092252220504751;
    msg.z_units = 230U;
    msg.radius = 0.2009363792705693;
    msg.duration = 57553U;
    msg.speed = 0.690655319926142;
    msg.speed_units = 16U;
    msg.custom.assign("CNWIANFLRQZRRNAPHEUQZGNKYOWGSJOGCEJSFRRXFPLGGQMTOIWOOPPPTJATMTETXUVHILJCMNQRMVGMCJARWFTOUU");

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
    msg.setTimeStamp(0.5051933000532735);
    msg.setSource(42378U);
    msg.setSourceEntity(206U);
    msg.setDestination(15207U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.9367574704752515;
    msg.lon = 0.8486796928993678;
    msg.z = 0.833658428836638;
    msg.z_units = 36U;
    msg.radius = 0.9802038482778185;
    msg.duration = 36426U;
    msg.speed = 0.3403222279045959;
    msg.speed_units = 182U;
    msg.custom.assign("EFKWZMIZQJGZJCPQPXNUJLUZXUNNRSQWGOTWOVRBBTFYUHVRWCDTYKILUBUENIZWDQMOLVGBETOGOKOPMNZHXVPPTKELFMRAVODQKHXRVYZHGDAXINLLQNWOPSWMXDDSUTSPPFXVQCSMCHBDNPABHFTURELRJCMLKUCQAHAYAXEYAXCTYCOSVFBTIKLFNWFKSXKJBGESRLSGIRIWYSJYJ");

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
    msg.setTimeStamp(0.8424811338555418);
    msg.setSource(41442U);
    msg.setSourceEntity(134U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(61U);
    msg.timeout = 14006U;
    msg.flags = 81U;
    msg.lat = 0.6757638586877155;
    msg.lon = 0.5834587888871756;
    msg.start_z = 0.6102422974533126;
    msg.start_z_units = 72U;
    msg.end_z = 0.16360481895910794;
    msg.end_z_units = 12U;
    msg.radius = 0.10428765509901738;
    msg.speed = 0.5002247798202812;
    msg.speed_units = 77U;
    msg.custom.assign("XPPJBVOFYHDDQFRSQABADMERGPFNUARQMKFWVHEICTTTADYIWPPEKBOKYFUJCUTZHWDKDUWNS");

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
    msg.setTimeStamp(0.5276022186560694);
    msg.setSource(43366U);
    msg.setSourceEntity(236U);
    msg.setDestination(18772U);
    msg.setDestinationEntity(142U);
    msg.timeout = 32U;
    msg.flags = 51U;
    msg.lat = 0.028912168637923674;
    msg.lon = 0.03286560041482489;
    msg.start_z = 0.4649725605367694;
    msg.start_z_units = 63U;
    msg.end_z = 0.11763593139820028;
    msg.end_z_units = 24U;
    msg.radius = 0.49529937459482953;
    msg.speed = 0.6641563377053666;
    msg.speed_units = 143U;
    msg.custom.assign("GXQKMXXBLXDPJIBARFLMQFEKSTDYGDQZFXFOLHBCAHLWJSBZXDUVOSWHIRNFNJ");

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
    msg.setTimeStamp(0.7618626370392725);
    msg.setSource(1069U);
    msg.setSourceEntity(51U);
    msg.setDestination(7793U);
    msg.setDestinationEntity(236U);
    msg.timeout = 54027U;
    msg.flags = 189U;
    msg.lat = 0.5518584553830141;
    msg.lon = 0.5229542077286378;
    msg.start_z = 0.8722771128322255;
    msg.start_z_units = 253U;
    msg.end_z = 0.7658810185774922;
    msg.end_z_units = 48U;
    msg.radius = 0.909498920715251;
    msg.speed = 0.39883062841831296;
    msg.speed_units = 195U;
    msg.custom.assign("GJAHYODYVIWTUDOFWHVNDUIRZCVYROIPKMDEIMWAXUQHLSSFJTSNCEOIQJRXYFNPXKVKOQGLGBAYYXADMESUBMFEBIDLCGLRBGDNCNMPUXPMADBKYLAZVTENSWBLHTQPZXLBKFSEMRNDZIQ");

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
    msg.setTimeStamp(0.3759919667031757);
    msg.setSource(62032U);
    msg.setSourceEntity(180U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(152U);
    msg.timeout = 41413U;
    msg.lat = 0.5024180457001461;
    msg.lon = 0.9467892016458859;
    msg.z = 0.7891993691930034;
    msg.z_units = 52U;
    msg.speed = 0.41828909574534945;
    msg.speed_units = 31U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6289878544799731;
    tmp_msg_0.y = 0.6515990897961947;
    tmp_msg_0.z = 0.37310083071771594;
    tmp_msg_0.t = 0.7273473196421404;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BLZJOSZKFLPHSRSRUQHVABKWDTIKVQLDARUGCWLAGBZFWXDGXZTILNHNUAPVCTBDNAYNQJPGDREZWGPLNSTPJOTNQKCMQXCMOCX");

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
    msg.setTimeStamp(0.6781902662832638);
    msg.setSource(31811U);
    msg.setSourceEntity(105U);
    msg.setDestination(21782U);
    msg.setDestinationEntity(36U);
    msg.timeout = 21782U;
    msg.lat = 0.06468270839988544;
    msg.lon = 0.26963317545645216;
    msg.z = 0.9730406516357655;
    msg.z_units = 107U;
    msg.speed = 0.4634713099928649;
    msg.speed_units = 242U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4246133398692459;
    tmp_msg_0.y = 0.22346439605346113;
    tmp_msg_0.z = 0.719586039694235;
    tmp_msg_0.t = 0.5071853897042607;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WEVAQIDUCLKMDYYCYXZYTOXOVFMJXDFJLBNPLXSGPBJQAARQKJBUFWUGHOEBNGPNMNFV");

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
    msg.setTimeStamp(0.29444907499728246);
    msg.setSource(33799U);
    msg.setSourceEntity(79U);
    msg.setDestination(29854U);
    msg.setDestinationEntity(79U);
    msg.timeout = 5668U;
    msg.lat = 0.7412436690446881;
    msg.lon = 0.7026713174287885;
    msg.z = 0.9639261135110662;
    msg.z_units = 102U;
    msg.speed = 0.2884518407733113;
    msg.speed_units = 119U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6519734746153352;
    tmp_msg_0.y = 0.9436380230091262;
    tmp_msg_0.z = 0.176383218755935;
    tmp_msg_0.t = 0.29131028696925576;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KXQISEQPTIANLZGXCQCXNCRCHHWBRAMSWUIGKOQUSFAWTBXOVWJILVRJVGYSWRDMEXKLCKFZTQNPTXQMIGNMBFWRKCXBDKUEGNHZEFYYNBXKMVKMELOOZASTVATFIRGDQNVYRPIFDFCMDYWQWSOPAPMLEDJOUODRDQUCTXXEYZJBIHYMLRF");

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
    msg.setTimeStamp(0.7541667648443785);
    msg.setSource(22427U);
    msg.setSourceEntity(75U);
    msg.setDestination(62871U);
    msg.setDestinationEntity(245U);
    msg.x = 0.12003307633586002;
    msg.y = 0.1154049027774644;
    msg.z = 0.8039053965627527;
    msg.t = 0.1434481280246347;

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
    msg.setTimeStamp(0.4994461848911197);
    msg.setSource(49798U);
    msg.setSourceEntity(115U);
    msg.setDestination(6340U);
    msg.setDestinationEntity(68U);
    msg.x = 0.1162224453551961;
    msg.y = 0.3836949625649879;
    msg.z = 0.11363160047319254;
    msg.t = 0.11087825211981994;

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
    msg.setTimeStamp(0.21704704751489357);
    msg.setSource(10734U);
    msg.setSourceEntity(213U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(82U);
    msg.x = 0.9282108434423818;
    msg.y = 0.8358713031928627;
    msg.z = 0.9918439554527836;
    msg.t = 0.9122247507123716;

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
    msg.setTimeStamp(0.7115720745631143);
    msg.setSource(20956U);
    msg.setSourceEntity(83U);
    msg.setDestination(55323U);
    msg.setDestinationEntity(70U);
    msg.timeout = 52856U;
    msg.name.assign("DEICZBKAPWZOGOSTNGQNWL");
    msg.custom.assign("QQFIMQWLFSIHLVJZLKOHRCYJMFAIKJCQUKOWDHYSPJXQRRAGNCESTBKUMLWPMTJVTDRNRXJUOXXMMXZUUBHOTYAZQTRCUCTYXKIXLCVSVPNOXEAKLCPU");

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
    msg.setTimeStamp(0.5833961512434762);
    msg.setSource(20277U);
    msg.setSourceEntity(46U);
    msg.setDestination(52342U);
    msg.setDestinationEntity(163U);
    msg.timeout = 33036U;
    msg.name.assign("PZRGFHDQVQZALGCIYPKLKFZASDPOXKRWHLQIBYAJZHVYUDZIKRNXSGQCPJWQNECVMNAFBRIJVOYWRTATHYAFKZMIVWDIWTYJBBTYEGFWCETJLPXXMOQNLRUUGMPFTPNDABIUIGRSVKXMRCCWFXXQOGKYNOSHZASUDENOJDZIJHKKZPOLEHDYTMLOTSUSWMDCBMEBOCHHTVJTQUWFLDPXNNJXLGB");
    msg.custom.assign("JLZXVMFPAVTORIGVBLZMMNEKXATCJQCIEZBRLBSRBUFOEEIYCHWSCDSWOAPSHNYNAKLSXSMFTNWGTHULGSBDZIOFIIXPQZVXFEPUTVPKBVQGUYDEVWMWHYFNDLTUQQGYQIFWROMRZNOCDAGKQGJCAXXRMRTBQCBADLDKWSIUFEUKEJHQAMQKPEJ");

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
    msg.setTimeStamp(0.25737491169035975);
    msg.setSource(38922U);
    msg.setSourceEntity(10U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(219U);
    msg.timeout = 52710U;
    msg.name.assign("VDRYYBLNFKQWQPEXALUNIGABKUIMHVCMFKJXVCPSAVKMLQSHEMFJYUHVVWZBTGGBTROGFIGMRDZIKCTNIDVOQEGYLGTKHYAKDQZUXCTNSEVEJOCQKUMBRSQADRZDPJBPVPEJFYJDZTSCOGNSFWCPDWORZHWQAPJCYV");
    msg.custom.assign("AZZSFNCKNOYTOZLEKROLIGSGMRVKIFYDNZZDYHEFEYPUFATYRWBMJAPDQJRKQJIRCBVOLQTLNTKXNZYHLBOUCDGMFHTUUKGHSAEIVWCPDLSMYQAYJCUIXZBSXIWKSPHWXBMBWSARESVRMWGURWYPQUQVWMKJJPGPTXMBEASIDEVTIUOOOLDQJIBCNADSUNRMCIHDFHEZLPNFXTLCFOMPKEJTYUXKAHVNCVGVQDFQHGHZPXARQ");

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
    msg.setTimeStamp(0.7823895758420414);
    msg.setSource(13665U);
    msg.setSourceEntity(7U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.7255747597537868;
    msg.lon = 0.34355880582848286;
    msg.z = 0.5714049628190976;
    msg.z_units = 204U;
    msg.speed = 0.6269946639974898;
    msg.speed_units = 101U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20653U;
    tmp_msg_0.off_x = 0.2015276208987603;
    tmp_msg_0.off_y = 0.5237086046154017;
    tmp_msg_0.off_z = 0.9955195205914519;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4963323340035739;
    msg.custom.assign("QFVPZISBZBEECFMYTRCJRDAWAYDHTBCDLIUZUQBSRAPUIAXLII");

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
    msg.setTimeStamp(0.6920028588516536);
    msg.setSource(7924U);
    msg.setSourceEntity(142U);
    msg.setDestination(8653U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.8899898399318672;
    msg.lon = 0.27793313887974536;
    msg.z = 0.4416541935639031;
    msg.z_units = 62U;
    msg.speed = 0.43713179258430856;
    msg.speed_units = 142U;
    msg.start_time = 0.20966827807996424;
    msg.custom.assign("DLWSOFPOJVCBCYXCQEXDLPHQXQCKKMZIVCHLZLWFHPSGYKDIWJELPFMREMNYAFBSXUKVJQVJQWHSEWFOCKQGAHNGTULEATOSJPAEGWXTMGKVZVDPUOFYLTYMZAUDLJVSNUBIUSDMZQIXGRXNPLHDCELNTVDBRKCZNDWZSRH");

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
    msg.setTimeStamp(0.09862561231027744);
    msg.setSource(8010U);
    msg.setSourceEntity(142U);
    msg.setDestination(47703U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.7507292335098524;
    msg.lon = 0.7659272191270672;
    msg.z = 0.9447262735657885;
    msg.z_units = 119U;
    msg.speed = 0.25673758699820526;
    msg.speed_units = 28U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8354911462682933;
    tmp_msg_0.y = 0.20255054069887035;
    tmp_msg_0.z = 0.3150106815953102;
    tmp_msg_0.t = 0.1095609892819146;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15604U;
    tmp_msg_1.off_x = 0.09720947053613105;
    tmp_msg_1.off_y = 0.3688886956549192;
    tmp_msg_1.off_z = 0.6265012738835578;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.38793291655004536;
    msg.custom.assign("AAEXMMPOKDBXSJHZYJRGTWBAIOSTNTZTTQEJJEBZLMZVDFLCJDMLSGMITZHN");

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
    msg.setTimeStamp(0.3828755959345479);
    msg.setSource(26U);
    msg.setSourceEntity(178U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(222U);
    msg.vid = 15664U;
    msg.off_x = 0.7234247360466405;
    msg.off_y = 0.6620788395164052;
    msg.off_z = 0.9442704457725758;

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
    msg.setTimeStamp(0.5612125147321924);
    msg.setSource(4971U);
    msg.setSourceEntity(64U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(100U);
    msg.vid = 53715U;
    msg.off_x = 0.7113707976938453;
    msg.off_y = 0.7850518709947252;
    msg.off_z = 0.8257544303935762;

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
    msg.setTimeStamp(0.9995859769087335);
    msg.setSource(46005U);
    msg.setSourceEntity(128U);
    msg.setDestination(33339U);
    msg.setDestinationEntity(160U);
    msg.vid = 57467U;
    msg.off_x = 0.178786812655933;
    msg.off_y = 0.6516514613762633;
    msg.off_z = 0.5284582589244776;

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
    msg.setTimeStamp(0.9515087006191054);
    msg.setSource(3452U);
    msg.setSourceEntity(136U);
    msg.setDestination(632U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.5093386450966605);
    msg.setSource(42102U);
    msg.setSourceEntity(149U);
    msg.setDestination(57794U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.41862837405951003);
    msg.setSource(9412U);
    msg.setSourceEntity(117U);
    msg.setDestination(48962U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.2709185168700664);
    msg.setSource(25016U);
    msg.setSourceEntity(227U);
    msg.setDestination(12186U);
    msg.setDestinationEntity(49U);
    msg.mid = 54405U;

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
    msg.setTimeStamp(0.6796034535338862);
    msg.setSource(30384U);
    msg.setSourceEntity(216U);
    msg.setDestination(42873U);
    msg.setDestinationEntity(59U);
    msg.mid = 22092U;

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
    msg.setTimeStamp(0.30132527588278235);
    msg.setSource(40217U);
    msg.setSourceEntity(76U);
    msg.setDestination(10909U);
    msg.setDestinationEntity(219U);
    msg.mid = 24703U;

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
    msg.setTimeStamp(0.04773370427327095);
    msg.setSource(43033U);
    msg.setSourceEntity(22U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(41U);
    msg.state = 172U;
    msg.eta = 59555U;
    msg.info.assign("LECXPZSZMKKIWUIEEKEBPQNUESTPOVDHYSWPKAVJYOCTLQOJRIJTVMDLLGLKZTQSMUCHZLWUSQMCGWHKAYOROWMZGUHNWBUDAQTPOOCIFRGLNBD");

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
    msg.setTimeStamp(0.2413906680666792);
    msg.setSource(59703U);
    msg.setSourceEntity(138U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(220U);
    msg.state = 15U;
    msg.eta = 23165U;
    msg.info.assign("HCDBPRTZXFQEHVGAWHJGPQNFRHFHAXYAWUYAMWRSUTGYAUPCSBRPESDWVUSKAIKQNZMSCQSWUANYBNKNSRYWWVVEXCONPIZJYRDCKQBCQDCKELFUSVLOCMZXFWKNMJLCJJNQPLUIOHJVEMMGDIVZZLRVWGWJXRUAJOPXHMMJFSOLTTXGMQMOBQFEAVPIOLZIBGIZSYHKXDGTORDLFOIZTTKAYOKRZTYFEPEHXBEIIHVGUNU");

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
    msg.setTimeStamp(0.20601536529744258);
    msg.setSource(41769U);
    msg.setSourceEntity(86U);
    msg.setDestination(29130U);
    msg.setDestinationEntity(19U);
    msg.state = 95U;
    msg.eta = 316U;
    msg.info.assign("DUWQXBUXZJQDBOFRKKMRQQIWRLEPTYPBEJSFKWKYCKTP");

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
    msg.setTimeStamp(0.645611938447712);
    msg.setSource(8472U);
    msg.setSourceEntity(164U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(75U);
    msg.system = 60061U;
    msg.duration = 42075U;
    msg.speed = 0.22793093096515793;
    msg.speed_units = 39U;
    msg.x = 0.13658844019082717;
    msg.y = 0.1884050308579306;
    msg.z = 0.33596850365901854;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.6144897602465125);
    msg.setSource(53264U);
    msg.setSourceEntity(163U);
    msg.setDestination(22719U);
    msg.setDestinationEntity(49U);
    msg.system = 5061U;
    msg.duration = 38653U;
    msg.speed = 0.216757762484585;
    msg.speed_units = 19U;
    msg.x = 0.44992702220373415;
    msg.y = 0.9822168187758095;
    msg.z = 0.37566899951826993;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.6557558457323369);
    msg.setSource(60476U);
    msg.setSourceEntity(127U);
    msg.setDestination(1782U);
    msg.setDestinationEntity(208U);
    msg.system = 62501U;
    msg.duration = 25321U;
    msg.speed = 0.08450935993795616;
    msg.speed_units = 245U;
    msg.x = 0.3271269591202961;
    msg.y = 0.5639806931175214;
    msg.z = 0.12516953359803973;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.06991408409538857);
    msg.setSource(35489U);
    msg.setSourceEntity(129U);
    msg.setDestination(11999U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.2563374386466146;
    msg.lon = 0.02879303625421037;
    msg.speed = 0.9177888929527906;
    msg.speed_units = 103U;
    msg.duration = 6600U;
    msg.sys_a = 35366U;
    msg.sys_b = 6615U;
    msg.move_threshold = 0.7352103242286477;

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
    msg.setTimeStamp(0.3609863408535491);
    msg.setSource(53647U);
    msg.setSourceEntity(246U);
    msg.setDestination(7230U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.694799421850563;
    msg.lon = 0.5492252074912052;
    msg.speed = 0.3138639857747503;
    msg.speed_units = 207U;
    msg.duration = 52230U;
    msg.sys_a = 52126U;
    msg.sys_b = 37066U;
    msg.move_threshold = 0.5830466518553906;

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
    msg.setTimeStamp(0.6453706195167581);
    msg.setSource(35945U);
    msg.setSourceEntity(65U);
    msg.setDestination(44556U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.9139702332365044;
    msg.lon = 0.6176324323881771;
    msg.speed = 0.16116804682651453;
    msg.speed_units = 138U;
    msg.duration = 43313U;
    msg.sys_a = 23176U;
    msg.sys_b = 37607U;
    msg.move_threshold = 0.1920033138456526;

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
    msg.setTimeStamp(0.25798336733893357);
    msg.setSource(55942U);
    msg.setSourceEntity(219U);
    msg.setDestination(63802U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.010466003812995228;
    msg.lon = 0.031446238776768665;
    msg.z = 0.6305771982831377;
    msg.z_units = 149U;
    msg.speed = 0.3637501628734565;
    msg.speed_units = 239U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9706892173919184;
    tmp_msg_0.lon = 0.18060614104336736;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JGQJZKTVLIRUQSESRLGRBENSDPNFLDAVRUQA");

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
    msg.setTimeStamp(0.608383943193627);
    msg.setSource(35072U);
    msg.setSourceEntity(174U);
    msg.setDestination(36779U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.9454900574925335;
    msg.lon = 0.5767903129336217;
    msg.z = 0.08786196293130055;
    msg.z_units = 91U;
    msg.speed = 0.24282611123897202;
    msg.speed_units = 236U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9746036095633964;
    tmp_msg_0.lon = 0.48716290026358244;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KPITGKOJCIFYMHHMLASNCFFPGCOLDLYKZSGYUVJWQEKOSRFICLQLRIGKNZYNPLGZOLWYMRWDPBQUJQPDEIQQORNWVMJBHBBTQOMKXXUYBJAHTVEABGGFTTSIWAUPOAKSMNWCWEQCKBGWJHMESLSVHVRCX");

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
    msg.setTimeStamp(0.6448407252311912);
    msg.setSource(38661U);
    msg.setSourceEntity(8U);
    msg.setDestination(56899U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.7739084837898607;
    msg.lon = 0.570710895194168;
    msg.z = 0.5215975838304672;
    msg.z_units = 175U;
    msg.speed = 0.11019300159911305;
    msg.speed_units = 50U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3287451049500453;
    tmp_msg_0.lon = 0.5076876641236381;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KHIBVELTYXWFYBSKTMAJXKWBEPVBSLLATLEITBCAZEEUFHWQKDUFUZSULTJKRZGTEEUNVPGRZPQXCEROHPSCQPCZIZBGHVWLAYZOVTNCZJGUKAENWXMKKQFSYDVDUTAOMOGNFQLBWRHMOFYHJWIEHXPYQKQYXRYDSZPNHXLJAYDCMSDFXRRORQHNQAFISOXNJGMAJNTJOGDFGPPDNIXVRCMLQSDTAJOPWBMGYCJNBUVOMFKVWBHIR");

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
    msg.setTimeStamp(0.7101679310200473);
    msg.setSource(30824U);
    msg.setSourceEntity(230U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.4832472693831231;
    msg.lon = 0.06626423595516706;

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
    msg.setTimeStamp(0.5524304818000332);
    msg.setSource(19074U);
    msg.setSourceEntity(157U);
    msg.setDestination(44972U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.5807121855069132;
    msg.lon = 0.989702918264066;

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
    msg.setTimeStamp(0.22224317775720226);
    msg.setSource(41006U);
    msg.setSourceEntity(37U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.20416233983016996;
    msg.lon = 0.691753364681059;

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
    msg.setTimeStamp(0.37722690440957907);
    msg.setSource(41108U);
    msg.setSourceEntity(113U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(139U);
    msg.timeout = 63259U;
    msg.lat = 0.8567679991917372;
    msg.lon = 0.3101668282266966;
    msg.z = 0.4215409365285908;
    msg.z_units = 40U;
    msg.pitch = 0.25412551871265243;
    msg.amplitude = 0.41869293911945793;
    msg.duration = 7709U;
    msg.speed = 0.48621814277294206;
    msg.speed_units = 87U;
    msg.radius = 0.04257980492958846;
    msg.direction = 154U;
    msg.custom.assign("FQTPXVJSRHOGJDETLSNCCRXACKGTFHKENPANDDNMGMVFNRJASLMOMXZHMWBRTUAUVKIWDUJBZFEWQUKNAJCOEBRANBTPTUKEKOG");

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
    msg.setTimeStamp(0.6418690700410551);
    msg.setSource(21012U);
    msg.setSourceEntity(109U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(31U);
    msg.timeout = 7301U;
    msg.lat = 0.5338182830546685;
    msg.lon = 0.9420193613471928;
    msg.z = 0.8343560879813358;
    msg.z_units = 252U;
    msg.pitch = 0.6884768682353776;
    msg.amplitude = 0.9170972807468479;
    msg.duration = 43996U;
    msg.speed = 0.8360759595136493;
    msg.speed_units = 203U;
    msg.radius = 0.8095529554636075;
    msg.direction = 31U;
    msg.custom.assign("IOGPHUIXEYCYCQSHYZIXUSPKTNFUJXXQGBUHPAVAALSQLUDJFNCRFPTHFCJMMVDSPEMNYGDTQIEDMUHXNAXWMASJTTKOSTBMRQOHJKYWRUGZPRROADPHXFIYPWKUZHN");

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
    msg.setTimeStamp(0.29459918073060465);
    msg.setSource(42179U);
    msg.setSourceEntity(214U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(208U);
    msg.timeout = 48872U;
    msg.lat = 0.20234100097883245;
    msg.lon = 0.9778524013797965;
    msg.z = 0.11096437676426352;
    msg.z_units = 136U;
    msg.pitch = 0.384595781757722;
    msg.amplitude = 0.7283988046737778;
    msg.duration = 15182U;
    msg.speed = 0.5622500586177631;
    msg.speed_units = 21U;
    msg.radius = 0.4817837730091785;
    msg.direction = 122U;
    msg.custom.assign("YRVNMUORQZXRSAOBPEUMNXRZMXWBTDEDHOOTHIUJEQZGJDRFAGUQLFOLHHZQSVZJFJNPAODVANPEKBPZCWRRAMPQVIUVKKWBCPUWMETCDIMMHGDGYUOCNWSBKDNTHDIISFFASLKNGUGABARCTONMFLIUYQPDLSFCKQXBZIYDQXLXYLTVCYVORHPVCFFALTIVEYWKMZEJNIELJYWSKULOJQFT");

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
    msg.setTimeStamp(0.6409876855982451);
    msg.setSource(32868U);
    msg.setSourceEntity(172U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("GXVGOIHKJCQHKRCSWHDUDVNCWNXJPTJVFEKWWUFBPPZRFIQPHJQZWUMHEKRFTBMQCYZORQUBISNYOOYFDETAEYHTUNTZAKFJGTPHYDSKLOPLFGITRIXBNIAIOTGLRGAMKDI");
    msg.reference_frame = 244U;
    msg.custom.assign("HGIDJXLZWQXYCAZWZZKEZZIWWYTFFOOBKJHRGOSUTUTDIEERBXONXDFJOUPWKMPDGTCBQLBQMZNGFSCNRTDRVIFLWY");

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
    msg.setTimeStamp(0.5651166306507172);
    msg.setSource(62419U);
    msg.setSourceEntity(39U);
    msg.setDestination(1955U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("LGNJZFEMQVWNIRV");
    msg.reference_frame = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20088U;
    tmp_msg_0.off_x = 0.6180855537024837;
    tmp_msg_0.off_y = 0.27467305155673005;
    tmp_msg_0.off_z = 0.12858868219516617;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UZUMLRQEDHFBATRELUTDBKXHTTJQFCWPDZLYHPVXPUKOAONNMXVFHNIOXBSSLSGYIWKUOBAASBURRCCPKKKZGZJRHHSFZYPWUQOMXGJBAUQBIJMQTKIIUCDIWTFPXBVVGVQQQWYRRZBGOXREASGLYJVYEICBINDMGEWMDUJCRYCLDDGSFLOTANEMHFJVKOOCFQVWACZSVL");

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
    msg.setTimeStamp(0.6486171467429378);
    msg.setSource(39999U);
    msg.setSourceEntity(209U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("GGOHPQNXYEMLXEZWGLEAGIRVIDLHPTSFKOXNWHWZNTFZSDJQRPEUBGSYXGLJRLCHCRMBDJLWFUIIPXXDSPKBYQYSJUFTTMOIVTAFTCGTZKXQHVVENLVGNCUOPDEBZWVPCERTTCLSUUAOJGACEHPWZNNKTSCDVAHYOUBKJZMIQODQOJOQUWVRKBKNHBCXYMIUPFVMYXKRGVDPDZFBQYJMLKAEWLYUAIQCE");
    msg.reference_frame = 5U;
    msg.custom.assign("YIKMHJAOZQGAULWQNKXGOBYGBXDEZPQYGVJVKOXIUBCTONNBDKHYOAGCXMSPAUTGKBPWQPCRSHIPLYMJRQNCSWACNVSFRHDKQUYOZNTUFTMZDQIELTHPRWMQTDAYRCOEYUYFVOBWUFDIFHNIXXTASGSZLBIMPKRJWHZSTRWLPOHSKEYEKHDTMFVSX");

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
    msg.setTimeStamp(0.9834216787351553);
    msg.setSource(19456U);
    msg.setSourceEntity(191U);
    msg.setDestination(62995U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("UJGAXVVOMXVTFGDAWWXUPBYTEDCMNDFKNOOWPPMUKCIJOKVCNYZWCZZBISFYRUHVNBFKPFGRILSBQAC");
    msg.formation_name.assign("IOJZGGNPUPTCLJCQLXLRTKDFLNAIMLRETKEWKWGWSMKAIOEFIVQVFMFPUVCRPJDKALYIUWGRDAWKGNXTZQJE");
    msg.plan_id.assign("UVDLOIBMZLVPDJYRFKORXWAVUNBHZXIIIYSJSBYAWCKWZFBWNKKLYNKQOXUHGCZYSRBUTEHWMLOQKYHHXBJMCEDABGFEKDASQFVPGLVDRXJNEREHOQXOQWUZNHFFJISHOTEPPARAICQWASNJNWKGFLTAFLHIOHRNDNZJMZCYZDQTKPMMRCBLCVIDSSPMMGRXLTDXTTIGYEXJMNJWTUJZZSYGCKGPWABVGETQSCBFAUOFMREVPP");
    msg.description.assign("TKDJOIIMNXWNJFSCQIUKNKGMCULUUHMAMSEXZUGZDJHSAHVWSMRNXOJQGVRNEPRXUTVDDZLYASBIYWZDCLGSMOBEACVOPIVBBRXLOAFOFITRGLEJHKOHJGNBCWAWCKJAILST");
    msg.leader_speed = 0.19339510105970426;
    msg.leader_bank_lim = 0.2696421993859234;
    msg.pos_sim_err_lim = 0.8553841409167734;
    msg.pos_sim_err_wrn = 0.7321926301851576;
    msg.pos_sim_err_timeout = 4231U;
    msg.converg_max = 0.5192523051450668;
    msg.converg_timeout = 13176U;
    msg.comms_timeout = 29287U;
    msg.turb_lim = 0.16825378840953142;
    msg.custom.assign("IRLJNMSZXARHBMGYXGQAMKSNXLUHXIHSPRBYIKODQQECNDCK");

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
    msg.setTimeStamp(0.056236118857821316);
    msg.setSource(7486U);
    msg.setSourceEntity(21U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("LBLRGFZEBFAVFUAK");
    msg.formation_name.assign("ENHEQJUXPUJZMFJTVRPUEDCXIVKGMDLABURKYQSWAQFMLLWMTBLMHRKLABLWWPDPCBQFLXRDXGGOXPEMZRTUGWHGSHXIMBPMNDDS");
    msg.plan_id.assign("MRCSEUFXYDHTFAFJODGQVICHBCWUFJMOLIKVCMWZOZDEAKBAVEL");
    msg.description.assign("WLGZYVONRIRCZMLOYBISMXDTQWAWVZDVKSPYWFHRRAKCUPWHJRQLJDKXBALQMAHMMBUKABGFLTFCYLPYCOEVSYHBFTDMIONAQRJFGXNGPEHYAGCRXPUHSTOXRQATAJHYGJTJULUIURZENZAQHSBTDEIWECCEGIVLFGNNDBKZJBKWFX");
    msg.leader_speed = 0.6394613761031567;
    msg.leader_bank_lim = 0.08723277207573599;
    msg.pos_sim_err_lim = 0.4397660100530272;
    msg.pos_sim_err_wrn = 0.24896754398293575;
    msg.pos_sim_err_timeout = 35623U;
    msg.converg_max = 0.767114204626092;
    msg.converg_timeout = 34439U;
    msg.comms_timeout = 18730U;
    msg.turb_lim = 0.5152746525736602;
    msg.custom.assign("XJAKZMLSTCGRBWZNAMTZOUVRAKJPRHM");

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
    msg.setTimeStamp(0.21234220062160758);
    msg.setSource(45907U);
    msg.setSourceEntity(193U);
    msg.setDestination(12449U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("CQQHKOAIPDFVKDHYQONTFXJPIJJPOUZOFFHEERGVOJLLGXGVUWKKRVEWLLAQYDRWPCMESAEUQQTWYVGLLBGIKAPBCCGSXJBCZMELTVMANWDSXZYIBLAYBAUXZICKHUJXQYGVXGONFBTXZBWWHDMSHTMARHUA");
    msg.formation_name.assign("JUAYZERRWINHBFEPSFSCTVDEYHCQYLGMMKUEMZSLPZQCAYTTXUGPDVLXBAGBVCPLQKLBOOAJSOZKHCRRUZJGFFFYRXNDCIJDWSUAHHRZMNGMODNCFKOSVSUOFIPEINKQRBRAEMGFQIJBMZVJWKDTFXJVTIXPYNOQQCMIKEUJLZWUOLGGSVEIXKISRTNNAXSP");
    msg.plan_id.assign("FRQKVARQOVCOGXYXRVS");
    msg.description.assign("XILEQJPPHHSYBMTDADTMZDLZAXYYUCAIKGBKATGCFNFUHTJHLCXZKUABNQNUBDUWPIKCVTFRENPGYGOKLUESHSGMZPCXRZYGXVYCFOXIEMQGJUWRBGYZPJFGOXBTPLJGKEXPQOVSOUR");
    msg.leader_speed = 0.8020783475416315;
    msg.leader_bank_lim = 0.40056708607500424;
    msg.pos_sim_err_lim = 0.510316362892848;
    msg.pos_sim_err_wrn = 0.4881767615598984;
    msg.pos_sim_err_timeout = 43815U;
    msg.converg_max = 0.8764532599591129;
    msg.converg_timeout = 17754U;
    msg.comms_timeout = 24802U;
    msg.turb_lim = 0.3705437542970714;
    msg.custom.assign("MPXRJVKNNTWARQNBQIXWSPJHAPKUGWSCMEJWTLIOQAJESBBHNZFNCRWSSGDZVGXLUEMYHSVKJCOTORFBDBMDXBHCTOXEPMVKQYCROMEXOROYDHPJSHBGQCNRUDMALDGWIHFRCUUHGNUEJILLKTXCVNYIUOQXSNVZWANVTWDIEAXVIKIHWKYOLLRZEACLYWBZEFYLGRPBJJIUFAPYSYZVTBPXKZKHTPLUF");

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
    msg.setTimeStamp(0.04693710949546348);
    msg.setSource(12109U);
    msg.setSourceEntity(74U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(213U);
    msg.control_src = 64024U;
    msg.control_ent = 48U;
    msg.timeout = 0.8790625622349386;
    msg.loiter_radius = 0.16094622527998004;
    msg.altitude_interval = 0.5561279627707241;

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
    msg.setTimeStamp(0.49602232572107474);
    msg.setSource(43409U);
    msg.setSourceEntity(252U);
    msg.setDestination(40757U);
    msg.setDestinationEntity(202U);
    msg.control_src = 34070U;
    msg.control_ent = 11U;
    msg.timeout = 0.7022248597617027;
    msg.loiter_radius = 0.10775540820262708;
    msg.altitude_interval = 0.1361586684874012;

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
    msg.setTimeStamp(0.7872466880675361);
    msg.setSource(51799U);
    msg.setSourceEntity(204U);
    msg.setDestination(33616U);
    msg.setDestinationEntity(74U);
    msg.control_src = 48755U;
    msg.control_ent = 171U;
    msg.timeout = 0.6196980279463462;
    msg.loiter_radius = 0.10544543784272742;
    msg.altitude_interval = 0.37599282913772347;

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
    msg.setTimeStamp(0.4560085625404564);
    msg.setSource(62356U);
    msg.setSourceEntity(186U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(228U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.008402572916807238;
    tmp_msg_0.speed_units = 53U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7791206942743243;
    tmp_msg_1.z_units = 81U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9282951595012194;
    msg.lon = 0.4651353257295441;
    msg.radius = 0.5632620179151627;

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
    msg.setTimeStamp(0.870533842836251);
    msg.setSource(48421U);
    msg.setSourceEntity(177U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(26U);
    msg.flags = 183U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.704249062168815;
    tmp_msg_0.speed_units = 199U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.48488170596938596;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4510637414383075;
    msg.lon = 0.07462746147638877;
    msg.radius = 0.4548910688148967;

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
    msg.setTimeStamp(0.12776046482177716);
    msg.setSource(38417U);
    msg.setSourceEntity(62U);
    msg.setDestination(23557U);
    msg.setDestinationEntity(174U);
    msg.flags = 117U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8444247725582196;
    tmp_msg_0.speed_units = 220U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1873148011555903;
    tmp_msg_1.z_units = 177U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4784982623897537;
    msg.lon = 0.8834681311277001;
    msg.radius = 0.47511927521805797;

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
    msg.setTimeStamp(0.9751010171049486);
    msg.setSource(41872U);
    msg.setSourceEntity(12U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(185U);
    msg.control_src = 23953U;
    msg.control_ent = 159U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 37U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2874363193565508;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16425178487012337;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9453433971856663;
    tmp_msg_0.lon = 0.31163449742146476;
    tmp_msg_0.radius = 0.9145400377957914;
    msg.reference.set(tmp_msg_0);
    msg.state = 32U;
    msg.proximity = 136U;

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
    msg.setTimeStamp(0.07657334040088193);
    msg.setSource(55687U);
    msg.setSourceEntity(202U);
    msg.setDestination(19335U);
    msg.setDestinationEntity(87U);
    msg.control_src = 63729U;
    msg.control_ent = 96U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5989943738278032;
    tmp_tmp_msg_0_0.speed_units = 31U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6037553355558615;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13227948975907833;
    tmp_msg_0.lon = 0.2198700808228896;
    tmp_msg_0.radius = 0.8608625418077573;
    msg.reference.set(tmp_msg_0);
    msg.state = 58U;
    msg.proximity = 190U;

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
    msg.setTimeStamp(0.256418476855208);
    msg.setSource(50990U);
    msg.setSourceEntity(143U);
    msg.setDestination(7832U);
    msg.setDestinationEntity(183U);
    msg.control_src = 64981U;
    msg.control_ent = 245U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9640177505854174;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.21876466555423912;
    tmp_tmp_msg_0_1.z_units = 239U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5609964103218381;
    tmp_msg_0.lon = 0.34665449884120436;
    tmp_msg_0.radius = 0.4464406152484943;
    msg.reference.set(tmp_msg_0);
    msg.state = 10U;
    msg.proximity = 95U;

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
    msg.setTimeStamp(0.013795019182148205);
    msg.setSource(3592U);
    msg.setSourceEntity(159U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(74U);
    msg.ax_cmd = 0.37164699490480957;
    msg.ay_cmd = 0.28647515949827873;
    msg.az_cmd = 0.3243142367490879;
    msg.ax_des = 0.16995616330914332;
    msg.ay_des = 0.2948219623662879;
    msg.az_des = 0.7234204606061817;
    msg.virt_err_x = 0.39103933067608654;
    msg.virt_err_y = 0.7372351714474519;
    msg.virt_err_z = 0.4511274817312202;
    msg.surf_fdbk_x = 0.8991475749748232;
    msg.surf_fdbk_y = 0.8017838573338085;
    msg.surf_fdbk_z = 0.5989796124055852;
    msg.surf_unkn_x = 0.09625097210729727;
    msg.surf_unkn_y = 0.47973542774745326;
    msg.surf_unkn_z = 0.9707700464008745;
    msg.ss_x = 0.06662945241105811;
    msg.ss_y = 0.9738080168674187;
    msg.ss_z = 0.40795470998444616;

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
    msg.setTimeStamp(0.4725023399476421);
    msg.setSource(398U);
    msg.setSourceEntity(69U);
    msg.setDestination(10026U);
    msg.setDestinationEntity(91U);
    msg.ax_cmd = 0.25024677475013346;
    msg.ay_cmd = 0.9532015887613977;
    msg.az_cmd = 0.5026672257131747;
    msg.ax_des = 0.8363493151488357;
    msg.ay_des = 0.47319704090496184;
    msg.az_des = 0.5645186791505444;
    msg.virt_err_x = 0.9281748039697286;
    msg.virt_err_y = 0.03813871393625312;
    msg.virt_err_z = 0.3543841573096219;
    msg.surf_fdbk_x = 0.2944799777046673;
    msg.surf_fdbk_y = 0.33794222188531153;
    msg.surf_fdbk_z = 0.6007638953422442;
    msg.surf_unkn_x = 0.3762270670353578;
    msg.surf_unkn_y = 0.8391028240958016;
    msg.surf_unkn_z = 0.9726495657129224;
    msg.ss_x = 0.59421494079655;
    msg.ss_y = 0.352044266630961;
    msg.ss_z = 0.9713727914127818;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LSUGWDFUMXSNCRCMTZPBOYJOSEEIFIDRQTEUQWAOBRFLXORWHIYCIKSYTCYRQY");
    tmp_msg_0.dist = 0.6720729892433231;
    tmp_msg_0.err = 0.21985906178255865;
    tmp_msg_0.ctrl_imp = 0.7471798754924698;
    tmp_msg_0.rel_dir_x = 0.8078547012104852;
    tmp_msg_0.rel_dir_y = 0.8821744615304296;
    tmp_msg_0.rel_dir_z = 0.9253471646452189;
    tmp_msg_0.err_x = 0.4374371393757196;
    tmp_msg_0.err_y = 0.4096699063526944;
    tmp_msg_0.err_z = 0.7446934460052591;
    tmp_msg_0.rf_err_x = 0.15634404182063433;
    tmp_msg_0.rf_err_y = 0.5164255283757894;
    tmp_msg_0.rf_err_z = 0.6759516902472015;
    tmp_msg_0.rf_err_vx = 0.182140121424873;
    tmp_msg_0.rf_err_vy = 0.23745611671761402;
    tmp_msg_0.rf_err_vz = 0.6355471251813252;
    tmp_msg_0.ss_x = 0.8251679928396507;
    tmp_msg_0.ss_y = 0.5547438188009205;
    tmp_msg_0.ss_z = 0.025851795059135374;
    tmp_msg_0.virt_err_x = 0.7552092969440388;
    tmp_msg_0.virt_err_y = 0.2880249051570667;
    tmp_msg_0.virt_err_z = 0.4432198135632395;
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
    msg.setTimeStamp(0.2049605100740055);
    msg.setSource(43311U);
    msg.setSourceEntity(108U);
    msg.setDestination(20885U);
    msg.setDestinationEntity(207U);
    msg.ax_cmd = 0.49844531908162626;
    msg.ay_cmd = 0.7477794648733475;
    msg.az_cmd = 0.38028223484025137;
    msg.ax_des = 0.3316665731705024;
    msg.ay_des = 0.754638980255839;
    msg.az_des = 0.7585871271979469;
    msg.virt_err_x = 0.6293550173822189;
    msg.virt_err_y = 0.7853899026152213;
    msg.virt_err_z = 0.44437351126092384;
    msg.surf_fdbk_x = 0.9818707943510937;
    msg.surf_fdbk_y = 0.37596501436896945;
    msg.surf_fdbk_z = 0.06860373492135863;
    msg.surf_unkn_x = 0.14881632666321842;
    msg.surf_unkn_y = 0.5450141756021758;
    msg.surf_unkn_z = 0.08404856116839798;
    msg.ss_x = 0.19699501969524935;
    msg.ss_y = 0.5798645405454697;
    msg.ss_z = 0.5562976613769094;

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
    msg.setTimeStamp(0.16148608796873187);
    msg.setSource(44387U);
    msg.setSourceEntity(226U);
    msg.setDestination(18461U);
    msg.setDestinationEntity(252U);
    msg.s_id.assign("MPOQAUROZVEEATOZGLHAPZWRYIQDUXKMWPSXRWMTNCORCDHTPDDCEEWJVUIMLHQAYAQZLJBKBPOGEEBFNACVMLOECVDZLJPPXKINRVDSCNSLHUHGJJYVRJMTWBBQKNIXQNTZVCYRSNXPLJFNXGHWQJMAGGCGQVWFAYBGYFZXUQXGAFHOWEXTDUPBFRODKYFZUDHRLYLNUOMDSJYEEHBIKNLFTSTCOWQTAVIRUK");
    msg.dist = 0.05470450795381132;
    msg.err = 0.7117476912031043;
    msg.ctrl_imp = 0.3002010852279339;
    msg.rel_dir_x = 0.4955227532823828;
    msg.rel_dir_y = 0.17718962794645332;
    msg.rel_dir_z = 0.3716849250830603;
    msg.err_x = 0.013489549002789314;
    msg.err_y = 0.2380239062087781;
    msg.err_z = 0.42892588990178326;
    msg.rf_err_x = 0.03436472613798636;
    msg.rf_err_y = 0.1770342112159763;
    msg.rf_err_z = 0.9481831803059891;
    msg.rf_err_vx = 0.379416668642668;
    msg.rf_err_vy = 0.565078520973887;
    msg.rf_err_vz = 0.6878013988874451;
    msg.ss_x = 0.20445832532287067;
    msg.ss_y = 0.3814839304459331;
    msg.ss_z = 0.008928711937941647;
    msg.virt_err_x = 0.999328197283835;
    msg.virt_err_y = 0.7569012066619322;
    msg.virt_err_z = 0.39383529228302994;

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
    msg.setTimeStamp(0.5896680677388795);
    msg.setSource(36494U);
    msg.setSourceEntity(209U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(118U);
    msg.s_id.assign("ASCJOGLSBHIJVTLNWJCAUOXPOGSPKKYDPSTZIONSYXWMZCARBQXNKJPIXURDAZPDACAFQUIXL");
    msg.dist = 0.6642891657593162;
    msg.err = 0.13572039928578572;
    msg.ctrl_imp = 0.5943473187388189;
    msg.rel_dir_x = 0.5194104386821404;
    msg.rel_dir_y = 0.25675451950424977;
    msg.rel_dir_z = 0.9613674260634284;
    msg.err_x = 0.9620318925169564;
    msg.err_y = 0.8780301456134217;
    msg.err_z = 0.26012531773165937;
    msg.rf_err_x = 0.1702145189809482;
    msg.rf_err_y = 0.1695191415913334;
    msg.rf_err_z = 0.2279377443723256;
    msg.rf_err_vx = 0.18799276200510717;
    msg.rf_err_vy = 0.4270480604792941;
    msg.rf_err_vz = 0.9850622851815185;
    msg.ss_x = 0.9952717043918595;
    msg.ss_y = 0.43082815539594277;
    msg.ss_z = 0.48958824635190634;
    msg.virt_err_x = 0.9175934482709424;
    msg.virt_err_y = 0.38190118637816095;
    msg.virt_err_z = 0.44316415101208995;

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
    msg.setTimeStamp(0.8252862827579555);
    msg.setSource(6093U);
    msg.setSourceEntity(210U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(24U);
    msg.s_id.assign("EZPRUHLSREGDYHOJJNGMAJVHBKRJDOIEZLDFGFXP");
    msg.dist = 0.20608338345789867;
    msg.err = 0.5908110732956162;
    msg.ctrl_imp = 0.28567817445053834;
    msg.rel_dir_x = 0.20268373734538447;
    msg.rel_dir_y = 0.9935319622142802;
    msg.rel_dir_z = 0.5051437796703506;
    msg.err_x = 0.9676401343673189;
    msg.err_y = 0.07295034658763866;
    msg.err_z = 0.18465891807599222;
    msg.rf_err_x = 0.42753805189438565;
    msg.rf_err_y = 0.7645368434808512;
    msg.rf_err_z = 0.48434234406970345;
    msg.rf_err_vx = 0.3724106560305066;
    msg.rf_err_vy = 0.012566915632923892;
    msg.rf_err_vz = 0.48142455379530924;
    msg.ss_x = 0.3610643818132383;
    msg.ss_y = 0.545564675650095;
    msg.ss_z = 0.21518068997590334;
    msg.virt_err_x = 0.8941418460019451;
    msg.virt_err_y = 0.3728097896297181;
    msg.virt_err_z = 0.44324695866328523;

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
    msg.setTimeStamp(0.23287825608998425);
    msg.setSource(6116U);
    msg.setSourceEntity(218U);
    msg.setDestination(45516U);
    msg.setDestinationEntity(2U);
    msg.timeout = 11885U;
    msg.rpm = 0.9463306611032047;
    msg.direction = 171U;
    msg.custom.assign("QOIKMEAEJFKZTPOJMNJPQIUUVGCBRQGLYZQDETMOXTRNNESDPAJLFGESPTKBCRLIYQZYCHFINAVARXYEBHWUNCPBCKLCEZWQBOWSWDZOTBRDXPUVFEKLFGQXMRKRNXOVDMYRD");

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
    msg.setTimeStamp(0.6469946119163127);
    msg.setSource(60902U);
    msg.setSourceEntity(90U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(100U);
    msg.timeout = 2121U;
    msg.rpm = 0.5399967878048509;
    msg.direction = 4U;
    msg.custom.assign("CBAUOOPLFOZGOVKDPMEALUWERXPWCBKJIISDQTJSMWEPZNKAQGQSLXQSXYUMRWTFDSHDWGIDQAQRLUFUAFHAFCXQSULEAVHGDRSEXFZYYKROWMNIJPLQMVGAXFRNJPUFNVWJMVIRVLIXTZZKNPKBKLNHGQI");

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
    msg.setTimeStamp(0.24441642737574876);
    msg.setSource(2504U);
    msg.setSourceEntity(79U);
    msg.setDestination(400U);
    msg.setDestinationEntity(220U);
    msg.timeout = 13476U;
    msg.rpm = 0.3115495235482276;
    msg.direction = 206U;
    msg.custom.assign("OANZCXLZTDWVQTGSFEIZBMUWCSLEWNYDMUVYBTIFCPZBSYETDMCRDMGORBNJKHLPMCAKRZXYEREKXINMJPDKGCSXCPYFUVSJUHIGRQCKUPAITGHNVEHAJVOARGPYBMKDEWPQJYBPBEXOCIBLXROGBDWNVTVMUQNEOGTLEAFZZTFZKPXUNRUQLKOJ");

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
    msg.setTimeStamp(0.647819651392759);
    msg.setSource(50659U);
    msg.setSourceEntity(211U);
    msg.setDestination(61320U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("VLDFYGHRSXQYCEGAHCOXZKGUPXXAXJUEVSWZKNRVJOLQTWRDLXMCGQZDYECDLWCZJYEHPSWQZARPOMJIUBCPMD");
    msg.type = 179U;
    msg.op = 51U;
    msg.group_name.assign("MKXEMHROKJQLUKFYNVDNQVGBPOWBZFCAVJFXITHVMUWJQGUJAIONHEUTEDFKCJDXSYQRPWUSYDHFKIGAUESDPCBLPNAOLWZRMZTCBSZBBWPIGNXGFHCLVTIMUYXGNRQTDTMLNCHXE");
    msg.plan_id.assign("HZUDGQYFOLYCINPJMJWZPDFBEKAEMHKGVAKXIVZUK");
    msg.description.assign("HPZKAIQFWDZWXEWRZZPEWFP");
    msg.reference_frame = 131U;
    msg.leader_bank_lim = 0.9962659049477308;
    msg.leader_speed_min = 0.04315337927704532;
    msg.leader_speed_max = 0.7491378854033186;
    msg.leader_alt_min = 0.5765345932013742;
    msg.leader_alt_max = 0.7658109528294084;
    msg.pos_sim_err_lim = 0.5537981602260897;
    msg.pos_sim_err_wrn = 0.4806186602776842;
    msg.pos_sim_err_timeout = 11931U;
    msg.converg_max = 0.8500949112180485;
    msg.converg_timeout = 28040U;
    msg.comms_timeout = 6011U;
    msg.turb_lim = 0.6264628748228602;
    msg.custom.assign("WZILZZUCHRMBHNXXBCMXQCHIGEKNIFFPENRHYOJGJCVPMCTEVTXSRIFNQPJZIVASUAJGRWBFMNLUDNTCLZHSBKIYTFSOETPAMUNWPIYXHCUEYKDFMYHYDJOHKLLKDSHXPSAWDXNOTELQJRYECHEBROSBBFEDAAWSYLYXJDTURIPORDQOOMGABMFBUQUQKJKWZVCXVOAJAKPGGGADGWWQNBPOMQVMIXVZLWVNRVYIZZT");

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
    msg.setTimeStamp(0.6280496542243571);
    msg.setSource(63961U);
    msg.setSourceEntity(142U);
    msg.setDestination(12140U);
    msg.setDestinationEntity(54U);
    msg.formation_name.assign("XVXQZUAEWTKDJYZPUZEQSSUBWOJMFYTLGLEIYDAVSZGPPZBISUAGODXBMLFXBAKZDPIKUTHNNSBVHKWGFQMXRQVVIPTONURBMAITDULYBWGGVKKPYSDMKTNMRCNFJOQXMPECNETFYBVSQUQQBGIDCCYLYHWRMPNKLJRJQFLJBJWCSEPZWFOCTSWLNTAGEHVIIVZLCXJFIHZKXJOYEKRHOROTHNDAPRFSNLORHDAZCXJRFGEMYCAA");
    msg.type = 6U;
    msg.op = 61U;
    msg.group_name.assign("TXJFEWVMOLIFXCNOVZTHYDRBOBMPDLTYAOFWILWANEAWDFMBKFACHKSG");
    msg.plan_id.assign("CDPOQYQOSMOCEM");
    msg.description.assign("AQAVSZYRCNKNRZCPHVDHQGVUUBZFUTCOJGVXSXWCUCTXKLKFHNJOBTEFQPVJDFIGXTQONPXSITMBGHSKJBOSFODJDXMRQSTSCJLINLFGPWCKIWRLAWYBWRSFYALGACPVLGUYPKYRPZWNBAQNDDQDXGBHYHCOMZMQWIQLOWIYABZBEADEUXXYQRDOEYBNWPGPVCWEKZATJEJOSMXU");
    msg.reference_frame = 218U;
    msg.leader_bank_lim = 0.015233971542325642;
    msg.leader_speed_min = 0.805003413524742;
    msg.leader_speed_max = 0.16135345500639708;
    msg.leader_alt_min = 0.5662669664340453;
    msg.leader_alt_max = 0.47393461426556627;
    msg.pos_sim_err_lim = 0.1948016959419907;
    msg.pos_sim_err_wrn = 0.5664159590881187;
    msg.pos_sim_err_timeout = 35914U;
    msg.converg_max = 0.9148606692090123;
    msg.converg_timeout = 49005U;
    msg.comms_timeout = 38310U;
    msg.turb_lim = 0.10300258918810079;
    msg.custom.assign("IGTBNDZXSFVJEEDQMUZXJEHVYDXCOVZQLBAKKQSXTTPYKRKCJIFCZVLYQHSWTNIAQHPNRCHMBBKIAAFGSMWMBRPUBLHDMMNMJVBKEYFNJAQWWUVOPQTJLEWQL");

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
    msg.setTimeStamp(0.7716543519645159);
    msg.setSource(18432U);
    msg.setSourceEntity(171U);
    msg.setDestination(21535U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("EUBFTBSIQGCLYOTDIJXJYFMQMNWGOYPCZKJEVDMZGUGBFYKZCMPAYLKMLFSRNYTYPNREHLPVGAIKRFTNOMDLAPJRYSSORE");
    msg.type = 109U;
    msg.op = 78U;
    msg.group_name.assign("SZJCUNXDIETNFXUGCXQLVIREMEAFGLKLDAYCEJVAZHNNPDTKUPBXCGCRVFRYBMICFHMJVZERKYMWHJEYSHZTSLGJOXYWZTFDAOMQIZLEPYOBRXCKJMUYSOYGOQSXQVKQVAETJPPNWBHMNIFNYBCPWHMKNXTSBXFQOKZDGAVKNICWLYLVUUGIKGUXC");
    msg.plan_id.assign("ONIJPHFIFZZPRRDVYOQLCPBAUBTLYIVYBSXWSKMURGXGAVIIVSPSWOENWHKQJUWLNBCJNXBOCFEDMKJLRZOTUKRGPGWXMYRNTHVEBLBDQMNHULJANCSQIKQTWBSETPWMVMGTKFTOGTCDMWPOYXHJYRVLFXALTASXYDUEVYXKXCGFEMDIWUEKUQRPJCGTZSOHNDCYAFNHJFUUICGWASCZJOMRAQLQMELNDEZVISBHBEZZFADHADFOQZR");
    msg.description.assign("YBERCUXPVJLUCYUJXUQRDSQTRLIBONHKXNSIMIONQRFSKADQHTIUZCWJKWFFOKVZARWIAAOEMMKZEAACREWFZYPWSMTISZSJGPXAKNJTMDUPSQOLELHGOQAUASFQTRDSTKON");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.8870488863157443;
    msg.leader_speed_min = 0.9810958829047273;
    msg.leader_speed_max = 0.7262332675788927;
    msg.leader_alt_min = 0.8046622516648155;
    msg.leader_alt_max = 0.8963988654716535;
    msg.pos_sim_err_lim = 0.1995847246705269;
    msg.pos_sim_err_wrn = 0.4340545627115978;
    msg.pos_sim_err_timeout = 37204U;
    msg.converg_max = 0.8981849159506564;
    msg.converg_timeout = 43636U;
    msg.comms_timeout = 55366U;
    msg.turb_lim = 0.0734902153565764;
    msg.custom.assign("DIGYJHWMNGVUERGHQNOSYBRJTOERTTMTJIOZKVBFACIXRZCROSNYOUQAAQICHQBESQYPNXGKPIGNQCAQFNBPNFGHJOUYYSDHCPLZMOXWELYBZHMLETXRSZMWRWKMAXPBLVDZUZSJAFPOFAITNWXMHGGVJLKNWXDNBJKVCWDOLFTSHILKBHPISDMLETBWMQCCRFMJVAZLHTWUPRBQGXEUCWUSKKZQIEVOIDEDRYUTP");

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
    msg.setTimeStamp(0.010685306227567137);
    msg.setSource(17727U);
    msg.setSourceEntity(19U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(108U);
    msg.timeout = 7290U;
    msg.lat = 0.647820935533166;
    msg.lon = 0.35852061283228054;
    msg.z = 0.4766576878554728;
    msg.z_units = 21U;
    msg.speed = 0.16253396821103905;
    msg.speed_units = 154U;
    msg.custom.assign("COKAFLESZFBMLCGPZODRQCYBNYVQHHVDSFBTEBOBJABMMXRQNOS");

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
    msg.setTimeStamp(0.5104938248100516);
    msg.setSource(23032U);
    msg.setSourceEntity(35U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(247U);
    msg.timeout = 59408U;
    msg.lat = 0.4557847590541323;
    msg.lon = 0.006630169111013329;
    msg.z = 0.21161222680481007;
    msg.z_units = 120U;
    msg.speed = 0.29865736685187894;
    msg.speed_units = 210U;
    msg.custom.assign("QGKXRGHKHLICNCHLTHHTABQBVWZBPFTRXURXRCNKBIOEMMOUOPEADU");

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
    msg.setTimeStamp(0.9667715986931572);
    msg.setSource(59910U);
    msg.setSourceEntity(251U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(81U);
    msg.timeout = 15032U;
    msg.lat = 0.5104605933172669;
    msg.lon = 0.0640583825358556;
    msg.z = 0.07613096636766281;
    msg.z_units = 35U;
    msg.speed = 0.9285641522772733;
    msg.speed_units = 12U;
    msg.custom.assign("GFYLTESGMMREVTLXFPYGAMNPLSOWYDHUEJFWRJVVOYEZCHKGMTQTXQPBYZQUNRBFOKIJVXLCLGLQCXGVHJAAQRUIIMRELARKKPDSSMGBIASPDHOVBWYPAWIBXSUDQODBIXIHOQATXCWQSEZFEYCFPIFONDCZMRNKKMOAHEKHNBFWW");

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
    msg.setTimeStamp(0.18391942180329712);
    msg.setSource(59318U);
    msg.setSourceEntity(24U);
    msg.setDestination(26074U);
    msg.setDestinationEntity(92U);
    msg.timeout = 49563U;
    msg.lat = 0.5647182735317035;
    msg.lon = 0.3507833905704182;
    msg.z = 0.82211368682036;
    msg.z_units = 245U;
    msg.speed = 0.8836733385305432;
    msg.speed_units = 130U;
    msg.custom.assign("ZQXGCBSUALLLGBDORBMTNYJDDXOVQIJCPZSUPCRMIHXGGHVMGUBESNMDGFDJVAHJDKHEYEVOEEIRNSNMMSHMGIJYSXQRLAJMUHYLAFTFTAUYOOFWUATEVRCEXZQWMYQNKGURYUHNXTENXTCKKTDKIFHPGRQP");

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
    msg.setTimeStamp(0.6183117575033048);
    msg.setSource(22902U);
    msg.setSourceEntity(226U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(226U);
    msg.timeout = 38137U;
    msg.lat = 0.9197477076049699;
    msg.lon = 0.14469453173795255;
    msg.z = 0.7677681092694705;
    msg.z_units = 126U;
    msg.speed = 0.6068058297503196;
    msg.speed_units = 69U;
    msg.custom.assign("NWMRFFTIZSMKPDEQFFFGNYOTAFGSIXWDNWBQJ");

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
    msg.setTimeStamp(0.6176144553381914);
    msg.setSource(59794U);
    msg.setSourceEntity(124U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(169U);
    msg.timeout = 23018U;
    msg.lat = 0.5401341846371351;
    msg.lon = 0.7158080726470099;
    msg.z = 0.9471649516500978;
    msg.z_units = 7U;
    msg.speed = 0.4771776139576204;
    msg.speed_units = 104U;
    msg.custom.assign("USNXUTFHPCTZHAQWQSQQTGPIIDRYDWRXLMHQCFJMZABNLKKYMOLECRLCIWADYXFNXRVHISPHWCIPTEWDGUAUOCQSJKELJGZOQNYWBPATEBYPWDCEFOGKLLPYIULGJNRMXBKMEVMBONHIULVFLRHEWDMJJVKXCONSRXZZUTJDKODKSNVQFUOPXFGEHGZTTBFKJTRISAIMZZXRVEACDFXHVJGSRWP");

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
    msg.setTimeStamp(0.30379282917355444);
    msg.setSource(42022U);
    msg.setSourceEntity(12U);
    msg.setDestination(17553U);
    msg.setDestinationEntity(21U);
    msg.arrival_time = 0.8599066140247134;
    msg.lat = 0.7414985227645795;
    msg.lon = 0.5836383321987206;
    msg.z = 0.26731857305987783;
    msg.z_units = 250U;
    msg.travel_z = 0.517938173870357;
    msg.travel_z_units = 189U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.209829822283094);
    msg.setSource(27155U);
    msg.setSourceEntity(224U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(134U);
    msg.arrival_time = 0.8760755047741391;
    msg.lat = 0.12276228588814742;
    msg.lon = 0.8468908306359316;
    msg.z = 0.47138612936575386;
    msg.z_units = 199U;
    msg.travel_z = 0.9056417513321453;
    msg.travel_z_units = 231U;
    msg.delayed = 69U;

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
    msg.setTimeStamp(0.5011328143475579);
    msg.setSource(49792U);
    msg.setSourceEntity(193U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(1U);
    msg.arrival_time = 0.127289007276164;
    msg.lat = 0.5431319787385127;
    msg.lon = 0.9750855797364284;
    msg.z = 0.029646855010668105;
    msg.z_units = 206U;
    msg.travel_z = 0.5181812588413365;
    msg.travel_z_units = 225U;
    msg.delayed = 9U;

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
    msg.setTimeStamp(0.6561884655077912);
    msg.setSource(53774U);
    msg.setSourceEntity(130U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.9863596836216293;
    msg.lon = 0.8519152967666109;
    msg.z = 0.47551197179858284;
    msg.z_units = 1U;
    msg.speed = 0.3574184213527518;
    msg.speed_units = 93U;
    msg.bearing = 0.6233108537788651;
    msg.cross_angle = 0.6469582111573956;
    msg.width = 0.7849324861342544;
    msg.length = 0.32514239420813873;
    msg.coff = 114U;
    msg.angaperture = 0.38808160075280385;
    msg.range = 33986U;
    msg.overlap = 253U;
    msg.flags = 205U;
    msg.custom.assign("TQUTIFYAMWFYXVBIFSSRDQSSDEZKDXHHAAMMKMSEYCGQTDXXHJEUJUNIAYOPYNTBLHQHERGPOEVRQECKWDOMLONXCAQZPOSTUYTYHJMDHFFIOLGFRZOKIWTPZBNAVDUYBKGVEAUJPDNIDLJCNCWGYPVOKMTPLGLXXTRJMUZNQRHMSSFHZUFNWSZPJUIHVGLEWMLP");

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
    msg.setTimeStamp(0.2759473701789923);
    msg.setSource(62764U);
    msg.setSourceEntity(218U);
    msg.setDestination(32130U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.20567092723968727;
    msg.lon = 0.7158573008423015;
    msg.z = 0.8888990734423011;
    msg.z_units = 9U;
    msg.speed = 0.3232208659841984;
    msg.speed_units = 8U;
    msg.bearing = 0.17429836873963767;
    msg.cross_angle = 0.24421570622616784;
    msg.width = 0.08076438087543858;
    msg.length = 0.7321317666969773;
    msg.coff = 126U;
    msg.angaperture = 0.1824303810107759;
    msg.range = 50789U;
    msg.overlap = 242U;
    msg.flags = 148U;
    msg.custom.assign("ZTUSIEFKOYXBRUAKISUUXMLLDBEOVEHGMCJUCVLMLNJJPLHOLZDCBBRDIZOWVTPMQIGMOFADEPTDGUXBPQFYXFTLBUECKVBVFIKNSJEQGYWWVGXRRCWHRLOJPPOKISZEZNVHYHAHUXNZXRGMHAFSORAPWCHQSQAWCYZYKYJQSBJKRHUSUWZVKDZWTTWPOHNIFYKTRSTNXCSQGMOLACIDBQMACF");

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
    msg.setTimeStamp(0.045450392236264014);
    msg.setSource(61253U);
    msg.setSourceEntity(125U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.15938578533836922;
    msg.lon = 0.14335060934939192;
    msg.z = 0.5636948318696843;
    msg.z_units = 33U;
    msg.speed = 0.9750250523066454;
    msg.speed_units = 52U;
    msg.bearing = 0.2537285465687992;
    msg.cross_angle = 0.887111950888178;
    msg.width = 0.14860121851060482;
    msg.length = 0.7599974953148566;
    msg.coff = 39U;
    msg.angaperture = 0.22787908635588627;
    msg.range = 43099U;
    msg.overlap = 39U;
    msg.flags = 29U;
    msg.custom.assign("XVVXRDFZGWWNOEFWQIKUQBRNOIYCRCIYGYAERTKBRXLWDMPDGHJXDIIKQBEFPSZHCTBIGRMXTCHELBNADMQHEKXGNYPXVGITQPNRLKLKSLQVOOFIQVGVXAVBCSZHJPUZFZXWS");

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
    msg.setTimeStamp(0.033637197960585286);
    msg.setSource(15590U);
    msg.setSourceEntity(226U);
    msg.setDestination(64506U);
    msg.setDestinationEntity(71U);
    msg.timeout = 39185U;
    msg.lat = 0.7190926336947114;
    msg.lon = 0.9582733878935479;
    msg.z = 0.00038363292616339084;
    msg.z_units = 61U;
    msg.speed = 0.21877441768357941;
    msg.speed_units = 204U;
    msg.syringe0 = 146U;
    msg.syringe1 = 99U;
    msg.syringe2 = 125U;
    msg.custom.assign("JMBCCTFXTXYXMIMRSBRXGYPVUNOUOHDRPBKYGTFXUNNRHHRGZFYZENQOLIBKNHXJGVBQNAAVHCDTQARFZCSVZQLKAIYVGVRSGFIDOONSWZPLDDJNQOOXJWPTLPOEEUBKEWAXDSUYBZMWBRJDHIMHMKJFVEQZVIGEPIUSKLKPHYFDWWQUFSAAIYVTYQTZPEOWULAODMSMHMDE");

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
    msg.setTimeStamp(0.5849844472897306);
    msg.setSource(48473U);
    msg.setSourceEntity(3U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(212U);
    msg.timeout = 59720U;
    msg.lat = 0.7596305691261053;
    msg.lon = 0.7770637364740092;
    msg.z = 0.8166177847436105;
    msg.z_units = 19U;
    msg.speed = 0.6604390699631767;
    msg.speed_units = 16U;
    msg.syringe0 = 121U;
    msg.syringe1 = 149U;
    msg.syringe2 = 218U;
    msg.custom.assign("YZQHLHENBKXJIAAVAGMMJPYCVROMWFNEIONUNDDSNUKETHFYIPTJEKUISYOGAJUQGNFXSOJFQUCTBAHRPVXKZQAUEYVDCSIGPKLTLOQWBXXTVMJKOLQBLFKKAMEBBWIZBOPGAFXCTZTEYGYRLLRWDXDSXORDFBGQVMMVFEYIBRZUERXVZSQDULJVLXIGNJSZRPNAIPQWWHPMUBCOYSCAPUKORSWWHKTCGILZ");

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
    msg.setTimeStamp(0.9278790066111032);
    msg.setSource(41503U);
    msg.setSourceEntity(26U);
    msg.setDestination(3650U);
    msg.setDestinationEntity(41U);
    msg.timeout = 27215U;
    msg.lat = 0.19802361067522856;
    msg.lon = 0.014953753807885994;
    msg.z = 0.20186009283843875;
    msg.z_units = 116U;
    msg.speed = 0.6528954523525873;
    msg.speed_units = 251U;
    msg.syringe0 = 12U;
    msg.syringe1 = 245U;
    msg.syringe2 = 16U;
    msg.custom.assign("SIHDDFUTEZNKQONXQMRSOFCOHVRAZVYIYFBAJCGULELTBWJAXJBLDXDNCYDTWTXMVCTFTWFXWAURKAVINSSYCGHHDBEMVWSBEGQQLKVATPYDEUOSMQBZHJRTAUAPWSIIGYPLJUGCPZKKEINZVKHFQLRSDJWIZMHGXRZYONJUAAECNZXOEXKZDGOWLJUPQFPXCVLUNOKBMZMOGMQ");

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
    msg.setTimeStamp(0.9117307129041189);
    msg.setSource(19937U);
    msg.setSourceEntity(42U);
    msg.setDestination(54418U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.7105893613214885);
    msg.setSource(61280U);
    msg.setSourceEntity(18U);
    msg.setDestination(43930U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.37174067708520664);
    msg.setSource(1208U);
    msg.setSourceEntity(62U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.7525308959507689);
    msg.setSource(61909U);
    msg.setSourceEntity(74U);
    msg.setDestination(63815U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.7532449717559355;
    msg.lon = 0.03548363143367872;
    msg.z = 0.030081658707317938;
    msg.z_units = 168U;
    msg.speed = 0.2478017490151201;
    msg.speed_units = 242U;
    msg.takeoff_pitch = 0.25716368694288017;
    msg.custom.assign("JSOPPTYUIRIOTYSLECOUJRNZQMFEXVKWXPWBDYLOGNSKJAQTUPHKLRDHMBWRZQAWPYHNKBGSVNSAWKBRMVCQVIDRKOFTJZLYMTDPAGEPHKHKGHMPVQNDLQXTGXWFKDWSISOAVUBCXEFUBETINHPVIAUBSWOZFJCUJYDXYFRWQMLUVFRTIZLEMAAFMDZLNBBHNQTCRUHIGSEMGPXWGYAFHEGBIJJUDOZZCOAO");

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
    msg.setTimeStamp(0.17421033160895405);
    msg.setSource(7665U);
    msg.setSourceEntity(4U);
    msg.setDestination(52372U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.4110443123373203;
    msg.lon = 0.17559240027514933;
    msg.z = 0.3811428226012016;
    msg.z_units = 105U;
    msg.speed = 0.09373412051165142;
    msg.speed_units = 1U;
    msg.takeoff_pitch = 0.11615928189291003;
    msg.custom.assign("ZVHSRDPAIJPNBYOJPFLURAWOSGBXYZYYTMBPASOKNWXXMTTEXGUWPCEAQYKJIJMGUWECHCUHDRNODURDNONAUWWJOSDAOOBKVJGZ");

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
    msg.setTimeStamp(0.7664365320171649);
    msg.setSource(49517U);
    msg.setSourceEntity(212U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.03831817163959683;
    msg.lon = 0.31912083642156364;
    msg.z = 0.993292798524076;
    msg.z_units = 33U;
    msg.speed = 0.9097584527945133;
    msg.speed_units = 173U;
    msg.takeoff_pitch = 0.20772292667982772;
    msg.custom.assign("FHDIYIFEKBMGLDEDTJFYHRHKRLPTVTGABQDTUCZOTCIJXQNPOVNVAVBZTKICSVAKBNUGFSBRIQSMQDGKHZMRFAISYNFMEHFWOQXSOYCJBLZPPTZJFXIE");

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
    msg.setTimeStamp(0.8035064212075422);
    msg.setSource(21446U);
    msg.setSourceEntity(116U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.9797012895924956;
    msg.lon = 0.3542988380973032;
    msg.z = 0.0908571228773486;
    msg.z_units = 23U;
    msg.speed = 0.6012793143637185;
    msg.speed_units = 71U;
    msg.abort_z = 0.06308579647874568;
    msg.bearing = 0.9249932767535364;
    msg.glide_slope = 141U;
    msg.glide_slope_alt = 0.9665906302818315;
    msg.custom.assign("MNDCDECBSOGLQMFBUIXRVFXQGUMIPEIEZTQOLPVYCZGNCPIOOUIDTUFKRQITCNMOCXBVSADOOQMZBPTYHLJVIYGLHXARBGORJGPJJKESBMTAVRRWDBLNWQJZOCTRVADWRJAVFSJHHRIBDUETMLTHKEKYNLWJVYYSFXYNSZJVHILEXZZIMGFFFCXBFNHUPPDNCBKSANEHRMMSQWNXUSAKE");

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
    msg.setTimeStamp(0.03498315719061584);
    msg.setSource(10046U);
    msg.setSourceEntity(238U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.17672822171255043;
    msg.lon = 0.7297595690327866;
    msg.z = 0.930156744156487;
    msg.z_units = 21U;
    msg.speed = 0.9765809344143468;
    msg.speed_units = 166U;
    msg.abort_z = 0.3697156369241723;
    msg.bearing = 0.41407003887514926;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.9495462240140576;
    msg.custom.assign("VDFGLSWKANWCQCBJNRNVUVVLGESDOBWQCJXHTTJWAABKPVJRWGWBGCEKI");

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
    msg.setTimeStamp(0.9284033328977137);
    msg.setSource(32616U);
    msg.setSourceEntity(212U);
    msg.setDestination(42862U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.7734315577518486;
    msg.lon = 0.8866245261745438;
    msg.z = 0.5760891004158926;
    msg.z_units = 181U;
    msg.speed = 0.2576406063530673;
    msg.speed_units = 72U;
    msg.abort_z = 0.1927905383027636;
    msg.bearing = 0.4565817819575322;
    msg.glide_slope = 69U;
    msg.glide_slope_alt = 0.8213738347415684;
    msg.custom.assign("UANBRVOXJWUJDMCHRUCIPOMCIYLJZPHHKVZLFDSPULBYOCRTVBSBTNDCKBSZKPGPZGAZVSGQJVBQEJIHZBOYOYQMLBQ");

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
    msg.setTimeStamp(0.8855935578839913);
    msg.setSource(58813U);
    msg.setSourceEntity(217U);
    msg.setDestination(8019U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.02561367753792443;
    msg.lon = 0.38914477940614633;
    msg.speed = 0.15274583586554202;
    msg.speed_units = 52U;
    msg.limits = 74U;
    msg.max_depth = 0.8153751194169737;
    msg.min_alt = 0.01816952818248263;
    msg.time_limit = 0.06351509240831343;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.17830594159676205;
    tmp_msg_0.lon = 0.3282870917388553;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DTOOAYLNBJGSIRIMULJFQKCLBWVUACDGAOSKFXZLNSDDWHYPWIKNMQIYSQRRRHHBRUZIRXOQYBXAJFKPFBENPZBEVFWCTGLGDPESNKUVDRKSUOOZUFCJPIPLWGKYEEZFXWNXPIPCDTSNTZHSTABYOIMJEWYNEXXVCPJRJKQPBMVQVGHAXHYCZKGZGRRUUAAQYLMHILDXEYUGWANHQOOMM");
    msg.custom.assign("BVYNXMAVQNKYQGKSUPEYUZQMNDRPZZCKWABHJTHAGWBJMYANZLIJXRYWOLQDTGLSZSLFWENRXHKKCKPDPOYAJOIEEVMYUHFZUFLVSMDYFWFUGRCZKCFIDHDXVJNLTSQCARVZOLTVLGLRUMOHGNYBSU");

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
    msg.setTimeStamp(0.39834287545573754);
    msg.setSource(13058U);
    msg.setSourceEntity(182U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.8952130326275003;
    msg.lon = 0.41975578457600193;
    msg.speed = 0.08871881146306904;
    msg.speed_units = 126U;
    msg.limits = 30U;
    msg.max_depth = 0.027361205198776828;
    msg.min_alt = 0.7708933321906771;
    msg.time_limit = 0.6064400229758913;
    msg.controller.assign("CPIEDQMUVOVGUUIMPUNTDZKFJW");
    msg.custom.assign("VMMUMWAZKCUQCSZMWSIVZZITOAHRAILAEOLKQDXCIUSZGSWUDULXHXQDHQRDBPWGKGUYWHWMQNBCGOCNYBFJVPQNCCKUKPJICMSOAAQOSPZLFSQGGE");

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
    msg.setTimeStamp(0.5921194409014542);
    msg.setSource(65391U);
    msg.setSourceEntity(77U);
    msg.setDestination(43061U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.09303852505004373;
    msg.lon = 0.07951462584451419;
    msg.speed = 0.02264022320164716;
    msg.speed_units = 247U;
    msg.limits = 188U;
    msg.max_depth = 0.35329894279355667;
    msg.min_alt = 0.9751740390891118;
    msg.time_limit = 0.6971363377967728;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.779189205080317;
    tmp_msg_0.lon = 0.07607016533376854;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IHBVETTAWVPKCKAHQVSPEKXCQMRUNHEAHMZBDKAPWOAWEDXQKRDPPSSQAYCFELJHILPXEFPRNMSRZQOCCHKZXLRVWSDUWQQOBFNXDMXIJZWBBWFPLBFQLUUTYGZECWWMHA");
    msg.custom.assign("TBWOSSYRPTEFOJMKAUAMLFGLSWAXUQUXTRWCIPMKVTYGNOKFGXVBNGOAFSUHOYZJCZIQSIJVTDOETJEBDIYGOKHHYEQRQCXSGAUKVUVPWSNZYYNVGEWSQMQBNQKMMLRFWIRCBGOIWPAXPYBMRNWCYNXDDAMNUHLHVKRZDUCHZCBLMQNLWLGECSL");

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
    msg.setTimeStamp(0.057598545386968625);
    msg.setSource(62168U);
    msg.setSourceEntity(114U);
    msg.setDestination(11714U);
    msg.setDestinationEntity(76U);
    msg.target.assign("CGDCETBFXKJNRLKSJDBXTIBWQEJUUMLGKNGMAZPQJGVKPIYOLLRLARKYTNQSPQDEHAVKZIHERACUHSWVJRKNFLMBTIMYCBQBKUTAFOVEFBYWLOERJBDVOEWWCWAMYMZPCGFDXCGWNAJEFOOXNASUIZSSDCLZHPVHFQXIBDMURUPUIBHXEAFDKTHHKPTMRWDZFWRSFVXAGYQIPYLPZNSGQGHZNVVMLOZCJOUUM");
    msg.max_speed = 0.10012348207981259;
    msg.speed_units = 133U;
    msg.lat = 0.3397965241355221;
    msg.lon = 0.8224792598137076;
    msg.z = 0.8999784425784545;
    msg.z_units = 90U;
    msg.custom.assign("SQAXKQRGSSBTIQJQDDK");

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
    msg.setTimeStamp(0.2935860816751399);
    msg.setSource(60142U);
    msg.setSourceEntity(29U);
    msg.setDestination(3448U);
    msg.setDestinationEntity(21U);
    msg.target.assign("IOJXOGIUMUZWWMPHSSEXYADPPCKSFNEUBQFAAYAYRRTHYYZMEKLSZMBLWJYTWOTHXBTSZGAFPESNKWVIJFOSEHLPBQXAPHANPXRLBTJODEXDXXHZPLFTGTOWVNHOXMMCLVODHLJDUROJKGVJZRCZNDMUHCZQAVKQLCAUFDWBEPIKJMUQINKCWKKGCEDGCPVGDELSSICVTYBVFHNRGVTRTVNRFICBGIMZARFKOUQQMWJIFDQXJBN");
    msg.max_speed = 0.4707069939699414;
    msg.speed_units = 106U;
    msg.lat = 0.09991647819886273;
    msg.lon = 0.5572218063514578;
    msg.z = 0.4699729120702367;
    msg.z_units = 163U;
    msg.custom.assign("HMVMQQJSQXTJPNAKDLKHFMDIVYWKFYJSKZWOIFWHBLYGENSBFHYEY");

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
    msg.setTimeStamp(0.1517828177454058);
    msg.setSource(29921U);
    msg.setSourceEntity(81U);
    msg.setDestination(21123U);
    msg.setDestinationEntity(252U);
    msg.target.assign("GNCXJDKNQIEAOFAGYQNCKUUMATGBPRUTAKLKOFCTCQATHWYVWNVRUEYJMPSPJVVBJWUGHWIYZLGHKRXJQSEJLBHZTSXAYWTFDEINNRTCQBIVRUZOXOMWGDARXLEQJPZPSIYDDRIWMPRSGASHCBUJDEFDOFQILJQOLCBGQEIFRZFZYOYTNDOAJKMUCHBYGLHPILXKZWXZXO");
    msg.max_speed = 0.7404927589727639;
    msg.speed_units = 116U;
    msg.lat = 0.9468067336369802;
    msg.lon = 0.4758421342795951;
    msg.z = 0.36585600455900114;
    msg.z_units = 187U;
    msg.custom.assign("TKEBXBZLZSWSRXTJACQNVTRQFUKOSTMNFLGMDCEUFOIZWYERCDBTPOIWIUDWDBKIAUFUXJGRXQYFUDYTXZE");

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
    msg.setTimeStamp(0.09851979276983358);
    msg.setSource(321U);
    msg.setSourceEntity(197U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(79U);
    msg.timeout = 62243U;
    msg.lat = 0.32252687578255546;
    msg.lon = 0.39957126650153263;
    msg.speed = 0.2964358980822449;
    msg.speed_units = 211U;
    msg.custom.assign("EHAIAFMZYFFPLANNACJOTHOMBDOTXNXMGEWTHJHBGEUJWDGSCZKPPIBWGOLDINLSFAWEPFFQMBPWIKMQSNKQFYUMZBUVGTDVJMQYSDSUJODSKSBRQBGICDBBUVULDZLORXJYZRFXCVENSHKKWGJPRTJZRDIUZYLHPVZUPEEVLQXEPMVXCWGROITUDHFKCRKTQPC");

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
    msg.setTimeStamp(0.12048846036244865);
    msg.setSource(20191U);
    msg.setSourceEntity(146U);
    msg.setDestination(18050U);
    msg.setDestinationEntity(95U);
    msg.timeout = 7338U;
    msg.lat = 0.3067415574821445;
    msg.lon = 0.6962862187071331;
    msg.speed = 0.9369306099162857;
    msg.speed_units = 178U;
    msg.custom.assign("GUWBMHPULGRJEJMWTGAQRSQUNIDYFKYLATKGXXQIEWXUJWCPHEPTEWHKUTTMBTKFVRYDVGYQMXJOLQKOSTXGYDRDSUSSBVHZPCBDSVZLVOIIHB");

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
    msg.setTimeStamp(0.2416166020945556);
    msg.setSource(24564U);
    msg.setSourceEntity(114U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(110U);
    msg.timeout = 57360U;
    msg.lat = 0.5459742368697844;
    msg.lon = 0.32944354722251046;
    msg.speed = 0.7413769841355432;
    msg.speed_units = 235U;
    msg.custom.assign("JPCLWYRWAXFNYPR");

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
    msg.setTimeStamp(0.009184712903731351);
    msg.setSource(22880U);
    msg.setSourceEntity(211U);
    msg.setDestination(11330U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.7310706164595321;
    msg.lon = 0.47392416909684043;
    msg.z = 0.4029079902578996;
    msg.z_units = 127U;
    msg.radius = 0.07333901897782868;
    msg.duration = 18739U;
    msg.speed = 0.46718908028275363;
    msg.speed_units = 247U;
    msg.popup_period = 31848U;
    msg.popup_duration = 50596U;
    msg.flags = 151U;
    msg.custom.assign("ZIAHWBFPCKZJNJHEFBAOYMPCTPXUSRAYALQSZEYVLGREKCOTCFPTBNSM");

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
    msg.setTimeStamp(0.8072774337805876);
    msg.setSource(14572U);
    msg.setSourceEntity(114U);
    msg.setDestination(17848U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.9150000477489189;
    msg.lon = 0.848555005863117;
    msg.z = 0.059305334266733345;
    msg.z_units = 124U;
    msg.radius = 0.8940121434440124;
    msg.duration = 26387U;
    msg.speed = 0.9109254170247845;
    msg.speed_units = 229U;
    msg.popup_period = 58573U;
    msg.popup_duration = 50836U;
    msg.flags = 111U;
    msg.custom.assign("XOAMGQHXIAQJCIADWAMMBCLNKRQGFSLRNZTEFLEJJLQVQJRPDOSZKRWJHRLNPQSDTOEUYKHFBBGVSDZZTBPTDUIZSWEUCXFBAKEHLCGXXYATPY");

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
    msg.setTimeStamp(0.9380985339236846);
    msg.setSource(37086U);
    msg.setSourceEntity(96U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8046616150603798;
    msg.lon = 0.5417297992076406;
    msg.z = 0.42511628139405444;
    msg.z_units = 49U;
    msg.radius = 0.8609344672023799;
    msg.duration = 2061U;
    msg.speed = 0.19894783588430454;
    msg.speed_units = 200U;
    msg.popup_period = 34987U;
    msg.popup_duration = 23683U;
    msg.flags = 109U;
    msg.custom.assign("TLSXMQGKIAKQWWVTFENRENMPN");

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
    msg.setTimeStamp(0.5615586744000779);
    msg.setSource(20281U);
    msg.setSourceEntity(42U);
    msg.setDestination(23031U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.323828761535052);
    msg.setSource(57998U);
    msg.setSourceEntity(215U);
    msg.setDestination(41183U);
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
    msg.setTimeStamp(0.8749323849060601);
    msg.setSource(8583U);
    msg.setSourceEntity(112U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.6121618991025909);
    msg.setSource(14672U);
    msg.setSourceEntity(14U);
    msg.setDestination(44721U);
    msg.setDestinationEntity(228U);
    msg.timeout = 28012U;
    msg.lat = 0.9593376181355612;
    msg.lon = 0.6172036539332434;
    msg.z = 0.45892890542852693;
    msg.z_units = 190U;
    msg.speed = 0.4568241677092618;
    msg.speed_units = 222U;
    msg.bearing = 0.8659945084012535;
    msg.width = 0.44786187998778715;
    msg.direction = 75U;
    msg.custom.assign("QLHKXVSXPRWJETMOQZIKYGZWHLMTCUPDOHGOMMPUIOCSXGNMAZLRNBSKYAFGNFUKUNRSNHJIUHYDRQMIXRBAOOBHMNIGZDITVXHYWDBXLZDQJTEFLKSJE");

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
    msg.setTimeStamp(0.7681616447203056);
    msg.setSource(44576U);
    msg.setSourceEntity(94U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(46U);
    msg.timeout = 9179U;
    msg.lat = 0.2238512497113191;
    msg.lon = 0.2493546430920892;
    msg.z = 0.9019584615609001;
    msg.z_units = 54U;
    msg.speed = 0.975093522700474;
    msg.speed_units = 11U;
    msg.bearing = 0.500751359090414;
    msg.width = 0.5649035291532641;
    msg.direction = 177U;
    msg.custom.assign("EOKSZYXUHQTASMWYMYLOZBSVMYKBCLTHIWOFXZMQBJCKKNZZCZGOLTWRRFGENAEWJXAVLNURBGRIIVAEVUMLOXRUSTRVJAXDNMGAPQCURWNUUFO");

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
    msg.setTimeStamp(0.11182816134784679);
    msg.setSource(14045U);
    msg.setSourceEntity(137U);
    msg.setDestination(16751U);
    msg.setDestinationEntity(242U);
    msg.timeout = 20859U;
    msg.lat = 0.12489492475719144;
    msg.lon = 0.5428640827794183;
    msg.z = 0.3753500427405879;
    msg.z_units = 112U;
    msg.speed = 0.8132303878162112;
    msg.speed_units = 252U;
    msg.bearing = 0.11480050936359376;
    msg.width = 0.4383228950723129;
    msg.direction = 240U;
    msg.custom.assign("CHOIYQNDNVCSQOYFHXMFDIWOMCUFPGEJEPYUCPXYUTLQMNFMTCPIWLIFGLUNAWKEBDWSYAZJFFNERMHSPAJFXEYSKBPHBLJQTRVYAKRSZXKZJHTJLZLKEGMBQZGGYRNPTXKZBISVOCWARHDZKIRTQEBRQSTTAVBEVLONJARDGFTUGMCBREMRVWWZUGICPCYWDH");

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
    msg.setTimeStamp(0.8984597412814279);
    msg.setSource(53932U);
    msg.setSourceEntity(232U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 150U;
    msg.error_count = 51U;
    msg.error_ents.assign("PWEQAOGDCSFGTXUTWODDOMLPIWYKUTQAHIWMZBUQAEMMBUMQGMINXLNAHALSINXHVGQDHRXRSUCHWPYDYJMRVOXSXLONJVKLWHJSZTKCJXSPCNGJOZGGIRKPQTYYZUOAFSXKCEUCSFNTJRIPFQDVKLKFBFPVZLBOPEOKGNBPRZFEJVUQHHRPJHASMKWVZCEIBI");
    msg.maneuver_type = 46204U;
    msg.maneuver_stime = 0.33813950469177323;
    msg.maneuver_eta = 31575U;
    msg.control_loops = 3287900203U;
    msg.flags = 191U;
    msg.last_error.assign("STCUHTKJDHQFTXRMHAWAZVYXVUMZOWDRCZAXWAMUUVFYOONNXMNLJPCSTHRHIFROUASIAJUCEQFBLUIJVYRUALKSODMSDJEBYAQLZXBGBDJKSOGRFZUZTQMYLVYJWDIRKLGMYHPQMIFYAWSJWBFVGBGMPDIECYGPXFPYKDROBKWE");
    msg.last_error_time = 0.6004040632189983;

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
    msg.setTimeStamp(0.3756912087570453);
    msg.setSource(52176U);
    msg.setSourceEntity(99U);
    msg.setDestination(23141U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 248U;
    msg.error_count = 0U;
    msg.error_ents.assign("TSXVOOLNTOXRWILGXZCKVTUZCEDBBZWNSWXPFYNIVBNYEPSQALHVYUJUKCJAQWKUSEWFCUAPDKDFBEDTMXGMRESKAHJMYRUWGHQIRCIXIPPAOFUJVTXAVM");
    msg.maneuver_type = 33526U;
    msg.maneuver_stime = 0.8775742266488269;
    msg.maneuver_eta = 27839U;
    msg.control_loops = 2202578612U;
    msg.flags = 1U;
    msg.last_error.assign("HKKDQTNUSZLBWGKNDQCTQFMDRFRSNHAAAGUYZWWAOLXZELYCRVJNAFSBKBESTNMKODVPQEBWNIDYZXPAGZXNZLTEIFXHOGMIMJLUROVPOYXIYJWOXJFJLBULIDYXJHSDZNPZUTGVUBSUHCWHYECGELXJVLYKGPRQPWMZVQPSMMBTGDQIWRVTCWJKFMSXUI");
    msg.last_error_time = 0.9959046683867427;

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
    msg.setTimeStamp(0.1319599415588828);
    msg.setSource(41096U);
    msg.setSourceEntity(4U);
    msg.setDestination(59937U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 185U;
    msg.error_count = 126U;
    msg.error_ents.assign("RUIOWBXUNOQTIPRZGHKFZPFSHXDMQFUIZYMLVGLAKVPSRFGPBSLTXYESICVXGIMBQWHNOUBBYGXBLRADRWFDQYEXTRKIHLWUWKABVGORGCMCRWOGUFMAMJEYZOFPQIVKD");
    msg.maneuver_type = 24954U;
    msg.maneuver_stime = 0.7177904217252958;
    msg.maneuver_eta = 19903U;
    msg.control_loops = 3477837895U;
    msg.flags = 172U;
    msg.last_error.assign("NSOYRFVNELYRUGNKLGVXTRWROJMEVUKYF");
    msg.last_error_time = 0.5191019022668648;

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
    msg.setTimeStamp(0.8014488225105241);
    msg.setSource(44587U);
    msg.setSourceEntity(93U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(101U);
    msg.type = 107U;
    msg.request_id = 26129U;
    msg.command = 191U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 21690U;
    tmp_msg_0.name.assign("QUHEUZBSVLEEVCDDNPJUSEPFLYUKMJSQAHFIFIMUCLDOJNCMYEMMPFYDTJYDPSZHWKIBZDTHMJZNIKJWRRAWOMUEQFGNOLYRBXIACEPGHIVCZOJAWQZPJOUMQXXLTGSATQKGIMXIAQSYSRPZIXGANBSWAJBKBEJKHYXNFABKYLNZCGFTWRCURWNCLLNQWVGEXZFCYVTQFXBUOMHDRB");
    tmp_msg_0.custom.assign("GKYGPMLNDVBNYSQHONNWSEROTCMQTFGDZMXHFFXHSQCQCAREJZXHJYFMQGEVIRBURPAEAHFUNOX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44770U;
    msg.info.assign("RHWEXBXLOACLPUMDNRTPXWNYBQIWPCGGZPJWMTGUFGVNNASYMWQBDNOXFRZEEFYTHYHGWMHRDAVNECBGRLFPUSSCXIAYGRTQOHFZRRRSRYGPIZYIKJFKLQXAJVTQEBKESXLDIMSUZXBZCFDDUOCAFKVWCDSUDYEBZKJIZVWHQBTZHUTWIACPLHEKJXXZHKOAKJCLHFDOTJ");

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
    msg.setTimeStamp(0.11217675233684299);
    msg.setSource(46052U);
    msg.setSourceEntity(135U);
    msg.setDestination(35949U);
    msg.setDestinationEntity(53U);
    msg.type = 133U;
    msg.request_id = 18984U;
    msg.command = 83U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 15758U;
    tmp_msg_0.lat = 0.3524415221990901;
    tmp_msg_0.lon = 0.8476819806048992;
    tmp_msg_0.z = 0.5859284477179972;
    tmp_msg_0.z_units = 59U;
    tmp_msg_0.speed = 0.23228462541594397;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.bearing = 0.8558981362296407;
    tmp_msg_0.cross_angle = 0.6490055469845295;
    tmp_msg_0.width = 0.9574262357192977;
    tmp_msg_0.length = 0.33845093343238153;
    tmp_msg_0.hstep = 0.14575766273852775;
    tmp_msg_0.coff = 102U;
    tmp_msg_0.alternation = 101U;
    tmp_msg_0.flags = 96U;
    tmp_msg_0.custom.assign("ABGXERMBKPFLZEFVXSVCROHIPJORUBHJWCDFZYLGNXICJJGUDLACWXRFIYXUITYNMPPGGMHREEMSWPCQYZHHGFYLGTXDFTUCEBWNNQYVKWDLJLKZMYXDOUZLOWILSGPJKZMTCWBDOBNGQPZTPRHJNMBETQAVOJPUTKFZCQLVVDQGYFNDTOAENAJNASXHUKJO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37620U;
    msg.info.assign("GVEQBFIQWHRPKCXXWDQULDDQWWNOYRHOFIKYJDHZKCNWAGOOYICUWMZOKEKMGFNZLURDDUXCTDNXAPHTSPOWDGEYKVUTNZIQHFIUCBJSTY");

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
    msg.setTimeStamp(0.9960758692034025);
    msg.setSource(19109U);
    msg.setSourceEntity(206U);
    msg.setDestination(45285U);
    msg.setDestinationEntity(41U);
    msg.type = 196U;
    msg.request_id = 610U;
    msg.command = 206U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.8797351109989223;
    tmp_msg_0.lon = 0.30915083515877506;
    tmp_msg_0.z = 0.35620903368232804;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.39263680207952256;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.takeoff_pitch = 0.6338962964959025;
    tmp_msg_0.custom.assign("ZZRAOOVKSNCDNGKNXMVDWTCUXKSAXQEUWGBYWJLZOIGRXGLHZAQOHFEFDIIQBGONWLXLJIXOWRUPGFSUNVBEYHQYJHPJEQNAPOLZSTHBYZLZGZXHZSLQVUDBRVYBEFDWRCMUXDPPOYIFKVJTLYRCFDKAEKWTDNJLMIERMFAYKUSCVAWWIAWQMMQSGJTBHRVQPDPKKCNMOMBNBUXEPRIQHFJTAGETDZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18061U;
    msg.info.assign("URJSSGFYZPWICZVSIPTBVLHMHQWXYJSKHBWJEPNHUUKZZNFOGFCJSMEZTQESYIBGLAOW");

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
    msg.setTimeStamp(0.801962667687629);
    msg.setSource(18223U);
    msg.setSourceEntity(92U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(48U);
    msg.command = 92U;
    msg.entities.assign("FZGFJJBYSUVAEOPGCMKWRCZKKDQWGFKEJWSWGCAWVAEFZTWBIXYHMKXQANCCHCIOEYANTHJOVSODPYTOLWBQFMVFJCDPOQRMURXBVHHDYPNEFAPTMVNVMJSRUBWBRKNYAIBPHKNOMUPIQZZTPXDIMZCRFDNLLGJERJFILLEOZXDXYGSVXOBZPGEDCFAHMIDK");

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
    msg.setTimeStamp(0.5791677264193849);
    msg.setSource(20338U);
    msg.setSourceEntity(150U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(24U);
    msg.command = 124U;
    msg.entities.assign("VQYSSAPWCQGJVKAZGPJDLWXXEVIKGDSYAXHYGIZMYHHHLCNLOEASKNRFQMYHCFRTG");

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
    msg.setTimeStamp(0.06451666295924274);
    msg.setSource(34518U);
    msg.setSourceEntity(7U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(81U);
    msg.command = 118U;
    msg.entities.assign("PHBSCFUVMRANSIRUQQNIVQEEKIXRLSNMORNEOZTZKLTHCOJETGUATUAMJRYRFYDDWHETSVJFAGILTZUVKEX");

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
    msg.setTimeStamp(0.46883948409135634);
    msg.setSource(35486U);
    msg.setSourceEntity(133U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(5U);
    msg.mcount = 111U;
    msg.mnames.assign("TOKPCEACKCSCUJHWSKFZXLXBXIGNLUOZOJVSITLLTZBGIOSGWGIJCQHLVNRBQQHRBYS");
    msg.ecount = 15U;
    msg.enames.assign("BGATNXNLBFEYGKBIKOKJOVDTWBLAWLOJPAEURNIKFZJILLRZPABPDTNMLHTMLRJAGEZEBYZJFVYUVQKOGJGNLHZVUSMXYYHJQKGYRKAEEQHDYOSGTDJSOSIVFCPURWISYDUEWRUTIITNEQSZLUROHQFIBZFQGFQDCGCVRVCCDOUAJSCFXRTMNUSJWVFDMOSKCNDAWDPPZQNPNCKGTMXUPAHBQXRWXZWCMVYKWXEHCAHE");
    msg.ccount = 34U;
    msg.cnames.assign("ASVYIWQBMNRAKZCGQVRMNXZKJQWMTTSBBAGPVJOLPCVUPGUXCTFALOHFLKVPJIZXWLCYKLWBDHPVQKZENFRHFNDVKTXTUT");
    msg.last_error.assign("XMDXPGZROFBVLCYRCEKVPDGOLELZLPGIBJKLAHCOJQZJBPWAGDUVRNWQUOMBLNARFPUMEPXSTWYXNTQXMAEZCANNWKVFVDIBIAVLZXLMYSKGVHGQAWRNZKSTKMTSAOSIKQZUHXJDOEQSWBXTWEYANMEHJPIWDTBGQFVRDQGJOPRTNPFWSMYIUXBSEUFJCIONHFDRGSBDRCIYDZCFKHYJUMCAVZINUUXOYHLL");
    msg.last_error_time = 0.297209229362546;

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
    msg.setTimeStamp(0.27075757009459744);
    msg.setSource(62889U);
    msg.setSourceEntity(96U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(243U);
    msg.mcount = 70U;
    msg.mnames.assign("HKMBGUOHXCJPKETFIPNMXNQTOFVHCSFYSAOQHQKDGFCDPVOZUVIOEDFXSGKIDYULTJSPGGSMJQDEKJNXHWPAYOHPMYWZRTUEBRUKCSUFVMHSRDBLDLQFMQRLJEBUXHRWUPSNPBILQBEZEDAIPDZGUFILEXAVEGIASCZCHXNKVGYZZAWZJWZLITQTRECVWCNIXFWGAOAOMOCMANOXYQMHBJASGQCN");
    msg.ecount = 64U;
    msg.enames.assign("JEUPFOPPAMNKQTRMAIVUFUANJZLVVJCKHXFDECYOARMQKSGTOWUQNRDFVCRAVJXSYOWIOUQDXXZGTLHGGUBTHZYZQYHOICCYRQHBMAZSQLWXMHEJFYGBIPRDYMIOJNPDTITLKKYQMUUOEUBBLBOLGWENKVFNODWISSKVIWSKJVPQVVAUCJEHPBXDWHJSECETQZRCGAZPAGZLIDFKFGMFX");
    msg.ccount = 130U;
    msg.cnames.assign("TXSNYLRZVGSTKVEJSEMJFFIXTACXYTBVPIRUTIYCEKIDBAWOCAEFWDHGLCRUAYXATUQLNVFQLPXNPMNBR");
    msg.last_error.assign("XCVXVLTCDQCAQNJHVUQYFOLDJSNAPWJUXECPAUMNPWXXOWCJABSPRFSDUIRVZRFGPZRONZGPFDCCJBRIZUTHKTHIRMLNFJAZLSMASWUFVVIYGTXPQXNEHDGLFLGBZUBILABRAFJJKRIHTSKWKYHEBIQIOEOBTKWNDHGRETA");
    msg.last_error_time = 0.5161209330133796;

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
    msg.setTimeStamp(0.90466892084831);
    msg.setSource(38000U);
    msg.setSourceEntity(68U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(37U);
    msg.mcount = 155U;
    msg.mnames.assign("OCDEMERTQQVSBEAVJAWVSNGSDSPXRQJCYONUAKBAHVUJDQGMHYWRAVSZLGLGZSBSZXMTXIWIANFXPWDHXQRFRVTMYVNIUWHCPBCIUPTZGKLR");
    msg.ecount = 126U;
    msg.enames.assign("HVYUCPEXOOFRWDNSNYBOGUKDZOGYFIOGAPJZQXAQGWSPJVIFGOOXYRHCQPBTYCYVKLVGGLEHNVZSREHBMMCJSWKZDTDSIIOAVFIQUDBRPUMGMRNCTADXMTUVALLJVUXUEL");
    msg.ccount = 219U;
    msg.cnames.assign("SZGJZUFLYFHESPQMCXDAOEGLRPDRWKOBIBBASGOTDW");
    msg.last_error.assign("EWOLBEPIXPTNSSARFZOBYZ");
    msg.last_error_time = 0.5798203029824258;

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
    msg.setTimeStamp(0.9320230601062368);
    msg.setSource(56621U);
    msg.setSourceEntity(227U);
    msg.setDestination(40790U);
    msg.setDestinationEntity(189U);
    msg.mask = 16U;
    msg.max_depth = 0.23681195163797097;
    msg.min_altitude = 0.2820377545488423;
    msg.max_altitude = 0.09230599915571525;
    msg.min_speed = 0.572411396032257;
    msg.max_speed = 0.7304097135101894;
    msg.max_vrate = 0.8982367783991836;
    msg.lat = 0.7865753589000812;
    msg.lon = 0.8526588089479513;
    msg.orientation = 0.18048371027883992;
    msg.width = 0.04222573796163365;
    msg.length = 0.8199320170354005;

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
    msg.setTimeStamp(0.05719905574611772);
    msg.setSource(39548U);
    msg.setSourceEntity(85U);
    msg.setDestination(51195U);
    msg.setDestinationEntity(91U);
    msg.mask = 118U;
    msg.max_depth = 0.737600228218385;
    msg.min_altitude = 0.5246220262515867;
    msg.max_altitude = 0.02577244265475942;
    msg.min_speed = 0.36605109286602144;
    msg.max_speed = 0.35054963106503534;
    msg.max_vrate = 0.3142262298195544;
    msg.lat = 0.7951044169842694;
    msg.lon = 0.6279554817668369;
    msg.orientation = 0.5213194649776338;
    msg.width = 0.7815903962051197;
    msg.length = 0.2516281846543894;

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
    msg.setTimeStamp(0.3752613251512641);
    msg.setSource(29134U);
    msg.setSourceEntity(177U);
    msg.setDestination(24816U);
    msg.setDestinationEntity(71U);
    msg.mask = 83U;
    msg.max_depth = 0.10490761690700101;
    msg.min_altitude = 0.20234265741345758;
    msg.max_altitude = 0.3100329125185374;
    msg.min_speed = 0.9306075880089745;
    msg.max_speed = 0.007690297033912552;
    msg.max_vrate = 0.8791862503871184;
    msg.lat = 0.7752474622986093;
    msg.lon = 0.6816308462648553;
    msg.orientation = 0.49053949519912654;
    msg.width = 0.21116070340154525;
    msg.length = 0.9625526249594213;

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
    msg.setTimeStamp(0.7628248607818577);
    msg.setSource(52072U);
    msg.setSourceEntity(188U);
    msg.setDestination(35663U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.23844210000127852);
    msg.setSource(8602U);
    msg.setSourceEntity(47U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.9571389275215586);
    msg.setSource(58435U);
    msg.setSourceEntity(55U);
    msg.setDestination(43148U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.46394407815685235);
    msg.setSource(16157U);
    msg.setSourceEntity(174U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(170U);
    msg.duration = 628U;

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
    msg.setTimeStamp(0.4382164153166135);
    msg.setSource(45041U);
    msg.setSourceEntity(253U);
    msg.setDestination(3465U);
    msg.setDestinationEntity(104U);
    msg.duration = 14671U;

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
    msg.setTimeStamp(0.3770370148523421);
    msg.setSource(43281U);
    msg.setSourceEntity(159U);
    msg.setDestination(17483U);
    msg.setDestinationEntity(111U);
    msg.duration = 60492U;

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
    msg.setTimeStamp(0.9749566493777941);
    msg.setSource(53829U);
    msg.setSourceEntity(24U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(0U);
    msg.enable = 105U;
    msg.mask = 2753678568U;
    msg.scope_ref = 2544461875U;

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
    msg.setTimeStamp(0.03604559762425397);
    msg.setSource(24482U);
    msg.setSourceEntity(244U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(141U);
    msg.enable = 124U;
    msg.mask = 1176842692U;
    msg.scope_ref = 241519113U;

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
    msg.setTimeStamp(0.26826245411578387);
    msg.setSource(37785U);
    msg.setSourceEntity(127U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(235U);
    msg.enable = 135U;
    msg.mask = 1317938739U;
    msg.scope_ref = 2180623844U;

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
    msg.setTimeStamp(0.9961365114943582);
    msg.setSource(62454U);
    msg.setSourceEntity(223U);
    msg.setDestination(17246U);
    msg.setDestinationEntity(207U);
    msg.medium = 183U;

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
    msg.setTimeStamp(0.8415721141737367);
    msg.setSource(26965U);
    msg.setSourceEntity(176U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(250U);
    msg.medium = 1U;

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
    msg.setTimeStamp(0.7268798137335933);
    msg.setSource(17653U);
    msg.setSourceEntity(146U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(236U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.5719045681558106);
    msg.setSource(24512U);
    msg.setSourceEntity(175U);
    msg.setDestination(890U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6641063707548173;
    msg.type = 211U;

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
    msg.setTimeStamp(0.578005546770639);
    msg.setSource(43451U);
    msg.setSourceEntity(131U);
    msg.setDestination(50632U);
    msg.setDestinationEntity(22U);
    msg.value = 0.1698248264152682;
    msg.type = 21U;

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
    msg.setTimeStamp(0.6514023565157571);
    msg.setSource(50519U);
    msg.setSourceEntity(59U);
    msg.setDestination(19395U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8879361419603735;
    msg.type = 81U;

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
    msg.setTimeStamp(0.7149096535523524);
    msg.setSource(32757U);
    msg.setSourceEntity(131U);
    msg.setDestination(45609U);
    msg.setDestinationEntity(26U);
    msg.possimerr = 0.46349356827740607;
    msg.converg = 0.28101183638463323;
    msg.turbulence = 0.11256987495963278;
    msg.possimmon = 86U;
    msg.commmon = 82U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.6565288084113423);
    msg.setSource(17976U);
    msg.setSourceEntity(84U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.8504041675069138;
    msg.converg = 0.8619145782331095;
    msg.turbulence = 0.20232248505187433;
    msg.possimmon = 112U;
    msg.commmon = 96U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.8435387421470447);
    msg.setSource(8281U);
    msg.setSourceEntity(78U);
    msg.setDestination(495U);
    msg.setDestinationEntity(75U);
    msg.possimerr = 0.2584930605751192;
    msg.converg = 0.5435862836386517;
    msg.turbulence = 0.12057004418829265;
    msg.possimmon = 217U;
    msg.commmon = 207U;
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
    msg.setTimeStamp(0.7248099582646412);
    msg.setSource(40863U);
    msg.setSourceEntity(209U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 11U;
    msg.mode.assign("PKQEODRTZRPUBVUVUKSNUSIWFIOXQSYTPCRLNKJMDBVDRESBDOYWHGLURXAFYHDHUHNVMHHE");

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
    msg.setTimeStamp(0.23126895811700465);
    msg.setSource(18878U);
    msg.setSourceEntity(87U);
    msg.setDestination(24236U);
    msg.setDestinationEntity(4U);
    msg.autonomy = 72U;
    msg.mode.assign("RPSVIYMIBACBQKSHJONBWRXVSJYDJKESVSEWTUKZPMQFHBWDOTPEDGHRVAJFXFOEMGXJJETMTBSSWGHRRYDKEBRYZLFYNLLLNVNYMIDHIJWUPNVTJZQKYPDYCMGANMMNARXWZUEBKEGVMXTUYVQMRCFIPGTBFLUOOQURPHOZODOVEBFSHLWZCCADAQXLAQGJYLNGIFKGBKHWT");

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
    msg.setTimeStamp(0.8226609792538413);
    msg.setSource(9533U);
    msg.setSourceEntity(111U);
    msg.setDestination(35454U);
    msg.setDestinationEntity(35U);
    msg.autonomy = 142U;
    msg.mode.assign("YVCLUDMHYQMHOKBYGDCQBY");

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
    msg.setTimeStamp(0.8063049270777378);
    msg.setSource(55772U);
    msg.setSourceEntity(33U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(172U);
    msg.type = 42U;
    msg.op = 92U;
    msg.possimerr = 0.714456954595389;
    msg.converg = 0.5144246601609472;
    msg.turbulence = 0.7046506066271601;
    msg.possimmon = 71U;
    msg.commmon = 175U;
    msg.convergmon = 253U;

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
    msg.setTimeStamp(0.5116678283053815);
    msg.setSource(13475U);
    msg.setSourceEntity(230U);
    msg.setDestination(18627U);
    msg.setDestinationEntity(102U);
    msg.type = 159U;
    msg.op = 98U;
    msg.possimerr = 0.5035578919332884;
    msg.converg = 0.5197154449719146;
    msg.turbulence = 0.627075899664177;
    msg.possimmon = 155U;
    msg.commmon = 177U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.7417630502277011);
    msg.setSource(47927U);
    msg.setSourceEntity(214U);
    msg.setDestination(55609U);
    msg.setDestinationEntity(35U);
    msg.type = 1U;
    msg.op = 236U;
    msg.possimerr = 0.7479678039036197;
    msg.converg = 0.9051442591175339;
    msg.turbulence = 0.8176869859366377;
    msg.possimmon = 123U;
    msg.commmon = 123U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.22373138582949725);
    msg.setSource(43446U);
    msg.setSourceEntity(94U);
    msg.setDestination(2165U);
    msg.setDestinationEntity(7U);
    msg.op = 39U;
    msg.comm_interface = 147U;
    msg.period = 16963U;
    msg.sys_dst.assign("LWLDYUCATYZHLYIRCIKXYTSJMQXOJMSOFWGMEBGPSPPRKOBHPVBJEYMQOVSAKIOAHLSNDRGQQBZHXNBUAPEEVAQENWNTQMGFEKMPHGMLIRNDSQVCVPLFWBLEQVXQISKJVLLKTKJFPGKVFYEBXRYTRWBFTHJZUCTM");

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
    msg.setTimeStamp(0.8264019569024009);
    msg.setSource(61352U);
    msg.setSourceEntity(146U);
    msg.setDestination(38112U);
    msg.setDestinationEntity(214U);
    msg.op = 96U;
    msg.comm_interface = 237U;
    msg.period = 63782U;
    msg.sys_dst.assign("KUMHNKGOHJMHSODYKPYTSZKEDZMDCMQCPCNQSAYZTWXFJCUBSEAVQTBSTJQPVUXBOTLGRJLIQVEWDKCROREWRDZZPAOXMWNSVUQXGBGVSJLNEPLXTLWIEOYNGADEUBJZNBNXBXAJMCEZGBXKIIVERIUBGFHNYOYUDQFOHGPYQZLDTYKFZWGHLHRHHTFYRNALWJUMWTDQQSOAKGFWEJVMMSVR");

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
    msg.setTimeStamp(0.7703221424835606);
    msg.setSource(21943U);
    msg.setSourceEntity(82U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(25U);
    msg.op = 16U;
    msg.comm_interface = 104U;
    msg.period = 61048U;
    msg.sys_dst.assign("YUWUKSBYJZOEHFHVPLGBNWGOKLPTTBYSRJQVAXYHEOUYRQRIDMMBSLVXMJWMRXETSAONCXAQCFGHVMSQUKHETZ");

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
    msg.setTimeStamp(0.5996185556286072);
    msg.setSource(6597U);
    msg.setSourceEntity(158U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(221U);
    msg.stime = 1640265431U;
    msg.latitude = 0.3095257599437151;
    msg.longitude = 0.5584909223149428;
    msg.altitude = 28549U;
    msg.depth = 24759U;
    msg.heading = 29562U;
    msg.speed = -2532;
    msg.fuel = 23;
    msg.exec_state = 33;
    msg.plan_checksum = 26439U;

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
    msg.setTimeStamp(0.20752353344574426);
    msg.setSource(33964U);
    msg.setSourceEntity(28U);
    msg.setDestination(9093U);
    msg.setDestinationEntity(220U);
    msg.stime = 860038969U;
    msg.latitude = 0.8917764049594223;
    msg.longitude = 0.5952366065095273;
    msg.altitude = 19904U;
    msg.depth = 46413U;
    msg.heading = 34067U;
    msg.speed = -24661;
    msg.fuel = -100;
    msg.exec_state = -52;
    msg.plan_checksum = 39505U;

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
    msg.setTimeStamp(0.20963088115828898);
    msg.setSource(10714U);
    msg.setSourceEntity(251U);
    msg.setDestination(46764U);
    msg.setDestinationEntity(181U);
    msg.stime = 2405584693U;
    msg.latitude = 0.059439695704908146;
    msg.longitude = 0.5665128849499093;
    msg.altitude = 33692U;
    msg.depth = 58535U;
    msg.heading = 33205U;
    msg.speed = -31441;
    msg.fuel = 41;
    msg.exec_state = 124;
    msg.plan_checksum = 38104U;

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
    msg.setTimeStamp(0.5969624809516333);
    msg.setSource(64558U);
    msg.setSourceEntity(30U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(243U);
    msg.req_id = 62307U;
    msg.comm_mean = 169U;
    msg.destination.assign("GCNQMNDZDYDQQYTPXHCKHNMPVFZSGNVGHXGRPLWBOUEPEXODFGIEKMHKOJCUCYIDLFYZARRFPTSGAJUWUUBQTWXVBUYZCODZEKHFISNEXJDLBIGENUGDJUGQAOCIAUBQRWIKLSAO");
    msg.deadline = 0.5906739540811032;
    msg.range = 0.6857920585473993;
    msg.data_mode = 193U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.request_id = 56717U;
    tmp_msg_0.command = 56U;
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 46622U;
    tmp_tmp_msg_0_0.lat = 0.6868886245473719;
    tmp_tmp_msg_0_0.lon = 0.8350920696115467;
    tmp_tmp_msg_0_0.z = 0.18661514164941406;
    tmp_tmp_msg_0_0.z_units = 31U;
    tmp_tmp_msg_0_0.speed = 0.5621332994354391;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_tmp_msg_0_0.syringe0 = 98U;
    tmp_tmp_msg_0_0.syringe1 = 218U;
    tmp_tmp_msg_0_0.syringe2 = 217U;
    tmp_tmp_msg_0_0.custom.assign("LQLRWFEDKUYLYYIOXYEETPHTDTEDVPBXXHPAYKDRXMLEGJJSEBPAQCQMXKEHOVNWKZEWDHSJZJMIBOTPANBWWSJPSXDGIMMMUHSFVGGPFTBVCTABZMYJCNJJQIGNUUEQUDUBAJVXOLNKZFCMPYBDIVSRPNOVIYNQTUS");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 19629U;
    tmp_msg_0.info.assign("LVHTKRGYQSAVKCHQLA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EUMDYUZMLCWYIDSSYTRSMPIPBEXNKVFISOOQJIKFFPRZPBDWRILPSETCFIDBFMNWVFVWDGETGKNYKKTOEYWMLAJFJJHNJJGTDSRLHCGDVFPHCKKABXIOLXXUDGLARXJYONBSTPZJNVZYQAGZTTWGMPRSHJGNEXHWQICZRVBKAVAGBUUCTACIBLSOKSLCYZZLDMRXYAQHXQ");
    const signed char tmp_msg_1[] = {-71, -20, 115, 35, 111, 113, 68, 38, 76, 16, -76, 66, 77, 12, 61, -81, -59, -101, 69, 16, -119, 22, -51, -2, 93, -84, 70, -68, -25, -15, -58, 44, 20, -73, -122, 104, 10, 111, 112, 98, 14, -31, -60, 105, -40, 67, 105, 93, -26, 8, -77, 52, 68, 80, -15, -94, -82, 41, 69, 102, 52, -71, 93, 103, -37, -124, -87, 68, 42, 2, 102, -1, -3, 89, -115, -87, -48, -87, -124, 70, 20, -5, 33, -69, 85, -85, 60, -58, 88, 7, -79, 96, 125, -93, -87, 100, -67, 113, 28, 69, 9, -4, -74, 105, 71, 82, -115, -11, -44, 2, 95, -90, -73, 76, -26, -62, -9, 112, -1, 55, 89, -10, -73, 77, 103, 16, -44, 89, -114, 95, 68, 77, 105, 118, -13, -27, 29, -77, -11, -42, -94, 96, 60, -37, 19, -123, 98, 119, -80, -37, 78, -17, -49, 47, 85, 111, -104, -47, 19, -24, 38, -47, -35, 86, 64, 23, 21, -42, -90, 46, -124, 34, -28, 61, -1, -90, -107, -33, 7, 86, -19, 83, 63, -85, -87, 75, -10, -13, -96, -18, 72, 96, 106, 109, -33, 7, 39, 108, 81, -44, -28, -20, 76, -79, -83, 39, 61, 114, -56, -119, -79, 5, 24, -123, -88, -59, -10, -1, 124, 105, 14, 91, -80, -42, -61, -45, 30, -7, -36, 98, 101, -115, -106, 90, -127, 66, 123, -102, -125};
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
    msg.setTimeStamp(0.0864969376662802);
    msg.setSource(21215U);
    msg.setSourceEntity(118U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(126U);
    msg.req_id = 46821U;
    msg.comm_mean = 249U;
    msg.destination.assign("XPVAUIDMHMLOHHLXBBNCSRSZJGIHXXJQNWUYPYSRNQOLVGZLGALKYGMOPJOEBEBIOAUWRHCUHZZYCPLZGESTYCFFDAKOIGRRVDEVPMJDPMCNIHJS");
    msg.deadline = 0.8202119743075019;
    msg.range = 0.21708321136174902;
    msg.data_mode = 128U;
    IMC::Aborted tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CRCLNBDPDNUUVXKGHJAQZFODARXWFPPGIRXPYZREMYE");
    const signed char tmp_msg_1[] = {-9, -123, -109, -12, -82, -89, -66, 21, 108, 122, -32, 12, 70, 118, -118, -116, -79, 39, -25, -53, 26, 61, 34, 59, -93, 13, 35, 49, 94, -110, -124, 72, 17, 98, -7, 105, -116, 56, 8, -12, -115, 110, -27, -98, -116, -8, 79, -35, -75, -28, 33, -54, -29, -79, -125, 9, 3, -70, -5, 80, 44, -61, 21, -79, 49, -1, -6, 120, 26, 44, 73, 34, 3, 53, 59, -18, 119, -122, 122, -88, -122, -33, 52, -88, -80};
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
    msg.setTimeStamp(0.8389136632202387);
    msg.setSource(15610U);
    msg.setSourceEntity(116U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(182U);
    msg.req_id = 5304U;
    msg.comm_mean = 121U;
    msg.destination.assign("EKTUEJKFSSZCOHQTFCUQNMBBOQLDNXUDDLCPAMWGDKGQIWUZGRWVIEYBNFFRETKDCURVOOOYUHHEMEIVAKHQOQCNGXREJRZGM");
    msg.deadline = 0.384636505449941;
    msg.range = 0.8821703756111894;
    msg.data_mode = 176U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.op = 126U;
    tmp_msg_0.request_id = 23640U;
    tmp_msg_0.plan_id.assign("ROGOBVMVUZORZXECSWBHVUWAVECBKAFOAODVNUG");
    IMC::SessionKeepAlive tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 1815825128U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VPCVUSCLOBMUKGLIWRUXCXQZOEJPUOHYXSZIWGGTFTWYMOPZPVQUVZRBXDMFDRYLRQNFILHTICXZRUFAKILGFLOTAHDQXEOVEGTZTTBBFSDSPIKXNHBWKGQZKMRLQMQHSGANHNNHWLODUWSW");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WOGIGRITHFHTSHDAXCRKSRSDFMEHYSABZYKBSGEFBKBLTNHYOEQZNNLBXFCFNGKZJRULKHED");
    const signed char tmp_msg_1[] = {32, 95, -37, -112, 98, 125, 43, -127, 106, -119, -15, -4, 8, -97, 97, -114, -36, 16, -24, -44, 125, -76, -64, 13, -12, 38, -116, -73, -2, 111, 31, 110, 83, -19, 45, 53, 19, 64, -11, 21, 76, -126, -41, -76, -83, 63, -18, -42, 73, 18, -89, 66, 93, 72};
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
    msg.setTimeStamp(0.16110767720020702);
    msg.setSource(31677U);
    msg.setSourceEntity(144U);
    msg.setDestination(32214U);
    msg.setDestinationEntity(50U);
    msg.req_id = 55252U;
    msg.status = 36U;
    msg.range = 0.10855356184751908;
    msg.info.assign("IPHLYEKQXNCKWQQSIWBTWDOPYUIMLMUGZSPEDFCCFIOETVAGMLCWTRGPZUPHHREIRIFQRSBFKCOYXFOSSPBAZAPPDEASUJOFMMBZYEYBWTPAQEVOEHXT");

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
    msg.setTimeStamp(0.5429015139083726);
    msg.setSource(56971U);
    msg.setSourceEntity(191U);
    msg.setDestination(28307U);
    msg.setDestinationEntity(131U);
    msg.req_id = 40958U;
    msg.status = 3U;
    msg.range = 0.8732363079359244;
    msg.info.assign("CVBEURUGAKGWAJXEDPSZDJKSFEQWBJNEZBXUWPLXSAAZPOMRMHHOQYNPMNTLLHLTNSAJIQGYPDLCFWAZP");

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
    msg.setTimeStamp(0.2685652373984133);
    msg.setSource(19958U);
    msg.setSourceEntity(180U);
    msg.setDestination(32146U);
    msg.setDestinationEntity(55U);
    msg.req_id = 59744U;
    msg.status = 90U;
    msg.range = 0.2857224150632064;
    msg.info.assign("LGTQTKHAQPJGDIMSDBOLOFN");

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
    msg.setTimeStamp(0.993790968934013);
    msg.setSource(48687U);
    msg.setSourceEntity(19U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(132U);
    msg.req_id = 22574U;
    msg.destination.assign("MUQTXMSXXQLIRXFSQSPQBXMLWUNWRGUXGDBNYVOEVQLXVXEALWFVGUSPSAGCJWJVSJYSVULHHVWMORNPFAEJDYTKFYMOCIKUSUGNCJYZWWEKBTAGIJBBNYEPFYGZFRNNMDTQHZYMFMOCCIRUDCKFRIQNOVRLFPHKVAJNAALTHZARM");
    msg.timeout = 0.27206351556183084;
    msg.sms_text.assign("WVRXMSMFNJPEUTLMUBLFYWJCZWVYRQMAZCDDCIFIZCOWTXIFOHTHRQRNELHCMTISFSNFCPXEBCDOKAAURSFPPRXYLJBBUYHXFHSGIOGENBWCUTSZSGQGQHTLVBDMDSWQCLMWNSGKQGXNOULABHNGOBOYZPHHPVIDVAFBEPAYIXZKWEQTRJUAJJDEQRVKUTRONFPVPMVAJYUXYJYAOOIDPTQKKSKDEURJGLXZVGWDLEMNJEKZQZNY");

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
    msg.setTimeStamp(0.34359013711189945);
    msg.setSource(38354U);
    msg.setSourceEntity(47U);
    msg.setDestination(52709U);
    msg.setDestinationEntity(94U);
    msg.req_id = 31378U;
    msg.destination.assign("CZSVRFICHLNZQNPVXXDHXMXZBVOKSMIETEAYKSITOAOWE");
    msg.timeout = 0.251195350999215;
    msg.sms_text.assign("BWCFQXPNRWZSDVEUGVCHYEROYIWDVPSAQLVIHFSUPQZWXLOADTFKIINKMGCOWLPIMTILEBKGJDLXZKPMAFEZNXYQOIQBYUYRHWNAAPBYYXQQDLCXVPCSCSCUJKFPDRNIUBTIVFXJUDCKSVNAMYGRXJTEFNAOPHLIDLBOSJUNFEJWHRMQBHEGWGSHVFUKOAUCKBRTDZYJGUAZTHWQPXXTTNYDTMJCKMOQEVMASGSJLKZMNRVGZFLOMZBTOE");

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
    msg.setTimeStamp(0.03960699875417284);
    msg.setSource(48383U);
    msg.setSourceEntity(81U);
    msg.setDestination(45774U);
    msg.setDestinationEntity(2U);
    msg.req_id = 5898U;
    msg.destination.assign("EKMDPAXPMCBEXTPADQOKXJSHKTEHYFMJHSBGLTWGCDUFPENCBWWCVRAOFVCVEXVNQZ");
    msg.timeout = 0.24727324678975682;
    msg.sms_text.assign("KLAUKCMQPFBOITKXLNRQEAASRXJZEJQJTPQCMZBBHFGVCTUEXGOWLDIXFCQASEICWSTCZRFYAZEMVGULVYKZMNUWPHNOXHEEUVWYRWJARSRZUNKDXBH");

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
    msg.setTimeStamp(0.8085201655675838);
    msg.setSource(49617U);
    msg.setSourceEntity(240U);
    msg.setDestination(36627U);
    msg.setDestinationEntity(168U);
    msg.req_id = 15844U;
    msg.status = 217U;
    msg.info.assign("QFCPSGGJIYB");

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
    msg.setTimeStamp(0.6135984063374801);
    msg.setSource(16455U);
    msg.setSourceEntity(98U);
    msg.setDestination(35305U);
    msg.setDestinationEntity(16U);
    msg.req_id = 40681U;
    msg.status = 170U;
    msg.info.assign("XCTBWRDUYMCKYZKRGBNSEHGYTSTIPDHVOUMJZFQXEFAXLZADRZOASFLGWKYWSTGOJHQKEBXMUHWQVQCVFYZHFDRVALILICXYZHVGQCVJRQBZOZVAETODJYAPSMXOIKA");

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
    msg.setTimeStamp(0.044335330931648764);
    msg.setSource(64068U);
    msg.setSourceEntity(142U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(100U);
    msg.req_id = 13560U;
    msg.status = 131U;
    msg.info.assign("AEZUTKVFOPTOOVYLTZPBSVYLXZGUBOFAHJWNPPABPWLKGFKNXISIRXOKELQNQOIIEWIPEAUZLCGUJJUTWZSBWARUECOHGQVQDFGCGEHDHKHRJMQBMDSDALWOTMXRYVWLQZTTXUBYPHDAVWMPKNJENQGNMFMCLMVLLWBSPADMRDXIXJFODXJRASEESSUEKFKORQYQTKVGJJAFIVCHTIURNNYBPXIYYDNYYMBCQDFWRCKZMSTZZHVGUC");

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
    msg.setTimeStamp(0.5612566937872591);
    msg.setSource(16314U);
    msg.setSourceEntity(126U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(26U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.037105233611738564);
    msg.setSource(32695U);
    msg.setSourceEntity(63U);
    msg.setDestination(14851U);
    msg.setDestinationEntity(32U);
    msg.state = 194U;

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
    msg.setTimeStamp(0.6993148667465702);
    msg.setSource(63614U);
    msg.setSourceEntity(190U);
    msg.setDestination(43753U);
    msg.setDestinationEntity(192U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.5266477620706447);
    msg.setSource(33954U);
    msg.setSourceEntity(139U);
    msg.setDestination(28345U);
    msg.setDestinationEntity(154U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.27171007460868335);
    msg.setSource(30628U);
    msg.setSourceEntity(163U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(133U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.8316119323974241);
    msg.setSource(33649U);
    msg.setSourceEntity(251U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(225U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.6469710855524099);
    msg.setSource(62811U);
    msg.setSourceEntity(212U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(241U);
    msg.req_id = 22674U;
    msg.destination.assign("IITHDLQANSYFZCLJCVTEFGENIOQUCKMZDGPRHYSEYMPUZFNWIHHANBDBPEGOBOAVLGKBXYVLPMWBXXBSOJJHXTWPXLHZCJSXSIVUQFDECHJBUKWRTZDPAOEBGTNCZIJRUUYAGNRKLAKBZWVDPARWFMSKIPJXMLDLYTHQXXO");
    msg.timeout = 0.3616508626069336;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 227U;
    tmp_msg_0.period = 2409475214U;
    tmp_msg_0.duty_cycle = 1171811803U;
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
    msg.setTimeStamp(0.3948579015102246);
    msg.setSource(2281U);
    msg.setSourceEntity(117U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(92U);
    msg.req_id = 47121U;
    msg.destination.assign("PXVREBAOZUUCAASUGKTEDTKOOYBWXLHJLRQGCVATBUAEVVJOAQFRNXLPIYHWKGQLMJECMPKVVXDGYGEJICEWIGVZLEFBEJIYKTNBM");
    msg.timeout = 0.5159073748601708;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 6348U;
    tmp_msg_0.sys_dst.assign("IMETEESXLNPZUUYXYXGYQNATLCILUAWCFAZKURPLHICJJJAHSIRQBMGJTOVKUZUTZMINHVGSXQRFOYXDVTNZDARDKJFAODYSIRCCMWLNRYRBHJWOQSNXEILKKAFWCCZRNEXBOJTEZBTBKQPVQTODKVADVEVKWUBCXOWHPIFBFFVRGYLSHLHJVFNSZPGPDINZYUEOAUEQZGXHGTUBMGHPMPMGDYPJWC");
    tmp_msg_0.flags = 197U;
    const signed char tmp_tmp_msg_0_0[] = {-42, 121, -64, 122, -113, 84, -124, -122, 67, -54, 102, -94, 86, -120, -116, 87, 94, -80, -108, 112, -91, -80, -58, -104, -115, 98, 77, -84, -56, 123, -46, -87, 71, 19, -101, -123, -86, 17, 38, 49, 11, -38, 95, 61, 86, -55, -15, 23, 30, -73, -31, 57, 86, -42, 76, -7, 72, 21, 50, 84, 57, 69, -35, 100, -50, 90, -71, 108, -5, 110, -98, 122, -59, 41, 74, -94, -79, -48, 103, -67, -127, 26, -28, -56, -60, -85, 22, -13, -62, -74, 125, 18, 6, 73, -104, -19, -5, -108, 49, 103, -5, 51, -75, -6, -7, 13, -15, 41, 59, 116, -124, 47, 17, -47, 31, 90, -100, 52, 74, 17, -40, 106, -88, 62, 18, 72, -105, 61, 10, -93, 12, -91, -36, -110, -117, 112, 63, -64, -17, -63, 117, -52, 99, -100, 95, -123, 116, -124, 11, 8, 1, 83, -55, -54, 86, 12, 56, -94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3310414676857417);
    msg.setSource(6010U);
    msg.setSourceEntity(40U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(137U);
    msg.req_id = 33647U;
    msg.destination.assign("LFGPBWTIOBOJKVEBKLMIDVAJQSGDXCQGZIPDVTNRZYTQSMHRELNIBWOZHLTVAZKUKTEISMIFDUVNWYZBAQFWGKTSVOHCYCZTHHJPQDHXMPNFBHLTLMAPWCH");
    msg.timeout = 0.8783615360495971;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.08776082405387631;
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
    msg.setTimeStamp(0.44497928478573634);
    msg.setSource(52855U);
    msg.setSourceEntity(143U);
    msg.setDestination(51290U);
    msg.setDestinationEntity(232U);
    msg.req_id = 40568U;
    msg.status = 23U;
    msg.info.assign("JFODWBIVYXYGOSFWVYTNMUKCSBUQKBYIWCSGKTJWSHGIQVGFIQUBNJCQKOYPECHPWBYZCBBNMNBTTMELSWCXGAPFJZNZDAMWODRGPZQDUVTUHOZUCYVQJMEDEOAJRXTAMZFVCWUPLMIRXXRKOAZMMGFLJURFK");

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
    msg.setTimeStamp(0.3894260265866203);
    msg.setSource(64178U);
    msg.setSourceEntity(186U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(162U);
    msg.req_id = 17459U;
    msg.status = 115U;
    msg.info.assign("TNQLBIBRJCODPCFXEYMHBASUASSETXIGLNDETUGMMYNNNBPYLZJTPNPWROUHKIFWQARAAXNCVHQDSXURPEWBKITSHAVAYBMHRLHBTCPCVOZKFTFOZOIGCNUQGOZQIVHORTGHPTIXVVJQBGFXYHNJIRZVKVIERFUXLDUEMHNKAVOBTYZWSMRZSDWECEJD");

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
    msg.setTimeStamp(0.39038606360339545);
    msg.setSource(34754U);
    msg.setSourceEntity(23U);
    msg.setDestination(61446U);
    msg.setDestinationEntity(107U);
    msg.req_id = 28108U;
    msg.status = 195U;
    msg.info.assign("UJJZJAWRDXCGBSUGOYXNNQTGEYFPYRVVGXFXKMBHGISXNUHYVYTSPRTHIZESOPZKKQFRNLRZLNHTHQFPNEQOISTIOUJDNEJICEVYOFDWQLKWNPZLPLKDZAWWZDPQJMTYGERJUQFHESWIDCZKIAMFTCRCAAACEQCACUBOHWP");

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
    msg.setTimeStamp(0.12412135798691071);
    msg.setSource(16970U);
    msg.setSourceEntity(254U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(20U);
    msg.name.assign("WZEXGGFFFYVHDKVGJQVOTBIWPGAZTIPSQXFICEDJOUVALRJFLLZSVKORFSWSMKCBROUOZGLQJQAQBDEDFSQBOKKQYQGNQBATUHINRDBATJXXHMYECOXKHLLUIMPIPRRMBECVLTIFVSXNAVXKHRCAGSPSVCLDMHIYDLRCUMBPWEVZTNTTMWDWUOGYCOYPBZFJNGA");
    msg.report_time = 0.2868716997126206;
    msg.medium = 205U;
    msg.lat = 0.03552907498970559;
    msg.lon = 0.6357430675814338;
    msg.depth = 0.2739826768093352;
    msg.alt = 0.19020320860041806;
    msg.sog = 0.032140207027898327;
    msg.cog = 0.8169740532926079;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 51263U;
    tmp_msg_0.name.assign("OFQHHXYTACJNCADFPVWJOPIOUQELVWWLBNMINXMNQUXVKPRQICLFEIMRTXIVMBGWJCRLRRZBZXMDSJZTFSJAAGWJCSDZTZBIOUHNUGUOKSWZLGHVAPPXSYYCJZTNTDPEKSNAULADBAQHDGFDQUFWBEPMWBKICVZUWSCKXOGYXVOUKPKWJMSRDPEKYNBHLHEBTLNXRFFOFQHJDLSVM");
    tmp_msg_0.custom.assign("BFVWSPJLWFQZGHHYLACYXTIOCEVSEAPQUZLNNBUKYUFEBVWUKRSDPGQKNBRYZTJEQCSRINPMLTGZPDIOOOWUODMSAZEHOCBUOYBMLVRPZAZLOLQTXRDBKXEDFMMERLPSHI");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.49136725302863016);
    msg.setSource(42129U);
    msg.setSourceEntity(109U);
    msg.setDestination(31490U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OMHYWLTZYLCNDKQEAFDZ");
    msg.report_time = 0.247346605213711;
    msg.medium = 211U;
    msg.lat = 0.5404743568745242;
    msg.lon = 0.6449935141888177;
    msg.depth = 0.8367234971097087;
    msg.alt = 0.9635470332116297;
    msg.sog = 0.5512018995314378;
    msg.cog = 0.9216542751247849;

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
    msg.setTimeStamp(0.2503243520258288);
    msg.setSource(52115U);
    msg.setSourceEntity(118U);
    msg.setDestination(45140U);
    msg.setDestinationEntity(12U);
    msg.name.assign("BBIGNNVXXWFUIOBIOLSJLMBJMWXPXVBHDMRYXLKVJFJTNJWNYGYKCZCLSWMIRKTEEGDNYGNQDGOAPRCERBXEJWYTQRDVSPATZZMBIMHIYVGDZOOZHKKDDQFULUQZHQTJZLPFFCJIUTPOTGMNSHKWQ");
    msg.report_time = 0.14890389819884653;
    msg.medium = 108U;
    msg.lat = 0.26610498835227003;
    msg.lon = 0.09893958984791007;
    msg.depth = 0.750071223895772;
    msg.alt = 0.5623621481920074;
    msg.sog = 0.4327468707220482;
    msg.cog = 0.5485741641138192;

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
    msg.setTimeStamp(0.9274292982627075);
    msg.setSource(26928U);
    msg.setSourceEntity(62U);
    msg.setDestination(37678U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.8829971250909397);
    msg.setSource(45255U);
    msg.setSourceEntity(32U);
    msg.setDestination(9097U);
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
    msg.setTimeStamp(0.7254193843806336);
    msg.setSource(22737U);
    msg.setSourceEntity(150U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.8670242399121456);
    msg.setSource(6978U);
    msg.setSourceEntity(195U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("EBZEFTNYQUTVFALIJPMMAOTZYKFRBWZCYUKETDKNAQCUKBTQYWCRVKXGSDMDSOALYVDECGLXEPTLIYMNGNXFHSTDOQQIDURRRRJRUOLHCZHSPWDNCHKIQLNLE");
    msg.description.assign("OCSOPVLSQMGJXTEIYWYAEVIFIAQBHGAUXHVZQCTBBHTOQSAAUBYLNJYZRJYZXCVEWGLRIGXLKCCYGCDMFJSUPTUIWOKNFAXOYOXLFFMMDYTVSPMHKWHWBANHOKESLCJKIDFGMUMEZRNZZRJNJTIQRQLQAKUUWJVPPTWYJYAUPRGUDFWVCMBLPOPEPZOSNNVNEE");
    msg.vnamespace.assign("UVAEQGMOYIZGWYEXODFFQMJQPTOCWYLUQEFKEDPKMDPXCJRNONDXPNJFMHVUYQMUAPJTZCHCMZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZOSEORDWFTFPHISHMPICYFLITGMXBGDAPKVRAJQXDDAITEIHEWHTKEISBVEKX");
    tmp_msg_0.value.assign("HFCLEGCSTIONEZBVSZSKYMYW");
    tmp_msg_0.type = 73U;
    tmp_msg_0.access = 13U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CPGOFYGLBMBAPUTDOXEVBVRGDKTUMYQKTPVOKPEZXFXTZKBZJUQZCSDEUDNMKKZSWTDO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TIDHNJOZPWLIQEKNCLRQEIRMEGEAYHLYLNIZRVJATXCNUFTYPBXHQXQOMWHPRKNFFVAAJUGTQANQAMTFZHGGISZMDLCONTOTCVMBULOXNYJTZXEGODNMWNJBBMSPYURYGFDLDKCIVMRAWWUISKCDFDVSWEWHVECSAVBGDHCAUZZJ");
    IMC::Drop tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 24692U;
    tmp_tmp_msg_1_0.lat = 0.700279824690823;
    tmp_tmp_msg_1_0.lon = 0.03689613539366021;
    tmp_tmp_msg_1_0.z = 0.47264446230531754;
    tmp_tmp_msg_1_0.z_units = 215U;
    tmp_tmp_msg_1_0.speed = 0.6575669982042062;
    tmp_tmp_msg_1_0.speed_units = 80U;
    tmp_tmp_msg_1_0.custom.assign("JEYPIVYLBMXEOFSZYNOAECZVLWOWRTCGPHTIPGYDRLNPDYZFDVNJASBOYGFSPLFFCPFSXDZRIFCTUHAJBILUYWWSJBTUUVFCHNAZRWKIXEAQKXWZEGDKQAUULEQXYEAGQTHOEJDLYKIRDWWTXTMMVRM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ExtendedRSSI tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.4924499146780479;
    tmp_tmp_msg_1_1.units = 146U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SMVOJBBCUSWJISPYMZJRNOVPYGCWFJHPCEVRXKUURONRKWIWIALGRBOYMQACKHQYDJETKSKHTFDTXGVBUMPIYMDHANBNUEFXQMVTOLGVPTSZOOKBHGLZZCQLZGRDBPIKKJWWJSFNJKHFVUDJLOCEEDREBYLONXTGAIMRABFLHWTPWFDMJPQDMWGBCSCFCQZTAOSYYQPNX");
    tmp_msg_2.dest_man.assign("PTSUCXDBBLXCGQRPOFNHYLWJRANJEVPTIXMJDDYSEEPKCTLMQJHEK");
    tmp_msg_2.conditions.assign("IHDOPTIPGUDJNZPJOFLUFIXSFFARSEXEQQVYLMGEGHIRBWRWCCWLWFHDDXCLULEOKSIMRJKJJFGGSTHKMGVNFZKVHLOIXPSBVUQTYZRYCGDKGIHQUUCQOIBBAOZMORCMPWQ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::DataSanity tmp_msg_3;
    tmp_msg_3.sane = 0U;
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
    msg.setTimeStamp(0.27487449509176487);
    msg.setSource(20141U);
    msg.setSourceEntity(118U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("MJUWSYQGDTWEFKLKKBRVLLOTLIFJYPMPDLYBXDBTIVNLZUAXBJEVWBVYSAGGTRIDSRVODCHKYZPPVRGZEOOESYTWANUDZBBLMRYQFOZKFSTEJMGMTVQWXJZRPZFCZNQNIQMXMVPWUKIJQXEOVFOXGBFYRHAHCECPHNSQACHWHOJURLYDCFKJXLZSCNUUDSUMRGTGZNTDFJOIHVXAGNMOYRBXQIKSXUSABKWJCLPIEICPHHTEEKQ");
    msg.description.assign("WHQRIVMLVSIJFUFPCIMPVONVYWJJHQLAOTLFUCXPDTGBJZTEAWICTBSGUFMBIUIEHEAEDZYGMSZRKBHWZIVXNAQTEAJGOQLYRDXMHOBJJGSEPHCRMTXWFQUVOLLYINDNNPLBVRKQXCHDSDHLXWCARTFXDBZ");
    msg.vnamespace.assign("EGYCOZONSVCTAZBPQUWPR");
    msg.start_man_id.assign("IUPWYAWXTMDFRRBJNISKDDLGTBQNQPWEENCTVRUJUQ");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JARKQVBFZDOTWZZQFCRZM");
    tmp_msg_0.dist = 0.38327446107902496;
    tmp_msg_0.err = 0.10211727045203622;
    tmp_msg_0.ctrl_imp = 0.08589351342570861;
    tmp_msg_0.rel_dir_x = 0.5919192102855168;
    tmp_msg_0.rel_dir_y = 0.9132118340541631;
    tmp_msg_0.rel_dir_z = 0.5564473796677383;
    tmp_msg_0.err_x = 0.23873730206835353;
    tmp_msg_0.err_y = 0.6494528078588445;
    tmp_msg_0.err_z = 0.7103875527869613;
    tmp_msg_0.rf_err_x = 0.6681130616883895;
    tmp_msg_0.rf_err_y = 0.4485648468667822;
    tmp_msg_0.rf_err_z = 0.6146570162949572;
    tmp_msg_0.rf_err_vx = 0.04206073524824705;
    tmp_msg_0.rf_err_vy = 0.1314339067508975;
    tmp_msg_0.rf_err_vz = 0.4343784111801726;
    tmp_msg_0.ss_x = 0.8939238047291873;
    tmp_msg_0.ss_y = 0.007234328430219872;
    tmp_msg_0.ss_z = 0.04244403472554259;
    tmp_msg_0.virt_err_x = 0.9209429347454148;
    tmp_msg_0.virt_err_y = 0.14306281570753454;
    tmp_msg_0.virt_err_z = 0.3828141152816542;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.49467122758124504);
    msg.setSource(20349U);
    msg.setSourceEntity(247U);
    msg.setDestination(46884U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("SBKHHHGNXKBZRXSZPKFQKJPQTSEFALUIZXPCFKJMZDAICZRFUZWCQRIQCGWILKHHGAWAWMXNGZYTTFEJCBHNG");
    msg.description.assign("NDTQLHTOOWZKAFUOSUVHGYOEEVRKAVLYVIBNFPCRTFUBWFQIJWUDDQYZHUJCXIVXYCKKFSFCOIPGTFPZOKOMXXKHBAANKNJSNTIWIPFDYNLBWSHXZLANAZGDAUEMUBSQTANTJYVOMVJSFTPSMGHRLBHCBLRDWMRKHMLTALYCJOEWYPIHXUNMDDZGDRPJJPYIEZZVIDVLQERWQKBRGCJVEGCCQGRM");
    msg.vnamespace.assign("PZAPVEGDTASQPHGCUIYPWIJFLXLAUDVFTHFFBVNICEOHBDGGWQCGBRCZDYFURCATCULWAMNYWUBDUGVBYMZDSSWRSNYPITMWXRTPQTBMOSTXVYYMNRKZHRMVOXDLFOXTHTHPXKFHZKZNQDXHKOLGNIEAERJCTKWKKEAPZYOJPMQIOZSEUNBEEJOGLFRRXOUJSJLSIQWARJMXHUSJYFLKIIXOEQDLHSVIBCKMJFCKMABNEQDGQCNWWLZG");
    msg.start_man_id.assign("XCJIRLLDUHKQVTQVGRQIROHPQCFNEIJCBTFQZIJRNWMXLMRSVHVMKDOJHNKDOCFKRSSVJSLSWYFPUPAFDEICUPOVDJYOZCBAJPWHXYONKDEZBLZVVAEUUEV");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CRBQBNUNRFMOWVRNGVNMKL");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 46204U;
    tmp_tmp_msg_0_0.lat = 0.7811586648044756;
    tmp_tmp_msg_0_0.lon = 0.014875074109084285;
    tmp_tmp_msg_0_0.z = 0.5304824289010279;
    tmp_tmp_msg_0_0.z_units = 165U;
    tmp_tmp_msg_0_0.speed = 0.6784246984895295;
    tmp_tmp_msg_0_0.speed_units = 121U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.34276066872042066;
    tmp_tmp_tmp_msg_0_0_0.y = 0.30521104770792906;
    tmp_tmp_tmp_msg_0_0_0.z = 0.26672312478239213;
    tmp_tmp_tmp_msg_0_0_0.t = 0.008121096266229033;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("ESUCEHYYKKPFDA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::AcousticLink tmp_msg_1;
    tmp_msg_1.peer.assign("RYEFBFNZMQSIPKAVOXEPCDXKSKVDHLCDQCGBBLICEHOL");
    tmp_msg_1.rssi = 0.31991202513479156;
    tmp_msg_1.integrity = 44521U;
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
    msg.setTimeStamp(0.5018480314291354);
    msg.setSource(48518U);
    msg.setSourceEntity(35U);
    msg.setDestination(42041U);
    msg.setDestinationEntity(237U);
    msg.maneuver_id.assign("FSITXOVAPHCUMZDDASBKHYECNRUPQOKKPAWECGANWLGZYPNQAVMMLRMEVUYAZKBNCKLFCBCHHUWGDHXILDCMJCFBTGJTQWVFADJRQWNEWIXIITWOH");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.0652387794372411;
    tmp_msg_0.lon = 0.18243411090426775;
    tmp_msg_0.speed = 0.06593840567194342;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.limits = 133U;
    tmp_msg_0.max_depth = 0.4235949966081969;
    tmp_msg_0.min_alt = 0.058851952429769705;
    tmp_msg_0.time_limit = 0.5885472523655688;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2630867686682189;
    tmp_tmp_msg_0_0.lon = 0.7995590569264477;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("NPAGBAPNLDNLQGXPDCCJEMKUPJFZOUBIKHWLUEJRSVBTZMGLPCNGQEQJPFFRBMPKFNFKSWGFCLVLRUZJYCWRUYTSHRALCMVMKHQJQUGHWSADAWEHSGDIDYHASDFWRFZVDOFTBKGLTMOJD");
    tmp_msg_0.custom.assign("MYCBAURJWDKWNOHGAZMQMPBBFRWTRISJMLTOPEJPWGRBYSCIYKUTSXLLZTEOAEJUYSXBMUCTIRNZVZFWDHKBYSZVNGKVBDMIECJWHGHCAUNNNYBHGWQFKHOTUQDZNDOUVAOQEMMGDVYX");
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
    msg.setTimeStamp(0.5665367546771991);
    msg.setSource(2758U);
    msg.setSourceEntity(111U);
    msg.setDestination(16400U);
    msg.setDestinationEntity(120U);
    msg.maneuver_id.assign("OYVEIWQFYLSDPZKDMGBJNQKHHHOMLDRUUOFFZNNNYGNPQIMVKEZLAKRPFGYPPLXIBFZJODBLREBQUYOHDQKXUAKYCEDAVYTELRJVWBLANEEQXVHLSZHUDWUTKTGMSZWGEXIWCPISPFIEPAGCMJTNICRNWXXGMZIVBBF");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.09031111676114978;
    tmp_msg_0.lon = 0.23504887795925788;
    tmp_msg_0.speed = 0.8087195351792887;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.duration = 5580U;
    tmp_msg_0.sys_a = 29281U;
    tmp_msg_0.sys_b = 27365U;
    tmp_msg_0.move_threshold = 0.14463399293762114;
    msg.data.set(tmp_msg_0);
    IMC::RemoteActionsRequest tmp_msg_1;
    tmp_msg_1.op = 158U;
    tmp_msg_1.actions.assign("RNRBZRJWINHSALIHRQMQRAXLCOKQGHGECVLEFWVJKEISFTCFRPOBKIPZJVPMNXYIOPDXULSPPREPVNUTERSMGBFKCXGXUAAUVFSWUYFLUGNYOOPWRHLFXJDYPBKWYZGHBZDKJVCFMAHTBNYTNXLAXTIFIYMUEZOLCISZOFGUOGEBVQVTSUWWNIQRQCGHCDMJWEPDTVCESXIBYDAJHJAVZMUENBHMDJQZHOMTLKQSNBWZZDQXKKAYD");
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
    msg.setTimeStamp(0.018098848626867614);
    msg.setSource(59034U);
    msg.setSourceEntity(197U);
    msg.setDestination(60036U);
    msg.setDestinationEntity(181U);
    msg.maneuver_id.assign("QLTWEFWTYNTV");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 63556U;
    tmp_msg_0.flags = 75U;
    tmp_msg_0.lat = 0.16978676506029966;
    tmp_msg_0.lon = 0.17984369096882413;
    tmp_msg_0.start_z = 0.2857058620893642;
    tmp_msg_0.start_z_units = 192U;
    tmp_msg_0.end_z = 0.23547187894277366;
    tmp_msg_0.end_z_units = 150U;
    tmp_msg_0.radius = 0.05033841568611197;
    tmp_msg_0.speed = 0.766496429585472;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.custom.assign("XSQXFABYSQHDPCUVWKBMUVRKQJUYENZXUWJWCGLKOTNEXMXSAPJEFASFPTYSLEHNCLOHYDIDOFGWGQETBLFEWWGILDGRYWRHZ");
    msg.data.set(tmp_msg_0);
    IMC::DesiredControl tmp_msg_1;
    tmp_msg_1.x = 0.02132566097325539;
    tmp_msg_1.y = 0.7107238149868957;
    tmp_msg_1.z = 0.08335551252720852;
    tmp_msg_1.k = 0.02582883708315642;
    tmp_msg_1.m = 0.13120850080361035;
    tmp_msg_1.n = 0.706394449605065;
    tmp_msg_1.flags = 166U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AssetReport tmp_msg_2;
    tmp_msg_2.name.assign("YSJMZPMUBXGVJQJLOLDURJHWBZADWYILICRFVJGGGFFAIOYWKFAWTXOSSSZDCWHOGLNPXHNFROGYXHQWWGKCBMIBPQZTVVAAZEJCTEU");
    tmp_msg_2.report_time = 0.9424431354713761;
    tmp_msg_2.medium = 91U;
    tmp_msg_2.lat = 0.35082502610224997;
    tmp_msg_2.lon = 0.3433340686257127;
    tmp_msg_2.depth = 0.5223731769598556;
    tmp_msg_2.alt = 0.9256705711808293;
    tmp_msg_2.sog = 0.5807845114929258;
    tmp_msg_2.cog = 0.40881903808061015;
    IMC::GpsNavData tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.itow = 2192348485U;
    tmp_tmp_msg_2_0.lat = 0.2104543890484677;
    tmp_tmp_msg_2_0.lon = 0.934598452319313;
    tmp_tmp_msg_2_0.height_ell = 0.13520021529797932;
    tmp_tmp_msg_2_0.height_sea = 0.20250624775184312;
    tmp_tmp_msg_2_0.hacc = 0.9789765620467168;
    tmp_tmp_msg_2_0.vacc = 0.20572736599960406;
    tmp_tmp_msg_2_0.vel_n = 0.8100248872887084;
    tmp_tmp_msg_2_0.vel_e = 0.3751806842514199;
    tmp_tmp_msg_2_0.vel_d = 0.04457173856768515;
    tmp_tmp_msg_2_0.speed = 0.2885948486563491;
    tmp_tmp_msg_2_0.gspeed = 0.24100710169479578;
    tmp_tmp_msg_2_0.heading = 0.8593259504369859;
    tmp_tmp_msg_2_0.sacc = 0.2065162839443181;
    tmp_tmp_msg_2_0.cacc = 0.5421570003691899;
    tmp_msg_2.msgs.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.5971427279780906);
    msg.setSource(2850U);
    msg.setSourceEntity(119U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("SMMTWEZPANFXLTPFNCBFMPJKMBDNLCAIUBKHRLURIVYWEVCGYBQXJJWCNTGRAMJDSPOPZONZOTUXHHKJCWKCJOFSZDPZKNNRHIHYWMUWJQSTEIINHVKWEXUMQEYOYDIPBSSUHEYGUGQXBZIXDYEGPXHXTGWALJNZUAVTFVHZRPOSOIZZKIAJCAWKBXRQLDVEUEUNCMQLGQLRLVYGXVQKFPSRJFRFMDFFWIVOSCCYOKGYOGMQEBLTDBAVDABQD");
    msg.dest_man.assign("FWQIKGGGTICB");
    msg.conditions.assign("FPWTYQNYUWMFJXARJZWYECDBMPMVAGPNIMNTPQNDIGBLTYMDHAGLDCRLHOAATLRASRWUSQFVOZNRNOOGLVGETXUTSUAJLBELSWCKKFUISDBGKKNOKQHOUFYEAIKCXYVHRU");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.07425832562557666;
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
    msg.setTimeStamp(0.13542346001230832);
    msg.setSource(7357U);
    msg.setSourceEntity(18U);
    msg.setDestination(15020U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("GEHQJEFWIIZSFWCCFURQJCOTDJHVLOUHEKZFLINPWREXEVJMQAWRHEKCCZOOYNOQICHXJGJDZBYLXKCBRGMA");
    msg.dest_man.assign("AUKBLFSRNPEMBDTOCSBWWXKKBPMFSRMLYEUQMDOUNFRIWEAX");
    msg.conditions.assign("UAVCTYJHMQGTYRRTJDNEKDRXFJHBKWQJWMRZHFYYEHOFFWMBMNQRSKKALEHFHVGIAISMICXCSSFDPTBBMJOGCQKOBLBBUZWQCIGNNNQHOLTVLFZRMPLTQVJYMGZVARAUKBDVUUDCDIZWWJFURARSYXSUWFROWJGAESXNXZZPOCG");

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
    msg.setTimeStamp(0.6673466263928358);
    msg.setSource(3651U);
    msg.setSourceEntity(70U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("XTQYKACVVMKAJQAZQUEN");
    msg.dest_man.assign("MRSZZXTGKQIKUHPMV");
    msg.conditions.assign("PRRBPWNLDYIOOCPZOKFBMPMAAKJZDNUFFCMBHHZVDENUCDRAQWZMWXCSQHTKFIXQTMPPYUSFVMKYNHGBDDREXSWTEBLRCEFKCKRISGPBWVIEUQNONPRMJZLEVZYIZSXJCNLJTRUYOFQXZRXEOTGQLXOPBLISCBWZHVFQLUEXYIRGWEOMXHJDQMMHGHVONNYDKAQLAAQJLWAUGPYCJH");
    IMC::MsgList tmp_msg_0;
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("JZZQVCKBCGTNBTXXOHCKLOWLIUQLHJSIOSHYCYQTMYLEUGWGVMBNPCVXMWLRSOHJBMZHOIMUFYLJZVPMRRNAPFRNWHUZQTBLIPJSRTDNQNSAKNPFWKQXDIJCHIDEGLSXXQINNUPBWYZDWQDGOQEYFSGAHGLRWAVFMFRWCIZZKPKOKKOEYGDHNPFA");
    tmp_tmp_msg_0_0.data.assign("LPRNEPIFSOGEWWMKQLUXTTZOYZDRBICAKDYXHPMJMYNFVXYIKYUPBMUQSPRECIMDPZLCLOTHGKKOVBMZOXXLTWNRHJAYFVGTNJHEHDSUAUIFNLSSBYQVPKJXRGQIWXFZWREIABCRRQXTPTXTJEI");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4131193905520365);
    msg.setSource(5826U);
    msg.setSourceEntity(19U);
    msg.setDestination(53137U);
    msg.setDestinationEntity(44U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FJCTARDAXTGJMFNSDTYRYCBFGKGDWWGGLFXRWNVEWGAHUMUBXBVLORLXJWSSEZMLYJUOBTCQORPUUCFLTHVMYWCFRYDHBTMLZSKNQITQZPTIIRLCHZZPSERWGVSUEZUYJSVHYSOHBOKAHCDNNKLXAEHQOVPXENYUUMPPAITXBINKOABEDQEAD");
    tmp_msg_0.description.assign("ZLYZFYINUXPZUXEBVBFHVWLOLBGKZPNTQMVNDFGOVBFPHYEIGEGWNFSA");
    tmp_msg_0.vnamespace.assign("VRYZVZNLPNTIACUNDBWVUHBHDTJRGQSCOYDJOISZCDJQNQPYESGNYIGQAVHRQDMMZNAXWJTMQPVPHLBL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RMUHTYVGATAREZUAZWGKUMZLTVWLKDNDHMPVHIBKLGJPKQDLITJHTBEJRIVUPYRLDKNKEPQVTNRXJNBVABGZMELFENEOFLQMFEOURRBKJHSGHASQTYWOICDBAX");
    tmp_tmp_msg_0_0.value.assign("OTSLFANLDIDCZLJWORUFJGPHVACREFKMOBNHDICJHPUHFJ");
    tmp_tmp_msg_0_0.type = 23U;
    tmp_tmp_msg_0_0.access = 20U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SJQZGYBZVURZNHZNXTRMUENUNAKTJRHVGIICSFNNFWELSKBSEQZSIMFQAVYHTXWELVRDJURKIGIMSEGWSVCXAMZQYNLCPYMTHDFJCMELDQIMRYLIPGPFQXRGHXMIAUWPVVKHFHHHTFTDKHGOQZAKJOVDEWBIBPBSQPTWGLSLOTRNXFXGCOOZOATETBJEZVOAXRKWWBCLYKMABUDJLCS");
    IMC::GetParametersXml tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2941667272633871);
    msg.setSource(15021U);
    msg.setSourceEntity(182U);
    msg.setDestination(28538U);
    msg.setDestinationEntity(226U);
    msg.command = 188U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QBNMFQCUJDVMRGSVUNIMVFBUXFCVXECURPLFBYUCCRQZJSVMJJEGIROHKXGWAAIQOMXSDKSKEDHELYPEEDBLWAGEYBOAHNVSGSOIONCUZYNDTLHEVCIFVZWWGJUZGVTLIAXSYRXAHKTJPCZNLJKSQNZZBIW");
    tmp_msg_0.description.assign("ZPVZYIRENMFXEQSABSUGNKIUZQTGKLSDTJIRJEJADFNRITZBBDOKMPVWVAYWASZVOEPCEMDMZDBWVMLYHEUJUUWMCYNNLOJGFJRVLEKIAILDHGFBXMOYPQGEAAIFEWFUCDBSPFHTGXCPHQKTFNDCHKYICWDULQLFTZOKQGROBHBSYCRSCXHYPBUXCIOPJOTQATCSRJZPTHNRJWKVNWIDL");
    tmp_msg_0.vnamespace.assign("AZGKAYLYQSCXTCMYDKFNFVTUGSQMLEOPOHOZWXLCFKJTVELDFQCUSNIDXBRVZKRXSYIYWPUUMEHBPDTSMPOIMTPLBDGFCMVNXUWKPZSXUZXDNJSGGMNSWHAKYQSHTFHLRQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FRNWPDCLFSQBAIHPEOELIWJFTKVTZUVTYHXRJMFBDQFDTHLAHYPOAYFEJLXYCDZUNOJQPRGOAGSFPTFWSYXJQYMGTNSULHWQDOKCKVEOPVGNWSYZICJQUELVXPTRKRJVMLDBACGLUYWECRXZXJBHCDWZPAASGQCWMILSIZNKUOGHGIMNSILFKWZNRITMEZBPETJKAOXIHRYTWMRDQQKSBGKMUXUE");
    tmp_tmp_msg_0_0.value.assign("PDKDGECVWJLERYDWUBKORRBXOCNEQPYXMIKKINOORNRSBGTQAYBNAMGXVGUPSOYSUYQFUZZIEWQCLMVONLCMIHUHUMXWAZXKZZHHTJERTCAKBFJTDMNDVEDVKLCGEBXAAE");
    tmp_tmp_msg_0_0.type = 84U;
    tmp_tmp_msg_0_0.access = 120U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UNNVERZFQQBDGZUQTTEBKHYKOAOXOGBQHNUVXHIVFBDILJIKHMFVTCMUEKZCTFQAJHCSWDCZJWWRJRGRHIMCATWVSICGQYJDKPCWRYWBPUDZLRPOUKAIKQSHEXCBUGFXTYZYLYTTRQPLHDLMLVDMSWSHNAJMMBAOGZPMXUIKOOEPDEDM");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TRUVQOEJTDJWMGPLNGLZXALXULCIVEJTHMDOXOBJOUGCQRSHIYUCGCNSSFQJRLXKZY");
    tmp_tmp_msg_0_1.dest_man.assign("AKSKUMVFAWYHBYRRPJGVBPNZGLBKBQVDZGEEPYHKKJQRAPEMWFSBCUGXUHOSBRTAATOJXQOYNZQJCNDAJEWPOIDXTPUVMADQYUOQWZNNCYAIJMYDUCRJNOLHZFGVLVSXEZBCOMISNSGFPKZSHQKLZLTGS");
    tmp_tmp_msg_0_1.conditions.assign("BIJNPKLTTJHKTWNTCSAFEOXBLCMWQDPDBIMIYMNFXFPGERKPQYGAWTHZFCUUBSXGMXVHUKJMNSGROVQTAZXIAUBCOURLQQNPZLRYAOOILBESLBQXYIKFRWGIWNNEJHFLSPZBDPGJZUYDSDDTWRYLOQZFFUDXZGEVCCITWPAJASSJPY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SoiCommand tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 132U;
    tmp_tmp_msg_0_2.command = 115U;
    tmp_tmp_msg_0_2.settings.assign("UHWSYCXNXAWFPIZVOVA");
    IMC::SoiPlan tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_id = 63631U;
    tmp_tmp_msg_0_2.plan.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.info.assign("VQLJEVWBJIKYQHTQMDEPYKFBLDWHEZYQOLWUDVUCRHTRZUARYNZVOAOSQVGFABAQEPBQXJYROWENHMJDCNMKGWJISCLOBAPCUXFKYRFTHUVDGZHBFFTTRRIVAETZHGLSITDCXZIVGGSSITUCISYKGAHXLBRVSDPMZOXOSJWAUKZCDXVNEOHSSLNDXYIENEFPCFQBFMIGYLNDUCYKHGQWMJXUAKPF");
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
    msg.setTimeStamp(0.5455910904718295);
    msg.setSource(47455U);
    msg.setSourceEntity(177U);
    msg.setDestination(1999U);
    msg.setDestinationEntity(208U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EUFWQWDJSCHKCHOEUAIDMRXRYLIJYZRVJHKXDGKFHVPZDVSQFLTROAANOQGELCYSOTDFSEIYVRZUXKPJOBLHKEKQ");
    tmp_msg_0.description.assign("CRIMIAZKFSKTETVCYRNSOAGTSPVPNCN");
    tmp_msg_0.vnamespace.assign("ZBUACUIHISKBIOFNODJCGQIKSXXMMLRBPCHQHZJFSEOXZLOWNHWGYABKYGFAYCRRSAIXMGZGZEDRETINUWWPYAQDYYYVKTPHXPEWFM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CNBHISYVGDOXVYUKUPFXCRKEBZLTRFUAWONQUAHLNASRDSOPNDMXJTIQUWCVUUTYBVZQZSGVCFGJUSKFVHBHPXAUHHDITGHMVLOZNPFWJLTGNNBZQINQMPJDZROSQWKCQLCAVHXQGIILELGUVYQXJPEFFFTCNOERXEMBADKOKOMJTBVDRDCLYMSAWMWEDBLXFTPMJLYSEYEBSZPIAIHOBOGIEMTYGSWYCMKIZGCPQKKWKNJH");
    tmp_tmp_msg_0_0.value.assign("CNYNVABBGKOLPQVMMNMPMNKPUJTSUCCVFQULQYSNRAVCAHHFJJKVTENJYIEMXHTFBLWOUGXOPWDXSMPGODYTSNYBXEWIHRQJVTZLDQECKYCBXRPSOXTUSPIAEBA");
    tmp_tmp_msg_0_0.type = 220U;
    tmp_tmp_msg_0_0.access = 64U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XIVJDKMBJCJHUFHXBSKKEJKMENTRWSRITHYHHPXQTWCQSIGOHOZYKPLBMBYTBOFITNKVULTJKLRBOLZDZENYGDDSDGOEPNCMFUWICEQNRAIFAIQPFUAGYUNHPAWBYWIGLKODEZFAIJGCVRJGBVZZVRRFXPVYZGLDIBNMUAOSMOVNRQDPKTSWXNEAWEOGHXCTYFDUMCQOWLPUTVPZAFSVQVPQNAMZBMY");
    IMC::FollowTrajectory tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 34063U;
    tmp_tmp_msg_0_1.lat = 0.022511957859242426;
    tmp_tmp_msg_0_1.lon = 0.47149949076231623;
    tmp_tmp_msg_0_1.z = 0.5613109040340132;
    tmp_tmp_msg_0_1.z_units = 130U;
    tmp_tmp_msg_0_1.speed = 0.7906450414147657;
    tmp_tmp_msg_0_1.speed_units = 209U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.9008686602448246;
    tmp_tmp_tmp_msg_0_1_0.y = 0.23011297805705133;
    tmp_tmp_tmp_msg_0_1_0.z = 0.004056446254653068;
    tmp_tmp_tmp_msg_0_1_0.t = 0.5787171992463881;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.custom.assign("CLYKUPSBMXTVEVIXGNIFFMTDCYDOAAVFUMSRKIIOSWWDMNOOSNHJHGBWGPGZQXTWNMOOEIW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::IoEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 138U;
    tmp_tmp_msg_0_2.error.assign("MNOOTBJGBVBEHQWTDLWUBZKPVALDNWNUITYZYIFHYKKZACKBPAPAZXSLEPJGDIFTLXDNYZQXWQQRQTHOGJVEANVCMJFEUVPXJXGXEIOPYUWADHNFRHRCDSSIOXTRDIWCIVJ");
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
    msg.setTimeStamp(0.327942818253242);
    msg.setSource(36893U);
    msg.setSourceEntity(75U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(72U);
    msg.state = 149U;
    msg.plan_id.assign("RBPQIJBWZZZRLVBNLYMAVUZEHCVHORTFFCXIQWNJGPLOS");
    msg.comm_level = 168U;

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
    msg.setTimeStamp(0.8611609508652427);
    msg.setSource(36099U);
    msg.setSourceEntity(238U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(17U);
    msg.state = 54U;
    msg.plan_id.assign("ERNSFQMMPAOD");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.5961358378058121);
    msg.setSource(43558U);
    msg.setSourceEntity(212U);
    msg.setDestination(42154U);
    msg.setDestinationEntity(251U);
    msg.state = 207U;
    msg.plan_id.assign("CXZEDFMUQBAMBHTPTLGLFLDGZZSTJTOLNMTBCSDNIDFMVQWKQMXOSRGPZGPYYVELRLSQWXSLXPUFROPUWKBCAOCHGVKALXPKTZHQVKHDSMWULXEZUASOUJIOIMMGGCNRZYJZFVYWBUAYYPNYQSKSRTWHFKFWDJVBKVIICZHUIAKONVJOSYYNAHHPKGOTIEVPCERNMGEOWTGRIJQHYQEUHBEFXRDNPQCFZXDCXABTLDERMRINAEDXU");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.7835931643784307);
    msg.setSource(26797U);
    msg.setSourceEntity(111U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(192U);
    msg.type = 96U;
    msg.op = 186U;
    msg.request_id = 54788U;
    msg.plan_id.assign("ACIDJECJYJFVHXIOOGNYNPCGVQGHEFGGGWQDXERRLTYTUVNDUYRZKMVSHZNVDMSSBPFDBXVKLFATBZLETRHWAOAWKVWIASOPIJXBHZWMQPBHWCWOOPFIACKNGOIUOEOECIDTUWIRLCSHJZBAHBKQURQUPDDWKHGJEXYTMMKBFNQVUUNQKEYZDAURXELIXFRCBAZJMZMSMF");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 252U;
    tmp_msg_0.speed = 32040U;
    const signed char tmp_tmp_msg_0_0[] = {-50, -10, 113, 15, -97, 98, -12, 45, 64, -97, -57, -63, -35, -18, 39, 111, -29, -29, 17, 35, 92, -74, 99, -91, -128, -28, 96, 96, -30, -117, -21, 66, 64, -26, 51, -114, -76, 52, 73, 44, -79, 37, -81, 35, 94, -1};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RMNWFKSBOKGJTQZBGTEZRSZWBVCWFNYVHXYOCTPHOARADDBDJEAVWXKMUIMYQLTVGTGDXLEJENBIKOIJIMRKZKPHSTGSLLEWGFIPGZXAMYHTBUTQPRMDWMRQFDHGOYBQVOJQNVPEFMIZVOUOZWIAHZPXEMVDSHXDSNGNSUCKXVATWC");

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
    msg.setTimeStamp(0.9775744762506839);
    msg.setSource(19099U);
    msg.setSourceEntity(220U);
    msg.setDestination(62148U);
    msg.setDestinationEntity(41U);
    msg.type = 216U;
    msg.op = 229U;
    msg.request_id = 53678U;
    msg.plan_id.assign("NUAIADMEQERKTREDPJAWJVXDUXEXNRCWNDPKRMXUZZQJJBGDWKHOQVYZRSYVLRCKJQDFMACMYYHXUIABLGULHOKYBKAXFVLKNOX");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.4467411735309632;
    tmp_msg_0.time_next_service = 0.6368042523416745;
    tmp_msg_0.time_motor_next_service = 0.03468816354901516;
    tmp_msg_0.time_idle_ground = 0.2990603145867635;
    tmp_msg_0.time_idle_air = 0.91798463535131;
    tmp_msg_0.time_idle_water = 0.6718826082306143;
    tmp_msg_0.time_idle_underwater = 0.06270654055064906;
    tmp_msg_0.time_idle_unknown = 0.8080229353861281;
    tmp_msg_0.time_motor_ground = 0.43255610168757996;
    tmp_msg_0.time_motor_air = 0.3376856182940301;
    tmp_msg_0.time_motor_water = 0.39414018160713027;
    tmp_msg_0.time_motor_underwater = 0.39722125470820324;
    tmp_msg_0.time_motor_unknown = 0.9485635293989272;
    tmp_msg_0.rpm_min = 27698;
    tmp_msg_0.rpm_max = 12486;
    tmp_msg_0.depth_max = 0.8948033704449017;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SGOVHUOXUQKZMZFHNZDSDEHYENXBRZNFRBSELTUOKKQIP");

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
    msg.setTimeStamp(0.9944011224483705);
    msg.setSource(10792U);
    msg.setSourceEntity(57U);
    msg.setDestination(55182U);
    msg.setDestinationEntity(50U);
    msg.type = 101U;
    msg.op = 211U;
    msg.request_id = 58566U;
    msg.plan_id.assign("ASMOLWSWFZFLXEGKQGBMQDRIOBMVDDTPJEEUXKNCJQCCHXOOMFBFBLXFREJZHLPLUUSPEQTJPDBCDHTFDXZROVSDWBAQWHTVXRVPBKMAYGUNALTIONATFQSFATNZEPSMQWWNLIQGWZEWZBCLHONNPIHAVREMYVXWQUUKLPHCNZIGIRCRQKAUUCKIDXO");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.5353777416549146;
    tmp_msg_0.lon = 0.7709734086257857;
    tmp_msg_0.z = 0.0570934890999687;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.speed = 0.7653748130676401;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.abort_z = 0.7537580272906087;
    tmp_msg_0.bearing = 0.5694226046571019;
    tmp_msg_0.glide_slope = 14U;
    tmp_msg_0.glide_slope_alt = 0.07749144474232195;
    tmp_msg_0.custom.assign("TXOOSCUYMCJREHZTLNMZSDEGVJSQUFZJYJWVCAPZXJBYMLAGWWMTPIZYKNFHNZWRCBIECBIVXFQHXZBBUGZDKDWPOAXDIPYPHOFKUEWTLQAAIAVDGIOPGQXFNDHSMVAYDRR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AGEGDHSRGROUXNMKCFKJLSGVXTTSZCXZCDXIMEPVFZGUFJOPBEWQRQURQFVZIQSACCVQHAAQJJGXZWFWWAEUTSKPGVJHLNQRYUZVDYPLVWHNVEQBPKWTWBWRMZBBEYFLKFRHDTNLWFZWOTDSDZNHCCDRTMTJMABXKJYDEBHXUMMLTOACKNOEEKSUJNNIPOIMEAKXPJYCIIGPNDD");

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
    msg.setTimeStamp(0.4290168437217071);
    msg.setSource(63186U);
    msg.setSourceEntity(201U);
    msg.setDestination(9998U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 32144U;
    msg.plan_size = 3520721593U;
    msg.change_time = 0.753776669002101;
    msg.change_sid = 11360U;
    msg.change_sname.assign("VISYTMLJAZMAADWBKAOJDSSNNTFFWZKERDMWYELOUNBOWBGVUTJFEWBRJBJARZCWYYWVDVGSZFLNYTEBUGQDKKVNOOHXJJGVTSGSUIXJHXICZUVRIWFSQQXMYBOCPBAHGLLBKCHHYPLVGZNGLMXZHTPN");
    const signed char tmp_msg_0[] = {26, -24, -35, -82, 62, -106, 115, 120, -23, -66, 51, -29, 79, 11, -31, -42, 84, -99, 107, -34, 24, -17, -59, -107, -87, -5, 83, -6, -99, -73, 122, -2, 62, 20, -100, -65, -116, -18, 101, 111, 3, -61, 15, -63, 123, 116, -111, 43, 59, -88, -119, -5, 85, -27, 41, -58, -113, -32, -78, -26, 5, -34, -71, 94, 118, 78, -84, -44, -43, 7, -54, -37, -94, 6, -88, -79, -96, 102, -50, -102, -126, -73, -42, -5, 28, -16, -37, -4, -10, 94, -32, 68, -62, -124, 91, -29, -29, 10, -31, -65, -101, -119, -94, 64, 119, -31, -60, -2, -78, 9, 95, 111, -73, -19, 41, 79, -64, -109, -23, -113, -78, -9, 2, -39, 115, 39, -29, -57, 99, -90, 49, -124, -114, -24, 95, -121, 116, 31, 48, 87, -20, 92, -101, -102, -27, -52, 97, -107, 122, -69, -72, -16, 44, 105, -87, 96, 74, -115, 109, 74, -110, 0, 47, -88, 120, 83, 93, -26, -76, 70, 83, -53, -57, -98, -39, -47, 51, 65, 27, -119, -44, -29, 100, 5, -48, 66, -12, -5, 97, 2, 10, -42, -106, 10, 124, 0, -40, -100, -100, -52, -70, -20, -9, -25, 21, 63, 126, -72, 37, -79, 104, 2, 73, -38, 16, -127, -74, 85, 42, -48, -31, 58, -27, -100, 109, 57, 87, 108, -115, -121, 119, -97, -91, 8, 41, 49, 117, -13, 11, -102, 24, -47, 80, 109, -51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WDRISDHMPZDRPEEIQASODAPCAMCMQOHJPQZBUQHNJLHWGOYBNDKRVFLKMVCNBKYNHVBBFKOJLMYOUYEVPHUMZIUOFAWBETCCXXXTVFSXYZXXZCFNUPTWSQAZJSKRRGKDIQUDFCGFTKGFUQTLGEONYTKNLIUHGJWWVIGBVHPXDEBFRIMMMEYSVGMVRDRSSFXWBNCEHAO");
    tmp_msg_1.plan_size = 23960U;
    tmp_msg_1.change_time = 0.7115380035783273;
    tmp_msg_1.change_sid = 50875U;
    tmp_msg_1.change_sname.assign("LADAXPVPZLUQJZCFHWWPPXPVIBIELIUWHGCPIARQCTBXACFYMNRJDJZAWODDTBVDDKNYQPRUZXESGGEEKTNSEZFZTUYWVRUYFAVYBJSEFMSHKKGPBUKLBLGOCCQQVZ");
    const signed char tmp_tmp_msg_1_0[] = {-105, -89, 15, -61, -78, -30, 75, 63, 62, 107, -8, 14, 96, -85, 64, -59, -121, 56, -120, 79, 32, 58, -127, 101, 71, 28, -91, -112, 108, 124, -102, -21, -127, 73, 34, 23, -103, 58, 90, -4, 42, -25, -3, 20, -68, 71, 82, -3, 66, -34, 8, 54, -52, 29, -122, 106, 89, 79, 0, 41, 7, 17, -38, 126, 90, 75, -120, -127, 80, -53, 12, 74, -1, -39, -110, -78, 57, 68, -66, 15, 87, -93, -45, -33, -55, -2, -2, -5, -127, 34, 102, 126, -7, -45, -101, -108, 108, 54, -36, 44, 61, 100, 113, -4, -67, -38, -88, 91, 74, -115, -31, -24, 92, -99, -66, -1, 97, 79, -84, 38, -119, 123, 108, 122, 120, 107, 116, 104, -13, -18, 1, -31, -120, 5, -112, 46, 124, 23, 9, -102, 84, -56, -65, 118, 107, 71, -25, -48, 31, 44, 9, 24, 78, -20, -76, -18, -48, -61, -30, 96, -89, 82, -41, 10, 123, -73, -9, 87, -111, 39, 112, -116, -125, 28, -100, -124, -18, -105, -17, 99, 75, -123, -99, -63, 59, -117, -80, 68, 4, 27, 94, 76, 17, -12, 109, -103, 110, 18, 29, -78, -86, 118, 80, -77, -108, 91};
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
    msg.setTimeStamp(0.9651756905200399);
    msg.setSource(7499U);
    msg.setSourceEntity(85U);
    msg.setDestination(22161U);
    msg.setDestinationEntity(167U);
    msg.plan_count = 45816U;
    msg.plan_size = 3690810508U;
    msg.change_time = 0.8786742362645499;
    msg.change_sid = 5656U;
    msg.change_sname.assign("NZQXJOLGBLPTMQCNUFSAGZRWJDHHIOPNPBNEXAHQAQJVVTDYEYJGSGRWYEJFHGVCXWAQXKGFPLQORHINOJBGKMWAIUWESUCWXHZXRRTYHRZUKDJYHULTODPYSNRMYJAUUOBFSXLNJNLFDVYEBLCKUTECCLFBFWVDIKCMMLPTRXKHQAOOAIEPKMXNPVSBPZ");
    const signed char tmp_msg_0[] = {18, -98, -32, -86, 38, -85, -37, 95, 47, -8, -60, 25, -14, -38, -47, -19, -4, 114, -18, 55, -54, -30, -103, 35};
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
    msg.setTimeStamp(0.38408156033898866);
    msg.setSource(16374U);
    msg.setSourceEntity(26U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(184U);
    msg.plan_count = 16198U;
    msg.plan_size = 1757544484U;
    msg.change_time = 0.09781376331336267;
    msg.change_sid = 53236U;
    msg.change_sname.assign("YXSDIHYSKNFBEUYJSQUFAZUDNXFKUROKQLQSAOPDPVJJMTOJZIVWGRWSMBXQGYWRUKEEIVIDJVFVEYLTEJXZLWUMIFLBVFUNGQTIGCWMAKXBJDUTXQHOCYANCBZEDSMUTQLDKLEOIRRMHPGLJTTIKCRPOTFBRXGVFHOKMQUBHQWODMRZBVICWPNNPAGCZVZXTNCFHMKXPAKTFZNJNRXZYDHAMOSLPEGPAAHCVCLWERILBYOSWSECDJWQY");
    const signed char tmp_msg_0[] = {-8, -11, -49, 22, 67, 69, -72, 121, 118, -83, 124, 15, 107, -7, -21, 30, -57, -4, 0, 118, -23, 78, -2, -125, 76, -58, 5, 20, 49, 56, 51, -72, 48, -53, 31, -115, -77, 89, 33, 95, 118, 63, -91, 70, 97, -78, 21, 63, 46, -128, 23, 10, -65, -104, 115, 6, -94, 20, -19, 48, -103, -116, 31, 122, -117, -85, -85, 22, 115, 109, -3, 7, 104, 45, 60, -115, -114, 44, -35, -8, 70, 17, -40, 114, -74, -102, -107, -77, -128, 46, 24, 87, 103, 34, 79, 8, -71, -88, -62, -94, 115, 107, 125, 125, -68, 121, 65, 88, -37, 94, 38, 18, -104, 78, -8, -45, -58, 39, 83, -102, -120, 73, 46, -71, -75, -89, 32, 98, 37, 20, -46, -91, -121, 27, 115, 33, -25, 14, 93, -61, 93, -56, 12, -42, -6, -28, -70, 20, 58, -99, 20, 109, -111, 41, 85, 76, 78, -39, -96, 111, 43, -96, 3, 0, -54, 61, -18, -108, -46, -10, -61, -83, 33, -66, -63, 14, 19, -96, 80, 19, 72, -90, 78, -79, -32, -40, 20, 121, -22, 24, -78, -72, -32, -68, -114, -114, 124, 116, -29, -102, -83, 110, 79, 90, -99, -69, 14, -37, -47, -27, -21, 69, -62, -95, -109, -82, 67, -38, -88, 45, 84, 70, -89, 11, -32, -65, -71, -121, -17, -46, -47, -15, -115, -124, 107, -106, 18, -32, 80, 12, -109, 50, 118, 32, 107, -105, -45, 36, 8, 75, 29, 101, 93, -57};
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
    msg.setTimeStamp(0.5365658962898766);
    msg.setSource(45892U);
    msg.setSourceEntity(157U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("VZRYEDQTDAFAYKSTKHZOESEMNNSKUKPWJZHGSNHZKIQKCAQBQHLWVUVJVODROOCZNYTILSABAXZBJLUWVLZYNMCSUBFPPSXPPTOYZHCGJVXIHWRZECHMPWGLOBJIFJRUNICUXPOYECCXJGMLIYGUDFTNDFCTGLMSXJRGUVRNURCPQTFRVUNASMAQTHFEPLYWJEYVBBVWIOKKJLBDXMHIEWOFQSX");
    msg.plan_size = 35207U;
    msg.change_time = 0.47109431871968654;
    msg.change_sid = 36432U;
    msg.change_sname.assign("KNTHCOODLMHMOKKAOCNDOFTBRXWB");
    const signed char tmp_msg_0[] = {17, 10, 110, -107, 62, -100, -22, -96, 0, 48, 85, -83, -117, -67, -69, -103, 102, 32, -98, 73, -91, -111, 48, 120, 111, -6, -115, -56, 123, 98, 109, 26, 16, -68, -77, -5, -122, 85, 18, -114, 86, 63, 9, -70, 94, -72, -100, -58, 42, -55, -68, -53, -48, 98, -121, 47, -15, 57, -96, 123, 114, -44, 86, -103, 20, -54, 56, -112, 25, -46, -91, 76, 50, 115, 10, -13, 37, 47, 65, 67, 90, -123, -83, -19, 124, -17, -76, 36, -89, -50, -112, 18, 69, -38, -120, -5, 119, -31, 31, 20, 1, -70, 116, -53, -41, -66, -75, 84, -54, 11, -35, -97, 121, -6, 99, -45, 105, -72, -4, 12, -46, 61, -78, -69, 28, 55, -17, 18, -9, -128, 64, -31, -18, 73, 29, 111, -3, -50, -34, 99, 121, 74, -38, -122, 66, -128, 47, -95, -33, 16, 59, 41, 32, 42, -72, -118, 67, -28, -19, -34, -61, -94, 126, 85, -72, 76, 80, -82, -18, 20, 71, 27, 44, 81, 92, 111, -126, -113, 10, -22, -86, -54, 5, -60, 0, -76, 37, -112, -25, 56};
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
    msg.setTimeStamp(0.8752180798285144);
    msg.setSource(60781U);
    msg.setSourceEntity(72U);
    msg.setDestination(47218U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("LXVTHMGJMGZOYWNZMUBCDIUAJMITTBQGBJDPRFKYEZUVNYDGXZGWQPIURISNGBHFALBRWBMTVNYXRFTBAZVYWCAAMYQCSJPLBJQKPIFSEORORCJDAMDEEKFYVFSFHSHTETKLZXETGSZMYKSPEJKNEFQOBZSIJH");
    msg.plan_size = 30307U;
    msg.change_time = 0.17899397529353667;
    msg.change_sid = 40939U;
    msg.change_sname.assign("BUWCDFBUHVZGTGTNYCDGIGZHCAMVREBDYIZRDKBUBASAFEEOKGYPKMQPPX");
    const signed char tmp_msg_0[] = {105, 32, -59, 123, 41, -2, 37, 34, 63, -35, 43, 73, 95, -66, 5, 95, -113, -119, -16, 58, -3, -48, -19, -55, 42, 120, 112, 1, 61, 64, 61, -90, 100, -4, 19, -62, -24, 48, 4, -7, 78, -110, 55, 52, -96, 43, 79, 67, -66, 41, 114, -82, 53, -100, 84, -122, -51, -91, 123, -105, -32, 12, 89, 14, 109, -118, -119, 49, -22, 36, 75, -73, -85, 88, 111, 91, 96, -55, -127, 47, 83, -101, -97, -88, -56, 56, 48, 25, -12, -67, -106, -41, -9, 54, 92, -66, -50, 106, 71, 96, 74, -64, 53, 112, -98, -40, -66, -40, -63, 115, -99, 123, 85, -25, -88, -125, -18, -106, -55, 94, -41, -41, -59, 57, 102, 91, -52, -123, 92, 78, -51, -35, 63, -26, -17, 7, 56, 8, 51, 24, -90, -48, -84, 18, 45, 21, 79, -6, -53, -42, -106, 66, 83, -24, 42, 55, 106, 38, -67, -125, -1, 37, -104, -71, -112, -27, -40, 0, 44, -89, 14, 112, 108, 53, -26, 123, 81, -35, 20, 124, 81, 60, 100, 37, 125, 37, -79, 44, -70, 18, 54, -84, -89, -96, -64, 22, -125, 70, 84, -106, -92, 122, -50, 27, -50, 92, -38, -16, 60, 45, 35, -69, -109, -54, -64, -82, -12, -46, 57, 67, 100, -16, 116, -16, -54};
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
    msg.setTimeStamp(0.20193497624898593);
    msg.setSource(51819U);
    msg.setSourceEntity(24U);
    msg.setDestination(8729U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("GSEFLCJRHJWXXOUHBEVQTZZUPNPDQJLVGDKDLDFWXBLYYVKUXEAVIJENQNMORMCRKJEFKGFEAIUKQTGFSFORZIEJJHAJZZLENVMTACNWZAXFMPXDERUWBQGOVFPDKCFCIQPXLCLKLBICMGPIXSASRYTZUZPYHTCVYWOVPGTITWXMSDMCPVWHBISAWHSOFLUATHYUUTUBNMOHBOKEDQIJWSNSCGMNRBIZHNORNQYAKRXMYB");
    msg.plan_size = 7004U;
    msg.change_time = 0.37905808066140456;
    msg.change_sid = 28920U;
    msg.change_sname.assign("HIRVMURMWUQAUEHZIHNVUNZBZJDMEGJWPHWVSHOCYZJKCYHQMKDTYQFAPCEGEFAFCLPXOUYORDOCECDUMTVUTLRHPSNFOUCTLDDMRPTSCGWNF");
    const signed char tmp_msg_0[] = {-17, 80, 118, 62, -13, 23, -76, -111, 3, -37, 58, 37, -18, 124, -84, 55, -18, 103, 21, 119, 96, -26, 20, 77, 13, 16, -15, 61, 6, 54, -56, 6, -90, -14, 21, -73, -120, 94, 28, 39, -40, 113, 35, -4, 9, -81, -10, 30, 38, 29, 26, -46, -112, 67, 18, -70, 100, 38, -57, 125, -26, 15, 116, -36, -17, -51, 6, 28, 35, -7, -46, -31, -122, 106, 123, 66, 81, 38, -106, 6, -85, -47, -49, 70, 3, -127, 75, -12, -44, 97, 58, -66, 0, 56, -49, 22, 64, -111, -101, -10, 71, -14, -89, -4, 89, -84, 113, 92, -107, -88, 2, 100, -86, 49, -124, -86, 17, -5, 76, 69, 42, 121, -77, 115, -57, 39, 68, 73, -91, -49, -28, 60, 66, -80, 44, -126, -107, 68, 16, 44, 74, -83, -21, 77, 50, 103, -14, -27, -92, 117, 38, -42, -127, -11, -11, -34, -53, -17, 89, -70, -108, -128, -36, -3, 64, -87, 1, -107, 50, -34, 88, -38, -91, -31, -62, 53, -11, 87, 57, 101, -47, -45, -20, 8, 32, -6, 122, -3, -90, 111};
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
    msg.setTimeStamp(0.9776466431197782);
    msg.setSource(64907U);
    msg.setSourceEntity(1U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(114U);
    msg.type = 156U;
    msg.op = 127U;
    msg.request_id = 35835U;
    msg.plan_id.assign("FWKTMQEPYXYNWJYLVMRBJWLDPCMMSCPHPSAORWROFDDUQOFQHHIKEQMXGZZJQTCXUOCDRSNUXAIJMNPVGOYCJKDYVTUVLYPVUQZQIKILCMLIPEEHBYOVMFOMGGQCKWCANESROAUTSLSGQYSQUPBAXUDDILIAVHDBBXGBNATZZVDO");
    msg.flags = 8646U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 21660U;
    tmp_msg_0.lat = 0.16825003645870373;
    tmp_msg_0.lon = 0.2904292077983066;
    tmp_msg_0.z = 0.3685921949011989;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.07846571991082263;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.syringe0 = 116U;
    tmp_msg_0.syringe1 = 154U;
    tmp_msg_0.syringe2 = 241U;
    tmp_msg_0.custom.assign("KNFJLSQWGTECRCJRLHYOUXVOHIPSFUDEZVIYGTVTKXVETGCUHLOMJVTAHYDAAEJNFFQPKGFZZMGTDCQKEWPLPXGJNCRHDZGUHUNPUSOTHMQODSOPQTSRRGMOPNICWVMCZENQOAWSFMRYUWEZVMKDBEWNSCAQYAIZSRCSGUYWLWIBWFYYDRKRHFBMXBZSCVHXKTNYONQXHIPBTJDJVQUJLAGAFQLABOJIPDXEJBZBEKL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EZEBBVUVEGUFDUMNZCXHPDFJGDTMOIXGDWOQCICAAOGQZMSAAEZNFWHBDDQCXBSSYLWOVHCOTQENPWZPEBCKHXBSHUIINZBTNCCKIBLIYSVEYOXJQDFHFNMFPKAXNKZJQNLOAPKHPZTOITUTXLCLEGDXLURGVUTKLFFKVYYRGHMYTVSALRSAJJGUROMPJGIJWWNMKQYARRFEMYRPJSDKRVZQHASHJPQMWK");

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
    msg.setTimeStamp(0.021570646345468902);
    msg.setSource(11404U);
    msg.setSourceEntity(42U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(179U);
    msg.type = 146U;
    msg.op = 160U;
    msg.request_id = 24924U;
    msg.plan_id.assign("QHSBPXYUDPLRWBWLWETTJVMRZAJMXUFOCXOTRTGDSHVNPKHBHBYYWAJREDZQTMKAPERVYNLHTGSLBPGESGPZ");
    msg.flags = 28843U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.6830652167056106;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HOBMCGXKHGTUCUFADHZZCSUJNVGJWHEETKOLDNWLPIFVPMDRGQDAVOTJLF");

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
    msg.setTimeStamp(0.4095316201037775);
    msg.setSource(172U);
    msg.setSourceEntity(123U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(78U);
    msg.type = 153U;
    msg.op = 57U;
    msg.request_id = 1629U;
    msg.plan_id.assign("DJPROAZQQVPQFQCXQWTMHHOXMHYXEFCJMNBDLIXF");
    msg.flags = 33210U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.10784093734722366;
    tmp_msg_0.temperature = 0.04263561725670262;
    tmp_msg_0.depth = 0.6761885568773124;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JGGSNMJPXBIEROZBMCCNZPKPYQMYEHENWZTJMOHTYSUHOSHGKTZEDVSPDOFTICOERSLQNEEKQLOVLPGTGWYEKFFKVQKAXCHDKWZISNIQLPSDGRXDFACWAHYVOQLRBJUWURBYFMGZAIAROARLNGVXAVJFKTVXBDPCQWDIMMWIAZZXBMJTASTIEJAJLGRKOCDUPDNBVPYU");

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
    msg.setTimeStamp(0.28340079312648603);
    msg.setSource(59509U);
    msg.setSourceEntity(109U);
    msg.setDestination(60608U);
    msg.setDestinationEntity(98U);
    msg.state = 143U;
    msg.plan_id.assign("PNFDXUMHYBVYXCHFFAJZRGIASJPZSQECJCOGMYQTVGEJMHZCYFXCTBKBIZFPXIKGOAAQLUOHNRALLLLWDFDMPVNDNVUGMCQVLMTGBKBHWFRIQWHTSSMHTTOPHSPUNFRDRXSQOOXEENJBXZGJUKEUSROVBCAZYEWVPWCYBLSJUIVDYXZLRTRPKWEAMSUHNZIOWKNWGYZUGCDQJPABSMNAFLKIIRTFEWXBQQA");
    msg.plan_eta = -1168984503;
    msg.plan_progress = 0.09684649684652658;
    msg.man_id.assign("JAOOQWSAMTKUTSVRHHOBQTLATJOXCHHPOANOLXWBLHPNJZSIBMLSMZCPDPYDIPNZUZI");
    msg.man_type = 9387U;
    msg.man_eta = -1257785574;
    msg.last_outcome = 216U;

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
    msg.setTimeStamp(0.210876496662041);
    msg.setSource(47733U);
    msg.setSourceEntity(217U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(81U);
    msg.state = 104U;
    msg.plan_id.assign("ICCNDGBHAGXPWOHWVFQFQJLCIKGJGEDXQPZCDJQJHTIZPZJDCSUKKBLCLLZVGVFEWORHZNPIEELFBEWNJUPJMSUGRMNZLVBPXNY");
    msg.plan_eta = -609832603;
    msg.plan_progress = 0.02877948122242935;
    msg.man_id.assign("GPHHFBVRSZSEYWRUBVUAMJOQQWGFJDNQVAJJBZQUYVJSJEKMGQXPWFSSIYTBACINDNXXOQPBYHPOPVMMKPRPMNGWQXXATZDPVBAUMEMFYWXZPLDNGQLDUZIHLLIYYCEKTOTQRMWTHQKIZNSO");
    msg.man_type = 46037U;
    msg.man_eta = 1692984023;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.385957125471623);
    msg.setSource(11837U);
    msg.setSourceEntity(98U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(4U);
    msg.state = 166U;
    msg.plan_id.assign("IQQTTSIZZGYPFNYXULQXWYMAFSQLUDOEKKHSDKPWTEVGQHKGERWVLAGORRTHENGMFDFDQJEYPUTBOFYNDLPNTQBMMGJSWIYZVZUXDULQXPJCFHOEZJFDRVFGBRYTZCYRVVKJWNJNHAAMNEDJGCRWMNXJULCKWKYCAX");
    msg.plan_eta = -2092820618;
    msg.plan_progress = 0.8979100252238065;
    msg.man_id.assign("TCVMYZXQXWENJBRXFLZFDTL");
    msg.man_type = 6226U;
    msg.man_eta = 428521776;
    msg.last_outcome = 142U;

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
    msg.setTimeStamp(0.5237834441598473);
    msg.setSource(0U);
    msg.setSourceEntity(197U);
    msg.setDestination(14978U);
    msg.setDestinationEntity(30U);
    msg.name.assign("WEALJITLZPGTWKFHKZYHWEMIVNXWNLEHXPRZWOYMUAMXGPCPVIGRNJSVBQNQHQZKASXQQGBQYUONBXEHVTDIMJNPGADDKNKEW");
    msg.value.assign("OLROVERLDQHROBCVZNKUAFJTOJFJGANNMUYUIUKHVGRTMXEMVGZSBXSPJJISITUQAWFRMCCBHWCZUBVFQXGGAYBR");
    msg.type = 81U;
    msg.access = 77U;

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
    msg.setTimeStamp(0.9403505951158863);
    msg.setSource(12691U);
    msg.setSourceEntity(166U);
    msg.setDestination(31610U);
    msg.setDestinationEntity(103U);
    msg.name.assign("HWDDECBYQFRBOLFEYYFMRAGVNELQYPFYOBHOAEVJBLIMWRTHNUGXKFKICKKFSKTKOKXLNRUISZMHKDOBQTOETBNKSTMCXZUDCNMDRKPPOEJGUMJVYXXDGJFUITVHUZAXJDGHIPVXTZULJVQHCPFCCYIRXYALMIOZASWPAJGFZHRPWEOQUSNJSIRWVQTNVLGRCSFPEEGHWPDCLIJBYIQVQXAWWZMVZMZSYNOBBLRQMBUG");
    msg.value.assign("GQCRPXEJUISSHZARZOAEDXAWGGUDSKGNGYNJQYVUUGESVQDGLIEYWYRXTWLMHFLFDUCOQTQEDPJKVOBBMJWFNEJONE");
    msg.type = 118U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.8467721828282723);
    msg.setSource(9274U);
    msg.setSourceEntity(5U);
    msg.setDestination(4812U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NUZUNDNOIEGYGWOPPVFRHGSGDIVBVORYSMQINBCYARYDVQZQMKBMHSOPQTNXIZHSODZZKVEFIMGPNNLTEPCHWILCNLXDVWHKEJJZWLVOBCJHEJFTHACTUBVPCSQLFYRXQDJJBAACSUYYOIXTMAWQQALKGYKLGDJGWSDP");
    msg.value.assign("PDTRVPOXRANFPFVYGNDTVYUHNSGRIALUNERTEHKMJSOTRHSCWYKFXFXTWDWCTBTELOHYDZALZFWCLBSVXUEQNVSUIMYQTEMERKVPQQKOKCQAUQPRWGPUTYFKCOZWI");
    msg.type = 68U;
    msg.access = 181U;

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
    msg.setTimeStamp(0.9316029633152296);
    msg.setSource(36599U);
    msg.setSourceEntity(115U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(39U);
    msg.cmd = 195U;
    msg.op = 79U;
    msg.plan_id.assign("MZVNKEYKSUNUPVPFILIACCAQURSJFPTMLBHLCVCTRDVBQYRZEFDQBMJVEFAIUXOCUZAFSBYRBQNHOMVQUIMAWWGTZFOHTESWNLVXYPMYTPLCNWDYAFRFXNKXJSKUPXIRZCLEEOZQILDUGPXMSXRBDJPOERITDNQULZSBHGEOCWSSYOMJPGZTVQTKFHREHXVDROGHTJKNMNEKDWOIGKPNHCXJWCSWHAJVIWAZGWXUAYFZBDHYGGBOK");
    msg.params.assign("GBEACGXJXWOIAPMJNHKCASXZLUBVGYHHXPSEUIQVDGEEJMDEMVVJOTCYDDOKZWHNGZHDYSICUTOQFACNFPQPWHNCZOWXFIBTLADZSQGAHUVOPQTISJNNZVPVKFRVRLJMFMHDFKEBYLBIKPA");

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
    msg.setTimeStamp(0.820995119200218);
    msg.setSource(40941U);
    msg.setSourceEntity(66U);
    msg.setDestination(63343U);
    msg.setDestinationEntity(232U);
    msg.cmd = 54U;
    msg.op = 189U;
    msg.plan_id.assign("JYHXQAIHIXSBFRFPMAPPRCXCLUFAAZCDTJAZEECJDNJZEREHYXWVWGKTUMXEBVSSGTVBIOBWOWAHCKOYKGDRFALYUBIPHFCFBQGTU");
    msg.params.assign("AIRSDPRKHJXAITUXSABHVSAQWBWDUSVPWDXCYKNVYCXHDPBASPFTZEBBGTDMJJYIHOOUXYCTUULJGEUBUXJQWQNLREFAOZKUCDQOWLUHNSNSGFMMTVLNDRKYWSGFQMTNOZULGPKBQKACILHDVLTZCRKQGPVMBHIILEJOYHFHIEPEXGWSMWAHEJXMTDZQYFFRRJTZKIPDOYTZYREEFMXAYVVQ");

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
    msg.setTimeStamp(0.46182819570451805);
    msg.setSource(14111U);
    msg.setSourceEntity(186U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(42U);
    msg.cmd = 198U;
    msg.op = 167U;
    msg.plan_id.assign("ELIOMACNDRPNIASMHDMGYEDZPMNVMDCODJMSGBLAEBZEPXSACWBAIGMWHBRFVLAJFTXTKEXEPIWLQOCTOB");
    msg.params.assign("ANCSFAJUEYQWZTINZMOMWUBCXJUAGHLOGJZGAJDBOGYMTXNQCHCSFEWMYHPBUPHAKNCKFJUGNILTMKBHKOVFILZGNINOYBKYRXYIDRKKQWQJDTRSRGGCMCRLLSXZBOM");

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
    msg.setTimeStamp(0.21070224160795747);
    msg.setSource(26821U);
    msg.setSourceEntity(198U);
    msg.setDestination(13874U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("OICZCYZPIGUMHMJMBBXOJWDKOBIULHFZPQUCXXJGZXKTXUQCLFFXJCDNFPSOFFKYOPRLEIWRGPCGTTBJACNGYRSOBWOFJPDRJDRMZZCEWAQLLJEDARAOACVWPZLKGFPNAKVTUBSMHEYNQORTIQDYASVIWDAVSNNZKHXEBFHM");
    msg.op = 174U;
    msg.lat = 0.009486755901957689;
    msg.lon = 0.7020476451828986;
    msg.height = 0.7246087608688;
    msg.x = 0.33744267445354204;
    msg.y = 0.19123381900072323;
    msg.z = 0.6822973252296836;
    msg.phi = 0.39803834423221307;
    msg.theta = 0.5251462549449363;
    msg.psi = 0.6936728732805918;
    msg.vx = 0.566356441918331;
    msg.vy = 0.3829903321776801;
    msg.vz = 0.3795504895132803;
    msg.p = 0.6717405259877505;
    msg.q = 0.7040513282554722;
    msg.r = 0.6937041053219932;
    msg.svx = 0.27206088849835774;
    msg.svy = 0.07165912402825747;
    msg.svz = 0.9512197529149586;

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
    msg.setTimeStamp(0.09936196982738121);
    msg.setSource(42243U);
    msg.setSourceEntity(193U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("ORJYXBIFXTBRZSDEUNHCQKZWVWUZTQHMPLYRAMSIDQHPCXQYQIPZLHWXOTJCIINVWCDBPSYEYGDVEPZBPUGUUNSMSXNALHLW");
    msg.op = 48U;
    msg.lat = 0.37811501642503786;
    msg.lon = 0.7077397758699518;
    msg.height = 0.6306777294809406;
    msg.x = 0.5330774947943276;
    msg.y = 0.9732011509605105;
    msg.z = 0.6560810269730243;
    msg.phi = 0.8961885833762668;
    msg.theta = 0.6175830078506562;
    msg.psi = 0.8027578028806235;
    msg.vx = 0.6878988048927376;
    msg.vy = 0.9295283364771838;
    msg.vz = 0.02114590106098513;
    msg.p = 0.3055985930643471;
    msg.q = 0.8654911776592102;
    msg.r = 0.7778748704366515;
    msg.svx = 0.7523080890683626;
    msg.svy = 0.045593031028436704;
    msg.svz = 0.44512839542794724;

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
    msg.setTimeStamp(0.337186590601807);
    msg.setSource(39482U);
    msg.setSourceEntity(243U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("FQLGDXTJLRKMUAURYMUUWGYZMPEYOHGXFAFLJHXBMUKTWMIDEKIFARHQDSOVAGQDQJTMXDSNBPBPIITWNKLISFPCIVWBUYWHCTFZCNDOPGXRROXDWKQEGKBVJHATPCVIOSHWZEQZWBJRDLFDB");
    msg.op = 102U;
    msg.lat = 0.4908502066694378;
    msg.lon = 0.48170327768578247;
    msg.height = 0.18208392919057104;
    msg.x = 0.05579225532464016;
    msg.y = 0.29351993287847755;
    msg.z = 0.39117886285640957;
    msg.phi = 0.9114275860501974;
    msg.theta = 0.1639504817456997;
    msg.psi = 0.01721058385306784;
    msg.vx = 0.6950762526693552;
    msg.vy = 0.6290635592891637;
    msg.vz = 0.6318748240450618;
    msg.p = 0.7758491916917974;
    msg.q = 0.6729323782982349;
    msg.r = 0.24230221883420555;
    msg.svx = 0.49586218801414417;
    msg.svy = 0.4608900301389558;
    msg.svz = 0.40022509272388507;

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
    msg.setTimeStamp(0.35313581253306114);
    msg.setSource(62326U);
    msg.setSourceEntity(14U);
    msg.setDestination(26949U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("OPMOWSPLYFDRSBEKIKHXBCOLZCNLJQNWQBFQDCRRLTETAKCAXFPTIEEMKGMDPGRPOYYZBRGKTUMHQHUNHWDRUKFJOYIGCFABOIIHFDJZXWQVSAAGMEZPJVQCZPSCONJIOYRBZVKSEJGEMHTXULBRNLUUPSIKFMLQYLWNANXTDEIWZWKVIWLNDORXJJTXVMWEU");
    msg.type = 92U;
    msg.properties = 18U;
    msg.durations.assign("AMAXXKAFLUDTGICPOLMGEZDESYONJFIYONNGTSSHLLVJYRDLJWXUBCIZCTPVJ");
    msg.distances.assign("YMUTLRIWEGGFPRWUBODFVMQEPFITBFGRIFQRMYQBDDUIXBZBVHHNOQAYKRPJGSWQCDVSBSCLNUZOKGTXMJFQULXIFCTPTVBXGIAAODEJZDHPKNDHNBNUWREJQVMKSCUWHKBDSFVHXNGKXKQRGKOCVLVEUZOOZXLPLHWZEYZBIHRAPGTEECLOSYLAEDFQYVOMJTAYCMLXSHJXLC");
    msg.actions.assign("BGBOMVQLKUBDCXRZXWZSMJMJFVZVNSAVDUKXFZZZGPXNKRQBJCEKPQXOAWCIPJDJCWITINHECFZZ");
    msg.fuel.assign("VMRBQNUTTXTAGOOIKMYNTOPBCJSYZEZXQCEZXTLUYKKMWGHDRCDPSBJAORJKKNZVWDIEMMOWGWMHWMECLFRAZQAZHDZCCGVAPMBHURJELQSKITBLSVSPVYEVPNFPYQQEGWXIPJBIVGTYWMLYANDXPLNHTDURNHAHDVDUXBEBTFKFKWZBMRRIQXGKWNSHYIUZSJROVAUJNJHDPHQEEPZFURJQSICAGFYQYOSOUXFWVCLI");

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
    msg.setTimeStamp(0.607409579001981);
    msg.setSource(14533U);
    msg.setSourceEntity(32U);
    msg.setDestination(27234U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("YVRPTWKDLECNFMNTOLGVOESXBRDNXOCHGANVUXHFIZOMFXEUFYUKYFBRTEKPQTBEOUIMLWJEMQCIVPXRJPUWGWSBBBCVKCDMQHISDLTRTAKFKDCJSGMQVVTLIUJGMRWYDWOIQZZRNJNDZRB");
    msg.type = 43U;
    msg.properties = 177U;
    msg.durations.assign("RBQNYHCNSEEWBPUPXRWQWBFTGDGJVOLCKHTVFRVSSIEOQAFMLRGMIPCWMVVWMGNDHCUBZIYMHOLJPPJMEZGXFYOMCZCXKAKJNNFPMUKXFAPLJOHYROUGFQNYBVUBZK");
    msg.distances.assign("AYTEZNYEDVIUAHIGBUVASXNJBJMXHPOYVVNKDCNQWYIXCVUFEHPEEOWVREMCHPZGBGIBHAAJAOSDBLWUMTKLRSJKTFRRQAYFGXEGUXKFQTZSBAYOLWJEQSPQJXCMC");
    msg.actions.assign("PVRZTVMUCEQFFQOMDVAZDDQZACRNTGQTIKFEXVNWHLNPGPBVYMYXGRDOHYSQJPLWMMERNPBEFKHXEVKIWJRTHHTDOUJBBC");
    msg.fuel.assign("HIDWPVIJYAZTPUYCJVQLXMTHUEIZLJDLFOFGWDOKBFNLPAOEUCXBGNOWVMWCOUTHNYPKTRASILKINBHENHHTFRXFBZMESJNYDAUHGRWCUIMJOKGVMJJKOGSDKDMXIESHC");

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
    msg.setTimeStamp(0.7572731671099788);
    msg.setSource(3880U);
    msg.setSourceEntity(170U);
    msg.setDestination(56301U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("LJKYIWOTAKOPGTCMRIWUNIBCNSVFFXQXJHSWSSXZQJGRVUWGTKDIPEDWLAZFXPLHQYPBEAHCJTXRDYGTUOAJSPBRLMGSYMUAYRXLIMXSVBEDRKZNKKBBVVRFDGZI");
    msg.type = 173U;
    msg.properties = 18U;
    msg.durations.assign("QCTCZGQOCHVFHJGFQTLUXDQOZAESBFQKGWMULNOZUDJIFZKRXPTJUMDKKLVXIRBIBIZHSSOJRKXCMEDXREX");
    msg.distances.assign("VLJSPSNJEQFMVZUIECBWCKWEZCGEBMQYUKHGLQCRSBYLRBEVMBXEEJBOJPLAQAPUMQWFDDNLVVAUIZDYIDSCVKWHYXKMUOUUFRRARZGIDTXPKHNSLHJKUJWGKJQMOERYAPQIUNLJHGJQIOTPJOIQXGHUFYZOMRFSBSPACDNRHLVFWIVOHTZAEMDODXTEIBCPRSFOTTXHSKBTZPCXNLWKCTRGYWDFFLNATACXZYNK");
    msg.actions.assign("RXIDZGCDNIILFMZVMTOQDJVBEAYXMNPNBJLFPTZKCUFZEUHNSQQBCBTOSUVHAIGSYCRTJLKHAHGJIITPOXPITYPSNQUWEXFVPKFKANWRKRGOSSUZXIGDYMZZP");
    msg.fuel.assign("WJNRPXAOPVGQMRBCTDVYGSXMKFKMNBPJHMHUPNDDSNEXHOHGNGZAGJTBXCCHKXMFKYWUP");

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
    msg.setTimeStamp(0.9332482677811013);
    msg.setSource(1588U);
    msg.setSourceEntity(238U);
    msg.setDestination(28048U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.2184715230074199;
    msg.lon = 0.5043691539401374;
    msg.depth = 0.29474606174965856;
    msg.roll = 0.2296928220934542;
    msg.pitch = 0.23594690383549688;
    msg.yaw = 0.19383433987726406;
    msg.rcp_time = 0.06646216870053634;
    msg.sid.assign("JLGPYSSJLJXXTXWWAPQKODZAKFGUROWLSVHRPHAFZLHBAFCPUIAWTAHSKORLE");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.4868837761269782);
    msg.setSource(42075U);
    msg.setSourceEntity(7U);
    msg.setDestination(8111U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.9463665741230783;
    msg.lon = 0.7176133254457925;
    msg.depth = 0.07616299705178708;
    msg.roll = 0.3238236929767738;
    msg.pitch = 0.8794226225819693;
    msg.yaw = 0.7302834295477949;
    msg.rcp_time = 0.8385876009143919;
    msg.sid.assign("WUMRNUVSBKIJAZBVLWRPQKCXRBFIOXYPWJXJDNMYXVCJFRZITESDQFWPLLKWGGUKDHOLFZCGEFQOVZFHMJPTCVVSLRNRGGQYHNDLIRLACNYOSADXQPHQXDBZJOEMBKGTRBMCTVXLZBKGSWWCWSJWEESPSKOIGJBDIDXPZKOJNZMTABLRETDE");
    msg.s_type = 44U;

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
    msg.setTimeStamp(0.8174203015810394);
    msg.setSource(29518U);
    msg.setSourceEntity(87U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.3393347239745239;
    msg.lon = 0.43013587053953695;
    msg.depth = 0.4669002158856258;
    msg.roll = 0.3532691416650665;
    msg.pitch = 0.1929766324274259;
    msg.yaw = 0.9020419510542876;
    msg.rcp_time = 0.3894742629073634;
    msg.sid.assign("PVRTWXKMORGODWNUNLESQNCSZUJTOLESEYASYDVBQMXLVOPWSHDKDRIWKQJGKGUF");
    msg.s_type = 211U;

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
    msg.setTimeStamp(0.5553087489734253);
    msg.setSource(21654U);
    msg.setSourceEntity(196U);
    msg.setDestination(29279U);
    msg.setDestinationEntity(52U);
    msg.id.assign("VCXIMHWVYLLFGBQAHXWVKNWJRCIVPPSAJEDNYQUEINMKBOUIUENTYAAVDMSCDXZF");
    msg.sensor_class.assign("SVHWAOXNLWEYYZLNEIMMSCONHSJYSEJRWPCKVBBLWGRVGHKDSCJCYDKUFTCGSMCKQWHJUIJNXFXEFDOXGBWHSPXEIAYNGULQRQYZVMSZOBAZZUZCRQLKNLFRJIAODNYGJOHXIPCOWKPTZPQVWQUGUULVYAVMUKHMAXFBQLTKHBETDDQXPXLZGMJPTNQYG");
    msg.lat = 0.7088142465333137;
    msg.lon = 0.2178419042663683;
    msg.alt = 0.7791154757122023;
    msg.heading = 0.80251834205052;
    msg.data.assign("QSZCSVUBODYRGIMFOYJEEYEFAGPOSTPMTAAVWRZIEJVYUNXGFBPFUHDIHDTTYYXOUTAEGAEDHLKKFVLWZLCIKGXNKHJDLNXVVTTNOTHAKQIGQPJXBGZAWHPZTF");

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
    msg.setTimeStamp(0.6636550293026815);
    msg.setSource(8936U);
    msg.setSourceEntity(72U);
    msg.setDestination(50312U);
    msg.setDestinationEntity(50U);
    msg.id.assign("ZRHXYMZWHQXGLNNGSRSQHQFAUXMOGBEQEMASYORFCRYETJHKNRAHBZDNLXFVNTQXALCILPQOEYCTXSLSPGYDPSDFPKTKIAUZBDRBIFHGPGJNUZVAWRZNBBBLXK");
    msg.sensor_class.assign("HVYNLNLHJNRZVDAQFOMQQLOHWJJWRNZUQMAOXOVHNJDFFDUJAJCBG");
    msg.lat = 0.7814821058335143;
    msg.lon = 0.8349020099852301;
    msg.alt = 0.009891518211636474;
    msg.heading = 0.5678990401108777;
    msg.data.assign("MJQRWAAYDGOSRCMCZFIGXXUJFARBNAEJSGWTNNHEBWRSWVZOQIMNPDTVC");

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
    msg.setTimeStamp(0.7410883503889023);
    msg.setSource(51540U);
    msg.setSourceEntity(175U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(70U);
    msg.id.assign("SOFELTBQKFMQQPECPCUSMVTRLNUYXCQJMNRDKIWQWDGOTVCMVCM");
    msg.sensor_class.assign("AZFCHTMNGAOJMSVETKQPOZFERIIYYIDRPSKWFEROEUGVWLYHBEGNTOQGKUKRCDBQAVXRYQVTNLYSZNLFIGWZLKWQNHYXZHTTSWHPPHSDDPQCNQIXPRCMMUSRFJFWMTIFTLAVEKCNGDECSKJGWVOTDMBAFFOLRITLVZWEQHQCCOGPXOVLUNUSBHADDJPMXZJYZBGXKUROCJJKHUNRKBBJMEBXIALYEXHZBJPWCSQDOUMVW");
    msg.lat = 0.7530729669290301;
    msg.lon = 0.28700353924023525;
    msg.alt = 0.9069472741663792;
    msg.heading = 0.2820284567034631;
    msg.data.assign("BXXKEFSWEYYMZADQKDKRJJBUDKVWTLYVKLWFPNBKRJJAJVOCUDVEVBGVWAMCZHPPZMBWFPBUILUNKGXNZVENHLRTOTMVMCPQMTCROQGQPRJTSEEYSKIUQJOHRDZYSFXQZWB");

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
    msg.setTimeStamp(0.8498771663537871);
    msg.setSource(45531U);
    msg.setSourceEntity(148U);
    msg.setDestination(23995U);
    msg.setDestinationEntity(90U);
    msg.id.assign("FUCCNPLONQY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TYCRRJKKFCTXEJLOMXKLGYXVAUGKNBWWQMCJZCRMDSGBRPAXSVRTHBFCX");
    tmp_msg_0.feature_type = 33U;
    tmp_msg_0.rgb_red = 139U;
    tmp_msg_0.rgb_green = 188U;
    tmp_msg_0.rgb_blue = 154U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8006130534087225;
    tmp_tmp_msg_0_0.lon = 0.4497387320879168;
    tmp_tmp_msg_0_0.alt = 0.6753655329391033;
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
    msg.setTimeStamp(0.7889978051755636);
    msg.setSource(47974U);
    msg.setSourceEntity(180U);
    msg.setDestination(27339U);
    msg.setDestinationEntity(150U);
    msg.id.assign("JGAFLGSJPFKYWKZILPZHXHMULESRRDFZAXYCBBZENGBUGYPCIDJIEAITNSLWOVHVOGCWHFLZURNLBXEZTLMLQHCYRZSVQRXXQBCJXJOKAWQPANNVDCNVRMZJEAWMWKTYOJMIPBFDQKEGLAFPXDKQWDNPRGSQYPGTSOTBURKFSVVHXGUVADCYEHWBSXRWUC");

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
    msg.setTimeStamp(0.37846876620389625);
    msg.setSource(46853U);
    msg.setSourceEntity(78U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(138U);
    msg.id.assign("HBAKTYKCEXGULJFVZJVEESUORUVLBQWUIHBIRPPHEFBWOASYYMOHTKLXKEDSNRHSOJHIAFNMZFYDOMVJUWLUVMKEMLXBQNZFVSLMCXKEFHJLRMWPYVVYROGTCZXGHTCNXEJKNLDGEZTCKMBQWZXOUTRWESTAPTGAPPIQMBCWAFJNJSNGXDPYO");

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
    msg.setTimeStamp(0.5979090580927579);
    msg.setSource(38595U);
    msg.setSourceEntity(123U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(86U);
    msg.id.assign("UINVEVSRPECZVTNYEZEJZCONRPSTQMTRYQTFKYDQZVTXFAHMJGUDSR");
    msg.feature_type = 117U;
    msg.rgb_red = 224U;
    msg.rgb_green = 240U;
    msg.rgb_blue = 9U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.12911341812532118;
    tmp_msg_0.lon = 0.7035237243469958;
    tmp_msg_0.alt = 0.17710955712916743;
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
    msg.setTimeStamp(0.442092736614222);
    msg.setSource(57090U);
    msg.setSourceEntity(130U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(219U);
    msg.id.assign("ANVAVTFMQHXNJRXEEQJGXMVEIOMETJXPCYEWELTLOGVJCWSVZGFUHDPJUTRQNLPZQIKDJCTJFLQROXBSRMCKUSWBKJXLIWIANDCNDZMOAUJPXXYIBTSDSFPESCYGAEZUOBPFAWMZWZKBUJHYBKSBOINBYRRTGHKFHNNNCKMLEUPPPRQYKLDCFXIRGLVSZWKOYDGMVAV");
    msg.feature_type = 241U;
    msg.rgb_red = 16U;
    msg.rgb_green = 92U;
    msg.rgb_blue = 185U;

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
    msg.setTimeStamp(0.7330558392814661);
    msg.setSource(62632U);
    msg.setSourceEntity(174U);
    msg.setDestination(65376U);
    msg.setDestinationEntity(125U);
    msg.id.assign("FDUDBHHJVKZPWLTJGKGPWYXQFMRUXOAJGAVLULGTMBFOJRCGTDMLAHVIJWLGEPRWKLTPSHSCXYHYBPJLZOQBFPQZBYZSRXSGBVYKHBNHCPEBSINRLKECTXRZRQBCJMIWCMRGDSKDMAMWELVEIJFIEJTWOVHDKEHMMDNZDNTYITFYFTHSI");
    msg.feature_type = 9U;
    msg.rgb_red = 234U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 27U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7707422876057912;
    tmp_msg_0.lon = 0.38572879745671707;
    tmp_msg_0.alt = 0.488466536935939;
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
    msg.setTimeStamp(0.8422506418475819);
    msg.setSource(57550U);
    msg.setSourceEntity(184U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.25420606967536685;
    msg.lon = 0.4564440753879907;
    msg.alt = 0.10532845574351535;

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
    msg.setTimeStamp(0.27698035747926186);
    msg.setSource(65069U);
    msg.setSourceEntity(12U);
    msg.setDestination(47203U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.026713379627099187;
    msg.lon = 0.17830131863597953;
    msg.alt = 0.7726235731841173;

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
    msg.setTimeStamp(0.23033622715900182);
    msg.setSource(11048U);
    msg.setSourceEntity(138U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.07029416616663986;
    msg.lon = 0.6003455618519853;
    msg.alt = 0.39523769393229813;

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
    msg.setTimeStamp(0.9924411979077605);
    msg.setSource(62679U);
    msg.setSourceEntity(170U);
    msg.setDestination(51708U);
    msg.setDestinationEntity(119U);
    msg.type = 39U;
    msg.id.assign("YCFFCWXGYBOJXWMZKIMMBHHZQBFCTMJAEJPNQUCVUVAX");
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MFGILYURNCZNXRHGLMZJYQMVBOGNZIFUUITVNEDDDECRKHKFENVFIYTDZTWYWDWEWOUBGLUDLZOCMUECCGXOXOOBFBWHXAGKAJJLIMRLWUDVKK");
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
    msg.setTimeStamp(0.5790539893730118);
    msg.setSource(9809U);
    msg.setSourceEntity(217U);
    msg.setDestination(16289U);
    msg.setDestinationEntity(225U);
    msg.type = 164U;
    msg.id.assign("SCSYUICFIPQZNYMZENGIYRKHDKMGUOFQVBXOKVJEXCRXMKRVEHMHGHEYFSGABGNTANDCJEBXTFAOOLIWWQVJSAYSTBSWHZUXNEHXINIGFFAWUGCMXDGWJRMBA");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.9634022568563734;
    tmp_msg_0.sys_src = 3107U;
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
    msg.setTimeStamp(0.9960060157713437);
    msg.setSource(23828U);
    msg.setSourceEntity(136U);
    msg.setDestination(5022U);
    msg.setDestinationEntity(64U);
    msg.type = 43U;
    msg.id.assign("XYNPWWUJCYXSNDHZEUJQOPIDPVSOEJEYVLHQLRZTAVDIXGLDZRDFOASXSUNCGKCOBHKNARBMURLVWMOXZBJMLLGBTKSEBIJBTIHJTJJKNQSOWPHWHYZFWAXFROVNVIXWRDGYYZWRC");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.5726832787162796;
    tmp_msg_0.lon = 0.26810348117111527;
    tmp_msg_0.z = 0.05238170233034112;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.5525711361463098;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.abort_z = 0.4044625710035258;
    tmp_msg_0.bearing = 0.5176667898959327;
    tmp_msg_0.glide_slope = 186U;
    tmp_msg_0.glide_slope_alt = 0.031099787240851717;
    tmp_msg_0.custom.assign("NXJGRAUCLTIMQIUVFZVHDSHNMYDLDSHGVKYTZKROENLENNEEMUQCBBGYHFSXYPCJKKDPKMQLXUGOFICTOOEPCITWWAYQHKVAIXCQVYZXWWOARDGPJFFULNDCVMGVTZFLBRAWMHPYZTIRHJYXUMEXNPOQMKMVFLQKBWRPBYRSSBPOQBDZNJTTOJLSHSAHVKXJMCYDKGWZBWEZFARGPUTANRIEEQGXPIHNQSODUTDISJACEBJ");
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
    msg.setTimeStamp(0.78547719973647);
    msg.setSource(951U);
    msg.setSourceEntity(89U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(79U);
    msg.localname.assign("OMJBWMZQUSXMJHTXCAONBZDRJQVOMYWMHFVTVATNFSNTQYCUZZRRGNOJNMZFVYD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BKRTILFLCJJYPJWATSFUEYXBMAQNFETNGNDBSLMOVL");
    tmp_msg_0.sys_type = 43U;
    tmp_msg_0.owner = 10524U;
    tmp_msg_0.lat = 0.32157902662149873;
    tmp_msg_0.lon = 0.23863647130196142;
    tmp_msg_0.height = 0.7871984350088775;
    tmp_msg_0.services.assign("KFBWKTHXFGZNQKHIIVMGEHBRPHDJFDVPKBRQXBHUGJXEGUDFPWXVFC");
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
    msg.setTimeStamp(0.6234437150539259);
    msg.setSource(41477U);
    msg.setSourceEntity(18U);
    msg.setDestination(12485U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("IXKSZQVUJEPHFYRVTHYRQJFVAXGZUFAZLGARRJGJWWDGIJYBLLSVCWWXCBAZYJSOOFVLMZI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RQIEEMGGRFZUXCDYWNWCOCXDYHXSEVKPRNIVLOZDWBPADJHZRLJJJPTSTVVATJVZOQHYTRWFIYDGMZLQSTAHBTJEOLWMIPAMBSKHQUYJITYDVJAVKCBOHKANXSNQEMYUKVLYOUHQEWXPFIEZFPYNOMAMQHYBFWNJACFQQLXDBFSWZFEPAEC");
    tmp_msg_0.sys_type = 214U;
    tmp_msg_0.owner = 9248U;
    tmp_msg_0.lat = 0.7193976697504535;
    tmp_msg_0.lon = 0.22730785279753996;
    tmp_msg_0.height = 0.8453650959619214;
    tmp_msg_0.services.assign("GVGGTMCBGEVDPQMSJEAKASWRNXZIPDSOPXKRYWGKHVLCHAUIBKVRGOGGVANDXBZCBQMYHZMBBCIPEPFHINLYVFQZPSMSHLYZOFRHDNUKTGDMNCCLTODAEAVSJKJIUDEYOJERHJPRJKQLPXXYUMQWYATUMCFYPSSNQRRFLCJHKLGIWJXZRHXLIVTBDQEVVKQXIWFUFLNTOPXREZCNJSELXZFMZBEQTWAWTZDCAUYHWOJTBFWNFOQUASMB");
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
    msg.setTimeStamp(0.5123339126246389);
    msg.setSource(11455U);
    msg.setSourceEntity(224U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(214U);
    msg.localname.assign("YNJJAAYFETUTQRBFDYXBVRQDUGKPXHCKPBISRMRGBCXGMNIDZPHCIOKMAQFUGBWJYPHSZBVUMTCLTNJXDMWZWLQXDMFZZTOPOOVVGGUPFLHXGENYCWUAUWLHCUFKIVLYHIOSAZXGKTFRYJR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VZIHVFQQPADPTAPBYKUIFJKYL");
    tmp_msg_0.sys_type = 217U;
    tmp_msg_0.owner = 58088U;
    tmp_msg_0.lat = 0.4846348147926349;
    tmp_msg_0.lon = 0.2813788338004344;
    tmp_msg_0.height = 0.6878144878528963;
    tmp_msg_0.services.assign("RWLWOSAXCSZAYWSNOHZLTWCORSXUMYJICYWPDMUNZTOAMIMFRXIEFTNLBSVBNHGRUDDNLOMTDBSQNAIBNSXCQYCOHEVYJXWYIDQQEVPPHJ");
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
    msg.setTimeStamp(0.2091934485071414);
    msg.setSource(28344U);
    msg.setSourceEntity(213U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("NRNAVXPADBJONOJEKMIJBJJQVTELBLFUGHWRPQWDAKEHERTESEWRXOEDYBVHJSPCIHXCGGHAKUEIIEQYVLQIUPMFMVSMYKQTLZKSXKBZGCJICIGLWCAMSQIPIOMCHUTCKTWNYOCNAPNZGMLOGQPDZKSHZVTRUUUOFCBWRJBYXHULQSYZSZPAYRSFFNFPEQKRTGBDMLTXABQT");
    msg.predicate.assign("MDPUQARSWYVBIALGUNSSDZGGKECZBRGYZPBNHZCASOJNGDMLNFOPOIVXRVEUJ");
    msg.attributes.assign("TGILIWVFORNCOGCIPHTDAWNEFWUMYGRMRYMCAHLZXXKDLBJWDQDMJAIUUHWMFHMECWLRHQAYYGKBUURJHFHICDSVZMIAANFSZOOBEIQXSJROSLHKBVLTAVGVUPXTBGVEYWJQKLOGDDEMLTZISOSOVNENDINZNJPYEPYLPTSGKKQATVFOXCYVSV");

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
    msg.setTimeStamp(0.624635523240536);
    msg.setSource(61511U);
    msg.setSourceEntity(105U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("SFVASQQCPZLPWOYYBWFPRQDRTWCHIJNCQR");
    msg.predicate.assign("DARQPJLPLBXCZSOBKYTOXHLOWVUIOPZFWQMIGADCXUVSANXJLPBTNTITHUEURBSKGVJQBEZZIWZ");
    msg.attributes.assign("IGSMHJMTBTSMNLLXHQUKSFLREZCGEISSXGBOOIQOWJAHPLMZNXNXSVTRDJENKUEFFJXDBILCGEILKRYWAJQXJWAWBMPFAZTRCONVHWOKHCTMYGKZUOSWCJRHKATBUQQXXZOMKAIQYODTYPJPLYINVMIHNWOCUYPEZFDAMDQCXYVPSVRWTXTIARVJEANULFQKMQBDRPHGQBZYUTCUZAJNYCILFGHZEFRYHUBPVEBDFUPVVZDCFDWSDLKSNB");

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
    msg.setTimeStamp(0.348248645595569);
    msg.setSource(56996U);
    msg.setSourceEntity(24U);
    msg.setDestination(61706U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("DLLPANAIKREMGPTQNWIYRDFCKGQVIEUWPAF");
    msg.predicate.assign("FVYPQXFALFQIDGCXWYDJTKXFRELSQTTHUZUOTYMJSGYPGVKCHWWGPZR");
    msg.attributes.assign("HPJTMKGBQNHSPMOFEAIBDUEXIDLVJMWACCRELVILUWGJKBPQUWJTDDBFNUMDARWVLNGCSVTRLKZFVHCCPSEUZSLZMSTYBTJIAVFGTGXFTICYSDJGKXNLXXSUENAQDGZIIYRZENYVEICTBXGZKZIMPRAYXEHRXDZKARRXHUNKFAOVTZQQOHCPBUJQDKWSORIYNTQDLPWAQMEWCHQYFJYOBHKPVAMXNJG");

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
    msg.setTimeStamp(0.5643537111851283);
    msg.setSource(18019U);
    msg.setSourceEntity(77U);
    msg.setDestination(52540U);
    msg.setDestinationEntity(234U);
    msg.command = 156U;
    msg.goal_id.assign("PHRTWKWQYJLZESNPDHYRLOQUQGOSFHVYULWCTGMINACBANCBSZTPELTGFNFVAWFJRKNSQHWYVIRKXCBJZBTDZEEOLFXZUOATPMRABLFWDOBXRNMXJUQYOCBKSGWB");
    msg.goal_xml.assign("PEPRFVJTNHCKCNIRWBZRQCUETPBZEMQRWGSYTGQGMYRL");

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
    msg.setTimeStamp(0.6034720932258479);
    msg.setSource(16188U);
    msg.setSourceEntity(88U);
    msg.setDestination(36559U);
    msg.setDestinationEntity(96U);
    msg.command = 196U;
    msg.goal_id.assign("BONYRTKKFBMTWKTRKIGPUHLODXUYGOIHVRRLNLAGV");
    msg.goal_xml.assign("PENSTNSJMKAWFTNUKUKIPZXVHOAEXWOLMACZFPIVXDTQRQRDOUQQNTQGYFVTHFJQHONDCRMPYSQDIHBFBVCDZBMXUWWPNYLDEOWSUJCRWPTLZNOBGURXYVNIFKBSZAWVMKFBEGSHDAGJABVCFPGRPTYJLVUZILADQMXWEZTHABMRJNUYCOUMLVBJKAYYJKLEIHCWBKOVTFSIHOCLSLUPEZSJQRDRIRYQHXWMGLZPAXZMKX");

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
    msg.setTimeStamp(0.5640010162140122);
    msg.setSource(32460U);
    msg.setSourceEntity(143U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(152U);
    msg.command = 216U;
    msg.goal_id.assign("HQJVYSUNTGILPRZCCERTYFRMHRSUTTMBXRSKNPSJAIQPGAWYLJVYCGAJIOKBVNOTKNPNVIIDACXSAZDNHJEDRQYFFKXDUUFEELWNHTCGWM");
    msg.goal_xml.assign("AWSXXKCCZFTPZQQPJTCBIQXZBBHLHQDITVO");

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
    msg.setTimeStamp(0.27238564521329134);
    msg.setSource(7018U);
    msg.setSourceEntity(26U);
    msg.setDestination(51332U);
    msg.setDestinationEntity(159U);
    msg.op = 244U;
    msg.goal_id.assign("UTEUMWNIRLBTYJXBHOKZNFQULVUIRASASNLASSDGHLBDNSBHFONEIJKXZKNOATPVJPVDQKRVOWKJPHYNRLIBWCEUCJVSHKGCXAJJARRRYQYQXCVUYQPMCFSUYRVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VFWBXFSCWTPHPPVMKUYYYGOSHSYBDHBTEM");
    tmp_msg_0.predicate.assign("HJWRCAZUPMOCTQZVINKQEUGGANRLZQCIMZGOYIWYZBISIHNZFCLLGFUBRKXAAKISGKBESGSAJCEZEHAEMHWSOYJKXVBLUMWSVDVLLYGJADEBUXUEPQAIUPHQFDTVTBMYCDVWQZWTOFKYNOXVNYFDLOHALUNPLTDPIWJTOKHKVRKFNJQMPCJXQQWETRGPRBHXORJDEPUDHTTMXNYEFOVSBWXLZZDFIBOYRFCXIRFBWPHSKNQYJJCVPUSTMCMDM");
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
    msg.setTimeStamp(0.4893210433498103);
    msg.setSource(30585U);
    msg.setSourceEntity(127U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(4U);
    msg.op = 96U;
    msg.goal_id.assign("CFIMZHLFENLLHWTAIBPUXKBXBBXOOQJNSXLHFBRSSZKJCVVZAHMGUOUCSVCQPULPHYGKXGKGTJONVRDNAJLMXTTJYYRFWEUOFPRQNBFINNHJFGDFHMCHFVDPNSAJUCIRIWYAWTBDUPEYZUFZYKBOKBQMGCYMUDEEYWSSAGWTIIYZMXTGQUPMZCLQTLKWDTRWHESEJSQQVIAAWXCQMOZBRDLWNVODASOGIDZRE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NEUFGGVFJTLIHWZJVDAAZCFOQIOEQPCSPMQMIR");
    tmp_msg_0.predicate.assign("FQHADJVFTGULHTZBMJRCUKEFILCXNVHUDYURMKCZZPXNMAVSBTJAVYDFBPBEPPENJKGQPGDXIARVWLGEIJQSXNXMUPLINDOHVXOQFZJOSCMOIMBEFYXYKYJQIDNAYWSTCHXCTORNTWANGSIRALVMLCPPLVEKGPWJWWSHBQNTMRBWZUCXYSMZKGVEFOHQKHLOJWLAWVODSKTIEFDLTHJZKIWFTURQDNB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JILVDRWCZMTICAXNWCCFSJJNYUXOYZWZJITUHQJGMKEOKRG");
    tmp_tmp_msg_0_0.attr_type = 141U;
    tmp_tmp_msg_0_0.min.assign("VKRINOHWDWSWTQYDKFSHLHMZZCBNAPBILKZBYKJTWSSLXCMLJGTJCMEPCROBJVYOJVRAKAVQYZKVPUOOZLEVDPGZPEXSQKGGSIIZEDMSUFVWUFTHEMYRDISBOPHEWQPTNCYHKFBDOSEDNFBRXNGCRMIXIRCCAHYGWPCAJDSZRQQXJPXU");
    tmp_tmp_msg_0_0.max.assign("SAASKKZJNOZ");
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
    msg.setTimeStamp(0.7737008611579804);
    msg.setSource(49497U);
    msg.setSourceEntity(113U);
    msg.setDestination(19202U);
    msg.setDestinationEntity(240U);
    msg.op = 62U;
    msg.goal_id.assign("GZWKCYGKVBBOWOBRUPZZQHUFWLEKPTAYHSJPCKTFWDGALTPMCYNIWDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RIWPQBTGEUYBKVBDXWRCULXUXASAEGPAIJWKDCYGFRMAVBWMFBOOOJFUXRNBWLZIYYQQSFFHWHQNQMCVVYNLMWPMTKYLKLXQHOUDYVBYPPNXLKPRVWQDBXZHCDTZVQFDUJQRPIVSGXAHGREXAHVXLZPOTZJNWRNMVELLNEIHOGDGZNMUJF");
    tmp_msg_0.predicate.assign("VMCYYJDCAMOBVUKCZEMFDBWLRETTGX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OTXTBELCEWONEFXANBUOZFVMUTQRGYEIWHFKJLDCJJJUUCEPPSSBZJTIHGNZTLMXCEIRSKLVGWKUYCPKMICACQHAYPIDWBMPPWOTIYKZNYUVBLAMEWBGKOLVSBGIWJZOEFRIAWQRNUQRJLHVXFT");
    tmp_tmp_msg_0_0.attr_type = 26U;
    tmp_tmp_msg_0_0.min.assign("CDQADVNZRDXESRGUIHBQOKITQKANPQKOIDARHNCSBNGBDTUUEFPPLEMCMXRBRVRFXGAZUFGJEJUFYVLOTNVBJBPLCJFMOXZYYGHWUFKTMPNLYYDKVGIHOIMVQQTWSALYKCIMGTPMRUSDLGJACQGPYDEVBVTDWQWTFUXRPBCKXJEMHMNJWCXWXKWVSZJMJYIHHVYGKTSLHLPENSAZO");
    tmp_tmp_msg_0_0.max.assign("DHBFEOIHWLMMDBEYUGNAVGUTKLQPWQKJRTLWLWMPXJSYHYHVKQNGWYNBGGCJ");
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
    msg.setTimeStamp(0.9943195713723805);
    msg.setSource(23582U);
    msg.setSourceEntity(241U);
    msg.setDestination(19766U);
    msg.setDestinationEntity(245U);
    msg.name.assign("AZRRFOBOBSYQRFWKQZPZNQYP");
    msg.attr_type = 132U;
    msg.min.assign("TTXBRCLYHGDNSQJGHVXCLXBWFWJESLXEFEQQSYBOAOGAOIUVFWDIPAQGJTCCHYHRDDUZYYHSRKNORAUZWVJVKEJRMTATFRKPWWTBVCZVQWKAPBTBINIFKZUKLGZCRZESDKDXHNXDGFSDMUSQYFXIEDVF");
    msg.max.assign("UUMXWRNLRJMLOJNYNQLXTGICARJXZJDIWKYPBVUITFESFAEZMGUSTAWQWFCNDLPDEVYBYZEOKPMUHPEMGHYEJIDLBJSCMGKDSYWFMAQBHDEOGNENZYIRZRTOLTFXVZAZRTIKNDRVCWCKLNFHXCKPTHRRJQVAVBAPQLOVJOCSFSSVDUXPTQKWFUJQIQXNGLHHYWWSXFUOBHCKKBXQPHARSSOPGIBMQAVDIDWFGPLCYXZHZUMAOKO");

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
    msg.setTimeStamp(0.881007825680565);
    msg.setSource(16031U);
    msg.setSourceEntity(14U);
    msg.setDestination(8978U);
    msg.setDestinationEntity(228U);
    msg.name.assign("XQDZQQPXBICPPBNOUNOSZEAPNSITCYFREAKWNUHJJMPYBYAJHMYRBZUHJLKMWNGLDBAOVTCBQNBXROJEDJULMMEIXWYWNFLZPAIEPZPUSGORJDUIHBWLHWTVGBWNLOTMOWAPDFPTMZVKWSHQAEQJEUAKRGKWKRUTMFBVXSEIEHQJMCKLRH");
    msg.attr_type = 180U;
    msg.min.assign("MKAKJXUCFXDLFOKUQSRRHRMUCSRPNZZIZSPHWUSDTZJQHKVSYVAJXTGHQ");
    msg.max.assign("EBJNAKPYPSHFOAMMARLDGEZQAFYGTRMMXBNWGBSEJZTDI");

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
    msg.setTimeStamp(0.5378242823077264);
    msg.setSource(35334U);
    msg.setSourceEntity(50U);
    msg.setDestination(42443U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ANMYRTUAJFTWWIMGTQSUXSSBKVBQAYYZFJGBFPOIVCRRIAOEEHHXLUSJMXPSQCFMUEADKPSKIDJNGEREQGAWZFOWTYCTGPNUORLXJZTJDENCDNTXBYHYPUIFTHXSAMFV");
    msg.attr_type = 56U;
    msg.min.assign("XMPDIPGVXGRBQMPNRIEKGNICWVHENVTDEMVRCEBFVQETKDNOJWLCZXHDTDRQYJEDIZWJBQUAULKOXQGFXZHSJYLHBT");
    msg.max.assign("HMJZHFGQXUAFPOFMIMBXRYEYAQYKXFUQAEAVHTPZUACXIDYKJUWVGPGNNABMNNOVLXILWDFHDTHCVLRAIIONOTAGQIZHYEWMZXDKSHUKORCVDEVIZLBSPFFVY");

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
    msg.setTimeStamp(0.1635487384840888);
    msg.setSource(48222U);
    msg.setSourceEntity(236U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("IFBCEEZLMVXDBAMVTHRWPPAFSCUUORRQXDOHNDKLCLDUFKJMHGBQQPSQSUXIOYCICIBDSSNNSUARHJOKNMVACNADRQGVOQFTKMFKEYXWEYFXTNKLAQWPLWEI");
    msg.predicate.assign("AIXTSIUYEKIMKXOREGDVHAHDSNLPSXLWFSBTRQXVDEBAUEMXZUWQJQOPOZQVBCQNUTATNWZCEHZHIXZLJTZYPGPWCDHTQQFAVCKERYJFKEFTDBBJATSVQXONIHMCOLNRZFPIRNCKEGHFZREAWGCMSXFTOBYVSUM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QOILDGIMRQEBEVMAUXDIYZJQGKWRLLXTODSRKBSGPUKUJNKDILGMGWDOITTAMWPJGFXFQZQVBNIIACMCNNMCOBAZVSGLPVPOYMUSALOQIQBYHCTEDWASOQVKHUTTDLTHHXFJQHMEZWXXJFKOYFCTAQWXUWCPYJAYKXYENRLDGRVSTVZRSFA");
    tmp_msg_0.attr_type = 108U;
    tmp_msg_0.min.assign("AKVUBDKDMATWHFLZEQBE");
    tmp_msg_0.max.assign("AVPFNSOLUETDRSZYCPAKXSLWSWIMULFVCIFFTGCKZRFORBAVCBOKCLJUPOTCBUZFEREBNDIXPDGMHQBJJQZRWVHZIQIQNYDYHQTMOEWEAFHGMGHJJPVBENZGMPTETXXVBWKMEGPDWVYPQSTHXAYQJJIGMCFZVRUIXWALJYPQNESNAJCIHZDGHEYUBVUOONLNMKQZHYFDKLUXSTSPSKBCMAHIQURSGRRKTD");
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
    msg.setTimeStamp(0.6653497366593564);
    msg.setSource(20033U);
    msg.setSourceEntity(106U);
    msg.setDestination(34021U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("UVINSYODIXHAEAMSHFKHGIOUQHKLEHDTLHUDYNCNADKLPRAUJXQCGEJOTSPYFWGYJZVREEWHZRTXIOCYKSRVCRMRGZYZCBMOTJTASQTMWOVMPFJSDBNEVKBNTXZFPXMERBNICOWKFUQXGLLJEFWRWZDWZAVYJLUXKFDJILCMABRQNINEGQTHXXGFHPAVBDLBBTDYWPPKMOIQCZNUMJPSHDVGCYZAUFPMKRISSTAIBNCVKOUVJEUFS");
    msg.predicate.assign("QMUEGAURSLKWQBSGPLZZDYZKCACEYWTXFXYFZKXTZUOEPUQHYOXWMOPHSCHUONPSUTPOSQYQWNMWQREZONFILEAEDGLTRLSUTUVHWDRBNYBZDZVAZYUNKFPRTOMEFITLAGOPVGXLEYGCBZVDDI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NTPYEWJEMJOTPFKCCRAGTBUYRTWVAIYGYDKZARXGOLTBWHGJKAPCCAPRTUWNEGUXZIWUFBCLHBAMQVUJDFYYQFLUEUHDELN");
    tmp_msg_0.attr_type = 248U;
    tmp_msg_0.min.assign("TDFCZGQAATYHODJMTMILUNNKGXEJAMPCJZZVIAXUYBUTVBZTAYRVQJXYBVRWADUKAJESMKGVPSVWKONQELGYUOAKQMREYFFFTIFWKLPWWDONCZDIGUONLGHFVRRSBHBQHMPXJWWNDHLLHLCSRILHFEVFVRJIKOJWNCGZOKQDBPJGSKQEHGPSAXHTYZWTZXRIFMBBTCORMDMZPUOJDIVDQCCNYXSFENLTCOESPM");
    tmp_msg_0.max.assign("VSXZFRXTPYCFUNIUBJUQUHOGTUOWUOKJDLAKLEMYKOHYBWAIQXSSGPWVRHMCFMNZYNOJCHIULKCLZKBAPBSQJWRVRYOHWYJJCIKBAQBANBECPAHDRTVUDYTGHAMTVKENVPQGYGTEHONUNPDHCQFMQQFOSDBZPJWNMEAPVIKESDXRLFPQZXFPTSXXREGLDRWHJIRJEDOBVXVUXDCSMLYFTLIKEFDIQMTTJZMKECWZ");
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
    msg.setTimeStamp(0.9761152989268043);
    msg.setSource(21136U);
    msg.setSourceEntity(22U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(88U);
    msg.timeline.assign("XWHCUNYCKENNAAOGBEZOLITGDZHDKYCPLBZMUIHRUIAUSOXJEKOTQCWYJRKPDFQNTGDKRHHABM");
    msg.predicate.assign("IYYOKDYXFPDIZ");

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
    msg.setTimeStamp(0.5910969936819922);
    msg.setSource(51881U);
    msg.setSourceEntity(207U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("GDKHLNHJYIPCMZSIFCJINPQVLPCUCOUEXVGSDKYBYWUJJKFENKEHRPLWQCORCTERWFIYLVRTCXLEKJYQFDKPAAMXKFUMWTFSBVKHTXDWOQBFSLUEXVOWDDZASGQYGZQHMOQNVENXZRLHPOHURHMRSV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FVPKWYDRVIQUPHOGHPRJCNNRODMXFYGIADBAANYNMFGPOKWQGCMBJUCLEDVIZTCRXBIRKTZYWELGSTJWTZHEXAICUHMSZNYMURWMUGKRQXBKCSCQSWOHEHVWWUBAVTRCOI");
    tmp_msg_0.predicate.assign("PDZGNCBHKIZKTQTAXPECYULSPCWORFRFHPKFLSCIDMRVBDDWAVHGGRDMGOXKDLATWJNZBWMXFGUSYKMEZZXYLVJPFHURVQFGIOQJQQASCHQBNBSKLEDLJVURHVBTXMJACSEFVJWNVMGAZOLT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OGFZLPCANYVJKMFFHDZNHDXFHTRCWFLHSOCBFSSXOZAJUGVL");
    tmp_tmp_msg_0_0.attr_type = 29U;
    tmp_tmp_msg_0_0.min.assign("UOXOUENXBLPRFAEOYXMBJWGAJBHLENQHXVLOJMQUOEOIZRRZQCDGSHFIMYDUEZBCGPDIWVDABRZBSMLFTPLTKKNMNAGISDJOEMQJXZTEQQOWGFSCPHXKKPRGJKSWCDZTDKHBVOCYZPPDBYSMAYVT");
    tmp_tmp_msg_0_0.max.assign("VKCLNCRPTHSIFGJQW");
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
    msg.setTimeStamp(0.8594213236504807);
    msg.setSource(56483U);
    msg.setSourceEntity(28U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(8U);
    msg.reactor.assign("DQYXJZVJLCDLNHLREKHOTPANLAHCAYZFWNIJOPBNYOKKYJPGFGFXBHCWWCQHQPCMZMRGWNETVUSVTRAMINPYUIHCPIDCVFBDZGKMQPQWTQIMPNSHNBIZEEIKHUZBADRMXXGDXVYSSJULQSXCBZUZJGKFEUAARYMETRELYBEVQXHGYTRUJWTKWLSLWWI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JLCINRBQWFOZSIUNHATGM");
    tmp_msg_0.predicate.assign("IFVRFBXEQDLOKAJFPVBGUJIMQJEUDZBB");
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
    msg.setTimeStamp(0.6747145146111609);
    msg.setSource(12260U);
    msg.setSourceEntity(118U);
    msg.setDestination(60643U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("ZJAQDBKFPFSNOGPQHQHTINCAYNZFHDCBGUZSIUXCCDMLLBQBAKSJITFBGHGDVZUXLYAFGLKDKTYDROJEWCOFRVVZXUQZXTINMEFEJVIRSYWRGKSSKHBMWUJYULWVRQBTPLOWJIWFQEKYXIHPFOGQTNLZOMZFOTKVOEVCYNMNWDZDMEMNQINBAYRHLUSPUKXXPSTYGLXNHMEOSVXZWTYARUPRAWPUOACPEMRDQEMEXDABWHGVSITGBJRVIPCKC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XVPOVKJSKEEGDDCHCBCTIOHZOVMXPQSWDWDARFLFWDMTDOQLXOKBLSNHLCJRJVXXDAQXFEVFCZLPGTGBBTGYSMRBWJKGHIULNUZ");
    tmp_msg_0.predicate.assign("TGQUPCOQRSIKBTHPZPGCPMJJQDXBMUJYIHKMLZASXRTZIDGKVMSALRPCAHCVEJKFQSVHHESOARSAUOQHELABLVIVMOPWXSFDFNCJDCKYIZMBOTYRKLBUXFRWHEZUZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AOVRZRAIMMPIQIYFYEJGJUDMMDHOQOQZGAYDNTDKOFLFQJMUCSZEHDTSXYLECVKVNMGBZSXUPXKLYVIWEWWWUBEPIMHEWVCULPCLABCSSZRXGTPFIHSBDAYJXKRCAXABUQFLWVFHTDKCYRZKRZELPQWPTTGLSQLQJHBGYFPKBGSORNSDOUMNJKONZVWVEYQOBZNTIXKITEUAUBNNTDNWYVMRRKJWOHGGSXCBDLRFAGJCPH");
    tmp_tmp_msg_0_0.attr_type = 88U;
    tmp_tmp_msg_0_0.min.assign("ZRUUGQIGCQRGUCUJEBPCJOGICEVYAOFXLCUKWFQYJRQHEQVLEBFPXAANTXKJPKSJLNJVWWIZAOJEPSPDRALJVYDFLBMMWZTDUGMMZGGDYSBUPDTRRQXYAM");
    tmp_tmp_msg_0_0.max.assign("RPAPRZXSLLVRXNWQJKGSSTAQGHQRKZLTENVITODLIMAYYWASWFJQFCMJESPUOHLXBYHOXRPHMWNNHIBZFNZCNLLUUUCUPTTWFYJMCUMRWTODFFLFGJGHAQUEHKIWZKAPBYZBUEXDMDSISVWCIPCRCZTHNTAQPJYKSVMMRCEYBNPOKJVQOEKULYXTBJDHHERETCGWNVDBGGEIESVBGYCOMQAYFJBKOVOMKIIGQIPXDVDSFNLGZO");
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
    msg.setTimeStamp(0.43446274457147727);
    msg.setSource(20957U);
    msg.setSourceEntity(189U);
    msg.setDestination(46067U);
    msg.setDestinationEntity(5U);
    msg.topic.assign("LAQZFZGDADRFMUKNRQQYVUMWXAGYQRCZWEMGMKCBVAVHDTLKIDUKGYTXAHZNOIUIODFGNCXAJDPPDFPEKKJYIMSUVFRPETWVGZOLGGBYOJXEFBFZDWKGPWZNQALLWQETPQWZTDYMSVTICSCTEMBLYBHSEJOXKKMHJEYUGZAFINVSZISOVNKYEEVNQQSHHLNRTPBOXRJB");
    msg.data.assign("PWLETVLXWAZKCFBYAJSTUQMNFNUZLRNBCIAJHSSLPZRLQLXKXDPVWRGVOOKYUNJFWBPYFWZQQ");

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
    msg.setTimeStamp(0.1790881795006205);
    msg.setSource(40985U);
    msg.setSourceEntity(74U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(210U);
    msg.topic.assign("KMJKDTZHLZPQJKSFZOCRDBWQGVRZTVSQBEVYAJILODRYWJFUZGEMPOFYCDLIDALWHMNTYCIXSXMQVJXTYGRIFWXWWAAVHOWRGGNGLVPNCAORD");
    msg.data.assign("ENWYHQOLLMVUSYRVJIXEMCCYFLCVOUGBMLZJMSOCHDQXXUVGAQRCLVYHAAPKPFNORGPTBYYCBXSEQPCCTQWACRZKFSTTEFTSPEUSZOTGXPKCINOZRSJNLXYPYJLFJTPWGDIRKSBHDAZKVNKXDTBESFWRYZNOQDEPUUFEJQZIVKATWMKQFDLUGWTKIHNKJVADBDQHAWUJRNVOXBBUOLIGRBJB");

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
    msg.setTimeStamp(0.9928442650690394);
    msg.setSource(36148U);
    msg.setSourceEntity(155U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(178U);
    msg.topic.assign("PUJUPFMNNGSSYGVIXWOLSAIUYQXNSDFKVKEMGVWNZCCHXSTIJZHPZOSCRYHTUMBXTLTPKQOORJENRMKUYBJIOXJSRKCFNISJLIZUYWIRPLHTVQMCAQRJGTDKLH");
    msg.data.assign("YMBVJPRBIGGLFUVOONQCMJINACOFABDNWBTDKBZGAYYMFJFSDHDLNBVMRPAQAACSVKEWXTGPYMNZNVISUUKDRUIHHMKDRWSNFDFSFILFCGEQYZQEKTCUVKPCIUCWJXAMTUAQZXWMKZDXHNGRVXJEELJSPNBIOUTQIWQPTRHRCPRZCDTMEGOTELH");

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
    msg.setTimeStamp(0.27304683387996986);
    msg.setSource(24652U);
    msg.setSourceEntity(231U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(0U);
    msg.frameid = 12U;
    const signed char tmp_msg_0[] = {108, 76, -75, -117, -50, 58, 49, 21, -113, 124, -29, 104, -82, 7, -27, 124, -19, 48, -29, 20, 60, 101, -10, -109, -35, 51, 38, 111, -114, -15, 65, -30, 10, -51, 19, 3, -8, 74, 99, -90, 82, 115, 85, 70, 54, 16, 37, -3, -34, 8, -59, -18, 55, 85, 86, -120, 1, 60, 74, -8, -93, 91, -32, 94, -43, 6, -126, -38, 15, 97, 93, 46, 43, 64, -57, 17, 123, -53, 9, -15, 126, -8, 20, 37, 92, 92, 8, 2, 108, -60, -68, -15, 11, -85, 15, 122, 9, -67, 63, -110, 19, 43, 48, 5, -102, -117, -10, 67, -43, -86, 88, -98, -48, 41, -70, 51, -58, 110, -45, 124, 1, -34, 126, -5, -19, 106, 35, 54, 4, 62, -121, -111, -50, -80, 3, 22, -34, 72, -114, -91, 15, 88, -48, 105, 63, -40, 44, 65, 75, -38, 53, 49, -81, 55, -127, 79, -27, 7, -119, -46, 15, 7, 82, -40, -14, 63, 88, 113, 53, -62, 126, -11, 80, 42, 51, -68, -102, 103, -87, -66, 43, -114, -93, 22, -84, -62, 96, 23, -117, 55, 108, 60, -115, -83, -48, 68, -120, 110, -109, -54, 107, -95, -41, -114, 116, 107, -6, -35, -44, 60, 86, -13, 85, -11, 12, 122, 67, 33, 90, -65, -122, -89, 3, -53, -95, 23, 28, 56};
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
    msg.setTimeStamp(0.7315383324337861);
    msg.setSource(60508U);
    msg.setSourceEntity(2U);
    msg.setDestination(30736U);
    msg.setDestinationEntity(41U);
    msg.frameid = 205U;
    const signed char tmp_msg_0[] = {-123, 18, 115, 18, -3, -119, 110, -93, 19, -13, 60, 106, -83, 125, 79, -85, 121, -83, 101, 113, -111, 107, 19, 14, -40, 58, -118, 24, 56, 115, -40, -63, 21, -17, -59, -82, -121, -14, -8, 45, -51, 70, 14, -58, 32, -71, 31, -113, 18, -83, -28, 26, 40, 40, 56, 25, -112, -48, -69, -70, -3, -120, 62, 108, 38, 112, -81, 51, -63, 82, -108, -82, 103, 14, 62, 123, 12, 28, 95, -29, 43, 33, 14, -115, 61, 21, 31, -5, 53, 39, 51, 44, 60, 21, 62, -53, 104, 103, -106, 23, -13, 34, -64, 49, 45, 47, -25, -66, 69, 111, 113, -62, -126, -116, -86, -5, -14, -54, -118, -95, 39, 68, -73, -82, 95, -68, -43, 88, 60, 88, 102, -87, 2, 49, -94, -120, 18, 58, -80, 3, 79, 90, -47, -3, -68, 3, -71, -76, -73, 30, 4, 2, 70, 49, -42, -81, -41, -80, 47, 0, 5, 57, -115, 38, -2, -39, 53, 11, 109, 98, 71, -97, -20, 82, -89, 49, 104, -30, -48, 103, -80, -106, -103, 47, -80, 62, 15, -31, -15, -90, 52, -55, 77, 65, -33, 85, -123, -33, -51, 125, -45, 15, 105, 20, -80, -11, -54, 104, 44, 80, -19, -66, -9, 77, -42, 0, 33, -48, 105, 64, 124, 34, -98, 40, 8, 1, 125, -46, -31, 37, -74, 102, -5, -70, 117, -119, -87, -56, -52, -4, 36};
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
    msg.setTimeStamp(0.4350591896309669);
    msg.setSource(28608U);
    msg.setSourceEntity(163U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(94U);
    msg.frameid = 205U;
    const signed char tmp_msg_0[] = {58, 115, 100, 112, -37, -124, -53, -35, -71, 3, 80, 34, -1, -110, 62, -102, 28, 116, 44, 109, 32, -123, -108, -17, 40, 64, -73, 111, -52, -98, -19, -113, 14, 62, -23, 89, -128, 72, 106, -104, -111, 43, -81, -70, 2, -101, 82, -3, -96, -123, 61, -126, -86, 88, 38, -74, 102, 97, 12, -48, 42, 43, 105, 69, 116, -60, -71, 104, -68, -93, 38, -112, -63, 79, -50, 22, 21, 96, -92, 69, -55, -116, 46, -29, 81, 106, -68, -103, 126, -22, -8, 68, -104, -20, 1, -43, -103, -101, 23, 94, -74, -37, -71, 59, 1, -17, -37, 73, -44, -80, -58, 4, -83, -87, -117, 57, -127, -81, -69, -118, 53, -64, 63, 96, 48, -38, -124, 47, 72, -77, 13, -94, 65, 18, 3, -55, -47, 85, 86, -119, -30, -71, -1, 31, -21, -63, 56, -39, 76, -82, -115, 102, 80, -109, -22, 96, -105, -61, 20, 29, -89, 70, 5, 4, 75, -125, 106, 10, -99, 69, 41, 103, -24, -100, -43, -82, 65, -95, 36, 68, -121, 74, 111, 46, -31, -52, -58, -51, 78, -55, 93, -10, 62, 44, -125, 11, 112, -7, 56, 94, -107, -2, 84, -67, 81, -87, -75, 59, 117, 9, 51, -30, -9, 76, 58, 97, -49, -38, 20, 113, -21, -88, 79, 48, -63, 38, -28, -22, 17, 19, 73, 36, 74, 32, -101, -71, 35, -125, -69, -108, -120, -20, -50, 104};
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
    msg.setTimeStamp(0.4088842372287985);
    msg.setSource(48033U);
    msg.setSourceEntity(217U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(206U);
    msg.fps = 165U;
    msg.quality = 47U;
    msg.reps = 33U;
    msg.tsize = 83U;

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
    msg.setTimeStamp(0.5271602286526993);
    msg.setSource(32410U);
    msg.setSourceEntity(52U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(70U);
    msg.fps = 191U;
    msg.quality = 144U;
    msg.reps = 89U;
    msg.tsize = 124U;

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
    msg.setTimeStamp(0.45267754879582356);
    msg.setSource(34270U);
    msg.setSourceEntity(164U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(208U);
    msg.fps = 0U;
    msg.quality = 89U;
    msg.reps = 11U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.8801774194671438);
    msg.setSource(30202U);
    msg.setSourceEntity(43U);
    msg.setDestination(26399U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.7925869103397898;
    msg.lon = 0.13651597365632295;
    msg.depth = 164U;
    msg.speed = 0.7540541902134474;
    msg.psi = 0.7971195075300214;

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
    msg.setTimeStamp(0.05198722482972917);
    msg.setSource(14249U);
    msg.setSourceEntity(235U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.8288463885678986;
    msg.lon = 0.42409514280526517;
    msg.depth = 209U;
    msg.speed = 0.7611216209909629;
    msg.psi = 0.2886799625380434;

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
    msg.setTimeStamp(0.12951349030590764);
    msg.setSource(6004U);
    msg.setSourceEntity(34U);
    msg.setDestination(58094U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.7712482330791347;
    msg.lon = 0.5187708837973658;
    msg.depth = 10U;
    msg.speed = 0.03345556590803067;
    msg.psi = 0.4214668492915805;

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
    msg.setTimeStamp(0.5190698628531584);
    msg.setSource(2205U);
    msg.setSourceEntity(51U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(161U);
    msg.label.assign("SRBIUFEWJKNAJQMIHGBMAPNTYOCXHJVLEMPXAKRZEDWCIQFKNVQMVLCSKDEPETYEEOTWOPAXWTNCVZFXAGPQEDHKIPZBQBURPTSRSGZCDPRYOTNCIYHYTLQLMMIUUDBWXWNTABCOBLFJHNFMKUDMGRZBETUHDAKNQCMLNHFXUCIRCBAPGGLSKO");
    msg.lat = 0.27203097731469217;
    msg.lon = 0.5509133323652918;
    msg.z = 0.5319375038162074;
    msg.z_units = 168U;
    msg.cog = 0.8020592113591587;
    msg.sog = 0.29869940605951284;

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
    msg.setTimeStamp(0.907912445166438);
    msg.setSource(11150U);
    msg.setSourceEntity(111U);
    msg.setDestination(29014U);
    msg.setDestinationEntity(150U);
    msg.label.assign("IVBBXYRUHHVZLKPVGKYQWUQB");
    msg.lat = 0.015362890530384421;
    msg.lon = 0.6441530207176106;
    msg.z = 0.06008420523626834;
    msg.z_units = 137U;
    msg.cog = 0.9716173535393456;
    msg.sog = 0.9585838131432283;

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
    msg.setTimeStamp(0.5931012481580399);
    msg.setSource(24684U);
    msg.setSourceEntity(162U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(179U);
    msg.label.assign("MLZPOPUVGTYCTKDEJGFHUEITWXLJJIEOYULHXXMDLNQULVTZGPJYZGRNDUBMBAQHAXZEAPMIFQLYXTQCFRFZWCRJTAXORCYKWNNPSMDPJMDHVWYWOAWHYOKEMSQDKBNBFMSYVUZSNCLCQZHVFAALGKAFVMURUIWVQUVCSJHBIDMAONSPGOQJSIDKBRUBQWXXEVNKZFNJRWCDKOPEGENHBTOZGTLKHIYEIRSWVIRSEOGPGTZFTC");
    msg.lat = 0.05202987767137801;
    msg.lon = 0.40391715643358395;
    msg.z = 0.6919951926758015;
    msg.z_units = 3U;
    msg.cog = 0.33639306135088565;
    msg.sog = 0.7516967656377926;

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
    msg.setTimeStamp(0.14753049921327255);
    msg.setSource(9322U);
    msg.setSourceEntity(180U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(249U);
    msg.name.assign("IFADVJWEJRDCAHWZPOIBLQLTJSEHFRPEJWMDWAEXIVWVBQHHQTZYFSZWLYKXUUEDROXPUOBESEYYXVPJODNYZYNTOIICUAVMHFGASLEMGGAVLAXNITAKSTUROSGYACYFLSCBDHFEQZRCPCIRNXJOKLMKRQTZYZQJMSRBTO");
    msg.value.assign("UVWRUOZBLBTYILBPPQILVMCKGZDXAXHZWQUKFLWGZMNJNPIZETRFMOBYUKHNJEIGZCONJXHAYGTTYYSCGGQFYNUBZAVQMEBIMUQNXNXZQHFANWDCAXXEVDFMJTJYHSDFGEBHUVQPPOMXJLXNPKHIZOIVIUERHGQCSWKRRSYLHSLKFAMREQWVURJYMSFKEBGJKCSDDJYPACKURD");

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
    msg.setTimeStamp(0.23406958229927943);
    msg.setSource(55210U);
    msg.setSourceEntity(3U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(209U);
    msg.name.assign("QRHFZQOWCLTJRDVGSZTUYCTJUQNFAZFGYWSVLRLHGBMQRMIMQMOKPHADUKOEWFSBVY");
    msg.value.assign("CFDAZHXHQKAOOTIGAAQGPLVOUNNGDYWPJHDZZTHFIWFKBDLKPSCFCMJVYWBNXLVPJYPTUIFUNRPTCQSRRIGOEFUDXTXJTZKZCZQTJILVPVRYESIFVNOMOMOSXWRLBIVAMLMGFKYAJZPLBQYSUSHYGYCKD");

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
    msg.setTimeStamp(0.4933176604030145);
    msg.setSource(4039U);
    msg.setSourceEntity(7U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(111U);
    msg.name.assign("YLDVUKDVEANSDYPPLPDJMUEFDCWTNFOBJKFHWBCUYBXGJJXIPMEAHSUAQRGWKZDFJDLHMUGZKTYNRUZVIMNIJOQRHRVIRTJWLDNVFBXXALKGMZCYYEXCGHCLOSMGTXKMBAPKZUAROYAOKSTGTRZLSIEHVSLUDNPPFOAEYGWIENMBEWFPVZQRBOATQYBQOCQNGIIWH");
    msg.value.assign("GQCVJOXYETLCCTPDAEQRSHJXTFCWKAMBXICKOEBVIZJNSS");

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
    msg.setTimeStamp(0.7262842126497261);
    msg.setSource(11507U);
    msg.setSourceEntity(56U);
    msg.setDestination(24854U);
    msg.setDestinationEntity(111U);
    msg.name.assign("BRWXPDBAGEBYUYIHVYQKHYSTSECRSJKTJJVHUBMMSVUWWTOHWELRULQLZFXPDXDKAZNDRUARPWDFPTCEQFLTYDENFKCPXNIBIFIPVTJFWWXKCNMGPEOQNKZATEIONJFSYUTCOMJCNQIDISBSKQSWEGGZCVCI");

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
    msg.setTimeStamp(0.3607376326755152);
    msg.setSource(41161U);
    msg.setSourceEntity(133U);
    msg.setDestination(16871U);
    msg.setDestinationEntity(50U);
    msg.name.assign("GDURDNGLJCLMGGONXLESGUUTWEYCUMVAWZWFYNZIVNYQFEKKYSJEBGNTXDUGJSKXHIQPMPXUZJSDXEKSVROQZZYYMNAKPDBOJSQRPODSAIUJAJLTPY");

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
    msg.setTimeStamp(0.9288051771653979);
    msg.setSource(13337U);
    msg.setSourceEntity(82U);
    msg.setDestination(61538U);
    msg.setDestinationEntity(78U);
    msg.name.assign("VOTCRPVWGUZMPOSJMFQDGAGKZXNHPOYBMQIGJYUOWONKNRNUALIFFSBMXQTBSCRBEYOKCVBSEHGLNMATIZRFHINUQAFFPZGWWGNKUQPSCPRPAIBNYFLBWUSLEZVSABSMXMTJFDKKDRHHIZSGOCABVFEYGYCRUVZESTQUQJWKDKZLNXTJMVIJQZDRDENQXCUTDLEKXVPHQVYJDOCLVMUPZTOYXW");

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
    msg.setTimeStamp(0.47535800239243065);
    msg.setSource(63877U);
    msg.setSourceEntity(129U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(131U);
    msg.name.assign("YLWYLQLTKPQZFQSQIWIJTEGEIKWPGFGOIMVLBUPSUJSIAXCODZQGWUWOVWKXKFJZRCHCASOVEZUAKQJQYXETHVWOWCWPOZNFOENDDQCFLDXBOKINRKSKEENFJEYTPSDTAMLAPMMHNMNMQYBBRSVFKULCBVCDSALDXBGOMDLZJGDJTZTVAHVNRWMFZTAONXNPUTYHCXJDHMPAICGYHBEZGARMBHJIHSBIBPYGSRIRZ");
    msg.visibility.assign("GGEGTTEDHSBBLXBWXMOAMOJVVJEKRUSAFGCVPVQJRUZYLIYMZKWHQUENHIUTCNNLYVMQYCJPUKXVEZHRYDHZPBBDKWITNBDSOHKAIUMDAIVZMBSCJFONQTSXFLARMXIDLYQWOQEDMSGYGPIHCRJWFYFWZJZLVSGXWBOUEOUICFCRABJLCXFJANNQYYNVZHTPGNUHPWIOPQQXWFZRXHKOFOWKFATSDEMNBKPXLC");
    msg.scope.assign("SYHOKFWZYDBRFXHKHFXIPUGGFQDLDVZYQDYLGXEZYJMT");

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
    msg.setTimeStamp(0.0977735895093681);
    msg.setSource(16866U);
    msg.setSourceEntity(202U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(136U);
    msg.name.assign("UYQZDPDRRKUURPUQCAMPKWZNNTOMVSKVHALEZFIJKYGPOPAASYYRHZLLUFSGDCBQVHTDDMEOGICEQJHEFGJORCZSBMARWOIYPKKJVZLLBKUHOXXNYUEAVQOQMLUQLXLQDXWNKZDBJBHVUZMRWSZNPGVSAMSFTULBYFQZKCYMTEWGGAHTWWSXXPNXSIJLHTITTHEDEHGBDEGCJJMWNPJVRNRBVXIQNWFC");
    msg.visibility.assign("VANHYQJEJWLJDRGHJBKRHXHNXYABBSBT");
    msg.scope.assign("HQYUXVNAEQKKYOMQXWECITPLFZZUNAEYOACRGXAIIVUTVHCHVBXEICQWQBWUHZSDQTGHOGZBNDTKXSTP");

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
    msg.setTimeStamp(0.8055963095118492);
    msg.setSource(3957U);
    msg.setSourceEntity(144U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(3U);
    msg.name.assign("YQOXKQKPDAMPCMRYVTWHFLJNWJIEOFAMCPNVFKDHXTLTFDHYZSWJVGPHXOFI");
    msg.visibility.assign("XQZWHONDUPIXANZFOOUMILAZRTPFWIQPPMYFYEUHENFSOTRLJLFKAGKATIEUJGXNACSHJCYEANVEYLKFNYSBWRILXNXLYRPWCOZZVZMJZAFMVBHBK");
    msg.scope.assign("EYHRZFXSNOJFBJXUQHWHTNRGSHHUYKVZFEXZIXJBHFDTGZKGYZXTWWNONORQB");

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
    msg.setTimeStamp(0.5123053398719316);
    msg.setSource(50912U);
    msg.setSourceEntity(112U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(228U);
    msg.name.assign("HMHXBHOPGDQCXJVHZRKVBVMMMQVVRYTELGKJBUGJXVPTSXAEDTJWLPPFSBRAXANEGEMSARKFZIPOOCRGNFIYHHEYBJKWSZTVIJMPXN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ATYQKJICOKUMIFXPYBFHJYVDSLBW");
    tmp_msg_0.value.assign("UAFFPMJYZVNNWLCFZZFVBXGMMQDIBQTKJUFHKNTDDCNLRDEGHLPUQVMTXNBLJRCXEMKRAJRDEMBFHPBQBDVPCZNJAXHSONFVQZXGVTAKWTRLRWEHFGDEXWOOUKMCVQWORTEYOYUIAJCYZISLCSVSNIRUIDZYQYOJRVGEFSLBIJBJBKULZRPQECGXTPWWHKTITYCIYYPOASLON");
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
    msg.setTimeStamp(0.6568795275557305);
    msg.setSource(49531U);
    msg.setSourceEntity(174U);
    msg.setDestination(49888U);
    msg.setDestinationEntity(126U);
    msg.name.assign("LZOKXXPZOGRGPYDTWNFQWDHLJOHKMHOQSZPUHCYHSCQQSQUWUKQWJEHSKXCODYGLVZAJA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BRQPROWPUNIKING");
    tmp_msg_0.value.assign("QOMQNAFAEBKMFKXXPYGTXDPJKOWNTURDEXCFSJMRGPJSHFXPAIIIYTWPEKVGLUHYCOFDNIVPWPHJJWOEKDVZPYTQPYCSKZDJFQXETZZRKECMHHRTOLRHSQIBONCWORLYWAYZQBJCGMGLZNSAECVRNIUOVMBIC");
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
    msg.setTimeStamp(0.5827956519447113);
    msg.setSource(53807U);
    msg.setSourceEntity(157U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(139U);
    msg.name.assign("YWCXXGQIUDMZAUMJLNRKKDDYXRVAQOEMPBWIEEIALUCCHARAQUDETXTBGMGQTFOUYBZWKCRTSVVYYBMCISGDRTUKHKASMZOXTJONCZVT");

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
    msg.setTimeStamp(0.5622085325306713);
    msg.setSource(11879U);
    msg.setSourceEntity(130U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(122U);
    msg.name.assign("PKCRAGICJMPZPUWDNMGTHWWJWLGCYQJLVORRIVTQKUBZSUTIHMODYDBQCPDECSYACJKDRWEXAHEPIIMVFDEKITKPUWGSEAXELQBJXXUKEQOGFXYFJBPODMWLQJCAPWOEHBJAAXVHZ");

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
    msg.setTimeStamp(0.5731227707257873);
    msg.setSource(14073U);
    msg.setSourceEntity(203U);
    msg.setDestination(21209U);
    msg.setDestinationEntity(190U);
    msg.name.assign("YQIHNYWTQWUUFATMSLSNJAPIKCWAZNQSQZCDHXJOGDHLPJTKTIIBBNWJVSHLBCTZBWDCOYVILMVRHXVOQYEKSPJDKBGNRYNZDEVXMOPOJVBBFXFBNDPJTKAOMKYFBZTKMRQEIDZMAI");

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
    msg.setTimeStamp(0.8840660003185595);
    msg.setSource(18812U);
    msg.setSourceEntity(32U);
    msg.setDestination(35603U);
    msg.setDestinationEntity(102U);
    msg.name.assign("CWIXXFBZXXLNLSRXUJSGBTRCWWEQMEVRUDOVWKSTWFETNSNAPORRQEVLAZJBXESYKZMDCIRGYJTERFQHNCASLAPKTBTOZDGYMYQHQBVKHYRSSQPIAUEDQGJPIGUCPWAOHDVKHINBPXHSMFDLNLWNTWZCPOEVUFHHVOBUHGHMTYCMCGKNEVMYVKBWAIFPMZJIKDIJAI");

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
    msg.setTimeStamp(0.4875222217591677);
    msg.setSource(40188U);
    msg.setSourceEntity(177U);
    msg.setDestination(2115U);
    msg.setDestinationEntity(70U);
    msg.timeout = 1326891227U;

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
    msg.setTimeStamp(0.0840491355714802);
    msg.setSource(34567U);
    msg.setSourceEntity(8U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(86U);
    msg.timeout = 1134551142U;

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
    msg.setTimeStamp(0.1949176461887433);
    msg.setSource(60452U);
    msg.setSourceEntity(238U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(76U);
    msg.timeout = 381962250U;

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
    msg.setTimeStamp(0.13299835571466445);
    msg.setSource(22348U);
    msg.setSourceEntity(254U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(0U);
    msg.sessid = 4187769475U;

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
    msg.setTimeStamp(0.8379383486229237);
    msg.setSource(48880U);
    msg.setSourceEntity(160U);
    msg.setDestination(46794U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1607364004U;

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
    msg.setTimeStamp(0.276944117514777);
    msg.setSource(18372U);
    msg.setSourceEntity(199U);
    msg.setDestination(54415U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2601383942U;

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
    msg.setTimeStamp(0.03402896478132744);
    msg.setSource(42771U);
    msg.setSourceEntity(30U);
    msg.setDestination(12537U);
    msg.setDestinationEntity(10U);
    msg.sessid = 2025801510U;
    msg.messages.assign("VYSYIHVJQSUMPTDGURNOEWWSCEBFTBOSMKABDHZXPJLNZEPZFBESYNIFMZSZKDUFYTRDHXZDRQX");

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
    msg.setTimeStamp(0.30739813569298);
    msg.setSource(55930U);
    msg.setSourceEntity(187U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(228U);
    msg.sessid = 4102934940U;
    msg.messages.assign("NBBHLUUVSVEDHAQINGXTZRWCPPYSKQFETHYUQNUDROHRRPNLGEXIAPTFCDFLBPGHFWYILSOLTUCZKDSLMGZSMZDLVVVYIEXTIYGMGPEYGPKPTXKWOVFJARHXJZFJWJLUGWNMLBOQYRECHWXHRMCWS");

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
    msg.setTimeStamp(0.8359617611001875);
    msg.setSource(30219U);
    msg.setSourceEntity(63U);
    msg.setDestination(62744U);
    msg.setDestinationEntity(159U);
    msg.sessid = 2756829168U;
    msg.messages.assign("TNQOJGVKTDZKDFEKQIMLNKLJLZRGFSGMAGSYQYJMIZOHXIOQFGUHEJPIMQIFURGGKUIUWZLEHRYFULQPNTTTOOXGRVQWPOVEBSSYKCPQZXJJNOTXDXLJFCERDUBIJUSUBVCSZLCTKEAHHANM");

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
    msg.setTimeStamp(0.5401302640481911);
    msg.setSource(56821U);
    msg.setSourceEntity(223U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(131U);
    msg.sessid = 2846798337U;

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
    msg.setTimeStamp(0.6949642991195617);
    msg.setSource(9252U);
    msg.setSourceEntity(164U);
    msg.setDestination(16771U);
    msg.setDestinationEntity(198U);
    msg.sessid = 4029193558U;

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
    msg.setTimeStamp(0.43821810288740093);
    msg.setSource(17189U);
    msg.setSourceEntity(100U);
    msg.setDestination(47636U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2394942756U;

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
    msg.setTimeStamp(0.9418212447141537);
    msg.setSource(53086U);
    msg.setSourceEntity(6U);
    msg.setDestination(46726U);
    msg.setDestinationEntity(107U);
    msg.sessid = 2867922175U;
    msg.status = 219U;

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
    msg.setTimeStamp(0.7058824009912292);
    msg.setSource(44126U);
    msg.setSourceEntity(187U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(20U);
    msg.sessid = 2315309150U;
    msg.status = 154U;

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
    msg.setTimeStamp(0.8415975843737885);
    msg.setSource(49052U);
    msg.setSourceEntity(83U);
    msg.setDestination(48018U);
    msg.setDestinationEntity(198U);
    msg.sessid = 1921669898U;
    msg.status = 100U;

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
    msg.setTimeStamp(0.329426656441861);
    msg.setSource(25400U);
    msg.setSourceEntity(106U);
    msg.setDestination(43512U);
    msg.setDestinationEntity(52U);
    msg.name.assign("TTSWPCRIHRMAMGJYGMVWJERGZDEVOGONTFFIKOWDAOYIJJXRKQHQRBQQUAGUFJAIENCRXZQO");

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
    msg.setTimeStamp(0.31471723917208094);
    msg.setSource(64204U);
    msg.setSourceEntity(229U);
    msg.setDestination(16314U);
    msg.setDestinationEntity(30U);
    msg.name.assign("QYDMJFXGTVYXDXFHKUMKAHNXEQWYBFCSSPFBCQXPMSMIWRGOHLLSJJIVRKLIVUPUTUFETEOBSRGXHDPQEOSJWCAWHBIAGQOCHVFQUSDJOCMYRBGLRCQVJZLOZTONYXKVVWWDUFTYEJKFRBKWCAOAZXSTRJGFETTIGZMJMRZICXPLYBENNWOUNZVZLPQSBHUZNBNSAIVNNGEACDCDEGLAHLKXDQWBYFORZUYDWMPUIAHMKIJZ");

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
    msg.setTimeStamp(0.09963903557331988);
    msg.setSource(5558U);
    msg.setSourceEntity(206U);
    msg.setDestination(26897U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NTQLTHKNBSWPYELYKROSDLCMXECQKHAAANQUEENKJMDFMJSZJBXXYXUCMGNUFTZBRZYQVSMSPWPAYOFCVXUQDLEWUGBOWWHXKDTAFOKRHBLOXHHLESCDNVFEQAVHLEPCDWOXNOCAPMTGLPMMUDZZZNPKMJGBTBWIASRDHRBVGCNPTRCGHWJRERFXIJZQQXYWVOLOIQIGAITBSKNIFHGEKKLCGIYIJJZJGFYSDZYIUZPJTUYVDUFBVQWRVIA");

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
    msg.setTimeStamp(0.34296585918420175);
    msg.setSource(46257U);
    msg.setSourceEntity(163U);
    msg.setDestination(61596U);
    msg.setDestinationEntity(93U);
    msg.name.assign("NCCMXTHXBFAPWTVZBLMMLZUAWHXDRVHBJYLISNVKUQEYIHADWXRRKOGRJWGJPJZNTSPSBLQAWXYGOAWUJORDXYYNAVSHIMQYKTHCTIPEGXDKTMCKXMPMCDAFAZRBSBOOETZRGSIQQROYIYBFJHOSAAVHKNFESTGFYCOGXLWJIZVDOD");

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
    msg.setTimeStamp(0.5499561737387197);
    msg.setSource(52490U);
    msg.setSourceEntity(54U);
    msg.setDestination(8403U);
    msg.setDestinationEntity(119U);
    msg.name.assign("FWGYVZFWELRYCCZUIGFBXSMLTUHEKYQAFPKDWIJOVNQSXXOEDRAJUDAXAWOXLTSERRLCM");

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
    msg.setTimeStamp(0.9484313150364831);
    msg.setSource(50110U);
    msg.setSourceEntity(52U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ZYBNXNAPAFZHDFCSRVJCMOFOVRZQGRSPLIVJOPDGLDXAKBLUFVJJGDTINUPOSDRDRQEIMVWFACEHTLIBTFSSJZXLKVYOEZCIMHGMTEBXZMAUWHEGCRFCXPSVXSCYKLWTSYQAJFT");

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
    msg.setTimeStamp(0.25977724611793807);
    msg.setSource(21906U);
    msg.setSourceEntity(79U);
    msg.setDestination(28415U);
    msg.setDestinationEntity(216U);
    msg.type = 0U;
    msg.error.assign("TBVYLKMIZMBLDOSJCSLYQUDEENIVCIFOHRFZXEYSHKTNTQAPRQLBV");

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
    msg.setTimeStamp(0.6264350999070529);
    msg.setSource(56942U);
    msg.setSourceEntity(121U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(234U);
    msg.type = 57U;
    msg.error.assign("SEZKLBSLFKHCFMBPSUHCGYIXHQMVMXKLWENEYTDWXFJOWGMVVBTRBJSWUFONMAUCCJTRNMDKMOZBX");

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
    msg.setTimeStamp(0.9440907075057399);
    msg.setSource(56333U);
    msg.setSourceEntity(225U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(79U);
    msg.type = 19U;
    msg.error.assign("FEVFTHJEVZ");

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
    msg.setTimeStamp(0.6552188155198482);
    msg.setSource(43051U);
    msg.setSourceEntity(201U);
    msg.setDestination(28097U);
    msg.setDestinationEntity(143U);
    msg.seq = 45114U;
    msg.sys_dst.assign("MRQDVFCAZSGHOKUNGHCECLSHCUVKFVQHUFYDHVBHAPWPGEGLXRNFLBITQBCOUIEKZFLSJWZDHCZXZLTAVMPQJYAMMPJWBBZDAPGETQRDYPTHGLIVRXWIXIMBMYJFAKGRBEHXNFEDVOZUYZWBJYTINFSTNXFORDMVESNVGWPWDWNGHQCQCYATJVC");
    msg.flags = 9U;
    const signed char tmp_msg_0[] = {-43, -1, -89, 66, 117, 68, 94, -30, 80, 57, -6, -52, 75, -50, -74, -50, -90, -68, 16, -50, 21, -70, 25, -106, -30, -49, 102, -101, -77, -57, 104, 51, -72, -17, -67, -1, 54};
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
    msg.setTimeStamp(0.665025025517661);
    msg.setSource(48403U);
    msg.setSourceEntity(151U);
    msg.setDestination(47319U);
    msg.setDestinationEntity(16U);
    msg.seq = 16433U;
    msg.sys_dst.assign("PGSPIEJQHQKCHJYNRISBVDAFXKOEVPRRBURBNDYHEDKHXTCKJFWVBPKJOURFDUXFNWAJIVCTOEOSQNLZZJZIHJXLOLGDICUWEUMPVXWFYTPBKVZXLZUUWQYCGCFWIUJBNENQVAVMNZEZMQDLMAQTOGPCSUIPTMWDMTXAOODPF");
    msg.flags = 122U;
    const signed char tmp_msg_0[] = {-122, 38, 113, 100, 46, 15, -94, -82, -91, 15, 126, -126, 90, 88, 105, 14, 78, 113, -124, -99, -74, -123, 80, -100};
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
    msg.setTimeStamp(0.5525866630723822);
    msg.setSource(15851U);
    msg.setSourceEntity(93U);
    msg.setDestination(11653U);
    msg.setDestinationEntity(28U);
    msg.seq = 1781U;
    msg.sys_dst.assign("AJJWZSNQLDYPGRFYNDUURMQHZBBKGWROSQYHMLFDEPBRYFYAKNLCHHIMDPERXVLEQQGGYIFSBSDHSIVHMSXNLWIVMOYXRENIPGWFANLUQMLSGGTGNPBCOXDCONRKDSWNRNZTWECORKCARIZEMYBCEKVVTOXPABQQVZJFKUQMLLWGBHVTFUJFKSSDFCTWZBXPKZQOZJKOJHBAAAUDPYM");
    msg.flags = 24U;
    const signed char tmp_msg_0[] = {-51, -91, 31, 125, -48, 70, 12, -26, -114, -97, 85, -47, -33, -56, 23, 97, 21, 53, -105, 112, 83, -4, 122, 124, -81, 5, -48, 14, -119, -73, 105, -51, -33, -29, -48, 62, 122, 51, -86, 23, 1, 58, 50, 17, 26, -22, -103, -54, 111, 10, -68, -31, 114, -109, 21, 15, -108, 16, 38, -31, 88, 19, 38, 14, 61, 108, -8, 52, 36, 103, -113, -54, 29, -1, 54, 41, -40, 81, -105, -45, 84, 33, -34, 59, 34, -117, -51, 1, -62, -20, 13, -48, -18, 74, -38, 24, 65, -55, -66, 15, -13, -42, -82, -86, 83, -100, -24, -55, 17, -59, -101};
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
    msg.setTimeStamp(0.9271240144345662);
    msg.setSource(21033U);
    msg.setSourceEntity(189U);
    msg.setDestination(3893U);
    msg.setDestinationEntity(83U);
    msg.sys_src.assign("LAEERZDZPJOFIYRR");
    msg.sys_dst.assign("XEAIVFXOQQBMIISIQGOJFYNYERSTUQDWRKXQCVWRHYEIJQPPAHJCOSDAWPRFUVKSGUKTSWHHDHFLVHNZYCGBKPNYQAEIONZTYLRLWJBWFGCWUCIGGDBKUGKPOTUGHXPYNNOKPOXSACALFYJBCLHKEKDTNCPYDTJDSUVMCPBKZTLIZDHEALXUESRORJGRNIVZFIOCZMFMNXMPMXAXRNTAVMBFUTJVWHBRJFUQZWDZEOEZQVWBQSGDBXM");
    msg.flags = 147U;
    const signed char tmp_msg_0[] = {-93, 37, -37, -90, 52, 28, -3, 111, 86, -111, -54, -12, 21, -99, -24, -108, 74, -107, -26, -77, 21, -96, 45, -27, 0, 79, 65, 19, -120, 122, 16, 34, 34, 71, -123, -126, -33, -13, -106, 84, 27, -87, 5, 119, 2, 75, 123, -25, -27, 41, -44, 119, 94, -69, -28, -13, -115, 105, -43, 24, 32, -27, -119, 8, -66, -35, -119, -9, -82, -92, 21, 2, 30, -65, 30, 62, -44, 5, 22, -62, 91, -47, 5, -120, -46, -66, 12, -18, 118, -16, 23, 18, -105, 31, -72, 27, -95, -117, -103, -55, 92, -99, -109, -12, 124, 0, 81, 85, -28, 108, 11, -115, -61, -39, 108, -4, -24, 23, 50, 36, 48, -52, 116, -73, 7, 118, -80, -100, -27, -44, -57, -117, 31, -5, 43, 96, 108, 0, 61, -102, -23, 23, -33, -17, 25, 99, -35, -62, 124, -92, 113, 43, 32, -73, -14, 89, -20, 95, -69, -99, 42, 89, 52, -128, -126, 20, 58, 84, 107, -52, -108, -49, 21, -116, 19, -125, 73, -78, 64, 77, 88, 14, -38, -76, -15, -55, -43, -6, -110, 123, -82, 0, -14, -104, 45, 61, -70, -111, 124, 110, 60, 28, 76, -69, -112, 24, 4, -128, 39, 108, -63, 40, -33, 91, -9, 21, -80, 68, 21, 60, 91, -24};
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
    msg.setTimeStamp(0.22575334306482575);
    msg.setSource(64896U);
    msg.setSourceEntity(10U);
    msg.setDestination(26536U);
    msg.setDestinationEntity(235U);
    msg.sys_src.assign("RGDLVUMMDPEBOLXUHYS");
    msg.sys_dst.assign("YHESRWNPZDJQAOUFZNJUHYQLERNCSFZNQTNXARWXKYBASHLZKWSTMQEOUZTCAXORDUVCYPLJDMGNLLWMGKMIVWBWZAMRKBPJCGNZMXTNOYMWEFREGYLTEPEACUXVXQYBBLCBFHIADAJXIOCYUTLKTIHDVHJHMUCFLOUETDRGGCPBVLUWOKAYQFFRDIQISBSFCYTB");
    msg.flags = 57U;
    const signed char tmp_msg_0[] = {0, -85, -36, 119, 106, 56, 114, 98, 5, 13, 97, 97, -58, -46, 91, 35, 110, 20, -9, 119, -27, 17, -43, -121, 65, -96, -20, 22, -84, 84, -9, -74, 60, 8, -36, -109, 86, 16, -116, 109, 36, 32, 112, -2, 100, 115, 107, 44};
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
    msg.setTimeStamp(0.3795807451425619);
    msg.setSource(998U);
    msg.setSourceEntity(80U);
    msg.setDestination(3577U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("NXGAHXAOOFTSQKPEPRKZFQZPLGLJSFNOQCXMNNPQJGVWGRLFGHPWRTOGFBKAPHENUBLUEGRBVZVRKNCBRNWHMDIIJAKCZVDQUYWJXWOXBYG");
    msg.sys_dst.assign("SXPODZLEQQJIJZWDRTAVIBJOWQBBDCJGPJVQOBRLZAEWMGKSGUQZISQKZHURXTUFKEYOYOMKDNMZWGQRHGSRKFIENBHBZE");
    msg.flags = 133U;
    const signed char tmp_msg_0[] = {16, 57, 1, 24, 40, -21, 64, -11, -49, 87, 91, 57, 107, 91, 107, -4, -107, 87, -8, -107, 108, -83, 47, -103, -4, -50, -78, -24, -39, 100, 122, -103, -66, -114, 18, 38, -31, -119, 16, 27, 91, 78, 108, -38, -60, 13, 71, -31, 99, -117, 63, -83, -22, -107, 6, 116, 113, -19, -57, 77, -18, 124, -67, -69, -107, 32, 36, 39, 37, 68, -58, -97, 7, 2, -107, 50, 108, 48, 99, 25, -46, 88, 121, -25, 28, -82, 112, 72, -100, 91, -4, -43, 106, 76, -101, -115, -30, -39, -63};
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
    msg.setTimeStamp(0.7955995966265914);
    msg.setSource(21345U);
    msg.setSourceEntity(45U);
    msg.setDestination(3443U);
    msg.setDestinationEntity(102U);
    msg.seq = 64794U;
    msg.value = 38U;
    msg.error.assign("NDWOOOGVSBRWCCLIKVKJNLAXITEMGBYOPZHVLHZJNHKYWBQYXCDCMAXZGKGJGRVSPYVGHSAKWINZFZKRLVUPRPOMMYTEAFWBJPDPQAAJVBTUOXTAYGDLFHMULSDNHXFLQWKZXUFNTFRIYTBWUORDRUTEFHZALJACFTSDNPMCVDBQVFYQDJCRJRBWMMIMBEFUCOHXQHSUTEUYUEXQXJ");

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
    msg.setTimeStamp(0.5277821416623913);
    msg.setSource(39715U);
    msg.setSourceEntity(63U);
    msg.setDestination(34554U);
    msg.setDestinationEntity(152U);
    msg.seq = 5006U;
    msg.value = 80U;
    msg.error.assign("BAXWPWNUPJSKMHBQEHAIDNYLOSTVIRGVDITNYDUPFWLLCKNKROGBWHVCGJSANHDZDZIMEWRJHGYFBUIVQSMSBPMOTJVUWJCPOGUXRGRSEOHNFPBTHZFXEXDXZFNHXTPOLYECIXUZXGWKVPOKLFPQFGQYTESUKZJFLUYLYVANTCARTCYQWQACMXYWKTCRUVRDNWUJDIMSMXJBDADJZLHPJARIKBSZOAIQIL");

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
    msg.setTimeStamp(0.2627842077230328);
    msg.setSource(59987U);
    msg.setSourceEntity(9U);
    msg.setDestination(6273U);
    msg.setDestinationEntity(146U);
    msg.seq = 52301U;
    msg.value = 121U;
    msg.error.assign("DMFNECIOJSUFDYDXTBZBMUTGJLCRZVNTQEHXXBXPCGGSKQKVNXMSARHLXDCUUGHZJDADTDPJGZNAZWXJVKBIEAIYHUDQNOJUVOWWELHGAQLPFQBNNZLTMDWFWYRKITVYGOCOSSMAYVPTVRZEUBASGEQQQMQHOXWJFWPBBOHNVJMMKKZZYARZPNIEPVOCMQUWYRLHGRBLLHKVDTKUFPYPMISCOI");

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
    msg.setTimeStamp(0.7288054681670184);
    msg.setSource(55684U);
    msg.setSourceEntity(149U);
    msg.setDestination(18948U);
    msg.setDestinationEntity(246U);
    msg.seq = 45880U;
    msg.sys.assign("HGQQIHJTKNGVCLMABMQRQETRRSVXWGLWKJRYCDUUSELXFYEYESHVEDOGSEUTBRTHMMFBZRAFXYYOKZFWCBVTDWHVKSQSDIIZLACTPHZSRLYLRFAPBOUBKKPDBDXIBVXIPNLNPEYPRWKUNJWPDNKUZAFHOZNCFMOIOTUGWJULJCHDNJXUDSPECGTIYVXMWJFAGMEBPEOWZQVKQZCYIVCLRCKOOOXANHBGFJXNDGMAFTWQJJSSXAUYMQVTHGZ");
    msg.value = 0.0956499106127785;

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
    msg.setTimeStamp(0.14629304947907595);
    msg.setSource(48521U);
    msg.setSourceEntity(119U);
    msg.setDestination(59696U);
    msg.setDestinationEntity(86U);
    msg.seq = 27237U;
    msg.sys.assign("HXRDVPIECAKIKUFABABXOAHQHGQQKRGJBBCACYWJPPUVLSEWVPHMCMAOZGNIBRXNHVGZUVWULBTLBFFJZZWQYQZJFUVTJWVALOKJLHVY");
    msg.value = 0.16561315280130529;

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
    msg.setTimeStamp(0.8020837968861095);
    msg.setSource(27348U);
    msg.setSourceEntity(203U);
    msg.setDestination(2414U);
    msg.setDestinationEntity(169U);
    msg.seq = 57510U;
    msg.sys.assign("HACXYKPRXHQBLVUDMOIASXGUHEWSEMFJVJMKLATESGOLDHGBVCVWECPLMHEQLXPTDRTXCIHFQVQYJVTEXXIWNOELIQPYBZTEBNJZSZBOTOGRZJTSJFIQYQQNKLUXFIIRWCURVDCJAUSTEOMGMKZRFSPGRMBALDNJYYUWEZ");
    msg.value = 0.1757908935799869;

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
    msg.setTimeStamp(0.46306332271792905);
    msg.setSource(40439U);
    msg.setSourceEntity(36U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(24U);
    msg.seq = 983U;
    msg.sys_dst.assign("AGLBSLBNYUDEMHQSSNNHIWUJVTLKPCMVYBSYVGUKANAIEFEIPXBCZTDIGHZVMXXOKMZWITPMDHUPVCEOCIJYLEOOLZENWBHSBMEIBXPD");
    msg.timeout = 0.7946367602820226;

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
    msg.setTimeStamp(0.9929429636719888);
    msg.setSource(26166U);
    msg.setSourceEntity(191U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(47U);
    msg.seq = 47015U;
    msg.sys_dst.assign("FOLNHAAXKDIQBNUBPLMWJDFIHEDSQCSCWXIAXDHXYAGYMMHFRHPNUGBRXIZNYGCCBXPFQSVJEMOFRCZPNZVSSOSGWOZOTFTLZNBIMQWTWWMKAAHVNRQGTREVTDBGFBHMEIPPFCLQIZRJ");
    msg.timeout = 0.15953670918606677;

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
    msg.setTimeStamp(0.2934870972242668);
    msg.setSource(53192U);
    msg.setSourceEntity(241U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(159U);
    msg.seq = 17521U;
    msg.sys_dst.assign("WYAUKBILMUKDBZVYZCATRVHESFBLJWBNJRFQLPZAPDBKLLMEVYNVAHVEUZHQHDIFPWCEOSSNIXQRX");
    msg.timeout = 0.6298433095720681;

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
    msg.setTimeStamp(0.4462642562106486);
    msg.setSource(45964U);
    msg.setSourceEntity(111U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(145U);
    msg.action = 111U;
    msg.longain = 0.6113300113451764;
    msg.latgain = 0.14693014431183005;
    msg.bondthick = 2095357877U;
    msg.leadgain = 0.4067572795998339;
    msg.deconflgain = 0.5263775204777719;

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
    msg.setTimeStamp(0.07685753732051448);
    msg.setSource(37255U);
    msg.setSourceEntity(78U);
    msg.setDestination(20616U);
    msg.setDestinationEntity(92U);
    msg.action = 71U;
    msg.longain = 0.14248686400297883;
    msg.latgain = 0.5012925268549275;
    msg.bondthick = 294302524U;
    msg.leadgain = 0.07243612339149752;
    msg.deconflgain = 0.2163178017043612;

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
    msg.setTimeStamp(0.16689214713656775);
    msg.setSource(37930U);
    msg.setSourceEntity(8U);
    msg.setDestination(22100U);
    msg.setDestinationEntity(184U);
    msg.action = 9U;
    msg.longain = 0.11027187321461795;
    msg.latgain = 0.3036251471644674;
    msg.bondthick = 371465843U;
    msg.leadgain = 0.8340476781919607;
    msg.deconflgain = 0.5219485192042179;

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
    msg.setTimeStamp(0.5728173210632151);
    msg.setSource(60284U);
    msg.setSourceEntity(68U);
    msg.setDestination(28777U);
    msg.setDestinationEntity(221U);
    msg.err_mean = 0.5604542577890481;
    msg.dist_min_abs = 0.9890078109423548;
    msg.dist_min_mean = 0.31013692437552287;

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
    msg.setTimeStamp(0.6283172341133811);
    msg.setSource(38727U);
    msg.setSourceEntity(117U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.08681235346834015;
    msg.dist_min_abs = 0.28487942272546174;
    msg.dist_min_mean = 0.6613269232215113;

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
    msg.setTimeStamp(0.9761685795239641);
    msg.setSource(60981U);
    msg.setSourceEntity(228U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.13363876912706196;
    msg.dist_min_abs = 0.2662252625766143;
    msg.dist_min_mean = 0.041961964562080345;

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
    msg.setTimeStamp(0.6098660622090779);
    msg.setSource(5508U);
    msg.setSourceEntity(179U);
    msg.setDestination(47434U);
    msg.setDestinationEntity(21U);
    msg.action = 252U;
    msg.lon_gain = 0.0687688422433036;
    msg.lat_gain = 0.8323502720101529;
    msg.bond_thick = 0.4446649714188874;
    msg.lead_gain = 0.9397246951823506;
    msg.deconfl_gain = 0.1846408648713148;
    msg.accel_switch_gain = 0.2525141435304259;
    msg.safe_dist = 0.1321287997516084;
    msg.deconflict_offset = 0.9756195437315119;
    msg.accel_safe_margin = 0.7188706225672602;
    msg.accel_lim_x = 0.9264849560250153;

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
    msg.setTimeStamp(0.8671194780642241);
    msg.setSource(11684U);
    msg.setSourceEntity(127U);
    msg.setDestination(30480U);
    msg.setDestinationEntity(138U);
    msg.action = 0U;
    msg.lon_gain = 0.9562026789742805;
    msg.lat_gain = 0.6137146723542696;
    msg.bond_thick = 0.015356334721118636;
    msg.lead_gain = 0.3284742934606949;
    msg.deconfl_gain = 0.8529476920014023;
    msg.accel_switch_gain = 0.5930868275353041;
    msg.safe_dist = 0.5644575311739447;
    msg.deconflict_offset = 0.8788117455284266;
    msg.accel_safe_margin = 0.06348413367289418;
    msg.accel_lim_x = 0.38002640674208055;

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
    msg.setTimeStamp(0.554476702815082);
    msg.setSource(53312U);
    msg.setSourceEntity(222U);
    msg.setDestination(51937U);
    msg.setDestinationEntity(110U);
    msg.action = 113U;
    msg.lon_gain = 0.6330234304113516;
    msg.lat_gain = 0.04923629120779327;
    msg.bond_thick = 0.12972251988301353;
    msg.lead_gain = 0.6314596646142818;
    msg.deconfl_gain = 0.19788082645180838;
    msg.accel_switch_gain = 0.7007534311882174;
    msg.safe_dist = 0.8371974256208548;
    msg.deconflict_offset = 0.5016032423746349;
    msg.accel_safe_margin = 0.447172424107944;
    msg.accel_lim_x = 0.387320914768143;

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
    msg.setTimeStamp(0.23837638766288383);
    msg.setSource(15243U);
    msg.setSourceEntity(138U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(163U);
    msg.type = 1U;
    msg.op = 173U;
    msg.err_mean = 0.7974775384076188;
    msg.dist_min_abs = 0.8659916375274994;
    msg.dist_min_mean = 0.7025761652303703;
    msg.roll_rate_mean = 0.38293243588172965;
    msg.time = 0.2131668972396389;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.2786801329320311;
    tmp_msg_0.lat_gain = 0.09580693298570686;
    tmp_msg_0.bond_thick = 0.3237471679874184;
    tmp_msg_0.lead_gain = 0.7931404526704976;
    tmp_msg_0.deconfl_gain = 0.02365382151449702;
    tmp_msg_0.accel_switch_gain = 0.7920353021107217;
    tmp_msg_0.safe_dist = 0.6676238155128342;
    tmp_msg_0.deconflict_offset = 0.8017469143503334;
    tmp_msg_0.accel_safe_margin = 0.20559910399294612;
    tmp_msg_0.accel_lim_x = 0.08503741235631468;
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
    msg.setTimeStamp(0.35420892535950643);
    msg.setSource(42556U);
    msg.setSourceEntity(10U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(119U);
    msg.type = 35U;
    msg.op = 253U;
    msg.err_mean = 0.7756110905640278;
    msg.dist_min_abs = 0.5358157918048683;
    msg.dist_min_mean = 0.831727187844975;
    msg.roll_rate_mean = 0.5881984766927301;
    msg.time = 0.03035647995745705;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 243U;
    tmp_msg_0.lon_gain = 0.9608763544075769;
    tmp_msg_0.lat_gain = 0.8990923443961555;
    tmp_msg_0.bond_thick = 0.2535551340070986;
    tmp_msg_0.lead_gain = 0.5323137591444929;
    tmp_msg_0.deconfl_gain = 0.02477816662594856;
    tmp_msg_0.accel_switch_gain = 0.6724774208109807;
    tmp_msg_0.safe_dist = 0.07331368350708478;
    tmp_msg_0.deconflict_offset = 0.747332726293301;
    tmp_msg_0.accel_safe_margin = 0.8160573096982829;
    tmp_msg_0.accel_lim_x = 0.41756187693857605;
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
    msg.setTimeStamp(0.401044971843145);
    msg.setSource(22853U);
    msg.setSourceEntity(96U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(112U);
    msg.type = 120U;
    msg.op = 151U;
    msg.err_mean = 0.0749155719543052;
    msg.dist_min_abs = 0.8366059708058143;
    msg.dist_min_mean = 0.8220827262015861;
    msg.roll_rate_mean = 0.5975236628765229;
    msg.time = 0.36791839356276357;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.9906166888537538;
    tmp_msg_0.lat_gain = 0.22260437283297851;
    tmp_msg_0.bond_thick = 0.8880627850507625;
    tmp_msg_0.lead_gain = 0.8335759957947231;
    tmp_msg_0.deconfl_gain = 0.733149834958898;
    tmp_msg_0.accel_switch_gain = 0.12779444709393406;
    tmp_msg_0.safe_dist = 0.26639943639060226;
    tmp_msg_0.deconflict_offset = 0.576737513071157;
    tmp_msg_0.accel_safe_margin = 0.6223568476094993;
    tmp_msg_0.accel_lim_x = 0.13987730456257874;
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
    msg.setTimeStamp(0.9515507263699249);
    msg.setSource(982U);
    msg.setSourceEntity(223U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.8881771324892964;
    msg.lon = 0.08058893776249032;
    msg.eta = 1023069725U;
    msg.duration = 2244U;

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
    msg.setTimeStamp(0.20672022251302435);
    msg.setSource(5702U);
    msg.setSourceEntity(208U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.22947168108771032;
    msg.lon = 0.42311911630708754;
    msg.eta = 3254422254U;
    msg.duration = 19958U;

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
    msg.setTimeStamp(0.22281447199153048);
    msg.setSource(35531U);
    msg.setSourceEntity(239U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.6710567019315067;
    msg.lon = 0.3926240336911071;
    msg.eta = 231020797U;
    msg.duration = 55094U;

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
    msg.setTimeStamp(0.003055084223251625);
    msg.setSource(58640U);
    msg.setSourceEntity(34U);
    msg.setDestination(45691U);
    msg.setDestinationEntity(194U);
    msg.plan_id = 16476U;

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
    msg.setTimeStamp(0.3042248509998676);
    msg.setSource(53097U);
    msg.setSourceEntity(36U);
    msg.setDestination(13170U);
    msg.setDestinationEntity(188U);
    msg.plan_id = 56261U;

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
    msg.setTimeStamp(0.2682168218130919);
    msg.setSource(60135U);
    msg.setSourceEntity(148U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(197U);
    msg.plan_id = 62057U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8263092337949007;
    tmp_msg_0.lon = 0.9635332205391556;
    tmp_msg_0.eta = 2614523784U;
    tmp_msg_0.duration = 14334U;
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
    msg.setTimeStamp(0.9558860488247894);
    msg.setSource(48157U);
    msg.setSourceEntity(57U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(84U);
    msg.type = 4U;
    msg.command = 110U;
    msg.settings.assign("SKGNDOVMIUDYNGMGFKAFRPGCCHUIPDOQUBUYUCTDFWMJRKYIGKCMVYTVXPHUEJJEQWBRFLABOSGWHLLEFYQXEPAKQSAJUNWYHLVDSEWWCSNRQTBFNVIVLXLSIGCECPOVATJXDQIMHKZVZXDMPSEZFLPYTGHASDUOJZBZNJMBKGOEQAQWYYQRMK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51913U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8817315358952446;
    tmp_tmp_msg_0_0.lon = 0.718842373997211;
    tmp_tmp_msg_0_0.eta = 3638402562U;
    tmp_tmp_msg_0_0.duration = 47498U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LIKYTXCJKXTTWDNVKHHNTSLAZRMEYAHAOHKODAZMXBYSEVSPTRWKMY");

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
    msg.setTimeStamp(0.9927679579189959);
    msg.setSource(48998U);
    msg.setSourceEntity(225U);
    msg.setDestination(230U);
    msg.setDestinationEntity(28U);
    msg.type = 192U;
    msg.command = 98U;
    msg.settings.assign("JJNSQPBWNULDZJLMMELAYOYVOSXZTCJHHRDGPBVXFNXSNERYCDGXVOSYQOMEXATWGVDZIOGBYZAKYRCYCKWDXAPZTCLKDZHGITXUCSAFCFRPLMQWJIBFQKGPKDOUOEIFHBWNCFQIRWTDOQXWPSKIXHIYLQQTUEMNHGKLEIYQNJVPWOHUDEEVBGAGBEJVGZXRHLRFFBNBTMRUIAKVSVZKHMMNOSWHUZRTK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7592U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.33517726336097287;
    tmp_tmp_msg_0_0.lon = 0.8461397950096764;
    tmp_tmp_msg_0_0.eta = 2319230173U;
    tmp_tmp_msg_0_0.duration = 53462U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JDODNBMAWLEWAKXFHHSHRFEEOPXYEBOUGOOGK");

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
    msg.setTimeStamp(0.9575391496657618);
    msg.setSource(56276U);
    msg.setSourceEntity(2U);
    msg.setDestination(43564U);
    msg.setDestinationEntity(130U);
    msg.type = 175U;
    msg.command = 211U;
    msg.settings.assign("UZOUMVZEQKHFDPXFXOKDUUYGYAXPCDQDVNKMJTLSBFOXMPNCOSLAHWQXITJKHFMVYXRCEPZWFAFSTEPNOUZZESSOYAVKEGPCGIL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65075U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GKUFZYAUITTBHAGDEAMXZNVQXQNUPNBSDDYHLBYODAWZHXAGBISIAUKJULWAVLXHIQSSVIRXFZPCKFAMDVFG");

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
    msg.setTimeStamp(0.01857100480234941);
    msg.setSource(30829U);
    msg.setSourceEntity(105U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(149U);
    msg.state = 1U;
    msg.plan_id = 42158U;
    msg.wpt_id = 249U;
    msg.settings_chk = 5689U;

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
    msg.setTimeStamp(0.24826766257332222);
    msg.setSource(52576U);
    msg.setSourceEntity(181U);
    msg.setDestination(21193U);
    msg.setDestinationEntity(120U);
    msg.state = 116U;
    msg.plan_id = 56173U;
    msg.wpt_id = 214U;
    msg.settings_chk = 50601U;

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
    msg.setTimeStamp(0.5715624000668772);
    msg.setSource(35057U);
    msg.setSourceEntity(20U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(204U);
    msg.state = 129U;
    msg.plan_id = 46377U;
    msg.wpt_id = 184U;
    msg.settings_chk = 47453U;

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
    msg.setTimeStamp(0.9615428973087814);
    msg.setSource(63652U);
    msg.setSourceEntity(168U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(171U);
    msg.uid = 128U;
    msg.frag_number = 250U;
    msg.num_frags = 251U;
    const signed char tmp_msg_0[] = {105, 54, 10, -53, -41, -71, -99, -58, 106, -127, -122, -55, -102, -32, 79, -32, -103, -10, 99, -8, 65, -19, 114, 71, -66, 97, -85, 9, 47, -84, 27, -100, -127, -38, 59, 99, 47, 60, 61, 54, 54, 34, 33, -122, 49, 5, 94, 54, 33, -96, 115, 24, 79, -9, -29, -2, -106, -87, -72, 110, -71, 1, -71, 123, 89, -92, -112, 99, -103, -103, 21, 108, -70, -44, -13, 25, 87, -43, -64, 95, 105, -51, 102, 7, 86, -4, -98, -16, 39, -70, 122, 17, -79, -94, -15, 122, 125, -46, 2, 26, 50, -81, 113, 48, 21, 35, -68, -127, -113, -8, 65, -88, -38, 120, 25, -1, -103, -74, -128, 17, -92, 76, 22, -127, 44, -24, -94, -107, 115, -123, 8, 3, -48, 54, 68, 16, -25, 0, -9, -75, -70, -83, -63, -88, -54, 75, -123, -115, -11, -48, -117, -44, -94, 94, 22, 1, -95, 82, -9, 125, 87, -59, -91, -90, -69, -112, -120, 72, -54, 73, -103, 45, -77, -26, 36, 104, 43, -5, 34, -12, 103, -104, 107, 113, -50, 12, 57, -3, 118, 49, -39, 67, -16, 83, 113};
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
    msg.setTimeStamp(0.7176500092741529);
    msg.setSource(46723U);
    msg.setSourceEntity(157U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(202U);
    msg.uid = 30U;
    msg.frag_number = 230U;
    msg.num_frags = 194U;
    const signed char tmp_msg_0[] = {66, 123, -16, 45, 111, 78, -58, 65, 36, 15, 67};
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
    msg.setTimeStamp(0.9335456752497635);
    msg.setSource(17880U);
    msg.setSourceEntity(122U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(191U);
    msg.uid = 118U;
    msg.frag_number = 224U;
    msg.num_frags = 76U;
    const signed char tmp_msg_0[] = {115, 116, 119, -105, -72, -32, -74, 86, 98, -117, -52, 114, 10, 110, 98, -21, 5, 74, 106, -17, -27, -69, -22, 95, 75, 96, -18, 35, -82, 12, -84, -6, -78, -101, -31, 55, 60, -111, -121, 87, -12, -58, -43, 26, -118, -31, 33};
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
    msg.setTimeStamp(0.12899400835819175);
    msg.setSource(42602U);
    msg.setSourceEntity(53U);
    msg.setDestination(42328U);
    msg.setDestinationEntity(206U);
    msg.content_type.assign("HMSESNMTDVRCEWVGOYYVMBPONRGMYCKEYJCYNICRYGAVGCLHPXQWTSLJOTVDZUUCIERECNGHWIUZAJWZUNGPOTKRMMVRSXYGKKBDWYCINIBSZCKCQBNBEAATDIPLNQQGKAZUUKONIFFLSDQZXAISFLPOWHMAJSHPEMUDKWXXTRWVMUFRXHBLOOGTALRKGIZKQXSLVVZJRBYT");
    const signed char tmp_msg_0[] = {94, -123, 30, -10, 66, -69, 37, 15, 126, -116, -109, 4, 34, -124, -90, -6, -87, 63, -75, 122, 91, -60, -83, -12, -25, 123, -118, -94, -19, -116, 19, -99, -34, 116, 74, -57, 103, 5, 86, -40, -60, 124, 87, -3, 3, -23, 45, -95, 84, 114, 125, -76, 113, -128, 52, -30, -11, 33, -56, 110, -64, 121, -32, -5, -110, 56, -120, 79, 57, -54, -1, 116, 8, -78, -45, 16, -124, 14, -26, 66, -104, 91, 69, -13, 121, -124, -17, -104, 109, 75, -99, -104, -89, 107, -94, -55, 14, -55, 79, -43, 12, 54, -75, 16, 28, 27, -71, -30, -120, 53, -87, -37, 70, -4, 96, 38, -119, 126, 17, 29, -33, -44, -49, -11, 53, 69, 116, 78, 27, 112, -90, 65, 66, -113, -87, 110, 21, -10, 61, -102, -43, 76, -113, 1, 10, -125, 20, 83, 78, 30, -24, 79, 71, -75, 72, -125, 48, 34, 29, -39, -73, 101, 69, 26, 115, 82, 60, 45, -33, -17, -35, -108, -52, 111, -68, -95, -38, 59, 16, 96, -22, -70, 45, 92, 48, -38, -115, -69, 35, 55, 35, 106, 17, -11, 33, 107, 94, -96, -34, 29, -14, -75, 23, -98, 43, 19, -51, 80, 56};
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
    msg.setTimeStamp(0.7546960866044632);
    msg.setSource(56052U);
    msg.setSourceEntity(105U);
    msg.setDestination(51513U);
    msg.setDestinationEntity(73U);
    msg.content_type.assign("ZSLCIJDXZSGZFFNYOVRMTTZFDACVFESDPCNMOMVUHMGQHVVITOBCXEUNIDPESZMTQVQEHIUPHBHLJQIIY");
    const signed char tmp_msg_0[] = {14, -1, -55, -36, 110, 95, -125, -54, 99, 50, -90, -1, -22, -116, -117, 11, 117, 105, 88, -93, 20, -68, 112, -52, -86, 31, -40, 26, -47, -24, -49, 7, 20, -128, -84, 102, 11, -41, 7, 26, -110, -53, 61, -81, 122, 45, 29, 115, 77, -98, 72, 66, -118, -55, 75, 70, 70, -90, 10, -98, 70, -103, -25, -77, 122, 22, -60, -124, -113, -15, -53, 59, -85, -50, -22, 37, 64, -9, 6, 84, 38, -20, -127, 53, -84, 22, -99, -27, 117, 67, 112, -85, 125, 95, -68, 86, -77, 54, 3, -127, -9, -120, -74};
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
    msg.setTimeStamp(0.6680570574551873);
    msg.setSource(20907U);
    msg.setSourceEntity(10U);
    msg.setDestination(46213U);
    msg.setDestinationEntity(137U);
    msg.content_type.assign("VJVRVMGQPHODENRWRINIIAXDIAAXMARFYEQRMJXVLSVQSTDVUIYZCSELLTXKTOLCETPTOTBQGWPG");
    const signed char tmp_msg_0[] = {-25, -68, -77, 48, 40, -108, -15, 76, 53, -100, 88, -111, -44, 72, -30, 122, 125, -34, -54, 101, 105, 108, -63, 124, -57, -7, 41, 25, -76, 27, -62, 0, -46, -42, -80, -39, -2, -63, 72, 99, 2, -55, 46, 86, -4, -18, -113, 0, 26, 67, 20, 53, 50, 96, 111, 1, 97, -109, 106, -34, 109, -17, -125, -6, 51, 64, 84, 43, -12, 69, 45, 5, -36, -126, 79, 118, 63, 104, 107, 115, 30, 81, -86, -63, -19, 15, -119, -37, -6, -60, 70, -34, -47, -125, 4, 116, 10, -70, -51, 29, -44, -82, -102, -11, 75, -88, -67, -117, 122, -10, 40, -92, 27, -34, 110, -68, -79, 34, -17, -44, 125, 87, -62, 81, 17, -127, 84, -107, 16, 103, -36, 95, -55, 63, -38};
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
    msg.setTimeStamp(0.39623454703278216);
    msg.setSource(21458U);
    msg.setSourceEntity(5U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.11219647665700361);
    msg.setSource(43518U);
    msg.setSourceEntity(75U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.92189557585896);
    msg.setSource(8786U);
    msg.setSourceEntity(235U);
    msg.setDestination(32211U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.5311118992247528);
    msg.setSource(50919U);
    msg.setSourceEntity(120U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(77U);
    msg.target = 43690U;
    msg.bearing = 0.6166743419759212;
    msg.elevation = 0.5343706270012916;

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
    msg.setTimeStamp(0.7381051282076811);
    msg.setSource(18485U);
    msg.setSourceEntity(35U);
    msg.setDestination(35929U);
    msg.setDestinationEntity(13U);
    msg.target = 48615U;
    msg.bearing = 0.009623906116024039;
    msg.elevation = 0.7503226124685204;

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
    msg.setTimeStamp(0.38018008938247283);
    msg.setSource(63904U);
    msg.setSourceEntity(145U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(186U);
    msg.target = 23201U;
    msg.bearing = 0.16732257341844248;
    msg.elevation = 0.8157822341791977;

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
    msg.setTimeStamp(0.09907734789238287);
    msg.setSource(29671U);
    msg.setSourceEntity(6U);
    msg.setDestination(3811U);
    msg.setDestinationEntity(116U);
    msg.target = 15093U;
    msg.x = 0.571819518086661;
    msg.y = 0.6360535919943462;
    msg.z = 0.5546792687784384;

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
    msg.setTimeStamp(0.49143727360920586);
    msg.setSource(36684U);
    msg.setSourceEntity(159U);
    msg.setDestination(36673U);
    msg.setDestinationEntity(84U);
    msg.target = 22660U;
    msg.x = 0.6804357239678284;
    msg.y = 0.1048886391346332;
    msg.z = 0.6674147391511908;

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
    msg.setTimeStamp(0.8893826517273654);
    msg.setSource(11071U);
    msg.setSourceEntity(41U);
    msg.setDestination(50026U);
    msg.setDestinationEntity(238U);
    msg.target = 49131U;
    msg.x = 0.46622382486738034;
    msg.y = 0.2546738202757537;
    msg.z = 0.6535808022660147;

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
    msg.setTimeStamp(0.7954000589372487);
    msg.setSource(58835U);
    msg.setSourceEntity(93U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(141U);
    msg.target = 46302U;
    msg.lat = 0.04576481992736092;
    msg.lon = 0.5965988985922764;
    msg.z_units = 71U;
    msg.z = 0.042644324106795195;

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
    msg.setTimeStamp(0.18303697226270332);
    msg.setSource(54729U);
    msg.setSourceEntity(14U);
    msg.setDestination(11173U);
    msg.setDestinationEntity(126U);
    msg.target = 27670U;
    msg.lat = 0.4207948070037739;
    msg.lon = 0.19393186027733;
    msg.z_units = 21U;
    msg.z = 0.6220953872711024;

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
    msg.setTimeStamp(0.06160234779973994);
    msg.setSource(10949U);
    msg.setSourceEntity(204U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(54U);
    msg.target = 2322U;
    msg.lat = 0.6963515868703968;
    msg.lon = 0.030799291780110982;
    msg.z_units = 93U;
    msg.z = 0.9872879228630345;

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
    msg.setTimeStamp(0.6055924353024106);
    msg.setSource(34025U);
    msg.setSourceEntity(116U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(166U);
    msg.locale.assign("DULFVKTEPARDBCFFAPAIWFSVNDNQTBDLYIWXMBUIUWAODVPCZIRGYHCRLODXJYBMXTYRKLNJOBZZOSAVXFJGPSXJMEQ");
    const signed char tmp_msg_0[] = {-91, 14, 93, -115, 91, -30, 106, 54, -75, 103, 106, -42, 64, 40, -50, -95, -45, -113, 76, 6, -77, -46, -30, -90, -127, 63, 8, -31, 72, 60, 60, -66, 90, 109, -35, -88, -66, -65, 21, 53, 65, -96, -3, -92, -33, -69, 56, -5, -85, 13, 74, 70, 85, -113, 11, -90, -11, -43, 27, -99, -106, 99, 27, -127, -83, 82, 22, -72, 75, 114, 126, 13, -2, -79, 52, 97, -17, 27, 68, -120, 63, 5, -128, -102, -78, -124, 24, 35, 47, 17, 104, 123, -27, -21, 26, 16, -70, 109, -39, 92, -107, -30, -60, -30, -18, -123, 34, -35, 13, 19, -89, -79, 57, 60, 25, -28, -82, 75, 6, 123, -52, 12, 78, -41, 54, -27, -63, -34, -23, -120, 17, 16, 87, -70, -44, -6, 38, 120, 79, -61, -1, 43, 115, 120, -108, 68, 25, 47, -95, -94, 12, 2, 61, 28, 96, -10, 0, -45, 12, -96, 28, 65, 38, -44, -40, -89, -68, -114, 30, 104, -90, -19, -100, 57, -58, -45, 120, 51, 64, 14, -82, -30, -59, 30, -9, -25, -6, 70, 83, -51, 88, -34, 58, -72, 11, -40};
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
    msg.setTimeStamp(0.040934920760654525);
    msg.setSource(32290U);
    msg.setSourceEntity(20U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(205U);
    msg.locale.assign("JGOKAXDHGCLIVYUJLZWTMCUKNVUKACZRSFAABGBMTWQ");
    const signed char tmp_msg_0[] = {106, -108, -47, 41, 70, 35, -116, -17, 19, -57, 6, 22, -43, 3, 38, 67, 44, -49, -80, 108, 29, 44, -124, -8, -33, 12, -88, -86, -66, 115, -84, 123, -42, 73, 6, 120, -119, 35, 7, -31, 72, -95, -21, 33, -8, 82, 65, -122, 73, 23, 83, 69, 119, -23, -7, 13, -62, -89, 95, 72, -70, 58, 38, 116, -92, -65, -39, -86, 31, 63, -10, 42, 69, -21, -21, 18, -50, 30, 94, -12, 29, -27, -8, 101, 56, -63, -58, -62, 103, -33, -8, -2, -73, -60, 41, 13, -63, 24, -107, 70, 18, 95, 124, 44, 4, 115, 46, 118, -34, -46, 30, -8, 104, 40, 60, -18, -71, -73, 59, -127, 29, 120, 91};
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
    msg.setTimeStamp(0.9667140017904516);
    msg.setSource(11669U);
    msg.setSourceEntity(92U);
    msg.setDestination(30736U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("NJXFUKDFBEFGBZOUWNECAPKIVFSDARFYDQDIFUTYOHLVJIYHYEDOUEVNQNEKKGTWXIZSWMKNCBIHXEVTEOQMSJDJUCTAYLWSLCUMGCNUJRASZXQOEBBGDIZRMGRDWNISFVWFTXXMLLAVDHFLMRBDYEFPZPRJLAGTPRWHOJMHAIQRSPPHTVCPUZEMOKLBKQPUUJNQGQJT");
    const signed char tmp_msg_0[] = {17, 43, 99, 125, -77, 52, -88, -122, -89, -81, 119, -88, -57, -36, 40, -102, 116, 103, -49, -104, -7, -53, -95, 39, -110, 34, 63, -51, -83, -99, -49, 71, 114, -120, -85, -108, 92, -123, 1, -28, -49, 36, -77, 113, 73, 37, 45, 93, 13, -113, 123, 125, -110, -17, -73, 62, 52, 74, -33, -111, 48, -118, 36, -13, -1, 74, -55, 34, -119, -110, -127, -46, -114, 66, 68, 126, 9, -80, -34, -62, 36, 22, -82, -77};
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
    msg.setTimeStamp(0.5686401355844224);
    msg.setSource(28496U);
    msg.setSourceEntity(56U);
    msg.setDestination(60938U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.2668761348336157);
    msg.setSource(31323U);
    msg.setSourceEntity(19U);
    msg.setDestination(65029U);
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
    msg.setTimeStamp(0.12983646203145438);
    msg.setSource(29259U);
    msg.setSourceEntity(178U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.8551770375100409);
    msg.setSource(7963U);
    msg.setSourceEntity(83U);
    msg.setDestination(57273U);
    msg.setDestinationEntity(75U);
    msg.camid = 157U;
    msg.x = 26361U;
    msg.y = 34907U;

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
    msg.setTimeStamp(0.08931272789804412);
    msg.setSource(11233U);
    msg.setSourceEntity(127U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(63U);
    msg.camid = 43U;
    msg.x = 42269U;
    msg.y = 23624U;

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
    msg.setTimeStamp(0.5154981576743489);
    msg.setSource(38115U);
    msg.setSourceEntity(161U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(123U);
    msg.camid = 58U;
    msg.x = 27375U;
    msg.y = 38870U;

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
    msg.setTimeStamp(0.2069471592605201);
    msg.setSource(14530U);
    msg.setSourceEntity(124U);
    msg.setDestination(26051U);
    msg.setDestinationEntity(211U);
    msg.camid = 146U;
    msg.x = 17536U;
    msg.y = 60949U;

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
    msg.setTimeStamp(0.3690854400145249);
    msg.setSource(2163U);
    msg.setSourceEntity(20U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(179U);
    msg.camid = 243U;
    msg.x = 32738U;
    msg.y = 14U;

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
    msg.setTimeStamp(0.7534030899116562);
    msg.setSource(65472U);
    msg.setSourceEntity(67U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(175U);
    msg.camid = 66U;
    msg.x = 3425U;
    msg.y = 47422U;

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
    msg.setTimeStamp(0.17637292010108507);
    msg.setSource(50837U);
    msg.setSourceEntity(187U);
    msg.setDestination(44693U);
    msg.setDestinationEntity(108U);
    msg.tracking = 206U;
    msg.lat = 0.01709630118494543;
    msg.lon = 0.3545905089640222;
    msg.x = 0.9501374531360126;
    msg.y = 0.27439092021221;
    msg.z = 0.55836797110466;

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
    msg.setTimeStamp(0.11529167045446465);
    msg.setSource(51250U);
    msg.setSourceEntity(64U);
    msg.setDestination(58108U);
    msg.setDestinationEntity(114U);
    msg.tracking = 28U;
    msg.lat = 0.262853047993332;
    msg.lon = 0.14460942019630174;
    msg.x = 0.08063637427376835;
    msg.y = 0.14050918517888944;
    msg.z = 0.8193080401583359;

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
    msg.setTimeStamp(0.80996532096237);
    msg.setSource(47436U);
    msg.setSourceEntity(254U);
    msg.setDestination(50658U);
    msg.setDestinationEntity(186U);
    msg.tracking = 236U;
    msg.lat = 0.9580115445060088;
    msg.lon = 0.36714874001090214;
    msg.x = 0.7216825749048097;
    msg.y = 0.6428845532931742;
    msg.z = 0.05981225180920413;

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
    msg.setTimeStamp(0.6340094713378777);
    msg.setSource(21691U);
    msg.setSourceEntity(136U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(102U);
    msg.target.assign("IMQVUXMXPZVKDONHTZOYPHABOEDLVBV");
    msg.lbearing = 0.904652828908464;
    msg.lelevation = 0.5981936046331415;
    msg.bearing = 0.7482655018195787;
    msg.elevation = 0.7280228420409929;
    msg.phi = 0.25165982736406844;
    msg.theta = 0.21666153280919564;
    msg.psi = 0.032445539066724205;
    msg.accuracy = 0.44813168467823516;

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
    msg.setTimeStamp(0.06288687891944233);
    msg.setSource(44115U);
    msg.setSourceEntity(147U);
    msg.setDestination(26300U);
    msg.setDestinationEntity(170U);
    msg.target.assign("ABOZARKAUUOWENKNMPIDREGFDZFAEVXEOZFLSRPTNPGMZQCWNMMYBEAGFKHYXCNZFYURJHNGZJHEMDVGUPCXFRTXJNQIYARYLBBVL");
    msg.lbearing = 0.4379785332776829;
    msg.lelevation = 0.937642282391305;
    msg.bearing = 0.3272789209151835;
    msg.elevation = 0.7612446353864606;
    msg.phi = 0.8925459208746107;
    msg.theta = 0.8876869578428168;
    msg.psi = 0.7361511258600922;
    msg.accuracy = 0.5504617238836866;

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
    msg.setTimeStamp(0.39544819277570875);
    msg.setSource(28765U);
    msg.setSourceEntity(198U);
    msg.setDestination(3545U);
    msg.setDestinationEntity(252U);
    msg.target.assign("ZALGYRYVPJWDLRFONXQJNDVDQYJNAKGUOLKAKUJNIRSOSLMOHDBPISEDWCIFZZLDUXHUHNWAZBVKSEHZRPVMAFMZEHXVGCSWTKTBBLKODAQYWICQHCKUAUPFJAXCGPRUYFJSEIRHAGXLOEYNYBVGPVWMPYMIYNRVXTVDEJHQMZUGRJFECEKTMEQLUDIWWTOBBBDTCTRVFPXCMPNKNKEISQXQRFGMYXXGHTAOZCWGOP");
    msg.lbearing = 0.8442034674220441;
    msg.lelevation = 0.15595999541701144;
    msg.bearing = 0.3082296585151105;
    msg.elevation = 0.8202922357157841;
    msg.phi = 0.8601749509951669;
    msg.theta = 0.41805320232390497;
    msg.psi = 0.8088351014838253;
    msg.accuracy = 0.6200424513304469;

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
    msg.setTimeStamp(0.21445563155195724);
    msg.setSource(31084U);
    msg.setSourceEntity(163U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(240U);
    msg.target.assign("ONQJQTGKRLRAXHIFVHETMTOQPCYZOPZDUETNJPHODRIMEKAVJTZVMNHDWPWJSSWZJOJXXAZDNGYVDCLLVOJVFRXUZIIODNBSQYKNNSBISLJIDWTW");
    msg.x = 0.761639758892822;
    msg.y = 0.14357506417724852;
    msg.z = 0.38754352667950076;
    msg.n = 0.9660891215211224;
    msg.e = 0.013077205887624177;
    msg.d = 0.10058497821989443;
    msg.phi = 0.43320995924059114;
    msg.theta = 0.29319821789158607;
    msg.psi = 0.48304004861095073;
    msg.accuracy = 0.8802377285966289;

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
    msg.setTimeStamp(0.9062273475317715);
    msg.setSource(28537U);
    msg.setSourceEntity(220U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(68U);
    msg.target.assign("WRHABDWPBUHRUTOCTZWNYKEYELWFEZWZTXYBIHKHXNBALXOLMELFRKMDQLPBXGMPSTMREYUHYGCHVOMGA");
    msg.x = 0.05895607122851665;
    msg.y = 0.36717162618037635;
    msg.z = 0.7773482790714967;
    msg.n = 0.47250569395325737;
    msg.e = 0.2687077105926422;
    msg.d = 0.24754982553722493;
    msg.phi = 0.5311967046780137;
    msg.theta = 0.009313251321618865;
    msg.psi = 0.738057126571012;
    msg.accuracy = 0.08433489190142895;

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
    msg.setTimeStamp(0.7945282447249721);
    msg.setSource(19733U);
    msg.setSourceEntity(165U);
    msg.setDestination(62149U);
    msg.setDestinationEntity(208U);
    msg.target.assign("FJKNRRVCTKOHKEOZKSAMNOCPJBWWNDFDZ");
    msg.x = 0.7014727013671651;
    msg.y = 0.19226180202931553;
    msg.z = 0.6428435892522287;
    msg.n = 0.34577632909361244;
    msg.e = 0.34108683500619374;
    msg.d = 0.16591393918297537;
    msg.phi = 0.08622356686774924;
    msg.theta = 0.867706877410162;
    msg.psi = 0.6390480810610776;
    msg.accuracy = 0.8846548304407504;

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
    msg.setTimeStamp(0.3903130513230473);
    msg.setSource(47891U);
    msg.setSourceEntity(69U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(29U);
    msg.target.assign("UYHQYSHRMOPAAIUUFPTGRTXDVKKOMGSUYXKDSJYRWSMIGXMHLQXTLRLNXJXDPCFYAZDNOGETCELKYAOTAILWAFJRNGEDCNYMRAFUROXEVQVDQJCVHGGAVQJWVZUUWJSACOZZCHNTMOHTBHMEPOMWUYDWZVIFJGJZYPBNVUKBBZSBYCZNGIKPMPI");
    msg.lat = 0.020190185218915913;
    msg.lon = 0.9155824538690988;
    msg.z_units = 108U;
    msg.z = 0.567959177279591;
    msg.accuracy = 0.8079944758392774;

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
    msg.setTimeStamp(0.7890106070907394);
    msg.setSource(39507U);
    msg.setSourceEntity(27U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(61U);
    msg.target.assign("XGNEPOFUCMBGKMNIHLPFOULJQDHZEGAJPCDPICDLTLVUROZIEGNXSKCAJFMDFFBWQQRWOHZBTVGMANALHSEYJEEPHNQPYKSVHDDXWYTBTKXM");
    msg.lat = 0.36274876683252566;
    msg.lon = 0.5678516118234692;
    msg.z_units = 80U;
    msg.z = 0.2668240683655305;
    msg.accuracy = 0.2827626715584616;

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
    msg.setTimeStamp(0.003297618621975751);
    msg.setSource(26710U);
    msg.setSourceEntity(62U);
    msg.setDestination(55691U);
    msg.setDestinationEntity(84U);
    msg.target.assign("ABKPQJPUKCOMDHIZHQEANUPUVYSDNPTZEPALRFEPICWSKBXCRTHGZSKUMZWD");
    msg.lat = 0.2919226524012545;
    msg.lon = 0.4068556705243518;
    msg.z_units = 132U;
    msg.z = 0.7105678266574122;
    msg.accuracy = 0.4433727992493679;

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
    msg.setTimeStamp(0.8515218786410954);
    msg.setSource(40775U);
    msg.setSourceEntity(231U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(60U);
    msg.name.assign("OMILSQLJYKAONDWNSPMTJJBWMFTVZPNJSUOHGKHXHUHOSDKFZEOCYXFWSUGLFXDCLIIJZCTQTKUDSXMQGLCCEMQNIYR");
    msg.lat = 0.11874346640078337;
    msg.lon = 0.6773962431636195;
    msg.z = 0.5523178280560087;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.12743458974213184);
    msg.setSource(32073U);
    msg.setSourceEntity(117U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(134U);
    msg.name.assign("TQSZIBKSUIHWINMUMJDFHYKGHDQLVTVJJOFJRCIE");
    msg.lat = 0.8106141513592944;
    msg.lon = 0.06639340569728025;
    msg.z = 0.13662603437385124;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.8559292122936454);
    msg.setSource(47998U);
    msg.setSourceEntity(63U);
    msg.setDestination(57764U);
    msg.setDestinationEntity(109U);
    msg.name.assign("ZABTJWMURFXCFKYWRWOATNSLFDIHCWYSGDEXJBGXOGWOVHHQUQUUJUZEFJPPAVEIQHDHAJDDTXONJRPZSPKALELIIWQFBCGBMIMSGQKKDMKTMCBTIFJEYXBVKAVWNCUBOCOLFVQLMDRXKT");
    msg.lat = 0.796547687047428;
    msg.lon = 0.7856606866153636;
    msg.z = 0.5533796093862865;
    msg.z_units = 129U;

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
    msg.setTimeStamp(0.04176350158299158);
    msg.setSource(3903U);
    msg.setSourceEntity(165U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(201U);
    msg.op = 52U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QRGBHWHALKXCINJSCRNZRNQZYBZTXJSPWZDILDEJGDFBHBITMUGVIDPMOHKGSJEERCUVOURNSIPNBKENVLATHSIMWYYLLWOJLXGWJJMFEKCONSGMKBOQPOHOFQMRBWEATWZYMUPVKXFACEDNFQXVVKOTPYDWFHUDWZJIXPFBVKEADUOSXUYMNDAEJGLKZTTKTT");
    tmp_msg_0.lat = 0.9444820454945568;
    tmp_msg_0.lon = 0.40169961555718736;
    tmp_msg_0.z = 0.8871834269741146;
    tmp_msg_0.z_units = 233U;
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
    msg.setTimeStamp(0.5030567817646137);
    msg.setSource(7600U);
    msg.setSourceEntity(183U);
    msg.setDestination(47193U);
    msg.setDestinationEntity(216U);
    msg.op = 233U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QRDGLXLECOZHWMQLNKQJTSYPABWRIXPWOLQZYNTISQGRJJAMMRCZHDTXJUUTLRWZYBGVZQGAFADZERGHINFUVEYCZHYITNDRMIUMOUDAUVJOPOSVNTCSIHXCPNNWAAKVZMYEJBMDECPHFKOSWEKEVDLGGXOXKICULBRJJXKAJISQYSTGMWNSYYWGCUUBXBPHNFOWHRTSLTEBEFJKLUWXBKK");
    tmp_msg_0.lat = 0.12062063245235177;
    tmp_msg_0.lon = 0.39939176277106336;
    tmp_msg_0.z = 0.4825373016907072;
    tmp_msg_0.z_units = 41U;
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
    msg.setTimeStamp(0.8238805428859869);
    msg.setSource(37995U);
    msg.setSourceEntity(230U);
    msg.setDestination(2348U);
    msg.setDestinationEntity(139U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.2918554088374118);
    msg.setSource(64408U);
    msg.setSourceEntity(111U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0031537386505448017;
    msg.type = 111U;

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
    msg.setTimeStamp(0.39889141876807743);
    msg.setSource(49587U);
    msg.setSourceEntity(80U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(3U);
    msg.value = 0.15849804694719338;
    msg.type = 137U;

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
    msg.setTimeStamp(0.7256677337389446);
    msg.setSource(32086U);
    msg.setSourceEntity(29U);
    msg.setDestination(35626U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9718096637248084;
    msg.type = 131U;

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
    msg.setTimeStamp(0.030093405088553626);
    msg.setSource(20527U);
    msg.setSourceEntity(122U);
    msg.setDestination(31118U);
    msg.setDestinationEntity(155U);
    msg.value = 0.02323094177464824;

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
    msg.setTimeStamp(0.6361099859780202);
    msg.setSource(59719U);
    msg.setSourceEntity(104U);
    msg.setDestination(13372U);
    msg.setDestinationEntity(10U);
    msg.value = 0.07730711624608566;

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
    msg.setTimeStamp(0.8432164116067077);
    msg.setSource(31189U);
    msg.setSourceEntity(62U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(4U);
    msg.value = 0.8741346451742255;

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
    msg.setTimeStamp(0.43328574083501525);
    msg.setSource(22281U);
    msg.setSourceEntity(59U);
    msg.setDestination(8066U);
    msg.setDestinationEntity(101U);
    msg.timestamp_last_service = 0.14175739249093355;
    msg.time_next_service = 0.5633563895541255;
    msg.time_motor_next_service = 0.8186632108290564;
    msg.time_idle_ground = 0.7396975352983183;
    msg.time_idle_air = 0.5548382440568956;
    msg.time_idle_water = 0.40849484939930436;
    msg.time_idle_underwater = 0.0781077831112339;
    msg.time_idle_unknown = 0.02111191569176829;
    msg.time_motor_ground = 0.27237723189832763;
    msg.time_motor_air = 0.14036203742687947;
    msg.time_motor_water = 0.8495708150715113;
    msg.time_motor_underwater = 0.5060601269630775;
    msg.time_motor_unknown = 0.7208181399856984;
    msg.rpm_min = -5491;
    msg.rpm_max = 4146;
    msg.depth_max = 0.30961279504354955;

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
    msg.setTimeStamp(0.49239513311186844);
    msg.setSource(55516U);
    msg.setSourceEntity(217U);
    msg.setDestination(36406U);
    msg.setDestinationEntity(254U);
    msg.timestamp_last_service = 0.4854894261289534;
    msg.time_next_service = 0.9674009019142158;
    msg.time_motor_next_service = 0.6866679338491439;
    msg.time_idle_ground = 0.4022048535738315;
    msg.time_idle_air = 0.723260528418671;
    msg.time_idle_water = 0.4966838499316433;
    msg.time_idle_underwater = 0.46646300797432494;
    msg.time_idle_unknown = 0.6400466564276007;
    msg.time_motor_ground = 0.6154213455966233;
    msg.time_motor_air = 0.1072038322043306;
    msg.time_motor_water = 0.4182817040446082;
    msg.time_motor_underwater = 0.11902415966094404;
    msg.time_motor_unknown = 0.7597317698488623;
    msg.rpm_min = -6472;
    msg.rpm_max = -29523;
    msg.depth_max = 0.7422800360807377;

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
    msg.setTimeStamp(0.9756630580628664);
    msg.setSource(58531U);
    msg.setSourceEntity(0U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(35U);
    msg.timestamp_last_service = 0.6686481071789611;
    msg.time_next_service = 0.6936273863128876;
    msg.time_motor_next_service = 0.2620608621114393;
    msg.time_idle_ground = 0.9112441072975311;
    msg.time_idle_air = 0.6461703045967719;
    msg.time_idle_water = 0.425946400538436;
    msg.time_idle_underwater = 0.22966872769830204;
    msg.time_idle_unknown = 0.6595799845121112;
    msg.time_motor_ground = 0.6867606918800411;
    msg.time_motor_air = 0.1907649939314271;
    msg.time_motor_water = 0.7580307621981389;
    msg.time_motor_underwater = 0.3224408077988712;
    msg.time_motor_unknown = 0.09131436385522518;
    msg.rpm_min = -26123;
    msg.rpm_max = 21672;
    msg.depth_max = 0.37332368103656954;

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
    msg.setTimeStamp(0.872202806898161);
    msg.setSource(56785U);
    msg.setSourceEntity(224U);
    msg.setDestination(54143U);
    msg.setDestinationEntity(249U);
    msg.severity = 204U;
    msg.text.assign("WUWJHDEDDNMZJYQYGKGXRNCXRNUTIUGJYUPSLSFPWLOVSWNCETRMEFIPDOXPIQWSXCZQATHBGOAXKLVEQIMCAVZDMHGHVQKZMCKIYASIEJMTJUTDLLK");

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
    msg.setTimeStamp(0.6354338210360846);
    msg.setSource(24362U);
    msg.setSourceEntity(114U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(251U);
    msg.severity = 163U;
    msg.text.assign("FAQJTBJGBGSBWUAKHXNXJCGMLZBXFINAXKPOXLPHSQEKJWKWLQTZUPFVHHOVGNMFSMUTRWOORYDEHBDJNPLCFCOEHSCFMJIUWMFRZDEKMWTJSLGYHGEVPJEDOGSCCICYQNDCJMKRRTXGIINVICKZPUBTWTLQQUDDWAXXBOFEKUSFKEDYYDTNFIYMBXVRZPNUXDURTISSHRAAQLQMLZASYHEVWVZAJZ");

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
    msg.setTimeStamp(0.3870482788896773);
    msg.setSource(60470U);
    msg.setSourceEntity(215U);
    msg.setDestination(36497U);
    msg.setDestinationEntity(60U);
    msg.severity = 200U;
    msg.text.assign("OENDCQXCNMKVRTZWHDQHEHNDSWLTSXYAEQQXJOLRPHQJWCUAFJCDJDOCYERCSHYUMYWURHSIRTKOWRGJINTSPJGYHEFZMXUGUKPDXVQEBIBBRACFKDUXDBKCVBYXFYLTVLALIUZNBMZVAY");

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
    msg.setTimeStamp(0.1268367614924676);
    msg.setSource(39549U);
    msg.setSourceEntity(103U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(137U);
    msg.channel = -70;
    msg.value = -742798141;
    msg.gain = 15U;

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
    msg.setTimeStamp(0.40538544318932024);
    msg.setSource(61532U);
    msg.setSourceEntity(215U);
    msg.setDestination(59455U);
    msg.setDestinationEntity(142U);
    msg.channel = -53;
    msg.value = 1287738120;
    msg.gain = 174U;

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
    msg.setTimeStamp(0.7332404940286538);
    msg.setSource(4203U);
    msg.setSourceEntity(171U);
    msg.setDestination(49487U);
    msg.setDestinationEntity(210U);
    msg.channel = 38;
    msg.value = 158317130;
    msg.gain = 10U;

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
    msg.setTimeStamp(0.22972872153553647);
    msg.setSource(39860U);
    msg.setSourceEntity(87U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(240U);
    msg.ch01 = 0.5381136234561469;
    msg.ch02 = 0.992641742451393;
    msg.ch03 = 0.23776086502822802;
    msg.ch04 = 0.7135433185652658;
    msg.ch05 = 0.46372325003373127;
    msg.ch06 = 0.05301371580715575;
    msg.ch07 = 0.781580108311266;
    msg.ch08 = 0.8280540698974342;
    msg.ch09 = 0.0523551197982125;
    msg.ch10 = 0.45701351691882297;
    msg.ch11 = 0.056058016260643106;
    msg.ch12 = 0.6679048992462957;
    msg.ch13 = 0.6710743265744172;
    msg.ch14 = 0.451368476601398;
    msg.ch15 = 0.47901159959496664;
    msg.ch16 = 0.9484871048953869;

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
    msg.setTimeStamp(0.28555312932957577);
    msg.setSource(51874U);
    msg.setSourceEntity(148U);
    msg.setDestination(42076U);
    msg.setDestinationEntity(100U);
    msg.ch01 = 0.6987651700840628;
    msg.ch02 = 0.4865530374117236;
    msg.ch03 = 0.5386477635915724;
    msg.ch04 = 0.6764777898396922;
    msg.ch05 = 0.4394719708900595;
    msg.ch06 = 0.915950217115907;
    msg.ch07 = 0.17280102714409984;
    msg.ch08 = 0.8994128507870655;
    msg.ch09 = 0.36948273428173073;
    msg.ch10 = 0.40167226011044743;
    msg.ch11 = 0.7047944121977131;
    msg.ch12 = 0.12758336288275895;
    msg.ch13 = 0.479705945143004;
    msg.ch14 = 0.21958350563247808;
    msg.ch15 = 0.25237081526837934;
    msg.ch16 = 0.5671931266184241;

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
    msg.setTimeStamp(0.468925359162052);
    msg.setSource(61019U);
    msg.setSourceEntity(22U);
    msg.setDestination(26401U);
    msg.setDestinationEntity(159U);
    msg.ch01 = 0.6706598306371592;
    msg.ch02 = 0.16881771423262582;
    msg.ch03 = 0.059537632512394856;
    msg.ch04 = 0.15060037811656068;
    msg.ch05 = 0.7813976219971513;
    msg.ch06 = 0.6782478257649552;
    msg.ch07 = 0.028428223047677892;
    msg.ch08 = 0.04536960400457346;
    msg.ch09 = 0.9541497121793305;
    msg.ch10 = 0.09196301312349486;
    msg.ch11 = 0.9275595351039149;
    msg.ch12 = 0.9373238884976994;
    msg.ch13 = 0.3291355543890524;
    msg.ch14 = 0.946911765287652;
    msg.ch15 = 0.08515542884740912;
    msg.ch16 = 0.5398676079818675;

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
    msg.setTimeStamp(0.8311396912916302);
    msg.setSource(27368U);
    msg.setSourceEntity(250U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(186U);
    msg.op = 31U;
    msg.lat = 0.7166611701040915;
    msg.lon = 0.9994215025635481;
    msg.height = 0.5476803302380281;
    msg.depth = 0.5592696792270296;
    msg.alt = 0.09409329391635024;

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
    msg.setTimeStamp(0.31207068375733227);
    msg.setSource(32862U);
    msg.setSourceEntity(158U);
    msg.setDestination(36874U);
    msg.setDestinationEntity(113U);
    msg.op = 178U;
    msg.lat = 0.6753436165360581;
    msg.lon = 0.7464449134610538;
    msg.height = 0.4044433755484008;
    msg.depth = 0.5975435034835122;
    msg.alt = 0.45466965951050853;

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
    msg.setTimeStamp(0.8977083314366523);
    msg.setSource(40108U);
    msg.setSourceEntity(68U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(210U);
    msg.op = 16U;
    msg.lat = 0.4751656279186025;
    msg.lon = 0.12014431294352046;
    msg.height = 0.7977123686218536;
    msg.depth = 0.5006850887947171;
    msg.alt = 0.007607256264994144;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.8059740134523014);
    msg.setSource(48837U);
    msg.setSourceEntity(104U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.29132797385807396;
    msg.speed = 0.8014796909705092;
    msg.turbulence = 0.3519912778793124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.5836606420367759);
    msg.setSource(30185U);
    msg.setSourceEntity(251U);
    msg.setDestination(2169U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.7239839384103327;
    msg.speed = 0.544185851747768;
    msg.turbulence = 0.31563598010508287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.8953729768469549);
    msg.setSource(14700U);
    msg.setSourceEntity(218U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(93U);
    msg.direction = 0.3893654301549683;
    msg.speed = 0.27510732921205283;
    msg.turbulence = 0.9342379136185256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.4788181699488069);
    msg.setSource(1129U);
    msg.setSourceEntity(230U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(183U);
    msg.msg_type.assign("XXXHNUUEFOHRTMZ");
    msg.sensor_class.assign("ZRIPLLMHCBVSOKYANNBTFYOGUZLODTHQMMPSFOPXOVAEEYRVJCMLOSQWXEXGEMIQSBUHQWXIZQSONJLAUHABAKCQGDIOLUYYANANWJCMCUEHPYCPDFQIRKKAUCDTIVSIRLPMDJCGGZVKJNJSBWKHJXSUQRDVRQWRUEBENFPYZWIFTKVKQMTDXZEOPUXZD");
    msg.mmsi.assign("OENHPXMLKTCWIXTFLJVCAQSZUUDYTXIQY");
    msg.callsign.assign("UZBUUIHVQMTETCKSQLAKGLCBKCAVYRQICZSYWXXDJLTZUGEKADAVVBTFCRHFTEEIEHZPFAGXZOKBXDVWMPPOJGHFDSLJJQBQSEXETYKBXYSCRPUNDMNCXJDLDZORHPMYQIIFMDAAMTUVVWPVFWNPMSHAOGKSHQWJZREDSPOGFKNXVUWRIYSFDEKOYPRAJOHNMJIBOIHNFQQNWGEMWMLIUXBRNJZYTIFNWQSLJZ");
    msg.name.assign("RNDFCVZWSFUBKHPYNIWDJXDZYUXWYGOKHKC");
    msg.nav_status = 183U;
    msg.type_and_cargo = 72U;
    msg.lat = 0.8693244116580197;
    msg.lon = 0.34392029937375845;
    msg.course = 0.5223105566237914;
    msg.speed = 0.9066140501571439;
    msg.dist = 0.5068288328574195;
    msg.a = 0.6850512008822297;
    msg.b = 0.8731512004619802;
    msg.c = 0.09657412549218392;
    msg.d = 0.20779549035106126;
    msg.draught = 0.4732762174141678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.4397685664557599);
    msg.setSource(46991U);
    msg.setSourceEntity(27U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(45U);
    msg.msg_type.assign("BONFXXPJPQFKQZIAVWBBUGYRJQIUSDVKTTRFSQASGDYGBCEZZEPFUCDINMHSAQEIOFJORMUEGAF");
    msg.sensor_class.assign("CCTVQRMPZKQHFAETZIEXLKUDQDITKAWVHFOLDHCVWVCNRYZNJCFRWSESWLGPYLBFSMHOMPMIXJUETKIBFZQIPATUZWTEIBBGTHPBWMKNAZBJNKAHXNBYCOJVHBGMIIMPQTBOQVDOAUJOWPGLNJMYSASDXCWAPXUIOFSDDLGUMTJRXYQBLDYXLFYRAORJZFVDPEZTUHGYHEZAQNYQNRFGK");
    msg.mmsi.assign("XVGJSMHGANEVCLDNHYTYRATGOXJDJXHBDAEZZLGNNQWCLMJIRYXCIFBFKAVQBXTB");
    msg.callsign.assign("YULEUDRGGSQTPLHAICZVRJUXXAPSVAKOXISBQHHWESUGGOZVDPVTJPHTOZDQYDNXMLNIXUFOBSAZHPCCRLLWSOECLUFPMCCBAKDFJAYWNFXVMFXETXWUFCQZZUXRVNDFVYYLJQLSMTWJKBZMJCMEWRHWCQTBQJHYKXRUPYDHTGBIJMTZEEOKOAFKASIGQUBFLDZZRMDRVPTBONAKRGIPAJYNJVVMHQOKKEGCBNETHKWNDBY");
    msg.name.assign("UQGDXPVMXMNTDOOGSTZZMNGWYXKPPUHVACFJJTVKZZHSAWGXGWQMAEJKLYYRTFYDYOCEKRTKSIKYWZDTSHCIUGUEAUNMFBEIHBEGJWJRCRKZDMNFUWQZODLOESTFPCRYCWSJPFHTQAXBIUDOJCQNOHIRAYWQBENFLEVLGVDNNSFMXMMBZXWIYSJVRTIKPHVLJNEAIWOARABFVZXIORXPQH");
    msg.nav_status = 183U;
    msg.type_and_cargo = 251U;
    msg.lat = 0.629063852044946;
    msg.lon = 0.11570782216545916;
    msg.course = 0.8439885269581565;
    msg.speed = 0.7899948262329611;
    msg.dist = 0.43819263814651666;
    msg.a = 0.27161037148599965;
    msg.b = 0.5136254577856887;
    msg.c = 0.7828830186548453;
    msg.d = 0.26258695822686084;
    msg.draught = 0.7184353974711036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.010929389194613282);
    msg.setSource(11482U);
    msg.setSourceEntity(102U);
    msg.setDestination(50159U);
    msg.setDestinationEntity(23U);
    msg.msg_type.assign("IEQODSOYCZLDSMNKXPJJSKBUVOEMDQGTAGSWPVGZDCNIACSUBWYLRTXNJXCGKSRCTQTMTEYXBMRZFTAELITYMCDQIEQCTXHKKMRFIYHFBCFHOQKPGHZZVOWWNDKFJGYYKUPBWZKEEBWVDRAIAQCYXNZJINVETJAOLVRANWAMUJDVIUPWXTESBFZJPYWXHRJSUUQYQXILWHG");
    msg.sensor_class.assign("VSJRBAEBGENNMMZPTTDXVDVLECRDZRSLHZHTBJXVCJTGXWTBWGPFZMPESDXUEWKVHEYVOAZNOAKCBVXCKAJNHQZMCZVZIBLYFMBILKBKISMOGKUAQQTGSQLNQNSJXYYLFWXQIUKNWPPTLUYIUAAOJNILYNXEGDRRGQYFWVTWAIYYK");
    msg.mmsi.assign("NHCNMOFLIJSUWJWAFXBQRBDZHJECSRMHIVQAJFCYPTBIJICLVMYQRUZSEXPEYBY");
    msg.callsign.assign("PTSNGXDBVQZPTIEFZATCZRWKODQTBRIPNGISYJLCRZFRZVNEBPHBESZTHXSCHNPEMQTOAMGVLRMJJNSNICGBVEEMAUSNTPYJMPSHDYVQIFIMBNXEVTJFQLFQUWZVES");
    msg.name.assign("OSJKKMVYRMLFECWYSQQIJONRYWAGZVOPJRWFDDOLLFUGGIIJGFXZI");
    msg.nav_status = 118U;
    msg.type_and_cargo = 83U;
    msg.lat = 0.4705707851823866;
    msg.lon = 0.5861102293623652;
    msg.course = 0.770269732590961;
    msg.speed = 0.9424910782358243;
    msg.dist = 0.9641382306516133;
    msg.a = 0.32041967991376974;
    msg.b = 0.3467784379400156;
    msg.c = 0.8949624493045323;
    msg.d = 0.21535900156735255;
    msg.draught = 0.7130923360567365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6498558660667514);
    msg.setSource(10695U);
    msg.setSourceEntity(210U);
    msg.setDestination(52891U);
    msg.setDestinationEntity(238U);
    msg.nbeams = 202U;
    msg.ncells = 162U;
    msg.coord_sys = 193U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.004024180122290999;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.5481794892267827;
    tmp_tmp_msg_0_0.amp = 0.7201028238250916;
    tmp_tmp_msg_0_0.cor = 4;
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
    msg.setTimeStamp(0.5932097826847331);
    msg.setSource(39913U);
    msg.setSourceEntity(180U);
    msg.setDestination(22869U);
    msg.setDestinationEntity(159U);
    msg.nbeams = 217U;
    msg.ncells = 83U;
    msg.coord_sys = 235U;

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
    msg.setTimeStamp(0.2943249274017351);
    msg.setSource(4715U);
    msg.setSourceEntity(160U);
    msg.setDestination(8871U);
    msg.setDestinationEntity(71U);
    msg.nbeams = 159U;
    msg.ncells = 123U;
    msg.coord_sys = 25U;

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
    msg.setTimeStamp(0.0964282610486662);
    msg.setSource(34721U);
    msg.setSourceEntity(19U);
    msg.setDestination(3071U);
    msg.setDestinationEntity(137U);
    msg.cell_position = 0.9106622980688241;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6225828537457452;
    tmp_msg_0.amp = 0.1867986931479103;
    tmp_msg_0.cor = -87;
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
    msg.setTimeStamp(0.9285287115410505);
    msg.setSource(32609U);
    msg.setSourceEntity(128U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(244U);
    msg.cell_position = 0.052712103624395046;

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
    msg.setTimeStamp(0.8083634569362395);
    msg.setSource(1602U);
    msg.setSourceEntity(95U);
    msg.setDestination(59685U);
    msg.setDestinationEntity(107U);
    msg.cell_position = 0.6138629613192018;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.13320042576383173;
    tmp_msg_0.amp = 0.7606617502106996;
    tmp_msg_0.cor = -57;
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
    msg.setTimeStamp(0.9195766451789853);
    msg.setSource(5482U);
    msg.setSourceEntity(244U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(30U);
    msg.vel = 0.32061081869118613;
    msg.amp = 0.3581291208418872;
    msg.cor = -10;

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
    msg.setTimeStamp(0.2588353182967894);
    msg.setSource(18471U);
    msg.setSourceEntity(168U);
    msg.setDestination(28171U);
    msg.setDestinationEntity(173U);
    msg.vel = 0.12092092250516917;
    msg.amp = 0.21705312499935514;
    msg.cor = 74;

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
    msg.setTimeStamp(0.6448483423467684);
    msg.setSource(58517U);
    msg.setSourceEntity(12U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(153U);
    msg.vel = 0.732713457348235;
    msg.amp = 0.4516937492163876;
    msg.cor = -114;

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
    msg.setTimeStamp(0.34213058542444175);
    msg.setSource(37267U);
    msg.setSourceEntity(245U);
    msg.setDestination(3572U);
    msg.setDestinationEntity(216U);
    msg.name.assign("AITWSADETAZCSRNJAAARLBZETDTRPFUNAINWZYEJPTNGPOELLVJDTHZMMLSQPOBSMJHSWRLRKQCGHDCBUNBTVYENAQIWHKJJNDAKBMWXQRZGKJXOTAPVHYUXYXRYINBEOFQGSGFYTHYOOIPKGYCIZKRHJEZHJBBEOQDHFQICUXUXMGEDMGPIDKFMQZVKGBQWOFMCXSMUCLCOLXIMU");
    msg.value = 149U;

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
    msg.setTimeStamp(0.3913869292048814);
    msg.setSource(36831U);
    msg.setSourceEntity(58U);
    msg.setDestination(57536U);
    msg.setDestinationEntity(25U);
    msg.name.assign("HEXAZXWPPKJHWIMNRURGECDNSAKASGFNLUZJBSCRMTKCKUDUEJOIRJDHOTNTVWEJDZLUIYITLQCSLQVYJKSFGTPDOXEQSFQNAXOFPIOADPUDFUMEYXPPMHNIFCCAKJRRXLBRGISXWGGBBQSKNIHONVYMDDWOWYXSRVPZVJEHRAWDYGNVYEHOTQPUAUMLBOMPZETKYYGTQ");
    msg.value = 158U;

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
    msg.setTimeStamp(0.3085551677562969);
    msg.setSource(44168U);
    msg.setSourceEntity(232U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(131U);
    msg.name.assign("GDCFJPJJRYLDZZCSSCJSRZSCMTEOJRVYOIDVPLQLMQWAKDWHSAXRYTAEMMOKEHPIJHHZFSHALEENPQQDBWGGGCSSEGLVIVYTISZQXMZXTBPQALTTXBJBUKUGWZZUVVMJNONXBFG");
    msg.value = 205U;

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
    msg.setTimeStamp(0.9583399879067045);
    msg.setSource(23494U);
    msg.setSourceEntity(194U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(115U);
    msg.name.assign("BZMBWGLUGLFYSRZUAMGOTXRZTVHCWZFEKRRCHDVNTPHYORCNDXFUGWMJBFYARWXLPTOQUMENWVMJQIYBIOPSMJSOGYTMETLCQOXKSJGGPNPCV");

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
    msg.setTimeStamp(0.42032248426188346);
    msg.setSource(22163U);
    msg.setSourceEntity(61U);
    msg.setDestination(8284U);
    msg.setDestinationEntity(33U);
    msg.name.assign("JNEHYVAFVZIZYDNMPCDWZMDOKDXBAKFETIWJVWNIHJIGGVOXDNGPCRFYYOWEKDOLRRXXXMQIAYFPRCEPIVZQJDAVBCTJKFJRGXXRRKHQKKYBQHHTQLBUXDSLJDQLSGHQSOOIWFHUOUGTCJEXFUTPAZBZBGAJHEPWARBRENSPMSIOROUDTVIGZUWLKCXBCBNGFZHTPUZCMMOZWTAMCIVN");

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
    msg.setTimeStamp(0.6203490775930224);
    msg.setSource(26057U);
    msg.setSourceEntity(97U);
    msg.setDestination(48341U);
    msg.setDestinationEntity(7U);
    msg.name.assign("SIOSLOKLBDFHZQZGDYAKFPICYTTYRJVRQAFQOBUGYAVIXCWKBHSFXZPRWYXDHNBFKZJGETXXVOUNGVVVIFRPBUOMISDZHAA");

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
    msg.setTimeStamp(0.003846132780049638);
    msg.setSource(20414U);
    msg.setSourceEntity(137U);
    msg.setDestination(23675U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HLIVDBFIUYLQKFQKRWTSFMKDGYLPKWFTLQHMRYFFOEJBUSETQMVZPKCTALMTNWOGENCOMYCHZIWCNIUSOWPBSGIYBQXXKEUGTRIEHWZFWPHJHAPPOBDDQARXPPHZWLLODMHKBYS");
    msg.value = 155U;

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
    msg.setTimeStamp(0.6606738401123896);
    msg.setSource(44821U);
    msg.setSourceEntity(148U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(113U);
    msg.name.assign("ECSCUWVJDHKZRMTMWXGICOWLKTQMWRIQNZFSOWIQCMATSADSTLHOCDINDKOQFRRLDPLZUVXBNKURDJVLORXIQPALLZBWPZJXXYWQEBENREORHWVZYOPIFXFIXJBKATFGPMKWSFVPGTQPCAXUHQGSILGOHUGMUATSINZOBXUUKDEVWINLGUCVJGEHMUFVPQ");
    msg.value = 221U;

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
    msg.setTimeStamp(0.6305576889280127);
    msg.setSource(22427U);
    msg.setSourceEntity(200U);
    msg.setDestination(54722U);
    msg.setDestinationEntity(131U);
    msg.name.assign("NFMZOBEZQJKKLUTCMQOOAOFBNGMEEMQPSCDMACWWMYRCWTGPSDWXPWPUXIEATNYUJZAJJSLLQTHYIVNRGGUWXOAYTXFEEJCZOKVEIRSTKMHAQDJBRIBPHGVHXUATBCDIVXSDGBUHVHKNTSPUQTAYFCLBHBNDURIDLGIWKFNVFACRIPVDYVHEY");
    msg.value = 38U;

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
    msg.setTimeStamp(0.88350082459559);
    msg.setSource(46412U);
    msg.setSourceEntity(175U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(111U);
    msg.value = 0.4281598105876069;

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
    msg.setTimeStamp(0.6896084293064527);
    msg.setSource(9610U);
    msg.setSourceEntity(203U);
    msg.setDestination(42018U);
    msg.setDestinationEntity(214U);
    msg.value = 0.04698121893048468;

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
    msg.setTimeStamp(0.9378352739048742);
    msg.setSource(61797U);
    msg.setSourceEntity(10U);
    msg.setDestination(13214U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9822550496503053;

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
    msg.setTimeStamp(0.4221731278646347);
    msg.setSource(38115U);
    msg.setSourceEntity(136U);
    msg.setDestination(7328U);
    msg.setDestinationEntity(199U);
    msg.value = 0.7158413329228277;

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
    msg.setTimeStamp(0.23512308472232335);
    msg.setSource(9643U);
    msg.setSourceEntity(145U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5020973378691177;

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
    msg.setTimeStamp(0.20261341378177655);
    msg.setSource(38138U);
    msg.setSourceEntity(75U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(48U);
    msg.value = 0.3239130903108196;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.7965693869722688);
    msg.setSource(28686U);
    msg.setSourceEntity(202U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6238055917179417;

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
    msg.setTimeStamp(0.07841661521185295);
    msg.setSource(14478U);
    msg.setSourceEntity(6U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6119053924478078;

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
    msg.setTimeStamp(0.7091649228645681);
    msg.setSource(20004U);
    msg.setSourceEntity(108U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8861819018941747;

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
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.6504713174072398);
    msg.setSource(25922U);
    msg.setSourceEntity(182U);
    msg.setDestination(53407U);
    msg.setDestinationEntity(65U);
    msg.restriction = 8U;
    msg.reason.assign("KYWRLXAAXATUOVFWVZAKEBGWXLGHVCYPFQNBCGPLTOEUQDQKQMGSJRBHFIMAPKIABOYMDIKQESZMMDUQRTNPSZIYJWHOCJRT");

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
    msg.setTimeStamp(0.3972303130051924);
    msg.setSource(63268U);
    msg.setSourceEntity(197U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(187U);
    msg.restriction = 138U;
    msg.reason.assign("ZYDHVLBNKWZINGFOJQGRVEIIBDXHHHGBKYIIWLZQBNCZEHJTVDEWURLJUOLRRCZMTOWHVRNKGCDTZGXFDSMMRMAMZDEJGMYQAHPPHPXYNTR");

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
    msg.setTimeStamp(0.9684286691477821);
    msg.setSource(41252U);
    msg.setSourceEntity(88U);
    msg.setDestination(55548U);
    msg.setDestinationEntity(123U);
    msg.restriction = 87U;
    msg.reason.assign("OJDAVOJSYIYCGCFUITGQPUBQNMWCLYZYZARDADPJXMJOMYSHEFBFEXUHQKGKSEUVJLLYYPAFRBAKPXJSLYRMXIUARZYNHVOHTETMGFSD");

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

  return test.getReturnValue();
}
